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
meta2->setContent("Humanoid2.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("identifier");
meta3->setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid2.x3d");
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
Coordinate173->setPoint(new float[6]{0.1101,0.0656,-0.0736,0.08,0.0175,-0.0608});
LineSet171->setCoord(*Coordinate173);

Shape170->setGeometry(LineSet171);

HAnimSegment166->addChildren(*Shape170);

HAnimJoint165->addChildren(*HAnimSegment166);

CHAnimJoint* HAnimJoint174 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint174->setDEF("hanim_l_tarsometatarsal_1");
HAnimJoint174->setName("l_tarsometatarsal_2");
HAnimJoint174->setCenter(new float[3]{0.08,0.0175,-0.0608});
CHAnimSegment* HAnimSegment175 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment175->setDEF("hanim_l_metatarsal_1");
HAnimSegment175->setName("l_metatarsal_2");
CTransform* Transform176 = (CTransform *)(m_pScene.createNode("Transform"));
Transform176->setTranslation(new float[3]{0.08,0.0175,-0.0608});
CTransform* Transform177 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape178 = (CShape *)(m_pScene.createNode("Shape"));
Shape178->setUSE("HAnimJointShape");
Transform177->addChild(*Shape178);

Transform176->addChildren(*Transform177);

HAnimSegment175->addChildren(*Transform176);

CShape* Shape179 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet180 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet180->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA181 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA181->setUSE("HAnimSegmentLineColorRGBA");
LineSet180->setColor(*ColorRGBA181);

CCoordinate* Coordinate182 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate182->setPoint(new float[6]{0.08,0.0175,-0.0608,0.0824,0.0064,-0.004});
LineSet180->setCoord(*Coordinate182);

Shape179->setGeometry(LineSet180);

HAnimSegment175->addChildren(*Shape179);

HAnimJoint174->addChildren(*HAnimSegment175);

CHAnimJoint* HAnimJoint183 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint183->setDEF("hanim_l_metatarsophalangeal_1");
HAnimJoint183->setName("l_metatarsophalangeal_2");
HAnimJoint183->setCenter(new float[3]{0.0824,0.0064,-0.004});
CHAnimSegment* HAnimSegment184 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment184->setDEF("hanim_l_tarsal_proximal_phalanx_1");
HAnimSegment184->setName("l_tarsal_proximal_phalanx_2");
CTransform* Transform185 = (CTransform *)(m_pScene.createNode("Transform"));
Transform185->setTranslation(new float[3]{0.0824,0.0064,-0.004});
CTransform* Transform186 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape187 = (CShape *)(m_pScene.createNode("Shape"));
Shape187->setUSE("HAnimJointShape");
Transform186->addChild(*Shape187);

Transform185->addChildren(*Transform186);

HAnimSegment184->addChildren(*Transform185);

CShape* Shape188 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet189 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet189->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA190 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA190->setUSE("HAnimSegmentLineColorRGBA");
LineSet189->setColor(*ColorRGBA190);

CCoordinate* Coordinate191 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate191->setPoint(new float[6]{0.0824,0.0064,-0.004,0.0841,0.0013,0.0216});
LineSet189->setCoord(*Coordinate191);

Shape188->setGeometry(LineSet189);

HAnimSegment184->addChildren(*Shape188);

CHAnimSite* HAnimSite192 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite192->setDEF("hanim_l_tarsal_distal_phalanx_2_tip");
HAnimSite192->setName("l_tarsal_distal_phalanx_2_tip");
HAnimSite192->setTranslation(new float[3]{0.1195,0.0079,0.1433});
CTouchSensor* TouchSensor193 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor193->setDescription("HAnimSite l_tarsal_distal_phalanx_2_tip");
HAnimSite192->addChildren(*TouchSensor193);

CShape* Shape194 = (CShape *)(m_pScene.createNode("Shape"));
Shape194->setUSE("HAnimSiteShape");
HAnimSite192->addChildren(*Shape194);

HAnimSegment184->addChildren(*HAnimSite192);

HAnimJoint183->addChildren(*HAnimSegment184);

CHAnimJoint* HAnimJoint195 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint195->setDEF("hanim_l_tarsal_distal_interphalangeal_1");
HAnimJoint195->setName("l_tarsal_distal_interphalangeal_2");
HAnimJoint195->setCenter(new float[3]{0.0841,0.0013,0.0216});
HAnimJoint183->addChildren(*HAnimJoint195);

HAnimJoint174->addChildren(*HAnimJoint183);

HAnimJoint165->addChildren(*HAnimJoint174);

HAnimJoint150->addChildren(*HAnimJoint165);

HAnimJoint132->addChildren(*HAnimJoint150);

HAnimJoint95->addChildren(*HAnimJoint132);

CHAnimJoint* HAnimJoint196 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint196->setDEF("hanim_r_hip");
HAnimJoint196->setName("r_hip");
HAnimJoint196->setCenter(new float[3]{-0.095,0.9171,0.0029});
CHAnimSegment* HAnimSegment197 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment197->setDEF("hanim_r_thigh");
HAnimSegment197->setName("r_thigh");
CTransform* Transform198 = (CTransform *)(m_pScene.createNode("Transform"));
Transform198->setTranslation(new float[3]{-0.095,0.9171,0.0029});
CTransform* Transform199 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape200 = (CShape *)(m_pScene.createNode("Shape"));
Shape200->setUSE("HAnimJointShape");
Transform199->addChild(*Shape200);

Transform198->addChildren(*Transform199);

HAnimSegment197->addChildren(*Transform198);

CShape* Shape201 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet202 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet202->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA203 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA203->setUSE("HAnimSegmentLineColorRGBA");
LineSet202->setColor(*ColorRGBA203);

CCoordinate* Coordinate204 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate204->setPoint(new float[6]{-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318});
LineSet202->setCoord(*Coordinate204);

Shape201->setGeometry(LineSet202);

HAnimSegment197->addChildren(*Shape201);

CHAnimSite* HAnimSite205 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite205->setDEF("hanim_r_lateral_malleolus_pt");
HAnimSite205->setName("r_lateral_malleolus_pt");
HAnimSite205->setTranslation(new float[3]{-0.1006,0.0658,-0.1075});
CTouchSensor* TouchSensor206 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor206->setDescription("HAnimSite r_lateral_malleolus_pt");
HAnimSite205->addChildren(*TouchSensor206);

CShape* Shape207 = (CShape *)(m_pScene.createNode("Shape"));
Shape207->setUSE("HAnimSiteShape");
HAnimSite205->addChildren(*Shape207);

HAnimSegment197->addChildren(*HAnimSite205);

CHAnimSite* HAnimSite208 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite208->setDEF("hanim_r_medial_malleolus_pt");
HAnimSite208->setName("r_medial_malleolus_pt");
HAnimSite208->setTranslation(new float[3]{-0.0591,0.076,-0.0928});
CTouchSensor* TouchSensor209 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor209->setDescription("HAnimSite r_medial_malleolus_pt");
HAnimSite208->addChildren(*TouchSensor209);

CShape* Shape210 = (CShape *)(m_pScene.createNode("Shape"));
Shape210->setUSE("HAnimSiteShape");
HAnimSite208->addChildren(*Shape210);

HAnimSegment197->addChildren(*HAnimSite208);

CHAnimSite* HAnimSite211 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite211->setDEF("hanim_r_tibiale_pt");
HAnimSite211->setName("r_tibiale_pt");
CTouchSensor* TouchSensor212 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor212->setDescription("HAnimSite r_tibiale_pt");
HAnimSite211->addChildren(*TouchSensor212);

CShape* Shape213 = (CShape *)(m_pScene.createNode("Shape"));
Shape213->setUSE("HAnimSiteShape");
HAnimSite211->addChildren(*Shape213);

HAnimSegment197->addChildren(*HAnimSite211);

HAnimJoint196->addChildren(*HAnimSegment197);

CHAnimJoint* HAnimJoint214 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint214->setDEF("hanim_r_knee");
HAnimJoint214->setName("r_knee");
HAnimJoint214->setCenter(new float[3]{-0.0867,0.4913,0.0318});
CHAnimSegment* HAnimSegment215 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment215->setDEF("hanim_r_calf");
HAnimSegment215->setName("r_calf");
CTransform* Transform216 = (CTransform *)(m_pScene.createNode("Transform"));
Transform216->setTranslation(new float[3]{-0.0867,0.4913,0.0318});
CTransform* Transform217 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape218 = (CShape *)(m_pScene.createNode("Shape"));
Shape218->setUSE("HAnimJointShape");
Transform217->addChild(*Shape218);

Transform216->addChildren(*Transform217);

HAnimSegment215->addChildren(*Transform216);

CShape* Shape219 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet220 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet220->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA221 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA221->setUSE("HAnimSegmentLineColorRGBA");
LineSet220->setColor(*ColorRGBA221);

CCoordinate* Coordinate222 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate222->setPoint(new float[6]{-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766});
LineSet220->setCoord(*Coordinate222);

Shape219->setGeometry(LineSet220);

HAnimSegment215->addChildren(*Shape219);

CHAnimSite* HAnimSite223 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite223->setDEF("hanim_r_calcaneus_posterior_pt");
HAnimSite223->setName("r_calcaneus_posterior_pt");
HAnimSite223->setTranslation(new float[3]{-0.0692,0.0297,-0.1221});
CTouchSensor* TouchSensor224 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor224->setDescription("HAnimSite r_calcaneus_posterior_pt");
HAnimSite223->addChildren(*TouchSensor224);

CShape* Shape225 = (CShape *)(m_pScene.createNode("Shape"));
Shape225->setUSE("HAnimSiteShape");
HAnimSite223->addChildren(*Shape225);

HAnimSegment215->addChildren(*HAnimSite223);

CHAnimSite* HAnimSite226 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite226->setDEF("hanim_r_sphyrion_pt");
HAnimSite226->setName("r_sphyrion_pt");
HAnimSite226->setTranslation(new float[3]{-0.0603,0.061,-0.1002});
CTouchSensor* TouchSensor227 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor227->setDescription("HAnimSite r_sphyrion_pt");
HAnimSite226->addChildren(*TouchSensor227);

CShape* Shape228 = (CShape *)(m_pScene.createNode("Shape"));
Shape228->setUSE("HAnimSiteShape");
HAnimSite226->addChildren(*Shape228);

HAnimSegment215->addChildren(*HAnimSite226);

HAnimJoint214->addChildren(*HAnimSegment215);

CHAnimJoint* HAnimJoint229 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint229->setDEF("hanim_r_talocrural");
HAnimJoint229->setName("r_talocrural");
HAnimJoint229->setCenter(new float[3]{-0.0801,0.0712,-0.0766});
CHAnimSegment* HAnimSegment230 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment230->setDEF("hanim_r_talus");
HAnimSegment230->setName("r_talus");
CTransform* Transform231 = (CTransform *)(m_pScene.createNode("Transform"));
Transform231->setTranslation(new float[3]{-0.05,0.06,-0.025});
Transform231->setRotation(new float[4]{1,0,0,-1.57});
Transform231->setScale(new float[3]{0.15,0.15,0.15});
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
Coordinate237->setPoint(new float[6]{-0.0801,0.0712,-0.0766,-0.08,0.0175,-0.0608});
LineSet235->setCoord(*Coordinate237);

Shape234->setGeometry(LineSet235);

HAnimSegment230->addChildren(*Shape234);

HAnimJoint229->addChildren(*HAnimSegment230);

CHAnimJoint* HAnimJoint238 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint238->setDEF("hanim_r_tarsometatarsal_1");
HAnimJoint238->setName("r_tarsometatarsal_2");
HAnimJoint238->setCenter(new float[3]{-0.08,0.0175,-0.0608});
CHAnimSegment* HAnimSegment239 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment239->setDEF("hanim_r_metatarsal_1");
HAnimSegment239->setName("r_metatarsal_2");
CTransform* Transform240 = (CTransform *)(m_pScene.createNode("Transform"));
Transform240->setTranslation(new float[3]{-0.08,0.0175,-0.0608});
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
Coordinate246->setPoint(new float[6]{-0.08,0.0175,-0.0608,-0.0823,0.0064,-0.004});
LineSet244->setCoord(*Coordinate246);

Shape243->setGeometry(LineSet244);

HAnimSegment239->addChildren(*Shape243);

HAnimJoint238->addChildren(*HAnimSegment239);

CHAnimJoint* HAnimJoint247 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint247->setDEF("hanim_r_metatarsophalangeal_1");
HAnimJoint247->setName("r_metatarsophalangeal_2");
HAnimJoint247->setCenter(new float[3]{-0.0823,0.0064,-0.004});
CHAnimSegment* HAnimSegment248 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment248->setDEF("hanim_r_tarsal_proximal_phalanx_1");
HAnimSegment248->setName("r_tarsal_proximal_phalanx_2");
CTransform* Transform249 = (CTransform *)(m_pScene.createNode("Transform"));
Transform249->setTranslation(new float[3]{-0.0823,0.0064,-0.004});
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
Coordinate255->setPoint(new float[6]{-0.0823,0.0064,-0.004,-0.0841,0.0013,0.0216});
LineSet253->setCoord(*Coordinate255);

Shape252->setGeometry(LineSet253);

HAnimSegment248->addChildren(*Shape252);

CHAnimSite* HAnimSite256 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite256->setDEF("hanim_r_tarsal_distal_phalanx_2_tip");
HAnimSite256->setName("r_tarsal_distal_phalanx_2_tip");
HAnimSite256->setTranslation(new float[3]{-0.0883,0.0134,0.1383});
CTouchSensor* TouchSensor257 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor257->setDescription("HAnimSite r_tarsal_distal_phalanx_2_tip");
HAnimSite256->addChildren(*TouchSensor257);

CShape* Shape258 = (CShape *)(m_pScene.createNode("Shape"));
Shape258->setUSE("HAnimSiteShape");
HAnimSite256->addChildren(*Shape258);

HAnimSegment248->addChildren(*HAnimSite256);

HAnimJoint247->addChildren(*HAnimSegment248);

CHAnimJoint* HAnimJoint259 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint259->setDEF("hanim_r_tarsal_distal_interphalangeal_1");
HAnimJoint259->setName("r_tarsal_distal_interphalangeal_2");
HAnimJoint259->setCenter(new float[3]{-0.0841,0.0013,0.0216});
HAnimJoint247->addChildren(*HAnimJoint259);

HAnimJoint238->addChildren(*HAnimJoint247);

HAnimJoint229->addChildren(*HAnimJoint238);

HAnimJoint214->addChildren(*HAnimJoint229);

HAnimJoint196->addChildren(*HAnimJoint214);

HAnimJoint95->addChildren(*HAnimJoint196);

HAnimJoint43->addChildren(*HAnimJoint95);

CHAnimJoint* HAnimJoint260 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint260->setDEF("hanim_vl5");
HAnimJoint260->setName("vl5");
HAnimJoint260->setCenter(new float[3]{0.0028,1.0568,-0.0776});
CHAnimSegment* HAnimSegment261 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment261->setDEF("hanim_l5");
HAnimSegment261->setName("l5");
CTransform* Transform262 = (CTransform *)(m_pScene.createNode("Transform"));
Transform262->setTranslation(new float[3]{0.0028,1.0568,-0.0776});
CTransform* Transform263 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape264 = (CShape *)(m_pScene.createNode("Shape"));
Shape264->setUSE("HAnimJointShape");
Transform263->addChild(*Shape264);

Transform262->addChildren(*Transform263);

HAnimSegment261->addChildren(*Transform262);

CShape* Shape265 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet266 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet266->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA267 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA267->setUSE("HAnimSegmentLineColorRGBA");
LineSet266->setColor(*ColorRGBA267);

CCoordinate* Coordinate268 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate268->setPoint(new float[6]{0.0028,1.0568,-0.0776,0.0041,1.1276,-0.0796});
LineSet266->setCoord(*Coordinate268);

Shape265->setGeometry(LineSet266);

HAnimSegment261->addChildren(*Shape265);

HAnimJoint260->addChildren(*HAnimSegment261);

CHAnimJoint* HAnimJoint269 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint269->setDEF("hanim_vl3");
HAnimJoint269->setName("vl3");
HAnimJoint269->setCenter(new float[3]{0.0041,1.1276,-0.0796});
CHAnimSegment* HAnimSegment270 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment270->setDEF("hanim_l3");
HAnimSegment270->setName("l3");
CTransform* Transform271 = (CTransform *)(m_pScene.createNode("Transform"));
Transform271->setTranslation(new float[3]{0.0041,1.1276,-0.0796});
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
Coordinate277->setPoint(new float[6]{0.0041,1.1276,-0.0796,0.0048,1.1912,-0.0805});
LineSet275->setCoord(*Coordinate277);

Shape274->setGeometry(LineSet275);

HAnimSegment270->addChildren(*Shape274);

HAnimJoint269->addChildren(*HAnimSegment270);

CHAnimJoint* HAnimJoint278 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint278->setDEF("hanim_vl1");
HAnimJoint278->setName("vl1");
HAnimJoint278->setCenter(new float[3]{0.0048,1.1912,-0.0805});
CHAnimSegment* HAnimSegment279 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment279->setDEF("hanim_l1");
HAnimSegment279->setName("l1");
CTransform* Transform280 = (CTransform *)(m_pScene.createNode("Transform"));
Transform280->setTranslation(new float[3]{0.0048,1.1912,-0.0805});
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
Coordinate286->setPoint(new float[6]{0.0048,1.1912,-0.0805,0.0056,1.2848,-0.0822});
LineSet284->setCoord(*Coordinate286);

Shape283->setGeometry(LineSet284);

HAnimSegment279->addChildren(*Shape283);

CHAnimSite* HAnimSite287 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite287->setDEF("hanim_substernale_pt");
HAnimSite287->setName("substernale_pt");
HAnimSite287->setTranslation(new float[3]{0.0085,1.2995,0.1147});
CTouchSensor* TouchSensor288 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor288->setDescription("HAnimSite substernale_pt");
HAnimSite287->addChildren(*TouchSensor288);

CShape* Shape289 = (CShape *)(m_pScene.createNode("Shape"));
Shape289->setUSE("HAnimSiteShape");
HAnimSite287->addChildren(*Shape289);

HAnimSegment279->addChildren(*HAnimSite287);

HAnimJoint278->addChildren(*HAnimSegment279);

CHAnimJoint* HAnimJoint290 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint290->setDEF("hanim_vt10");
HAnimJoint290->setName("vt10");
HAnimJoint290->setCenter(new float[3]{0.0056,1.2848,-0.0822});
CHAnimSegment* HAnimSegment291 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment291->setDEF("hanim_t10");
HAnimSegment291->setName("t10");
CTransform* Transform292 = (CTransform *)(m_pScene.createNode("Transform"));
Transform292->setTranslation(new float[3]{0.0056,1.2848,-0.0822});
CTransform* Transform293 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape294 = (CShape *)(m_pScene.createNode("Shape"));
Shape294->setUSE("HAnimJointShape");
Transform293->addChild(*Shape294);

Transform292->addChildren(*Transform293);

HAnimSegment291->addChildren(*Transform292);

CShape* Shape295 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet296 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet296->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA297 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA297->setUSE("HAnimSegmentLineColorRGBA");
LineSet296->setColor(*ColorRGBA297);

CCoordinate* Coordinate298 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate298->setPoint(new float[6]{0.0056,1.2848,-0.0822,0.0059,1.3866,-0.08});
LineSet296->setCoord(*Coordinate298);

Shape295->setGeometry(LineSet296);

HAnimSegment291->addChildren(*Shape295);

CHAnimSite* HAnimSite299 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite299->setDEF("hanim_l_chest_midsagittal_plane_pt");
HAnimSite299->setName("l_chest_midsagittal_plane_pt");
CTouchSensor* TouchSensor300 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor300->setDescription("HAnimSite l_chest_midsagittal_plane_pt");
HAnimSite299->addChildren(*TouchSensor300);

CShape* Shape301 = (CShape *)(m_pScene.createNode("Shape"));
Shape301->setUSE("HAnimSiteShape");
HAnimSite299->addChildren(*Shape301);

HAnimSegment291->addChildren(*HAnimSite299);

CHAnimSite* HAnimSite302 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite302->setDEF("hanim_mesosternale_pt");
HAnimSite302->setName("mesosternale_pt");
CTouchSensor* TouchSensor303 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor303->setDescription("HAnimSite mesosternale_pt");
HAnimSite302->addChildren(*TouchSensor303);

CShape* Shape304 = (CShape *)(m_pScene.createNode("Shape"));
Shape304->setUSE("HAnimSiteShape");
HAnimSite302->addChildren(*Shape304);

HAnimSegment291->addChildren(*HAnimSite302);

CHAnimSite* HAnimSite305 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite305->setDEF("hanim_r_chest_midsagittal_plane_pt");
HAnimSite305->setName("r_chest_midsagittal_plane_pt");
CTouchSensor* TouchSensor306 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor306->setDescription("HAnimSite r_chest_midsagittal_plane_pt");
HAnimSite305->addChildren(*TouchSensor306);

CShape* Shape307 = (CShape *)(m_pScene.createNode("Shape"));
Shape307->setUSE("HAnimSiteShape");
HAnimSite305->addChildren(*Shape307);

HAnimSegment291->addChildren(*HAnimSite305);

CHAnimSite* HAnimSite308 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite308->setDEF("hanim_rear_center_midsagittal_plane_pt");
HAnimSite308->setName("rear_center_midsagittal_plane_pt");
CTouchSensor* TouchSensor309 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor309->setDescription("HAnimSite rear_center_midsagittal_plane_pt");
HAnimSite308->addChildren(*TouchSensor309);

CShape* Shape310 = (CShape *)(m_pScene.createNode("Shape"));
Shape310->setUSE("HAnimSiteShape");
HAnimSite308->addChildren(*Shape310);

HAnimSegment291->addChildren(*HAnimSite308);

HAnimJoint290->addChildren(*HAnimSegment291);

CHAnimJoint* HAnimJoint311 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint311->setDEF("hanim_vt6");
HAnimJoint311->setName("vt6");
HAnimJoint311->setCenter(new float[3]{0.0059,1.3866,-0.08});
CHAnimSegment* HAnimSegment312 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment312->setDEF("hanim_t6");
HAnimSegment312->setName("t6");
CTransform* Transform313 = (CTransform *)(m_pScene.createNode("Transform"));
Transform313->setTranslation(new float[3]{0.0059,1.3866,-0.08});
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
Coordinate319->setPoint(new float[6]{0.0059,1.3866,-0.08,0.0065,1.4951,-0.0387});
LineSet317->setCoord(*Coordinate319);

Shape316->setGeometry(LineSet317);

HAnimSegment312->addChildren(*Shape316);

CHAnimSite* HAnimSite320 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite320->setDEF("hanim_cervicale_pt");
HAnimSite320->setName("cervicale_pt");
HAnimSite320->setTranslation(new float[3]{0.0064,1.52,-0.0815});
CTouchSensor* TouchSensor321 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor321->setDescription("HAnimSite cervicale_pt");
HAnimSite320->addChildren(*TouchSensor321);

CShape* Shape322 = (CShape *)(m_pScene.createNode("Shape"));
Shape322->setUSE("HAnimSiteShape");
HAnimSite320->addChildren(*Shape322);

HAnimSegment312->addChildren(*HAnimSite320);

CHAnimSite* HAnimSite323 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite323->setDEF("hanim_suprasternale_pt");
HAnimSite323->setName("suprasternale_pt");
HAnimSite323->setTranslation(new float[3]{0.0084,1.4714,0.0551});
CTouchSensor* TouchSensor324 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor324->setDescription("HAnimSite suprasternale_pt");
HAnimSite323->addChildren(*TouchSensor324);

CShape* Shape325 = (CShape *)(m_pScene.createNode("Shape"));
Shape325->setUSE("HAnimSiteShape");
HAnimSite323->addChildren(*Shape325);

HAnimSegment312->addChildren(*HAnimSite323);

HAnimJoint311->addChildren(*HAnimSegment312);

CHAnimJoint* HAnimJoint326 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint326->setDEF("hanim_vt1");
HAnimJoint326->setName("vt1");
HAnimJoint326->setCenter(new float[3]{0.0065,1.4951,-0.0387});
CHAnimSegment* HAnimSegment327 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment327->setDEF("hanim_t1");
HAnimSegment327->setName("t1");
CTransform* Transform328 = (CTransform *)(m_pScene.createNode("Transform"));
Transform328->setTranslation(new float[3]{0.0065,1.4951,-0.0387});
CTransform* Transform329 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape330 = (CShape *)(m_pScene.createNode("Shape"));
Shape330->setUSE("HAnimJointShape");
Transform329->addChild(*Shape330);

Transform328->addChildren(*Transform329);

HAnimSegment327->addChildren(*Transform328);

CShape* Shape331 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet332 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet332->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA333 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA333->setUSE("HAnimSegmentLineColorRGBA");
LineSet332->setColor(*ColorRGBA333);

CCoordinate* Coordinate334 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate334->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.0066,1.5662,-0.0084});
LineSet332->setCoord(*Coordinate334);

Shape331->setGeometry(LineSet332);

HAnimSegment327->addChildren(*Shape331);

CShape* Shape335 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet336 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet336->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA337 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA337->setUSE("HAnimSegmentLineColorRGBA");
LineSet336->setColor(*ColorRGBA337);

CCoordinate* Coordinate338 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate338->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353});
LineSet336->setCoord(*Coordinate338);

Shape335->setGeometry(LineSet336);

HAnimSegment327->addChildren(*Shape335);

CHAnimSite* HAnimSite339 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite339->setDEF("hanim_l_acromion_pt");
HAnimSite339->setName("l_acromion_pt");
HAnimSite339->setTranslation(new float[3]{0.2032,1.476,-0.049});
CTouchSensor* TouchSensor340 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor340->setDescription("HAnimSite l_acromion_pt");
HAnimSite339->addChildren(*TouchSensor340);

CShape* Shape341 = (CShape *)(m_pScene.createNode("Shape"));
Shape341->setUSE("HAnimSiteShape");
HAnimSite339->addChildren(*Shape341);

HAnimSegment327->addChildren(*HAnimSite339);

CHAnimSite* HAnimSite342 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite342->setDEF("hanim_l_axilla_distal_pt");
HAnimSite342->setName("l_axilla_distal_pt");
HAnimSite342->setTranslation(new float[3]{0.1706,1.4072,-0.0875});
CTouchSensor* TouchSensor343 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor343->setDescription("HAnimSite l_axilla_distal_pt");
HAnimSite342->addChildren(*TouchSensor343);

CShape* Shape344 = (CShape *)(m_pScene.createNode("Shape"));
Shape344->setUSE("HAnimSiteShape");
HAnimSite342->addChildren(*Shape344);

HAnimSegment327->addChildren(*HAnimSite342);

CHAnimSite* HAnimSite345 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite345->setDEF("hanim_l_axilla_posterior_folds_pt");
HAnimSite345->setName("l_axilla_posterior_folds_pt");
CTouchSensor* TouchSensor346 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor346->setDescription("HAnimSite l_axilla_posterior_folds_pt");
HAnimSite345->addChildren(*TouchSensor346);

CShape* Shape347 = (CShape *)(m_pScene.createNode("Shape"));
Shape347->setUSE("HAnimSiteShape");
HAnimSite345->addChildren(*Shape347);

HAnimSegment327->addChildren(*HAnimSite345);

CHAnimSite* HAnimSite348 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite348->setDEF("hanim_l_axilla_proximal_pt");
HAnimSite348->setName("l_axilla_proximal_pt");
HAnimSite348->setTranslation(new float[3]{0.1777,1.4065,-0.0075});
CTouchSensor* TouchSensor349 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor349->setDescription("HAnimSite l_axilla_proximal_pt");
HAnimSite348->addChildren(*TouchSensor349);

CShape* Shape350 = (CShape *)(m_pScene.createNode("Shape"));
Shape350->setUSE("HAnimSiteShape");
HAnimSite348->addChildren(*Shape350);

HAnimSegment327->addChildren(*HAnimSite348);

CHAnimSite* HAnimSite351 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite351->setDEF("hanim_l_clavicale_pt");
HAnimSite351->setName("l_clavicale_pt");
HAnimSite351->setTranslation(new float[3]{0.0271,1.4943,0.0394});
CTouchSensor* TouchSensor352 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor352->setDescription("HAnimSite l_clavicale_pt");
HAnimSite351->addChildren(*TouchSensor352);

CShape* Shape353 = (CShape *)(m_pScene.createNode("Shape"));
Shape353->setUSE("HAnimSiteShape");
HAnimSite351->addChildren(*Shape353);

HAnimSegment327->addChildren(*HAnimSite351);

CShape* Shape354 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet355 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet355->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA356 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA356->setUSE("HAnimSegmentLineColorRGBA");
LineSet355->setColor(*ColorRGBA356);

CCoordinate* Coordinate357 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate357->setPoint(new float[6]{0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033});
LineSet355->setCoord(*Coordinate357);

Shape354->setGeometry(LineSet355);

HAnimSegment327->addChildren(*Shape354);

CHAnimSite* HAnimSite358 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite358->setDEF("hanim_r_acromion_pt");
HAnimSite358->setName("r_acromion_pt");
HAnimSite358->setTranslation(new float[3]{-0.1905,1.4791,-0.0431});
CTouchSensor* TouchSensor359 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor359->setDescription("HAnimSite r_acromion_pt");
HAnimSite358->addChildren(*TouchSensor359);

CShape* Shape360 = (CShape *)(m_pScene.createNode("Shape"));
Shape360->setUSE("HAnimSiteShape");
HAnimSite358->addChildren(*Shape360);

HAnimSegment327->addChildren(*HAnimSite358);

CHAnimSite* HAnimSite361 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite361->setDEF("hanim_r_axilla_distal_pt");
HAnimSite361->setName("r_axilla_distal_pt");
HAnimSite361->setTranslation(new float[3]{-0.1603,1.4098,-0.0826});
CTouchSensor* TouchSensor362 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor362->setDescription("HAnimSite r_axilla_distal_pt");
HAnimSite361->addChildren(*TouchSensor362);

CShape* Shape363 = (CShape *)(m_pScene.createNode("Shape"));
Shape363->setUSE("HAnimSiteShape");
HAnimSite361->addChildren(*Shape363);

HAnimSegment327->addChildren(*HAnimSite361);

CHAnimSite* HAnimSite364 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite364->setDEF("hanim_r_axilla_posterior_folds_pt");
HAnimSite364->setName("r_axilla_posterior_folds_pt");
CTouchSensor* TouchSensor365 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor365->setDescription("HAnimSite r_axilla_posterior_folds_pt");
HAnimSite364->addChildren(*TouchSensor365);

CShape* Shape366 = (CShape *)(m_pScene.createNode("Shape"));
Shape366->setUSE("HAnimSiteShape");
HAnimSite364->addChildren(*Shape366);

HAnimSegment327->addChildren(*HAnimSite364);

CHAnimSite* HAnimSite367 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite367->setDEF("hanim_r_axilla_proximal_pt");
HAnimSite367->setName("r_axilla_proximal_pt");
HAnimSite367->setTranslation(new float[3]{-0.1626,1.4072,-0.0031});
CTouchSensor* TouchSensor368 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor368->setDescription("HAnimSite r_axilla_proximal_pt");
HAnimSite367->addChildren(*TouchSensor368);

CShape* Shape369 = (CShape *)(m_pScene.createNode("Shape"));
Shape369->setUSE("HAnimSiteShape");
HAnimSite367->addChildren(*Shape369);

HAnimSegment327->addChildren(*HAnimSite367);

CHAnimSite* HAnimSite370 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite370->setDEF("hanim_r_clavicale_pt");
HAnimSite370->setName("r_clavicale_pt");
HAnimSite370->setTranslation(new float[3]{-0.0115,1.4943,0.04});
CTouchSensor* TouchSensor371 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor371->setDescription("HAnimSite r_clavicale_pt");
HAnimSite370->addChildren(*TouchSensor371);

CShape* Shape372 = (CShape *)(m_pScene.createNode("Shape"));
Shape372->setUSE("HAnimSiteShape");
HAnimSite370->addChildren(*Shape372);

HAnimSegment327->addChildren(*HAnimSite370);

HAnimJoint326->addChildren(*HAnimSegment327);

CHAnimJoint* HAnimJoint373 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint373->setDEF("hanim_vc4");
HAnimJoint373->setName("vc4");
HAnimJoint373->setCenter(new float[3]{0.0066,1.5662,-0.0084});
CHAnimSegment* HAnimSegment374 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment374->setDEF("hanim_c4");
HAnimSegment374->setName("c4");
CTransform* Transform375 = (CTransform *)(m_pScene.createNode("Transform"));
Transform375->setTranslation(new float[3]{0.0066,1.5662,-0.0084});
CTransform* Transform376 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape377 = (CShape *)(m_pScene.createNode("Shape"));
Shape377->setUSE("HAnimJointShape");
Transform376->addChild(*Shape377);

Transform375->addChildren(*Transform376);

HAnimSegment374->addChildren(*Transform375);

CShape* Shape378 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet379 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet379->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA380 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA380->setUSE("HAnimSegmentLineColorRGBA");
LineSet379->setColor(*ColorRGBA380);

CCoordinate* Coordinate381 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate381->setPoint(new float[6]{0.0066,1.5662,-0.0084,0.0066,1.5928,-0.0103});
LineSet379->setCoord(*Coordinate381);

Shape378->setGeometry(LineSet379);

HAnimSegment374->addChildren(*Shape378);

CHAnimSite* HAnimSite382 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite382->setDEF("hanim_adams_apple_pt");
HAnimSite382->setName("adams_apple_pt");
CTouchSensor* TouchSensor383 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor383->setDescription("HAnimSite adams_apple_pt");
HAnimSite382->addChildren(*TouchSensor383);

CShape* Shape384 = (CShape *)(m_pScene.createNode("Shape"));
Shape384->setUSE("HAnimSiteShape");
HAnimSite382->addChildren(*Shape384);

HAnimSegment374->addChildren(*HAnimSite382);

HAnimJoint373->addChildren(*HAnimSegment374);

CHAnimJoint* HAnimJoint385 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint385->setDEF("hanim_vc2");
HAnimJoint385->setName("vc2");
HAnimJoint385->setCenter(new float[3]{0.0066,1.5928,-0.0103});
CHAnimSegment* HAnimSegment386 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment386->setDEF("hanim_c2");
HAnimSegment386->setName("c2");
CTransform* Transform387 = (CTransform *)(m_pScene.createNode("Transform"));
Transform387->setTranslation(new float[3]{0.0066,1.5928,-0.0103});
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
Coordinate393->setPoint(new float[6]{0.0066,1.5928,-0.0103,0.0044,1.6209,0.0236});
LineSet391->setCoord(*Coordinate393);

Shape390->setGeometry(LineSet391);

HAnimSegment386->addChildren(*Shape390);

CHAnimSite* HAnimSite394 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite394->setDEF("hanim_glabella_pt");
HAnimSite394->setName("glabella_pt");
CTouchSensor* TouchSensor395 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor395->setDescription("HAnimSite glabella_pt");
HAnimSite394->addChildren(*TouchSensor395);

CShape* Shape396 = (CShape *)(m_pScene.createNode("Shape"));
Shape396->setUSE("HAnimSiteShape");
HAnimSite394->addChildren(*Shape396);

HAnimSegment386->addChildren(*HAnimSite394);

CHAnimSite* HAnimSite397 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite397->setDEF("hanim_l_ectocanthus_pt");
HAnimSite397->setName("l_ectocanthus_pt");
CTouchSensor* TouchSensor398 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor398->setDescription("HAnimSite l_ectocanthus_pt");
HAnimSite397->addChildren(*TouchSensor398);

CShape* Shape399 = (CShape *)(m_pScene.createNode("Shape"));
Shape399->setUSE("HAnimSiteShape");
HAnimSite397->addChildren(*Shape399);

HAnimSegment386->addChildren(*HAnimSite397);

CHAnimSite* HAnimSite400 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite400->setDEF("hanim_l_infraorbitale_pt");
HAnimSite400->setName("l_infraorbitale_pt");
HAnimSite400->setTranslation(new float[3]{0.0341,1.6171,0.0752});
CTouchSensor* TouchSensor401 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor401->setDescription("HAnimSite l_infraorbitale_pt");
HAnimSite400->addChildren(*TouchSensor401);

CShape* Shape402 = (CShape *)(m_pScene.createNode("Shape"));
Shape402->setUSE("HAnimSiteShape");
HAnimSite400->addChildren(*Shape402);

HAnimSegment386->addChildren(*HAnimSite400);

CHAnimSite* HAnimSite403 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite403->setDEF("hanim_l_tragion_pt");
HAnimSite403->setName("l_tragion_pt");
HAnimSite403->setTranslation(new float[3]{0.0739,1.6348,0.0282});
CTouchSensor* TouchSensor404 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor404->setDescription("HAnimSite l_tragion_pt");
HAnimSite403->addChildren(*TouchSensor404);

CShape* Shape405 = (CShape *)(m_pScene.createNode("Shape"));
Shape405->setUSE("HAnimSiteShape");
HAnimSite403->addChildren(*Shape405);

HAnimSegment386->addChildren(*HAnimSite403);

CHAnimSite* HAnimSite406 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite406->setDEF("hanim_nuchale_pt");
HAnimSite406->setName("nuchale_pt");
HAnimSite406->setTranslation(new float[3]{0.0039,1.5972,-0.0796});
CTouchSensor* TouchSensor407 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor407->setDescription("HAnimSite nuchale_pt");
HAnimSite406->addChildren(*TouchSensor407);

CShape* Shape408 = (CShape *)(m_pScene.createNode("Shape"));
Shape408->setUSE("HAnimSiteShape");
HAnimSite406->addChildren(*Shape408);

HAnimSegment386->addChildren(*HAnimSite406);

CHAnimSite* HAnimSite409 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite409->setDEF("hanim_opisthocranion_pt");
HAnimSite409->setName("opisthocranion_pt");
CTouchSensor* TouchSensor410 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor410->setDescription("HAnimSite opisthocranion_pt");
HAnimSite409->addChildren(*TouchSensor410);

CShape* Shape411 = (CShape *)(m_pScene.createNode("Shape"));
Shape411->setUSE("HAnimSiteShape");
HAnimSite409->addChildren(*Shape411);

HAnimSegment386->addChildren(*HAnimSite409);

CHAnimSite* HAnimSite412 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite412->setDEF("hanim_r_ectocanthus_pt");
HAnimSite412->setName("r_ectocanthus_pt");
CTouchSensor* TouchSensor413 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor413->setDescription("HAnimSite r_ectocanthus_pt");
HAnimSite412->addChildren(*TouchSensor413);

CShape* Shape414 = (CShape *)(m_pScene.createNode("Shape"));
Shape414->setUSE("HAnimSiteShape");
HAnimSite412->addChildren(*Shape414);

HAnimSegment386->addChildren(*HAnimSite412);

CHAnimSite* HAnimSite415 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite415->setDEF("hanim_r_infraorbitale_pt");
HAnimSite415->setName("r_infraorbitale_pt");
HAnimSite415->setTranslation(new float[3]{-0.0237,1.6171,0.0752});
CTouchSensor* TouchSensor416 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor416->setDescription("HAnimSite r_infraorbitale_pt");
HAnimSite415->addChildren(*TouchSensor416);

CShape* Shape417 = (CShape *)(m_pScene.createNode("Shape"));
Shape417->setUSE("HAnimSiteShape");
HAnimSite415->addChildren(*Shape417);

HAnimSegment386->addChildren(*HAnimSite415);

CHAnimSite* HAnimSite418 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite418->setDEF("hanim_r_tragion_pt");
HAnimSite418->setName("r_tragion_pt");
HAnimSite418->setTranslation(new float[3]{-0.0646,1.6347,0.0302});
CTouchSensor* TouchSensor419 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor419->setDescription("HAnimSite r_tragion_pt");
HAnimSite418->addChildren(*TouchSensor419);

CShape* Shape420 = (CShape *)(m_pScene.createNode("Shape"));
Shape420->setUSE("HAnimSiteShape");
HAnimSite418->addChildren(*Shape420);

HAnimSegment386->addChildren(*HAnimSite418);

CHAnimSite* HAnimSite421 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite421->setDEF("hanim_sellion_pt");
HAnimSite421->setName("sellion_pt");
HAnimSite421->setTranslation(new float[3]{0.0058,1.6316,0.0852});
CTouchSensor* TouchSensor422 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor422->setDescription("HAnimSite sellion_pt");
HAnimSite421->addChildren(*TouchSensor422);

CShape* Shape423 = (CShape *)(m_pScene.createNode("Shape"));
Shape423->setUSE("HAnimSiteShape");
HAnimSite421->addChildren(*Shape423);

HAnimSegment386->addChildren(*HAnimSite421);

CHAnimSite* HAnimSite424 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite424->setDEF("hanim_skull_vertex_pt");
HAnimSite424->setName("skull_vertex_pt");
HAnimSite424->setTranslation(new float[3]{0.005,1.7504,0.0055});
CTouchSensor* TouchSensor425 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor425->setDescription("HAnimSite skull_vertex_pt");
HAnimSite424->addChildren(*TouchSensor425);

CShape* Shape426 = (CShape *)(m_pScene.createNode("Shape"));
Shape426->setUSE("HAnimSiteShape");
HAnimSite424->addChildren(*Shape426);

HAnimSegment386->addChildren(*HAnimSite424);

HAnimJoint385->addChildren(*HAnimSegment386);

CHAnimJoint* HAnimJoint427 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint427->setDEF("hanim_skullbase");
HAnimJoint427->setName("skullbase");
HAnimJoint427->setCenter(new float[3]{0.0044,1.6209,0.0236});
HAnimJoint385->addChildren(*HAnimJoint427);

HAnimJoint373->addChildren(*HAnimJoint385);

HAnimJoint326->addChildren(*HAnimJoint373);

CHAnimJoint* HAnimJoint428 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint428->setDEF("hanim_l_sternoclavicular");
HAnimJoint428->setName("l_sternoclavicular");
HAnimJoint428->setCenter(new float[3]{0.082,1.4488,-0.0353});
CHAnimSegment* HAnimSegment429 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment429->setDEF("hanim_l_clavicle");
HAnimSegment429->setName("l_clavicle");
CTransform* Transform430 = (CTransform *)(m_pScene.createNode("Transform"));
Transform430->setTranslation(new float[3]{0.082,1.4488,-0.0353});
CTransform* Transform431 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape432 = (CShape *)(m_pScene.createNode("Shape"));
Shape432->setUSE("HAnimJointShape");
Transform431->addChild(*Shape432);

Transform430->addChildren(*Transform431);

HAnimSegment429->addChildren(*Transform430);

CShape* Shape433 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet434 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet434->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA435 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA435->setUSE("HAnimSegmentLineColorRGBA");
LineSet434->setColor(*ColorRGBA435);

CCoordinate* Coordinate436 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate436->setPoint(new float[6]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424});
LineSet434->setCoord(*Coordinate436);

Shape433->setGeometry(LineSet434);

HAnimSegment429->addChildren(*Shape433);

HAnimJoint428->addChildren(*HAnimSegment429);

CHAnimJoint* HAnimJoint437 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint437->setDEF("hanim_l_acromioclavicular");
HAnimJoint437->setName("l_acromioclavicular");
HAnimJoint437->setCenter(new float[3]{0.0962,1.4269,-0.0424});
CHAnimSegment* HAnimSegment438 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment438->setDEF("hanim_l_scapula");
HAnimSegment438->setName("l_scapula");
CTransform* Transform439 = (CTransform *)(m_pScene.createNode("Transform"));
Transform439->setTranslation(new float[3]{0.0962,1.4269,-0.0424});
CTransform* Transform440 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape441 = (CShape *)(m_pScene.createNode("Shape"));
Shape441->setUSE("HAnimJointShape");
Transform440->addChild(*Shape441);

Transform439->addChildren(*Transform440);

HAnimSegment438->addChildren(*Transform439);

CShape* Shape442 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet443 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet443->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA444 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA444->setUSE("HAnimSegmentLineColorRGBA");
LineSet443->setColor(*ColorRGBA444);

CCoordinate* Coordinate445 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate445->setPoint(new float[6]{0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387});
LineSet443->setCoord(*Coordinate445);

Shape442->setGeometry(LineSet443);

HAnimSegment438->addChildren(*Shape442);

CHAnimSite* HAnimSite446 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite446->setDEF("hanim_l_bideltoid_pt");
HAnimSite446->setName("l_bideltoid_pt");
CTouchSensor* TouchSensor447 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor447->setDescription("HAnimSite l_bideltoid_pt");
HAnimSite446->addChildren(*TouchSensor447);

CShape* Shape448 = (CShape *)(m_pScene.createNode("Shape"));
Shape448->setUSE("HAnimSiteShape");
HAnimSite446->addChildren(*Shape448);

HAnimSegment438->addChildren(*HAnimSite446);

CHAnimSite* HAnimSite449 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite449->setDEF("hanim_l_humeral_lateral_epicondyles_pt");
HAnimSite449->setName("l_humeral_lateral_epicondyles_pt");
HAnimSite449->setTranslation(new float[3]{0.228,1.1482,-0.11});
CTouchSensor* TouchSensor450 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor450->setDescription("HAnimSite l_humeral_lateral_epicondyles_pt");
HAnimSite449->addChildren(*TouchSensor450);

CShape* Shape451 = (CShape *)(m_pScene.createNode("Shape"));
Shape451->setUSE("HAnimSiteShape");
HAnimSite449->addChildren(*Shape451);

HAnimSegment438->addChildren(*HAnimSite449);

HAnimJoint437->addChildren(*HAnimSegment438);

CHAnimJoint* HAnimJoint452 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint452->setDEF("hanim_l_shoulder");
HAnimJoint452->setName("l_shoulder");
HAnimJoint452->setCenter(new float[3]{0.2029,1.4376,-0.0387});
CHAnimSegment* HAnimSegment453 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment453->setDEF("hanim_l_upperarm");
HAnimSegment453->setName("l_upperarm");
CTransform* Transform454 = (CTransform *)(m_pScene.createNode("Transform"));
Transform454->setTranslation(new float[3]{0.2029,1.4376,-0.0387});
CTransform* Transform455 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape456 = (CShape *)(m_pScene.createNode("Shape"));
Shape456->setUSE("HAnimJointShape");
Transform455->addChild(*Shape456);

Transform454->addChildren(*Transform455);

HAnimSegment453->addChildren(*Transform454);

CShape* Shape457 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet458 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet458->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA459 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA459->setUSE("HAnimSegmentLineColorRGBA");
LineSet458->setColor(*ColorRGBA459);

CCoordinate* Coordinate460 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate460->setPoint(new float[6]{0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682});
LineSet458->setCoord(*Coordinate460);

Shape457->setGeometry(LineSet458);

HAnimSegment453->addChildren(*Shape457);

CHAnimSite* HAnimSite461 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite461->setDEF("hanim_l_humeral_medial_epicondyles_pt");
HAnimSite461->setName("l_humeral_medial_epicondyles_pt");
HAnimSite461->setTranslation(new float[3]{0.1735,1.1272,-0.1113});
CTouchSensor* TouchSensor462 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor462->setDescription("HAnimSite l_humeral_medial_epicondyles_pt");
HAnimSite461->addChildren(*TouchSensor462);

CShape* Shape463 = (CShape *)(m_pScene.createNode("Shape"));
Shape463->setUSE("HAnimSiteShape");
HAnimSite461->addChildren(*Shape463);

HAnimSegment453->addChildren(*HAnimSite461);

CHAnimSite* HAnimSite464 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite464->setDEF("hanim_l_olecranon_pt");
HAnimSite464->setName("l_olecranon_pt");
HAnimSite464->setTranslation(new float[3]{-0.1962,1.1375,-0.1123});
CTouchSensor* TouchSensor465 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor465->setDescription("HAnimSite l_olecranon_pt");
HAnimSite464->addChildren(*TouchSensor465);

CShape* Shape466 = (CShape *)(m_pScene.createNode("Shape"));
Shape466->setUSE("HAnimSiteShape");
HAnimSite464->addChildren(*Shape466);

HAnimSegment453->addChildren(*HAnimSite464);

CHAnimSite* HAnimSite467 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite467->setDEF("hanim_l_radial_styloid_pt");
HAnimSite467->setName("l_radial_styloid_pt");
HAnimSite467->setTranslation(new float[3]{0.1901,0.8645,-0.0415});
CTouchSensor* TouchSensor468 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor468->setDescription("HAnimSite l_radial_styloid_pt");
HAnimSite467->addChildren(*TouchSensor468);

CShape* Shape469 = (CShape *)(m_pScene.createNode("Shape"));
Shape469->setUSE("HAnimSiteShape");
HAnimSite467->addChildren(*Shape469);

HAnimSegment453->addChildren(*HAnimSite467);

CHAnimSite* HAnimSite470 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite470->setDEF("hanim_l_radiale_pt");
HAnimSite470->setName("l_radiale_pt");
HAnimSite470->setTranslation(new float[3]{0.2182,1.1212,-0.1167});
CTouchSensor* TouchSensor471 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor471->setDescription("HAnimSite l_radiale_pt");
HAnimSite470->addChildren(*TouchSensor471);

CShape* Shape472 = (CShape *)(m_pScene.createNode("Shape"));
Shape472->setUSE("HAnimSiteShape");
HAnimSite470->addChildren(*Shape472);

HAnimSegment453->addChildren(*HAnimSite470);

HAnimJoint452->addChildren(*HAnimSegment453);

CHAnimJoint* HAnimJoint473 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint473->setDEF("hanim_l_elbow");
HAnimJoint473->setName("l_elbow");
HAnimJoint473->setCenter(new float[3]{0.2014,1.1357,-0.0682});
CHAnimSegment* HAnimSegment474 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment474->setDEF("hanim_l_forearm");
HAnimSegment474->setName("l_forearm");
CTransform* Transform475 = (CTransform *)(m_pScene.createNode("Transform"));
Transform475->setTranslation(new float[3]{0.2014,1.1357,-0.0682});
CTransform* Transform476 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape477 = (CShape *)(m_pScene.createNode("Shape"));
Shape477->setUSE("HAnimJointShape");
Transform476->addChild(*Shape477);

Transform475->addChildren(*Transform476);

HAnimSegment474->addChildren(*Transform475);

CShape* Shape478 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet479 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet479->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA480 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA480->setUSE("HAnimSegmentLineColorRGBA");
LineSet479->setColor(*ColorRGBA480);

CCoordinate* Coordinate481 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate481->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583});
LineSet479->setCoord(*Coordinate481);

Shape478->setGeometry(LineSet479);

HAnimSegment474->addChildren(*Shape478);

CHAnimSite* HAnimSite482 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite482->setDEF("hanim_l_ulnar_styloid_pt");
HAnimSite482->setName("l_ulnar_styloid_pt");
HAnimSite482->setTranslation(new float[3]{-0.2142,0.8529,-0.0648});
CTouchSensor* TouchSensor483 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor483->setDescription("HAnimSite l_ulnar_styloid_pt");
HAnimSite482->addChildren(*TouchSensor483);

CShape* Shape484 = (CShape *)(m_pScene.createNode("Shape"));
Shape484->setUSE("HAnimSiteShape");
HAnimSite482->addChildren(*Shape484);

HAnimSegment474->addChildren(*HAnimSite482);

HAnimJoint473->addChildren(*HAnimSegment474);

CHAnimJoint* HAnimJoint485 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint485->setDEF("hanim_l_radiocarpal");
HAnimJoint485->setName("l_radiocarpal");
HAnimJoint485->setCenter(new float[3]{0.1984,0.8663,-0.0583});
CHAnimSegment* HAnimSegment486 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment486->setDEF("hanim_l_carpal");
HAnimSegment486->setName("l_carpal");
CTransform* Transform487 = (CTransform *)(m_pScene.createNode("Transform"));
Transform487->setTranslation(new float[3]{0.2,0.85,-0.05});
Transform487->setRotation(new float[4]{0,0,1,-3.14});
Transform487->setScale(new float[3]{0.2,0.2,0.2});
CTransform* Transform488 = (CTransform *)(m_pScene.createNode("Transform"));
Transform488->setRotation(new float[4]{0,1,0,-1.57});
CShape* Shape489 = (CShape *)(m_pScene.createNode("Shape"));
Shape489->setUSE("HAnimJointShape");
Transform488->addChild(*Shape489);

Transform487->addChildren(*Transform488);

HAnimSegment486->addChildren(*Transform487);

CShape* Shape490 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet491 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet491->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA492 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA492->setUSE("HAnimSegmentLineColorRGBA");
LineSet491->setColor(*ColorRGBA492);

CCoordinate* Coordinate493 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate493->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534});
LineSet491->setCoord(*Coordinate493);

Shape490->setGeometry(LineSet491);

HAnimSegment486->addChildren(*Shape490);

CShape* Shape494 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet495 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet495->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA496 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA496->setUSE("HAnimSegmentLineColorRGBA");
LineSet495->setColor(*ColorRGBA496);

CCoordinate* Coordinate497 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate497->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028});
LineSet495->setCoord(*Coordinate497);

Shape494->setGeometry(LineSet495);

HAnimSegment486->addChildren(*Shape494);

CHAnimSite* HAnimSite498 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite498->setDEF("hanim_l_metacarpal_phalanx_2_pt");
HAnimSite498->setName("l_metacarpal_phalanx_2_pt");
HAnimSite498->setTranslation(new float[3]{0.2009,0.8139,-0.0237});
CTouchSensor* TouchSensor499 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor499->setDescription("HAnimSite l_metacarpal_phalanx_2_pt");
HAnimSite498->addChildren(*TouchSensor499);

CShape* Shape500 = (CShape *)(m_pScene.createNode("Shape"));
Shape500->setUSE("HAnimSiteShape");
HAnimSite498->addChildren(*Shape500);

HAnimSegment486->addChildren(*HAnimSite498);

CShape* Shape501 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet502 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet502->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA503 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA503->setUSE("HAnimSegmentLineColorRGBA");
LineSet502->setColor(*ColorRGBA503);

CCoordinate* Coordinate504 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate504->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053});
LineSet502->setCoord(*Coordinate504);

Shape501->setGeometry(LineSet502);

HAnimSegment486->addChildren(*Shape501);

CHAnimSite* HAnimSite505 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite505->setDEF("hanim_l_metacarpal_phalanx_3_pt");
HAnimSite505->setName("l_metacarpal_phalanx_3_pt");
CTouchSensor* TouchSensor506 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor506->setDescription("HAnimSite l_metacarpal_phalanx_3_pt");
HAnimSite505->addChildren(*TouchSensor506);

CShape* Shape507 = (CShape *)(m_pScene.createNode("Shape"));
Shape507->setUSE("HAnimSiteShape");
HAnimSite505->addChildren(*Shape507);

HAnimSegment486->addChildren(*HAnimSite505);

CShape* Shape508 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet509 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet509->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA510 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA510->setUSE("HAnimSegmentLineColorRGBA");
LineSet509->setColor(*ColorRGBA510);

CCoordinate* Coordinate511 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate511->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794});
LineSet509->setCoord(*Coordinate511);

Shape508->setGeometry(LineSet509);

HAnimSegment486->addChildren(*Shape508);

CShape* Shape512 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet513 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet513->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA514 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA514->setUSE("HAnimSegmentLineColorRGBA");
LineSet513->setColor(*ColorRGBA514);

CCoordinate* Coordinate515 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate515->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036});
LineSet513->setCoord(*Coordinate515);

Shape512->setGeometry(LineSet513);

HAnimSegment486->addChildren(*Shape512);

CHAnimSite* HAnimSite516 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite516->setDEF("hanim_l_metacarpal_phalanx_5_pt");
HAnimSite516->setName("l_metacarpal_phalanx_5_pt");
HAnimSite516->setTranslation(new float[3]{0.1929,0.786,-0.1122});
CTouchSensor* TouchSensor517 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor517->setDescription("HAnimSite l_metacarpal_phalanx_5_pt");
HAnimSite516->addChildren(*TouchSensor517);

CShape* Shape518 = (CShape *)(m_pScene.createNode("Shape"));
Shape518->setUSE("HAnimSiteShape");
HAnimSite516->addChildren(*Shape518);

HAnimSegment486->addChildren(*HAnimSite516);

HAnimJoint485->addChildren(*HAnimSegment486);

CHAnimJoint* HAnimJoint519 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint519->setDEF("hanim_l_carpometacarpal_1");
HAnimJoint519->setName("l_carpometacarpal_1");
HAnimJoint519->setCenter(new float[3]{0.1924,0.8472,-0.0534});
CHAnimSegment* HAnimSegment520 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment520->setDEF("hanim_l_metacarpal_1");
HAnimSegment520->setName("l_metacarpal_1");
CTransform* Transform521 = (CTransform *)(m_pScene.createNode("Transform"));
Transform521->setTranslation(new float[3]{0.1924,0.8472,-0.0534});
CTransform* Transform522 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape523 = (CShape *)(m_pScene.createNode("Shape"));
Shape523->setUSE("HAnimJointShape");
Transform522->addChild(*Shape523);

Transform521->addChildren(*Transform522);

HAnimSegment520->addChildren(*Transform521);

CShape* Shape524 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet525 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet525->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA526 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA526->setUSE("HAnimSegmentLineColorRGBA");
LineSet525->setColor(*ColorRGBA526);

CCoordinate* Coordinate527 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate527->setPoint(new float[6]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246});
LineSet525->setCoord(*Coordinate527);

Shape524->setGeometry(LineSet525);

HAnimSegment520->addChildren(*Shape524);

HAnimJoint519->addChildren(*HAnimSegment520);

CHAnimJoint* HAnimJoint528 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint528->setDEF("hanim_l_metacarpophalangeal_1");
HAnimJoint528->setName("l_metacarpophalangeal_1");
HAnimJoint528->setCenter(new float[3]{0.1951,0.8226,0.0246});
CHAnimSegment* HAnimSegment529 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment529->setDEF("hanim_l_carpal_proximal_phalanx_1");
HAnimSegment529->setName("l_carpal_proximal_phalanx_1");
CTransform* Transform530 = (CTransform *)(m_pScene.createNode("Transform"));
Transform530->setTranslation(new float[3]{0.1951,0.8226,0.0246});
CTransform* Transform531 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape532 = (CShape *)(m_pScene.createNode("Shape"));
Shape532->setUSE("HAnimJointShape");
Transform531->addChild(*Shape532);

Transform530->addChildren(*Transform531);

HAnimSegment529->addChildren(*Transform530);

CShape* Shape533 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet534 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet534->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA535 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA535->setUSE("HAnimSegmentLineColorRGBA");
LineSet534->setColor(*ColorRGBA535);

CCoordinate* Coordinate536 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate536->setPoint(new float[6]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464});
LineSet534->setCoord(*Coordinate536);

Shape533->setGeometry(LineSet534);

HAnimSegment529->addChildren(*Shape533);

CHAnimSite* HAnimSite537 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite537->setDEF("hanim_l_carpal_distal_phalanx_1_tip");
HAnimSite537->setName("l_carpal_distal_phalanx_1_tip");
CTouchSensor* TouchSensor538 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor538->setDescription("HAnimSite l_carpal_distal_phalanx_1_tip");
HAnimSite537->addChildren(*TouchSensor538);

CShape* Shape539 = (CShape *)(m_pScene.createNode("Shape"));
Shape539->setUSE("HAnimSiteShape");
HAnimSite537->addChildren(*Shape539);

HAnimSegment529->addChildren(*HAnimSite537);

HAnimJoint528->addChildren(*HAnimSegment529);

CHAnimJoint* HAnimJoint540 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint540->setDEF("hanim_l_carpal_interphalangeal_1");
HAnimJoint540->setName("l_carpal_interphalangeal_1");
HAnimJoint540->setCenter(new float[3]{0.1955,0.8159,0.0464});
HAnimJoint528->addChildren(*HAnimJoint540);

HAnimJoint519->addChildren(*HAnimJoint528);

HAnimJoint485->addChildren(*HAnimJoint519);

CHAnimJoint* HAnimJoint541 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint541->setDEF("hanim_l_carpometacarpal_2");
HAnimJoint541->setName("l_carpometacarpal_2");
HAnimJoint541->setCenter(new float[3]{0.1983,0.8024,-0.028});
CHAnimSegment* HAnimSegment542 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment542->setDEF("hanim_l_metacarpal_2");
HAnimSegment542->setName("l_metacarpal_2");
CTransform* Transform543 = (CTransform *)(m_pScene.createNode("Transform"));
Transform543->setTranslation(new float[3]{0.1983,0.8024,-0.028});
CTransform* Transform544 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape545 = (CShape *)(m_pScene.createNode("Shape"));
Shape545->setUSE("HAnimJointShape");
Transform544->addChild(*Shape545);

Transform543->addChildren(*Transform544);

HAnimSegment542->addChildren(*Transform543);

CShape* Shape546 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet547 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet547->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA548 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA548->setUSE("HAnimSegmentLineColorRGBA");
LineSet547->setColor(*ColorRGBA548);

CCoordinate* Coordinate549 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate549->setPoint(new float[6]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028});
LineSet547->setCoord(*Coordinate549);

Shape546->setGeometry(LineSet547);

HAnimSegment542->addChildren(*Shape546);

HAnimJoint541->addChildren(*HAnimSegment542);

CHAnimJoint* HAnimJoint550 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint550->setDEF("hanim_l_metacarpophalangeal_2");
HAnimJoint550->setName("l_metacarpophalangeal_2");
HAnimJoint550->setCenter(new float[3]{0.1983,0.7815,-0.028});
CHAnimSegment* HAnimSegment551 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment551->setDEF("hanim_l_carpal_proximal_phalanx_2");
HAnimSegment551->setName("l_carpal_proximal_phalanx_2");
CTransform* Transform552 = (CTransform *)(m_pScene.createNode("Transform"));
Transform552->setTranslation(new float[3]{0.1983,0.7815,-0.028});
CTransform* Transform553 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape554 = (CShape *)(m_pScene.createNode("Shape"));
Shape554->setUSE("HAnimJointShape");
Transform553->addChild(*Shape554);

Transform552->addChildren(*Transform553);

HAnimSegment551->addChildren(*Transform552);

CShape* Shape555 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet556 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet556->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA557 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA557->setUSE("HAnimSegmentLineColorRGBA");
LineSet556->setColor(*ColorRGBA557);

CCoordinate* Coordinate558 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate558->setPoint(new float[6]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248});
LineSet556->setCoord(*Coordinate558);

Shape555->setGeometry(LineSet556);

HAnimSegment551->addChildren(*Shape555);

HAnimJoint550->addChildren(*HAnimSegment551);

CHAnimJoint* HAnimJoint559 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint559->setDEF("hanim_l_carpal_proximal_interphalangeal_1");
HAnimJoint559->setName("l_carpal_proximal_interphalangeal_2");
HAnimJoint559->setCenter(new float[3]{0.2017,0.7363,-0.0248});
CHAnimSegment* HAnimSegment560 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment560->setDEF("hanim_l_carpal_middle_phalanx_1");
HAnimSegment560->setName("l_carpal_middle_phalanx_2");
CTransform* Transform561 = (CTransform *)(m_pScene.createNode("Transform"));
Transform561->setTranslation(new float[3]{0.2017,0.7363,-0.0248});
CTransform* Transform562 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape563 = (CShape *)(m_pScene.createNode("Shape"));
Shape563->setUSE("HAnimJointShape");
Transform562->addChild(*Shape563);

Transform561->addChildren(*Transform562);

HAnimSegment560->addChildren(*Transform561);

CShape* Shape564 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet565 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet565->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA566 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA566->setUSE("HAnimSegmentLineColorRGBA");
LineSet565->setColor(*ColorRGBA566);

CCoordinate* Coordinate567 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate567->setPoint(new float[6]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236});
LineSet565->setCoord(*Coordinate567);

Shape564->setGeometry(LineSet565);

HAnimSegment560->addChildren(*Shape564);

CHAnimSite* HAnimSite568 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite568->setDEF("hanim_l_carpal_distal_phalanx_2_tip");
HAnimSite568->setName("l_carpal_distal_phalanx_2_tip");
CTouchSensor* TouchSensor569 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor569->setDescription("HAnimSite l_carpal_distal_phalanx_2_tip");
HAnimSite568->addChildren(*TouchSensor569);

CShape* Shape570 = (CShape *)(m_pScene.createNode("Shape"));
Shape570->setUSE("HAnimSiteShape");
HAnimSite568->addChildren(*Shape570);

HAnimSegment560->addChildren(*HAnimSite568);

CHAnimSite* HAnimSite571 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite571->setDEF("hanim_l_dactylion_pt");
HAnimSite571->setName("l_dactylion_pt");
HAnimSite571->setTranslation(new float[3]{0.2056,0.6743,-0.0482});
CTouchSensor* TouchSensor572 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor572->setDescription("HAnimSite l_dactylion_pt");
HAnimSite571->addChildren(*TouchSensor572);

CShape* Shape573 = (CShape *)(m_pScene.createNode("Shape"));
Shape573->setUSE("HAnimSiteShape");
HAnimSite571->addChildren(*Shape573);

HAnimSegment560->addChildren(*HAnimSite571);

HAnimJoint559->addChildren(*HAnimSegment560);

CHAnimJoint* HAnimJoint574 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint574->setDEF("hanim_l_carpal_distal_interphalangeal_1");
HAnimJoint574->setName("l_carpal_distal_interphalangeal_2");
HAnimJoint574->setCenter(new float[3]{0.2028,0.7139,-0.0236});
HAnimJoint559->addChildren(*HAnimJoint574);

HAnimJoint550->addChildren(*HAnimJoint559);

HAnimJoint541->addChildren(*HAnimJoint550);

HAnimJoint485->addChildren(*HAnimJoint541);

CHAnimJoint* HAnimJoint575 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint575->setDEF("hanim_l_carpometacarpal_3");
HAnimJoint575->setName("l_carpometacarpal_3");
HAnimJoint575->setCenter(new float[3]{0.1987,0.8029,-0.053});
CHAnimSegment* HAnimSegment576 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment576->setDEF("hanim_l_metacarpal_3");
HAnimSegment576->setName("l_metacarpal_3");
CTransform* Transform577 = (CTransform *)(m_pScene.createNode("Transform"));
Transform577->setTranslation(new float[3]{0.1987,0.8029,-0.053});
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
Coordinate583->setPoint(new float[6]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053});
LineSet581->setCoord(*Coordinate583);

Shape580->setGeometry(LineSet581);

HAnimSegment576->addChildren(*Shape580);

HAnimJoint575->addChildren(*HAnimSegment576);

CHAnimJoint* HAnimJoint584 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint584->setDEF("hanim_l_metacarpophalangeal_3");
HAnimJoint584->setName("l_metacarpophalangeal_3");
HAnimJoint584->setCenter(new float[3]{0.1987,0.7818,-0.053});
CHAnimSegment* HAnimSegment585 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment585->setDEF("hanim_l_carpal_proximal_phalanx_3");
HAnimSegment585->setName("l_carpal_proximal_phalanx_3");
CTransform* Transform586 = (CTransform *)(m_pScene.createNode("Transform"));
Transform586->setTranslation(new float[3]{0.1987,0.7818,-0.053});
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
Coordinate592->setPoint(new float[6]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503});
LineSet590->setCoord(*Coordinate592);

Shape589->setGeometry(LineSet590);

HAnimSegment585->addChildren(*Shape589);

HAnimJoint584->addChildren(*HAnimSegment585);

CHAnimJoint* HAnimJoint593 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint593->setDEF("hanim_l_carpal_proximal_interphalangeal_2");
HAnimJoint593->setName("l_carpal_proximal_interphalangeal_3");
HAnimJoint593->setCenter(new float[3]{0.2013,0.7273,-0.0503});
CHAnimSegment* HAnimSegment594 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment594->setDEF("hanim_l_carpal_middle_phalanx_2");
HAnimSegment594->setName("l_carpal_middle_phalanx_3");
CTransform* Transform595 = (CTransform *)(m_pScene.createNode("Transform"));
Transform595->setTranslation(new float[3]{0.2013,0.7273,-0.0503});
CTransform* Transform596 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape597 = (CShape *)(m_pScene.createNode("Shape"));
Shape597->setUSE("HAnimJointShape");
Transform596->addChild(*Shape597);

Transform595->addChildren(*Transform596);

HAnimSegment594->addChildren(*Transform595);

CShape* Shape598 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet599 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet599->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA600 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA600->setUSE("HAnimSegmentLineColorRGBA");
LineSet599->setColor(*ColorRGBA600);

CCoordinate* Coordinate601 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate601->setPoint(new float[6]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494});
LineSet599->setCoord(*Coordinate601);

Shape598->setGeometry(LineSet599);

HAnimSegment594->addChildren(*Shape598);

CHAnimSite* HAnimSite602 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite602->setDEF("hanim_l_carpal_distal_phalanx_3_tip");
HAnimSite602->setName("l_carpal_distal_phalanx_3_tip");
CTouchSensor* TouchSensor603 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor603->setDescription("HAnimSite l_carpal_distal_phalanx_3_tip");
HAnimSite602->addChildren(*TouchSensor603);

CShape* Shape604 = (CShape *)(m_pScene.createNode("Shape"));
Shape604->setUSE("HAnimSiteShape");
HAnimSite602->addChildren(*Shape604);

HAnimSegment594->addChildren(*HAnimSite602);

HAnimJoint593->addChildren(*HAnimSegment594);

CHAnimJoint* HAnimJoint605 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint605->setDEF("hanim_l_carpal_distal_interphalangeal_2");
HAnimJoint605->setName("l_carpal_distal_interphalangeal_3");
HAnimJoint605->setCenter(new float[3]{0.2026,0.7011,-0.0494});
HAnimJoint593->addChildren(*HAnimJoint605);

HAnimJoint584->addChildren(*HAnimJoint593);

HAnimJoint575->addChildren(*HAnimJoint584);

HAnimJoint485->addChildren(*HAnimJoint575);

CHAnimJoint* HAnimJoint606 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint606->setDEF("hanim_l_carpometacarpal_4");
HAnimJoint606->setName("l_carpometacarpal_4");
HAnimJoint606->setCenter(new float[3]{0.1956,0.8019,-0.0794});
CHAnimSegment* HAnimSegment607 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment607->setDEF("hanim_l_metacarpal_4");
HAnimSegment607->setName("l_metacarpal_4");
CTransform* Transform608 = (CTransform *)(m_pScene.createNode("Transform"));
Transform608->setTranslation(new float[3]{0.1956,0.8019,-0.0794});
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
Coordinate614->setPoint(new float[6]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794});
LineSet612->setCoord(*Coordinate614);

Shape611->setGeometry(LineSet612);

HAnimSegment607->addChildren(*Shape611);

HAnimJoint606->addChildren(*HAnimSegment607);

CHAnimJoint* HAnimJoint615 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint615->setDEF("hanim_l_metacarpophalangeal_4");
HAnimJoint615->setName("l_metacarpophalangeal_4");
HAnimJoint615->setCenter(new float[3]{0.1956,0.7815,-0.0794});
CHAnimSegment* HAnimSegment616 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment616->setDEF("hanim_l_carpal_proximal_phalanx_4");
HAnimSegment616->setName("l_carpal_proximal_phalanx_4");
CTransform* Transform617 = (CTransform *)(m_pScene.createNode("Transform"));
Transform617->setTranslation(new float[3]{0.1956,0.7815,-0.0794});
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
Coordinate623->setPoint(new float[6]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777});
LineSet621->setCoord(*Coordinate623);

Shape620->setGeometry(LineSet621);

HAnimSegment616->addChildren(*Shape620);

HAnimJoint615->addChildren(*HAnimSegment616);

CHAnimJoint* HAnimJoint624 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint624->setDEF("hanim_l_carpal_proximal_interphalangeal_3");
HAnimJoint624->setName("l_carpal_proximal_interphalangeal_4");
HAnimJoint624->setCenter(new float[3]{0.1973,0.7287,-0.0777});
CHAnimSegment* HAnimSegment625 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment625->setDEF("hanim_l_carpal_middle_phalanx_3");
HAnimSegment625->setName("l_carpal_middle_phalanx_4");
CTransform* Transform626 = (CTransform *)(m_pScene.createNode("Transform"));
Transform626->setTranslation(new float[3]{0.1973,0.7287,-0.0777});
CTransform* Transform627 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape628 = (CShape *)(m_pScene.createNode("Shape"));
Shape628->setUSE("HAnimJointShape");
Transform627->addChild(*Shape628);

Transform626->addChildren(*Transform627);

HAnimSegment625->addChildren(*Transform626);

CShape* Shape629 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet630 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet630->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA631 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA631->setUSE("HAnimSegmentLineColorRGBA");
LineSet630->setColor(*ColorRGBA631);

CCoordinate* Coordinate632 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate632->setPoint(new float[6]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767});
LineSet630->setCoord(*Coordinate632);

Shape629->setGeometry(LineSet630);

HAnimSegment625->addChildren(*Shape629);

CHAnimSite* HAnimSite633 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite633->setDEF("hanim_l_carpal_distal_phalanx_4_tip");
HAnimSite633->setName("l_carpal_distal_phalanx_4_tip");
CTouchSensor* TouchSensor634 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor634->setDescription("HAnimSite l_carpal_distal_phalanx_4_tip");
HAnimSite633->addChildren(*TouchSensor634);

CShape* Shape635 = (CShape *)(m_pScene.createNode("Shape"));
Shape635->setUSE("HAnimSiteShape");
HAnimSite633->addChildren(*Shape635);

HAnimSegment625->addChildren(*HAnimSite633);

HAnimJoint624->addChildren(*HAnimSegment625);

CHAnimJoint* HAnimJoint636 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint636->setDEF("hanim_l_carpal_distal_interphalangeal_3");
HAnimJoint636->setName("l_carpal_distal_interphalangeal_4");
HAnimJoint636->setCenter(new float[3]{0.1983,0.7045,-0.0767});
HAnimJoint624->addChildren(*HAnimJoint636);

HAnimJoint615->addChildren(*HAnimJoint624);

HAnimJoint606->addChildren(*HAnimJoint615);

HAnimJoint485->addChildren(*HAnimJoint606);

CHAnimJoint* HAnimJoint637 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint637->setDEF("hanim_l_carpometacarpal_5");
HAnimJoint637->setName("l_carpometacarpal_5");
HAnimJoint637->setCenter(new float[3]{0.1925,0.8066,-0.1036});
CHAnimSegment* HAnimSegment638 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment638->setDEF("hanim_l_metacarpal_5");
HAnimSegment638->setName("l_metacarpal_5");
CTransform* Transform639 = (CTransform *)(m_pScene.createNode("Transform"));
Transform639->setTranslation(new float[3]{0.1925,0.8066,-0.1036});
CTransform* Transform640 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape641 = (CShape *)(m_pScene.createNode("Shape"));
Shape641->setUSE("HAnimJointShape");
Transform640->addChild(*Shape641);

Transform639->addChildren(*Transform640);

HAnimSegment638->addChildren(*Transform639);

CShape* Shape642 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet643 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet643->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA644 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA644->setUSE("HAnimSegmentLineColorRGBA");
LineSet643->setColor(*ColorRGBA644);

CCoordinate* Coordinate645 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate645->setPoint(new float[6]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036});
LineSet643->setCoord(*Coordinate645);

Shape642->setGeometry(LineSet643);

HAnimSegment638->addChildren(*Shape642);

HAnimJoint637->addChildren(*HAnimSegment638);

CHAnimJoint* HAnimJoint646 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint646->setDEF("hanim_l_metacarpophalangeal_5");
HAnimJoint646->setName("l_metacarpophalangeal_5");
HAnimJoint646->setCenter(new float[3]{0.1925,0.7866,-0.1036});
CHAnimSegment* HAnimSegment647 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment647->setDEF("hanim_l_carpal_proximal_phalanx_5");
HAnimSegment647->setName("l_carpal_proximal_phalanx_5");
CTransform* Transform648 = (CTransform *)(m_pScene.createNode("Transform"));
Transform648->setTranslation(new float[3]{0.1925,0.7866,-0.1036});
CTransform* Transform649 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape650 = (CShape *)(m_pScene.createNode("Shape"));
Shape650->setUSE("HAnimJointShape");
Transform649->addChild(*Shape650);

Transform648->addChildren(*Transform649);

HAnimSegment647->addChildren(*Transform648);

CShape* Shape651 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet652 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet652->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA653 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA653->setUSE("HAnimSegmentLineColorRGBA");
LineSet652->setColor(*ColorRGBA653);

CCoordinate* Coordinate654 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate654->setPoint(new float[6]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024});
LineSet652->setCoord(*Coordinate654);

Shape651->setGeometry(LineSet652);

HAnimSegment647->addChildren(*Shape651);

HAnimJoint646->addChildren(*HAnimSegment647);

CHAnimJoint* HAnimJoint655 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint655->setDEF("hanim_l_carpal_proximal_interphalangeal_4");
HAnimJoint655->setName("l_carpal_proximal_interphalangeal_5");
HAnimJoint655->setCenter(new float[3]{0.1938,0.7452,-0.1024});
CHAnimSegment* HAnimSegment656 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment656->setDEF("hanim_l_carpal_middle_phalanx_4");
HAnimSegment656->setName("l_carpal_middle_phalanx_5");
CTransform* Transform657 = (CTransform *)(m_pScene.createNode("Transform"));
Transform657->setTranslation(new float[3]{0.1938,0.7452,-0.1024});
CTransform* Transform658 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape659 = (CShape *)(m_pScene.createNode("Shape"));
Shape659->setUSE("HAnimJointShape");
Transform658->addChild(*Shape659);

Transform657->addChildren(*Transform658);

HAnimSegment656->addChildren(*Transform657);

CShape* Shape660 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet661 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet661->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA662 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA662->setUSE("HAnimSegmentLineColorRGBA");
LineSet661->setColor(*ColorRGBA662);

CCoordinate* Coordinate663 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate663->setPoint(new float[6]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017});
LineSet661->setCoord(*Coordinate663);

Shape660->setGeometry(LineSet661);

HAnimSegment656->addChildren(*Shape660);

CHAnimSite* HAnimSite664 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite664->setDEF("hanim_l_carpal_distal_phalanx_5_tip");
HAnimSite664->setName("l_carpal_distal_phalanx_5_tip");
CTouchSensor* TouchSensor665 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor665->setDescription("HAnimSite l_carpal_distal_phalanx_5_tip");
HAnimSite664->addChildren(*TouchSensor665);

CShape* Shape666 = (CShape *)(m_pScene.createNode("Shape"));
Shape666->setUSE("HAnimSiteShape");
HAnimSite664->addChildren(*Shape666);

HAnimSegment656->addChildren(*HAnimSite664);

HAnimJoint655->addChildren(*HAnimSegment656);

CHAnimJoint* HAnimJoint667 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint667->setDEF("hanim_l_carpal_distal_interphalangeal_4");
HAnimJoint667->setName("l_carpal_distal_interphalangeal_5");
HAnimJoint667->setCenter(new float[3]{0.1948,0.7277,-0.1017});
HAnimJoint655->addChildren(*HAnimJoint667);

HAnimJoint646->addChildren(*HAnimJoint655);

HAnimJoint637->addChildren(*HAnimJoint646);

HAnimJoint485->addChildren(*HAnimJoint637);

HAnimJoint473->addChildren(*HAnimJoint485);

HAnimJoint452->addChildren(*HAnimJoint473);

HAnimJoint437->addChildren(*HAnimJoint452);

HAnimJoint428->addChildren(*HAnimJoint437);

HAnimJoint326->addChildren(*HAnimJoint428);

CHAnimJoint* HAnimJoint668 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint668->setDEF("hanim_r_sternoclavicular");
HAnimJoint668->setName("r_sternoclavicular");
HAnimJoint668->setCenter(new float[3]{-0.0694,1.46,-0.033});
CHAnimSegment* HAnimSegment669 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment669->setDEF("hanim_r_clavicle");
HAnimSegment669->setName("r_clavicle");
CTransform* Transform670 = (CTransform *)(m_pScene.createNode("Transform"));
Transform670->setTranslation(new float[3]{-0.0694,1.46,-0.033});
CTransform* Transform671 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape672 = (CShape *)(m_pScene.createNode("Shape"));
Shape672->setUSE("HAnimJointShape");
Transform671->addChild(*Shape672);

Transform670->addChildren(*Transform671);

HAnimSegment669->addChildren(*Transform670);

CShape* Shape673 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet674 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet674->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA675 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA675->setUSE("HAnimSegmentLineColorRGBA");
LineSet674->setColor(*ColorRGBA675);

CCoordinate* Coordinate676 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate676->setPoint(new float[6]{-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401});
LineSet674->setCoord(*Coordinate676);

Shape673->setGeometry(LineSet674);

HAnimSegment669->addChildren(*Shape673);

HAnimJoint668->addChildren(*HAnimSegment669);

CHAnimJoint* HAnimJoint677 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint677->setDEF("hanim_r_acromioclavicular");
HAnimJoint677->setName("r_acromioclavicular");
HAnimJoint677->setCenter(new float[3]{-0.0836,1.4281,-0.0401});
CHAnimSegment* HAnimSegment678 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment678->setDEF("hanim_r_scapula");
HAnimSegment678->setName("r_scapula");
CTransform* Transform679 = (CTransform *)(m_pScene.createNode("Transform"));
Transform679->setTranslation(new float[3]{-0.0836,1.4281,-0.0401});
CTransform* Transform680 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape681 = (CShape *)(m_pScene.createNode("Shape"));
Shape681->setUSE("HAnimJointShape");
Transform680->addChild(*Shape681);

Transform679->addChildren(*Transform680);

HAnimSegment678->addChildren(*Transform679);

CShape* Shape682 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet683 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet683->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA684 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA684->setUSE("HAnimSegmentLineColorRGBA");
LineSet683->setColor(*ColorRGBA684);

CCoordinate* Coordinate685 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate685->setPoint(new float[6]{-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325});
LineSet683->setCoord(*Coordinate685);

Shape682->setGeometry(LineSet683);

HAnimSegment678->addChildren(*Shape682);

CHAnimSite* HAnimSite686 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite686->setDEF("hanim_r_bideltoid_pt");
HAnimSite686->setName("r_bideltoid_pt");
CTouchSensor* TouchSensor687 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor687->setDescription("HAnimSite r_bideltoid_pt");
HAnimSite686->addChildren(*TouchSensor687);

CShape* Shape688 = (CShape *)(m_pScene.createNode("Shape"));
Shape688->setUSE("HAnimSiteShape");
HAnimSite686->addChildren(*Shape688);

HAnimSegment678->addChildren(*HAnimSite686);

CHAnimSite* HAnimSite689 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite689->setDEF("hanim_r_humeral_lateral_epicondyles_pt");
HAnimSite689->setName("r_humeral_lateral_epicondyles_pt");
HAnimSite689->setTranslation(new float[3]{-0.2224,1.1517,-0.1033});
CTouchSensor* TouchSensor690 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor690->setDescription("HAnimSite r_humeral_lateral_epicondyles_pt");
HAnimSite689->addChildren(*TouchSensor690);

CShape* Shape691 = (CShape *)(m_pScene.createNode("Shape"));
Shape691->setUSE("HAnimSiteShape");
HAnimSite689->addChildren(*Shape691);

HAnimSegment678->addChildren(*HAnimSite689);

HAnimJoint677->addChildren(*HAnimSegment678);

CHAnimJoint* HAnimJoint692 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint692->setDEF("hanim_r_shoulder");
HAnimJoint692->setName("r_shoulder");
HAnimJoint692->setCenter(new float[3]{-0.1907,1.4407,-0.0325});
CHAnimSegment* HAnimSegment693 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment693->setDEF("hanim_r_upperarm");
HAnimSegment693->setName("r_upperarm");
CTransform* Transform694 = (CTransform *)(m_pScene.createNode("Transform"));
Transform694->setTranslation(new float[3]{-0.1907,1.4407,-0.0325});
CTransform* Transform695 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape696 = (CShape *)(m_pScene.createNode("Shape"));
Shape696->setUSE("HAnimJointShape");
Transform695->addChild(*Shape696);

Transform694->addChildren(*Transform695);

HAnimSegment693->addChildren(*Transform694);

CShape* Shape697 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet698 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet698->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA699 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA699->setUSE("HAnimSegmentLineColorRGBA");
LineSet698->setColor(*ColorRGBA699);

CCoordinate* Coordinate700 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate700->setPoint(new float[6]{-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062});
LineSet698->setCoord(*Coordinate700);

Shape697->setGeometry(LineSet698);

HAnimSegment693->addChildren(*Shape697);

CHAnimSite* HAnimSite701 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite701->setDEF("hanim_r_humeral_medial_epicondyles_pt");
HAnimSite701->setName("r_humeral_medial_epicondyles_pt");
HAnimSite701->setTranslation(new float[3]{-0.168,1.1298,-0.1062});
CTouchSensor* TouchSensor702 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor702->setDescription("HAnimSite r_humeral_medial_epicondyles_pt");
HAnimSite701->addChildren(*TouchSensor702);

CShape* Shape703 = (CShape *)(m_pScene.createNode("Shape"));
Shape703->setUSE("HAnimSiteShape");
HAnimSite701->addChildren(*Shape703);

HAnimSegment693->addChildren(*HAnimSite701);

CHAnimSite* HAnimSite704 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite704->setDEF("hanim_r_olecranon_pt");
HAnimSite704->setName("r_olecranon_pt");
HAnimSite704->setTranslation(new float[3]{-0.1907,1.1405,-0.1065});
CTouchSensor* TouchSensor705 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor705->setDescription("HAnimSite r_olecranon_pt");
HAnimSite704->addChildren(*TouchSensor705);

CShape* Shape706 = (CShape *)(m_pScene.createNode("Shape"));
Shape706->setUSE("HAnimSiteShape");
HAnimSite704->addChildren(*Shape706);

HAnimSegment693->addChildren(*HAnimSite704);

CHAnimSite* HAnimSite707 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite707->setDEF("hanim_r_radial_styloid_pt");
HAnimSite707->setName("r_radial_styloid_pt");
HAnimSite707->setTranslation(new float[3]{-0.1884,0.8676,-0.036});
CTouchSensor* TouchSensor708 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor708->setDescription("HAnimSite r_radial_styloid_pt");
HAnimSite707->addChildren(*TouchSensor708);

CShape* Shape709 = (CShape *)(m_pScene.createNode("Shape"));
Shape709->setUSE("HAnimSiteShape");
HAnimSite707->addChildren(*Shape709);

HAnimSegment693->addChildren(*HAnimSite707);

CHAnimSite* HAnimSite710 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite710->setDEF("hanim_r_radiale_pt");
HAnimSite710->setName("r_radiale_pt");
HAnimSite710->setTranslation(new float[3]{-0.213,1.1305,-0.1091});
CTouchSensor* TouchSensor711 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor711->setDescription("HAnimSite r_radiale_pt");
HAnimSite710->addChildren(*TouchSensor711);

CShape* Shape712 = (CShape *)(m_pScene.createNode("Shape"));
Shape712->setUSE("HAnimSiteShape");
HAnimSite710->addChildren(*Shape712);

HAnimSegment693->addChildren(*HAnimSite710);

HAnimJoint692->addChildren(*HAnimSegment693);

CHAnimJoint* HAnimJoint713 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint713->setDEF("hanim_r_elbow");
HAnimJoint713->setName("r_elbow");
HAnimJoint713->setCenter(new float[3]{-0.1949,1.1388,-0.062});
CHAnimSegment* HAnimSegment714 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment714->setDEF("hanim_r_forearm");
HAnimSegment714->setName("r_forearm");
CTransform* Transform715 = (CTransform *)(m_pScene.createNode("Transform"));
Transform715->setTranslation(new float[3]{-0.1949,1.1388,-0.062});
CTransform* Transform716 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape717 = (CShape *)(m_pScene.createNode("Shape"));
Shape717->setUSE("HAnimJointShape");
Transform716->addChild(*Shape717);

Transform715->addChildren(*Transform716);

HAnimSegment714->addChildren(*Transform715);

CShape* Shape718 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet719 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet719->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA720 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA720->setUSE("HAnimSegmentLineColorRGBA");
LineSet719->setColor(*ColorRGBA720);

CCoordinate* Coordinate721 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate721->setPoint(new float[6]{-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521});
LineSet719->setCoord(*Coordinate721);

Shape718->setGeometry(LineSet719);

HAnimSegment714->addChildren(*Shape718);

CHAnimSite* HAnimSite722 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite722->setDEF("hanim_r_ulnar_styloid_pt");
HAnimSite722->setName("r_ulnar_styloid_pt");
HAnimSite722->setTranslation(new float[3]{-0.2117,0.8562,-0.0584});
CTouchSensor* TouchSensor723 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor723->setDescription("HAnimSite r_ulnar_styloid_pt");
HAnimSite722->addChildren(*TouchSensor723);

CShape* Shape724 = (CShape *)(m_pScene.createNode("Shape"));
Shape724->setUSE("HAnimSiteShape");
HAnimSite722->addChildren(*Shape724);

HAnimSegment714->addChildren(*HAnimSite722);

HAnimJoint713->addChildren(*HAnimSegment714);

CHAnimJoint* HAnimJoint725 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint725->setDEF("hanim_r_radiocarpal");
HAnimJoint725->setName("r_radiocarpal");
HAnimJoint725->setCenter(new float[3]{-0.1959,0.8694,-0.0521});
CHAnimSegment* HAnimSegment726 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment726->setDEF("hanim_r_carpal");
HAnimSegment726->setName("r_carpal");
CTransform* Transform727 = (CTransform *)(m_pScene.createNode("Transform"));
Transform727->setTranslation(new float[3]{-0.2,0.85,-0.05});
Transform727->setRotation(new float[4]{0,0,1,-3.14});
Transform727->setScale(new float[3]{0.2,0.2,0.2});
CTransform* Transform728 = (CTransform *)(m_pScene.createNode("Transform"));
Transform728->setRotation(new float[4]{0,1,0,1.57});
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
Coordinate733->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1899,0.8502,-0.0473});
LineSet731->setCoord(*Coordinate733);

Shape730->setGeometry(LineSet731);

HAnimSegment726->addChildren(*Shape730);

CShape* Shape734 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet735 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet735->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA736 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA736->setUSE("HAnimSegmentLineColorRGBA");
LineSet735->setColor(*ColorRGBA736);

CCoordinate* Coordinate737 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate737->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1961,0.8055,-0.0218});
LineSet735->setCoord(*Coordinate737);

Shape734->setGeometry(LineSet735);

HAnimSegment726->addChildren(*Shape734);

CHAnimSite* HAnimSite738 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite738->setDEF("hanim_r_metacarpal_phalanx_2_pt");
HAnimSite738->setName("r_metacarpal_phalanx_2_pt");
HAnimSite738->setTranslation(new float[3]{-0.1977,0.8169,-0.0177});
CTouchSensor* TouchSensor739 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor739->setDescription("HAnimSite r_metacarpal_phalanx_2_pt");
HAnimSite738->addChildren(*TouchSensor739);

CShape* Shape740 = (CShape *)(m_pScene.createNode("Shape"));
Shape740->setUSE("HAnimSiteShape");
HAnimSite738->addChildren(*Shape740);

HAnimSegment726->addChildren(*HAnimSite738);

CShape* Shape741 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet742 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet742->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA743 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA743->setUSE("HAnimSegmentLineColorRGBA");
LineSet742->setColor(*ColorRGBA743);

CCoordinate* Coordinate744 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate744->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1972,0.806,-0.0468});
LineSet742->setCoord(*Coordinate744);

Shape741->setGeometry(LineSet742);

HAnimSegment726->addChildren(*Shape741);

CHAnimSite* HAnimSite745 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite745->setDEF("hanim_r_metacarpal_phalanx_3_pt");
HAnimSite745->setName("r_metacarpal_phalanx_3_pt");
CTouchSensor* TouchSensor746 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor746->setDescription("HAnimSite r_metacarpal_phalanx_3_pt");
HAnimSite745->addChildren(*TouchSensor746);

CShape* Shape747 = (CShape *)(m_pScene.createNode("Shape"));
Shape747->setUSE("HAnimSiteShape");
HAnimSite745->addChildren(*Shape747);

HAnimSegment726->addChildren(*HAnimSite745);

CShape* Shape748 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet749 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet749->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA750 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA750->setUSE("HAnimSegmentLineColorRGBA");
LineSet749->setColor(*ColorRGBA750);

CCoordinate* Coordinate751 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate751->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1951,0.8049,-0.0732});
LineSet749->setCoord(*Coordinate751);

Shape748->setGeometry(LineSet749);

HAnimSegment726->addChildren(*Shape748);

CShape* Shape752 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet753 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet753->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA754 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA754->setUSE("HAnimSegmentLineColorRGBA");
LineSet753->setColor(*ColorRGBA754);

CCoordinate* Coordinate755 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate755->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1926,0.8096,-0.0975});
LineSet753->setCoord(*Coordinate755);

Shape752->setGeometry(LineSet753);

HAnimSegment726->addChildren(*Shape752);

CHAnimSite* HAnimSite756 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite756->setDEF("hanim_r_metacarpal_phalanx_5_pt");
HAnimSite756->setName("r_metacarpal_phalanx_5_pt");
HAnimSite756->setTranslation(new float[3]{-0.1929,0.789,-0.1064});
CTouchSensor* TouchSensor757 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor757->setDescription("HAnimSite r_metacarpal_phalanx_5_pt");
HAnimSite756->addChildren(*TouchSensor757);

CShape* Shape758 = (CShape *)(m_pScene.createNode("Shape"));
Shape758->setUSE("HAnimSiteShape");
HAnimSite756->addChildren(*Shape758);

HAnimSegment726->addChildren(*HAnimSite756);

HAnimJoint725->addChildren(*HAnimSegment726);

CHAnimJoint* HAnimJoint759 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint759->setDEF("hanim_r_carpometacarpal_1");
HAnimJoint759->setName("r_carpometacarpal_1");
HAnimJoint759->setCenter(new float[3]{-0.1899,0.8502,-0.0473});
CHAnimSegment* HAnimSegment760 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment760->setDEF("hanim_r_metacarpal_1");
HAnimSegment760->setName("r_metacarpal_1");
CTransform* Transform761 = (CTransform *)(m_pScene.createNode("Transform"));
Transform761->setTranslation(new float[3]{-0.1899,0.8502,-0.0473});
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
Coordinate767->setPoint(new float[6]{-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306});
LineSet765->setCoord(*Coordinate767);

Shape764->setGeometry(LineSet765);

HAnimSegment760->addChildren(*Shape764);

HAnimJoint759->addChildren(*HAnimSegment760);

CHAnimJoint* HAnimJoint768 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint768->setDEF("hanim_r_metacarpophalangeal_1");
HAnimJoint768->setName("r_metacarpophalangeal_1");
HAnimJoint768->setCenter(new float[3]{-0.1874,0.8256,0.0306});
CHAnimSegment* HAnimSegment769 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment769->setDEF("hanim_r_carpal_proximal_phalanx_1");
HAnimSegment769->setName("r_carpal_proximal_phalanx_1");
CTransform* Transform770 = (CTransform *)(m_pScene.createNode("Transform"));
Transform770->setTranslation(new float[3]{-0.1874,0.8256,0.0306});
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
Coordinate776->setPoint(new float[6]{-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506});
LineSet774->setCoord(*Coordinate776);

Shape773->setGeometry(LineSet774);

HAnimSegment769->addChildren(*Shape773);

CHAnimSite* HAnimSite777 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite777->setDEF("hanim_r_carpal_distal_phalanx_1_tip");
HAnimSite777->setName("r_carpal_distal_phalanx_1_tip");
CTouchSensor* TouchSensor778 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor778->setDescription("HAnimSite r_carpal_distal_phalanx_1_tip");
HAnimSite777->addChildren(*TouchSensor778);

CShape* Shape779 = (CShape *)(m_pScene.createNode("Shape"));
Shape779->setUSE("HAnimSiteShape");
HAnimSite777->addChildren(*Shape779);

HAnimSegment769->addChildren(*HAnimSite777);

HAnimJoint768->addChildren(*HAnimSegment769);

CHAnimJoint* HAnimJoint780 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint780->setDEF("hanim_r_carpal_interphalangeal_1");
HAnimJoint780->setName("r_carpal_interphalangeal_1");
HAnimJoint780->setCenter(new float[3]{-0.1864,0.819,0.0506});
HAnimJoint768->addChildren(*HAnimJoint780);

HAnimJoint759->addChildren(*HAnimJoint768);

HAnimJoint725->addChildren(*HAnimJoint759);

CHAnimJoint* HAnimJoint781 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint781->setDEF("hanim_r_carpometacarpal_2");
HAnimJoint781->setName("r_carpometacarpal_2");
HAnimJoint781->setCenter(new float[3]{-0.1961,0.8055,-0.0218});
CHAnimSegment* HAnimSegment782 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment782->setDEF("hanim_r_metacarpal_2");
HAnimSegment782->setName("r_metacarpal_2");
CTransform* Transform783 = (CTransform *)(m_pScene.createNode("Transform"));
Transform783->setTranslation(new float[3]{-0.1961,0.8055,-0.0218});
CTransform* Transform784 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape785 = (CShape *)(m_pScene.createNode("Shape"));
Shape785->setUSE("HAnimJointShape");
Transform784->addChild(*Shape785);

Transform783->addChildren(*Transform784);

HAnimSegment782->addChildren(*Transform783);

CShape* Shape786 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet787 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet787->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA788 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA788->setUSE("HAnimSegmentLineColorRGBA");
LineSet787->setColor(*ColorRGBA788);

CCoordinate* Coordinate789 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate789->setPoint(new float[6]{-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218});
LineSet787->setCoord(*Coordinate789);

Shape786->setGeometry(LineSet787);

HAnimSegment782->addChildren(*Shape786);

HAnimJoint781->addChildren(*HAnimSegment782);

CHAnimJoint* HAnimJoint790 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint790->setDEF("hanim_r_metacarpophalangeal_2");
HAnimJoint790->setName("r_metacarpophalangeal_2");
HAnimJoint790->setCenter(new float[3]{-0.1961,0.7846,-0.0218});
CHAnimSegment* HAnimSegment791 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment791->setDEF("hanim_r_carpal_proximal_phalanx_2");
HAnimSegment791->setName("r_carpal_proximal_phalanx_2");
CTransform* Transform792 = (CTransform *)(m_pScene.createNode("Transform"));
Transform792->setTranslation(new float[3]{-0.1961,0.7846,-0.0218});
CTransform* Transform793 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape794 = (CShape *)(m_pScene.createNode("Shape"));
Shape794->setUSE("HAnimJointShape");
Transform793->addChild(*Shape794);

Transform792->addChildren(*Transform793);

HAnimSegment791->addChildren(*Transform792);

CShape* Shape795 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet796 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet796->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA797 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA797->setUSE("HAnimSegmentLineColorRGBA");
LineSet796->setColor(*ColorRGBA797);

CCoordinate* Coordinate798 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate798->setPoint(new float[6]{-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185});
LineSet796->setCoord(*Coordinate798);

Shape795->setGeometry(LineSet796);

HAnimSegment791->addChildren(*Shape795);

HAnimJoint790->addChildren(*HAnimSegment791);

CHAnimJoint* HAnimJoint799 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint799->setDEF("hanim_r_carpal_proximal_interphalangeal_1");
HAnimJoint799->setName("r_carpal_proximal_interphalangeal_2");
HAnimJoint799->setCenter(new float[3]{-0.1954,0.7393,-0.0185});
CHAnimSegment* HAnimSegment800 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment800->setDEF("hanim_r_carpal_middle_phalanx_1");
HAnimSegment800->setName("r_carpal_middle_phalanx_2");
CTransform* Transform801 = (CTransform *)(m_pScene.createNode("Transform"));
Transform801->setTranslation(new float[3]{-0.1954,0.7393,-0.0185});
CTransform* Transform802 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape803 = (CShape *)(m_pScene.createNode("Shape"));
Shape803->setUSE("HAnimJointShape");
Transform802->addChild(*Shape803);

Transform801->addChildren(*Transform802);

HAnimSegment800->addChildren(*Transform801);

CShape* Shape804 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet805 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet805->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA806 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA806->setUSE("HAnimSegmentLineColorRGBA");
LineSet805->setColor(*ColorRGBA806);

CCoordinate* Coordinate807 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate807->setPoint(new float[6]{-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173});
LineSet805->setCoord(*Coordinate807);

Shape804->setGeometry(LineSet805);

HAnimSegment800->addChildren(*Shape804);

CHAnimSite* HAnimSite808 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite808->setDEF("hanim_r_carpal_distal_phalanx_2_tip");
HAnimSite808->setName("r_carpal_distal_phalanx_2_tip");
CTouchSensor* TouchSensor809 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor809->setDescription("HAnimSite r_carpal_distal_phalanx_2_tip");
HAnimSite808->addChildren(*TouchSensor809);

CShape* Shape810 = (CShape *)(m_pScene.createNode("Shape"));
Shape810->setUSE("HAnimSiteShape");
HAnimSite808->addChildren(*Shape810);

HAnimSegment800->addChildren(*HAnimSite808);

CHAnimSite* HAnimSite811 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite811->setDEF("hanim_r_dactylion_pt");
HAnimSite811->setName("r_dactylion_pt");
HAnimSite811->setTranslation(new float[3]{-0.1941,0.6772,-0.0423});
CTouchSensor* TouchSensor812 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor812->setDescription("HAnimSite r_dactylion_pt");
HAnimSite811->addChildren(*TouchSensor812);

CShape* Shape813 = (CShape *)(m_pScene.createNode("Shape"));
Shape813->setUSE("HAnimSiteShape");
HAnimSite811->addChildren(*Shape813);

HAnimSegment800->addChildren(*HAnimSite811);

HAnimJoint799->addChildren(*HAnimSegment800);

CHAnimJoint* HAnimJoint814 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint814->setDEF("hanim_r_carpal_distal_interphalangeal_1");
HAnimJoint814->setName("r_carpal_distal_interphalangeal_2");
HAnimJoint814->setCenter(new float[3]{-0.1945,0.7169,-0.0173});
HAnimJoint799->addChildren(*HAnimJoint814);

HAnimJoint790->addChildren(*HAnimJoint799);

HAnimJoint781->addChildren(*HAnimJoint790);

HAnimJoint725->addChildren(*HAnimJoint781);

CHAnimJoint* HAnimJoint815 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint815->setDEF("hanim_r_carpometacarpal_3");
HAnimJoint815->setName("r_carpometacarpal_3");
HAnimJoint815->setCenter(new float[3]{-0.1972,0.806,-0.0468});
CHAnimSegment* HAnimSegment816 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment816->setDEF("hanim_r_metacarpal_3");
HAnimSegment816->setName("r_metacarpal_3");
CTransform* Transform817 = (CTransform *)(m_pScene.createNode("Transform"));
Transform817->setTranslation(new float[3]{-0.1972,0.806,-0.0468});
CTransform* Transform818 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape819 = (CShape *)(m_pScene.createNode("Shape"));
Shape819->setUSE("HAnimJointShape");
Transform818->addChild(*Shape819);

Transform817->addChildren(*Transform818);

HAnimSegment816->addChildren(*Transform817);

CShape* Shape820 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet821 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet821->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA822 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA822->setUSE("HAnimSegmentLineColorRGBA");
LineSet821->setColor(*ColorRGBA822);

CCoordinate* Coordinate823 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate823->setPoint(new float[6]{-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468});
LineSet821->setCoord(*Coordinate823);

Shape820->setGeometry(LineSet821);

HAnimSegment816->addChildren(*Shape820);

HAnimJoint815->addChildren(*HAnimSegment816);

CHAnimJoint* HAnimJoint824 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint824->setDEF("hanim_r_metacarpophalangeal_3");
HAnimJoint824->setName("r_metacarpophalangeal_3");
HAnimJoint824->setCenter(new float[3]{-0.1972,0.7849,-0.0468});
CHAnimSegment* HAnimSegment825 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment825->setDEF("hanim_r_carpal_proximal_phalanx_3");
HAnimSegment825->setName("r_carpal_proximal_phalanx_3");
CTransform* Transform826 = (CTransform *)(m_pScene.createNode("Transform"));
Transform826->setTranslation(new float[3]{-0.1972,0.7849,-0.0468});
CTransform* Transform827 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape828 = (CShape *)(m_pScene.createNode("Shape"));
Shape828->setUSE("HAnimJointShape");
Transform827->addChild(*Shape828);

Transform826->addChildren(*Transform827);

HAnimSegment825->addChildren(*Transform826);

CShape* Shape829 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet830 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet830->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA831 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA831->setUSE("HAnimSegmentLineColorRGBA");
LineSet830->setColor(*ColorRGBA831);

CCoordinate* Coordinate832 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate832->setPoint(new float[6]{-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441});
LineSet830->setCoord(*Coordinate832);

Shape829->setGeometry(LineSet830);

HAnimSegment825->addChildren(*Shape829);

HAnimJoint824->addChildren(*HAnimSegment825);

CHAnimJoint* HAnimJoint833 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint833->setDEF("hanim_r_carpal_proximal_interphalangeal_2");
HAnimJoint833->setName("r_carpal_proximal_interphalangeal_3");
HAnimJoint833->setCenter(new float[3]{-0.195,0.7304,-0.0441});
CHAnimSegment* HAnimSegment834 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment834->setDEF("hanim_r_carpal_middle_phalanx_2");
HAnimSegment834->setName("r_carpal_middle_phalanx_3");
CTransform* Transform835 = (CTransform *)(m_pScene.createNode("Transform"));
Transform835->setTranslation(new float[3]{-0.195,0.7304,-0.0441});
CTransform* Transform836 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape837 = (CShape *)(m_pScene.createNode("Shape"));
Shape837->setUSE("HAnimJointShape");
Transform836->addChild(*Shape837);

Transform835->addChildren(*Transform836);

HAnimSegment834->addChildren(*Transform835);

CShape* Shape838 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet839 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet839->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA840 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA840->setUSE("HAnimSegmentLineColorRGBA");
LineSet839->setColor(*ColorRGBA840);

CCoordinate* Coordinate841 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate841->setPoint(new float[6]{-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432});
LineSet839->setCoord(*Coordinate841);

Shape838->setGeometry(LineSet839);

HAnimSegment834->addChildren(*Shape838);

CHAnimSite* HAnimSite842 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite842->setDEF("hanim_r_carpal_distal_phalanx_3_tip");
HAnimSite842->setName("r_carpal_distal_phalanx_3_tip");
CTouchSensor* TouchSensor843 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor843->setDescription("HAnimSite r_carpal_distal_phalanx_3_tip");
HAnimSite842->addChildren(*TouchSensor843);

CShape* Shape844 = (CShape *)(m_pScene.createNode("Shape"));
Shape844->setUSE("HAnimSiteShape");
HAnimSite842->addChildren(*Shape844);

HAnimSegment834->addChildren(*HAnimSite842);

HAnimJoint833->addChildren(*HAnimSegment834);

CHAnimJoint* HAnimJoint845 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint845->setDEF("hanim_r_carpal_distal_interphalangeal_2");
HAnimJoint845->setName("r_carpal_distal_interphalangeal_3");
HAnimJoint845->setCenter(new float[3]{-0.1939,0.7042,-0.0432});
HAnimJoint833->addChildren(*HAnimJoint845);

HAnimJoint824->addChildren(*HAnimJoint833);

HAnimJoint815->addChildren(*HAnimJoint824);

HAnimJoint725->addChildren(*HAnimJoint815);

CHAnimJoint* HAnimJoint846 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint846->setDEF("hanim_r_carpometacarpal_4");
HAnimJoint846->setName("r_carpometacarpal_4");
HAnimJoint846->setCenter(new float[3]{-0.1951,0.8049,-0.0732});
CHAnimSegment* HAnimSegment847 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment847->setDEF("hanim_r_metacarpal_4");
HAnimSegment847->setName("r_metacarpal_4");
CTransform* Transform848 = (CTransform *)(m_pScene.createNode("Transform"));
Transform848->setTranslation(new float[3]{-0.1951,0.8049,-0.0732});
CTransform* Transform849 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape850 = (CShape *)(m_pScene.createNode("Shape"));
Shape850->setUSE("HAnimJointShape");
Transform849->addChild(*Shape850);

Transform848->addChildren(*Transform849);

HAnimSegment847->addChildren(*Transform848);

CShape* Shape851 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet852 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet852->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA853 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA853->setUSE("HAnimSegmentLineColorRGBA");
LineSet852->setColor(*ColorRGBA853);

CCoordinate* Coordinate854 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate854->setPoint(new float[6]{-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732});
LineSet852->setCoord(*Coordinate854);

Shape851->setGeometry(LineSet852);

HAnimSegment847->addChildren(*Shape851);

HAnimJoint846->addChildren(*HAnimSegment847);

CHAnimJoint* HAnimJoint855 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint855->setDEF("hanim_r_metacarpophalangeal_4");
HAnimJoint855->setName("r_metacarpophalangeal_4");
HAnimJoint855->setCenter(new float[3]{-0.1951,0.7845,-0.0732});
CHAnimSegment* HAnimSegment856 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment856->setDEF("hanim_r_carpal_proximal_phalanx_4");
HAnimSegment856->setName("r_carpal_proximal_phalanx_4");
CTransform* Transform857 = (CTransform *)(m_pScene.createNode("Transform"));
Transform857->setTranslation(new float[3]{-0.1951,0.7845,-0.0732});
CTransform* Transform858 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape859 = (CShape *)(m_pScene.createNode("Shape"));
Shape859->setUSE("HAnimJointShape");
Transform858->addChild(*Shape859);

Transform857->addChildren(*Transform858);

HAnimSegment856->addChildren(*Transform857);

CShape* Shape860 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet861 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet861->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA862 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA862->setUSE("HAnimSegmentLineColorRGBA");
LineSet861->setColor(*ColorRGBA862);

CCoordinate* Coordinate863 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate863->setPoint(new float[6]{-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716});
LineSet861->setCoord(*Coordinate863);

Shape860->setGeometry(LineSet861);

HAnimSegment856->addChildren(*Shape860);

HAnimJoint855->addChildren(*HAnimSegment856);

CHAnimJoint* HAnimJoint864 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint864->setDEF("hanim_r_carpal_proximal_interphalangeal_3");
HAnimJoint864->setName("r_carpal_proximal_interphalangeal_4");
HAnimJoint864->setCenter(new float[3]{-0.192,0.7318,-0.0716});
CHAnimSegment* HAnimSegment865 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment865->setDEF("hanim_r_carpal_middle_phalanx_3");
HAnimSegment865->setName("r_carpal_middle_phalanx_4");
CTransform* Transform866 = (CTransform *)(m_pScene.createNode("Transform"));
Transform866->setTranslation(new float[3]{-0.192,0.7318,-0.0716});
CTransform* Transform867 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape868 = (CShape *)(m_pScene.createNode("Shape"));
Shape868->setUSE("HAnimJointShape");
Transform867->addChild(*Shape868);

Transform866->addChildren(*Transform867);

HAnimSegment865->addChildren(*Transform866);

CShape* Shape869 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet870 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet870->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA871 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA871->setUSE("HAnimSegmentLineColorRGBA");
LineSet870->setColor(*ColorRGBA871);

CCoordinate* Coordinate872 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate872->setPoint(new float[6]{-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706});
LineSet870->setCoord(*Coordinate872);

Shape869->setGeometry(LineSet870);

HAnimSegment865->addChildren(*Shape869);

CHAnimSite* HAnimSite873 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite873->setDEF("hanim_r_carpal_distal_phalanx_4_tip");
HAnimSite873->setName("r_carpal_distal_phalanx_4_tip");
CTouchSensor* TouchSensor874 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor874->setDescription("HAnimSite r_carpal_distal_phalanx_4_tip");
HAnimSite873->addChildren(*TouchSensor874);

CShape* Shape875 = (CShape *)(m_pScene.createNode("Shape"));
Shape875->setUSE("HAnimSiteShape");
HAnimSite873->addChildren(*Shape875);

HAnimSegment865->addChildren(*HAnimSite873);

HAnimJoint864->addChildren(*HAnimSegment865);

CHAnimJoint* HAnimJoint876 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint876->setDEF("hanim_r_carpal_distal_interphalangeal_3");
HAnimJoint876->setName("r_carpal_distal_interphalangeal_4");
HAnimJoint876->setCenter(new float[3]{-0.1908,0.7077,-0.0706});
HAnimJoint864->addChildren(*HAnimJoint876);

HAnimJoint855->addChildren(*HAnimJoint864);

HAnimJoint846->addChildren(*HAnimJoint855);

HAnimJoint725->addChildren(*HAnimJoint846);

CHAnimJoint* HAnimJoint877 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint877->setDEF("hanim_r_carpometacarpal_5");
HAnimJoint877->setName("r_carpometacarpal_5");
HAnimJoint877->setCenter(new float[3]{-0.1926,0.8096,-0.0975});
CHAnimSegment* HAnimSegment878 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment878->setDEF("hanim_r_metacarpal_5");
HAnimSegment878->setName("r_metacarpal_5");
CTransform* Transform879 = (CTransform *)(m_pScene.createNode("Transform"));
Transform879->setTranslation(new float[3]{-0.1926,0.8096,-0.0975});
CTransform* Transform880 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape881 = (CShape *)(m_pScene.createNode("Shape"));
Shape881->setUSE("HAnimJointShape");
Transform880->addChild(*Shape881);

Transform879->addChildren(*Transform880);

HAnimSegment878->addChildren(*Transform879);

CShape* Shape882 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet883 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet883->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA884 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA884->setUSE("HAnimSegmentLineColorRGBA");
LineSet883->setColor(*ColorRGBA884);

CCoordinate* Coordinate885 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate885->setPoint(new float[6]{-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975});
LineSet883->setCoord(*Coordinate885);

Shape882->setGeometry(LineSet883);

HAnimSegment878->addChildren(*Shape882);

HAnimJoint877->addChildren(*HAnimSegment878);

CHAnimJoint* HAnimJoint886 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint886->setDEF("hanim_r_metacarpophalangeal_5");
HAnimJoint886->setName("r_metacarpophalangeal_5");
HAnimJoint886->setCenter(new float[3]{-0.1926,0.7896,-0.0975});
CHAnimSegment* HAnimSegment887 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment887->setDEF("hanim_r_carpal_proximal_phalanx_5");
HAnimSegment887->setName("r_carpal_proximal_phalanx_5");
CTransform* Transform888 = (CTransform *)(m_pScene.createNode("Transform"));
Transform888->setTranslation(new float[3]{-0.1926,0.7896,-0.0975});
CTransform* Transform889 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape890 = (CShape *)(m_pScene.createNode("Shape"));
Shape890->setUSE("HAnimJointShape");
Transform889->addChild(*Shape890);

Transform888->addChildren(*Transform889);

HAnimSegment887->addChildren(*Transform888);

CShape* Shape891 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet892 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet892->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA893 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA893->setUSE("HAnimSegmentLineColorRGBA");
LineSet892->setColor(*ColorRGBA893);

CCoordinate* Coordinate894 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate894->setPoint(new float[6]{-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963});
LineSet892->setCoord(*Coordinate894);

Shape891->setGeometry(LineSet892);

HAnimSegment887->addChildren(*Shape891);

HAnimJoint886->addChildren(*HAnimSegment887);

CHAnimJoint* HAnimJoint895 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint895->setDEF("hanim_r_carpal_proximal_interphalangeal_4");
HAnimJoint895->setName("r_carpal_proximal_interphalangeal_5");
HAnimJoint895->setCenter(new float[3]{-0.1902,0.7483,-0.0963});
CHAnimSegment* HAnimSegment896 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment896->setDEF("hanim_r_carpal_middle_phalanx_4");
HAnimSegment896->setName("r_carpal_middle_phalanx_5");
CTransform* Transform897 = (CTransform *)(m_pScene.createNode("Transform"));
Transform897->setTranslation(new float[3]{-0.1902,0.7483,-0.0963});
CTransform* Transform898 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape899 = (CShape *)(m_pScene.createNode("Shape"));
Shape899->setUSE("HAnimJointShape");
Transform898->addChild(*Shape899);

Transform897->addChildren(*Transform898);

HAnimSegment896->addChildren(*Transform897);

CShape* Shape900 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet901 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet901->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA902 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA902->setUSE("HAnimSegmentLineColorRGBA");
LineSet901->setColor(*ColorRGBA902);

CCoordinate* Coordinate903 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate903->setPoint(new float[6]{-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096});
LineSet901->setCoord(*Coordinate903);

Shape900->setGeometry(LineSet901);

HAnimSegment896->addChildren(*Shape900);

CHAnimSite* HAnimSite904 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite904->setDEF("hanim_r_carpal_distal_phalanx_5_tip");
HAnimSite904->setName("r_carpal_distal_phalanx_5_tip");
CTouchSensor* TouchSensor905 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor905->setDescription("HAnimSite r_carpal_distal_phalanx_5_tip");
HAnimSite904->addChildren(*TouchSensor905);

CShape* Shape906 = (CShape *)(m_pScene.createNode("Shape"));
Shape906->setUSE("HAnimSiteShape");
HAnimSite904->addChildren(*Shape906);

HAnimSegment896->addChildren(*HAnimSite904);

HAnimJoint895->addChildren(*HAnimSegment896);

CHAnimJoint* HAnimJoint907 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint907->setDEF("hanim_r_carpal_distal_interphalangeal_4");
HAnimJoint907->setName("r_carpal_distal_interphalangeal_5");
HAnimJoint907->setCenter(new float[3]{-0.1908,0.754,-0.096});
HAnimJoint895->addChildren(*HAnimJoint907);

HAnimJoint886->addChildren(*HAnimJoint895);

HAnimJoint877->addChildren(*HAnimJoint886);

HAnimJoint725->addChildren(*HAnimJoint877);

HAnimJoint713->addChildren(*HAnimJoint725);

HAnimJoint692->addChildren(*HAnimJoint713);

HAnimJoint677->addChildren(*HAnimJoint692);

HAnimJoint668->addChildren(*HAnimJoint677);

HAnimJoint326->addChildren(*HAnimJoint668);

HAnimJoint311->addChildren(*HAnimJoint326);

HAnimJoint290->addChildren(*HAnimJoint311);

HAnimJoint278->addChildren(*HAnimJoint290);

HAnimJoint269->addChildren(*HAnimJoint278);

HAnimJoint260->addChildren(*HAnimJoint269);

HAnimJoint43->addChildren(*HAnimJoint260);

HAnimHumanoid42->setSkeleton(*HAnimJoint43);

CHAnimSite* HAnimSite908 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite908->setUSE("hanim_buttocks_standing_wall_contact_point_pt");
HAnimHumanoid42->setSites(*HAnimSite908);

CHAnimSite* HAnimSite909 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite909->setUSE("hanim_crotch_pt");
HAnimHumanoid42->setSites(*HAnimSite909);

CHAnimSite* HAnimSite910 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite910->setUSE("hanim_l_asis_pt");
HAnimHumanoid42->setSites(*HAnimSite910);

CHAnimSite* HAnimSite911 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite911->setUSE("hanim_l_iliocristale_pt");
HAnimHumanoid42->setSites(*HAnimSite911);

CHAnimSite* HAnimSite912 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite912->setUSE("hanim_l_psis_pt");
HAnimHumanoid42->setSites(*HAnimSite912);

CHAnimSite* HAnimSite913 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite913->setUSE("hanim_l_trochanterion_pt");
HAnimHumanoid42->setSites(*HAnimSite913);

CHAnimSite* HAnimSite914 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite914->setUSE("hanim_r_asis_pt");
HAnimHumanoid42->setSites(*HAnimSite914);

CHAnimSite* HAnimSite915 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite915->setUSE("hanim_r_iliocristale_pt");
HAnimHumanoid42->setSites(*HAnimSite915);

CHAnimSite* HAnimSite916 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite916->setUSE("hanim_r_psis_pt");
HAnimHumanoid42->setSites(*HAnimSite916);

CHAnimSite* HAnimSite917 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite917->setUSE("hanim_r_trochanterion_pt");
HAnimHumanoid42->setSites(*HAnimSite917);

CHAnimSite* HAnimSite918 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite918->setUSE("hanim_navel_pt");
HAnimHumanoid42->setSites(*HAnimSite918);

CHAnimSite* HAnimSite919 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite919->setUSE("hanim_waist_preferred_anterior_pt");
HAnimHumanoid42->setSites(*HAnimSite919);

CHAnimSite* HAnimSite920 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite920->setUSE("hanim_waist_preferred_posterior_pt");
HAnimHumanoid42->setSites(*HAnimSite920);

CHAnimSite* HAnimSite921 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite921->setUSE("hanim_l_femoral_lateral_epicondyles_pt");
HAnimHumanoid42->setSites(*HAnimSite921);

CHAnimSite* HAnimSite922 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite922->setUSE("hanim_l_femoral_medial_epicondyles_pt");
HAnimHumanoid42->setSites(*HAnimSite922);

CHAnimSite* HAnimSite923 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite923->setUSE("hanim_l_knee_crease_pt");
HAnimHumanoid42->setSites(*HAnimSite923);

CHAnimSite* HAnimSite924 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite924->setUSE("hanim_l_suprapatella_pt");
HAnimHumanoid42->setSites(*HAnimSite924);

CHAnimSite* HAnimSite925 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite925->setUSE("hanim_r_femoral_lateral_epicondyles_pt");
HAnimHumanoid42->setSites(*HAnimSite925);

CHAnimSite* HAnimSite926 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite926->setUSE("hanim_r_femoral_medial_epicondyles_pt");
HAnimHumanoid42->setSites(*HAnimSite926);

CHAnimSite* HAnimSite927 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite927->setUSE("hanim_r_knee_crease_pt");
HAnimHumanoid42->setSites(*HAnimSite927);

CHAnimSite* HAnimSite928 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite928->setUSE("hanim_r_suprapatella_pt");
HAnimHumanoid42->setSites(*HAnimSite928);

CHAnimSite* HAnimSite929 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite929->setUSE("hanim_l_lateral_malleolus_pt");
HAnimHumanoid42->setSites(*HAnimSite929);

CHAnimSite* HAnimSite930 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite930->setUSE("hanim_l_medial_malleolus_pt");
HAnimHumanoid42->setSites(*HAnimSite930);

CHAnimSite* HAnimSite931 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite931->setUSE("hanim_l_tibiale_pt");
HAnimHumanoid42->setSites(*HAnimSite931);

CHAnimSite* HAnimSite932 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite932->setUSE("hanim_l_calcaneus_posterior_pt");
HAnimHumanoid42->setSites(*HAnimSite932);

CHAnimSite* HAnimSite933 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite933->setUSE("hanim_l_sphyrion_pt");
HAnimHumanoid42->setSites(*HAnimSite933);

CHAnimSite* HAnimSite934 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite934->setUSE("hanim_l_tarsal_distal_phalanx_2_tip");
HAnimHumanoid42->setSites(*HAnimSite934);

CHAnimSite* HAnimSite935 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite935->setUSE("hanim_r_lateral_malleolus_pt");
HAnimHumanoid42->setSites(*HAnimSite935);

CHAnimSite* HAnimSite936 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite936->setUSE("hanim_r_medial_malleolus_pt");
HAnimHumanoid42->setSites(*HAnimSite936);

CHAnimSite* HAnimSite937 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite937->setUSE("hanim_r_tibiale_pt");
HAnimHumanoid42->setSites(*HAnimSite937);

CHAnimSite* HAnimSite938 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite938->setUSE("hanim_r_calcaneus_posterior_pt");
HAnimHumanoid42->setSites(*HAnimSite938);

CHAnimSite* HAnimSite939 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite939->setUSE("hanim_r_sphyrion_pt");
HAnimHumanoid42->setSites(*HAnimSite939);

CHAnimSite* HAnimSite940 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite940->setUSE("hanim_r_tarsal_distal_phalanx_2_tip");
HAnimHumanoid42->setSites(*HAnimSite940);

CHAnimSite* HAnimSite941 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite941->setUSE("hanim_substernale_pt");
HAnimHumanoid42->setSites(*HAnimSite941);

CHAnimSite* HAnimSite942 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite942->setUSE("hanim_l_chest_midsagittal_plane_pt");
HAnimHumanoid42->setSites(*HAnimSite942);

CHAnimSite* HAnimSite943 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite943->setUSE("hanim_mesosternale_pt");
HAnimHumanoid42->setSites(*HAnimSite943);

CHAnimSite* HAnimSite944 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite944->setUSE("hanim_r_chest_midsagittal_plane_pt");
HAnimHumanoid42->setSites(*HAnimSite944);

CHAnimSite* HAnimSite945 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite945->setUSE("hanim_rear_center_midsagittal_plane_pt");
HAnimHumanoid42->setSites(*HAnimSite945);

CHAnimSite* HAnimSite946 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite946->setUSE("hanim_cervicale_pt");
HAnimHumanoid42->setSites(*HAnimSite946);

CHAnimSite* HAnimSite947 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite947->setUSE("hanim_suprasternale_pt");
HAnimHumanoid42->setSites(*HAnimSite947);

CHAnimSite* HAnimSite948 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite948->setUSE("hanim_l_acromion_pt");
HAnimHumanoid42->setSites(*HAnimSite948);

CHAnimSite* HAnimSite949 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite949->setUSE("hanim_l_axilla_distal_pt");
HAnimHumanoid42->setSites(*HAnimSite949);

CHAnimSite* HAnimSite950 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite950->setUSE("hanim_l_axilla_posterior_folds_pt");
HAnimHumanoid42->setSites(*HAnimSite950);

CHAnimSite* HAnimSite951 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite951->setUSE("hanim_l_axilla_proximal_pt");
HAnimHumanoid42->setSites(*HAnimSite951);

CHAnimSite* HAnimSite952 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite952->setUSE("hanim_l_clavicale_pt");
HAnimHumanoid42->setSites(*HAnimSite952);

CHAnimSite* HAnimSite953 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite953->setUSE("hanim_r_acromion_pt");
HAnimHumanoid42->setSites(*HAnimSite953);

CHAnimSite* HAnimSite954 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite954->setUSE("hanim_r_axilla_distal_pt");
HAnimHumanoid42->setSites(*HAnimSite954);

CHAnimSite* HAnimSite955 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite955->setUSE("hanim_r_axilla_posterior_folds_pt");
HAnimHumanoid42->setSites(*HAnimSite955);

CHAnimSite* HAnimSite956 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite956->setUSE("hanim_r_axilla_proximal_pt");
HAnimHumanoid42->setSites(*HAnimSite956);

CHAnimSite* HAnimSite957 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite957->setUSE("hanim_r_clavicale_pt");
HAnimHumanoid42->setSites(*HAnimSite957);

CHAnimSite* HAnimSite958 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite958->setUSE("hanim_adams_apple_pt");
HAnimHumanoid42->setSites(*HAnimSite958);

CHAnimSite* HAnimSite959 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite959->setUSE("hanim_glabella_pt");
HAnimHumanoid42->setSites(*HAnimSite959);

CHAnimSite* HAnimSite960 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite960->setUSE("hanim_l_ectocanthus_pt");
HAnimHumanoid42->setSites(*HAnimSite960);

CHAnimSite* HAnimSite961 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite961->setUSE("hanim_l_infraorbitale_pt");
HAnimHumanoid42->setSites(*HAnimSite961);

CHAnimSite* HAnimSite962 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite962->setUSE("hanim_l_tragion_pt");
HAnimHumanoid42->setSites(*HAnimSite962);

CHAnimSite* HAnimSite963 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite963->setUSE("hanim_nuchale_pt");
HAnimHumanoid42->setSites(*HAnimSite963);

CHAnimSite* HAnimSite964 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite964->setUSE("hanim_opisthocranion_pt");
HAnimHumanoid42->setSites(*HAnimSite964);

CHAnimSite* HAnimSite965 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite965->setUSE("hanim_r_ectocanthus_pt");
HAnimHumanoid42->setSites(*HAnimSite965);

CHAnimSite* HAnimSite966 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite966->setUSE("hanim_r_infraorbitale_pt");
HAnimHumanoid42->setSites(*HAnimSite966);

CHAnimSite* HAnimSite967 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite967->setUSE("hanim_r_tragion_pt");
HAnimHumanoid42->setSites(*HAnimSite967);

CHAnimSite* HAnimSite968 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite968->setUSE("hanim_sellion_pt");
HAnimHumanoid42->setSites(*HAnimSite968);

CHAnimSite* HAnimSite969 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite969->setUSE("hanim_skull_vertex_pt");
HAnimHumanoid42->setSites(*HAnimSite969);

CHAnimSite* HAnimSite970 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite970->setUSE("hanim_l_bideltoid_pt");
HAnimHumanoid42->setSites(*HAnimSite970);

CHAnimSite* HAnimSite971 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite971->setUSE("hanim_l_humeral_lateral_epicondyles_pt");
HAnimHumanoid42->setSites(*HAnimSite971);

CHAnimSite* HAnimSite972 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite972->setUSE("hanim_l_humeral_medial_epicondyles_pt");
HAnimHumanoid42->setSites(*HAnimSite972);

CHAnimSite* HAnimSite973 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite973->setUSE("hanim_l_olecranon_pt");
HAnimHumanoid42->setSites(*HAnimSite973);

CHAnimSite* HAnimSite974 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite974->setUSE("hanim_l_radial_styloid_pt");
HAnimHumanoid42->setSites(*HAnimSite974);

CHAnimSite* HAnimSite975 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite975->setUSE("hanim_l_radiale_pt");
HAnimHumanoid42->setSites(*HAnimSite975);

CHAnimSite* HAnimSite976 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite976->setUSE("hanim_l_ulnar_styloid_pt");
HAnimHumanoid42->setSites(*HAnimSite976);

CHAnimSite* HAnimSite977 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite977->setUSE("hanim_l_metacarpal_phalanx_2_pt");
HAnimHumanoid42->setSites(*HAnimSite977);

CHAnimSite* HAnimSite978 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite978->setUSE("hanim_l_metacarpal_phalanx_3_pt");
HAnimHumanoid42->setSites(*HAnimSite978);

CHAnimSite* HAnimSite979 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite979->setUSE("hanim_l_metacarpal_phalanx_5_pt");
HAnimHumanoid42->setSites(*HAnimSite979);

CHAnimSite* HAnimSite980 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite980->setUSE("hanim_l_carpal_distal_phalanx_1_tip");
HAnimHumanoid42->setSites(*HAnimSite980);

CHAnimSite* HAnimSite981 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite981->setUSE("hanim_l_carpal_distal_phalanx_2_tip");
HAnimHumanoid42->setSites(*HAnimSite981);

CHAnimSite* HAnimSite982 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite982->setUSE("hanim_l_dactylion_pt");
HAnimHumanoid42->setSites(*HAnimSite982);

CHAnimSite* HAnimSite983 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite983->setUSE("hanim_l_carpal_distal_phalanx_3_tip");
HAnimHumanoid42->setSites(*HAnimSite983);

CHAnimSite* HAnimSite984 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite984->setUSE("hanim_l_carpal_distal_phalanx_4_tip");
HAnimHumanoid42->setSites(*HAnimSite984);

CHAnimSite* HAnimSite985 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite985->setUSE("hanim_l_carpal_distal_phalanx_5_tip");
HAnimHumanoid42->setSites(*HAnimSite985);

CHAnimSite* HAnimSite986 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite986->setUSE("hanim_r_bideltoid_pt");
HAnimHumanoid42->setSites(*HAnimSite986);

CHAnimSite* HAnimSite987 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite987->setUSE("hanim_r_humeral_lateral_epicondyles_pt");
HAnimHumanoid42->setSites(*HAnimSite987);

CHAnimSite* HAnimSite988 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite988->setUSE("hanim_r_humeral_medial_epicondyles_pt");
HAnimHumanoid42->setSites(*HAnimSite988);

CHAnimSite* HAnimSite989 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite989->setUSE("hanim_r_olecranon_pt");
HAnimHumanoid42->setSites(*HAnimSite989);

CHAnimSite* HAnimSite990 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite990->setUSE("hanim_r_radial_styloid_pt");
HAnimHumanoid42->setSites(*HAnimSite990);

CHAnimSite* HAnimSite991 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite991->setUSE("hanim_r_radiale_pt");
HAnimHumanoid42->setSites(*HAnimSite991);

CHAnimSite* HAnimSite992 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite992->setUSE("hanim_r_ulnar_styloid_pt");
HAnimHumanoid42->setSites(*HAnimSite992);

CHAnimSite* HAnimSite993 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite993->setUSE("hanim_r_metacarpal_phalanx_2_pt");
HAnimHumanoid42->setSites(*HAnimSite993);

CHAnimSite* HAnimSite994 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite994->setUSE("hanim_r_metacarpal_phalanx_3_pt");
HAnimHumanoid42->setSites(*HAnimSite994);

CHAnimSite* HAnimSite995 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite995->setUSE("hanim_r_metacarpal_phalanx_5_pt");
HAnimHumanoid42->setSites(*HAnimSite995);

CHAnimSite* HAnimSite996 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite996->setUSE("hanim_r_carpal_distal_phalanx_1_tip");
HAnimHumanoid42->setSites(*HAnimSite996);

CHAnimSite* HAnimSite997 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite997->setUSE("hanim_r_carpal_distal_phalanx_2_tip");
HAnimHumanoid42->setSites(*HAnimSite997);

CHAnimSite* HAnimSite998 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite998->setUSE("hanim_r_dactylion_pt");
HAnimHumanoid42->setSites(*HAnimSite998);

CHAnimSite* HAnimSite999 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite999->setUSE("hanim_r_carpal_distal_phalanx_3_tip");
HAnimHumanoid42->setSites(*HAnimSite999);

CHAnimSite* HAnimSite1000 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1000->setUSE("hanim_r_carpal_distal_phalanx_4_tip");
HAnimHumanoid42->setSites(*HAnimSite1000);

CHAnimSite* HAnimSite1001 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1001->setUSE("hanim_r_carpal_distal_phalanx_5_tip");
HAnimHumanoid42->setSites(*HAnimSite1001);

CHAnimSegment* HAnimSegment1002 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1002->setUSE("hanim_sacrum");
HAnimHumanoid42->setSegments(*HAnimSegment1002);

CHAnimSegment* HAnimSegment1003 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1003->setUSE("hanim_pelvis");
HAnimHumanoid42->setSegments(*HAnimSegment1003);

CHAnimSegment* HAnimSegment1004 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1004->setUSE("hanim_l_thigh");
HAnimHumanoid42->setSegments(*HAnimSegment1004);

CHAnimSegment* HAnimSegment1005 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1005->setUSE("hanim_l_calf");
HAnimHumanoid42->setSegments(*HAnimSegment1005);

CHAnimSegment* HAnimSegment1006 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1006->setUSE("hanim_l_talus");
HAnimHumanoid42->setSegments(*HAnimSegment1006);

CHAnimSegment* HAnimSegment1007 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1007->setUSE("hanim_l_metatarsal_1");
HAnimHumanoid42->setSegments(*HAnimSegment1007);

CHAnimSegment* HAnimSegment1008 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1008->setUSE("hanim_l_tarsal_proximal_phalanx_1");
HAnimHumanoid42->setSegments(*HAnimSegment1008);

CHAnimSegment* HAnimSegment1009 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1009->setUSE("hanim_r_thigh");
HAnimHumanoid42->setSegments(*HAnimSegment1009);

CHAnimSegment* HAnimSegment1010 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1010->setUSE("hanim_r_calf");
HAnimHumanoid42->setSegments(*HAnimSegment1010);

CHAnimSegment* HAnimSegment1011 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1011->setUSE("hanim_r_talus");
HAnimHumanoid42->setSegments(*HAnimSegment1011);

CHAnimSegment* HAnimSegment1012 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1012->setUSE("hanim_r_metatarsal_1");
HAnimHumanoid42->setSegments(*HAnimSegment1012);

CHAnimSegment* HAnimSegment1013 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1013->setUSE("hanim_r_tarsal_proximal_phalanx_1");
HAnimHumanoid42->setSegments(*HAnimSegment1013);

CHAnimSegment* HAnimSegment1014 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1014->setUSE("hanim_l5");
HAnimHumanoid42->setSegments(*HAnimSegment1014);

CHAnimSegment* HAnimSegment1015 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1015->setUSE("hanim_l3");
HAnimHumanoid42->setSegments(*HAnimSegment1015);

CHAnimSegment* HAnimSegment1016 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1016->setUSE("hanim_l1");
HAnimHumanoid42->setSegments(*HAnimSegment1016);

CHAnimSegment* HAnimSegment1017 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1017->setUSE("hanim_t10");
HAnimHumanoid42->setSegments(*HAnimSegment1017);

CHAnimSegment* HAnimSegment1018 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1018->setUSE("hanim_t6");
HAnimHumanoid42->setSegments(*HAnimSegment1018);

CHAnimSegment* HAnimSegment1019 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1019->setUSE("hanim_t1");
HAnimHumanoid42->setSegments(*HAnimSegment1019);

CHAnimSegment* HAnimSegment1020 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1020->setUSE("hanim_c4");
HAnimHumanoid42->setSegments(*HAnimSegment1020);

CHAnimSegment* HAnimSegment1021 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1021->setUSE("hanim_c2");
HAnimHumanoid42->setSegments(*HAnimSegment1021);

CHAnimSegment* HAnimSegment1022 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1022->setUSE("hanim_l_clavicle");
HAnimHumanoid42->setSegments(*HAnimSegment1022);

CHAnimSegment* HAnimSegment1023 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1023->setUSE("hanim_l_scapula");
HAnimHumanoid42->setSegments(*HAnimSegment1023);

CHAnimSegment* HAnimSegment1024 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1024->setUSE("hanim_l_upperarm");
HAnimHumanoid42->setSegments(*HAnimSegment1024);

CHAnimSegment* HAnimSegment1025 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1025->setUSE("hanim_l_forearm");
HAnimHumanoid42->setSegments(*HAnimSegment1025);

CHAnimSegment* HAnimSegment1026 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1026->setUSE("hanim_l_carpal");
HAnimHumanoid42->setSegments(*HAnimSegment1026);

CHAnimSegment* HAnimSegment1027 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1027->setUSE("hanim_l_metacarpal_1");
HAnimHumanoid42->setSegments(*HAnimSegment1027);

CHAnimSegment* HAnimSegment1028 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1028->setUSE("hanim_l_carpal_proximal_phalanx_1");
HAnimHumanoid42->setSegments(*HAnimSegment1028);

CHAnimSegment* HAnimSegment1029 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1029->setUSE("hanim_l_metacarpal_2");
HAnimHumanoid42->setSegments(*HAnimSegment1029);

CHAnimSegment* HAnimSegment1030 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1030->setUSE("hanim_l_carpal_proximal_phalanx_2");
HAnimHumanoid42->setSegments(*HAnimSegment1030);

CHAnimSegment* HAnimSegment1031 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1031->setUSE("hanim_l_carpal_middle_phalanx_1");
HAnimHumanoid42->setSegments(*HAnimSegment1031);

CHAnimSegment* HAnimSegment1032 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1032->setUSE("hanim_l_metacarpal_3");
HAnimHumanoid42->setSegments(*HAnimSegment1032);

CHAnimSegment* HAnimSegment1033 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1033->setUSE("hanim_l_carpal_proximal_phalanx_3");
HAnimHumanoid42->setSegments(*HAnimSegment1033);

CHAnimSegment* HAnimSegment1034 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1034->setUSE("hanim_l_carpal_middle_phalanx_2");
HAnimHumanoid42->setSegments(*HAnimSegment1034);

CHAnimSegment* HAnimSegment1035 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1035->setUSE("hanim_l_metacarpal_4");
HAnimHumanoid42->setSegments(*HAnimSegment1035);

CHAnimSegment* HAnimSegment1036 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1036->setUSE("hanim_l_carpal_proximal_phalanx_4");
HAnimHumanoid42->setSegments(*HAnimSegment1036);

CHAnimSegment* HAnimSegment1037 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1037->setUSE("hanim_l_carpal_middle_phalanx_3");
HAnimHumanoid42->setSegments(*HAnimSegment1037);

CHAnimSegment* HAnimSegment1038 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1038->setUSE("hanim_l_metacarpal_5");
HAnimHumanoid42->setSegments(*HAnimSegment1038);

CHAnimSegment* HAnimSegment1039 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1039->setUSE("hanim_l_carpal_proximal_phalanx_5");
HAnimHumanoid42->setSegments(*HAnimSegment1039);

CHAnimSegment* HAnimSegment1040 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1040->setUSE("hanim_l_carpal_middle_phalanx_4");
HAnimHumanoid42->setSegments(*HAnimSegment1040);

CHAnimSegment* HAnimSegment1041 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1041->setUSE("hanim_r_clavicle");
HAnimHumanoid42->setSegments(*HAnimSegment1041);

CHAnimSegment* HAnimSegment1042 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1042->setUSE("hanim_r_scapula");
HAnimHumanoid42->setSegments(*HAnimSegment1042);

CHAnimSegment* HAnimSegment1043 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1043->setUSE("hanim_r_upperarm");
HAnimHumanoid42->setSegments(*HAnimSegment1043);

CHAnimSegment* HAnimSegment1044 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1044->setUSE("hanim_r_forearm");
HAnimHumanoid42->setSegments(*HAnimSegment1044);

CHAnimSegment* HAnimSegment1045 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1045->setUSE("hanim_r_carpal");
HAnimHumanoid42->setSegments(*HAnimSegment1045);

CHAnimSegment* HAnimSegment1046 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1046->setUSE("hanim_r_metacarpal_1");
HAnimHumanoid42->setSegments(*HAnimSegment1046);

CHAnimSegment* HAnimSegment1047 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1047->setUSE("hanim_r_carpal_proximal_phalanx_1");
HAnimHumanoid42->setSegments(*HAnimSegment1047);

CHAnimSegment* HAnimSegment1048 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1048->setUSE("hanim_r_metacarpal_2");
HAnimHumanoid42->setSegments(*HAnimSegment1048);

CHAnimSegment* HAnimSegment1049 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1049->setUSE("hanim_r_carpal_proximal_phalanx_2");
HAnimHumanoid42->setSegments(*HAnimSegment1049);

CHAnimSegment* HAnimSegment1050 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1050->setUSE("hanim_r_carpal_middle_phalanx_1");
HAnimHumanoid42->setSegments(*HAnimSegment1050);

CHAnimSegment* HAnimSegment1051 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1051->setUSE("hanim_r_metacarpal_3");
HAnimHumanoid42->setSegments(*HAnimSegment1051);

CHAnimSegment* HAnimSegment1052 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1052->setUSE("hanim_r_carpal_proximal_phalanx_3");
HAnimHumanoid42->setSegments(*HAnimSegment1052);

CHAnimSegment* HAnimSegment1053 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1053->setUSE("hanim_r_carpal_middle_phalanx_2");
HAnimHumanoid42->setSegments(*HAnimSegment1053);

CHAnimSegment* HAnimSegment1054 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1054->setUSE("hanim_r_metacarpal_4");
HAnimHumanoid42->setSegments(*HAnimSegment1054);

CHAnimSegment* HAnimSegment1055 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1055->setUSE("hanim_r_carpal_proximal_phalanx_4");
HAnimHumanoid42->setSegments(*HAnimSegment1055);

CHAnimSegment* HAnimSegment1056 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1056->setUSE("hanim_r_carpal_middle_phalanx_3");
HAnimHumanoid42->setSegments(*HAnimSegment1056);

CHAnimSegment* HAnimSegment1057 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1057->setUSE("hanim_r_metacarpal_5");
HAnimHumanoid42->setSegments(*HAnimSegment1057);

CHAnimSegment* HAnimSegment1058 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1058->setUSE("hanim_r_carpal_proximal_phalanx_5");
HAnimHumanoid42->setSegments(*HAnimSegment1058);

CHAnimSegment* HAnimSegment1059 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1059->setUSE("hanim_r_carpal_middle_phalanx_4");
HAnimHumanoid42->setSegments(*HAnimSegment1059);

CHAnimJoint* HAnimJoint1060 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1060->setUSE("hanim_humanoid_root");
HAnimHumanoid42->addJoints(*HAnimJoint1060);

CHAnimJoint* HAnimJoint1061 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1061->setUSE("hanim_sacroiliac");
HAnimHumanoid42->addJoints(*HAnimJoint1061);

CHAnimJoint* HAnimJoint1062 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1062->setUSE("hanim_l_hip");
HAnimHumanoid42->addJoints(*HAnimJoint1062);

CHAnimJoint* HAnimJoint1063 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1063->setUSE("hanim_l_knee");
HAnimHumanoid42->addJoints(*HAnimJoint1063);

CHAnimJoint* HAnimJoint1064 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1064->setUSE("hanim_l_talocrural");
HAnimHumanoid42->addJoints(*HAnimJoint1064);

CHAnimJoint* HAnimJoint1065 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1065->setUSE("hanim_l_tarsometatarsal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1065);

CHAnimJoint* HAnimJoint1066 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1066->setUSE("hanim_l_metatarsophalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1066);

CHAnimJoint* HAnimJoint1067 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1067->setUSE("hanim_l_tarsal_distal_interphalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1067);

CHAnimJoint* HAnimJoint1068 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1068->setUSE("hanim_r_hip");
HAnimHumanoid42->addJoints(*HAnimJoint1068);

CHAnimJoint* HAnimJoint1069 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1069->setUSE("hanim_r_knee");
HAnimHumanoid42->addJoints(*HAnimJoint1069);

CHAnimJoint* HAnimJoint1070 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1070->setUSE("hanim_r_talocrural");
HAnimHumanoid42->addJoints(*HAnimJoint1070);

CHAnimJoint* HAnimJoint1071 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1071->setUSE("hanim_r_tarsometatarsal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1071);

CHAnimJoint* HAnimJoint1072 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1072->setUSE("hanim_r_metatarsophalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1072);

CHAnimJoint* HAnimJoint1073 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1073->setUSE("hanim_r_tarsal_distal_interphalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1073);

CHAnimJoint* HAnimJoint1074 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1074->setUSE("hanim_vl5");
HAnimHumanoid42->addJoints(*HAnimJoint1074);

CHAnimJoint* HAnimJoint1075 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1075->setUSE("hanim_vl3");
HAnimHumanoid42->addJoints(*HAnimJoint1075);

CHAnimJoint* HAnimJoint1076 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1076->setUSE("hanim_vl1");
HAnimHumanoid42->addJoints(*HAnimJoint1076);

CHAnimJoint* HAnimJoint1077 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1077->setUSE("hanim_vt10");
HAnimHumanoid42->addJoints(*HAnimJoint1077);

CHAnimJoint* HAnimJoint1078 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1078->setUSE("hanim_vt6");
HAnimHumanoid42->addJoints(*HAnimJoint1078);

CHAnimJoint* HAnimJoint1079 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1079->setUSE("hanim_vt1");
HAnimHumanoid42->addJoints(*HAnimJoint1079);

CHAnimJoint* HAnimJoint1080 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1080->setUSE("hanim_vc4");
HAnimHumanoid42->addJoints(*HAnimJoint1080);

CHAnimJoint* HAnimJoint1081 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1081->setUSE("hanim_vc2");
HAnimHumanoid42->addJoints(*HAnimJoint1081);

CHAnimJoint* HAnimJoint1082 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1082->setUSE("hanim_skullbase");
HAnimHumanoid42->addJoints(*HAnimJoint1082);

CHAnimJoint* HAnimJoint1083 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1083->setUSE("hanim_l_sternoclavicular");
HAnimHumanoid42->addJoints(*HAnimJoint1083);

CHAnimJoint* HAnimJoint1084 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1084->setUSE("hanim_l_acromioclavicular");
HAnimHumanoid42->addJoints(*HAnimJoint1084);

CHAnimJoint* HAnimJoint1085 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1085->setUSE("hanim_l_shoulder");
HAnimHumanoid42->addJoints(*HAnimJoint1085);

CHAnimJoint* HAnimJoint1086 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1086->setUSE("hanim_l_elbow");
HAnimHumanoid42->addJoints(*HAnimJoint1086);

CHAnimJoint* HAnimJoint1087 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1087->setUSE("hanim_l_radiocarpal");
HAnimHumanoid42->addJoints(*HAnimJoint1087);

CHAnimJoint* HAnimJoint1088 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1088->setUSE("hanim_l_carpometacarpal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1088);

CHAnimJoint* HAnimJoint1089 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1089->setUSE("hanim_l_metacarpophalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1089);

CHAnimJoint* HAnimJoint1090 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1090->setUSE("hanim_l_carpal_interphalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1090);

CHAnimJoint* HAnimJoint1091 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1091->setUSE("hanim_l_carpometacarpal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1091);

CHAnimJoint* HAnimJoint1092 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1092->setUSE("hanim_l_metacarpophalangeal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1092);

CHAnimJoint* HAnimJoint1093 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1093->setUSE("hanim_l_carpal_proximal_interphalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1093);

CHAnimJoint* HAnimJoint1094 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1094->setUSE("hanim_l_carpal_distal_interphalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1094);

CHAnimJoint* HAnimJoint1095 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1095->setUSE("hanim_l_carpometacarpal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1095);

CHAnimJoint* HAnimJoint1096 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1096->setUSE("hanim_l_metacarpophalangeal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1096);

CHAnimJoint* HAnimJoint1097 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1097->setUSE("hanim_l_carpal_proximal_interphalangeal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1097);

CHAnimJoint* HAnimJoint1098 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1098->setUSE("hanim_l_carpal_distal_interphalangeal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1098);

CHAnimJoint* HAnimJoint1099 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1099->setUSE("hanim_l_carpometacarpal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1099);

CHAnimJoint* HAnimJoint1100 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1100->setUSE("hanim_l_metacarpophalangeal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1100);

CHAnimJoint* HAnimJoint1101 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1101->setUSE("hanim_l_carpal_proximal_interphalangeal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1101);

CHAnimJoint* HAnimJoint1102 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1102->setUSE("hanim_l_carpal_distal_interphalangeal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1102);

CHAnimJoint* HAnimJoint1103 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1103->setUSE("hanim_l_carpometacarpal_5");
HAnimHumanoid42->addJoints(*HAnimJoint1103);

CHAnimJoint* HAnimJoint1104 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1104->setUSE("hanim_l_metacarpophalangeal_5");
HAnimHumanoid42->addJoints(*HAnimJoint1104);

CHAnimJoint* HAnimJoint1105 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1105->setUSE("hanim_l_carpal_proximal_interphalangeal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1105);

CHAnimJoint* HAnimJoint1106 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1106->setUSE("hanim_l_carpal_distal_interphalangeal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1106);

CHAnimJoint* HAnimJoint1107 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1107->setUSE("hanim_r_sternoclavicular");
HAnimHumanoid42->addJoints(*HAnimJoint1107);

CHAnimJoint* HAnimJoint1108 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1108->setUSE("hanim_r_acromioclavicular");
HAnimHumanoid42->addJoints(*HAnimJoint1108);

CHAnimJoint* HAnimJoint1109 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1109->setUSE("hanim_r_shoulder");
HAnimHumanoid42->addJoints(*HAnimJoint1109);

CHAnimJoint* HAnimJoint1110 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1110->setUSE("hanim_r_elbow");
HAnimHumanoid42->addJoints(*HAnimJoint1110);

CHAnimJoint* HAnimJoint1111 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1111->setUSE("hanim_r_radiocarpal");
HAnimHumanoid42->addJoints(*HAnimJoint1111);

CHAnimJoint* HAnimJoint1112 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1112->setUSE("hanim_r_carpometacarpal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1112);

CHAnimJoint* HAnimJoint1113 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1113->setUSE("hanim_r_metacarpophalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1113);

CHAnimJoint* HAnimJoint1114 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1114->setUSE("hanim_r_carpal_interphalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1114);

CHAnimJoint* HAnimJoint1115 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1115->setUSE("hanim_r_carpometacarpal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1115);

CHAnimJoint* HAnimJoint1116 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1116->setUSE("hanim_r_metacarpophalangeal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1116);

CHAnimJoint* HAnimJoint1117 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1117->setUSE("hanim_r_carpal_proximal_interphalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1117);

CHAnimJoint* HAnimJoint1118 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1118->setUSE("hanim_r_carpal_distal_interphalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1118);

CHAnimJoint* HAnimJoint1119 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1119->setUSE("hanim_r_carpometacarpal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1119);

CHAnimJoint* HAnimJoint1120 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1120->setUSE("hanim_r_metacarpophalangeal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1120);

CHAnimJoint* HAnimJoint1121 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1121->setUSE("hanim_r_carpal_proximal_interphalangeal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1121);

CHAnimJoint* HAnimJoint1122 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1122->setUSE("hanim_r_carpal_distal_interphalangeal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1122);

CHAnimJoint* HAnimJoint1123 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1123->setUSE("hanim_r_carpometacarpal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1123);

CHAnimJoint* HAnimJoint1124 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1124->setUSE("hanim_r_metacarpophalangeal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1124);

CHAnimJoint* HAnimJoint1125 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1125->setUSE("hanim_r_carpal_proximal_interphalangeal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1125);

CHAnimJoint* HAnimJoint1126 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1126->setUSE("hanim_r_carpal_distal_interphalangeal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1126);

CHAnimJoint* HAnimJoint1127 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1127->setUSE("hanim_r_carpometacarpal_5");
HAnimHumanoid42->addJoints(*HAnimJoint1127);

CHAnimJoint* HAnimJoint1128 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1128->setUSE("hanim_r_metacarpophalangeal_5");
HAnimHumanoid42->addJoints(*HAnimJoint1128);

CHAnimJoint* HAnimJoint1129 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1129->setUSE("hanim_r_carpal_proximal_interphalangeal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1129);

CHAnimJoint* HAnimJoint1130 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1130->setUSE("hanim_r_carpal_distal_interphalangeal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1130);

CCoordinate* Coordinate1131 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1131->setDEF("TheSkinCoord");
Coordinate1131->setPoint(new float[1170]{0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.235,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168});
HAnimHumanoid42->setSkinCoord(*Coordinate1131);

CShape* Shape1132 = (CShape *)(m_pScene.createNode("Shape"));
Shape1132->setDEF("SkinShape");
CAppearance* Appearance1133 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1133->setDEF("SkinAppearance");
CMaterial* Material1134 = (CMaterial *)(m_pScene.createNode("Material"));
Material1134->setDEF("SkinMaterial");
Material1134->setAmbientIntensity(0.6);
Material1134->setDiffuseColor(new float[3]{1,1,1});
Material1134->setShininess(0.6);
Material1134->setTransparency(0.2);
Appearance1133->setMaterial(*Material1134);

CImageTexture* ImageTexture1135 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture1135->setDEF("zBlueSpiralBkg2");
ImageTexture1135->setDescription("Blue Spiral Pattern");
ImageTexture1135->setUrl(new CString[3]{"./data/zBlueSpiralBkg2.gif","zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"}, 3);
Appearance1133->setTexture(*ImageTexture1135);

Shape1132->setAppearance(*Appearance1133);

CIndexedFaceSet* IndexedFaceSet1136 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet1136->setCreaseAngle(3.1);
IndexedFaceSet1136->setCoordIndex(new int[2780]{0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1});
CColor* Color1137 = (CColor *)(m_pScene.createNode("Color"));
Color1137->setColor(new float[2079]{1,0,0,0,1,1,0,1,0,1,1,0,1,1,0,1,0,0,0,1,0,0,0,1,0,1,1,0,1,1,1,1,0,1,1,0,1,1,0,1,1,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,1,0,0,1,1,0,1,1,0,1,1,1,1,0,0,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,1,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,0,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,0,1,0,0,1,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1});
IndexedFaceSet1136->setColor(*Color1137);

CCoordinate* Coordinate1138 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1138->setUSE("TheSkinCoord");
IndexedFaceSet1136->setCoord(*Coordinate1138);

Shape1132->setGeometry(IndexedFaceSet1136);

HAnimHumanoid42->setSkin(*Shape1132);

group->addChildren(*HAnimHumanoid42);

X3D0->setScene(*Scene10);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

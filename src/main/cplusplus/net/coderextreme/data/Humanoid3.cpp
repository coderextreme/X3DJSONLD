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
meta2->setContent("Humanoid3.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("identifier");
meta3->setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid3.x3d");
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
Coordinate268->setPoint(new float[6]{0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787});
LineSet266->setCoord(*Coordinate268);

Shape265->setGeometry(LineSet266);

HAnimSegment261->addChildren(*Shape265);

HAnimJoint260->addChildren(*HAnimSegment261);

CHAnimJoint* HAnimJoint269 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint269->setDEF("hanim_vl4");
HAnimJoint269->setName("vl4");
HAnimJoint269->setCenter(new float[3]{0.0035,1.0925,-0.0787});
CHAnimSegment* HAnimSegment270 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment270->setDEF("hanim_l4");
HAnimSegment270->setName("l4");
CTransform* Transform271 = (CTransform *)(m_pScene.createNode("Transform"));
Transform271->setTranslation(new float[3]{0.0035,1.0925,-0.0787});
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
Coordinate277->setPoint(new float[6]{0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796});
LineSet275->setCoord(*Coordinate277);

Shape274->setGeometry(LineSet275);

HAnimSegment270->addChildren(*Shape274);

HAnimJoint269->addChildren(*HAnimSegment270);

CHAnimJoint* HAnimJoint278 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint278->setDEF("hanim_vl3");
HAnimJoint278->setName("vl3");
HAnimJoint278->setCenter(new float[3]{0.0041,1.1276,-0.0796});
CHAnimSegment* HAnimSegment279 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment279->setDEF("hanim_l3");
HAnimSegment279->setName("l3");
CTransform* Transform280 = (CTransform *)(m_pScene.createNode("Transform"));
Transform280->setTranslation(new float[3]{0.0041,1.1276,-0.0796});
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
Coordinate286->setPoint(new float[6]{0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08});
LineSet284->setCoord(*Coordinate286);

Shape283->setGeometry(LineSet284);

HAnimSegment279->addChildren(*Shape283);

CHAnimSite* HAnimSite287 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite287->setDEF("hanim_l_rib10_pt");
HAnimSite287->setName("l_rib10_pt");
HAnimSite287->setTranslation(new float[3]{0.0871,1.1925,0.0992});
CTouchSensor* TouchSensor288 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor288->setDescription("HAnimSite l_rib10_pt");
HAnimSite287->addChildren(*TouchSensor288);

CShape* Shape289 = (CShape *)(m_pScene.createNode("Shape"));
Shape289->setUSE("HAnimSiteShape");
HAnimSite287->addChildren(*Shape289);

HAnimSegment279->addChildren(*HAnimSite287);

CHAnimSite* HAnimSite290 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite290->setDEF("hanim_r_rib10_pt");
HAnimSite290->setName("r_rib10_pt");
HAnimSite290->setTranslation(new float[3]{-0.0711,1.1941,0.1016});
CTouchSensor* TouchSensor291 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor291->setDescription("HAnimSite r_rib10_pt");
HAnimSite290->addChildren(*TouchSensor291);

CShape* Shape292 = (CShape *)(m_pScene.createNode("Shape"));
Shape292->setUSE("HAnimSiteShape");
HAnimSite290->addChildren(*Shape292);

HAnimSegment279->addChildren(*HAnimSite290);

CHAnimSite* HAnimSite293 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite293->setDEF("hanim_spine_2_middle_back_pt");
HAnimSite293->setName("spine_2_middle_back_pt");
CTouchSensor* TouchSensor294 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor294->setDescription("HAnimSite spine_2_middle_back_pt");
HAnimSite293->addChildren(*TouchSensor294);

CShape* Shape295 = (CShape *)(m_pScene.createNode("Shape"));
Shape295->setUSE("HAnimSiteShape");
HAnimSite293->addChildren(*Shape295);

HAnimSegment279->addChildren(*HAnimSite293);

HAnimJoint278->addChildren(*HAnimSegment279);

CHAnimJoint* HAnimJoint296 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint296->setDEF("hanim_vl2");
HAnimJoint296->setName("vl2");
HAnimJoint296->setCenter(new float[3]{0.0045,1.1546,-0.08});
CHAnimSegment* HAnimSegment297 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment297->setDEF("hanim_l2");
HAnimSegment297->setName("l2");
CTransform* Transform298 = (CTransform *)(m_pScene.createNode("Transform"));
Transform298->setTranslation(new float[3]{0.0045,1.1546,-0.08});
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
Coordinate304->setPoint(new float[6]{0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805});
LineSet302->setCoord(*Coordinate304);

Shape301->setGeometry(LineSet302);

HAnimSegment297->addChildren(*Shape301);

HAnimJoint296->addChildren(*HAnimSegment297);

CHAnimJoint* HAnimJoint305 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint305->setDEF("hanim_vl1");
HAnimJoint305->setName("vl1");
HAnimJoint305->setCenter(new float[3]{0.0048,1.1912,-0.0805});
CHAnimSegment* HAnimSegment306 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment306->setDEF("hanim_l1");
HAnimSegment306->setName("l1");
CTransform* Transform307 = (CTransform *)(m_pScene.createNode("Transform"));
Transform307->setTranslation(new float[3]{0.0048,1.1912,-0.0805});
CTransform* Transform308 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape309 = (CShape *)(m_pScene.createNode("Shape"));
Shape309->setUSE("HAnimJointShape");
Transform308->addChild(*Shape309);

Transform307->addChildren(*Transform308);

HAnimSegment306->addChildren(*Transform307);

CShape* Shape310 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet311 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet311->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA312 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA312->setUSE("HAnimSegmentLineColorRGBA");
LineSet311->setColor(*ColorRGBA312);

CCoordinate* Coordinate313 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate313->setPoint(new float[6]{0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808});
LineSet311->setCoord(*Coordinate313);

Shape310->setGeometry(LineSet311);

HAnimSegment306->addChildren(*Shape310);

HAnimJoint305->addChildren(*HAnimSegment306);

CHAnimJoint* HAnimJoint314 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint314->setDEF("hanim_vt12");
HAnimJoint314->setName("vt12");
HAnimJoint314->setCenter(new float[3]{0.0051,1.2278,-0.0808});
CHAnimSegment* HAnimSegment315 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment315->setDEF("hanim_t12");
HAnimSegment315->setName("t12");
CTransform* Transform316 = (CTransform *)(m_pScene.createNode("Transform"));
Transform316->setTranslation(new float[3]{0.0051,1.2278,-0.0808});
CTransform* Transform317 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape318 = (CShape *)(m_pScene.createNode("Shape"));
Shape318->setUSE("HAnimJointShape");
Transform317->addChild(*Shape318);

Transform316->addChildren(*Transform317);

HAnimSegment315->addChildren(*Transform316);

CShape* Shape319 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet320 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet320->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA321 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA321->setUSE("HAnimSegmentLineColorRGBA");
LineSet320->setColor(*ColorRGBA321);

CCoordinate* Coordinate322 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate322->setPoint(new float[6]{0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081});
LineSet320->setCoord(*Coordinate322);

Shape319->setGeometry(LineSet320);

HAnimSegment315->addChildren(*Shape319);

HAnimJoint314->addChildren(*HAnimSegment315);

CHAnimJoint* HAnimJoint323 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint323->setDEF("hanim_vt11");
HAnimJoint323->setName("vt11");
HAnimJoint323->setCenter(new float[3]{0.0053,1.2679,-0.081});
CHAnimSegment* HAnimSegment324 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment324->setDEF("hanim_t11");
HAnimSegment324->setName("t11");
CTransform* Transform325 = (CTransform *)(m_pScene.createNode("Transform"));
Transform325->setTranslation(new float[3]{0.0053,1.2679,-0.081});
CTransform* Transform326 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape327 = (CShape *)(m_pScene.createNode("Shape"));
Shape327->setUSE("HAnimJointShape");
Transform326->addChild(*Shape327);

Transform325->addChildren(*Transform326);

HAnimSegment324->addChildren(*Transform325);

CShape* Shape328 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet329 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet329->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA330 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA330->setUSE("HAnimSegmentLineColorRGBA");
LineSet329->setColor(*ColorRGBA330);

CCoordinate* Coordinate331 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate331->setPoint(new float[6]{0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822});
LineSet329->setCoord(*Coordinate331);

Shape328->setGeometry(LineSet329);

HAnimSegment324->addChildren(*Shape328);

CHAnimSite* HAnimSite332 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite332->setDEF("hanim_substernale_pt");
HAnimSite332->setName("substernale_pt");
HAnimSite332->setTranslation(new float[3]{0.0085,1.2995,0.1147});
CTouchSensor* TouchSensor333 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor333->setDescription("HAnimSite substernale_pt");
HAnimSite332->addChildren(*TouchSensor333);

CShape* Shape334 = (CShape *)(m_pScene.createNode("Shape"));
Shape334->setUSE("HAnimSiteShape");
HAnimSite332->addChildren(*Shape334);

HAnimSegment324->addChildren(*HAnimSite332);

HAnimJoint323->addChildren(*HAnimSegment324);

CHAnimJoint* HAnimJoint335 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint335->setDEF("hanim_vt10");
HAnimJoint335->setName("vt10");
HAnimJoint335->setCenter(new float[3]{0.0056,1.2848,-0.0822});
CHAnimSegment* HAnimSegment336 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment336->setDEF("hanim_t10");
HAnimSegment336->setName("t10");
CTransform* Transform337 = (CTransform *)(m_pScene.createNode("Transform"));
Transform337->setTranslation(new float[3]{0.0056,1.2848,-0.0822});
CTransform* Transform338 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape339 = (CShape *)(m_pScene.createNode("Shape"));
Shape339->setUSE("HAnimJointShape");
Transform338->addChild(*Shape339);

Transform337->addChildren(*Transform338);

HAnimSegment336->addChildren(*Transform337);

CShape* Shape340 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet341 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet341->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA342 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA342->setUSE("HAnimSegmentLineColorRGBA");
LineSet341->setColor(*ColorRGBA342);

CCoordinate* Coordinate343 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate343->setPoint(new float[6]{0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838});
LineSet341->setCoord(*Coordinate343);

Shape340->setGeometry(LineSet341);

HAnimSegment336->addChildren(*Shape340);

CHAnimSite* HAnimSite344 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite344->setDEF("hanim_l_thelion_pt");
HAnimSite344->setName("l_thelion_pt");
HAnimSite344->setTranslation(new float[3]{0.0918,1.3382,0.1192});
CTouchSensor* TouchSensor345 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor345->setDescription("HAnimSite l_thelion_pt");
HAnimSite344->addChildren(*TouchSensor345);

CShape* Shape346 = (CShape *)(m_pScene.createNode("Shape"));
Shape346->setUSE("HAnimSiteShape");
HAnimSite344->addChildren(*Shape346);

HAnimSegment336->addChildren(*HAnimSite344);

CHAnimSite* HAnimSite347 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite347->setDEF("hanim_r_thelion_pt");
HAnimSite347->setName("r_thelion_pt");
HAnimSite347->setTranslation(new float[3]{-0.0736,1.3385,0.1217});
CTouchSensor* TouchSensor348 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor348->setDescription("HAnimSite r_thelion_pt");
HAnimSite347->addChildren(*TouchSensor348);

CShape* Shape349 = (CShape *)(m_pScene.createNode("Shape"));
Shape349->setUSE("HAnimSiteShape");
HAnimSite347->addChildren(*Shape349);

HAnimSegment336->addChildren(*HAnimSite347);

HAnimJoint335->addChildren(*HAnimSegment336);

CHAnimJoint* HAnimJoint350 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint350->setDEF("hanim_vt9");
HAnimJoint350->setName("vt9");
HAnimJoint350->setCenter(new float[3]{0.0057,1.3126,-0.0838});
CHAnimSegment* HAnimSegment351 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment351->setDEF("hanim_t9");
HAnimSegment351->setName("t9");
CTransform* Transform352 = (CTransform *)(m_pScene.createNode("Transform"));
Transform352->setTranslation(new float[3]{0.0057,1.3126,-0.0838});
CTransform* Transform353 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape354 = (CShape *)(m_pScene.createNode("Shape"));
Shape354->setUSE("HAnimJointShape");
Transform353->addChild(*Shape354);

Transform352->addChildren(*Transform353);

HAnimSegment351->addChildren(*Transform352);

CShape* Shape355 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet356 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet356->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA357 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA357->setUSE("HAnimSegmentLineColorRGBA");
LineSet356->setColor(*ColorRGBA357);

CCoordinate* Coordinate358 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate358->setPoint(new float[6]{0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845});
LineSet356->setCoord(*Coordinate358);

Shape355->setGeometry(LineSet356);

HAnimSegment351->addChildren(*Shape355);

HAnimJoint350->addChildren(*HAnimSegment351);

CHAnimJoint* HAnimJoint359 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint359->setDEF("hanim_vt8");
HAnimJoint359->setName("vt8");
HAnimJoint359->setCenter(new float[3]{0.0057,1.3382,-0.0845});
CHAnimSegment* HAnimSegment360 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment360->setDEF("hanim_t8");
HAnimSegment360->setName("t8");
CTransform* Transform361 = (CTransform *)(m_pScene.createNode("Transform"));
Transform361->setTranslation(new float[3]{0.0057,1.3382,-0.0845});
CTransform* Transform362 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape363 = (CShape *)(m_pScene.createNode("Shape"));
Shape363->setUSE("HAnimJointShape");
Transform362->addChild(*Shape363);

Transform361->addChildren(*Transform362);

HAnimSegment360->addChildren(*Transform361);

CShape* Shape364 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet365 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet365->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA366 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA366->setUSE("HAnimSegmentLineColorRGBA");
LineSet365->setColor(*ColorRGBA366);

CCoordinate* Coordinate367 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate367->setPoint(new float[6]{0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833});
LineSet365->setCoord(*Coordinate367);

Shape364->setGeometry(LineSet365);

HAnimSegment360->addChildren(*Shape364);

HAnimJoint359->addChildren(*HAnimSegment360);

CHAnimJoint* HAnimJoint368 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint368->setDEF("hanim_vt7");
HAnimJoint368->setName("vt7");
HAnimJoint368->setCenter(new float[3]{0.0058,1.3625,-0.0833});
CHAnimSegment* HAnimSegment369 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment369->setDEF("hanim_t7");
HAnimSegment369->setName("t7");
CTransform* Transform370 = (CTransform *)(m_pScene.createNode("Transform"));
Transform370->setTranslation(new float[3]{0.0058,1.3625,-0.0833});
CTransform* Transform371 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape372 = (CShape *)(m_pScene.createNode("Shape"));
Shape372->setUSE("HAnimJointShape");
Transform371->addChild(*Shape372);

Transform370->addChildren(*Transform371);

HAnimSegment369->addChildren(*Transform370);

CShape* Shape373 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet374 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet374->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA375 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA375->setUSE("HAnimSegmentLineColorRGBA");
LineSet374->setColor(*ColorRGBA375);

CCoordinate* Coordinate376 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate376->setPoint(new float[6]{0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08});
LineSet374->setCoord(*Coordinate376);

Shape373->setGeometry(LineSet374);

HAnimSegment369->addChildren(*Shape373);

CHAnimSite* HAnimSite377 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite377->setDEF("hanim_l_chest_midsagittal_plane_pt");
HAnimSite377->setName("l_chest_midsagittal_plane_pt");
CTouchSensor* TouchSensor378 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor378->setDescription("HAnimSite l_chest_midsagittal_plane_pt");
HAnimSite377->addChildren(*TouchSensor378);

CShape* Shape379 = (CShape *)(m_pScene.createNode("Shape"));
Shape379->setUSE("HAnimSiteShape");
HAnimSite377->addChildren(*Shape379);

HAnimSegment369->addChildren(*HAnimSite377);

CHAnimSite* HAnimSite380 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite380->setDEF("hanim_mesosternale_pt");
HAnimSite380->setName("mesosternale_pt");
CTouchSensor* TouchSensor381 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor381->setDescription("HAnimSite mesosternale_pt");
HAnimSite380->addChildren(*TouchSensor381);

CShape* Shape382 = (CShape *)(m_pScene.createNode("Shape"));
Shape382->setUSE("HAnimSiteShape");
HAnimSite380->addChildren(*Shape382);

HAnimSegment369->addChildren(*HAnimSite380);

CHAnimSite* HAnimSite383 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite383->setDEF("hanim_r_chest_midsagittal_plane_pt");
HAnimSite383->setName("r_chest_midsagittal_plane_pt");
CTouchSensor* TouchSensor384 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor384->setDescription("HAnimSite r_chest_midsagittal_plane_pt");
HAnimSite383->addChildren(*TouchSensor384);

CShape* Shape385 = (CShape *)(m_pScene.createNode("Shape"));
Shape385->setUSE("HAnimSiteShape");
HAnimSite383->addChildren(*Shape385);

HAnimSegment369->addChildren(*HAnimSite383);

CHAnimSite* HAnimSite386 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite386->setDEF("hanim_rear_center_midsagittal_plane_pt");
HAnimSite386->setName("rear_center_midsagittal_plane_pt");
CTouchSensor* TouchSensor387 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor387->setDescription("HAnimSite rear_center_midsagittal_plane_pt");
HAnimSite386->addChildren(*TouchSensor387);

CShape* Shape388 = (CShape *)(m_pScene.createNode("Shape"));
Shape388->setUSE("HAnimSiteShape");
HAnimSite386->addChildren(*Shape388);

HAnimSegment369->addChildren(*HAnimSite386);

HAnimJoint368->addChildren(*HAnimSegment369);

CHAnimJoint* HAnimJoint389 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint389->setDEF("hanim_vt6");
HAnimJoint389->setName("vt6");
HAnimJoint389->setCenter(new float[3]{0.0059,1.3866,-0.08});
CHAnimSegment* HAnimSegment390 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment390->setDEF("hanim_t6");
HAnimSegment390->setName("t6");
CTransform* Transform391 = (CTransform *)(m_pScene.createNode("Transform"));
Transform391->setTranslation(new float[3]{0.0059,1.3866,-0.08});
CTransform* Transform392 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape393 = (CShape *)(m_pScene.createNode("Shape"));
Shape393->setUSE("HAnimJointShape");
Transform392->addChild(*Shape393);

Transform391->addChildren(*Transform392);

HAnimSegment390->addChildren(*Transform391);

CShape* Shape394 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet395 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet395->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA396 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA396->setUSE("HAnimSegmentLineColorRGBA");
LineSet395->setColor(*ColorRGBA396);

CCoordinate* Coordinate397 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate397->setPoint(new float[6]{0.0059,1.3866,-0.08,0.006,1.4102,-0.0745});
LineSet395->setCoord(*Coordinate397);

Shape394->setGeometry(LineSet395);

HAnimSegment390->addChildren(*Shape394);

CHAnimSite* HAnimSite398 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite398->setDEF("hanim_spine_1_middle_back_pt");
HAnimSite398->setName("spine_1_middle_back_pt");
CTouchSensor* TouchSensor399 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor399->setDescription("HAnimSite spine_1_middle_back_pt");
HAnimSite398->addChildren(*TouchSensor399);

CShape* Shape400 = (CShape *)(m_pScene.createNode("Shape"));
Shape400->setUSE("HAnimSiteShape");
HAnimSite398->addChildren(*Shape400);

HAnimSegment390->addChildren(*HAnimSite398);

HAnimJoint389->addChildren(*HAnimSegment390);

CHAnimJoint* HAnimJoint401 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint401->setDEF("hanim_vt5");
HAnimJoint401->setName("vt5");
HAnimJoint401->setCenter(new float[3]{0.006,1.4102,-0.0745});
CHAnimSegment* HAnimSegment402 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment402->setDEF("hanim_t5");
HAnimSegment402->setName("t5");
CTransform* Transform403 = (CTransform *)(m_pScene.createNode("Transform"));
Transform403->setTranslation(new float[3]{0.006,1.4102,-0.0745});
CTransform* Transform404 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape405 = (CShape *)(m_pScene.createNode("Shape"));
Shape405->setUSE("HAnimJointShape");
Transform404->addChild(*Shape405);

Transform403->addChildren(*Transform404);

HAnimSegment402->addChildren(*Transform403);

CShape* Shape406 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet407 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet407->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA408 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA408->setUSE("HAnimSegmentLineColorRGBA");
LineSet407->setColor(*ColorRGBA408);

CCoordinate* Coordinate409 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate409->setPoint(new float[6]{0.006,1.4102,-0.0745,0.0061,1.432,-0.0675});
LineSet407->setCoord(*Coordinate409);

Shape406->setGeometry(LineSet407);

HAnimSegment402->addChildren(*Shape406);

HAnimJoint401->addChildren(*HAnimSegment402);

CHAnimJoint* HAnimJoint410 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint410->setDEF("hanim_vt4");
HAnimJoint410->setName("vt4");
HAnimJoint410->setCenter(new float[3]{0.0061,1.432,-0.0675});
CHAnimSegment* HAnimSegment411 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment411->setDEF("hanim_t4");
HAnimSegment411->setName("t4");
CTransform* Transform412 = (CTransform *)(m_pScene.createNode("Transform"));
Transform412->setTranslation(new float[3]{0.0061,1.432,-0.0675});
CTransform* Transform413 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape414 = (CShape *)(m_pScene.createNode("Shape"));
Shape414->setUSE("HAnimJointShape");
Transform413->addChild(*Shape414);

Transform412->addChildren(*Transform413);

HAnimSegment411->addChildren(*Transform412);

CShape* Shape415 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet416 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet416->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA417 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA417->setUSE("HAnimSegmentLineColorRGBA");
LineSet416->setColor(*ColorRGBA417);

CCoordinate* Coordinate418 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate418->setPoint(new float[6]{0.0061,1.432,-0.0675,0.0062,1.4583,-0.057});
LineSet416->setCoord(*Coordinate418);

Shape415->setGeometry(LineSet416);

HAnimSegment411->addChildren(*Shape415);

HAnimJoint410->addChildren(*HAnimSegment411);

CHAnimJoint* HAnimJoint419 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint419->setDEF("hanim_vt3");
HAnimJoint419->setName("vt3");
HAnimJoint419->setCenter(new float[3]{0.0062,1.4583,-0.057});
CHAnimSegment* HAnimSegment420 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment420->setDEF("hanim_t3");
HAnimSegment420->setName("t3");
CTransform* Transform421 = (CTransform *)(m_pScene.createNode("Transform"));
Transform421->setTranslation(new float[3]{0.0062,1.4583,-0.057});
CTransform* Transform422 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape423 = (CShape *)(m_pScene.createNode("Shape"));
Shape423->setUSE("HAnimJointShape");
Transform422->addChild(*Shape423);

Transform421->addChildren(*Transform422);

HAnimSegment420->addChildren(*Transform421);

CShape* Shape424 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet425 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet425->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA426 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA426->setUSE("HAnimSegmentLineColorRGBA");
LineSet425->setColor(*ColorRGBA426);

CCoordinate* Coordinate427 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate427->setPoint(new float[6]{0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484});
LineSet425->setCoord(*Coordinate427);

Shape424->setGeometry(LineSet425);

HAnimSegment420->addChildren(*Shape424);

HAnimJoint419->addChildren(*HAnimSegment420);

CHAnimJoint* HAnimJoint428 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint428->setDEF("hanim_vt2");
HAnimJoint428->setName("vt2");
HAnimJoint428->setCenter(new float[3]{0.0063,1.4761,-0.0484});
CHAnimSegment* HAnimSegment429 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment429->setDEF("hanim_t2");
HAnimSegment429->setName("t2");
CTransform* Transform430 = (CTransform *)(m_pScene.createNode("Transform"));
Transform430->setTranslation(new float[3]{0.0063,1.4761,-0.0484});
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
Coordinate436->setPoint(new float[6]{0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387});
LineSet434->setCoord(*Coordinate436);

Shape433->setGeometry(LineSet434);

HAnimSegment429->addChildren(*Shape433);

CHAnimSite* HAnimSite437 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite437->setDEF("hanim_cervicale_pt");
HAnimSite437->setName("cervicale_pt");
HAnimSite437->setTranslation(new float[3]{0.0064,1.52,-0.0815});
CTouchSensor* TouchSensor438 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor438->setDescription("HAnimSite cervicale_pt");
HAnimSite437->addChildren(*TouchSensor438);

CShape* Shape439 = (CShape *)(m_pScene.createNode("Shape"));
Shape439->setUSE("HAnimSiteShape");
HAnimSite437->addChildren(*Shape439);

HAnimSegment429->addChildren(*HAnimSite437);

CHAnimSite* HAnimSite440 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite440->setDEF("hanim_suprasternale_pt");
HAnimSite440->setName("suprasternale_pt");
HAnimSite440->setTranslation(new float[3]{0.0084,1.4714,0.0551});
CTouchSensor* TouchSensor441 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor441->setDescription("HAnimSite suprasternale_pt");
HAnimSite440->addChildren(*TouchSensor441);

CShape* Shape442 = (CShape *)(m_pScene.createNode("Shape"));
Shape442->setUSE("HAnimSiteShape");
HAnimSite440->addChildren(*Shape442);

HAnimSegment429->addChildren(*HAnimSite440);

HAnimJoint428->addChildren(*HAnimSegment429);

CHAnimJoint* HAnimJoint443 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint443->setDEF("hanim_vt1");
HAnimJoint443->setName("vt1");
HAnimJoint443->setCenter(new float[3]{0.0065,1.4951,-0.0387});
CHAnimSegment* HAnimSegment444 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment444->setDEF("hanim_t1");
HAnimSegment444->setName("t1");
CTransform* Transform445 = (CTransform *)(m_pScene.createNode("Transform"));
Transform445->setTranslation(new float[3]{0.0065,1.4951,-0.0387});
CTransform* Transform446 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape447 = (CShape *)(m_pScene.createNode("Shape"));
Shape447->setUSE("HAnimJointShape");
Transform446->addChild(*Shape447);

Transform445->addChildren(*Transform446);

HAnimSegment444->addChildren(*Transform445);

CShape* Shape448 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet449 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet449->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA450 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA450->setUSE("HAnimSegmentLineColorRGBA");
LineSet449->setColor(*ColorRGBA450);

CCoordinate* Coordinate451 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate451->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301});
LineSet449->setCoord(*Coordinate451);

Shape448->setGeometry(LineSet449);

HAnimSegment444->addChildren(*Shape448);

CHAnimSite* HAnimSite452 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite452->setDEF("hanim_l_neck_base_pt");
HAnimSite452->setName("l_neck_base_pt");
HAnimSite452->setTranslation(new float[3]{0.0646,1.5141,-0.038});
CTouchSensor* TouchSensor453 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor453->setDescription("HAnimSite l_neck_base_pt");
HAnimSite452->addChildren(*TouchSensor453);

CShape* Shape454 = (CShape *)(m_pScene.createNode("Shape"));
Shape454->setUSE("HAnimSiteShape");
HAnimSite452->addChildren(*Shape454);

HAnimSegment444->addChildren(*HAnimSite452);

CHAnimSite* HAnimSite455 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite455->setDEF("hanim_r_neck_base_pt");
HAnimSite455->setName("r_neck_base_pt");
HAnimSite455->setTranslation(new float[3]{-0.0419,1.5149,-0.022});
CTouchSensor* TouchSensor456 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor456->setDescription("HAnimSite r_neck_base_pt");
HAnimSite455->addChildren(*TouchSensor456);

CShape* Shape457 = (CShape *)(m_pScene.createNode("Shape"));
Shape457->setUSE("HAnimSiteShape");
HAnimSite455->addChildren(*Shape457);

HAnimSegment444->addChildren(*HAnimSite455);

CShape* Shape458 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet459 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet459->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA460 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA460->setUSE("HAnimSegmentLineColorRGBA");
LineSet459->setColor(*ColorRGBA460);

CCoordinate* Coordinate461 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate461->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353});
LineSet459->setCoord(*Coordinate461);

Shape458->setGeometry(LineSet459);

HAnimSegment444->addChildren(*Shape458);

CHAnimSite* HAnimSite462 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite462->setDEF("hanim_l_acromion_pt");
HAnimSite462->setName("l_acromion_pt");
HAnimSite462->setTranslation(new float[3]{0.2032,1.476,-0.049});
CTouchSensor* TouchSensor463 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor463->setDescription("HAnimSite l_acromion_pt");
HAnimSite462->addChildren(*TouchSensor463);

CShape* Shape464 = (CShape *)(m_pScene.createNode("Shape"));
Shape464->setUSE("HAnimSiteShape");
HAnimSite462->addChildren(*Shape464);

HAnimSegment444->addChildren(*HAnimSite462);

CHAnimSite* HAnimSite465 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite465->setDEF("hanim_l_axilla_distal_pt");
HAnimSite465->setName("l_axilla_distal_pt");
HAnimSite465->setTranslation(new float[3]{0.1706,1.4072,-0.0875});
CTouchSensor* TouchSensor466 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor466->setDescription("HAnimSite l_axilla_distal_pt");
HAnimSite465->addChildren(*TouchSensor466);

CShape* Shape467 = (CShape *)(m_pScene.createNode("Shape"));
Shape467->setUSE("HAnimSiteShape");
HAnimSite465->addChildren(*Shape467);

HAnimSegment444->addChildren(*HAnimSite465);

CHAnimSite* HAnimSite468 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite468->setDEF("hanim_l_axilla_posterior_folds_pt");
HAnimSite468->setName("l_axilla_posterior_folds_pt");
CTouchSensor* TouchSensor469 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor469->setDescription("HAnimSite l_axilla_posterior_folds_pt");
HAnimSite468->addChildren(*TouchSensor469);

CShape* Shape470 = (CShape *)(m_pScene.createNode("Shape"));
Shape470->setUSE("HAnimSiteShape");
HAnimSite468->addChildren(*Shape470);

HAnimSegment444->addChildren(*HAnimSite468);

CHAnimSite* HAnimSite471 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite471->setDEF("hanim_l_axilla_proximal_pt");
HAnimSite471->setName("l_axilla_proximal_pt");
HAnimSite471->setTranslation(new float[3]{0.1777,1.4065,-0.0075});
CTouchSensor* TouchSensor472 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor472->setDescription("HAnimSite l_axilla_proximal_pt");
HAnimSite471->addChildren(*TouchSensor472);

CShape* Shape473 = (CShape *)(m_pScene.createNode("Shape"));
Shape473->setUSE("HAnimSiteShape");
HAnimSite471->addChildren(*Shape473);

HAnimSegment444->addChildren(*HAnimSite471);

CHAnimSite* HAnimSite474 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite474->setDEF("hanim_l_clavicale_pt");
HAnimSite474->setName("l_clavicale_pt");
HAnimSite474->setTranslation(new float[3]{0.0271,1.4943,0.0394});
CTouchSensor* TouchSensor475 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor475->setDescription("HAnimSite l_clavicale_pt");
HAnimSite474->addChildren(*TouchSensor475);

CShape* Shape476 = (CShape *)(m_pScene.createNode("Shape"));
Shape476->setUSE("HAnimSiteShape");
HAnimSite474->addChildren(*Shape476);

HAnimSegment444->addChildren(*HAnimSite474);

CShape* Shape477 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet478 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet478->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA479 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA479->setUSE("HAnimSegmentLineColorRGBA");
LineSet478->setColor(*ColorRGBA479);

CCoordinate* Coordinate480 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate480->setPoint(new float[6]{0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033});
LineSet478->setCoord(*Coordinate480);

Shape477->setGeometry(LineSet478);

HAnimSegment444->addChildren(*Shape477);

CHAnimSite* HAnimSite481 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite481->setDEF("hanim_r_acromion_pt");
HAnimSite481->setName("r_acromion_pt");
HAnimSite481->setTranslation(new float[3]{-0.1905,1.4791,-0.0431});
CTouchSensor* TouchSensor482 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor482->setDescription("HAnimSite r_acromion_pt");
HAnimSite481->addChildren(*TouchSensor482);

CShape* Shape483 = (CShape *)(m_pScene.createNode("Shape"));
Shape483->setUSE("HAnimSiteShape");
HAnimSite481->addChildren(*Shape483);

HAnimSegment444->addChildren(*HAnimSite481);

CHAnimSite* HAnimSite484 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite484->setDEF("hanim_r_axilla_distal_pt");
HAnimSite484->setName("r_axilla_distal_pt");
HAnimSite484->setTranslation(new float[3]{-0.1603,1.4098,-0.0826});
CTouchSensor* TouchSensor485 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor485->setDescription("HAnimSite r_axilla_distal_pt");
HAnimSite484->addChildren(*TouchSensor485);

CShape* Shape486 = (CShape *)(m_pScene.createNode("Shape"));
Shape486->setUSE("HAnimSiteShape");
HAnimSite484->addChildren(*Shape486);

HAnimSegment444->addChildren(*HAnimSite484);

CHAnimSite* HAnimSite487 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite487->setDEF("hanim_r_axilla_posterior_folds_pt");
HAnimSite487->setName("r_axilla_posterior_folds_pt");
CTouchSensor* TouchSensor488 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor488->setDescription("HAnimSite r_axilla_posterior_folds_pt");
HAnimSite487->addChildren(*TouchSensor488);

CShape* Shape489 = (CShape *)(m_pScene.createNode("Shape"));
Shape489->setUSE("HAnimSiteShape");
HAnimSite487->addChildren(*Shape489);

HAnimSegment444->addChildren(*HAnimSite487);

CHAnimSite* HAnimSite490 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite490->setDEF("hanim_r_axilla_proximal_pt");
HAnimSite490->setName("r_axilla_proximal_pt");
HAnimSite490->setTranslation(new float[3]{-0.1626,1.4072,-0.0031});
CTouchSensor* TouchSensor491 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor491->setDescription("HAnimSite r_axilla_proximal_pt");
HAnimSite490->addChildren(*TouchSensor491);

CShape* Shape492 = (CShape *)(m_pScene.createNode("Shape"));
Shape492->setUSE("HAnimSiteShape");
HAnimSite490->addChildren(*Shape492);

HAnimSegment444->addChildren(*HAnimSite490);

CHAnimSite* HAnimSite493 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite493->setDEF("hanim_r_clavicale_pt");
HAnimSite493->setName("r_clavicale_pt");
HAnimSite493->setTranslation(new float[3]{-0.0115,1.4943,0.04});
CTouchSensor* TouchSensor494 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor494->setDescription("HAnimSite r_clavicale_pt");
HAnimSite493->addChildren(*TouchSensor494);

CShape* Shape495 = (CShape *)(m_pScene.createNode("Shape"));
Shape495->setUSE("HAnimSiteShape");
HAnimSite493->addChildren(*Shape495);

HAnimSegment444->addChildren(*HAnimSite493);

HAnimJoint443->addChildren(*HAnimSegment444);

CHAnimJoint* HAnimJoint496 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint496->setDEF("hanim_vc7");
HAnimJoint496->setName("vc7");
HAnimJoint496->setCenter(new float[3]{0.0066,1.5132,-0.0301});
CHAnimSegment* HAnimSegment497 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment497->setDEF("hanim_c7");
HAnimSegment497->setName("c7");
CTransform* Transform498 = (CTransform *)(m_pScene.createNode("Transform"));
Transform498->setTranslation(new float[3]{0.0066,1.5132,-0.0301});
CTransform* Transform499 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape500 = (CShape *)(m_pScene.createNode("Shape"));
Shape500->setUSE("HAnimJointShape");
Transform499->addChild(*Shape500);

Transform498->addChildren(*Transform499);

HAnimSegment497->addChildren(*Transform498);

CShape* Shape501 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet502 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet502->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA503 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA503->setUSE("HAnimSegmentLineColorRGBA");
LineSet502->setColor(*ColorRGBA503);

CCoordinate* Coordinate504 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate504->setPoint(new float[6]{0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143});
LineSet502->setCoord(*Coordinate504);

Shape501->setGeometry(LineSet502);

HAnimSegment497->addChildren(*Shape501);

HAnimJoint496->addChildren(*HAnimSegment497);

CHAnimJoint* HAnimJoint505 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint505->setDEF("hanim_vc6");
HAnimJoint505->setName("vc6");
HAnimJoint505->setCenter(new float[3]{0.0066,1.5357,-0.0143});
CHAnimSegment* HAnimSegment506 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment506->setDEF("hanim_c6");
HAnimSegment506->setName("c6");
CTransform* Transform507 = (CTransform *)(m_pScene.createNode("Transform"));
Transform507->setTranslation(new float[3]{0.0066,1.5357,-0.0143});
CTransform* Transform508 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape509 = (CShape *)(m_pScene.createNode("Shape"));
Shape509->setUSE("HAnimJointShape");
Transform508->addChild(*Shape509);

Transform507->addChildren(*Transform508);

HAnimSegment506->addChildren(*Transform507);

CShape* Shape510 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet511 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet511->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA512 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA512->setUSE("HAnimSegmentLineColorRGBA");
LineSet511->setColor(*ColorRGBA512);

CCoordinate* Coordinate513 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate513->setPoint(new float[6]{0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082});
LineSet511->setCoord(*Coordinate513);

Shape510->setGeometry(LineSet511);

HAnimSegment506->addChildren(*Shape510);

HAnimJoint505->addChildren(*HAnimSegment506);

CHAnimJoint* HAnimJoint514 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint514->setDEF("hanim_vc5");
HAnimJoint514->setName("vc5");
HAnimJoint514->setCenter(new float[3]{0.0066,1.552,-0.0082});
CHAnimSegment* HAnimSegment515 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment515->setDEF("hanim_c5");
HAnimSegment515->setName("c5");
CTransform* Transform516 = (CTransform *)(m_pScene.createNode("Transform"));
Transform516->setTranslation(new float[3]{0.0066,1.552,-0.0082});
CTransform* Transform517 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape518 = (CShape *)(m_pScene.createNode("Shape"));
Shape518->setUSE("HAnimJointShape");
Transform517->addChild(*Shape518);

Transform516->addChildren(*Transform517);

HAnimSegment515->addChildren(*Transform516);

CShape* Shape519 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet520 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet520->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA521 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA521->setUSE("HAnimSegmentLineColorRGBA");
LineSet520->setColor(*ColorRGBA521);

CCoordinate* Coordinate522 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate522->setPoint(new float[6]{0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084});
LineSet520->setCoord(*Coordinate522);

Shape519->setGeometry(LineSet520);

HAnimSegment515->addChildren(*Shape519);

HAnimJoint514->addChildren(*HAnimSegment515);

CHAnimJoint* HAnimJoint523 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint523->setDEF("hanim_vc4");
HAnimJoint523->setName("vc4");
HAnimJoint523->setCenter(new float[3]{0.0066,1.5662,-0.0084});
CHAnimSegment* HAnimSegment524 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment524->setDEF("hanim_c4");
HAnimSegment524->setName("c4");
CTransform* Transform525 = (CTransform *)(m_pScene.createNode("Transform"));
Transform525->setTranslation(new float[3]{0.0066,1.5662,-0.0084});
CTransform* Transform526 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape527 = (CShape *)(m_pScene.createNode("Shape"));
Shape527->setUSE("HAnimJointShape");
Transform526->addChild(*Shape527);

Transform525->addChildren(*Transform526);

HAnimSegment524->addChildren(*Transform525);

CShape* Shape528 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet529 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet529->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA530 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA530->setUSE("HAnimSegmentLineColorRGBA");
LineSet529->setColor(*ColorRGBA530);

CCoordinate* Coordinate531 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate531->setPoint(new float[6]{0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103});
LineSet529->setCoord(*Coordinate531);

Shape528->setGeometry(LineSet529);

HAnimSegment524->addChildren(*Shape528);

HAnimJoint523->addChildren(*HAnimSegment524);

CHAnimJoint* HAnimJoint532 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint532->setDEF("hanim_vc3");
HAnimJoint532->setName("vc3");
HAnimJoint532->setCenter(new float[3]{0.0066,1.58,-0.0103});
CHAnimSegment* HAnimSegment533 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment533->setDEF("hanim_c3");
HAnimSegment533->setName("c3");
CTransform* Transform534 = (CTransform *)(m_pScene.createNode("Transform"));
Transform534->setTranslation(new float[3]{0.0066,1.58,-0.0103});
CTransform* Transform535 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape536 = (CShape *)(m_pScene.createNode("Shape"));
Shape536->setUSE("HAnimJointShape");
Transform535->addChild(*Shape536);

Transform534->addChildren(*Transform535);

HAnimSegment533->addChildren(*Transform534);

CShape* Shape537 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet538 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet538->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA539 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA539->setUSE("HAnimSegmentLineColorRGBA");
LineSet538->setColor(*ColorRGBA539);

CCoordinate* Coordinate540 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate540->setPoint(new float[6]{0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103});
LineSet538->setCoord(*Coordinate540);

Shape537->setGeometry(LineSet538);

HAnimSegment533->addChildren(*Shape537);

CHAnimSite* HAnimSite541 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite541->setDEF("hanim_adams_apple_pt");
HAnimSite541->setName("adams_apple_pt");
CTouchSensor* TouchSensor542 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor542->setDescription("HAnimSite adams_apple_pt");
HAnimSite541->addChildren(*TouchSensor542);

CShape* Shape543 = (CShape *)(m_pScene.createNode("Shape"));
Shape543->setUSE("HAnimSiteShape");
HAnimSite541->addChildren(*Shape543);

HAnimSegment533->addChildren(*HAnimSite541);

HAnimJoint532->addChildren(*HAnimSegment533);

CHAnimJoint* HAnimJoint544 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint544->setDEF("hanim_vc2");
HAnimJoint544->setName("vc2");
HAnimJoint544->setCenter(new float[3]{0.0066,1.5928,-0.0103});
CHAnimSegment* HAnimSegment545 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment545->setDEF("hanim_c2");
HAnimSegment545->setName("c2");
CTransform* Transform546 = (CTransform *)(m_pScene.createNode("Transform"));
Transform546->setTranslation(new float[3]{0.0066,1.5928,-0.0103});
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
Coordinate552->setPoint(new float[6]{0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034});
LineSet550->setCoord(*Coordinate552);

Shape549->setGeometry(LineSet550);

HAnimSegment545->addChildren(*Shape549);

HAnimJoint544->addChildren(*HAnimSegment545);

CHAnimJoint* HAnimJoint553 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint553->setDEF("hanim_vc1");
HAnimJoint553->setName("vc1");
HAnimJoint553->setCenter(new float[3]{0.0066,1.6144,-0.0034});
CHAnimSegment* HAnimSegment554 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment554->setDEF("hanim_c1");
HAnimSegment554->setName("c1");
CTransform* Transform555 = (CTransform *)(m_pScene.createNode("Transform"));
Transform555->setTranslation(new float[3]{0.0066,1.6144,-0.0034});
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
Coordinate561->setPoint(new float[6]{0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236});
LineSet559->setCoord(*Coordinate561);

Shape558->setGeometry(LineSet559);

HAnimSegment554->addChildren(*Shape558);

CHAnimSite* HAnimSite562 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite562->setDEF("hanim_glabella_pt");
HAnimSite562->setName("glabella_pt");
CTouchSensor* TouchSensor563 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor563->setDescription("HAnimSite glabella_pt");
HAnimSite562->addChildren(*TouchSensor563);

CShape* Shape564 = (CShape *)(m_pScene.createNode("Shape"));
Shape564->setUSE("HAnimSiteShape");
HAnimSite562->addChildren(*Shape564);

HAnimSegment554->addChildren(*HAnimSite562);

CHAnimSite* HAnimSite565 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite565->setDEF("hanim_l_ectocanthus_pt");
HAnimSite565->setName("l_ectocanthus_pt");
CTouchSensor* TouchSensor566 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor566->setDescription("HAnimSite l_ectocanthus_pt");
HAnimSite565->addChildren(*TouchSensor566);

CShape* Shape567 = (CShape *)(m_pScene.createNode("Shape"));
Shape567->setUSE("HAnimSiteShape");
HAnimSite565->addChildren(*Shape567);

HAnimSegment554->addChildren(*HAnimSite565);

CHAnimSite* HAnimSite568 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite568->setDEF("hanim_l_infraorbitale_pt");
HAnimSite568->setName("l_infraorbitale_pt");
HAnimSite568->setTranslation(new float[3]{0.0341,1.6171,0.0752});
CTouchSensor* TouchSensor569 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor569->setDescription("HAnimSite l_infraorbitale_pt");
HAnimSite568->addChildren(*TouchSensor569);

CShape* Shape570 = (CShape *)(m_pScene.createNode("Shape"));
Shape570->setUSE("HAnimSiteShape");
HAnimSite568->addChildren(*Shape570);

HAnimSegment554->addChildren(*HAnimSite568);

CHAnimSite* HAnimSite571 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite571->setDEF("hanim_l_tragion_pt");
HAnimSite571->setName("l_tragion_pt");
HAnimSite571->setTranslation(new float[3]{0.0739,1.6348,0.0282});
CTouchSensor* TouchSensor572 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor572->setDescription("HAnimSite l_tragion_pt");
HAnimSite571->addChildren(*TouchSensor572);

CShape* Shape573 = (CShape *)(m_pScene.createNode("Shape"));
Shape573->setUSE("HAnimSiteShape");
HAnimSite571->addChildren(*Shape573);

HAnimSegment554->addChildren(*HAnimSite571);

CHAnimSite* HAnimSite574 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite574->setDEF("hanim_nuchale_pt");
HAnimSite574->setName("nuchale_pt");
HAnimSite574->setTranslation(new float[3]{0.0039,1.5972,-0.0796});
CTouchSensor* TouchSensor575 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor575->setDescription("HAnimSite nuchale_pt");
HAnimSite574->addChildren(*TouchSensor575);

CShape* Shape576 = (CShape *)(m_pScene.createNode("Shape"));
Shape576->setUSE("HAnimSiteShape");
HAnimSite574->addChildren(*Shape576);

HAnimSegment554->addChildren(*HAnimSite574);

CHAnimSite* HAnimSite577 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite577->setDEF("hanim_opisthocranion_pt");
HAnimSite577->setName("opisthocranion_pt");
CTouchSensor* TouchSensor578 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor578->setDescription("HAnimSite opisthocranion_pt");
HAnimSite577->addChildren(*TouchSensor578);

CShape* Shape579 = (CShape *)(m_pScene.createNode("Shape"));
Shape579->setUSE("HAnimSiteShape");
HAnimSite577->addChildren(*Shape579);

HAnimSegment554->addChildren(*HAnimSite577);

CHAnimSite* HAnimSite580 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite580->setDEF("hanim_r_ectocanthus_pt");
HAnimSite580->setName("r_ectocanthus_pt");
CTouchSensor* TouchSensor581 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor581->setDescription("HAnimSite r_ectocanthus_pt");
HAnimSite580->addChildren(*TouchSensor581);

CShape* Shape582 = (CShape *)(m_pScene.createNode("Shape"));
Shape582->setUSE("HAnimSiteShape");
HAnimSite580->addChildren(*Shape582);

HAnimSegment554->addChildren(*HAnimSite580);

CHAnimSite* HAnimSite583 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite583->setDEF("hanim_r_infraorbitale_pt");
HAnimSite583->setName("r_infraorbitale_pt");
HAnimSite583->setTranslation(new float[3]{-0.0237,1.6171,0.0752});
CTouchSensor* TouchSensor584 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor584->setDescription("HAnimSite r_infraorbitale_pt");
HAnimSite583->addChildren(*TouchSensor584);

CShape* Shape585 = (CShape *)(m_pScene.createNode("Shape"));
Shape585->setUSE("HAnimSiteShape");
HAnimSite583->addChildren(*Shape585);

HAnimSegment554->addChildren(*HAnimSite583);

CHAnimSite* HAnimSite586 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite586->setDEF("hanim_r_tragion_pt");
HAnimSite586->setName("r_tragion_pt");
HAnimSite586->setTranslation(new float[3]{-0.0646,1.6347,0.0302});
CTouchSensor* TouchSensor587 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor587->setDescription("HAnimSite r_tragion_pt");
HAnimSite586->addChildren(*TouchSensor587);

CShape* Shape588 = (CShape *)(m_pScene.createNode("Shape"));
Shape588->setUSE("HAnimSiteShape");
HAnimSite586->addChildren(*Shape588);

HAnimSegment554->addChildren(*HAnimSite586);

CHAnimSite* HAnimSite589 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite589->setDEF("hanim_sellion_pt");
HAnimSite589->setName("sellion_pt");
HAnimSite589->setTranslation(new float[3]{0.0058,1.6316,0.0852});
CTouchSensor* TouchSensor590 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor590->setDescription("HAnimSite sellion_pt");
HAnimSite589->addChildren(*TouchSensor590);

CShape* Shape591 = (CShape *)(m_pScene.createNode("Shape"));
Shape591->setUSE("HAnimSiteShape");
HAnimSite589->addChildren(*Shape591);

HAnimSegment554->addChildren(*HAnimSite589);

CHAnimSite* HAnimSite592 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite592->setDEF("hanim_skull_vertex_pt");
HAnimSite592->setName("skull_vertex_pt");
HAnimSite592->setTranslation(new float[3]{0.005,1.7504,0.0055});
CTouchSensor* TouchSensor593 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor593->setDescription("HAnimSite skull_vertex_pt");
HAnimSite592->addChildren(*TouchSensor593);

CShape* Shape594 = (CShape *)(m_pScene.createNode("Shape"));
Shape594->setUSE("HAnimSiteShape");
HAnimSite592->addChildren(*Shape594);

HAnimSegment554->addChildren(*HAnimSite592);

HAnimJoint553->addChildren(*HAnimSegment554);

CHAnimJoint* HAnimJoint595 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint595->setDEF("hanim_skullbase");
HAnimJoint595->setName("skullbase");
HAnimJoint595->setCenter(new float[3]{0.0044,1.6209,0.0236});
CHAnimSegment* HAnimSegment596 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment596->setDEF("hanim_skull");
HAnimSegment596->setName("skull");
CTransform* Transform597 = (CTransform *)(m_pScene.createNode("Transform"));
Transform597->setTranslation(new float[3]{0.0044,1.6209,0.0236});
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
Coordinate603->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0503,1.4157,-0.0689});
LineSet601->setCoord(*Coordinate603);

Shape600->setGeometry(LineSet601);

HAnimSegment596->addChildren(*Shape600);

CShape* Shape604 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet605 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet605->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA606 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA606->setUSE("HAnimSegmentLineColorRGBA");
LineSet605->setColor(*ColorRGBA606);

CCoordinate* Coordinate607 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate607->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0507,1.4157,-0.0689});
LineSet605->setCoord(*Coordinate607);

Shape604->setGeometry(LineSet605);

HAnimSegment596->addChildren(*Shape604);

CShape* Shape608 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet609 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet609->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA610 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA610->setUSE("HAnimSegmentLineColorRGBA");
LineSet609->setColor(*ColorRGBA610);

CCoordinate* Coordinate611 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate611->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0479,1.3963,-0.0188});
LineSet609->setCoord(*Coordinate611);

Shape608->setGeometry(LineSet609);

HAnimSegment596->addChildren(*Shape608);

CShape* Shape612 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet613 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet613->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA614 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA614->setUSE("HAnimSegmentLineColorRGBA");
LineSet613->setColor(*ColorRGBA614);

CCoordinate* Coordinate615 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate615->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0483,1.3963,-0.0188});
LineSet613->setCoord(*Coordinate615);

Shape612->setGeometry(LineSet613);

HAnimSegment596->addChildren(*Shape612);

CShape* Shape616 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet617 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet617->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA618 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA618->setUSE("HAnimSegmentLineColorRGBA");
LineSet617->setColor(*ColorRGBA618);

CCoordinate* Coordinate619 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate619->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0216,1.4053,0.0051});
LineSet617->setCoord(*Coordinate619);

Shape616->setGeometry(LineSet617);

HAnimSegment596->addChildren(*Shape616);

CShape* Shape620 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet621 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet621->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA622 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA622->setUSE("HAnimSegmentLineColorRGBA");
LineSet621->setColor(*ColorRGBA622);

CCoordinate* Coordinate623 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate623->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0219,1.4053,0.0051});
LineSet621->setCoord(*Coordinate623);

Shape620->setGeometry(LineSet621);

HAnimSegment596->addChildren(*Shape620);

CShape* Shape624 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet625 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet625->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA626 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA626->setUSE("HAnimSegmentLineColorRGBA");
LineSet625->setColor(*ColorRGBA626);

CCoordinate* Coordinate627 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate627->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0002,1.3043,-0.0865});
LineSet625->setCoord(*Coordinate627);

Shape624->setGeometry(LineSet625);

HAnimSegment596->addChildren(*Shape624);

CHAnimSite* HAnimSite628 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite628->setDEF("hanim_l_gonion_pt");
HAnimSite628->setName("l_gonion_pt");
HAnimSite628->setTranslation(new float[3]{0.0631,1.553,0.033});
CTouchSensor* TouchSensor629 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor629->setDescription("HAnimSite l_gonion_pt");
HAnimSite628->addChildren(*TouchSensor629);

CShape* Shape630 = (CShape *)(m_pScene.createNode("Shape"));
Shape630->setUSE("HAnimSiteShape");
HAnimSite628->addChildren(*Shape630);

HAnimSegment596->addChildren(*HAnimSite628);

CHAnimSite* HAnimSite631 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite631->setDEF("hanim_menton_pt");
HAnimSite631->setName("menton_pt");
CTouchSensor* TouchSensor632 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor632->setDescription("HAnimSite menton_pt");
HAnimSite631->addChildren(*TouchSensor632);

CShape* Shape633 = (CShape *)(m_pScene.createNode("Shape"));
Shape633->setUSE("HAnimSiteShape");
HAnimSite631->addChildren(*Shape633);

HAnimSegment596->addChildren(*HAnimSite631);

CHAnimSite* HAnimSite634 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite634->setDEF("hanim_r_gonion_pt");
HAnimSite634->setName("r_gonion_pt");
HAnimSite634->setTranslation(new float[3]{-0.052,1.5529,0.0347});
CTouchSensor* TouchSensor635 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor635->setDescription("HAnimSite r_gonion_pt");
HAnimSite634->addChildren(*TouchSensor635);

CShape* Shape636 = (CShape *)(m_pScene.createNode("Shape"));
Shape636->setUSE("HAnimSiteShape");
HAnimSite634->addChildren(*Shape636);

HAnimSegment596->addChildren(*HAnimSite634);

CHAnimSite* HAnimSite637 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite637->setDEF("hanim_supramenton_pt");
HAnimSite637->setName("supramenton_pt");
HAnimSite637->setTranslation(new float[3]{0.0061,1.541,0.0805});
CTouchSensor* TouchSensor638 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor638->setDescription("HAnimSite supramenton_pt");
HAnimSite637->addChildren(*TouchSensor638);

CShape* Shape639 = (CShape *)(m_pScene.createNode("Shape"));
Shape639->setUSE("HAnimSiteShape");
HAnimSite637->addChildren(*Shape639);

HAnimSegment596->addChildren(*HAnimSite637);

HAnimJoint595->addChildren(*HAnimSegment596);

CHAnimJoint* HAnimJoint640 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint640->setDEF("hanim_l_eyelid_joint");
HAnimJoint640->setName("l_eyelid_joint");
HAnimJoint640->setCenter(new float[3]{0.0503,1.4157,-0.0689});
HAnimJoint595->addChildren(*HAnimJoint640);

CHAnimJoint* HAnimJoint641 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint641->setDEF("hanim_r_eyelid_joint");
HAnimJoint641->setName("r_eyelid_joint");
HAnimJoint641->setCenter(new float[3]{-0.0507,1.4157,-0.0689});
HAnimJoint595->addChildren(*HAnimJoint641);

CHAnimJoint* HAnimJoint642 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint642->setDEF("hanim_l_eyeball_joint");
HAnimJoint642->setName("l_eyeball_joint");
HAnimJoint642->setCenter(new float[3]{0.0479,1.3963,-0.0188});
HAnimJoint595->addChildren(*HAnimJoint642);

CHAnimJoint* HAnimJoint643 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint643->setDEF("hanim_r_eyeball_joint");
HAnimJoint643->setName("r_eyeball_joint");
HAnimJoint643->setCenter(new float[3]{-0.0483,1.3963,-0.0188});
HAnimJoint595->addChildren(*HAnimJoint643);

CHAnimJoint* HAnimJoint644 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint644->setDEF("hanim_l_eyebrow_joint");
HAnimJoint644->setName("l_eyebrow_joint");
HAnimJoint644->setCenter(new float[3]{0.0216,1.4053,0.0051});
HAnimJoint595->addChildren(*HAnimJoint644);

CHAnimJoint* HAnimJoint645 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint645->setDEF("hanim_r_eyebrow_joint");
HAnimJoint645->setName("r_eyebrow_joint");
HAnimJoint645->setCenter(new float[3]{-0.0219,1.4053,0.0051});
HAnimJoint595->addChildren(*HAnimJoint645);

CHAnimJoint* HAnimJoint646 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint646->setDEF("hanim_temporomandibular");
HAnimJoint646->setName("temporomandibular");
HAnimJoint646->setCenter(new float[3]{-0.0002,1.3043,-0.0865});
HAnimJoint595->addChildren(*HAnimJoint646);

HAnimJoint553->addChildren(*HAnimJoint595);

HAnimJoint544->addChildren(*HAnimJoint553);

HAnimJoint532->addChildren(*HAnimJoint544);

HAnimJoint523->addChildren(*HAnimJoint532);

HAnimJoint514->addChildren(*HAnimJoint523);

HAnimJoint505->addChildren(*HAnimJoint514);

HAnimJoint496->addChildren(*HAnimJoint505);

HAnimJoint443->addChildren(*HAnimJoint496);

CHAnimJoint* HAnimJoint647 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint647->setDEF("hanim_l_sternoclavicular");
HAnimJoint647->setName("l_sternoclavicular");
HAnimJoint647->setCenter(new float[3]{0.082,1.4488,-0.0353});
CHAnimSegment* HAnimSegment648 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment648->setDEF("hanim_l_clavicle");
HAnimSegment648->setName("l_clavicle");
CTransform* Transform649 = (CTransform *)(m_pScene.createNode("Transform"));
Transform649->setTranslation(new float[3]{0.082,1.4488,-0.0353});
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
Coordinate655->setPoint(new float[6]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424});
LineSet653->setCoord(*Coordinate655);

Shape652->setGeometry(LineSet653);

HAnimSegment648->addChildren(*Shape652);

HAnimJoint647->addChildren(*HAnimSegment648);

CHAnimJoint* HAnimJoint656 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint656->setDEF("hanim_l_acromioclavicular");
HAnimJoint656->setName("l_acromioclavicular");
HAnimJoint656->setCenter(new float[3]{0.0962,1.4269,-0.0424});
CHAnimSegment* HAnimSegment657 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment657->setDEF("hanim_l_scapula");
HAnimSegment657->setName("l_scapula");
CTransform* Transform658 = (CTransform *)(m_pScene.createNode("Transform"));
Transform658->setTranslation(new float[3]{0.0962,1.4269,-0.0424});
CTransform* Transform659 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape660 = (CShape *)(m_pScene.createNode("Shape"));
Shape660->setUSE("HAnimJointShape");
Transform659->addChild(*Shape660);

Transform658->addChildren(*Transform659);

HAnimSegment657->addChildren(*Transform658);

CShape* Shape661 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet662 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet662->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA663 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA663->setUSE("HAnimSegmentLineColorRGBA");
LineSet662->setColor(*ColorRGBA663);

CCoordinate* Coordinate664 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate664->setPoint(new float[6]{0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387});
LineSet662->setCoord(*Coordinate664);

Shape661->setGeometry(LineSet662);

HAnimSegment657->addChildren(*Shape661);

CHAnimSite* HAnimSite665 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite665->setDEF("hanim_l_bideltoid_pt");
HAnimSite665->setName("l_bideltoid_pt");
CTouchSensor* TouchSensor666 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor666->setDescription("HAnimSite l_bideltoid_pt");
HAnimSite665->addChildren(*TouchSensor666);

CShape* Shape667 = (CShape *)(m_pScene.createNode("Shape"));
Shape667->setUSE("HAnimSiteShape");
HAnimSite665->addChildren(*Shape667);

HAnimSegment657->addChildren(*HAnimSite665);

CHAnimSite* HAnimSite668 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite668->setDEF("hanim_l_humeral_lateral_epicondyles_pt");
HAnimSite668->setName("l_humeral_lateral_epicondyles_pt");
HAnimSite668->setTranslation(new float[3]{0.228,1.1482,-0.11});
CTouchSensor* TouchSensor669 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor669->setDescription("HAnimSite l_humeral_lateral_epicondyles_pt");
HAnimSite668->addChildren(*TouchSensor669);

CShape* Shape670 = (CShape *)(m_pScene.createNode("Shape"));
Shape670->setUSE("HAnimSiteShape");
HAnimSite668->addChildren(*Shape670);

HAnimSegment657->addChildren(*HAnimSite668);

HAnimJoint656->addChildren(*HAnimSegment657);

CHAnimJoint* HAnimJoint671 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint671->setDEF("hanim_l_shoulder");
HAnimJoint671->setName("l_shoulder");
HAnimJoint671->setCenter(new float[3]{0.2029,1.4376,-0.0387});
CHAnimSegment* HAnimSegment672 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment672->setDEF("hanim_l_upperarm");
HAnimSegment672->setName("l_upperarm");
CTransform* Transform673 = (CTransform *)(m_pScene.createNode("Transform"));
Transform673->setTranslation(new float[3]{0.2029,1.4376,-0.0387});
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
Coordinate679->setPoint(new float[6]{0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682});
LineSet677->setCoord(*Coordinate679);

Shape676->setGeometry(LineSet677);

HAnimSegment672->addChildren(*Shape676);

CHAnimSite* HAnimSite680 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite680->setDEF("hanim_l_humeral_medial_epicondyles_pt");
HAnimSite680->setName("l_humeral_medial_epicondyles_pt");
HAnimSite680->setTranslation(new float[3]{0.1735,1.1272,-0.1113});
CTouchSensor* TouchSensor681 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor681->setDescription("HAnimSite l_humeral_medial_epicondyles_pt");
HAnimSite680->addChildren(*TouchSensor681);

CShape* Shape682 = (CShape *)(m_pScene.createNode("Shape"));
Shape682->setUSE("HAnimSiteShape");
HAnimSite680->addChildren(*Shape682);

HAnimSegment672->addChildren(*HAnimSite680);

CHAnimSite* HAnimSite683 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite683->setDEF("hanim_l_olecranon_pt");
HAnimSite683->setName("l_olecranon_pt");
HAnimSite683->setTranslation(new float[3]{-0.1962,1.1375,-0.1123});
CTouchSensor* TouchSensor684 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor684->setDescription("HAnimSite l_olecranon_pt");
HAnimSite683->addChildren(*TouchSensor684);

CShape* Shape685 = (CShape *)(m_pScene.createNode("Shape"));
Shape685->setUSE("HAnimSiteShape");
HAnimSite683->addChildren(*Shape685);

HAnimSegment672->addChildren(*HAnimSite683);

CHAnimSite* HAnimSite686 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite686->setDEF("hanim_l_radial_styloid_pt");
HAnimSite686->setName("l_radial_styloid_pt");
HAnimSite686->setTranslation(new float[3]{0.1901,0.8645,-0.0415});
CTouchSensor* TouchSensor687 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor687->setDescription("HAnimSite l_radial_styloid_pt");
HAnimSite686->addChildren(*TouchSensor687);

CShape* Shape688 = (CShape *)(m_pScene.createNode("Shape"));
Shape688->setUSE("HAnimSiteShape");
HAnimSite686->addChildren(*Shape688);

HAnimSegment672->addChildren(*HAnimSite686);

CHAnimSite* HAnimSite689 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite689->setDEF("hanim_l_radiale_pt");
HAnimSite689->setName("l_radiale_pt");
HAnimSite689->setTranslation(new float[3]{0.2182,1.1212,-0.1167});
CTouchSensor* TouchSensor690 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor690->setDescription("HAnimSite l_radiale_pt");
HAnimSite689->addChildren(*TouchSensor690);

CShape* Shape691 = (CShape *)(m_pScene.createNode("Shape"));
Shape691->setUSE("HAnimSiteShape");
HAnimSite689->addChildren(*Shape691);

HAnimSegment672->addChildren(*HAnimSite689);

HAnimJoint671->addChildren(*HAnimSegment672);

CHAnimJoint* HAnimJoint692 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint692->setDEF("hanim_l_elbow");
HAnimJoint692->setName("l_elbow");
HAnimJoint692->setCenter(new float[3]{0.2014,1.1357,-0.0682});
CHAnimSegment* HAnimSegment693 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment693->setDEF("hanim_l_forearm");
HAnimSegment693->setName("l_forearm");
CTransform* Transform694 = (CTransform *)(m_pScene.createNode("Transform"));
Transform694->setTranslation(new float[3]{0.2014,1.1357,-0.0682});
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
Coordinate700->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583});
LineSet698->setCoord(*Coordinate700);

Shape697->setGeometry(LineSet698);

HAnimSegment693->addChildren(*Shape697);

CHAnimSite* HAnimSite701 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite701->setDEF("hanim_l_ulnar_styloid_pt");
HAnimSite701->setName("l_ulnar_styloid_pt");
HAnimSite701->setTranslation(new float[3]{-0.2142,0.8529,-0.0648});
CTouchSensor* TouchSensor702 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor702->setDescription("HAnimSite l_ulnar_styloid_pt");
HAnimSite701->addChildren(*TouchSensor702);

CShape* Shape703 = (CShape *)(m_pScene.createNode("Shape"));
Shape703->setUSE("HAnimSiteShape");
HAnimSite701->addChildren(*Shape703);

HAnimSegment693->addChildren(*HAnimSite701);

HAnimJoint692->addChildren(*HAnimSegment693);

CHAnimJoint* HAnimJoint704 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint704->setDEF("hanim_l_radiocarpal");
HAnimJoint704->setName("l_radiocarpal");
HAnimJoint704->setCenter(new float[3]{0.1984,0.8663,-0.0583});
CHAnimSegment* HAnimSegment705 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment705->setDEF("hanim_l_carpal");
HAnimSegment705->setName("l_carpal");
CTransform* Transform706 = (CTransform *)(m_pScene.createNode("Transform"));
Transform706->setTranslation(new float[3]{0.2,0.85,-0.05});
Transform706->setRotation(new float[4]{0,0,1,-3.14});
Transform706->setScale(new float[3]{0.2,0.2,0.2});
CTransform* Transform707 = (CTransform *)(m_pScene.createNode("Transform"));
Transform707->setRotation(new float[4]{0,1,0,-1.57});
CShape* Shape708 = (CShape *)(m_pScene.createNode("Shape"));
Shape708->setUSE("HAnimJointShape");
Transform707->addChild(*Shape708);

Transform706->addChildren(*Transform707);

HAnimSegment705->addChildren(*Transform706);

CShape* Shape709 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet710 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet710->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA711 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA711->setUSE("HAnimSegmentLineColorRGBA");
LineSet710->setColor(*ColorRGBA711);

CCoordinate* Coordinate712 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate712->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534});
LineSet710->setCoord(*Coordinate712);

Shape709->setGeometry(LineSet710);

HAnimSegment705->addChildren(*Shape709);

CShape* Shape713 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet714 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet714->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA715 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA715->setUSE("HAnimSegmentLineColorRGBA");
LineSet714->setColor(*ColorRGBA715);

CCoordinate* Coordinate716 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate716->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028});
LineSet714->setCoord(*Coordinate716);

Shape713->setGeometry(LineSet714);

HAnimSegment705->addChildren(*Shape713);

CHAnimSite* HAnimSite717 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite717->setDEF("hanim_l_metacarpal_phalanx_2_pt");
HAnimSite717->setName("l_metacarpal_phalanx_2_pt");
HAnimSite717->setTranslation(new float[3]{0.2009,0.8139,-0.0237});
CTouchSensor* TouchSensor718 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor718->setDescription("HAnimSite l_metacarpal_phalanx_2_pt");
HAnimSite717->addChildren(*TouchSensor718);

CShape* Shape719 = (CShape *)(m_pScene.createNode("Shape"));
Shape719->setUSE("HAnimSiteShape");
HAnimSite717->addChildren(*Shape719);

HAnimSegment705->addChildren(*HAnimSite717);

CShape* Shape720 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet721 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet721->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA722 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA722->setUSE("HAnimSegmentLineColorRGBA");
LineSet721->setColor(*ColorRGBA722);

CCoordinate* Coordinate723 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate723->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053});
LineSet721->setCoord(*Coordinate723);

Shape720->setGeometry(LineSet721);

HAnimSegment705->addChildren(*Shape720);

CHAnimSite* HAnimSite724 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite724->setDEF("hanim_l_metacarpal_phalanx_3_pt");
HAnimSite724->setName("l_metacarpal_phalanx_3_pt");
CTouchSensor* TouchSensor725 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor725->setDescription("HAnimSite l_metacarpal_phalanx_3_pt");
HAnimSite724->addChildren(*TouchSensor725);

CShape* Shape726 = (CShape *)(m_pScene.createNode("Shape"));
Shape726->setUSE("HAnimSiteShape");
HAnimSite724->addChildren(*Shape726);

HAnimSegment705->addChildren(*HAnimSite724);

CShape* Shape727 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet728 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet728->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA729 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA729->setUSE("HAnimSegmentLineColorRGBA");
LineSet728->setColor(*ColorRGBA729);

CCoordinate* Coordinate730 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate730->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794});
LineSet728->setCoord(*Coordinate730);

Shape727->setGeometry(LineSet728);

HAnimSegment705->addChildren(*Shape727);

CShape* Shape731 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet732 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet732->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA733 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA733->setUSE("HAnimSegmentLineColorRGBA");
LineSet732->setColor(*ColorRGBA733);

CCoordinate* Coordinate734 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate734->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036});
LineSet732->setCoord(*Coordinate734);

Shape731->setGeometry(LineSet732);

HAnimSegment705->addChildren(*Shape731);

CHAnimSite* HAnimSite735 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite735->setDEF("hanim_l_metacarpal_phalanx_5_pt");
HAnimSite735->setName("l_metacarpal_phalanx_5_pt");
HAnimSite735->setTranslation(new float[3]{0.1929,0.786,-0.1122});
CTouchSensor* TouchSensor736 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor736->setDescription("HAnimSite l_metacarpal_phalanx_5_pt");
HAnimSite735->addChildren(*TouchSensor736);

CShape* Shape737 = (CShape *)(m_pScene.createNode("Shape"));
Shape737->setUSE("HAnimSiteShape");
HAnimSite735->addChildren(*Shape737);

HAnimSegment705->addChildren(*HAnimSite735);

HAnimJoint704->addChildren(*HAnimSegment705);

CHAnimJoint* HAnimJoint738 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint738->setDEF("hanim_l_carpometacarpal_1");
HAnimJoint738->setName("l_carpometacarpal_1");
HAnimJoint738->setCenter(new float[3]{0.1924,0.8472,-0.0534});
CHAnimSegment* HAnimSegment739 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment739->setDEF("hanim_l_metacarpal_1");
HAnimSegment739->setName("l_metacarpal_1");
CTransform* Transform740 = (CTransform *)(m_pScene.createNode("Transform"));
Transform740->setTranslation(new float[3]{0.1924,0.8472,-0.0534});
CTransform* Transform741 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape742 = (CShape *)(m_pScene.createNode("Shape"));
Shape742->setUSE("HAnimJointShape");
Transform741->addChild(*Shape742);

Transform740->addChildren(*Transform741);

HAnimSegment739->addChildren(*Transform740);

CShape* Shape743 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet744 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet744->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA745 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA745->setUSE("HAnimSegmentLineColorRGBA");
LineSet744->setColor(*ColorRGBA745);

CCoordinate* Coordinate746 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate746->setPoint(new float[6]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246});
LineSet744->setCoord(*Coordinate746);

Shape743->setGeometry(LineSet744);

HAnimSegment739->addChildren(*Shape743);

HAnimJoint738->addChildren(*HAnimSegment739);

CHAnimJoint* HAnimJoint747 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint747->setDEF("hanim_l_metacarpophalangeal_1");
HAnimJoint747->setName("l_metacarpophalangeal_1");
HAnimJoint747->setCenter(new float[3]{0.1951,0.8226,0.0246});
CHAnimSegment* HAnimSegment748 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment748->setDEF("hanim_l_carpal_proximal_phalanx_1");
HAnimSegment748->setName("l_carpal_proximal_phalanx_1");
CTransform* Transform749 = (CTransform *)(m_pScene.createNode("Transform"));
Transform749->setTranslation(new float[3]{0.1951,0.8226,0.0246});
CTransform* Transform750 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape751 = (CShape *)(m_pScene.createNode("Shape"));
Shape751->setUSE("HAnimJointShape");
Transform750->addChild(*Shape751);

Transform749->addChildren(*Transform750);

HAnimSegment748->addChildren(*Transform749);

CShape* Shape752 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet753 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet753->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA754 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA754->setUSE("HAnimSegmentLineColorRGBA");
LineSet753->setColor(*ColorRGBA754);

CCoordinate* Coordinate755 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate755->setPoint(new float[6]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464});
LineSet753->setCoord(*Coordinate755);

Shape752->setGeometry(LineSet753);

HAnimSegment748->addChildren(*Shape752);

CHAnimSite* HAnimSite756 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite756->setDEF("hanim_l_carpal_distal_phalanx_1_tip");
HAnimSite756->setName("l_carpal_distal_phalanx_1_tip");
CTouchSensor* TouchSensor757 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor757->setDescription("HAnimSite l_carpal_distal_phalanx_1_tip");
HAnimSite756->addChildren(*TouchSensor757);

CShape* Shape758 = (CShape *)(m_pScene.createNode("Shape"));
Shape758->setUSE("HAnimSiteShape");
HAnimSite756->addChildren(*Shape758);

HAnimSegment748->addChildren(*HAnimSite756);

HAnimJoint747->addChildren(*HAnimSegment748);

CHAnimJoint* HAnimJoint759 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint759->setDEF("hanim_l_carpal_interphalangeal_1");
HAnimJoint759->setName("l_carpal_interphalangeal_1");
HAnimJoint759->setCenter(new float[3]{0.1955,0.8159,0.0464});
HAnimJoint747->addChildren(*HAnimJoint759);

HAnimJoint738->addChildren(*HAnimJoint747);

HAnimJoint704->addChildren(*HAnimJoint738);

CHAnimJoint* HAnimJoint760 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint760->setDEF("hanim_l_carpometacarpal_2");
HAnimJoint760->setName("l_carpometacarpal_2");
HAnimJoint760->setCenter(new float[3]{0.1983,0.8024,-0.028});
CHAnimSegment* HAnimSegment761 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment761->setDEF("hanim_l_metacarpal_2");
HAnimSegment761->setName("l_metacarpal_2");
CTransform* Transform762 = (CTransform *)(m_pScene.createNode("Transform"));
Transform762->setTranslation(new float[3]{0.1983,0.8024,-0.028});
CTransform* Transform763 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape764 = (CShape *)(m_pScene.createNode("Shape"));
Shape764->setUSE("HAnimJointShape");
Transform763->addChild(*Shape764);

Transform762->addChildren(*Transform763);

HAnimSegment761->addChildren(*Transform762);

CShape* Shape765 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet766 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet766->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA767 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA767->setUSE("HAnimSegmentLineColorRGBA");
LineSet766->setColor(*ColorRGBA767);

CCoordinate* Coordinate768 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate768->setPoint(new float[6]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028});
LineSet766->setCoord(*Coordinate768);

Shape765->setGeometry(LineSet766);

HAnimSegment761->addChildren(*Shape765);

HAnimJoint760->addChildren(*HAnimSegment761);

CHAnimJoint* HAnimJoint769 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint769->setDEF("hanim_l_metacarpophalangeal_2");
HAnimJoint769->setName("l_metacarpophalangeal_2");
HAnimJoint769->setCenter(new float[3]{0.1983,0.7815,-0.028});
CHAnimSegment* HAnimSegment770 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment770->setDEF("hanim_l_carpal_proximal_phalanx_2");
HAnimSegment770->setName("l_carpal_proximal_phalanx_2");
CTransform* Transform771 = (CTransform *)(m_pScene.createNode("Transform"));
Transform771->setTranslation(new float[3]{0.1983,0.7815,-0.028});
CTransform* Transform772 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape773 = (CShape *)(m_pScene.createNode("Shape"));
Shape773->setUSE("HAnimJointShape");
Transform772->addChild(*Shape773);

Transform771->addChildren(*Transform772);

HAnimSegment770->addChildren(*Transform771);

CShape* Shape774 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet775 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet775->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA776 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA776->setUSE("HAnimSegmentLineColorRGBA");
LineSet775->setColor(*ColorRGBA776);

CCoordinate* Coordinate777 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate777->setPoint(new float[6]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248});
LineSet775->setCoord(*Coordinate777);

Shape774->setGeometry(LineSet775);

HAnimSegment770->addChildren(*Shape774);

HAnimJoint769->addChildren(*HAnimSegment770);

CHAnimJoint* HAnimJoint778 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint778->setDEF("hanim_l_carpal_proximal_interphalangeal_1");
HAnimJoint778->setName("l_carpal_proximal_interphalangeal_2");
HAnimJoint778->setCenter(new float[3]{0.2017,0.7363,-0.0248});
CHAnimSegment* HAnimSegment779 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment779->setDEF("hanim_l_carpal_middle_phalanx_1");
HAnimSegment779->setName("l_carpal_middle_phalanx_2");
CTransform* Transform780 = (CTransform *)(m_pScene.createNode("Transform"));
Transform780->setTranslation(new float[3]{0.2017,0.7363,-0.0248});
CTransform* Transform781 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape782 = (CShape *)(m_pScene.createNode("Shape"));
Shape782->setUSE("HAnimJointShape");
Transform781->addChild(*Shape782);

Transform780->addChildren(*Transform781);

HAnimSegment779->addChildren(*Transform780);

CShape* Shape783 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet784 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet784->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA785 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA785->setUSE("HAnimSegmentLineColorRGBA");
LineSet784->setColor(*ColorRGBA785);

CCoordinate* Coordinate786 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate786->setPoint(new float[6]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236});
LineSet784->setCoord(*Coordinate786);

Shape783->setGeometry(LineSet784);

HAnimSegment779->addChildren(*Shape783);

CHAnimSite* HAnimSite787 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite787->setDEF("hanim_l_carpal_distal_phalanx_2_tip");
HAnimSite787->setName("l_carpal_distal_phalanx_2_tip");
CTouchSensor* TouchSensor788 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor788->setDescription("HAnimSite l_carpal_distal_phalanx_2_tip");
HAnimSite787->addChildren(*TouchSensor788);

CShape* Shape789 = (CShape *)(m_pScene.createNode("Shape"));
Shape789->setUSE("HAnimSiteShape");
HAnimSite787->addChildren(*Shape789);

HAnimSegment779->addChildren(*HAnimSite787);

CHAnimSite* HAnimSite790 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite790->setDEF("hanim_l_dactylion_pt");
HAnimSite790->setName("l_dactylion_pt");
HAnimSite790->setTranslation(new float[3]{0.2056,0.6743,-0.0482});
CTouchSensor* TouchSensor791 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor791->setDescription("HAnimSite l_dactylion_pt");
HAnimSite790->addChildren(*TouchSensor791);

CShape* Shape792 = (CShape *)(m_pScene.createNode("Shape"));
Shape792->setUSE("HAnimSiteShape");
HAnimSite790->addChildren(*Shape792);

HAnimSegment779->addChildren(*HAnimSite790);

HAnimJoint778->addChildren(*HAnimSegment779);

CHAnimJoint* HAnimJoint793 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint793->setDEF("hanim_l_carpal_distal_interphalangeal_1");
HAnimJoint793->setName("l_carpal_distal_interphalangeal_2");
HAnimJoint793->setCenter(new float[3]{0.2028,0.7139,-0.0236});
HAnimJoint778->addChildren(*HAnimJoint793);

HAnimJoint769->addChildren(*HAnimJoint778);

HAnimJoint760->addChildren(*HAnimJoint769);

HAnimJoint704->addChildren(*HAnimJoint760);

CHAnimJoint* HAnimJoint794 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint794->setDEF("hanim_l_carpometacarpal_3");
HAnimJoint794->setName("l_carpometacarpal_3");
HAnimJoint794->setCenter(new float[3]{0.1987,0.8029,-0.053});
CHAnimSegment* HAnimSegment795 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment795->setDEF("hanim_l_metacarpal_3");
HAnimSegment795->setName("l_metacarpal_3");
CTransform* Transform796 = (CTransform *)(m_pScene.createNode("Transform"));
Transform796->setTranslation(new float[3]{0.1987,0.8029,-0.053});
CTransform* Transform797 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape798 = (CShape *)(m_pScene.createNode("Shape"));
Shape798->setUSE("HAnimJointShape");
Transform797->addChild(*Shape798);

Transform796->addChildren(*Transform797);

HAnimSegment795->addChildren(*Transform796);

CShape* Shape799 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet800 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet800->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA801 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA801->setUSE("HAnimSegmentLineColorRGBA");
LineSet800->setColor(*ColorRGBA801);

CCoordinate* Coordinate802 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate802->setPoint(new float[6]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053});
LineSet800->setCoord(*Coordinate802);

Shape799->setGeometry(LineSet800);

HAnimSegment795->addChildren(*Shape799);

HAnimJoint794->addChildren(*HAnimSegment795);

CHAnimJoint* HAnimJoint803 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint803->setDEF("hanim_l_metacarpophalangeal_3");
HAnimJoint803->setName("l_metacarpophalangeal_3");
HAnimJoint803->setCenter(new float[3]{0.1987,0.7818,-0.053});
CHAnimSegment* HAnimSegment804 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment804->setDEF("hanim_l_carpal_proximal_phalanx_3");
HAnimSegment804->setName("l_carpal_proximal_phalanx_3");
CTransform* Transform805 = (CTransform *)(m_pScene.createNode("Transform"));
Transform805->setTranslation(new float[3]{0.1987,0.7818,-0.053});
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
Coordinate811->setPoint(new float[6]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503});
LineSet809->setCoord(*Coordinate811);

Shape808->setGeometry(LineSet809);

HAnimSegment804->addChildren(*Shape808);

HAnimJoint803->addChildren(*HAnimSegment804);

CHAnimJoint* HAnimJoint812 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint812->setDEF("hanim_l_carpal_proximal_interphalangeal_2");
HAnimJoint812->setName("l_carpal_proximal_interphalangeal_3");
HAnimJoint812->setCenter(new float[3]{0.2013,0.7273,-0.0503});
CHAnimSegment* HAnimSegment813 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment813->setDEF("hanim_l_carpal_middle_phalanx_2");
HAnimSegment813->setName("l_carpal_middle_phalanx_3");
CTransform* Transform814 = (CTransform *)(m_pScene.createNode("Transform"));
Transform814->setTranslation(new float[3]{0.2013,0.7273,-0.0503});
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
Coordinate820->setPoint(new float[6]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494});
LineSet818->setCoord(*Coordinate820);

Shape817->setGeometry(LineSet818);

HAnimSegment813->addChildren(*Shape817);

CHAnimSite* HAnimSite821 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite821->setDEF("hanim_l_carpal_distal_phalanx_3_tip");
HAnimSite821->setName("l_carpal_distal_phalanx_3_tip");
CTouchSensor* TouchSensor822 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor822->setDescription("HAnimSite l_carpal_distal_phalanx_3_tip");
HAnimSite821->addChildren(*TouchSensor822);

CShape* Shape823 = (CShape *)(m_pScene.createNode("Shape"));
Shape823->setUSE("HAnimSiteShape");
HAnimSite821->addChildren(*Shape823);

HAnimSegment813->addChildren(*HAnimSite821);

HAnimJoint812->addChildren(*HAnimSegment813);

CHAnimJoint* HAnimJoint824 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint824->setDEF("hanim_l_carpal_distal_interphalangeal_2");
HAnimJoint824->setName("l_carpal_distal_interphalangeal_3");
HAnimJoint824->setCenter(new float[3]{0.2026,0.7011,-0.0494});
HAnimJoint812->addChildren(*HAnimJoint824);

HAnimJoint803->addChildren(*HAnimJoint812);

HAnimJoint794->addChildren(*HAnimJoint803);

HAnimJoint704->addChildren(*HAnimJoint794);

CHAnimJoint* HAnimJoint825 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint825->setDEF("hanim_l_carpometacarpal_4");
HAnimJoint825->setName("l_carpometacarpal_4");
HAnimJoint825->setCenter(new float[3]{0.1956,0.8019,-0.0794});
CHAnimSegment* HAnimSegment826 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment826->setDEF("hanim_l_metacarpal_4");
HAnimSegment826->setName("l_metacarpal_4");
CTransform* Transform827 = (CTransform *)(m_pScene.createNode("Transform"));
Transform827->setTranslation(new float[3]{0.1956,0.8019,-0.0794});
CTransform* Transform828 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape829 = (CShape *)(m_pScene.createNode("Shape"));
Shape829->setUSE("HAnimJointShape");
Transform828->addChild(*Shape829);

Transform827->addChildren(*Transform828);

HAnimSegment826->addChildren(*Transform827);

CShape* Shape830 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet831 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet831->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA832 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA832->setUSE("HAnimSegmentLineColorRGBA");
LineSet831->setColor(*ColorRGBA832);

CCoordinate* Coordinate833 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate833->setPoint(new float[6]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794});
LineSet831->setCoord(*Coordinate833);

Shape830->setGeometry(LineSet831);

HAnimSegment826->addChildren(*Shape830);

HAnimJoint825->addChildren(*HAnimSegment826);

CHAnimJoint* HAnimJoint834 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint834->setDEF("hanim_l_metacarpophalangeal_4");
HAnimJoint834->setName("l_metacarpophalangeal_4");
HAnimJoint834->setCenter(new float[3]{0.1956,0.7815,-0.0794});
CHAnimSegment* HAnimSegment835 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment835->setDEF("hanim_l_carpal_proximal_phalanx_4");
HAnimSegment835->setName("l_carpal_proximal_phalanx_4");
CTransform* Transform836 = (CTransform *)(m_pScene.createNode("Transform"));
Transform836->setTranslation(new float[3]{0.1956,0.7815,-0.0794});
CTransform* Transform837 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape838 = (CShape *)(m_pScene.createNode("Shape"));
Shape838->setUSE("HAnimJointShape");
Transform837->addChild(*Shape838);

Transform836->addChildren(*Transform837);

HAnimSegment835->addChildren(*Transform836);

CShape* Shape839 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet840 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet840->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA841 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA841->setUSE("HAnimSegmentLineColorRGBA");
LineSet840->setColor(*ColorRGBA841);

CCoordinate* Coordinate842 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate842->setPoint(new float[6]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777});
LineSet840->setCoord(*Coordinate842);

Shape839->setGeometry(LineSet840);

HAnimSegment835->addChildren(*Shape839);

HAnimJoint834->addChildren(*HAnimSegment835);

CHAnimJoint* HAnimJoint843 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint843->setDEF("hanim_l_carpal_proximal_interphalangeal_3");
HAnimJoint843->setName("l_carpal_proximal_interphalangeal_4");
HAnimJoint843->setCenter(new float[3]{0.1973,0.7287,-0.0777});
CHAnimSegment* HAnimSegment844 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment844->setDEF("hanim_l_carpal_middle_phalanx_3");
HAnimSegment844->setName("l_carpal_middle_phalanx_4");
CTransform* Transform845 = (CTransform *)(m_pScene.createNode("Transform"));
Transform845->setTranslation(new float[3]{0.1973,0.7287,-0.0777});
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
Coordinate851->setPoint(new float[6]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767});
LineSet849->setCoord(*Coordinate851);

Shape848->setGeometry(LineSet849);

HAnimSegment844->addChildren(*Shape848);

CHAnimSite* HAnimSite852 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite852->setDEF("hanim_l_carpal_distal_phalanx_4_tip");
HAnimSite852->setName("l_carpal_distal_phalanx_4_tip");
CTouchSensor* TouchSensor853 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor853->setDescription("HAnimSite l_carpal_distal_phalanx_4_tip");
HAnimSite852->addChildren(*TouchSensor853);

CShape* Shape854 = (CShape *)(m_pScene.createNode("Shape"));
Shape854->setUSE("HAnimSiteShape");
HAnimSite852->addChildren(*Shape854);

HAnimSegment844->addChildren(*HAnimSite852);

HAnimJoint843->addChildren(*HAnimSegment844);

CHAnimJoint* HAnimJoint855 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint855->setDEF("hanim_l_carpal_distal_interphalangeal_3");
HAnimJoint855->setName("l_carpal_distal_interphalangeal_4");
HAnimJoint855->setCenter(new float[3]{0.1983,0.7045,-0.0767});
HAnimJoint843->addChildren(*HAnimJoint855);

HAnimJoint834->addChildren(*HAnimJoint843);

HAnimJoint825->addChildren(*HAnimJoint834);

HAnimJoint704->addChildren(*HAnimJoint825);

CHAnimJoint* HAnimJoint856 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint856->setDEF("hanim_l_carpometacarpal_5");
HAnimJoint856->setName("l_carpometacarpal_5");
HAnimJoint856->setCenter(new float[3]{0.1925,0.8066,-0.1036});
CHAnimSegment* HAnimSegment857 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment857->setDEF("hanim_l_metacarpal_5");
HAnimSegment857->setName("l_metacarpal_5");
CTransform* Transform858 = (CTransform *)(m_pScene.createNode("Transform"));
Transform858->setTranslation(new float[3]{0.1925,0.8066,-0.1036});
CTransform* Transform859 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape860 = (CShape *)(m_pScene.createNode("Shape"));
Shape860->setUSE("HAnimJointShape");
Transform859->addChild(*Shape860);

Transform858->addChildren(*Transform859);

HAnimSegment857->addChildren(*Transform858);

CShape* Shape861 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet862 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet862->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA863 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA863->setUSE("HAnimSegmentLineColorRGBA");
LineSet862->setColor(*ColorRGBA863);

CCoordinate* Coordinate864 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate864->setPoint(new float[6]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036});
LineSet862->setCoord(*Coordinate864);

Shape861->setGeometry(LineSet862);

HAnimSegment857->addChildren(*Shape861);

HAnimJoint856->addChildren(*HAnimSegment857);

CHAnimJoint* HAnimJoint865 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint865->setDEF("hanim_l_metacarpophalangeal_5");
HAnimJoint865->setName("l_metacarpophalangeal_5");
HAnimJoint865->setCenter(new float[3]{0.1925,0.7866,-0.1036});
CHAnimSegment* HAnimSegment866 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment866->setDEF("hanim_l_carpal_proximal_phalanx_5");
HAnimSegment866->setName("l_carpal_proximal_phalanx_5");
CTransform* Transform867 = (CTransform *)(m_pScene.createNode("Transform"));
Transform867->setTranslation(new float[3]{0.1925,0.7866,-0.1036});
CTransform* Transform868 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape869 = (CShape *)(m_pScene.createNode("Shape"));
Shape869->setUSE("HAnimJointShape");
Transform868->addChild(*Shape869);

Transform867->addChildren(*Transform868);

HAnimSegment866->addChildren(*Transform867);

CShape* Shape870 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet871 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet871->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA872 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA872->setUSE("HAnimSegmentLineColorRGBA");
LineSet871->setColor(*ColorRGBA872);

CCoordinate* Coordinate873 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate873->setPoint(new float[6]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024});
LineSet871->setCoord(*Coordinate873);

Shape870->setGeometry(LineSet871);

HAnimSegment866->addChildren(*Shape870);

HAnimJoint865->addChildren(*HAnimSegment866);

CHAnimJoint* HAnimJoint874 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint874->setDEF("hanim_l_carpal_proximal_interphalangeal_4");
HAnimJoint874->setName("l_carpal_proximal_interphalangeal_5");
HAnimJoint874->setCenter(new float[3]{0.1938,0.7452,-0.1024});
CHAnimSegment* HAnimSegment875 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment875->setDEF("hanim_l_carpal_middle_phalanx_4");
HAnimSegment875->setName("l_carpal_middle_phalanx_5");
CTransform* Transform876 = (CTransform *)(m_pScene.createNode("Transform"));
Transform876->setTranslation(new float[3]{0.1938,0.7452,-0.1024});
CTransform* Transform877 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape878 = (CShape *)(m_pScene.createNode("Shape"));
Shape878->setUSE("HAnimJointShape");
Transform877->addChild(*Shape878);

Transform876->addChildren(*Transform877);

HAnimSegment875->addChildren(*Transform876);

CShape* Shape879 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet880 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet880->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA881 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA881->setUSE("HAnimSegmentLineColorRGBA");
LineSet880->setColor(*ColorRGBA881);

CCoordinate* Coordinate882 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate882->setPoint(new float[6]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017});
LineSet880->setCoord(*Coordinate882);

Shape879->setGeometry(LineSet880);

HAnimSegment875->addChildren(*Shape879);

CHAnimSite* HAnimSite883 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite883->setDEF("hanim_l_carpal_distal_phalanx_5_tip");
HAnimSite883->setName("l_carpal_distal_phalanx_5_tip");
CTouchSensor* TouchSensor884 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor884->setDescription("HAnimSite l_carpal_distal_phalanx_5_tip");
HAnimSite883->addChildren(*TouchSensor884);

CShape* Shape885 = (CShape *)(m_pScene.createNode("Shape"));
Shape885->setUSE("HAnimSiteShape");
HAnimSite883->addChildren(*Shape885);

HAnimSegment875->addChildren(*HAnimSite883);

HAnimJoint874->addChildren(*HAnimSegment875);

CHAnimJoint* HAnimJoint886 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint886->setDEF("hanim_l_carpal_distal_interphalangeal_4");
HAnimJoint886->setName("l_carpal_distal_interphalangeal_5");
HAnimJoint886->setCenter(new float[3]{0.1948,0.7277,-0.1017});
HAnimJoint874->addChildren(*HAnimJoint886);

HAnimJoint865->addChildren(*HAnimJoint874);

HAnimJoint856->addChildren(*HAnimJoint865);

HAnimJoint704->addChildren(*HAnimJoint856);

HAnimJoint692->addChildren(*HAnimJoint704);

HAnimJoint671->addChildren(*HAnimJoint692);

HAnimJoint656->addChildren(*HAnimJoint671);

HAnimJoint647->addChildren(*HAnimJoint656);

HAnimJoint443->addChildren(*HAnimJoint647);

CHAnimJoint* HAnimJoint887 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint887->setDEF("hanim_r_sternoclavicular");
HAnimJoint887->setName("r_sternoclavicular");
HAnimJoint887->setCenter(new float[3]{-0.0694,1.46,-0.033});
CHAnimSegment* HAnimSegment888 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment888->setDEF("hanim_r_clavicle");
HAnimSegment888->setName("r_clavicle");
CTransform* Transform889 = (CTransform *)(m_pScene.createNode("Transform"));
Transform889->setTranslation(new float[3]{-0.0694,1.46,-0.033});
CTransform* Transform890 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape891 = (CShape *)(m_pScene.createNode("Shape"));
Shape891->setUSE("HAnimJointShape");
Transform890->addChild(*Shape891);

Transform889->addChildren(*Transform890);

HAnimSegment888->addChildren(*Transform889);

CShape* Shape892 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet893 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet893->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA894 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA894->setUSE("HAnimSegmentLineColorRGBA");
LineSet893->setColor(*ColorRGBA894);

CCoordinate* Coordinate895 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate895->setPoint(new float[6]{-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401});
LineSet893->setCoord(*Coordinate895);

Shape892->setGeometry(LineSet893);

HAnimSegment888->addChildren(*Shape892);

HAnimJoint887->addChildren(*HAnimSegment888);

CHAnimJoint* HAnimJoint896 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint896->setDEF("hanim_r_acromioclavicular");
HAnimJoint896->setName("r_acromioclavicular");
HAnimJoint896->setCenter(new float[3]{-0.0836,1.4281,-0.0401});
CHAnimSegment* HAnimSegment897 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment897->setDEF("hanim_r_scapula");
HAnimSegment897->setName("r_scapula");
CTransform* Transform898 = (CTransform *)(m_pScene.createNode("Transform"));
Transform898->setTranslation(new float[3]{-0.0836,1.4281,-0.0401});
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
Coordinate904->setPoint(new float[6]{-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325});
LineSet902->setCoord(*Coordinate904);

Shape901->setGeometry(LineSet902);

HAnimSegment897->addChildren(*Shape901);

CHAnimSite* HAnimSite905 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite905->setDEF("hanim_r_bideltoid_pt");
HAnimSite905->setName("r_bideltoid_pt");
CTouchSensor* TouchSensor906 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor906->setDescription("HAnimSite r_bideltoid_pt");
HAnimSite905->addChildren(*TouchSensor906);

CShape* Shape907 = (CShape *)(m_pScene.createNode("Shape"));
Shape907->setUSE("HAnimSiteShape");
HAnimSite905->addChildren(*Shape907);

HAnimSegment897->addChildren(*HAnimSite905);

CHAnimSite* HAnimSite908 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite908->setDEF("hanim_r_humeral_lateral_epicondyles_pt");
HAnimSite908->setName("r_humeral_lateral_epicondyles_pt");
HAnimSite908->setTranslation(new float[3]{-0.2224,1.1517,-0.1033});
CTouchSensor* TouchSensor909 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor909->setDescription("HAnimSite r_humeral_lateral_epicondyles_pt");
HAnimSite908->addChildren(*TouchSensor909);

CShape* Shape910 = (CShape *)(m_pScene.createNode("Shape"));
Shape910->setUSE("HAnimSiteShape");
HAnimSite908->addChildren(*Shape910);

HAnimSegment897->addChildren(*HAnimSite908);

HAnimJoint896->addChildren(*HAnimSegment897);

CHAnimJoint* HAnimJoint911 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint911->setDEF("hanim_r_shoulder");
HAnimJoint911->setName("r_shoulder");
HAnimJoint911->setCenter(new float[3]{-0.1907,1.4407,-0.0325});
CHAnimSegment* HAnimSegment912 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment912->setDEF("hanim_r_upperarm");
HAnimSegment912->setName("r_upperarm");
CTransform* Transform913 = (CTransform *)(m_pScene.createNode("Transform"));
Transform913->setTranslation(new float[3]{-0.1907,1.4407,-0.0325});
CTransform* Transform914 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape915 = (CShape *)(m_pScene.createNode("Shape"));
Shape915->setUSE("HAnimJointShape");
Transform914->addChild(*Shape915);

Transform913->addChildren(*Transform914);

HAnimSegment912->addChildren(*Transform913);

CShape* Shape916 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet917 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet917->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA918 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA918->setUSE("HAnimSegmentLineColorRGBA");
LineSet917->setColor(*ColorRGBA918);

CCoordinate* Coordinate919 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate919->setPoint(new float[6]{-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062});
LineSet917->setCoord(*Coordinate919);

Shape916->setGeometry(LineSet917);

HAnimSegment912->addChildren(*Shape916);

CHAnimSite* HAnimSite920 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite920->setDEF("hanim_r_humeral_medial_epicondyles_pt");
HAnimSite920->setName("r_humeral_medial_epicondyles_pt");
HAnimSite920->setTranslation(new float[3]{-0.168,1.1298,-0.1062});
CTouchSensor* TouchSensor921 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor921->setDescription("HAnimSite r_humeral_medial_epicondyles_pt");
HAnimSite920->addChildren(*TouchSensor921);

CShape* Shape922 = (CShape *)(m_pScene.createNode("Shape"));
Shape922->setUSE("HAnimSiteShape");
HAnimSite920->addChildren(*Shape922);

HAnimSegment912->addChildren(*HAnimSite920);

CHAnimSite* HAnimSite923 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite923->setDEF("hanim_r_olecranon_pt");
HAnimSite923->setName("r_olecranon_pt");
HAnimSite923->setTranslation(new float[3]{-0.1907,1.1405,-0.1065});
CTouchSensor* TouchSensor924 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor924->setDescription("HAnimSite r_olecranon_pt");
HAnimSite923->addChildren(*TouchSensor924);

CShape* Shape925 = (CShape *)(m_pScene.createNode("Shape"));
Shape925->setUSE("HAnimSiteShape");
HAnimSite923->addChildren(*Shape925);

HAnimSegment912->addChildren(*HAnimSite923);

CHAnimSite* HAnimSite926 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite926->setDEF("hanim_r_radial_styloid_pt");
HAnimSite926->setName("r_radial_styloid_pt");
HAnimSite926->setTranslation(new float[3]{-0.1884,0.8676,-0.036});
CTouchSensor* TouchSensor927 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor927->setDescription("HAnimSite r_radial_styloid_pt");
HAnimSite926->addChildren(*TouchSensor927);

CShape* Shape928 = (CShape *)(m_pScene.createNode("Shape"));
Shape928->setUSE("HAnimSiteShape");
HAnimSite926->addChildren(*Shape928);

HAnimSegment912->addChildren(*HAnimSite926);

CHAnimSite* HAnimSite929 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite929->setDEF("hanim_r_radiale_pt");
HAnimSite929->setName("r_radiale_pt");
HAnimSite929->setTranslation(new float[3]{-0.213,1.1305,-0.1091});
CTouchSensor* TouchSensor930 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor930->setDescription("HAnimSite r_radiale_pt");
HAnimSite929->addChildren(*TouchSensor930);

CShape* Shape931 = (CShape *)(m_pScene.createNode("Shape"));
Shape931->setUSE("HAnimSiteShape");
HAnimSite929->addChildren(*Shape931);

HAnimSegment912->addChildren(*HAnimSite929);

HAnimJoint911->addChildren(*HAnimSegment912);

CHAnimJoint* HAnimJoint932 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint932->setDEF("hanim_r_elbow");
HAnimJoint932->setName("r_elbow");
HAnimJoint932->setCenter(new float[3]{-0.1949,1.1388,-0.062});
CHAnimSegment* HAnimSegment933 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment933->setDEF("hanim_r_forearm");
HAnimSegment933->setName("r_forearm");
CTransform* Transform934 = (CTransform *)(m_pScene.createNode("Transform"));
Transform934->setTranslation(new float[3]{-0.1949,1.1388,-0.062});
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
Coordinate940->setPoint(new float[6]{-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521});
LineSet938->setCoord(*Coordinate940);

Shape937->setGeometry(LineSet938);

HAnimSegment933->addChildren(*Shape937);

CHAnimSite* HAnimSite941 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite941->setDEF("hanim_r_ulnar_styloid_pt");
HAnimSite941->setName("r_ulnar_styloid_pt");
HAnimSite941->setTranslation(new float[3]{-0.2117,0.8562,-0.0584});
CTouchSensor* TouchSensor942 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor942->setDescription("HAnimSite r_ulnar_styloid_pt");
HAnimSite941->addChildren(*TouchSensor942);

CShape* Shape943 = (CShape *)(m_pScene.createNode("Shape"));
Shape943->setUSE("HAnimSiteShape");
HAnimSite941->addChildren(*Shape943);

HAnimSegment933->addChildren(*HAnimSite941);

HAnimJoint932->addChildren(*HAnimSegment933);

CHAnimJoint* HAnimJoint944 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint944->setDEF("hanim_r_radiocarpal");
HAnimJoint944->setName("r_radiocarpal");
HAnimJoint944->setCenter(new float[3]{-0.1959,0.8694,-0.0521});
CHAnimSegment* HAnimSegment945 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment945->setDEF("hanim_r_carpal");
HAnimSegment945->setName("r_carpal");
CTransform* Transform946 = (CTransform *)(m_pScene.createNode("Transform"));
Transform946->setTranslation(new float[3]{-0.2,0.85,-0.05});
Transform946->setRotation(new float[4]{0,0,1,-3.14});
Transform946->setScale(new float[3]{0.2,0.2,0.2});
CTransform* Transform947 = (CTransform *)(m_pScene.createNode("Transform"));
Transform947->setRotation(new float[4]{0,1,0,1.57});
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
Coordinate952->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1899,0.8502,-0.0473});
LineSet950->setCoord(*Coordinate952);

Shape949->setGeometry(LineSet950);

HAnimSegment945->addChildren(*Shape949);

CShape* Shape953 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet954 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet954->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA955 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA955->setUSE("HAnimSegmentLineColorRGBA");
LineSet954->setColor(*ColorRGBA955);

CCoordinate* Coordinate956 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate956->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1961,0.8055,-0.0218});
LineSet954->setCoord(*Coordinate956);

Shape953->setGeometry(LineSet954);

HAnimSegment945->addChildren(*Shape953);

CHAnimSite* HAnimSite957 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite957->setDEF("hanim_r_metacarpal_phalanx_2_pt");
HAnimSite957->setName("r_metacarpal_phalanx_2_pt");
HAnimSite957->setTranslation(new float[3]{-0.1977,0.8169,-0.0177});
CTouchSensor* TouchSensor958 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor958->setDescription("HAnimSite r_metacarpal_phalanx_2_pt");
HAnimSite957->addChildren(*TouchSensor958);

CShape* Shape959 = (CShape *)(m_pScene.createNode("Shape"));
Shape959->setUSE("HAnimSiteShape");
HAnimSite957->addChildren(*Shape959);

HAnimSegment945->addChildren(*HAnimSite957);

CShape* Shape960 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet961 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet961->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA962 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA962->setUSE("HAnimSegmentLineColorRGBA");
LineSet961->setColor(*ColorRGBA962);

CCoordinate* Coordinate963 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate963->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1972,0.806,-0.0468});
LineSet961->setCoord(*Coordinate963);

Shape960->setGeometry(LineSet961);

HAnimSegment945->addChildren(*Shape960);

CHAnimSite* HAnimSite964 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite964->setDEF("hanim_r_metacarpal_phalanx_3_pt");
HAnimSite964->setName("r_metacarpal_phalanx_3_pt");
CTouchSensor* TouchSensor965 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor965->setDescription("HAnimSite r_metacarpal_phalanx_3_pt");
HAnimSite964->addChildren(*TouchSensor965);

CShape* Shape966 = (CShape *)(m_pScene.createNode("Shape"));
Shape966->setUSE("HAnimSiteShape");
HAnimSite964->addChildren(*Shape966);

HAnimSegment945->addChildren(*HAnimSite964);

CShape* Shape967 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet968 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet968->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA969 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA969->setUSE("HAnimSegmentLineColorRGBA");
LineSet968->setColor(*ColorRGBA969);

CCoordinate* Coordinate970 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate970->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1951,0.8049,-0.0732});
LineSet968->setCoord(*Coordinate970);

Shape967->setGeometry(LineSet968);

HAnimSegment945->addChildren(*Shape967);

CShape* Shape971 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet972 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet972->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA973 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA973->setUSE("HAnimSegmentLineColorRGBA");
LineSet972->setColor(*ColorRGBA973);

CCoordinate* Coordinate974 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate974->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1926,0.8096,-0.0975});
LineSet972->setCoord(*Coordinate974);

Shape971->setGeometry(LineSet972);

HAnimSegment945->addChildren(*Shape971);

CHAnimSite* HAnimSite975 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite975->setDEF("hanim_r_metacarpal_phalanx_5_pt");
HAnimSite975->setName("r_metacarpal_phalanx_5_pt");
HAnimSite975->setTranslation(new float[3]{-0.1929,0.789,-0.1064});
CTouchSensor* TouchSensor976 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor976->setDescription("HAnimSite r_metacarpal_phalanx_5_pt");
HAnimSite975->addChildren(*TouchSensor976);

CShape* Shape977 = (CShape *)(m_pScene.createNode("Shape"));
Shape977->setUSE("HAnimSiteShape");
HAnimSite975->addChildren(*Shape977);

HAnimSegment945->addChildren(*HAnimSite975);

HAnimJoint944->addChildren(*HAnimSegment945);

CHAnimJoint* HAnimJoint978 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint978->setDEF("hanim_r_carpometacarpal_1");
HAnimJoint978->setName("r_carpometacarpal_1");
HAnimJoint978->setCenter(new float[3]{-0.1899,0.8502,-0.0473});
CHAnimSegment* HAnimSegment979 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment979->setDEF("hanim_r_metacarpal_1");
HAnimSegment979->setName("r_metacarpal_1");
CTransform* Transform980 = (CTransform *)(m_pScene.createNode("Transform"));
Transform980->setTranslation(new float[3]{-0.1899,0.8502,-0.0473});
CTransform* Transform981 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape982 = (CShape *)(m_pScene.createNode("Shape"));
Shape982->setUSE("HAnimJointShape");
Transform981->addChild(*Shape982);

Transform980->addChildren(*Transform981);

HAnimSegment979->addChildren(*Transform980);

CShape* Shape983 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet984 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet984->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA985 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA985->setUSE("HAnimSegmentLineColorRGBA");
LineSet984->setColor(*ColorRGBA985);

CCoordinate* Coordinate986 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate986->setPoint(new float[6]{-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306});
LineSet984->setCoord(*Coordinate986);

Shape983->setGeometry(LineSet984);

HAnimSegment979->addChildren(*Shape983);

HAnimJoint978->addChildren(*HAnimSegment979);

CHAnimJoint* HAnimJoint987 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint987->setDEF("hanim_r_metacarpophalangeal_1");
HAnimJoint987->setName("r_metacarpophalangeal_1");
HAnimJoint987->setCenter(new float[3]{-0.1874,0.8256,0.0306});
CHAnimSegment* HAnimSegment988 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment988->setDEF("hanim_r_carpal_proximal_phalanx_1");
HAnimSegment988->setName("r_carpal_proximal_phalanx_1");
CTransform* Transform989 = (CTransform *)(m_pScene.createNode("Transform"));
Transform989->setTranslation(new float[3]{-0.1874,0.8256,0.0306});
CTransform* Transform990 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape991 = (CShape *)(m_pScene.createNode("Shape"));
Shape991->setUSE("HAnimJointShape");
Transform990->addChild(*Shape991);

Transform989->addChildren(*Transform990);

HAnimSegment988->addChildren(*Transform989);

CShape* Shape992 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet993 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet993->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA994 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA994->setUSE("HAnimSegmentLineColorRGBA");
LineSet993->setColor(*ColorRGBA994);

CCoordinate* Coordinate995 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate995->setPoint(new float[6]{-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506});
LineSet993->setCoord(*Coordinate995);

Shape992->setGeometry(LineSet993);

HAnimSegment988->addChildren(*Shape992);

CHAnimSite* HAnimSite996 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite996->setDEF("hanim_r_carpal_distal_phalanx_1_tip");
HAnimSite996->setName("r_carpal_distal_phalanx_1_tip");
CTouchSensor* TouchSensor997 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor997->setDescription("HAnimSite r_carpal_distal_phalanx_1_tip");
HAnimSite996->addChildren(*TouchSensor997);

CShape* Shape998 = (CShape *)(m_pScene.createNode("Shape"));
Shape998->setUSE("HAnimSiteShape");
HAnimSite996->addChildren(*Shape998);

HAnimSegment988->addChildren(*HAnimSite996);

HAnimJoint987->addChildren(*HAnimSegment988);

CHAnimJoint* HAnimJoint999 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint999->setDEF("hanim_r_carpal_interphalangeal_1");
HAnimJoint999->setName("r_carpal_interphalangeal_1");
HAnimJoint999->setCenter(new float[3]{-0.1864,0.819,0.0506});
HAnimJoint987->addChildren(*HAnimJoint999);

HAnimJoint978->addChildren(*HAnimJoint987);

HAnimJoint944->addChildren(*HAnimJoint978);

CHAnimJoint* HAnimJoint1000 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1000->setDEF("hanim_r_carpometacarpal_2");
HAnimJoint1000->setName("r_carpometacarpal_2");
HAnimJoint1000->setCenter(new float[3]{-0.1961,0.8055,-0.0218});
CHAnimSegment* HAnimSegment1001 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1001->setDEF("hanim_r_metacarpal_2");
HAnimSegment1001->setName("r_metacarpal_2");
CTransform* Transform1002 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1002->setTranslation(new float[3]{-0.1961,0.8055,-0.0218});
CTransform* Transform1003 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1004 = (CShape *)(m_pScene.createNode("Shape"));
Shape1004->setUSE("HAnimJointShape");
Transform1003->addChild(*Shape1004);

Transform1002->addChildren(*Transform1003);

HAnimSegment1001->addChildren(*Transform1002);

CShape* Shape1005 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1006 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1006->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1007 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1007->setUSE("HAnimSegmentLineColorRGBA");
LineSet1006->setColor(*ColorRGBA1007);

CCoordinate* Coordinate1008 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1008->setPoint(new float[6]{-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218});
LineSet1006->setCoord(*Coordinate1008);

Shape1005->setGeometry(LineSet1006);

HAnimSegment1001->addChildren(*Shape1005);

HAnimJoint1000->addChildren(*HAnimSegment1001);

CHAnimJoint* HAnimJoint1009 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1009->setDEF("hanim_r_metacarpophalangeal_2");
HAnimJoint1009->setName("r_metacarpophalangeal_2");
HAnimJoint1009->setCenter(new float[3]{-0.1961,0.7846,-0.0218});
CHAnimSegment* HAnimSegment1010 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1010->setDEF("hanim_r_carpal_proximal_phalanx_2");
HAnimSegment1010->setName("r_carpal_proximal_phalanx_2");
CTransform* Transform1011 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1011->setTranslation(new float[3]{-0.1961,0.7846,-0.0218});
CTransform* Transform1012 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1013 = (CShape *)(m_pScene.createNode("Shape"));
Shape1013->setUSE("HAnimJointShape");
Transform1012->addChild(*Shape1013);

Transform1011->addChildren(*Transform1012);

HAnimSegment1010->addChildren(*Transform1011);

CShape* Shape1014 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1015 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1015->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1016 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1016->setUSE("HAnimSegmentLineColorRGBA");
LineSet1015->setColor(*ColorRGBA1016);

CCoordinate* Coordinate1017 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1017->setPoint(new float[6]{-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185});
LineSet1015->setCoord(*Coordinate1017);

Shape1014->setGeometry(LineSet1015);

HAnimSegment1010->addChildren(*Shape1014);

HAnimJoint1009->addChildren(*HAnimSegment1010);

CHAnimJoint* HAnimJoint1018 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1018->setDEF("hanim_r_carpal_proximal_interphalangeal_1");
HAnimJoint1018->setName("r_carpal_proximal_interphalangeal_2");
HAnimJoint1018->setCenter(new float[3]{-0.1954,0.7393,-0.0185});
CHAnimSegment* HAnimSegment1019 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1019->setDEF("hanim_r_carpal_middle_phalanx_1");
HAnimSegment1019->setName("r_carpal_middle_phalanx_2");
CTransform* Transform1020 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1020->setTranslation(new float[3]{-0.1954,0.7393,-0.0185});
CTransform* Transform1021 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1022 = (CShape *)(m_pScene.createNode("Shape"));
Shape1022->setUSE("HAnimJointShape");
Transform1021->addChild(*Shape1022);

Transform1020->addChildren(*Transform1021);

HAnimSegment1019->addChildren(*Transform1020);

CShape* Shape1023 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1024 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1024->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1025 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1025->setUSE("HAnimSegmentLineColorRGBA");
LineSet1024->setColor(*ColorRGBA1025);

CCoordinate* Coordinate1026 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1026->setPoint(new float[6]{-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173});
LineSet1024->setCoord(*Coordinate1026);

Shape1023->setGeometry(LineSet1024);

HAnimSegment1019->addChildren(*Shape1023);

CHAnimSite* HAnimSite1027 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1027->setDEF("hanim_r_carpal_distal_phalanx_2_tip");
HAnimSite1027->setName("r_carpal_distal_phalanx_2_tip");
CTouchSensor* TouchSensor1028 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1028->setDescription("HAnimSite r_carpal_distal_phalanx_2_tip");
HAnimSite1027->addChildren(*TouchSensor1028);

CShape* Shape1029 = (CShape *)(m_pScene.createNode("Shape"));
Shape1029->setUSE("HAnimSiteShape");
HAnimSite1027->addChildren(*Shape1029);

HAnimSegment1019->addChildren(*HAnimSite1027);

CHAnimSite* HAnimSite1030 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1030->setDEF("hanim_r_dactylion_pt");
HAnimSite1030->setName("r_dactylion_pt");
HAnimSite1030->setTranslation(new float[3]{-0.1941,0.6772,-0.0423});
CTouchSensor* TouchSensor1031 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1031->setDescription("HAnimSite r_dactylion_pt");
HAnimSite1030->addChildren(*TouchSensor1031);

CShape* Shape1032 = (CShape *)(m_pScene.createNode("Shape"));
Shape1032->setUSE("HAnimSiteShape");
HAnimSite1030->addChildren(*Shape1032);

HAnimSegment1019->addChildren(*HAnimSite1030);

HAnimJoint1018->addChildren(*HAnimSegment1019);

CHAnimJoint* HAnimJoint1033 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1033->setDEF("hanim_r_carpal_distal_interphalangeal_1");
HAnimJoint1033->setName("r_carpal_distal_interphalangeal_2");
HAnimJoint1033->setCenter(new float[3]{-0.1945,0.7169,-0.0173});
HAnimJoint1018->addChildren(*HAnimJoint1033);

HAnimJoint1009->addChildren(*HAnimJoint1018);

HAnimJoint1000->addChildren(*HAnimJoint1009);

HAnimJoint944->addChildren(*HAnimJoint1000);

CHAnimJoint* HAnimJoint1034 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1034->setDEF("hanim_r_carpometacarpal_3");
HAnimJoint1034->setName("r_carpometacarpal_3");
HAnimJoint1034->setCenter(new float[3]{-0.1972,0.806,-0.0468});
CHAnimSegment* HAnimSegment1035 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1035->setDEF("hanim_r_metacarpal_3");
HAnimSegment1035->setName("r_metacarpal_3");
CTransform* Transform1036 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1036->setTranslation(new float[3]{-0.1972,0.806,-0.0468});
CTransform* Transform1037 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1038 = (CShape *)(m_pScene.createNode("Shape"));
Shape1038->setUSE("HAnimJointShape");
Transform1037->addChild(*Shape1038);

Transform1036->addChildren(*Transform1037);

HAnimSegment1035->addChildren(*Transform1036);

CShape* Shape1039 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1040 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1040->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1041 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1041->setUSE("HAnimSegmentLineColorRGBA");
LineSet1040->setColor(*ColorRGBA1041);

CCoordinate* Coordinate1042 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1042->setPoint(new float[6]{-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468});
LineSet1040->setCoord(*Coordinate1042);

Shape1039->setGeometry(LineSet1040);

HAnimSegment1035->addChildren(*Shape1039);

HAnimJoint1034->addChildren(*HAnimSegment1035);

CHAnimJoint* HAnimJoint1043 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1043->setDEF("hanim_r_metacarpophalangeal_3");
HAnimJoint1043->setName("r_metacarpophalangeal_3");
HAnimJoint1043->setCenter(new float[3]{-0.1972,0.7849,-0.0468});
CHAnimSegment* HAnimSegment1044 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1044->setDEF("hanim_r_carpal_proximal_phalanx_3");
HAnimSegment1044->setName("r_carpal_proximal_phalanx_3");
CTransform* Transform1045 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1045->setTranslation(new float[3]{-0.1972,0.7849,-0.0468});
CTransform* Transform1046 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1047 = (CShape *)(m_pScene.createNode("Shape"));
Shape1047->setUSE("HAnimJointShape");
Transform1046->addChild(*Shape1047);

Transform1045->addChildren(*Transform1046);

HAnimSegment1044->addChildren(*Transform1045);

CShape* Shape1048 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1049 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1049->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1050 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1050->setUSE("HAnimSegmentLineColorRGBA");
LineSet1049->setColor(*ColorRGBA1050);

CCoordinate* Coordinate1051 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1051->setPoint(new float[6]{-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441});
LineSet1049->setCoord(*Coordinate1051);

Shape1048->setGeometry(LineSet1049);

HAnimSegment1044->addChildren(*Shape1048);

HAnimJoint1043->addChildren(*HAnimSegment1044);

CHAnimJoint* HAnimJoint1052 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1052->setDEF("hanim_r_carpal_proximal_interphalangeal_2");
HAnimJoint1052->setName("r_carpal_proximal_interphalangeal_3");
HAnimJoint1052->setCenter(new float[3]{-0.195,0.7304,-0.0441});
CHAnimSegment* HAnimSegment1053 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1053->setDEF("hanim_r_carpal_middle_phalanx_2");
HAnimSegment1053->setName("r_carpal_middle_phalanx_3");
CTransform* Transform1054 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1054->setTranslation(new float[3]{-0.195,0.7304,-0.0441});
CTransform* Transform1055 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1056 = (CShape *)(m_pScene.createNode("Shape"));
Shape1056->setUSE("HAnimJointShape");
Transform1055->addChild(*Shape1056);

Transform1054->addChildren(*Transform1055);

HAnimSegment1053->addChildren(*Transform1054);

CShape* Shape1057 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1058 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1058->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1059 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1059->setUSE("HAnimSegmentLineColorRGBA");
LineSet1058->setColor(*ColorRGBA1059);

CCoordinate* Coordinate1060 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1060->setPoint(new float[6]{-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432});
LineSet1058->setCoord(*Coordinate1060);

Shape1057->setGeometry(LineSet1058);

HAnimSegment1053->addChildren(*Shape1057);

CHAnimSite* HAnimSite1061 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1061->setDEF("hanim_r_carpal_distal_phalanx_3_tip");
HAnimSite1061->setName("r_carpal_distal_phalanx_3_tip");
CTouchSensor* TouchSensor1062 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1062->setDescription("HAnimSite r_carpal_distal_phalanx_3_tip");
HAnimSite1061->addChildren(*TouchSensor1062);

CShape* Shape1063 = (CShape *)(m_pScene.createNode("Shape"));
Shape1063->setUSE("HAnimSiteShape");
HAnimSite1061->addChildren(*Shape1063);

HAnimSegment1053->addChildren(*HAnimSite1061);

HAnimJoint1052->addChildren(*HAnimSegment1053);

CHAnimJoint* HAnimJoint1064 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1064->setDEF("hanim_r_carpal_distal_interphalangeal_2");
HAnimJoint1064->setName("r_carpal_distal_interphalangeal_3");
HAnimJoint1064->setCenter(new float[3]{-0.1939,0.7042,-0.0432});
HAnimJoint1052->addChildren(*HAnimJoint1064);

HAnimJoint1043->addChildren(*HAnimJoint1052);

HAnimJoint1034->addChildren(*HAnimJoint1043);

HAnimJoint944->addChildren(*HAnimJoint1034);

CHAnimJoint* HAnimJoint1065 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1065->setDEF("hanim_r_carpometacarpal_4");
HAnimJoint1065->setName("r_carpometacarpal_4");
HAnimJoint1065->setCenter(new float[3]{-0.1951,0.8049,-0.0732});
CHAnimSegment* HAnimSegment1066 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1066->setDEF("hanim_r_metacarpal_4");
HAnimSegment1066->setName("r_metacarpal_4");
CTransform* Transform1067 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1067->setTranslation(new float[3]{-0.1951,0.8049,-0.0732});
CTransform* Transform1068 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1069 = (CShape *)(m_pScene.createNode("Shape"));
Shape1069->setUSE("HAnimJointShape");
Transform1068->addChild(*Shape1069);

Transform1067->addChildren(*Transform1068);

HAnimSegment1066->addChildren(*Transform1067);

CShape* Shape1070 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1071 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1071->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1072 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1072->setUSE("HAnimSegmentLineColorRGBA");
LineSet1071->setColor(*ColorRGBA1072);

CCoordinate* Coordinate1073 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1073->setPoint(new float[6]{-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732});
LineSet1071->setCoord(*Coordinate1073);

Shape1070->setGeometry(LineSet1071);

HAnimSegment1066->addChildren(*Shape1070);

HAnimJoint1065->addChildren(*HAnimSegment1066);

CHAnimJoint* HAnimJoint1074 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1074->setDEF("hanim_r_metacarpophalangeal_4");
HAnimJoint1074->setName("r_metacarpophalangeal_4");
HAnimJoint1074->setCenter(new float[3]{-0.1951,0.7845,-0.0732});
CHAnimSegment* HAnimSegment1075 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1075->setDEF("hanim_r_carpal_proximal_phalanx_4");
HAnimSegment1075->setName("r_carpal_proximal_phalanx_4");
CTransform* Transform1076 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1076->setTranslation(new float[3]{-0.1951,0.7845,-0.0732});
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
Coordinate1082->setPoint(new float[6]{-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716});
LineSet1080->setCoord(*Coordinate1082);

Shape1079->setGeometry(LineSet1080);

HAnimSegment1075->addChildren(*Shape1079);

HAnimJoint1074->addChildren(*HAnimSegment1075);

CHAnimJoint* HAnimJoint1083 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1083->setDEF("hanim_r_carpal_proximal_interphalangeal_3");
HAnimJoint1083->setName("r_carpal_proximal_interphalangeal_4");
HAnimJoint1083->setCenter(new float[3]{-0.192,0.7318,-0.0716});
CHAnimSegment* HAnimSegment1084 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1084->setDEF("hanim_r_carpal_middle_phalanx_3");
HAnimSegment1084->setName("r_carpal_middle_phalanx_4");
CTransform* Transform1085 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1085->setTranslation(new float[3]{-0.192,0.7318,-0.0716});
CTransform* Transform1086 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1087 = (CShape *)(m_pScene.createNode("Shape"));
Shape1087->setUSE("HAnimJointShape");
Transform1086->addChild(*Shape1087);

Transform1085->addChildren(*Transform1086);

HAnimSegment1084->addChildren(*Transform1085);

CShape* Shape1088 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1089 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1089->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1090 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1090->setUSE("HAnimSegmentLineColorRGBA");
LineSet1089->setColor(*ColorRGBA1090);

CCoordinate* Coordinate1091 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1091->setPoint(new float[6]{-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706});
LineSet1089->setCoord(*Coordinate1091);

Shape1088->setGeometry(LineSet1089);

HAnimSegment1084->addChildren(*Shape1088);

CHAnimSite* HAnimSite1092 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1092->setDEF("hanim_r_carpal_distal_phalanx_4_tip");
HAnimSite1092->setName("r_carpal_distal_phalanx_4_tip");
CTouchSensor* TouchSensor1093 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1093->setDescription("HAnimSite r_carpal_distal_phalanx_4_tip");
HAnimSite1092->addChildren(*TouchSensor1093);

CShape* Shape1094 = (CShape *)(m_pScene.createNode("Shape"));
Shape1094->setUSE("HAnimSiteShape");
HAnimSite1092->addChildren(*Shape1094);

HAnimSegment1084->addChildren(*HAnimSite1092);

HAnimJoint1083->addChildren(*HAnimSegment1084);

CHAnimJoint* HAnimJoint1095 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1095->setDEF("hanim_r_carpal_distal_interphalangeal_3");
HAnimJoint1095->setName("r_carpal_distal_interphalangeal_4");
HAnimJoint1095->setCenter(new float[3]{-0.1908,0.7077,-0.0706});
HAnimJoint1083->addChildren(*HAnimJoint1095);

HAnimJoint1074->addChildren(*HAnimJoint1083);

HAnimJoint1065->addChildren(*HAnimJoint1074);

HAnimJoint944->addChildren(*HAnimJoint1065);

CHAnimJoint* HAnimJoint1096 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1096->setDEF("hanim_r_carpometacarpal_5");
HAnimJoint1096->setName("r_carpometacarpal_5");
HAnimJoint1096->setCenter(new float[3]{-0.1926,0.8096,-0.0975});
CHAnimSegment* HAnimSegment1097 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1097->setDEF("hanim_r_metacarpal_5");
HAnimSegment1097->setName("r_metacarpal_5");
CTransform* Transform1098 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1098->setTranslation(new float[3]{-0.1926,0.8096,-0.0975});
CTransform* Transform1099 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1100 = (CShape *)(m_pScene.createNode("Shape"));
Shape1100->setUSE("HAnimJointShape");
Transform1099->addChild(*Shape1100);

Transform1098->addChildren(*Transform1099);

HAnimSegment1097->addChildren(*Transform1098);

CShape* Shape1101 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1102 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1102->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1103 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1103->setUSE("HAnimSegmentLineColorRGBA");
LineSet1102->setColor(*ColorRGBA1103);

CCoordinate* Coordinate1104 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1104->setPoint(new float[6]{-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975});
LineSet1102->setCoord(*Coordinate1104);

Shape1101->setGeometry(LineSet1102);

HAnimSegment1097->addChildren(*Shape1101);

HAnimJoint1096->addChildren(*HAnimSegment1097);

CHAnimJoint* HAnimJoint1105 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1105->setDEF("hanim_r_metacarpophalangeal_5");
HAnimJoint1105->setName("r_metacarpophalangeal_5");
HAnimJoint1105->setCenter(new float[3]{-0.1926,0.7896,-0.0975});
CHAnimSegment* HAnimSegment1106 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1106->setDEF("hanim_r_carpal_proximal_phalanx_5");
HAnimSegment1106->setName("r_carpal_proximal_phalanx_5");
CTransform* Transform1107 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1107->setTranslation(new float[3]{-0.1926,0.7896,-0.0975});
CTransform* Transform1108 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1109 = (CShape *)(m_pScene.createNode("Shape"));
Shape1109->setUSE("HAnimJointShape");
Transform1108->addChild(*Shape1109);

Transform1107->addChildren(*Transform1108);

HAnimSegment1106->addChildren(*Transform1107);

CShape* Shape1110 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1111 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1111->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1112 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1112->setUSE("HAnimSegmentLineColorRGBA");
LineSet1111->setColor(*ColorRGBA1112);

CCoordinate* Coordinate1113 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1113->setPoint(new float[6]{-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963});
LineSet1111->setCoord(*Coordinate1113);

Shape1110->setGeometry(LineSet1111);

HAnimSegment1106->addChildren(*Shape1110);

HAnimJoint1105->addChildren(*HAnimSegment1106);

CHAnimJoint* HAnimJoint1114 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1114->setDEF("hanim_r_carpal_proximal_interphalangeal_4");
HAnimJoint1114->setName("r_carpal_proximal_interphalangeal_5");
HAnimJoint1114->setCenter(new float[3]{-0.1902,0.7483,-0.0963});
CHAnimSegment* HAnimSegment1115 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1115->setDEF("hanim_r_carpal_middle_phalanx_4");
HAnimSegment1115->setName("r_carpal_middle_phalanx_5");
CTransform* Transform1116 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1116->setTranslation(new float[3]{-0.1902,0.7483,-0.0963});
CTransform* Transform1117 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1118 = (CShape *)(m_pScene.createNode("Shape"));
Shape1118->setUSE("HAnimJointShape");
Transform1117->addChild(*Shape1118);

Transform1116->addChildren(*Transform1117);

HAnimSegment1115->addChildren(*Transform1116);

CShape* Shape1119 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1120 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1120->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1121 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1121->setUSE("HAnimSegmentLineColorRGBA");
LineSet1120->setColor(*ColorRGBA1121);

CCoordinate* Coordinate1122 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1122->setPoint(new float[6]{-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096});
LineSet1120->setCoord(*Coordinate1122);

Shape1119->setGeometry(LineSet1120);

HAnimSegment1115->addChildren(*Shape1119);

CHAnimSite* HAnimSite1123 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1123->setDEF("hanim_r_carpal_distal_phalanx_5_tip");
HAnimSite1123->setName("r_carpal_distal_phalanx_5_tip");
CTouchSensor* TouchSensor1124 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1124->setDescription("HAnimSite r_carpal_distal_phalanx_5_tip");
HAnimSite1123->addChildren(*TouchSensor1124);

CShape* Shape1125 = (CShape *)(m_pScene.createNode("Shape"));
Shape1125->setUSE("HAnimSiteShape");
HAnimSite1123->addChildren(*Shape1125);

HAnimSegment1115->addChildren(*HAnimSite1123);

HAnimJoint1114->addChildren(*HAnimSegment1115);

CHAnimJoint* HAnimJoint1126 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1126->setDEF("hanim_r_carpal_distal_interphalangeal_4");
HAnimJoint1126->setName("r_carpal_distal_interphalangeal_5");
HAnimJoint1126->setCenter(new float[3]{-0.1908,0.754,-0.096});
HAnimJoint1114->addChildren(*HAnimJoint1126);

HAnimJoint1105->addChildren(*HAnimJoint1114);

HAnimJoint1096->addChildren(*HAnimJoint1105);

HAnimJoint944->addChildren(*HAnimJoint1096);

HAnimJoint932->addChildren(*HAnimJoint944);

HAnimJoint911->addChildren(*HAnimJoint932);

HAnimJoint896->addChildren(*HAnimJoint911);

HAnimJoint887->addChildren(*HAnimJoint896);

HAnimJoint443->addChildren(*HAnimJoint887);

HAnimJoint428->addChildren(*HAnimJoint443);

HAnimJoint419->addChildren(*HAnimJoint428);

HAnimJoint410->addChildren(*HAnimJoint419);

HAnimJoint401->addChildren(*HAnimJoint410);

HAnimJoint389->addChildren(*HAnimJoint401);

HAnimJoint368->addChildren(*HAnimJoint389);

HAnimJoint359->addChildren(*HAnimJoint368);

HAnimJoint350->addChildren(*HAnimJoint359);

HAnimJoint335->addChildren(*HAnimJoint350);

HAnimJoint323->addChildren(*HAnimJoint335);

HAnimJoint314->addChildren(*HAnimJoint323);

HAnimJoint305->addChildren(*HAnimJoint314);

HAnimJoint296->addChildren(*HAnimJoint305);

HAnimJoint278->addChildren(*HAnimJoint296);

HAnimJoint269->addChildren(*HAnimJoint278);

HAnimJoint260->addChildren(*HAnimJoint269);

HAnimJoint43->addChildren(*HAnimJoint260);

HAnimHumanoid42->setSkeleton(*HAnimJoint43);

CHAnimSite* HAnimSite1127 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1127->setUSE("hanim_buttocks_standing_wall_contact_point_pt");
HAnimHumanoid42->setSites(*HAnimSite1127);

CHAnimSite* HAnimSite1128 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1128->setUSE("hanim_crotch_pt");
HAnimHumanoid42->setSites(*HAnimSite1128);

CHAnimSite* HAnimSite1129 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1129->setUSE("hanim_l_asis_pt");
HAnimHumanoid42->setSites(*HAnimSite1129);

CHAnimSite* HAnimSite1130 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1130->setUSE("hanim_l_iliocristale_pt");
HAnimHumanoid42->setSites(*HAnimSite1130);

CHAnimSite* HAnimSite1131 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1131->setUSE("hanim_l_psis_pt");
HAnimHumanoid42->setSites(*HAnimSite1131);

CHAnimSite* HAnimSite1132 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1132->setUSE("hanim_l_trochanterion_pt");
HAnimHumanoid42->setSites(*HAnimSite1132);

CHAnimSite* HAnimSite1133 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1133->setUSE("hanim_r_asis_pt");
HAnimHumanoid42->setSites(*HAnimSite1133);

CHAnimSite* HAnimSite1134 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1134->setUSE("hanim_r_iliocristale_pt");
HAnimHumanoid42->setSites(*HAnimSite1134);

CHAnimSite* HAnimSite1135 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1135->setUSE("hanim_r_psis_pt");
HAnimHumanoid42->setSites(*HAnimSite1135);

CHAnimSite* HAnimSite1136 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1136->setUSE("hanim_r_trochanterion_pt");
HAnimHumanoid42->setSites(*HAnimSite1136);

CHAnimSite* HAnimSite1137 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1137->setUSE("hanim_navel_pt");
HAnimHumanoid42->setSites(*HAnimSite1137);

CHAnimSite* HAnimSite1138 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1138->setUSE("hanim_waist_preferred_anterior_pt");
HAnimHumanoid42->setSites(*HAnimSite1138);

CHAnimSite* HAnimSite1139 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1139->setUSE("hanim_waist_preferred_posterior_pt");
HAnimHumanoid42->setSites(*HAnimSite1139);

CHAnimSite* HAnimSite1140 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1140->setUSE("hanim_l_femoral_lateral_epicondyles_pt");
HAnimHumanoid42->setSites(*HAnimSite1140);

CHAnimSite* HAnimSite1141 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1141->setUSE("hanim_l_femoral_medial_epicondyles_pt");
HAnimHumanoid42->setSites(*HAnimSite1141);

CHAnimSite* HAnimSite1142 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1142->setUSE("hanim_l_knee_crease_pt");
HAnimHumanoid42->setSites(*HAnimSite1142);

CHAnimSite* HAnimSite1143 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1143->setUSE("hanim_l_suprapatella_pt");
HAnimHumanoid42->setSites(*HAnimSite1143);

CHAnimSite* HAnimSite1144 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1144->setUSE("hanim_r_femoral_lateral_epicondyles_pt");
HAnimHumanoid42->setSites(*HAnimSite1144);

CHAnimSite* HAnimSite1145 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1145->setUSE("hanim_r_femoral_medial_epicondyles_pt");
HAnimHumanoid42->setSites(*HAnimSite1145);

CHAnimSite* HAnimSite1146 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1146->setUSE("hanim_r_knee_crease_pt");
HAnimHumanoid42->setSites(*HAnimSite1146);

CHAnimSite* HAnimSite1147 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1147->setUSE("hanim_r_suprapatella_pt");
HAnimHumanoid42->setSites(*HAnimSite1147);

CHAnimSite* HAnimSite1148 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1148->setUSE("hanim_l_lateral_malleolus_pt");
HAnimHumanoid42->setSites(*HAnimSite1148);

CHAnimSite* HAnimSite1149 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1149->setUSE("hanim_l_medial_malleolus_pt");
HAnimHumanoid42->setSites(*HAnimSite1149);

CHAnimSite* HAnimSite1150 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1150->setUSE("hanim_l_tibiale_pt");
HAnimHumanoid42->setSites(*HAnimSite1150);

CHAnimSite* HAnimSite1151 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1151->setUSE("hanim_l_calcaneus_posterior_pt");
HAnimHumanoid42->setSites(*HAnimSite1151);

CHAnimSite* HAnimSite1152 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1152->setUSE("hanim_l_sphyrion_pt");
HAnimHumanoid42->setSites(*HAnimSite1152);

CHAnimSite* HAnimSite1153 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1153->setUSE("hanim_l_tarsal_distal_phalanx_2_tip");
HAnimHumanoid42->setSites(*HAnimSite1153);

CHAnimSite* HAnimSite1154 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1154->setUSE("hanim_r_lateral_malleolus_pt");
HAnimHumanoid42->setSites(*HAnimSite1154);

CHAnimSite* HAnimSite1155 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1155->setUSE("hanim_r_medial_malleolus_pt");
HAnimHumanoid42->setSites(*HAnimSite1155);

CHAnimSite* HAnimSite1156 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1156->setUSE("hanim_r_tibiale_pt");
HAnimHumanoid42->setSites(*HAnimSite1156);

CHAnimSite* HAnimSite1157 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1157->setUSE("hanim_r_calcaneus_posterior_pt");
HAnimHumanoid42->setSites(*HAnimSite1157);

CHAnimSite* HAnimSite1158 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1158->setUSE("hanim_r_sphyrion_pt");
HAnimHumanoid42->setSites(*HAnimSite1158);

CHAnimSite* HAnimSite1159 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1159->setUSE("hanim_r_tarsal_distal_phalanx_2_tip");
HAnimHumanoid42->setSites(*HAnimSite1159);

CHAnimSite* HAnimSite1160 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1160->setUSE("hanim_l_rib10_pt");
HAnimHumanoid42->setSites(*HAnimSite1160);

CHAnimSite* HAnimSite1161 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1161->setUSE("hanim_r_rib10_pt");
HAnimHumanoid42->setSites(*HAnimSite1161);

CHAnimSite* HAnimSite1162 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1162->setUSE("hanim_spine_2_middle_back_pt");
HAnimHumanoid42->setSites(*HAnimSite1162);

CHAnimSite* HAnimSite1163 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1163->setUSE("hanim_substernale_pt");
HAnimHumanoid42->setSites(*HAnimSite1163);

CHAnimSite* HAnimSite1164 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1164->setUSE("hanim_l_thelion_pt");
HAnimHumanoid42->setSites(*HAnimSite1164);

CHAnimSite* HAnimSite1165 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1165->setUSE("hanim_r_thelion_pt");
HAnimHumanoid42->setSites(*HAnimSite1165);

CHAnimSite* HAnimSite1166 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1166->setUSE("hanim_l_chest_midsagittal_plane_pt");
HAnimHumanoid42->setSites(*HAnimSite1166);

CHAnimSite* HAnimSite1167 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1167->setUSE("hanim_mesosternale_pt");
HAnimHumanoid42->setSites(*HAnimSite1167);

CHAnimSite* HAnimSite1168 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1168->setUSE("hanim_r_chest_midsagittal_plane_pt");
HAnimHumanoid42->setSites(*HAnimSite1168);

CHAnimSite* HAnimSite1169 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1169->setUSE("hanim_rear_center_midsagittal_plane_pt");
HAnimHumanoid42->setSites(*HAnimSite1169);

CHAnimSite* HAnimSite1170 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1170->setUSE("hanim_spine_1_middle_back_pt");
HAnimHumanoid42->setSites(*HAnimSite1170);

CHAnimSite* HAnimSite1171 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1171->setUSE("hanim_cervicale_pt");
HAnimHumanoid42->setSites(*HAnimSite1171);

CHAnimSite* HAnimSite1172 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1172->setUSE("hanim_suprasternale_pt");
HAnimHumanoid42->setSites(*HAnimSite1172);

CHAnimSite* HAnimSite1173 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1173->setUSE("hanim_l_neck_base_pt");
HAnimHumanoid42->setSites(*HAnimSite1173);

CHAnimSite* HAnimSite1174 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1174->setUSE("hanim_r_neck_base_pt");
HAnimHumanoid42->setSites(*HAnimSite1174);

CHAnimSite* HAnimSite1175 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1175->setUSE("hanim_l_acromion_pt");
HAnimHumanoid42->setSites(*HAnimSite1175);

CHAnimSite* HAnimSite1176 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1176->setUSE("hanim_l_axilla_distal_pt");
HAnimHumanoid42->setSites(*HAnimSite1176);

CHAnimSite* HAnimSite1177 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1177->setUSE("hanim_l_axilla_posterior_folds_pt");
HAnimHumanoid42->setSites(*HAnimSite1177);

CHAnimSite* HAnimSite1178 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1178->setUSE("hanim_l_axilla_proximal_pt");
HAnimHumanoid42->setSites(*HAnimSite1178);

CHAnimSite* HAnimSite1179 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1179->setUSE("hanim_l_clavicale_pt");
HAnimHumanoid42->setSites(*HAnimSite1179);

CHAnimSite* HAnimSite1180 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1180->setUSE("hanim_r_acromion_pt");
HAnimHumanoid42->setSites(*HAnimSite1180);

CHAnimSite* HAnimSite1181 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1181->setUSE("hanim_r_axilla_distal_pt");
HAnimHumanoid42->setSites(*HAnimSite1181);

CHAnimSite* HAnimSite1182 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1182->setUSE("hanim_r_axilla_posterior_folds_pt");
HAnimHumanoid42->setSites(*HAnimSite1182);

CHAnimSite* HAnimSite1183 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1183->setUSE("hanim_r_axilla_proximal_pt");
HAnimHumanoid42->setSites(*HAnimSite1183);

CHAnimSite* HAnimSite1184 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1184->setUSE("hanim_r_clavicale_pt");
HAnimHumanoid42->setSites(*HAnimSite1184);

CHAnimSite* HAnimSite1185 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1185->setUSE("hanim_adams_apple_pt");
HAnimHumanoid42->setSites(*HAnimSite1185);

CHAnimSite* HAnimSite1186 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1186->setUSE("hanim_glabella_pt");
HAnimHumanoid42->setSites(*HAnimSite1186);

CHAnimSite* HAnimSite1187 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1187->setUSE("hanim_l_ectocanthus_pt");
HAnimHumanoid42->setSites(*HAnimSite1187);

CHAnimSite* HAnimSite1188 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1188->setUSE("hanim_l_infraorbitale_pt");
HAnimHumanoid42->setSites(*HAnimSite1188);

CHAnimSite* HAnimSite1189 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1189->setUSE("hanim_l_tragion_pt");
HAnimHumanoid42->setSites(*HAnimSite1189);

CHAnimSite* HAnimSite1190 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1190->setUSE("hanim_nuchale_pt");
HAnimHumanoid42->setSites(*HAnimSite1190);

CHAnimSite* HAnimSite1191 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1191->setUSE("hanim_opisthocranion_pt");
HAnimHumanoid42->setSites(*HAnimSite1191);

CHAnimSite* HAnimSite1192 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1192->setUSE("hanim_r_ectocanthus_pt");
HAnimHumanoid42->setSites(*HAnimSite1192);

CHAnimSite* HAnimSite1193 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1193->setUSE("hanim_r_infraorbitale_pt");
HAnimHumanoid42->setSites(*HAnimSite1193);

CHAnimSite* HAnimSite1194 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1194->setUSE("hanim_r_tragion_pt");
HAnimHumanoid42->setSites(*HAnimSite1194);

CHAnimSite* HAnimSite1195 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1195->setUSE("hanim_sellion_pt");
HAnimHumanoid42->setSites(*HAnimSite1195);

CHAnimSite* HAnimSite1196 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1196->setUSE("hanim_skull_vertex_pt");
HAnimHumanoid42->setSites(*HAnimSite1196);

CHAnimSite* HAnimSite1197 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1197->setUSE("hanim_l_gonion_pt");
HAnimHumanoid42->setSites(*HAnimSite1197);

CHAnimSite* HAnimSite1198 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1198->setUSE("hanim_menton_pt");
HAnimHumanoid42->setSites(*HAnimSite1198);

CHAnimSite* HAnimSite1199 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1199->setUSE("hanim_r_gonion_pt");
HAnimHumanoid42->setSites(*HAnimSite1199);

CHAnimSite* HAnimSite1200 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1200->setUSE("hanim_supramenton_pt");
HAnimHumanoid42->setSites(*HAnimSite1200);

CHAnimSite* HAnimSite1201 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1201->setUSE("hanim_l_bideltoid_pt");
HAnimHumanoid42->setSites(*HAnimSite1201);

CHAnimSite* HAnimSite1202 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1202->setUSE("hanim_l_humeral_lateral_epicondyles_pt");
HAnimHumanoid42->setSites(*HAnimSite1202);

CHAnimSite* HAnimSite1203 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1203->setUSE("hanim_l_humeral_medial_epicondyles_pt");
HAnimHumanoid42->setSites(*HAnimSite1203);

CHAnimSite* HAnimSite1204 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1204->setUSE("hanim_l_olecranon_pt");
HAnimHumanoid42->setSites(*HAnimSite1204);

CHAnimSite* HAnimSite1205 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1205->setUSE("hanim_l_radial_styloid_pt");
HAnimHumanoid42->setSites(*HAnimSite1205);

CHAnimSite* HAnimSite1206 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1206->setUSE("hanim_l_radiale_pt");
HAnimHumanoid42->setSites(*HAnimSite1206);

CHAnimSite* HAnimSite1207 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1207->setUSE("hanim_l_ulnar_styloid_pt");
HAnimHumanoid42->setSites(*HAnimSite1207);

CHAnimSite* HAnimSite1208 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1208->setUSE("hanim_l_metacarpal_phalanx_2_pt");
HAnimHumanoid42->setSites(*HAnimSite1208);

CHAnimSite* HAnimSite1209 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1209->setUSE("hanim_l_metacarpal_phalanx_3_pt");
HAnimHumanoid42->setSites(*HAnimSite1209);

CHAnimSite* HAnimSite1210 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1210->setUSE("hanim_l_metacarpal_phalanx_5_pt");
HAnimHumanoid42->setSites(*HAnimSite1210);

CHAnimSite* HAnimSite1211 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1211->setUSE("hanim_l_carpal_distal_phalanx_1_tip");
HAnimHumanoid42->setSites(*HAnimSite1211);

CHAnimSite* HAnimSite1212 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1212->setUSE("hanim_l_carpal_distal_phalanx_2_tip");
HAnimHumanoid42->setSites(*HAnimSite1212);

CHAnimSite* HAnimSite1213 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1213->setUSE("hanim_l_dactylion_pt");
HAnimHumanoid42->setSites(*HAnimSite1213);

CHAnimSite* HAnimSite1214 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1214->setUSE("hanim_l_carpal_distal_phalanx_3_tip");
HAnimHumanoid42->setSites(*HAnimSite1214);

CHAnimSite* HAnimSite1215 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1215->setUSE("hanim_l_carpal_distal_phalanx_4_tip");
HAnimHumanoid42->setSites(*HAnimSite1215);

CHAnimSite* HAnimSite1216 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1216->setUSE("hanim_l_carpal_distal_phalanx_5_tip");
HAnimHumanoid42->setSites(*HAnimSite1216);

CHAnimSite* HAnimSite1217 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1217->setUSE("hanim_r_bideltoid_pt");
HAnimHumanoid42->setSites(*HAnimSite1217);

CHAnimSite* HAnimSite1218 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1218->setUSE("hanim_r_humeral_lateral_epicondyles_pt");
HAnimHumanoid42->setSites(*HAnimSite1218);

CHAnimSite* HAnimSite1219 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1219->setUSE("hanim_r_humeral_medial_epicondyles_pt");
HAnimHumanoid42->setSites(*HAnimSite1219);

CHAnimSite* HAnimSite1220 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1220->setUSE("hanim_r_olecranon_pt");
HAnimHumanoid42->setSites(*HAnimSite1220);

CHAnimSite* HAnimSite1221 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1221->setUSE("hanim_r_radial_styloid_pt");
HAnimHumanoid42->setSites(*HAnimSite1221);

CHAnimSite* HAnimSite1222 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1222->setUSE("hanim_r_radiale_pt");
HAnimHumanoid42->setSites(*HAnimSite1222);

CHAnimSite* HAnimSite1223 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1223->setUSE("hanim_r_ulnar_styloid_pt");
HAnimHumanoid42->setSites(*HAnimSite1223);

CHAnimSite* HAnimSite1224 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1224->setUSE("hanim_r_metacarpal_phalanx_2_pt");
HAnimHumanoid42->setSites(*HAnimSite1224);

CHAnimSite* HAnimSite1225 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1225->setUSE("hanim_r_metacarpal_phalanx_3_pt");
HAnimHumanoid42->setSites(*HAnimSite1225);

CHAnimSite* HAnimSite1226 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1226->setUSE("hanim_r_metacarpal_phalanx_5_pt");
HAnimHumanoid42->setSites(*HAnimSite1226);

CHAnimSite* HAnimSite1227 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1227->setUSE("hanim_r_carpal_distal_phalanx_1_tip");
HAnimHumanoid42->setSites(*HAnimSite1227);

CHAnimSite* HAnimSite1228 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1228->setUSE("hanim_r_carpal_distal_phalanx_2_tip");
HAnimHumanoid42->setSites(*HAnimSite1228);

CHAnimSite* HAnimSite1229 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1229->setUSE("hanim_r_dactylion_pt");
HAnimHumanoid42->setSites(*HAnimSite1229);

CHAnimSite* HAnimSite1230 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1230->setUSE("hanim_r_carpal_distal_phalanx_3_tip");
HAnimHumanoid42->setSites(*HAnimSite1230);

CHAnimSite* HAnimSite1231 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1231->setUSE("hanim_r_carpal_distal_phalanx_4_tip");
HAnimHumanoid42->setSites(*HAnimSite1231);

CHAnimSite* HAnimSite1232 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1232->setUSE("hanim_r_carpal_distal_phalanx_5_tip");
HAnimHumanoid42->setSites(*HAnimSite1232);

CHAnimSegment* HAnimSegment1233 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1233->setUSE("hanim_sacrum");
HAnimHumanoid42->setSegments(*HAnimSegment1233);

CHAnimSegment* HAnimSegment1234 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1234->setUSE("hanim_pelvis");
HAnimHumanoid42->setSegments(*HAnimSegment1234);

CHAnimSegment* HAnimSegment1235 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1235->setUSE("hanim_l_thigh");
HAnimHumanoid42->setSegments(*HAnimSegment1235);

CHAnimSegment* HAnimSegment1236 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1236->setUSE("hanim_l_calf");
HAnimHumanoid42->setSegments(*HAnimSegment1236);

CHAnimSegment* HAnimSegment1237 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1237->setUSE("hanim_l_talus");
HAnimHumanoid42->setSegments(*HAnimSegment1237);

CHAnimSegment* HAnimSegment1238 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1238->setUSE("hanim_l_metatarsal_1");
HAnimHumanoid42->setSegments(*HAnimSegment1238);

CHAnimSegment* HAnimSegment1239 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1239->setUSE("hanim_l_tarsal_proximal_phalanx_1");
HAnimHumanoid42->setSegments(*HAnimSegment1239);

CHAnimSegment* HAnimSegment1240 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1240->setUSE("hanim_r_thigh");
HAnimHumanoid42->setSegments(*HAnimSegment1240);

CHAnimSegment* HAnimSegment1241 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1241->setUSE("hanim_r_calf");
HAnimHumanoid42->setSegments(*HAnimSegment1241);

CHAnimSegment* HAnimSegment1242 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1242->setUSE("hanim_r_talus");
HAnimHumanoid42->setSegments(*HAnimSegment1242);

CHAnimSegment* HAnimSegment1243 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1243->setUSE("hanim_r_metatarsal_1");
HAnimHumanoid42->setSegments(*HAnimSegment1243);

CHAnimSegment* HAnimSegment1244 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1244->setUSE("hanim_r_tarsal_proximal_phalanx_1");
HAnimHumanoid42->setSegments(*HAnimSegment1244);

CHAnimSegment* HAnimSegment1245 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1245->setUSE("hanim_l5");
HAnimHumanoid42->setSegments(*HAnimSegment1245);

CHAnimSegment* HAnimSegment1246 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1246->setUSE("hanim_l4");
HAnimHumanoid42->setSegments(*HAnimSegment1246);

CHAnimSegment* HAnimSegment1247 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1247->setUSE("hanim_l3");
HAnimHumanoid42->setSegments(*HAnimSegment1247);

CHAnimSegment* HAnimSegment1248 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1248->setUSE("hanim_l2");
HAnimHumanoid42->setSegments(*HAnimSegment1248);

CHAnimSegment* HAnimSegment1249 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1249->setUSE("hanim_l1");
HAnimHumanoid42->setSegments(*HAnimSegment1249);

CHAnimSegment* HAnimSegment1250 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1250->setUSE("hanim_t12");
HAnimHumanoid42->setSegments(*HAnimSegment1250);

CHAnimSegment* HAnimSegment1251 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1251->setUSE("hanim_t11");
HAnimHumanoid42->setSegments(*HAnimSegment1251);

CHAnimSegment* HAnimSegment1252 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1252->setUSE("hanim_t10");
HAnimHumanoid42->setSegments(*HAnimSegment1252);

CHAnimSegment* HAnimSegment1253 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1253->setUSE("hanim_t9");
HAnimHumanoid42->setSegments(*HAnimSegment1253);

CHAnimSegment* HAnimSegment1254 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1254->setUSE("hanim_t8");
HAnimHumanoid42->setSegments(*HAnimSegment1254);

CHAnimSegment* HAnimSegment1255 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1255->setUSE("hanim_t7");
HAnimHumanoid42->setSegments(*HAnimSegment1255);

CHAnimSegment* HAnimSegment1256 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1256->setUSE("hanim_t6");
HAnimHumanoid42->setSegments(*HAnimSegment1256);

CHAnimSegment* HAnimSegment1257 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1257->setUSE("hanim_t5");
HAnimHumanoid42->setSegments(*HAnimSegment1257);

CHAnimSegment* HAnimSegment1258 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1258->setUSE("hanim_t4");
HAnimHumanoid42->setSegments(*HAnimSegment1258);

CHAnimSegment* HAnimSegment1259 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1259->setUSE("hanim_t3");
HAnimHumanoid42->setSegments(*HAnimSegment1259);

CHAnimSegment* HAnimSegment1260 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1260->setUSE("hanim_t2");
HAnimHumanoid42->setSegments(*HAnimSegment1260);

CHAnimSegment* HAnimSegment1261 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1261->setUSE("hanim_t1");
HAnimHumanoid42->setSegments(*HAnimSegment1261);

CHAnimSegment* HAnimSegment1262 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1262->setUSE("hanim_c7");
HAnimHumanoid42->setSegments(*HAnimSegment1262);

CHAnimSegment* HAnimSegment1263 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1263->setUSE("hanim_c6");
HAnimHumanoid42->setSegments(*HAnimSegment1263);

CHAnimSegment* HAnimSegment1264 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1264->setUSE("hanim_c5");
HAnimHumanoid42->setSegments(*HAnimSegment1264);

CHAnimSegment* HAnimSegment1265 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1265->setUSE("hanim_c4");
HAnimHumanoid42->setSegments(*HAnimSegment1265);

CHAnimSegment* HAnimSegment1266 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1266->setUSE("hanim_c3");
HAnimHumanoid42->setSegments(*HAnimSegment1266);

CHAnimSegment* HAnimSegment1267 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1267->setUSE("hanim_c2");
HAnimHumanoid42->setSegments(*HAnimSegment1267);

CHAnimSegment* HAnimSegment1268 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1268->setUSE("hanim_c1");
HAnimHumanoid42->setSegments(*HAnimSegment1268);

CHAnimSegment* HAnimSegment1269 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1269->setUSE("hanim_skull");
HAnimHumanoid42->setSegments(*HAnimSegment1269);

CHAnimSegment* HAnimSegment1270 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1270->setUSE("hanim_l_clavicle");
HAnimHumanoid42->setSegments(*HAnimSegment1270);

CHAnimSegment* HAnimSegment1271 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1271->setUSE("hanim_l_scapula");
HAnimHumanoid42->setSegments(*HAnimSegment1271);

CHAnimSegment* HAnimSegment1272 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1272->setUSE("hanim_l_upperarm");
HAnimHumanoid42->setSegments(*HAnimSegment1272);

CHAnimSegment* HAnimSegment1273 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1273->setUSE("hanim_l_forearm");
HAnimHumanoid42->setSegments(*HAnimSegment1273);

CHAnimSegment* HAnimSegment1274 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1274->setUSE("hanim_l_carpal");
HAnimHumanoid42->setSegments(*HAnimSegment1274);

CHAnimSegment* HAnimSegment1275 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1275->setUSE("hanim_l_metacarpal_1");
HAnimHumanoid42->setSegments(*HAnimSegment1275);

CHAnimSegment* HAnimSegment1276 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1276->setUSE("hanim_l_carpal_proximal_phalanx_1");
HAnimHumanoid42->setSegments(*HAnimSegment1276);

CHAnimSegment* HAnimSegment1277 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1277->setUSE("hanim_l_metacarpal_2");
HAnimHumanoid42->setSegments(*HAnimSegment1277);

CHAnimSegment* HAnimSegment1278 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1278->setUSE("hanim_l_carpal_proximal_phalanx_2");
HAnimHumanoid42->setSegments(*HAnimSegment1278);

CHAnimSegment* HAnimSegment1279 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1279->setUSE("hanim_l_carpal_middle_phalanx_1");
HAnimHumanoid42->setSegments(*HAnimSegment1279);

CHAnimSegment* HAnimSegment1280 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1280->setUSE("hanim_l_metacarpal_3");
HAnimHumanoid42->setSegments(*HAnimSegment1280);

CHAnimSegment* HAnimSegment1281 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1281->setUSE("hanim_l_carpal_proximal_phalanx_3");
HAnimHumanoid42->setSegments(*HAnimSegment1281);

CHAnimSegment* HAnimSegment1282 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1282->setUSE("hanim_l_carpal_middle_phalanx_2");
HAnimHumanoid42->setSegments(*HAnimSegment1282);

CHAnimSegment* HAnimSegment1283 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1283->setUSE("hanim_l_metacarpal_4");
HAnimHumanoid42->setSegments(*HAnimSegment1283);

CHAnimSegment* HAnimSegment1284 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1284->setUSE("hanim_l_carpal_proximal_phalanx_4");
HAnimHumanoid42->setSegments(*HAnimSegment1284);

CHAnimSegment* HAnimSegment1285 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1285->setUSE("hanim_l_carpal_middle_phalanx_3");
HAnimHumanoid42->setSegments(*HAnimSegment1285);

CHAnimSegment* HAnimSegment1286 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1286->setUSE("hanim_l_metacarpal_5");
HAnimHumanoid42->setSegments(*HAnimSegment1286);

CHAnimSegment* HAnimSegment1287 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1287->setUSE("hanim_l_carpal_proximal_phalanx_5");
HAnimHumanoid42->setSegments(*HAnimSegment1287);

CHAnimSegment* HAnimSegment1288 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1288->setUSE("hanim_l_carpal_middle_phalanx_4");
HAnimHumanoid42->setSegments(*HAnimSegment1288);

CHAnimSegment* HAnimSegment1289 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1289->setUSE("hanim_r_clavicle");
HAnimHumanoid42->setSegments(*HAnimSegment1289);

CHAnimSegment* HAnimSegment1290 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1290->setUSE("hanim_r_scapula");
HAnimHumanoid42->setSegments(*HAnimSegment1290);

CHAnimSegment* HAnimSegment1291 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1291->setUSE("hanim_r_upperarm");
HAnimHumanoid42->setSegments(*HAnimSegment1291);

CHAnimSegment* HAnimSegment1292 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1292->setUSE("hanim_r_forearm");
HAnimHumanoid42->setSegments(*HAnimSegment1292);

CHAnimSegment* HAnimSegment1293 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1293->setUSE("hanim_r_carpal");
HAnimHumanoid42->setSegments(*HAnimSegment1293);

CHAnimSegment* HAnimSegment1294 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1294->setUSE("hanim_r_metacarpal_1");
HAnimHumanoid42->setSegments(*HAnimSegment1294);

CHAnimSegment* HAnimSegment1295 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1295->setUSE("hanim_r_carpal_proximal_phalanx_1");
HAnimHumanoid42->setSegments(*HAnimSegment1295);

CHAnimSegment* HAnimSegment1296 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1296->setUSE("hanim_r_metacarpal_2");
HAnimHumanoid42->setSegments(*HAnimSegment1296);

CHAnimSegment* HAnimSegment1297 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1297->setUSE("hanim_r_carpal_proximal_phalanx_2");
HAnimHumanoid42->setSegments(*HAnimSegment1297);

CHAnimSegment* HAnimSegment1298 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1298->setUSE("hanim_r_carpal_middle_phalanx_1");
HAnimHumanoid42->setSegments(*HAnimSegment1298);

CHAnimSegment* HAnimSegment1299 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1299->setUSE("hanim_r_metacarpal_3");
HAnimHumanoid42->setSegments(*HAnimSegment1299);

CHAnimSegment* HAnimSegment1300 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1300->setUSE("hanim_r_carpal_proximal_phalanx_3");
HAnimHumanoid42->setSegments(*HAnimSegment1300);

CHAnimSegment* HAnimSegment1301 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1301->setUSE("hanim_r_carpal_middle_phalanx_2");
HAnimHumanoid42->setSegments(*HAnimSegment1301);

CHAnimSegment* HAnimSegment1302 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1302->setUSE("hanim_r_metacarpal_4");
HAnimHumanoid42->setSegments(*HAnimSegment1302);

CHAnimSegment* HAnimSegment1303 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1303->setUSE("hanim_r_carpal_proximal_phalanx_4");
HAnimHumanoid42->setSegments(*HAnimSegment1303);

CHAnimSegment* HAnimSegment1304 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1304->setUSE("hanim_r_carpal_middle_phalanx_3");
HAnimHumanoid42->setSegments(*HAnimSegment1304);

CHAnimSegment* HAnimSegment1305 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1305->setUSE("hanim_r_metacarpal_5");
HAnimHumanoid42->setSegments(*HAnimSegment1305);

CHAnimSegment* HAnimSegment1306 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1306->setUSE("hanim_r_carpal_proximal_phalanx_5");
HAnimHumanoid42->setSegments(*HAnimSegment1306);

CHAnimSegment* HAnimSegment1307 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1307->setUSE("hanim_r_carpal_middle_phalanx_4");
HAnimHumanoid42->setSegments(*HAnimSegment1307);

CHAnimJoint* HAnimJoint1308 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1308->setUSE("hanim_humanoid_root");
HAnimHumanoid42->addJoints(*HAnimJoint1308);

CHAnimJoint* HAnimJoint1309 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1309->setUSE("hanim_sacroiliac");
HAnimHumanoid42->addJoints(*HAnimJoint1309);

CHAnimJoint* HAnimJoint1310 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1310->setUSE("hanim_l_hip");
HAnimHumanoid42->addJoints(*HAnimJoint1310);

CHAnimJoint* HAnimJoint1311 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1311->setUSE("hanim_l_knee");
HAnimHumanoid42->addJoints(*HAnimJoint1311);

CHAnimJoint* HAnimJoint1312 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1312->setUSE("hanim_l_talocrural");
HAnimHumanoid42->addJoints(*HAnimJoint1312);

CHAnimJoint* HAnimJoint1313 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1313->setUSE("hanim_l_tarsometatarsal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1313);

CHAnimJoint* HAnimJoint1314 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1314->setUSE("hanim_l_metatarsophalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1314);

CHAnimJoint* HAnimJoint1315 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1315->setUSE("hanim_l_tarsal_distal_interphalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1315);

CHAnimJoint* HAnimJoint1316 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1316->setUSE("hanim_r_hip");
HAnimHumanoid42->addJoints(*HAnimJoint1316);

CHAnimJoint* HAnimJoint1317 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1317->setUSE("hanim_r_knee");
HAnimHumanoid42->addJoints(*HAnimJoint1317);

CHAnimJoint* HAnimJoint1318 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1318->setUSE("hanim_r_talocrural");
HAnimHumanoid42->addJoints(*HAnimJoint1318);

CHAnimJoint* HAnimJoint1319 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1319->setUSE("hanim_r_tarsometatarsal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1319);

CHAnimJoint* HAnimJoint1320 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1320->setUSE("hanim_r_metatarsophalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1320);

CHAnimJoint* HAnimJoint1321 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1321->setUSE("hanim_r_tarsal_distal_interphalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1321);

CHAnimJoint* HAnimJoint1322 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1322->setUSE("hanim_vl5");
HAnimHumanoid42->addJoints(*HAnimJoint1322);

CHAnimJoint* HAnimJoint1323 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1323->setUSE("hanim_vl4");
HAnimHumanoid42->addJoints(*HAnimJoint1323);

CHAnimJoint* HAnimJoint1324 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1324->setUSE("hanim_vl3");
HAnimHumanoid42->addJoints(*HAnimJoint1324);

CHAnimJoint* HAnimJoint1325 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1325->setUSE("hanim_vl2");
HAnimHumanoid42->addJoints(*HAnimJoint1325);

CHAnimJoint* HAnimJoint1326 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1326->setUSE("hanim_vl1");
HAnimHumanoid42->addJoints(*HAnimJoint1326);

CHAnimJoint* HAnimJoint1327 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1327->setUSE("hanim_vt12");
HAnimHumanoid42->addJoints(*HAnimJoint1327);

CHAnimJoint* HAnimJoint1328 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1328->setUSE("hanim_vt11");
HAnimHumanoid42->addJoints(*HAnimJoint1328);

CHAnimJoint* HAnimJoint1329 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1329->setUSE("hanim_vt10");
HAnimHumanoid42->addJoints(*HAnimJoint1329);

CHAnimJoint* HAnimJoint1330 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1330->setUSE("hanim_vt9");
HAnimHumanoid42->addJoints(*HAnimJoint1330);

CHAnimJoint* HAnimJoint1331 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1331->setUSE("hanim_vt8");
HAnimHumanoid42->addJoints(*HAnimJoint1331);

CHAnimJoint* HAnimJoint1332 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1332->setUSE("hanim_vt7");
HAnimHumanoid42->addJoints(*HAnimJoint1332);

CHAnimJoint* HAnimJoint1333 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1333->setUSE("hanim_vt6");
HAnimHumanoid42->addJoints(*HAnimJoint1333);

CHAnimJoint* HAnimJoint1334 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1334->setUSE("hanim_vt5");
HAnimHumanoid42->addJoints(*HAnimJoint1334);

CHAnimJoint* HAnimJoint1335 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1335->setUSE("hanim_vt4");
HAnimHumanoid42->addJoints(*HAnimJoint1335);

CHAnimJoint* HAnimJoint1336 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1336->setUSE("hanim_vt3");
HAnimHumanoid42->addJoints(*HAnimJoint1336);

CHAnimJoint* HAnimJoint1337 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1337->setUSE("hanim_vt2");
HAnimHumanoid42->addJoints(*HAnimJoint1337);

CHAnimJoint* HAnimJoint1338 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1338->setUSE("hanim_vt1");
HAnimHumanoid42->addJoints(*HAnimJoint1338);

CHAnimJoint* HAnimJoint1339 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1339->setUSE("hanim_vc7");
HAnimHumanoid42->addJoints(*HAnimJoint1339);

CHAnimJoint* HAnimJoint1340 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1340->setUSE("hanim_vc6");
HAnimHumanoid42->addJoints(*HAnimJoint1340);

CHAnimJoint* HAnimJoint1341 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1341->setUSE("hanim_vc5");
HAnimHumanoid42->addJoints(*HAnimJoint1341);

CHAnimJoint* HAnimJoint1342 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1342->setUSE("hanim_vc4");
HAnimHumanoid42->addJoints(*HAnimJoint1342);

CHAnimJoint* HAnimJoint1343 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1343->setUSE("hanim_vc3");
HAnimHumanoid42->addJoints(*HAnimJoint1343);

CHAnimJoint* HAnimJoint1344 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1344->setUSE("hanim_vc2");
HAnimHumanoid42->addJoints(*HAnimJoint1344);

CHAnimJoint* HAnimJoint1345 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1345->setUSE("hanim_vc1");
HAnimHumanoid42->addJoints(*HAnimJoint1345);

CHAnimJoint* HAnimJoint1346 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1346->setUSE("hanim_skullbase");
HAnimHumanoid42->addJoints(*HAnimJoint1346);

CHAnimJoint* HAnimJoint1347 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1347->setUSE("hanim_l_eyelid_joint");
HAnimHumanoid42->addJoints(*HAnimJoint1347);

CHAnimJoint* HAnimJoint1348 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1348->setUSE("hanim_r_eyelid_joint");
HAnimHumanoid42->addJoints(*HAnimJoint1348);

CHAnimJoint* HAnimJoint1349 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1349->setUSE("hanim_l_eyeball_joint");
HAnimHumanoid42->addJoints(*HAnimJoint1349);

CHAnimJoint* HAnimJoint1350 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1350->setUSE("hanim_r_eyeball_joint");
HAnimHumanoid42->addJoints(*HAnimJoint1350);

CHAnimJoint* HAnimJoint1351 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1351->setUSE("hanim_l_eyebrow_joint");
HAnimHumanoid42->addJoints(*HAnimJoint1351);

CHAnimJoint* HAnimJoint1352 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1352->setUSE("hanim_r_eyebrow_joint");
HAnimHumanoid42->addJoints(*HAnimJoint1352);

CHAnimJoint* HAnimJoint1353 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1353->setUSE("hanim_temporomandibular");
HAnimHumanoid42->addJoints(*HAnimJoint1353);

CHAnimJoint* HAnimJoint1354 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1354->setUSE("hanim_l_sternoclavicular");
HAnimHumanoid42->addJoints(*HAnimJoint1354);

CHAnimJoint* HAnimJoint1355 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1355->setUSE("hanim_l_acromioclavicular");
HAnimHumanoid42->addJoints(*HAnimJoint1355);

CHAnimJoint* HAnimJoint1356 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1356->setUSE("hanim_l_shoulder");
HAnimHumanoid42->addJoints(*HAnimJoint1356);

CHAnimJoint* HAnimJoint1357 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1357->setUSE("hanim_l_elbow");
HAnimHumanoid42->addJoints(*HAnimJoint1357);

CHAnimJoint* HAnimJoint1358 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1358->setUSE("hanim_l_radiocarpal");
HAnimHumanoid42->addJoints(*HAnimJoint1358);

CHAnimJoint* HAnimJoint1359 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1359->setUSE("hanim_l_carpometacarpal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1359);

CHAnimJoint* HAnimJoint1360 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1360->setUSE("hanim_l_metacarpophalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1360);

CHAnimJoint* HAnimJoint1361 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1361->setUSE("hanim_l_carpal_interphalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1361);

CHAnimJoint* HAnimJoint1362 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1362->setUSE("hanim_l_carpometacarpal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1362);

CHAnimJoint* HAnimJoint1363 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1363->setUSE("hanim_l_metacarpophalangeal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1363);

CHAnimJoint* HAnimJoint1364 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1364->setUSE("hanim_l_carpal_proximal_interphalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1364);

CHAnimJoint* HAnimJoint1365 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1365->setUSE("hanim_l_carpal_distal_interphalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1365);

CHAnimJoint* HAnimJoint1366 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1366->setUSE("hanim_l_carpometacarpal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1366);

CHAnimJoint* HAnimJoint1367 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1367->setUSE("hanim_l_metacarpophalangeal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1367);

CHAnimJoint* HAnimJoint1368 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1368->setUSE("hanim_l_carpal_proximal_interphalangeal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1368);

CHAnimJoint* HAnimJoint1369 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1369->setUSE("hanim_l_carpal_distal_interphalangeal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1369);

CHAnimJoint* HAnimJoint1370 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1370->setUSE("hanim_l_carpometacarpal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1370);

CHAnimJoint* HAnimJoint1371 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1371->setUSE("hanim_l_metacarpophalangeal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1371);

CHAnimJoint* HAnimJoint1372 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1372->setUSE("hanim_l_carpal_proximal_interphalangeal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1372);

CHAnimJoint* HAnimJoint1373 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1373->setUSE("hanim_l_carpal_distal_interphalangeal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1373);

CHAnimJoint* HAnimJoint1374 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1374->setUSE("hanim_l_carpometacarpal_5");
HAnimHumanoid42->addJoints(*HAnimJoint1374);

CHAnimJoint* HAnimJoint1375 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1375->setUSE("hanim_l_metacarpophalangeal_5");
HAnimHumanoid42->addJoints(*HAnimJoint1375);

CHAnimJoint* HAnimJoint1376 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1376->setUSE("hanim_l_carpal_proximal_interphalangeal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1376);

CHAnimJoint* HAnimJoint1377 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1377->setUSE("hanim_l_carpal_distal_interphalangeal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1377);

CHAnimJoint* HAnimJoint1378 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1378->setUSE("hanim_r_sternoclavicular");
HAnimHumanoid42->addJoints(*HAnimJoint1378);

CHAnimJoint* HAnimJoint1379 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1379->setUSE("hanim_r_acromioclavicular");
HAnimHumanoid42->addJoints(*HAnimJoint1379);

CHAnimJoint* HAnimJoint1380 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1380->setUSE("hanim_r_shoulder");
HAnimHumanoid42->addJoints(*HAnimJoint1380);

CHAnimJoint* HAnimJoint1381 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1381->setUSE("hanim_r_elbow");
HAnimHumanoid42->addJoints(*HAnimJoint1381);

CHAnimJoint* HAnimJoint1382 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1382->setUSE("hanim_r_radiocarpal");
HAnimHumanoid42->addJoints(*HAnimJoint1382);

CHAnimJoint* HAnimJoint1383 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1383->setUSE("hanim_r_carpometacarpal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1383);

CHAnimJoint* HAnimJoint1384 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1384->setUSE("hanim_r_metacarpophalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1384);

CHAnimJoint* HAnimJoint1385 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1385->setUSE("hanim_r_carpal_interphalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1385);

CHAnimJoint* HAnimJoint1386 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1386->setUSE("hanim_r_carpometacarpal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1386);

CHAnimJoint* HAnimJoint1387 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1387->setUSE("hanim_r_metacarpophalangeal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1387);

CHAnimJoint* HAnimJoint1388 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1388->setUSE("hanim_r_carpal_proximal_interphalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1388);

CHAnimJoint* HAnimJoint1389 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1389->setUSE("hanim_r_carpal_distal_interphalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1389);

CHAnimJoint* HAnimJoint1390 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1390->setUSE("hanim_r_carpometacarpal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1390);

CHAnimJoint* HAnimJoint1391 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1391->setUSE("hanim_r_metacarpophalangeal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1391);

CHAnimJoint* HAnimJoint1392 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1392->setUSE("hanim_r_carpal_proximal_interphalangeal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1392);

CHAnimJoint* HAnimJoint1393 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1393->setUSE("hanim_r_carpal_distal_interphalangeal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1393);

CHAnimJoint* HAnimJoint1394 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1394->setUSE("hanim_r_carpometacarpal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1394);

CHAnimJoint* HAnimJoint1395 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1395->setUSE("hanim_r_metacarpophalangeal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1395);

CHAnimJoint* HAnimJoint1396 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1396->setUSE("hanim_r_carpal_proximal_interphalangeal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1396);

CHAnimJoint* HAnimJoint1397 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1397->setUSE("hanim_r_carpal_distal_interphalangeal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1397);

CHAnimJoint* HAnimJoint1398 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1398->setUSE("hanim_r_carpometacarpal_5");
HAnimHumanoid42->addJoints(*HAnimJoint1398);

CHAnimJoint* HAnimJoint1399 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1399->setUSE("hanim_r_metacarpophalangeal_5");
HAnimHumanoid42->addJoints(*HAnimJoint1399);

CHAnimJoint* HAnimJoint1400 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1400->setUSE("hanim_r_carpal_proximal_interphalangeal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1400);

CHAnimJoint* HAnimJoint1401 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1401->setUSE("hanim_r_carpal_distal_interphalangeal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1401);

CCoordinate* Coordinate1402 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1402->setDEF("TheSkinCoord");
Coordinate1402->setPoint(new float[1170]{0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.235,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168});
HAnimHumanoid42->setSkinCoord(*Coordinate1402);

CShape* Shape1403 = (CShape *)(m_pScene.createNode("Shape"));
Shape1403->setDEF("SkinShape");
CAppearance* Appearance1404 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1404->setDEF("SkinAppearance");
CMaterial* Material1405 = (CMaterial *)(m_pScene.createNode("Material"));
Material1405->setDEF("SkinMaterial");
Material1405->setAmbientIntensity(0.6);
Material1405->setDiffuseColor(new float[3]{1,1,1});
Material1405->setShininess(0.6);
Material1405->setTransparency(0.2);
Appearance1404->setMaterial(*Material1405);

CImageTexture* ImageTexture1406 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture1406->setDEF("zBlueSpiralBkg2");
ImageTexture1406->setDescription("Blue Spiral Pattern");
ImageTexture1406->setUrl(new CString[3]{"./data/zBlueSpiralBkg2.gif","zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"}, 3);
Appearance1404->setTexture(*ImageTexture1406);

Shape1403->setAppearance(*Appearance1404);

CIndexedFaceSet* IndexedFaceSet1407 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet1407->setCreaseAngle(3.1);
IndexedFaceSet1407->setCoordIndex(new int[2780]{0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1});
CColor* Color1408 = (CColor *)(m_pScene.createNode("Color"));
Color1408->setColor(new float[2079]{1,0,0,0,1,1,0,1,0,1,1,0,1,1,0,1,0,0,0,1,0,0,0,1,0,1,1,0,1,1,1,1,0,1,1,0,1,1,0,1,1,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,1,0,0,1,1,0,1,1,0,1,1,1,1,0,0,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,1,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,0,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,0,1,0,0,1,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1});
IndexedFaceSet1407->setColor(*Color1408);

CCoordinate* Coordinate1409 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1409->setUSE("TheSkinCoord");
IndexedFaceSet1407->setCoord(*Coordinate1409);

Shape1403->setGeometry(IndexedFaceSet1407);

HAnimHumanoid42->setSkin(*Shape1403);

group->addChildren(*HAnimHumanoid42);

X3D0->setScene(*Scene10);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

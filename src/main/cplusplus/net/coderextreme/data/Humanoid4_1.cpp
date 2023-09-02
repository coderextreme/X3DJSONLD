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
meta3->setContent("Humanoid4_1.x3d");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("identifier");
meta4->setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid4_1.x3d");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("description");
meta5->setContent("An attempt at a standard LOA-4 skeleton");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("generator");
meta6->setContent("h2.pl");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("modified");
meta7->setContent("14 Jan 2023");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("creator");
meta8->setContent("John Carlson");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("created");
meta9->setContent("9 November 2020");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("license");
meta10->setContent("../license.html");
head1->addMeta(*meta10);

X3D0->setHead(*head1);

CScene* Scene11 = new CScene();
CTransform* Transform12 = (CTransform *)(m_pScene.createNode("Transform"));
//DEF for markerfor XYZ axes
CShape* Shape13 = (CShape *)(m_pScene.createNode("Shape"));
Shape13->setDEF("AxisLinesShape");
//RGB lines showing XYZ axes
CIndexedLineSet* IndexedLineSet14 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet14->setColorIndex(new int[3]{0,1,2});
IndexedLineSet14->setColorPerVertex(False);
IndexedLineSet14->setCoordIndex(new int[9]{0,1,-1,0,2,-1,0,3,-1});
CCoordinate* Coordinate15 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate15->setPoint(new float[12]{0,0,0,0.1,0,0,0,0.1,0,0,0,0.1});
IndexedLineSet14->setCoord(*Coordinate15);

CColor* Color16 = (CColor *)(m_pScene.createNode("Color"));
Color16->setColor(new float[9]{1,0,0,0,0.6,0,0,0,1});
IndexedLineSet14->setColor(*Color16);

Shape13->setGeometry(IndexedLineSet14);

Transform12->addChild(*Shape13);

group->addChildren(*Transform12);

CGroup* Group17 = (CGroup *)(m_pScene.createNode("Group"));
//DEFS for markers of skeleton joints, segments, and sites
CTransform* Transform18 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform19 = (CTransform *)(m_pScene.createNode("Transform"));
Transform19->setTranslation(new float[3]{0,2,0});
CShape* Shape20 = (CShape *)(m_pScene.createNode("Shape"));
Shape20->setDEF("HAnimRootShape");
CSphere* Sphere21 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere21->setRadius(0.02);
Shape20->setGeometry(Sphere21);

CAppearance* Appearance22 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material23 = (CMaterial *)(m_pScene.createNode("Material"));
Material23->setDEF("HAnimRootMaterial");
Material23->setDiffuseColor(new float[3]{0.8,0,0});
Material23->setTransparency(0.3);
Appearance22->setMaterial(*Material23);

Shape20->setAppearance(*Appearance22);

Transform19->addChild(*Shape20);

Transform18->addChildren(*Transform19);

CTransform* Transform24 = (CTransform *)(m_pScene.createNode("Transform"));
Transform24->setTranslation(new float[3]{0,2.1,0});
CShape* Shape25 = (CShape *)(m_pScene.createNode("Shape"));
Shape25->setDEF("HAnimJointShape");
CSphere* Sphere26 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere26->setRadius(0.02);
Shape25->setGeometry(Sphere26);

CAppearance* Appearance27 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material28 = (CMaterial *)(m_pScene.createNode("Material"));
Material28->setDEF("HAnimJointMaterial");
Material28->setDiffuseColor(new float[3]{0,0,0.8});
Material28->setTransparency(0.3);
Appearance27->setMaterial(*Material28);

Shape25->setAppearance(*Appearance27);

Transform24->addChild(*Shape25);

Transform18->addChildren(*Transform24);

CTransform* Transform29 = (CTransform *)(m_pScene.createNode("Transform"));
Transform29->setTranslation(new float[3]{0,2.05,0});
CShape* Shape30 = (CShape *)(m_pScene.createNode("Shape"));
Shape30->setDEF("HAnimSegmentLine");
CLineSet* LineSet31 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet31->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA32 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA32->setDEF("HAnimSegmentLineColorRGBA");
ColorRGBA32->setColor(new float[8]{1,1,0,1,1,1,0,0.1});
LineSet31->setColor(*ColorRGBA32);

CCoordinate* Coordinate33 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate33->setPoint(new float[6]{-0.05,0,0,0.05,0,0});
LineSet31->setCoord(*Coordinate33);

Shape30->setGeometry(LineSet31);

Transform29->addChild(*Shape30);

Transform18->addChildren(*Transform29);

CTransform* Transform34 = (CTransform *)(m_pScene.createNode("Transform"));
Transform34->setTranslation(new float[3]{0,2.1,0});
CShape* Shape35 = (CShape *)(m_pScene.createNode("Shape"));
Shape35->setDEF("HAnimSiteShape");
CIndexedFaceSet* IndexedFaceSet36 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet36->setDEF("DiamondIFS");
IndexedFaceSet36->setCreaseAngle(0.5);
IndexedFaceSet36->setSolid(False);
IndexedFaceSet36->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
CColorRGBA* ColorRGBA37 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA37->setDEF("HAnimSiteColorRGBA");
ColorRGBA37->setColor(new float[24]{1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
IndexedFaceSet36->setColor(*ColorRGBA37);

CCoordinate* Coordinate38 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate38->setPoint(new float[18]{0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
IndexedFaceSet36->setCoord(*Coordinate38);

Shape35->setGeometry(IndexedFaceSet36);

CAppearance* Appearance39 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material40 = (CMaterial *)(m_pScene.createNode("Material"));
Material40->setDiffuseColor(new float[3]{1,1,0});
Material40->setTransparency(0.3);
Appearance39->setMaterial(*Material40);

Shape35->setAppearance(*Appearance39);

Transform34->addChild(*Shape35);

Transform18->addChildren(*Transform34);

Group17->addChildren(*Transform18);

group->addChildren(*Group17);

CNavigationInfo* NavigationInfo41 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo41->setSpeed(1.5);
group->addChildren(*NavigationInfo41);

CViewpoint* Viewpoint42 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint42->setDescription("default");
group->addChildren(*Viewpoint42);

CHAnimHumanoid* HAnimHumanoid43 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid43->setName("HAnim");
HAnimHumanoid43->setDEF("hanim_HAnim");
HAnimHumanoid43->setInfo(new CString[1]{"humanoidVersion=2.0"}, 1);
HAnimHumanoid43->setVersion("2.0");
//</LOD>
CCoordinate* Coordinate44 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate44->setUSE("TheSkinCoord");
HAnimHumanoid43->setSkinCoord(*Coordinate44);

CHAnimJoint* HAnimJoint45 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint45->setName("humanoid_root");
HAnimJoint45->setDEF("hanim_humanoid_root");
HAnimJoint45->setCenter(new float[3]{0,0.824,0.0277});
HAnimJoint45->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint45->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment46 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment46->setName("sacrum");
HAnimSegment46->setDEF("hanim_sacrum");
CTransform* Transform47 = (CTransform *)(m_pScene.createNode("Transform"));
Transform47->setTranslation(new float[3]{0,0.824,0.0277});
CTransform* Transform48 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape49 = (CShape *)(m_pScene.createNode("Shape"));
Shape49->setUSE("HAnimJointShape");
Transform48->addChild(*Shape49);

Transform47->addChildren(*Transform48);

HAnimSegment46->addChildren(*Transform47);

CShape* Shape50 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet51 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet51->setVertexCount(new int[1]{2});
CCoordinate* Coordinate52 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate52->setPoint(new float[6]{0,0.824,0.0277,0,0.9149,0.0016});
LineSet51->setCoord(*Coordinate52);

//from humanoid_root to sacroiliac vertices 2
CColorRGBA* ColorRGBA53 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA53->setUSE("HAnimSegmentLineColorRGBA");
LineSet51->setColor(*ColorRGBA53);

Shape50->setGeometry(LineSet51);

HAnimSegment46->addChildren(*Shape50);

CHAnimSite* HAnimSite54 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite54->setName("buttocks_standing_wall_contact_point_pt");
HAnimSite54->setDEF("hanim_buttocks_standing_wall_contact_point_pt");
CTouchSensor* TouchSensor55 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor55->setDescription("HAnimSite buttocks_standing_wall_contact_point_pt");
HAnimSite54->addChildren(*TouchSensor55);

CShape* Shape56 = (CShape *)(m_pScene.createNode("Shape"));
Shape56->setUSE("HAnimSiteShape");
HAnimSite54->addChildren(*Shape56);

HAnimSegment46->addChildren(*HAnimSite54);

CHAnimSite* HAnimSite57 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite57->setName("crotch_pt");
HAnimSite57->setDEF("hanim_crotch_pt");
HAnimSite57->setTranslation(new float[3]{0.0034,0.8266,0.0257});
CTouchSensor* TouchSensor58 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor58->setDescription("HAnimSite crotch_pt");
HAnimSite57->addChildren(*TouchSensor58);

CShape* Shape59 = (CShape *)(m_pScene.createNode("Shape"));
Shape59->setUSE("HAnimSiteShape");
HAnimSite57->addChildren(*Shape59);

HAnimSegment46->addChildren(*HAnimSite57);

CHAnimSite* HAnimSite60 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite60->setName("l_asis_pt");
HAnimSite60->setDEF("hanim_l_asis_pt");
HAnimSite60->setTranslation(new float[3]{0.0925,0.9983,0.1052});
CTouchSensor* TouchSensor61 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor61->setDescription("HAnimSite l_asis_pt");
HAnimSite60->addChildren(*TouchSensor61);

CShape* Shape62 = (CShape *)(m_pScene.createNode("Shape"));
Shape62->setUSE("HAnimSiteShape");
HAnimSite60->addChildren(*Shape62);

HAnimSegment46->addChildren(*HAnimSite60);

CHAnimSite* HAnimSite63 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite63->setName("l_iliocristale_pt");
HAnimSite63->setDEF("hanim_l_iliocristale_pt");
HAnimSite63->setTranslation(new float[3]{0.1612,1.0537,0.0008});
CTouchSensor* TouchSensor64 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor64->setDescription("HAnimSite l_iliocristale_pt");
HAnimSite63->addChildren(*TouchSensor64);

CShape* Shape65 = (CShape *)(m_pScene.createNode("Shape"));
Shape65->setUSE("HAnimSiteShape");
HAnimSite63->addChildren(*Shape65);

HAnimSegment46->addChildren(*HAnimSite63);

CHAnimSite* HAnimSite66 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite66->setName("l_psis_pt");
HAnimSite66->setDEF("hanim_l_psis_pt");
HAnimSite66->setTranslation(new float[3]{0.0774,1.019,-0.1151});
CTouchSensor* TouchSensor67 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor67->setDescription("HAnimSite l_psis_pt");
HAnimSite66->addChildren(*TouchSensor67);

CShape* Shape68 = (CShape *)(m_pScene.createNode("Shape"));
Shape68->setUSE("HAnimSiteShape");
HAnimSite66->addChildren(*Shape68);

HAnimSegment46->addChildren(*HAnimSite66);

CHAnimSite* HAnimSite69 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite69->setName("l_trochanterion_pt");
HAnimSite69->setDEF("hanim_l_trochanterion_pt");
HAnimSite69->setTranslation(new float[3]{0.1677,0.8336,0.0303});
CTouchSensor* TouchSensor70 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor70->setDescription("HAnimSite l_trochanterion_pt");
HAnimSite69->addChildren(*TouchSensor70);

CShape* Shape71 = (CShape *)(m_pScene.createNode("Shape"));
Shape71->setUSE("HAnimSiteShape");
HAnimSite69->addChildren(*Shape71);

HAnimSegment46->addChildren(*HAnimSite69);

CHAnimSite* HAnimSite72 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite72->setName("r_asis_pt");
HAnimSite72->setDEF("hanim_r_asis_pt");
HAnimSite72->setTranslation(new float[3]{-0.0887,1.0021,0.1112});
CTouchSensor* TouchSensor73 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor73->setDescription("HAnimSite r_asis_pt");
HAnimSite72->addChildren(*TouchSensor73);

CShape* Shape74 = (CShape *)(m_pScene.createNode("Shape"));
Shape74->setUSE("HAnimSiteShape");
HAnimSite72->addChildren(*Shape74);

HAnimSegment46->addChildren(*HAnimSite72);

CHAnimSite* HAnimSite75 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite75->setName("r_iliocristale_pt");
HAnimSite75->setDEF("hanim_r_iliocristale_pt");
HAnimSite75->setTranslation(new float[3]{-0.1525,1.0628,0.0035});
CTouchSensor* TouchSensor76 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor76->setDescription("HAnimSite r_iliocristale_pt");
HAnimSite75->addChildren(*TouchSensor76);

CShape* Shape77 = (CShape *)(m_pScene.createNode("Shape"));
Shape77->setUSE("HAnimSiteShape");
HAnimSite75->addChildren(*Shape77);

HAnimSegment46->addChildren(*HAnimSite75);

CHAnimSite* HAnimSite78 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite78->setName("r_psis_pt");
HAnimSite78->setDEF("hanim_r_psis_pt");
HAnimSite78->setTranslation(new float[3]{-0.0716,1.019,-0.1138});
CTouchSensor* TouchSensor79 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor79->setDescription("HAnimSite r_psis_pt");
HAnimSite78->addChildren(*TouchSensor79);

CShape* Shape80 = (CShape *)(m_pScene.createNode("Shape"));
Shape80->setUSE("HAnimSiteShape");
HAnimSite78->addChildren(*Shape80);

HAnimSegment46->addChildren(*HAnimSite78);

CHAnimSite* HAnimSite81 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite81->setName("r_trochanterion_pt");
HAnimSite81->setDEF("hanim_r_trochanterion_pt");
HAnimSite81->setTranslation(new float[3]{-0.1689,0.8419,0.0352});
CTouchSensor* TouchSensor82 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor82->setDescription("HAnimSite r_trochanterion_pt");
HAnimSite81->addChildren(*TouchSensor82);

CShape* Shape83 = (CShape *)(m_pScene.createNode("Shape"));
Shape83->setUSE("HAnimSiteShape");
HAnimSite81->addChildren(*Shape83);

HAnimSegment46->addChildren(*HAnimSite81);

CShape* Shape84 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet85 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet85->setVertexCount(new int[1]{2});
CCoordinate* Coordinate86 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate86->setPoint(new float[6]{0,0.824,0.0277,0.0028,1.0568,-0.0776});
LineSet85->setCoord(*Coordinate86);

//from humanoid_root to vl5 vertices 2
CColorRGBA* ColorRGBA87 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA87->setUSE("HAnimSegmentLineColorRGBA");
LineSet85->setColor(*ColorRGBA87);

Shape84->setGeometry(LineSet85);

HAnimSegment46->addChildren(*Shape84);

CHAnimSite* HAnimSite88 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite88->setName("navel_pt");
HAnimSite88->setDEF("hanim_navel_pt");
HAnimSite88->setTranslation(new float[3]{0.0069,1.0966,0.1017});
CTouchSensor* TouchSensor89 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor89->setDescription("HAnimSite navel_pt");
HAnimSite88->addChildren(*TouchSensor89);

CShape* Shape90 = (CShape *)(m_pScene.createNode("Shape"));
Shape90->setUSE("HAnimSiteShape");
HAnimSite88->addChildren(*Shape90);

HAnimSegment46->addChildren(*HAnimSite88);

CHAnimSite* HAnimSite91 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite91->setName("waist_preferred_anterior_pt");
HAnimSite91->setDEF("hanim_waist_preferred_anterior_pt");
CTouchSensor* TouchSensor92 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor92->setDescription("HAnimSite waist_preferred_anterior_pt");
HAnimSite91->addChildren(*TouchSensor92);

CShape* Shape93 = (CShape *)(m_pScene.createNode("Shape"));
Shape93->setUSE("HAnimSiteShape");
HAnimSite91->addChildren(*Shape93);

HAnimSegment46->addChildren(*HAnimSite91);

CHAnimSite* HAnimSite94 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite94->setName("waist_preferred_posterior_pt");
HAnimSite94->setDEF("hanim_waist_preferred_posterior_pt");
HAnimSite94->setTranslation(new float[3]{0.29,1.0915,-0.1091});
CTouchSensor* TouchSensor95 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor95->setDescription("HAnimSite waist_preferred_posterior_pt");
HAnimSite94->addChildren(*TouchSensor95);

CShape* Shape96 = (CShape *)(m_pScene.createNode("Shape"));
Shape96->setUSE("HAnimSiteShape");
HAnimSite94->addChildren(*Shape96);

HAnimSegment46->addChildren(*HAnimSite94);

HAnimJoint45->addChildren(*HAnimSegment46);

CHAnimJoint* HAnimJoint97 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint97->setName("sacroiliac");
HAnimJoint97->setDEF("hanim_sacroiliac");
HAnimJoint97->setCenter(new float[3]{0,0.9149,0.0016});
HAnimJoint97->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint97->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment98 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment98->setName("pelvis");
HAnimSegment98->setDEF("hanim_pelvis");
CTransform* Transform99 = (CTransform *)(m_pScene.createNode("Transform"));
Transform99->setTranslation(new float[3]{0,0.9149,0.0016});
CTransform* Transform100 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape101 = (CShape *)(m_pScene.createNode("Shape"));
Shape101->setUSE("HAnimJointShape");
Transform100->addChild(*Shape101);

Transform99->addChildren(*Transform100);

HAnimSegment98->addChildren(*Transform99);

CShape* Shape102 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet103 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet103->setVertexCount(new int[1]{2});
CCoordinate* Coordinate104 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate104->setPoint(new float[6]{0,0.9149,0.0016,0.0961,0.9124,-0.0001});
LineSet103->setCoord(*Coordinate104);

//from sacroiliac to l_hip vertices 2
CColorRGBA* ColorRGBA105 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA105->setUSE("HAnimSegmentLineColorRGBA");
LineSet103->setColor(*ColorRGBA105);

Shape102->setGeometry(LineSet103);

HAnimSegment98->addChildren(*Shape102);

CHAnimSite* HAnimSite106 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite106->setName("l_femoral_lateral_epicondyles_pt");
HAnimSite106->setDEF("hanim_l_femoral_lateral_epicondyles_pt");
HAnimSite106->setTranslation(new float[3]{0.1598,0.4967,0.0297});
CTouchSensor* TouchSensor107 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor107->setDescription("HAnimSite l_femoral_lateral_epicondyles_pt");
HAnimSite106->addChildren(*TouchSensor107);

CShape* Shape108 = (CShape *)(m_pScene.createNode("Shape"));
Shape108->setUSE("HAnimSiteShape");
HAnimSite106->addChildren(*Shape108);

HAnimSegment98->addChildren(*HAnimSite106);

CHAnimSite* HAnimSite109 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite109->setName("l_femoral_medial_epicondyles_pt");
HAnimSite109->setDEF("hanim_l_femoral_medial_epicondyles_pt");
HAnimSite109->setTranslation(new float[3]{0.0398,0.4946,0.0303});
CTouchSensor* TouchSensor110 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor110->setDescription("HAnimSite l_femoral_medial_epicondyles_pt");
HAnimSite109->addChildren(*TouchSensor110);

CShape* Shape111 = (CShape *)(m_pScene.createNode("Shape"));
Shape111->setUSE("HAnimSiteShape");
HAnimSite109->addChildren(*Shape111);

HAnimSegment98->addChildren(*HAnimSite109);

CHAnimSite* HAnimSite112 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite112->setName("l_knee_crease_pt");
HAnimSite112->setDEF("hanim_l_knee_crease_pt");
HAnimSite112->setTranslation(new float[3]{0.0993,0.4881,-0.0309});
CTouchSensor* TouchSensor113 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor113->setDescription("HAnimSite l_knee_crease_pt");
HAnimSite112->addChildren(*TouchSensor113);

CShape* Shape114 = (CShape *)(m_pScene.createNode("Shape"));
Shape114->setUSE("HAnimSiteShape");
HAnimSite112->addChildren(*Shape114);

HAnimSegment98->addChildren(*HAnimSite112);

CHAnimSite* HAnimSite115 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite115->setName("l_suprapatella_pt");
HAnimSite115->setDEF("hanim_l_suprapatella_pt");
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
CCoordinate* Coordinate120 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate120->setPoint(new float[6]{0,0.9149,0.0016,-0.095,0.9171,0.0029});
LineSet119->setCoord(*Coordinate120);

//from sacroiliac to r_hip vertices 2
CColorRGBA* ColorRGBA121 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA121->setUSE("HAnimSegmentLineColorRGBA");
LineSet119->setColor(*ColorRGBA121);

Shape118->setGeometry(LineSet119);

HAnimSegment98->addChildren(*Shape118);

CHAnimSite* HAnimSite122 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite122->setName("r_femoral_lateral_epicondyles_pt");
HAnimSite122->setDEF("hanim_r_femoral_lateral_epicondyles_pt");
HAnimSite122->setTranslation(new float[3]{-0.1421,0.4992,0.031});
CTouchSensor* TouchSensor123 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor123->setDescription("HAnimSite r_femoral_lateral_epicondyles_pt");
HAnimSite122->addChildren(*TouchSensor123);

CShape* Shape124 = (CShape *)(m_pScene.createNode("Shape"));
Shape124->setUSE("HAnimSiteShape");
HAnimSite122->addChildren(*Shape124);

HAnimSegment98->addChildren(*HAnimSite122);

CHAnimSite* HAnimSite125 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite125->setName("r_femoral_medial_epicondyles_pt");
HAnimSite125->setDEF("hanim_r_femoral_medial_epicondyles_pt");
HAnimSite125->setTranslation(new float[3]{-0.0221,0.5014,0.0289});
CTouchSensor* TouchSensor126 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor126->setDescription("HAnimSite r_femoral_medial_epicondyles_pt");
HAnimSite125->addChildren(*TouchSensor126);

CShape* Shape127 = (CShape *)(m_pScene.createNode("Shape"));
Shape127->setUSE("HAnimSiteShape");
HAnimSite125->addChildren(*Shape127);

HAnimSegment98->addChildren(*HAnimSite125);

CHAnimSite* HAnimSite128 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite128->setName("r_knee_crease_pt");
HAnimSite128->setDEF("hanim_r_knee_crease_pt");
HAnimSite128->setTranslation(new float[3]{-0.0825,0.4932,-0.0326});
CTouchSensor* TouchSensor129 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor129->setDescription("HAnimSite r_knee_crease_pt");
HAnimSite128->addChildren(*TouchSensor129);

CShape* Shape130 = (CShape *)(m_pScene.createNode("Shape"));
Shape130->setUSE("HAnimSiteShape");
HAnimSite128->addChildren(*Shape130);

HAnimSegment98->addChildren(*HAnimSite128);

CHAnimSite* HAnimSite131 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite131->setName("r_suprapatella_pt");
HAnimSite131->setDEF("hanim_r_suprapatella_pt");
CTouchSensor* TouchSensor132 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor132->setDescription("HAnimSite r_suprapatella_pt");
HAnimSite131->addChildren(*TouchSensor132);

CShape* Shape133 = (CShape *)(m_pScene.createNode("Shape"));
Shape133->setUSE("HAnimSiteShape");
HAnimSite131->addChildren(*Shape133);

HAnimSegment98->addChildren(*HAnimSite131);

HAnimJoint97->addChildren(*HAnimSegment98);

CHAnimJoint* HAnimJoint134 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint134->setName("l_hip");
HAnimJoint134->setDEF("hanim_l_hip");
HAnimJoint134->setCenter(new float[3]{0.0961,0.9124,-0.0001});
HAnimJoint134->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint134->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment135 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment135->setName("l_thigh");
HAnimSegment135->setDEF("hanim_l_thigh");
CTransform* Transform136 = (CTransform *)(m_pScene.createNode("Transform"));
Transform136->setTranslation(new float[3]{0.0961,0.9124,-0.0001});
CTransform* Transform137 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape138 = (CShape *)(m_pScene.createNode("Shape"));
Shape138->setUSE("HAnimJointShape");
Transform137->addChild(*Shape138);

Transform136->addChildren(*Transform137);

HAnimSegment135->addChildren(*Transform136);

CShape* Shape139 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet140 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet140->setVertexCount(new int[1]{2});
CCoordinate* Coordinate141 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate141->setPoint(new float[6]{0.0961,0.9124,-0.0001,0.104,0.4867,0.0308});
LineSet140->setCoord(*Coordinate141);

//from l_hip to l_knee vertices 2
CColorRGBA* ColorRGBA142 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA142->setUSE("HAnimSegmentLineColorRGBA");
LineSet140->setColor(*ColorRGBA142);

Shape139->setGeometry(LineSet140);

HAnimSegment135->addChildren(*Shape139);

CHAnimSite* HAnimSite143 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite143->setName("l_lateral_malleolus_pt");
HAnimSite143->setDEF("hanim_l_lateral_malleolus_pt");
HAnimSite143->setTranslation(new float[3]{0.1308,0.0597,-0.1032});
CTouchSensor* TouchSensor144 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor144->setDescription("HAnimSite l_lateral_malleolus_pt");
HAnimSite143->addChildren(*TouchSensor144);

CShape* Shape145 = (CShape *)(m_pScene.createNode("Shape"));
Shape145->setUSE("HAnimSiteShape");
HAnimSite143->addChildren(*Shape145);

HAnimSegment135->addChildren(*HAnimSite143);

CHAnimSite* HAnimSite146 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite146->setName("l_medial_malleolus_pt");
HAnimSite146->setDEF("hanim_l_medial_malleolus_pt");
HAnimSite146->setTranslation(new float[3]{0.089,0.0716,-0.0881});
CTouchSensor* TouchSensor147 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor147->setDescription("HAnimSite l_medial_malleolus_pt");
HAnimSite146->addChildren(*TouchSensor147);

CShape* Shape148 = (CShape *)(m_pScene.createNode("Shape"));
Shape148->setUSE("HAnimSiteShape");
HAnimSite146->addChildren(*Shape148);

HAnimSegment135->addChildren(*HAnimSite146);

CHAnimSite* HAnimSite149 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite149->setName("l_tibiale_pt");
HAnimSite149->setDEF("hanim_l_tibiale_pt");
CTouchSensor* TouchSensor150 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor150->setDescription("HAnimSite l_tibiale_pt");
HAnimSite149->addChildren(*TouchSensor150);

CShape* Shape151 = (CShape *)(m_pScene.createNode("Shape"));
Shape151->setUSE("HAnimSiteShape");
HAnimSite149->addChildren(*Shape151);

HAnimSegment135->addChildren(*HAnimSite149);

HAnimJoint134->addChildren(*HAnimSegment135);

CHAnimJoint* HAnimJoint152 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint152->setName("l_knee");
HAnimJoint152->setDEF("hanim_l_knee");
HAnimJoint152->setCenter(new float[3]{0.104,0.4867,0.0308});
HAnimJoint152->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint152->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment153 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment153->setName("l_calf");
HAnimSegment153->setDEF("hanim_l_calf");
CTransform* Transform154 = (CTransform *)(m_pScene.createNode("Transform"));
Transform154->setTranslation(new float[3]{0.104,0.4867,0.0308});
CTransform* Transform155 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape156 = (CShape *)(m_pScene.createNode("Shape"));
Shape156->setUSE("HAnimJointShape");
Transform155->addChild(*Shape156);

Transform154->addChildren(*Transform155);

HAnimSegment153->addChildren(*Transform154);

CShape* Shape157 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet158 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet158->setVertexCount(new int[1]{2});
CCoordinate* Coordinate159 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate159->setPoint(new float[6]{0.104,0.4867,0.0308,0.1101,0.0656,-0.0736});
LineSet158->setCoord(*Coordinate159);

//from l_knee to l_talocrural vertices 2
CColorRGBA* ColorRGBA160 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA160->setUSE("HAnimSegmentLineColorRGBA");
LineSet158->setColor(*ColorRGBA160);

Shape157->setGeometry(LineSet158);

HAnimSegment153->addChildren(*Shape157);

CHAnimSite* HAnimSite161 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite161->setName("l_calcaneus_posterior_pt");
HAnimSite161->setDEF("hanim_l_calcaneus_posterior_pt");
HAnimSite161->setTranslation(new float[3]{0.0974,0.0259,-0.1171});
CTouchSensor* TouchSensor162 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor162->setDescription("HAnimSite l_calcaneus_posterior_pt");
HAnimSite161->addChildren(*TouchSensor162);

CShape* Shape163 = (CShape *)(m_pScene.createNode("Shape"));
Shape163->setUSE("HAnimSiteShape");
HAnimSite161->addChildren(*Shape163);

HAnimSegment153->addChildren(*HAnimSite161);

CHAnimSite* HAnimSite164 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite164->setName("l_sphyrion_pt");
HAnimSite164->setDEF("hanim_l_sphyrion_pt");
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
HAnimJoint167->setName("l_talocrural");
HAnimJoint167->setDEF("hanim_l_talocrural");
HAnimJoint167->setCenter(new float[3]{0.1101,0.0656,-0.0736});
HAnimJoint167->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint167->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment168 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment168->setName("l_talus");
HAnimSegment168->setDEF("hanim_l_talus");
CTransform* Transform169 = (CTransform *)(m_pScene.createNode("Transform"));
Transform169->setScale(new float[3]{0.15,0.15,0.15});
Transform169->setTranslation(new float[3]{0.08,0.06,-0.025});
Transform169->setRotation(new float[4]{1,0,0,-1.57});
//Transform left foot
CTransform* Transform170 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform left foot
CShape* Shape171 = (CShape *)(m_pScene.createNode("Shape"));
Shape171->setUSE("HAnimJointShape");
Transform170->addChild(*Shape171);

Transform169->addChildren(*Transform170);

HAnimSegment168->addChildren(*Transform169);

CShape* Shape172 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet173 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet173->setVertexCount(new int[1]{2});
CCoordinate* Coordinate174 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate174->setPoint(new float[6]{0.1101,0.0656,-0.0736,3.4715,0.0374,0.6807});
LineSet173->setCoord(*Coordinate174);

//from l_talocrural to l_talocalcaneonavicular vertices 2
CColorRGBA* ColorRGBA175 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA175->setUSE("HAnimSegmentLineColorRGBA");
LineSet173->setColor(*ColorRGBA175);

Shape172->setGeometry(LineSet173);

HAnimSegment168->addChildren(*Shape172);

CShape* Shape176 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet177 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet177->setVertexCount(new int[1]{2});
CCoordinate* Coordinate178 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate178->setPoint(new float[6]{0.1101,0.0656,-0.0736,3.9515,0.0653,-0.6895});
LineSet177->setCoord(*Coordinate178);

//from l_talocrural to l_calcaneocuboid vertices 2
CColorRGBA* ColorRGBA179 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA179->setUSE("HAnimSegmentLineColorRGBA");
LineSet177->setColor(*ColorRGBA179);

Shape176->setGeometry(LineSet177);

HAnimSegment168->addChildren(*Shape176);

HAnimJoint167->addChildren(*HAnimSegment168);

CHAnimJoint* HAnimJoint180 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint180->setName("l_talocalcaneonavicular");
HAnimJoint180->setDEF("hanim_l_talocalcaneonavicular");
HAnimJoint180->setCenter(new float[3]{3.4715,0.0374,0.6807});
HAnimJoint180->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint180->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment181 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment181->setName("l_navicular");
HAnimSegment181->setDEF("hanim_l_navicular");
CTransform* Transform182 = (CTransform *)(m_pScene.createNode("Transform"));
Transform182->setTranslation(new float[3]{3.4715,0.0374,0.6807});
CTransform* Transform183 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape184 = (CShape *)(m_pScene.createNode("Shape"));
Shape184->setUSE("HAnimJointShape");
Transform183->addChild(*Shape184);

Transform182->addChildren(*Transform183);

HAnimSegment181->addChildren(*Transform182);

CShape* Shape185 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet186 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet186->setVertexCount(new int[1]{2});
CCoordinate* Coordinate187 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate187->setPoint(new float[6]{3.4715,0.0374,0.6807,2.9855,0.0311,1.2819});
LineSet186->setCoord(*Coordinate187);

//from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 2
CColorRGBA* ColorRGBA188 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA188->setUSE("HAnimSegmentLineColorRGBA");
LineSet186->setColor(*ColorRGBA188);

Shape185->setGeometry(LineSet186);

HAnimSegment181->addChildren(*Shape185);

CShape* Shape189 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet190 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet190->setVertexCount(new int[1]{2});
CCoordinate* Coordinate191 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate191->setPoint(new float[6]{3.4715,0.0374,0.6807,3.6105,0.033,1.4168});
LineSet190->setCoord(*Coordinate191);

//from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 2
CColorRGBA* ColorRGBA192 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA192->setUSE("HAnimSegmentLineColorRGBA");
LineSet190->setColor(*ColorRGBA192);

Shape189->setGeometry(LineSet190);

HAnimSegment181->addChildren(*Shape189);

CShape* Shape193 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet194 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet194->setVertexCount(new int[1]{2});
CCoordinate* Coordinate195 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate195->setPoint(new float[6]{3.4715,0.0374,0.6807,4.1235,0.0328,1.3453});
LineSet194->setCoord(*Coordinate195);

//from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 2
CColorRGBA* ColorRGBA196 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA196->setUSE("HAnimSegmentLineColorRGBA");
LineSet194->setColor(*ColorRGBA196);

Shape193->setGeometry(LineSet194);

HAnimSegment181->addChildren(*Shape193);

HAnimJoint180->addChildren(*HAnimSegment181);

CHAnimJoint* HAnimJoint197 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint197->setName("l_cuneonavicular_1");
HAnimJoint197->setDEF("hanim_l_cuneonavicular_1");
HAnimJoint197->setCenter(new float[3]{2.9855,0.0311,1.2819});
HAnimJoint197->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint197->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment198 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment198->setName("l_cuneiform_1");
HAnimSegment198->setDEF("hanim_l_cuneiform_1");
CTransform* Transform199 = (CTransform *)(m_pScene.createNode("Transform"));
Transform199->setTranslation(new float[3]{2.9855,0.0311,1.2819});
CTransform* Transform200 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape201 = (CShape *)(m_pScene.createNode("Shape"));
Shape201->setUSE("HAnimJointShape");
Transform200->addChild(*Shape201);

Transform199->addChildren(*Transform200);

HAnimSegment198->addChildren(*Transform199);

CShape* Shape202 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet203 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet203->setVertexCount(new int[1]{2});
CCoordinate* Coordinate204 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate204->setPoint(new float[6]{2.9855,0.0311,1.2819,2.8635,0.0194,2.4285});
LineSet203->setCoord(*Coordinate204);

//from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 2
CColorRGBA* ColorRGBA205 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA205->setUSE("HAnimSegmentLineColorRGBA");
LineSet203->setColor(*ColorRGBA205);

Shape202->setGeometry(LineSet203);

HAnimSegment198->addChildren(*Shape202);

HAnimJoint197->addChildren(*HAnimSegment198);

CHAnimJoint* HAnimJoint206 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint206->setName("l_tarsometatarsal_1");
HAnimJoint206->setDEF("hanim_l_tarsometatarsal_1");
HAnimJoint206->setCenter(new float[3]{2.8635,0.0194,2.4285});
HAnimJoint206->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint206->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment207 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment207->setName("l_metatarsal_1");
HAnimSegment207->setDEF("hanim_l_metatarsal_1");
CTransform* Transform208 = (CTransform *)(m_pScene.createNode("Transform"));
Transform208->setTranslation(new float[3]{2.8635,0.0194,2.4285});
CTransform* Transform209 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape210 = (CShape *)(m_pScene.createNode("Shape"));
Shape210->setUSE("HAnimJointShape");
Transform209->addChild(*Shape210);

Transform208->addChildren(*Transform209);

HAnimSegment207->addChildren(*Transform208);

CShape* Shape211 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet212 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet212->setVertexCount(new int[1]{2});
CCoordinate* Coordinate213 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate213->setPoint(new float[6]{2.8635,0.0194,2.4285,2.7525,0.0077,4.6255});
LineSet212->setCoord(*Coordinate213);

//from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 2
CColorRGBA* ColorRGBA214 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA214->setUSE("HAnimSegmentLineColorRGBA");
LineSet212->setColor(*ColorRGBA214);

Shape211->setGeometry(LineSet212);

HAnimSegment207->addChildren(*Shape211);

CHAnimSite* HAnimSite215 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite215->setName("l_metatarsal_phalanx_1_pt");
HAnimSite215->setDEF("hanim_l_metatarsal_phalanx_1_pt");
CTouchSensor* TouchSensor216 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor216->setDescription("HAnimSite l_metatarsal_phalanx_1_pt");
HAnimSite215->addChildren(*TouchSensor216);

CShape* Shape217 = (CShape *)(m_pScene.createNode("Shape"));
Shape217->setUSE("HAnimSiteShape");
HAnimSite215->addChildren(*Shape217);

HAnimSegment207->addChildren(*HAnimSite215);

HAnimJoint206->addChildren(*HAnimSegment207);

CHAnimJoint* HAnimJoint218 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint218->setName("l_metatarsophalangeal_1");
HAnimJoint218->setDEF("hanim_l_metatarsophalangeal_1");
HAnimJoint218->setCenter(new float[3]{2.7525,0.0077,4.6255});
HAnimJoint218->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint218->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment219 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment219->setName("l_tarsal_proximal_phalanx_1");
HAnimSegment219->setDEF("hanim_l_tarsal_proximal_phalanx_1");
CTransform* Transform220 = (CTransform *)(m_pScene.createNode("Transform"));
Transform220->setTranslation(new float[3]{2.7525,0.0077,4.6255});
CTransform* Transform221 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape222 = (CShape *)(m_pScene.createNode("Shape"));
Shape222->setUSE("HAnimJointShape");
Transform221->addChild(*Shape222);

Transform220->addChildren(*Transform221);

HAnimSegment219->addChildren(*Transform220);

CShape* Shape223 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet224 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet224->setVertexCount(new int[1]{2});
CCoordinate* Coordinate225 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate225->setPoint(new float[6]{2.7525,0.0077,4.6255,2.7525,0.0077,4.6255});
LineSet224->setCoord(*Coordinate225);

//from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 2
CColorRGBA* ColorRGBA226 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA226->setUSE("HAnimSegmentLineColorRGBA");
LineSet224->setColor(*ColorRGBA226);

Shape223->setGeometry(LineSet224);

HAnimSegment219->addChildren(*Shape223);

CHAnimSite* HAnimSite227 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite227->setName("l_tarsal_distal_phalanx_1_tip");
HAnimSite227->setDEF("hanim_l_tarsal_distal_phalanx_1_tip");
CTouchSensor* TouchSensor228 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor228->setDescription("HAnimSite l_tarsal_distal_phalanx_1_tip");
HAnimSite227->addChildren(*TouchSensor228);

CShape* Shape229 = (CShape *)(m_pScene.createNode("Shape"));
Shape229->setUSE("HAnimSiteShape");
HAnimSite227->addChildren(*Shape229);

HAnimSegment219->addChildren(*HAnimSite227);

HAnimJoint218->addChildren(*HAnimSegment219);

CHAnimJoint* HAnimJoint230 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint230->setName("l_tarsal_interphalangeal_1");
HAnimJoint230->setDEF("hanim_l_tarsal_interphalangeal_1");
HAnimJoint230->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint230->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint218->addChildren(*HAnimJoint230);

HAnimJoint206->addChildren(*HAnimJoint218);

HAnimJoint197->addChildren(*HAnimJoint206);

HAnimJoint180->addChildren(*HAnimJoint197);

CHAnimJoint* HAnimJoint231 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint231->setName("l_cuneonavicular_2");
HAnimJoint231->setDEF("hanim_l_cuneonavicular_2");
HAnimJoint231->setCenter(new float[3]{3.6105,0.033,1.4168});
HAnimJoint231->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint231->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment232 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment232->setName("l_cuneiform_2");
HAnimSegment232->setDEF("hanim_l_cuneiform_2");
CTransform* Transform233 = (CTransform *)(m_pScene.createNode("Transform"));
Transform233->setTranslation(new float[3]{3.6105,0.033,1.4168});
CTransform* Transform234 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape235 = (CShape *)(m_pScene.createNode("Shape"));
Shape235->setUSE("HAnimJointShape");
Transform234->addChild(*Shape235);

Transform233->addChildren(*Transform234);

HAnimSegment232->addChildren(*Transform233);

CShape* Shape236 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet237 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet237->setVertexCount(new int[1]{2});
CCoordinate* Coordinate238 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate238->setPoint(new float[6]{3.6105,0.033,1.4168,3.5555,0.0232,2.2895});
LineSet237->setCoord(*Coordinate238);

//from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 2
CColorRGBA* ColorRGBA239 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA239->setUSE("HAnimSegmentLineColorRGBA");
LineSet237->setColor(*ColorRGBA239);

Shape236->setGeometry(LineSet237);

HAnimSegment232->addChildren(*Shape236);

HAnimJoint231->addChildren(*HAnimSegment232);

CHAnimJoint* HAnimJoint240 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint240->setName("l_tarsometatarsal_2");
HAnimJoint240->setDEF("hanim_l_tarsometatarsal_2");
HAnimJoint240->setCenter(new float[3]{3.5555,0.0232,2.2895});
HAnimJoint240->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint240->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment241 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment241->setName("l_metatarsal_2");
HAnimSegment241->setDEF("hanim_l_metatarsal_2");
CTransform* Transform242 = (CTransform *)(m_pScene.createNode("Transform"));
Transform242->setTranslation(new float[3]{3.5555,0.0232,2.2895});
CTransform* Transform243 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape244 = (CShape *)(m_pScene.createNode("Shape"));
Shape244->setUSE("HAnimJointShape");
Transform243->addChild(*Shape244);

Transform242->addChildren(*Transform243);

HAnimSegment241->addChildren(*Transform242);

CShape* Shape245 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet246 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet246->setVertexCount(new int[1]{2});
CCoordinate* Coordinate247 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate247->setPoint(new float[6]{3.5555,0.0232,2.2895,3.6595,0.0085,4.8125});
LineSet246->setCoord(*Coordinate247);

//from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2
CColorRGBA* ColorRGBA248 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA248->setUSE("HAnimSegmentLineColorRGBA");
LineSet246->setColor(*ColorRGBA248);

Shape245->setGeometry(LineSet246);

HAnimSegment241->addChildren(*Shape245);

HAnimJoint240->addChildren(*HAnimSegment241);

CHAnimJoint* HAnimJoint249 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint249->setName("l_metatarsophalangeal_2");
HAnimJoint249->setDEF("hanim_l_metatarsophalangeal_2");
HAnimJoint249->setCenter(new float[3]{3.6595,0.0085,4.8125});
HAnimJoint249->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint249->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment250 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment250->setName("l_tarsal_proximal_phalanx_2");
HAnimSegment250->setDEF("hanim_l_tarsal_proximal_phalanx_2");
CTransform* Transform251 = (CTransform *)(m_pScene.createNode("Transform"));
Transform251->setTranslation(new float[3]{3.6595,0.0085,4.8125});
CTransform* Transform252 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape253 = (CShape *)(m_pScene.createNode("Shape"));
Shape253->setUSE("HAnimJointShape");
Transform252->addChild(*Shape253);

Transform251->addChildren(*Transform252);

HAnimSegment250->addChildren(*Transform251);

CShape* Shape254 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet255 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet255->setVertexCount(new int[1]{2});
CCoordinate* Coordinate256 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate256->setPoint(new float[6]{3.6595,0.0085,4.8125,3.7385,0.0054,5.5315});
LineSet255->setCoord(*Coordinate256);

//from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA257 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA257->setUSE("HAnimSegmentLineColorRGBA");
LineSet255->setColor(*ColorRGBA257);

Shape254->setGeometry(LineSet255);

HAnimSegment250->addChildren(*Shape254);

HAnimJoint249->addChildren(*HAnimSegment250);

CHAnimJoint* HAnimJoint258 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint258->setName("l_tarsal_proximal_interphalangeal_2");
HAnimJoint258->setDEF("hanim_l_tarsal_proximal_interphalangeal_2");
HAnimJoint258->setCenter(new float[3]{3.7385,0.0054,5.5315});
HAnimJoint258->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint258->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment259 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment259->setName("l_tarsal_middle_phalanx_2");
HAnimSegment259->setDEF("hanim_l_tarsal_middle_phalanx_2");
CTransform* Transform260 = (CTransform *)(m_pScene.createNode("Transform"));
Transform260->setTranslation(new float[3]{3.7385,0.0054,5.5315});
CTransform* Transform261 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape262 = (CShape *)(m_pScene.createNode("Shape"));
Shape262->setUSE("HAnimJointShape");
Transform261->addChild(*Shape262);

Transform260->addChildren(*Transform261);

HAnimSegment259->addChildren(*Transform260);

CShape* Shape263 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet264 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet264->setVertexCount(new int[1]{2});
CCoordinate* Coordinate265 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate265->setPoint(new float[6]{3.7385,0.0054,5.5315,3.7385,0.0017,5.9505});
LineSet264->setCoord(*Coordinate265);

//from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA266 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA266->setUSE("HAnimSegmentLineColorRGBA");
LineSet264->setColor(*ColorRGBA266);

Shape263->setGeometry(LineSet264);

HAnimSegment259->addChildren(*Shape263);

CHAnimSite* HAnimSite267 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite267->setName("l_tarsal_distal_phalanx_2_tip");
HAnimSite267->setDEF("hanim_l_tarsal_distal_phalanx_2_tip");
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
HAnimJoint270->setName("l_tarsal_distal_interphalangeal_2");
HAnimJoint270->setDEF("hanim_l_tarsal_distal_interphalangeal_2");
HAnimJoint270->setCenter(new float[3]{3.7385,0.0017,5.9505});
HAnimJoint270->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint270->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint258->addChildren(*HAnimJoint270);

HAnimJoint249->addChildren(*HAnimJoint258);

HAnimJoint240->addChildren(*HAnimJoint249);

HAnimJoint231->addChildren(*HAnimJoint240);

HAnimJoint180->addChildren(*HAnimJoint231);

CHAnimJoint* HAnimJoint271 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint271->setName("l_cuneonavicular_3");
HAnimJoint271->setDEF("hanim_l_cuneonavicular_3");
HAnimJoint271->setCenter(new float[3]{4.1235,0.0328,1.3453});
HAnimJoint271->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint271->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment272 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment272->setName("l_cuneiform_3");
HAnimSegment272->setDEF("hanim_l_cuneiform_3");
CTransform* Transform273 = (CTransform *)(m_pScene.createNode("Transform"));
Transform273->setTranslation(new float[3]{4.1235,0.0328,1.3453});
CTransform* Transform274 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape275 = (CShape *)(m_pScene.createNode("Shape"));
Shape275->setUSE("HAnimJointShape");
Transform274->addChild(*Shape275);

Transform273->addChildren(*Transform274);

HAnimSegment272->addChildren(*Transform273);

CShape* Shape276 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet277 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet277->setVertexCount(new int[1]{2});
CCoordinate* Coordinate278 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate278->setPoint(new float[6]{4.1235,0.0328,1.3453,3.7385,0.0017,5.9505});
LineSet277->setCoord(*Coordinate278);

//from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 2
CColorRGBA* ColorRGBA279 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA279->setUSE("HAnimSegmentLineColorRGBA");
LineSet277->setColor(*ColorRGBA279);

Shape276->setGeometry(LineSet277);

HAnimSegment272->addChildren(*Shape276);

HAnimJoint271->addChildren(*HAnimSegment272);

CHAnimJoint* HAnimJoint280 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint280->setName("l_tarsometatarsal_3");
HAnimJoint280->setDEF("hanim_l_tarsometatarsal_3");
HAnimJoint280->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint280->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment281 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment281->setName("l_metatarsal_3");
HAnimSegment281->setDEF("hanim_l_metatarsal_3");
CTransform* Transform282 = (CTransform *)(m_pScene.createNode("Transform"));
Transform282->setTranslation(new float[3]{4.1235,0.0328,1.3453});
CTransform* Transform283 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape284 = (CShape *)(m_pScene.createNode("Shape"));
Shape284->setUSE("HAnimJointShape");
Transform283->addChild(*Shape284);

Transform282->addChildren(*Transform283);

HAnimSegment281->addChildren(*Transform282);

CShape* Shape285 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet286 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet286->setVertexCount(new int[1]{2});
CCoordinate* Coordinate287 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate287->setPoint(new float[3]{4.2795,0.0086,4.7055});
LineSet286->setCoord(*Coordinate287);

//from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 1
CColorRGBA* ColorRGBA288 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA288->setUSE("HAnimSegmentLineColorRGBA");
LineSet286->setColor(*ColorRGBA288);

Shape285->setGeometry(LineSet286);

HAnimSegment281->addChildren(*Shape285);

HAnimJoint280->addChildren(*HAnimSegment281);

CHAnimJoint* HAnimJoint289 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint289->setName("l_metatarsophalangeal_3");
HAnimJoint289->setDEF("hanim_l_metatarsophalangeal_3");
HAnimJoint289->setCenter(new float[3]{4.2795,0.0086,4.7055});
HAnimJoint289->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint289->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment290 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment290->setName("l_tarsal_proximal_phalanx_3");
HAnimSegment290->setDEF("hanim_l_tarsal_proximal_phalanx_3");
CTransform* Transform291 = (CTransform *)(m_pScene.createNode("Transform"));
Transform291->setTranslation(new float[3]{4.2795,0.0086,4.7055});
CTransform* Transform292 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape293 = (CShape *)(m_pScene.createNode("Shape"));
Shape293->setUSE("HAnimJointShape");
Transform292->addChild(*Shape293);

Transform291->addChildren(*Transform292);

HAnimSegment290->addChildren(*Transform291);

CShape* Shape294 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet295 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet295->setVertexCount(new int[1]{2});
CCoordinate* Coordinate296 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate296->setPoint(new float[6]{4.2795,0.0086,4.7055,4.3855,0.0044,5.3745});
LineSet295->setCoord(*Coordinate296);

//from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA297 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA297->setUSE("HAnimSegmentLineColorRGBA");
LineSet295->setColor(*ColorRGBA297);

Shape294->setGeometry(LineSet295);

HAnimSegment290->addChildren(*Shape294);

HAnimJoint289->addChildren(*HAnimSegment290);

CHAnimJoint* HAnimJoint298 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint298->setName("l_tarsal_proximal_interphalangeal_3");
HAnimJoint298->setDEF("hanim_l_tarsal_proximal_interphalangeal_3");
HAnimJoint298->setCenter(new float[3]{4.3855,0.0044,5.3745});
HAnimJoint298->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint298->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment299 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment299->setName("l_tarsal_middle_phalanx_3");
HAnimSegment299->setDEF("hanim_l_tarsal_middle_phalanx_3");
CTransform* Transform300 = (CTransform *)(m_pScene.createNode("Transform"));
Transform300->setTranslation(new float[3]{4.3855,0.0044,5.3745});
CTransform* Transform301 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape302 = (CShape *)(m_pScene.createNode("Shape"));
Shape302->setUSE("HAnimJointShape");
Transform301->addChild(*Shape302);

Transform300->addChildren(*Transform301);

HAnimSegment299->addChildren(*Transform300);

CShape* Shape303 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet304 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet304->setVertexCount(new int[1]{2});
CCoordinate* Coordinate305 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate305->setPoint(new float[6]{4.3855,0.0044,5.3745,4.4545,0.0017,5.7845});
LineSet304->setCoord(*Coordinate305);

//from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA306 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA306->setUSE("HAnimSegmentLineColorRGBA");
LineSet304->setColor(*ColorRGBA306);

Shape303->setGeometry(LineSet304);

HAnimSegment299->addChildren(*Shape303);

CHAnimSite* HAnimSite307 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite307->setName("l_tarsal_distal_phalanx_3_tip");
HAnimSite307->setDEF("hanim_l_tarsal_distal_phalanx_3_tip");
CTouchSensor* TouchSensor308 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor308->setDescription("HAnimSite l_tarsal_distal_phalanx_3_tip");
HAnimSite307->addChildren(*TouchSensor308);

CShape* Shape309 = (CShape *)(m_pScene.createNode("Shape"));
Shape309->setUSE("HAnimSiteShape");
HAnimSite307->addChildren(*Shape309);

HAnimSegment299->addChildren(*HAnimSite307);

HAnimJoint298->addChildren(*HAnimSegment299);

CHAnimJoint* HAnimJoint310 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint310->setName("l_tarsal_distal_interphalangeal_3");
HAnimJoint310->setDEF("hanim_l_tarsal_distal_interphalangeal_3");
HAnimJoint310->setCenter(new float[3]{4.4545,0.0017,5.7845});
HAnimJoint310->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint310->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint298->addChildren(*HAnimJoint310);

HAnimJoint289->addChildren(*HAnimJoint298);

HAnimJoint280->addChildren(*HAnimJoint289);

HAnimJoint271->addChildren(*HAnimJoint280);

HAnimJoint180->addChildren(*HAnimJoint271);

HAnimJoint167->addChildren(*HAnimJoint180);

CHAnimJoint* HAnimJoint311 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint311->setName("l_calcaneocuboid");
HAnimJoint311->setDEF("hanim_l_calcaneocuboid");
HAnimJoint311->setCenter(new float[3]{3.9515,0.0653,-0.6895});
HAnimJoint311->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint311->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment312 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment312->setName("l_calcaneus");
HAnimSegment312->setDEF("hanim_l_calcaneus");
CTransform* Transform313 = (CTransform *)(m_pScene.createNode("Transform"));
Transform313->setTranslation(new float[3]{3.9515,0.0653,-0.6895});
CTransform* Transform314 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape315 = (CShape *)(m_pScene.createNode("Shape"));
Shape315->setUSE("HAnimJointShape");
Transform314->addChild(*Shape315);

Transform313->addChildren(*Transform314);

HAnimSegment312->addChildren(*Transform313);

CShape* Shape316 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet317 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet317->setVertexCount(new int[1]{2});
CCoordinate* Coordinate318 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate318->setPoint(new float[6]{3.9515,0.0653,-0.6895,4.9085,0.0353,0.5574});
LineSet317->setCoord(*Coordinate318);

//from l_calcaneocuboid to l_transversetarsal vertices 2
CColorRGBA* ColorRGBA319 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA319->setUSE("HAnimSegmentLineColorRGBA");
LineSet317->setColor(*ColorRGBA319);

Shape316->setGeometry(LineSet317);

HAnimSegment312->addChildren(*Shape316);

HAnimJoint311->addChildren(*HAnimSegment312);

CHAnimJoint* HAnimJoint320 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint320->setName("l_transversetarsal");
HAnimJoint320->setDEF("hanim_l_transversetarsal");
HAnimJoint320->setCenter(new float[3]{4.9085,0.0353,0.5574});
HAnimJoint320->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint320->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment321 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment321->setName("l_cuboid");
HAnimSegment321->setDEF("hanim_l_cuboid");
CTransform* Transform322 = (CTransform *)(m_pScene.createNode("Transform"));
Transform322->setTranslation(new float[3]{4.9085,0.0353,0.5574});
CTransform* Transform323 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape324 = (CShape *)(m_pScene.createNode("Shape"));
Shape324->setUSE("HAnimJointShape");
Transform323->addChild(*Shape324);

Transform322->addChildren(*Transform323);

HAnimSegment321->addChildren(*Transform322);

CShape* Shape325 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet326 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet326->setVertexCount(new int[1]{2});
CCoordinate* Coordinate327 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate327->setPoint(new float[6]{4.9085,0.0353,0.5574,4.7245,0.0211,2.1725});
LineSet326->setCoord(*Coordinate327);

//from l_transversetarsal to l_tarsometatarsal_4 vertices 2
CColorRGBA* ColorRGBA328 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA328->setUSE("HAnimSegmentLineColorRGBA");
LineSet326->setColor(*ColorRGBA328);

Shape325->setGeometry(LineSet326);

HAnimSegment321->addChildren(*Shape325);

CShape* Shape329 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet330 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet330->setVertexCount(new int[1]{2});
CCoordinate* Coordinate331 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate331->setPoint(new float[6]{4.9085,0.0353,0.5574,5.3615,0.0164,2.0085});
LineSet330->setCoord(*Coordinate331);

//from l_transversetarsal to l_tarsometatarsal_5 vertices 2
CColorRGBA* ColorRGBA332 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA332->setUSE("HAnimSegmentLineColorRGBA");
LineSet330->setColor(*ColorRGBA332);

Shape329->setGeometry(LineSet330);

HAnimSegment321->addChildren(*Shape329);

HAnimJoint320->addChildren(*HAnimSegment321);

CHAnimJoint* HAnimJoint333 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint333->setName("l_tarsometatarsal_4");
HAnimJoint333->setDEF("hanim_l_tarsometatarsal_4");
HAnimJoint333->setCenter(new float[3]{4.7245,0.0211,2.1725});
HAnimJoint333->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint333->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment334 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment334->setName("l_metatarsal_4");
HAnimSegment334->setDEF("hanim_l_metatarsal_4");
CTransform* Transform335 = (CTransform *)(m_pScene.createNode("Transform"));
Transform335->setTranslation(new float[3]{4.7245,0.0211,2.1725});
CTransform* Transform336 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape337 = (CShape *)(m_pScene.createNode("Shape"));
Shape337->setUSE("HAnimJointShape");
Transform336->addChild(*Shape337);

Transform335->addChildren(*Transform336);

HAnimSegment334->addChildren(*Transform335);

CShape* Shape338 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet339 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet339->setVertexCount(new int[1]{2});
CCoordinate* Coordinate340 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate340->setPoint(new float[6]{4.7245,0.0211,2.1725,4.8745,0.0076,4.5165});
LineSet339->setCoord(*Coordinate340);

//from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 2
CColorRGBA* ColorRGBA341 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA341->setUSE("HAnimSegmentLineColorRGBA");
LineSet339->setColor(*ColorRGBA341);

Shape338->setGeometry(LineSet339);

HAnimSegment334->addChildren(*Shape338);

HAnimJoint333->addChildren(*HAnimSegment334);

CHAnimJoint* HAnimJoint342 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint342->setName("l_metatarsophalangeal_4");
HAnimJoint342->setDEF("hanim_l_metatarsophalangeal_4");
HAnimJoint342->setCenter(new float[3]{4.8745,0.0076,4.5165});
HAnimJoint342->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint342->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment343 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment343->setName("l_tarsal_proximal_phalanx_4");
HAnimSegment343->setDEF("hanim_l_tarsal_proximal_phalanx_4");
CTransform* Transform344 = (CTransform *)(m_pScene.createNode("Transform"));
Transform344->setTranslation(new float[3]{4.8745,0.0076,4.5165});
CTransform* Transform345 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape346 = (CShape *)(m_pScene.createNode("Shape"));
Shape346->setUSE("HAnimJointShape");
Transform345->addChild(*Shape346);

Transform344->addChildren(*Transform345);

HAnimSegment343->addChildren(*Transform344);

CShape* Shape347 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet348 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet348->setVertexCount(new int[1]{2});
CCoordinate* Coordinate349 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate349->setPoint(new float[6]{4.8745,0.0076,4.5165,5.0655,0.0049,5.1895});
LineSet348->setCoord(*Coordinate349);

//from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA350 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA350->setUSE("HAnimSegmentLineColorRGBA");
LineSet348->setColor(*ColorRGBA350);

Shape347->setGeometry(LineSet348);

HAnimSegment343->addChildren(*Shape347);

HAnimJoint342->addChildren(*HAnimSegment343);

CHAnimJoint* HAnimJoint351 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint351->setName("l_tarsal_proximal_interphalangeal_4");
HAnimJoint351->setDEF("hanim_l_tarsal_proximal_interphalangeal_4");
HAnimJoint351->setCenter(new float[3]{5.0655,0.0049,5.1895});
HAnimJoint351->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint351->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment352 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment352->setName("l_tarsal_middle_phalanx_4");
HAnimSegment352->setDEF("hanim_l_tarsal_middle_phalanx_4");
CTransform* Transform353 = (CTransform *)(m_pScene.createNode("Transform"));
Transform353->setTranslation(new float[3]{5.0655,0.0049,5.1895});
CTransform* Transform354 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape355 = (CShape *)(m_pScene.createNode("Shape"));
Shape355->setUSE("HAnimJointShape");
Transform354->addChild(*Shape355);

Transform353->addChildren(*Transform354);

HAnimSegment352->addChildren(*Transform353);

CShape* Shape356 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet357 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet357->setVertexCount(new int[1]{2});
CCoordinate* Coordinate358 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate358->setPoint(new float[6]{5.0655,0.0049,5.1895,5.1325,0.0011,5.5175});
LineSet357->setCoord(*Coordinate358);

//from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA359 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA359->setUSE("HAnimSegmentLineColorRGBA");
LineSet357->setColor(*ColorRGBA359);

Shape356->setGeometry(LineSet357);

HAnimSegment352->addChildren(*Shape356);

CHAnimSite* HAnimSite360 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite360->setName("l_tarsal_distal_phalanx_4_tip");
HAnimSite360->setDEF("hanim_l_tarsal_distal_phalanx_4_tip");
CTouchSensor* TouchSensor361 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor361->setDescription("HAnimSite l_tarsal_distal_phalanx_4_tip");
HAnimSite360->addChildren(*TouchSensor361);

CShape* Shape362 = (CShape *)(m_pScene.createNode("Shape"));
Shape362->setUSE("HAnimSiteShape");
HAnimSite360->addChildren(*Shape362);

HAnimSegment352->addChildren(*HAnimSite360);

HAnimJoint351->addChildren(*HAnimSegment352);

CHAnimJoint* HAnimJoint363 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint363->setName("l_tarsal_distal_interphalangeal_4");
HAnimJoint363->setDEF("hanim_l_tarsal_distal_interphalangeal_4");
HAnimJoint363->setCenter(new float[3]{5.1325,0.0011,5.5175});
HAnimJoint363->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint363->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint351->addChildren(*HAnimJoint363);

HAnimJoint342->addChildren(*HAnimJoint351);

HAnimJoint333->addChildren(*HAnimJoint342);

HAnimJoint320->addChildren(*HAnimJoint333);

CHAnimJoint* HAnimJoint364 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint364->setName("l_tarsometatarsal_5");
HAnimJoint364->setDEF("hanim_l_tarsometatarsal_5");
HAnimJoint364->setCenter(new float[3]{5.3615,0.0164,2.0085});
HAnimJoint364->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint364->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment365 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment365->setName("l_metatarsal_5");
HAnimSegment365->setDEF("hanim_l_metatarsal_5");
CTransform* Transform366 = (CTransform *)(m_pScene.createNode("Transform"));
Transform366->setTranslation(new float[3]{5.3615,0.0164,2.0085});
CTransform* Transform367 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape368 = (CShape *)(m_pScene.createNode("Shape"));
Shape368->setUSE("HAnimJointShape");
Transform367->addChild(*Shape368);

Transform366->addChildren(*Transform367);

HAnimSegment365->addChildren(*Transform366);

CShape* Shape369 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet370 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet370->setVertexCount(new int[1]{2});
CCoordinate* Coordinate371 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate371->setPoint(new float[6]{5.3615,0.0164,2.0085,5.5055,0.0067,4.3115});
LineSet370->setCoord(*Coordinate371);

//from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 2
CColorRGBA* ColorRGBA372 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA372->setUSE("HAnimSegmentLineColorRGBA");
LineSet370->setColor(*ColorRGBA372);

Shape369->setGeometry(LineSet370);

HAnimSegment365->addChildren(*Shape369);

CHAnimSite* HAnimSite373 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite373->setName("l_metatarsal_phalanx_5_pt");
HAnimSite373->setDEF("hanim_l_metatarsal_phalanx_5_pt");
CTouchSensor* TouchSensor374 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor374->setDescription("HAnimSite l_metatarsal_phalanx_5_pt");
HAnimSite373->addChildren(*TouchSensor374);

CShape* Shape375 = (CShape *)(m_pScene.createNode("Shape"));
Shape375->setUSE("HAnimSiteShape");
HAnimSite373->addChildren(*Shape375);

HAnimSegment365->addChildren(*HAnimSite373);

HAnimJoint364->addChildren(*HAnimSegment365);

CHAnimJoint* HAnimJoint376 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint376->setName("l_metatarsophalangeal_5");
HAnimJoint376->setDEF("hanim_l_metatarsophalangeal_5");
HAnimJoint376->setCenter(new float[3]{5.5055,0.0067,4.3115});
HAnimJoint376->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint376->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment377 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment377->setName("l_tarsal_proximal_phalanx_5");
HAnimSegment377->setDEF("hanim_l_tarsal_proximal_phalanx_5");
CTransform* Transform378 = (CTransform *)(m_pScene.createNode("Transform"));
Transform378->setTranslation(new float[3]{5.5055,0.0067,4.3115});
CTransform* Transform379 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape380 = (CShape *)(m_pScene.createNode("Shape"));
Shape380->setUSE("HAnimJointShape");
Transform379->addChild(*Shape380);

Transform378->addChildren(*Transform379);

HAnimSegment377->addChildren(*Transform378);

CShape* Shape381 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet382 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet382->setVertexCount(new int[1]{2});
CCoordinate* Coordinate383 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate383->setPoint(new float[6]{5.5055,0.0067,4.3115,5.6085,0.003,4.6485});
LineSet382->setCoord(*Coordinate383);

//from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA384 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA384->setUSE("HAnimSegmentLineColorRGBA");
LineSet382->setColor(*ColorRGBA384);

Shape381->setGeometry(LineSet382);

HAnimSegment377->addChildren(*Shape381);

HAnimJoint376->addChildren(*HAnimSegment377);

CHAnimJoint* HAnimJoint385 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint385->setName("l_tarsal_proximal_interphalangeal_5");
HAnimJoint385->setDEF("hanim_l_tarsal_proximal_interphalangeal_5");
HAnimJoint385->setCenter(new float[3]{5.6085,0.003,4.6485});
HAnimJoint385->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint385->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment386 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment386->setName("l_tarsal_middle_phalanx_5");
HAnimSegment386->setDEF("hanim_l_tarsal_middle_phalanx_5");
CTransform* Transform387 = (CTransform *)(m_pScene.createNode("Transform"));
Transform387->setTranslation(new float[3]{5.6085,0.003,4.6485});
CTransform* Transform388 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape389 = (CShape *)(m_pScene.createNode("Shape"));
Shape389->setUSE("HAnimJointShape");
Transform388->addChild(*Shape389);

Transform387->addChildren(*Transform388);

HAnimSegment386->addChildren(*Transform387);

CShape* Shape390 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet391 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet391->setVertexCount(new int[1]{2});
CCoordinate* Coordinate392 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate392->setPoint(new float[6]{5.6085,0.003,4.6485,5.6485,0,4.9925});
LineSet391->setCoord(*Coordinate392);

//from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA393 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA393->setUSE("HAnimSegmentLineColorRGBA");
LineSet391->setColor(*ColorRGBA393);

Shape390->setGeometry(LineSet391);

HAnimSegment386->addChildren(*Shape390);

CHAnimSite* HAnimSite394 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite394->setName("l_tarsal_distal_phalanx_5_tip");
HAnimSite394->setDEF("hanim_l_tarsal_distal_phalanx_5_tip");
CTouchSensor* TouchSensor395 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor395->setDescription("HAnimSite l_tarsal_distal_phalanx_5_tip");
HAnimSite394->addChildren(*TouchSensor395);

CShape* Shape396 = (CShape *)(m_pScene.createNode("Shape"));
Shape396->setUSE("HAnimSiteShape");
HAnimSite394->addChildren(*Shape396);

HAnimSegment386->addChildren(*HAnimSite394);

HAnimJoint385->addChildren(*HAnimSegment386);

CHAnimJoint* HAnimJoint397 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint397->setName("l_tarsal_distal_interphalangeal_5");
HAnimJoint397->setDEF("hanim_l_tarsal_distal_interphalangeal_5");
HAnimJoint397->setCenter(new float[3]{5.6485,0,4.9925});
HAnimJoint397->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint397->setLlimit(new float[3]{0,0,0}, 3);
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
HAnimJoint398->setName("r_hip");
HAnimJoint398->setDEF("hanim_r_hip");
HAnimJoint398->setCenter(new float[3]{-0.095,0.9171,0.0029});
HAnimJoint398->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint398->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment399 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment399->setName("r_thigh");
HAnimSegment399->setDEF("hanim_r_thigh");
CTransform* Transform400 = (CTransform *)(m_pScene.createNode("Transform"));
Transform400->setTranslation(new float[3]{-0.095,0.9171,0.0029});
CTransform* Transform401 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape402 = (CShape *)(m_pScene.createNode("Shape"));
Shape402->setUSE("HAnimJointShape");
Transform401->addChild(*Shape402);

Transform400->addChildren(*Transform401);

HAnimSegment399->addChildren(*Transform400);

CShape* Shape403 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet404 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet404->setVertexCount(new int[1]{2});
CCoordinate* Coordinate405 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate405->setPoint(new float[6]{-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318});
LineSet404->setCoord(*Coordinate405);

//from r_hip to r_knee vertices 2
CColorRGBA* ColorRGBA406 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA406->setUSE("HAnimSegmentLineColorRGBA");
LineSet404->setColor(*ColorRGBA406);

Shape403->setGeometry(LineSet404);

HAnimSegment399->addChildren(*Shape403);

CHAnimSite* HAnimSite407 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite407->setName("r_lateral_malleolus_pt");
HAnimSite407->setDEF("hanim_r_lateral_malleolus_pt");
HAnimSite407->setTranslation(new float[3]{-0.1006,0.0658,-0.1075});
CTouchSensor* TouchSensor408 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor408->setDescription("HAnimSite r_lateral_malleolus_pt");
HAnimSite407->addChildren(*TouchSensor408);

CShape* Shape409 = (CShape *)(m_pScene.createNode("Shape"));
Shape409->setUSE("HAnimSiteShape");
HAnimSite407->addChildren(*Shape409);

HAnimSegment399->addChildren(*HAnimSite407);

CHAnimSite* HAnimSite410 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite410->setName("r_medial_malleolus_pt");
HAnimSite410->setDEF("hanim_r_medial_malleolus_pt");
HAnimSite410->setTranslation(new float[3]{-0.0591,0.076,-0.0928});
CTouchSensor* TouchSensor411 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor411->setDescription("HAnimSite r_medial_malleolus_pt");
HAnimSite410->addChildren(*TouchSensor411);

CShape* Shape412 = (CShape *)(m_pScene.createNode("Shape"));
Shape412->setUSE("HAnimSiteShape");
HAnimSite410->addChildren(*Shape412);

HAnimSegment399->addChildren(*HAnimSite410);

CHAnimSite* HAnimSite413 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite413->setName("r_tibiale_pt");
HAnimSite413->setDEF("hanim_r_tibiale_pt");
CTouchSensor* TouchSensor414 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor414->setDescription("HAnimSite r_tibiale_pt");
HAnimSite413->addChildren(*TouchSensor414);

CShape* Shape415 = (CShape *)(m_pScene.createNode("Shape"));
Shape415->setUSE("HAnimSiteShape");
HAnimSite413->addChildren(*Shape415);

HAnimSegment399->addChildren(*HAnimSite413);

HAnimJoint398->addChildren(*HAnimSegment399);

CHAnimJoint* HAnimJoint416 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint416->setName("r_knee");
HAnimJoint416->setDEF("hanim_r_knee");
HAnimJoint416->setCenter(new float[3]{-0.0867,0.4913,0.0318});
HAnimJoint416->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint416->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment417 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment417->setName("r_calf");
HAnimSegment417->setDEF("hanim_r_calf");
CTransform* Transform418 = (CTransform *)(m_pScene.createNode("Transform"));
Transform418->setTranslation(new float[3]{-0.0867,0.4913,0.0318});
CTransform* Transform419 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape420 = (CShape *)(m_pScene.createNode("Shape"));
Shape420->setUSE("HAnimJointShape");
Transform419->addChild(*Shape420);

Transform418->addChildren(*Transform419);

HAnimSegment417->addChildren(*Transform418);

CShape* Shape421 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet422 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet422->setVertexCount(new int[1]{2});
CCoordinate* Coordinate423 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate423->setPoint(new float[6]{-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766});
LineSet422->setCoord(*Coordinate423);

//from r_knee to r_talocrural vertices 2
CColorRGBA* ColorRGBA424 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA424->setUSE("HAnimSegmentLineColorRGBA");
LineSet422->setColor(*ColorRGBA424);

Shape421->setGeometry(LineSet422);

HAnimSegment417->addChildren(*Shape421);

CHAnimSite* HAnimSite425 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite425->setName("r_calcaneus_posterior_pt");
HAnimSite425->setDEF("hanim_r_calcaneus_posterior_pt");
HAnimSite425->setTranslation(new float[3]{-0.0692,0.0297,-0.1221});
CTouchSensor* TouchSensor426 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor426->setDescription("HAnimSite r_calcaneus_posterior_pt");
HAnimSite425->addChildren(*TouchSensor426);

CShape* Shape427 = (CShape *)(m_pScene.createNode("Shape"));
Shape427->setUSE("HAnimSiteShape");
HAnimSite425->addChildren(*Shape427);

HAnimSegment417->addChildren(*HAnimSite425);

CHAnimSite* HAnimSite428 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite428->setName("r_sphyrion_pt");
HAnimSite428->setDEF("hanim_r_sphyrion_pt");
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
HAnimJoint431->setName("r_talocrural");
HAnimJoint431->setDEF("hanim_r_talocrural");
HAnimJoint431->setCenter(new float[3]{-0.0801,0.0712,-0.0766});
HAnimJoint431->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint431->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment432 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment432->setName("r_talus");
HAnimSegment432->setDEF("hanim_r_talus");
CTransform* Transform433 = (CTransform *)(m_pScene.createNode("Transform"));
Transform433->setScale(new float[3]{0.15,0.15,0.15});
Transform433->setTranslation(new float[3]{-0.05,0.06,-0.025});
Transform433->setRotation(new float[4]{1,0,0,-1.57});
//Transform right foot
CTransform* Transform434 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform right foot
CShape* Shape435 = (CShape *)(m_pScene.createNode("Shape"));
Shape435->setUSE("HAnimJointShape");
Transform434->addChild(*Shape435);

Transform433->addChildren(*Transform434);

HAnimSegment432->addChildren(*Transform433);

CShape* Shape436 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet437 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet437->setVertexCount(new int[1]{2});
CCoordinate* Coordinate438 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate438->setPoint(new float[6]{-0.0801,0.0712,-0.0766,-3.4725,0.0374,0.6807});
LineSet437->setCoord(*Coordinate438);

//from r_talocrural to r_talocalcaneonavicular vertices 2
CColorRGBA* ColorRGBA439 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA439->setUSE("HAnimSegmentLineColorRGBA");
LineSet437->setColor(*ColorRGBA439);

Shape436->setGeometry(LineSet437);

HAnimSegment432->addChildren(*Shape436);

CShape* Shape440 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet441 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet441->setVertexCount(new int[1]{2});
CCoordinate* Coordinate442 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate442->setPoint(new float[6]{-0.0801,0.0712,-0.0766,-3.9515,0.0653,-0.6895});
LineSet441->setCoord(*Coordinate442);

//from r_talocrural to r_calcaneocuboid vertices 2
CColorRGBA* ColorRGBA443 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA443->setUSE("HAnimSegmentLineColorRGBA");
LineSet441->setColor(*ColorRGBA443);

Shape440->setGeometry(LineSet441);

HAnimSegment432->addChildren(*Shape440);

HAnimJoint431->addChildren(*HAnimSegment432);

CHAnimJoint* HAnimJoint444 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint444->setName("r_talocalcaneonavicular");
HAnimJoint444->setDEF("hanim_r_talocalcaneonavicular");
HAnimJoint444->setCenter(new float[3]{-3.4725,0.0374,0.6807});
HAnimJoint444->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint444->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment445 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment445->setName("r_navicular");
HAnimSegment445->setDEF("hanim_r_navicular");
CTransform* Transform446 = (CTransform *)(m_pScene.createNode("Transform"));
Transform446->setTranslation(new float[3]{-3.4725,0.0374,0.6807});
CTransform* Transform447 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape448 = (CShape *)(m_pScene.createNode("Shape"));
Shape448->setUSE("HAnimJointShape");
Transform447->addChild(*Shape448);

Transform446->addChildren(*Transform447);

HAnimSegment445->addChildren(*Transform446);

CShape* Shape449 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet450 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet450->setVertexCount(new int[1]{2});
CCoordinate* Coordinate451 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate451->setPoint(new float[6]{-3.4725,0.0374,0.6807,-2.9855,0.0311,1.2819});
LineSet450->setCoord(*Coordinate451);

//from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 2
CColorRGBA* ColorRGBA452 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA452->setUSE("HAnimSegmentLineColorRGBA");
LineSet450->setColor(*ColorRGBA452);

Shape449->setGeometry(LineSet450);

HAnimSegment445->addChildren(*Shape449);

CShape* Shape453 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet454 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet454->setVertexCount(new int[1]{2});
CCoordinate* Coordinate455 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate455->setPoint(new float[6]{-3.4725,0.0374,0.6807,-3.6105,0.033,1.4168});
LineSet454->setCoord(*Coordinate455);

//from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 2
CColorRGBA* ColorRGBA456 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA456->setUSE("HAnimSegmentLineColorRGBA");
LineSet454->setColor(*ColorRGBA456);

Shape453->setGeometry(LineSet454);

HAnimSegment445->addChildren(*Shape453);

CShape* Shape457 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet458 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet458->setVertexCount(new int[1]{2});
CCoordinate* Coordinate459 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate459->setPoint(new float[6]{-3.4725,0.0374,0.6807,-4.1245,0.0328,1.3453});
LineSet458->setCoord(*Coordinate459);

//from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 2
CColorRGBA* ColorRGBA460 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA460->setUSE("HAnimSegmentLineColorRGBA");
LineSet458->setColor(*ColorRGBA460);

Shape457->setGeometry(LineSet458);

HAnimSegment445->addChildren(*Shape457);

HAnimJoint444->addChildren(*HAnimSegment445);

CHAnimJoint* HAnimJoint461 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint461->setName("r_cuneonavicular_1");
HAnimJoint461->setDEF("hanim_r_cuneonavicular_1");
HAnimJoint461->setCenter(new float[3]{-2.9855,0.0311,1.2819});
HAnimJoint461->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint461->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment462 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment462->setName("r_cuneiform_1");
HAnimSegment462->setDEF("hanim_r_cuneiform_1");
CTransform* Transform463 = (CTransform *)(m_pScene.createNode("Transform"));
Transform463->setTranslation(new float[3]{-2.9855,0.0311,1.2819});
CTransform* Transform464 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape465 = (CShape *)(m_pScene.createNode("Shape"));
Shape465->setUSE("HAnimJointShape");
Transform464->addChild(*Shape465);

Transform463->addChildren(*Transform464);

HAnimSegment462->addChildren(*Transform463);

CShape* Shape466 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet467 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet467->setVertexCount(new int[1]{2});
CCoordinate* Coordinate468 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate468->setPoint(new float[6]{-2.9855,0.0311,1.2819,-2.8645,0.0194,2.4285});
LineSet467->setCoord(*Coordinate468);

//from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 2
CColorRGBA* ColorRGBA469 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA469->setUSE("HAnimSegmentLineColorRGBA");
LineSet467->setColor(*ColorRGBA469);

Shape466->setGeometry(LineSet467);

HAnimSegment462->addChildren(*Shape466);

HAnimJoint461->addChildren(*HAnimSegment462);

CHAnimJoint* HAnimJoint470 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint470->setName("r_tarsometatarsal_1");
HAnimJoint470->setDEF("hanim_r_tarsometatarsal_1");
HAnimJoint470->setCenter(new float[3]{-2.8645,0.0194,2.4285});
HAnimJoint470->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint470->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment471 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment471->setName("r_metatarsal_1");
HAnimSegment471->setDEF("hanim_r_metatarsal_1");
CTransform* Transform472 = (CTransform *)(m_pScene.createNode("Transform"));
Transform472->setTranslation(new float[3]{-2.8645,0.0194,2.4285});
CTransform* Transform473 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape474 = (CShape *)(m_pScene.createNode("Shape"));
Shape474->setUSE("HAnimJointShape");
Transform473->addChild(*Shape474);

Transform472->addChildren(*Transform473);

HAnimSegment471->addChildren(*Transform472);

CShape* Shape475 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet476 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet476->setVertexCount(new int[1]{2});
CCoordinate* Coordinate477 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate477->setPoint(new float[6]{-2.8645,0.0194,2.4285,-2.7535,0.0077,4.6255});
LineSet476->setCoord(*Coordinate477);

//from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 2
CColorRGBA* ColorRGBA478 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA478->setUSE("HAnimSegmentLineColorRGBA");
LineSet476->setColor(*ColorRGBA478);

Shape475->setGeometry(LineSet476);

HAnimSegment471->addChildren(*Shape475);

CHAnimSite* HAnimSite479 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite479->setName("r_metatarsal_phalanx_1_pt");
HAnimSite479->setDEF("hanim_r_metatarsal_phalanx_1_pt");
CTouchSensor* TouchSensor480 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor480->setDescription("HAnimSite r_metatarsal_phalanx_1_pt");
HAnimSite479->addChildren(*TouchSensor480);

CShape* Shape481 = (CShape *)(m_pScene.createNode("Shape"));
Shape481->setUSE("HAnimSiteShape");
HAnimSite479->addChildren(*Shape481);

HAnimSegment471->addChildren(*HAnimSite479);

HAnimJoint470->addChildren(*HAnimSegment471);

CHAnimJoint* HAnimJoint482 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint482->setName("r_metatarsophalangeal_1");
HAnimJoint482->setDEF("hanim_r_metatarsophalangeal_1");
HAnimJoint482->setCenter(new float[3]{-2.7535,0.0077,4.6255});
HAnimJoint482->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint482->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment483 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment483->setName("r_tarsal_proximal_phalanx_1");
HAnimSegment483->setDEF("hanim_r_tarsal_proximal_phalanx_1");
CTransform* Transform484 = (CTransform *)(m_pScene.createNode("Transform"));
Transform484->setTranslation(new float[3]{-2.7535,0.0077,4.6255});
CTransform* Transform485 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape486 = (CShape *)(m_pScene.createNode("Shape"));
Shape486->setUSE("HAnimJointShape");
Transform485->addChild(*Shape486);

Transform484->addChildren(*Transform485);

HAnimSegment483->addChildren(*Transform484);

CShape* Shape487 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet488 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet488->setVertexCount(new int[1]{2});
CCoordinate* Coordinate489 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate489->setPoint(new float[6]{-2.7535,0.0077,4.6255,-2.7535,0.0077,4.6255});
LineSet488->setCoord(*Coordinate489);

//from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 2
CColorRGBA* ColorRGBA490 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA490->setUSE("HAnimSegmentLineColorRGBA");
LineSet488->setColor(*ColorRGBA490);

Shape487->setGeometry(LineSet488);

HAnimSegment483->addChildren(*Shape487);

CHAnimSite* HAnimSite491 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite491->setName("r_tarsal_distal_phalanx_1_tip");
HAnimSite491->setDEF("hanim_r_tarsal_distal_phalanx_1_tip");
CTouchSensor* TouchSensor492 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor492->setDescription("HAnimSite r_tarsal_distal_phalanx_1_tip");
HAnimSite491->addChildren(*TouchSensor492);

CShape* Shape493 = (CShape *)(m_pScene.createNode("Shape"));
Shape493->setUSE("HAnimSiteShape");
HAnimSite491->addChildren(*Shape493);

HAnimSegment483->addChildren(*HAnimSite491);

HAnimJoint482->addChildren(*HAnimSegment483);

CHAnimJoint* HAnimJoint494 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint494->setName("r_tarsal_interphalangeal_1");
HAnimJoint494->setDEF("hanim_r_tarsal_interphalangeal_1");
HAnimJoint494->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint494->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint482->addChildren(*HAnimJoint494);

HAnimJoint470->addChildren(*HAnimJoint482);

HAnimJoint461->addChildren(*HAnimJoint470);

HAnimJoint444->addChildren(*HAnimJoint461);

CHAnimJoint* HAnimJoint495 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint495->setName("r_cuneonavicular_2");
HAnimJoint495->setDEF("hanim_r_cuneonavicular_2");
HAnimJoint495->setCenter(new float[3]{-3.6105,0.033,1.4168});
HAnimJoint495->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint495->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment496 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment496->setName("r_cuneiform_2");
HAnimSegment496->setDEF("hanim_r_cuneiform_2");
CTransform* Transform497 = (CTransform *)(m_pScene.createNode("Transform"));
Transform497->setTranslation(new float[3]{-3.6105,0.033,1.4168});
CTransform* Transform498 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape499 = (CShape *)(m_pScene.createNode("Shape"));
Shape499->setUSE("HAnimJointShape");
Transform498->addChild(*Shape499);

Transform497->addChildren(*Transform498);

HAnimSegment496->addChildren(*Transform497);

CShape* Shape500 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet501 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet501->setVertexCount(new int[1]{2});
CCoordinate* Coordinate502 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate502->setPoint(new float[6]{-3.6105,0.033,1.4168,-3.5565,0.0232,2.2895});
LineSet501->setCoord(*Coordinate502);

//from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 2
CColorRGBA* ColorRGBA503 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA503->setUSE("HAnimSegmentLineColorRGBA");
LineSet501->setColor(*ColorRGBA503);

Shape500->setGeometry(LineSet501);

HAnimSegment496->addChildren(*Shape500);

HAnimJoint495->addChildren(*HAnimSegment496);

CHAnimJoint* HAnimJoint504 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint504->setName("r_tarsometatarsal_2");
HAnimJoint504->setDEF("hanim_r_tarsometatarsal_2");
HAnimJoint504->setCenter(new float[3]{-3.5565,0.0232,2.2895});
HAnimJoint504->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint504->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment505 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment505->setName("r_metatarsal_2");
HAnimSegment505->setDEF("hanim_r_metatarsal_2");
CTransform* Transform506 = (CTransform *)(m_pScene.createNode("Transform"));
Transform506->setTranslation(new float[3]{-3.5565,0.0232,2.2895});
CTransform* Transform507 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape508 = (CShape *)(m_pScene.createNode("Shape"));
Shape508->setUSE("HAnimJointShape");
Transform507->addChild(*Shape508);

Transform506->addChildren(*Transform507);

HAnimSegment505->addChildren(*Transform506);

CShape* Shape509 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet510 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet510->setVertexCount(new int[1]{2});
CCoordinate* Coordinate511 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate511->setPoint(new float[6]{-3.5565,0.0232,2.2895,-3.6595,0.0085,4.8125});
LineSet510->setCoord(*Coordinate511);

//from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2
CColorRGBA* ColorRGBA512 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA512->setUSE("HAnimSegmentLineColorRGBA");
LineSet510->setColor(*ColorRGBA512);

Shape509->setGeometry(LineSet510);

HAnimSegment505->addChildren(*Shape509);

HAnimJoint504->addChildren(*HAnimSegment505);

CHAnimJoint* HAnimJoint513 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint513->setName("r_metatarsophalangeal_2");
HAnimJoint513->setDEF("hanim_r_metatarsophalangeal_2");
HAnimJoint513->setCenter(new float[3]{-3.6595,0.0085,4.8125});
HAnimJoint513->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint513->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment514 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment514->setName("r_tarsal_proximal_phalanx_2");
HAnimSegment514->setDEF("hanim_r_tarsal_proximal_phalanx_2");
CTransform* Transform515 = (CTransform *)(m_pScene.createNode("Transform"));
Transform515->setTranslation(new float[3]{-3.6595,0.0085,4.8125});
CTransform* Transform516 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape517 = (CShape *)(m_pScene.createNode("Shape"));
Shape517->setUSE("HAnimJointShape");
Transform516->addChild(*Shape517);

Transform515->addChildren(*Transform516);

HAnimSegment514->addChildren(*Transform515);

CShape* Shape518 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet519 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet519->setVertexCount(new int[1]{2});
CCoordinate* Coordinate520 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate520->setPoint(new float[6]{-3.6595,0.0085,4.8125,-3.7385,0.0054,5.5315});
LineSet519->setCoord(*Coordinate520);

//from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA521 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA521->setUSE("HAnimSegmentLineColorRGBA");
LineSet519->setColor(*ColorRGBA521);

Shape518->setGeometry(LineSet519);

HAnimSegment514->addChildren(*Shape518);

HAnimJoint513->addChildren(*HAnimSegment514);

CHAnimJoint* HAnimJoint522 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint522->setName("r_tarsal_proximal_interphalangeal_2");
HAnimJoint522->setDEF("hanim_r_tarsal_proximal_interphalangeal_2");
HAnimJoint522->setCenter(new float[3]{-3.7385,0.0054,5.5315});
HAnimJoint522->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint522->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment523 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment523->setName("r_tarsal_middle_phalanx_2");
HAnimSegment523->setDEF("hanim_r_tarsal_middle_phalanx_2");
CTransform* Transform524 = (CTransform *)(m_pScene.createNode("Transform"));
Transform524->setTranslation(new float[3]{-3.7385,0.0054,5.5315});
CTransform* Transform525 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape526 = (CShape *)(m_pScene.createNode("Shape"));
Shape526->setUSE("HAnimJointShape");
Transform525->addChild(*Shape526);

Transform524->addChildren(*Transform525);

HAnimSegment523->addChildren(*Transform524);

CShape* Shape527 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet528 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet528->setVertexCount(new int[1]{2});
CCoordinate* Coordinate529 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate529->setPoint(new float[6]{-3.7385,0.0054,5.5315,-3.7385,0.0017,5.9505});
LineSet528->setCoord(*Coordinate529);

//from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA530 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA530->setUSE("HAnimSegmentLineColorRGBA");
LineSet528->setColor(*ColorRGBA530);

Shape527->setGeometry(LineSet528);

HAnimSegment523->addChildren(*Shape527);

CHAnimSite* HAnimSite531 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite531->setName("r_tarsal_distal_phalanx_2_tip");
HAnimSite531->setDEF("hanim_r_tarsal_distal_phalanx_2_tip");
HAnimSite531->setTranslation(new float[3]{-0.0883,0.0134,0.1383});
CTouchSensor* TouchSensor532 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor532->setDescription("HAnimSite r_tarsal_distal_phalanx_2_tip");
HAnimSite531->addChildren(*TouchSensor532);

CShape* Shape533 = (CShape *)(m_pScene.createNode("Shape"));
Shape533->setUSE("HAnimSiteShape");
HAnimSite531->addChildren(*Shape533);

HAnimSegment523->addChildren(*HAnimSite531);

HAnimJoint522->addChildren(*HAnimSegment523);

CHAnimJoint* HAnimJoint534 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint534->setName("r_tarsal_distal_interphalangeal_2");
HAnimJoint534->setDEF("hanim_r_tarsal_distal_interphalangeal_2");
HAnimJoint534->setCenter(new float[3]{-3.7385,0.0017,5.9505});
HAnimJoint534->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint534->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint522->addChildren(*HAnimJoint534);

HAnimJoint513->addChildren(*HAnimJoint522);

HAnimJoint504->addChildren(*HAnimJoint513);

HAnimJoint495->addChildren(*HAnimJoint504);

HAnimJoint444->addChildren(*HAnimJoint495);

CHAnimJoint* HAnimJoint535 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint535->setName("r_cuneonavicular_3");
HAnimJoint535->setDEF("hanim_r_cuneonavicular_3");
HAnimJoint535->setCenter(new float[3]{-4.1245,0.0328,1.3453});
HAnimJoint535->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint535->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment536 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment536->setName("r_cuneiform_3");
HAnimSegment536->setDEF("hanim_r_cuneiform_3");
CTransform* Transform537 = (CTransform *)(m_pScene.createNode("Transform"));
Transform537->setTranslation(new float[3]{-4.1245,0.0328,1.3453});
CTransform* Transform538 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape539 = (CShape *)(m_pScene.createNode("Shape"));
Shape539->setUSE("HAnimJointShape");
Transform538->addChild(*Shape539);

Transform537->addChildren(*Transform538);

HAnimSegment536->addChildren(*Transform537);

CShape* Shape540 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet541 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet541->setVertexCount(new int[1]{2});
CCoordinate* Coordinate542 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate542->setPoint(new float[6]{-4.1245,0.0328,1.3453,-3.7385,0.0017,5.9505});
LineSet541->setCoord(*Coordinate542);

//from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 2
CColorRGBA* ColorRGBA543 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA543->setUSE("HAnimSegmentLineColorRGBA");
LineSet541->setColor(*ColorRGBA543);

Shape540->setGeometry(LineSet541);

HAnimSegment536->addChildren(*Shape540);

HAnimJoint535->addChildren(*HAnimSegment536);

CHAnimJoint* HAnimJoint544 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint544->setName("r_tarsometatarsal_3");
HAnimJoint544->setDEF("hanim_r_tarsometatarsal_3");
HAnimJoint544->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint544->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment545 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment545->setName("r_metatarsal_3");
HAnimSegment545->setDEF("hanim_r_metatarsal_3");
CTransform* Transform546 = (CTransform *)(m_pScene.createNode("Transform"));
Transform546->setTranslation(new float[3]{-4.1245,0.0328,1.3453});
CTransform* Transform547 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape548 = (CShape *)(m_pScene.createNode("Shape"));
Shape548->setUSE("HAnimJointShape");
Transform547->addChild(*Shape548);

Transform546->addChildren(*Transform547);

HAnimSegment545->addChildren(*Transform546);

CShape* Shape549 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet550 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet550->setVertexCount(new int[1]{2});
CCoordinate* Coordinate551 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate551->setPoint(new float[3]{-4.2795,0.0086,4.7055});
LineSet550->setCoord(*Coordinate551);

//from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 1
CColorRGBA* ColorRGBA552 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA552->setUSE("HAnimSegmentLineColorRGBA");
LineSet550->setColor(*ColorRGBA552);

Shape549->setGeometry(LineSet550);

HAnimSegment545->addChildren(*Shape549);

HAnimJoint544->addChildren(*HAnimSegment545);

CHAnimJoint* HAnimJoint553 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint553->setName("r_metatarsophalangeal_3");
HAnimJoint553->setDEF("hanim_r_metatarsophalangeal_3");
HAnimJoint553->setCenter(new float[3]{-4.2795,0.0086,4.7055});
HAnimJoint553->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint553->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment554 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment554->setName("r_tarsal_proximal_phalanx_3");
HAnimSegment554->setDEF("hanim_r_tarsal_proximal_phalanx_3");
CTransform* Transform555 = (CTransform *)(m_pScene.createNode("Transform"));
Transform555->setTranslation(new float[3]{-4.2795,0.0086,4.7055});
CTransform* Transform556 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape557 = (CShape *)(m_pScene.createNode("Shape"));
Shape557->setUSE("HAnimJointShape");
Transform556->addChild(*Shape557);

Transform555->addChildren(*Transform556);

HAnimSegment554->addChildren(*Transform555);

CShape* Shape558 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet559 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet559->setVertexCount(new int[1]{2});
CCoordinate* Coordinate560 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate560->setPoint(new float[6]{-4.2795,0.0086,4.7055,-4.3865,0.0044,5.3745});
LineSet559->setCoord(*Coordinate560);

//from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA561 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA561->setUSE("HAnimSegmentLineColorRGBA");
LineSet559->setColor(*ColorRGBA561);

Shape558->setGeometry(LineSet559);

HAnimSegment554->addChildren(*Shape558);

HAnimJoint553->addChildren(*HAnimSegment554);

CHAnimJoint* HAnimJoint562 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint562->setName("r_tarsal_proximal_interphalangeal_3");
HAnimJoint562->setDEF("hanim_r_tarsal_proximal_interphalangeal_3");
HAnimJoint562->setCenter(new float[3]{-4.3865,0.0044,5.3745});
HAnimJoint562->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint562->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment563 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment563->setName("r_tarsal_middle_phalanx_3");
HAnimSegment563->setDEF("hanim_r_tarsal_middle_phalanx_3");
CTransform* Transform564 = (CTransform *)(m_pScene.createNode("Transform"));
Transform564->setTranslation(new float[3]{-4.3865,0.0044,5.3745});
CTransform* Transform565 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape566 = (CShape *)(m_pScene.createNode("Shape"));
Shape566->setUSE("HAnimJointShape");
Transform565->addChild(*Shape566);

Transform564->addChildren(*Transform565);

HAnimSegment563->addChildren(*Transform564);

CShape* Shape567 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet568 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet568->setVertexCount(new int[1]{2});
CCoordinate* Coordinate569 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate569->setPoint(new float[6]{-4.3865,0.0044,5.3745,-4.4545,0.0017,5.7845});
LineSet568->setCoord(*Coordinate569);

//from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA570 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA570->setUSE("HAnimSegmentLineColorRGBA");
LineSet568->setColor(*ColorRGBA570);

Shape567->setGeometry(LineSet568);

HAnimSegment563->addChildren(*Shape567);

CHAnimSite* HAnimSite571 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite571->setName("r_tarsal_distal_phalanx_3_tip");
HAnimSite571->setDEF("hanim_r_tarsal_distal_phalanx_3_tip");
CTouchSensor* TouchSensor572 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor572->setDescription("HAnimSite r_tarsal_distal_phalanx_3_tip");
HAnimSite571->addChildren(*TouchSensor572);

CShape* Shape573 = (CShape *)(m_pScene.createNode("Shape"));
Shape573->setUSE("HAnimSiteShape");
HAnimSite571->addChildren(*Shape573);

HAnimSegment563->addChildren(*HAnimSite571);

HAnimJoint562->addChildren(*HAnimSegment563);

CHAnimJoint* HAnimJoint574 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint574->setName("r_tarsal_distal_interphalangeal_3");
HAnimJoint574->setDEF("hanim_r_tarsal_distal_interphalangeal_3");
HAnimJoint574->setCenter(new float[3]{-4.4545,0.0017,5.7845});
HAnimJoint574->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint574->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint562->addChildren(*HAnimJoint574);

HAnimJoint553->addChildren(*HAnimJoint562);

HAnimJoint544->addChildren(*HAnimJoint553);

HAnimJoint535->addChildren(*HAnimJoint544);

HAnimJoint444->addChildren(*HAnimJoint535);

HAnimJoint431->addChildren(*HAnimJoint444);

CHAnimJoint* HAnimJoint575 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint575->setName("r_calcaneocuboid");
HAnimJoint575->setDEF("hanim_r_calcaneocuboid");
HAnimJoint575->setCenter(new float[3]{-3.9515,0.0653,-0.6895});
HAnimJoint575->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint575->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment576 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment576->setName("r_calcaneus");
HAnimSegment576->setDEF("hanim_r_calcaneus");
CTransform* Transform577 = (CTransform *)(m_pScene.createNode("Transform"));
Transform577->setTranslation(new float[3]{-3.9515,0.0653,-0.6895});
CTransform* Transform578 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape579 = (CShape *)(m_pScene.createNode("Shape"));
Shape579->setUSE("HAnimJointShape");
Transform578->addChild(*Shape579);

Transform577->addChildren(*Transform578);

HAnimSegment576->addChildren(*Transform577);

CShape* Shape580 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet581 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet581->setVertexCount(new int[1]{2});
CCoordinate* Coordinate582 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate582->setPoint(new float[6]{-3.9515,0.0653,-0.6895,-4.9095,0.0353,0.5574});
LineSet581->setCoord(*Coordinate582);

//from r_calcaneocuboid to r_transversetarsal vertices 2
CColorRGBA* ColorRGBA583 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA583->setUSE("HAnimSegmentLineColorRGBA");
LineSet581->setColor(*ColorRGBA583);

Shape580->setGeometry(LineSet581);

HAnimSegment576->addChildren(*Shape580);

HAnimJoint575->addChildren(*HAnimSegment576);

CHAnimJoint* HAnimJoint584 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint584->setName("r_transversetarsal");
HAnimJoint584->setDEF("hanim_r_transversetarsal");
HAnimJoint584->setCenter(new float[3]{-4.9095,0.0353,0.5574});
HAnimJoint584->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint584->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment585 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment585->setName("r_cuboid");
HAnimSegment585->setDEF("hanim_r_cuboid");
CTransform* Transform586 = (CTransform *)(m_pScene.createNode("Transform"));
Transform586->setTranslation(new float[3]{-4.9095,0.0353,0.5574});
CTransform* Transform587 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape588 = (CShape *)(m_pScene.createNode("Shape"));
Shape588->setUSE("HAnimJointShape");
Transform587->addChild(*Shape588);

Transform586->addChildren(*Transform587);

HAnimSegment585->addChildren(*Transform586);

CShape* Shape589 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet590 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet590->setVertexCount(new int[1]{2});
CCoordinate* Coordinate591 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate591->setPoint(new float[6]{-4.9095,0.0353,0.5574,-4.7255,0.0211,2.1725});
LineSet590->setCoord(*Coordinate591);

//from r_transversetarsal to r_tarsometatarsal_4 vertices 2
CColorRGBA* ColorRGBA592 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA592->setUSE("HAnimSegmentLineColorRGBA");
LineSet590->setColor(*ColorRGBA592);

Shape589->setGeometry(LineSet590);

HAnimSegment585->addChildren(*Shape589);

CShape* Shape593 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet594 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet594->setVertexCount(new int[1]{2});
CCoordinate* Coordinate595 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate595->setPoint(new float[6]{-4.9095,0.0353,0.5574,-5.3615,0.0164,2.0085});
LineSet594->setCoord(*Coordinate595);

//from r_transversetarsal to r_tarsometatarsal_5 vertices 2
CColorRGBA* ColorRGBA596 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA596->setUSE("HAnimSegmentLineColorRGBA");
LineSet594->setColor(*ColorRGBA596);

Shape593->setGeometry(LineSet594);

HAnimSegment585->addChildren(*Shape593);

HAnimJoint584->addChildren(*HAnimSegment585);

CHAnimJoint* HAnimJoint597 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint597->setName("r_tarsometatarsal_4");
HAnimJoint597->setDEF("hanim_r_tarsometatarsal_4");
HAnimJoint597->setCenter(new float[3]{-4.7255,0.0211,2.1725});
HAnimJoint597->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint597->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment598 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment598->setName("r_metatarsal_4");
HAnimSegment598->setDEF("hanim_r_metatarsal_4");
CTransform* Transform599 = (CTransform *)(m_pScene.createNode("Transform"));
Transform599->setTranslation(new float[3]{-4.7255,0.0211,2.1725});
CTransform* Transform600 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape601 = (CShape *)(m_pScene.createNode("Shape"));
Shape601->setUSE("HAnimJointShape");
Transform600->addChild(*Shape601);

Transform599->addChildren(*Transform600);

HAnimSegment598->addChildren(*Transform599);

CShape* Shape602 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet603 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet603->setVertexCount(new int[1]{2});
CCoordinate* Coordinate604 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate604->setPoint(new float[6]{-4.7255,0.0211,2.1725,-4.8755,0.0076,4.5165});
LineSet603->setCoord(*Coordinate604);

//from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 2
CColorRGBA* ColorRGBA605 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA605->setUSE("HAnimSegmentLineColorRGBA");
LineSet603->setColor(*ColorRGBA605);

Shape602->setGeometry(LineSet603);

HAnimSegment598->addChildren(*Shape602);

HAnimJoint597->addChildren(*HAnimSegment598);

CHAnimJoint* HAnimJoint606 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint606->setName("r_metatarsophalangeal_4");
HAnimJoint606->setDEF("hanim_r_metatarsophalangeal_4");
HAnimJoint606->setCenter(new float[3]{-4.8755,0.0076,4.5165});
HAnimJoint606->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint606->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment607 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment607->setName("r_tarsal_proximal_phalanx_4");
HAnimSegment607->setDEF("hanim_r_tarsal_proximal_phalanx_4");
CTransform* Transform608 = (CTransform *)(m_pScene.createNode("Transform"));
Transform608->setTranslation(new float[3]{-4.8755,0.0076,4.5165});
CTransform* Transform609 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape610 = (CShape *)(m_pScene.createNode("Shape"));
Shape610->setUSE("HAnimJointShape");
Transform609->addChild(*Shape610);

Transform608->addChildren(*Transform609);

HAnimSegment607->addChildren(*Transform608);

CShape* Shape611 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet612 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet612->setVertexCount(new int[1]{2});
CCoordinate* Coordinate613 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate613->setPoint(new float[6]{-4.8755,0.0076,4.5165,-5.0655,0.0049,5.1895});
LineSet612->setCoord(*Coordinate613);

//from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA614 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA614->setUSE("HAnimSegmentLineColorRGBA");
LineSet612->setColor(*ColorRGBA614);

Shape611->setGeometry(LineSet612);

HAnimSegment607->addChildren(*Shape611);

HAnimJoint606->addChildren(*HAnimSegment607);

CHAnimJoint* HAnimJoint615 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint615->setName("r_tarsal_proximal_interphalangeal_4");
HAnimJoint615->setDEF("hanim_r_tarsal_proximal_interphalangeal_4");
HAnimJoint615->setCenter(new float[3]{-5.0655,0.0049,5.1895});
HAnimJoint615->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint615->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment616 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment616->setName("r_tarsal_middle_phalanx_4");
HAnimSegment616->setDEF("hanim_r_tarsal_middle_phalanx_4");
CTransform* Transform617 = (CTransform *)(m_pScene.createNode("Transform"));
Transform617->setTranslation(new float[3]{-5.0655,0.0049,5.1895});
CTransform* Transform618 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape619 = (CShape *)(m_pScene.createNode("Shape"));
Shape619->setUSE("HAnimJointShape");
Transform618->addChild(*Shape619);

Transform617->addChildren(*Transform618);

HAnimSegment616->addChildren(*Transform617);

CShape* Shape620 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet621 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet621->setVertexCount(new int[1]{2});
CCoordinate* Coordinate622 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate622->setPoint(new float[6]{-5.0655,0.0049,5.1895,-5.1335,0.0011,5.5175});
LineSet621->setCoord(*Coordinate622);

//from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA623 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA623->setUSE("HAnimSegmentLineColorRGBA");
LineSet621->setColor(*ColorRGBA623);

Shape620->setGeometry(LineSet621);

HAnimSegment616->addChildren(*Shape620);

CHAnimSite* HAnimSite624 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite624->setName("r_tarsal_distal_phalanx_4_tip");
HAnimSite624->setDEF("hanim_r_tarsal_distal_phalanx_4_tip");
CTouchSensor* TouchSensor625 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor625->setDescription("HAnimSite r_tarsal_distal_phalanx_4_tip");
HAnimSite624->addChildren(*TouchSensor625);

CShape* Shape626 = (CShape *)(m_pScene.createNode("Shape"));
Shape626->setUSE("HAnimSiteShape");
HAnimSite624->addChildren(*Shape626);

HAnimSegment616->addChildren(*HAnimSite624);

HAnimJoint615->addChildren(*HAnimSegment616);

CHAnimJoint* HAnimJoint627 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint627->setName("r_tarsal_distal_interphalangeal_4");
HAnimJoint627->setDEF("hanim_r_tarsal_distal_interphalangeal_4");
HAnimJoint627->setCenter(new float[3]{-5.1335,0.0011,5.5175});
HAnimJoint627->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint627->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint615->addChildren(*HAnimJoint627);

HAnimJoint606->addChildren(*HAnimJoint615);

HAnimJoint597->addChildren(*HAnimJoint606);

HAnimJoint584->addChildren(*HAnimJoint597);

CHAnimJoint* HAnimJoint628 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint628->setName("r_tarsometatarsal_5");
HAnimJoint628->setDEF("hanim_r_tarsometatarsal_5");
HAnimJoint628->setCenter(new float[3]{-5.3615,0.0164,2.0085});
HAnimJoint628->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint628->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment629 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment629->setName("r_metatarsal_5");
HAnimSegment629->setDEF("hanim_r_metatarsal_5");
CTransform* Transform630 = (CTransform *)(m_pScene.createNode("Transform"));
Transform630->setTranslation(new float[3]{-5.3615,0.0164,2.0085});
CTransform* Transform631 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape632 = (CShape *)(m_pScene.createNode("Shape"));
Shape632->setUSE("HAnimJointShape");
Transform631->addChild(*Shape632);

Transform630->addChildren(*Transform631);

HAnimSegment629->addChildren(*Transform630);

CShape* Shape633 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet634 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet634->setVertexCount(new int[1]{2});
CCoordinate* Coordinate635 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate635->setPoint(new float[6]{-5.3615,0.0164,2.0085,-5.5055,0.0067,4.3115});
LineSet634->setCoord(*Coordinate635);

//from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 2
CColorRGBA* ColorRGBA636 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA636->setUSE("HAnimSegmentLineColorRGBA");
LineSet634->setColor(*ColorRGBA636);

Shape633->setGeometry(LineSet634);

HAnimSegment629->addChildren(*Shape633);

CHAnimSite* HAnimSite637 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite637->setName("r_metatarsal_phalanx_5_pt");
HAnimSite637->setDEF("hanim_r_metatarsal_phalanx_5_pt");
CTouchSensor* TouchSensor638 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor638->setDescription("HAnimSite r_metatarsal_phalanx_5_pt");
HAnimSite637->addChildren(*TouchSensor638);

CShape* Shape639 = (CShape *)(m_pScene.createNode("Shape"));
Shape639->setUSE("HAnimSiteShape");
HAnimSite637->addChildren(*Shape639);

HAnimSegment629->addChildren(*HAnimSite637);

HAnimJoint628->addChildren(*HAnimSegment629);

CHAnimJoint* HAnimJoint640 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint640->setName("r_metatarsophalangeal_5");
HAnimJoint640->setDEF("hanim_r_metatarsophalangeal_5");
HAnimJoint640->setCenter(new float[3]{-5.5055,0.0067,4.3115});
HAnimJoint640->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint640->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment641 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment641->setName("r_tarsal_proximal_phalanx_5");
HAnimSegment641->setDEF("hanim_r_tarsal_proximal_phalanx_5");
CTransform* Transform642 = (CTransform *)(m_pScene.createNode("Transform"));
Transform642->setTranslation(new float[3]{-5.5055,0.0067,4.3115});
CTransform* Transform643 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape644 = (CShape *)(m_pScene.createNode("Shape"));
Shape644->setUSE("HAnimJointShape");
Transform643->addChild(*Shape644);

Transform642->addChildren(*Transform643);

HAnimSegment641->addChildren(*Transform642);

CShape* Shape645 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet646 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet646->setVertexCount(new int[1]{2});
CCoordinate* Coordinate647 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate647->setPoint(new float[6]{-5.5055,0.0067,4.3115,-5.6085,0.003,4.6485});
LineSet646->setCoord(*Coordinate647);

//from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA648 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA648->setUSE("HAnimSegmentLineColorRGBA");
LineSet646->setColor(*ColorRGBA648);

Shape645->setGeometry(LineSet646);

HAnimSegment641->addChildren(*Shape645);

HAnimJoint640->addChildren(*HAnimSegment641);

CHAnimJoint* HAnimJoint649 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint649->setName("r_tarsal_proximal_interphalangeal_5");
HAnimJoint649->setDEF("hanim_r_tarsal_proximal_interphalangeal_5");
HAnimJoint649->setCenter(new float[3]{-5.6085,0.003,4.6485});
HAnimJoint649->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint649->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment650 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment650->setName("r_tarsal_middle_phalanx_5");
HAnimSegment650->setDEF("hanim_r_tarsal_middle_phalanx_5");
CTransform* Transform651 = (CTransform *)(m_pScene.createNode("Transform"));
Transform651->setTranslation(new float[3]{-5.6085,0.003,4.6485});
CTransform* Transform652 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape653 = (CShape *)(m_pScene.createNode("Shape"));
Shape653->setUSE("HAnimJointShape");
Transform652->addChild(*Shape653);

Transform651->addChildren(*Transform652);

HAnimSegment650->addChildren(*Transform651);

CShape* Shape654 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet655 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet655->setVertexCount(new int[1]{2});
CCoordinate* Coordinate656 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate656->setPoint(new float[6]{-5.6085,0.003,4.6485,-5.6495,0,4.9925});
LineSet655->setCoord(*Coordinate656);

//from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA657 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA657->setUSE("HAnimSegmentLineColorRGBA");
LineSet655->setColor(*ColorRGBA657);

Shape654->setGeometry(LineSet655);

HAnimSegment650->addChildren(*Shape654);

CHAnimSite* HAnimSite658 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite658->setName("r_tarsal_distal_phalanx_5_tip");
HAnimSite658->setDEF("hanim_r_tarsal_distal_phalanx_5_tip");
CTouchSensor* TouchSensor659 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor659->setDescription("HAnimSite r_tarsal_distal_phalanx_5_tip");
HAnimSite658->addChildren(*TouchSensor659);

CShape* Shape660 = (CShape *)(m_pScene.createNode("Shape"));
Shape660->setUSE("HAnimSiteShape");
HAnimSite658->addChildren(*Shape660);

HAnimSegment650->addChildren(*HAnimSite658);

HAnimJoint649->addChildren(*HAnimSegment650);

CHAnimJoint* HAnimJoint661 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint661->setName("r_tarsal_distal_interphalangeal_5");
HAnimJoint661->setDEF("hanim_r_tarsal_distal_interphalangeal_5");
HAnimJoint661->setCenter(new float[3]{-5.6495,0,4.9925});
HAnimJoint661->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint661->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint649->addChildren(*HAnimJoint661);

HAnimJoint640->addChildren(*HAnimJoint649);

HAnimJoint628->addChildren(*HAnimJoint640);

HAnimJoint584->addChildren(*HAnimJoint628);

HAnimJoint575->addChildren(*HAnimJoint584);

HAnimJoint431->addChildren(*HAnimJoint575);

HAnimJoint416->addChildren(*HAnimJoint431);

HAnimJoint398->addChildren(*HAnimJoint416);

HAnimJoint97->addChildren(*HAnimJoint398);

HAnimJoint45->addChildren(*HAnimJoint97);

CHAnimJoint* HAnimJoint662 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint662->setName("vl5");
HAnimJoint662->setDEF("hanim_vl5");
HAnimJoint662->setCenter(new float[3]{0.0028,1.0568,-0.0776});
HAnimJoint662->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint662->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment663 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment663->setName("l5");
HAnimSegment663->setDEF("hanim_l5");
CTransform* Transform664 = (CTransform *)(m_pScene.createNode("Transform"));
Transform664->setTranslation(new float[3]{0.0028,1.0568,-0.0776});
CTransform* Transform665 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape666 = (CShape *)(m_pScene.createNode("Shape"));
Shape666->setUSE("HAnimJointShape");
Transform665->addChild(*Shape666);

Transform664->addChildren(*Transform665);

HAnimSegment663->addChildren(*Transform664);

CShape* Shape667 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet668 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet668->setVertexCount(new int[1]{2});
CCoordinate* Coordinate669 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate669->setPoint(new float[6]{0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787});
LineSet668->setCoord(*Coordinate669);

//from vl5 to vl4 vertices 2
CColorRGBA* ColorRGBA670 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA670->setUSE("HAnimSegmentLineColorRGBA");
LineSet668->setColor(*ColorRGBA670);

Shape667->setGeometry(LineSet668);

HAnimSegment663->addChildren(*Shape667);

HAnimJoint662->addChildren(*HAnimSegment663);

CHAnimJoint* HAnimJoint671 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint671->setName("vl4");
HAnimJoint671->setDEF("hanim_vl4");
HAnimJoint671->setCenter(new float[3]{0.0035,1.0925,-0.0787});
HAnimJoint671->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint671->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment672 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment672->setName("l4");
HAnimSegment672->setDEF("hanim_l4");
CTransform* Transform673 = (CTransform *)(m_pScene.createNode("Transform"));
Transform673->setTranslation(new float[3]{0.0035,1.0925,-0.0787});
CTransform* Transform674 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape675 = (CShape *)(m_pScene.createNode("Shape"));
Shape675->setUSE("HAnimJointShape");
Transform674->addChild(*Shape675);

Transform673->addChildren(*Transform674);

HAnimSegment672->addChildren(*Transform673);

CShape* Shape676 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet677 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet677->setVertexCount(new int[1]{2});
CCoordinate* Coordinate678 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate678->setPoint(new float[6]{0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796});
LineSet677->setCoord(*Coordinate678);

//from vl4 to vl3 vertices 2
CColorRGBA* ColorRGBA679 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA679->setUSE("HAnimSegmentLineColorRGBA");
LineSet677->setColor(*ColorRGBA679);

Shape676->setGeometry(LineSet677);

HAnimSegment672->addChildren(*Shape676);

HAnimJoint671->addChildren(*HAnimSegment672);

CHAnimJoint* HAnimJoint680 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint680->setName("vl3");
HAnimJoint680->setDEF("hanim_vl3");
HAnimJoint680->setCenter(new float[3]{0.0041,1.1276,-0.0796});
HAnimJoint680->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint680->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment681 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment681->setName("l3");
HAnimSegment681->setDEF("hanim_l3");
CTransform* Transform682 = (CTransform *)(m_pScene.createNode("Transform"));
Transform682->setTranslation(new float[3]{0.0041,1.1276,-0.0796});
CTransform* Transform683 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape684 = (CShape *)(m_pScene.createNode("Shape"));
Shape684->setUSE("HAnimJointShape");
Transform683->addChild(*Shape684);

Transform682->addChildren(*Transform683);

HAnimSegment681->addChildren(*Transform682);

CShape* Shape685 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet686 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet686->setVertexCount(new int[1]{2});
CCoordinate* Coordinate687 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate687->setPoint(new float[6]{0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08});
LineSet686->setCoord(*Coordinate687);

//from vl3 to vl2 vertices 2
CColorRGBA* ColorRGBA688 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA688->setUSE("HAnimSegmentLineColorRGBA");
LineSet686->setColor(*ColorRGBA688);

Shape685->setGeometry(LineSet686);

HAnimSegment681->addChildren(*Shape685);

CHAnimSite* HAnimSite689 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite689->setName("l_rib10_pt");
HAnimSite689->setDEF("hanim_l_rib10_pt");
HAnimSite689->setTranslation(new float[3]{0.0871,1.1925,0.0992});
CTouchSensor* TouchSensor690 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor690->setDescription("HAnimSite l_rib10_pt");
HAnimSite689->addChildren(*TouchSensor690);

CShape* Shape691 = (CShape *)(m_pScene.createNode("Shape"));
Shape691->setUSE("HAnimSiteShape");
HAnimSite689->addChildren(*Shape691);

HAnimSegment681->addChildren(*HAnimSite689);

CHAnimSite* HAnimSite692 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite692->setName("r_rib10_pt");
HAnimSite692->setDEF("hanim_r_rib10_pt");
HAnimSite692->setTranslation(new float[3]{-0.0711,1.1941,0.1016});
CTouchSensor* TouchSensor693 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor693->setDescription("HAnimSite r_rib10_pt");
HAnimSite692->addChildren(*TouchSensor693);

CShape* Shape694 = (CShape *)(m_pScene.createNode("Shape"));
Shape694->setUSE("HAnimSiteShape");
HAnimSite692->addChildren(*Shape694);

HAnimSegment681->addChildren(*HAnimSite692);

CHAnimSite* HAnimSite695 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite695->setName("spine_2_middle_back_pt");
HAnimSite695->setDEF("hanim_spine_2_middle_back_pt");
CTouchSensor* TouchSensor696 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor696->setDescription("HAnimSite spine_2_middle_back_pt");
HAnimSite695->addChildren(*TouchSensor696);

CShape* Shape697 = (CShape *)(m_pScene.createNode("Shape"));
Shape697->setUSE("HAnimSiteShape");
HAnimSite695->addChildren(*Shape697);

HAnimSegment681->addChildren(*HAnimSite695);

HAnimJoint680->addChildren(*HAnimSegment681);

CHAnimJoint* HAnimJoint698 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint698->setName("vl2");
HAnimJoint698->setDEF("hanim_vl2");
HAnimJoint698->setCenter(new float[3]{0.0045,1.1546,-0.08});
HAnimJoint698->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint698->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment699 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment699->setName("l2");
HAnimSegment699->setDEF("hanim_l2");
CTransform* Transform700 = (CTransform *)(m_pScene.createNode("Transform"));
Transform700->setTranslation(new float[3]{0.0045,1.1546,-0.08});
CTransform* Transform701 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape702 = (CShape *)(m_pScene.createNode("Shape"));
Shape702->setUSE("HAnimJointShape");
Transform701->addChild(*Shape702);

Transform700->addChildren(*Transform701);

HAnimSegment699->addChildren(*Transform700);

CShape* Shape703 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet704 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet704->setVertexCount(new int[1]{2});
CCoordinate* Coordinate705 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate705->setPoint(new float[6]{0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805});
LineSet704->setCoord(*Coordinate705);

//from vl2 to vl1 vertices 2
CColorRGBA* ColorRGBA706 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA706->setUSE("HAnimSegmentLineColorRGBA");
LineSet704->setColor(*ColorRGBA706);

Shape703->setGeometry(LineSet704);

HAnimSegment699->addChildren(*Shape703);

HAnimJoint698->addChildren(*HAnimSegment699);

CHAnimJoint* HAnimJoint707 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint707->setName("vl1");
HAnimJoint707->setDEF("hanim_vl1");
HAnimJoint707->setCenter(new float[3]{0.0048,1.1912,-0.0805});
HAnimJoint707->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint707->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment708 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment708->setName("l1");
HAnimSegment708->setDEF("hanim_l1");
CTransform* Transform709 = (CTransform *)(m_pScene.createNode("Transform"));
Transform709->setTranslation(new float[3]{0.0048,1.1912,-0.0805});
CTransform* Transform710 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape711 = (CShape *)(m_pScene.createNode("Shape"));
Shape711->setUSE("HAnimJointShape");
Transform710->addChild(*Shape711);

Transform709->addChildren(*Transform710);

HAnimSegment708->addChildren(*Transform709);

CShape* Shape712 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet713 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet713->setVertexCount(new int[1]{2});
CCoordinate* Coordinate714 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate714->setPoint(new float[6]{0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808});
LineSet713->setCoord(*Coordinate714);

//from vl1 to vt12 vertices 2
CColorRGBA* ColorRGBA715 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA715->setUSE("HAnimSegmentLineColorRGBA");
LineSet713->setColor(*ColorRGBA715);

Shape712->setGeometry(LineSet713);

HAnimSegment708->addChildren(*Shape712);

HAnimJoint707->addChildren(*HAnimSegment708);

CHAnimJoint* HAnimJoint716 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint716->setName("vt12");
HAnimJoint716->setDEF("hanim_vt12");
HAnimJoint716->setCenter(new float[3]{0.0051,1.2278,-0.0808});
HAnimJoint716->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint716->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment717 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment717->setName("t12");
HAnimSegment717->setDEF("hanim_t12");
CTransform* Transform718 = (CTransform *)(m_pScene.createNode("Transform"));
Transform718->setTranslation(new float[3]{0.0051,1.2278,-0.0808});
CTransform* Transform719 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape720 = (CShape *)(m_pScene.createNode("Shape"));
Shape720->setUSE("HAnimJointShape");
Transform719->addChild(*Shape720);

Transform718->addChildren(*Transform719);

HAnimSegment717->addChildren(*Transform718);

CShape* Shape721 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet722 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet722->setVertexCount(new int[1]{2});
CCoordinate* Coordinate723 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate723->setPoint(new float[6]{0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081});
LineSet722->setCoord(*Coordinate723);

//from vt12 to vt11 vertices 2
CColorRGBA* ColorRGBA724 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA724->setUSE("HAnimSegmentLineColorRGBA");
LineSet722->setColor(*ColorRGBA724);

Shape721->setGeometry(LineSet722);

HAnimSegment717->addChildren(*Shape721);

HAnimJoint716->addChildren(*HAnimSegment717);

CHAnimJoint* HAnimJoint725 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint725->setName("vt11");
HAnimJoint725->setDEF("hanim_vt11");
HAnimJoint725->setCenter(new float[3]{0.0053,1.2679,-0.081});
HAnimJoint725->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint725->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment726 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment726->setName("t11");
HAnimSegment726->setDEF("hanim_t11");
CTransform* Transform727 = (CTransform *)(m_pScene.createNode("Transform"));
Transform727->setTranslation(new float[3]{0.0053,1.2679,-0.081});
CTransform* Transform728 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape729 = (CShape *)(m_pScene.createNode("Shape"));
Shape729->setUSE("HAnimJointShape");
Transform728->addChild(*Shape729);

Transform727->addChildren(*Transform728);

HAnimSegment726->addChildren(*Transform727);

CShape* Shape730 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet731 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet731->setVertexCount(new int[1]{2});
CCoordinate* Coordinate732 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate732->setPoint(new float[6]{0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822});
LineSet731->setCoord(*Coordinate732);

//from vt11 to vt10 vertices 2
CColorRGBA* ColorRGBA733 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA733->setUSE("HAnimSegmentLineColorRGBA");
LineSet731->setColor(*ColorRGBA733);

Shape730->setGeometry(LineSet731);

HAnimSegment726->addChildren(*Shape730);

CHAnimSite* HAnimSite734 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite734->setName("substernale_pt");
HAnimSite734->setDEF("hanim_substernale_pt");
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
HAnimJoint737->setName("vt10");
HAnimJoint737->setDEF("hanim_vt10");
HAnimJoint737->setCenter(new float[3]{0.0056,1.2848,-0.0822});
HAnimJoint737->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint737->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment738 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment738->setName("t10");
HAnimSegment738->setDEF("hanim_t10");
CTransform* Transform739 = (CTransform *)(m_pScene.createNode("Transform"));
Transform739->setTranslation(new float[3]{0.0056,1.2848,-0.0822});
CTransform* Transform740 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape741 = (CShape *)(m_pScene.createNode("Shape"));
Shape741->setUSE("HAnimJointShape");
Transform740->addChild(*Shape741);

Transform739->addChildren(*Transform740);

HAnimSegment738->addChildren(*Transform739);

CShape* Shape742 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet743 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet743->setVertexCount(new int[1]{2});
CCoordinate* Coordinate744 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate744->setPoint(new float[6]{0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838});
LineSet743->setCoord(*Coordinate744);

//from vt10 to vt9 vertices 2
CColorRGBA* ColorRGBA745 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA745->setUSE("HAnimSegmentLineColorRGBA");
LineSet743->setColor(*ColorRGBA745);

Shape742->setGeometry(LineSet743);

HAnimSegment738->addChildren(*Shape742);

CHAnimSite* HAnimSite746 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite746->setName("l_thelion_pt");
HAnimSite746->setDEF("hanim_l_thelion_pt");
HAnimSite746->setTranslation(new float[3]{0.0918,1.3382,0.1192});
CTouchSensor* TouchSensor747 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor747->setDescription("HAnimSite l_thelion_pt");
HAnimSite746->addChildren(*TouchSensor747);

CShape* Shape748 = (CShape *)(m_pScene.createNode("Shape"));
Shape748->setUSE("HAnimSiteShape");
HAnimSite746->addChildren(*Shape748);

HAnimSegment738->addChildren(*HAnimSite746);

CHAnimSite* HAnimSite749 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite749->setName("r_thelion_pt");
HAnimSite749->setDEF("hanim_r_thelion_pt");
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
HAnimJoint752->setName("vt9");
HAnimJoint752->setDEF("hanim_vt9");
HAnimJoint752->setCenter(new float[3]{0.0057,1.3126,-0.0838});
HAnimJoint752->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint752->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment753 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment753->setName("t9");
HAnimSegment753->setDEF("hanim_t9");
CTransform* Transform754 = (CTransform *)(m_pScene.createNode("Transform"));
Transform754->setTranslation(new float[3]{0.0057,1.3126,-0.0838});
CTransform* Transform755 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape756 = (CShape *)(m_pScene.createNode("Shape"));
Shape756->setUSE("HAnimJointShape");
Transform755->addChild(*Shape756);

Transform754->addChildren(*Transform755);

HAnimSegment753->addChildren(*Transform754);

CShape* Shape757 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet758 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet758->setVertexCount(new int[1]{2});
CCoordinate* Coordinate759 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate759->setPoint(new float[6]{0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845});
LineSet758->setCoord(*Coordinate759);

//from vt9 to vt8 vertices 2
CColorRGBA* ColorRGBA760 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA760->setUSE("HAnimSegmentLineColorRGBA");
LineSet758->setColor(*ColorRGBA760);

Shape757->setGeometry(LineSet758);

HAnimSegment753->addChildren(*Shape757);

HAnimJoint752->addChildren(*HAnimSegment753);

CHAnimJoint* HAnimJoint761 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint761->setName("vt8");
HAnimJoint761->setDEF("hanim_vt8");
HAnimJoint761->setCenter(new float[3]{0.0057,1.3382,-0.0845});
HAnimJoint761->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint761->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment762 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment762->setName("t8");
HAnimSegment762->setDEF("hanim_t8");
CTransform* Transform763 = (CTransform *)(m_pScene.createNode("Transform"));
Transform763->setTranslation(new float[3]{0.0057,1.3382,-0.0845});
CTransform* Transform764 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape765 = (CShape *)(m_pScene.createNode("Shape"));
Shape765->setUSE("HAnimJointShape");
Transform764->addChild(*Shape765);

Transform763->addChildren(*Transform764);

HAnimSegment762->addChildren(*Transform763);

CShape* Shape766 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet767 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet767->setVertexCount(new int[1]{2});
CCoordinate* Coordinate768 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate768->setPoint(new float[6]{0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833});
LineSet767->setCoord(*Coordinate768);

//from vt8 to vt7 vertices 2
CColorRGBA* ColorRGBA769 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA769->setUSE("HAnimSegmentLineColorRGBA");
LineSet767->setColor(*ColorRGBA769);

Shape766->setGeometry(LineSet767);

HAnimSegment762->addChildren(*Shape766);

HAnimJoint761->addChildren(*HAnimSegment762);

CHAnimJoint* HAnimJoint770 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint770->setName("vt7");
HAnimJoint770->setDEF("hanim_vt7");
HAnimJoint770->setCenter(new float[3]{0.0058,1.3625,-0.0833});
HAnimJoint770->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint770->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment771 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment771->setName("t7");
HAnimSegment771->setDEF("hanim_t7");
CTransform* Transform772 = (CTransform *)(m_pScene.createNode("Transform"));
Transform772->setTranslation(new float[3]{0.0058,1.3625,-0.0833});
CTransform* Transform773 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape774 = (CShape *)(m_pScene.createNode("Shape"));
Shape774->setUSE("HAnimJointShape");
Transform773->addChild(*Shape774);

Transform772->addChildren(*Transform773);

HAnimSegment771->addChildren(*Transform772);

CShape* Shape775 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet776 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet776->setVertexCount(new int[1]{2});
CCoordinate* Coordinate777 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate777->setPoint(new float[6]{0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08});
LineSet776->setCoord(*Coordinate777);

//from vt7 to vt6 vertices 2
CColorRGBA* ColorRGBA778 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA778->setUSE("HAnimSegmentLineColorRGBA");
LineSet776->setColor(*ColorRGBA778);

Shape775->setGeometry(LineSet776);

HAnimSegment771->addChildren(*Shape775);

CHAnimSite* HAnimSite779 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite779->setName("l_chest_midsagittal_plane_pt");
HAnimSite779->setDEF("hanim_l_chest_midsagittal_plane_pt");
CTouchSensor* TouchSensor780 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor780->setDescription("HAnimSite l_chest_midsagittal_plane_pt");
HAnimSite779->addChildren(*TouchSensor780);

CShape* Shape781 = (CShape *)(m_pScene.createNode("Shape"));
Shape781->setUSE("HAnimSiteShape");
HAnimSite779->addChildren(*Shape781);

HAnimSegment771->addChildren(*HAnimSite779);

CHAnimSite* HAnimSite782 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite782->setName("mesosternale_pt");
HAnimSite782->setDEF("hanim_mesosternale_pt");
CTouchSensor* TouchSensor783 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor783->setDescription("HAnimSite mesosternale_pt");
HAnimSite782->addChildren(*TouchSensor783);

CShape* Shape784 = (CShape *)(m_pScene.createNode("Shape"));
Shape784->setUSE("HAnimSiteShape");
HAnimSite782->addChildren(*Shape784);

HAnimSegment771->addChildren(*HAnimSite782);

CHAnimSite* HAnimSite785 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite785->setName("r_chest_midsagittal_plane_pt");
HAnimSite785->setDEF("hanim_r_chest_midsagittal_plane_pt");
CTouchSensor* TouchSensor786 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor786->setDescription("HAnimSite r_chest_midsagittal_plane_pt");
HAnimSite785->addChildren(*TouchSensor786);

CShape* Shape787 = (CShape *)(m_pScene.createNode("Shape"));
Shape787->setUSE("HAnimSiteShape");
HAnimSite785->addChildren(*Shape787);

HAnimSegment771->addChildren(*HAnimSite785);

CHAnimSite* HAnimSite788 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite788->setName("rear_center_midsagittal_plane_pt");
HAnimSite788->setDEF("hanim_rear_center_midsagittal_plane_pt");
CTouchSensor* TouchSensor789 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor789->setDescription("HAnimSite rear_center_midsagittal_plane_pt");
HAnimSite788->addChildren(*TouchSensor789);

CShape* Shape790 = (CShape *)(m_pScene.createNode("Shape"));
Shape790->setUSE("HAnimSiteShape");
HAnimSite788->addChildren(*Shape790);

HAnimSegment771->addChildren(*HAnimSite788);

HAnimJoint770->addChildren(*HAnimSegment771);

CHAnimJoint* HAnimJoint791 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint791->setName("vt6");
HAnimJoint791->setDEF("hanim_vt6");
HAnimJoint791->setCenter(new float[3]{0.0059,1.3866,-0.08});
HAnimJoint791->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint791->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment792 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment792->setName("t6");
HAnimSegment792->setDEF("hanim_t6");
CTransform* Transform793 = (CTransform *)(m_pScene.createNode("Transform"));
Transform793->setTranslation(new float[3]{0.0059,1.3866,-0.08});
CTransform* Transform794 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape795 = (CShape *)(m_pScene.createNode("Shape"));
Shape795->setUSE("HAnimJointShape");
Transform794->addChild(*Shape795);

Transform793->addChildren(*Transform794);

HAnimSegment792->addChildren(*Transform793);

CShape* Shape796 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet797 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet797->setVertexCount(new int[1]{2});
CCoordinate* Coordinate798 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate798->setPoint(new float[6]{0.0059,1.3866,-0.08,0.006,1.4102,-0.0745});
LineSet797->setCoord(*Coordinate798);

//from vt6 to vt5 vertices 2
CColorRGBA* ColorRGBA799 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA799->setUSE("HAnimSegmentLineColorRGBA");
LineSet797->setColor(*ColorRGBA799);

Shape796->setGeometry(LineSet797);

HAnimSegment792->addChildren(*Shape796);

CHAnimSite* HAnimSite800 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite800->setName("spine_1_middle_back_pt");
HAnimSite800->setDEF("hanim_spine_1_middle_back_pt");
CTouchSensor* TouchSensor801 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor801->setDescription("HAnimSite spine_1_middle_back_pt");
HAnimSite800->addChildren(*TouchSensor801);

CShape* Shape802 = (CShape *)(m_pScene.createNode("Shape"));
Shape802->setUSE("HAnimSiteShape");
HAnimSite800->addChildren(*Shape802);

HAnimSegment792->addChildren(*HAnimSite800);

HAnimJoint791->addChildren(*HAnimSegment792);

CHAnimJoint* HAnimJoint803 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint803->setName("vt5");
HAnimJoint803->setDEF("hanim_vt5");
HAnimJoint803->setCenter(new float[3]{0.006,1.4102,-0.0745});
HAnimJoint803->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint803->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment804 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment804->setName("t5");
HAnimSegment804->setDEF("hanim_t5");
CTransform* Transform805 = (CTransform *)(m_pScene.createNode("Transform"));
Transform805->setTranslation(new float[3]{0.006,1.4102,-0.0745});
CTransform* Transform806 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape807 = (CShape *)(m_pScene.createNode("Shape"));
Shape807->setUSE("HAnimJointShape");
Transform806->addChild(*Shape807);

Transform805->addChildren(*Transform806);

HAnimSegment804->addChildren(*Transform805);

CShape* Shape808 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet809 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet809->setVertexCount(new int[1]{2});
CCoordinate* Coordinate810 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate810->setPoint(new float[6]{0.006,1.4102,-0.0745,0.0061,1.432,-0.0675});
LineSet809->setCoord(*Coordinate810);

//from vt5 to vt4 vertices 2
CColorRGBA* ColorRGBA811 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA811->setUSE("HAnimSegmentLineColorRGBA");
LineSet809->setColor(*ColorRGBA811);

Shape808->setGeometry(LineSet809);

HAnimSegment804->addChildren(*Shape808);

HAnimJoint803->addChildren(*HAnimSegment804);

CHAnimJoint* HAnimJoint812 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint812->setName("vt4");
HAnimJoint812->setDEF("hanim_vt4");
HAnimJoint812->setCenter(new float[3]{0.0061,1.432,-0.0675});
HAnimJoint812->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint812->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment813 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment813->setName("t4");
HAnimSegment813->setDEF("hanim_t4");
CTransform* Transform814 = (CTransform *)(m_pScene.createNode("Transform"));
Transform814->setTranslation(new float[3]{0.0061,1.432,-0.0675});
CTransform* Transform815 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape816 = (CShape *)(m_pScene.createNode("Shape"));
Shape816->setUSE("HAnimJointShape");
Transform815->addChild(*Shape816);

Transform814->addChildren(*Transform815);

HAnimSegment813->addChildren(*Transform814);

CShape* Shape817 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet818 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet818->setVertexCount(new int[1]{2});
CCoordinate* Coordinate819 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate819->setPoint(new float[6]{0.0061,1.432,-0.0675,0.0062,1.4583,-0.057});
LineSet818->setCoord(*Coordinate819);

//from vt4 to vt3 vertices 2
CColorRGBA* ColorRGBA820 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA820->setUSE("HAnimSegmentLineColorRGBA");
LineSet818->setColor(*ColorRGBA820);

Shape817->setGeometry(LineSet818);

HAnimSegment813->addChildren(*Shape817);

HAnimJoint812->addChildren(*HAnimSegment813);

CHAnimJoint* HAnimJoint821 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint821->setName("vt3");
HAnimJoint821->setDEF("hanim_vt3");
HAnimJoint821->setCenter(new float[3]{0.0062,1.4583,-0.057});
HAnimJoint821->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint821->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment822 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment822->setName("t3");
HAnimSegment822->setDEF("hanim_t3");
CTransform* Transform823 = (CTransform *)(m_pScene.createNode("Transform"));
Transform823->setTranslation(new float[3]{0.0062,1.4583,-0.057});
CTransform* Transform824 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape825 = (CShape *)(m_pScene.createNode("Shape"));
Shape825->setUSE("HAnimJointShape");
Transform824->addChild(*Shape825);

Transform823->addChildren(*Transform824);

HAnimSegment822->addChildren(*Transform823);

CShape* Shape826 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet827 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet827->setVertexCount(new int[1]{2});
CCoordinate* Coordinate828 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate828->setPoint(new float[6]{0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484});
LineSet827->setCoord(*Coordinate828);

//from vt3 to vt2 vertices 2
CColorRGBA* ColorRGBA829 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA829->setUSE("HAnimSegmentLineColorRGBA");
LineSet827->setColor(*ColorRGBA829);

Shape826->setGeometry(LineSet827);

HAnimSegment822->addChildren(*Shape826);

HAnimJoint821->addChildren(*HAnimSegment822);

CHAnimJoint* HAnimJoint830 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint830->setName("vt2");
HAnimJoint830->setDEF("hanim_vt2");
HAnimJoint830->setCenter(new float[3]{0.0063,1.4761,-0.0484});
HAnimJoint830->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint830->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment831 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment831->setName("t2");
HAnimSegment831->setDEF("hanim_t2");
CTransform* Transform832 = (CTransform *)(m_pScene.createNode("Transform"));
Transform832->setTranslation(new float[3]{0.0063,1.4761,-0.0484});
CTransform* Transform833 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape834 = (CShape *)(m_pScene.createNode("Shape"));
Shape834->setUSE("HAnimJointShape");
Transform833->addChild(*Shape834);

Transform832->addChildren(*Transform833);

HAnimSegment831->addChildren(*Transform832);

CShape* Shape835 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet836 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet836->setVertexCount(new int[1]{2});
CCoordinate* Coordinate837 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate837->setPoint(new float[6]{0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387});
LineSet836->setCoord(*Coordinate837);

//from vt2 to vt1 vertices 2
CColorRGBA* ColorRGBA838 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA838->setUSE("HAnimSegmentLineColorRGBA");
LineSet836->setColor(*ColorRGBA838);

Shape835->setGeometry(LineSet836);

HAnimSegment831->addChildren(*Shape835);

CHAnimSite* HAnimSite839 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite839->setName("cervicale_pt");
HAnimSite839->setDEF("hanim_cervicale_pt");
HAnimSite839->setTranslation(new float[3]{0.0064,1.52,-0.0815});
CTouchSensor* TouchSensor840 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor840->setDescription("HAnimSite cervicale_pt");
HAnimSite839->addChildren(*TouchSensor840);

CShape* Shape841 = (CShape *)(m_pScene.createNode("Shape"));
Shape841->setUSE("HAnimSiteShape");
HAnimSite839->addChildren(*Shape841);

HAnimSegment831->addChildren(*HAnimSite839);

CHAnimSite* HAnimSite842 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite842->setName("suprasternale_pt");
HAnimSite842->setDEF("hanim_suprasternale_pt");
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
HAnimJoint845->setName("vt1");
HAnimJoint845->setDEF("hanim_vt1");
HAnimJoint845->setCenter(new float[3]{0.0065,1.4951,-0.0387});
HAnimJoint845->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint845->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment846 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment846->setName("t1");
HAnimSegment846->setDEF("hanim_t1");
CTransform* Transform847 = (CTransform *)(m_pScene.createNode("Transform"));
Transform847->setTranslation(new float[3]{0.0065,1.4951,-0.0387});
CTransform* Transform848 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape849 = (CShape *)(m_pScene.createNode("Shape"));
Shape849->setUSE("HAnimJointShape");
Transform848->addChild(*Shape849);

Transform847->addChildren(*Transform848);

HAnimSegment846->addChildren(*Transform847);

CShape* Shape850 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet851 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet851->setVertexCount(new int[1]{2});
CCoordinate* Coordinate852 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate852->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301});
LineSet851->setCoord(*Coordinate852);

//from vt1 to vc7 vertices 2
CColorRGBA* ColorRGBA853 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA853->setUSE("HAnimSegmentLineColorRGBA");
LineSet851->setColor(*ColorRGBA853);

Shape850->setGeometry(LineSet851);

HAnimSegment846->addChildren(*Shape850);

CHAnimSite* HAnimSite854 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite854->setName("l_neck_base_pt");
HAnimSite854->setDEF("hanim_l_neck_base_pt");
HAnimSite854->setTranslation(new float[3]{0.0646,1.5141,-0.038});
CTouchSensor* TouchSensor855 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor855->setDescription("HAnimSite l_neck_base_pt");
HAnimSite854->addChildren(*TouchSensor855);

CShape* Shape856 = (CShape *)(m_pScene.createNode("Shape"));
Shape856->setUSE("HAnimSiteShape");
HAnimSite854->addChildren(*Shape856);

HAnimSegment846->addChildren(*HAnimSite854);

CHAnimSite* HAnimSite857 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite857->setName("r_neck_base_pt");
HAnimSite857->setDEF("hanim_r_neck_base_pt");
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
CCoordinate* Coordinate862 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate862->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353});
LineSet861->setCoord(*Coordinate862);

//from vt1 to l_sternoclavicular vertices 2
CColorRGBA* ColorRGBA863 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA863->setUSE("HAnimSegmentLineColorRGBA");
LineSet861->setColor(*ColorRGBA863);

Shape860->setGeometry(LineSet861);

HAnimSegment846->addChildren(*Shape860);

CHAnimSite* HAnimSite864 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite864->setName("l_acromion_pt");
HAnimSite864->setDEF("hanim_l_acromion_pt");
HAnimSite864->setTranslation(new float[3]{0.2032,1.476,-0.049});
CTouchSensor* TouchSensor865 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor865->setDescription("HAnimSite l_acromion_pt");
HAnimSite864->addChildren(*TouchSensor865);

CShape* Shape866 = (CShape *)(m_pScene.createNode("Shape"));
Shape866->setUSE("HAnimSiteShape");
HAnimSite864->addChildren(*Shape866);

HAnimSegment846->addChildren(*HAnimSite864);

CHAnimSite* HAnimSite867 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite867->setName("l_axilla_distal_pt");
HAnimSite867->setDEF("hanim_l_axilla_distal_pt");
HAnimSite867->setTranslation(new float[3]{0.1706,1.4072,-0.0875});
CTouchSensor* TouchSensor868 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor868->setDescription("HAnimSite l_axilla_distal_pt");
HAnimSite867->addChildren(*TouchSensor868);

CShape* Shape869 = (CShape *)(m_pScene.createNode("Shape"));
Shape869->setUSE("HAnimSiteShape");
HAnimSite867->addChildren(*Shape869);

HAnimSegment846->addChildren(*HAnimSite867);

CHAnimSite* HAnimSite870 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite870->setName("l_axilla_posterior_folds_pt");
HAnimSite870->setDEF("hanim_l_axilla_posterior_folds_pt");
CTouchSensor* TouchSensor871 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor871->setDescription("HAnimSite l_axilla_posterior_folds_pt");
HAnimSite870->addChildren(*TouchSensor871);

CShape* Shape872 = (CShape *)(m_pScene.createNode("Shape"));
Shape872->setUSE("HAnimSiteShape");
HAnimSite870->addChildren(*Shape872);

HAnimSegment846->addChildren(*HAnimSite870);

CHAnimSite* HAnimSite873 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite873->setName("l_axilla_proximal_pt");
HAnimSite873->setDEF("hanim_l_axilla_proximal_pt");
HAnimSite873->setTranslation(new float[3]{0.1777,1.4065,-0.0075});
CTouchSensor* TouchSensor874 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor874->setDescription("HAnimSite l_axilla_proximal_pt");
HAnimSite873->addChildren(*TouchSensor874);

CShape* Shape875 = (CShape *)(m_pScene.createNode("Shape"));
Shape875->setUSE("HAnimSiteShape");
HAnimSite873->addChildren(*Shape875);

HAnimSegment846->addChildren(*HAnimSite873);

CHAnimSite* HAnimSite876 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite876->setName("l_clavicale_pt");
HAnimSite876->setDEF("hanim_l_clavicale_pt");
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
CCoordinate* Coordinate881 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate881->setPoint(new float[6]{0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033});
LineSet880->setCoord(*Coordinate881);

//from vt1 to r_sternoclavicular vertices 2
CColorRGBA* ColorRGBA882 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA882->setUSE("HAnimSegmentLineColorRGBA");
LineSet880->setColor(*ColorRGBA882);

Shape879->setGeometry(LineSet880);

HAnimSegment846->addChildren(*Shape879);

CHAnimSite* HAnimSite883 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite883->setName("r_acromion_pt");
HAnimSite883->setDEF("hanim_r_acromion_pt");
HAnimSite883->setTranslation(new float[3]{-0.1905,1.4791,-0.0431});
CTouchSensor* TouchSensor884 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor884->setDescription("HAnimSite r_acromion_pt");
HAnimSite883->addChildren(*TouchSensor884);

CShape* Shape885 = (CShape *)(m_pScene.createNode("Shape"));
Shape885->setUSE("HAnimSiteShape");
HAnimSite883->addChildren(*Shape885);

HAnimSegment846->addChildren(*HAnimSite883);

CHAnimSite* HAnimSite886 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite886->setName("r_axilla_distal_pt");
HAnimSite886->setDEF("hanim_r_axilla_distal_pt");
HAnimSite886->setTranslation(new float[3]{-0.1603,1.4098,-0.0826});
CTouchSensor* TouchSensor887 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor887->setDescription("HAnimSite r_axilla_distal_pt");
HAnimSite886->addChildren(*TouchSensor887);

CShape* Shape888 = (CShape *)(m_pScene.createNode("Shape"));
Shape888->setUSE("HAnimSiteShape");
HAnimSite886->addChildren(*Shape888);

HAnimSegment846->addChildren(*HAnimSite886);

CHAnimSite* HAnimSite889 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite889->setName("r_axilla_posterior_folds_pt");
HAnimSite889->setDEF("hanim_r_axilla_posterior_folds_pt");
CTouchSensor* TouchSensor890 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor890->setDescription("HAnimSite r_axilla_posterior_folds_pt");
HAnimSite889->addChildren(*TouchSensor890);

CShape* Shape891 = (CShape *)(m_pScene.createNode("Shape"));
Shape891->setUSE("HAnimSiteShape");
HAnimSite889->addChildren(*Shape891);

HAnimSegment846->addChildren(*HAnimSite889);

CHAnimSite* HAnimSite892 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite892->setName("r_axilla_proximal_pt");
HAnimSite892->setDEF("hanim_r_axilla_proximal_pt");
HAnimSite892->setTranslation(new float[3]{-0.1626,1.4072,-0.0031});
CTouchSensor* TouchSensor893 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor893->setDescription("HAnimSite r_axilla_proximal_pt");
HAnimSite892->addChildren(*TouchSensor893);

CShape* Shape894 = (CShape *)(m_pScene.createNode("Shape"));
Shape894->setUSE("HAnimSiteShape");
HAnimSite892->addChildren(*Shape894);

HAnimSegment846->addChildren(*HAnimSite892);

CHAnimSite* HAnimSite895 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite895->setName("r_clavicale_pt");
HAnimSite895->setDEF("hanim_r_clavicale_pt");
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
HAnimJoint898->setName("vc7");
HAnimJoint898->setDEF("hanim_vc7");
HAnimJoint898->setCenter(new float[3]{0.0066,1.5132,-0.0301});
HAnimJoint898->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint898->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment899 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment899->setName("c7");
HAnimSegment899->setDEF("hanim_c7");
CTransform* Transform900 = (CTransform *)(m_pScene.createNode("Transform"));
Transform900->setTranslation(new float[3]{0.0066,1.5132,-0.0301});
CTransform* Transform901 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape902 = (CShape *)(m_pScene.createNode("Shape"));
Shape902->setUSE("HAnimJointShape");
Transform901->addChild(*Shape902);

Transform900->addChildren(*Transform901);

HAnimSegment899->addChildren(*Transform900);

CShape* Shape903 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet904 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet904->setVertexCount(new int[1]{2});
CCoordinate* Coordinate905 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate905->setPoint(new float[6]{0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143});
LineSet904->setCoord(*Coordinate905);

//from vc7 to vc6 vertices 2
CColorRGBA* ColorRGBA906 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA906->setUSE("HAnimSegmentLineColorRGBA");
LineSet904->setColor(*ColorRGBA906);

Shape903->setGeometry(LineSet904);

HAnimSegment899->addChildren(*Shape903);

HAnimJoint898->addChildren(*HAnimSegment899);

CHAnimJoint* HAnimJoint907 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint907->setName("vc6");
HAnimJoint907->setDEF("hanim_vc6");
HAnimJoint907->setCenter(new float[3]{0.0066,1.5357,-0.0143});
HAnimJoint907->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint907->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment908 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment908->setName("c6");
HAnimSegment908->setDEF("hanim_c6");
CTransform* Transform909 = (CTransform *)(m_pScene.createNode("Transform"));
Transform909->setTranslation(new float[3]{0.0066,1.5357,-0.0143});
CTransform* Transform910 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape911 = (CShape *)(m_pScene.createNode("Shape"));
Shape911->setUSE("HAnimJointShape");
Transform910->addChild(*Shape911);

Transform909->addChildren(*Transform910);

HAnimSegment908->addChildren(*Transform909);

CShape* Shape912 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet913 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet913->setVertexCount(new int[1]{2});
CCoordinate* Coordinate914 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate914->setPoint(new float[6]{0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082});
LineSet913->setCoord(*Coordinate914);

//from vc6 to vc5 vertices 2
CColorRGBA* ColorRGBA915 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA915->setUSE("HAnimSegmentLineColorRGBA");
LineSet913->setColor(*ColorRGBA915);

Shape912->setGeometry(LineSet913);

HAnimSegment908->addChildren(*Shape912);

HAnimJoint907->addChildren(*HAnimSegment908);

CHAnimJoint* HAnimJoint916 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint916->setName("vc5");
HAnimJoint916->setDEF("hanim_vc5");
HAnimJoint916->setCenter(new float[3]{0.0066,1.552,-0.0082});
HAnimJoint916->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint916->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment917 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment917->setName("c5");
HAnimSegment917->setDEF("hanim_c5");
CTransform* Transform918 = (CTransform *)(m_pScene.createNode("Transform"));
Transform918->setTranslation(new float[3]{0.0066,1.552,-0.0082});
CTransform* Transform919 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape920 = (CShape *)(m_pScene.createNode("Shape"));
Shape920->setUSE("HAnimJointShape");
Transform919->addChild(*Shape920);

Transform918->addChildren(*Transform919);

HAnimSegment917->addChildren(*Transform918);

CShape* Shape921 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet922 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet922->setVertexCount(new int[1]{2});
CCoordinate* Coordinate923 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate923->setPoint(new float[6]{0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084});
LineSet922->setCoord(*Coordinate923);

//from vc5 to vc4 vertices 2
CColorRGBA* ColorRGBA924 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA924->setUSE("HAnimSegmentLineColorRGBA");
LineSet922->setColor(*ColorRGBA924);

Shape921->setGeometry(LineSet922);

HAnimSegment917->addChildren(*Shape921);

HAnimJoint916->addChildren(*HAnimSegment917);

CHAnimJoint* HAnimJoint925 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint925->setName("vc4");
HAnimJoint925->setDEF("hanim_vc4");
HAnimJoint925->setCenter(new float[3]{0.0066,1.5662,-0.0084});
HAnimJoint925->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint925->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment926 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment926->setName("c4");
HAnimSegment926->setDEF("hanim_c4");
CTransform* Transform927 = (CTransform *)(m_pScene.createNode("Transform"));
Transform927->setTranslation(new float[3]{0.0066,1.5662,-0.0084});
CTransform* Transform928 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape929 = (CShape *)(m_pScene.createNode("Shape"));
Shape929->setUSE("HAnimJointShape");
Transform928->addChild(*Shape929);

Transform927->addChildren(*Transform928);

HAnimSegment926->addChildren(*Transform927);

CShape* Shape930 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet931 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet931->setVertexCount(new int[1]{2});
CCoordinate* Coordinate932 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate932->setPoint(new float[6]{0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103});
LineSet931->setCoord(*Coordinate932);

//from vc4 to vc3 vertices 2
CColorRGBA* ColorRGBA933 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA933->setUSE("HAnimSegmentLineColorRGBA");
LineSet931->setColor(*ColorRGBA933);

Shape930->setGeometry(LineSet931);

HAnimSegment926->addChildren(*Shape930);

HAnimJoint925->addChildren(*HAnimSegment926);

CHAnimJoint* HAnimJoint934 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint934->setName("vc3");
HAnimJoint934->setDEF("hanim_vc3");
HAnimJoint934->setCenter(new float[3]{0.0066,1.58,-0.0103});
HAnimJoint934->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint934->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment935 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment935->setName("c3");
HAnimSegment935->setDEF("hanim_c3");
CTransform* Transform936 = (CTransform *)(m_pScene.createNode("Transform"));
Transform936->setTranslation(new float[3]{0.0066,1.58,-0.0103});
CTransform* Transform937 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape938 = (CShape *)(m_pScene.createNode("Shape"));
Shape938->setUSE("HAnimJointShape");
Transform937->addChild(*Shape938);

Transform936->addChildren(*Transform937);

HAnimSegment935->addChildren(*Transform936);

CShape* Shape939 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet940 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet940->setVertexCount(new int[1]{2});
CCoordinate* Coordinate941 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate941->setPoint(new float[6]{0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103});
LineSet940->setCoord(*Coordinate941);

//from vc3 to vc2 vertices 2
CColorRGBA* ColorRGBA942 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA942->setUSE("HAnimSegmentLineColorRGBA");
LineSet940->setColor(*ColorRGBA942);

Shape939->setGeometry(LineSet940);

HAnimSegment935->addChildren(*Shape939);

CHAnimSite* HAnimSite943 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite943->setName("adams_apple_pt");
HAnimSite943->setDEF("hanim_adams_apple_pt");
CTouchSensor* TouchSensor944 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor944->setDescription("HAnimSite adams_apple_pt");
HAnimSite943->addChildren(*TouchSensor944);

CShape* Shape945 = (CShape *)(m_pScene.createNode("Shape"));
Shape945->setUSE("HAnimSiteShape");
HAnimSite943->addChildren(*Shape945);

HAnimSegment935->addChildren(*HAnimSite943);

HAnimJoint934->addChildren(*HAnimSegment935);

CHAnimJoint* HAnimJoint946 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint946->setName("vc2");
HAnimJoint946->setDEF("hanim_vc2");
HAnimJoint946->setCenter(new float[3]{0.0066,1.5928,-0.0103});
HAnimJoint946->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint946->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment947 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment947->setName("c2");
HAnimSegment947->setDEF("hanim_c2");
CTransform* Transform948 = (CTransform *)(m_pScene.createNode("Transform"));
Transform948->setTranslation(new float[3]{0.0066,1.5928,-0.0103});
CTransform* Transform949 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape950 = (CShape *)(m_pScene.createNode("Shape"));
Shape950->setUSE("HAnimJointShape");
Transform949->addChild(*Shape950);

Transform948->addChildren(*Transform949);

HAnimSegment947->addChildren(*Transform948);

CShape* Shape951 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet952 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet952->setVertexCount(new int[1]{2});
CCoordinate* Coordinate953 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate953->setPoint(new float[6]{0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034});
LineSet952->setCoord(*Coordinate953);

//from vc2 to vc1 vertices 2
CColorRGBA* ColorRGBA954 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA954->setUSE("HAnimSegmentLineColorRGBA");
LineSet952->setColor(*ColorRGBA954);

Shape951->setGeometry(LineSet952);

HAnimSegment947->addChildren(*Shape951);

HAnimJoint946->addChildren(*HAnimSegment947);

CHAnimJoint* HAnimJoint955 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint955->setName("vc1");
HAnimJoint955->setDEF("hanim_vc1");
HAnimJoint955->setCenter(new float[3]{0.0066,1.6144,-0.0034});
HAnimJoint955->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint955->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment956 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment956->setName("c1");
HAnimSegment956->setDEF("hanim_c1");
CTransform* Transform957 = (CTransform *)(m_pScene.createNode("Transform"));
Transform957->setTranslation(new float[3]{0.0066,1.6144,-0.0034});
CTransform* Transform958 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape959 = (CShape *)(m_pScene.createNode("Shape"));
Shape959->setUSE("HAnimJointShape");
Transform958->addChild(*Shape959);

Transform957->addChildren(*Transform958);

HAnimSegment956->addChildren(*Transform957);

CShape* Shape960 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet961 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet961->setVertexCount(new int[1]{2});
CCoordinate* Coordinate962 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate962->setPoint(new float[6]{0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236});
LineSet961->setCoord(*Coordinate962);

//from vc1 to skullbase vertices 2
CColorRGBA* ColorRGBA963 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA963->setUSE("HAnimSegmentLineColorRGBA");
LineSet961->setColor(*ColorRGBA963);

Shape960->setGeometry(LineSet961);

HAnimSegment956->addChildren(*Shape960);

CHAnimSite* HAnimSite964 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite964->setName("glabella_pt");
HAnimSite964->setDEF("hanim_glabella_pt");
CTouchSensor* TouchSensor965 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor965->setDescription("HAnimSite glabella_pt");
HAnimSite964->addChildren(*TouchSensor965);

CShape* Shape966 = (CShape *)(m_pScene.createNode("Shape"));
Shape966->setUSE("HAnimSiteShape");
HAnimSite964->addChildren(*Shape966);

HAnimSegment956->addChildren(*HAnimSite964);

CHAnimSite* HAnimSite967 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite967->setName("l_ectocanthus_pt");
HAnimSite967->setDEF("hanim_l_ectocanthus_pt");
CTouchSensor* TouchSensor968 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor968->setDescription("HAnimSite l_ectocanthus_pt");
HAnimSite967->addChildren(*TouchSensor968);

CShape* Shape969 = (CShape *)(m_pScene.createNode("Shape"));
Shape969->setUSE("HAnimSiteShape");
HAnimSite967->addChildren(*Shape969);

HAnimSegment956->addChildren(*HAnimSite967);

CHAnimSite* HAnimSite970 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite970->setName("l_infraorbitale_pt");
HAnimSite970->setDEF("hanim_l_infraorbitale_pt");
HAnimSite970->setTranslation(new float[3]{0.0341,1.6171,0.0752});
CTouchSensor* TouchSensor971 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor971->setDescription("HAnimSite l_infraorbitale_pt");
HAnimSite970->addChildren(*TouchSensor971);

CShape* Shape972 = (CShape *)(m_pScene.createNode("Shape"));
Shape972->setUSE("HAnimSiteShape");
HAnimSite970->addChildren(*Shape972);

HAnimSegment956->addChildren(*HAnimSite970);

CHAnimSite* HAnimSite973 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite973->setName("l_tragion_pt");
HAnimSite973->setDEF("hanim_l_tragion_pt");
HAnimSite973->setTranslation(new float[3]{0.0739,1.6348,0.0282});
CTouchSensor* TouchSensor974 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor974->setDescription("HAnimSite l_tragion_pt");
HAnimSite973->addChildren(*TouchSensor974);

CShape* Shape975 = (CShape *)(m_pScene.createNode("Shape"));
Shape975->setUSE("HAnimSiteShape");
HAnimSite973->addChildren(*Shape975);

HAnimSegment956->addChildren(*HAnimSite973);

CHAnimSite* HAnimSite976 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite976->setName("nuchale_pt");
HAnimSite976->setDEF("hanim_nuchale_pt");
HAnimSite976->setTranslation(new float[3]{0.0039,1.5972,-0.0796});
CTouchSensor* TouchSensor977 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor977->setDescription("HAnimSite nuchale_pt");
HAnimSite976->addChildren(*TouchSensor977);

CShape* Shape978 = (CShape *)(m_pScene.createNode("Shape"));
Shape978->setUSE("HAnimSiteShape");
HAnimSite976->addChildren(*Shape978);

HAnimSegment956->addChildren(*HAnimSite976);

CHAnimSite* HAnimSite979 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite979->setName("opisthocranion_pt");
HAnimSite979->setDEF("hanim_opisthocranion_pt");
CTouchSensor* TouchSensor980 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor980->setDescription("HAnimSite opisthocranion_pt");
HAnimSite979->addChildren(*TouchSensor980);

CShape* Shape981 = (CShape *)(m_pScene.createNode("Shape"));
Shape981->setUSE("HAnimSiteShape");
HAnimSite979->addChildren(*Shape981);

HAnimSegment956->addChildren(*HAnimSite979);

CHAnimSite* HAnimSite982 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite982->setName("r_ectocanthus_pt");
HAnimSite982->setDEF("hanim_r_ectocanthus_pt");
CTouchSensor* TouchSensor983 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor983->setDescription("HAnimSite r_ectocanthus_pt");
HAnimSite982->addChildren(*TouchSensor983);

CShape* Shape984 = (CShape *)(m_pScene.createNode("Shape"));
Shape984->setUSE("HAnimSiteShape");
HAnimSite982->addChildren(*Shape984);

HAnimSegment956->addChildren(*HAnimSite982);

CHAnimSite* HAnimSite985 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite985->setName("r_infraorbitale_pt");
HAnimSite985->setDEF("hanim_r_infraorbitale_pt");
HAnimSite985->setTranslation(new float[3]{-0.0237,1.6171,0.0752});
CTouchSensor* TouchSensor986 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor986->setDescription("HAnimSite r_infraorbitale_pt");
HAnimSite985->addChildren(*TouchSensor986);

CShape* Shape987 = (CShape *)(m_pScene.createNode("Shape"));
Shape987->setUSE("HAnimSiteShape");
HAnimSite985->addChildren(*Shape987);

HAnimSegment956->addChildren(*HAnimSite985);

CHAnimSite* HAnimSite988 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite988->setName("r_tragion_pt");
HAnimSite988->setDEF("hanim_r_tragion_pt");
HAnimSite988->setTranslation(new float[3]{-0.0646,1.6347,0.0302});
CTouchSensor* TouchSensor989 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor989->setDescription("HAnimSite r_tragion_pt");
HAnimSite988->addChildren(*TouchSensor989);

CShape* Shape990 = (CShape *)(m_pScene.createNode("Shape"));
Shape990->setUSE("HAnimSiteShape");
HAnimSite988->addChildren(*Shape990);

HAnimSegment956->addChildren(*HAnimSite988);

CHAnimSite* HAnimSite991 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite991->setName("sellion_pt");
HAnimSite991->setDEF("hanim_sellion_pt");
HAnimSite991->setTranslation(new float[3]{0.0058,1.6316,0.0852});
CTouchSensor* TouchSensor992 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor992->setDescription("HAnimSite sellion_pt");
HAnimSite991->addChildren(*TouchSensor992);

CShape* Shape993 = (CShape *)(m_pScene.createNode("Shape"));
Shape993->setUSE("HAnimSiteShape");
HAnimSite991->addChildren(*Shape993);

HAnimSegment956->addChildren(*HAnimSite991);

CHAnimSite* HAnimSite994 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite994->setName("skull_vertex_pt");
HAnimSite994->setDEF("hanim_skull_vertex_pt");
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
HAnimJoint997->setName("skullbase");
HAnimJoint997->setDEF("hanim_skullbase");
HAnimJoint997->setCenter(new float[3]{0.0044,1.6209,0.0236});
HAnimJoint997->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint997->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment998 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment998->setName("skull");
HAnimSegment998->setDEF("hanim_skull");
CTransform* Transform999 = (CTransform *)(m_pScene.createNode("Transform"));
Transform999->setTranslation(new float[3]{0.0044,1.6209,0.0236});
CTransform* Transform1000 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1001 = (CShape *)(m_pScene.createNode("Shape"));
Shape1001->setUSE("HAnimJointShape");
Transform1000->addChild(*Shape1001);

Transform999->addChildren(*Transform1000);

HAnimSegment998->addChildren(*Transform999);

CShape* Shape1002 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1003 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1003->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1004 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1004->setPoint(new float[6]{0.0044,1.6209,0.0236,2.2365,1.87,1.9285});
LineSet1003->setCoord(*Coordinate1004);

//from skullbase to l_eyelid_joint vertices 2
CColorRGBA* ColorRGBA1005 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1005->setUSE("HAnimSegmentLineColorRGBA");
LineSet1003->setColor(*ColorRGBA1005);

Shape1002->setGeometry(LineSet1003);

HAnimSegment998->addChildren(*Shape1002);

CShape* Shape1006 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1007 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1007->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1008 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1008->setPoint(new float[6]{0.0044,1.6209,0.0236,-2.2535,1.87,1.9285});
LineSet1007->setCoord(*Coordinate1008);

//from skullbase to r_eyelid_joint vertices 2
CColorRGBA* ColorRGBA1009 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1009->setUSE("HAnimSegmentLineColorRGBA");
LineSet1007->setColor(*ColorRGBA1009);

Shape1006->setGeometry(LineSet1007);

HAnimSegment998->addChildren(*Shape1006);

CShape* Shape1010 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1011 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1011->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1012 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1012->setPoint(new float[6]{0.0044,1.6209,0.0236,2.1305,1.8444,4.1555});
LineSet1011->setCoord(*Coordinate1012);

//from skullbase to l_eyeball_joint vertices 2
CColorRGBA* ColorRGBA1013 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1013->setUSE("HAnimSegmentLineColorRGBA");
LineSet1011->setColor(*ColorRGBA1013);

Shape1010->setGeometry(LineSet1011);

HAnimSegment998->addChildren(*Shape1010);

CShape* Shape1014 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1015 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1015->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1016 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1016->setPoint(new float[6]{0.0044,1.6209,0.0236,-2.1475,1.8444,4.1555});
LineSet1015->setCoord(*Coordinate1016);

//from skullbase to r_eyeball_joint vertices 2
CColorRGBA* ColorRGBA1017 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1017->setUSE("HAnimSegmentLineColorRGBA");
LineSet1015->setColor(*ColorRGBA1017);

Shape1014->setGeometry(LineSet1015);

HAnimSegment998->addChildren(*Shape1014);

CShape* Shape1018 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1019 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1019->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1020 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1020->setPoint(new float[6]{0.0044,1.6209,0.0236,0.9581,1.8563,5.2175});
LineSet1019->setCoord(*Coordinate1020);

//from skullbase to l_eyebrow_joint vertices 2
CColorRGBA* ColorRGBA1021 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1021->setUSE("HAnimSegmentLineColorRGBA");
LineSet1019->setColor(*ColorRGBA1021);

Shape1018->setGeometry(LineSet1019);

HAnimSegment998->addChildren(*Shape1018);

CShape* Shape1022 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1023 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1023->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1024 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1024->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.9751,1.8563,5.2175});
LineSet1023->setCoord(*Coordinate1024);

//from skullbase to r_eyebrow_joint vertices 2
CColorRGBA* ColorRGBA1025 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1025->setUSE("HAnimSegmentLineColorRGBA");
LineSet1023->setColor(*ColorRGBA1025);

Shape1022->setGeometry(LineSet1023);

HAnimSegment998->addChildren(*Shape1022);

CShape* Shape1026 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1027 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1027->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1028 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1028->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0085,1.7229,1.148});
LineSet1027->setCoord(*Coordinate1028);

//from skullbase to temporomandibular vertices 2
CColorRGBA* ColorRGBA1029 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1029->setUSE("HAnimSegmentLineColorRGBA");
LineSet1027->setColor(*ColorRGBA1029);

Shape1026->setGeometry(LineSet1027);

HAnimSegment998->addChildren(*Shape1026);

CHAnimSite* HAnimSite1030 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1030->setName("l_gonion_pt");
HAnimSite1030->setDEF("hanim_l_gonion_pt");
HAnimSite1030->setTranslation(new float[3]{0.0631,1.553,0.033});
CTouchSensor* TouchSensor1031 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1031->setDescription("HAnimSite l_gonion_pt");
HAnimSite1030->addChildren(*TouchSensor1031);

CShape* Shape1032 = (CShape *)(m_pScene.createNode("Shape"));
Shape1032->setUSE("HAnimSiteShape");
HAnimSite1030->addChildren(*Shape1032);

HAnimSegment998->addChildren(*HAnimSite1030);

CHAnimSite* HAnimSite1033 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1033->setName("menton_pt");
HAnimSite1033->setDEF("hanim_menton_pt");
CTouchSensor* TouchSensor1034 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1034->setDescription("HAnimSite menton_pt");
HAnimSite1033->addChildren(*TouchSensor1034);

CShape* Shape1035 = (CShape *)(m_pScene.createNode("Shape"));
Shape1035->setUSE("HAnimSiteShape");
HAnimSite1033->addChildren(*Shape1035);

HAnimSegment998->addChildren(*HAnimSite1033);

CHAnimSite* HAnimSite1036 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1036->setName("r_gonion_pt");
HAnimSite1036->setDEF("hanim_r_gonion_pt");
HAnimSite1036->setTranslation(new float[3]{-0.052,1.5529,0.0347});
CTouchSensor* TouchSensor1037 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1037->setDescription("HAnimSite r_gonion_pt");
HAnimSite1036->addChildren(*TouchSensor1037);

CShape* Shape1038 = (CShape *)(m_pScene.createNode("Shape"));
Shape1038->setUSE("HAnimSiteShape");
HAnimSite1036->addChildren(*Shape1038);

HAnimSegment998->addChildren(*HAnimSite1036);

CHAnimSite* HAnimSite1039 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1039->setName("supramenton_pt");
HAnimSite1039->setDEF("hanim_supramenton_pt");
HAnimSite1039->setTranslation(new float[3]{0.0061,1.541,0.0805});
CTouchSensor* TouchSensor1040 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1040->setDescription("HAnimSite supramenton_pt");
HAnimSite1039->addChildren(*TouchSensor1040);

CShape* Shape1041 = (CShape *)(m_pScene.createNode("Shape"));
Shape1041->setUSE("HAnimSiteShape");
HAnimSite1039->addChildren(*Shape1041);

HAnimSegment998->addChildren(*HAnimSite1039);

HAnimJoint997->addChildren(*HAnimSegment998);

CHAnimJoint* HAnimJoint1042 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1042->setName("l_eyelid_joint");
HAnimJoint1042->setDEF("hanim_l_eyelid_joint");
HAnimJoint1042->setCenter(new float[3]{2.2365,1.87,1.9285});
HAnimJoint1042->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1042->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint997->addChildren(*HAnimJoint1042);

CHAnimJoint* HAnimJoint1043 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1043->setName("r_eyelid_joint");
HAnimJoint1043->setDEF("hanim_r_eyelid_joint");
HAnimJoint1043->setCenter(new float[3]{-2.2535,1.87,1.9285});
HAnimJoint1043->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1043->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint997->addChildren(*HAnimJoint1043);

CHAnimJoint* HAnimJoint1044 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1044->setName("l_eyeball_joint");
HAnimJoint1044->setDEF("hanim_l_eyeball_joint");
HAnimJoint1044->setCenter(new float[3]{2.1305,1.8444,4.1555});
HAnimJoint1044->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1044->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint997->addChildren(*HAnimJoint1044);

CHAnimJoint* HAnimJoint1045 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1045->setName("r_eyeball_joint");
HAnimJoint1045->setDEF("hanim_r_eyeball_joint");
HAnimJoint1045->setCenter(new float[3]{-2.1475,1.8444,4.1555});
HAnimJoint1045->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1045->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint997->addChildren(*HAnimJoint1045);

CHAnimJoint* HAnimJoint1046 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1046->setName("l_eyebrow_joint");
HAnimJoint1046->setDEF("hanim_l_eyebrow_joint");
HAnimJoint1046->setCenter(new float[3]{0.9581,1.8563,5.2175});
HAnimJoint1046->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1046->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint997->addChildren(*HAnimJoint1046);

CHAnimJoint* HAnimJoint1047 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1047->setName("r_eyebrow_joint");
HAnimJoint1047->setDEF("hanim_r_eyebrow_joint");
HAnimJoint1047->setCenter(new float[3]{-0.9751,1.8563,5.2175});
HAnimJoint1047->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1047->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint997->addChildren(*HAnimJoint1047);

CHAnimJoint* HAnimJoint1048 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1048->setName("temporomandibular");
HAnimJoint1048->setDEF("hanim_temporomandibular");
HAnimJoint1048->setCenter(new float[3]{-0.0085,1.7229,1.148});
HAnimJoint1048->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1048->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint997->addChildren(*HAnimJoint1048);

HAnimJoint955->addChildren(*HAnimJoint997);

HAnimJoint946->addChildren(*HAnimJoint955);

HAnimJoint934->addChildren(*HAnimJoint946);

HAnimJoint925->addChildren(*HAnimJoint934);

HAnimJoint916->addChildren(*HAnimJoint925);

HAnimJoint907->addChildren(*HAnimJoint916);

HAnimJoint898->addChildren(*HAnimJoint907);

HAnimJoint845->addChildren(*HAnimJoint898);

CHAnimJoint* HAnimJoint1049 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1049->setName("l_sternoclavicular");
HAnimJoint1049->setDEF("hanim_l_sternoclavicular");
HAnimJoint1049->setCenter(new float[3]{0.082,1.4488,-0.0353});
HAnimJoint1049->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1049->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1050 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1050->setName("l_clavicle");
HAnimSegment1050->setDEF("hanim_l_clavicle");
CTransform* Transform1051 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1051->setTranslation(new float[3]{0.082,1.4488,-0.0353});
CTransform* Transform1052 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1053 = (CShape *)(m_pScene.createNode("Shape"));
Shape1053->setUSE("HAnimJointShape");
Transform1052->addChild(*Shape1053);

Transform1051->addChildren(*Transform1052);

HAnimSegment1050->addChildren(*Transform1051);

CShape* Shape1054 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1055 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1055->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1056 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1056->setPoint(new float[6]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424});
LineSet1055->setCoord(*Coordinate1056);

//from l_sternoclavicular to l_acromioclavicular vertices 2
CColorRGBA* ColorRGBA1057 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1057->setUSE("HAnimSegmentLineColorRGBA");
LineSet1055->setColor(*ColorRGBA1057);

Shape1054->setGeometry(LineSet1055);

HAnimSegment1050->addChildren(*Shape1054);

HAnimJoint1049->addChildren(*HAnimSegment1050);

CHAnimJoint* HAnimJoint1058 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1058->setName("l_acromioclavicular");
HAnimJoint1058->setDEF("hanim_l_acromioclavicular");
HAnimJoint1058->setCenter(new float[3]{0.0962,1.4269,-0.0424});
HAnimJoint1058->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1058->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1059 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1059->setName("l_scapula");
HAnimSegment1059->setDEF("hanim_l_scapula");
CTransform* Transform1060 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1060->setTranslation(new float[3]{0.0962,1.4269,-0.0424});
CTransform* Transform1061 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1062 = (CShape *)(m_pScene.createNode("Shape"));
Shape1062->setUSE("HAnimJointShape");
Transform1061->addChild(*Shape1062);

Transform1060->addChildren(*Transform1061);

HAnimSegment1059->addChildren(*Transform1060);

CShape* Shape1063 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1064 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1064->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1065 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1065->setPoint(new float[6]{0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387});
LineSet1064->setCoord(*Coordinate1065);

//from l_acromioclavicular to l_shoulder vertices 2
CColorRGBA* ColorRGBA1066 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1066->setUSE("HAnimSegmentLineColorRGBA");
LineSet1064->setColor(*ColorRGBA1066);

Shape1063->setGeometry(LineSet1064);

HAnimSegment1059->addChildren(*Shape1063);

CHAnimSite* HAnimSite1067 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1067->setName("l_bideltoid_pt");
HAnimSite1067->setDEF("hanim_l_bideltoid_pt");
CTouchSensor* TouchSensor1068 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1068->setDescription("HAnimSite l_bideltoid_pt");
HAnimSite1067->addChildren(*TouchSensor1068);

CShape* Shape1069 = (CShape *)(m_pScene.createNode("Shape"));
Shape1069->setUSE("HAnimSiteShape");
HAnimSite1067->addChildren(*Shape1069);

HAnimSegment1059->addChildren(*HAnimSite1067);

CHAnimSite* HAnimSite1070 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1070->setName("l_humeral_lateral_epicondyles_pt");
HAnimSite1070->setDEF("hanim_l_humeral_lateral_epicondyles_pt");
HAnimSite1070->setTranslation(new float[3]{0.228,1.1482,-0.11});
CTouchSensor* TouchSensor1071 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1071->setDescription("HAnimSite l_humeral_lateral_epicondyles_pt");
HAnimSite1070->addChildren(*TouchSensor1071);

CShape* Shape1072 = (CShape *)(m_pScene.createNode("Shape"));
Shape1072->setUSE("HAnimSiteShape");
HAnimSite1070->addChildren(*Shape1072);

HAnimSegment1059->addChildren(*HAnimSite1070);

HAnimJoint1058->addChildren(*HAnimSegment1059);

CHAnimJoint* HAnimJoint1073 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1073->setName("l_shoulder");
HAnimJoint1073->setDEF("hanim_l_shoulder");
HAnimJoint1073->setCenter(new float[3]{0.2029,1.4376,-0.0387});
HAnimJoint1073->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1073->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1074 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1074->setName("l_upperarm");
HAnimSegment1074->setDEF("hanim_l_upperarm");
CTransform* Transform1075 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1075->setTranslation(new float[3]{0.2029,1.4376,-0.0387});
CTransform* Transform1076 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1077 = (CShape *)(m_pScene.createNode("Shape"));
Shape1077->setUSE("HAnimJointShape");
Transform1076->addChild(*Shape1077);

Transform1075->addChildren(*Transform1076);

HAnimSegment1074->addChildren(*Transform1075);

CShape* Shape1078 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1079 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1079->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1080 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1080->setPoint(new float[6]{0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682});
LineSet1079->setCoord(*Coordinate1080);

//from l_shoulder to l_elbow vertices 2
CColorRGBA* ColorRGBA1081 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1081->setUSE("HAnimSegmentLineColorRGBA");
LineSet1079->setColor(*ColorRGBA1081);

Shape1078->setGeometry(LineSet1079);

HAnimSegment1074->addChildren(*Shape1078);

CHAnimSite* HAnimSite1082 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1082->setName("l_humeral_medial_epicondyles_pt");
HAnimSite1082->setDEF("hanim_l_humeral_medial_epicondyles_pt");
HAnimSite1082->setTranslation(new float[3]{0.1735,1.1272,-0.1113});
CTouchSensor* TouchSensor1083 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1083->setDescription("HAnimSite l_humeral_medial_epicondyles_pt");
HAnimSite1082->addChildren(*TouchSensor1083);

CShape* Shape1084 = (CShape *)(m_pScene.createNode("Shape"));
Shape1084->setUSE("HAnimSiteShape");
HAnimSite1082->addChildren(*Shape1084);

HAnimSegment1074->addChildren(*HAnimSite1082);

CHAnimSite* HAnimSite1085 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1085->setName("l_olecranon_pt");
HAnimSite1085->setDEF("hanim_l_olecranon_pt");
HAnimSite1085->setTranslation(new float[3]{-0.1962,1.1375,-0.1123});
CTouchSensor* TouchSensor1086 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1086->setDescription("HAnimSite l_olecranon_pt");
HAnimSite1085->addChildren(*TouchSensor1086);

CShape* Shape1087 = (CShape *)(m_pScene.createNode("Shape"));
Shape1087->setUSE("HAnimSiteShape");
HAnimSite1085->addChildren(*Shape1087);

HAnimSegment1074->addChildren(*HAnimSite1085);

CHAnimSite* HAnimSite1088 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1088->setName("l_radial_styloid_pt");
HAnimSite1088->setDEF("hanim_l_radial_styloid_pt");
HAnimSite1088->setTranslation(new float[3]{0.1901,0.8645,-0.0415});
CTouchSensor* TouchSensor1089 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1089->setDescription("HAnimSite l_radial_styloid_pt");
HAnimSite1088->addChildren(*TouchSensor1089);

CShape* Shape1090 = (CShape *)(m_pScene.createNode("Shape"));
Shape1090->setUSE("HAnimSiteShape");
HAnimSite1088->addChildren(*Shape1090);

HAnimSegment1074->addChildren(*HAnimSite1088);

CHAnimSite* HAnimSite1091 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1091->setName("l_radiale_pt");
HAnimSite1091->setDEF("hanim_l_radiale_pt");
HAnimSite1091->setTranslation(new float[3]{0.2182,1.1212,-0.1167});
CTouchSensor* TouchSensor1092 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1092->setDescription("HAnimSite l_radiale_pt");
HAnimSite1091->addChildren(*TouchSensor1092);

CShape* Shape1093 = (CShape *)(m_pScene.createNode("Shape"));
Shape1093->setUSE("HAnimSiteShape");
HAnimSite1091->addChildren(*Shape1093);

HAnimSegment1074->addChildren(*HAnimSite1091);

HAnimJoint1073->addChildren(*HAnimSegment1074);

CHAnimJoint* HAnimJoint1094 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1094->setName("l_elbow");
HAnimJoint1094->setDEF("hanim_l_elbow");
HAnimJoint1094->setCenter(new float[3]{0.2014,1.1357,-0.0682});
HAnimJoint1094->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1094->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1095 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1095->setName("l_forearm");
HAnimSegment1095->setDEF("hanim_l_forearm");
CTransform* Transform1096 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1096->setTranslation(new float[3]{0.2014,1.1357,-0.0682});
CTransform* Transform1097 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1098 = (CShape *)(m_pScene.createNode("Shape"));
Shape1098->setUSE("HAnimJointShape");
Transform1097->addChild(*Shape1098);

Transform1096->addChildren(*Transform1097);

HAnimSegment1095->addChildren(*Transform1096);

CShape* Shape1099 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1100 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1100->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1101 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1101->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583});
LineSet1100->setCoord(*Coordinate1101);

//from l_elbow to l_radiocarpal vertices 2
CColorRGBA* ColorRGBA1102 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1102->setUSE("HAnimSegmentLineColorRGBA");
LineSet1100->setColor(*ColorRGBA1102);

Shape1099->setGeometry(LineSet1100);

HAnimSegment1095->addChildren(*Shape1099);

CHAnimSite* HAnimSite1103 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1103->setName("l_ulnar_styloid_pt");
HAnimSite1103->setDEF("hanim_l_ulnar_styloid_pt");
HAnimSite1103->setTranslation(new float[3]{-0.2142,0.8529,-0.0648});
CTouchSensor* TouchSensor1104 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1104->setDescription("HAnimSite l_ulnar_styloid_pt");
HAnimSite1103->addChildren(*TouchSensor1104);

CShape* Shape1105 = (CShape *)(m_pScene.createNode("Shape"));
Shape1105->setUSE("HAnimSiteShape");
HAnimSite1103->addChildren(*Shape1105);

HAnimSegment1095->addChildren(*HAnimSite1103);

HAnimJoint1094->addChildren(*HAnimSegment1095);

CHAnimJoint* HAnimJoint1106 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1106->setName("l_radiocarpal");
HAnimJoint1106->setDEF("hanim_l_radiocarpal");
HAnimJoint1106->setCenter(new float[3]{0.1984,0.8663,-0.0583});
HAnimJoint1106->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1106->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1107 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1107->setName("l_carpal");
HAnimSegment1107->setDEF("hanim_l_carpal");
CTransform* Transform1108 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1108->setScale(new float[3]{0.2,0.2,0.2});
Transform1108->setTranslation(new float[3]{0.2,0.85,-0.05});
Transform1108->setRotation(new float[4]{0,0,1,-3.14});
//Transform left hand
CTransform* Transform1109 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1109->setRotation(new float[4]{0,1,0,-1.57});
//Transform left hand
CShape* Shape1110 = (CShape *)(m_pScene.createNode("Shape"));
Shape1110->setUSE("HAnimJointShape");
Transform1109->addChild(*Shape1110);

Transform1108->addChildren(*Transform1109);

HAnimSegment1107->addChildren(*Transform1108);

CShape* Shape1111 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1112 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1112->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1113 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1113->setPoint(new float[6]{0.1984,0.8663,-0.0583,8.0485,0.9213,1.3235});
LineSet1112->setCoord(*Coordinate1113);

//from l_radiocarpal to l_midcarpal_1 vertices 2
CColorRGBA* ColorRGBA1114 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1114->setUSE("HAnimSegmentLineColorRGBA");
LineSet1112->setColor(*ColorRGBA1114);

Shape1111->setGeometry(LineSet1112);

HAnimSegment1107->addChildren(*Shape1111);

CShape* Shape1115 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1116 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1116->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1117 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1117->setPoint(new float[6]{0.1984,0.8663,-0.0583,8.0485,0.9225,0.8386});
LineSet1116->setCoord(*Coordinate1117);

//from l_radiocarpal to l_midcarpal_2 vertices 2
CColorRGBA* ColorRGBA1118 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1118->setUSE("HAnimSegmentLineColorRGBA");
LineSet1116->setColor(*ColorRGBA1118);

Shape1115->setGeometry(LineSet1116);

HAnimSegment1107->addChildren(*Shape1115);

CShape* Shape1119 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1120 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1120->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1121 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1121->setPoint(new float[6]{0.1984,0.8663,-0.0583,8.0395,0.9246,0.2513});
LineSet1120->setCoord(*Coordinate1121);

//from l_radiocarpal to l_midcarpal_3 vertices 2
CColorRGBA* ColorRGBA1122 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1122->setUSE("HAnimSegmentLineColorRGBA");
LineSet1120->setColor(*ColorRGBA1122);

Shape1119->setGeometry(LineSet1120);

HAnimSegment1107->addChildren(*Shape1119);

CShape* Shape1123 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1124 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1124->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1125 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1125->setPoint(new float[6]{0.1984,0.8663,-0.0583,8.0395,0.921,-0.6795});
LineSet1124->setCoord(*Coordinate1125);

//from l_radiocarpal to l_midcarpal_4_5 vertices 2
CColorRGBA* ColorRGBA1126 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1126->setUSE("HAnimSegmentLineColorRGBA");
LineSet1124->setColor(*ColorRGBA1126);

Shape1123->setGeometry(LineSet1124);

HAnimSegment1107->addChildren(*Shape1123);

HAnimJoint1106->addChildren(*HAnimSegment1107);

CHAnimJoint* HAnimJoint1127 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1127->setName("l_midcarpal_1");
HAnimJoint1127->setDEF("hanim_l_midcarpal_1");
HAnimJoint1127->setCenter(new float[3]{8.0485,0.9213,1.3235});
HAnimJoint1127->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1127->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1128 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1128->setName("l_trapezium");
HAnimSegment1128->setDEF("hanim_l_trapezium");
CTransform* Transform1129 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1129->setTranslation(new float[3]{8.0485,0.9213,1.3235});
CTransform* Transform1130 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1131 = (CShape *)(m_pScene.createNode("Shape"));
Shape1131->setUSE("HAnimJointShape");
Transform1130->addChild(*Shape1131);

Transform1129->addChildren(*Transform1130);

HAnimSegment1128->addChildren(*Transform1129);

CShape* Shape1132 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1133 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1133->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1134 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1134->setPoint(new float[6]{8.0485,0.9213,1.3235,0.1924,0.8472,-0.0534});
LineSet1133->setCoord(*Coordinate1134);

//from l_midcarpal_1 to l_carpometacarpal_1 vertices 2
CColorRGBA* ColorRGBA1135 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1135->setUSE("HAnimSegmentLineColorRGBA");
LineSet1133->setColor(*ColorRGBA1135);

Shape1132->setGeometry(LineSet1133);

HAnimSegment1128->addChildren(*Shape1132);

HAnimJoint1127->addChildren(*HAnimSegment1128);

CHAnimJoint* HAnimJoint1136 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1136->setName("l_carpometacarpal_1");
HAnimJoint1136->setDEF("hanim_l_carpometacarpal_1");
HAnimJoint1136->setCenter(new float[3]{0.1924,0.8472,-0.0534});
HAnimJoint1136->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1136->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1137 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1137->setName("l_metacarpal_1");
HAnimSegment1137->setDEF("hanim_l_metacarpal_1");
CTransform* Transform1138 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1138->setTranslation(new float[3]{0.1924,0.8472,-0.0534});
CTransform* Transform1139 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1140 = (CShape *)(m_pScene.createNode("Shape"));
Shape1140->setUSE("HAnimJointShape");
Transform1139->addChild(*Shape1140);

Transform1138->addChildren(*Transform1139);

HAnimSegment1137->addChildren(*Transform1138);

CShape* Shape1141 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1142 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1142->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1143 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1143->setPoint(new float[6]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246});
LineSet1142->setCoord(*Coordinate1143);

//from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
CColorRGBA* ColorRGBA1144 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1144->setUSE("HAnimSegmentLineColorRGBA");
LineSet1142->setColor(*ColorRGBA1144);

Shape1141->setGeometry(LineSet1142);

HAnimSegment1137->addChildren(*Shape1141);

HAnimJoint1136->addChildren(*HAnimSegment1137);

CHAnimJoint* HAnimJoint1145 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1145->setName("l_metacarpophalangeal_1");
HAnimJoint1145->setDEF("hanim_l_metacarpophalangeal_1");
HAnimJoint1145->setCenter(new float[3]{0.1951,0.8226,0.0246});
HAnimJoint1145->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1145->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1146 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1146->setName("l_carpal_proximal_phalanx_1");
HAnimSegment1146->setDEF("hanim_l_carpal_proximal_phalanx_1");
CTransform* Transform1147 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1147->setTranslation(new float[3]{0.1951,0.8226,0.0246});
CTransform* Transform1148 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1149 = (CShape *)(m_pScene.createNode("Shape"));
Shape1149->setUSE("HAnimJointShape");
Transform1148->addChild(*Shape1149);

Transform1147->addChildren(*Transform1148);

HAnimSegment1146->addChildren(*Transform1147);

CShape* Shape1150 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1151 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1151->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1152 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1152->setPoint(new float[6]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464});
LineSet1151->setCoord(*Coordinate1152);

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
CColorRGBA* ColorRGBA1153 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1153->setUSE("HAnimSegmentLineColorRGBA");
LineSet1151->setColor(*ColorRGBA1153);

Shape1150->setGeometry(LineSet1151);

HAnimSegment1146->addChildren(*Shape1150);

CHAnimSite* HAnimSite1154 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1154->setName("l_carpal_distal_phalanx_1_tip");
HAnimSite1154->setDEF("hanim_l_carpal_distal_phalanx_1_tip");
CTouchSensor* TouchSensor1155 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1155->setDescription("HAnimSite l_carpal_distal_phalanx_1_tip");
HAnimSite1154->addChildren(*TouchSensor1155);

CShape* Shape1156 = (CShape *)(m_pScene.createNode("Shape"));
Shape1156->setUSE("HAnimSiteShape");
HAnimSite1154->addChildren(*Shape1156);

HAnimSegment1146->addChildren(*HAnimSite1154);

HAnimJoint1145->addChildren(*HAnimSegment1146);

CHAnimJoint* HAnimJoint1157 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1157->setName("l_carpal_interphalangeal_1");
HAnimJoint1157->setDEF("hanim_l_carpal_interphalangeal_1");
HAnimJoint1157->setCenter(new float[3]{0.1955,0.8159,0.0464});
HAnimJoint1157->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1157->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1145->addChildren(*HAnimJoint1157);

HAnimJoint1136->addChildren(*HAnimJoint1145);

HAnimJoint1127->addChildren(*HAnimJoint1136);

HAnimJoint1106->addChildren(*HAnimJoint1127);

CHAnimJoint* HAnimJoint1158 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1158->setName("l_midcarpal_2");
HAnimJoint1158->setDEF("hanim_l_midcarpal_2");
HAnimJoint1158->setCenter(new float[3]{8.0485,0.9225,0.8386});
HAnimJoint1158->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1158->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1159 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1159->setName("l_trapezoid");
HAnimSegment1159->setDEF("hanim_l_trapezoid");
CTransform* Transform1160 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1160->setTranslation(new float[3]{8.0485,0.9225,0.8386});
CTransform* Transform1161 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1162 = (CShape *)(m_pScene.createNode("Shape"));
Shape1162->setUSE("HAnimJointShape");
Transform1161->addChild(*Shape1162);

Transform1160->addChildren(*Transform1161);

HAnimSegment1159->addChildren(*Transform1160);

CShape* Shape1163 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1164 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1164->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1165 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1165->setPoint(new float[6]{8.0485,0.9225,0.8386,0.1983,0.8024,-0.028});
LineSet1164->setCoord(*Coordinate1165);

//from l_midcarpal_2 to l_carpometacarpal_2 vertices 2
CColorRGBA* ColorRGBA1166 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1166->setUSE("HAnimSegmentLineColorRGBA");
LineSet1164->setColor(*ColorRGBA1166);

Shape1163->setGeometry(LineSet1164);

HAnimSegment1159->addChildren(*Shape1163);

CHAnimSite* HAnimSite1167 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1167->setName("l_metacarpal_phalanx_2_pt");
HAnimSite1167->setDEF("hanim_l_metacarpal_phalanx_2_pt");
HAnimSite1167->setTranslation(new float[3]{0.2009,0.8139,-0.0237});
CTouchSensor* TouchSensor1168 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1168->setDescription("HAnimSite l_metacarpal_phalanx_2_pt");
HAnimSite1167->addChildren(*TouchSensor1168);

CShape* Shape1169 = (CShape *)(m_pScene.createNode("Shape"));
Shape1169->setUSE("HAnimSiteShape");
HAnimSite1167->addChildren(*Shape1169);

HAnimSegment1159->addChildren(*HAnimSite1167);

HAnimJoint1158->addChildren(*HAnimSegment1159);

CHAnimJoint* HAnimJoint1170 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1170->setName("l_carpometacarpal_2");
HAnimJoint1170->setDEF("hanim_l_carpometacarpal_2");
HAnimJoint1170->setCenter(new float[3]{0.1983,0.8024,-0.028});
HAnimJoint1170->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1170->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1171 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1171->setName("l_metacarpal_2");
HAnimSegment1171->setDEF("hanim_l_metacarpal_2");
CTransform* Transform1172 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1172->setTranslation(new float[3]{0.1983,0.8024,-0.028});
CTransform* Transform1173 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1174 = (CShape *)(m_pScene.createNode("Shape"));
Shape1174->setUSE("HAnimJointShape");
Transform1173->addChild(*Shape1174);

Transform1172->addChildren(*Transform1173);

HAnimSegment1171->addChildren(*Transform1172);

CShape* Shape1175 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1176 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1176->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1177 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1177->setPoint(new float[6]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028});
LineSet1176->setCoord(*Coordinate1177);

//from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
CColorRGBA* ColorRGBA1178 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1178->setUSE("HAnimSegmentLineColorRGBA");
LineSet1176->setColor(*ColorRGBA1178);

Shape1175->setGeometry(LineSet1176);

HAnimSegment1171->addChildren(*Shape1175);

HAnimJoint1170->addChildren(*HAnimSegment1171);

CHAnimJoint* HAnimJoint1179 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1179->setName("l_metacarpophalangeal_2");
HAnimJoint1179->setDEF("hanim_l_metacarpophalangeal_2");
HAnimJoint1179->setCenter(new float[3]{0.1983,0.7815,-0.028});
HAnimJoint1179->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1179->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1180 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1180->setName("l_carpal_proximal_phalanx_2");
HAnimSegment1180->setDEF("hanim_l_carpal_proximal_phalanx_2");
CTransform* Transform1181 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1181->setTranslation(new float[3]{0.1983,0.7815,-0.028});
CTransform* Transform1182 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1183 = (CShape *)(m_pScene.createNode("Shape"));
Shape1183->setUSE("HAnimJointShape");
Transform1182->addChild(*Shape1183);

Transform1181->addChildren(*Transform1182);

HAnimSegment1180->addChildren(*Transform1181);

CShape* Shape1184 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1185 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1185->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1186 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1186->setPoint(new float[6]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248});
LineSet1185->setCoord(*Coordinate1186);

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA1187 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1187->setUSE("HAnimSegmentLineColorRGBA");
LineSet1185->setColor(*ColorRGBA1187);

Shape1184->setGeometry(LineSet1185);

HAnimSegment1180->addChildren(*Shape1184);

HAnimJoint1179->addChildren(*HAnimSegment1180);

CHAnimJoint* HAnimJoint1188 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1188->setName("l_carpal_proximal_interphalangeal_2");
HAnimJoint1188->setDEF("hanim_l_carpal_proximal_interphalangeal_2");
HAnimJoint1188->setCenter(new float[3]{0.2017,0.7363,-0.0248});
HAnimJoint1188->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1188->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1189 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1189->setName("l_carpal_middle_phalanx_2");
HAnimSegment1189->setDEF("hanim_l_carpal_middle_phalanx_2");
CTransform* Transform1190 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1190->setTranslation(new float[3]{0.2017,0.7363,-0.0248});
CTransform* Transform1191 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1192 = (CShape *)(m_pScene.createNode("Shape"));
Shape1192->setUSE("HAnimJointShape");
Transform1191->addChild(*Shape1192);

Transform1190->addChildren(*Transform1191);

HAnimSegment1189->addChildren(*Transform1190);

CShape* Shape1193 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1194 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1194->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1195 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1195->setPoint(new float[6]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236});
LineSet1194->setCoord(*Coordinate1195);

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA1196 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1196->setUSE("HAnimSegmentLineColorRGBA");
LineSet1194->setColor(*ColorRGBA1196);

Shape1193->setGeometry(LineSet1194);

HAnimSegment1189->addChildren(*Shape1193);

CHAnimSite* HAnimSite1197 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1197->setName("l_carpal_distal_phalanx_2_tip");
HAnimSite1197->setDEF("hanim_l_carpal_distal_phalanx_2_tip");
CTouchSensor* TouchSensor1198 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1198->setDescription("HAnimSite l_carpal_distal_phalanx_2_tip");
HAnimSite1197->addChildren(*TouchSensor1198);

CShape* Shape1199 = (CShape *)(m_pScene.createNode("Shape"));
Shape1199->setUSE("HAnimSiteShape");
HAnimSite1197->addChildren(*Shape1199);

HAnimSegment1189->addChildren(*HAnimSite1197);

CHAnimSite* HAnimSite1200 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1200->setName("l_dactylion_pt");
HAnimSite1200->setDEF("hanim_l_dactylion_pt");
HAnimSite1200->setTranslation(new float[3]{0.2056,0.6743,-0.0482});
CTouchSensor* TouchSensor1201 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1201->setDescription("HAnimSite l_dactylion_pt");
HAnimSite1200->addChildren(*TouchSensor1201);

CShape* Shape1202 = (CShape *)(m_pScene.createNode("Shape"));
Shape1202->setUSE("HAnimSiteShape");
HAnimSite1200->addChildren(*Shape1202);

HAnimSegment1189->addChildren(*HAnimSite1200);

HAnimJoint1188->addChildren(*HAnimSegment1189);

CHAnimJoint* HAnimJoint1203 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1203->setName("l_carpal_distal_interphalangeal_2");
HAnimJoint1203->setDEF("hanim_l_carpal_distal_interphalangeal_2");
HAnimJoint1203->setCenter(new float[3]{0.2028,0.7139,-0.0236});
HAnimJoint1203->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1203->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1188->addChildren(*HAnimJoint1203);

HAnimJoint1179->addChildren(*HAnimJoint1188);

HAnimJoint1170->addChildren(*HAnimJoint1179);

HAnimJoint1158->addChildren(*HAnimJoint1170);

HAnimJoint1106->addChildren(*HAnimJoint1158);

CHAnimJoint* HAnimJoint1204 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1204->setName("l_midcarpal_3");
HAnimJoint1204->setDEF("hanim_l_midcarpal_3");
HAnimJoint1204->setCenter(new float[3]{8.0395,0.9246,0.2513});
HAnimJoint1204->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1204->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1205 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1205->setName("l_capitate");
HAnimSegment1205->setDEF("hanim_l_capitate");
CTransform* Transform1206 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1206->setTranslation(new float[3]{8.0395,0.9246,0.2513});
CTransform* Transform1207 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1208 = (CShape *)(m_pScene.createNode("Shape"));
Shape1208->setUSE("HAnimJointShape");
Transform1207->addChild(*Shape1208);

Transform1206->addChildren(*Transform1207);

HAnimSegment1205->addChildren(*Transform1206);

CShape* Shape1209 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1210 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1210->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1211 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1211->setPoint(new float[6]{8.0395,0.9246,0.2513,0.1987,0.8029,-0.053});
LineSet1210->setCoord(*Coordinate1211);

//from l_midcarpal_3 to l_carpometacarpal_3 vertices 2
CColorRGBA* ColorRGBA1212 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1212->setUSE("HAnimSegmentLineColorRGBA");
LineSet1210->setColor(*ColorRGBA1212);

Shape1209->setGeometry(LineSet1210);

HAnimSegment1205->addChildren(*Shape1209);

CHAnimSite* HAnimSite1213 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1213->setName("l_metacarpal_phalanx_3_pt");
HAnimSite1213->setDEF("hanim_l_metacarpal_phalanx_3_pt");
CTouchSensor* TouchSensor1214 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1214->setDescription("HAnimSite l_metacarpal_phalanx_3_pt");
HAnimSite1213->addChildren(*TouchSensor1214);

CShape* Shape1215 = (CShape *)(m_pScene.createNode("Shape"));
Shape1215->setUSE("HAnimSiteShape");
HAnimSite1213->addChildren(*Shape1215);

HAnimSegment1205->addChildren(*HAnimSite1213);

HAnimJoint1204->addChildren(*HAnimSegment1205);

CHAnimJoint* HAnimJoint1216 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1216->setName("l_carpometacarpal_3");
HAnimJoint1216->setDEF("hanim_l_carpometacarpal_3");
HAnimJoint1216->setCenter(new float[3]{0.1987,0.8029,-0.053});
HAnimJoint1216->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1216->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1217 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1217->setName("l_metacarpal_3");
HAnimSegment1217->setDEF("hanim_l_metacarpal_3");
CTransform* Transform1218 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1218->setTranslation(new float[3]{0.1987,0.8029,-0.053});
CTransform* Transform1219 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1220 = (CShape *)(m_pScene.createNode("Shape"));
Shape1220->setUSE("HAnimJointShape");
Transform1219->addChild(*Shape1220);

Transform1218->addChildren(*Transform1219);

HAnimSegment1217->addChildren(*Transform1218);

CShape* Shape1221 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1222 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1222->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1223 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1223->setPoint(new float[6]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053});
LineSet1222->setCoord(*Coordinate1223);

//from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
CColorRGBA* ColorRGBA1224 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1224->setUSE("HAnimSegmentLineColorRGBA");
LineSet1222->setColor(*ColorRGBA1224);

Shape1221->setGeometry(LineSet1222);

HAnimSegment1217->addChildren(*Shape1221);

HAnimJoint1216->addChildren(*HAnimSegment1217);

CHAnimJoint* HAnimJoint1225 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1225->setName("l_metacarpophalangeal_3");
HAnimJoint1225->setDEF("hanim_l_metacarpophalangeal_3");
HAnimJoint1225->setCenter(new float[3]{0.1987,0.7818,-0.053});
HAnimJoint1225->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1225->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1226 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1226->setName("l_carpal_proximal_phalanx_3");
HAnimSegment1226->setDEF("hanim_l_carpal_proximal_phalanx_3");
CTransform* Transform1227 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1227->setTranslation(new float[3]{0.1987,0.7818,-0.053});
CTransform* Transform1228 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1229 = (CShape *)(m_pScene.createNode("Shape"));
Shape1229->setUSE("HAnimJointShape");
Transform1228->addChild(*Shape1229);

Transform1227->addChildren(*Transform1228);

HAnimSegment1226->addChildren(*Transform1227);

CShape* Shape1230 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1231 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1231->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1232 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1232->setPoint(new float[6]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503});
LineSet1231->setCoord(*Coordinate1232);

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA1233 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1233->setUSE("HAnimSegmentLineColorRGBA");
LineSet1231->setColor(*ColorRGBA1233);

Shape1230->setGeometry(LineSet1231);

HAnimSegment1226->addChildren(*Shape1230);

HAnimJoint1225->addChildren(*HAnimSegment1226);

CHAnimJoint* HAnimJoint1234 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1234->setName("l_carpal_proximal_interphalangeal_3");
HAnimJoint1234->setDEF("hanim_l_carpal_proximal_interphalangeal_3");
HAnimJoint1234->setCenter(new float[3]{0.2013,0.7273,-0.0503});
HAnimJoint1234->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1234->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1235 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1235->setName("l_carpal_middle_phalanx_3");
HAnimSegment1235->setDEF("hanim_l_carpal_middle_phalanx_3");
CTransform* Transform1236 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1236->setTranslation(new float[3]{0.2013,0.7273,-0.0503});
CTransform* Transform1237 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1238 = (CShape *)(m_pScene.createNode("Shape"));
Shape1238->setUSE("HAnimJointShape");
Transform1237->addChild(*Shape1238);

Transform1236->addChildren(*Transform1237);

HAnimSegment1235->addChildren(*Transform1236);

CShape* Shape1239 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1240 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1240->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1241 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1241->setPoint(new float[6]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494});
LineSet1240->setCoord(*Coordinate1241);

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA1242 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1242->setUSE("HAnimSegmentLineColorRGBA");
LineSet1240->setColor(*ColorRGBA1242);

Shape1239->setGeometry(LineSet1240);

HAnimSegment1235->addChildren(*Shape1239);

CHAnimSite* HAnimSite1243 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1243->setName("l_carpal_distal_phalanx_3_tip");
HAnimSite1243->setDEF("hanim_l_carpal_distal_phalanx_3_tip");
CTouchSensor* TouchSensor1244 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1244->setDescription("HAnimSite l_carpal_distal_phalanx_3_tip");
HAnimSite1243->addChildren(*TouchSensor1244);

CShape* Shape1245 = (CShape *)(m_pScene.createNode("Shape"));
Shape1245->setUSE("HAnimSiteShape");
HAnimSite1243->addChildren(*Shape1245);

HAnimSegment1235->addChildren(*HAnimSite1243);

HAnimJoint1234->addChildren(*HAnimSegment1235);

CHAnimJoint* HAnimJoint1246 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1246->setName("l_carpal_distal_interphalangeal_3");
HAnimJoint1246->setDEF("hanim_l_carpal_distal_interphalangeal_3");
HAnimJoint1246->setCenter(new float[3]{0.2026,0.7011,-0.0494});
HAnimJoint1246->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1246->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1234->addChildren(*HAnimJoint1246);

HAnimJoint1225->addChildren(*HAnimJoint1234);

HAnimJoint1216->addChildren(*HAnimJoint1225);

HAnimJoint1204->addChildren(*HAnimJoint1216);

HAnimJoint1106->addChildren(*HAnimJoint1204);

CHAnimJoint* HAnimJoint1247 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1247->setName("l_midcarpal_4_5");
HAnimJoint1247->setDEF("hanim_l_midcarpal_4_5");
HAnimJoint1247->setCenter(new float[3]{8.0395,0.921,-0.6795});
HAnimJoint1247->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1247->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1248 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1248->setName("l_hamate");
HAnimSegment1248->setDEF("hanim_l_hamate");
CTransform* Transform1249 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1249->setTranslation(new float[3]{8.0395,0.921,-0.6795});
CTransform* Transform1250 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1251 = (CShape *)(m_pScene.createNode("Shape"));
Shape1251->setUSE("HAnimJointShape");
Transform1250->addChild(*Shape1251);

Transform1249->addChildren(*Transform1250);

HAnimSegment1248->addChildren(*Transform1249);

CShape* Shape1252 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1253 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1253->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1254 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1254->setPoint(new float[6]{8.0395,0.921,-0.6795,0.1956,0.8019,-0.0794});
LineSet1253->setCoord(*Coordinate1254);

//from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 2
CColorRGBA* ColorRGBA1255 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1255->setUSE("HAnimSegmentLineColorRGBA");
LineSet1253->setColor(*ColorRGBA1255);

Shape1252->setGeometry(LineSet1253);

HAnimSegment1248->addChildren(*Shape1252);

CShape* Shape1256 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1257 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1257->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1258 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1258->setPoint(new float[6]{8.0395,0.921,-0.6795,0.1925,0.8066,-0.1036});
LineSet1257->setCoord(*Coordinate1258);

//from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 2
CColorRGBA* ColorRGBA1259 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1259->setUSE("HAnimSegmentLineColorRGBA");
LineSet1257->setColor(*ColorRGBA1259);

Shape1256->setGeometry(LineSet1257);

HAnimSegment1248->addChildren(*Shape1256);

CHAnimSite* HAnimSite1260 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1260->setName("l_metacarpal_phalanx_5_pt");
HAnimSite1260->setDEF("hanim_l_metacarpal_phalanx_5_pt");
HAnimSite1260->setTranslation(new float[3]{0.1929,0.786,-0.1122});
CTouchSensor* TouchSensor1261 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1261->setDescription("HAnimSite l_metacarpal_phalanx_5_pt");
HAnimSite1260->addChildren(*TouchSensor1261);

CShape* Shape1262 = (CShape *)(m_pScene.createNode("Shape"));
Shape1262->setUSE("HAnimSiteShape");
HAnimSite1260->addChildren(*Shape1262);

HAnimSegment1248->addChildren(*HAnimSite1260);

HAnimJoint1247->addChildren(*HAnimSegment1248);

CHAnimJoint* HAnimJoint1263 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1263->setName("l_carpometacarpal_4");
HAnimJoint1263->setDEF("hanim_l_carpometacarpal_4");
HAnimJoint1263->setCenter(new float[3]{0.1956,0.8019,-0.0794});
HAnimJoint1263->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1263->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1264 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1264->setName("l_metacarpal_4");
HAnimSegment1264->setDEF("hanim_l_metacarpal_4");
CTransform* Transform1265 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1265->setTranslation(new float[3]{0.1956,0.8019,-0.0794});
CTransform* Transform1266 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1267 = (CShape *)(m_pScene.createNode("Shape"));
Shape1267->setUSE("HAnimJointShape");
Transform1266->addChild(*Shape1267);

Transform1265->addChildren(*Transform1266);

HAnimSegment1264->addChildren(*Transform1265);

CShape* Shape1268 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1269 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1269->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1270 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1270->setPoint(new float[6]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794});
LineSet1269->setCoord(*Coordinate1270);

//from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
CColorRGBA* ColorRGBA1271 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1271->setUSE("HAnimSegmentLineColorRGBA");
LineSet1269->setColor(*ColorRGBA1271);

Shape1268->setGeometry(LineSet1269);

HAnimSegment1264->addChildren(*Shape1268);

HAnimJoint1263->addChildren(*HAnimSegment1264);

CHAnimJoint* HAnimJoint1272 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1272->setName("l_metacarpophalangeal_4");
HAnimJoint1272->setDEF("hanim_l_metacarpophalangeal_4");
HAnimJoint1272->setCenter(new float[3]{0.1956,0.7815,-0.0794});
HAnimJoint1272->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1272->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1273 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1273->setName("l_carpal_proximal_phalanx_4");
HAnimSegment1273->setDEF("hanim_l_carpal_proximal_phalanx_4");
CTransform* Transform1274 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1274->setTranslation(new float[3]{0.1956,0.7815,-0.0794});
CTransform* Transform1275 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1276 = (CShape *)(m_pScene.createNode("Shape"));
Shape1276->setUSE("HAnimJointShape");
Transform1275->addChild(*Shape1276);

Transform1274->addChildren(*Transform1275);

HAnimSegment1273->addChildren(*Transform1274);

CShape* Shape1277 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1278 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1278->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1279 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1279->setPoint(new float[6]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777});
LineSet1278->setCoord(*Coordinate1279);

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA1280 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1280->setUSE("HAnimSegmentLineColorRGBA");
LineSet1278->setColor(*ColorRGBA1280);

Shape1277->setGeometry(LineSet1278);

HAnimSegment1273->addChildren(*Shape1277);

HAnimJoint1272->addChildren(*HAnimSegment1273);

CHAnimJoint* HAnimJoint1281 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1281->setName("l_carpal_proximal_interphalangeal_4");
HAnimJoint1281->setDEF("hanim_l_carpal_proximal_interphalangeal_4");
HAnimJoint1281->setCenter(new float[3]{0.1973,0.7287,-0.0777});
HAnimJoint1281->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1281->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1282 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1282->setName("l_carpal_middle_phalanx_4");
HAnimSegment1282->setDEF("hanim_l_carpal_middle_phalanx_4");
CTransform* Transform1283 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1283->setTranslation(new float[3]{0.1973,0.7287,-0.0777});
CTransform* Transform1284 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1285 = (CShape *)(m_pScene.createNode("Shape"));
Shape1285->setUSE("HAnimJointShape");
Transform1284->addChild(*Shape1285);

Transform1283->addChildren(*Transform1284);

HAnimSegment1282->addChildren(*Transform1283);

CShape* Shape1286 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1287 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1287->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1288 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1288->setPoint(new float[6]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767});
LineSet1287->setCoord(*Coordinate1288);

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA1289 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1289->setUSE("HAnimSegmentLineColorRGBA");
LineSet1287->setColor(*ColorRGBA1289);

Shape1286->setGeometry(LineSet1287);

HAnimSegment1282->addChildren(*Shape1286);

CHAnimSite* HAnimSite1290 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1290->setName("l_carpal_distal_phalanx_4_tip");
HAnimSite1290->setDEF("hanim_l_carpal_distal_phalanx_4_tip");
CTouchSensor* TouchSensor1291 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1291->setDescription("HAnimSite l_carpal_distal_phalanx_4_tip");
HAnimSite1290->addChildren(*TouchSensor1291);

CShape* Shape1292 = (CShape *)(m_pScene.createNode("Shape"));
Shape1292->setUSE("HAnimSiteShape");
HAnimSite1290->addChildren(*Shape1292);

HAnimSegment1282->addChildren(*HAnimSite1290);

HAnimJoint1281->addChildren(*HAnimSegment1282);

CHAnimJoint* HAnimJoint1293 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1293->setName("l_carpal_distal_interphalangeal_4");
HAnimJoint1293->setDEF("hanim_l_carpal_distal_interphalangeal_4");
HAnimJoint1293->setCenter(new float[3]{0.1983,0.7045,-0.0767});
HAnimJoint1293->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1293->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1281->addChildren(*HAnimJoint1293);

HAnimJoint1272->addChildren(*HAnimJoint1281);

HAnimJoint1263->addChildren(*HAnimJoint1272);

HAnimJoint1247->addChildren(*HAnimJoint1263);

CHAnimJoint* HAnimJoint1294 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1294->setName("l_carpometacarpal_5");
HAnimJoint1294->setDEF("hanim_l_carpometacarpal_5");
HAnimJoint1294->setCenter(new float[3]{0.1925,0.8066,-0.1036});
HAnimJoint1294->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1294->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1295 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1295->setName("l_metacarpal_5");
HAnimSegment1295->setDEF("hanim_l_metacarpal_5");
CTransform* Transform1296 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1296->setTranslation(new float[3]{0.1925,0.8066,-0.1036});
CTransform* Transform1297 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1298 = (CShape *)(m_pScene.createNode("Shape"));
Shape1298->setUSE("HAnimJointShape");
Transform1297->addChild(*Shape1298);

Transform1296->addChildren(*Transform1297);

HAnimSegment1295->addChildren(*Transform1296);

CShape* Shape1299 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1300 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1300->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1301 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1301->setPoint(new float[6]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036});
LineSet1300->setCoord(*Coordinate1301);

//from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
CColorRGBA* ColorRGBA1302 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1302->setUSE("HAnimSegmentLineColorRGBA");
LineSet1300->setColor(*ColorRGBA1302);

Shape1299->setGeometry(LineSet1300);

HAnimSegment1295->addChildren(*Shape1299);

HAnimJoint1294->addChildren(*HAnimSegment1295);

CHAnimJoint* HAnimJoint1303 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1303->setName("l_metacarpophalangeal_5");
HAnimJoint1303->setDEF("hanim_l_metacarpophalangeal_5");
HAnimJoint1303->setCenter(new float[3]{0.1925,0.7866,-0.1036});
HAnimJoint1303->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1303->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1304 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1304->setName("l_carpal_proximal_phalanx_5");
HAnimSegment1304->setDEF("hanim_l_carpal_proximal_phalanx_5");
CTransform* Transform1305 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1305->setTranslation(new float[3]{0.1925,0.7866,-0.1036});
CTransform* Transform1306 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1307 = (CShape *)(m_pScene.createNode("Shape"));
Shape1307->setUSE("HAnimJointShape");
Transform1306->addChild(*Shape1307);

Transform1305->addChildren(*Transform1306);

HAnimSegment1304->addChildren(*Transform1305);

CShape* Shape1308 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1309 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1309->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1310 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1310->setPoint(new float[6]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024});
LineSet1309->setCoord(*Coordinate1310);

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA1311 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1311->setUSE("HAnimSegmentLineColorRGBA");
LineSet1309->setColor(*ColorRGBA1311);

Shape1308->setGeometry(LineSet1309);

HAnimSegment1304->addChildren(*Shape1308);

HAnimJoint1303->addChildren(*HAnimSegment1304);

CHAnimJoint* HAnimJoint1312 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1312->setName("l_carpal_proximal_interphalangeal_5");
HAnimJoint1312->setDEF("hanim_l_carpal_proximal_interphalangeal_5");
HAnimJoint1312->setCenter(new float[3]{0.1938,0.7452,-0.1024});
HAnimJoint1312->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1312->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1313 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1313->setName("l_carpal_middle_phalanx_5");
HAnimSegment1313->setDEF("hanim_l_carpal_middle_phalanx_5");
CTransform* Transform1314 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1314->setTranslation(new float[3]{0.1938,0.7452,-0.1024});
CTransform* Transform1315 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1316 = (CShape *)(m_pScene.createNode("Shape"));
Shape1316->setUSE("HAnimJointShape");
Transform1315->addChild(*Shape1316);

Transform1314->addChildren(*Transform1315);

HAnimSegment1313->addChildren(*Transform1314);

CShape* Shape1317 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1318 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1318->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1319 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1319->setPoint(new float[6]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017});
LineSet1318->setCoord(*Coordinate1319);

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA1320 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1320->setUSE("HAnimSegmentLineColorRGBA");
LineSet1318->setColor(*ColorRGBA1320);

Shape1317->setGeometry(LineSet1318);

HAnimSegment1313->addChildren(*Shape1317);

CHAnimSite* HAnimSite1321 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1321->setName("l_carpal_distal_phalanx_5_tip");
HAnimSite1321->setDEF("hanim_l_carpal_distal_phalanx_5_tip");
CTouchSensor* TouchSensor1322 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1322->setDescription("HAnimSite l_carpal_distal_phalanx_5_tip");
HAnimSite1321->addChildren(*TouchSensor1322);

CShape* Shape1323 = (CShape *)(m_pScene.createNode("Shape"));
Shape1323->setUSE("HAnimSiteShape");
HAnimSite1321->addChildren(*Shape1323);

HAnimSegment1313->addChildren(*HAnimSite1321);

HAnimJoint1312->addChildren(*HAnimSegment1313);

CHAnimJoint* HAnimJoint1324 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1324->setName("l_carpal_distal_interphalangeal_5");
HAnimJoint1324->setDEF("hanim_l_carpal_distal_interphalangeal_5");
HAnimJoint1324->setCenter(new float[3]{0.1948,0.7277,-0.1017});
HAnimJoint1324->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1324->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1312->addChildren(*HAnimJoint1324);

HAnimJoint1303->addChildren(*HAnimJoint1312);

HAnimJoint1294->addChildren(*HAnimJoint1303);

HAnimJoint1247->addChildren(*HAnimJoint1294);

HAnimJoint1106->addChildren(*HAnimJoint1247);

HAnimJoint1094->addChildren(*HAnimJoint1106);

HAnimJoint1073->addChildren(*HAnimJoint1094);

HAnimJoint1058->addChildren(*HAnimJoint1073);

HAnimJoint1049->addChildren(*HAnimJoint1058);

HAnimJoint845->addChildren(*HAnimJoint1049);

CHAnimJoint* HAnimJoint1325 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1325->setName("r_sternoclavicular");
HAnimJoint1325->setDEF("hanim_r_sternoclavicular");
HAnimJoint1325->setCenter(new float[3]{-0.0694,1.46,-0.033});
HAnimJoint1325->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1325->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1326 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1326->setName("r_clavicle");
HAnimSegment1326->setDEF("hanim_r_clavicle");
CTransform* Transform1327 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1327->setTranslation(new float[3]{-0.0694,1.46,-0.033});
CTransform* Transform1328 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1329 = (CShape *)(m_pScene.createNode("Shape"));
Shape1329->setUSE("HAnimJointShape");
Transform1328->addChild(*Shape1329);

Transform1327->addChildren(*Transform1328);

HAnimSegment1326->addChildren(*Transform1327);

CShape* Shape1330 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1331 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1331->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1332 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1332->setPoint(new float[6]{-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401});
LineSet1331->setCoord(*Coordinate1332);

//from r_sternoclavicular to r_acromioclavicular vertices 2
CColorRGBA* ColorRGBA1333 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1333->setUSE("HAnimSegmentLineColorRGBA");
LineSet1331->setColor(*ColorRGBA1333);

Shape1330->setGeometry(LineSet1331);

HAnimSegment1326->addChildren(*Shape1330);

HAnimJoint1325->addChildren(*HAnimSegment1326);

CHAnimJoint* HAnimJoint1334 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1334->setName("r_acromioclavicular");
HAnimJoint1334->setDEF("hanim_r_acromioclavicular");
HAnimJoint1334->setCenter(new float[3]{-0.0836,1.4281,-0.0401});
HAnimJoint1334->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1334->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1335 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1335->setName("r_scapula");
HAnimSegment1335->setDEF("hanim_r_scapula");
CTransform* Transform1336 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1336->setTranslation(new float[3]{-0.0836,1.4281,-0.0401});
CTransform* Transform1337 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1338 = (CShape *)(m_pScene.createNode("Shape"));
Shape1338->setUSE("HAnimJointShape");
Transform1337->addChild(*Shape1338);

Transform1336->addChildren(*Transform1337);

HAnimSegment1335->addChildren(*Transform1336);

CShape* Shape1339 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1340 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1340->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1341 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1341->setPoint(new float[6]{-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325});
LineSet1340->setCoord(*Coordinate1341);

//from r_acromioclavicular to r_shoulder vertices 2
CColorRGBA* ColorRGBA1342 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1342->setUSE("HAnimSegmentLineColorRGBA");
LineSet1340->setColor(*ColorRGBA1342);

Shape1339->setGeometry(LineSet1340);

HAnimSegment1335->addChildren(*Shape1339);

CHAnimSite* HAnimSite1343 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1343->setName("r_bideltoid_pt");
HAnimSite1343->setDEF("hanim_r_bideltoid_pt");
CTouchSensor* TouchSensor1344 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1344->setDescription("HAnimSite r_bideltoid_pt");
HAnimSite1343->addChildren(*TouchSensor1344);

CShape* Shape1345 = (CShape *)(m_pScene.createNode("Shape"));
Shape1345->setUSE("HAnimSiteShape");
HAnimSite1343->addChildren(*Shape1345);

HAnimSegment1335->addChildren(*HAnimSite1343);

CHAnimSite* HAnimSite1346 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1346->setName("r_humeral_lateral_epicondyles_pt");
HAnimSite1346->setDEF("hanim_r_humeral_lateral_epicondyles_pt");
HAnimSite1346->setTranslation(new float[3]{-0.2224,1.1517,-0.1033});
CTouchSensor* TouchSensor1347 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1347->setDescription("HAnimSite r_humeral_lateral_epicondyles_pt");
HAnimSite1346->addChildren(*TouchSensor1347);

CShape* Shape1348 = (CShape *)(m_pScene.createNode("Shape"));
Shape1348->setUSE("HAnimSiteShape");
HAnimSite1346->addChildren(*Shape1348);

HAnimSegment1335->addChildren(*HAnimSite1346);

HAnimJoint1334->addChildren(*HAnimSegment1335);

CHAnimJoint* HAnimJoint1349 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1349->setName("r_shoulder");
HAnimJoint1349->setDEF("hanim_r_shoulder");
HAnimJoint1349->setCenter(new float[3]{-0.1907,1.4407,-0.0325});
HAnimJoint1349->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1349->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1350 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1350->setName("r_upperarm");
HAnimSegment1350->setDEF("hanim_r_upperarm");
CTransform* Transform1351 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1351->setTranslation(new float[3]{-0.1907,1.4407,-0.0325});
CTransform* Transform1352 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1353 = (CShape *)(m_pScene.createNode("Shape"));
Shape1353->setUSE("HAnimJointShape");
Transform1352->addChild(*Shape1353);

Transform1351->addChildren(*Transform1352);

HAnimSegment1350->addChildren(*Transform1351);

CShape* Shape1354 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1355 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1355->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1356 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1356->setPoint(new float[6]{-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062});
LineSet1355->setCoord(*Coordinate1356);

//from r_shoulder to r_elbow vertices 2
CColorRGBA* ColorRGBA1357 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1357->setUSE("HAnimSegmentLineColorRGBA");
LineSet1355->setColor(*ColorRGBA1357);

Shape1354->setGeometry(LineSet1355);

HAnimSegment1350->addChildren(*Shape1354);

CHAnimSite* HAnimSite1358 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1358->setName("r_humeral_medial_epicondyles_pt");
HAnimSite1358->setDEF("hanim_r_humeral_medial_epicondyles_pt");
HAnimSite1358->setTranslation(new float[3]{-0.168,1.1298,-0.1062});
CTouchSensor* TouchSensor1359 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1359->setDescription("HAnimSite r_humeral_medial_epicondyles_pt");
HAnimSite1358->addChildren(*TouchSensor1359);

CShape* Shape1360 = (CShape *)(m_pScene.createNode("Shape"));
Shape1360->setUSE("HAnimSiteShape");
HAnimSite1358->addChildren(*Shape1360);

HAnimSegment1350->addChildren(*HAnimSite1358);

CHAnimSite* HAnimSite1361 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1361->setName("r_olecranon_pt");
HAnimSite1361->setDEF("hanim_r_olecranon_pt");
HAnimSite1361->setTranslation(new float[3]{-0.1907,1.1405,-0.1065});
CTouchSensor* TouchSensor1362 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1362->setDescription("HAnimSite r_olecranon_pt");
HAnimSite1361->addChildren(*TouchSensor1362);

CShape* Shape1363 = (CShape *)(m_pScene.createNode("Shape"));
Shape1363->setUSE("HAnimSiteShape");
HAnimSite1361->addChildren(*Shape1363);

HAnimSegment1350->addChildren(*HAnimSite1361);

CHAnimSite* HAnimSite1364 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1364->setName("r_radial_styloid_pt");
HAnimSite1364->setDEF("hanim_r_radial_styloid_pt");
HAnimSite1364->setTranslation(new float[3]{-0.1884,0.8676,-0.036});
CTouchSensor* TouchSensor1365 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1365->setDescription("HAnimSite r_radial_styloid_pt");
HAnimSite1364->addChildren(*TouchSensor1365);

CShape* Shape1366 = (CShape *)(m_pScene.createNode("Shape"));
Shape1366->setUSE("HAnimSiteShape");
HAnimSite1364->addChildren(*Shape1366);

HAnimSegment1350->addChildren(*HAnimSite1364);

CHAnimSite* HAnimSite1367 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1367->setName("r_radiale_pt");
HAnimSite1367->setDEF("hanim_r_radiale_pt");
HAnimSite1367->setTranslation(new float[3]{-0.213,1.1305,-0.1091});
CTouchSensor* TouchSensor1368 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1368->setDescription("HAnimSite r_radiale_pt");
HAnimSite1367->addChildren(*TouchSensor1368);

CShape* Shape1369 = (CShape *)(m_pScene.createNode("Shape"));
Shape1369->setUSE("HAnimSiteShape");
HAnimSite1367->addChildren(*Shape1369);

HAnimSegment1350->addChildren(*HAnimSite1367);

HAnimJoint1349->addChildren(*HAnimSegment1350);

CHAnimJoint* HAnimJoint1370 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1370->setName("r_elbow");
HAnimJoint1370->setDEF("hanim_r_elbow");
HAnimJoint1370->setCenter(new float[3]{-0.1949,1.1388,-0.062});
HAnimJoint1370->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1370->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1371 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1371->setName("r_forearm");
HAnimSegment1371->setDEF("hanim_r_forearm");
CTransform* Transform1372 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1372->setTranslation(new float[3]{-0.1949,1.1388,-0.062});
CTransform* Transform1373 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1374 = (CShape *)(m_pScene.createNode("Shape"));
Shape1374->setUSE("HAnimJointShape");
Transform1373->addChild(*Shape1374);

Transform1372->addChildren(*Transform1373);

HAnimSegment1371->addChildren(*Transform1372);

CShape* Shape1375 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1376 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1376->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1377 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1377->setPoint(new float[6]{-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521});
LineSet1376->setCoord(*Coordinate1377);

//from r_elbow to r_radiocarpal vertices 2
CColorRGBA* ColorRGBA1378 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1378->setUSE("HAnimSegmentLineColorRGBA");
LineSet1376->setColor(*ColorRGBA1378);

Shape1375->setGeometry(LineSet1376);

HAnimSegment1371->addChildren(*Shape1375);

CHAnimSite* HAnimSite1379 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1379->setName("r_ulnar_styloid_pt");
HAnimSite1379->setDEF("hanim_r_ulnar_styloid_pt");
HAnimSite1379->setTranslation(new float[3]{-0.2117,0.8562,-0.0584});
CTouchSensor* TouchSensor1380 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1380->setDescription("HAnimSite r_ulnar_styloid_pt");
HAnimSite1379->addChildren(*TouchSensor1380);

CShape* Shape1381 = (CShape *)(m_pScene.createNode("Shape"));
Shape1381->setUSE("HAnimSiteShape");
HAnimSite1379->addChildren(*Shape1381);

HAnimSegment1371->addChildren(*HAnimSite1379);

HAnimJoint1370->addChildren(*HAnimSegment1371);

CHAnimJoint* HAnimJoint1382 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1382->setName("r_radiocarpal");
HAnimJoint1382->setDEF("hanim_r_radiocarpal");
HAnimJoint1382->setCenter(new float[3]{-0.1959,0.8694,-0.0521});
HAnimJoint1382->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1382->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1383 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1383->setName("r_carpal");
HAnimSegment1383->setDEF("hanim_r_carpal");
CTransform* Transform1384 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1384->setScale(new float[3]{0.2,0.2,0.2});
Transform1384->setTranslation(new float[3]{-0.2,0.85,-0.05});
Transform1384->setRotation(new float[4]{0,0,1,-3.14});
//Transform right hand
CTransform* Transform1385 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1385->setRotation(new float[4]{0,1,0,1.57});
//Transform right hand
CShape* Shape1386 = (CShape *)(m_pScene.createNode("Shape"));
Shape1386->setUSE("HAnimJointShape");
Transform1385->addChild(*Shape1386);

Transform1384->addChildren(*Transform1385);

HAnimSegment1383->addChildren(*Transform1384);

CShape* Shape1387 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1388 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1388->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1389 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1389->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-8.0515,0.9213,1.3235});
LineSet1388->setCoord(*Coordinate1389);

//from r_radiocarpal to r_midcarpal_1 vertices 2
CColorRGBA* ColorRGBA1390 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1390->setUSE("HAnimSegmentLineColorRGBA");
LineSet1388->setColor(*ColorRGBA1390);

Shape1387->setGeometry(LineSet1388);

HAnimSegment1383->addChildren(*Shape1387);

CShape* Shape1391 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1392 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1392->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1393 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1393->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-8.0515,0.9225,0.8386});
LineSet1392->setCoord(*Coordinate1393);

//from r_radiocarpal to r_midcarpal_2 vertices 2
CColorRGBA* ColorRGBA1394 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1394->setUSE("HAnimSegmentLineColorRGBA");
LineSet1392->setColor(*ColorRGBA1394);

Shape1391->setGeometry(LineSet1392);

HAnimSegment1383->addChildren(*Shape1391);

CShape* Shape1395 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1396 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1396->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1397 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1397->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-8.0405,0.9246,0.2513});
LineSet1396->setCoord(*Coordinate1397);

//from r_radiocarpal to r_midcarpal_3 vertices 2
CColorRGBA* ColorRGBA1398 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1398->setUSE("HAnimSegmentLineColorRGBA");
LineSet1396->setColor(*ColorRGBA1398);

Shape1395->setGeometry(LineSet1396);

HAnimSegment1383->addChildren(*Shape1395);

CShape* Shape1399 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1400 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1400->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1401 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1401->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-8.0405,0.921,-0.6795});
LineSet1400->setCoord(*Coordinate1401);

//from r_radiocarpal to r_midcarpal_4_5 vertices 2
CColorRGBA* ColorRGBA1402 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1402->setUSE("HAnimSegmentLineColorRGBA");
LineSet1400->setColor(*ColorRGBA1402);

Shape1399->setGeometry(LineSet1400);

HAnimSegment1383->addChildren(*Shape1399);

HAnimJoint1382->addChildren(*HAnimSegment1383);

CHAnimJoint* HAnimJoint1403 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1403->setName("r_midcarpal_1");
HAnimJoint1403->setDEF("hanim_r_midcarpal_1");
HAnimJoint1403->setCenter(new float[3]{-8.0515,0.9213,1.3235});
HAnimJoint1403->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1403->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1404 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1404->setName("r_trapezium");
HAnimSegment1404->setDEF("hanim_r_trapezium");
CTransform* Transform1405 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1405->setTranslation(new float[3]{-8.0515,0.9213,1.3235});
CTransform* Transform1406 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1407 = (CShape *)(m_pScene.createNode("Shape"));
Shape1407->setUSE("HAnimJointShape");
Transform1406->addChild(*Shape1407);

Transform1405->addChildren(*Transform1406);

HAnimSegment1404->addChildren(*Transform1405);

CShape* Shape1408 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1409 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1409->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1410 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1410->setPoint(new float[6]{-8.0515,0.9213,1.3235,-0.1899,0.8502,-0.0473});
LineSet1409->setCoord(*Coordinate1410);

//from r_midcarpal_1 to r_carpometacarpal_1 vertices 2
CColorRGBA* ColorRGBA1411 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1411->setUSE("HAnimSegmentLineColorRGBA");
LineSet1409->setColor(*ColorRGBA1411);

Shape1408->setGeometry(LineSet1409);

HAnimSegment1404->addChildren(*Shape1408);

HAnimJoint1403->addChildren(*HAnimSegment1404);

CHAnimJoint* HAnimJoint1412 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1412->setName("r_carpometacarpal_1");
HAnimJoint1412->setDEF("hanim_r_carpometacarpal_1");
HAnimJoint1412->setCenter(new float[3]{-0.1899,0.8502,-0.0473});
HAnimJoint1412->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1412->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1413 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1413->setName("r_metacarpal_1");
HAnimSegment1413->setDEF("hanim_r_metacarpal_1");
CTransform* Transform1414 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1414->setTranslation(new float[3]{-0.1899,0.8502,-0.0473});
CTransform* Transform1415 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1416 = (CShape *)(m_pScene.createNode("Shape"));
Shape1416->setUSE("HAnimJointShape");
Transform1415->addChild(*Shape1416);

Transform1414->addChildren(*Transform1415);

HAnimSegment1413->addChildren(*Transform1414);

CShape* Shape1417 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1418 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1418->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1419 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1419->setPoint(new float[6]{-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306});
LineSet1418->setCoord(*Coordinate1419);

//from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
CColorRGBA* ColorRGBA1420 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1420->setUSE("HAnimSegmentLineColorRGBA");
LineSet1418->setColor(*ColorRGBA1420);

Shape1417->setGeometry(LineSet1418);

HAnimSegment1413->addChildren(*Shape1417);

HAnimJoint1412->addChildren(*HAnimSegment1413);

CHAnimJoint* HAnimJoint1421 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1421->setName("r_metacarpophalangeal_1");
HAnimJoint1421->setDEF("hanim_r_metacarpophalangeal_1");
HAnimJoint1421->setCenter(new float[3]{-0.1874,0.8256,0.0306});
HAnimJoint1421->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1421->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1422 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1422->setName("r_carpal_proximal_phalanx_1");
HAnimSegment1422->setDEF("hanim_r_carpal_proximal_phalanx_1");
CTransform* Transform1423 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1423->setTranslation(new float[3]{-0.1874,0.8256,0.0306});
CTransform* Transform1424 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1425 = (CShape *)(m_pScene.createNode("Shape"));
Shape1425->setUSE("HAnimJointShape");
Transform1424->addChild(*Shape1425);

Transform1423->addChildren(*Transform1424);

HAnimSegment1422->addChildren(*Transform1423);

CShape* Shape1426 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1427 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1427->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1428 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1428->setPoint(new float[6]{-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506});
LineSet1427->setCoord(*Coordinate1428);

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
CColorRGBA* ColorRGBA1429 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1429->setUSE("HAnimSegmentLineColorRGBA");
LineSet1427->setColor(*ColorRGBA1429);

Shape1426->setGeometry(LineSet1427);

HAnimSegment1422->addChildren(*Shape1426);

CHAnimSite* HAnimSite1430 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1430->setName("r_carpal_distal_phalanx_1_tip");
HAnimSite1430->setDEF("hanim_r_carpal_distal_phalanx_1_tip");
CTouchSensor* TouchSensor1431 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1431->setDescription("HAnimSite r_carpal_distal_phalanx_1_tip");
HAnimSite1430->addChildren(*TouchSensor1431);

CShape* Shape1432 = (CShape *)(m_pScene.createNode("Shape"));
Shape1432->setUSE("HAnimSiteShape");
HAnimSite1430->addChildren(*Shape1432);

HAnimSegment1422->addChildren(*HAnimSite1430);

HAnimJoint1421->addChildren(*HAnimSegment1422);

CHAnimJoint* HAnimJoint1433 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1433->setName("r_carpal_interphalangeal_1");
HAnimJoint1433->setDEF("hanim_r_carpal_interphalangeal_1");
HAnimJoint1433->setCenter(new float[3]{-0.1864,0.819,0.0506});
HAnimJoint1433->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1433->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1421->addChildren(*HAnimJoint1433);

HAnimJoint1412->addChildren(*HAnimJoint1421);

HAnimJoint1403->addChildren(*HAnimJoint1412);

HAnimJoint1382->addChildren(*HAnimJoint1403);

CHAnimJoint* HAnimJoint1434 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1434->setName("r_midcarpal_2");
HAnimJoint1434->setDEF("hanim_r_midcarpal_2");
HAnimJoint1434->setCenter(new float[3]{-8.0515,0.9225,0.8386});
HAnimJoint1434->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1434->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1435 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1435->setName("r_trapezoid");
HAnimSegment1435->setDEF("hanim_r_trapezoid");
CTransform* Transform1436 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1436->setTranslation(new float[3]{-8.0515,0.9225,0.8386});
CTransform* Transform1437 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1438 = (CShape *)(m_pScene.createNode("Shape"));
Shape1438->setUSE("HAnimJointShape");
Transform1437->addChild(*Shape1438);

Transform1436->addChildren(*Transform1437);

HAnimSegment1435->addChildren(*Transform1436);

CShape* Shape1439 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1440 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1440->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1441 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1441->setPoint(new float[6]{-8.0515,0.9225,0.8386,-0.1961,0.8055,-0.0218});
LineSet1440->setCoord(*Coordinate1441);

//from r_midcarpal_2 to r_carpometacarpal_2 vertices 2
CColorRGBA* ColorRGBA1442 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1442->setUSE("HAnimSegmentLineColorRGBA");
LineSet1440->setColor(*ColorRGBA1442);

Shape1439->setGeometry(LineSet1440);

HAnimSegment1435->addChildren(*Shape1439);

CHAnimSite* HAnimSite1443 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1443->setName("r_metacarpal_phalanx_2_pt");
HAnimSite1443->setDEF("hanim_r_metacarpal_phalanx_2_pt");
HAnimSite1443->setTranslation(new float[3]{-0.1977,0.8169,-0.0177});
CTouchSensor* TouchSensor1444 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1444->setDescription("HAnimSite r_metacarpal_phalanx_2_pt");
HAnimSite1443->addChildren(*TouchSensor1444);

CShape* Shape1445 = (CShape *)(m_pScene.createNode("Shape"));
Shape1445->setUSE("HAnimSiteShape");
HAnimSite1443->addChildren(*Shape1445);

HAnimSegment1435->addChildren(*HAnimSite1443);

HAnimJoint1434->addChildren(*HAnimSegment1435);

CHAnimJoint* HAnimJoint1446 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1446->setName("r_carpometacarpal_2");
HAnimJoint1446->setDEF("hanim_r_carpometacarpal_2");
HAnimJoint1446->setCenter(new float[3]{-0.1961,0.8055,-0.0218});
HAnimJoint1446->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1446->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1447 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1447->setName("r_metacarpal_2");
HAnimSegment1447->setDEF("hanim_r_metacarpal_2");
CTransform* Transform1448 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1448->setTranslation(new float[3]{-0.1961,0.8055,-0.0218});
CTransform* Transform1449 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1450 = (CShape *)(m_pScene.createNode("Shape"));
Shape1450->setUSE("HAnimJointShape");
Transform1449->addChild(*Shape1450);

Transform1448->addChildren(*Transform1449);

HAnimSegment1447->addChildren(*Transform1448);

CShape* Shape1451 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1452 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1452->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1453 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1453->setPoint(new float[6]{-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218});
LineSet1452->setCoord(*Coordinate1453);

//from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
CColorRGBA* ColorRGBA1454 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1454->setUSE("HAnimSegmentLineColorRGBA");
LineSet1452->setColor(*ColorRGBA1454);

Shape1451->setGeometry(LineSet1452);

HAnimSegment1447->addChildren(*Shape1451);

HAnimJoint1446->addChildren(*HAnimSegment1447);

CHAnimJoint* HAnimJoint1455 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1455->setName("r_metacarpophalangeal_2");
HAnimJoint1455->setDEF("hanim_r_metacarpophalangeal_2");
HAnimJoint1455->setCenter(new float[3]{-0.1961,0.7846,-0.0218});
HAnimJoint1455->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1455->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1456 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1456->setName("r_carpal_proximal_phalanx_2");
HAnimSegment1456->setDEF("hanim_r_carpal_proximal_phalanx_2");
CTransform* Transform1457 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1457->setTranslation(new float[3]{-0.1961,0.7846,-0.0218});
CTransform* Transform1458 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1459 = (CShape *)(m_pScene.createNode("Shape"));
Shape1459->setUSE("HAnimJointShape");
Transform1458->addChild(*Shape1459);

Transform1457->addChildren(*Transform1458);

HAnimSegment1456->addChildren(*Transform1457);

CShape* Shape1460 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1461 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1461->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1462 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1462->setPoint(new float[6]{-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185});
LineSet1461->setCoord(*Coordinate1462);

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA1463 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1463->setUSE("HAnimSegmentLineColorRGBA");
LineSet1461->setColor(*ColorRGBA1463);

Shape1460->setGeometry(LineSet1461);

HAnimSegment1456->addChildren(*Shape1460);

HAnimJoint1455->addChildren(*HAnimSegment1456);

CHAnimJoint* HAnimJoint1464 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1464->setName("r_carpal_proximal_interphalangeal_2");
HAnimJoint1464->setDEF("hanim_r_carpal_proximal_interphalangeal_2");
HAnimJoint1464->setCenter(new float[3]{-0.1954,0.7393,-0.0185});
HAnimJoint1464->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1464->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1465 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1465->setName("r_carpal_middle_phalanx_2");
HAnimSegment1465->setDEF("hanim_r_carpal_middle_phalanx_2");
CTransform* Transform1466 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1466->setTranslation(new float[3]{-0.1954,0.7393,-0.0185});
CTransform* Transform1467 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1468 = (CShape *)(m_pScene.createNode("Shape"));
Shape1468->setUSE("HAnimJointShape");
Transform1467->addChild(*Shape1468);

Transform1466->addChildren(*Transform1467);

HAnimSegment1465->addChildren(*Transform1466);

CShape* Shape1469 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1470 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1470->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1471 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1471->setPoint(new float[6]{-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173});
LineSet1470->setCoord(*Coordinate1471);

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA1472 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1472->setUSE("HAnimSegmentLineColorRGBA");
LineSet1470->setColor(*ColorRGBA1472);

Shape1469->setGeometry(LineSet1470);

HAnimSegment1465->addChildren(*Shape1469);

CHAnimSite* HAnimSite1473 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1473->setName("r_carpal_distal_phalanx_2_tip");
HAnimSite1473->setDEF("hanim_r_carpal_distal_phalanx_2_tip");
CTouchSensor* TouchSensor1474 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1474->setDescription("HAnimSite r_carpal_distal_phalanx_2_tip");
HAnimSite1473->addChildren(*TouchSensor1474);

CShape* Shape1475 = (CShape *)(m_pScene.createNode("Shape"));
Shape1475->setUSE("HAnimSiteShape");
HAnimSite1473->addChildren(*Shape1475);

HAnimSegment1465->addChildren(*HAnimSite1473);

CHAnimSite* HAnimSite1476 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1476->setName("r_dactylion_pt");
HAnimSite1476->setDEF("hanim_r_dactylion_pt");
HAnimSite1476->setTranslation(new float[3]{-0.1941,0.6772,-0.0423});
CTouchSensor* TouchSensor1477 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1477->setDescription("HAnimSite r_dactylion_pt");
HAnimSite1476->addChildren(*TouchSensor1477);

CShape* Shape1478 = (CShape *)(m_pScene.createNode("Shape"));
Shape1478->setUSE("HAnimSiteShape");
HAnimSite1476->addChildren(*Shape1478);

HAnimSegment1465->addChildren(*HAnimSite1476);

HAnimJoint1464->addChildren(*HAnimSegment1465);

CHAnimJoint* HAnimJoint1479 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1479->setName("r_carpal_distal_interphalangeal_2");
HAnimJoint1479->setDEF("hanim_r_carpal_distal_interphalangeal_2");
HAnimJoint1479->setCenter(new float[3]{-0.1945,0.7169,-0.0173});
HAnimJoint1479->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1479->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1464->addChildren(*HAnimJoint1479);

HAnimJoint1455->addChildren(*HAnimJoint1464);

HAnimJoint1446->addChildren(*HAnimJoint1455);

HAnimJoint1434->addChildren(*HAnimJoint1446);

HAnimJoint1382->addChildren(*HAnimJoint1434);

CHAnimJoint* HAnimJoint1480 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1480->setName("r_midcarpal_3");
HAnimJoint1480->setDEF("hanim_r_midcarpal_3");
HAnimJoint1480->setCenter(new float[3]{-8.0405,0.9246,0.2513});
HAnimJoint1480->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1480->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1481 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1481->setName("r_capitate");
HAnimSegment1481->setDEF("hanim_r_capitate");
CTransform* Transform1482 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1482->setTranslation(new float[3]{-8.0405,0.9246,0.2513});
CTransform* Transform1483 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1484 = (CShape *)(m_pScene.createNode("Shape"));
Shape1484->setUSE("HAnimJointShape");
Transform1483->addChild(*Shape1484);

Transform1482->addChildren(*Transform1483);

HAnimSegment1481->addChildren(*Transform1482);

CShape* Shape1485 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1486 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1486->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1487 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1487->setPoint(new float[6]{-8.0405,0.9246,0.2513,-0.1972,0.806,-0.0468});
LineSet1486->setCoord(*Coordinate1487);

//from r_midcarpal_3 to r_carpometacarpal_3 vertices 2
CColorRGBA* ColorRGBA1488 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1488->setUSE("HAnimSegmentLineColorRGBA");
LineSet1486->setColor(*ColorRGBA1488);

Shape1485->setGeometry(LineSet1486);

HAnimSegment1481->addChildren(*Shape1485);

CHAnimSite* HAnimSite1489 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1489->setName("r_metacarpal_phalanx_3_pt");
HAnimSite1489->setDEF("hanim_r_metacarpal_phalanx_3_pt");
CTouchSensor* TouchSensor1490 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1490->setDescription("HAnimSite r_metacarpal_phalanx_3_pt");
HAnimSite1489->addChildren(*TouchSensor1490);

CShape* Shape1491 = (CShape *)(m_pScene.createNode("Shape"));
Shape1491->setUSE("HAnimSiteShape");
HAnimSite1489->addChildren(*Shape1491);

HAnimSegment1481->addChildren(*HAnimSite1489);

HAnimJoint1480->addChildren(*HAnimSegment1481);

CHAnimJoint* HAnimJoint1492 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1492->setName("r_carpometacarpal_3");
HAnimJoint1492->setDEF("hanim_r_carpometacarpal_3");
HAnimJoint1492->setCenter(new float[3]{-0.1972,0.806,-0.0468});
HAnimJoint1492->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1492->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1493 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1493->setName("r_metacarpal_3");
HAnimSegment1493->setDEF("hanim_r_metacarpal_3");
CTransform* Transform1494 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1494->setTranslation(new float[3]{-0.1972,0.806,-0.0468});
CTransform* Transform1495 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1496 = (CShape *)(m_pScene.createNode("Shape"));
Shape1496->setUSE("HAnimJointShape");
Transform1495->addChild(*Shape1496);

Transform1494->addChildren(*Transform1495);

HAnimSegment1493->addChildren(*Transform1494);

CShape* Shape1497 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1498 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1498->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1499 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1499->setPoint(new float[6]{-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468});
LineSet1498->setCoord(*Coordinate1499);

//from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
CColorRGBA* ColorRGBA1500 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1500->setUSE("HAnimSegmentLineColorRGBA");
LineSet1498->setColor(*ColorRGBA1500);

Shape1497->setGeometry(LineSet1498);

HAnimSegment1493->addChildren(*Shape1497);

HAnimJoint1492->addChildren(*HAnimSegment1493);

CHAnimJoint* HAnimJoint1501 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1501->setName("r_metacarpophalangeal_3");
HAnimJoint1501->setDEF("hanim_r_metacarpophalangeal_3");
HAnimJoint1501->setCenter(new float[3]{-0.1972,0.7849,-0.0468});
HAnimJoint1501->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1501->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1502 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1502->setName("r_carpal_proximal_phalanx_3");
HAnimSegment1502->setDEF("hanim_r_carpal_proximal_phalanx_3");
CTransform* Transform1503 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1503->setTranslation(new float[3]{-0.1972,0.7849,-0.0468});
CTransform* Transform1504 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1505 = (CShape *)(m_pScene.createNode("Shape"));
Shape1505->setUSE("HAnimJointShape");
Transform1504->addChild(*Shape1505);

Transform1503->addChildren(*Transform1504);

HAnimSegment1502->addChildren(*Transform1503);

CShape* Shape1506 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1507 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1507->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1508 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1508->setPoint(new float[6]{-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441});
LineSet1507->setCoord(*Coordinate1508);

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA1509 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1509->setUSE("HAnimSegmentLineColorRGBA");
LineSet1507->setColor(*ColorRGBA1509);

Shape1506->setGeometry(LineSet1507);

HAnimSegment1502->addChildren(*Shape1506);

HAnimJoint1501->addChildren(*HAnimSegment1502);

CHAnimJoint* HAnimJoint1510 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1510->setName("r_carpal_proximal_interphalangeal_3");
HAnimJoint1510->setDEF("hanim_r_carpal_proximal_interphalangeal_3");
HAnimJoint1510->setCenter(new float[3]{-0.195,0.7304,-0.0441});
HAnimJoint1510->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1510->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1511 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1511->setName("r_carpal_middle_phalanx_3");
HAnimSegment1511->setDEF("hanim_r_carpal_middle_phalanx_3");
CTransform* Transform1512 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1512->setTranslation(new float[3]{-0.195,0.7304,-0.0441});
CTransform* Transform1513 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1514 = (CShape *)(m_pScene.createNode("Shape"));
Shape1514->setUSE("HAnimJointShape");
Transform1513->addChild(*Shape1514);

Transform1512->addChildren(*Transform1513);

HAnimSegment1511->addChildren(*Transform1512);

CShape* Shape1515 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1516 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1516->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1517 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1517->setPoint(new float[6]{-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432});
LineSet1516->setCoord(*Coordinate1517);

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA1518 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1518->setUSE("HAnimSegmentLineColorRGBA");
LineSet1516->setColor(*ColorRGBA1518);

Shape1515->setGeometry(LineSet1516);

HAnimSegment1511->addChildren(*Shape1515);

CHAnimSite* HAnimSite1519 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1519->setName("r_carpal_distal_phalanx_3_tip");
HAnimSite1519->setDEF("hanim_r_carpal_distal_phalanx_3_tip");
CTouchSensor* TouchSensor1520 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1520->setDescription("HAnimSite r_carpal_distal_phalanx_3_tip");
HAnimSite1519->addChildren(*TouchSensor1520);

CShape* Shape1521 = (CShape *)(m_pScene.createNode("Shape"));
Shape1521->setUSE("HAnimSiteShape");
HAnimSite1519->addChildren(*Shape1521);

HAnimSegment1511->addChildren(*HAnimSite1519);

HAnimJoint1510->addChildren(*HAnimSegment1511);

CHAnimJoint* HAnimJoint1522 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1522->setName("r_carpal_distal_interphalangeal_3");
HAnimJoint1522->setDEF("hanim_r_carpal_distal_interphalangeal_3");
HAnimJoint1522->setCenter(new float[3]{-0.1939,0.7042,-0.0432});
HAnimJoint1522->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1522->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1510->addChildren(*HAnimJoint1522);

HAnimJoint1501->addChildren(*HAnimJoint1510);

HAnimJoint1492->addChildren(*HAnimJoint1501);

HAnimJoint1480->addChildren(*HAnimJoint1492);

HAnimJoint1382->addChildren(*HAnimJoint1480);

CHAnimJoint* HAnimJoint1523 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1523->setName("r_midcarpal_4_5");
HAnimJoint1523->setDEF("hanim_r_midcarpal_4_5");
HAnimJoint1523->setCenter(new float[3]{-8.0405,0.921,-0.6795});
HAnimJoint1523->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1523->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1524 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1524->setName("r_hamate");
HAnimSegment1524->setDEF("hanim_r_hamate");
CTransform* Transform1525 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1525->setTranslation(new float[3]{-8.0405,0.921,-0.6795});
CTransform* Transform1526 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1527 = (CShape *)(m_pScene.createNode("Shape"));
Shape1527->setUSE("HAnimJointShape");
Transform1526->addChild(*Shape1527);

Transform1525->addChildren(*Transform1526);

HAnimSegment1524->addChildren(*Transform1525);

CShape* Shape1528 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1529 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1529->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1530 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1530->setPoint(new float[6]{-8.0405,0.921,-0.6795,-0.1951,0.8049,-0.0732});
LineSet1529->setCoord(*Coordinate1530);

//from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 2
CColorRGBA* ColorRGBA1531 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1531->setUSE("HAnimSegmentLineColorRGBA");
LineSet1529->setColor(*ColorRGBA1531);

Shape1528->setGeometry(LineSet1529);

HAnimSegment1524->addChildren(*Shape1528);

CShape* Shape1532 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1533 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1533->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1534 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1534->setPoint(new float[6]{-8.0405,0.921,-0.6795,-0.1926,0.8096,-0.0975});
LineSet1533->setCoord(*Coordinate1534);

//from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 2
CColorRGBA* ColorRGBA1535 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1535->setUSE("HAnimSegmentLineColorRGBA");
LineSet1533->setColor(*ColorRGBA1535);

Shape1532->setGeometry(LineSet1533);

HAnimSegment1524->addChildren(*Shape1532);

CHAnimSite* HAnimSite1536 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1536->setName("r_metacarpal_phalanx_5_pt");
HAnimSite1536->setDEF("hanim_r_metacarpal_phalanx_5_pt");
HAnimSite1536->setTranslation(new float[3]{-0.1929,0.789,-0.1064});
CTouchSensor* TouchSensor1537 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1537->setDescription("HAnimSite r_metacarpal_phalanx_5_pt");
HAnimSite1536->addChildren(*TouchSensor1537);

CShape* Shape1538 = (CShape *)(m_pScene.createNode("Shape"));
Shape1538->setUSE("HAnimSiteShape");
HAnimSite1536->addChildren(*Shape1538);

HAnimSegment1524->addChildren(*HAnimSite1536);

HAnimJoint1523->addChildren(*HAnimSegment1524);

CHAnimJoint* HAnimJoint1539 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1539->setName("r_carpometacarpal_4");
HAnimJoint1539->setDEF("hanim_r_carpometacarpal_4");
HAnimJoint1539->setCenter(new float[3]{-0.1951,0.8049,-0.0732});
HAnimJoint1539->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1539->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1540 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1540->setName("r_metacarpal_4");
HAnimSegment1540->setDEF("hanim_r_metacarpal_4");
CTransform* Transform1541 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1541->setTranslation(new float[3]{-0.1951,0.8049,-0.0732});
CTransform* Transform1542 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1543 = (CShape *)(m_pScene.createNode("Shape"));
Shape1543->setUSE("HAnimJointShape");
Transform1542->addChild(*Shape1543);

Transform1541->addChildren(*Transform1542);

HAnimSegment1540->addChildren(*Transform1541);

CShape* Shape1544 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1545 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1545->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1546 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1546->setPoint(new float[6]{-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732});
LineSet1545->setCoord(*Coordinate1546);

//from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
CColorRGBA* ColorRGBA1547 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1547->setUSE("HAnimSegmentLineColorRGBA");
LineSet1545->setColor(*ColorRGBA1547);

Shape1544->setGeometry(LineSet1545);

HAnimSegment1540->addChildren(*Shape1544);

HAnimJoint1539->addChildren(*HAnimSegment1540);

CHAnimJoint* HAnimJoint1548 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1548->setName("r_metacarpophalangeal_4");
HAnimJoint1548->setDEF("hanim_r_metacarpophalangeal_4");
HAnimJoint1548->setCenter(new float[3]{-0.1951,0.7845,-0.0732});
HAnimJoint1548->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1548->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1549 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1549->setName("r_carpal_proximal_phalanx_4");
HAnimSegment1549->setDEF("hanim_r_carpal_proximal_phalanx_4");
CTransform* Transform1550 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1550->setTranslation(new float[3]{-0.1951,0.7845,-0.0732});
CTransform* Transform1551 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1552 = (CShape *)(m_pScene.createNode("Shape"));
Shape1552->setUSE("HAnimJointShape");
Transform1551->addChild(*Shape1552);

Transform1550->addChildren(*Transform1551);

HAnimSegment1549->addChildren(*Transform1550);

CShape* Shape1553 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1554 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1554->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1555 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1555->setPoint(new float[6]{-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716});
LineSet1554->setCoord(*Coordinate1555);

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA1556 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1556->setUSE("HAnimSegmentLineColorRGBA");
LineSet1554->setColor(*ColorRGBA1556);

Shape1553->setGeometry(LineSet1554);

HAnimSegment1549->addChildren(*Shape1553);

HAnimJoint1548->addChildren(*HAnimSegment1549);

CHAnimJoint* HAnimJoint1557 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1557->setName("r_carpal_proximal_interphalangeal_4");
HAnimJoint1557->setDEF("hanim_r_carpal_proximal_interphalangeal_4");
HAnimJoint1557->setCenter(new float[3]{-0.192,0.7318,-0.0716});
HAnimJoint1557->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1557->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1558 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1558->setName("r_carpal_middle_phalanx_4");
HAnimSegment1558->setDEF("hanim_r_carpal_middle_phalanx_4");
CTransform* Transform1559 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1559->setTranslation(new float[3]{-0.192,0.7318,-0.0716});
CTransform* Transform1560 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1561 = (CShape *)(m_pScene.createNode("Shape"));
Shape1561->setUSE("HAnimJointShape");
Transform1560->addChild(*Shape1561);

Transform1559->addChildren(*Transform1560);

HAnimSegment1558->addChildren(*Transform1559);

CShape* Shape1562 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1563 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1563->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1564 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1564->setPoint(new float[6]{-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706});
LineSet1563->setCoord(*Coordinate1564);

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA1565 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1565->setUSE("HAnimSegmentLineColorRGBA");
LineSet1563->setColor(*ColorRGBA1565);

Shape1562->setGeometry(LineSet1563);

HAnimSegment1558->addChildren(*Shape1562);

CHAnimSite* HAnimSite1566 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1566->setName("r_carpal_distal_phalanx_4_tip");
HAnimSite1566->setDEF("hanim_r_carpal_distal_phalanx_4_tip");
CTouchSensor* TouchSensor1567 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1567->setDescription("HAnimSite r_carpal_distal_phalanx_4_tip");
HAnimSite1566->addChildren(*TouchSensor1567);

CShape* Shape1568 = (CShape *)(m_pScene.createNode("Shape"));
Shape1568->setUSE("HAnimSiteShape");
HAnimSite1566->addChildren(*Shape1568);

HAnimSegment1558->addChildren(*HAnimSite1566);

HAnimJoint1557->addChildren(*HAnimSegment1558);

CHAnimJoint* HAnimJoint1569 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1569->setName("r_carpal_distal_interphalangeal_4");
HAnimJoint1569->setDEF("hanim_r_carpal_distal_interphalangeal_4");
HAnimJoint1569->setCenter(new float[3]{-0.1908,0.7077,-0.0706});
HAnimJoint1569->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1569->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1557->addChildren(*HAnimJoint1569);

HAnimJoint1548->addChildren(*HAnimJoint1557);

HAnimJoint1539->addChildren(*HAnimJoint1548);

HAnimJoint1523->addChildren(*HAnimJoint1539);

CHAnimJoint* HAnimJoint1570 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1570->setName("r_carpometacarpal_5");
HAnimJoint1570->setDEF("hanim_r_carpometacarpal_5");
HAnimJoint1570->setCenter(new float[3]{-0.1926,0.8096,-0.0975});
HAnimJoint1570->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1570->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1571 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1571->setName("r_metacarpal_5");
HAnimSegment1571->setDEF("hanim_r_metacarpal_5");
CTransform* Transform1572 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1572->setTranslation(new float[3]{-0.1926,0.8096,-0.0975});
CTransform* Transform1573 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1574 = (CShape *)(m_pScene.createNode("Shape"));
Shape1574->setUSE("HAnimJointShape");
Transform1573->addChild(*Shape1574);

Transform1572->addChildren(*Transform1573);

HAnimSegment1571->addChildren(*Transform1572);

CShape* Shape1575 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1576 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1576->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1577 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1577->setPoint(new float[6]{-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975});
LineSet1576->setCoord(*Coordinate1577);

//from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
CColorRGBA* ColorRGBA1578 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1578->setUSE("HAnimSegmentLineColorRGBA");
LineSet1576->setColor(*ColorRGBA1578);

Shape1575->setGeometry(LineSet1576);

HAnimSegment1571->addChildren(*Shape1575);

HAnimJoint1570->addChildren(*HAnimSegment1571);

CHAnimJoint* HAnimJoint1579 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1579->setName("r_metacarpophalangeal_5");
HAnimJoint1579->setDEF("hanim_r_metacarpophalangeal_5");
HAnimJoint1579->setCenter(new float[3]{-0.1926,0.7896,-0.0975});
HAnimJoint1579->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1579->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1580 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1580->setName("r_carpal_proximal_phalanx_5");
HAnimSegment1580->setDEF("hanim_r_carpal_proximal_phalanx_5");
CTransform* Transform1581 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1581->setTranslation(new float[3]{-0.1926,0.7896,-0.0975});
CTransform* Transform1582 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1583 = (CShape *)(m_pScene.createNode("Shape"));
Shape1583->setUSE("HAnimJointShape");
Transform1582->addChild(*Shape1583);

Transform1581->addChildren(*Transform1582);

HAnimSegment1580->addChildren(*Transform1581);

CShape* Shape1584 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1585 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1585->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1586 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1586->setPoint(new float[6]{-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963});
LineSet1585->setCoord(*Coordinate1586);

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA1587 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1587->setUSE("HAnimSegmentLineColorRGBA");
LineSet1585->setColor(*ColorRGBA1587);

Shape1584->setGeometry(LineSet1585);

HAnimSegment1580->addChildren(*Shape1584);

HAnimJoint1579->addChildren(*HAnimSegment1580);

CHAnimJoint* HAnimJoint1588 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1588->setName("r_carpal_proximal_interphalangeal_5");
HAnimJoint1588->setDEF("hanim_r_carpal_proximal_interphalangeal_5");
HAnimJoint1588->setCenter(new float[3]{-0.1902,0.7483,-0.0963});
HAnimJoint1588->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1588->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1589 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1589->setName("r_carpal_middle_phalanx_5");
HAnimSegment1589->setDEF("hanim_r_carpal_middle_phalanx_5");
CTransform* Transform1590 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1590->setTranslation(new float[3]{-0.1902,0.7483,-0.0963});
CTransform* Transform1591 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1592 = (CShape *)(m_pScene.createNode("Shape"));
Shape1592->setUSE("HAnimJointShape");
Transform1591->addChild(*Shape1592);

Transform1590->addChildren(*Transform1591);

HAnimSegment1589->addChildren(*Transform1590);

CShape* Shape1593 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1594 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1594->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1595 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1595->setPoint(new float[6]{-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096});
LineSet1594->setCoord(*Coordinate1595);

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA1596 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1596->setUSE("HAnimSegmentLineColorRGBA");
LineSet1594->setColor(*ColorRGBA1596);

Shape1593->setGeometry(LineSet1594);

HAnimSegment1589->addChildren(*Shape1593);

CHAnimSite* HAnimSite1597 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1597->setName("r_carpal_distal_phalanx_5_tip");
HAnimSite1597->setDEF("hanim_r_carpal_distal_phalanx_5_tip");
CTouchSensor* TouchSensor1598 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1598->setDescription("HAnimSite r_carpal_distal_phalanx_5_tip");
HAnimSite1597->addChildren(*TouchSensor1598);

CShape* Shape1599 = (CShape *)(m_pScene.createNode("Shape"));
Shape1599->setUSE("HAnimSiteShape");
HAnimSite1597->addChildren(*Shape1599);

HAnimSegment1589->addChildren(*HAnimSite1597);

HAnimJoint1588->addChildren(*HAnimSegment1589);

CHAnimJoint* HAnimJoint1600 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1600->setName("r_carpal_distal_interphalangeal_5");
HAnimJoint1600->setDEF("hanim_r_carpal_distal_interphalangeal_5");
HAnimJoint1600->setCenter(new float[3]{-0.1908,0.754,-0.096});
HAnimJoint1600->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1600->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1588->addChildren(*HAnimJoint1600);

HAnimJoint1579->addChildren(*HAnimJoint1588);

HAnimJoint1570->addChildren(*HAnimJoint1579);

HAnimJoint1523->addChildren(*HAnimJoint1570);

HAnimJoint1382->addChildren(*HAnimJoint1523);

HAnimJoint1370->addChildren(*HAnimJoint1382);

HAnimJoint1349->addChildren(*HAnimJoint1370);

HAnimJoint1334->addChildren(*HAnimJoint1349);

HAnimJoint1325->addChildren(*HAnimJoint1334);

HAnimJoint845->addChildren(*HAnimJoint1325);

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

HAnimJoint45->addChildren(*HAnimJoint662);

HAnimHumanoid43->setSkeleton(*HAnimJoint45);

CHAnimJoint* HAnimJoint1601 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1601->setUSE("hanim_humanoid_root");
HAnimHumanoid43->addJoints(*HAnimJoint1601);

CHAnimJoint* HAnimJoint1602 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1602->setUSE("hanim_sacroiliac");
HAnimHumanoid43->addJoints(*HAnimJoint1602);

CHAnimJoint* HAnimJoint1603 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1603->setUSE("hanim_l_hip");
HAnimHumanoid43->addJoints(*HAnimJoint1603);

CHAnimJoint* HAnimJoint1604 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1604->setUSE("hanim_l_knee");
HAnimHumanoid43->addJoints(*HAnimJoint1604);

CHAnimJoint* HAnimJoint1605 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1605->setUSE("hanim_l_talocrural");
HAnimHumanoid43->addJoints(*HAnimJoint1605);

CHAnimJoint* HAnimJoint1606 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1606->setUSE("hanim_l_talocalcaneonavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1606);

CHAnimJoint* HAnimJoint1607 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1607->setUSE("hanim_l_cuneonavicular_1");
HAnimHumanoid43->addJoints(*HAnimJoint1607);

CHAnimJoint* HAnimJoint1608 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1608->setUSE("hanim_l_tarsometatarsal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1608);

CHAnimJoint* HAnimJoint1609 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1609->setUSE("hanim_l_metatarsophalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1609);

CHAnimJoint* HAnimJoint1610 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1610->setUSE("hanim_l_tarsal_interphalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1610);

CHAnimJoint* HAnimJoint1611 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1611->setUSE("hanim_l_cuneonavicular_2");
HAnimHumanoid43->addJoints(*HAnimJoint1611);

CHAnimJoint* HAnimJoint1612 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1612->setUSE("hanim_l_tarsometatarsal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1612);

CHAnimJoint* HAnimJoint1613 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1613->setUSE("hanim_l_metatarsophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1613);

CHAnimJoint* HAnimJoint1614 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1614->setUSE("hanim_l_tarsal_proximal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1614);

CHAnimJoint* HAnimJoint1615 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1615->setUSE("hanim_l_tarsal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1615);

CHAnimJoint* HAnimJoint1616 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1616->setUSE("hanim_l_cuneonavicular_3");
HAnimHumanoid43->addJoints(*HAnimJoint1616);

CHAnimJoint* HAnimJoint1617 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1617->setUSE("hanim_l_tarsometatarsal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1617);

CHAnimJoint* HAnimJoint1618 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1618->setUSE("hanim_l_metatarsophalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1618);

CHAnimJoint* HAnimJoint1619 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1619->setUSE("hanim_l_tarsal_proximal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1619);

CHAnimJoint* HAnimJoint1620 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1620->setUSE("hanim_l_tarsal_distal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1620);

CHAnimJoint* HAnimJoint1621 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1621->setUSE("hanim_l_calcaneocuboid");
HAnimHumanoid43->addJoints(*HAnimJoint1621);

CHAnimJoint* HAnimJoint1622 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1622->setUSE("hanim_l_transversetarsal");
HAnimHumanoid43->addJoints(*HAnimJoint1622);

CHAnimJoint* HAnimJoint1623 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1623->setUSE("hanim_l_tarsometatarsal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1623);

CHAnimJoint* HAnimJoint1624 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1624->setUSE("hanim_l_metatarsophalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1624);

CHAnimJoint* HAnimJoint1625 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1625->setUSE("hanim_l_tarsal_proximal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1625);

CHAnimJoint* HAnimJoint1626 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1626->setUSE("hanim_l_tarsal_distal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1626);

CHAnimJoint* HAnimJoint1627 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1627->setUSE("hanim_l_tarsometatarsal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1627);

CHAnimJoint* HAnimJoint1628 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1628->setUSE("hanim_l_metatarsophalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1628);

CHAnimJoint* HAnimJoint1629 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1629->setUSE("hanim_l_tarsal_proximal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1629);

CHAnimJoint* HAnimJoint1630 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1630->setUSE("hanim_l_tarsal_distal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1630);

CHAnimJoint* HAnimJoint1631 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1631->setUSE("hanim_r_hip");
HAnimHumanoid43->addJoints(*HAnimJoint1631);

CHAnimJoint* HAnimJoint1632 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1632->setUSE("hanim_r_knee");
HAnimHumanoid43->addJoints(*HAnimJoint1632);

CHAnimJoint* HAnimJoint1633 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1633->setUSE("hanim_r_talocrural");
HAnimHumanoid43->addJoints(*HAnimJoint1633);

CHAnimJoint* HAnimJoint1634 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1634->setUSE("hanim_r_talocalcaneonavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1634);

CHAnimJoint* HAnimJoint1635 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1635->setUSE("hanim_r_cuneonavicular_1");
HAnimHumanoid43->addJoints(*HAnimJoint1635);

CHAnimJoint* HAnimJoint1636 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1636->setUSE("hanim_r_tarsometatarsal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1636);

CHAnimJoint* HAnimJoint1637 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1637->setUSE("hanim_r_metatarsophalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1637);

CHAnimJoint* HAnimJoint1638 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1638->setUSE("hanim_r_tarsal_interphalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1638);

CHAnimJoint* HAnimJoint1639 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1639->setUSE("hanim_r_cuneonavicular_2");
HAnimHumanoid43->addJoints(*HAnimJoint1639);

CHAnimJoint* HAnimJoint1640 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1640->setUSE("hanim_r_tarsometatarsal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1640);

CHAnimJoint* HAnimJoint1641 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1641->setUSE("hanim_r_metatarsophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1641);

CHAnimJoint* HAnimJoint1642 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1642->setUSE("hanim_r_tarsal_proximal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1642);

CHAnimJoint* HAnimJoint1643 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1643->setUSE("hanim_r_tarsal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1643);

CHAnimJoint* HAnimJoint1644 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1644->setUSE("hanim_r_cuneonavicular_3");
HAnimHumanoid43->addJoints(*HAnimJoint1644);

CHAnimJoint* HAnimJoint1645 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1645->setUSE("hanim_r_tarsometatarsal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1645);

CHAnimJoint* HAnimJoint1646 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1646->setUSE("hanim_r_metatarsophalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1646);

CHAnimJoint* HAnimJoint1647 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1647->setUSE("hanim_r_tarsal_proximal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1647);

CHAnimJoint* HAnimJoint1648 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1648->setUSE("hanim_r_tarsal_distal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1648);

CHAnimJoint* HAnimJoint1649 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1649->setUSE("hanim_r_calcaneocuboid");
HAnimHumanoid43->addJoints(*HAnimJoint1649);

CHAnimJoint* HAnimJoint1650 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1650->setUSE("hanim_r_transversetarsal");
HAnimHumanoid43->addJoints(*HAnimJoint1650);

CHAnimJoint* HAnimJoint1651 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1651->setUSE("hanim_r_tarsometatarsal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1651);

CHAnimJoint* HAnimJoint1652 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1652->setUSE("hanim_r_metatarsophalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1652);

CHAnimJoint* HAnimJoint1653 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1653->setUSE("hanim_r_tarsal_proximal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1653);

CHAnimJoint* HAnimJoint1654 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1654->setUSE("hanim_r_tarsal_distal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1654);

CHAnimJoint* HAnimJoint1655 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1655->setUSE("hanim_r_tarsometatarsal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1655);

CHAnimJoint* HAnimJoint1656 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1656->setUSE("hanim_r_metatarsophalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1656);

CHAnimJoint* HAnimJoint1657 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1657->setUSE("hanim_r_tarsal_proximal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1657);

CHAnimJoint* HAnimJoint1658 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1658->setUSE("hanim_r_tarsal_distal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1658);

CHAnimJoint* HAnimJoint1659 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1659->setUSE("hanim_vl5");
HAnimHumanoid43->addJoints(*HAnimJoint1659);

CHAnimJoint* HAnimJoint1660 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1660->setUSE("hanim_vl4");
HAnimHumanoid43->addJoints(*HAnimJoint1660);

CHAnimJoint* HAnimJoint1661 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1661->setUSE("hanim_vl3");
HAnimHumanoid43->addJoints(*HAnimJoint1661);

CHAnimJoint* HAnimJoint1662 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1662->setUSE("hanim_vl2");
HAnimHumanoid43->addJoints(*HAnimJoint1662);

CHAnimJoint* HAnimJoint1663 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1663->setUSE("hanim_vl1");
HAnimHumanoid43->addJoints(*HAnimJoint1663);

CHAnimJoint* HAnimJoint1664 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1664->setUSE("hanim_vt12");
HAnimHumanoid43->addJoints(*HAnimJoint1664);

CHAnimJoint* HAnimJoint1665 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1665->setUSE("hanim_vt11");
HAnimHumanoid43->addJoints(*HAnimJoint1665);

CHAnimJoint* HAnimJoint1666 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1666->setUSE("hanim_vt10");
HAnimHumanoid43->addJoints(*HAnimJoint1666);

CHAnimJoint* HAnimJoint1667 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1667->setUSE("hanim_vt9");
HAnimHumanoid43->addJoints(*HAnimJoint1667);

CHAnimJoint* HAnimJoint1668 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1668->setUSE("hanim_vt8");
HAnimHumanoid43->addJoints(*HAnimJoint1668);

CHAnimJoint* HAnimJoint1669 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1669->setUSE("hanim_vt7");
HAnimHumanoid43->addJoints(*HAnimJoint1669);

CHAnimJoint* HAnimJoint1670 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1670->setUSE("hanim_vt6");
HAnimHumanoid43->addJoints(*HAnimJoint1670);

CHAnimJoint* HAnimJoint1671 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1671->setUSE("hanim_vt5");
HAnimHumanoid43->addJoints(*HAnimJoint1671);

CHAnimJoint* HAnimJoint1672 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1672->setUSE("hanim_vt4");
HAnimHumanoid43->addJoints(*HAnimJoint1672);

CHAnimJoint* HAnimJoint1673 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1673->setUSE("hanim_vt3");
HAnimHumanoid43->addJoints(*HAnimJoint1673);

CHAnimJoint* HAnimJoint1674 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1674->setUSE("hanim_vt2");
HAnimHumanoid43->addJoints(*HAnimJoint1674);

CHAnimJoint* HAnimJoint1675 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1675->setUSE("hanim_vt1");
HAnimHumanoid43->addJoints(*HAnimJoint1675);

CHAnimJoint* HAnimJoint1676 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1676->setUSE("hanim_vc7");
HAnimHumanoid43->addJoints(*HAnimJoint1676);

CHAnimJoint* HAnimJoint1677 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1677->setUSE("hanim_vc6");
HAnimHumanoid43->addJoints(*HAnimJoint1677);

CHAnimJoint* HAnimJoint1678 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1678->setUSE("hanim_vc5");
HAnimHumanoid43->addJoints(*HAnimJoint1678);

CHAnimJoint* HAnimJoint1679 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1679->setUSE("hanim_vc4");
HAnimHumanoid43->addJoints(*HAnimJoint1679);

CHAnimJoint* HAnimJoint1680 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1680->setUSE("hanim_vc3");
HAnimHumanoid43->addJoints(*HAnimJoint1680);

CHAnimJoint* HAnimJoint1681 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1681->setUSE("hanim_vc2");
HAnimHumanoid43->addJoints(*HAnimJoint1681);

CHAnimJoint* HAnimJoint1682 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1682->setUSE("hanim_vc1");
HAnimHumanoid43->addJoints(*HAnimJoint1682);

CHAnimJoint* HAnimJoint1683 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1683->setUSE("hanim_skullbase");
HAnimHumanoid43->addJoints(*HAnimJoint1683);

CHAnimJoint* HAnimJoint1684 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1684->setUSE("hanim_l_eyelid_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1684);

CHAnimJoint* HAnimJoint1685 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1685->setUSE("hanim_r_eyelid_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1685);

CHAnimJoint* HAnimJoint1686 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1686->setUSE("hanim_l_eyeball_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1686);

CHAnimJoint* HAnimJoint1687 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1687->setUSE("hanim_r_eyeball_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1687);

CHAnimJoint* HAnimJoint1688 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1688->setUSE("hanim_l_eyebrow_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1688);

CHAnimJoint* HAnimJoint1689 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1689->setUSE("hanim_r_eyebrow_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1689);

CHAnimJoint* HAnimJoint1690 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1690->setUSE("hanim_temporomandibular");
HAnimHumanoid43->addJoints(*HAnimJoint1690);

CHAnimJoint* HAnimJoint1691 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1691->setUSE("hanim_l_sternoclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1691);

CHAnimJoint* HAnimJoint1692 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1692->setUSE("hanim_l_acromioclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1692);

CHAnimJoint* HAnimJoint1693 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1693->setUSE("hanim_l_shoulder");
HAnimHumanoid43->addJoints(*HAnimJoint1693);

CHAnimJoint* HAnimJoint1694 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1694->setUSE("hanim_l_elbow");
HAnimHumanoid43->addJoints(*HAnimJoint1694);

CHAnimJoint* HAnimJoint1695 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1695->setUSE("hanim_l_radiocarpal");
HAnimHumanoid43->addJoints(*HAnimJoint1695);

CHAnimJoint* HAnimJoint1696 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1696->setUSE("hanim_l_midcarpal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1696);

CHAnimJoint* HAnimJoint1697 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1697->setUSE("hanim_l_carpometacarpal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1697);

CHAnimJoint* HAnimJoint1698 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1698->setUSE("hanim_l_metacarpophalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1698);

CHAnimJoint* HAnimJoint1699 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1699->setUSE("hanim_l_carpal_interphalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1699);

CHAnimJoint* HAnimJoint1700 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1700->setUSE("hanim_l_midcarpal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1700);

CHAnimJoint* HAnimJoint1701 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1701->setUSE("hanim_l_carpometacarpal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1701);

CHAnimJoint* HAnimJoint1702 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1702->setUSE("hanim_l_metacarpophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1702);

CHAnimJoint* HAnimJoint1703 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1703->setUSE("hanim_l_carpal_proximal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1703);

CHAnimJoint* HAnimJoint1704 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1704->setUSE("hanim_l_carpal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1704);

CHAnimJoint* HAnimJoint1705 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1705->setUSE("hanim_l_midcarpal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1705);

CHAnimJoint* HAnimJoint1706 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1706->setUSE("hanim_l_carpometacarpal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1706);

CHAnimJoint* HAnimJoint1707 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1707->setUSE("hanim_l_metacarpophalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1707);

CHAnimJoint* HAnimJoint1708 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1708->setUSE("hanim_l_carpal_proximal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1708);

CHAnimJoint* HAnimJoint1709 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1709->setUSE("hanim_l_carpal_distal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1709);

CHAnimJoint* HAnimJoint1710 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1710->setUSE("hanim_l_midcarpal_4_5");
HAnimHumanoid43->addJoints(*HAnimJoint1710);

CHAnimJoint* HAnimJoint1711 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1711->setUSE("hanim_l_carpometacarpal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1711);

CHAnimJoint* HAnimJoint1712 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1712->setUSE("hanim_l_metacarpophalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1712);

CHAnimJoint* HAnimJoint1713 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1713->setUSE("hanim_l_carpal_proximal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1713);

CHAnimJoint* HAnimJoint1714 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1714->setUSE("hanim_l_carpal_distal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1714);

CHAnimJoint* HAnimJoint1715 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1715->setUSE("hanim_l_carpometacarpal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1715);

CHAnimJoint* HAnimJoint1716 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1716->setUSE("hanim_l_metacarpophalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1716);

CHAnimJoint* HAnimJoint1717 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1717->setUSE("hanim_l_carpal_proximal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1717);

CHAnimJoint* HAnimJoint1718 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1718->setUSE("hanim_l_carpal_distal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1718);

CHAnimJoint* HAnimJoint1719 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1719->setUSE("hanim_r_sternoclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1719);

CHAnimJoint* HAnimJoint1720 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1720->setUSE("hanim_r_acromioclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1720);

CHAnimJoint* HAnimJoint1721 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1721->setUSE("hanim_r_shoulder");
HAnimHumanoid43->addJoints(*HAnimJoint1721);

CHAnimJoint* HAnimJoint1722 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1722->setUSE("hanim_r_elbow");
HAnimHumanoid43->addJoints(*HAnimJoint1722);

CHAnimJoint* HAnimJoint1723 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1723->setUSE("hanim_r_radiocarpal");
HAnimHumanoid43->addJoints(*HAnimJoint1723);

CHAnimJoint* HAnimJoint1724 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1724->setUSE("hanim_r_midcarpal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1724);

CHAnimJoint* HAnimJoint1725 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1725->setUSE("hanim_r_carpometacarpal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1725);

CHAnimJoint* HAnimJoint1726 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1726->setUSE("hanim_r_metacarpophalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1726);

CHAnimJoint* HAnimJoint1727 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1727->setUSE("hanim_r_carpal_interphalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1727);

CHAnimJoint* HAnimJoint1728 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1728->setUSE("hanim_r_midcarpal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1728);

CHAnimJoint* HAnimJoint1729 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1729->setUSE("hanim_r_carpometacarpal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1729);

CHAnimJoint* HAnimJoint1730 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1730->setUSE("hanim_r_metacarpophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1730);

CHAnimJoint* HAnimJoint1731 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1731->setUSE("hanim_r_carpal_proximal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1731);

CHAnimJoint* HAnimJoint1732 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1732->setUSE("hanim_r_carpal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1732);

CHAnimJoint* HAnimJoint1733 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1733->setUSE("hanim_r_midcarpal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1733);

CHAnimJoint* HAnimJoint1734 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1734->setUSE("hanim_r_carpometacarpal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1734);

CHAnimJoint* HAnimJoint1735 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1735->setUSE("hanim_r_metacarpophalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1735);

CHAnimJoint* HAnimJoint1736 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1736->setUSE("hanim_r_carpal_proximal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1736);

CHAnimJoint* HAnimJoint1737 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1737->setUSE("hanim_r_carpal_distal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1737);

CHAnimJoint* HAnimJoint1738 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1738->setUSE("hanim_r_midcarpal_4_5");
HAnimHumanoid43->addJoints(*HAnimJoint1738);

CHAnimJoint* HAnimJoint1739 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1739->setUSE("hanim_r_carpometacarpal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1739);

CHAnimJoint* HAnimJoint1740 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1740->setUSE("hanim_r_metacarpophalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1740);

CHAnimJoint* HAnimJoint1741 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1741->setUSE("hanim_r_carpal_proximal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1741);

CHAnimJoint* HAnimJoint1742 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1742->setUSE("hanim_r_carpal_distal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1742);

CHAnimJoint* HAnimJoint1743 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1743->setUSE("hanim_r_carpometacarpal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1743);

CHAnimJoint* HAnimJoint1744 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1744->setUSE("hanim_r_metacarpophalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1744);

CHAnimJoint* HAnimJoint1745 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1745->setUSE("hanim_r_carpal_proximal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1745);

CHAnimJoint* HAnimJoint1746 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1746->setUSE("hanim_r_carpal_distal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1746);

CHAnimSegment* HAnimSegment1747 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1747->setUSE("hanim_sacrum");
HAnimHumanoid43->setSegments(*HAnimSegment1747);

CHAnimSegment* HAnimSegment1748 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1748->setUSE("hanim_pelvis");
HAnimHumanoid43->setSegments(*HAnimSegment1748);

CHAnimSegment* HAnimSegment1749 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1749->setUSE("hanim_l_thigh");
HAnimHumanoid43->setSegments(*HAnimSegment1749);

CHAnimSegment* HAnimSegment1750 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1750->setUSE("hanim_l_calf");
HAnimHumanoid43->setSegments(*HAnimSegment1750);

CHAnimSegment* HAnimSegment1751 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1751->setUSE("hanim_l_talus");
HAnimHumanoid43->setSegments(*HAnimSegment1751);

CHAnimSegment* HAnimSegment1752 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1752->setUSE("hanim_l_navicular");
HAnimHumanoid43->setSegments(*HAnimSegment1752);

CHAnimSegment* HAnimSegment1753 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1753->setUSE("hanim_l_cuneiform_1");
HAnimHumanoid43->setSegments(*HAnimSegment1753);

CHAnimSegment* HAnimSegment1754 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1754->setUSE("hanim_l_metatarsal_1");
HAnimHumanoid43->setSegments(*HAnimSegment1754);

CHAnimSegment* HAnimSegment1755 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1755->setUSE("hanim_l_tarsal_proximal_phalanx_1");
HAnimHumanoid43->setSegments(*HAnimSegment1755);

CHAnimSegment* HAnimSegment1756 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1756->setUSE("hanim_l_cuneiform_2");
HAnimHumanoid43->setSegments(*HAnimSegment1756);

CHAnimSegment* HAnimSegment1757 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1757->setUSE("hanim_l_metatarsal_2");
HAnimHumanoid43->setSegments(*HAnimSegment1757);

CHAnimSegment* HAnimSegment1758 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1758->setUSE("hanim_l_tarsal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1758);

CHAnimSegment* HAnimSegment1759 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1759->setUSE("hanim_l_tarsal_middle_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1759);

CHAnimSegment* HAnimSegment1760 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1760->setUSE("hanim_l_cuneiform_3");
HAnimHumanoid43->setSegments(*HAnimSegment1760);

CHAnimSegment* HAnimSegment1761 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1761->setUSE("hanim_l_metatarsal_3");
HAnimHumanoid43->setSegments(*HAnimSegment1761);

CHAnimSegment* HAnimSegment1762 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1762->setUSE("hanim_l_tarsal_proximal_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1762);

CHAnimSegment* HAnimSegment1763 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1763->setUSE("hanim_l_tarsal_middle_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1763);

CHAnimSegment* HAnimSegment1764 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1764->setUSE("hanim_l_calcaneus");
HAnimHumanoid43->setSegments(*HAnimSegment1764);

CHAnimSegment* HAnimSegment1765 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1765->setUSE("hanim_l_cuboid");
HAnimHumanoid43->setSegments(*HAnimSegment1765);

CHAnimSegment* HAnimSegment1766 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1766->setUSE("hanim_l_metatarsal_4");
HAnimHumanoid43->setSegments(*HAnimSegment1766);

CHAnimSegment* HAnimSegment1767 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1767->setUSE("hanim_l_tarsal_proximal_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1767);

CHAnimSegment* HAnimSegment1768 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1768->setUSE("hanim_l_tarsal_middle_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1768);

CHAnimSegment* HAnimSegment1769 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1769->setUSE("hanim_l_metatarsal_5");
HAnimHumanoid43->setSegments(*HAnimSegment1769);

CHAnimSegment* HAnimSegment1770 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1770->setUSE("hanim_l_tarsal_proximal_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1770);

CHAnimSegment* HAnimSegment1771 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1771->setUSE("hanim_l_tarsal_middle_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1771);

CHAnimSegment* HAnimSegment1772 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1772->setUSE("hanim_r_thigh");
HAnimHumanoid43->setSegments(*HAnimSegment1772);

CHAnimSegment* HAnimSegment1773 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1773->setUSE("hanim_r_calf");
HAnimHumanoid43->setSegments(*HAnimSegment1773);

CHAnimSegment* HAnimSegment1774 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1774->setUSE("hanim_r_talus");
HAnimHumanoid43->setSegments(*HAnimSegment1774);

CHAnimSegment* HAnimSegment1775 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1775->setUSE("hanim_r_navicular");
HAnimHumanoid43->setSegments(*HAnimSegment1775);

CHAnimSegment* HAnimSegment1776 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1776->setUSE("hanim_r_cuneiform_1");
HAnimHumanoid43->setSegments(*HAnimSegment1776);

CHAnimSegment* HAnimSegment1777 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1777->setUSE("hanim_r_metatarsal_1");
HAnimHumanoid43->setSegments(*HAnimSegment1777);

CHAnimSegment* HAnimSegment1778 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1778->setUSE("hanim_r_tarsal_proximal_phalanx_1");
HAnimHumanoid43->setSegments(*HAnimSegment1778);

CHAnimSegment* HAnimSegment1779 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1779->setUSE("hanim_r_cuneiform_2");
HAnimHumanoid43->setSegments(*HAnimSegment1779);

CHAnimSegment* HAnimSegment1780 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1780->setUSE("hanim_r_metatarsal_2");
HAnimHumanoid43->setSegments(*HAnimSegment1780);

CHAnimSegment* HAnimSegment1781 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1781->setUSE("hanim_r_tarsal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1781);

CHAnimSegment* HAnimSegment1782 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1782->setUSE("hanim_r_tarsal_middle_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1782);

CHAnimSegment* HAnimSegment1783 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1783->setUSE("hanim_r_cuneiform_3");
HAnimHumanoid43->setSegments(*HAnimSegment1783);

CHAnimSegment* HAnimSegment1784 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1784->setUSE("hanim_r_metatarsal_3");
HAnimHumanoid43->setSegments(*HAnimSegment1784);

CHAnimSegment* HAnimSegment1785 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1785->setUSE("hanim_r_tarsal_proximal_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1785);

CHAnimSegment* HAnimSegment1786 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1786->setUSE("hanim_r_tarsal_middle_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1786);

CHAnimSegment* HAnimSegment1787 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1787->setUSE("hanim_r_calcaneus");
HAnimHumanoid43->setSegments(*HAnimSegment1787);

CHAnimSegment* HAnimSegment1788 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1788->setUSE("hanim_r_cuboid");
HAnimHumanoid43->setSegments(*HAnimSegment1788);

CHAnimSegment* HAnimSegment1789 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1789->setUSE("hanim_r_metatarsal_4");
HAnimHumanoid43->setSegments(*HAnimSegment1789);

CHAnimSegment* HAnimSegment1790 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1790->setUSE("hanim_r_tarsal_proximal_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1790);

CHAnimSegment* HAnimSegment1791 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1791->setUSE("hanim_r_tarsal_middle_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1791);

CHAnimSegment* HAnimSegment1792 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1792->setUSE("hanim_r_metatarsal_5");
HAnimHumanoid43->setSegments(*HAnimSegment1792);

CHAnimSegment* HAnimSegment1793 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1793->setUSE("hanim_r_tarsal_proximal_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1793);

CHAnimSegment* HAnimSegment1794 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1794->setUSE("hanim_r_tarsal_middle_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1794);

CHAnimSegment* HAnimSegment1795 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1795->setUSE("hanim_l5");
HAnimHumanoid43->setSegments(*HAnimSegment1795);

CHAnimSegment* HAnimSegment1796 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1796->setUSE("hanim_l4");
HAnimHumanoid43->setSegments(*HAnimSegment1796);

CHAnimSegment* HAnimSegment1797 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1797->setUSE("hanim_l3");
HAnimHumanoid43->setSegments(*HAnimSegment1797);

CHAnimSegment* HAnimSegment1798 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1798->setUSE("hanim_l2");
HAnimHumanoid43->setSegments(*HAnimSegment1798);

CHAnimSegment* HAnimSegment1799 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1799->setUSE("hanim_l1");
HAnimHumanoid43->setSegments(*HAnimSegment1799);

CHAnimSegment* HAnimSegment1800 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1800->setUSE("hanim_t12");
HAnimHumanoid43->setSegments(*HAnimSegment1800);

CHAnimSegment* HAnimSegment1801 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1801->setUSE("hanim_t11");
HAnimHumanoid43->setSegments(*HAnimSegment1801);

CHAnimSegment* HAnimSegment1802 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1802->setUSE("hanim_t10");
HAnimHumanoid43->setSegments(*HAnimSegment1802);

CHAnimSegment* HAnimSegment1803 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1803->setUSE("hanim_t9");
HAnimHumanoid43->setSegments(*HAnimSegment1803);

CHAnimSegment* HAnimSegment1804 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1804->setUSE("hanim_t8");
HAnimHumanoid43->setSegments(*HAnimSegment1804);

CHAnimSegment* HAnimSegment1805 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1805->setUSE("hanim_t7");
HAnimHumanoid43->setSegments(*HAnimSegment1805);

CHAnimSegment* HAnimSegment1806 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1806->setUSE("hanim_t6");
HAnimHumanoid43->setSegments(*HAnimSegment1806);

CHAnimSegment* HAnimSegment1807 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1807->setUSE("hanim_t5");
HAnimHumanoid43->setSegments(*HAnimSegment1807);

CHAnimSegment* HAnimSegment1808 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1808->setUSE("hanim_t4");
HAnimHumanoid43->setSegments(*HAnimSegment1808);

CHAnimSegment* HAnimSegment1809 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1809->setUSE("hanim_t3");
HAnimHumanoid43->setSegments(*HAnimSegment1809);

CHAnimSegment* HAnimSegment1810 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1810->setUSE("hanim_t2");
HAnimHumanoid43->setSegments(*HAnimSegment1810);

CHAnimSegment* HAnimSegment1811 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1811->setUSE("hanim_t1");
HAnimHumanoid43->setSegments(*HAnimSegment1811);

CHAnimSegment* HAnimSegment1812 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1812->setUSE("hanim_c7");
HAnimHumanoid43->setSegments(*HAnimSegment1812);

CHAnimSegment* HAnimSegment1813 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1813->setUSE("hanim_c6");
HAnimHumanoid43->setSegments(*HAnimSegment1813);

CHAnimSegment* HAnimSegment1814 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1814->setUSE("hanim_c5");
HAnimHumanoid43->setSegments(*HAnimSegment1814);

CHAnimSegment* HAnimSegment1815 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1815->setUSE("hanim_c4");
HAnimHumanoid43->setSegments(*HAnimSegment1815);

CHAnimSegment* HAnimSegment1816 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1816->setUSE("hanim_c3");
HAnimHumanoid43->setSegments(*HAnimSegment1816);

CHAnimSegment* HAnimSegment1817 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1817->setUSE("hanim_c2");
HAnimHumanoid43->setSegments(*HAnimSegment1817);

CHAnimSegment* HAnimSegment1818 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1818->setUSE("hanim_c1");
HAnimHumanoid43->setSegments(*HAnimSegment1818);

CHAnimSegment* HAnimSegment1819 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1819->setUSE("hanim_skull");
HAnimHumanoid43->setSegments(*HAnimSegment1819);

CHAnimSegment* HAnimSegment1820 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1820->setUSE("hanim_l_clavicle");
HAnimHumanoid43->setSegments(*HAnimSegment1820);

CHAnimSegment* HAnimSegment1821 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1821->setUSE("hanim_l_scapula");
HAnimHumanoid43->setSegments(*HAnimSegment1821);

CHAnimSegment* HAnimSegment1822 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1822->setUSE("hanim_l_upperarm");
HAnimHumanoid43->setSegments(*HAnimSegment1822);

CHAnimSegment* HAnimSegment1823 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1823->setUSE("hanim_l_forearm");
HAnimHumanoid43->setSegments(*HAnimSegment1823);

CHAnimSegment* HAnimSegment1824 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1824->setUSE("hanim_l_carpal");
HAnimHumanoid43->setSegments(*HAnimSegment1824);

CHAnimSegment* HAnimSegment1825 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1825->setUSE("hanim_l_trapezium");
HAnimHumanoid43->setSegments(*HAnimSegment1825);

CHAnimSegment* HAnimSegment1826 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1826->setUSE("hanim_l_metacarpal_1");
HAnimHumanoid43->setSegments(*HAnimSegment1826);

CHAnimSegment* HAnimSegment1827 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1827->setUSE("hanim_l_carpal_proximal_phalanx_1");
HAnimHumanoid43->setSegments(*HAnimSegment1827);

CHAnimSegment* HAnimSegment1828 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1828->setUSE("hanim_l_trapezoid");
HAnimHumanoid43->setSegments(*HAnimSegment1828);

CHAnimSegment* HAnimSegment1829 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1829->setUSE("hanim_l_metacarpal_2");
HAnimHumanoid43->setSegments(*HAnimSegment1829);

CHAnimSegment* HAnimSegment1830 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1830->setUSE("hanim_l_carpal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1830);

CHAnimSegment* HAnimSegment1831 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1831->setUSE("hanim_l_carpal_middle_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1831);

CHAnimSegment* HAnimSegment1832 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1832->setUSE("hanim_l_capitate");
HAnimHumanoid43->setSegments(*HAnimSegment1832);

CHAnimSegment* HAnimSegment1833 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1833->setUSE("hanim_l_metacarpal_3");
HAnimHumanoid43->setSegments(*HAnimSegment1833);

CHAnimSegment* HAnimSegment1834 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1834->setUSE("hanim_l_carpal_proximal_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1834);

CHAnimSegment* HAnimSegment1835 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1835->setUSE("hanim_l_carpal_middle_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1835);

CHAnimSegment* HAnimSegment1836 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1836->setUSE("hanim_l_hamate");
HAnimHumanoid43->setSegments(*HAnimSegment1836);

CHAnimSegment* HAnimSegment1837 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1837->setUSE("hanim_l_metacarpal_4");
HAnimHumanoid43->setSegments(*HAnimSegment1837);

CHAnimSegment* HAnimSegment1838 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1838->setUSE("hanim_l_carpal_proximal_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1838);

CHAnimSegment* HAnimSegment1839 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1839->setUSE("hanim_l_carpal_middle_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1839);

CHAnimSegment* HAnimSegment1840 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1840->setUSE("hanim_l_metacarpal_5");
HAnimHumanoid43->setSegments(*HAnimSegment1840);

CHAnimSegment* HAnimSegment1841 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1841->setUSE("hanim_l_carpal_proximal_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1841);

CHAnimSegment* HAnimSegment1842 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1842->setUSE("hanim_l_carpal_middle_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1842);

CHAnimSegment* HAnimSegment1843 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1843->setUSE("hanim_r_clavicle");
HAnimHumanoid43->setSegments(*HAnimSegment1843);

CHAnimSegment* HAnimSegment1844 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1844->setUSE("hanim_r_scapula");
HAnimHumanoid43->setSegments(*HAnimSegment1844);

CHAnimSegment* HAnimSegment1845 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1845->setUSE("hanim_r_upperarm");
HAnimHumanoid43->setSegments(*HAnimSegment1845);

CHAnimSegment* HAnimSegment1846 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1846->setUSE("hanim_r_forearm");
HAnimHumanoid43->setSegments(*HAnimSegment1846);

CHAnimSegment* HAnimSegment1847 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1847->setUSE("hanim_r_carpal");
HAnimHumanoid43->setSegments(*HAnimSegment1847);

CHAnimSegment* HAnimSegment1848 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1848->setUSE("hanim_r_trapezium");
HAnimHumanoid43->setSegments(*HAnimSegment1848);

CHAnimSegment* HAnimSegment1849 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1849->setUSE("hanim_r_metacarpal_1");
HAnimHumanoid43->setSegments(*HAnimSegment1849);

CHAnimSegment* HAnimSegment1850 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1850->setUSE("hanim_r_carpal_proximal_phalanx_1");
HAnimHumanoid43->setSegments(*HAnimSegment1850);

CHAnimSegment* HAnimSegment1851 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1851->setUSE("hanim_r_trapezoid");
HAnimHumanoid43->setSegments(*HAnimSegment1851);

CHAnimSegment* HAnimSegment1852 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1852->setUSE("hanim_r_metacarpal_2");
HAnimHumanoid43->setSegments(*HAnimSegment1852);

CHAnimSegment* HAnimSegment1853 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1853->setUSE("hanim_r_carpal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1853);

CHAnimSegment* HAnimSegment1854 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1854->setUSE("hanim_r_carpal_middle_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1854);

CHAnimSegment* HAnimSegment1855 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1855->setUSE("hanim_r_capitate");
HAnimHumanoid43->setSegments(*HAnimSegment1855);

CHAnimSegment* HAnimSegment1856 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1856->setUSE("hanim_r_metacarpal_3");
HAnimHumanoid43->setSegments(*HAnimSegment1856);

CHAnimSegment* HAnimSegment1857 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1857->setUSE("hanim_r_carpal_proximal_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1857);

CHAnimSegment* HAnimSegment1858 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1858->setUSE("hanim_r_carpal_middle_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1858);

CHAnimSegment* HAnimSegment1859 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1859->setUSE("hanim_r_hamate");
HAnimHumanoid43->setSegments(*HAnimSegment1859);

CHAnimSegment* HAnimSegment1860 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1860->setUSE("hanim_r_metacarpal_4");
HAnimHumanoid43->setSegments(*HAnimSegment1860);

CHAnimSegment* HAnimSegment1861 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1861->setUSE("hanim_r_carpal_proximal_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1861);

CHAnimSegment* HAnimSegment1862 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1862->setUSE("hanim_r_carpal_middle_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1862);

CHAnimSegment* HAnimSegment1863 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1863->setUSE("hanim_r_metacarpal_5");
HAnimHumanoid43->setSegments(*HAnimSegment1863);

CHAnimSegment* HAnimSegment1864 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1864->setUSE("hanim_r_carpal_proximal_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1864);

CHAnimSegment* HAnimSegment1865 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1865->setUSE("hanim_r_carpal_middle_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1865);

CHAnimSite* HAnimSite1866 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1866->setUSE("hanim_buttocks_standing_wall_contact_point_pt");
HAnimHumanoid43->setSites(*HAnimSite1866);

CHAnimSite* HAnimSite1867 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1867->setUSE("hanim_crotch_pt");
HAnimHumanoid43->setSites(*HAnimSite1867);

CHAnimSite* HAnimSite1868 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1868->setUSE("hanim_l_asis_pt");
HAnimHumanoid43->setSites(*HAnimSite1868);

CHAnimSite* HAnimSite1869 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1869->setUSE("hanim_l_iliocristale_pt");
HAnimHumanoid43->setSites(*HAnimSite1869);

CHAnimSite* HAnimSite1870 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1870->setUSE("hanim_l_psis_pt");
HAnimHumanoid43->setSites(*HAnimSite1870);

CHAnimSite* HAnimSite1871 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1871->setUSE("hanim_l_trochanterion_pt");
HAnimHumanoid43->setSites(*HAnimSite1871);

CHAnimSite* HAnimSite1872 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1872->setUSE("hanim_r_asis_pt");
HAnimHumanoid43->setSites(*HAnimSite1872);

CHAnimSite* HAnimSite1873 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1873->setUSE("hanim_r_iliocristale_pt");
HAnimHumanoid43->setSites(*HAnimSite1873);

CHAnimSite* HAnimSite1874 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1874->setUSE("hanim_r_psis_pt");
HAnimHumanoid43->setSites(*HAnimSite1874);

CHAnimSite* HAnimSite1875 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1875->setUSE("hanim_r_trochanterion_pt");
HAnimHumanoid43->setSites(*HAnimSite1875);

CHAnimSite* HAnimSite1876 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1876->setUSE("hanim_navel_pt");
HAnimHumanoid43->setSites(*HAnimSite1876);

CHAnimSite* HAnimSite1877 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1877->setUSE("hanim_waist_preferred_anterior_pt");
HAnimHumanoid43->setSites(*HAnimSite1877);

CHAnimSite* HAnimSite1878 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1878->setUSE("hanim_waist_preferred_posterior_pt");
HAnimHumanoid43->setSites(*HAnimSite1878);

CHAnimSite* HAnimSite1879 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1879->setUSE("hanim_l_femoral_lateral_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1879);

CHAnimSite* HAnimSite1880 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1880->setUSE("hanim_l_femoral_medial_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1880);

CHAnimSite* HAnimSite1881 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1881->setUSE("hanim_l_knee_crease_pt");
HAnimHumanoid43->setSites(*HAnimSite1881);

CHAnimSite* HAnimSite1882 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1882->setUSE("hanim_l_suprapatella_pt");
HAnimHumanoid43->setSites(*HAnimSite1882);

CHAnimSite* HAnimSite1883 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1883->setUSE("hanim_r_femoral_lateral_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1883);

CHAnimSite* HAnimSite1884 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1884->setUSE("hanim_r_femoral_medial_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1884);

CHAnimSite* HAnimSite1885 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1885->setUSE("hanim_r_knee_crease_pt");
HAnimHumanoid43->setSites(*HAnimSite1885);

CHAnimSite* HAnimSite1886 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1886->setUSE("hanim_r_suprapatella_pt");
HAnimHumanoid43->setSites(*HAnimSite1886);

CHAnimSite* HAnimSite1887 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1887->setUSE("hanim_l_lateral_malleolus_pt");
HAnimHumanoid43->setSites(*HAnimSite1887);

CHAnimSite* HAnimSite1888 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1888->setUSE("hanim_l_medial_malleolus_pt");
HAnimHumanoid43->setSites(*HAnimSite1888);

CHAnimSite* HAnimSite1889 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1889->setUSE("hanim_l_tibiale_pt");
HAnimHumanoid43->setSites(*HAnimSite1889);

CHAnimSite* HAnimSite1890 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1890->setUSE("hanim_l_calcaneus_posterior_pt");
HAnimHumanoid43->setSites(*HAnimSite1890);

CHAnimSite* HAnimSite1891 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1891->setUSE("hanim_l_sphyrion_pt");
HAnimHumanoid43->setSites(*HAnimSite1891);

CHAnimSite* HAnimSite1892 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1892->setUSE("hanim_l_metatarsal_phalanx_1_pt");
HAnimHumanoid43->setSites(*HAnimSite1892);

CHAnimSite* HAnimSite1893 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1893->setUSE("hanim_l_tarsal_distal_phalanx_1_tip");
HAnimHumanoid43->setSites(*HAnimSite1893);

CHAnimSite* HAnimSite1894 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1894->setUSE("hanim_l_tarsal_distal_phalanx_2_tip");
HAnimHumanoid43->setSites(*HAnimSite1894);

CHAnimSite* HAnimSite1895 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1895->setUSE("hanim_l_tarsal_distal_phalanx_3_tip");
HAnimHumanoid43->setSites(*HAnimSite1895);

CHAnimSite* HAnimSite1896 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1896->setUSE("hanim_l_tarsal_distal_phalanx_4_tip");
HAnimHumanoid43->setSites(*HAnimSite1896);

CHAnimSite* HAnimSite1897 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1897->setUSE("hanim_l_metatarsal_phalanx_5_pt");
HAnimHumanoid43->setSites(*HAnimSite1897);

CHAnimSite* HAnimSite1898 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1898->setUSE("hanim_l_tarsal_distal_phalanx_5_tip");
HAnimHumanoid43->setSites(*HAnimSite1898);

CHAnimSite* HAnimSite1899 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1899->setUSE("hanim_r_lateral_malleolus_pt");
HAnimHumanoid43->setSites(*HAnimSite1899);

CHAnimSite* HAnimSite1900 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1900->setUSE("hanim_r_medial_malleolus_pt");
HAnimHumanoid43->setSites(*HAnimSite1900);

CHAnimSite* HAnimSite1901 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1901->setUSE("hanim_r_tibiale_pt");
HAnimHumanoid43->setSites(*HAnimSite1901);

CHAnimSite* HAnimSite1902 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1902->setUSE("hanim_r_calcaneus_posterior_pt");
HAnimHumanoid43->setSites(*HAnimSite1902);

CHAnimSite* HAnimSite1903 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1903->setUSE("hanim_r_sphyrion_pt");
HAnimHumanoid43->setSites(*HAnimSite1903);

CHAnimSite* HAnimSite1904 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1904->setUSE("hanim_r_metatarsal_phalanx_1_pt");
HAnimHumanoid43->setSites(*HAnimSite1904);

CHAnimSite* HAnimSite1905 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1905->setUSE("hanim_r_tarsal_distal_phalanx_1_tip");
HAnimHumanoid43->setSites(*HAnimSite1905);

CHAnimSite* HAnimSite1906 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1906->setUSE("hanim_r_tarsal_distal_phalanx_2_tip");
HAnimHumanoid43->setSites(*HAnimSite1906);

CHAnimSite* HAnimSite1907 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1907->setUSE("hanim_r_tarsal_distal_phalanx_3_tip");
HAnimHumanoid43->setSites(*HAnimSite1907);

CHAnimSite* HAnimSite1908 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1908->setUSE("hanim_r_tarsal_distal_phalanx_4_tip");
HAnimHumanoid43->setSites(*HAnimSite1908);

CHAnimSite* HAnimSite1909 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1909->setUSE("hanim_r_metatarsal_phalanx_5_pt");
HAnimHumanoid43->setSites(*HAnimSite1909);

CHAnimSite* HAnimSite1910 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1910->setUSE("hanim_r_tarsal_distal_phalanx_5_tip");
HAnimHumanoid43->setSites(*HAnimSite1910);

CHAnimSite* HAnimSite1911 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1911->setUSE("hanim_l_rib10_pt");
HAnimHumanoid43->setSites(*HAnimSite1911);

CHAnimSite* HAnimSite1912 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1912->setUSE("hanim_r_rib10_pt");
HAnimHumanoid43->setSites(*HAnimSite1912);

CHAnimSite* HAnimSite1913 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1913->setUSE("hanim_spine_2_middle_back_pt");
HAnimHumanoid43->setSites(*HAnimSite1913);

CHAnimSite* HAnimSite1914 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1914->setUSE("hanim_substernale_pt");
HAnimHumanoid43->setSites(*HAnimSite1914);

CHAnimSite* HAnimSite1915 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1915->setUSE("hanim_l_thelion_pt");
HAnimHumanoid43->setSites(*HAnimSite1915);

CHAnimSite* HAnimSite1916 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1916->setUSE("hanim_r_thelion_pt");
HAnimHumanoid43->setSites(*HAnimSite1916);

CHAnimSite* HAnimSite1917 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1917->setUSE("hanim_l_chest_midsagittal_plane_pt");
HAnimHumanoid43->setSites(*HAnimSite1917);

CHAnimSite* HAnimSite1918 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1918->setUSE("hanim_mesosternale_pt");
HAnimHumanoid43->setSites(*HAnimSite1918);

CHAnimSite* HAnimSite1919 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1919->setUSE("hanim_r_chest_midsagittal_plane_pt");
HAnimHumanoid43->setSites(*HAnimSite1919);

CHAnimSite* HAnimSite1920 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1920->setUSE("hanim_rear_center_midsagittal_plane_pt");
HAnimHumanoid43->setSites(*HAnimSite1920);

CHAnimSite* HAnimSite1921 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1921->setUSE("hanim_spine_1_middle_back_pt");
HAnimHumanoid43->setSites(*HAnimSite1921);

CHAnimSite* HAnimSite1922 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1922->setUSE("hanim_cervicale_pt");
HAnimHumanoid43->setSites(*HAnimSite1922);

CHAnimSite* HAnimSite1923 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1923->setUSE("hanim_suprasternale_pt");
HAnimHumanoid43->setSites(*HAnimSite1923);

CHAnimSite* HAnimSite1924 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1924->setUSE("hanim_l_neck_base_pt");
HAnimHumanoid43->setSites(*HAnimSite1924);

CHAnimSite* HAnimSite1925 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1925->setUSE("hanim_r_neck_base_pt");
HAnimHumanoid43->setSites(*HAnimSite1925);

CHAnimSite* HAnimSite1926 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1926->setUSE("hanim_l_acromion_pt");
HAnimHumanoid43->setSites(*HAnimSite1926);

CHAnimSite* HAnimSite1927 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1927->setUSE("hanim_l_axilla_distal_pt");
HAnimHumanoid43->setSites(*HAnimSite1927);

CHAnimSite* HAnimSite1928 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1928->setUSE("hanim_l_axilla_posterior_folds_pt");
HAnimHumanoid43->setSites(*HAnimSite1928);

CHAnimSite* HAnimSite1929 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1929->setUSE("hanim_l_axilla_proximal_pt");
HAnimHumanoid43->setSites(*HAnimSite1929);

CHAnimSite* HAnimSite1930 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1930->setUSE("hanim_l_clavicale_pt");
HAnimHumanoid43->setSites(*HAnimSite1930);

CHAnimSite* HAnimSite1931 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1931->setUSE("hanim_r_acromion_pt");
HAnimHumanoid43->setSites(*HAnimSite1931);

CHAnimSite* HAnimSite1932 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1932->setUSE("hanim_r_axilla_distal_pt");
HAnimHumanoid43->setSites(*HAnimSite1932);

CHAnimSite* HAnimSite1933 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1933->setUSE("hanim_r_axilla_posterior_folds_pt");
HAnimHumanoid43->setSites(*HAnimSite1933);

CHAnimSite* HAnimSite1934 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1934->setUSE("hanim_r_axilla_proximal_pt");
HAnimHumanoid43->setSites(*HAnimSite1934);

CHAnimSite* HAnimSite1935 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1935->setUSE("hanim_r_clavicale_pt");
HAnimHumanoid43->setSites(*HAnimSite1935);

CHAnimSite* HAnimSite1936 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1936->setUSE("hanim_adams_apple_pt");
HAnimHumanoid43->setSites(*HAnimSite1936);

CHAnimSite* HAnimSite1937 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1937->setUSE("hanim_glabella_pt");
HAnimHumanoid43->setSites(*HAnimSite1937);

CHAnimSite* HAnimSite1938 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1938->setUSE("hanim_l_ectocanthus_pt");
HAnimHumanoid43->setSites(*HAnimSite1938);

CHAnimSite* HAnimSite1939 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1939->setUSE("hanim_l_infraorbitale_pt");
HAnimHumanoid43->setSites(*HAnimSite1939);

CHAnimSite* HAnimSite1940 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1940->setUSE("hanim_l_tragion_pt");
HAnimHumanoid43->setSites(*HAnimSite1940);

CHAnimSite* HAnimSite1941 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1941->setUSE("hanim_nuchale_pt");
HAnimHumanoid43->setSites(*HAnimSite1941);

CHAnimSite* HAnimSite1942 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1942->setUSE("hanim_opisthocranion_pt");
HAnimHumanoid43->setSites(*HAnimSite1942);

CHAnimSite* HAnimSite1943 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1943->setUSE("hanim_r_ectocanthus_pt");
HAnimHumanoid43->setSites(*HAnimSite1943);

CHAnimSite* HAnimSite1944 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1944->setUSE("hanim_r_infraorbitale_pt");
HAnimHumanoid43->setSites(*HAnimSite1944);

CHAnimSite* HAnimSite1945 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1945->setUSE("hanim_r_tragion_pt");
HAnimHumanoid43->setSites(*HAnimSite1945);

CHAnimSite* HAnimSite1946 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1946->setUSE("hanim_sellion_pt");
HAnimHumanoid43->setSites(*HAnimSite1946);

CHAnimSite* HAnimSite1947 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1947->setUSE("hanim_skull_vertex_pt");
HAnimHumanoid43->setSites(*HAnimSite1947);

CHAnimSite* HAnimSite1948 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1948->setUSE("hanim_l_gonion_pt");
HAnimHumanoid43->setSites(*HAnimSite1948);

CHAnimSite* HAnimSite1949 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1949->setUSE("hanim_menton_pt");
HAnimHumanoid43->setSites(*HAnimSite1949);

CHAnimSite* HAnimSite1950 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1950->setUSE("hanim_r_gonion_pt");
HAnimHumanoid43->setSites(*HAnimSite1950);

CHAnimSite* HAnimSite1951 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1951->setUSE("hanim_supramenton_pt");
HAnimHumanoid43->setSites(*HAnimSite1951);

CHAnimSite* HAnimSite1952 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1952->setUSE("hanim_l_bideltoid_pt");
HAnimHumanoid43->setSites(*HAnimSite1952);

CHAnimSite* HAnimSite1953 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1953->setUSE("hanim_l_humeral_lateral_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1953);

CHAnimSite* HAnimSite1954 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1954->setUSE("hanim_l_humeral_medial_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1954);

CHAnimSite* HAnimSite1955 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1955->setUSE("hanim_l_olecranon_pt");
HAnimHumanoid43->setSites(*HAnimSite1955);

CHAnimSite* HAnimSite1956 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1956->setUSE("hanim_l_radial_styloid_pt");
HAnimHumanoid43->setSites(*HAnimSite1956);

CHAnimSite* HAnimSite1957 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1957->setUSE("hanim_l_radiale_pt");
HAnimHumanoid43->setSites(*HAnimSite1957);

CHAnimSite* HAnimSite1958 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1958->setUSE("hanim_l_ulnar_styloid_pt");
HAnimHumanoid43->setSites(*HAnimSite1958);

CHAnimSite* HAnimSite1959 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1959->setUSE("hanim_l_carpal_distal_phalanx_1_tip");
HAnimHumanoid43->setSites(*HAnimSite1959);

CHAnimSite* HAnimSite1960 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1960->setUSE("hanim_l_metacarpal_phalanx_2_pt");
HAnimHumanoid43->setSites(*HAnimSite1960);

CHAnimSite* HAnimSite1961 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1961->setUSE("hanim_l_carpal_distal_phalanx_2_tip");
HAnimHumanoid43->setSites(*HAnimSite1961);

CHAnimSite* HAnimSite1962 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1962->setUSE("hanim_l_dactylion_pt");
HAnimHumanoid43->setSites(*HAnimSite1962);

CHAnimSite* HAnimSite1963 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1963->setUSE("hanim_l_metacarpal_phalanx_3_pt");
HAnimHumanoid43->setSites(*HAnimSite1963);

CHAnimSite* HAnimSite1964 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1964->setUSE("hanim_l_carpal_distal_phalanx_3_tip");
HAnimHumanoid43->setSites(*HAnimSite1964);

CHAnimSite* HAnimSite1965 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1965->setUSE("hanim_l_metacarpal_phalanx_5_pt");
HAnimHumanoid43->setSites(*HAnimSite1965);

CHAnimSite* HAnimSite1966 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1966->setUSE("hanim_l_carpal_distal_phalanx_4_tip");
HAnimHumanoid43->setSites(*HAnimSite1966);

CHAnimSite* HAnimSite1967 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1967->setUSE("hanim_l_carpal_distal_phalanx_5_tip");
HAnimHumanoid43->setSites(*HAnimSite1967);

CHAnimSite* HAnimSite1968 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1968->setUSE("hanim_r_bideltoid_pt");
HAnimHumanoid43->setSites(*HAnimSite1968);

CHAnimSite* HAnimSite1969 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1969->setUSE("hanim_r_humeral_lateral_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1969);

CHAnimSite* HAnimSite1970 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1970->setUSE("hanim_r_humeral_medial_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1970);

CHAnimSite* HAnimSite1971 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1971->setUSE("hanim_r_olecranon_pt");
HAnimHumanoid43->setSites(*HAnimSite1971);

CHAnimSite* HAnimSite1972 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1972->setUSE("hanim_r_radial_styloid_pt");
HAnimHumanoid43->setSites(*HAnimSite1972);

CHAnimSite* HAnimSite1973 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1973->setUSE("hanim_r_radiale_pt");
HAnimHumanoid43->setSites(*HAnimSite1973);

CHAnimSite* HAnimSite1974 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1974->setUSE("hanim_r_ulnar_styloid_pt");
HAnimHumanoid43->setSites(*HAnimSite1974);

CHAnimSite* HAnimSite1975 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1975->setUSE("hanim_r_carpal_distal_phalanx_1_tip");
HAnimHumanoid43->setSites(*HAnimSite1975);

CHAnimSite* HAnimSite1976 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1976->setUSE("hanim_r_metacarpal_phalanx_2_pt");
HAnimHumanoid43->setSites(*HAnimSite1976);

CHAnimSite* HAnimSite1977 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1977->setUSE("hanim_r_carpal_distal_phalanx_2_tip");
HAnimHumanoid43->setSites(*HAnimSite1977);

CHAnimSite* HAnimSite1978 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1978->setUSE("hanim_r_dactylion_pt");
HAnimHumanoid43->setSites(*HAnimSite1978);

CHAnimSite* HAnimSite1979 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1979->setUSE("hanim_r_metacarpal_phalanx_3_pt");
HAnimHumanoid43->setSites(*HAnimSite1979);

CHAnimSite* HAnimSite1980 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1980->setUSE("hanim_r_carpal_distal_phalanx_3_tip");
HAnimHumanoid43->setSites(*HAnimSite1980);

CHAnimSite* HAnimSite1981 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1981->setUSE("hanim_r_metacarpal_phalanx_5_pt");
HAnimHumanoid43->setSites(*HAnimSite1981);

CHAnimSite* HAnimSite1982 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1982->setUSE("hanim_r_carpal_distal_phalanx_4_tip");
HAnimHumanoid43->setSites(*HAnimSite1982);

CHAnimSite* HAnimSite1983 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1983->setUSE("hanim_r_carpal_distal_phalanx_5_tip");
HAnimHumanoid43->setSites(*HAnimSite1983);

group->addChildren(*HAnimHumanoid43);

X3D0->setScene(*Scene11);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

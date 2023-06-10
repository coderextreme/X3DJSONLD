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
meta3->setContent("JohnBoy.x3d");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("identifier");
meta4->setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnBoy.x3d");
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

Transform12->addChildren(*Shape13);

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

Transform19->addChildren(*Shape20);

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

Transform24->addChildren(*Shape25);

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

Transform29->addChildren(*Shape30);

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

Transform34->addChildren(*Shape35);

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
CHAnimJoint* HAnimJoint44 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint44->setName("humanoid_root");
HAnimJoint44->setDEF("hanim_humanoid_root");
HAnimJoint44->setCenter(new float[3]{0,0.824,0.0277});
HAnimJoint44->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint44->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment45 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment45->setName("sacrum");
HAnimSegment45->setDEF("hanim_sacrum");
CTransform* Transform46 = (CTransform *)(m_pScene.createNode("Transform"));
Transform46->setTranslation(new float[3]{0,0.824,0.0277});
CTransform* Transform47 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape48 = (CShape *)(m_pScene.createNode("Shape"));
Shape48->setUSE("HAnimJointShape");
Transform47->addChildren(*Shape48);

Transform46->addChildren(*Transform47);

HAnimSegment45->addChildren(*Transform46);

CShape* Shape49 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet50 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet50->setVertexCount(new int[1]{2});
CCoordinate* Coordinate51 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate51->setPoint(new float[6]{0,0.824,0.0277,0,0.9149,0.0016});
LineSet50->setCoord(*Coordinate51);

//from humanoid_root to sacroiliac vertices 2
CColorRGBA* ColorRGBA52 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA52->setUSE("HAnimSegmentLineColorRGBA");
LineSet50->setColor(*ColorRGBA52);

Shape49->setGeometry(LineSet50);

HAnimSegment45->addChildren(*Shape49);

CHAnimSite* HAnimSite53 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite53->setName("buttocks_standing_wall_contact_point_pt");
HAnimSite53->setDEF("hanim_buttocks_standing_wall_contact_point_pt");
CTouchSensor* TouchSensor54 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor54->setDescription("HAnimSite buttocks_standing_wall_contact_point_pt");
HAnimSite53->addChildren(*TouchSensor54);

CShape* Shape55 = (CShape *)(m_pScene.createNode("Shape"));
Shape55->setUSE("HAnimSiteShape");
HAnimSite53->addChildren(*Shape55);

HAnimSegment45->addChildren(*HAnimSite53);

CHAnimSite* HAnimSite56 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite56->setName("crotch_pt");
HAnimSite56->setDEF("hanim_crotch_pt");
HAnimSite56->setTranslation(new float[3]{0.0034,0.8266,0.0257});
CTouchSensor* TouchSensor57 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor57->setDescription("HAnimSite crotch_pt");
HAnimSite56->addChildren(*TouchSensor57);

CShape* Shape58 = (CShape *)(m_pScene.createNode("Shape"));
Shape58->setUSE("HAnimSiteShape");
HAnimSite56->addChildren(*Shape58);

HAnimSegment45->addChildren(*HAnimSite56);

CHAnimSite* HAnimSite59 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite59->setName("l_asis_pt");
HAnimSite59->setDEF("hanim_l_asis_pt");
HAnimSite59->setTranslation(new float[3]{0.0925,0.9983,0.1052});
CTouchSensor* TouchSensor60 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor60->setDescription("HAnimSite l_asis_pt");
HAnimSite59->addChildren(*TouchSensor60);

CShape* Shape61 = (CShape *)(m_pScene.createNode("Shape"));
Shape61->setUSE("HAnimSiteShape");
HAnimSite59->addChildren(*Shape61);

HAnimSegment45->addChildren(*HAnimSite59);

CHAnimSite* HAnimSite62 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite62->setName("l_iliocristale_pt");
HAnimSite62->setDEF("hanim_l_iliocristale_pt");
HAnimSite62->setTranslation(new float[3]{0.1612,1.0537,0.0008});
CTouchSensor* TouchSensor63 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor63->setDescription("HAnimSite l_iliocristale_pt");
HAnimSite62->addChildren(*TouchSensor63);

CShape* Shape64 = (CShape *)(m_pScene.createNode("Shape"));
Shape64->setUSE("HAnimSiteShape");
HAnimSite62->addChildren(*Shape64);

HAnimSegment45->addChildren(*HAnimSite62);

CHAnimSite* HAnimSite65 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite65->setName("l_psis_pt");
HAnimSite65->setDEF("hanim_l_psis_pt");
HAnimSite65->setTranslation(new float[3]{0.0774,1.019,-0.1151});
CTouchSensor* TouchSensor66 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor66->setDescription("HAnimSite l_psis_pt");
HAnimSite65->addChildren(*TouchSensor66);

CShape* Shape67 = (CShape *)(m_pScene.createNode("Shape"));
Shape67->setUSE("HAnimSiteShape");
HAnimSite65->addChildren(*Shape67);

HAnimSegment45->addChildren(*HAnimSite65);

CHAnimSite* HAnimSite68 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite68->setName("l_trochanterion_pt");
HAnimSite68->setDEF("hanim_l_trochanterion_pt");
HAnimSite68->setTranslation(new float[3]{0.1677,0.8336,0.0303});
CTouchSensor* TouchSensor69 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor69->setDescription("HAnimSite l_trochanterion_pt");
HAnimSite68->addChildren(*TouchSensor69);

CShape* Shape70 = (CShape *)(m_pScene.createNode("Shape"));
Shape70->setUSE("HAnimSiteShape");
HAnimSite68->addChildren(*Shape70);

HAnimSegment45->addChildren(*HAnimSite68);

CHAnimSite* HAnimSite71 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite71->setName("r_asis_pt");
HAnimSite71->setDEF("hanim_r_asis_pt");
HAnimSite71->setTranslation(new float[3]{-0.0887,1.0021,0.1112});
CTouchSensor* TouchSensor72 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor72->setDescription("HAnimSite r_asis_pt");
HAnimSite71->addChildren(*TouchSensor72);

CShape* Shape73 = (CShape *)(m_pScene.createNode("Shape"));
Shape73->setUSE("HAnimSiteShape");
HAnimSite71->addChildren(*Shape73);

HAnimSegment45->addChildren(*HAnimSite71);

CHAnimSite* HAnimSite74 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite74->setName("r_iliocristale_pt");
HAnimSite74->setDEF("hanim_r_iliocristale_pt");
HAnimSite74->setTranslation(new float[3]{-0.1525,1.0628,0.0035});
CTouchSensor* TouchSensor75 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor75->setDescription("HAnimSite r_iliocristale_pt");
HAnimSite74->addChildren(*TouchSensor75);

CShape* Shape76 = (CShape *)(m_pScene.createNode("Shape"));
Shape76->setUSE("HAnimSiteShape");
HAnimSite74->addChildren(*Shape76);

HAnimSegment45->addChildren(*HAnimSite74);

CHAnimSite* HAnimSite77 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite77->setName("r_psis_pt");
HAnimSite77->setDEF("hanim_r_psis_pt");
HAnimSite77->setTranslation(new float[3]{-0.0716,1.019,-0.1138});
CTouchSensor* TouchSensor78 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor78->setDescription("HAnimSite r_psis_pt");
HAnimSite77->addChildren(*TouchSensor78);

CShape* Shape79 = (CShape *)(m_pScene.createNode("Shape"));
Shape79->setUSE("HAnimSiteShape");
HAnimSite77->addChildren(*Shape79);

HAnimSegment45->addChildren(*HAnimSite77);

CHAnimSite* HAnimSite80 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite80->setName("r_trochanterion_pt");
HAnimSite80->setDEF("hanim_r_trochanterion_pt");
HAnimSite80->setTranslation(new float[3]{-0.1689,0.8419,0.0352});
CTouchSensor* TouchSensor81 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor81->setDescription("HAnimSite r_trochanterion_pt");
HAnimSite80->addChildren(*TouchSensor81);

CShape* Shape82 = (CShape *)(m_pScene.createNode("Shape"));
Shape82->setUSE("HAnimSiteShape");
HAnimSite80->addChildren(*Shape82);

HAnimSegment45->addChildren(*HAnimSite80);

CShape* Shape83 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet84 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet84->setVertexCount(new int[1]{2});
CCoordinate* Coordinate85 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate85->setPoint(new float[6]{0,0.824,0.0277,0.0028,1.0568,-0.0776});
LineSet84->setCoord(*Coordinate85);

//from humanoid_root to vl5 vertices 2
CColorRGBA* ColorRGBA86 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA86->setUSE("HAnimSegmentLineColorRGBA");
LineSet84->setColor(*ColorRGBA86);

Shape83->setGeometry(LineSet84);

HAnimSegment45->addChildren(*Shape83);

CHAnimSite* HAnimSite87 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite87->setName("navel_pt");
HAnimSite87->setDEF("hanim_navel_pt");
HAnimSite87->setTranslation(new float[3]{0.0069,1.0966,0.1017});
CTouchSensor* TouchSensor88 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor88->setDescription("HAnimSite navel_pt");
HAnimSite87->addChildren(*TouchSensor88);

CShape* Shape89 = (CShape *)(m_pScene.createNode("Shape"));
Shape89->setUSE("HAnimSiteShape");
HAnimSite87->addChildren(*Shape89);

HAnimSegment45->addChildren(*HAnimSite87);

CHAnimSite* HAnimSite90 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite90->setName("waist_preferred_anterior_pt");
HAnimSite90->setDEF("hanim_waist_preferred_anterior_pt");
CTouchSensor* TouchSensor91 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor91->setDescription("HAnimSite waist_preferred_anterior_pt");
HAnimSite90->addChildren(*TouchSensor91);

CShape* Shape92 = (CShape *)(m_pScene.createNode("Shape"));
Shape92->setUSE("HAnimSiteShape");
HAnimSite90->addChildren(*Shape92);

HAnimSegment45->addChildren(*HAnimSite90);

CHAnimSite* HAnimSite93 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite93->setName("waist_preferred_posterior_pt");
HAnimSite93->setDEF("hanim_waist_preferred_posterior_pt");
HAnimSite93->setTranslation(new float[3]{0.29,1.0915,-0.1091});
CTouchSensor* TouchSensor94 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor94->setDescription("HAnimSite waist_preferred_posterior_pt");
HAnimSite93->addChildren(*TouchSensor94);

CShape* Shape95 = (CShape *)(m_pScene.createNode("Shape"));
Shape95->setUSE("HAnimSiteShape");
HAnimSite93->addChildren(*Shape95);

HAnimSegment45->addChildren(*HAnimSite93);

HAnimJoint44->addChildren(*HAnimSegment45);

CHAnimJoint* HAnimJoint96 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint96->setName("sacroiliac");
HAnimJoint96->setDEF("hanim_sacroiliac");
HAnimJoint96->setCenter(new float[3]{0,0.9149,0.0016});
HAnimJoint96->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint96->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment97 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment97->setName("pelvis");
HAnimSegment97->setDEF("hanim_pelvis");
CTransform* Transform98 = (CTransform *)(m_pScene.createNode("Transform"));
Transform98->setTranslation(new float[3]{0,0.9149,0.0016});
CTransform* Transform99 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape100 = (CShape *)(m_pScene.createNode("Shape"));
Shape100->setUSE("HAnimJointShape");
Transform99->addChildren(*Shape100);

Transform98->addChildren(*Transform99);

HAnimSegment97->addChildren(*Transform98);

CShape* Shape101 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet102 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet102->setVertexCount(new int[1]{2});
CCoordinate* Coordinate103 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate103->setPoint(new float[6]{0,0.9149,0.0016,0.0961,0.9124,-0.0001});
LineSet102->setCoord(*Coordinate103);

//from sacroiliac to l_hip vertices 2
CColorRGBA* ColorRGBA104 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA104->setUSE("HAnimSegmentLineColorRGBA");
LineSet102->setColor(*ColorRGBA104);

Shape101->setGeometry(LineSet102);

HAnimSegment97->addChildren(*Shape101);

CHAnimSite* HAnimSite105 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite105->setName("l_femoral_lateral_epicondyles_pt");
HAnimSite105->setDEF("hanim_l_femoral_lateral_epicondyles_pt");
HAnimSite105->setTranslation(new float[3]{0.1598,0.4967,0.0297});
CTouchSensor* TouchSensor106 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor106->setDescription("HAnimSite l_femoral_lateral_epicondyles_pt");
HAnimSite105->addChildren(*TouchSensor106);

CShape* Shape107 = (CShape *)(m_pScene.createNode("Shape"));
Shape107->setUSE("HAnimSiteShape");
HAnimSite105->addChildren(*Shape107);

HAnimSegment97->addChildren(*HAnimSite105);

CHAnimSite* HAnimSite108 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite108->setName("l_femoral_medial_epicondyles_pt");
HAnimSite108->setDEF("hanim_l_femoral_medial_epicondyles_pt");
HAnimSite108->setTranslation(new float[3]{0.0398,0.4946,0.0303});
CTouchSensor* TouchSensor109 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor109->setDescription("HAnimSite l_femoral_medial_epicondyles_pt");
HAnimSite108->addChildren(*TouchSensor109);

CShape* Shape110 = (CShape *)(m_pScene.createNode("Shape"));
Shape110->setUSE("HAnimSiteShape");
HAnimSite108->addChildren(*Shape110);

HAnimSegment97->addChildren(*HAnimSite108);

CHAnimSite* HAnimSite111 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite111->setName("l_knee_crease_pt");
HAnimSite111->setDEF("hanim_l_knee_crease_pt");
HAnimSite111->setTranslation(new float[3]{0.0993,0.4881,-0.0309});
CTouchSensor* TouchSensor112 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor112->setDescription("HAnimSite l_knee_crease_pt");
HAnimSite111->addChildren(*TouchSensor112);

CShape* Shape113 = (CShape *)(m_pScene.createNode("Shape"));
Shape113->setUSE("HAnimSiteShape");
HAnimSite111->addChildren(*Shape113);

HAnimSegment97->addChildren(*HAnimSite111);

CHAnimSite* HAnimSite114 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite114->setName("l_suprapatella_pt");
HAnimSite114->setDEF("hanim_l_suprapatella_pt");
CTouchSensor* TouchSensor115 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor115->setDescription("HAnimSite l_suprapatella_pt");
HAnimSite114->addChildren(*TouchSensor115);

CShape* Shape116 = (CShape *)(m_pScene.createNode("Shape"));
Shape116->setUSE("HAnimSiteShape");
HAnimSite114->addChildren(*Shape116);

HAnimSegment97->addChildren(*HAnimSite114);

CShape* Shape117 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet118 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet118->setVertexCount(new int[1]{2});
CCoordinate* Coordinate119 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate119->setPoint(new float[6]{0,0.9149,0.0016,-0.095,0.9171,0.0029});
LineSet118->setCoord(*Coordinate119);

//from sacroiliac to r_hip vertices 2
CColorRGBA* ColorRGBA120 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA120->setUSE("HAnimSegmentLineColorRGBA");
LineSet118->setColor(*ColorRGBA120);

Shape117->setGeometry(LineSet118);

HAnimSegment97->addChildren(*Shape117);

CHAnimSite* HAnimSite121 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite121->setName("r_femoral_lateral_epicondyles_pt");
HAnimSite121->setDEF("hanim_r_femoral_lateral_epicondyles_pt");
HAnimSite121->setTranslation(new float[3]{-0.1421,0.4992,0.031});
CTouchSensor* TouchSensor122 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor122->setDescription("HAnimSite r_femoral_lateral_epicondyles_pt");
HAnimSite121->addChildren(*TouchSensor122);

CShape* Shape123 = (CShape *)(m_pScene.createNode("Shape"));
Shape123->setUSE("HAnimSiteShape");
HAnimSite121->addChildren(*Shape123);

HAnimSegment97->addChildren(*HAnimSite121);

CHAnimSite* HAnimSite124 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite124->setName("r_femoral_medial_epicondyles_pt");
HAnimSite124->setDEF("hanim_r_femoral_medial_epicondyles_pt");
HAnimSite124->setTranslation(new float[3]{-0.0221,0.5014,0.0289});
CTouchSensor* TouchSensor125 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor125->setDescription("HAnimSite r_femoral_medial_epicondyles_pt");
HAnimSite124->addChildren(*TouchSensor125);

CShape* Shape126 = (CShape *)(m_pScene.createNode("Shape"));
Shape126->setUSE("HAnimSiteShape");
HAnimSite124->addChildren(*Shape126);

HAnimSegment97->addChildren(*HAnimSite124);

CHAnimSite* HAnimSite127 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite127->setName("r_knee_crease_pt");
HAnimSite127->setDEF("hanim_r_knee_crease_pt");
HAnimSite127->setTranslation(new float[3]{-0.0825,0.4932,-0.0326});
CTouchSensor* TouchSensor128 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor128->setDescription("HAnimSite r_knee_crease_pt");
HAnimSite127->addChildren(*TouchSensor128);

CShape* Shape129 = (CShape *)(m_pScene.createNode("Shape"));
Shape129->setUSE("HAnimSiteShape");
HAnimSite127->addChildren(*Shape129);

HAnimSegment97->addChildren(*HAnimSite127);

CHAnimSite* HAnimSite130 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite130->setName("r_suprapatella_pt");
HAnimSite130->setDEF("hanim_r_suprapatella_pt");
CTouchSensor* TouchSensor131 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor131->setDescription("HAnimSite r_suprapatella_pt");
HAnimSite130->addChildren(*TouchSensor131);

CShape* Shape132 = (CShape *)(m_pScene.createNode("Shape"));
Shape132->setUSE("HAnimSiteShape");
HAnimSite130->addChildren(*Shape132);

HAnimSegment97->addChildren(*HAnimSite130);

HAnimJoint96->addChildren(*HAnimSegment97);

CHAnimJoint* HAnimJoint133 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint133->setName("l_hip");
HAnimJoint133->setDEF("hanim_l_hip");
HAnimJoint133->setCenter(new float[3]{0.0961,0.9124,-0.0001});
HAnimJoint133->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint133->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment134 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment134->setName("l_thigh");
HAnimSegment134->setDEF("hanim_l_thigh");
CTransform* Transform135 = (CTransform *)(m_pScene.createNode("Transform"));
Transform135->setTranslation(new float[3]{0.0961,0.9124,-0.0001});
CTransform* Transform136 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape137 = (CShape *)(m_pScene.createNode("Shape"));
Shape137->setUSE("HAnimJointShape");
Transform136->addChildren(*Shape137);

Transform135->addChildren(*Transform136);

HAnimSegment134->addChildren(*Transform135);

CShape* Shape138 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet139 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet139->setVertexCount(new int[1]{2});
CCoordinate* Coordinate140 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate140->setPoint(new float[6]{0.0961,0.9124,-0.0001,0.104,0.4867,0.0308});
LineSet139->setCoord(*Coordinate140);

//from l_hip to l_knee vertices 2
CColorRGBA* ColorRGBA141 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA141->setUSE("HAnimSegmentLineColorRGBA");
LineSet139->setColor(*ColorRGBA141);

Shape138->setGeometry(LineSet139);

HAnimSegment134->addChildren(*Shape138);

CHAnimSite* HAnimSite142 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite142->setName("l_lateral_malleolus_pt");
HAnimSite142->setDEF("hanim_l_lateral_malleolus_pt");
HAnimSite142->setTranslation(new float[3]{0.1308,0.0597,-0.1032});
CTouchSensor* TouchSensor143 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor143->setDescription("HAnimSite l_lateral_malleolus_pt");
HAnimSite142->addChildren(*TouchSensor143);

CShape* Shape144 = (CShape *)(m_pScene.createNode("Shape"));
Shape144->setUSE("HAnimSiteShape");
HAnimSite142->addChildren(*Shape144);

HAnimSegment134->addChildren(*HAnimSite142);

CHAnimSite* HAnimSite145 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite145->setName("l_medial_malleolus_pt");
HAnimSite145->setDEF("hanim_l_medial_malleolus_pt");
HAnimSite145->setTranslation(new float[3]{0.089,0.0716,-0.0881});
CTouchSensor* TouchSensor146 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor146->setDescription("HAnimSite l_medial_malleolus_pt");
HAnimSite145->addChildren(*TouchSensor146);

CShape* Shape147 = (CShape *)(m_pScene.createNode("Shape"));
Shape147->setUSE("HAnimSiteShape");
HAnimSite145->addChildren(*Shape147);

HAnimSegment134->addChildren(*HAnimSite145);

CHAnimSite* HAnimSite148 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite148->setName("l_tibiale_pt");
HAnimSite148->setDEF("hanim_l_tibiale_pt");
CTouchSensor* TouchSensor149 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor149->setDescription("HAnimSite l_tibiale_pt");
HAnimSite148->addChildren(*TouchSensor149);

CShape* Shape150 = (CShape *)(m_pScene.createNode("Shape"));
Shape150->setUSE("HAnimSiteShape");
HAnimSite148->addChildren(*Shape150);

HAnimSegment134->addChildren(*HAnimSite148);

HAnimJoint133->addChildren(*HAnimSegment134);

CHAnimJoint* HAnimJoint151 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint151->setName("l_knee");
HAnimJoint151->setDEF("hanim_l_knee");
HAnimJoint151->setCenter(new float[3]{0.104,0.4867,0.0308});
HAnimJoint151->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint151->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment152 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment152->setName("l_calf");
HAnimSegment152->setDEF("hanim_l_calf");
CTransform* Transform153 = (CTransform *)(m_pScene.createNode("Transform"));
Transform153->setTranslation(new float[3]{0.104,0.4867,0.0308});
CTransform* Transform154 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape155 = (CShape *)(m_pScene.createNode("Shape"));
Shape155->setUSE("HAnimJointShape");
Transform154->addChildren(*Shape155);

Transform153->addChildren(*Transform154);

HAnimSegment152->addChildren(*Transform153);

CShape* Shape156 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet157 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet157->setVertexCount(new int[1]{2});
CCoordinate* Coordinate158 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate158->setPoint(new float[6]{0.104,0.4867,0.0308,0.1101,0.0656,-0.0736});
LineSet157->setCoord(*Coordinate158);

//from l_knee to l_talocrural vertices 2
CColorRGBA* ColorRGBA159 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA159->setUSE("HAnimSegmentLineColorRGBA");
LineSet157->setColor(*ColorRGBA159);

Shape156->setGeometry(LineSet157);

HAnimSegment152->addChildren(*Shape156);

CHAnimSite* HAnimSite160 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite160->setName("l_calcaneus_posterior_pt");
HAnimSite160->setDEF("hanim_l_calcaneus_posterior_pt");
HAnimSite160->setTranslation(new float[3]{0.0974,0.0259,-0.1171});
CTouchSensor* TouchSensor161 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor161->setDescription("HAnimSite l_calcaneus_posterior_pt");
HAnimSite160->addChildren(*TouchSensor161);

CShape* Shape162 = (CShape *)(m_pScene.createNode("Shape"));
Shape162->setUSE("HAnimSiteShape");
HAnimSite160->addChildren(*Shape162);

HAnimSegment152->addChildren(*HAnimSite160);

CHAnimSite* HAnimSite163 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite163->setName("l_sphyrion_pt");
HAnimSite163->setDEF("hanim_l_sphyrion_pt");
HAnimSite163->setTranslation(new float[3]{0.089,0.0575,-0.0943});
CTouchSensor* TouchSensor164 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor164->setDescription("HAnimSite l_sphyrion_pt");
HAnimSite163->addChildren(*TouchSensor164);

CShape* Shape165 = (CShape *)(m_pScene.createNode("Shape"));
Shape165->setUSE("HAnimSiteShape");
HAnimSite163->addChildren(*Shape165);

HAnimSegment152->addChildren(*HAnimSite163);

HAnimJoint151->addChildren(*HAnimSegment152);

CHAnimJoint* HAnimJoint166 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint166->setName("l_talocrural");
HAnimJoint166->setDEF("hanim_l_talocrural");
HAnimJoint166->setCenter(new float[3]{0.1101,0.0656,-0.0736});
HAnimJoint166->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint166->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment167 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment167->setName("l_talus");
HAnimSegment167->setDEF("hanim_l_talus");
CTransform* Transform168 = (CTransform *)(m_pScene.createNode("Transform"));
Transform168->setScale(new float[3]{0.15,0.15,0.15});
Transform168->setTranslation(new float[3]{0.08,0.06,-0.025});
Transform168->setRotation(new float[4]{1,0,0,-1.57});
//Transform left foot
CTransform* Transform169 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform left foot
CShape* Shape170 = (CShape *)(m_pScene.createNode("Shape"));
Shape170->setUSE("HAnimJointShape");
Transform169->addChildren(*Shape170);

Transform168->addChildren(*Transform169);

HAnimSegment167->addChildren(*Transform168);

CShape* Shape171 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet172 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet172->setVertexCount(new int[1]{2});
CCoordinate* Coordinate173 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate173->setPoint(new float[6]{0.1101,0.0656,-0.0736,0.1101,0.0656,-0.0736});
LineSet172->setCoord(*Coordinate173);

//from l_talocrural to l_talocalcaneonavicular vertices 2
CColorRGBA* ColorRGBA174 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA174->setUSE("HAnimSegmentLineColorRGBA");
LineSet172->setColor(*ColorRGBA174);

Shape171->setGeometry(LineSet172);

HAnimSegment167->addChildren(*Shape171);

CShape* Shape175 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet176 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet176->setVertexCount(new int[1]{2});
CCoordinate* Coordinate177 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate177->setPoint(new float[6]{0.1101,0.0656,-0.0736,0.1101,0.0656,-0.0736});
LineSet176->setCoord(*Coordinate177);

//from l_talocrural to l_calcaneocuboid vertices 2
CColorRGBA* ColorRGBA178 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA178->setUSE("HAnimSegmentLineColorRGBA");
LineSet176->setColor(*ColorRGBA178);

Shape175->setGeometry(LineSet176);

HAnimSegment167->addChildren(*Shape175);

HAnimJoint166->addChildren(*HAnimSegment167);

CHAnimJoint* HAnimJoint179 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint179->setName("l_talocalcaneonavicular");
HAnimJoint179->setDEF("hanim_l_talocalcaneonavicular");
HAnimJoint179->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint179->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment180 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment180->setName("l_navicular");
HAnimSegment180->setDEF("hanim_l_navicular");
CTransform* Transform181 = (CTransform *)(m_pScene.createNode("Transform"));
Transform181->setTranslation(new float[3]{0.1101,0.0656,-0.0736});
CTransform* Transform182 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape183 = (CShape *)(m_pScene.createNode("Shape"));
Shape183->setUSE("HAnimJointShape");
Transform182->addChildren(*Shape183);

Transform181->addChildren(*Transform182);

HAnimSegment180->addChildren(*Transform181);

CShape* Shape184 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet185 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet185->setVertexCount(new int[1]{2});
CCoordinate* Coordinate186 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate186->setPoint(new float[3]{0.1101,0.0656,-0.0736});
LineSet185->setCoord(*Coordinate186);

//from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 1
CColorRGBA* ColorRGBA187 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA187->setUSE("HAnimSegmentLineColorRGBA");
LineSet185->setColor(*ColorRGBA187);

Shape184->setGeometry(LineSet185);

HAnimSegment180->addChildren(*Shape184);

CShape* Shape188 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet189 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet189->setVertexCount(new int[1]{2});
CCoordinate* Coordinate190 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate190->setPoint(new float[3]{0.1101,0.0656,-0.0736});
LineSet189->setCoord(*Coordinate190);

//from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 1
CColorRGBA* ColorRGBA191 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA191->setUSE("HAnimSegmentLineColorRGBA");
LineSet189->setColor(*ColorRGBA191);

Shape188->setGeometry(LineSet189);

HAnimSegment180->addChildren(*Shape188);

CShape* Shape192 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet193 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet193->setVertexCount(new int[1]{2});
CCoordinate* Coordinate194 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate194->setPoint(new float[3]{0.1101,0.0656,-0.0736});
LineSet193->setCoord(*Coordinate194);

//from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 1
CColorRGBA* ColorRGBA195 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA195->setUSE("HAnimSegmentLineColorRGBA");
LineSet193->setColor(*ColorRGBA195);

Shape192->setGeometry(LineSet193);

HAnimSegment180->addChildren(*Shape192);

HAnimJoint179->addChildren(*HAnimSegment180);

CHAnimJoint* HAnimJoint196 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint196->setName("l_cuneonavicular_1");
HAnimJoint196->setDEF("hanim_l_cuneonavicular_1");
HAnimJoint196->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint196->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment197 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment197->setName("l_cuneiform_1");
HAnimSegment197->setDEF("hanim_l_cuneiform_1");
CTransform* Transform198 = (CTransform *)(m_pScene.createNode("Transform"));
Transform198->setTranslation(new float[3]{0.1101,0.0656,-0.0736});
CTransform* Transform199 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape200 = (CShape *)(m_pScene.createNode("Shape"));
Shape200->setUSE("HAnimJointShape");
Transform199->addChildren(*Shape200);

Transform198->addChildren(*Transform199);

HAnimSegment197->addChildren(*Transform198);

CShape* Shape201 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet202 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet202->setVertexCount(new int[1]{2});
CCoordinate* Coordinate203 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate203->setPoint(new float[3]{0.1101,0.0656,-0.0736});
LineSet202->setCoord(*Coordinate203);

//from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 1
CColorRGBA* ColorRGBA204 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA204->setUSE("HAnimSegmentLineColorRGBA");
LineSet202->setColor(*ColorRGBA204);

Shape201->setGeometry(LineSet202);

HAnimSegment197->addChildren(*Shape201);

HAnimJoint196->addChildren(*HAnimSegment197);

CHAnimJoint* HAnimJoint205 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint205->setName("l_tarsometatarsal_1");
HAnimJoint205->setDEF("hanim_l_tarsometatarsal_1");
HAnimJoint205->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint205->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment206 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment206->setName("l_metatarsal_1");
HAnimSegment206->setDEF("hanim_l_metatarsal_1");
CTransform* Transform207 = (CTransform *)(m_pScene.createNode("Transform"));
Transform207->setTranslation(new float[3]{0.1101,0.0656,-0.0736});
CTransform* Transform208 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape209 = (CShape *)(m_pScene.createNode("Shape"));
Shape209->setUSE("HAnimJointShape");
Transform208->addChildren(*Shape209);

Transform207->addChildren(*Transform208);

HAnimSegment206->addChildren(*Transform207);

CShape* Shape210 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet211 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet211->setVertexCount(new int[1]{2});
CCoordinate* Coordinate212 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate212->setPoint(new float[3]{0.1101,0.0656,-0.0736});
LineSet211->setCoord(*Coordinate212);

//from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 1
CColorRGBA* ColorRGBA213 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA213->setUSE("HAnimSegmentLineColorRGBA");
LineSet211->setColor(*ColorRGBA213);

Shape210->setGeometry(LineSet211);

HAnimSegment206->addChildren(*Shape210);

CHAnimSite* HAnimSite214 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite214->setName("l_metatarsal_phalanx_1_pt");
HAnimSite214->setDEF("hanim_l_metatarsal_phalanx_1_pt");
CTouchSensor* TouchSensor215 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor215->setDescription("HAnimSite l_metatarsal_phalanx_1_pt");
HAnimSite214->addChildren(*TouchSensor215);

CShape* Shape216 = (CShape *)(m_pScene.createNode("Shape"));
Shape216->setUSE("HAnimSiteShape");
HAnimSite214->addChildren(*Shape216);

HAnimSegment206->addChildren(*HAnimSite214);

HAnimJoint205->addChildren(*HAnimSegment206);

CHAnimJoint* HAnimJoint217 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint217->setName("l_metatarsophalangeal_1");
HAnimJoint217->setDEF("hanim_l_metatarsophalangeal_1");
HAnimJoint217->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint217->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment218 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment218->setName("l_tarsal_proximal_phalanx_1");
HAnimSegment218->setDEF("hanim_l_tarsal_proximal_phalanx_1");
CTransform* Transform219 = (CTransform *)(m_pScene.createNode("Transform"));
Transform219->setTranslation(new float[3]{0.1101,0.0656,-0.0736});
CTransform* Transform220 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape221 = (CShape *)(m_pScene.createNode("Shape"));
Shape221->setUSE("HAnimJointShape");
Transform220->addChildren(*Shape221);

Transform219->addChildren(*Transform220);

HAnimSegment218->addChildren(*Transform219);

CShape* Shape222 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet223 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet223->setVertexCount(new int[1]{2});
CCoordinate* Coordinate224 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate224->setPoint(new float[3]{0.1101,0.0656,-0.0736});
LineSet223->setCoord(*Coordinate224);

//from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 1
CColorRGBA* ColorRGBA225 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA225->setUSE("HAnimSegmentLineColorRGBA");
LineSet223->setColor(*ColorRGBA225);

Shape222->setGeometry(LineSet223);

HAnimSegment218->addChildren(*Shape222);

CHAnimSite* HAnimSite226 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite226->setName("l_tarsal_distal_phalanx_1_tip");
HAnimSite226->setDEF("hanim_l_tarsal_distal_phalanx_1_tip");
CTouchSensor* TouchSensor227 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor227->setDescription("HAnimSite l_tarsal_distal_phalanx_1_tip");
HAnimSite226->addChildren(*TouchSensor227);

CShape* Shape228 = (CShape *)(m_pScene.createNode("Shape"));
Shape228->setUSE("HAnimSiteShape");
HAnimSite226->addChildren(*Shape228);

HAnimSegment218->addChildren(*HAnimSite226);

HAnimJoint217->addChildren(*HAnimSegment218);

CHAnimJoint* HAnimJoint229 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint229->setName("l_tarsal_interphalangeal_1");
HAnimJoint229->setDEF("hanim_l_tarsal_interphalangeal_1");
HAnimJoint229->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint229->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint217->addChildren(*HAnimJoint229);

HAnimJoint205->addChildren(*HAnimJoint217);

HAnimJoint196->addChildren(*HAnimJoint205);

HAnimJoint179->addChildren(*HAnimJoint196);

CHAnimJoint* HAnimJoint230 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint230->setName("l_cuneonavicular_2");
HAnimJoint230->setDEF("hanim_l_cuneonavicular_2");
HAnimJoint230->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint230->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment231 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment231->setName("l_cuneiform_2");
HAnimSegment231->setDEF("hanim_l_cuneiform_2");
CTransform* Transform232 = (CTransform *)(m_pScene.createNode("Transform"));
Transform232->setTranslation(new float[3]{0.1101,0.0656,-0.0736});
CTransform* Transform233 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape234 = (CShape *)(m_pScene.createNode("Shape"));
Shape234->setUSE("HAnimJointShape");
Transform233->addChildren(*Shape234);

Transform232->addChildren(*Transform233);

HAnimSegment231->addChildren(*Transform232);

CShape* Shape235 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet236 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet236->setVertexCount(new int[1]{2});
CCoordinate* Coordinate237 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate237->setPoint(new float[3]{0.1101,0.0656,-0.0736});
LineSet236->setCoord(*Coordinate237);

//from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 1
CColorRGBA* ColorRGBA238 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA238->setUSE("HAnimSegmentLineColorRGBA");
LineSet236->setColor(*ColorRGBA238);

Shape235->setGeometry(LineSet236);

HAnimSegment231->addChildren(*Shape235);

HAnimJoint230->addChildren(*HAnimSegment231);

CHAnimJoint* HAnimJoint239 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint239->setName("l_tarsometatarsal_2");
HAnimJoint239->setDEF("hanim_l_tarsometatarsal_2");
HAnimJoint239->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint239->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment240 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment240->setName("l_metatarsal_2");
HAnimSegment240->setDEF("hanim_l_metatarsal_2");
CTransform* Transform241 = (CTransform *)(m_pScene.createNode("Transform"));
Transform241->setTranslation(new float[3]{0.1101,0.0656,-0.0736});
CTransform* Transform242 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape243 = (CShape *)(m_pScene.createNode("Shape"));
Shape243->setUSE("HAnimJointShape");
Transform242->addChildren(*Shape243);

Transform241->addChildren(*Transform242);

HAnimSegment240->addChildren(*Transform241);

CShape* Shape244 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet245 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet245->setVertexCount(new int[1]{2});
CCoordinate* Coordinate246 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate246->setPoint(new float[3]{0.1101,0.0656,-0.0736});
LineSet245->setCoord(*Coordinate246);

//from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 1
CColorRGBA* ColorRGBA247 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA247->setUSE("HAnimSegmentLineColorRGBA");
LineSet245->setColor(*ColorRGBA247);

Shape244->setGeometry(LineSet245);

HAnimSegment240->addChildren(*Shape244);

HAnimJoint239->addChildren(*HAnimSegment240);

CHAnimJoint* HAnimJoint248 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint248->setName("l_metatarsophalangeal_2");
HAnimJoint248->setDEF("hanim_l_metatarsophalangeal_2");
HAnimJoint248->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint248->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment249 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment249->setName("l_tarsal_proximal_phalanx_2");
HAnimSegment249->setDEF("hanim_l_tarsal_proximal_phalanx_2");
CTransform* Transform250 = (CTransform *)(m_pScene.createNode("Transform"));
Transform250->setTranslation(new float[3]{0.1101,0.0656,-0.0736});
CTransform* Transform251 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape252 = (CShape *)(m_pScene.createNode("Shape"));
Shape252->setUSE("HAnimJointShape");
Transform251->addChildren(*Shape252);

Transform250->addChildren(*Transform251);

HAnimSegment249->addChildren(*Transform250);

CShape* Shape253 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet254 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet254->setVertexCount(new int[1]{2});
CCoordinate* Coordinate255 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate255->setPoint(new float[3]{0.1101,0.0656,-0.0736});
LineSet254->setCoord(*Coordinate255);

//from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 1
CColorRGBA* ColorRGBA256 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA256->setUSE("HAnimSegmentLineColorRGBA");
LineSet254->setColor(*ColorRGBA256);

Shape253->setGeometry(LineSet254);

HAnimSegment249->addChildren(*Shape253);

HAnimJoint248->addChildren(*HAnimSegment249);

CHAnimJoint* HAnimJoint257 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint257->setName("l_tarsal_proximal_interphalangeal_2");
HAnimJoint257->setDEF("hanim_l_tarsal_proximal_interphalangeal_2");
HAnimJoint257->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint257->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment258 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment258->setName("l_tarsal_middle_phalanx_2");
HAnimSegment258->setDEF("hanim_l_tarsal_middle_phalanx_2");
CTransform* Transform259 = (CTransform *)(m_pScene.createNode("Transform"));
Transform259->setTranslation(new float[3]{0.1101,0.0656,-0.0736});
CTransform* Transform260 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape261 = (CShape *)(m_pScene.createNode("Shape"));
Shape261->setUSE("HAnimJointShape");
Transform260->addChildren(*Shape261);

Transform259->addChildren(*Transform260);

HAnimSegment258->addChildren(*Transform259);

CShape* Shape262 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet263 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet263->setVertexCount(new int[1]{2});
CCoordinate* Coordinate264 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate264->setPoint(new float[3]{0.1101,0.0656,-0.0736});
LineSet263->setCoord(*Coordinate264);

//from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 1
CColorRGBA* ColorRGBA265 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA265->setUSE("HAnimSegmentLineColorRGBA");
LineSet263->setColor(*ColorRGBA265);

Shape262->setGeometry(LineSet263);

HAnimSegment258->addChildren(*Shape262);

CHAnimSite* HAnimSite266 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite266->setName("l_tarsal_distal_phalanx_2_tip");
HAnimSite266->setDEF("hanim_l_tarsal_distal_phalanx_2_tip");
HAnimSite266->setTranslation(new float[3]{0.1195,0.0079,0.1433});
CTouchSensor* TouchSensor267 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor267->setDescription("HAnimSite l_tarsal_distal_phalanx_2_tip");
HAnimSite266->addChildren(*TouchSensor267);

CShape* Shape268 = (CShape *)(m_pScene.createNode("Shape"));
Shape268->setUSE("HAnimSiteShape");
HAnimSite266->addChildren(*Shape268);

HAnimSegment258->addChildren(*HAnimSite266);

HAnimJoint257->addChildren(*HAnimSegment258);

CHAnimJoint* HAnimJoint269 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint269->setName("l_tarsal_distal_interphalangeal_2");
HAnimJoint269->setDEF("hanim_l_tarsal_distal_interphalangeal_2");
HAnimJoint269->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint269->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint257->addChildren(*HAnimJoint269);

HAnimJoint248->addChildren(*HAnimJoint257);

HAnimJoint239->addChildren(*HAnimJoint248);

HAnimJoint230->addChildren(*HAnimJoint239);

HAnimJoint179->addChildren(*HAnimJoint230);

CHAnimJoint* HAnimJoint270 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint270->setName("l_cuneonavicular_3");
HAnimJoint270->setDEF("hanim_l_cuneonavicular_3");
HAnimJoint270->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint270->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment271 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment271->setName("l_cuneiform_3");
HAnimSegment271->setDEF("hanim_l_cuneiform_3");
CTransform* Transform272 = (CTransform *)(m_pScene.createNode("Transform"));
Transform272->setTranslation(new float[3]{0.1101,0.0656,-0.0736});
CTransform* Transform273 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape274 = (CShape *)(m_pScene.createNode("Shape"));
Shape274->setUSE("HAnimJointShape");
Transform273->addChildren(*Shape274);

Transform272->addChildren(*Transform273);

HAnimSegment271->addChildren(*Transform272);

CShape* Shape275 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet276 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet276->setVertexCount(new int[1]{2});
CCoordinate* Coordinate277 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate277->setPoint(new float[3]{0.1101,0.0656,-0.0736});
LineSet276->setCoord(*Coordinate277);

//from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 1
CColorRGBA* ColorRGBA278 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA278->setUSE("HAnimSegmentLineColorRGBA");
LineSet276->setColor(*ColorRGBA278);

Shape275->setGeometry(LineSet276);

HAnimSegment271->addChildren(*Shape275);

HAnimJoint270->addChildren(*HAnimSegment271);

CHAnimJoint* HAnimJoint279 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint279->setName("l_tarsometatarsal_3");
HAnimJoint279->setDEF("hanim_l_tarsometatarsal_3");
HAnimJoint279->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint279->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment280 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment280->setName("l_metatarsal_3");
HAnimSegment280->setDEF("hanim_l_metatarsal_3");
CTransform* Transform281 = (CTransform *)(m_pScene.createNode("Transform"));
Transform281->setTranslation(new float[3]{0.1101,0.0656,-0.0736});
CTransform* Transform282 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape283 = (CShape *)(m_pScene.createNode("Shape"));
Shape283->setUSE("HAnimJointShape");
Transform282->addChildren(*Shape283);

Transform281->addChildren(*Transform282);

HAnimSegment280->addChildren(*Transform281);

CShape* Shape284 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet285 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet285->setVertexCount(new int[1]{2});
CCoordinate* Coordinate286 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate286->setPoint(new float[3]{0.1101,0.0656,-0.0736});
LineSet285->setCoord(*Coordinate286);

//from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 1
CColorRGBA* ColorRGBA287 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA287->setUSE("HAnimSegmentLineColorRGBA");
LineSet285->setColor(*ColorRGBA287);

Shape284->setGeometry(LineSet285);

HAnimSegment280->addChildren(*Shape284);

HAnimJoint279->addChildren(*HAnimSegment280);

CHAnimJoint* HAnimJoint288 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint288->setName("l_metatarsophalangeal_3");
HAnimJoint288->setDEF("hanim_l_metatarsophalangeal_3");
HAnimJoint288->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint288->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment289 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment289->setName("l_tarsal_proximal_phalanx_3");
HAnimSegment289->setDEF("hanim_l_tarsal_proximal_phalanx_3");
CTransform* Transform290 = (CTransform *)(m_pScene.createNode("Transform"));
Transform290->setTranslation(new float[3]{0.1101,0.0656,-0.0736});
CTransform* Transform291 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape292 = (CShape *)(m_pScene.createNode("Shape"));
Shape292->setUSE("HAnimJointShape");
Transform291->addChildren(*Shape292);

Transform290->addChildren(*Transform291);

HAnimSegment289->addChildren(*Transform290);

CShape* Shape293 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet294 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet294->setVertexCount(new int[1]{2});
CCoordinate* Coordinate295 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate295->setPoint(new float[3]{0.1101,0.0656,-0.0736});
LineSet294->setCoord(*Coordinate295);

//from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 1
CColorRGBA* ColorRGBA296 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA296->setUSE("HAnimSegmentLineColorRGBA");
LineSet294->setColor(*ColorRGBA296);

Shape293->setGeometry(LineSet294);

HAnimSegment289->addChildren(*Shape293);

HAnimJoint288->addChildren(*HAnimSegment289);

CHAnimJoint* HAnimJoint297 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint297->setName("l_tarsal_proximal_interphalangeal_3");
HAnimJoint297->setDEF("hanim_l_tarsal_proximal_interphalangeal_3");
HAnimJoint297->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint297->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment298 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment298->setName("l_tarsal_middle_phalanx_3");
HAnimSegment298->setDEF("hanim_l_tarsal_middle_phalanx_3");
CTransform* Transform299 = (CTransform *)(m_pScene.createNode("Transform"));
Transform299->setTranslation(new float[3]{0.1101,0.0656,-0.0736});
CTransform* Transform300 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape301 = (CShape *)(m_pScene.createNode("Shape"));
Shape301->setUSE("HAnimJointShape");
Transform300->addChildren(*Shape301);

Transform299->addChildren(*Transform300);

HAnimSegment298->addChildren(*Transform299);

CShape* Shape302 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet303 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet303->setVertexCount(new int[1]{2});
CCoordinate* Coordinate304 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate304->setPoint(new float[3]{0.1101,0.0656,-0.0736});
LineSet303->setCoord(*Coordinate304);

//from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 1
CColorRGBA* ColorRGBA305 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA305->setUSE("HAnimSegmentLineColorRGBA");
LineSet303->setColor(*ColorRGBA305);

Shape302->setGeometry(LineSet303);

HAnimSegment298->addChildren(*Shape302);

CHAnimSite* HAnimSite306 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite306->setName("l_tarsal_distal_phalanx_3_tip");
HAnimSite306->setDEF("hanim_l_tarsal_distal_phalanx_3_tip");
CTouchSensor* TouchSensor307 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor307->setDescription("HAnimSite l_tarsal_distal_phalanx_3_tip");
HAnimSite306->addChildren(*TouchSensor307);

CShape* Shape308 = (CShape *)(m_pScene.createNode("Shape"));
Shape308->setUSE("HAnimSiteShape");
HAnimSite306->addChildren(*Shape308);

HAnimSegment298->addChildren(*HAnimSite306);

HAnimJoint297->addChildren(*HAnimSegment298);

CHAnimJoint* HAnimJoint309 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint309->setName("l_tarsal_distal_interphalangeal_3");
HAnimJoint309->setDEF("hanim_l_tarsal_distal_interphalangeal_3");
HAnimJoint309->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint309->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint297->addChildren(*HAnimJoint309);

HAnimJoint288->addChildren(*HAnimJoint297);

HAnimJoint279->addChildren(*HAnimJoint288);

HAnimJoint270->addChildren(*HAnimJoint279);

HAnimJoint179->addChildren(*HAnimJoint270);

HAnimJoint166->addChildren(*HAnimJoint179);

CHAnimJoint* HAnimJoint310 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint310->setName("l_calcaneocuboid");
HAnimJoint310->setDEF("hanim_l_calcaneocuboid");
HAnimJoint310->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint310->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment311 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment311->setName("l_calcaneus");
HAnimSegment311->setDEF("hanim_l_calcaneus");
CTransform* Transform312 = (CTransform *)(m_pScene.createNode("Transform"));
Transform312->setTranslation(new float[3]{0.1101,0.0656,-0.0736});
CTransform* Transform313 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape314 = (CShape *)(m_pScene.createNode("Shape"));
Shape314->setUSE("HAnimJointShape");
Transform313->addChildren(*Shape314);

Transform312->addChildren(*Transform313);

HAnimSegment311->addChildren(*Transform312);

CShape* Shape315 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet316 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet316->setVertexCount(new int[1]{2});
CCoordinate* Coordinate317 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate317->setPoint(new float[3]{0.1101,0.0656,-0.0736});
LineSet316->setCoord(*Coordinate317);

//from l_calcaneocuboid to l_transversetarsal vertices 1
CColorRGBA* ColorRGBA318 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA318->setUSE("HAnimSegmentLineColorRGBA");
LineSet316->setColor(*ColorRGBA318);

Shape315->setGeometry(LineSet316);

HAnimSegment311->addChildren(*Shape315);

HAnimJoint310->addChildren(*HAnimSegment311);

CHAnimJoint* HAnimJoint319 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint319->setName("l_transversetarsal");
HAnimJoint319->setDEF("hanim_l_transversetarsal");
HAnimJoint319->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint319->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment320 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment320->setName("l_cuboid");
HAnimSegment320->setDEF("hanim_l_cuboid");
CTransform* Transform321 = (CTransform *)(m_pScene.createNode("Transform"));
Transform321->setTranslation(new float[3]{0.1101,0.0656,-0.0736});
CTransform* Transform322 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape323 = (CShape *)(m_pScene.createNode("Shape"));
Shape323->setUSE("HAnimJointShape");
Transform322->addChildren(*Shape323);

Transform321->addChildren(*Transform322);

HAnimSegment320->addChildren(*Transform321);

CShape* Shape324 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet325 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet325->setVertexCount(new int[1]{2});
CCoordinate* Coordinate326 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate326->setPoint(new float[3]{0.1101,0.0656,-0.0736});
LineSet325->setCoord(*Coordinate326);

//from l_transversetarsal to l_tarsometatarsal_4 vertices 1
CColorRGBA* ColorRGBA327 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA327->setUSE("HAnimSegmentLineColorRGBA");
LineSet325->setColor(*ColorRGBA327);

Shape324->setGeometry(LineSet325);

HAnimSegment320->addChildren(*Shape324);

CShape* Shape328 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet329 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet329->setVertexCount(new int[1]{2});
CCoordinate* Coordinate330 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate330->setPoint(new float[3]{0.1101,0.0656,-0.0736});
LineSet329->setCoord(*Coordinate330);

//from l_transversetarsal to l_tarsometatarsal_5 vertices 1
CColorRGBA* ColorRGBA331 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA331->setUSE("HAnimSegmentLineColorRGBA");
LineSet329->setColor(*ColorRGBA331);

Shape328->setGeometry(LineSet329);

HAnimSegment320->addChildren(*Shape328);

HAnimJoint319->addChildren(*HAnimSegment320);

CHAnimJoint* HAnimJoint332 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint332->setName("l_tarsometatarsal_4");
HAnimJoint332->setDEF("hanim_l_tarsometatarsal_4");
HAnimJoint332->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint332->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment333 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment333->setName("l_metatarsal_4");
HAnimSegment333->setDEF("hanim_l_metatarsal_4");
CTransform* Transform334 = (CTransform *)(m_pScene.createNode("Transform"));
Transform334->setTranslation(new float[3]{0.1101,0.0656,-0.0736});
CTransform* Transform335 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape336 = (CShape *)(m_pScene.createNode("Shape"));
Shape336->setUSE("HAnimJointShape");
Transform335->addChildren(*Shape336);

Transform334->addChildren(*Transform335);

HAnimSegment333->addChildren(*Transform334);

CShape* Shape337 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet338 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet338->setVertexCount(new int[1]{2});
CCoordinate* Coordinate339 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate339->setPoint(new float[3]{0.1101,0.0656,-0.0736});
LineSet338->setCoord(*Coordinate339);

//from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 1
CColorRGBA* ColorRGBA340 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA340->setUSE("HAnimSegmentLineColorRGBA");
LineSet338->setColor(*ColorRGBA340);

Shape337->setGeometry(LineSet338);

HAnimSegment333->addChildren(*Shape337);

HAnimJoint332->addChildren(*HAnimSegment333);

CHAnimJoint* HAnimJoint341 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint341->setName("l_metatarsophalangeal_4");
HAnimJoint341->setDEF("hanim_l_metatarsophalangeal_4");
HAnimJoint341->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint341->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment342 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment342->setName("l_tarsal_proximal_phalanx_4");
HAnimSegment342->setDEF("hanim_l_tarsal_proximal_phalanx_4");
CTransform* Transform343 = (CTransform *)(m_pScene.createNode("Transform"));
Transform343->setTranslation(new float[3]{0.1101,0.0656,-0.0736});
CTransform* Transform344 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape345 = (CShape *)(m_pScene.createNode("Shape"));
Shape345->setUSE("HAnimJointShape");
Transform344->addChildren(*Shape345);

Transform343->addChildren(*Transform344);

HAnimSegment342->addChildren(*Transform343);

CShape* Shape346 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet347 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet347->setVertexCount(new int[1]{2});
CCoordinate* Coordinate348 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate348->setPoint(new float[3]{0.1101,0.0656,-0.0736});
LineSet347->setCoord(*Coordinate348);

//from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 1
CColorRGBA* ColorRGBA349 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA349->setUSE("HAnimSegmentLineColorRGBA");
LineSet347->setColor(*ColorRGBA349);

Shape346->setGeometry(LineSet347);

HAnimSegment342->addChildren(*Shape346);

HAnimJoint341->addChildren(*HAnimSegment342);

CHAnimJoint* HAnimJoint350 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint350->setName("l_tarsal_proximal_interphalangeal_4");
HAnimJoint350->setDEF("hanim_l_tarsal_proximal_interphalangeal_4");
HAnimJoint350->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint350->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment351 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment351->setName("l_tarsal_middle_phalanx_4");
HAnimSegment351->setDEF("hanim_l_tarsal_middle_phalanx_4");
CTransform* Transform352 = (CTransform *)(m_pScene.createNode("Transform"));
Transform352->setTranslation(new float[3]{0.1101,0.0656,-0.0736});
CTransform* Transform353 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape354 = (CShape *)(m_pScene.createNode("Shape"));
Shape354->setUSE("HAnimJointShape");
Transform353->addChildren(*Shape354);

Transform352->addChildren(*Transform353);

HAnimSegment351->addChildren(*Transform352);

CShape* Shape355 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet356 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet356->setVertexCount(new int[1]{2});
CCoordinate* Coordinate357 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate357->setPoint(new float[3]{0.1101,0.0656,-0.0736});
LineSet356->setCoord(*Coordinate357);

//from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 1
CColorRGBA* ColorRGBA358 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA358->setUSE("HAnimSegmentLineColorRGBA");
LineSet356->setColor(*ColorRGBA358);

Shape355->setGeometry(LineSet356);

HAnimSegment351->addChildren(*Shape355);

CHAnimSite* HAnimSite359 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite359->setName("l_tarsal_distal_phalanx_4_tip");
HAnimSite359->setDEF("hanim_l_tarsal_distal_phalanx_4_tip");
CTouchSensor* TouchSensor360 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor360->setDescription("HAnimSite l_tarsal_distal_phalanx_4_tip");
HAnimSite359->addChildren(*TouchSensor360);

CShape* Shape361 = (CShape *)(m_pScene.createNode("Shape"));
Shape361->setUSE("HAnimSiteShape");
HAnimSite359->addChildren(*Shape361);

HAnimSegment351->addChildren(*HAnimSite359);

HAnimJoint350->addChildren(*HAnimSegment351);

CHAnimJoint* HAnimJoint362 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint362->setName("l_tarsal_distal_interphalangeal_4");
HAnimJoint362->setDEF("hanim_l_tarsal_distal_interphalangeal_4");
HAnimJoint362->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint362->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint350->addChildren(*HAnimJoint362);

HAnimJoint341->addChildren(*HAnimJoint350);

HAnimJoint332->addChildren(*HAnimJoint341);

HAnimJoint319->addChildren(*HAnimJoint332);

CHAnimJoint* HAnimJoint363 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint363->setName("l_tarsometatarsal_5");
HAnimJoint363->setDEF("hanim_l_tarsometatarsal_5");
HAnimJoint363->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint363->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment364 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment364->setName("l_metatarsal_5");
HAnimSegment364->setDEF("hanim_l_metatarsal_5");
CTransform* Transform365 = (CTransform *)(m_pScene.createNode("Transform"));
Transform365->setTranslation(new float[3]{0.1101,0.0656,-0.0736});
CTransform* Transform366 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape367 = (CShape *)(m_pScene.createNode("Shape"));
Shape367->setUSE("HAnimJointShape");
Transform366->addChildren(*Shape367);

Transform365->addChildren(*Transform366);

HAnimSegment364->addChildren(*Transform365);

CShape* Shape368 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet369 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet369->setVertexCount(new int[1]{2});
CCoordinate* Coordinate370 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate370->setPoint(new float[3]{0.1101,0.0656,-0.0736});
LineSet369->setCoord(*Coordinate370);

//from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 1
CColorRGBA* ColorRGBA371 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA371->setUSE("HAnimSegmentLineColorRGBA");
LineSet369->setColor(*ColorRGBA371);

Shape368->setGeometry(LineSet369);

HAnimSegment364->addChildren(*Shape368);

CHAnimSite* HAnimSite372 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite372->setName("l_metatarsal_phalanx_5_pt");
HAnimSite372->setDEF("hanim_l_metatarsal_phalanx_5_pt");
CTouchSensor* TouchSensor373 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor373->setDescription("HAnimSite l_metatarsal_phalanx_5_pt");
HAnimSite372->addChildren(*TouchSensor373);

CShape* Shape374 = (CShape *)(m_pScene.createNode("Shape"));
Shape374->setUSE("HAnimSiteShape");
HAnimSite372->addChildren(*Shape374);

HAnimSegment364->addChildren(*HAnimSite372);

HAnimJoint363->addChildren(*HAnimSegment364);

CHAnimJoint* HAnimJoint375 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint375->setName("l_metatarsophalangeal_5");
HAnimJoint375->setDEF("hanim_l_metatarsophalangeal_5");
HAnimJoint375->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint375->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment376 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment376->setName("l_tarsal_proximal_phalanx_5");
HAnimSegment376->setDEF("hanim_l_tarsal_proximal_phalanx_5");
CTransform* Transform377 = (CTransform *)(m_pScene.createNode("Transform"));
Transform377->setTranslation(new float[3]{0.1101,0.0656,-0.0736});
CTransform* Transform378 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape379 = (CShape *)(m_pScene.createNode("Shape"));
Shape379->setUSE("HAnimJointShape");
Transform378->addChildren(*Shape379);

Transform377->addChildren(*Transform378);

HAnimSegment376->addChildren(*Transform377);

CShape* Shape380 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet381 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet381->setVertexCount(new int[1]{2});
CCoordinate* Coordinate382 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate382->setPoint(new float[3]{0.1101,0.0656,-0.0736});
LineSet381->setCoord(*Coordinate382);

//from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 1
CColorRGBA* ColorRGBA383 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA383->setUSE("HAnimSegmentLineColorRGBA");
LineSet381->setColor(*ColorRGBA383);

Shape380->setGeometry(LineSet381);

HAnimSegment376->addChildren(*Shape380);

HAnimJoint375->addChildren(*HAnimSegment376);

CHAnimJoint* HAnimJoint384 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint384->setName("l_tarsal_proximal_interphalangeal_5");
HAnimJoint384->setDEF("hanim_l_tarsal_proximal_interphalangeal_5");
HAnimJoint384->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint384->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment385 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment385->setName("l_tarsal_middle_phalanx_5");
HAnimSegment385->setDEF("hanim_l_tarsal_middle_phalanx_5");
CTransform* Transform386 = (CTransform *)(m_pScene.createNode("Transform"));
Transform386->setTranslation(new float[3]{0.1101,0.0656,-0.0736});
CTransform* Transform387 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape388 = (CShape *)(m_pScene.createNode("Shape"));
Shape388->setUSE("HAnimJointShape");
Transform387->addChildren(*Shape388);

Transform386->addChildren(*Transform387);

HAnimSegment385->addChildren(*Transform386);

CShape* Shape389 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet390 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet390->setVertexCount(new int[1]{2});
CCoordinate* Coordinate391 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate391->setPoint(new float[3]{0.1101,0.0656,-0.0736});
LineSet390->setCoord(*Coordinate391);

//from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 1
CColorRGBA* ColorRGBA392 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA392->setUSE("HAnimSegmentLineColorRGBA");
LineSet390->setColor(*ColorRGBA392);

Shape389->setGeometry(LineSet390);

HAnimSegment385->addChildren(*Shape389);

CHAnimSite* HAnimSite393 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite393->setName("l_tarsal_distal_phalanx_5_tip");
HAnimSite393->setDEF("hanim_l_tarsal_distal_phalanx_5_tip");
CTouchSensor* TouchSensor394 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor394->setDescription("HAnimSite l_tarsal_distal_phalanx_5_tip");
HAnimSite393->addChildren(*TouchSensor394);

CShape* Shape395 = (CShape *)(m_pScene.createNode("Shape"));
Shape395->setUSE("HAnimSiteShape");
HAnimSite393->addChildren(*Shape395);

HAnimSegment385->addChildren(*HAnimSite393);

HAnimJoint384->addChildren(*HAnimSegment385);

CHAnimJoint* HAnimJoint396 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint396->setName("l_tarsal_distal_interphalangeal_5");
HAnimJoint396->setDEF("hanim_l_tarsal_distal_interphalangeal_5");
HAnimJoint396->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint396->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint384->addChildren(*HAnimJoint396);

HAnimJoint375->addChildren(*HAnimJoint384);

HAnimJoint363->addChildren(*HAnimJoint375);

HAnimJoint319->addChildren(*HAnimJoint363);

HAnimJoint310->addChildren(*HAnimJoint319);

HAnimJoint166->addChildren(*HAnimJoint310);

HAnimJoint151->addChildren(*HAnimJoint166);

HAnimJoint133->addChildren(*HAnimJoint151);

HAnimJoint96->addChildren(*HAnimJoint133);

CHAnimJoint* HAnimJoint397 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint397->setName("r_hip");
HAnimJoint397->setDEF("hanim_r_hip");
HAnimJoint397->setCenter(new float[3]{-0.095,0.9171,0.0029});
HAnimJoint397->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint397->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment398 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment398->setName("r_thigh");
HAnimSegment398->setDEF("hanim_r_thigh");
CTransform* Transform399 = (CTransform *)(m_pScene.createNode("Transform"));
Transform399->setTranslation(new float[3]{-0.095,0.9171,0.0029});
CTransform* Transform400 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape401 = (CShape *)(m_pScene.createNode("Shape"));
Shape401->setUSE("HAnimJointShape");
Transform400->addChildren(*Shape401);

Transform399->addChildren(*Transform400);

HAnimSegment398->addChildren(*Transform399);

CShape* Shape402 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet403 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet403->setVertexCount(new int[1]{2});
CCoordinate* Coordinate404 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate404->setPoint(new float[6]{-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318});
LineSet403->setCoord(*Coordinate404);

//from r_hip to r_knee vertices 2
CColorRGBA* ColorRGBA405 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA405->setUSE("HAnimSegmentLineColorRGBA");
LineSet403->setColor(*ColorRGBA405);

Shape402->setGeometry(LineSet403);

HAnimSegment398->addChildren(*Shape402);

CHAnimSite* HAnimSite406 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite406->setName("r_lateral_malleolus_pt");
HAnimSite406->setDEF("hanim_r_lateral_malleolus_pt");
HAnimSite406->setTranslation(new float[3]{-0.1006,0.0658,-0.1075});
CTouchSensor* TouchSensor407 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor407->setDescription("HAnimSite r_lateral_malleolus_pt");
HAnimSite406->addChildren(*TouchSensor407);

CShape* Shape408 = (CShape *)(m_pScene.createNode("Shape"));
Shape408->setUSE("HAnimSiteShape");
HAnimSite406->addChildren(*Shape408);

HAnimSegment398->addChildren(*HAnimSite406);

CHAnimSite* HAnimSite409 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite409->setName("r_medial_malleolus_pt");
HAnimSite409->setDEF("hanim_r_medial_malleolus_pt");
HAnimSite409->setTranslation(new float[3]{-0.0591,0.076,-0.0928});
CTouchSensor* TouchSensor410 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor410->setDescription("HAnimSite r_medial_malleolus_pt");
HAnimSite409->addChildren(*TouchSensor410);

CShape* Shape411 = (CShape *)(m_pScene.createNode("Shape"));
Shape411->setUSE("HAnimSiteShape");
HAnimSite409->addChildren(*Shape411);

HAnimSegment398->addChildren(*HAnimSite409);

CHAnimSite* HAnimSite412 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite412->setName("r_tibiale_pt");
HAnimSite412->setDEF("hanim_r_tibiale_pt");
CTouchSensor* TouchSensor413 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor413->setDescription("HAnimSite r_tibiale_pt");
HAnimSite412->addChildren(*TouchSensor413);

CShape* Shape414 = (CShape *)(m_pScene.createNode("Shape"));
Shape414->setUSE("HAnimSiteShape");
HAnimSite412->addChildren(*Shape414);

HAnimSegment398->addChildren(*HAnimSite412);

HAnimJoint397->addChildren(*HAnimSegment398);

CHAnimJoint* HAnimJoint415 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint415->setName("r_knee");
HAnimJoint415->setDEF("hanim_r_knee");
HAnimJoint415->setCenter(new float[3]{-0.0867,0.4913,0.0318});
HAnimJoint415->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint415->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment416 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment416->setName("r_calf");
HAnimSegment416->setDEF("hanim_r_calf");
CTransform* Transform417 = (CTransform *)(m_pScene.createNode("Transform"));
Transform417->setTranslation(new float[3]{-0.0867,0.4913,0.0318});
CTransform* Transform418 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape419 = (CShape *)(m_pScene.createNode("Shape"));
Shape419->setUSE("HAnimJointShape");
Transform418->addChildren(*Shape419);

Transform417->addChildren(*Transform418);

HAnimSegment416->addChildren(*Transform417);

CShape* Shape420 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet421 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet421->setVertexCount(new int[1]{2});
CCoordinate* Coordinate422 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate422->setPoint(new float[6]{-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766});
LineSet421->setCoord(*Coordinate422);

//from r_knee to r_talocrural vertices 2
CColorRGBA* ColorRGBA423 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA423->setUSE("HAnimSegmentLineColorRGBA");
LineSet421->setColor(*ColorRGBA423);

Shape420->setGeometry(LineSet421);

HAnimSegment416->addChildren(*Shape420);

CHAnimSite* HAnimSite424 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite424->setName("r_calcaneus_posterior_pt");
HAnimSite424->setDEF("hanim_r_calcaneus_posterior_pt");
HAnimSite424->setTranslation(new float[3]{-0.0692,0.0297,-0.1221});
CTouchSensor* TouchSensor425 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor425->setDescription("HAnimSite r_calcaneus_posterior_pt");
HAnimSite424->addChildren(*TouchSensor425);

CShape* Shape426 = (CShape *)(m_pScene.createNode("Shape"));
Shape426->setUSE("HAnimSiteShape");
HAnimSite424->addChildren(*Shape426);

HAnimSegment416->addChildren(*HAnimSite424);

CHAnimSite* HAnimSite427 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite427->setName("r_sphyrion_pt");
HAnimSite427->setDEF("hanim_r_sphyrion_pt");
HAnimSite427->setTranslation(new float[3]{-0.0603,0.061,-0.1002});
CTouchSensor* TouchSensor428 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor428->setDescription("HAnimSite r_sphyrion_pt");
HAnimSite427->addChildren(*TouchSensor428);

CShape* Shape429 = (CShape *)(m_pScene.createNode("Shape"));
Shape429->setUSE("HAnimSiteShape");
HAnimSite427->addChildren(*Shape429);

HAnimSegment416->addChildren(*HAnimSite427);

HAnimJoint415->addChildren(*HAnimSegment416);

CHAnimJoint* HAnimJoint430 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint430->setName("r_talocrural");
HAnimJoint430->setDEF("hanim_r_talocrural");
HAnimJoint430->setCenter(new float[3]{-0.0801,0.0712,-0.0766});
HAnimJoint430->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint430->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment431 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment431->setName("r_talus");
HAnimSegment431->setDEF("hanim_r_talus");
CTransform* Transform432 = (CTransform *)(m_pScene.createNode("Transform"));
Transform432->setScale(new float[3]{0.15,0.15,0.15});
Transform432->setTranslation(new float[3]{-0.05,0.06,-0.025});
Transform432->setRotation(new float[4]{1,0,0,-1.57});
//Transform right foot
CTransform* Transform433 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform right foot
CShape* Shape434 = (CShape *)(m_pScene.createNode("Shape"));
Shape434->setUSE("HAnimJointShape");
Transform433->addChildren(*Shape434);

Transform432->addChildren(*Transform433);

HAnimSegment431->addChildren(*Transform432);

CShape* Shape435 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet436 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet436->setVertexCount(new int[1]{2});
CCoordinate* Coordinate437 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate437->setPoint(new float[6]{-0.0801,0.0712,-0.0766,-0.0801,0.0712,-0.0766});
LineSet436->setCoord(*Coordinate437);

//from r_talocrural to r_talocalcaneonavicular vertices 2
CColorRGBA* ColorRGBA438 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA438->setUSE("HAnimSegmentLineColorRGBA");
LineSet436->setColor(*ColorRGBA438);

Shape435->setGeometry(LineSet436);

HAnimSegment431->addChildren(*Shape435);

CShape* Shape439 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet440 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet440->setVertexCount(new int[1]{2});
CCoordinate* Coordinate441 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate441->setPoint(new float[6]{-0.0801,0.0712,-0.0766,-0.0801,0.0712,-0.0766});
LineSet440->setCoord(*Coordinate441);

//from r_talocrural to r_calcaneocuboid vertices 2
CColorRGBA* ColorRGBA442 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA442->setUSE("HAnimSegmentLineColorRGBA");
LineSet440->setColor(*ColorRGBA442);

Shape439->setGeometry(LineSet440);

HAnimSegment431->addChildren(*Shape439);

HAnimJoint430->addChildren(*HAnimSegment431);

CHAnimJoint* HAnimJoint443 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint443->setName("r_talocalcaneonavicular");
HAnimJoint443->setDEF("hanim_r_talocalcaneonavicular");
HAnimJoint443->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint443->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment444 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment444->setName("r_navicular");
HAnimSegment444->setDEF("hanim_r_navicular");
CTransform* Transform445 = (CTransform *)(m_pScene.createNode("Transform"));
Transform445->setTranslation(new float[3]{-0.0801,0.0712,-0.0766});
CTransform* Transform446 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape447 = (CShape *)(m_pScene.createNode("Shape"));
Shape447->setUSE("HAnimJointShape");
Transform446->addChildren(*Shape447);

Transform445->addChildren(*Transform446);

HAnimSegment444->addChildren(*Transform445);

CShape* Shape448 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet449 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet449->setVertexCount(new int[1]{2});
CCoordinate* Coordinate450 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate450->setPoint(new float[3]{-0.0801,0.0712,-0.0766});
LineSet449->setCoord(*Coordinate450);

//from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 1
CColorRGBA* ColorRGBA451 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA451->setUSE("HAnimSegmentLineColorRGBA");
LineSet449->setColor(*ColorRGBA451);

Shape448->setGeometry(LineSet449);

HAnimSegment444->addChildren(*Shape448);

CShape* Shape452 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet453 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet453->setVertexCount(new int[1]{2});
CCoordinate* Coordinate454 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate454->setPoint(new float[3]{-0.0801,0.0712,-0.0766});
LineSet453->setCoord(*Coordinate454);

//from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 1
CColorRGBA* ColorRGBA455 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA455->setUSE("HAnimSegmentLineColorRGBA");
LineSet453->setColor(*ColorRGBA455);

Shape452->setGeometry(LineSet453);

HAnimSegment444->addChildren(*Shape452);

CShape* Shape456 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet457 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet457->setVertexCount(new int[1]{2});
CCoordinate* Coordinate458 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate458->setPoint(new float[3]{-0.0801,0.0712,-0.0766});
LineSet457->setCoord(*Coordinate458);

//from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 1
CColorRGBA* ColorRGBA459 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA459->setUSE("HAnimSegmentLineColorRGBA");
LineSet457->setColor(*ColorRGBA459);

Shape456->setGeometry(LineSet457);

HAnimSegment444->addChildren(*Shape456);

HAnimJoint443->addChildren(*HAnimSegment444);

CHAnimJoint* HAnimJoint460 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint460->setName("r_cuneonavicular_1");
HAnimJoint460->setDEF("hanim_r_cuneonavicular_1");
HAnimJoint460->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint460->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment461 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment461->setName("r_cuneiform_1");
HAnimSegment461->setDEF("hanim_r_cuneiform_1");
CTransform* Transform462 = (CTransform *)(m_pScene.createNode("Transform"));
Transform462->setTranslation(new float[3]{-0.0801,0.0712,-0.0766});
CTransform* Transform463 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape464 = (CShape *)(m_pScene.createNode("Shape"));
Shape464->setUSE("HAnimJointShape");
Transform463->addChildren(*Shape464);

Transform462->addChildren(*Transform463);

HAnimSegment461->addChildren(*Transform462);

CShape* Shape465 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet466 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet466->setVertexCount(new int[1]{2});
CCoordinate* Coordinate467 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate467->setPoint(new float[3]{-0.0801,0.0712,-0.0766});
LineSet466->setCoord(*Coordinate467);

//from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 1
CColorRGBA* ColorRGBA468 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA468->setUSE("HAnimSegmentLineColorRGBA");
LineSet466->setColor(*ColorRGBA468);

Shape465->setGeometry(LineSet466);

HAnimSegment461->addChildren(*Shape465);

HAnimJoint460->addChildren(*HAnimSegment461);

CHAnimJoint* HAnimJoint469 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint469->setName("r_tarsometatarsal_1");
HAnimJoint469->setDEF("hanim_r_tarsometatarsal_1");
HAnimJoint469->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint469->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment470 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment470->setName("r_metatarsal_1");
HAnimSegment470->setDEF("hanim_r_metatarsal_1");
CTransform* Transform471 = (CTransform *)(m_pScene.createNode("Transform"));
Transform471->setTranslation(new float[3]{-0.0801,0.0712,-0.0766});
CTransform* Transform472 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape473 = (CShape *)(m_pScene.createNode("Shape"));
Shape473->setUSE("HAnimJointShape");
Transform472->addChildren(*Shape473);

Transform471->addChildren(*Transform472);

HAnimSegment470->addChildren(*Transform471);

CShape* Shape474 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet475 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet475->setVertexCount(new int[1]{2});
CCoordinate* Coordinate476 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate476->setPoint(new float[3]{-0.0801,0.0712,-0.0766});
LineSet475->setCoord(*Coordinate476);

//from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 1
CColorRGBA* ColorRGBA477 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA477->setUSE("HAnimSegmentLineColorRGBA");
LineSet475->setColor(*ColorRGBA477);

Shape474->setGeometry(LineSet475);

HAnimSegment470->addChildren(*Shape474);

CHAnimSite* HAnimSite478 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite478->setName("r_metatarsal_phalanx_1_pt");
HAnimSite478->setDEF("hanim_r_metatarsal_phalanx_1_pt");
CTouchSensor* TouchSensor479 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor479->setDescription("HAnimSite r_metatarsal_phalanx_1_pt");
HAnimSite478->addChildren(*TouchSensor479);

CShape* Shape480 = (CShape *)(m_pScene.createNode("Shape"));
Shape480->setUSE("HAnimSiteShape");
HAnimSite478->addChildren(*Shape480);

HAnimSegment470->addChildren(*HAnimSite478);

HAnimJoint469->addChildren(*HAnimSegment470);

CHAnimJoint* HAnimJoint481 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint481->setName("r_metatarsophalangeal_1");
HAnimJoint481->setDEF("hanim_r_metatarsophalangeal_1");
HAnimJoint481->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint481->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment482 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment482->setName("r_tarsal_proximal_phalanx_1");
HAnimSegment482->setDEF("hanim_r_tarsal_proximal_phalanx_1");
CTransform* Transform483 = (CTransform *)(m_pScene.createNode("Transform"));
Transform483->setTranslation(new float[3]{-0.0801,0.0712,-0.0766});
CTransform* Transform484 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape485 = (CShape *)(m_pScene.createNode("Shape"));
Shape485->setUSE("HAnimJointShape");
Transform484->addChildren(*Shape485);

Transform483->addChildren(*Transform484);

HAnimSegment482->addChildren(*Transform483);

CShape* Shape486 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet487 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet487->setVertexCount(new int[1]{2});
CCoordinate* Coordinate488 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate488->setPoint(new float[3]{-0.0801,0.0712,-0.0766});
LineSet487->setCoord(*Coordinate488);

//from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 1
CColorRGBA* ColorRGBA489 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA489->setUSE("HAnimSegmentLineColorRGBA");
LineSet487->setColor(*ColorRGBA489);

Shape486->setGeometry(LineSet487);

HAnimSegment482->addChildren(*Shape486);

CHAnimSite* HAnimSite490 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite490->setName("r_tarsal_distal_phalanx_1_tip");
HAnimSite490->setDEF("hanim_r_tarsal_distal_phalanx_1_tip");
CTouchSensor* TouchSensor491 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor491->setDescription("HAnimSite r_tarsal_distal_phalanx_1_tip");
HAnimSite490->addChildren(*TouchSensor491);

CShape* Shape492 = (CShape *)(m_pScene.createNode("Shape"));
Shape492->setUSE("HAnimSiteShape");
HAnimSite490->addChildren(*Shape492);

HAnimSegment482->addChildren(*HAnimSite490);

HAnimJoint481->addChildren(*HAnimSegment482);

CHAnimJoint* HAnimJoint493 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint493->setName("r_tarsal_interphalangeal_1");
HAnimJoint493->setDEF("hanim_r_tarsal_interphalangeal_1");
HAnimJoint493->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint493->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint481->addChildren(*HAnimJoint493);

HAnimJoint469->addChildren(*HAnimJoint481);

HAnimJoint460->addChildren(*HAnimJoint469);

HAnimJoint443->addChildren(*HAnimJoint460);

CHAnimJoint* HAnimJoint494 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint494->setName("r_cuneonavicular_2");
HAnimJoint494->setDEF("hanim_r_cuneonavicular_2");
HAnimJoint494->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint494->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment495 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment495->setName("r_cuneiform_2");
HAnimSegment495->setDEF("hanim_r_cuneiform_2");
CTransform* Transform496 = (CTransform *)(m_pScene.createNode("Transform"));
Transform496->setTranslation(new float[3]{-0.0801,0.0712,-0.0766});
CTransform* Transform497 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape498 = (CShape *)(m_pScene.createNode("Shape"));
Shape498->setUSE("HAnimJointShape");
Transform497->addChildren(*Shape498);

Transform496->addChildren(*Transform497);

HAnimSegment495->addChildren(*Transform496);

CShape* Shape499 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet500 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet500->setVertexCount(new int[1]{2});
CCoordinate* Coordinate501 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate501->setPoint(new float[3]{-0.0801,0.0712,-0.0766});
LineSet500->setCoord(*Coordinate501);

//from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 1
CColorRGBA* ColorRGBA502 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA502->setUSE("HAnimSegmentLineColorRGBA");
LineSet500->setColor(*ColorRGBA502);

Shape499->setGeometry(LineSet500);

HAnimSegment495->addChildren(*Shape499);

HAnimJoint494->addChildren(*HAnimSegment495);

CHAnimJoint* HAnimJoint503 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint503->setName("r_tarsometatarsal_2");
HAnimJoint503->setDEF("hanim_r_tarsometatarsal_2");
HAnimJoint503->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint503->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment504 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment504->setName("r_metatarsal_2");
HAnimSegment504->setDEF("hanim_r_metatarsal_2");
CTransform* Transform505 = (CTransform *)(m_pScene.createNode("Transform"));
Transform505->setTranslation(new float[3]{-0.0801,0.0712,-0.0766});
CTransform* Transform506 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape507 = (CShape *)(m_pScene.createNode("Shape"));
Shape507->setUSE("HAnimJointShape");
Transform506->addChildren(*Shape507);

Transform505->addChildren(*Transform506);

HAnimSegment504->addChildren(*Transform505);

CShape* Shape508 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet509 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet509->setVertexCount(new int[1]{2});
CCoordinate* Coordinate510 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate510->setPoint(new float[3]{-0.0801,0.0712,-0.0766});
LineSet509->setCoord(*Coordinate510);

//from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 1
CColorRGBA* ColorRGBA511 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA511->setUSE("HAnimSegmentLineColorRGBA");
LineSet509->setColor(*ColorRGBA511);

Shape508->setGeometry(LineSet509);

HAnimSegment504->addChildren(*Shape508);

HAnimJoint503->addChildren(*HAnimSegment504);

CHAnimJoint* HAnimJoint512 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint512->setName("r_metatarsophalangeal_2");
HAnimJoint512->setDEF("hanim_r_metatarsophalangeal_2");
HAnimJoint512->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint512->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment513 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment513->setName("r_tarsal_proximal_phalanx_2");
HAnimSegment513->setDEF("hanim_r_tarsal_proximal_phalanx_2");
CTransform* Transform514 = (CTransform *)(m_pScene.createNode("Transform"));
Transform514->setTranslation(new float[3]{-0.0801,0.0712,-0.0766});
CTransform* Transform515 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape516 = (CShape *)(m_pScene.createNode("Shape"));
Shape516->setUSE("HAnimJointShape");
Transform515->addChildren(*Shape516);

Transform514->addChildren(*Transform515);

HAnimSegment513->addChildren(*Transform514);

CShape* Shape517 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet518 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet518->setVertexCount(new int[1]{2});
CCoordinate* Coordinate519 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate519->setPoint(new float[3]{-0.0801,0.0712,-0.0766});
LineSet518->setCoord(*Coordinate519);

//from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 1
CColorRGBA* ColorRGBA520 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA520->setUSE("HAnimSegmentLineColorRGBA");
LineSet518->setColor(*ColorRGBA520);

Shape517->setGeometry(LineSet518);

HAnimSegment513->addChildren(*Shape517);

HAnimJoint512->addChildren(*HAnimSegment513);

CHAnimJoint* HAnimJoint521 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint521->setName("r_tarsal_proximal_interphalangeal_2");
HAnimJoint521->setDEF("hanim_r_tarsal_proximal_interphalangeal_2");
HAnimJoint521->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint521->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment522 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment522->setName("r_tarsal_middle_phalanx_2");
HAnimSegment522->setDEF("hanim_r_tarsal_middle_phalanx_2");
CTransform* Transform523 = (CTransform *)(m_pScene.createNode("Transform"));
Transform523->setTranslation(new float[3]{-0.0801,0.0712,-0.0766});
CTransform* Transform524 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape525 = (CShape *)(m_pScene.createNode("Shape"));
Shape525->setUSE("HAnimJointShape");
Transform524->addChildren(*Shape525);

Transform523->addChildren(*Transform524);

HAnimSegment522->addChildren(*Transform523);

CShape* Shape526 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet527 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet527->setVertexCount(new int[1]{2});
CCoordinate* Coordinate528 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate528->setPoint(new float[3]{-0.0801,0.0712,-0.0766});
LineSet527->setCoord(*Coordinate528);

//from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 1
CColorRGBA* ColorRGBA529 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA529->setUSE("HAnimSegmentLineColorRGBA");
LineSet527->setColor(*ColorRGBA529);

Shape526->setGeometry(LineSet527);

HAnimSegment522->addChildren(*Shape526);

CHAnimSite* HAnimSite530 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite530->setName("r_tarsal_distal_phalanx_2_tip");
HAnimSite530->setDEF("hanim_r_tarsal_distal_phalanx_2_tip");
HAnimSite530->setTranslation(new float[3]{-0.0883,0.0134,0.1383});
CTouchSensor* TouchSensor531 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor531->setDescription("HAnimSite r_tarsal_distal_phalanx_2_tip");
HAnimSite530->addChildren(*TouchSensor531);

CShape* Shape532 = (CShape *)(m_pScene.createNode("Shape"));
Shape532->setUSE("HAnimSiteShape");
HAnimSite530->addChildren(*Shape532);

HAnimSegment522->addChildren(*HAnimSite530);

HAnimJoint521->addChildren(*HAnimSegment522);

CHAnimJoint* HAnimJoint533 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint533->setName("r_tarsal_distal_interphalangeal_2");
HAnimJoint533->setDEF("hanim_r_tarsal_distal_interphalangeal_2");
HAnimJoint533->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint533->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint521->addChildren(*HAnimJoint533);

HAnimJoint512->addChildren(*HAnimJoint521);

HAnimJoint503->addChildren(*HAnimJoint512);

HAnimJoint494->addChildren(*HAnimJoint503);

HAnimJoint443->addChildren(*HAnimJoint494);

CHAnimJoint* HAnimJoint534 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint534->setName("r_cuneonavicular_3");
HAnimJoint534->setDEF("hanim_r_cuneonavicular_3");
HAnimJoint534->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint534->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment535 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment535->setName("r_cuneiform_3");
HAnimSegment535->setDEF("hanim_r_cuneiform_3");
CTransform* Transform536 = (CTransform *)(m_pScene.createNode("Transform"));
Transform536->setTranslation(new float[3]{-0.0801,0.0712,-0.0766});
CTransform* Transform537 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape538 = (CShape *)(m_pScene.createNode("Shape"));
Shape538->setUSE("HAnimJointShape");
Transform537->addChildren(*Shape538);

Transform536->addChildren(*Transform537);

HAnimSegment535->addChildren(*Transform536);

CShape* Shape539 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet540 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet540->setVertexCount(new int[1]{2});
CCoordinate* Coordinate541 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate541->setPoint(new float[3]{-0.0801,0.0712,-0.0766});
LineSet540->setCoord(*Coordinate541);

//from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 1
CColorRGBA* ColorRGBA542 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA542->setUSE("HAnimSegmentLineColorRGBA");
LineSet540->setColor(*ColorRGBA542);

Shape539->setGeometry(LineSet540);

HAnimSegment535->addChildren(*Shape539);

HAnimJoint534->addChildren(*HAnimSegment535);

CHAnimJoint* HAnimJoint543 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint543->setName("r_tarsometatarsal_3");
HAnimJoint543->setDEF("hanim_r_tarsometatarsal_3");
HAnimJoint543->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint543->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment544 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment544->setName("r_metatarsal_3");
HAnimSegment544->setDEF("hanim_r_metatarsal_3");
CTransform* Transform545 = (CTransform *)(m_pScene.createNode("Transform"));
Transform545->setTranslation(new float[3]{-0.0801,0.0712,-0.0766});
CTransform* Transform546 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape547 = (CShape *)(m_pScene.createNode("Shape"));
Shape547->setUSE("HAnimJointShape");
Transform546->addChildren(*Shape547);

Transform545->addChildren(*Transform546);

HAnimSegment544->addChildren(*Transform545);

CShape* Shape548 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet549 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet549->setVertexCount(new int[1]{2});
CCoordinate* Coordinate550 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate550->setPoint(new float[3]{-0.0801,0.0712,-0.0766});
LineSet549->setCoord(*Coordinate550);

//from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 1
CColorRGBA* ColorRGBA551 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA551->setUSE("HAnimSegmentLineColorRGBA");
LineSet549->setColor(*ColorRGBA551);

Shape548->setGeometry(LineSet549);

HAnimSegment544->addChildren(*Shape548);

HAnimJoint543->addChildren(*HAnimSegment544);

CHAnimJoint* HAnimJoint552 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint552->setName("r_metatarsophalangeal_3");
HAnimJoint552->setDEF("hanim_r_metatarsophalangeal_3");
HAnimJoint552->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint552->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment553 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment553->setName("r_tarsal_proximal_phalanx_3");
HAnimSegment553->setDEF("hanim_r_tarsal_proximal_phalanx_3");
CTransform* Transform554 = (CTransform *)(m_pScene.createNode("Transform"));
Transform554->setTranslation(new float[3]{-0.0801,0.0712,-0.0766});
CTransform* Transform555 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape556 = (CShape *)(m_pScene.createNode("Shape"));
Shape556->setUSE("HAnimJointShape");
Transform555->addChildren(*Shape556);

Transform554->addChildren(*Transform555);

HAnimSegment553->addChildren(*Transform554);

CShape* Shape557 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet558 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet558->setVertexCount(new int[1]{2});
CCoordinate* Coordinate559 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate559->setPoint(new float[3]{-0.0801,0.0712,-0.0766});
LineSet558->setCoord(*Coordinate559);

//from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 1
CColorRGBA* ColorRGBA560 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA560->setUSE("HAnimSegmentLineColorRGBA");
LineSet558->setColor(*ColorRGBA560);

Shape557->setGeometry(LineSet558);

HAnimSegment553->addChildren(*Shape557);

HAnimJoint552->addChildren(*HAnimSegment553);

CHAnimJoint* HAnimJoint561 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint561->setName("r_tarsal_proximal_interphalangeal_3");
HAnimJoint561->setDEF("hanim_r_tarsal_proximal_interphalangeal_3");
HAnimJoint561->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint561->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment562 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment562->setName("r_tarsal_middle_phalanx_3");
HAnimSegment562->setDEF("hanim_r_tarsal_middle_phalanx_3");
CTransform* Transform563 = (CTransform *)(m_pScene.createNode("Transform"));
Transform563->setTranslation(new float[3]{-0.0801,0.0712,-0.0766});
CTransform* Transform564 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape565 = (CShape *)(m_pScene.createNode("Shape"));
Shape565->setUSE("HAnimJointShape");
Transform564->addChildren(*Shape565);

Transform563->addChildren(*Transform564);

HAnimSegment562->addChildren(*Transform563);

CShape* Shape566 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet567 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet567->setVertexCount(new int[1]{2});
CCoordinate* Coordinate568 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate568->setPoint(new float[3]{-0.0801,0.0712,-0.0766});
LineSet567->setCoord(*Coordinate568);

//from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 1
CColorRGBA* ColorRGBA569 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA569->setUSE("HAnimSegmentLineColorRGBA");
LineSet567->setColor(*ColorRGBA569);

Shape566->setGeometry(LineSet567);

HAnimSegment562->addChildren(*Shape566);

CHAnimSite* HAnimSite570 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite570->setName("r_tarsal_distal_phalanx_3_tip");
HAnimSite570->setDEF("hanim_r_tarsal_distal_phalanx_3_tip");
CTouchSensor* TouchSensor571 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor571->setDescription("HAnimSite r_tarsal_distal_phalanx_3_tip");
HAnimSite570->addChildren(*TouchSensor571);

CShape* Shape572 = (CShape *)(m_pScene.createNode("Shape"));
Shape572->setUSE("HAnimSiteShape");
HAnimSite570->addChildren(*Shape572);

HAnimSegment562->addChildren(*HAnimSite570);

HAnimJoint561->addChildren(*HAnimSegment562);

CHAnimJoint* HAnimJoint573 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint573->setName("r_tarsal_distal_interphalangeal_3");
HAnimJoint573->setDEF("hanim_r_tarsal_distal_interphalangeal_3");
HAnimJoint573->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint573->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint561->addChildren(*HAnimJoint573);

HAnimJoint552->addChildren(*HAnimJoint561);

HAnimJoint543->addChildren(*HAnimJoint552);

HAnimJoint534->addChildren(*HAnimJoint543);

HAnimJoint443->addChildren(*HAnimJoint534);

HAnimJoint430->addChildren(*HAnimJoint443);

CHAnimJoint* HAnimJoint574 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint574->setName("r_calcaneocuboid");
HAnimJoint574->setDEF("hanim_r_calcaneocuboid");
HAnimJoint574->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint574->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment575 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment575->setName("r_calcaneus");
HAnimSegment575->setDEF("hanim_r_calcaneus");
CTransform* Transform576 = (CTransform *)(m_pScene.createNode("Transform"));
Transform576->setTranslation(new float[3]{-0.0801,0.0712,-0.0766});
CTransform* Transform577 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape578 = (CShape *)(m_pScene.createNode("Shape"));
Shape578->setUSE("HAnimJointShape");
Transform577->addChildren(*Shape578);

Transform576->addChildren(*Transform577);

HAnimSegment575->addChildren(*Transform576);

CShape* Shape579 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet580 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet580->setVertexCount(new int[1]{2});
CCoordinate* Coordinate581 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate581->setPoint(new float[3]{-0.0801,0.0712,-0.0766});
LineSet580->setCoord(*Coordinate581);

//from r_calcaneocuboid to r_transversetarsal vertices 1
CColorRGBA* ColorRGBA582 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA582->setUSE("HAnimSegmentLineColorRGBA");
LineSet580->setColor(*ColorRGBA582);

Shape579->setGeometry(LineSet580);

HAnimSegment575->addChildren(*Shape579);

HAnimJoint574->addChildren(*HAnimSegment575);

CHAnimJoint* HAnimJoint583 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint583->setName("r_transversetarsal");
HAnimJoint583->setDEF("hanim_r_transversetarsal");
HAnimJoint583->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint583->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment584 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment584->setName("r_cuboid");
HAnimSegment584->setDEF("hanim_r_cuboid");
CTransform* Transform585 = (CTransform *)(m_pScene.createNode("Transform"));
Transform585->setTranslation(new float[3]{-0.0801,0.0712,-0.0766});
CTransform* Transform586 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape587 = (CShape *)(m_pScene.createNode("Shape"));
Shape587->setUSE("HAnimJointShape");
Transform586->addChildren(*Shape587);

Transform585->addChildren(*Transform586);

HAnimSegment584->addChildren(*Transform585);

CShape* Shape588 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet589 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet589->setVertexCount(new int[1]{2});
CCoordinate* Coordinate590 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate590->setPoint(new float[3]{-0.0801,0.0712,-0.0766});
LineSet589->setCoord(*Coordinate590);

//from r_transversetarsal to r_tarsometatarsal_4 vertices 1
CColorRGBA* ColorRGBA591 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA591->setUSE("HAnimSegmentLineColorRGBA");
LineSet589->setColor(*ColorRGBA591);

Shape588->setGeometry(LineSet589);

HAnimSegment584->addChildren(*Shape588);

CShape* Shape592 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet593 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet593->setVertexCount(new int[1]{2});
CCoordinate* Coordinate594 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate594->setPoint(new float[3]{-0.0801,0.0712,-0.0766});
LineSet593->setCoord(*Coordinate594);

//from r_transversetarsal to r_tarsometatarsal_5 vertices 1
CColorRGBA* ColorRGBA595 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA595->setUSE("HAnimSegmentLineColorRGBA");
LineSet593->setColor(*ColorRGBA595);

Shape592->setGeometry(LineSet593);

HAnimSegment584->addChildren(*Shape592);

HAnimJoint583->addChildren(*HAnimSegment584);

CHAnimJoint* HAnimJoint596 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint596->setName("r_tarsometatarsal_4");
HAnimJoint596->setDEF("hanim_r_tarsometatarsal_4");
HAnimJoint596->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint596->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment597 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment597->setName("r_metatarsal_4");
HAnimSegment597->setDEF("hanim_r_metatarsal_4");
CTransform* Transform598 = (CTransform *)(m_pScene.createNode("Transform"));
Transform598->setTranslation(new float[3]{-0.0801,0.0712,-0.0766});
CTransform* Transform599 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape600 = (CShape *)(m_pScene.createNode("Shape"));
Shape600->setUSE("HAnimJointShape");
Transform599->addChildren(*Shape600);

Transform598->addChildren(*Transform599);

HAnimSegment597->addChildren(*Transform598);

CShape* Shape601 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet602 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet602->setVertexCount(new int[1]{2});
CCoordinate* Coordinate603 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate603->setPoint(new float[3]{-0.0801,0.0712,-0.0766});
LineSet602->setCoord(*Coordinate603);

//from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 1
CColorRGBA* ColorRGBA604 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA604->setUSE("HAnimSegmentLineColorRGBA");
LineSet602->setColor(*ColorRGBA604);

Shape601->setGeometry(LineSet602);

HAnimSegment597->addChildren(*Shape601);

HAnimJoint596->addChildren(*HAnimSegment597);

CHAnimJoint* HAnimJoint605 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint605->setName("r_metatarsophalangeal_4");
HAnimJoint605->setDEF("hanim_r_metatarsophalangeal_4");
HAnimJoint605->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint605->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment606 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment606->setName("r_tarsal_proximal_phalanx_4");
HAnimSegment606->setDEF("hanim_r_tarsal_proximal_phalanx_4");
CTransform* Transform607 = (CTransform *)(m_pScene.createNode("Transform"));
Transform607->setTranslation(new float[3]{-0.0801,0.0712,-0.0766});
CTransform* Transform608 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape609 = (CShape *)(m_pScene.createNode("Shape"));
Shape609->setUSE("HAnimJointShape");
Transform608->addChildren(*Shape609);

Transform607->addChildren(*Transform608);

HAnimSegment606->addChildren(*Transform607);

CShape* Shape610 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet611 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet611->setVertexCount(new int[1]{2});
CCoordinate* Coordinate612 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate612->setPoint(new float[3]{-0.0801,0.0712,-0.0766});
LineSet611->setCoord(*Coordinate612);

//from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 1
CColorRGBA* ColorRGBA613 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA613->setUSE("HAnimSegmentLineColorRGBA");
LineSet611->setColor(*ColorRGBA613);

Shape610->setGeometry(LineSet611);

HAnimSegment606->addChildren(*Shape610);

HAnimJoint605->addChildren(*HAnimSegment606);

CHAnimJoint* HAnimJoint614 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint614->setName("r_tarsal_proximal_interphalangeal_4");
HAnimJoint614->setDEF("hanim_r_tarsal_proximal_interphalangeal_4");
HAnimJoint614->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint614->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment615 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment615->setName("r_tarsal_middle_phalanx_4");
HAnimSegment615->setDEF("hanim_r_tarsal_middle_phalanx_4");
CTransform* Transform616 = (CTransform *)(m_pScene.createNode("Transform"));
Transform616->setTranslation(new float[3]{-0.0801,0.0712,-0.0766});
CTransform* Transform617 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape618 = (CShape *)(m_pScene.createNode("Shape"));
Shape618->setUSE("HAnimJointShape");
Transform617->addChildren(*Shape618);

Transform616->addChildren(*Transform617);

HAnimSegment615->addChildren(*Transform616);

CShape* Shape619 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet620 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet620->setVertexCount(new int[1]{2});
CCoordinate* Coordinate621 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate621->setPoint(new float[3]{-0.0801,0.0712,-0.0766});
LineSet620->setCoord(*Coordinate621);

//from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 1
CColorRGBA* ColorRGBA622 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA622->setUSE("HAnimSegmentLineColorRGBA");
LineSet620->setColor(*ColorRGBA622);

Shape619->setGeometry(LineSet620);

HAnimSegment615->addChildren(*Shape619);

CHAnimSite* HAnimSite623 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite623->setName("r_tarsal_distal_phalanx_4_tip");
HAnimSite623->setDEF("hanim_r_tarsal_distal_phalanx_4_tip");
CTouchSensor* TouchSensor624 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor624->setDescription("HAnimSite r_tarsal_distal_phalanx_4_tip");
HAnimSite623->addChildren(*TouchSensor624);

CShape* Shape625 = (CShape *)(m_pScene.createNode("Shape"));
Shape625->setUSE("HAnimSiteShape");
HAnimSite623->addChildren(*Shape625);

HAnimSegment615->addChildren(*HAnimSite623);

HAnimJoint614->addChildren(*HAnimSegment615);

CHAnimJoint* HAnimJoint626 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint626->setName("r_tarsal_distal_interphalangeal_4");
HAnimJoint626->setDEF("hanim_r_tarsal_distal_interphalangeal_4");
HAnimJoint626->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint626->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint614->addChildren(*HAnimJoint626);

HAnimJoint605->addChildren(*HAnimJoint614);

HAnimJoint596->addChildren(*HAnimJoint605);

HAnimJoint583->addChildren(*HAnimJoint596);

CHAnimJoint* HAnimJoint627 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint627->setName("r_tarsometatarsal_5");
HAnimJoint627->setDEF("hanim_r_tarsometatarsal_5");
HAnimJoint627->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint627->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment628 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment628->setName("r_metatarsal_5");
HAnimSegment628->setDEF("hanim_r_metatarsal_5");
CTransform* Transform629 = (CTransform *)(m_pScene.createNode("Transform"));
Transform629->setTranslation(new float[3]{-0.0801,0.0712,-0.0766});
CTransform* Transform630 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape631 = (CShape *)(m_pScene.createNode("Shape"));
Shape631->setUSE("HAnimJointShape");
Transform630->addChildren(*Shape631);

Transform629->addChildren(*Transform630);

HAnimSegment628->addChildren(*Transform629);

CShape* Shape632 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet633 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet633->setVertexCount(new int[1]{2});
CCoordinate* Coordinate634 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate634->setPoint(new float[3]{-0.0801,0.0712,-0.0766});
LineSet633->setCoord(*Coordinate634);

//from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 1
CColorRGBA* ColorRGBA635 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA635->setUSE("HAnimSegmentLineColorRGBA");
LineSet633->setColor(*ColorRGBA635);

Shape632->setGeometry(LineSet633);

HAnimSegment628->addChildren(*Shape632);

CHAnimSite* HAnimSite636 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite636->setName("r_metatarsal_phalanx_5_pt");
HAnimSite636->setDEF("hanim_r_metatarsal_phalanx_5_pt");
CTouchSensor* TouchSensor637 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor637->setDescription("HAnimSite r_metatarsal_phalanx_5_pt");
HAnimSite636->addChildren(*TouchSensor637);

CShape* Shape638 = (CShape *)(m_pScene.createNode("Shape"));
Shape638->setUSE("HAnimSiteShape");
HAnimSite636->addChildren(*Shape638);

HAnimSegment628->addChildren(*HAnimSite636);

HAnimJoint627->addChildren(*HAnimSegment628);

CHAnimJoint* HAnimJoint639 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint639->setName("r_metatarsophalangeal_5");
HAnimJoint639->setDEF("hanim_r_metatarsophalangeal_5");
HAnimJoint639->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint639->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment640 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment640->setName("r_tarsal_proximal_phalanx_5");
HAnimSegment640->setDEF("hanim_r_tarsal_proximal_phalanx_5");
CTransform* Transform641 = (CTransform *)(m_pScene.createNode("Transform"));
Transform641->setTranslation(new float[3]{-0.0801,0.0712,-0.0766});
CTransform* Transform642 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape643 = (CShape *)(m_pScene.createNode("Shape"));
Shape643->setUSE("HAnimJointShape");
Transform642->addChildren(*Shape643);

Transform641->addChildren(*Transform642);

HAnimSegment640->addChildren(*Transform641);

CShape* Shape644 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet645 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet645->setVertexCount(new int[1]{2});
CCoordinate* Coordinate646 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate646->setPoint(new float[3]{-0.0801,0.0712,-0.0766});
LineSet645->setCoord(*Coordinate646);

//from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 1
CColorRGBA* ColorRGBA647 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA647->setUSE("HAnimSegmentLineColorRGBA");
LineSet645->setColor(*ColorRGBA647);

Shape644->setGeometry(LineSet645);

HAnimSegment640->addChildren(*Shape644);

HAnimJoint639->addChildren(*HAnimSegment640);

CHAnimJoint* HAnimJoint648 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint648->setName("r_tarsal_proximal_interphalangeal_5");
HAnimJoint648->setDEF("hanim_r_tarsal_proximal_interphalangeal_5");
HAnimJoint648->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint648->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment649 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment649->setName("r_tarsal_middle_phalanx_5");
HAnimSegment649->setDEF("hanim_r_tarsal_middle_phalanx_5");
CTransform* Transform650 = (CTransform *)(m_pScene.createNode("Transform"));
Transform650->setTranslation(new float[3]{-0.0801,0.0712,-0.0766});
CTransform* Transform651 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape652 = (CShape *)(m_pScene.createNode("Shape"));
Shape652->setUSE("HAnimJointShape");
Transform651->addChildren(*Shape652);

Transform650->addChildren(*Transform651);

HAnimSegment649->addChildren(*Transform650);

CShape* Shape653 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet654 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet654->setVertexCount(new int[1]{2});
CCoordinate* Coordinate655 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate655->setPoint(new float[3]{-0.0801,0.0712,-0.0766});
LineSet654->setCoord(*Coordinate655);

//from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 1
CColorRGBA* ColorRGBA656 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA656->setUSE("HAnimSegmentLineColorRGBA");
LineSet654->setColor(*ColorRGBA656);

Shape653->setGeometry(LineSet654);

HAnimSegment649->addChildren(*Shape653);

CHAnimSite* HAnimSite657 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite657->setName("r_tarsal_distal_phalanx_5_tip");
HAnimSite657->setDEF("hanim_r_tarsal_distal_phalanx_5_tip");
CTouchSensor* TouchSensor658 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor658->setDescription("HAnimSite r_tarsal_distal_phalanx_5_tip");
HAnimSite657->addChildren(*TouchSensor658);

CShape* Shape659 = (CShape *)(m_pScene.createNode("Shape"));
Shape659->setUSE("HAnimSiteShape");
HAnimSite657->addChildren(*Shape659);

HAnimSegment649->addChildren(*HAnimSite657);

HAnimJoint648->addChildren(*HAnimSegment649);

CHAnimJoint* HAnimJoint660 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint660->setName("r_tarsal_distal_interphalangeal_5");
HAnimJoint660->setDEF("hanim_r_tarsal_distal_interphalangeal_5");
HAnimJoint660->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint660->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint648->addChildren(*HAnimJoint660);

HAnimJoint639->addChildren(*HAnimJoint648);

HAnimJoint627->addChildren(*HAnimJoint639);

HAnimJoint583->addChildren(*HAnimJoint627);

HAnimJoint574->addChildren(*HAnimJoint583);

HAnimJoint430->addChildren(*HAnimJoint574);

HAnimJoint415->addChildren(*HAnimJoint430);

HAnimJoint397->addChildren(*HAnimJoint415);

HAnimJoint96->addChildren(*HAnimJoint397);

HAnimJoint44->addChildren(*HAnimJoint96);

CHAnimJoint* HAnimJoint661 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint661->setName("vl5");
HAnimJoint661->setDEF("hanim_vl5");
HAnimJoint661->setCenter(new float[3]{0.0028,1.0568,-0.0776});
HAnimJoint661->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint661->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment662 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment662->setName("l5");
HAnimSegment662->setDEF("hanim_l5");
CTransform* Transform663 = (CTransform *)(m_pScene.createNode("Transform"));
Transform663->setTranslation(new float[3]{0.0028,1.0568,-0.0776});
CTransform* Transform664 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape665 = (CShape *)(m_pScene.createNode("Shape"));
Shape665->setUSE("HAnimJointShape");
Transform664->addChildren(*Shape665);

Transform663->addChildren(*Transform664);

HAnimSegment662->addChildren(*Transform663);

CShape* Shape666 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet667 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet667->setVertexCount(new int[1]{2});
CCoordinate* Coordinate668 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate668->setPoint(new float[6]{0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787});
LineSet667->setCoord(*Coordinate668);

//from vl5 to vl4 vertices 2
CColorRGBA* ColorRGBA669 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA669->setUSE("HAnimSegmentLineColorRGBA");
LineSet667->setColor(*ColorRGBA669);

Shape666->setGeometry(LineSet667);

HAnimSegment662->addChildren(*Shape666);

HAnimJoint661->addChildren(*HAnimSegment662);

CHAnimJoint* HAnimJoint670 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint670->setName("vl4");
HAnimJoint670->setDEF("hanim_vl4");
HAnimJoint670->setCenter(new float[3]{0.0035,1.0925,-0.0787});
HAnimJoint670->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint670->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment671 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment671->setName("l4");
HAnimSegment671->setDEF("hanim_l4");
CTransform* Transform672 = (CTransform *)(m_pScene.createNode("Transform"));
Transform672->setTranslation(new float[3]{0.0035,1.0925,-0.0787});
CTransform* Transform673 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape674 = (CShape *)(m_pScene.createNode("Shape"));
Shape674->setUSE("HAnimJointShape");
Transform673->addChildren(*Shape674);

Transform672->addChildren(*Transform673);

HAnimSegment671->addChildren(*Transform672);

CShape* Shape675 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet676 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet676->setVertexCount(new int[1]{2});
CCoordinate* Coordinate677 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate677->setPoint(new float[6]{0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796});
LineSet676->setCoord(*Coordinate677);

//from vl4 to vl3 vertices 2
CColorRGBA* ColorRGBA678 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA678->setUSE("HAnimSegmentLineColorRGBA");
LineSet676->setColor(*ColorRGBA678);

Shape675->setGeometry(LineSet676);

HAnimSegment671->addChildren(*Shape675);

HAnimJoint670->addChildren(*HAnimSegment671);

CHAnimJoint* HAnimJoint679 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint679->setName("vl3");
HAnimJoint679->setDEF("hanim_vl3");
HAnimJoint679->setCenter(new float[3]{0.0041,1.1276,-0.0796});
HAnimJoint679->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint679->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment680 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment680->setName("l3");
HAnimSegment680->setDEF("hanim_l3");
CTransform* Transform681 = (CTransform *)(m_pScene.createNode("Transform"));
Transform681->setTranslation(new float[3]{0.0041,1.1276,-0.0796});
CTransform* Transform682 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape683 = (CShape *)(m_pScene.createNode("Shape"));
Shape683->setUSE("HAnimJointShape");
Transform682->addChildren(*Shape683);

Transform681->addChildren(*Transform682);

HAnimSegment680->addChildren(*Transform681);

CShape* Shape684 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet685 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet685->setVertexCount(new int[1]{2});
CCoordinate* Coordinate686 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate686->setPoint(new float[6]{0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08});
LineSet685->setCoord(*Coordinate686);

//from vl3 to vl2 vertices 2
CColorRGBA* ColorRGBA687 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA687->setUSE("HAnimSegmentLineColorRGBA");
LineSet685->setColor(*ColorRGBA687);

Shape684->setGeometry(LineSet685);

HAnimSegment680->addChildren(*Shape684);

CHAnimSite* HAnimSite688 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite688->setName("l_rib10_pt");
HAnimSite688->setDEF("hanim_l_rib10_pt");
HAnimSite688->setTranslation(new float[3]{0.0871,1.1925,0.0992});
CTouchSensor* TouchSensor689 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor689->setDescription("HAnimSite l_rib10_pt");
HAnimSite688->addChildren(*TouchSensor689);

CShape* Shape690 = (CShape *)(m_pScene.createNode("Shape"));
Shape690->setUSE("HAnimSiteShape");
HAnimSite688->addChildren(*Shape690);

HAnimSegment680->addChildren(*HAnimSite688);

CHAnimSite* HAnimSite691 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite691->setName("r_rib10_pt");
HAnimSite691->setDEF("hanim_r_rib10_pt");
HAnimSite691->setTranslation(new float[3]{-0.0711,1.1941,0.1016});
CTouchSensor* TouchSensor692 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor692->setDescription("HAnimSite r_rib10_pt");
HAnimSite691->addChildren(*TouchSensor692);

CShape* Shape693 = (CShape *)(m_pScene.createNode("Shape"));
Shape693->setUSE("HAnimSiteShape");
HAnimSite691->addChildren(*Shape693);

HAnimSegment680->addChildren(*HAnimSite691);

CHAnimSite* HAnimSite694 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite694->setName("spine_2_middle_back_pt");
HAnimSite694->setDEF("hanim_spine_2_middle_back_pt");
CTouchSensor* TouchSensor695 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor695->setDescription("HAnimSite spine_2_middle_back_pt");
HAnimSite694->addChildren(*TouchSensor695);

CShape* Shape696 = (CShape *)(m_pScene.createNode("Shape"));
Shape696->setUSE("HAnimSiteShape");
HAnimSite694->addChildren(*Shape696);

HAnimSegment680->addChildren(*HAnimSite694);

HAnimJoint679->addChildren(*HAnimSegment680);

CHAnimJoint* HAnimJoint697 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint697->setName("vl2");
HAnimJoint697->setDEF("hanim_vl2");
HAnimJoint697->setCenter(new float[3]{0.0045,1.1546,-0.08});
HAnimJoint697->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint697->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment698 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment698->setName("l2");
HAnimSegment698->setDEF("hanim_l2");
CTransform* Transform699 = (CTransform *)(m_pScene.createNode("Transform"));
Transform699->setTranslation(new float[3]{0.0045,1.1546,-0.08});
CTransform* Transform700 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape701 = (CShape *)(m_pScene.createNode("Shape"));
Shape701->setUSE("HAnimJointShape");
Transform700->addChildren(*Shape701);

Transform699->addChildren(*Transform700);

HAnimSegment698->addChildren(*Transform699);

CShape* Shape702 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet703 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet703->setVertexCount(new int[1]{2});
CCoordinate* Coordinate704 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate704->setPoint(new float[6]{0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805});
LineSet703->setCoord(*Coordinate704);

//from vl2 to vl1 vertices 2
CColorRGBA* ColorRGBA705 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA705->setUSE("HAnimSegmentLineColorRGBA");
LineSet703->setColor(*ColorRGBA705);

Shape702->setGeometry(LineSet703);

HAnimSegment698->addChildren(*Shape702);

HAnimJoint697->addChildren(*HAnimSegment698);

CHAnimJoint* HAnimJoint706 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint706->setName("vl1");
HAnimJoint706->setDEF("hanim_vl1");
HAnimJoint706->setCenter(new float[3]{0.0048,1.1912,-0.0805});
HAnimJoint706->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint706->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment707 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment707->setName("l1");
HAnimSegment707->setDEF("hanim_l1");
CTransform* Transform708 = (CTransform *)(m_pScene.createNode("Transform"));
Transform708->setTranslation(new float[3]{0.0048,1.1912,-0.0805});
CTransform* Transform709 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape710 = (CShape *)(m_pScene.createNode("Shape"));
Shape710->setUSE("HAnimJointShape");
Transform709->addChildren(*Shape710);

Transform708->addChildren(*Transform709);

HAnimSegment707->addChildren(*Transform708);

CShape* Shape711 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet712 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet712->setVertexCount(new int[1]{2});
CCoordinate* Coordinate713 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate713->setPoint(new float[6]{0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808});
LineSet712->setCoord(*Coordinate713);

//from vl1 to vt12 vertices 2
CColorRGBA* ColorRGBA714 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA714->setUSE("HAnimSegmentLineColorRGBA");
LineSet712->setColor(*ColorRGBA714);

Shape711->setGeometry(LineSet712);

HAnimSegment707->addChildren(*Shape711);

HAnimJoint706->addChildren(*HAnimSegment707);

CHAnimJoint* HAnimJoint715 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint715->setName("vt12");
HAnimJoint715->setDEF("hanim_vt12");
HAnimJoint715->setCenter(new float[3]{0.0051,1.2278,-0.0808});
HAnimJoint715->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint715->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment716 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment716->setName("t12");
HAnimSegment716->setDEF("hanim_t12");
CTransform* Transform717 = (CTransform *)(m_pScene.createNode("Transform"));
Transform717->setTranslation(new float[3]{0.0051,1.2278,-0.0808});
CTransform* Transform718 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape719 = (CShape *)(m_pScene.createNode("Shape"));
Shape719->setUSE("HAnimJointShape");
Transform718->addChildren(*Shape719);

Transform717->addChildren(*Transform718);

HAnimSegment716->addChildren(*Transform717);

CShape* Shape720 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet721 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet721->setVertexCount(new int[1]{2});
CCoordinate* Coordinate722 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate722->setPoint(new float[6]{0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081});
LineSet721->setCoord(*Coordinate722);

//from vt12 to vt11 vertices 2
CColorRGBA* ColorRGBA723 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA723->setUSE("HAnimSegmentLineColorRGBA");
LineSet721->setColor(*ColorRGBA723);

Shape720->setGeometry(LineSet721);

HAnimSegment716->addChildren(*Shape720);

HAnimJoint715->addChildren(*HAnimSegment716);

CHAnimJoint* HAnimJoint724 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint724->setName("vt11");
HAnimJoint724->setDEF("hanim_vt11");
HAnimJoint724->setCenter(new float[3]{0.0053,1.2679,-0.081});
HAnimJoint724->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint724->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment725 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment725->setName("t11");
HAnimSegment725->setDEF("hanim_t11");
CTransform* Transform726 = (CTransform *)(m_pScene.createNode("Transform"));
Transform726->setTranslation(new float[3]{0.0053,1.2679,-0.081});
CTransform* Transform727 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape728 = (CShape *)(m_pScene.createNode("Shape"));
Shape728->setUSE("HAnimJointShape");
Transform727->addChildren(*Shape728);

Transform726->addChildren(*Transform727);

HAnimSegment725->addChildren(*Transform726);

CShape* Shape729 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet730 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet730->setVertexCount(new int[1]{2});
CCoordinate* Coordinate731 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate731->setPoint(new float[6]{0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822});
LineSet730->setCoord(*Coordinate731);

//from vt11 to vt10 vertices 2
CColorRGBA* ColorRGBA732 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA732->setUSE("HAnimSegmentLineColorRGBA");
LineSet730->setColor(*ColorRGBA732);

Shape729->setGeometry(LineSet730);

HAnimSegment725->addChildren(*Shape729);

CHAnimSite* HAnimSite733 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite733->setName("substernale_pt");
HAnimSite733->setDEF("hanim_substernale_pt");
HAnimSite733->setTranslation(new float[3]{0.0085,1.2995,0.1147});
CTouchSensor* TouchSensor734 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor734->setDescription("HAnimSite substernale_pt");
HAnimSite733->addChildren(*TouchSensor734);

CShape* Shape735 = (CShape *)(m_pScene.createNode("Shape"));
Shape735->setUSE("HAnimSiteShape");
HAnimSite733->addChildren(*Shape735);

HAnimSegment725->addChildren(*HAnimSite733);

HAnimJoint724->addChildren(*HAnimSegment725);

CHAnimJoint* HAnimJoint736 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint736->setName("vt10");
HAnimJoint736->setDEF("hanim_vt10");
HAnimJoint736->setCenter(new float[3]{0.0056,1.2848,-0.0822});
HAnimJoint736->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint736->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment737 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment737->setName("t10");
HAnimSegment737->setDEF("hanim_t10");
CTransform* Transform738 = (CTransform *)(m_pScene.createNode("Transform"));
Transform738->setTranslation(new float[3]{0.0056,1.2848,-0.0822});
CTransform* Transform739 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape740 = (CShape *)(m_pScene.createNode("Shape"));
Shape740->setUSE("HAnimJointShape");
Transform739->addChildren(*Shape740);

Transform738->addChildren(*Transform739);

HAnimSegment737->addChildren(*Transform738);

CShape* Shape741 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet742 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet742->setVertexCount(new int[1]{2});
CCoordinate* Coordinate743 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate743->setPoint(new float[6]{0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838});
LineSet742->setCoord(*Coordinate743);

//from vt10 to vt9 vertices 2
CColorRGBA* ColorRGBA744 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA744->setUSE("HAnimSegmentLineColorRGBA");
LineSet742->setColor(*ColorRGBA744);

Shape741->setGeometry(LineSet742);

HAnimSegment737->addChildren(*Shape741);

CHAnimSite* HAnimSite745 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite745->setName("l_thelion_pt");
HAnimSite745->setDEF("hanim_l_thelion_pt");
HAnimSite745->setTranslation(new float[3]{0.0918,1.3382,0.1192});
CTouchSensor* TouchSensor746 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor746->setDescription("HAnimSite l_thelion_pt");
HAnimSite745->addChildren(*TouchSensor746);

CShape* Shape747 = (CShape *)(m_pScene.createNode("Shape"));
Shape747->setUSE("HAnimSiteShape");
HAnimSite745->addChildren(*Shape747);

HAnimSegment737->addChildren(*HAnimSite745);

CHAnimSite* HAnimSite748 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite748->setName("r_thelion_pt");
HAnimSite748->setDEF("hanim_r_thelion_pt");
HAnimSite748->setTranslation(new float[3]{-0.0736,1.3385,0.1217});
CTouchSensor* TouchSensor749 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor749->setDescription("HAnimSite r_thelion_pt");
HAnimSite748->addChildren(*TouchSensor749);

CShape* Shape750 = (CShape *)(m_pScene.createNode("Shape"));
Shape750->setUSE("HAnimSiteShape");
HAnimSite748->addChildren(*Shape750);

HAnimSegment737->addChildren(*HAnimSite748);

HAnimJoint736->addChildren(*HAnimSegment737);

CHAnimJoint* HAnimJoint751 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint751->setName("vt9");
HAnimJoint751->setDEF("hanim_vt9");
HAnimJoint751->setCenter(new float[3]{0.0057,1.3126,-0.0838});
HAnimJoint751->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint751->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment752 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment752->setName("t9");
HAnimSegment752->setDEF("hanim_t9");
CTransform* Transform753 = (CTransform *)(m_pScene.createNode("Transform"));
Transform753->setTranslation(new float[3]{0.0057,1.3126,-0.0838});
CTransform* Transform754 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape755 = (CShape *)(m_pScene.createNode("Shape"));
Shape755->setUSE("HAnimJointShape");
Transform754->addChildren(*Shape755);

Transform753->addChildren(*Transform754);

HAnimSegment752->addChildren(*Transform753);

CShape* Shape756 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet757 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet757->setVertexCount(new int[1]{2});
CCoordinate* Coordinate758 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate758->setPoint(new float[6]{0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845});
LineSet757->setCoord(*Coordinate758);

//from vt9 to vt8 vertices 2
CColorRGBA* ColorRGBA759 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA759->setUSE("HAnimSegmentLineColorRGBA");
LineSet757->setColor(*ColorRGBA759);

Shape756->setGeometry(LineSet757);

HAnimSegment752->addChildren(*Shape756);

HAnimJoint751->addChildren(*HAnimSegment752);

CHAnimJoint* HAnimJoint760 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint760->setName("vt8");
HAnimJoint760->setDEF("hanim_vt8");
HAnimJoint760->setCenter(new float[3]{0.0057,1.3382,-0.0845});
HAnimJoint760->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint760->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment761 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment761->setName("t8");
HAnimSegment761->setDEF("hanim_t8");
CTransform* Transform762 = (CTransform *)(m_pScene.createNode("Transform"));
Transform762->setTranslation(new float[3]{0.0057,1.3382,-0.0845});
CTransform* Transform763 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape764 = (CShape *)(m_pScene.createNode("Shape"));
Shape764->setUSE("HAnimJointShape");
Transform763->addChildren(*Shape764);

Transform762->addChildren(*Transform763);

HAnimSegment761->addChildren(*Transform762);

CShape* Shape765 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet766 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet766->setVertexCount(new int[1]{2});
CCoordinate* Coordinate767 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate767->setPoint(new float[6]{0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833});
LineSet766->setCoord(*Coordinate767);

//from vt8 to vt7 vertices 2
CColorRGBA* ColorRGBA768 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA768->setUSE("HAnimSegmentLineColorRGBA");
LineSet766->setColor(*ColorRGBA768);

Shape765->setGeometry(LineSet766);

HAnimSegment761->addChildren(*Shape765);

HAnimJoint760->addChildren(*HAnimSegment761);

CHAnimJoint* HAnimJoint769 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint769->setName("vt7");
HAnimJoint769->setDEF("hanim_vt7");
HAnimJoint769->setCenter(new float[3]{0.0058,1.3625,-0.0833});
HAnimJoint769->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint769->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment770 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment770->setName("t7");
HAnimSegment770->setDEF("hanim_t7");
CTransform* Transform771 = (CTransform *)(m_pScene.createNode("Transform"));
Transform771->setTranslation(new float[3]{0.0058,1.3625,-0.0833});
CTransform* Transform772 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape773 = (CShape *)(m_pScene.createNode("Shape"));
Shape773->setUSE("HAnimJointShape");
Transform772->addChildren(*Shape773);

Transform771->addChildren(*Transform772);

HAnimSegment770->addChildren(*Transform771);

CShape* Shape774 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet775 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet775->setVertexCount(new int[1]{2});
CCoordinate* Coordinate776 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate776->setPoint(new float[6]{0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08});
LineSet775->setCoord(*Coordinate776);

//from vt7 to vt6 vertices 2
CColorRGBA* ColorRGBA777 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA777->setUSE("HAnimSegmentLineColorRGBA");
LineSet775->setColor(*ColorRGBA777);

Shape774->setGeometry(LineSet775);

HAnimSegment770->addChildren(*Shape774);

CHAnimSite* HAnimSite778 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite778->setName("l_chest_midsagittal_plane_pt");
HAnimSite778->setDEF("hanim_l_chest_midsagittal_plane_pt");
CTouchSensor* TouchSensor779 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor779->setDescription("HAnimSite l_chest_midsagittal_plane_pt");
HAnimSite778->addChildren(*TouchSensor779);

CShape* Shape780 = (CShape *)(m_pScene.createNode("Shape"));
Shape780->setUSE("HAnimSiteShape");
HAnimSite778->addChildren(*Shape780);

HAnimSegment770->addChildren(*HAnimSite778);

CHAnimSite* HAnimSite781 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite781->setName("mesosternale_pt");
HAnimSite781->setDEF("hanim_mesosternale_pt");
CTouchSensor* TouchSensor782 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor782->setDescription("HAnimSite mesosternale_pt");
HAnimSite781->addChildren(*TouchSensor782);

CShape* Shape783 = (CShape *)(m_pScene.createNode("Shape"));
Shape783->setUSE("HAnimSiteShape");
HAnimSite781->addChildren(*Shape783);

HAnimSegment770->addChildren(*HAnimSite781);

CHAnimSite* HAnimSite784 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite784->setName("r_chest_midsagittal_plane_pt");
HAnimSite784->setDEF("hanim_r_chest_midsagittal_plane_pt");
CTouchSensor* TouchSensor785 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor785->setDescription("HAnimSite r_chest_midsagittal_plane_pt");
HAnimSite784->addChildren(*TouchSensor785);

CShape* Shape786 = (CShape *)(m_pScene.createNode("Shape"));
Shape786->setUSE("HAnimSiteShape");
HAnimSite784->addChildren(*Shape786);

HAnimSegment770->addChildren(*HAnimSite784);

CHAnimSite* HAnimSite787 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite787->setName("rear_center_midsagittal_plane_pt");
HAnimSite787->setDEF("hanim_rear_center_midsagittal_plane_pt");
CTouchSensor* TouchSensor788 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor788->setDescription("HAnimSite rear_center_midsagittal_plane_pt");
HAnimSite787->addChildren(*TouchSensor788);

CShape* Shape789 = (CShape *)(m_pScene.createNode("Shape"));
Shape789->setUSE("HAnimSiteShape");
HAnimSite787->addChildren(*Shape789);

HAnimSegment770->addChildren(*HAnimSite787);

HAnimJoint769->addChildren(*HAnimSegment770);

CHAnimJoint* HAnimJoint790 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint790->setName("vt6");
HAnimJoint790->setDEF("hanim_vt6");
HAnimJoint790->setCenter(new float[3]{0.0059,1.3866,-0.08});
HAnimJoint790->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint790->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment791 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment791->setName("t6");
HAnimSegment791->setDEF("hanim_t6");
CTransform* Transform792 = (CTransform *)(m_pScene.createNode("Transform"));
Transform792->setTranslation(new float[3]{0.0059,1.3866,-0.08});
CTransform* Transform793 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape794 = (CShape *)(m_pScene.createNode("Shape"));
Shape794->setUSE("HAnimJointShape");
Transform793->addChildren(*Shape794);

Transform792->addChildren(*Transform793);

HAnimSegment791->addChildren(*Transform792);

CShape* Shape795 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet796 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet796->setVertexCount(new int[1]{2});
CCoordinate* Coordinate797 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate797->setPoint(new float[6]{0.0059,1.3866,-0.08,0.006,1.4102,-0.0745});
LineSet796->setCoord(*Coordinate797);

//from vt6 to vt5 vertices 2
CColorRGBA* ColorRGBA798 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA798->setUSE("HAnimSegmentLineColorRGBA");
LineSet796->setColor(*ColorRGBA798);

Shape795->setGeometry(LineSet796);

HAnimSegment791->addChildren(*Shape795);

CHAnimSite* HAnimSite799 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite799->setName("spine_1_middle_back_pt");
HAnimSite799->setDEF("hanim_spine_1_middle_back_pt");
CTouchSensor* TouchSensor800 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor800->setDescription("HAnimSite spine_1_middle_back_pt");
HAnimSite799->addChildren(*TouchSensor800);

CShape* Shape801 = (CShape *)(m_pScene.createNode("Shape"));
Shape801->setUSE("HAnimSiteShape");
HAnimSite799->addChildren(*Shape801);

HAnimSegment791->addChildren(*HAnimSite799);

HAnimJoint790->addChildren(*HAnimSegment791);

CHAnimJoint* HAnimJoint802 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint802->setName("vt5");
HAnimJoint802->setDEF("hanim_vt5");
HAnimJoint802->setCenter(new float[3]{0.006,1.4102,-0.0745});
HAnimJoint802->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint802->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment803 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment803->setName("t5");
HAnimSegment803->setDEF("hanim_t5");
CTransform* Transform804 = (CTransform *)(m_pScene.createNode("Transform"));
Transform804->setTranslation(new float[3]{0.006,1.4102,-0.0745});
CTransform* Transform805 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape806 = (CShape *)(m_pScene.createNode("Shape"));
Shape806->setUSE("HAnimJointShape");
Transform805->addChildren(*Shape806);

Transform804->addChildren(*Transform805);

HAnimSegment803->addChildren(*Transform804);

CShape* Shape807 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet808 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet808->setVertexCount(new int[1]{2});
CCoordinate* Coordinate809 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate809->setPoint(new float[6]{0.006,1.4102,-0.0745,0.0061,1.432,-0.0675});
LineSet808->setCoord(*Coordinate809);

//from vt5 to vt4 vertices 2
CColorRGBA* ColorRGBA810 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA810->setUSE("HAnimSegmentLineColorRGBA");
LineSet808->setColor(*ColorRGBA810);

Shape807->setGeometry(LineSet808);

HAnimSegment803->addChildren(*Shape807);

HAnimJoint802->addChildren(*HAnimSegment803);

CHAnimJoint* HAnimJoint811 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint811->setName("vt4");
HAnimJoint811->setDEF("hanim_vt4");
HAnimJoint811->setCenter(new float[3]{0.0061,1.432,-0.0675});
HAnimJoint811->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint811->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment812 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment812->setName("t4");
HAnimSegment812->setDEF("hanim_t4");
CTransform* Transform813 = (CTransform *)(m_pScene.createNode("Transform"));
Transform813->setTranslation(new float[3]{0.0061,1.432,-0.0675});
CTransform* Transform814 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape815 = (CShape *)(m_pScene.createNode("Shape"));
Shape815->setUSE("HAnimJointShape");
Transform814->addChildren(*Shape815);

Transform813->addChildren(*Transform814);

HAnimSegment812->addChildren(*Transform813);

CShape* Shape816 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet817 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet817->setVertexCount(new int[1]{2});
CCoordinate* Coordinate818 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate818->setPoint(new float[6]{0.0061,1.432,-0.0675,0.0062,1.4583,-0.057});
LineSet817->setCoord(*Coordinate818);

//from vt4 to vt3 vertices 2
CColorRGBA* ColorRGBA819 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA819->setUSE("HAnimSegmentLineColorRGBA");
LineSet817->setColor(*ColorRGBA819);

Shape816->setGeometry(LineSet817);

HAnimSegment812->addChildren(*Shape816);

HAnimJoint811->addChildren(*HAnimSegment812);

CHAnimJoint* HAnimJoint820 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint820->setName("vt3");
HAnimJoint820->setDEF("hanim_vt3");
HAnimJoint820->setCenter(new float[3]{0.0062,1.4583,-0.057});
HAnimJoint820->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint820->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment821 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment821->setName("t3");
HAnimSegment821->setDEF("hanim_t3");
CTransform* Transform822 = (CTransform *)(m_pScene.createNode("Transform"));
Transform822->setTranslation(new float[3]{0.0062,1.4583,-0.057});
CTransform* Transform823 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape824 = (CShape *)(m_pScene.createNode("Shape"));
Shape824->setUSE("HAnimJointShape");
Transform823->addChildren(*Shape824);

Transform822->addChildren(*Transform823);

HAnimSegment821->addChildren(*Transform822);

CShape* Shape825 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet826 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet826->setVertexCount(new int[1]{2});
CCoordinate* Coordinate827 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate827->setPoint(new float[6]{0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484});
LineSet826->setCoord(*Coordinate827);

//from vt3 to vt2 vertices 2
CColorRGBA* ColorRGBA828 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA828->setUSE("HAnimSegmentLineColorRGBA");
LineSet826->setColor(*ColorRGBA828);

Shape825->setGeometry(LineSet826);

HAnimSegment821->addChildren(*Shape825);

HAnimJoint820->addChildren(*HAnimSegment821);

CHAnimJoint* HAnimJoint829 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint829->setName("vt2");
HAnimJoint829->setDEF("hanim_vt2");
HAnimJoint829->setCenter(new float[3]{0.0063,1.4761,-0.0484});
HAnimJoint829->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint829->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment830 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment830->setName("t2");
HAnimSegment830->setDEF("hanim_t2");
CTransform* Transform831 = (CTransform *)(m_pScene.createNode("Transform"));
Transform831->setTranslation(new float[3]{0.0063,1.4761,-0.0484});
CTransform* Transform832 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape833 = (CShape *)(m_pScene.createNode("Shape"));
Shape833->setUSE("HAnimJointShape");
Transform832->addChildren(*Shape833);

Transform831->addChildren(*Transform832);

HAnimSegment830->addChildren(*Transform831);

CShape* Shape834 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet835 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet835->setVertexCount(new int[1]{2});
CCoordinate* Coordinate836 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate836->setPoint(new float[6]{0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387});
LineSet835->setCoord(*Coordinate836);

//from vt2 to vt1 vertices 2
CColorRGBA* ColorRGBA837 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA837->setUSE("HAnimSegmentLineColorRGBA");
LineSet835->setColor(*ColorRGBA837);

Shape834->setGeometry(LineSet835);

HAnimSegment830->addChildren(*Shape834);

CHAnimSite* HAnimSite838 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite838->setName("cervicale_pt");
HAnimSite838->setDEF("hanim_cervicale_pt");
HAnimSite838->setTranslation(new float[3]{0.0064,1.52,-0.0815});
CTouchSensor* TouchSensor839 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor839->setDescription("HAnimSite cervicale_pt");
HAnimSite838->addChildren(*TouchSensor839);

CShape* Shape840 = (CShape *)(m_pScene.createNode("Shape"));
Shape840->setUSE("HAnimSiteShape");
HAnimSite838->addChildren(*Shape840);

HAnimSegment830->addChildren(*HAnimSite838);

CHAnimSite* HAnimSite841 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite841->setName("suprasternale_pt");
HAnimSite841->setDEF("hanim_suprasternale_pt");
HAnimSite841->setTranslation(new float[3]{0.0084,1.4714,0.0551});
CTouchSensor* TouchSensor842 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor842->setDescription("HAnimSite suprasternale_pt");
HAnimSite841->addChildren(*TouchSensor842);

CShape* Shape843 = (CShape *)(m_pScene.createNode("Shape"));
Shape843->setUSE("HAnimSiteShape");
HAnimSite841->addChildren(*Shape843);

HAnimSegment830->addChildren(*HAnimSite841);

HAnimJoint829->addChildren(*HAnimSegment830);

CHAnimJoint* HAnimJoint844 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint844->setName("vt1");
HAnimJoint844->setDEF("hanim_vt1");
HAnimJoint844->setCenter(new float[3]{0.0065,1.4951,-0.0387});
HAnimJoint844->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint844->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment845 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment845->setName("t1");
HAnimSegment845->setDEF("hanim_t1");
CTransform* Transform846 = (CTransform *)(m_pScene.createNode("Transform"));
Transform846->setTranslation(new float[3]{0.0065,1.4951,-0.0387});
CTransform* Transform847 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape848 = (CShape *)(m_pScene.createNode("Shape"));
Shape848->setUSE("HAnimJointShape");
Transform847->addChildren(*Shape848);

Transform846->addChildren(*Transform847);

HAnimSegment845->addChildren(*Transform846);

CShape* Shape849 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet850 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet850->setVertexCount(new int[1]{2});
CCoordinate* Coordinate851 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate851->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301});
LineSet850->setCoord(*Coordinate851);

//from vt1 to vc7 vertices 2
CColorRGBA* ColorRGBA852 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA852->setUSE("HAnimSegmentLineColorRGBA");
LineSet850->setColor(*ColorRGBA852);

Shape849->setGeometry(LineSet850);

HAnimSegment845->addChildren(*Shape849);

CHAnimSite* HAnimSite853 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite853->setName("l_neck_base_pt");
HAnimSite853->setDEF("hanim_l_neck_base_pt");
HAnimSite853->setTranslation(new float[3]{0.0646,1.5141,-0.038});
CTouchSensor* TouchSensor854 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor854->setDescription("HAnimSite l_neck_base_pt");
HAnimSite853->addChildren(*TouchSensor854);

CShape* Shape855 = (CShape *)(m_pScene.createNode("Shape"));
Shape855->setUSE("HAnimSiteShape");
HAnimSite853->addChildren(*Shape855);

HAnimSegment845->addChildren(*HAnimSite853);

CHAnimSite* HAnimSite856 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite856->setName("r_neck_base_pt");
HAnimSite856->setDEF("hanim_r_neck_base_pt");
HAnimSite856->setTranslation(new float[3]{-0.0419,1.5149,-0.022});
CTouchSensor* TouchSensor857 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor857->setDescription("HAnimSite r_neck_base_pt");
HAnimSite856->addChildren(*TouchSensor857);

CShape* Shape858 = (CShape *)(m_pScene.createNode("Shape"));
Shape858->setUSE("HAnimSiteShape");
HAnimSite856->addChildren(*Shape858);

HAnimSegment845->addChildren(*HAnimSite856);

CShape* Shape859 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet860 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet860->setVertexCount(new int[1]{2});
CCoordinate* Coordinate861 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate861->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353});
LineSet860->setCoord(*Coordinate861);

//from vt1 to l_sternoclavicular vertices 2
CColorRGBA* ColorRGBA862 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA862->setUSE("HAnimSegmentLineColorRGBA");
LineSet860->setColor(*ColorRGBA862);

Shape859->setGeometry(LineSet860);

HAnimSegment845->addChildren(*Shape859);

CHAnimSite* HAnimSite863 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite863->setName("l_acromion_pt");
HAnimSite863->setDEF("hanim_l_acromion_pt");
HAnimSite863->setTranslation(new float[3]{0.2032,1.476,-0.049});
CTouchSensor* TouchSensor864 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor864->setDescription("HAnimSite l_acromion_pt");
HAnimSite863->addChildren(*TouchSensor864);

CShape* Shape865 = (CShape *)(m_pScene.createNode("Shape"));
Shape865->setUSE("HAnimSiteShape");
HAnimSite863->addChildren(*Shape865);

HAnimSegment845->addChildren(*HAnimSite863);

CHAnimSite* HAnimSite866 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite866->setName("l_axilla_distal_pt");
HAnimSite866->setDEF("hanim_l_axilla_distal_pt");
HAnimSite866->setTranslation(new float[3]{0.1706,1.4072,-0.0875});
CTouchSensor* TouchSensor867 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor867->setDescription("HAnimSite l_axilla_distal_pt");
HAnimSite866->addChildren(*TouchSensor867);

CShape* Shape868 = (CShape *)(m_pScene.createNode("Shape"));
Shape868->setUSE("HAnimSiteShape");
HAnimSite866->addChildren(*Shape868);

HAnimSegment845->addChildren(*HAnimSite866);

CHAnimSite* HAnimSite869 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite869->setName("l_axilla_posterior_folds_pt");
HAnimSite869->setDEF("hanim_l_axilla_posterior_folds_pt");
CTouchSensor* TouchSensor870 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor870->setDescription("HAnimSite l_axilla_posterior_folds_pt");
HAnimSite869->addChildren(*TouchSensor870);

CShape* Shape871 = (CShape *)(m_pScene.createNode("Shape"));
Shape871->setUSE("HAnimSiteShape");
HAnimSite869->addChildren(*Shape871);

HAnimSegment845->addChildren(*HAnimSite869);

CHAnimSite* HAnimSite872 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite872->setName("l_axilla_proximal_pt");
HAnimSite872->setDEF("hanim_l_axilla_proximal_pt");
HAnimSite872->setTranslation(new float[3]{0.1777,1.4065,-0.0075});
CTouchSensor* TouchSensor873 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor873->setDescription("HAnimSite l_axilla_proximal_pt");
HAnimSite872->addChildren(*TouchSensor873);

CShape* Shape874 = (CShape *)(m_pScene.createNode("Shape"));
Shape874->setUSE("HAnimSiteShape");
HAnimSite872->addChildren(*Shape874);

HAnimSegment845->addChildren(*HAnimSite872);

CHAnimSite* HAnimSite875 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite875->setName("l_clavicale_pt");
HAnimSite875->setDEF("hanim_l_clavicale_pt");
HAnimSite875->setTranslation(new float[3]{0.0271,1.4943,0.0394});
CTouchSensor* TouchSensor876 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor876->setDescription("HAnimSite l_clavicale_pt");
HAnimSite875->addChildren(*TouchSensor876);

CShape* Shape877 = (CShape *)(m_pScene.createNode("Shape"));
Shape877->setUSE("HAnimSiteShape");
HAnimSite875->addChildren(*Shape877);

HAnimSegment845->addChildren(*HAnimSite875);

CShape* Shape878 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet879 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet879->setVertexCount(new int[1]{2});
CCoordinate* Coordinate880 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate880->setPoint(new float[6]{0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033});
LineSet879->setCoord(*Coordinate880);

//from vt1 to r_sternoclavicular vertices 2
CColorRGBA* ColorRGBA881 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA881->setUSE("HAnimSegmentLineColorRGBA");
LineSet879->setColor(*ColorRGBA881);

Shape878->setGeometry(LineSet879);

HAnimSegment845->addChildren(*Shape878);

CHAnimSite* HAnimSite882 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite882->setName("r_acromion_pt");
HAnimSite882->setDEF("hanim_r_acromion_pt");
HAnimSite882->setTranslation(new float[3]{-0.1905,1.4791,-0.0431});
CTouchSensor* TouchSensor883 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor883->setDescription("HAnimSite r_acromion_pt");
HAnimSite882->addChildren(*TouchSensor883);

CShape* Shape884 = (CShape *)(m_pScene.createNode("Shape"));
Shape884->setUSE("HAnimSiteShape");
HAnimSite882->addChildren(*Shape884);

HAnimSegment845->addChildren(*HAnimSite882);

CHAnimSite* HAnimSite885 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite885->setName("r_axilla_distal_pt");
HAnimSite885->setDEF("hanim_r_axilla_distal_pt");
HAnimSite885->setTranslation(new float[3]{-0.1603,1.4098,-0.0826});
CTouchSensor* TouchSensor886 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor886->setDescription("HAnimSite r_axilla_distal_pt");
HAnimSite885->addChildren(*TouchSensor886);

CShape* Shape887 = (CShape *)(m_pScene.createNode("Shape"));
Shape887->setUSE("HAnimSiteShape");
HAnimSite885->addChildren(*Shape887);

HAnimSegment845->addChildren(*HAnimSite885);

CHAnimSite* HAnimSite888 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite888->setName("r_axilla_posterior_folds_pt");
HAnimSite888->setDEF("hanim_r_axilla_posterior_folds_pt");
CTouchSensor* TouchSensor889 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor889->setDescription("HAnimSite r_axilla_posterior_folds_pt");
HAnimSite888->addChildren(*TouchSensor889);

CShape* Shape890 = (CShape *)(m_pScene.createNode("Shape"));
Shape890->setUSE("HAnimSiteShape");
HAnimSite888->addChildren(*Shape890);

HAnimSegment845->addChildren(*HAnimSite888);

CHAnimSite* HAnimSite891 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite891->setName("r_axilla_proximal_pt");
HAnimSite891->setDEF("hanim_r_axilla_proximal_pt");
HAnimSite891->setTranslation(new float[3]{-0.1626,1.4072,-0.0031});
CTouchSensor* TouchSensor892 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor892->setDescription("HAnimSite r_axilla_proximal_pt");
HAnimSite891->addChildren(*TouchSensor892);

CShape* Shape893 = (CShape *)(m_pScene.createNode("Shape"));
Shape893->setUSE("HAnimSiteShape");
HAnimSite891->addChildren(*Shape893);

HAnimSegment845->addChildren(*HAnimSite891);

CHAnimSite* HAnimSite894 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite894->setName("r_clavicale_pt");
HAnimSite894->setDEF("hanim_r_clavicale_pt");
HAnimSite894->setTranslation(new float[3]{-0.0115,1.4943,0.04});
CTouchSensor* TouchSensor895 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor895->setDescription("HAnimSite r_clavicale_pt");
HAnimSite894->addChildren(*TouchSensor895);

CShape* Shape896 = (CShape *)(m_pScene.createNode("Shape"));
Shape896->setUSE("HAnimSiteShape");
HAnimSite894->addChildren(*Shape896);

HAnimSegment845->addChildren(*HAnimSite894);

HAnimJoint844->addChildren(*HAnimSegment845);

CHAnimJoint* HAnimJoint897 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint897->setName("vc7");
HAnimJoint897->setDEF("hanim_vc7");
HAnimJoint897->setCenter(new float[3]{0.0066,1.5132,-0.0301});
HAnimJoint897->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint897->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment898 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment898->setName("c7");
HAnimSegment898->setDEF("hanim_c7");
CTransform* Transform899 = (CTransform *)(m_pScene.createNode("Transform"));
Transform899->setTranslation(new float[3]{0.0066,1.5132,-0.0301});
CTransform* Transform900 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape901 = (CShape *)(m_pScene.createNode("Shape"));
Shape901->setUSE("HAnimJointShape");
Transform900->addChildren(*Shape901);

Transform899->addChildren(*Transform900);

HAnimSegment898->addChildren(*Transform899);

CShape* Shape902 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet903 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet903->setVertexCount(new int[1]{2});
CCoordinate* Coordinate904 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate904->setPoint(new float[6]{0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143});
LineSet903->setCoord(*Coordinate904);

//from vc7 to vc6 vertices 2
CColorRGBA* ColorRGBA905 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA905->setUSE("HAnimSegmentLineColorRGBA");
LineSet903->setColor(*ColorRGBA905);

Shape902->setGeometry(LineSet903);

HAnimSegment898->addChildren(*Shape902);

HAnimJoint897->addChildren(*HAnimSegment898);

CHAnimJoint* HAnimJoint906 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint906->setName("vc6");
HAnimJoint906->setDEF("hanim_vc6");
HAnimJoint906->setCenter(new float[3]{0.0066,1.5357,-0.0143});
HAnimJoint906->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint906->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment907 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment907->setName("c6");
HAnimSegment907->setDEF("hanim_c6");
CTransform* Transform908 = (CTransform *)(m_pScene.createNode("Transform"));
Transform908->setTranslation(new float[3]{0.0066,1.5357,-0.0143});
CTransform* Transform909 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape910 = (CShape *)(m_pScene.createNode("Shape"));
Shape910->setUSE("HAnimJointShape");
Transform909->addChildren(*Shape910);

Transform908->addChildren(*Transform909);

HAnimSegment907->addChildren(*Transform908);

CShape* Shape911 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet912 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet912->setVertexCount(new int[1]{2});
CCoordinate* Coordinate913 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate913->setPoint(new float[6]{0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082});
LineSet912->setCoord(*Coordinate913);

//from vc6 to vc5 vertices 2
CColorRGBA* ColorRGBA914 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA914->setUSE("HAnimSegmentLineColorRGBA");
LineSet912->setColor(*ColorRGBA914);

Shape911->setGeometry(LineSet912);

HAnimSegment907->addChildren(*Shape911);

HAnimJoint906->addChildren(*HAnimSegment907);

CHAnimJoint* HAnimJoint915 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint915->setName("vc5");
HAnimJoint915->setDEF("hanim_vc5");
HAnimJoint915->setCenter(new float[3]{0.0066,1.552,-0.0082});
HAnimJoint915->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint915->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment916 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment916->setName("c5");
HAnimSegment916->setDEF("hanim_c5");
CTransform* Transform917 = (CTransform *)(m_pScene.createNode("Transform"));
Transform917->setTranslation(new float[3]{0.0066,1.552,-0.0082});
CTransform* Transform918 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape919 = (CShape *)(m_pScene.createNode("Shape"));
Shape919->setUSE("HAnimJointShape");
Transform918->addChildren(*Shape919);

Transform917->addChildren(*Transform918);

HAnimSegment916->addChildren(*Transform917);

CShape* Shape920 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet921 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet921->setVertexCount(new int[1]{2});
CCoordinate* Coordinate922 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate922->setPoint(new float[6]{0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084});
LineSet921->setCoord(*Coordinate922);

//from vc5 to vc4 vertices 2
CColorRGBA* ColorRGBA923 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA923->setUSE("HAnimSegmentLineColorRGBA");
LineSet921->setColor(*ColorRGBA923);

Shape920->setGeometry(LineSet921);

HAnimSegment916->addChildren(*Shape920);

HAnimJoint915->addChildren(*HAnimSegment916);

CHAnimJoint* HAnimJoint924 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint924->setName("vc4");
HAnimJoint924->setDEF("hanim_vc4");
HAnimJoint924->setCenter(new float[3]{0.0066,1.5662,-0.0084});
HAnimJoint924->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint924->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment925 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment925->setName("c4");
HAnimSegment925->setDEF("hanim_c4");
CTransform* Transform926 = (CTransform *)(m_pScene.createNode("Transform"));
Transform926->setTranslation(new float[3]{0.0066,1.5662,-0.0084});
CTransform* Transform927 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape928 = (CShape *)(m_pScene.createNode("Shape"));
Shape928->setUSE("HAnimJointShape");
Transform927->addChildren(*Shape928);

Transform926->addChildren(*Transform927);

HAnimSegment925->addChildren(*Transform926);

CShape* Shape929 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet930 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet930->setVertexCount(new int[1]{2});
CCoordinate* Coordinate931 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate931->setPoint(new float[6]{0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103});
LineSet930->setCoord(*Coordinate931);

//from vc4 to vc3 vertices 2
CColorRGBA* ColorRGBA932 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA932->setUSE("HAnimSegmentLineColorRGBA");
LineSet930->setColor(*ColorRGBA932);

Shape929->setGeometry(LineSet930);

HAnimSegment925->addChildren(*Shape929);

HAnimJoint924->addChildren(*HAnimSegment925);

CHAnimJoint* HAnimJoint933 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint933->setName("vc3");
HAnimJoint933->setDEF("hanim_vc3");
HAnimJoint933->setCenter(new float[3]{0.0066,1.58,-0.0103});
HAnimJoint933->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint933->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment934 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment934->setName("c3");
HAnimSegment934->setDEF("hanim_c3");
CTransform* Transform935 = (CTransform *)(m_pScene.createNode("Transform"));
Transform935->setTranslation(new float[3]{0.0066,1.58,-0.0103});
CTransform* Transform936 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape937 = (CShape *)(m_pScene.createNode("Shape"));
Shape937->setUSE("HAnimJointShape");
Transform936->addChildren(*Shape937);

Transform935->addChildren(*Transform936);

HAnimSegment934->addChildren(*Transform935);

CShape* Shape938 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet939 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet939->setVertexCount(new int[1]{2});
CCoordinate* Coordinate940 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate940->setPoint(new float[6]{0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103});
LineSet939->setCoord(*Coordinate940);

//from vc3 to vc2 vertices 2
CColorRGBA* ColorRGBA941 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA941->setUSE("HAnimSegmentLineColorRGBA");
LineSet939->setColor(*ColorRGBA941);

Shape938->setGeometry(LineSet939);

HAnimSegment934->addChildren(*Shape938);

CHAnimSite* HAnimSite942 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite942->setName("adams_apple_pt");
HAnimSite942->setDEF("hanim_adams_apple_pt");
CTouchSensor* TouchSensor943 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor943->setDescription("HAnimSite adams_apple_pt");
HAnimSite942->addChildren(*TouchSensor943);

CShape* Shape944 = (CShape *)(m_pScene.createNode("Shape"));
Shape944->setUSE("HAnimSiteShape");
HAnimSite942->addChildren(*Shape944);

HAnimSegment934->addChildren(*HAnimSite942);

HAnimJoint933->addChildren(*HAnimSegment934);

CHAnimJoint* HAnimJoint945 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint945->setName("vc2");
HAnimJoint945->setDEF("hanim_vc2");
HAnimJoint945->setCenter(new float[3]{0.0066,1.5928,-0.0103});
HAnimJoint945->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint945->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment946 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment946->setName("c2");
HAnimSegment946->setDEF("hanim_c2");
CTransform* Transform947 = (CTransform *)(m_pScene.createNode("Transform"));
Transform947->setTranslation(new float[3]{0.0066,1.5928,-0.0103});
CTransform* Transform948 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape949 = (CShape *)(m_pScene.createNode("Shape"));
Shape949->setUSE("HAnimJointShape");
Transform948->addChildren(*Shape949);

Transform947->addChildren(*Transform948);

HAnimSegment946->addChildren(*Transform947);

CShape* Shape950 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet951 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet951->setVertexCount(new int[1]{2});
CCoordinate* Coordinate952 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate952->setPoint(new float[6]{0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034});
LineSet951->setCoord(*Coordinate952);

//from vc2 to vc1 vertices 2
CColorRGBA* ColorRGBA953 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA953->setUSE("HAnimSegmentLineColorRGBA");
LineSet951->setColor(*ColorRGBA953);

Shape950->setGeometry(LineSet951);

HAnimSegment946->addChildren(*Shape950);

HAnimJoint945->addChildren(*HAnimSegment946);

CHAnimJoint* HAnimJoint954 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint954->setName("vc1");
HAnimJoint954->setDEF("hanim_vc1");
HAnimJoint954->setCenter(new float[3]{0.0066,1.6144,-0.0034});
HAnimJoint954->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint954->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment955 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment955->setName("c1");
HAnimSegment955->setDEF("hanim_c1");
CTransform* Transform956 = (CTransform *)(m_pScene.createNode("Transform"));
Transform956->setTranslation(new float[3]{0.0066,1.6144,-0.0034});
CTransform* Transform957 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape958 = (CShape *)(m_pScene.createNode("Shape"));
Shape958->setUSE("HAnimJointShape");
Transform957->addChildren(*Shape958);

Transform956->addChildren(*Transform957);

HAnimSegment955->addChildren(*Transform956);

CShape* Shape959 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet960 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet960->setVertexCount(new int[1]{2});
CCoordinate* Coordinate961 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate961->setPoint(new float[6]{0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236});
LineSet960->setCoord(*Coordinate961);

//from vc1 to skullbase vertices 2
CColorRGBA* ColorRGBA962 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA962->setUSE("HAnimSegmentLineColorRGBA");
LineSet960->setColor(*ColorRGBA962);

Shape959->setGeometry(LineSet960);

HAnimSegment955->addChildren(*Shape959);

CHAnimSite* HAnimSite963 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite963->setName("glabella_pt");
HAnimSite963->setDEF("hanim_glabella_pt");
CTouchSensor* TouchSensor964 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor964->setDescription("HAnimSite glabella_pt");
HAnimSite963->addChildren(*TouchSensor964);

CShape* Shape965 = (CShape *)(m_pScene.createNode("Shape"));
Shape965->setUSE("HAnimSiteShape");
HAnimSite963->addChildren(*Shape965);

HAnimSegment955->addChildren(*HAnimSite963);

CHAnimSite* HAnimSite966 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite966->setName("l_ectocanthus_pt");
HAnimSite966->setDEF("hanim_l_ectocanthus_pt");
CTouchSensor* TouchSensor967 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor967->setDescription("HAnimSite l_ectocanthus_pt");
HAnimSite966->addChildren(*TouchSensor967);

CShape* Shape968 = (CShape *)(m_pScene.createNode("Shape"));
Shape968->setUSE("HAnimSiteShape");
HAnimSite966->addChildren(*Shape968);

HAnimSegment955->addChildren(*HAnimSite966);

CHAnimSite* HAnimSite969 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite969->setName("l_infraorbitale_pt");
HAnimSite969->setDEF("hanim_l_infraorbitale_pt");
HAnimSite969->setTranslation(new float[3]{0.0341,1.6171,0.0752});
CTouchSensor* TouchSensor970 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor970->setDescription("HAnimSite l_infraorbitale_pt");
HAnimSite969->addChildren(*TouchSensor970);

CShape* Shape971 = (CShape *)(m_pScene.createNode("Shape"));
Shape971->setUSE("HAnimSiteShape");
HAnimSite969->addChildren(*Shape971);

HAnimSegment955->addChildren(*HAnimSite969);

CHAnimSite* HAnimSite972 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite972->setName("l_tragion_pt");
HAnimSite972->setDEF("hanim_l_tragion_pt");
HAnimSite972->setTranslation(new float[3]{0.0739,1.6348,0.0282});
CTouchSensor* TouchSensor973 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor973->setDescription("HAnimSite l_tragion_pt");
HAnimSite972->addChildren(*TouchSensor973);

CShape* Shape974 = (CShape *)(m_pScene.createNode("Shape"));
Shape974->setUSE("HAnimSiteShape");
HAnimSite972->addChildren(*Shape974);

HAnimSegment955->addChildren(*HAnimSite972);

CHAnimSite* HAnimSite975 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite975->setName("nuchale_pt");
HAnimSite975->setDEF("hanim_nuchale_pt");
HAnimSite975->setTranslation(new float[3]{0.0039,1.5972,-0.0796});
CTouchSensor* TouchSensor976 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor976->setDescription("HAnimSite nuchale_pt");
HAnimSite975->addChildren(*TouchSensor976);

CShape* Shape977 = (CShape *)(m_pScene.createNode("Shape"));
Shape977->setUSE("HAnimSiteShape");
HAnimSite975->addChildren(*Shape977);

HAnimSegment955->addChildren(*HAnimSite975);

CHAnimSite* HAnimSite978 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite978->setName("opisthocranion_pt");
HAnimSite978->setDEF("hanim_opisthocranion_pt");
CTouchSensor* TouchSensor979 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor979->setDescription("HAnimSite opisthocranion_pt");
HAnimSite978->addChildren(*TouchSensor979);

CShape* Shape980 = (CShape *)(m_pScene.createNode("Shape"));
Shape980->setUSE("HAnimSiteShape");
HAnimSite978->addChildren(*Shape980);

HAnimSegment955->addChildren(*HAnimSite978);

CHAnimSite* HAnimSite981 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite981->setName("r_ectocanthus_pt");
HAnimSite981->setDEF("hanim_r_ectocanthus_pt");
CTouchSensor* TouchSensor982 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor982->setDescription("HAnimSite r_ectocanthus_pt");
HAnimSite981->addChildren(*TouchSensor982);

CShape* Shape983 = (CShape *)(m_pScene.createNode("Shape"));
Shape983->setUSE("HAnimSiteShape");
HAnimSite981->addChildren(*Shape983);

HAnimSegment955->addChildren(*HAnimSite981);

CHAnimSite* HAnimSite984 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite984->setName("r_infraorbitale_pt");
HAnimSite984->setDEF("hanim_r_infraorbitale_pt");
HAnimSite984->setTranslation(new float[3]{-0.0237,1.6171,0.0752});
CTouchSensor* TouchSensor985 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor985->setDescription("HAnimSite r_infraorbitale_pt");
HAnimSite984->addChildren(*TouchSensor985);

CShape* Shape986 = (CShape *)(m_pScene.createNode("Shape"));
Shape986->setUSE("HAnimSiteShape");
HAnimSite984->addChildren(*Shape986);

HAnimSegment955->addChildren(*HAnimSite984);

CHAnimSite* HAnimSite987 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite987->setName("r_tragion_pt");
HAnimSite987->setDEF("hanim_r_tragion_pt");
HAnimSite987->setTranslation(new float[3]{-0.0646,1.6347,0.0302});
CTouchSensor* TouchSensor988 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor988->setDescription("HAnimSite r_tragion_pt");
HAnimSite987->addChildren(*TouchSensor988);

CShape* Shape989 = (CShape *)(m_pScene.createNode("Shape"));
Shape989->setUSE("HAnimSiteShape");
HAnimSite987->addChildren(*Shape989);

HAnimSegment955->addChildren(*HAnimSite987);

CHAnimSite* HAnimSite990 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite990->setName("sellion_pt");
HAnimSite990->setDEF("hanim_sellion_pt");
HAnimSite990->setTranslation(new float[3]{0.0058,1.6316,0.0852});
CTouchSensor* TouchSensor991 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor991->setDescription("HAnimSite sellion_pt");
HAnimSite990->addChildren(*TouchSensor991);

CShape* Shape992 = (CShape *)(m_pScene.createNode("Shape"));
Shape992->setUSE("HAnimSiteShape");
HAnimSite990->addChildren(*Shape992);

HAnimSegment955->addChildren(*HAnimSite990);

CHAnimSite* HAnimSite993 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite993->setName("skull_vertex_pt");
HAnimSite993->setDEF("hanim_skull_vertex_pt");
HAnimSite993->setTranslation(new float[3]{0.005,1.7504,0.0055});
CTouchSensor* TouchSensor994 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor994->setDescription("HAnimSite skull_vertex_pt");
HAnimSite993->addChildren(*TouchSensor994);

CShape* Shape995 = (CShape *)(m_pScene.createNode("Shape"));
Shape995->setUSE("HAnimSiteShape");
HAnimSite993->addChildren(*Shape995);

HAnimSegment955->addChildren(*HAnimSite993);

HAnimJoint954->addChildren(*HAnimSegment955);

CHAnimJoint* HAnimJoint996 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint996->setName("skullbase");
HAnimJoint996->setDEF("hanim_skullbase");
HAnimJoint996->setCenter(new float[3]{0.0044,1.6209,0.0236});
HAnimJoint996->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint996->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment997 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment997->setName("skull");
HAnimSegment997->setDEF("hanim_skull");
CTransform* Transform998 = (CTransform *)(m_pScene.createNode("Transform"));
Transform998->setTranslation(new float[3]{0.0044,1.6209,0.0236});
CTransform* Transform999 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1000 = (CShape *)(m_pScene.createNode("Shape"));
Shape1000->setUSE("HAnimJointShape");
Transform999->addChildren(*Shape1000);

Transform998->addChildren(*Transform999);

HAnimSegment997->addChildren(*Transform998);

CShape* Shape1001 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1002 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1002->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1003 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1003->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0044,1.6209,0.0236});
LineSet1002->setCoord(*Coordinate1003);

//from skullbase to l_eyelid_joint vertices 2
CColorRGBA* ColorRGBA1004 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1004->setUSE("HAnimSegmentLineColorRGBA");
LineSet1002->setColor(*ColorRGBA1004);

Shape1001->setGeometry(LineSet1002);

HAnimSegment997->addChildren(*Shape1001);

CShape* Shape1005 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1006 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1006->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1007 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1007->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0044,1.6209,0.0236});
LineSet1006->setCoord(*Coordinate1007);

//from skullbase to r_eyelid_joint vertices 2
CColorRGBA* ColorRGBA1008 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1008->setUSE("HAnimSegmentLineColorRGBA");
LineSet1006->setColor(*ColorRGBA1008);

Shape1005->setGeometry(LineSet1006);

HAnimSegment997->addChildren(*Shape1005);

CShape* Shape1009 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1010 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1010->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1011 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1011->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0044,1.6209,0.0236});
LineSet1010->setCoord(*Coordinate1011);

//from skullbase to l_eyeball_joint vertices 2
CColorRGBA* ColorRGBA1012 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1012->setUSE("HAnimSegmentLineColorRGBA");
LineSet1010->setColor(*ColorRGBA1012);

Shape1009->setGeometry(LineSet1010);

HAnimSegment997->addChildren(*Shape1009);

CShape* Shape1013 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1014 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1014->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1015 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1015->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0044,1.6209,0.0236});
LineSet1014->setCoord(*Coordinate1015);

//from skullbase to r_eyeball_joint vertices 2
CColorRGBA* ColorRGBA1016 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1016->setUSE("HAnimSegmentLineColorRGBA");
LineSet1014->setColor(*ColorRGBA1016);

Shape1013->setGeometry(LineSet1014);

HAnimSegment997->addChildren(*Shape1013);

CShape* Shape1017 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1018 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1018->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1019 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1019->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0044,1.6209,0.0236});
LineSet1018->setCoord(*Coordinate1019);

//from skullbase to l_eyebrow_joint vertices 2
CColorRGBA* ColorRGBA1020 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1020->setUSE("HAnimSegmentLineColorRGBA");
LineSet1018->setColor(*ColorRGBA1020);

Shape1017->setGeometry(LineSet1018);

HAnimSegment997->addChildren(*Shape1017);

CShape* Shape1021 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1022 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1022->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1023 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1023->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0044,1.6209,0.0236});
LineSet1022->setCoord(*Coordinate1023);

//from skullbase to r_eyebrow_joint vertices 2
CColorRGBA* ColorRGBA1024 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1024->setUSE("HAnimSegmentLineColorRGBA");
LineSet1022->setColor(*ColorRGBA1024);

Shape1021->setGeometry(LineSet1022);

HAnimSegment997->addChildren(*Shape1021);

CShape* Shape1025 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1026 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1026->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1027 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1027->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0044,1.6209,0.0236});
LineSet1026->setCoord(*Coordinate1027);

//from skullbase to temporomandibular vertices 2
CColorRGBA* ColorRGBA1028 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1028->setUSE("HAnimSegmentLineColorRGBA");
LineSet1026->setColor(*ColorRGBA1028);

Shape1025->setGeometry(LineSet1026);

HAnimSegment997->addChildren(*Shape1025);

CHAnimSite* HAnimSite1029 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1029->setName("l_gonion_pt");
HAnimSite1029->setDEF("hanim_l_gonion_pt");
HAnimSite1029->setTranslation(new float[3]{0.0631,1.553,0.033});
CTouchSensor* TouchSensor1030 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1030->setDescription("HAnimSite l_gonion_pt");
HAnimSite1029->addChildren(*TouchSensor1030);

CShape* Shape1031 = (CShape *)(m_pScene.createNode("Shape"));
Shape1031->setUSE("HAnimSiteShape");
HAnimSite1029->addChildren(*Shape1031);

HAnimSegment997->addChildren(*HAnimSite1029);

CHAnimSite* HAnimSite1032 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1032->setName("menton_pt");
HAnimSite1032->setDEF("hanim_menton_pt");
CTouchSensor* TouchSensor1033 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1033->setDescription("HAnimSite menton_pt");
HAnimSite1032->addChildren(*TouchSensor1033);

CShape* Shape1034 = (CShape *)(m_pScene.createNode("Shape"));
Shape1034->setUSE("HAnimSiteShape");
HAnimSite1032->addChildren(*Shape1034);

HAnimSegment997->addChildren(*HAnimSite1032);

CHAnimSite* HAnimSite1035 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1035->setName("r_gonion_pt");
HAnimSite1035->setDEF("hanim_r_gonion_pt");
HAnimSite1035->setTranslation(new float[3]{-0.052,1.5529,0.0347});
CTouchSensor* TouchSensor1036 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1036->setDescription("HAnimSite r_gonion_pt");
HAnimSite1035->addChildren(*TouchSensor1036);

CShape* Shape1037 = (CShape *)(m_pScene.createNode("Shape"));
Shape1037->setUSE("HAnimSiteShape");
HAnimSite1035->addChildren(*Shape1037);

HAnimSegment997->addChildren(*HAnimSite1035);

CHAnimSite* HAnimSite1038 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1038->setName("supramenton_pt");
HAnimSite1038->setDEF("hanim_supramenton_pt");
HAnimSite1038->setTranslation(new float[3]{0.0061,1.541,0.0805});
CTouchSensor* TouchSensor1039 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1039->setDescription("HAnimSite supramenton_pt");
HAnimSite1038->addChildren(*TouchSensor1039);

CShape* Shape1040 = (CShape *)(m_pScene.createNode("Shape"));
Shape1040->setUSE("HAnimSiteShape");
HAnimSite1038->addChildren(*Shape1040);

HAnimSegment997->addChildren(*HAnimSite1038);

HAnimJoint996->addChildren(*HAnimSegment997);

CHAnimJoint* HAnimJoint1041 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1041->setName("l_eyelid_joint");
HAnimJoint1041->setDEF("hanim_l_eyelid_joint");
HAnimJoint1041->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1041->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint996->addChildren(*HAnimJoint1041);

CHAnimJoint* HAnimJoint1042 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1042->setName("r_eyelid_joint");
HAnimJoint1042->setDEF("hanim_r_eyelid_joint");
HAnimJoint1042->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1042->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint996->addChildren(*HAnimJoint1042);

CHAnimJoint* HAnimJoint1043 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1043->setName("l_eyeball_joint");
HAnimJoint1043->setDEF("hanim_l_eyeball_joint");
HAnimJoint1043->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1043->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint996->addChildren(*HAnimJoint1043);

CHAnimJoint* HAnimJoint1044 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1044->setName("r_eyeball_joint");
HAnimJoint1044->setDEF("hanim_r_eyeball_joint");
HAnimJoint1044->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1044->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint996->addChildren(*HAnimJoint1044);

CHAnimJoint* HAnimJoint1045 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1045->setName("l_eyebrow_joint");
HAnimJoint1045->setDEF("hanim_l_eyebrow_joint");
HAnimJoint1045->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1045->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint996->addChildren(*HAnimJoint1045);

CHAnimJoint* HAnimJoint1046 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1046->setName("r_eyebrow_joint");
HAnimJoint1046->setDEF("hanim_r_eyebrow_joint");
HAnimJoint1046->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1046->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint996->addChildren(*HAnimJoint1046);

CHAnimJoint* HAnimJoint1047 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1047->setName("temporomandibular");
HAnimJoint1047->setDEF("hanim_temporomandibular");
HAnimJoint1047->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1047->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint996->addChildren(*HAnimJoint1047);

HAnimJoint954->addChildren(*HAnimJoint996);

HAnimJoint945->addChildren(*HAnimJoint954);

HAnimJoint933->addChildren(*HAnimJoint945);

HAnimJoint924->addChildren(*HAnimJoint933);

HAnimJoint915->addChildren(*HAnimJoint924);

HAnimJoint906->addChildren(*HAnimJoint915);

HAnimJoint897->addChildren(*HAnimJoint906);

HAnimJoint844->addChildren(*HAnimJoint897);

CHAnimJoint* HAnimJoint1048 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1048->setName("l_sternoclavicular");
HAnimJoint1048->setDEF("hanim_l_sternoclavicular");
HAnimJoint1048->setCenter(new float[3]{0.082,1.4488,-0.0353});
HAnimJoint1048->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1048->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1049 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1049->setName("l_clavicle");
HAnimSegment1049->setDEF("hanim_l_clavicle");
CTransform* Transform1050 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1050->setTranslation(new float[3]{0.082,1.4488,-0.0353});
CTransform* Transform1051 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1052 = (CShape *)(m_pScene.createNode("Shape"));
Shape1052->setUSE("HAnimJointShape");
Transform1051->addChildren(*Shape1052);

Transform1050->addChildren(*Transform1051);

HAnimSegment1049->addChildren(*Transform1050);

CShape* Shape1053 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1054 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1054->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1055 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1055->setPoint(new float[6]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424});
LineSet1054->setCoord(*Coordinate1055);

//from l_sternoclavicular to l_acromioclavicular vertices 2
CColorRGBA* ColorRGBA1056 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1056->setUSE("HAnimSegmentLineColorRGBA");
LineSet1054->setColor(*ColorRGBA1056);

Shape1053->setGeometry(LineSet1054);

HAnimSegment1049->addChildren(*Shape1053);

HAnimJoint1048->addChildren(*HAnimSegment1049);

CHAnimJoint* HAnimJoint1057 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1057->setName("l_acromioclavicular");
HAnimJoint1057->setDEF("hanim_l_acromioclavicular");
HAnimJoint1057->setCenter(new float[3]{0.0962,1.4269,-0.0424});
HAnimJoint1057->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1057->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1058 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1058->setName("l_scapula");
HAnimSegment1058->setDEF("hanim_l_scapula");
CTransform* Transform1059 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1059->setTranslation(new float[3]{0.0962,1.4269,-0.0424});
CTransform* Transform1060 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1061 = (CShape *)(m_pScene.createNode("Shape"));
Shape1061->setUSE("HAnimJointShape");
Transform1060->addChildren(*Shape1061);

Transform1059->addChildren(*Transform1060);

HAnimSegment1058->addChildren(*Transform1059);

CShape* Shape1062 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1063 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1063->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1064 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1064->setPoint(new float[6]{0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387});
LineSet1063->setCoord(*Coordinate1064);

//from l_acromioclavicular to l_shoulder vertices 2
CColorRGBA* ColorRGBA1065 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1065->setUSE("HAnimSegmentLineColorRGBA");
LineSet1063->setColor(*ColorRGBA1065);

Shape1062->setGeometry(LineSet1063);

HAnimSegment1058->addChildren(*Shape1062);

CHAnimSite* HAnimSite1066 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1066->setName("l_bideltoid_pt");
HAnimSite1066->setDEF("hanim_l_bideltoid_pt");
CTouchSensor* TouchSensor1067 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1067->setDescription("HAnimSite l_bideltoid_pt");
HAnimSite1066->addChildren(*TouchSensor1067);

CShape* Shape1068 = (CShape *)(m_pScene.createNode("Shape"));
Shape1068->setUSE("HAnimSiteShape");
HAnimSite1066->addChildren(*Shape1068);

HAnimSegment1058->addChildren(*HAnimSite1066);

CHAnimSite* HAnimSite1069 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1069->setName("l_humeral_lateral_epicondyles_pt");
HAnimSite1069->setDEF("hanim_l_humeral_lateral_epicondyles_pt");
HAnimSite1069->setTranslation(new float[3]{0.228,1.1482,-0.11});
CTouchSensor* TouchSensor1070 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1070->setDescription("HAnimSite l_humeral_lateral_epicondyles_pt");
HAnimSite1069->addChildren(*TouchSensor1070);

CShape* Shape1071 = (CShape *)(m_pScene.createNode("Shape"));
Shape1071->setUSE("HAnimSiteShape");
HAnimSite1069->addChildren(*Shape1071);

HAnimSegment1058->addChildren(*HAnimSite1069);

HAnimJoint1057->addChildren(*HAnimSegment1058);

CHAnimJoint* HAnimJoint1072 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1072->setName("l_shoulder");
HAnimJoint1072->setDEF("hanim_l_shoulder");
HAnimJoint1072->setCenter(new float[3]{0.2029,1.4376,-0.0387});
HAnimJoint1072->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1072->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1073 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1073->setName("l_upperarm");
HAnimSegment1073->setDEF("hanim_l_upperarm");
CTransform* Transform1074 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1074->setTranslation(new float[3]{0.2029,1.4376,-0.0387});
CTransform* Transform1075 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1076 = (CShape *)(m_pScene.createNode("Shape"));
Shape1076->setUSE("HAnimJointShape");
Transform1075->addChildren(*Shape1076);

Transform1074->addChildren(*Transform1075);

HAnimSegment1073->addChildren(*Transform1074);

CShape* Shape1077 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1078 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1078->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1079 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1079->setPoint(new float[6]{0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682});
LineSet1078->setCoord(*Coordinate1079);

//from l_shoulder to l_elbow vertices 2
CColorRGBA* ColorRGBA1080 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1080->setUSE("HAnimSegmentLineColorRGBA");
LineSet1078->setColor(*ColorRGBA1080);

Shape1077->setGeometry(LineSet1078);

HAnimSegment1073->addChildren(*Shape1077);

CHAnimSite* HAnimSite1081 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1081->setName("l_humeral_medial_epicondyles_pt");
HAnimSite1081->setDEF("hanim_l_humeral_medial_epicondyles_pt");
HAnimSite1081->setTranslation(new float[3]{0.1735,1.1272,-0.1113});
CTouchSensor* TouchSensor1082 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1082->setDescription("HAnimSite l_humeral_medial_epicondyles_pt");
HAnimSite1081->addChildren(*TouchSensor1082);

CShape* Shape1083 = (CShape *)(m_pScene.createNode("Shape"));
Shape1083->setUSE("HAnimSiteShape");
HAnimSite1081->addChildren(*Shape1083);

HAnimSegment1073->addChildren(*HAnimSite1081);

CHAnimSite* HAnimSite1084 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1084->setName("l_olecranon_pt");
HAnimSite1084->setDEF("hanim_l_olecranon_pt");
HAnimSite1084->setTranslation(new float[3]{-0.1962,1.1375,-0.1123});
CTouchSensor* TouchSensor1085 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1085->setDescription("HAnimSite l_olecranon_pt");
HAnimSite1084->addChildren(*TouchSensor1085);

CShape* Shape1086 = (CShape *)(m_pScene.createNode("Shape"));
Shape1086->setUSE("HAnimSiteShape");
HAnimSite1084->addChildren(*Shape1086);

HAnimSegment1073->addChildren(*HAnimSite1084);

CHAnimSite* HAnimSite1087 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1087->setName("l_radial_styloid_pt");
HAnimSite1087->setDEF("hanim_l_radial_styloid_pt");
HAnimSite1087->setTranslation(new float[3]{0.1901,0.8645,-0.0415});
CTouchSensor* TouchSensor1088 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1088->setDescription("HAnimSite l_radial_styloid_pt");
HAnimSite1087->addChildren(*TouchSensor1088);

CShape* Shape1089 = (CShape *)(m_pScene.createNode("Shape"));
Shape1089->setUSE("HAnimSiteShape");
HAnimSite1087->addChildren(*Shape1089);

HAnimSegment1073->addChildren(*HAnimSite1087);

CHAnimSite* HAnimSite1090 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1090->setName("l_radiale_pt");
HAnimSite1090->setDEF("hanim_l_radiale_pt");
HAnimSite1090->setTranslation(new float[3]{0.2182,1.1212,-0.1167});
CTouchSensor* TouchSensor1091 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1091->setDescription("HAnimSite l_radiale_pt");
HAnimSite1090->addChildren(*TouchSensor1091);

CShape* Shape1092 = (CShape *)(m_pScene.createNode("Shape"));
Shape1092->setUSE("HAnimSiteShape");
HAnimSite1090->addChildren(*Shape1092);

HAnimSegment1073->addChildren(*HAnimSite1090);

HAnimJoint1072->addChildren(*HAnimSegment1073);

CHAnimJoint* HAnimJoint1093 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1093->setName("l_elbow");
HAnimJoint1093->setDEF("hanim_l_elbow");
HAnimJoint1093->setCenter(new float[3]{0.2014,1.1357,-0.0682});
HAnimJoint1093->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1093->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1094 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1094->setName("l_forearm");
HAnimSegment1094->setDEF("hanim_l_forearm");
CTransform* Transform1095 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1095->setTranslation(new float[3]{0.2014,1.1357,-0.0682});
CTransform* Transform1096 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1097 = (CShape *)(m_pScene.createNode("Shape"));
Shape1097->setUSE("HAnimJointShape");
Transform1096->addChildren(*Shape1097);

Transform1095->addChildren(*Transform1096);

HAnimSegment1094->addChildren(*Transform1095);

CShape* Shape1098 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1099 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1099->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1100 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1100->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583});
LineSet1099->setCoord(*Coordinate1100);

//from l_elbow to l_radiocarpal vertices 2
CColorRGBA* ColorRGBA1101 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1101->setUSE("HAnimSegmentLineColorRGBA");
LineSet1099->setColor(*ColorRGBA1101);

Shape1098->setGeometry(LineSet1099);

HAnimSegment1094->addChildren(*Shape1098);

CHAnimSite* HAnimSite1102 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1102->setName("l_ulnar_styloid_pt");
HAnimSite1102->setDEF("hanim_l_ulnar_styloid_pt");
HAnimSite1102->setTranslation(new float[3]{-0.2142,0.8529,-0.0648});
CTouchSensor* TouchSensor1103 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1103->setDescription("HAnimSite l_ulnar_styloid_pt");
HAnimSite1102->addChildren(*TouchSensor1103);

CShape* Shape1104 = (CShape *)(m_pScene.createNode("Shape"));
Shape1104->setUSE("HAnimSiteShape");
HAnimSite1102->addChildren(*Shape1104);

HAnimSegment1094->addChildren(*HAnimSite1102);

HAnimJoint1093->addChildren(*HAnimSegment1094);

CHAnimJoint* HAnimJoint1105 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1105->setName("l_radiocarpal");
HAnimJoint1105->setDEF("hanim_l_radiocarpal");
HAnimJoint1105->setCenter(new float[3]{0.1984,0.8663,-0.0583});
HAnimJoint1105->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1105->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1106 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1106->setName("l_carpal");
HAnimSegment1106->setDEF("hanim_l_carpal");
CTransform* Transform1107 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1107->setScale(new float[3]{0.2,0.2,0.2});
Transform1107->setTranslation(new float[3]{0.2,0.85,-0.05});
Transform1107->setRotation(new float[4]{0,0,1,-3.14});
//Transform left hand
CTransform* Transform1108 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1108->setRotation(new float[4]{0,1,0,-1.57});
//Transform left hand
CShape* Shape1109 = (CShape *)(m_pScene.createNode("Shape"));
Shape1109->setUSE("HAnimJointShape");
Transform1108->addChildren(*Shape1109);

Transform1107->addChildren(*Transform1108);

HAnimSegment1106->addChildren(*Transform1107);

CShape* Shape1110 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1111 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1111->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1112 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1112->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1984,0.8663,-0.0583});
LineSet1111->setCoord(*Coordinate1112);

//from l_radiocarpal to l_midcarpal_1 vertices 2
CColorRGBA* ColorRGBA1113 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1113->setUSE("HAnimSegmentLineColorRGBA");
LineSet1111->setColor(*ColorRGBA1113);

Shape1110->setGeometry(LineSet1111);

HAnimSegment1106->addChildren(*Shape1110);

CShape* Shape1114 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1115 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1115->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1116 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1116->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1984,0.8663,-0.0583});
LineSet1115->setCoord(*Coordinate1116);

//from l_radiocarpal to l_midcarpal_2 vertices 2
CColorRGBA* ColorRGBA1117 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1117->setUSE("HAnimSegmentLineColorRGBA");
LineSet1115->setColor(*ColorRGBA1117);

Shape1114->setGeometry(LineSet1115);

HAnimSegment1106->addChildren(*Shape1114);

CShape* Shape1118 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1119 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1119->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1120 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1120->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1984,0.8663,-0.0583});
LineSet1119->setCoord(*Coordinate1120);

//from l_radiocarpal to l_midcarpal_3 vertices 2
CColorRGBA* ColorRGBA1121 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1121->setUSE("HAnimSegmentLineColorRGBA");
LineSet1119->setColor(*ColorRGBA1121);

Shape1118->setGeometry(LineSet1119);

HAnimSegment1106->addChildren(*Shape1118);

CShape* Shape1122 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1123 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1123->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1124 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1124->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1984,0.8663,-0.0583});
LineSet1123->setCoord(*Coordinate1124);

//from l_radiocarpal to l_midcarpal_4_5 vertices 2
CColorRGBA* ColorRGBA1125 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1125->setUSE("HAnimSegmentLineColorRGBA");
LineSet1123->setColor(*ColorRGBA1125);

Shape1122->setGeometry(LineSet1123);

HAnimSegment1106->addChildren(*Shape1122);

HAnimJoint1105->addChildren(*HAnimSegment1106);

CHAnimJoint* HAnimJoint1126 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1126->setName("l_midcarpal_1");
HAnimJoint1126->setDEF("hanim_l_midcarpal_1");
HAnimJoint1126->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1126->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1127 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1127->setName("l_trapezium");
HAnimSegment1127->setDEF("hanim_l_trapezium");
CTransform* Transform1128 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1128->setTranslation(new float[3]{0.1984,0.8663,-0.0583});
CTransform* Transform1129 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1130 = (CShape *)(m_pScene.createNode("Shape"));
Shape1130->setUSE("HAnimJointShape");
Transform1129->addChildren(*Shape1130);

Transform1128->addChildren(*Transform1129);

HAnimSegment1127->addChildren(*Transform1128);

CShape* Shape1131 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1132 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1132->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1133 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1133->setPoint(new float[3]{0.1924,0.8472,-0.0534});
LineSet1132->setCoord(*Coordinate1133);

//from l_midcarpal_1 to l_carpometacarpal_1 vertices 1
CColorRGBA* ColorRGBA1134 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1134->setUSE("HAnimSegmentLineColorRGBA");
LineSet1132->setColor(*ColorRGBA1134);

Shape1131->setGeometry(LineSet1132);

HAnimSegment1127->addChildren(*Shape1131);

HAnimJoint1126->addChildren(*HAnimSegment1127);

CHAnimJoint* HAnimJoint1135 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1135->setName("l_carpometacarpal_1");
HAnimJoint1135->setDEF("hanim_l_carpometacarpal_1");
HAnimJoint1135->setCenter(new float[3]{0.1924,0.8472,-0.0534});
HAnimJoint1135->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1135->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1136 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1136->setName("l_metacarpal_1");
HAnimSegment1136->setDEF("hanim_l_metacarpal_1");
CTransform* Transform1137 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1137->setTranslation(new float[3]{0.1924,0.8472,-0.0534});
CTransform* Transform1138 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1139 = (CShape *)(m_pScene.createNode("Shape"));
Shape1139->setUSE("HAnimJointShape");
Transform1138->addChildren(*Shape1139);

Transform1137->addChildren(*Transform1138);

HAnimSegment1136->addChildren(*Transform1137);

CShape* Shape1140 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1141 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1141->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1142 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1142->setPoint(new float[6]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246});
LineSet1141->setCoord(*Coordinate1142);

//from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
CColorRGBA* ColorRGBA1143 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1143->setUSE("HAnimSegmentLineColorRGBA");
LineSet1141->setColor(*ColorRGBA1143);

Shape1140->setGeometry(LineSet1141);

HAnimSegment1136->addChildren(*Shape1140);

HAnimJoint1135->addChildren(*HAnimSegment1136);

CHAnimJoint* HAnimJoint1144 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1144->setName("l_metacarpophalangeal_1");
HAnimJoint1144->setDEF("hanim_l_metacarpophalangeal_1");
HAnimJoint1144->setCenter(new float[3]{0.1951,0.8226,0.0246});
HAnimJoint1144->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1144->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1145 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1145->setName("l_carpal_proximal_phalanx_1");
HAnimSegment1145->setDEF("hanim_l_carpal_proximal_phalanx_1");
CTransform* Transform1146 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1146->setTranslation(new float[3]{0.1951,0.8226,0.0246});
CTransform* Transform1147 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1148 = (CShape *)(m_pScene.createNode("Shape"));
Shape1148->setUSE("HAnimJointShape");
Transform1147->addChildren(*Shape1148);

Transform1146->addChildren(*Transform1147);

HAnimSegment1145->addChildren(*Transform1146);

CShape* Shape1149 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1150 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1150->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1151 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1151->setPoint(new float[6]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464});
LineSet1150->setCoord(*Coordinate1151);

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
CColorRGBA* ColorRGBA1152 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1152->setUSE("HAnimSegmentLineColorRGBA");
LineSet1150->setColor(*ColorRGBA1152);

Shape1149->setGeometry(LineSet1150);

HAnimSegment1145->addChildren(*Shape1149);

CHAnimSite* HAnimSite1153 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1153->setName("l_carpal_distal_phalanx_1_tip");
HAnimSite1153->setDEF("hanim_l_carpal_distal_phalanx_1_tip");
CTouchSensor* TouchSensor1154 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1154->setDescription("HAnimSite l_carpal_distal_phalanx_1_tip");
HAnimSite1153->addChildren(*TouchSensor1154);

CShape* Shape1155 = (CShape *)(m_pScene.createNode("Shape"));
Shape1155->setUSE("HAnimSiteShape");
HAnimSite1153->addChildren(*Shape1155);

HAnimSegment1145->addChildren(*HAnimSite1153);

HAnimJoint1144->addChildren(*HAnimSegment1145);

CHAnimJoint* HAnimJoint1156 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1156->setName("l_carpal_interphalangeal_1");
HAnimJoint1156->setDEF("hanim_l_carpal_interphalangeal_1");
HAnimJoint1156->setCenter(new float[3]{0.1955,0.8159,0.0464});
HAnimJoint1156->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1156->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1144->addChildren(*HAnimJoint1156);

HAnimJoint1135->addChildren(*HAnimJoint1144);

HAnimJoint1126->addChildren(*HAnimJoint1135);

HAnimJoint1105->addChildren(*HAnimJoint1126);

CHAnimJoint* HAnimJoint1157 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1157->setName("l_midcarpal_2");
HAnimJoint1157->setDEF("hanim_l_midcarpal_2");
HAnimJoint1157->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1157->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1158 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1158->setName("l_trapezoid");
HAnimSegment1158->setDEF("hanim_l_trapezoid");
CTransform* Transform1159 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1159->setTranslation(new float[3]{0.1955,0.8159,0.0464});
CTransform* Transform1160 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1161 = (CShape *)(m_pScene.createNode("Shape"));
Shape1161->setUSE("HAnimJointShape");
Transform1160->addChildren(*Shape1161);

Transform1159->addChildren(*Transform1160);

HAnimSegment1158->addChildren(*Transform1159);

CShape* Shape1162 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1163 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1163->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1164 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1164->setPoint(new float[3]{0.1983,0.8024,-0.028});
LineSet1163->setCoord(*Coordinate1164);

//from l_midcarpal_2 to l_carpometacarpal_2 vertices 1
CColorRGBA* ColorRGBA1165 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1165->setUSE("HAnimSegmentLineColorRGBA");
LineSet1163->setColor(*ColorRGBA1165);

Shape1162->setGeometry(LineSet1163);

HAnimSegment1158->addChildren(*Shape1162);

CHAnimSite* HAnimSite1166 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1166->setName("l_metacarpal_phalanx_2_pt");
HAnimSite1166->setDEF("hanim_l_metacarpal_phalanx_2_pt");
HAnimSite1166->setTranslation(new float[3]{0.2009,0.8139,-0.0237});
CTouchSensor* TouchSensor1167 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1167->setDescription("HAnimSite l_metacarpal_phalanx_2_pt");
HAnimSite1166->addChildren(*TouchSensor1167);

CShape* Shape1168 = (CShape *)(m_pScene.createNode("Shape"));
Shape1168->setUSE("HAnimSiteShape");
HAnimSite1166->addChildren(*Shape1168);

HAnimSegment1158->addChildren(*HAnimSite1166);

HAnimJoint1157->addChildren(*HAnimSegment1158);

CHAnimJoint* HAnimJoint1169 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1169->setName("l_carpometacarpal_2");
HAnimJoint1169->setDEF("hanim_l_carpometacarpal_2");
HAnimJoint1169->setCenter(new float[3]{0.1983,0.8024,-0.028});
HAnimJoint1169->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1169->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1170 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1170->setName("l_metacarpal_2");
HAnimSegment1170->setDEF("hanim_l_metacarpal_2");
CTransform* Transform1171 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1171->setTranslation(new float[3]{0.1983,0.8024,-0.028});
CTransform* Transform1172 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1173 = (CShape *)(m_pScene.createNode("Shape"));
Shape1173->setUSE("HAnimJointShape");
Transform1172->addChildren(*Shape1173);

Transform1171->addChildren(*Transform1172);

HAnimSegment1170->addChildren(*Transform1171);

CShape* Shape1174 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1175 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1175->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1176 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1176->setPoint(new float[6]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028});
LineSet1175->setCoord(*Coordinate1176);

//from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
CColorRGBA* ColorRGBA1177 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1177->setUSE("HAnimSegmentLineColorRGBA");
LineSet1175->setColor(*ColorRGBA1177);

Shape1174->setGeometry(LineSet1175);

HAnimSegment1170->addChildren(*Shape1174);

HAnimJoint1169->addChildren(*HAnimSegment1170);

CHAnimJoint* HAnimJoint1178 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1178->setName("l_metacarpophalangeal_2");
HAnimJoint1178->setDEF("hanim_l_metacarpophalangeal_2");
HAnimJoint1178->setCenter(new float[3]{0.1983,0.7815,-0.028});
HAnimJoint1178->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1178->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1179 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1179->setName("l_carpal_proximal_phalanx_2");
HAnimSegment1179->setDEF("hanim_l_carpal_proximal_phalanx_2");
CTransform* Transform1180 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1180->setTranslation(new float[3]{0.1983,0.7815,-0.028});
CTransform* Transform1181 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1182 = (CShape *)(m_pScene.createNode("Shape"));
Shape1182->setUSE("HAnimJointShape");
Transform1181->addChildren(*Shape1182);

Transform1180->addChildren(*Transform1181);

HAnimSegment1179->addChildren(*Transform1180);

CShape* Shape1183 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1184 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1184->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1185 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1185->setPoint(new float[6]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248});
LineSet1184->setCoord(*Coordinate1185);

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA1186 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1186->setUSE("HAnimSegmentLineColorRGBA");
LineSet1184->setColor(*ColorRGBA1186);

Shape1183->setGeometry(LineSet1184);

HAnimSegment1179->addChildren(*Shape1183);

HAnimJoint1178->addChildren(*HAnimSegment1179);

CHAnimJoint* HAnimJoint1187 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1187->setName("l_carpal_proximal_interphalangeal_2");
HAnimJoint1187->setDEF("hanim_l_carpal_proximal_interphalangeal_2");
HAnimJoint1187->setCenter(new float[3]{0.2017,0.7363,-0.0248});
HAnimJoint1187->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1187->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1188 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1188->setName("l_carpal_middle_phalanx_2");
HAnimSegment1188->setDEF("hanim_l_carpal_middle_phalanx_2");
CTransform* Transform1189 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1189->setTranslation(new float[3]{0.2017,0.7363,-0.0248});
CTransform* Transform1190 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1191 = (CShape *)(m_pScene.createNode("Shape"));
Shape1191->setUSE("HAnimJointShape");
Transform1190->addChildren(*Shape1191);

Transform1189->addChildren(*Transform1190);

HAnimSegment1188->addChildren(*Transform1189);

CShape* Shape1192 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1193 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1193->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1194 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1194->setPoint(new float[6]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236});
LineSet1193->setCoord(*Coordinate1194);

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA1195 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1195->setUSE("HAnimSegmentLineColorRGBA");
LineSet1193->setColor(*ColorRGBA1195);

Shape1192->setGeometry(LineSet1193);

HAnimSegment1188->addChildren(*Shape1192);

CHAnimSite* HAnimSite1196 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1196->setName("l_carpal_distal_phalanx_2_tip");
HAnimSite1196->setDEF("hanim_l_carpal_distal_phalanx_2_tip");
CTouchSensor* TouchSensor1197 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1197->setDescription("HAnimSite l_carpal_distal_phalanx_2_tip");
HAnimSite1196->addChildren(*TouchSensor1197);

CShape* Shape1198 = (CShape *)(m_pScene.createNode("Shape"));
Shape1198->setUSE("HAnimSiteShape");
HAnimSite1196->addChildren(*Shape1198);

HAnimSegment1188->addChildren(*HAnimSite1196);

CHAnimSite* HAnimSite1199 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1199->setName("l_dactylion_pt");
HAnimSite1199->setDEF("hanim_l_dactylion_pt");
HAnimSite1199->setTranslation(new float[3]{0.2056,0.6743,-0.0482});
CTouchSensor* TouchSensor1200 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1200->setDescription("HAnimSite l_dactylion_pt");
HAnimSite1199->addChildren(*TouchSensor1200);

CShape* Shape1201 = (CShape *)(m_pScene.createNode("Shape"));
Shape1201->setUSE("HAnimSiteShape");
HAnimSite1199->addChildren(*Shape1201);

HAnimSegment1188->addChildren(*HAnimSite1199);

HAnimJoint1187->addChildren(*HAnimSegment1188);

CHAnimJoint* HAnimJoint1202 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1202->setName("l_carpal_distal_interphalangeal_2");
HAnimJoint1202->setDEF("hanim_l_carpal_distal_interphalangeal_2");
HAnimJoint1202->setCenter(new float[3]{0.2028,0.7139,-0.0236});
HAnimJoint1202->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1202->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1187->addChildren(*HAnimJoint1202);

HAnimJoint1178->addChildren(*HAnimJoint1187);

HAnimJoint1169->addChildren(*HAnimJoint1178);

HAnimJoint1157->addChildren(*HAnimJoint1169);

HAnimJoint1105->addChildren(*HAnimJoint1157);

CHAnimJoint* HAnimJoint1203 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1203->setName("l_midcarpal_3");
HAnimJoint1203->setDEF("hanim_l_midcarpal_3");
HAnimJoint1203->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1203->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1204 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1204->setName("l_capitate");
HAnimSegment1204->setDEF("hanim_l_capitate");
CTransform* Transform1205 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1205->setTranslation(new float[3]{0.2028,0.7139,-0.0236});
CTransform* Transform1206 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1207 = (CShape *)(m_pScene.createNode("Shape"));
Shape1207->setUSE("HAnimJointShape");
Transform1206->addChildren(*Shape1207);

Transform1205->addChildren(*Transform1206);

HAnimSegment1204->addChildren(*Transform1205);

CShape* Shape1208 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1209 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1209->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1210 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1210->setPoint(new float[3]{0.1987,0.8029,-0.053});
LineSet1209->setCoord(*Coordinate1210);

//from l_midcarpal_3 to l_carpometacarpal_3 vertices 1
CColorRGBA* ColorRGBA1211 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1211->setUSE("HAnimSegmentLineColorRGBA");
LineSet1209->setColor(*ColorRGBA1211);

Shape1208->setGeometry(LineSet1209);

HAnimSegment1204->addChildren(*Shape1208);

CHAnimSite* HAnimSite1212 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1212->setName("l_metacarpal_phalanx_3_pt");
HAnimSite1212->setDEF("hanim_l_metacarpal_phalanx_3_pt");
CTouchSensor* TouchSensor1213 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1213->setDescription("HAnimSite l_metacarpal_phalanx_3_pt");
HAnimSite1212->addChildren(*TouchSensor1213);

CShape* Shape1214 = (CShape *)(m_pScene.createNode("Shape"));
Shape1214->setUSE("HAnimSiteShape");
HAnimSite1212->addChildren(*Shape1214);

HAnimSegment1204->addChildren(*HAnimSite1212);

HAnimJoint1203->addChildren(*HAnimSegment1204);

CHAnimJoint* HAnimJoint1215 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1215->setName("l_carpometacarpal_3");
HAnimJoint1215->setDEF("hanim_l_carpometacarpal_3");
HAnimJoint1215->setCenter(new float[3]{0.1987,0.8029,-0.053});
HAnimJoint1215->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1215->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1216 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1216->setName("l_metacarpal_3");
HAnimSegment1216->setDEF("hanim_l_metacarpal_3");
CTransform* Transform1217 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1217->setTranslation(new float[3]{0.1987,0.8029,-0.053});
CTransform* Transform1218 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1219 = (CShape *)(m_pScene.createNode("Shape"));
Shape1219->setUSE("HAnimJointShape");
Transform1218->addChildren(*Shape1219);

Transform1217->addChildren(*Transform1218);

HAnimSegment1216->addChildren(*Transform1217);

CShape* Shape1220 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1221 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1221->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1222 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1222->setPoint(new float[6]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053});
LineSet1221->setCoord(*Coordinate1222);

//from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
CColorRGBA* ColorRGBA1223 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1223->setUSE("HAnimSegmentLineColorRGBA");
LineSet1221->setColor(*ColorRGBA1223);

Shape1220->setGeometry(LineSet1221);

HAnimSegment1216->addChildren(*Shape1220);

HAnimJoint1215->addChildren(*HAnimSegment1216);

CHAnimJoint* HAnimJoint1224 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1224->setName("l_metacarpophalangeal_3");
HAnimJoint1224->setDEF("hanim_l_metacarpophalangeal_3");
HAnimJoint1224->setCenter(new float[3]{0.1987,0.7818,-0.053});
HAnimJoint1224->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1224->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1225 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1225->setName("l_carpal_proximal_phalanx_3");
HAnimSegment1225->setDEF("hanim_l_carpal_proximal_phalanx_3");
CTransform* Transform1226 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1226->setTranslation(new float[3]{0.1987,0.7818,-0.053});
CTransform* Transform1227 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1228 = (CShape *)(m_pScene.createNode("Shape"));
Shape1228->setUSE("HAnimJointShape");
Transform1227->addChildren(*Shape1228);

Transform1226->addChildren(*Transform1227);

HAnimSegment1225->addChildren(*Transform1226);

CShape* Shape1229 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1230 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1230->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1231 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1231->setPoint(new float[6]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503});
LineSet1230->setCoord(*Coordinate1231);

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA1232 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1232->setUSE("HAnimSegmentLineColorRGBA");
LineSet1230->setColor(*ColorRGBA1232);

Shape1229->setGeometry(LineSet1230);

HAnimSegment1225->addChildren(*Shape1229);

HAnimJoint1224->addChildren(*HAnimSegment1225);

CHAnimJoint* HAnimJoint1233 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1233->setName("l_carpal_proximal_interphalangeal_3");
HAnimJoint1233->setDEF("hanim_l_carpal_proximal_interphalangeal_3");
HAnimJoint1233->setCenter(new float[3]{0.2013,0.7273,-0.0503});
HAnimJoint1233->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1233->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1234 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1234->setName("l_carpal_middle_phalanx_3");
HAnimSegment1234->setDEF("hanim_l_carpal_middle_phalanx_3");
CTransform* Transform1235 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1235->setTranslation(new float[3]{0.2013,0.7273,-0.0503});
CTransform* Transform1236 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1237 = (CShape *)(m_pScene.createNode("Shape"));
Shape1237->setUSE("HAnimJointShape");
Transform1236->addChildren(*Shape1237);

Transform1235->addChildren(*Transform1236);

HAnimSegment1234->addChildren(*Transform1235);

CShape* Shape1238 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1239 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1239->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1240 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1240->setPoint(new float[6]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494});
LineSet1239->setCoord(*Coordinate1240);

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA1241 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1241->setUSE("HAnimSegmentLineColorRGBA");
LineSet1239->setColor(*ColorRGBA1241);

Shape1238->setGeometry(LineSet1239);

HAnimSegment1234->addChildren(*Shape1238);

CHAnimSite* HAnimSite1242 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1242->setName("l_carpal_distal_phalanx_3_tip");
HAnimSite1242->setDEF("hanim_l_carpal_distal_phalanx_3_tip");
CTouchSensor* TouchSensor1243 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1243->setDescription("HAnimSite l_carpal_distal_phalanx_3_tip");
HAnimSite1242->addChildren(*TouchSensor1243);

CShape* Shape1244 = (CShape *)(m_pScene.createNode("Shape"));
Shape1244->setUSE("HAnimSiteShape");
HAnimSite1242->addChildren(*Shape1244);

HAnimSegment1234->addChildren(*HAnimSite1242);

HAnimJoint1233->addChildren(*HAnimSegment1234);

CHAnimJoint* HAnimJoint1245 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1245->setName("l_carpal_distal_interphalangeal_3");
HAnimJoint1245->setDEF("hanim_l_carpal_distal_interphalangeal_3");
HAnimJoint1245->setCenter(new float[3]{0.2026,0.7011,-0.0494});
HAnimJoint1245->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1245->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1233->addChildren(*HAnimJoint1245);

HAnimJoint1224->addChildren(*HAnimJoint1233);

HAnimJoint1215->addChildren(*HAnimJoint1224);

HAnimJoint1203->addChildren(*HAnimJoint1215);

HAnimJoint1105->addChildren(*HAnimJoint1203);

CHAnimJoint* HAnimJoint1246 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1246->setName("l_midcarpal_4_5");
HAnimJoint1246->setDEF("hanim_l_midcarpal_4_5");
HAnimJoint1246->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1246->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1247 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1247->setName("l_hamate");
HAnimSegment1247->setDEF("hanim_l_hamate");
CTransform* Transform1248 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1248->setTranslation(new float[3]{0.2026,0.7011,-0.0494});
CTransform* Transform1249 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1250 = (CShape *)(m_pScene.createNode("Shape"));
Shape1250->setUSE("HAnimJointShape");
Transform1249->addChildren(*Shape1250);

Transform1248->addChildren(*Transform1249);

HAnimSegment1247->addChildren(*Transform1248);

CShape* Shape1251 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1252 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1252->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1253 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1253->setPoint(new float[3]{0.1956,0.8019,-0.0794});
LineSet1252->setCoord(*Coordinate1253);

//from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 1
CColorRGBA* ColorRGBA1254 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1254->setUSE("HAnimSegmentLineColorRGBA");
LineSet1252->setColor(*ColorRGBA1254);

Shape1251->setGeometry(LineSet1252);

HAnimSegment1247->addChildren(*Shape1251);

CShape* Shape1255 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1256 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1256->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1257 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1257->setPoint(new float[3]{0.1925,0.8066,-0.1036});
LineSet1256->setCoord(*Coordinate1257);

//from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 1
CColorRGBA* ColorRGBA1258 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1258->setUSE("HAnimSegmentLineColorRGBA");
LineSet1256->setColor(*ColorRGBA1258);

Shape1255->setGeometry(LineSet1256);

HAnimSegment1247->addChildren(*Shape1255);

CHAnimSite* HAnimSite1259 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1259->setName("l_metacarpal_phalanx_5_pt");
HAnimSite1259->setDEF("hanim_l_metacarpal_phalanx_5_pt");
HAnimSite1259->setTranslation(new float[3]{0.1929,0.786,-0.1122});
CTouchSensor* TouchSensor1260 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1260->setDescription("HAnimSite l_metacarpal_phalanx_5_pt");
HAnimSite1259->addChildren(*TouchSensor1260);

CShape* Shape1261 = (CShape *)(m_pScene.createNode("Shape"));
Shape1261->setUSE("HAnimSiteShape");
HAnimSite1259->addChildren(*Shape1261);

HAnimSegment1247->addChildren(*HAnimSite1259);

HAnimJoint1246->addChildren(*HAnimSegment1247);

CHAnimJoint* HAnimJoint1262 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1262->setName("l_carpometacarpal_4");
HAnimJoint1262->setDEF("hanim_l_carpometacarpal_4");
HAnimJoint1262->setCenter(new float[3]{0.1956,0.8019,-0.0794});
HAnimJoint1262->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1262->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1263 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1263->setName("l_metacarpal_4");
HAnimSegment1263->setDEF("hanim_l_metacarpal_4");
CTransform* Transform1264 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1264->setTranslation(new float[3]{0.1956,0.8019,-0.0794});
CTransform* Transform1265 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1266 = (CShape *)(m_pScene.createNode("Shape"));
Shape1266->setUSE("HAnimJointShape");
Transform1265->addChildren(*Shape1266);

Transform1264->addChildren(*Transform1265);

HAnimSegment1263->addChildren(*Transform1264);

CShape* Shape1267 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1268 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1268->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1269 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1269->setPoint(new float[6]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794});
LineSet1268->setCoord(*Coordinate1269);

//from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
CColorRGBA* ColorRGBA1270 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1270->setUSE("HAnimSegmentLineColorRGBA");
LineSet1268->setColor(*ColorRGBA1270);

Shape1267->setGeometry(LineSet1268);

HAnimSegment1263->addChildren(*Shape1267);

HAnimJoint1262->addChildren(*HAnimSegment1263);

CHAnimJoint* HAnimJoint1271 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1271->setName("l_metacarpophalangeal_4");
HAnimJoint1271->setDEF("hanim_l_metacarpophalangeal_4");
HAnimJoint1271->setCenter(new float[3]{0.1956,0.7815,-0.0794});
HAnimJoint1271->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1271->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1272 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1272->setName("l_carpal_proximal_phalanx_4");
HAnimSegment1272->setDEF("hanim_l_carpal_proximal_phalanx_4");
CTransform* Transform1273 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1273->setTranslation(new float[3]{0.1956,0.7815,-0.0794});
CTransform* Transform1274 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1275 = (CShape *)(m_pScene.createNode("Shape"));
Shape1275->setUSE("HAnimJointShape");
Transform1274->addChildren(*Shape1275);

Transform1273->addChildren(*Transform1274);

HAnimSegment1272->addChildren(*Transform1273);

CShape* Shape1276 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1277 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1277->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1278 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1278->setPoint(new float[6]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777});
LineSet1277->setCoord(*Coordinate1278);

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA1279 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1279->setUSE("HAnimSegmentLineColorRGBA");
LineSet1277->setColor(*ColorRGBA1279);

Shape1276->setGeometry(LineSet1277);

HAnimSegment1272->addChildren(*Shape1276);

HAnimJoint1271->addChildren(*HAnimSegment1272);

CHAnimJoint* HAnimJoint1280 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1280->setName("l_carpal_proximal_interphalangeal_4");
HAnimJoint1280->setDEF("hanim_l_carpal_proximal_interphalangeal_4");
HAnimJoint1280->setCenter(new float[3]{0.1973,0.7287,-0.0777});
HAnimJoint1280->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1280->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1281 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1281->setName("l_carpal_middle_phalanx_4");
HAnimSegment1281->setDEF("hanim_l_carpal_middle_phalanx_4");
CTransform* Transform1282 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1282->setTranslation(new float[3]{0.1973,0.7287,-0.0777});
CTransform* Transform1283 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1284 = (CShape *)(m_pScene.createNode("Shape"));
Shape1284->setUSE("HAnimJointShape");
Transform1283->addChildren(*Shape1284);

Transform1282->addChildren(*Transform1283);

HAnimSegment1281->addChildren(*Transform1282);

CShape* Shape1285 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1286 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1286->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1287 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1287->setPoint(new float[6]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767});
LineSet1286->setCoord(*Coordinate1287);

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA1288 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1288->setUSE("HAnimSegmentLineColorRGBA");
LineSet1286->setColor(*ColorRGBA1288);

Shape1285->setGeometry(LineSet1286);

HAnimSegment1281->addChildren(*Shape1285);

CHAnimSite* HAnimSite1289 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1289->setName("l_carpal_distal_phalanx_4_tip");
HAnimSite1289->setDEF("hanim_l_carpal_distal_phalanx_4_tip");
CTouchSensor* TouchSensor1290 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1290->setDescription("HAnimSite l_carpal_distal_phalanx_4_tip");
HAnimSite1289->addChildren(*TouchSensor1290);

CShape* Shape1291 = (CShape *)(m_pScene.createNode("Shape"));
Shape1291->setUSE("HAnimSiteShape");
HAnimSite1289->addChildren(*Shape1291);

HAnimSegment1281->addChildren(*HAnimSite1289);

HAnimJoint1280->addChildren(*HAnimSegment1281);

CHAnimJoint* HAnimJoint1292 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1292->setName("l_carpal_distal_interphalangeal_4");
HAnimJoint1292->setDEF("hanim_l_carpal_distal_interphalangeal_4");
HAnimJoint1292->setCenter(new float[3]{0.1983,0.7045,-0.0767});
HAnimJoint1292->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1292->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1280->addChildren(*HAnimJoint1292);

HAnimJoint1271->addChildren(*HAnimJoint1280);

HAnimJoint1262->addChildren(*HAnimJoint1271);

HAnimJoint1246->addChildren(*HAnimJoint1262);

CHAnimJoint* HAnimJoint1293 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1293->setName("l_carpometacarpal_5");
HAnimJoint1293->setDEF("hanim_l_carpometacarpal_5");
HAnimJoint1293->setCenter(new float[3]{0.1925,0.8066,-0.1036});
HAnimJoint1293->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1293->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1294 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1294->setName("l_metacarpal_5");
HAnimSegment1294->setDEF("hanim_l_metacarpal_5");
CTransform* Transform1295 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1295->setTranslation(new float[3]{0.1925,0.8066,-0.1036});
CTransform* Transform1296 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1297 = (CShape *)(m_pScene.createNode("Shape"));
Shape1297->setUSE("HAnimJointShape");
Transform1296->addChildren(*Shape1297);

Transform1295->addChildren(*Transform1296);

HAnimSegment1294->addChildren(*Transform1295);

CShape* Shape1298 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1299 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1299->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1300 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1300->setPoint(new float[6]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036});
LineSet1299->setCoord(*Coordinate1300);

//from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
CColorRGBA* ColorRGBA1301 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1301->setUSE("HAnimSegmentLineColorRGBA");
LineSet1299->setColor(*ColorRGBA1301);

Shape1298->setGeometry(LineSet1299);

HAnimSegment1294->addChildren(*Shape1298);

HAnimJoint1293->addChildren(*HAnimSegment1294);

CHAnimJoint* HAnimJoint1302 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1302->setName("l_metacarpophalangeal_5");
HAnimJoint1302->setDEF("hanim_l_metacarpophalangeal_5");
HAnimJoint1302->setCenter(new float[3]{0.1925,0.7866,-0.1036});
HAnimJoint1302->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1302->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1303 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1303->setName("l_carpal_proximal_phalanx_5");
HAnimSegment1303->setDEF("hanim_l_carpal_proximal_phalanx_5");
CTransform* Transform1304 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1304->setTranslation(new float[3]{0.1925,0.7866,-0.1036});
CTransform* Transform1305 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1306 = (CShape *)(m_pScene.createNode("Shape"));
Shape1306->setUSE("HAnimJointShape");
Transform1305->addChildren(*Shape1306);

Transform1304->addChildren(*Transform1305);

HAnimSegment1303->addChildren(*Transform1304);

CShape* Shape1307 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1308 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1308->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1309 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1309->setPoint(new float[6]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024});
LineSet1308->setCoord(*Coordinate1309);

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA1310 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1310->setUSE("HAnimSegmentLineColorRGBA");
LineSet1308->setColor(*ColorRGBA1310);

Shape1307->setGeometry(LineSet1308);

HAnimSegment1303->addChildren(*Shape1307);

HAnimJoint1302->addChildren(*HAnimSegment1303);

CHAnimJoint* HAnimJoint1311 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1311->setName("l_carpal_proximal_interphalangeal_5");
HAnimJoint1311->setDEF("hanim_l_carpal_proximal_interphalangeal_5");
HAnimJoint1311->setCenter(new float[3]{0.1938,0.7452,-0.1024});
HAnimJoint1311->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1311->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1312 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1312->setName("l_carpal_middle_phalanx_5");
HAnimSegment1312->setDEF("hanim_l_carpal_middle_phalanx_5");
CTransform* Transform1313 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1313->setTranslation(new float[3]{0.1938,0.7452,-0.1024});
CTransform* Transform1314 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1315 = (CShape *)(m_pScene.createNode("Shape"));
Shape1315->setUSE("HAnimJointShape");
Transform1314->addChildren(*Shape1315);

Transform1313->addChildren(*Transform1314);

HAnimSegment1312->addChildren(*Transform1313);

CShape* Shape1316 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1317 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1317->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1318 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1318->setPoint(new float[6]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017});
LineSet1317->setCoord(*Coordinate1318);

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA1319 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1319->setUSE("HAnimSegmentLineColorRGBA");
LineSet1317->setColor(*ColorRGBA1319);

Shape1316->setGeometry(LineSet1317);

HAnimSegment1312->addChildren(*Shape1316);

CHAnimSite* HAnimSite1320 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1320->setName("l_carpal_distal_phalanx_5_tip");
HAnimSite1320->setDEF("hanim_l_carpal_distal_phalanx_5_tip");
CTouchSensor* TouchSensor1321 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1321->setDescription("HAnimSite l_carpal_distal_phalanx_5_tip");
HAnimSite1320->addChildren(*TouchSensor1321);

CShape* Shape1322 = (CShape *)(m_pScene.createNode("Shape"));
Shape1322->setUSE("HAnimSiteShape");
HAnimSite1320->addChildren(*Shape1322);

HAnimSegment1312->addChildren(*HAnimSite1320);

HAnimJoint1311->addChildren(*HAnimSegment1312);

CHAnimJoint* HAnimJoint1323 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1323->setName("l_carpal_distal_interphalangeal_5");
HAnimJoint1323->setDEF("hanim_l_carpal_distal_interphalangeal_5");
HAnimJoint1323->setCenter(new float[3]{0.1948,0.7277,-0.1017});
HAnimJoint1323->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1323->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1311->addChildren(*HAnimJoint1323);

HAnimJoint1302->addChildren(*HAnimJoint1311);

HAnimJoint1293->addChildren(*HAnimJoint1302);

HAnimJoint1246->addChildren(*HAnimJoint1293);

HAnimJoint1105->addChildren(*HAnimJoint1246);

HAnimJoint1093->addChildren(*HAnimJoint1105);

HAnimJoint1072->addChildren(*HAnimJoint1093);

HAnimJoint1057->addChildren(*HAnimJoint1072);

HAnimJoint1048->addChildren(*HAnimJoint1057);

HAnimJoint844->addChildren(*HAnimJoint1048);

CHAnimJoint* HAnimJoint1324 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1324->setName("r_sternoclavicular");
HAnimJoint1324->setDEF("hanim_r_sternoclavicular");
HAnimJoint1324->setCenter(new float[3]{-0.0694,1.46,-0.033});
HAnimJoint1324->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1324->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1325 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1325->setName("r_clavicle");
HAnimSegment1325->setDEF("hanim_r_clavicle");
CTransform* Transform1326 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1326->setTranslation(new float[3]{-0.0694,1.46,-0.033});
CTransform* Transform1327 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1328 = (CShape *)(m_pScene.createNode("Shape"));
Shape1328->setUSE("HAnimJointShape");
Transform1327->addChildren(*Shape1328);

Transform1326->addChildren(*Transform1327);

HAnimSegment1325->addChildren(*Transform1326);

CShape* Shape1329 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1330 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1330->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1331 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1331->setPoint(new float[6]{-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401});
LineSet1330->setCoord(*Coordinate1331);

//from r_sternoclavicular to r_acromioclavicular vertices 2
CColorRGBA* ColorRGBA1332 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1332->setUSE("HAnimSegmentLineColorRGBA");
LineSet1330->setColor(*ColorRGBA1332);

Shape1329->setGeometry(LineSet1330);

HAnimSegment1325->addChildren(*Shape1329);

HAnimJoint1324->addChildren(*HAnimSegment1325);

CHAnimJoint* HAnimJoint1333 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1333->setName("r_acromioclavicular");
HAnimJoint1333->setDEF("hanim_r_acromioclavicular");
HAnimJoint1333->setCenter(new float[3]{-0.0836,1.4281,-0.0401});
HAnimJoint1333->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1333->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1334 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1334->setName("r_scapula");
HAnimSegment1334->setDEF("hanim_r_scapula");
CTransform* Transform1335 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1335->setTranslation(new float[3]{-0.0836,1.4281,-0.0401});
CTransform* Transform1336 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1337 = (CShape *)(m_pScene.createNode("Shape"));
Shape1337->setUSE("HAnimJointShape");
Transform1336->addChildren(*Shape1337);

Transform1335->addChildren(*Transform1336);

HAnimSegment1334->addChildren(*Transform1335);

CShape* Shape1338 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1339 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1339->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1340 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1340->setPoint(new float[6]{-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325});
LineSet1339->setCoord(*Coordinate1340);

//from r_acromioclavicular to r_shoulder vertices 2
CColorRGBA* ColorRGBA1341 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1341->setUSE("HAnimSegmentLineColorRGBA");
LineSet1339->setColor(*ColorRGBA1341);

Shape1338->setGeometry(LineSet1339);

HAnimSegment1334->addChildren(*Shape1338);

CHAnimSite* HAnimSite1342 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1342->setName("r_bideltoid_pt");
HAnimSite1342->setDEF("hanim_r_bideltoid_pt");
CTouchSensor* TouchSensor1343 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1343->setDescription("HAnimSite r_bideltoid_pt");
HAnimSite1342->addChildren(*TouchSensor1343);

CShape* Shape1344 = (CShape *)(m_pScene.createNode("Shape"));
Shape1344->setUSE("HAnimSiteShape");
HAnimSite1342->addChildren(*Shape1344);

HAnimSegment1334->addChildren(*HAnimSite1342);

CHAnimSite* HAnimSite1345 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1345->setName("r_humeral_lateral_epicondyles_pt");
HAnimSite1345->setDEF("hanim_r_humeral_lateral_epicondyles_pt");
HAnimSite1345->setTranslation(new float[3]{-0.2224,1.1517,-0.1033});
CTouchSensor* TouchSensor1346 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1346->setDescription("HAnimSite r_humeral_lateral_epicondyles_pt");
HAnimSite1345->addChildren(*TouchSensor1346);

CShape* Shape1347 = (CShape *)(m_pScene.createNode("Shape"));
Shape1347->setUSE("HAnimSiteShape");
HAnimSite1345->addChildren(*Shape1347);

HAnimSegment1334->addChildren(*HAnimSite1345);

HAnimJoint1333->addChildren(*HAnimSegment1334);

CHAnimJoint* HAnimJoint1348 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1348->setName("r_shoulder");
HAnimJoint1348->setDEF("hanim_r_shoulder");
HAnimJoint1348->setCenter(new float[3]{-0.1907,1.4407,-0.0325});
HAnimJoint1348->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1348->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1349 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1349->setName("r_upperarm");
HAnimSegment1349->setDEF("hanim_r_upperarm");
CTransform* Transform1350 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1350->setTranslation(new float[3]{-0.1907,1.4407,-0.0325});
CTransform* Transform1351 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1352 = (CShape *)(m_pScene.createNode("Shape"));
Shape1352->setUSE("HAnimJointShape");
Transform1351->addChildren(*Shape1352);

Transform1350->addChildren(*Transform1351);

HAnimSegment1349->addChildren(*Transform1350);

CShape* Shape1353 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1354 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1354->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1355 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1355->setPoint(new float[6]{-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062});
LineSet1354->setCoord(*Coordinate1355);

//from r_shoulder to r_elbow vertices 2
CColorRGBA* ColorRGBA1356 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1356->setUSE("HAnimSegmentLineColorRGBA");
LineSet1354->setColor(*ColorRGBA1356);

Shape1353->setGeometry(LineSet1354);

HAnimSegment1349->addChildren(*Shape1353);

CHAnimSite* HAnimSite1357 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1357->setName("r_humeral_medial_epicondyles_pt");
HAnimSite1357->setDEF("hanim_r_humeral_medial_epicondyles_pt");
HAnimSite1357->setTranslation(new float[3]{-0.168,1.1298,-0.1062});
CTouchSensor* TouchSensor1358 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1358->setDescription("HAnimSite r_humeral_medial_epicondyles_pt");
HAnimSite1357->addChildren(*TouchSensor1358);

CShape* Shape1359 = (CShape *)(m_pScene.createNode("Shape"));
Shape1359->setUSE("HAnimSiteShape");
HAnimSite1357->addChildren(*Shape1359);

HAnimSegment1349->addChildren(*HAnimSite1357);

CHAnimSite* HAnimSite1360 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1360->setName("r_olecranon_pt");
HAnimSite1360->setDEF("hanim_r_olecranon_pt");
HAnimSite1360->setTranslation(new float[3]{-0.1907,1.1405,-0.1065});
CTouchSensor* TouchSensor1361 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1361->setDescription("HAnimSite r_olecranon_pt");
HAnimSite1360->addChildren(*TouchSensor1361);

CShape* Shape1362 = (CShape *)(m_pScene.createNode("Shape"));
Shape1362->setUSE("HAnimSiteShape");
HAnimSite1360->addChildren(*Shape1362);

HAnimSegment1349->addChildren(*HAnimSite1360);

CHAnimSite* HAnimSite1363 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1363->setName("r_radial_styloid_pt");
HAnimSite1363->setDEF("hanim_r_radial_styloid_pt");
HAnimSite1363->setTranslation(new float[3]{-0.1884,0.8676,-0.036});
CTouchSensor* TouchSensor1364 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1364->setDescription("HAnimSite r_radial_styloid_pt");
HAnimSite1363->addChildren(*TouchSensor1364);

CShape* Shape1365 = (CShape *)(m_pScene.createNode("Shape"));
Shape1365->setUSE("HAnimSiteShape");
HAnimSite1363->addChildren(*Shape1365);

HAnimSegment1349->addChildren(*HAnimSite1363);

CHAnimSite* HAnimSite1366 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1366->setName("r_radiale_pt");
HAnimSite1366->setDEF("hanim_r_radiale_pt");
HAnimSite1366->setTranslation(new float[3]{-0.213,1.1305,-0.1091});
CTouchSensor* TouchSensor1367 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1367->setDescription("HAnimSite r_radiale_pt");
HAnimSite1366->addChildren(*TouchSensor1367);

CShape* Shape1368 = (CShape *)(m_pScene.createNode("Shape"));
Shape1368->setUSE("HAnimSiteShape");
HAnimSite1366->addChildren(*Shape1368);

HAnimSegment1349->addChildren(*HAnimSite1366);

HAnimJoint1348->addChildren(*HAnimSegment1349);

CHAnimJoint* HAnimJoint1369 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1369->setName("r_elbow");
HAnimJoint1369->setDEF("hanim_r_elbow");
HAnimJoint1369->setCenter(new float[3]{-0.1949,1.1388,-0.062});
HAnimJoint1369->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1369->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1370 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1370->setName("r_forearm");
HAnimSegment1370->setDEF("hanim_r_forearm");
CTransform* Transform1371 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1371->setTranslation(new float[3]{-0.1949,1.1388,-0.062});
CTransform* Transform1372 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1373 = (CShape *)(m_pScene.createNode("Shape"));
Shape1373->setUSE("HAnimJointShape");
Transform1372->addChildren(*Shape1373);

Transform1371->addChildren(*Transform1372);

HAnimSegment1370->addChildren(*Transform1371);

CShape* Shape1374 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1375 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1375->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1376 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1376->setPoint(new float[6]{-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521});
LineSet1375->setCoord(*Coordinate1376);

//from r_elbow to r_radiocarpal vertices 2
CColorRGBA* ColorRGBA1377 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1377->setUSE("HAnimSegmentLineColorRGBA");
LineSet1375->setColor(*ColorRGBA1377);

Shape1374->setGeometry(LineSet1375);

HAnimSegment1370->addChildren(*Shape1374);

CHAnimSite* HAnimSite1378 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1378->setName("r_ulnar_styloid_pt");
HAnimSite1378->setDEF("hanim_r_ulnar_styloid_pt");
HAnimSite1378->setTranslation(new float[3]{-0.2117,0.8562,-0.0584});
CTouchSensor* TouchSensor1379 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1379->setDescription("HAnimSite r_ulnar_styloid_pt");
HAnimSite1378->addChildren(*TouchSensor1379);

CShape* Shape1380 = (CShape *)(m_pScene.createNode("Shape"));
Shape1380->setUSE("HAnimSiteShape");
HAnimSite1378->addChildren(*Shape1380);

HAnimSegment1370->addChildren(*HAnimSite1378);

HAnimJoint1369->addChildren(*HAnimSegment1370);

CHAnimJoint* HAnimJoint1381 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1381->setName("r_radiocarpal");
HAnimJoint1381->setDEF("hanim_r_radiocarpal");
HAnimJoint1381->setCenter(new float[3]{-0.1959,0.8694,-0.0521});
HAnimJoint1381->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1381->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1382 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1382->setName("r_carpal");
HAnimSegment1382->setDEF("hanim_r_carpal");
CTransform* Transform1383 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1383->setScale(new float[3]{0.2,0.2,0.2});
Transform1383->setTranslation(new float[3]{-0.2,0.85,-0.05});
Transform1383->setRotation(new float[4]{0,0,1,-3.14});
//Transform right hand
CTransform* Transform1384 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1384->setRotation(new float[4]{0,1,0,1.57});
//Transform right hand
CShape* Shape1385 = (CShape *)(m_pScene.createNode("Shape"));
Shape1385->setUSE("HAnimJointShape");
Transform1384->addChildren(*Shape1385);

Transform1383->addChildren(*Transform1384);

HAnimSegment1382->addChildren(*Transform1383);

CShape* Shape1386 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1387 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1387->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1388 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1388->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1959,0.8694,-0.0521});
LineSet1387->setCoord(*Coordinate1388);

//from r_radiocarpal to r_midcarpal_1 vertices 2
CColorRGBA* ColorRGBA1389 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1389->setUSE("HAnimSegmentLineColorRGBA");
LineSet1387->setColor(*ColorRGBA1389);

Shape1386->setGeometry(LineSet1387);

HAnimSegment1382->addChildren(*Shape1386);

CShape* Shape1390 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1391 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1391->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1392 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1392->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1959,0.8694,-0.0521});
LineSet1391->setCoord(*Coordinate1392);

//from r_radiocarpal to r_midcarpal_2 vertices 2
CColorRGBA* ColorRGBA1393 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1393->setUSE("HAnimSegmentLineColorRGBA");
LineSet1391->setColor(*ColorRGBA1393);

Shape1390->setGeometry(LineSet1391);

HAnimSegment1382->addChildren(*Shape1390);

CShape* Shape1394 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1395 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1395->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1396 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1396->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1959,0.8694,-0.0521});
LineSet1395->setCoord(*Coordinate1396);

//from r_radiocarpal to r_midcarpal_3 vertices 2
CColorRGBA* ColorRGBA1397 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1397->setUSE("HAnimSegmentLineColorRGBA");
LineSet1395->setColor(*ColorRGBA1397);

Shape1394->setGeometry(LineSet1395);

HAnimSegment1382->addChildren(*Shape1394);

CShape* Shape1398 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1399 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1399->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1400 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1400->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1959,0.8694,-0.0521});
LineSet1399->setCoord(*Coordinate1400);

//from r_radiocarpal to r_midcarpal_4_5 vertices 2
CColorRGBA* ColorRGBA1401 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1401->setUSE("HAnimSegmentLineColorRGBA");
LineSet1399->setColor(*ColorRGBA1401);

Shape1398->setGeometry(LineSet1399);

HAnimSegment1382->addChildren(*Shape1398);

HAnimJoint1381->addChildren(*HAnimSegment1382);

CHAnimJoint* HAnimJoint1402 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1402->setName("r_midcarpal_1");
HAnimJoint1402->setDEF("hanim_r_midcarpal_1");
HAnimJoint1402->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1402->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1403 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1403->setName("r_trapezium");
HAnimSegment1403->setDEF("hanim_r_trapezium");
CTransform* Transform1404 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1404->setTranslation(new float[3]{-0.1959,0.8694,-0.0521});
CTransform* Transform1405 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1406 = (CShape *)(m_pScene.createNode("Shape"));
Shape1406->setUSE("HAnimJointShape");
Transform1405->addChildren(*Shape1406);

Transform1404->addChildren(*Transform1405);

HAnimSegment1403->addChildren(*Transform1404);

CShape* Shape1407 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1408 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1408->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1409 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1409->setPoint(new float[3]{-0.1899,0.8502,-0.0473});
LineSet1408->setCoord(*Coordinate1409);

//from r_midcarpal_1 to r_carpometacarpal_1 vertices 1
CColorRGBA* ColorRGBA1410 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1410->setUSE("HAnimSegmentLineColorRGBA");
LineSet1408->setColor(*ColorRGBA1410);

Shape1407->setGeometry(LineSet1408);

HAnimSegment1403->addChildren(*Shape1407);

HAnimJoint1402->addChildren(*HAnimSegment1403);

CHAnimJoint* HAnimJoint1411 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1411->setName("r_carpometacarpal_1");
HAnimJoint1411->setDEF("hanim_r_carpometacarpal_1");
HAnimJoint1411->setCenter(new float[3]{-0.1899,0.8502,-0.0473});
HAnimJoint1411->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1411->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1412 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1412->setName("r_metacarpal_1");
HAnimSegment1412->setDEF("hanim_r_metacarpal_1");
CTransform* Transform1413 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1413->setTranslation(new float[3]{-0.1899,0.8502,-0.0473});
CTransform* Transform1414 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1415 = (CShape *)(m_pScene.createNode("Shape"));
Shape1415->setUSE("HAnimJointShape");
Transform1414->addChildren(*Shape1415);

Transform1413->addChildren(*Transform1414);

HAnimSegment1412->addChildren(*Transform1413);

CShape* Shape1416 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1417 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1417->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1418 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1418->setPoint(new float[6]{-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306});
LineSet1417->setCoord(*Coordinate1418);

//from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
CColorRGBA* ColorRGBA1419 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1419->setUSE("HAnimSegmentLineColorRGBA");
LineSet1417->setColor(*ColorRGBA1419);

Shape1416->setGeometry(LineSet1417);

HAnimSegment1412->addChildren(*Shape1416);

HAnimJoint1411->addChildren(*HAnimSegment1412);

CHAnimJoint* HAnimJoint1420 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1420->setName("r_metacarpophalangeal_1");
HAnimJoint1420->setDEF("hanim_r_metacarpophalangeal_1");
HAnimJoint1420->setCenter(new float[3]{-0.1874,0.8256,0.0306});
HAnimJoint1420->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1420->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1421 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1421->setName("r_carpal_proximal_phalanx_1");
HAnimSegment1421->setDEF("hanim_r_carpal_proximal_phalanx_1");
CTransform* Transform1422 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1422->setTranslation(new float[3]{-0.1874,0.8256,0.0306});
CTransform* Transform1423 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1424 = (CShape *)(m_pScene.createNode("Shape"));
Shape1424->setUSE("HAnimJointShape");
Transform1423->addChildren(*Shape1424);

Transform1422->addChildren(*Transform1423);

HAnimSegment1421->addChildren(*Transform1422);

CShape* Shape1425 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1426 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1426->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1427 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1427->setPoint(new float[6]{-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506});
LineSet1426->setCoord(*Coordinate1427);

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
CColorRGBA* ColorRGBA1428 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1428->setUSE("HAnimSegmentLineColorRGBA");
LineSet1426->setColor(*ColorRGBA1428);

Shape1425->setGeometry(LineSet1426);

HAnimSegment1421->addChildren(*Shape1425);

CHAnimSite* HAnimSite1429 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1429->setName("r_carpal_distal_phalanx_1_tip");
HAnimSite1429->setDEF("hanim_r_carpal_distal_phalanx_1_tip");
CTouchSensor* TouchSensor1430 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1430->setDescription("HAnimSite r_carpal_distal_phalanx_1_tip");
HAnimSite1429->addChildren(*TouchSensor1430);

CShape* Shape1431 = (CShape *)(m_pScene.createNode("Shape"));
Shape1431->setUSE("HAnimSiteShape");
HAnimSite1429->addChildren(*Shape1431);

HAnimSegment1421->addChildren(*HAnimSite1429);

HAnimJoint1420->addChildren(*HAnimSegment1421);

CHAnimJoint* HAnimJoint1432 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1432->setName("r_carpal_interphalangeal_1");
HAnimJoint1432->setDEF("hanim_r_carpal_interphalangeal_1");
HAnimJoint1432->setCenter(new float[3]{-0.1864,0.819,0.0506});
HAnimJoint1432->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1432->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1420->addChildren(*HAnimJoint1432);

HAnimJoint1411->addChildren(*HAnimJoint1420);

HAnimJoint1402->addChildren(*HAnimJoint1411);

HAnimJoint1381->addChildren(*HAnimJoint1402);

CHAnimJoint* HAnimJoint1433 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1433->setName("r_midcarpal_2");
HAnimJoint1433->setDEF("hanim_r_midcarpal_2");
HAnimJoint1433->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1433->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1434 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1434->setName("r_trapezoid");
HAnimSegment1434->setDEF("hanim_r_trapezoid");
CTransform* Transform1435 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1435->setTranslation(new float[3]{-0.1864,0.819,0.0506});
CTransform* Transform1436 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1437 = (CShape *)(m_pScene.createNode("Shape"));
Shape1437->setUSE("HAnimJointShape");
Transform1436->addChildren(*Shape1437);

Transform1435->addChildren(*Transform1436);

HAnimSegment1434->addChildren(*Transform1435);

CShape* Shape1438 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1439 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1439->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1440 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1440->setPoint(new float[3]{-0.1961,0.8055,-0.0218});
LineSet1439->setCoord(*Coordinate1440);

//from r_midcarpal_2 to r_carpometacarpal_2 vertices 1
CColorRGBA* ColorRGBA1441 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1441->setUSE("HAnimSegmentLineColorRGBA");
LineSet1439->setColor(*ColorRGBA1441);

Shape1438->setGeometry(LineSet1439);

HAnimSegment1434->addChildren(*Shape1438);

CHAnimSite* HAnimSite1442 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1442->setName("r_metacarpal_phalanx_2_pt");
HAnimSite1442->setDEF("hanim_r_metacarpal_phalanx_2_pt");
HAnimSite1442->setTranslation(new float[3]{-0.1977,0.8169,-0.0177});
CTouchSensor* TouchSensor1443 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1443->setDescription("HAnimSite r_metacarpal_phalanx_2_pt");
HAnimSite1442->addChildren(*TouchSensor1443);

CShape* Shape1444 = (CShape *)(m_pScene.createNode("Shape"));
Shape1444->setUSE("HAnimSiteShape");
HAnimSite1442->addChildren(*Shape1444);

HAnimSegment1434->addChildren(*HAnimSite1442);

HAnimJoint1433->addChildren(*HAnimSegment1434);

CHAnimJoint* HAnimJoint1445 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1445->setName("r_carpometacarpal_2");
HAnimJoint1445->setDEF("hanim_r_carpometacarpal_2");
HAnimJoint1445->setCenter(new float[3]{-0.1961,0.8055,-0.0218});
HAnimJoint1445->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1445->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1446 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1446->setName("r_metacarpal_2");
HAnimSegment1446->setDEF("hanim_r_metacarpal_2");
CTransform* Transform1447 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1447->setTranslation(new float[3]{-0.1961,0.8055,-0.0218});
CTransform* Transform1448 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1449 = (CShape *)(m_pScene.createNode("Shape"));
Shape1449->setUSE("HAnimJointShape");
Transform1448->addChildren(*Shape1449);

Transform1447->addChildren(*Transform1448);

HAnimSegment1446->addChildren(*Transform1447);

CShape* Shape1450 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1451 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1451->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1452 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1452->setPoint(new float[6]{-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218});
LineSet1451->setCoord(*Coordinate1452);

//from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
CColorRGBA* ColorRGBA1453 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1453->setUSE("HAnimSegmentLineColorRGBA");
LineSet1451->setColor(*ColorRGBA1453);

Shape1450->setGeometry(LineSet1451);

HAnimSegment1446->addChildren(*Shape1450);

HAnimJoint1445->addChildren(*HAnimSegment1446);

CHAnimJoint* HAnimJoint1454 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1454->setName("r_metacarpophalangeal_2");
HAnimJoint1454->setDEF("hanim_r_metacarpophalangeal_2");
HAnimJoint1454->setCenter(new float[3]{-0.1961,0.7846,-0.0218});
HAnimJoint1454->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1454->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1455 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1455->setName("r_carpal_proximal_phalanx_2");
HAnimSegment1455->setDEF("hanim_r_carpal_proximal_phalanx_2");
CTransform* Transform1456 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1456->setTranslation(new float[3]{-0.1961,0.7846,-0.0218});
CTransform* Transform1457 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1458 = (CShape *)(m_pScene.createNode("Shape"));
Shape1458->setUSE("HAnimJointShape");
Transform1457->addChildren(*Shape1458);

Transform1456->addChildren(*Transform1457);

HAnimSegment1455->addChildren(*Transform1456);

CShape* Shape1459 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1460 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1460->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1461 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1461->setPoint(new float[6]{-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185});
LineSet1460->setCoord(*Coordinate1461);

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA1462 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1462->setUSE("HAnimSegmentLineColorRGBA");
LineSet1460->setColor(*ColorRGBA1462);

Shape1459->setGeometry(LineSet1460);

HAnimSegment1455->addChildren(*Shape1459);

HAnimJoint1454->addChildren(*HAnimSegment1455);

CHAnimJoint* HAnimJoint1463 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1463->setName("r_carpal_proximal_interphalangeal_2");
HAnimJoint1463->setDEF("hanim_r_carpal_proximal_interphalangeal_2");
HAnimJoint1463->setCenter(new float[3]{-0.1954,0.7393,-0.0185});
HAnimJoint1463->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1463->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1464 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1464->setName("r_carpal_middle_phalanx_2");
HAnimSegment1464->setDEF("hanim_r_carpal_middle_phalanx_2");
CTransform* Transform1465 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1465->setTranslation(new float[3]{-0.1954,0.7393,-0.0185});
CTransform* Transform1466 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1467 = (CShape *)(m_pScene.createNode("Shape"));
Shape1467->setUSE("HAnimJointShape");
Transform1466->addChildren(*Shape1467);

Transform1465->addChildren(*Transform1466);

HAnimSegment1464->addChildren(*Transform1465);

CShape* Shape1468 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1469 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1469->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1470 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1470->setPoint(new float[6]{-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173});
LineSet1469->setCoord(*Coordinate1470);

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA1471 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1471->setUSE("HAnimSegmentLineColorRGBA");
LineSet1469->setColor(*ColorRGBA1471);

Shape1468->setGeometry(LineSet1469);

HAnimSegment1464->addChildren(*Shape1468);

CHAnimSite* HAnimSite1472 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1472->setName("r_carpal_distal_phalanx_2_tip");
HAnimSite1472->setDEF("hanim_r_carpal_distal_phalanx_2_tip");
CTouchSensor* TouchSensor1473 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1473->setDescription("HAnimSite r_carpal_distal_phalanx_2_tip");
HAnimSite1472->addChildren(*TouchSensor1473);

CShape* Shape1474 = (CShape *)(m_pScene.createNode("Shape"));
Shape1474->setUSE("HAnimSiteShape");
HAnimSite1472->addChildren(*Shape1474);

HAnimSegment1464->addChildren(*HAnimSite1472);

CHAnimSite* HAnimSite1475 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1475->setName("r_dactylion_pt");
HAnimSite1475->setDEF("hanim_r_dactylion_pt");
HAnimSite1475->setTranslation(new float[3]{-0.1941,0.6772,-0.0423});
CTouchSensor* TouchSensor1476 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1476->setDescription("HAnimSite r_dactylion_pt");
HAnimSite1475->addChildren(*TouchSensor1476);

CShape* Shape1477 = (CShape *)(m_pScene.createNode("Shape"));
Shape1477->setUSE("HAnimSiteShape");
HAnimSite1475->addChildren(*Shape1477);

HAnimSegment1464->addChildren(*HAnimSite1475);

HAnimJoint1463->addChildren(*HAnimSegment1464);

CHAnimJoint* HAnimJoint1478 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1478->setName("r_carpal_distal_interphalangeal_2");
HAnimJoint1478->setDEF("hanim_r_carpal_distal_interphalangeal_2");
HAnimJoint1478->setCenter(new float[3]{-0.1945,0.7169,-0.0173});
HAnimJoint1478->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1478->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1463->addChildren(*HAnimJoint1478);

HAnimJoint1454->addChildren(*HAnimJoint1463);

HAnimJoint1445->addChildren(*HAnimJoint1454);

HAnimJoint1433->addChildren(*HAnimJoint1445);

HAnimJoint1381->addChildren(*HAnimJoint1433);

CHAnimJoint* HAnimJoint1479 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1479->setName("r_midcarpal_3");
HAnimJoint1479->setDEF("hanim_r_midcarpal_3");
HAnimJoint1479->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1479->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1480 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1480->setName("r_capitate");
HAnimSegment1480->setDEF("hanim_r_capitate");
CTransform* Transform1481 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1481->setTranslation(new float[3]{-0.1945,0.7169,-0.0173});
CTransform* Transform1482 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1483 = (CShape *)(m_pScene.createNode("Shape"));
Shape1483->setUSE("HAnimJointShape");
Transform1482->addChildren(*Shape1483);

Transform1481->addChildren(*Transform1482);

HAnimSegment1480->addChildren(*Transform1481);

CShape* Shape1484 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1485 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1485->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1486 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1486->setPoint(new float[3]{-0.1972,0.806,-0.0468});
LineSet1485->setCoord(*Coordinate1486);

//from r_midcarpal_3 to r_carpometacarpal_3 vertices 1
CColorRGBA* ColorRGBA1487 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1487->setUSE("HAnimSegmentLineColorRGBA");
LineSet1485->setColor(*ColorRGBA1487);

Shape1484->setGeometry(LineSet1485);

HAnimSegment1480->addChildren(*Shape1484);

CHAnimSite* HAnimSite1488 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1488->setName("r_metacarpal_phalanx_3_pt");
HAnimSite1488->setDEF("hanim_r_metacarpal_phalanx_3_pt");
CTouchSensor* TouchSensor1489 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1489->setDescription("HAnimSite r_metacarpal_phalanx_3_pt");
HAnimSite1488->addChildren(*TouchSensor1489);

CShape* Shape1490 = (CShape *)(m_pScene.createNode("Shape"));
Shape1490->setUSE("HAnimSiteShape");
HAnimSite1488->addChildren(*Shape1490);

HAnimSegment1480->addChildren(*HAnimSite1488);

HAnimJoint1479->addChildren(*HAnimSegment1480);

CHAnimJoint* HAnimJoint1491 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1491->setName("r_carpometacarpal_3");
HAnimJoint1491->setDEF("hanim_r_carpometacarpal_3");
HAnimJoint1491->setCenter(new float[3]{-0.1972,0.806,-0.0468});
HAnimJoint1491->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1491->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1492 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1492->setName("r_metacarpal_3");
HAnimSegment1492->setDEF("hanim_r_metacarpal_3");
CTransform* Transform1493 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1493->setTranslation(new float[3]{-0.1972,0.806,-0.0468});
CTransform* Transform1494 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1495 = (CShape *)(m_pScene.createNode("Shape"));
Shape1495->setUSE("HAnimJointShape");
Transform1494->addChildren(*Shape1495);

Transform1493->addChildren(*Transform1494);

HAnimSegment1492->addChildren(*Transform1493);

CShape* Shape1496 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1497 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1497->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1498 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1498->setPoint(new float[6]{-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468});
LineSet1497->setCoord(*Coordinate1498);

//from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
CColorRGBA* ColorRGBA1499 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1499->setUSE("HAnimSegmentLineColorRGBA");
LineSet1497->setColor(*ColorRGBA1499);

Shape1496->setGeometry(LineSet1497);

HAnimSegment1492->addChildren(*Shape1496);

HAnimJoint1491->addChildren(*HAnimSegment1492);

CHAnimJoint* HAnimJoint1500 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1500->setName("r_metacarpophalangeal_3");
HAnimJoint1500->setDEF("hanim_r_metacarpophalangeal_3");
HAnimJoint1500->setCenter(new float[3]{-0.1972,0.7849,-0.0468});
HAnimJoint1500->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1500->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1501 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1501->setName("r_carpal_proximal_phalanx_3");
HAnimSegment1501->setDEF("hanim_r_carpal_proximal_phalanx_3");
CTransform* Transform1502 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1502->setTranslation(new float[3]{-0.1972,0.7849,-0.0468});
CTransform* Transform1503 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1504 = (CShape *)(m_pScene.createNode("Shape"));
Shape1504->setUSE("HAnimJointShape");
Transform1503->addChildren(*Shape1504);

Transform1502->addChildren(*Transform1503);

HAnimSegment1501->addChildren(*Transform1502);

CShape* Shape1505 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1506 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1506->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1507 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1507->setPoint(new float[6]{-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441});
LineSet1506->setCoord(*Coordinate1507);

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA1508 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1508->setUSE("HAnimSegmentLineColorRGBA");
LineSet1506->setColor(*ColorRGBA1508);

Shape1505->setGeometry(LineSet1506);

HAnimSegment1501->addChildren(*Shape1505);

HAnimJoint1500->addChildren(*HAnimSegment1501);

CHAnimJoint* HAnimJoint1509 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1509->setName("r_carpal_proximal_interphalangeal_3");
HAnimJoint1509->setDEF("hanim_r_carpal_proximal_interphalangeal_3");
HAnimJoint1509->setCenter(new float[3]{-0.195,0.7304,-0.0441});
HAnimJoint1509->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1509->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1510 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1510->setName("r_carpal_middle_phalanx_3");
HAnimSegment1510->setDEF("hanim_r_carpal_middle_phalanx_3");
CTransform* Transform1511 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1511->setTranslation(new float[3]{-0.195,0.7304,-0.0441});
CTransform* Transform1512 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1513 = (CShape *)(m_pScene.createNode("Shape"));
Shape1513->setUSE("HAnimJointShape");
Transform1512->addChildren(*Shape1513);

Transform1511->addChildren(*Transform1512);

HAnimSegment1510->addChildren(*Transform1511);

CShape* Shape1514 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1515 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1515->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1516 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1516->setPoint(new float[6]{-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432});
LineSet1515->setCoord(*Coordinate1516);

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA1517 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1517->setUSE("HAnimSegmentLineColorRGBA");
LineSet1515->setColor(*ColorRGBA1517);

Shape1514->setGeometry(LineSet1515);

HAnimSegment1510->addChildren(*Shape1514);

CHAnimSite* HAnimSite1518 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1518->setName("r_carpal_distal_phalanx_3_tip");
HAnimSite1518->setDEF("hanim_r_carpal_distal_phalanx_3_tip");
CTouchSensor* TouchSensor1519 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1519->setDescription("HAnimSite r_carpal_distal_phalanx_3_tip");
HAnimSite1518->addChildren(*TouchSensor1519);

CShape* Shape1520 = (CShape *)(m_pScene.createNode("Shape"));
Shape1520->setUSE("HAnimSiteShape");
HAnimSite1518->addChildren(*Shape1520);

HAnimSegment1510->addChildren(*HAnimSite1518);

HAnimJoint1509->addChildren(*HAnimSegment1510);

CHAnimJoint* HAnimJoint1521 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1521->setName("r_carpal_distal_interphalangeal_3");
HAnimJoint1521->setDEF("hanim_r_carpal_distal_interphalangeal_3");
HAnimJoint1521->setCenter(new float[3]{-0.1939,0.7042,-0.0432});
HAnimJoint1521->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1521->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1509->addChildren(*HAnimJoint1521);

HAnimJoint1500->addChildren(*HAnimJoint1509);

HAnimJoint1491->addChildren(*HAnimJoint1500);

HAnimJoint1479->addChildren(*HAnimJoint1491);

HAnimJoint1381->addChildren(*HAnimJoint1479);

CHAnimJoint* HAnimJoint1522 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1522->setName("r_midcarpal_4_5");
HAnimJoint1522->setDEF("hanim_r_midcarpal_4_5");
HAnimJoint1522->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1522->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1523 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1523->setName("r_hamate");
HAnimSegment1523->setDEF("hanim_r_hamate");
CTransform* Transform1524 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1524->setTranslation(new float[3]{-0.1939,0.7042,-0.0432});
CTransform* Transform1525 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1526 = (CShape *)(m_pScene.createNode("Shape"));
Shape1526->setUSE("HAnimJointShape");
Transform1525->addChildren(*Shape1526);

Transform1524->addChildren(*Transform1525);

HAnimSegment1523->addChildren(*Transform1524);

CShape* Shape1527 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1528 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1528->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1529 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1529->setPoint(new float[3]{-0.1951,0.8049,-0.0732});
LineSet1528->setCoord(*Coordinate1529);

//from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 1
CColorRGBA* ColorRGBA1530 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1530->setUSE("HAnimSegmentLineColorRGBA");
LineSet1528->setColor(*ColorRGBA1530);

Shape1527->setGeometry(LineSet1528);

HAnimSegment1523->addChildren(*Shape1527);

CShape* Shape1531 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1532 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1532->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1533 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1533->setPoint(new float[3]{-0.1926,0.8096,-0.0975});
LineSet1532->setCoord(*Coordinate1533);

//from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 1
CColorRGBA* ColorRGBA1534 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1534->setUSE("HAnimSegmentLineColorRGBA");
LineSet1532->setColor(*ColorRGBA1534);

Shape1531->setGeometry(LineSet1532);

HAnimSegment1523->addChildren(*Shape1531);

CHAnimSite* HAnimSite1535 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1535->setName("r_metacarpal_phalanx_5_pt");
HAnimSite1535->setDEF("hanim_r_metacarpal_phalanx_5_pt");
HAnimSite1535->setTranslation(new float[3]{-0.1929,0.789,-0.1064});
CTouchSensor* TouchSensor1536 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1536->setDescription("HAnimSite r_metacarpal_phalanx_5_pt");
HAnimSite1535->addChildren(*TouchSensor1536);

CShape* Shape1537 = (CShape *)(m_pScene.createNode("Shape"));
Shape1537->setUSE("HAnimSiteShape");
HAnimSite1535->addChildren(*Shape1537);

HAnimSegment1523->addChildren(*HAnimSite1535);

HAnimJoint1522->addChildren(*HAnimSegment1523);

CHAnimJoint* HAnimJoint1538 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1538->setName("r_carpometacarpal_4");
HAnimJoint1538->setDEF("hanim_r_carpometacarpal_4");
HAnimJoint1538->setCenter(new float[3]{-0.1951,0.8049,-0.0732});
HAnimJoint1538->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1538->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1539 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1539->setName("r_metacarpal_4");
HAnimSegment1539->setDEF("hanim_r_metacarpal_4");
CTransform* Transform1540 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1540->setTranslation(new float[3]{-0.1951,0.8049,-0.0732});
CTransform* Transform1541 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1542 = (CShape *)(m_pScene.createNode("Shape"));
Shape1542->setUSE("HAnimJointShape");
Transform1541->addChildren(*Shape1542);

Transform1540->addChildren(*Transform1541);

HAnimSegment1539->addChildren(*Transform1540);

CShape* Shape1543 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1544 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1544->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1545 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1545->setPoint(new float[6]{-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732});
LineSet1544->setCoord(*Coordinate1545);

//from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
CColorRGBA* ColorRGBA1546 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1546->setUSE("HAnimSegmentLineColorRGBA");
LineSet1544->setColor(*ColorRGBA1546);

Shape1543->setGeometry(LineSet1544);

HAnimSegment1539->addChildren(*Shape1543);

HAnimJoint1538->addChildren(*HAnimSegment1539);

CHAnimJoint* HAnimJoint1547 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1547->setName("r_metacarpophalangeal_4");
HAnimJoint1547->setDEF("hanim_r_metacarpophalangeal_4");
HAnimJoint1547->setCenter(new float[3]{-0.1951,0.7845,-0.0732});
HAnimJoint1547->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1547->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1548 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1548->setName("r_carpal_proximal_phalanx_4");
HAnimSegment1548->setDEF("hanim_r_carpal_proximal_phalanx_4");
CTransform* Transform1549 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1549->setTranslation(new float[3]{-0.1951,0.7845,-0.0732});
CTransform* Transform1550 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1551 = (CShape *)(m_pScene.createNode("Shape"));
Shape1551->setUSE("HAnimJointShape");
Transform1550->addChildren(*Shape1551);

Transform1549->addChildren(*Transform1550);

HAnimSegment1548->addChildren(*Transform1549);

CShape* Shape1552 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1553 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1553->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1554 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1554->setPoint(new float[6]{-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716});
LineSet1553->setCoord(*Coordinate1554);

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA1555 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1555->setUSE("HAnimSegmentLineColorRGBA");
LineSet1553->setColor(*ColorRGBA1555);

Shape1552->setGeometry(LineSet1553);

HAnimSegment1548->addChildren(*Shape1552);

HAnimJoint1547->addChildren(*HAnimSegment1548);

CHAnimJoint* HAnimJoint1556 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1556->setName("r_carpal_proximal_interphalangeal_4");
HAnimJoint1556->setDEF("hanim_r_carpal_proximal_interphalangeal_4");
HAnimJoint1556->setCenter(new float[3]{-0.192,0.7318,-0.0716});
HAnimJoint1556->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1556->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1557 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1557->setName("r_carpal_middle_phalanx_4");
HAnimSegment1557->setDEF("hanim_r_carpal_middle_phalanx_4");
CTransform* Transform1558 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1558->setTranslation(new float[3]{-0.192,0.7318,-0.0716});
CTransform* Transform1559 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1560 = (CShape *)(m_pScene.createNode("Shape"));
Shape1560->setUSE("HAnimJointShape");
Transform1559->addChildren(*Shape1560);

Transform1558->addChildren(*Transform1559);

HAnimSegment1557->addChildren(*Transform1558);

CShape* Shape1561 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1562 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1562->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1563 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1563->setPoint(new float[6]{-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706});
LineSet1562->setCoord(*Coordinate1563);

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA1564 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1564->setUSE("HAnimSegmentLineColorRGBA");
LineSet1562->setColor(*ColorRGBA1564);

Shape1561->setGeometry(LineSet1562);

HAnimSegment1557->addChildren(*Shape1561);

CHAnimSite* HAnimSite1565 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1565->setName("r_carpal_distal_phalanx_4_tip");
HAnimSite1565->setDEF("hanim_r_carpal_distal_phalanx_4_tip");
CTouchSensor* TouchSensor1566 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1566->setDescription("HAnimSite r_carpal_distal_phalanx_4_tip");
HAnimSite1565->addChildren(*TouchSensor1566);

CShape* Shape1567 = (CShape *)(m_pScene.createNode("Shape"));
Shape1567->setUSE("HAnimSiteShape");
HAnimSite1565->addChildren(*Shape1567);

HAnimSegment1557->addChildren(*HAnimSite1565);

HAnimJoint1556->addChildren(*HAnimSegment1557);

CHAnimJoint* HAnimJoint1568 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1568->setName("r_carpal_distal_interphalangeal_4");
HAnimJoint1568->setDEF("hanim_r_carpal_distal_interphalangeal_4");
HAnimJoint1568->setCenter(new float[3]{-0.1908,0.7077,-0.0706});
HAnimJoint1568->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1568->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1556->addChildren(*HAnimJoint1568);

HAnimJoint1547->addChildren(*HAnimJoint1556);

HAnimJoint1538->addChildren(*HAnimJoint1547);

HAnimJoint1522->addChildren(*HAnimJoint1538);

CHAnimJoint* HAnimJoint1569 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1569->setName("r_carpometacarpal_5");
HAnimJoint1569->setDEF("hanim_r_carpometacarpal_5");
HAnimJoint1569->setCenter(new float[3]{-0.1926,0.8096,-0.0975});
HAnimJoint1569->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1569->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1570 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1570->setName("r_metacarpal_5");
HAnimSegment1570->setDEF("hanim_r_metacarpal_5");
CTransform* Transform1571 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1571->setTranslation(new float[3]{-0.1926,0.8096,-0.0975});
CTransform* Transform1572 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1573 = (CShape *)(m_pScene.createNode("Shape"));
Shape1573->setUSE("HAnimJointShape");
Transform1572->addChildren(*Shape1573);

Transform1571->addChildren(*Transform1572);

HAnimSegment1570->addChildren(*Transform1571);

CShape* Shape1574 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1575 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1575->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1576 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1576->setPoint(new float[6]{-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975});
LineSet1575->setCoord(*Coordinate1576);

//from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
CColorRGBA* ColorRGBA1577 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1577->setUSE("HAnimSegmentLineColorRGBA");
LineSet1575->setColor(*ColorRGBA1577);

Shape1574->setGeometry(LineSet1575);

HAnimSegment1570->addChildren(*Shape1574);

HAnimJoint1569->addChildren(*HAnimSegment1570);

CHAnimJoint* HAnimJoint1578 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1578->setName("r_metacarpophalangeal_5");
HAnimJoint1578->setDEF("hanim_r_metacarpophalangeal_5");
HAnimJoint1578->setCenter(new float[3]{-0.1926,0.7896,-0.0975});
HAnimJoint1578->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1578->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1579 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1579->setName("r_carpal_proximal_phalanx_5");
HAnimSegment1579->setDEF("hanim_r_carpal_proximal_phalanx_5");
CTransform* Transform1580 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1580->setTranslation(new float[3]{-0.1926,0.7896,-0.0975});
CTransform* Transform1581 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1582 = (CShape *)(m_pScene.createNode("Shape"));
Shape1582->setUSE("HAnimJointShape");
Transform1581->addChildren(*Shape1582);

Transform1580->addChildren(*Transform1581);

HAnimSegment1579->addChildren(*Transform1580);

CShape* Shape1583 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1584 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1584->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1585 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1585->setPoint(new float[6]{-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963});
LineSet1584->setCoord(*Coordinate1585);

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA1586 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1586->setUSE("HAnimSegmentLineColorRGBA");
LineSet1584->setColor(*ColorRGBA1586);

Shape1583->setGeometry(LineSet1584);

HAnimSegment1579->addChildren(*Shape1583);

HAnimJoint1578->addChildren(*HAnimSegment1579);

CHAnimJoint* HAnimJoint1587 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1587->setName("r_carpal_proximal_interphalangeal_5");
HAnimJoint1587->setDEF("hanim_r_carpal_proximal_interphalangeal_5");
HAnimJoint1587->setCenter(new float[3]{-0.1902,0.7483,-0.0963});
HAnimJoint1587->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1587->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1588 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1588->setName("r_carpal_middle_phalanx_5");
HAnimSegment1588->setDEF("hanim_r_carpal_middle_phalanx_5");
CTransform* Transform1589 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1589->setTranslation(new float[3]{-0.1902,0.7483,-0.0963});
CTransform* Transform1590 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1591 = (CShape *)(m_pScene.createNode("Shape"));
Shape1591->setUSE("HAnimJointShape");
Transform1590->addChildren(*Shape1591);

Transform1589->addChildren(*Transform1590);

HAnimSegment1588->addChildren(*Transform1589);

CShape* Shape1592 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1593 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1593->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1594 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1594->setPoint(new float[6]{-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096});
LineSet1593->setCoord(*Coordinate1594);

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA1595 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1595->setUSE("HAnimSegmentLineColorRGBA");
LineSet1593->setColor(*ColorRGBA1595);

Shape1592->setGeometry(LineSet1593);

HAnimSegment1588->addChildren(*Shape1592);

CHAnimSite* HAnimSite1596 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1596->setName("r_carpal_distal_phalanx_5_tip");
HAnimSite1596->setDEF("hanim_r_carpal_distal_phalanx_5_tip");
CTouchSensor* TouchSensor1597 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1597->setDescription("HAnimSite r_carpal_distal_phalanx_5_tip");
HAnimSite1596->addChildren(*TouchSensor1597);

CShape* Shape1598 = (CShape *)(m_pScene.createNode("Shape"));
Shape1598->setUSE("HAnimSiteShape");
HAnimSite1596->addChildren(*Shape1598);

HAnimSegment1588->addChildren(*HAnimSite1596);

HAnimJoint1587->addChildren(*HAnimSegment1588);

CHAnimJoint* HAnimJoint1599 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1599->setName("r_carpal_distal_interphalangeal_5");
HAnimJoint1599->setDEF("hanim_r_carpal_distal_interphalangeal_5");
HAnimJoint1599->setCenter(new float[3]{-0.1908,0.754,-0.096});
HAnimJoint1599->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1599->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1587->addChildren(*HAnimJoint1599);

HAnimJoint1578->addChildren(*HAnimJoint1587);

HAnimJoint1569->addChildren(*HAnimJoint1578);

HAnimJoint1522->addChildren(*HAnimJoint1569);

HAnimJoint1381->addChildren(*HAnimJoint1522);

HAnimJoint1369->addChildren(*HAnimJoint1381);

HAnimJoint1348->addChildren(*HAnimJoint1369);

HAnimJoint1333->addChildren(*HAnimJoint1348);

HAnimJoint1324->addChildren(*HAnimJoint1333);

HAnimJoint844->addChildren(*HAnimJoint1324);

HAnimJoint829->addChildren(*HAnimJoint844);

HAnimJoint820->addChildren(*HAnimJoint829);

HAnimJoint811->addChildren(*HAnimJoint820);

HAnimJoint802->addChildren(*HAnimJoint811);

HAnimJoint790->addChildren(*HAnimJoint802);

HAnimJoint769->addChildren(*HAnimJoint790);

HAnimJoint760->addChildren(*HAnimJoint769);

HAnimJoint751->addChildren(*HAnimJoint760);

HAnimJoint736->addChildren(*HAnimJoint751);

HAnimJoint724->addChildren(*HAnimJoint736);

HAnimJoint715->addChildren(*HAnimJoint724);

HAnimJoint706->addChildren(*HAnimJoint715);

HAnimJoint697->addChildren(*HAnimJoint706);

HAnimJoint679->addChildren(*HAnimJoint697);

HAnimJoint670->addChildren(*HAnimJoint679);

HAnimJoint661->addChildren(*HAnimJoint670);

HAnimJoint44->addChildren(*HAnimJoint661);

HAnimHumanoid43->setSkeleton(*HAnimJoint44);

CHAnimJoint* HAnimJoint1600 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1600->setUSE("hanim_humanoid_root");
HAnimHumanoid43->addJoints(*HAnimJoint1600);

CHAnimJoint* HAnimJoint1601 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1601->setUSE("hanim_sacroiliac");
HAnimHumanoid43->addJoints(*HAnimJoint1601);

CHAnimJoint* HAnimJoint1602 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1602->setUSE("hanim_l_hip");
HAnimHumanoid43->addJoints(*HAnimJoint1602);

CHAnimJoint* HAnimJoint1603 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1603->setUSE("hanim_l_knee");
HAnimHumanoid43->addJoints(*HAnimJoint1603);

CHAnimJoint* HAnimJoint1604 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1604->setUSE("hanim_l_talocrural");
HAnimHumanoid43->addJoints(*HAnimJoint1604);

CHAnimJoint* HAnimJoint1605 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1605->setUSE("hanim_l_talocalcaneonavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1605);

CHAnimJoint* HAnimJoint1606 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1606->setUSE("hanim_l_cuneonavicular_1");
HAnimHumanoid43->addJoints(*HAnimJoint1606);

CHAnimJoint* HAnimJoint1607 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1607->setUSE("hanim_l_tarsometatarsal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1607);

CHAnimJoint* HAnimJoint1608 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1608->setUSE("hanim_l_metatarsophalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1608);

CHAnimJoint* HAnimJoint1609 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1609->setUSE("hanim_l_tarsal_interphalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1609);

CHAnimJoint* HAnimJoint1610 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1610->setUSE("hanim_l_cuneonavicular_2");
HAnimHumanoid43->addJoints(*HAnimJoint1610);

CHAnimJoint* HAnimJoint1611 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1611->setUSE("hanim_l_tarsometatarsal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1611);

CHAnimJoint* HAnimJoint1612 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1612->setUSE("hanim_l_metatarsophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1612);

CHAnimJoint* HAnimJoint1613 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1613->setUSE("hanim_l_tarsal_proximal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1613);

CHAnimJoint* HAnimJoint1614 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1614->setUSE("hanim_l_tarsal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1614);

CHAnimJoint* HAnimJoint1615 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1615->setUSE("hanim_l_cuneonavicular_3");
HAnimHumanoid43->addJoints(*HAnimJoint1615);

CHAnimJoint* HAnimJoint1616 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1616->setUSE("hanim_l_tarsometatarsal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1616);

CHAnimJoint* HAnimJoint1617 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1617->setUSE("hanim_l_metatarsophalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1617);

CHAnimJoint* HAnimJoint1618 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1618->setUSE("hanim_l_tarsal_proximal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1618);

CHAnimJoint* HAnimJoint1619 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1619->setUSE("hanim_l_tarsal_distal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1619);

CHAnimJoint* HAnimJoint1620 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1620->setUSE("hanim_l_calcaneocuboid");
HAnimHumanoid43->addJoints(*HAnimJoint1620);

CHAnimJoint* HAnimJoint1621 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1621->setUSE("hanim_l_transversetarsal");
HAnimHumanoid43->addJoints(*HAnimJoint1621);

CHAnimJoint* HAnimJoint1622 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1622->setUSE("hanim_l_tarsometatarsal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1622);

CHAnimJoint* HAnimJoint1623 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1623->setUSE("hanim_l_metatarsophalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1623);

CHAnimJoint* HAnimJoint1624 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1624->setUSE("hanim_l_tarsal_proximal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1624);

CHAnimJoint* HAnimJoint1625 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1625->setUSE("hanim_l_tarsal_distal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1625);

CHAnimJoint* HAnimJoint1626 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1626->setUSE("hanim_l_tarsometatarsal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1626);

CHAnimJoint* HAnimJoint1627 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1627->setUSE("hanim_l_metatarsophalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1627);

CHAnimJoint* HAnimJoint1628 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1628->setUSE("hanim_l_tarsal_proximal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1628);

CHAnimJoint* HAnimJoint1629 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1629->setUSE("hanim_l_tarsal_distal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1629);

CHAnimJoint* HAnimJoint1630 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1630->setUSE("hanim_r_hip");
HAnimHumanoid43->addJoints(*HAnimJoint1630);

CHAnimJoint* HAnimJoint1631 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1631->setUSE("hanim_r_knee");
HAnimHumanoid43->addJoints(*HAnimJoint1631);

CHAnimJoint* HAnimJoint1632 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1632->setUSE("hanim_r_talocrural");
HAnimHumanoid43->addJoints(*HAnimJoint1632);

CHAnimJoint* HAnimJoint1633 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1633->setUSE("hanim_r_talocalcaneonavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1633);

CHAnimJoint* HAnimJoint1634 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1634->setUSE("hanim_r_cuneonavicular_1");
HAnimHumanoid43->addJoints(*HAnimJoint1634);

CHAnimJoint* HAnimJoint1635 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1635->setUSE("hanim_r_tarsometatarsal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1635);

CHAnimJoint* HAnimJoint1636 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1636->setUSE("hanim_r_metatarsophalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1636);

CHAnimJoint* HAnimJoint1637 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1637->setUSE("hanim_r_tarsal_interphalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1637);

CHAnimJoint* HAnimJoint1638 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1638->setUSE("hanim_r_cuneonavicular_2");
HAnimHumanoid43->addJoints(*HAnimJoint1638);

CHAnimJoint* HAnimJoint1639 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1639->setUSE("hanim_r_tarsometatarsal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1639);

CHAnimJoint* HAnimJoint1640 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1640->setUSE("hanim_r_metatarsophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1640);

CHAnimJoint* HAnimJoint1641 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1641->setUSE("hanim_r_tarsal_proximal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1641);

CHAnimJoint* HAnimJoint1642 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1642->setUSE("hanim_r_tarsal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1642);

CHAnimJoint* HAnimJoint1643 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1643->setUSE("hanim_r_cuneonavicular_3");
HAnimHumanoid43->addJoints(*HAnimJoint1643);

CHAnimJoint* HAnimJoint1644 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1644->setUSE("hanim_r_tarsometatarsal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1644);

CHAnimJoint* HAnimJoint1645 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1645->setUSE("hanim_r_metatarsophalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1645);

CHAnimJoint* HAnimJoint1646 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1646->setUSE("hanim_r_tarsal_proximal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1646);

CHAnimJoint* HAnimJoint1647 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1647->setUSE("hanim_r_tarsal_distal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1647);

CHAnimJoint* HAnimJoint1648 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1648->setUSE("hanim_r_calcaneocuboid");
HAnimHumanoid43->addJoints(*HAnimJoint1648);

CHAnimJoint* HAnimJoint1649 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1649->setUSE("hanim_r_transversetarsal");
HAnimHumanoid43->addJoints(*HAnimJoint1649);

CHAnimJoint* HAnimJoint1650 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1650->setUSE("hanim_r_tarsometatarsal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1650);

CHAnimJoint* HAnimJoint1651 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1651->setUSE("hanim_r_metatarsophalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1651);

CHAnimJoint* HAnimJoint1652 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1652->setUSE("hanim_r_tarsal_proximal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1652);

CHAnimJoint* HAnimJoint1653 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1653->setUSE("hanim_r_tarsal_distal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1653);

CHAnimJoint* HAnimJoint1654 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1654->setUSE("hanim_r_tarsometatarsal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1654);

CHAnimJoint* HAnimJoint1655 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1655->setUSE("hanim_r_metatarsophalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1655);

CHAnimJoint* HAnimJoint1656 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1656->setUSE("hanim_r_tarsal_proximal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1656);

CHAnimJoint* HAnimJoint1657 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1657->setUSE("hanim_r_tarsal_distal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1657);

CHAnimJoint* HAnimJoint1658 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1658->setUSE("hanim_vl5");
HAnimHumanoid43->addJoints(*HAnimJoint1658);

CHAnimJoint* HAnimJoint1659 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1659->setUSE("hanim_vl4");
HAnimHumanoid43->addJoints(*HAnimJoint1659);

CHAnimJoint* HAnimJoint1660 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1660->setUSE("hanim_vl3");
HAnimHumanoid43->addJoints(*HAnimJoint1660);

CHAnimJoint* HAnimJoint1661 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1661->setUSE("hanim_vl2");
HAnimHumanoid43->addJoints(*HAnimJoint1661);

CHAnimJoint* HAnimJoint1662 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1662->setUSE("hanim_vl1");
HAnimHumanoid43->addJoints(*HAnimJoint1662);

CHAnimJoint* HAnimJoint1663 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1663->setUSE("hanim_vt12");
HAnimHumanoid43->addJoints(*HAnimJoint1663);

CHAnimJoint* HAnimJoint1664 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1664->setUSE("hanim_vt11");
HAnimHumanoid43->addJoints(*HAnimJoint1664);

CHAnimJoint* HAnimJoint1665 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1665->setUSE("hanim_vt10");
HAnimHumanoid43->addJoints(*HAnimJoint1665);

CHAnimJoint* HAnimJoint1666 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1666->setUSE("hanim_vt9");
HAnimHumanoid43->addJoints(*HAnimJoint1666);

CHAnimJoint* HAnimJoint1667 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1667->setUSE("hanim_vt8");
HAnimHumanoid43->addJoints(*HAnimJoint1667);

CHAnimJoint* HAnimJoint1668 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1668->setUSE("hanim_vt7");
HAnimHumanoid43->addJoints(*HAnimJoint1668);

CHAnimJoint* HAnimJoint1669 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1669->setUSE("hanim_vt6");
HAnimHumanoid43->addJoints(*HAnimJoint1669);

CHAnimJoint* HAnimJoint1670 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1670->setUSE("hanim_vt5");
HAnimHumanoid43->addJoints(*HAnimJoint1670);

CHAnimJoint* HAnimJoint1671 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1671->setUSE("hanim_vt4");
HAnimHumanoid43->addJoints(*HAnimJoint1671);

CHAnimJoint* HAnimJoint1672 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1672->setUSE("hanim_vt3");
HAnimHumanoid43->addJoints(*HAnimJoint1672);

CHAnimJoint* HAnimJoint1673 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1673->setUSE("hanim_vt2");
HAnimHumanoid43->addJoints(*HAnimJoint1673);

CHAnimJoint* HAnimJoint1674 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1674->setUSE("hanim_vt1");
HAnimHumanoid43->addJoints(*HAnimJoint1674);

CHAnimJoint* HAnimJoint1675 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1675->setUSE("hanim_vc7");
HAnimHumanoid43->addJoints(*HAnimJoint1675);

CHAnimJoint* HAnimJoint1676 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1676->setUSE("hanim_vc6");
HAnimHumanoid43->addJoints(*HAnimJoint1676);

CHAnimJoint* HAnimJoint1677 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1677->setUSE("hanim_vc5");
HAnimHumanoid43->addJoints(*HAnimJoint1677);

CHAnimJoint* HAnimJoint1678 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1678->setUSE("hanim_vc4");
HAnimHumanoid43->addJoints(*HAnimJoint1678);

CHAnimJoint* HAnimJoint1679 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1679->setUSE("hanim_vc3");
HAnimHumanoid43->addJoints(*HAnimJoint1679);

CHAnimJoint* HAnimJoint1680 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1680->setUSE("hanim_vc2");
HAnimHumanoid43->addJoints(*HAnimJoint1680);

CHAnimJoint* HAnimJoint1681 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1681->setUSE("hanim_vc1");
HAnimHumanoid43->addJoints(*HAnimJoint1681);

CHAnimJoint* HAnimJoint1682 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1682->setUSE("hanim_skullbase");
HAnimHumanoid43->addJoints(*HAnimJoint1682);

CHAnimJoint* HAnimJoint1683 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1683->setUSE("hanim_l_eyelid_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1683);

CHAnimJoint* HAnimJoint1684 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1684->setUSE("hanim_r_eyelid_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1684);

CHAnimJoint* HAnimJoint1685 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1685->setUSE("hanim_l_eyeball_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1685);

CHAnimJoint* HAnimJoint1686 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1686->setUSE("hanim_r_eyeball_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1686);

CHAnimJoint* HAnimJoint1687 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1687->setUSE("hanim_l_eyebrow_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1687);

CHAnimJoint* HAnimJoint1688 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1688->setUSE("hanim_r_eyebrow_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1688);

CHAnimJoint* HAnimJoint1689 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1689->setUSE("hanim_temporomandibular");
HAnimHumanoid43->addJoints(*HAnimJoint1689);

CHAnimJoint* HAnimJoint1690 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1690->setUSE("hanim_l_sternoclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1690);

CHAnimJoint* HAnimJoint1691 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1691->setUSE("hanim_l_acromioclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1691);

CHAnimJoint* HAnimJoint1692 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1692->setUSE("hanim_l_shoulder");
HAnimHumanoid43->addJoints(*HAnimJoint1692);

CHAnimJoint* HAnimJoint1693 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1693->setUSE("hanim_l_elbow");
HAnimHumanoid43->addJoints(*HAnimJoint1693);

CHAnimJoint* HAnimJoint1694 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1694->setUSE("hanim_l_radiocarpal");
HAnimHumanoid43->addJoints(*HAnimJoint1694);

CHAnimJoint* HAnimJoint1695 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1695->setUSE("hanim_l_midcarpal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1695);

CHAnimJoint* HAnimJoint1696 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1696->setUSE("hanim_l_carpometacarpal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1696);

CHAnimJoint* HAnimJoint1697 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1697->setUSE("hanim_l_metacarpophalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1697);

CHAnimJoint* HAnimJoint1698 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1698->setUSE("hanim_l_carpal_interphalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1698);

CHAnimJoint* HAnimJoint1699 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1699->setUSE("hanim_l_midcarpal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1699);

CHAnimJoint* HAnimJoint1700 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1700->setUSE("hanim_l_carpometacarpal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1700);

CHAnimJoint* HAnimJoint1701 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1701->setUSE("hanim_l_metacarpophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1701);

CHAnimJoint* HAnimJoint1702 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1702->setUSE("hanim_l_carpal_proximal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1702);

CHAnimJoint* HAnimJoint1703 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1703->setUSE("hanim_l_carpal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1703);

CHAnimJoint* HAnimJoint1704 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1704->setUSE("hanim_l_midcarpal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1704);

CHAnimJoint* HAnimJoint1705 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1705->setUSE("hanim_l_carpometacarpal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1705);

CHAnimJoint* HAnimJoint1706 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1706->setUSE("hanim_l_metacarpophalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1706);

CHAnimJoint* HAnimJoint1707 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1707->setUSE("hanim_l_carpal_proximal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1707);

CHAnimJoint* HAnimJoint1708 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1708->setUSE("hanim_l_carpal_distal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1708);

CHAnimJoint* HAnimJoint1709 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1709->setUSE("hanim_l_midcarpal_4_5");
HAnimHumanoid43->addJoints(*HAnimJoint1709);

CHAnimJoint* HAnimJoint1710 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1710->setUSE("hanim_l_carpometacarpal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1710);

CHAnimJoint* HAnimJoint1711 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1711->setUSE("hanim_l_metacarpophalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1711);

CHAnimJoint* HAnimJoint1712 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1712->setUSE("hanim_l_carpal_proximal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1712);

CHAnimJoint* HAnimJoint1713 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1713->setUSE("hanim_l_carpal_distal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1713);

CHAnimJoint* HAnimJoint1714 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1714->setUSE("hanim_l_carpometacarpal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1714);

CHAnimJoint* HAnimJoint1715 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1715->setUSE("hanim_l_metacarpophalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1715);

CHAnimJoint* HAnimJoint1716 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1716->setUSE("hanim_l_carpal_proximal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1716);

CHAnimJoint* HAnimJoint1717 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1717->setUSE("hanim_l_carpal_distal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1717);

CHAnimJoint* HAnimJoint1718 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1718->setUSE("hanim_r_sternoclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1718);

CHAnimJoint* HAnimJoint1719 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1719->setUSE("hanim_r_acromioclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1719);

CHAnimJoint* HAnimJoint1720 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1720->setUSE("hanim_r_shoulder");
HAnimHumanoid43->addJoints(*HAnimJoint1720);

CHAnimJoint* HAnimJoint1721 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1721->setUSE("hanim_r_elbow");
HAnimHumanoid43->addJoints(*HAnimJoint1721);

CHAnimJoint* HAnimJoint1722 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1722->setUSE("hanim_r_radiocarpal");
HAnimHumanoid43->addJoints(*HAnimJoint1722);

CHAnimJoint* HAnimJoint1723 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1723->setUSE("hanim_r_midcarpal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1723);

CHAnimJoint* HAnimJoint1724 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1724->setUSE("hanim_r_carpometacarpal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1724);

CHAnimJoint* HAnimJoint1725 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1725->setUSE("hanim_r_metacarpophalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1725);

CHAnimJoint* HAnimJoint1726 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1726->setUSE("hanim_r_carpal_interphalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1726);

CHAnimJoint* HAnimJoint1727 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1727->setUSE("hanim_r_midcarpal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1727);

CHAnimJoint* HAnimJoint1728 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1728->setUSE("hanim_r_carpometacarpal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1728);

CHAnimJoint* HAnimJoint1729 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1729->setUSE("hanim_r_metacarpophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1729);

CHAnimJoint* HAnimJoint1730 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1730->setUSE("hanim_r_carpal_proximal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1730);

CHAnimJoint* HAnimJoint1731 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1731->setUSE("hanim_r_carpal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1731);

CHAnimJoint* HAnimJoint1732 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1732->setUSE("hanim_r_midcarpal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1732);

CHAnimJoint* HAnimJoint1733 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1733->setUSE("hanim_r_carpometacarpal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1733);

CHAnimJoint* HAnimJoint1734 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1734->setUSE("hanim_r_metacarpophalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1734);

CHAnimJoint* HAnimJoint1735 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1735->setUSE("hanim_r_carpal_proximal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1735);

CHAnimJoint* HAnimJoint1736 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1736->setUSE("hanim_r_carpal_distal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1736);

CHAnimJoint* HAnimJoint1737 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1737->setUSE("hanim_r_midcarpal_4_5");
HAnimHumanoid43->addJoints(*HAnimJoint1737);

CHAnimJoint* HAnimJoint1738 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1738->setUSE("hanim_r_carpometacarpal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1738);

CHAnimJoint* HAnimJoint1739 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1739->setUSE("hanim_r_metacarpophalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1739);

CHAnimJoint* HAnimJoint1740 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1740->setUSE("hanim_r_carpal_proximal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1740);

CHAnimJoint* HAnimJoint1741 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1741->setUSE("hanim_r_carpal_distal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1741);

CHAnimJoint* HAnimJoint1742 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1742->setUSE("hanim_r_carpometacarpal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1742);

CHAnimJoint* HAnimJoint1743 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1743->setUSE("hanim_r_metacarpophalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1743);

CHAnimJoint* HAnimJoint1744 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1744->setUSE("hanim_r_carpal_proximal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1744);

CHAnimJoint* HAnimJoint1745 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1745->setUSE("hanim_r_carpal_distal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1745);

CHAnimSegment* HAnimSegment1746 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1746->setUSE("hanim_sacrum");
HAnimHumanoid43->setSegments(*HAnimSegment1746);

CHAnimSegment* HAnimSegment1747 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1747->setUSE("hanim_pelvis");
HAnimHumanoid43->setSegments(*HAnimSegment1747);

CHAnimSegment* HAnimSegment1748 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1748->setUSE("hanim_l_thigh");
HAnimHumanoid43->setSegments(*HAnimSegment1748);

CHAnimSegment* HAnimSegment1749 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1749->setUSE("hanim_l_calf");
HAnimHumanoid43->setSegments(*HAnimSegment1749);

CHAnimSegment* HAnimSegment1750 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1750->setUSE("hanim_l_talus");
HAnimHumanoid43->setSegments(*HAnimSegment1750);

CHAnimSegment* HAnimSegment1751 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1751->setUSE("hanim_l_navicular");
HAnimHumanoid43->setSegments(*HAnimSegment1751);

CHAnimSegment* HAnimSegment1752 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1752->setUSE("hanim_l_cuneiform_1");
HAnimHumanoid43->setSegments(*HAnimSegment1752);

CHAnimSegment* HAnimSegment1753 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1753->setUSE("hanim_l_metatarsal_1");
HAnimHumanoid43->setSegments(*HAnimSegment1753);

CHAnimSegment* HAnimSegment1754 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1754->setUSE("hanim_l_tarsal_proximal_phalanx_1");
HAnimHumanoid43->setSegments(*HAnimSegment1754);

CHAnimSegment* HAnimSegment1755 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1755->setUSE("hanim_l_cuneiform_2");
HAnimHumanoid43->setSegments(*HAnimSegment1755);

CHAnimSegment* HAnimSegment1756 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1756->setUSE("hanim_l_metatarsal_2");
HAnimHumanoid43->setSegments(*HAnimSegment1756);

CHAnimSegment* HAnimSegment1757 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1757->setUSE("hanim_l_tarsal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1757);

CHAnimSegment* HAnimSegment1758 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1758->setUSE("hanim_l_tarsal_middle_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1758);

CHAnimSegment* HAnimSegment1759 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1759->setUSE("hanim_l_cuneiform_3");
HAnimHumanoid43->setSegments(*HAnimSegment1759);

CHAnimSegment* HAnimSegment1760 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1760->setUSE("hanim_l_metatarsal_3");
HAnimHumanoid43->setSegments(*HAnimSegment1760);

CHAnimSegment* HAnimSegment1761 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1761->setUSE("hanim_l_tarsal_proximal_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1761);

CHAnimSegment* HAnimSegment1762 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1762->setUSE("hanim_l_tarsal_middle_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1762);

CHAnimSegment* HAnimSegment1763 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1763->setUSE("hanim_l_calcaneus");
HAnimHumanoid43->setSegments(*HAnimSegment1763);

CHAnimSegment* HAnimSegment1764 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1764->setUSE("hanim_l_cuboid");
HAnimHumanoid43->setSegments(*HAnimSegment1764);

CHAnimSegment* HAnimSegment1765 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1765->setUSE("hanim_l_metatarsal_4");
HAnimHumanoid43->setSegments(*HAnimSegment1765);

CHAnimSegment* HAnimSegment1766 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1766->setUSE("hanim_l_tarsal_proximal_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1766);

CHAnimSegment* HAnimSegment1767 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1767->setUSE("hanim_l_tarsal_middle_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1767);

CHAnimSegment* HAnimSegment1768 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1768->setUSE("hanim_l_metatarsal_5");
HAnimHumanoid43->setSegments(*HAnimSegment1768);

CHAnimSegment* HAnimSegment1769 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1769->setUSE("hanim_l_tarsal_proximal_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1769);

CHAnimSegment* HAnimSegment1770 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1770->setUSE("hanim_l_tarsal_middle_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1770);

CHAnimSegment* HAnimSegment1771 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1771->setUSE("hanim_r_thigh");
HAnimHumanoid43->setSegments(*HAnimSegment1771);

CHAnimSegment* HAnimSegment1772 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1772->setUSE("hanim_r_calf");
HAnimHumanoid43->setSegments(*HAnimSegment1772);

CHAnimSegment* HAnimSegment1773 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1773->setUSE("hanim_r_talus");
HAnimHumanoid43->setSegments(*HAnimSegment1773);

CHAnimSegment* HAnimSegment1774 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1774->setUSE("hanim_r_navicular");
HAnimHumanoid43->setSegments(*HAnimSegment1774);

CHAnimSegment* HAnimSegment1775 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1775->setUSE("hanim_r_cuneiform_1");
HAnimHumanoid43->setSegments(*HAnimSegment1775);

CHAnimSegment* HAnimSegment1776 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1776->setUSE("hanim_r_metatarsal_1");
HAnimHumanoid43->setSegments(*HAnimSegment1776);

CHAnimSegment* HAnimSegment1777 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1777->setUSE("hanim_r_tarsal_proximal_phalanx_1");
HAnimHumanoid43->setSegments(*HAnimSegment1777);

CHAnimSegment* HAnimSegment1778 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1778->setUSE("hanim_r_cuneiform_2");
HAnimHumanoid43->setSegments(*HAnimSegment1778);

CHAnimSegment* HAnimSegment1779 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1779->setUSE("hanim_r_metatarsal_2");
HAnimHumanoid43->setSegments(*HAnimSegment1779);

CHAnimSegment* HAnimSegment1780 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1780->setUSE("hanim_r_tarsal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1780);

CHAnimSegment* HAnimSegment1781 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1781->setUSE("hanim_r_tarsal_middle_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1781);

CHAnimSegment* HAnimSegment1782 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1782->setUSE("hanim_r_cuneiform_3");
HAnimHumanoid43->setSegments(*HAnimSegment1782);

CHAnimSegment* HAnimSegment1783 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1783->setUSE("hanim_r_metatarsal_3");
HAnimHumanoid43->setSegments(*HAnimSegment1783);

CHAnimSegment* HAnimSegment1784 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1784->setUSE("hanim_r_tarsal_proximal_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1784);

CHAnimSegment* HAnimSegment1785 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1785->setUSE("hanim_r_tarsal_middle_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1785);

CHAnimSegment* HAnimSegment1786 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1786->setUSE("hanim_r_calcaneus");
HAnimHumanoid43->setSegments(*HAnimSegment1786);

CHAnimSegment* HAnimSegment1787 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1787->setUSE("hanim_r_cuboid");
HAnimHumanoid43->setSegments(*HAnimSegment1787);

CHAnimSegment* HAnimSegment1788 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1788->setUSE("hanim_r_metatarsal_4");
HAnimHumanoid43->setSegments(*HAnimSegment1788);

CHAnimSegment* HAnimSegment1789 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1789->setUSE("hanim_r_tarsal_proximal_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1789);

CHAnimSegment* HAnimSegment1790 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1790->setUSE("hanim_r_tarsal_middle_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1790);

CHAnimSegment* HAnimSegment1791 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1791->setUSE("hanim_r_metatarsal_5");
HAnimHumanoid43->setSegments(*HAnimSegment1791);

CHAnimSegment* HAnimSegment1792 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1792->setUSE("hanim_r_tarsal_proximal_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1792);

CHAnimSegment* HAnimSegment1793 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1793->setUSE("hanim_r_tarsal_middle_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1793);

CHAnimSegment* HAnimSegment1794 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1794->setUSE("hanim_l5");
HAnimHumanoid43->setSegments(*HAnimSegment1794);

CHAnimSegment* HAnimSegment1795 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1795->setUSE("hanim_l4");
HAnimHumanoid43->setSegments(*HAnimSegment1795);

CHAnimSegment* HAnimSegment1796 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1796->setUSE("hanim_l3");
HAnimHumanoid43->setSegments(*HAnimSegment1796);

CHAnimSegment* HAnimSegment1797 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1797->setUSE("hanim_l2");
HAnimHumanoid43->setSegments(*HAnimSegment1797);

CHAnimSegment* HAnimSegment1798 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1798->setUSE("hanim_l1");
HAnimHumanoid43->setSegments(*HAnimSegment1798);

CHAnimSegment* HAnimSegment1799 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1799->setUSE("hanim_t12");
HAnimHumanoid43->setSegments(*HAnimSegment1799);

CHAnimSegment* HAnimSegment1800 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1800->setUSE("hanim_t11");
HAnimHumanoid43->setSegments(*HAnimSegment1800);

CHAnimSegment* HAnimSegment1801 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1801->setUSE("hanim_t10");
HAnimHumanoid43->setSegments(*HAnimSegment1801);

CHAnimSegment* HAnimSegment1802 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1802->setUSE("hanim_t9");
HAnimHumanoid43->setSegments(*HAnimSegment1802);

CHAnimSegment* HAnimSegment1803 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1803->setUSE("hanim_t8");
HAnimHumanoid43->setSegments(*HAnimSegment1803);

CHAnimSegment* HAnimSegment1804 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1804->setUSE("hanim_t7");
HAnimHumanoid43->setSegments(*HAnimSegment1804);

CHAnimSegment* HAnimSegment1805 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1805->setUSE("hanim_t6");
HAnimHumanoid43->setSegments(*HAnimSegment1805);

CHAnimSegment* HAnimSegment1806 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1806->setUSE("hanim_t5");
HAnimHumanoid43->setSegments(*HAnimSegment1806);

CHAnimSegment* HAnimSegment1807 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1807->setUSE("hanim_t4");
HAnimHumanoid43->setSegments(*HAnimSegment1807);

CHAnimSegment* HAnimSegment1808 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1808->setUSE("hanim_t3");
HAnimHumanoid43->setSegments(*HAnimSegment1808);

CHAnimSegment* HAnimSegment1809 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1809->setUSE("hanim_t2");
HAnimHumanoid43->setSegments(*HAnimSegment1809);

CHAnimSegment* HAnimSegment1810 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1810->setUSE("hanim_t1");
HAnimHumanoid43->setSegments(*HAnimSegment1810);

CHAnimSegment* HAnimSegment1811 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1811->setUSE("hanim_c7");
HAnimHumanoid43->setSegments(*HAnimSegment1811);

CHAnimSegment* HAnimSegment1812 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1812->setUSE("hanim_c6");
HAnimHumanoid43->setSegments(*HAnimSegment1812);

CHAnimSegment* HAnimSegment1813 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1813->setUSE("hanim_c5");
HAnimHumanoid43->setSegments(*HAnimSegment1813);

CHAnimSegment* HAnimSegment1814 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1814->setUSE("hanim_c4");
HAnimHumanoid43->setSegments(*HAnimSegment1814);

CHAnimSegment* HAnimSegment1815 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1815->setUSE("hanim_c3");
HAnimHumanoid43->setSegments(*HAnimSegment1815);

CHAnimSegment* HAnimSegment1816 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1816->setUSE("hanim_c2");
HAnimHumanoid43->setSegments(*HAnimSegment1816);

CHAnimSegment* HAnimSegment1817 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1817->setUSE("hanim_c1");
HAnimHumanoid43->setSegments(*HAnimSegment1817);

CHAnimSegment* HAnimSegment1818 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1818->setUSE("hanim_skull");
HAnimHumanoid43->setSegments(*HAnimSegment1818);

CHAnimSegment* HAnimSegment1819 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1819->setUSE("hanim_l_clavicle");
HAnimHumanoid43->setSegments(*HAnimSegment1819);

CHAnimSegment* HAnimSegment1820 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1820->setUSE("hanim_l_scapula");
HAnimHumanoid43->setSegments(*HAnimSegment1820);

CHAnimSegment* HAnimSegment1821 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1821->setUSE("hanim_l_upperarm");
HAnimHumanoid43->setSegments(*HAnimSegment1821);

CHAnimSegment* HAnimSegment1822 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1822->setUSE("hanim_l_forearm");
HAnimHumanoid43->setSegments(*HAnimSegment1822);

CHAnimSegment* HAnimSegment1823 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1823->setUSE("hanim_l_carpal");
HAnimHumanoid43->setSegments(*HAnimSegment1823);

CHAnimSegment* HAnimSegment1824 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1824->setUSE("hanim_l_trapezium");
HAnimHumanoid43->setSegments(*HAnimSegment1824);

CHAnimSegment* HAnimSegment1825 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1825->setUSE("hanim_l_metacarpal_1");
HAnimHumanoid43->setSegments(*HAnimSegment1825);

CHAnimSegment* HAnimSegment1826 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1826->setUSE("hanim_l_carpal_proximal_phalanx_1");
HAnimHumanoid43->setSegments(*HAnimSegment1826);

CHAnimSegment* HAnimSegment1827 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1827->setUSE("hanim_l_trapezoid");
HAnimHumanoid43->setSegments(*HAnimSegment1827);

CHAnimSegment* HAnimSegment1828 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1828->setUSE("hanim_l_metacarpal_2");
HAnimHumanoid43->setSegments(*HAnimSegment1828);

CHAnimSegment* HAnimSegment1829 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1829->setUSE("hanim_l_carpal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1829);

CHAnimSegment* HAnimSegment1830 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1830->setUSE("hanim_l_carpal_middle_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1830);

CHAnimSegment* HAnimSegment1831 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1831->setUSE("hanim_l_capitate");
HAnimHumanoid43->setSegments(*HAnimSegment1831);

CHAnimSegment* HAnimSegment1832 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1832->setUSE("hanim_l_metacarpal_3");
HAnimHumanoid43->setSegments(*HAnimSegment1832);

CHAnimSegment* HAnimSegment1833 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1833->setUSE("hanim_l_carpal_proximal_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1833);

CHAnimSegment* HAnimSegment1834 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1834->setUSE("hanim_l_carpal_middle_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1834);

CHAnimSegment* HAnimSegment1835 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1835->setUSE("hanim_l_hamate");
HAnimHumanoid43->setSegments(*HAnimSegment1835);

CHAnimSegment* HAnimSegment1836 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1836->setUSE("hanim_l_metacarpal_4");
HAnimHumanoid43->setSegments(*HAnimSegment1836);

CHAnimSegment* HAnimSegment1837 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1837->setUSE("hanim_l_carpal_proximal_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1837);

CHAnimSegment* HAnimSegment1838 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1838->setUSE("hanim_l_carpal_middle_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1838);

CHAnimSegment* HAnimSegment1839 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1839->setUSE("hanim_l_metacarpal_5");
HAnimHumanoid43->setSegments(*HAnimSegment1839);

CHAnimSegment* HAnimSegment1840 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1840->setUSE("hanim_l_carpal_proximal_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1840);

CHAnimSegment* HAnimSegment1841 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1841->setUSE("hanim_l_carpal_middle_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1841);

CHAnimSegment* HAnimSegment1842 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1842->setUSE("hanim_r_clavicle");
HAnimHumanoid43->setSegments(*HAnimSegment1842);

CHAnimSegment* HAnimSegment1843 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1843->setUSE("hanim_r_scapula");
HAnimHumanoid43->setSegments(*HAnimSegment1843);

CHAnimSegment* HAnimSegment1844 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1844->setUSE("hanim_r_upperarm");
HAnimHumanoid43->setSegments(*HAnimSegment1844);

CHAnimSegment* HAnimSegment1845 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1845->setUSE("hanim_r_forearm");
HAnimHumanoid43->setSegments(*HAnimSegment1845);

CHAnimSegment* HAnimSegment1846 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1846->setUSE("hanim_r_carpal");
HAnimHumanoid43->setSegments(*HAnimSegment1846);

CHAnimSegment* HAnimSegment1847 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1847->setUSE("hanim_r_trapezium");
HAnimHumanoid43->setSegments(*HAnimSegment1847);

CHAnimSegment* HAnimSegment1848 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1848->setUSE("hanim_r_metacarpal_1");
HAnimHumanoid43->setSegments(*HAnimSegment1848);

CHAnimSegment* HAnimSegment1849 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1849->setUSE("hanim_r_carpal_proximal_phalanx_1");
HAnimHumanoid43->setSegments(*HAnimSegment1849);

CHAnimSegment* HAnimSegment1850 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1850->setUSE("hanim_r_trapezoid");
HAnimHumanoid43->setSegments(*HAnimSegment1850);

CHAnimSegment* HAnimSegment1851 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1851->setUSE("hanim_r_metacarpal_2");
HAnimHumanoid43->setSegments(*HAnimSegment1851);

CHAnimSegment* HAnimSegment1852 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1852->setUSE("hanim_r_carpal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1852);

CHAnimSegment* HAnimSegment1853 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1853->setUSE("hanim_r_carpal_middle_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1853);

CHAnimSegment* HAnimSegment1854 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1854->setUSE("hanim_r_capitate");
HAnimHumanoid43->setSegments(*HAnimSegment1854);

CHAnimSegment* HAnimSegment1855 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1855->setUSE("hanim_r_metacarpal_3");
HAnimHumanoid43->setSegments(*HAnimSegment1855);

CHAnimSegment* HAnimSegment1856 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1856->setUSE("hanim_r_carpal_proximal_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1856);

CHAnimSegment* HAnimSegment1857 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1857->setUSE("hanim_r_carpal_middle_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1857);

CHAnimSegment* HAnimSegment1858 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1858->setUSE("hanim_r_hamate");
HAnimHumanoid43->setSegments(*HAnimSegment1858);

CHAnimSegment* HAnimSegment1859 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1859->setUSE("hanim_r_metacarpal_4");
HAnimHumanoid43->setSegments(*HAnimSegment1859);

CHAnimSegment* HAnimSegment1860 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1860->setUSE("hanim_r_carpal_proximal_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1860);

CHAnimSegment* HAnimSegment1861 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1861->setUSE("hanim_r_carpal_middle_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1861);

CHAnimSegment* HAnimSegment1862 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1862->setUSE("hanim_r_metacarpal_5");
HAnimHumanoid43->setSegments(*HAnimSegment1862);

CHAnimSegment* HAnimSegment1863 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1863->setUSE("hanim_r_carpal_proximal_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1863);

CHAnimSegment* HAnimSegment1864 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1864->setUSE("hanim_r_carpal_middle_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1864);

CHAnimSite* HAnimSite1865 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1865->setUSE("hanim_buttocks_standing_wall_contact_point_pt");
HAnimHumanoid43->setSites(*HAnimSite1865);

CHAnimSite* HAnimSite1866 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1866->setUSE("hanim_crotch_pt");
HAnimHumanoid43->setSites(*HAnimSite1866);

CHAnimSite* HAnimSite1867 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1867->setUSE("hanim_l_asis_pt");
HAnimHumanoid43->setSites(*HAnimSite1867);

CHAnimSite* HAnimSite1868 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1868->setUSE("hanim_l_iliocristale_pt");
HAnimHumanoid43->setSites(*HAnimSite1868);

CHAnimSite* HAnimSite1869 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1869->setUSE("hanim_l_psis_pt");
HAnimHumanoid43->setSites(*HAnimSite1869);

CHAnimSite* HAnimSite1870 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1870->setUSE("hanim_l_trochanterion_pt");
HAnimHumanoid43->setSites(*HAnimSite1870);

CHAnimSite* HAnimSite1871 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1871->setUSE("hanim_r_asis_pt");
HAnimHumanoid43->setSites(*HAnimSite1871);

CHAnimSite* HAnimSite1872 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1872->setUSE("hanim_r_iliocristale_pt");
HAnimHumanoid43->setSites(*HAnimSite1872);

CHAnimSite* HAnimSite1873 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1873->setUSE("hanim_r_psis_pt");
HAnimHumanoid43->setSites(*HAnimSite1873);

CHAnimSite* HAnimSite1874 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1874->setUSE("hanim_r_trochanterion_pt");
HAnimHumanoid43->setSites(*HAnimSite1874);

CHAnimSite* HAnimSite1875 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1875->setUSE("hanim_navel_pt");
HAnimHumanoid43->setSites(*HAnimSite1875);

CHAnimSite* HAnimSite1876 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1876->setUSE("hanim_waist_preferred_anterior_pt");
HAnimHumanoid43->setSites(*HAnimSite1876);

CHAnimSite* HAnimSite1877 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1877->setUSE("hanim_waist_preferred_posterior_pt");
HAnimHumanoid43->setSites(*HAnimSite1877);

CHAnimSite* HAnimSite1878 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1878->setUSE("hanim_l_femoral_lateral_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1878);

CHAnimSite* HAnimSite1879 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1879->setUSE("hanim_l_femoral_medial_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1879);

CHAnimSite* HAnimSite1880 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1880->setUSE("hanim_l_knee_crease_pt");
HAnimHumanoid43->setSites(*HAnimSite1880);

CHAnimSite* HAnimSite1881 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1881->setUSE("hanim_l_suprapatella_pt");
HAnimHumanoid43->setSites(*HAnimSite1881);

CHAnimSite* HAnimSite1882 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1882->setUSE("hanim_r_femoral_lateral_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1882);

CHAnimSite* HAnimSite1883 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1883->setUSE("hanim_r_femoral_medial_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1883);

CHAnimSite* HAnimSite1884 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1884->setUSE("hanim_r_knee_crease_pt");
HAnimHumanoid43->setSites(*HAnimSite1884);

CHAnimSite* HAnimSite1885 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1885->setUSE("hanim_r_suprapatella_pt");
HAnimHumanoid43->setSites(*HAnimSite1885);

CHAnimSite* HAnimSite1886 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1886->setUSE("hanim_l_lateral_malleolus_pt");
HAnimHumanoid43->setSites(*HAnimSite1886);

CHAnimSite* HAnimSite1887 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1887->setUSE("hanim_l_medial_malleolus_pt");
HAnimHumanoid43->setSites(*HAnimSite1887);

CHAnimSite* HAnimSite1888 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1888->setUSE("hanim_l_tibiale_pt");
HAnimHumanoid43->setSites(*HAnimSite1888);

CHAnimSite* HAnimSite1889 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1889->setUSE("hanim_l_calcaneus_posterior_pt");
HAnimHumanoid43->setSites(*HAnimSite1889);

CHAnimSite* HAnimSite1890 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1890->setUSE("hanim_l_sphyrion_pt");
HAnimHumanoid43->setSites(*HAnimSite1890);

CHAnimSite* HAnimSite1891 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1891->setUSE("hanim_l_metatarsal_phalanx_1_pt");
HAnimHumanoid43->setSites(*HAnimSite1891);

CHAnimSite* HAnimSite1892 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1892->setUSE("hanim_l_tarsal_distal_phalanx_1_tip");
HAnimHumanoid43->setSites(*HAnimSite1892);

CHAnimSite* HAnimSite1893 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1893->setUSE("hanim_l_tarsal_distal_phalanx_2_tip");
HAnimHumanoid43->setSites(*HAnimSite1893);

CHAnimSite* HAnimSite1894 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1894->setUSE("hanim_l_tarsal_distal_phalanx_3_tip");
HAnimHumanoid43->setSites(*HAnimSite1894);

CHAnimSite* HAnimSite1895 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1895->setUSE("hanim_l_tarsal_distal_phalanx_4_tip");
HAnimHumanoid43->setSites(*HAnimSite1895);

CHAnimSite* HAnimSite1896 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1896->setUSE("hanim_l_metatarsal_phalanx_5_pt");
HAnimHumanoid43->setSites(*HAnimSite1896);

CHAnimSite* HAnimSite1897 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1897->setUSE("hanim_l_tarsal_distal_phalanx_5_tip");
HAnimHumanoid43->setSites(*HAnimSite1897);

CHAnimSite* HAnimSite1898 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1898->setUSE("hanim_r_lateral_malleolus_pt");
HAnimHumanoid43->setSites(*HAnimSite1898);

CHAnimSite* HAnimSite1899 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1899->setUSE("hanim_r_medial_malleolus_pt");
HAnimHumanoid43->setSites(*HAnimSite1899);

CHAnimSite* HAnimSite1900 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1900->setUSE("hanim_r_tibiale_pt");
HAnimHumanoid43->setSites(*HAnimSite1900);

CHAnimSite* HAnimSite1901 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1901->setUSE("hanim_r_calcaneus_posterior_pt");
HAnimHumanoid43->setSites(*HAnimSite1901);

CHAnimSite* HAnimSite1902 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1902->setUSE("hanim_r_sphyrion_pt");
HAnimHumanoid43->setSites(*HAnimSite1902);

CHAnimSite* HAnimSite1903 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1903->setUSE("hanim_r_metatarsal_phalanx_1_pt");
HAnimHumanoid43->setSites(*HAnimSite1903);

CHAnimSite* HAnimSite1904 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1904->setUSE("hanim_r_tarsal_distal_phalanx_1_tip");
HAnimHumanoid43->setSites(*HAnimSite1904);

CHAnimSite* HAnimSite1905 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1905->setUSE("hanim_r_tarsal_distal_phalanx_2_tip");
HAnimHumanoid43->setSites(*HAnimSite1905);

CHAnimSite* HAnimSite1906 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1906->setUSE("hanim_r_tarsal_distal_phalanx_3_tip");
HAnimHumanoid43->setSites(*HAnimSite1906);

CHAnimSite* HAnimSite1907 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1907->setUSE("hanim_r_tarsal_distal_phalanx_4_tip");
HAnimHumanoid43->setSites(*HAnimSite1907);

CHAnimSite* HAnimSite1908 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1908->setUSE("hanim_r_metatarsal_phalanx_5_pt");
HAnimHumanoid43->setSites(*HAnimSite1908);

CHAnimSite* HAnimSite1909 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1909->setUSE("hanim_r_tarsal_distal_phalanx_5_tip");
HAnimHumanoid43->setSites(*HAnimSite1909);

CHAnimSite* HAnimSite1910 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1910->setUSE("hanim_l_rib10_pt");
HAnimHumanoid43->setSites(*HAnimSite1910);

CHAnimSite* HAnimSite1911 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1911->setUSE("hanim_r_rib10_pt");
HAnimHumanoid43->setSites(*HAnimSite1911);

CHAnimSite* HAnimSite1912 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1912->setUSE("hanim_spine_2_middle_back_pt");
HAnimHumanoid43->setSites(*HAnimSite1912);

CHAnimSite* HAnimSite1913 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1913->setUSE("hanim_substernale_pt");
HAnimHumanoid43->setSites(*HAnimSite1913);

CHAnimSite* HAnimSite1914 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1914->setUSE("hanim_l_thelion_pt");
HAnimHumanoid43->setSites(*HAnimSite1914);

CHAnimSite* HAnimSite1915 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1915->setUSE("hanim_r_thelion_pt");
HAnimHumanoid43->setSites(*HAnimSite1915);

CHAnimSite* HAnimSite1916 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1916->setUSE("hanim_l_chest_midsagittal_plane_pt");
HAnimHumanoid43->setSites(*HAnimSite1916);

CHAnimSite* HAnimSite1917 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1917->setUSE("hanim_mesosternale_pt");
HAnimHumanoid43->setSites(*HAnimSite1917);

CHAnimSite* HAnimSite1918 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1918->setUSE("hanim_r_chest_midsagittal_plane_pt");
HAnimHumanoid43->setSites(*HAnimSite1918);

CHAnimSite* HAnimSite1919 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1919->setUSE("hanim_rear_center_midsagittal_plane_pt");
HAnimHumanoid43->setSites(*HAnimSite1919);

CHAnimSite* HAnimSite1920 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1920->setUSE("hanim_spine_1_middle_back_pt");
HAnimHumanoid43->setSites(*HAnimSite1920);

CHAnimSite* HAnimSite1921 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1921->setUSE("hanim_cervicale_pt");
HAnimHumanoid43->setSites(*HAnimSite1921);

CHAnimSite* HAnimSite1922 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1922->setUSE("hanim_suprasternale_pt");
HAnimHumanoid43->setSites(*HAnimSite1922);

CHAnimSite* HAnimSite1923 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1923->setUSE("hanim_l_neck_base_pt");
HAnimHumanoid43->setSites(*HAnimSite1923);

CHAnimSite* HAnimSite1924 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1924->setUSE("hanim_r_neck_base_pt");
HAnimHumanoid43->setSites(*HAnimSite1924);

CHAnimSite* HAnimSite1925 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1925->setUSE("hanim_l_acromion_pt");
HAnimHumanoid43->setSites(*HAnimSite1925);

CHAnimSite* HAnimSite1926 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1926->setUSE("hanim_l_axilla_distal_pt");
HAnimHumanoid43->setSites(*HAnimSite1926);

CHAnimSite* HAnimSite1927 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1927->setUSE("hanim_l_axilla_posterior_folds_pt");
HAnimHumanoid43->setSites(*HAnimSite1927);

CHAnimSite* HAnimSite1928 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1928->setUSE("hanim_l_axilla_proximal_pt");
HAnimHumanoid43->setSites(*HAnimSite1928);

CHAnimSite* HAnimSite1929 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1929->setUSE("hanim_l_clavicale_pt");
HAnimHumanoid43->setSites(*HAnimSite1929);

CHAnimSite* HAnimSite1930 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1930->setUSE("hanim_r_acromion_pt");
HAnimHumanoid43->setSites(*HAnimSite1930);

CHAnimSite* HAnimSite1931 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1931->setUSE("hanim_r_axilla_distal_pt");
HAnimHumanoid43->setSites(*HAnimSite1931);

CHAnimSite* HAnimSite1932 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1932->setUSE("hanim_r_axilla_posterior_folds_pt");
HAnimHumanoid43->setSites(*HAnimSite1932);

CHAnimSite* HAnimSite1933 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1933->setUSE("hanim_r_axilla_proximal_pt");
HAnimHumanoid43->setSites(*HAnimSite1933);

CHAnimSite* HAnimSite1934 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1934->setUSE("hanim_r_clavicale_pt");
HAnimHumanoid43->setSites(*HAnimSite1934);

CHAnimSite* HAnimSite1935 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1935->setUSE("hanim_adams_apple_pt");
HAnimHumanoid43->setSites(*HAnimSite1935);

CHAnimSite* HAnimSite1936 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1936->setUSE("hanim_glabella_pt");
HAnimHumanoid43->setSites(*HAnimSite1936);

CHAnimSite* HAnimSite1937 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1937->setUSE("hanim_l_ectocanthus_pt");
HAnimHumanoid43->setSites(*HAnimSite1937);

CHAnimSite* HAnimSite1938 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1938->setUSE("hanim_l_infraorbitale_pt");
HAnimHumanoid43->setSites(*HAnimSite1938);

CHAnimSite* HAnimSite1939 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1939->setUSE("hanim_l_tragion_pt");
HAnimHumanoid43->setSites(*HAnimSite1939);

CHAnimSite* HAnimSite1940 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1940->setUSE("hanim_nuchale_pt");
HAnimHumanoid43->setSites(*HAnimSite1940);

CHAnimSite* HAnimSite1941 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1941->setUSE("hanim_opisthocranion_pt");
HAnimHumanoid43->setSites(*HAnimSite1941);

CHAnimSite* HAnimSite1942 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1942->setUSE("hanim_r_ectocanthus_pt");
HAnimHumanoid43->setSites(*HAnimSite1942);

CHAnimSite* HAnimSite1943 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1943->setUSE("hanim_r_infraorbitale_pt");
HAnimHumanoid43->setSites(*HAnimSite1943);

CHAnimSite* HAnimSite1944 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1944->setUSE("hanim_r_tragion_pt");
HAnimHumanoid43->setSites(*HAnimSite1944);

CHAnimSite* HAnimSite1945 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1945->setUSE("hanim_sellion_pt");
HAnimHumanoid43->setSites(*HAnimSite1945);

CHAnimSite* HAnimSite1946 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1946->setUSE("hanim_skull_vertex_pt");
HAnimHumanoid43->setSites(*HAnimSite1946);

CHAnimSite* HAnimSite1947 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1947->setUSE("hanim_l_gonion_pt");
HAnimHumanoid43->setSites(*HAnimSite1947);

CHAnimSite* HAnimSite1948 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1948->setUSE("hanim_menton_pt");
HAnimHumanoid43->setSites(*HAnimSite1948);

CHAnimSite* HAnimSite1949 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1949->setUSE("hanim_r_gonion_pt");
HAnimHumanoid43->setSites(*HAnimSite1949);

CHAnimSite* HAnimSite1950 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1950->setUSE("hanim_supramenton_pt");
HAnimHumanoid43->setSites(*HAnimSite1950);

CHAnimSite* HAnimSite1951 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1951->setUSE("hanim_l_bideltoid_pt");
HAnimHumanoid43->setSites(*HAnimSite1951);

CHAnimSite* HAnimSite1952 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1952->setUSE("hanim_l_humeral_lateral_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1952);

CHAnimSite* HAnimSite1953 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1953->setUSE("hanim_l_humeral_medial_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1953);

CHAnimSite* HAnimSite1954 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1954->setUSE("hanim_l_olecranon_pt");
HAnimHumanoid43->setSites(*HAnimSite1954);

CHAnimSite* HAnimSite1955 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1955->setUSE("hanim_l_radial_styloid_pt");
HAnimHumanoid43->setSites(*HAnimSite1955);

CHAnimSite* HAnimSite1956 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1956->setUSE("hanim_l_radiale_pt");
HAnimHumanoid43->setSites(*HAnimSite1956);

CHAnimSite* HAnimSite1957 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1957->setUSE("hanim_l_ulnar_styloid_pt");
HAnimHumanoid43->setSites(*HAnimSite1957);

CHAnimSite* HAnimSite1958 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1958->setUSE("hanim_l_carpal_distal_phalanx_1_tip");
HAnimHumanoid43->setSites(*HAnimSite1958);

CHAnimSite* HAnimSite1959 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1959->setUSE("hanim_l_metacarpal_phalanx_2_pt");
HAnimHumanoid43->setSites(*HAnimSite1959);

CHAnimSite* HAnimSite1960 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1960->setUSE("hanim_l_carpal_distal_phalanx_2_tip");
HAnimHumanoid43->setSites(*HAnimSite1960);

CHAnimSite* HAnimSite1961 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1961->setUSE("hanim_l_dactylion_pt");
HAnimHumanoid43->setSites(*HAnimSite1961);

CHAnimSite* HAnimSite1962 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1962->setUSE("hanim_l_metacarpal_phalanx_3_pt");
HAnimHumanoid43->setSites(*HAnimSite1962);

CHAnimSite* HAnimSite1963 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1963->setUSE("hanim_l_carpal_distal_phalanx_3_tip");
HAnimHumanoid43->setSites(*HAnimSite1963);

CHAnimSite* HAnimSite1964 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1964->setUSE("hanim_l_metacarpal_phalanx_5_pt");
HAnimHumanoid43->setSites(*HAnimSite1964);

CHAnimSite* HAnimSite1965 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1965->setUSE("hanim_l_carpal_distal_phalanx_4_tip");
HAnimHumanoid43->setSites(*HAnimSite1965);

CHAnimSite* HAnimSite1966 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1966->setUSE("hanim_l_carpal_distal_phalanx_5_tip");
HAnimHumanoid43->setSites(*HAnimSite1966);

CHAnimSite* HAnimSite1967 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1967->setUSE("hanim_r_bideltoid_pt");
HAnimHumanoid43->setSites(*HAnimSite1967);

CHAnimSite* HAnimSite1968 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1968->setUSE("hanim_r_humeral_lateral_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1968);

CHAnimSite* HAnimSite1969 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1969->setUSE("hanim_r_humeral_medial_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1969);

CHAnimSite* HAnimSite1970 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1970->setUSE("hanim_r_olecranon_pt");
HAnimHumanoid43->setSites(*HAnimSite1970);

CHAnimSite* HAnimSite1971 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1971->setUSE("hanim_r_radial_styloid_pt");
HAnimHumanoid43->setSites(*HAnimSite1971);

CHAnimSite* HAnimSite1972 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1972->setUSE("hanim_r_radiale_pt");
HAnimHumanoid43->setSites(*HAnimSite1972);

CHAnimSite* HAnimSite1973 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1973->setUSE("hanim_r_ulnar_styloid_pt");
HAnimHumanoid43->setSites(*HAnimSite1973);

CHAnimSite* HAnimSite1974 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1974->setUSE("hanim_r_carpal_distal_phalanx_1_tip");
HAnimHumanoid43->setSites(*HAnimSite1974);

CHAnimSite* HAnimSite1975 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1975->setUSE("hanim_r_metacarpal_phalanx_2_pt");
HAnimHumanoid43->setSites(*HAnimSite1975);

CHAnimSite* HAnimSite1976 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1976->setUSE("hanim_r_carpal_distal_phalanx_2_tip");
HAnimHumanoid43->setSites(*HAnimSite1976);

CHAnimSite* HAnimSite1977 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1977->setUSE("hanim_r_dactylion_pt");
HAnimHumanoid43->setSites(*HAnimSite1977);

CHAnimSite* HAnimSite1978 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1978->setUSE("hanim_r_metacarpal_phalanx_3_pt");
HAnimHumanoid43->setSites(*HAnimSite1978);

CHAnimSite* HAnimSite1979 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1979->setUSE("hanim_r_carpal_distal_phalanx_3_tip");
HAnimHumanoid43->setSites(*HAnimSite1979);

CHAnimSite* HAnimSite1980 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1980->setUSE("hanim_r_metacarpal_phalanx_5_pt");
HAnimHumanoid43->setSites(*HAnimSite1980);

CHAnimSite* HAnimSite1981 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1981->setUSE("hanim_r_carpal_distal_phalanx_4_tip");
HAnimHumanoid43->setSites(*HAnimSite1981);

CHAnimSite* HAnimSite1982 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1982->setUSE("hanim_r_carpal_distal_phalanx_5_tip");
HAnimHumanoid43->setSites(*HAnimSite1982);

group->addChildren(*HAnimHumanoid43);

X3D0->setScene(*Scene11);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

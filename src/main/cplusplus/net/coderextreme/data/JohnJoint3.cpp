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
meta3->setContent("JohnJoint3.x3d");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("identifier");
meta4->setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint3.x3d");
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
//<Transform translation='0 2 0' scale='1 1 1'> <Shape DEF='HAnimRootShape'> <Sphere radius='0.02' /> <Appearance> <Material DEF='HAnimRootMaterial' diffuseColor='0.8 0 0' transparency='0.3'/> </Appearance> </Shape> </Transform>
CTransform* Transform19 = (CTransform *)(m_pScene.createNode("Transform"));
Transform19->setTranslation(new float[3]{0,2.1,0});
CShape* Shape20 = (CShape *)(m_pScene.createNode("Shape"));
Shape20->setDEF("HAnimJointShape");
CSphere* Sphere21 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere21->setRadius(0.02);
Shape20->setGeometry(Sphere21);

CAppearance* Appearance22 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material23 = (CMaterial *)(m_pScene.createNode("Material"));
Material23->setDEF("HAnimJointMaterial");
Material23->setDiffuseColor(new float[3]{0,0,0.8});
Material23->setTransparency(0.3);
Appearance22->setMaterial(*Material23);

Shape20->setAppearance(*Appearance22);

Transform19->addChild(*Shape20);

Transform18->addChildren(*Transform19);

CTransform* Transform24 = (CTransform *)(m_pScene.createNode("Transform"));
Transform24->setTranslation(new float[3]{0,2.05,0});
CShape* Shape25 = (CShape *)(m_pScene.createNode("Shape"));
Shape25->setDEF("HAnimSegmentLine");
CLineSet* LineSet26 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet26->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA27 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA27->setDEF("HAnimSegmentLineColorRGBA");
ColorRGBA27->setColor(new float[8]{1,1,0,1,1,1,0,0.1});
LineSet26->setColor(*ColorRGBA27);

CCoordinate* Coordinate28 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate28->setPoint(new float[6]{-0.05,0,0,0.05,0,0});
LineSet26->setCoord(*Coordinate28);

Shape25->setGeometry(LineSet26);

Transform24->addChild(*Shape25);

Transform18->addChildren(*Transform24);

CTransform* Transform29 = (CTransform *)(m_pScene.createNode("Transform"));
Transform29->setTranslation(new float[3]{0,2.1,0});
CShape* Shape30 = (CShape *)(m_pScene.createNode("Shape"));
Shape30->setDEF("HAnimSiteShape");
CIndexedFaceSet* IndexedFaceSet31 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet31->setDEF("DiamondIFS");
IndexedFaceSet31->setCreaseAngle(0.5);
IndexedFaceSet31->setSolid(False);
IndexedFaceSet31->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
CColorRGBA* ColorRGBA32 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA32->setDEF("HAnimSiteColorRGBA");
ColorRGBA32->setColor(new float[8]{1,1,0,1,1,1,0,0.1});
IndexedFaceSet31->setColor(*ColorRGBA32);

CCoordinate* Coordinate33 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate33->setPoint(new float[18]{0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
IndexedFaceSet31->setCoord(*Coordinate33);

Shape30->setGeometry(IndexedFaceSet31);

CAppearance* Appearance34 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material35 = (CMaterial *)(m_pScene.createNode("Material"));
Material35->setDiffuseColor(new float[3]{1,1,0});
Material35->setTransparency(0.3);
Appearance34->setMaterial(*Material35);

Shape30->setAppearance(*Appearance34);

Transform29->addChild(*Shape30);

Transform18->addChildren(*Transform29);

Group17->addChildren(*Transform18);

group->addChildren(*Group17);

CNavigationInfo* NavigationInfo36 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo36->setSpeed(1.5);
group->addChildren(*NavigationInfo36);

CViewpoint* Viewpoint37 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint37->setDescription("default");
group->addChildren(*Viewpoint37);

CHAnimHumanoid* HAnimHumanoid38 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid38->setName("HAnim");
HAnimHumanoid38->setDEF("hanim_HAnim");
HAnimHumanoid38->setInfo(new CString[1]{"humanoidVersion=2.0"}, 1);
HAnimHumanoid38->setVersion("2.0");
CHAnimJoint* HAnimJoint39 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint39->setName("humanoid_root");
HAnimJoint39->setDEF("hanim_humanoid_root");
HAnimJoint39->setCenter(new float[3]{0,0.824,0.0277});
HAnimJoint39->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint39->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape40 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet41 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet41->setVertexCount(new int[1]{2});
CCoordinate* Coordinate42 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate42->setPoint(new float[6]{0,0.824,0.0277,0,0.9149,0.0016});
LineSet41->setCoord(*Coordinate42);

//from humanoid_root to sacroiliac
CColorRGBA* ColorRGBA43 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA43->setUSE("HAnimSegmentLineColorRGBA");
LineSet41->setColor(*ColorRGBA43);

Shape40->setGeometry(LineSet41);

HAnimJoint39->addChild(*Shape40);

CHAnimSite* HAnimSite44 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite44->setName("buttocks_standing_wall_contact_point_pt");
HAnimSite44->setDEF("hanim_buttocks_standing_wall_contact_point_pt");
HAnimSite44->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor45 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor45->setDescription("HAnimSite buttocks_standing_wall_contact_point_pt");
HAnimSite44->addChildren(*TouchSensor45);

CShape* Shape46 = (CShape *)(m_pScene.createNode("Shape"));
Shape46->setUSE("HAnimSiteShape");
HAnimSite44->addChildren(*Shape46);

HAnimJoint39->addChild(*HAnimSite44);

CHAnimSite* HAnimSite47 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite47->setName("crotch_pt");
HAnimSite47->setDEF("hanim_crotch_pt");
HAnimSite47->setTranslation(new float[3]{0.0034,0.8266,0.0257});
CTouchSensor* TouchSensor48 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor48->setDescription("HAnimSite crotch_pt");
HAnimSite47->addChildren(*TouchSensor48);

CShape* Shape49 = (CShape *)(m_pScene.createNode("Shape"));
Shape49->setUSE("HAnimSiteShape");
HAnimSite47->addChildren(*Shape49);

HAnimJoint39->addChild(*HAnimSite47);

CHAnimSite* HAnimSite50 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite50->setName("l_asis_pt");
HAnimSite50->setDEF("hanim_l_asis_pt");
HAnimSite50->setTranslation(new float[3]{0.0925,0.9983,0.1052});
CTouchSensor* TouchSensor51 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor51->setDescription("HAnimSite l_asis_pt");
HAnimSite50->addChildren(*TouchSensor51);

CShape* Shape52 = (CShape *)(m_pScene.createNode("Shape"));
Shape52->setUSE("HAnimSiteShape");
HAnimSite50->addChildren(*Shape52);

HAnimJoint39->addChild(*HAnimSite50);

CHAnimSite* HAnimSite53 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite53->setName("l_iliocristale_pt");
HAnimSite53->setDEF("hanim_l_iliocristale_pt");
HAnimSite53->setTranslation(new float[3]{0.1612,1.0537,0.0008});
CTouchSensor* TouchSensor54 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor54->setDescription("HAnimSite l_iliocristale_pt");
HAnimSite53->addChildren(*TouchSensor54);

CShape* Shape55 = (CShape *)(m_pScene.createNode("Shape"));
Shape55->setUSE("HAnimSiteShape");
HAnimSite53->addChildren(*Shape55);

HAnimJoint39->addChild(*HAnimSite53);

CHAnimSite* HAnimSite56 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite56->setName("l_psis_pt");
HAnimSite56->setDEF("hanim_l_psis_pt");
HAnimSite56->setTranslation(new float[3]{0.0774,1.019,-0.1151});
CTouchSensor* TouchSensor57 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor57->setDescription("HAnimSite l_psis_pt");
HAnimSite56->addChildren(*TouchSensor57);

CShape* Shape58 = (CShape *)(m_pScene.createNode("Shape"));
Shape58->setUSE("HAnimSiteShape");
HAnimSite56->addChildren(*Shape58);

HAnimJoint39->addChild(*HAnimSite56);

CHAnimSite* HAnimSite59 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite59->setName("l_trochanterion_pt");
HAnimSite59->setDEF("hanim_l_trochanterion_pt");
HAnimSite59->setTranslation(new float[3]{0.1677,0.8336,0.0303});
CTouchSensor* TouchSensor60 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor60->setDescription("HAnimSite l_trochanterion_pt");
HAnimSite59->addChildren(*TouchSensor60);

CShape* Shape61 = (CShape *)(m_pScene.createNode("Shape"));
Shape61->setUSE("HAnimSiteShape");
HAnimSite59->addChildren(*Shape61);

HAnimJoint39->addChild(*HAnimSite59);

CHAnimSite* HAnimSite62 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite62->setName("r_asis_pt");
HAnimSite62->setDEF("hanim_r_asis_pt");
HAnimSite62->setTranslation(new float[3]{-0.0887,1.0021,0.1112});
CTouchSensor* TouchSensor63 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor63->setDescription("HAnimSite r_asis_pt");
HAnimSite62->addChildren(*TouchSensor63);

CShape* Shape64 = (CShape *)(m_pScene.createNode("Shape"));
Shape64->setUSE("HAnimSiteShape");
HAnimSite62->addChildren(*Shape64);

HAnimJoint39->addChild(*HAnimSite62);

CHAnimSite* HAnimSite65 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite65->setName("r_iliocristale_pt");
HAnimSite65->setDEF("hanim_r_iliocristale_pt");
HAnimSite65->setTranslation(new float[3]{-0.1525,1.0628,0.0035});
CTouchSensor* TouchSensor66 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor66->setDescription("HAnimSite r_iliocristale_pt");
HAnimSite65->addChildren(*TouchSensor66);

CShape* Shape67 = (CShape *)(m_pScene.createNode("Shape"));
Shape67->setUSE("HAnimSiteShape");
HAnimSite65->addChildren(*Shape67);

HAnimJoint39->addChild(*HAnimSite65);

CHAnimSite* HAnimSite68 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite68->setName("r_psis_pt");
HAnimSite68->setDEF("hanim_r_psis_pt");
HAnimSite68->setTranslation(new float[3]{-0.0716,1.019,-0.1138});
CTouchSensor* TouchSensor69 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor69->setDescription("HAnimSite r_psis_pt");
HAnimSite68->addChildren(*TouchSensor69);

CShape* Shape70 = (CShape *)(m_pScene.createNode("Shape"));
Shape70->setUSE("HAnimSiteShape");
HAnimSite68->addChildren(*Shape70);

HAnimJoint39->addChild(*HAnimSite68);

CHAnimSite* HAnimSite71 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite71->setName("r_trochanterion_pt");
HAnimSite71->setDEF("hanim_r_trochanterion_pt");
HAnimSite71->setTranslation(new float[3]{-0.1689,0.8419,0.0352});
CTouchSensor* TouchSensor72 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor72->setDescription("HAnimSite r_trochanterion_pt");
HAnimSite71->addChildren(*TouchSensor72);

CShape* Shape73 = (CShape *)(m_pScene.createNode("Shape"));
Shape73->setUSE("HAnimSiteShape");
HAnimSite71->addChildren(*Shape73);

HAnimJoint39->addChild(*HAnimSite71);

CShape* Shape74 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet75 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet75->setVertexCount(new int[1]{2});
CCoordinate* Coordinate76 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate76->setPoint(new float[6]{0,0.824,0.0277,0.0028,1.0568,-0.0776});
LineSet75->setCoord(*Coordinate76);

//from humanoid_root to vl5
CColorRGBA* ColorRGBA77 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA77->setUSE("HAnimSegmentLineColorRGBA");
LineSet75->setColor(*ColorRGBA77);

Shape74->setGeometry(LineSet75);

HAnimJoint39->addChild(*Shape74);

CHAnimSite* HAnimSite78 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite78->setName("navel_pt");
HAnimSite78->setDEF("hanim_navel_pt");
HAnimSite78->setTranslation(new float[3]{0.0069,1.0966,0.1017});
CTouchSensor* TouchSensor79 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor79->setDescription("HAnimSite navel_pt");
HAnimSite78->addChildren(*TouchSensor79);

CShape* Shape80 = (CShape *)(m_pScene.createNode("Shape"));
Shape80->setUSE("HAnimSiteShape");
HAnimSite78->addChildren(*Shape80);

HAnimJoint39->addChild(*HAnimSite78);

CHAnimSite* HAnimSite81 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite81->setName("waist_preferred_anterior_pt");
HAnimSite81->setDEF("hanim_waist_preferred_anterior_pt");
HAnimSite81->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor82 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor82->setDescription("HAnimSite waist_preferred_anterior_pt");
HAnimSite81->addChildren(*TouchSensor82);

CShape* Shape83 = (CShape *)(m_pScene.createNode("Shape"));
Shape83->setUSE("HAnimSiteShape");
HAnimSite81->addChildren(*Shape83);

HAnimJoint39->addChild(*HAnimSite81);

CHAnimSite* HAnimSite84 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite84->setName("waist_preferred_posterior_pt");
HAnimSite84->setDEF("hanim_waist_preferred_posterior_pt");
HAnimSite84->setTranslation(new float[3]{0.29,1.0915,-0.1091});
CTouchSensor* TouchSensor85 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor85->setDescription("HAnimSite waist_preferred_posterior_pt");
HAnimSite84->addChildren(*TouchSensor85);

CShape* Shape86 = (CShape *)(m_pScene.createNode("Shape"));
Shape86->setUSE("HAnimSiteShape");
HAnimSite84->addChildren(*Shape86);

HAnimJoint39->addChild(*HAnimSite84);

CHAnimJoint* HAnimJoint87 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint87->setName("sacroiliac");
HAnimJoint87->setDEF("hanim_sacroiliac");
HAnimJoint87->setCenter(new float[3]{0,0.9149,0.0016});
HAnimJoint87->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint87->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape88 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet89 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet89->setVertexCount(new int[1]{2});
CCoordinate* Coordinate90 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate90->setPoint(new float[6]{0,0.9149,0.0016,0.0961,0.9124,-0.0001});
LineSet89->setCoord(*Coordinate90);

//from sacroiliac to l_hip
CColorRGBA* ColorRGBA91 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA91->setUSE("HAnimSegmentLineColorRGBA");
LineSet89->setColor(*ColorRGBA91);

Shape88->setGeometry(LineSet89);

HAnimJoint87->addChild(*Shape88);

CHAnimSite* HAnimSite92 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite92->setName("l_femoral_lateral_epicondyles_pt");
HAnimSite92->setDEF("hanim_l_femoral_lateral_epicondyles_pt");
HAnimSite92->setTranslation(new float[3]{0.1598,0.4967,0.0297});
CTouchSensor* TouchSensor93 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor93->setDescription("HAnimSite l_femoral_lateral_epicondyles_pt");
HAnimSite92->addChildren(*TouchSensor93);

CShape* Shape94 = (CShape *)(m_pScene.createNode("Shape"));
Shape94->setUSE("HAnimSiteShape");
HAnimSite92->addChildren(*Shape94);

HAnimJoint87->addChild(*HAnimSite92);

CHAnimSite* HAnimSite95 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite95->setName("l_femoral_medial_epicondyles_pt");
HAnimSite95->setDEF("hanim_l_femoral_medial_epicondyles_pt");
HAnimSite95->setTranslation(new float[3]{0.0398,0.4946,0.0303});
CTouchSensor* TouchSensor96 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor96->setDescription("HAnimSite l_femoral_medial_epicondyles_pt");
HAnimSite95->addChildren(*TouchSensor96);

CShape* Shape97 = (CShape *)(m_pScene.createNode("Shape"));
Shape97->setUSE("HAnimSiteShape");
HAnimSite95->addChildren(*Shape97);

HAnimJoint87->addChild(*HAnimSite95);

CHAnimSite* HAnimSite98 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite98->setName("l_knee_crease_pt");
HAnimSite98->setDEF("hanim_l_knee_crease_pt");
HAnimSite98->setTranslation(new float[3]{0.0993,0.4881,-0.0309});
CTouchSensor* TouchSensor99 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor99->setDescription("HAnimSite l_knee_crease_pt");
HAnimSite98->addChildren(*TouchSensor99);

CShape* Shape100 = (CShape *)(m_pScene.createNode("Shape"));
Shape100->setUSE("HAnimSiteShape");
HAnimSite98->addChildren(*Shape100);

HAnimJoint87->addChild(*HAnimSite98);

CHAnimSite* HAnimSite101 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite101->setName("l_suprapatella_pt");
HAnimSite101->setDEF("hanim_l_suprapatella_pt");
HAnimSite101->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor102 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor102->setDescription("HAnimSite l_suprapatella_pt");
HAnimSite101->addChildren(*TouchSensor102);

CShape* Shape103 = (CShape *)(m_pScene.createNode("Shape"));
Shape103->setUSE("HAnimSiteShape");
HAnimSite101->addChildren(*Shape103);

HAnimJoint87->addChild(*HAnimSite101);

CShape* Shape104 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet105 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet105->setVertexCount(new int[1]{2});
CCoordinate* Coordinate106 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate106->setPoint(new float[6]{0,0.9149,0.0016,-0.095,0.9171,0.0029});
LineSet105->setCoord(*Coordinate106);

//from sacroiliac to r_hip
CColorRGBA* ColorRGBA107 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA107->setUSE("HAnimSegmentLineColorRGBA");
LineSet105->setColor(*ColorRGBA107);

Shape104->setGeometry(LineSet105);

HAnimJoint87->addChild(*Shape104);

CHAnimSite* HAnimSite108 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite108->setName("r_femoral_lateral_epicondyles_pt");
HAnimSite108->setDEF("hanim_r_femoral_lateral_epicondyles_pt");
HAnimSite108->setTranslation(new float[3]{-0.1421,0.4992,0.031});
CTouchSensor* TouchSensor109 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor109->setDescription("HAnimSite r_femoral_lateral_epicondyles_pt");
HAnimSite108->addChildren(*TouchSensor109);

CShape* Shape110 = (CShape *)(m_pScene.createNode("Shape"));
Shape110->setUSE("HAnimSiteShape");
HAnimSite108->addChildren(*Shape110);

HAnimJoint87->addChild(*HAnimSite108);

CHAnimSite* HAnimSite111 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite111->setName("r_femoral_medial_epicondyles_pt");
HAnimSite111->setDEF("hanim_r_femoral_medial_epicondyles_pt");
HAnimSite111->setTranslation(new float[3]{-0.0221,0.5014,0.0289});
CTouchSensor* TouchSensor112 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor112->setDescription("HAnimSite r_femoral_medial_epicondyles_pt");
HAnimSite111->addChildren(*TouchSensor112);

CShape* Shape113 = (CShape *)(m_pScene.createNode("Shape"));
Shape113->setUSE("HAnimSiteShape");
HAnimSite111->addChildren(*Shape113);

HAnimJoint87->addChild(*HAnimSite111);

CHAnimSite* HAnimSite114 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite114->setName("r_knee_crease_pt");
HAnimSite114->setDEF("hanim_r_knee_crease_pt");
HAnimSite114->setTranslation(new float[3]{-0.0825,0.4932,-0.0326});
CTouchSensor* TouchSensor115 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor115->setDescription("HAnimSite r_knee_crease_pt");
HAnimSite114->addChildren(*TouchSensor115);

CShape* Shape116 = (CShape *)(m_pScene.createNode("Shape"));
Shape116->setUSE("HAnimSiteShape");
HAnimSite114->addChildren(*Shape116);

HAnimJoint87->addChild(*HAnimSite114);

CHAnimSite* HAnimSite117 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite117->setName("r_suprapatella_pt");
HAnimSite117->setDEF("hanim_r_suprapatella_pt");
HAnimSite117->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor118 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor118->setDescription("HAnimSite r_suprapatella_pt");
HAnimSite117->addChildren(*TouchSensor118);

CShape* Shape119 = (CShape *)(m_pScene.createNode("Shape"));
Shape119->setUSE("HAnimSiteShape");
HAnimSite117->addChildren(*Shape119);

HAnimJoint87->addChild(*HAnimSite117);

CHAnimJoint* HAnimJoint120 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint120->setName("l_hip");
HAnimJoint120->setDEF("hanim_l_hip");
HAnimJoint120->setCenter(new float[3]{0.0961,0.9124,-0.0001});
HAnimJoint120->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint120->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape121 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet122 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet122->setVertexCount(new int[1]{2});
CCoordinate* Coordinate123 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate123->setPoint(new float[6]{0.0961,0.9124,-0.0001,0.104,0.4867,0.0308});
LineSet122->setCoord(*Coordinate123);

//from l_hip to l_knee
CColorRGBA* ColorRGBA124 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA124->setUSE("HAnimSegmentLineColorRGBA");
LineSet122->setColor(*ColorRGBA124);

Shape121->setGeometry(LineSet122);

HAnimJoint120->addChild(*Shape121);

CHAnimSite* HAnimSite125 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite125->setName("l_lateral_malleolus_pt");
HAnimSite125->setDEF("hanim_l_lateral_malleolus_pt");
HAnimSite125->setTranslation(new float[3]{0.1308,0.0597,-0.1032});
CTouchSensor* TouchSensor126 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor126->setDescription("HAnimSite l_lateral_malleolus_pt");
HAnimSite125->addChildren(*TouchSensor126);

CShape* Shape127 = (CShape *)(m_pScene.createNode("Shape"));
Shape127->setUSE("HAnimSiteShape");
HAnimSite125->addChildren(*Shape127);

HAnimJoint120->addChild(*HAnimSite125);

CHAnimSite* HAnimSite128 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite128->setName("l_medial_malleolus_pt");
HAnimSite128->setDEF("hanim_l_medial_malleolus_pt");
HAnimSite128->setTranslation(new float[3]{0.089,0.0716,-0.0881});
CTouchSensor* TouchSensor129 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor129->setDescription("HAnimSite l_medial_malleolus_pt");
HAnimSite128->addChildren(*TouchSensor129);

CShape* Shape130 = (CShape *)(m_pScene.createNode("Shape"));
Shape130->setUSE("HAnimSiteShape");
HAnimSite128->addChildren(*Shape130);

HAnimJoint120->addChild(*HAnimSite128);

CHAnimSite* HAnimSite131 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite131->setName("l_tibiale_pt");
HAnimSite131->setDEF("hanim_l_tibiale_pt");
HAnimSite131->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor132 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor132->setDescription("HAnimSite l_tibiale_pt");
HAnimSite131->addChildren(*TouchSensor132);

CShape* Shape133 = (CShape *)(m_pScene.createNode("Shape"));
Shape133->setUSE("HAnimSiteShape");
HAnimSite131->addChildren(*Shape133);

HAnimJoint120->addChild(*HAnimSite131);

CHAnimJoint* HAnimJoint134 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint134->setName("l_knee");
HAnimJoint134->setDEF("hanim_l_knee");
HAnimJoint134->setCenter(new float[3]{0.104,0.4867,0.0308});
HAnimJoint134->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint134->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape135 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet136 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet136->setVertexCount(new int[1]{2});
CCoordinate* Coordinate137 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate137->setPoint(new float[6]{0.104,0.4867,0.0308,0.1101,0.0656,-0.0736});
LineSet136->setCoord(*Coordinate137);

//from l_knee to l_talocrural
CColorRGBA* ColorRGBA138 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA138->setUSE("HAnimSegmentLineColorRGBA");
LineSet136->setColor(*ColorRGBA138);

Shape135->setGeometry(LineSet136);

HAnimJoint134->addChild(*Shape135);

CHAnimSite* HAnimSite139 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite139->setName("l_calcaneus_posterior_pt");
HAnimSite139->setDEF("hanim_l_calcaneus_posterior_pt");
HAnimSite139->setTranslation(new float[3]{0.0974,0.0259,-0.1171});
CTouchSensor* TouchSensor140 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor140->setDescription("HAnimSite l_calcaneus_posterior_pt");
HAnimSite139->addChildren(*TouchSensor140);

CShape* Shape141 = (CShape *)(m_pScene.createNode("Shape"));
Shape141->setUSE("HAnimSiteShape");
HAnimSite139->addChildren(*Shape141);

HAnimJoint134->addChild(*HAnimSite139);

CHAnimSite* HAnimSite142 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite142->setName("l_sphyrion_pt");
HAnimSite142->setDEF("hanim_l_sphyrion_pt");
HAnimSite142->setTranslation(new float[3]{0.089,0.0575,-0.0943});
CTouchSensor* TouchSensor143 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor143->setDescription("HAnimSite l_sphyrion_pt");
HAnimSite142->addChildren(*TouchSensor143);

CShape* Shape144 = (CShape *)(m_pScene.createNode("Shape"));
Shape144->setUSE("HAnimSiteShape");
HAnimSite142->addChildren(*Shape144);

HAnimJoint134->addChild(*HAnimSite142);

CHAnimJoint* HAnimJoint145 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint145->setName("l_talocrural");
HAnimJoint145->setDEF("hanim_l_talocrural");
HAnimJoint145->setCenter(new float[3]{0.1101,0.0656,-0.0736});
HAnimJoint145->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint145->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape146 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet147 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet147->setVertexCount(new int[1]{2});
CCoordinate* Coordinate148 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate148->setPoint(new float[6]{0.1101,0.0656,-0.0736,0,1,0});
LineSet147->setCoord(*Coordinate148);

//from l_talocrural to l_talocalcaneonavicular
CColorRGBA* ColorRGBA149 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA149->setUSE("HAnimSegmentLineColorRGBA");
LineSet147->setColor(*ColorRGBA149);

Shape146->setGeometry(LineSet147);

HAnimJoint145->addChild(*Shape146);

CShape* Shape150 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet151 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet151->setVertexCount(new int[1]{2});
CCoordinate* Coordinate152 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate152->setPoint(new float[6]{0.1101,0.0656,-0.0736,0,1,0});
LineSet151->setCoord(*Coordinate152);

//from l_talocrural to l_calcaneocuboid
CColorRGBA* ColorRGBA153 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA153->setUSE("HAnimSegmentLineColorRGBA");
LineSet151->setColor(*ColorRGBA153);

Shape150->setGeometry(LineSet151);

HAnimJoint145->addChild(*Shape150);

CHAnimJoint* HAnimJoint154 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint154->setName("l_talocalcaneonavicular");
HAnimJoint154->setDEF("hanim_l_talocalcaneonavicular");
HAnimJoint154->setCenter(new float[3]{0,1,0});
HAnimJoint154->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint154->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape155 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet156 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet156->setVertexCount(new int[1]{1});
CCoordinate* Coordinate157 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate157->setPoint(new float[3]{0,1,0});
LineSet156->setCoord(*Coordinate157);

//from l_talocalcaneonavicular to l_cuneonavicular_1
CColorRGBA* ColorRGBA158 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA158->setUSE("HAnimSegmentLineColorRGBA");
LineSet156->setColor(*ColorRGBA158);

Shape155->setGeometry(LineSet156);

HAnimJoint154->addChild(*Shape155);

CShape* Shape159 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet160 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet160->setVertexCount(new int[1]{1});
CCoordinate* Coordinate161 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate161->setPoint(new float[3]{0,1,0});
LineSet160->setCoord(*Coordinate161);

//from l_talocalcaneonavicular to l_cuneonavicular_2
CColorRGBA* ColorRGBA162 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA162->setUSE("HAnimSegmentLineColorRGBA");
LineSet160->setColor(*ColorRGBA162);

Shape159->setGeometry(LineSet160);

HAnimJoint154->addChild(*Shape159);

CShape* Shape163 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet164 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet164->setVertexCount(new int[1]{1});
CCoordinate* Coordinate165 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate165->setPoint(new float[3]{0,1,0});
LineSet164->setCoord(*Coordinate165);

//from l_talocalcaneonavicular to l_cuneonavicular_3
CColorRGBA* ColorRGBA166 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA166->setUSE("HAnimSegmentLineColorRGBA");
LineSet164->setColor(*ColorRGBA166);

Shape163->setGeometry(LineSet164);

HAnimJoint154->addChild(*Shape163);

CHAnimJoint* HAnimJoint167 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint167->setName("l_cuneonavicular_1");
HAnimJoint167->setDEF("hanim_l_cuneonavicular_1");
HAnimJoint167->setCenter(new float[3]{0,1,0});
HAnimJoint167->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint167->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape168 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet169 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet169->setVertexCount(new int[1]{1});
CCoordinate* Coordinate170 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate170->setPoint(new float[3]{0,1,0});
LineSet169->setCoord(*Coordinate170);

//from l_cuneonavicular_1 to l_tarsometatarsal_1
CColorRGBA* ColorRGBA171 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA171->setUSE("HAnimSegmentLineColorRGBA");
LineSet169->setColor(*ColorRGBA171);

Shape168->setGeometry(LineSet169);

HAnimJoint167->addChild(*Shape168);

CHAnimJoint* HAnimJoint172 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint172->setName("l_tarsometatarsal_1");
HAnimJoint172->setDEF("hanim_l_tarsometatarsal_1");
HAnimJoint172->setCenter(new float[3]{0,1,0});
HAnimJoint172->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint172->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape173 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet174 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet174->setVertexCount(new int[1]{1});
CCoordinate* Coordinate175 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate175->setPoint(new float[3]{0,1,0});
LineSet174->setCoord(*Coordinate175);

//from l_tarsometatarsal_1 to l_metatarsophalangeal_1
CColorRGBA* ColorRGBA176 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA176->setUSE("HAnimSegmentLineColorRGBA");
LineSet174->setColor(*ColorRGBA176);

Shape173->setGeometry(LineSet174);

HAnimJoint172->addChild(*Shape173);

CHAnimSite* HAnimSite177 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite177->setName("l_metatarsal_phalanx_1_pt");
HAnimSite177->setDEF("hanim_l_metatarsal_phalanx_1_pt");
HAnimSite177->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor178 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor178->setDescription("HAnimSite l_metatarsal_phalanx_1_pt");
HAnimSite177->addChildren(*TouchSensor178);

CShape* Shape179 = (CShape *)(m_pScene.createNode("Shape"));
Shape179->setUSE("HAnimSiteShape");
HAnimSite177->addChildren(*Shape179);

HAnimJoint172->addChild(*HAnimSite177);

CHAnimJoint* HAnimJoint180 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint180->setName("l_metatarsophalangeal_1");
HAnimJoint180->setDEF("hanim_l_metatarsophalangeal_1");
HAnimJoint180->setCenter(new float[3]{0,1,0});
HAnimJoint180->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint180->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape181 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet182 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet182->setVertexCount(new int[1]{1});
CCoordinate* Coordinate183 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate183->setPoint(new float[3]{0,1,0});
LineSet182->setCoord(*Coordinate183);

//from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1
CColorRGBA* ColorRGBA184 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA184->setUSE("HAnimSegmentLineColorRGBA");
LineSet182->setColor(*ColorRGBA184);

Shape181->setGeometry(LineSet182);

HAnimJoint180->addChild(*Shape181);

CHAnimSite* HAnimSite185 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite185->setName("l_tarsal_distal_phalanx_1_tip");
HAnimSite185->setDEF("hanim_l_tarsal_distal_phalanx_1_tip");
HAnimSite185->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor186 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor186->setDescription("HAnimSite l_tarsal_distal_phalanx_1_tip");
HAnimSite185->addChildren(*TouchSensor186);

CShape* Shape187 = (CShape *)(m_pScene.createNode("Shape"));
Shape187->setUSE("HAnimSiteShape");
HAnimSite185->addChildren(*Shape187);

HAnimJoint180->addChild(*HAnimSite185);

CHAnimJoint* HAnimJoint188 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint188->setName("l_tarsal_interphalangeal_1");
HAnimJoint188->setDEF("hanim_l_tarsal_interphalangeal_1");
HAnimJoint188->setCenter(new float[3]{0,1,0});
HAnimJoint188->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint188->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint180->addChildren(*HAnimJoint188);

HAnimJoint172->addChildren(*HAnimJoint180);

HAnimJoint167->addChildren(*HAnimJoint172);

HAnimJoint154->addChildren(*HAnimJoint167);

CHAnimJoint* HAnimJoint189 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint189->setName("l_cuneonavicular_2");
HAnimJoint189->setDEF("hanim_l_cuneonavicular_2");
HAnimJoint189->setCenter(new float[3]{0,1,0});
HAnimJoint189->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint189->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape190 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet191 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet191->setVertexCount(new int[1]{1});
CCoordinate* Coordinate192 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate192->setPoint(new float[3]{0,1,0});
LineSet191->setCoord(*Coordinate192);

//from l_cuneonavicular_2 to l_tarsometatarsal_2
CColorRGBA* ColorRGBA193 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA193->setUSE("HAnimSegmentLineColorRGBA");
LineSet191->setColor(*ColorRGBA193);

Shape190->setGeometry(LineSet191);

HAnimJoint189->addChild(*Shape190);

CHAnimJoint* HAnimJoint194 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint194->setName("l_tarsometatarsal_2");
HAnimJoint194->setDEF("hanim_l_tarsometatarsal_2");
HAnimJoint194->setCenter(new float[3]{0,1,0});
HAnimJoint194->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint194->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape195 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet196 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet196->setVertexCount(new int[1]{1});
CCoordinate* Coordinate197 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate197->setPoint(new float[3]{0,1,0});
LineSet196->setCoord(*Coordinate197);

//from l_tarsometatarsal_2 to l_metatarsophalangeal_2
CColorRGBA* ColorRGBA198 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA198->setUSE("HAnimSegmentLineColorRGBA");
LineSet196->setColor(*ColorRGBA198);

Shape195->setGeometry(LineSet196);

HAnimJoint194->addChild(*Shape195);

CHAnimJoint* HAnimJoint199 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint199->setName("l_metatarsophalangeal_2");
HAnimJoint199->setDEF("hanim_l_metatarsophalangeal_2");
HAnimJoint199->setCenter(new float[3]{0,1,0});
HAnimJoint199->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint199->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape200 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet201 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet201->setVertexCount(new int[1]{1});
CCoordinate* Coordinate202 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate202->setPoint(new float[3]{0,1,0});
LineSet201->setCoord(*Coordinate202);

//from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2
CColorRGBA* ColorRGBA203 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA203->setUSE("HAnimSegmentLineColorRGBA");
LineSet201->setColor(*ColorRGBA203);

Shape200->setGeometry(LineSet201);

HAnimJoint199->addChild(*Shape200);

CHAnimJoint* HAnimJoint204 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint204->setName("l_tarsal_proximal_interphalangeal_2");
HAnimJoint204->setDEF("hanim_l_tarsal_proximal_interphalangeal_2");
HAnimJoint204->setCenter(new float[3]{0,1,0});
HAnimJoint204->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint204->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape205 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet206 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet206->setVertexCount(new int[1]{1});
CCoordinate* Coordinate207 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate207->setPoint(new float[3]{0,1,0});
LineSet206->setCoord(*Coordinate207);

//from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2
CColorRGBA* ColorRGBA208 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA208->setUSE("HAnimSegmentLineColorRGBA");
LineSet206->setColor(*ColorRGBA208);

Shape205->setGeometry(LineSet206);

HAnimJoint204->addChild(*Shape205);

CHAnimSite* HAnimSite209 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite209->setName("l_tarsal_distal_phalanx_2_tip");
HAnimSite209->setDEF("hanim_l_tarsal_distal_phalanx_2_tip");
HAnimSite209->setTranslation(new float[3]{0.1195,0.0079,0.1433});
CTouchSensor* TouchSensor210 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor210->setDescription("HAnimSite l_tarsal_distal_phalanx_2_tip");
HAnimSite209->addChildren(*TouchSensor210);

CShape* Shape211 = (CShape *)(m_pScene.createNode("Shape"));
Shape211->setUSE("HAnimSiteShape");
HAnimSite209->addChildren(*Shape211);

HAnimJoint204->addChild(*HAnimSite209);

CHAnimJoint* HAnimJoint212 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint212->setName("l_tarsal_distal_interphalangeal_2");
HAnimJoint212->setDEF("hanim_l_tarsal_distal_interphalangeal_2");
HAnimJoint212->setCenter(new float[3]{0,1,0});
HAnimJoint212->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint212->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint204->addChildren(*HAnimJoint212);

HAnimJoint199->addChildren(*HAnimJoint204);

HAnimJoint194->addChildren(*HAnimJoint199);

HAnimJoint189->addChildren(*HAnimJoint194);

HAnimJoint154->addChildren(*HAnimJoint189);

CHAnimJoint* HAnimJoint213 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint213->setName("l_cuneonavicular_3");
HAnimJoint213->setDEF("hanim_l_cuneonavicular_3");
HAnimJoint213->setCenter(new float[3]{0,1,0});
HAnimJoint213->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint213->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape214 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet215 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet215->setVertexCount(new int[1]{1});
CCoordinate* Coordinate216 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate216->setPoint(new float[3]{0,1,0});
LineSet215->setCoord(*Coordinate216);

//from l_cuneonavicular_3 to l_tarsometatarsal_3
CColorRGBA* ColorRGBA217 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA217->setUSE("HAnimSegmentLineColorRGBA");
LineSet215->setColor(*ColorRGBA217);

Shape214->setGeometry(LineSet215);

HAnimJoint213->addChild(*Shape214);

CHAnimJoint* HAnimJoint218 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint218->setName("l_tarsometatarsal_3");
HAnimJoint218->setDEF("hanim_l_tarsometatarsal_3");
HAnimJoint218->setCenter(new float[3]{0,1,0});
HAnimJoint218->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint218->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape219 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet220 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet220->setVertexCount(new int[1]{1});
CCoordinate* Coordinate221 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate221->setPoint(new float[3]{0,1,0});
LineSet220->setCoord(*Coordinate221);

//from l_tarsometatarsal_3 to l_metatarsophalangeal_3
CColorRGBA* ColorRGBA222 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA222->setUSE("HAnimSegmentLineColorRGBA");
LineSet220->setColor(*ColorRGBA222);

Shape219->setGeometry(LineSet220);

HAnimJoint218->addChild(*Shape219);

CHAnimJoint* HAnimJoint223 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint223->setName("l_metatarsophalangeal_3");
HAnimJoint223->setDEF("hanim_l_metatarsophalangeal_3");
HAnimJoint223->setCenter(new float[3]{0,1,0});
HAnimJoint223->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint223->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape224 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet225 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet225->setVertexCount(new int[1]{1});
CCoordinate* Coordinate226 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate226->setPoint(new float[3]{0,1,0});
LineSet225->setCoord(*Coordinate226);

//from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3
CColorRGBA* ColorRGBA227 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA227->setUSE("HAnimSegmentLineColorRGBA");
LineSet225->setColor(*ColorRGBA227);

Shape224->setGeometry(LineSet225);

HAnimJoint223->addChild(*Shape224);

CHAnimJoint* HAnimJoint228 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint228->setName("l_tarsal_proximal_interphalangeal_3");
HAnimJoint228->setDEF("hanim_l_tarsal_proximal_interphalangeal_3");
HAnimJoint228->setCenter(new float[3]{0,1,0});
HAnimJoint228->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint228->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape229 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet230 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet230->setVertexCount(new int[1]{1});
CCoordinate* Coordinate231 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate231->setPoint(new float[3]{0,1,0});
LineSet230->setCoord(*Coordinate231);

//from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3
CColorRGBA* ColorRGBA232 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA232->setUSE("HAnimSegmentLineColorRGBA");
LineSet230->setColor(*ColorRGBA232);

Shape229->setGeometry(LineSet230);

HAnimJoint228->addChild(*Shape229);

CHAnimSite* HAnimSite233 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite233->setName("l_tarsal_distal_phalanx_3_tip");
HAnimSite233->setDEF("hanim_l_tarsal_distal_phalanx_3_tip");
HAnimSite233->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor234 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor234->setDescription("HAnimSite l_tarsal_distal_phalanx_3_tip");
HAnimSite233->addChildren(*TouchSensor234);

CShape* Shape235 = (CShape *)(m_pScene.createNode("Shape"));
Shape235->setUSE("HAnimSiteShape");
HAnimSite233->addChildren(*Shape235);

HAnimJoint228->addChild(*HAnimSite233);

CHAnimJoint* HAnimJoint236 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint236->setName("l_tarsal_distal_interphalangeal_3");
HAnimJoint236->setDEF("hanim_l_tarsal_distal_interphalangeal_3");
HAnimJoint236->setCenter(new float[3]{0,1,0});
HAnimJoint236->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint236->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint228->addChildren(*HAnimJoint236);

HAnimJoint223->addChildren(*HAnimJoint228);

HAnimJoint218->addChildren(*HAnimJoint223);

HAnimJoint213->addChildren(*HAnimJoint218);

HAnimJoint154->addChildren(*HAnimJoint213);

HAnimJoint145->addChildren(*HAnimJoint154);

CHAnimJoint* HAnimJoint237 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint237->setName("l_calcaneocuboid");
HAnimJoint237->setDEF("hanim_l_calcaneocuboid");
HAnimJoint237->setCenter(new float[3]{0,1,0});
HAnimJoint237->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint237->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape238 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet239 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet239->setVertexCount(new int[1]{1});
CCoordinate* Coordinate240 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate240->setPoint(new float[3]{0,1,0});
LineSet239->setCoord(*Coordinate240);

//from l_calcaneocuboid to l_transversetarsal
CColorRGBA* ColorRGBA241 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA241->setUSE("HAnimSegmentLineColorRGBA");
LineSet239->setColor(*ColorRGBA241);

Shape238->setGeometry(LineSet239);

HAnimJoint237->addChild(*Shape238);

CHAnimJoint* HAnimJoint242 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint242->setName("l_transversetarsal");
HAnimJoint242->setDEF("hanim_l_transversetarsal");
HAnimJoint242->setCenter(new float[3]{0,1,0});
HAnimJoint242->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint242->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape243 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet244 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet244->setVertexCount(new int[1]{1});
CCoordinate* Coordinate245 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate245->setPoint(new float[3]{0,1,0});
LineSet244->setCoord(*Coordinate245);

//from l_transversetarsal to l_tarsometatarsal_4
CColorRGBA* ColorRGBA246 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA246->setUSE("HAnimSegmentLineColorRGBA");
LineSet244->setColor(*ColorRGBA246);

Shape243->setGeometry(LineSet244);

HAnimJoint242->addChild(*Shape243);

CShape* Shape247 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet248 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet248->setVertexCount(new int[1]{1});
CCoordinate* Coordinate249 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate249->setPoint(new float[3]{0,1,0});
LineSet248->setCoord(*Coordinate249);

//from l_transversetarsal to l_tarsometatarsal_5
CColorRGBA* ColorRGBA250 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA250->setUSE("HAnimSegmentLineColorRGBA");
LineSet248->setColor(*ColorRGBA250);

Shape247->setGeometry(LineSet248);

HAnimJoint242->addChild(*Shape247);

CHAnimJoint* HAnimJoint251 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint251->setName("l_tarsometatarsal_4");
HAnimJoint251->setDEF("hanim_l_tarsometatarsal_4");
HAnimJoint251->setCenter(new float[3]{0,1,0});
HAnimJoint251->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint251->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape252 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet253 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet253->setVertexCount(new int[1]{1});
CCoordinate* Coordinate254 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate254->setPoint(new float[3]{0,1,0});
LineSet253->setCoord(*Coordinate254);

//from l_tarsometatarsal_4 to l_metatarsophalangeal_4
CColorRGBA* ColorRGBA255 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA255->setUSE("HAnimSegmentLineColorRGBA");
LineSet253->setColor(*ColorRGBA255);

Shape252->setGeometry(LineSet253);

HAnimJoint251->addChild(*Shape252);

CHAnimJoint* HAnimJoint256 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint256->setName("l_metatarsophalangeal_4");
HAnimJoint256->setDEF("hanim_l_metatarsophalangeal_4");
HAnimJoint256->setCenter(new float[3]{0,1,0});
HAnimJoint256->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint256->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape257 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet258 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet258->setVertexCount(new int[1]{1});
CCoordinate* Coordinate259 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate259->setPoint(new float[3]{0,1,0});
LineSet258->setCoord(*Coordinate259);

//from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4
CColorRGBA* ColorRGBA260 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA260->setUSE("HAnimSegmentLineColorRGBA");
LineSet258->setColor(*ColorRGBA260);

Shape257->setGeometry(LineSet258);

HAnimJoint256->addChild(*Shape257);

CHAnimJoint* HAnimJoint261 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint261->setName("l_tarsal_proximal_interphalangeal_4");
HAnimJoint261->setDEF("hanim_l_tarsal_proximal_interphalangeal_4");
HAnimJoint261->setCenter(new float[3]{0,1,0});
HAnimJoint261->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint261->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape262 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet263 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet263->setVertexCount(new int[1]{1});
CCoordinate* Coordinate264 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate264->setPoint(new float[3]{0,1,0});
LineSet263->setCoord(*Coordinate264);

//from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4
CColorRGBA* ColorRGBA265 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA265->setUSE("HAnimSegmentLineColorRGBA");
LineSet263->setColor(*ColorRGBA265);

Shape262->setGeometry(LineSet263);

HAnimJoint261->addChild(*Shape262);

CHAnimSite* HAnimSite266 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite266->setName("l_tarsal_distal_phalanx_4_tip");
HAnimSite266->setDEF("hanim_l_tarsal_distal_phalanx_4_tip");
HAnimSite266->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor267 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor267->setDescription("HAnimSite l_tarsal_distal_phalanx_4_tip");
HAnimSite266->addChildren(*TouchSensor267);

CShape* Shape268 = (CShape *)(m_pScene.createNode("Shape"));
Shape268->setUSE("HAnimSiteShape");
HAnimSite266->addChildren(*Shape268);

HAnimJoint261->addChild(*HAnimSite266);

CHAnimJoint* HAnimJoint269 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint269->setName("l_tarsal_distal_interphalangeal_4");
HAnimJoint269->setDEF("hanim_l_tarsal_distal_interphalangeal_4");
HAnimJoint269->setCenter(new float[3]{0,1,0});
HAnimJoint269->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint269->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint261->addChildren(*HAnimJoint269);

HAnimJoint256->addChildren(*HAnimJoint261);

HAnimJoint251->addChildren(*HAnimJoint256);

HAnimJoint242->addChildren(*HAnimJoint251);

CHAnimJoint* HAnimJoint270 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint270->setName("l_tarsometatarsal_5");
HAnimJoint270->setDEF("hanim_l_tarsometatarsal_5");
HAnimJoint270->setCenter(new float[3]{0,1,0});
HAnimJoint270->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint270->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape271 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet272 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet272->setVertexCount(new int[1]{1});
CCoordinate* Coordinate273 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate273->setPoint(new float[3]{0,1,0});
LineSet272->setCoord(*Coordinate273);

//from l_tarsometatarsal_5 to l_metatarsophalangeal_5
CColorRGBA* ColorRGBA274 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA274->setUSE("HAnimSegmentLineColorRGBA");
LineSet272->setColor(*ColorRGBA274);

Shape271->setGeometry(LineSet272);

HAnimJoint270->addChild(*Shape271);

CHAnimSite* HAnimSite275 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite275->setName("l_metatarsal_phalanx_5_pt");
HAnimSite275->setDEF("hanim_l_metatarsal_phalanx_5_pt");
HAnimSite275->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor276 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor276->setDescription("HAnimSite l_metatarsal_phalanx_5_pt");
HAnimSite275->addChildren(*TouchSensor276);

CShape* Shape277 = (CShape *)(m_pScene.createNode("Shape"));
Shape277->setUSE("HAnimSiteShape");
HAnimSite275->addChildren(*Shape277);

HAnimJoint270->addChild(*HAnimSite275);

CHAnimJoint* HAnimJoint278 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint278->setName("l_metatarsophalangeal_5");
HAnimJoint278->setDEF("hanim_l_metatarsophalangeal_5");
HAnimJoint278->setCenter(new float[3]{0,1,0});
HAnimJoint278->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint278->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape279 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet280 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet280->setVertexCount(new int[1]{1});
CCoordinate* Coordinate281 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate281->setPoint(new float[3]{0,1,0});
LineSet280->setCoord(*Coordinate281);

//from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5
CColorRGBA* ColorRGBA282 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA282->setUSE("HAnimSegmentLineColorRGBA");
LineSet280->setColor(*ColorRGBA282);

Shape279->setGeometry(LineSet280);

HAnimJoint278->addChild(*Shape279);

CHAnimJoint* HAnimJoint283 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint283->setName("l_tarsal_proximal_interphalangeal_5");
HAnimJoint283->setDEF("hanim_l_tarsal_proximal_interphalangeal_5");
HAnimJoint283->setCenter(new float[3]{0,1,0});
HAnimJoint283->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint283->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape284 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet285 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet285->setVertexCount(new int[1]{1});
CCoordinate* Coordinate286 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate286->setPoint(new float[3]{0,1,0});
LineSet285->setCoord(*Coordinate286);

//from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5
CColorRGBA* ColorRGBA287 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA287->setUSE("HAnimSegmentLineColorRGBA");
LineSet285->setColor(*ColorRGBA287);

Shape284->setGeometry(LineSet285);

HAnimJoint283->addChild(*Shape284);

CHAnimSite* HAnimSite288 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite288->setName("l_tarsal_distal_phalanx_5_tip");
HAnimSite288->setDEF("hanim_l_tarsal_distal_phalanx_5_tip");
HAnimSite288->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor289 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor289->setDescription("HAnimSite l_tarsal_distal_phalanx_5_tip");
HAnimSite288->addChildren(*TouchSensor289);

CShape* Shape290 = (CShape *)(m_pScene.createNode("Shape"));
Shape290->setUSE("HAnimSiteShape");
HAnimSite288->addChildren(*Shape290);

HAnimJoint283->addChild(*HAnimSite288);

CHAnimJoint* HAnimJoint291 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint291->setName("l_tarsal_distal_interphalangeal_5");
HAnimJoint291->setDEF("hanim_l_tarsal_distal_interphalangeal_5");
HAnimJoint291->setCenter(new float[3]{0,1,0});
HAnimJoint291->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint291->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint283->addChildren(*HAnimJoint291);

HAnimJoint278->addChildren(*HAnimJoint283);

HAnimJoint270->addChildren(*HAnimJoint278);

HAnimJoint242->addChildren(*HAnimJoint270);

HAnimJoint237->addChildren(*HAnimJoint242);

HAnimJoint145->addChildren(*HAnimJoint237);

HAnimJoint134->addChildren(*HAnimJoint145);

HAnimJoint120->addChildren(*HAnimJoint134);

HAnimJoint87->addChildren(*HAnimJoint120);

CHAnimJoint* HAnimJoint292 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint292->setName("r_hip");
HAnimJoint292->setDEF("hanim_r_hip");
HAnimJoint292->setCenter(new float[3]{-0.095,0.9171,0.0029});
HAnimJoint292->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint292->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape293 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet294 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet294->setVertexCount(new int[1]{2});
CCoordinate* Coordinate295 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate295->setPoint(new float[6]{-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318});
LineSet294->setCoord(*Coordinate295);

//from r_hip to r_knee
CColorRGBA* ColorRGBA296 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA296->setUSE("HAnimSegmentLineColorRGBA");
LineSet294->setColor(*ColorRGBA296);

Shape293->setGeometry(LineSet294);

HAnimJoint292->addChild(*Shape293);

CHAnimSite* HAnimSite297 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite297->setName("r_lateral_malleolus_pt");
HAnimSite297->setDEF("hanim_r_lateral_malleolus_pt");
HAnimSite297->setTranslation(new float[3]{-0.1006,0.0658,-0.1075});
CTouchSensor* TouchSensor298 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor298->setDescription("HAnimSite r_lateral_malleolus_pt");
HAnimSite297->addChildren(*TouchSensor298);

CShape* Shape299 = (CShape *)(m_pScene.createNode("Shape"));
Shape299->setUSE("HAnimSiteShape");
HAnimSite297->addChildren(*Shape299);

HAnimJoint292->addChild(*HAnimSite297);

CHAnimSite* HAnimSite300 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite300->setName("r_medial_malleolus_pt");
HAnimSite300->setDEF("hanim_r_medial_malleolus_pt");
HAnimSite300->setTranslation(new float[3]{-0.0591,0.076,-0.0928});
CTouchSensor* TouchSensor301 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor301->setDescription("HAnimSite r_medial_malleolus_pt");
HAnimSite300->addChildren(*TouchSensor301);

CShape* Shape302 = (CShape *)(m_pScene.createNode("Shape"));
Shape302->setUSE("HAnimSiteShape");
HAnimSite300->addChildren(*Shape302);

HAnimJoint292->addChild(*HAnimSite300);

CHAnimSite* HAnimSite303 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite303->setName("r_tibiale_pt");
HAnimSite303->setDEF("hanim_r_tibiale_pt");
HAnimSite303->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor304 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor304->setDescription("HAnimSite r_tibiale_pt");
HAnimSite303->addChildren(*TouchSensor304);

CShape* Shape305 = (CShape *)(m_pScene.createNode("Shape"));
Shape305->setUSE("HAnimSiteShape");
HAnimSite303->addChildren(*Shape305);

HAnimJoint292->addChild(*HAnimSite303);

CHAnimJoint* HAnimJoint306 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint306->setName("r_knee");
HAnimJoint306->setDEF("hanim_r_knee");
HAnimJoint306->setCenter(new float[3]{-0.0867,0.4913,0.0318});
HAnimJoint306->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint306->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape307 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet308 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet308->setVertexCount(new int[1]{2});
CCoordinate* Coordinate309 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate309->setPoint(new float[6]{-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766});
LineSet308->setCoord(*Coordinate309);

//from r_knee to r_talocrural
CColorRGBA* ColorRGBA310 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA310->setUSE("HAnimSegmentLineColorRGBA");
LineSet308->setColor(*ColorRGBA310);

Shape307->setGeometry(LineSet308);

HAnimJoint306->addChild(*Shape307);

CHAnimSite* HAnimSite311 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite311->setName("r_calcaneus_posterior_pt");
HAnimSite311->setDEF("hanim_r_calcaneus_posterior_pt");
HAnimSite311->setTranslation(new float[3]{-0.0692,0.0297,-0.1221});
CTouchSensor* TouchSensor312 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor312->setDescription("HAnimSite r_calcaneus_posterior_pt");
HAnimSite311->addChildren(*TouchSensor312);

CShape* Shape313 = (CShape *)(m_pScene.createNode("Shape"));
Shape313->setUSE("HAnimSiteShape");
HAnimSite311->addChildren(*Shape313);

HAnimJoint306->addChild(*HAnimSite311);

CHAnimSite* HAnimSite314 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite314->setName("r_sphyrion_pt");
HAnimSite314->setDEF("hanim_r_sphyrion_pt");
HAnimSite314->setTranslation(new float[3]{-0.0603,0.061,-0.1002});
CTouchSensor* TouchSensor315 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor315->setDescription("HAnimSite r_sphyrion_pt");
HAnimSite314->addChildren(*TouchSensor315);

CShape* Shape316 = (CShape *)(m_pScene.createNode("Shape"));
Shape316->setUSE("HAnimSiteShape");
HAnimSite314->addChildren(*Shape316);

HAnimJoint306->addChild(*HAnimSite314);

CHAnimJoint* HAnimJoint317 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint317->setName("r_talocrural");
HAnimJoint317->setDEF("hanim_r_talocrural");
HAnimJoint317->setCenter(new float[3]{-0.0801,0.0712,-0.0766});
HAnimJoint317->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint317->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape318 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet319 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet319->setVertexCount(new int[1]{2});
CCoordinate* Coordinate320 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate320->setPoint(new float[6]{-0.0801,0.0712,-0.0766,0,1,0});
LineSet319->setCoord(*Coordinate320);

//from r_talocrural to r_talocalcaneonavicular
CColorRGBA* ColorRGBA321 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA321->setUSE("HAnimSegmentLineColorRGBA");
LineSet319->setColor(*ColorRGBA321);

Shape318->setGeometry(LineSet319);

HAnimJoint317->addChild(*Shape318);

CShape* Shape322 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet323 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet323->setVertexCount(new int[1]{2});
CCoordinate* Coordinate324 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate324->setPoint(new float[6]{-0.0801,0.0712,-0.0766,0,1,0});
LineSet323->setCoord(*Coordinate324);

//from r_talocrural to r_calcaneocuboid
CColorRGBA* ColorRGBA325 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA325->setUSE("HAnimSegmentLineColorRGBA");
LineSet323->setColor(*ColorRGBA325);

Shape322->setGeometry(LineSet323);

HAnimJoint317->addChild(*Shape322);

CHAnimJoint* HAnimJoint326 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint326->setName("r_talocalcaneonavicular");
HAnimJoint326->setDEF("hanim_r_talocalcaneonavicular");
HAnimJoint326->setCenter(new float[3]{0,1,0});
HAnimJoint326->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint326->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape327 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet328 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet328->setVertexCount(new int[1]{1});
CCoordinate* Coordinate329 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate329->setPoint(new float[3]{0,1,0});
LineSet328->setCoord(*Coordinate329);

//from r_talocalcaneonavicular to r_cuneonavicular_1
CColorRGBA* ColorRGBA330 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA330->setUSE("HAnimSegmentLineColorRGBA");
LineSet328->setColor(*ColorRGBA330);

Shape327->setGeometry(LineSet328);

HAnimJoint326->addChild(*Shape327);

CShape* Shape331 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet332 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet332->setVertexCount(new int[1]{1});
CCoordinate* Coordinate333 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate333->setPoint(new float[3]{0,1,0});
LineSet332->setCoord(*Coordinate333);

//from r_talocalcaneonavicular to r_cuneonavicular_2
CColorRGBA* ColorRGBA334 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA334->setUSE("HAnimSegmentLineColorRGBA");
LineSet332->setColor(*ColorRGBA334);

Shape331->setGeometry(LineSet332);

HAnimJoint326->addChild(*Shape331);

CShape* Shape335 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet336 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet336->setVertexCount(new int[1]{1});
CCoordinate* Coordinate337 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate337->setPoint(new float[3]{0,1,0});
LineSet336->setCoord(*Coordinate337);

//from r_talocalcaneonavicular to r_cuneonavicular_3
CColorRGBA* ColorRGBA338 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA338->setUSE("HAnimSegmentLineColorRGBA");
LineSet336->setColor(*ColorRGBA338);

Shape335->setGeometry(LineSet336);

HAnimJoint326->addChild(*Shape335);

CHAnimJoint* HAnimJoint339 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint339->setName("r_cuneonavicular_1");
HAnimJoint339->setDEF("hanim_r_cuneonavicular_1");
HAnimJoint339->setCenter(new float[3]{0,1,0});
HAnimJoint339->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint339->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape340 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet341 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet341->setVertexCount(new int[1]{1});
CCoordinate* Coordinate342 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate342->setPoint(new float[3]{0,1,0});
LineSet341->setCoord(*Coordinate342);

//from r_cuneonavicular_1 to r_tarsometatarsal_1
CColorRGBA* ColorRGBA343 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA343->setUSE("HAnimSegmentLineColorRGBA");
LineSet341->setColor(*ColorRGBA343);

Shape340->setGeometry(LineSet341);

HAnimJoint339->addChild(*Shape340);

CHAnimJoint* HAnimJoint344 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint344->setName("r_tarsometatarsal_1");
HAnimJoint344->setDEF("hanim_r_tarsometatarsal_1");
HAnimJoint344->setCenter(new float[3]{0,1,0});
HAnimJoint344->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint344->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape345 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet346 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet346->setVertexCount(new int[1]{1});
CCoordinate* Coordinate347 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate347->setPoint(new float[3]{0,1,0});
LineSet346->setCoord(*Coordinate347);

//from r_tarsometatarsal_1 to r_metatarsophalangeal_1
CColorRGBA* ColorRGBA348 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA348->setUSE("HAnimSegmentLineColorRGBA");
LineSet346->setColor(*ColorRGBA348);

Shape345->setGeometry(LineSet346);

HAnimJoint344->addChild(*Shape345);

CHAnimSite* HAnimSite349 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite349->setName("r_metatarsal_phalanx_1_pt");
HAnimSite349->setDEF("hanim_r_metatarsal_phalanx_1_pt");
HAnimSite349->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor350 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor350->setDescription("HAnimSite r_metatarsal_phalanx_1_pt");
HAnimSite349->addChildren(*TouchSensor350);

CShape* Shape351 = (CShape *)(m_pScene.createNode("Shape"));
Shape351->setUSE("HAnimSiteShape");
HAnimSite349->addChildren(*Shape351);

HAnimJoint344->addChild(*HAnimSite349);

CHAnimJoint* HAnimJoint352 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint352->setName("r_metatarsophalangeal_1");
HAnimJoint352->setDEF("hanim_r_metatarsophalangeal_1");
HAnimJoint352->setCenter(new float[3]{0,1,0});
HAnimJoint352->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint352->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape353 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet354 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet354->setVertexCount(new int[1]{1});
CCoordinate* Coordinate355 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate355->setPoint(new float[3]{0,1,0});
LineSet354->setCoord(*Coordinate355);

//from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1
CColorRGBA* ColorRGBA356 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA356->setUSE("HAnimSegmentLineColorRGBA");
LineSet354->setColor(*ColorRGBA356);

Shape353->setGeometry(LineSet354);

HAnimJoint352->addChild(*Shape353);

CHAnimSite* HAnimSite357 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite357->setName("r_tarsal_distal_phalanx_1_tip");
HAnimSite357->setDEF("hanim_r_tarsal_distal_phalanx_1_tip");
HAnimSite357->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor358 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor358->setDescription("HAnimSite r_tarsal_distal_phalanx_1_tip");
HAnimSite357->addChildren(*TouchSensor358);

CShape* Shape359 = (CShape *)(m_pScene.createNode("Shape"));
Shape359->setUSE("HAnimSiteShape");
HAnimSite357->addChildren(*Shape359);

HAnimJoint352->addChild(*HAnimSite357);

CHAnimJoint* HAnimJoint360 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint360->setName("r_tarsal_interphalangeal_1");
HAnimJoint360->setDEF("hanim_r_tarsal_interphalangeal_1");
HAnimJoint360->setCenter(new float[3]{0,1,0});
HAnimJoint360->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint360->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint352->addChildren(*HAnimJoint360);

HAnimJoint344->addChildren(*HAnimJoint352);

HAnimJoint339->addChildren(*HAnimJoint344);

HAnimJoint326->addChildren(*HAnimJoint339);

CHAnimJoint* HAnimJoint361 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint361->setName("r_cuneonavicular_2");
HAnimJoint361->setDEF("hanim_r_cuneonavicular_2");
HAnimJoint361->setCenter(new float[3]{0,1,0});
HAnimJoint361->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint361->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape362 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet363 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet363->setVertexCount(new int[1]{1});
CCoordinate* Coordinate364 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate364->setPoint(new float[3]{0,1,0});
LineSet363->setCoord(*Coordinate364);

//from r_cuneonavicular_2 to r_tarsometatarsal_2
CColorRGBA* ColorRGBA365 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA365->setUSE("HAnimSegmentLineColorRGBA");
LineSet363->setColor(*ColorRGBA365);

Shape362->setGeometry(LineSet363);

HAnimJoint361->addChild(*Shape362);

CHAnimJoint* HAnimJoint366 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint366->setName("r_tarsometatarsal_2");
HAnimJoint366->setDEF("hanim_r_tarsometatarsal_2");
HAnimJoint366->setCenter(new float[3]{0,1,0});
HAnimJoint366->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint366->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape367 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet368 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet368->setVertexCount(new int[1]{1});
CCoordinate* Coordinate369 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate369->setPoint(new float[3]{0,1,0});
LineSet368->setCoord(*Coordinate369);

//from r_tarsometatarsal_2 to r_metatarsophalangeal_2
CColorRGBA* ColorRGBA370 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA370->setUSE("HAnimSegmentLineColorRGBA");
LineSet368->setColor(*ColorRGBA370);

Shape367->setGeometry(LineSet368);

HAnimJoint366->addChild(*Shape367);

CHAnimJoint* HAnimJoint371 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint371->setName("r_metatarsophalangeal_2");
HAnimJoint371->setDEF("hanim_r_metatarsophalangeal_2");
HAnimJoint371->setCenter(new float[3]{0,1,0});
HAnimJoint371->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint371->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape372 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet373 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet373->setVertexCount(new int[1]{1});
CCoordinate* Coordinate374 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate374->setPoint(new float[3]{0,1,0});
LineSet373->setCoord(*Coordinate374);

//from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2
CColorRGBA* ColorRGBA375 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA375->setUSE("HAnimSegmentLineColorRGBA");
LineSet373->setColor(*ColorRGBA375);

Shape372->setGeometry(LineSet373);

HAnimJoint371->addChild(*Shape372);

CHAnimJoint* HAnimJoint376 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint376->setName("r_tarsal_proximal_interphalangeal_2");
HAnimJoint376->setDEF("hanim_r_tarsal_proximal_interphalangeal_2");
HAnimJoint376->setCenter(new float[3]{0,1,0});
HAnimJoint376->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint376->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape377 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet378 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet378->setVertexCount(new int[1]{1});
CCoordinate* Coordinate379 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate379->setPoint(new float[3]{0,1,0});
LineSet378->setCoord(*Coordinate379);

//from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2
CColorRGBA* ColorRGBA380 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA380->setUSE("HAnimSegmentLineColorRGBA");
LineSet378->setColor(*ColorRGBA380);

Shape377->setGeometry(LineSet378);

HAnimJoint376->addChild(*Shape377);

CHAnimSite* HAnimSite381 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite381->setName("r_tarsal_distal_phalanx_2_tip");
HAnimSite381->setDEF("hanim_r_tarsal_distal_phalanx_2_tip");
HAnimSite381->setTranslation(new float[3]{-0.0883,0.0134,0.1383});
CTouchSensor* TouchSensor382 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor382->setDescription("HAnimSite r_tarsal_distal_phalanx_2_tip");
HAnimSite381->addChildren(*TouchSensor382);

CShape* Shape383 = (CShape *)(m_pScene.createNode("Shape"));
Shape383->setUSE("HAnimSiteShape");
HAnimSite381->addChildren(*Shape383);

HAnimJoint376->addChild(*HAnimSite381);

CHAnimJoint* HAnimJoint384 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint384->setName("r_tarsal_distal_interphalangeal_2");
HAnimJoint384->setDEF("hanim_r_tarsal_distal_interphalangeal_2");
HAnimJoint384->setCenter(new float[3]{0,1,0});
HAnimJoint384->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint384->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint376->addChildren(*HAnimJoint384);

HAnimJoint371->addChildren(*HAnimJoint376);

HAnimJoint366->addChildren(*HAnimJoint371);

HAnimJoint361->addChildren(*HAnimJoint366);

HAnimJoint326->addChildren(*HAnimJoint361);

CHAnimJoint* HAnimJoint385 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint385->setName("r_cuneonavicular_3");
HAnimJoint385->setDEF("hanim_r_cuneonavicular_3");
HAnimJoint385->setCenter(new float[3]{0,1,0});
HAnimJoint385->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint385->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape386 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet387 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet387->setVertexCount(new int[1]{1});
CCoordinate* Coordinate388 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate388->setPoint(new float[3]{0,1,0});
LineSet387->setCoord(*Coordinate388);

//from r_cuneonavicular_3 to r_tarsometatarsal_3
CColorRGBA* ColorRGBA389 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA389->setUSE("HAnimSegmentLineColorRGBA");
LineSet387->setColor(*ColorRGBA389);

Shape386->setGeometry(LineSet387);

HAnimJoint385->addChild(*Shape386);

CHAnimJoint* HAnimJoint390 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint390->setName("r_tarsometatarsal_3");
HAnimJoint390->setDEF("hanim_r_tarsometatarsal_3");
HAnimJoint390->setCenter(new float[3]{0,1,0});
HAnimJoint390->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint390->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape391 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet392 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet392->setVertexCount(new int[1]{1});
CCoordinate* Coordinate393 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate393->setPoint(new float[3]{0,1,0});
LineSet392->setCoord(*Coordinate393);

//from r_tarsometatarsal_3 to r_metatarsophalangeal_3
CColorRGBA* ColorRGBA394 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA394->setUSE("HAnimSegmentLineColorRGBA");
LineSet392->setColor(*ColorRGBA394);

Shape391->setGeometry(LineSet392);

HAnimJoint390->addChild(*Shape391);

CHAnimJoint* HAnimJoint395 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint395->setName("r_metatarsophalangeal_3");
HAnimJoint395->setDEF("hanim_r_metatarsophalangeal_3");
HAnimJoint395->setCenter(new float[3]{0,1,0});
HAnimJoint395->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint395->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape396 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet397 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet397->setVertexCount(new int[1]{1});
CCoordinate* Coordinate398 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate398->setPoint(new float[3]{0,1,0});
LineSet397->setCoord(*Coordinate398);

//from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3
CColorRGBA* ColorRGBA399 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA399->setUSE("HAnimSegmentLineColorRGBA");
LineSet397->setColor(*ColorRGBA399);

Shape396->setGeometry(LineSet397);

HAnimJoint395->addChild(*Shape396);

CHAnimJoint* HAnimJoint400 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint400->setName("r_tarsal_proximal_interphalangeal_3");
HAnimJoint400->setDEF("hanim_r_tarsal_proximal_interphalangeal_3");
HAnimJoint400->setCenter(new float[3]{0,1,0});
HAnimJoint400->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint400->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape401 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet402 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet402->setVertexCount(new int[1]{1});
CCoordinate* Coordinate403 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate403->setPoint(new float[3]{0,1,0});
LineSet402->setCoord(*Coordinate403);

//from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3
CColorRGBA* ColorRGBA404 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA404->setUSE("HAnimSegmentLineColorRGBA");
LineSet402->setColor(*ColorRGBA404);

Shape401->setGeometry(LineSet402);

HAnimJoint400->addChild(*Shape401);

CHAnimSite* HAnimSite405 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite405->setName("r_tarsal_distal_phalanx_3_tip");
HAnimSite405->setDEF("hanim_r_tarsal_distal_phalanx_3_tip");
HAnimSite405->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor406 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor406->setDescription("HAnimSite r_tarsal_distal_phalanx_3_tip");
HAnimSite405->addChildren(*TouchSensor406);

CShape* Shape407 = (CShape *)(m_pScene.createNode("Shape"));
Shape407->setUSE("HAnimSiteShape");
HAnimSite405->addChildren(*Shape407);

HAnimJoint400->addChild(*HAnimSite405);

CHAnimJoint* HAnimJoint408 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint408->setName("r_tarsal_distal_interphalangeal_3");
HAnimJoint408->setDEF("hanim_r_tarsal_distal_interphalangeal_3");
HAnimJoint408->setCenter(new float[3]{0,1,0});
HAnimJoint408->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint408->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint400->addChildren(*HAnimJoint408);

HAnimJoint395->addChildren(*HAnimJoint400);

HAnimJoint390->addChildren(*HAnimJoint395);

HAnimJoint385->addChildren(*HAnimJoint390);

HAnimJoint326->addChildren(*HAnimJoint385);

HAnimJoint317->addChildren(*HAnimJoint326);

CHAnimJoint* HAnimJoint409 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint409->setName("r_calcaneocuboid");
HAnimJoint409->setDEF("hanim_r_calcaneocuboid");
HAnimJoint409->setCenter(new float[3]{0,1,0});
HAnimJoint409->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint409->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape410 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet411 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet411->setVertexCount(new int[1]{1});
CCoordinate* Coordinate412 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate412->setPoint(new float[3]{0,1,0});
LineSet411->setCoord(*Coordinate412);

//from r_calcaneocuboid to r_transversetarsal
CColorRGBA* ColorRGBA413 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA413->setUSE("HAnimSegmentLineColorRGBA");
LineSet411->setColor(*ColorRGBA413);

Shape410->setGeometry(LineSet411);

HAnimJoint409->addChild(*Shape410);

CHAnimJoint* HAnimJoint414 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint414->setName("r_transversetarsal");
HAnimJoint414->setDEF("hanim_r_transversetarsal");
HAnimJoint414->setCenter(new float[3]{0,1,0});
HAnimJoint414->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint414->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape415 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet416 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet416->setVertexCount(new int[1]{1});
CCoordinate* Coordinate417 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate417->setPoint(new float[3]{0,1,0});
LineSet416->setCoord(*Coordinate417);

//from r_transversetarsal to r_tarsometatarsal_4
CColorRGBA* ColorRGBA418 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA418->setUSE("HAnimSegmentLineColorRGBA");
LineSet416->setColor(*ColorRGBA418);

Shape415->setGeometry(LineSet416);

HAnimJoint414->addChild(*Shape415);

CShape* Shape419 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet420 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet420->setVertexCount(new int[1]{1});
CCoordinate* Coordinate421 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate421->setPoint(new float[3]{0,1,0});
LineSet420->setCoord(*Coordinate421);

//from r_transversetarsal to r_tarsometatarsal_5
CColorRGBA* ColorRGBA422 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA422->setUSE("HAnimSegmentLineColorRGBA");
LineSet420->setColor(*ColorRGBA422);

Shape419->setGeometry(LineSet420);

HAnimJoint414->addChild(*Shape419);

CHAnimJoint* HAnimJoint423 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint423->setName("r_tarsometatarsal_4");
HAnimJoint423->setDEF("hanim_r_tarsometatarsal_4");
HAnimJoint423->setCenter(new float[3]{0,1,0});
HAnimJoint423->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint423->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape424 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet425 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet425->setVertexCount(new int[1]{1});
CCoordinate* Coordinate426 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate426->setPoint(new float[3]{0,1,0});
LineSet425->setCoord(*Coordinate426);

//from r_tarsometatarsal_4 to r_metatarsophalangeal_4
CColorRGBA* ColorRGBA427 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA427->setUSE("HAnimSegmentLineColorRGBA");
LineSet425->setColor(*ColorRGBA427);

Shape424->setGeometry(LineSet425);

HAnimJoint423->addChild(*Shape424);

CHAnimJoint* HAnimJoint428 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint428->setName("r_metatarsophalangeal_4");
HAnimJoint428->setDEF("hanim_r_metatarsophalangeal_4");
HAnimJoint428->setCenter(new float[3]{0,1,0});
HAnimJoint428->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint428->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape429 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet430 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet430->setVertexCount(new int[1]{1});
CCoordinate* Coordinate431 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate431->setPoint(new float[3]{0,1,0});
LineSet430->setCoord(*Coordinate431);

//from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4
CColorRGBA* ColorRGBA432 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA432->setUSE("HAnimSegmentLineColorRGBA");
LineSet430->setColor(*ColorRGBA432);

Shape429->setGeometry(LineSet430);

HAnimJoint428->addChild(*Shape429);

CHAnimJoint* HAnimJoint433 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint433->setName("r_tarsal_proximal_interphalangeal_4");
HAnimJoint433->setDEF("hanim_r_tarsal_proximal_interphalangeal_4");
HAnimJoint433->setCenter(new float[3]{0,1,0});
HAnimJoint433->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint433->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape434 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet435 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet435->setVertexCount(new int[1]{1});
CCoordinate* Coordinate436 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate436->setPoint(new float[3]{0,1,0});
LineSet435->setCoord(*Coordinate436);

//from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4
CColorRGBA* ColorRGBA437 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA437->setUSE("HAnimSegmentLineColorRGBA");
LineSet435->setColor(*ColorRGBA437);

Shape434->setGeometry(LineSet435);

HAnimJoint433->addChild(*Shape434);

CHAnimSite* HAnimSite438 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite438->setName("r_tarsal_distal_phalanx_4_tip");
HAnimSite438->setDEF("hanim_r_tarsal_distal_phalanx_4_tip");
HAnimSite438->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor439 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor439->setDescription("HAnimSite r_tarsal_distal_phalanx_4_tip");
HAnimSite438->addChildren(*TouchSensor439);

CShape* Shape440 = (CShape *)(m_pScene.createNode("Shape"));
Shape440->setUSE("HAnimSiteShape");
HAnimSite438->addChildren(*Shape440);

HAnimJoint433->addChild(*HAnimSite438);

CHAnimJoint* HAnimJoint441 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint441->setName("r_tarsal_distal_interphalangeal_4");
HAnimJoint441->setDEF("hanim_r_tarsal_distal_interphalangeal_4");
HAnimJoint441->setCenter(new float[3]{0,1,0});
HAnimJoint441->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint441->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint433->addChildren(*HAnimJoint441);

HAnimJoint428->addChildren(*HAnimJoint433);

HAnimJoint423->addChildren(*HAnimJoint428);

HAnimJoint414->addChildren(*HAnimJoint423);

CHAnimJoint* HAnimJoint442 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint442->setName("r_tarsometatarsal_5");
HAnimJoint442->setDEF("hanim_r_tarsometatarsal_5");
HAnimJoint442->setCenter(new float[3]{0,1,0});
HAnimJoint442->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint442->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape443 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet444 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet444->setVertexCount(new int[1]{1});
CCoordinate* Coordinate445 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate445->setPoint(new float[3]{0,1,0});
LineSet444->setCoord(*Coordinate445);

//from r_tarsometatarsal_5 to r_metatarsophalangeal_5
CColorRGBA* ColorRGBA446 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA446->setUSE("HAnimSegmentLineColorRGBA");
LineSet444->setColor(*ColorRGBA446);

Shape443->setGeometry(LineSet444);

HAnimJoint442->addChild(*Shape443);

CHAnimSite* HAnimSite447 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite447->setName("r_metatarsal_phalanx_5_pt");
HAnimSite447->setDEF("hanim_r_metatarsal_phalanx_5_pt");
HAnimSite447->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor448 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor448->setDescription("HAnimSite r_metatarsal_phalanx_5_pt");
HAnimSite447->addChildren(*TouchSensor448);

CShape* Shape449 = (CShape *)(m_pScene.createNode("Shape"));
Shape449->setUSE("HAnimSiteShape");
HAnimSite447->addChildren(*Shape449);

HAnimJoint442->addChild(*HAnimSite447);

CHAnimJoint* HAnimJoint450 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint450->setName("r_metatarsophalangeal_5");
HAnimJoint450->setDEF("hanim_r_metatarsophalangeal_5");
HAnimJoint450->setCenter(new float[3]{0,1,0});
HAnimJoint450->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint450->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape451 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet452 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet452->setVertexCount(new int[1]{1});
CCoordinate* Coordinate453 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate453->setPoint(new float[3]{0,1,0});
LineSet452->setCoord(*Coordinate453);

//from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5
CColorRGBA* ColorRGBA454 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA454->setUSE("HAnimSegmentLineColorRGBA");
LineSet452->setColor(*ColorRGBA454);

Shape451->setGeometry(LineSet452);

HAnimJoint450->addChild(*Shape451);

CHAnimJoint* HAnimJoint455 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint455->setName("r_tarsal_proximal_interphalangeal_5");
HAnimJoint455->setDEF("hanim_r_tarsal_proximal_interphalangeal_5");
HAnimJoint455->setCenter(new float[3]{0,1,0});
HAnimJoint455->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint455->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape456 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet457 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet457->setVertexCount(new int[1]{1});
CCoordinate* Coordinate458 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate458->setPoint(new float[3]{0,1,0});
LineSet457->setCoord(*Coordinate458);

//from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5
CColorRGBA* ColorRGBA459 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA459->setUSE("HAnimSegmentLineColorRGBA");
LineSet457->setColor(*ColorRGBA459);

Shape456->setGeometry(LineSet457);

HAnimJoint455->addChild(*Shape456);

CHAnimSite* HAnimSite460 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite460->setName("r_tarsal_distal_phalanx_5_tip");
HAnimSite460->setDEF("hanim_r_tarsal_distal_phalanx_5_tip");
HAnimSite460->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor461 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor461->setDescription("HAnimSite r_tarsal_distal_phalanx_5_tip");
HAnimSite460->addChildren(*TouchSensor461);

CShape* Shape462 = (CShape *)(m_pScene.createNode("Shape"));
Shape462->setUSE("HAnimSiteShape");
HAnimSite460->addChildren(*Shape462);

HAnimJoint455->addChild(*HAnimSite460);

CHAnimJoint* HAnimJoint463 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint463->setName("r_tarsal_distal_interphalangeal_5");
HAnimJoint463->setDEF("hanim_r_tarsal_distal_interphalangeal_5");
HAnimJoint463->setCenter(new float[3]{0,1,0});
HAnimJoint463->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint463->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint455->addChildren(*HAnimJoint463);

HAnimJoint450->addChildren(*HAnimJoint455);

HAnimJoint442->addChildren(*HAnimJoint450);

HAnimJoint414->addChildren(*HAnimJoint442);

HAnimJoint409->addChildren(*HAnimJoint414);

HAnimJoint317->addChildren(*HAnimJoint409);

HAnimJoint306->addChildren(*HAnimJoint317);

HAnimJoint292->addChildren(*HAnimJoint306);

HAnimJoint87->addChildren(*HAnimJoint292);

HAnimJoint39->addChildren(*HAnimJoint87);

CHAnimJoint* HAnimJoint464 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint464->setName("vl5");
HAnimJoint464->setDEF("hanim_vl5");
HAnimJoint464->setCenter(new float[3]{0.0028,1.0568,-0.0776});
HAnimJoint464->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint464->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape465 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet466 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet466->setVertexCount(new int[1]{2});
CCoordinate* Coordinate467 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate467->setPoint(new float[6]{0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787});
LineSet466->setCoord(*Coordinate467);

//from vl5 to vl4
CColorRGBA* ColorRGBA468 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA468->setUSE("HAnimSegmentLineColorRGBA");
LineSet466->setColor(*ColorRGBA468);

Shape465->setGeometry(LineSet466);

HAnimJoint464->addChild(*Shape465);

CHAnimJoint* HAnimJoint469 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint469->setName("vl4");
HAnimJoint469->setDEF("hanim_vl4");
HAnimJoint469->setCenter(new float[3]{0.0035,1.0925,-0.0787});
HAnimJoint469->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint469->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape470 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet471 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet471->setVertexCount(new int[1]{2});
CCoordinate* Coordinate472 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate472->setPoint(new float[6]{0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796});
LineSet471->setCoord(*Coordinate472);

//from vl4 to vl3
CColorRGBA* ColorRGBA473 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA473->setUSE("HAnimSegmentLineColorRGBA");
LineSet471->setColor(*ColorRGBA473);

Shape470->setGeometry(LineSet471);

HAnimJoint469->addChild(*Shape470);

CHAnimJoint* HAnimJoint474 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint474->setName("vl3");
HAnimJoint474->setDEF("hanim_vl3");
HAnimJoint474->setCenter(new float[3]{0.0041,1.1276,-0.0796});
HAnimJoint474->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint474->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape475 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet476 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet476->setVertexCount(new int[1]{2});
CCoordinate* Coordinate477 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate477->setPoint(new float[6]{0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08});
LineSet476->setCoord(*Coordinate477);

//from vl3 to vl2
CColorRGBA* ColorRGBA478 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA478->setUSE("HAnimSegmentLineColorRGBA");
LineSet476->setColor(*ColorRGBA478);

Shape475->setGeometry(LineSet476);

HAnimJoint474->addChild(*Shape475);

CHAnimSite* HAnimSite479 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite479->setName("l_rib10_pt");
HAnimSite479->setDEF("hanim_l_rib10_pt");
HAnimSite479->setTranslation(new float[3]{0.0871,1.1925,0.0992});
CTouchSensor* TouchSensor480 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor480->setDescription("HAnimSite l_rib10_pt");
HAnimSite479->addChildren(*TouchSensor480);

CShape* Shape481 = (CShape *)(m_pScene.createNode("Shape"));
Shape481->setUSE("HAnimSiteShape");
HAnimSite479->addChildren(*Shape481);

HAnimJoint474->addChild(*HAnimSite479);

CHAnimSite* HAnimSite482 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite482->setName("r_rib10_pt");
HAnimSite482->setDEF("hanim_r_rib10_pt");
HAnimSite482->setTranslation(new float[3]{-0.0711,1.1941,0.1016});
CTouchSensor* TouchSensor483 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor483->setDescription("HAnimSite r_rib10_pt");
HAnimSite482->addChildren(*TouchSensor483);

CShape* Shape484 = (CShape *)(m_pScene.createNode("Shape"));
Shape484->setUSE("HAnimSiteShape");
HAnimSite482->addChildren(*Shape484);

HAnimJoint474->addChild(*HAnimSite482);

CHAnimSite* HAnimSite485 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite485->setName("spine_2_middle_back_pt");
HAnimSite485->setDEF("hanim_spine_2_middle_back_pt");
HAnimSite485->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor486 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor486->setDescription("HAnimSite spine_2_middle_back_pt");
HAnimSite485->addChildren(*TouchSensor486);

CShape* Shape487 = (CShape *)(m_pScene.createNode("Shape"));
Shape487->setUSE("HAnimSiteShape");
HAnimSite485->addChildren(*Shape487);

HAnimJoint474->addChild(*HAnimSite485);

CHAnimJoint* HAnimJoint488 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint488->setName("vl2");
HAnimJoint488->setDEF("hanim_vl2");
HAnimJoint488->setCenter(new float[3]{0.0045,1.1546,-0.08});
HAnimJoint488->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint488->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape489 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet490 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet490->setVertexCount(new int[1]{2});
CCoordinate* Coordinate491 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate491->setPoint(new float[6]{0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805});
LineSet490->setCoord(*Coordinate491);

//from vl2 to vl1
CColorRGBA* ColorRGBA492 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA492->setUSE("HAnimSegmentLineColorRGBA");
LineSet490->setColor(*ColorRGBA492);

Shape489->setGeometry(LineSet490);

HAnimJoint488->addChild(*Shape489);

CHAnimJoint* HAnimJoint493 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint493->setName("vl1");
HAnimJoint493->setDEF("hanim_vl1");
HAnimJoint493->setCenter(new float[3]{0.0048,1.1912,-0.0805});
HAnimJoint493->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint493->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape494 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet495 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet495->setVertexCount(new int[1]{2});
CCoordinate* Coordinate496 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate496->setPoint(new float[6]{0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808});
LineSet495->setCoord(*Coordinate496);

//from vl1 to vt12
CColorRGBA* ColorRGBA497 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA497->setUSE("HAnimSegmentLineColorRGBA");
LineSet495->setColor(*ColorRGBA497);

Shape494->setGeometry(LineSet495);

HAnimJoint493->addChild(*Shape494);

CHAnimJoint* HAnimJoint498 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint498->setName("vt12");
HAnimJoint498->setDEF("hanim_vt12");
HAnimJoint498->setCenter(new float[3]{0.0051,1.2278,-0.0808});
HAnimJoint498->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint498->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape499 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet500 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet500->setVertexCount(new int[1]{2});
CCoordinate* Coordinate501 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate501->setPoint(new float[6]{0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081});
LineSet500->setCoord(*Coordinate501);

//from vt12 to vt11
CColorRGBA* ColorRGBA502 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA502->setUSE("HAnimSegmentLineColorRGBA");
LineSet500->setColor(*ColorRGBA502);

Shape499->setGeometry(LineSet500);

HAnimJoint498->addChild(*Shape499);

CHAnimJoint* HAnimJoint503 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint503->setName("vt11");
HAnimJoint503->setDEF("hanim_vt11");
HAnimJoint503->setCenter(new float[3]{0.0053,1.2679,-0.081});
HAnimJoint503->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint503->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape504 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet505 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet505->setVertexCount(new int[1]{2});
CCoordinate* Coordinate506 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate506->setPoint(new float[6]{0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822});
LineSet505->setCoord(*Coordinate506);

//from vt11 to vt10
CColorRGBA* ColorRGBA507 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA507->setUSE("HAnimSegmentLineColorRGBA");
LineSet505->setColor(*ColorRGBA507);

Shape504->setGeometry(LineSet505);

HAnimJoint503->addChild(*Shape504);

CHAnimSite* HAnimSite508 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite508->setName("substernale_pt");
HAnimSite508->setDEF("hanim_substernale_pt");
HAnimSite508->setTranslation(new float[3]{0.0085,1.2995,0.1147});
CTouchSensor* TouchSensor509 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor509->setDescription("HAnimSite substernale_pt");
HAnimSite508->addChildren(*TouchSensor509);

CShape* Shape510 = (CShape *)(m_pScene.createNode("Shape"));
Shape510->setUSE("HAnimSiteShape");
HAnimSite508->addChildren(*Shape510);

HAnimJoint503->addChild(*HAnimSite508);

CHAnimJoint* HAnimJoint511 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint511->setName("vt10");
HAnimJoint511->setDEF("hanim_vt10");
HAnimJoint511->setCenter(new float[3]{0.0056,1.2848,-0.0822});
HAnimJoint511->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint511->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape512 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet513 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet513->setVertexCount(new int[1]{2});
CCoordinate* Coordinate514 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate514->setPoint(new float[6]{0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838});
LineSet513->setCoord(*Coordinate514);

//from vt10 to vt9
CColorRGBA* ColorRGBA515 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA515->setUSE("HAnimSegmentLineColorRGBA");
LineSet513->setColor(*ColorRGBA515);

Shape512->setGeometry(LineSet513);

HAnimJoint511->addChild(*Shape512);

CHAnimSite* HAnimSite516 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite516->setName("l_thelion_pt");
HAnimSite516->setDEF("hanim_l_thelion_pt");
HAnimSite516->setTranslation(new float[3]{0.0918,1.3382,0.1192});
CTouchSensor* TouchSensor517 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor517->setDescription("HAnimSite l_thelion_pt");
HAnimSite516->addChildren(*TouchSensor517);

CShape* Shape518 = (CShape *)(m_pScene.createNode("Shape"));
Shape518->setUSE("HAnimSiteShape");
HAnimSite516->addChildren(*Shape518);

HAnimJoint511->addChild(*HAnimSite516);

CHAnimSite* HAnimSite519 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite519->setName("r_thelion_pt");
HAnimSite519->setDEF("hanim_r_thelion_pt");
HAnimSite519->setTranslation(new float[3]{-0.0736,1.3385,0.1217});
CTouchSensor* TouchSensor520 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor520->setDescription("HAnimSite r_thelion_pt");
HAnimSite519->addChildren(*TouchSensor520);

CShape* Shape521 = (CShape *)(m_pScene.createNode("Shape"));
Shape521->setUSE("HAnimSiteShape");
HAnimSite519->addChildren(*Shape521);

HAnimJoint511->addChild(*HAnimSite519);

CHAnimJoint* HAnimJoint522 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint522->setName("vt9");
HAnimJoint522->setDEF("hanim_vt9");
HAnimJoint522->setCenter(new float[3]{0.0057,1.3126,-0.0838});
HAnimJoint522->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint522->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape523 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet524 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet524->setVertexCount(new int[1]{2});
CCoordinate* Coordinate525 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate525->setPoint(new float[6]{0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845});
LineSet524->setCoord(*Coordinate525);

//from vt9 to vt8
CColorRGBA* ColorRGBA526 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA526->setUSE("HAnimSegmentLineColorRGBA");
LineSet524->setColor(*ColorRGBA526);

Shape523->setGeometry(LineSet524);

HAnimJoint522->addChild(*Shape523);

CHAnimJoint* HAnimJoint527 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint527->setName("vt8");
HAnimJoint527->setDEF("hanim_vt8");
HAnimJoint527->setCenter(new float[3]{0.0057,1.3382,-0.0845});
HAnimJoint527->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint527->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape528 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet529 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet529->setVertexCount(new int[1]{2});
CCoordinate* Coordinate530 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate530->setPoint(new float[6]{0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833});
LineSet529->setCoord(*Coordinate530);

//from vt8 to vt7
CColorRGBA* ColorRGBA531 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA531->setUSE("HAnimSegmentLineColorRGBA");
LineSet529->setColor(*ColorRGBA531);

Shape528->setGeometry(LineSet529);

HAnimJoint527->addChild(*Shape528);

CHAnimJoint* HAnimJoint532 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint532->setName("vt7");
HAnimJoint532->setDEF("hanim_vt7");
HAnimJoint532->setCenter(new float[3]{0.0058,1.3625,-0.0833});
HAnimJoint532->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint532->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape533 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet534 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet534->setVertexCount(new int[1]{2});
CCoordinate* Coordinate535 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate535->setPoint(new float[6]{0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08});
LineSet534->setCoord(*Coordinate535);

//from vt7 to vt6
CColorRGBA* ColorRGBA536 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA536->setUSE("HAnimSegmentLineColorRGBA");
LineSet534->setColor(*ColorRGBA536);

Shape533->setGeometry(LineSet534);

HAnimJoint532->addChild(*Shape533);

CHAnimSite* HAnimSite537 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite537->setName("l_chest_midsagittal_plane_pt");
HAnimSite537->setDEF("hanim_l_chest_midsagittal_plane_pt");
HAnimSite537->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor538 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor538->setDescription("HAnimSite l_chest_midsagittal_plane_pt");
HAnimSite537->addChildren(*TouchSensor538);

CShape* Shape539 = (CShape *)(m_pScene.createNode("Shape"));
Shape539->setUSE("HAnimSiteShape");
HAnimSite537->addChildren(*Shape539);

HAnimJoint532->addChild(*HAnimSite537);

CHAnimSite* HAnimSite540 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite540->setName("mesosternale_pt");
HAnimSite540->setDEF("hanim_mesosternale_pt");
HAnimSite540->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor541 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor541->setDescription("HAnimSite mesosternale_pt");
HAnimSite540->addChildren(*TouchSensor541);

CShape* Shape542 = (CShape *)(m_pScene.createNode("Shape"));
Shape542->setUSE("HAnimSiteShape");
HAnimSite540->addChildren(*Shape542);

HAnimJoint532->addChild(*HAnimSite540);

CHAnimSite* HAnimSite543 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite543->setName("r_chest_midsagittal_plane_pt");
HAnimSite543->setDEF("hanim_r_chest_midsagittal_plane_pt");
HAnimSite543->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor544 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor544->setDescription("HAnimSite r_chest_midsagittal_plane_pt");
HAnimSite543->addChildren(*TouchSensor544);

CShape* Shape545 = (CShape *)(m_pScene.createNode("Shape"));
Shape545->setUSE("HAnimSiteShape");
HAnimSite543->addChildren(*Shape545);

HAnimJoint532->addChild(*HAnimSite543);

CHAnimSite* HAnimSite546 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite546->setName("rear_center_midsagittal_plane_pt");
HAnimSite546->setDEF("hanim_rear_center_midsagittal_plane_pt");
HAnimSite546->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor547 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor547->setDescription("HAnimSite rear_center_midsagittal_plane_pt");
HAnimSite546->addChildren(*TouchSensor547);

CShape* Shape548 = (CShape *)(m_pScene.createNode("Shape"));
Shape548->setUSE("HAnimSiteShape");
HAnimSite546->addChildren(*Shape548);

HAnimJoint532->addChild(*HAnimSite546);

CHAnimJoint* HAnimJoint549 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint549->setName("vt6");
HAnimJoint549->setDEF("hanim_vt6");
HAnimJoint549->setCenter(new float[3]{0.0059,1.3866,-0.08});
HAnimJoint549->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint549->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape550 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet551 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet551->setVertexCount(new int[1]{2});
CCoordinate* Coordinate552 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate552->setPoint(new float[6]{0.0059,1.3866,-0.08,0.006,1.4102,-0.0745});
LineSet551->setCoord(*Coordinate552);

//from vt6 to vt5
CColorRGBA* ColorRGBA553 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA553->setUSE("HAnimSegmentLineColorRGBA");
LineSet551->setColor(*ColorRGBA553);

Shape550->setGeometry(LineSet551);

HAnimJoint549->addChild(*Shape550);

CHAnimSite* HAnimSite554 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite554->setName("spine_1_middle_back_pt");
HAnimSite554->setDEF("hanim_spine_1_middle_back_pt");
HAnimSite554->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor555 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor555->setDescription("HAnimSite spine_1_middle_back_pt");
HAnimSite554->addChildren(*TouchSensor555);

CShape* Shape556 = (CShape *)(m_pScene.createNode("Shape"));
Shape556->setUSE("HAnimSiteShape");
HAnimSite554->addChildren(*Shape556);

HAnimJoint549->addChild(*HAnimSite554);

CHAnimJoint* HAnimJoint557 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint557->setName("vt5");
HAnimJoint557->setDEF("hanim_vt5");
HAnimJoint557->setCenter(new float[3]{0.006,1.4102,-0.0745});
HAnimJoint557->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint557->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape558 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet559 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet559->setVertexCount(new int[1]{2});
CCoordinate* Coordinate560 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate560->setPoint(new float[6]{0.006,1.4102,-0.0745,0.0061,1.432,-0.0675});
LineSet559->setCoord(*Coordinate560);

//from vt5 to vt4
CColorRGBA* ColorRGBA561 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA561->setUSE("HAnimSegmentLineColorRGBA");
LineSet559->setColor(*ColorRGBA561);

Shape558->setGeometry(LineSet559);

HAnimJoint557->addChild(*Shape558);

CHAnimJoint* HAnimJoint562 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint562->setName("vt4");
HAnimJoint562->setDEF("hanim_vt4");
HAnimJoint562->setCenter(new float[3]{0.0061,1.432,-0.0675});
HAnimJoint562->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint562->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape563 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet564 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet564->setVertexCount(new int[1]{2});
CCoordinate* Coordinate565 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate565->setPoint(new float[6]{0.0061,1.432,-0.0675,0.0062,1.4583,-0.057});
LineSet564->setCoord(*Coordinate565);

//from vt4 to vt3
CColorRGBA* ColorRGBA566 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA566->setUSE("HAnimSegmentLineColorRGBA");
LineSet564->setColor(*ColorRGBA566);

Shape563->setGeometry(LineSet564);

HAnimJoint562->addChild(*Shape563);

CHAnimJoint* HAnimJoint567 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint567->setName("vt3");
HAnimJoint567->setDEF("hanim_vt3");
HAnimJoint567->setCenter(new float[3]{0.0062,1.4583,-0.057});
HAnimJoint567->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint567->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape568 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet569 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet569->setVertexCount(new int[1]{2});
CCoordinate* Coordinate570 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate570->setPoint(new float[6]{0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484});
LineSet569->setCoord(*Coordinate570);

//from vt3 to vt2
CColorRGBA* ColorRGBA571 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA571->setUSE("HAnimSegmentLineColorRGBA");
LineSet569->setColor(*ColorRGBA571);

Shape568->setGeometry(LineSet569);

HAnimJoint567->addChild(*Shape568);

CHAnimJoint* HAnimJoint572 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint572->setName("vt2");
HAnimJoint572->setDEF("hanim_vt2");
HAnimJoint572->setCenter(new float[3]{0.0063,1.4761,-0.0484});
HAnimJoint572->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint572->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape573 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet574 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet574->setVertexCount(new int[1]{2});
CCoordinate* Coordinate575 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate575->setPoint(new float[6]{0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387});
LineSet574->setCoord(*Coordinate575);

//from vt2 to vt1
CColorRGBA* ColorRGBA576 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA576->setUSE("HAnimSegmentLineColorRGBA");
LineSet574->setColor(*ColorRGBA576);

Shape573->setGeometry(LineSet574);

HAnimJoint572->addChild(*Shape573);

CHAnimSite* HAnimSite577 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite577->setName("cervicale_pt");
HAnimSite577->setDEF("hanim_cervicale_pt");
HAnimSite577->setTranslation(new float[3]{0.0064,1.52,-0.0815});
CTouchSensor* TouchSensor578 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor578->setDescription("HAnimSite cervicale_pt");
HAnimSite577->addChildren(*TouchSensor578);

CShape* Shape579 = (CShape *)(m_pScene.createNode("Shape"));
Shape579->setUSE("HAnimSiteShape");
HAnimSite577->addChildren(*Shape579);

HAnimJoint572->addChild(*HAnimSite577);

CHAnimSite* HAnimSite580 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite580->setName("suprasternale_pt");
HAnimSite580->setDEF("hanim_suprasternale_pt");
HAnimSite580->setTranslation(new float[3]{0.0084,1.4714,0.0551});
CTouchSensor* TouchSensor581 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor581->setDescription("HAnimSite suprasternale_pt");
HAnimSite580->addChildren(*TouchSensor581);

CShape* Shape582 = (CShape *)(m_pScene.createNode("Shape"));
Shape582->setUSE("HAnimSiteShape");
HAnimSite580->addChildren(*Shape582);

HAnimJoint572->addChild(*HAnimSite580);

CHAnimJoint* HAnimJoint583 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint583->setName("vt1");
HAnimJoint583->setDEF("hanim_vt1");
HAnimJoint583->setCenter(new float[3]{0.0065,1.4951,-0.0387});
HAnimJoint583->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint583->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape584 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet585 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet585->setVertexCount(new int[1]{2});
CCoordinate* Coordinate586 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate586->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301});
LineSet585->setCoord(*Coordinate586);

//from vt1 to vc7
CColorRGBA* ColorRGBA587 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA587->setUSE("HAnimSegmentLineColorRGBA");
LineSet585->setColor(*ColorRGBA587);

Shape584->setGeometry(LineSet585);

HAnimJoint583->addChild(*Shape584);

CHAnimSite* HAnimSite588 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite588->setName("l_neck_base_pt");
HAnimSite588->setDEF("hanim_l_neck_base_pt");
HAnimSite588->setTranslation(new float[3]{0.0646,1.5141,-0.038});
CTouchSensor* TouchSensor589 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor589->setDescription("HAnimSite l_neck_base_pt");
HAnimSite588->addChildren(*TouchSensor589);

CShape* Shape590 = (CShape *)(m_pScene.createNode("Shape"));
Shape590->setUSE("HAnimSiteShape");
HAnimSite588->addChildren(*Shape590);

HAnimJoint583->addChild(*HAnimSite588);

CHAnimSite* HAnimSite591 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite591->setName("r_neck_base_pt");
HAnimSite591->setDEF("hanim_r_neck_base_pt");
HAnimSite591->setTranslation(new float[3]{-0.0419,1.5149,-0.022});
CTouchSensor* TouchSensor592 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor592->setDescription("HAnimSite r_neck_base_pt");
HAnimSite591->addChildren(*TouchSensor592);

CShape* Shape593 = (CShape *)(m_pScene.createNode("Shape"));
Shape593->setUSE("HAnimSiteShape");
HAnimSite591->addChildren(*Shape593);

HAnimJoint583->addChild(*HAnimSite591);

CShape* Shape594 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet595 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet595->setVertexCount(new int[1]{2});
CCoordinate* Coordinate596 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate596->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353});
LineSet595->setCoord(*Coordinate596);

//from vt1 to l_sternoclavicular
CColorRGBA* ColorRGBA597 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA597->setUSE("HAnimSegmentLineColorRGBA");
LineSet595->setColor(*ColorRGBA597);

Shape594->setGeometry(LineSet595);

HAnimJoint583->addChild(*Shape594);

CHAnimSite* HAnimSite598 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite598->setName("l_acromion_pt");
HAnimSite598->setDEF("hanim_l_acromion_pt");
HAnimSite598->setTranslation(new float[3]{0.2032,1.476,-0.049});
CTouchSensor* TouchSensor599 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor599->setDescription("HAnimSite l_acromion_pt");
HAnimSite598->addChildren(*TouchSensor599);

CShape* Shape600 = (CShape *)(m_pScene.createNode("Shape"));
Shape600->setUSE("HAnimSiteShape");
HAnimSite598->addChildren(*Shape600);

HAnimJoint583->addChild(*HAnimSite598);

CHAnimSite* HAnimSite601 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite601->setName("l_axilla_distal_pt");
HAnimSite601->setDEF("hanim_l_axilla_distal_pt");
HAnimSite601->setTranslation(new float[3]{0.1706,1.4072,-0.0875});
CTouchSensor* TouchSensor602 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor602->setDescription("HAnimSite l_axilla_distal_pt");
HAnimSite601->addChildren(*TouchSensor602);

CShape* Shape603 = (CShape *)(m_pScene.createNode("Shape"));
Shape603->setUSE("HAnimSiteShape");
HAnimSite601->addChildren(*Shape603);

HAnimJoint583->addChild(*HAnimSite601);

CHAnimSite* HAnimSite604 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite604->setName("l_axilla_posterior_folds_pt");
HAnimSite604->setDEF("hanim_l_axilla_posterior_folds_pt");
HAnimSite604->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor605 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor605->setDescription("HAnimSite l_axilla_posterior_folds_pt");
HAnimSite604->addChildren(*TouchSensor605);

CShape* Shape606 = (CShape *)(m_pScene.createNode("Shape"));
Shape606->setUSE("HAnimSiteShape");
HAnimSite604->addChildren(*Shape606);

HAnimJoint583->addChild(*HAnimSite604);

CHAnimSite* HAnimSite607 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite607->setName("l_axilla_proximal_pt");
HAnimSite607->setDEF("hanim_l_axilla_proximal_pt");
HAnimSite607->setTranslation(new float[3]{0.1777,1.4065,-0.0075});
CTouchSensor* TouchSensor608 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor608->setDescription("HAnimSite l_axilla_proximal_pt");
HAnimSite607->addChildren(*TouchSensor608);

CShape* Shape609 = (CShape *)(m_pScene.createNode("Shape"));
Shape609->setUSE("HAnimSiteShape");
HAnimSite607->addChildren(*Shape609);

HAnimJoint583->addChild(*HAnimSite607);

CHAnimSite* HAnimSite610 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite610->setName("l_clavicale_pt");
HAnimSite610->setDEF("hanim_l_clavicale_pt");
HAnimSite610->setTranslation(new float[3]{0.0271,1.4943,0.0394});
CTouchSensor* TouchSensor611 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor611->setDescription("HAnimSite l_clavicale_pt");
HAnimSite610->addChildren(*TouchSensor611);

CShape* Shape612 = (CShape *)(m_pScene.createNode("Shape"));
Shape612->setUSE("HAnimSiteShape");
HAnimSite610->addChildren(*Shape612);

HAnimJoint583->addChild(*HAnimSite610);

CShape* Shape613 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet614 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet614->setVertexCount(new int[1]{2});
CCoordinate* Coordinate615 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate615->setPoint(new float[6]{0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033});
LineSet614->setCoord(*Coordinate615);

//from vt1 to r_sternoclavicular
CColorRGBA* ColorRGBA616 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA616->setUSE("HAnimSegmentLineColorRGBA");
LineSet614->setColor(*ColorRGBA616);

Shape613->setGeometry(LineSet614);

HAnimJoint583->addChild(*Shape613);

CHAnimSite* HAnimSite617 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite617->setName("r_acromion_pt");
HAnimSite617->setDEF("hanim_r_acromion_pt");
HAnimSite617->setTranslation(new float[3]{-0.1905,1.4791,-0.0431});
CTouchSensor* TouchSensor618 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor618->setDescription("HAnimSite r_acromion_pt");
HAnimSite617->addChildren(*TouchSensor618);

CShape* Shape619 = (CShape *)(m_pScene.createNode("Shape"));
Shape619->setUSE("HAnimSiteShape");
HAnimSite617->addChildren(*Shape619);

HAnimJoint583->addChild(*HAnimSite617);

CHAnimSite* HAnimSite620 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite620->setName("r_axilla_distal_pt");
HAnimSite620->setDEF("hanim_r_axilla_distal_pt");
HAnimSite620->setTranslation(new float[3]{-0.1603,1.4098,-0.0826});
CTouchSensor* TouchSensor621 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor621->setDescription("HAnimSite r_axilla_distal_pt");
HAnimSite620->addChildren(*TouchSensor621);

CShape* Shape622 = (CShape *)(m_pScene.createNode("Shape"));
Shape622->setUSE("HAnimSiteShape");
HAnimSite620->addChildren(*Shape622);

HAnimJoint583->addChild(*HAnimSite620);

CHAnimSite* HAnimSite623 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite623->setName("r_axilla_posterior_folds_pt");
HAnimSite623->setDEF("hanim_r_axilla_posterior_folds_pt");
HAnimSite623->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor624 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor624->setDescription("HAnimSite r_axilla_posterior_folds_pt");
HAnimSite623->addChildren(*TouchSensor624);

CShape* Shape625 = (CShape *)(m_pScene.createNode("Shape"));
Shape625->setUSE("HAnimSiteShape");
HAnimSite623->addChildren(*Shape625);

HAnimJoint583->addChild(*HAnimSite623);

CHAnimSite* HAnimSite626 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite626->setName("r_axilla_proximal_pt");
HAnimSite626->setDEF("hanim_r_axilla_proximal_pt");
HAnimSite626->setTranslation(new float[3]{-0.1626,1.4072,-0.0031});
CTouchSensor* TouchSensor627 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor627->setDescription("HAnimSite r_axilla_proximal_pt");
HAnimSite626->addChildren(*TouchSensor627);

CShape* Shape628 = (CShape *)(m_pScene.createNode("Shape"));
Shape628->setUSE("HAnimSiteShape");
HAnimSite626->addChildren(*Shape628);

HAnimJoint583->addChild(*HAnimSite626);

CHAnimSite* HAnimSite629 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite629->setName("r_clavicale_pt");
HAnimSite629->setDEF("hanim_r_clavicale_pt");
HAnimSite629->setTranslation(new float[3]{-0.0115,1.4943,0.04});
CTouchSensor* TouchSensor630 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor630->setDescription("HAnimSite r_clavicale_pt");
HAnimSite629->addChildren(*TouchSensor630);

CShape* Shape631 = (CShape *)(m_pScene.createNode("Shape"));
Shape631->setUSE("HAnimSiteShape");
HAnimSite629->addChildren(*Shape631);

HAnimJoint583->addChild(*HAnimSite629);

CHAnimJoint* HAnimJoint632 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint632->setName("vc7");
HAnimJoint632->setDEF("hanim_vc7");
HAnimJoint632->setCenter(new float[3]{0.0066,1.5132,-0.0301});
HAnimJoint632->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint632->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape633 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet634 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet634->setVertexCount(new int[1]{2});
CCoordinate* Coordinate635 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate635->setPoint(new float[6]{0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143});
LineSet634->setCoord(*Coordinate635);

//from vc7 to vc6
CColorRGBA* ColorRGBA636 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA636->setUSE("HAnimSegmentLineColorRGBA");
LineSet634->setColor(*ColorRGBA636);

Shape633->setGeometry(LineSet634);

HAnimJoint632->addChild(*Shape633);

CHAnimJoint* HAnimJoint637 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint637->setName("vc6");
HAnimJoint637->setDEF("hanim_vc6");
HAnimJoint637->setCenter(new float[3]{0.0066,1.5357,-0.0143});
HAnimJoint637->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint637->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape638 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet639 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet639->setVertexCount(new int[1]{2});
CCoordinate* Coordinate640 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate640->setPoint(new float[6]{0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082});
LineSet639->setCoord(*Coordinate640);

//from vc6 to vc5
CColorRGBA* ColorRGBA641 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA641->setUSE("HAnimSegmentLineColorRGBA");
LineSet639->setColor(*ColorRGBA641);

Shape638->setGeometry(LineSet639);

HAnimJoint637->addChild(*Shape638);

CHAnimJoint* HAnimJoint642 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint642->setName("vc5");
HAnimJoint642->setDEF("hanim_vc5");
HAnimJoint642->setCenter(new float[3]{0.0066,1.552,-0.0082});
HAnimJoint642->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint642->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape643 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet644 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet644->setVertexCount(new int[1]{2});
CCoordinate* Coordinate645 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate645->setPoint(new float[6]{0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084});
LineSet644->setCoord(*Coordinate645);

//from vc5 to vc4
CColorRGBA* ColorRGBA646 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA646->setUSE("HAnimSegmentLineColorRGBA");
LineSet644->setColor(*ColorRGBA646);

Shape643->setGeometry(LineSet644);

HAnimJoint642->addChild(*Shape643);

CHAnimJoint* HAnimJoint647 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint647->setName("vc4");
HAnimJoint647->setDEF("hanim_vc4");
HAnimJoint647->setCenter(new float[3]{0.0066,1.5662,-0.0084});
HAnimJoint647->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint647->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape648 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet649 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet649->setVertexCount(new int[1]{2});
CCoordinate* Coordinate650 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate650->setPoint(new float[6]{0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103});
LineSet649->setCoord(*Coordinate650);

//from vc4 to vc3
CColorRGBA* ColorRGBA651 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA651->setUSE("HAnimSegmentLineColorRGBA");
LineSet649->setColor(*ColorRGBA651);

Shape648->setGeometry(LineSet649);

HAnimJoint647->addChild(*Shape648);

CHAnimJoint* HAnimJoint652 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint652->setName("vc3");
HAnimJoint652->setDEF("hanim_vc3");
HAnimJoint652->setCenter(new float[3]{0.0066,1.58,-0.0103});
HAnimJoint652->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint652->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape653 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet654 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet654->setVertexCount(new int[1]{2});
CCoordinate* Coordinate655 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate655->setPoint(new float[6]{0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103});
LineSet654->setCoord(*Coordinate655);

//from vc3 to vc2
CColorRGBA* ColorRGBA656 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA656->setUSE("HAnimSegmentLineColorRGBA");
LineSet654->setColor(*ColorRGBA656);

Shape653->setGeometry(LineSet654);

HAnimJoint652->addChild(*Shape653);

CHAnimSite* HAnimSite657 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite657->setName("adams_apple_pt");
HAnimSite657->setDEF("hanim_adams_apple_pt");
HAnimSite657->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor658 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor658->setDescription("HAnimSite adams_apple_pt");
HAnimSite657->addChildren(*TouchSensor658);

CShape* Shape659 = (CShape *)(m_pScene.createNode("Shape"));
Shape659->setUSE("HAnimSiteShape");
HAnimSite657->addChildren(*Shape659);

HAnimJoint652->addChild(*HAnimSite657);

CHAnimJoint* HAnimJoint660 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint660->setName("vc2");
HAnimJoint660->setDEF("hanim_vc2");
HAnimJoint660->setCenter(new float[3]{0.0066,1.5928,-0.0103});
HAnimJoint660->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint660->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape661 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet662 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet662->setVertexCount(new int[1]{2});
CCoordinate* Coordinate663 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate663->setPoint(new float[6]{0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034});
LineSet662->setCoord(*Coordinate663);

//from vc2 to vc1
CColorRGBA* ColorRGBA664 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA664->setUSE("HAnimSegmentLineColorRGBA");
LineSet662->setColor(*ColorRGBA664);

Shape661->setGeometry(LineSet662);

HAnimJoint660->addChild(*Shape661);

CHAnimJoint* HAnimJoint665 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint665->setName("vc1");
HAnimJoint665->setDEF("hanim_vc1");
HAnimJoint665->setCenter(new float[3]{0.0066,1.6144,-0.0034});
HAnimJoint665->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint665->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape666 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet667 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet667->setVertexCount(new int[1]{2});
CCoordinate* Coordinate668 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate668->setPoint(new float[6]{0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236});
LineSet667->setCoord(*Coordinate668);

//from vc1 to skullbase
CColorRGBA* ColorRGBA669 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA669->setUSE("HAnimSegmentLineColorRGBA");
LineSet667->setColor(*ColorRGBA669);

Shape666->setGeometry(LineSet667);

HAnimJoint665->addChild(*Shape666);

CHAnimSite* HAnimSite670 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite670->setName("glabella_pt");
HAnimSite670->setDEF("hanim_glabella_pt");
HAnimSite670->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor671 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor671->setDescription("HAnimSite glabella_pt");
HAnimSite670->addChildren(*TouchSensor671);

CShape* Shape672 = (CShape *)(m_pScene.createNode("Shape"));
Shape672->setUSE("HAnimSiteShape");
HAnimSite670->addChildren(*Shape672);

HAnimJoint665->addChild(*HAnimSite670);

CHAnimSite* HAnimSite673 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite673->setName("l_ectocanthus_pt");
HAnimSite673->setDEF("hanim_l_ectocanthus_pt");
HAnimSite673->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor674 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor674->setDescription("HAnimSite l_ectocanthus_pt");
HAnimSite673->addChildren(*TouchSensor674);

CShape* Shape675 = (CShape *)(m_pScene.createNode("Shape"));
Shape675->setUSE("HAnimSiteShape");
HAnimSite673->addChildren(*Shape675);

HAnimJoint665->addChild(*HAnimSite673);

CHAnimSite* HAnimSite676 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite676->setName("l_infraorbitale_pt");
HAnimSite676->setDEF("hanim_l_infraorbitale_pt");
HAnimSite676->setTranslation(new float[3]{0.0341,1.6171,0.0752});
CTouchSensor* TouchSensor677 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor677->setDescription("HAnimSite l_infraorbitale_pt");
HAnimSite676->addChildren(*TouchSensor677);

CShape* Shape678 = (CShape *)(m_pScene.createNode("Shape"));
Shape678->setUSE("HAnimSiteShape");
HAnimSite676->addChildren(*Shape678);

HAnimJoint665->addChild(*HAnimSite676);

CHAnimSite* HAnimSite679 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite679->setName("l_tragion_pt");
HAnimSite679->setDEF("hanim_l_tragion_pt");
HAnimSite679->setTranslation(new float[3]{0.0739,1.6348,0.0282});
CTouchSensor* TouchSensor680 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor680->setDescription("HAnimSite l_tragion_pt");
HAnimSite679->addChildren(*TouchSensor680);

CShape* Shape681 = (CShape *)(m_pScene.createNode("Shape"));
Shape681->setUSE("HAnimSiteShape");
HAnimSite679->addChildren(*Shape681);

HAnimJoint665->addChild(*HAnimSite679);

CHAnimSite* HAnimSite682 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite682->setName("nuchale_pt");
HAnimSite682->setDEF("hanim_nuchale_pt");
HAnimSite682->setTranslation(new float[3]{0.0039,1.5972,-0.0796});
CTouchSensor* TouchSensor683 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor683->setDescription("HAnimSite nuchale_pt");
HAnimSite682->addChildren(*TouchSensor683);

CShape* Shape684 = (CShape *)(m_pScene.createNode("Shape"));
Shape684->setUSE("HAnimSiteShape");
HAnimSite682->addChildren(*Shape684);

HAnimJoint665->addChild(*HAnimSite682);

CHAnimSite* HAnimSite685 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite685->setName("opisthocranion_pt");
HAnimSite685->setDEF("hanim_opisthocranion_pt");
HAnimSite685->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor686 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor686->setDescription("HAnimSite opisthocranion_pt");
HAnimSite685->addChildren(*TouchSensor686);

CShape* Shape687 = (CShape *)(m_pScene.createNode("Shape"));
Shape687->setUSE("HAnimSiteShape");
HAnimSite685->addChildren(*Shape687);

HAnimJoint665->addChild(*HAnimSite685);

CHAnimSite* HAnimSite688 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite688->setName("r_ectocanthus_pt");
HAnimSite688->setDEF("hanim_r_ectocanthus_pt");
HAnimSite688->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor689 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor689->setDescription("HAnimSite r_ectocanthus_pt");
HAnimSite688->addChildren(*TouchSensor689);

CShape* Shape690 = (CShape *)(m_pScene.createNode("Shape"));
Shape690->setUSE("HAnimSiteShape");
HAnimSite688->addChildren(*Shape690);

HAnimJoint665->addChild(*HAnimSite688);

CHAnimSite* HAnimSite691 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite691->setName("r_infraorbitale_pt");
HAnimSite691->setDEF("hanim_r_infraorbitale_pt");
HAnimSite691->setTranslation(new float[3]{-0.0237,1.6171,0.0752});
CTouchSensor* TouchSensor692 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor692->setDescription("HAnimSite r_infraorbitale_pt");
HAnimSite691->addChildren(*TouchSensor692);

CShape* Shape693 = (CShape *)(m_pScene.createNode("Shape"));
Shape693->setUSE("HAnimSiteShape");
HAnimSite691->addChildren(*Shape693);

HAnimJoint665->addChild(*HAnimSite691);

CHAnimSite* HAnimSite694 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite694->setName("r_tragion_pt");
HAnimSite694->setDEF("hanim_r_tragion_pt");
HAnimSite694->setTranslation(new float[3]{-0.0646,1.6347,0.0302});
CTouchSensor* TouchSensor695 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor695->setDescription("HAnimSite r_tragion_pt");
HAnimSite694->addChildren(*TouchSensor695);

CShape* Shape696 = (CShape *)(m_pScene.createNode("Shape"));
Shape696->setUSE("HAnimSiteShape");
HAnimSite694->addChildren(*Shape696);

HAnimJoint665->addChild(*HAnimSite694);

CHAnimSite* HAnimSite697 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite697->setName("sellion_pt");
HAnimSite697->setDEF("hanim_sellion_pt");
HAnimSite697->setTranslation(new float[3]{0.0058,1.6316,0.0852});
CTouchSensor* TouchSensor698 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor698->setDescription("HAnimSite sellion_pt");
HAnimSite697->addChildren(*TouchSensor698);

CShape* Shape699 = (CShape *)(m_pScene.createNode("Shape"));
Shape699->setUSE("HAnimSiteShape");
HAnimSite697->addChildren(*Shape699);

HAnimJoint665->addChild(*HAnimSite697);

CHAnimSite* HAnimSite700 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite700->setName("skull_vertex_pt");
HAnimSite700->setDEF("hanim_skull_vertex_pt");
HAnimSite700->setTranslation(new float[3]{0.005,1.7504,0.0055});
CTouchSensor* TouchSensor701 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor701->setDescription("HAnimSite skull_vertex_pt");
HAnimSite700->addChildren(*TouchSensor701);

CShape* Shape702 = (CShape *)(m_pScene.createNode("Shape"));
Shape702->setUSE("HAnimSiteShape");
HAnimSite700->addChildren(*Shape702);

HAnimJoint665->addChild(*HAnimSite700);

CHAnimJoint* HAnimJoint703 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint703->setName("skullbase");
HAnimJoint703->setDEF("hanim_skullbase");
HAnimJoint703->setCenter(new float[3]{0.0044,1.6209,0.0236});
HAnimJoint703->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint703->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape704 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet705 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet705->setVertexCount(new int[1]{2});
CCoordinate* Coordinate706 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate706->setPoint(new float[6]{0.0044,1.6209,0.0236,0,1,0});
LineSet705->setCoord(*Coordinate706);

//from skullbase to l_eyelid_joint
CColorRGBA* ColorRGBA707 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA707->setUSE("HAnimSegmentLineColorRGBA");
LineSet705->setColor(*ColorRGBA707);

Shape704->setGeometry(LineSet705);

HAnimJoint703->addChild(*Shape704);

CShape* Shape708 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet709 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet709->setVertexCount(new int[1]{2});
CCoordinate* Coordinate710 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate710->setPoint(new float[6]{0.0044,1.6209,0.0236,0,1,0});
LineSet709->setCoord(*Coordinate710);

//from skullbase to r_eyelid_joint
CColorRGBA* ColorRGBA711 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA711->setUSE("HAnimSegmentLineColorRGBA");
LineSet709->setColor(*ColorRGBA711);

Shape708->setGeometry(LineSet709);

HAnimJoint703->addChild(*Shape708);

CShape* Shape712 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet713 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet713->setVertexCount(new int[1]{2});
CCoordinate* Coordinate714 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate714->setPoint(new float[6]{0.0044,1.6209,0.0236,0,1,0});
LineSet713->setCoord(*Coordinate714);

//from skullbase to l_eyeball_joint
CColorRGBA* ColorRGBA715 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA715->setUSE("HAnimSegmentLineColorRGBA");
LineSet713->setColor(*ColorRGBA715);

Shape712->setGeometry(LineSet713);

HAnimJoint703->addChild(*Shape712);

CShape* Shape716 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet717 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet717->setVertexCount(new int[1]{2});
CCoordinate* Coordinate718 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate718->setPoint(new float[6]{0.0044,1.6209,0.0236,0,1,0});
LineSet717->setCoord(*Coordinate718);

//from skullbase to r_eyeball_joint
CColorRGBA* ColorRGBA719 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA719->setUSE("HAnimSegmentLineColorRGBA");
LineSet717->setColor(*ColorRGBA719);

Shape716->setGeometry(LineSet717);

HAnimJoint703->addChild(*Shape716);

CShape* Shape720 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet721 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet721->setVertexCount(new int[1]{2});
CCoordinate* Coordinate722 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate722->setPoint(new float[6]{0.0044,1.6209,0.0236,0,1,0});
LineSet721->setCoord(*Coordinate722);

//from skullbase to l_eyebrow_joint
CColorRGBA* ColorRGBA723 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA723->setUSE("HAnimSegmentLineColorRGBA");
LineSet721->setColor(*ColorRGBA723);

Shape720->setGeometry(LineSet721);

HAnimJoint703->addChild(*Shape720);

CShape* Shape724 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet725 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet725->setVertexCount(new int[1]{2});
CCoordinate* Coordinate726 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate726->setPoint(new float[6]{0.0044,1.6209,0.0236,0,1,0});
LineSet725->setCoord(*Coordinate726);

//from skullbase to r_eyebrow_joint
CColorRGBA* ColorRGBA727 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA727->setUSE("HAnimSegmentLineColorRGBA");
LineSet725->setColor(*ColorRGBA727);

Shape724->setGeometry(LineSet725);

HAnimJoint703->addChild(*Shape724);

CShape* Shape728 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet729 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet729->setVertexCount(new int[1]{2});
CCoordinate* Coordinate730 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate730->setPoint(new float[6]{0.0044,1.6209,0.0236,0,1,0});
LineSet729->setCoord(*Coordinate730);

//from skullbase to temporomandibular
CColorRGBA* ColorRGBA731 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA731->setUSE("HAnimSegmentLineColorRGBA");
LineSet729->setColor(*ColorRGBA731);

Shape728->setGeometry(LineSet729);

HAnimJoint703->addChild(*Shape728);

CHAnimSite* HAnimSite732 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite732->setName("l_gonion_pt");
HAnimSite732->setDEF("hanim_l_gonion_pt");
HAnimSite732->setTranslation(new float[3]{0.0631,1.553,0.033});
CTouchSensor* TouchSensor733 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor733->setDescription("HAnimSite l_gonion_pt");
HAnimSite732->addChildren(*TouchSensor733);

CShape* Shape734 = (CShape *)(m_pScene.createNode("Shape"));
Shape734->setUSE("HAnimSiteShape");
HAnimSite732->addChildren(*Shape734);

HAnimJoint703->addChild(*HAnimSite732);

CHAnimSite* HAnimSite735 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite735->setName("menton_pt");
HAnimSite735->setDEF("hanim_menton_pt");
HAnimSite735->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor736 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor736->setDescription("HAnimSite menton_pt");
HAnimSite735->addChildren(*TouchSensor736);

CShape* Shape737 = (CShape *)(m_pScene.createNode("Shape"));
Shape737->setUSE("HAnimSiteShape");
HAnimSite735->addChildren(*Shape737);

HAnimJoint703->addChild(*HAnimSite735);

CHAnimSite* HAnimSite738 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite738->setName("r_gonion_pt");
HAnimSite738->setDEF("hanim_r_gonion_pt");
HAnimSite738->setTranslation(new float[3]{-0.052,1.5529,0.0347});
CTouchSensor* TouchSensor739 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor739->setDescription("HAnimSite r_gonion_pt");
HAnimSite738->addChildren(*TouchSensor739);

CShape* Shape740 = (CShape *)(m_pScene.createNode("Shape"));
Shape740->setUSE("HAnimSiteShape");
HAnimSite738->addChildren(*Shape740);

HAnimJoint703->addChild(*HAnimSite738);

CHAnimSite* HAnimSite741 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite741->setName("supramenton_pt");
HAnimSite741->setDEF("hanim_supramenton_pt");
HAnimSite741->setTranslation(new float[3]{0.0061,1.541,0.0805});
CTouchSensor* TouchSensor742 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor742->setDescription("HAnimSite supramenton_pt");
HAnimSite741->addChildren(*TouchSensor742);

CShape* Shape743 = (CShape *)(m_pScene.createNode("Shape"));
Shape743->setUSE("HAnimSiteShape");
HAnimSite741->addChildren(*Shape743);

HAnimJoint703->addChild(*HAnimSite741);

CHAnimJoint* HAnimJoint744 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint744->setName("l_eyelid_joint");
HAnimJoint744->setDEF("hanim_l_eyelid_joint");
HAnimJoint744->setCenter(new float[3]{0,1,0});
HAnimJoint744->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint744->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint703->addChildren(*HAnimJoint744);

CHAnimJoint* HAnimJoint745 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint745->setName("r_eyelid_joint");
HAnimJoint745->setDEF("hanim_r_eyelid_joint");
HAnimJoint745->setCenter(new float[3]{0,1,0});
HAnimJoint745->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint745->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint703->addChildren(*HAnimJoint745);

CHAnimJoint* HAnimJoint746 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint746->setName("l_eyeball_joint");
HAnimJoint746->setDEF("hanim_l_eyeball_joint");
HAnimJoint746->setCenter(new float[3]{0,1,0});
HAnimJoint746->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint746->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint703->addChildren(*HAnimJoint746);

CHAnimJoint* HAnimJoint747 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint747->setName("r_eyeball_joint");
HAnimJoint747->setDEF("hanim_r_eyeball_joint");
HAnimJoint747->setCenter(new float[3]{0,1,0});
HAnimJoint747->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint747->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint703->addChildren(*HAnimJoint747);

CHAnimJoint* HAnimJoint748 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint748->setName("l_eyebrow_joint");
HAnimJoint748->setDEF("hanim_l_eyebrow_joint");
HAnimJoint748->setCenter(new float[3]{0,1,0});
HAnimJoint748->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint748->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint703->addChildren(*HAnimJoint748);

CHAnimJoint* HAnimJoint749 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint749->setName("r_eyebrow_joint");
HAnimJoint749->setDEF("hanim_r_eyebrow_joint");
HAnimJoint749->setCenter(new float[3]{0,1,0});
HAnimJoint749->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint749->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint703->addChildren(*HAnimJoint749);

CHAnimJoint* HAnimJoint750 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint750->setName("temporomandibular");
HAnimJoint750->setDEF("hanim_temporomandibular");
HAnimJoint750->setCenter(new float[3]{0,1,0});
HAnimJoint750->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint750->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint703->addChildren(*HAnimJoint750);

HAnimJoint665->addChildren(*HAnimJoint703);

HAnimJoint660->addChildren(*HAnimJoint665);

HAnimJoint652->addChildren(*HAnimJoint660);

HAnimJoint647->addChildren(*HAnimJoint652);

HAnimJoint642->addChildren(*HAnimJoint647);

HAnimJoint637->addChildren(*HAnimJoint642);

HAnimJoint632->addChildren(*HAnimJoint637);

HAnimJoint583->addChildren(*HAnimJoint632);

CHAnimJoint* HAnimJoint751 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint751->setName("l_sternoclavicular");
HAnimJoint751->setDEF("hanim_l_sternoclavicular");
HAnimJoint751->setCenter(new float[3]{0.082,1.4488,-0.0353});
HAnimJoint751->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint751->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape752 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet753 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet753->setVertexCount(new int[1]{2});
CCoordinate* Coordinate754 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate754->setPoint(new float[6]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424});
LineSet753->setCoord(*Coordinate754);

//from l_sternoclavicular to l_acromioclavicular
CColorRGBA* ColorRGBA755 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA755->setUSE("HAnimSegmentLineColorRGBA");
LineSet753->setColor(*ColorRGBA755);

Shape752->setGeometry(LineSet753);

HAnimJoint751->addChild(*Shape752);

CHAnimJoint* HAnimJoint756 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint756->setName("l_acromioclavicular");
HAnimJoint756->setDEF("hanim_l_acromioclavicular");
HAnimJoint756->setCenter(new float[3]{0.0962,1.4269,-0.0424});
HAnimJoint756->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint756->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape757 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet758 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet758->setVertexCount(new int[1]{2});
CCoordinate* Coordinate759 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate759->setPoint(new float[6]{0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387});
LineSet758->setCoord(*Coordinate759);

//from l_acromioclavicular to l_shoulder
CColorRGBA* ColorRGBA760 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA760->setUSE("HAnimSegmentLineColorRGBA");
LineSet758->setColor(*ColorRGBA760);

Shape757->setGeometry(LineSet758);

HAnimJoint756->addChild(*Shape757);

CHAnimSite* HAnimSite761 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite761->setName("l_bideltoid_pt");
HAnimSite761->setDEF("hanim_l_bideltoid_pt");
HAnimSite761->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor762 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor762->setDescription("HAnimSite l_bideltoid_pt");
HAnimSite761->addChildren(*TouchSensor762);

CShape* Shape763 = (CShape *)(m_pScene.createNode("Shape"));
Shape763->setUSE("HAnimSiteShape");
HAnimSite761->addChildren(*Shape763);

HAnimJoint756->addChild(*HAnimSite761);

CHAnimSite* HAnimSite764 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite764->setName("l_humeral_lateral_epicondyles_pt");
HAnimSite764->setDEF("hanim_l_humeral_lateral_epicondyles_pt");
HAnimSite764->setTranslation(new float[3]{0.228,1.1482,-0.11});
CTouchSensor* TouchSensor765 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor765->setDescription("HAnimSite l_humeral_lateral_epicondyles_pt");
HAnimSite764->addChildren(*TouchSensor765);

CShape* Shape766 = (CShape *)(m_pScene.createNode("Shape"));
Shape766->setUSE("HAnimSiteShape");
HAnimSite764->addChildren(*Shape766);

HAnimJoint756->addChild(*HAnimSite764);

CHAnimJoint* HAnimJoint767 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint767->setName("l_shoulder");
HAnimJoint767->setDEF("hanim_l_shoulder");
HAnimJoint767->setCenter(new float[3]{0.2029,1.4376,-0.0387});
HAnimJoint767->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint767->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape768 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet769 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet769->setVertexCount(new int[1]{2});
CCoordinate* Coordinate770 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate770->setPoint(new float[6]{0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682});
LineSet769->setCoord(*Coordinate770);

//from l_shoulder to l_elbow
CColorRGBA* ColorRGBA771 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA771->setUSE("HAnimSegmentLineColorRGBA");
LineSet769->setColor(*ColorRGBA771);

Shape768->setGeometry(LineSet769);

HAnimJoint767->addChild(*Shape768);

CHAnimSite* HAnimSite772 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite772->setName("l_humeral_medial_epicondyles_pt");
HAnimSite772->setDEF("hanim_l_humeral_medial_epicondyles_pt");
HAnimSite772->setTranslation(new float[3]{0.1735,1.1272,-0.1113});
CTouchSensor* TouchSensor773 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor773->setDescription("HAnimSite l_humeral_medial_epicondyles_pt");
HAnimSite772->addChildren(*TouchSensor773);

CShape* Shape774 = (CShape *)(m_pScene.createNode("Shape"));
Shape774->setUSE("HAnimSiteShape");
HAnimSite772->addChildren(*Shape774);

HAnimJoint767->addChild(*HAnimSite772);

CHAnimSite* HAnimSite775 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite775->setName("l_olecranon_pt");
HAnimSite775->setDEF("hanim_l_olecranon_pt");
HAnimSite775->setTranslation(new float[3]{-0.1962,1.1375,-0.1123});
CTouchSensor* TouchSensor776 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor776->setDescription("HAnimSite l_olecranon_pt");
HAnimSite775->addChildren(*TouchSensor776);

CShape* Shape777 = (CShape *)(m_pScene.createNode("Shape"));
Shape777->setUSE("HAnimSiteShape");
HAnimSite775->addChildren(*Shape777);

HAnimJoint767->addChild(*HAnimSite775);

CHAnimSite* HAnimSite778 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite778->setName("l_radial_styloid_pt");
HAnimSite778->setDEF("hanim_l_radial_styloid_pt");
HAnimSite778->setTranslation(new float[3]{0.1901,0.8645,-0.0415});
CTouchSensor* TouchSensor779 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor779->setDescription("HAnimSite l_radial_styloid_pt");
HAnimSite778->addChildren(*TouchSensor779);

CShape* Shape780 = (CShape *)(m_pScene.createNode("Shape"));
Shape780->setUSE("HAnimSiteShape");
HAnimSite778->addChildren(*Shape780);

HAnimJoint767->addChild(*HAnimSite778);

CHAnimSite* HAnimSite781 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite781->setName("l_radiale_pt");
HAnimSite781->setDEF("hanim_l_radiale_pt");
HAnimSite781->setTranslation(new float[3]{0.2182,1.1212,-0.1167});
CTouchSensor* TouchSensor782 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor782->setDescription("HAnimSite l_radiale_pt");
HAnimSite781->addChildren(*TouchSensor782);

CShape* Shape783 = (CShape *)(m_pScene.createNode("Shape"));
Shape783->setUSE("HAnimSiteShape");
HAnimSite781->addChildren(*Shape783);

HAnimJoint767->addChild(*HAnimSite781);

CHAnimJoint* HAnimJoint784 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint784->setName("l_elbow");
HAnimJoint784->setDEF("hanim_l_elbow");
HAnimJoint784->setCenter(new float[3]{0.2014,1.1357,-0.0682});
HAnimJoint784->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint784->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape785 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet786 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet786->setVertexCount(new int[1]{2});
CCoordinate* Coordinate787 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate787->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583});
LineSet786->setCoord(*Coordinate787);

//from l_elbow to l_radiocarpal
CColorRGBA* ColorRGBA788 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA788->setUSE("HAnimSegmentLineColorRGBA");
LineSet786->setColor(*ColorRGBA788);

Shape785->setGeometry(LineSet786);

HAnimJoint784->addChild(*Shape785);

CHAnimSite* HAnimSite789 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite789->setName("l_ulnar_styloid_pt");
HAnimSite789->setDEF("hanim_l_ulnar_styloid_pt");
HAnimSite789->setTranslation(new float[3]{-0.2142,0.8529,-0.0648});
CTouchSensor* TouchSensor790 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor790->setDescription("HAnimSite l_ulnar_styloid_pt");
HAnimSite789->addChildren(*TouchSensor790);

CShape* Shape791 = (CShape *)(m_pScene.createNode("Shape"));
Shape791->setUSE("HAnimSiteShape");
HAnimSite789->addChildren(*Shape791);

HAnimJoint784->addChild(*HAnimSite789);

CHAnimJoint* HAnimJoint792 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint792->setName("l_radiocarpal");
HAnimJoint792->setDEF("hanim_l_radiocarpal");
HAnimJoint792->setCenter(new float[3]{0.1984,0.8663,-0.0583});
HAnimJoint792->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint792->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape793 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet794 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet794->setVertexCount(new int[1]{2});
CCoordinate* Coordinate795 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate795->setPoint(new float[6]{0.1984,0.8663,-0.0583,0,1,0});
LineSet794->setCoord(*Coordinate795);

//from l_radiocarpal to l_midcarpal_1
CColorRGBA* ColorRGBA796 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA796->setUSE("HAnimSegmentLineColorRGBA");
LineSet794->setColor(*ColorRGBA796);

Shape793->setGeometry(LineSet794);

HAnimJoint792->addChild(*Shape793);

CShape* Shape797 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet798 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet798->setVertexCount(new int[1]{2});
CCoordinate* Coordinate799 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate799->setPoint(new float[6]{0.1984,0.8663,-0.0583,0,1,0});
LineSet798->setCoord(*Coordinate799);

//from l_radiocarpal to l_midcarpal_2
CColorRGBA* ColorRGBA800 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA800->setUSE("HAnimSegmentLineColorRGBA");
LineSet798->setColor(*ColorRGBA800);

Shape797->setGeometry(LineSet798);

HAnimJoint792->addChild(*Shape797);

CShape* Shape801 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet802 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet802->setVertexCount(new int[1]{2});
CCoordinate* Coordinate803 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate803->setPoint(new float[6]{0.1984,0.8663,-0.0583,0,1,0});
LineSet802->setCoord(*Coordinate803);

//from l_radiocarpal to l_midcarpal_3
CColorRGBA* ColorRGBA804 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA804->setUSE("HAnimSegmentLineColorRGBA");
LineSet802->setColor(*ColorRGBA804);

Shape801->setGeometry(LineSet802);

HAnimJoint792->addChild(*Shape801);

CShape* Shape805 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet806 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet806->setVertexCount(new int[1]{2});
CCoordinate* Coordinate807 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate807->setPoint(new float[6]{0.1984,0.8663,-0.0583,0,1,0});
LineSet806->setCoord(*Coordinate807);

//from l_radiocarpal to l_midcarpal_4_5
CColorRGBA* ColorRGBA808 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA808->setUSE("HAnimSegmentLineColorRGBA");
LineSet806->setColor(*ColorRGBA808);

Shape805->setGeometry(LineSet806);

HAnimJoint792->addChild(*Shape805);

CHAnimJoint* HAnimJoint809 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint809->setName("l_midcarpal_1");
HAnimJoint809->setDEF("hanim_l_midcarpal_1");
HAnimJoint809->setCenter(new float[3]{0,1,0});
HAnimJoint809->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint809->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape810 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet811 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet811->setVertexCount(new int[1]{1});
CCoordinate* Coordinate812 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate812->setPoint(new float[3]{0.1924,0.8472,-0.0534});
LineSet811->setCoord(*Coordinate812);

//from l_midcarpal_1 to l_carpometacarpal_1
CColorRGBA* ColorRGBA813 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA813->setUSE("HAnimSegmentLineColorRGBA");
LineSet811->setColor(*ColorRGBA813);

Shape810->setGeometry(LineSet811);

HAnimJoint809->addChild(*Shape810);

CHAnimJoint* HAnimJoint814 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint814->setName("l_carpometacarpal_1");
HAnimJoint814->setDEF("hanim_l_carpometacarpal_1");
HAnimJoint814->setCenter(new float[3]{0.1924,0.8472,-0.0534});
HAnimJoint814->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint814->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape815 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet816 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet816->setVertexCount(new int[1]{2});
CCoordinate* Coordinate817 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate817->setPoint(new float[6]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246});
LineSet816->setCoord(*Coordinate817);

//from l_carpometacarpal_1 to l_metacarpophalangeal_1
CColorRGBA* ColorRGBA818 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA818->setUSE("HAnimSegmentLineColorRGBA");
LineSet816->setColor(*ColorRGBA818);

Shape815->setGeometry(LineSet816);

HAnimJoint814->addChild(*Shape815);

CHAnimJoint* HAnimJoint819 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint819->setName("l_metacarpophalangeal_1");
HAnimJoint819->setDEF("hanim_l_metacarpophalangeal_1");
HAnimJoint819->setCenter(new float[3]{0.1951,0.8226,0.0246});
HAnimJoint819->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint819->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape820 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet821 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet821->setVertexCount(new int[1]{2});
CCoordinate* Coordinate822 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate822->setPoint(new float[6]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464});
LineSet821->setCoord(*Coordinate822);

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1
CColorRGBA* ColorRGBA823 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA823->setUSE("HAnimSegmentLineColorRGBA");
LineSet821->setColor(*ColorRGBA823);

Shape820->setGeometry(LineSet821);

HAnimJoint819->addChild(*Shape820);

CHAnimSite* HAnimSite824 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite824->setName("l_carpal_distal_phalanx_1_tip");
HAnimSite824->setDEF("hanim_l_carpal_distal_phalanx_1_tip");
HAnimSite824->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor825 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor825->setDescription("HAnimSite l_carpal_distal_phalanx_1_tip");
HAnimSite824->addChildren(*TouchSensor825);

CShape* Shape826 = (CShape *)(m_pScene.createNode("Shape"));
Shape826->setUSE("HAnimSiteShape");
HAnimSite824->addChildren(*Shape826);

HAnimJoint819->addChild(*HAnimSite824);

CHAnimJoint* HAnimJoint827 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint827->setName("l_carpal_interphalangeal_1");
HAnimJoint827->setDEF("hanim_l_carpal_interphalangeal_1");
HAnimJoint827->setCenter(new float[3]{0.1955,0.8159,0.0464});
HAnimJoint827->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint827->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint819->addChildren(*HAnimJoint827);

HAnimJoint814->addChildren(*HAnimJoint819);

HAnimJoint809->addChildren(*HAnimJoint814);

HAnimJoint792->addChildren(*HAnimJoint809);

CHAnimJoint* HAnimJoint828 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint828->setName("l_midcarpal_2");
HAnimJoint828->setDEF("hanim_l_midcarpal_2");
HAnimJoint828->setCenter(new float[3]{0,1,0});
HAnimJoint828->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint828->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape829 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet830 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet830->setVertexCount(new int[1]{1});
CCoordinate* Coordinate831 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate831->setPoint(new float[3]{0.1983,0.8024,-0.028});
LineSet830->setCoord(*Coordinate831);

//from l_midcarpal_2 to l_carpometacarpal_2
CColorRGBA* ColorRGBA832 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA832->setUSE("HAnimSegmentLineColorRGBA");
LineSet830->setColor(*ColorRGBA832);

Shape829->setGeometry(LineSet830);

HAnimJoint828->addChild(*Shape829);

CHAnimSite* HAnimSite833 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite833->setName("l_metacarpal_phalanx_2_pt");
HAnimSite833->setDEF("hanim_l_metacarpal_phalanx_2_pt");
HAnimSite833->setTranslation(new float[3]{0.2009,0.8139,-0.0237});
CTouchSensor* TouchSensor834 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor834->setDescription("HAnimSite l_metacarpal_phalanx_2_pt");
HAnimSite833->addChildren(*TouchSensor834);

CShape* Shape835 = (CShape *)(m_pScene.createNode("Shape"));
Shape835->setUSE("HAnimSiteShape");
HAnimSite833->addChildren(*Shape835);

HAnimJoint828->addChild(*HAnimSite833);

CHAnimJoint* HAnimJoint836 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint836->setName("l_carpometacarpal_2");
HAnimJoint836->setDEF("hanim_l_carpometacarpal_2");
HAnimJoint836->setCenter(new float[3]{0.1983,0.8024,-0.028});
HAnimJoint836->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint836->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape837 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet838 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet838->setVertexCount(new int[1]{2});
CCoordinate* Coordinate839 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate839->setPoint(new float[6]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028});
LineSet838->setCoord(*Coordinate839);

//from l_carpometacarpal_2 to l_metacarpophalangeal_2
CColorRGBA* ColorRGBA840 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA840->setUSE("HAnimSegmentLineColorRGBA");
LineSet838->setColor(*ColorRGBA840);

Shape837->setGeometry(LineSet838);

HAnimJoint836->addChild(*Shape837);

CHAnimJoint* HAnimJoint841 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint841->setName("l_metacarpophalangeal_2");
HAnimJoint841->setDEF("hanim_l_metacarpophalangeal_2");
HAnimJoint841->setCenter(new float[3]{0.1983,0.7815,-0.028});
HAnimJoint841->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint841->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape842 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet843 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet843->setVertexCount(new int[1]{2});
CCoordinate* Coordinate844 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate844->setPoint(new float[6]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248});
LineSet843->setCoord(*Coordinate844);

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2
CColorRGBA* ColorRGBA845 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA845->setUSE("HAnimSegmentLineColorRGBA");
LineSet843->setColor(*ColorRGBA845);

Shape842->setGeometry(LineSet843);

HAnimJoint841->addChild(*Shape842);

CHAnimJoint* HAnimJoint846 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint846->setName("l_carpal_proximal_interphalangeal_2");
HAnimJoint846->setDEF("hanim_l_carpal_proximal_interphalangeal_2");
HAnimJoint846->setCenter(new float[3]{0.2017,0.7363,-0.0248});
HAnimJoint846->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint846->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape847 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet848 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet848->setVertexCount(new int[1]{2});
CCoordinate* Coordinate849 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate849->setPoint(new float[6]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236});
LineSet848->setCoord(*Coordinate849);

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2
CColorRGBA* ColorRGBA850 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA850->setUSE("HAnimSegmentLineColorRGBA");
LineSet848->setColor(*ColorRGBA850);

Shape847->setGeometry(LineSet848);

HAnimJoint846->addChild(*Shape847);

CHAnimSite* HAnimSite851 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite851->setName("l_carpal_distal_phalanx_2_tip");
HAnimSite851->setDEF("hanim_l_carpal_distal_phalanx_2_tip");
HAnimSite851->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor852 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor852->setDescription("HAnimSite l_carpal_distal_phalanx_2_tip");
HAnimSite851->addChildren(*TouchSensor852);

CShape* Shape853 = (CShape *)(m_pScene.createNode("Shape"));
Shape853->setUSE("HAnimSiteShape");
HAnimSite851->addChildren(*Shape853);

HAnimJoint846->addChild(*HAnimSite851);

CHAnimSite* HAnimSite854 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite854->setName("l_dactylion_pt");
HAnimSite854->setDEF("hanim_l_dactylion_pt");
HAnimSite854->setTranslation(new float[3]{0.2056,0.6743,-0.0482});
CTouchSensor* TouchSensor855 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor855->setDescription("HAnimSite l_dactylion_pt");
HAnimSite854->addChildren(*TouchSensor855);

CShape* Shape856 = (CShape *)(m_pScene.createNode("Shape"));
Shape856->setUSE("HAnimSiteShape");
HAnimSite854->addChildren(*Shape856);

HAnimJoint846->addChild(*HAnimSite854);

CHAnimJoint* HAnimJoint857 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint857->setName("l_carpal_distal_interphalangeal_2");
HAnimJoint857->setDEF("hanim_l_carpal_distal_interphalangeal_2");
HAnimJoint857->setCenter(new float[3]{0.2028,0.7139,-0.0236});
HAnimJoint857->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint857->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint846->addChildren(*HAnimJoint857);

HAnimJoint841->addChildren(*HAnimJoint846);

HAnimJoint836->addChildren(*HAnimJoint841);

HAnimJoint828->addChildren(*HAnimJoint836);

HAnimJoint792->addChildren(*HAnimJoint828);

CHAnimJoint* HAnimJoint858 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint858->setName("l_midcarpal_3");
HAnimJoint858->setDEF("hanim_l_midcarpal_3");
HAnimJoint858->setCenter(new float[3]{0,1,0});
HAnimJoint858->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint858->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape859 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet860 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet860->setVertexCount(new int[1]{1});
CCoordinate* Coordinate861 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate861->setPoint(new float[3]{0.1987,0.8029,-0.053});
LineSet860->setCoord(*Coordinate861);

//from l_midcarpal_3 to l_carpometacarpal_3
CColorRGBA* ColorRGBA862 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA862->setUSE("HAnimSegmentLineColorRGBA");
LineSet860->setColor(*ColorRGBA862);

Shape859->setGeometry(LineSet860);

HAnimJoint858->addChild(*Shape859);

CHAnimSite* HAnimSite863 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite863->setName("l_metacarpal_phalanx_3_pt");
HAnimSite863->setDEF("hanim_l_metacarpal_phalanx_3_pt");
HAnimSite863->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor864 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor864->setDescription("HAnimSite l_metacarpal_phalanx_3_pt");
HAnimSite863->addChildren(*TouchSensor864);

CShape* Shape865 = (CShape *)(m_pScene.createNode("Shape"));
Shape865->setUSE("HAnimSiteShape");
HAnimSite863->addChildren(*Shape865);

HAnimJoint858->addChild(*HAnimSite863);

CHAnimJoint* HAnimJoint866 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint866->setName("l_carpometacarpal_3");
HAnimJoint866->setDEF("hanim_l_carpometacarpal_3");
HAnimJoint866->setCenter(new float[3]{0.1987,0.8029,-0.053});
HAnimJoint866->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint866->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape867 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet868 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet868->setVertexCount(new int[1]{2});
CCoordinate* Coordinate869 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate869->setPoint(new float[6]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053});
LineSet868->setCoord(*Coordinate869);

//from l_carpometacarpal_3 to l_metacarpophalangeal_3
CColorRGBA* ColorRGBA870 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA870->setUSE("HAnimSegmentLineColorRGBA");
LineSet868->setColor(*ColorRGBA870);

Shape867->setGeometry(LineSet868);

HAnimJoint866->addChild(*Shape867);

CHAnimJoint* HAnimJoint871 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint871->setName("l_metacarpophalangeal_3");
HAnimJoint871->setDEF("hanim_l_metacarpophalangeal_3");
HAnimJoint871->setCenter(new float[3]{0.1987,0.7818,-0.053});
HAnimJoint871->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint871->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape872 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet873 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet873->setVertexCount(new int[1]{2});
CCoordinate* Coordinate874 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate874->setPoint(new float[6]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503});
LineSet873->setCoord(*Coordinate874);

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3
CColorRGBA* ColorRGBA875 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA875->setUSE("HAnimSegmentLineColorRGBA");
LineSet873->setColor(*ColorRGBA875);

Shape872->setGeometry(LineSet873);

HAnimJoint871->addChild(*Shape872);

CHAnimJoint* HAnimJoint876 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint876->setName("l_carpal_proximal_interphalangeal_3");
HAnimJoint876->setDEF("hanim_l_carpal_proximal_interphalangeal_3");
HAnimJoint876->setCenter(new float[3]{0.2013,0.7273,-0.0503});
HAnimJoint876->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint876->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape877 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet878 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet878->setVertexCount(new int[1]{2});
CCoordinate* Coordinate879 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate879->setPoint(new float[6]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494});
LineSet878->setCoord(*Coordinate879);

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3
CColorRGBA* ColorRGBA880 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA880->setUSE("HAnimSegmentLineColorRGBA");
LineSet878->setColor(*ColorRGBA880);

Shape877->setGeometry(LineSet878);

HAnimJoint876->addChild(*Shape877);

CHAnimSite* HAnimSite881 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite881->setName("l_carpal_distal_phalanx_3_tip");
HAnimSite881->setDEF("hanim_l_carpal_distal_phalanx_3_tip");
HAnimSite881->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor882 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor882->setDescription("HAnimSite l_carpal_distal_phalanx_3_tip");
HAnimSite881->addChildren(*TouchSensor882);

CShape* Shape883 = (CShape *)(m_pScene.createNode("Shape"));
Shape883->setUSE("HAnimSiteShape");
HAnimSite881->addChildren(*Shape883);

HAnimJoint876->addChild(*HAnimSite881);

CHAnimJoint* HAnimJoint884 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint884->setName("l_carpal_distal_interphalangeal_3");
HAnimJoint884->setDEF("hanim_l_carpal_distal_interphalangeal_3");
HAnimJoint884->setCenter(new float[3]{0.2026,0.7011,-0.0494});
HAnimJoint884->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint884->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint876->addChildren(*HAnimJoint884);

HAnimJoint871->addChildren(*HAnimJoint876);

HAnimJoint866->addChildren(*HAnimJoint871);

HAnimJoint858->addChildren(*HAnimJoint866);

HAnimJoint792->addChildren(*HAnimJoint858);

CHAnimJoint* HAnimJoint885 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint885->setName("l_midcarpal_4_5");
HAnimJoint885->setDEF("hanim_l_midcarpal_4_5");
HAnimJoint885->setCenter(new float[3]{0,1,0});
HAnimJoint885->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint885->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape886 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet887 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet887->setVertexCount(new int[1]{1});
CCoordinate* Coordinate888 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate888->setPoint(new float[3]{0.1956,0.8019,-0.0794});
LineSet887->setCoord(*Coordinate888);

//from l_midcarpal_4_5 to l_carpometacarpal_4
CColorRGBA* ColorRGBA889 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA889->setUSE("HAnimSegmentLineColorRGBA");
LineSet887->setColor(*ColorRGBA889);

Shape886->setGeometry(LineSet887);

HAnimJoint885->addChild(*Shape886);

CShape* Shape890 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet891 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet891->setVertexCount(new int[1]{1});
CCoordinate* Coordinate892 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate892->setPoint(new float[3]{0.1925,0.8066,-0.1036});
LineSet891->setCoord(*Coordinate892);

//from l_midcarpal_4_5 to l_carpometacarpal_5
CColorRGBA* ColorRGBA893 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA893->setUSE("HAnimSegmentLineColorRGBA");
LineSet891->setColor(*ColorRGBA893);

Shape890->setGeometry(LineSet891);

HAnimJoint885->addChild(*Shape890);

CHAnimSite* HAnimSite894 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite894->setName("l_metacarpal_phalanx_5_pt");
HAnimSite894->setDEF("hanim_l_metacarpal_phalanx_5_pt");
HAnimSite894->setTranslation(new float[3]{0.1929,0.786,-0.1122});
CTouchSensor* TouchSensor895 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor895->setDescription("HAnimSite l_metacarpal_phalanx_5_pt");
HAnimSite894->addChildren(*TouchSensor895);

CShape* Shape896 = (CShape *)(m_pScene.createNode("Shape"));
Shape896->setUSE("HAnimSiteShape");
HAnimSite894->addChildren(*Shape896);

HAnimJoint885->addChild(*HAnimSite894);

CHAnimJoint* HAnimJoint897 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint897->setName("l_carpometacarpal_4");
HAnimJoint897->setDEF("hanim_l_carpometacarpal_4");
HAnimJoint897->setCenter(new float[3]{0.1956,0.8019,-0.0794});
HAnimJoint897->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint897->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape898 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet899 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet899->setVertexCount(new int[1]{2});
CCoordinate* Coordinate900 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate900->setPoint(new float[6]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794});
LineSet899->setCoord(*Coordinate900);

//from l_carpometacarpal_4 to l_metacarpophalangeal_4
CColorRGBA* ColorRGBA901 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA901->setUSE("HAnimSegmentLineColorRGBA");
LineSet899->setColor(*ColorRGBA901);

Shape898->setGeometry(LineSet899);

HAnimJoint897->addChild(*Shape898);

CHAnimJoint* HAnimJoint902 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint902->setName("l_metacarpophalangeal_4");
HAnimJoint902->setDEF("hanim_l_metacarpophalangeal_4");
HAnimJoint902->setCenter(new float[3]{0.1956,0.7815,-0.0794});
HAnimJoint902->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint902->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape903 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet904 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet904->setVertexCount(new int[1]{2});
CCoordinate* Coordinate905 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate905->setPoint(new float[6]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777});
LineSet904->setCoord(*Coordinate905);

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4
CColorRGBA* ColorRGBA906 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA906->setUSE("HAnimSegmentLineColorRGBA");
LineSet904->setColor(*ColorRGBA906);

Shape903->setGeometry(LineSet904);

HAnimJoint902->addChild(*Shape903);

CHAnimJoint* HAnimJoint907 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint907->setName("l_carpal_proximal_interphalangeal_4");
HAnimJoint907->setDEF("hanim_l_carpal_proximal_interphalangeal_4");
HAnimJoint907->setCenter(new float[3]{0.1973,0.7287,-0.0777});
HAnimJoint907->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint907->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape908 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet909 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet909->setVertexCount(new int[1]{2});
CCoordinate* Coordinate910 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate910->setPoint(new float[6]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767});
LineSet909->setCoord(*Coordinate910);

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4
CColorRGBA* ColorRGBA911 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA911->setUSE("HAnimSegmentLineColorRGBA");
LineSet909->setColor(*ColorRGBA911);

Shape908->setGeometry(LineSet909);

HAnimJoint907->addChild(*Shape908);

CHAnimSite* HAnimSite912 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite912->setName("l_carpal_distal_phalanx_4_tip");
HAnimSite912->setDEF("hanim_l_carpal_distal_phalanx_4_tip");
HAnimSite912->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor913 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor913->setDescription("HAnimSite l_carpal_distal_phalanx_4_tip");
HAnimSite912->addChildren(*TouchSensor913);

CShape* Shape914 = (CShape *)(m_pScene.createNode("Shape"));
Shape914->setUSE("HAnimSiteShape");
HAnimSite912->addChildren(*Shape914);

HAnimJoint907->addChild(*HAnimSite912);

CHAnimJoint* HAnimJoint915 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint915->setName("l_carpal_distal_interphalangeal_4");
HAnimJoint915->setDEF("hanim_l_carpal_distal_interphalangeal_4");
HAnimJoint915->setCenter(new float[3]{0.1983,0.7045,-0.0767});
HAnimJoint915->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint915->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint907->addChildren(*HAnimJoint915);

HAnimJoint902->addChildren(*HAnimJoint907);

HAnimJoint897->addChildren(*HAnimJoint902);

HAnimJoint885->addChildren(*HAnimJoint897);

CHAnimJoint* HAnimJoint916 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint916->setName("l_carpometacarpal_5");
HAnimJoint916->setDEF("hanim_l_carpometacarpal_5");
HAnimJoint916->setCenter(new float[3]{0.1925,0.8066,-0.1036});
HAnimJoint916->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint916->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape917 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet918 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet918->setVertexCount(new int[1]{2});
CCoordinate* Coordinate919 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate919->setPoint(new float[6]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036});
LineSet918->setCoord(*Coordinate919);

//from l_carpometacarpal_5 to l_metacarpophalangeal_5
CColorRGBA* ColorRGBA920 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA920->setUSE("HAnimSegmentLineColorRGBA");
LineSet918->setColor(*ColorRGBA920);

Shape917->setGeometry(LineSet918);

HAnimJoint916->addChild(*Shape917);

CHAnimJoint* HAnimJoint921 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint921->setName("l_metacarpophalangeal_5");
HAnimJoint921->setDEF("hanim_l_metacarpophalangeal_5");
HAnimJoint921->setCenter(new float[3]{0.1925,0.7866,-0.1036});
HAnimJoint921->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint921->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape922 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet923 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet923->setVertexCount(new int[1]{2});
CCoordinate* Coordinate924 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate924->setPoint(new float[6]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024});
LineSet923->setCoord(*Coordinate924);

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5
CColorRGBA* ColorRGBA925 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA925->setUSE("HAnimSegmentLineColorRGBA");
LineSet923->setColor(*ColorRGBA925);

Shape922->setGeometry(LineSet923);

HAnimJoint921->addChild(*Shape922);

CHAnimJoint* HAnimJoint926 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint926->setName("l_carpal_proximal_interphalangeal_5");
HAnimJoint926->setDEF("hanim_l_carpal_proximal_interphalangeal_5");
HAnimJoint926->setCenter(new float[3]{0.1938,0.7452,-0.1024});
HAnimJoint926->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint926->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape927 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet928 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet928->setVertexCount(new int[1]{2});
CCoordinate* Coordinate929 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate929->setPoint(new float[6]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017});
LineSet928->setCoord(*Coordinate929);

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5
CColorRGBA* ColorRGBA930 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA930->setUSE("HAnimSegmentLineColorRGBA");
LineSet928->setColor(*ColorRGBA930);

Shape927->setGeometry(LineSet928);

HAnimJoint926->addChild(*Shape927);

CHAnimSite* HAnimSite931 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite931->setName("l_carpal_distal_phalanx_5_tip");
HAnimSite931->setDEF("hanim_l_carpal_distal_phalanx_5_tip");
HAnimSite931->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor932 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor932->setDescription("HAnimSite l_carpal_distal_phalanx_5_tip");
HAnimSite931->addChildren(*TouchSensor932);

CShape* Shape933 = (CShape *)(m_pScene.createNode("Shape"));
Shape933->setUSE("HAnimSiteShape");
HAnimSite931->addChildren(*Shape933);

HAnimJoint926->addChild(*HAnimSite931);

CHAnimJoint* HAnimJoint934 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint934->setName("l_carpal_distal_interphalangeal_5");
HAnimJoint934->setDEF("hanim_l_carpal_distal_interphalangeal_5");
HAnimJoint934->setCenter(new float[3]{0.1948,0.7277,-0.1017});
HAnimJoint934->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint934->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint926->addChildren(*HAnimJoint934);

HAnimJoint921->addChildren(*HAnimJoint926);

HAnimJoint916->addChildren(*HAnimJoint921);

HAnimJoint885->addChildren(*HAnimJoint916);

HAnimJoint792->addChildren(*HAnimJoint885);

HAnimJoint784->addChildren(*HAnimJoint792);

HAnimJoint767->addChildren(*HAnimJoint784);

HAnimJoint756->addChildren(*HAnimJoint767);

HAnimJoint751->addChildren(*HAnimJoint756);

HAnimJoint583->addChildren(*HAnimJoint751);

CHAnimJoint* HAnimJoint935 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint935->setName("r_sternoclavicular");
HAnimJoint935->setDEF("hanim_r_sternoclavicular");
HAnimJoint935->setCenter(new float[3]{-0.0694,1.46,-0.033});
HAnimJoint935->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint935->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape936 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet937 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet937->setVertexCount(new int[1]{2});
CCoordinate* Coordinate938 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate938->setPoint(new float[6]{-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401});
LineSet937->setCoord(*Coordinate938);

//from r_sternoclavicular to r_acromioclavicular
CColorRGBA* ColorRGBA939 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA939->setUSE("HAnimSegmentLineColorRGBA");
LineSet937->setColor(*ColorRGBA939);

Shape936->setGeometry(LineSet937);

HAnimJoint935->addChild(*Shape936);

CHAnimJoint* HAnimJoint940 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint940->setName("r_acromioclavicular");
HAnimJoint940->setDEF("hanim_r_acromioclavicular");
HAnimJoint940->setCenter(new float[3]{-0.0836,1.4281,-0.0401});
HAnimJoint940->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint940->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape941 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet942 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet942->setVertexCount(new int[1]{2});
CCoordinate* Coordinate943 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate943->setPoint(new float[6]{-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325});
LineSet942->setCoord(*Coordinate943);

//from r_acromioclavicular to r_shoulder
CColorRGBA* ColorRGBA944 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA944->setUSE("HAnimSegmentLineColorRGBA");
LineSet942->setColor(*ColorRGBA944);

Shape941->setGeometry(LineSet942);

HAnimJoint940->addChild(*Shape941);

CHAnimSite* HAnimSite945 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite945->setName("r_bideltoid_pt");
HAnimSite945->setDEF("hanim_r_bideltoid_pt");
HAnimSite945->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor946 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor946->setDescription("HAnimSite r_bideltoid_pt");
HAnimSite945->addChildren(*TouchSensor946);

CShape* Shape947 = (CShape *)(m_pScene.createNode("Shape"));
Shape947->setUSE("HAnimSiteShape");
HAnimSite945->addChildren(*Shape947);

HAnimJoint940->addChild(*HAnimSite945);

CHAnimSite* HAnimSite948 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite948->setName("r_humeral_lateral_epicondyles_pt");
HAnimSite948->setDEF("hanim_r_humeral_lateral_epicondyles_pt");
HAnimSite948->setTranslation(new float[3]{-0.2224,1.1517,-0.1033});
CTouchSensor* TouchSensor949 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor949->setDescription("HAnimSite r_humeral_lateral_epicondyles_pt");
HAnimSite948->addChildren(*TouchSensor949);

CShape* Shape950 = (CShape *)(m_pScene.createNode("Shape"));
Shape950->setUSE("HAnimSiteShape");
HAnimSite948->addChildren(*Shape950);

HAnimJoint940->addChild(*HAnimSite948);

CHAnimJoint* HAnimJoint951 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint951->setName("r_shoulder");
HAnimJoint951->setDEF("hanim_r_shoulder");
HAnimJoint951->setCenter(new float[3]{-0.1907,1.4407,-0.0325});
HAnimJoint951->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint951->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape952 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet953 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet953->setVertexCount(new int[1]{2});
CCoordinate* Coordinate954 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate954->setPoint(new float[6]{-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062});
LineSet953->setCoord(*Coordinate954);

//from r_shoulder to r_elbow
CColorRGBA* ColorRGBA955 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA955->setUSE("HAnimSegmentLineColorRGBA");
LineSet953->setColor(*ColorRGBA955);

Shape952->setGeometry(LineSet953);

HAnimJoint951->addChild(*Shape952);

CHAnimSite* HAnimSite956 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite956->setName("r_humeral_medial_epicondyles_pt");
HAnimSite956->setDEF("hanim_r_humeral_medial_epicondyles_pt");
HAnimSite956->setTranslation(new float[3]{-0.168,1.1298,-0.1062});
CTouchSensor* TouchSensor957 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor957->setDescription("HAnimSite r_humeral_medial_epicondyles_pt");
HAnimSite956->addChildren(*TouchSensor957);

CShape* Shape958 = (CShape *)(m_pScene.createNode("Shape"));
Shape958->setUSE("HAnimSiteShape");
HAnimSite956->addChildren(*Shape958);

HAnimJoint951->addChild(*HAnimSite956);

CHAnimSite* HAnimSite959 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite959->setName("r_olecranon_pt");
HAnimSite959->setDEF("hanim_r_olecranon_pt");
HAnimSite959->setTranslation(new float[3]{-0.1907,1.1405,-0.1065});
CTouchSensor* TouchSensor960 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor960->setDescription("HAnimSite r_olecranon_pt");
HAnimSite959->addChildren(*TouchSensor960);

CShape* Shape961 = (CShape *)(m_pScene.createNode("Shape"));
Shape961->setUSE("HAnimSiteShape");
HAnimSite959->addChildren(*Shape961);

HAnimJoint951->addChild(*HAnimSite959);

CHAnimSite* HAnimSite962 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite962->setName("r_radial_styloid_pt");
HAnimSite962->setDEF("hanim_r_radial_styloid_pt");
HAnimSite962->setTranslation(new float[3]{-0.1884,0.8676,-0.036});
CTouchSensor* TouchSensor963 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor963->setDescription("HAnimSite r_radial_styloid_pt");
HAnimSite962->addChildren(*TouchSensor963);

CShape* Shape964 = (CShape *)(m_pScene.createNode("Shape"));
Shape964->setUSE("HAnimSiteShape");
HAnimSite962->addChildren(*Shape964);

HAnimJoint951->addChild(*HAnimSite962);

CHAnimSite* HAnimSite965 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite965->setName("r_radiale_pt");
HAnimSite965->setDEF("hanim_r_radiale_pt");
HAnimSite965->setTranslation(new float[3]{-0.213,1.1305,-0.1091});
CTouchSensor* TouchSensor966 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor966->setDescription("HAnimSite r_radiale_pt");
HAnimSite965->addChildren(*TouchSensor966);

CShape* Shape967 = (CShape *)(m_pScene.createNode("Shape"));
Shape967->setUSE("HAnimSiteShape");
HAnimSite965->addChildren(*Shape967);

HAnimJoint951->addChild(*HAnimSite965);

CHAnimJoint* HAnimJoint968 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint968->setName("r_elbow");
HAnimJoint968->setDEF("hanim_r_elbow");
HAnimJoint968->setCenter(new float[3]{-0.1949,1.1388,-0.062});
HAnimJoint968->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint968->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape969 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet970 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet970->setVertexCount(new int[1]{2});
CCoordinate* Coordinate971 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate971->setPoint(new float[6]{-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521});
LineSet970->setCoord(*Coordinate971);

//from r_elbow to r_radiocarpal
CColorRGBA* ColorRGBA972 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA972->setUSE("HAnimSegmentLineColorRGBA");
LineSet970->setColor(*ColorRGBA972);

Shape969->setGeometry(LineSet970);

HAnimJoint968->addChild(*Shape969);

CHAnimSite* HAnimSite973 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite973->setName("r_ulnar_styloid_pt");
HAnimSite973->setDEF("hanim_r_ulnar_styloid_pt");
HAnimSite973->setTranslation(new float[3]{-0.2117,0.8562,-0.0584});
CTouchSensor* TouchSensor974 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor974->setDescription("HAnimSite r_ulnar_styloid_pt");
HAnimSite973->addChildren(*TouchSensor974);

CShape* Shape975 = (CShape *)(m_pScene.createNode("Shape"));
Shape975->setUSE("HAnimSiteShape");
HAnimSite973->addChildren(*Shape975);

HAnimJoint968->addChild(*HAnimSite973);

CHAnimJoint* HAnimJoint976 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint976->setName("r_radiocarpal");
HAnimJoint976->setDEF("hanim_r_radiocarpal");
HAnimJoint976->setCenter(new float[3]{-0.1959,0.8694,-0.0521});
HAnimJoint976->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint976->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape977 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet978 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet978->setVertexCount(new int[1]{2});
CCoordinate* Coordinate979 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate979->setPoint(new float[6]{-0.1959,0.8694,-0.0521,0,1,0});
LineSet978->setCoord(*Coordinate979);

//from r_radiocarpal to r_midcarpal_1
CColorRGBA* ColorRGBA980 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA980->setUSE("HAnimSegmentLineColorRGBA");
LineSet978->setColor(*ColorRGBA980);

Shape977->setGeometry(LineSet978);

HAnimJoint976->addChild(*Shape977);

CShape* Shape981 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet982 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet982->setVertexCount(new int[1]{2});
CCoordinate* Coordinate983 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate983->setPoint(new float[6]{-0.1959,0.8694,-0.0521,0,1,0});
LineSet982->setCoord(*Coordinate983);

//from r_radiocarpal to r_midcarpal_2
CColorRGBA* ColorRGBA984 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA984->setUSE("HAnimSegmentLineColorRGBA");
LineSet982->setColor(*ColorRGBA984);

Shape981->setGeometry(LineSet982);

HAnimJoint976->addChild(*Shape981);

CShape* Shape985 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet986 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet986->setVertexCount(new int[1]{2});
CCoordinate* Coordinate987 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate987->setPoint(new float[6]{-0.1959,0.8694,-0.0521,0,1,0});
LineSet986->setCoord(*Coordinate987);

//from r_radiocarpal to r_midcarpal_3
CColorRGBA* ColorRGBA988 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA988->setUSE("HAnimSegmentLineColorRGBA");
LineSet986->setColor(*ColorRGBA988);

Shape985->setGeometry(LineSet986);

HAnimJoint976->addChild(*Shape985);

CShape* Shape989 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet990 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet990->setVertexCount(new int[1]{2});
CCoordinate* Coordinate991 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate991->setPoint(new float[6]{-0.1959,0.8694,-0.0521,0,1,0});
LineSet990->setCoord(*Coordinate991);

//from r_radiocarpal to r_midcarpal_4_5
CColorRGBA* ColorRGBA992 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA992->setUSE("HAnimSegmentLineColorRGBA");
LineSet990->setColor(*ColorRGBA992);

Shape989->setGeometry(LineSet990);

HAnimJoint976->addChild(*Shape989);

CHAnimJoint* HAnimJoint993 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint993->setName("r_midcarpal_1");
HAnimJoint993->setDEF("hanim_r_midcarpal_1");
HAnimJoint993->setCenter(new float[3]{0,1,0});
HAnimJoint993->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint993->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape994 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet995 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet995->setVertexCount(new int[1]{1});
CCoordinate* Coordinate996 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate996->setPoint(new float[3]{-0.1899,0.8502,-0.0473});
LineSet995->setCoord(*Coordinate996);

//from r_midcarpal_1 to r_carpometacarpal_1
CColorRGBA* ColorRGBA997 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA997->setUSE("HAnimSegmentLineColorRGBA");
LineSet995->setColor(*ColorRGBA997);

Shape994->setGeometry(LineSet995);

HAnimJoint993->addChild(*Shape994);

CHAnimJoint* HAnimJoint998 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint998->setName("r_carpometacarpal_1");
HAnimJoint998->setDEF("hanim_r_carpometacarpal_1");
HAnimJoint998->setCenter(new float[3]{-0.1899,0.8502,-0.0473});
HAnimJoint998->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint998->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape999 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1000 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1000->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1001 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1001->setPoint(new float[6]{-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306});
LineSet1000->setCoord(*Coordinate1001);

//from r_carpometacarpal_1 to r_metacarpophalangeal_1
CColorRGBA* ColorRGBA1002 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1002->setUSE("HAnimSegmentLineColorRGBA");
LineSet1000->setColor(*ColorRGBA1002);

Shape999->setGeometry(LineSet1000);

HAnimJoint998->addChild(*Shape999);

CHAnimJoint* HAnimJoint1003 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1003->setName("r_metacarpophalangeal_1");
HAnimJoint1003->setDEF("hanim_r_metacarpophalangeal_1");
HAnimJoint1003->setCenter(new float[3]{-0.1874,0.8256,0.0306});
HAnimJoint1003->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1003->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape1004 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1005 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1005->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1006 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1006->setPoint(new float[6]{-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506});
LineSet1005->setCoord(*Coordinate1006);

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1
CColorRGBA* ColorRGBA1007 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1007->setUSE("HAnimSegmentLineColorRGBA");
LineSet1005->setColor(*ColorRGBA1007);

Shape1004->setGeometry(LineSet1005);

HAnimJoint1003->addChild(*Shape1004);

CHAnimSite* HAnimSite1008 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1008->setName("r_carpal_distal_phalanx_1_tip");
HAnimSite1008->setDEF("hanim_r_carpal_distal_phalanx_1_tip");
HAnimSite1008->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor1009 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1009->setDescription("HAnimSite r_carpal_distal_phalanx_1_tip");
HAnimSite1008->addChildren(*TouchSensor1009);

CShape* Shape1010 = (CShape *)(m_pScene.createNode("Shape"));
Shape1010->setUSE("HAnimSiteShape");
HAnimSite1008->addChildren(*Shape1010);

HAnimJoint1003->addChild(*HAnimSite1008);

CHAnimJoint* HAnimJoint1011 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1011->setName("r_carpal_interphalangeal_1");
HAnimJoint1011->setDEF("hanim_r_carpal_interphalangeal_1");
HAnimJoint1011->setCenter(new float[3]{-0.1864,0.819,0.0506});
HAnimJoint1011->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1011->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1003->addChildren(*HAnimJoint1011);

HAnimJoint998->addChildren(*HAnimJoint1003);

HAnimJoint993->addChildren(*HAnimJoint998);

HAnimJoint976->addChildren(*HAnimJoint993);

CHAnimJoint* HAnimJoint1012 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1012->setName("r_midcarpal_2");
HAnimJoint1012->setDEF("hanim_r_midcarpal_2");
HAnimJoint1012->setCenter(new float[3]{0,1,0});
HAnimJoint1012->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1012->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape1013 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1014 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1014->setVertexCount(new int[1]{1});
CCoordinate* Coordinate1015 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1015->setPoint(new float[3]{-0.1961,0.8055,-0.0218});
LineSet1014->setCoord(*Coordinate1015);

//from r_midcarpal_2 to r_carpometacarpal_2
CColorRGBA* ColorRGBA1016 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1016->setUSE("HAnimSegmentLineColorRGBA");
LineSet1014->setColor(*ColorRGBA1016);

Shape1013->setGeometry(LineSet1014);

HAnimJoint1012->addChild(*Shape1013);

CHAnimSite* HAnimSite1017 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1017->setName("r_metacarpal_phalanx_2_pt");
HAnimSite1017->setDEF("hanim_r_metacarpal_phalanx_2_pt");
HAnimSite1017->setTranslation(new float[3]{-0.1977,0.8169,-0.0177});
CTouchSensor* TouchSensor1018 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1018->setDescription("HAnimSite r_metacarpal_phalanx_2_pt");
HAnimSite1017->addChildren(*TouchSensor1018);

CShape* Shape1019 = (CShape *)(m_pScene.createNode("Shape"));
Shape1019->setUSE("HAnimSiteShape");
HAnimSite1017->addChildren(*Shape1019);

HAnimJoint1012->addChild(*HAnimSite1017);

CHAnimJoint* HAnimJoint1020 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1020->setName("r_carpometacarpal_2");
HAnimJoint1020->setDEF("hanim_r_carpometacarpal_2");
HAnimJoint1020->setCenter(new float[3]{-0.1961,0.8055,-0.0218});
HAnimJoint1020->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1020->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape1021 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1022 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1022->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1023 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1023->setPoint(new float[6]{-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218});
LineSet1022->setCoord(*Coordinate1023);

//from r_carpometacarpal_2 to r_metacarpophalangeal_2
CColorRGBA* ColorRGBA1024 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1024->setUSE("HAnimSegmentLineColorRGBA");
LineSet1022->setColor(*ColorRGBA1024);

Shape1021->setGeometry(LineSet1022);

HAnimJoint1020->addChild(*Shape1021);

CHAnimJoint* HAnimJoint1025 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1025->setName("r_metacarpophalangeal_2");
HAnimJoint1025->setDEF("hanim_r_metacarpophalangeal_2");
HAnimJoint1025->setCenter(new float[3]{-0.1961,0.7846,-0.0218});
HAnimJoint1025->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1025->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape1026 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1027 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1027->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1028 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1028->setPoint(new float[6]{-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185});
LineSet1027->setCoord(*Coordinate1028);

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2
CColorRGBA* ColorRGBA1029 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1029->setUSE("HAnimSegmentLineColorRGBA");
LineSet1027->setColor(*ColorRGBA1029);

Shape1026->setGeometry(LineSet1027);

HAnimJoint1025->addChild(*Shape1026);

CHAnimJoint* HAnimJoint1030 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1030->setName("r_carpal_proximal_interphalangeal_2");
HAnimJoint1030->setDEF("hanim_r_carpal_proximal_interphalangeal_2");
HAnimJoint1030->setCenter(new float[3]{-0.1954,0.7393,-0.0185});
HAnimJoint1030->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1030->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape1031 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1032 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1032->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1033 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1033->setPoint(new float[6]{-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173});
LineSet1032->setCoord(*Coordinate1033);

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2
CColorRGBA* ColorRGBA1034 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1034->setUSE("HAnimSegmentLineColorRGBA");
LineSet1032->setColor(*ColorRGBA1034);

Shape1031->setGeometry(LineSet1032);

HAnimJoint1030->addChild(*Shape1031);

CHAnimSite* HAnimSite1035 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1035->setName("r_carpal_distal_phalanx_2_tip");
HAnimSite1035->setDEF("hanim_r_carpal_distal_phalanx_2_tip");
HAnimSite1035->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor1036 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1036->setDescription("HAnimSite r_carpal_distal_phalanx_2_tip");
HAnimSite1035->addChildren(*TouchSensor1036);

CShape* Shape1037 = (CShape *)(m_pScene.createNode("Shape"));
Shape1037->setUSE("HAnimSiteShape");
HAnimSite1035->addChildren(*Shape1037);

HAnimJoint1030->addChild(*HAnimSite1035);

CHAnimSite* HAnimSite1038 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1038->setName("r_dactylion_pt");
HAnimSite1038->setDEF("hanim_r_dactylion_pt");
HAnimSite1038->setTranslation(new float[3]{-0.1941,0.6772,-0.0423});
CTouchSensor* TouchSensor1039 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1039->setDescription("HAnimSite r_dactylion_pt");
HAnimSite1038->addChildren(*TouchSensor1039);

CShape* Shape1040 = (CShape *)(m_pScene.createNode("Shape"));
Shape1040->setUSE("HAnimSiteShape");
HAnimSite1038->addChildren(*Shape1040);

HAnimJoint1030->addChild(*HAnimSite1038);

CHAnimJoint* HAnimJoint1041 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1041->setName("r_carpal_distal_interphalangeal_2");
HAnimJoint1041->setDEF("hanim_r_carpal_distal_interphalangeal_2");
HAnimJoint1041->setCenter(new float[3]{-0.1945,0.7169,-0.0173});
HAnimJoint1041->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1041->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1030->addChildren(*HAnimJoint1041);

HAnimJoint1025->addChildren(*HAnimJoint1030);

HAnimJoint1020->addChildren(*HAnimJoint1025);

HAnimJoint1012->addChildren(*HAnimJoint1020);

HAnimJoint976->addChildren(*HAnimJoint1012);

CHAnimJoint* HAnimJoint1042 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1042->setName("r_midcarpal_3");
HAnimJoint1042->setDEF("hanim_r_midcarpal_3");
HAnimJoint1042->setCenter(new float[3]{0,1,0});
HAnimJoint1042->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1042->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape1043 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1044 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1044->setVertexCount(new int[1]{1});
CCoordinate* Coordinate1045 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1045->setPoint(new float[3]{-0.1972,0.806,-0.0468});
LineSet1044->setCoord(*Coordinate1045);

//from r_midcarpal_3 to r_carpometacarpal_3
CColorRGBA* ColorRGBA1046 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1046->setUSE("HAnimSegmentLineColorRGBA");
LineSet1044->setColor(*ColorRGBA1046);

Shape1043->setGeometry(LineSet1044);

HAnimJoint1042->addChild(*Shape1043);

CHAnimSite* HAnimSite1047 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1047->setName("r_metacarpal_phalanx_3_pt");
HAnimSite1047->setDEF("hanim_r_metacarpal_phalanx_3_pt");
HAnimSite1047->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor1048 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1048->setDescription("HAnimSite r_metacarpal_phalanx_3_pt");
HAnimSite1047->addChildren(*TouchSensor1048);

CShape* Shape1049 = (CShape *)(m_pScene.createNode("Shape"));
Shape1049->setUSE("HAnimSiteShape");
HAnimSite1047->addChildren(*Shape1049);

HAnimJoint1042->addChild(*HAnimSite1047);

CHAnimJoint* HAnimJoint1050 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1050->setName("r_carpometacarpal_3");
HAnimJoint1050->setDEF("hanim_r_carpometacarpal_3");
HAnimJoint1050->setCenter(new float[3]{-0.1972,0.806,-0.0468});
HAnimJoint1050->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1050->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape1051 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1052 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1052->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1053 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1053->setPoint(new float[6]{-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468});
LineSet1052->setCoord(*Coordinate1053);

//from r_carpometacarpal_3 to r_metacarpophalangeal_3
CColorRGBA* ColorRGBA1054 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1054->setUSE("HAnimSegmentLineColorRGBA");
LineSet1052->setColor(*ColorRGBA1054);

Shape1051->setGeometry(LineSet1052);

HAnimJoint1050->addChild(*Shape1051);

CHAnimJoint* HAnimJoint1055 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1055->setName("r_metacarpophalangeal_3");
HAnimJoint1055->setDEF("hanim_r_metacarpophalangeal_3");
HAnimJoint1055->setCenter(new float[3]{-0.1972,0.7849,-0.0468});
HAnimJoint1055->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1055->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape1056 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1057 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1057->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1058 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1058->setPoint(new float[6]{-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441});
LineSet1057->setCoord(*Coordinate1058);

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3
CColorRGBA* ColorRGBA1059 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1059->setUSE("HAnimSegmentLineColorRGBA");
LineSet1057->setColor(*ColorRGBA1059);

Shape1056->setGeometry(LineSet1057);

HAnimJoint1055->addChild(*Shape1056);

CHAnimJoint* HAnimJoint1060 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1060->setName("r_carpal_proximal_interphalangeal_3");
HAnimJoint1060->setDEF("hanim_r_carpal_proximal_interphalangeal_3");
HAnimJoint1060->setCenter(new float[3]{-0.195,0.7304,-0.0441});
HAnimJoint1060->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1060->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape1061 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1062 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1062->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1063 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1063->setPoint(new float[6]{-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432});
LineSet1062->setCoord(*Coordinate1063);

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3
CColorRGBA* ColorRGBA1064 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1064->setUSE("HAnimSegmentLineColorRGBA");
LineSet1062->setColor(*ColorRGBA1064);

Shape1061->setGeometry(LineSet1062);

HAnimJoint1060->addChild(*Shape1061);

CHAnimSite* HAnimSite1065 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1065->setName("r_carpal_distal_phalanx_3_tip");
HAnimSite1065->setDEF("hanim_r_carpal_distal_phalanx_3_tip");
HAnimSite1065->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor1066 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1066->setDescription("HAnimSite r_carpal_distal_phalanx_3_tip");
HAnimSite1065->addChildren(*TouchSensor1066);

CShape* Shape1067 = (CShape *)(m_pScene.createNode("Shape"));
Shape1067->setUSE("HAnimSiteShape");
HAnimSite1065->addChildren(*Shape1067);

HAnimJoint1060->addChild(*HAnimSite1065);

CHAnimJoint* HAnimJoint1068 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1068->setName("r_carpal_distal_interphalangeal_3");
HAnimJoint1068->setDEF("hanim_r_carpal_distal_interphalangeal_3");
HAnimJoint1068->setCenter(new float[3]{-0.1939,0.7042,-0.0432});
HAnimJoint1068->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1068->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1060->addChildren(*HAnimJoint1068);

HAnimJoint1055->addChildren(*HAnimJoint1060);

HAnimJoint1050->addChildren(*HAnimJoint1055);

HAnimJoint1042->addChildren(*HAnimJoint1050);

HAnimJoint976->addChildren(*HAnimJoint1042);

CHAnimJoint* HAnimJoint1069 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1069->setName("r_midcarpal_4_5");
HAnimJoint1069->setDEF("hanim_r_midcarpal_4_5");
HAnimJoint1069->setCenter(new float[3]{0,1,0});
HAnimJoint1069->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1069->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape1070 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1071 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1071->setVertexCount(new int[1]{1});
CCoordinate* Coordinate1072 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1072->setPoint(new float[3]{-0.1951,0.8049,-0.0732});
LineSet1071->setCoord(*Coordinate1072);

//from r_midcarpal_4_5 to r_carpometacarpal_4
CColorRGBA* ColorRGBA1073 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1073->setUSE("HAnimSegmentLineColorRGBA");
LineSet1071->setColor(*ColorRGBA1073);

Shape1070->setGeometry(LineSet1071);

HAnimJoint1069->addChild(*Shape1070);

CShape* Shape1074 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1075 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1075->setVertexCount(new int[1]{1});
CCoordinate* Coordinate1076 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1076->setPoint(new float[3]{-0.1926,0.8096,-0.0975});
LineSet1075->setCoord(*Coordinate1076);

//from r_midcarpal_4_5 to r_carpometacarpal_5
CColorRGBA* ColorRGBA1077 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1077->setUSE("HAnimSegmentLineColorRGBA");
LineSet1075->setColor(*ColorRGBA1077);

Shape1074->setGeometry(LineSet1075);

HAnimJoint1069->addChild(*Shape1074);

CHAnimSite* HAnimSite1078 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1078->setName("r_metacarpal_phalanx_5_pt");
HAnimSite1078->setDEF("hanim_r_metacarpal_phalanx_5_pt");
HAnimSite1078->setTranslation(new float[3]{-0.1929,0.789,-0.1064});
CTouchSensor* TouchSensor1079 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1079->setDescription("HAnimSite r_metacarpal_phalanx_5_pt");
HAnimSite1078->addChildren(*TouchSensor1079);

CShape* Shape1080 = (CShape *)(m_pScene.createNode("Shape"));
Shape1080->setUSE("HAnimSiteShape");
HAnimSite1078->addChildren(*Shape1080);

HAnimJoint1069->addChild(*HAnimSite1078);

CHAnimJoint* HAnimJoint1081 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1081->setName("r_carpometacarpal_4");
HAnimJoint1081->setDEF("hanim_r_carpometacarpal_4");
HAnimJoint1081->setCenter(new float[3]{-0.1951,0.8049,-0.0732});
HAnimJoint1081->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1081->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape1082 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1083 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1083->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1084 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1084->setPoint(new float[6]{-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732});
LineSet1083->setCoord(*Coordinate1084);

//from r_carpometacarpal_4 to r_metacarpophalangeal_4
CColorRGBA* ColorRGBA1085 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1085->setUSE("HAnimSegmentLineColorRGBA");
LineSet1083->setColor(*ColorRGBA1085);

Shape1082->setGeometry(LineSet1083);

HAnimJoint1081->addChild(*Shape1082);

CHAnimJoint* HAnimJoint1086 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1086->setName("r_metacarpophalangeal_4");
HAnimJoint1086->setDEF("hanim_r_metacarpophalangeal_4");
HAnimJoint1086->setCenter(new float[3]{-0.1951,0.7845,-0.0732});
HAnimJoint1086->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1086->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape1087 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1088 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1088->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1089 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1089->setPoint(new float[6]{-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716});
LineSet1088->setCoord(*Coordinate1089);

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4
CColorRGBA* ColorRGBA1090 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1090->setUSE("HAnimSegmentLineColorRGBA");
LineSet1088->setColor(*ColorRGBA1090);

Shape1087->setGeometry(LineSet1088);

HAnimJoint1086->addChild(*Shape1087);

CHAnimJoint* HAnimJoint1091 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1091->setName("r_carpal_proximal_interphalangeal_4");
HAnimJoint1091->setDEF("hanim_r_carpal_proximal_interphalangeal_4");
HAnimJoint1091->setCenter(new float[3]{-0.192,0.7318,-0.0716});
HAnimJoint1091->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1091->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape1092 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1093 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1093->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1094 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1094->setPoint(new float[6]{-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706});
LineSet1093->setCoord(*Coordinate1094);

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4
CColorRGBA* ColorRGBA1095 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1095->setUSE("HAnimSegmentLineColorRGBA");
LineSet1093->setColor(*ColorRGBA1095);

Shape1092->setGeometry(LineSet1093);

HAnimJoint1091->addChild(*Shape1092);

CHAnimSite* HAnimSite1096 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1096->setName("r_carpal_distal_phalanx_4_tip");
HAnimSite1096->setDEF("hanim_r_carpal_distal_phalanx_4_tip");
HAnimSite1096->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor1097 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1097->setDescription("HAnimSite r_carpal_distal_phalanx_4_tip");
HAnimSite1096->addChildren(*TouchSensor1097);

CShape* Shape1098 = (CShape *)(m_pScene.createNode("Shape"));
Shape1098->setUSE("HAnimSiteShape");
HAnimSite1096->addChildren(*Shape1098);

HAnimJoint1091->addChild(*HAnimSite1096);

CHAnimJoint* HAnimJoint1099 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1099->setName("r_carpal_distal_interphalangeal_4");
HAnimJoint1099->setDEF("hanim_r_carpal_distal_interphalangeal_4");
HAnimJoint1099->setCenter(new float[3]{-0.1908,0.7077,-0.0706});
HAnimJoint1099->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1099->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1091->addChildren(*HAnimJoint1099);

HAnimJoint1086->addChildren(*HAnimJoint1091);

HAnimJoint1081->addChildren(*HAnimJoint1086);

HAnimJoint1069->addChildren(*HAnimJoint1081);

CHAnimJoint* HAnimJoint1100 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1100->setName("r_carpometacarpal_5");
HAnimJoint1100->setDEF("hanim_r_carpometacarpal_5");
HAnimJoint1100->setCenter(new float[3]{-0.1926,0.8096,-0.0975});
HAnimJoint1100->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1100->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape1101 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1102 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1102->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1103 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1103->setPoint(new float[6]{-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975});
LineSet1102->setCoord(*Coordinate1103);

//from r_carpometacarpal_5 to r_metacarpophalangeal_5
CColorRGBA* ColorRGBA1104 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1104->setUSE("HAnimSegmentLineColorRGBA");
LineSet1102->setColor(*ColorRGBA1104);

Shape1101->setGeometry(LineSet1102);

HAnimJoint1100->addChild(*Shape1101);

CHAnimJoint* HAnimJoint1105 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1105->setName("r_metacarpophalangeal_5");
HAnimJoint1105->setDEF("hanim_r_metacarpophalangeal_5");
HAnimJoint1105->setCenter(new float[3]{-0.1926,0.7896,-0.0975});
HAnimJoint1105->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1105->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape1106 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1107 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1107->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1108 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1108->setPoint(new float[6]{-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963});
LineSet1107->setCoord(*Coordinate1108);

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5
CColorRGBA* ColorRGBA1109 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1109->setUSE("HAnimSegmentLineColorRGBA");
LineSet1107->setColor(*ColorRGBA1109);

Shape1106->setGeometry(LineSet1107);

HAnimJoint1105->addChild(*Shape1106);

CHAnimJoint* HAnimJoint1110 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1110->setName("r_carpal_proximal_interphalangeal_5");
HAnimJoint1110->setDEF("hanim_r_carpal_proximal_interphalangeal_5");
HAnimJoint1110->setCenter(new float[3]{-0.1902,0.7483,-0.0963});
HAnimJoint1110->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1110->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape1111 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1112 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1112->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1113 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1113->setPoint(new float[6]{-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096});
LineSet1112->setCoord(*Coordinate1113);

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5
CColorRGBA* ColorRGBA1114 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1114->setUSE("HAnimSegmentLineColorRGBA");
LineSet1112->setColor(*ColorRGBA1114);

Shape1111->setGeometry(LineSet1112);

HAnimJoint1110->addChild(*Shape1111);

CHAnimSite* HAnimSite1115 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1115->setName("r_carpal_distal_phalanx_5_tip");
HAnimSite1115->setDEF("hanim_r_carpal_distal_phalanx_5_tip");
HAnimSite1115->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor1116 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1116->setDescription("HAnimSite r_carpal_distal_phalanx_5_tip");
HAnimSite1115->addChildren(*TouchSensor1116);

CShape* Shape1117 = (CShape *)(m_pScene.createNode("Shape"));
Shape1117->setUSE("HAnimSiteShape");
HAnimSite1115->addChildren(*Shape1117);

HAnimJoint1110->addChild(*HAnimSite1115);

CHAnimJoint* HAnimJoint1118 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1118->setName("r_carpal_distal_interphalangeal_5");
HAnimJoint1118->setDEF("hanim_r_carpal_distal_interphalangeal_5");
HAnimJoint1118->setCenter(new float[3]{-0.1908,0.754,-0.096});
HAnimJoint1118->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1118->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1110->addChildren(*HAnimJoint1118);

HAnimJoint1105->addChildren(*HAnimJoint1110);

HAnimJoint1100->addChildren(*HAnimJoint1105);

HAnimJoint1069->addChildren(*HAnimJoint1100);

HAnimJoint976->addChildren(*HAnimJoint1069);

HAnimJoint968->addChildren(*HAnimJoint976);

HAnimJoint951->addChildren(*HAnimJoint968);

HAnimJoint940->addChildren(*HAnimJoint951);

HAnimJoint935->addChildren(*HAnimJoint940);

HAnimJoint583->addChildren(*HAnimJoint935);

HAnimJoint572->addChildren(*HAnimJoint583);

HAnimJoint567->addChildren(*HAnimJoint572);

HAnimJoint562->addChildren(*HAnimJoint567);

HAnimJoint557->addChildren(*HAnimJoint562);

HAnimJoint549->addChildren(*HAnimJoint557);

HAnimJoint532->addChildren(*HAnimJoint549);

HAnimJoint527->addChildren(*HAnimJoint532);

HAnimJoint522->addChildren(*HAnimJoint527);

HAnimJoint511->addChildren(*HAnimJoint522);

HAnimJoint503->addChildren(*HAnimJoint511);

HAnimJoint498->addChildren(*HAnimJoint503);

HAnimJoint493->addChildren(*HAnimJoint498);

HAnimJoint488->addChildren(*HAnimJoint493);

HAnimJoint474->addChildren(*HAnimJoint488);

HAnimJoint469->addChildren(*HAnimJoint474);

HAnimJoint464->addChildren(*HAnimJoint469);

HAnimJoint39->addChildren(*HAnimJoint464);

HAnimHumanoid38->setSkeleton(*HAnimJoint39);

CHAnimJoint* HAnimJoint1119 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1119->setUSE("hanim_humanoid_root");
HAnimHumanoid38->addJoints(*HAnimJoint1119);

CHAnimJoint* HAnimJoint1120 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1120->setUSE("hanim_sacroiliac");
HAnimHumanoid38->addJoints(*HAnimJoint1120);

CHAnimJoint* HAnimJoint1121 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1121->setUSE("hanim_l_hip");
HAnimHumanoid38->addJoints(*HAnimJoint1121);

CHAnimJoint* HAnimJoint1122 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1122->setUSE("hanim_l_knee");
HAnimHumanoid38->addJoints(*HAnimJoint1122);

CHAnimJoint* HAnimJoint1123 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1123->setUSE("hanim_l_talocrural");
HAnimHumanoid38->addJoints(*HAnimJoint1123);

CHAnimJoint* HAnimJoint1124 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1124->setUSE("hanim_l_talocalcaneonavicular");
HAnimHumanoid38->addJoints(*HAnimJoint1124);

CHAnimJoint* HAnimJoint1125 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1125->setUSE("hanim_l_cuneonavicular_1");
HAnimHumanoid38->addJoints(*HAnimJoint1125);

CHAnimJoint* HAnimJoint1126 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1126->setUSE("hanim_l_tarsometatarsal_1");
HAnimHumanoid38->addJoints(*HAnimJoint1126);

CHAnimJoint* HAnimJoint1127 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1127->setUSE("hanim_l_metatarsophalangeal_1");
HAnimHumanoid38->addJoints(*HAnimJoint1127);

CHAnimJoint* HAnimJoint1128 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1128->setUSE("hanim_l_tarsal_interphalangeal_1");
HAnimHumanoid38->addJoints(*HAnimJoint1128);

CHAnimJoint* HAnimJoint1129 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1129->setUSE("hanim_l_cuneonavicular_2");
HAnimHumanoid38->addJoints(*HAnimJoint1129);

CHAnimJoint* HAnimJoint1130 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1130->setUSE("hanim_l_tarsometatarsal_2");
HAnimHumanoid38->addJoints(*HAnimJoint1130);

CHAnimJoint* HAnimJoint1131 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1131->setUSE("hanim_l_metatarsophalangeal_2");
HAnimHumanoid38->addJoints(*HAnimJoint1131);

CHAnimJoint* HAnimJoint1132 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1132->setUSE("hanim_l_tarsal_proximal_interphalangeal_2");
HAnimHumanoid38->addJoints(*HAnimJoint1132);

CHAnimJoint* HAnimJoint1133 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1133->setUSE("hanim_l_tarsal_distal_interphalangeal_2");
HAnimHumanoid38->addJoints(*HAnimJoint1133);

CHAnimJoint* HAnimJoint1134 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1134->setUSE("hanim_l_cuneonavicular_3");
HAnimHumanoid38->addJoints(*HAnimJoint1134);

CHAnimJoint* HAnimJoint1135 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1135->setUSE("hanim_l_tarsometatarsal_3");
HAnimHumanoid38->addJoints(*HAnimJoint1135);

CHAnimJoint* HAnimJoint1136 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1136->setUSE("hanim_l_metatarsophalangeal_3");
HAnimHumanoid38->addJoints(*HAnimJoint1136);

CHAnimJoint* HAnimJoint1137 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1137->setUSE("hanim_l_tarsal_proximal_interphalangeal_3");
HAnimHumanoid38->addJoints(*HAnimJoint1137);

CHAnimJoint* HAnimJoint1138 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1138->setUSE("hanim_l_tarsal_distal_interphalangeal_3");
HAnimHumanoid38->addJoints(*HAnimJoint1138);

CHAnimJoint* HAnimJoint1139 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1139->setUSE("hanim_l_calcaneocuboid");
HAnimHumanoid38->addJoints(*HAnimJoint1139);

CHAnimJoint* HAnimJoint1140 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1140->setUSE("hanim_l_transversetarsal");
HAnimHumanoid38->addJoints(*HAnimJoint1140);

CHAnimJoint* HAnimJoint1141 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1141->setUSE("hanim_l_tarsometatarsal_4");
HAnimHumanoid38->addJoints(*HAnimJoint1141);

CHAnimJoint* HAnimJoint1142 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1142->setUSE("hanim_l_metatarsophalangeal_4");
HAnimHumanoid38->addJoints(*HAnimJoint1142);

CHAnimJoint* HAnimJoint1143 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1143->setUSE("hanim_l_tarsal_proximal_interphalangeal_4");
HAnimHumanoid38->addJoints(*HAnimJoint1143);

CHAnimJoint* HAnimJoint1144 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1144->setUSE("hanim_l_tarsal_distal_interphalangeal_4");
HAnimHumanoid38->addJoints(*HAnimJoint1144);

CHAnimJoint* HAnimJoint1145 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1145->setUSE("hanim_l_tarsometatarsal_5");
HAnimHumanoid38->addJoints(*HAnimJoint1145);

CHAnimJoint* HAnimJoint1146 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1146->setUSE("hanim_l_metatarsophalangeal_5");
HAnimHumanoid38->addJoints(*HAnimJoint1146);

CHAnimJoint* HAnimJoint1147 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1147->setUSE("hanim_l_tarsal_proximal_interphalangeal_5");
HAnimHumanoid38->addJoints(*HAnimJoint1147);

CHAnimJoint* HAnimJoint1148 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1148->setUSE("hanim_l_tarsal_distal_interphalangeal_5");
HAnimHumanoid38->addJoints(*HAnimJoint1148);

CHAnimJoint* HAnimJoint1149 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1149->setUSE("hanim_r_hip");
HAnimHumanoid38->addJoints(*HAnimJoint1149);

CHAnimJoint* HAnimJoint1150 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1150->setUSE("hanim_r_knee");
HAnimHumanoid38->addJoints(*HAnimJoint1150);

CHAnimJoint* HAnimJoint1151 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1151->setUSE("hanim_r_talocrural");
HAnimHumanoid38->addJoints(*HAnimJoint1151);

CHAnimJoint* HAnimJoint1152 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1152->setUSE("hanim_r_talocalcaneonavicular");
HAnimHumanoid38->addJoints(*HAnimJoint1152);

CHAnimJoint* HAnimJoint1153 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1153->setUSE("hanim_r_cuneonavicular_1");
HAnimHumanoid38->addJoints(*HAnimJoint1153);

CHAnimJoint* HAnimJoint1154 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1154->setUSE("hanim_r_tarsometatarsal_1");
HAnimHumanoid38->addJoints(*HAnimJoint1154);

CHAnimJoint* HAnimJoint1155 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1155->setUSE("hanim_r_metatarsophalangeal_1");
HAnimHumanoid38->addJoints(*HAnimJoint1155);

CHAnimJoint* HAnimJoint1156 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1156->setUSE("hanim_r_tarsal_interphalangeal_1");
HAnimHumanoid38->addJoints(*HAnimJoint1156);

CHAnimJoint* HAnimJoint1157 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1157->setUSE("hanim_r_cuneonavicular_2");
HAnimHumanoid38->addJoints(*HAnimJoint1157);

CHAnimJoint* HAnimJoint1158 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1158->setUSE("hanim_r_tarsometatarsal_2");
HAnimHumanoid38->addJoints(*HAnimJoint1158);

CHAnimJoint* HAnimJoint1159 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1159->setUSE("hanim_r_metatarsophalangeal_2");
HAnimHumanoid38->addJoints(*HAnimJoint1159);

CHAnimJoint* HAnimJoint1160 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1160->setUSE("hanim_r_tarsal_proximal_interphalangeal_2");
HAnimHumanoid38->addJoints(*HAnimJoint1160);

CHAnimJoint* HAnimJoint1161 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1161->setUSE("hanim_r_tarsal_distal_interphalangeal_2");
HAnimHumanoid38->addJoints(*HAnimJoint1161);

CHAnimJoint* HAnimJoint1162 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1162->setUSE("hanim_r_cuneonavicular_3");
HAnimHumanoid38->addJoints(*HAnimJoint1162);

CHAnimJoint* HAnimJoint1163 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1163->setUSE("hanim_r_tarsometatarsal_3");
HAnimHumanoid38->addJoints(*HAnimJoint1163);

CHAnimJoint* HAnimJoint1164 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1164->setUSE("hanim_r_metatarsophalangeal_3");
HAnimHumanoid38->addJoints(*HAnimJoint1164);

CHAnimJoint* HAnimJoint1165 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1165->setUSE("hanim_r_tarsal_proximal_interphalangeal_3");
HAnimHumanoid38->addJoints(*HAnimJoint1165);

CHAnimJoint* HAnimJoint1166 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1166->setUSE("hanim_r_tarsal_distal_interphalangeal_3");
HAnimHumanoid38->addJoints(*HAnimJoint1166);

CHAnimJoint* HAnimJoint1167 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1167->setUSE("hanim_r_calcaneocuboid");
HAnimHumanoid38->addJoints(*HAnimJoint1167);

CHAnimJoint* HAnimJoint1168 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1168->setUSE("hanim_r_transversetarsal");
HAnimHumanoid38->addJoints(*HAnimJoint1168);

CHAnimJoint* HAnimJoint1169 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1169->setUSE("hanim_r_tarsometatarsal_4");
HAnimHumanoid38->addJoints(*HAnimJoint1169);

CHAnimJoint* HAnimJoint1170 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1170->setUSE("hanim_r_metatarsophalangeal_4");
HAnimHumanoid38->addJoints(*HAnimJoint1170);

CHAnimJoint* HAnimJoint1171 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1171->setUSE("hanim_r_tarsal_proximal_interphalangeal_4");
HAnimHumanoid38->addJoints(*HAnimJoint1171);

CHAnimJoint* HAnimJoint1172 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1172->setUSE("hanim_r_tarsal_distal_interphalangeal_4");
HAnimHumanoid38->addJoints(*HAnimJoint1172);

CHAnimJoint* HAnimJoint1173 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1173->setUSE("hanim_r_tarsometatarsal_5");
HAnimHumanoid38->addJoints(*HAnimJoint1173);

CHAnimJoint* HAnimJoint1174 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1174->setUSE("hanim_r_metatarsophalangeal_5");
HAnimHumanoid38->addJoints(*HAnimJoint1174);

CHAnimJoint* HAnimJoint1175 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1175->setUSE("hanim_r_tarsal_proximal_interphalangeal_5");
HAnimHumanoid38->addJoints(*HAnimJoint1175);

CHAnimJoint* HAnimJoint1176 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1176->setUSE("hanim_r_tarsal_distal_interphalangeal_5");
HAnimHumanoid38->addJoints(*HAnimJoint1176);

CHAnimJoint* HAnimJoint1177 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1177->setUSE("hanim_vl5");
HAnimHumanoid38->addJoints(*HAnimJoint1177);

CHAnimJoint* HAnimJoint1178 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1178->setUSE("hanim_vl4");
HAnimHumanoid38->addJoints(*HAnimJoint1178);

CHAnimJoint* HAnimJoint1179 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1179->setUSE("hanim_vl3");
HAnimHumanoid38->addJoints(*HAnimJoint1179);

CHAnimJoint* HAnimJoint1180 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1180->setUSE("hanim_vl2");
HAnimHumanoid38->addJoints(*HAnimJoint1180);

CHAnimJoint* HAnimJoint1181 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1181->setUSE("hanim_vl1");
HAnimHumanoid38->addJoints(*HAnimJoint1181);

CHAnimJoint* HAnimJoint1182 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1182->setUSE("hanim_vt12");
HAnimHumanoid38->addJoints(*HAnimJoint1182);

CHAnimJoint* HAnimJoint1183 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1183->setUSE("hanim_vt11");
HAnimHumanoid38->addJoints(*HAnimJoint1183);

CHAnimJoint* HAnimJoint1184 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1184->setUSE("hanim_vt10");
HAnimHumanoid38->addJoints(*HAnimJoint1184);

CHAnimJoint* HAnimJoint1185 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1185->setUSE("hanim_vt9");
HAnimHumanoid38->addJoints(*HAnimJoint1185);

CHAnimJoint* HAnimJoint1186 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1186->setUSE("hanim_vt8");
HAnimHumanoid38->addJoints(*HAnimJoint1186);

CHAnimJoint* HAnimJoint1187 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1187->setUSE("hanim_vt7");
HAnimHumanoid38->addJoints(*HAnimJoint1187);

CHAnimJoint* HAnimJoint1188 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1188->setUSE("hanim_vt6");
HAnimHumanoid38->addJoints(*HAnimJoint1188);

CHAnimJoint* HAnimJoint1189 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1189->setUSE("hanim_vt5");
HAnimHumanoid38->addJoints(*HAnimJoint1189);

CHAnimJoint* HAnimJoint1190 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1190->setUSE("hanim_vt4");
HAnimHumanoid38->addJoints(*HAnimJoint1190);

CHAnimJoint* HAnimJoint1191 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1191->setUSE("hanim_vt3");
HAnimHumanoid38->addJoints(*HAnimJoint1191);

CHAnimJoint* HAnimJoint1192 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1192->setUSE("hanim_vt2");
HAnimHumanoid38->addJoints(*HAnimJoint1192);

CHAnimJoint* HAnimJoint1193 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1193->setUSE("hanim_vt1");
HAnimHumanoid38->addJoints(*HAnimJoint1193);

CHAnimJoint* HAnimJoint1194 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1194->setUSE("hanim_vc7");
HAnimHumanoid38->addJoints(*HAnimJoint1194);

CHAnimJoint* HAnimJoint1195 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1195->setUSE("hanim_vc6");
HAnimHumanoid38->addJoints(*HAnimJoint1195);

CHAnimJoint* HAnimJoint1196 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1196->setUSE("hanim_vc5");
HAnimHumanoid38->addJoints(*HAnimJoint1196);

CHAnimJoint* HAnimJoint1197 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1197->setUSE("hanim_vc4");
HAnimHumanoid38->addJoints(*HAnimJoint1197);

CHAnimJoint* HAnimJoint1198 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1198->setUSE("hanim_vc3");
HAnimHumanoid38->addJoints(*HAnimJoint1198);

CHAnimJoint* HAnimJoint1199 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1199->setUSE("hanim_vc2");
HAnimHumanoid38->addJoints(*HAnimJoint1199);

CHAnimJoint* HAnimJoint1200 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1200->setUSE("hanim_vc1");
HAnimHumanoid38->addJoints(*HAnimJoint1200);

CHAnimJoint* HAnimJoint1201 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1201->setUSE("hanim_skullbase");
HAnimHumanoid38->addJoints(*HAnimJoint1201);

CHAnimJoint* HAnimJoint1202 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1202->setUSE("hanim_l_eyelid_joint");
HAnimHumanoid38->addJoints(*HAnimJoint1202);

CHAnimJoint* HAnimJoint1203 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1203->setUSE("hanim_r_eyelid_joint");
HAnimHumanoid38->addJoints(*HAnimJoint1203);

CHAnimJoint* HAnimJoint1204 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1204->setUSE("hanim_l_eyeball_joint");
HAnimHumanoid38->addJoints(*HAnimJoint1204);

CHAnimJoint* HAnimJoint1205 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1205->setUSE("hanim_r_eyeball_joint");
HAnimHumanoid38->addJoints(*HAnimJoint1205);

CHAnimJoint* HAnimJoint1206 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1206->setUSE("hanim_l_eyebrow_joint");
HAnimHumanoid38->addJoints(*HAnimJoint1206);

CHAnimJoint* HAnimJoint1207 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1207->setUSE("hanim_r_eyebrow_joint");
HAnimHumanoid38->addJoints(*HAnimJoint1207);

CHAnimJoint* HAnimJoint1208 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1208->setUSE("hanim_temporomandibular");
HAnimHumanoid38->addJoints(*HAnimJoint1208);

CHAnimJoint* HAnimJoint1209 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1209->setUSE("hanim_l_sternoclavicular");
HAnimHumanoid38->addJoints(*HAnimJoint1209);

CHAnimJoint* HAnimJoint1210 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1210->setUSE("hanim_l_acromioclavicular");
HAnimHumanoid38->addJoints(*HAnimJoint1210);

CHAnimJoint* HAnimJoint1211 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1211->setUSE("hanim_l_shoulder");
HAnimHumanoid38->addJoints(*HAnimJoint1211);

CHAnimJoint* HAnimJoint1212 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1212->setUSE("hanim_l_elbow");
HAnimHumanoid38->addJoints(*HAnimJoint1212);

CHAnimJoint* HAnimJoint1213 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1213->setUSE("hanim_l_radiocarpal");
HAnimHumanoid38->addJoints(*HAnimJoint1213);

CHAnimJoint* HAnimJoint1214 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1214->setUSE("hanim_l_midcarpal_1");
HAnimHumanoid38->addJoints(*HAnimJoint1214);

CHAnimJoint* HAnimJoint1215 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1215->setUSE("hanim_l_carpometacarpal_1");
HAnimHumanoid38->addJoints(*HAnimJoint1215);

CHAnimJoint* HAnimJoint1216 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1216->setUSE("hanim_l_metacarpophalangeal_1");
HAnimHumanoid38->addJoints(*HAnimJoint1216);

CHAnimJoint* HAnimJoint1217 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1217->setUSE("hanim_l_carpal_interphalangeal_1");
HAnimHumanoid38->addJoints(*HAnimJoint1217);

CHAnimJoint* HAnimJoint1218 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1218->setUSE("hanim_l_midcarpal_2");
HAnimHumanoid38->addJoints(*HAnimJoint1218);

CHAnimJoint* HAnimJoint1219 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1219->setUSE("hanim_l_carpometacarpal_2");
HAnimHumanoid38->addJoints(*HAnimJoint1219);

CHAnimJoint* HAnimJoint1220 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1220->setUSE("hanim_l_metacarpophalangeal_2");
HAnimHumanoid38->addJoints(*HAnimJoint1220);

CHAnimJoint* HAnimJoint1221 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1221->setUSE("hanim_l_carpal_proximal_interphalangeal_2");
HAnimHumanoid38->addJoints(*HAnimJoint1221);

CHAnimJoint* HAnimJoint1222 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1222->setUSE("hanim_l_carpal_distal_interphalangeal_2");
HAnimHumanoid38->addJoints(*HAnimJoint1222);

CHAnimJoint* HAnimJoint1223 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1223->setUSE("hanim_l_midcarpal_3");
HAnimHumanoid38->addJoints(*HAnimJoint1223);

CHAnimJoint* HAnimJoint1224 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1224->setUSE("hanim_l_carpometacarpal_3");
HAnimHumanoid38->addJoints(*HAnimJoint1224);

CHAnimJoint* HAnimJoint1225 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1225->setUSE("hanim_l_metacarpophalangeal_3");
HAnimHumanoid38->addJoints(*HAnimJoint1225);

CHAnimJoint* HAnimJoint1226 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1226->setUSE("hanim_l_carpal_proximal_interphalangeal_3");
HAnimHumanoid38->addJoints(*HAnimJoint1226);

CHAnimJoint* HAnimJoint1227 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1227->setUSE("hanim_l_carpal_distal_interphalangeal_3");
HAnimHumanoid38->addJoints(*HAnimJoint1227);

CHAnimJoint* HAnimJoint1228 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1228->setUSE("hanim_l_midcarpal_4_5");
HAnimHumanoid38->addJoints(*HAnimJoint1228);

CHAnimJoint* HAnimJoint1229 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1229->setUSE("hanim_l_carpometacarpal_4");
HAnimHumanoid38->addJoints(*HAnimJoint1229);

CHAnimJoint* HAnimJoint1230 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1230->setUSE("hanim_l_metacarpophalangeal_4");
HAnimHumanoid38->addJoints(*HAnimJoint1230);

CHAnimJoint* HAnimJoint1231 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1231->setUSE("hanim_l_carpal_proximal_interphalangeal_4");
HAnimHumanoid38->addJoints(*HAnimJoint1231);

CHAnimJoint* HAnimJoint1232 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1232->setUSE("hanim_l_carpal_distal_interphalangeal_4");
HAnimHumanoid38->addJoints(*HAnimJoint1232);

CHAnimJoint* HAnimJoint1233 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1233->setUSE("hanim_l_carpometacarpal_5");
HAnimHumanoid38->addJoints(*HAnimJoint1233);

CHAnimJoint* HAnimJoint1234 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1234->setUSE("hanim_l_metacarpophalangeal_5");
HAnimHumanoid38->addJoints(*HAnimJoint1234);

CHAnimJoint* HAnimJoint1235 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1235->setUSE("hanim_l_carpal_proximal_interphalangeal_5");
HAnimHumanoid38->addJoints(*HAnimJoint1235);

CHAnimJoint* HAnimJoint1236 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1236->setUSE("hanim_l_carpal_distal_interphalangeal_5");
HAnimHumanoid38->addJoints(*HAnimJoint1236);

CHAnimJoint* HAnimJoint1237 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1237->setUSE("hanim_r_sternoclavicular");
HAnimHumanoid38->addJoints(*HAnimJoint1237);

CHAnimJoint* HAnimJoint1238 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1238->setUSE("hanim_r_acromioclavicular");
HAnimHumanoid38->addJoints(*HAnimJoint1238);

CHAnimJoint* HAnimJoint1239 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1239->setUSE("hanim_r_shoulder");
HAnimHumanoid38->addJoints(*HAnimJoint1239);

CHAnimJoint* HAnimJoint1240 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1240->setUSE("hanim_r_elbow");
HAnimHumanoid38->addJoints(*HAnimJoint1240);

CHAnimJoint* HAnimJoint1241 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1241->setUSE("hanim_r_radiocarpal");
HAnimHumanoid38->addJoints(*HAnimJoint1241);

CHAnimJoint* HAnimJoint1242 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1242->setUSE("hanim_r_midcarpal_1");
HAnimHumanoid38->addJoints(*HAnimJoint1242);

CHAnimJoint* HAnimJoint1243 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1243->setUSE("hanim_r_carpometacarpal_1");
HAnimHumanoid38->addJoints(*HAnimJoint1243);

CHAnimJoint* HAnimJoint1244 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1244->setUSE("hanim_r_metacarpophalangeal_1");
HAnimHumanoid38->addJoints(*HAnimJoint1244);

CHAnimJoint* HAnimJoint1245 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1245->setUSE("hanim_r_carpal_interphalangeal_1");
HAnimHumanoid38->addJoints(*HAnimJoint1245);

CHAnimJoint* HAnimJoint1246 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1246->setUSE("hanim_r_midcarpal_2");
HAnimHumanoid38->addJoints(*HAnimJoint1246);

CHAnimJoint* HAnimJoint1247 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1247->setUSE("hanim_r_carpometacarpal_2");
HAnimHumanoid38->addJoints(*HAnimJoint1247);

CHAnimJoint* HAnimJoint1248 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1248->setUSE("hanim_r_metacarpophalangeal_2");
HAnimHumanoid38->addJoints(*HAnimJoint1248);

CHAnimJoint* HAnimJoint1249 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1249->setUSE("hanim_r_carpal_proximal_interphalangeal_2");
HAnimHumanoid38->addJoints(*HAnimJoint1249);

CHAnimJoint* HAnimJoint1250 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1250->setUSE("hanim_r_carpal_distal_interphalangeal_2");
HAnimHumanoid38->addJoints(*HAnimJoint1250);

CHAnimJoint* HAnimJoint1251 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1251->setUSE("hanim_r_midcarpal_3");
HAnimHumanoid38->addJoints(*HAnimJoint1251);

CHAnimJoint* HAnimJoint1252 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1252->setUSE("hanim_r_carpometacarpal_3");
HAnimHumanoid38->addJoints(*HAnimJoint1252);

CHAnimJoint* HAnimJoint1253 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1253->setUSE("hanim_r_metacarpophalangeal_3");
HAnimHumanoid38->addJoints(*HAnimJoint1253);

CHAnimJoint* HAnimJoint1254 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1254->setUSE("hanim_r_carpal_proximal_interphalangeal_3");
HAnimHumanoid38->addJoints(*HAnimJoint1254);

CHAnimJoint* HAnimJoint1255 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1255->setUSE("hanim_r_carpal_distal_interphalangeal_3");
HAnimHumanoid38->addJoints(*HAnimJoint1255);

CHAnimJoint* HAnimJoint1256 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1256->setUSE("hanim_r_midcarpal_4_5");
HAnimHumanoid38->addJoints(*HAnimJoint1256);

CHAnimJoint* HAnimJoint1257 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1257->setUSE("hanim_r_carpometacarpal_4");
HAnimHumanoid38->addJoints(*HAnimJoint1257);

CHAnimJoint* HAnimJoint1258 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1258->setUSE("hanim_r_metacarpophalangeal_4");
HAnimHumanoid38->addJoints(*HAnimJoint1258);

CHAnimJoint* HAnimJoint1259 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1259->setUSE("hanim_r_carpal_proximal_interphalangeal_4");
HAnimHumanoid38->addJoints(*HAnimJoint1259);

CHAnimJoint* HAnimJoint1260 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1260->setUSE("hanim_r_carpal_distal_interphalangeal_4");
HAnimHumanoid38->addJoints(*HAnimJoint1260);

CHAnimJoint* HAnimJoint1261 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1261->setUSE("hanim_r_carpometacarpal_5");
HAnimHumanoid38->addJoints(*HAnimJoint1261);

CHAnimJoint* HAnimJoint1262 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1262->setUSE("hanim_r_metacarpophalangeal_5");
HAnimHumanoid38->addJoints(*HAnimJoint1262);

CHAnimJoint* HAnimJoint1263 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1263->setUSE("hanim_r_carpal_proximal_interphalangeal_5");
HAnimHumanoid38->addJoints(*HAnimJoint1263);

CHAnimJoint* HAnimJoint1264 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1264->setUSE("hanim_r_carpal_distal_interphalangeal_5");
HAnimHumanoid38->addJoints(*HAnimJoint1264);

CHAnimSite* HAnimSite1265 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1265->setUSE("hanim_buttocks_standing_wall_contact_point_pt");
HAnimHumanoid38->setSites(*HAnimSite1265);

CHAnimSite* HAnimSite1266 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1266->setUSE("hanim_crotch_pt");
HAnimHumanoid38->setSites(*HAnimSite1266);

CHAnimSite* HAnimSite1267 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1267->setUSE("hanim_l_asis_pt");
HAnimHumanoid38->setSites(*HAnimSite1267);

CHAnimSite* HAnimSite1268 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1268->setUSE("hanim_l_iliocristale_pt");
HAnimHumanoid38->setSites(*HAnimSite1268);

CHAnimSite* HAnimSite1269 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1269->setUSE("hanim_l_psis_pt");
HAnimHumanoid38->setSites(*HAnimSite1269);

CHAnimSite* HAnimSite1270 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1270->setUSE("hanim_l_trochanterion_pt");
HAnimHumanoid38->setSites(*HAnimSite1270);

CHAnimSite* HAnimSite1271 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1271->setUSE("hanim_r_asis_pt");
HAnimHumanoid38->setSites(*HAnimSite1271);

CHAnimSite* HAnimSite1272 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1272->setUSE("hanim_r_iliocristale_pt");
HAnimHumanoid38->setSites(*HAnimSite1272);

CHAnimSite* HAnimSite1273 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1273->setUSE("hanim_r_psis_pt");
HAnimHumanoid38->setSites(*HAnimSite1273);

CHAnimSite* HAnimSite1274 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1274->setUSE("hanim_r_trochanterion_pt");
HAnimHumanoid38->setSites(*HAnimSite1274);

CHAnimSite* HAnimSite1275 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1275->setUSE("hanim_navel_pt");
HAnimHumanoid38->setSites(*HAnimSite1275);

CHAnimSite* HAnimSite1276 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1276->setUSE("hanim_waist_preferred_anterior_pt");
HAnimHumanoid38->setSites(*HAnimSite1276);

CHAnimSite* HAnimSite1277 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1277->setUSE("hanim_waist_preferred_posterior_pt");
HAnimHumanoid38->setSites(*HAnimSite1277);

CHAnimSite* HAnimSite1278 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1278->setUSE("hanim_l_femoral_lateral_epicondyles_pt");
HAnimHumanoid38->setSites(*HAnimSite1278);

CHAnimSite* HAnimSite1279 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1279->setUSE("hanim_l_femoral_medial_epicondyles_pt");
HAnimHumanoid38->setSites(*HAnimSite1279);

CHAnimSite* HAnimSite1280 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1280->setUSE("hanim_l_knee_crease_pt");
HAnimHumanoid38->setSites(*HAnimSite1280);

CHAnimSite* HAnimSite1281 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1281->setUSE("hanim_l_suprapatella_pt");
HAnimHumanoid38->setSites(*HAnimSite1281);

CHAnimSite* HAnimSite1282 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1282->setUSE("hanim_r_femoral_lateral_epicondyles_pt");
HAnimHumanoid38->setSites(*HAnimSite1282);

CHAnimSite* HAnimSite1283 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1283->setUSE("hanim_r_femoral_medial_epicondyles_pt");
HAnimHumanoid38->setSites(*HAnimSite1283);

CHAnimSite* HAnimSite1284 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1284->setUSE("hanim_r_knee_crease_pt");
HAnimHumanoid38->setSites(*HAnimSite1284);

CHAnimSite* HAnimSite1285 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1285->setUSE("hanim_r_suprapatella_pt");
HAnimHumanoid38->setSites(*HAnimSite1285);

CHAnimSite* HAnimSite1286 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1286->setUSE("hanim_l_lateral_malleolus_pt");
HAnimHumanoid38->setSites(*HAnimSite1286);

CHAnimSite* HAnimSite1287 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1287->setUSE("hanim_l_medial_malleolus_pt");
HAnimHumanoid38->setSites(*HAnimSite1287);

CHAnimSite* HAnimSite1288 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1288->setUSE("hanim_l_tibiale_pt");
HAnimHumanoid38->setSites(*HAnimSite1288);

CHAnimSite* HAnimSite1289 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1289->setUSE("hanim_l_calcaneus_posterior_pt");
HAnimHumanoid38->setSites(*HAnimSite1289);

CHAnimSite* HAnimSite1290 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1290->setUSE("hanim_l_sphyrion_pt");
HAnimHumanoid38->setSites(*HAnimSite1290);

CHAnimSite* HAnimSite1291 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1291->setUSE("hanim_l_metatarsal_phalanx_1_pt");
HAnimHumanoid38->setSites(*HAnimSite1291);

CHAnimSite* HAnimSite1292 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1292->setUSE("hanim_l_tarsal_distal_phalanx_1_tip");
HAnimHumanoid38->setSites(*HAnimSite1292);

CHAnimSite* HAnimSite1293 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1293->setUSE("hanim_l_tarsal_distal_phalanx_2_tip");
HAnimHumanoid38->setSites(*HAnimSite1293);

CHAnimSite* HAnimSite1294 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1294->setUSE("hanim_l_tarsal_distal_phalanx_3_tip");
HAnimHumanoid38->setSites(*HAnimSite1294);

CHAnimSite* HAnimSite1295 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1295->setUSE("hanim_l_tarsal_distal_phalanx_4_tip");
HAnimHumanoid38->setSites(*HAnimSite1295);

CHAnimSite* HAnimSite1296 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1296->setUSE("hanim_l_metatarsal_phalanx_5_pt");
HAnimHumanoid38->setSites(*HAnimSite1296);

CHAnimSite* HAnimSite1297 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1297->setUSE("hanim_l_tarsal_distal_phalanx_5_tip");
HAnimHumanoid38->setSites(*HAnimSite1297);

CHAnimSite* HAnimSite1298 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1298->setUSE("hanim_r_lateral_malleolus_pt");
HAnimHumanoid38->setSites(*HAnimSite1298);

CHAnimSite* HAnimSite1299 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1299->setUSE("hanim_r_medial_malleolus_pt");
HAnimHumanoid38->setSites(*HAnimSite1299);

CHAnimSite* HAnimSite1300 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1300->setUSE("hanim_r_tibiale_pt");
HAnimHumanoid38->setSites(*HAnimSite1300);

CHAnimSite* HAnimSite1301 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1301->setUSE("hanim_r_calcaneus_posterior_pt");
HAnimHumanoid38->setSites(*HAnimSite1301);

CHAnimSite* HAnimSite1302 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1302->setUSE("hanim_r_sphyrion_pt");
HAnimHumanoid38->setSites(*HAnimSite1302);

CHAnimSite* HAnimSite1303 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1303->setUSE("hanim_r_metatarsal_phalanx_1_pt");
HAnimHumanoid38->setSites(*HAnimSite1303);

CHAnimSite* HAnimSite1304 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1304->setUSE("hanim_r_tarsal_distal_phalanx_1_tip");
HAnimHumanoid38->setSites(*HAnimSite1304);

CHAnimSite* HAnimSite1305 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1305->setUSE("hanim_r_tarsal_distal_phalanx_2_tip");
HAnimHumanoid38->setSites(*HAnimSite1305);

CHAnimSite* HAnimSite1306 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1306->setUSE("hanim_r_tarsal_distal_phalanx_3_tip");
HAnimHumanoid38->setSites(*HAnimSite1306);

CHAnimSite* HAnimSite1307 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1307->setUSE("hanim_r_tarsal_distal_phalanx_4_tip");
HAnimHumanoid38->setSites(*HAnimSite1307);

CHAnimSite* HAnimSite1308 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1308->setUSE("hanim_r_metatarsal_phalanx_5_pt");
HAnimHumanoid38->setSites(*HAnimSite1308);

CHAnimSite* HAnimSite1309 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1309->setUSE("hanim_r_tarsal_distal_phalanx_5_tip");
HAnimHumanoid38->setSites(*HAnimSite1309);

CHAnimSite* HAnimSite1310 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1310->setUSE("hanim_l_rib10_pt");
HAnimHumanoid38->setSites(*HAnimSite1310);

CHAnimSite* HAnimSite1311 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1311->setUSE("hanim_r_rib10_pt");
HAnimHumanoid38->setSites(*HAnimSite1311);

CHAnimSite* HAnimSite1312 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1312->setUSE("hanim_spine_2_middle_back_pt");
HAnimHumanoid38->setSites(*HAnimSite1312);

CHAnimSite* HAnimSite1313 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1313->setUSE("hanim_substernale_pt");
HAnimHumanoid38->setSites(*HAnimSite1313);

CHAnimSite* HAnimSite1314 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1314->setUSE("hanim_l_thelion_pt");
HAnimHumanoid38->setSites(*HAnimSite1314);

CHAnimSite* HAnimSite1315 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1315->setUSE("hanim_r_thelion_pt");
HAnimHumanoid38->setSites(*HAnimSite1315);

CHAnimSite* HAnimSite1316 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1316->setUSE("hanim_l_chest_midsagittal_plane_pt");
HAnimHumanoid38->setSites(*HAnimSite1316);

CHAnimSite* HAnimSite1317 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1317->setUSE("hanim_mesosternale_pt");
HAnimHumanoid38->setSites(*HAnimSite1317);

CHAnimSite* HAnimSite1318 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1318->setUSE("hanim_r_chest_midsagittal_plane_pt");
HAnimHumanoid38->setSites(*HAnimSite1318);

CHAnimSite* HAnimSite1319 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1319->setUSE("hanim_rear_center_midsagittal_plane_pt");
HAnimHumanoid38->setSites(*HAnimSite1319);

CHAnimSite* HAnimSite1320 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1320->setUSE("hanim_spine_1_middle_back_pt");
HAnimHumanoid38->setSites(*HAnimSite1320);

CHAnimSite* HAnimSite1321 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1321->setUSE("hanim_cervicale_pt");
HAnimHumanoid38->setSites(*HAnimSite1321);

CHAnimSite* HAnimSite1322 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1322->setUSE("hanim_suprasternale_pt");
HAnimHumanoid38->setSites(*HAnimSite1322);

CHAnimSite* HAnimSite1323 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1323->setUSE("hanim_l_neck_base_pt");
HAnimHumanoid38->setSites(*HAnimSite1323);

CHAnimSite* HAnimSite1324 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1324->setUSE("hanim_r_neck_base_pt");
HAnimHumanoid38->setSites(*HAnimSite1324);

CHAnimSite* HAnimSite1325 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1325->setUSE("hanim_l_acromion_pt");
HAnimHumanoid38->setSites(*HAnimSite1325);

CHAnimSite* HAnimSite1326 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1326->setUSE("hanim_l_axilla_distal_pt");
HAnimHumanoid38->setSites(*HAnimSite1326);

CHAnimSite* HAnimSite1327 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1327->setUSE("hanim_l_axilla_posterior_folds_pt");
HAnimHumanoid38->setSites(*HAnimSite1327);

CHAnimSite* HAnimSite1328 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1328->setUSE("hanim_l_axilla_proximal_pt");
HAnimHumanoid38->setSites(*HAnimSite1328);

CHAnimSite* HAnimSite1329 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1329->setUSE("hanim_l_clavicale_pt");
HAnimHumanoid38->setSites(*HAnimSite1329);

CHAnimSite* HAnimSite1330 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1330->setUSE("hanim_r_acromion_pt");
HAnimHumanoid38->setSites(*HAnimSite1330);

CHAnimSite* HAnimSite1331 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1331->setUSE("hanim_r_axilla_distal_pt");
HAnimHumanoid38->setSites(*HAnimSite1331);

CHAnimSite* HAnimSite1332 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1332->setUSE("hanim_r_axilla_posterior_folds_pt");
HAnimHumanoid38->setSites(*HAnimSite1332);

CHAnimSite* HAnimSite1333 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1333->setUSE("hanim_r_axilla_proximal_pt");
HAnimHumanoid38->setSites(*HAnimSite1333);

CHAnimSite* HAnimSite1334 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1334->setUSE("hanim_r_clavicale_pt");
HAnimHumanoid38->setSites(*HAnimSite1334);

CHAnimSite* HAnimSite1335 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1335->setUSE("hanim_adams_apple_pt");
HAnimHumanoid38->setSites(*HAnimSite1335);

CHAnimSite* HAnimSite1336 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1336->setUSE("hanim_glabella_pt");
HAnimHumanoid38->setSites(*HAnimSite1336);

CHAnimSite* HAnimSite1337 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1337->setUSE("hanim_l_ectocanthus_pt");
HAnimHumanoid38->setSites(*HAnimSite1337);

CHAnimSite* HAnimSite1338 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1338->setUSE("hanim_l_infraorbitale_pt");
HAnimHumanoid38->setSites(*HAnimSite1338);

CHAnimSite* HAnimSite1339 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1339->setUSE("hanim_l_tragion_pt");
HAnimHumanoid38->setSites(*HAnimSite1339);

CHAnimSite* HAnimSite1340 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1340->setUSE("hanim_nuchale_pt");
HAnimHumanoid38->setSites(*HAnimSite1340);

CHAnimSite* HAnimSite1341 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1341->setUSE("hanim_opisthocranion_pt");
HAnimHumanoid38->setSites(*HAnimSite1341);

CHAnimSite* HAnimSite1342 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1342->setUSE("hanim_r_ectocanthus_pt");
HAnimHumanoid38->setSites(*HAnimSite1342);

CHAnimSite* HAnimSite1343 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1343->setUSE("hanim_r_infraorbitale_pt");
HAnimHumanoid38->setSites(*HAnimSite1343);

CHAnimSite* HAnimSite1344 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1344->setUSE("hanim_r_tragion_pt");
HAnimHumanoid38->setSites(*HAnimSite1344);

CHAnimSite* HAnimSite1345 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1345->setUSE("hanim_sellion_pt");
HAnimHumanoid38->setSites(*HAnimSite1345);

CHAnimSite* HAnimSite1346 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1346->setUSE("hanim_skull_vertex_pt");
HAnimHumanoid38->setSites(*HAnimSite1346);

CHAnimSite* HAnimSite1347 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1347->setUSE("hanim_l_gonion_pt");
HAnimHumanoid38->setSites(*HAnimSite1347);

CHAnimSite* HAnimSite1348 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1348->setUSE("hanim_menton_pt");
HAnimHumanoid38->setSites(*HAnimSite1348);

CHAnimSite* HAnimSite1349 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1349->setUSE("hanim_r_gonion_pt");
HAnimHumanoid38->setSites(*HAnimSite1349);

CHAnimSite* HAnimSite1350 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1350->setUSE("hanim_supramenton_pt");
HAnimHumanoid38->setSites(*HAnimSite1350);

CHAnimSite* HAnimSite1351 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1351->setUSE("hanim_l_bideltoid_pt");
HAnimHumanoid38->setSites(*HAnimSite1351);

CHAnimSite* HAnimSite1352 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1352->setUSE("hanim_l_humeral_lateral_epicondyles_pt");
HAnimHumanoid38->setSites(*HAnimSite1352);

CHAnimSite* HAnimSite1353 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1353->setUSE("hanim_l_humeral_medial_epicondyles_pt");
HAnimHumanoid38->setSites(*HAnimSite1353);

CHAnimSite* HAnimSite1354 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1354->setUSE("hanim_l_olecranon_pt");
HAnimHumanoid38->setSites(*HAnimSite1354);

CHAnimSite* HAnimSite1355 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1355->setUSE("hanim_l_radial_styloid_pt");
HAnimHumanoid38->setSites(*HAnimSite1355);

CHAnimSite* HAnimSite1356 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1356->setUSE("hanim_l_radiale_pt");
HAnimHumanoid38->setSites(*HAnimSite1356);

CHAnimSite* HAnimSite1357 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1357->setUSE("hanim_l_ulnar_styloid_pt");
HAnimHumanoid38->setSites(*HAnimSite1357);

CHAnimSite* HAnimSite1358 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1358->setUSE("hanim_l_carpal_distal_phalanx_1_tip");
HAnimHumanoid38->setSites(*HAnimSite1358);

CHAnimSite* HAnimSite1359 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1359->setUSE("hanim_l_metacarpal_phalanx_2_pt");
HAnimHumanoid38->setSites(*HAnimSite1359);

CHAnimSite* HAnimSite1360 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1360->setUSE("hanim_l_carpal_distal_phalanx_2_tip");
HAnimHumanoid38->setSites(*HAnimSite1360);

CHAnimSite* HAnimSite1361 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1361->setUSE("hanim_l_dactylion_pt");
HAnimHumanoid38->setSites(*HAnimSite1361);

CHAnimSite* HAnimSite1362 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1362->setUSE("hanim_l_metacarpal_phalanx_3_pt");
HAnimHumanoid38->setSites(*HAnimSite1362);

CHAnimSite* HAnimSite1363 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1363->setUSE("hanim_l_carpal_distal_phalanx_3_tip");
HAnimHumanoid38->setSites(*HAnimSite1363);

CHAnimSite* HAnimSite1364 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1364->setUSE("hanim_l_metacarpal_phalanx_5_pt");
HAnimHumanoid38->setSites(*HAnimSite1364);

CHAnimSite* HAnimSite1365 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1365->setUSE("hanim_l_carpal_distal_phalanx_4_tip");
HAnimHumanoid38->setSites(*HAnimSite1365);

CHAnimSite* HAnimSite1366 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1366->setUSE("hanim_l_carpal_distal_phalanx_5_tip");
HAnimHumanoid38->setSites(*HAnimSite1366);

CHAnimSite* HAnimSite1367 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1367->setUSE("hanim_r_bideltoid_pt");
HAnimHumanoid38->setSites(*HAnimSite1367);

CHAnimSite* HAnimSite1368 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1368->setUSE("hanim_r_humeral_lateral_epicondyles_pt");
HAnimHumanoid38->setSites(*HAnimSite1368);

CHAnimSite* HAnimSite1369 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1369->setUSE("hanim_r_humeral_medial_epicondyles_pt");
HAnimHumanoid38->setSites(*HAnimSite1369);

CHAnimSite* HAnimSite1370 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1370->setUSE("hanim_r_olecranon_pt");
HAnimHumanoid38->setSites(*HAnimSite1370);

CHAnimSite* HAnimSite1371 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1371->setUSE("hanim_r_radial_styloid_pt");
HAnimHumanoid38->setSites(*HAnimSite1371);

CHAnimSite* HAnimSite1372 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1372->setUSE("hanim_r_radiale_pt");
HAnimHumanoid38->setSites(*HAnimSite1372);

CHAnimSite* HAnimSite1373 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1373->setUSE("hanim_r_ulnar_styloid_pt");
HAnimHumanoid38->setSites(*HAnimSite1373);

CHAnimSite* HAnimSite1374 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1374->setUSE("hanim_r_carpal_distal_phalanx_1_tip");
HAnimHumanoid38->setSites(*HAnimSite1374);

CHAnimSite* HAnimSite1375 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1375->setUSE("hanim_r_metacarpal_phalanx_2_pt");
HAnimHumanoid38->setSites(*HAnimSite1375);

CHAnimSite* HAnimSite1376 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1376->setUSE("hanim_r_carpal_distal_phalanx_2_tip");
HAnimHumanoid38->setSites(*HAnimSite1376);

CHAnimSite* HAnimSite1377 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1377->setUSE("hanim_r_dactylion_pt");
HAnimHumanoid38->setSites(*HAnimSite1377);

CHAnimSite* HAnimSite1378 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1378->setUSE("hanim_r_metacarpal_phalanx_3_pt");
HAnimHumanoid38->setSites(*HAnimSite1378);

CHAnimSite* HAnimSite1379 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1379->setUSE("hanim_r_carpal_distal_phalanx_3_tip");
HAnimHumanoid38->setSites(*HAnimSite1379);

CHAnimSite* HAnimSite1380 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1380->setUSE("hanim_r_metacarpal_phalanx_5_pt");
HAnimHumanoid38->setSites(*HAnimSite1380);

CHAnimSite* HAnimSite1381 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1381->setUSE("hanim_r_carpal_distal_phalanx_4_tip");
HAnimHumanoid38->setSites(*HAnimSite1381);

CHAnimSite* HAnimSite1382 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1382->setUSE("hanim_r_carpal_distal_phalanx_5_tip");
HAnimHumanoid38->setSites(*HAnimSite1382);

group->addChildren(*HAnimHumanoid38);

X3D0->setScene(*Scene11);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

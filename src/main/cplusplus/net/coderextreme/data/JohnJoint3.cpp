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

Transform19->addChildren(*Shape20);

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

Transform24->addChildren(*Shape25);

Transform18->addChildren(*Transform24);

//<Transform translation='0 2.1 0' scale='1 1 1'> <Shape DEF='HAnimSiteShape'> <IndexedFaceSet DEF='DiamondIFS' creaseAngle='0.5' solid='false' coordIndex='0 1 2 -1 0 2 3 -1 0 3 4 -1 0 4 1 -1 5 2 1 -1 5 3 2 -1 5 4 3 -1 5 1 4 -1'> <ColorRGBA DEF='HAnimSiteColorRGBA' color='1 1 0 1 1 1 0 0.1'/> <Coordinate point='0 0.01 0 -0.01 0 0 0 0 0.01 0.01 0 0 0 0 -0.01 0 -0.01 0'/> </IndexedFaceSet> <Appearance> <Material diffuseColor='1 1 0' transparency='0.3'/> </Appearance> </Shape> </Transform>
Group17->addChildren(*Transform18);

group->addChildren(*Group17);

CNavigationInfo* NavigationInfo29 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo29->setSpeed(1.5);
group->addChildren(*NavigationInfo29);

CViewpoint* Viewpoint30 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint30->setDescription("default");
group->addChildren(*Viewpoint30);

CHAnimHumanoid* HAnimHumanoid31 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid31->setName("HAnim");
HAnimHumanoid31->setDEF("hanim_HAnim");
HAnimHumanoid31->setInfo(new CString[1]{"humanoidVersion=2.0"}, 1);
HAnimHumanoid31->setVersion("2.0");
CHAnimJoint* HAnimJoint32 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint32->setName("humanoid_root");
HAnimJoint32->setDEF("hanim_humanoid_root");
HAnimJoint32->setCenter(new float[3]{0,0.824,0.0277});
HAnimJoint32->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint32->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape33 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet34 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet34->setVertexCount(new int[1]{2});
CCoordinate* Coordinate35 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate35->setPoint(new float[6]{0,0.824,0.0277,0,0.9149,0.0016});
LineSet34->setCoord(*Coordinate35);

//from humanoid_root to sacroiliac
CColorRGBA* ColorRGBA36 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA36->setUSE("HAnimSegmentLineColorRGBA");
LineSet34->setColor(*ColorRGBA36);

Shape33->setGeometry(LineSet34);

HAnimJoint32->setShape(*Shape33);

CHAnimSite* HAnimSite37 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite37->setName("buttocks_standing_wall_contact_point_pt");
HAnimSite37->setDEF("hanim_buttocks_standing_wall_contact_point_pt");
HAnimSite37->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor38 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor38->setDescription("HAnimSite buttocks_standing_wall_contact_point_pt");
HAnimSite37->addChildren(*TouchSensor38);

CShape* Shape39 = (CShape *)(m_pScene.createNode("Shape"));
Shape39->setUSE("HAnimSiteShape");
HAnimSite37->addChildren(*Shape39);

HAnimJoint32->addHAnimSite(*HAnimSite37);

CHAnimSite* HAnimSite40 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite40->setName("crotch_pt");
HAnimSite40->setDEF("hanim_crotch_pt");
HAnimSite40->setTranslation(new float[3]{0.0034,0.8266,0.0257});
CTouchSensor* TouchSensor41 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor41->setDescription("HAnimSite crotch_pt");
HAnimSite40->addChildren(*TouchSensor41);

CShape* Shape42 = (CShape *)(m_pScene.createNode("Shape"));
Shape42->setUSE("HAnimSiteShape");
HAnimSite40->addChildren(*Shape42);

HAnimJoint32->addHAnimSite(*HAnimSite40);

CHAnimSite* HAnimSite43 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite43->setName("l_asis_pt");
HAnimSite43->setDEF("hanim_l_asis_pt");
HAnimSite43->setTranslation(new float[3]{0.0925,0.9983,0.1052});
CTouchSensor* TouchSensor44 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor44->setDescription("HAnimSite l_asis_pt");
HAnimSite43->addChildren(*TouchSensor44);

CShape* Shape45 = (CShape *)(m_pScene.createNode("Shape"));
Shape45->setUSE("HAnimSiteShape");
HAnimSite43->addChildren(*Shape45);

HAnimJoint32->addHAnimSite(*HAnimSite43);

CHAnimSite* HAnimSite46 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite46->setName("l_iliocristale_pt");
HAnimSite46->setDEF("hanim_l_iliocristale_pt");
HAnimSite46->setTranslation(new float[3]{0.1612,1.0537,0.0008});
CTouchSensor* TouchSensor47 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor47->setDescription("HAnimSite l_iliocristale_pt");
HAnimSite46->addChildren(*TouchSensor47);

CShape* Shape48 = (CShape *)(m_pScene.createNode("Shape"));
Shape48->setUSE("HAnimSiteShape");
HAnimSite46->addChildren(*Shape48);

HAnimJoint32->addHAnimSite(*HAnimSite46);

CHAnimSite* HAnimSite49 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite49->setName("l_psis_pt");
HAnimSite49->setDEF("hanim_l_psis_pt");
HAnimSite49->setTranslation(new float[3]{0.0774,1.019,-0.1151});
CTouchSensor* TouchSensor50 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor50->setDescription("HAnimSite l_psis_pt");
HAnimSite49->addChildren(*TouchSensor50);

CShape* Shape51 = (CShape *)(m_pScene.createNode("Shape"));
Shape51->setUSE("HAnimSiteShape");
HAnimSite49->addChildren(*Shape51);

HAnimJoint32->addHAnimSite(*HAnimSite49);

CHAnimSite* HAnimSite52 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite52->setName("l_trochanterion_pt");
HAnimSite52->setDEF("hanim_l_trochanterion_pt");
HAnimSite52->setTranslation(new float[3]{0.1677,0.8336,0.0303});
CTouchSensor* TouchSensor53 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor53->setDescription("HAnimSite l_trochanterion_pt");
HAnimSite52->addChildren(*TouchSensor53);

CShape* Shape54 = (CShape *)(m_pScene.createNode("Shape"));
Shape54->setUSE("HAnimSiteShape");
HAnimSite52->addChildren(*Shape54);

HAnimJoint32->addHAnimSite(*HAnimSite52);

CHAnimSite* HAnimSite55 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite55->setName("r_asis_pt");
HAnimSite55->setDEF("hanim_r_asis_pt");
HAnimSite55->setTranslation(new float[3]{-0.0887,1.0021,0.1112});
CTouchSensor* TouchSensor56 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor56->setDescription("HAnimSite r_asis_pt");
HAnimSite55->addChildren(*TouchSensor56);

CShape* Shape57 = (CShape *)(m_pScene.createNode("Shape"));
Shape57->setUSE("HAnimSiteShape");
HAnimSite55->addChildren(*Shape57);

HAnimJoint32->addHAnimSite(*HAnimSite55);

CHAnimSite* HAnimSite58 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite58->setName("r_iliocristale_pt");
HAnimSite58->setDEF("hanim_r_iliocristale_pt");
HAnimSite58->setTranslation(new float[3]{-0.1525,1.0628,0.0035});
CTouchSensor* TouchSensor59 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor59->setDescription("HAnimSite r_iliocristale_pt");
HAnimSite58->addChildren(*TouchSensor59);

CShape* Shape60 = (CShape *)(m_pScene.createNode("Shape"));
Shape60->setUSE("HAnimSiteShape");
HAnimSite58->addChildren(*Shape60);

HAnimJoint32->addHAnimSite(*HAnimSite58);

CHAnimSite* HAnimSite61 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite61->setName("r_psis_pt");
HAnimSite61->setDEF("hanim_r_psis_pt");
HAnimSite61->setTranslation(new float[3]{-0.0716,1.019,-0.1138});
CTouchSensor* TouchSensor62 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor62->setDescription("HAnimSite r_psis_pt");
HAnimSite61->addChildren(*TouchSensor62);

CShape* Shape63 = (CShape *)(m_pScene.createNode("Shape"));
Shape63->setUSE("HAnimSiteShape");
HAnimSite61->addChildren(*Shape63);

HAnimJoint32->addHAnimSite(*HAnimSite61);

CHAnimSite* HAnimSite64 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite64->setName("r_trochanterion_pt");
HAnimSite64->setDEF("hanim_r_trochanterion_pt");
HAnimSite64->setTranslation(new float[3]{-0.1689,0.8419,0.0352});
CTouchSensor* TouchSensor65 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor65->setDescription("HAnimSite r_trochanterion_pt");
HAnimSite64->addChildren(*TouchSensor65);

CShape* Shape66 = (CShape *)(m_pScene.createNode("Shape"));
Shape66->setUSE("HAnimSiteShape");
HAnimSite64->addChildren(*Shape66);

HAnimJoint32->addHAnimSite(*HAnimSite64);

CShape* Shape67 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet68 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet68->setVertexCount(new int[1]{2});
CCoordinate* Coordinate69 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate69->setPoint(new float[6]{0,0.824,0.0277,0.0028,1.0568,-0.0776});
LineSet68->setCoord(*Coordinate69);

//from humanoid_root to vl5
CColorRGBA* ColorRGBA70 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA70->setUSE("HAnimSegmentLineColorRGBA");
LineSet68->setColor(*ColorRGBA70);

Shape67->setGeometry(LineSet68);

HAnimJoint32->addShape(*Shape67);

CHAnimSite* HAnimSite71 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite71->setName("navel_pt");
HAnimSite71->setDEF("hanim_navel_pt");
HAnimSite71->setTranslation(new float[3]{0.0069,1.0966,0.1017});
CTouchSensor* TouchSensor72 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor72->setDescription("HAnimSite navel_pt");
HAnimSite71->addChildren(*TouchSensor72);

CShape* Shape73 = (CShape *)(m_pScene.createNode("Shape"));
Shape73->setUSE("HAnimSiteShape");
HAnimSite71->addChildren(*Shape73);

HAnimJoint32->addHAnimSite(*HAnimSite71);

CHAnimSite* HAnimSite74 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite74->setName("waist_preferred_anterior_pt");
HAnimSite74->setDEF("hanim_waist_preferred_anterior_pt");
HAnimSite74->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor75 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor75->setDescription("HAnimSite waist_preferred_anterior_pt");
HAnimSite74->addChildren(*TouchSensor75);

CShape* Shape76 = (CShape *)(m_pScene.createNode("Shape"));
Shape76->setUSE("HAnimSiteShape");
HAnimSite74->addChildren(*Shape76);

HAnimJoint32->addHAnimSite(*HAnimSite74);

CHAnimSite* HAnimSite77 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite77->setName("waist_preferred_posterior_pt");
HAnimSite77->setDEF("hanim_waist_preferred_posterior_pt");
HAnimSite77->setTranslation(new float[3]{0.29,1.0915,-0.1091});
CTouchSensor* TouchSensor78 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor78->setDescription("HAnimSite waist_preferred_posterior_pt");
HAnimSite77->addChildren(*TouchSensor78);

CShape* Shape79 = (CShape *)(m_pScene.createNode("Shape"));
Shape79->setUSE("HAnimSiteShape");
HAnimSite77->addChildren(*Shape79);

HAnimJoint32->addHAnimSite(*HAnimSite77);

CHAnimJoint* HAnimJoint80 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint80->setName("sacroiliac");
HAnimJoint80->setDEF("hanim_sacroiliac");
HAnimJoint80->setCenter(new float[3]{0,0.9149,0.0016});
HAnimJoint80->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint80->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape81 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet82 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet82->setVertexCount(new int[1]{2});
CCoordinate* Coordinate83 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate83->setPoint(new float[6]{0,0.9149,0.0016,0.0961,0.9124,-0.0001});
LineSet82->setCoord(*Coordinate83);

//from sacroiliac to l_hip
CColorRGBA* ColorRGBA84 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA84->setUSE("HAnimSegmentLineColorRGBA");
LineSet82->setColor(*ColorRGBA84);

Shape81->setGeometry(LineSet82);

HAnimJoint80->setShape(*Shape81);

CHAnimSite* HAnimSite85 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite85->setName("l_femoral_lateral_epicondyles_pt");
HAnimSite85->setDEF("hanim_l_femoral_lateral_epicondyles_pt");
HAnimSite85->setTranslation(new float[3]{0.1598,0.4967,0.0297});
CTouchSensor* TouchSensor86 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor86->setDescription("HAnimSite l_femoral_lateral_epicondyles_pt");
HAnimSite85->addChildren(*TouchSensor86);

CShape* Shape87 = (CShape *)(m_pScene.createNode("Shape"));
Shape87->setUSE("HAnimSiteShape");
HAnimSite85->addChildren(*Shape87);

HAnimJoint80->addHAnimSite(*HAnimSite85);

CHAnimSite* HAnimSite88 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite88->setName("l_femoral_medial_epicondyles_pt");
HAnimSite88->setDEF("hanim_l_femoral_medial_epicondyles_pt");
HAnimSite88->setTranslation(new float[3]{0.0398,0.4946,0.0303});
CTouchSensor* TouchSensor89 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor89->setDescription("HAnimSite l_femoral_medial_epicondyles_pt");
HAnimSite88->addChildren(*TouchSensor89);

CShape* Shape90 = (CShape *)(m_pScene.createNode("Shape"));
Shape90->setUSE("HAnimSiteShape");
HAnimSite88->addChildren(*Shape90);

HAnimJoint80->addHAnimSite(*HAnimSite88);

CHAnimSite* HAnimSite91 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite91->setName("l_knee_crease_pt");
HAnimSite91->setDEF("hanim_l_knee_crease_pt");
HAnimSite91->setTranslation(new float[3]{0.0993,0.4881,-0.0309});
CTouchSensor* TouchSensor92 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor92->setDescription("HAnimSite l_knee_crease_pt");
HAnimSite91->addChildren(*TouchSensor92);

CShape* Shape93 = (CShape *)(m_pScene.createNode("Shape"));
Shape93->setUSE("HAnimSiteShape");
HAnimSite91->addChildren(*Shape93);

HAnimJoint80->addHAnimSite(*HAnimSite91);

CHAnimSite* HAnimSite94 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite94->setName("l_suprapatella_pt");
HAnimSite94->setDEF("hanim_l_suprapatella_pt");
HAnimSite94->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor95 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor95->setDescription("HAnimSite l_suprapatella_pt");
HAnimSite94->addChildren(*TouchSensor95);

CShape* Shape96 = (CShape *)(m_pScene.createNode("Shape"));
Shape96->setUSE("HAnimSiteShape");
HAnimSite94->addChildren(*Shape96);

HAnimJoint80->addHAnimSite(*HAnimSite94);

CShape* Shape97 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet98 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet98->setVertexCount(new int[1]{2});
CCoordinate* Coordinate99 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate99->setPoint(new float[6]{0,0.9149,0.0016,-0.095,0.9171,0.0029});
LineSet98->setCoord(*Coordinate99);

//from sacroiliac to r_hip
CColorRGBA* ColorRGBA100 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA100->setUSE("HAnimSegmentLineColorRGBA");
LineSet98->setColor(*ColorRGBA100);

Shape97->setGeometry(LineSet98);

HAnimJoint80->addShape(*Shape97);

CHAnimSite* HAnimSite101 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite101->setName("r_femoral_lateral_epicondyles_pt");
HAnimSite101->setDEF("hanim_r_femoral_lateral_epicondyles_pt");
HAnimSite101->setTranslation(new float[3]{-0.1421,0.4992,0.031});
CTouchSensor* TouchSensor102 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor102->setDescription("HAnimSite r_femoral_lateral_epicondyles_pt");
HAnimSite101->addChildren(*TouchSensor102);

CShape* Shape103 = (CShape *)(m_pScene.createNode("Shape"));
Shape103->setUSE("HAnimSiteShape");
HAnimSite101->addChildren(*Shape103);

HAnimJoint80->addHAnimSite(*HAnimSite101);

CHAnimSite* HAnimSite104 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite104->setName("r_femoral_medial_epicondyles_pt");
HAnimSite104->setDEF("hanim_r_femoral_medial_epicondyles_pt");
HAnimSite104->setTranslation(new float[3]{-0.0221,0.5014,0.0289});
CTouchSensor* TouchSensor105 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor105->setDescription("HAnimSite r_femoral_medial_epicondyles_pt");
HAnimSite104->addChildren(*TouchSensor105);

CShape* Shape106 = (CShape *)(m_pScene.createNode("Shape"));
Shape106->setUSE("HAnimSiteShape");
HAnimSite104->addChildren(*Shape106);

HAnimJoint80->addHAnimSite(*HAnimSite104);

CHAnimSite* HAnimSite107 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite107->setName("r_knee_crease_pt");
HAnimSite107->setDEF("hanim_r_knee_crease_pt");
HAnimSite107->setTranslation(new float[3]{-0.0825,0.4932,-0.0326});
CTouchSensor* TouchSensor108 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor108->setDescription("HAnimSite r_knee_crease_pt");
HAnimSite107->addChildren(*TouchSensor108);

CShape* Shape109 = (CShape *)(m_pScene.createNode("Shape"));
Shape109->setUSE("HAnimSiteShape");
HAnimSite107->addChildren(*Shape109);

HAnimJoint80->addHAnimSite(*HAnimSite107);

CHAnimSite* HAnimSite110 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite110->setName("r_suprapatella_pt");
HAnimSite110->setDEF("hanim_r_suprapatella_pt");
HAnimSite110->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor111 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor111->setDescription("HAnimSite r_suprapatella_pt");
HAnimSite110->addChildren(*TouchSensor111);

CShape* Shape112 = (CShape *)(m_pScene.createNode("Shape"));
Shape112->setUSE("HAnimSiteShape");
HAnimSite110->addChildren(*Shape112);

HAnimJoint80->addHAnimSite(*HAnimSite110);

CHAnimJoint* HAnimJoint113 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint113->setName("l_hip");
HAnimJoint113->setDEF("hanim_l_hip");
HAnimJoint113->setCenter(new float[3]{0.0961,0.9124,-0.0001});
HAnimJoint113->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint113->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape114 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet115 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet115->setVertexCount(new int[1]{2});
CCoordinate* Coordinate116 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate116->setPoint(new float[6]{0.0961,0.9124,-0.0001,0.104,0.4867,0.0308});
LineSet115->setCoord(*Coordinate116);

//from l_hip to l_knee
CColorRGBA* ColorRGBA117 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA117->setUSE("HAnimSegmentLineColorRGBA");
LineSet115->setColor(*ColorRGBA117);

Shape114->setGeometry(LineSet115);

HAnimJoint113->setShape(*Shape114);

CHAnimSite* HAnimSite118 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite118->setName("l_lateral_malleolus_pt");
HAnimSite118->setDEF("hanim_l_lateral_malleolus_pt");
HAnimSite118->setTranslation(new float[3]{0.1308,0.0597,-0.1032});
CTouchSensor* TouchSensor119 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor119->setDescription("HAnimSite l_lateral_malleolus_pt");
HAnimSite118->addChildren(*TouchSensor119);

CShape* Shape120 = (CShape *)(m_pScene.createNode("Shape"));
Shape120->setUSE("HAnimSiteShape");
HAnimSite118->addChildren(*Shape120);

HAnimJoint113->addHAnimSite(*HAnimSite118);

CHAnimSite* HAnimSite121 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite121->setName("l_medial_malleolus_pt");
HAnimSite121->setDEF("hanim_l_medial_malleolus_pt");
HAnimSite121->setTranslation(new float[3]{0.089,0.0716,-0.0881});
CTouchSensor* TouchSensor122 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor122->setDescription("HAnimSite l_medial_malleolus_pt");
HAnimSite121->addChildren(*TouchSensor122);

CShape* Shape123 = (CShape *)(m_pScene.createNode("Shape"));
Shape123->setUSE("HAnimSiteShape");
HAnimSite121->addChildren(*Shape123);

HAnimJoint113->addHAnimSite(*HAnimSite121);

CHAnimSite* HAnimSite124 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite124->setName("l_tibiale_pt");
HAnimSite124->setDEF("hanim_l_tibiale_pt");
HAnimSite124->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor125 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor125->setDescription("HAnimSite l_tibiale_pt");
HAnimSite124->addChildren(*TouchSensor125);

CShape* Shape126 = (CShape *)(m_pScene.createNode("Shape"));
Shape126->setUSE("HAnimSiteShape");
HAnimSite124->addChildren(*Shape126);

HAnimJoint113->addHAnimSite(*HAnimSite124);

CHAnimJoint* HAnimJoint127 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint127->setName("l_knee");
HAnimJoint127->setDEF("hanim_l_knee");
HAnimJoint127->setCenter(new float[3]{0.104,0.4867,0.0308});
HAnimJoint127->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint127->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape128 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet129 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet129->setVertexCount(new int[1]{2});
CCoordinate* Coordinate130 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate130->setPoint(new float[6]{0.104,0.4867,0.0308,0.1101,0.0656,-0.0736});
LineSet129->setCoord(*Coordinate130);

//from l_knee to l_talocrural
CColorRGBA* ColorRGBA131 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA131->setUSE("HAnimSegmentLineColorRGBA");
LineSet129->setColor(*ColorRGBA131);

Shape128->setGeometry(LineSet129);

HAnimJoint127->setShape(*Shape128);

CHAnimSite* HAnimSite132 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite132->setName("l_calcaneus_posterior_pt");
HAnimSite132->setDEF("hanim_l_calcaneus_posterior_pt");
HAnimSite132->setTranslation(new float[3]{0.0974,0.0259,-0.1171});
CTouchSensor* TouchSensor133 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor133->setDescription("HAnimSite l_calcaneus_posterior_pt");
HAnimSite132->addChildren(*TouchSensor133);

CShape* Shape134 = (CShape *)(m_pScene.createNode("Shape"));
Shape134->setUSE("HAnimSiteShape");
HAnimSite132->addChildren(*Shape134);

HAnimJoint127->addHAnimSite(*HAnimSite132);

CHAnimSite* HAnimSite135 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite135->setName("l_sphyrion_pt");
HAnimSite135->setDEF("hanim_l_sphyrion_pt");
HAnimSite135->setTranslation(new float[3]{0.089,0.0575,-0.0943});
CTouchSensor* TouchSensor136 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor136->setDescription("HAnimSite l_sphyrion_pt");
HAnimSite135->addChildren(*TouchSensor136);

CShape* Shape137 = (CShape *)(m_pScene.createNode("Shape"));
Shape137->setUSE("HAnimSiteShape");
HAnimSite135->addChildren(*Shape137);

HAnimJoint127->addHAnimSite(*HAnimSite135);

CHAnimJoint* HAnimJoint138 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint138->setName("l_talocrural");
HAnimJoint138->setDEF("hanim_l_talocrural");
HAnimJoint138->setCenter(new float[3]{0.1101,0.0656,-0.0736});
HAnimJoint138->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint138->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape139 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet140 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet140->setVertexCount(new int[1]{2});
CCoordinate* Coordinate141 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate141->setPoint(new float[6]{0.1101,0.0656,-0.0736,0,1,0});
LineSet140->setCoord(*Coordinate141);

//from l_talocrural to l_talocalcaneonavicular
CColorRGBA* ColorRGBA142 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA142->setUSE("HAnimSegmentLineColorRGBA");
LineSet140->setColor(*ColorRGBA142);

Shape139->setGeometry(LineSet140);

HAnimJoint138->setShape(*Shape139);

CShape* Shape143 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet144 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet144->setVertexCount(new int[1]{2});
CCoordinate* Coordinate145 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate145->setPoint(new float[6]{0.1101,0.0656,-0.0736,0,1,0});
LineSet144->setCoord(*Coordinate145);

//from l_talocrural to l_calcaneocuboid
CColorRGBA* ColorRGBA146 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA146->setUSE("HAnimSegmentLineColorRGBA");
LineSet144->setColor(*ColorRGBA146);

Shape143->setGeometry(LineSet144);

HAnimJoint138->addShape(*Shape143);

CHAnimJoint* HAnimJoint147 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint147->setName("l_talocalcaneonavicular");
HAnimJoint147->setDEF("hanim_l_talocalcaneonavicular");
HAnimJoint147->setCenter(new float[3]{0,1,0});
HAnimJoint147->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint147->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape148 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet149 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet149->setVertexCount(new int[1]{1});
CCoordinate* Coordinate150 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate150->setPoint(new float[3]{0,1,0});
LineSet149->setCoord(*Coordinate150);

//from l_talocalcaneonavicular to l_cuneonavicular_1
CColorRGBA* ColorRGBA151 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA151->setUSE("HAnimSegmentLineColorRGBA");
LineSet149->setColor(*ColorRGBA151);

Shape148->setGeometry(LineSet149);

HAnimJoint147->setShape(*Shape148);

CShape* Shape152 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet153 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet153->setVertexCount(new int[1]{1});
CCoordinate* Coordinate154 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate154->setPoint(new float[3]{0,1,0});
LineSet153->setCoord(*Coordinate154);

//from l_talocalcaneonavicular to l_cuneonavicular_2
CColorRGBA* ColorRGBA155 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA155->setUSE("HAnimSegmentLineColorRGBA");
LineSet153->setColor(*ColorRGBA155);

Shape152->setGeometry(LineSet153);

HAnimJoint147->addShape(*Shape152);

CShape* Shape156 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet157 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet157->setVertexCount(new int[1]{1});
CCoordinate* Coordinate158 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate158->setPoint(new float[3]{0,1,0});
LineSet157->setCoord(*Coordinate158);

//from l_talocalcaneonavicular to l_cuneonavicular_3
CColorRGBA* ColorRGBA159 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA159->setUSE("HAnimSegmentLineColorRGBA");
LineSet157->setColor(*ColorRGBA159);

Shape156->setGeometry(LineSet157);

HAnimJoint147->addShape(*Shape156);

CHAnimJoint* HAnimJoint160 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint160->setName("l_cuneonavicular_1");
HAnimJoint160->setDEF("hanim_l_cuneonavicular_1");
HAnimJoint160->setCenter(new float[3]{0,1,0});
HAnimJoint160->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint160->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape161 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet162 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet162->setVertexCount(new int[1]{1});
CCoordinate* Coordinate163 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate163->setPoint(new float[3]{0,1,0});
LineSet162->setCoord(*Coordinate163);

//from l_cuneonavicular_1 to l_tarsometatarsal_1
CColorRGBA* ColorRGBA164 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA164->setUSE("HAnimSegmentLineColorRGBA");
LineSet162->setColor(*ColorRGBA164);

Shape161->setGeometry(LineSet162);

HAnimJoint160->setShape(*Shape161);

CHAnimJoint* HAnimJoint165 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint165->setName("l_tarsometatarsal_1");
HAnimJoint165->setDEF("hanim_l_tarsometatarsal_1");
HAnimJoint165->setCenter(new float[3]{0,1,0});
HAnimJoint165->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint165->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape166 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet167 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet167->setVertexCount(new int[1]{1});
CCoordinate* Coordinate168 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate168->setPoint(new float[3]{0,1,0});
LineSet167->setCoord(*Coordinate168);

//from l_tarsometatarsal_1 to l_metatarsophalangeal_1
CColorRGBA* ColorRGBA169 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA169->setUSE("HAnimSegmentLineColorRGBA");
LineSet167->setColor(*ColorRGBA169);

Shape166->setGeometry(LineSet167);

HAnimJoint165->setShape(*Shape166);

CHAnimSite* HAnimSite170 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite170->setName("l_metatarsal_phalanx_1_pt");
HAnimSite170->setDEF("hanim_l_metatarsal_phalanx_1_pt");
HAnimSite170->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor171 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor171->setDescription("HAnimSite l_metatarsal_phalanx_1_pt");
HAnimSite170->addChildren(*TouchSensor171);

CShape* Shape172 = (CShape *)(m_pScene.createNode("Shape"));
Shape172->setUSE("HAnimSiteShape");
HAnimSite170->addChildren(*Shape172);

HAnimJoint165->addHAnimSite(*HAnimSite170);

CHAnimJoint* HAnimJoint173 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint173->setName("l_metatarsophalangeal_1");
HAnimJoint173->setDEF("hanim_l_metatarsophalangeal_1");
HAnimJoint173->setCenter(new float[3]{0,1,0});
HAnimJoint173->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint173->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape174 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet175 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet175->setVertexCount(new int[1]{1});
CCoordinate* Coordinate176 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate176->setPoint(new float[3]{0,1,0});
LineSet175->setCoord(*Coordinate176);

//from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1
CColorRGBA* ColorRGBA177 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA177->setUSE("HAnimSegmentLineColorRGBA");
LineSet175->setColor(*ColorRGBA177);

Shape174->setGeometry(LineSet175);

HAnimJoint173->setShape(*Shape174);

CHAnimSite* HAnimSite178 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite178->setName("l_tarsal_distal_phalanx_1_tip");
HAnimSite178->setDEF("hanim_l_tarsal_distal_phalanx_1_tip");
HAnimSite178->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor179 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor179->setDescription("HAnimSite l_tarsal_distal_phalanx_1_tip");
HAnimSite178->addChildren(*TouchSensor179);

CShape* Shape180 = (CShape *)(m_pScene.createNode("Shape"));
Shape180->setUSE("HAnimSiteShape");
HAnimSite178->addChildren(*Shape180);

HAnimJoint173->addHAnimSite(*HAnimSite178);

CHAnimJoint* HAnimJoint181 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint181->setName("l_tarsal_interphalangeal_1");
HAnimJoint181->setDEF("hanim_l_tarsal_interphalangeal_1");
HAnimJoint181->setCenter(new float[3]{0,1,0});
HAnimJoint181->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint181->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint173->addChildren(*HAnimJoint181);

HAnimJoint165->addChildren(*HAnimJoint173);

HAnimJoint160->addChildren(*HAnimJoint165);

HAnimJoint147->addChildren(*HAnimJoint160);

CHAnimJoint* HAnimJoint182 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint182->setName("l_cuneonavicular_2");
HAnimJoint182->setDEF("hanim_l_cuneonavicular_2");
HAnimJoint182->setCenter(new float[3]{0,1,0});
HAnimJoint182->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint182->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape183 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet184 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet184->setVertexCount(new int[1]{1});
CCoordinate* Coordinate185 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate185->setPoint(new float[3]{0,1,0});
LineSet184->setCoord(*Coordinate185);

//from l_cuneonavicular_2 to l_tarsometatarsal_2
CColorRGBA* ColorRGBA186 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA186->setUSE("HAnimSegmentLineColorRGBA");
LineSet184->setColor(*ColorRGBA186);

Shape183->setGeometry(LineSet184);

HAnimJoint182->setShape(*Shape183);

CHAnimJoint* HAnimJoint187 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint187->setName("l_tarsometatarsal_2");
HAnimJoint187->setDEF("hanim_l_tarsometatarsal_2");
HAnimJoint187->setCenter(new float[3]{0,1,0});
HAnimJoint187->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint187->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape188 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet189 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet189->setVertexCount(new int[1]{1});
CCoordinate* Coordinate190 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate190->setPoint(new float[3]{0,1,0});
LineSet189->setCoord(*Coordinate190);

//from l_tarsometatarsal_2 to l_metatarsophalangeal_2
CColorRGBA* ColorRGBA191 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA191->setUSE("HAnimSegmentLineColorRGBA");
LineSet189->setColor(*ColorRGBA191);

Shape188->setGeometry(LineSet189);

HAnimJoint187->setShape(*Shape188);

CHAnimJoint* HAnimJoint192 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint192->setName("l_metatarsophalangeal_2");
HAnimJoint192->setDEF("hanim_l_metatarsophalangeal_2");
HAnimJoint192->setCenter(new float[3]{0,1,0});
HAnimJoint192->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint192->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape193 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet194 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet194->setVertexCount(new int[1]{1});
CCoordinate* Coordinate195 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate195->setPoint(new float[3]{0,1,0});
LineSet194->setCoord(*Coordinate195);

//from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2
CColorRGBA* ColorRGBA196 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA196->setUSE("HAnimSegmentLineColorRGBA");
LineSet194->setColor(*ColorRGBA196);

Shape193->setGeometry(LineSet194);

HAnimJoint192->setShape(*Shape193);

CHAnimJoint* HAnimJoint197 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint197->setName("l_tarsal_proximal_interphalangeal_2");
HAnimJoint197->setDEF("hanim_l_tarsal_proximal_interphalangeal_2");
HAnimJoint197->setCenter(new float[3]{0,1,0});
HAnimJoint197->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint197->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape198 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet199 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet199->setVertexCount(new int[1]{1});
CCoordinate* Coordinate200 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate200->setPoint(new float[3]{0,1,0});
LineSet199->setCoord(*Coordinate200);

//from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2
CColorRGBA* ColorRGBA201 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA201->setUSE("HAnimSegmentLineColorRGBA");
LineSet199->setColor(*ColorRGBA201);

Shape198->setGeometry(LineSet199);

HAnimJoint197->setShape(*Shape198);

CHAnimSite* HAnimSite202 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite202->setName("l_tarsal_distal_phalanx_2_tip");
HAnimSite202->setDEF("hanim_l_tarsal_distal_phalanx_2_tip");
HAnimSite202->setTranslation(new float[3]{0.1195,0.0079,0.1433});
CTouchSensor* TouchSensor203 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor203->setDescription("HAnimSite l_tarsal_distal_phalanx_2_tip");
HAnimSite202->addChildren(*TouchSensor203);

CShape* Shape204 = (CShape *)(m_pScene.createNode("Shape"));
Shape204->setUSE("HAnimSiteShape");
HAnimSite202->addChildren(*Shape204);

HAnimJoint197->addHAnimSite(*HAnimSite202);

CHAnimJoint* HAnimJoint205 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint205->setName("l_tarsal_distal_interphalangeal_2");
HAnimJoint205->setDEF("hanim_l_tarsal_distal_interphalangeal_2");
HAnimJoint205->setCenter(new float[3]{0,1,0});
HAnimJoint205->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint205->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint197->addChildren(*HAnimJoint205);

HAnimJoint192->addChildren(*HAnimJoint197);

HAnimJoint187->addChildren(*HAnimJoint192);

HAnimJoint182->addChildren(*HAnimJoint187);

HAnimJoint147->addChildren(*HAnimJoint182);

CHAnimJoint* HAnimJoint206 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint206->setName("l_cuneonavicular_3");
HAnimJoint206->setDEF("hanim_l_cuneonavicular_3");
HAnimJoint206->setCenter(new float[3]{0,1,0});
HAnimJoint206->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint206->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape207 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet208 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet208->setVertexCount(new int[1]{1});
CCoordinate* Coordinate209 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate209->setPoint(new float[3]{0,1,0});
LineSet208->setCoord(*Coordinate209);

//from l_cuneonavicular_3 to l_tarsometatarsal_3
CColorRGBA* ColorRGBA210 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA210->setUSE("HAnimSegmentLineColorRGBA");
LineSet208->setColor(*ColorRGBA210);

Shape207->setGeometry(LineSet208);

HAnimJoint206->setShape(*Shape207);

CHAnimJoint* HAnimJoint211 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint211->setName("l_tarsometatarsal_3");
HAnimJoint211->setDEF("hanim_l_tarsometatarsal_3");
HAnimJoint211->setCenter(new float[3]{0,1,0});
HAnimJoint211->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint211->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape212 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet213 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet213->setVertexCount(new int[1]{1});
CCoordinate* Coordinate214 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate214->setPoint(new float[3]{0,1,0});
LineSet213->setCoord(*Coordinate214);

//from l_tarsometatarsal_3 to l_metatarsophalangeal_3
CColorRGBA* ColorRGBA215 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA215->setUSE("HAnimSegmentLineColorRGBA");
LineSet213->setColor(*ColorRGBA215);

Shape212->setGeometry(LineSet213);

HAnimJoint211->setShape(*Shape212);

CHAnimJoint* HAnimJoint216 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint216->setName("l_metatarsophalangeal_3");
HAnimJoint216->setDEF("hanim_l_metatarsophalangeal_3");
HAnimJoint216->setCenter(new float[3]{0,1,0});
HAnimJoint216->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint216->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape217 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet218 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet218->setVertexCount(new int[1]{1});
CCoordinate* Coordinate219 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate219->setPoint(new float[3]{0,1,0});
LineSet218->setCoord(*Coordinate219);

//from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3
CColorRGBA* ColorRGBA220 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA220->setUSE("HAnimSegmentLineColorRGBA");
LineSet218->setColor(*ColorRGBA220);

Shape217->setGeometry(LineSet218);

HAnimJoint216->setShape(*Shape217);

CHAnimJoint* HAnimJoint221 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint221->setName("l_tarsal_proximal_interphalangeal_3");
HAnimJoint221->setDEF("hanim_l_tarsal_proximal_interphalangeal_3");
HAnimJoint221->setCenter(new float[3]{0,1,0});
HAnimJoint221->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint221->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape222 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet223 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet223->setVertexCount(new int[1]{1});
CCoordinate* Coordinate224 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate224->setPoint(new float[3]{0,1,0});
LineSet223->setCoord(*Coordinate224);

//from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3
CColorRGBA* ColorRGBA225 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA225->setUSE("HAnimSegmentLineColorRGBA");
LineSet223->setColor(*ColorRGBA225);

Shape222->setGeometry(LineSet223);

HAnimJoint221->setShape(*Shape222);

CHAnimSite* HAnimSite226 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite226->setName("l_tarsal_distal_phalanx_3_tip");
HAnimSite226->setDEF("hanim_l_tarsal_distal_phalanx_3_tip");
HAnimSite226->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor227 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor227->setDescription("HAnimSite l_tarsal_distal_phalanx_3_tip");
HAnimSite226->addChildren(*TouchSensor227);

CShape* Shape228 = (CShape *)(m_pScene.createNode("Shape"));
Shape228->setUSE("HAnimSiteShape");
HAnimSite226->addChildren(*Shape228);

HAnimJoint221->addHAnimSite(*HAnimSite226);

CHAnimJoint* HAnimJoint229 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint229->setName("l_tarsal_distal_interphalangeal_3");
HAnimJoint229->setDEF("hanim_l_tarsal_distal_interphalangeal_3");
HAnimJoint229->setCenter(new float[3]{0,1,0});
HAnimJoint229->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint229->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint221->addChildren(*HAnimJoint229);

HAnimJoint216->addChildren(*HAnimJoint221);

HAnimJoint211->addChildren(*HAnimJoint216);

HAnimJoint206->addChildren(*HAnimJoint211);

HAnimJoint147->addChildren(*HAnimJoint206);

HAnimJoint138->addChildren(*HAnimJoint147);

CHAnimJoint* HAnimJoint230 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint230->setName("l_calcaneocuboid");
HAnimJoint230->setDEF("hanim_l_calcaneocuboid");
HAnimJoint230->setCenter(new float[3]{0,1,0});
HAnimJoint230->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint230->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape231 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet232 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet232->setVertexCount(new int[1]{1});
CCoordinate* Coordinate233 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate233->setPoint(new float[3]{0,1,0});
LineSet232->setCoord(*Coordinate233);

//from l_calcaneocuboid to l_transversetarsal
CColorRGBA* ColorRGBA234 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA234->setUSE("HAnimSegmentLineColorRGBA");
LineSet232->setColor(*ColorRGBA234);

Shape231->setGeometry(LineSet232);

HAnimJoint230->setShape(*Shape231);

CHAnimJoint* HAnimJoint235 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint235->setName("l_transversetarsal");
HAnimJoint235->setDEF("hanim_l_transversetarsal");
HAnimJoint235->setCenter(new float[3]{0,1,0});
HAnimJoint235->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint235->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape236 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet237 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet237->setVertexCount(new int[1]{1});
CCoordinate* Coordinate238 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate238->setPoint(new float[3]{0,1,0});
LineSet237->setCoord(*Coordinate238);

//from l_transversetarsal to l_tarsometatarsal_4
CColorRGBA* ColorRGBA239 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA239->setUSE("HAnimSegmentLineColorRGBA");
LineSet237->setColor(*ColorRGBA239);

Shape236->setGeometry(LineSet237);

HAnimJoint235->setShape(*Shape236);

CShape* Shape240 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet241 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet241->setVertexCount(new int[1]{1});
CCoordinate* Coordinate242 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate242->setPoint(new float[3]{0,1,0});
LineSet241->setCoord(*Coordinate242);

//from l_transversetarsal to l_tarsometatarsal_5
CColorRGBA* ColorRGBA243 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA243->setUSE("HAnimSegmentLineColorRGBA");
LineSet241->setColor(*ColorRGBA243);

Shape240->setGeometry(LineSet241);

HAnimJoint235->addShape(*Shape240);

CHAnimJoint* HAnimJoint244 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint244->setName("l_tarsometatarsal_4");
HAnimJoint244->setDEF("hanim_l_tarsometatarsal_4");
HAnimJoint244->setCenter(new float[3]{0,1,0});
HAnimJoint244->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint244->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape245 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet246 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet246->setVertexCount(new int[1]{1});
CCoordinate* Coordinate247 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate247->setPoint(new float[3]{0,1,0});
LineSet246->setCoord(*Coordinate247);

//from l_tarsometatarsal_4 to l_metatarsophalangeal_4
CColorRGBA* ColorRGBA248 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA248->setUSE("HAnimSegmentLineColorRGBA");
LineSet246->setColor(*ColorRGBA248);

Shape245->setGeometry(LineSet246);

HAnimJoint244->setShape(*Shape245);

CHAnimJoint* HAnimJoint249 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint249->setName("l_metatarsophalangeal_4");
HAnimJoint249->setDEF("hanim_l_metatarsophalangeal_4");
HAnimJoint249->setCenter(new float[3]{0,1,0});
HAnimJoint249->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint249->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape250 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet251 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet251->setVertexCount(new int[1]{1});
CCoordinate* Coordinate252 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate252->setPoint(new float[3]{0,1,0});
LineSet251->setCoord(*Coordinate252);

//from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4
CColorRGBA* ColorRGBA253 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA253->setUSE("HAnimSegmentLineColorRGBA");
LineSet251->setColor(*ColorRGBA253);

Shape250->setGeometry(LineSet251);

HAnimJoint249->setShape(*Shape250);

CHAnimJoint* HAnimJoint254 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint254->setName("l_tarsal_proximal_interphalangeal_4");
HAnimJoint254->setDEF("hanim_l_tarsal_proximal_interphalangeal_4");
HAnimJoint254->setCenter(new float[3]{0,1,0});
HAnimJoint254->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint254->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape255 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet256 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet256->setVertexCount(new int[1]{1});
CCoordinate* Coordinate257 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate257->setPoint(new float[3]{0,1,0});
LineSet256->setCoord(*Coordinate257);

//from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4
CColorRGBA* ColorRGBA258 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA258->setUSE("HAnimSegmentLineColorRGBA");
LineSet256->setColor(*ColorRGBA258);

Shape255->setGeometry(LineSet256);

HAnimJoint254->setShape(*Shape255);

CHAnimSite* HAnimSite259 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite259->setName("l_tarsal_distal_phalanx_4_tip");
HAnimSite259->setDEF("hanim_l_tarsal_distal_phalanx_4_tip");
HAnimSite259->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor260 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor260->setDescription("HAnimSite l_tarsal_distal_phalanx_4_tip");
HAnimSite259->addChildren(*TouchSensor260);

CShape* Shape261 = (CShape *)(m_pScene.createNode("Shape"));
Shape261->setUSE("HAnimSiteShape");
HAnimSite259->addChildren(*Shape261);

HAnimJoint254->addHAnimSite(*HAnimSite259);

CHAnimJoint* HAnimJoint262 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint262->setName("l_tarsal_distal_interphalangeal_4");
HAnimJoint262->setDEF("hanim_l_tarsal_distal_interphalangeal_4");
HAnimJoint262->setCenter(new float[3]{0,1,0});
HAnimJoint262->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint262->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint254->addChildren(*HAnimJoint262);

HAnimJoint249->addChildren(*HAnimJoint254);

HAnimJoint244->addChildren(*HAnimJoint249);

HAnimJoint235->addChildren(*HAnimJoint244);

CHAnimJoint* HAnimJoint263 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint263->setName("l_tarsometatarsal_5");
HAnimJoint263->setDEF("hanim_l_tarsometatarsal_5");
HAnimJoint263->setCenter(new float[3]{0,1,0});
HAnimJoint263->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint263->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape264 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet265 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet265->setVertexCount(new int[1]{1});
CCoordinate* Coordinate266 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate266->setPoint(new float[3]{0,1,0});
LineSet265->setCoord(*Coordinate266);

//from l_tarsometatarsal_5 to l_metatarsophalangeal_5
CColorRGBA* ColorRGBA267 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA267->setUSE("HAnimSegmentLineColorRGBA");
LineSet265->setColor(*ColorRGBA267);

Shape264->setGeometry(LineSet265);

HAnimJoint263->setShape(*Shape264);

CHAnimSite* HAnimSite268 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite268->setName("l_metatarsal_phalanx_5_pt");
HAnimSite268->setDEF("hanim_l_metatarsal_phalanx_5_pt");
HAnimSite268->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor269 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor269->setDescription("HAnimSite l_metatarsal_phalanx_5_pt");
HAnimSite268->addChildren(*TouchSensor269);

CShape* Shape270 = (CShape *)(m_pScene.createNode("Shape"));
Shape270->setUSE("HAnimSiteShape");
HAnimSite268->addChildren(*Shape270);

HAnimJoint263->addHAnimSite(*HAnimSite268);

CHAnimJoint* HAnimJoint271 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint271->setName("l_metatarsophalangeal_5");
HAnimJoint271->setDEF("hanim_l_metatarsophalangeal_5");
HAnimJoint271->setCenter(new float[3]{0,1,0});
HAnimJoint271->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint271->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape272 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet273 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet273->setVertexCount(new int[1]{1});
CCoordinate* Coordinate274 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate274->setPoint(new float[3]{0,1,0});
LineSet273->setCoord(*Coordinate274);

//from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5
CColorRGBA* ColorRGBA275 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA275->setUSE("HAnimSegmentLineColorRGBA");
LineSet273->setColor(*ColorRGBA275);

Shape272->setGeometry(LineSet273);

HAnimJoint271->setShape(*Shape272);

CHAnimJoint* HAnimJoint276 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint276->setName("l_tarsal_proximal_interphalangeal_5");
HAnimJoint276->setDEF("hanim_l_tarsal_proximal_interphalangeal_5");
HAnimJoint276->setCenter(new float[3]{0,1,0});
HAnimJoint276->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint276->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape277 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet278 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet278->setVertexCount(new int[1]{1});
CCoordinate* Coordinate279 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate279->setPoint(new float[3]{0,1,0});
LineSet278->setCoord(*Coordinate279);

//from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5
CColorRGBA* ColorRGBA280 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA280->setUSE("HAnimSegmentLineColorRGBA");
LineSet278->setColor(*ColorRGBA280);

Shape277->setGeometry(LineSet278);

HAnimJoint276->setShape(*Shape277);

CHAnimSite* HAnimSite281 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite281->setName("l_tarsal_distal_phalanx_5_tip");
HAnimSite281->setDEF("hanim_l_tarsal_distal_phalanx_5_tip");
HAnimSite281->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor282 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor282->setDescription("HAnimSite l_tarsal_distal_phalanx_5_tip");
HAnimSite281->addChildren(*TouchSensor282);

CShape* Shape283 = (CShape *)(m_pScene.createNode("Shape"));
Shape283->setUSE("HAnimSiteShape");
HAnimSite281->addChildren(*Shape283);

HAnimJoint276->addHAnimSite(*HAnimSite281);

CHAnimJoint* HAnimJoint284 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint284->setName("l_tarsal_distal_interphalangeal_5");
HAnimJoint284->setDEF("hanim_l_tarsal_distal_interphalangeal_5");
HAnimJoint284->setCenter(new float[3]{0,1,0});
HAnimJoint284->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint284->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint276->addChildren(*HAnimJoint284);

HAnimJoint271->addChildren(*HAnimJoint276);

HAnimJoint263->addChildren(*HAnimJoint271);

HAnimJoint235->addChildren(*HAnimJoint263);

HAnimJoint230->addChildren(*HAnimJoint235);

HAnimJoint138->addChildren(*HAnimJoint230);

HAnimJoint127->addChildren(*HAnimJoint138);

HAnimJoint113->addChildren(*HAnimJoint127);

HAnimJoint80->addChildren(*HAnimJoint113);

CHAnimJoint* HAnimJoint285 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint285->setName("r_hip");
HAnimJoint285->setDEF("hanim_r_hip");
HAnimJoint285->setCenter(new float[3]{-0.095,0.9171,0.0029});
HAnimJoint285->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint285->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape286 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet287 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet287->setVertexCount(new int[1]{2});
CCoordinate* Coordinate288 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate288->setPoint(new float[6]{-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318});
LineSet287->setCoord(*Coordinate288);

//from r_hip to r_knee
CColorRGBA* ColorRGBA289 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA289->setUSE("HAnimSegmentLineColorRGBA");
LineSet287->setColor(*ColorRGBA289);

Shape286->setGeometry(LineSet287);

HAnimJoint285->setShape(*Shape286);

CHAnimSite* HAnimSite290 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite290->setName("r_lateral_malleolus_pt");
HAnimSite290->setDEF("hanim_r_lateral_malleolus_pt");
HAnimSite290->setTranslation(new float[3]{-0.1006,0.0658,-0.1075});
CTouchSensor* TouchSensor291 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor291->setDescription("HAnimSite r_lateral_malleolus_pt");
HAnimSite290->addChildren(*TouchSensor291);

CShape* Shape292 = (CShape *)(m_pScene.createNode("Shape"));
Shape292->setUSE("HAnimSiteShape");
HAnimSite290->addChildren(*Shape292);

HAnimJoint285->addHAnimSite(*HAnimSite290);

CHAnimSite* HAnimSite293 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite293->setName("r_medial_malleolus_pt");
HAnimSite293->setDEF("hanim_r_medial_malleolus_pt");
HAnimSite293->setTranslation(new float[3]{-0.0591,0.076,-0.0928});
CTouchSensor* TouchSensor294 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor294->setDescription("HAnimSite r_medial_malleolus_pt");
HAnimSite293->addChildren(*TouchSensor294);

CShape* Shape295 = (CShape *)(m_pScene.createNode("Shape"));
Shape295->setUSE("HAnimSiteShape");
HAnimSite293->addChildren(*Shape295);

HAnimJoint285->addHAnimSite(*HAnimSite293);

CHAnimSite* HAnimSite296 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite296->setName("r_tibiale_pt");
HAnimSite296->setDEF("hanim_r_tibiale_pt");
HAnimSite296->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor297 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor297->setDescription("HAnimSite r_tibiale_pt");
HAnimSite296->addChildren(*TouchSensor297);

CShape* Shape298 = (CShape *)(m_pScene.createNode("Shape"));
Shape298->setUSE("HAnimSiteShape");
HAnimSite296->addChildren(*Shape298);

HAnimJoint285->addHAnimSite(*HAnimSite296);

CHAnimJoint* HAnimJoint299 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint299->setName("r_knee");
HAnimJoint299->setDEF("hanim_r_knee");
HAnimJoint299->setCenter(new float[3]{-0.0867,0.4913,0.0318});
HAnimJoint299->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint299->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape300 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet301 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet301->setVertexCount(new int[1]{2});
CCoordinate* Coordinate302 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate302->setPoint(new float[6]{-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766});
LineSet301->setCoord(*Coordinate302);

//from r_knee to r_talocrural
CColorRGBA* ColorRGBA303 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA303->setUSE("HAnimSegmentLineColorRGBA");
LineSet301->setColor(*ColorRGBA303);

Shape300->setGeometry(LineSet301);

HAnimJoint299->setShape(*Shape300);

CHAnimSite* HAnimSite304 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite304->setName("r_calcaneus_posterior_pt");
HAnimSite304->setDEF("hanim_r_calcaneus_posterior_pt");
HAnimSite304->setTranslation(new float[3]{-0.0692,0.0297,-0.1221});
CTouchSensor* TouchSensor305 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor305->setDescription("HAnimSite r_calcaneus_posterior_pt");
HAnimSite304->addChildren(*TouchSensor305);

CShape* Shape306 = (CShape *)(m_pScene.createNode("Shape"));
Shape306->setUSE("HAnimSiteShape");
HAnimSite304->addChildren(*Shape306);

HAnimJoint299->addHAnimSite(*HAnimSite304);

CHAnimSite* HAnimSite307 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite307->setName("r_sphyrion_pt");
HAnimSite307->setDEF("hanim_r_sphyrion_pt");
HAnimSite307->setTranslation(new float[3]{-0.0603,0.061,-0.1002});
CTouchSensor* TouchSensor308 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor308->setDescription("HAnimSite r_sphyrion_pt");
HAnimSite307->addChildren(*TouchSensor308);

CShape* Shape309 = (CShape *)(m_pScene.createNode("Shape"));
Shape309->setUSE("HAnimSiteShape");
HAnimSite307->addChildren(*Shape309);

HAnimJoint299->addHAnimSite(*HAnimSite307);

CHAnimJoint* HAnimJoint310 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint310->setName("r_talocrural");
HAnimJoint310->setDEF("hanim_r_talocrural");
HAnimJoint310->setCenter(new float[3]{-0.0801,0.0712,-0.0766});
HAnimJoint310->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint310->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape311 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet312 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet312->setVertexCount(new int[1]{2});
CCoordinate* Coordinate313 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate313->setPoint(new float[6]{-0.0801,0.0712,-0.0766,0,1,0});
LineSet312->setCoord(*Coordinate313);

//from r_talocrural to r_talocalcaneonavicular
CColorRGBA* ColorRGBA314 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA314->setUSE("HAnimSegmentLineColorRGBA");
LineSet312->setColor(*ColorRGBA314);

Shape311->setGeometry(LineSet312);

HAnimJoint310->setShape(*Shape311);

CShape* Shape315 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet316 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet316->setVertexCount(new int[1]{2});
CCoordinate* Coordinate317 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate317->setPoint(new float[6]{-0.0801,0.0712,-0.0766,0,1,0});
LineSet316->setCoord(*Coordinate317);

//from r_talocrural to r_calcaneocuboid
CColorRGBA* ColorRGBA318 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA318->setUSE("HAnimSegmentLineColorRGBA");
LineSet316->setColor(*ColorRGBA318);

Shape315->setGeometry(LineSet316);

HAnimJoint310->addShape(*Shape315);

CHAnimJoint* HAnimJoint319 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint319->setName("r_talocalcaneonavicular");
HAnimJoint319->setDEF("hanim_r_talocalcaneonavicular");
HAnimJoint319->setCenter(new float[3]{0,1,0});
HAnimJoint319->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint319->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape320 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet321 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet321->setVertexCount(new int[1]{1});
CCoordinate* Coordinate322 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate322->setPoint(new float[3]{0,1,0});
LineSet321->setCoord(*Coordinate322);

//from r_talocalcaneonavicular to r_cuneonavicular_1
CColorRGBA* ColorRGBA323 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA323->setUSE("HAnimSegmentLineColorRGBA");
LineSet321->setColor(*ColorRGBA323);

Shape320->setGeometry(LineSet321);

HAnimJoint319->setShape(*Shape320);

CShape* Shape324 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet325 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet325->setVertexCount(new int[1]{1});
CCoordinate* Coordinate326 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate326->setPoint(new float[3]{0,1,0});
LineSet325->setCoord(*Coordinate326);

//from r_talocalcaneonavicular to r_cuneonavicular_2
CColorRGBA* ColorRGBA327 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA327->setUSE("HAnimSegmentLineColorRGBA");
LineSet325->setColor(*ColorRGBA327);

Shape324->setGeometry(LineSet325);

HAnimJoint319->addShape(*Shape324);

CShape* Shape328 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet329 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet329->setVertexCount(new int[1]{1});
CCoordinate* Coordinate330 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate330->setPoint(new float[3]{0,1,0});
LineSet329->setCoord(*Coordinate330);

//from r_talocalcaneonavicular to r_cuneonavicular_3
CColorRGBA* ColorRGBA331 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA331->setUSE("HAnimSegmentLineColorRGBA");
LineSet329->setColor(*ColorRGBA331);

Shape328->setGeometry(LineSet329);

HAnimJoint319->addShape(*Shape328);

CHAnimJoint* HAnimJoint332 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint332->setName("r_cuneonavicular_1");
HAnimJoint332->setDEF("hanim_r_cuneonavicular_1");
HAnimJoint332->setCenter(new float[3]{0,1,0});
HAnimJoint332->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint332->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape333 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet334 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet334->setVertexCount(new int[1]{1});
CCoordinate* Coordinate335 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate335->setPoint(new float[3]{0,1,0});
LineSet334->setCoord(*Coordinate335);

//from r_cuneonavicular_1 to r_tarsometatarsal_1
CColorRGBA* ColorRGBA336 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA336->setUSE("HAnimSegmentLineColorRGBA");
LineSet334->setColor(*ColorRGBA336);

Shape333->setGeometry(LineSet334);

HAnimJoint332->setShape(*Shape333);

CHAnimJoint* HAnimJoint337 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint337->setName("r_tarsometatarsal_1");
HAnimJoint337->setDEF("hanim_r_tarsometatarsal_1");
HAnimJoint337->setCenter(new float[3]{0,1,0});
HAnimJoint337->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint337->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape338 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet339 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet339->setVertexCount(new int[1]{1});
CCoordinate* Coordinate340 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate340->setPoint(new float[3]{0,1,0});
LineSet339->setCoord(*Coordinate340);

//from r_tarsometatarsal_1 to r_metatarsophalangeal_1
CColorRGBA* ColorRGBA341 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA341->setUSE("HAnimSegmentLineColorRGBA");
LineSet339->setColor(*ColorRGBA341);

Shape338->setGeometry(LineSet339);

HAnimJoint337->setShape(*Shape338);

CHAnimSite* HAnimSite342 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite342->setName("r_metatarsal_phalanx_1_pt");
HAnimSite342->setDEF("hanim_r_metatarsal_phalanx_1_pt");
HAnimSite342->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor343 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor343->setDescription("HAnimSite r_metatarsal_phalanx_1_pt");
HAnimSite342->addChildren(*TouchSensor343);

CShape* Shape344 = (CShape *)(m_pScene.createNode("Shape"));
Shape344->setUSE("HAnimSiteShape");
HAnimSite342->addChildren(*Shape344);

HAnimJoint337->addHAnimSite(*HAnimSite342);

CHAnimJoint* HAnimJoint345 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint345->setName("r_metatarsophalangeal_1");
HAnimJoint345->setDEF("hanim_r_metatarsophalangeal_1");
HAnimJoint345->setCenter(new float[3]{0,1,0});
HAnimJoint345->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint345->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape346 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet347 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet347->setVertexCount(new int[1]{1});
CCoordinate* Coordinate348 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate348->setPoint(new float[3]{0,1,0});
LineSet347->setCoord(*Coordinate348);

//from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1
CColorRGBA* ColorRGBA349 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA349->setUSE("HAnimSegmentLineColorRGBA");
LineSet347->setColor(*ColorRGBA349);

Shape346->setGeometry(LineSet347);

HAnimJoint345->setShape(*Shape346);

CHAnimSite* HAnimSite350 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite350->setName("r_tarsal_distal_phalanx_1_tip");
HAnimSite350->setDEF("hanim_r_tarsal_distal_phalanx_1_tip");
HAnimSite350->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor351 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor351->setDescription("HAnimSite r_tarsal_distal_phalanx_1_tip");
HAnimSite350->addChildren(*TouchSensor351);

CShape* Shape352 = (CShape *)(m_pScene.createNode("Shape"));
Shape352->setUSE("HAnimSiteShape");
HAnimSite350->addChildren(*Shape352);

HAnimJoint345->addHAnimSite(*HAnimSite350);

CHAnimJoint* HAnimJoint353 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint353->setName("r_tarsal_interphalangeal_1");
HAnimJoint353->setDEF("hanim_r_tarsal_interphalangeal_1");
HAnimJoint353->setCenter(new float[3]{0,1,0});
HAnimJoint353->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint353->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint345->addChildren(*HAnimJoint353);

HAnimJoint337->addChildren(*HAnimJoint345);

HAnimJoint332->addChildren(*HAnimJoint337);

HAnimJoint319->addChildren(*HAnimJoint332);

CHAnimJoint* HAnimJoint354 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint354->setName("r_cuneonavicular_2");
HAnimJoint354->setDEF("hanim_r_cuneonavicular_2");
HAnimJoint354->setCenter(new float[3]{0,1,0});
HAnimJoint354->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint354->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape355 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet356 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet356->setVertexCount(new int[1]{1});
CCoordinate* Coordinate357 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate357->setPoint(new float[3]{0,1,0});
LineSet356->setCoord(*Coordinate357);

//from r_cuneonavicular_2 to r_tarsometatarsal_2
CColorRGBA* ColorRGBA358 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA358->setUSE("HAnimSegmentLineColorRGBA");
LineSet356->setColor(*ColorRGBA358);

Shape355->setGeometry(LineSet356);

HAnimJoint354->setShape(*Shape355);

CHAnimJoint* HAnimJoint359 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint359->setName("r_tarsometatarsal_2");
HAnimJoint359->setDEF("hanim_r_tarsometatarsal_2");
HAnimJoint359->setCenter(new float[3]{0,1,0});
HAnimJoint359->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint359->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape360 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet361 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet361->setVertexCount(new int[1]{1});
CCoordinate* Coordinate362 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate362->setPoint(new float[3]{0,1,0});
LineSet361->setCoord(*Coordinate362);

//from r_tarsometatarsal_2 to r_metatarsophalangeal_2
CColorRGBA* ColorRGBA363 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA363->setUSE("HAnimSegmentLineColorRGBA");
LineSet361->setColor(*ColorRGBA363);

Shape360->setGeometry(LineSet361);

HAnimJoint359->setShape(*Shape360);

CHAnimJoint* HAnimJoint364 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint364->setName("r_metatarsophalangeal_2");
HAnimJoint364->setDEF("hanim_r_metatarsophalangeal_2");
HAnimJoint364->setCenter(new float[3]{0,1,0});
HAnimJoint364->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint364->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape365 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet366 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet366->setVertexCount(new int[1]{1});
CCoordinate* Coordinate367 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate367->setPoint(new float[3]{0,1,0});
LineSet366->setCoord(*Coordinate367);

//from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2
CColorRGBA* ColorRGBA368 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA368->setUSE("HAnimSegmentLineColorRGBA");
LineSet366->setColor(*ColorRGBA368);

Shape365->setGeometry(LineSet366);

HAnimJoint364->setShape(*Shape365);

CHAnimJoint* HAnimJoint369 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint369->setName("r_tarsal_proximal_interphalangeal_2");
HAnimJoint369->setDEF("hanim_r_tarsal_proximal_interphalangeal_2");
HAnimJoint369->setCenter(new float[3]{0,1,0});
HAnimJoint369->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint369->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape370 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet371 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet371->setVertexCount(new int[1]{1});
CCoordinate* Coordinate372 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate372->setPoint(new float[3]{0,1,0});
LineSet371->setCoord(*Coordinate372);

//from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2
CColorRGBA* ColorRGBA373 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA373->setUSE("HAnimSegmentLineColorRGBA");
LineSet371->setColor(*ColorRGBA373);

Shape370->setGeometry(LineSet371);

HAnimJoint369->setShape(*Shape370);

CHAnimSite* HAnimSite374 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite374->setName("r_tarsal_distal_phalanx_2_tip");
HAnimSite374->setDEF("hanim_r_tarsal_distal_phalanx_2_tip");
HAnimSite374->setTranslation(new float[3]{-0.0883,0.0134,0.1383});
CTouchSensor* TouchSensor375 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor375->setDescription("HAnimSite r_tarsal_distal_phalanx_2_tip");
HAnimSite374->addChildren(*TouchSensor375);

CShape* Shape376 = (CShape *)(m_pScene.createNode("Shape"));
Shape376->setUSE("HAnimSiteShape");
HAnimSite374->addChildren(*Shape376);

HAnimJoint369->addHAnimSite(*HAnimSite374);

CHAnimJoint* HAnimJoint377 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint377->setName("r_tarsal_distal_interphalangeal_2");
HAnimJoint377->setDEF("hanim_r_tarsal_distal_interphalangeal_2");
HAnimJoint377->setCenter(new float[3]{0,1,0});
HAnimJoint377->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint377->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint369->addChildren(*HAnimJoint377);

HAnimJoint364->addChildren(*HAnimJoint369);

HAnimJoint359->addChildren(*HAnimJoint364);

HAnimJoint354->addChildren(*HAnimJoint359);

HAnimJoint319->addChildren(*HAnimJoint354);

CHAnimJoint* HAnimJoint378 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint378->setName("r_cuneonavicular_3");
HAnimJoint378->setDEF("hanim_r_cuneonavicular_3");
HAnimJoint378->setCenter(new float[3]{0,1,0});
HAnimJoint378->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint378->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape379 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet380 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet380->setVertexCount(new int[1]{1});
CCoordinate* Coordinate381 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate381->setPoint(new float[3]{0,1,0});
LineSet380->setCoord(*Coordinate381);

//from r_cuneonavicular_3 to r_tarsometatarsal_3
CColorRGBA* ColorRGBA382 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA382->setUSE("HAnimSegmentLineColorRGBA");
LineSet380->setColor(*ColorRGBA382);

Shape379->setGeometry(LineSet380);

HAnimJoint378->setShape(*Shape379);

CHAnimJoint* HAnimJoint383 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint383->setName("r_tarsometatarsal_3");
HAnimJoint383->setDEF("hanim_r_tarsometatarsal_3");
HAnimJoint383->setCenter(new float[3]{0,1,0});
HAnimJoint383->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint383->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape384 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet385 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet385->setVertexCount(new int[1]{1});
CCoordinate* Coordinate386 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate386->setPoint(new float[3]{0,1,0});
LineSet385->setCoord(*Coordinate386);

//from r_tarsometatarsal_3 to r_metatarsophalangeal_3
CColorRGBA* ColorRGBA387 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA387->setUSE("HAnimSegmentLineColorRGBA");
LineSet385->setColor(*ColorRGBA387);

Shape384->setGeometry(LineSet385);

HAnimJoint383->setShape(*Shape384);

CHAnimJoint* HAnimJoint388 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint388->setName("r_metatarsophalangeal_3");
HAnimJoint388->setDEF("hanim_r_metatarsophalangeal_3");
HAnimJoint388->setCenter(new float[3]{0,1,0});
HAnimJoint388->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint388->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape389 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet390 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet390->setVertexCount(new int[1]{1});
CCoordinate* Coordinate391 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate391->setPoint(new float[3]{0,1,0});
LineSet390->setCoord(*Coordinate391);

//from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3
CColorRGBA* ColorRGBA392 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA392->setUSE("HAnimSegmentLineColorRGBA");
LineSet390->setColor(*ColorRGBA392);

Shape389->setGeometry(LineSet390);

HAnimJoint388->setShape(*Shape389);

CHAnimJoint* HAnimJoint393 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint393->setName("r_tarsal_proximal_interphalangeal_3");
HAnimJoint393->setDEF("hanim_r_tarsal_proximal_interphalangeal_3");
HAnimJoint393->setCenter(new float[3]{0,1,0});
HAnimJoint393->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint393->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape394 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet395 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet395->setVertexCount(new int[1]{1});
CCoordinate* Coordinate396 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate396->setPoint(new float[3]{0,1,0});
LineSet395->setCoord(*Coordinate396);

//from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3
CColorRGBA* ColorRGBA397 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA397->setUSE("HAnimSegmentLineColorRGBA");
LineSet395->setColor(*ColorRGBA397);

Shape394->setGeometry(LineSet395);

HAnimJoint393->setShape(*Shape394);

CHAnimSite* HAnimSite398 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite398->setName("r_tarsal_distal_phalanx_3_tip");
HAnimSite398->setDEF("hanim_r_tarsal_distal_phalanx_3_tip");
HAnimSite398->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor399 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor399->setDescription("HAnimSite r_tarsal_distal_phalanx_3_tip");
HAnimSite398->addChildren(*TouchSensor399);

CShape* Shape400 = (CShape *)(m_pScene.createNode("Shape"));
Shape400->setUSE("HAnimSiteShape");
HAnimSite398->addChildren(*Shape400);

HAnimJoint393->addHAnimSite(*HAnimSite398);

CHAnimJoint* HAnimJoint401 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint401->setName("r_tarsal_distal_interphalangeal_3");
HAnimJoint401->setDEF("hanim_r_tarsal_distal_interphalangeal_3");
HAnimJoint401->setCenter(new float[3]{0,1,0});
HAnimJoint401->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint401->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint393->addChildren(*HAnimJoint401);

HAnimJoint388->addChildren(*HAnimJoint393);

HAnimJoint383->addChildren(*HAnimJoint388);

HAnimJoint378->addChildren(*HAnimJoint383);

HAnimJoint319->addChildren(*HAnimJoint378);

HAnimJoint310->addChildren(*HAnimJoint319);

CHAnimJoint* HAnimJoint402 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint402->setName("r_calcaneocuboid");
HAnimJoint402->setDEF("hanim_r_calcaneocuboid");
HAnimJoint402->setCenter(new float[3]{0,1,0});
HAnimJoint402->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint402->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape403 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet404 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet404->setVertexCount(new int[1]{1});
CCoordinate* Coordinate405 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate405->setPoint(new float[3]{0,1,0});
LineSet404->setCoord(*Coordinate405);

//from r_calcaneocuboid to r_transversetarsal
CColorRGBA* ColorRGBA406 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA406->setUSE("HAnimSegmentLineColorRGBA");
LineSet404->setColor(*ColorRGBA406);

Shape403->setGeometry(LineSet404);

HAnimJoint402->setShape(*Shape403);

CHAnimJoint* HAnimJoint407 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint407->setName("r_transversetarsal");
HAnimJoint407->setDEF("hanim_r_transversetarsal");
HAnimJoint407->setCenter(new float[3]{0,1,0});
HAnimJoint407->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint407->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape408 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet409 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet409->setVertexCount(new int[1]{1});
CCoordinate* Coordinate410 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate410->setPoint(new float[3]{0,1,0});
LineSet409->setCoord(*Coordinate410);

//from r_transversetarsal to r_tarsometatarsal_4
CColorRGBA* ColorRGBA411 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA411->setUSE("HAnimSegmentLineColorRGBA");
LineSet409->setColor(*ColorRGBA411);

Shape408->setGeometry(LineSet409);

HAnimJoint407->setShape(*Shape408);

CShape* Shape412 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet413 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet413->setVertexCount(new int[1]{1});
CCoordinate* Coordinate414 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate414->setPoint(new float[3]{0,1,0});
LineSet413->setCoord(*Coordinate414);

//from r_transversetarsal to r_tarsometatarsal_5
CColorRGBA* ColorRGBA415 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA415->setUSE("HAnimSegmentLineColorRGBA");
LineSet413->setColor(*ColorRGBA415);

Shape412->setGeometry(LineSet413);

HAnimJoint407->addShape(*Shape412);

CHAnimJoint* HAnimJoint416 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint416->setName("r_tarsometatarsal_4");
HAnimJoint416->setDEF("hanim_r_tarsometatarsal_4");
HAnimJoint416->setCenter(new float[3]{0,1,0});
HAnimJoint416->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint416->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape417 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet418 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet418->setVertexCount(new int[1]{1});
CCoordinate* Coordinate419 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate419->setPoint(new float[3]{0,1,0});
LineSet418->setCoord(*Coordinate419);

//from r_tarsometatarsal_4 to r_metatarsophalangeal_4
CColorRGBA* ColorRGBA420 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA420->setUSE("HAnimSegmentLineColorRGBA");
LineSet418->setColor(*ColorRGBA420);

Shape417->setGeometry(LineSet418);

HAnimJoint416->setShape(*Shape417);

CHAnimJoint* HAnimJoint421 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint421->setName("r_metatarsophalangeal_4");
HAnimJoint421->setDEF("hanim_r_metatarsophalangeal_4");
HAnimJoint421->setCenter(new float[3]{0,1,0});
HAnimJoint421->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint421->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape422 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet423 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet423->setVertexCount(new int[1]{1});
CCoordinate* Coordinate424 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate424->setPoint(new float[3]{0,1,0});
LineSet423->setCoord(*Coordinate424);

//from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4
CColorRGBA* ColorRGBA425 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA425->setUSE("HAnimSegmentLineColorRGBA");
LineSet423->setColor(*ColorRGBA425);

Shape422->setGeometry(LineSet423);

HAnimJoint421->setShape(*Shape422);

CHAnimJoint* HAnimJoint426 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint426->setName("r_tarsal_proximal_interphalangeal_4");
HAnimJoint426->setDEF("hanim_r_tarsal_proximal_interphalangeal_4");
HAnimJoint426->setCenter(new float[3]{0,1,0});
HAnimJoint426->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint426->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape427 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet428 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet428->setVertexCount(new int[1]{1});
CCoordinate* Coordinate429 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate429->setPoint(new float[3]{0,1,0});
LineSet428->setCoord(*Coordinate429);

//from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4
CColorRGBA* ColorRGBA430 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA430->setUSE("HAnimSegmentLineColorRGBA");
LineSet428->setColor(*ColorRGBA430);

Shape427->setGeometry(LineSet428);

HAnimJoint426->setShape(*Shape427);

CHAnimSite* HAnimSite431 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite431->setName("r_tarsal_distal_phalanx_4_tip");
HAnimSite431->setDEF("hanim_r_tarsal_distal_phalanx_4_tip");
HAnimSite431->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor432 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor432->setDescription("HAnimSite r_tarsal_distal_phalanx_4_tip");
HAnimSite431->addChildren(*TouchSensor432);

CShape* Shape433 = (CShape *)(m_pScene.createNode("Shape"));
Shape433->setUSE("HAnimSiteShape");
HAnimSite431->addChildren(*Shape433);

HAnimJoint426->addHAnimSite(*HAnimSite431);

CHAnimJoint* HAnimJoint434 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint434->setName("r_tarsal_distal_interphalangeal_4");
HAnimJoint434->setDEF("hanim_r_tarsal_distal_interphalangeal_4");
HAnimJoint434->setCenter(new float[3]{0,1,0});
HAnimJoint434->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint434->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint426->addChildren(*HAnimJoint434);

HAnimJoint421->addChildren(*HAnimJoint426);

HAnimJoint416->addChildren(*HAnimJoint421);

HAnimJoint407->addChildren(*HAnimJoint416);

CHAnimJoint* HAnimJoint435 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint435->setName("r_tarsometatarsal_5");
HAnimJoint435->setDEF("hanim_r_tarsometatarsal_5");
HAnimJoint435->setCenter(new float[3]{0,1,0});
HAnimJoint435->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint435->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape436 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet437 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet437->setVertexCount(new int[1]{1});
CCoordinate* Coordinate438 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate438->setPoint(new float[3]{0,1,0});
LineSet437->setCoord(*Coordinate438);

//from r_tarsometatarsal_5 to r_metatarsophalangeal_5
CColorRGBA* ColorRGBA439 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA439->setUSE("HAnimSegmentLineColorRGBA");
LineSet437->setColor(*ColorRGBA439);

Shape436->setGeometry(LineSet437);

HAnimJoint435->setShape(*Shape436);

CHAnimSite* HAnimSite440 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite440->setName("r_metatarsal_phalanx_5_pt");
HAnimSite440->setDEF("hanim_r_metatarsal_phalanx_5_pt");
HAnimSite440->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor441 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor441->setDescription("HAnimSite r_metatarsal_phalanx_5_pt");
HAnimSite440->addChildren(*TouchSensor441);

CShape* Shape442 = (CShape *)(m_pScene.createNode("Shape"));
Shape442->setUSE("HAnimSiteShape");
HAnimSite440->addChildren(*Shape442);

HAnimJoint435->addHAnimSite(*HAnimSite440);

CHAnimJoint* HAnimJoint443 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint443->setName("r_metatarsophalangeal_5");
HAnimJoint443->setDEF("hanim_r_metatarsophalangeal_5");
HAnimJoint443->setCenter(new float[3]{0,1,0});
HAnimJoint443->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint443->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape444 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet445 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet445->setVertexCount(new int[1]{1});
CCoordinate* Coordinate446 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate446->setPoint(new float[3]{0,1,0});
LineSet445->setCoord(*Coordinate446);

//from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5
CColorRGBA* ColorRGBA447 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA447->setUSE("HAnimSegmentLineColorRGBA");
LineSet445->setColor(*ColorRGBA447);

Shape444->setGeometry(LineSet445);

HAnimJoint443->setShape(*Shape444);

CHAnimJoint* HAnimJoint448 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint448->setName("r_tarsal_proximal_interphalangeal_5");
HAnimJoint448->setDEF("hanim_r_tarsal_proximal_interphalangeal_5");
HAnimJoint448->setCenter(new float[3]{0,1,0});
HAnimJoint448->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint448->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape449 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet450 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet450->setVertexCount(new int[1]{1});
CCoordinate* Coordinate451 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate451->setPoint(new float[3]{0,1,0});
LineSet450->setCoord(*Coordinate451);

//from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5
CColorRGBA* ColorRGBA452 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA452->setUSE("HAnimSegmentLineColorRGBA");
LineSet450->setColor(*ColorRGBA452);

Shape449->setGeometry(LineSet450);

HAnimJoint448->setShape(*Shape449);

CHAnimSite* HAnimSite453 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite453->setName("r_tarsal_distal_phalanx_5_tip");
HAnimSite453->setDEF("hanim_r_tarsal_distal_phalanx_5_tip");
HAnimSite453->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor454 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor454->setDescription("HAnimSite r_tarsal_distal_phalanx_5_tip");
HAnimSite453->addChildren(*TouchSensor454);

CShape* Shape455 = (CShape *)(m_pScene.createNode("Shape"));
Shape455->setUSE("HAnimSiteShape");
HAnimSite453->addChildren(*Shape455);

HAnimJoint448->addHAnimSite(*HAnimSite453);

CHAnimJoint* HAnimJoint456 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint456->setName("r_tarsal_distal_interphalangeal_5");
HAnimJoint456->setDEF("hanim_r_tarsal_distal_interphalangeal_5");
HAnimJoint456->setCenter(new float[3]{0,1,0});
HAnimJoint456->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint456->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint448->addChildren(*HAnimJoint456);

HAnimJoint443->addChildren(*HAnimJoint448);

HAnimJoint435->addChildren(*HAnimJoint443);

HAnimJoint407->addChildren(*HAnimJoint435);

HAnimJoint402->addChildren(*HAnimJoint407);

HAnimJoint310->addChildren(*HAnimJoint402);

HAnimJoint299->addChildren(*HAnimJoint310);

HAnimJoint285->addChildren(*HAnimJoint299);

HAnimJoint80->addChildren(*HAnimJoint285);

HAnimJoint32->addChildren(*HAnimJoint80);

CHAnimJoint* HAnimJoint457 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint457->setName("vl5");
HAnimJoint457->setDEF("hanim_vl5");
HAnimJoint457->setCenter(new float[3]{0.0028,1.0568,-0.0776});
HAnimJoint457->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint457->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape458 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet459 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet459->setVertexCount(new int[1]{2});
CCoordinate* Coordinate460 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate460->setPoint(new float[6]{0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787});
LineSet459->setCoord(*Coordinate460);

//from vl5 to vl4
CColorRGBA* ColorRGBA461 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA461->setUSE("HAnimSegmentLineColorRGBA");
LineSet459->setColor(*ColorRGBA461);

Shape458->setGeometry(LineSet459);

HAnimJoint457->setShape(*Shape458);

CHAnimJoint* HAnimJoint462 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint462->setName("vl4");
HAnimJoint462->setDEF("hanim_vl4");
HAnimJoint462->setCenter(new float[3]{0.0035,1.0925,-0.0787});
HAnimJoint462->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint462->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape463 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet464 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet464->setVertexCount(new int[1]{2});
CCoordinate* Coordinate465 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate465->setPoint(new float[6]{0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796});
LineSet464->setCoord(*Coordinate465);

//from vl4 to vl3
CColorRGBA* ColorRGBA466 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA466->setUSE("HAnimSegmentLineColorRGBA");
LineSet464->setColor(*ColorRGBA466);

Shape463->setGeometry(LineSet464);

HAnimJoint462->setShape(*Shape463);

CHAnimJoint* HAnimJoint467 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint467->setName("vl3");
HAnimJoint467->setDEF("hanim_vl3");
HAnimJoint467->setCenter(new float[3]{0.0041,1.1276,-0.0796});
HAnimJoint467->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint467->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape468 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet469 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet469->setVertexCount(new int[1]{2});
CCoordinate* Coordinate470 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate470->setPoint(new float[6]{0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08});
LineSet469->setCoord(*Coordinate470);

//from vl3 to vl2
CColorRGBA* ColorRGBA471 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA471->setUSE("HAnimSegmentLineColorRGBA");
LineSet469->setColor(*ColorRGBA471);

Shape468->setGeometry(LineSet469);

HAnimJoint467->setShape(*Shape468);

CHAnimSite* HAnimSite472 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite472->setName("l_rib10_pt");
HAnimSite472->setDEF("hanim_l_rib10_pt");
HAnimSite472->setTranslation(new float[3]{0.0871,1.1925,0.0992});
CTouchSensor* TouchSensor473 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor473->setDescription("HAnimSite l_rib10_pt");
HAnimSite472->addChildren(*TouchSensor473);

CShape* Shape474 = (CShape *)(m_pScene.createNode("Shape"));
Shape474->setUSE("HAnimSiteShape");
HAnimSite472->addChildren(*Shape474);

HAnimJoint467->addHAnimSite(*HAnimSite472);

CHAnimSite* HAnimSite475 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite475->setName("r_rib10_pt");
HAnimSite475->setDEF("hanim_r_rib10_pt");
HAnimSite475->setTranslation(new float[3]{-0.0711,1.1941,0.1016});
CTouchSensor* TouchSensor476 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor476->setDescription("HAnimSite r_rib10_pt");
HAnimSite475->addChildren(*TouchSensor476);

CShape* Shape477 = (CShape *)(m_pScene.createNode("Shape"));
Shape477->setUSE("HAnimSiteShape");
HAnimSite475->addChildren(*Shape477);

HAnimJoint467->addHAnimSite(*HAnimSite475);

CHAnimSite* HAnimSite478 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite478->setName("spine_2_middle_back_pt");
HAnimSite478->setDEF("hanim_spine_2_middle_back_pt");
HAnimSite478->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor479 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor479->setDescription("HAnimSite spine_2_middle_back_pt");
HAnimSite478->addChildren(*TouchSensor479);

CShape* Shape480 = (CShape *)(m_pScene.createNode("Shape"));
Shape480->setUSE("HAnimSiteShape");
HAnimSite478->addChildren(*Shape480);

HAnimJoint467->addHAnimSite(*HAnimSite478);

CHAnimJoint* HAnimJoint481 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint481->setName("vl2");
HAnimJoint481->setDEF("hanim_vl2");
HAnimJoint481->setCenter(new float[3]{0.0045,1.1546,-0.08});
HAnimJoint481->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint481->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape482 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet483 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet483->setVertexCount(new int[1]{2});
CCoordinate* Coordinate484 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate484->setPoint(new float[6]{0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805});
LineSet483->setCoord(*Coordinate484);

//from vl2 to vl1
CColorRGBA* ColorRGBA485 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA485->setUSE("HAnimSegmentLineColorRGBA");
LineSet483->setColor(*ColorRGBA485);

Shape482->setGeometry(LineSet483);

HAnimJoint481->setShape(*Shape482);

CHAnimJoint* HAnimJoint486 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint486->setName("vl1");
HAnimJoint486->setDEF("hanim_vl1");
HAnimJoint486->setCenter(new float[3]{0.0048,1.1912,-0.0805});
HAnimJoint486->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint486->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape487 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet488 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet488->setVertexCount(new int[1]{2});
CCoordinate* Coordinate489 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate489->setPoint(new float[6]{0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808});
LineSet488->setCoord(*Coordinate489);

//from vl1 to vt12
CColorRGBA* ColorRGBA490 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA490->setUSE("HAnimSegmentLineColorRGBA");
LineSet488->setColor(*ColorRGBA490);

Shape487->setGeometry(LineSet488);

HAnimJoint486->setShape(*Shape487);

CHAnimJoint* HAnimJoint491 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint491->setName("vt12");
HAnimJoint491->setDEF("hanim_vt12");
HAnimJoint491->setCenter(new float[3]{0.0051,1.2278,-0.0808});
HAnimJoint491->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint491->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape492 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet493 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet493->setVertexCount(new int[1]{2});
CCoordinate* Coordinate494 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate494->setPoint(new float[6]{0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081});
LineSet493->setCoord(*Coordinate494);

//from vt12 to vt11
CColorRGBA* ColorRGBA495 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA495->setUSE("HAnimSegmentLineColorRGBA");
LineSet493->setColor(*ColorRGBA495);

Shape492->setGeometry(LineSet493);

HAnimJoint491->setShape(*Shape492);

CHAnimJoint* HAnimJoint496 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint496->setName("vt11");
HAnimJoint496->setDEF("hanim_vt11");
HAnimJoint496->setCenter(new float[3]{0.0053,1.2679,-0.081});
HAnimJoint496->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint496->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape497 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet498 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet498->setVertexCount(new int[1]{2});
CCoordinate* Coordinate499 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate499->setPoint(new float[6]{0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822});
LineSet498->setCoord(*Coordinate499);

//from vt11 to vt10
CColorRGBA* ColorRGBA500 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA500->setUSE("HAnimSegmentLineColorRGBA");
LineSet498->setColor(*ColorRGBA500);

Shape497->setGeometry(LineSet498);

HAnimJoint496->setShape(*Shape497);

CHAnimSite* HAnimSite501 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite501->setName("substernale_pt");
HAnimSite501->setDEF("hanim_substernale_pt");
HAnimSite501->setTranslation(new float[3]{0.0085,1.2995,0.1147});
CTouchSensor* TouchSensor502 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor502->setDescription("HAnimSite substernale_pt");
HAnimSite501->addChildren(*TouchSensor502);

CShape* Shape503 = (CShape *)(m_pScene.createNode("Shape"));
Shape503->setUSE("HAnimSiteShape");
HAnimSite501->addChildren(*Shape503);

HAnimJoint496->addHAnimSite(*HAnimSite501);

CHAnimJoint* HAnimJoint504 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint504->setName("vt10");
HAnimJoint504->setDEF("hanim_vt10");
HAnimJoint504->setCenter(new float[3]{0.0056,1.2848,-0.0822});
HAnimJoint504->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint504->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape505 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet506 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet506->setVertexCount(new int[1]{2});
CCoordinate* Coordinate507 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate507->setPoint(new float[6]{0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838});
LineSet506->setCoord(*Coordinate507);

//from vt10 to vt9
CColorRGBA* ColorRGBA508 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA508->setUSE("HAnimSegmentLineColorRGBA");
LineSet506->setColor(*ColorRGBA508);

Shape505->setGeometry(LineSet506);

HAnimJoint504->setShape(*Shape505);

CHAnimSite* HAnimSite509 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite509->setName("l_thelion_pt");
HAnimSite509->setDEF("hanim_l_thelion_pt");
HAnimSite509->setTranslation(new float[3]{0.0918,1.3382,0.1192});
CTouchSensor* TouchSensor510 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor510->setDescription("HAnimSite l_thelion_pt");
HAnimSite509->addChildren(*TouchSensor510);

CShape* Shape511 = (CShape *)(m_pScene.createNode("Shape"));
Shape511->setUSE("HAnimSiteShape");
HAnimSite509->addChildren(*Shape511);

HAnimJoint504->addHAnimSite(*HAnimSite509);

CHAnimSite* HAnimSite512 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite512->setName("r_thelion_pt");
HAnimSite512->setDEF("hanim_r_thelion_pt");
HAnimSite512->setTranslation(new float[3]{-0.0736,1.3385,0.1217});
CTouchSensor* TouchSensor513 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor513->setDescription("HAnimSite r_thelion_pt");
HAnimSite512->addChildren(*TouchSensor513);

CShape* Shape514 = (CShape *)(m_pScene.createNode("Shape"));
Shape514->setUSE("HAnimSiteShape");
HAnimSite512->addChildren(*Shape514);

HAnimJoint504->addHAnimSite(*HAnimSite512);

CHAnimJoint* HAnimJoint515 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint515->setName("vt9");
HAnimJoint515->setDEF("hanim_vt9");
HAnimJoint515->setCenter(new float[3]{0.0057,1.3126,-0.0838});
HAnimJoint515->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint515->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape516 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet517 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet517->setVertexCount(new int[1]{2});
CCoordinate* Coordinate518 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate518->setPoint(new float[6]{0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845});
LineSet517->setCoord(*Coordinate518);

//from vt9 to vt8
CColorRGBA* ColorRGBA519 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA519->setUSE("HAnimSegmentLineColorRGBA");
LineSet517->setColor(*ColorRGBA519);

Shape516->setGeometry(LineSet517);

HAnimJoint515->setShape(*Shape516);

CHAnimJoint* HAnimJoint520 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint520->setName("vt8");
HAnimJoint520->setDEF("hanim_vt8");
HAnimJoint520->setCenter(new float[3]{0.0057,1.3382,-0.0845});
HAnimJoint520->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint520->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape521 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet522 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet522->setVertexCount(new int[1]{2});
CCoordinate* Coordinate523 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate523->setPoint(new float[6]{0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833});
LineSet522->setCoord(*Coordinate523);

//from vt8 to vt7
CColorRGBA* ColorRGBA524 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA524->setUSE("HAnimSegmentLineColorRGBA");
LineSet522->setColor(*ColorRGBA524);

Shape521->setGeometry(LineSet522);

HAnimJoint520->setShape(*Shape521);

CHAnimJoint* HAnimJoint525 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint525->setName("vt7");
HAnimJoint525->setDEF("hanim_vt7");
HAnimJoint525->setCenter(new float[3]{0.0058,1.3625,-0.0833});
HAnimJoint525->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint525->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape526 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet527 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet527->setVertexCount(new int[1]{2});
CCoordinate* Coordinate528 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate528->setPoint(new float[6]{0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08});
LineSet527->setCoord(*Coordinate528);

//from vt7 to vt6
CColorRGBA* ColorRGBA529 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA529->setUSE("HAnimSegmentLineColorRGBA");
LineSet527->setColor(*ColorRGBA529);

Shape526->setGeometry(LineSet527);

HAnimJoint525->setShape(*Shape526);

CHAnimSite* HAnimSite530 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite530->setName("l_chest_midsagittal_plane_pt");
HAnimSite530->setDEF("hanim_l_chest_midsagittal_plane_pt");
HAnimSite530->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor531 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor531->setDescription("HAnimSite l_chest_midsagittal_plane_pt");
HAnimSite530->addChildren(*TouchSensor531);

CShape* Shape532 = (CShape *)(m_pScene.createNode("Shape"));
Shape532->setUSE("HAnimSiteShape");
HAnimSite530->addChildren(*Shape532);

HAnimJoint525->addHAnimSite(*HAnimSite530);

CHAnimSite* HAnimSite533 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite533->setName("mesosternale_pt");
HAnimSite533->setDEF("hanim_mesosternale_pt");
HAnimSite533->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor534 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor534->setDescription("HAnimSite mesosternale_pt");
HAnimSite533->addChildren(*TouchSensor534);

CShape* Shape535 = (CShape *)(m_pScene.createNode("Shape"));
Shape535->setUSE("HAnimSiteShape");
HAnimSite533->addChildren(*Shape535);

HAnimJoint525->addHAnimSite(*HAnimSite533);

CHAnimSite* HAnimSite536 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite536->setName("r_chest_midsagittal_plane_pt");
HAnimSite536->setDEF("hanim_r_chest_midsagittal_plane_pt");
HAnimSite536->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor537 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor537->setDescription("HAnimSite r_chest_midsagittal_plane_pt");
HAnimSite536->addChildren(*TouchSensor537);

CShape* Shape538 = (CShape *)(m_pScene.createNode("Shape"));
Shape538->setUSE("HAnimSiteShape");
HAnimSite536->addChildren(*Shape538);

HAnimJoint525->addHAnimSite(*HAnimSite536);

CHAnimSite* HAnimSite539 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite539->setName("rear_center_midsagittal_plane_pt");
HAnimSite539->setDEF("hanim_rear_center_midsagittal_plane_pt");
HAnimSite539->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor540 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor540->setDescription("HAnimSite rear_center_midsagittal_plane_pt");
HAnimSite539->addChildren(*TouchSensor540);

CShape* Shape541 = (CShape *)(m_pScene.createNode("Shape"));
Shape541->setUSE("HAnimSiteShape");
HAnimSite539->addChildren(*Shape541);

HAnimJoint525->addHAnimSite(*HAnimSite539);

CHAnimJoint* HAnimJoint542 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint542->setName("vt6");
HAnimJoint542->setDEF("hanim_vt6");
HAnimJoint542->setCenter(new float[3]{0.0059,1.3866,-0.08});
HAnimJoint542->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint542->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape543 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet544 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet544->setVertexCount(new int[1]{2});
CCoordinate* Coordinate545 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate545->setPoint(new float[6]{0.0059,1.3866,-0.08,0.006,1.4102,-0.0745});
LineSet544->setCoord(*Coordinate545);

//from vt6 to vt5
CColorRGBA* ColorRGBA546 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA546->setUSE("HAnimSegmentLineColorRGBA");
LineSet544->setColor(*ColorRGBA546);

Shape543->setGeometry(LineSet544);

HAnimJoint542->setShape(*Shape543);

CHAnimSite* HAnimSite547 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite547->setName("spine_1_middle_back_pt");
HAnimSite547->setDEF("hanim_spine_1_middle_back_pt");
HAnimSite547->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor548 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor548->setDescription("HAnimSite spine_1_middle_back_pt");
HAnimSite547->addChildren(*TouchSensor548);

CShape* Shape549 = (CShape *)(m_pScene.createNode("Shape"));
Shape549->setUSE("HAnimSiteShape");
HAnimSite547->addChildren(*Shape549);

HAnimJoint542->addHAnimSite(*HAnimSite547);

CHAnimJoint* HAnimJoint550 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint550->setName("vt5");
HAnimJoint550->setDEF("hanim_vt5");
HAnimJoint550->setCenter(new float[3]{0.006,1.4102,-0.0745});
HAnimJoint550->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint550->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape551 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet552 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet552->setVertexCount(new int[1]{2});
CCoordinate* Coordinate553 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate553->setPoint(new float[6]{0.006,1.4102,-0.0745,0.0061,1.432,-0.0675});
LineSet552->setCoord(*Coordinate553);

//from vt5 to vt4
CColorRGBA* ColorRGBA554 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA554->setUSE("HAnimSegmentLineColorRGBA");
LineSet552->setColor(*ColorRGBA554);

Shape551->setGeometry(LineSet552);

HAnimJoint550->setShape(*Shape551);

CHAnimJoint* HAnimJoint555 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint555->setName("vt4");
HAnimJoint555->setDEF("hanim_vt4");
HAnimJoint555->setCenter(new float[3]{0.0061,1.432,-0.0675});
HAnimJoint555->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint555->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape556 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet557 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet557->setVertexCount(new int[1]{2});
CCoordinate* Coordinate558 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate558->setPoint(new float[6]{0.0061,1.432,-0.0675,0.0062,1.4583,-0.057});
LineSet557->setCoord(*Coordinate558);

//from vt4 to vt3
CColorRGBA* ColorRGBA559 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA559->setUSE("HAnimSegmentLineColorRGBA");
LineSet557->setColor(*ColorRGBA559);

Shape556->setGeometry(LineSet557);

HAnimJoint555->setShape(*Shape556);

CHAnimJoint* HAnimJoint560 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint560->setName("vt3");
HAnimJoint560->setDEF("hanim_vt3");
HAnimJoint560->setCenter(new float[3]{0.0062,1.4583,-0.057});
HAnimJoint560->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint560->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape561 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet562 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet562->setVertexCount(new int[1]{2});
CCoordinate* Coordinate563 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate563->setPoint(new float[6]{0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484});
LineSet562->setCoord(*Coordinate563);

//from vt3 to vt2
CColorRGBA* ColorRGBA564 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA564->setUSE("HAnimSegmentLineColorRGBA");
LineSet562->setColor(*ColorRGBA564);

Shape561->setGeometry(LineSet562);

HAnimJoint560->setShape(*Shape561);

CHAnimJoint* HAnimJoint565 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint565->setName("vt2");
HAnimJoint565->setDEF("hanim_vt2");
HAnimJoint565->setCenter(new float[3]{0.0063,1.4761,-0.0484});
HAnimJoint565->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint565->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape566 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet567 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet567->setVertexCount(new int[1]{2});
CCoordinate* Coordinate568 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate568->setPoint(new float[6]{0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387});
LineSet567->setCoord(*Coordinate568);

//from vt2 to vt1
CColorRGBA* ColorRGBA569 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA569->setUSE("HAnimSegmentLineColorRGBA");
LineSet567->setColor(*ColorRGBA569);

Shape566->setGeometry(LineSet567);

HAnimJoint565->setShape(*Shape566);

CHAnimSite* HAnimSite570 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite570->setName("cervicale_pt");
HAnimSite570->setDEF("hanim_cervicale_pt");
HAnimSite570->setTranslation(new float[3]{0.0064,1.52,-0.0815});
CTouchSensor* TouchSensor571 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor571->setDescription("HAnimSite cervicale_pt");
HAnimSite570->addChildren(*TouchSensor571);

CShape* Shape572 = (CShape *)(m_pScene.createNode("Shape"));
Shape572->setUSE("HAnimSiteShape");
HAnimSite570->addChildren(*Shape572);

HAnimJoint565->addHAnimSite(*HAnimSite570);

CHAnimSite* HAnimSite573 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite573->setName("suprasternale_pt");
HAnimSite573->setDEF("hanim_suprasternale_pt");
HAnimSite573->setTranslation(new float[3]{0.0084,1.4714,0.0551});
CTouchSensor* TouchSensor574 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor574->setDescription("HAnimSite suprasternale_pt");
HAnimSite573->addChildren(*TouchSensor574);

CShape* Shape575 = (CShape *)(m_pScene.createNode("Shape"));
Shape575->setUSE("HAnimSiteShape");
HAnimSite573->addChildren(*Shape575);

HAnimJoint565->addHAnimSite(*HAnimSite573);

CHAnimJoint* HAnimJoint576 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint576->setName("vt1");
HAnimJoint576->setDEF("hanim_vt1");
HAnimJoint576->setCenter(new float[3]{0.0065,1.4951,-0.0387});
HAnimJoint576->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint576->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape577 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet578 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet578->setVertexCount(new int[1]{2});
CCoordinate* Coordinate579 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate579->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301});
LineSet578->setCoord(*Coordinate579);

//from vt1 to vc7
CColorRGBA* ColorRGBA580 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA580->setUSE("HAnimSegmentLineColorRGBA");
LineSet578->setColor(*ColorRGBA580);

Shape577->setGeometry(LineSet578);

HAnimJoint576->setShape(*Shape577);

CHAnimSite* HAnimSite581 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite581->setName("l_neck_base_pt");
HAnimSite581->setDEF("hanim_l_neck_base_pt");
HAnimSite581->setTranslation(new float[3]{0.0646,1.5141,-0.038});
CTouchSensor* TouchSensor582 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor582->setDescription("HAnimSite l_neck_base_pt");
HAnimSite581->addChildren(*TouchSensor582);

CShape* Shape583 = (CShape *)(m_pScene.createNode("Shape"));
Shape583->setUSE("HAnimSiteShape");
HAnimSite581->addChildren(*Shape583);

HAnimJoint576->addHAnimSite(*HAnimSite581);

CHAnimSite* HAnimSite584 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite584->setName("r_neck_base_pt");
HAnimSite584->setDEF("hanim_r_neck_base_pt");
HAnimSite584->setTranslation(new float[3]{-0.0419,1.5149,-0.022});
CTouchSensor* TouchSensor585 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor585->setDescription("HAnimSite r_neck_base_pt");
HAnimSite584->addChildren(*TouchSensor585);

CShape* Shape586 = (CShape *)(m_pScene.createNode("Shape"));
Shape586->setUSE("HAnimSiteShape");
HAnimSite584->addChildren(*Shape586);

HAnimJoint576->addHAnimSite(*HAnimSite584);

CShape* Shape587 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet588 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet588->setVertexCount(new int[1]{2});
CCoordinate* Coordinate589 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate589->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353});
LineSet588->setCoord(*Coordinate589);

//from vt1 to l_sternoclavicular
CColorRGBA* ColorRGBA590 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA590->setUSE("HAnimSegmentLineColorRGBA");
LineSet588->setColor(*ColorRGBA590);

Shape587->setGeometry(LineSet588);

HAnimJoint576->addShape(*Shape587);

CHAnimSite* HAnimSite591 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite591->setName("l_acromion_pt");
HAnimSite591->setDEF("hanim_l_acromion_pt");
HAnimSite591->setTranslation(new float[3]{0.2032,1.476,-0.049});
CTouchSensor* TouchSensor592 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor592->setDescription("HAnimSite l_acromion_pt");
HAnimSite591->addChildren(*TouchSensor592);

CShape* Shape593 = (CShape *)(m_pScene.createNode("Shape"));
Shape593->setUSE("HAnimSiteShape");
HAnimSite591->addChildren(*Shape593);

HAnimJoint576->addHAnimSite(*HAnimSite591);

CHAnimSite* HAnimSite594 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite594->setName("l_axilla_distal_pt");
HAnimSite594->setDEF("hanim_l_axilla_distal_pt");
HAnimSite594->setTranslation(new float[3]{0.1706,1.4072,-0.0875});
CTouchSensor* TouchSensor595 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor595->setDescription("HAnimSite l_axilla_distal_pt");
HAnimSite594->addChildren(*TouchSensor595);

CShape* Shape596 = (CShape *)(m_pScene.createNode("Shape"));
Shape596->setUSE("HAnimSiteShape");
HAnimSite594->addChildren(*Shape596);

HAnimJoint576->addHAnimSite(*HAnimSite594);

CHAnimSite* HAnimSite597 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite597->setName("l_axilla_posterior_folds_pt");
HAnimSite597->setDEF("hanim_l_axilla_posterior_folds_pt");
HAnimSite597->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor598 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor598->setDescription("HAnimSite l_axilla_posterior_folds_pt");
HAnimSite597->addChildren(*TouchSensor598);

CShape* Shape599 = (CShape *)(m_pScene.createNode("Shape"));
Shape599->setUSE("HAnimSiteShape");
HAnimSite597->addChildren(*Shape599);

HAnimJoint576->addHAnimSite(*HAnimSite597);

CHAnimSite* HAnimSite600 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite600->setName("l_axilla_proximal_pt");
HAnimSite600->setDEF("hanim_l_axilla_proximal_pt");
HAnimSite600->setTranslation(new float[3]{0.1777,1.4065,-0.0075});
CTouchSensor* TouchSensor601 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor601->setDescription("HAnimSite l_axilla_proximal_pt");
HAnimSite600->addChildren(*TouchSensor601);

CShape* Shape602 = (CShape *)(m_pScene.createNode("Shape"));
Shape602->setUSE("HAnimSiteShape");
HAnimSite600->addChildren(*Shape602);

HAnimJoint576->addHAnimSite(*HAnimSite600);

CHAnimSite* HAnimSite603 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite603->setName("l_clavicale_pt");
HAnimSite603->setDEF("hanim_l_clavicale_pt");
HAnimSite603->setTranslation(new float[3]{0.0271,1.4943,0.0394});
CTouchSensor* TouchSensor604 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor604->setDescription("HAnimSite l_clavicale_pt");
HAnimSite603->addChildren(*TouchSensor604);

CShape* Shape605 = (CShape *)(m_pScene.createNode("Shape"));
Shape605->setUSE("HAnimSiteShape");
HAnimSite603->addChildren(*Shape605);

HAnimJoint576->addHAnimSite(*HAnimSite603);

CShape* Shape606 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet607 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet607->setVertexCount(new int[1]{2});
CCoordinate* Coordinate608 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate608->setPoint(new float[6]{0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033});
LineSet607->setCoord(*Coordinate608);

//from vt1 to r_sternoclavicular
CColorRGBA* ColorRGBA609 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA609->setUSE("HAnimSegmentLineColorRGBA");
LineSet607->setColor(*ColorRGBA609);

Shape606->setGeometry(LineSet607);

HAnimJoint576->addShape(*Shape606);

CHAnimSite* HAnimSite610 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite610->setName("r_acromion_pt");
HAnimSite610->setDEF("hanim_r_acromion_pt");
HAnimSite610->setTranslation(new float[3]{-0.1905,1.4791,-0.0431});
CTouchSensor* TouchSensor611 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor611->setDescription("HAnimSite r_acromion_pt");
HAnimSite610->addChildren(*TouchSensor611);

CShape* Shape612 = (CShape *)(m_pScene.createNode("Shape"));
Shape612->setUSE("HAnimSiteShape");
HAnimSite610->addChildren(*Shape612);

HAnimJoint576->addHAnimSite(*HAnimSite610);

CHAnimSite* HAnimSite613 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite613->setName("r_axilla_distal_pt");
HAnimSite613->setDEF("hanim_r_axilla_distal_pt");
HAnimSite613->setTranslation(new float[3]{-0.1603,1.4098,-0.0826});
CTouchSensor* TouchSensor614 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor614->setDescription("HAnimSite r_axilla_distal_pt");
HAnimSite613->addChildren(*TouchSensor614);

CShape* Shape615 = (CShape *)(m_pScene.createNode("Shape"));
Shape615->setUSE("HAnimSiteShape");
HAnimSite613->addChildren(*Shape615);

HAnimJoint576->addHAnimSite(*HAnimSite613);

CHAnimSite* HAnimSite616 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite616->setName("r_axilla_posterior_folds_pt");
HAnimSite616->setDEF("hanim_r_axilla_posterior_folds_pt");
HAnimSite616->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor617 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor617->setDescription("HAnimSite r_axilla_posterior_folds_pt");
HAnimSite616->addChildren(*TouchSensor617);

CShape* Shape618 = (CShape *)(m_pScene.createNode("Shape"));
Shape618->setUSE("HAnimSiteShape");
HAnimSite616->addChildren(*Shape618);

HAnimJoint576->addHAnimSite(*HAnimSite616);

CHAnimSite* HAnimSite619 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite619->setName("r_axilla_proximal_pt");
HAnimSite619->setDEF("hanim_r_axilla_proximal_pt");
HAnimSite619->setTranslation(new float[3]{-0.1626,1.4072,-0.0031});
CTouchSensor* TouchSensor620 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor620->setDescription("HAnimSite r_axilla_proximal_pt");
HAnimSite619->addChildren(*TouchSensor620);

CShape* Shape621 = (CShape *)(m_pScene.createNode("Shape"));
Shape621->setUSE("HAnimSiteShape");
HAnimSite619->addChildren(*Shape621);

HAnimJoint576->addHAnimSite(*HAnimSite619);

CHAnimSite* HAnimSite622 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite622->setName("r_clavicale_pt");
HAnimSite622->setDEF("hanim_r_clavicale_pt");
HAnimSite622->setTranslation(new float[3]{-0.0115,1.4943,0.04});
CTouchSensor* TouchSensor623 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor623->setDescription("HAnimSite r_clavicale_pt");
HAnimSite622->addChildren(*TouchSensor623);

CShape* Shape624 = (CShape *)(m_pScene.createNode("Shape"));
Shape624->setUSE("HAnimSiteShape");
HAnimSite622->addChildren(*Shape624);

HAnimJoint576->addHAnimSite(*HAnimSite622);

CHAnimJoint* HAnimJoint625 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint625->setName("vc7");
HAnimJoint625->setDEF("hanim_vc7");
HAnimJoint625->setCenter(new float[3]{0.0066,1.5132,-0.0301});
HAnimJoint625->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint625->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape626 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet627 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet627->setVertexCount(new int[1]{2});
CCoordinate* Coordinate628 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate628->setPoint(new float[6]{0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143});
LineSet627->setCoord(*Coordinate628);

//from vc7 to vc6
CColorRGBA* ColorRGBA629 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA629->setUSE("HAnimSegmentLineColorRGBA");
LineSet627->setColor(*ColorRGBA629);

Shape626->setGeometry(LineSet627);

HAnimJoint625->setShape(*Shape626);

CHAnimJoint* HAnimJoint630 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint630->setName("vc6");
HAnimJoint630->setDEF("hanim_vc6");
HAnimJoint630->setCenter(new float[3]{0.0066,1.5357,-0.0143});
HAnimJoint630->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint630->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape631 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet632 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet632->setVertexCount(new int[1]{2});
CCoordinate* Coordinate633 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate633->setPoint(new float[6]{0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082});
LineSet632->setCoord(*Coordinate633);

//from vc6 to vc5
CColorRGBA* ColorRGBA634 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA634->setUSE("HAnimSegmentLineColorRGBA");
LineSet632->setColor(*ColorRGBA634);

Shape631->setGeometry(LineSet632);

HAnimJoint630->setShape(*Shape631);

CHAnimJoint* HAnimJoint635 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint635->setName("vc5");
HAnimJoint635->setDEF("hanim_vc5");
HAnimJoint635->setCenter(new float[3]{0.0066,1.552,-0.0082});
HAnimJoint635->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint635->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape636 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet637 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet637->setVertexCount(new int[1]{2});
CCoordinate* Coordinate638 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate638->setPoint(new float[6]{0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084});
LineSet637->setCoord(*Coordinate638);

//from vc5 to vc4
CColorRGBA* ColorRGBA639 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA639->setUSE("HAnimSegmentLineColorRGBA");
LineSet637->setColor(*ColorRGBA639);

Shape636->setGeometry(LineSet637);

HAnimJoint635->setShape(*Shape636);

CHAnimJoint* HAnimJoint640 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint640->setName("vc4");
HAnimJoint640->setDEF("hanim_vc4");
HAnimJoint640->setCenter(new float[3]{0.0066,1.5662,-0.0084});
HAnimJoint640->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint640->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape641 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet642 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet642->setVertexCount(new int[1]{2});
CCoordinate* Coordinate643 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate643->setPoint(new float[6]{0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103});
LineSet642->setCoord(*Coordinate643);

//from vc4 to vc3
CColorRGBA* ColorRGBA644 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA644->setUSE("HAnimSegmentLineColorRGBA");
LineSet642->setColor(*ColorRGBA644);

Shape641->setGeometry(LineSet642);

HAnimJoint640->setShape(*Shape641);

CHAnimJoint* HAnimJoint645 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint645->setName("vc3");
HAnimJoint645->setDEF("hanim_vc3");
HAnimJoint645->setCenter(new float[3]{0.0066,1.58,-0.0103});
HAnimJoint645->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint645->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape646 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet647 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet647->setVertexCount(new int[1]{2});
CCoordinate* Coordinate648 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate648->setPoint(new float[6]{0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103});
LineSet647->setCoord(*Coordinate648);

//from vc3 to vc2
CColorRGBA* ColorRGBA649 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA649->setUSE("HAnimSegmentLineColorRGBA");
LineSet647->setColor(*ColorRGBA649);

Shape646->setGeometry(LineSet647);

HAnimJoint645->setShape(*Shape646);

CHAnimSite* HAnimSite650 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite650->setName("adams_apple_pt");
HAnimSite650->setDEF("hanim_adams_apple_pt");
HAnimSite650->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor651 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor651->setDescription("HAnimSite adams_apple_pt");
HAnimSite650->addChildren(*TouchSensor651);

CShape* Shape652 = (CShape *)(m_pScene.createNode("Shape"));
Shape652->setUSE("HAnimSiteShape");
HAnimSite650->addChildren(*Shape652);

HAnimJoint645->addHAnimSite(*HAnimSite650);

CHAnimJoint* HAnimJoint653 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint653->setName("vc2");
HAnimJoint653->setDEF("hanim_vc2");
HAnimJoint653->setCenter(new float[3]{0.0066,1.5928,-0.0103});
HAnimJoint653->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint653->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape654 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet655 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet655->setVertexCount(new int[1]{2});
CCoordinate* Coordinate656 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate656->setPoint(new float[6]{0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034});
LineSet655->setCoord(*Coordinate656);

//from vc2 to vc1
CColorRGBA* ColorRGBA657 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA657->setUSE("HAnimSegmentLineColorRGBA");
LineSet655->setColor(*ColorRGBA657);

Shape654->setGeometry(LineSet655);

HAnimJoint653->setShape(*Shape654);

CHAnimJoint* HAnimJoint658 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint658->setName("vc1");
HAnimJoint658->setDEF("hanim_vc1");
HAnimJoint658->setCenter(new float[3]{0.0066,1.6144,-0.0034});
HAnimJoint658->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint658->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape659 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet660 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet660->setVertexCount(new int[1]{2});
CCoordinate* Coordinate661 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate661->setPoint(new float[6]{0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236});
LineSet660->setCoord(*Coordinate661);

//from vc1 to skullbase
CColorRGBA* ColorRGBA662 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA662->setUSE("HAnimSegmentLineColorRGBA");
LineSet660->setColor(*ColorRGBA662);

Shape659->setGeometry(LineSet660);

HAnimJoint658->setShape(*Shape659);

CHAnimSite* HAnimSite663 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite663->setName("glabella_pt");
HAnimSite663->setDEF("hanim_glabella_pt");
HAnimSite663->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor664 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor664->setDescription("HAnimSite glabella_pt");
HAnimSite663->addChildren(*TouchSensor664);

CShape* Shape665 = (CShape *)(m_pScene.createNode("Shape"));
Shape665->setUSE("HAnimSiteShape");
HAnimSite663->addChildren(*Shape665);

HAnimJoint658->addHAnimSite(*HAnimSite663);

CHAnimSite* HAnimSite666 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite666->setName("l_ectocanthus_pt");
HAnimSite666->setDEF("hanim_l_ectocanthus_pt");
HAnimSite666->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor667 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor667->setDescription("HAnimSite l_ectocanthus_pt");
HAnimSite666->addChildren(*TouchSensor667);

CShape* Shape668 = (CShape *)(m_pScene.createNode("Shape"));
Shape668->setUSE("HAnimSiteShape");
HAnimSite666->addChildren(*Shape668);

HAnimJoint658->addHAnimSite(*HAnimSite666);

CHAnimSite* HAnimSite669 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite669->setName("l_infraorbitale_pt");
HAnimSite669->setDEF("hanim_l_infraorbitale_pt");
HAnimSite669->setTranslation(new float[3]{0.0341,1.6171,0.0752});
CTouchSensor* TouchSensor670 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor670->setDescription("HAnimSite l_infraorbitale_pt");
HAnimSite669->addChildren(*TouchSensor670);

CShape* Shape671 = (CShape *)(m_pScene.createNode("Shape"));
Shape671->setUSE("HAnimSiteShape");
HAnimSite669->addChildren(*Shape671);

HAnimJoint658->addHAnimSite(*HAnimSite669);

CHAnimSite* HAnimSite672 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite672->setName("l_tragion_pt");
HAnimSite672->setDEF("hanim_l_tragion_pt");
HAnimSite672->setTranslation(new float[3]{0.0739,1.6348,0.0282});
CTouchSensor* TouchSensor673 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor673->setDescription("HAnimSite l_tragion_pt");
HAnimSite672->addChildren(*TouchSensor673);

CShape* Shape674 = (CShape *)(m_pScene.createNode("Shape"));
Shape674->setUSE("HAnimSiteShape");
HAnimSite672->addChildren(*Shape674);

HAnimJoint658->addHAnimSite(*HAnimSite672);

CHAnimSite* HAnimSite675 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite675->setName("nuchale_pt");
HAnimSite675->setDEF("hanim_nuchale_pt");
HAnimSite675->setTranslation(new float[3]{0.0039,1.5972,-0.0796});
CTouchSensor* TouchSensor676 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor676->setDescription("HAnimSite nuchale_pt");
HAnimSite675->addChildren(*TouchSensor676);

CShape* Shape677 = (CShape *)(m_pScene.createNode("Shape"));
Shape677->setUSE("HAnimSiteShape");
HAnimSite675->addChildren(*Shape677);

HAnimJoint658->addHAnimSite(*HAnimSite675);

CHAnimSite* HAnimSite678 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite678->setName("opisthocranion_pt");
HAnimSite678->setDEF("hanim_opisthocranion_pt");
HAnimSite678->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor679 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor679->setDescription("HAnimSite opisthocranion_pt");
HAnimSite678->addChildren(*TouchSensor679);

CShape* Shape680 = (CShape *)(m_pScene.createNode("Shape"));
Shape680->setUSE("HAnimSiteShape");
HAnimSite678->addChildren(*Shape680);

HAnimJoint658->addHAnimSite(*HAnimSite678);

CHAnimSite* HAnimSite681 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite681->setName("r_ectocanthus_pt");
HAnimSite681->setDEF("hanim_r_ectocanthus_pt");
HAnimSite681->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor682 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor682->setDescription("HAnimSite r_ectocanthus_pt");
HAnimSite681->addChildren(*TouchSensor682);

CShape* Shape683 = (CShape *)(m_pScene.createNode("Shape"));
Shape683->setUSE("HAnimSiteShape");
HAnimSite681->addChildren(*Shape683);

HAnimJoint658->addHAnimSite(*HAnimSite681);

CHAnimSite* HAnimSite684 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite684->setName("r_infraorbitale_pt");
HAnimSite684->setDEF("hanim_r_infraorbitale_pt");
HAnimSite684->setTranslation(new float[3]{-0.0237,1.6171,0.0752});
CTouchSensor* TouchSensor685 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor685->setDescription("HAnimSite r_infraorbitale_pt");
HAnimSite684->addChildren(*TouchSensor685);

CShape* Shape686 = (CShape *)(m_pScene.createNode("Shape"));
Shape686->setUSE("HAnimSiteShape");
HAnimSite684->addChildren(*Shape686);

HAnimJoint658->addHAnimSite(*HAnimSite684);

CHAnimSite* HAnimSite687 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite687->setName("r_tragion_pt");
HAnimSite687->setDEF("hanim_r_tragion_pt");
HAnimSite687->setTranslation(new float[3]{-0.0646,1.6347,0.0302});
CTouchSensor* TouchSensor688 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor688->setDescription("HAnimSite r_tragion_pt");
HAnimSite687->addChildren(*TouchSensor688);

CShape* Shape689 = (CShape *)(m_pScene.createNode("Shape"));
Shape689->setUSE("HAnimSiteShape");
HAnimSite687->addChildren(*Shape689);

HAnimJoint658->addHAnimSite(*HAnimSite687);

CHAnimSite* HAnimSite690 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite690->setName("sellion_pt");
HAnimSite690->setDEF("hanim_sellion_pt");
HAnimSite690->setTranslation(new float[3]{0.0058,1.6316,0.0852});
CTouchSensor* TouchSensor691 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor691->setDescription("HAnimSite sellion_pt");
HAnimSite690->addChildren(*TouchSensor691);

CShape* Shape692 = (CShape *)(m_pScene.createNode("Shape"));
Shape692->setUSE("HAnimSiteShape");
HAnimSite690->addChildren(*Shape692);

HAnimJoint658->addHAnimSite(*HAnimSite690);

CHAnimSite* HAnimSite693 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite693->setName("skull_vertex_pt");
HAnimSite693->setDEF("hanim_skull_vertex_pt");
HAnimSite693->setTranslation(new float[3]{0.005,1.7504,0.0055});
CTouchSensor* TouchSensor694 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor694->setDescription("HAnimSite skull_vertex_pt");
HAnimSite693->addChildren(*TouchSensor694);

CShape* Shape695 = (CShape *)(m_pScene.createNode("Shape"));
Shape695->setUSE("HAnimSiteShape");
HAnimSite693->addChildren(*Shape695);

HAnimJoint658->addHAnimSite(*HAnimSite693);

CHAnimJoint* HAnimJoint696 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint696->setName("skullbase");
HAnimJoint696->setDEF("hanim_skullbase");
HAnimJoint696->setCenter(new float[3]{0.0044,1.6209,0.0236});
HAnimJoint696->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint696->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape697 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet698 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet698->setVertexCount(new int[1]{2});
CCoordinate* Coordinate699 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate699->setPoint(new float[6]{0.0044,1.6209,0.0236,0,1,0});
LineSet698->setCoord(*Coordinate699);

//from skullbase to l_eyelid_joint
CColorRGBA* ColorRGBA700 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA700->setUSE("HAnimSegmentLineColorRGBA");
LineSet698->setColor(*ColorRGBA700);

Shape697->setGeometry(LineSet698);

HAnimJoint696->setShape(*Shape697);

CShape* Shape701 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet702 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet702->setVertexCount(new int[1]{2});
CCoordinate* Coordinate703 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate703->setPoint(new float[6]{0.0044,1.6209,0.0236,0,1,0});
LineSet702->setCoord(*Coordinate703);

//from skullbase to r_eyelid_joint
CColorRGBA* ColorRGBA704 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA704->setUSE("HAnimSegmentLineColorRGBA");
LineSet702->setColor(*ColorRGBA704);

Shape701->setGeometry(LineSet702);

HAnimJoint696->addShape(*Shape701);

CShape* Shape705 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet706 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet706->setVertexCount(new int[1]{2});
CCoordinate* Coordinate707 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate707->setPoint(new float[6]{0.0044,1.6209,0.0236,0,1,0});
LineSet706->setCoord(*Coordinate707);

//from skullbase to l_eyeball_joint
CColorRGBA* ColorRGBA708 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA708->setUSE("HAnimSegmentLineColorRGBA");
LineSet706->setColor(*ColorRGBA708);

Shape705->setGeometry(LineSet706);

HAnimJoint696->addShape(*Shape705);

CShape* Shape709 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet710 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet710->setVertexCount(new int[1]{2});
CCoordinate* Coordinate711 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate711->setPoint(new float[6]{0.0044,1.6209,0.0236,0,1,0});
LineSet710->setCoord(*Coordinate711);

//from skullbase to r_eyeball_joint
CColorRGBA* ColorRGBA712 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA712->setUSE("HAnimSegmentLineColorRGBA");
LineSet710->setColor(*ColorRGBA712);

Shape709->setGeometry(LineSet710);

HAnimJoint696->addShape(*Shape709);

CShape* Shape713 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet714 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet714->setVertexCount(new int[1]{2});
CCoordinate* Coordinate715 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate715->setPoint(new float[6]{0.0044,1.6209,0.0236,0,1,0});
LineSet714->setCoord(*Coordinate715);

//from skullbase to l_eyebrow_joint
CColorRGBA* ColorRGBA716 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA716->setUSE("HAnimSegmentLineColorRGBA");
LineSet714->setColor(*ColorRGBA716);

Shape713->setGeometry(LineSet714);

HAnimJoint696->addShape(*Shape713);

CShape* Shape717 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet718 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet718->setVertexCount(new int[1]{2});
CCoordinate* Coordinate719 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate719->setPoint(new float[6]{0.0044,1.6209,0.0236,0,1,0});
LineSet718->setCoord(*Coordinate719);

//from skullbase to r_eyebrow_joint
CColorRGBA* ColorRGBA720 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA720->setUSE("HAnimSegmentLineColorRGBA");
LineSet718->setColor(*ColorRGBA720);

Shape717->setGeometry(LineSet718);

HAnimJoint696->addShape(*Shape717);

CShape* Shape721 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet722 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet722->setVertexCount(new int[1]{2});
CCoordinate* Coordinate723 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate723->setPoint(new float[6]{0.0044,1.6209,0.0236,0,1,0});
LineSet722->setCoord(*Coordinate723);

//from skullbase to temporomandibular
CColorRGBA* ColorRGBA724 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA724->setUSE("HAnimSegmentLineColorRGBA");
LineSet722->setColor(*ColorRGBA724);

Shape721->setGeometry(LineSet722);

HAnimJoint696->addShape(*Shape721);

CHAnimSite* HAnimSite725 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite725->setName("l_gonion_pt");
HAnimSite725->setDEF("hanim_l_gonion_pt");
HAnimSite725->setTranslation(new float[3]{0.0631,1.553,0.033});
CTouchSensor* TouchSensor726 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor726->setDescription("HAnimSite l_gonion_pt");
HAnimSite725->addChildren(*TouchSensor726);

CShape* Shape727 = (CShape *)(m_pScene.createNode("Shape"));
Shape727->setUSE("HAnimSiteShape");
HAnimSite725->addChildren(*Shape727);

HAnimJoint696->addHAnimSite(*HAnimSite725);

CHAnimSite* HAnimSite728 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite728->setName("menton_pt");
HAnimSite728->setDEF("hanim_menton_pt");
HAnimSite728->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor729 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor729->setDescription("HAnimSite menton_pt");
HAnimSite728->addChildren(*TouchSensor729);

CShape* Shape730 = (CShape *)(m_pScene.createNode("Shape"));
Shape730->setUSE("HAnimSiteShape");
HAnimSite728->addChildren(*Shape730);

HAnimJoint696->addHAnimSite(*HAnimSite728);

CHAnimSite* HAnimSite731 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite731->setName("r_gonion_pt");
HAnimSite731->setDEF("hanim_r_gonion_pt");
HAnimSite731->setTranslation(new float[3]{-0.052,1.5529,0.0347});
CTouchSensor* TouchSensor732 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor732->setDescription("HAnimSite r_gonion_pt");
HAnimSite731->addChildren(*TouchSensor732);

CShape* Shape733 = (CShape *)(m_pScene.createNode("Shape"));
Shape733->setUSE("HAnimSiteShape");
HAnimSite731->addChildren(*Shape733);

HAnimJoint696->addHAnimSite(*HAnimSite731);

CHAnimSite* HAnimSite734 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite734->setName("supramenton_pt");
HAnimSite734->setDEF("hanim_supramenton_pt");
HAnimSite734->setTranslation(new float[3]{0.0061,1.541,0.0805});
CTouchSensor* TouchSensor735 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor735->setDescription("HAnimSite supramenton_pt");
HAnimSite734->addChildren(*TouchSensor735);

CShape* Shape736 = (CShape *)(m_pScene.createNode("Shape"));
Shape736->setUSE("HAnimSiteShape");
HAnimSite734->addChildren(*Shape736);

HAnimJoint696->addHAnimSite(*HAnimSite734);

CHAnimJoint* HAnimJoint737 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint737->setName("l_eyelid_joint");
HAnimJoint737->setDEF("hanim_l_eyelid_joint");
HAnimJoint737->setCenter(new float[3]{0,1,0});
HAnimJoint737->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint737->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint696->addChildren(*HAnimJoint737);

CHAnimJoint* HAnimJoint738 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint738->setName("r_eyelid_joint");
HAnimJoint738->setDEF("hanim_r_eyelid_joint");
HAnimJoint738->setCenter(new float[3]{0,1,0});
HAnimJoint738->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint738->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint696->addChildren(*HAnimJoint738);

CHAnimJoint* HAnimJoint739 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint739->setName("l_eyeball_joint");
HAnimJoint739->setDEF("hanim_l_eyeball_joint");
HAnimJoint739->setCenter(new float[3]{0,1,0});
HAnimJoint739->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint739->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint696->addChildren(*HAnimJoint739);

CHAnimJoint* HAnimJoint740 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint740->setName("r_eyeball_joint");
HAnimJoint740->setDEF("hanim_r_eyeball_joint");
HAnimJoint740->setCenter(new float[3]{0,1,0});
HAnimJoint740->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint740->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint696->addChildren(*HAnimJoint740);

CHAnimJoint* HAnimJoint741 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint741->setName("l_eyebrow_joint");
HAnimJoint741->setDEF("hanim_l_eyebrow_joint");
HAnimJoint741->setCenter(new float[3]{0,1,0});
HAnimJoint741->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint741->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint696->addChildren(*HAnimJoint741);

CHAnimJoint* HAnimJoint742 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint742->setName("r_eyebrow_joint");
HAnimJoint742->setDEF("hanim_r_eyebrow_joint");
HAnimJoint742->setCenter(new float[3]{0,1,0});
HAnimJoint742->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint742->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint696->addChildren(*HAnimJoint742);

CHAnimJoint* HAnimJoint743 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint743->setName("temporomandibular");
HAnimJoint743->setDEF("hanim_temporomandibular");
HAnimJoint743->setCenter(new float[3]{0,1,0});
HAnimJoint743->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint743->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint696->addChildren(*HAnimJoint743);

HAnimJoint658->addChildren(*HAnimJoint696);

HAnimJoint653->addChildren(*HAnimJoint658);

HAnimJoint645->addChildren(*HAnimJoint653);

HAnimJoint640->addChildren(*HAnimJoint645);

HAnimJoint635->addChildren(*HAnimJoint640);

HAnimJoint630->addChildren(*HAnimJoint635);

HAnimJoint625->addChildren(*HAnimJoint630);

HAnimJoint576->addChildren(*HAnimJoint625);

CHAnimJoint* HAnimJoint744 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint744->setName("l_sternoclavicular");
HAnimJoint744->setDEF("hanim_l_sternoclavicular");
HAnimJoint744->setCenter(new float[3]{0.082,1.4488,-0.0353});
HAnimJoint744->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint744->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape745 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet746 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet746->setVertexCount(new int[1]{2});
CCoordinate* Coordinate747 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate747->setPoint(new float[6]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424});
LineSet746->setCoord(*Coordinate747);

//from l_sternoclavicular to l_acromioclavicular
CColorRGBA* ColorRGBA748 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA748->setUSE("HAnimSegmentLineColorRGBA");
LineSet746->setColor(*ColorRGBA748);

Shape745->setGeometry(LineSet746);

HAnimJoint744->setShape(*Shape745);

CHAnimJoint* HAnimJoint749 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint749->setName("l_acromioclavicular");
HAnimJoint749->setDEF("hanim_l_acromioclavicular");
HAnimJoint749->setCenter(new float[3]{0.0962,1.4269,-0.0424});
HAnimJoint749->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint749->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape750 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet751 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet751->setVertexCount(new int[1]{2});
CCoordinate* Coordinate752 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate752->setPoint(new float[6]{0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387});
LineSet751->setCoord(*Coordinate752);

//from l_acromioclavicular to l_shoulder
CColorRGBA* ColorRGBA753 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA753->setUSE("HAnimSegmentLineColorRGBA");
LineSet751->setColor(*ColorRGBA753);

Shape750->setGeometry(LineSet751);

HAnimJoint749->setShape(*Shape750);

CHAnimSite* HAnimSite754 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite754->setName("l_bideltoid_pt");
HAnimSite754->setDEF("hanim_l_bideltoid_pt");
HAnimSite754->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor755 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor755->setDescription("HAnimSite l_bideltoid_pt");
HAnimSite754->addChildren(*TouchSensor755);

CShape* Shape756 = (CShape *)(m_pScene.createNode("Shape"));
Shape756->setUSE("HAnimSiteShape");
HAnimSite754->addChildren(*Shape756);

HAnimJoint749->addHAnimSite(*HAnimSite754);

CHAnimSite* HAnimSite757 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite757->setName("l_humeral_lateral_epicondyles_pt");
HAnimSite757->setDEF("hanim_l_humeral_lateral_epicondyles_pt");
HAnimSite757->setTranslation(new float[3]{0.228,1.1482,-0.11});
CTouchSensor* TouchSensor758 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor758->setDescription("HAnimSite l_humeral_lateral_epicondyles_pt");
HAnimSite757->addChildren(*TouchSensor758);

CShape* Shape759 = (CShape *)(m_pScene.createNode("Shape"));
Shape759->setUSE("HAnimSiteShape");
HAnimSite757->addChildren(*Shape759);

HAnimJoint749->addHAnimSite(*HAnimSite757);

CHAnimJoint* HAnimJoint760 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint760->setName("l_shoulder");
HAnimJoint760->setDEF("hanim_l_shoulder");
HAnimJoint760->setCenter(new float[3]{0.2029,1.4376,-0.0387});
HAnimJoint760->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint760->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape761 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet762 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet762->setVertexCount(new int[1]{2});
CCoordinate* Coordinate763 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate763->setPoint(new float[6]{0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682});
LineSet762->setCoord(*Coordinate763);

//from l_shoulder to l_elbow
CColorRGBA* ColorRGBA764 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA764->setUSE("HAnimSegmentLineColorRGBA");
LineSet762->setColor(*ColorRGBA764);

Shape761->setGeometry(LineSet762);

HAnimJoint760->setShape(*Shape761);

CHAnimSite* HAnimSite765 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite765->setName("l_humeral_medial_epicondyles_pt");
HAnimSite765->setDEF("hanim_l_humeral_medial_epicondyles_pt");
HAnimSite765->setTranslation(new float[3]{0.1735,1.1272,-0.1113});
CTouchSensor* TouchSensor766 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor766->setDescription("HAnimSite l_humeral_medial_epicondyles_pt");
HAnimSite765->addChildren(*TouchSensor766);

CShape* Shape767 = (CShape *)(m_pScene.createNode("Shape"));
Shape767->setUSE("HAnimSiteShape");
HAnimSite765->addChildren(*Shape767);

HAnimJoint760->addHAnimSite(*HAnimSite765);

CHAnimSite* HAnimSite768 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite768->setName("l_olecranon_pt");
HAnimSite768->setDEF("hanim_l_olecranon_pt");
HAnimSite768->setTranslation(new float[3]{-0.1962,1.1375,-0.1123});
CTouchSensor* TouchSensor769 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor769->setDescription("HAnimSite l_olecranon_pt");
HAnimSite768->addChildren(*TouchSensor769);

CShape* Shape770 = (CShape *)(m_pScene.createNode("Shape"));
Shape770->setUSE("HAnimSiteShape");
HAnimSite768->addChildren(*Shape770);

HAnimJoint760->addHAnimSite(*HAnimSite768);

CHAnimSite* HAnimSite771 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite771->setName("l_radial_styloid_pt");
HAnimSite771->setDEF("hanim_l_radial_styloid_pt");
HAnimSite771->setTranslation(new float[3]{0.1901,0.8645,-0.0415});
CTouchSensor* TouchSensor772 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor772->setDescription("HAnimSite l_radial_styloid_pt");
HAnimSite771->addChildren(*TouchSensor772);

CShape* Shape773 = (CShape *)(m_pScene.createNode("Shape"));
Shape773->setUSE("HAnimSiteShape");
HAnimSite771->addChildren(*Shape773);

HAnimJoint760->addHAnimSite(*HAnimSite771);

CHAnimSite* HAnimSite774 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite774->setName("l_radiale_pt");
HAnimSite774->setDEF("hanim_l_radiale_pt");
HAnimSite774->setTranslation(new float[3]{0.2182,1.1212,-0.1167});
CTouchSensor* TouchSensor775 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor775->setDescription("HAnimSite l_radiale_pt");
HAnimSite774->addChildren(*TouchSensor775);

CShape* Shape776 = (CShape *)(m_pScene.createNode("Shape"));
Shape776->setUSE("HAnimSiteShape");
HAnimSite774->addChildren(*Shape776);

HAnimJoint760->addHAnimSite(*HAnimSite774);

CHAnimJoint* HAnimJoint777 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint777->setName("l_elbow");
HAnimJoint777->setDEF("hanim_l_elbow");
HAnimJoint777->setCenter(new float[3]{0.2014,1.1357,-0.0682});
HAnimJoint777->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint777->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape778 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet779 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet779->setVertexCount(new int[1]{2});
CCoordinate* Coordinate780 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate780->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583});
LineSet779->setCoord(*Coordinate780);

//from l_elbow to l_radiocarpal
CColorRGBA* ColorRGBA781 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA781->setUSE("HAnimSegmentLineColorRGBA");
LineSet779->setColor(*ColorRGBA781);

Shape778->setGeometry(LineSet779);

HAnimJoint777->setShape(*Shape778);

CHAnimSite* HAnimSite782 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite782->setName("l_ulnar_styloid_pt");
HAnimSite782->setDEF("hanim_l_ulnar_styloid_pt");
HAnimSite782->setTranslation(new float[3]{-0.2142,0.8529,-0.0648});
CTouchSensor* TouchSensor783 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor783->setDescription("HAnimSite l_ulnar_styloid_pt");
HAnimSite782->addChildren(*TouchSensor783);

CShape* Shape784 = (CShape *)(m_pScene.createNode("Shape"));
Shape784->setUSE("HAnimSiteShape");
HAnimSite782->addChildren(*Shape784);

HAnimJoint777->addHAnimSite(*HAnimSite782);

CHAnimJoint* HAnimJoint785 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint785->setName("l_radiocarpal");
HAnimJoint785->setDEF("hanim_l_radiocarpal");
HAnimJoint785->setCenter(new float[3]{0.1984,0.8663,-0.0583});
HAnimJoint785->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint785->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape786 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet787 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet787->setVertexCount(new int[1]{2});
CCoordinate* Coordinate788 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate788->setPoint(new float[6]{0.1984,0.8663,-0.0583,0,1,0});
LineSet787->setCoord(*Coordinate788);

//from l_radiocarpal to l_midcarpal_1
CColorRGBA* ColorRGBA789 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA789->setUSE("HAnimSegmentLineColorRGBA");
LineSet787->setColor(*ColorRGBA789);

Shape786->setGeometry(LineSet787);

HAnimJoint785->setShape(*Shape786);

CShape* Shape790 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet791 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet791->setVertexCount(new int[1]{2});
CCoordinate* Coordinate792 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate792->setPoint(new float[6]{0.1984,0.8663,-0.0583,0,1,0});
LineSet791->setCoord(*Coordinate792);

//from l_radiocarpal to l_midcarpal_2
CColorRGBA* ColorRGBA793 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA793->setUSE("HAnimSegmentLineColorRGBA");
LineSet791->setColor(*ColorRGBA793);

Shape790->setGeometry(LineSet791);

HAnimJoint785->addShape(*Shape790);

CShape* Shape794 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet795 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet795->setVertexCount(new int[1]{2});
CCoordinate* Coordinate796 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate796->setPoint(new float[6]{0.1984,0.8663,-0.0583,0,1,0});
LineSet795->setCoord(*Coordinate796);

//from l_radiocarpal to l_midcarpal_3
CColorRGBA* ColorRGBA797 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA797->setUSE("HAnimSegmentLineColorRGBA");
LineSet795->setColor(*ColorRGBA797);

Shape794->setGeometry(LineSet795);

HAnimJoint785->addShape(*Shape794);

CShape* Shape798 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet799 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet799->setVertexCount(new int[1]{2});
CCoordinate* Coordinate800 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate800->setPoint(new float[6]{0.1984,0.8663,-0.0583,0,1,0});
LineSet799->setCoord(*Coordinate800);

//from l_radiocarpal to l_midcarpal_4_5
CColorRGBA* ColorRGBA801 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA801->setUSE("HAnimSegmentLineColorRGBA");
LineSet799->setColor(*ColorRGBA801);

Shape798->setGeometry(LineSet799);

HAnimJoint785->addShape(*Shape798);

CHAnimJoint* HAnimJoint802 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint802->setName("l_midcarpal_1");
HAnimJoint802->setDEF("hanim_l_midcarpal_1");
HAnimJoint802->setCenter(new float[3]{0,1,0});
HAnimJoint802->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint802->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape803 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet804 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet804->setVertexCount(new int[1]{1});
CCoordinate* Coordinate805 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate805->setPoint(new float[3]{0.1924,0.8472,-0.0534});
LineSet804->setCoord(*Coordinate805);

//from l_midcarpal_1 to l_carpometacarpal_1
CColorRGBA* ColorRGBA806 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA806->setUSE("HAnimSegmentLineColorRGBA");
LineSet804->setColor(*ColorRGBA806);

Shape803->setGeometry(LineSet804);

HAnimJoint802->setShape(*Shape803);

CHAnimJoint* HAnimJoint807 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint807->setName("l_carpometacarpal_1");
HAnimJoint807->setDEF("hanim_l_carpometacarpal_1");
HAnimJoint807->setCenter(new float[3]{0.1924,0.8472,-0.0534});
HAnimJoint807->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint807->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape808 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet809 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet809->setVertexCount(new int[1]{2});
CCoordinate* Coordinate810 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate810->setPoint(new float[6]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246});
LineSet809->setCoord(*Coordinate810);

//from l_carpometacarpal_1 to l_metacarpophalangeal_1
CColorRGBA* ColorRGBA811 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA811->setUSE("HAnimSegmentLineColorRGBA");
LineSet809->setColor(*ColorRGBA811);

Shape808->setGeometry(LineSet809);

HAnimJoint807->setShape(*Shape808);

CHAnimJoint* HAnimJoint812 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint812->setName("l_metacarpophalangeal_1");
HAnimJoint812->setDEF("hanim_l_metacarpophalangeal_1");
HAnimJoint812->setCenter(new float[3]{0.1951,0.8226,0.0246});
HAnimJoint812->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint812->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape813 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet814 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet814->setVertexCount(new int[1]{2});
CCoordinate* Coordinate815 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate815->setPoint(new float[6]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464});
LineSet814->setCoord(*Coordinate815);

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1
CColorRGBA* ColorRGBA816 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA816->setUSE("HAnimSegmentLineColorRGBA");
LineSet814->setColor(*ColorRGBA816);

Shape813->setGeometry(LineSet814);

HAnimJoint812->setShape(*Shape813);

CHAnimSite* HAnimSite817 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite817->setName("l_carpal_distal_phalanx_1_tip");
HAnimSite817->setDEF("hanim_l_carpal_distal_phalanx_1_tip");
HAnimSite817->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor818 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor818->setDescription("HAnimSite l_carpal_distal_phalanx_1_tip");
HAnimSite817->addChildren(*TouchSensor818);

CShape* Shape819 = (CShape *)(m_pScene.createNode("Shape"));
Shape819->setUSE("HAnimSiteShape");
HAnimSite817->addChildren(*Shape819);

HAnimJoint812->addHAnimSite(*HAnimSite817);

CHAnimJoint* HAnimJoint820 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint820->setName("l_carpal_interphalangeal_1");
HAnimJoint820->setDEF("hanim_l_carpal_interphalangeal_1");
HAnimJoint820->setCenter(new float[3]{0.1955,0.8159,0.0464});
HAnimJoint820->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint820->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint812->addChildren(*HAnimJoint820);

HAnimJoint807->addChildren(*HAnimJoint812);

HAnimJoint802->addChildren(*HAnimJoint807);

HAnimJoint785->addChildren(*HAnimJoint802);

CHAnimJoint* HAnimJoint821 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint821->setName("l_midcarpal_2");
HAnimJoint821->setDEF("hanim_l_midcarpal_2");
HAnimJoint821->setCenter(new float[3]{0,1,0});
HAnimJoint821->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint821->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape822 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet823 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet823->setVertexCount(new int[1]{1});
CCoordinate* Coordinate824 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate824->setPoint(new float[3]{0.1983,0.8024,-0.028});
LineSet823->setCoord(*Coordinate824);

//from l_midcarpal_2 to l_carpometacarpal_2
CColorRGBA* ColorRGBA825 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA825->setUSE("HAnimSegmentLineColorRGBA");
LineSet823->setColor(*ColorRGBA825);

Shape822->setGeometry(LineSet823);

HAnimJoint821->setShape(*Shape822);

CHAnimSite* HAnimSite826 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite826->setName("l_metacarpal_phalanx_2_pt");
HAnimSite826->setDEF("hanim_l_metacarpal_phalanx_2_pt");
HAnimSite826->setTranslation(new float[3]{0.2009,0.8139,-0.0237});
CTouchSensor* TouchSensor827 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor827->setDescription("HAnimSite l_metacarpal_phalanx_2_pt");
HAnimSite826->addChildren(*TouchSensor827);

CShape* Shape828 = (CShape *)(m_pScene.createNode("Shape"));
Shape828->setUSE("HAnimSiteShape");
HAnimSite826->addChildren(*Shape828);

HAnimJoint821->addHAnimSite(*HAnimSite826);

CHAnimJoint* HAnimJoint829 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint829->setName("l_carpometacarpal_2");
HAnimJoint829->setDEF("hanim_l_carpometacarpal_2");
HAnimJoint829->setCenter(new float[3]{0.1983,0.8024,-0.028});
HAnimJoint829->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint829->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape830 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet831 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet831->setVertexCount(new int[1]{2});
CCoordinate* Coordinate832 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate832->setPoint(new float[6]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028});
LineSet831->setCoord(*Coordinate832);

//from l_carpometacarpal_2 to l_metacarpophalangeal_2
CColorRGBA* ColorRGBA833 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA833->setUSE("HAnimSegmentLineColorRGBA");
LineSet831->setColor(*ColorRGBA833);

Shape830->setGeometry(LineSet831);

HAnimJoint829->setShape(*Shape830);

CHAnimJoint* HAnimJoint834 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint834->setName("l_metacarpophalangeal_2");
HAnimJoint834->setDEF("hanim_l_metacarpophalangeal_2");
HAnimJoint834->setCenter(new float[3]{0.1983,0.7815,-0.028});
HAnimJoint834->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint834->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape835 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet836 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet836->setVertexCount(new int[1]{2});
CCoordinate* Coordinate837 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate837->setPoint(new float[6]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248});
LineSet836->setCoord(*Coordinate837);

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2
CColorRGBA* ColorRGBA838 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA838->setUSE("HAnimSegmentLineColorRGBA");
LineSet836->setColor(*ColorRGBA838);

Shape835->setGeometry(LineSet836);

HAnimJoint834->setShape(*Shape835);

CHAnimJoint* HAnimJoint839 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint839->setName("l_carpal_proximal_interphalangeal_2");
HAnimJoint839->setDEF("hanim_l_carpal_proximal_interphalangeal_2");
HAnimJoint839->setCenter(new float[3]{0.2017,0.7363,-0.0248});
HAnimJoint839->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint839->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape840 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet841 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet841->setVertexCount(new int[1]{2});
CCoordinate* Coordinate842 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate842->setPoint(new float[6]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236});
LineSet841->setCoord(*Coordinate842);

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2
CColorRGBA* ColorRGBA843 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA843->setUSE("HAnimSegmentLineColorRGBA");
LineSet841->setColor(*ColorRGBA843);

Shape840->setGeometry(LineSet841);

HAnimJoint839->setShape(*Shape840);

CHAnimSite* HAnimSite844 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite844->setName("l_carpal_distal_phalanx_2_tip");
HAnimSite844->setDEF("hanim_l_carpal_distal_phalanx_2_tip");
HAnimSite844->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor845 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor845->setDescription("HAnimSite l_carpal_distal_phalanx_2_tip");
HAnimSite844->addChildren(*TouchSensor845);

CShape* Shape846 = (CShape *)(m_pScene.createNode("Shape"));
Shape846->setUSE("HAnimSiteShape");
HAnimSite844->addChildren(*Shape846);

HAnimJoint839->addHAnimSite(*HAnimSite844);

CHAnimSite* HAnimSite847 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite847->setName("l_dactylion_pt");
HAnimSite847->setDEF("hanim_l_dactylion_pt");
HAnimSite847->setTranslation(new float[3]{0.2056,0.6743,-0.0482});
CTouchSensor* TouchSensor848 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor848->setDescription("HAnimSite l_dactylion_pt");
HAnimSite847->addChildren(*TouchSensor848);

CShape* Shape849 = (CShape *)(m_pScene.createNode("Shape"));
Shape849->setUSE("HAnimSiteShape");
HAnimSite847->addChildren(*Shape849);

HAnimJoint839->addHAnimSite(*HAnimSite847);

CHAnimJoint* HAnimJoint850 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint850->setName("l_carpal_distal_interphalangeal_2");
HAnimJoint850->setDEF("hanim_l_carpal_distal_interphalangeal_2");
HAnimJoint850->setCenter(new float[3]{0.2028,0.7139,-0.0236});
HAnimJoint850->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint850->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint839->addChildren(*HAnimJoint850);

HAnimJoint834->addChildren(*HAnimJoint839);

HAnimJoint829->addChildren(*HAnimJoint834);

HAnimJoint821->addChildren(*HAnimJoint829);

HAnimJoint785->addChildren(*HAnimJoint821);

CHAnimJoint* HAnimJoint851 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint851->setName("l_midcarpal_3");
HAnimJoint851->setDEF("hanim_l_midcarpal_3");
HAnimJoint851->setCenter(new float[3]{0,1,0});
HAnimJoint851->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint851->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape852 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet853 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet853->setVertexCount(new int[1]{1});
CCoordinate* Coordinate854 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate854->setPoint(new float[3]{0.1987,0.8029,-0.053});
LineSet853->setCoord(*Coordinate854);

//from l_midcarpal_3 to l_carpometacarpal_3
CColorRGBA* ColorRGBA855 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA855->setUSE("HAnimSegmentLineColorRGBA");
LineSet853->setColor(*ColorRGBA855);

Shape852->setGeometry(LineSet853);

HAnimJoint851->setShape(*Shape852);

CHAnimSite* HAnimSite856 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite856->setName("l_metacarpal_phalanx_3_pt");
HAnimSite856->setDEF("hanim_l_metacarpal_phalanx_3_pt");
HAnimSite856->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor857 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor857->setDescription("HAnimSite l_metacarpal_phalanx_3_pt");
HAnimSite856->addChildren(*TouchSensor857);

CShape* Shape858 = (CShape *)(m_pScene.createNode("Shape"));
Shape858->setUSE("HAnimSiteShape");
HAnimSite856->addChildren(*Shape858);

HAnimJoint851->addHAnimSite(*HAnimSite856);

CHAnimJoint* HAnimJoint859 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint859->setName("l_carpometacarpal_3");
HAnimJoint859->setDEF("hanim_l_carpometacarpal_3");
HAnimJoint859->setCenter(new float[3]{0.1987,0.8029,-0.053});
HAnimJoint859->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint859->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape860 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet861 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet861->setVertexCount(new int[1]{2});
CCoordinate* Coordinate862 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate862->setPoint(new float[6]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053});
LineSet861->setCoord(*Coordinate862);

//from l_carpometacarpal_3 to l_metacarpophalangeal_3
CColorRGBA* ColorRGBA863 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA863->setUSE("HAnimSegmentLineColorRGBA");
LineSet861->setColor(*ColorRGBA863);

Shape860->setGeometry(LineSet861);

HAnimJoint859->setShape(*Shape860);

CHAnimJoint* HAnimJoint864 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint864->setName("l_metacarpophalangeal_3");
HAnimJoint864->setDEF("hanim_l_metacarpophalangeal_3");
HAnimJoint864->setCenter(new float[3]{0.1987,0.7818,-0.053});
HAnimJoint864->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint864->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape865 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet866 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet866->setVertexCount(new int[1]{2});
CCoordinate* Coordinate867 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate867->setPoint(new float[6]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503});
LineSet866->setCoord(*Coordinate867);

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3
CColorRGBA* ColorRGBA868 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA868->setUSE("HAnimSegmentLineColorRGBA");
LineSet866->setColor(*ColorRGBA868);

Shape865->setGeometry(LineSet866);

HAnimJoint864->setShape(*Shape865);

CHAnimJoint* HAnimJoint869 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint869->setName("l_carpal_proximal_interphalangeal_3");
HAnimJoint869->setDEF("hanim_l_carpal_proximal_interphalangeal_3");
HAnimJoint869->setCenter(new float[3]{0.2013,0.7273,-0.0503});
HAnimJoint869->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint869->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape870 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet871 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet871->setVertexCount(new int[1]{2});
CCoordinate* Coordinate872 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate872->setPoint(new float[6]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494});
LineSet871->setCoord(*Coordinate872);

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3
CColorRGBA* ColorRGBA873 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA873->setUSE("HAnimSegmentLineColorRGBA");
LineSet871->setColor(*ColorRGBA873);

Shape870->setGeometry(LineSet871);

HAnimJoint869->setShape(*Shape870);

CHAnimSite* HAnimSite874 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite874->setName("l_carpal_distal_phalanx_3_tip");
HAnimSite874->setDEF("hanim_l_carpal_distal_phalanx_3_tip");
HAnimSite874->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor875 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor875->setDescription("HAnimSite l_carpal_distal_phalanx_3_tip");
HAnimSite874->addChildren(*TouchSensor875);

CShape* Shape876 = (CShape *)(m_pScene.createNode("Shape"));
Shape876->setUSE("HAnimSiteShape");
HAnimSite874->addChildren(*Shape876);

HAnimJoint869->addHAnimSite(*HAnimSite874);

CHAnimJoint* HAnimJoint877 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint877->setName("l_carpal_distal_interphalangeal_3");
HAnimJoint877->setDEF("hanim_l_carpal_distal_interphalangeal_3");
HAnimJoint877->setCenter(new float[3]{0.2026,0.7011,-0.0494});
HAnimJoint877->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint877->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint869->addChildren(*HAnimJoint877);

HAnimJoint864->addChildren(*HAnimJoint869);

HAnimJoint859->addChildren(*HAnimJoint864);

HAnimJoint851->addChildren(*HAnimJoint859);

HAnimJoint785->addChildren(*HAnimJoint851);

CHAnimJoint* HAnimJoint878 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint878->setName("l_midcarpal_4_5");
HAnimJoint878->setDEF("hanim_l_midcarpal_4_5");
HAnimJoint878->setCenter(new float[3]{0,1,0});
HAnimJoint878->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint878->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape879 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet880 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet880->setVertexCount(new int[1]{1});
CCoordinate* Coordinate881 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate881->setPoint(new float[3]{0.1956,0.8019,-0.0794});
LineSet880->setCoord(*Coordinate881);

//from l_midcarpal_4_5 to l_carpometacarpal_4
CColorRGBA* ColorRGBA882 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA882->setUSE("HAnimSegmentLineColorRGBA");
LineSet880->setColor(*ColorRGBA882);

Shape879->setGeometry(LineSet880);

HAnimJoint878->setShape(*Shape879);

CShape* Shape883 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet884 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet884->setVertexCount(new int[1]{1});
CCoordinate* Coordinate885 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate885->setPoint(new float[3]{0.1925,0.8066,-0.1036});
LineSet884->setCoord(*Coordinate885);

//from l_midcarpal_4_5 to l_carpometacarpal_5
CColorRGBA* ColorRGBA886 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA886->setUSE("HAnimSegmentLineColorRGBA");
LineSet884->setColor(*ColorRGBA886);

Shape883->setGeometry(LineSet884);

HAnimJoint878->addShape(*Shape883);

CHAnimSite* HAnimSite887 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite887->setName("l_metacarpal_phalanx_5_pt");
HAnimSite887->setDEF("hanim_l_metacarpal_phalanx_5_pt");
HAnimSite887->setTranslation(new float[3]{0.1929,0.786,-0.1122});
CTouchSensor* TouchSensor888 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor888->setDescription("HAnimSite l_metacarpal_phalanx_5_pt");
HAnimSite887->addChildren(*TouchSensor888);

CShape* Shape889 = (CShape *)(m_pScene.createNode("Shape"));
Shape889->setUSE("HAnimSiteShape");
HAnimSite887->addChildren(*Shape889);

HAnimJoint878->addHAnimSite(*HAnimSite887);

CHAnimJoint* HAnimJoint890 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint890->setName("l_carpometacarpal_4");
HAnimJoint890->setDEF("hanim_l_carpometacarpal_4");
HAnimJoint890->setCenter(new float[3]{0.1956,0.8019,-0.0794});
HAnimJoint890->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint890->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape891 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet892 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet892->setVertexCount(new int[1]{2});
CCoordinate* Coordinate893 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate893->setPoint(new float[6]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794});
LineSet892->setCoord(*Coordinate893);

//from l_carpometacarpal_4 to l_metacarpophalangeal_4
CColorRGBA* ColorRGBA894 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA894->setUSE("HAnimSegmentLineColorRGBA");
LineSet892->setColor(*ColorRGBA894);

Shape891->setGeometry(LineSet892);

HAnimJoint890->setShape(*Shape891);

CHAnimJoint* HAnimJoint895 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint895->setName("l_metacarpophalangeal_4");
HAnimJoint895->setDEF("hanim_l_metacarpophalangeal_4");
HAnimJoint895->setCenter(new float[3]{0.1956,0.7815,-0.0794});
HAnimJoint895->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint895->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape896 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet897 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet897->setVertexCount(new int[1]{2});
CCoordinate* Coordinate898 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate898->setPoint(new float[6]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777});
LineSet897->setCoord(*Coordinate898);

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4
CColorRGBA* ColorRGBA899 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA899->setUSE("HAnimSegmentLineColorRGBA");
LineSet897->setColor(*ColorRGBA899);

Shape896->setGeometry(LineSet897);

HAnimJoint895->setShape(*Shape896);

CHAnimJoint* HAnimJoint900 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint900->setName("l_carpal_proximal_interphalangeal_4");
HAnimJoint900->setDEF("hanim_l_carpal_proximal_interphalangeal_4");
HAnimJoint900->setCenter(new float[3]{0.1973,0.7287,-0.0777});
HAnimJoint900->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint900->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape901 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet902 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet902->setVertexCount(new int[1]{2});
CCoordinate* Coordinate903 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate903->setPoint(new float[6]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767});
LineSet902->setCoord(*Coordinate903);

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4
CColorRGBA* ColorRGBA904 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA904->setUSE("HAnimSegmentLineColorRGBA");
LineSet902->setColor(*ColorRGBA904);

Shape901->setGeometry(LineSet902);

HAnimJoint900->setShape(*Shape901);

CHAnimSite* HAnimSite905 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite905->setName("l_carpal_distal_phalanx_4_tip");
HAnimSite905->setDEF("hanim_l_carpal_distal_phalanx_4_tip");
HAnimSite905->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor906 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor906->setDescription("HAnimSite l_carpal_distal_phalanx_4_tip");
HAnimSite905->addChildren(*TouchSensor906);

CShape* Shape907 = (CShape *)(m_pScene.createNode("Shape"));
Shape907->setUSE("HAnimSiteShape");
HAnimSite905->addChildren(*Shape907);

HAnimJoint900->addHAnimSite(*HAnimSite905);

CHAnimJoint* HAnimJoint908 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint908->setName("l_carpal_distal_interphalangeal_4");
HAnimJoint908->setDEF("hanim_l_carpal_distal_interphalangeal_4");
HAnimJoint908->setCenter(new float[3]{0.1983,0.7045,-0.0767});
HAnimJoint908->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint908->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint900->addChildren(*HAnimJoint908);

HAnimJoint895->addChildren(*HAnimJoint900);

HAnimJoint890->addChildren(*HAnimJoint895);

HAnimJoint878->addChildren(*HAnimJoint890);

CHAnimJoint* HAnimJoint909 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint909->setName("l_carpometacarpal_5");
HAnimJoint909->setDEF("hanim_l_carpometacarpal_5");
HAnimJoint909->setCenter(new float[3]{0.1925,0.8066,-0.1036});
HAnimJoint909->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint909->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape910 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet911 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet911->setVertexCount(new int[1]{2});
CCoordinate* Coordinate912 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate912->setPoint(new float[6]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036});
LineSet911->setCoord(*Coordinate912);

//from l_carpometacarpal_5 to l_metacarpophalangeal_5
CColorRGBA* ColorRGBA913 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA913->setUSE("HAnimSegmentLineColorRGBA");
LineSet911->setColor(*ColorRGBA913);

Shape910->setGeometry(LineSet911);

HAnimJoint909->setShape(*Shape910);

CHAnimJoint* HAnimJoint914 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint914->setName("l_metacarpophalangeal_5");
HAnimJoint914->setDEF("hanim_l_metacarpophalangeal_5");
HAnimJoint914->setCenter(new float[3]{0.1925,0.7866,-0.1036});
HAnimJoint914->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint914->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape915 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet916 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet916->setVertexCount(new int[1]{2});
CCoordinate* Coordinate917 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate917->setPoint(new float[6]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024});
LineSet916->setCoord(*Coordinate917);

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5
CColorRGBA* ColorRGBA918 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA918->setUSE("HAnimSegmentLineColorRGBA");
LineSet916->setColor(*ColorRGBA918);

Shape915->setGeometry(LineSet916);

HAnimJoint914->setShape(*Shape915);

CHAnimJoint* HAnimJoint919 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint919->setName("l_carpal_proximal_interphalangeal_5");
HAnimJoint919->setDEF("hanim_l_carpal_proximal_interphalangeal_5");
HAnimJoint919->setCenter(new float[3]{0.1938,0.7452,-0.1024});
HAnimJoint919->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint919->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape920 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet921 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet921->setVertexCount(new int[1]{2});
CCoordinate* Coordinate922 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate922->setPoint(new float[6]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017});
LineSet921->setCoord(*Coordinate922);

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5
CColorRGBA* ColorRGBA923 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA923->setUSE("HAnimSegmentLineColorRGBA");
LineSet921->setColor(*ColorRGBA923);

Shape920->setGeometry(LineSet921);

HAnimJoint919->setShape(*Shape920);

CHAnimSite* HAnimSite924 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite924->setName("l_carpal_distal_phalanx_5_tip");
HAnimSite924->setDEF("hanim_l_carpal_distal_phalanx_5_tip");
HAnimSite924->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor925 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor925->setDescription("HAnimSite l_carpal_distal_phalanx_5_tip");
HAnimSite924->addChildren(*TouchSensor925);

CShape* Shape926 = (CShape *)(m_pScene.createNode("Shape"));
Shape926->setUSE("HAnimSiteShape");
HAnimSite924->addChildren(*Shape926);

HAnimJoint919->addHAnimSite(*HAnimSite924);

CHAnimJoint* HAnimJoint927 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint927->setName("l_carpal_distal_interphalangeal_5");
HAnimJoint927->setDEF("hanim_l_carpal_distal_interphalangeal_5");
HAnimJoint927->setCenter(new float[3]{0.1948,0.7277,-0.1017});
HAnimJoint927->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint927->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint919->addChildren(*HAnimJoint927);

HAnimJoint914->addChildren(*HAnimJoint919);

HAnimJoint909->addChildren(*HAnimJoint914);

HAnimJoint878->addChildren(*HAnimJoint909);

HAnimJoint785->addChildren(*HAnimJoint878);

HAnimJoint777->addChildren(*HAnimJoint785);

HAnimJoint760->addChildren(*HAnimJoint777);

HAnimJoint749->addChildren(*HAnimJoint760);

HAnimJoint744->addChildren(*HAnimJoint749);

HAnimJoint576->addChildren(*HAnimJoint744);

CHAnimJoint* HAnimJoint928 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint928->setName("r_sternoclavicular");
HAnimJoint928->setDEF("hanim_r_sternoclavicular");
HAnimJoint928->setCenter(new float[3]{-0.0694,1.46,-0.033});
HAnimJoint928->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint928->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape929 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet930 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet930->setVertexCount(new int[1]{2});
CCoordinate* Coordinate931 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate931->setPoint(new float[6]{-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401});
LineSet930->setCoord(*Coordinate931);

//from r_sternoclavicular to r_acromioclavicular
CColorRGBA* ColorRGBA932 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA932->setUSE("HAnimSegmentLineColorRGBA");
LineSet930->setColor(*ColorRGBA932);

Shape929->setGeometry(LineSet930);

HAnimJoint928->setShape(*Shape929);

CHAnimJoint* HAnimJoint933 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint933->setName("r_acromioclavicular");
HAnimJoint933->setDEF("hanim_r_acromioclavicular");
HAnimJoint933->setCenter(new float[3]{-0.0836,1.4281,-0.0401});
HAnimJoint933->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint933->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape934 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet935 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet935->setVertexCount(new int[1]{2});
CCoordinate* Coordinate936 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate936->setPoint(new float[6]{-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325});
LineSet935->setCoord(*Coordinate936);

//from r_acromioclavicular to r_shoulder
CColorRGBA* ColorRGBA937 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA937->setUSE("HAnimSegmentLineColorRGBA");
LineSet935->setColor(*ColorRGBA937);

Shape934->setGeometry(LineSet935);

HAnimJoint933->setShape(*Shape934);

CHAnimSite* HAnimSite938 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite938->setName("r_bideltoid_pt");
HAnimSite938->setDEF("hanim_r_bideltoid_pt");
HAnimSite938->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor939 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor939->setDescription("HAnimSite r_bideltoid_pt");
HAnimSite938->addChildren(*TouchSensor939);

CShape* Shape940 = (CShape *)(m_pScene.createNode("Shape"));
Shape940->setUSE("HAnimSiteShape");
HAnimSite938->addChildren(*Shape940);

HAnimJoint933->addHAnimSite(*HAnimSite938);

CHAnimSite* HAnimSite941 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite941->setName("r_humeral_lateral_epicondyles_pt");
HAnimSite941->setDEF("hanim_r_humeral_lateral_epicondyles_pt");
HAnimSite941->setTranslation(new float[3]{-0.2224,1.1517,-0.1033});
CTouchSensor* TouchSensor942 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor942->setDescription("HAnimSite r_humeral_lateral_epicondyles_pt");
HAnimSite941->addChildren(*TouchSensor942);

CShape* Shape943 = (CShape *)(m_pScene.createNode("Shape"));
Shape943->setUSE("HAnimSiteShape");
HAnimSite941->addChildren(*Shape943);

HAnimJoint933->addHAnimSite(*HAnimSite941);

CHAnimJoint* HAnimJoint944 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint944->setName("r_shoulder");
HAnimJoint944->setDEF("hanim_r_shoulder");
HAnimJoint944->setCenter(new float[3]{-0.1907,1.4407,-0.0325});
HAnimJoint944->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint944->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape945 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet946 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet946->setVertexCount(new int[1]{2});
CCoordinate* Coordinate947 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate947->setPoint(new float[6]{-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062});
LineSet946->setCoord(*Coordinate947);

//from r_shoulder to r_elbow
CColorRGBA* ColorRGBA948 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA948->setUSE("HAnimSegmentLineColorRGBA");
LineSet946->setColor(*ColorRGBA948);

Shape945->setGeometry(LineSet946);

HAnimJoint944->setShape(*Shape945);

CHAnimSite* HAnimSite949 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite949->setName("r_humeral_medial_epicondyles_pt");
HAnimSite949->setDEF("hanim_r_humeral_medial_epicondyles_pt");
HAnimSite949->setTranslation(new float[3]{-0.168,1.1298,-0.1062});
CTouchSensor* TouchSensor950 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor950->setDescription("HAnimSite r_humeral_medial_epicondyles_pt");
HAnimSite949->addChildren(*TouchSensor950);

CShape* Shape951 = (CShape *)(m_pScene.createNode("Shape"));
Shape951->setUSE("HAnimSiteShape");
HAnimSite949->addChildren(*Shape951);

HAnimJoint944->addHAnimSite(*HAnimSite949);

CHAnimSite* HAnimSite952 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite952->setName("r_olecranon_pt");
HAnimSite952->setDEF("hanim_r_olecranon_pt");
HAnimSite952->setTranslation(new float[3]{-0.1907,1.1405,-0.1065});
CTouchSensor* TouchSensor953 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor953->setDescription("HAnimSite r_olecranon_pt");
HAnimSite952->addChildren(*TouchSensor953);

CShape* Shape954 = (CShape *)(m_pScene.createNode("Shape"));
Shape954->setUSE("HAnimSiteShape");
HAnimSite952->addChildren(*Shape954);

HAnimJoint944->addHAnimSite(*HAnimSite952);

CHAnimSite* HAnimSite955 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite955->setName("r_radial_styloid_pt");
HAnimSite955->setDEF("hanim_r_radial_styloid_pt");
HAnimSite955->setTranslation(new float[3]{-0.1884,0.8676,-0.036});
CTouchSensor* TouchSensor956 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor956->setDescription("HAnimSite r_radial_styloid_pt");
HAnimSite955->addChildren(*TouchSensor956);

CShape* Shape957 = (CShape *)(m_pScene.createNode("Shape"));
Shape957->setUSE("HAnimSiteShape");
HAnimSite955->addChildren(*Shape957);

HAnimJoint944->addHAnimSite(*HAnimSite955);

CHAnimSite* HAnimSite958 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite958->setName("r_radiale_pt");
HAnimSite958->setDEF("hanim_r_radiale_pt");
HAnimSite958->setTranslation(new float[3]{-0.213,1.1305,-0.1091});
CTouchSensor* TouchSensor959 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor959->setDescription("HAnimSite r_radiale_pt");
HAnimSite958->addChildren(*TouchSensor959);

CShape* Shape960 = (CShape *)(m_pScene.createNode("Shape"));
Shape960->setUSE("HAnimSiteShape");
HAnimSite958->addChildren(*Shape960);

HAnimJoint944->addHAnimSite(*HAnimSite958);

CHAnimJoint* HAnimJoint961 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint961->setName("r_elbow");
HAnimJoint961->setDEF("hanim_r_elbow");
HAnimJoint961->setCenter(new float[3]{-0.1949,1.1388,-0.062});
HAnimJoint961->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint961->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape962 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet963 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet963->setVertexCount(new int[1]{2});
CCoordinate* Coordinate964 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate964->setPoint(new float[6]{-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521});
LineSet963->setCoord(*Coordinate964);

//from r_elbow to r_radiocarpal
CColorRGBA* ColorRGBA965 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA965->setUSE("HAnimSegmentLineColorRGBA");
LineSet963->setColor(*ColorRGBA965);

Shape962->setGeometry(LineSet963);

HAnimJoint961->setShape(*Shape962);

CHAnimSite* HAnimSite966 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite966->setName("r_ulnar_styloid_pt");
HAnimSite966->setDEF("hanim_r_ulnar_styloid_pt");
HAnimSite966->setTranslation(new float[3]{-0.2117,0.8562,-0.0584});
CTouchSensor* TouchSensor967 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor967->setDescription("HAnimSite r_ulnar_styloid_pt");
HAnimSite966->addChildren(*TouchSensor967);

CShape* Shape968 = (CShape *)(m_pScene.createNode("Shape"));
Shape968->setUSE("HAnimSiteShape");
HAnimSite966->addChildren(*Shape968);

HAnimJoint961->addHAnimSite(*HAnimSite966);

CHAnimJoint* HAnimJoint969 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint969->setName("r_radiocarpal");
HAnimJoint969->setDEF("hanim_r_radiocarpal");
HAnimJoint969->setCenter(new float[3]{-0.1959,0.8694,-0.0521});
HAnimJoint969->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint969->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape970 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet971 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet971->setVertexCount(new int[1]{2});
CCoordinate* Coordinate972 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate972->setPoint(new float[6]{-0.1959,0.8694,-0.0521,0,1,0});
LineSet971->setCoord(*Coordinate972);

//from r_radiocarpal to r_midcarpal_1
CColorRGBA* ColorRGBA973 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA973->setUSE("HAnimSegmentLineColorRGBA");
LineSet971->setColor(*ColorRGBA973);

Shape970->setGeometry(LineSet971);

HAnimJoint969->setShape(*Shape970);

CShape* Shape974 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet975 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet975->setVertexCount(new int[1]{2});
CCoordinate* Coordinate976 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate976->setPoint(new float[6]{-0.1959,0.8694,-0.0521,0,1,0});
LineSet975->setCoord(*Coordinate976);

//from r_radiocarpal to r_midcarpal_2
CColorRGBA* ColorRGBA977 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA977->setUSE("HAnimSegmentLineColorRGBA");
LineSet975->setColor(*ColorRGBA977);

Shape974->setGeometry(LineSet975);

HAnimJoint969->addShape(*Shape974);

CShape* Shape978 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet979 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet979->setVertexCount(new int[1]{2});
CCoordinate* Coordinate980 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate980->setPoint(new float[6]{-0.1959,0.8694,-0.0521,0,1,0});
LineSet979->setCoord(*Coordinate980);

//from r_radiocarpal to r_midcarpal_3
CColorRGBA* ColorRGBA981 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA981->setUSE("HAnimSegmentLineColorRGBA");
LineSet979->setColor(*ColorRGBA981);

Shape978->setGeometry(LineSet979);

HAnimJoint969->addShape(*Shape978);

CShape* Shape982 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet983 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet983->setVertexCount(new int[1]{2});
CCoordinate* Coordinate984 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate984->setPoint(new float[6]{-0.1959,0.8694,-0.0521,0,1,0});
LineSet983->setCoord(*Coordinate984);

//from r_radiocarpal to r_midcarpal_4_5
CColorRGBA* ColorRGBA985 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA985->setUSE("HAnimSegmentLineColorRGBA");
LineSet983->setColor(*ColorRGBA985);

Shape982->setGeometry(LineSet983);

HAnimJoint969->addShape(*Shape982);

CHAnimJoint* HAnimJoint986 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint986->setName("r_midcarpal_1");
HAnimJoint986->setDEF("hanim_r_midcarpal_1");
HAnimJoint986->setCenter(new float[3]{0,1,0});
HAnimJoint986->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint986->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape987 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet988 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet988->setVertexCount(new int[1]{1});
CCoordinate* Coordinate989 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate989->setPoint(new float[3]{-0.1899,0.8502,-0.0473});
LineSet988->setCoord(*Coordinate989);

//from r_midcarpal_1 to r_carpometacarpal_1
CColorRGBA* ColorRGBA990 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA990->setUSE("HAnimSegmentLineColorRGBA");
LineSet988->setColor(*ColorRGBA990);

Shape987->setGeometry(LineSet988);

HAnimJoint986->setShape(*Shape987);

CHAnimJoint* HAnimJoint991 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint991->setName("r_carpometacarpal_1");
HAnimJoint991->setDEF("hanim_r_carpometacarpal_1");
HAnimJoint991->setCenter(new float[3]{-0.1899,0.8502,-0.0473});
HAnimJoint991->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint991->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape992 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet993 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet993->setVertexCount(new int[1]{2});
CCoordinate* Coordinate994 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate994->setPoint(new float[6]{-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306});
LineSet993->setCoord(*Coordinate994);

//from r_carpometacarpal_1 to r_metacarpophalangeal_1
CColorRGBA* ColorRGBA995 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA995->setUSE("HAnimSegmentLineColorRGBA");
LineSet993->setColor(*ColorRGBA995);

Shape992->setGeometry(LineSet993);

HAnimJoint991->setShape(*Shape992);

CHAnimJoint* HAnimJoint996 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint996->setName("r_metacarpophalangeal_1");
HAnimJoint996->setDEF("hanim_r_metacarpophalangeal_1");
HAnimJoint996->setCenter(new float[3]{-0.1874,0.8256,0.0306});
HAnimJoint996->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint996->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape997 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet998 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet998->setVertexCount(new int[1]{2});
CCoordinate* Coordinate999 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate999->setPoint(new float[6]{-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506});
LineSet998->setCoord(*Coordinate999);

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1
CColorRGBA* ColorRGBA1000 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1000->setUSE("HAnimSegmentLineColorRGBA");
LineSet998->setColor(*ColorRGBA1000);

Shape997->setGeometry(LineSet998);

HAnimJoint996->setShape(*Shape997);

CHAnimSite* HAnimSite1001 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1001->setName("r_carpal_distal_phalanx_1_tip");
HAnimSite1001->setDEF("hanim_r_carpal_distal_phalanx_1_tip");
HAnimSite1001->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor1002 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1002->setDescription("HAnimSite r_carpal_distal_phalanx_1_tip");
HAnimSite1001->addChildren(*TouchSensor1002);

CShape* Shape1003 = (CShape *)(m_pScene.createNode("Shape"));
Shape1003->setUSE("HAnimSiteShape");
HAnimSite1001->addChildren(*Shape1003);

HAnimJoint996->addHAnimSite(*HAnimSite1001);

CHAnimJoint* HAnimJoint1004 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1004->setName("r_carpal_interphalangeal_1");
HAnimJoint1004->setDEF("hanim_r_carpal_interphalangeal_1");
HAnimJoint1004->setCenter(new float[3]{-0.1864,0.819,0.0506});
HAnimJoint1004->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1004->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint996->addChildren(*HAnimJoint1004);

HAnimJoint991->addChildren(*HAnimJoint996);

HAnimJoint986->addChildren(*HAnimJoint991);

HAnimJoint969->addChildren(*HAnimJoint986);

CHAnimJoint* HAnimJoint1005 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1005->setName("r_midcarpal_2");
HAnimJoint1005->setDEF("hanim_r_midcarpal_2");
HAnimJoint1005->setCenter(new float[3]{0,1,0});
HAnimJoint1005->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1005->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape1006 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1007 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1007->setVertexCount(new int[1]{1});
CCoordinate* Coordinate1008 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1008->setPoint(new float[3]{-0.1961,0.8055,-0.0218});
LineSet1007->setCoord(*Coordinate1008);

//from r_midcarpal_2 to r_carpometacarpal_2
CColorRGBA* ColorRGBA1009 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1009->setUSE("HAnimSegmentLineColorRGBA");
LineSet1007->setColor(*ColorRGBA1009);

Shape1006->setGeometry(LineSet1007);

HAnimJoint1005->setShape(*Shape1006);

CHAnimSite* HAnimSite1010 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1010->setName("r_metacarpal_phalanx_2_pt");
HAnimSite1010->setDEF("hanim_r_metacarpal_phalanx_2_pt");
HAnimSite1010->setTranslation(new float[3]{-0.1977,0.8169,-0.0177});
CTouchSensor* TouchSensor1011 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1011->setDescription("HAnimSite r_metacarpal_phalanx_2_pt");
HAnimSite1010->addChildren(*TouchSensor1011);

CShape* Shape1012 = (CShape *)(m_pScene.createNode("Shape"));
Shape1012->setUSE("HAnimSiteShape");
HAnimSite1010->addChildren(*Shape1012);

HAnimJoint1005->addHAnimSite(*HAnimSite1010);

CHAnimJoint* HAnimJoint1013 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1013->setName("r_carpometacarpal_2");
HAnimJoint1013->setDEF("hanim_r_carpometacarpal_2");
HAnimJoint1013->setCenter(new float[3]{-0.1961,0.8055,-0.0218});
HAnimJoint1013->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1013->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape1014 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1015 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1015->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1016 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1016->setPoint(new float[6]{-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218});
LineSet1015->setCoord(*Coordinate1016);

//from r_carpometacarpal_2 to r_metacarpophalangeal_2
CColorRGBA* ColorRGBA1017 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1017->setUSE("HAnimSegmentLineColorRGBA");
LineSet1015->setColor(*ColorRGBA1017);

Shape1014->setGeometry(LineSet1015);

HAnimJoint1013->setShape(*Shape1014);

CHAnimJoint* HAnimJoint1018 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1018->setName("r_metacarpophalangeal_2");
HAnimJoint1018->setDEF("hanim_r_metacarpophalangeal_2");
HAnimJoint1018->setCenter(new float[3]{-0.1961,0.7846,-0.0218});
HAnimJoint1018->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1018->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape1019 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1020 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1020->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1021 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1021->setPoint(new float[6]{-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185});
LineSet1020->setCoord(*Coordinate1021);

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2
CColorRGBA* ColorRGBA1022 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1022->setUSE("HAnimSegmentLineColorRGBA");
LineSet1020->setColor(*ColorRGBA1022);

Shape1019->setGeometry(LineSet1020);

HAnimJoint1018->setShape(*Shape1019);

CHAnimJoint* HAnimJoint1023 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1023->setName("r_carpal_proximal_interphalangeal_2");
HAnimJoint1023->setDEF("hanim_r_carpal_proximal_interphalangeal_2");
HAnimJoint1023->setCenter(new float[3]{-0.1954,0.7393,-0.0185});
HAnimJoint1023->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1023->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape1024 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1025 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1025->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1026 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1026->setPoint(new float[6]{-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173});
LineSet1025->setCoord(*Coordinate1026);

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2
CColorRGBA* ColorRGBA1027 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1027->setUSE("HAnimSegmentLineColorRGBA");
LineSet1025->setColor(*ColorRGBA1027);

Shape1024->setGeometry(LineSet1025);

HAnimJoint1023->setShape(*Shape1024);

CHAnimSite* HAnimSite1028 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1028->setName("r_carpal_distal_phalanx_2_tip");
HAnimSite1028->setDEF("hanim_r_carpal_distal_phalanx_2_tip");
HAnimSite1028->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor1029 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1029->setDescription("HAnimSite r_carpal_distal_phalanx_2_tip");
HAnimSite1028->addChildren(*TouchSensor1029);

CShape* Shape1030 = (CShape *)(m_pScene.createNode("Shape"));
Shape1030->setUSE("HAnimSiteShape");
HAnimSite1028->addChildren(*Shape1030);

HAnimJoint1023->addHAnimSite(*HAnimSite1028);

CHAnimSite* HAnimSite1031 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1031->setName("r_dactylion_pt");
HAnimSite1031->setDEF("hanim_r_dactylion_pt");
HAnimSite1031->setTranslation(new float[3]{-0.1941,0.6772,-0.0423});
CTouchSensor* TouchSensor1032 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1032->setDescription("HAnimSite r_dactylion_pt");
HAnimSite1031->addChildren(*TouchSensor1032);

CShape* Shape1033 = (CShape *)(m_pScene.createNode("Shape"));
Shape1033->setUSE("HAnimSiteShape");
HAnimSite1031->addChildren(*Shape1033);

HAnimJoint1023->addHAnimSite(*HAnimSite1031);

CHAnimJoint* HAnimJoint1034 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1034->setName("r_carpal_distal_interphalangeal_2");
HAnimJoint1034->setDEF("hanim_r_carpal_distal_interphalangeal_2");
HAnimJoint1034->setCenter(new float[3]{-0.1945,0.7169,-0.0173});
HAnimJoint1034->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1034->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1023->addChildren(*HAnimJoint1034);

HAnimJoint1018->addChildren(*HAnimJoint1023);

HAnimJoint1013->addChildren(*HAnimJoint1018);

HAnimJoint1005->addChildren(*HAnimJoint1013);

HAnimJoint969->addChildren(*HAnimJoint1005);

CHAnimJoint* HAnimJoint1035 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1035->setName("r_midcarpal_3");
HAnimJoint1035->setDEF("hanim_r_midcarpal_3");
HAnimJoint1035->setCenter(new float[3]{0,1,0});
HAnimJoint1035->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1035->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape1036 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1037 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1037->setVertexCount(new int[1]{1});
CCoordinate* Coordinate1038 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1038->setPoint(new float[3]{-0.1972,0.806,-0.0468});
LineSet1037->setCoord(*Coordinate1038);

//from r_midcarpal_3 to r_carpometacarpal_3
CColorRGBA* ColorRGBA1039 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1039->setUSE("HAnimSegmentLineColorRGBA");
LineSet1037->setColor(*ColorRGBA1039);

Shape1036->setGeometry(LineSet1037);

HAnimJoint1035->setShape(*Shape1036);

CHAnimSite* HAnimSite1040 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1040->setName("r_metacarpal_phalanx_3_pt");
HAnimSite1040->setDEF("hanim_r_metacarpal_phalanx_3_pt");
HAnimSite1040->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor1041 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1041->setDescription("HAnimSite r_metacarpal_phalanx_3_pt");
HAnimSite1040->addChildren(*TouchSensor1041);

CShape* Shape1042 = (CShape *)(m_pScene.createNode("Shape"));
Shape1042->setUSE("HAnimSiteShape");
HAnimSite1040->addChildren(*Shape1042);

HAnimJoint1035->addHAnimSite(*HAnimSite1040);

CHAnimJoint* HAnimJoint1043 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1043->setName("r_carpometacarpal_3");
HAnimJoint1043->setDEF("hanim_r_carpometacarpal_3");
HAnimJoint1043->setCenter(new float[3]{-0.1972,0.806,-0.0468});
HAnimJoint1043->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1043->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape1044 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1045 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1045->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1046 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1046->setPoint(new float[6]{-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468});
LineSet1045->setCoord(*Coordinate1046);

//from r_carpometacarpal_3 to r_metacarpophalangeal_3
CColorRGBA* ColorRGBA1047 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1047->setUSE("HAnimSegmentLineColorRGBA");
LineSet1045->setColor(*ColorRGBA1047);

Shape1044->setGeometry(LineSet1045);

HAnimJoint1043->setShape(*Shape1044);

CHAnimJoint* HAnimJoint1048 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1048->setName("r_metacarpophalangeal_3");
HAnimJoint1048->setDEF("hanim_r_metacarpophalangeal_3");
HAnimJoint1048->setCenter(new float[3]{-0.1972,0.7849,-0.0468});
HAnimJoint1048->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1048->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape1049 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1050 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1050->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1051 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1051->setPoint(new float[6]{-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441});
LineSet1050->setCoord(*Coordinate1051);

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3
CColorRGBA* ColorRGBA1052 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1052->setUSE("HAnimSegmentLineColorRGBA");
LineSet1050->setColor(*ColorRGBA1052);

Shape1049->setGeometry(LineSet1050);

HAnimJoint1048->setShape(*Shape1049);

CHAnimJoint* HAnimJoint1053 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1053->setName("r_carpal_proximal_interphalangeal_3");
HAnimJoint1053->setDEF("hanim_r_carpal_proximal_interphalangeal_3");
HAnimJoint1053->setCenter(new float[3]{-0.195,0.7304,-0.0441});
HAnimJoint1053->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1053->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape1054 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1055 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1055->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1056 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1056->setPoint(new float[6]{-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432});
LineSet1055->setCoord(*Coordinate1056);

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3
CColorRGBA* ColorRGBA1057 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1057->setUSE("HAnimSegmentLineColorRGBA");
LineSet1055->setColor(*ColorRGBA1057);

Shape1054->setGeometry(LineSet1055);

HAnimJoint1053->setShape(*Shape1054);

CHAnimSite* HAnimSite1058 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1058->setName("r_carpal_distal_phalanx_3_tip");
HAnimSite1058->setDEF("hanim_r_carpal_distal_phalanx_3_tip");
HAnimSite1058->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor1059 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1059->setDescription("HAnimSite r_carpal_distal_phalanx_3_tip");
HAnimSite1058->addChildren(*TouchSensor1059);

CShape* Shape1060 = (CShape *)(m_pScene.createNode("Shape"));
Shape1060->setUSE("HAnimSiteShape");
HAnimSite1058->addChildren(*Shape1060);

HAnimJoint1053->addHAnimSite(*HAnimSite1058);

CHAnimJoint* HAnimJoint1061 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1061->setName("r_carpal_distal_interphalangeal_3");
HAnimJoint1061->setDEF("hanim_r_carpal_distal_interphalangeal_3");
HAnimJoint1061->setCenter(new float[3]{-0.1939,0.7042,-0.0432});
HAnimJoint1061->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1061->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1053->addChildren(*HAnimJoint1061);

HAnimJoint1048->addChildren(*HAnimJoint1053);

HAnimJoint1043->addChildren(*HAnimJoint1048);

HAnimJoint1035->addChildren(*HAnimJoint1043);

HAnimJoint969->addChildren(*HAnimJoint1035);

CHAnimJoint* HAnimJoint1062 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1062->setName("r_midcarpal_4_5");
HAnimJoint1062->setDEF("hanim_r_midcarpal_4_5");
HAnimJoint1062->setCenter(new float[3]{0,1,0});
HAnimJoint1062->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1062->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape1063 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1064 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1064->setVertexCount(new int[1]{1});
CCoordinate* Coordinate1065 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1065->setPoint(new float[3]{-0.1951,0.8049,-0.0732});
LineSet1064->setCoord(*Coordinate1065);

//from r_midcarpal_4_5 to r_carpometacarpal_4
CColorRGBA* ColorRGBA1066 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1066->setUSE("HAnimSegmentLineColorRGBA");
LineSet1064->setColor(*ColorRGBA1066);

Shape1063->setGeometry(LineSet1064);

HAnimJoint1062->setShape(*Shape1063);

CShape* Shape1067 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1068 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1068->setVertexCount(new int[1]{1});
CCoordinate* Coordinate1069 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1069->setPoint(new float[3]{-0.1926,0.8096,-0.0975});
LineSet1068->setCoord(*Coordinate1069);

//from r_midcarpal_4_5 to r_carpometacarpal_5
CColorRGBA* ColorRGBA1070 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1070->setUSE("HAnimSegmentLineColorRGBA");
LineSet1068->setColor(*ColorRGBA1070);

Shape1067->setGeometry(LineSet1068);

HAnimJoint1062->addShape(*Shape1067);

CHAnimSite* HAnimSite1071 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1071->setName("r_metacarpal_phalanx_5_pt");
HAnimSite1071->setDEF("hanim_r_metacarpal_phalanx_5_pt");
HAnimSite1071->setTranslation(new float[3]{-0.1929,0.789,-0.1064});
CTouchSensor* TouchSensor1072 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1072->setDescription("HAnimSite r_metacarpal_phalanx_5_pt");
HAnimSite1071->addChildren(*TouchSensor1072);

CShape* Shape1073 = (CShape *)(m_pScene.createNode("Shape"));
Shape1073->setUSE("HAnimSiteShape");
HAnimSite1071->addChildren(*Shape1073);

HAnimJoint1062->addHAnimSite(*HAnimSite1071);

CHAnimJoint* HAnimJoint1074 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1074->setName("r_carpometacarpal_4");
HAnimJoint1074->setDEF("hanim_r_carpometacarpal_4");
HAnimJoint1074->setCenter(new float[3]{-0.1951,0.8049,-0.0732});
HAnimJoint1074->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1074->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape1075 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1076 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1076->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1077 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1077->setPoint(new float[6]{-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732});
LineSet1076->setCoord(*Coordinate1077);

//from r_carpometacarpal_4 to r_metacarpophalangeal_4
CColorRGBA* ColorRGBA1078 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1078->setUSE("HAnimSegmentLineColorRGBA");
LineSet1076->setColor(*ColorRGBA1078);

Shape1075->setGeometry(LineSet1076);

HAnimJoint1074->setShape(*Shape1075);

CHAnimJoint* HAnimJoint1079 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1079->setName("r_metacarpophalangeal_4");
HAnimJoint1079->setDEF("hanim_r_metacarpophalangeal_4");
HAnimJoint1079->setCenter(new float[3]{-0.1951,0.7845,-0.0732});
HAnimJoint1079->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1079->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape1080 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1081 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1081->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1082 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1082->setPoint(new float[6]{-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716});
LineSet1081->setCoord(*Coordinate1082);

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4
CColorRGBA* ColorRGBA1083 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1083->setUSE("HAnimSegmentLineColorRGBA");
LineSet1081->setColor(*ColorRGBA1083);

Shape1080->setGeometry(LineSet1081);

HAnimJoint1079->setShape(*Shape1080);

CHAnimJoint* HAnimJoint1084 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1084->setName("r_carpal_proximal_interphalangeal_4");
HAnimJoint1084->setDEF("hanim_r_carpal_proximal_interphalangeal_4");
HAnimJoint1084->setCenter(new float[3]{-0.192,0.7318,-0.0716});
HAnimJoint1084->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1084->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape1085 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1086 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1086->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1087 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1087->setPoint(new float[6]{-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706});
LineSet1086->setCoord(*Coordinate1087);

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4
CColorRGBA* ColorRGBA1088 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1088->setUSE("HAnimSegmentLineColorRGBA");
LineSet1086->setColor(*ColorRGBA1088);

Shape1085->setGeometry(LineSet1086);

HAnimJoint1084->setShape(*Shape1085);

CHAnimSite* HAnimSite1089 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1089->setName("r_carpal_distal_phalanx_4_tip");
HAnimSite1089->setDEF("hanim_r_carpal_distal_phalanx_4_tip");
HAnimSite1089->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor1090 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1090->setDescription("HAnimSite r_carpal_distal_phalanx_4_tip");
HAnimSite1089->addChildren(*TouchSensor1090);

CShape* Shape1091 = (CShape *)(m_pScene.createNode("Shape"));
Shape1091->setUSE("HAnimSiteShape");
HAnimSite1089->addChildren(*Shape1091);

HAnimJoint1084->addHAnimSite(*HAnimSite1089);

CHAnimJoint* HAnimJoint1092 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1092->setName("r_carpal_distal_interphalangeal_4");
HAnimJoint1092->setDEF("hanim_r_carpal_distal_interphalangeal_4");
HAnimJoint1092->setCenter(new float[3]{-0.1908,0.7077,-0.0706});
HAnimJoint1092->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1092->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1084->addChildren(*HAnimJoint1092);

HAnimJoint1079->addChildren(*HAnimJoint1084);

HAnimJoint1074->addChildren(*HAnimJoint1079);

HAnimJoint1062->addChildren(*HAnimJoint1074);

CHAnimJoint* HAnimJoint1093 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1093->setName("r_carpometacarpal_5");
HAnimJoint1093->setDEF("hanim_r_carpometacarpal_5");
HAnimJoint1093->setCenter(new float[3]{-0.1926,0.8096,-0.0975});
HAnimJoint1093->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1093->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape1094 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1095 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1095->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1096 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1096->setPoint(new float[6]{-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975});
LineSet1095->setCoord(*Coordinate1096);

//from r_carpometacarpal_5 to r_metacarpophalangeal_5
CColorRGBA* ColorRGBA1097 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1097->setUSE("HAnimSegmentLineColorRGBA");
LineSet1095->setColor(*ColorRGBA1097);

Shape1094->setGeometry(LineSet1095);

HAnimJoint1093->setShape(*Shape1094);

CHAnimJoint* HAnimJoint1098 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1098->setName("r_metacarpophalangeal_5");
HAnimJoint1098->setDEF("hanim_r_metacarpophalangeal_5");
HAnimJoint1098->setCenter(new float[3]{-0.1926,0.7896,-0.0975});
HAnimJoint1098->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1098->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape1099 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1100 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1100->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1101 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1101->setPoint(new float[6]{-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963});
LineSet1100->setCoord(*Coordinate1101);

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5
CColorRGBA* ColorRGBA1102 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1102->setUSE("HAnimSegmentLineColorRGBA");
LineSet1100->setColor(*ColorRGBA1102);

Shape1099->setGeometry(LineSet1100);

HAnimJoint1098->setShape(*Shape1099);

CHAnimJoint* HAnimJoint1103 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1103->setName("r_carpal_proximal_interphalangeal_5");
HAnimJoint1103->setDEF("hanim_r_carpal_proximal_interphalangeal_5");
HAnimJoint1103->setCenter(new float[3]{-0.1902,0.7483,-0.0963});
HAnimJoint1103->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1103->setLlimit(new float[3]{0,0,0}, 3);
CShape* Shape1104 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1105 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1105->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1106 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1106->setPoint(new float[6]{-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096});
LineSet1105->setCoord(*Coordinate1106);

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5
CColorRGBA* ColorRGBA1107 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1107->setUSE("HAnimSegmentLineColorRGBA");
LineSet1105->setColor(*ColorRGBA1107);

Shape1104->setGeometry(LineSet1105);

HAnimJoint1103->setShape(*Shape1104);

CHAnimSite* HAnimSite1108 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1108->setName("r_carpal_distal_phalanx_5_tip");
HAnimSite1108->setDEF("hanim_r_carpal_distal_phalanx_5_tip");
HAnimSite1108->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor1109 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1109->setDescription("HAnimSite r_carpal_distal_phalanx_5_tip");
HAnimSite1108->addChildren(*TouchSensor1109);

CShape* Shape1110 = (CShape *)(m_pScene.createNode("Shape"));
Shape1110->setUSE("HAnimSiteShape");
HAnimSite1108->addChildren(*Shape1110);

HAnimJoint1103->addHAnimSite(*HAnimSite1108);

CHAnimJoint* HAnimJoint1111 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1111->setName("r_carpal_distal_interphalangeal_5");
HAnimJoint1111->setDEF("hanim_r_carpal_distal_interphalangeal_5");
HAnimJoint1111->setCenter(new float[3]{-0.1908,0.754,-0.096});
HAnimJoint1111->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1111->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1103->addChildren(*HAnimJoint1111);

HAnimJoint1098->addChildren(*HAnimJoint1103);

HAnimJoint1093->addChildren(*HAnimJoint1098);

HAnimJoint1062->addChildren(*HAnimJoint1093);

HAnimJoint969->addChildren(*HAnimJoint1062);

HAnimJoint961->addChildren(*HAnimJoint969);

HAnimJoint944->addChildren(*HAnimJoint961);

HAnimJoint933->addChildren(*HAnimJoint944);

HAnimJoint928->addChildren(*HAnimJoint933);

HAnimJoint576->addChildren(*HAnimJoint928);

HAnimJoint565->addChildren(*HAnimJoint576);

HAnimJoint560->addChildren(*HAnimJoint565);

HAnimJoint555->addChildren(*HAnimJoint560);

HAnimJoint550->addChildren(*HAnimJoint555);

HAnimJoint542->addChildren(*HAnimJoint550);

HAnimJoint525->addChildren(*HAnimJoint542);

HAnimJoint520->addChildren(*HAnimJoint525);

HAnimJoint515->addChildren(*HAnimJoint520);

HAnimJoint504->addChildren(*HAnimJoint515);

HAnimJoint496->addChildren(*HAnimJoint504);

HAnimJoint491->addChildren(*HAnimJoint496);

HAnimJoint486->addChildren(*HAnimJoint491);

HAnimJoint481->addChildren(*HAnimJoint486);

HAnimJoint467->addChildren(*HAnimJoint481);

HAnimJoint462->addChildren(*HAnimJoint467);

HAnimJoint457->addChildren(*HAnimJoint462);

HAnimJoint32->addChildren(*HAnimJoint457);

HAnimHumanoid31->setSkeleton(*HAnimJoint32);

CHAnimJoint* HAnimJoint1112 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1112->setUSE("hanim_humanoid_root");
HAnimHumanoid31->addJoints(*HAnimJoint1112);

CHAnimJoint* HAnimJoint1113 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1113->setUSE("hanim_sacroiliac");
HAnimHumanoid31->addJoints(*HAnimJoint1113);

CHAnimJoint* HAnimJoint1114 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1114->setUSE("hanim_l_hip");
HAnimHumanoid31->addJoints(*HAnimJoint1114);

CHAnimJoint* HAnimJoint1115 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1115->setUSE("hanim_l_knee");
HAnimHumanoid31->addJoints(*HAnimJoint1115);

CHAnimJoint* HAnimJoint1116 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1116->setUSE("hanim_l_talocrural");
HAnimHumanoid31->addJoints(*HAnimJoint1116);

CHAnimJoint* HAnimJoint1117 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1117->setUSE("hanim_l_talocalcaneonavicular");
HAnimHumanoid31->addJoints(*HAnimJoint1117);

CHAnimJoint* HAnimJoint1118 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1118->setUSE("hanim_l_cuneonavicular_1");
HAnimHumanoid31->addJoints(*HAnimJoint1118);

CHAnimJoint* HAnimJoint1119 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1119->setUSE("hanim_l_tarsometatarsal_1");
HAnimHumanoid31->addJoints(*HAnimJoint1119);

CHAnimJoint* HAnimJoint1120 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1120->setUSE("hanim_l_metatarsophalangeal_1");
HAnimHumanoid31->addJoints(*HAnimJoint1120);

CHAnimJoint* HAnimJoint1121 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1121->setUSE("hanim_l_tarsal_interphalangeal_1");
HAnimHumanoid31->addJoints(*HAnimJoint1121);

CHAnimJoint* HAnimJoint1122 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1122->setUSE("hanim_l_cuneonavicular_2");
HAnimHumanoid31->addJoints(*HAnimJoint1122);

CHAnimJoint* HAnimJoint1123 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1123->setUSE("hanim_l_tarsometatarsal_2");
HAnimHumanoid31->addJoints(*HAnimJoint1123);

CHAnimJoint* HAnimJoint1124 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1124->setUSE("hanim_l_metatarsophalangeal_2");
HAnimHumanoid31->addJoints(*HAnimJoint1124);

CHAnimJoint* HAnimJoint1125 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1125->setUSE("hanim_l_tarsal_proximal_interphalangeal_2");
HAnimHumanoid31->addJoints(*HAnimJoint1125);

CHAnimJoint* HAnimJoint1126 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1126->setUSE("hanim_l_tarsal_distal_interphalangeal_2");
HAnimHumanoid31->addJoints(*HAnimJoint1126);

CHAnimJoint* HAnimJoint1127 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1127->setUSE("hanim_l_cuneonavicular_3");
HAnimHumanoid31->addJoints(*HAnimJoint1127);

CHAnimJoint* HAnimJoint1128 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1128->setUSE("hanim_l_tarsometatarsal_3");
HAnimHumanoid31->addJoints(*HAnimJoint1128);

CHAnimJoint* HAnimJoint1129 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1129->setUSE("hanim_l_metatarsophalangeal_3");
HAnimHumanoid31->addJoints(*HAnimJoint1129);

CHAnimJoint* HAnimJoint1130 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1130->setUSE("hanim_l_tarsal_proximal_interphalangeal_3");
HAnimHumanoid31->addJoints(*HAnimJoint1130);

CHAnimJoint* HAnimJoint1131 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1131->setUSE("hanim_l_tarsal_distal_interphalangeal_3");
HAnimHumanoid31->addJoints(*HAnimJoint1131);

CHAnimJoint* HAnimJoint1132 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1132->setUSE("hanim_l_calcaneocuboid");
HAnimHumanoid31->addJoints(*HAnimJoint1132);

CHAnimJoint* HAnimJoint1133 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1133->setUSE("hanim_l_transversetarsal");
HAnimHumanoid31->addJoints(*HAnimJoint1133);

CHAnimJoint* HAnimJoint1134 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1134->setUSE("hanim_l_tarsometatarsal_4");
HAnimHumanoid31->addJoints(*HAnimJoint1134);

CHAnimJoint* HAnimJoint1135 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1135->setUSE("hanim_l_metatarsophalangeal_4");
HAnimHumanoid31->addJoints(*HAnimJoint1135);

CHAnimJoint* HAnimJoint1136 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1136->setUSE("hanim_l_tarsal_proximal_interphalangeal_4");
HAnimHumanoid31->addJoints(*HAnimJoint1136);

CHAnimJoint* HAnimJoint1137 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1137->setUSE("hanim_l_tarsal_distal_interphalangeal_4");
HAnimHumanoid31->addJoints(*HAnimJoint1137);

CHAnimJoint* HAnimJoint1138 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1138->setUSE("hanim_l_tarsometatarsal_5");
HAnimHumanoid31->addJoints(*HAnimJoint1138);

CHAnimJoint* HAnimJoint1139 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1139->setUSE("hanim_l_metatarsophalangeal_5");
HAnimHumanoid31->addJoints(*HAnimJoint1139);

CHAnimJoint* HAnimJoint1140 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1140->setUSE("hanim_l_tarsal_proximal_interphalangeal_5");
HAnimHumanoid31->addJoints(*HAnimJoint1140);

CHAnimJoint* HAnimJoint1141 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1141->setUSE("hanim_l_tarsal_distal_interphalangeal_5");
HAnimHumanoid31->addJoints(*HAnimJoint1141);

CHAnimJoint* HAnimJoint1142 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1142->setUSE("hanim_r_hip");
HAnimHumanoid31->addJoints(*HAnimJoint1142);

CHAnimJoint* HAnimJoint1143 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1143->setUSE("hanim_r_knee");
HAnimHumanoid31->addJoints(*HAnimJoint1143);

CHAnimJoint* HAnimJoint1144 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1144->setUSE("hanim_r_talocrural");
HAnimHumanoid31->addJoints(*HAnimJoint1144);

CHAnimJoint* HAnimJoint1145 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1145->setUSE("hanim_r_talocalcaneonavicular");
HAnimHumanoid31->addJoints(*HAnimJoint1145);

CHAnimJoint* HAnimJoint1146 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1146->setUSE("hanim_r_cuneonavicular_1");
HAnimHumanoid31->addJoints(*HAnimJoint1146);

CHAnimJoint* HAnimJoint1147 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1147->setUSE("hanim_r_tarsometatarsal_1");
HAnimHumanoid31->addJoints(*HAnimJoint1147);

CHAnimJoint* HAnimJoint1148 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1148->setUSE("hanim_r_metatarsophalangeal_1");
HAnimHumanoid31->addJoints(*HAnimJoint1148);

CHAnimJoint* HAnimJoint1149 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1149->setUSE("hanim_r_tarsal_interphalangeal_1");
HAnimHumanoid31->addJoints(*HAnimJoint1149);

CHAnimJoint* HAnimJoint1150 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1150->setUSE("hanim_r_cuneonavicular_2");
HAnimHumanoid31->addJoints(*HAnimJoint1150);

CHAnimJoint* HAnimJoint1151 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1151->setUSE("hanim_r_tarsometatarsal_2");
HAnimHumanoid31->addJoints(*HAnimJoint1151);

CHAnimJoint* HAnimJoint1152 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1152->setUSE("hanim_r_metatarsophalangeal_2");
HAnimHumanoid31->addJoints(*HAnimJoint1152);

CHAnimJoint* HAnimJoint1153 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1153->setUSE("hanim_r_tarsal_proximal_interphalangeal_2");
HAnimHumanoid31->addJoints(*HAnimJoint1153);

CHAnimJoint* HAnimJoint1154 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1154->setUSE("hanim_r_tarsal_distal_interphalangeal_2");
HAnimHumanoid31->addJoints(*HAnimJoint1154);

CHAnimJoint* HAnimJoint1155 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1155->setUSE("hanim_r_cuneonavicular_3");
HAnimHumanoid31->addJoints(*HAnimJoint1155);

CHAnimJoint* HAnimJoint1156 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1156->setUSE("hanim_r_tarsometatarsal_3");
HAnimHumanoid31->addJoints(*HAnimJoint1156);

CHAnimJoint* HAnimJoint1157 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1157->setUSE("hanim_r_metatarsophalangeal_3");
HAnimHumanoid31->addJoints(*HAnimJoint1157);

CHAnimJoint* HAnimJoint1158 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1158->setUSE("hanim_r_tarsal_proximal_interphalangeal_3");
HAnimHumanoid31->addJoints(*HAnimJoint1158);

CHAnimJoint* HAnimJoint1159 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1159->setUSE("hanim_r_tarsal_distal_interphalangeal_3");
HAnimHumanoid31->addJoints(*HAnimJoint1159);

CHAnimJoint* HAnimJoint1160 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1160->setUSE("hanim_r_calcaneocuboid");
HAnimHumanoid31->addJoints(*HAnimJoint1160);

CHAnimJoint* HAnimJoint1161 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1161->setUSE("hanim_r_transversetarsal");
HAnimHumanoid31->addJoints(*HAnimJoint1161);

CHAnimJoint* HAnimJoint1162 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1162->setUSE("hanim_r_tarsometatarsal_4");
HAnimHumanoid31->addJoints(*HAnimJoint1162);

CHAnimJoint* HAnimJoint1163 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1163->setUSE("hanim_r_metatarsophalangeal_4");
HAnimHumanoid31->addJoints(*HAnimJoint1163);

CHAnimJoint* HAnimJoint1164 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1164->setUSE("hanim_r_tarsal_proximal_interphalangeal_4");
HAnimHumanoid31->addJoints(*HAnimJoint1164);

CHAnimJoint* HAnimJoint1165 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1165->setUSE("hanim_r_tarsal_distal_interphalangeal_4");
HAnimHumanoid31->addJoints(*HAnimJoint1165);

CHAnimJoint* HAnimJoint1166 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1166->setUSE("hanim_r_tarsometatarsal_5");
HAnimHumanoid31->addJoints(*HAnimJoint1166);

CHAnimJoint* HAnimJoint1167 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1167->setUSE("hanim_r_metatarsophalangeal_5");
HAnimHumanoid31->addJoints(*HAnimJoint1167);

CHAnimJoint* HAnimJoint1168 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1168->setUSE("hanim_r_tarsal_proximal_interphalangeal_5");
HAnimHumanoid31->addJoints(*HAnimJoint1168);

CHAnimJoint* HAnimJoint1169 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1169->setUSE("hanim_r_tarsal_distal_interphalangeal_5");
HAnimHumanoid31->addJoints(*HAnimJoint1169);

CHAnimJoint* HAnimJoint1170 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1170->setUSE("hanim_vl5");
HAnimHumanoid31->addJoints(*HAnimJoint1170);

CHAnimJoint* HAnimJoint1171 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1171->setUSE("hanim_vl4");
HAnimHumanoid31->addJoints(*HAnimJoint1171);

CHAnimJoint* HAnimJoint1172 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1172->setUSE("hanim_vl3");
HAnimHumanoid31->addJoints(*HAnimJoint1172);

CHAnimJoint* HAnimJoint1173 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1173->setUSE("hanim_vl2");
HAnimHumanoid31->addJoints(*HAnimJoint1173);

CHAnimJoint* HAnimJoint1174 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1174->setUSE("hanim_vl1");
HAnimHumanoid31->addJoints(*HAnimJoint1174);

CHAnimJoint* HAnimJoint1175 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1175->setUSE("hanim_vt12");
HAnimHumanoid31->addJoints(*HAnimJoint1175);

CHAnimJoint* HAnimJoint1176 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1176->setUSE("hanim_vt11");
HAnimHumanoid31->addJoints(*HAnimJoint1176);

CHAnimJoint* HAnimJoint1177 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1177->setUSE("hanim_vt10");
HAnimHumanoid31->addJoints(*HAnimJoint1177);

CHAnimJoint* HAnimJoint1178 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1178->setUSE("hanim_vt9");
HAnimHumanoid31->addJoints(*HAnimJoint1178);

CHAnimJoint* HAnimJoint1179 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1179->setUSE("hanim_vt8");
HAnimHumanoid31->addJoints(*HAnimJoint1179);

CHAnimJoint* HAnimJoint1180 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1180->setUSE("hanim_vt7");
HAnimHumanoid31->addJoints(*HAnimJoint1180);

CHAnimJoint* HAnimJoint1181 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1181->setUSE("hanim_vt6");
HAnimHumanoid31->addJoints(*HAnimJoint1181);

CHAnimJoint* HAnimJoint1182 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1182->setUSE("hanim_vt5");
HAnimHumanoid31->addJoints(*HAnimJoint1182);

CHAnimJoint* HAnimJoint1183 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1183->setUSE("hanim_vt4");
HAnimHumanoid31->addJoints(*HAnimJoint1183);

CHAnimJoint* HAnimJoint1184 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1184->setUSE("hanim_vt3");
HAnimHumanoid31->addJoints(*HAnimJoint1184);

CHAnimJoint* HAnimJoint1185 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1185->setUSE("hanim_vt2");
HAnimHumanoid31->addJoints(*HAnimJoint1185);

CHAnimJoint* HAnimJoint1186 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1186->setUSE("hanim_vt1");
HAnimHumanoid31->addJoints(*HAnimJoint1186);

CHAnimJoint* HAnimJoint1187 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1187->setUSE("hanim_vc7");
HAnimHumanoid31->addJoints(*HAnimJoint1187);

CHAnimJoint* HAnimJoint1188 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1188->setUSE("hanim_vc6");
HAnimHumanoid31->addJoints(*HAnimJoint1188);

CHAnimJoint* HAnimJoint1189 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1189->setUSE("hanim_vc5");
HAnimHumanoid31->addJoints(*HAnimJoint1189);

CHAnimJoint* HAnimJoint1190 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1190->setUSE("hanim_vc4");
HAnimHumanoid31->addJoints(*HAnimJoint1190);

CHAnimJoint* HAnimJoint1191 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1191->setUSE("hanim_vc3");
HAnimHumanoid31->addJoints(*HAnimJoint1191);

CHAnimJoint* HAnimJoint1192 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1192->setUSE("hanim_vc2");
HAnimHumanoid31->addJoints(*HAnimJoint1192);

CHAnimJoint* HAnimJoint1193 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1193->setUSE("hanim_vc1");
HAnimHumanoid31->addJoints(*HAnimJoint1193);

CHAnimJoint* HAnimJoint1194 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1194->setUSE("hanim_skullbase");
HAnimHumanoid31->addJoints(*HAnimJoint1194);

CHAnimJoint* HAnimJoint1195 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1195->setUSE("hanim_l_eyelid_joint");
HAnimHumanoid31->addJoints(*HAnimJoint1195);

CHAnimJoint* HAnimJoint1196 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1196->setUSE("hanim_r_eyelid_joint");
HAnimHumanoid31->addJoints(*HAnimJoint1196);

CHAnimJoint* HAnimJoint1197 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1197->setUSE("hanim_l_eyeball_joint");
HAnimHumanoid31->addJoints(*HAnimJoint1197);

CHAnimJoint* HAnimJoint1198 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1198->setUSE("hanim_r_eyeball_joint");
HAnimHumanoid31->addJoints(*HAnimJoint1198);

CHAnimJoint* HAnimJoint1199 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1199->setUSE("hanim_l_eyebrow_joint");
HAnimHumanoid31->addJoints(*HAnimJoint1199);

CHAnimJoint* HAnimJoint1200 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1200->setUSE("hanim_r_eyebrow_joint");
HAnimHumanoid31->addJoints(*HAnimJoint1200);

CHAnimJoint* HAnimJoint1201 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1201->setUSE("hanim_temporomandibular");
HAnimHumanoid31->addJoints(*HAnimJoint1201);

CHAnimJoint* HAnimJoint1202 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1202->setUSE("hanim_l_sternoclavicular");
HAnimHumanoid31->addJoints(*HAnimJoint1202);

CHAnimJoint* HAnimJoint1203 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1203->setUSE("hanim_l_acromioclavicular");
HAnimHumanoid31->addJoints(*HAnimJoint1203);

CHAnimJoint* HAnimJoint1204 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1204->setUSE("hanim_l_shoulder");
HAnimHumanoid31->addJoints(*HAnimJoint1204);

CHAnimJoint* HAnimJoint1205 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1205->setUSE("hanim_l_elbow");
HAnimHumanoid31->addJoints(*HAnimJoint1205);

CHAnimJoint* HAnimJoint1206 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1206->setUSE("hanim_l_radiocarpal");
HAnimHumanoid31->addJoints(*HAnimJoint1206);

CHAnimJoint* HAnimJoint1207 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1207->setUSE("hanim_l_midcarpal_1");
HAnimHumanoid31->addJoints(*HAnimJoint1207);

CHAnimJoint* HAnimJoint1208 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1208->setUSE("hanim_l_carpometacarpal_1");
HAnimHumanoid31->addJoints(*HAnimJoint1208);

CHAnimJoint* HAnimJoint1209 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1209->setUSE("hanim_l_metacarpophalangeal_1");
HAnimHumanoid31->addJoints(*HAnimJoint1209);

CHAnimJoint* HAnimJoint1210 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1210->setUSE("hanim_l_carpal_interphalangeal_1");
HAnimHumanoid31->addJoints(*HAnimJoint1210);

CHAnimJoint* HAnimJoint1211 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1211->setUSE("hanim_l_midcarpal_2");
HAnimHumanoid31->addJoints(*HAnimJoint1211);

CHAnimJoint* HAnimJoint1212 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1212->setUSE("hanim_l_carpometacarpal_2");
HAnimHumanoid31->addJoints(*HAnimJoint1212);

CHAnimJoint* HAnimJoint1213 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1213->setUSE("hanim_l_metacarpophalangeal_2");
HAnimHumanoid31->addJoints(*HAnimJoint1213);

CHAnimJoint* HAnimJoint1214 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1214->setUSE("hanim_l_carpal_proximal_interphalangeal_2");
HAnimHumanoid31->addJoints(*HAnimJoint1214);

CHAnimJoint* HAnimJoint1215 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1215->setUSE("hanim_l_carpal_distal_interphalangeal_2");
HAnimHumanoid31->addJoints(*HAnimJoint1215);

CHAnimJoint* HAnimJoint1216 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1216->setUSE("hanim_l_midcarpal_3");
HAnimHumanoid31->addJoints(*HAnimJoint1216);

CHAnimJoint* HAnimJoint1217 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1217->setUSE("hanim_l_carpometacarpal_3");
HAnimHumanoid31->addJoints(*HAnimJoint1217);

CHAnimJoint* HAnimJoint1218 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1218->setUSE("hanim_l_metacarpophalangeal_3");
HAnimHumanoid31->addJoints(*HAnimJoint1218);

CHAnimJoint* HAnimJoint1219 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1219->setUSE("hanim_l_carpal_proximal_interphalangeal_3");
HAnimHumanoid31->addJoints(*HAnimJoint1219);

CHAnimJoint* HAnimJoint1220 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1220->setUSE("hanim_l_carpal_distal_interphalangeal_3");
HAnimHumanoid31->addJoints(*HAnimJoint1220);

CHAnimJoint* HAnimJoint1221 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1221->setUSE("hanim_l_midcarpal_4_5");
HAnimHumanoid31->addJoints(*HAnimJoint1221);

CHAnimJoint* HAnimJoint1222 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1222->setUSE("hanim_l_carpometacarpal_4");
HAnimHumanoid31->addJoints(*HAnimJoint1222);

CHAnimJoint* HAnimJoint1223 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1223->setUSE("hanim_l_metacarpophalangeal_4");
HAnimHumanoid31->addJoints(*HAnimJoint1223);

CHAnimJoint* HAnimJoint1224 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1224->setUSE("hanim_l_carpal_proximal_interphalangeal_4");
HAnimHumanoid31->addJoints(*HAnimJoint1224);

CHAnimJoint* HAnimJoint1225 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1225->setUSE("hanim_l_carpal_distal_interphalangeal_4");
HAnimHumanoid31->addJoints(*HAnimJoint1225);

CHAnimJoint* HAnimJoint1226 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1226->setUSE("hanim_l_carpometacarpal_5");
HAnimHumanoid31->addJoints(*HAnimJoint1226);

CHAnimJoint* HAnimJoint1227 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1227->setUSE("hanim_l_metacarpophalangeal_5");
HAnimHumanoid31->addJoints(*HAnimJoint1227);

CHAnimJoint* HAnimJoint1228 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1228->setUSE("hanim_l_carpal_proximal_interphalangeal_5");
HAnimHumanoid31->addJoints(*HAnimJoint1228);

CHAnimJoint* HAnimJoint1229 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1229->setUSE("hanim_l_carpal_distal_interphalangeal_5");
HAnimHumanoid31->addJoints(*HAnimJoint1229);

CHAnimJoint* HAnimJoint1230 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1230->setUSE("hanim_r_sternoclavicular");
HAnimHumanoid31->addJoints(*HAnimJoint1230);

CHAnimJoint* HAnimJoint1231 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1231->setUSE("hanim_r_acromioclavicular");
HAnimHumanoid31->addJoints(*HAnimJoint1231);

CHAnimJoint* HAnimJoint1232 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1232->setUSE("hanim_r_shoulder");
HAnimHumanoid31->addJoints(*HAnimJoint1232);

CHAnimJoint* HAnimJoint1233 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1233->setUSE("hanim_r_elbow");
HAnimHumanoid31->addJoints(*HAnimJoint1233);

CHAnimJoint* HAnimJoint1234 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1234->setUSE("hanim_r_radiocarpal");
HAnimHumanoid31->addJoints(*HAnimJoint1234);

CHAnimJoint* HAnimJoint1235 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1235->setUSE("hanim_r_midcarpal_1");
HAnimHumanoid31->addJoints(*HAnimJoint1235);

CHAnimJoint* HAnimJoint1236 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1236->setUSE("hanim_r_carpometacarpal_1");
HAnimHumanoid31->addJoints(*HAnimJoint1236);

CHAnimJoint* HAnimJoint1237 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1237->setUSE("hanim_r_metacarpophalangeal_1");
HAnimHumanoid31->addJoints(*HAnimJoint1237);

CHAnimJoint* HAnimJoint1238 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1238->setUSE("hanim_r_carpal_interphalangeal_1");
HAnimHumanoid31->addJoints(*HAnimJoint1238);

CHAnimJoint* HAnimJoint1239 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1239->setUSE("hanim_r_midcarpal_2");
HAnimHumanoid31->addJoints(*HAnimJoint1239);

CHAnimJoint* HAnimJoint1240 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1240->setUSE("hanim_r_carpometacarpal_2");
HAnimHumanoid31->addJoints(*HAnimJoint1240);

CHAnimJoint* HAnimJoint1241 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1241->setUSE("hanim_r_metacarpophalangeal_2");
HAnimHumanoid31->addJoints(*HAnimJoint1241);

CHAnimJoint* HAnimJoint1242 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1242->setUSE("hanim_r_carpal_proximal_interphalangeal_2");
HAnimHumanoid31->addJoints(*HAnimJoint1242);

CHAnimJoint* HAnimJoint1243 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1243->setUSE("hanim_r_carpal_distal_interphalangeal_2");
HAnimHumanoid31->addJoints(*HAnimJoint1243);

CHAnimJoint* HAnimJoint1244 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1244->setUSE("hanim_r_midcarpal_3");
HAnimHumanoid31->addJoints(*HAnimJoint1244);

CHAnimJoint* HAnimJoint1245 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1245->setUSE("hanim_r_carpometacarpal_3");
HAnimHumanoid31->addJoints(*HAnimJoint1245);

CHAnimJoint* HAnimJoint1246 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1246->setUSE("hanim_r_metacarpophalangeal_3");
HAnimHumanoid31->addJoints(*HAnimJoint1246);

CHAnimJoint* HAnimJoint1247 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1247->setUSE("hanim_r_carpal_proximal_interphalangeal_3");
HAnimHumanoid31->addJoints(*HAnimJoint1247);

CHAnimJoint* HAnimJoint1248 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1248->setUSE("hanim_r_carpal_distal_interphalangeal_3");
HAnimHumanoid31->addJoints(*HAnimJoint1248);

CHAnimJoint* HAnimJoint1249 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1249->setUSE("hanim_r_midcarpal_4_5");
HAnimHumanoid31->addJoints(*HAnimJoint1249);

CHAnimJoint* HAnimJoint1250 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1250->setUSE("hanim_r_carpometacarpal_4");
HAnimHumanoid31->addJoints(*HAnimJoint1250);

CHAnimJoint* HAnimJoint1251 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1251->setUSE("hanim_r_metacarpophalangeal_4");
HAnimHumanoid31->addJoints(*HAnimJoint1251);

CHAnimJoint* HAnimJoint1252 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1252->setUSE("hanim_r_carpal_proximal_interphalangeal_4");
HAnimHumanoid31->addJoints(*HAnimJoint1252);

CHAnimJoint* HAnimJoint1253 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1253->setUSE("hanim_r_carpal_distal_interphalangeal_4");
HAnimHumanoid31->addJoints(*HAnimJoint1253);

CHAnimJoint* HAnimJoint1254 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1254->setUSE("hanim_r_carpometacarpal_5");
HAnimHumanoid31->addJoints(*HAnimJoint1254);

CHAnimJoint* HAnimJoint1255 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1255->setUSE("hanim_r_metacarpophalangeal_5");
HAnimHumanoid31->addJoints(*HAnimJoint1255);

CHAnimJoint* HAnimJoint1256 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1256->setUSE("hanim_r_carpal_proximal_interphalangeal_5");
HAnimHumanoid31->addJoints(*HAnimJoint1256);

CHAnimJoint* HAnimJoint1257 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1257->setUSE("hanim_r_carpal_distal_interphalangeal_5");
HAnimHumanoid31->addJoints(*HAnimJoint1257);

CHAnimSite* HAnimSite1258 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1258->setUSE("hanim_buttocks_standing_wall_contact_point_pt");
HAnimHumanoid31->setSites(*HAnimSite1258);

CHAnimSite* HAnimSite1259 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1259->setUSE("hanim_crotch_pt");
HAnimHumanoid31->setSites(*HAnimSite1259);

CHAnimSite* HAnimSite1260 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1260->setUSE("hanim_l_asis_pt");
HAnimHumanoid31->setSites(*HAnimSite1260);

CHAnimSite* HAnimSite1261 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1261->setUSE("hanim_l_iliocristale_pt");
HAnimHumanoid31->setSites(*HAnimSite1261);

CHAnimSite* HAnimSite1262 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1262->setUSE("hanim_l_psis_pt");
HAnimHumanoid31->setSites(*HAnimSite1262);

CHAnimSite* HAnimSite1263 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1263->setUSE("hanim_l_trochanterion_pt");
HAnimHumanoid31->setSites(*HAnimSite1263);

CHAnimSite* HAnimSite1264 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1264->setUSE("hanim_r_asis_pt");
HAnimHumanoid31->setSites(*HAnimSite1264);

CHAnimSite* HAnimSite1265 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1265->setUSE("hanim_r_iliocristale_pt");
HAnimHumanoid31->setSites(*HAnimSite1265);

CHAnimSite* HAnimSite1266 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1266->setUSE("hanim_r_psis_pt");
HAnimHumanoid31->setSites(*HAnimSite1266);

CHAnimSite* HAnimSite1267 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1267->setUSE("hanim_r_trochanterion_pt");
HAnimHumanoid31->setSites(*HAnimSite1267);

CHAnimSite* HAnimSite1268 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1268->setUSE("hanim_navel_pt");
HAnimHumanoid31->setSites(*HAnimSite1268);

CHAnimSite* HAnimSite1269 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1269->setUSE("hanim_waist_preferred_anterior_pt");
HAnimHumanoid31->setSites(*HAnimSite1269);

CHAnimSite* HAnimSite1270 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1270->setUSE("hanim_waist_preferred_posterior_pt");
HAnimHumanoid31->setSites(*HAnimSite1270);

CHAnimSite* HAnimSite1271 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1271->setUSE("hanim_l_femoral_lateral_epicondyles_pt");
HAnimHumanoid31->setSites(*HAnimSite1271);

CHAnimSite* HAnimSite1272 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1272->setUSE("hanim_l_femoral_medial_epicondyles_pt");
HAnimHumanoid31->setSites(*HAnimSite1272);

CHAnimSite* HAnimSite1273 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1273->setUSE("hanim_l_knee_crease_pt");
HAnimHumanoid31->setSites(*HAnimSite1273);

CHAnimSite* HAnimSite1274 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1274->setUSE("hanim_l_suprapatella_pt");
HAnimHumanoid31->setSites(*HAnimSite1274);

CHAnimSite* HAnimSite1275 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1275->setUSE("hanim_r_femoral_lateral_epicondyles_pt");
HAnimHumanoid31->setSites(*HAnimSite1275);

CHAnimSite* HAnimSite1276 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1276->setUSE("hanim_r_femoral_medial_epicondyles_pt");
HAnimHumanoid31->setSites(*HAnimSite1276);

CHAnimSite* HAnimSite1277 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1277->setUSE("hanim_r_knee_crease_pt");
HAnimHumanoid31->setSites(*HAnimSite1277);

CHAnimSite* HAnimSite1278 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1278->setUSE("hanim_r_suprapatella_pt");
HAnimHumanoid31->setSites(*HAnimSite1278);

CHAnimSite* HAnimSite1279 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1279->setUSE("hanim_l_lateral_malleolus_pt");
HAnimHumanoid31->setSites(*HAnimSite1279);

CHAnimSite* HAnimSite1280 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1280->setUSE("hanim_l_medial_malleolus_pt");
HAnimHumanoid31->setSites(*HAnimSite1280);

CHAnimSite* HAnimSite1281 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1281->setUSE("hanim_l_tibiale_pt");
HAnimHumanoid31->setSites(*HAnimSite1281);

CHAnimSite* HAnimSite1282 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1282->setUSE("hanim_l_calcaneus_posterior_pt");
HAnimHumanoid31->setSites(*HAnimSite1282);

CHAnimSite* HAnimSite1283 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1283->setUSE("hanim_l_sphyrion_pt");
HAnimHumanoid31->setSites(*HAnimSite1283);

CHAnimSite* HAnimSite1284 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1284->setUSE("hanim_l_metatarsal_phalanx_1_pt");
HAnimHumanoid31->setSites(*HAnimSite1284);

CHAnimSite* HAnimSite1285 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1285->setUSE("hanim_l_tarsal_distal_phalanx_1_tip");
HAnimHumanoid31->setSites(*HAnimSite1285);

CHAnimSite* HAnimSite1286 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1286->setUSE("hanim_l_tarsal_distal_phalanx_2_tip");
HAnimHumanoid31->setSites(*HAnimSite1286);

CHAnimSite* HAnimSite1287 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1287->setUSE("hanim_l_tarsal_distal_phalanx_3_tip");
HAnimHumanoid31->setSites(*HAnimSite1287);

CHAnimSite* HAnimSite1288 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1288->setUSE("hanim_l_tarsal_distal_phalanx_4_tip");
HAnimHumanoid31->setSites(*HAnimSite1288);

CHAnimSite* HAnimSite1289 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1289->setUSE("hanim_l_metatarsal_phalanx_5_pt");
HAnimHumanoid31->setSites(*HAnimSite1289);

CHAnimSite* HAnimSite1290 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1290->setUSE("hanim_l_tarsal_distal_phalanx_5_tip");
HAnimHumanoid31->setSites(*HAnimSite1290);

CHAnimSite* HAnimSite1291 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1291->setUSE("hanim_r_lateral_malleolus_pt");
HAnimHumanoid31->setSites(*HAnimSite1291);

CHAnimSite* HAnimSite1292 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1292->setUSE("hanim_r_medial_malleolus_pt");
HAnimHumanoid31->setSites(*HAnimSite1292);

CHAnimSite* HAnimSite1293 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1293->setUSE("hanim_r_tibiale_pt");
HAnimHumanoid31->setSites(*HAnimSite1293);

CHAnimSite* HAnimSite1294 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1294->setUSE("hanim_r_calcaneus_posterior_pt");
HAnimHumanoid31->setSites(*HAnimSite1294);

CHAnimSite* HAnimSite1295 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1295->setUSE("hanim_r_sphyrion_pt");
HAnimHumanoid31->setSites(*HAnimSite1295);

CHAnimSite* HAnimSite1296 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1296->setUSE("hanim_r_metatarsal_phalanx_1_pt");
HAnimHumanoid31->setSites(*HAnimSite1296);

CHAnimSite* HAnimSite1297 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1297->setUSE("hanim_r_tarsal_distal_phalanx_1_tip");
HAnimHumanoid31->setSites(*HAnimSite1297);

CHAnimSite* HAnimSite1298 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1298->setUSE("hanim_r_tarsal_distal_phalanx_2_tip");
HAnimHumanoid31->setSites(*HAnimSite1298);

CHAnimSite* HAnimSite1299 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1299->setUSE("hanim_r_tarsal_distal_phalanx_3_tip");
HAnimHumanoid31->setSites(*HAnimSite1299);

CHAnimSite* HAnimSite1300 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1300->setUSE("hanim_r_tarsal_distal_phalanx_4_tip");
HAnimHumanoid31->setSites(*HAnimSite1300);

CHAnimSite* HAnimSite1301 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1301->setUSE("hanim_r_metatarsal_phalanx_5_pt");
HAnimHumanoid31->setSites(*HAnimSite1301);

CHAnimSite* HAnimSite1302 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1302->setUSE("hanim_r_tarsal_distal_phalanx_5_tip");
HAnimHumanoid31->setSites(*HAnimSite1302);

CHAnimSite* HAnimSite1303 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1303->setUSE("hanim_l_rib10_pt");
HAnimHumanoid31->setSites(*HAnimSite1303);

CHAnimSite* HAnimSite1304 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1304->setUSE("hanim_r_rib10_pt");
HAnimHumanoid31->setSites(*HAnimSite1304);

CHAnimSite* HAnimSite1305 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1305->setUSE("hanim_spine_2_middle_back_pt");
HAnimHumanoid31->setSites(*HAnimSite1305);

CHAnimSite* HAnimSite1306 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1306->setUSE("hanim_substernale_pt");
HAnimHumanoid31->setSites(*HAnimSite1306);

CHAnimSite* HAnimSite1307 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1307->setUSE("hanim_l_thelion_pt");
HAnimHumanoid31->setSites(*HAnimSite1307);

CHAnimSite* HAnimSite1308 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1308->setUSE("hanim_r_thelion_pt");
HAnimHumanoid31->setSites(*HAnimSite1308);

CHAnimSite* HAnimSite1309 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1309->setUSE("hanim_l_chest_midsagittal_plane_pt");
HAnimHumanoid31->setSites(*HAnimSite1309);

CHAnimSite* HAnimSite1310 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1310->setUSE("hanim_mesosternale_pt");
HAnimHumanoid31->setSites(*HAnimSite1310);

CHAnimSite* HAnimSite1311 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1311->setUSE("hanim_r_chest_midsagittal_plane_pt");
HAnimHumanoid31->setSites(*HAnimSite1311);

CHAnimSite* HAnimSite1312 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1312->setUSE("hanim_rear_center_midsagittal_plane_pt");
HAnimHumanoid31->setSites(*HAnimSite1312);

CHAnimSite* HAnimSite1313 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1313->setUSE("hanim_spine_1_middle_back_pt");
HAnimHumanoid31->setSites(*HAnimSite1313);

CHAnimSite* HAnimSite1314 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1314->setUSE("hanim_cervicale_pt");
HAnimHumanoid31->setSites(*HAnimSite1314);

CHAnimSite* HAnimSite1315 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1315->setUSE("hanim_suprasternale_pt");
HAnimHumanoid31->setSites(*HAnimSite1315);

CHAnimSite* HAnimSite1316 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1316->setUSE("hanim_l_neck_base_pt");
HAnimHumanoid31->setSites(*HAnimSite1316);

CHAnimSite* HAnimSite1317 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1317->setUSE("hanim_r_neck_base_pt");
HAnimHumanoid31->setSites(*HAnimSite1317);

CHAnimSite* HAnimSite1318 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1318->setUSE("hanim_l_acromion_pt");
HAnimHumanoid31->setSites(*HAnimSite1318);

CHAnimSite* HAnimSite1319 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1319->setUSE("hanim_l_axilla_distal_pt");
HAnimHumanoid31->setSites(*HAnimSite1319);

CHAnimSite* HAnimSite1320 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1320->setUSE("hanim_l_axilla_posterior_folds_pt");
HAnimHumanoid31->setSites(*HAnimSite1320);

CHAnimSite* HAnimSite1321 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1321->setUSE("hanim_l_axilla_proximal_pt");
HAnimHumanoid31->setSites(*HAnimSite1321);

CHAnimSite* HAnimSite1322 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1322->setUSE("hanim_l_clavicale_pt");
HAnimHumanoid31->setSites(*HAnimSite1322);

CHAnimSite* HAnimSite1323 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1323->setUSE("hanim_r_acromion_pt");
HAnimHumanoid31->setSites(*HAnimSite1323);

CHAnimSite* HAnimSite1324 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1324->setUSE("hanim_r_axilla_distal_pt");
HAnimHumanoid31->setSites(*HAnimSite1324);

CHAnimSite* HAnimSite1325 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1325->setUSE("hanim_r_axilla_posterior_folds_pt");
HAnimHumanoid31->setSites(*HAnimSite1325);

CHAnimSite* HAnimSite1326 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1326->setUSE("hanim_r_axilla_proximal_pt");
HAnimHumanoid31->setSites(*HAnimSite1326);

CHAnimSite* HAnimSite1327 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1327->setUSE("hanim_r_clavicale_pt");
HAnimHumanoid31->setSites(*HAnimSite1327);

CHAnimSite* HAnimSite1328 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1328->setUSE("hanim_adams_apple_pt");
HAnimHumanoid31->setSites(*HAnimSite1328);

CHAnimSite* HAnimSite1329 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1329->setUSE("hanim_glabella_pt");
HAnimHumanoid31->setSites(*HAnimSite1329);

CHAnimSite* HAnimSite1330 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1330->setUSE("hanim_l_ectocanthus_pt");
HAnimHumanoid31->setSites(*HAnimSite1330);

CHAnimSite* HAnimSite1331 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1331->setUSE("hanim_l_infraorbitale_pt");
HAnimHumanoid31->setSites(*HAnimSite1331);

CHAnimSite* HAnimSite1332 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1332->setUSE("hanim_l_tragion_pt");
HAnimHumanoid31->setSites(*HAnimSite1332);

CHAnimSite* HAnimSite1333 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1333->setUSE("hanim_nuchale_pt");
HAnimHumanoid31->setSites(*HAnimSite1333);

CHAnimSite* HAnimSite1334 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1334->setUSE("hanim_opisthocranion_pt");
HAnimHumanoid31->setSites(*HAnimSite1334);

CHAnimSite* HAnimSite1335 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1335->setUSE("hanim_r_ectocanthus_pt");
HAnimHumanoid31->setSites(*HAnimSite1335);

CHAnimSite* HAnimSite1336 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1336->setUSE("hanim_r_infraorbitale_pt");
HAnimHumanoid31->setSites(*HAnimSite1336);

CHAnimSite* HAnimSite1337 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1337->setUSE("hanim_r_tragion_pt");
HAnimHumanoid31->setSites(*HAnimSite1337);

CHAnimSite* HAnimSite1338 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1338->setUSE("hanim_sellion_pt");
HAnimHumanoid31->setSites(*HAnimSite1338);

CHAnimSite* HAnimSite1339 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1339->setUSE("hanim_skull_vertex_pt");
HAnimHumanoid31->setSites(*HAnimSite1339);

CHAnimSite* HAnimSite1340 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1340->setUSE("hanim_l_gonion_pt");
HAnimHumanoid31->setSites(*HAnimSite1340);

CHAnimSite* HAnimSite1341 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1341->setUSE("hanim_menton_pt");
HAnimHumanoid31->setSites(*HAnimSite1341);

CHAnimSite* HAnimSite1342 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1342->setUSE("hanim_r_gonion_pt");
HAnimHumanoid31->setSites(*HAnimSite1342);

CHAnimSite* HAnimSite1343 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1343->setUSE("hanim_supramenton_pt");
HAnimHumanoid31->setSites(*HAnimSite1343);

CHAnimSite* HAnimSite1344 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1344->setUSE("hanim_l_bideltoid_pt");
HAnimHumanoid31->setSites(*HAnimSite1344);

CHAnimSite* HAnimSite1345 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1345->setUSE("hanim_l_humeral_lateral_epicondyles_pt");
HAnimHumanoid31->setSites(*HAnimSite1345);

CHAnimSite* HAnimSite1346 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1346->setUSE("hanim_l_humeral_medial_epicondyles_pt");
HAnimHumanoid31->setSites(*HAnimSite1346);

CHAnimSite* HAnimSite1347 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1347->setUSE("hanim_l_olecranon_pt");
HAnimHumanoid31->setSites(*HAnimSite1347);

CHAnimSite* HAnimSite1348 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1348->setUSE("hanim_l_radial_styloid_pt");
HAnimHumanoid31->setSites(*HAnimSite1348);

CHAnimSite* HAnimSite1349 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1349->setUSE("hanim_l_radiale_pt");
HAnimHumanoid31->setSites(*HAnimSite1349);

CHAnimSite* HAnimSite1350 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1350->setUSE("hanim_l_ulnar_styloid_pt");
HAnimHumanoid31->setSites(*HAnimSite1350);

CHAnimSite* HAnimSite1351 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1351->setUSE("hanim_l_carpal_distal_phalanx_1_tip");
HAnimHumanoid31->setSites(*HAnimSite1351);

CHAnimSite* HAnimSite1352 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1352->setUSE("hanim_l_metacarpal_phalanx_2_pt");
HAnimHumanoid31->setSites(*HAnimSite1352);

CHAnimSite* HAnimSite1353 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1353->setUSE("hanim_l_carpal_distal_phalanx_2_tip");
HAnimHumanoid31->setSites(*HAnimSite1353);

CHAnimSite* HAnimSite1354 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1354->setUSE("hanim_l_dactylion_pt");
HAnimHumanoid31->setSites(*HAnimSite1354);

CHAnimSite* HAnimSite1355 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1355->setUSE("hanim_l_metacarpal_phalanx_3_pt");
HAnimHumanoid31->setSites(*HAnimSite1355);

CHAnimSite* HAnimSite1356 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1356->setUSE("hanim_l_carpal_distal_phalanx_3_tip");
HAnimHumanoid31->setSites(*HAnimSite1356);

CHAnimSite* HAnimSite1357 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1357->setUSE("hanim_l_metacarpal_phalanx_5_pt");
HAnimHumanoid31->setSites(*HAnimSite1357);

CHAnimSite* HAnimSite1358 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1358->setUSE("hanim_l_carpal_distal_phalanx_4_tip");
HAnimHumanoid31->setSites(*HAnimSite1358);

CHAnimSite* HAnimSite1359 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1359->setUSE("hanim_l_carpal_distal_phalanx_5_tip");
HAnimHumanoid31->setSites(*HAnimSite1359);

CHAnimSite* HAnimSite1360 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1360->setUSE("hanim_r_bideltoid_pt");
HAnimHumanoid31->setSites(*HAnimSite1360);

CHAnimSite* HAnimSite1361 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1361->setUSE("hanim_r_humeral_lateral_epicondyles_pt");
HAnimHumanoid31->setSites(*HAnimSite1361);

CHAnimSite* HAnimSite1362 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1362->setUSE("hanim_r_humeral_medial_epicondyles_pt");
HAnimHumanoid31->setSites(*HAnimSite1362);

CHAnimSite* HAnimSite1363 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1363->setUSE("hanim_r_olecranon_pt");
HAnimHumanoid31->setSites(*HAnimSite1363);

CHAnimSite* HAnimSite1364 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1364->setUSE("hanim_r_radial_styloid_pt");
HAnimHumanoid31->setSites(*HAnimSite1364);

CHAnimSite* HAnimSite1365 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1365->setUSE("hanim_r_radiale_pt");
HAnimHumanoid31->setSites(*HAnimSite1365);

CHAnimSite* HAnimSite1366 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1366->setUSE("hanim_r_ulnar_styloid_pt");
HAnimHumanoid31->setSites(*HAnimSite1366);

CHAnimSite* HAnimSite1367 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1367->setUSE("hanim_r_carpal_distal_phalanx_1_tip");
HAnimHumanoid31->setSites(*HAnimSite1367);

CHAnimSite* HAnimSite1368 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1368->setUSE("hanim_r_metacarpal_phalanx_2_pt");
HAnimHumanoid31->setSites(*HAnimSite1368);

CHAnimSite* HAnimSite1369 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1369->setUSE("hanim_r_carpal_distal_phalanx_2_tip");
HAnimHumanoid31->setSites(*HAnimSite1369);

CHAnimSite* HAnimSite1370 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1370->setUSE("hanim_r_dactylion_pt");
HAnimHumanoid31->setSites(*HAnimSite1370);

CHAnimSite* HAnimSite1371 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1371->setUSE("hanim_r_metacarpal_phalanx_3_pt");
HAnimHumanoid31->setSites(*HAnimSite1371);

CHAnimSite* HAnimSite1372 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1372->setUSE("hanim_r_carpal_distal_phalanx_3_tip");
HAnimHumanoid31->setSites(*HAnimSite1372);

CHAnimSite* HAnimSite1373 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1373->setUSE("hanim_r_metacarpal_phalanx_5_pt");
HAnimHumanoid31->setSites(*HAnimSite1373);

CHAnimSite* HAnimSite1374 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1374->setUSE("hanim_r_carpal_distal_phalanx_4_tip");
HAnimHumanoid31->setSites(*HAnimSite1374);

CHAnimSite* HAnimSite1375 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1375->setUSE("hanim_r_carpal_distal_phalanx_5_tip");
HAnimHumanoid31->setSites(*HAnimSite1375);

group->addChildren(*HAnimHumanoid31);

X3D0->setScene(*Scene11);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

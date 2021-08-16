/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "/c/x3d-code/www.web3d.org/x3d/languages/cpp/X3DLib/X3DLib.h"
int main(int argc, char ** argv) {
CX3DScene m_pScene;
CBrowser browser = X3D.getBrowser();
CX3D* X3D0 = new CX3D();
CGroup* group = (CGroup*)(m_pScene.createNode("Group"));
group->addChildren(X3D0);
X3D0->setProfile("Immersive");
X3D0->setVersion("3.3");
Chead* head1 = new Chead();
Ccomponent* component2 = new Ccomponent();
component2->setName("H-Anim");
component2->setLevel(1);
head1->addComponent(*component2);

Cmeta* meta3 = new Cmeta();
meta3->setName("title");
meta3->setContent("HAnimSpecificationLOA3Animation.x3d");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("description");
meta4->setContent("HAnim Specification reference example providing full coverage and visibility of all specified HAnim constructs, plus motion animations. Geometry visualizations are derived from HAnimSpecificationLOA3Invisible.x3d visualization report. Resusable exemplar animations also added via heads-up display (HUD) interface to confirm proper parent-child relationships.");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("reference");
meta5->setContent("https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("created");
meta6->setContent("24 April 2013");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("modified");
meta7->setContent("4 July 2020");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("TODO");
meta8->setContent("Convert to X3D4 HAnim2");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("Image");
meta9->setContent("HAnimSpecificationLOA3MotionH3DViewer.png");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("Image");
meta10->setContent("HAnimSpecificationLOA3MotionInstantReality.png");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("Image");
meta11->setContent("HAnimSpecificationLOA3MotionOctagaVS.png");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("Image");
meta12->setContent("HAnimSpecificationLOA3MotionView3dscene.png");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("reference");
meta13->setContent("HAnimSpecificationLOA3Illustrated.x3d");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("reference");
meta14->setContent("HAnimSpecificationLOA3Invisible.x3d");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("reference");
meta15->setContent("HAnimSpecificationExampleChangeLog.txt");
head1->addMeta(*meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("Image");
meta16->setContent("images/BonesAllSkeletonFrontViewLOA1.png");
head1->addMeta(*meta16);

Cmeta* meta17 = new Cmeta();
meta17->setName("Image");
meta17->setContent("images/BonesAllSkeletonFrontViewLOA2.png");
head1->addMeta(*meta17);

Cmeta* meta18 = new Cmeta();
meta18->setName("Image");
meta18->setContent("images/BonesAllSkeletonFrontViewLOA3.png");
head1->addMeta(*meta18);

Cmeta* meta19 = new Cmeta();
meta19->setName("reference");
meta19->setContent("Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.");
head1->addMeta(*meta19);

Cmeta* meta20 = new Cmeta();
meta20->setName("reference");
meta20->setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.ps");
head1->addMeta(*meta20);

Cmeta* meta21 = new Cmeta();
meta21->setName("reference");
meta21->setContent("tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf");
head1->addMeta(*meta21);

Cmeta* meta22 = new Cmeta();
meta22->setName("creator");
meta22->setContent("Matthew T. Beitler, Joe D. Williams, Don Brutzman");
head1->addMeta(*meta22);

Cmeta* meta23 = new Cmeta();
meta23->setName("translator");
meta23->setContent("Don Brutzman and Joe Williams");
head1->addMeta(*meta23);

Cmeta* meta24 = new Cmeta();
meta24->setName("generator");
meta24->setContent("BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo");
head1->addMeta(*meta24);

Cmeta* meta25 = new Cmeta();
meta25->setName("reference");
meta25->setContent("originals/LOA3ExampleSourceWithDiamondsOriginal.wrl");
head1->addMeta(*meta25);

Cmeta* meta26 = new Cmeta();
meta26->setName("reference");
meta26->setContent("originals/LOA3ExampleSourceWithDiamondsOriginal.x3d");
head1->addMeta(*meta26);

Cmeta* meta27 = new Cmeta();
meta27->setName("reference");
meta27->setContent("originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d");
head1->addMeta(*meta27);

Cmeta* meta28 = new Cmeta();
meta28->setName("generator");
meta28->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta28);

Cmeta* meta29 = new Cmeta();
meta29->setName("identifier");
meta29->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/HAnimSpecificationLOA3Animation.x3d");
head1->addMeta(*meta29);

Cmeta* meta30 = new Cmeta();
meta30->setName("license");
meta30->setContent("../license.html");
head1->addMeta(*meta30);

X3D0->setHead(*head1);

CScene* Scene31 = new CScene();
CBackground* Background32 = (CBackground *)(m_pScene.createNode("Background"));
Background32->setSkyColor(new float[3]{0.3,0.3,0.3});
group->addChildren(*Background32);

CNavigationInfo* NavigationInfo33 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
group->addChildren(*NavigationInfo33);

CGroup* Group34 = (CGroup *)(m_pScene.createNode("Group"));
Group34->setDEF("Original_WorldInfo");
CWorldInfo* WorldInfo35 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo35->setInfo(new CString[1]{" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "}, 1);
WorldInfo35->setTitle("HANIM 200x Default Joint Centers, LOA3");
Group34->addChildren(*WorldInfo35);

group->addChildren(*Group34);

//TODO move viewpoints to be internal to HAnimHumanoid
//Viewpoint centerOfRotation=\"0 0.9149 0.0016\" matches initial at-rest locaton of the sacroliac. Note that these viewpoints are external to the HAnimHumanoid and do not move with the human.
CViewpoint* Viewpoint36 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint36->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint36->setDescription("Humanoid LOA 3 Front");
Viewpoint36->setPosition(new float[3]{0,0.4,4});
group->addChildren(*Viewpoint36);

CViewpoint* Viewpoint37 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint37->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint37->setDescription("Humanoid LOA 3 Front Close");
Viewpoint37->setPosition(new float[3]{0,0.8,2});
group->addChildren(*Viewpoint37);

CViewpoint* Viewpoint38 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint38->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint38->setDescription("Humanoid LOA 3 Front Closer");
Viewpoint38->setPosition(new float[3]{0,1.2,1});
group->addChildren(*Viewpoint38);

CViewpoint* Viewpoint39 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint39->setCenterOfRotation(new float[3]{0,1.5,0.0016});
Viewpoint39->setDescription("Humanoid LOA 3 Front Face");
Viewpoint39->setPosition(new float[3]{0,1.63,1});
group->addChildren(*Viewpoint39);

CViewpoint* Viewpoint40 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint40->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint40->setDescription("Humanoid LOA 3 Right Side");
Viewpoint40->setOrientation(new float[4]{0,1,0,1.5708});
Viewpoint40->setPosition(new float[3]{2.6,0.8,0});
group->addChildren(*Viewpoint40);

CViewpoint* Viewpoint41 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint41->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint41->setDescription("Humanoid LOA 3 Right Side Close");
Viewpoint41->setOrientation(new float[4]{0,1,0,1.2});
Viewpoint41->setPosition(new float[3]{1,0.8,0.5});
group->addChildren(*Viewpoint41);

CViewpoint* Viewpoint42 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint42->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint42->setDescription("Humanoid LOA 3 Left Side Close");
Viewpoint42->setOrientation(new float[4]{0,1,0,-1.2});
Viewpoint42->setPosition(new float[3]{-1,0.8,0.5});
group->addChildren(*Viewpoint42);

CViewpoint* Viewpoint43 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint43->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint43->setDescription("Humanoid LOA 3 Left Side");
Viewpoint43->setOrientation(new float[4]{0,1,0,-1.5708});
Viewpoint43->setPosition(new float[3]{-2.6,0.8,0});
group->addChildren(*Viewpoint43);

CViewpoint* Viewpoint44 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint44->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint44->setDescription("Humanoid LOA 3 Top");
Viewpoint44->setOrientation(new float[4]{1,0,0,-1.5708});
Viewpoint44->setPosition(new float[3]{0,3.5,0});
group->addChildren(*Viewpoint44);

CHAnimHumanoid* HAnimHumanoid45 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid45->setName("humanoid");
HAnimHumanoid45->setDEF("hanim_humanoid");
HAnimHumanoid45->setInfo(new CString[7]{"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman","authorEmail=HAnim@web3D.org","copyright=none","creationDate=12 May 1999","usageRestrictions=none","humanoidVersion=2.0","height=1.7504"}, 7);
HAnimHumanoid45->setVersion("1.0");
CHAnimJoint* HAnimJoint46 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint46->setName("humanoid_root");
HAnimJoint46->setDEF("hanim_humanoid_root");
HAnimJoint46->setCenter(new float[3]{0,0.824,0.0277});
HAnimJoint46->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment47 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment47->setName("sacrum");
HAnimSegment47->setDEF("hanim_sacrum");
//<HAnimJoint name='humanoid_root'/> visualization sphere within <HAnimSegment name='sacrum'/>
CTouchSensor* TouchSensor48 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor48->setDescription("HAnimJoint HumanoidRoot, HAnimSegment sacrum");
HAnimSegment47->addChildren(*TouchSensor48);

CTransform* Transform49 = (CTransform *)(m_pScene.createNode("Transform"));
Transform49->setTranslation(new float[3]{0,0.824,0.0277});
CShape* Shape50 = (CShape *)(m_pScene.createNode("Shape"));
Shape50->setDEF("HAnimJointShape");
CSphere* Sphere51 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere51->setRadius(0.006);
Shape50->setGeometry(Sphere51);

CAppearance* Appearance52 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance52->setDEF("HAnimJointAppearance");
CMaterial* Material53 = (CMaterial *)(m_pScene.createNode("Material"));
Material53->setDiffuseColor(new float[3]{1,0.5,0});
Material53->setTransparency(0.5);
Appearance52->setMaterial(*Material53);

Shape50->setAppearance(*Appearance52);

Transform49->addChildren(*Shape50);

HAnimSegment47->addChildren(*Transform49);

//HAnimSegment visualization line segment from parent <HAnimJoint name='humanoid_root'/> to <HAnimJoint name='sacroiliac'/>
CShape* Shape54 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet55 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet55->setVertexCount(new int[1]{2});
CCoordinate* Coordinate56 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate56->setPoint(new float[6]{0,0.824,0.0277,0,0.9149,0.0016});
LineSet55->setCoord(*Coordinate56);

CColorRGBA* ColorRGBA57 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA57->setDEF("HAnimSegmentLineColorRGBA");
ColorRGBA57->setColor(new float[8]{1,1,0,1,1,1,0,0.1});
LineSet55->setColor(*ColorRGBA57);

Shape54->setGeometry(LineSet55);

HAnimSegment47->addChildren(*Shape54);

//HAnimSegment visualization line segment from parent <HAnimJoint name='humanoid_root'/> to <HAnimJoint name='vl5'/>
CShape* Shape58 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet59 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet59->setVertexCount(new int[1]{2});
CCoordinate* Coordinate60 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate60->setPoint(new float[6]{0,0.824,0.0277,0.0028,1.0568,-0.0776});
LineSet59->setCoord(*Coordinate60);

CColorRGBA* ColorRGBA61 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA61->setUSE("HAnimSegmentLineColorRGBA");
LineSet59->setColor(*ColorRGBA61);

Shape58->setGeometry(LineSet59);

HAnimSegment47->addChildren(*Shape58);

HAnimJoint46->addChildren(*HAnimSegment47);

CHAnimJoint* HAnimJoint62 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint62->setName("sacroiliac");
HAnimJoint62->setDEF("hanim_sacroiliac");
HAnimJoint62->setCenter(new float[3]{0,0.9149,0.0016});
HAnimJoint62->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment63 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment63->setName("pelvis");
HAnimSegment63->setDEF("hanim_pelvis");
//<HAnimJoint name='sacroiliac'/> visualization sphere within <HAnimSegment name='pelvis'/>
CTouchSensor* TouchSensor64 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor64->setDescription("HAnimJoint sacroiliac, HAnimSegment pelvis");
HAnimSegment63->addChildren(*TouchSensor64);

CTransform* Transform65 = (CTransform *)(m_pScene.createNode("Transform"));
Transform65->setTranslation(new float[3]{0,0.9149,0.0016});
CShape* Shape66 = (CShape *)(m_pScene.createNode("Shape"));
Shape66->setUSE("HAnimJointShape");
Transform65->addChildren(*Shape66);

HAnimSegment63->addChildren(*Transform65);

//HAnimSegment visualization line segment from parent <HAnimJoint name='sacroiliac'/> to <HAnimJoint name='l_hip'/>
CShape* Shape67 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet68 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet68->setVertexCount(new int[1]{2});
CCoordinate* Coordinate69 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate69->setPoint(new float[6]{0,0.9149,0.0016,0.0961,0.9124,-0.0001});
LineSet68->setCoord(*Coordinate69);

CColorRGBA* ColorRGBA70 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA70->setUSE("HAnimSegmentLineColorRGBA");
LineSet68->setColor(*ColorRGBA70);

Shape67->setGeometry(LineSet68);

HAnimSegment63->addChildren(*Shape67);

//HAnimSegment visualization line segment from parent <HAnimJoint name='sacroiliac'/> to <HAnimJoint name='r_hip'/>
CShape* Shape71 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet72 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet72->setVertexCount(new int[1]{2});
CCoordinate* Coordinate73 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate73->setPoint(new float[6]{0,0.9149,0.0016,-0.0961,0.9124,-0.0001});
LineSet72->setCoord(*Coordinate73);

CColorRGBA* ColorRGBA74 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA74->setUSE("HAnimSegmentLineColorRGBA");
LineSet72->setColor(*ColorRGBA74);

Shape71->setGeometry(LineSet72);

HAnimSegment63->addChildren(*Shape71);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_iliocristale'/>
CShape* Shape75 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet76 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet76->setVertexCount(new int[1]{2});
CCoordinate* Coordinate77 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate77->setPoint(new float[6]{0,0.9149,0.0016,-0.1525,1.0628,0.0035});
LineSet76->setCoord(*Coordinate77);

CColorRGBA* ColorRGBA78 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA78->setDEF("HAnimSiteLineColorRGBA");
ColorRGBA78->setColor(new float[8]{1,0,0,1,1,0,0,0.1});
LineSet76->setColor(*ColorRGBA78);

Shape75->setGeometry(LineSet76);

HAnimSegment63->addChildren(*Shape75);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_trochanterion'/>
CShape* Shape79 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet80 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet80->setVertexCount(new int[1]{2});
CCoordinate* Coordinate81 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate81->setPoint(new float[6]{0,0.9149,0.0016,-0.1689,0.8419,0.0352});
LineSet80->setCoord(*Coordinate81);

CColorRGBA* ColorRGBA82 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA82->setUSE("HAnimSiteLineColorRGBA");
LineSet80->setColor(*ColorRGBA82);

Shape79->setGeometry(LineSet80);

HAnimSegment63->addChildren(*Shape79);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_iliocristale'/>
CShape* Shape83 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet84 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet84->setVertexCount(new int[1]{2});
CCoordinate* Coordinate85 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate85->setPoint(new float[6]{0,0.9149,0.0016,0.1612,1.0537,0.0008});
LineSet84->setCoord(*Coordinate85);

CColorRGBA* ColorRGBA86 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA86->setUSE("HAnimSiteLineColorRGBA");
LineSet84->setColor(*ColorRGBA86);

Shape83->setGeometry(LineSet84);

HAnimSegment63->addChildren(*Shape83);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_trochanterion'/>
CShape* Shape87 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet88 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet88->setVertexCount(new int[1]{2});
CCoordinate* Coordinate89 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate89->setPoint(new float[6]{0,0.9149,0.0016,0.1677,0.8336,0.0303});
LineSet88->setCoord(*Coordinate89);

CColorRGBA* ColorRGBA90 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA90->setUSE("HAnimSiteLineColorRGBA");
LineSet88->setColor(*ColorRGBA90);

Shape87->setGeometry(LineSet88);

HAnimSegment63->addChildren(*Shape87);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_asis'/>
CShape* Shape91 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet92 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet92->setVertexCount(new int[1]{2});
CCoordinate* Coordinate93 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate93->setPoint(new float[6]{0,0.9149,0.0016,-0.0887,1.0021,0.1112});
LineSet92->setCoord(*Coordinate93);

CColorRGBA* ColorRGBA94 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA94->setUSE("HAnimSiteLineColorRGBA");
LineSet92->setColor(*ColorRGBA94);

Shape91->setGeometry(LineSet92);

HAnimSegment63->addChildren(*Shape91);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_asis'/>
CShape* Shape95 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet96 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet96->setVertexCount(new int[1]{2});
CCoordinate* Coordinate97 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate97->setPoint(new float[6]{0,0.9149,0.0016,0.0925,0.9983,0.1052});
LineSet96->setCoord(*Coordinate97);

CColorRGBA* ColorRGBA98 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA98->setUSE("HAnimSiteLineColorRGBA");
LineSet96->setColor(*ColorRGBA98);

Shape95->setGeometry(LineSet96);

HAnimSegment63->addChildren(*Shape95);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_psis'/>
CShape* Shape99 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet100 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet100->setVertexCount(new int[1]{2});
CCoordinate* Coordinate101 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate101->setPoint(new float[6]{0,0.9149,0.0016,-0.0716,1.019,-0.1138});
LineSet100->setCoord(*Coordinate101);

CColorRGBA* ColorRGBA102 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA102->setUSE("HAnimSiteLineColorRGBA");
LineSet100->setColor(*ColorRGBA102);

Shape99->setGeometry(LineSet100);

HAnimSegment63->addChildren(*Shape99);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_psis'/>
CShape* Shape103 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet104 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet104->setVertexCount(new int[1]{2});
CCoordinate* Coordinate105 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate105->setPoint(new float[6]{0,0.9149,0.0016,0.0774,1.019,-0.1151});
LineSet104->setCoord(*Coordinate105);

CColorRGBA* ColorRGBA106 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA106->setUSE("HAnimSiteLineColorRGBA");
LineSet104->setColor(*ColorRGBA106);

Shape103->setGeometry(LineSet104);

HAnimSegment63->addChildren(*Shape103);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='crotch'/>
CShape* Shape107 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet108 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet108->setVertexCount(new int[1]{2});
CCoordinate* Coordinate109 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate109->setPoint(new float[6]{0,0.9149,0.0016,0.0034,0.8266,0.0257});
LineSet108->setCoord(*Coordinate109);

CColorRGBA* ColorRGBA110 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA110->setUSE("HAnimSiteLineColorRGBA");
LineSet108->setColor(*ColorRGBA110);

Shape107->setGeometry(LineSet108);

HAnimSegment63->addChildren(*Shape107);

CHAnimSite* HAnimSite111 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite111->setName("r_iliocristale_pt");
HAnimSite111->setDEF("hanim_r_iliocristale_pt");
HAnimSite111->setTranslation(new float[3]{-0.1525,1.0628,0.0035});
//HAnimSite visualization shape
CTouchSensor* TouchSensor112 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor112->setDescription("HAnimSite r_iliocristale");
HAnimSite111->addChildren(*TouchSensor112);

CShape* Shape113 = (CShape *)(m_pScene.createNode("Shape"));
Shape113->setDEF("HAnimSiteShape");
CIndexedFaceSet* IndexedFaceSet114 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet114->setDEF("DiamondIFS");
IndexedFaceSet114->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet114->setCreaseAngle(0.5);
IndexedFaceSet114->setSolid(False);
CCoordinate* Coordinate115 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate115->setPoint(new float[18]{0,0.008,0,-0.008,0,0,0,0,0.008,0.008,0,0,0,0,-0.008,0,-0.008,0});
IndexedFaceSet114->setCoord(*Coordinate115);

Shape113->setGeometry(IndexedFaceSet114);

CAppearance* Appearance116 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material117 = (CMaterial *)(m_pScene.createNode("Material"));
Material117->setDiffuseColor(new float[3]{1,0,0});
Appearance116->setMaterial(*Material117);

Shape113->setAppearance(*Appearance116);

HAnimSite111->addChildren(*Shape113);

HAnimSegment63->addChildren(*HAnimSite111);

CHAnimSite* HAnimSite118 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite118->setName("r_trochanterion_pt");
HAnimSite118->setDEF("hanim_r_trochanterion_pt");
HAnimSite118->setTranslation(new float[3]{-0.1689,0.8419,0.0352});
//HAnimSite visualization shape
CTouchSensor* TouchSensor119 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor119->setDescription("HAnimSite r_trochanterion");
HAnimSite118->addChildren(*TouchSensor119);

CShape* Shape120 = (CShape *)(m_pScene.createNode("Shape"));
Shape120->setUSE("HAnimSiteShape");
HAnimSite118->addChildren(*Shape120);

HAnimSegment63->addChildren(*HAnimSite118);

CHAnimSite* HAnimSite121 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite121->setName("l_iliocristale_pt");
HAnimSite121->setDEF("hanim_l_iliocristale_pt");
HAnimSite121->setTranslation(new float[3]{0.1612,1.0537,0.0008});
//HAnimSite visualization shape
CTouchSensor* TouchSensor122 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor122->setDescription("HAnimSite l_iliocristale");
HAnimSite121->addChildren(*TouchSensor122);

CShape* Shape123 = (CShape *)(m_pScene.createNode("Shape"));
Shape123->setUSE("HAnimSiteShape");
HAnimSite121->addChildren(*Shape123);

HAnimSegment63->addChildren(*HAnimSite121);

CHAnimSite* HAnimSite124 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite124->setName("l_trochanterion_pt");
HAnimSite124->setDEF("hanim_l_trochanterion_pt");
HAnimSite124->setTranslation(new float[3]{0.1677,0.8336,0.0303});
//HAnimSite visualization shape
CTouchSensor* TouchSensor125 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor125->setDescription("HAnimSite l_trochanterion");
HAnimSite124->addChildren(*TouchSensor125);

CShape* Shape126 = (CShape *)(m_pScene.createNode("Shape"));
Shape126->setUSE("HAnimSiteShape");
HAnimSite124->addChildren(*Shape126);

HAnimSegment63->addChildren(*HAnimSite124);

CHAnimSite* HAnimSite127 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite127->setName("r_asis_pt");
HAnimSite127->setDEF("hanim_r_asis_pt");
HAnimSite127->setTranslation(new float[3]{-0.0887,1.0021,0.1112});
//HAnimSite visualization shape
CTouchSensor* TouchSensor128 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor128->setDescription("HAnimSite r_asis");
HAnimSite127->addChildren(*TouchSensor128);

CShape* Shape129 = (CShape *)(m_pScene.createNode("Shape"));
Shape129->setUSE("HAnimSiteShape");
HAnimSite127->addChildren(*Shape129);

HAnimSegment63->addChildren(*HAnimSite127);

CHAnimSite* HAnimSite130 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite130->setName("l_asis_pt");
HAnimSite130->setDEF("hanim_l_asis_pt");
HAnimSite130->setTranslation(new float[3]{0.0925,0.9983,0.1052});
//HAnimSite visualization shape
CTouchSensor* TouchSensor131 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor131->setDescription("HAnimSite l_asis");
HAnimSite130->addChildren(*TouchSensor131);

CShape* Shape132 = (CShape *)(m_pScene.createNode("Shape"));
Shape132->setUSE("HAnimSiteShape");
HAnimSite130->addChildren(*Shape132);

HAnimSegment63->addChildren(*HAnimSite130);

CHAnimSite* HAnimSite133 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite133->setName("r_psis_pt");
HAnimSite133->setDEF("hanim_r_psis_pt");
HAnimSite133->setTranslation(new float[3]{-0.0716,1.019,-0.1138});
//HAnimSite visualization shape
CTouchSensor* TouchSensor134 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor134->setDescription("HAnimSite r_psis");
HAnimSite133->addChildren(*TouchSensor134);

CShape* Shape135 = (CShape *)(m_pScene.createNode("Shape"));
Shape135->setUSE("HAnimSiteShape");
HAnimSite133->addChildren(*Shape135);

HAnimSegment63->addChildren(*HAnimSite133);

CHAnimSite* HAnimSite136 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite136->setName("l_psis_pt");
HAnimSite136->setDEF("hanim_l_psis_pt");
HAnimSite136->setTranslation(new float[3]{0.0774,1.019,-0.1151});
//HAnimSite visualization shape
CTouchSensor* TouchSensor137 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor137->setDescription("HAnimSite l_psis");
HAnimSite136->addChildren(*TouchSensor137);

CShape* Shape138 = (CShape *)(m_pScene.createNode("Shape"));
Shape138->setUSE("HAnimSiteShape");
HAnimSite136->addChildren(*Shape138);

HAnimSegment63->addChildren(*HAnimSite136);

CHAnimSite* HAnimSite139 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite139->setName("crotch_pt");
HAnimSite139->setDEF("hanim_crotch_pt");
HAnimSite139->setTranslation(new float[3]{0.0034,0.8266,0.0257});
//HAnimSite visualization shape
CTouchSensor* TouchSensor140 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor140->setDescription("HAnimSite crotch");
HAnimSite139->addChildren(*TouchSensor140);

CShape* Shape141 = (CShape *)(m_pScene.createNode("Shape"));
Shape141->setUSE("HAnimSiteShape");
HAnimSite139->addChildren(*Shape141);

HAnimSegment63->addChildren(*HAnimSite139);

HAnimJoint62->addChildren(*HAnimSegment63);

CHAnimJoint* HAnimJoint142 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint142->setName("l_hip");
HAnimJoint142->setDEF("hanim_l_hip");
HAnimJoint142->setCenter(new float[3]{0.0961,0.9124,-0.0001});
HAnimJoint142->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment143 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment143->setName("l_thigh");
HAnimSegment143->setDEF("hanim_l_thigh");
//<HAnimJoint name='l_hip'/> visualization sphere within <HAnimSegment name='l_thigh'/>
CTouchSensor* TouchSensor144 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor144->setDescription("HAnimJoint l_hip, HAnimSegment l_thigh");
HAnimSegment143->addChildren(*TouchSensor144);

CTransform* Transform145 = (CTransform *)(m_pScene.createNode("Transform"));
Transform145->setTranslation(new float[3]{0.0961,0.9124,-0.0001});
CShape* Shape146 = (CShape *)(m_pScene.createNode("Shape"));
Shape146->setUSE("HAnimJointShape");
Transform145->addChildren(*Shape146);

HAnimSegment143->addChildren(*Transform145);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_hip'/> to <HAnimJoint name='l_knee'/>
CShape* Shape147 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet148 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet148->setVertexCount(new int[1]{2});
CCoordinate* Coordinate149 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate149->setPoint(new float[6]{0.0961,0.9124,-0.0001,0.104,0.4867,0.0308});
LineSet148->setCoord(*Coordinate149);

CColorRGBA* ColorRGBA150 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA150->setUSE("HAnimSegmentLineColorRGBA");
LineSet148->setColor(*ColorRGBA150);

Shape147->setGeometry(LineSet148);

HAnimSegment143->addChildren(*Shape147);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_knee_crease'/>
CShape* Shape151 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet152 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet152->setVertexCount(new int[1]{2});
CCoordinate* Coordinate153 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate153->setPoint(new float[6]{0.0961,0.9124,-0.0001,0.0993,0.4881,-0.0309});
LineSet152->setCoord(*Coordinate153);

CColorRGBA* ColorRGBA154 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA154->setUSE("HAnimSiteLineColorRGBA");
LineSet152->setColor(*ColorRGBA154);

Shape151->setGeometry(LineSet152);

HAnimSegment143->addChildren(*Shape151);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_lateral_epicn'/>
CShape* Shape155 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet156 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet156->setVertexCount(new int[1]{2});
CCoordinate* Coordinate157 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate157->setPoint(new float[6]{0.0961,0.9124,-0.0001,0.1598,0.4967,0.0297});
LineSet156->setCoord(*Coordinate157);

CColorRGBA* ColorRGBA158 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA158->setUSE("HAnimSiteLineColorRGBA");
LineSet156->setColor(*ColorRGBA158);

Shape155->setGeometry(LineSet156);

HAnimSegment143->addChildren(*Shape155);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_medial_epicn'/>
CShape* Shape159 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet160 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet160->setVertexCount(new int[1]{2});
CCoordinate* Coordinate161 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate161->setPoint(new float[6]{0.0961,0.9124,-0.0001,0.0398,0.4946,0.0303});
LineSet160->setCoord(*Coordinate161);

CColorRGBA* ColorRGBA162 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA162->setUSE("HAnimSiteLineColorRGBA");
LineSet160->setColor(*ColorRGBA162);

Shape159->setGeometry(LineSet160);

HAnimSegment143->addChildren(*Shape159);

CHAnimSite* HAnimSite163 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite163->setName("l_knee_crease_pt");
HAnimSite163->setDEF("hanim_l_knee_crease_pt");
HAnimSite163->setTranslation(new float[3]{0.0993,0.4881,-0.0309});
//HAnimSite visualization shape
CTouchSensor* TouchSensor164 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor164->setDescription("HAnimSite l_knee_crease");
HAnimSite163->addChildren(*TouchSensor164);

CShape* Shape165 = (CShape *)(m_pScene.createNode("Shape"));
Shape165->setUSE("HAnimSiteShape");
HAnimSite163->addChildren(*Shape165);

HAnimSegment143->addChildren(*HAnimSite163);

CHAnimSite* HAnimSite166 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite166->setName("l_femoral_lateral_epicn_pt");
HAnimSite166->setDEF("hanim_l_femoral_lateral_epicn_pt");
HAnimSite166->setTranslation(new float[3]{0.1598,0.4967,0.0297});
//HAnimSite visualization shape
CTouchSensor* TouchSensor167 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor167->setDescription("HAnimSite l_femoral_lateral_epicn");
HAnimSite166->addChildren(*TouchSensor167);

CShape* Shape168 = (CShape *)(m_pScene.createNode("Shape"));
Shape168->setUSE("HAnimSiteShape");
HAnimSite166->addChildren(*Shape168);

HAnimSegment143->addChildren(*HAnimSite166);

CHAnimSite* HAnimSite169 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite169->setName("l_femoral_medial_epicn_pt");
HAnimSite169->setDEF("hanim_l_femoral_medial_epicn_pt");
HAnimSite169->setTranslation(new float[3]{0.0398,0.4946,0.0303});
//HAnimSite visualization shape
CTouchSensor* TouchSensor170 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor170->setDescription("HAnimSite l_femoral_medial_epicn");
HAnimSite169->addChildren(*TouchSensor170);

CShape* Shape171 = (CShape *)(m_pScene.createNode("Shape"));
Shape171->setUSE("HAnimSiteShape");
HAnimSite169->addChildren(*Shape171);

HAnimSegment143->addChildren(*HAnimSite169);

HAnimJoint142->addChildren(*HAnimSegment143);

CHAnimJoint* HAnimJoint172 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint172->setName("l_knee");
HAnimJoint172->setDEF("hanim_l_knee");
HAnimJoint172->setCenter(new float[3]{0.104,0.4867,0.0308});
HAnimJoint172->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment173 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment173->setName("l_calf");
HAnimSegment173->setDEF("hanim_l_calf");
//<HAnimJoint name='l_knee'/> visualization sphere within <HAnimSegment name='l_calf'/>
CTouchSensor* TouchSensor174 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor174->setDescription("HAnimJoint l_knee, HAnimSegment l_calf");
HAnimSegment173->addChildren(*TouchSensor174);

CTransform* Transform175 = (CTransform *)(m_pScene.createNode("Transform"));
Transform175->setTranslation(new float[3]{0.104,0.4867,0.0308});
CShape* Shape176 = (CShape *)(m_pScene.createNode("Shape"));
Shape176->setUSE("HAnimJointShape");
Transform175->addChildren(*Shape176);

HAnimSegment173->addChildren(*Transform175);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_knee'/> to <HAnimJoint name='l_ankle'/>
CShape* Shape177 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet178 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet178->setVertexCount(new int[1]{2});
CCoordinate* Coordinate179 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate179->setPoint(new float[6]{0.104,0.4867,0.0308,0.1101,0.0656,-0.0736});
LineSet178->setCoord(*Coordinate179);

CColorRGBA* ColorRGBA180 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA180->setUSE("HAnimSegmentLineColorRGBA");
LineSet178->setColor(*ColorRGBA180);

Shape177->setGeometry(LineSet178);

HAnimSegment173->addChildren(*Shape177);

HAnimJoint172->addChildren(*HAnimSegment173);

CHAnimJoint* HAnimJoint181 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint181->setName("l_ankle");
HAnimJoint181->setDEF("hanim_l_ankle");
HAnimJoint181->setCenter(new float[3]{0.1101,0.0656,-0.0736});
HAnimJoint181->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment182 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment182->setName("l_hindfoot");
HAnimSegment182->setDEF("hanim_l_hindfoot");
//<HAnimJoint name='l_ankle'/> visualization sphere within <HAnimSegment name='l_hindfoot'/>
CTouchSensor* TouchSensor183 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor183->setDescription("HAnimJoint l_ankle, HAnimSegment l_hindfoot");
HAnimSegment182->addChildren(*TouchSensor183);

CTransform* Transform184 = (CTransform *)(m_pScene.createNode("Transform"));
Transform184->setTranslation(new float[3]{0.1101,0.0656,-0.0736});
CShape* Shape185 = (CShape *)(m_pScene.createNode("Shape"));
Shape185->setUSE("HAnimJointShape");
Transform184->addChildren(*Shape185);

HAnimSegment182->addChildren(*Transform184);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ankle'/> to <HAnimJoint name='l_subtalar'/>
CShape* Shape186 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet187 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet187->setVertexCount(new int[1]{2});
CCoordinate* Coordinate188 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate188->setPoint(new float[6]{0.1101,0.0656,-0.0736,0.1086,0.0001,-0.0368});
LineSet187->setCoord(*Coordinate188);

CColorRGBA* ColorRGBA189 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA189->setUSE("HAnimSegmentLineColorRGBA");
LineSet187->setColor(*ColorRGBA189);

Shape186->setGeometry(LineSet187);

HAnimSegment182->addChildren(*Shape186);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_lateral_malleolus'/>
CShape* Shape190 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet191 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet191->setVertexCount(new int[1]{2});
CCoordinate* Coordinate192 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate192->setPoint(new float[6]{0.1101,0.0656,-0.0736,0.1308,0.0597,-0.1032});
LineSet191->setCoord(*Coordinate192);

CColorRGBA* ColorRGBA193 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA193->setUSE("HAnimSiteLineColorRGBA");
LineSet191->setColor(*ColorRGBA193);

Shape190->setGeometry(LineSet191);

HAnimSegment182->addChildren(*Shape190);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_medial_malleolus'/>
CShape* Shape194 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet195 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet195->setVertexCount(new int[1]{2});
CCoordinate* Coordinate196 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate196->setPoint(new float[6]{0.1101,0.0656,-0.0736,0.089,0.0716,-0.0881});
LineSet195->setCoord(*Coordinate196);

CColorRGBA* ColorRGBA197 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA197->setUSE("HAnimSiteLineColorRGBA");
LineSet195->setColor(*ColorRGBA197);

Shape194->setGeometry(LineSet195);

HAnimSegment182->addChildren(*Shape194);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_sphyrion'/>
CShape* Shape198 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet199 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet199->setVertexCount(new int[1]{2});
CCoordinate* Coordinate200 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate200->setPoint(new float[6]{0.1101,0.0656,-0.0736,0.089,0.0575,-0.0943});
LineSet199->setCoord(*Coordinate200);

CColorRGBA* ColorRGBA201 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA201->setUSE("HAnimSiteLineColorRGBA");
LineSet199->setColor(*ColorRGBA201);

Shape198->setGeometry(LineSet199);

HAnimSegment182->addChildren(*Shape198);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_calcaneous_post'/>
CShape* Shape202 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet203 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet203->setVertexCount(new int[1]{2});
CCoordinate* Coordinate204 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate204->setPoint(new float[6]{0.1101,0.0656,-0.0736,0.0974,0.0259,-0.1171});
LineSet203->setCoord(*Coordinate204);

CColorRGBA* ColorRGBA205 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA205->setUSE("HAnimSiteLineColorRGBA");
LineSet203->setColor(*ColorRGBA205);

Shape202->setGeometry(LineSet203);

HAnimSegment182->addChildren(*Shape202);

CHAnimSite* HAnimSite206 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite206->setName("l_lateral_malleolus_pt");
HAnimSite206->setDEF("hanim_l_lateral_malleolus_pt");
HAnimSite206->setTranslation(new float[3]{0.1308,0.0597,-0.1032});
//HAnimSite visualization shape
CTouchSensor* TouchSensor207 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor207->setDescription("HAnimSite l_lateral_malleolus");
HAnimSite206->addChildren(*TouchSensor207);

CShape* Shape208 = (CShape *)(m_pScene.createNode("Shape"));
Shape208->setUSE("HAnimSiteShape");
HAnimSite206->addChildren(*Shape208);

HAnimSegment182->addChildren(*HAnimSite206);

CHAnimSite* HAnimSite209 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite209->setName("l_medial_malleolus_pt");
HAnimSite209->setDEF("hanim_l_medial_malleolus_pt");
HAnimSite209->setTranslation(new float[3]{0.089,0.0716,-0.0881});
//HAnimSite visualization shape
CTouchSensor* TouchSensor210 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor210->setDescription("HAnimSite l_medial_malleolus");
HAnimSite209->addChildren(*TouchSensor210);

CShape* Shape211 = (CShape *)(m_pScene.createNode("Shape"));
Shape211->setUSE("HAnimSiteShape");
HAnimSite209->addChildren(*Shape211);

HAnimSegment182->addChildren(*HAnimSite209);

CHAnimSite* HAnimSite212 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite212->setName("l_sphyrion_pt");
HAnimSite212->setDEF("hanim_l_sphyrion_pt");
HAnimSite212->setTranslation(new float[3]{0.089,0.0575,-0.0943});
//HAnimSite visualization shape
CTouchSensor* TouchSensor213 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor213->setDescription("HAnimSite l_sphyrion");
HAnimSite212->addChildren(*TouchSensor213);

CShape* Shape214 = (CShape *)(m_pScene.createNode("Shape"));
Shape214->setUSE("HAnimSiteShape");
HAnimSite212->addChildren(*Shape214);

HAnimSegment182->addChildren(*HAnimSite212);

CHAnimSite* HAnimSite215 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite215->setName("l_calcaneous_post_pt");
HAnimSite215->setDEF("hanim_l_calcaneous_post_pt");
HAnimSite215->setTranslation(new float[3]{0.0974,0.0259,-0.1171});
//HAnimSite visualization shape
CTouchSensor* TouchSensor216 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor216->setDescription("HAnimSite l_calcaneous_post");
HAnimSite215->addChildren(*TouchSensor216);

CShape* Shape217 = (CShape *)(m_pScene.createNode("Shape"));
Shape217->setUSE("HAnimSiteShape");
HAnimSite215->addChildren(*Shape217);

HAnimSegment182->addChildren(*HAnimSite215);

HAnimJoint181->addChildren(*HAnimSegment182);

CHAnimJoint* HAnimJoint218 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint218->setName("l_subtalar");
HAnimJoint218->setDEF("hanim_l_subtalar");
HAnimJoint218->setCenter(new float[3]{0.1086,0.0001,-0.0368});
HAnimJoint218->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment219 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment219->setName("l_midproximal");
HAnimSegment219->setDEF("hanim_l_midproximal");
//<HAnimJoint name='l_subtalar'/> visualization sphere within <HAnimSegment name='l_midproximal'/>
CTouchSensor* TouchSensor220 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor220->setDescription("HAnimJoint l_subtalar, HAnimSegment l_midproximal");
HAnimSegment219->addChildren(*TouchSensor220);

CTransform* Transform221 = (CTransform *)(m_pScene.createNode("Transform"));
Transform221->setTranslation(new float[3]{0.1086,0.0001,-0.0368});
CShape* Shape222 = (CShape *)(m_pScene.createNode("Shape"));
Shape222->setUSE("HAnimJointShape");
Transform221->addChildren(*Shape222);

HAnimSegment219->addChildren(*Transform221);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_subtalar'/> to <HAnimJoint name='l_midtarsal'/>
CShape* Shape223 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet224 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet224->setVertexCount(new int[1]{2});
CCoordinate* Coordinate225 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate225->setPoint(new float[6]{0.1086,0.0001,-0.0368,0.1086,0.0001,0.0368});
LineSet224->setCoord(*Coordinate225);

CColorRGBA* ColorRGBA226 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA226->setUSE("HAnimSegmentLineColorRGBA");
LineSet224->setColor(*ColorRGBA226);

Shape223->setGeometry(LineSet224);

HAnimSegment219->addChildren(*Shape223);

HAnimJoint218->addChildren(*HAnimSegment219);

CHAnimJoint* HAnimJoint227 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint227->setName("l_midtarsal");
HAnimJoint227->setDEF("hanim_l_midtarsal");
HAnimJoint227->setCenter(new float[3]{0.1086,0.0001,0.0368});
HAnimJoint227->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment228 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment228->setName("l_middistal");
HAnimSegment228->setDEF("hanim_l_middistal");
//<HAnimJoint name='l_midtarsal'/> visualization sphere within <HAnimSegment name='l_middistal'/>
CTouchSensor* TouchSensor229 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor229->setDescription("HAnimJoint l_midtarsal, HAnimSegment l_middistal");
HAnimSegment228->addChildren(*TouchSensor229);

CTransform* Transform230 = (CTransform *)(m_pScene.createNode("Transform"));
Transform230->setTranslation(new float[3]{0.1086,0.0001,0.0368});
CShape* Shape231 = (CShape *)(m_pScene.createNode("Shape"));
Shape231->setUSE("HAnimJointShape");
Transform230->addChildren(*Shape231);

HAnimSegment228->addChildren(*Transform230);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_midtarsal'/> to <HAnimJoint name='l_metatarsal'/>
CShape* Shape232 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet233 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet233->setVertexCount(new int[1]{2});
CCoordinate* Coordinate234 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate234->setPoint(new float[6]{0.1086,0.0001,0.0368,0.1086,0,0.0762});
LineSet233->setCoord(*Coordinate234);

CColorRGBA* ColorRGBA235 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA235->setUSE("HAnimSegmentLineColorRGBA");
LineSet233->setColor(*ColorRGBA235);

Shape232->setGeometry(LineSet233);

HAnimSegment228->addChildren(*Shape232);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_midtarsal'/> to <HAnimSite name='l_metatarsal_pha1'/>
CShape* Shape236 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet237 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet237->setVertexCount(new int[1]{2});
CCoordinate* Coordinate238 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate238->setPoint(new float[6]{0.1086,0.0001,0.0368,0.0816,0.0232,0.0106});
LineSet237->setCoord(*Coordinate238);

CColorRGBA* ColorRGBA239 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA239->setUSE("HAnimSiteLineColorRGBA");
LineSet237->setColor(*ColorRGBA239);

Shape236->setGeometry(LineSet237);

HAnimSegment228->addChildren(*Shape236);

CHAnimSite* HAnimSite240 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite240->setName("l_metatarsal_pha1_pt");
HAnimSite240->setDEF("hanim_l_metatarsal_pha1_pt");
HAnimSite240->setTranslation(new float[3]{0.0816,0.0232,0.0106});
//HAnimSite visualization shape
CTouchSensor* TouchSensor241 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor241->setDescription("HAnimSite l_metatarsal_pha1");
HAnimSite240->addChildren(*TouchSensor241);

CShape* Shape242 = (CShape *)(m_pScene.createNode("Shape"));
Shape242->setUSE("HAnimSiteShape");
HAnimSite240->addChildren(*Shape242);

HAnimSegment228->addChildren(*HAnimSite240);

HAnimJoint227->addChildren(*HAnimSegment228);

CHAnimJoint* HAnimJoint243 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint243->setName("l_metatarsal");
HAnimJoint243->setDEF("hanim_l_metatarsal");
HAnimJoint243->setCenter(new float[3]{0.1086,0,0.0762});
HAnimJoint243->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment244 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment244->setName("l_forefoot");
HAnimSegment244->setDEF("hanim_l_forefoot");
//<HAnimJoint name='l_metatarsal'/> visualization sphere within <HAnimSegment name='l_forefoot'/>
CTouchSensor* TouchSensor245 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor245->setDescription("HAnimJoint l_metatarsal, HAnimSegment l_forefoot");
HAnimSegment244->addChildren(*TouchSensor245);

CTransform* Transform246 = (CTransform *)(m_pScene.createNode("Transform"));
Transform246->setTranslation(new float[3]{0.1086,0,0.0762});
CShape* Shape247 = (CShape *)(m_pScene.createNode("Shape"));
Shape247->setUSE("HAnimJointShape");
Transform246->addChildren(*Shape247);

HAnimSegment244->addChildren(*Transform246);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_forefoot_tip'/>
CShape* Shape248 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet249 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet249->setVertexCount(new int[1]{2});
CCoordinate* Coordinate250 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate250->setPoint(new float[6]{0.1086,0,0.0762,0.1354,0.0016,0.1476});
LineSet249->setCoord(*Coordinate250);

CColorRGBA* ColorRGBA251 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA251->setUSE("HAnimSiteLineColorRGBA");
LineSet249->setColor(*ColorRGBA251);

Shape248->setGeometry(LineSet249);

HAnimSegment244->addChildren(*Shape248);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_metatarsal_pha5'/>
CShape* Shape252 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet253 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet253->setVertexCount(new int[1]{2});
CCoordinate* Coordinate254 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate254->setPoint(new float[6]{0.1086,0,0.0762,0.1825,0.007,0.0928});
LineSet253->setCoord(*Coordinate254);

CColorRGBA* ColorRGBA255 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA255->setUSE("HAnimSiteLineColorRGBA");
LineSet253->setColor(*ColorRGBA255);

Shape252->setGeometry(LineSet253);

HAnimSegment244->addChildren(*Shape252);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_digit2'/>
CShape* Shape256 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet257 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet257->setVertexCount(new int[1]{2});
CCoordinate* Coordinate258 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate258->setPoint(new float[6]{0.1086,0,0.0762,0.1195,0.0079,0.1433});
LineSet257->setCoord(*Coordinate258);

CColorRGBA* ColorRGBA259 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA259->setUSE("HAnimSiteLineColorRGBA");
LineSet257->setColor(*ColorRGBA259);

Shape256->setGeometry(LineSet257);

HAnimSegment244->addChildren(*Shape256);

CHAnimSite* HAnimSite260 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite260->setName("l_forefoot_tip");
HAnimSite260->setDEF("hanim_l_forefoot_tip");
HAnimSite260->setTranslation(new float[3]{0.1354,0.0016,0.1476});
//HAnimSite visualization shape
CTouchSensor* TouchSensor261 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor261->setDescription("HAnimSite l_forefoot_tip");
HAnimSite260->addChildren(*TouchSensor261);

CShape* Shape262 = (CShape *)(m_pScene.createNode("Shape"));
Shape262->setUSE("HAnimSiteShape");
HAnimSite260->addChildren(*Shape262);

HAnimSegment244->addChildren(*HAnimSite260);

CHAnimSite* HAnimSite263 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite263->setName("l_metatarsal_pha5_pt");
HAnimSite263->setDEF("hanim_l_metatarsal_pha5_pt");
HAnimSite263->setTranslation(new float[3]{0.1825,0.007,0.0928});
//HAnimSite visualization shape
CTouchSensor* TouchSensor264 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor264->setDescription("HAnimSite l_metatarsal_pha5");
HAnimSite263->addChildren(*TouchSensor264);

CShape* Shape265 = (CShape *)(m_pScene.createNode("Shape"));
Shape265->setUSE("HAnimSiteShape");
HAnimSite263->addChildren(*Shape265);

HAnimSegment244->addChildren(*HAnimSite263);

CHAnimSite* HAnimSite266 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite266->setName("l_digit2_pt");
HAnimSite266->setDEF("hanim_l_digit2_pt");
HAnimSite266->setTranslation(new float[3]{0.1195,0.0079,0.1433});
//HAnimSite visualization shape
CTouchSensor* TouchSensor267 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor267->setDescription("HAnimSite l_digit2");
HAnimSite266->addChildren(*TouchSensor267);

CShape* Shape268 = (CShape *)(m_pScene.createNode("Shape"));
Shape268->setUSE("HAnimSiteShape");
HAnimSite266->addChildren(*Shape268);

HAnimSegment244->addChildren(*HAnimSite266);

HAnimJoint243->addChildren(*HAnimSegment244);

HAnimJoint227->addChildren(*HAnimJoint243);

HAnimJoint218->addChildren(*HAnimJoint227);

HAnimJoint181->addChildren(*HAnimJoint218);

HAnimJoint172->addChildren(*HAnimJoint181);

HAnimJoint142->addChildren(*HAnimJoint172);

HAnimJoint62->addChildren(*HAnimJoint142);

CHAnimJoint* HAnimJoint269 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint269->setName("r_hip");
HAnimJoint269->setDEF("hanim_r_hip");
HAnimJoint269->setCenter(new float[3]{-0.0961,0.9124,-0.0001});
HAnimJoint269->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment270 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment270->setName("r_thigh");
HAnimSegment270->setDEF("hanim_r_thigh");
//<HAnimJoint name='r_hip'/> visualization sphere within <HAnimSegment name='r_thigh'/>
CTouchSensor* TouchSensor271 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor271->setDescription("HAnimJoint r_hip, HAnimSegment r_thigh");
HAnimSegment270->addChildren(*TouchSensor271);

CTransform* Transform272 = (CTransform *)(m_pScene.createNode("Transform"));
Transform272->setTranslation(new float[3]{-0.0961,0.9124,-0.0001});
CShape* Shape273 = (CShape *)(m_pScene.createNode("Shape"));
Shape273->setUSE("HAnimJointShape");
Transform272->addChildren(*Shape273);

HAnimSegment270->addChildren(*Transform272);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_hip'/> to <HAnimJoint name='r_knee'/>
CShape* Shape274 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet275 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet275->setVertexCount(new int[1]{2});
CCoordinate* Coordinate276 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate276->setPoint(new float[6]{-0.0961,0.9124,-0.0001,-0.104,0.4867,0.0308});
LineSet275->setCoord(*Coordinate276);

CColorRGBA* ColorRGBA277 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA277->setUSE("HAnimSegmentLineColorRGBA");
LineSet275->setColor(*ColorRGBA277);

Shape274->setGeometry(LineSet275);

HAnimSegment270->addChildren(*Shape274);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_knee_crease'/>
CShape* Shape278 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet279 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet279->setVertexCount(new int[1]{2});
CCoordinate* Coordinate280 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate280->setPoint(new float[6]{-0.0961,0.9124,-0.0001,-0.0825,0.4932,-0.0326});
LineSet279->setCoord(*Coordinate280);

CColorRGBA* ColorRGBA281 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA281->setUSE("HAnimSiteLineColorRGBA");
LineSet279->setColor(*ColorRGBA281);

Shape278->setGeometry(LineSet279);

HAnimSegment270->addChildren(*Shape278);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_lateral_epicn'/>
CShape* Shape282 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet283 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet283->setVertexCount(new int[1]{2});
CCoordinate* Coordinate284 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate284->setPoint(new float[6]{-0.0961,0.9124,-0.0001,-0.1421,0.4992,0.031});
LineSet283->setCoord(*Coordinate284);

CColorRGBA* ColorRGBA285 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA285->setUSE("HAnimSiteLineColorRGBA");
LineSet283->setColor(*ColorRGBA285);

Shape282->setGeometry(LineSet283);

HAnimSegment270->addChildren(*Shape282);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_medial_epicn'/>
CShape* Shape286 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet287 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet287->setVertexCount(new int[1]{2});
CCoordinate* Coordinate288 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate288->setPoint(new float[6]{-0.0961,0.9124,-0.0001,-0.0221,0.5014,0.0289});
LineSet287->setCoord(*Coordinate288);

CColorRGBA* ColorRGBA289 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA289->setUSE("HAnimSiteLineColorRGBA");
LineSet287->setColor(*ColorRGBA289);

Shape286->setGeometry(LineSet287);

HAnimSegment270->addChildren(*Shape286);

CHAnimSite* HAnimSite290 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite290->setName("r_knee_crease_pt");
HAnimSite290->setDEF("hanim_r_knee_crease_pt");
HAnimSite290->setTranslation(new float[3]{-0.0825,0.4932,-0.0326});
//HAnimSite visualization shape
CTouchSensor* TouchSensor291 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor291->setDescription("HAnimSite r_knee_crease");
HAnimSite290->addChildren(*TouchSensor291);

CShape* Shape292 = (CShape *)(m_pScene.createNode("Shape"));
Shape292->setUSE("HAnimSiteShape");
HAnimSite290->addChildren(*Shape292);

HAnimSegment270->addChildren(*HAnimSite290);

CHAnimSite* HAnimSite293 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite293->setName("r_femoral_lateral_epicn_pt");
HAnimSite293->setDEF("hanim_r_femoral_lateral_epicn_pt");
HAnimSite293->setTranslation(new float[3]{-0.1421,0.4992,0.031});
//HAnimSite visualization shape
CTouchSensor* TouchSensor294 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor294->setDescription("HAnimSite r_femoral_lateral_epicn");
HAnimSite293->addChildren(*TouchSensor294);

CShape* Shape295 = (CShape *)(m_pScene.createNode("Shape"));
Shape295->setUSE("HAnimSiteShape");
HAnimSite293->addChildren(*Shape295);

HAnimSegment270->addChildren(*HAnimSite293);

CHAnimSite* HAnimSite296 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite296->setName("r_femoral_medial_epicn_pt");
HAnimSite296->setDEF("hanim_r_femoral_medial_epicn_pt");
HAnimSite296->setTranslation(new float[3]{-0.0221,0.5014,0.0289});
//HAnimSite visualization shape
CTouchSensor* TouchSensor297 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor297->setDescription("HAnimSite r_femoral_medial_epicn");
HAnimSite296->addChildren(*TouchSensor297);

CShape* Shape298 = (CShape *)(m_pScene.createNode("Shape"));
Shape298->setUSE("HAnimSiteShape");
HAnimSite296->addChildren(*Shape298);

HAnimSegment270->addChildren(*HAnimSite296);

HAnimJoint269->addChildren(*HAnimSegment270);

CHAnimJoint* HAnimJoint299 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint299->setName("r_knee");
HAnimJoint299->setDEF("hanim_r_knee");
HAnimJoint299->setCenter(new float[3]{-0.104,0.4867,0.0308});
HAnimJoint299->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment300 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment300->setName("r_calf");
HAnimSegment300->setDEF("hanim_r_calf");
//<HAnimJoint name='r_knee'/> visualization sphere within <HAnimSegment name='r_calf'/>
CTouchSensor* TouchSensor301 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor301->setDescription("HAnimJoint r_knee, HAnimSegment r_calf");
HAnimSegment300->addChildren(*TouchSensor301);

CTransform* Transform302 = (CTransform *)(m_pScene.createNode("Transform"));
Transform302->setTranslation(new float[3]{-0.104,0.4867,0.0308});
CShape* Shape303 = (CShape *)(m_pScene.createNode("Shape"));
Shape303->setUSE("HAnimJointShape");
Transform302->addChildren(*Shape303);

HAnimSegment300->addChildren(*Transform302);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_knee'/> to <HAnimJoint name='r_ankle'/>
CShape* Shape304 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet305 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet305->setVertexCount(new int[1]{2});
CCoordinate* Coordinate306 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate306->setPoint(new float[6]{-0.104,0.4867,0.0308,-0.1101,0.0656,-0.0736});
LineSet305->setCoord(*Coordinate306);

CColorRGBA* ColorRGBA307 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA307->setUSE("HAnimSegmentLineColorRGBA");
LineSet305->setColor(*ColorRGBA307);

Shape304->setGeometry(LineSet305);

HAnimSegment300->addChildren(*Shape304);

HAnimJoint299->addChildren(*HAnimSegment300);

CHAnimJoint* HAnimJoint308 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint308->setName("r_ankle");
HAnimJoint308->setDEF("hanim_r_ankle");
HAnimJoint308->setCenter(new float[3]{-0.1101,0.0656,-0.0736});
HAnimJoint308->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment309 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment309->setName("r_hindfoot");
HAnimSegment309->setDEF("hanim_r_hindfoot");
//<HAnimJoint name='r_ankle'/> visualization sphere within <HAnimSegment name='r_hindfoot'/>
CTouchSensor* TouchSensor310 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor310->setDescription("HAnimJoint r_ankle, HAnimSegment r_hindfoot");
HAnimSegment309->addChildren(*TouchSensor310);

CTransform* Transform311 = (CTransform *)(m_pScene.createNode("Transform"));
Transform311->setTranslation(new float[3]{-0.1101,0.0656,-0.0736});
CShape* Shape312 = (CShape *)(m_pScene.createNode("Shape"));
Shape312->setUSE("HAnimJointShape");
Transform311->addChildren(*Shape312);

HAnimSegment309->addChildren(*Transform311);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ankle'/> to <HAnimJoint name='r_subtalar'/>
CShape* Shape313 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet314 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet314->setVertexCount(new int[1]{2});
CCoordinate* Coordinate315 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate315->setPoint(new float[6]{-0.1101,0.0656,-0.0736,-0.1086,0.0001,-0.0368});
LineSet314->setCoord(*Coordinate315);

CColorRGBA* ColorRGBA316 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA316->setUSE("HAnimSegmentLineColorRGBA");
LineSet314->setColor(*ColorRGBA316);

Shape313->setGeometry(LineSet314);

HAnimSegment309->addChildren(*Shape313);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_lateral_malleolus'/>
CShape* Shape317 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet318 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet318->setVertexCount(new int[1]{2});
CCoordinate* Coordinate319 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate319->setPoint(new float[6]{-0.1101,0.0656,-0.0736,-0.1006,0.0658,-0.1075});
LineSet318->setCoord(*Coordinate319);

CColorRGBA* ColorRGBA320 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA320->setUSE("HAnimSiteLineColorRGBA");
LineSet318->setColor(*ColorRGBA320);

Shape317->setGeometry(LineSet318);

HAnimSegment309->addChildren(*Shape317);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_medial_malleolus'/>
CShape* Shape321 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet322 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet322->setVertexCount(new int[1]{2});
CCoordinate* Coordinate323 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate323->setPoint(new float[6]{-0.1101,0.0656,-0.0736,-0.0591,0.076,-0.0928});
LineSet322->setCoord(*Coordinate323);

CColorRGBA* ColorRGBA324 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA324->setUSE("HAnimSiteLineColorRGBA");
LineSet322->setColor(*ColorRGBA324);

Shape321->setGeometry(LineSet322);

HAnimSegment309->addChildren(*Shape321);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_sphyrion'/>
CShape* Shape325 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet326 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet326->setVertexCount(new int[1]{2});
CCoordinate* Coordinate327 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate327->setPoint(new float[6]{-0.1101,0.0656,-0.0736,-0.0603,0.061,-0.1002});
LineSet326->setCoord(*Coordinate327);

CColorRGBA* ColorRGBA328 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA328->setUSE("HAnimSiteLineColorRGBA");
LineSet326->setColor(*ColorRGBA328);

Shape325->setGeometry(LineSet326);

HAnimSegment309->addChildren(*Shape325);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_calcaneous_post'/>
CShape* Shape329 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet330 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet330->setVertexCount(new int[1]{2});
CCoordinate* Coordinate331 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate331->setPoint(new float[6]{-0.1101,0.0656,-0.0736,-0.0692,0.0297,-0.1221});
LineSet330->setCoord(*Coordinate331);

CColorRGBA* ColorRGBA332 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA332->setUSE("HAnimSiteLineColorRGBA");
LineSet330->setColor(*ColorRGBA332);

Shape329->setGeometry(LineSet330);

HAnimSegment309->addChildren(*Shape329);

CHAnimSite* HAnimSite333 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite333->setName("r_lateral_malleolus_pt");
HAnimSite333->setDEF("hanim_r_lateral_malleolus_pt");
HAnimSite333->setTranslation(new float[3]{-0.1006,0.0658,-0.1075});
//HAnimSite visualization shape
CTouchSensor* TouchSensor334 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor334->setDescription("HAnimSite r_lateral_malleolus");
HAnimSite333->addChildren(*TouchSensor334);

CShape* Shape335 = (CShape *)(m_pScene.createNode("Shape"));
Shape335->setUSE("HAnimSiteShape");
HAnimSite333->addChildren(*Shape335);

HAnimSegment309->addChildren(*HAnimSite333);

CHAnimSite* HAnimSite336 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite336->setName("r_medial_malleolus_pt");
HAnimSite336->setDEF("hanim_r_medial_malleolus_pt");
HAnimSite336->setTranslation(new float[3]{-0.0591,0.076,-0.0928});
//HAnimSite visualization shape
CTouchSensor* TouchSensor337 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor337->setDescription("HAnimSite r_medial_malleolus");
HAnimSite336->addChildren(*TouchSensor337);

CShape* Shape338 = (CShape *)(m_pScene.createNode("Shape"));
Shape338->setUSE("HAnimSiteShape");
HAnimSite336->addChildren(*Shape338);

HAnimSegment309->addChildren(*HAnimSite336);

CHAnimSite* HAnimSite339 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite339->setName("r_sphyrion_pt");
HAnimSite339->setDEF("hanim_r_sphyrion_pt");
HAnimSite339->setTranslation(new float[3]{-0.0603,0.061,-0.1002});
//HAnimSite visualization shape
CTouchSensor* TouchSensor340 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor340->setDescription("HAnimSite r_sphyrion");
HAnimSite339->addChildren(*TouchSensor340);

CShape* Shape341 = (CShape *)(m_pScene.createNode("Shape"));
Shape341->setUSE("HAnimSiteShape");
HAnimSite339->addChildren(*Shape341);

HAnimSegment309->addChildren(*HAnimSite339);

CHAnimSite* HAnimSite342 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite342->setName("r_calcaneous_post_pt");
HAnimSite342->setDEF("hanim_r_calcaneous_post_pt");
HAnimSite342->setTranslation(new float[3]{-0.0692,0.0297,-0.1221});
//HAnimSite visualization shape
CTouchSensor* TouchSensor343 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor343->setDescription("HAnimSite r_calcaneous_post");
HAnimSite342->addChildren(*TouchSensor343);

CShape* Shape344 = (CShape *)(m_pScene.createNode("Shape"));
Shape344->setUSE("HAnimSiteShape");
HAnimSite342->addChildren(*Shape344);

HAnimSegment309->addChildren(*HAnimSite342);

HAnimJoint308->addChildren(*HAnimSegment309);

CHAnimJoint* HAnimJoint345 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint345->setName("r_subtalar");
HAnimJoint345->setDEF("hanim_r_subtalar");
HAnimJoint345->setCenter(new float[3]{-0.1086,0.0001,-0.0368});
HAnimJoint345->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment346 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment346->setName("r_midproximal");
HAnimSegment346->setDEF("hanim_r_midproximal");
//<HAnimJoint name='r_subtalar'/> visualization sphere within <HAnimSegment name='r_midproximal'/>
CTouchSensor* TouchSensor347 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor347->setDescription("HAnimJoint r_subtalar, HAnimSegment r_midproximal");
HAnimSegment346->addChildren(*TouchSensor347);

CTransform* Transform348 = (CTransform *)(m_pScene.createNode("Transform"));
Transform348->setTranslation(new float[3]{-0.1086,0.0001,-0.0368});
CShape* Shape349 = (CShape *)(m_pScene.createNode("Shape"));
Shape349->setUSE("HAnimJointShape");
Transform348->addChildren(*Shape349);

HAnimSegment346->addChildren(*Transform348);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_subtalar'/> to <HAnimJoint name='r_midtarsal'/>
CShape* Shape350 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet351 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet351->setVertexCount(new int[1]{2});
CCoordinate* Coordinate352 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate352->setPoint(new float[6]{-0.1086,0.0001,-0.0368,-0.1086,0.0001,0.0368});
LineSet351->setCoord(*Coordinate352);

CColorRGBA* ColorRGBA353 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA353->setUSE("HAnimSegmentLineColorRGBA");
LineSet351->setColor(*ColorRGBA353);

Shape350->setGeometry(LineSet351);

HAnimSegment346->addChildren(*Shape350);

HAnimJoint345->addChildren(*HAnimSegment346);

CHAnimJoint* HAnimJoint354 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint354->setName("r_midtarsal");
HAnimJoint354->setDEF("hanim_r_midtarsal");
HAnimJoint354->setCenter(new float[3]{-0.1086,0.0001,0.0368});
HAnimJoint354->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment355 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment355->setName("r_middistal");
HAnimSegment355->setDEF("hanim_r_middistal");
//<HAnimJoint name='r_midtarsal'/> visualization sphere within <HAnimSegment name='r_middistal'/>
CTouchSensor* TouchSensor356 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor356->setDescription("HAnimJoint r_midtarsal, HAnimSegment r_middistal");
HAnimSegment355->addChildren(*TouchSensor356);

CTransform* Transform357 = (CTransform *)(m_pScene.createNode("Transform"));
Transform357->setTranslation(new float[3]{-0.1086,0.0001,0.0368});
CShape* Shape358 = (CShape *)(m_pScene.createNode("Shape"));
Shape358->setUSE("HAnimJointShape");
Transform357->addChildren(*Shape358);

HAnimSegment355->addChildren(*Transform357);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_midtarsal'/> to <HAnimJoint name='r_metatarsal'/>
CShape* Shape359 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet360 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet360->setVertexCount(new int[1]{2});
CCoordinate* Coordinate361 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate361->setPoint(new float[6]{-0.1086,0.0001,0.0368,-0.1086,0,0.0762});
LineSet360->setCoord(*Coordinate361);

CColorRGBA* ColorRGBA362 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA362->setUSE("HAnimSegmentLineColorRGBA");
LineSet360->setColor(*ColorRGBA362);

Shape359->setGeometry(LineSet360);

HAnimSegment355->addChildren(*Shape359);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_midtarsal'/> to <HAnimSite name='r_metatarsal_pha1'/>
CShape* Shape363 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet364 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet364->setVertexCount(new int[1]{2});
CCoordinate* Coordinate365 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate365->setPoint(new float[6]{-0.1086,0.0001,0.0368,-0.0521,0.026,0.0127});
LineSet364->setCoord(*Coordinate365);

CColorRGBA* ColorRGBA366 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA366->setUSE("HAnimSiteLineColorRGBA");
LineSet364->setColor(*ColorRGBA366);

Shape363->setGeometry(LineSet364);

HAnimSegment355->addChildren(*Shape363);

CHAnimSite* HAnimSite367 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite367->setName("r_metatarsal_pha1_pt");
HAnimSite367->setDEF("hanim_r_metatarsal_pha1_pt");
HAnimSite367->setTranslation(new float[3]{-0.0521,0.026,0.0127});
//HAnimSite visualization shape
CTouchSensor* TouchSensor368 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor368->setDescription("HAnimSite r_metatarsal_pha1");
HAnimSite367->addChildren(*TouchSensor368);

CShape* Shape369 = (CShape *)(m_pScene.createNode("Shape"));
Shape369->setUSE("HAnimSiteShape");
HAnimSite367->addChildren(*Shape369);

HAnimSegment355->addChildren(*HAnimSite367);

HAnimJoint354->addChildren(*HAnimSegment355);

CHAnimJoint* HAnimJoint370 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint370->setName("r_metatarsal");
HAnimJoint370->setDEF("hanim_r_metatarsal");
HAnimJoint370->setCenter(new float[3]{-0.1086,0,0.0762});
HAnimJoint370->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment371 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment371->setName("r_forefoot");
HAnimSegment371->setDEF("hanim_r_forefoot");
//<HAnimJoint name='r_metatarsal'/> visualization sphere within <HAnimSegment name='r_forefoot'/>
CTouchSensor* TouchSensor372 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor372->setDescription("HAnimJoint r_metatarsal, HAnimSegment r_forefoot");
HAnimSegment371->addChildren(*TouchSensor372);

CTransform* Transform373 = (CTransform *)(m_pScene.createNode("Transform"));
Transform373->setTranslation(new float[3]{-0.1086,0,0.0762});
CShape* Shape374 = (CShape *)(m_pScene.createNode("Shape"));
Shape374->setUSE("HAnimJointShape");
Transform373->addChildren(*Shape374);

HAnimSegment371->addChildren(*Transform373);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_forefoot_tip'/>
CShape* Shape375 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet376 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet376->setVertexCount(new int[1]{2});
CCoordinate* Coordinate377 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate377->setPoint(new float[6]{-0.1086,0,0.0762,-0.1043,0.0227,0.145});
LineSet376->setCoord(*Coordinate377);

CColorRGBA* ColorRGBA378 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA378->setUSE("HAnimSiteLineColorRGBA");
LineSet376->setColor(*ColorRGBA378);

Shape375->setGeometry(LineSet376);

HAnimSegment371->addChildren(*Shape375);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_metatarsal_pha5'/>
CShape* Shape379 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet380 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet380->setVertexCount(new int[1]{2});
CCoordinate* Coordinate381 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate381->setPoint(new float[6]{-0.1086,0,0.0762,-0.1523,0.0166,0.0895});
LineSet380->setCoord(*Coordinate381);

CColorRGBA* ColorRGBA382 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA382->setUSE("HAnimSiteLineColorRGBA");
LineSet380->setColor(*ColorRGBA382);

Shape379->setGeometry(LineSet380);

HAnimSegment371->addChildren(*Shape379);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_digit2'/>
CShape* Shape383 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet384 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet384->setVertexCount(new int[1]{2});
CCoordinate* Coordinate385 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate385->setPoint(new float[6]{-0.1086,0,0.0762,-0.0883,0.0134,0.1383});
LineSet384->setCoord(*Coordinate385);

CColorRGBA* ColorRGBA386 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA386->setUSE("HAnimSiteLineColorRGBA");
LineSet384->setColor(*ColorRGBA386);

Shape383->setGeometry(LineSet384);

HAnimSegment371->addChildren(*Shape383);

CHAnimSite* HAnimSite387 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite387->setName("r_forefoot_tip");
HAnimSite387->setDEF("hanim_r_forefoot_tip");
HAnimSite387->setTranslation(new float[3]{-0.1043,0.0227,0.145});
//HAnimSite visualization shape
CTouchSensor* TouchSensor388 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor388->setDescription("HAnimSite r_forefoot_tip");
HAnimSite387->addChildren(*TouchSensor388);

CShape* Shape389 = (CShape *)(m_pScene.createNode("Shape"));
Shape389->setUSE("HAnimSiteShape");
HAnimSite387->addChildren(*Shape389);

HAnimSegment371->addChildren(*HAnimSite387);

CHAnimSite* HAnimSite390 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite390->setName("r_metatarsal_pha5_pt");
HAnimSite390->setDEF("hanim_r_metatarsal_pha5_pt");
HAnimSite390->setTranslation(new float[3]{-0.1523,0.0166,0.0895});
//HAnimSite visualization shape
CTouchSensor* TouchSensor391 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor391->setDescription("HAnimSite r_metatarsal_pha5");
HAnimSite390->addChildren(*TouchSensor391);

CShape* Shape392 = (CShape *)(m_pScene.createNode("Shape"));
Shape392->setUSE("HAnimSiteShape");
HAnimSite390->addChildren(*Shape392);

HAnimSegment371->addChildren(*HAnimSite390);

CHAnimSite* HAnimSite393 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite393->setName("r_digit2_pt");
HAnimSite393->setDEF("hanim_r_digit2_pt");
HAnimSite393->setTranslation(new float[3]{-0.0883,0.0134,0.1383});
//HAnimSite visualization shape
CTouchSensor* TouchSensor394 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor394->setDescription("HAnimSite r_digit2");
HAnimSite393->addChildren(*TouchSensor394);

CShape* Shape395 = (CShape *)(m_pScene.createNode("Shape"));
Shape395->setUSE("HAnimSiteShape");
HAnimSite393->addChildren(*Shape395);

HAnimSegment371->addChildren(*HAnimSite393);

HAnimJoint370->addChildren(*HAnimSegment371);

HAnimJoint354->addChildren(*HAnimJoint370);

HAnimJoint345->addChildren(*HAnimJoint354);

HAnimJoint308->addChildren(*HAnimJoint345);

HAnimJoint299->addChildren(*HAnimJoint308);

HAnimJoint269->addChildren(*HAnimJoint299);

HAnimJoint62->addChildren(*HAnimJoint269);

HAnimJoint46->addChildren(*HAnimJoint62);

CHAnimJoint* HAnimJoint396 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint396->setName("vl5");
HAnimJoint396->setDEF("hanim_vl5");
HAnimJoint396->setCenter(new float[3]{0.0028,1.0568,-0.0776});
HAnimJoint396->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment397 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment397->setName("l5");
HAnimSegment397->setDEF("hanim_l5");
//<HAnimJoint name='vl5'/> visualization sphere within <HAnimSegment name='l5'/>
CTouchSensor* TouchSensor398 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor398->setDescription("HAnimJoint vl5, HAnimSegment l5");
HAnimSegment397->addChildren(*TouchSensor398);

CTransform* Transform399 = (CTransform *)(m_pScene.createNode("Transform"));
Transform399->setTranslation(new float[3]{0.0028,1.0568,-0.0776});
CShape* Shape400 = (CShape *)(m_pScene.createNode("Shape"));
Shape400->setUSE("HAnimJointShape");
Transform399->addChildren(*Shape400);

HAnimSegment397->addChildren(*Transform399);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl5'/> to <HAnimJoint name='vl4'/>
CShape* Shape401 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet402 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet402->setVertexCount(new int[1]{2});
CCoordinate* Coordinate403 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate403->setPoint(new float[6]{0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787});
LineSet402->setCoord(*Coordinate403);

CColorRGBA* ColorRGBA404 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA404->setUSE("HAnimSegmentLineColorRGBA");
LineSet402->setColor(*ColorRGBA404);

Shape401->setGeometry(LineSet402);

HAnimSegment397->addChildren(*Shape401);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='waist_preferred_post'/>
CShape* Shape405 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet406 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet406->setVertexCount(new int[1]{2});
CCoordinate* Coordinate407 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate407->setPoint(new float[6]{0.0028,1.0568,-0.0776,0,1.0915,-0.1091});
LineSet406->setCoord(*Coordinate407);

CColorRGBA* ColorRGBA408 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA408->setUSE("HAnimSiteLineColorRGBA");
LineSet406->setColor(*ColorRGBA408);

Shape405->setGeometry(LineSet406);

HAnimSegment397->addChildren(*Shape405);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='navel'/>
CShape* Shape409 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet410 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet410->setVertexCount(new int[1]{2});
CCoordinate* Coordinate411 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate411->setPoint(new float[6]{0.0028,1.0568,-0.0776,0.0069,1.0966,0.1017});
LineSet410->setCoord(*Coordinate411);

CColorRGBA* ColorRGBA412 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA412->setUSE("HAnimSiteLineColorRGBA");
LineSet410->setColor(*ColorRGBA412);

Shape409->setGeometry(LineSet410);

HAnimSegment397->addChildren(*Shape409);

CHAnimSite* HAnimSite413 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite413->setName("waist_preferred_post_pt");
HAnimSite413->setDEF("hanim_waist_preferred_post_pt");
HAnimSite413->setTranslation(new float[3]{0,1.0915,-0.1091});
//HAnimSite visualization shape
CTouchSensor* TouchSensor414 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor414->setDescription("HAnimSite waist_preferred_post");
HAnimSite413->addChildren(*TouchSensor414);

CShape* Shape415 = (CShape *)(m_pScene.createNode("Shape"));
Shape415->setUSE("HAnimSiteShape");
HAnimSite413->addChildren(*Shape415);

HAnimSegment397->addChildren(*HAnimSite413);

CHAnimSite* HAnimSite416 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite416->setName("navel_pt");
HAnimSite416->setDEF("hanim_navel_pt");
HAnimSite416->setTranslation(new float[3]{0.0069,1.0966,0.1017});
//HAnimSite visualization shape
CTouchSensor* TouchSensor417 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor417->setDescription("HAnimSite navel");
HAnimSite416->addChildren(*TouchSensor417);

CShape* Shape418 = (CShape *)(m_pScene.createNode("Shape"));
Shape418->setUSE("HAnimSiteShape");
HAnimSite416->addChildren(*Shape418);

HAnimSegment397->addChildren(*HAnimSite416);

HAnimJoint396->addChildren(*HAnimSegment397);

CHAnimJoint* HAnimJoint419 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint419->setName("vl4");
HAnimJoint419->setDEF("hanim_vl4");
HAnimJoint419->setCenter(new float[3]{0.0035,1.0925,-0.0787});
HAnimJoint419->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment420 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment420->setName("l4");
HAnimSegment420->setDEF("hanim_l4");
//<HAnimJoint name='vl4'/> visualization sphere within <HAnimSegment name='l4'/>
CTouchSensor* TouchSensor421 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor421->setDescription("HAnimJoint vl4, HAnimSegment l4");
HAnimSegment420->addChildren(*TouchSensor421);

CTransform* Transform422 = (CTransform *)(m_pScene.createNode("Transform"));
Transform422->setTranslation(new float[3]{0.0035,1.0925,-0.0787});
CShape* Shape423 = (CShape *)(m_pScene.createNode("Shape"));
Shape423->setUSE("HAnimJointShape");
Transform422->addChildren(*Shape423);

HAnimSegment420->addChildren(*Transform422);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl4'/> to <HAnimJoint name='vl3'/>
CShape* Shape424 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet425 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet425->setVertexCount(new int[1]{2});
CCoordinate* Coordinate426 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate426->setPoint(new float[6]{0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796});
LineSet425->setCoord(*Coordinate426);

CColorRGBA* ColorRGBA427 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA427->setUSE("HAnimSegmentLineColorRGBA");
LineSet425->setColor(*ColorRGBA427);

Shape424->setGeometry(LineSet425);

HAnimSegment420->addChildren(*Shape424);

HAnimJoint419->addChildren(*HAnimSegment420);

CHAnimJoint* HAnimJoint428 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint428->setName("vl3");
HAnimJoint428->setDEF("hanim_vl3");
HAnimJoint428->setCenter(new float[3]{0.0041,1.1276,-0.0796});
HAnimJoint428->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment429 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment429->setName("l3");
HAnimSegment429->setDEF("hanim_l3");
//<HAnimJoint name='vl3'/> visualization sphere within <HAnimSegment name='l3'/>
CTouchSensor* TouchSensor430 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor430->setDescription("HAnimJoint vl3, HAnimSegment l3");
HAnimSegment429->addChildren(*TouchSensor430);

CTransform* Transform431 = (CTransform *)(m_pScene.createNode("Transform"));
Transform431->setTranslation(new float[3]{0.0041,1.1276,-0.0796});
CShape* Shape432 = (CShape *)(m_pScene.createNode("Shape"));
Shape432->setUSE("HAnimJointShape");
Transform431->addChildren(*Shape432);

HAnimSegment429->addChildren(*Transform431);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl3'/> to <HAnimJoint name='vl2'/>
CShape* Shape433 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet434 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet434->setVertexCount(new int[1]{2});
CCoordinate* Coordinate435 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate435->setPoint(new float[6]{0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08});
LineSet434->setCoord(*Coordinate435);

CColorRGBA* ColorRGBA436 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA436->setUSE("HAnimSegmentLineColorRGBA");
LineSet434->setColor(*ColorRGBA436);

Shape433->setGeometry(LineSet434);

HAnimSegment429->addChildren(*Shape433);

HAnimJoint428->addChildren(*HAnimSegment429);

CHAnimJoint* HAnimJoint437 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint437->setName("vl2");
HAnimJoint437->setDEF("hanim_vl2");
HAnimJoint437->setCenter(new float[3]{0.0045,1.1546,-0.08});
HAnimJoint437->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment438 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment438->setName("l2");
HAnimSegment438->setDEF("hanim_l2");
//<HAnimJoint name='vl2'/> visualization sphere within <HAnimSegment name='l2'/>
CTouchSensor* TouchSensor439 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor439->setDescription("HAnimJoint vl2, HAnimSegment l2");
HAnimSegment438->addChildren(*TouchSensor439);

CTransform* Transform440 = (CTransform *)(m_pScene.createNode("Transform"));
Transform440->setTranslation(new float[3]{0.0045,1.1546,-0.08});
CShape* Shape441 = (CShape *)(m_pScene.createNode("Shape"));
Shape441->setUSE("HAnimJointShape");
Transform440->addChildren(*Shape441);

HAnimSegment438->addChildren(*Transform440);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl2'/> to <HAnimJoint name='vl1'/>
CShape* Shape442 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet443 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet443->setVertexCount(new int[1]{2});
CCoordinate* Coordinate444 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate444->setPoint(new float[6]{0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805});
LineSet443->setCoord(*Coordinate444);

CColorRGBA* ColorRGBA445 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA445->setUSE("HAnimSegmentLineColorRGBA");
LineSet443->setColor(*ColorRGBA445);

Shape442->setGeometry(LineSet443);

HAnimSegment438->addChildren(*Shape442);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='r_rib10'/>
CShape* Shape446 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet447 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet447->setVertexCount(new int[1]{2});
CCoordinate* Coordinate448 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate448->setPoint(new float[6]{0.0045,1.1546,-0.08,-0.0711,1.1941,0.1016});
LineSet447->setCoord(*Coordinate448);

CColorRGBA* ColorRGBA449 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA449->setUSE("HAnimSiteLineColorRGBA");
LineSet447->setColor(*ColorRGBA449);

Shape446->setGeometry(LineSet447);

HAnimSegment438->addChildren(*Shape446);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='l_rib10'/>
CShape* Shape450 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet451 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet451->setVertexCount(new int[1]{2});
CCoordinate* Coordinate452 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate452->setPoint(new float[6]{0.0045,1.1546,-0.08,0.0871,1.1925,0.0992});
LineSet451->setCoord(*Coordinate452);

CColorRGBA* ColorRGBA453 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA453->setUSE("HAnimSiteLineColorRGBA");
LineSet451->setColor(*ColorRGBA453);

Shape450->setGeometry(LineSet451);

HAnimSegment438->addChildren(*Shape450);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='rib10_midspine'/>
CShape* Shape454 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet455 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet455->setVertexCount(new int[1]{2});
CCoordinate* Coordinate456 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate456->setPoint(new float[6]{0.0045,1.1546,-0.08,0.0049,1.1908,-0.1113});
LineSet455->setCoord(*Coordinate456);

CColorRGBA* ColorRGBA457 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA457->setUSE("HAnimSiteLineColorRGBA");
LineSet455->setColor(*ColorRGBA457);

Shape454->setGeometry(LineSet455);

HAnimSegment438->addChildren(*Shape454);

CHAnimSite* HAnimSite458 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite458->setName("r_rib10_pt");
HAnimSite458->setDEF("hanim_r_rib10_pt");
HAnimSite458->setTranslation(new float[3]{-0.0711,1.1941,0.1016});
//HAnimSite visualization shape
CTouchSensor* TouchSensor459 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor459->setDescription("HAnimSite r_rib10");
HAnimSite458->addChildren(*TouchSensor459);

CShape* Shape460 = (CShape *)(m_pScene.createNode("Shape"));
Shape460->setUSE("HAnimSiteShape");
HAnimSite458->addChildren(*Shape460);

HAnimSegment438->addChildren(*HAnimSite458);

CHAnimSite* HAnimSite461 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite461->setName("l_rib10_pt");
HAnimSite461->setDEF("hanim_l_rib10_pt");
HAnimSite461->setTranslation(new float[3]{0.0871,1.1925,0.0992});
//HAnimSite visualization shape
CTouchSensor* TouchSensor462 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor462->setDescription("HAnimSite l_rib10");
HAnimSite461->addChildren(*TouchSensor462);

CShape* Shape463 = (CShape *)(m_pScene.createNode("Shape"));
Shape463->setUSE("HAnimSiteShape");
HAnimSite461->addChildren(*Shape463);

HAnimSegment438->addChildren(*HAnimSite461);

CHAnimSite* HAnimSite464 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite464->setName("rib10_midspine_pt");
HAnimSite464->setDEF("hanim_rib10_midspine_pt");
HAnimSite464->setTranslation(new float[3]{0.0049,1.1908,-0.1113});
//HAnimSite visualization shape
CTouchSensor* TouchSensor465 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor465->setDescription("HAnimSite rib10_midspine");
HAnimSite464->addChildren(*TouchSensor465);

CShape* Shape466 = (CShape *)(m_pScene.createNode("Shape"));
Shape466->setUSE("HAnimSiteShape");
HAnimSite464->addChildren(*Shape466);

HAnimSegment438->addChildren(*HAnimSite464);

HAnimJoint437->addChildren(*HAnimSegment438);

CHAnimJoint* HAnimJoint467 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint467->setName("vl1");
HAnimJoint467->setDEF("hanim_vl1");
HAnimJoint467->setCenter(new float[3]{0.0048,1.1912,-0.0805});
HAnimJoint467->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment468 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment468->setName("l1");
HAnimSegment468->setDEF("hanim_l1");
//<HAnimJoint name='vl1'/> visualization sphere within <HAnimSegment name='l1'/>
CTouchSensor* TouchSensor469 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor469->setDescription("HAnimJoint vl1, HAnimSegment l1");
HAnimSegment468->addChildren(*TouchSensor469);

CTransform* Transform470 = (CTransform *)(m_pScene.createNode("Transform"));
Transform470->setTranslation(new float[3]{0.0048,1.1912,-0.0805});
CShape* Shape471 = (CShape *)(m_pScene.createNode("Shape"));
Shape471->setUSE("HAnimJointShape");
Transform470->addChildren(*Shape471);

HAnimSegment468->addChildren(*Transform470);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl1'/> to <HAnimJoint name='vt12'/>
CShape* Shape472 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet473 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet473->setVertexCount(new int[1]{2});
CCoordinate* Coordinate474 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate474->setPoint(new float[6]{0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808});
LineSet473->setCoord(*Coordinate474);

CColorRGBA* ColorRGBA475 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA475->setUSE("HAnimSegmentLineColorRGBA");
LineSet473->setColor(*ColorRGBA475);

Shape472->setGeometry(LineSet473);

HAnimSegment468->addChildren(*Shape472);

HAnimJoint467->addChildren(*HAnimSegment468);

CHAnimJoint* HAnimJoint476 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint476->setName("vt12");
HAnimJoint476->setDEF("hanim_vt12");
HAnimJoint476->setCenter(new float[3]{0.0051,1.2278,-0.0808});
HAnimJoint476->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment477 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment477->setName("t12");
HAnimSegment477->setDEF("hanim_t12");
//<HAnimJoint name='vt12'/> visualization sphere within <HAnimSegment name='t12'/>
CTouchSensor* TouchSensor478 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor478->setDescription("HAnimJoint vt12, HAnimSegment t12");
HAnimSegment477->addChildren(*TouchSensor478);

CTransform* Transform479 = (CTransform *)(m_pScene.createNode("Transform"));
Transform479->setTranslation(new float[3]{0.0051,1.2278,-0.0808});
CShape* Shape480 = (CShape *)(m_pScene.createNode("Shape"));
Shape480->setUSE("HAnimJointShape");
Transform479->addChildren(*Shape480);

HAnimSegment477->addChildren(*Transform479);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt12'/> to <HAnimJoint name='vt11'/>
CShape* Shape481 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet482 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet482->setVertexCount(new int[1]{2});
CCoordinate* Coordinate483 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate483->setPoint(new float[6]{0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081});
LineSet482->setCoord(*Coordinate483);

CColorRGBA* ColorRGBA484 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA484->setUSE("HAnimSegmentLineColorRGBA");
LineSet482->setColor(*ColorRGBA484);

Shape481->setGeometry(LineSet482);

HAnimSegment477->addChildren(*Shape481);

HAnimJoint476->addChildren(*HAnimSegment477);

CHAnimJoint* HAnimJoint485 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint485->setName("vt11");
HAnimJoint485->setDEF("hanim_vt11");
HAnimJoint485->setCenter(new float[3]{0.0053,1.2679,-0.081});
HAnimJoint485->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment486 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment486->setName("t11");
HAnimSegment486->setDEF("hanim_t11");
//<HAnimJoint name='vt11'/> visualization sphere within <HAnimSegment name='t11'/>
CTouchSensor* TouchSensor487 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor487->setDescription("HAnimJoint vt11, HAnimSegment t11");
HAnimSegment486->addChildren(*TouchSensor487);

CTransform* Transform488 = (CTransform *)(m_pScene.createNode("Transform"));
Transform488->setTranslation(new float[3]{0.0053,1.2679,-0.081});
CShape* Shape489 = (CShape *)(m_pScene.createNode("Shape"));
Shape489->setUSE("HAnimJointShape");
Transform488->addChildren(*Shape489);

HAnimSegment486->addChildren(*Transform488);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt11'/> to <HAnimJoint name='vt10'/>
CShape* Shape490 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet491 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet491->setVertexCount(new int[1]{2});
CCoordinate* Coordinate492 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate492->setPoint(new float[6]{0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822});
LineSet491->setCoord(*Coordinate492);

CColorRGBA* ColorRGBA493 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA493->setUSE("HAnimSegmentLineColorRGBA");
LineSet491->setColor(*ColorRGBA493);

Shape490->setGeometry(LineSet491);

HAnimSegment486->addChildren(*Shape490);

HAnimJoint485->addChildren(*HAnimSegment486);

CHAnimJoint* HAnimJoint494 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint494->setName("vt10");
HAnimJoint494->setDEF("hanim_vt10");
HAnimJoint494->setCenter(new float[3]{0.0056,1.2848,-0.0822});
HAnimJoint494->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment495 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment495->setName("t10");
HAnimSegment495->setDEF("hanim_t10");
//<HAnimJoint name='vt10'/> visualization sphere within <HAnimSegment name='t10'/>
CTouchSensor* TouchSensor496 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor496->setDescription("HAnimJoint vt10, HAnimSegment t10");
HAnimSegment495->addChildren(*TouchSensor496);

CTransform* Transform497 = (CTransform *)(m_pScene.createNode("Transform"));
Transform497->setTranslation(new float[3]{0.0056,1.2848,-0.0822});
CShape* Shape498 = (CShape *)(m_pScene.createNode("Shape"));
Shape498->setUSE("HAnimJointShape");
Transform497->addChildren(*Shape498);

HAnimSegment495->addChildren(*Transform497);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt10'/> to <HAnimJoint name='vt9'/>
CShape* Shape499 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet500 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet500->setVertexCount(new int[1]{2});
CCoordinate* Coordinate501 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate501->setPoint(new float[6]{0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838});
LineSet500->setCoord(*Coordinate501);

CColorRGBA* ColorRGBA502 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA502->setUSE("HAnimSegmentLineColorRGBA");
LineSet500->setColor(*ColorRGBA502);

Shape499->setGeometry(LineSet500);

HAnimSegment495->addChildren(*Shape499);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt10'/> to <HAnimSite name='substernale'/>
CShape* Shape503 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet504 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet504->setVertexCount(new int[1]{2});
CCoordinate* Coordinate505 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate505->setPoint(new float[6]{0.0056,1.2848,-0.0822,0.0085,1.2995,0.1147});
LineSet504->setCoord(*Coordinate505);

CColorRGBA* ColorRGBA506 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA506->setUSE("HAnimSiteLineColorRGBA");
LineSet504->setColor(*ColorRGBA506);

Shape503->setGeometry(LineSet504);

HAnimSegment495->addChildren(*Shape503);

CHAnimSite* HAnimSite507 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite507->setName("substernale_pt");
HAnimSite507->setDEF("hanim_substernale_pt");
HAnimSite507->setTranslation(new float[3]{0.0085,1.2995,0.1147});
//HAnimSite visualization shape
CTouchSensor* TouchSensor508 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor508->setDescription("HAnimSite substernale");
HAnimSite507->addChildren(*TouchSensor508);

CShape* Shape509 = (CShape *)(m_pScene.createNode("Shape"));
Shape509->setUSE("HAnimSiteShape");
HAnimSite507->addChildren(*Shape509);

HAnimSegment495->addChildren(*HAnimSite507);

HAnimJoint494->addChildren(*HAnimSegment495);

CHAnimJoint* HAnimJoint510 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint510->setName("vt9");
HAnimJoint510->setDEF("hanim_vt9");
HAnimJoint510->setCenter(new float[3]{0.0057,1.3126,-0.0838});
HAnimJoint510->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment511 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment511->setName("t9");
HAnimSegment511->setDEF("hanim_t9");
//<HAnimJoint name='vt9'/> visualization sphere within <HAnimSegment name='t9'/>
CTouchSensor* TouchSensor512 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor512->setDescription("HAnimJoint vt9, HAnimSegment t9");
HAnimSegment511->addChildren(*TouchSensor512);

CTransform* Transform513 = (CTransform *)(m_pScene.createNode("Transform"));
Transform513->setTranslation(new float[3]{0.0057,1.3126,-0.0838});
CShape* Shape514 = (CShape *)(m_pScene.createNode("Shape"));
Shape514->setUSE("HAnimJointShape");
Transform513->addChildren(*Shape514);

HAnimSegment511->addChildren(*Transform513);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt9'/> to <HAnimJoint name='vt8'/>
CShape* Shape515 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet516 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet516->setVertexCount(new int[1]{2});
CCoordinate* Coordinate517 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate517->setPoint(new float[6]{0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845});
LineSet516->setCoord(*Coordinate517);

CColorRGBA* ColorRGBA518 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA518->setUSE("HAnimSegmentLineColorRGBA");
LineSet516->setColor(*ColorRGBA518);

Shape515->setGeometry(LineSet516);

HAnimSegment511->addChildren(*Shape515);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='r_thelion'/>
CShape* Shape519 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet520 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet520->setVertexCount(new int[1]{2});
CCoordinate* Coordinate521 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate521->setPoint(new float[6]{0.0057,1.3126,-0.0838,-0.0736,1.3385,0.1217});
LineSet520->setCoord(*Coordinate521);

CColorRGBA* ColorRGBA522 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA522->setUSE("HAnimSiteLineColorRGBA");
LineSet520->setColor(*ColorRGBA522);

Shape519->setGeometry(LineSet520);

HAnimSegment511->addChildren(*Shape519);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='l_thelion'/>
CShape* Shape523 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet524 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet524->setVertexCount(new int[1]{2});
CCoordinate* Coordinate525 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate525->setPoint(new float[6]{0.0057,1.3126,-0.0838,0.0918,1.3382,0.1192});
LineSet524->setCoord(*Coordinate525);

CColorRGBA* ColorRGBA526 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA526->setUSE("HAnimSiteLineColorRGBA");
LineSet524->setColor(*ColorRGBA526);

Shape523->setGeometry(LineSet524);

HAnimSegment511->addChildren(*Shape523);

CHAnimSite* HAnimSite527 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite527->setName("r_thelion_pt");
HAnimSite527->setDEF("hanim_r_thelion_pt");
HAnimSite527->setTranslation(new float[3]{-0.0736,1.3385,0.1217});
//HAnimSite visualization shape
CTouchSensor* TouchSensor528 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor528->setDescription("HAnimSite r_thelion");
HAnimSite527->addChildren(*TouchSensor528);

CShape* Shape529 = (CShape *)(m_pScene.createNode("Shape"));
Shape529->setUSE("HAnimSiteShape");
HAnimSite527->addChildren(*Shape529);

HAnimSegment511->addChildren(*HAnimSite527);

CHAnimSite* HAnimSite530 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite530->setName("l_thelion_pt");
HAnimSite530->setDEF("hanim_l_thelion_pt");
HAnimSite530->setTranslation(new float[3]{0.0918,1.3382,0.1192});
//HAnimSite visualization shape
CTouchSensor* TouchSensor531 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor531->setDescription("HAnimSite l_thelion");
HAnimSite530->addChildren(*TouchSensor531);

CShape* Shape532 = (CShape *)(m_pScene.createNode("Shape"));
Shape532->setUSE("HAnimSiteShape");
HAnimSite530->addChildren(*Shape532);

HAnimSegment511->addChildren(*HAnimSite530);

HAnimJoint510->addChildren(*HAnimSegment511);

CHAnimJoint* HAnimJoint533 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint533->setName("vt8");
HAnimJoint533->setDEF("hanim_vt8");
HAnimJoint533->setCenter(new float[3]{0.0057,1.3382,-0.0845});
HAnimJoint533->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment534 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment534->setName("t8");
HAnimSegment534->setDEF("hanim_t8");
//<HAnimJoint name='vt8'/> visualization sphere within <HAnimSegment name='t8'/>
CTouchSensor* TouchSensor535 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor535->setDescription("HAnimJoint vt8, HAnimSegment t8");
HAnimSegment534->addChildren(*TouchSensor535);

CTransform* Transform536 = (CTransform *)(m_pScene.createNode("Transform"));
Transform536->setTranslation(new float[3]{0.0057,1.3382,-0.0845});
CShape* Shape537 = (CShape *)(m_pScene.createNode("Shape"));
Shape537->setUSE("HAnimJointShape");
Transform536->addChildren(*Shape537);

HAnimSegment534->addChildren(*Transform536);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt8'/> to <HAnimJoint name='vt7'/>
CShape* Shape538 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet539 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet539->setVertexCount(new int[1]{2});
CCoordinate* Coordinate540 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate540->setPoint(new float[6]{0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833});
LineSet539->setCoord(*Coordinate540);

CColorRGBA* ColorRGBA541 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA541->setUSE("HAnimSegmentLineColorRGBA");
LineSet539->setColor(*ColorRGBA541);

Shape538->setGeometry(LineSet539);

HAnimSegment534->addChildren(*Shape538);

HAnimJoint533->addChildren(*HAnimSegment534);

CHAnimJoint* HAnimJoint542 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint542->setName("vt7");
HAnimJoint542->setDEF("hanim_vt7");
HAnimJoint542->setCenter(new float[3]{0.0058,1.3625,-0.0833});
HAnimJoint542->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment543 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment543->setName("t7");
HAnimSegment543->setDEF("hanim_t7");
//<HAnimJoint name='vt7'/> visualization sphere within <HAnimSegment name='t7'/>
CTouchSensor* TouchSensor544 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor544->setDescription("HAnimJoint vt7, HAnimSegment t7");
HAnimSegment543->addChildren(*TouchSensor544);

CTransform* Transform545 = (CTransform *)(m_pScene.createNode("Transform"));
Transform545->setTranslation(new float[3]{0.0058,1.3625,-0.0833});
CShape* Shape546 = (CShape *)(m_pScene.createNode("Shape"));
Shape546->setUSE("HAnimJointShape");
Transform545->addChildren(*Shape546);

HAnimSegment543->addChildren(*Transform545);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt7'/> to <HAnimJoint name='vt6'/>
CShape* Shape547 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet548 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet548->setVertexCount(new int[1]{2});
CCoordinate* Coordinate549 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate549->setPoint(new float[6]{0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08});
LineSet548->setCoord(*Coordinate549);

CColorRGBA* ColorRGBA550 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA550->setUSE("HAnimSegmentLineColorRGBA");
LineSet548->setColor(*ColorRGBA550);

Shape547->setGeometry(LineSet548);

HAnimSegment543->addChildren(*Shape547);

HAnimJoint542->addChildren(*HAnimSegment543);

CHAnimJoint* HAnimJoint551 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint551->setName("vt6");
HAnimJoint551->setDEF("hanim_vt6");
HAnimJoint551->setCenter(new float[3]{0.0059,1.3866,-0.08});
HAnimJoint551->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment552 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment552->setName("t6");
HAnimSegment552->setDEF("hanim_t6");
//<HAnimJoint name='vt6'/> visualization sphere within <HAnimSegment name='t6'/>
CTouchSensor* TouchSensor553 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor553->setDescription("HAnimJoint vt6, HAnimSegment t6");
HAnimSegment552->addChildren(*TouchSensor553);

CTransform* Transform554 = (CTransform *)(m_pScene.createNode("Transform"));
Transform554->setTranslation(new float[3]{0.0059,1.3866,-0.08});
CShape* Shape555 = (CShape *)(m_pScene.createNode("Shape"));
Shape555->setUSE("HAnimJointShape");
Transform554->addChildren(*Shape555);

HAnimSegment552->addChildren(*Transform554);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt6'/> to <HAnimJoint name='vt5'/>
CShape* Shape556 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet557 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet557->setVertexCount(new int[1]{2});
CCoordinate* Coordinate558 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate558->setPoint(new float[6]{0.0059,1.3866,-0.08,0.006,1.4102,-0.0745});
LineSet557->setCoord(*Coordinate558);

CColorRGBA* ColorRGBA559 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA559->setUSE("HAnimSegmentLineColorRGBA");
LineSet557->setColor(*ColorRGBA559);

Shape556->setGeometry(LineSet557);

HAnimSegment552->addChildren(*Shape556);

HAnimJoint551->addChildren(*HAnimSegment552);

CHAnimJoint* HAnimJoint560 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint560->setName("vt5");
HAnimJoint560->setDEF("hanim_vt5");
HAnimJoint560->setCenter(new float[3]{0.006,1.4102,-0.0745});
HAnimJoint560->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment561 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment561->setName("t5");
HAnimSegment561->setDEF("hanim_t5");
//<HAnimJoint name='vt5'/> visualization sphere within <HAnimSegment name='t5'/>
CTouchSensor* TouchSensor562 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor562->setDescription("HAnimJoint vt5, HAnimSegment t5");
HAnimSegment561->addChildren(*TouchSensor562);

CTransform* Transform563 = (CTransform *)(m_pScene.createNode("Transform"));
Transform563->setTranslation(new float[3]{0.006,1.4102,-0.0745});
CShape* Shape564 = (CShape *)(m_pScene.createNode("Shape"));
Shape564->setUSE("HAnimJointShape");
Transform563->addChildren(*Shape564);

HAnimSegment561->addChildren(*Transform563);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt5'/> to <HAnimJoint name='vt4'/>
CShape* Shape565 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet566 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet566->setVertexCount(new int[1]{2});
CCoordinate* Coordinate567 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate567->setPoint(new float[6]{0.006,1.4102,-0.0745,0.0061,1.432,-0.0675});
LineSet566->setCoord(*Coordinate567);

CColorRGBA* ColorRGBA568 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA568->setUSE("HAnimSegmentLineColorRGBA");
LineSet566->setColor(*ColorRGBA568);

Shape565->setGeometry(LineSet566);

HAnimSegment561->addChildren(*Shape565);

HAnimJoint560->addChildren(*HAnimSegment561);

CHAnimJoint* HAnimJoint569 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint569->setName("vt4");
HAnimJoint569->setDEF("hanim_vt4");
HAnimJoint569->setCenter(new float[3]{0.0061,1.432,-0.0675});
HAnimJoint569->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment570 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment570->setName("t4");
HAnimSegment570->setDEF("hanim_t4");
//<HAnimJoint name='vt4'/> visualization sphere within <HAnimSegment name='t4'/>
CTouchSensor* TouchSensor571 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor571->setDescription("HAnimJoint vt4, HAnimSegment t4");
HAnimSegment570->addChildren(*TouchSensor571);

CTransform* Transform572 = (CTransform *)(m_pScene.createNode("Transform"));
Transform572->setTranslation(new float[3]{0.0061,1.432,-0.0675});
CShape* Shape573 = (CShape *)(m_pScene.createNode("Shape"));
Shape573->setUSE("HAnimJointShape");
Transform572->addChildren(*Shape573);

HAnimSegment570->addChildren(*Transform572);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt4'/> to <HAnimJoint name='vt3'/>
CShape* Shape574 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet575 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet575->setVertexCount(new int[1]{2});
CCoordinate* Coordinate576 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate576->setPoint(new float[6]{0.0061,1.432,-0.0675,0.0062,1.4583,-0.057});
LineSet575->setCoord(*Coordinate576);

CColorRGBA* ColorRGBA577 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA577->setUSE("HAnimSegmentLineColorRGBA");
LineSet575->setColor(*ColorRGBA577);

Shape574->setGeometry(LineSet575);

HAnimSegment570->addChildren(*Shape574);

HAnimJoint569->addChildren(*HAnimSegment570);

CHAnimJoint* HAnimJoint578 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint578->setName("vt3");
HAnimJoint578->setDEF("hanim_vt3");
HAnimJoint578->setCenter(new float[3]{0.0062,1.4583,-0.057});
HAnimJoint578->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment579 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment579->setName("t3");
HAnimSegment579->setDEF("hanim_t3");
//<HAnimJoint name='vt3'/> visualization sphere within <HAnimSegment name='t3'/>
CTouchSensor* TouchSensor580 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor580->setDescription("HAnimJoint vt3, HAnimSegment t3");
HAnimSegment579->addChildren(*TouchSensor580);

CTransform* Transform581 = (CTransform *)(m_pScene.createNode("Transform"));
Transform581->setTranslation(new float[3]{0.0062,1.4583,-0.057});
CShape* Shape582 = (CShape *)(m_pScene.createNode("Shape"));
Shape582->setUSE("HAnimJointShape");
Transform581->addChildren(*Shape582);

HAnimSegment579->addChildren(*Transform581);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt3'/> to <HAnimJoint name='vt2'/>
CShape* Shape583 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet584 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet584->setVertexCount(new int[1]{2});
CCoordinate* Coordinate585 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate585->setPoint(new float[6]{0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484});
LineSet584->setCoord(*Coordinate585);

CColorRGBA* ColorRGBA586 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA586->setUSE("HAnimSegmentLineColorRGBA");
LineSet584->setColor(*ColorRGBA586);

Shape583->setGeometry(LineSet584);

HAnimSegment579->addChildren(*Shape583);

HAnimJoint578->addChildren(*HAnimSegment579);

CHAnimJoint* HAnimJoint587 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint587->setName("vt2");
HAnimJoint587->setDEF("hanim_vt2");
HAnimJoint587->setCenter(new float[3]{0.0063,1.4761,-0.0484});
HAnimJoint587->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment588 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment588->setName("t2");
HAnimSegment588->setDEF("hanim_t2");
//<HAnimJoint name='vt2'/> visualization sphere within <HAnimSegment name='t2'/>
CTouchSensor* TouchSensor589 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor589->setDescription("HAnimJoint vt2, HAnimSegment t2");
HAnimSegment588->addChildren(*TouchSensor589);

CTransform* Transform590 = (CTransform *)(m_pScene.createNode("Transform"));
Transform590->setTranslation(new float[3]{0.0063,1.4761,-0.0484});
CShape* Shape591 = (CShape *)(m_pScene.createNode("Shape"));
Shape591->setUSE("HAnimJointShape");
Transform590->addChildren(*Shape591);

HAnimSegment588->addChildren(*Transform590);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt2'/> to <HAnimJoint name='vt1'/>
CShape* Shape592 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet593 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet593->setVertexCount(new int[1]{2});
CCoordinate* Coordinate594 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate594->setPoint(new float[6]{0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387});
LineSet593->setCoord(*Coordinate594);

CColorRGBA* ColorRGBA595 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA595->setUSE("HAnimSegmentLineColorRGBA");
LineSet593->setColor(*ColorRGBA595);

Shape592->setGeometry(LineSet593);

HAnimSegment588->addChildren(*Shape592);

HAnimJoint587->addChildren(*HAnimSegment588);

CHAnimJoint* HAnimJoint596 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint596->setName("vt1");
HAnimJoint596->setDEF("hanim_vt1");
HAnimJoint596->setCenter(new float[3]{0.0065,1.4951,-0.0387});
HAnimJoint596->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment597 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment597->setName("t1");
HAnimSegment597->setDEF("hanim_t1");
//<HAnimJoint name='vt1'/> visualization sphere within <HAnimSegment name='t1'/>
CTouchSensor* TouchSensor598 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor598->setDescription("HAnimJoint vt1, HAnimSegment t1");
HAnimSegment597->addChildren(*TouchSensor598);

CTransform* Transform599 = (CTransform *)(m_pScene.createNode("Transform"));
Transform599->setTranslation(new float[3]{0.0065,1.4951,-0.0387});
CShape* Shape600 = (CShape *)(m_pScene.createNode("Shape"));
Shape600->setUSE("HAnimJointShape");
Transform599->addChildren(*Shape600);

HAnimSegment597->addChildren(*Transform599);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='vc7'/>
CShape* Shape601 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet602 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet602->setVertexCount(new int[1]{2});
CCoordinate* Coordinate603 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate603->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301});
LineSet602->setCoord(*Coordinate603);

CColorRGBA* ColorRGBA604 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA604->setUSE("HAnimSegmentLineColorRGBA");
LineSet602->setColor(*ColorRGBA604);

Shape601->setGeometry(LineSet602);

HAnimSegment597->addChildren(*Shape601);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='l_sternoclavicular'/>
CShape* Shape605 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet606 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet606->setVertexCount(new int[1]{2});
CCoordinate* Coordinate607 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate607->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353});
LineSet606->setCoord(*Coordinate607);

CColorRGBA* ColorRGBA608 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA608->setUSE("HAnimSegmentLineColorRGBA");
LineSet606->setColor(*ColorRGBA608);

Shape605->setGeometry(LineSet606);

HAnimSegment597->addChildren(*Shape605);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='r_sternoclavicular'/>
CShape* Shape609 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet610 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet610->setVertexCount(new int[1]{2});
CCoordinate* Coordinate611 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate611->setPoint(new float[6]{0.0065,1.4951,-0.0387,-0.082,1.4488,-0.0353});
LineSet610->setCoord(*Coordinate611);

CColorRGBA* ColorRGBA612 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA612->setUSE("HAnimSegmentLineColorRGBA");
LineSet610->setColor(*ColorRGBA612);

Shape609->setGeometry(LineSet610);

HAnimSegment597->addChildren(*Shape609);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='suprasternale'/>
CShape* Shape613 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet614 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet614->setVertexCount(new int[1]{2});
CCoordinate* Coordinate615 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate615->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.0084,1.4714,0.0551});
LineSet614->setCoord(*Coordinate615);

CColorRGBA* ColorRGBA616 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA616->setUSE("HAnimSiteLineColorRGBA");
LineSet614->setColor(*ColorRGBA616);

Shape613->setGeometry(LineSet614);

HAnimSegment597->addChildren(*Shape613);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='cervicale'/>
CShape* Shape617 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet618 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet618->setVertexCount(new int[1]{2});
CCoordinate* Coordinate619 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate619->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.0064,1.52,-0.0815});
LineSet618->setCoord(*Coordinate619);

CColorRGBA* ColorRGBA620 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA620->setUSE("HAnimSiteLineColorRGBA");
LineSet618->setColor(*ColorRGBA620);

Shape617->setGeometry(LineSet618);

HAnimSegment597->addChildren(*Shape617);

CHAnimSite* HAnimSite621 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite621->setName("suprasternale_pt");
HAnimSite621->setDEF("hanim_suprasternale_pt");
HAnimSite621->setTranslation(new float[3]{0.0084,1.4714,0.0551});
//HAnimSite visualization shape
CTouchSensor* TouchSensor622 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor622->setDescription("HAnimSite suprasternale");
HAnimSite621->addChildren(*TouchSensor622);

CShape* Shape623 = (CShape *)(m_pScene.createNode("Shape"));
Shape623->setUSE("HAnimSiteShape");
HAnimSite621->addChildren(*Shape623);

HAnimSegment597->addChildren(*HAnimSite621);

CHAnimSite* HAnimSite624 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite624->setName("cervicale_pt");
HAnimSite624->setDEF("hanim_cervicale_pt");
HAnimSite624->setTranslation(new float[3]{0.0064,1.52,-0.0815});
//HAnimSite visualization shape
CTouchSensor* TouchSensor625 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor625->setDescription("HAnimSite cervicale");
HAnimSite624->addChildren(*TouchSensor625);

CShape* Shape626 = (CShape *)(m_pScene.createNode("Shape"));
Shape626->setUSE("HAnimSiteShape");
HAnimSite624->addChildren(*Shape626);

HAnimSegment597->addChildren(*HAnimSite624);

HAnimJoint596->addChildren(*HAnimSegment597);

CHAnimJoint* HAnimJoint627 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint627->setName("vc7");
HAnimJoint627->setDEF("hanim_vc7");
HAnimJoint627->setCenter(new float[3]{0.0066,1.5132,-0.0301});
HAnimJoint627->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment628 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment628->setName("c7");
HAnimSegment628->setDEF("hanim_c7");
//<HAnimJoint name='vc7'/> visualization sphere within <HAnimSegment name='c7'/>
CTouchSensor* TouchSensor629 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor629->setDescription("HAnimJoint vc7, HAnimSegment c7");
HAnimSegment628->addChildren(*TouchSensor629);

CTransform* Transform630 = (CTransform *)(m_pScene.createNode("Transform"));
Transform630->setTranslation(new float[3]{0.0066,1.5132,-0.0301});
CShape* Shape631 = (CShape *)(m_pScene.createNode("Shape"));
Shape631->setUSE("HAnimJointShape");
Transform630->addChildren(*Shape631);

HAnimSegment628->addChildren(*Transform630);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc7'/> to <HAnimJoint name='vc6'/>
CShape* Shape632 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet633 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet633->setVertexCount(new int[1]{2});
CCoordinate* Coordinate634 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate634->setPoint(new float[6]{0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143});
LineSet633->setCoord(*Coordinate634);

CColorRGBA* ColorRGBA635 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA635->setUSE("HAnimSegmentLineColorRGBA");
LineSet633->setColor(*ColorRGBA635);

Shape632->setGeometry(LineSet633);

HAnimSegment628->addChildren(*Shape632);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='r_neck_base'/>
CShape* Shape636 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet637 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet637->setVertexCount(new int[1]{2});
CCoordinate* Coordinate638 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate638->setPoint(new float[6]{0.0066,1.5132,-0.0301,-0.0419,1.5149,-0.022});
LineSet637->setCoord(*Coordinate638);

CColorRGBA* ColorRGBA639 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA639->setUSE("HAnimSiteLineColorRGBA");
LineSet637->setColor(*ColorRGBA639);

Shape636->setGeometry(LineSet637);

HAnimSegment628->addChildren(*Shape636);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='l_neck_base'/>
CShape* Shape640 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet641 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet641->setVertexCount(new int[1]{2});
CCoordinate* Coordinate642 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate642->setPoint(new float[6]{0.0066,1.5132,-0.0301,0.0646,1.5141,-0.038});
LineSet641->setCoord(*Coordinate642);

CColorRGBA* ColorRGBA643 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA643->setUSE("HAnimSiteLineColorRGBA");
LineSet641->setColor(*ColorRGBA643);

Shape640->setGeometry(LineSet641);

HAnimSegment628->addChildren(*Shape640);

CHAnimSite* HAnimSite644 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite644->setName("r_neck_base_pt");
HAnimSite644->setDEF("hanim_r_neck_base_pt");
HAnimSite644->setTranslation(new float[3]{-0.0419,1.5149,-0.022});
//HAnimSite visualization shape
CTouchSensor* TouchSensor645 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor645->setDescription("HAnimSite r_neck_base");
HAnimSite644->addChildren(*TouchSensor645);

CShape* Shape646 = (CShape *)(m_pScene.createNode("Shape"));
Shape646->setUSE("HAnimSiteShape");
HAnimSite644->addChildren(*Shape646);

HAnimSegment628->addChildren(*HAnimSite644);

CHAnimSite* HAnimSite647 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite647->setName("l_neck_base_pt");
HAnimSite647->setDEF("hanim_l_neck_base_pt");
HAnimSite647->setTranslation(new float[3]{0.0646,1.5141,-0.038});
//HAnimSite visualization shape
CTouchSensor* TouchSensor648 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor648->setDescription("HAnimSite l_neck_base");
HAnimSite647->addChildren(*TouchSensor648);

CShape* Shape649 = (CShape *)(m_pScene.createNode("Shape"));
Shape649->setUSE("HAnimSiteShape");
HAnimSite647->addChildren(*Shape649);

HAnimSegment628->addChildren(*HAnimSite647);

HAnimJoint627->addChildren(*HAnimSegment628);

CHAnimJoint* HAnimJoint650 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint650->setName("vc6");
HAnimJoint650->setDEF("hanim_vc6");
HAnimJoint650->setCenter(new float[3]{0.0066,1.5357,-0.0143});
HAnimJoint650->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment651 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment651->setName("c6");
HAnimSegment651->setDEF("hanim_c6");
//<HAnimJoint name='vc6'/> visualization sphere within <HAnimSegment name='c6'/>
CTouchSensor* TouchSensor652 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor652->setDescription("HAnimJoint vc6, HAnimSegment c6");
HAnimSegment651->addChildren(*TouchSensor652);

CTransform* Transform653 = (CTransform *)(m_pScene.createNode("Transform"));
Transform653->setTranslation(new float[3]{0.0066,1.5357,-0.0143});
CShape* Shape654 = (CShape *)(m_pScene.createNode("Shape"));
Shape654->setUSE("HAnimJointShape");
Transform653->addChildren(*Shape654);

HAnimSegment651->addChildren(*Transform653);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc6'/> to <HAnimJoint name='vc5'/>
CShape* Shape655 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet656 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet656->setVertexCount(new int[1]{2});
CCoordinate* Coordinate657 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate657->setPoint(new float[6]{0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082});
LineSet656->setCoord(*Coordinate657);

CColorRGBA* ColorRGBA658 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA658->setUSE("HAnimSegmentLineColorRGBA");
LineSet656->setColor(*ColorRGBA658);

Shape655->setGeometry(LineSet656);

HAnimSegment651->addChildren(*Shape655);

HAnimJoint650->addChildren(*HAnimSegment651);

CHAnimJoint* HAnimJoint659 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint659->setName("vc5");
HAnimJoint659->setDEF("hanim_vc5");
HAnimJoint659->setCenter(new float[3]{0.0066,1.552,-0.0082});
HAnimJoint659->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment660 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment660->setName("c5");
HAnimSegment660->setDEF("hanim_c5");
//<HAnimJoint name='vc5'/> visualization sphere within <HAnimSegment name='c5'/>
CTouchSensor* TouchSensor661 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor661->setDescription("HAnimJoint vc5, HAnimSegment c5");
HAnimSegment660->addChildren(*TouchSensor661);

CTransform* Transform662 = (CTransform *)(m_pScene.createNode("Transform"));
Transform662->setTranslation(new float[3]{0.0066,1.552,-0.0082});
CShape* Shape663 = (CShape *)(m_pScene.createNode("Shape"));
Shape663->setUSE("HAnimJointShape");
Transform662->addChildren(*Shape663);

HAnimSegment660->addChildren(*Transform662);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc5'/> to <HAnimJoint name='vc4'/>
CShape* Shape664 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet665 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet665->setVertexCount(new int[1]{2});
CCoordinate* Coordinate666 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate666->setPoint(new float[6]{0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084});
LineSet665->setCoord(*Coordinate666);

CColorRGBA* ColorRGBA667 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA667->setUSE("HAnimSegmentLineColorRGBA");
LineSet665->setColor(*ColorRGBA667);

Shape664->setGeometry(LineSet665);

HAnimSegment660->addChildren(*Shape664);

HAnimJoint659->addChildren(*HAnimSegment660);

CHAnimJoint* HAnimJoint668 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint668->setName("vc4");
HAnimJoint668->setDEF("hanim_vc4");
HAnimJoint668->setCenter(new float[3]{0.0066,1.5662,-0.0084});
HAnimJoint668->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment669 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment669->setName("c4");
HAnimSegment669->setDEF("hanim_c4");
//<HAnimJoint name='vc4'/> visualization sphere within <HAnimSegment name='c4'/>
CTouchSensor* TouchSensor670 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor670->setDescription("HAnimJoint vc4, HAnimSegment c4");
HAnimSegment669->addChildren(*TouchSensor670);

CTransform* Transform671 = (CTransform *)(m_pScene.createNode("Transform"));
Transform671->setTranslation(new float[3]{0.0066,1.5662,-0.0084});
CShape* Shape672 = (CShape *)(m_pScene.createNode("Shape"));
Shape672->setUSE("HAnimJointShape");
Transform671->addChildren(*Shape672);

HAnimSegment669->addChildren(*Transform671);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc4'/> to <HAnimJoint name='vc3'/>
CShape* Shape673 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet674 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet674->setVertexCount(new int[1]{2});
CCoordinate* Coordinate675 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate675->setPoint(new float[6]{0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103});
LineSet674->setCoord(*Coordinate675);

CColorRGBA* ColorRGBA676 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA676->setUSE("HAnimSegmentLineColorRGBA");
LineSet674->setColor(*ColorRGBA676);

Shape673->setGeometry(LineSet674);

HAnimSegment669->addChildren(*Shape673);

HAnimJoint668->addChildren(*HAnimSegment669);

CHAnimJoint* HAnimJoint677 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint677->setName("vc3");
HAnimJoint677->setDEF("hanim_vc3");
HAnimJoint677->setCenter(new float[3]{0.0066,1.58,-0.0103});
HAnimJoint677->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment678 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment678->setName("c3");
HAnimSegment678->setDEF("hanim_c3");
//<HAnimJoint name='vc3'/> visualization sphere within <HAnimSegment name='c3'/>
CTouchSensor* TouchSensor679 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor679->setDescription("HAnimJoint vc3, HAnimSegment c3");
HAnimSegment678->addChildren(*TouchSensor679);

CTransform* Transform680 = (CTransform *)(m_pScene.createNode("Transform"));
Transform680->setTranslation(new float[3]{0.0066,1.58,-0.0103});
CShape* Shape681 = (CShape *)(m_pScene.createNode("Shape"));
Shape681->setUSE("HAnimJointShape");
Transform680->addChildren(*Shape681);

HAnimSegment678->addChildren(*Transform680);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc3'/> to <HAnimJoint name='vc2'/>
CShape* Shape682 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet683 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet683->setVertexCount(new int[1]{2});
CCoordinate* Coordinate684 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate684->setPoint(new float[6]{0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103});
LineSet683->setCoord(*Coordinate684);

CColorRGBA* ColorRGBA685 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA685->setUSE("HAnimSegmentLineColorRGBA");
LineSet683->setColor(*ColorRGBA685);

Shape682->setGeometry(LineSet683);

HAnimSegment678->addChildren(*Shape682);

HAnimJoint677->addChildren(*HAnimSegment678);

CHAnimJoint* HAnimJoint686 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint686->setName("vc2");
HAnimJoint686->setDEF("hanim_vc2");
HAnimJoint686->setCenter(new float[3]{0.0066,1.5928,-0.0103});
HAnimJoint686->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment687 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment687->setName("c2");
HAnimSegment687->setDEF("hanim_c2");
//<HAnimJoint name='vc2'/> visualization sphere within <HAnimSegment name='c2'/>
CTouchSensor* TouchSensor688 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor688->setDescription("HAnimJoint vc2, HAnimSegment c2");
HAnimSegment687->addChildren(*TouchSensor688);

CTransform* Transform689 = (CTransform *)(m_pScene.createNode("Transform"));
Transform689->setTranslation(new float[3]{0.0066,1.5928,-0.0103});
CShape* Shape690 = (CShape *)(m_pScene.createNode("Shape"));
Shape690->setUSE("HAnimJointShape");
Transform689->addChildren(*Shape690);

HAnimSegment687->addChildren(*Transform689);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc2'/> to <HAnimJoint name='vc1'/>
CShape* Shape691 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet692 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet692->setVertexCount(new int[1]{2});
CCoordinate* Coordinate693 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate693->setPoint(new float[6]{0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034});
LineSet692->setCoord(*Coordinate693);

CColorRGBA* ColorRGBA694 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA694->setUSE("HAnimSegmentLineColorRGBA");
LineSet692->setColor(*ColorRGBA694);

Shape691->setGeometry(LineSet692);

HAnimSegment687->addChildren(*Shape691);

HAnimJoint686->addChildren(*HAnimSegment687);

CHAnimJoint* HAnimJoint695 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint695->setName("vc1");
HAnimJoint695->setDEF("hanim_vc1");
HAnimJoint695->setCenter(new float[3]{0.0066,1.6144,-0.0034});
HAnimJoint695->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment696 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment696->setName("c1");
HAnimSegment696->setDEF("hanim_c1");
//<HAnimJoint name='vc1'/> visualization sphere within <HAnimSegment name='c1'/>
CTouchSensor* TouchSensor697 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor697->setDescription("HAnimJoint vc1, HAnimSegment c1");
HAnimSegment696->addChildren(*TouchSensor697);

CTransform* Transform698 = (CTransform *)(m_pScene.createNode("Transform"));
Transform698->setTranslation(new float[3]{0.0066,1.6144,-0.0034});
CShape* Shape699 = (CShape *)(m_pScene.createNode("Shape"));
Shape699->setUSE("HAnimJointShape");
Transform698->addChildren(*Shape699);

HAnimSegment696->addChildren(*Transform698);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc1'/> to <HAnimJoint name='skullbase'/>
CShape* Shape700 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet701 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet701->setVertexCount(new int[1]{2});
CCoordinate* Coordinate702 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate702->setPoint(new float[6]{0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236});
LineSet701->setCoord(*Coordinate702);

CColorRGBA* ColorRGBA703 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA703->setUSE("HAnimSegmentLineColorRGBA");
LineSet701->setColor(*ColorRGBA703);

Shape700->setGeometry(LineSet701);

HAnimSegment696->addChildren(*Shape700);

HAnimJoint695->addChildren(*HAnimSegment696);

CHAnimJoint* HAnimJoint704 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint704->setName("skullbase");
HAnimJoint704->setDEF("hanim_skullbase");
HAnimJoint704->setCenter(new float[3]{0.0044,1.6209,0.0236});
HAnimJoint704->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment705 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment705->setName("skull");
HAnimSegment705->setDEF("hanim_skull");
//<HAnimJoint name='skullbase'/> visualization sphere within <HAnimSegment name='skull'/>
CTouchSensor* TouchSensor706 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor706->setDescription("HAnimJoint skullbase, HAnimSegment skull");
HAnimSegment705->addChildren(*TouchSensor706);

CTransform* Transform707 = (CTransform *)(m_pScene.createNode("Transform"));
Transform707->setTranslation(new float[3]{0.0044,1.6209,0.0236});
CShape* Shape708 = (CShape *)(m_pScene.createNode("Shape"));
Shape708->setUSE("HAnimJointShape");
Transform707->addChildren(*Shape708);

HAnimSegment705->addChildren(*Transform707);

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyeball_joint'/>
CShape* Shape709 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet710 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet710->setVertexCount(new int[1]{2});
CCoordinate* Coordinate711 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate711->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0336,1.6332,0.0502});
LineSet710->setCoord(*Coordinate711);

CColorRGBA* ColorRGBA712 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA712->setUSE("HAnimSegmentLineColorRGBA");
LineSet710->setColor(*ColorRGBA712);

Shape709->setGeometry(LineSet710);

HAnimSegment705->addChildren(*Shape709);

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyelid_joint'/>
CShape* Shape713 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet714 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet714->setVertexCount(new int[1]{2});
CCoordinate* Coordinate715 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate715->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0336,1.6332,0.0502});
LineSet714->setCoord(*Coordinate715);

CColorRGBA* ColorRGBA716 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA716->setUSE("HAnimSegmentLineColorRGBA");
LineSet714->setColor(*ColorRGBA716);

Shape713->setGeometry(LineSet714);

HAnimSegment705->addChildren(*Shape713);

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyebrow_joint'/>
CShape* Shape717 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet718 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet718->setVertexCount(new int[1]{2});
CCoordinate* Coordinate719 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate719->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0336,1.635,0.0506});
LineSet718->setCoord(*Coordinate719);

CColorRGBA* ColorRGBA720 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA720->setUSE("HAnimSegmentLineColorRGBA");
LineSet718->setColor(*ColorRGBA720);

Shape717->setGeometry(LineSet718);

HAnimSegment705->addChildren(*Shape717);

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyeball_joint'/>
CShape* Shape721 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet722 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet722->setVertexCount(new int[1]{2});
CCoordinate* Coordinate723 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate723->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502});
LineSet722->setCoord(*Coordinate723);

CColorRGBA* ColorRGBA724 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA724->setUSE("HAnimSegmentLineColorRGBA");
LineSet722->setColor(*ColorRGBA724);

Shape721->setGeometry(LineSet722);

HAnimSegment705->addChildren(*Shape721);

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyelid_joint'/>
CShape* Shape725 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet726 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet726->setVertexCount(new int[1]{2});
CCoordinate* Coordinate727 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate727->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502});
LineSet726->setCoord(*Coordinate727);

CColorRGBA* ColorRGBA728 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA728->setUSE("HAnimSegmentLineColorRGBA");
LineSet726->setColor(*ColorRGBA728);

Shape725->setGeometry(LineSet726);

HAnimSegment705->addChildren(*Shape725);

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyebrow_joint'/>
CShape* Shape729 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet730 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet730->setVertexCount(new int[1]{2});
CCoordinate* Coordinate731 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate731->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0336,1.635,0.0506});
LineSet730->setCoord(*Coordinate731);

CColorRGBA* ColorRGBA732 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA732->setUSE("HAnimSegmentLineColorRGBA");
LineSet730->setColor(*ColorRGBA732);

Shape729->setGeometry(LineSet730);

HAnimSegment705->addChildren(*Shape729);

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='temporomandibular'/>
CShape* Shape733 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet734 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet734->setVertexCount(new int[1]{2});
CCoordinate* Coordinate735 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate735->setPoint(new float[6]{0.0044,1.6209,0.0236,0,1.63,0.015});
LineSet734->setCoord(*Coordinate735);

CColorRGBA* ColorRGBA736 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA736->setUSE("HAnimSegmentLineColorRGBA");
LineSet734->setColor(*ColorRGBA736);

Shape733->setGeometry(LineSet734);

HAnimSegment705->addChildren(*Shape733);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='skull_tip'/>
CShape* Shape737 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet738 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet738->setVertexCount(new int[1]{2});
CCoordinate* Coordinate739 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate739->setPoint(new float[6]{0.0044,1.6209,0.0236,0.005,1.7504,0.0055});
LineSet738->setCoord(*Coordinate739);

CColorRGBA* ColorRGBA740 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA740->setUSE("HAnimSiteLineColorRGBA");
LineSet738->setColor(*ColorRGBA740);

Shape737->setGeometry(LineSet738);

HAnimSegment705->addChildren(*Shape737);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='sellion'/>
CShape* Shape741 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet742 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet742->setVertexCount(new int[1]{2});
CCoordinate* Coordinate743 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate743->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0058,1.6316,0.0852});
LineSet742->setCoord(*Coordinate743);

CColorRGBA* ColorRGBA744 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA744->setUSE("HAnimSiteLineColorRGBA");
LineSet742->setColor(*ColorRGBA744);

Shape741->setGeometry(LineSet742);

HAnimSegment705->addChildren(*Shape741);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_infraorbitale'/>
CShape* Shape745 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet746 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet746->setVertexCount(new int[1]{2});
CCoordinate* Coordinate747 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate747->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0237,1.6171,0.0752});
LineSet746->setCoord(*Coordinate747);

CColorRGBA* ColorRGBA748 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA748->setUSE("HAnimSiteLineColorRGBA");
LineSet746->setColor(*ColorRGBA748);

Shape745->setGeometry(LineSet746);

HAnimSegment705->addChildren(*Shape745);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_infraorbitale'/>
CShape* Shape749 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet750 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet750->setVertexCount(new int[1]{2});
CCoordinate* Coordinate751 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate751->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0341,1.6171,0.0752});
LineSet750->setCoord(*Coordinate751);

CColorRGBA* ColorRGBA752 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA752->setUSE("HAnimSiteLineColorRGBA");
LineSet750->setColor(*ColorRGBA752);

Shape749->setGeometry(LineSet750);

HAnimSegment705->addChildren(*Shape749);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='supramenton'/>
CShape* Shape753 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet754 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet754->setVertexCount(new int[1]{2});
CCoordinate* Coordinate755 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate755->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0061,1.541,0.0805});
LineSet754->setCoord(*Coordinate755);

CColorRGBA* ColorRGBA756 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA756->setUSE("HAnimSiteLineColorRGBA");
LineSet754->setColor(*ColorRGBA756);

Shape753->setGeometry(LineSet754);

HAnimSegment705->addChildren(*Shape753);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_tragion'/>
CShape* Shape757 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet758 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet758->setVertexCount(new int[1]{2});
CCoordinate* Coordinate759 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate759->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0646,1.6347,0.0302});
LineSet758->setCoord(*Coordinate759);

CColorRGBA* ColorRGBA760 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA760->setUSE("HAnimSiteLineColorRGBA");
LineSet758->setColor(*ColorRGBA760);

Shape757->setGeometry(LineSet758);

HAnimSegment705->addChildren(*Shape757);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_gonion'/>
CShape* Shape761 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet762 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet762->setVertexCount(new int[1]{2});
CCoordinate* Coordinate763 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate763->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.052,1.5529,0.0347});
LineSet762->setCoord(*Coordinate763);

CColorRGBA* ColorRGBA764 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA764->setUSE("HAnimSiteLineColorRGBA");
LineSet762->setColor(*ColorRGBA764);

Shape761->setGeometry(LineSet762);

HAnimSegment705->addChildren(*Shape761);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_tragion'/>
CShape* Shape765 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet766 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet766->setVertexCount(new int[1]{2});
CCoordinate* Coordinate767 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate767->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0739,1.6348,0.0282});
LineSet766->setCoord(*Coordinate767);

CColorRGBA* ColorRGBA768 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA768->setUSE("HAnimSiteLineColorRGBA");
LineSet766->setColor(*ColorRGBA768);

Shape765->setGeometry(LineSet766);

HAnimSegment705->addChildren(*Shape765);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_gonion'/>
CShape* Shape769 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet770 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet770->setVertexCount(new int[1]{2});
CCoordinate* Coordinate771 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate771->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0631,1.553,0.033});
LineSet770->setCoord(*Coordinate771);

CColorRGBA* ColorRGBA772 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA772->setUSE("HAnimSiteLineColorRGBA");
LineSet770->setColor(*ColorRGBA772);

Shape769->setGeometry(LineSet770);

HAnimSegment705->addChildren(*Shape769);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='nuchale'/>
CShape* Shape773 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet774 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet774->setVertexCount(new int[1]{2});
CCoordinate* Coordinate775 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate775->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0039,1.5972,-0.0796});
LineSet774->setCoord(*Coordinate775);

CColorRGBA* ColorRGBA776 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA776->setUSE("HAnimSiteLineColorRGBA");
LineSet774->setColor(*ColorRGBA776);

Shape773->setGeometry(LineSet774);

HAnimSegment705->addChildren(*Shape773);

//TODO move skull_tip x to zero
CHAnimSite* HAnimSite777 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite777->setName("skull_tip");
HAnimSite777->setDEF("hanim_skull_tip");
HAnimSite777->setTranslation(new float[3]{0.005,1.7504,0.0055});
//HAnimSite visualization shape
CTouchSensor* TouchSensor778 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor778->setDescription("HAnimSite skull_tip");
HAnimSite777->addChildren(*TouchSensor778);

CShape* Shape779 = (CShape *)(m_pScene.createNode("Shape"));
Shape779->setUSE("HAnimSiteShape");
HAnimSite777->addChildren(*Shape779);

HAnimSegment705->addChildren(*HAnimSite777);

CHAnimSite* HAnimSite780 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite780->setName("sellion_pt");
HAnimSite780->setDEF("hanim_sellion_pt");
HAnimSite780->setTranslation(new float[3]{0.0058,1.6316,0.0852});
//HAnimSite visualization shape
CTouchSensor* TouchSensor781 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor781->setDescription("HAnimSite sellion");
HAnimSite780->addChildren(*TouchSensor781);

CShape* Shape782 = (CShape *)(m_pScene.createNode("Shape"));
Shape782->setUSE("HAnimSiteShape");
HAnimSite780->addChildren(*Shape782);

HAnimSegment705->addChildren(*HAnimSite780);

CHAnimSite* HAnimSite783 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite783->setName("r_infraorbitale_pt");
HAnimSite783->setDEF("hanim_r_infraorbitale_pt");
HAnimSite783->setTranslation(new float[3]{-0.0237,1.6171,0.0752});
//HAnimSite visualization shape
CTouchSensor* TouchSensor784 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor784->setDescription("HAnimSite r_infraorbitale");
HAnimSite783->addChildren(*TouchSensor784);

CShape* Shape785 = (CShape *)(m_pScene.createNode("Shape"));
Shape785->setUSE("HAnimSiteShape");
HAnimSite783->addChildren(*Shape785);

HAnimSegment705->addChildren(*HAnimSite783);

CHAnimSite* HAnimSite786 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite786->setName("l_infraorbitale_pt");
HAnimSite786->setDEF("hanim_l_infraorbitale_pt");
HAnimSite786->setTranslation(new float[3]{0.0341,1.6171,0.0752});
//HAnimSite visualization shape
CTouchSensor* TouchSensor787 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor787->setDescription("HAnimSite l_infraorbitale");
HAnimSite786->addChildren(*TouchSensor787);

CShape* Shape788 = (CShape *)(m_pScene.createNode("Shape"));
Shape788->setUSE("HAnimSiteShape");
HAnimSite786->addChildren(*Shape788);

HAnimSegment705->addChildren(*HAnimSite786);

CHAnimSite* HAnimSite789 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite789->setName("supramenton_pt");
HAnimSite789->setDEF("hanim_supramenton_pt");
HAnimSite789->setTranslation(new float[3]{0.0061,1.541,0.0805});
//HAnimSite visualization shape
CTouchSensor* TouchSensor790 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor790->setDescription("HAnimSite supramenton");
HAnimSite789->addChildren(*TouchSensor790);

CShape* Shape791 = (CShape *)(m_pScene.createNode("Shape"));
Shape791->setUSE("HAnimSiteShape");
HAnimSite789->addChildren(*Shape791);

HAnimSegment705->addChildren(*HAnimSite789);

CHAnimSite* HAnimSite792 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite792->setName("r_tragion_pt");
HAnimSite792->setDEF("hanim_r_tragion_pt");
HAnimSite792->setTranslation(new float[3]{-0.0646,1.6347,0.0302});
//HAnimSite visualization shape
CTouchSensor* TouchSensor793 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor793->setDescription("HAnimSite r_tragion");
HAnimSite792->addChildren(*TouchSensor793);

CShape* Shape794 = (CShape *)(m_pScene.createNode("Shape"));
Shape794->setUSE("HAnimSiteShape");
HAnimSite792->addChildren(*Shape794);

HAnimSegment705->addChildren(*HAnimSite792);

CHAnimSite* HAnimSite795 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite795->setName("r_gonion_pt");
HAnimSite795->setDEF("hanim_r_gonion_pt");
HAnimSite795->setTranslation(new float[3]{-0.052,1.5529,0.0347});
//HAnimSite visualization shape
CTouchSensor* TouchSensor796 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor796->setDescription("HAnimSite r_gonion");
HAnimSite795->addChildren(*TouchSensor796);

CShape* Shape797 = (CShape *)(m_pScene.createNode("Shape"));
Shape797->setUSE("HAnimSiteShape");
HAnimSite795->addChildren(*Shape797);

HAnimSegment705->addChildren(*HAnimSite795);

CHAnimSite* HAnimSite798 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite798->setName("l_tragion_pt");
HAnimSite798->setDEF("hanim_l_tragion_pt");
HAnimSite798->setTranslation(new float[3]{0.0739,1.6348,0.0282});
//HAnimSite visualization shape
CTouchSensor* TouchSensor799 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor799->setDescription("HAnimSite l_tragion");
HAnimSite798->addChildren(*TouchSensor799);

CShape* Shape800 = (CShape *)(m_pScene.createNode("Shape"));
Shape800->setUSE("HAnimSiteShape");
HAnimSite798->addChildren(*Shape800);

HAnimSegment705->addChildren(*HAnimSite798);

CHAnimSite* HAnimSite801 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite801->setName("l_gonion_pt");
HAnimSite801->setDEF("hanim_l_gonion_pt");
HAnimSite801->setTranslation(new float[3]{0.0631,1.553,0.033});
//HAnimSite visualization shape
CTouchSensor* TouchSensor802 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor802->setDescription("HAnimSite l_gonion");
HAnimSite801->addChildren(*TouchSensor802);

CShape* Shape803 = (CShape *)(m_pScene.createNode("Shape"));
Shape803->setUSE("HAnimSiteShape");
HAnimSite801->addChildren(*Shape803);

HAnimSegment705->addChildren(*HAnimSite801);

CHAnimSite* HAnimSite804 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite804->setName("nuchale_pt");
HAnimSite804->setDEF("hanim_nuchale_pt");
HAnimSite804->setTranslation(new float[3]{0.0039,1.5972,-0.0796});
//HAnimSite visualization shape
CTouchSensor* TouchSensor805 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor805->setDescription("HAnimSite nuchale");
HAnimSite804->addChildren(*TouchSensor805);

CShape* Shape806 = (CShape *)(m_pScene.createNode("Shape"));
Shape806->setUSE("HAnimSiteShape");
HAnimSite804->addChildren(*Shape806);

HAnimSegment705->addChildren(*HAnimSite804);

HAnimJoint704->addChildren(*HAnimSegment705);

CHAnimJoint* HAnimJoint807 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint807->setName("l_eyeball_joint");
HAnimJoint807->setDEF("hanim_l_eyeball_joint");
HAnimJoint807->setCenter(new float[3]{0.0336,1.6332,0.0502});
HAnimJoint807->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment808 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment808->setName("l_eyeball");
HAnimSegment808->setDEF("hanim_l_eyeball");
//<HAnimJoint name='l_eyeball_joint'/> visualization sphere within <HAnimSegment name='l_eyeball'/>
CTouchSensor* TouchSensor809 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor809->setDescription("HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball");
HAnimSegment808->addChildren(*TouchSensor809);

CTransform* Transform810 = (CTransform *)(m_pScene.createNode("Transform"));
Transform810->setTranslation(new float[3]{0.0336,1.6332,0.0502});
CShape* Shape811 = (CShape *)(m_pScene.createNode("Shape"));
Shape811->setUSE("HAnimJointShape");
Transform810->addChildren(*Shape811);

HAnimSegment808->addChildren(*Transform810);

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_eyeball_joint'/> to <HAnimSite name='l_eyeball_site_view'/>
CShape* Shape812 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet813 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet813->setVertexCount(new int[1]{2});
CCoordinate* Coordinate814 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate814->setPoint(new float[6]{0.0336,1.6332,0.0502,0.034,1.64,0.05});
LineSet813->setCoord(*Coordinate814);

CColorRGBA* ColorRGBA815 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA815->setDEF("HAnimSiteViewpointLineColorRGBA");
ColorRGBA815->setColor(new float[8]{0,0,1,1,0,0,1,0.1});
LineSet813->setColor(*ColorRGBA815);

Shape812->setGeometry(LineSet813);

HAnimSegment808->addChildren(*Shape812);

CHAnimSite* HAnimSite816 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite816->setName("l_eyeball_site_view");
HAnimSite816->setDEF("hanim_l_eyeball_site_view");
HAnimSite816->setTranslation(new float[3]{0.034,1.64,0.05});
CViewpoint* Viewpoint817 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint817->setDEF("hanim_l_eyeball_site_viewpoint");
Viewpoint817->setDescription("l_eyeball_site_viewpoint looking forward");
Viewpoint817->setOrientation(new float[4]{0,1,0,3.141593});
Viewpoint817->setPosition(new float[3]{0,0,0});
HAnimSite816->addChildren(*Viewpoint817);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor818 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor818->setDescription("HAnimSite Viewpoint hanim_l_eyeball_site_view");
Anchor818->setUrl(new CString[1]{"#hanim_l_eyeball_site_viewpoint"}, 1);
CLOD* LOD819 = (CLOD *)(m_pScene.createNode("LOD"));
LOD819->setForceTransitions(True);
LOD819->setRange(new float[1]{0.04});
CWorldInfo* WorldInfo820 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo820->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD819->addChildren(*WorldInfo820);

CShape* Shape821 = (CShape *)(m_pScene.createNode("Shape"));
Shape821->setDEF("HAnimSiteViewpointShape");
CIndexedFaceSet* IndexedFaceSet822 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet822->setDEF("SiteViewpointDiamondIFS");
IndexedFaceSet822->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet822->setCreaseAngle(0.5);
CCoordinate* Coordinate823 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate823->setPoint(new float[18]{0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
IndexedFaceSet822->setCoord(*Coordinate823);

Shape821->setGeometry(IndexedFaceSet822);

CAppearance* Appearance824 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material825 = (CMaterial *)(m_pScene.createNode("Material"));
Material825->setDiffuseColor(new float[3]{0,0,1});
Material825->setTransparency(0.6);
Appearance824->setMaterial(*Material825);

Shape821->setAppearance(*Appearance824);

LOD819->addChildren(*Shape821);

Anchor818->addChildren(*LOD819);

HAnimSite816->addChildren(*Anchor818);

HAnimSegment808->addChildren(*HAnimSite816);

HAnimJoint807->addChildren(*HAnimSegment808);

HAnimJoint704->addChildren(*HAnimJoint807);

CHAnimJoint* HAnimJoint826 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint826->setName("l_eyelid_joint");
HAnimJoint826->setDEF("hanim_l_eyelid_joint");
HAnimJoint826->setCenter(new float[3]{0.0336,1.6332,0.0502});
HAnimJoint826->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment827 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment827->setName("l_eyelid");
HAnimSegment827->setDEF("hanim_l_eyelid");
//<HAnimJoint name='l_eyelid_joint'/> visualization sphere within <HAnimSegment name='l_eyelid'/>
CTouchSensor* TouchSensor828 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor828->setDescription("HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid");
HAnimSegment827->addChildren(*TouchSensor828);

CTransform* Transform829 = (CTransform *)(m_pScene.createNode("Transform"));
Transform829->setTranslation(new float[3]{0.0336,1.6332,0.0502});
CShape* Shape830 = (CShape *)(m_pScene.createNode("Shape"));
Shape830->setUSE("HAnimJointShape");
Transform829->addChildren(*Shape830);

HAnimSegment827->addChildren(*Transform829);

HAnimJoint826->addChildren(*HAnimSegment827);

HAnimJoint704->addChildren(*HAnimJoint826);

CHAnimJoint* HAnimJoint831 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint831->setName("l_eyebrow_joint");
HAnimJoint831->setDEF("hanim_l_eyebrow_joint");
HAnimJoint831->setCenter(new float[3]{0.0336,1.635,0.0506});
HAnimJoint831->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment832 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment832->setName("l_eyebrow");
HAnimSegment832->setDEF("hanim_l_eyebrow");
//<HAnimJoint name='l_eyebrow_joint'/> visualization sphere within <HAnimSegment name='l_eyebrow'/>
CTouchSensor* TouchSensor833 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor833->setDescription("HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow");
HAnimSegment832->addChildren(*TouchSensor833);

CTransform* Transform834 = (CTransform *)(m_pScene.createNode("Transform"));
Transform834->setTranslation(new float[3]{0.0336,1.635,0.0506});
CShape* Shape835 = (CShape *)(m_pScene.createNode("Shape"));
Shape835->setUSE("HAnimJointShape");
Transform834->addChildren(*Shape835);

HAnimSegment832->addChildren(*Transform834);

HAnimJoint831->addChildren(*HAnimSegment832);

HAnimJoint704->addChildren(*HAnimJoint831);

CHAnimJoint* HAnimJoint836 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint836->setName("r_eyeball_joint");
HAnimJoint836->setDEF("hanim_r_eyeball_joint");
HAnimJoint836->setCenter(new float[3]{-0.0336,1.6332,0.0502});
HAnimJoint836->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment837 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment837->setName("r_eyeball");
HAnimSegment837->setDEF("hanim_r_eyeball");
//<HAnimJoint name='r_eyeball_joint'/> visualization sphere within <HAnimSegment name='r_eyeball'/>
CTouchSensor* TouchSensor838 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor838->setDescription("HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball");
HAnimSegment837->addChildren(*TouchSensor838);

CTransform* Transform839 = (CTransform *)(m_pScene.createNode("Transform"));
Transform839->setTranslation(new float[3]{-0.0336,1.6332,0.0502});
CShape* Shape840 = (CShape *)(m_pScene.createNode("Shape"));
Shape840->setUSE("HAnimJointShape");
Transform839->addChildren(*Shape840);

HAnimSegment837->addChildren(*Transform839);

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_eyeball_joint'/> to <HAnimSite name='r_eyeball_site_view'/>
CShape* Shape841 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet842 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet842->setVertexCount(new int[1]{2});
CCoordinate* Coordinate843 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate843->setPoint(new float[6]{-0.0336,1.6332,0.0502,-0.034,1.64,0.05});
LineSet842->setCoord(*Coordinate843);

CColorRGBA* ColorRGBA844 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA844->setUSE("HAnimSiteViewpointLineColorRGBA");
LineSet842->setColor(*ColorRGBA844);

Shape841->setGeometry(LineSet842);

HAnimSegment837->addChildren(*Shape841);

CHAnimSite* HAnimSite845 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite845->setName("r_eyeball_site_view");
HAnimSite845->setDEF("hanim_r_eyeball_site_view");
HAnimSite845->setTranslation(new float[3]{-0.034,1.64,0.05});
CViewpoint* Viewpoint846 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint846->setDEF("hanim_r_eyeball_site_viewpoint");
Viewpoint846->setDescription("r_eyeball_site_viewpoint looking forward");
Viewpoint846->setOrientation(new float[4]{0,1,0,3.141593});
Viewpoint846->setPosition(new float[3]{0,0,0});
HAnimSite845->addChildren(*Viewpoint846);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor847 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor847->setDescription("HAnimSite Viewpoint hanim_r_eyeball_site_view");
Anchor847->setUrl(new CString[1]{"#hanim_r_eyeball_site_viewpoint"}, 1);
CLOD* LOD848 = (CLOD *)(m_pScene.createNode("LOD"));
LOD848->setForceTransitions(True);
LOD848->setRange(new float[1]{0.04});
CWorldInfo* WorldInfo849 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo849->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD848->addChildren(*WorldInfo849);

CShape* Shape850 = (CShape *)(m_pScene.createNode("Shape"));
Shape850->setUSE("HAnimSiteViewpointShape");
LOD848->addChildren(*Shape850);

Anchor847->addChildren(*LOD848);

HAnimSite845->addChildren(*Anchor847);

HAnimSegment837->addChildren(*HAnimSite845);

HAnimJoint836->addChildren(*HAnimSegment837);

HAnimJoint704->addChildren(*HAnimJoint836);

CHAnimJoint* HAnimJoint851 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint851->setName("r_eyelid_joint");
HAnimJoint851->setDEF("hanim_r_eyelid_joint");
HAnimJoint851->setCenter(new float[3]{-0.0336,1.6332,0.0502});
HAnimJoint851->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment852 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment852->setName("r_eyelid");
HAnimSegment852->setDEF("hanim_r_eyelid");
//<HAnimJoint name='r_eyelid_joint'/> visualization sphere within <HAnimSegment name='r_eyelid'/>
CTouchSensor* TouchSensor853 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor853->setDescription("HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid");
HAnimSegment852->addChildren(*TouchSensor853);

CTransform* Transform854 = (CTransform *)(m_pScene.createNode("Transform"));
Transform854->setTranslation(new float[3]{-0.0336,1.6332,0.0502});
CShape* Shape855 = (CShape *)(m_pScene.createNode("Shape"));
Shape855->setUSE("HAnimJointShape");
Transform854->addChildren(*Shape855);

HAnimSegment852->addChildren(*Transform854);

HAnimJoint851->addChildren(*HAnimSegment852);

HAnimJoint704->addChildren(*HAnimJoint851);

CHAnimJoint* HAnimJoint856 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint856->setName("r_eyebrow_joint");
HAnimJoint856->setDEF("hanim_r_eyebrow_joint");
HAnimJoint856->setCenter(new float[3]{-0.0336,1.635,0.0506});
HAnimJoint856->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment857 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment857->setName("r_eyebrow");
HAnimSegment857->setDEF("hanim_r_eyebrow");
//<HAnimJoint name='r_eyebrow_joint'/> visualization sphere within <HAnimSegment name='r_eyebrow'/>
CTouchSensor* TouchSensor858 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor858->setDescription("HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow");
HAnimSegment857->addChildren(*TouchSensor858);

CTransform* Transform859 = (CTransform *)(m_pScene.createNode("Transform"));
Transform859->setTranslation(new float[3]{-0.0336,1.635,0.0506});
CShape* Shape860 = (CShape *)(m_pScene.createNode("Shape"));
Shape860->setUSE("HAnimJointShape");
Transform859->addChildren(*Shape860);

HAnimSegment857->addChildren(*Transform859);

HAnimJoint856->addChildren(*HAnimSegment857);

HAnimJoint704->addChildren(*HAnimJoint856);

//Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint
CHAnimJoint* HAnimJoint861 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint861->setName("temporomandibular");
HAnimJoint861->setDEF("hanim_temporomandibular");
HAnimJoint861->setCenter(new float[3]{0,1.63,0.015});
HAnimJoint861->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment862 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment862->setName("jaw");
HAnimSegment862->setDEF("hanim_jaw");
//<HAnimJoint name='temporomandibular'/> visualization sphere within <HAnimSegment name='jaw'/>
CTouchSensor* TouchSensor863 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor863->setDescription("HAnimJoint temporomandibular, HAnimSegment jaw");
HAnimSegment862->addChildren(*TouchSensor863);

CTransform* Transform864 = (CTransform *)(m_pScene.createNode("Transform"));
Transform864->setTranslation(new float[3]{0,1.63,0.015});
CShape* Shape865 = (CShape *)(m_pScene.createNode("Shape"));
Shape865->setUSE("HAnimJointShape");
Transform864->addChildren(*Shape865);

HAnimSegment862->addChildren(*Transform864);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_l_site'/>
CShape* Shape866 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet867 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet867->setVertexCount(new int[1]{2});
CCoordinate* Coordinate868 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate868->setPoint(new float[6]{0,1.63,0.015,0.045,1.63,0});
LineSet867->setCoord(*Coordinate868);

CColorRGBA* ColorRGBA869 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA869->setUSE("HAnimSiteLineColorRGBA");
LineSet867->setColor(*ColorRGBA869);

Shape866->setGeometry(LineSet867);

HAnimSegment862->addChildren(*Shape866);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_r_site'/>
CShape* Shape870 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet871 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet871->setVertexCount(new int[1]{2});
CCoordinate* Coordinate872 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate872->setPoint(new float[6]{0,1.63,0.015,-0.045,1.63,0});
LineSet871->setCoord(*Coordinate872);

CColorRGBA* ColorRGBA873 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA873->setUSE("HAnimSiteLineColorRGBA");
LineSet871->setColor(*ColorRGBA873);

Shape870->setGeometry(LineSet871);

HAnimSegment862->addChildren(*Shape870);

CHAnimSite* HAnimSite874 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite874->setName("temporomandibular_l_site_pt");
HAnimSite874->setDEF("hanim_temporomandibular_l_site_pt");
HAnimSite874->setTranslation(new float[3]{0.045,1.63,0});
//HAnimSite visualization shape
CTouchSensor* TouchSensor875 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor875->setDescription("HAnimSite temporomandibular_l_site");
HAnimSite874->addChildren(*TouchSensor875);

CShape* Shape876 = (CShape *)(m_pScene.createNode("Shape"));
Shape876->setUSE("HAnimSiteShape");
HAnimSite874->addChildren(*Shape876);

HAnimSegment862->addChildren(*HAnimSite874);

CHAnimSite* HAnimSite877 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite877->setName("temporomandibular_r_site_pt");
HAnimSite877->setDEF("hanim_temporomandibular_r_site_pt");
HAnimSite877->setTranslation(new float[3]{-0.045,1.63,0});
//HAnimSite visualization shape
CTouchSensor* TouchSensor878 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor878->setDescription("HAnimSite temporomandibular_r_site");
HAnimSite877->addChildren(*TouchSensor878);

CShape* Shape879 = (CShape *)(m_pScene.createNode("Shape"));
Shape879->setUSE("HAnimSiteShape");
HAnimSite877->addChildren(*Shape879);

HAnimSegment862->addChildren(*HAnimSite877);

HAnimJoint861->addChildren(*HAnimSegment862);

HAnimJoint704->addChildren(*HAnimJoint861);

HAnimJoint695->addChildren(*HAnimJoint704);

HAnimJoint686->addChildren(*HAnimJoint695);

HAnimJoint677->addChildren(*HAnimJoint686);

HAnimJoint668->addChildren(*HAnimJoint677);

HAnimJoint659->addChildren(*HAnimJoint668);

HAnimJoint650->addChildren(*HAnimJoint659);

HAnimJoint627->addChildren(*HAnimJoint650);

HAnimJoint596->addChildren(*HAnimJoint627);

CHAnimJoint* HAnimJoint880 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint880->setName("l_sternoclavicular");
HAnimJoint880->setDEF("hanim_l_sternoclavicular");
HAnimJoint880->setCenter(new float[3]{0.082,1.4488,-0.0353});
HAnimJoint880->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment881 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment881->setName("l_clavicle");
HAnimSegment881->setDEF("hanim_l_clavicle");
//<HAnimJoint name='l_sternoclavicular'/> visualization sphere within <HAnimSegment name='l_clavicle'/>
CTouchSensor* TouchSensor882 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor882->setDescription("HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle");
HAnimSegment881->addChildren(*TouchSensor882);

CTransform* Transform883 = (CTransform *)(m_pScene.createNode("Transform"));
Transform883->setTranslation(new float[3]{0.082,1.4488,-0.0353});
CShape* Shape884 = (CShape *)(m_pScene.createNode("Shape"));
Shape884->setUSE("HAnimJointShape");
Transform883->addChildren(*Shape884);

HAnimSegment881->addChildren(*Transform883);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_sternoclavicular'/> to <HAnimJoint name='l_acromioclavicular'/>
CShape* Shape885 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet886 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet886->setVertexCount(new int[1]{2});
CCoordinate* Coordinate887 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate887->setPoint(new float[6]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424});
LineSet886->setCoord(*Coordinate887);

CColorRGBA* ColorRGBA888 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA888->setUSE("HAnimSegmentLineColorRGBA");
LineSet886->setColor(*ColorRGBA888);

Shape885->setGeometry(LineSet886);

HAnimSegment881->addChildren(*Shape885);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_clavicale'/>
CShape* Shape889 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet890 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet890->setVertexCount(new int[1]{2});
CCoordinate* Coordinate891 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate891->setPoint(new float[6]{0.082,1.4488,-0.0353,0.0271,1.4943,0.0394});
LineSet890->setCoord(*Coordinate891);

CColorRGBA* ColorRGBA892 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA892->setUSE("HAnimSiteLineColorRGBA");
LineSet890->setColor(*ColorRGBA892);

Shape889->setGeometry(LineSet890);

HAnimSegment881->addChildren(*Shape889);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_acromion'/>
CShape* Shape893 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet894 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet894->setVertexCount(new int[1]{2});
CCoordinate* Coordinate895 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate895->setPoint(new float[6]{0.082,1.4488,-0.0353,0.2032,1.476,-0.049});
LineSet894->setCoord(*Coordinate895);

CColorRGBA* ColorRGBA896 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA896->setUSE("HAnimSiteLineColorRGBA");
LineSet894->setColor(*ColorRGBA896);

Shape893->setGeometry(LineSet894);

HAnimSegment881->addChildren(*Shape893);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_ant'/>
CShape* Shape897 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet898 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet898->setVertexCount(new int[1]{2});
CCoordinate* Coordinate899 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate899->setPoint(new float[6]{0.082,1.4488,-0.0353,0.1777,1.4065,-0.0075});
LineSet898->setCoord(*Coordinate899);

CColorRGBA* ColorRGBA900 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA900->setUSE("HAnimSiteLineColorRGBA");
LineSet898->setColor(*ColorRGBA900);

Shape897->setGeometry(LineSet898);

HAnimSegment881->addChildren(*Shape897);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_post'/>
CShape* Shape901 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet902 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet902->setVertexCount(new int[1]{2});
CCoordinate* Coordinate903 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate903->setPoint(new float[6]{0.082,1.4488,-0.0353,0.1706,1.4072,-0.0875});
LineSet902->setCoord(*Coordinate903);

CColorRGBA* ColorRGBA904 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA904->setUSE("HAnimSiteLineColorRGBA");
LineSet902->setColor(*ColorRGBA904);

Shape901->setGeometry(LineSet902);

HAnimSegment881->addChildren(*Shape901);

CHAnimSite* HAnimSite905 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite905->setName("l_clavicale_pt");
HAnimSite905->setDEF("hanim_l_clavicale_pt");
HAnimSite905->setTranslation(new float[3]{0.0271,1.4943,0.0394});
//HAnimSite visualization shape
CTouchSensor* TouchSensor906 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor906->setDescription("HAnimSite l_clavicale");
HAnimSite905->addChildren(*TouchSensor906);

CShape* Shape907 = (CShape *)(m_pScene.createNode("Shape"));
Shape907->setUSE("HAnimSiteShape");
HAnimSite905->addChildren(*Shape907);

HAnimSegment881->addChildren(*HAnimSite905);

CHAnimSite* HAnimSite908 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite908->setName("l_acromion_pt");
HAnimSite908->setDEF("hanim_l_acromion_pt");
HAnimSite908->setTranslation(new float[3]{0.2032,1.476,-0.049});
//HAnimSite visualization shape
CTouchSensor* TouchSensor909 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor909->setDescription("HAnimSite l_acromion");
HAnimSite908->addChildren(*TouchSensor909);

CShape* Shape910 = (CShape *)(m_pScene.createNode("Shape"));
Shape910->setUSE("HAnimSiteShape");
HAnimSite908->addChildren(*Shape910);

HAnimSegment881->addChildren(*HAnimSite908);

CHAnimSite* HAnimSite911 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite911->setName("l_axilla_ant_pt");
HAnimSite911->setDEF("hanim_l_axilla_ant_pt");
HAnimSite911->setTranslation(new float[3]{0.1777,1.4065,-0.0075});
//HAnimSite visualization shape
CTouchSensor* TouchSensor912 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor912->setDescription("HAnimSite l_axilla_ant");
HAnimSite911->addChildren(*TouchSensor912);

CShape* Shape913 = (CShape *)(m_pScene.createNode("Shape"));
Shape913->setUSE("HAnimSiteShape");
HAnimSite911->addChildren(*Shape913);

HAnimSegment881->addChildren(*HAnimSite911);

CHAnimSite* HAnimSite914 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite914->setName("l_axilla_post_pt");
HAnimSite914->setDEF("hanim_l_axilla_post_pt");
HAnimSite914->setTranslation(new float[3]{0.1706,1.4072,-0.0875});
//HAnimSite visualization shape
CTouchSensor* TouchSensor915 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor915->setDescription("HAnimSite l_axilla_post");
HAnimSite914->addChildren(*TouchSensor915);

CShape* Shape916 = (CShape *)(m_pScene.createNode("Shape"));
Shape916->setUSE("HAnimSiteShape");
HAnimSite914->addChildren(*Shape916);

HAnimSegment881->addChildren(*HAnimSite914);

HAnimJoint880->addChildren(*HAnimSegment881);

CHAnimJoint* HAnimJoint917 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint917->setName("l_acromioclavicular");
HAnimJoint917->setDEF("hanim_l_acromioclavicular");
HAnimJoint917->setCenter(new float[3]{0.0962,1.4269,-0.0424});
HAnimJoint917->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment918 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment918->setName("l_scapula");
HAnimSegment918->setDEF("hanim_l_scapula");
//<HAnimJoint name='l_acromioclavicular'/> visualization sphere within <HAnimSegment name='l_scapula'/>
CTouchSensor* TouchSensor919 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor919->setDescription("HAnimJoint l_acromioclavicular, HAnimSegment l_scapula");
HAnimSegment918->addChildren(*TouchSensor919);

CTransform* Transform920 = (CTransform *)(m_pScene.createNode("Transform"));
Transform920->setTranslation(new float[3]{0.0962,1.4269,-0.0424});
CShape* Shape921 = (CShape *)(m_pScene.createNode("Shape"));
Shape921->setUSE("HAnimJointShape");
Transform920->addChildren(*Shape921);

HAnimSegment918->addChildren(*Transform920);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_acromioclavicular'/> to <HAnimJoint name='l_shoulder'/>
CShape* Shape922 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet923 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet923->setVertexCount(new int[1]{2});
CCoordinate* Coordinate924 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate924->setPoint(new float[6]{0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387});
LineSet923->setCoord(*Coordinate924);

CColorRGBA* ColorRGBA925 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA925->setUSE("HAnimSegmentLineColorRGBA");
LineSet923->setColor(*ColorRGBA925);

Shape922->setGeometry(LineSet923);

HAnimSegment918->addChildren(*Shape922);

HAnimJoint917->addChildren(*HAnimSegment918);

CHAnimJoint* HAnimJoint926 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint926->setName("l_shoulder");
HAnimJoint926->setDEF("hanim_l_shoulder");
HAnimJoint926->setCenter(new float[3]{0.2029,1.4376,-0.0387});
HAnimJoint926->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment927 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment927->setName("l_upperarm");
HAnimSegment927->setDEF("hanim_l_upperarm");
//<HAnimJoint name='l_shoulder'/> visualization sphere within <HAnimSegment name='l_upperarm'/>
CTouchSensor* TouchSensor928 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor928->setDescription("HAnimJoint l_shoulder, HAnimSegment l_upperarm");
HAnimSegment927->addChildren(*TouchSensor928);

CTransform* Transform929 = (CTransform *)(m_pScene.createNode("Transform"));
Transform929->setTranslation(new float[3]{0.2029,1.4376,-0.0387});
CShape* Shape930 = (CShape *)(m_pScene.createNode("Shape"));
Shape930->setUSE("HAnimJointShape");
Transform929->addChildren(*Shape930);

HAnimSegment927->addChildren(*Transform929);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_shoulder'/> to <HAnimJoint name='l_elbow'/>
CShape* Shape931 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet932 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet932->setVertexCount(new int[1]{2});
CCoordinate* Coordinate933 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate933->setPoint(new float[6]{0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682});
LineSet932->setCoord(*Coordinate933);

CColorRGBA* ColorRGBA934 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA934->setUSE("HAnimSegmentLineColorRGBA");
LineSet932->setColor(*ColorRGBA934);

Shape931->setGeometry(LineSet932);

HAnimSegment927->addChildren(*Shape931);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_shoulder'/> to <HAnimSite name='l_humeral_lateral_epicn'/>
CShape* Shape935 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet936 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet936->setVertexCount(new int[1]{2});
CCoordinate* Coordinate937 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate937->setPoint(new float[6]{0.2029,1.4376,-0.0387,0.228,1.1482,-0.11});
LineSet936->setCoord(*Coordinate937);

CColorRGBA* ColorRGBA938 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA938->setUSE("HAnimSiteLineColorRGBA");
LineSet936->setColor(*ColorRGBA938);

Shape935->setGeometry(LineSet936);

HAnimSegment927->addChildren(*Shape935);

CHAnimSite* HAnimSite939 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite939->setName("l_humeral_lateral_epicn_pt");
HAnimSite939->setDEF("hanim_l_humeral_lateral_epicn_pt");
HAnimSite939->setTranslation(new float[3]{0.228,1.1482,-0.11});
//HAnimSite visualization shape
CTouchSensor* TouchSensor940 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor940->setDescription("HAnimSite l_humeral_lateral_epicn");
HAnimSite939->addChildren(*TouchSensor940);

CShape* Shape941 = (CShape *)(m_pScene.createNode("Shape"));
Shape941->setUSE("HAnimSiteShape");
HAnimSite939->addChildren(*Shape941);

HAnimSegment927->addChildren(*HAnimSite939);

HAnimJoint926->addChildren(*HAnimSegment927);

CHAnimJoint* HAnimJoint942 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint942->setName("l_elbow");
HAnimJoint942->setDEF("hanim_l_elbow");
HAnimJoint942->setCenter(new float[3]{0.2014,1.1357,-0.0682});
HAnimJoint942->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment943 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment943->setName("l_forearm");
HAnimSegment943->setDEF("hanim_l_forearm");
//<HAnimJoint name='l_elbow'/> visualization sphere within <HAnimSegment name='l_forearm'/>
CTouchSensor* TouchSensor944 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor944->setDescription("HAnimJoint l_elbow, HAnimSegment l_forearm");
HAnimSegment943->addChildren(*TouchSensor944);

CTransform* Transform945 = (CTransform *)(m_pScene.createNode("Transform"));
Transform945->setTranslation(new float[3]{0.2014,1.1357,-0.0682});
CShape* Shape946 = (CShape *)(m_pScene.createNode("Shape"));
Shape946->setUSE("HAnimJointShape");
Transform945->addChildren(*Shape946);

HAnimSegment943->addChildren(*Transform945);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_elbow'/> to <HAnimJoint name='l_wrist'/>
CShape* Shape947 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet948 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet948->setVertexCount(new int[1]{2});
CCoordinate* Coordinate949 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate949->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583});
LineSet948->setCoord(*Coordinate949);

CColorRGBA* ColorRGBA950 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA950->setUSE("HAnimSegmentLineColorRGBA");
LineSet948->setColor(*ColorRGBA950);

Shape947->setGeometry(LineSet948);

HAnimSegment943->addChildren(*Shape947);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radial_styloid'/>
CShape* Shape951 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet952 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet952->setVertexCount(new int[1]{2});
CCoordinate* Coordinate953 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate953->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.1901,0.8645,-0.0415});
LineSet952->setCoord(*Coordinate953);

CColorRGBA* ColorRGBA954 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA954->setUSE("HAnimSiteLineColorRGBA");
LineSet952->setColor(*ColorRGBA954);

Shape951->setGeometry(LineSet952);

HAnimSegment943->addChildren(*Shape951);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_olecranon'/>
CShape* Shape955 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet956 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet956->setVertexCount(new int[1]{2});
CCoordinate* Coordinate957 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate957->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.1962,1.1375,-0.1123});
LineSet956->setCoord(*Coordinate957);

CColorRGBA* ColorRGBA958 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA958->setUSE("HAnimSiteLineColorRGBA");
LineSet956->setColor(*ColorRGBA958);

Shape955->setGeometry(LineSet956);

HAnimSegment943->addChildren(*Shape955);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_humeral_medial_epicn'/>
CShape* Shape959 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet960 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet960->setVertexCount(new int[1]{2});
CCoordinate* Coordinate961 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate961->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.1735,1.1272,-0.1113});
LineSet960->setCoord(*Coordinate961);

CColorRGBA* ColorRGBA962 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA962->setUSE("HAnimSiteLineColorRGBA");
LineSet960->setColor(*ColorRGBA962);

Shape959->setGeometry(LineSet960);

HAnimSegment943->addChildren(*Shape959);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radiale'/>
CShape* Shape963 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet964 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet964->setVertexCount(new int[1]{2});
CCoordinate* Coordinate965 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate965->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.2182,1.1212,-0.1167});
LineSet964->setCoord(*Coordinate965);

CColorRGBA* ColorRGBA966 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA966->setUSE("HAnimSiteLineColorRGBA");
LineSet964->setColor(*ColorRGBA966);

Shape963->setGeometry(LineSet964);

HAnimSegment943->addChildren(*Shape963);

CHAnimSite* HAnimSite967 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite967->setName("l_radial_styloid_pt");
HAnimSite967->setDEF("hanim_l_radial_styloid_pt");
HAnimSite967->setTranslation(new float[3]{0.1901,0.8645,-0.0415});
//HAnimSite visualization shape
CTouchSensor* TouchSensor968 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor968->setDescription("HAnimSite l_radial_styloid");
HAnimSite967->addChildren(*TouchSensor968);

CShape* Shape969 = (CShape *)(m_pScene.createNode("Shape"));
Shape969->setUSE("HAnimSiteShape");
HAnimSite967->addChildren(*Shape969);

HAnimSegment943->addChildren(*HAnimSite967);

CHAnimSite* HAnimSite970 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite970->setName("l_olecranon_pt");
HAnimSite970->setDEF("hanim_l_olecranon_pt");
HAnimSite970->setTranslation(new float[3]{0.1962,1.1375,-0.1123});
//HAnimSite visualization shape
CTouchSensor* TouchSensor971 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor971->setDescription("HAnimSite l_olecranon");
HAnimSite970->addChildren(*TouchSensor971);

CShape* Shape972 = (CShape *)(m_pScene.createNode("Shape"));
Shape972->setUSE("HAnimSiteShape");
HAnimSite970->addChildren(*Shape972);

HAnimSegment943->addChildren(*HAnimSite970);

CHAnimSite* HAnimSite973 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite973->setName("l_humeral_medial_epicn_pt");
HAnimSite973->setDEF("hanim_l_humeral_medial_epicn_pt");
HAnimSite973->setTranslation(new float[3]{0.1735,1.1272,-0.1113});
//HAnimSite visualization shape
CTouchSensor* TouchSensor974 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor974->setDescription("HAnimSite l_humeral_medial_epicn");
HAnimSite973->addChildren(*TouchSensor974);

CShape* Shape975 = (CShape *)(m_pScene.createNode("Shape"));
Shape975->setUSE("HAnimSiteShape");
HAnimSite973->addChildren(*Shape975);

HAnimSegment943->addChildren(*HAnimSite973);

CHAnimSite* HAnimSite976 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite976->setName("l_radiale_pt");
HAnimSite976->setDEF("hanim_l_radiale_pt");
HAnimSite976->setTranslation(new float[3]{0.2182,1.1212,-0.1167});
//HAnimSite visualization shape
CTouchSensor* TouchSensor977 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor977->setDescription("HAnimSite l_radiale");
HAnimSite976->addChildren(*TouchSensor977);

CShape* Shape978 = (CShape *)(m_pScene.createNode("Shape"));
Shape978->setUSE("HAnimSiteShape");
HAnimSite976->addChildren(*Shape978);

HAnimSegment943->addChildren(*HAnimSite976);

HAnimJoint942->addChildren(*HAnimSegment943);

CHAnimJoint* HAnimJoint979 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint979->setName("l_wrist");
HAnimJoint979->setDEF("hanim_l_wrist");
HAnimJoint979->setCenter(new float[3]{0.1984,0.8663,-0.0583});
HAnimJoint979->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment980 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment980->setName("l_hand");
HAnimSegment980->setDEF("hanim_l_hand");
//<HAnimJoint name='l_wrist'/> visualization sphere within <HAnimSegment name='l_hand'/>
CTouchSensor* TouchSensor981 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor981->setDescription("HAnimJoint l_wrist, HAnimSegment l_hand");
HAnimSegment980->addChildren(*TouchSensor981);

CTransform* Transform982 = (CTransform *)(m_pScene.createNode("Transform"));
Transform982->setTranslation(new float[3]{0.1984,0.8663,-0.0583});
CShape* Shape983 = (CShape *)(m_pScene.createNode("Shape"));
Shape983->setUSE("HAnimJointShape");
Transform982->addChildren(*Shape983);

HAnimSegment980->addChildren(*Transform982);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_thumb1'/>
CShape* Shape984 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet985 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet985->setVertexCount(new int[1]{2});
CCoordinate* Coordinate986 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate986->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534});
LineSet985->setCoord(*Coordinate986);

CColorRGBA* ColorRGBA987 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA987->setUSE("HAnimSegmentLineColorRGBA");
LineSet985->setColor(*ColorRGBA987);

Shape984->setGeometry(LineSet985);

HAnimSegment980->addChildren(*Shape984);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_index0'/>
CShape* Shape988 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet989 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet989->setVertexCount(new int[1]{2});
CCoordinate* Coordinate990 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate990->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028});
LineSet989->setCoord(*Coordinate990);

CColorRGBA* ColorRGBA991 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA991->setUSE("HAnimSegmentLineColorRGBA");
LineSet989->setColor(*ColorRGBA991);

Shape988->setGeometry(LineSet989);

HAnimSegment980->addChildren(*Shape988);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_middle0'/>
CShape* Shape992 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet993 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet993->setVertexCount(new int[1]{2});
CCoordinate* Coordinate994 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate994->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053});
LineSet993->setCoord(*Coordinate994);

CColorRGBA* ColorRGBA995 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA995->setUSE("HAnimSegmentLineColorRGBA");
LineSet993->setColor(*ColorRGBA995);

Shape992->setGeometry(LineSet993);

HAnimSegment980->addChildren(*Shape992);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_ring0'/>
CShape* Shape996 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet997 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet997->setVertexCount(new int[1]{2});
CCoordinate* Coordinate998 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate998->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794});
LineSet997->setCoord(*Coordinate998);

CColorRGBA* ColorRGBA999 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA999->setUSE("HAnimSegmentLineColorRGBA");
LineSet997->setColor(*ColorRGBA999);

Shape996->setGeometry(LineSet997);

HAnimSegment980->addChildren(*Shape996);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_pinky0'/>
CShape* Shape1000 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1001 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1001->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1002 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1002->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036});
LineSet1001->setCoord(*Coordinate1002);

CColorRGBA* ColorRGBA1003 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1003->setUSE("HAnimSegmentLineColorRGBA");
LineSet1001->setColor(*ColorRGBA1003);

Shape1000->setGeometry(LineSet1001);

HAnimSegment980->addChildren(*Shape1000);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_metacarpal_pha2'/>
CShape* Shape1004 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1005 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1005->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1006 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1006->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.2009,0.8139,-0.0237});
LineSet1005->setCoord(*Coordinate1006);

CColorRGBA* ColorRGBA1007 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1007->setUSE("HAnimSiteLineColorRGBA");
LineSet1005->setColor(*ColorRGBA1007);

Shape1004->setGeometry(LineSet1005);

HAnimSegment980->addChildren(*Shape1004);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_ulnar_styloid'/>
CShape* Shape1008 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1009 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1009->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1010 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1010->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.2142,0.8529,-0.0648});
LineSet1009->setCoord(*Coordinate1010);

CColorRGBA* ColorRGBA1011 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1011->setUSE("HAnimSiteLineColorRGBA");
LineSet1009->setColor(*ColorRGBA1011);

Shape1008->setGeometry(LineSet1009);

HAnimSegment980->addChildren(*Shape1008);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_metacarpal_pha5'/>
CShape* Shape1012 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1013 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1013->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1014 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1014->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1929,0.786,-0.1122});
LineSet1013->setCoord(*Coordinate1014);

CColorRGBA* ColorRGBA1015 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1015->setUSE("HAnimSiteLineColorRGBA");
LineSet1013->setColor(*ColorRGBA1015);

Shape1012->setGeometry(LineSet1013);

HAnimSegment980->addChildren(*Shape1012);

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_hand_front_view'/>
CShape* Shape1016 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1017 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1017->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1018 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1018->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.3,0.75,0.45});
LineSet1017->setCoord(*Coordinate1018);

CColorRGBA* ColorRGBA1019 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1019->setUSE("HAnimSiteViewpointLineColorRGBA");
LineSet1017->setColor(*ColorRGBA1019);

Shape1016->setGeometry(LineSet1017);

HAnimSegment980->addChildren(*Shape1016);

CHAnimSite* HAnimSite1020 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1020->setName("l_metacarpal_pha2_pt");
HAnimSite1020->setDEF("hanim_l_metacarpal_pha2_pt");
HAnimSite1020->setTranslation(new float[3]{0.2009,0.8139,-0.0237});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1021 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1021->setDescription("HAnimSite l_metacarpal_pha2");
HAnimSite1020->addChildren(*TouchSensor1021);

CShape* Shape1022 = (CShape *)(m_pScene.createNode("Shape"));
Shape1022->setUSE("HAnimSiteShape");
HAnimSite1020->addChildren(*Shape1022);

HAnimSegment980->addChildren(*HAnimSite1020);

CHAnimSite* HAnimSite1023 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1023->setName("l_ulnar_styloid_pt");
HAnimSite1023->setDEF("hanim_l_ulnar_styloid_pt");
HAnimSite1023->setTranslation(new float[3]{0.2142,0.8529,-0.0648});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1024 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1024->setDescription("HAnimSite l_ulnar_styloid");
HAnimSite1023->addChildren(*TouchSensor1024);

CShape* Shape1025 = (CShape *)(m_pScene.createNode("Shape"));
Shape1025->setUSE("HAnimSiteShape");
HAnimSite1023->addChildren(*Shape1025);

HAnimSegment980->addChildren(*HAnimSite1023);

CHAnimSite* HAnimSite1026 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1026->setName("l_metacarpal_pha5_pt");
HAnimSite1026->setDEF("hanim_l_metacarpal_pha5_pt");
HAnimSite1026->setTranslation(new float[3]{0.1929,0.786,-0.1122});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1027 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1027->setDescription("HAnimSite l_metacarpal_pha5");
HAnimSite1026->addChildren(*TouchSensor1027);

CShape* Shape1028 = (CShape *)(m_pScene.createNode("Shape"));
Shape1028->setUSE("HAnimSiteShape");
HAnimSite1026->addChildren(*Shape1028);

HAnimSegment980->addChildren(*HAnimSite1026);

CHAnimSite* HAnimSite1029 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1029->setName("l_hand_front_view");
HAnimSite1029->setDEF("hanim_l_hand_front_view");
HAnimSite1029->setTranslation(new float[3]{0.3,0.75,0.45});
CViewpoint* Viewpoint1030 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1030->setDEF("hanim_l_hand_front_viewpoint");
Viewpoint1030->setCenterOfRotation(new float[3]{0,0.7,0});
Viewpoint1030->setDescription("left hand front");
Viewpoint1030->setPosition(new float[3]{0,0,0});
HAnimSite1029->addChildren(*Viewpoint1030);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1031 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1031->setDescription("HAnimSite Viewpoint hanim_l_hand_front_view");
Anchor1031->setUrl(new CString[1]{"#hanim_l_hand_front_viewpoint"}, 1);
CLOD* LOD1032 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1032->setForceTransitions(True);
LOD1032->setRange(new float[1]{0.04});
CWorldInfo* WorldInfo1033 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1033->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1032->addChildren(*WorldInfo1033);

CShape* Shape1034 = (CShape *)(m_pScene.createNode("Shape"));
Shape1034->setUSE("HAnimSiteViewpointShape");
LOD1032->addChildren(*Shape1034);

Anchor1031->addChildren(*LOD1032);

HAnimSite1029->addChildren(*Anchor1031);

HAnimSegment980->addChildren(*HAnimSite1029);

HAnimJoint979->addChildren(*HAnimSegment980);

CHAnimJoint* HAnimJoint1035 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1035->setName("l_thumb1");
HAnimJoint1035->setDEF("hanim_l_thumb1");
HAnimJoint1035->setCenter(new float[3]{0.1924,0.8472,-0.0534});
HAnimJoint1035->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1036 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1036->setName("l_thumb_metacarpal");
HAnimSegment1036->setDEF("hanim_l_thumb_metacarpal");
//<HAnimJoint name='l_thumb1'/> visualization sphere within <HAnimSegment name='l_thumb_metacarpal'/>
CTouchSensor* TouchSensor1037 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1037->setDescription("HAnimJoint l_thumb1, HAnimSegment l_thumb_metacarpal");
HAnimSegment1036->addChildren(*TouchSensor1037);

CTransform* Transform1038 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1038->setTranslation(new float[3]{0.1924,0.8472,-0.0534});
CShape* Shape1039 = (CShape *)(m_pScene.createNode("Shape"));
Shape1039->setUSE("HAnimJointShape");
Transform1038->addChildren(*Shape1039);

HAnimSegment1036->addChildren(*Transform1038);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_thumb1'/> to <HAnimJoint name='l_thumb2'/>
CShape* Shape1040 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1041 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1041->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1042 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1042->setPoint(new float[6]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246});
LineSet1041->setCoord(*Coordinate1042);

CColorRGBA* ColorRGBA1043 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1043->setUSE("HAnimSegmentLineColorRGBA");
LineSet1041->setColor(*ColorRGBA1043);

Shape1040->setGeometry(LineSet1041);

HAnimSegment1036->addChildren(*Shape1040);

HAnimJoint1035->addChildren(*HAnimSegment1036);

CHAnimJoint* HAnimJoint1044 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1044->setName("l_thumb2");
HAnimJoint1044->setDEF("hanim_l_thumb2");
HAnimJoint1044->setCenter(new float[3]{0.1951,0.8226,0.0246});
HAnimJoint1044->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1045 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1045->setName("l_thumb_proximal");
HAnimSegment1045->setDEF("hanim_l_thumb_proximal");
//<HAnimJoint name='l_thumb2'/> visualization sphere within <HAnimSegment name='l_thumb_proximal'/>
CTouchSensor* TouchSensor1046 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1046->setDescription("HAnimJoint l_thumb2, HAnimSegment l_thumb_proximal");
HAnimSegment1045->addChildren(*TouchSensor1046);

CTransform* Transform1047 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1047->setTranslation(new float[3]{0.1951,0.8226,0.0246});
CShape* Shape1048 = (CShape *)(m_pScene.createNode("Shape"));
Shape1048->setUSE("HAnimJointShape");
Transform1047->addChildren(*Shape1048);

HAnimSegment1045->addChildren(*Transform1047);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_thumb2'/> to <HAnimJoint name='l_thumb3'/>
CShape* Shape1049 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1050 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1050->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1051 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1051->setPoint(new float[6]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464});
LineSet1050->setCoord(*Coordinate1051);

CColorRGBA* ColorRGBA1052 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1052->setUSE("HAnimSegmentLineColorRGBA");
LineSet1050->setColor(*ColorRGBA1052);

Shape1049->setGeometry(LineSet1050);

HAnimSegment1045->addChildren(*Shape1049);

HAnimJoint1044->addChildren(*HAnimSegment1045);

CHAnimJoint* HAnimJoint1053 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1053->setName("l_thumb3");
HAnimJoint1053->setDEF("hanim_l_thumb3");
HAnimJoint1053->setCenter(new float[3]{0.1955,0.8159,0.0464});
HAnimJoint1053->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1054 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1054->setName("l_thumb_distal");
HAnimSegment1054->setDEF("hanim_l_thumb_distal");
//<HAnimJoint name='l_thumb3'/> visualization sphere within <HAnimSegment name='l_thumb_distal'/>
CTouchSensor* TouchSensor1055 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1055->setDescription("HAnimJoint l_thumb3, HAnimSegment l_thumb_distal");
HAnimSegment1054->addChildren(*TouchSensor1055);

CTransform* Transform1056 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1056->setTranslation(new float[3]{0.1955,0.8159,0.0464});
CShape* Shape1057 = (CShape *)(m_pScene.createNode("Shape"));
Shape1057->setUSE("HAnimJointShape");
Transform1056->addChildren(*Shape1057);

HAnimSegment1054->addChildren(*Transform1056);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_thumb3'/> to <HAnimSite name='l_thumb_distal_tip'/>
CShape* Shape1058 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1059 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1059->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1060 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1060->setPoint(new float[6]{0.1955,0.8159,0.0464,0.1982,0.8061,0.0759});
LineSet1059->setCoord(*Coordinate1060);

CColorRGBA* ColorRGBA1061 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1061->setUSE("HAnimSiteLineColorRGBA");
LineSet1059->setColor(*ColorRGBA1061);

Shape1058->setGeometry(LineSet1059);

HAnimSegment1054->addChildren(*Shape1058);

CHAnimSite* HAnimSite1062 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1062->setName("l_thumb_distal_tip");
HAnimSite1062->setDEF("hanim_l_thumb_distal_tip");
HAnimSite1062->setTranslation(new float[3]{0.1982,0.8061,0.0759});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1063 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1063->setDescription("HAnimSite l_thumb_distal_tip");
HAnimSite1062->addChildren(*TouchSensor1063);

CShape* Shape1064 = (CShape *)(m_pScene.createNode("Shape"));
Shape1064->setUSE("HAnimSiteShape");
HAnimSite1062->addChildren(*Shape1064);

HAnimSegment1054->addChildren(*HAnimSite1062);

HAnimJoint1053->addChildren(*HAnimSegment1054);

HAnimJoint1044->addChildren(*HAnimJoint1053);

HAnimJoint1035->addChildren(*HAnimJoint1044);

HAnimJoint979->addChildren(*HAnimJoint1035);

CHAnimJoint* HAnimJoint1065 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1065->setName("l_index0");
HAnimJoint1065->setDEF("hanim_l_index0");
HAnimJoint1065->setCenter(new float[3]{0.1983,0.8024,-0.028});
HAnimJoint1065->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1066 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1066->setName("l_index_metacarpal");
HAnimSegment1066->setDEF("hanim_l_index_metacarpal");
//<HAnimJoint name='l_index0'/> visualization sphere within <HAnimSegment name='l_index_metacarpal'/>
CTouchSensor* TouchSensor1067 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1067->setDescription("HAnimJoint l_index0, HAnimSegment l_index_metacarpal");
HAnimSegment1066->addChildren(*TouchSensor1067);

CTransform* Transform1068 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1068->setTranslation(new float[3]{0.1983,0.8024,-0.028});
CShape* Shape1069 = (CShape *)(m_pScene.createNode("Shape"));
Shape1069->setUSE("HAnimJointShape");
Transform1068->addChildren(*Shape1069);

HAnimSegment1066->addChildren(*Transform1068);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_index0'/> to <HAnimJoint name='l_index1'/>
CShape* Shape1070 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1071 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1071->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1072 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1072->setPoint(new float[6]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028});
LineSet1071->setCoord(*Coordinate1072);

CColorRGBA* ColorRGBA1073 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1073->setUSE("HAnimSegmentLineColorRGBA");
LineSet1071->setColor(*ColorRGBA1073);

Shape1070->setGeometry(LineSet1071);

HAnimSegment1066->addChildren(*Shape1070);

HAnimJoint1065->addChildren(*HAnimSegment1066);

CHAnimJoint* HAnimJoint1074 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1074->setName("l_index1");
HAnimJoint1074->setDEF("hanim_l_index1");
HAnimJoint1074->setCenter(new float[3]{0.1983,0.7815,-0.028});
HAnimJoint1074->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1075 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1075->setName("l_index_proximal");
HAnimSegment1075->setDEF("hanim_l_index_proximal");
//<HAnimJoint name='l_index1'/> visualization sphere within <HAnimSegment name='l_index_proximal'/>
CTouchSensor* TouchSensor1076 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1076->setDescription("HAnimJoint l_index1, HAnimSegment l_index_proximal");
HAnimSegment1075->addChildren(*TouchSensor1076);

CTransform* Transform1077 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1077->setTranslation(new float[3]{0.1983,0.7815,-0.028});
CShape* Shape1078 = (CShape *)(m_pScene.createNode("Shape"));
Shape1078->setUSE("HAnimJointShape");
Transform1077->addChildren(*Shape1078);

HAnimSegment1075->addChildren(*Transform1077);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_index1'/> to <HAnimJoint name='l_index2'/>
CShape* Shape1079 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1080 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1080->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1081 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1081->setPoint(new float[6]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248});
LineSet1080->setCoord(*Coordinate1081);

CColorRGBA* ColorRGBA1082 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1082->setUSE("HAnimSegmentLineColorRGBA");
LineSet1080->setColor(*ColorRGBA1082);

Shape1079->setGeometry(LineSet1080);

HAnimSegment1075->addChildren(*Shape1079);

HAnimJoint1074->addChildren(*HAnimSegment1075);

CHAnimJoint* HAnimJoint1083 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1083->setName("l_index2");
HAnimJoint1083->setDEF("hanim_l_index2");
HAnimJoint1083->setCenter(new float[3]{0.2017,0.7363,-0.0248});
HAnimJoint1083->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1084 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1084->setName("l_index_middle");
HAnimSegment1084->setDEF("hanim_l_index_middle");
//<HAnimJoint name='l_index2'/> visualization sphere within <HAnimSegment name='l_index_middle'/>
CTouchSensor* TouchSensor1085 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1085->setDescription("HAnimJoint l_index2, HAnimSegment l_index_middle");
HAnimSegment1084->addChildren(*TouchSensor1085);

CTransform* Transform1086 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1086->setTranslation(new float[3]{0.2017,0.7363,-0.0248});
CShape* Shape1087 = (CShape *)(m_pScene.createNode("Shape"));
Shape1087->setUSE("HAnimJointShape");
Transform1086->addChildren(*Shape1087);

HAnimSegment1084->addChildren(*Transform1086);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_index2'/> to <HAnimJoint name='l_index3'/>
CShape* Shape1088 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1089 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1089->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1090 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1090->setPoint(new float[6]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236});
LineSet1089->setCoord(*Coordinate1090);

CColorRGBA* ColorRGBA1091 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1091->setUSE("HAnimSegmentLineColorRGBA");
LineSet1089->setColor(*ColorRGBA1091);

Shape1088->setGeometry(LineSet1089);

HAnimSegment1084->addChildren(*Shape1088);

HAnimJoint1083->addChildren(*HAnimSegment1084);

CHAnimJoint* HAnimJoint1092 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1092->setName("l_index3");
HAnimJoint1092->setDEF("hanim_l_index3");
HAnimJoint1092->setCenter(new float[3]{0.2028,0.7139,-0.0236});
HAnimJoint1092->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1093 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1093->setName("l_index_distal");
HAnimSegment1093->setDEF("hanim_l_index_distal");
//<HAnimJoint name='l_index3'/> visualization sphere within <HAnimSegment name='l_index_distal'/>
CTouchSensor* TouchSensor1094 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1094->setDescription("HAnimJoint l_index3, HAnimSegment l_index_distal");
HAnimSegment1093->addChildren(*TouchSensor1094);

CTransform* Transform1095 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1095->setTranslation(new float[3]{0.2028,0.7139,-0.0236});
CShape* Shape1096 = (CShape *)(m_pScene.createNode("Shape"));
Shape1096->setUSE("HAnimJointShape");
Transform1095->addChildren(*Shape1096);

HAnimSegment1093->addChildren(*Transform1095);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_index_distal_tip'/>
CShape* Shape1097 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1098 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1098->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1099 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1099->setPoint(new float[6]{0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245});
LineSet1098->setCoord(*Coordinate1099);

CColorRGBA* ColorRGBA1100 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1100->setUSE("HAnimSiteLineColorRGBA");
LineSet1098->setColor(*ColorRGBA1100);

Shape1097->setGeometry(LineSet1098);

HAnimSegment1093->addChildren(*Shape1097);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_dactylion'/>
CShape* Shape1101 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1102 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1102->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1103 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1103->setPoint(new float[6]{0.2028,0.7139,-0.0236,0.2056,0.6743,-0.0482});
LineSet1102->setCoord(*Coordinate1103);

CColorRGBA* ColorRGBA1104 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1104->setUSE("HAnimSiteLineColorRGBA");
LineSet1102->setColor(*ColorRGBA1104);

Shape1101->setGeometry(LineSet1102);

HAnimSegment1093->addChildren(*Shape1101);

CHAnimSite* HAnimSite1105 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1105->setName("l_index_distal_tip");
HAnimSite1105->setDEF("hanim_l_index_distal_tip");
HAnimSite1105->setTranslation(new float[3]{0.2089,0.6858,-0.0245});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1106 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1106->setDescription("HAnimSite l_index_distal_tip");
HAnimSite1105->addChildren(*TouchSensor1106);

CShape* Shape1107 = (CShape *)(m_pScene.createNode("Shape"));
Shape1107->setUSE("HAnimSiteShape");
HAnimSite1105->addChildren(*Shape1107);

HAnimSegment1093->addChildren(*HAnimSite1105);

CHAnimSite* HAnimSite1108 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1108->setName("l_dactylion_pt");
HAnimSite1108->setDEF("hanim_l_dactylion_pt");
HAnimSite1108->setTranslation(new float[3]{0.2056,0.6743,-0.0482});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1109 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1109->setDescription("HAnimSite l_dactylion");
HAnimSite1108->addChildren(*TouchSensor1109);

CShape* Shape1110 = (CShape *)(m_pScene.createNode("Shape"));
Shape1110->setUSE("HAnimSiteShape");
HAnimSite1108->addChildren(*Shape1110);

HAnimSegment1093->addChildren(*HAnimSite1108);

HAnimJoint1092->addChildren(*HAnimSegment1093);

HAnimJoint1083->addChildren(*HAnimJoint1092);

HAnimJoint1074->addChildren(*HAnimJoint1083);

HAnimJoint1065->addChildren(*HAnimJoint1074);

HAnimJoint979->addChildren(*HAnimJoint1065);

CHAnimJoint* HAnimJoint1111 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1111->setName("l_middle0");
HAnimJoint1111->setDEF("hanim_l_middle0");
HAnimJoint1111->setCenter(new float[3]{0.1987,0.8029,-0.053});
HAnimJoint1111->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1112 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1112->setName("l_middle_metacarpal");
HAnimSegment1112->setDEF("hanim_l_middle_metacarpal");
//<HAnimJoint name='l_middle0'/> visualization sphere within <HAnimSegment name='l_middle_metacarpal'/>
CTouchSensor* TouchSensor1113 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1113->setDescription("HAnimJoint l_middle0, HAnimSegment l_middle_metacarpal");
HAnimSegment1112->addChildren(*TouchSensor1113);

CTransform* Transform1114 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1114->setTranslation(new float[3]{0.1987,0.8029,-0.053});
CShape* Shape1115 = (CShape *)(m_pScene.createNode("Shape"));
Shape1115->setUSE("HAnimJointShape");
Transform1114->addChildren(*Shape1115);

HAnimSegment1112->addChildren(*Transform1114);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle0'/> to <HAnimJoint name='l_middle1'/>
CShape* Shape1116 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1117 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1117->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1118 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1118->setPoint(new float[6]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053});
LineSet1117->setCoord(*Coordinate1118);

CColorRGBA* ColorRGBA1119 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1119->setUSE("HAnimSegmentLineColorRGBA");
LineSet1117->setColor(*ColorRGBA1119);

Shape1116->setGeometry(LineSet1117);

HAnimSegment1112->addChildren(*Shape1116);

HAnimJoint1111->addChildren(*HAnimSegment1112);

CHAnimJoint* HAnimJoint1120 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1120->setName("l_middle1");
HAnimJoint1120->setDEF("hanim_l_middle1");
HAnimJoint1120->setCenter(new float[3]{0.1987,0.7818,-0.053});
HAnimJoint1120->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1121 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1121->setName("l_middle_proximal");
HAnimSegment1121->setDEF("hanim_l_middle_proximal");
//<HAnimJoint name='l_middle1'/> visualization sphere within <HAnimSegment name='l_middle_proximal'/>
CTouchSensor* TouchSensor1122 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1122->setDescription("HAnimJoint l_middle1, HAnimSegment l_middle_proximal");
HAnimSegment1121->addChildren(*TouchSensor1122);

CTransform* Transform1123 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1123->setTranslation(new float[3]{0.1987,0.7818,-0.053});
CShape* Shape1124 = (CShape *)(m_pScene.createNode("Shape"));
Shape1124->setUSE("HAnimJointShape");
Transform1123->addChildren(*Shape1124);

HAnimSegment1121->addChildren(*Transform1123);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle1'/> to <HAnimJoint name='l_middle2'/>
CShape* Shape1125 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1126 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1126->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1127 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1127->setPoint(new float[6]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503});
LineSet1126->setCoord(*Coordinate1127);

CColorRGBA* ColorRGBA1128 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1128->setUSE("HAnimSegmentLineColorRGBA");
LineSet1126->setColor(*ColorRGBA1128);

Shape1125->setGeometry(LineSet1126);

HAnimSegment1121->addChildren(*Shape1125);

HAnimJoint1120->addChildren(*HAnimSegment1121);

CHAnimJoint* HAnimJoint1129 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1129->setName("l_middle2");
HAnimJoint1129->setDEF("hanim_l_middle2");
HAnimJoint1129->setCenter(new float[3]{0.2013,0.7273,-0.0503});
HAnimJoint1129->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1130 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1130->setName("l_middle_middle");
HAnimSegment1130->setDEF("hanim_l_middle_middle");
//<HAnimJoint name='l_middle2'/> visualization sphere within <HAnimSegment name='l_middle_middle'/>
CTouchSensor* TouchSensor1131 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1131->setDescription("HAnimJoint l_middle2, HAnimSegment l_middle_middle");
HAnimSegment1130->addChildren(*TouchSensor1131);

CTransform* Transform1132 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1132->setTranslation(new float[3]{0.2013,0.7273,-0.0503});
CShape* Shape1133 = (CShape *)(m_pScene.createNode("Shape"));
Shape1133->setUSE("HAnimJointShape");
Transform1132->addChildren(*Shape1133);

HAnimSegment1130->addChildren(*Transform1132);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle2'/> to <HAnimJoint name='l_middle3'/>
CShape* Shape1134 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1135 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1135->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1136 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1136->setPoint(new float[6]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494});
LineSet1135->setCoord(*Coordinate1136);

CColorRGBA* ColorRGBA1137 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1137->setUSE("HAnimSegmentLineColorRGBA");
LineSet1135->setColor(*ColorRGBA1137);

Shape1134->setGeometry(LineSet1135);

HAnimSegment1130->addChildren(*Shape1134);

HAnimJoint1129->addChildren(*HAnimSegment1130);

CHAnimJoint* HAnimJoint1138 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1138->setName("l_middle3");
HAnimJoint1138->setDEF("hanim_l_middle3");
HAnimJoint1138->setCenter(new float[3]{0.2026,0.7011,-0.0494});
HAnimJoint1138->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1139 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1139->setName("l_middle_distal");
HAnimSegment1139->setDEF("hanim_l_middle_distal");
//<HAnimJoint name='l_middle3'/> visualization sphere within <HAnimSegment name='l_middle_distal'/>
CTouchSensor* TouchSensor1140 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1140->setDescription("HAnimJoint l_middle3, HAnimSegment l_middle_distal");
HAnimSegment1139->addChildren(*TouchSensor1140);

CTransform* Transform1141 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1141->setTranslation(new float[3]{0.2026,0.7011,-0.0494});
CShape* Shape1142 = (CShape *)(m_pScene.createNode("Shape"));
Shape1142->setUSE("HAnimJointShape");
Transform1141->addChildren(*Shape1142);

HAnimSegment1139->addChildren(*Transform1141);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_middle3'/> to <HAnimSite name='l_middle_distal_tip'/>
CShape* Shape1143 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1144 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1144->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1145 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1145->setPoint(new float[6]{0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491});
LineSet1144->setCoord(*Coordinate1145);

CColorRGBA* ColorRGBA1146 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1146->setUSE("HAnimSiteLineColorRGBA");
LineSet1144->setColor(*ColorRGBA1146);

Shape1143->setGeometry(LineSet1144);

HAnimSegment1139->addChildren(*Shape1143);

CHAnimSite* HAnimSite1147 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1147->setName("l_middle_distal_tip");
HAnimSite1147->setDEF("hanim_l_middle_distal_tip");
HAnimSite1147->setTranslation(new float[3]{0.208,0.6731,-0.0491});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1148 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1148->setDescription("HAnimSite l_middle_distal_tip");
HAnimSite1147->addChildren(*TouchSensor1148);

CShape* Shape1149 = (CShape *)(m_pScene.createNode("Shape"));
Shape1149->setUSE("HAnimSiteShape");
HAnimSite1147->addChildren(*Shape1149);

HAnimSegment1139->addChildren(*HAnimSite1147);

HAnimJoint1138->addChildren(*HAnimSegment1139);

HAnimJoint1129->addChildren(*HAnimJoint1138);

HAnimJoint1120->addChildren(*HAnimJoint1129);

HAnimJoint1111->addChildren(*HAnimJoint1120);

HAnimJoint979->addChildren(*HAnimJoint1111);

CHAnimJoint* HAnimJoint1150 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1150->setName("l_ring0");
HAnimJoint1150->setDEF("hanim_l_ring0");
HAnimJoint1150->setCenter(new float[3]{0.1956,0.8019,-0.0794});
HAnimJoint1150->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1151 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1151->setName("l_ring_metacarpal");
HAnimSegment1151->setDEF("hanim_l_ring_metacarpal");
//<HAnimJoint name='l_ring0'/> visualization sphere within <HAnimSegment name='l_ring_metacarpal'/>
CTouchSensor* TouchSensor1152 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1152->setDescription("HAnimJoint l_ring0, HAnimSegment l_ring_metacarpal");
HAnimSegment1151->addChildren(*TouchSensor1152);

CTransform* Transform1153 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1153->setTranslation(new float[3]{0.1956,0.8019,-0.0794});
CShape* Shape1154 = (CShape *)(m_pScene.createNode("Shape"));
Shape1154->setUSE("HAnimJointShape");
Transform1153->addChildren(*Shape1154);

HAnimSegment1151->addChildren(*Transform1153);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring0'/> to <HAnimJoint name='l_ring1'/>
CShape* Shape1155 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1156 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1156->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1157 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1157->setPoint(new float[6]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794});
LineSet1156->setCoord(*Coordinate1157);

CColorRGBA* ColorRGBA1158 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1158->setUSE("HAnimSegmentLineColorRGBA");
LineSet1156->setColor(*ColorRGBA1158);

Shape1155->setGeometry(LineSet1156);

HAnimSegment1151->addChildren(*Shape1155);

HAnimJoint1150->addChildren(*HAnimSegment1151);

CHAnimJoint* HAnimJoint1159 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1159->setName("l_ring1");
HAnimJoint1159->setDEF("hanim_l_ring1");
HAnimJoint1159->setCenter(new float[3]{0.1956,0.7815,-0.0794});
HAnimJoint1159->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1160 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1160->setName("l_ring_proximal");
HAnimSegment1160->setDEF("hanim_l_ring_proximal");
//<HAnimJoint name='l_ring1'/> visualization sphere within <HAnimSegment name='l_ring_proximal'/>
CTouchSensor* TouchSensor1161 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1161->setDescription("HAnimJoint l_ring1, HAnimSegment l_ring_proximal");
HAnimSegment1160->addChildren(*TouchSensor1161);

CTransform* Transform1162 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1162->setTranslation(new float[3]{0.1956,0.7815,-0.0794});
CShape* Shape1163 = (CShape *)(m_pScene.createNode("Shape"));
Shape1163->setUSE("HAnimJointShape");
Transform1162->addChildren(*Shape1163);

HAnimSegment1160->addChildren(*Transform1162);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring1'/> to <HAnimJoint name='l_ring2'/>
CShape* Shape1164 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1165 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1165->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1166 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1166->setPoint(new float[6]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777});
LineSet1165->setCoord(*Coordinate1166);

CColorRGBA* ColorRGBA1167 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1167->setUSE("HAnimSegmentLineColorRGBA");
LineSet1165->setColor(*ColorRGBA1167);

Shape1164->setGeometry(LineSet1165);

HAnimSegment1160->addChildren(*Shape1164);

HAnimJoint1159->addChildren(*HAnimSegment1160);

CHAnimJoint* HAnimJoint1168 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1168->setName("l_ring2");
HAnimJoint1168->setDEF("hanim_l_ring2");
HAnimJoint1168->setCenter(new float[3]{0.1973,0.7287,-0.0777});
HAnimJoint1168->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1169 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1169->setName("l_ring_middle");
HAnimSegment1169->setDEF("hanim_l_ring_middle");
//<HAnimJoint name='l_ring2'/> visualization sphere within <HAnimSegment name='l_ring_middle'/>
CTouchSensor* TouchSensor1170 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1170->setDescription("HAnimJoint l_ring2, HAnimSegment l_ring_middle");
HAnimSegment1169->addChildren(*TouchSensor1170);

CTransform* Transform1171 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1171->setTranslation(new float[3]{0.1973,0.7287,-0.0777});
CShape* Shape1172 = (CShape *)(m_pScene.createNode("Shape"));
Shape1172->setUSE("HAnimJointShape");
Transform1171->addChildren(*Shape1172);

HAnimSegment1169->addChildren(*Transform1171);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring2'/> to <HAnimJoint name='l_ring3'/>
CShape* Shape1173 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1174 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1174->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1175 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1175->setPoint(new float[6]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767});
LineSet1174->setCoord(*Coordinate1175);

CColorRGBA* ColorRGBA1176 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1176->setUSE("HAnimSegmentLineColorRGBA");
LineSet1174->setColor(*ColorRGBA1176);

Shape1173->setGeometry(LineSet1174);

HAnimSegment1169->addChildren(*Shape1173);

HAnimJoint1168->addChildren(*HAnimSegment1169);

CHAnimJoint* HAnimJoint1177 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1177->setName("l_ring3");
HAnimJoint1177->setDEF("hanim_l_ring3");
HAnimJoint1177->setCenter(new float[3]{0.1983,0.7045,-0.0767});
HAnimJoint1177->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1178 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1178->setName("l_ring_distal");
HAnimSegment1178->setDEF("hanim_l_ring_distal");
//<HAnimJoint name='l_ring3'/> visualization sphere within <HAnimSegment name='l_ring_distal'/>
CTouchSensor* TouchSensor1179 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1179->setDescription("HAnimJoint l_ring3, HAnimSegment l_ring_distal");
HAnimSegment1178->addChildren(*TouchSensor1179);

CTransform* Transform1180 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1180->setTranslation(new float[3]{0.1983,0.7045,-0.0767});
CShape* Shape1181 = (CShape *)(m_pScene.createNode("Shape"));
Shape1181->setUSE("HAnimJointShape");
Transform1180->addChildren(*Shape1181);

HAnimSegment1178->addChildren(*Transform1180);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ring3'/> to <HAnimSite name='l_ring_distal_tip'/>
CShape* Shape1182 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1183 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1183->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1184 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1184->setPoint(new float[6]{0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756});
LineSet1183->setCoord(*Coordinate1184);

CColorRGBA* ColorRGBA1185 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1185->setUSE("HAnimSiteLineColorRGBA");
LineSet1183->setColor(*ColorRGBA1185);

Shape1182->setGeometry(LineSet1183);

HAnimSegment1178->addChildren(*Shape1182);

CHAnimSite* HAnimSite1186 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1186->setName("l_ring_distal_tip");
HAnimSite1186->setDEF("hanim_l_ring_distal_tip");
HAnimSite1186->setTranslation(new float[3]{0.2035,0.675,-0.0756});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1187 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1187->setDescription("HAnimSite l_ring_distal_tip");
HAnimSite1186->addChildren(*TouchSensor1187);

CShape* Shape1188 = (CShape *)(m_pScene.createNode("Shape"));
Shape1188->setUSE("HAnimSiteShape");
HAnimSite1186->addChildren(*Shape1188);

HAnimSegment1178->addChildren(*HAnimSite1186);

HAnimJoint1177->addChildren(*HAnimSegment1178);

HAnimJoint1168->addChildren(*HAnimJoint1177);

HAnimJoint1159->addChildren(*HAnimJoint1168);

HAnimJoint1150->addChildren(*HAnimJoint1159);

HAnimJoint979->addChildren(*HAnimJoint1150);

CHAnimJoint* HAnimJoint1189 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1189->setName("l_pinky0");
HAnimJoint1189->setDEF("hanim_l_pinky0");
HAnimJoint1189->setCenter(new float[3]{0.1925,0.8066,-0.1036});
HAnimJoint1189->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1190 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1190->setName("l_pinky_metacarpal");
HAnimSegment1190->setDEF("hanim_l_pinky_metacarpal");
//<HAnimJoint name='l_pinky0'/> visualization sphere within <HAnimSegment name='l_pinky_metacarpal'/>
CTouchSensor* TouchSensor1191 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1191->setDescription("HAnimJoint l_pinky0, HAnimSegment l_pinky_metacarpal");
HAnimSegment1190->addChildren(*TouchSensor1191);

CTransform* Transform1192 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1192->setTranslation(new float[3]{0.1925,0.8066,-0.1036});
CShape* Shape1193 = (CShape *)(m_pScene.createNode("Shape"));
Shape1193->setUSE("HAnimJointShape");
Transform1192->addChildren(*Shape1193);

HAnimSegment1190->addChildren(*Transform1192);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky0'/> to <HAnimJoint name='l_pinky1'/>
CShape* Shape1194 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1195 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1195->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1196 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1196->setPoint(new float[6]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036});
LineSet1195->setCoord(*Coordinate1196);

CColorRGBA* ColorRGBA1197 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1197->setUSE("HAnimSegmentLineColorRGBA");
LineSet1195->setColor(*ColorRGBA1197);

Shape1194->setGeometry(LineSet1195);

HAnimSegment1190->addChildren(*Shape1194);

HAnimJoint1189->addChildren(*HAnimSegment1190);

CHAnimJoint* HAnimJoint1198 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1198->setName("l_pinky1");
HAnimJoint1198->setDEF("hanim_l_pinky1");
HAnimJoint1198->setCenter(new float[3]{0.1925,0.7866,-0.1036});
HAnimJoint1198->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1199 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1199->setName("l_pinky_proximal");
HAnimSegment1199->setDEF("hanim_l_pinky_proximal");
//<HAnimJoint name='l_pinky1'/> visualization sphere within <HAnimSegment name='l_pinky_proximal'/>
CTouchSensor* TouchSensor1200 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1200->setDescription("HAnimJoint l_pinky1, HAnimSegment l_pinky_proximal");
HAnimSegment1199->addChildren(*TouchSensor1200);

CTransform* Transform1201 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1201->setTranslation(new float[3]{0.1925,0.7866,-0.1036});
CShape* Shape1202 = (CShape *)(m_pScene.createNode("Shape"));
Shape1202->setUSE("HAnimJointShape");
Transform1201->addChildren(*Shape1202);

HAnimSegment1199->addChildren(*Transform1201);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky1'/> to <HAnimJoint name='l_pinky2'/>
CShape* Shape1203 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1204 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1204->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1205 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1205->setPoint(new float[6]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024});
LineSet1204->setCoord(*Coordinate1205);

CColorRGBA* ColorRGBA1206 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1206->setUSE("HAnimSegmentLineColorRGBA");
LineSet1204->setColor(*ColorRGBA1206);

Shape1203->setGeometry(LineSet1204);

HAnimSegment1199->addChildren(*Shape1203);

HAnimJoint1198->addChildren(*HAnimSegment1199);

CHAnimJoint* HAnimJoint1207 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1207->setName("l_pinky2");
HAnimJoint1207->setDEF("hanim_l_pinky2");
HAnimJoint1207->setCenter(new float[3]{0.1938,0.7452,-0.1024});
HAnimJoint1207->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1208 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1208->setName("l_pinky_middle");
HAnimSegment1208->setDEF("hanim_l_pinky_middle");
//<HAnimJoint name='l_pinky2'/> visualization sphere within <HAnimSegment name='l_pinky_middle'/>
CTouchSensor* TouchSensor1209 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1209->setDescription("HAnimJoint l_pinky2, HAnimSegment l_pinky_middle");
HAnimSegment1208->addChildren(*TouchSensor1209);

CTransform* Transform1210 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1210->setTranslation(new float[3]{0.1938,0.7452,-0.1024});
CShape* Shape1211 = (CShape *)(m_pScene.createNode("Shape"));
Shape1211->setUSE("HAnimJointShape");
Transform1210->addChildren(*Shape1211);

HAnimSegment1208->addChildren(*Transform1210);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky2'/> to <HAnimJoint name='l_pinky3'/>
CShape* Shape1212 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1213 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1213->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1214 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1214->setPoint(new float[6]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017});
LineSet1213->setCoord(*Coordinate1214);

CColorRGBA* ColorRGBA1215 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1215->setUSE("HAnimSegmentLineColorRGBA");
LineSet1213->setColor(*ColorRGBA1215);

Shape1212->setGeometry(LineSet1213);

HAnimSegment1208->addChildren(*Shape1212);

HAnimJoint1207->addChildren(*HAnimSegment1208);

CHAnimJoint* HAnimJoint1216 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1216->setName("l_pinky3");
HAnimJoint1216->setDEF("hanim_l_pinky3");
HAnimJoint1216->setCenter(new float[3]{0.1948,0.7277,-0.1017});
HAnimJoint1216->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1217 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1217->setName("l_pinky_distal");
HAnimSegment1217->setDEF("hanim_l_pinky_distal");
//<HAnimJoint name='l_pinky3'/> visualization sphere within <HAnimSegment name='l_pinky_distal'/>
CTouchSensor* TouchSensor1218 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1218->setDescription("HAnimJoint l_pinky3, HAnimSegment l_pinky_distal");
HAnimSegment1217->addChildren(*TouchSensor1218);

CTransform* Transform1219 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1219->setTranslation(new float[3]{0.1948,0.7277,-0.1017});
CShape* Shape1220 = (CShape *)(m_pScene.createNode("Shape"));
Shape1220->setUSE("HAnimJointShape");
Transform1219->addChildren(*Shape1220);

HAnimSegment1217->addChildren(*Transform1219);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_pinky3'/> to <HAnimSite name='l_pinky_distal_tip'/>
CShape* Shape1221 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1222 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1222->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1223 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1223->setPoint(new float[6]{0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012});
LineSet1222->setCoord(*Coordinate1223);

CColorRGBA* ColorRGBA1224 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1224->setUSE("HAnimSiteLineColorRGBA");
LineSet1222->setColor(*ColorRGBA1224);

Shape1221->setGeometry(LineSet1222);

HAnimSegment1217->addChildren(*Shape1221);

CHAnimSite* HAnimSite1225 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1225->setName("l_pinky_distal_tip");
HAnimSite1225->setDEF("hanim_l_pinky_distal_tip");
HAnimSite1225->setTranslation(new float[3]{0.2014,0.7009,-0.1012});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1226 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1226->setDescription("HAnimSite l_pinky_distal_tip");
HAnimSite1225->addChildren(*TouchSensor1226);

CShape* Shape1227 = (CShape *)(m_pScene.createNode("Shape"));
Shape1227->setUSE("HAnimSiteShape");
HAnimSite1225->addChildren(*Shape1227);

HAnimSegment1217->addChildren(*HAnimSite1225);

HAnimJoint1216->addChildren(*HAnimSegment1217);

HAnimJoint1207->addChildren(*HAnimJoint1216);

HAnimJoint1198->addChildren(*HAnimJoint1207);

HAnimJoint1189->addChildren(*HAnimJoint1198);

HAnimJoint979->addChildren(*HAnimJoint1189);

HAnimJoint942->addChildren(*HAnimJoint979);

HAnimJoint926->addChildren(*HAnimJoint942);

HAnimJoint917->addChildren(*HAnimJoint926);

HAnimJoint880->addChildren(*HAnimJoint917);

HAnimJoint596->addChildren(*HAnimJoint880);

CHAnimJoint* HAnimJoint1228 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1228->setName("r_sternoclavicular");
HAnimJoint1228->setDEF("hanim_r_sternoclavicular");
HAnimJoint1228->setCenter(new float[3]{-0.082,1.4488,-0.0353});
HAnimJoint1228->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1229 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1229->setName("r_clavicle");
HAnimSegment1229->setDEF("hanim_r_clavicle");
//<HAnimJoint name='r_sternoclavicular'/> visualization sphere within <HAnimSegment name='r_clavicle'/>
CTouchSensor* TouchSensor1230 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1230->setDescription("HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle");
HAnimSegment1229->addChildren(*TouchSensor1230);

CTransform* Transform1231 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1231->setTranslation(new float[3]{-0.082,1.4488,-0.0353});
CShape* Shape1232 = (CShape *)(m_pScene.createNode("Shape"));
Shape1232->setUSE("HAnimJointShape");
Transform1231->addChildren(*Shape1232);

HAnimSegment1229->addChildren(*Transform1231);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_sternoclavicular'/> to <HAnimJoint name='r_acromioclavicular'/>
CShape* Shape1233 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1234 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1234->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1235 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1235->setPoint(new float[6]{-0.082,1.4488,-0.0353,-0.0962,1.4269,-0.0424});
LineSet1234->setCoord(*Coordinate1235);

CColorRGBA* ColorRGBA1236 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1236->setUSE("HAnimSegmentLineColorRGBA");
LineSet1234->setColor(*ColorRGBA1236);

Shape1233->setGeometry(LineSet1234);

HAnimSegment1229->addChildren(*Shape1233);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_clavicale'/>
CShape* Shape1237 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1238 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1238->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1239 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1239->setPoint(new float[6]{-0.082,1.4488,-0.0353,-0.0115,1.4943,0.04});
LineSet1238->setCoord(*Coordinate1239);

CColorRGBA* ColorRGBA1240 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1240->setUSE("HAnimSiteLineColorRGBA");
LineSet1238->setColor(*ColorRGBA1240);

Shape1237->setGeometry(LineSet1238);

HAnimSegment1229->addChildren(*Shape1237);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_acromion'/>
CShape* Shape1241 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1242 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1242->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1243 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1243->setPoint(new float[6]{-0.082,1.4488,-0.0353,-0.1905,1.4791,-0.0431});
LineSet1242->setCoord(*Coordinate1243);

CColorRGBA* ColorRGBA1244 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1244->setUSE("HAnimSiteLineColorRGBA");
LineSet1242->setColor(*ColorRGBA1244);

Shape1241->setGeometry(LineSet1242);

HAnimSegment1229->addChildren(*Shape1241);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_ant'/>
CShape* Shape1245 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1246 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1246->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1247 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1247->setPoint(new float[6]{-0.082,1.4488,-0.0353,-0.1626,1.4072,-0.0031});
LineSet1246->setCoord(*Coordinate1247);

CColorRGBA* ColorRGBA1248 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1248->setUSE("HAnimSiteLineColorRGBA");
LineSet1246->setColor(*ColorRGBA1248);

Shape1245->setGeometry(LineSet1246);

HAnimSegment1229->addChildren(*Shape1245);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_post'/>
CShape* Shape1249 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1250 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1250->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1251 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1251->setPoint(new float[6]{-0.082,1.4488,-0.0353,-0.1603,1.4098,-0.0826});
LineSet1250->setCoord(*Coordinate1251);

CColorRGBA* ColorRGBA1252 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1252->setUSE("HAnimSiteLineColorRGBA");
LineSet1250->setColor(*ColorRGBA1252);

Shape1249->setGeometry(LineSet1250);

HAnimSegment1229->addChildren(*Shape1249);

CHAnimSite* HAnimSite1253 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1253->setName("r_clavicale_pt");
HAnimSite1253->setDEF("hanim_r_clavicale_pt");
HAnimSite1253->setTranslation(new float[3]{-0.0115,1.4943,0.04});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1254 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1254->setDescription("HAnimSite r_clavicale");
HAnimSite1253->addChildren(*TouchSensor1254);

CShape* Shape1255 = (CShape *)(m_pScene.createNode("Shape"));
Shape1255->setUSE("HAnimSiteShape");
HAnimSite1253->addChildren(*Shape1255);

HAnimSegment1229->addChildren(*HAnimSite1253);

CHAnimSite* HAnimSite1256 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1256->setName("r_acromion_pt");
HAnimSite1256->setDEF("hanim_r_acromion_pt");
HAnimSite1256->setTranslation(new float[3]{-0.1905,1.4791,-0.0431});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1257 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1257->setDescription("HAnimSite r_acromion");
HAnimSite1256->addChildren(*TouchSensor1257);

CShape* Shape1258 = (CShape *)(m_pScene.createNode("Shape"));
Shape1258->setUSE("HAnimSiteShape");
HAnimSite1256->addChildren(*Shape1258);

HAnimSegment1229->addChildren(*HAnimSite1256);

CHAnimSite* HAnimSite1259 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1259->setName("r_axilla_ant_pt");
HAnimSite1259->setDEF("hanim_r_axilla_ant_pt");
HAnimSite1259->setTranslation(new float[3]{-0.1626,1.4072,-0.0031});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1260 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1260->setDescription("HAnimSite r_axilla_ant");
HAnimSite1259->addChildren(*TouchSensor1260);

CShape* Shape1261 = (CShape *)(m_pScene.createNode("Shape"));
Shape1261->setUSE("HAnimSiteShape");
HAnimSite1259->addChildren(*Shape1261);

HAnimSegment1229->addChildren(*HAnimSite1259);

CHAnimSite* HAnimSite1262 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1262->setName("r_axilla_post_pt");
HAnimSite1262->setDEF("hanim_r_axilla_post_pt");
HAnimSite1262->setTranslation(new float[3]{-0.1603,1.4098,-0.0826});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1263 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1263->setDescription("HAnimSite r_axilla_post");
HAnimSite1262->addChildren(*TouchSensor1263);

CShape* Shape1264 = (CShape *)(m_pScene.createNode("Shape"));
Shape1264->setUSE("HAnimSiteShape");
HAnimSite1262->addChildren(*Shape1264);

HAnimSegment1229->addChildren(*HAnimSite1262);

HAnimJoint1228->addChildren(*HAnimSegment1229);

CHAnimJoint* HAnimJoint1265 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1265->setName("r_acromioclavicular");
HAnimJoint1265->setDEF("hanim_r_acromioclavicular");
HAnimJoint1265->setCenter(new float[3]{-0.0962,1.4269,-0.0424});
HAnimJoint1265->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1266 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1266->setName("r_scapula");
HAnimSegment1266->setDEF("hanim_r_scapula");
//<HAnimJoint name='r_acromioclavicular'/> visualization sphere within <HAnimSegment name='r_scapula'/>
CTouchSensor* TouchSensor1267 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1267->setDescription("HAnimJoint r_acromioclavicular, HAnimSegment r_scapula");
HAnimSegment1266->addChildren(*TouchSensor1267);

CTransform* Transform1268 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1268->setTranslation(new float[3]{-0.0962,1.4269,-0.0424});
CShape* Shape1269 = (CShape *)(m_pScene.createNode("Shape"));
Shape1269->setUSE("HAnimJointShape");
Transform1268->addChildren(*Shape1269);

HAnimSegment1266->addChildren(*Transform1268);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_acromioclavicular'/> to <HAnimJoint name='r_shoulder'/>
CShape* Shape1270 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1271 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1271->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1272 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1272->setPoint(new float[6]{-0.0962,1.4269,-0.0424,-0.2029,1.4376,-0.0387});
LineSet1271->setCoord(*Coordinate1272);

CColorRGBA* ColorRGBA1273 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1273->setUSE("HAnimSegmentLineColorRGBA");
LineSet1271->setColor(*ColorRGBA1273);

Shape1270->setGeometry(LineSet1271);

HAnimSegment1266->addChildren(*Shape1270);

HAnimJoint1265->addChildren(*HAnimSegment1266);

CHAnimJoint* HAnimJoint1274 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1274->setName("r_shoulder");
HAnimJoint1274->setDEF("hanim_r_shoulder");
HAnimJoint1274->setCenter(new float[3]{-0.2029,1.4376,-0.0387});
HAnimJoint1274->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1275 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1275->setName("r_upperarm");
HAnimSegment1275->setDEF("hanim_r_upperarm");
//<HAnimJoint name='r_shoulder'/> visualization sphere within <HAnimSegment name='r_upperarm'/>
CTouchSensor* TouchSensor1276 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1276->setDescription("HAnimJoint r_shoulder, HAnimSegment r_upperarm");
HAnimSegment1275->addChildren(*TouchSensor1276);

CTransform* Transform1277 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1277->setTranslation(new float[3]{-0.2029,1.4376,-0.0387});
CShape* Shape1278 = (CShape *)(m_pScene.createNode("Shape"));
Shape1278->setUSE("HAnimJointShape");
Transform1277->addChildren(*Shape1278);

HAnimSegment1275->addChildren(*Transform1277);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_shoulder'/> to <HAnimJoint name='r_elbow'/>
CShape* Shape1279 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1280 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1280->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1281 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1281->setPoint(new float[6]{-0.2029,1.4376,-0.0387,-0.2014,1.1357,-0.0682});
LineSet1280->setCoord(*Coordinate1281);

CColorRGBA* ColorRGBA1282 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1282->setUSE("HAnimSegmentLineColorRGBA");
LineSet1280->setColor(*ColorRGBA1282);

Shape1279->setGeometry(LineSet1280);

HAnimSegment1275->addChildren(*Shape1279);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_shoulder'/> to <HAnimSite name='r_humeral_lateral_epicn'/>
CShape* Shape1283 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1284 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1284->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1285 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1285->setPoint(new float[6]{-0.2029,1.4376,-0.0387,-0.2224,1.1517,-0.1033});
LineSet1284->setCoord(*Coordinate1285);

CColorRGBA* ColorRGBA1286 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1286->setUSE("HAnimSiteLineColorRGBA");
LineSet1284->setColor(*ColorRGBA1286);

Shape1283->setGeometry(LineSet1284);

HAnimSegment1275->addChildren(*Shape1283);

CHAnimSite* HAnimSite1287 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1287->setName("r_humeral_lateral_epicn_pt");
HAnimSite1287->setDEF("hanim_r_humeral_lateral_epicn_pt");
HAnimSite1287->setTranslation(new float[3]{-0.2224,1.1517,-0.1033});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1288 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1288->setDescription("HAnimSite r_humeral_lateral_epicn");
HAnimSite1287->addChildren(*TouchSensor1288);

CShape* Shape1289 = (CShape *)(m_pScene.createNode("Shape"));
Shape1289->setUSE("HAnimSiteShape");
HAnimSite1287->addChildren(*Shape1289);

HAnimSegment1275->addChildren(*HAnimSite1287);

HAnimJoint1274->addChildren(*HAnimSegment1275);

CHAnimJoint* HAnimJoint1290 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1290->setName("r_elbow");
HAnimJoint1290->setDEF("hanim_r_elbow");
HAnimJoint1290->setCenter(new float[3]{-0.2014,1.1357,-0.0682});
HAnimJoint1290->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1291 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1291->setName("r_forearm");
HAnimSegment1291->setDEF("hanim_r_forearm");
//<HAnimJoint name='r_elbow'/> visualization sphere within <HAnimSegment name='r_forearm'/>
CTouchSensor* TouchSensor1292 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1292->setDescription("HAnimJoint r_elbow, HAnimSegment r_forearm");
HAnimSegment1291->addChildren(*TouchSensor1292);

CTransform* Transform1293 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1293->setTranslation(new float[3]{-0.2014,1.1357,-0.0682});
CShape* Shape1294 = (CShape *)(m_pScene.createNode("Shape"));
Shape1294->setUSE("HAnimJointShape");
Transform1293->addChildren(*Shape1294);

HAnimSegment1291->addChildren(*Transform1293);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_elbow'/> to <HAnimJoint name='r_wrist'/>
CShape* Shape1295 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1296 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1296->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1297 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1297->setPoint(new float[6]{-0.2014,1.1357,-0.0682,-0.1984,0.8663,-0.0583});
LineSet1296->setCoord(*Coordinate1297);

CColorRGBA* ColorRGBA1298 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1298->setUSE("HAnimSegmentLineColorRGBA");
LineSet1296->setColor(*ColorRGBA1298);

Shape1295->setGeometry(LineSet1296);

HAnimSegment1291->addChildren(*Shape1295);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radial_styloid'/>
CShape* Shape1299 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1300 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1300->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1301 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1301->setPoint(new float[6]{-0.2014,1.1357,-0.0682,-0.1884,0.8676,-0.036});
LineSet1300->setCoord(*Coordinate1301);

CColorRGBA* ColorRGBA1302 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1302->setUSE("HAnimSiteLineColorRGBA");
LineSet1300->setColor(*ColorRGBA1302);

Shape1299->setGeometry(LineSet1300);

HAnimSegment1291->addChildren(*Shape1299);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_olecranon'/>
CShape* Shape1303 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1304 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1304->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1305 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1305->setPoint(new float[6]{-0.2014,1.1357,-0.0682,-0.1907,1.1405,-0.1065});
LineSet1304->setCoord(*Coordinate1305);

CColorRGBA* ColorRGBA1306 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1306->setUSE("HAnimSiteLineColorRGBA");
LineSet1304->setColor(*ColorRGBA1306);

Shape1303->setGeometry(LineSet1304);

HAnimSegment1291->addChildren(*Shape1303);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_humeral_medial_epicn'/>
CShape* Shape1307 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1308 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1308->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1309 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1309->setPoint(new float[6]{-0.2014,1.1357,-0.0682,-0.168,1.1298,-0.1062});
LineSet1308->setCoord(*Coordinate1309);

CColorRGBA* ColorRGBA1310 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1310->setUSE("HAnimSiteLineColorRGBA");
LineSet1308->setColor(*ColorRGBA1310);

Shape1307->setGeometry(LineSet1308);

HAnimSegment1291->addChildren(*Shape1307);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radiale'/>
CShape* Shape1311 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1312 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1312->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1313 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1313->setPoint(new float[6]{-0.2014,1.1357,-0.0682,-0.213,1.1305,-0.1091});
LineSet1312->setCoord(*Coordinate1313);

CColorRGBA* ColorRGBA1314 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1314->setUSE("HAnimSiteLineColorRGBA");
LineSet1312->setColor(*ColorRGBA1314);

Shape1311->setGeometry(LineSet1312);

HAnimSegment1291->addChildren(*Shape1311);

CHAnimSite* HAnimSite1315 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1315->setName("r_radial_styloid_pt");
HAnimSite1315->setDEF("hanim_r_radial_styloid_pt");
HAnimSite1315->setTranslation(new float[3]{-0.1884,0.8676,-0.036});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1316 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1316->setDescription("HAnimSite r_radial_styloid");
HAnimSite1315->addChildren(*TouchSensor1316);

CShape* Shape1317 = (CShape *)(m_pScene.createNode("Shape"));
Shape1317->setUSE("HAnimSiteShape");
HAnimSite1315->addChildren(*Shape1317);

HAnimSegment1291->addChildren(*HAnimSite1315);

CHAnimSite* HAnimSite1318 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1318->setName("r_olecranon_pt");
HAnimSite1318->setDEF("hanim_r_olecranon_pt");
HAnimSite1318->setTranslation(new float[3]{-0.1907,1.1405,-0.1065});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1319 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1319->setDescription("HAnimSite r_olecranon");
HAnimSite1318->addChildren(*TouchSensor1319);

CShape* Shape1320 = (CShape *)(m_pScene.createNode("Shape"));
Shape1320->setUSE("HAnimSiteShape");
HAnimSite1318->addChildren(*Shape1320);

HAnimSegment1291->addChildren(*HAnimSite1318);

CHAnimSite* HAnimSite1321 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1321->setName("r_humeral_medial_epicn_pt");
HAnimSite1321->setDEF("hanim_r_humeral_medial_epicn_pt");
HAnimSite1321->setTranslation(new float[3]{-0.168,1.1298,-0.1062});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1322 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1322->setDescription("HAnimSite r_humeral_medial_epicn");
HAnimSite1321->addChildren(*TouchSensor1322);

CShape* Shape1323 = (CShape *)(m_pScene.createNode("Shape"));
Shape1323->setUSE("HAnimSiteShape");
HAnimSite1321->addChildren(*Shape1323);

HAnimSegment1291->addChildren(*HAnimSite1321);

CHAnimSite* HAnimSite1324 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1324->setName("r_radiale_pt");
HAnimSite1324->setDEF("hanim_r_radiale_pt");
HAnimSite1324->setTranslation(new float[3]{-0.213,1.1305,-0.1091});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1325 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1325->setDescription("HAnimSite r_radiale");
HAnimSite1324->addChildren(*TouchSensor1325);

CShape* Shape1326 = (CShape *)(m_pScene.createNode("Shape"));
Shape1326->setUSE("HAnimSiteShape");
HAnimSite1324->addChildren(*Shape1326);

HAnimSegment1291->addChildren(*HAnimSite1324);

HAnimJoint1290->addChildren(*HAnimSegment1291);

CHAnimJoint* HAnimJoint1327 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1327->setName("r_wrist");
HAnimJoint1327->setDEF("hanim_r_wrist");
HAnimJoint1327->setCenter(new float[3]{-0.1984,0.8663,-0.0583});
HAnimJoint1327->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1328 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1328->setName("r_hand");
HAnimSegment1328->setDEF("hanim_r_hand");
//<HAnimJoint name='r_wrist'/> visualization sphere within <HAnimSegment name='r_hand'/>
CTouchSensor* TouchSensor1329 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1329->setDescription("HAnimJoint r_wrist, HAnimSegment r_hand");
HAnimSegment1328->addChildren(*TouchSensor1329);

CTransform* Transform1330 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1330->setTranslation(new float[3]{-0.1984,0.8663,-0.0583});
CShape* Shape1331 = (CShape *)(m_pScene.createNode("Shape"));
Shape1331->setUSE("HAnimJointShape");
Transform1330->addChildren(*Shape1331);

HAnimSegment1328->addChildren(*Transform1330);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_thumb1'/>
CShape* Shape1332 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1333 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1333->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1334 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1334->setPoint(new float[6]{-0.1984,0.8663,-0.0583,-0.1924,0.8472,-0.0534});
LineSet1333->setCoord(*Coordinate1334);

CColorRGBA* ColorRGBA1335 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1335->setUSE("HAnimSegmentLineColorRGBA");
LineSet1333->setColor(*ColorRGBA1335);

Shape1332->setGeometry(LineSet1333);

HAnimSegment1328->addChildren(*Shape1332);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_index0'/>
CShape* Shape1336 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1337 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1337->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1338 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1338->setPoint(new float[6]{-0.1984,0.8663,-0.0583,-0.1983,0.8024,-0.028});
LineSet1337->setCoord(*Coordinate1338);

CColorRGBA* ColorRGBA1339 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1339->setUSE("HAnimSegmentLineColorRGBA");
LineSet1337->setColor(*ColorRGBA1339);

Shape1336->setGeometry(LineSet1337);

HAnimSegment1328->addChildren(*Shape1336);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_middle0'/>
CShape* Shape1340 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1341 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1341->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1342 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1342->setPoint(new float[6]{-0.1984,0.8663,-0.0583,-0.1987,0.8029,-0.053});
LineSet1341->setCoord(*Coordinate1342);

CColorRGBA* ColorRGBA1343 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1343->setUSE("HAnimSegmentLineColorRGBA");
LineSet1341->setColor(*ColorRGBA1343);

Shape1340->setGeometry(LineSet1341);

HAnimSegment1328->addChildren(*Shape1340);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_ring0'/>
CShape* Shape1344 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1345 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1345->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1346 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1346->setPoint(new float[6]{-0.1984,0.8663,-0.0583,-0.1956,0.8019,-0.0794});
LineSet1345->setCoord(*Coordinate1346);

CColorRGBA* ColorRGBA1347 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1347->setUSE("HAnimSegmentLineColorRGBA");
LineSet1345->setColor(*ColorRGBA1347);

Shape1344->setGeometry(LineSet1345);

HAnimSegment1328->addChildren(*Shape1344);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_pinky0'/>
CShape* Shape1348 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1349 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1349->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1350 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1350->setPoint(new float[6]{-0.1984,0.8663,-0.0583,-0.1925,0.8066,-0.1036});
LineSet1349->setCoord(*Coordinate1350);

CColorRGBA* ColorRGBA1351 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1351->setUSE("HAnimSegmentLineColorRGBA");
LineSet1349->setColor(*ColorRGBA1351);

Shape1348->setGeometry(LineSet1349);

HAnimSegment1328->addChildren(*Shape1348);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_metacarpal_pha2'/>
CShape* Shape1352 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1353 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1353->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1354 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1354->setPoint(new float[6]{-0.1984,0.8663,-0.0583,-0.1977,0.8169,-0.0177});
LineSet1353->setCoord(*Coordinate1354);

CColorRGBA* ColorRGBA1355 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1355->setUSE("HAnimSiteLineColorRGBA");
LineSet1353->setColor(*ColorRGBA1355);

Shape1352->setGeometry(LineSet1353);

HAnimSegment1328->addChildren(*Shape1352);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_ulnar_styloid'/>
CShape* Shape1356 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1357 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1357->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1358 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1358->setPoint(new float[6]{-0.1984,0.8663,-0.0583,-0.2117,0.8562,-0.0584});
LineSet1357->setCoord(*Coordinate1358);

CColorRGBA* ColorRGBA1359 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1359->setUSE("HAnimSiteLineColorRGBA");
LineSet1357->setColor(*ColorRGBA1359);

Shape1356->setGeometry(LineSet1357);

HAnimSegment1328->addChildren(*Shape1356);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_metacarpal_pha5'/>
CShape* Shape1360 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1361 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1361->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1362 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1362->setPoint(new float[6]{-0.1984,0.8663,-0.0583,-0.1929,0.789,-0.1064});
LineSet1361->setCoord(*Coordinate1362);

CColorRGBA* ColorRGBA1363 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1363->setUSE("HAnimSiteLineColorRGBA");
LineSet1361->setColor(*ColorRGBA1363);

Shape1360->setGeometry(LineSet1361);

HAnimSegment1328->addChildren(*Shape1360);

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_hand_front_view'/>
CShape* Shape1364 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1365 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1365->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1366 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1366->setPoint(new float[6]{-0.1984,0.8663,-0.0583,-0.3,0.75,0.45});
LineSet1365->setCoord(*Coordinate1366);

CColorRGBA* ColorRGBA1367 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1367->setUSE("HAnimSiteViewpointLineColorRGBA");
LineSet1365->setColor(*ColorRGBA1367);

Shape1364->setGeometry(LineSet1365);

HAnimSegment1328->addChildren(*Shape1364);

CHAnimSite* HAnimSite1368 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1368->setName("r_metacarpal_pha2_pt");
HAnimSite1368->setDEF("hanim_r_metacarpal_pha2_pt");
HAnimSite1368->setTranslation(new float[3]{-0.1977,0.8169,-0.0177});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1369 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1369->setDescription("HAnimSite r_metacarpal_pha2");
HAnimSite1368->addChildren(*TouchSensor1369);

CShape* Shape1370 = (CShape *)(m_pScene.createNode("Shape"));
Shape1370->setUSE("HAnimSiteShape");
HAnimSite1368->addChildren(*Shape1370);

HAnimSegment1328->addChildren(*HAnimSite1368);

CHAnimSite* HAnimSite1371 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1371->setName("r_ulnar_styloid_pt");
HAnimSite1371->setDEF("hanim_r_ulnar_styloid_pt");
HAnimSite1371->setTranslation(new float[3]{-0.2117,0.8562,-0.0584});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1372 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1372->setDescription("HAnimSite r_ulnar_styloid");
HAnimSite1371->addChildren(*TouchSensor1372);

CShape* Shape1373 = (CShape *)(m_pScene.createNode("Shape"));
Shape1373->setUSE("HAnimSiteShape");
HAnimSite1371->addChildren(*Shape1373);

HAnimSegment1328->addChildren(*HAnimSite1371);

CHAnimSite* HAnimSite1374 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1374->setName("r_metacarpal_pha5_pt");
HAnimSite1374->setDEF("hanim_r_metacarpal_pha5_pt");
HAnimSite1374->setTranslation(new float[3]{-0.1929,0.789,-0.1064});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1375 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1375->setDescription("HAnimSite r_metacarpal_pha5");
HAnimSite1374->addChildren(*TouchSensor1375);

CShape* Shape1376 = (CShape *)(m_pScene.createNode("Shape"));
Shape1376->setUSE("HAnimSiteShape");
HAnimSite1374->addChildren(*Shape1376);

HAnimSegment1328->addChildren(*HAnimSite1374);

CHAnimSite* HAnimSite1377 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1377->setName("r_hand_front_view");
HAnimSite1377->setDEF("hanim_r_hand_front_view");
HAnimSite1377->setTranslation(new float[3]{-0.3,0.75,0.45});
CViewpoint* Viewpoint1378 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1378->setDEF("hanim_r_hand_front_viewpoint");
Viewpoint1378->setCenterOfRotation(new float[3]{0,0.7,0});
Viewpoint1378->setDescription("right hand front");
Viewpoint1378->setPosition(new float[3]{0,0,0});
HAnimSite1377->addChildren(*Viewpoint1378);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1379 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1379->setDescription("HAnimSite Viewpoint hanim_r_hand_front_view");
Anchor1379->setUrl(new CString[1]{"#hanim_r_hand_front_viewpoint"}, 1);
CLOD* LOD1380 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1380->setForceTransitions(True);
LOD1380->setRange(new float[1]{0.04});
CWorldInfo* WorldInfo1381 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1381->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1380->addChildren(*WorldInfo1381);

CShape* Shape1382 = (CShape *)(m_pScene.createNode("Shape"));
Shape1382->setUSE("HAnimSiteViewpointShape");
LOD1380->addChildren(*Shape1382);

Anchor1379->addChildren(*LOD1380);

HAnimSite1377->addChildren(*Anchor1379);

HAnimSegment1328->addChildren(*HAnimSite1377);

HAnimJoint1327->addChildren(*HAnimSegment1328);

CHAnimJoint* HAnimJoint1383 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1383->setName("r_thumb1");
HAnimJoint1383->setDEF("hanim_r_thumb1");
HAnimJoint1383->setCenter(new float[3]{-0.1924,0.8472,-0.0534});
HAnimJoint1383->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1384 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1384->setName("r_thumb_metacarpal");
HAnimSegment1384->setDEF("hanim_r_thumb_metacarpal");
//<HAnimJoint name='r_thumb1'/> visualization sphere within <HAnimSegment name='r_thumb_metacarpal'/>
CTouchSensor* TouchSensor1385 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1385->setDescription("HAnimJoint r_thumb1, HAnimSegment r_thumb_metacarpal");
HAnimSegment1384->addChildren(*TouchSensor1385);

CTransform* Transform1386 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1386->setTranslation(new float[3]{-0.1924,0.8472,-0.0534});
CShape* Shape1387 = (CShape *)(m_pScene.createNode("Shape"));
Shape1387->setUSE("HAnimJointShape");
Transform1386->addChildren(*Shape1387);

HAnimSegment1384->addChildren(*Transform1386);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_thumb1'/> to <HAnimJoint name='r_thumb2'/>
CShape* Shape1388 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1389 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1389->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1390 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1390->setPoint(new float[6]{-0.1924,0.8472,-0.0534,-0.1951,0.8226,0.0246});
LineSet1389->setCoord(*Coordinate1390);

CColorRGBA* ColorRGBA1391 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1391->setUSE("HAnimSegmentLineColorRGBA");
LineSet1389->setColor(*ColorRGBA1391);

Shape1388->setGeometry(LineSet1389);

HAnimSegment1384->addChildren(*Shape1388);

HAnimJoint1383->addChildren(*HAnimSegment1384);

CHAnimJoint* HAnimJoint1392 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1392->setName("r_thumb2");
HAnimJoint1392->setDEF("hanim_r_thumb2");
HAnimJoint1392->setCenter(new float[3]{-0.1951,0.8226,0.0246});
HAnimJoint1392->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1393 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1393->setName("r_thumb_proximal");
HAnimSegment1393->setDEF("hanim_r_thumb_proximal");
//<HAnimJoint name='r_thumb2'/> visualization sphere within <HAnimSegment name='r_thumb_proximal'/>
CTouchSensor* TouchSensor1394 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1394->setDescription("HAnimJoint r_thumb2, HAnimSegment r_thumb_proximal");
HAnimSegment1393->addChildren(*TouchSensor1394);

CTransform* Transform1395 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1395->setTranslation(new float[3]{-0.1951,0.8226,0.0246});
CShape* Shape1396 = (CShape *)(m_pScene.createNode("Shape"));
Shape1396->setUSE("HAnimJointShape");
Transform1395->addChildren(*Shape1396);

HAnimSegment1393->addChildren(*Transform1395);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_thumb2'/> to <HAnimJoint name='r_thumb3'/>
CShape* Shape1397 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1398 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1398->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1399 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1399->setPoint(new float[6]{-0.1951,0.8226,0.0246,-0.1955,0.8159,0.0464});
LineSet1398->setCoord(*Coordinate1399);

CColorRGBA* ColorRGBA1400 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1400->setUSE("HAnimSegmentLineColorRGBA");
LineSet1398->setColor(*ColorRGBA1400);

Shape1397->setGeometry(LineSet1398);

HAnimSegment1393->addChildren(*Shape1397);

HAnimJoint1392->addChildren(*HAnimSegment1393);

CHAnimJoint* HAnimJoint1401 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1401->setName("r_thumb3");
HAnimJoint1401->setDEF("hanim_r_thumb3");
HAnimJoint1401->setCenter(new float[3]{-0.1955,0.8159,0.0464});
HAnimJoint1401->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1402 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1402->setName("r_thumb_distal");
HAnimSegment1402->setDEF("hanim_r_thumb_distal");
//<HAnimJoint name='r_thumb3'/> visualization sphere within <HAnimSegment name='r_thumb_distal'/>
CTouchSensor* TouchSensor1403 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1403->setDescription("HAnimJoint r_thumb3, HAnimSegment r_thumb_distal");
HAnimSegment1402->addChildren(*TouchSensor1403);

CTransform* Transform1404 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1404->setTranslation(new float[3]{-0.1955,0.8159,0.0464});
CShape* Shape1405 = (CShape *)(m_pScene.createNode("Shape"));
Shape1405->setUSE("HAnimJointShape");
Transform1404->addChildren(*Shape1405);

HAnimSegment1402->addChildren(*Transform1404);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_thumb3'/> to <HAnimSite name='r_thumb_distal_tip'/>
CShape* Shape1406 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1407 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1407->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1408 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1408->setPoint(new float[6]{-0.1955,0.8159,0.0464,-0.1869,0.809,0.082});
LineSet1407->setCoord(*Coordinate1408);

CColorRGBA* ColorRGBA1409 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1409->setUSE("HAnimSiteLineColorRGBA");
LineSet1407->setColor(*ColorRGBA1409);

Shape1406->setGeometry(LineSet1407);

HAnimSegment1402->addChildren(*Shape1406);

CHAnimSite* HAnimSite1410 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1410->setName("r_thumb_distal_tip");
HAnimSite1410->setDEF("hanim_r_thumb_distal_tip");
HAnimSite1410->setTranslation(new float[3]{-0.1869,0.809,0.082});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1411 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1411->setDescription("HAnimSite r_thumb_distal_tip");
HAnimSite1410->addChildren(*TouchSensor1411);

CShape* Shape1412 = (CShape *)(m_pScene.createNode("Shape"));
Shape1412->setUSE("HAnimSiteShape");
HAnimSite1410->addChildren(*Shape1412);

HAnimSegment1402->addChildren(*HAnimSite1410);

HAnimJoint1401->addChildren(*HAnimSegment1402);

HAnimJoint1392->addChildren(*HAnimJoint1401);

HAnimJoint1383->addChildren(*HAnimJoint1392);

HAnimJoint1327->addChildren(*HAnimJoint1383);

CHAnimJoint* HAnimJoint1413 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1413->setName("r_index0");
HAnimJoint1413->setDEF("hanim_r_index0");
HAnimJoint1413->setCenter(new float[3]{-0.1983,0.8024,-0.028});
HAnimJoint1413->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1414 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1414->setName("r_index_metacarpal");
HAnimSegment1414->setDEF("hanim_r_index_metacarpal");
//<HAnimJoint name='r_index0'/> visualization sphere within <HAnimSegment name='r_index_metacarpal'/>
CTouchSensor* TouchSensor1415 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1415->setDescription("HAnimJoint r_index0, HAnimSegment r_index_metacarpal");
HAnimSegment1414->addChildren(*TouchSensor1415);

CTransform* Transform1416 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1416->setTranslation(new float[3]{-0.1983,0.8024,-0.028});
CShape* Shape1417 = (CShape *)(m_pScene.createNode("Shape"));
Shape1417->setUSE("HAnimJointShape");
Transform1416->addChildren(*Shape1417);

HAnimSegment1414->addChildren(*Transform1416);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_index0'/> to <HAnimJoint name='r_index1'/>
CShape* Shape1418 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1419 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1419->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1420 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1420->setPoint(new float[6]{-0.1983,0.8024,-0.028,-0.1983,0.7815,-0.028});
LineSet1419->setCoord(*Coordinate1420);

CColorRGBA* ColorRGBA1421 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1421->setUSE("HAnimSegmentLineColorRGBA");
LineSet1419->setColor(*ColorRGBA1421);

Shape1418->setGeometry(LineSet1419);

HAnimSegment1414->addChildren(*Shape1418);

HAnimJoint1413->addChildren(*HAnimSegment1414);

CHAnimJoint* HAnimJoint1422 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1422->setName("r_index1");
HAnimJoint1422->setDEF("hanim_r_index1");
HAnimJoint1422->setCenter(new float[3]{-0.1983,0.7815,-0.028});
HAnimJoint1422->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1423 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1423->setName("r_index_proximal");
HAnimSegment1423->setDEF("hanim_r_index_proximal");
//<HAnimJoint name='r_index1'/> visualization sphere within <HAnimSegment name='r_index_proximal'/>
CTouchSensor* TouchSensor1424 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1424->setDescription("HAnimJoint r_index1, HAnimSegment r_index_proximal");
HAnimSegment1423->addChildren(*TouchSensor1424);

CTransform* Transform1425 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1425->setTranslation(new float[3]{-0.1983,0.7815,-0.028});
CShape* Shape1426 = (CShape *)(m_pScene.createNode("Shape"));
Shape1426->setUSE("HAnimJointShape");
Transform1425->addChildren(*Shape1426);

HAnimSegment1423->addChildren(*Transform1425);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_index1'/> to <HAnimJoint name='r_index2'/>
CShape* Shape1427 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1428 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1428->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1429 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1429->setPoint(new float[6]{-0.1983,0.7815,-0.028,-0.2017,0.7363,-0.0248});
LineSet1428->setCoord(*Coordinate1429);

CColorRGBA* ColorRGBA1430 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1430->setUSE("HAnimSegmentLineColorRGBA");
LineSet1428->setColor(*ColorRGBA1430);

Shape1427->setGeometry(LineSet1428);

HAnimSegment1423->addChildren(*Shape1427);

HAnimJoint1422->addChildren(*HAnimSegment1423);

CHAnimJoint* HAnimJoint1431 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1431->setName("r_index2");
HAnimJoint1431->setDEF("hanim_r_index2");
HAnimJoint1431->setCenter(new float[3]{-0.2017,0.7363,-0.0248});
HAnimJoint1431->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1432 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1432->setName("r_index_middle");
HAnimSegment1432->setDEF("hanim_r_index_middle");
//<HAnimJoint name='r_index2'/> visualization sphere within <HAnimSegment name='r_index_middle'/>
CTouchSensor* TouchSensor1433 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1433->setDescription("HAnimJoint r_index2, HAnimSegment r_index_middle");
HAnimSegment1432->addChildren(*TouchSensor1433);

CTransform* Transform1434 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1434->setTranslation(new float[3]{-0.2017,0.7363,-0.0248});
CShape* Shape1435 = (CShape *)(m_pScene.createNode("Shape"));
Shape1435->setUSE("HAnimJointShape");
Transform1434->addChildren(*Shape1435);

HAnimSegment1432->addChildren(*Transform1434);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_index2'/> to <HAnimJoint name='r_index3'/>
CShape* Shape1436 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1437 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1437->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1438 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1438->setPoint(new float[6]{-0.2017,0.7363,-0.0248,-0.2028,0.7139,-0.0236});
LineSet1437->setCoord(*Coordinate1438);

CColorRGBA* ColorRGBA1439 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1439->setUSE("HAnimSegmentLineColorRGBA");
LineSet1437->setColor(*ColorRGBA1439);

Shape1436->setGeometry(LineSet1437);

HAnimSegment1432->addChildren(*Shape1436);

HAnimJoint1431->addChildren(*HAnimSegment1432);

CHAnimJoint* HAnimJoint1440 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1440->setName("r_index3");
HAnimJoint1440->setDEF("hanim_r_index3");
HAnimJoint1440->setCenter(new float[3]{-0.2028,0.7139,-0.0236});
HAnimJoint1440->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1441 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1441->setName("r_index_distal");
HAnimSegment1441->setDEF("hanim_r_index_distal");
//<HAnimJoint name='r_index3'/> visualization sphere within <HAnimSegment name='r_index_distal'/>
CTouchSensor* TouchSensor1442 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1442->setDescription("HAnimJoint r_index3, HAnimSegment r_index_distal");
HAnimSegment1441->addChildren(*TouchSensor1442);

CTransform* Transform1443 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1443->setTranslation(new float[3]{-0.2028,0.7139,-0.0236});
CShape* Shape1444 = (CShape *)(m_pScene.createNode("Shape"));
Shape1444->setUSE("HAnimJointShape");
Transform1443->addChildren(*Shape1444);

HAnimSegment1441->addChildren(*Transform1443);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_index_distal_tip'/>
CShape* Shape1445 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1446 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1446->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1447 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1447->setPoint(new float[6]{-0.2028,0.7139,-0.0236,-0.198,0.6883,-0.018});
LineSet1446->setCoord(*Coordinate1447);

CColorRGBA* ColorRGBA1448 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1448->setUSE("HAnimSiteLineColorRGBA");
LineSet1446->setColor(*ColorRGBA1448);

Shape1445->setGeometry(LineSet1446);

HAnimSegment1441->addChildren(*Shape1445);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_dactylion'/>
CShape* Shape1449 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1450 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1450->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1451 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1451->setPoint(new float[6]{-0.2028,0.7139,-0.0236,-0.1941,0.6772,-0.0423});
LineSet1450->setCoord(*Coordinate1451);

CColorRGBA* ColorRGBA1452 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1452->setUSE("HAnimSiteLineColorRGBA");
LineSet1450->setColor(*ColorRGBA1452);

Shape1449->setGeometry(LineSet1450);

HAnimSegment1441->addChildren(*Shape1449);

CHAnimSite* HAnimSite1453 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1453->setName("r_index_distal_tip");
HAnimSite1453->setDEF("hanim_r_index_distal_tip");
HAnimSite1453->setTranslation(new float[3]{-0.198,0.6883,-0.018});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1454 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1454->setDescription("HAnimSite r_index_distal_tip");
HAnimSite1453->addChildren(*TouchSensor1454);

CShape* Shape1455 = (CShape *)(m_pScene.createNode("Shape"));
Shape1455->setUSE("HAnimSiteShape");
HAnimSite1453->addChildren(*Shape1455);

HAnimSegment1441->addChildren(*HAnimSite1453);

CHAnimSite* HAnimSite1456 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1456->setName("r_dactylion_pt");
HAnimSite1456->setDEF("hanim_r_dactylion_pt");
HAnimSite1456->setTranslation(new float[3]{-0.1941,0.6772,-0.0423});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1457 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1457->setDescription("HAnimSite r_dactylion");
HAnimSite1456->addChildren(*TouchSensor1457);

CShape* Shape1458 = (CShape *)(m_pScene.createNode("Shape"));
Shape1458->setUSE("HAnimSiteShape");
HAnimSite1456->addChildren(*Shape1458);

HAnimSegment1441->addChildren(*HAnimSite1456);

HAnimJoint1440->addChildren(*HAnimSegment1441);

HAnimJoint1431->addChildren(*HAnimJoint1440);

HAnimJoint1422->addChildren(*HAnimJoint1431);

HAnimJoint1413->addChildren(*HAnimJoint1422);

HAnimJoint1327->addChildren(*HAnimJoint1413);

CHAnimJoint* HAnimJoint1459 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1459->setName("r_middle0");
HAnimJoint1459->setDEF("hanim_r_middle0");
HAnimJoint1459->setCenter(new float[3]{-0.1987,0.8029,-0.053});
HAnimJoint1459->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1460 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1460->setName("r_middle_metacarpal");
HAnimSegment1460->setDEF("hanim_r_middle_metacarpal");
//<HAnimJoint name='r_middle0'/> visualization sphere within <HAnimSegment name='r_middle_metacarpal'/>
CTouchSensor* TouchSensor1461 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1461->setDescription("HAnimJoint r_middle0, HAnimSegment r_middle_metacarpal");
HAnimSegment1460->addChildren(*TouchSensor1461);

CTransform* Transform1462 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1462->setTranslation(new float[3]{-0.1987,0.8029,-0.053});
CShape* Shape1463 = (CShape *)(m_pScene.createNode("Shape"));
Shape1463->setUSE("HAnimJointShape");
Transform1462->addChildren(*Shape1463);

HAnimSegment1460->addChildren(*Transform1462);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle0'/> to <HAnimJoint name='r_middle1'/>
CShape* Shape1464 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1465 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1465->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1466 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1466->setPoint(new float[6]{-0.1987,0.8029,-0.053,-0.1987,0.7818,-0.053});
LineSet1465->setCoord(*Coordinate1466);

CColorRGBA* ColorRGBA1467 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1467->setUSE("HAnimSegmentLineColorRGBA");
LineSet1465->setColor(*ColorRGBA1467);

Shape1464->setGeometry(LineSet1465);

HAnimSegment1460->addChildren(*Shape1464);

HAnimJoint1459->addChildren(*HAnimSegment1460);

CHAnimJoint* HAnimJoint1468 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1468->setName("r_middle1");
HAnimJoint1468->setDEF("hanim_r_middle1");
HAnimJoint1468->setCenter(new float[3]{-0.1987,0.7818,-0.053});
HAnimJoint1468->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1469 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1469->setName("r_middle_proximal");
HAnimSegment1469->setDEF("hanim_r_middle_proximal");
//<HAnimJoint name='r_middle1'/> visualization sphere within <HAnimSegment name='r_middle_proximal'/>
CTouchSensor* TouchSensor1470 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1470->setDescription("HAnimJoint r_middle1, HAnimSegment r_middle_proximal");
HAnimSegment1469->addChildren(*TouchSensor1470);

CTransform* Transform1471 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1471->setTranslation(new float[3]{-0.1987,0.7818,-0.053});
CShape* Shape1472 = (CShape *)(m_pScene.createNode("Shape"));
Shape1472->setUSE("HAnimJointShape");
Transform1471->addChildren(*Shape1472);

HAnimSegment1469->addChildren(*Transform1471);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle1'/> to <HAnimJoint name='r_middle2'/>
CShape* Shape1473 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1474 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1474->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1475 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1475->setPoint(new float[6]{-0.1987,0.7818,-0.053,-0.2013,0.7273,-0.0503});
LineSet1474->setCoord(*Coordinate1475);

CColorRGBA* ColorRGBA1476 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1476->setUSE("HAnimSegmentLineColorRGBA");
LineSet1474->setColor(*ColorRGBA1476);

Shape1473->setGeometry(LineSet1474);

HAnimSegment1469->addChildren(*Shape1473);

HAnimJoint1468->addChildren(*HAnimSegment1469);

CHAnimJoint* HAnimJoint1477 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1477->setName("r_middle2");
HAnimJoint1477->setDEF("hanim_r_middle2");
HAnimJoint1477->setCenter(new float[3]{-0.2013,0.7273,-0.0503});
HAnimJoint1477->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1478 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1478->setName("r_middle_middle");
HAnimSegment1478->setDEF("hanim_r_middle_middle");
//<HAnimJoint name='r_middle2'/> visualization sphere within <HAnimSegment name='r_middle_middle'/>
CTouchSensor* TouchSensor1479 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1479->setDescription("HAnimJoint r_middle2, HAnimSegment r_middle_middle");
HAnimSegment1478->addChildren(*TouchSensor1479);

CTransform* Transform1480 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1480->setTranslation(new float[3]{-0.2013,0.7273,-0.0503});
CShape* Shape1481 = (CShape *)(m_pScene.createNode("Shape"));
Shape1481->setUSE("HAnimJointShape");
Transform1480->addChildren(*Shape1481);

HAnimSegment1478->addChildren(*Transform1480);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle2'/> to <HAnimJoint name='r_middle3'/>
CShape* Shape1482 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1483 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1483->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1484 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1484->setPoint(new float[6]{-0.2013,0.7273,-0.0503,-0.2026,0.7011,-0.0494});
LineSet1483->setCoord(*Coordinate1484);

CColorRGBA* ColorRGBA1485 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1485->setUSE("HAnimSegmentLineColorRGBA");
LineSet1483->setColor(*ColorRGBA1485);

Shape1482->setGeometry(LineSet1483);

HAnimSegment1478->addChildren(*Shape1482);

HAnimJoint1477->addChildren(*HAnimSegment1478);

CHAnimJoint* HAnimJoint1486 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1486->setName("r_middle3");
HAnimJoint1486->setDEF("hanim_r_middle3");
HAnimJoint1486->setCenter(new float[3]{-0.2026,0.7011,-0.0494});
HAnimJoint1486->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1487 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1487->setName("r_middle_distal");
HAnimSegment1487->setDEF("hanim_r_middle_distal");
//<HAnimJoint name='r_middle3'/> visualization sphere within <HAnimSegment name='r_middle_distal'/>
CTouchSensor* TouchSensor1488 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1488->setDescription("HAnimJoint r_middle3, HAnimSegment r_middle_distal");
HAnimSegment1487->addChildren(*TouchSensor1488);

CTransform* Transform1489 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1489->setTranslation(new float[3]{-0.2026,0.7011,-0.0494});
CShape* Shape1490 = (CShape *)(m_pScene.createNode("Shape"));
Shape1490->setUSE("HAnimJointShape");
Transform1489->addChildren(*Shape1490);

HAnimSegment1487->addChildren(*Transform1489);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_middle3'/> to <HAnimSite name='r_middle_distal_tip'/>
CShape* Shape1491 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1492 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1492->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1493 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1493->setPoint(new float[6]{-0.2026,0.7011,-0.0494,-0.1969,0.6758,-0.0427});
LineSet1492->setCoord(*Coordinate1493);

CColorRGBA* ColorRGBA1494 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1494->setUSE("HAnimSiteLineColorRGBA");
LineSet1492->setColor(*ColorRGBA1494);

Shape1491->setGeometry(LineSet1492);

HAnimSegment1487->addChildren(*Shape1491);

CHAnimSite* HAnimSite1495 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1495->setName("r_middle_distal_tip");
HAnimSite1495->setDEF("hanim_r_middle_distal_tip");
HAnimSite1495->setTranslation(new float[3]{-0.1969,0.6758,-0.0427});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1496 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1496->setDescription("HAnimSite r_middle_distal_tip");
HAnimSite1495->addChildren(*TouchSensor1496);

CShape* Shape1497 = (CShape *)(m_pScene.createNode("Shape"));
Shape1497->setUSE("HAnimSiteShape");
HAnimSite1495->addChildren(*Shape1497);

HAnimSegment1487->addChildren(*HAnimSite1495);

HAnimJoint1486->addChildren(*HAnimSegment1487);

HAnimJoint1477->addChildren(*HAnimJoint1486);

HAnimJoint1468->addChildren(*HAnimJoint1477);

HAnimJoint1459->addChildren(*HAnimJoint1468);

HAnimJoint1327->addChildren(*HAnimJoint1459);

CHAnimJoint* HAnimJoint1498 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1498->setName("r_ring0");
HAnimJoint1498->setDEF("hanim_r_ring0");
HAnimJoint1498->setCenter(new float[3]{-0.1956,0.8019,-0.0794});
HAnimJoint1498->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1499 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1499->setName("r_ring_metacarpal");
HAnimSegment1499->setDEF("hanim_r_ring_metacarpal");
//<HAnimJoint name='r_ring0'/> visualization sphere within <HAnimSegment name='r_ring_metacarpal'/>
CTouchSensor* TouchSensor1500 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1500->setDescription("HAnimJoint r_ring0, HAnimSegment r_ring_metacarpal");
HAnimSegment1499->addChildren(*TouchSensor1500);

CTransform* Transform1501 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1501->setTranslation(new float[3]{-0.1956,0.8019,-0.0794});
CShape* Shape1502 = (CShape *)(m_pScene.createNode("Shape"));
Shape1502->setUSE("HAnimJointShape");
Transform1501->addChildren(*Shape1502);

HAnimSegment1499->addChildren(*Transform1501);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring0'/> to <HAnimJoint name='r_ring1'/>
CShape* Shape1503 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1504 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1504->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1505 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1505->setPoint(new float[6]{-0.1956,0.8019,-0.0794,-0.1956,0.7815,-0.0794});
LineSet1504->setCoord(*Coordinate1505);

CColorRGBA* ColorRGBA1506 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1506->setUSE("HAnimSegmentLineColorRGBA");
LineSet1504->setColor(*ColorRGBA1506);

Shape1503->setGeometry(LineSet1504);

HAnimSegment1499->addChildren(*Shape1503);

HAnimJoint1498->addChildren(*HAnimSegment1499);

CHAnimJoint* HAnimJoint1507 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1507->setName("r_ring1");
HAnimJoint1507->setDEF("hanim_r_ring1");
HAnimJoint1507->setCenter(new float[3]{-0.1956,0.7815,-0.0794});
HAnimJoint1507->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1508 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1508->setName("r_ring_proximal");
HAnimSegment1508->setDEF("hanim_r_ring_proximal");
//<HAnimJoint name='r_ring1'/> visualization sphere within <HAnimSegment name='r_ring_proximal'/>
CTouchSensor* TouchSensor1509 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1509->setDescription("HAnimJoint r_ring1, HAnimSegment r_ring_proximal");
HAnimSegment1508->addChildren(*TouchSensor1509);

CTransform* Transform1510 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1510->setTranslation(new float[3]{-0.1956,0.7815,-0.0794});
CShape* Shape1511 = (CShape *)(m_pScene.createNode("Shape"));
Shape1511->setUSE("HAnimJointShape");
Transform1510->addChildren(*Shape1511);

HAnimSegment1508->addChildren(*Transform1510);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring1'/> to <HAnimJoint name='r_ring2'/>
CShape* Shape1512 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1513 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1513->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1514 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1514->setPoint(new float[6]{-0.1956,0.7815,-0.0794,-0.1973,0.7287,-0.0777});
LineSet1513->setCoord(*Coordinate1514);

CColorRGBA* ColorRGBA1515 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1515->setUSE("HAnimSegmentLineColorRGBA");
LineSet1513->setColor(*ColorRGBA1515);

Shape1512->setGeometry(LineSet1513);

HAnimSegment1508->addChildren(*Shape1512);

HAnimJoint1507->addChildren(*HAnimSegment1508);

CHAnimJoint* HAnimJoint1516 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1516->setName("r_ring2");
HAnimJoint1516->setDEF("hanim_r_ring2");
HAnimJoint1516->setCenter(new float[3]{-0.1973,0.7287,-0.0777});
HAnimJoint1516->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1517 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1517->setName("r_ring_middle");
HAnimSegment1517->setDEF("hanim_r_ring_middle");
//<HAnimJoint name='r_ring2'/> visualization sphere within <HAnimSegment name='r_ring_middle'/>
CTouchSensor* TouchSensor1518 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1518->setDescription("HAnimJoint r_ring2, HAnimSegment r_ring_middle");
HAnimSegment1517->addChildren(*TouchSensor1518);

CTransform* Transform1519 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1519->setTranslation(new float[3]{-0.1973,0.7287,-0.0777});
CShape* Shape1520 = (CShape *)(m_pScene.createNode("Shape"));
Shape1520->setUSE("HAnimJointShape");
Transform1519->addChildren(*Shape1520);

HAnimSegment1517->addChildren(*Transform1519);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring2'/> to <HAnimJoint name='r_ring3'/>
CShape* Shape1521 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1522 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1522->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1523 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1523->setPoint(new float[6]{-0.1973,0.7287,-0.0777,-0.1983,0.7045,-0.0767});
LineSet1522->setCoord(*Coordinate1523);

CColorRGBA* ColorRGBA1524 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1524->setUSE("HAnimSegmentLineColorRGBA");
LineSet1522->setColor(*ColorRGBA1524);

Shape1521->setGeometry(LineSet1522);

HAnimSegment1517->addChildren(*Shape1521);

HAnimJoint1516->addChildren(*HAnimSegment1517);

CHAnimJoint* HAnimJoint1525 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1525->setName("r_ring3");
HAnimJoint1525->setDEF("hanim_r_ring3");
HAnimJoint1525->setCenter(new float[3]{-0.1983,0.7045,-0.0767});
HAnimJoint1525->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1526 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1526->setName("r_ring_distal");
HAnimSegment1526->setDEF("hanim_r_ring_distal");
//<HAnimJoint name='r_ring3'/> visualization sphere within <HAnimSegment name='r_ring_distal'/>
CTouchSensor* TouchSensor1527 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1527->setDescription("HAnimJoint r_ring3, HAnimSegment r_ring_distal");
HAnimSegment1526->addChildren(*TouchSensor1527);

CTransform* Transform1528 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1528->setTranslation(new float[3]{-0.1983,0.7045,-0.0767});
CShape* Shape1529 = (CShape *)(m_pScene.createNode("Shape"));
Shape1529->setUSE("HAnimJointShape");
Transform1528->addChildren(*Shape1529);

HAnimSegment1526->addChildren(*Transform1528);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ring3'/> to <HAnimSite name='r_ring_distal_tip'/>
CShape* Shape1530 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1531 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1531->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1532 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1532->setPoint(new float[6]{-0.1983,0.7045,-0.0767,-0.1934,0.6778,-0.0693});
LineSet1531->setCoord(*Coordinate1532);

CColorRGBA* ColorRGBA1533 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1533->setUSE("HAnimSiteLineColorRGBA");
LineSet1531->setColor(*ColorRGBA1533);

Shape1530->setGeometry(LineSet1531);

HAnimSegment1526->addChildren(*Shape1530);

CHAnimSite* HAnimSite1534 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1534->setName("r_ring_distal_tip");
HAnimSite1534->setDEF("hanim_r_ring_distal_tip");
HAnimSite1534->setTranslation(new float[3]{-0.1934,0.6778,-0.0693});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1535 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1535->setDescription("HAnimSite r_ring_distal_tip");
HAnimSite1534->addChildren(*TouchSensor1535);

CShape* Shape1536 = (CShape *)(m_pScene.createNode("Shape"));
Shape1536->setUSE("HAnimSiteShape");
HAnimSite1534->addChildren(*Shape1536);

HAnimSegment1526->addChildren(*HAnimSite1534);

HAnimJoint1525->addChildren(*HAnimSegment1526);

HAnimJoint1516->addChildren(*HAnimJoint1525);

HAnimJoint1507->addChildren(*HAnimJoint1516);

HAnimJoint1498->addChildren(*HAnimJoint1507);

HAnimJoint1327->addChildren(*HAnimJoint1498);

CHAnimJoint* HAnimJoint1537 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1537->setName("r_pinky0");
HAnimJoint1537->setDEF("hanim_r_pinky0");
HAnimJoint1537->setCenter(new float[3]{-0.1925,0.8066,-0.1036});
HAnimJoint1537->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1538 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1538->setName("r_pinky_metacarpal");
HAnimSegment1538->setDEF("hanim_r_pinky_metacarpal");
//<HAnimJoint name='r_pinky0'/> visualization sphere within <HAnimSegment name='r_pinky_metacarpal'/>
CTouchSensor* TouchSensor1539 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1539->setDescription("HAnimJoint r_pinky0, HAnimSegment r_pinky_metacarpal");
HAnimSegment1538->addChildren(*TouchSensor1539);

CTransform* Transform1540 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1540->setTranslation(new float[3]{-0.1925,0.8066,-0.1036});
CShape* Shape1541 = (CShape *)(m_pScene.createNode("Shape"));
Shape1541->setUSE("HAnimJointShape");
Transform1540->addChildren(*Shape1541);

HAnimSegment1538->addChildren(*Transform1540);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky0'/> to <HAnimJoint name='r_pinky1'/>
CShape* Shape1542 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1543 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1543->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1544 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1544->setPoint(new float[6]{-0.1925,0.8066,-0.1036,-0.1925,0.7866,-0.1036});
LineSet1543->setCoord(*Coordinate1544);

CColorRGBA* ColorRGBA1545 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1545->setUSE("HAnimSegmentLineColorRGBA");
LineSet1543->setColor(*ColorRGBA1545);

Shape1542->setGeometry(LineSet1543);

HAnimSegment1538->addChildren(*Shape1542);

HAnimJoint1537->addChildren(*HAnimSegment1538);

CHAnimJoint* HAnimJoint1546 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1546->setName("r_pinky1");
HAnimJoint1546->setDEF("hanim_r_pinky1");
HAnimJoint1546->setCenter(new float[3]{-0.1925,0.7866,-0.1036});
HAnimJoint1546->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1547 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1547->setName("r_pinky_proximal");
HAnimSegment1547->setDEF("hanim_r_pinky_proximal");
//<HAnimJoint name='r_pinky1'/> visualization sphere within <HAnimSegment name='r_pinky_proximal'/>
CTouchSensor* TouchSensor1548 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1548->setDescription("HAnimJoint r_pinky1, HAnimSegment r_pinky_proximal");
HAnimSegment1547->addChildren(*TouchSensor1548);

CTransform* Transform1549 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1549->setTranslation(new float[3]{-0.1925,0.7866,-0.1036});
CShape* Shape1550 = (CShape *)(m_pScene.createNode("Shape"));
Shape1550->setUSE("HAnimJointShape");
Transform1549->addChildren(*Shape1550);

HAnimSegment1547->addChildren(*Transform1549);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky1'/> to <HAnimJoint name='r_pinky2'/>
CShape* Shape1551 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1552 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1552->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1553 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1553->setPoint(new float[6]{-0.1925,0.7866,-0.1036,-0.1938,0.7452,-0.1024});
LineSet1552->setCoord(*Coordinate1553);

CColorRGBA* ColorRGBA1554 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1554->setUSE("HAnimSegmentLineColorRGBA");
LineSet1552->setColor(*ColorRGBA1554);

Shape1551->setGeometry(LineSet1552);

HAnimSegment1547->addChildren(*Shape1551);

HAnimJoint1546->addChildren(*HAnimSegment1547);

CHAnimJoint* HAnimJoint1555 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1555->setName("r_pinky2");
HAnimJoint1555->setDEF("hanim_r_pinky2");
HAnimJoint1555->setCenter(new float[3]{-0.1938,0.7452,-0.1024});
HAnimJoint1555->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1556 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1556->setName("r_pinky_middle");
HAnimSegment1556->setDEF("hanim_r_pinky_middle");
//<HAnimJoint name='r_pinky2'/> visualization sphere within <HAnimSegment name='r_pinky_middle'/>
CTouchSensor* TouchSensor1557 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1557->setDescription("HAnimJoint r_pinky2, HAnimSegment r_pinky_middle");
HAnimSegment1556->addChildren(*TouchSensor1557);

CTransform* Transform1558 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1558->setTranslation(new float[3]{-0.1938,0.7452,-0.1024});
CShape* Shape1559 = (CShape *)(m_pScene.createNode("Shape"));
Shape1559->setUSE("HAnimJointShape");
Transform1558->addChildren(*Shape1559);

HAnimSegment1556->addChildren(*Transform1558);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky2'/> to <HAnimJoint name='r_pinky3'/>
CShape* Shape1560 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1561 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1561->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1562 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1562->setPoint(new float[6]{-0.1938,0.7452,-0.1024,-0.1948,0.7277,-0.1017});
LineSet1561->setCoord(*Coordinate1562);

CColorRGBA* ColorRGBA1563 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1563->setUSE("HAnimSegmentLineColorRGBA");
LineSet1561->setColor(*ColorRGBA1563);

Shape1560->setGeometry(LineSet1561);

HAnimSegment1556->addChildren(*Shape1560);

HAnimJoint1555->addChildren(*HAnimSegment1556);

CHAnimJoint* HAnimJoint1564 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1564->setName("r_pinky3");
HAnimJoint1564->setDEF("hanim_r_pinky3");
HAnimJoint1564->setCenter(new float[3]{-0.1948,0.7277,-0.1017});
HAnimJoint1564->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1565 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1565->setName("r_pinky_distal");
HAnimSegment1565->setDEF("hanim_r_pinky_distal");
//<HAnimJoint name='r_pinky3'/> visualization sphere within <HAnimSegment name='r_pinky_distal'/>
CTouchSensor* TouchSensor1566 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1566->setDescription("HAnimJoint r_pinky3, HAnimSegment r_pinky_distal");
HAnimSegment1565->addChildren(*TouchSensor1566);

CTransform* Transform1567 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1567->setTranslation(new float[3]{-0.1948,0.7277,-0.1017});
CShape* Shape1568 = (CShape *)(m_pScene.createNode("Shape"));
Shape1568->setUSE("HAnimJointShape");
Transform1567->addChildren(*Shape1568);

HAnimSegment1565->addChildren(*Transform1567);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_pinky3'/> to <HAnimSite name='r_pinky_distal_tip'/>
CShape* Shape1569 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1570 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1570->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1571 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1571->setPoint(new float[6]{-0.1948,0.7277,-0.1017,-0.1938,0.7035,-0.0949});
LineSet1570->setCoord(*Coordinate1571);

CColorRGBA* ColorRGBA1572 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1572->setUSE("HAnimSiteLineColorRGBA");
LineSet1570->setColor(*ColorRGBA1572);

Shape1569->setGeometry(LineSet1570);

HAnimSegment1565->addChildren(*Shape1569);

CHAnimSite* HAnimSite1573 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1573->setName("r_pinky_distal_tip");
HAnimSite1573->setDEF("hanim_r_pinky_distal_tip");
HAnimSite1573->setTranslation(new float[3]{-0.1938,0.7035,-0.0949});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1574 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1574->setDescription("HAnimSite r_pinky_distal_tip");
HAnimSite1573->addChildren(*TouchSensor1574);

CShape* Shape1575 = (CShape *)(m_pScene.createNode("Shape"));
Shape1575->setUSE("HAnimSiteShape");
HAnimSite1573->addChildren(*Shape1575);

HAnimSegment1565->addChildren(*HAnimSite1573);

HAnimJoint1564->addChildren(*HAnimSegment1565);

HAnimJoint1555->addChildren(*HAnimJoint1564);

HAnimJoint1546->addChildren(*HAnimJoint1555);

HAnimJoint1537->addChildren(*HAnimJoint1546);

HAnimJoint1327->addChildren(*HAnimJoint1537);

HAnimJoint1290->addChildren(*HAnimJoint1327);

HAnimJoint1274->addChildren(*HAnimJoint1290);

HAnimJoint1265->addChildren(*HAnimJoint1274);

HAnimJoint1228->addChildren(*HAnimJoint1265);

HAnimJoint596->addChildren(*HAnimJoint1228);

HAnimJoint587->addChildren(*HAnimJoint596);

HAnimJoint578->addChildren(*HAnimJoint587);

HAnimJoint569->addChildren(*HAnimJoint578);

HAnimJoint560->addChildren(*HAnimJoint569);

HAnimJoint551->addChildren(*HAnimJoint560);

HAnimJoint542->addChildren(*HAnimJoint551);

HAnimJoint533->addChildren(*HAnimJoint542);

HAnimJoint510->addChildren(*HAnimJoint533);

HAnimJoint494->addChildren(*HAnimJoint510);

HAnimJoint485->addChildren(*HAnimJoint494);

HAnimJoint476->addChildren(*HAnimJoint485);

HAnimJoint467->addChildren(*HAnimJoint476);

HAnimJoint437->addChildren(*HAnimJoint467);

HAnimJoint428->addChildren(*HAnimJoint437);

HAnimJoint419->addChildren(*HAnimJoint428);

HAnimJoint396->addChildren(*HAnimJoint419);

HAnimJoint46->addChildren(*HAnimJoint396);

HAnimHumanoid45->setSkeleton(*HAnimJoint46);

//USE nodes for inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes for viewing the humanoid without being affected by body motion
CHAnimSite* HAnimSite1576 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1576->setName("l_inclined_view");
HAnimSite1576->setDEF("hanim_l_inclined_view");
HAnimSite1576->setRotation(new float[4]{-0.113,0.993,0.0347,0.671});
HAnimSite1576->setTranslation(new float[3]{1.62,1.05,2.06});
CViewpoint* Viewpoint1577 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1577->setDEF("hanim_l_inclined_viewpoint");
Viewpoint1577->setDescription("left inclined");
Viewpoint1577->setPosition(new float[3]{0,0,0});
HAnimSite1576->addChildren(*Viewpoint1577);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1578 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1578->setDescription("HAnimSite Viewpoint hanim_l_inclined_view");
Anchor1578->setUrl(new CString[1]{"#hanim_l_inclined_viewpoint"}, 1);
CLOD* LOD1579 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1579->setForceTransitions(True);
LOD1579->setRange(new float[1]{0.04});
CWorldInfo* WorldInfo1580 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1580->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1579->addChildren(*WorldInfo1580);

CShape* Shape1581 = (CShape *)(m_pScene.createNode("Shape"));
Shape1581->setUSE("HAnimSiteViewpointShape");
LOD1579->addChildren(*Shape1581);

Anchor1578->addChildren(*LOD1579);

HAnimSite1576->addChildren(*Anchor1578);

HAnimHumanoid45->addViewpoints(*HAnimSite1576);

CHAnimSite* HAnimSite1582 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1582->setName("r_inclined_view");
HAnimSite1582->setDEF("hanim_r_inclined_view");
HAnimSite1582->setRotation(new float[4]{-0.113,-0.993,0.0347,0.671});
HAnimSite1582->setTranslation(new float[3]{-1.62,1.05,2.06});
CViewpoint* Viewpoint1583 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1583->setDEF("hanim_r_inclined_viewpoint");
Viewpoint1583->setCenterOfRotation(new float[3]{0,0.9,0});
Viewpoint1583->setDescription("right inclined");
Viewpoint1583->setPosition(new float[3]{0,0,0});
HAnimSite1582->addChildren(*Viewpoint1583);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1584 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1584->setDescription("HAnimSite Viewpoint hanim_r_inclined_view");
Anchor1584->setUrl(new CString[1]{"#hanim_r_inclined_viewpoint"}, 1);
CLOD* LOD1585 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1585->setForceTransitions(True);
LOD1585->setRange(new float[1]{0.04});
CWorldInfo* WorldInfo1586 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1586->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1585->addChildren(*WorldInfo1586);

CShape* Shape1587 = (CShape *)(m_pScene.createNode("Shape"));
Shape1587->setUSE("HAnimSiteViewpointShape");
LOD1585->addChildren(*Shape1587);

Anchor1584->addChildren(*LOD1585);

HAnimSite1582->addChildren(*Anchor1584);

HAnimHumanoid45->addViewpoints(*HAnimSite1582);

CHAnimSite* HAnimSite1588 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1588->setName("front_view");
HAnimSite1588->setDEF("hanim_front_view");
HAnimSite1588->setTranslation(new float[3]{0,0.85,2.58});
CViewpoint* Viewpoint1589 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1589->setDEF("hanim_front_viewpoint");
Viewpoint1589->setCenterOfRotation(new float[3]{0,0.9,0});
Viewpoint1589->setDescription("front");
Viewpoint1589->setPosition(new float[3]{0,0,0});
HAnimSite1588->addChildren(*Viewpoint1589);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1590 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1590->setDescription("HAnimSite Viewpoint hanim_front_view");
Anchor1590->setUrl(new CString[1]{"#hanim_front_viewpoint"}, 1);
CLOD* LOD1591 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1591->setForceTransitions(True);
LOD1591->setRange(new float[1]{0.04});
CWorldInfo* WorldInfo1592 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1592->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1591->addChildren(*WorldInfo1592);

CShape* Shape1593 = (CShape *)(m_pScene.createNode("Shape"));
Shape1593->setUSE("HAnimSiteViewpointShape");
LOD1591->addChildren(*Shape1593);

Anchor1590->addChildren(*LOD1591);

HAnimSite1588->addChildren(*Anchor1590);

HAnimHumanoid45->addViewpoints(*HAnimSite1588);

CHAnimSite* HAnimSite1594 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1594->setName("back_view");
HAnimSite1594->setDEF("hanim_back_view");
HAnimSite1594->setRotation(new float[4]{0,1,0,3.14});
HAnimSite1594->setTranslation(new float[3]{0,0.85,-2.58});
CViewpoint* Viewpoint1595 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1595->setDEF("hanim_back_viewpoint");
Viewpoint1595->setCenterOfRotation(new float[3]{0,0.9,0});
Viewpoint1595->setDescription("back");
Viewpoint1595->setPosition(new float[3]{0,0,0});
HAnimSite1594->addChildren(*Viewpoint1595);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1596 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1596->setDescription("HAnimSite Viewpoint hanim_back_view");
Anchor1596->setUrl(new CString[1]{"#hanim_back_viewpoint"}, 1);
CLOD* LOD1597 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1597->setForceTransitions(True);
LOD1597->setRange(new float[1]{0.04});
CWorldInfo* WorldInfo1598 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1598->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1597->addChildren(*WorldInfo1598);

CShape* Shape1599 = (CShape *)(m_pScene.createNode("Shape"));
Shape1599->setUSE("HAnimSiteViewpointShape");
LOD1597->addChildren(*Shape1599);

Anchor1596->addChildren(*LOD1597);

HAnimSite1594->addChildren(*Anchor1596);

HAnimHumanoid45->addViewpoints(*HAnimSite1594);

CHAnimSite* HAnimSite1600 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1600->setName("l_side_view");
HAnimSite1600->setDEF("hanim_l_side_view");
HAnimSite1600->setRotation(new float[4]{0,1,0,1.5708});
HAnimSite1600->setTranslation(new float[3]{2.6,0.854,0});
CViewpoint* Viewpoint1601 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1601->setDEF("hanim_l_side_viewpoint");
Viewpoint1601->setCenterOfRotation(new float[3]{0,0.9,0});
Viewpoint1601->setDescription("left side");
Viewpoint1601->setPosition(new float[3]{0,0,0});
HAnimSite1600->addChildren(*Viewpoint1601);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1602 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1602->setDescription("HAnimSite Viewpoint hanim_l_side_view");
Anchor1602->setUrl(new CString[1]{"#hanim_l_side_viewpoint"}, 1);
CLOD* LOD1603 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1603->setForceTransitions(True);
LOD1603->setRange(new float[1]{0.04});
CWorldInfo* WorldInfo1604 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1604->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1603->addChildren(*WorldInfo1604);

CShape* Shape1605 = (CShape *)(m_pScene.createNode("Shape"));
Shape1605->setUSE("HAnimSiteViewpointShape");
LOD1603->addChildren(*Shape1605);

Anchor1602->addChildren(*LOD1603);

HAnimSite1600->addChildren(*Anchor1602);

HAnimHumanoid45->addViewpoints(*HAnimSite1600);

CHAnimSite* HAnimSite1606 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1606->setName("Top_view");
HAnimSite1606->setDEF("hanim_Top_view");
HAnimSite1606->setRotation(new float[4]{1,0,0,-1.57});
HAnimSite1606->setTranslation(new float[3]{0,3.5,0});
CViewpoint* Viewpoint1607 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1607->setDEF("hanim_Top_viewpoint");
Viewpoint1607->setCenterOfRotation(new float[3]{0,0.9,0});
Viewpoint1607->setDescription("Top");
Viewpoint1607->setPosition(new float[3]{0,0,0});
HAnimSite1606->addChildren(*Viewpoint1607);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1608 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1608->setDescription("HAnimSite Viewpoint hanim_Top_view");
Anchor1608->setUrl(new CString[1]{"#hanim_Top_viewpoint"}, 1);
CLOD* LOD1609 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1609->setForceTransitions(True);
LOD1609->setRange(new float[1]{0.04});
CWorldInfo* WorldInfo1610 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1610->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1609->addChildren(*WorldInfo1610);

CShape* Shape1611 = (CShape *)(m_pScene.createNode("Shape"));
Shape1611->setUSE("HAnimSiteViewpointShape");
LOD1609->addChildren(*Shape1611);

Anchor1608->addChildren(*LOD1609);

HAnimSite1606->addChildren(*Anchor1608);

HAnimHumanoid45->addViewpoints(*HAnimSite1606);

CHAnimSite* HAnimSite1612 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1612->setName("front_close_view");
HAnimSite1612->setDEF("hanim_front_close_view");
HAnimSite1612->setTranslation(new float[3]{0,0.854,1.575});
CViewpoint* Viewpoint1613 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1613->setDEF("hanim_front_close_viewpoint");
Viewpoint1613->setCenterOfRotation(new float[3]{0,0,1.575});
Viewpoint1613->setDescription("front close");
Viewpoint1613->setPosition(new float[3]{0,0,0});
HAnimSite1612->addChildren(*Viewpoint1613);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1614 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1614->setDescription("HAnimSite Viewpoint hanim_front_close_view");
Anchor1614->setUrl(new CString[1]{"#hanim_front_close_viewpoint"}, 1);
CLOD* LOD1615 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1615->setForceTransitions(True);
LOD1615->setRange(new float[1]{0.04});
CWorldInfo* WorldInfo1616 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1616->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1615->addChildren(*WorldInfo1616);

CShape* Shape1617 = (CShape *)(m_pScene.createNode("Shape"));
Shape1617->setUSE("HAnimSiteViewpointShape");
LOD1615->addChildren(*Shape1617);

Anchor1614->addChildren(*LOD1615);

HAnimSite1612->addChildren(*Anchor1614);

HAnimHumanoid45->addViewpoints(*HAnimSite1612);

CHAnimSite* HAnimSite1618 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1618->setName("side_close_view");
HAnimSite1618->setDEF("hanim_side_close_view");
HAnimSite1618->setRotation(new float[4]{0,1,0,1.5708});
HAnimSite1618->setTranslation(new float[3]{1.56,0.854,0});
CViewpoint* Viewpoint1619 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1619->setDEF("hanim_side_close_viewpoint");
Viewpoint1619->setCenterOfRotation(new float[3]{1.6,0,0});
Viewpoint1619->setDescription("side close");
Viewpoint1619->setPosition(new float[3]{0,0,0});
HAnimSite1618->addChildren(*Viewpoint1619);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1620 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1620->setDescription("HAnimSite Viewpoint hanim_side_close_view");
Anchor1620->setUrl(new CString[1]{"#hanim_side_close_viewpoint"}, 1);
CLOD* LOD1621 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1621->setForceTransitions(True);
LOD1621->setRange(new float[1]{0.04});
CWorldInfo* WorldInfo1622 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1622->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1621->addChildren(*WorldInfo1622);

CShape* Shape1623 = (CShape *)(m_pScene.createNode("Shape"));
Shape1623->setUSE("HAnimSiteViewpointShape");
LOD1621->addChildren(*Shape1623);

Anchor1620->addChildren(*LOD1621);

HAnimSite1618->addChildren(*Anchor1620);

HAnimHumanoid45->addViewpoints(*HAnimSite1618);

CHAnimSite* HAnimSite1624 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1624->setName("head_front_close_view");
HAnimSite1624->setDEF("hanim_head_front_close_view");
HAnimSite1624->setTranslation(new float[3]{0,1.5,1});
CViewpoint* Viewpoint1625 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1625->setDEF("hanim_head_front_close_viewpoint");
Viewpoint1625->setCenterOfRotation(new float[3]{0,0,1});
Viewpoint1625->setDescription("head front close");
Viewpoint1625->setPosition(new float[3]{0,0,0});
HAnimSite1624->addChildren(*Viewpoint1625);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1626 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1626->setDescription("HAnimSite Viewpoint hanim_head_front_close_view");
Anchor1626->setUrl(new CString[1]{"#hanim_head_front_close_viewpoint"}, 1);
CLOD* LOD1627 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1627->setForceTransitions(True);
LOD1627->setRange(new float[1]{0.04});
CWorldInfo* WorldInfo1628 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1628->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1627->addChildren(*WorldInfo1628);

CShape* Shape1629 = (CShape *)(m_pScene.createNode("Shape"));
Shape1629->setUSE("HAnimSiteViewpointShape");
LOD1627->addChildren(*Shape1629);

Anchor1626->addChildren(*LOD1627);

HAnimSite1624->addChildren(*Anchor1626);

HAnimHumanoid45->addViewpoints(*HAnimSite1624);

CHAnimSite* HAnimSite1630 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1630->setName("chest_front_close_view");
HAnimSite1630->setDEF("hanim_chest_front_close_view");
HAnimSite1630->setTranslation(new float[3]{0,1.2,1});
CViewpoint* Viewpoint1631 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1631->setDEF("hanim_chest_front_close_viewpoint");
Viewpoint1631->setCenterOfRotation(new float[3]{0,0,1});
Viewpoint1631->setDescription("chest front close");
Viewpoint1631->setPosition(new float[3]{0,0,0});
HAnimSite1630->addChildren(*Viewpoint1631);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1632 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1632->setDescription("HAnimSite Viewpoint hanim_chest_front_close_view");
Anchor1632->setUrl(new CString[1]{"#hanim_chest_front_close_viewpoint"}, 1);
CLOD* LOD1633 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1633->setForceTransitions(True);
LOD1633->setRange(new float[1]{0.04});
CWorldInfo* WorldInfo1634 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1634->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1633->addChildren(*WorldInfo1634);

CShape* Shape1635 = (CShape *)(m_pScene.createNode("Shape"));
Shape1635->setUSE("HAnimSiteViewpointShape");
LOD1633->addChildren(*Shape1635);

Anchor1632->addChildren(*LOD1633);

HAnimSite1630->addChildren(*Anchor1632);

HAnimHumanoid45->addViewpoints(*HAnimSite1630);

CHAnimSite* HAnimSite1636 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1636->setName("pelvis_front_close_view");
HAnimSite1636->setDEF("hanim_pelvis_front_close_view");
HAnimSite1636->setTranslation(new float[3]{0,0.8,1});
CViewpoint* Viewpoint1637 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1637->setDEF("hanim_pelvis_front_close_viewpoint");
Viewpoint1637->setCenterOfRotation(new float[3]{0,0,1});
Viewpoint1637->setDescription("pelvis front close");
Viewpoint1637->setPosition(new float[3]{0,0,0});
HAnimSite1636->addChildren(*Viewpoint1637);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1638 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1638->setDescription("HAnimSite Viewpoint hanim_pelvis_front_close_view");
Anchor1638->setUrl(new CString[1]{"#hanim_pelvis_front_close_viewpoint"}, 1);
CLOD* LOD1639 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1639->setForceTransitions(True);
LOD1639->setRange(new float[1]{0.04});
CWorldInfo* WorldInfo1640 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1640->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1639->addChildren(*WorldInfo1640);

CShape* Shape1641 = (CShape *)(m_pScene.createNode("Shape"));
Shape1641->setUSE("HAnimSiteViewpointShape");
LOD1639->addChildren(*Shape1641);

Anchor1638->addChildren(*LOD1639);

HAnimSite1636->addChildren(*Anchor1638);

HAnimHumanoid45->addViewpoints(*HAnimSite1636);

CHAnimSite* HAnimSite1642 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1642->setName("knees_front_close_view");
HAnimSite1642->setDEF("hanim_knees_front_close_view");
HAnimSite1642->setTranslation(new float[3]{0,0.4,1});
CViewpoint* Viewpoint1643 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1643->setDEF("hanim_knees_front_close_viewpoint");
Viewpoint1643->setCenterOfRotation(new float[3]{0,0.4,0});
Viewpoint1643->setDescription("knees front close");
Viewpoint1643->setPosition(new float[3]{0,0,0});
HAnimSite1642->addChildren(*Viewpoint1643);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1644 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1644->setDescription("HAnimSite Viewpoint hanim_knees_front_close_view");
Anchor1644->setUrl(new CString[1]{"#hanim_knees_front_close_viewpoint"}, 1);
CLOD* LOD1645 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1645->setForceTransitions(True);
LOD1645->setRange(new float[1]{0.04});
CWorldInfo* WorldInfo1646 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1646->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1645->addChildren(*WorldInfo1646);

CShape* Shape1647 = (CShape *)(m_pScene.createNode("Shape"));
Shape1647->setUSE("HAnimSiteViewpointShape");
LOD1645->addChildren(*Shape1647);

Anchor1644->addChildren(*LOD1645);

HAnimSite1642->addChildren(*Anchor1644);

HAnimHumanoid45->addViewpoints(*HAnimSite1642);

CHAnimSite* HAnimSite1648 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1648->setName("feet_front_close_view");
HAnimSite1648->setDEF("hanim_feet_front_close_view");
HAnimSite1648->setTranslation(new float[3]{0,0,1});
CViewpoint* Viewpoint1649 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1649->setDEF("hanim_feet_front_close_viewpoint");
Viewpoint1649->setDescription("feet front close");
Viewpoint1649->setPosition(new float[3]{0,0,0});
HAnimSite1648->addChildren(*Viewpoint1649);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1650 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1650->setDescription("HAnimSite Viewpoint hanim_feet_front_close_view");
Anchor1650->setUrl(new CString[1]{"#hanim_feet_front_close_viewpoint"}, 1);
CLOD* LOD1651 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1651->setForceTransitions(True);
LOD1651->setRange(new float[1]{0.04});
CWorldInfo* WorldInfo1652 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1652->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1651->addChildren(*WorldInfo1652);

CShape* Shape1653 = (CShape *)(m_pScene.createNode("Shape"));
Shape1653->setUSE("HAnimSiteViewpointShape");
LOD1651->addChildren(*Shape1653);

Anchor1650->addChildren(*LOD1651);

HAnimSite1648->addChildren(*Anchor1650);

HAnimHumanoid45->addViewpoints(*HAnimSite1648);

CHAnimSite* HAnimSite1654 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1654->setName("eye_level_view");
HAnimSite1654->setDEF("hanim_eye_level_view");
HAnimSite1654->setTranslation(new float[3]{0,1.6332,0.0502});
CViewpoint* Viewpoint1655 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1655->setDEF("hanim_eye_level_viewpoint");
Viewpoint1655->setDescription("eye level looking forward");
Viewpoint1655->setOrientation(new float[4]{0,1,0,3.141593});
Viewpoint1655->setPosition(new float[3]{0,0,0});
HAnimSite1654->addChildren(*Viewpoint1655);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1656 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1656->setDescription("HAnimSite Viewpoint hanim_eye_level_view");
Anchor1656->setUrl(new CString[1]{"#hanim_eye_level_viewpoint"}, 1);
CLOD* LOD1657 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1657->setForceTransitions(True);
LOD1657->setRange(new float[1]{0.04});
CWorldInfo* WorldInfo1658 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1658->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1657->addChildren(*WorldInfo1658);

CShape* Shape1659 = (CShape *)(m_pScene.createNode("Shape"));
Shape1659->setUSE("HAnimSiteViewpointShape");
LOD1657->addChildren(*Shape1659);

Anchor1656->addChildren(*LOD1657);

HAnimSite1654->addChildren(*Anchor1656);

HAnimHumanoid45->addViewpoints(*HAnimSite1654);

CHAnimSite* HAnimSite1660 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1660->setUSE("hanim_l_eyeball_site_view");
HAnimHumanoid45->setSites(*HAnimSite1660);

CHAnimSite* HAnimSite1661 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1661->setUSE("hanim_r_eyeball_site_view");
HAnimHumanoid45->setSites(*HAnimSite1661);

CHAnimSite* HAnimSite1662 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1662->setUSE("hanim_l_hand_front_view");
HAnimHumanoid45->setSites(*HAnimSite1662);

CHAnimSite* HAnimSite1663 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1663->setUSE("hanim_r_hand_front_view");
HAnimHumanoid45->setSites(*HAnimSite1663);

CHAnimJoint* HAnimJoint1664 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1664->setUSE("hanim_humanoid_root");
HAnimHumanoid45->addJoints(*HAnimJoint1664);

CHAnimJoint* HAnimJoint1665 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1665->setUSE("hanim_sacroiliac");
HAnimHumanoid45->addJoints(*HAnimJoint1665);

CHAnimJoint* HAnimJoint1666 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1666->setUSE("hanim_vl5");
HAnimHumanoid45->addJoints(*HAnimJoint1666);

CHAnimJoint* HAnimJoint1667 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1667->setUSE("hanim_vl4");
HAnimHumanoid45->addJoints(*HAnimJoint1667);

CHAnimJoint* HAnimJoint1668 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1668->setUSE("hanim_vl3");
HAnimHumanoid45->addJoints(*HAnimJoint1668);

CHAnimJoint* HAnimJoint1669 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1669->setUSE("hanim_vl2");
HAnimHumanoid45->addJoints(*HAnimJoint1669);

CHAnimJoint* HAnimJoint1670 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1670->setUSE("hanim_vl1");
HAnimHumanoid45->addJoints(*HAnimJoint1670);

CHAnimJoint* HAnimJoint1671 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1671->setUSE("hanim_vt12");
HAnimHumanoid45->addJoints(*HAnimJoint1671);

CHAnimJoint* HAnimJoint1672 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1672->setUSE("hanim_vt11");
HAnimHumanoid45->addJoints(*HAnimJoint1672);

CHAnimJoint* HAnimJoint1673 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1673->setUSE("hanim_vt10");
HAnimHumanoid45->addJoints(*HAnimJoint1673);

CHAnimJoint* HAnimJoint1674 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1674->setUSE("hanim_vt9");
HAnimHumanoid45->addJoints(*HAnimJoint1674);

CHAnimJoint* HAnimJoint1675 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1675->setUSE("hanim_vt8");
HAnimHumanoid45->addJoints(*HAnimJoint1675);

CHAnimJoint* HAnimJoint1676 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1676->setUSE("hanim_vt7");
HAnimHumanoid45->addJoints(*HAnimJoint1676);

CHAnimJoint* HAnimJoint1677 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1677->setUSE("hanim_vt6");
HAnimHumanoid45->addJoints(*HAnimJoint1677);

CHAnimJoint* HAnimJoint1678 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1678->setUSE("hanim_vt5");
HAnimHumanoid45->addJoints(*HAnimJoint1678);

CHAnimJoint* HAnimJoint1679 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1679->setUSE("hanim_vt4");
HAnimHumanoid45->addJoints(*HAnimJoint1679);

CHAnimJoint* HAnimJoint1680 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1680->setUSE("hanim_vt3");
HAnimHumanoid45->addJoints(*HAnimJoint1680);

CHAnimJoint* HAnimJoint1681 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1681->setUSE("hanim_vt2");
HAnimHumanoid45->addJoints(*HAnimJoint1681);

CHAnimJoint* HAnimJoint1682 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1682->setUSE("hanim_vt1");
HAnimHumanoid45->addJoints(*HAnimJoint1682);

CHAnimJoint* HAnimJoint1683 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1683->setUSE("hanim_vc7");
HAnimHumanoid45->addJoints(*HAnimJoint1683);

CHAnimJoint* HAnimJoint1684 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1684->setUSE("hanim_vc6");
HAnimHumanoid45->addJoints(*HAnimJoint1684);

CHAnimJoint* HAnimJoint1685 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1685->setUSE("hanim_vc5");
HAnimHumanoid45->addJoints(*HAnimJoint1685);

CHAnimJoint* HAnimJoint1686 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1686->setUSE("hanim_vc4");
HAnimHumanoid45->addJoints(*HAnimJoint1686);

CHAnimJoint* HAnimJoint1687 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1687->setUSE("hanim_vc3");
HAnimHumanoid45->addJoints(*HAnimJoint1687);

CHAnimJoint* HAnimJoint1688 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1688->setUSE("hanim_vc2");
HAnimHumanoid45->addJoints(*HAnimJoint1688);

CHAnimJoint* HAnimJoint1689 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1689->setUSE("hanim_vc1");
HAnimHumanoid45->addJoints(*HAnimJoint1689);

CHAnimJoint* HAnimJoint1690 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1690->setUSE("hanim_skullbase");
HAnimHumanoid45->addJoints(*HAnimJoint1690);

CHAnimJoint* HAnimJoint1691 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1691->setUSE("hanim_temporomandibular");
HAnimHumanoid45->addJoints(*HAnimJoint1691);

CHAnimJoint* HAnimJoint1692 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1692->setUSE("hanim_l_acromioclavicular");
HAnimHumanoid45->addJoints(*HAnimJoint1692);

CHAnimJoint* HAnimJoint1693 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1693->setUSE("hanim_r_acromioclavicular");
HAnimHumanoid45->addJoints(*HAnimJoint1693);

CHAnimJoint* HAnimJoint1694 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1694->setUSE("hanim_l_ankle");
HAnimHumanoid45->addJoints(*HAnimJoint1694);

CHAnimJoint* HAnimJoint1695 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1695->setUSE("hanim_r_ankle");
HAnimHumanoid45->addJoints(*HAnimJoint1695);

CHAnimJoint* HAnimJoint1696 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1696->setUSE("hanim_l_elbow");
HAnimHumanoid45->addJoints(*HAnimJoint1696);

CHAnimJoint* HAnimJoint1697 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1697->setUSE("hanim_r_elbow");
HAnimHumanoid45->addJoints(*HAnimJoint1697);

CHAnimJoint* HAnimJoint1698 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1698->setUSE("hanim_l_eyeball_joint");
HAnimHumanoid45->addJoints(*HAnimJoint1698);

CHAnimJoint* HAnimJoint1699 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1699->setUSE("hanim_r_eyeball_joint");
HAnimHumanoid45->addJoints(*HAnimJoint1699);

CHAnimJoint* HAnimJoint1700 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1700->setUSE("hanim_l_eyebrow_joint");
HAnimHumanoid45->addJoints(*HAnimJoint1700);

CHAnimJoint* HAnimJoint1701 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1701->setUSE("hanim_r_eyebrow_joint");
HAnimHumanoid45->addJoints(*HAnimJoint1701);

CHAnimJoint* HAnimJoint1702 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1702->setUSE("hanim_l_eyelid_joint");
HAnimHumanoid45->addJoints(*HAnimJoint1702);

CHAnimJoint* HAnimJoint1703 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1703->setUSE("hanim_r_eyelid_joint");
HAnimHumanoid45->addJoints(*HAnimJoint1703);

CHAnimJoint* HAnimJoint1704 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1704->setUSE("hanim_l_hip");
HAnimHumanoid45->addJoints(*HAnimJoint1704);

CHAnimJoint* HAnimJoint1705 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1705->setUSE("hanim_r_hip");
HAnimHumanoid45->addJoints(*HAnimJoint1705);

CHAnimJoint* HAnimJoint1706 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1706->setUSE("hanim_l_index0");
HAnimHumanoid45->addJoints(*HAnimJoint1706);

CHAnimJoint* HAnimJoint1707 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1707->setUSE("hanim_r_index0");
HAnimHumanoid45->addJoints(*HAnimJoint1707);

CHAnimJoint* HAnimJoint1708 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1708->setUSE("hanim_l_index1");
HAnimHumanoid45->addJoints(*HAnimJoint1708);

CHAnimJoint* HAnimJoint1709 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1709->setUSE("hanim_r_index1");
HAnimHumanoid45->addJoints(*HAnimJoint1709);

CHAnimJoint* HAnimJoint1710 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1710->setUSE("hanim_l_index2");
HAnimHumanoid45->addJoints(*HAnimJoint1710);

CHAnimJoint* HAnimJoint1711 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1711->setUSE("hanim_r_index2");
HAnimHumanoid45->addJoints(*HAnimJoint1711);

CHAnimJoint* HAnimJoint1712 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1712->setUSE("hanim_l_index3");
HAnimHumanoid45->addJoints(*HAnimJoint1712);

CHAnimJoint* HAnimJoint1713 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1713->setUSE("hanim_r_index3");
HAnimHumanoid45->addJoints(*HAnimJoint1713);

CHAnimJoint* HAnimJoint1714 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1714->setUSE("hanim_l_knee");
HAnimHumanoid45->addJoints(*HAnimJoint1714);

CHAnimJoint* HAnimJoint1715 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1715->setUSE("hanim_r_knee");
HAnimHumanoid45->addJoints(*HAnimJoint1715);

CHAnimJoint* HAnimJoint1716 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1716->setUSE("hanim_l_metatarsal");
HAnimHumanoid45->addJoints(*HAnimJoint1716);

CHAnimJoint* HAnimJoint1717 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1717->setUSE("hanim_r_metatarsal");
HAnimHumanoid45->addJoints(*HAnimJoint1717);

CHAnimJoint* HAnimJoint1718 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1718->setUSE("hanim_l_middle0");
HAnimHumanoid45->addJoints(*HAnimJoint1718);

CHAnimJoint* HAnimJoint1719 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1719->setUSE("hanim_r_middle0");
HAnimHumanoid45->addJoints(*HAnimJoint1719);

CHAnimJoint* HAnimJoint1720 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1720->setUSE("hanim_l_middle1");
HAnimHumanoid45->addJoints(*HAnimJoint1720);

CHAnimJoint* HAnimJoint1721 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1721->setUSE("hanim_r_middle1");
HAnimHumanoid45->addJoints(*HAnimJoint1721);

CHAnimJoint* HAnimJoint1722 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1722->setUSE("hanim_l_middle2");
HAnimHumanoid45->addJoints(*HAnimJoint1722);

CHAnimJoint* HAnimJoint1723 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1723->setUSE("hanim_r_middle2");
HAnimHumanoid45->addJoints(*HAnimJoint1723);

CHAnimJoint* HAnimJoint1724 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1724->setUSE("hanim_l_middle3");
HAnimHumanoid45->addJoints(*HAnimJoint1724);

CHAnimJoint* HAnimJoint1725 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1725->setUSE("hanim_r_middle3");
HAnimHumanoid45->addJoints(*HAnimJoint1725);

CHAnimJoint* HAnimJoint1726 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1726->setUSE("hanim_l_midtarsal");
HAnimHumanoid45->addJoints(*HAnimJoint1726);

CHAnimJoint* HAnimJoint1727 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1727->setUSE("hanim_r_midtarsal");
HAnimHumanoid45->addJoints(*HAnimJoint1727);

CHAnimJoint* HAnimJoint1728 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1728->setUSE("hanim_l_pinky0");
HAnimHumanoid45->addJoints(*HAnimJoint1728);

CHAnimJoint* HAnimJoint1729 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1729->setUSE("hanim_r_pinky0");
HAnimHumanoid45->addJoints(*HAnimJoint1729);

CHAnimJoint* HAnimJoint1730 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1730->setUSE("hanim_l_pinky1");
HAnimHumanoid45->addJoints(*HAnimJoint1730);

CHAnimJoint* HAnimJoint1731 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1731->setUSE("hanim_r_pinky1");
HAnimHumanoid45->addJoints(*HAnimJoint1731);

CHAnimJoint* HAnimJoint1732 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1732->setUSE("hanim_l_pinky2");
HAnimHumanoid45->addJoints(*HAnimJoint1732);

CHAnimJoint* HAnimJoint1733 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1733->setUSE("hanim_r_pinky2");
HAnimHumanoid45->addJoints(*HAnimJoint1733);

CHAnimJoint* HAnimJoint1734 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1734->setUSE("hanim_l_pinky3");
HAnimHumanoid45->addJoints(*HAnimJoint1734);

CHAnimJoint* HAnimJoint1735 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1735->setUSE("hanim_r_pinky3");
HAnimHumanoid45->addJoints(*HAnimJoint1735);

CHAnimJoint* HAnimJoint1736 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1736->setUSE("hanim_l_ring0");
HAnimHumanoid45->addJoints(*HAnimJoint1736);

CHAnimJoint* HAnimJoint1737 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1737->setUSE("hanim_r_ring0");
HAnimHumanoid45->addJoints(*HAnimJoint1737);

CHAnimJoint* HAnimJoint1738 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1738->setUSE("hanim_l_ring1");
HAnimHumanoid45->addJoints(*HAnimJoint1738);

CHAnimJoint* HAnimJoint1739 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1739->setUSE("hanim_r_ring1");
HAnimHumanoid45->addJoints(*HAnimJoint1739);

CHAnimJoint* HAnimJoint1740 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1740->setUSE("hanim_l_ring2");
HAnimHumanoid45->addJoints(*HAnimJoint1740);

CHAnimJoint* HAnimJoint1741 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1741->setUSE("hanim_r_ring2");
HAnimHumanoid45->addJoints(*HAnimJoint1741);

CHAnimJoint* HAnimJoint1742 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1742->setUSE("hanim_l_ring3");
HAnimHumanoid45->addJoints(*HAnimJoint1742);

CHAnimJoint* HAnimJoint1743 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1743->setUSE("hanim_r_ring3");
HAnimHumanoid45->addJoints(*HAnimJoint1743);

CHAnimJoint* HAnimJoint1744 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1744->setUSE("hanim_l_shoulder");
HAnimHumanoid45->addJoints(*HAnimJoint1744);

CHAnimJoint* HAnimJoint1745 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1745->setUSE("hanim_r_shoulder");
HAnimHumanoid45->addJoints(*HAnimJoint1745);

CHAnimJoint* HAnimJoint1746 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1746->setUSE("hanim_l_sternoclavicular");
HAnimHumanoid45->addJoints(*HAnimJoint1746);

CHAnimJoint* HAnimJoint1747 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1747->setUSE("hanim_r_sternoclavicular");
HAnimHumanoid45->addJoints(*HAnimJoint1747);

CHAnimJoint* HAnimJoint1748 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1748->setUSE("hanim_l_subtalar");
HAnimHumanoid45->addJoints(*HAnimJoint1748);

CHAnimJoint* HAnimJoint1749 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1749->setUSE("hanim_r_subtalar");
HAnimHumanoid45->addJoints(*HAnimJoint1749);

CHAnimJoint* HAnimJoint1750 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1750->setUSE("hanim_l_thumb1");
HAnimHumanoid45->addJoints(*HAnimJoint1750);

CHAnimJoint* HAnimJoint1751 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1751->setUSE("hanim_r_thumb1");
HAnimHumanoid45->addJoints(*HAnimJoint1751);

CHAnimJoint* HAnimJoint1752 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1752->setUSE("hanim_l_thumb2");
HAnimHumanoid45->addJoints(*HAnimJoint1752);

CHAnimJoint* HAnimJoint1753 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1753->setUSE("hanim_r_thumb2");
HAnimHumanoid45->addJoints(*HAnimJoint1753);

CHAnimJoint* HAnimJoint1754 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1754->setUSE("hanim_l_thumb3");
HAnimHumanoid45->addJoints(*HAnimJoint1754);

CHAnimJoint* HAnimJoint1755 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1755->setUSE("hanim_r_thumb3");
HAnimHumanoid45->addJoints(*HAnimJoint1755);

CHAnimJoint* HAnimJoint1756 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1756->setUSE("hanim_l_wrist");
HAnimHumanoid45->addJoints(*HAnimJoint1756);

CHAnimJoint* HAnimJoint1757 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1757->setUSE("hanim_r_wrist");
HAnimHumanoid45->addJoints(*HAnimJoint1757);

CHAnimSegment* HAnimSegment1758 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1758->setUSE("hanim_pelvis");
HAnimHumanoid45->setSegments(*HAnimSegment1758);

CHAnimSegment* HAnimSegment1759 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1759->setUSE("hanim_skull");
HAnimHumanoid45->setSegments(*HAnimSegment1759);

CHAnimSegment* HAnimSegment1760 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1760->setUSE("hanim_jaw");
HAnimHumanoid45->setSegments(*HAnimSegment1760);

CHAnimSegment* HAnimSegment1761 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1761->setUSE("hanim_c1");
HAnimHumanoid45->setSegments(*HAnimSegment1761);

CHAnimSegment* HAnimSegment1762 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1762->setUSE("hanim_c2");
HAnimHumanoid45->setSegments(*HAnimSegment1762);

CHAnimSegment* HAnimSegment1763 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1763->setUSE("hanim_c3");
HAnimHumanoid45->setSegments(*HAnimSegment1763);

CHAnimSegment* HAnimSegment1764 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1764->setUSE("hanim_c4");
HAnimHumanoid45->setSegments(*HAnimSegment1764);

CHAnimSegment* HAnimSegment1765 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1765->setUSE("hanim_c5");
HAnimHumanoid45->setSegments(*HAnimSegment1765);

CHAnimSegment* HAnimSegment1766 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1766->setUSE("hanim_c6");
HAnimHumanoid45->setSegments(*HAnimSegment1766);

CHAnimSegment* HAnimSegment1767 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1767->setUSE("hanim_c7");
HAnimHumanoid45->setSegments(*HAnimSegment1767);

CHAnimSegment* HAnimSegment1768 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1768->setUSE("hanim_t1");
HAnimHumanoid45->setSegments(*HAnimSegment1768);

CHAnimSegment* HAnimSegment1769 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1769->setUSE("hanim_t2");
HAnimHumanoid45->setSegments(*HAnimSegment1769);

CHAnimSegment* HAnimSegment1770 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1770->setUSE("hanim_t3");
HAnimHumanoid45->setSegments(*HAnimSegment1770);

CHAnimSegment* HAnimSegment1771 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1771->setUSE("hanim_t4");
HAnimHumanoid45->setSegments(*HAnimSegment1771);

CHAnimSegment* HAnimSegment1772 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1772->setUSE("hanim_t5");
HAnimHumanoid45->setSegments(*HAnimSegment1772);

CHAnimSegment* HAnimSegment1773 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1773->setUSE("hanim_t6");
HAnimHumanoid45->setSegments(*HAnimSegment1773);

CHAnimSegment* HAnimSegment1774 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1774->setUSE("hanim_t7");
HAnimHumanoid45->setSegments(*HAnimSegment1774);

CHAnimSegment* HAnimSegment1775 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1775->setUSE("hanim_t8");
HAnimHumanoid45->setSegments(*HAnimSegment1775);

CHAnimSegment* HAnimSegment1776 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1776->setUSE("hanim_t9");
HAnimHumanoid45->setSegments(*HAnimSegment1776);

CHAnimSegment* HAnimSegment1777 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1777->setUSE("hanim_t10");
HAnimHumanoid45->setSegments(*HAnimSegment1777);

CHAnimSegment* HAnimSegment1778 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1778->setUSE("hanim_t11");
HAnimHumanoid45->setSegments(*HAnimSegment1778);

CHAnimSegment* HAnimSegment1779 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1779->setUSE("hanim_t12");
HAnimHumanoid45->setSegments(*HAnimSegment1779);

CHAnimSegment* HAnimSegment1780 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1780->setUSE("hanim_l1");
HAnimHumanoid45->setSegments(*HAnimSegment1780);

CHAnimSegment* HAnimSegment1781 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1781->setUSE("hanim_l2");
HAnimHumanoid45->setSegments(*HAnimSegment1781);

CHAnimSegment* HAnimSegment1782 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1782->setUSE("hanim_l3");
HAnimHumanoid45->setSegments(*HAnimSegment1782);

CHAnimSegment* HAnimSegment1783 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1783->setUSE("hanim_l4");
HAnimHumanoid45->setSegments(*HAnimSegment1783);

CHAnimSegment* HAnimSegment1784 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1784->setUSE("hanim_l5");
HAnimHumanoid45->setSegments(*HAnimSegment1784);

CHAnimSegment* HAnimSegment1785 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1785->setUSE("hanim_sacrum");
HAnimHumanoid45->setSegments(*HAnimSegment1785);

CHAnimSegment* HAnimSegment1786 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1786->setUSE("hanim_l_calf");
HAnimHumanoid45->setSegments(*HAnimSegment1786);

CHAnimSegment* HAnimSegment1787 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1787->setUSE("hanim_r_calf");
HAnimHumanoid45->setSegments(*HAnimSegment1787);

CHAnimSegment* HAnimSegment1788 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1788->setUSE("hanim_l_clavicle");
HAnimHumanoid45->setSegments(*HAnimSegment1788);

CHAnimSegment* HAnimSegment1789 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1789->setUSE("hanim_r_clavicle");
HAnimHumanoid45->setSegments(*HAnimSegment1789);

CHAnimSegment* HAnimSegment1790 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1790->setUSE("hanim_l_eyeball");
HAnimHumanoid45->setSegments(*HAnimSegment1790);

CHAnimSegment* HAnimSegment1791 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1791->setUSE("hanim_r_eyeball");
HAnimHumanoid45->setSegments(*HAnimSegment1791);

CHAnimSegment* HAnimSegment1792 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1792->setUSE("hanim_l_eyebrow");
HAnimHumanoid45->setSegments(*HAnimSegment1792);

CHAnimSegment* HAnimSegment1793 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1793->setUSE("hanim_r_eyebrow");
HAnimHumanoid45->setSegments(*HAnimSegment1793);

CHAnimSegment* HAnimSegment1794 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1794->setUSE("hanim_l_eyelid");
HAnimHumanoid45->setSegments(*HAnimSegment1794);

CHAnimSegment* HAnimSegment1795 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1795->setUSE("hanim_r_eyelid");
HAnimHumanoid45->setSegments(*HAnimSegment1795);

CHAnimSegment* HAnimSegment1796 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1796->setUSE("hanim_l_forearm");
HAnimHumanoid45->setSegments(*HAnimSegment1796);

CHAnimSegment* HAnimSegment1797 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1797->setUSE("hanim_r_forearm");
HAnimHumanoid45->setSegments(*HAnimSegment1797);

CHAnimSegment* HAnimSegment1798 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1798->setUSE("hanim_l_forefoot");
HAnimHumanoid45->setSegments(*HAnimSegment1798);

CHAnimSegment* HAnimSegment1799 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1799->setUSE("hanim_r_forefoot");
HAnimHumanoid45->setSegments(*HAnimSegment1799);

CHAnimSegment* HAnimSegment1800 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1800->setUSE("hanim_l_hand");
HAnimHumanoid45->setSegments(*HAnimSegment1800);

CHAnimSegment* HAnimSegment1801 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1801->setUSE("hanim_r_hand");
HAnimHumanoid45->setSegments(*HAnimSegment1801);

CHAnimSegment* HAnimSegment1802 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1802->setUSE("hanim_l_hindfoot");
HAnimHumanoid45->setSegments(*HAnimSegment1802);

CHAnimSegment* HAnimSegment1803 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1803->setUSE("hanim_r_hindfoot");
HAnimHumanoid45->setSegments(*HAnimSegment1803);

CHAnimSegment* HAnimSegment1804 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1804->setUSE("hanim_l_index_distal");
HAnimHumanoid45->setSegments(*HAnimSegment1804);

CHAnimSegment* HAnimSegment1805 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1805->setUSE("hanim_r_index_distal");
HAnimHumanoid45->setSegments(*HAnimSegment1805);

CHAnimSegment* HAnimSegment1806 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1806->setUSE("hanim_l_index_metacarpal");
HAnimHumanoid45->setSegments(*HAnimSegment1806);

CHAnimSegment* HAnimSegment1807 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1807->setUSE("hanim_r_index_metacarpal");
HAnimHumanoid45->setSegments(*HAnimSegment1807);

CHAnimSegment* HAnimSegment1808 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1808->setUSE("hanim_l_index_middle");
HAnimHumanoid45->setSegments(*HAnimSegment1808);

CHAnimSegment* HAnimSegment1809 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1809->setUSE("hanim_r_index_middle");
HAnimHumanoid45->setSegments(*HAnimSegment1809);

CHAnimSegment* HAnimSegment1810 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1810->setUSE("hanim_l_index_proximal");
HAnimHumanoid45->setSegments(*HAnimSegment1810);

CHAnimSegment* HAnimSegment1811 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1811->setUSE("hanim_r_index_proximal");
HAnimHumanoid45->setSegments(*HAnimSegment1811);

CHAnimSegment* HAnimSegment1812 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1812->setUSE("hanim_l_middistal");
HAnimHumanoid45->setSegments(*HAnimSegment1812);

CHAnimSegment* HAnimSegment1813 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1813->setUSE("hanim_r_middistal");
HAnimHumanoid45->setSegments(*HAnimSegment1813);

CHAnimSegment* HAnimSegment1814 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1814->setUSE("hanim_l_middle_distal");
HAnimHumanoid45->setSegments(*HAnimSegment1814);

CHAnimSegment* HAnimSegment1815 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1815->setUSE("hanim_r_middle_distal");
HAnimHumanoid45->setSegments(*HAnimSegment1815);

CHAnimSegment* HAnimSegment1816 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1816->setUSE("hanim_l_middle_metacarpal");
HAnimHumanoid45->setSegments(*HAnimSegment1816);

CHAnimSegment* HAnimSegment1817 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1817->setUSE("hanim_r_middle_metacarpal");
HAnimHumanoid45->setSegments(*HAnimSegment1817);

CHAnimSegment* HAnimSegment1818 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1818->setUSE("hanim_l_middle_middle");
HAnimHumanoid45->setSegments(*HAnimSegment1818);

CHAnimSegment* HAnimSegment1819 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1819->setUSE("hanim_r_middle_middle");
HAnimHumanoid45->setSegments(*HAnimSegment1819);

CHAnimSegment* HAnimSegment1820 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1820->setUSE("hanim_l_middle_proximal");
HAnimHumanoid45->setSegments(*HAnimSegment1820);

CHAnimSegment* HAnimSegment1821 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1821->setUSE("hanim_r_middle_proximal");
HAnimHumanoid45->setSegments(*HAnimSegment1821);

CHAnimSegment* HAnimSegment1822 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1822->setUSE("hanim_l_midproximal");
HAnimHumanoid45->setSegments(*HAnimSegment1822);

CHAnimSegment* HAnimSegment1823 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1823->setUSE("hanim_r_midproximal");
HAnimHumanoid45->setSegments(*HAnimSegment1823);

CHAnimSegment* HAnimSegment1824 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1824->setUSE("hanim_l_pinky_distal");
HAnimHumanoid45->setSegments(*HAnimSegment1824);

CHAnimSegment* HAnimSegment1825 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1825->setUSE("hanim_r_pinky_distal");
HAnimHumanoid45->setSegments(*HAnimSegment1825);

CHAnimSegment* HAnimSegment1826 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1826->setUSE("hanim_l_pinky_metacarpal");
HAnimHumanoid45->setSegments(*HAnimSegment1826);

CHAnimSegment* HAnimSegment1827 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1827->setUSE("hanim_r_pinky_metacarpal");
HAnimHumanoid45->setSegments(*HAnimSegment1827);

CHAnimSegment* HAnimSegment1828 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1828->setUSE("hanim_l_pinky_middle");
HAnimHumanoid45->setSegments(*HAnimSegment1828);

CHAnimSegment* HAnimSegment1829 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1829->setUSE("hanim_r_pinky_middle");
HAnimHumanoid45->setSegments(*HAnimSegment1829);

CHAnimSegment* HAnimSegment1830 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1830->setUSE("hanim_l_pinky_proximal");
HAnimHumanoid45->setSegments(*HAnimSegment1830);

CHAnimSegment* HAnimSegment1831 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1831->setUSE("hanim_r_pinky_proximal");
HAnimHumanoid45->setSegments(*HAnimSegment1831);

CHAnimSegment* HAnimSegment1832 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1832->setUSE("hanim_l_ring_distal");
HAnimHumanoid45->setSegments(*HAnimSegment1832);

CHAnimSegment* HAnimSegment1833 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1833->setUSE("hanim_r_ring_distal");
HAnimHumanoid45->setSegments(*HAnimSegment1833);

CHAnimSegment* HAnimSegment1834 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1834->setUSE("hanim_l_ring_metacarpal");
HAnimHumanoid45->setSegments(*HAnimSegment1834);

CHAnimSegment* HAnimSegment1835 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1835->setUSE("hanim_r_ring_metacarpal");
HAnimHumanoid45->setSegments(*HAnimSegment1835);

CHAnimSegment* HAnimSegment1836 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1836->setUSE("hanim_l_ring_middle");
HAnimHumanoid45->setSegments(*HAnimSegment1836);

CHAnimSegment* HAnimSegment1837 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1837->setUSE("hanim_r_ring_middle");
HAnimHumanoid45->setSegments(*HAnimSegment1837);

CHAnimSegment* HAnimSegment1838 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1838->setUSE("hanim_l_ring_proximal");
HAnimHumanoid45->setSegments(*HAnimSegment1838);

CHAnimSegment* HAnimSegment1839 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1839->setUSE("hanim_r_ring_proximal");
HAnimHumanoid45->setSegments(*HAnimSegment1839);

CHAnimSegment* HAnimSegment1840 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1840->setUSE("hanim_l_scapula");
HAnimHumanoid45->setSegments(*HAnimSegment1840);

CHAnimSegment* HAnimSegment1841 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1841->setUSE("hanim_r_scapula");
HAnimHumanoid45->setSegments(*HAnimSegment1841);

CHAnimSegment* HAnimSegment1842 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1842->setUSE("hanim_l_thigh");
HAnimHumanoid45->setSegments(*HAnimSegment1842);

CHAnimSegment* HAnimSegment1843 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1843->setUSE("hanim_r_thigh");
HAnimHumanoid45->setSegments(*HAnimSegment1843);

CHAnimSegment* HAnimSegment1844 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1844->setUSE("hanim_l_thumb_distal");
HAnimHumanoid45->setSegments(*HAnimSegment1844);

CHAnimSegment* HAnimSegment1845 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1845->setUSE("hanim_r_thumb_distal");
HAnimHumanoid45->setSegments(*HAnimSegment1845);

CHAnimSegment* HAnimSegment1846 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1846->setUSE("hanim_l_thumb_metacarpal");
HAnimHumanoid45->setSegments(*HAnimSegment1846);

CHAnimSegment* HAnimSegment1847 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1847->setUSE("hanim_r_thumb_metacarpal");
HAnimHumanoid45->setSegments(*HAnimSegment1847);

CHAnimSegment* HAnimSegment1848 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1848->setUSE("hanim_l_thumb_proximal");
HAnimHumanoid45->setSegments(*HAnimSegment1848);

CHAnimSegment* HAnimSegment1849 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1849->setUSE("hanim_r_thumb_proximal");
HAnimHumanoid45->setSegments(*HAnimSegment1849);

CHAnimSegment* HAnimSegment1850 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1850->setUSE("hanim_l_upperarm");
HAnimHumanoid45->setSegments(*HAnimSegment1850);

CHAnimSegment* HAnimSegment1851 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1851->setUSE("hanim_r_upperarm");
HAnimHumanoid45->setSegments(*HAnimSegment1851);

CHAnimSite* HAnimSite1852 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1852->setUSE("hanim_crotch_pt");
HAnimHumanoid45->setSites(*HAnimSite1852);

CHAnimSite* HAnimSite1853 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1853->setUSE("hanim_skull_tip");
HAnimHumanoid45->setSites(*HAnimSite1853);

CHAnimSite* HAnimSite1854 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1854->setUSE("hanim_sellion_pt");
HAnimHumanoid45->setSites(*HAnimSite1854);

CHAnimSite* HAnimSite1855 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1855->setUSE("hanim_supramenton_pt");
HAnimHumanoid45->setSites(*HAnimSite1855);

CHAnimSite* HAnimSite1856 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1856->setUSE("hanim_nuchale_pt");
HAnimHumanoid45->setSites(*HAnimSite1856);

CHAnimSite* HAnimSite1857 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1857->setUSE("hanim_suprasternale_pt");
HAnimHumanoid45->setSites(*HAnimSite1857);

CHAnimSite* HAnimSite1858 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1858->setUSE("hanim_cervicale_pt");
HAnimHumanoid45->setSites(*HAnimSite1858);

CHAnimSite* HAnimSite1859 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1859->setUSE("hanim_substernale_pt");
HAnimHumanoid45->setSites(*HAnimSite1859);

CHAnimSite* HAnimSite1860 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1860->setUSE("hanim_rib10_midspine_pt");
HAnimHumanoid45->setSites(*HAnimSite1860);

CHAnimSite* HAnimSite1861 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1861->setUSE("hanim_waist_preferred_post_pt");
HAnimHumanoid45->setSites(*HAnimSite1861);

CHAnimSite* HAnimSite1862 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1862->setUSE("hanim_navel_pt");
HAnimHumanoid45->setSites(*HAnimSite1862);

CHAnimSite* HAnimSite1863 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1863->setUSE("hanim_l_acromion_pt");
HAnimHumanoid45->setSites(*HAnimSite1863);

CHAnimSite* HAnimSite1864 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1864->setUSE("hanim_r_acromion_pt");
HAnimHumanoid45->setSites(*HAnimSite1864);

CHAnimSite* HAnimSite1865 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1865->setUSE("hanim_r_asis_pt");
HAnimHumanoid45->setSites(*HAnimSite1865);

CHAnimSite* HAnimSite1866 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1866->setUSE("hanim_l_asis_pt");
HAnimHumanoid45->setSites(*HAnimSite1866);

CHAnimSite* HAnimSite1867 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1867->setUSE("hanim_l_axilla_ant_pt");
HAnimHumanoid45->setSites(*HAnimSite1867);

CHAnimSite* HAnimSite1868 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1868->setUSE("hanim_r_axilla_ant_pt");
HAnimHumanoid45->setSites(*HAnimSite1868);

CHAnimSite* HAnimSite1869 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1869->setUSE("hanim_l_axilla_post_pt");
HAnimHumanoid45->setSites(*HAnimSite1869);

CHAnimSite* HAnimSite1870 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1870->setUSE("hanim_r_axilla_post_pt");
HAnimHumanoid45->setSites(*HAnimSite1870);

CHAnimSite* HAnimSite1871 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1871->setUSE("hanim_l_calcaneous_post_pt");
HAnimHumanoid45->setSites(*HAnimSite1871);

CHAnimSite* HAnimSite1872 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1872->setUSE("hanim_r_calcaneous_post_pt");
HAnimHumanoid45->setSites(*HAnimSite1872);

CHAnimSite* HAnimSite1873 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1873->setUSE("hanim_l_clavicale_pt");
HAnimHumanoid45->setSites(*HAnimSite1873);

CHAnimSite* HAnimSite1874 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1874->setUSE("hanim_r_clavicale_pt");
HAnimHumanoid45->setSites(*HAnimSite1874);

CHAnimSite* HAnimSite1875 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1875->setUSE("hanim_l_dactylion_pt");
HAnimHumanoid45->setSites(*HAnimSite1875);

CHAnimSite* HAnimSite1876 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1876->setUSE("hanim_r_dactylion_pt");
HAnimHumanoid45->setSites(*HAnimSite1876);

CHAnimSite* HAnimSite1877 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1877->setUSE("hanim_l_digit2_pt");
HAnimHumanoid45->setSites(*HAnimSite1877);

CHAnimSite* HAnimSite1878 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1878->setUSE("hanim_r_digit2_pt");
HAnimHumanoid45->setSites(*HAnimSite1878);

CHAnimSite* HAnimSite1879 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1879->setUSE("hanim_l_femoral_lateral_epicn_pt");
HAnimHumanoid45->setSites(*HAnimSite1879);

CHAnimSite* HAnimSite1880 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1880->setUSE("hanim_r_femoral_lateral_epicn_pt");
HAnimHumanoid45->setSites(*HAnimSite1880);

CHAnimSite* HAnimSite1881 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1881->setUSE("hanim_l_femoral_medial_epicn_pt");
HAnimHumanoid45->setSites(*HAnimSite1881);

CHAnimSite* HAnimSite1882 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1882->setUSE("hanim_r_femoral_medial_epicn_pt");
HAnimHumanoid45->setSites(*HAnimSite1882);

CHAnimSite* HAnimSite1883 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1883->setUSE("hanim_l_forefoot_tip");
HAnimHumanoid45->setSites(*HAnimSite1883);

CHAnimSite* HAnimSite1884 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1884->setUSE("hanim_r_forefoot_tip");
HAnimHumanoid45->setSites(*HAnimSite1884);

CHAnimSite* HAnimSite1885 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1885->setUSE("hanim_r_gonion_pt");
HAnimHumanoid45->setSites(*HAnimSite1885);

CHAnimSite* HAnimSite1886 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1886->setUSE("hanim_l_gonion_pt");
HAnimHumanoid45->setSites(*HAnimSite1886);

CHAnimSite* HAnimSite1887 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1887->setUSE("hanim_l_humeral_lateral_epicn_pt");
HAnimHumanoid45->setSites(*HAnimSite1887);

CHAnimSite* HAnimSite1888 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1888->setUSE("hanim_r_humeral_lateral_epicn_pt");
HAnimHumanoid45->setSites(*HAnimSite1888);

CHAnimSite* HAnimSite1889 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1889->setUSE("hanim_l_humeral_medial_epicn_pt");
HAnimHumanoid45->setSites(*HAnimSite1889);

CHAnimSite* HAnimSite1890 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1890->setUSE("hanim_r_humeral_medial_epicn_pt");
HAnimHumanoid45->setSites(*HAnimSite1890);

CHAnimSite* HAnimSite1891 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1891->setUSE("hanim_r_iliocristale_pt");
HAnimHumanoid45->setSites(*HAnimSite1891);

CHAnimSite* HAnimSite1892 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1892->setUSE("hanim_l_iliocristale_pt");
HAnimHumanoid45->setSites(*HAnimSite1892);

CHAnimSite* HAnimSite1893 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1893->setUSE("hanim_l_index_distal_tip");
HAnimHumanoid45->setSites(*HAnimSite1893);

CHAnimSite* HAnimSite1894 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1894->setUSE("hanim_r_index_distal_tip");
HAnimHumanoid45->setSites(*HAnimSite1894);

CHAnimSite* HAnimSite1895 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1895->setUSE("hanim_r_infraorbitale_pt");
HAnimHumanoid45->setSites(*HAnimSite1895);

CHAnimSite* HAnimSite1896 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1896->setUSE("hanim_l_infraorbitale_pt");
HAnimHumanoid45->setSites(*HAnimSite1896);

CHAnimSite* HAnimSite1897 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1897->setUSE("hanim_l_knee_crease_pt");
HAnimHumanoid45->setSites(*HAnimSite1897);

CHAnimSite* HAnimSite1898 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1898->setUSE("hanim_r_knee_crease_pt");
HAnimHumanoid45->setSites(*HAnimSite1898);

CHAnimSite* HAnimSite1899 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1899->setUSE("hanim_l_lateral_malleolus_pt");
HAnimHumanoid45->setSites(*HAnimSite1899);

CHAnimSite* HAnimSite1900 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1900->setUSE("hanim_r_lateral_malleolus_pt");
HAnimHumanoid45->setSites(*HAnimSite1900);

CHAnimSite* HAnimSite1901 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1901->setUSE("hanim_l_medial_malleolus_pt");
HAnimHumanoid45->setSites(*HAnimSite1901);

CHAnimSite* HAnimSite1902 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1902->setUSE("hanim_r_medial_malleolus_pt");
HAnimHumanoid45->setSites(*HAnimSite1902);

CHAnimSite* HAnimSite1903 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1903->setUSE("hanim_l_metacarpal_pha2_pt");
HAnimHumanoid45->setSites(*HAnimSite1903);

CHAnimSite* HAnimSite1904 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1904->setUSE("hanim_r_metacarpal_pha2_pt");
HAnimHumanoid45->setSites(*HAnimSite1904);

CHAnimSite* HAnimSite1905 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1905->setUSE("hanim_l_metacarpal_pha5_pt");
HAnimHumanoid45->setSites(*HAnimSite1905);

CHAnimSite* HAnimSite1906 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1906->setUSE("hanim_r_metacarpal_pha5_pt");
HAnimHumanoid45->setSites(*HAnimSite1906);

CHAnimSite* HAnimSite1907 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1907->setUSE("hanim_l_metatarsal_pha1_pt");
HAnimHumanoid45->setSites(*HAnimSite1907);

CHAnimSite* HAnimSite1908 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1908->setUSE("hanim_r_metatarsal_pha1_pt");
HAnimHumanoid45->setSites(*HAnimSite1908);

CHAnimSite* HAnimSite1909 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1909->setUSE("hanim_l_metatarsal_pha5_pt");
HAnimHumanoid45->setSites(*HAnimSite1909);

CHAnimSite* HAnimSite1910 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1910->setUSE("hanim_r_metatarsal_pha5_pt");
HAnimHumanoid45->setSites(*HAnimSite1910);

CHAnimSite* HAnimSite1911 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1911->setUSE("hanim_l_middle_distal_tip");
HAnimHumanoid45->setSites(*HAnimSite1911);

CHAnimSite* HAnimSite1912 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1912->setUSE("hanim_r_middle_distal_tip");
HAnimHumanoid45->setSites(*HAnimSite1912);

CHAnimSite* HAnimSite1913 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1913->setUSE("hanim_r_neck_base_pt");
HAnimHumanoid45->setSites(*HAnimSite1913);

CHAnimSite* HAnimSite1914 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1914->setUSE("hanim_l_neck_base_pt");
HAnimHumanoid45->setSites(*HAnimSite1914);

CHAnimSite* HAnimSite1915 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1915->setUSE("hanim_l_olecranon_pt");
HAnimHumanoid45->setSites(*HAnimSite1915);

CHAnimSite* HAnimSite1916 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1916->setUSE("hanim_r_olecranon_pt");
HAnimHumanoid45->setSites(*HAnimSite1916);

CHAnimSite* HAnimSite1917 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1917->setUSE("hanim_l_pinky_distal_tip");
HAnimHumanoid45->setSites(*HAnimSite1917);

CHAnimSite* HAnimSite1918 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1918->setUSE("hanim_r_pinky_distal_tip");
HAnimHumanoid45->setSites(*HAnimSite1918);

CHAnimSite* HAnimSite1919 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1919->setUSE("hanim_r_psis_pt");
HAnimHumanoid45->setSites(*HAnimSite1919);

CHAnimSite* HAnimSite1920 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1920->setUSE("hanim_l_psis_pt");
HAnimHumanoid45->setSites(*HAnimSite1920);

CHAnimSite* HAnimSite1921 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1921->setUSE("hanim_l_radial_styloid_pt");
HAnimHumanoid45->setSites(*HAnimSite1921);

CHAnimSite* HAnimSite1922 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1922->setUSE("hanim_r_radial_styloid_pt");
HAnimHumanoid45->setSites(*HAnimSite1922);

CHAnimSite* HAnimSite1923 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1923->setUSE("hanim_l_radiale_pt");
HAnimHumanoid45->setSites(*HAnimSite1923);

CHAnimSite* HAnimSite1924 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1924->setUSE("hanim_r_radiale_pt");
HAnimHumanoid45->setSites(*HAnimSite1924);

CHAnimSite* HAnimSite1925 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1925->setUSE("hanim_r_rib10_pt");
HAnimHumanoid45->setSites(*HAnimSite1925);

CHAnimSite* HAnimSite1926 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1926->setUSE("hanim_l_rib10_pt");
HAnimHumanoid45->setSites(*HAnimSite1926);

CHAnimSite* HAnimSite1927 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1927->setUSE("hanim_l_ring_distal_tip");
HAnimHumanoid45->setSites(*HAnimSite1927);

CHAnimSite* HAnimSite1928 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1928->setUSE("hanim_r_ring_distal_tip");
HAnimHumanoid45->setSites(*HAnimSite1928);

CHAnimSite* HAnimSite1929 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1929->setUSE("hanim_temporomandibular_l_site_pt");
HAnimHumanoid45->setSites(*HAnimSite1929);

CHAnimSite* HAnimSite1930 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1930->setUSE("hanim_temporomandibular_r_site_pt");
HAnimHumanoid45->setSites(*HAnimSite1930);

CHAnimSite* HAnimSite1931 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1931->setUSE("hanim_l_sphyrion_pt");
HAnimHumanoid45->setSites(*HAnimSite1931);

CHAnimSite* HAnimSite1932 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1932->setUSE("hanim_r_sphyrion_pt");
HAnimHumanoid45->setSites(*HAnimSite1932);

CHAnimSite* HAnimSite1933 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1933->setUSE("hanim_r_thelion_pt");
HAnimHumanoid45->setSites(*HAnimSite1933);

CHAnimSite* HAnimSite1934 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1934->setUSE("hanim_l_thelion_pt");
HAnimHumanoid45->setSites(*HAnimSite1934);

CHAnimSite* HAnimSite1935 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1935->setUSE("hanim_l_thumb_distal_tip");
HAnimHumanoid45->setSites(*HAnimSite1935);

CHAnimSite* HAnimSite1936 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1936->setUSE("hanim_r_thumb_distal_tip");
HAnimHumanoid45->setSites(*HAnimSite1936);

CHAnimSite* HAnimSite1937 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1937->setUSE("hanim_r_tragion_pt");
HAnimHumanoid45->setSites(*HAnimSite1937);

CHAnimSite* HAnimSite1938 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1938->setUSE("hanim_l_tragion_pt");
HAnimHumanoid45->setSites(*HAnimSite1938);

CHAnimSite* HAnimSite1939 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1939->setUSE("hanim_r_trochanterion_pt");
HAnimHumanoid45->setSites(*HAnimSite1939);

CHAnimSite* HAnimSite1940 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1940->setUSE("hanim_l_trochanterion_pt");
HAnimHumanoid45->setSites(*HAnimSite1940);

CHAnimSite* HAnimSite1941 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1941->setUSE("hanim_l_ulnar_styloid_pt");
HAnimHumanoid45->setSites(*HAnimSite1941);

CHAnimSite* HAnimSite1942 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1942->setUSE("hanim_r_ulnar_styloid_pt");
HAnimHumanoid45->setSites(*HAnimSite1942);

group->addChildren(*HAnimHumanoid45);

CGroup* Group1943 = (CGroup *)(m_pScene.createNode("Group"));
Group1943->setDEF("StopAnimation");
CTimeSensor* TimeSensor1944 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor1944->setDEF("StopTimer");
TimeSensor1944->setCycleInterval(5.73);
TimeSensor1944->setLoop(True);
Group1943->addChildren(*TimeSensor1944);

CPositionInterpolator* PositionInterpolator1945 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator1945->setDEF("Stop_HumanoidRoot_TranslationInterpolator");
PositionInterpolator1945->setKey(new float[3]{0,0.5,1});
PositionInterpolator1945->setKeyValue(new float[9]{0,0,0,0,0,0,0,0,0});
Group1943->addChildren(*PositionInterpolator1945);

COrientationInterpolator* OrientationInterpolator1946 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1946->setDEF("Stop_HumanoidRoot_RotationInterpolator");
OrientationInterpolator1946->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1946->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1946);

COrientationInterpolator* OrientationInterpolator1947 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1947->setDEF("Stop_sacroiliac_RotationInterpolator");
OrientationInterpolator1947->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1947->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1947);

COrientationInterpolator* OrientationInterpolator1948 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1948->setDEF("Stop_l_hip_RotationInterpolator");
OrientationInterpolator1948->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1948->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1948);

COrientationInterpolator* OrientationInterpolator1949 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1949->setDEF("Stop_l_knee_RotationInterpolator");
OrientationInterpolator1949->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1949->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1949);

COrientationInterpolator* OrientationInterpolator1950 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1950->setDEF("Stop_l_ankle_RotationInterpolator");
OrientationInterpolator1950->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1950->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1950);

COrientationInterpolator* OrientationInterpolator1951 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1951->setDEF("Stop_l_subtalar_RotationInterpolator");
OrientationInterpolator1951->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1951->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1951);

COrientationInterpolator* OrientationInterpolator1952 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1952->setDEF("Stop_l_midtarsal_RotationInterpolator");
OrientationInterpolator1952->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1952->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1952);

COrientationInterpolator* OrientationInterpolator1953 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1953->setDEF("Stop_l_metatarsal_RotationInterpolator");
OrientationInterpolator1953->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1953->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1953);

COrientationInterpolator* OrientationInterpolator1954 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1954->setDEF("Stop_r_hip_RotationInterpolator");
OrientationInterpolator1954->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1954->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1954);

COrientationInterpolator* OrientationInterpolator1955 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1955->setDEF("Stop_r_knee_RotationInterpolator");
OrientationInterpolator1955->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1955->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1955);

COrientationInterpolator* OrientationInterpolator1956 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1956->setDEF("Stop_r_ankle_RotationInterpolator");
OrientationInterpolator1956->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1956->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1956);

COrientationInterpolator* OrientationInterpolator1957 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1957->setDEF("Stop_r_subtalar_RotationInterpolator");
OrientationInterpolator1957->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1957->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1957);

COrientationInterpolator* OrientationInterpolator1958 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1958->setDEF("Stop_r_midtarsal_RotationInterpolator");
OrientationInterpolator1958->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1958->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1958);

COrientationInterpolator* OrientationInterpolator1959 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1959->setDEF("Stop_r_metatarsal_RotationInterpolator");
OrientationInterpolator1959->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1959->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1959);

COrientationInterpolator* OrientationInterpolator1960 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1960->setDEF("Stop_vl5_RotationInterpolator");
OrientationInterpolator1960->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1960->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1960);

COrientationInterpolator* OrientationInterpolator1961 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1961->setDEF("Stop_vl4_RotationInterpolator");
OrientationInterpolator1961->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1961->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1961);

COrientationInterpolator* OrientationInterpolator1962 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1962->setDEF("Stop_vl3_RotationInterpolator");
OrientationInterpolator1962->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1962->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1962);

COrientationInterpolator* OrientationInterpolator1963 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1963->setDEF("Stop_vl2_RotationInterpolator");
OrientationInterpolator1963->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1963->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1963);

COrientationInterpolator* OrientationInterpolator1964 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1964->setDEF("Stop_vl1_RotationInterpolator");
OrientationInterpolator1964->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1964->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1964);

COrientationInterpolator* OrientationInterpolator1965 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1965->setDEF("Stop_vt12_RotationInterpolator");
OrientationInterpolator1965->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1965->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1965);

COrientationInterpolator* OrientationInterpolator1966 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1966->setDEF("Stop_vt11_RotationInterpolator");
OrientationInterpolator1966->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1966->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1966);

COrientationInterpolator* OrientationInterpolator1967 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1967->setDEF("Stop_vt10_RotationInterpolator");
OrientationInterpolator1967->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1967->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1967);

COrientationInterpolator* OrientationInterpolator1968 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1968->setDEF("Stop_vt9_RotationInterpolator");
OrientationInterpolator1968->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1968->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1968);

COrientationInterpolator* OrientationInterpolator1969 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1969->setDEF("Stop_vt8_RotationInterpolator");
OrientationInterpolator1969->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1969->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1969);

COrientationInterpolator* OrientationInterpolator1970 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1970->setDEF("Stop_vt7_RotationInterpolator");
OrientationInterpolator1970->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1970->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1970);

COrientationInterpolator* OrientationInterpolator1971 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1971->setDEF("Stop_vt6_RotationInterpolator");
OrientationInterpolator1971->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1971->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1971);

COrientationInterpolator* OrientationInterpolator1972 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1972->setDEF("Stop_vt5_RotationInterpolator");
OrientationInterpolator1972->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1972->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1972);

COrientationInterpolator* OrientationInterpolator1973 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1973->setDEF("Stop_vt4_RotationInterpolator");
OrientationInterpolator1973->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1973->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1973);

COrientationInterpolator* OrientationInterpolator1974 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1974->setDEF("Stop_vt3_RotationInterpolator");
OrientationInterpolator1974->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1974->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1974);

COrientationInterpolator* OrientationInterpolator1975 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1975->setDEF("Stop_vt2_RotationInterpolator");
OrientationInterpolator1975->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1975->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1975);

COrientationInterpolator* OrientationInterpolator1976 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1976->setDEF("Stop_vt1_RotationInterpolator");
OrientationInterpolator1976->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1976->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1976);

COrientationInterpolator* OrientationInterpolator1977 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1977->setDEF("Stop_vc7_RotationInterpolator");
OrientationInterpolator1977->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1977->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1977);

COrientationInterpolator* OrientationInterpolator1978 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1978->setDEF("Stop_vc6_RotationInterpolator");
OrientationInterpolator1978->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1978->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1978);

COrientationInterpolator* OrientationInterpolator1979 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1979->setDEF("Stop_vc5_RotationInterpolator");
OrientationInterpolator1979->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1979->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1979);

COrientationInterpolator* OrientationInterpolator1980 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1980->setDEF("Stop_vc4_RotationInterpolator");
OrientationInterpolator1980->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1980->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1980);

COrientationInterpolator* OrientationInterpolator1981 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1981->setDEF("Stop_vc3_RotationInterpolator");
OrientationInterpolator1981->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1981->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1981);

COrientationInterpolator* OrientationInterpolator1982 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1982->setDEF("Stop_vc2_RotationInterpolator");
OrientationInterpolator1982->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1982->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1982);

COrientationInterpolator* OrientationInterpolator1983 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1983->setDEF("Stop_vc1_RotationInterpolator");
OrientationInterpolator1983->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1983->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1983);

COrientationInterpolator* OrientationInterpolator1984 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1984->setDEF("Stop_skullbase_RotationInterpolator");
OrientationInterpolator1984->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1984->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1984);

COrientationInterpolator* OrientationInterpolator1985 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1985->setDEF("Stop_l_eyeball_joint_RotationInterpolator");
OrientationInterpolator1985->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1985->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1985);

COrientationInterpolator* OrientationInterpolator1986 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1986->setDEF("Stop_r_eyeball_joint_RotationInterpolator");
OrientationInterpolator1986->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1986->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1986);

COrientationInterpolator* OrientationInterpolator1987 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1987->setDEF("Stop_l_sternoclavicular_RotationInterpolator");
OrientationInterpolator1987->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1987->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1987);

COrientationInterpolator* OrientationInterpolator1988 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1988->setDEF("Stop_l_acromioclavicular_RotationInterpolator");
OrientationInterpolator1988->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1988->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1988);

COrientationInterpolator* OrientationInterpolator1989 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1989->setDEF("Stop_l_shoulder_RotationInterpolator");
OrientationInterpolator1989->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1989->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1989);

COrientationInterpolator* OrientationInterpolator1990 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1990->setDEF("Stop_l_elbow_RotationInterpolator");
OrientationInterpolator1990->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1990->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1990);

COrientationInterpolator* OrientationInterpolator1991 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1991->setDEF("Stop_l_wrist_RotationInterpolator");
OrientationInterpolator1991->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1991->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1991);

COrientationInterpolator* OrientationInterpolator1992 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1992->setDEF("Stop_l_thumb1_RotationInterpolator");
OrientationInterpolator1992->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1992->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1992);

COrientationInterpolator* OrientationInterpolator1993 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1993->setDEF("Stop_l_thumb2_RotationInterpolator");
OrientationInterpolator1993->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1993->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1993);

COrientationInterpolator* OrientationInterpolator1994 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1994->setDEF("Stop_l_thumb3_RotationInterpolator");
OrientationInterpolator1994->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1994->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1994);

COrientationInterpolator* OrientationInterpolator1995 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1995->setDEF("Stop_l_index0_RotationInterpolator");
OrientationInterpolator1995->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1995->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1995);

COrientationInterpolator* OrientationInterpolator1996 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1996->setDEF("Stop_l_index1_RotationInterpolator");
OrientationInterpolator1996->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1996->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1996);

COrientationInterpolator* OrientationInterpolator1997 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1997->setDEF("Stop_l_index2_RotationInterpolator");
OrientationInterpolator1997->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1997->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1997);

COrientationInterpolator* OrientationInterpolator1998 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1998->setDEF("Stop_l_index3_RotationInterpolator");
OrientationInterpolator1998->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1998->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1998);

COrientationInterpolator* OrientationInterpolator1999 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1999->setDEF("Stop_l_middle0_RotationInterpolator");
OrientationInterpolator1999->setKey(new float[3]{0,0.5,1});
OrientationInterpolator1999->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator1999);

COrientationInterpolator* OrientationInterpolator2000 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2000->setDEF("Stop_l_middle1_RotationInterpolator");
OrientationInterpolator2000->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2000->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator2000);

COrientationInterpolator* OrientationInterpolator2001 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2001->setDEF("Stop_l_middle2_RotationInterpolator");
OrientationInterpolator2001->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2001->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator2001);

COrientationInterpolator* OrientationInterpolator2002 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2002->setDEF("Stop_l_middle3_RotationInterpolator");
OrientationInterpolator2002->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2002->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator2002);

COrientationInterpolator* OrientationInterpolator2003 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2003->setDEF("Stop_l_ring0_RotationInterpolator");
OrientationInterpolator2003->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2003->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator2003);

COrientationInterpolator* OrientationInterpolator2004 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2004->setDEF("Stop_l_ring1_RotationInterpolator");
OrientationInterpolator2004->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2004->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator2004);

COrientationInterpolator* OrientationInterpolator2005 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2005->setDEF("Stop_l_ring2_RotationInterpolator");
OrientationInterpolator2005->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2005->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator2005);

COrientationInterpolator* OrientationInterpolator2006 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2006->setDEF("Stop_l_ring3_RotationInterpolator");
OrientationInterpolator2006->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2006->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator2006);

COrientationInterpolator* OrientationInterpolator2007 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2007->setDEF("Stop_l_pinky0_RotationInterpolator");
OrientationInterpolator2007->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2007->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator2007);

COrientationInterpolator* OrientationInterpolator2008 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2008->setDEF("Stop_l_pinky1_RotationInterpolator");
OrientationInterpolator2008->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2008->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator2008);

COrientationInterpolator* OrientationInterpolator2009 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2009->setDEF("Stop_l_pinky2_RotationInterpolator");
OrientationInterpolator2009->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2009->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator2009);

COrientationInterpolator* OrientationInterpolator2010 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2010->setDEF("Stop_l_pinky3_RotationInterpolator");
OrientationInterpolator2010->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2010->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator2010);

COrientationInterpolator* OrientationInterpolator2011 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2011->setDEF("Stop_r_sternoclavicular_RotationInterpolator");
OrientationInterpolator2011->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2011->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator2011);

COrientationInterpolator* OrientationInterpolator2012 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2012->setDEF("Stop_r_acromioclavicular_RotationInterpolator");
OrientationInterpolator2012->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2012->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator2012);

COrientationInterpolator* OrientationInterpolator2013 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2013->setDEF("Stop_r_shoulder_RotationInterpolator");
OrientationInterpolator2013->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2013->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator2013);

COrientationInterpolator* OrientationInterpolator2014 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2014->setDEF("Stop_r_elbow_RotationInterpolator");
OrientationInterpolator2014->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2014->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator2014);

COrientationInterpolator* OrientationInterpolator2015 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2015->setDEF("Stop_r_wrist_RotationInterpolator");
OrientationInterpolator2015->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2015->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator2015);

COrientationInterpolator* OrientationInterpolator2016 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2016->setDEF("Stop_r_thumb1_RotationInterpolator");
OrientationInterpolator2016->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2016->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator2016);

COrientationInterpolator* OrientationInterpolator2017 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2017->setDEF("Stop_r_thumb2_RotationInterpolator");
OrientationInterpolator2017->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2017->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator2017);

COrientationInterpolator* OrientationInterpolator2018 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2018->setDEF("Stop_r_thumb3_RotationInterpolator");
OrientationInterpolator2018->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2018->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator2018);

COrientationInterpolator* OrientationInterpolator2019 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2019->setDEF("Stop_r_index0_RotationInterpolator");
OrientationInterpolator2019->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2019->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator2019);

COrientationInterpolator* OrientationInterpolator2020 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2020->setDEF("Stop_r_index1_RotationInterpolator");
OrientationInterpolator2020->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2020->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator2020);

COrientationInterpolator* OrientationInterpolator2021 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2021->setDEF("Stop_r_index2_RotationInterpolator");
OrientationInterpolator2021->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2021->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator2021);

COrientationInterpolator* OrientationInterpolator2022 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2022->setDEF("Stop_r_index3_RotationInterpolator");
OrientationInterpolator2022->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2022->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator2022);

COrientationInterpolator* OrientationInterpolator2023 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2023->setDEF("Stop_r_middle0_RotationInterpolator");
OrientationInterpolator2023->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2023->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator2023);

COrientationInterpolator* OrientationInterpolator2024 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2024->setDEF("Stop_r_middle1_RotationInterpolator");
OrientationInterpolator2024->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2024->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator2024);

COrientationInterpolator* OrientationInterpolator2025 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2025->setDEF("Stop_r_middle2_RotationInterpolator");
OrientationInterpolator2025->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2025->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator2025);

COrientationInterpolator* OrientationInterpolator2026 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2026->setDEF("Stop_r_middle3_RotationInterpolator");
OrientationInterpolator2026->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2026->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator2026);

COrientationInterpolator* OrientationInterpolator2027 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2027->setDEF("Stop_r_ring0_RotationInterpolator");
OrientationInterpolator2027->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2027->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator2027);

COrientationInterpolator* OrientationInterpolator2028 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2028->setDEF("Stop_r_ring1_RotationInterpolator");
OrientationInterpolator2028->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2028->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator2028);

COrientationInterpolator* OrientationInterpolator2029 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2029->setDEF("Stop_r_ring2_RotationInterpolator");
OrientationInterpolator2029->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2029->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator2029);

COrientationInterpolator* OrientationInterpolator2030 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2030->setDEF("Stop_r_ring3_RotationInterpolator");
OrientationInterpolator2030->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2030->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator2030);

COrientationInterpolator* OrientationInterpolator2031 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2031->setDEF("Stop_r_pinky0_RotationInterpolator");
OrientationInterpolator2031->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2031->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator2031);

COrientationInterpolator* OrientationInterpolator2032 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2032->setDEF("Stop_r_pinky1_RotationInterpolator");
OrientationInterpolator2032->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2032->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator2032);

COrientationInterpolator* OrientationInterpolator2033 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2033->setDEF("Stop_r_pinky2_RotationInterpolator");
OrientationInterpolator2033->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2033->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator2033);

COrientationInterpolator* OrientationInterpolator2034 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2034->setDEF("Stop_r_pinky3_RotationInterpolator");
OrientationInterpolator2034->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2034->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1943->addChildren(*OrientationInterpolator2034);

CROUTE* ROUTE2035 = new CROUTE();
ROUTE2035->setFromField("fraction_changed");
ROUTE2035->setFromNode("StopTimer");
ROUTE2035->setToField("set_fraction");
ROUTE2035->setToNode("Stop_HumanoidRoot_TranslationInterpolator");
Group1943->addChildren(*ROUTE2035);

CROUTE* ROUTE2036 = new CROUTE();
ROUTE2036->setFromField("fraction_changed");
ROUTE2036->setFromNode("StopTimer");
ROUTE2036->setToField("set_fraction");
ROUTE2036->setToNode("Stop_HumanoidRoot_RotationInterpolator");
Group1943->addChildren(*ROUTE2036);

CROUTE* ROUTE2037 = new CROUTE();
ROUTE2037->setFromField("fraction_changed");
ROUTE2037->setFromNode("StopTimer");
ROUTE2037->setToField("set_fraction");
ROUTE2037->setToNode("Stop_sacroiliac_RotationInterpolator");
Group1943->addChildren(*ROUTE2037);

CROUTE* ROUTE2038 = new CROUTE();
ROUTE2038->setFromField("fraction_changed");
ROUTE2038->setFromNode("StopTimer");
ROUTE2038->setToField("set_fraction");
ROUTE2038->setToNode("Stop_l_hip_RotationInterpolator");
Group1943->addChildren(*ROUTE2038);

CROUTE* ROUTE2039 = new CROUTE();
ROUTE2039->setFromField("fraction_changed");
ROUTE2039->setFromNode("StopTimer");
ROUTE2039->setToField("set_fraction");
ROUTE2039->setToNode("Stop_l_knee_RotationInterpolator");
Group1943->addChildren(*ROUTE2039);

CROUTE* ROUTE2040 = new CROUTE();
ROUTE2040->setFromField("fraction_changed");
ROUTE2040->setFromNode("StopTimer");
ROUTE2040->setToField("set_fraction");
ROUTE2040->setToNode("Stop_l_ankle_RotationInterpolator");
Group1943->addChildren(*ROUTE2040);

CROUTE* ROUTE2041 = new CROUTE();
ROUTE2041->setFromField("fraction_changed");
ROUTE2041->setFromNode("StopTimer");
ROUTE2041->setToField("set_fraction");
ROUTE2041->setToNode("Stop_l_subtalar_RotationInterpolator");
Group1943->addChildren(*ROUTE2041);

CROUTE* ROUTE2042 = new CROUTE();
ROUTE2042->setFromField("fraction_changed");
ROUTE2042->setFromNode("StopTimer");
ROUTE2042->setToField("set_fraction");
ROUTE2042->setToNode("Stop_l_midtarsal_RotationInterpolator");
Group1943->addChildren(*ROUTE2042);

CROUTE* ROUTE2043 = new CROUTE();
ROUTE2043->setFromField("fraction_changed");
ROUTE2043->setFromNode("StopTimer");
ROUTE2043->setToField("set_fraction");
ROUTE2043->setToNode("Stop_l_metatarsal_RotationInterpolator");
Group1943->addChildren(*ROUTE2043);

CROUTE* ROUTE2044 = new CROUTE();
ROUTE2044->setFromField("fraction_changed");
ROUTE2044->setFromNode("StopTimer");
ROUTE2044->setToField("set_fraction");
ROUTE2044->setToNode("Stop_r_hip_RotationInterpolator");
Group1943->addChildren(*ROUTE2044);

CROUTE* ROUTE2045 = new CROUTE();
ROUTE2045->setFromField("fraction_changed");
ROUTE2045->setFromNode("StopTimer");
ROUTE2045->setToField("set_fraction");
ROUTE2045->setToNode("Stop_r_knee_RotationInterpolator");
Group1943->addChildren(*ROUTE2045);

CROUTE* ROUTE2046 = new CROUTE();
ROUTE2046->setFromField("fraction_changed");
ROUTE2046->setFromNode("StopTimer");
ROUTE2046->setToField("set_fraction");
ROUTE2046->setToNode("Stop_r_ankle_RotationInterpolator");
Group1943->addChildren(*ROUTE2046);

CROUTE* ROUTE2047 = new CROUTE();
ROUTE2047->setFromField("fraction_changed");
ROUTE2047->setFromNode("StopTimer");
ROUTE2047->setToField("set_fraction");
ROUTE2047->setToNode("Stop_r_subtalar_RotationInterpolator");
Group1943->addChildren(*ROUTE2047);

CROUTE* ROUTE2048 = new CROUTE();
ROUTE2048->setFromField("fraction_changed");
ROUTE2048->setFromNode("StopTimer");
ROUTE2048->setToField("set_fraction");
ROUTE2048->setToNode("Stop_r_midtarsal_RotationInterpolator");
Group1943->addChildren(*ROUTE2048);

CROUTE* ROUTE2049 = new CROUTE();
ROUTE2049->setFromField("fraction_changed");
ROUTE2049->setFromNode("StopTimer");
ROUTE2049->setToField("set_fraction");
ROUTE2049->setToNode("Stop_r_metatarsal_RotationInterpolator");
Group1943->addChildren(*ROUTE2049);

CROUTE* ROUTE2050 = new CROUTE();
ROUTE2050->setFromField("fraction_changed");
ROUTE2050->setFromNode("StopTimer");
ROUTE2050->setToField("set_fraction");
ROUTE2050->setToNode("Stop_vl5_RotationInterpolator");
Group1943->addChildren(*ROUTE2050);

CROUTE* ROUTE2051 = new CROUTE();
ROUTE2051->setFromField("fraction_changed");
ROUTE2051->setFromNode("StopTimer");
ROUTE2051->setToField("set_fraction");
ROUTE2051->setToNode("Stop_vl4_RotationInterpolator");
Group1943->addChildren(*ROUTE2051);

CROUTE* ROUTE2052 = new CROUTE();
ROUTE2052->setFromField("fraction_changed");
ROUTE2052->setFromNode("StopTimer");
ROUTE2052->setToField("set_fraction");
ROUTE2052->setToNode("Stop_vl3_RotationInterpolator");
Group1943->addChildren(*ROUTE2052);

CROUTE* ROUTE2053 = new CROUTE();
ROUTE2053->setFromField("fraction_changed");
ROUTE2053->setFromNode("StopTimer");
ROUTE2053->setToField("set_fraction");
ROUTE2053->setToNode("Stop_vl2_RotationInterpolator");
Group1943->addChildren(*ROUTE2053);

CROUTE* ROUTE2054 = new CROUTE();
ROUTE2054->setFromField("fraction_changed");
ROUTE2054->setFromNode("StopTimer");
ROUTE2054->setToField("set_fraction");
ROUTE2054->setToNode("Stop_vl1_RotationInterpolator");
Group1943->addChildren(*ROUTE2054);

CROUTE* ROUTE2055 = new CROUTE();
ROUTE2055->setFromField("fraction_changed");
ROUTE2055->setFromNode("StopTimer");
ROUTE2055->setToField("set_fraction");
ROUTE2055->setToNode("Stop_vt12_RotationInterpolator");
Group1943->addChildren(*ROUTE2055);

CROUTE* ROUTE2056 = new CROUTE();
ROUTE2056->setFromField("fraction_changed");
ROUTE2056->setFromNode("StopTimer");
ROUTE2056->setToField("set_fraction");
ROUTE2056->setToNode("Stop_vt11_RotationInterpolator");
Group1943->addChildren(*ROUTE2056);

CROUTE* ROUTE2057 = new CROUTE();
ROUTE2057->setFromField("fraction_changed");
ROUTE2057->setFromNode("StopTimer");
ROUTE2057->setToField("set_fraction");
ROUTE2057->setToNode("Stop_vt10_RotationInterpolator");
Group1943->addChildren(*ROUTE2057);

CROUTE* ROUTE2058 = new CROUTE();
ROUTE2058->setFromField("fraction_changed");
ROUTE2058->setFromNode("StopTimer");
ROUTE2058->setToField("set_fraction");
ROUTE2058->setToNode("Stop_vt9_RotationInterpolator");
Group1943->addChildren(*ROUTE2058);

CROUTE* ROUTE2059 = new CROUTE();
ROUTE2059->setFromField("fraction_changed");
ROUTE2059->setFromNode("StopTimer");
ROUTE2059->setToField("set_fraction");
ROUTE2059->setToNode("Stop_vt8_RotationInterpolator");
Group1943->addChildren(*ROUTE2059);

CROUTE* ROUTE2060 = new CROUTE();
ROUTE2060->setFromField("fraction_changed");
ROUTE2060->setFromNode("StopTimer");
ROUTE2060->setToField("set_fraction");
ROUTE2060->setToNode("Stop_vt7_RotationInterpolator");
Group1943->addChildren(*ROUTE2060);

CROUTE* ROUTE2061 = new CROUTE();
ROUTE2061->setFromField("fraction_changed");
ROUTE2061->setFromNode("StopTimer");
ROUTE2061->setToField("set_fraction");
ROUTE2061->setToNode("Stop_vt6_RotationInterpolator");
Group1943->addChildren(*ROUTE2061);

CROUTE* ROUTE2062 = new CROUTE();
ROUTE2062->setFromField("fraction_changed");
ROUTE2062->setFromNode("StopTimer");
ROUTE2062->setToField("set_fraction");
ROUTE2062->setToNode("Stop_vt5_RotationInterpolator");
Group1943->addChildren(*ROUTE2062);

CROUTE* ROUTE2063 = new CROUTE();
ROUTE2063->setFromField("fraction_changed");
ROUTE2063->setFromNode("StopTimer");
ROUTE2063->setToField("set_fraction");
ROUTE2063->setToNode("Stop_vt4_RotationInterpolator");
Group1943->addChildren(*ROUTE2063);

CROUTE* ROUTE2064 = new CROUTE();
ROUTE2064->setFromField("fraction_changed");
ROUTE2064->setFromNode("StopTimer");
ROUTE2064->setToField("set_fraction");
ROUTE2064->setToNode("Stop_vt3_RotationInterpolator");
Group1943->addChildren(*ROUTE2064);

CROUTE* ROUTE2065 = new CROUTE();
ROUTE2065->setFromField("fraction_changed");
ROUTE2065->setFromNode("StopTimer");
ROUTE2065->setToField("set_fraction");
ROUTE2065->setToNode("Stop_vt2_RotationInterpolator");
Group1943->addChildren(*ROUTE2065);

CROUTE* ROUTE2066 = new CROUTE();
ROUTE2066->setFromField("fraction_changed");
ROUTE2066->setFromNode("StopTimer");
ROUTE2066->setToField("set_fraction");
ROUTE2066->setToNode("Stop_vt1_RotationInterpolator");
Group1943->addChildren(*ROUTE2066);

CROUTE* ROUTE2067 = new CROUTE();
ROUTE2067->setFromField("fraction_changed");
ROUTE2067->setFromNode("StopTimer");
ROUTE2067->setToField("set_fraction");
ROUTE2067->setToNode("Stop_vc7_RotationInterpolator");
Group1943->addChildren(*ROUTE2067);

CROUTE* ROUTE2068 = new CROUTE();
ROUTE2068->setFromField("fraction_changed");
ROUTE2068->setFromNode("StopTimer");
ROUTE2068->setToField("set_fraction");
ROUTE2068->setToNode("Stop_vc6_RotationInterpolator");
Group1943->addChildren(*ROUTE2068);

CROUTE* ROUTE2069 = new CROUTE();
ROUTE2069->setFromField("fraction_changed");
ROUTE2069->setFromNode("StopTimer");
ROUTE2069->setToField("set_fraction");
ROUTE2069->setToNode("Stop_vc5_RotationInterpolator");
Group1943->addChildren(*ROUTE2069);

CROUTE* ROUTE2070 = new CROUTE();
ROUTE2070->setFromField("fraction_changed");
ROUTE2070->setFromNode("StopTimer");
ROUTE2070->setToField("set_fraction");
ROUTE2070->setToNode("Stop_vc4_RotationInterpolator");
Group1943->addChildren(*ROUTE2070);

CROUTE* ROUTE2071 = new CROUTE();
ROUTE2071->setFromField("fraction_changed");
ROUTE2071->setFromNode("StopTimer");
ROUTE2071->setToField("set_fraction");
ROUTE2071->setToNode("Stop_vc3_RotationInterpolator");
Group1943->addChildren(*ROUTE2071);

CROUTE* ROUTE2072 = new CROUTE();
ROUTE2072->setFromField("fraction_changed");
ROUTE2072->setFromNode("StopTimer");
ROUTE2072->setToField("set_fraction");
ROUTE2072->setToNode("Stop_vc2_RotationInterpolator");
Group1943->addChildren(*ROUTE2072);

CROUTE* ROUTE2073 = new CROUTE();
ROUTE2073->setFromField("fraction_changed");
ROUTE2073->setFromNode("StopTimer");
ROUTE2073->setToField("set_fraction");
ROUTE2073->setToNode("Stop_vc1_RotationInterpolator");
Group1943->addChildren(*ROUTE2073);

CROUTE* ROUTE2074 = new CROUTE();
ROUTE2074->setFromField("fraction_changed");
ROUTE2074->setFromNode("StopTimer");
ROUTE2074->setToField("set_fraction");
ROUTE2074->setToNode("Stop_skullbase_RotationInterpolator");
Group1943->addChildren(*ROUTE2074);

CROUTE* ROUTE2075 = new CROUTE();
ROUTE2075->setFromField("fraction_changed");
ROUTE2075->setFromNode("StopTimer");
ROUTE2075->setToField("set_fraction");
ROUTE2075->setToNode("Stop_l_eyeball_joint_RotationInterpolator");
Group1943->addChildren(*ROUTE2075);

CROUTE* ROUTE2076 = new CROUTE();
ROUTE2076->setFromField("fraction_changed");
ROUTE2076->setFromNode("StopTimer");
ROUTE2076->setToField("set_fraction");
ROUTE2076->setToNode("Stop_r_eyeball_joint_RotationInterpolator");
Group1943->addChildren(*ROUTE2076);

CROUTE* ROUTE2077 = new CROUTE();
ROUTE2077->setFromField("fraction_changed");
ROUTE2077->setFromNode("StopTimer");
ROUTE2077->setToField("set_fraction");
ROUTE2077->setToNode("Stop_l_sternoclavicular_RotationInterpolator");
Group1943->addChildren(*ROUTE2077);

CROUTE* ROUTE2078 = new CROUTE();
ROUTE2078->setFromField("fraction_changed");
ROUTE2078->setFromNode("StopTimer");
ROUTE2078->setToField("set_fraction");
ROUTE2078->setToNode("Stop_l_acromioclavicular_RotationInterpolator");
Group1943->addChildren(*ROUTE2078);

CROUTE* ROUTE2079 = new CROUTE();
ROUTE2079->setFromField("fraction_changed");
ROUTE2079->setFromNode("StopTimer");
ROUTE2079->setToField("set_fraction");
ROUTE2079->setToNode("Stop_l_shoulder_RotationInterpolator");
Group1943->addChildren(*ROUTE2079);

CROUTE* ROUTE2080 = new CROUTE();
ROUTE2080->setFromField("fraction_changed");
ROUTE2080->setFromNode("StopTimer");
ROUTE2080->setToField("set_fraction");
ROUTE2080->setToNode("Stop_l_elbow_RotationInterpolator");
Group1943->addChildren(*ROUTE2080);

CROUTE* ROUTE2081 = new CROUTE();
ROUTE2081->setFromField("fraction_changed");
ROUTE2081->setFromNode("StopTimer");
ROUTE2081->setToField("set_fraction");
ROUTE2081->setToNode("Stop_l_wrist_RotationInterpolator");
Group1943->addChildren(*ROUTE2081);

CROUTE* ROUTE2082 = new CROUTE();
ROUTE2082->setFromField("fraction_changed");
ROUTE2082->setFromNode("StopTimer");
ROUTE2082->setToField("set_fraction");
ROUTE2082->setToNode("Stop_l_thumb1_RotationInterpolator");
Group1943->addChildren(*ROUTE2082);

CROUTE* ROUTE2083 = new CROUTE();
ROUTE2083->setFromField("fraction_changed");
ROUTE2083->setFromNode("StopTimer");
ROUTE2083->setToField("set_fraction");
ROUTE2083->setToNode("Stop_l_thumb2_RotationInterpolator");
Group1943->addChildren(*ROUTE2083);

CROUTE* ROUTE2084 = new CROUTE();
ROUTE2084->setFromField("fraction_changed");
ROUTE2084->setFromNode("StopTimer");
ROUTE2084->setToField("set_fraction");
ROUTE2084->setToNode("Stop_l_thumb3_RotationInterpolator");
Group1943->addChildren(*ROUTE2084);

CROUTE* ROUTE2085 = new CROUTE();
ROUTE2085->setFromField("fraction_changed");
ROUTE2085->setFromNode("StopTimer");
ROUTE2085->setToField("set_fraction");
ROUTE2085->setToNode("Stop_l_index0_RotationInterpolator");
Group1943->addChildren(*ROUTE2085);

CROUTE* ROUTE2086 = new CROUTE();
ROUTE2086->setFromField("fraction_changed");
ROUTE2086->setFromNode("StopTimer");
ROUTE2086->setToField("set_fraction");
ROUTE2086->setToNode("Stop_l_index1_RotationInterpolator");
Group1943->addChildren(*ROUTE2086);

CROUTE* ROUTE2087 = new CROUTE();
ROUTE2087->setFromField("fraction_changed");
ROUTE2087->setFromNode("StopTimer");
ROUTE2087->setToField("set_fraction");
ROUTE2087->setToNode("Stop_l_index2_RotationInterpolator");
Group1943->addChildren(*ROUTE2087);

CROUTE* ROUTE2088 = new CROUTE();
ROUTE2088->setFromField("fraction_changed");
ROUTE2088->setFromNode("StopTimer");
ROUTE2088->setToField("set_fraction");
ROUTE2088->setToNode("Stop_l_index3_RotationInterpolator");
Group1943->addChildren(*ROUTE2088);

CROUTE* ROUTE2089 = new CROUTE();
ROUTE2089->setFromField("fraction_changed");
ROUTE2089->setFromNode("StopTimer");
ROUTE2089->setToField("set_fraction");
ROUTE2089->setToNode("Stop_l_middle0_RotationInterpolator");
Group1943->addChildren(*ROUTE2089);

CROUTE* ROUTE2090 = new CROUTE();
ROUTE2090->setFromField("fraction_changed");
ROUTE2090->setFromNode("StopTimer");
ROUTE2090->setToField("set_fraction");
ROUTE2090->setToNode("Stop_l_middle1_RotationInterpolator");
Group1943->addChildren(*ROUTE2090);

CROUTE* ROUTE2091 = new CROUTE();
ROUTE2091->setFromField("fraction_changed");
ROUTE2091->setFromNode("StopTimer");
ROUTE2091->setToField("set_fraction");
ROUTE2091->setToNode("Stop_l_middle2_RotationInterpolator");
Group1943->addChildren(*ROUTE2091);

CROUTE* ROUTE2092 = new CROUTE();
ROUTE2092->setFromField("fraction_changed");
ROUTE2092->setFromNode("StopTimer");
ROUTE2092->setToField("set_fraction");
ROUTE2092->setToNode("Stop_l_middle3_RotationInterpolator");
Group1943->addChildren(*ROUTE2092);

CROUTE* ROUTE2093 = new CROUTE();
ROUTE2093->setFromField("fraction_changed");
ROUTE2093->setFromNode("StopTimer");
ROUTE2093->setToField("set_fraction");
ROUTE2093->setToNode("Stop_l_ring0_RotationInterpolator");
Group1943->addChildren(*ROUTE2093);

CROUTE* ROUTE2094 = new CROUTE();
ROUTE2094->setFromField("fraction_changed");
ROUTE2094->setFromNode("StopTimer");
ROUTE2094->setToField("set_fraction");
ROUTE2094->setToNode("Stop_l_ring1_RotationInterpolator");
Group1943->addChildren(*ROUTE2094);

CROUTE* ROUTE2095 = new CROUTE();
ROUTE2095->setFromField("fraction_changed");
ROUTE2095->setFromNode("StopTimer");
ROUTE2095->setToField("set_fraction");
ROUTE2095->setToNode("Stop_l_ring2_RotationInterpolator");
Group1943->addChildren(*ROUTE2095);

CROUTE* ROUTE2096 = new CROUTE();
ROUTE2096->setFromField("fraction_changed");
ROUTE2096->setFromNode("StopTimer");
ROUTE2096->setToField("set_fraction");
ROUTE2096->setToNode("Stop_l_ring3_RotationInterpolator");
Group1943->addChildren(*ROUTE2096);

CROUTE* ROUTE2097 = new CROUTE();
ROUTE2097->setFromField("fraction_changed");
ROUTE2097->setFromNode("StopTimer");
ROUTE2097->setToField("set_fraction");
ROUTE2097->setToNode("Stop_l_pinky0_RotationInterpolator");
Group1943->addChildren(*ROUTE2097);

CROUTE* ROUTE2098 = new CROUTE();
ROUTE2098->setFromField("fraction_changed");
ROUTE2098->setFromNode("StopTimer");
ROUTE2098->setToField("set_fraction");
ROUTE2098->setToNode("Stop_l_pinky1_RotationInterpolator");
Group1943->addChildren(*ROUTE2098);

CROUTE* ROUTE2099 = new CROUTE();
ROUTE2099->setFromField("fraction_changed");
ROUTE2099->setFromNode("StopTimer");
ROUTE2099->setToField("set_fraction");
ROUTE2099->setToNode("Stop_l_pinky2_RotationInterpolator");
Group1943->addChildren(*ROUTE2099);

CROUTE* ROUTE2100 = new CROUTE();
ROUTE2100->setFromField("fraction_changed");
ROUTE2100->setFromNode("StopTimer");
ROUTE2100->setToField("set_fraction");
ROUTE2100->setToNode("Stop_l_pinky3_RotationInterpolator");
Group1943->addChildren(*ROUTE2100);

CROUTE* ROUTE2101 = new CROUTE();
ROUTE2101->setFromField("fraction_changed");
ROUTE2101->setFromNode("StopTimer");
ROUTE2101->setToField("set_fraction");
ROUTE2101->setToNode("Stop_r_sternoclavicular_RotationInterpolator");
Group1943->addChildren(*ROUTE2101);

CROUTE* ROUTE2102 = new CROUTE();
ROUTE2102->setFromField("fraction_changed");
ROUTE2102->setFromNode("StopTimer");
ROUTE2102->setToField("set_fraction");
ROUTE2102->setToNode("Stop_r_acromioclavicular_RotationInterpolator");
Group1943->addChildren(*ROUTE2102);

CROUTE* ROUTE2103 = new CROUTE();
ROUTE2103->setFromField("fraction_changed");
ROUTE2103->setFromNode("StopTimer");
ROUTE2103->setToField("set_fraction");
ROUTE2103->setToNode("Stop_r_shoulder_RotationInterpolator");
Group1943->addChildren(*ROUTE2103);

CROUTE* ROUTE2104 = new CROUTE();
ROUTE2104->setFromField("fraction_changed");
ROUTE2104->setFromNode("StopTimer");
ROUTE2104->setToField("set_fraction");
ROUTE2104->setToNode("Stop_r_elbow_RotationInterpolator");
Group1943->addChildren(*ROUTE2104);

CROUTE* ROUTE2105 = new CROUTE();
ROUTE2105->setFromField("fraction_changed");
ROUTE2105->setFromNode("StopTimer");
ROUTE2105->setToField("set_fraction");
ROUTE2105->setToNode("Stop_r_wrist_RotationInterpolator");
Group1943->addChildren(*ROUTE2105);

CROUTE* ROUTE2106 = new CROUTE();
ROUTE2106->setFromField("fraction_changed");
ROUTE2106->setFromNode("StopTimer");
ROUTE2106->setToField("set_fraction");
ROUTE2106->setToNode("Stop_r_thumb1_RotationInterpolator");
Group1943->addChildren(*ROUTE2106);

CROUTE* ROUTE2107 = new CROUTE();
ROUTE2107->setFromField("fraction_changed");
ROUTE2107->setFromNode("StopTimer");
ROUTE2107->setToField("set_fraction");
ROUTE2107->setToNode("Stop_r_thumb2_RotationInterpolator");
Group1943->addChildren(*ROUTE2107);

CROUTE* ROUTE2108 = new CROUTE();
ROUTE2108->setFromField("fraction_changed");
ROUTE2108->setFromNode("StopTimer");
ROUTE2108->setToField("set_fraction");
ROUTE2108->setToNode("Stop_r_thumb3_RotationInterpolator");
Group1943->addChildren(*ROUTE2108);

CROUTE* ROUTE2109 = new CROUTE();
ROUTE2109->setFromField("fraction_changed");
ROUTE2109->setFromNode("StopTimer");
ROUTE2109->setToField("set_fraction");
ROUTE2109->setToNode("Stop_r_index0_RotationInterpolator");
Group1943->addChildren(*ROUTE2109);

CROUTE* ROUTE2110 = new CROUTE();
ROUTE2110->setFromField("fraction_changed");
ROUTE2110->setFromNode("StopTimer");
ROUTE2110->setToField("set_fraction");
ROUTE2110->setToNode("Stop_r_index1_RotationInterpolator");
Group1943->addChildren(*ROUTE2110);

CROUTE* ROUTE2111 = new CROUTE();
ROUTE2111->setFromField("fraction_changed");
ROUTE2111->setFromNode("StopTimer");
ROUTE2111->setToField("set_fraction");
ROUTE2111->setToNode("Stop_r_index2_RotationInterpolator");
Group1943->addChildren(*ROUTE2111);

CROUTE* ROUTE2112 = new CROUTE();
ROUTE2112->setFromField("fraction_changed");
ROUTE2112->setFromNode("StopTimer");
ROUTE2112->setToField("set_fraction");
ROUTE2112->setToNode("Stop_r_index3_RotationInterpolator");
Group1943->addChildren(*ROUTE2112);

CROUTE* ROUTE2113 = new CROUTE();
ROUTE2113->setFromField("fraction_changed");
ROUTE2113->setFromNode("StopTimer");
ROUTE2113->setToField("set_fraction");
ROUTE2113->setToNode("Stop_r_middle0_RotationInterpolator");
Group1943->addChildren(*ROUTE2113);

CROUTE* ROUTE2114 = new CROUTE();
ROUTE2114->setFromField("fraction_changed");
ROUTE2114->setFromNode("StopTimer");
ROUTE2114->setToField("set_fraction");
ROUTE2114->setToNode("Stop_r_middle1_RotationInterpolator");
Group1943->addChildren(*ROUTE2114);

CROUTE* ROUTE2115 = new CROUTE();
ROUTE2115->setFromField("fraction_changed");
ROUTE2115->setFromNode("StopTimer");
ROUTE2115->setToField("set_fraction");
ROUTE2115->setToNode("Stop_r_middle2_RotationInterpolator");
Group1943->addChildren(*ROUTE2115);

CROUTE* ROUTE2116 = new CROUTE();
ROUTE2116->setFromField("fraction_changed");
ROUTE2116->setFromNode("StopTimer");
ROUTE2116->setToField("set_fraction");
ROUTE2116->setToNode("Stop_r_middle3_RotationInterpolator");
Group1943->addChildren(*ROUTE2116);

CROUTE* ROUTE2117 = new CROUTE();
ROUTE2117->setFromField("fraction_changed");
ROUTE2117->setFromNode("StopTimer");
ROUTE2117->setToField("set_fraction");
ROUTE2117->setToNode("Stop_r_ring0_RotationInterpolator");
Group1943->addChildren(*ROUTE2117);

CROUTE* ROUTE2118 = new CROUTE();
ROUTE2118->setFromField("fraction_changed");
ROUTE2118->setFromNode("StopTimer");
ROUTE2118->setToField("set_fraction");
ROUTE2118->setToNode("Stop_r_ring1_RotationInterpolator");
Group1943->addChildren(*ROUTE2118);

CROUTE* ROUTE2119 = new CROUTE();
ROUTE2119->setFromField("fraction_changed");
ROUTE2119->setFromNode("StopTimer");
ROUTE2119->setToField("set_fraction");
ROUTE2119->setToNode("Stop_r_ring2_RotationInterpolator");
Group1943->addChildren(*ROUTE2119);

CROUTE* ROUTE2120 = new CROUTE();
ROUTE2120->setFromField("fraction_changed");
ROUTE2120->setFromNode("StopTimer");
ROUTE2120->setToField("set_fraction");
ROUTE2120->setToNode("Stop_r_ring3_RotationInterpolator");
Group1943->addChildren(*ROUTE2120);

CROUTE* ROUTE2121 = new CROUTE();
ROUTE2121->setFromField("fraction_changed");
ROUTE2121->setFromNode("StopTimer");
ROUTE2121->setToField("set_fraction");
ROUTE2121->setToNode("Stop_r_pinky0_RotationInterpolator");
Group1943->addChildren(*ROUTE2121);

CROUTE* ROUTE2122 = new CROUTE();
ROUTE2122->setFromField("fraction_changed");
ROUTE2122->setFromNode("StopTimer");
ROUTE2122->setToField("set_fraction");
ROUTE2122->setToNode("Stop_r_pinky1_RotationInterpolator");
Group1943->addChildren(*ROUTE2122);

CROUTE* ROUTE2123 = new CROUTE();
ROUTE2123->setFromField("fraction_changed");
ROUTE2123->setFromNode("StopTimer");
ROUTE2123->setToField("set_fraction");
ROUTE2123->setToNode("Stop_r_pinky2_RotationInterpolator");
Group1943->addChildren(*ROUTE2123);

CROUTE* ROUTE2124 = new CROUTE();
ROUTE2124->setFromField("fraction_changed");
ROUTE2124->setFromNode("StopTimer");
ROUTE2124->setToField("set_fraction");
ROUTE2124->setToNode("Stop_r_pinky3_RotationInterpolator");
Group1943->addChildren(*ROUTE2124);

CROUTE* ROUTE2125 = new CROUTE();
ROUTE2125->setFromField("value_changed");
ROUTE2125->setFromNode("Stop_HumanoidRoot_TranslationInterpolator");
ROUTE2125->setToField("translation");
ROUTE2125->setToNode("hanim_humanoid_root");
Group1943->addChildren(*ROUTE2125);

CROUTE* ROUTE2126 = new CROUTE();
ROUTE2126->setFromField("value_changed");
ROUTE2126->setFromNode("Stop_HumanoidRoot_RotationInterpolator");
ROUTE2126->setToField("rotation");
ROUTE2126->setToNode("hanim_humanoid_root");
Group1943->addChildren(*ROUTE2126);

CROUTE* ROUTE2127 = new CROUTE();
ROUTE2127->setFromField("value_changed");
ROUTE2127->setFromNode("Stop_sacroiliac_RotationInterpolator");
ROUTE2127->setToField("rotation");
ROUTE2127->setToNode("hanim_sacroiliac");
Group1943->addChildren(*ROUTE2127);

CROUTE* ROUTE2128 = new CROUTE();
ROUTE2128->setFromField("value_changed");
ROUTE2128->setFromNode("Stop_l_hip_RotationInterpolator");
ROUTE2128->setToField("rotation");
ROUTE2128->setToNode("hanim_l_hip");
Group1943->addChildren(*ROUTE2128);

CROUTE* ROUTE2129 = new CROUTE();
ROUTE2129->setFromField("value_changed");
ROUTE2129->setFromNode("Stop_l_knee_RotationInterpolator");
ROUTE2129->setToField("rotation");
ROUTE2129->setToNode("hanim_l_knee");
Group1943->addChildren(*ROUTE2129);

CROUTE* ROUTE2130 = new CROUTE();
ROUTE2130->setFromField("value_changed");
ROUTE2130->setFromNode("Stop_l_ankle_RotationInterpolator");
ROUTE2130->setToField("rotation");
ROUTE2130->setToNode("hanim_l_ankle");
Group1943->addChildren(*ROUTE2130);

CROUTE* ROUTE2131 = new CROUTE();
ROUTE2131->setFromField("value_changed");
ROUTE2131->setFromNode("Stop_l_subtalar_RotationInterpolator");
ROUTE2131->setToField("rotation");
ROUTE2131->setToNode("hanim_l_subtalar");
Group1943->addChildren(*ROUTE2131);

CROUTE* ROUTE2132 = new CROUTE();
ROUTE2132->setFromField("value_changed");
ROUTE2132->setFromNode("Stop_l_midtarsal_RotationInterpolator");
ROUTE2132->setToField("rotation");
ROUTE2132->setToNode("hanim_l_midtarsal");
Group1943->addChildren(*ROUTE2132);

CROUTE* ROUTE2133 = new CROUTE();
ROUTE2133->setFromField("value_changed");
ROUTE2133->setFromNode("Stop_l_metatarsal_RotationInterpolator");
ROUTE2133->setToField("rotation");
ROUTE2133->setToNode("hanim_l_metatarsal");
Group1943->addChildren(*ROUTE2133);

CROUTE* ROUTE2134 = new CROUTE();
ROUTE2134->setFromField("value_changed");
ROUTE2134->setFromNode("Stop_r_hip_RotationInterpolator");
ROUTE2134->setToField("rotation");
ROUTE2134->setToNode("hanim_r_hip");
Group1943->addChildren(*ROUTE2134);

CROUTE* ROUTE2135 = new CROUTE();
ROUTE2135->setFromField("value_changed");
ROUTE2135->setFromNode("Stop_r_knee_RotationInterpolator");
ROUTE2135->setToField("rotation");
ROUTE2135->setToNode("hanim_r_knee");
Group1943->addChildren(*ROUTE2135);

CROUTE* ROUTE2136 = new CROUTE();
ROUTE2136->setFromField("value_changed");
ROUTE2136->setFromNode("Stop_r_ankle_RotationInterpolator");
ROUTE2136->setToField("rotation");
ROUTE2136->setToNode("hanim_r_ankle");
Group1943->addChildren(*ROUTE2136);

CROUTE* ROUTE2137 = new CROUTE();
ROUTE2137->setFromField("value_changed");
ROUTE2137->setFromNode("Stop_r_subtalar_RotationInterpolator");
ROUTE2137->setToField("rotation");
ROUTE2137->setToNode("hanim_r_subtalar");
Group1943->addChildren(*ROUTE2137);

CROUTE* ROUTE2138 = new CROUTE();
ROUTE2138->setFromField("value_changed");
ROUTE2138->setFromNode("Stop_r_midtarsal_RotationInterpolator");
ROUTE2138->setToField("rotation");
ROUTE2138->setToNode("hanim_r_midtarsal");
Group1943->addChildren(*ROUTE2138);

CROUTE* ROUTE2139 = new CROUTE();
ROUTE2139->setFromField("value_changed");
ROUTE2139->setFromNode("Stop_r_metatarsal_RotationInterpolator");
ROUTE2139->setToField("rotation");
ROUTE2139->setToNode("hanim_r_metatarsal");
Group1943->addChildren(*ROUTE2139);

CROUTE* ROUTE2140 = new CROUTE();
ROUTE2140->setFromField("value_changed");
ROUTE2140->setFromNode("Stop_vl5_RotationInterpolator");
ROUTE2140->setToField("rotation");
ROUTE2140->setToNode("hanim_vl5");
Group1943->addChildren(*ROUTE2140);

CROUTE* ROUTE2141 = new CROUTE();
ROUTE2141->setFromField("value_changed");
ROUTE2141->setFromNode("Stop_vl4_RotationInterpolator");
ROUTE2141->setToField("rotation");
ROUTE2141->setToNode("hanim_vl4");
Group1943->addChildren(*ROUTE2141);

CROUTE* ROUTE2142 = new CROUTE();
ROUTE2142->setFromField("value_changed");
ROUTE2142->setFromNode("Stop_vl3_RotationInterpolator");
ROUTE2142->setToField("rotation");
ROUTE2142->setToNode("hanim_vl3");
Group1943->addChildren(*ROUTE2142);

CROUTE* ROUTE2143 = new CROUTE();
ROUTE2143->setFromField("value_changed");
ROUTE2143->setFromNode("Stop_vl2_RotationInterpolator");
ROUTE2143->setToField("rotation");
ROUTE2143->setToNode("hanim_vl2");
Group1943->addChildren(*ROUTE2143);

CROUTE* ROUTE2144 = new CROUTE();
ROUTE2144->setFromField("value_changed");
ROUTE2144->setFromNode("Stop_vl1_RotationInterpolator");
ROUTE2144->setToField("rotation");
ROUTE2144->setToNode("hanim_vl1");
Group1943->addChildren(*ROUTE2144);

CROUTE* ROUTE2145 = new CROUTE();
ROUTE2145->setFromField("value_changed");
ROUTE2145->setFromNode("Stop_vt12_RotationInterpolator");
ROUTE2145->setToField("rotation");
ROUTE2145->setToNode("hanim_vt12");
Group1943->addChildren(*ROUTE2145);

CROUTE* ROUTE2146 = new CROUTE();
ROUTE2146->setFromField("value_changed");
ROUTE2146->setFromNode("Stop_vt11_RotationInterpolator");
ROUTE2146->setToField("rotation");
ROUTE2146->setToNode("hanim_vt11");
Group1943->addChildren(*ROUTE2146);

CROUTE* ROUTE2147 = new CROUTE();
ROUTE2147->setFromField("value_changed");
ROUTE2147->setFromNode("Stop_vt10_RotationInterpolator");
ROUTE2147->setToField("rotation");
ROUTE2147->setToNode("hanim_vt10");
Group1943->addChildren(*ROUTE2147);

CROUTE* ROUTE2148 = new CROUTE();
ROUTE2148->setFromField("value_changed");
ROUTE2148->setFromNode("Stop_vt9_RotationInterpolator");
ROUTE2148->setToField("rotation");
ROUTE2148->setToNode("hanim_vt9");
Group1943->addChildren(*ROUTE2148);

CROUTE* ROUTE2149 = new CROUTE();
ROUTE2149->setFromField("value_changed");
ROUTE2149->setFromNode("Stop_vt8_RotationInterpolator");
ROUTE2149->setToField("rotation");
ROUTE2149->setToNode("hanim_vt8");
Group1943->addChildren(*ROUTE2149);

CROUTE* ROUTE2150 = new CROUTE();
ROUTE2150->setFromField("value_changed");
ROUTE2150->setFromNode("Stop_vt7_RotationInterpolator");
ROUTE2150->setToField("rotation");
ROUTE2150->setToNode("hanim_vt7");
Group1943->addChildren(*ROUTE2150);

CROUTE* ROUTE2151 = new CROUTE();
ROUTE2151->setFromField("value_changed");
ROUTE2151->setFromNode("Stop_vt6_RotationInterpolator");
ROUTE2151->setToField("rotation");
ROUTE2151->setToNode("hanim_vt6");
Group1943->addChildren(*ROUTE2151);

CROUTE* ROUTE2152 = new CROUTE();
ROUTE2152->setFromField("value_changed");
ROUTE2152->setFromNode("Stop_vt5_RotationInterpolator");
ROUTE2152->setToField("rotation");
ROUTE2152->setToNode("hanim_vt5");
Group1943->addChildren(*ROUTE2152);

CROUTE* ROUTE2153 = new CROUTE();
ROUTE2153->setFromField("value_changed");
ROUTE2153->setFromNode("Stop_vt4_RotationInterpolator");
ROUTE2153->setToField("rotation");
ROUTE2153->setToNode("hanim_vt4");
Group1943->addChildren(*ROUTE2153);

CROUTE* ROUTE2154 = new CROUTE();
ROUTE2154->setFromField("value_changed");
ROUTE2154->setFromNode("Stop_vt3_RotationInterpolator");
ROUTE2154->setToField("rotation");
ROUTE2154->setToNode("hanim_vt3");
Group1943->addChildren(*ROUTE2154);

CROUTE* ROUTE2155 = new CROUTE();
ROUTE2155->setFromField("value_changed");
ROUTE2155->setFromNode("Stop_vt2_RotationInterpolator");
ROUTE2155->setToField("rotation");
ROUTE2155->setToNode("hanim_vt2");
Group1943->addChildren(*ROUTE2155);

CROUTE* ROUTE2156 = new CROUTE();
ROUTE2156->setFromField("value_changed");
ROUTE2156->setFromNode("Stop_vt1_RotationInterpolator");
ROUTE2156->setToField("rotation");
ROUTE2156->setToNode("hanim_vt1");
Group1943->addChildren(*ROUTE2156);

CROUTE* ROUTE2157 = new CROUTE();
ROUTE2157->setFromField("value_changed");
ROUTE2157->setFromNode("Stop_vc7_RotationInterpolator");
ROUTE2157->setToField("rotation");
ROUTE2157->setToNode("hanim_vc7");
Group1943->addChildren(*ROUTE2157);

CROUTE* ROUTE2158 = new CROUTE();
ROUTE2158->setFromField("value_changed");
ROUTE2158->setFromNode("Stop_vc6_RotationInterpolator");
ROUTE2158->setToField("rotation");
ROUTE2158->setToNode("hanim_vc6");
Group1943->addChildren(*ROUTE2158);

CROUTE* ROUTE2159 = new CROUTE();
ROUTE2159->setFromField("value_changed");
ROUTE2159->setFromNode("Stop_vc5_RotationInterpolator");
ROUTE2159->setToField("rotation");
ROUTE2159->setToNode("hanim_vc5");
Group1943->addChildren(*ROUTE2159);

CROUTE* ROUTE2160 = new CROUTE();
ROUTE2160->setFromField("value_changed");
ROUTE2160->setFromNode("Stop_vc4_RotationInterpolator");
ROUTE2160->setToField("rotation");
ROUTE2160->setToNode("hanim_vc4");
Group1943->addChildren(*ROUTE2160);

CROUTE* ROUTE2161 = new CROUTE();
ROUTE2161->setFromField("value_changed");
ROUTE2161->setFromNode("Stop_vc3_RotationInterpolator");
ROUTE2161->setToField("rotation");
ROUTE2161->setToNode("hanim_vc3");
Group1943->addChildren(*ROUTE2161);

CROUTE* ROUTE2162 = new CROUTE();
ROUTE2162->setFromField("value_changed");
ROUTE2162->setFromNode("Stop_vc2_RotationInterpolator");
ROUTE2162->setToField("rotation");
ROUTE2162->setToNode("hanim_vc2");
Group1943->addChildren(*ROUTE2162);

CROUTE* ROUTE2163 = new CROUTE();
ROUTE2163->setFromField("value_changed");
ROUTE2163->setFromNode("Stop_vc1_RotationInterpolator");
ROUTE2163->setToField("rotation");
ROUTE2163->setToNode("hanim_vc1");
Group1943->addChildren(*ROUTE2163);

CROUTE* ROUTE2164 = new CROUTE();
ROUTE2164->setFromField("value_changed");
ROUTE2164->setFromNode("Stop_skullbase_RotationInterpolator");
ROUTE2164->setToField("rotation");
ROUTE2164->setToNode("hanim_skullbase");
Group1943->addChildren(*ROUTE2164);

CROUTE* ROUTE2165 = new CROUTE();
ROUTE2165->setFromField("value_changed");
ROUTE2165->setFromNode("Stop_l_eyeball_joint_RotationInterpolator");
ROUTE2165->setToField("rotation");
ROUTE2165->setToNode("hanim_l_eyeball_joint");
Group1943->addChildren(*ROUTE2165);

CROUTE* ROUTE2166 = new CROUTE();
ROUTE2166->setFromField("value_changed");
ROUTE2166->setFromNode("Stop_r_eyeball_joint_RotationInterpolator");
ROUTE2166->setToField("rotation");
ROUTE2166->setToNode("hanim_r_eyeball_joint");
Group1943->addChildren(*ROUTE2166);

CROUTE* ROUTE2167 = new CROUTE();
ROUTE2167->setFromField("value_changed");
ROUTE2167->setFromNode("Stop_l_sternoclavicular_RotationInterpolator");
ROUTE2167->setToField("rotation");
ROUTE2167->setToNode("hanim_l_sternoclavicular");
Group1943->addChildren(*ROUTE2167);

CROUTE* ROUTE2168 = new CROUTE();
ROUTE2168->setFromField("value_changed");
ROUTE2168->setFromNode("Stop_l_acromioclavicular_RotationInterpolator");
ROUTE2168->setToField("rotation");
ROUTE2168->setToNode("hanim_l_acromioclavicular");
Group1943->addChildren(*ROUTE2168);

CROUTE* ROUTE2169 = new CROUTE();
ROUTE2169->setFromField("value_changed");
ROUTE2169->setFromNode("Stop_l_shoulder_RotationInterpolator");
ROUTE2169->setToField("rotation");
ROUTE2169->setToNode("hanim_l_shoulder");
Group1943->addChildren(*ROUTE2169);

CROUTE* ROUTE2170 = new CROUTE();
ROUTE2170->setFromField("value_changed");
ROUTE2170->setFromNode("Stop_l_elbow_RotationInterpolator");
ROUTE2170->setToField("rotation");
ROUTE2170->setToNode("hanim_l_elbow");
Group1943->addChildren(*ROUTE2170);

CROUTE* ROUTE2171 = new CROUTE();
ROUTE2171->setFromField("value_changed");
ROUTE2171->setFromNode("Stop_l_wrist_RotationInterpolator");
ROUTE2171->setToField("rotation");
ROUTE2171->setToNode("hanim_l_wrist");
Group1943->addChildren(*ROUTE2171);

CROUTE* ROUTE2172 = new CROUTE();
ROUTE2172->setFromField("value_changed");
ROUTE2172->setFromNode("Stop_l_thumb1_RotationInterpolator");
ROUTE2172->setToField("rotation");
ROUTE2172->setToNode("hanim_l_thumb1");
Group1943->addChildren(*ROUTE2172);

CROUTE* ROUTE2173 = new CROUTE();
ROUTE2173->setFromField("value_changed");
ROUTE2173->setFromNode("Stop_l_thumb2_RotationInterpolator");
ROUTE2173->setToField("rotation");
ROUTE2173->setToNode("hanim_l_thumb2");
Group1943->addChildren(*ROUTE2173);

CROUTE* ROUTE2174 = new CROUTE();
ROUTE2174->setFromField("value_changed");
ROUTE2174->setFromNode("Stop_l_thumb3_RotationInterpolator");
ROUTE2174->setToField("rotation");
ROUTE2174->setToNode("hanim_l_thumb3");
Group1943->addChildren(*ROUTE2174);

CROUTE* ROUTE2175 = new CROUTE();
ROUTE2175->setFromField("value_changed");
ROUTE2175->setFromNode("Stop_l_index0_RotationInterpolator");
ROUTE2175->setToField("rotation");
ROUTE2175->setToNode("hanim_l_index0");
Group1943->addChildren(*ROUTE2175);

CROUTE* ROUTE2176 = new CROUTE();
ROUTE2176->setFromField("value_changed");
ROUTE2176->setFromNode("Stop_l_index1_RotationInterpolator");
ROUTE2176->setToField("rotation");
ROUTE2176->setToNode("hanim_l_index1");
Group1943->addChildren(*ROUTE2176);

CROUTE* ROUTE2177 = new CROUTE();
ROUTE2177->setFromField("value_changed");
ROUTE2177->setFromNode("Stop_l_index2_RotationInterpolator");
ROUTE2177->setToField("rotation");
ROUTE2177->setToNode("hanim_l_index2");
Group1943->addChildren(*ROUTE2177);

CROUTE* ROUTE2178 = new CROUTE();
ROUTE2178->setFromField("value_changed");
ROUTE2178->setFromNode("Stop_l_index3_RotationInterpolator");
ROUTE2178->setToField("rotation");
ROUTE2178->setToNode("hanim_l_index3");
Group1943->addChildren(*ROUTE2178);

CROUTE* ROUTE2179 = new CROUTE();
ROUTE2179->setFromField("value_changed");
ROUTE2179->setFromNode("Stop_l_middle0_RotationInterpolator");
ROUTE2179->setToField("rotation");
ROUTE2179->setToNode("hanim_l_middle0");
Group1943->addChildren(*ROUTE2179);

CROUTE* ROUTE2180 = new CROUTE();
ROUTE2180->setFromField("value_changed");
ROUTE2180->setFromNode("Stop_l_middle1_RotationInterpolator");
ROUTE2180->setToField("rotation");
ROUTE2180->setToNode("hanim_l_middle1");
Group1943->addChildren(*ROUTE2180);

CROUTE* ROUTE2181 = new CROUTE();
ROUTE2181->setFromField("value_changed");
ROUTE2181->setFromNode("Stop_l_middle2_RotationInterpolator");
ROUTE2181->setToField("rotation");
ROUTE2181->setToNode("hanim_l_middle2");
Group1943->addChildren(*ROUTE2181);

CROUTE* ROUTE2182 = new CROUTE();
ROUTE2182->setFromField("value_changed");
ROUTE2182->setFromNode("Stop_l_middle3_RotationInterpolator");
ROUTE2182->setToField("rotation");
ROUTE2182->setToNode("hanim_l_middle3");
Group1943->addChildren(*ROUTE2182);

CROUTE* ROUTE2183 = new CROUTE();
ROUTE2183->setFromField("value_changed");
ROUTE2183->setFromNode("Stop_l_ring0_RotationInterpolator");
ROUTE2183->setToField("rotation");
ROUTE2183->setToNode("hanim_l_ring0");
Group1943->addChildren(*ROUTE2183);

CROUTE* ROUTE2184 = new CROUTE();
ROUTE2184->setFromField("value_changed");
ROUTE2184->setFromNode("Stop_l_ring1_RotationInterpolator");
ROUTE2184->setToField("rotation");
ROUTE2184->setToNode("hanim_l_ring1");
Group1943->addChildren(*ROUTE2184);

CROUTE* ROUTE2185 = new CROUTE();
ROUTE2185->setFromField("value_changed");
ROUTE2185->setFromNode("Stop_l_ring2_RotationInterpolator");
ROUTE2185->setToField("rotation");
ROUTE2185->setToNode("hanim_l_ring2");
Group1943->addChildren(*ROUTE2185);

CROUTE* ROUTE2186 = new CROUTE();
ROUTE2186->setFromField("value_changed");
ROUTE2186->setFromNode("Stop_l_ring3_RotationInterpolator");
ROUTE2186->setToField("rotation");
ROUTE2186->setToNode("hanim_l_ring3");
Group1943->addChildren(*ROUTE2186);

CROUTE* ROUTE2187 = new CROUTE();
ROUTE2187->setFromField("value_changed");
ROUTE2187->setFromNode("Stop_l_pinky0_RotationInterpolator");
ROUTE2187->setToField("rotation");
ROUTE2187->setToNode("hanim_l_pinky0");
Group1943->addChildren(*ROUTE2187);

CROUTE* ROUTE2188 = new CROUTE();
ROUTE2188->setFromField("value_changed");
ROUTE2188->setFromNode("Stop_l_pinky1_RotationInterpolator");
ROUTE2188->setToField("rotation");
ROUTE2188->setToNode("hanim_l_pinky1");
Group1943->addChildren(*ROUTE2188);

CROUTE* ROUTE2189 = new CROUTE();
ROUTE2189->setFromField("value_changed");
ROUTE2189->setFromNode("Stop_l_pinky2_RotationInterpolator");
ROUTE2189->setToField("rotation");
ROUTE2189->setToNode("hanim_l_pinky2");
Group1943->addChildren(*ROUTE2189);

CROUTE* ROUTE2190 = new CROUTE();
ROUTE2190->setFromField("value_changed");
ROUTE2190->setFromNode("Stop_l_pinky3_RotationInterpolator");
ROUTE2190->setToField("rotation");
ROUTE2190->setToNode("hanim_l_pinky3");
Group1943->addChildren(*ROUTE2190);

CROUTE* ROUTE2191 = new CROUTE();
ROUTE2191->setFromField("value_changed");
ROUTE2191->setFromNode("Stop_r_sternoclavicular_RotationInterpolator");
ROUTE2191->setToField("rotation");
ROUTE2191->setToNode("hanim_r_sternoclavicular");
Group1943->addChildren(*ROUTE2191);

CROUTE* ROUTE2192 = new CROUTE();
ROUTE2192->setFromField("value_changed");
ROUTE2192->setFromNode("Stop_r_acromioclavicular_RotationInterpolator");
ROUTE2192->setToField("rotation");
ROUTE2192->setToNode("hanim_r_acromioclavicular");
Group1943->addChildren(*ROUTE2192);

CROUTE* ROUTE2193 = new CROUTE();
ROUTE2193->setFromField("value_changed");
ROUTE2193->setFromNode("Stop_r_shoulder_RotationInterpolator");
ROUTE2193->setToField("rotation");
ROUTE2193->setToNode("hanim_r_shoulder");
Group1943->addChildren(*ROUTE2193);

CROUTE* ROUTE2194 = new CROUTE();
ROUTE2194->setFromField("value_changed");
ROUTE2194->setFromNode("Stop_r_elbow_RotationInterpolator");
ROUTE2194->setToField("rotation");
ROUTE2194->setToNode("hanim_r_elbow");
Group1943->addChildren(*ROUTE2194);

CROUTE* ROUTE2195 = new CROUTE();
ROUTE2195->setFromField("value_changed");
ROUTE2195->setFromNode("Stop_r_wrist_RotationInterpolator");
ROUTE2195->setToField("rotation");
ROUTE2195->setToNode("hanim_r_wrist");
Group1943->addChildren(*ROUTE2195);

CROUTE* ROUTE2196 = new CROUTE();
ROUTE2196->setFromField("value_changed");
ROUTE2196->setFromNode("Stop_r_thumb1_RotationInterpolator");
ROUTE2196->setToField("rotation");
ROUTE2196->setToNode("hanim_r_thumb1");
Group1943->addChildren(*ROUTE2196);

CROUTE* ROUTE2197 = new CROUTE();
ROUTE2197->setFromField("value_changed");
ROUTE2197->setFromNode("Stop_r_thumb2_RotationInterpolator");
ROUTE2197->setToField("rotation");
ROUTE2197->setToNode("hanim_r_thumb2");
Group1943->addChildren(*ROUTE2197);

CROUTE* ROUTE2198 = new CROUTE();
ROUTE2198->setFromField("value_changed");
ROUTE2198->setFromNode("Stop_r_thumb3_RotationInterpolator");
ROUTE2198->setToField("rotation");
ROUTE2198->setToNode("hanim_r_thumb3");
Group1943->addChildren(*ROUTE2198);

CROUTE* ROUTE2199 = new CROUTE();
ROUTE2199->setFromField("value_changed");
ROUTE2199->setFromNode("Stop_r_index0_RotationInterpolator");
ROUTE2199->setToField("rotation");
ROUTE2199->setToNode("hanim_r_index0");
Group1943->addChildren(*ROUTE2199);

CROUTE* ROUTE2200 = new CROUTE();
ROUTE2200->setFromField("value_changed");
ROUTE2200->setFromNode("Stop_r_index1_RotationInterpolator");
ROUTE2200->setToField("rotation");
ROUTE2200->setToNode("hanim_r_index1");
Group1943->addChildren(*ROUTE2200);

CROUTE* ROUTE2201 = new CROUTE();
ROUTE2201->setFromField("value_changed");
ROUTE2201->setFromNode("Stop_r_index2_RotationInterpolator");
ROUTE2201->setToField("rotation");
ROUTE2201->setToNode("hanim_r_index2");
Group1943->addChildren(*ROUTE2201);

CROUTE* ROUTE2202 = new CROUTE();
ROUTE2202->setFromField("value_changed");
ROUTE2202->setFromNode("Stop_r_index3_RotationInterpolator");
ROUTE2202->setToField("rotation");
ROUTE2202->setToNode("hanim_r_index3");
Group1943->addChildren(*ROUTE2202);

CROUTE* ROUTE2203 = new CROUTE();
ROUTE2203->setFromField("value_changed");
ROUTE2203->setFromNode("Stop_r_middle0_RotationInterpolator");
ROUTE2203->setToField("rotation");
ROUTE2203->setToNode("hanim_r_middle0");
Group1943->addChildren(*ROUTE2203);

CROUTE* ROUTE2204 = new CROUTE();
ROUTE2204->setFromField("value_changed");
ROUTE2204->setFromNode("Stop_r_middle1_RotationInterpolator");
ROUTE2204->setToField("rotation");
ROUTE2204->setToNode("hanim_r_middle1");
Group1943->addChildren(*ROUTE2204);

CROUTE* ROUTE2205 = new CROUTE();
ROUTE2205->setFromField("value_changed");
ROUTE2205->setFromNode("Stop_r_middle2_RotationInterpolator");
ROUTE2205->setToField("rotation");
ROUTE2205->setToNode("hanim_r_middle2");
Group1943->addChildren(*ROUTE2205);

CROUTE* ROUTE2206 = new CROUTE();
ROUTE2206->setFromField("value_changed");
ROUTE2206->setFromNode("Stop_r_middle3_RotationInterpolator");
ROUTE2206->setToField("rotation");
ROUTE2206->setToNode("hanim_r_middle3");
Group1943->addChildren(*ROUTE2206);

CROUTE* ROUTE2207 = new CROUTE();
ROUTE2207->setFromField("value_changed");
ROUTE2207->setFromNode("Stop_r_ring0_RotationInterpolator");
ROUTE2207->setToField("rotation");
ROUTE2207->setToNode("hanim_r_ring0");
Group1943->addChildren(*ROUTE2207);

CROUTE* ROUTE2208 = new CROUTE();
ROUTE2208->setFromField("value_changed");
ROUTE2208->setFromNode("Stop_r_ring1_RotationInterpolator");
ROUTE2208->setToField("rotation");
ROUTE2208->setToNode("hanim_r_ring1");
Group1943->addChildren(*ROUTE2208);

CROUTE* ROUTE2209 = new CROUTE();
ROUTE2209->setFromField("value_changed");
ROUTE2209->setFromNode("Stop_r_ring2_RotationInterpolator");
ROUTE2209->setToField("rotation");
ROUTE2209->setToNode("hanim_r_ring2");
Group1943->addChildren(*ROUTE2209);

CROUTE* ROUTE2210 = new CROUTE();
ROUTE2210->setFromField("value_changed");
ROUTE2210->setFromNode("Stop_r_ring3_RotationInterpolator");
ROUTE2210->setToField("rotation");
ROUTE2210->setToNode("hanim_r_ring3");
Group1943->addChildren(*ROUTE2210);

CROUTE* ROUTE2211 = new CROUTE();
ROUTE2211->setFromField("value_changed");
ROUTE2211->setFromNode("Stop_r_pinky0_RotationInterpolator");
ROUTE2211->setToField("rotation");
ROUTE2211->setToNode("hanim_r_pinky0");
Group1943->addChildren(*ROUTE2211);

CROUTE* ROUTE2212 = new CROUTE();
ROUTE2212->setFromField("value_changed");
ROUTE2212->setFromNode("Stop_r_pinky1_RotationInterpolator");
ROUTE2212->setToField("rotation");
ROUTE2212->setToNode("hanim_r_pinky1");
Group1943->addChildren(*ROUTE2212);

CROUTE* ROUTE2213 = new CROUTE();
ROUTE2213->setFromField("value_changed");
ROUTE2213->setFromNode("Stop_r_pinky2_RotationInterpolator");
ROUTE2213->setToField("rotation");
ROUTE2213->setToNode("hanim_r_pinky2");
Group1943->addChildren(*ROUTE2213);

CROUTE* ROUTE2214 = new CROUTE();
ROUTE2214->setFromField("value_changed");
ROUTE2214->setFromNode("Stop_r_pinky3_RotationInterpolator");
ROUTE2214->setToField("rotation");
ROUTE2214->setToNode("hanim_r_pinky3");
Group1943->addChildren(*ROUTE2214);

group->addChildren(*Group1943);

CGroup* Group2215 = (CGroup *)(m_pScene.createNode("Group"));
Group2215->setDEF("StandAnimation");
CTimeSensor* TimeSensor2216 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor2216->setDEF("StandTimer");
TimeSensor2216->setCycleInterval(5.73);
TimeSensor2216->setLoop(True);
Group2215->addChildren(*TimeSensor2216);

COrientationInterpolator* OrientationInterpolator2217 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2217->setDEF("Stand_r_metatarsal_PitchInterpolator");
OrientationInterpolator2217->setKey(new float[6]{0,0.2,0.4,0.6,0.7,1});
OrientationInterpolator2217->setKeyValue(new float[24]{1,0,0,0,-1,0,0,0.015,1,0,0,0.17,-1,0,0,0.025,1,0,0,0.01,1,0,0,0});
Group2215->addChildren(*OrientationInterpolator2217);

COrientationInterpolator* OrientationInterpolator2218 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2218->setDEF("Stand_r_ankle_RotationInterpolator");
OrientationInterpolator2218->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2218->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2215->addChildren(*OrientationInterpolator2218);

COrientationInterpolator* OrientationInterpolator2219 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2219->setDEF("Stand_r_knee_RotationInterpolator");
OrientationInterpolator2219->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2219->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2215->addChildren(*OrientationInterpolator2219);

COrientationInterpolator* OrientationInterpolator2220 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2220->setDEF("Stand_r_hip_RotationInterpolator");
OrientationInterpolator2220->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2220->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2215->addChildren(*OrientationInterpolator2220);

COrientationInterpolator* OrientationInterpolator2221 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2221->setDEF("Stand_l_ankle_RotationInterpolator");
OrientationInterpolator2221->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2221->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2215->addChildren(*OrientationInterpolator2221);

COrientationInterpolator* OrientationInterpolator2222 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2222->setDEF("Stand_l_knee_RotationInterpolator");
OrientationInterpolator2222->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2222->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2215->addChildren(*OrientationInterpolator2222);

COrientationInterpolator* OrientationInterpolator2223 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2223->setDEF("Stand_l_hip_RotationInterpolator");
OrientationInterpolator2223->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2223->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2215->addChildren(*OrientationInterpolator2223);

COrientationInterpolator* OrientationInterpolator2224 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2224->setDEF("Stand_r_wrist_RotationInterpolator");
OrientationInterpolator2224->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2224->setKeyValue(new float[12]{0,0,1,0,0,0,-1,0.25,0,0,1,0});
Group2215->addChildren(*OrientationInterpolator2224);

COrientationInterpolator* OrientationInterpolator2225 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2225->setDEF("Stand_r_elbow_RotationInterpolator");
OrientationInterpolator2225->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2225->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2215->addChildren(*OrientationInterpolator2225);

COrientationInterpolator* OrientationInterpolator2226 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2226->setDEF("Stand_r_shoulder_RotationInterpolator");
OrientationInterpolator2226->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2226->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2215->addChildren(*OrientationInterpolator2226);

COrientationInterpolator* OrientationInterpolator2227 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2227->setDEF("Stand_l_wrist_RotationInterpolator");
OrientationInterpolator2227->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2227->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2215->addChildren(*OrientationInterpolator2227);

COrientationInterpolator* OrientationInterpolator2228 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2228->setDEF("Stand_l_elbow_RotationInterpolator");
OrientationInterpolator2228->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2228->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2215->addChildren(*OrientationInterpolator2228);

COrientationInterpolator* OrientationInterpolator2229 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2229->setDEF("Stand_l_shoulder_RotationInterpolator");
OrientationInterpolator2229->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2229->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2215->addChildren(*OrientationInterpolator2229);

COrientationInterpolator* OrientationInterpolator2230 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2230->setDEF("Stand_head_RotationInterpolator");
OrientationInterpolator2230->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2230->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2215->addChildren(*OrientationInterpolator2230);

COrientationInterpolator* OrientationInterpolator2231 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2231->setDEF("Stand_neck_RotationInterpolator");
OrientationInterpolator2231->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2231->setKeyValue(new float[12]{0,0,1,0,-1,0,0,0.5,0,0,1,0});
Group2215->addChildren(*OrientationInterpolator2231);

COrientationInterpolator* OrientationInterpolator2232 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2232->setDEF("Stand_l_eyeball_RotationInterpolator");
OrientationInterpolator2232->setKey(new float[4]{0,0.4,0.7,1});
OrientationInterpolator2232->setKeyValue(new float[16]{0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0});
Group2215->addChildren(*OrientationInterpolator2232);

COrientationInterpolator* OrientationInterpolator2233 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2233->setDEF("Stand_r_eyeball_RotationInterpolator");
OrientationInterpolator2233->setKey(new float[4]{0,0.4,0.7,1});
OrientationInterpolator2233->setKeyValue(new float[16]{0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0});
Group2215->addChildren(*OrientationInterpolator2233);

COrientationInterpolator* OrientationInterpolator2234 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2234->setDEF("Stand_lower_body_RotationInterpolator");
OrientationInterpolator2234->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2234->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2215->addChildren(*OrientationInterpolator2234);

COrientationInterpolator* OrientationInterpolator2235 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2235->setDEF("Stand_upper_body_RotationInterpolator");
OrientationInterpolator2235->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2235->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2215->addChildren(*OrientationInterpolator2235);

COrientationInterpolator* OrientationInterpolator2236 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2236->setDEF("Stand_whole_body_RotationInterpolator");
OrientationInterpolator2236->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2236->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2215->addChildren(*OrientationInterpolator2236);

CPositionInterpolator* PositionInterpolator2237 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator2237->setDEF("Stand_whole_body_TranslationInterpolator");
PositionInterpolator2237->setKey(new float[3]{0,0.5,1});
PositionInterpolator2237->setKeyValue(new float[9]{0,0,0,0,0,0,0,0,0});
Group2215->addChildren(*PositionInterpolator2237);

COrientationInterpolator* OrientationInterpolator2238 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2238->setDEF("Stand_l_sternoclavicular_RollInterpolator");
OrientationInterpolator2238->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2238->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2215->addChildren(*OrientationInterpolator2238);

COrientationInterpolator* OrientationInterpolator2239 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2239->setDEF("Stand_l_acromioclavicular_RollInterpolator");
OrientationInterpolator2239->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2239->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2215->addChildren(*OrientationInterpolator2239);

COrientationInterpolator* OrientationInterpolator2240 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2240->setDEF("Stand_r_sternoclavicular_RollInterpolator");
OrientationInterpolator2240->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2240->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2215->addChildren(*OrientationInterpolator2240);

COrientationInterpolator* OrientationInterpolator2241 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2241->setDEF("Stand_r_acromioclavicular_RollInterpolator");
OrientationInterpolator2241->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2241->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2215->addChildren(*OrientationInterpolator2241);

COrientationInterpolator* OrientationInterpolator2242 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2242->setDEF("Stand_sacroiliac_YawInterpolator");
OrientationInterpolator2242->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2242->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2215->addChildren(*OrientationInterpolator2242);

COrientationInterpolator* OrientationInterpolator2243 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2243->setDEF("Stand_vl5_YawInterpolator");
OrientationInterpolator2243->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1});
OrientationInterpolator2243->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2215->addChildren(*OrientationInterpolator2243);

COrientationInterpolator* OrientationInterpolator2244 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2244->setDEF("Stand_vc6_YawInterpolator");
OrientationInterpolator2244->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1});
OrientationInterpolator2244->setKeyValue(new float[28]{0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,-1,0,0,0,0,-1,0,0,0,1,0,0});
Group2215->addChildren(*OrientationInterpolator2244);

COrientationInterpolator* OrientationInterpolator2245 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2245->setDEF("Stand_l_thumb1_PitchInterpolator");
OrientationInterpolator2245->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2245->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2215->addChildren(*OrientationInterpolator2245);

COrientationInterpolator* OrientationInterpolator2246 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2246->setDEF("Stand_r_thumb1_PitchInterpolator");
OrientationInterpolator2246->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2246->setKeyValue(new float[24]{1,0,0,0,1,0,0,0.5,1,0,0,0.1,1,0,0,0.27,1,0,0,0.2,1,0,0,0});
Group2215->addChildren(*OrientationInterpolator2246);

COrientationInterpolator* OrientationInterpolator2247 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2247->setDEF("Stand_r_index1_RollInterpolator");
OrientationInterpolator2247->setKey(new float[6]{0,0.2,0.4,0.5,0.8,1});
OrientationInterpolator2247->setKeyValue(new float[24]{0,0,1,0,0,0,1,0.1,0,0,1,0.2,0,0,1,0.3,0,0,1,0,0,0,1,0});
Group2215->addChildren(*OrientationInterpolator2247);

COrientationInterpolator* OrientationInterpolator2248 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2248->setDEF("Stand_r_index2_RollInterpolator");
OrientationInterpolator2248->setKey(new float[6]{0,0.2,0.4,0.5,0.8,1});
OrientationInterpolator2248->setKeyValue(new float[24]{0,0,1,0,0,0,1,0.4,0,0,1,0.32,0,0,1,0.25,0,0,1,0.2,0,0,1,0});
Group2215->addChildren(*OrientationInterpolator2248);

COrientationInterpolator* OrientationInterpolator2249 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2249->setDEF("Stand_r_index3_RollInterpolator");
OrientationInterpolator2249->setKey(new float[6]{0,0.2,0.4,0.5,0.8,1});
OrientationInterpolator2249->setKeyValue(new float[24]{0,0,1,0,0,0,1,0.2,0,0,1,0.3,0,0,1,0.35,0,0,1,0.2,0,0,1,0});
Group2215->addChildren(*OrientationInterpolator2249);

CROUTE* ROUTE2250 = new CROUTE();
ROUTE2250->setFromField("fraction_changed");
ROUTE2250->setFromNode("StandTimer");
ROUTE2250->setToField("set_fraction");
ROUTE2250->setToNode("Stand_r_ankle_RotationInterpolator");
Group2215->addChildren(*ROUTE2250);

CROUTE* ROUTE2251 = new CROUTE();
ROUTE2251->setFromField("fraction_changed");
ROUTE2251->setFromNode("StandTimer");
ROUTE2251->setToField("set_fraction");
ROUTE2251->setToNode("Stand_r_knee_RotationInterpolator");
Group2215->addChildren(*ROUTE2251);

CROUTE* ROUTE2252 = new CROUTE();
ROUTE2252->setFromField("fraction_changed");
ROUTE2252->setFromNode("StandTimer");
ROUTE2252->setToField("set_fraction");
ROUTE2252->setToNode("Stand_r_hip_RotationInterpolator");
Group2215->addChildren(*ROUTE2252);

CROUTE* ROUTE2253 = new CROUTE();
ROUTE2253->setFromField("fraction_changed");
ROUTE2253->setFromNode("StandTimer");
ROUTE2253->setToField("set_fraction");
ROUTE2253->setToNode("Stand_l_ankle_RotationInterpolator");
Group2215->addChildren(*ROUTE2253);

CROUTE* ROUTE2254 = new CROUTE();
ROUTE2254->setFromField("fraction_changed");
ROUTE2254->setFromNode("StandTimer");
ROUTE2254->setToField("set_fraction");
ROUTE2254->setToNode("Stand_l_knee_RotationInterpolator");
Group2215->addChildren(*ROUTE2254);

CROUTE* ROUTE2255 = new CROUTE();
ROUTE2255->setFromField("fraction_changed");
ROUTE2255->setFromNode("StandTimer");
ROUTE2255->setToField("set_fraction");
ROUTE2255->setToNode("Stand_l_hip_RotationInterpolator");
Group2215->addChildren(*ROUTE2255);

CROUTE* ROUTE2256 = new CROUTE();
ROUTE2256->setFromField("fraction_changed");
ROUTE2256->setFromNode("StandTimer");
ROUTE2256->setToField("set_fraction");
ROUTE2256->setToNode("Stand_lower_body_RotationInterpolator");
Group2215->addChildren(*ROUTE2256);

CROUTE* ROUTE2257 = new CROUTE();
ROUTE2257->setFromField("fraction_changed");
ROUTE2257->setFromNode("StandTimer");
ROUTE2257->setToField("set_fraction");
ROUTE2257->setToNode("Stand_r_wrist_RotationInterpolator");
Group2215->addChildren(*ROUTE2257);

CROUTE* ROUTE2258 = new CROUTE();
ROUTE2258->setFromField("fraction_changed");
ROUTE2258->setFromNode("StandTimer");
ROUTE2258->setToField("set_fraction");
ROUTE2258->setToNode("Stand_r_elbow_RotationInterpolator");
Group2215->addChildren(*ROUTE2258);

CROUTE* ROUTE2259 = new CROUTE();
ROUTE2259->setFromField("fraction_changed");
ROUTE2259->setFromNode("StandTimer");
ROUTE2259->setToField("set_fraction");
ROUTE2259->setToNode("Stand_r_shoulder_RotationInterpolator");
Group2215->addChildren(*ROUTE2259);

CROUTE* ROUTE2260 = new CROUTE();
ROUTE2260->setFromField("fraction_changed");
ROUTE2260->setFromNode("StandTimer");
ROUTE2260->setToField("set_fraction");
ROUTE2260->setToNode("Stand_l_wrist_RotationInterpolator");
Group2215->addChildren(*ROUTE2260);

CROUTE* ROUTE2261 = new CROUTE();
ROUTE2261->setFromField("fraction_changed");
ROUTE2261->setFromNode("StandTimer");
ROUTE2261->setToField("set_fraction");
ROUTE2261->setToNode("Stand_l_elbow_RotationInterpolator");
Group2215->addChildren(*ROUTE2261);

CROUTE* ROUTE2262 = new CROUTE();
ROUTE2262->setFromField("fraction_changed");
ROUTE2262->setFromNode("StandTimer");
ROUTE2262->setToField("set_fraction");
ROUTE2262->setToNode("Stand_l_shoulder_RotationInterpolator");
Group2215->addChildren(*ROUTE2262);

CROUTE* ROUTE2263 = new CROUTE();
ROUTE2263->setFromField("fraction_changed");
ROUTE2263->setFromNode("StandTimer");
ROUTE2263->setToField("set_fraction");
ROUTE2263->setToNode("Stand_head_RotationInterpolator");
Group2215->addChildren(*ROUTE2263);

CROUTE* ROUTE2264 = new CROUTE();
ROUTE2264->setFromField("fraction_changed");
ROUTE2264->setFromNode("StandTimer");
ROUTE2264->setToField("set_fraction");
ROUTE2264->setToNode("Stand_neck_RotationInterpolator");
Group2215->addChildren(*ROUTE2264);

CROUTE* ROUTE2265 = new CROUTE();
ROUTE2265->setFromField("fraction_changed");
ROUTE2265->setFromNode("StandTimer");
ROUTE2265->setToField("set_fraction");
ROUTE2265->setToNode("Stand_l_eyeball_RotationInterpolator");
Group2215->addChildren(*ROUTE2265);

CROUTE* ROUTE2266 = new CROUTE();
ROUTE2266->setFromField("fraction_changed");
ROUTE2266->setFromNode("StandTimer");
ROUTE2266->setToField("set_fraction");
ROUTE2266->setToNode("Stand_r_eyeball_RotationInterpolator");
Group2215->addChildren(*ROUTE2266);

CROUTE* ROUTE2267 = new CROUTE();
ROUTE2267->setFromField("fraction_changed");
ROUTE2267->setFromNode("StandTimer");
ROUTE2267->setToField("set_fraction");
ROUTE2267->setToNode("Stand_upper_body_RotationInterpolator");
Group2215->addChildren(*ROUTE2267);

CROUTE* ROUTE2268 = new CROUTE();
ROUTE2268->setFromField("fraction_changed");
ROUTE2268->setFromNode("StandTimer");
ROUTE2268->setToField("set_fraction");
ROUTE2268->setToNode("Stand_whole_body_RotationInterpolator");
Group2215->addChildren(*ROUTE2268);

CROUTE* ROUTE2269 = new CROUTE();
ROUTE2269->setFromField("fraction_changed");
ROUTE2269->setFromNode("StandTimer");
ROUTE2269->setToField("set_fraction");
ROUTE2269->setToNode("Stand_whole_body_TranslationInterpolator");
Group2215->addChildren(*ROUTE2269);

CROUTE* ROUTE2270 = new CROUTE();
ROUTE2270->setFromField("fraction_changed");
ROUTE2270->setFromNode("StandTimer");
ROUTE2270->setToField("set_fraction");
ROUTE2270->setToNode("Stand_l_sternoclavicular_RollInterpolator");
Group2215->addChildren(*ROUTE2270);

CROUTE* ROUTE2271 = new CROUTE();
ROUTE2271->setFromField("fraction_changed");
ROUTE2271->setFromNode("StandTimer");
ROUTE2271->setToField("set_fraction");
ROUTE2271->setToNode("Stand_l_acromioclavicular_RollInterpolator");
Group2215->addChildren(*ROUTE2271);

CROUTE* ROUTE2272 = new CROUTE();
ROUTE2272->setFromField("fraction_changed");
ROUTE2272->setFromNode("StandTimer");
ROUTE2272->setToField("set_fraction");
ROUTE2272->setToNode("Stand_r_sternoclavicular_RollInterpolator");
Group2215->addChildren(*ROUTE2272);

CROUTE* ROUTE2273 = new CROUTE();
ROUTE2273->setFromField("fraction_changed");
ROUTE2273->setFromNode("StandTimer");
ROUTE2273->setToField("set_fraction");
ROUTE2273->setToNode("Stand_r_acromioclavicular_RollInterpolator");
Group2215->addChildren(*ROUTE2273);

CROUTE* ROUTE2274 = new CROUTE();
ROUTE2274->setFromField("fraction_changed");
ROUTE2274->setFromNode("StandTimer");
ROUTE2274->setToField("set_fraction");
ROUTE2274->setToNode("Stand_r_metatarsal_PitchInterpolator");
Group2215->addChildren(*ROUTE2274);

CROUTE* ROUTE2275 = new CROUTE();
ROUTE2275->setFromField("fraction_changed");
ROUTE2275->setFromNode("StandTimer");
ROUTE2275->setToField("set_fraction");
ROUTE2275->setToNode("Stand_sacroiliac_YawInterpolator");
Group2215->addChildren(*ROUTE2275);

CROUTE* ROUTE2276 = new CROUTE();
ROUTE2276->setFromField("fraction_changed");
ROUTE2276->setFromNode("StandTimer");
ROUTE2276->setToField("set_fraction");
ROUTE2276->setToNode("Stand_vl5_YawInterpolator");
Group2215->addChildren(*ROUTE2276);

CROUTE* ROUTE2277 = new CROUTE();
ROUTE2277->setFromField("fraction_changed");
ROUTE2277->setFromNode("StandTimer");
ROUTE2277->setToField("set_fraction");
ROUTE2277->setToNode("Stand_vc6_YawInterpolator");
Group2215->addChildren(*ROUTE2277);

CROUTE* ROUTE2278 = new CROUTE();
ROUTE2278->setFromField("fraction_changed");
ROUTE2278->setFromNode("StandTimer");
ROUTE2278->setToField("set_fraction");
ROUTE2278->setToNode("Stand_l_thumb1_PitchInterpolator");
Group2215->addChildren(*ROUTE2278);

CROUTE* ROUTE2279 = new CROUTE();
ROUTE2279->setFromField("fraction_changed");
ROUTE2279->setFromNode("StandTimer");
ROUTE2279->setToField("set_fraction");
ROUTE2279->setToNode("Stand_r_thumb1_PitchInterpolator");
Group2215->addChildren(*ROUTE2279);

CROUTE* ROUTE2280 = new CROUTE();
ROUTE2280->setFromField("fraction_changed");
ROUTE2280->setFromNode("StandTimer");
ROUTE2280->setToField("set_fraction");
ROUTE2280->setToNode("Stand_r_index1_RollInterpolator");
Group2215->addChildren(*ROUTE2280);

CROUTE* ROUTE2281 = new CROUTE();
ROUTE2281->setFromField("fraction_changed");
ROUTE2281->setFromNode("StandTimer");
ROUTE2281->setToField("set_fraction");
ROUTE2281->setToNode("Stand_r_index2_RollInterpolator");
Group2215->addChildren(*ROUTE2281);

CROUTE* ROUTE2282 = new CROUTE();
ROUTE2282->setFromField("fraction_changed");
ROUTE2282->setFromNode("StandTimer");
ROUTE2282->setToField("set_fraction");
ROUTE2282->setToNode("Stand_r_index3_RollInterpolator");
Group2215->addChildren(*ROUTE2282);

CROUTE* ROUTE2283 = new CROUTE();
ROUTE2283->setFromField("value_changed");
ROUTE2283->setFromNode("Stand_r_ankle_RotationInterpolator");
ROUTE2283->setToField("rotation");
ROUTE2283->setToNode("hanim_r_ankle");
Group2215->addChildren(*ROUTE2283);

CROUTE* ROUTE2284 = new CROUTE();
ROUTE2284->setFromField("value_changed");
ROUTE2284->setFromNode("Stand_r_knee_RotationInterpolator");
ROUTE2284->setToField("rotation");
ROUTE2284->setToNode("hanim_r_knee");
Group2215->addChildren(*ROUTE2284);

CROUTE* ROUTE2285 = new CROUTE();
ROUTE2285->setFromField("value_changed");
ROUTE2285->setFromNode("Stand_r_hip_RotationInterpolator");
ROUTE2285->setToField("rotation");
ROUTE2285->setToNode("hanim_r_hip");
Group2215->addChildren(*ROUTE2285);

CROUTE* ROUTE2286 = new CROUTE();
ROUTE2286->setFromField("value_changed");
ROUTE2286->setFromNode("Stand_l_ankle_RotationInterpolator");
ROUTE2286->setToField("rotation");
ROUTE2286->setToNode("hanim_l_ankle");
Group2215->addChildren(*ROUTE2286);

CROUTE* ROUTE2287 = new CROUTE();
ROUTE2287->setFromField("value_changed");
ROUTE2287->setFromNode("Stand_l_knee_RotationInterpolator");
ROUTE2287->setToField("rotation");
ROUTE2287->setToNode("hanim_l_knee");
Group2215->addChildren(*ROUTE2287);

CROUTE* ROUTE2288 = new CROUTE();
ROUTE2288->setFromField("value_changed");
ROUTE2288->setFromNode("Stand_l_hip_RotationInterpolator");
ROUTE2288->setToField("rotation");
ROUTE2288->setToNode("hanim_l_hip");
Group2215->addChildren(*ROUTE2288);

CROUTE* ROUTE2289 = new CROUTE();
ROUTE2289->setFromField("value_changed");
ROUTE2289->setFromNode("Stand_r_wrist_RotationInterpolator");
ROUTE2289->setToField("rotation");
ROUTE2289->setToNode("hanim_r_wrist");
Group2215->addChildren(*ROUTE2289);

CROUTE* ROUTE2290 = new CROUTE();
ROUTE2290->setFromField("value_changed");
ROUTE2290->setFromNode("Stand_r_elbow_RotationInterpolator");
ROUTE2290->setToField("rotation");
ROUTE2290->setToNode("hanim_r_elbow");
Group2215->addChildren(*ROUTE2290);

CROUTE* ROUTE2291 = new CROUTE();
ROUTE2291->setFromField("value_changed");
ROUTE2291->setFromNode("Stand_r_shoulder_RotationInterpolator");
ROUTE2291->setToField("rotation");
ROUTE2291->setToNode("hanim_r_shoulder");
Group2215->addChildren(*ROUTE2291);

CROUTE* ROUTE2292 = new CROUTE();
ROUTE2292->setFromField("value_changed");
ROUTE2292->setFromNode("Stand_l_wrist_RotationInterpolator");
ROUTE2292->setToField("rotation");
ROUTE2292->setToNode("hanim_l_wrist");
Group2215->addChildren(*ROUTE2292);

CROUTE* ROUTE2293 = new CROUTE();
ROUTE2293->setFromField("value_changed");
ROUTE2293->setFromNode("Stand_l_elbow_RotationInterpolator");
ROUTE2293->setToField("rotation");
ROUTE2293->setToNode("hanim_l_elbow");
Group2215->addChildren(*ROUTE2293);

CROUTE* ROUTE2294 = new CROUTE();
ROUTE2294->setFromField("value_changed");
ROUTE2294->setFromNode("Stand_l_shoulder_RotationInterpolator");
ROUTE2294->setToField("rotation");
ROUTE2294->setToNode("hanim_l_shoulder");
Group2215->addChildren(*ROUTE2294);

CROUTE* ROUTE2295 = new CROUTE();
ROUTE2295->setFromField("value_changed");
ROUTE2295->setFromNode("Stand_head_RotationInterpolator");
ROUTE2295->setToField("rotation");
ROUTE2295->setToNode("hanim_skullbase");
Group2215->addChildren(*ROUTE2295);

CROUTE* ROUTE2296 = new CROUTE();
ROUTE2296->setFromField("value_changed");
ROUTE2296->setFromNode("Stand_neck_RotationInterpolator");
ROUTE2296->setToField("rotation");
ROUTE2296->setToNode("hanim_vc7");
Group2215->addChildren(*ROUTE2296);

CROUTE* ROUTE2297 = new CROUTE();
ROUTE2297->setFromField("value_changed");
ROUTE2297->setFromNode("Stand_l_eyeball_RotationInterpolator");
ROUTE2297->setToField("rotation");
ROUTE2297->setToNode("hanim_l_eyeball_joint");
Group2215->addChildren(*ROUTE2297);

CROUTE* ROUTE2298 = new CROUTE();
ROUTE2298->setFromField("value_changed");
ROUTE2298->setFromNode("Stand_r_eyeball_RotationInterpolator");
ROUTE2298->setToField("rotation");
ROUTE2298->setToNode("hanim_r_eyeball_joint");
Group2215->addChildren(*ROUTE2298);

CROUTE* ROUTE2299 = new CROUTE();
ROUTE2299->setFromField("value_changed");
ROUTE2299->setFromNode("Stand_upper_body_RotationInterpolator");
ROUTE2299->setToField("rotation");
ROUTE2299->setToNode("hanim_vl1");
Group2215->addChildren(*ROUTE2299);

CROUTE* ROUTE2300 = new CROUTE();
ROUTE2300->setFromField("value_changed");
ROUTE2300->setFromNode("Stand_lower_body_RotationInterpolator");
ROUTE2300->setToField("rotation");
ROUTE2300->setToNode("hanim_sacroiliac");
Group2215->addChildren(*ROUTE2300);

CROUTE* ROUTE2301 = new CROUTE();
ROUTE2301->setFromField("value_changed");
ROUTE2301->setFromNode("Stand_whole_body_RotationInterpolator");
ROUTE2301->setToField("rotation");
ROUTE2301->setToNode("hanim_humanoid_root");
Group2215->addChildren(*ROUTE2301);

CROUTE* ROUTE2302 = new CROUTE();
ROUTE2302->setFromField("value_changed");
ROUTE2302->setFromNode("Stand_whole_body_TranslationInterpolator");
ROUTE2302->setToField("translation");
ROUTE2302->setToNode("hanim_humanoid_root");
Group2215->addChildren(*ROUTE2302);

CROUTE* ROUTE2303 = new CROUTE();
ROUTE2303->setFromField("value_changed");
ROUTE2303->setFromNode("Stand_l_sternoclavicular_RollInterpolator");
ROUTE2303->setToField("rotation");
ROUTE2303->setToNode("hanim_l_sternoclavicular");
Group2215->addChildren(*ROUTE2303);

CROUTE* ROUTE2304 = new CROUTE();
ROUTE2304->setFromField("value_changed");
ROUTE2304->setFromNode("Stand_l_acromioclavicular_RollInterpolator");
ROUTE2304->setToField("rotation");
ROUTE2304->setToNode("hanim_l_acromioclavicular");
Group2215->addChildren(*ROUTE2304);

CROUTE* ROUTE2305 = new CROUTE();
ROUTE2305->setFromField("value_changed");
ROUTE2305->setFromNode("Stand_r_sternoclavicular_RollInterpolator");
ROUTE2305->setToField("rotation");
ROUTE2305->setToNode("hanim_r_sternoclavicular");
Group2215->addChildren(*ROUTE2305);

CROUTE* ROUTE2306 = new CROUTE();
ROUTE2306->setFromField("value_changed");
ROUTE2306->setFromNode("Stand_r_acromioclavicular_RollInterpolator");
ROUTE2306->setToField("rotation");
ROUTE2306->setToNode("hanim_r_acromioclavicular");
Group2215->addChildren(*ROUTE2306);

CROUTE* ROUTE2307 = new CROUTE();
ROUTE2307->setFromField("value_changed");
ROUTE2307->setFromNode("Stand_r_metatarsal_PitchInterpolator");
ROUTE2307->setToField("rotation");
ROUTE2307->setToNode("hanim_l_metatarsal");
Group2215->addChildren(*ROUTE2307);

CROUTE* ROUTE2308 = new CROUTE();
ROUTE2308->setFromField("value_changed");
ROUTE2308->setFromNode("Stand_r_metatarsal_PitchInterpolator");
ROUTE2308->setToField("rotation");
ROUTE2308->setToNode("hanim_r_metatarsal");
Group2215->addChildren(*ROUTE2308);

CROUTE* ROUTE2309 = new CROUTE();
ROUTE2309->setFromField("value_changed");
ROUTE2309->setFromNode("Stand_sacroiliac_YawInterpolator");
ROUTE2309->setToField("rotation");
ROUTE2309->setToNode("hanim_sacroiliac");
Group2215->addChildren(*ROUTE2309);

CROUTE* ROUTE2310 = new CROUTE();
ROUTE2310->setFromField("value_changed");
ROUTE2310->setFromNode("Stand_vl5_YawInterpolator");
ROUTE2310->setToField("rotation");
ROUTE2310->setToNode("hanim_vl5");
Group2215->addChildren(*ROUTE2310);

CROUTE* ROUTE2311 = new CROUTE();
ROUTE2311->setFromField("value_changed");
ROUTE2311->setFromNode("Stand_vc6_YawInterpolator");
ROUTE2311->setToField("rotation");
ROUTE2311->setToNode("hanim_vc6");
Group2215->addChildren(*ROUTE2311);

CROUTE* ROUTE2312 = new CROUTE();
ROUTE2312->setFromField("value_changed");
ROUTE2312->setFromNode("Stand_l_thumb1_PitchInterpolator");
ROUTE2312->setToField("rotation");
ROUTE2312->setToNode("hanim_l_thumb1");
Group2215->addChildren(*ROUTE2312);

CROUTE* ROUTE2313 = new CROUTE();
ROUTE2313->setFromField("value_changed");
ROUTE2313->setFromNode("Stand_r_thumb1_PitchInterpolator");
ROUTE2313->setToField("rotation");
ROUTE2313->setToNode("hanim_r_thumb1");
Group2215->addChildren(*ROUTE2313);

CROUTE* ROUTE2314 = new CROUTE();
ROUTE2314->setFromField("value_changed");
ROUTE2314->setFromNode("Stand_r_index1_RollInterpolator");
ROUTE2314->setToField("rotation");
ROUTE2314->setToNode("hanim_r_index1");
Group2215->addChildren(*ROUTE2314);

CROUTE* ROUTE2315 = new CROUTE();
ROUTE2315->setFromField("value_changed");
ROUTE2315->setFromNode("Stand_r_index2_RollInterpolator");
ROUTE2315->setToField("rotation");
ROUTE2315->setToNode("hanim_r_index2");
Group2215->addChildren(*ROUTE2315);

CROUTE* ROUTE2316 = new CROUTE();
ROUTE2316->setFromField("value_changed");
ROUTE2316->setFromNode("Stand_r_index3_RollInterpolator");
ROUTE2316->setToField("rotation");
ROUTE2316->setToNode("hanim_r_index3");
Group2215->addChildren(*ROUTE2316);

CROUTE* ROUTE2317 = new CROUTE();
ROUTE2317->setFromField("value_changed");
ROUTE2317->setFromNode("Stand_r_index1_RollInterpolator");
ROUTE2317->setToField("rotation");
ROUTE2317->setToNode("hanim_r_middle1");
Group2215->addChildren(*ROUTE2317);

CROUTE* ROUTE2318 = new CROUTE();
ROUTE2318->setFromField("value_changed");
ROUTE2318->setFromNode("Stand_r_index2_RollInterpolator");
ROUTE2318->setToField("rotation");
ROUTE2318->setToNode("hanim_r_middle2");
Group2215->addChildren(*ROUTE2318);

CROUTE* ROUTE2319 = new CROUTE();
ROUTE2319->setFromField("value_changed");
ROUTE2319->setFromNode("Stand_r_index3_RollInterpolator");
ROUTE2319->setToField("rotation");
ROUTE2319->setToNode("hanim_r_middle3");
Group2215->addChildren(*ROUTE2319);

CROUTE* ROUTE2320 = new CROUTE();
ROUTE2320->setFromField("value_changed");
ROUTE2320->setFromNode("Stand_r_index1_RollInterpolator");
ROUTE2320->setToField("rotation");
ROUTE2320->setToNode("hanim_r_ring1");
Group2215->addChildren(*ROUTE2320);

CROUTE* ROUTE2321 = new CROUTE();
ROUTE2321->setFromField("value_changed");
ROUTE2321->setFromNode("Stand_r_index2_RollInterpolator");
ROUTE2321->setToField("rotation");
ROUTE2321->setToNode("hanim_r_ring2");
Group2215->addChildren(*ROUTE2321);

CROUTE* ROUTE2322 = new CROUTE();
ROUTE2322->setFromField("value_changed");
ROUTE2322->setFromNode("Stand_r_index3_RollInterpolator");
ROUTE2322->setToField("rotation");
ROUTE2322->setToNode("hanim_r_ring3");
Group2215->addChildren(*ROUTE2322);

CROUTE* ROUTE2323 = new CROUTE();
ROUTE2323->setFromField("value_changed");
ROUTE2323->setFromNode("Stand_r_index1_RollInterpolator");
ROUTE2323->setToField("rotation");
ROUTE2323->setToNode("hanim_r_pinky1");
Group2215->addChildren(*ROUTE2323);

CROUTE* ROUTE2324 = new CROUTE();
ROUTE2324->setFromField("value_changed");
ROUTE2324->setFromNode("Stand_r_index2_RollInterpolator");
ROUTE2324->setToField("rotation");
ROUTE2324->setToNode("hanim_r_pinky2");
Group2215->addChildren(*ROUTE2324);

CROUTE* ROUTE2325 = new CROUTE();
ROUTE2325->setFromField("value_changed");
ROUTE2325->setFromNode("Stand_r_index3_RollInterpolator");
ROUTE2325->setToField("rotation");
ROUTE2325->setToNode("hanim_r_pinky3");
Group2215->addChildren(*ROUTE2325);

group->addChildren(*Group2215);

CGroup* Group2326 = (CGroup *)(m_pScene.createNode("Group"));
Group2326->setDEF("PitchesAnimation");
CTimeSensor* TimeSensor2327 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor2327->setDEF("PitchTimer");
TimeSensor2327->setCycleInterval(5.73);
TimeSensor2327->setLoop(True);
Group2326->addChildren(*TimeSensor2327);

COrientationInterpolator* OrientationInterpolator2328 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2328->setDEF("Pitch_r_metatarsal_PitchInterpolator");
OrientationInterpolator2328->setKey(new float[6]{0,0.2,0.4,0.6,0.7,1});
OrientationInterpolator2328->setKeyValue(new float[24]{1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0});
Group2326->addChildren(*OrientationInterpolator2328);

COrientationInterpolator* OrientationInterpolator2329 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2329->setDEF("Pitches_r_ankle_RotationInterpolator");
OrientationInterpolator2329->setKey(new float[5]{0,0.25,0.5,0.75,1});
OrientationInterpolator2329->setKeyValue(new float[20]{0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0});
Group2326->addChildren(*OrientationInterpolator2329);

COrientationInterpolator* OrientationInterpolator2330 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2330->setDEF("Pitches_r_knee_RotationInterpolator");
OrientationInterpolator2330->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2330->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2326->addChildren(*OrientationInterpolator2330);

COrientationInterpolator* OrientationInterpolator2331 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2331->setDEF("Pitches_r_hip_RotationInterpolator");
OrientationInterpolator2331->setKey(new float[5]{0,0.25,0.5,0.75,1});
OrientationInterpolator2331->setKeyValue(new float[20]{0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0});
Group2326->addChildren(*OrientationInterpolator2331);

COrientationInterpolator* OrientationInterpolator2332 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2332->setDEF("Pitches_l_ankle_RotationInterpolator");
OrientationInterpolator2332->setKey(new float[5]{0,0.25,0.5,0.75,1});
OrientationInterpolator2332->setKeyValue(new float[20]{0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0});
Group2326->addChildren(*OrientationInterpolator2332);

COrientationInterpolator* OrientationInterpolator2333 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2333->setDEF("Pitches_l_knee_RotationInterpolator");
OrientationInterpolator2333->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2333->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2326->addChildren(*OrientationInterpolator2333);

COrientationInterpolator* OrientationInterpolator2334 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2334->setDEF("Pitches_l_hip_RotationInterpolator");
OrientationInterpolator2334->setKey(new float[5]{0,0.25,0.5,0.75,1});
OrientationInterpolator2334->setKeyValue(new float[20]{0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0});
Group2326->addChildren(*OrientationInterpolator2334);

COrientationInterpolator* OrientationInterpolator2335 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2335->setDEF("Pitches_r_wrist_RotationInterpolator");
OrientationInterpolator2335->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2335->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2326->addChildren(*OrientationInterpolator2335);

COrientationInterpolator* OrientationInterpolator2336 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2336->setDEF("Pitches_r_elbow_RotationInterpolator");
OrientationInterpolator2336->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2336->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2326->addChildren(*OrientationInterpolator2336);

COrientationInterpolator* OrientationInterpolator2337 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2337->setDEF("Pitches_r_shoulder_RotationInterpolator");
OrientationInterpolator2337->setKey(new float[5]{0,0.25,0.5,0.75,1});
OrientationInterpolator2337->setKeyValue(new float[20]{0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0});
Group2326->addChildren(*OrientationInterpolator2337);

COrientationInterpolator* OrientationInterpolator2338 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2338->setDEF("Pitches_l_wrist_RotationInterpolator");
OrientationInterpolator2338->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2338->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2326->addChildren(*OrientationInterpolator2338);

COrientationInterpolator* OrientationInterpolator2339 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2339->setDEF("Pitches_l_elbow_RotationInterpolator");
OrientationInterpolator2339->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2339->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2326->addChildren(*OrientationInterpolator2339);

COrientationInterpolator* OrientationInterpolator2340 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2340->setDEF("Pitches_l_shoulder_RotationInterpolator");
OrientationInterpolator2340->setKey(new float[5]{0,0.25,0.5,0.75,1});
OrientationInterpolator2340->setKeyValue(new float[20]{0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0});
Group2326->addChildren(*OrientationInterpolator2340);

COrientationInterpolator* OrientationInterpolator2341 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2341->setDEF("Pitches_head_RotationInterpolator");
OrientationInterpolator2341->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2341->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2326->addChildren(*OrientationInterpolator2341);

COrientationInterpolator* OrientationInterpolator2342 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2342->setDEF("Pitches_neck_RotationInterpolator");
OrientationInterpolator2342->setKey(new float[4]{0,0.25,0.55,1});
OrientationInterpolator2342->setKeyValue(new float[16]{0,0,1,0,1,0,0,0.55,-1,0,0,1.05,0,0,1,0});
Group2326->addChildren(*OrientationInterpolator2342);

COrientationInterpolator* OrientationInterpolator2343 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2343->setDEF("Pitches_lower_body_RotationInterpolator");
OrientationInterpolator2343->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2343->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2326->addChildren(*OrientationInterpolator2343);

COrientationInterpolator* OrientationInterpolator2344 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2344->setDEF("Pitches_upper_body_RotationInterpolator");
OrientationInterpolator2344->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2344->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2326->addChildren(*OrientationInterpolator2344);

COrientationInterpolator* OrientationInterpolator2345 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2345->setDEF("Pitches_whole_body_RotationInterpolator");
OrientationInterpolator2345->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2345->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2326->addChildren(*OrientationInterpolator2345);

CPositionInterpolator* PositionInterpolator2346 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator2346->setDEF("Pitches_whole_body_TranslationInterpolator");
PositionInterpolator2346->setKey(new float[9]{0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1});
PositionInterpolator2346->setKeyValue(new float[27]{0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0});
Group2326->addChildren(*PositionInterpolator2346);

COrientationInterpolator* OrientationInterpolator2347 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2347->setDEF("Pitch_l_sternoclavicular_RollInterpolator");
OrientationInterpolator2347->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2347->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2326->addChildren(*OrientationInterpolator2347);

COrientationInterpolator* OrientationInterpolator2348 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2348->setDEF("Pitch_l_acromioclavicular_RollInterpolator");
OrientationInterpolator2348->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2348->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2326->addChildren(*OrientationInterpolator2348);

COrientationInterpolator* OrientationInterpolator2349 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2349->setDEF("Pitch_r_sternoclavicular_RollInterpolator");
OrientationInterpolator2349->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2349->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2326->addChildren(*OrientationInterpolator2349);

COrientationInterpolator* OrientationInterpolator2350 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2350->setDEF("Pitch_r_acromioclavicular_RollInterpolator");
OrientationInterpolator2350->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2350->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2326->addChildren(*OrientationInterpolator2350);

COrientationInterpolator* OrientationInterpolator2351 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2351->setDEF("Pitch_sacroiliac_YawInterpolator");
OrientationInterpolator2351->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2351->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2326->addChildren(*OrientationInterpolator2351);

COrientationInterpolator* OrientationInterpolator2352 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2352->setDEF("Pitch_vl5_YawInterpolator");
OrientationInterpolator2352->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1});
OrientationInterpolator2352->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2326->addChildren(*OrientationInterpolator2352);

COrientationInterpolator* OrientationInterpolator2353 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2353->setDEF("Pitch_vc6_YawInterpolator");
OrientationInterpolator2353->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1});
OrientationInterpolator2353->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2326->addChildren(*OrientationInterpolator2353);

COrientationInterpolator* OrientationInterpolator2354 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2354->setDEF("Pitch_l_thumb1_PitchInterpolator");
OrientationInterpolator2354->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2354->setKeyValue(new float[24]{1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0});
Group2326->addChildren(*OrientationInterpolator2354);

COrientationInterpolator* OrientationInterpolator2355 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2355->setDEF("Pitch_r_thumb1_PitchInterpolator");
OrientationInterpolator2355->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2355->setKeyValue(new float[24]{1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0});
Group2326->addChildren(*OrientationInterpolator2355);

CROUTE* ROUTE2356 = new CROUTE();
ROUTE2356->setFromField("fraction_changed");
ROUTE2356->setFromNode("PitchTimer");
ROUTE2356->setToField("set_fraction");
ROUTE2356->setToNode("Pitches_r_ankle_RotationInterpolator");
Group2326->addChildren(*ROUTE2356);

CROUTE* ROUTE2357 = new CROUTE();
ROUTE2357->setFromField("fraction_changed");
ROUTE2357->setFromNode("PitchTimer");
ROUTE2357->setToField("set_fraction");
ROUTE2357->setToNode("Pitches_r_knee_RotationInterpolator");
Group2326->addChildren(*ROUTE2357);

CROUTE* ROUTE2358 = new CROUTE();
ROUTE2358->setFromField("fraction_changed");
ROUTE2358->setFromNode("PitchTimer");
ROUTE2358->setToField("set_fraction");
ROUTE2358->setToNode("Pitches_r_hip_RotationInterpolator");
Group2326->addChildren(*ROUTE2358);

CROUTE* ROUTE2359 = new CROUTE();
ROUTE2359->setFromField("fraction_changed");
ROUTE2359->setFromNode("PitchTimer");
ROUTE2359->setToField("set_fraction");
ROUTE2359->setToNode("Pitches_l_ankle_RotationInterpolator");
Group2326->addChildren(*ROUTE2359);

CROUTE* ROUTE2360 = new CROUTE();
ROUTE2360->setFromField("fraction_changed");
ROUTE2360->setFromNode("PitchTimer");
ROUTE2360->setToField("set_fraction");
ROUTE2360->setToNode("Pitches_l_knee_RotationInterpolator");
Group2326->addChildren(*ROUTE2360);

CROUTE* ROUTE2361 = new CROUTE();
ROUTE2361->setFromField("fraction_changed");
ROUTE2361->setFromNode("PitchTimer");
ROUTE2361->setToField("set_fraction");
ROUTE2361->setToNode("Pitches_l_hip_RotationInterpolator");
Group2326->addChildren(*ROUTE2361);

CROUTE* ROUTE2362 = new CROUTE();
ROUTE2362->setFromField("fraction_changed");
ROUTE2362->setFromNode("PitchTimer");
ROUTE2362->setToField("set_fraction");
ROUTE2362->setToNode("Pitches_lower_body_RotationInterpolator");
Group2326->addChildren(*ROUTE2362);

CROUTE* ROUTE2363 = new CROUTE();
ROUTE2363->setFromField("fraction_changed");
ROUTE2363->setFromNode("PitchTimer");
ROUTE2363->setToField("set_fraction");
ROUTE2363->setToNode("Pitches_r_wrist_RotationInterpolator");
Group2326->addChildren(*ROUTE2363);

CROUTE* ROUTE2364 = new CROUTE();
ROUTE2364->setFromField("fraction_changed");
ROUTE2364->setFromNode("PitchTimer");
ROUTE2364->setToField("set_fraction");
ROUTE2364->setToNode("Pitches_r_elbow_RotationInterpolator");
Group2326->addChildren(*ROUTE2364);

CROUTE* ROUTE2365 = new CROUTE();
ROUTE2365->setFromField("fraction_changed");
ROUTE2365->setFromNode("PitchTimer");
ROUTE2365->setToField("set_fraction");
ROUTE2365->setToNode("Pitches_r_shoulder_RotationInterpolator");
Group2326->addChildren(*ROUTE2365);

CROUTE* ROUTE2366 = new CROUTE();
ROUTE2366->setFromField("fraction_changed");
ROUTE2366->setFromNode("PitchTimer");
ROUTE2366->setToField("set_fraction");
ROUTE2366->setToNode("Pitches_l_wrist_RotationInterpolator");
Group2326->addChildren(*ROUTE2366);

CROUTE* ROUTE2367 = new CROUTE();
ROUTE2367->setFromField("fraction_changed");
ROUTE2367->setFromNode("PitchTimer");
ROUTE2367->setToField("set_fraction");
ROUTE2367->setToNode("Pitches_l_elbow_RotationInterpolator");
Group2326->addChildren(*ROUTE2367);

CROUTE* ROUTE2368 = new CROUTE();
ROUTE2368->setFromField("fraction_changed");
ROUTE2368->setFromNode("PitchTimer");
ROUTE2368->setToField("set_fraction");
ROUTE2368->setToNode("Pitches_l_shoulder_RotationInterpolator");
Group2326->addChildren(*ROUTE2368);

CROUTE* ROUTE2369 = new CROUTE();
ROUTE2369->setFromField("fraction_changed");
ROUTE2369->setFromNode("PitchTimer");
ROUTE2369->setToField("set_fraction");
ROUTE2369->setToNode("Pitches_head_RotationInterpolator");
Group2326->addChildren(*ROUTE2369);

CROUTE* ROUTE2370 = new CROUTE();
ROUTE2370->setFromField("fraction_changed");
ROUTE2370->setFromNode("PitchTimer");
ROUTE2370->setToField("set_fraction");
ROUTE2370->setToNode("Pitches_neck_RotationInterpolator");
Group2326->addChildren(*ROUTE2370);

CROUTE* ROUTE2371 = new CROUTE();
ROUTE2371->setFromField("fraction_changed");
ROUTE2371->setFromNode("PitchTimer");
ROUTE2371->setToField("set_fraction");
ROUTE2371->setToNode("Pitches_upper_body_RotationInterpolator");
Group2326->addChildren(*ROUTE2371);

CROUTE* ROUTE2372 = new CROUTE();
ROUTE2372->setFromField("fraction_changed");
ROUTE2372->setFromNode("PitchTimer");
ROUTE2372->setToField("set_fraction");
ROUTE2372->setToNode("Pitches_whole_body_RotationInterpolator");
Group2326->addChildren(*ROUTE2372);

CROUTE* ROUTE2373 = new CROUTE();
ROUTE2373->setFromField("fraction_changed");
ROUTE2373->setFromNode("PitchTimer");
ROUTE2373->setToField("set_fraction");
ROUTE2373->setToNode("Pitches_whole_body_TranslationInterpolator");
Group2326->addChildren(*ROUTE2373);

CROUTE* ROUTE2374 = new CROUTE();
ROUTE2374->setFromField("fraction_changed");
ROUTE2374->setFromNode("PitchTimer");
ROUTE2374->setToField("set_fraction");
ROUTE2374->setToNode("Pitch_l_sternoclavicular_RollInterpolator");
Group2326->addChildren(*ROUTE2374);

CROUTE* ROUTE2375 = new CROUTE();
ROUTE2375->setFromField("fraction_changed");
ROUTE2375->setFromNode("PitchTimer");
ROUTE2375->setToField("set_fraction");
ROUTE2375->setToNode("Pitch_l_acromioclavicular_RollInterpolator");
Group2326->addChildren(*ROUTE2375);

CROUTE* ROUTE2376 = new CROUTE();
ROUTE2376->setFromField("fraction_changed");
ROUTE2376->setFromNode("PitchTimer");
ROUTE2376->setToField("set_fraction");
ROUTE2376->setToNode("Pitch_r_sternoclavicular_RollInterpolator");
Group2326->addChildren(*ROUTE2376);

CROUTE* ROUTE2377 = new CROUTE();
ROUTE2377->setFromField("fraction_changed");
ROUTE2377->setFromNode("PitchTimer");
ROUTE2377->setToField("set_fraction");
ROUTE2377->setToNode("Pitch_r_acromioclavicular_RollInterpolator");
Group2326->addChildren(*ROUTE2377);

CROUTE* ROUTE2378 = new CROUTE();
ROUTE2378->setFromField("fraction_changed");
ROUTE2378->setFromNode("PitchTimer");
ROUTE2378->setToField("set_fraction");
ROUTE2378->setToNode("Pitch_r_metatarsal_PitchInterpolator");
Group2326->addChildren(*ROUTE2378);

CROUTE* ROUTE2379 = new CROUTE();
ROUTE2379->setFromField("fraction_changed");
ROUTE2379->setFromNode("PitchTimer");
ROUTE2379->setToField("set_fraction");
ROUTE2379->setToNode("Pitch_sacroiliac_YawInterpolator");
Group2326->addChildren(*ROUTE2379);

CROUTE* ROUTE2380 = new CROUTE();
ROUTE2380->setFromField("fraction_changed");
ROUTE2380->setFromNode("PitchTimer");
ROUTE2380->setToField("set_fraction");
ROUTE2380->setToNode("Pitch_vl5_YawInterpolator");
Group2326->addChildren(*ROUTE2380);

CROUTE* ROUTE2381 = new CROUTE();
ROUTE2381->setFromField("fraction_changed");
ROUTE2381->setFromNode("PitchTimer");
ROUTE2381->setToField("set_fraction");
ROUTE2381->setToNode("Pitch_vc6_YawInterpolator");
Group2326->addChildren(*ROUTE2381);

CROUTE* ROUTE2382 = new CROUTE();
ROUTE2382->setFromField("fraction_changed");
ROUTE2382->setFromNode("PitchTimer");
ROUTE2382->setToField("set_fraction");
ROUTE2382->setToNode("Pitch_l_thumb1_PitchInterpolator");
Group2326->addChildren(*ROUTE2382);

CROUTE* ROUTE2383 = new CROUTE();
ROUTE2383->setFromField("fraction_changed");
ROUTE2383->setFromNode("PitchTimer");
ROUTE2383->setToField("set_fraction");
ROUTE2383->setToNode("Pitch_r_thumb1_PitchInterpolator");
Group2326->addChildren(*ROUTE2383);

CROUTE* ROUTE2384 = new CROUTE();
ROUTE2384->setFromField("value_changed");
ROUTE2384->setFromNode("Pitches_r_ankle_RotationInterpolator");
ROUTE2384->setToField("rotation");
ROUTE2384->setToNode("hanim_r_ankle");
Group2326->addChildren(*ROUTE2384);

CROUTE* ROUTE2385 = new CROUTE();
ROUTE2385->setFromField("value_changed");
ROUTE2385->setFromNode("Pitches_r_knee_RotationInterpolator");
ROUTE2385->setToField("rotation");
ROUTE2385->setToNode("hanim_r_knee");
Group2326->addChildren(*ROUTE2385);

CROUTE* ROUTE2386 = new CROUTE();
ROUTE2386->setFromField("value_changed");
ROUTE2386->setFromNode("Pitches_r_hip_RotationInterpolator");
ROUTE2386->setToField("rotation");
ROUTE2386->setToNode("hanim_r_hip");
Group2326->addChildren(*ROUTE2386);

CROUTE* ROUTE2387 = new CROUTE();
ROUTE2387->setFromField("value_changed");
ROUTE2387->setFromNode("Pitches_l_ankle_RotationInterpolator");
ROUTE2387->setToField("rotation");
ROUTE2387->setToNode("hanim_l_ankle");
Group2326->addChildren(*ROUTE2387);

CROUTE* ROUTE2388 = new CROUTE();
ROUTE2388->setFromField("value_changed");
ROUTE2388->setFromNode("Pitches_l_knee_RotationInterpolator");
ROUTE2388->setToField("rotation");
ROUTE2388->setToNode("hanim_l_knee");
Group2326->addChildren(*ROUTE2388);

CROUTE* ROUTE2389 = new CROUTE();
ROUTE2389->setFromField("value_changed");
ROUTE2389->setFromNode("Pitches_l_hip_RotationInterpolator");
ROUTE2389->setToField("rotation");
ROUTE2389->setToNode("hanim_l_hip");
Group2326->addChildren(*ROUTE2389);

CROUTE* ROUTE2390 = new CROUTE();
ROUTE2390->setFromField("value_changed");
ROUTE2390->setFromNode("Pitches_lower_body_RotationInterpolator");
ROUTE2390->setToField("rotation");
ROUTE2390->setToNode("hanim_sacroiliac");
Group2326->addChildren(*ROUTE2390);

CROUTE* ROUTE2391 = new CROUTE();
ROUTE2391->setFromField("value_changed");
ROUTE2391->setFromNode("Pitches_r_wrist_RotationInterpolator");
ROUTE2391->setToField("rotation");
ROUTE2391->setToNode("hanim_r_wrist");
Group2326->addChildren(*ROUTE2391);

CROUTE* ROUTE2392 = new CROUTE();
ROUTE2392->setFromField("value_changed");
ROUTE2392->setFromNode("Pitches_r_elbow_RotationInterpolator");
ROUTE2392->setToField("rotation");
ROUTE2392->setToNode("hanim_r_elbow");
Group2326->addChildren(*ROUTE2392);

CROUTE* ROUTE2393 = new CROUTE();
ROUTE2393->setFromField("value_changed");
ROUTE2393->setFromNode("Pitches_r_shoulder_RotationInterpolator");
ROUTE2393->setToField("rotation");
ROUTE2393->setToNode("hanim_r_shoulder");
Group2326->addChildren(*ROUTE2393);

CROUTE* ROUTE2394 = new CROUTE();
ROUTE2394->setFromField("value_changed");
ROUTE2394->setFromNode("Pitches_l_wrist_RotationInterpolator");
ROUTE2394->setToField("rotation");
ROUTE2394->setToNode("hanim_l_wrist");
Group2326->addChildren(*ROUTE2394);

CROUTE* ROUTE2395 = new CROUTE();
ROUTE2395->setFromField("value_changed");
ROUTE2395->setFromNode("Pitches_l_elbow_RotationInterpolator");
ROUTE2395->setToField("rotation");
ROUTE2395->setToNode("hanim_l_elbow");
Group2326->addChildren(*ROUTE2395);

CROUTE* ROUTE2396 = new CROUTE();
ROUTE2396->setFromField("value_changed");
ROUTE2396->setFromNode("Pitches_l_shoulder_RotationInterpolator");
ROUTE2396->setToField("rotation");
ROUTE2396->setToNode("hanim_l_shoulder");
Group2326->addChildren(*ROUTE2396);

CROUTE* ROUTE2397 = new CROUTE();
ROUTE2397->setFromField("value_changed");
ROUTE2397->setFromNode("Pitches_head_RotationInterpolator");
ROUTE2397->setToField("rotation");
ROUTE2397->setToNode("hanim_skullbase");
Group2326->addChildren(*ROUTE2397);

CROUTE* ROUTE2398 = new CROUTE();
ROUTE2398->setFromField("value_changed");
ROUTE2398->setFromNode("Pitches_neck_RotationInterpolator");
ROUTE2398->setToField("rotation");
ROUTE2398->setToNode("hanim_vc4");
Group2326->addChildren(*ROUTE2398);

CROUTE* ROUTE2399 = new CROUTE();
ROUTE2399->setFromField("value_changed");
ROUTE2399->setFromNode("Pitches_upper_body_RotationInterpolator");
ROUTE2399->setToField("rotation");
ROUTE2399->setToNode("hanim_vl1");
Group2326->addChildren(*ROUTE2399);

CROUTE* ROUTE2400 = new CROUTE();
ROUTE2400->setFromField("value_changed");
ROUTE2400->setFromNode("Pitches_whole_body_RotationInterpolator");
ROUTE2400->setToField("rotation");
ROUTE2400->setToNode("hanim_humanoid_root");
Group2326->addChildren(*ROUTE2400);

CROUTE* ROUTE2401 = new CROUTE();
ROUTE2401->setFromField("value_changed");
ROUTE2401->setFromNode("Pitches_whole_body_TranslationInterpolator");
ROUTE2401->setToField("translation");
ROUTE2401->setToNode("hanim_humanoid_root");
Group2326->addChildren(*ROUTE2401);

CROUTE* ROUTE2402 = new CROUTE();
ROUTE2402->setFromField("value_changed");
ROUTE2402->setFromNode("Pitch_l_sternoclavicular_RollInterpolator");
ROUTE2402->setToField("rotation");
ROUTE2402->setToNode("hanim_l_sternoclavicular");
Group2326->addChildren(*ROUTE2402);

CROUTE* ROUTE2403 = new CROUTE();
ROUTE2403->setFromField("value_changed");
ROUTE2403->setFromNode("Pitch_l_acromioclavicular_RollInterpolator");
ROUTE2403->setToField("rotation");
ROUTE2403->setToNode("hanim_l_acromioclavicular");
Group2326->addChildren(*ROUTE2403);

CROUTE* ROUTE2404 = new CROUTE();
ROUTE2404->setFromField("value_changed");
ROUTE2404->setFromNode("Pitch_r_sternoclavicular_RollInterpolator");
ROUTE2404->setToField("rotation");
ROUTE2404->setToNode("hanim_r_sternoclavicular");
Group2326->addChildren(*ROUTE2404);

CROUTE* ROUTE2405 = new CROUTE();
ROUTE2405->setFromField("value_changed");
ROUTE2405->setFromNode("Pitch_r_acromioclavicular_RollInterpolator");
ROUTE2405->setToField("rotation");
ROUTE2405->setToNode("hanim_r_acromioclavicular");
Group2326->addChildren(*ROUTE2405);

CROUTE* ROUTE2406 = new CROUTE();
ROUTE2406->setFromField("value_changed");
ROUTE2406->setFromNode("Pitch_r_metatarsal_PitchInterpolator");
ROUTE2406->setToField("rotation");
ROUTE2406->setToNode("hanim_l_metatarsal");
Group2326->addChildren(*ROUTE2406);

CROUTE* ROUTE2407 = new CROUTE();
ROUTE2407->setFromField("value_changed");
ROUTE2407->setFromNode("Pitch_r_metatarsal_PitchInterpolator");
ROUTE2407->setToField("rotation");
ROUTE2407->setToNode("hanim_r_metatarsal");
Group2326->addChildren(*ROUTE2407);

CROUTE* ROUTE2408 = new CROUTE();
ROUTE2408->setFromField("value_changed");
ROUTE2408->setFromNode("Pitch_sacroiliac_YawInterpolator");
ROUTE2408->setToField("rotation");
ROUTE2408->setToNode("hanim_sacroiliac");
Group2326->addChildren(*ROUTE2408);

CROUTE* ROUTE2409 = new CROUTE();
ROUTE2409->setFromField("value_changed");
ROUTE2409->setFromNode("Pitch_vl5_YawInterpolator");
ROUTE2409->setToField("rotation");
ROUTE2409->setToNode("hanim_vl5");
Group2326->addChildren(*ROUTE2409);

CROUTE* ROUTE2410 = new CROUTE();
ROUTE2410->setFromField("value_changed");
ROUTE2410->setFromNode("Pitch_vc6_YawInterpolator");
ROUTE2410->setToField("rotation");
ROUTE2410->setToNode("hanim_vc6");
Group2326->addChildren(*ROUTE2410);

CROUTE* ROUTE2411 = new CROUTE();
ROUTE2411->setFromField("value_changed");
ROUTE2411->setFromNode("Pitch_l_thumb1_PitchInterpolator");
ROUTE2411->setToField("rotation");
ROUTE2411->setToNode("hanim_l_thumb1");
Group2326->addChildren(*ROUTE2411);

CROUTE* ROUTE2412 = new CROUTE();
ROUTE2412->setFromField("value_changed");
ROUTE2412->setFromNode("Pitch_r_thumb1_PitchInterpolator");
ROUTE2412->setToField("rotation");
ROUTE2412->setToNode("hanim_r_thumb1");
Group2326->addChildren(*ROUTE2412);

group->addChildren(*Group2326);

CGroup* Group2413 = (CGroup *)(m_pScene.createNode("Group"));
Group2413->setDEF("YawsAnimation");
CTimeSensor* TimeSensor2414 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor2414->setDEF("YawTimer");
TimeSensor2414->setCycleInterval(5.73);
TimeSensor2414->setLoop(True);
Group2413->addChildren(*TimeSensor2414);

COrientationInterpolator* OrientationInterpolator2415 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2415->setDEF("Yaw_r_metatarsal_PitchInterpolator");
OrientationInterpolator2415->setKey(new float[6]{0,0.2,0.4,0.6,0.7,1});
OrientationInterpolator2415->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2413->addChildren(*OrientationInterpolator2415);

COrientationInterpolator* OrientationInterpolator2416 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2416->setDEF("Yaws_r_ankle_RotationInterpolator");
OrientationInterpolator2416->setKey(new float[5]{0,0.25,0.5,0.75,1});
OrientationInterpolator2416->setKeyValue(new float[20]{0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0});
Group2413->addChildren(*OrientationInterpolator2416);

COrientationInterpolator* OrientationInterpolator2417 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2417->setDEF("Yaws_r_knee_RotationInterpolator");
OrientationInterpolator2417->setKey(new float[5]{0,0.25,0.5,0.75,1});
OrientationInterpolator2417->setKeyValue(new float[20]{0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0});
Group2413->addChildren(*OrientationInterpolator2417);

COrientationInterpolator* OrientationInterpolator2418 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2418->setDEF("Yaws_r_hip_RotationInterpolator");
OrientationInterpolator2418->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2418->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2413->addChildren(*OrientationInterpolator2418);

COrientationInterpolator* OrientationInterpolator2419 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2419->setDEF("Yaws_l_ankle_RotationInterpolator");
OrientationInterpolator2419->setKey(new float[5]{0,0.25,0.5,0.75,1});
OrientationInterpolator2419->setKeyValue(new float[20]{0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0});
Group2413->addChildren(*OrientationInterpolator2419);

COrientationInterpolator* OrientationInterpolator2420 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2420->setDEF("Yaws_l_knee_RotationInterpolator");
OrientationInterpolator2420->setKey(new float[5]{0,0.25,0.5,0.75,1});
OrientationInterpolator2420->setKeyValue(new float[20]{0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0});
Group2413->addChildren(*OrientationInterpolator2420);

COrientationInterpolator* OrientationInterpolator2421 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2421->setDEF("Yaws_l_hip_RotationInterpolator");
OrientationInterpolator2421->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2421->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2413->addChildren(*OrientationInterpolator2421);

COrientationInterpolator* OrientationInterpolator2422 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2422->setDEF("Yaws_r_wrist_RotationInterpolator");
OrientationInterpolator2422->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2422->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2413->addChildren(*OrientationInterpolator2422);

COrientationInterpolator* OrientationInterpolator2423 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2423->setDEF("Yaws_r_elbow_RotationInterpolator");
OrientationInterpolator2423->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2423->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2413->addChildren(*OrientationInterpolator2423);

COrientationInterpolator* OrientationInterpolator2424 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2424->setDEF("Yaws_r_shoulder_RotationInterpolator");
OrientationInterpolator2424->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2424->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2413->addChildren(*OrientationInterpolator2424);

COrientationInterpolator* OrientationInterpolator2425 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2425->setDEF("Yaws_l_wrist_RotationInterpolator");
OrientationInterpolator2425->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2425->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2413->addChildren(*OrientationInterpolator2425);

COrientationInterpolator* OrientationInterpolator2426 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2426->setDEF("Yaws_l_elbow_RotationInterpolator");
OrientationInterpolator2426->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2426->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2413->addChildren(*OrientationInterpolator2426);

COrientationInterpolator* OrientationInterpolator2427 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2427->setDEF("Yaws_l_shoulder_RotationInterpolator");
OrientationInterpolator2427->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2427->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2413->addChildren(*OrientationInterpolator2427);

COrientationInterpolator* OrientationInterpolator2428 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2428->setDEF("Yaws_head_RotationInterpolator");
OrientationInterpolator2428->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2428->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2413->addChildren(*OrientationInterpolator2428);

COrientationInterpolator* OrientationInterpolator2429 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2429->setDEF("Yaws_neck_RotationInterpolator");
OrientationInterpolator2429->setKey(new float[5]{0,0.25,0.5,0.75,1});
OrientationInterpolator2429->setKeyValue(new float[20]{0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0});
Group2413->addChildren(*OrientationInterpolator2429);

COrientationInterpolator* OrientationInterpolator2430 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2430->setDEF("Yaws_upper_body_RotationInterpolator");
OrientationInterpolator2430->setKey(new float[5]{0,0.25,0.5,0.75,1});
OrientationInterpolator2430->setKeyValue(new float[20]{0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0});
Group2413->addChildren(*OrientationInterpolator2430);

COrientationInterpolator* OrientationInterpolator2431 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2431->setDEF("Yaws_lower_body_RotationInterpolator");
OrientationInterpolator2431->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2431->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2413->addChildren(*OrientationInterpolator2431);

COrientationInterpolator* OrientationInterpolator2432 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2432->setDEF("Yaws_whole_body_RotationInterpolator");
OrientationInterpolator2432->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2432->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2413->addChildren(*OrientationInterpolator2432);

CPositionInterpolator* PositionInterpolator2433 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator2433->setDEF("Yaws_whole_body_TranslationInterpolator");
PositionInterpolator2433->setKey(new float[3]{0,0.5,1});
PositionInterpolator2433->setKeyValue(new float[9]{0,0,0,0,0,0,0,0,0});
Group2413->addChildren(*PositionInterpolator2433);

COrientationInterpolator* OrientationInterpolator2434 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2434->setDEF("Yaw_l_sternoclavicular_RollInterpolator");
OrientationInterpolator2434->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2434->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2413->addChildren(*OrientationInterpolator2434);

COrientationInterpolator* OrientationInterpolator2435 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2435->setDEF("Yaw_l_acromioclavicular_RollInterpolator");
OrientationInterpolator2435->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2435->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2413->addChildren(*OrientationInterpolator2435);

COrientationInterpolator* OrientationInterpolator2436 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2436->setDEF("Yaw_r_sternoclavicular_RollInterpolator");
OrientationInterpolator2436->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2436->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2413->addChildren(*OrientationInterpolator2436);

COrientationInterpolator* OrientationInterpolator2437 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2437->setDEF("Yaw_r_acromioclavicular_RollInterpolator");
OrientationInterpolator2437->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2437->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2413->addChildren(*OrientationInterpolator2437);

COrientationInterpolator* OrientationInterpolator2438 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2438->setDEF("Yaw_sacroiliac_YawInterpolator");
OrientationInterpolator2438->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2438->setKeyValue(new float[24]{0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,0,0.24,0,-1,0,0.4,0,1,0,0});
Group2413->addChildren(*OrientationInterpolator2438);

COrientationInterpolator* OrientationInterpolator2439 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2439->setDEF("Yaw_vl5_YawInterpolator");
OrientationInterpolator2439->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1});
OrientationInterpolator2439->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2413->addChildren(*OrientationInterpolator2439);

COrientationInterpolator* OrientationInterpolator2440 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2440->setDEF("Yaw_vc6_YawInterpolator");
OrientationInterpolator2440->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1});
OrientationInterpolator2440->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2413->addChildren(*OrientationInterpolator2440);

COrientationInterpolator* OrientationInterpolator2441 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2441->setDEF("Yaw_l_thumb1_PitchInterpolator");
OrientationInterpolator2441->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2441->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2413->addChildren(*OrientationInterpolator2441);

COrientationInterpolator* OrientationInterpolator2442 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2442->setDEF("Yaw_r_thumb1_PitchInterpolator");
OrientationInterpolator2442->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2442->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2413->addChildren(*OrientationInterpolator2442);

CROUTE* ROUTE2443 = new CROUTE();
ROUTE2443->setFromField("fraction_changed");
ROUTE2443->setFromNode("YawTimer");
ROUTE2443->setToField("set_fraction");
ROUTE2443->setToNode("Yaws_r_ankle_RotationInterpolator");
Group2413->addChildren(*ROUTE2443);

CROUTE* ROUTE2444 = new CROUTE();
ROUTE2444->setFromField("fraction_changed");
ROUTE2444->setFromNode("YawTimer");
ROUTE2444->setToField("set_fraction");
ROUTE2444->setToNode("Yaws_r_knee_RotationInterpolator");
Group2413->addChildren(*ROUTE2444);

CROUTE* ROUTE2445 = new CROUTE();
ROUTE2445->setFromField("fraction_changed");
ROUTE2445->setFromNode("YawTimer");
ROUTE2445->setToField("set_fraction");
ROUTE2445->setToNode("Yaws_r_hip_RotationInterpolator");
Group2413->addChildren(*ROUTE2445);

CROUTE* ROUTE2446 = new CROUTE();
ROUTE2446->setFromField("fraction_changed");
ROUTE2446->setFromNode("YawTimer");
ROUTE2446->setToField("set_fraction");
ROUTE2446->setToNode("Yaws_l_ankle_RotationInterpolator");
Group2413->addChildren(*ROUTE2446);

CROUTE* ROUTE2447 = new CROUTE();
ROUTE2447->setFromField("fraction_changed");
ROUTE2447->setFromNode("YawTimer");
ROUTE2447->setToField("set_fraction");
ROUTE2447->setToNode("Yaws_l_knee_RotationInterpolator");
Group2413->addChildren(*ROUTE2447);

CROUTE* ROUTE2448 = new CROUTE();
ROUTE2448->setFromField("fraction_changed");
ROUTE2448->setFromNode("YawTimer");
ROUTE2448->setToField("set_fraction");
ROUTE2448->setToNode("Yaws_l_hip_RotationInterpolator");
Group2413->addChildren(*ROUTE2448);

CROUTE* ROUTE2449 = new CROUTE();
ROUTE2449->setFromField("fraction_changed");
ROUTE2449->setFromNode("YawTimer");
ROUTE2449->setToField("set_fraction");
ROUTE2449->setToNode("Yaws_lower_body_RotationInterpolator");
Group2413->addChildren(*ROUTE2449);

CROUTE* ROUTE2450 = new CROUTE();
ROUTE2450->setFromField("fraction_changed");
ROUTE2450->setFromNode("YawTimer");
ROUTE2450->setToField("set_fraction");
ROUTE2450->setToNode("Yaws_r_wrist_RotationInterpolator");
Group2413->addChildren(*ROUTE2450);

CROUTE* ROUTE2451 = new CROUTE();
ROUTE2451->setFromField("fraction_changed");
ROUTE2451->setFromNode("YawTimer");
ROUTE2451->setToField("set_fraction");
ROUTE2451->setToNode("Yaws_r_elbow_RotationInterpolator");
Group2413->addChildren(*ROUTE2451);

CROUTE* ROUTE2452 = new CROUTE();
ROUTE2452->setFromField("fraction_changed");
ROUTE2452->setFromNode("YawTimer");
ROUTE2452->setToField("set_fraction");
ROUTE2452->setToNode("Yaws_r_shoulder_RotationInterpolator");
Group2413->addChildren(*ROUTE2452);

CROUTE* ROUTE2453 = new CROUTE();
ROUTE2453->setFromField("fraction_changed");
ROUTE2453->setFromNode("YawTimer");
ROUTE2453->setToField("set_fraction");
ROUTE2453->setToNode("Yaws_l_wrist_RotationInterpolator");
Group2413->addChildren(*ROUTE2453);

CROUTE* ROUTE2454 = new CROUTE();
ROUTE2454->setFromField("fraction_changed");
ROUTE2454->setFromNode("YawTimer");
ROUTE2454->setToField("set_fraction");
ROUTE2454->setToNode("Yaws_l_elbow_RotationInterpolator");
Group2413->addChildren(*ROUTE2454);

CROUTE* ROUTE2455 = new CROUTE();
ROUTE2455->setFromField("fraction_changed");
ROUTE2455->setFromNode("YawTimer");
ROUTE2455->setToField("set_fraction");
ROUTE2455->setToNode("Yaws_l_shoulder_RotationInterpolator");
Group2413->addChildren(*ROUTE2455);

CROUTE* ROUTE2456 = new CROUTE();
ROUTE2456->setFromField("fraction_changed");
ROUTE2456->setFromNode("YawTimer");
ROUTE2456->setToField("set_fraction");
ROUTE2456->setToNode("Yaws_head_RotationInterpolator");
Group2413->addChildren(*ROUTE2456);

CROUTE* ROUTE2457 = new CROUTE();
ROUTE2457->setFromField("fraction_changed");
ROUTE2457->setFromNode("YawTimer");
ROUTE2457->setToField("set_fraction");
ROUTE2457->setToNode("Yaws_neck_RotationInterpolator");
Group2413->addChildren(*ROUTE2457);

CROUTE* ROUTE2458 = new CROUTE();
ROUTE2458->setFromField("fraction_changed");
ROUTE2458->setFromNode("YawTimer");
ROUTE2458->setToField("set_fraction");
ROUTE2458->setToNode("Yaws_upper_body_RotationInterpolator");
Group2413->addChildren(*ROUTE2458);

CROUTE* ROUTE2459 = new CROUTE();
ROUTE2459->setFromField("fraction_changed");
ROUTE2459->setFromNode("YawTimer");
ROUTE2459->setToField("set_fraction");
ROUTE2459->setToNode("Yaws_whole_body_RotationInterpolator");
Group2413->addChildren(*ROUTE2459);

CROUTE* ROUTE2460 = new CROUTE();
ROUTE2460->setFromField("fraction_changed");
ROUTE2460->setFromNode("YawTimer");
ROUTE2460->setToField("set_fraction");
ROUTE2460->setToNode("Yaws_whole_body_TranslationInterpolator");
Group2413->addChildren(*ROUTE2460);

CROUTE* ROUTE2461 = new CROUTE();
ROUTE2461->setFromField("fraction_changed");
ROUTE2461->setFromNode("YawTimer");
ROUTE2461->setToField("set_fraction");
ROUTE2461->setToNode("Yaw_l_sternoclavicular_RollInterpolator");
Group2413->addChildren(*ROUTE2461);

CROUTE* ROUTE2462 = new CROUTE();
ROUTE2462->setFromField("fraction_changed");
ROUTE2462->setFromNode("YawTimer");
ROUTE2462->setToField("set_fraction");
ROUTE2462->setToNode("Yaw_l_acromioclavicular_RollInterpolator");
Group2413->addChildren(*ROUTE2462);

CROUTE* ROUTE2463 = new CROUTE();
ROUTE2463->setFromField("fraction_changed");
ROUTE2463->setFromNode("YawTimer");
ROUTE2463->setToField("set_fraction");
ROUTE2463->setToNode("Yaw_r_sternoclavicular_RollInterpolator");
Group2413->addChildren(*ROUTE2463);

CROUTE* ROUTE2464 = new CROUTE();
ROUTE2464->setFromField("fraction_changed");
ROUTE2464->setFromNode("YawTimer");
ROUTE2464->setToField("set_fraction");
ROUTE2464->setToNode("Yaw_r_acromioclavicular_RollInterpolator");
Group2413->addChildren(*ROUTE2464);

CROUTE* ROUTE2465 = new CROUTE();
ROUTE2465->setFromField("fraction_changed");
ROUTE2465->setFromNode("YawTimer");
ROUTE2465->setToField("set_fraction");
ROUTE2465->setToNode("Yaw_r_metatarsal_PitchInterpolator");
Group2413->addChildren(*ROUTE2465);

CROUTE* ROUTE2466 = new CROUTE();
ROUTE2466->setFromField("fraction_changed");
ROUTE2466->setFromNode("YawTimer");
ROUTE2466->setToField("set_fraction");
ROUTE2466->setToNode("Yaw_sacroiliac_YawInterpolator");
Group2413->addChildren(*ROUTE2466);

CROUTE* ROUTE2467 = new CROUTE();
ROUTE2467->setFromField("fraction_changed");
ROUTE2467->setFromNode("YawTimer");
ROUTE2467->setToField("set_fraction");
ROUTE2467->setToNode("Yaw_vl5_YawInterpolator");
Group2413->addChildren(*ROUTE2467);

CROUTE* ROUTE2468 = new CROUTE();
ROUTE2468->setFromField("fraction_changed");
ROUTE2468->setFromNode("YawTimer");
ROUTE2468->setToField("set_fraction");
ROUTE2468->setToNode("Yaw_vc6_YawInterpolator");
Group2413->addChildren(*ROUTE2468);

CROUTE* ROUTE2469 = new CROUTE();
ROUTE2469->setFromField("fraction_changed");
ROUTE2469->setFromNode("YawTimer");
ROUTE2469->setToField("set_fraction");
ROUTE2469->setToNode("Yaw_l_thumb1_PitchInterpolator");
Group2413->addChildren(*ROUTE2469);

CROUTE* ROUTE2470 = new CROUTE();
ROUTE2470->setFromField("fraction_changed");
ROUTE2470->setFromNode("YawTimer");
ROUTE2470->setToField("set_fraction");
ROUTE2470->setToNode("Yaw_r_thumb1_PitchInterpolator");
Group2413->addChildren(*ROUTE2470);

CROUTE* ROUTE2471 = new CROUTE();
ROUTE2471->setFromField("value_changed");
ROUTE2471->setFromNode("Yaws_r_ankle_RotationInterpolator");
ROUTE2471->setToField("rotation");
ROUTE2471->setToNode("hanim_r_ankle");
Group2413->addChildren(*ROUTE2471);

CROUTE* ROUTE2472 = new CROUTE();
ROUTE2472->setFromField("value_changed");
ROUTE2472->setFromNode("Yaws_r_knee_RotationInterpolator");
ROUTE2472->setToField("rotation");
ROUTE2472->setToNode("hanim_r_knee");
Group2413->addChildren(*ROUTE2472);

CROUTE* ROUTE2473 = new CROUTE();
ROUTE2473->setFromField("value_changed");
ROUTE2473->setFromNode("Yaws_r_hip_RotationInterpolator");
ROUTE2473->setToField("rotation");
ROUTE2473->setToNode("hanim_r_hip");
Group2413->addChildren(*ROUTE2473);

CROUTE* ROUTE2474 = new CROUTE();
ROUTE2474->setFromField("value_changed");
ROUTE2474->setFromNode("Yaws_l_ankle_RotationInterpolator");
ROUTE2474->setToField("rotation");
ROUTE2474->setToNode("hanim_l_ankle");
Group2413->addChildren(*ROUTE2474);

CROUTE* ROUTE2475 = new CROUTE();
ROUTE2475->setFromField("value_changed");
ROUTE2475->setFromNode("Yaws_l_knee_RotationInterpolator");
ROUTE2475->setToField("rotation");
ROUTE2475->setToNode("hanim_l_knee");
Group2413->addChildren(*ROUTE2475);

CROUTE* ROUTE2476 = new CROUTE();
ROUTE2476->setFromField("value_changed");
ROUTE2476->setFromNode("Yaws_l_hip_RotationInterpolator");
ROUTE2476->setToField("rotation");
ROUTE2476->setToNode("hanim_l_hip");
Group2413->addChildren(*ROUTE2476);

CROUTE* ROUTE2477 = new CROUTE();
ROUTE2477->setFromField("value_changed");
ROUTE2477->setFromNode("Yaws_lower_body_RotationInterpolator");
ROUTE2477->setToField("rotation");
ROUTE2477->setToNode("hanim_sacroiliac");
Group2413->addChildren(*ROUTE2477);

CROUTE* ROUTE2478 = new CROUTE();
ROUTE2478->setFromField("value_changed");
ROUTE2478->setFromNode("Yaws_r_wrist_RotationInterpolator");
ROUTE2478->setToField("rotation");
ROUTE2478->setToNode("hanim_r_wrist");
Group2413->addChildren(*ROUTE2478);

CROUTE* ROUTE2479 = new CROUTE();
ROUTE2479->setFromField("value_changed");
ROUTE2479->setFromNode("Yaws_r_elbow_RotationInterpolator");
ROUTE2479->setToField("rotation");
ROUTE2479->setToNode("hanim_r_elbow");
Group2413->addChildren(*ROUTE2479);

CROUTE* ROUTE2480 = new CROUTE();
ROUTE2480->setFromField("value_changed");
ROUTE2480->setFromNode("Yaws_r_shoulder_RotationInterpolator");
ROUTE2480->setToField("rotation");
ROUTE2480->setToNode("hanim_r_shoulder");
Group2413->addChildren(*ROUTE2480);

CROUTE* ROUTE2481 = new CROUTE();
ROUTE2481->setFromField("value_changed");
ROUTE2481->setFromNode("Yaws_l_wrist_RotationInterpolator");
ROUTE2481->setToField("rotation");
ROUTE2481->setToNode("hanim_l_wrist");
Group2413->addChildren(*ROUTE2481);

CROUTE* ROUTE2482 = new CROUTE();
ROUTE2482->setFromField("value_changed");
ROUTE2482->setFromNode("Yaws_l_elbow_RotationInterpolator");
ROUTE2482->setToField("rotation");
ROUTE2482->setToNode("hanim_l_elbow");
Group2413->addChildren(*ROUTE2482);

CROUTE* ROUTE2483 = new CROUTE();
ROUTE2483->setFromField("value_changed");
ROUTE2483->setFromNode("Yaws_l_shoulder_RotationInterpolator");
ROUTE2483->setToField("rotation");
ROUTE2483->setToNode("hanim_l_shoulder");
Group2413->addChildren(*ROUTE2483);

CROUTE* ROUTE2484 = new CROUTE();
ROUTE2484->setFromField("value_changed");
ROUTE2484->setFromNode("Yaws_head_RotationInterpolator");
ROUTE2484->setToField("rotation");
ROUTE2484->setToNode("hanim_skullbase");
Group2413->addChildren(*ROUTE2484);

CROUTE* ROUTE2485 = new CROUTE();
ROUTE2485->setFromField("value_changed");
ROUTE2485->setFromNode("Yaws_neck_RotationInterpolator");
ROUTE2485->setToField("rotation");
ROUTE2485->setToNode("hanim_vc4");
Group2413->addChildren(*ROUTE2485);

CROUTE* ROUTE2486 = new CROUTE();
ROUTE2486->setFromField("value_changed");
ROUTE2486->setFromNode("Yaws_upper_body_RotationInterpolator");
ROUTE2486->setToField("rotation");
ROUTE2486->setToNode("hanim_vl1");
Group2413->addChildren(*ROUTE2486);

CROUTE* ROUTE2487 = new CROUTE();
ROUTE2487->setFromField("value_changed");
ROUTE2487->setFromNode("Yaws_whole_body_RotationInterpolator");
ROUTE2487->setToField("rotation");
ROUTE2487->setToNode("hanim_humanoid_root");
Group2413->addChildren(*ROUTE2487);

CROUTE* ROUTE2488 = new CROUTE();
ROUTE2488->setFromField("value_changed");
ROUTE2488->setFromNode("Yaws_whole_body_TranslationInterpolator");
ROUTE2488->setToField("translation");
ROUTE2488->setToNode("hanim_humanoid_root");
Group2413->addChildren(*ROUTE2488);

CROUTE* ROUTE2489 = new CROUTE();
ROUTE2489->setFromField("value_changed");
ROUTE2489->setFromNode("Yaw_l_sternoclavicular_RollInterpolator");
ROUTE2489->setToField("rotation");
ROUTE2489->setToNode("hanim_l_sternoclavicular");
Group2413->addChildren(*ROUTE2489);

CROUTE* ROUTE2490 = new CROUTE();
ROUTE2490->setFromField("value_changed");
ROUTE2490->setFromNode("Yaw_l_acromioclavicular_RollInterpolator");
ROUTE2490->setToField("rotation");
ROUTE2490->setToNode("hanim_l_acromioclavicular");
Group2413->addChildren(*ROUTE2490);

CROUTE* ROUTE2491 = new CROUTE();
ROUTE2491->setFromField("value_changed");
ROUTE2491->setFromNode("Yaw_r_sternoclavicular_RollInterpolator");
ROUTE2491->setToField("rotation");
ROUTE2491->setToNode("hanim_r_sternoclavicular");
Group2413->addChildren(*ROUTE2491);

CROUTE* ROUTE2492 = new CROUTE();
ROUTE2492->setFromField("value_changed");
ROUTE2492->setFromNode("Yaw_r_acromioclavicular_RollInterpolator");
ROUTE2492->setToField("rotation");
ROUTE2492->setToNode("hanim_r_acromioclavicular");
Group2413->addChildren(*ROUTE2492);

CROUTE* ROUTE2493 = new CROUTE();
ROUTE2493->setFromField("value_changed");
ROUTE2493->setFromNode("Yaw_r_metatarsal_PitchInterpolator");
ROUTE2493->setToField("rotation");
ROUTE2493->setToNode("hanim_l_metatarsal");
Group2413->addChildren(*ROUTE2493);

CROUTE* ROUTE2494 = new CROUTE();
ROUTE2494->setFromField("value_changed");
ROUTE2494->setFromNode("Yaw_r_metatarsal_PitchInterpolator");
ROUTE2494->setToField("rotation");
ROUTE2494->setToNode("hanim_r_metatarsal");
Group2413->addChildren(*ROUTE2494);

CROUTE* ROUTE2495 = new CROUTE();
ROUTE2495->setFromField("value_changed");
ROUTE2495->setFromNode("Yaw_sacroiliac_YawInterpolator");
ROUTE2495->setToField("rotation");
ROUTE2495->setToNode("hanim_sacroiliac");
Group2413->addChildren(*ROUTE2495);

CROUTE* ROUTE2496 = new CROUTE();
ROUTE2496->setFromField("value_changed");
ROUTE2496->setFromNode("Yaw_vl5_YawInterpolator");
ROUTE2496->setToField("rotation");
ROUTE2496->setToNode("hanim_vl5");
Group2413->addChildren(*ROUTE2496);

CROUTE* ROUTE2497 = new CROUTE();
ROUTE2497->setFromField("value_changed");
ROUTE2497->setFromNode("Yaw_vc6_YawInterpolator");
ROUTE2497->setToField("rotation");
ROUTE2497->setToNode("hanim_vc6");
Group2413->addChildren(*ROUTE2497);

CROUTE* ROUTE2498 = new CROUTE();
ROUTE2498->setFromField("value_changed");
ROUTE2498->setFromNode("Yaw_l_thumb1_PitchInterpolator");
ROUTE2498->setToField("rotation");
ROUTE2498->setToNode("hanim_l_thumb1");
Group2413->addChildren(*ROUTE2498);

CROUTE* ROUTE2499 = new CROUTE();
ROUTE2499->setFromField("value_changed");
ROUTE2499->setFromNode("Yaw_r_thumb1_PitchInterpolator");
ROUTE2499->setToField("rotation");
ROUTE2499->setToNode("hanim_r_thumb1");
Group2413->addChildren(*ROUTE2499);

group->addChildren(*Group2413);

CGroup* Group2500 = (CGroup *)(m_pScene.createNode("Group"));
Group2500->setDEF("RollsAnimation");
CTimeSensor* TimeSensor2501 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor2501->setDEF("RollTimer");
TimeSensor2501->setCycleInterval(5.73);
TimeSensor2501->setLoop(True);
Group2500->addChildren(*TimeSensor2501);

COrientationInterpolator* OrientationInterpolator2502 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2502->setDEF("Roll_r_metatarsal_PitchInterpolator");
OrientationInterpolator2502->setKey(new float[6]{0,0.2,0.4,0.6,0.7,1});
OrientationInterpolator2502->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2500->addChildren(*OrientationInterpolator2502);

COrientationInterpolator* OrientationInterpolator2503 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2503->setDEF("Rolls_r_ankle_RotationInterpolator");
OrientationInterpolator2503->setKey(new float[5]{0,0.25,0.5,0.75,1});
OrientationInterpolator2503->setKeyValue(new float[20]{0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group2500->addChildren(*OrientationInterpolator2503);

COrientationInterpolator* OrientationInterpolator2504 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2504->setDEF("Rolls_r_knee_RotationInterpolator");
OrientationInterpolator2504->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2504->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2500->addChildren(*OrientationInterpolator2504);

COrientationInterpolator* OrientationInterpolator2505 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2505->setDEF("Rolls_r_hip_RotationInterpolator");
OrientationInterpolator2505->setKey(new float[5]{0,0.25,0.5,0.75,1});
OrientationInterpolator2505->setKeyValue(new float[20]{0,0,-1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0});
Group2500->addChildren(*OrientationInterpolator2505);

COrientationInterpolator* OrientationInterpolator2506 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2506->setDEF("Rolls_l_ankle_RotationInterpolator");
OrientationInterpolator2506->setKey(new float[5]{0,0.25,0.5,0.75,1});
OrientationInterpolator2506->setKeyValue(new float[20]{0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0});
Group2500->addChildren(*OrientationInterpolator2506);

COrientationInterpolator* OrientationInterpolator2507 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2507->setDEF("Rolls_l_knee_RotationInterpolator");
OrientationInterpolator2507->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2507->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2500->addChildren(*OrientationInterpolator2507);

COrientationInterpolator* OrientationInterpolator2508 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2508->setDEF("Rolls_l_hip_RotationInterpolator");
OrientationInterpolator2508->setKey(new float[5]{0,0.25,0.5,0.75,1});
OrientationInterpolator2508->setKeyValue(new float[20]{0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group2500->addChildren(*OrientationInterpolator2508);

COrientationInterpolator* OrientationInterpolator2509 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2509->setDEF("Rolls_r_wrist_RotationInterpolator");
OrientationInterpolator2509->setKey(new float[5]{0,0.25,0.5,0.75,1});
OrientationInterpolator2509->setKeyValue(new float[20]{0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group2500->addChildren(*OrientationInterpolator2509);

COrientationInterpolator* OrientationInterpolator2510 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2510->setDEF("Rolls_r_elbow_RotationInterpolator");
OrientationInterpolator2510->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2510->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2500->addChildren(*OrientationInterpolator2510);

COrientationInterpolator* OrientationInterpolator2511 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2511->setDEF("Rolls_r_shoulder_RotationInterpolator");
OrientationInterpolator2511->setKey(new float[5]{0,0.25,0.5,0.75,1});
OrientationInterpolator2511->setKeyValue(new float[20]{0,0,1,0,0,0,-1,1.5,0,0,-1,3,0,0,-1,1.5,0,0,1,0});
Group2500->addChildren(*OrientationInterpolator2511);

COrientationInterpolator* OrientationInterpolator2512 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2512->setDEF("Rolls_l_wrist_RotationInterpolator");
OrientationInterpolator2512->setKey(new float[5]{0,0.25,0.5,0.75,1});
OrientationInterpolator2512->setKeyValue(new float[20]{0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0});
Group2500->addChildren(*OrientationInterpolator2512);

COrientationInterpolator* OrientationInterpolator2513 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2513->setDEF("Rolls_l_elbow_RotationInterpolator");
OrientationInterpolator2513->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2513->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2500->addChildren(*OrientationInterpolator2513);

COrientationInterpolator* OrientationInterpolator2514 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2514->setDEF("Rolls_l_shoulder_RotationInterpolator");
OrientationInterpolator2514->setKey(new float[5]{0,0.25,0.5,0.75,1});
OrientationInterpolator2514->setKeyValue(new float[20]{0,0,1,0,0,0,1,1.5,0,0,1,3,0,0,1,1.5,0,0,1,0});
Group2500->addChildren(*OrientationInterpolator2514);

COrientationInterpolator* OrientationInterpolator2515 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2515->setDEF("Rolls_head_RotationInterpolator");
OrientationInterpolator2515->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2515->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2500->addChildren(*OrientationInterpolator2515);

COrientationInterpolator* OrientationInterpolator2516 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2516->setDEF("Rolls_neck_RotationInterpolator");
OrientationInterpolator2516->setKey(new float[5]{0,0.25,0.5,0.75,1});
OrientationInterpolator2516->setKeyValue(new float[20]{0,0,1,0,0,0,1,1.25,0,0,1,0,0,0,-1,1.25,0,0,1,0});
Group2500->addChildren(*OrientationInterpolator2516);

COrientationInterpolator* OrientationInterpolator2517 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2517->setDEF("Rolls_lower_body_RotationInterpolator");
OrientationInterpolator2517->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2517->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2500->addChildren(*OrientationInterpolator2517);

COrientationInterpolator* OrientationInterpolator2518 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2518->setDEF("Rolls_upper_body_RotationInterpolator");
OrientationInterpolator2518->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2518->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2500->addChildren(*OrientationInterpolator2518);

COrientationInterpolator* OrientationInterpolator2519 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2519->setDEF("Rolls_whole_body_RotationInterpolator");
OrientationInterpolator2519->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2519->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2500->addChildren(*OrientationInterpolator2519);

CPositionInterpolator* PositionInterpolator2520 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator2520->setDEF("Rolls_whole_body_TranslationInterpolator");
PositionInterpolator2520->setKey(new float[9]{0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1});
PositionInterpolator2520->setKeyValue(new float[27]{0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0});
Group2500->addChildren(*PositionInterpolator2520);

COrientationInterpolator* OrientationInterpolator2521 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2521->setDEF("Roll_l_sternoclavicular_RollInterpolator");
OrientationInterpolator2521->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2521->setKeyValue(new float[24]{0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0});
Group2500->addChildren(*OrientationInterpolator2521);

COrientationInterpolator* OrientationInterpolator2522 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2522->setDEF("Roll_l_acromioclavicular_RollInterpolator");
OrientationInterpolator2522->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2522->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0});
Group2500->addChildren(*OrientationInterpolator2522);

COrientationInterpolator* OrientationInterpolator2523 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2523->setDEF("Roll_r_sternoclavicular_RollInterpolator");
OrientationInterpolator2523->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2523->setKeyValue(new float[24]{0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0});
Group2500->addChildren(*OrientationInterpolator2523);

COrientationInterpolator* OrientationInterpolator2524 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2524->setDEF("Roll_r_acromioclavicular_RollInterpolator");
OrientationInterpolator2524->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2524->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0});
Group2500->addChildren(*OrientationInterpolator2524);

COrientationInterpolator* OrientationInterpolator2525 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2525->setDEF("Roll_sacroiliac_YawInterpolator");
OrientationInterpolator2525->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2525->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2500->addChildren(*OrientationInterpolator2525);

COrientationInterpolator* OrientationInterpolator2526 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2526->setDEF("Roll_vl5_YawInterpolator");
OrientationInterpolator2526->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1});
OrientationInterpolator2526->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2500->addChildren(*OrientationInterpolator2526);

COrientationInterpolator* OrientationInterpolator2527 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2527->setDEF("Roll_vc6_YawInterpolator");
OrientationInterpolator2527->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1});
OrientationInterpolator2527->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2500->addChildren(*OrientationInterpolator2527);

COrientationInterpolator* OrientationInterpolator2528 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2528->setDEF("Roll_l_thumb1_PitchInterpolator");
OrientationInterpolator2528->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2528->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2500->addChildren(*OrientationInterpolator2528);

COrientationInterpolator* OrientationInterpolator2529 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2529->setDEF("Roll_r_thumb1_PitchInterpolator");
OrientationInterpolator2529->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2529->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2500->addChildren(*OrientationInterpolator2529);

CROUTE* ROUTE2530 = new CROUTE();
ROUTE2530->setFromField("fraction_changed");
ROUTE2530->setFromNode("RollTimer");
ROUTE2530->setToField("set_fraction");
ROUTE2530->setToNode("Rolls_r_ankle_RotationInterpolator");
Group2500->addChildren(*ROUTE2530);

CROUTE* ROUTE2531 = new CROUTE();
ROUTE2531->setFromField("fraction_changed");
ROUTE2531->setFromNode("RollTimer");
ROUTE2531->setToField("set_fraction");
ROUTE2531->setToNode("Rolls_r_knee_RotationInterpolator");
Group2500->addChildren(*ROUTE2531);

CROUTE* ROUTE2532 = new CROUTE();
ROUTE2532->setFromField("fraction_changed");
ROUTE2532->setFromNode("RollTimer");
ROUTE2532->setToField("set_fraction");
ROUTE2532->setToNode("Rolls_r_hip_RotationInterpolator");
Group2500->addChildren(*ROUTE2532);

CROUTE* ROUTE2533 = new CROUTE();
ROUTE2533->setFromField("fraction_changed");
ROUTE2533->setFromNode("RollTimer");
ROUTE2533->setToField("set_fraction");
ROUTE2533->setToNode("Rolls_l_ankle_RotationInterpolator");
Group2500->addChildren(*ROUTE2533);

CROUTE* ROUTE2534 = new CROUTE();
ROUTE2534->setFromField("fraction_changed");
ROUTE2534->setFromNode("RollTimer");
ROUTE2534->setToField("set_fraction");
ROUTE2534->setToNode("Rolls_l_knee_RotationInterpolator");
Group2500->addChildren(*ROUTE2534);

CROUTE* ROUTE2535 = new CROUTE();
ROUTE2535->setFromField("fraction_changed");
ROUTE2535->setFromNode("RollTimer");
ROUTE2535->setToField("set_fraction");
ROUTE2535->setToNode("Rolls_l_hip_RotationInterpolator");
Group2500->addChildren(*ROUTE2535);

CROUTE* ROUTE2536 = new CROUTE();
ROUTE2536->setFromField("fraction_changed");
ROUTE2536->setFromNode("RollTimer");
ROUTE2536->setToField("set_fraction");
ROUTE2536->setToNode("Rolls_lower_body_RotationInterpolator");
Group2500->addChildren(*ROUTE2536);

CROUTE* ROUTE2537 = new CROUTE();
ROUTE2537->setFromField("fraction_changed");
ROUTE2537->setFromNode("RollTimer");
ROUTE2537->setToField("set_fraction");
ROUTE2537->setToNode("Rolls_r_wrist_RotationInterpolator");
Group2500->addChildren(*ROUTE2537);

CROUTE* ROUTE2538 = new CROUTE();
ROUTE2538->setFromField("fraction_changed");
ROUTE2538->setFromNode("RollTimer");
ROUTE2538->setToField("set_fraction");
ROUTE2538->setToNode("Rolls_r_elbow_RotationInterpolator");
Group2500->addChildren(*ROUTE2538);

CROUTE* ROUTE2539 = new CROUTE();
ROUTE2539->setFromField("fraction_changed");
ROUTE2539->setFromNode("RollTimer");
ROUTE2539->setToField("set_fraction");
ROUTE2539->setToNode("Rolls_r_shoulder_RotationInterpolator");
Group2500->addChildren(*ROUTE2539);

CROUTE* ROUTE2540 = new CROUTE();
ROUTE2540->setFromField("fraction_changed");
ROUTE2540->setFromNode("RollTimer");
ROUTE2540->setToField("set_fraction");
ROUTE2540->setToNode("Rolls_l_wrist_RotationInterpolator");
Group2500->addChildren(*ROUTE2540);

CROUTE* ROUTE2541 = new CROUTE();
ROUTE2541->setFromField("fraction_changed");
ROUTE2541->setFromNode("RollTimer");
ROUTE2541->setToField("set_fraction");
ROUTE2541->setToNode("Rolls_l_elbow_RotationInterpolator");
Group2500->addChildren(*ROUTE2541);

CROUTE* ROUTE2542 = new CROUTE();
ROUTE2542->setFromField("fraction_changed");
ROUTE2542->setFromNode("RollTimer");
ROUTE2542->setToField("set_fraction");
ROUTE2542->setToNode("Rolls_l_shoulder_RotationInterpolator");
Group2500->addChildren(*ROUTE2542);

CROUTE* ROUTE2543 = new CROUTE();
ROUTE2543->setFromField("fraction_changed");
ROUTE2543->setFromNode("RollTimer");
ROUTE2543->setToField("set_fraction");
ROUTE2543->setToNode("Rolls_head_RotationInterpolator");
Group2500->addChildren(*ROUTE2543);

CROUTE* ROUTE2544 = new CROUTE();
ROUTE2544->setFromField("fraction_changed");
ROUTE2544->setFromNode("RollTimer");
ROUTE2544->setToField("set_fraction");
ROUTE2544->setToNode("Rolls_neck_RotationInterpolator");
Group2500->addChildren(*ROUTE2544);

CROUTE* ROUTE2545 = new CROUTE();
ROUTE2545->setFromField("fraction_changed");
ROUTE2545->setFromNode("RollTimer");
ROUTE2545->setToField("set_fraction");
ROUTE2545->setToNode("Rolls_upper_body_RotationInterpolator");
Group2500->addChildren(*ROUTE2545);

CROUTE* ROUTE2546 = new CROUTE();
ROUTE2546->setFromField("fraction_changed");
ROUTE2546->setFromNode("RollTimer");
ROUTE2546->setToField("set_fraction");
ROUTE2546->setToNode("Rolls_whole_body_RotationInterpolator");
Group2500->addChildren(*ROUTE2546);

CROUTE* ROUTE2547 = new CROUTE();
ROUTE2547->setFromField("fraction_changed");
ROUTE2547->setFromNode("RollTimer");
ROUTE2547->setToField("set_fraction");
ROUTE2547->setToNode("Rolls_whole_body_TranslationInterpolator");
Group2500->addChildren(*ROUTE2547);

CROUTE* ROUTE2548 = new CROUTE();
ROUTE2548->setFromField("fraction_changed");
ROUTE2548->setFromNode("RollTimer");
ROUTE2548->setToField("set_fraction");
ROUTE2548->setToNode("Roll_l_sternoclavicular_RollInterpolator");
Group2500->addChildren(*ROUTE2548);

CROUTE* ROUTE2549 = new CROUTE();
ROUTE2549->setFromField("fraction_changed");
ROUTE2549->setFromNode("RollTimer");
ROUTE2549->setToField("set_fraction");
ROUTE2549->setToNode("Roll_l_acromioclavicular_RollInterpolator");
Group2500->addChildren(*ROUTE2549);

CROUTE* ROUTE2550 = new CROUTE();
ROUTE2550->setFromField("fraction_changed");
ROUTE2550->setFromNode("RollTimer");
ROUTE2550->setToField("set_fraction");
ROUTE2550->setToNode("Roll_r_sternoclavicular_RollInterpolator");
Group2500->addChildren(*ROUTE2550);

CROUTE* ROUTE2551 = new CROUTE();
ROUTE2551->setFromField("fraction_changed");
ROUTE2551->setFromNode("RollTimer");
ROUTE2551->setToField("set_fraction");
ROUTE2551->setToNode("Roll_r_acromioclavicular_RollInterpolator");
Group2500->addChildren(*ROUTE2551);

CROUTE* ROUTE2552 = new CROUTE();
ROUTE2552->setFromField("fraction_changed");
ROUTE2552->setFromNode("RollTimer");
ROUTE2552->setToField("set_fraction");
ROUTE2552->setToNode("Roll_r_metatarsal_PitchInterpolator");
Group2500->addChildren(*ROUTE2552);

CROUTE* ROUTE2553 = new CROUTE();
ROUTE2553->setFromField("fraction_changed");
ROUTE2553->setFromNode("RollTimer");
ROUTE2553->setToField("set_fraction");
ROUTE2553->setToNode("Roll_sacroiliac_YawInterpolator");
Group2500->addChildren(*ROUTE2553);

CROUTE* ROUTE2554 = new CROUTE();
ROUTE2554->setFromField("fraction_changed");
ROUTE2554->setFromNode("RollTimer");
ROUTE2554->setToField("set_fraction");
ROUTE2554->setToNode("Roll_vl5_YawInterpolator");
Group2500->addChildren(*ROUTE2554);

CROUTE* ROUTE2555 = new CROUTE();
ROUTE2555->setFromField("fraction_changed");
ROUTE2555->setFromNode("RollTimer");
ROUTE2555->setToField("set_fraction");
ROUTE2555->setToNode("Roll_vc6_YawInterpolator");
Group2500->addChildren(*ROUTE2555);

CROUTE* ROUTE2556 = new CROUTE();
ROUTE2556->setFromField("fraction_changed");
ROUTE2556->setFromNode("RollTimer");
ROUTE2556->setToField("set_fraction");
ROUTE2556->setToNode("Roll_l_thumb1_PitchInterpolator");
Group2500->addChildren(*ROUTE2556);

CROUTE* ROUTE2557 = new CROUTE();
ROUTE2557->setFromField("fraction_changed");
ROUTE2557->setFromNode("RollTimer");
ROUTE2557->setToField("set_fraction");
ROUTE2557->setToNode("Roll_r_thumb1_PitchInterpolator");
Group2500->addChildren(*ROUTE2557);

CROUTE* ROUTE2558 = new CROUTE();
ROUTE2558->setFromField("value_changed");
ROUTE2558->setFromNode("Rolls_r_ankle_RotationInterpolator");
ROUTE2558->setToField("rotation");
ROUTE2558->setToNode("hanim_r_ankle");
Group2500->addChildren(*ROUTE2558);

CROUTE* ROUTE2559 = new CROUTE();
ROUTE2559->setFromField("value_changed");
ROUTE2559->setFromNode("Rolls_r_knee_RotationInterpolator");
ROUTE2559->setToField("rotation");
ROUTE2559->setToNode("hanim_r_knee");
Group2500->addChildren(*ROUTE2559);

CROUTE* ROUTE2560 = new CROUTE();
ROUTE2560->setFromField("value_changed");
ROUTE2560->setFromNode("Rolls_r_hip_RotationInterpolator");
ROUTE2560->setToField("rotation");
ROUTE2560->setToNode("hanim_r_hip");
Group2500->addChildren(*ROUTE2560);

CROUTE* ROUTE2561 = new CROUTE();
ROUTE2561->setFromField("value_changed");
ROUTE2561->setFromNode("Rolls_l_ankle_RotationInterpolator");
ROUTE2561->setToField("rotation");
ROUTE2561->setToNode("hanim_l_ankle");
Group2500->addChildren(*ROUTE2561);

CROUTE* ROUTE2562 = new CROUTE();
ROUTE2562->setFromField("value_changed");
ROUTE2562->setFromNode("Rolls_l_knee_RotationInterpolator");
ROUTE2562->setToField("rotation");
ROUTE2562->setToNode("hanim_l_knee");
Group2500->addChildren(*ROUTE2562);

CROUTE* ROUTE2563 = new CROUTE();
ROUTE2563->setFromField("value_changed");
ROUTE2563->setFromNode("Rolls_l_hip_RotationInterpolator");
ROUTE2563->setToField("rotation");
ROUTE2563->setToNode("hanim_l_hip");
Group2500->addChildren(*ROUTE2563);

CROUTE* ROUTE2564 = new CROUTE();
ROUTE2564->setFromField("value_changed");
ROUTE2564->setFromNode("Rolls_lower_body_RotationInterpolator");
ROUTE2564->setToField("rotation");
ROUTE2564->setToNode("hanim_sacroiliac");
Group2500->addChildren(*ROUTE2564);

CROUTE* ROUTE2565 = new CROUTE();
ROUTE2565->setFromField("value_changed");
ROUTE2565->setFromNode("Rolls_r_wrist_RotationInterpolator");
ROUTE2565->setToField("rotation");
ROUTE2565->setToNode("hanim_r_wrist");
Group2500->addChildren(*ROUTE2565);

CROUTE* ROUTE2566 = new CROUTE();
ROUTE2566->setFromField("value_changed");
ROUTE2566->setFromNode("Rolls_r_elbow_RotationInterpolator");
ROUTE2566->setToField("rotation");
ROUTE2566->setToNode("hanim_r_elbow");
Group2500->addChildren(*ROUTE2566);

CROUTE* ROUTE2567 = new CROUTE();
ROUTE2567->setFromField("value_changed");
ROUTE2567->setFromNode("Rolls_r_shoulder_RotationInterpolator");
ROUTE2567->setToField("rotation");
ROUTE2567->setToNode("hanim_r_shoulder");
Group2500->addChildren(*ROUTE2567);

CROUTE* ROUTE2568 = new CROUTE();
ROUTE2568->setFromField("value_changed");
ROUTE2568->setFromNode("Rolls_l_wrist_RotationInterpolator");
ROUTE2568->setToField("rotation");
ROUTE2568->setToNode("hanim_l_wrist");
Group2500->addChildren(*ROUTE2568);

CROUTE* ROUTE2569 = new CROUTE();
ROUTE2569->setFromField("value_changed");
ROUTE2569->setFromNode("Rolls_l_elbow_RotationInterpolator");
ROUTE2569->setToField("rotation");
ROUTE2569->setToNode("hanim_l_elbow");
Group2500->addChildren(*ROUTE2569);

CROUTE* ROUTE2570 = new CROUTE();
ROUTE2570->setFromField("value_changed");
ROUTE2570->setFromNode("Rolls_l_shoulder_RotationInterpolator");
ROUTE2570->setToField("rotation");
ROUTE2570->setToNode("hanim_l_shoulder");
Group2500->addChildren(*ROUTE2570);

CROUTE* ROUTE2571 = new CROUTE();
ROUTE2571->setFromField("value_changed");
ROUTE2571->setFromNode("Rolls_head_RotationInterpolator");
ROUTE2571->setToField("rotation");
ROUTE2571->setToNode("hanim_skullbase");
Group2500->addChildren(*ROUTE2571);

CROUTE* ROUTE2572 = new CROUTE();
ROUTE2572->setFromField("value_changed");
ROUTE2572->setFromNode("Rolls_neck_RotationInterpolator");
ROUTE2572->setToField("rotation");
ROUTE2572->setToNode("hanim_vc4");
Group2500->addChildren(*ROUTE2572);

CROUTE* ROUTE2573 = new CROUTE();
ROUTE2573->setFromField("value_changed");
ROUTE2573->setFromNode("Rolls_upper_body_RotationInterpolator");
ROUTE2573->setToField("rotation");
ROUTE2573->setToNode("hanim_vl1");
Group2500->addChildren(*ROUTE2573);

CROUTE* ROUTE2574 = new CROUTE();
ROUTE2574->setFromField("value_changed");
ROUTE2574->setFromNode("Rolls_whole_body_RotationInterpolator");
ROUTE2574->setToField("rotation");
ROUTE2574->setToNode("hanim_humanoid_root");
Group2500->addChildren(*ROUTE2574);

CROUTE* ROUTE2575 = new CROUTE();
ROUTE2575->setFromField("value_changed");
ROUTE2575->setFromNode("Rolls_whole_body_TranslationInterpolator");
ROUTE2575->setToField("translation");
ROUTE2575->setToNode("hanim_humanoid_root");
Group2500->addChildren(*ROUTE2575);

CROUTE* ROUTE2576 = new CROUTE();
ROUTE2576->setFromField("value_changed");
ROUTE2576->setFromNode("Roll_l_sternoclavicular_RollInterpolator");
ROUTE2576->setToField("rotation");
ROUTE2576->setToNode("hanim_l_sternoclavicular");
Group2500->addChildren(*ROUTE2576);

CROUTE* ROUTE2577 = new CROUTE();
ROUTE2577->setFromField("value_changed");
ROUTE2577->setFromNode("Roll_l_acromioclavicular_RollInterpolator");
ROUTE2577->setToField("rotation");
ROUTE2577->setToNode("hanim_l_acromioclavicular");
Group2500->addChildren(*ROUTE2577);

CROUTE* ROUTE2578 = new CROUTE();
ROUTE2578->setFromField("value_changed");
ROUTE2578->setFromNode("Roll_r_sternoclavicular_RollInterpolator");
ROUTE2578->setToField("rotation");
ROUTE2578->setToNode("hanim_r_sternoclavicular");
Group2500->addChildren(*ROUTE2578);

CROUTE* ROUTE2579 = new CROUTE();
ROUTE2579->setFromField("value_changed");
ROUTE2579->setFromNode("Roll_r_acromioclavicular_RollInterpolator");
ROUTE2579->setToField("rotation");
ROUTE2579->setToNode("hanim_r_acromioclavicular");
Group2500->addChildren(*ROUTE2579);

CROUTE* ROUTE2580 = new CROUTE();
ROUTE2580->setFromField("value_changed");
ROUTE2580->setFromNode("Roll_r_metatarsal_PitchInterpolator");
ROUTE2580->setToField("rotation");
ROUTE2580->setToNode("hanim_l_metatarsal");
Group2500->addChildren(*ROUTE2580);

CROUTE* ROUTE2581 = new CROUTE();
ROUTE2581->setFromField("value_changed");
ROUTE2581->setFromNode("Roll_r_metatarsal_PitchInterpolator");
ROUTE2581->setToField("rotation");
ROUTE2581->setToNode("hanim_r_metatarsal");
Group2500->addChildren(*ROUTE2581);

CROUTE* ROUTE2582 = new CROUTE();
ROUTE2582->setFromField("value_changed");
ROUTE2582->setFromNode("Roll_sacroiliac_YawInterpolator");
ROUTE2582->setToField("rotation");
ROUTE2582->setToNode("hanim_sacroiliac");
Group2500->addChildren(*ROUTE2582);

CROUTE* ROUTE2583 = new CROUTE();
ROUTE2583->setFromField("value_changed");
ROUTE2583->setFromNode("Roll_vl5_YawInterpolator");
ROUTE2583->setToField("rotation");
ROUTE2583->setToNode("hanim_vl5");
Group2500->addChildren(*ROUTE2583);

CROUTE* ROUTE2584 = new CROUTE();
ROUTE2584->setFromField("value_changed");
ROUTE2584->setFromNode("Roll_vc6_YawInterpolator");
ROUTE2584->setToField("rotation");
ROUTE2584->setToNode("hanim_vc6");
Group2500->addChildren(*ROUTE2584);

CROUTE* ROUTE2585 = new CROUTE();
ROUTE2585->setFromField("value_changed");
ROUTE2585->setFromNode("Roll_l_thumb1_PitchInterpolator");
ROUTE2585->setToField("rotation");
ROUTE2585->setToNode("hanim_l_thumb1");
Group2500->addChildren(*ROUTE2585);

CROUTE* ROUTE2586 = new CROUTE();
ROUTE2586->setFromField("value_changed");
ROUTE2586->setFromNode("Roll_r_thumb1_PitchInterpolator");
ROUTE2586->setToField("rotation");
ROUTE2586->setToNode("hanim_r_thumb1");
Group2500->addChildren(*ROUTE2586);

group->addChildren(*Group2500);

CGroup* Group2587 = (CGroup *)(m_pScene.createNode("Group"));
Group2587->setDEF("WalkAnimation");
CTimeSensor* TimeSensor2588 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor2588->setDEF("WalkTimer");
TimeSensor2588->setCycleInterval(1.73);
TimeSensor2588->setLoop(True);
Group2587->addChildren(*TimeSensor2588);

COrientationInterpolator* OrientationInterpolator2589 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2589->setDEF("Walk_r_metatarsal_PitchInterpolator");
OrientationInterpolator2589->setKey(new float[6]{0,0.2,0.4,0.6,0.7,1});
OrientationInterpolator2589->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2587->addChildren(*OrientationInterpolator2589);

COrientationInterpolator* OrientationInterpolator2590 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2590->setDEF("Walk_r_ankle_RotationInterpolator");
OrientationInterpolator2590->setKey(new float[11]{0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1});
OrientationInterpolator2590->setKeyValue(new float[44]{0,0,1,0,-1,0,0,0.3533,-1,0,0,0.1072,1,0,0,0.2612,1,0,0,0.1268,-1,0,0,0.01793,-1,0,0,0.05824,-1,0,0,0.2398,-1,0,0,0.35,-1,0,0,0.3322,0,0,1,0});
Group2587->addChildren(*OrientationInterpolator2590);

COrientationInterpolator* OrientationInterpolator2591 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2591->setDEF("Walk_r_knee_RotationInterpolator");
OrientationInterpolator2591->setKey(new float[10]{0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1});
OrientationInterpolator2591->setKeyValue(new float[40]{1,0,0,0.8573,1,0,0,0.8926,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.09354,1,0,0,0.08558,1,0,0,0.2475,1,0,0,0.8573});
Group2587->addChildren(*OrientationInterpolator2591);

COrientationInterpolator* OrientationInterpolator2592 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2592->setDEF("Walk_r_hip_RotationInterpolator");
OrientationInterpolator2592->setKey(new float[10]{0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1});
OrientationInterpolator2592->setKeyValue(new float[40]{-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9911,-0.03541,-0.1286,0.5419,-0.9131,-0.06243,-0.403,0.3361,-0.4306,-0.07962,-0.899,0.07038,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481});
Group2587->addChildren(*OrientationInterpolator2592);

COrientationInterpolator* OrientationInterpolator2593 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2593->setDEF("Walk_l_ankle_RotationInterpolator");
OrientationInterpolator2593->setKey(new float[7]{0,0.125,0.2083,0.375,0.6667,0.9167,1});
OrientationInterpolator2593->setKeyValue(new float[28]{-1,0,0,0.06714,-1,0,0,0.2152,-1,0,0,0.3184,-1,0,0,0.4717,-1,0,0,0.2912,1,0,0,0.1222,-1,0,0,0.06714});
Group2587->addChildren(*OrientationInterpolator2593);

COrientationInterpolator* OrientationInterpolator2594 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2594->setDEF("Walk_l_knee_RotationInterpolator");
OrientationInterpolator2594->setKey(new float[8]{0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1});
OrientationInterpolator2594->setKeyValue(new float[32]{1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226});
Group2587->addChildren(*OrientationInterpolator2594);

COrientationInterpolator* OrientationInterpolator2595 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2595->setDEF("Walk_l_hip_RotationInterpolator");
OrientationInterpolator2595->setKey(new float[8]{0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1});
OrientationInterpolator2595->setKeyValue(new float[32]{-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-0.7018,-0.03223,-0.7117,0.1289,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865});
Group2587->addChildren(*OrientationInterpolator2595);

COrientationInterpolator* OrientationInterpolator2596 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2596->setDEF("Walk_lower_body_RotationInterpolator");
OrientationInterpolator2596->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2596->setKeyValue(new float[12]{0,0,-1,0.1056,0,0,1,0.09018,0,0,-1,0.1056});
Group2587->addChildren(*OrientationInterpolator2596);

COrientationInterpolator* OrientationInterpolator2597 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2597->setDEF("Walk_r_wrist_RotationInterpolator");
OrientationInterpolator2597->setKey(new float[4]{0,0.375,0.9167,1});
OrientationInterpolator2597->setKeyValue(new float[16]{-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.02582,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346});
Group2587->addChildren(*OrientationInterpolator2597);

COrientationInterpolator* OrientationInterpolator2598 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2598->setDEF("Walk_r_elbow_RotationInterpolator");
OrientationInterpolator2598->setKey(new float[4]{0,0.375,0.9167,1});
OrientationInterpolator2598->setKeyValue(new float[16]{-1,0,0,0.411508,-1,0,0,0.0925011,-1,0,0,0.572568,-1,0,0,0.411508});
Group2587->addChildren(*OrientationInterpolator2598);

COrientationInterpolator* OrientationInterpolator2599 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2599->setDEF("Walk_r_shoulder_RotationInterpolator");
OrientationInterpolator2599->setKey(new float[4]{0,0.375,0.9167,1});
OrientationInterpolator2599->setKeyValue(new float[16]{-1,0,0,0.09346,1,0,0,0.3197,-1,0,0,0.1564,-1,0,0,0.09346});
Group2587->addChildren(*OrientationInterpolator2599);

COrientationInterpolator* OrientationInterpolator2600 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2600->setDEF("Walk_l_wrist_RotationInterpolator");
OrientationInterpolator2600->setKey(new float[4]{0,0.375,0.9167,1});
OrientationInterpolator2600->setKeyValue(new float[16]{0,-1,0,0.461076,-0.330195,-0.927451,0.175516,0.538852,0.0327774,-0.999314,-0.0172185,0.492033,0,-1,0,0.461076});
Group2587->addChildren(*OrientationInterpolator2600);

COrientationInterpolator* OrientationInterpolator2601 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2601->setDEF("Walk_l_elbow_RotationInterpolator");
OrientationInterpolator2601->setKey(new float[4]{0,0.375,0.9167,1});
OrientationInterpolator2601->setKeyValue(new float[16]{-1,0,0,0.0659878,-1,0,0,0.488383,-1,0,0,0.0177536,-1,0,0,0.0659878});
Group2587->addChildren(*OrientationInterpolator2601);

COrientationInterpolator* OrientationInterpolator2602 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2602->setDEF("Walk_l_shoulder_RotationInterpolator");
OrientationInterpolator2602->setKey(new float[4]{0,0.375,0.9167,1});
OrientationInterpolator2602->setKeyValue(new float[16]{1,0,0,0.1189,-1,0,0,0.1861,1,0,0,0.3357,1,0,0,0.1189});
Group2587->addChildren(*OrientationInterpolator2602);

COrientationInterpolator* OrientationInterpolator2603 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2603->setDEF("Walk_head_RotationInterpolator");
OrientationInterpolator2603->setKey(new float[10]{0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1});
OrientationInterpolator2603->setKeyValue(new float[40]{0,-1,0,0.08642,0,1,0,0.1825,0,1,0,0.1505,0,1,0,0.1053,0,1,0,0.04391,0,-1,0,0.03119,0,-1,0,0.07936,0,-1,0,0.1616,0,-1,0,0.155,0,-1,0,0.08642});
Group2587->addChildren(*OrientationInterpolator2603);

COrientationInterpolator* OrientationInterpolator2604 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2604->setDEF("Walk_neck_RotationInterpolator");
OrientationInterpolator2604->setKey(new float[2]{0,1});
OrientationInterpolator2604->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
Group2587->addChildren(*OrientationInterpolator2604);

COrientationInterpolator* OrientationInterpolator2605 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2605->setDEF("Walk_upper_body_RotationInterpolator");
OrientationInterpolator2605->setKey(new float[6]{0,0.2083,0.375,0.75,0.8333,1});
OrientationInterpolator2605->setKeyValue(new float[24]{0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826});
Group2587->addChildren(*OrientationInterpolator2605);

COrientationInterpolator* OrientationInterpolator2606 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2606->setDEF("Walk_whole_body_RotationInterpolator");
OrientationInterpolator2606->setKey(new float[2]{0,1});
OrientationInterpolator2606->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
Group2587->addChildren(*OrientationInterpolator2606);

CPositionInterpolator* PositionInterpolator2607 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator2607->setDEF("Walk_whole_body_TranslationInterpolator");
PositionInterpolator2607->setKey(new float[19]{0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1});
PositionInterpolator2607->setKeyValue(new float[57]{0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0});
Group2587->addChildren(*PositionInterpolator2607);

COrientationInterpolator* OrientationInterpolator2608 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2608->setDEF("Walk_l_sternoclavicular_RollInterpolator");
OrientationInterpolator2608->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2608->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2587->addChildren(*OrientationInterpolator2608);

COrientationInterpolator* OrientationInterpolator2609 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2609->setDEF("Walk_l_acromioclavicular_RollInterpolator");
OrientationInterpolator2609->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2609->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2587->addChildren(*OrientationInterpolator2609);

COrientationInterpolator* OrientationInterpolator2610 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2610->setDEF("Walk_r_sternoclavicular_RollInterpolator");
OrientationInterpolator2610->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2610->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2587->addChildren(*OrientationInterpolator2610);

COrientationInterpolator* OrientationInterpolator2611 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2611->setDEF("Walk_r_acromioclavicular_RollInterpolator");
OrientationInterpolator2611->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2611->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2587->addChildren(*OrientationInterpolator2611);

COrientationInterpolator* OrientationInterpolator2612 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2612->setDEF("Walk_sacroiliac_YawInterpolator");
OrientationInterpolator2612->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2612->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2587->addChildren(*OrientationInterpolator2612);

COrientationInterpolator* OrientationInterpolator2613 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2613->setDEF("Walk_vl5_YawInterpolator");
OrientationInterpolator2613->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1});
OrientationInterpolator2613->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2587->addChildren(*OrientationInterpolator2613);

COrientationInterpolator* OrientationInterpolator2614 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2614->setDEF("Walk_vc6_YawInterpolator");
OrientationInterpolator2614->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1});
OrientationInterpolator2614->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2587->addChildren(*OrientationInterpolator2614);

COrientationInterpolator* OrientationInterpolator2615 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2615->setDEF("Walk_l_thumb1_PitchInterpolator");
OrientationInterpolator2615->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2615->setKeyValue(new float[24]{1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0});
Group2587->addChildren(*OrientationInterpolator2615);

COrientationInterpolator* OrientationInterpolator2616 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2616->setDEF("Walk_r_thumb1_PitchInterpolator");
OrientationInterpolator2616->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2616->setKeyValue(new float[24]{1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0});
Group2587->addChildren(*OrientationInterpolator2616);

CROUTE* ROUTE2617 = new CROUTE();
ROUTE2617->setFromField("fraction_changed");
ROUTE2617->setFromNode("WalkTimer");
ROUTE2617->setToField("set_fraction");
ROUTE2617->setToNode("Walk_r_ankle_RotationInterpolator");
Group2587->addChildren(*ROUTE2617);

CROUTE* ROUTE2618 = new CROUTE();
ROUTE2618->setFromField("fraction_changed");
ROUTE2618->setFromNode("WalkTimer");
ROUTE2618->setToField("set_fraction");
ROUTE2618->setToNode("Walk_r_knee_RotationInterpolator");
Group2587->addChildren(*ROUTE2618);

CROUTE* ROUTE2619 = new CROUTE();
ROUTE2619->setFromField("fraction_changed");
ROUTE2619->setFromNode("WalkTimer");
ROUTE2619->setToField("set_fraction");
ROUTE2619->setToNode("Walk_r_hip_RotationInterpolator");
Group2587->addChildren(*ROUTE2619);

CROUTE* ROUTE2620 = new CROUTE();
ROUTE2620->setFromField("fraction_changed");
ROUTE2620->setFromNode("WalkTimer");
ROUTE2620->setToField("set_fraction");
ROUTE2620->setToNode("Walk_l_ankle_RotationInterpolator");
Group2587->addChildren(*ROUTE2620);

CROUTE* ROUTE2621 = new CROUTE();
ROUTE2621->setFromField("fraction_changed");
ROUTE2621->setFromNode("WalkTimer");
ROUTE2621->setToField("set_fraction");
ROUTE2621->setToNode("Walk_l_knee_RotationInterpolator");
Group2587->addChildren(*ROUTE2621);

CROUTE* ROUTE2622 = new CROUTE();
ROUTE2622->setFromField("fraction_changed");
ROUTE2622->setFromNode("WalkTimer");
ROUTE2622->setToField("set_fraction");
ROUTE2622->setToNode("Walk_l_hip_RotationInterpolator");
Group2587->addChildren(*ROUTE2622);

CROUTE* ROUTE2623 = new CROUTE();
ROUTE2623->setFromField("fraction_changed");
ROUTE2623->setFromNode("WalkTimer");
ROUTE2623->setToField("set_fraction");
ROUTE2623->setToNode("Walk_lower_body_RotationInterpolator");
Group2587->addChildren(*ROUTE2623);

CROUTE* ROUTE2624 = new CROUTE();
ROUTE2624->setFromField("fraction_changed");
ROUTE2624->setFromNode("WalkTimer");
ROUTE2624->setToField("set_fraction");
ROUTE2624->setToNode("Walk_r_wrist_RotationInterpolator");
Group2587->addChildren(*ROUTE2624);

CROUTE* ROUTE2625 = new CROUTE();
ROUTE2625->setFromField("fraction_changed");
ROUTE2625->setFromNode("WalkTimer");
ROUTE2625->setToField("set_fraction");
ROUTE2625->setToNode("Walk_r_elbow_RotationInterpolator");
Group2587->addChildren(*ROUTE2625);

CROUTE* ROUTE2626 = new CROUTE();
ROUTE2626->setFromField("fraction_changed");
ROUTE2626->setFromNode("WalkTimer");
ROUTE2626->setToField("set_fraction");
ROUTE2626->setToNode("Walk_r_shoulder_RotationInterpolator");
Group2587->addChildren(*ROUTE2626);

CROUTE* ROUTE2627 = new CROUTE();
ROUTE2627->setFromField("fraction_changed");
ROUTE2627->setFromNode("WalkTimer");
ROUTE2627->setToField("set_fraction");
ROUTE2627->setToNode("Walk_l_wrist_RotationInterpolator");
Group2587->addChildren(*ROUTE2627);

CROUTE* ROUTE2628 = new CROUTE();
ROUTE2628->setFromField("fraction_changed");
ROUTE2628->setFromNode("WalkTimer");
ROUTE2628->setToField("set_fraction");
ROUTE2628->setToNode("Walk_l_elbow_RotationInterpolator");
Group2587->addChildren(*ROUTE2628);

CROUTE* ROUTE2629 = new CROUTE();
ROUTE2629->setFromField("fraction_changed");
ROUTE2629->setFromNode("WalkTimer");
ROUTE2629->setToField("set_fraction");
ROUTE2629->setToNode("Walk_l_shoulder_RotationInterpolator");
Group2587->addChildren(*ROUTE2629);

CROUTE* ROUTE2630 = new CROUTE();
ROUTE2630->setFromField("fraction_changed");
ROUTE2630->setFromNode("WalkTimer");
ROUTE2630->setToField("set_fraction");
ROUTE2630->setToNode("Walk_head_RotationInterpolator");
Group2587->addChildren(*ROUTE2630);

CROUTE* ROUTE2631 = new CROUTE();
ROUTE2631->setFromField("fraction_changed");
ROUTE2631->setFromNode("WalkTimer");
ROUTE2631->setToField("set_fraction");
ROUTE2631->setToNode("Walk_neck_RotationInterpolator");
Group2587->addChildren(*ROUTE2631);

CROUTE* ROUTE2632 = new CROUTE();
ROUTE2632->setFromField("fraction_changed");
ROUTE2632->setFromNode("WalkTimer");
ROUTE2632->setToField("set_fraction");
ROUTE2632->setToNode("Walk_upper_body_RotationInterpolator");
Group2587->addChildren(*ROUTE2632);

CROUTE* ROUTE2633 = new CROUTE();
ROUTE2633->setFromField("fraction_changed");
ROUTE2633->setFromNode("WalkTimer");
ROUTE2633->setToField("set_fraction");
ROUTE2633->setToNode("Walk_whole_body_RotationInterpolator");
Group2587->addChildren(*ROUTE2633);

CROUTE* ROUTE2634 = new CROUTE();
ROUTE2634->setFromField("fraction_changed");
ROUTE2634->setFromNode("WalkTimer");
ROUTE2634->setToField("set_fraction");
ROUTE2634->setToNode("Walk_whole_body_TranslationInterpolator");
Group2587->addChildren(*ROUTE2634);

CROUTE* ROUTE2635 = new CROUTE();
ROUTE2635->setFromField("fraction_changed");
ROUTE2635->setFromNode("WalkTimer");
ROUTE2635->setToField("set_fraction");
ROUTE2635->setToNode("Walk_l_sternoclavicular_RollInterpolator");
Group2587->addChildren(*ROUTE2635);

CROUTE* ROUTE2636 = new CROUTE();
ROUTE2636->setFromField("fraction_changed");
ROUTE2636->setFromNode("WalkTimer");
ROUTE2636->setToField("set_fraction");
ROUTE2636->setToNode("Walk_l_acromioclavicular_RollInterpolator");
Group2587->addChildren(*ROUTE2636);

CROUTE* ROUTE2637 = new CROUTE();
ROUTE2637->setFromField("fraction_changed");
ROUTE2637->setFromNode("WalkTimer");
ROUTE2637->setToField("set_fraction");
ROUTE2637->setToNode("Walk_r_sternoclavicular_RollInterpolator");
Group2587->addChildren(*ROUTE2637);

CROUTE* ROUTE2638 = new CROUTE();
ROUTE2638->setFromField("fraction_changed");
ROUTE2638->setFromNode("WalkTimer");
ROUTE2638->setToField("set_fraction");
ROUTE2638->setToNode("Walk_r_acromioclavicular_RollInterpolator");
Group2587->addChildren(*ROUTE2638);

CROUTE* ROUTE2639 = new CROUTE();
ROUTE2639->setFromField("fraction_changed");
ROUTE2639->setFromNode("WalkTimer");
ROUTE2639->setToField("set_fraction");
ROUTE2639->setToNode("Walk_r_metatarsal_PitchInterpolator");
Group2587->addChildren(*ROUTE2639);

CROUTE* ROUTE2640 = new CROUTE();
ROUTE2640->setFromField("fraction_changed");
ROUTE2640->setFromNode("WalkTimer");
ROUTE2640->setToField("set_fraction");
ROUTE2640->setToNode("Walk_sacroiliac_YawInterpolator");
Group2587->addChildren(*ROUTE2640);

CROUTE* ROUTE2641 = new CROUTE();
ROUTE2641->setFromField("fraction_changed");
ROUTE2641->setFromNode("WalkTimer");
ROUTE2641->setToField("set_fraction");
ROUTE2641->setToNode("Walk_vl5_YawInterpolator");
Group2587->addChildren(*ROUTE2641);

CROUTE* ROUTE2642 = new CROUTE();
ROUTE2642->setFromField("fraction_changed");
ROUTE2642->setFromNode("WalkTimer");
ROUTE2642->setToField("set_fraction");
ROUTE2642->setToNode("Walk_vc6_YawInterpolator");
Group2587->addChildren(*ROUTE2642);

CROUTE* ROUTE2643 = new CROUTE();
ROUTE2643->setFromField("fraction_changed");
ROUTE2643->setFromNode("WalkTimer");
ROUTE2643->setToField("set_fraction");
ROUTE2643->setToNode("Walk_l_thumb1_PitchInterpolator");
Group2587->addChildren(*ROUTE2643);

CROUTE* ROUTE2644 = new CROUTE();
ROUTE2644->setFromField("fraction_changed");
ROUTE2644->setFromNode("WalkTimer");
ROUTE2644->setToField("set_fraction");
ROUTE2644->setToNode("Walk_r_thumb1_PitchInterpolator");
Group2587->addChildren(*ROUTE2644);

CROUTE* ROUTE2645 = new CROUTE();
ROUTE2645->setFromField("value_changed");
ROUTE2645->setFromNode("Walk_r_ankle_RotationInterpolator");
ROUTE2645->setToField("rotation");
ROUTE2645->setToNode("hanim_r_ankle");
Group2587->addChildren(*ROUTE2645);

CROUTE* ROUTE2646 = new CROUTE();
ROUTE2646->setFromField("value_changed");
ROUTE2646->setFromNode("Walk_r_knee_RotationInterpolator");
ROUTE2646->setToField("rotation");
ROUTE2646->setToNode("hanim_r_knee");
Group2587->addChildren(*ROUTE2646);

CROUTE* ROUTE2647 = new CROUTE();
ROUTE2647->setFromField("value_changed");
ROUTE2647->setFromNode("Walk_r_hip_RotationInterpolator");
ROUTE2647->setToField("rotation");
ROUTE2647->setToNode("hanim_r_hip");
Group2587->addChildren(*ROUTE2647);

CROUTE* ROUTE2648 = new CROUTE();
ROUTE2648->setFromField("value_changed");
ROUTE2648->setFromNode("Walk_l_ankle_RotationInterpolator");
ROUTE2648->setToField("rotation");
ROUTE2648->setToNode("hanim_l_ankle");
Group2587->addChildren(*ROUTE2648);

CROUTE* ROUTE2649 = new CROUTE();
ROUTE2649->setFromField("value_changed");
ROUTE2649->setFromNode("Walk_l_knee_RotationInterpolator");
ROUTE2649->setToField("rotation");
ROUTE2649->setToNode("hanim_l_knee");
Group2587->addChildren(*ROUTE2649);

CROUTE* ROUTE2650 = new CROUTE();
ROUTE2650->setFromField("value_changed");
ROUTE2650->setFromNode("Walk_l_hip_RotationInterpolator");
ROUTE2650->setToField("rotation");
ROUTE2650->setToNode("hanim_l_hip");
Group2587->addChildren(*ROUTE2650);

CROUTE* ROUTE2651 = new CROUTE();
ROUTE2651->setFromField("value_changed");
ROUTE2651->setFromNode("Walk_lower_body_RotationInterpolator");
ROUTE2651->setToField("rotation");
ROUTE2651->setToNode("hanim_sacroiliac");
Group2587->addChildren(*ROUTE2651);

CROUTE* ROUTE2652 = new CROUTE();
ROUTE2652->setFromField("value_changed");
ROUTE2652->setFromNode("Walk_r_wrist_RotationInterpolator");
ROUTE2652->setToField("rotation");
ROUTE2652->setToNode("hanim_r_wrist");
Group2587->addChildren(*ROUTE2652);

CROUTE* ROUTE2653 = new CROUTE();
ROUTE2653->setFromField("value_changed");
ROUTE2653->setFromNode("Walk_r_elbow_RotationInterpolator");
ROUTE2653->setToField("rotation");
ROUTE2653->setToNode("hanim_r_elbow");
Group2587->addChildren(*ROUTE2653);

CROUTE* ROUTE2654 = new CROUTE();
ROUTE2654->setFromField("value_changed");
ROUTE2654->setFromNode("Walk_r_shoulder_RotationInterpolator");
ROUTE2654->setToField("rotation");
ROUTE2654->setToNode("hanim_r_shoulder");
Group2587->addChildren(*ROUTE2654);

CROUTE* ROUTE2655 = new CROUTE();
ROUTE2655->setFromField("value_changed");
ROUTE2655->setFromNode("Walk_l_wrist_RotationInterpolator");
ROUTE2655->setToField("rotation");
ROUTE2655->setToNode("hanim_l_wrist");
Group2587->addChildren(*ROUTE2655);

CROUTE* ROUTE2656 = new CROUTE();
ROUTE2656->setFromField("value_changed");
ROUTE2656->setFromNode("Walk_l_elbow_RotationInterpolator");
ROUTE2656->setToField("rotation");
ROUTE2656->setToNode("hanim_l_elbow");
Group2587->addChildren(*ROUTE2656);

CROUTE* ROUTE2657 = new CROUTE();
ROUTE2657->setFromField("value_changed");
ROUTE2657->setFromNode("Walk_l_shoulder_RotationInterpolator");
ROUTE2657->setToField("rotation");
ROUTE2657->setToNode("hanim_l_shoulder");
Group2587->addChildren(*ROUTE2657);

CROUTE* ROUTE2658 = new CROUTE();
ROUTE2658->setFromField("value_changed");
ROUTE2658->setFromNode("Walk_head_RotationInterpolator");
ROUTE2658->setToField("rotation");
ROUTE2658->setToNode("hanim_skullbase");
Group2587->addChildren(*ROUTE2658);

CROUTE* ROUTE2659 = new CROUTE();
ROUTE2659->setFromField("value_changed");
ROUTE2659->setFromNode("Walk_neck_RotationInterpolator");
ROUTE2659->setToField("rotation");
ROUTE2659->setToNode("hanim_vc4");
Group2587->addChildren(*ROUTE2659);

CROUTE* ROUTE2660 = new CROUTE();
ROUTE2660->setFromField("value_changed");
ROUTE2660->setFromNode("Walk_upper_body_RotationInterpolator");
ROUTE2660->setToField("rotation");
ROUTE2660->setToNode("hanim_vl1");
Group2587->addChildren(*ROUTE2660);

CROUTE* ROUTE2661 = new CROUTE();
ROUTE2661->setFromField("value_changed");
ROUTE2661->setFromNode("Walk_whole_body_RotationInterpolator");
ROUTE2661->setToField("rotation");
ROUTE2661->setToNode("hanim_humanoid_root");
Group2587->addChildren(*ROUTE2661);

CROUTE* ROUTE2662 = new CROUTE();
ROUTE2662->setFromField("value_changed");
ROUTE2662->setFromNode("Walk_whole_body_TranslationInterpolator");
ROUTE2662->setToField("translation");
ROUTE2662->setToNode("hanim_humanoid_root");
Group2587->addChildren(*ROUTE2662);

CROUTE* ROUTE2663 = new CROUTE();
ROUTE2663->setFromField("value_changed");
ROUTE2663->setFromNode("Walk_l_sternoclavicular_RollInterpolator");
ROUTE2663->setToField("rotation");
ROUTE2663->setToNode("hanim_l_sternoclavicular");
Group2587->addChildren(*ROUTE2663);

CROUTE* ROUTE2664 = new CROUTE();
ROUTE2664->setFromField("value_changed");
ROUTE2664->setFromNode("Walk_l_acromioclavicular_RollInterpolator");
ROUTE2664->setToField("rotation");
ROUTE2664->setToNode("hanim_l_acromioclavicular");
Group2587->addChildren(*ROUTE2664);

CROUTE* ROUTE2665 = new CROUTE();
ROUTE2665->setFromField("value_changed");
ROUTE2665->setFromNode("Walk_r_sternoclavicular_RollInterpolator");
ROUTE2665->setToField("rotation");
ROUTE2665->setToNode("hanim_r_sternoclavicular");
Group2587->addChildren(*ROUTE2665);

CROUTE* ROUTE2666 = new CROUTE();
ROUTE2666->setFromField("value_changed");
ROUTE2666->setFromNode("Walk_r_acromioclavicular_RollInterpolator");
ROUTE2666->setToField("rotation");
ROUTE2666->setToNode("hanim_r_acromioclavicular");
Group2587->addChildren(*ROUTE2666);

CROUTE* ROUTE2667 = new CROUTE();
ROUTE2667->setFromField("value_changed");
ROUTE2667->setFromNode("Walk_r_metatarsal_PitchInterpolator");
ROUTE2667->setToField("rotation");
ROUTE2667->setToNode("hanim_l_metatarsal");
Group2587->addChildren(*ROUTE2667);

CROUTE* ROUTE2668 = new CROUTE();
ROUTE2668->setFromField("value_changed");
ROUTE2668->setFromNode("Walk_r_metatarsal_PitchInterpolator");
ROUTE2668->setToField("rotation");
ROUTE2668->setToNode("hanim_r_metatarsal");
Group2587->addChildren(*ROUTE2668);

CROUTE* ROUTE2669 = new CROUTE();
ROUTE2669->setFromField("value_changed");
ROUTE2669->setFromNode("Walk_sacroiliac_YawInterpolator");
ROUTE2669->setToField("rotation");
ROUTE2669->setToNode("hanim_sacroiliac");
Group2587->addChildren(*ROUTE2669);

CROUTE* ROUTE2670 = new CROUTE();
ROUTE2670->setFromField("value_changed");
ROUTE2670->setFromNode("Walk_vl5_YawInterpolator");
ROUTE2670->setToField("rotation");
ROUTE2670->setToNode("hanim_vl5");
Group2587->addChildren(*ROUTE2670);

CROUTE* ROUTE2671 = new CROUTE();
ROUTE2671->setFromField("value_changed");
ROUTE2671->setFromNode("Walk_vc6_YawInterpolator");
ROUTE2671->setToField("rotation");
ROUTE2671->setToNode("hanim_vc6");
Group2587->addChildren(*ROUTE2671);

CROUTE* ROUTE2672 = new CROUTE();
ROUTE2672->setFromField("value_changed");
ROUTE2672->setFromNode("Walk_l_thumb1_PitchInterpolator");
ROUTE2672->setToField("rotation");
ROUTE2672->setToNode("hanim_l_thumb1");
Group2587->addChildren(*ROUTE2672);

CROUTE* ROUTE2673 = new CROUTE();
ROUTE2673->setFromField("value_changed");
ROUTE2673->setFromNode("Walk_r_thumb1_PitchInterpolator");
ROUTE2673->setToField("rotation");
ROUTE2673->setToNode("hanim_r_thumb1");
Group2587->addChildren(*ROUTE2673);

group->addChildren(*Group2587);

CGroup* Group2674 = (CGroup *)(m_pScene.createNode("Group"));
Group2674->setDEF("RunAnimation");
CTimeSensor* TimeSensor2675 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor2675->setDEF("RunTimer");
TimeSensor2675->setCycleInterval(0.9);
TimeSensor2675->setLoop(True);
Group2674->addChildren(*TimeSensor2675);

COrientationInterpolator* OrientationInterpolator2676 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2676->setDEF("Run_r_metatarsal_PitchInterpolator");
OrientationInterpolator2676->setKey(new float[6]{0,0.2,0.4,0.6,0.7,1});
OrientationInterpolator2676->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2674->addChildren(*OrientationInterpolator2676);

COrientationInterpolator* OrientationInterpolator2677 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2677->setDEF("Run_l_hip_RotationInterpolator_Run");
OrientationInterpolator2677->setKey(new float[5]{0,0.2182,0.4909,0.7455,1});
OrientationInterpolator2677->setKeyValue(new float[20]{-0.99,0.033,0.04,1.42,-0.99,0.1328,0.067,0.42,0.99,0.014,0.009,0.9,-0.99,0.0703,0.05,0.7,-0.99,0.033,0.04,1.42});
Group2674->addChildren(*OrientationInterpolator2677);

COrientationInterpolator* OrientationInterpolator2678 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2678->setDEF("Run_l_knee_RotationInterpolator_Run");
OrientationInterpolator2678->setKey(new float[5]{0,0.2182,0.4909,0.7455,1});
OrientationInterpolator2678->setKeyValue(new float[20]{1,0,0,1.01,1,0,0,0.426,1,0,0,0.705,1,0,0,2.179,1,0,0,1.01});
Group2674->addChildren(*OrientationInterpolator2678);

COrientationInterpolator* OrientationInterpolator2679 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2679->setDEF("Run_l_ankle_RotationInterpolator_Run");
OrientationInterpolator2679->setKey(new float[5]{0,0.22,0.3,0.4,1});
OrientationInterpolator2679->setKeyValue(new float[20]{1,0,0,0.0374,-1,0,0,0.1037,-1,0,0,0.4328,1,0,0,0.1929,1,0,0,0.03574});
Group2674->addChildren(*OrientationInterpolator2679);

COrientationInterpolator* OrientationInterpolator2680 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2680->setDEF("Run_r_hip_RotationInterpolator_Run");
OrientationInterpolator2680->setKey(new float[5]{0,0.2545,0.4909,0.7091,1});
OrientationInterpolator2680->setKeyValue(new float[20]{0.99,-0.014,0.009,0.9,-0.99,-0.0703,-0.05,0.7,-0.99,-0.033,0.04,1.42,-0.99,-0.1328,-0.067,0.42,0.99,-0.014,0.009,0.9});
Group2674->addChildren(*OrientationInterpolator2680);

COrientationInterpolator* OrientationInterpolator2681 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2681->setDEF("Run_r_knee_RotationInterpolator_Run");
OrientationInterpolator2681->setKey(new float[5]{0,0.2545,0.4909,0.7091,1});
OrientationInterpolator2681->setKeyValue(new float[20]{1,0,0,0.705,1,0,0,2.179,1,0,0,1.01,1,0,0,0.426,1,0,0,0.705});
Group2674->addChildren(*OrientationInterpolator2681);

COrientationInterpolator* OrientationInterpolator2682 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2682->setDEF("Run_r_ankle_RotationInterpolator_Run");
OrientationInterpolator2682->setKey(new float[6]{0,0.4,0.71,0.8,0.82,1});
OrientationInterpolator2682->setKeyValue(new float[24]{1,0,0,0.2323,-1,0,0,0.07843,-1,0,0,0.32,-1,0,0,0.374,-1,0,0,0.3478,1,0,0,0.2323});
Group2674->addChildren(*OrientationInterpolator2682);

COrientationInterpolator* OrientationInterpolator2683 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2683->setDEF("Run_l_shoulder_RotationInterpolator_Run");
OrientationInterpolator2683->setKey(new float[5]{0,0.2182,0.4909,0.7455,1});
OrientationInterpolator2683->setKeyValue(new float[20]{0.99,-0.074,0.25,1.5,0.99,-0.092,0.44,0.3,-0.99,0.136,0.25,0.85,0.99,-0.081,0.38,0.4,0.99,-0.074,0.25,1.5});
Group2674->addChildren(*OrientationInterpolator2683);

COrientationInterpolator* OrientationInterpolator2684 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2684->setDEF("Run_l_elbow_RotationInterpolator_Run");
OrientationInterpolator2684->setKey(new float[5]{0,0.2182,0.4909,0.7455,1});
OrientationInterpolator2684->setKeyValue(new float[20]{-1,0,0,1.85,-0.99,-0.19,0.18,1.35,-1,0,0,0.975,-0.99,-0.09,-0.02,1.55,-1,0,0,1.85});
Group2674->addChildren(*OrientationInterpolator2684);

COrientationInterpolator* OrientationInterpolator2685 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2685->setDEF("Run_l_wrist_RotationInterpolator_Run");
OrientationInterpolator2685->setKey(new float[5]{0,0.25,0.5,0.75,1});
OrientationInterpolator2685->setKeyValue(new float[20]{-0.25,-1,0.08,0.14,0.25,1,0.08,0.14,0,0,1,0,-0.25,1,0.08,-0.14,-0.25,1,0.08,0.14});
Group2674->addChildren(*OrientationInterpolator2685);

COrientationInterpolator* OrientationInterpolator2686 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2686->setDEF("Run_r_shoulder_RotationInterpolator_Run");
OrientationInterpolator2686->setKey(new float[5]{0,0.2545,0.4909,0.7091,1});
OrientationInterpolator2686->setKeyValue(new float[20]{-0.99,-0.136,-0.25,0.85,0.99,0.081,-0.38,0.4,0.99,0.074,-0.25,1.5,0.99,0.081,-0.38,0.4,-0.99,-0.136,-0.25,0.85});
Group2674->addChildren(*OrientationInterpolator2686);

COrientationInterpolator* OrientationInterpolator2687 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2687->setDEF("Run_r_elbow_RotationInterpolator_Run");
OrientationInterpolator2687->setKey(new float[5]{0,0.2545,0.4909,0.7091,1});
OrientationInterpolator2687->setKeyValue(new float[20]{-1,0,0,0.975,-0.99,0.09,0.02,1.55,-1,0,0,1.85,-0.99,0.19,-0.18,1.35,-1,0,0,0.975});
Group2674->addChildren(*OrientationInterpolator2687);

COrientationInterpolator* OrientationInterpolator2688 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2688->setDEF("Run_r_wrist_RotationInterpolator_Run");
OrientationInterpolator2688->setKey(new float[2]{0,1});
OrientationInterpolator2688->setKeyValue(new float[8]{-0.917742,-0.237244,-0.318536,0.214273,-0.917742,-0.237244,-0.318536,0.214273});
Group2674->addChildren(*OrientationInterpolator2688);

COrientationInterpolator* OrientationInterpolator2689 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2689->setDEF("Run_lower_body_RotationInterpolator_Run");
OrientationInterpolator2689->setKey(new float[5]{0,0.2182,0.4909,0.7455,1});
OrientationInterpolator2689->setKeyValue(new float[20]{0,-1,0,0.125,0,0,1,0,0,1,0,0.125,0,0,1,0,0,-1,0,0.125});
Group2674->addChildren(*OrientationInterpolator2689);

COrientationInterpolator* OrientationInterpolator2690 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2690->setDEF("Run_head_RotationInterpolator_Run");
OrientationInterpolator2690->setKey(new float[5]{0,0.2545,0.4909,0.7091,1});
OrientationInterpolator2690->setKeyValue(new float[20]{1,0,0,0.08,1,0,0,0.12,1,0,0,0.3,1,0,0,0.3,1,0,0,0.08});
Group2674->addChildren(*OrientationInterpolator2690);

COrientationInterpolator* OrientationInterpolator2691 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2691->setDEF("Run_neck_RotationInterpolator_Run");
OrientationInterpolator2691->setKey(new float[5]{0,0.2545,0.4909,0.7091,1});
OrientationInterpolator2691->setKeyValue(new float[20]{0.7,0,0,0.4,-0.7,-0.7,0,0.4,0,0,0,0.4,-0.7,0.7,0,0.4,0.7,0,0,0.4});
Group2674->addChildren(*OrientationInterpolator2691);

COrientationInterpolator* OrientationInterpolator2692 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2692->setDEF("Run_upper_body_RotationInterpolator_Run");
OrientationInterpolator2692->setKey(new float[5]{0,0.2545,0.4909,0.7636,1});
OrientationInterpolator2692->setKeyValue(new float[20]{0.97,0.65,0.086,0.5,0.9,0.003,-0.02,0.38,0.95,-0.68,-0.086,0.5,0.9,0.004,-0.025,0.4,0.97,0.65,0.086,0.5});
Group2674->addChildren(*OrientationInterpolator2692);

COrientationInterpolator* OrientationInterpolator2693 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2693->setDEF("Run_whole_body_RotationInterpolator_Run");
OrientationInterpolator2693->setKey(new float[5]{0,0.25,0.5,0.75,1});
OrientationInterpolator2693->setKeyValue(new float[20]{1,0,0,0.06,1,0,0,0.167,1,0,0,0.06,1,0,0,0.168,1,0,0,0.06});
Group2674->addChildren(*OrientationInterpolator2693);

CPositionInterpolator* PositionInterpolator2694 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator2694->setDEF("Run_whole_body_TranslationInterpolator_Run");
PositionInterpolator2694->setKey(new float[9]{0,0.22,0.3,0.31,0.5,0.69,0.7,0.78,1});
PositionInterpolator2694->setKeyValue(new float[27]{0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0});
Group2674->addChildren(*PositionInterpolator2694);

COrientationInterpolator* OrientationInterpolator2695 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2695->setDEF("Run_l_sternoclavicular_RollInterpolator");
OrientationInterpolator2695->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2695->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2674->addChildren(*OrientationInterpolator2695);

COrientationInterpolator* OrientationInterpolator2696 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2696->setDEF("Run_l_acromioclavicular_RollInterpolator");
OrientationInterpolator2696->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2696->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2674->addChildren(*OrientationInterpolator2696);

COrientationInterpolator* OrientationInterpolator2697 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2697->setDEF("Run_r_sternoclavicular_RollInterpolator");
OrientationInterpolator2697->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2697->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2674->addChildren(*OrientationInterpolator2697);

COrientationInterpolator* OrientationInterpolator2698 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2698->setDEF("Run_r_acromioclavicular_RollInterpolator");
OrientationInterpolator2698->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2698->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2674->addChildren(*OrientationInterpolator2698);

COrientationInterpolator* OrientationInterpolator2699 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2699->setDEF("Run_sacroiliac_YawInterpolator");
OrientationInterpolator2699->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2699->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2674->addChildren(*OrientationInterpolator2699);

COrientationInterpolator* OrientationInterpolator2700 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2700->setDEF("Run_vl5_YawInterpolator");
OrientationInterpolator2700->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1});
OrientationInterpolator2700->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2674->addChildren(*OrientationInterpolator2700);

COrientationInterpolator* OrientationInterpolator2701 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2701->setDEF("Run_vc6_YawInterpolator");
OrientationInterpolator2701->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1});
OrientationInterpolator2701->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2674->addChildren(*OrientationInterpolator2701);

COrientationInterpolator* OrientationInterpolator2702 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2702->setDEF("Run_l_thumb1_PitchInterpolator");
OrientationInterpolator2702->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2702->setKeyValue(new float[24]{1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0});
Group2674->addChildren(*OrientationInterpolator2702);

COrientationInterpolator* OrientationInterpolator2703 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2703->setDEF("Run_r_thumb1_PitchInterpolator");
OrientationInterpolator2703->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2703->setKeyValue(new float[24]{1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0});
Group2674->addChildren(*OrientationInterpolator2703);

CROUTE* ROUTE2704 = new CROUTE();
ROUTE2704->setFromField("fraction_changed");
ROUTE2704->setFromNode("RunTimer");
ROUTE2704->setToField("set_fraction");
ROUTE2704->setToNode("Run_r_ankle_RotationInterpolator_Run");
Group2674->addChildren(*ROUTE2704);

CROUTE* ROUTE2705 = new CROUTE();
ROUTE2705->setFromField("fraction_changed");
ROUTE2705->setFromNode("RunTimer");
ROUTE2705->setToField("set_fraction");
ROUTE2705->setToNode("Run_r_knee_RotationInterpolator_Run");
Group2674->addChildren(*ROUTE2705);

CROUTE* ROUTE2706 = new CROUTE();
ROUTE2706->setFromField("fraction_changed");
ROUTE2706->setFromNode("RunTimer");
ROUTE2706->setToField("set_fraction");
ROUTE2706->setToNode("Run_r_hip_RotationInterpolator_Run");
Group2674->addChildren(*ROUTE2706);

CROUTE* ROUTE2707 = new CROUTE();
ROUTE2707->setFromField("fraction_changed");
ROUTE2707->setFromNode("RunTimer");
ROUTE2707->setToField("set_fraction");
ROUTE2707->setToNode("Run_l_ankle_RotationInterpolator_Run");
Group2674->addChildren(*ROUTE2707);

CROUTE* ROUTE2708 = new CROUTE();
ROUTE2708->setFromField("fraction_changed");
ROUTE2708->setFromNode("RunTimer");
ROUTE2708->setToField("set_fraction");
ROUTE2708->setToNode("Run_l_knee_RotationInterpolator_Run");
Group2674->addChildren(*ROUTE2708);

CROUTE* ROUTE2709 = new CROUTE();
ROUTE2709->setFromField("fraction_changed");
ROUTE2709->setFromNode("RunTimer");
ROUTE2709->setToField("set_fraction");
ROUTE2709->setToNode("Run_l_hip_RotationInterpolator_Run");
Group2674->addChildren(*ROUTE2709);

CROUTE* ROUTE2710 = new CROUTE();
ROUTE2710->setFromField("fraction_changed");
ROUTE2710->setFromNode("RunTimer");
ROUTE2710->setToField("set_fraction");
ROUTE2710->setToNode("Run_lower_body_RotationInterpolator_Run");
Group2674->addChildren(*ROUTE2710);

CROUTE* ROUTE2711 = new CROUTE();
ROUTE2711->setFromField("fraction_changed");
ROUTE2711->setFromNode("RunTimer");
ROUTE2711->setToField("set_fraction");
ROUTE2711->setToNode("Run_r_wrist_RotationInterpolator_Run");
Group2674->addChildren(*ROUTE2711);

CROUTE* ROUTE2712 = new CROUTE();
ROUTE2712->setFromField("fraction_changed");
ROUTE2712->setFromNode("RunTimer");
ROUTE2712->setToField("set_fraction");
ROUTE2712->setToNode("Run_r_elbow_RotationInterpolator_Run");
Group2674->addChildren(*ROUTE2712);

CROUTE* ROUTE2713 = new CROUTE();
ROUTE2713->setFromField("fraction_changed");
ROUTE2713->setFromNode("RunTimer");
ROUTE2713->setToField("set_fraction");
ROUTE2713->setToNode("Run_r_shoulder_RotationInterpolator_Run");
Group2674->addChildren(*ROUTE2713);

CROUTE* ROUTE2714 = new CROUTE();
ROUTE2714->setFromField("fraction_changed");
ROUTE2714->setFromNode("RunTimer");
ROUTE2714->setToField("set_fraction");
ROUTE2714->setToNode("Run_l_wrist_RotationInterpolator_Run");
Group2674->addChildren(*ROUTE2714);

CROUTE* ROUTE2715 = new CROUTE();
ROUTE2715->setFromField("fraction_changed");
ROUTE2715->setFromNode("RunTimer");
ROUTE2715->setToField("set_fraction");
ROUTE2715->setToNode("Run_l_elbow_RotationInterpolator_Run");
Group2674->addChildren(*ROUTE2715);

CROUTE* ROUTE2716 = new CROUTE();
ROUTE2716->setFromField("fraction_changed");
ROUTE2716->setFromNode("RunTimer");
ROUTE2716->setToField("set_fraction");
ROUTE2716->setToNode("Run_l_shoulder_RotationInterpolator_Run");
Group2674->addChildren(*ROUTE2716);

CROUTE* ROUTE2717 = new CROUTE();
ROUTE2717->setFromField("fraction_changed");
ROUTE2717->setFromNode("RunTimer");
ROUTE2717->setToField("set_fraction");
ROUTE2717->setToNode("Run_head_RotationInterpolator_Run");
Group2674->addChildren(*ROUTE2717);

CROUTE* ROUTE2718 = new CROUTE();
ROUTE2718->setFromField("fraction_changed");
ROUTE2718->setFromNode("RunTimer");
ROUTE2718->setToField("set_fraction");
ROUTE2718->setToNode("Run_neck_RotationInterpolator_Run");
Group2674->addChildren(*ROUTE2718);

CROUTE* ROUTE2719 = new CROUTE();
ROUTE2719->setFromField("fraction_changed");
ROUTE2719->setFromNode("RunTimer");
ROUTE2719->setToField("set_fraction");
ROUTE2719->setToNode("Run_upper_body_RotationInterpolator_Run");
Group2674->addChildren(*ROUTE2719);

CROUTE* ROUTE2720 = new CROUTE();
ROUTE2720->setFromField("fraction_changed");
ROUTE2720->setFromNode("RunTimer");
ROUTE2720->setToField("set_fraction");
ROUTE2720->setToNode("Run_whole_body_RotationInterpolator_Run");
Group2674->addChildren(*ROUTE2720);

CROUTE* ROUTE2721 = new CROUTE();
ROUTE2721->setFromField("fraction_changed");
ROUTE2721->setFromNode("RunTimer");
ROUTE2721->setToField("set_fraction");
ROUTE2721->setToNode("Run_whole_body_TranslationInterpolator_Run");
Group2674->addChildren(*ROUTE2721);

CROUTE* ROUTE2722 = new CROUTE();
ROUTE2722->setFromField("fraction_changed");
ROUTE2722->setFromNode("RunTimer");
ROUTE2722->setToField("set_fraction");
ROUTE2722->setToNode("Run_l_sternoclavicular_RollInterpolator");
Group2674->addChildren(*ROUTE2722);

CROUTE* ROUTE2723 = new CROUTE();
ROUTE2723->setFromField("fraction_changed");
ROUTE2723->setFromNode("RunTimer");
ROUTE2723->setToField("set_fraction");
ROUTE2723->setToNode("Run_l_acromioclavicular_RollInterpolator");
Group2674->addChildren(*ROUTE2723);

CROUTE* ROUTE2724 = new CROUTE();
ROUTE2724->setFromField("fraction_changed");
ROUTE2724->setFromNode("RunTimer");
ROUTE2724->setToField("set_fraction");
ROUTE2724->setToNode("Run_r_sternoclavicular_RollInterpolator");
Group2674->addChildren(*ROUTE2724);

CROUTE* ROUTE2725 = new CROUTE();
ROUTE2725->setFromField("fraction_changed");
ROUTE2725->setFromNode("RunTimer");
ROUTE2725->setToField("set_fraction");
ROUTE2725->setToNode("Run_r_acromioclavicular_RollInterpolator");
Group2674->addChildren(*ROUTE2725);

CROUTE* ROUTE2726 = new CROUTE();
ROUTE2726->setFromField("fraction_changed");
ROUTE2726->setFromNode("RunTimer");
ROUTE2726->setToField("set_fraction");
ROUTE2726->setToNode("Run_r_metatarsal_PitchInterpolator");
Group2674->addChildren(*ROUTE2726);

CROUTE* ROUTE2727 = new CROUTE();
ROUTE2727->setFromField("fraction_changed");
ROUTE2727->setFromNode("RunTimer");
ROUTE2727->setToField("set_fraction");
ROUTE2727->setToNode("Run_sacroiliac_YawInterpolator");
Group2674->addChildren(*ROUTE2727);

CROUTE* ROUTE2728 = new CROUTE();
ROUTE2728->setFromField("fraction_changed");
ROUTE2728->setFromNode("RunTimer");
ROUTE2728->setToField("set_fraction");
ROUTE2728->setToNode("Run_vl5_YawInterpolator");
Group2674->addChildren(*ROUTE2728);

CROUTE* ROUTE2729 = new CROUTE();
ROUTE2729->setFromField("fraction_changed");
ROUTE2729->setFromNode("RunTimer");
ROUTE2729->setToField("set_fraction");
ROUTE2729->setToNode("Run_vc6_YawInterpolator");
Group2674->addChildren(*ROUTE2729);

CROUTE* ROUTE2730 = new CROUTE();
ROUTE2730->setFromField("fraction_changed");
ROUTE2730->setFromNode("RunTimer");
ROUTE2730->setToField("set_fraction");
ROUTE2730->setToNode("Run_l_thumb1_PitchInterpolator");
Group2674->addChildren(*ROUTE2730);

CROUTE* ROUTE2731 = new CROUTE();
ROUTE2731->setFromField("fraction_changed");
ROUTE2731->setFromNode("RunTimer");
ROUTE2731->setToField("set_fraction");
ROUTE2731->setToNode("Run_r_thumb1_PitchInterpolator");
Group2674->addChildren(*ROUTE2731);

CROUTE* ROUTE2732 = new CROUTE();
ROUTE2732->setFromField("value_changed");
ROUTE2732->setFromNode("Run_r_ankle_RotationInterpolator_Run");
ROUTE2732->setToField("rotation");
ROUTE2732->setToNode("hanim_r_ankle");
Group2674->addChildren(*ROUTE2732);

CROUTE* ROUTE2733 = new CROUTE();
ROUTE2733->setFromField("value_changed");
ROUTE2733->setFromNode("Run_r_knee_RotationInterpolator_Run");
ROUTE2733->setToField("rotation");
ROUTE2733->setToNode("hanim_r_knee");
Group2674->addChildren(*ROUTE2733);

CROUTE* ROUTE2734 = new CROUTE();
ROUTE2734->setFromField("value_changed");
ROUTE2734->setFromNode("Run_r_hip_RotationInterpolator_Run");
ROUTE2734->setToField("rotation");
ROUTE2734->setToNode("hanim_r_hip");
Group2674->addChildren(*ROUTE2734);

CROUTE* ROUTE2735 = new CROUTE();
ROUTE2735->setFromField("value_changed");
ROUTE2735->setFromNode("Run_l_ankle_RotationInterpolator_Run");
ROUTE2735->setToField("rotation");
ROUTE2735->setToNode("hanim_l_ankle");
Group2674->addChildren(*ROUTE2735);

CROUTE* ROUTE2736 = new CROUTE();
ROUTE2736->setFromField("value_changed");
ROUTE2736->setFromNode("Run_l_knee_RotationInterpolator_Run");
ROUTE2736->setToField("rotation");
ROUTE2736->setToNode("hanim_l_knee");
Group2674->addChildren(*ROUTE2736);

CROUTE* ROUTE2737 = new CROUTE();
ROUTE2737->setFromField("value_changed");
ROUTE2737->setFromNode("Run_l_hip_RotationInterpolator_Run");
ROUTE2737->setToField("rotation");
ROUTE2737->setToNode("hanim_l_hip");
Group2674->addChildren(*ROUTE2737);

CROUTE* ROUTE2738 = new CROUTE();
ROUTE2738->setFromField("value_changed");
ROUTE2738->setFromNode("Run_r_wrist_RotationInterpolator_Run");
ROUTE2738->setToField("rotation");
ROUTE2738->setToNode("hanim_r_wrist");
Group2674->addChildren(*ROUTE2738);

CROUTE* ROUTE2739 = new CROUTE();
ROUTE2739->setFromField("value_changed");
ROUTE2739->setFromNode("Run_r_elbow_RotationInterpolator_Run");
ROUTE2739->setToField("rotation");
ROUTE2739->setToNode("hanim_r_elbow");
Group2674->addChildren(*ROUTE2739);

CROUTE* ROUTE2740 = new CROUTE();
ROUTE2740->setFromField("value_changed");
ROUTE2740->setFromNode("Run_r_shoulder_RotationInterpolator_Run");
ROUTE2740->setToField("rotation");
ROUTE2740->setToNode("hanim_r_shoulder");
Group2674->addChildren(*ROUTE2740);

CROUTE* ROUTE2741 = new CROUTE();
ROUTE2741->setFromField("value_changed");
ROUTE2741->setFromNode("Run_l_wrist_RotationInterpolator_Run");
ROUTE2741->setToField("rotation");
ROUTE2741->setToNode("hanim_l_wrist");
Group2674->addChildren(*ROUTE2741);

CROUTE* ROUTE2742 = new CROUTE();
ROUTE2742->setFromField("value_changed");
ROUTE2742->setFromNode("Run_l_elbow_RotationInterpolator_Run");
ROUTE2742->setToField("rotation");
ROUTE2742->setToNode("hanim_l_elbow");
Group2674->addChildren(*ROUTE2742);

CROUTE* ROUTE2743 = new CROUTE();
ROUTE2743->setFromField("value_changed");
ROUTE2743->setFromNode("Run_l_shoulder_RotationInterpolator_Run");
ROUTE2743->setToField("rotation");
ROUTE2743->setToNode("hanim_l_shoulder");
Group2674->addChildren(*ROUTE2743);

CROUTE* ROUTE2744 = new CROUTE();
ROUTE2744->setFromField("value_changed");
ROUTE2744->setFromNode("Run_lower_body_RotationInterpolator_Run");
ROUTE2744->setToField("rotation");
ROUTE2744->setToNode("hanim_sacroiliac");
Group2674->addChildren(*ROUTE2744);

CROUTE* ROUTE2745 = new CROUTE();
ROUTE2745->setFromField("value_changed");
ROUTE2745->setFromNode("Run_head_RotationInterpolator_Run");
ROUTE2745->setToField("rotation");
ROUTE2745->setToNode("hanim_skullbase");
Group2674->addChildren(*ROUTE2745);

CROUTE* ROUTE2746 = new CROUTE();
ROUTE2746->setFromField("value_changed");
ROUTE2746->setFromNode("Run_neck_RotationInterpolator_Run");
ROUTE2746->setToField("rotation");
ROUTE2746->setToNode("hanim_vc4");
Group2674->addChildren(*ROUTE2746);

CROUTE* ROUTE2747 = new CROUTE();
ROUTE2747->setFromField("value_changed");
ROUTE2747->setFromNode("Run_upper_body_RotationInterpolator_Run");
ROUTE2747->setToField("rotation");
ROUTE2747->setToNode("hanim_vl1");
Group2674->addChildren(*ROUTE2747);

CROUTE* ROUTE2748 = new CROUTE();
ROUTE2748->setFromField("value_changed");
ROUTE2748->setFromNode("Run_whole_body_RotationInterpolator_Run");
ROUTE2748->setToField("rotation");
ROUTE2748->setToNode("hanim_humanoid_root");
Group2674->addChildren(*ROUTE2748);

CROUTE* ROUTE2749 = new CROUTE();
ROUTE2749->setFromField("value_changed");
ROUTE2749->setFromNode("Run_whole_body_TranslationInterpolator_Run");
ROUTE2749->setToField("translation");
ROUTE2749->setToNode("hanim_humanoid_root");
Group2674->addChildren(*ROUTE2749);

CROUTE* ROUTE2750 = new CROUTE();
ROUTE2750->setFromField("value_changed");
ROUTE2750->setFromNode("Run_l_sternoclavicular_RollInterpolator");
ROUTE2750->setToField("rotation");
ROUTE2750->setToNode("hanim_l_sternoclavicular");
Group2674->addChildren(*ROUTE2750);

CROUTE* ROUTE2751 = new CROUTE();
ROUTE2751->setFromField("value_changed");
ROUTE2751->setFromNode("Run_l_acromioclavicular_RollInterpolator");
ROUTE2751->setToField("rotation");
ROUTE2751->setToNode("hanim_l_acromioclavicular");
Group2674->addChildren(*ROUTE2751);

CROUTE* ROUTE2752 = new CROUTE();
ROUTE2752->setFromField("value_changed");
ROUTE2752->setFromNode("Run_r_sternoclavicular_RollInterpolator");
ROUTE2752->setToField("rotation");
ROUTE2752->setToNode("hanim_r_sternoclavicular");
Group2674->addChildren(*ROUTE2752);

CROUTE* ROUTE2753 = new CROUTE();
ROUTE2753->setFromField("value_changed");
ROUTE2753->setFromNode("Run_r_acromioclavicular_RollInterpolator");
ROUTE2753->setToField("rotation");
ROUTE2753->setToNode("hanim_r_acromioclavicular");
Group2674->addChildren(*ROUTE2753);

CROUTE* ROUTE2754 = new CROUTE();
ROUTE2754->setFromField("value_changed");
ROUTE2754->setFromNode("Run_r_metatarsal_PitchInterpolator");
ROUTE2754->setToField("rotation");
ROUTE2754->setToNode("hanim_l_metatarsal");
Group2674->addChildren(*ROUTE2754);

CROUTE* ROUTE2755 = new CROUTE();
ROUTE2755->setFromField("value_changed");
ROUTE2755->setFromNode("Run_r_metatarsal_PitchInterpolator");
ROUTE2755->setToField("rotation");
ROUTE2755->setToNode("hanim_r_metatarsal");
Group2674->addChildren(*ROUTE2755);

CROUTE* ROUTE2756 = new CROUTE();
ROUTE2756->setFromField("value_changed");
ROUTE2756->setFromNode("Run_sacroiliac_YawInterpolator");
ROUTE2756->setToField("rotation");
ROUTE2756->setToNode("hanim_sacroiliac");
Group2674->addChildren(*ROUTE2756);

CROUTE* ROUTE2757 = new CROUTE();
ROUTE2757->setFromField("value_changed");
ROUTE2757->setFromNode("Run_vl5_YawInterpolator");
ROUTE2757->setToField("rotation");
ROUTE2757->setToNode("hanim_vl5");
Group2674->addChildren(*ROUTE2757);

CROUTE* ROUTE2758 = new CROUTE();
ROUTE2758->setFromField("value_changed");
ROUTE2758->setFromNode("Run_vc6_YawInterpolator");
ROUTE2758->setToField("rotation");
ROUTE2758->setToNode("hanim_vc6");
Group2674->addChildren(*ROUTE2758);

CROUTE* ROUTE2759 = new CROUTE();
ROUTE2759->setFromField("value_changed");
ROUTE2759->setFromNode("Run_l_thumb1_PitchInterpolator");
ROUTE2759->setToField("rotation");
ROUTE2759->setToNode("hanim_l_thumb1");
Group2674->addChildren(*ROUTE2759);

CROUTE* ROUTE2760 = new CROUTE();
ROUTE2760->setFromField("value_changed");
ROUTE2760->setFromNode("Run_r_thumb1_PitchInterpolator");
ROUTE2760->setToField("rotation");
ROUTE2760->setToNode("hanim_r_thumb1");
Group2674->addChildren(*ROUTE2760);

group->addChildren(*Group2674);

CGroup* Group2761 = (CGroup *)(m_pScene.createNode("Group"));
Group2761->setDEF("JumpAnimation");
CTimeSensor* TimeSensor2762 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor2762->setDEF("JumpTimer");
TimeSensor2762->setCycleInterval(3.73);
TimeSensor2762->setLoop(True);
Group2761->addChildren(*TimeSensor2762);

COrientationInterpolator* OrientationInterpolator2763 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2763->setDEF("Jump_r_metatarsal_PitchInterpolator");
OrientationInterpolator2763->setKey(new float[6]{0,0.2,0.4,0.6,0.7,1});
OrientationInterpolator2763->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2761->addChildren(*OrientationInterpolator2763);

COrientationInterpolator* OrientationInterpolator2764 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2764->setDEF("Jump_r_ankle_RotationInterpolator");
OrientationInterpolator2764->setKey(new float[14]{0,0.1,0.15,0.25,0.28,0.32,0.35,0.64,0.76,0.84,0.88,0.92,0.96,1});
OrientationInterpolator2764->setKeyValue(new float[56]{0,0,1,0,-1,0,0,0.6735,-1,0,0,0.6735,-1,0,0,0.3527,-1,0,0,0.3038,-1,0,0,0.07964,1,0,0,1.3,1,0,0,0.6509,1,0,0,0.3001,-1,0,0,0.2087,-1,0,0,0.3756,-1,0,0,0.3279,-1,0,0,0.1193,0,0,1,0});
Group2761->addChildren(*OrientationInterpolator2764);

COrientationInterpolator* OrientationInterpolator2765 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2765->setDEF("Jump_r_knee_RotationInterpolator");
OrientationInterpolator2765->setKey(new float[8]{0,0.2,0.25,0.3,0.64,0.76,0.88,1});
OrientationInterpolator2765->setKeyValue(new float[32]{0,0,1,0,1,0,0,2.5,1,0,0,1.7,0,0,1,0,1,0,0,0.9507,1,0,0,0.5845,1,0,0,0.9054,0,0,1,0});
Group2761->addChildren(*OrientationInterpolator2765);

COrientationInterpolator* OrientationInterpolator2766 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2766->setDEF("Jump_r_hip_RotationInterpolator");
OrientationInterpolator2766->setKey(new float[11]{0,0.18,0.24,0.26,0.28,0.32,0.48,0.64,0.76,0.88,1});
OrientationInterpolator2766->setKeyValue(new float[44]{0,0,1,0,-1,0,0,1.63,-1,0,0,1.7,-1,0,0,1.55,-1,0,0,0.8943,-1,0,0,0.3698,0,0,1,0,-1,0,0,0.4963,-1,0,0,0.3829,-1,0,0,0.5169,0,0,1,0});
Group2761->addChildren(*OrientationInterpolator2766);

COrientationInterpolator* OrientationInterpolator2767 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2767->setDEF("Jump_l_ankle_RotationInterpolator");
OrientationInterpolator2767->setKey(new float[14]{0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1});
OrientationInterpolator2767->setKeyValue(new float[56]{0,0,1,0,-1,0,0,0.625,-1,0,0,0.625,-1,0,0,0.3364,-1,0,0,0.2742,-1,0,0,0.05078,1,0,0,0.2833,1,0,0,0.6667,1,0,0,0.2833,-1,0,0,0.2108,-1,0,0,0.375,-1,0,0,0.3146,-1,0,0,0.1174,0,0,1,0});
Group2761->addChildren(*OrientationInterpolator2767);

COrientationInterpolator* OrientationInterpolator2768 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2768->setDEF("Jump_l_knee_RotationInterpolator");
OrientationInterpolator2768->setKey(new float[8]{0,0.28,0.32,0.48,0.64,0.76,0.88,1});
OrientationInterpolator2768->setKeyValue(new float[32]{0,0,1,0,1,0,0,2.047,1,0,0,2.047,0,0,1,0,1,0,0,1.566,1,0,0,0.5913,1,0,0,0.9235,0,0,1,0});
Group2761->addChildren(*OrientationInterpolator2768);

COrientationInterpolator* OrientationInterpolator2769 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2769->setDEF("Jump_l_hip_RotationInterpolator");
OrientationInterpolator2769->setKey(new float[11]{0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1});
OrientationInterpolator2769->setKeyValue(new float[44]{0,0,1,0,1,0,0,4.349,1,0,0,4.349,1,0,0,4.615,-1,0,0,0.9136,-1,0,0,0.3614,0,0,1,0,-1,0,0,0.7869,-1,0,0,0.3918,-1,0,0,0.5433,0,0,1,0});
Group2761->addChildren(*OrientationInterpolator2769);

COrientationInterpolator* OrientationInterpolator2770 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2770->setDEF("Jump_lower_body_RotationInterpolator");
OrientationInterpolator2770->setKey(new float[6]{0,0.28,0.32,0.48,0.76,1});
OrientationInterpolator2770->setKeyValue(new float[24]{0,0,1,0,1,0,0,0.1892,1,0,0,0.1892,0,0,1,0,0,0,1,0,0,0,1,0});
Group2761->addChildren(*OrientationInterpolator2770);

COrientationInterpolator* OrientationInterpolator2771 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2771->setDEF("Jump_r_wrist_RotationInterpolator");
OrientationInterpolator2771->setKey(new float[6]{0,0.28,0.32,0.64,0.76,1});
OrientationInterpolator2771->setKeyValue(new float[24]{0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0});
Group2761->addChildren(*OrientationInterpolator2771);

COrientationInterpolator* OrientationInterpolator2772 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2772->setDEF("Jump_r_elbow_RotationInterpolator");
OrientationInterpolator2772->setKey(new float[6]{0,0.28,0.32,0.64,0.76,1});
OrientationInterpolator2772->setKeyValue(new float[24]{0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0});
Group2761->addChildren(*OrientationInterpolator2772);

COrientationInterpolator* OrientationInterpolator2773 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2773->setDEF("Jump_r_shoulder_RotationInterpolator");
OrientationInterpolator2773->setKey(new float[7]{0,0.28,0.32,0.64,0.76,0.88,1});
OrientationInterpolator2773->setKeyValue(new float[28]{0,0,1,0,0.9992,0.02042,0.03558,4.688,0.9992,0.02042,0.03558,4.688,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0});
Group2761->addChildren(*OrientationInterpolator2773);

COrientationInterpolator* OrientationInterpolator2774 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2774->setDEF("Jump_l_wrist_RotationInterpolator");
OrientationInterpolator2774->setKey(new float[7]{0,0.48,0.52,0.64,0.76,0.88,1});
OrientationInterpolator2774->setKeyValue(new float[28]{0,0,1,0,0.0672928,0.989475,-0.128107,4.15574,0.0672928,0.989475,-0.128107,4.15574,0.00364942,0.999901,0.0135896,4.5822,0,-1,0,0.655922,-0.00050618,-0.999999,0.0012782,1.28397,0,0,1,0});
Group2761->addChildren(*OrientationInterpolator2774);

COrientationInterpolator* OrientationInterpolator2775 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2775->setDEF("Jump_l_elbow_RotationInterpolator");
OrientationInterpolator2775->setKey(new float[6]{0,0.28,0.32,0.58,0.72,1});
OrientationInterpolator2775->setKeyValue(new float[24]{0,0,1,0,-1,0,0,1.13,-1,0,0,1.7,-1,0,0,1.7,-1,0,0,0.4,0,0,1,0});
Group2761->addChildren(*OrientationInterpolator2775);

COrientationInterpolator* OrientationInterpolator2776 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2776->setDEF("Jump_l_shoulder_RotationInterpolator");
OrientationInterpolator2776->setKey(new float[7]{0,0.28,0.32,0.64,0.76,0.88,1});
OrientationInterpolator2776->setKeyValue(new float[28]{0,0,1,0,-0.9987,0.02554,0.04498,1.57,-0.9987,0.02554,0.04498,1.57,1,0.0004113,0.003055,4.114,-0.8413,0.3238,0.4329,1.453,-0.877,0.4198,0.2337,0.6009,0,0,1,0});
Group2761->addChildren(*OrientationInterpolator2776);

COrientationInterpolator* OrientationInterpolator2777 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2777->setDEF("Jump_head_RotationInterpolator");
OrientationInterpolator2777->setKey(new float[6]{0,0.28,0.32,0.48,0.76,1});
OrientationInterpolator2777->setKeyValue(new float[24]{0,0,1,0,-1,0,0,0.5989,-1,0,0,0.5989,-1,0,0,0.3216,1,0,0,0.06503,0,0,1,0});
Group2761->addChildren(*OrientationInterpolator2777);

COrientationInterpolator* OrientationInterpolator2778 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2778->setDEF("Jump_neck_RotationInterpolator");
OrientationInterpolator2778->setKey(new float[6]{0,0.28,0.32,0.48,0.76,1});
OrientationInterpolator2778->setKeyValue(new float[24]{0,0,1,0,-1,0,0,0.1942,-1,0,0,0.1942,0,0,1,0,1,0,0,0.2284,0,0,1,0});
Group2761->addChildren(*OrientationInterpolator2778);

COrientationInterpolator* OrientationInterpolator2779 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2779->setDEF("Jump_upper_body_RotationInterpolator");
OrientationInterpolator2779->setKey(new float[7]{0,0.22,0.28,0.34,0.71,0.88,1});
OrientationInterpolator2779->setKeyValue(new float[28]{0,0,1,0,1,0,0,1.05,1,0,0,1.051,-1,0,0,0.257,1,0,0,0.2171,1,0,0,0.3465,0,0,1,0});
Group2761->addChildren(*OrientationInterpolator2779);

COrientationInterpolator* OrientationInterpolator2780 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2780->setDEF("Jump_whole_body_RotationInterpolator");
OrientationInterpolator2780->setKey(new float[7]{0,0.28,0.32,0.48,0.64,0.76,1});
OrientationInterpolator2780->setKeyValue(new float[28]{0,0,1,0,1,0,0,0.3273,1,0,0,0.3273,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2761->addChildren(*OrientationInterpolator2780);

CPositionInterpolator* PositionInterpolator2781 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator2781->setDEF("Jump_whole_body_TranslationInterpolator");
PositionInterpolator2781->setKey(new float[22]{0,0.04,0.07,0.11,0.15,0.19,0.22,0.25,0.27,0.31,0.33,0.35,0.38,0.53,0.544,0.76,0.8,0.84,0.88,0.92,0.96,1});
PositionInterpolator2781->setKeyValue(new float[66]{0,0,0,0,-0.01264,-0.01289,0,-0.04712,-0.03738,-0.0003345,-0.1049,-0.05353,-0.0005712,-0.1892,-0.06561,-0.0008233,-0.286,-0.06276,-0.0009591,-0.3795,-0.05148,-0.00106,-0.4484,-0.03656,-0.00106,-0.4484,-0.03656,-0.001122,-0.25,-0.1499,-0.0008616,-0.05,-0.06358,-0.0005128,0.15,-0.05488,0.0004779,0.55,0.02732,0.0001728,1.385,0.006873,0.00017,1.395,0.0069,0,0.35,0.02148,0,-0.01299,-0.01057,0,-0.06932,-0.01064,0.0001365,-0.1037,-0.005059,0.0001279,-0.07198,-0.007596,0.000141,-0.01626,-0.004935,0,0,0});
Group2761->addChildren(*PositionInterpolator2781);

COrientationInterpolator* OrientationInterpolator2782 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2782->setDEF("Jump_l_sternoclavicular_RollInterpolator");
OrientationInterpolator2782->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2782->setKeyValue(new float[24]{0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0});
Group2761->addChildren(*OrientationInterpolator2782);

COrientationInterpolator* OrientationInterpolator2783 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2783->setDEF("Jump_l_acromioclavicular_RollInterpolator");
OrientationInterpolator2783->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2783->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0});
Group2761->addChildren(*OrientationInterpolator2783);

COrientationInterpolator* OrientationInterpolator2784 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2784->setDEF("Jump_r_sternoclavicular_RollInterpolator");
OrientationInterpolator2784->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2784->setKeyValue(new float[24]{0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0});
Group2761->addChildren(*OrientationInterpolator2784);

COrientationInterpolator* OrientationInterpolator2785 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2785->setDEF("Jump_r_acromioclavicular_RollInterpolator");
OrientationInterpolator2785->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2785->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0});
Group2761->addChildren(*OrientationInterpolator2785);

COrientationInterpolator* OrientationInterpolator2786 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2786->setDEF("Jump_sacroiliac_YawInterpolator");
OrientationInterpolator2786->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2786->setKeyValue(new float[24]{0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0});
Group2761->addChildren(*OrientationInterpolator2786);

COrientationInterpolator* OrientationInterpolator2787 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2787->setDEF("Jump_vl5_YawInterpolator");
OrientationInterpolator2787->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1});
OrientationInterpolator2787->setKeyValue(new float[28]{0,1,0,0,0,1,0,-0.1,0,1,0,0,0,1,0,0,1,0,0,0.6,0,1,0,0.1,0,1,0,0});
Group2761->addChildren(*OrientationInterpolator2787);

COrientationInterpolator* OrientationInterpolator2788 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2788->setDEF("Jump_vc6_YawInterpolator");
OrientationInterpolator2788->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1});
OrientationInterpolator2788->setKeyValue(new float[28]{0,1,0,0,0,1,0,0.8,0,1,0,0,0,1,0,0,-1,0,0,0.6,0,-1,0,0.8,0,1,0,0});
Group2761->addChildren(*OrientationInterpolator2788);

COrientationInterpolator* OrientationInterpolator2789 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2789->setDEF("Jump_l_thumb1_PitchInterpolator");
OrientationInterpolator2789->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2789->setKeyValue(new float[24]{1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0});
Group2761->addChildren(*OrientationInterpolator2789);

COrientationInterpolator* OrientationInterpolator2790 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2790->setDEF("Jump_r_thumb1_PitchInterpolator");
OrientationInterpolator2790->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2790->setKeyValue(new float[24]{1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0});
Group2761->addChildren(*OrientationInterpolator2790);

CROUTE* ROUTE2791 = new CROUTE();
ROUTE2791->setFromField("fraction_changed");
ROUTE2791->setFromNode("JumpTimer");
ROUTE2791->setToField("set_fraction");
ROUTE2791->setToNode("Jump_r_ankle_RotationInterpolator");
Group2761->addChildren(*ROUTE2791);

CROUTE* ROUTE2792 = new CROUTE();
ROUTE2792->setFromField("fraction_changed");
ROUTE2792->setFromNode("JumpTimer");
ROUTE2792->setToField("set_fraction");
ROUTE2792->setToNode("Jump_r_knee_RotationInterpolator");
Group2761->addChildren(*ROUTE2792);

CROUTE* ROUTE2793 = new CROUTE();
ROUTE2793->setFromField("fraction_changed");
ROUTE2793->setFromNode("JumpTimer");
ROUTE2793->setToField("set_fraction");
ROUTE2793->setToNode("Jump_r_hip_RotationInterpolator");
Group2761->addChildren(*ROUTE2793);

CROUTE* ROUTE2794 = new CROUTE();
ROUTE2794->setFromField("fraction_changed");
ROUTE2794->setFromNode("JumpTimer");
ROUTE2794->setToField("set_fraction");
ROUTE2794->setToNode("Jump_l_ankle_RotationInterpolator");
Group2761->addChildren(*ROUTE2794);

CROUTE* ROUTE2795 = new CROUTE();
ROUTE2795->setFromField("fraction_changed");
ROUTE2795->setFromNode("JumpTimer");
ROUTE2795->setToField("set_fraction");
ROUTE2795->setToNode("Jump_l_knee_RotationInterpolator");
Group2761->addChildren(*ROUTE2795);

CROUTE* ROUTE2796 = new CROUTE();
ROUTE2796->setFromField("fraction_changed");
ROUTE2796->setFromNode("JumpTimer");
ROUTE2796->setToField("set_fraction");
ROUTE2796->setToNode("Jump_l_hip_RotationInterpolator");
Group2761->addChildren(*ROUTE2796);

CROUTE* ROUTE2797 = new CROUTE();
ROUTE2797->setFromField("fraction_changed");
ROUTE2797->setFromNode("JumpTimer");
ROUTE2797->setToField("set_fraction");
ROUTE2797->setToNode("Jump_lower_body_RotationInterpolator");
Group2761->addChildren(*ROUTE2797);

CROUTE* ROUTE2798 = new CROUTE();
ROUTE2798->setFromField("fraction_changed");
ROUTE2798->setFromNode("JumpTimer");
ROUTE2798->setToField("set_fraction");
ROUTE2798->setToNode("Jump_r_wrist_RotationInterpolator");
Group2761->addChildren(*ROUTE2798);

CROUTE* ROUTE2799 = new CROUTE();
ROUTE2799->setFromField("fraction_changed");
ROUTE2799->setFromNode("JumpTimer");
ROUTE2799->setToField("set_fraction");
ROUTE2799->setToNode("Jump_r_elbow_RotationInterpolator");
Group2761->addChildren(*ROUTE2799);

CROUTE* ROUTE2800 = new CROUTE();
ROUTE2800->setFromField("fraction_changed");
ROUTE2800->setFromNode("JumpTimer");
ROUTE2800->setToField("set_fraction");
ROUTE2800->setToNode("Jump_r_shoulder_RotationInterpolator");
Group2761->addChildren(*ROUTE2800);

CROUTE* ROUTE2801 = new CROUTE();
ROUTE2801->setFromField("fraction_changed");
ROUTE2801->setFromNode("JumpTimer");
ROUTE2801->setToField("set_fraction");
ROUTE2801->setToNode("Jump_l_wrist_RotationInterpolator");
Group2761->addChildren(*ROUTE2801);

CROUTE* ROUTE2802 = new CROUTE();
ROUTE2802->setFromField("fraction_changed");
ROUTE2802->setFromNode("JumpTimer");
ROUTE2802->setToField("set_fraction");
ROUTE2802->setToNode("Jump_l_elbow_RotationInterpolator");
Group2761->addChildren(*ROUTE2802);

CROUTE* ROUTE2803 = new CROUTE();
ROUTE2803->setFromField("fraction_changed");
ROUTE2803->setFromNode("JumpTimer");
ROUTE2803->setToField("set_fraction");
ROUTE2803->setToNode("Jump_l_shoulder_RotationInterpolator");
Group2761->addChildren(*ROUTE2803);

CROUTE* ROUTE2804 = new CROUTE();
ROUTE2804->setFromField("fraction_changed");
ROUTE2804->setFromNode("JumpTimer");
ROUTE2804->setToField("set_fraction");
ROUTE2804->setToNode("Jump_head_RotationInterpolator");
Group2761->addChildren(*ROUTE2804);

CROUTE* ROUTE2805 = new CROUTE();
ROUTE2805->setFromField("fraction_changed");
ROUTE2805->setFromNode("JumpTimer");
ROUTE2805->setToField("set_fraction");
ROUTE2805->setToNode("Jump_neck_RotationInterpolator");
Group2761->addChildren(*ROUTE2805);

CROUTE* ROUTE2806 = new CROUTE();
ROUTE2806->setFromField("fraction_changed");
ROUTE2806->setFromNode("JumpTimer");
ROUTE2806->setToField("set_fraction");
ROUTE2806->setToNode("Jump_upper_body_RotationInterpolator");
Group2761->addChildren(*ROUTE2806);

CROUTE* ROUTE2807 = new CROUTE();
ROUTE2807->setFromField("fraction_changed");
ROUTE2807->setFromNode("JumpTimer");
ROUTE2807->setToField("set_fraction");
ROUTE2807->setToNode("Jump_whole_body_RotationInterpolator");
Group2761->addChildren(*ROUTE2807);

CROUTE* ROUTE2808 = new CROUTE();
ROUTE2808->setFromField("fraction_changed");
ROUTE2808->setFromNode("JumpTimer");
ROUTE2808->setToField("set_fraction");
ROUTE2808->setToNode("Jump_whole_body_TranslationInterpolator");
Group2761->addChildren(*ROUTE2808);

CROUTE* ROUTE2809 = new CROUTE();
ROUTE2809->setFromField("fraction_changed");
ROUTE2809->setFromNode("JumpTimer");
ROUTE2809->setToField("set_fraction");
ROUTE2809->setToNode("Jump_l_sternoclavicular_RollInterpolator");
Group2761->addChildren(*ROUTE2809);

CROUTE* ROUTE2810 = new CROUTE();
ROUTE2810->setFromField("fraction_changed");
ROUTE2810->setFromNode("JumpTimer");
ROUTE2810->setToField("set_fraction");
ROUTE2810->setToNode("Jump_l_acromioclavicular_RollInterpolator");
Group2761->addChildren(*ROUTE2810);

CROUTE* ROUTE2811 = new CROUTE();
ROUTE2811->setFromField("fraction_changed");
ROUTE2811->setFromNode("JumpTimer");
ROUTE2811->setToField("set_fraction");
ROUTE2811->setToNode("Jump_r_sternoclavicular_RollInterpolator");
Group2761->addChildren(*ROUTE2811);

CROUTE* ROUTE2812 = new CROUTE();
ROUTE2812->setFromField("fraction_changed");
ROUTE2812->setFromNode("JumpTimer");
ROUTE2812->setToField("set_fraction");
ROUTE2812->setToNode("Jump_r_acromioclavicular_RollInterpolator");
Group2761->addChildren(*ROUTE2812);

CROUTE* ROUTE2813 = new CROUTE();
ROUTE2813->setFromField("fraction_changed");
ROUTE2813->setFromNode("JumpTimer");
ROUTE2813->setToField("set_fraction");
ROUTE2813->setToNode("Jump_r_metatarsal_PitchInterpolator");
Group2761->addChildren(*ROUTE2813);

CROUTE* ROUTE2814 = new CROUTE();
ROUTE2814->setFromField("fraction_changed");
ROUTE2814->setFromNode("JumpTimer");
ROUTE2814->setToField("set_fraction");
ROUTE2814->setToNode("Jump_sacroiliac_YawInterpolator");
Group2761->addChildren(*ROUTE2814);

CROUTE* ROUTE2815 = new CROUTE();
ROUTE2815->setFromField("fraction_changed");
ROUTE2815->setFromNode("JumpTimer");
ROUTE2815->setToField("set_fraction");
ROUTE2815->setToNode("Jump_vl5_YawInterpolator");
Group2761->addChildren(*ROUTE2815);

CROUTE* ROUTE2816 = new CROUTE();
ROUTE2816->setFromField("fraction_changed");
ROUTE2816->setFromNode("JumpTimer");
ROUTE2816->setToField("set_fraction");
ROUTE2816->setToNode("Jump_vc6_YawInterpolator");
Group2761->addChildren(*ROUTE2816);

CROUTE* ROUTE2817 = new CROUTE();
ROUTE2817->setFromField("fraction_changed");
ROUTE2817->setFromNode("JumpTimer");
ROUTE2817->setToField("set_fraction");
ROUTE2817->setToNode("Jump_l_thumb1_PitchInterpolator");
Group2761->addChildren(*ROUTE2817);

CROUTE* ROUTE2818 = new CROUTE();
ROUTE2818->setFromField("fraction_changed");
ROUTE2818->setFromNode("JumpTimer");
ROUTE2818->setToField("set_fraction");
ROUTE2818->setToNode("Jump_r_thumb1_PitchInterpolator");
Group2761->addChildren(*ROUTE2818);

CROUTE* ROUTE2819 = new CROUTE();
ROUTE2819->setFromField("value_changed");
ROUTE2819->setFromNode("Jump_r_ankle_RotationInterpolator");
ROUTE2819->setToField("rotation");
ROUTE2819->setToNode("hanim_r_ankle");
Group2761->addChildren(*ROUTE2819);

CROUTE* ROUTE2820 = new CROUTE();
ROUTE2820->setFromField("value_changed");
ROUTE2820->setFromNode("Jump_r_knee_RotationInterpolator");
ROUTE2820->setToField("rotation");
ROUTE2820->setToNode("hanim_r_knee");
Group2761->addChildren(*ROUTE2820);

CROUTE* ROUTE2821 = new CROUTE();
ROUTE2821->setFromField("value_changed");
ROUTE2821->setFromNode("Jump_r_hip_RotationInterpolator");
ROUTE2821->setToField("rotation");
ROUTE2821->setToNode("hanim_r_hip");
Group2761->addChildren(*ROUTE2821);

CROUTE* ROUTE2822 = new CROUTE();
ROUTE2822->setFromField("value_changed");
ROUTE2822->setFromNode("Jump_l_ankle_RotationInterpolator");
ROUTE2822->setToField("rotation");
ROUTE2822->setToNode("hanim_l_ankle");
Group2761->addChildren(*ROUTE2822);

CROUTE* ROUTE2823 = new CROUTE();
ROUTE2823->setFromField("value_changed");
ROUTE2823->setFromNode("Jump_l_knee_RotationInterpolator");
ROUTE2823->setToField("rotation");
ROUTE2823->setToNode("hanim_l_knee");
Group2761->addChildren(*ROUTE2823);

CROUTE* ROUTE2824 = new CROUTE();
ROUTE2824->setFromField("value_changed");
ROUTE2824->setFromNode("Jump_l_hip_RotationInterpolator");
ROUTE2824->setToField("rotation");
ROUTE2824->setToNode("hanim_l_hip");
Group2761->addChildren(*ROUTE2824);

CROUTE* ROUTE2825 = new CROUTE();
ROUTE2825->setFromField("value_changed");
ROUTE2825->setFromNode("Jump_lower_body_RotationInterpolator");
ROUTE2825->setToField("rotation");
ROUTE2825->setToNode("hanim_sacroiliac");
Group2761->addChildren(*ROUTE2825);

CROUTE* ROUTE2826 = new CROUTE();
ROUTE2826->setFromField("value_changed");
ROUTE2826->setFromNode("Jump_r_wrist_RotationInterpolator");
ROUTE2826->setToField("rotation");
ROUTE2826->setToNode("hanim_r_wrist");
Group2761->addChildren(*ROUTE2826);

CROUTE* ROUTE2827 = new CROUTE();
ROUTE2827->setFromField("value_changed");
ROUTE2827->setFromNode("Jump_r_elbow_RotationInterpolator");
ROUTE2827->setToField("rotation");
ROUTE2827->setToNode("hanim_r_elbow");
Group2761->addChildren(*ROUTE2827);

CROUTE* ROUTE2828 = new CROUTE();
ROUTE2828->setFromField("value_changed");
ROUTE2828->setFromNode("Jump_r_shoulder_RotationInterpolator");
ROUTE2828->setToField("rotation");
ROUTE2828->setToNode("hanim_r_shoulder");
Group2761->addChildren(*ROUTE2828);

CROUTE* ROUTE2829 = new CROUTE();
ROUTE2829->setFromField("value_changed");
ROUTE2829->setFromNode("Jump_l_wrist_RotationInterpolator");
ROUTE2829->setToField("rotation");
ROUTE2829->setToNode("hanim_l_wrist");
Group2761->addChildren(*ROUTE2829);

CROUTE* ROUTE2830 = new CROUTE();
ROUTE2830->setFromField("value_changed");
ROUTE2830->setFromNode("Jump_l_elbow_RotationInterpolator");
ROUTE2830->setToField("rotation");
ROUTE2830->setToNode("hanim_l_elbow");
Group2761->addChildren(*ROUTE2830);

CROUTE* ROUTE2831 = new CROUTE();
ROUTE2831->setFromField("value_changed");
ROUTE2831->setFromNode("Jump_l_shoulder_RotationInterpolator");
ROUTE2831->setToField("rotation");
ROUTE2831->setToNode("hanim_l_shoulder");
Group2761->addChildren(*ROUTE2831);

CROUTE* ROUTE2832 = new CROUTE();
ROUTE2832->setFromField("value_changed");
ROUTE2832->setFromNode("Jump_head_RotationInterpolator");
ROUTE2832->setToField("rotation");
ROUTE2832->setToNode("hanim_skullbase");
Group2761->addChildren(*ROUTE2832);

CROUTE* ROUTE2833 = new CROUTE();
ROUTE2833->setFromField("value_changed");
ROUTE2833->setFromNode("Jump_neck_RotationInterpolator");
ROUTE2833->setToField("rotation");
ROUTE2833->setToNode("hanim_vc4");
Group2761->addChildren(*ROUTE2833);

CROUTE* ROUTE2834 = new CROUTE();
ROUTE2834->setFromField("value_changed");
ROUTE2834->setFromNode("Jump_upper_body_RotationInterpolator");
ROUTE2834->setToField("rotation");
ROUTE2834->setToNode("hanim_vl1");
Group2761->addChildren(*ROUTE2834);

CROUTE* ROUTE2835 = new CROUTE();
ROUTE2835->setFromField("value_changed");
ROUTE2835->setFromNode("Jump_whole_body_RotationInterpolator");
ROUTE2835->setToField("rotation");
ROUTE2835->setToNode("hanim_humanoid_root");
Group2761->addChildren(*ROUTE2835);

CROUTE* ROUTE2836 = new CROUTE();
ROUTE2836->setFromField("value_changed");
ROUTE2836->setFromNode("Jump_whole_body_TranslationInterpolator");
ROUTE2836->setToField("translation");
ROUTE2836->setToNode("hanim_humanoid_root");
Group2761->addChildren(*ROUTE2836);

CROUTE* ROUTE2837 = new CROUTE();
ROUTE2837->setFromField("value_changed");
ROUTE2837->setFromNode("Jump_l_sternoclavicular_RollInterpolator");
ROUTE2837->setToField("rotation");
ROUTE2837->setToNode("hanim_l_sternoclavicular");
Group2761->addChildren(*ROUTE2837);

CROUTE* ROUTE2838 = new CROUTE();
ROUTE2838->setFromField("value_changed");
ROUTE2838->setFromNode("Jump_l_acromioclavicular_RollInterpolator");
ROUTE2838->setToField("rotation");
ROUTE2838->setToNode("hanim_l_acromioclavicular");
Group2761->addChildren(*ROUTE2838);

CROUTE* ROUTE2839 = new CROUTE();
ROUTE2839->setFromField("value_changed");
ROUTE2839->setFromNode("Jump_r_sternoclavicular_RollInterpolator");
ROUTE2839->setToField("rotation");
ROUTE2839->setToNode("hanim_r_sternoclavicular");
Group2761->addChildren(*ROUTE2839);

CROUTE* ROUTE2840 = new CROUTE();
ROUTE2840->setFromField("value_changed");
ROUTE2840->setFromNode("Jump_r_acromioclavicular_RollInterpolator");
ROUTE2840->setToField("rotation");
ROUTE2840->setToNode("hanim_r_acromioclavicular");
Group2761->addChildren(*ROUTE2840);

CROUTE* ROUTE2841 = new CROUTE();
ROUTE2841->setFromField("value_changed");
ROUTE2841->setFromNode("Jump_r_metatarsal_PitchInterpolator");
ROUTE2841->setToField("rotation");
ROUTE2841->setToNode("hanim_l_metatarsal");
Group2761->addChildren(*ROUTE2841);

CROUTE* ROUTE2842 = new CROUTE();
ROUTE2842->setFromField("value_changed");
ROUTE2842->setFromNode("Jump_r_metatarsal_PitchInterpolator");
ROUTE2842->setToField("rotation");
ROUTE2842->setToNode("hanim_r_metatarsal");
Group2761->addChildren(*ROUTE2842);

CROUTE* ROUTE2843 = new CROUTE();
ROUTE2843->setFromField("value_changed");
ROUTE2843->setFromNode("Jump_sacroiliac_YawInterpolator");
ROUTE2843->setToField("rotation");
ROUTE2843->setToNode("hanim_sacroiliac");
Group2761->addChildren(*ROUTE2843);

CROUTE* ROUTE2844 = new CROUTE();
ROUTE2844->setFromField("value_changed");
ROUTE2844->setFromNode("Jump_vl5_YawInterpolator");
ROUTE2844->setToField("rotation");
ROUTE2844->setToNode("hanim_vl5");
Group2761->addChildren(*ROUTE2844);

CROUTE* ROUTE2845 = new CROUTE();
ROUTE2845->setFromField("value_changed");
ROUTE2845->setFromNode("Jump_vc6_YawInterpolator");
ROUTE2845->setToField("rotation");
ROUTE2845->setToNode("hanim_vc6");
Group2761->addChildren(*ROUTE2845);

CROUTE* ROUTE2846 = new CROUTE();
ROUTE2846->setFromField("value_changed");
ROUTE2846->setFromNode("Jump_l_thumb1_PitchInterpolator");
ROUTE2846->setToField("rotation");
ROUTE2846->setToNode("hanim_l_thumb1");
Group2761->addChildren(*ROUTE2846);

CROUTE* ROUTE2847 = new CROUTE();
ROUTE2847->setFromField("value_changed");
ROUTE2847->setFromNode("Jump_r_thumb1_PitchInterpolator");
ROUTE2847->setToField("rotation");
ROUTE2847->setToNode("hanim_r_thumb1");
Group2761->addChildren(*ROUTE2847);

group->addChildren(*Group2761);

CGroup* Group2848 = (CGroup *)(m_pScene.createNode("Group"));
Group2848->setDEF("KickAnimation");
CTimeSensor* TimeSensor2849 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor2849->setDEF("KickTimer");
TimeSensor2849->setCycleInterval(3.73);
TimeSensor2849->setLoop(True);
Group2848->addChildren(*TimeSensor2849);

COrientationInterpolator* OrientationInterpolator2850 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2850->setDEF("Kick_l_sternoclavicular_RollInterpolator");
OrientationInterpolator2850->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2850->setKeyValue(new float[24]{0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0});
Group2848->addChildren(*OrientationInterpolator2850);

COrientationInterpolator* OrientationInterpolator2851 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2851->setDEF("Kick_l_acromioclavicular_RollInterpolator");
OrientationInterpolator2851->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2851->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0});
Group2848->addChildren(*OrientationInterpolator2851);

COrientationInterpolator* OrientationInterpolator2852 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2852->setDEF("Kick_l_shoulder_RollInterpolator");
OrientationInterpolator2852->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2852->setKeyValue(new float[24]{0,0,1,0,0,0,1,1.76,-0.25,0,1,1.76,0,0,1,1.256,0,0,1,0.05,0,0,1,0});
Group2848->addChildren(*OrientationInterpolator2852);

COrientationInterpolator* OrientationInterpolator2853 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2853->setDEF("Kick_l_ForeArm_PitchInterpolator");
OrientationInterpolator2853->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2853->setKeyValue(new float[24]{1,0,0,0,1,0,0,-0.55,-1,0.25,0,2.55,1,0,0,0,1,0,0,0,1,0,0,0});
Group2848->addChildren(*OrientationInterpolator2853);

COrientationInterpolator* OrientationInterpolator2854 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2854->setDEF("Kick_l_wrist_RollInterpolator");
OrientationInterpolator2854->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2854->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,1,0,0.55,0,0,1,0,0,0,1,0,0,0,1,0});
Group2848->addChildren(*OrientationInterpolator2854);

COrientationInterpolator* OrientationInterpolator2855 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2855->setDEF("Kick_l_thumb1_PitchInterpolator");
OrientationInterpolator2855->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2855->setKeyValue(new float[24]{1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0});
Group2848->addChildren(*OrientationInterpolator2855);

COrientationInterpolator* OrientationInterpolator2856 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2856->setDEF("Kick_r_sternoclavicular_RollInterpolator");
OrientationInterpolator2856->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2856->setKeyValue(new float[24]{0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0});
Group2848->addChildren(*OrientationInterpolator2856);

COrientationInterpolator* OrientationInterpolator2857 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2857->setDEF("Kick_r_acromioclavicular_RollInterpolator");
OrientationInterpolator2857->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2857->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0});
Group2848->addChildren(*OrientationInterpolator2857);

COrientationInterpolator* OrientationInterpolator2858 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2858->setDEF("Kick_r_shoulder_RollInterpolator");
OrientationInterpolator2858->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2858->setKeyValue(new float[24]{0,0,1,0,0,0,1,-1.76,0.25,0,1,-1.76,0,0,1,-1.256,0,0,1,-0.05,0,0,1,0});
Group2848->addChildren(*OrientationInterpolator2858);

COrientationInterpolator* OrientationInterpolator2859 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2859->setDEF("Kick_r_ForeArm_PitchInterpolator");
OrientationInterpolator2859->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2859->setKeyValue(new float[24]{1,0,0,0,1,0,0,-0.55,1,0.25,0,-2.55,1,0,0,0,1,0,0,0,1,0,0,0});
Group2848->addChildren(*OrientationInterpolator2859);

COrientationInterpolator* OrientationInterpolator2860 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2860->setDEF("Kick_r_wrist_RollInterpolator");
OrientationInterpolator2860->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2860->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,1,0,-0.55,0,0,1,0,0,0,1,0,0,0,1,0});
Group2848->addChildren(*OrientationInterpolator2860);

COrientationInterpolator* OrientationInterpolator2861 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2861->setDEF("Kick_r_thumb1_PitchInterpolator");
OrientationInterpolator2861->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2861->setKeyValue(new float[24]{1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0});
Group2848->addChildren(*OrientationInterpolator2861);

COrientationInterpolator* OrientationInterpolator2862 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2862->setDEF("Kick_r_hip_PitchInterpolator");
OrientationInterpolator2862->setKey(new float[7]{0,0.2,0.3,0.5,0.6,0.9,1});
OrientationInterpolator2862->setKeyValue(new float[28]{1,0,0,0,1,0,0,0.9,-1,0,0,1.75,-1,0,0,2.25,-1,0,0,2,1,0,0,0,1,0,0,0});
Group2848->addChildren(*OrientationInterpolator2862);

COrientationInterpolator* OrientationInterpolator2863 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2863->setDEF("Kick_r_knee_PitchInterpolator");
OrientationInterpolator2863->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2863->setKeyValue(new float[24]{0,0,1,0,1,0,0,1.95,1,0,0,1.75,-1,0,0,0.28,1,0,0,0,1,0,0,0});
Group2848->addChildren(*OrientationInterpolator2863);

COrientationInterpolator* OrientationInterpolator2864 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2864->setDEF("Kick_l_hip_PitchInterpolator");
OrientationInterpolator2864->setKey(new float[7]{0,0.2,0.3,0.5,0.6,0.9,1});
OrientationInterpolator2864->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2848->addChildren(*OrientationInterpolator2864);

COrientationInterpolator* OrientationInterpolator2865 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2865->setDEF("Kick_l_knee_PitchInterpolator");
OrientationInterpolator2865->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2865->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2848->addChildren(*OrientationInterpolator2865);

COrientationInterpolator* OrientationInterpolator2866 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2866->setDEF("Kick_r_ankle_PitchInterpolator");
OrientationInterpolator2866->setKey(new float[6]{0,0.2,0.4,0.6,0.7,1});
OrientationInterpolator2866->setKeyValue(new float[24]{0,0,1,0,-1,0,0,0.9,-1,0,0,0.95,1,0,0,0.75,-1,0,0,0.05,1,0,0,0});
Group2848->addChildren(*OrientationInterpolator2866);

COrientationInterpolator* OrientationInterpolator2867 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2867->setDEF("Kick_r_metatarsal_PitchInterpolator");
OrientationInterpolator2867->setKey(new float[6]{0,0.2,0.4,0.6,0.7,1});
OrientationInterpolator2867->setKeyValue(new float[24]{1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0});
Group2848->addChildren(*OrientationInterpolator2867);

COrientationInterpolator* OrientationInterpolator2868 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2868->setDEF("Kick_sacroiliac_YawInterpolator");
OrientationInterpolator2868->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1});
OrientationInterpolator2868->setKeyValue(new float[24]{0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0});
Group2848->addChildren(*OrientationInterpolator2868);

COrientationInterpolator* OrientationInterpolator2869 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2869->setDEF("Kick_vl5_YawInterpolator");
OrientationInterpolator2869->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1});
OrientationInterpolator2869->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2848->addChildren(*OrientationInterpolator2869);

COrientationInterpolator* OrientationInterpolator2870 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2870->setDEF("Kick_vc6_YawInterpolator");
OrientationInterpolator2870->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1});
OrientationInterpolator2870->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2848->addChildren(*OrientationInterpolator2870);

COrientationInterpolator* OrientationInterpolator2871 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2871->setDEF("Kick_lower_body_RotationInterpolator");
OrientationInterpolator2871->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2871->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2848->addChildren(*OrientationInterpolator2871);

COrientationInterpolator* OrientationInterpolator2872 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2872->setDEF("Kick_upper_body_RotationInterpolator");
OrientationInterpolator2872->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2872->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2848->addChildren(*OrientationInterpolator2872);

COrientationInterpolator* OrientationInterpolator2873 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2873->setDEF("Kick_whole_body_RotationInterpolator");
OrientationInterpolator2873->setKey(new float[3]{0,0.5,1});
OrientationInterpolator2873->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2848->addChildren(*OrientationInterpolator2873);

CPositionInterpolator* PositionInterpolator2874 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator2874->setDEF("Kick_whole_body_TranslationInterpolator");
PositionInterpolator2874->setKey(new float[3]{0,0.5,1});
PositionInterpolator2874->setKeyValue(new float[9]{0,0,0,0,0,0,0,0,0});
Group2848->addChildren(*PositionInterpolator2874);

COrientationInterpolator* OrientationInterpolator2875 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2875->setDEF("Kick_neck_RotationInterpolator");
OrientationInterpolator2875->setKey(new float[4]{0,0.25,0.55,1});
OrientationInterpolator2875->setKeyValue(new float[16]{0,0,1,0,1,0,0,0.7,1,0,0,0.5,0,0,1,0});
Group2848->addChildren(*OrientationInterpolator2875);

CROUTE* ROUTE2876 = new CROUTE();
ROUTE2876->setFromField("fraction_changed");
ROUTE2876->setFromNode("KickTimer");
ROUTE2876->setToField("set_fraction");
ROUTE2876->setToNode("Kick_l_sternoclavicular_RollInterpolator");
Group2848->addChildren(*ROUTE2876);

CROUTE* ROUTE2877 = new CROUTE();
ROUTE2877->setFromField("fraction_changed");
ROUTE2877->setFromNode("KickTimer");
ROUTE2877->setToField("set_fraction");
ROUTE2877->setToNode("Kick_l_acromioclavicular_RollInterpolator");
Group2848->addChildren(*ROUTE2877);

CROUTE* ROUTE2878 = new CROUTE();
ROUTE2878->setFromField("fraction_changed");
ROUTE2878->setFromNode("KickTimer");
ROUTE2878->setToField("set_fraction");
ROUTE2878->setToNode("Kick_l_shoulder_RollInterpolator");
Group2848->addChildren(*ROUTE2878);

CROUTE* ROUTE2879 = new CROUTE();
ROUTE2879->setFromField("fraction_changed");
ROUTE2879->setFromNode("KickTimer");
ROUTE2879->setToField("set_fraction");
ROUTE2879->setToNode("Kick_l_ForeArm_PitchInterpolator");
Group2848->addChildren(*ROUTE2879);

CROUTE* ROUTE2880 = new CROUTE();
ROUTE2880->setFromField("fraction_changed");
ROUTE2880->setFromNode("KickTimer");
ROUTE2880->setToField("set_fraction");
ROUTE2880->setToNode("Kick_l_wrist_RollInterpolator");
Group2848->addChildren(*ROUTE2880);

CROUTE* ROUTE2881 = new CROUTE();
ROUTE2881->setFromField("fraction_changed");
ROUTE2881->setFromNode("KickTimer");
ROUTE2881->setToField("set_fraction");
ROUTE2881->setToNode("Kick_l_thumb1_PitchInterpolator");
Group2848->addChildren(*ROUTE2881);

CROUTE* ROUTE2882 = new CROUTE();
ROUTE2882->setFromField("fraction_changed");
ROUTE2882->setFromNode("KickTimer");
ROUTE2882->setToField("set_fraction");
ROUTE2882->setToNode("Kick_r_sternoclavicular_RollInterpolator");
Group2848->addChildren(*ROUTE2882);

CROUTE* ROUTE2883 = new CROUTE();
ROUTE2883->setFromField("fraction_changed");
ROUTE2883->setFromNode("KickTimer");
ROUTE2883->setToField("set_fraction");
ROUTE2883->setToNode("Kick_r_acromioclavicular_RollInterpolator");
Group2848->addChildren(*ROUTE2883);

CROUTE* ROUTE2884 = new CROUTE();
ROUTE2884->setFromField("fraction_changed");
ROUTE2884->setFromNode("KickTimer");
ROUTE2884->setToField("set_fraction");
ROUTE2884->setToNode("Kick_r_shoulder_RollInterpolator");
Group2848->addChildren(*ROUTE2884);

CROUTE* ROUTE2885 = new CROUTE();
ROUTE2885->setFromField("fraction_changed");
ROUTE2885->setFromNode("KickTimer");
ROUTE2885->setToField("set_fraction");
ROUTE2885->setToNode("Kick_r_ForeArm_PitchInterpolator");
Group2848->addChildren(*ROUTE2885);

CROUTE* ROUTE2886 = new CROUTE();
ROUTE2886->setFromField("fraction_changed");
ROUTE2886->setFromNode("KickTimer");
ROUTE2886->setToField("set_fraction");
ROUTE2886->setToNode("Kick_r_wrist_RollInterpolator");
Group2848->addChildren(*ROUTE2886);

CROUTE* ROUTE2887 = new CROUTE();
ROUTE2887->setFromField("fraction_changed");
ROUTE2887->setFromNode("KickTimer");
ROUTE2887->setToField("set_fraction");
ROUTE2887->setToNode("Kick_r_thumb1_PitchInterpolator");
Group2848->addChildren(*ROUTE2887);

CROUTE* ROUTE2888 = new CROUTE();
ROUTE2888->setFromField("fraction_changed");
ROUTE2888->setFromNode("KickTimer");
ROUTE2888->setToField("set_fraction");
ROUTE2888->setToNode("Kick_r_hip_PitchInterpolator");
Group2848->addChildren(*ROUTE2888);

CROUTE* ROUTE2889 = new CROUTE();
ROUTE2889->setFromField("fraction_changed");
ROUTE2889->setFromNode("KickTimer");
ROUTE2889->setToField("set_fraction");
ROUTE2889->setToNode("Kick_r_knee_PitchInterpolator");
Group2848->addChildren(*ROUTE2889);

CROUTE* ROUTE2890 = new CROUTE();
ROUTE2890->setFromField("fraction_changed");
ROUTE2890->setFromNode("KickTimer");
ROUTE2890->setToField("set_fraction");
ROUTE2890->setToNode("Kick_l_hip_PitchInterpolator");
Group2848->addChildren(*ROUTE2890);

CROUTE* ROUTE2891 = new CROUTE();
ROUTE2891->setFromField("fraction_changed");
ROUTE2891->setFromNode("KickTimer");
ROUTE2891->setToField("set_fraction");
ROUTE2891->setToNode("Kick_l_knee_PitchInterpolator");
Group2848->addChildren(*ROUTE2891);

CROUTE* ROUTE2892 = new CROUTE();
ROUTE2892->setFromField("fraction_changed");
ROUTE2892->setFromNode("KickTimer");
ROUTE2892->setToField("set_fraction");
ROUTE2892->setToNode("Kick_r_ankle_PitchInterpolator");
Group2848->addChildren(*ROUTE2892);

CROUTE* ROUTE2893 = new CROUTE();
ROUTE2893->setFromField("fraction_changed");
ROUTE2893->setFromNode("KickTimer");
ROUTE2893->setToField("set_fraction");
ROUTE2893->setToNode("Kick_r_metatarsal_PitchInterpolator");
Group2848->addChildren(*ROUTE2893);

CROUTE* ROUTE2894 = new CROUTE();
ROUTE2894->setFromField("fraction_changed");
ROUTE2894->setFromNode("KickTimer");
ROUTE2894->setToField("set_fraction");
ROUTE2894->setToNode("Kick_sacroiliac_YawInterpolator");
Group2848->addChildren(*ROUTE2894);

CROUTE* ROUTE2895 = new CROUTE();
ROUTE2895->setFromField("fraction_changed");
ROUTE2895->setFromNode("KickTimer");
ROUTE2895->setToField("set_fraction");
ROUTE2895->setToNode("Kick_vl5_YawInterpolator");
Group2848->addChildren(*ROUTE2895);

CROUTE* ROUTE2896 = new CROUTE();
ROUTE2896->setFromField("fraction_changed");
ROUTE2896->setFromNode("KickTimer");
ROUTE2896->setToField("set_fraction");
ROUTE2896->setToNode("Kick_vc6_YawInterpolator");
Group2848->addChildren(*ROUTE2896);

CROUTE* ROUTE2897 = new CROUTE();
ROUTE2897->setFromField("fraction_changed");
ROUTE2897->setFromNode("KickTimer");
ROUTE2897->setToField("set_fraction");
ROUTE2897->setToNode("Kick_lower_body_RotationInterpolator");
Group2848->addChildren(*ROUTE2897);

CROUTE* ROUTE2898 = new CROUTE();
ROUTE2898->setFromField("fraction_changed");
ROUTE2898->setFromNode("KickTimer");
ROUTE2898->setToField("set_fraction");
ROUTE2898->setToNode("Kick_upper_body_RotationInterpolator");
Group2848->addChildren(*ROUTE2898);

CROUTE* ROUTE2899 = new CROUTE();
ROUTE2899->setFromField("fraction_changed");
ROUTE2899->setFromNode("KickTimer");
ROUTE2899->setToField("set_fraction");
ROUTE2899->setToNode("Kick_whole_body_RotationInterpolator");
Group2848->addChildren(*ROUTE2899);

CROUTE* ROUTE2900 = new CROUTE();
ROUTE2900->setFromField("fraction_changed");
ROUTE2900->setFromNode("KickTimer");
ROUTE2900->setToField("set_fraction");
ROUTE2900->setToNode("Kick_whole_body_TranslationInterpolator");
Group2848->addChildren(*ROUTE2900);

CROUTE* ROUTE2901 = new CROUTE();
ROUTE2901->setFromField("fraction_changed");
ROUTE2901->setFromNode("KickTimer");
ROUTE2901->setToField("set_fraction");
ROUTE2901->setToNode("Kick_neck_RotationInterpolator");
Group2848->addChildren(*ROUTE2901);

CROUTE* ROUTE2902 = new CROUTE();
ROUTE2902->setFromField("value_changed");
ROUTE2902->setFromNode("Kick_l_sternoclavicular_RollInterpolator");
ROUTE2902->setToField("rotation");
ROUTE2902->setToNode("hanim_l_sternoclavicular");
Group2848->addChildren(*ROUTE2902);

CROUTE* ROUTE2903 = new CROUTE();
ROUTE2903->setFromField("value_changed");
ROUTE2903->setFromNode("Kick_l_acromioclavicular_RollInterpolator");
ROUTE2903->setToField("rotation");
ROUTE2903->setToNode("hanim_l_acromioclavicular");
Group2848->addChildren(*ROUTE2903);

CROUTE* ROUTE2904 = new CROUTE();
ROUTE2904->setFromField("value_changed");
ROUTE2904->setFromNode("Kick_l_shoulder_RollInterpolator");
ROUTE2904->setToField("rotation");
ROUTE2904->setToNode("hanim_l_shoulder");
Group2848->addChildren(*ROUTE2904);

CROUTE* ROUTE2905 = new CROUTE();
ROUTE2905->setFromField("value_changed");
ROUTE2905->setFromNode("Kick_l_ForeArm_PitchInterpolator");
ROUTE2905->setToField("rotation");
ROUTE2905->setToNode("hanim_l_elbow");
Group2848->addChildren(*ROUTE2905);

CROUTE* ROUTE2906 = new CROUTE();
ROUTE2906->setFromField("value_changed");
ROUTE2906->setFromNode("Kick_l_wrist_RollInterpolator");
ROUTE2906->setToField("rotation");
ROUTE2906->setToNode("hanim_l_wrist");
Group2848->addChildren(*ROUTE2906);

CROUTE* ROUTE2907 = new CROUTE();
ROUTE2907->setFromField("value_changed");
ROUTE2907->setFromNode("Kick_l_thumb1_PitchInterpolator");
ROUTE2907->setToField("rotation");
ROUTE2907->setToNode("hanim_l_thumb1");
Group2848->addChildren(*ROUTE2907);

CROUTE* ROUTE2908 = new CROUTE();
ROUTE2908->setFromField("value_changed");
ROUTE2908->setFromNode("Kick_r_sternoclavicular_RollInterpolator");
ROUTE2908->setToField("rotation");
ROUTE2908->setToNode("hanim_r_sternoclavicular");
Group2848->addChildren(*ROUTE2908);

CROUTE* ROUTE2909 = new CROUTE();
ROUTE2909->setFromField("value_changed");
ROUTE2909->setFromNode("Kick_r_acromioclavicular_RollInterpolator");
ROUTE2909->setToField("rotation");
ROUTE2909->setToNode("hanim_r_acromioclavicular");
Group2848->addChildren(*ROUTE2909);

CROUTE* ROUTE2910 = new CROUTE();
ROUTE2910->setFromField("value_changed");
ROUTE2910->setFromNode("Kick_r_shoulder_RollInterpolator");
ROUTE2910->setToField("rotation");
ROUTE2910->setToNode("hanim_r_shoulder");
Group2848->addChildren(*ROUTE2910);

CROUTE* ROUTE2911 = new CROUTE();
ROUTE2911->setFromField("value_changed");
ROUTE2911->setFromNode("Kick_r_ForeArm_PitchInterpolator");
ROUTE2911->setToField("rotation");
ROUTE2911->setToNode("hanim_r_elbow");
Group2848->addChildren(*ROUTE2911);

CROUTE* ROUTE2912 = new CROUTE();
ROUTE2912->setFromField("value_changed");
ROUTE2912->setFromNode("Kick_r_wrist_RollInterpolator");
ROUTE2912->setToField("rotation");
ROUTE2912->setToNode("hanim_r_wrist");
Group2848->addChildren(*ROUTE2912);

CROUTE* ROUTE2913 = new CROUTE();
ROUTE2913->setFromField("value_changed");
ROUTE2913->setFromNode("Kick_r_thumb1_PitchInterpolator");
ROUTE2913->setToField("rotation");
ROUTE2913->setToNode("hanim_r_thumb1");
Group2848->addChildren(*ROUTE2913);

CROUTE* ROUTE2914 = new CROUTE();
ROUTE2914->setFromField("value_changed");
ROUTE2914->setFromNode("Kick_r_hip_PitchInterpolator");
ROUTE2914->setToField("rotation");
ROUTE2914->setToNode("hanim_r_hip");
Group2848->addChildren(*ROUTE2914);

CROUTE* ROUTE2915 = new CROUTE();
ROUTE2915->setFromField("value_changed");
ROUTE2915->setFromNode("Kick_r_knee_PitchInterpolator");
ROUTE2915->setToField("rotation");
ROUTE2915->setToNode("hanim_r_knee");
Group2848->addChildren(*ROUTE2915);

CROUTE* ROUTE2916 = new CROUTE();
ROUTE2916->setFromField("value_changed");
ROUTE2916->setFromNode("Kick_r_ankle_PitchInterpolator");
ROUTE2916->setToField("rotation");
ROUTE2916->setToNode("hanim_r_ankle");
Group2848->addChildren(*ROUTE2916);

CROUTE* ROUTE2917 = new CROUTE();
ROUTE2917->setFromField("value_changed");
ROUTE2917->setFromNode("Kick_r_metatarsal_PitchInterpolator");
ROUTE2917->setToField("rotation");
ROUTE2917->setToNode("hanim_r_metatarsal");
Group2848->addChildren(*ROUTE2917);

CROUTE* ROUTE2918 = new CROUTE();
ROUTE2918->setFromField("value_changed");
ROUTE2918->setFromNode("Kick_l_hip_PitchInterpolator");
ROUTE2918->setToField("rotation");
ROUTE2918->setToNode("hanim_l_hip");
Group2848->addChildren(*ROUTE2918);

CROUTE* ROUTE2919 = new CROUTE();
ROUTE2919->setFromField("value_changed");
ROUTE2919->setFromNode("Kick_l_knee_PitchInterpolator");
ROUTE2919->setToField("rotation");
ROUTE2919->setToNode("hanim_l_knee");
Group2848->addChildren(*ROUTE2919);

CROUTE* ROUTE2920 = new CROUTE();
ROUTE2920->setFromField("value_changed");
ROUTE2920->setFromNode("Kick_r_ankle_PitchInterpolator");
ROUTE2920->setToField("rotation");
ROUTE2920->setToNode("hanim_l_ankle");
Group2848->addChildren(*ROUTE2920);

CROUTE* ROUTE2921 = new CROUTE();
ROUTE2921->setFromField("value_changed");
ROUTE2921->setFromNode("Kick_r_metatarsal_PitchInterpolator");
ROUTE2921->setToField("rotation");
ROUTE2921->setToNode("hanim_l_metatarsal");
Group2848->addChildren(*ROUTE2921);

CROUTE* ROUTE2922 = new CROUTE();
ROUTE2922->setFromField("value_changed");
ROUTE2922->setFromNode("Kick_sacroiliac_YawInterpolator");
ROUTE2922->setToField("rotation");
ROUTE2922->setToNode("hanim_sacroiliac");
Group2848->addChildren(*ROUTE2922);

CROUTE* ROUTE2923 = new CROUTE();
ROUTE2923->setFromField("value_changed");
ROUTE2923->setFromNode("Kick_vl5_YawInterpolator");
ROUTE2923->setToField("rotation");
ROUTE2923->setToNode("hanim_vl5");
Group2848->addChildren(*ROUTE2923);

CROUTE* ROUTE2924 = new CROUTE();
ROUTE2924->setFromField("value_changed");
ROUTE2924->setFromNode("Kick_vc6_YawInterpolator");
ROUTE2924->setToField("rotation");
ROUTE2924->setToNode("hanim_vc6");
Group2848->addChildren(*ROUTE2924);

CROUTE* ROUTE2925 = new CROUTE();
ROUTE2925->setFromField("value_changed");
ROUTE2925->setFromNode("Kick_upper_body_RotationInterpolator");
ROUTE2925->setToField("rotation");
ROUTE2925->setToNode("hanim_vl1");
Group2848->addChildren(*ROUTE2925);

CROUTE* ROUTE2926 = new CROUTE();
ROUTE2926->setFromField("value_changed");
ROUTE2926->setFromNode("Kick_lower_body_RotationInterpolator");
ROUTE2926->setToField("rotation");
ROUTE2926->setToNode("hanim_sacroiliac");
Group2848->addChildren(*ROUTE2926);

CROUTE* ROUTE2927 = new CROUTE();
ROUTE2927->setFromField("value_changed");
ROUTE2927->setFromNode("Kick_whole_body_RotationInterpolator");
ROUTE2927->setToField("rotation");
ROUTE2927->setToNode("hanim_humanoid_root");
Group2848->addChildren(*ROUTE2927);

CROUTE* ROUTE2928 = new CROUTE();
ROUTE2928->setFromField("value_changed");
ROUTE2928->setFromNode("Kick_whole_body_TranslationInterpolator");
ROUTE2928->setToField("translation");
ROUTE2928->setToNode("hanim_humanoid_root");
Group2848->addChildren(*ROUTE2928);

CROUTE* ROUTE2929 = new CROUTE();
ROUTE2929->setFromField("value_changed");
ROUTE2929->setFromNode("Kick_neck_RotationInterpolator");
ROUTE2929->setToField("rotation");
ROUTE2929->setToNode("hanim_vc4");
Group2848->addChildren(*ROUTE2929);

group->addChildren(*Group2848);

CGroup* Group2930 = (CGroup *)(m_pScene.createNode("Group"));
Group2930->setDEF("UserInterface");
//Authoring hint: these axes are aligned within local coordinate system
CTransform* Transform2931 = (CTransform *)(m_pScene.createNode("Transform"));
Transform2931->setDEF("CoordinateAxesAdjustedScale");
Transform2931->setScale(new float[3]{0.175,0.175,0.175});
CInline* Inline2932 = (CInline *)(m_pScene.createNode("Inline"));
Inline2932->setDEF("CoordinateAxes");
Inline2932->setUrl(new CString[4]{"../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl"}, 4);
Transform2931->addChildren(*Inline2932);

Group2930->addChildren(*Transform2931);

CTransform* Transform2933 = (CTransform *)(m_pScene.createNode("Transform"));
Transform2933->setDEF("cordsys");
Transform2933->setScale(new float[3]{0.175,0.175,0.175});
//<Inline bboxCenter='0.05143541 0.07883984 0.04731131' bboxSize='2.202872 2.25768 2.194624' url='\"JointCoordinateAxes.x3dv\"'/>
Group2930->addChildren(*Transform2933);

CProximitySensor* ProximitySensor2934 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor2934->setDEF("HudProximitySensor");
ProximitySensor2934->setCenter(new float[3]{0,20,0});
ProximitySensor2934->setSize(new float[3]{500,100,500});
Group2930->addChildren(*ProximitySensor2934);

CTransform* Transform2935 = (CTransform *)(m_pScene.createNode("Transform"));
Transform2935->setDEF("Stage");
Transform2935->setScale(new float[3]{1,0.0125,1});
Transform2935->setTranslation(new float[3]{0,-0.0125,0});
CShape* Shape2936 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance2937 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material2938 = (CMaterial *)(m_pScene.createNode("Material"));
Material2938->setTransparency(0.6);
Appearance2937->setMaterial(*Material2938);

Shape2936->setAppearance(*Appearance2937);

CBox* Box2939 = (CBox *)(m_pScene.createNode("Box"));
Shape2936->setGeometry(Box2939);

Transform2935->addChildren(*Shape2936);

CTransform* Transform2940 = (CTransform *)(m_pScene.createNode("Transform"));
Transform2940->setDEF("Circle0");
Transform2940->setScale(new float[3]{1.175,1,1.175});
CShape* Shape2941 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance2942 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material2943 = (CMaterial *)(m_pScene.createNode("Material"));
Material2943->setDiffuseColor(new float[3]{0.9,0,0.7});
Material2943->setEmissiveColor(new float[3]{0.424956,0.483976,1});
Appearance2942->setMaterial(*Material2943);

Shape2941->setAppearance(*Appearance2942);

CIndexedLineSet* IndexedLineSet2944 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet2944->setDEF("Orbit1");
IndexedLineSet2944->setCoordIndex(new int[62]{0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1});
CCoordinate* Coordinate2945 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate2945->setPoint(new float[183]{1,0,0,0.995,0,-0.105,0.979,0,-0.208,0.951,0,-0.309,0.914,0,-0.407,0.866,0,-0.5,0.809,0,-0.588,0.743,0,-0.669,0.669,0,-0.743,0.588,0,-0.809,0.5,0,-0.866,0.407,0,-0.914,0.309,0,-0.951,0.208,0,-0.978,0.105,0,-0.995,0,0,-1,-0.105,0,-0.994522,-0.208,0,-0.978,-0.309,0,-0.951,-0.407,0,-0.914,-0.5,0,-0.866,-0.588,0,-0.809,-0.669,0,-0.743,-0.743,0,-0.669,-0.809,0,-0.588,-0.866,0,-0.5,-0.914,0,-0.407,-0.951,0,-0.309,-0.978,0,-0.208,-0.995,0,-0.105,-1,0,0,-0.995,0,0.105,-0.978,0,0.208,-0.951,0,0.309,-0.914,0,0.407,-0.866,0,0.5,-0.809,0,0.588,-0.743,0,0.669,-0.669,0,0.743,-0.588,0,0.809,-0.5,0,0.866,-0.407,0,0.914,-0.309,0,0.951,-0.208,0,0.978,-0.105,0,0.995,0,0,1,0.105,0,0.995,0.208,0,0.978,0.309,0,0.951,0.407,0,0.914,0.5,0,0.866,0.588,0,0.809,0.669,0,0.743,0.743,0,0.669,0.809,0,0.588,0.866,0,0.5,0.914,0,0.407,0.951,0,0.309,0.978,0,0.208,0.995,0,0.104,1,0,0});
IndexedLineSet2944->setCoord(*Coordinate2945);

Shape2941->setGeometry(IndexedLineSet2944);

Transform2940->addChildren(*Shape2941);

Transform2935->addChildren(*Transform2940);

CTransform* Transform2946 = (CTransform *)(m_pScene.createNode("Transform"));
Transform2946->setDEF("Circle1");
Transform2946->setScale(new float[3]{0.5,1,0.5});
CShape* Shape2947 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance2948 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material2949 = (CMaterial *)(m_pScene.createNode("Material"));
Material2949->setDiffuseColor(new float[3]{0.9,0,0.7});
Material2949->setEmissiveColor(new float[3]{0.424956,0.483976,1});
Appearance2948->setMaterial(*Material2949);

Shape2947->setAppearance(*Appearance2948);

CIndexedLineSet* IndexedLineSet2950 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet2950->setUSE("Orbit1");
Shape2947->setGeometry(IndexedLineSet2950);

Transform2946->addChildren(*Shape2947);

Transform2935->addChildren(*Transform2946);

CTransform* Transform2951 = (CTransform *)(m_pScene.createNode("Transform"));
Transform2951->setDEF("Circle2");
Transform2951->setScale(new float[3]{0.25,1,0.25});
CShape* Shape2952 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance2953 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material2954 = (CMaterial *)(m_pScene.createNode("Material"));
Material2954->setDiffuseColor(new float[3]{0.9,0,0.7});
Material2954->setEmissiveColor(new float[3]{0.424956,0.483976,1});
Appearance2953->setMaterial(*Material2954);

Shape2952->setAppearance(*Appearance2953);

CIndexedLineSet* IndexedLineSet2955 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet2955->setUSE("Orbit1");
Shape2952->setGeometry(IndexedLineSet2955);

Transform2951->addChildren(*Shape2952);

Transform2935->addChildren(*Transform2951);

Group2930->addChildren(*Transform2935);

CTransform* Transform2956 = (CTransform *)(m_pScene.createNode("Transform"));
Transform2956->setDEF("HudXform");
Transform2956->setRotation(new float[4]{-0.09996068,0.9942513,0.03837026,0.7131352});
Transform2956->setTranslation(new float[3]{1.705442,1.042139,1.989742});
CTransform* Transform2957 = (CTransform *)(m_pScene.createNode("Transform"));
Transform2957->setScale(new float[3]{0.035,0.035,0.035});
Transform2957->setTranslation(new float[3]{-0.42,-0.2,-0.75});
CTransform* Transform2958 = (CTransform *)(m_pScene.createNode("Transform"));
Transform2958->setDEF("StandTransform");
Transform2958->setTranslation(new float[3]{0,-1,0});
CTouchSensor* TouchSensor2959 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor2959->setDEF("Stand_Touch");
TouchSensor2959->setDescription("touch to select");
Transform2958->addChildren(*TouchSensor2959);

CShape* Shape2960 = (CShape *)(m_pScene.createNode("Shape"));
Shape2960->setDEF("StandTextShape");
CAppearance* Appearance2961 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material2962 = (CMaterial *)(m_pScene.createNode("Material"));
Material2962->setDEF("text_color");
Material2962->setAmbientIntensity(1);
Material2962->setDiffuseColor(new float[3]{0.819,0.521,0.169});
Material2962->setEmissiveColor(new float[3]{0.819,0.521,0.169});
Material2962->setSpecularColor(new float[3]{0.819,0.521,0.169});
Appearance2961->setMaterial(*Material2962);

Shape2960->setAppearance(*Appearance2961);

CText* Text2963 = (CText *)(m_pScene.createNode("Text"));
Text2963->setString(new CString[1]{"Stand"}, 1);
Shape2960->setGeometry(Text2963);

Transform2958->addChildren(*Shape2960);

CShape* Shape2964 = (CShape *)(m_pScene.createNode("Shape"));
Shape2964->setDEF("Stand_Back");
CAppearance* Appearance2965 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material2966 = (CMaterial *)(m_pScene.createNode("Material"));
Material2966->setDEF("Clear");
Material2966->setAmbientIntensity(1);
Material2966->setDiffuseColor(new float[3]{0,0.5,0});
Material2966->setEmissiveColor(new float[3]{0,0.5,0});
Material2966->setTransparency(0.8);
Appearance2965->setMaterial(*Material2966);

Shape2964->setAppearance(*Appearance2965);

CIndexedFaceSet* IndexedFaceSet2967 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet2967->setDEF("Backing");
IndexedFaceSet2967->setCoordIndex(new int[5]{0,1,2,3,-1});
CCoordinate* Coordinate2968 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate2968->setPoint(new float[12]{-0.2,-1.2,-0.01,2.5,-1.2,-0.01,2.5,0.75,-0.01,-0.2,0.75,-0.01});
IndexedFaceSet2967->setCoord(*Coordinate2968);

Shape2964->setGeometry(IndexedFaceSet2967);

Transform2958->addChildren(*Shape2964);

Transform2957->addChildren(*Transform2958);

CTransform* Transform2969 = (CTransform *)(m_pScene.createNode("Transform"));
Transform2969->setDEF("PitchTransform");
Transform2969->setTranslation(new float[3]{3,-1,0});
CTouchSensor* TouchSensor2970 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor2970->setDEF("Pitch_Touch");
TouchSensor2970->setDescription("touch to select");
Transform2969->addChildren(*TouchSensor2970);

CShape* Shape2971 = (CShape *)(m_pScene.createNode("Shape"));
Shape2971->setDEF("PitchTextShape");
CAppearance* Appearance2972 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material2973 = (CMaterial *)(m_pScene.createNode("Material"));
Material2973->setUSE("text_color");
Appearance2972->setMaterial(*Material2973);

Shape2971->setAppearance(*Appearance2972);

CText* Text2974 = (CText *)(m_pScene.createNode("Text"));
Text2974->setString(new CString[1]{"Pitch"}, 1);
Shape2971->setGeometry(Text2974);

Transform2969->addChildren(*Shape2971);

CShape* Shape2975 = (CShape *)(m_pScene.createNode("Shape"));
Shape2975->setDEF("Pitch_Back");
CAppearance* Appearance2976 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material2977 = (CMaterial *)(m_pScene.createNode("Material"));
Material2977->setUSE("Clear");
Appearance2976->setMaterial(*Material2977);

Shape2975->setAppearance(*Appearance2976);

CIndexedFaceSet* IndexedFaceSet2978 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet2978->setUSE("Backing");
Shape2975->setGeometry(IndexedFaceSet2978);

Transform2969->addChildren(*Shape2975);

Transform2957->addChildren(*Transform2969);

CTransform* Transform2979 = (CTransform *)(m_pScene.createNode("Transform"));
Transform2979->setDEF("YawTransform");
Transform2979->setTranslation(new float[3]{6,-1,0});
CTouchSensor* TouchSensor2980 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor2980->setDEF("Yaw_Touch");
TouchSensor2980->setDescription("touch to select");
Transform2979->addChildren(*TouchSensor2980);

CShape* Shape2981 = (CShape *)(m_pScene.createNode("Shape"));
Shape2981->setDEF("YawText");
CAppearance* Appearance2982 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material2983 = (CMaterial *)(m_pScene.createNode("Material"));
Material2983->setUSE("text_color");
Appearance2982->setMaterial(*Material2983);

Shape2981->setAppearance(*Appearance2982);

CText* Text2984 = (CText *)(m_pScene.createNode("Text"));
Text2984->setString(new CString[1]{"Yaw"}, 1);
Shape2981->setGeometry(Text2984);

Transform2979->addChildren(*Shape2981);

CShape* Shape2985 = (CShape *)(m_pScene.createNode("Shape"));
Shape2985->setDEF("Yaw_Back");
CAppearance* Appearance2986 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material2987 = (CMaterial *)(m_pScene.createNode("Material"));
Material2987->setUSE("Clear");
Appearance2986->setMaterial(*Material2987);

Shape2985->setAppearance(*Appearance2986);

CIndexedFaceSet* IndexedFaceSet2988 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet2988->setUSE("Backing");
Shape2985->setGeometry(IndexedFaceSet2988);

Transform2979->addChildren(*Shape2985);

Transform2957->addChildren(*Transform2979);

CTransform* Transform2989 = (CTransform *)(m_pScene.createNode("Transform"));
Transform2989->setDEF("RollTransform");
Transform2989->setTranslation(new float[3]{9,-1,0});
CTouchSensor* TouchSensor2990 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor2990->setDEF("Roll_Touch");
TouchSensor2990->setDescription("touch to select");
Transform2989->addChildren(*TouchSensor2990);

CShape* Shape2991 = (CShape *)(m_pScene.createNode("Shape"));
Shape2991->setDEF("_RollInterpolator");
CAppearance* Appearance2992 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material2993 = (CMaterial *)(m_pScene.createNode("Material"));
Material2993->setUSE("text_color");
Appearance2992->setMaterial(*Material2993);

Shape2991->setAppearance(*Appearance2992);

CText* Text2994 = (CText *)(m_pScene.createNode("Text"));
Text2994->setString(new CString[1]{"Roll"}, 1);
Shape2991->setGeometry(Text2994);

Transform2989->addChildren(*Shape2991);

CShape* Shape2995 = (CShape *)(m_pScene.createNode("Shape"));
Shape2995->setDEF("Roll_Back");
CAppearance* Appearance2996 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material2997 = (CMaterial *)(m_pScene.createNode("Material"));
Material2997->setUSE("Clear");
Appearance2996->setMaterial(*Material2997);

Shape2995->setAppearance(*Appearance2996);

CIndexedFaceSet* IndexedFaceSet2998 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet2998->setUSE("Backing");
Shape2995->setGeometry(IndexedFaceSet2998);

Transform2989->addChildren(*Shape2995);

Transform2957->addChildren(*Transform2989);

CTransform* Transform2999 = (CTransform *)(m_pScene.createNode("Transform"));
Transform2999->setDEF("WalkTransform");
Transform2999->setTranslation(new float[3]{12,-1,0});
CTouchSensor* TouchSensor3000 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor3000->setDEF("Walk_Touch");
TouchSensor3000->setDescription("touch to select");
Transform2999->addChildren(*TouchSensor3000);

CShape* Shape3001 = (CShape *)(m_pScene.createNode("Shape"));
Shape3001->setDEF("WalkText");
CAppearance* Appearance3002 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material3003 = (CMaterial *)(m_pScene.createNode("Material"));
Material3003->setUSE("text_color");
Appearance3002->setMaterial(*Material3003);

Shape3001->setAppearance(*Appearance3002);

CText* Text3004 = (CText *)(m_pScene.createNode("Text"));
Text3004->setString(new CString[1]{"Walk"}, 1);
Shape3001->setGeometry(Text3004);

Transform2999->addChildren(*Shape3001);

CShape* Shape3005 = (CShape *)(m_pScene.createNode("Shape"));
Shape3005->setDEF("Walk_Back");
CAppearance* Appearance3006 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material3007 = (CMaterial *)(m_pScene.createNode("Material"));
Material3007->setUSE("Clear");
Appearance3006->setMaterial(*Material3007);

Shape3005->setAppearance(*Appearance3006);

CIndexedFaceSet* IndexedFaceSet3008 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet3008->setUSE("Backing");
Shape3005->setGeometry(IndexedFaceSet3008);

Transform2999->addChildren(*Shape3005);

Transform2957->addChildren(*Transform2999);

CTransform* Transform3009 = (CTransform *)(m_pScene.createNode("Transform"));
Transform3009->setDEF("RunTransform");
Transform3009->setTranslation(new float[3]{15,-1,0});
CTouchSensor* TouchSensor3010 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor3010->setDEF("Run_Touch");
TouchSensor3010->setDescription("touch to select");
Transform3009->addChildren(*TouchSensor3010);

CShape* Shape3011 = (CShape *)(m_pScene.createNode("Shape"));
Shape3011->setDEF("RunText");
CAppearance* Appearance3012 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material3013 = (CMaterial *)(m_pScene.createNode("Material"));
Material3013->setUSE("text_color");
Appearance3012->setMaterial(*Material3013);

Shape3011->setAppearance(*Appearance3012);

CText* Text3014 = (CText *)(m_pScene.createNode("Text"));
Text3014->setString(new CString[1]{"Run"}, 1);
Shape3011->setGeometry(Text3014);

Transform3009->addChildren(*Shape3011);

CShape* Shape3015 = (CShape *)(m_pScene.createNode("Shape"));
Shape3015->setDEF("Run_Back");
CAppearance* Appearance3016 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material3017 = (CMaterial *)(m_pScene.createNode("Material"));
Material3017->setUSE("Clear");
Appearance3016->setMaterial(*Material3017);

Shape3015->setAppearance(*Appearance3016);

CIndexedFaceSet* IndexedFaceSet3018 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet3018->setUSE("Backing");
Shape3015->setGeometry(IndexedFaceSet3018);

Transform3009->addChildren(*Shape3015);

Transform2957->addChildren(*Transform3009);

CTransform* Transform3019 = (CTransform *)(m_pScene.createNode("Transform"));
Transform3019->setDEF("JumpTransform");
Transform3019->setTranslation(new float[3]{18,-1,0});
CTouchSensor* TouchSensor3020 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor3020->setDEF("Jump_Touch");
TouchSensor3020->setDescription("touch to select");
Transform3019->addChildren(*TouchSensor3020);

CShape* Shape3021 = (CShape *)(m_pScene.createNode("Shape"));
Shape3021->setDEF("Jump");
CAppearance* Appearance3022 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material3023 = (CMaterial *)(m_pScene.createNode("Material"));
Material3023->setUSE("text_color");
Appearance3022->setMaterial(*Material3023);

Shape3021->setAppearance(*Appearance3022);

CText* Text3024 = (CText *)(m_pScene.createNode("Text"));
Text3024->setString(new CString[1]{"Jump"}, 1);
Shape3021->setGeometry(Text3024);

Transform3019->addChildren(*Shape3021);

CShape* Shape3025 = (CShape *)(m_pScene.createNode("Shape"));
Shape3025->setDEF("Jump_Back");
CAppearance* Appearance3026 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material3027 = (CMaterial *)(m_pScene.createNode("Material"));
Material3027->setUSE("Clear");
Appearance3026->setMaterial(*Material3027);

Shape3025->setAppearance(*Appearance3026);

CIndexedFaceSet* IndexedFaceSet3028 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet3028->setUSE("Backing");
Shape3025->setGeometry(IndexedFaceSet3028);

Transform3019->addChildren(*Shape3025);

Transform2957->addChildren(*Transform3019);

CTransform* Transform3029 = (CTransform *)(m_pScene.createNode("Transform"));
Transform3029->setDEF("KickTransform");
Transform3029->setTranslation(new float[3]{21,-1,0});
CTouchSensor* TouchSensor3030 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor3030->setDEF("Kick_Touch");
TouchSensor3030->setDescription("touch to select");
Transform3029->addChildren(*TouchSensor3030);

CShape* Shape3031 = (CShape *)(m_pScene.createNode("Shape"));
Shape3031->setDEF("KickText");
CAppearance* Appearance3032 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material3033 = (CMaterial *)(m_pScene.createNode("Material"));
Material3033->setUSE("text_color");
Appearance3032->setMaterial(*Material3033);

Shape3031->setAppearance(*Appearance3032);

CText* Text3034 = (CText *)(m_pScene.createNode("Text"));
Text3034->setString(new CString[1]{"Kick"}, 1);
Shape3031->setGeometry(Text3034);

Transform3029->addChildren(*Shape3031);

CShape* Shape3035 = (CShape *)(m_pScene.createNode("Shape"));
Shape3035->setDEF("Kick_Back");
CAppearance* Appearance3036 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material3037 = (CMaterial *)(m_pScene.createNode("Material"));
Material3037->setUSE("Clear");
Appearance3036->setMaterial(*Material3037);

Shape3035->setAppearance(*Appearance3036);

CIndexedFaceSet* IndexedFaceSet3038 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet3038->setUSE("Backing");
Shape3035->setGeometry(IndexedFaceSet3038);

Transform3029->addChildren(*Shape3035);

Transform2957->addChildren(*Transform3029);

CTransform* Transform3039 = (CTransform *)(m_pScene.createNode("Transform"));
Transform3039->setDEF("Stop_Text");
Transform3039->setTranslation(new float[3]{0,1.4,0});
CTouchSensor* TouchSensor3040 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor3040->setDEF("Stop_Touch");
TouchSensor3040->setDescription("touch to select");
Transform3039->addChildren(*TouchSensor3040);

CShape* Shape3041 = (CShape *)(m_pScene.createNode("Shape"));
Shape3041->setDEF("StopText");
CAppearance* Appearance3042 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material3043 = (CMaterial *)(m_pScene.createNode("Material"));
Material3043->setUSE("text_color");
Appearance3042->setMaterial(*Material3043);

Shape3041->setAppearance(*Appearance3042);

CText* Text3044 = (CText *)(m_pScene.createNode("Text"));
Text3044->setString(new CString[2]{"Stop","Default Pose"}, 2);
Shape3041->setGeometry(Text3044);

Transform3039->addChildren(*Shape3041);

CShape* Shape3045 = (CShape *)(m_pScene.createNode("Shape"));
Shape3045->setDEF("Stop_Back");
CAppearance* Appearance3046 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material3047 = (CMaterial *)(m_pScene.createNode("Material"));
Material3047->setUSE("Clear");
Appearance3046->setMaterial(*Material3047);

Shape3045->setAppearance(*Appearance3046);

CIndexedFaceSet* IndexedFaceSet3048 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet3048->setUSE("Backing");
Shape3045->setGeometry(IndexedFaceSet3048);

Transform3039->addChildren(*Shape3045);

Transform2957->addChildren(*Transform3039);

Transform2956->addChildren(*Transform2957);

Group2930->addChildren(*Transform2956);

CROUTE* ROUTE3049 = new CROUTE();
ROUTE3049->setFromField("position_changed");
ROUTE3049->setFromNode("HudProximitySensor");
ROUTE3049->setToField("translation");
ROUTE3049->setToNode("HudXform");
Group2930->addChildren(*ROUTE3049);

CROUTE* ROUTE3050 = new CROUTE();
ROUTE3050->setFromField("orientation_changed");
ROUTE3050->setFromNode("HudProximitySensor");
ROUTE3050->setToField("rotation");
ROUTE3050->setToNode("HudXform");
Group2930->addChildren(*ROUTE3050);

group->addChildren(*Group2930);

CGroup* Group3051 = (CGroup *)(m_pScene.createNode("Group"));
Group3051->setDEF("BehaviorSynchronization");
CROUTE* ROUTE3052 = new CROUTE();
ROUTE3052->setFromField("touchTime");
ROUTE3052->setFromNode("Stand_Touch");
ROUTE3052->setToField("stopTime");
ROUTE3052->setToNode("PitchTimer");
Group3051->addChildren(*ROUTE3052);

CROUTE* ROUTE3053 = new CROUTE();
ROUTE3053->setFromField("touchTime");
ROUTE3053->setFromNode("Stand_Touch");
ROUTE3053->setToField("stopTime");
ROUTE3053->setToNode("YawTimer");
Group3051->addChildren(*ROUTE3053);

CROUTE* ROUTE3054 = new CROUTE();
ROUTE3054->setFromField("touchTime");
ROUTE3054->setFromNode("Stand_Touch");
ROUTE3054->setToField("stopTime");
ROUTE3054->setToNode("RollTimer");
Group3051->addChildren(*ROUTE3054);

CROUTE* ROUTE3055 = new CROUTE();
ROUTE3055->setFromField("touchTime");
ROUTE3055->setFromNode("Stand_Touch");
ROUTE3055->setToField("stopTime");
ROUTE3055->setToNode("WalkTimer");
Group3051->addChildren(*ROUTE3055);

CROUTE* ROUTE3056 = new CROUTE();
ROUTE3056->setFromField("touchTime");
ROUTE3056->setFromNode("Stand_Touch");
ROUTE3056->setToField("stopTime");
ROUTE3056->setToNode("RunTimer");
Group3051->addChildren(*ROUTE3056);

CROUTE* ROUTE3057 = new CROUTE();
ROUTE3057->setFromField("touchTime");
ROUTE3057->setFromNode("Stand_Touch");
ROUTE3057->setToField("stopTime");
ROUTE3057->setToNode("JumpTimer");
Group3051->addChildren(*ROUTE3057);

CROUTE* ROUTE3058 = new CROUTE();
ROUTE3058->setFromField("touchTime");
ROUTE3058->setFromNode("Stand_Touch");
ROUTE3058->setToField("stopTime");
ROUTE3058->setToNode("KickTimer");
Group3051->addChildren(*ROUTE3058);

CROUTE* ROUTE3059 = new CROUTE();
ROUTE3059->setFromField("touchTime");
ROUTE3059->setFromNode("Stand_Touch");
ROUTE3059->setToField("stopTime");
ROUTE3059->setToNode("StopTimer");
Group3051->addChildren(*ROUTE3059);

CROUTE* ROUTE3060 = new CROUTE();
ROUTE3060->setFromField("touchTime");
ROUTE3060->setFromNode("Stand_Touch");
ROUTE3060->setToField("startTime");
ROUTE3060->setToNode("StandTimer");
Group3051->addChildren(*ROUTE3060);

CROUTE* ROUTE3061 = new CROUTE();
ROUTE3061->setFromField("touchTime");
ROUTE3061->setFromNode("Pitch_Touch");
ROUTE3061->setToField("stopTime");
ROUTE3061->setToNode("StandTimer");
Group3051->addChildren(*ROUTE3061);

CROUTE* ROUTE3062 = new CROUTE();
ROUTE3062->setFromField("touchTime");
ROUTE3062->setFromNode("Pitch_Touch");
ROUTE3062->setToField("stopTime");
ROUTE3062->setToNode("YawTimer");
Group3051->addChildren(*ROUTE3062);

CROUTE* ROUTE3063 = new CROUTE();
ROUTE3063->setFromField("touchTime");
ROUTE3063->setFromNode("Pitch_Touch");
ROUTE3063->setToField("stopTime");
ROUTE3063->setToNode("RollTimer");
Group3051->addChildren(*ROUTE3063);

CROUTE* ROUTE3064 = new CROUTE();
ROUTE3064->setFromField("touchTime");
ROUTE3064->setFromNode("Pitch_Touch");
ROUTE3064->setToField("stopTime");
ROUTE3064->setToNode("WalkTimer");
Group3051->addChildren(*ROUTE3064);

CROUTE* ROUTE3065 = new CROUTE();
ROUTE3065->setFromField("touchTime");
ROUTE3065->setFromNode("Pitch_Touch");
ROUTE3065->setToField("stopTime");
ROUTE3065->setToNode("RunTimer");
Group3051->addChildren(*ROUTE3065);

CROUTE* ROUTE3066 = new CROUTE();
ROUTE3066->setFromField("touchTime");
ROUTE3066->setFromNode("Pitch_Touch");
ROUTE3066->setToField("stopTime");
ROUTE3066->setToNode("JumpTimer");
Group3051->addChildren(*ROUTE3066);

CROUTE* ROUTE3067 = new CROUTE();
ROUTE3067->setFromField("touchTime");
ROUTE3067->setFromNode("Pitch_Touch");
ROUTE3067->setToField("stopTime");
ROUTE3067->setToNode("KickTimer");
Group3051->addChildren(*ROUTE3067);

CROUTE* ROUTE3068 = new CROUTE();
ROUTE3068->setFromField("touchTime");
ROUTE3068->setFromNode("Pitch_Touch");
ROUTE3068->setToField("stopTime");
ROUTE3068->setToNode("StopTimer");
Group3051->addChildren(*ROUTE3068);

CROUTE* ROUTE3069 = new CROUTE();
ROUTE3069->setFromField("touchTime");
ROUTE3069->setFromNode("Pitch_Touch");
ROUTE3069->setToField("startTime");
ROUTE3069->setToNode("PitchTimer");
Group3051->addChildren(*ROUTE3069);

CROUTE* ROUTE3070 = new CROUTE();
ROUTE3070->setFromField("touchTime");
ROUTE3070->setFromNode("Yaw_Touch");
ROUTE3070->setToField("stopTime");
ROUTE3070->setToNode("StandTimer");
Group3051->addChildren(*ROUTE3070);

CROUTE* ROUTE3071 = new CROUTE();
ROUTE3071->setFromField("touchTime");
ROUTE3071->setFromNode("Yaw_Touch");
ROUTE3071->setToField("stopTime");
ROUTE3071->setToNode("PitchTimer");
Group3051->addChildren(*ROUTE3071);

CROUTE* ROUTE3072 = new CROUTE();
ROUTE3072->setFromField("touchTime");
ROUTE3072->setFromNode("Yaw_Touch");
ROUTE3072->setToField("stopTime");
ROUTE3072->setToNode("RollTimer");
Group3051->addChildren(*ROUTE3072);

CROUTE* ROUTE3073 = new CROUTE();
ROUTE3073->setFromField("touchTime");
ROUTE3073->setFromNode("Yaw_Touch");
ROUTE3073->setToField("stopTime");
ROUTE3073->setToNode("WalkTimer");
Group3051->addChildren(*ROUTE3073);

CROUTE* ROUTE3074 = new CROUTE();
ROUTE3074->setFromField("touchTime");
ROUTE3074->setFromNode("Yaw_Touch");
ROUTE3074->setToField("stopTime");
ROUTE3074->setToNode("RunTimer");
Group3051->addChildren(*ROUTE3074);

CROUTE* ROUTE3075 = new CROUTE();
ROUTE3075->setFromField("touchTime");
ROUTE3075->setFromNode("Yaw_Touch");
ROUTE3075->setToField("stopTime");
ROUTE3075->setToNode("JumpTimer");
Group3051->addChildren(*ROUTE3075);

CROUTE* ROUTE3076 = new CROUTE();
ROUTE3076->setFromField("touchTime");
ROUTE3076->setFromNode("Yaw_Touch");
ROUTE3076->setToField("stopTime");
ROUTE3076->setToNode("KickTimer");
Group3051->addChildren(*ROUTE3076);

CROUTE* ROUTE3077 = new CROUTE();
ROUTE3077->setFromField("touchTime");
ROUTE3077->setFromNode("Yaw_Touch");
ROUTE3077->setToField("stopTime");
ROUTE3077->setToNode("StopTimer");
Group3051->addChildren(*ROUTE3077);

CROUTE* ROUTE3078 = new CROUTE();
ROUTE3078->setFromField("touchTime");
ROUTE3078->setFromNode("Yaw_Touch");
ROUTE3078->setToField("startTime");
ROUTE3078->setToNode("YawTimer");
Group3051->addChildren(*ROUTE3078);

CROUTE* ROUTE3079 = new CROUTE();
ROUTE3079->setFromField("touchTime");
ROUTE3079->setFromNode("Walk_Touch");
ROUTE3079->setToField("stopTime");
ROUTE3079->setToNode("StandTimer");
Group3051->addChildren(*ROUTE3079);

CROUTE* ROUTE3080 = new CROUTE();
ROUTE3080->setFromField("touchTime");
ROUTE3080->setFromNode("Walk_Touch");
ROUTE3080->setToField("stopTime");
ROUTE3080->setToNode("PitchTimer");
Group3051->addChildren(*ROUTE3080);

CROUTE* ROUTE3081 = new CROUTE();
ROUTE3081->setFromField("touchTime");
ROUTE3081->setFromNode("Walk_Touch");
ROUTE3081->setToField("stopTime");
ROUTE3081->setToNode("YawTimer");
Group3051->addChildren(*ROUTE3081);

CROUTE* ROUTE3082 = new CROUTE();
ROUTE3082->setFromField("touchTime");
ROUTE3082->setFromNode("Walk_Touch");
ROUTE3082->setToField("stopTime");
ROUTE3082->setToNode("RollTimer");
Group3051->addChildren(*ROUTE3082);

CROUTE* ROUTE3083 = new CROUTE();
ROUTE3083->setFromField("touchTime");
ROUTE3083->setFromNode("Walk_Touch");
ROUTE3083->setToField("stopTime");
ROUTE3083->setToNode("RunTimer");
Group3051->addChildren(*ROUTE3083);

CROUTE* ROUTE3084 = new CROUTE();
ROUTE3084->setFromField("touchTime");
ROUTE3084->setFromNode("Walk_Touch");
ROUTE3084->setToField("stopTime");
ROUTE3084->setToNode("JumpTimer");
Group3051->addChildren(*ROUTE3084);

CROUTE* ROUTE3085 = new CROUTE();
ROUTE3085->setFromField("touchTime");
ROUTE3085->setFromNode("Walk_Touch");
ROUTE3085->setToField("stopTime");
ROUTE3085->setToNode("KickTimer");
Group3051->addChildren(*ROUTE3085);

CROUTE* ROUTE3086 = new CROUTE();
ROUTE3086->setFromField("touchTime");
ROUTE3086->setFromNode("Walk_Touch");
ROUTE3086->setToField("stopTime");
ROUTE3086->setToNode("StopTimer");
Group3051->addChildren(*ROUTE3086);

CROUTE* ROUTE3087 = new CROUTE();
ROUTE3087->setFromField("touchTime");
ROUTE3087->setFromNode("Walk_Touch");
ROUTE3087->setToField("startTime");
ROUTE3087->setToNode("WalkTimer");
Group3051->addChildren(*ROUTE3087);

CROUTE* ROUTE3088 = new CROUTE();
ROUTE3088->setFromField("touchTime");
ROUTE3088->setFromNode("Roll_Touch");
ROUTE3088->setToField("stopTime");
ROUTE3088->setToNode("StandTimer");
Group3051->addChildren(*ROUTE3088);

CROUTE* ROUTE3089 = new CROUTE();
ROUTE3089->setFromField("touchTime");
ROUTE3089->setFromNode("Roll_Touch");
ROUTE3089->setToField("stopTime");
ROUTE3089->setToNode("PitchTimer");
Group3051->addChildren(*ROUTE3089);

CROUTE* ROUTE3090 = new CROUTE();
ROUTE3090->setFromField("touchTime");
ROUTE3090->setFromNode("Roll_Touch");
ROUTE3090->setToField("stopTime");
ROUTE3090->setToNode("YawTimer");
Group3051->addChildren(*ROUTE3090);

CROUTE* ROUTE3091 = new CROUTE();
ROUTE3091->setFromField("touchTime");
ROUTE3091->setFromNode("Roll_Touch");
ROUTE3091->setToField("stopTime");
ROUTE3091->setToNode("WalkTimer");
Group3051->addChildren(*ROUTE3091);

CROUTE* ROUTE3092 = new CROUTE();
ROUTE3092->setFromField("touchTime");
ROUTE3092->setFromNode("Roll_Touch");
ROUTE3092->setToField("stopTime");
ROUTE3092->setToNode("RunTimer");
Group3051->addChildren(*ROUTE3092);

CROUTE* ROUTE3093 = new CROUTE();
ROUTE3093->setFromField("touchTime");
ROUTE3093->setFromNode("Roll_Touch");
ROUTE3093->setToField("stopTime");
ROUTE3093->setToNode("JumpTimer");
Group3051->addChildren(*ROUTE3093);

CROUTE* ROUTE3094 = new CROUTE();
ROUTE3094->setFromField("touchTime");
ROUTE3094->setFromNode("Roll_Touch");
ROUTE3094->setToField("stopTime");
ROUTE3094->setToNode("KickTimer");
Group3051->addChildren(*ROUTE3094);

CROUTE* ROUTE3095 = new CROUTE();
ROUTE3095->setFromField("touchTime");
ROUTE3095->setFromNode("Roll_Touch");
ROUTE3095->setToField("stopTime");
ROUTE3095->setToNode("StopTimer");
Group3051->addChildren(*ROUTE3095);

CROUTE* ROUTE3096 = new CROUTE();
ROUTE3096->setFromField("touchTime");
ROUTE3096->setFromNode("Roll_Touch");
ROUTE3096->setToField("startTime");
ROUTE3096->setToNode("RollTimer");
Group3051->addChildren(*ROUTE3096);

CROUTE* ROUTE3097 = new CROUTE();
ROUTE3097->setFromField("touchTime");
ROUTE3097->setFromNode("Run_Touch");
ROUTE3097->setToField("stopTime");
ROUTE3097->setToNode("StandTimer");
Group3051->addChildren(*ROUTE3097);

CROUTE* ROUTE3098 = new CROUTE();
ROUTE3098->setFromField("touchTime");
ROUTE3098->setFromNode("Run_Touch");
ROUTE3098->setToField("stopTime");
ROUTE3098->setToNode("PitchTimer");
Group3051->addChildren(*ROUTE3098);

CROUTE* ROUTE3099 = new CROUTE();
ROUTE3099->setFromField("touchTime");
ROUTE3099->setFromNode("Run_Touch");
ROUTE3099->setToField("stopTime");
ROUTE3099->setToNode("YawTimer");
Group3051->addChildren(*ROUTE3099);

CROUTE* ROUTE3100 = new CROUTE();
ROUTE3100->setFromField("touchTime");
ROUTE3100->setFromNode("Run_Touch");
ROUTE3100->setToField("stopTime");
ROUTE3100->setToNode("RollTimer");
Group3051->addChildren(*ROUTE3100);

CROUTE* ROUTE3101 = new CROUTE();
ROUTE3101->setFromField("touchTime");
ROUTE3101->setFromNode("Run_Touch");
ROUTE3101->setToField("stopTime");
ROUTE3101->setToNode("WalkTimer");
Group3051->addChildren(*ROUTE3101);

CROUTE* ROUTE3102 = new CROUTE();
ROUTE3102->setFromField("touchTime");
ROUTE3102->setFromNode("Run_Touch");
ROUTE3102->setToField("stopTime");
ROUTE3102->setToNode("JumpTimer");
Group3051->addChildren(*ROUTE3102);

CROUTE* ROUTE3103 = new CROUTE();
ROUTE3103->setFromField("touchTime");
ROUTE3103->setFromNode("Run_Touch");
ROUTE3103->setToField("stopTime");
ROUTE3103->setToNode("KickTimer");
Group3051->addChildren(*ROUTE3103);

CROUTE* ROUTE3104 = new CROUTE();
ROUTE3104->setFromField("touchTime");
ROUTE3104->setFromNode("Run_Touch");
ROUTE3104->setToField("stopTime");
ROUTE3104->setToNode("StopTimer");
Group3051->addChildren(*ROUTE3104);

CROUTE* ROUTE3105 = new CROUTE();
ROUTE3105->setFromField("touchTime");
ROUTE3105->setFromNode("Run_Touch");
ROUTE3105->setToField("startTime");
ROUTE3105->setToNode("RunTimer");
Group3051->addChildren(*ROUTE3105);

CROUTE* ROUTE3106 = new CROUTE();
ROUTE3106->setFromField("touchTime");
ROUTE3106->setFromNode("Jump_Touch");
ROUTE3106->setToField("stopTime");
ROUTE3106->setToNode("StandTimer");
Group3051->addChildren(*ROUTE3106);

CROUTE* ROUTE3107 = new CROUTE();
ROUTE3107->setFromField("touchTime");
ROUTE3107->setFromNode("Jump_Touch");
ROUTE3107->setToField("stopTime");
ROUTE3107->setToNode("PitchTimer");
Group3051->addChildren(*ROUTE3107);

CROUTE* ROUTE3108 = new CROUTE();
ROUTE3108->setFromField("touchTime");
ROUTE3108->setFromNode("Jump_Touch");
ROUTE3108->setToField("stopTime");
ROUTE3108->setToNode("YawTimer");
Group3051->addChildren(*ROUTE3108);

CROUTE* ROUTE3109 = new CROUTE();
ROUTE3109->setFromField("touchTime");
ROUTE3109->setFromNode("Jump_Touch");
ROUTE3109->setToField("stopTime");
ROUTE3109->setToNode("RollTimer");
Group3051->addChildren(*ROUTE3109);

CROUTE* ROUTE3110 = new CROUTE();
ROUTE3110->setFromField("touchTime");
ROUTE3110->setFromNode("Jump_Touch");
ROUTE3110->setToField("stopTime");
ROUTE3110->setToNode("WalkTimer");
Group3051->addChildren(*ROUTE3110);

CROUTE* ROUTE3111 = new CROUTE();
ROUTE3111->setFromField("touchTime");
ROUTE3111->setFromNode("Jump_Touch");
ROUTE3111->setToField("stopTime");
ROUTE3111->setToNode("RunTimer");
Group3051->addChildren(*ROUTE3111);

CROUTE* ROUTE3112 = new CROUTE();
ROUTE3112->setFromField("touchTime");
ROUTE3112->setFromNode("Jump_Touch");
ROUTE3112->setToField("stopTime");
ROUTE3112->setToNode("KickTimer");
Group3051->addChildren(*ROUTE3112);

CROUTE* ROUTE3113 = new CROUTE();
ROUTE3113->setFromField("touchTime");
ROUTE3113->setFromNode("Jump_Touch");
ROUTE3113->setToField("stopTime");
ROUTE3113->setToNode("StopTimer");
Group3051->addChildren(*ROUTE3113);

CROUTE* ROUTE3114 = new CROUTE();
ROUTE3114->setFromField("touchTime");
ROUTE3114->setFromNode("Jump_Touch");
ROUTE3114->setToField("startTime");
ROUTE3114->setToNode("JumpTimer");
Group3051->addChildren(*ROUTE3114);

CROUTE* ROUTE3115 = new CROUTE();
ROUTE3115->setFromField("touchTime");
ROUTE3115->setFromNode("Kick_Touch");
ROUTE3115->setToField("stopTime");
ROUTE3115->setToNode("StandTimer");
Group3051->addChildren(*ROUTE3115);

CROUTE* ROUTE3116 = new CROUTE();
ROUTE3116->setFromField("touchTime");
ROUTE3116->setFromNode("Kick_Touch");
ROUTE3116->setToField("stopTime");
ROUTE3116->setToNode("PitchTimer");
Group3051->addChildren(*ROUTE3116);

CROUTE* ROUTE3117 = new CROUTE();
ROUTE3117->setFromField("touchTime");
ROUTE3117->setFromNode("Kick_Touch");
ROUTE3117->setToField("stopTime");
ROUTE3117->setToNode("YawTimer");
Group3051->addChildren(*ROUTE3117);

CROUTE* ROUTE3118 = new CROUTE();
ROUTE3118->setFromField("touchTime");
ROUTE3118->setFromNode("Kick_Touch");
ROUTE3118->setToField("stopTime");
ROUTE3118->setToNode("RollTimer");
Group3051->addChildren(*ROUTE3118);

CROUTE* ROUTE3119 = new CROUTE();
ROUTE3119->setFromField("touchTime");
ROUTE3119->setFromNode("Kick_Touch");
ROUTE3119->setToField("stopTime");
ROUTE3119->setToNode("WalkTimer");
Group3051->addChildren(*ROUTE3119);

CROUTE* ROUTE3120 = new CROUTE();
ROUTE3120->setFromField("touchTime");
ROUTE3120->setFromNode("Kick_Touch");
ROUTE3120->setToField("stopTime");
ROUTE3120->setToNode("RunTimer");
Group3051->addChildren(*ROUTE3120);

CROUTE* ROUTE3121 = new CROUTE();
ROUTE3121->setFromField("touchTime");
ROUTE3121->setFromNode("Kick_Touch");
ROUTE3121->setToField("stopTime");
ROUTE3121->setToNode("JumpTimer");
Group3051->addChildren(*ROUTE3121);

CROUTE* ROUTE3122 = new CROUTE();
ROUTE3122->setFromField("touchTime");
ROUTE3122->setFromNode("Kick_Touch");
ROUTE3122->setToField("stopTime");
ROUTE3122->setToNode("StopTimer");
Group3051->addChildren(*ROUTE3122);

CROUTE* ROUTE3123 = new CROUTE();
ROUTE3123->setFromField("touchTime");
ROUTE3123->setFromNode("Kick_Touch");
ROUTE3123->setToField("startTime");
ROUTE3123->setToNode("KickTimer");
Group3051->addChildren(*ROUTE3123);

CROUTE* ROUTE3124 = new CROUTE();
ROUTE3124->setFromField("touchTime");
ROUTE3124->setFromNode("Stop_Touch");
ROUTE3124->setToField("stopTime");
ROUTE3124->setToNode("StandTimer");
Group3051->addChildren(*ROUTE3124);

CROUTE* ROUTE3125 = new CROUTE();
ROUTE3125->setFromField("touchTime");
ROUTE3125->setFromNode("Stop_Touch");
ROUTE3125->setToField("stopTime");
ROUTE3125->setToNode("PitchTimer");
Group3051->addChildren(*ROUTE3125);

CROUTE* ROUTE3126 = new CROUTE();
ROUTE3126->setFromField("touchTime");
ROUTE3126->setFromNode("Stop_Touch");
ROUTE3126->setToField("stopTime");
ROUTE3126->setToNode("YawTimer");
Group3051->addChildren(*ROUTE3126);

CROUTE* ROUTE3127 = new CROUTE();
ROUTE3127->setFromField("touchTime");
ROUTE3127->setFromNode("Stop_Touch");
ROUTE3127->setToField("stopTime");
ROUTE3127->setToNode("RollTimer");
Group3051->addChildren(*ROUTE3127);

CROUTE* ROUTE3128 = new CROUTE();
ROUTE3128->setFromField("touchTime");
ROUTE3128->setFromNode("Stop_Touch");
ROUTE3128->setToField("stopTime");
ROUTE3128->setToNode("WalkTimer");
Group3051->addChildren(*ROUTE3128);

CROUTE* ROUTE3129 = new CROUTE();
ROUTE3129->setFromField("touchTime");
ROUTE3129->setFromNode("Stop_Touch");
ROUTE3129->setToField("stopTime");
ROUTE3129->setToNode("RunTimer");
Group3051->addChildren(*ROUTE3129);

CROUTE* ROUTE3130 = new CROUTE();
ROUTE3130->setFromField("touchTime");
ROUTE3130->setFromNode("Stop_Touch");
ROUTE3130->setToField("stopTime");
ROUTE3130->setToNode("JumpTimer");
Group3051->addChildren(*ROUTE3130);

CROUTE* ROUTE3131 = new CROUTE();
ROUTE3131->setFromField("touchTime");
ROUTE3131->setFromNode("Stop_Touch");
ROUTE3131->setToField("stopTime");
ROUTE3131->setToNode("KickTimer");
Group3051->addChildren(*ROUTE3131);

CROUTE* ROUTE3132 = new CROUTE();
ROUTE3132->setFromField("touchTime");
ROUTE3132->setFromNode("Stop_Touch");
ROUTE3132->setToField("startTime");
ROUTE3132->setToNode("StopTimer");
Group3051->addChildren(*ROUTE3132);

group->addChildren(*Group3051);

X3D0->setScene(*Scene31);

m_pScene.addRootNode(group);
}

/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Concretes.h"
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
meta3->setContent("HAnim1SpecificationLOA3Animation.x3d");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("description");
meta4->setContent("HAnim Specification reference example providing full coverage and visibility of all specified HAnim constructs, plus motion animations. Geometry visualizations are derived from HAnim1SpecificationLOA3Invisible.x3d visualization report. Resusable exemplar animations also added via heads-up display (HUD) interface to confirm proper parent-child relationships.");
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
meta7->setContent("19 February 2021");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("Image");
meta8->setContent("HAnim1SpecificationLOA3MotionH3DViewer.png");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("Image");
meta9->setContent("HAnim1SpecificationLOA3MotionInstantReality.png");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("Image");
meta10->setContent("HAnim1SpecificationLOA3MotionOctagaVS.png");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("Image");
meta11->setContent("HAnim1SpecificationLOA3MotionView3dscene.png");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("reference");
meta12->setContent("HAnim1SpecificationLOA3Illustrated.x3d");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("reference");
meta13->setContent("HAnim1SpecificationLOA3Invisible.x3d");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("reference");
meta14->setContent("HAnimSpecificationExampleChangeLog.txt");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("Image");
meta15->setContent("images/BonesAllSkeletonFrontViewLOA1.png");
head1->addMeta(*meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("Image");
meta16->setContent("images/BonesAllSkeletonFrontViewLOA2.png");
head1->addMeta(*meta16);

Cmeta* meta17 = new Cmeta();
meta17->setName("Image");
meta17->setContent("images/BonesAllSkeletonFrontViewLOA3.png");
head1->addMeta(*meta17);

Cmeta* meta18 = new Cmeta();
meta18->setName("reference");
meta18->setContent("Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.");
head1->addMeta(*meta18);

Cmeta* meta19 = new Cmeta();
meta19->setName("reference");
meta19->setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.ps");
head1->addMeta(*meta19);

Cmeta* meta20 = new Cmeta();
meta20->setName("reference");
meta20->setContent("tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf");
head1->addMeta(*meta20);

Cmeta* meta21 = new Cmeta();
meta21->setName("creator");
meta21->setContent("Matthew T. Beitler, Joe D. Williams, Don Brutzman");
head1->addMeta(*meta21);

Cmeta* meta22 = new Cmeta();
meta22->setName("translator");
meta22->setContent("Don Brutzman and Joe Williams");
head1->addMeta(*meta22);

Cmeta* meta23 = new Cmeta();
meta23->setName("generator");
meta23->setContent("BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo");
head1->addMeta(*meta23);

Cmeta* meta24 = new Cmeta();
meta24->setName("reference");
meta24->setContent("originals/LOA3ExampleSourceWithDiamondsOriginal.wrl");
head1->addMeta(*meta24);

Cmeta* meta25 = new Cmeta();
meta25->setName("reference");
meta25->setContent("originals/LOA3ExampleSourceWithDiamondsOriginal.x3d");
head1->addMeta(*meta25);

Cmeta* meta26 = new Cmeta();
meta26->setName("reference");
meta26->setContent("originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d");
head1->addMeta(*meta26);

Cmeta* meta27 = new Cmeta();
meta27->setName("generator");
meta27->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta27);

Cmeta* meta28 = new Cmeta();
meta28->setName("identifier");
meta28->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/HAnim1SpecificationLOA3Animation.x3d");
head1->addMeta(*meta28);

Cmeta* meta29 = new Cmeta();
meta29->setName("license");
meta29->setContent("../license.html");
head1->addMeta(*meta29);

X3D0->setHead(*head1);

CScene* Scene30 = new CScene();
CBackground* Background31 = (CBackground *)(m_pScene.createNode("Background"));
Background31->setSkyColor(new float[3]{0.3,0.3,0.3});
group->addChildren(*Background31);

CNavigationInfo* NavigationInfo32 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
group->addChildren(*NavigationInfo32);

CGroup* Group33 = (CGroup *)(m_pScene.createNode("Group"));
Group33->setDEF("Original_WorldInfo");
CWorldInfo* WorldInfo34 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo34->setInfo(new CString[1]{" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "}, 1);
WorldInfo34->setTitle("HANIM 200x Default Joint Centers, LOA3");
Group33->addChildren(*WorldInfo34);

group->addChildren(*Group33);

//TODO move viewpoints to be internal to HAnimHumanoid
//Viewpoint centerOfRotation=\"0 0.9149 0.0016\" matches initial at-rest locaton of the sacroliac. Note that these viewpoints are external to the HAnimHumanoid and do not move with the human.
CViewpoint* Viewpoint35 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint35->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint35->setDescription("Humanoid LOA 3 Front");
Viewpoint35->setPosition(new float[3]{0,0.4,4});
group->addChildren(*Viewpoint35);

CViewpoint* Viewpoint36 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint36->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint36->setDescription("Humanoid LOA 3 Front Close");
Viewpoint36->setPosition(new float[3]{0,0.8,2});
group->addChildren(*Viewpoint36);

CViewpoint* Viewpoint37 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint37->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint37->setDescription("Humanoid LOA 3 Front Closer");
Viewpoint37->setPosition(new float[3]{0,1.2,1});
group->addChildren(*Viewpoint37);

CViewpoint* Viewpoint38 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint38->setCenterOfRotation(new float[3]{0,1.5,0.0016});
Viewpoint38->setDescription("Humanoid LOA 3 Front Face");
Viewpoint38->setPosition(new float[3]{0,1.63,1});
group->addChildren(*Viewpoint38);

CViewpoint* Viewpoint39 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint39->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint39->setDescription("Humanoid LOA 3 Right Side");
Viewpoint39->setOrientation(new float[4]{0,1,0,1.5708});
Viewpoint39->setPosition(new float[3]{2.6,0.8,0});
group->addChildren(*Viewpoint39);

CViewpoint* Viewpoint40 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint40->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint40->setDescription("Humanoid LOA 3 Right Side Close");
Viewpoint40->setOrientation(new float[4]{0,1,0,1.2});
Viewpoint40->setPosition(new float[3]{1,0.8,0.5});
group->addChildren(*Viewpoint40);

CViewpoint* Viewpoint41 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint41->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint41->setDescription("Humanoid LOA 3 Left Side Close");
Viewpoint41->setOrientation(new float[4]{0,1,0,-1.2});
Viewpoint41->setPosition(new float[3]{-1,0.8,0.5});
group->addChildren(*Viewpoint41);

CViewpoint* Viewpoint42 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint42->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint42->setDescription("Humanoid LOA 3 Left Side");
Viewpoint42->setOrientation(new float[4]{0,1,0,-1.5708});
Viewpoint42->setPosition(new float[3]{-2.6,0.8,0});
group->addChildren(*Viewpoint42);

CViewpoint* Viewpoint43 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint43->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint43->setDescription("Humanoid LOA 3 Top");
Viewpoint43->setOrientation(new float[4]{1,0,0,-1.5708});
Viewpoint43->setPosition(new float[3]{0,3.5,0});
group->addChildren(*Viewpoint43);

CHAnimHumanoid* HAnimHumanoid44 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid44->setName("humanoid");
HAnimHumanoid44->setDEF("hanim_humanoid");
HAnimHumanoid44->setInfo(new CString[7]{"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman","authorEmail=HAnim@web3D.org","copyright=none","creationDate=12 May 1999","usageRestrictions=none","humanoidVersion=1.0","height=1.7504"}, 7);
HAnimHumanoid44->setVersion("1.0");
CHAnimJoint* HAnimJoint45 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint45->setName("humanoid_root");
HAnimJoint45->setDEF("hanim_humanoid_root");
HAnimJoint45->setCenter(new float[3]{0,0.824,0.0277});
HAnimJoint45->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint45->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment46 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment46->setName("sacrum");
HAnimSegment46->setDEF("hanim_sacrum");
//<HAnimJoint name='humanoid_root'/> visualization sphere within <HAnimSegment name='sacrum'/>
CTouchSensor* TouchSensor47 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor47->setDescription("HAnimJoint HumanoidRoot, HAnimSegment sacrum");
HAnimSegment46->addChildren(*TouchSensor47);

CTransform* Transform48 = (CTransform *)(m_pScene.createNode("Transform"));
Transform48->setTranslation(new float[3]{0,0.824,0.0277});
CShape* Shape49 = (CShape *)(m_pScene.createNode("Shape"));
Shape49->setDEF("HAnimJointShape");
CSphere* Sphere50 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere50->setRadius(0.006);
Shape49->setGeometry(Sphere50);

CAppearance* Appearance51 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance51->setDEF("HAnimJointAppearance");
CMaterial* Material52 = (CMaterial *)(m_pScene.createNode("Material"));
Material52->setDiffuseColor(new float[3]{1,0.5,0});
Material52->setTransparency(0.5);
Appearance51->setMaterial(*Material52);

Shape49->setAppearance(*Appearance51);

Transform48->addChildren(*Shape49);

HAnimSegment46->addChildren(*Transform48);

//HAnimSegment visualization line segment from parent <HAnimJoint name='humanoid_root'/> to <HAnimJoint name='sacroiliac'/>
CShape* Shape53 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet54 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet54->setVertexCount(new int[1]{2});
CCoordinate* Coordinate55 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate55->setPoint(new float[6]{0,0.824,0.0277,0,0.9149,0.0016});
LineSet54->setCoord(*Coordinate55);

CColorRGBA* ColorRGBA56 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA56->setDEF("HAnimSegmentLineColorRGBA");
ColorRGBA56->setColor(new float[8]{1,1,0,1,1,1,0,0.1});
LineSet54->setColor(*ColorRGBA56);

Shape53->setGeometry(LineSet54);

HAnimSegment46->addChildren(*Shape53);

//HAnimSegment visualization line segment from parent <HAnimJoint name='humanoid_root'/> to <HAnimJoint name='vl5'/>
CShape* Shape57 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet58 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet58->setVertexCount(new int[1]{2});
CCoordinate* Coordinate59 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate59->setPoint(new float[6]{0,0.824,0.0277,0.0028,1.0568,-0.0776});
LineSet58->setCoord(*Coordinate59);

CColorRGBA* ColorRGBA60 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA60->setUSE("HAnimSegmentLineColorRGBA");
LineSet58->setColor(*ColorRGBA60);

Shape57->setGeometry(LineSet58);

HAnimSegment46->addChildren(*Shape57);

HAnimJoint45->addChildren(*HAnimSegment46);

CHAnimJoint* HAnimJoint61 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint61->setName("sacroiliac");
HAnimJoint61->setDEF("hanim_sacroiliac");
HAnimJoint61->setCenter(new float[3]{0,0.9149,0.0016});
HAnimJoint61->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint61->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment62 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment62->setName("pelvis");
HAnimSegment62->setDEF("hanim_pelvis");
//<HAnimJoint name='sacroiliac'/> visualization sphere within <HAnimSegment name='pelvis'/>
CTouchSensor* TouchSensor63 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor63->setDescription("HAnimJoint sacroiliac, HAnimSegment pelvis");
HAnimSegment62->addChildren(*TouchSensor63);

CTransform* Transform64 = (CTransform *)(m_pScene.createNode("Transform"));
Transform64->setTranslation(new float[3]{0,0.9149,0.0016});
CShape* Shape65 = (CShape *)(m_pScene.createNode("Shape"));
Shape65->setUSE("HAnimJointShape");
Transform64->addChildren(*Shape65);

HAnimSegment62->addChildren(*Transform64);

//HAnimSegment visualization line segment from parent <HAnimJoint name='sacroiliac'/> to <HAnimJoint name='l_hip'/>
CShape* Shape66 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet67 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet67->setVertexCount(new int[1]{2});
CCoordinate* Coordinate68 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate68->setPoint(new float[6]{0,0.9149,0.0016,0.0961,0.9124,-0.0001});
LineSet67->setCoord(*Coordinate68);

CColorRGBA* ColorRGBA69 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA69->setUSE("HAnimSegmentLineColorRGBA");
LineSet67->setColor(*ColorRGBA69);

Shape66->setGeometry(LineSet67);

HAnimSegment62->addChildren(*Shape66);

//HAnimSegment visualization line segment from parent <HAnimJoint name='sacroiliac'/> to <HAnimJoint name='r_hip'/>
CShape* Shape70 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet71 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet71->setVertexCount(new int[1]{2});
CCoordinate* Coordinate72 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate72->setPoint(new float[6]{0,0.9149,0.0016,-0.0961,0.9124,-0.0001});
LineSet71->setCoord(*Coordinate72);

CColorRGBA* ColorRGBA73 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA73->setUSE("HAnimSegmentLineColorRGBA");
LineSet71->setColor(*ColorRGBA73);

Shape70->setGeometry(LineSet71);

HAnimSegment62->addChildren(*Shape70);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_iliocristale'/>
CShape* Shape74 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet75 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet75->setVertexCount(new int[1]{2});
CCoordinate* Coordinate76 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate76->setPoint(new float[6]{0,0.9149,0.0016,-0.1525,1.0628,0.0035});
LineSet75->setCoord(*Coordinate76);

CColorRGBA* ColorRGBA77 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA77->setDEF("HAnimSiteLineColorRGBA");
ColorRGBA77->setColor(new float[8]{1,0,0,1,1,0,0,0.1});
LineSet75->setColor(*ColorRGBA77);

Shape74->setGeometry(LineSet75);

HAnimSegment62->addChildren(*Shape74);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_trochanterion'/>
CShape* Shape78 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet79 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet79->setVertexCount(new int[1]{2});
CCoordinate* Coordinate80 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate80->setPoint(new float[6]{0,0.9149,0.0016,-0.1689,0.8419,0.0352});
LineSet79->setCoord(*Coordinate80);

CColorRGBA* ColorRGBA81 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA81->setUSE("HAnimSiteLineColorRGBA");
LineSet79->setColor(*ColorRGBA81);

Shape78->setGeometry(LineSet79);

HAnimSegment62->addChildren(*Shape78);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_iliocristale'/>
CShape* Shape82 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet83 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet83->setVertexCount(new int[1]{2});
CCoordinate* Coordinate84 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate84->setPoint(new float[6]{0,0.9149,0.0016,0.1612,1.0537,0.0008});
LineSet83->setCoord(*Coordinate84);

CColorRGBA* ColorRGBA85 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA85->setUSE("HAnimSiteLineColorRGBA");
LineSet83->setColor(*ColorRGBA85);

Shape82->setGeometry(LineSet83);

HAnimSegment62->addChildren(*Shape82);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_trochanterion'/>
CShape* Shape86 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet87 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet87->setVertexCount(new int[1]{2});
CCoordinate* Coordinate88 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate88->setPoint(new float[6]{0,0.9149,0.0016,0.1677,0.8336,0.0303});
LineSet87->setCoord(*Coordinate88);

CColorRGBA* ColorRGBA89 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA89->setUSE("HAnimSiteLineColorRGBA");
LineSet87->setColor(*ColorRGBA89);

Shape86->setGeometry(LineSet87);

HAnimSegment62->addChildren(*Shape86);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_asis'/>
CShape* Shape90 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet91 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet91->setVertexCount(new int[1]{2});
CCoordinate* Coordinate92 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate92->setPoint(new float[6]{0,0.9149,0.0016,-0.0887,1.0021,0.1112});
LineSet91->setCoord(*Coordinate92);

CColorRGBA* ColorRGBA93 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA93->setUSE("HAnimSiteLineColorRGBA");
LineSet91->setColor(*ColorRGBA93);

Shape90->setGeometry(LineSet91);

HAnimSegment62->addChildren(*Shape90);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_asis'/>
CShape* Shape94 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet95 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet95->setVertexCount(new int[1]{2});
CCoordinate* Coordinate96 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate96->setPoint(new float[6]{0,0.9149,0.0016,0.0925,0.9983,0.1052});
LineSet95->setCoord(*Coordinate96);

CColorRGBA* ColorRGBA97 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA97->setUSE("HAnimSiteLineColorRGBA");
LineSet95->setColor(*ColorRGBA97);

Shape94->setGeometry(LineSet95);

HAnimSegment62->addChildren(*Shape94);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_psis'/>
CShape* Shape98 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet99 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet99->setVertexCount(new int[1]{2});
CCoordinate* Coordinate100 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate100->setPoint(new float[6]{0,0.9149,0.0016,-0.0716,1.019,-0.1138});
LineSet99->setCoord(*Coordinate100);

CColorRGBA* ColorRGBA101 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA101->setUSE("HAnimSiteLineColorRGBA");
LineSet99->setColor(*ColorRGBA101);

Shape98->setGeometry(LineSet99);

HAnimSegment62->addChildren(*Shape98);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_psis'/>
CShape* Shape102 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet103 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet103->setVertexCount(new int[1]{2});
CCoordinate* Coordinate104 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate104->setPoint(new float[6]{0,0.9149,0.0016,0.0774,1.019,-0.1151});
LineSet103->setCoord(*Coordinate104);

CColorRGBA* ColorRGBA105 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA105->setUSE("HAnimSiteLineColorRGBA");
LineSet103->setColor(*ColorRGBA105);

Shape102->setGeometry(LineSet103);

HAnimSegment62->addChildren(*Shape102);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='crotch'/>
CShape* Shape106 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet107 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet107->setVertexCount(new int[1]{2});
CCoordinate* Coordinate108 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate108->setPoint(new float[6]{0,0.9149,0.0016,0.0034,0.8266,0.0257});
LineSet107->setCoord(*Coordinate108);

CColorRGBA* ColorRGBA109 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA109->setUSE("HAnimSiteLineColorRGBA");
LineSet107->setColor(*ColorRGBA109);

Shape106->setGeometry(LineSet107);

HAnimSegment62->addChildren(*Shape106);

CHAnimSite* HAnimSite110 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite110->setName("r_iliocristale_pt");
HAnimSite110->setDEF("hanim_r_iliocristale_pt");
HAnimSite110->setTranslation(new float[3]{-0.1525,1.0628,0.0035});
//HAnimSite visualization shape
CTouchSensor* TouchSensor111 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor111->setDescription("HAnimSite r_iliocristale");
HAnimSite110->addChildren(*TouchSensor111);

CShape* Shape112 = (CShape *)(m_pScene.createNode("Shape"));
Shape112->setDEF("HAnimSiteShape");
CIndexedFaceSet* IndexedFaceSet113 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet113->setDEF("DiamondIFS");
IndexedFaceSet113->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet113->setCreaseAngle(0.5);
IndexedFaceSet113->setSolid(False);
CCoordinate* Coordinate114 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate114->setPoint(new float[18]{0,0.008,0,-0.008,0,0,0,0,0.008,0.008,0,0,0,0,-0.008,0,-0.008,0});
IndexedFaceSet113->setCoord(*Coordinate114);

Shape112->setGeometry(IndexedFaceSet113);

CAppearance* Appearance115 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material116 = (CMaterial *)(m_pScene.createNode("Material"));
Material116->setDiffuseColor(new float[3]{1,0,0});
Appearance115->setMaterial(*Material116);

Shape112->setAppearance(*Appearance115);

HAnimSite110->addChildren(*Shape112);

HAnimSegment62->addChildren(*HAnimSite110);

CHAnimSite* HAnimSite117 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite117->setName("r_trochanterion_pt");
HAnimSite117->setDEF("hanim_r_trochanterion_pt");
HAnimSite117->setTranslation(new float[3]{-0.1689,0.8419,0.0352});
//HAnimSite visualization shape
CTouchSensor* TouchSensor118 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor118->setDescription("HAnimSite r_trochanterion");
HAnimSite117->addChildren(*TouchSensor118);

CShape* Shape119 = (CShape *)(m_pScene.createNode("Shape"));
Shape119->setUSE("HAnimSiteShape");
HAnimSite117->addChildren(*Shape119);

HAnimSegment62->addChildren(*HAnimSite117);

CHAnimSite* HAnimSite120 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite120->setName("l_iliocristale_pt");
HAnimSite120->setDEF("hanim_l_iliocristale_pt");
HAnimSite120->setTranslation(new float[3]{0.1612,1.0537,0.0008});
//HAnimSite visualization shape
CTouchSensor* TouchSensor121 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor121->setDescription("HAnimSite l_iliocristale");
HAnimSite120->addChildren(*TouchSensor121);

CShape* Shape122 = (CShape *)(m_pScene.createNode("Shape"));
Shape122->setUSE("HAnimSiteShape");
HAnimSite120->addChildren(*Shape122);

HAnimSegment62->addChildren(*HAnimSite120);

CHAnimSite* HAnimSite123 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite123->setName("l_trochanterion_pt");
HAnimSite123->setDEF("hanim_l_trochanterion_pt");
HAnimSite123->setTranslation(new float[3]{0.1677,0.8336,0.0303});
//HAnimSite visualization shape
CTouchSensor* TouchSensor124 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor124->setDescription("HAnimSite l_trochanterion");
HAnimSite123->addChildren(*TouchSensor124);

CShape* Shape125 = (CShape *)(m_pScene.createNode("Shape"));
Shape125->setUSE("HAnimSiteShape");
HAnimSite123->addChildren(*Shape125);

HAnimSegment62->addChildren(*HAnimSite123);

CHAnimSite* HAnimSite126 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite126->setName("r_asis_pt");
HAnimSite126->setDEF("hanim_r_asis_pt");
HAnimSite126->setTranslation(new float[3]{-0.0887,1.0021,0.1112});
//HAnimSite visualization shape
CTouchSensor* TouchSensor127 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor127->setDescription("HAnimSite r_asis");
HAnimSite126->addChildren(*TouchSensor127);

CShape* Shape128 = (CShape *)(m_pScene.createNode("Shape"));
Shape128->setUSE("HAnimSiteShape");
HAnimSite126->addChildren(*Shape128);

HAnimSegment62->addChildren(*HAnimSite126);

CHAnimSite* HAnimSite129 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite129->setName("l_asis_pt");
HAnimSite129->setDEF("hanim_l_asis_pt");
HAnimSite129->setTranslation(new float[3]{0.0925,0.9983,0.1052});
//HAnimSite visualization shape
CTouchSensor* TouchSensor130 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor130->setDescription("HAnimSite l_asis");
HAnimSite129->addChildren(*TouchSensor130);

CShape* Shape131 = (CShape *)(m_pScene.createNode("Shape"));
Shape131->setUSE("HAnimSiteShape");
HAnimSite129->addChildren(*Shape131);

HAnimSegment62->addChildren(*HAnimSite129);

CHAnimSite* HAnimSite132 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite132->setName("r_psis_pt");
HAnimSite132->setDEF("hanim_r_psis_pt");
HAnimSite132->setTranslation(new float[3]{-0.0716,1.019,-0.1138});
//HAnimSite visualization shape
CTouchSensor* TouchSensor133 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor133->setDescription("HAnimSite r_psis");
HAnimSite132->addChildren(*TouchSensor133);

CShape* Shape134 = (CShape *)(m_pScene.createNode("Shape"));
Shape134->setUSE("HAnimSiteShape");
HAnimSite132->addChildren(*Shape134);

HAnimSegment62->addChildren(*HAnimSite132);

CHAnimSite* HAnimSite135 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite135->setName("l_psis_pt");
HAnimSite135->setDEF("hanim_l_psis_pt");
HAnimSite135->setTranslation(new float[3]{0.0774,1.019,-0.1151});
//HAnimSite visualization shape
CTouchSensor* TouchSensor136 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor136->setDescription("HAnimSite l_psis");
HAnimSite135->addChildren(*TouchSensor136);

CShape* Shape137 = (CShape *)(m_pScene.createNode("Shape"));
Shape137->setUSE("HAnimSiteShape");
HAnimSite135->addChildren(*Shape137);

HAnimSegment62->addChildren(*HAnimSite135);

CHAnimSite* HAnimSite138 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite138->setName("crotch_pt");
HAnimSite138->setDEF("hanim_crotch_pt");
HAnimSite138->setTranslation(new float[3]{0.0034,0.8266,0.0257});
//HAnimSite visualization shape
CTouchSensor* TouchSensor139 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor139->setDescription("HAnimSite crotch");
HAnimSite138->addChildren(*TouchSensor139);

CShape* Shape140 = (CShape *)(m_pScene.createNode("Shape"));
Shape140->setUSE("HAnimSiteShape");
HAnimSite138->addChildren(*Shape140);

HAnimSegment62->addChildren(*HAnimSite138);

HAnimJoint61->addChildren(*HAnimSegment62);

CHAnimJoint* HAnimJoint141 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint141->setName("l_hip");
HAnimJoint141->setDEF("hanim_l_hip");
HAnimJoint141->setCenter(new float[3]{0.0961,0.9124,-0.0001});
HAnimJoint141->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint141->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment142 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment142->setName("l_thigh");
HAnimSegment142->setDEF("hanim_l_thigh");
//<HAnimJoint name='l_hip'/> visualization sphere within <HAnimSegment name='l_thigh'/>
CTouchSensor* TouchSensor143 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor143->setDescription("HAnimJoint l_hip, HAnimSegment l_thigh");
HAnimSegment142->addChildren(*TouchSensor143);

CTransform* Transform144 = (CTransform *)(m_pScene.createNode("Transform"));
Transform144->setTranslation(new float[3]{0.0961,0.9124,-0.0001});
CShape* Shape145 = (CShape *)(m_pScene.createNode("Shape"));
Shape145->setUSE("HAnimJointShape");
Transform144->addChildren(*Shape145);

HAnimSegment142->addChildren(*Transform144);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_hip'/> to <HAnimJoint name='l_knee'/>
CShape* Shape146 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet147 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet147->setVertexCount(new int[1]{2});
CCoordinate* Coordinate148 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate148->setPoint(new float[6]{0.0961,0.9124,-0.0001,0.104,0.4867,0.0308});
LineSet147->setCoord(*Coordinate148);

CColorRGBA* ColorRGBA149 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA149->setUSE("HAnimSegmentLineColorRGBA");
LineSet147->setColor(*ColorRGBA149);

Shape146->setGeometry(LineSet147);

HAnimSegment142->addChildren(*Shape146);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_knee_crease'/>
CShape* Shape150 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet151 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet151->setVertexCount(new int[1]{2});
CCoordinate* Coordinate152 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate152->setPoint(new float[6]{0.0961,0.9124,-0.0001,0.0993,0.4881,-0.0309});
LineSet151->setCoord(*Coordinate152);

CColorRGBA* ColorRGBA153 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA153->setUSE("HAnimSiteLineColorRGBA");
LineSet151->setColor(*ColorRGBA153);

Shape150->setGeometry(LineSet151);

HAnimSegment142->addChildren(*Shape150);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_lateral_epicn'/>
CShape* Shape154 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet155 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet155->setVertexCount(new int[1]{2});
CCoordinate* Coordinate156 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate156->setPoint(new float[6]{0.0961,0.9124,-0.0001,0.1598,0.4967,0.0297});
LineSet155->setCoord(*Coordinate156);

CColorRGBA* ColorRGBA157 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA157->setUSE("HAnimSiteLineColorRGBA");
LineSet155->setColor(*ColorRGBA157);

Shape154->setGeometry(LineSet155);

HAnimSegment142->addChildren(*Shape154);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_medial_epicn'/>
CShape* Shape158 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet159 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet159->setVertexCount(new int[1]{2});
CCoordinate* Coordinate160 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate160->setPoint(new float[6]{0.0961,0.9124,-0.0001,0.0398,0.4946,0.0303});
LineSet159->setCoord(*Coordinate160);

CColorRGBA* ColorRGBA161 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA161->setUSE("HAnimSiteLineColorRGBA");
LineSet159->setColor(*ColorRGBA161);

Shape158->setGeometry(LineSet159);

HAnimSegment142->addChildren(*Shape158);

CHAnimSite* HAnimSite162 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite162->setName("l_knee_crease_pt");
HAnimSite162->setDEF("hanim_l_knee_crease_pt");
HAnimSite162->setTranslation(new float[3]{0.0993,0.4881,-0.0309});
//HAnimSite visualization shape
CTouchSensor* TouchSensor163 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor163->setDescription("HAnimSite l_knee_crease");
HAnimSite162->addChildren(*TouchSensor163);

CShape* Shape164 = (CShape *)(m_pScene.createNode("Shape"));
Shape164->setUSE("HAnimSiteShape");
HAnimSite162->addChildren(*Shape164);

HAnimSegment142->addChildren(*HAnimSite162);

CHAnimSite* HAnimSite165 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite165->setName("l_femoral_lateral_epicn_pt");
HAnimSite165->setDEF("hanim_l_femoral_lateral_epicn_pt");
HAnimSite165->setTranslation(new float[3]{0.1598,0.4967,0.0297});
//HAnimSite visualization shape
CTouchSensor* TouchSensor166 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor166->setDescription("HAnimSite l_femoral_lateral_epicn");
HAnimSite165->addChildren(*TouchSensor166);

CShape* Shape167 = (CShape *)(m_pScene.createNode("Shape"));
Shape167->setUSE("HAnimSiteShape");
HAnimSite165->addChildren(*Shape167);

HAnimSegment142->addChildren(*HAnimSite165);

CHAnimSite* HAnimSite168 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite168->setName("l_femoral_medial_epicn_pt");
HAnimSite168->setDEF("hanim_l_femoral_medial_epicn_pt");
HAnimSite168->setTranslation(new float[3]{0.0398,0.4946,0.0303});
//HAnimSite visualization shape
CTouchSensor* TouchSensor169 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor169->setDescription("HAnimSite l_femoral_medial_epicn");
HAnimSite168->addChildren(*TouchSensor169);

CShape* Shape170 = (CShape *)(m_pScene.createNode("Shape"));
Shape170->setUSE("HAnimSiteShape");
HAnimSite168->addChildren(*Shape170);

HAnimSegment142->addChildren(*HAnimSite168);

HAnimJoint141->addChildren(*HAnimSegment142);

CHAnimJoint* HAnimJoint171 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint171->setName("l_knee");
HAnimJoint171->setDEF("hanim_l_knee");
HAnimJoint171->setCenter(new float[3]{0.104,0.4867,0.0308});
HAnimJoint171->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint171->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment172 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment172->setName("l_calf");
HAnimSegment172->setDEF("hanim_l_calf");
//<HAnimJoint name='l_knee'/> visualization sphere within <HAnimSegment name='l_calf'/>
CTouchSensor* TouchSensor173 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor173->setDescription("HAnimJoint l_knee, HAnimSegment l_calf");
HAnimSegment172->addChildren(*TouchSensor173);

CTransform* Transform174 = (CTransform *)(m_pScene.createNode("Transform"));
Transform174->setTranslation(new float[3]{0.104,0.4867,0.0308});
CShape* Shape175 = (CShape *)(m_pScene.createNode("Shape"));
Shape175->setUSE("HAnimJointShape");
Transform174->addChildren(*Shape175);

HAnimSegment172->addChildren(*Transform174);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_knee'/> to <HAnimJoint name='l_ankle'/>
CShape* Shape176 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet177 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet177->setVertexCount(new int[1]{2});
CCoordinate* Coordinate178 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate178->setPoint(new float[6]{0.104,0.4867,0.0308,0.1101,0.0656,-0.0736});
LineSet177->setCoord(*Coordinate178);

CColorRGBA* ColorRGBA179 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA179->setUSE("HAnimSegmentLineColorRGBA");
LineSet177->setColor(*ColorRGBA179);

Shape176->setGeometry(LineSet177);

HAnimSegment172->addChildren(*Shape176);

HAnimJoint171->addChildren(*HAnimSegment172);

CHAnimJoint* HAnimJoint180 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint180->setName("l_ankle");
HAnimJoint180->setDEF("hanim_l_ankle");
HAnimJoint180->setCenter(new float[3]{0.1101,0.0656,-0.0736});
HAnimJoint180->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint180->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment181 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment181->setName("l_hindfoot");
HAnimSegment181->setDEF("hanim_l_hindfoot");
//<HAnimJoint name='l_ankle'/> visualization sphere within <HAnimSegment name='l_hindfoot'/>
CTouchSensor* TouchSensor182 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor182->setDescription("HAnimJoint l_ankle, HAnimSegment l_hindfoot");
HAnimSegment181->addChildren(*TouchSensor182);

CTransform* Transform183 = (CTransform *)(m_pScene.createNode("Transform"));
Transform183->setTranslation(new float[3]{0.1101,0.0656,-0.0736});
CShape* Shape184 = (CShape *)(m_pScene.createNode("Shape"));
Shape184->setUSE("HAnimJointShape");
Transform183->addChildren(*Shape184);

HAnimSegment181->addChildren(*Transform183);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ankle'/> to <HAnimJoint name='l_subtalar'/>
CShape* Shape185 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet186 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet186->setVertexCount(new int[1]{2});
CCoordinate* Coordinate187 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate187->setPoint(new float[6]{0.1101,0.0656,-0.0736,0.1086,0.0001,-0.0368});
LineSet186->setCoord(*Coordinate187);

CColorRGBA* ColorRGBA188 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA188->setUSE("HAnimSegmentLineColorRGBA");
LineSet186->setColor(*ColorRGBA188);

Shape185->setGeometry(LineSet186);

HAnimSegment181->addChildren(*Shape185);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_lateral_malleolus'/>
CShape* Shape189 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet190 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet190->setVertexCount(new int[1]{2});
CCoordinate* Coordinate191 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate191->setPoint(new float[6]{0.1101,0.0656,-0.0736,0.1308,0.0597,-0.1032});
LineSet190->setCoord(*Coordinate191);

CColorRGBA* ColorRGBA192 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA192->setUSE("HAnimSiteLineColorRGBA");
LineSet190->setColor(*ColorRGBA192);

Shape189->setGeometry(LineSet190);

HAnimSegment181->addChildren(*Shape189);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_medial_malleolus'/>
CShape* Shape193 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet194 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet194->setVertexCount(new int[1]{2});
CCoordinate* Coordinate195 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate195->setPoint(new float[6]{0.1101,0.0656,-0.0736,0.089,0.0716,-0.0881});
LineSet194->setCoord(*Coordinate195);

CColorRGBA* ColorRGBA196 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA196->setUSE("HAnimSiteLineColorRGBA");
LineSet194->setColor(*ColorRGBA196);

Shape193->setGeometry(LineSet194);

HAnimSegment181->addChildren(*Shape193);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_sphyrion'/>
CShape* Shape197 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet198 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet198->setVertexCount(new int[1]{2});
CCoordinate* Coordinate199 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate199->setPoint(new float[6]{0.1101,0.0656,-0.0736,0.089,0.0575,-0.0943});
LineSet198->setCoord(*Coordinate199);

CColorRGBA* ColorRGBA200 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA200->setUSE("HAnimSiteLineColorRGBA");
LineSet198->setColor(*ColorRGBA200);

Shape197->setGeometry(LineSet198);

HAnimSegment181->addChildren(*Shape197);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_calcaneous_post'/>
CShape* Shape201 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet202 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet202->setVertexCount(new int[1]{2});
CCoordinate* Coordinate203 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate203->setPoint(new float[6]{0.1101,0.0656,-0.0736,0.0974,0.0259,-0.1171});
LineSet202->setCoord(*Coordinate203);

CColorRGBA* ColorRGBA204 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA204->setUSE("HAnimSiteLineColorRGBA");
LineSet202->setColor(*ColorRGBA204);

Shape201->setGeometry(LineSet202);

HAnimSegment181->addChildren(*Shape201);

CHAnimSite* HAnimSite205 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite205->setName("l_lateral_malleolus_pt");
HAnimSite205->setDEF("hanim_l_lateral_malleolus_pt");
HAnimSite205->setTranslation(new float[3]{0.1308,0.0597,-0.1032});
//HAnimSite visualization shape
CTouchSensor* TouchSensor206 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor206->setDescription("HAnimSite l_lateral_malleolus");
HAnimSite205->addChildren(*TouchSensor206);

CShape* Shape207 = (CShape *)(m_pScene.createNode("Shape"));
Shape207->setUSE("HAnimSiteShape");
HAnimSite205->addChildren(*Shape207);

HAnimSegment181->addChildren(*HAnimSite205);

CHAnimSite* HAnimSite208 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite208->setName("l_medial_malleolus_pt");
HAnimSite208->setDEF("hanim_l_medial_malleolus_pt");
HAnimSite208->setTranslation(new float[3]{0.089,0.0716,-0.0881});
//HAnimSite visualization shape
CTouchSensor* TouchSensor209 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor209->setDescription("HAnimSite l_medial_malleolus");
HAnimSite208->addChildren(*TouchSensor209);

CShape* Shape210 = (CShape *)(m_pScene.createNode("Shape"));
Shape210->setUSE("HAnimSiteShape");
HAnimSite208->addChildren(*Shape210);

HAnimSegment181->addChildren(*HAnimSite208);

CHAnimSite* HAnimSite211 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite211->setName("l_sphyrion_pt");
HAnimSite211->setDEF("hanim_l_sphyrion_pt");
HAnimSite211->setTranslation(new float[3]{0.089,0.0575,-0.0943});
//HAnimSite visualization shape
CTouchSensor* TouchSensor212 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor212->setDescription("HAnimSite l_sphyrion");
HAnimSite211->addChildren(*TouchSensor212);

CShape* Shape213 = (CShape *)(m_pScene.createNode("Shape"));
Shape213->setUSE("HAnimSiteShape");
HAnimSite211->addChildren(*Shape213);

HAnimSegment181->addChildren(*HAnimSite211);

CHAnimSite* HAnimSite214 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite214->setName("l_calcaneous_post_pt");
HAnimSite214->setDEF("hanim_l_calcaneous_post_pt");
HAnimSite214->setTranslation(new float[3]{0.0974,0.0259,-0.1171});
//HAnimSite visualization shape
CTouchSensor* TouchSensor215 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor215->setDescription("HAnimSite l_calcaneous_post");
HAnimSite214->addChildren(*TouchSensor215);

CShape* Shape216 = (CShape *)(m_pScene.createNode("Shape"));
Shape216->setUSE("HAnimSiteShape");
HAnimSite214->addChildren(*Shape216);

HAnimSegment181->addChildren(*HAnimSite214);

HAnimJoint180->addChildren(*HAnimSegment181);

CHAnimJoint* HAnimJoint217 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint217->setName("l_subtalar");
HAnimJoint217->setDEF("hanim_l_subtalar");
HAnimJoint217->setCenter(new float[3]{0.1086,0.0001,-0.0368});
HAnimJoint217->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint217->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment218 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment218->setName("l_midproximal");
HAnimSegment218->setDEF("hanim_l_midproximal");
//<HAnimJoint name='l_subtalar'/> visualization sphere within <HAnimSegment name='l_midproximal'/>
CTouchSensor* TouchSensor219 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor219->setDescription("HAnimJoint l_subtalar, HAnimSegment l_midproximal");
HAnimSegment218->addChildren(*TouchSensor219);

CTransform* Transform220 = (CTransform *)(m_pScene.createNode("Transform"));
Transform220->setTranslation(new float[3]{0.1086,0.0001,-0.0368});
CShape* Shape221 = (CShape *)(m_pScene.createNode("Shape"));
Shape221->setUSE("HAnimJointShape");
Transform220->addChildren(*Shape221);

HAnimSegment218->addChildren(*Transform220);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_subtalar'/> to <HAnimJoint name='l_midtarsal'/>
CShape* Shape222 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet223 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet223->setVertexCount(new int[1]{2});
CCoordinate* Coordinate224 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate224->setPoint(new float[6]{0.1086,0.0001,-0.0368,0.1086,0.0001,0.0368});
LineSet223->setCoord(*Coordinate224);

CColorRGBA* ColorRGBA225 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA225->setUSE("HAnimSegmentLineColorRGBA");
LineSet223->setColor(*ColorRGBA225);

Shape222->setGeometry(LineSet223);

HAnimSegment218->addChildren(*Shape222);

HAnimJoint217->addChildren(*HAnimSegment218);

CHAnimJoint* HAnimJoint226 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint226->setName("l_midtarsal");
HAnimJoint226->setDEF("hanim_l_midtarsal");
HAnimJoint226->setCenter(new float[3]{0.1086,0.0001,0.0368});
HAnimJoint226->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint226->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment227 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment227->setName("l_middistal");
HAnimSegment227->setDEF("hanim_l_middistal");
//<HAnimJoint name='l_midtarsal'/> visualization sphere within <HAnimSegment name='l_middistal'/>
CTouchSensor* TouchSensor228 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor228->setDescription("HAnimJoint l_midtarsal, HAnimSegment l_middistal");
HAnimSegment227->addChildren(*TouchSensor228);

CTransform* Transform229 = (CTransform *)(m_pScene.createNode("Transform"));
Transform229->setTranslation(new float[3]{0.1086,0.0001,0.0368});
CShape* Shape230 = (CShape *)(m_pScene.createNode("Shape"));
Shape230->setUSE("HAnimJointShape");
Transform229->addChildren(*Shape230);

HAnimSegment227->addChildren(*Transform229);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_midtarsal'/> to <HAnimJoint name='l_metatarsal'/>
CShape* Shape231 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet232 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet232->setVertexCount(new int[1]{2});
CCoordinate* Coordinate233 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate233->setPoint(new float[6]{0.1086,0.0001,0.0368,0.1086,0,0.0762});
LineSet232->setCoord(*Coordinate233);

CColorRGBA* ColorRGBA234 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA234->setUSE("HAnimSegmentLineColorRGBA");
LineSet232->setColor(*ColorRGBA234);

Shape231->setGeometry(LineSet232);

HAnimSegment227->addChildren(*Shape231);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_midtarsal'/> to <HAnimSite name='l_metatarsal_pha1'/>
CShape* Shape235 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet236 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet236->setVertexCount(new int[1]{2});
CCoordinate* Coordinate237 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate237->setPoint(new float[6]{0.1086,0.0001,0.0368,0.0816,0.0232,0.0106});
LineSet236->setCoord(*Coordinate237);

CColorRGBA* ColorRGBA238 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA238->setUSE("HAnimSiteLineColorRGBA");
LineSet236->setColor(*ColorRGBA238);

Shape235->setGeometry(LineSet236);

HAnimSegment227->addChildren(*Shape235);

CHAnimSite* HAnimSite239 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite239->setName("l_metatarsal_pha1_pt");
HAnimSite239->setDEF("hanim_l_metatarsal_pha1_pt");
HAnimSite239->setTranslation(new float[3]{0.0816,0.0232,0.0106});
//HAnimSite visualization shape
CTouchSensor* TouchSensor240 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor240->setDescription("HAnimSite l_metatarsal_pha1");
HAnimSite239->addChildren(*TouchSensor240);

CShape* Shape241 = (CShape *)(m_pScene.createNode("Shape"));
Shape241->setUSE("HAnimSiteShape");
HAnimSite239->addChildren(*Shape241);

HAnimSegment227->addChildren(*HAnimSite239);

HAnimJoint226->addChildren(*HAnimSegment227);

CHAnimJoint* HAnimJoint242 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint242->setName("l_metatarsal");
HAnimJoint242->setDEF("hanim_l_metatarsal");
HAnimJoint242->setCenter(new float[3]{0.1086,0,0.0762});
HAnimJoint242->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint242->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment243 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment243->setName("l_forefoot");
HAnimSegment243->setDEF("hanim_l_forefoot");
//<HAnimJoint name='l_metatarsal'/> visualization sphere within <HAnimSegment name='l_forefoot'/>
CTouchSensor* TouchSensor244 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor244->setDescription("HAnimJoint l_metatarsal, HAnimSegment l_forefoot");
HAnimSegment243->addChildren(*TouchSensor244);

CTransform* Transform245 = (CTransform *)(m_pScene.createNode("Transform"));
Transform245->setTranslation(new float[3]{0.1086,0,0.0762});
CShape* Shape246 = (CShape *)(m_pScene.createNode("Shape"));
Shape246->setUSE("HAnimJointShape");
Transform245->addChildren(*Shape246);

HAnimSegment243->addChildren(*Transform245);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_forefoot_tip'/>
CShape* Shape247 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet248 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet248->setVertexCount(new int[1]{2});
CCoordinate* Coordinate249 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate249->setPoint(new float[6]{0.1086,0,0.0762,0.1354,0.0016,0.1476});
LineSet248->setCoord(*Coordinate249);

CColorRGBA* ColorRGBA250 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA250->setUSE("HAnimSiteLineColorRGBA");
LineSet248->setColor(*ColorRGBA250);

Shape247->setGeometry(LineSet248);

HAnimSegment243->addChildren(*Shape247);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_metatarsal_pha5'/>
CShape* Shape251 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet252 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet252->setVertexCount(new int[1]{2});
CCoordinate* Coordinate253 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate253->setPoint(new float[6]{0.1086,0,0.0762,0.1825,0.007,0.0928});
LineSet252->setCoord(*Coordinate253);

CColorRGBA* ColorRGBA254 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA254->setUSE("HAnimSiteLineColorRGBA");
LineSet252->setColor(*ColorRGBA254);

Shape251->setGeometry(LineSet252);

HAnimSegment243->addChildren(*Shape251);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_digit2'/>
CShape* Shape255 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet256 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet256->setVertexCount(new int[1]{2});
CCoordinate* Coordinate257 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate257->setPoint(new float[6]{0.1086,0,0.0762,0.1195,0.0079,0.1433});
LineSet256->setCoord(*Coordinate257);

CColorRGBA* ColorRGBA258 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA258->setUSE("HAnimSiteLineColorRGBA");
LineSet256->setColor(*ColorRGBA258);

Shape255->setGeometry(LineSet256);

HAnimSegment243->addChildren(*Shape255);

CHAnimSite* HAnimSite259 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite259->setName("l_forefoot_tip");
HAnimSite259->setDEF("hanim_l_forefoot_tip");
HAnimSite259->setTranslation(new float[3]{0.1354,0.0016,0.1476});
//HAnimSite visualization shape
CTouchSensor* TouchSensor260 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor260->setDescription("HAnimSite l_forefoot_tip");
HAnimSite259->addChildren(*TouchSensor260);

CShape* Shape261 = (CShape *)(m_pScene.createNode("Shape"));
Shape261->setUSE("HAnimSiteShape");
HAnimSite259->addChildren(*Shape261);

HAnimSegment243->addChildren(*HAnimSite259);

CHAnimSite* HAnimSite262 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite262->setName("l_metatarsal_pha5_pt");
HAnimSite262->setDEF("hanim_l_metatarsal_pha5_pt");
HAnimSite262->setTranslation(new float[3]{0.1825,0.007,0.0928});
//HAnimSite visualization shape
CTouchSensor* TouchSensor263 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor263->setDescription("HAnimSite l_metatarsal_pha5");
HAnimSite262->addChildren(*TouchSensor263);

CShape* Shape264 = (CShape *)(m_pScene.createNode("Shape"));
Shape264->setUSE("HAnimSiteShape");
HAnimSite262->addChildren(*Shape264);

HAnimSegment243->addChildren(*HAnimSite262);

CHAnimSite* HAnimSite265 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite265->setName("l_digit2_pt");
HAnimSite265->setDEF("hanim_l_digit2_pt");
HAnimSite265->setTranslation(new float[3]{0.1195,0.0079,0.1433});
//HAnimSite visualization shape
CTouchSensor* TouchSensor266 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor266->setDescription("HAnimSite l_digit2");
HAnimSite265->addChildren(*TouchSensor266);

CShape* Shape267 = (CShape *)(m_pScene.createNode("Shape"));
Shape267->setUSE("HAnimSiteShape");
HAnimSite265->addChildren(*Shape267);

HAnimSegment243->addChildren(*HAnimSite265);

HAnimJoint242->addChildren(*HAnimSegment243);

HAnimJoint226->addChildren(*HAnimJoint242);

HAnimJoint217->addChildren(*HAnimJoint226);

HAnimJoint180->addChildren(*HAnimJoint217);

HAnimJoint171->addChildren(*HAnimJoint180);

HAnimJoint141->addChildren(*HAnimJoint171);

HAnimJoint61->addChildren(*HAnimJoint141);

CHAnimJoint* HAnimJoint268 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint268->setName("r_hip");
HAnimJoint268->setDEF("hanim_r_hip");
HAnimJoint268->setCenter(new float[3]{-0.0961,0.9124,-0.0001});
HAnimJoint268->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint268->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment269 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment269->setName("r_thigh");
HAnimSegment269->setDEF("hanim_r_thigh");
//<HAnimJoint name='r_hip'/> visualization sphere within <HAnimSegment name='r_thigh'/>
CTouchSensor* TouchSensor270 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor270->setDescription("HAnimJoint r_hip, HAnimSegment r_thigh");
HAnimSegment269->addChildren(*TouchSensor270);

CTransform* Transform271 = (CTransform *)(m_pScene.createNode("Transform"));
Transform271->setTranslation(new float[3]{-0.0961,0.9124,-0.0001});
CShape* Shape272 = (CShape *)(m_pScene.createNode("Shape"));
Shape272->setUSE("HAnimJointShape");
Transform271->addChildren(*Shape272);

HAnimSegment269->addChildren(*Transform271);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_hip'/> to <HAnimJoint name='r_knee'/>
CShape* Shape273 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet274 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet274->setVertexCount(new int[1]{2});
CCoordinate* Coordinate275 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate275->setPoint(new float[6]{-0.0961,0.9124,-0.0001,-0.104,0.4867,0.0308});
LineSet274->setCoord(*Coordinate275);

CColorRGBA* ColorRGBA276 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA276->setUSE("HAnimSegmentLineColorRGBA");
LineSet274->setColor(*ColorRGBA276);

Shape273->setGeometry(LineSet274);

HAnimSegment269->addChildren(*Shape273);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_knee_crease'/>
CShape* Shape277 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet278 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet278->setVertexCount(new int[1]{2});
CCoordinate* Coordinate279 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate279->setPoint(new float[6]{-0.0961,0.9124,-0.0001,-0.0825,0.4932,-0.0326});
LineSet278->setCoord(*Coordinate279);

CColorRGBA* ColorRGBA280 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA280->setUSE("HAnimSiteLineColorRGBA");
LineSet278->setColor(*ColorRGBA280);

Shape277->setGeometry(LineSet278);

HAnimSegment269->addChildren(*Shape277);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_lateral_epicn'/>
CShape* Shape281 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet282 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet282->setVertexCount(new int[1]{2});
CCoordinate* Coordinate283 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate283->setPoint(new float[6]{-0.0961,0.9124,-0.0001,-0.1421,0.4992,0.031});
LineSet282->setCoord(*Coordinate283);

CColorRGBA* ColorRGBA284 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA284->setUSE("HAnimSiteLineColorRGBA");
LineSet282->setColor(*ColorRGBA284);

Shape281->setGeometry(LineSet282);

HAnimSegment269->addChildren(*Shape281);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_medial_epicn'/>
CShape* Shape285 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet286 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet286->setVertexCount(new int[1]{2});
CCoordinate* Coordinate287 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate287->setPoint(new float[6]{-0.0961,0.9124,-0.0001,-0.0221,0.5014,0.0289});
LineSet286->setCoord(*Coordinate287);

CColorRGBA* ColorRGBA288 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA288->setUSE("HAnimSiteLineColorRGBA");
LineSet286->setColor(*ColorRGBA288);

Shape285->setGeometry(LineSet286);

HAnimSegment269->addChildren(*Shape285);

CHAnimSite* HAnimSite289 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite289->setName("r_knee_crease_pt");
HAnimSite289->setDEF("hanim_r_knee_crease_pt");
HAnimSite289->setTranslation(new float[3]{-0.0825,0.4932,-0.0326});
//HAnimSite visualization shape
CTouchSensor* TouchSensor290 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor290->setDescription("HAnimSite r_knee_crease");
HAnimSite289->addChildren(*TouchSensor290);

CShape* Shape291 = (CShape *)(m_pScene.createNode("Shape"));
Shape291->setUSE("HAnimSiteShape");
HAnimSite289->addChildren(*Shape291);

HAnimSegment269->addChildren(*HAnimSite289);

CHAnimSite* HAnimSite292 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite292->setName("r_femoral_lateral_epicn_pt");
HAnimSite292->setDEF("hanim_r_femoral_lateral_epicn_pt");
HAnimSite292->setTranslation(new float[3]{-0.1421,0.4992,0.031});
//HAnimSite visualization shape
CTouchSensor* TouchSensor293 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor293->setDescription("HAnimSite r_femoral_lateral_epicn");
HAnimSite292->addChildren(*TouchSensor293);

CShape* Shape294 = (CShape *)(m_pScene.createNode("Shape"));
Shape294->setUSE("HAnimSiteShape");
HAnimSite292->addChildren(*Shape294);

HAnimSegment269->addChildren(*HAnimSite292);

CHAnimSite* HAnimSite295 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite295->setName("r_femoral_medial_epicn_pt");
HAnimSite295->setDEF("hanim_r_femoral_medial_epicn_pt");
HAnimSite295->setTranslation(new float[3]{-0.0221,0.5014,0.0289});
//HAnimSite visualization shape
CTouchSensor* TouchSensor296 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor296->setDescription("HAnimSite r_femoral_medial_epicn");
HAnimSite295->addChildren(*TouchSensor296);

CShape* Shape297 = (CShape *)(m_pScene.createNode("Shape"));
Shape297->setUSE("HAnimSiteShape");
HAnimSite295->addChildren(*Shape297);

HAnimSegment269->addChildren(*HAnimSite295);

HAnimJoint268->addChildren(*HAnimSegment269);

CHAnimJoint* HAnimJoint298 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint298->setName("r_knee");
HAnimJoint298->setDEF("hanim_r_knee");
HAnimJoint298->setCenter(new float[3]{-0.104,0.4867,0.0308});
HAnimJoint298->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint298->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment299 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment299->setName("r_calf");
HAnimSegment299->setDEF("hanim_r_calf");
//<HAnimJoint name='r_knee'/> visualization sphere within <HAnimSegment name='r_calf'/>
CTouchSensor* TouchSensor300 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor300->setDescription("HAnimJoint r_knee, HAnimSegment r_calf");
HAnimSegment299->addChildren(*TouchSensor300);

CTransform* Transform301 = (CTransform *)(m_pScene.createNode("Transform"));
Transform301->setTranslation(new float[3]{-0.104,0.4867,0.0308});
CShape* Shape302 = (CShape *)(m_pScene.createNode("Shape"));
Shape302->setUSE("HAnimJointShape");
Transform301->addChildren(*Shape302);

HAnimSegment299->addChildren(*Transform301);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_knee'/> to <HAnimJoint name='r_ankle'/>
CShape* Shape303 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet304 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet304->setVertexCount(new int[1]{2});
CCoordinate* Coordinate305 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate305->setPoint(new float[6]{-0.104,0.4867,0.0308,-0.1101,0.0656,-0.0736});
LineSet304->setCoord(*Coordinate305);

CColorRGBA* ColorRGBA306 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA306->setUSE("HAnimSegmentLineColorRGBA");
LineSet304->setColor(*ColorRGBA306);

Shape303->setGeometry(LineSet304);

HAnimSegment299->addChildren(*Shape303);

HAnimJoint298->addChildren(*HAnimSegment299);

CHAnimJoint* HAnimJoint307 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint307->setName("r_ankle");
HAnimJoint307->setDEF("hanim_r_ankle");
HAnimJoint307->setCenter(new float[3]{-0.1101,0.0656,-0.0736});
HAnimJoint307->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint307->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment308 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment308->setName("r_hindfoot");
HAnimSegment308->setDEF("hanim_r_hindfoot");
//<HAnimJoint name='r_ankle'/> visualization sphere within <HAnimSegment name='r_hindfoot'/>
CTouchSensor* TouchSensor309 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor309->setDescription("HAnimJoint r_ankle, HAnimSegment r_hindfoot");
HAnimSegment308->addChildren(*TouchSensor309);

CTransform* Transform310 = (CTransform *)(m_pScene.createNode("Transform"));
Transform310->setTranslation(new float[3]{-0.1101,0.0656,-0.0736});
CShape* Shape311 = (CShape *)(m_pScene.createNode("Shape"));
Shape311->setUSE("HAnimJointShape");
Transform310->addChildren(*Shape311);

HAnimSegment308->addChildren(*Transform310);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ankle'/> to <HAnimJoint name='r_subtalar'/>
CShape* Shape312 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet313 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet313->setVertexCount(new int[1]{2});
CCoordinate* Coordinate314 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate314->setPoint(new float[6]{-0.1101,0.0656,-0.0736,-0.1086,0.0001,-0.0368});
LineSet313->setCoord(*Coordinate314);

CColorRGBA* ColorRGBA315 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA315->setUSE("HAnimSegmentLineColorRGBA");
LineSet313->setColor(*ColorRGBA315);

Shape312->setGeometry(LineSet313);

HAnimSegment308->addChildren(*Shape312);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_lateral_malleolus'/>
CShape* Shape316 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet317 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet317->setVertexCount(new int[1]{2});
CCoordinate* Coordinate318 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate318->setPoint(new float[6]{-0.1101,0.0656,-0.0736,-0.1006,0.0658,-0.1075});
LineSet317->setCoord(*Coordinate318);

CColorRGBA* ColorRGBA319 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA319->setUSE("HAnimSiteLineColorRGBA");
LineSet317->setColor(*ColorRGBA319);

Shape316->setGeometry(LineSet317);

HAnimSegment308->addChildren(*Shape316);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_medial_malleolus'/>
CShape* Shape320 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet321 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet321->setVertexCount(new int[1]{2});
CCoordinate* Coordinate322 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate322->setPoint(new float[6]{-0.1101,0.0656,-0.0736,-0.0591,0.076,-0.0928});
LineSet321->setCoord(*Coordinate322);

CColorRGBA* ColorRGBA323 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA323->setUSE("HAnimSiteLineColorRGBA");
LineSet321->setColor(*ColorRGBA323);

Shape320->setGeometry(LineSet321);

HAnimSegment308->addChildren(*Shape320);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_sphyrion'/>
CShape* Shape324 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet325 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet325->setVertexCount(new int[1]{2});
CCoordinate* Coordinate326 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate326->setPoint(new float[6]{-0.1101,0.0656,-0.0736,-0.0603,0.061,-0.1002});
LineSet325->setCoord(*Coordinate326);

CColorRGBA* ColorRGBA327 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA327->setUSE("HAnimSiteLineColorRGBA");
LineSet325->setColor(*ColorRGBA327);

Shape324->setGeometry(LineSet325);

HAnimSegment308->addChildren(*Shape324);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_calcaneous_post'/>
CShape* Shape328 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet329 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet329->setVertexCount(new int[1]{2});
CCoordinate* Coordinate330 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate330->setPoint(new float[6]{-0.1101,0.0656,-0.0736,-0.0692,0.0297,-0.1221});
LineSet329->setCoord(*Coordinate330);

CColorRGBA* ColorRGBA331 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA331->setUSE("HAnimSiteLineColorRGBA");
LineSet329->setColor(*ColorRGBA331);

Shape328->setGeometry(LineSet329);

HAnimSegment308->addChildren(*Shape328);

CHAnimSite* HAnimSite332 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite332->setName("r_lateral_malleolus_pt");
HAnimSite332->setDEF("hanim_r_lateral_malleolus_pt");
HAnimSite332->setTranslation(new float[3]{-0.1006,0.0658,-0.1075});
//HAnimSite visualization shape
CTouchSensor* TouchSensor333 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor333->setDescription("HAnimSite r_lateral_malleolus");
HAnimSite332->addChildren(*TouchSensor333);

CShape* Shape334 = (CShape *)(m_pScene.createNode("Shape"));
Shape334->setUSE("HAnimSiteShape");
HAnimSite332->addChildren(*Shape334);

HAnimSegment308->addChildren(*HAnimSite332);

CHAnimSite* HAnimSite335 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite335->setName("r_medial_malleolus_pt");
HAnimSite335->setDEF("hanim_r_medial_malleolus_pt");
HAnimSite335->setTranslation(new float[3]{-0.0591,0.076,-0.0928});
//HAnimSite visualization shape
CTouchSensor* TouchSensor336 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor336->setDescription("HAnimSite r_medial_malleolus");
HAnimSite335->addChildren(*TouchSensor336);

CShape* Shape337 = (CShape *)(m_pScene.createNode("Shape"));
Shape337->setUSE("HAnimSiteShape");
HAnimSite335->addChildren(*Shape337);

HAnimSegment308->addChildren(*HAnimSite335);

CHAnimSite* HAnimSite338 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite338->setName("r_sphyrion_pt");
HAnimSite338->setDEF("hanim_r_sphyrion_pt");
HAnimSite338->setTranslation(new float[3]{-0.0603,0.061,-0.1002});
//HAnimSite visualization shape
CTouchSensor* TouchSensor339 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor339->setDescription("HAnimSite r_sphyrion");
HAnimSite338->addChildren(*TouchSensor339);

CShape* Shape340 = (CShape *)(m_pScene.createNode("Shape"));
Shape340->setUSE("HAnimSiteShape");
HAnimSite338->addChildren(*Shape340);

HAnimSegment308->addChildren(*HAnimSite338);

CHAnimSite* HAnimSite341 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite341->setName("r_calcaneous_post_pt");
HAnimSite341->setDEF("hanim_r_calcaneous_post_pt");
HAnimSite341->setTranslation(new float[3]{-0.0692,0.0297,-0.1221});
//HAnimSite visualization shape
CTouchSensor* TouchSensor342 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor342->setDescription("HAnimSite r_calcaneous_post");
HAnimSite341->addChildren(*TouchSensor342);

CShape* Shape343 = (CShape *)(m_pScene.createNode("Shape"));
Shape343->setUSE("HAnimSiteShape");
HAnimSite341->addChildren(*Shape343);

HAnimSegment308->addChildren(*HAnimSite341);

HAnimJoint307->addChildren(*HAnimSegment308);

CHAnimJoint* HAnimJoint344 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint344->setName("r_subtalar");
HAnimJoint344->setDEF("hanim_r_subtalar");
HAnimJoint344->setCenter(new float[3]{-0.1086,0.0001,-0.0368});
HAnimJoint344->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint344->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment345 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment345->setName("r_midproximal");
HAnimSegment345->setDEF("hanim_r_midproximal");
//<HAnimJoint name='r_subtalar'/> visualization sphere within <HAnimSegment name='r_midproximal'/>
CTouchSensor* TouchSensor346 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor346->setDescription("HAnimJoint r_subtalar, HAnimSegment r_midproximal");
HAnimSegment345->addChildren(*TouchSensor346);

CTransform* Transform347 = (CTransform *)(m_pScene.createNode("Transform"));
Transform347->setTranslation(new float[3]{-0.1086,0.0001,-0.0368});
CShape* Shape348 = (CShape *)(m_pScene.createNode("Shape"));
Shape348->setUSE("HAnimJointShape");
Transform347->addChildren(*Shape348);

HAnimSegment345->addChildren(*Transform347);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_subtalar'/> to <HAnimJoint name='r_midtarsal'/>
CShape* Shape349 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet350 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet350->setVertexCount(new int[1]{2});
CCoordinate* Coordinate351 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate351->setPoint(new float[6]{-0.1086,0.0001,-0.0368,-0.1086,0.0001,0.0368});
LineSet350->setCoord(*Coordinate351);

CColorRGBA* ColorRGBA352 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA352->setUSE("HAnimSegmentLineColorRGBA");
LineSet350->setColor(*ColorRGBA352);

Shape349->setGeometry(LineSet350);

HAnimSegment345->addChildren(*Shape349);

HAnimJoint344->addChildren(*HAnimSegment345);

CHAnimJoint* HAnimJoint353 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint353->setName("r_midtarsal");
HAnimJoint353->setDEF("hanim_r_midtarsal");
HAnimJoint353->setCenter(new float[3]{-0.1086,0.0001,0.0368});
HAnimJoint353->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint353->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment354 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment354->setName("r_middistal");
HAnimSegment354->setDEF("hanim_r_middistal");
//<HAnimJoint name='r_midtarsal'/> visualization sphere within <HAnimSegment name='r_middistal'/>
CTouchSensor* TouchSensor355 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor355->setDescription("HAnimJoint r_midtarsal, HAnimSegment r_middistal");
HAnimSegment354->addChildren(*TouchSensor355);

CTransform* Transform356 = (CTransform *)(m_pScene.createNode("Transform"));
Transform356->setTranslation(new float[3]{-0.1086,0.0001,0.0368});
CShape* Shape357 = (CShape *)(m_pScene.createNode("Shape"));
Shape357->setUSE("HAnimJointShape");
Transform356->addChildren(*Shape357);

HAnimSegment354->addChildren(*Transform356);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_midtarsal'/> to <HAnimJoint name='r_metatarsal'/>
CShape* Shape358 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet359 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet359->setVertexCount(new int[1]{2});
CCoordinate* Coordinate360 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate360->setPoint(new float[6]{-0.1086,0.0001,0.0368,-0.1086,0,0.0762});
LineSet359->setCoord(*Coordinate360);

CColorRGBA* ColorRGBA361 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA361->setUSE("HAnimSegmentLineColorRGBA");
LineSet359->setColor(*ColorRGBA361);

Shape358->setGeometry(LineSet359);

HAnimSegment354->addChildren(*Shape358);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_midtarsal'/> to <HAnimSite name='r_metatarsal_pha1'/>
CShape* Shape362 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet363 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet363->setVertexCount(new int[1]{2});
CCoordinate* Coordinate364 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate364->setPoint(new float[6]{-0.1086,0.0001,0.0368,-0.0521,0.026,0.0127});
LineSet363->setCoord(*Coordinate364);

CColorRGBA* ColorRGBA365 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA365->setUSE("HAnimSiteLineColorRGBA");
LineSet363->setColor(*ColorRGBA365);

Shape362->setGeometry(LineSet363);

HAnimSegment354->addChildren(*Shape362);

CHAnimSite* HAnimSite366 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite366->setName("r_metatarsal_pha1_pt");
HAnimSite366->setDEF("hanim_r_metatarsal_pha1_pt");
HAnimSite366->setTranslation(new float[3]{-0.0521,0.026,0.0127});
//HAnimSite visualization shape
CTouchSensor* TouchSensor367 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor367->setDescription("HAnimSite r_metatarsal_pha1");
HAnimSite366->addChildren(*TouchSensor367);

CShape* Shape368 = (CShape *)(m_pScene.createNode("Shape"));
Shape368->setUSE("HAnimSiteShape");
HAnimSite366->addChildren(*Shape368);

HAnimSegment354->addChildren(*HAnimSite366);

HAnimJoint353->addChildren(*HAnimSegment354);

CHAnimJoint* HAnimJoint369 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint369->setName("r_metatarsal");
HAnimJoint369->setDEF("hanim_r_metatarsal");
HAnimJoint369->setCenter(new float[3]{-0.1086,0,0.0762});
HAnimJoint369->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint369->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment370 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment370->setName("r_forefoot");
HAnimSegment370->setDEF("hanim_r_forefoot");
//<HAnimJoint name='r_metatarsal'/> visualization sphere within <HAnimSegment name='r_forefoot'/>
CTouchSensor* TouchSensor371 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor371->setDescription("HAnimJoint r_metatarsal, HAnimSegment r_forefoot");
HAnimSegment370->addChildren(*TouchSensor371);

CTransform* Transform372 = (CTransform *)(m_pScene.createNode("Transform"));
Transform372->setTranslation(new float[3]{-0.1086,0,0.0762});
CShape* Shape373 = (CShape *)(m_pScene.createNode("Shape"));
Shape373->setUSE("HAnimJointShape");
Transform372->addChildren(*Shape373);

HAnimSegment370->addChildren(*Transform372);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_forefoot_tip'/>
CShape* Shape374 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet375 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet375->setVertexCount(new int[1]{2});
CCoordinate* Coordinate376 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate376->setPoint(new float[6]{-0.1086,0,0.0762,-0.1043,0.0227,0.145});
LineSet375->setCoord(*Coordinate376);

CColorRGBA* ColorRGBA377 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA377->setUSE("HAnimSiteLineColorRGBA");
LineSet375->setColor(*ColorRGBA377);

Shape374->setGeometry(LineSet375);

HAnimSegment370->addChildren(*Shape374);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_metatarsal_pha5'/>
CShape* Shape378 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet379 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet379->setVertexCount(new int[1]{2});
CCoordinate* Coordinate380 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate380->setPoint(new float[6]{-0.1086,0,0.0762,-0.1523,0.0166,0.0895});
LineSet379->setCoord(*Coordinate380);

CColorRGBA* ColorRGBA381 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA381->setUSE("HAnimSiteLineColorRGBA");
LineSet379->setColor(*ColorRGBA381);

Shape378->setGeometry(LineSet379);

HAnimSegment370->addChildren(*Shape378);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_digit2'/>
CShape* Shape382 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet383 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet383->setVertexCount(new int[1]{2});
CCoordinate* Coordinate384 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate384->setPoint(new float[6]{-0.1086,0,0.0762,-0.0883,0.0134,0.1383});
LineSet383->setCoord(*Coordinate384);

CColorRGBA* ColorRGBA385 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA385->setUSE("HAnimSiteLineColorRGBA");
LineSet383->setColor(*ColorRGBA385);

Shape382->setGeometry(LineSet383);

HAnimSegment370->addChildren(*Shape382);

CHAnimSite* HAnimSite386 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite386->setName("r_forefoot_tip");
HAnimSite386->setDEF("hanim_r_forefoot_tip");
HAnimSite386->setTranslation(new float[3]{-0.1043,0.0227,0.145});
//HAnimSite visualization shape
CTouchSensor* TouchSensor387 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor387->setDescription("HAnimSite r_forefoot_tip");
HAnimSite386->addChildren(*TouchSensor387);

CShape* Shape388 = (CShape *)(m_pScene.createNode("Shape"));
Shape388->setUSE("HAnimSiteShape");
HAnimSite386->addChildren(*Shape388);

HAnimSegment370->addChildren(*HAnimSite386);

CHAnimSite* HAnimSite389 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite389->setName("r_metatarsal_pha5_pt");
HAnimSite389->setDEF("hanim_r_metatarsal_pha5_pt");
HAnimSite389->setTranslation(new float[3]{-0.1523,0.0166,0.0895});
//HAnimSite visualization shape
CTouchSensor* TouchSensor390 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor390->setDescription("HAnimSite r_metatarsal_pha5");
HAnimSite389->addChildren(*TouchSensor390);

CShape* Shape391 = (CShape *)(m_pScene.createNode("Shape"));
Shape391->setUSE("HAnimSiteShape");
HAnimSite389->addChildren(*Shape391);

HAnimSegment370->addChildren(*HAnimSite389);

CHAnimSite* HAnimSite392 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite392->setName("r_digit2_pt");
HAnimSite392->setDEF("hanim_r_digit2_pt");
HAnimSite392->setTranslation(new float[3]{-0.0883,0.0134,0.1383});
//HAnimSite visualization shape
CTouchSensor* TouchSensor393 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor393->setDescription("HAnimSite r_digit2");
HAnimSite392->addChildren(*TouchSensor393);

CShape* Shape394 = (CShape *)(m_pScene.createNode("Shape"));
Shape394->setUSE("HAnimSiteShape");
HAnimSite392->addChildren(*Shape394);

HAnimSegment370->addChildren(*HAnimSite392);

HAnimJoint369->addChildren(*HAnimSegment370);

HAnimJoint353->addChildren(*HAnimJoint369);

HAnimJoint344->addChildren(*HAnimJoint353);

HAnimJoint307->addChildren(*HAnimJoint344);

HAnimJoint298->addChildren(*HAnimJoint307);

HAnimJoint268->addChildren(*HAnimJoint298);

HAnimJoint61->addChildren(*HAnimJoint268);

HAnimJoint45->addChildren(*HAnimJoint61);

CHAnimJoint* HAnimJoint395 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint395->setName("vl5");
HAnimJoint395->setDEF("hanim_vl5");
HAnimJoint395->setCenter(new float[3]{0.0028,1.0568,-0.0776});
HAnimJoint395->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint395->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment396 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment396->setName("l5");
HAnimSegment396->setDEF("hanim_l5");
//<HAnimJoint name='vl5'/> visualization sphere within <HAnimSegment name='l5'/>
CTouchSensor* TouchSensor397 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor397->setDescription("HAnimJoint vl5, HAnimSegment l5");
HAnimSegment396->addChildren(*TouchSensor397);

CTransform* Transform398 = (CTransform *)(m_pScene.createNode("Transform"));
Transform398->setTranslation(new float[3]{0.0028,1.0568,-0.0776});
CShape* Shape399 = (CShape *)(m_pScene.createNode("Shape"));
Shape399->setUSE("HAnimJointShape");
Transform398->addChildren(*Shape399);

HAnimSegment396->addChildren(*Transform398);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl5'/> to <HAnimJoint name='vl4'/>
CShape* Shape400 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet401 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet401->setVertexCount(new int[1]{2});
CCoordinate* Coordinate402 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate402->setPoint(new float[6]{0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787});
LineSet401->setCoord(*Coordinate402);

CColorRGBA* ColorRGBA403 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA403->setUSE("HAnimSegmentLineColorRGBA");
LineSet401->setColor(*ColorRGBA403);

Shape400->setGeometry(LineSet401);

HAnimSegment396->addChildren(*Shape400);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='waist_preferred_post'/>
CShape* Shape404 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet405 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet405->setVertexCount(new int[1]{2});
CCoordinate* Coordinate406 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate406->setPoint(new float[6]{0.0028,1.0568,-0.0776,0,1.0915,-0.1091});
LineSet405->setCoord(*Coordinate406);

CColorRGBA* ColorRGBA407 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA407->setUSE("HAnimSiteLineColorRGBA");
LineSet405->setColor(*ColorRGBA407);

Shape404->setGeometry(LineSet405);

HAnimSegment396->addChildren(*Shape404);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='navel'/>
CShape* Shape408 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet409 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet409->setVertexCount(new int[1]{2});
CCoordinate* Coordinate410 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate410->setPoint(new float[6]{0.0028,1.0568,-0.0776,0.0069,1.0966,0.1017});
LineSet409->setCoord(*Coordinate410);

CColorRGBA* ColorRGBA411 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA411->setUSE("HAnimSiteLineColorRGBA");
LineSet409->setColor(*ColorRGBA411);

Shape408->setGeometry(LineSet409);

HAnimSegment396->addChildren(*Shape408);

CHAnimSite* HAnimSite412 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite412->setName("waist_preferred_post_pt");
HAnimSite412->setDEF("hanim_waist_preferred_post_pt");
HAnimSite412->setTranslation(new float[3]{0,1.0915,-0.1091});
//HAnimSite visualization shape
CTouchSensor* TouchSensor413 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor413->setDescription("HAnimSite waist_preferred_post");
HAnimSite412->addChildren(*TouchSensor413);

CShape* Shape414 = (CShape *)(m_pScene.createNode("Shape"));
Shape414->setUSE("HAnimSiteShape");
HAnimSite412->addChildren(*Shape414);

HAnimSegment396->addChildren(*HAnimSite412);

CHAnimSite* HAnimSite415 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite415->setName("navel_pt");
HAnimSite415->setDEF("hanim_navel_pt");
HAnimSite415->setTranslation(new float[3]{0.0069,1.0966,0.1017});
//HAnimSite visualization shape
CTouchSensor* TouchSensor416 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor416->setDescription("HAnimSite navel");
HAnimSite415->addChildren(*TouchSensor416);

CShape* Shape417 = (CShape *)(m_pScene.createNode("Shape"));
Shape417->setUSE("HAnimSiteShape");
HAnimSite415->addChildren(*Shape417);

HAnimSegment396->addChildren(*HAnimSite415);

HAnimJoint395->addChildren(*HAnimSegment396);

CHAnimJoint* HAnimJoint418 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint418->setName("vl4");
HAnimJoint418->setDEF("hanim_vl4");
HAnimJoint418->setCenter(new float[3]{0.0035,1.0925,-0.0787});
HAnimJoint418->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint418->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment419 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment419->setName("l4");
HAnimSegment419->setDEF("hanim_l4");
//<HAnimJoint name='vl4'/> visualization sphere within <HAnimSegment name='l4'/>
CTouchSensor* TouchSensor420 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor420->setDescription("HAnimJoint vl4, HAnimSegment l4");
HAnimSegment419->addChildren(*TouchSensor420);

CTransform* Transform421 = (CTransform *)(m_pScene.createNode("Transform"));
Transform421->setTranslation(new float[3]{0.0035,1.0925,-0.0787});
CShape* Shape422 = (CShape *)(m_pScene.createNode("Shape"));
Shape422->setUSE("HAnimJointShape");
Transform421->addChildren(*Shape422);

HAnimSegment419->addChildren(*Transform421);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl4'/> to <HAnimJoint name='vl3'/>
CShape* Shape423 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet424 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet424->setVertexCount(new int[1]{2});
CCoordinate* Coordinate425 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate425->setPoint(new float[6]{0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796});
LineSet424->setCoord(*Coordinate425);

CColorRGBA* ColorRGBA426 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA426->setUSE("HAnimSegmentLineColorRGBA");
LineSet424->setColor(*ColorRGBA426);

Shape423->setGeometry(LineSet424);

HAnimSegment419->addChildren(*Shape423);

HAnimJoint418->addChildren(*HAnimSegment419);

CHAnimJoint* HAnimJoint427 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint427->setName("vl3");
HAnimJoint427->setDEF("hanim_vl3");
HAnimJoint427->setCenter(new float[3]{0.0041,1.1276,-0.0796});
HAnimJoint427->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint427->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment428 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment428->setName("l3");
HAnimSegment428->setDEF("hanim_l3");
//<HAnimJoint name='vl3'/> visualization sphere within <HAnimSegment name='l3'/>
CTouchSensor* TouchSensor429 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor429->setDescription("HAnimJoint vl3, HAnimSegment l3");
HAnimSegment428->addChildren(*TouchSensor429);

CTransform* Transform430 = (CTransform *)(m_pScene.createNode("Transform"));
Transform430->setTranslation(new float[3]{0.0041,1.1276,-0.0796});
CShape* Shape431 = (CShape *)(m_pScene.createNode("Shape"));
Shape431->setUSE("HAnimJointShape");
Transform430->addChildren(*Shape431);

HAnimSegment428->addChildren(*Transform430);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl3'/> to <HAnimJoint name='vl2'/>
CShape* Shape432 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet433 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet433->setVertexCount(new int[1]{2});
CCoordinate* Coordinate434 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate434->setPoint(new float[6]{0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08});
LineSet433->setCoord(*Coordinate434);

CColorRGBA* ColorRGBA435 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA435->setUSE("HAnimSegmentLineColorRGBA");
LineSet433->setColor(*ColorRGBA435);

Shape432->setGeometry(LineSet433);

HAnimSegment428->addChildren(*Shape432);

HAnimJoint427->addChildren(*HAnimSegment428);

CHAnimJoint* HAnimJoint436 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint436->setName("vl2");
HAnimJoint436->setDEF("hanim_vl2");
HAnimJoint436->setCenter(new float[3]{0.0045,1.1546,-0.08});
HAnimJoint436->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint436->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment437 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment437->setName("l2");
HAnimSegment437->setDEF("hanim_l2");
//<HAnimJoint name='vl2'/> visualization sphere within <HAnimSegment name='l2'/>
CTouchSensor* TouchSensor438 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor438->setDescription("HAnimJoint vl2, HAnimSegment l2");
HAnimSegment437->addChildren(*TouchSensor438);

CTransform* Transform439 = (CTransform *)(m_pScene.createNode("Transform"));
Transform439->setTranslation(new float[3]{0.0045,1.1546,-0.08});
CShape* Shape440 = (CShape *)(m_pScene.createNode("Shape"));
Shape440->setUSE("HAnimJointShape");
Transform439->addChildren(*Shape440);

HAnimSegment437->addChildren(*Transform439);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl2'/> to <HAnimJoint name='vl1'/>
CShape* Shape441 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet442 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet442->setVertexCount(new int[1]{2});
CCoordinate* Coordinate443 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate443->setPoint(new float[6]{0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805});
LineSet442->setCoord(*Coordinate443);

CColorRGBA* ColorRGBA444 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA444->setUSE("HAnimSegmentLineColorRGBA");
LineSet442->setColor(*ColorRGBA444);

Shape441->setGeometry(LineSet442);

HAnimSegment437->addChildren(*Shape441);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='r_rib10'/>
CShape* Shape445 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet446 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet446->setVertexCount(new int[1]{2});
CCoordinate* Coordinate447 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate447->setPoint(new float[6]{0.0045,1.1546,-0.08,-0.0711,1.1941,0.1016});
LineSet446->setCoord(*Coordinate447);

CColorRGBA* ColorRGBA448 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA448->setUSE("HAnimSiteLineColorRGBA");
LineSet446->setColor(*ColorRGBA448);

Shape445->setGeometry(LineSet446);

HAnimSegment437->addChildren(*Shape445);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='l_rib10'/>
CShape* Shape449 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet450 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet450->setVertexCount(new int[1]{2});
CCoordinate* Coordinate451 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate451->setPoint(new float[6]{0.0045,1.1546,-0.08,0.0871,1.1925,0.0992});
LineSet450->setCoord(*Coordinate451);

CColorRGBA* ColorRGBA452 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA452->setUSE("HAnimSiteLineColorRGBA");
LineSet450->setColor(*ColorRGBA452);

Shape449->setGeometry(LineSet450);

HAnimSegment437->addChildren(*Shape449);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='rib10_midspine'/>
CShape* Shape453 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet454 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet454->setVertexCount(new int[1]{2});
CCoordinate* Coordinate455 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate455->setPoint(new float[6]{0.0045,1.1546,-0.08,0.0049,1.1908,-0.1113});
LineSet454->setCoord(*Coordinate455);

CColorRGBA* ColorRGBA456 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA456->setUSE("HAnimSiteLineColorRGBA");
LineSet454->setColor(*ColorRGBA456);

Shape453->setGeometry(LineSet454);

HAnimSegment437->addChildren(*Shape453);

CHAnimSite* HAnimSite457 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite457->setName("r_rib10_pt");
HAnimSite457->setDEF("hanim_r_rib10_pt");
HAnimSite457->setTranslation(new float[3]{-0.0711,1.1941,0.1016});
//HAnimSite visualization shape
CTouchSensor* TouchSensor458 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor458->setDescription("HAnimSite r_rib10");
HAnimSite457->addChildren(*TouchSensor458);

CShape* Shape459 = (CShape *)(m_pScene.createNode("Shape"));
Shape459->setUSE("HAnimSiteShape");
HAnimSite457->addChildren(*Shape459);

HAnimSegment437->addChildren(*HAnimSite457);

CHAnimSite* HAnimSite460 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite460->setName("l_rib10_pt");
HAnimSite460->setDEF("hanim_l_rib10_pt");
HAnimSite460->setTranslation(new float[3]{0.0871,1.1925,0.0992});
//HAnimSite visualization shape
CTouchSensor* TouchSensor461 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor461->setDescription("HAnimSite l_rib10");
HAnimSite460->addChildren(*TouchSensor461);

CShape* Shape462 = (CShape *)(m_pScene.createNode("Shape"));
Shape462->setUSE("HAnimSiteShape");
HAnimSite460->addChildren(*Shape462);

HAnimSegment437->addChildren(*HAnimSite460);

CHAnimSite* HAnimSite463 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite463->setName("rib10_midspine_pt");
HAnimSite463->setDEF("hanim_rib10_midspine_pt");
HAnimSite463->setTranslation(new float[3]{0.0049,1.1908,-0.1113});
//HAnimSite visualization shape
CTouchSensor* TouchSensor464 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor464->setDescription("HAnimSite rib10_midspine");
HAnimSite463->addChildren(*TouchSensor464);

CShape* Shape465 = (CShape *)(m_pScene.createNode("Shape"));
Shape465->setUSE("HAnimSiteShape");
HAnimSite463->addChildren(*Shape465);

HAnimSegment437->addChildren(*HAnimSite463);

HAnimJoint436->addChildren(*HAnimSegment437);

CHAnimJoint* HAnimJoint466 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint466->setName("vl1");
HAnimJoint466->setDEF("hanim_vl1");
HAnimJoint466->setCenter(new float[3]{0.0048,1.1912,-0.0805});
HAnimJoint466->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint466->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment467 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment467->setName("l1");
HAnimSegment467->setDEF("hanim_l1");
//<HAnimJoint name='vl1'/> visualization sphere within <HAnimSegment name='l1'/>
CTouchSensor* TouchSensor468 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor468->setDescription("HAnimJoint vl1, HAnimSegment l1");
HAnimSegment467->addChildren(*TouchSensor468);

CTransform* Transform469 = (CTransform *)(m_pScene.createNode("Transform"));
Transform469->setTranslation(new float[3]{0.0048,1.1912,-0.0805});
CShape* Shape470 = (CShape *)(m_pScene.createNode("Shape"));
Shape470->setUSE("HAnimJointShape");
Transform469->addChildren(*Shape470);

HAnimSegment467->addChildren(*Transform469);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl1'/> to <HAnimJoint name='vt12'/>
CShape* Shape471 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet472 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet472->setVertexCount(new int[1]{2});
CCoordinate* Coordinate473 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate473->setPoint(new float[6]{0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808});
LineSet472->setCoord(*Coordinate473);

CColorRGBA* ColorRGBA474 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA474->setUSE("HAnimSegmentLineColorRGBA");
LineSet472->setColor(*ColorRGBA474);

Shape471->setGeometry(LineSet472);

HAnimSegment467->addChildren(*Shape471);

HAnimJoint466->addChildren(*HAnimSegment467);

CHAnimJoint* HAnimJoint475 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint475->setName("vt12");
HAnimJoint475->setDEF("hanim_vt12");
HAnimJoint475->setCenter(new float[3]{0.0051,1.2278,-0.0808});
HAnimJoint475->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint475->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment476 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment476->setName("t12");
HAnimSegment476->setDEF("hanim_t12");
//<HAnimJoint name='vt12'/> visualization sphere within <HAnimSegment name='t12'/>
CTouchSensor* TouchSensor477 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor477->setDescription("HAnimJoint vt12, HAnimSegment t12");
HAnimSegment476->addChildren(*TouchSensor477);

CTransform* Transform478 = (CTransform *)(m_pScene.createNode("Transform"));
Transform478->setTranslation(new float[3]{0.0051,1.2278,-0.0808});
CShape* Shape479 = (CShape *)(m_pScene.createNode("Shape"));
Shape479->setUSE("HAnimJointShape");
Transform478->addChildren(*Shape479);

HAnimSegment476->addChildren(*Transform478);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt12'/> to <HAnimJoint name='vt11'/>
CShape* Shape480 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet481 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet481->setVertexCount(new int[1]{2});
CCoordinate* Coordinate482 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate482->setPoint(new float[6]{0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081});
LineSet481->setCoord(*Coordinate482);

CColorRGBA* ColorRGBA483 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA483->setUSE("HAnimSegmentLineColorRGBA");
LineSet481->setColor(*ColorRGBA483);

Shape480->setGeometry(LineSet481);

HAnimSegment476->addChildren(*Shape480);

HAnimJoint475->addChildren(*HAnimSegment476);

CHAnimJoint* HAnimJoint484 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint484->setName("vt11");
HAnimJoint484->setDEF("hanim_vt11");
HAnimJoint484->setCenter(new float[3]{0.0053,1.2679,-0.081});
HAnimJoint484->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint484->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment485 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment485->setName("t11");
HAnimSegment485->setDEF("hanim_t11");
//<HAnimJoint name='vt11'/> visualization sphere within <HAnimSegment name='t11'/>
CTouchSensor* TouchSensor486 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor486->setDescription("HAnimJoint vt11, HAnimSegment t11");
HAnimSegment485->addChildren(*TouchSensor486);

CTransform* Transform487 = (CTransform *)(m_pScene.createNode("Transform"));
Transform487->setTranslation(new float[3]{0.0053,1.2679,-0.081});
CShape* Shape488 = (CShape *)(m_pScene.createNode("Shape"));
Shape488->setUSE("HAnimJointShape");
Transform487->addChildren(*Shape488);

HAnimSegment485->addChildren(*Transform487);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt11'/> to <HAnimJoint name='vt10'/>
CShape* Shape489 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet490 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet490->setVertexCount(new int[1]{2});
CCoordinate* Coordinate491 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate491->setPoint(new float[6]{0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822});
LineSet490->setCoord(*Coordinate491);

CColorRGBA* ColorRGBA492 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA492->setUSE("HAnimSegmentLineColorRGBA");
LineSet490->setColor(*ColorRGBA492);

Shape489->setGeometry(LineSet490);

HAnimSegment485->addChildren(*Shape489);

HAnimJoint484->addChildren(*HAnimSegment485);

CHAnimJoint* HAnimJoint493 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint493->setName("vt10");
HAnimJoint493->setDEF("hanim_vt10");
HAnimJoint493->setCenter(new float[3]{0.0056,1.2848,-0.0822});
HAnimJoint493->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint493->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment494 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment494->setName("t10");
HAnimSegment494->setDEF("hanim_t10");
//<HAnimJoint name='vt10'/> visualization sphere within <HAnimSegment name='t10'/>
CTouchSensor* TouchSensor495 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor495->setDescription("HAnimJoint vt10, HAnimSegment t10");
HAnimSegment494->addChildren(*TouchSensor495);

CTransform* Transform496 = (CTransform *)(m_pScene.createNode("Transform"));
Transform496->setTranslation(new float[3]{0.0056,1.2848,-0.0822});
CShape* Shape497 = (CShape *)(m_pScene.createNode("Shape"));
Shape497->setUSE("HAnimJointShape");
Transform496->addChildren(*Shape497);

HAnimSegment494->addChildren(*Transform496);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt10'/> to <HAnimJoint name='vt9'/>
CShape* Shape498 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet499 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet499->setVertexCount(new int[1]{2});
CCoordinate* Coordinate500 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate500->setPoint(new float[6]{0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838});
LineSet499->setCoord(*Coordinate500);

CColorRGBA* ColorRGBA501 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA501->setUSE("HAnimSegmentLineColorRGBA");
LineSet499->setColor(*ColorRGBA501);

Shape498->setGeometry(LineSet499);

HAnimSegment494->addChildren(*Shape498);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt10'/> to <HAnimSite name='substernale'/>
CShape* Shape502 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet503 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet503->setVertexCount(new int[1]{2});
CCoordinate* Coordinate504 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate504->setPoint(new float[6]{0.0056,1.2848,-0.0822,0.0085,1.2995,0.1147});
LineSet503->setCoord(*Coordinate504);

CColorRGBA* ColorRGBA505 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA505->setUSE("HAnimSiteLineColorRGBA");
LineSet503->setColor(*ColorRGBA505);

Shape502->setGeometry(LineSet503);

HAnimSegment494->addChildren(*Shape502);

CHAnimSite* HAnimSite506 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite506->setName("substernale_pt");
HAnimSite506->setDEF("hanim_substernale_pt");
HAnimSite506->setTranslation(new float[3]{0.0085,1.2995,0.1147});
//HAnimSite visualization shape
CTouchSensor* TouchSensor507 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor507->setDescription("HAnimSite substernale");
HAnimSite506->addChildren(*TouchSensor507);

CShape* Shape508 = (CShape *)(m_pScene.createNode("Shape"));
Shape508->setUSE("HAnimSiteShape");
HAnimSite506->addChildren(*Shape508);

HAnimSegment494->addChildren(*HAnimSite506);

HAnimJoint493->addChildren(*HAnimSegment494);

CHAnimJoint* HAnimJoint509 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint509->setName("vt9");
HAnimJoint509->setDEF("hanim_vt9");
HAnimJoint509->setCenter(new float[3]{0.0057,1.3126,-0.0838});
HAnimJoint509->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint509->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment510 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment510->setName("t9");
HAnimSegment510->setDEF("hanim_t9");
//<HAnimJoint name='vt9'/> visualization sphere within <HAnimSegment name='t9'/>
CTouchSensor* TouchSensor511 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor511->setDescription("HAnimJoint vt9, HAnimSegment t9");
HAnimSegment510->addChildren(*TouchSensor511);

CTransform* Transform512 = (CTransform *)(m_pScene.createNode("Transform"));
Transform512->setTranslation(new float[3]{0.0057,1.3126,-0.0838});
CShape* Shape513 = (CShape *)(m_pScene.createNode("Shape"));
Shape513->setUSE("HAnimJointShape");
Transform512->addChildren(*Shape513);

HAnimSegment510->addChildren(*Transform512);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt9'/> to <HAnimJoint name='vt8'/>
CShape* Shape514 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet515 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet515->setVertexCount(new int[1]{2});
CCoordinate* Coordinate516 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate516->setPoint(new float[6]{0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845});
LineSet515->setCoord(*Coordinate516);

CColorRGBA* ColorRGBA517 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA517->setUSE("HAnimSegmentLineColorRGBA");
LineSet515->setColor(*ColorRGBA517);

Shape514->setGeometry(LineSet515);

HAnimSegment510->addChildren(*Shape514);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='r_thelion'/>
CShape* Shape518 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet519 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet519->setVertexCount(new int[1]{2});
CCoordinate* Coordinate520 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate520->setPoint(new float[6]{0.0057,1.3126,-0.0838,-0.0736,1.3385,0.1217});
LineSet519->setCoord(*Coordinate520);

CColorRGBA* ColorRGBA521 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA521->setUSE("HAnimSiteLineColorRGBA");
LineSet519->setColor(*ColorRGBA521);

Shape518->setGeometry(LineSet519);

HAnimSegment510->addChildren(*Shape518);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='l_thelion'/>
CShape* Shape522 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet523 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet523->setVertexCount(new int[1]{2});
CCoordinate* Coordinate524 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate524->setPoint(new float[6]{0.0057,1.3126,-0.0838,0.0918,1.3382,0.1192});
LineSet523->setCoord(*Coordinate524);

CColorRGBA* ColorRGBA525 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA525->setUSE("HAnimSiteLineColorRGBA");
LineSet523->setColor(*ColorRGBA525);

Shape522->setGeometry(LineSet523);

HAnimSegment510->addChildren(*Shape522);

CHAnimSite* HAnimSite526 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite526->setName("r_thelion_pt");
HAnimSite526->setDEF("hanim_r_thelion_pt");
HAnimSite526->setTranslation(new float[3]{-0.0736,1.3385,0.1217});
//HAnimSite visualization shape
CTouchSensor* TouchSensor527 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor527->setDescription("HAnimSite r_thelion");
HAnimSite526->addChildren(*TouchSensor527);

CShape* Shape528 = (CShape *)(m_pScene.createNode("Shape"));
Shape528->setUSE("HAnimSiteShape");
HAnimSite526->addChildren(*Shape528);

HAnimSegment510->addChildren(*HAnimSite526);

CHAnimSite* HAnimSite529 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite529->setName("l_thelion_pt");
HAnimSite529->setDEF("hanim_l_thelion_pt");
HAnimSite529->setTranslation(new float[3]{0.0918,1.3382,0.1192});
//HAnimSite visualization shape
CTouchSensor* TouchSensor530 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor530->setDescription("HAnimSite l_thelion");
HAnimSite529->addChildren(*TouchSensor530);

CShape* Shape531 = (CShape *)(m_pScene.createNode("Shape"));
Shape531->setUSE("HAnimSiteShape");
HAnimSite529->addChildren(*Shape531);

HAnimSegment510->addChildren(*HAnimSite529);

HAnimJoint509->addChildren(*HAnimSegment510);

CHAnimJoint* HAnimJoint532 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint532->setName("vt8");
HAnimJoint532->setDEF("hanim_vt8");
HAnimJoint532->setCenter(new float[3]{0.0057,1.3382,-0.0845});
HAnimJoint532->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint532->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment533 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment533->setName("t8");
HAnimSegment533->setDEF("hanim_t8");
//<HAnimJoint name='vt8'/> visualization sphere within <HAnimSegment name='t8'/>
CTouchSensor* TouchSensor534 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor534->setDescription("HAnimJoint vt8, HAnimSegment t8");
HAnimSegment533->addChildren(*TouchSensor534);

CTransform* Transform535 = (CTransform *)(m_pScene.createNode("Transform"));
Transform535->setTranslation(new float[3]{0.0057,1.3382,-0.0845});
CShape* Shape536 = (CShape *)(m_pScene.createNode("Shape"));
Shape536->setUSE("HAnimJointShape");
Transform535->addChildren(*Shape536);

HAnimSegment533->addChildren(*Transform535);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt8'/> to <HAnimJoint name='vt7'/>
CShape* Shape537 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet538 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet538->setVertexCount(new int[1]{2});
CCoordinate* Coordinate539 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate539->setPoint(new float[6]{0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833});
LineSet538->setCoord(*Coordinate539);

CColorRGBA* ColorRGBA540 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA540->setUSE("HAnimSegmentLineColorRGBA");
LineSet538->setColor(*ColorRGBA540);

Shape537->setGeometry(LineSet538);

HAnimSegment533->addChildren(*Shape537);

HAnimJoint532->addChildren(*HAnimSegment533);

CHAnimJoint* HAnimJoint541 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint541->setName("vt7");
HAnimJoint541->setDEF("hanim_vt7");
HAnimJoint541->setCenter(new float[3]{0.0058,1.3625,-0.0833});
HAnimJoint541->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint541->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment542 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment542->setName("t7");
HAnimSegment542->setDEF("hanim_t7");
//<HAnimJoint name='vt7'/> visualization sphere within <HAnimSegment name='t7'/>
CTouchSensor* TouchSensor543 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor543->setDescription("HAnimJoint vt7, HAnimSegment t7");
HAnimSegment542->addChildren(*TouchSensor543);

CTransform* Transform544 = (CTransform *)(m_pScene.createNode("Transform"));
Transform544->setTranslation(new float[3]{0.0058,1.3625,-0.0833});
CShape* Shape545 = (CShape *)(m_pScene.createNode("Shape"));
Shape545->setUSE("HAnimJointShape");
Transform544->addChildren(*Shape545);

HAnimSegment542->addChildren(*Transform544);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt7'/> to <HAnimJoint name='vt6'/>
CShape* Shape546 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet547 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet547->setVertexCount(new int[1]{2});
CCoordinate* Coordinate548 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate548->setPoint(new float[6]{0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08});
LineSet547->setCoord(*Coordinate548);

CColorRGBA* ColorRGBA549 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA549->setUSE("HAnimSegmentLineColorRGBA");
LineSet547->setColor(*ColorRGBA549);

Shape546->setGeometry(LineSet547);

HAnimSegment542->addChildren(*Shape546);

HAnimJoint541->addChildren(*HAnimSegment542);

CHAnimJoint* HAnimJoint550 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint550->setName("vt6");
HAnimJoint550->setDEF("hanim_vt6");
HAnimJoint550->setCenter(new float[3]{0.0059,1.3866,-0.08});
HAnimJoint550->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint550->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment551 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment551->setName("t6");
HAnimSegment551->setDEF("hanim_t6");
//<HAnimJoint name='vt6'/> visualization sphere within <HAnimSegment name='t6'/>
CTouchSensor* TouchSensor552 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor552->setDescription("HAnimJoint vt6, HAnimSegment t6");
HAnimSegment551->addChildren(*TouchSensor552);

CTransform* Transform553 = (CTransform *)(m_pScene.createNode("Transform"));
Transform553->setTranslation(new float[3]{0.0059,1.3866,-0.08});
CShape* Shape554 = (CShape *)(m_pScene.createNode("Shape"));
Shape554->setUSE("HAnimJointShape");
Transform553->addChildren(*Shape554);

HAnimSegment551->addChildren(*Transform553);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt6'/> to <HAnimJoint name='vt5'/>
CShape* Shape555 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet556 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet556->setVertexCount(new int[1]{2});
CCoordinate* Coordinate557 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate557->setPoint(new float[6]{0.0059,1.3866,-0.08,0.006,1.4102,-0.0745});
LineSet556->setCoord(*Coordinate557);

CColorRGBA* ColorRGBA558 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA558->setUSE("HAnimSegmentLineColorRGBA");
LineSet556->setColor(*ColorRGBA558);

Shape555->setGeometry(LineSet556);

HAnimSegment551->addChildren(*Shape555);

HAnimJoint550->addChildren(*HAnimSegment551);

CHAnimJoint* HAnimJoint559 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint559->setName("vt5");
HAnimJoint559->setDEF("hanim_vt5");
HAnimJoint559->setCenter(new float[3]{0.006,1.4102,-0.0745});
HAnimJoint559->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint559->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment560 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment560->setName("t5");
HAnimSegment560->setDEF("hanim_t5");
//<HAnimJoint name='vt5'/> visualization sphere within <HAnimSegment name='t5'/>
CTouchSensor* TouchSensor561 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor561->setDescription("HAnimJoint vt5, HAnimSegment t5");
HAnimSegment560->addChildren(*TouchSensor561);

CTransform* Transform562 = (CTransform *)(m_pScene.createNode("Transform"));
Transform562->setTranslation(new float[3]{0.006,1.4102,-0.0745});
CShape* Shape563 = (CShape *)(m_pScene.createNode("Shape"));
Shape563->setUSE("HAnimJointShape");
Transform562->addChildren(*Shape563);

HAnimSegment560->addChildren(*Transform562);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt5'/> to <HAnimJoint name='vt4'/>
CShape* Shape564 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet565 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet565->setVertexCount(new int[1]{2});
CCoordinate* Coordinate566 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate566->setPoint(new float[6]{0.006,1.4102,-0.0745,0.0061,1.432,-0.0675});
LineSet565->setCoord(*Coordinate566);

CColorRGBA* ColorRGBA567 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA567->setUSE("HAnimSegmentLineColorRGBA");
LineSet565->setColor(*ColorRGBA567);

Shape564->setGeometry(LineSet565);

HAnimSegment560->addChildren(*Shape564);

HAnimJoint559->addChildren(*HAnimSegment560);

CHAnimJoint* HAnimJoint568 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint568->setName("vt4");
HAnimJoint568->setDEF("hanim_vt4");
HAnimJoint568->setCenter(new float[3]{0.0061,1.432,-0.0675});
HAnimJoint568->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint568->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment569 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment569->setName("t4");
HAnimSegment569->setDEF("hanim_t4");
//<HAnimJoint name='vt4'/> visualization sphere within <HAnimSegment name='t4'/>
CTouchSensor* TouchSensor570 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor570->setDescription("HAnimJoint vt4, HAnimSegment t4");
HAnimSegment569->addChildren(*TouchSensor570);

CTransform* Transform571 = (CTransform *)(m_pScene.createNode("Transform"));
Transform571->setTranslation(new float[3]{0.0061,1.432,-0.0675});
CShape* Shape572 = (CShape *)(m_pScene.createNode("Shape"));
Shape572->setUSE("HAnimJointShape");
Transform571->addChildren(*Shape572);

HAnimSegment569->addChildren(*Transform571);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt4'/> to <HAnimJoint name='vt3'/>
CShape* Shape573 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet574 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet574->setVertexCount(new int[1]{2});
CCoordinate* Coordinate575 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate575->setPoint(new float[6]{0.0061,1.432,-0.0675,0.0062,1.4583,-0.057});
LineSet574->setCoord(*Coordinate575);

CColorRGBA* ColorRGBA576 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA576->setUSE("HAnimSegmentLineColorRGBA");
LineSet574->setColor(*ColorRGBA576);

Shape573->setGeometry(LineSet574);

HAnimSegment569->addChildren(*Shape573);

HAnimJoint568->addChildren(*HAnimSegment569);

CHAnimJoint* HAnimJoint577 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint577->setName("vt3");
HAnimJoint577->setDEF("hanim_vt3");
HAnimJoint577->setCenter(new float[3]{0.0062,1.4583,-0.057});
HAnimJoint577->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint577->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment578 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment578->setName("t3");
HAnimSegment578->setDEF("hanim_t3");
//<HAnimJoint name='vt3'/> visualization sphere within <HAnimSegment name='t3'/>
CTouchSensor* TouchSensor579 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor579->setDescription("HAnimJoint vt3, HAnimSegment t3");
HAnimSegment578->addChildren(*TouchSensor579);

CTransform* Transform580 = (CTransform *)(m_pScene.createNode("Transform"));
Transform580->setTranslation(new float[3]{0.0062,1.4583,-0.057});
CShape* Shape581 = (CShape *)(m_pScene.createNode("Shape"));
Shape581->setUSE("HAnimJointShape");
Transform580->addChildren(*Shape581);

HAnimSegment578->addChildren(*Transform580);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt3'/> to <HAnimJoint name='vt2'/>
CShape* Shape582 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet583 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet583->setVertexCount(new int[1]{2});
CCoordinate* Coordinate584 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate584->setPoint(new float[6]{0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484});
LineSet583->setCoord(*Coordinate584);

CColorRGBA* ColorRGBA585 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA585->setUSE("HAnimSegmentLineColorRGBA");
LineSet583->setColor(*ColorRGBA585);

Shape582->setGeometry(LineSet583);

HAnimSegment578->addChildren(*Shape582);

HAnimJoint577->addChildren(*HAnimSegment578);

CHAnimJoint* HAnimJoint586 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint586->setName("vt2");
HAnimJoint586->setDEF("hanim_vt2");
HAnimJoint586->setCenter(new float[3]{0.0063,1.4761,-0.0484});
HAnimJoint586->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint586->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment587 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment587->setName("t2");
HAnimSegment587->setDEF("hanim_t2");
//<HAnimJoint name='vt2'/> visualization sphere within <HAnimSegment name='t2'/>
CTouchSensor* TouchSensor588 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor588->setDescription("HAnimJoint vt2, HAnimSegment t2");
HAnimSegment587->addChildren(*TouchSensor588);

CTransform* Transform589 = (CTransform *)(m_pScene.createNode("Transform"));
Transform589->setTranslation(new float[3]{0.0063,1.4761,-0.0484});
CShape* Shape590 = (CShape *)(m_pScene.createNode("Shape"));
Shape590->setUSE("HAnimJointShape");
Transform589->addChildren(*Shape590);

HAnimSegment587->addChildren(*Transform589);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt2'/> to <HAnimJoint name='vt1'/>
CShape* Shape591 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet592 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet592->setVertexCount(new int[1]{2});
CCoordinate* Coordinate593 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate593->setPoint(new float[6]{0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387});
LineSet592->setCoord(*Coordinate593);

CColorRGBA* ColorRGBA594 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA594->setUSE("HAnimSegmentLineColorRGBA");
LineSet592->setColor(*ColorRGBA594);

Shape591->setGeometry(LineSet592);

HAnimSegment587->addChildren(*Shape591);

HAnimJoint586->addChildren(*HAnimSegment587);

CHAnimJoint* HAnimJoint595 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint595->setName("vt1");
HAnimJoint595->setDEF("hanim_vt1");
HAnimJoint595->setCenter(new float[3]{0.0065,1.4951,-0.0387});
HAnimJoint595->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint595->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment596 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment596->setName("t1");
HAnimSegment596->setDEF("hanim_t1");
//<HAnimJoint name='vt1'/> visualization sphere within <HAnimSegment name='t1'/>
CTouchSensor* TouchSensor597 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor597->setDescription("HAnimJoint vt1, HAnimSegment t1");
HAnimSegment596->addChildren(*TouchSensor597);

CTransform* Transform598 = (CTransform *)(m_pScene.createNode("Transform"));
Transform598->setTranslation(new float[3]{0.0065,1.4951,-0.0387});
CShape* Shape599 = (CShape *)(m_pScene.createNode("Shape"));
Shape599->setUSE("HAnimJointShape");
Transform598->addChildren(*Shape599);

HAnimSegment596->addChildren(*Transform598);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='vc7'/>
CShape* Shape600 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet601 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet601->setVertexCount(new int[1]{2});
CCoordinate* Coordinate602 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate602->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301});
LineSet601->setCoord(*Coordinate602);

CColorRGBA* ColorRGBA603 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA603->setUSE("HAnimSegmentLineColorRGBA");
LineSet601->setColor(*ColorRGBA603);

Shape600->setGeometry(LineSet601);

HAnimSegment596->addChildren(*Shape600);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='l_sternoclavicular'/>
CShape* Shape604 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet605 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet605->setVertexCount(new int[1]{2});
CCoordinate* Coordinate606 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate606->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353});
LineSet605->setCoord(*Coordinate606);

CColorRGBA* ColorRGBA607 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA607->setUSE("HAnimSegmentLineColorRGBA");
LineSet605->setColor(*ColorRGBA607);

Shape604->setGeometry(LineSet605);

HAnimSegment596->addChildren(*Shape604);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='r_sternoclavicular'/>
CShape* Shape608 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet609 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet609->setVertexCount(new int[1]{2});
CCoordinate* Coordinate610 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate610->setPoint(new float[6]{0.0065,1.4951,-0.0387,-0.082,1.4488,-0.0353});
LineSet609->setCoord(*Coordinate610);

CColorRGBA* ColorRGBA611 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA611->setUSE("HAnimSegmentLineColorRGBA");
LineSet609->setColor(*ColorRGBA611);

Shape608->setGeometry(LineSet609);

HAnimSegment596->addChildren(*Shape608);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='suprasternale'/>
CShape* Shape612 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet613 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet613->setVertexCount(new int[1]{2});
CCoordinate* Coordinate614 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate614->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.0084,1.4714,0.0551});
LineSet613->setCoord(*Coordinate614);

CColorRGBA* ColorRGBA615 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA615->setUSE("HAnimSiteLineColorRGBA");
LineSet613->setColor(*ColorRGBA615);

Shape612->setGeometry(LineSet613);

HAnimSegment596->addChildren(*Shape612);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='cervicale'/>
CShape* Shape616 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet617 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet617->setVertexCount(new int[1]{2});
CCoordinate* Coordinate618 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate618->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.0064,1.52,-0.0815});
LineSet617->setCoord(*Coordinate618);

CColorRGBA* ColorRGBA619 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA619->setUSE("HAnimSiteLineColorRGBA");
LineSet617->setColor(*ColorRGBA619);

Shape616->setGeometry(LineSet617);

HAnimSegment596->addChildren(*Shape616);

CHAnimSite* HAnimSite620 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite620->setName("suprasternale_pt");
HAnimSite620->setDEF("hanim_suprasternale_pt");
HAnimSite620->setTranslation(new float[3]{0.0084,1.4714,0.0551});
//HAnimSite visualization shape
CTouchSensor* TouchSensor621 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor621->setDescription("HAnimSite suprasternale");
HAnimSite620->addChildren(*TouchSensor621);

CShape* Shape622 = (CShape *)(m_pScene.createNode("Shape"));
Shape622->setUSE("HAnimSiteShape");
HAnimSite620->addChildren(*Shape622);

HAnimSegment596->addChildren(*HAnimSite620);

CHAnimSite* HAnimSite623 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite623->setName("cervicale_pt");
HAnimSite623->setDEF("hanim_cervicale_pt");
HAnimSite623->setTranslation(new float[3]{0.0064,1.52,-0.0815});
//HAnimSite visualization shape
CTouchSensor* TouchSensor624 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor624->setDescription("HAnimSite cervicale");
HAnimSite623->addChildren(*TouchSensor624);

CShape* Shape625 = (CShape *)(m_pScene.createNode("Shape"));
Shape625->setUSE("HAnimSiteShape");
HAnimSite623->addChildren(*Shape625);

HAnimSegment596->addChildren(*HAnimSite623);

HAnimJoint595->addChildren(*HAnimSegment596);

CHAnimJoint* HAnimJoint626 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint626->setName("vc7");
HAnimJoint626->setDEF("hanim_vc7");
HAnimJoint626->setCenter(new float[3]{0.0066,1.5132,-0.0301});
HAnimJoint626->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint626->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment627 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment627->setName("c7");
HAnimSegment627->setDEF("hanim_c7");
//<HAnimJoint name='vc7'/> visualization sphere within <HAnimSegment name='c7'/>
CTouchSensor* TouchSensor628 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor628->setDescription("HAnimJoint vc7, HAnimSegment c7");
HAnimSegment627->addChildren(*TouchSensor628);

CTransform* Transform629 = (CTransform *)(m_pScene.createNode("Transform"));
Transform629->setTranslation(new float[3]{0.0066,1.5132,-0.0301});
CShape* Shape630 = (CShape *)(m_pScene.createNode("Shape"));
Shape630->setUSE("HAnimJointShape");
Transform629->addChildren(*Shape630);

HAnimSegment627->addChildren(*Transform629);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc7'/> to <HAnimJoint name='vc6'/>
CShape* Shape631 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet632 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet632->setVertexCount(new int[1]{2});
CCoordinate* Coordinate633 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate633->setPoint(new float[6]{0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143});
LineSet632->setCoord(*Coordinate633);

CColorRGBA* ColorRGBA634 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA634->setUSE("HAnimSegmentLineColorRGBA");
LineSet632->setColor(*ColorRGBA634);

Shape631->setGeometry(LineSet632);

HAnimSegment627->addChildren(*Shape631);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='r_neck_base'/>
CShape* Shape635 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet636 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet636->setVertexCount(new int[1]{2});
CCoordinate* Coordinate637 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate637->setPoint(new float[6]{0.0066,1.5132,-0.0301,-0.0419,1.5149,-0.022});
LineSet636->setCoord(*Coordinate637);

CColorRGBA* ColorRGBA638 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA638->setUSE("HAnimSiteLineColorRGBA");
LineSet636->setColor(*ColorRGBA638);

Shape635->setGeometry(LineSet636);

HAnimSegment627->addChildren(*Shape635);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='l_neck_base'/>
CShape* Shape639 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet640 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet640->setVertexCount(new int[1]{2});
CCoordinate* Coordinate641 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate641->setPoint(new float[6]{0.0066,1.5132,-0.0301,0.0646,1.5141,-0.038});
LineSet640->setCoord(*Coordinate641);

CColorRGBA* ColorRGBA642 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA642->setUSE("HAnimSiteLineColorRGBA");
LineSet640->setColor(*ColorRGBA642);

Shape639->setGeometry(LineSet640);

HAnimSegment627->addChildren(*Shape639);

CHAnimSite* HAnimSite643 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite643->setName("r_neck_base_pt");
HAnimSite643->setDEF("hanim_r_neck_base_pt");
HAnimSite643->setTranslation(new float[3]{-0.0419,1.5149,-0.022});
//HAnimSite visualization shape
CTouchSensor* TouchSensor644 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor644->setDescription("HAnimSite r_neck_base");
HAnimSite643->addChildren(*TouchSensor644);

CShape* Shape645 = (CShape *)(m_pScene.createNode("Shape"));
Shape645->setUSE("HAnimSiteShape");
HAnimSite643->addChildren(*Shape645);

HAnimSegment627->addChildren(*HAnimSite643);

CHAnimSite* HAnimSite646 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite646->setName("l_neck_base_pt");
HAnimSite646->setDEF("hanim_l_neck_base_pt");
HAnimSite646->setTranslation(new float[3]{0.0646,1.5141,-0.038});
//HAnimSite visualization shape
CTouchSensor* TouchSensor647 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor647->setDescription("HAnimSite l_neck_base");
HAnimSite646->addChildren(*TouchSensor647);

CShape* Shape648 = (CShape *)(m_pScene.createNode("Shape"));
Shape648->setUSE("HAnimSiteShape");
HAnimSite646->addChildren(*Shape648);

HAnimSegment627->addChildren(*HAnimSite646);

HAnimJoint626->addChildren(*HAnimSegment627);

CHAnimJoint* HAnimJoint649 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint649->setName("vc6");
HAnimJoint649->setDEF("hanim_vc6");
HAnimJoint649->setCenter(new float[3]{0.0066,1.5357,-0.0143});
HAnimJoint649->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint649->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment650 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment650->setName("c6");
HAnimSegment650->setDEF("hanim_c6");
//<HAnimJoint name='vc6'/> visualization sphere within <HAnimSegment name='c6'/>
CTouchSensor* TouchSensor651 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor651->setDescription("HAnimJoint vc6, HAnimSegment c6");
HAnimSegment650->addChildren(*TouchSensor651);

CTransform* Transform652 = (CTransform *)(m_pScene.createNode("Transform"));
Transform652->setTranslation(new float[3]{0.0066,1.5357,-0.0143});
CShape* Shape653 = (CShape *)(m_pScene.createNode("Shape"));
Shape653->setUSE("HAnimJointShape");
Transform652->addChildren(*Shape653);

HAnimSegment650->addChildren(*Transform652);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc6'/> to <HAnimJoint name='vc5'/>
CShape* Shape654 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet655 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet655->setVertexCount(new int[1]{2});
CCoordinate* Coordinate656 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate656->setPoint(new float[6]{0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082});
LineSet655->setCoord(*Coordinate656);

CColorRGBA* ColorRGBA657 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA657->setUSE("HAnimSegmentLineColorRGBA");
LineSet655->setColor(*ColorRGBA657);

Shape654->setGeometry(LineSet655);

HAnimSegment650->addChildren(*Shape654);

HAnimJoint649->addChildren(*HAnimSegment650);

CHAnimJoint* HAnimJoint658 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint658->setName("vc5");
HAnimJoint658->setDEF("hanim_vc5");
HAnimJoint658->setCenter(new float[3]{0.0066,1.552,-0.0082});
HAnimJoint658->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint658->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment659 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment659->setName("c5");
HAnimSegment659->setDEF("hanim_c5");
//<HAnimJoint name='vc5'/> visualization sphere within <HAnimSegment name='c5'/>
CTouchSensor* TouchSensor660 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor660->setDescription("HAnimJoint vc5, HAnimSegment c5");
HAnimSegment659->addChildren(*TouchSensor660);

CTransform* Transform661 = (CTransform *)(m_pScene.createNode("Transform"));
Transform661->setTranslation(new float[3]{0.0066,1.552,-0.0082});
CShape* Shape662 = (CShape *)(m_pScene.createNode("Shape"));
Shape662->setUSE("HAnimJointShape");
Transform661->addChildren(*Shape662);

HAnimSegment659->addChildren(*Transform661);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc5'/> to <HAnimJoint name='vc4'/>
CShape* Shape663 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet664 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet664->setVertexCount(new int[1]{2});
CCoordinate* Coordinate665 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate665->setPoint(new float[6]{0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084});
LineSet664->setCoord(*Coordinate665);

CColorRGBA* ColorRGBA666 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA666->setUSE("HAnimSegmentLineColorRGBA");
LineSet664->setColor(*ColorRGBA666);

Shape663->setGeometry(LineSet664);

HAnimSegment659->addChildren(*Shape663);

HAnimJoint658->addChildren(*HAnimSegment659);

CHAnimJoint* HAnimJoint667 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint667->setName("vc4");
HAnimJoint667->setDEF("hanim_vc4");
HAnimJoint667->setCenter(new float[3]{0.0066,1.5662,-0.0084});
HAnimJoint667->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint667->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment668 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment668->setName("c4");
HAnimSegment668->setDEF("hanim_c4");
//<HAnimJoint name='vc4'/> visualization sphere within <HAnimSegment name='c4'/>
CTouchSensor* TouchSensor669 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor669->setDescription("HAnimJoint vc4, HAnimSegment c4");
HAnimSegment668->addChildren(*TouchSensor669);

CTransform* Transform670 = (CTransform *)(m_pScene.createNode("Transform"));
Transform670->setTranslation(new float[3]{0.0066,1.5662,-0.0084});
CShape* Shape671 = (CShape *)(m_pScene.createNode("Shape"));
Shape671->setUSE("HAnimJointShape");
Transform670->addChildren(*Shape671);

HAnimSegment668->addChildren(*Transform670);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc4'/> to <HAnimJoint name='vc3'/>
CShape* Shape672 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet673 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet673->setVertexCount(new int[1]{2});
CCoordinate* Coordinate674 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate674->setPoint(new float[6]{0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103});
LineSet673->setCoord(*Coordinate674);

CColorRGBA* ColorRGBA675 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA675->setUSE("HAnimSegmentLineColorRGBA");
LineSet673->setColor(*ColorRGBA675);

Shape672->setGeometry(LineSet673);

HAnimSegment668->addChildren(*Shape672);

HAnimJoint667->addChildren(*HAnimSegment668);

CHAnimJoint* HAnimJoint676 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint676->setName("vc3");
HAnimJoint676->setDEF("hanim_vc3");
HAnimJoint676->setCenter(new float[3]{0.0066,1.58,-0.0103});
HAnimJoint676->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint676->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment677 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment677->setName("c3");
HAnimSegment677->setDEF("hanim_c3");
//<HAnimJoint name='vc3'/> visualization sphere within <HAnimSegment name='c3'/>
CTouchSensor* TouchSensor678 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor678->setDescription("HAnimJoint vc3, HAnimSegment c3");
HAnimSegment677->addChildren(*TouchSensor678);

CTransform* Transform679 = (CTransform *)(m_pScene.createNode("Transform"));
Transform679->setTranslation(new float[3]{0.0066,1.58,-0.0103});
CShape* Shape680 = (CShape *)(m_pScene.createNode("Shape"));
Shape680->setUSE("HAnimJointShape");
Transform679->addChildren(*Shape680);

HAnimSegment677->addChildren(*Transform679);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc3'/> to <HAnimJoint name='vc2'/>
CShape* Shape681 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet682 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet682->setVertexCount(new int[1]{2});
CCoordinate* Coordinate683 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate683->setPoint(new float[6]{0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103});
LineSet682->setCoord(*Coordinate683);

CColorRGBA* ColorRGBA684 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA684->setUSE("HAnimSegmentLineColorRGBA");
LineSet682->setColor(*ColorRGBA684);

Shape681->setGeometry(LineSet682);

HAnimSegment677->addChildren(*Shape681);

HAnimJoint676->addChildren(*HAnimSegment677);

CHAnimJoint* HAnimJoint685 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint685->setName("vc2");
HAnimJoint685->setDEF("hanim_vc2");
HAnimJoint685->setCenter(new float[3]{0.0066,1.5928,-0.0103});
HAnimJoint685->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint685->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment686 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment686->setName("c2");
HAnimSegment686->setDEF("hanim_c2");
//<HAnimJoint name='vc2'/> visualization sphere within <HAnimSegment name='c2'/>
CTouchSensor* TouchSensor687 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor687->setDescription("HAnimJoint vc2, HAnimSegment c2");
HAnimSegment686->addChildren(*TouchSensor687);

CTransform* Transform688 = (CTransform *)(m_pScene.createNode("Transform"));
Transform688->setTranslation(new float[3]{0.0066,1.5928,-0.0103});
CShape* Shape689 = (CShape *)(m_pScene.createNode("Shape"));
Shape689->setUSE("HAnimJointShape");
Transform688->addChildren(*Shape689);

HAnimSegment686->addChildren(*Transform688);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc2'/> to <HAnimJoint name='vc1'/>
CShape* Shape690 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet691 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet691->setVertexCount(new int[1]{2});
CCoordinate* Coordinate692 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate692->setPoint(new float[6]{0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034});
LineSet691->setCoord(*Coordinate692);

CColorRGBA* ColorRGBA693 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA693->setUSE("HAnimSegmentLineColorRGBA");
LineSet691->setColor(*ColorRGBA693);

Shape690->setGeometry(LineSet691);

HAnimSegment686->addChildren(*Shape690);

HAnimJoint685->addChildren(*HAnimSegment686);

CHAnimJoint* HAnimJoint694 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint694->setName("vc1");
HAnimJoint694->setDEF("hanim_vc1");
HAnimJoint694->setCenter(new float[3]{0.0066,1.6144,-0.0034});
HAnimJoint694->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint694->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment695 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment695->setName("c1");
HAnimSegment695->setDEF("hanim_c1");
//<HAnimJoint name='vc1'/> visualization sphere within <HAnimSegment name='c1'/>
CTouchSensor* TouchSensor696 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor696->setDescription("HAnimJoint vc1, HAnimSegment c1");
HAnimSegment695->addChildren(*TouchSensor696);

CTransform* Transform697 = (CTransform *)(m_pScene.createNode("Transform"));
Transform697->setTranslation(new float[3]{0.0066,1.6144,-0.0034});
CShape* Shape698 = (CShape *)(m_pScene.createNode("Shape"));
Shape698->setUSE("HAnimJointShape");
Transform697->addChildren(*Shape698);

HAnimSegment695->addChildren(*Transform697);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc1'/> to <HAnimJoint name='skullbase'/>
CShape* Shape699 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet700 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet700->setVertexCount(new int[1]{2});
CCoordinate* Coordinate701 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate701->setPoint(new float[6]{0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236});
LineSet700->setCoord(*Coordinate701);

CColorRGBA* ColorRGBA702 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA702->setUSE("HAnimSegmentLineColorRGBA");
LineSet700->setColor(*ColorRGBA702);

Shape699->setGeometry(LineSet700);

HAnimSegment695->addChildren(*Shape699);

HAnimJoint694->addChildren(*HAnimSegment695);

CHAnimJoint* HAnimJoint703 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint703->setName("skullbase");
HAnimJoint703->setDEF("hanim_skullbase");
HAnimJoint703->setCenter(new float[3]{0.0044,1.6209,0.0236});
HAnimJoint703->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint703->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment704 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment704->setName("skull");
HAnimSegment704->setDEF("hanim_skull");
//<HAnimJoint name='skullbase'/> visualization sphere within <HAnimSegment name='skull'/>
CTouchSensor* TouchSensor705 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor705->setDescription("HAnimJoint skullbase, HAnimSegment skull");
HAnimSegment704->addChildren(*TouchSensor705);

CTransform* Transform706 = (CTransform *)(m_pScene.createNode("Transform"));
Transform706->setTranslation(new float[3]{0.0044,1.6209,0.0236});
CShape* Shape707 = (CShape *)(m_pScene.createNode("Shape"));
Shape707->setUSE("HAnimJointShape");
Transform706->addChildren(*Shape707);

HAnimSegment704->addChildren(*Transform706);

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyeball_joint'/>
CShape* Shape708 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet709 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet709->setVertexCount(new int[1]{2});
CCoordinate* Coordinate710 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate710->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0336,1.6332,0.0502});
LineSet709->setCoord(*Coordinate710);

CColorRGBA* ColorRGBA711 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA711->setUSE("HAnimSegmentLineColorRGBA");
LineSet709->setColor(*ColorRGBA711);

Shape708->setGeometry(LineSet709);

HAnimSegment704->addChildren(*Shape708);

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyelid_joint'/>
CShape* Shape712 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet713 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet713->setVertexCount(new int[1]{2});
CCoordinate* Coordinate714 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate714->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0336,1.6332,0.0502});
LineSet713->setCoord(*Coordinate714);

CColorRGBA* ColorRGBA715 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA715->setUSE("HAnimSegmentLineColorRGBA");
LineSet713->setColor(*ColorRGBA715);

Shape712->setGeometry(LineSet713);

HAnimSegment704->addChildren(*Shape712);

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyebrow_joint'/>
CShape* Shape716 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet717 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet717->setVertexCount(new int[1]{2});
CCoordinate* Coordinate718 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate718->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0336,1.635,0.0506});
LineSet717->setCoord(*Coordinate718);

CColorRGBA* ColorRGBA719 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA719->setUSE("HAnimSegmentLineColorRGBA");
LineSet717->setColor(*ColorRGBA719);

Shape716->setGeometry(LineSet717);

HAnimSegment704->addChildren(*Shape716);

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyeball_joint'/>
CShape* Shape720 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet721 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet721->setVertexCount(new int[1]{2});
CCoordinate* Coordinate722 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate722->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502});
LineSet721->setCoord(*Coordinate722);

CColorRGBA* ColorRGBA723 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA723->setUSE("HAnimSegmentLineColorRGBA");
LineSet721->setColor(*ColorRGBA723);

Shape720->setGeometry(LineSet721);

HAnimSegment704->addChildren(*Shape720);

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyelid_joint'/>
CShape* Shape724 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet725 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet725->setVertexCount(new int[1]{2});
CCoordinate* Coordinate726 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate726->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502});
LineSet725->setCoord(*Coordinate726);

CColorRGBA* ColorRGBA727 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA727->setUSE("HAnimSegmentLineColorRGBA");
LineSet725->setColor(*ColorRGBA727);

Shape724->setGeometry(LineSet725);

HAnimSegment704->addChildren(*Shape724);

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyebrow_joint'/>
CShape* Shape728 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet729 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet729->setVertexCount(new int[1]{2});
CCoordinate* Coordinate730 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate730->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0336,1.635,0.0506});
LineSet729->setCoord(*Coordinate730);

CColorRGBA* ColorRGBA731 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA731->setUSE("HAnimSegmentLineColorRGBA");
LineSet729->setColor(*ColorRGBA731);

Shape728->setGeometry(LineSet729);

HAnimSegment704->addChildren(*Shape728);

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='temporomandibular'/>
CShape* Shape732 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet733 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet733->setVertexCount(new int[1]{2});
CCoordinate* Coordinate734 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate734->setPoint(new float[6]{0.0044,1.6209,0.0236,0,1.63,0.015});
LineSet733->setCoord(*Coordinate734);

CColorRGBA* ColorRGBA735 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA735->setUSE("HAnimSegmentLineColorRGBA");
LineSet733->setColor(*ColorRGBA735);

Shape732->setGeometry(LineSet733);

HAnimSegment704->addChildren(*Shape732);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='skull_tip'/>
CShape* Shape736 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet737 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet737->setVertexCount(new int[1]{2});
CCoordinate* Coordinate738 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate738->setPoint(new float[6]{0.0044,1.6209,0.0236,0.005,1.7504,0.0055});
LineSet737->setCoord(*Coordinate738);

CColorRGBA* ColorRGBA739 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA739->setUSE("HAnimSiteLineColorRGBA");
LineSet737->setColor(*ColorRGBA739);

Shape736->setGeometry(LineSet737);

HAnimSegment704->addChildren(*Shape736);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='sellion'/>
CShape* Shape740 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet741 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet741->setVertexCount(new int[1]{2});
CCoordinate* Coordinate742 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate742->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0058,1.6316,0.0852});
LineSet741->setCoord(*Coordinate742);

CColorRGBA* ColorRGBA743 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA743->setUSE("HAnimSiteLineColorRGBA");
LineSet741->setColor(*ColorRGBA743);

Shape740->setGeometry(LineSet741);

HAnimSegment704->addChildren(*Shape740);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_infraorbitale'/>
CShape* Shape744 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet745 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet745->setVertexCount(new int[1]{2});
CCoordinate* Coordinate746 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate746->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0237,1.6171,0.0752});
LineSet745->setCoord(*Coordinate746);

CColorRGBA* ColorRGBA747 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA747->setUSE("HAnimSiteLineColorRGBA");
LineSet745->setColor(*ColorRGBA747);

Shape744->setGeometry(LineSet745);

HAnimSegment704->addChildren(*Shape744);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_infraorbitale'/>
CShape* Shape748 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet749 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet749->setVertexCount(new int[1]{2});
CCoordinate* Coordinate750 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate750->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0341,1.6171,0.0752});
LineSet749->setCoord(*Coordinate750);

CColorRGBA* ColorRGBA751 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA751->setUSE("HAnimSiteLineColorRGBA");
LineSet749->setColor(*ColorRGBA751);

Shape748->setGeometry(LineSet749);

HAnimSegment704->addChildren(*Shape748);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='supramenton'/>
CShape* Shape752 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet753 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet753->setVertexCount(new int[1]{2});
CCoordinate* Coordinate754 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate754->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0061,1.541,0.0805});
LineSet753->setCoord(*Coordinate754);

CColorRGBA* ColorRGBA755 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA755->setUSE("HAnimSiteLineColorRGBA");
LineSet753->setColor(*ColorRGBA755);

Shape752->setGeometry(LineSet753);

HAnimSegment704->addChildren(*Shape752);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_tragion'/>
CShape* Shape756 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet757 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet757->setVertexCount(new int[1]{2});
CCoordinate* Coordinate758 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate758->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0646,1.6347,0.0302});
LineSet757->setCoord(*Coordinate758);

CColorRGBA* ColorRGBA759 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA759->setUSE("HAnimSiteLineColorRGBA");
LineSet757->setColor(*ColorRGBA759);

Shape756->setGeometry(LineSet757);

HAnimSegment704->addChildren(*Shape756);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_gonion'/>
CShape* Shape760 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet761 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet761->setVertexCount(new int[1]{2});
CCoordinate* Coordinate762 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate762->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.052,1.5529,0.0347});
LineSet761->setCoord(*Coordinate762);

CColorRGBA* ColorRGBA763 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA763->setUSE("HAnimSiteLineColorRGBA");
LineSet761->setColor(*ColorRGBA763);

Shape760->setGeometry(LineSet761);

HAnimSegment704->addChildren(*Shape760);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_tragion'/>
CShape* Shape764 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet765 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet765->setVertexCount(new int[1]{2});
CCoordinate* Coordinate766 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate766->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0739,1.6348,0.0282});
LineSet765->setCoord(*Coordinate766);

CColorRGBA* ColorRGBA767 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA767->setUSE("HAnimSiteLineColorRGBA");
LineSet765->setColor(*ColorRGBA767);

Shape764->setGeometry(LineSet765);

HAnimSegment704->addChildren(*Shape764);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_gonion'/>
CShape* Shape768 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet769 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet769->setVertexCount(new int[1]{2});
CCoordinate* Coordinate770 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate770->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0631,1.553,0.033});
LineSet769->setCoord(*Coordinate770);

CColorRGBA* ColorRGBA771 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA771->setUSE("HAnimSiteLineColorRGBA");
LineSet769->setColor(*ColorRGBA771);

Shape768->setGeometry(LineSet769);

HAnimSegment704->addChildren(*Shape768);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='nuchale'/>
CShape* Shape772 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet773 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet773->setVertexCount(new int[1]{2});
CCoordinate* Coordinate774 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate774->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0039,1.5972,-0.0796});
LineSet773->setCoord(*Coordinate774);

CColorRGBA* ColorRGBA775 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA775->setUSE("HAnimSiteLineColorRGBA");
LineSet773->setColor(*ColorRGBA775);

Shape772->setGeometry(LineSet773);

HAnimSegment704->addChildren(*Shape772);

//TODO move skull_tip x to zero
CHAnimSite* HAnimSite776 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite776->setName("skull_tip");
HAnimSite776->setDEF("hanim_skull_tip");
HAnimSite776->setTranslation(new float[3]{0.005,1.7504,0.0055});
//HAnimSite visualization shape
CTouchSensor* TouchSensor777 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor777->setDescription("HAnimSite skull_tip");
HAnimSite776->addChildren(*TouchSensor777);

CShape* Shape778 = (CShape *)(m_pScene.createNode("Shape"));
Shape778->setUSE("HAnimSiteShape");
HAnimSite776->addChildren(*Shape778);

HAnimSegment704->addChildren(*HAnimSite776);

CHAnimSite* HAnimSite779 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite779->setName("sellion_pt");
HAnimSite779->setDEF("hanim_sellion_pt");
HAnimSite779->setTranslation(new float[3]{0.0058,1.6316,0.0852});
//HAnimSite visualization shape
CTouchSensor* TouchSensor780 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor780->setDescription("HAnimSite sellion");
HAnimSite779->addChildren(*TouchSensor780);

CShape* Shape781 = (CShape *)(m_pScene.createNode("Shape"));
Shape781->setUSE("HAnimSiteShape");
HAnimSite779->addChildren(*Shape781);

HAnimSegment704->addChildren(*HAnimSite779);

CHAnimSite* HAnimSite782 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite782->setName("r_infraorbitale_pt");
HAnimSite782->setDEF("hanim_r_infraorbitale_pt");
HAnimSite782->setTranslation(new float[3]{-0.0237,1.6171,0.0752});
//HAnimSite visualization shape
CTouchSensor* TouchSensor783 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor783->setDescription("HAnimSite r_infraorbitale");
HAnimSite782->addChildren(*TouchSensor783);

CShape* Shape784 = (CShape *)(m_pScene.createNode("Shape"));
Shape784->setUSE("HAnimSiteShape");
HAnimSite782->addChildren(*Shape784);

HAnimSegment704->addChildren(*HAnimSite782);

CHAnimSite* HAnimSite785 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite785->setName("l_infraorbitale_pt");
HAnimSite785->setDEF("hanim_l_infraorbitale_pt");
HAnimSite785->setTranslation(new float[3]{0.0341,1.6171,0.0752});
//HAnimSite visualization shape
CTouchSensor* TouchSensor786 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor786->setDescription("HAnimSite l_infraorbitale");
HAnimSite785->addChildren(*TouchSensor786);

CShape* Shape787 = (CShape *)(m_pScene.createNode("Shape"));
Shape787->setUSE("HAnimSiteShape");
HAnimSite785->addChildren(*Shape787);

HAnimSegment704->addChildren(*HAnimSite785);

CHAnimSite* HAnimSite788 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite788->setName("supramenton_pt");
HAnimSite788->setDEF("hanim_supramenton_pt");
HAnimSite788->setTranslation(new float[3]{0.0061,1.541,0.0805});
//HAnimSite visualization shape
CTouchSensor* TouchSensor789 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor789->setDescription("HAnimSite supramenton");
HAnimSite788->addChildren(*TouchSensor789);

CShape* Shape790 = (CShape *)(m_pScene.createNode("Shape"));
Shape790->setUSE("HAnimSiteShape");
HAnimSite788->addChildren(*Shape790);

HAnimSegment704->addChildren(*HAnimSite788);

CHAnimSite* HAnimSite791 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite791->setName("r_tragion_pt");
HAnimSite791->setDEF("hanim_r_tragion_pt");
HAnimSite791->setTranslation(new float[3]{-0.0646,1.6347,0.0302});
//HAnimSite visualization shape
CTouchSensor* TouchSensor792 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor792->setDescription("HAnimSite r_tragion");
HAnimSite791->addChildren(*TouchSensor792);

CShape* Shape793 = (CShape *)(m_pScene.createNode("Shape"));
Shape793->setUSE("HAnimSiteShape");
HAnimSite791->addChildren(*Shape793);

HAnimSegment704->addChildren(*HAnimSite791);

CHAnimSite* HAnimSite794 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite794->setName("r_gonion_pt");
HAnimSite794->setDEF("hanim_r_gonion_pt");
HAnimSite794->setTranslation(new float[3]{-0.052,1.5529,0.0347});
//HAnimSite visualization shape
CTouchSensor* TouchSensor795 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor795->setDescription("HAnimSite r_gonion");
HAnimSite794->addChildren(*TouchSensor795);

CShape* Shape796 = (CShape *)(m_pScene.createNode("Shape"));
Shape796->setUSE("HAnimSiteShape");
HAnimSite794->addChildren(*Shape796);

HAnimSegment704->addChildren(*HAnimSite794);

CHAnimSite* HAnimSite797 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite797->setName("l_tragion_pt");
HAnimSite797->setDEF("hanim_l_tragion_pt");
HAnimSite797->setTranslation(new float[3]{0.0739,1.6348,0.0282});
//HAnimSite visualization shape
CTouchSensor* TouchSensor798 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor798->setDescription("HAnimSite l_tragion");
HAnimSite797->addChildren(*TouchSensor798);

CShape* Shape799 = (CShape *)(m_pScene.createNode("Shape"));
Shape799->setUSE("HAnimSiteShape");
HAnimSite797->addChildren(*Shape799);

HAnimSegment704->addChildren(*HAnimSite797);

CHAnimSite* HAnimSite800 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite800->setName("l_gonion_pt");
HAnimSite800->setDEF("hanim_l_gonion_pt");
HAnimSite800->setTranslation(new float[3]{0.0631,1.553,0.033});
//HAnimSite visualization shape
CTouchSensor* TouchSensor801 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor801->setDescription("HAnimSite l_gonion");
HAnimSite800->addChildren(*TouchSensor801);

CShape* Shape802 = (CShape *)(m_pScene.createNode("Shape"));
Shape802->setUSE("HAnimSiteShape");
HAnimSite800->addChildren(*Shape802);

HAnimSegment704->addChildren(*HAnimSite800);

CHAnimSite* HAnimSite803 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite803->setName("nuchale_pt");
HAnimSite803->setDEF("hanim_nuchale_pt");
HAnimSite803->setTranslation(new float[3]{0.0039,1.5972,-0.0796});
//HAnimSite visualization shape
CTouchSensor* TouchSensor804 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor804->setDescription("HAnimSite nuchale");
HAnimSite803->addChildren(*TouchSensor804);

CShape* Shape805 = (CShape *)(m_pScene.createNode("Shape"));
Shape805->setUSE("HAnimSiteShape");
HAnimSite803->addChildren(*Shape805);

HAnimSegment704->addChildren(*HAnimSite803);

HAnimJoint703->addChildren(*HAnimSegment704);

CHAnimJoint* HAnimJoint806 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint806->setName("l_eyeball_joint");
HAnimJoint806->setDEF("hanim_l_eyeball_joint");
HAnimJoint806->setCenter(new float[3]{0.0336,1.6332,0.0502});
HAnimJoint806->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint806->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment807 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment807->setName("l_eyeball");
HAnimSegment807->setDEF("hanim_l_eyeball");
//<HAnimJoint name='l_eyeball_joint'/> visualization sphere within <HAnimSegment name='l_eyeball'/>
CTouchSensor* TouchSensor808 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor808->setDescription("HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball");
HAnimSegment807->addChildren(*TouchSensor808);

CTransform* Transform809 = (CTransform *)(m_pScene.createNode("Transform"));
Transform809->setTranslation(new float[3]{0.0336,1.6332,0.0502});
CShape* Shape810 = (CShape *)(m_pScene.createNode("Shape"));
Shape810->setUSE("HAnimJointShape");
Transform809->addChildren(*Shape810);

HAnimSegment807->addChildren(*Transform809);

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_eyeball_joint'/> to <HAnimSite name='l_eyeball_site_view'/>
CShape* Shape811 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet812 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet812->setVertexCount(new int[1]{2});
CCoordinate* Coordinate813 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate813->setPoint(new float[6]{0.0336,1.6332,0.0502,0.034,1.64,0.05});
LineSet812->setCoord(*Coordinate813);

CColorRGBA* ColorRGBA814 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA814->setDEF("HAnimSiteViewpointLineColorRGBA");
ColorRGBA814->setColor(new float[8]{0,0,1,1,0,0,1,0.1});
LineSet812->setColor(*ColorRGBA814);

Shape811->setGeometry(LineSet812);

HAnimSegment807->addChildren(*Shape811);

CHAnimSite* HAnimSite815 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite815->setName("l_eyeball_site_view");
HAnimSite815->setDEF("hanim_l_eyeball_site_view");
HAnimSite815->setTranslation(new float[3]{0.034,1.64,0.05});
CViewpoint* Viewpoint816 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint816->setDEF("hanim_l_eyeball_site_viewpoint");
Viewpoint816->setDescription("l_eyeball_site_viewpoint looking forward");
Viewpoint816->setOrientation(new float[4]{0,1,0,3.141593});
Viewpoint816->setPosition(new float[3]{0,0,0});
HAnimSite815->addChildren(*Viewpoint816);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor817 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor817->setDescription("HAnimSite Viewpoint hanim_l_eyeball_site_view");
Anchor817->setUrl(new CString[1]{"#hanim_l_eyeball_site_viewpoint"}, 1);
CLOD* LOD818 = (CLOD *)(m_pScene.createNode("LOD"));
LOD818->setForceTransitions(True);
LOD818->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo819 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo819->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD818->addChildren(*WorldInfo819);

CShape* Shape820 = (CShape *)(m_pScene.createNode("Shape"));
Shape820->setDEF("HAnimSiteViewpointShape");
CIndexedFaceSet* IndexedFaceSet821 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet821->setDEF("SiteViewpointDiamondIFS");
IndexedFaceSet821->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet821->setCreaseAngle(0.5);
CCoordinate* Coordinate822 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate822->setPoint(new float[18]{0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
IndexedFaceSet821->setCoord(*Coordinate822);

Shape820->setGeometry(IndexedFaceSet821);

CAppearance* Appearance823 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material824 = (CMaterial *)(m_pScene.createNode("Material"));
Material824->setDiffuseColor(new float[3]{0,0,1});
Material824->setTransparency(0.6);
Appearance823->setMaterial(*Material824);

Shape820->setAppearance(*Appearance823);

LOD818->addChildren(*Shape820);

Anchor817->addChildren(*LOD818);

HAnimSite815->addChildren(*Anchor817);

HAnimSegment807->addChildren(*HAnimSite815);

HAnimJoint806->addChildren(*HAnimSegment807);

HAnimJoint703->addChildren(*HAnimJoint806);

CHAnimJoint* HAnimJoint825 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint825->setName("l_eyelid_joint");
HAnimJoint825->setDEF("hanim_l_eyelid_joint");
HAnimJoint825->setCenter(new float[3]{0.0336,1.6332,0.0502});
HAnimJoint825->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint825->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment826 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment826->setName("l_eyelid");
HAnimSegment826->setDEF("hanim_l_eyelid");
//<HAnimJoint name='l_eyelid_joint'/> visualization sphere within <HAnimSegment name='l_eyelid'/>
CTouchSensor* TouchSensor827 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor827->setDescription("HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid");
HAnimSegment826->addChildren(*TouchSensor827);

CTransform* Transform828 = (CTransform *)(m_pScene.createNode("Transform"));
Transform828->setTranslation(new float[3]{0.0336,1.6332,0.0502});
CShape* Shape829 = (CShape *)(m_pScene.createNode("Shape"));
Shape829->setUSE("HAnimJointShape");
Transform828->addChildren(*Shape829);

HAnimSegment826->addChildren(*Transform828);

HAnimJoint825->addChildren(*HAnimSegment826);

HAnimJoint703->addChildren(*HAnimJoint825);

CHAnimJoint* HAnimJoint830 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint830->setName("l_eyebrow_joint");
HAnimJoint830->setDEF("hanim_l_eyebrow_joint");
HAnimJoint830->setCenter(new float[3]{0.0336,1.635,0.0506});
HAnimJoint830->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint830->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment831 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment831->setName("l_eyebrow");
HAnimSegment831->setDEF("hanim_l_eyebrow");
//<HAnimJoint name='l_eyebrow_joint'/> visualization sphere within <HAnimSegment name='l_eyebrow'/>
CTouchSensor* TouchSensor832 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor832->setDescription("HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow");
HAnimSegment831->addChildren(*TouchSensor832);

CTransform* Transform833 = (CTransform *)(m_pScene.createNode("Transform"));
Transform833->setTranslation(new float[3]{0.0336,1.635,0.0506});
CShape* Shape834 = (CShape *)(m_pScene.createNode("Shape"));
Shape834->setUSE("HAnimJointShape");
Transform833->addChildren(*Shape834);

HAnimSegment831->addChildren(*Transform833);

HAnimJoint830->addChildren(*HAnimSegment831);

HAnimJoint703->addChildren(*HAnimJoint830);

CHAnimJoint* HAnimJoint835 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint835->setName("r_eyeball_joint");
HAnimJoint835->setDEF("hanim_r_eyeball_joint");
HAnimJoint835->setCenter(new float[3]{-0.0336,1.6332,0.0502});
HAnimJoint835->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint835->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment836 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment836->setName("r_eyeball");
HAnimSegment836->setDEF("hanim_r_eyeball");
//<HAnimJoint name='r_eyeball_joint'/> visualization sphere within <HAnimSegment name='r_eyeball'/>
CTouchSensor* TouchSensor837 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor837->setDescription("HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball");
HAnimSegment836->addChildren(*TouchSensor837);

CTransform* Transform838 = (CTransform *)(m_pScene.createNode("Transform"));
Transform838->setTranslation(new float[3]{-0.0336,1.6332,0.0502});
CShape* Shape839 = (CShape *)(m_pScene.createNode("Shape"));
Shape839->setUSE("HAnimJointShape");
Transform838->addChildren(*Shape839);

HAnimSegment836->addChildren(*Transform838);

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_eyeball_joint'/> to <HAnimSite name='r_eyeball_site_view'/>
CShape* Shape840 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet841 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet841->setVertexCount(new int[1]{2});
CCoordinate* Coordinate842 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate842->setPoint(new float[6]{-0.0336,1.6332,0.0502,-0.034,1.64,0.05});
LineSet841->setCoord(*Coordinate842);

CColorRGBA* ColorRGBA843 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA843->setUSE("HAnimSiteViewpointLineColorRGBA");
LineSet841->setColor(*ColorRGBA843);

Shape840->setGeometry(LineSet841);

HAnimSegment836->addChildren(*Shape840);

CHAnimSite* HAnimSite844 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite844->setName("r_eyeball_site_view");
HAnimSite844->setDEF("hanim_r_eyeball_site_view");
HAnimSite844->setTranslation(new float[3]{-0.034,1.64,0.05});
CViewpoint* Viewpoint845 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint845->setDEF("hanim_r_eyeball_site_viewpoint");
Viewpoint845->setDescription("r_eyeball_site_viewpoint looking forward");
Viewpoint845->setOrientation(new float[4]{0,1,0,3.141593});
Viewpoint845->setPosition(new float[3]{0,0,0});
HAnimSite844->addChildren(*Viewpoint845);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor846 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor846->setDescription("HAnimSite Viewpoint hanim_r_eyeball_site_view");
Anchor846->setUrl(new CString[1]{"#hanim_r_eyeball_site_viewpoint"}, 1);
CLOD* LOD847 = (CLOD *)(m_pScene.createNode("LOD"));
LOD847->setForceTransitions(True);
LOD847->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo848 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo848->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD847->addChildren(*WorldInfo848);

CShape* Shape849 = (CShape *)(m_pScene.createNode("Shape"));
Shape849->setUSE("HAnimSiteViewpointShape");
LOD847->addChildren(*Shape849);

Anchor846->addChildren(*LOD847);

HAnimSite844->addChildren(*Anchor846);

HAnimSegment836->addChildren(*HAnimSite844);

HAnimJoint835->addChildren(*HAnimSegment836);

HAnimJoint703->addChildren(*HAnimJoint835);

CHAnimJoint* HAnimJoint850 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint850->setName("r_eyelid_joint");
HAnimJoint850->setDEF("hanim_r_eyelid_joint");
HAnimJoint850->setCenter(new float[3]{-0.0336,1.6332,0.0502});
HAnimJoint850->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint850->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment851 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment851->setName("r_eyelid");
HAnimSegment851->setDEF("hanim_r_eyelid");
//<HAnimJoint name='r_eyelid_joint'/> visualization sphere within <HAnimSegment name='r_eyelid'/>
CTouchSensor* TouchSensor852 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor852->setDescription("HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid");
HAnimSegment851->addChildren(*TouchSensor852);

CTransform* Transform853 = (CTransform *)(m_pScene.createNode("Transform"));
Transform853->setTranslation(new float[3]{-0.0336,1.6332,0.0502});
CShape* Shape854 = (CShape *)(m_pScene.createNode("Shape"));
Shape854->setUSE("HAnimJointShape");
Transform853->addChildren(*Shape854);

HAnimSegment851->addChildren(*Transform853);

HAnimJoint850->addChildren(*HAnimSegment851);

HAnimJoint703->addChildren(*HAnimJoint850);

CHAnimJoint* HAnimJoint855 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint855->setName("r_eyebrow_joint");
HAnimJoint855->setDEF("hanim_r_eyebrow_joint");
HAnimJoint855->setCenter(new float[3]{-0.0336,1.635,0.0506});
HAnimJoint855->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint855->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment856 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment856->setName("r_eyebrow");
HAnimSegment856->setDEF("hanim_r_eyebrow");
//<HAnimJoint name='r_eyebrow_joint'/> visualization sphere within <HAnimSegment name='r_eyebrow'/>
CTouchSensor* TouchSensor857 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor857->setDescription("HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow");
HAnimSegment856->addChildren(*TouchSensor857);

CTransform* Transform858 = (CTransform *)(m_pScene.createNode("Transform"));
Transform858->setTranslation(new float[3]{-0.0336,1.635,0.0506});
CShape* Shape859 = (CShape *)(m_pScene.createNode("Shape"));
Shape859->setUSE("HAnimJointShape");
Transform858->addChildren(*Shape859);

HAnimSegment856->addChildren(*Transform858);

HAnimJoint855->addChildren(*HAnimSegment856);

HAnimJoint703->addChildren(*HAnimJoint855);

//Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint
CHAnimJoint* HAnimJoint860 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint860->setName("temporomandibular");
HAnimJoint860->setDEF("hanim_temporomandibular");
HAnimJoint860->setCenter(new float[3]{0,1.63,0.015});
HAnimJoint860->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint860->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment861 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment861->setName("jaw");
HAnimSegment861->setDEF("hanim_jaw");
//<HAnimJoint name='temporomandibular'/> visualization sphere within <HAnimSegment name='jaw'/>
CTouchSensor* TouchSensor862 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor862->setDescription("HAnimJoint temporomandibular, HAnimSegment jaw");
HAnimSegment861->addChildren(*TouchSensor862);

CTransform* Transform863 = (CTransform *)(m_pScene.createNode("Transform"));
Transform863->setTranslation(new float[3]{0,1.63,0.015});
CShape* Shape864 = (CShape *)(m_pScene.createNode("Shape"));
Shape864->setUSE("HAnimJointShape");
Transform863->addChildren(*Shape864);

HAnimSegment861->addChildren(*Transform863);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_l_site'/>
CShape* Shape865 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet866 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet866->setVertexCount(new int[1]{2});
CCoordinate* Coordinate867 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate867->setPoint(new float[6]{0,1.63,0.015,0.045,1.63,0});
LineSet866->setCoord(*Coordinate867);

CColorRGBA* ColorRGBA868 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA868->setUSE("HAnimSiteLineColorRGBA");
LineSet866->setColor(*ColorRGBA868);

Shape865->setGeometry(LineSet866);

HAnimSegment861->addChildren(*Shape865);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_r_site'/>
CShape* Shape869 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet870 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet870->setVertexCount(new int[1]{2});
CCoordinate* Coordinate871 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate871->setPoint(new float[6]{0,1.63,0.015,-0.045,1.63,0});
LineSet870->setCoord(*Coordinate871);

CColorRGBA* ColorRGBA872 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA872->setUSE("HAnimSiteLineColorRGBA");
LineSet870->setColor(*ColorRGBA872);

Shape869->setGeometry(LineSet870);

HAnimSegment861->addChildren(*Shape869);

CHAnimSite* HAnimSite873 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite873->setName("temporomandibular_l_site_pt");
HAnimSite873->setDEF("hanim_temporomandibular_l_site_pt");
HAnimSite873->setTranslation(new float[3]{0.045,1.63,0});
//HAnimSite visualization shape
CTouchSensor* TouchSensor874 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor874->setDescription("HAnimSite temporomandibular_l_site");
HAnimSite873->addChildren(*TouchSensor874);

CShape* Shape875 = (CShape *)(m_pScene.createNode("Shape"));
Shape875->setUSE("HAnimSiteShape");
HAnimSite873->addChildren(*Shape875);

HAnimSegment861->addChildren(*HAnimSite873);

CHAnimSite* HAnimSite876 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite876->setName("temporomandibular_r_site_pt");
HAnimSite876->setDEF("hanim_temporomandibular_r_site_pt");
HAnimSite876->setTranslation(new float[3]{-0.045,1.63,0});
//HAnimSite visualization shape
CTouchSensor* TouchSensor877 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor877->setDescription("HAnimSite temporomandibular_r_site");
HAnimSite876->addChildren(*TouchSensor877);

CShape* Shape878 = (CShape *)(m_pScene.createNode("Shape"));
Shape878->setUSE("HAnimSiteShape");
HAnimSite876->addChildren(*Shape878);

HAnimSegment861->addChildren(*HAnimSite876);

HAnimJoint860->addChildren(*HAnimSegment861);

HAnimJoint703->addChildren(*HAnimJoint860);

HAnimJoint694->addChildren(*HAnimJoint703);

HAnimJoint685->addChildren(*HAnimJoint694);

HAnimJoint676->addChildren(*HAnimJoint685);

HAnimJoint667->addChildren(*HAnimJoint676);

HAnimJoint658->addChildren(*HAnimJoint667);

HAnimJoint649->addChildren(*HAnimJoint658);

HAnimJoint626->addChildren(*HAnimJoint649);

HAnimJoint595->addChildren(*HAnimJoint626);

CHAnimJoint* HAnimJoint879 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint879->setName("l_sternoclavicular");
HAnimJoint879->setDEF("hanim_l_sternoclavicular");
HAnimJoint879->setCenter(new float[3]{0.082,1.4488,-0.0353});
HAnimJoint879->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint879->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment880 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment880->setName("l_clavicle");
HAnimSegment880->setDEF("hanim_l_clavicle");
//<HAnimJoint name='l_sternoclavicular'/> visualization sphere within <HAnimSegment name='l_clavicle'/>
CTouchSensor* TouchSensor881 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor881->setDescription("HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle");
HAnimSegment880->addChildren(*TouchSensor881);

CTransform* Transform882 = (CTransform *)(m_pScene.createNode("Transform"));
Transform882->setTranslation(new float[3]{0.082,1.4488,-0.0353});
CShape* Shape883 = (CShape *)(m_pScene.createNode("Shape"));
Shape883->setUSE("HAnimJointShape");
Transform882->addChildren(*Shape883);

HAnimSegment880->addChildren(*Transform882);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_sternoclavicular'/> to <HAnimJoint name='l_acromioclavicular'/>
CShape* Shape884 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet885 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet885->setVertexCount(new int[1]{2});
CCoordinate* Coordinate886 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate886->setPoint(new float[6]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424});
LineSet885->setCoord(*Coordinate886);

CColorRGBA* ColorRGBA887 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA887->setUSE("HAnimSegmentLineColorRGBA");
LineSet885->setColor(*ColorRGBA887);

Shape884->setGeometry(LineSet885);

HAnimSegment880->addChildren(*Shape884);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_clavicale'/>
CShape* Shape888 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet889 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet889->setVertexCount(new int[1]{2});
CCoordinate* Coordinate890 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate890->setPoint(new float[6]{0.082,1.4488,-0.0353,0.0271,1.4943,0.0394});
LineSet889->setCoord(*Coordinate890);

CColorRGBA* ColorRGBA891 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA891->setUSE("HAnimSiteLineColorRGBA");
LineSet889->setColor(*ColorRGBA891);

Shape888->setGeometry(LineSet889);

HAnimSegment880->addChildren(*Shape888);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_acromion'/>
CShape* Shape892 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet893 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet893->setVertexCount(new int[1]{2});
CCoordinate* Coordinate894 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate894->setPoint(new float[6]{0.082,1.4488,-0.0353,0.2032,1.476,-0.049});
LineSet893->setCoord(*Coordinate894);

CColorRGBA* ColorRGBA895 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA895->setUSE("HAnimSiteLineColorRGBA");
LineSet893->setColor(*ColorRGBA895);

Shape892->setGeometry(LineSet893);

HAnimSegment880->addChildren(*Shape892);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_ant'/>
CShape* Shape896 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet897 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet897->setVertexCount(new int[1]{2});
CCoordinate* Coordinate898 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate898->setPoint(new float[6]{0.082,1.4488,-0.0353,0.1777,1.4065,-0.0075});
LineSet897->setCoord(*Coordinate898);

CColorRGBA* ColorRGBA899 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA899->setUSE("HAnimSiteLineColorRGBA");
LineSet897->setColor(*ColorRGBA899);

Shape896->setGeometry(LineSet897);

HAnimSegment880->addChildren(*Shape896);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_post'/>
CShape* Shape900 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet901 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet901->setVertexCount(new int[1]{2});
CCoordinate* Coordinate902 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate902->setPoint(new float[6]{0.082,1.4488,-0.0353,0.1706,1.4072,-0.0875});
LineSet901->setCoord(*Coordinate902);

CColorRGBA* ColorRGBA903 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA903->setUSE("HAnimSiteLineColorRGBA");
LineSet901->setColor(*ColorRGBA903);

Shape900->setGeometry(LineSet901);

HAnimSegment880->addChildren(*Shape900);

CHAnimSite* HAnimSite904 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite904->setName("l_clavicale_pt");
HAnimSite904->setDEF("hanim_l_clavicale_pt");
HAnimSite904->setTranslation(new float[3]{0.0271,1.4943,0.0394});
//HAnimSite visualization shape
CTouchSensor* TouchSensor905 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor905->setDescription("HAnimSite l_clavicale");
HAnimSite904->addChildren(*TouchSensor905);

CShape* Shape906 = (CShape *)(m_pScene.createNode("Shape"));
Shape906->setUSE("HAnimSiteShape");
HAnimSite904->addChildren(*Shape906);

HAnimSegment880->addChildren(*HAnimSite904);

CHAnimSite* HAnimSite907 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite907->setName("l_acromion_pt");
HAnimSite907->setDEF("hanim_l_acromion_pt");
HAnimSite907->setTranslation(new float[3]{0.2032,1.476,-0.049});
//HAnimSite visualization shape
CTouchSensor* TouchSensor908 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor908->setDescription("HAnimSite l_acromion");
HAnimSite907->addChildren(*TouchSensor908);

CShape* Shape909 = (CShape *)(m_pScene.createNode("Shape"));
Shape909->setUSE("HAnimSiteShape");
HAnimSite907->addChildren(*Shape909);

HAnimSegment880->addChildren(*HAnimSite907);

CHAnimSite* HAnimSite910 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite910->setName("l_axilla_ant_pt");
HAnimSite910->setDEF("hanim_l_axilla_ant_pt");
HAnimSite910->setTranslation(new float[3]{0.1777,1.4065,-0.0075});
//HAnimSite visualization shape
CTouchSensor* TouchSensor911 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor911->setDescription("HAnimSite l_axilla_ant");
HAnimSite910->addChildren(*TouchSensor911);

CShape* Shape912 = (CShape *)(m_pScene.createNode("Shape"));
Shape912->setUSE("HAnimSiteShape");
HAnimSite910->addChildren(*Shape912);

HAnimSegment880->addChildren(*HAnimSite910);

CHAnimSite* HAnimSite913 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite913->setName("l_axilla_post_pt");
HAnimSite913->setDEF("hanim_l_axilla_post_pt");
HAnimSite913->setTranslation(new float[3]{0.1706,1.4072,-0.0875});
//HAnimSite visualization shape
CTouchSensor* TouchSensor914 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor914->setDescription("HAnimSite l_axilla_post");
HAnimSite913->addChildren(*TouchSensor914);

CShape* Shape915 = (CShape *)(m_pScene.createNode("Shape"));
Shape915->setUSE("HAnimSiteShape");
HAnimSite913->addChildren(*Shape915);

HAnimSegment880->addChildren(*HAnimSite913);

HAnimJoint879->addChildren(*HAnimSegment880);

CHAnimJoint* HAnimJoint916 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint916->setName("l_acromioclavicular");
HAnimJoint916->setDEF("hanim_l_acromioclavicular");
HAnimJoint916->setCenter(new float[3]{0.0962,1.4269,-0.0424});
HAnimJoint916->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint916->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment917 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment917->setName("l_scapula");
HAnimSegment917->setDEF("hanim_l_scapula");
//<HAnimJoint name='l_acromioclavicular'/> visualization sphere within <HAnimSegment name='l_scapula'/>
CTouchSensor* TouchSensor918 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor918->setDescription("HAnimJoint l_acromioclavicular, HAnimSegment l_scapula");
HAnimSegment917->addChildren(*TouchSensor918);

CTransform* Transform919 = (CTransform *)(m_pScene.createNode("Transform"));
Transform919->setTranslation(new float[3]{0.0962,1.4269,-0.0424});
CShape* Shape920 = (CShape *)(m_pScene.createNode("Shape"));
Shape920->setUSE("HAnimJointShape");
Transform919->addChildren(*Shape920);

HAnimSegment917->addChildren(*Transform919);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_acromioclavicular'/> to <HAnimJoint name='l_shoulder'/>
CShape* Shape921 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet922 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet922->setVertexCount(new int[1]{2});
CCoordinate* Coordinate923 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate923->setPoint(new float[6]{0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387});
LineSet922->setCoord(*Coordinate923);

CColorRGBA* ColorRGBA924 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA924->setUSE("HAnimSegmentLineColorRGBA");
LineSet922->setColor(*ColorRGBA924);

Shape921->setGeometry(LineSet922);

HAnimSegment917->addChildren(*Shape921);

HAnimJoint916->addChildren(*HAnimSegment917);

CHAnimJoint* HAnimJoint925 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint925->setName("l_shoulder");
HAnimJoint925->setDEF("hanim_l_shoulder");
HAnimJoint925->setCenter(new float[3]{0.2029,1.4376,-0.0387});
HAnimJoint925->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint925->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment926 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment926->setName("l_upperarm");
HAnimSegment926->setDEF("hanim_l_upperarm");
//<HAnimJoint name='l_shoulder'/> visualization sphere within <HAnimSegment name='l_upperarm'/>
CTouchSensor* TouchSensor927 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor927->setDescription("HAnimJoint l_shoulder, HAnimSegment l_upperarm");
HAnimSegment926->addChildren(*TouchSensor927);

CTransform* Transform928 = (CTransform *)(m_pScene.createNode("Transform"));
Transform928->setTranslation(new float[3]{0.2029,1.4376,-0.0387});
CShape* Shape929 = (CShape *)(m_pScene.createNode("Shape"));
Shape929->setUSE("HAnimJointShape");
Transform928->addChildren(*Shape929);

HAnimSegment926->addChildren(*Transform928);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_shoulder'/> to <HAnimJoint name='l_elbow'/>
CShape* Shape930 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet931 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet931->setVertexCount(new int[1]{2});
CCoordinate* Coordinate932 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate932->setPoint(new float[6]{0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682});
LineSet931->setCoord(*Coordinate932);

CColorRGBA* ColorRGBA933 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA933->setUSE("HAnimSegmentLineColorRGBA");
LineSet931->setColor(*ColorRGBA933);

Shape930->setGeometry(LineSet931);

HAnimSegment926->addChildren(*Shape930);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_shoulder'/> to <HAnimSite name='l_humeral_lateral_epicn'/>
CShape* Shape934 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet935 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet935->setVertexCount(new int[1]{2});
CCoordinate* Coordinate936 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate936->setPoint(new float[6]{0.2029,1.4376,-0.0387,0.228,1.1482,-0.11});
LineSet935->setCoord(*Coordinate936);

CColorRGBA* ColorRGBA937 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA937->setUSE("HAnimSiteLineColorRGBA");
LineSet935->setColor(*ColorRGBA937);

Shape934->setGeometry(LineSet935);

HAnimSegment926->addChildren(*Shape934);

CHAnimSite* HAnimSite938 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite938->setName("l_humeral_lateral_epicn_pt");
HAnimSite938->setDEF("hanim_l_humeral_lateral_epicn_pt");
HAnimSite938->setTranslation(new float[3]{0.228,1.1482,-0.11});
//HAnimSite visualization shape
CTouchSensor* TouchSensor939 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor939->setDescription("HAnimSite l_humeral_lateral_epicn");
HAnimSite938->addChildren(*TouchSensor939);

CShape* Shape940 = (CShape *)(m_pScene.createNode("Shape"));
Shape940->setUSE("HAnimSiteShape");
HAnimSite938->addChildren(*Shape940);

HAnimSegment926->addChildren(*HAnimSite938);

HAnimJoint925->addChildren(*HAnimSegment926);

CHAnimJoint* HAnimJoint941 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint941->setName("l_elbow");
HAnimJoint941->setDEF("hanim_l_elbow");
HAnimJoint941->setCenter(new float[3]{0.2014,1.1357,-0.0682});
HAnimJoint941->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint941->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment942 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment942->setName("l_forearm");
HAnimSegment942->setDEF("hanim_l_forearm");
//<HAnimJoint name='l_elbow'/> visualization sphere within <HAnimSegment name='l_forearm'/>
CTouchSensor* TouchSensor943 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor943->setDescription("HAnimJoint l_elbow, HAnimSegment l_forearm");
HAnimSegment942->addChildren(*TouchSensor943);

CTransform* Transform944 = (CTransform *)(m_pScene.createNode("Transform"));
Transform944->setTranslation(new float[3]{0.2014,1.1357,-0.0682});
CShape* Shape945 = (CShape *)(m_pScene.createNode("Shape"));
Shape945->setUSE("HAnimJointShape");
Transform944->addChildren(*Shape945);

HAnimSegment942->addChildren(*Transform944);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_elbow'/> to <HAnimJoint name='l_wrist'/>
CShape* Shape946 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet947 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet947->setVertexCount(new int[1]{2});
CCoordinate* Coordinate948 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate948->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583});
LineSet947->setCoord(*Coordinate948);

CColorRGBA* ColorRGBA949 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA949->setUSE("HAnimSegmentLineColorRGBA");
LineSet947->setColor(*ColorRGBA949);

Shape946->setGeometry(LineSet947);

HAnimSegment942->addChildren(*Shape946);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radial_styloid'/>
CShape* Shape950 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet951 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet951->setVertexCount(new int[1]{2});
CCoordinate* Coordinate952 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate952->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.1901,0.8645,-0.0415});
LineSet951->setCoord(*Coordinate952);

CColorRGBA* ColorRGBA953 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA953->setUSE("HAnimSiteLineColorRGBA");
LineSet951->setColor(*ColorRGBA953);

Shape950->setGeometry(LineSet951);

HAnimSegment942->addChildren(*Shape950);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_olecranon'/>
CShape* Shape954 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet955 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet955->setVertexCount(new int[1]{2});
CCoordinate* Coordinate956 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate956->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.1962,1.1375,-0.1123});
LineSet955->setCoord(*Coordinate956);

CColorRGBA* ColorRGBA957 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA957->setUSE("HAnimSiteLineColorRGBA");
LineSet955->setColor(*ColorRGBA957);

Shape954->setGeometry(LineSet955);

HAnimSegment942->addChildren(*Shape954);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_humeral_medial_epicn'/>
CShape* Shape958 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet959 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet959->setVertexCount(new int[1]{2});
CCoordinate* Coordinate960 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate960->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.1735,1.1272,-0.1113});
LineSet959->setCoord(*Coordinate960);

CColorRGBA* ColorRGBA961 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA961->setUSE("HAnimSiteLineColorRGBA");
LineSet959->setColor(*ColorRGBA961);

Shape958->setGeometry(LineSet959);

HAnimSegment942->addChildren(*Shape958);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radiale'/>
CShape* Shape962 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet963 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet963->setVertexCount(new int[1]{2});
CCoordinate* Coordinate964 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate964->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.2182,1.1212,-0.1167});
LineSet963->setCoord(*Coordinate964);

CColorRGBA* ColorRGBA965 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA965->setUSE("HAnimSiteLineColorRGBA");
LineSet963->setColor(*ColorRGBA965);

Shape962->setGeometry(LineSet963);

HAnimSegment942->addChildren(*Shape962);

CHAnimSite* HAnimSite966 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite966->setName("l_radial_styloid_pt");
HAnimSite966->setDEF("hanim_l_radial_styloid_pt");
HAnimSite966->setTranslation(new float[3]{0.1901,0.8645,-0.0415});
//HAnimSite visualization shape
CTouchSensor* TouchSensor967 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor967->setDescription("HAnimSite l_radial_styloid");
HAnimSite966->addChildren(*TouchSensor967);

CShape* Shape968 = (CShape *)(m_pScene.createNode("Shape"));
Shape968->setUSE("HAnimSiteShape");
HAnimSite966->addChildren(*Shape968);

HAnimSegment942->addChildren(*HAnimSite966);

CHAnimSite* HAnimSite969 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite969->setName("l_olecranon_pt");
HAnimSite969->setDEF("hanim_l_olecranon_pt");
HAnimSite969->setTranslation(new float[3]{0.1962,1.1375,-0.1123});
//HAnimSite visualization shape
CTouchSensor* TouchSensor970 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor970->setDescription("HAnimSite l_olecranon");
HAnimSite969->addChildren(*TouchSensor970);

CShape* Shape971 = (CShape *)(m_pScene.createNode("Shape"));
Shape971->setUSE("HAnimSiteShape");
HAnimSite969->addChildren(*Shape971);

HAnimSegment942->addChildren(*HAnimSite969);

CHAnimSite* HAnimSite972 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite972->setName("l_humeral_medial_epicn_pt");
HAnimSite972->setDEF("hanim_l_humeral_medial_epicn_pt");
HAnimSite972->setTranslation(new float[3]{0.1735,1.1272,-0.1113});
//HAnimSite visualization shape
CTouchSensor* TouchSensor973 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor973->setDescription("HAnimSite l_humeral_medial_epicn");
HAnimSite972->addChildren(*TouchSensor973);

CShape* Shape974 = (CShape *)(m_pScene.createNode("Shape"));
Shape974->setUSE("HAnimSiteShape");
HAnimSite972->addChildren(*Shape974);

HAnimSegment942->addChildren(*HAnimSite972);

CHAnimSite* HAnimSite975 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite975->setName("l_radiale_pt");
HAnimSite975->setDEF("hanim_l_radiale_pt");
HAnimSite975->setTranslation(new float[3]{0.2182,1.1212,-0.1167});
//HAnimSite visualization shape
CTouchSensor* TouchSensor976 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor976->setDescription("HAnimSite l_radiale");
HAnimSite975->addChildren(*TouchSensor976);

CShape* Shape977 = (CShape *)(m_pScene.createNode("Shape"));
Shape977->setUSE("HAnimSiteShape");
HAnimSite975->addChildren(*Shape977);

HAnimSegment942->addChildren(*HAnimSite975);

HAnimJoint941->addChildren(*HAnimSegment942);

CHAnimJoint* HAnimJoint978 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint978->setName("l_wrist");
HAnimJoint978->setDEF("hanim_l_wrist");
HAnimJoint978->setCenter(new float[3]{0.1984,0.8663,-0.0583});
HAnimJoint978->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint978->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment979 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment979->setName("l_hand");
HAnimSegment979->setDEF("hanim_l_hand");
//<HAnimJoint name='l_wrist'/> visualization sphere within <HAnimSegment name='l_hand'/>
CTouchSensor* TouchSensor980 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor980->setDescription("HAnimJoint l_wrist, HAnimSegment l_hand");
HAnimSegment979->addChildren(*TouchSensor980);

CTransform* Transform981 = (CTransform *)(m_pScene.createNode("Transform"));
Transform981->setTranslation(new float[3]{0.1984,0.8663,-0.0583});
CShape* Shape982 = (CShape *)(m_pScene.createNode("Shape"));
Shape982->setUSE("HAnimJointShape");
Transform981->addChildren(*Shape982);

HAnimSegment979->addChildren(*Transform981);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_thumb1'/>
CShape* Shape983 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet984 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet984->setVertexCount(new int[1]{2});
CCoordinate* Coordinate985 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate985->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534});
LineSet984->setCoord(*Coordinate985);

CColorRGBA* ColorRGBA986 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA986->setUSE("HAnimSegmentLineColorRGBA");
LineSet984->setColor(*ColorRGBA986);

Shape983->setGeometry(LineSet984);

HAnimSegment979->addChildren(*Shape983);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_index0'/>
CShape* Shape987 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet988 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet988->setVertexCount(new int[1]{2});
CCoordinate* Coordinate989 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate989->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028});
LineSet988->setCoord(*Coordinate989);

CColorRGBA* ColorRGBA990 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA990->setUSE("HAnimSegmentLineColorRGBA");
LineSet988->setColor(*ColorRGBA990);

Shape987->setGeometry(LineSet988);

HAnimSegment979->addChildren(*Shape987);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_middle0'/>
CShape* Shape991 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet992 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet992->setVertexCount(new int[1]{2});
CCoordinate* Coordinate993 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate993->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053});
LineSet992->setCoord(*Coordinate993);

CColorRGBA* ColorRGBA994 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA994->setUSE("HAnimSegmentLineColorRGBA");
LineSet992->setColor(*ColorRGBA994);

Shape991->setGeometry(LineSet992);

HAnimSegment979->addChildren(*Shape991);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_ring0'/>
CShape* Shape995 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet996 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet996->setVertexCount(new int[1]{2});
CCoordinate* Coordinate997 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate997->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794});
LineSet996->setCoord(*Coordinate997);

CColorRGBA* ColorRGBA998 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA998->setUSE("HAnimSegmentLineColorRGBA");
LineSet996->setColor(*ColorRGBA998);

Shape995->setGeometry(LineSet996);

HAnimSegment979->addChildren(*Shape995);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_pinky0'/>
CShape* Shape999 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1000 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1000->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1001 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1001->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036});
LineSet1000->setCoord(*Coordinate1001);

CColorRGBA* ColorRGBA1002 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1002->setUSE("HAnimSegmentLineColorRGBA");
LineSet1000->setColor(*ColorRGBA1002);

Shape999->setGeometry(LineSet1000);

HAnimSegment979->addChildren(*Shape999);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_metacarpal_pha2'/>
CShape* Shape1003 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1004 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1004->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1005 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1005->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.2009,0.8139,-0.0237});
LineSet1004->setCoord(*Coordinate1005);

CColorRGBA* ColorRGBA1006 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1006->setUSE("HAnimSiteLineColorRGBA");
LineSet1004->setColor(*ColorRGBA1006);

Shape1003->setGeometry(LineSet1004);

HAnimSegment979->addChildren(*Shape1003);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_ulnar_styloid'/>
CShape* Shape1007 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1008 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1008->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1009 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1009->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.2142,0.8529,-0.0648});
LineSet1008->setCoord(*Coordinate1009);

CColorRGBA* ColorRGBA1010 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1010->setUSE("HAnimSiteLineColorRGBA");
LineSet1008->setColor(*ColorRGBA1010);

Shape1007->setGeometry(LineSet1008);

HAnimSegment979->addChildren(*Shape1007);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_metacarpal_pha5'/>
CShape* Shape1011 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1012 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1012->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1013 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1013->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1929,0.786,-0.1122});
LineSet1012->setCoord(*Coordinate1013);

CColorRGBA* ColorRGBA1014 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1014->setUSE("HAnimSiteLineColorRGBA");
LineSet1012->setColor(*ColorRGBA1014);

Shape1011->setGeometry(LineSet1012);

HAnimSegment979->addChildren(*Shape1011);

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_hand_front_view'/>
CShape* Shape1015 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1016 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1016->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1017 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1017->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.3,0.75,0.45});
LineSet1016->setCoord(*Coordinate1017);

CColorRGBA* ColorRGBA1018 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1018->setUSE("HAnimSiteViewpointLineColorRGBA");
LineSet1016->setColor(*ColorRGBA1018);

Shape1015->setGeometry(LineSet1016);

HAnimSegment979->addChildren(*Shape1015);

CHAnimSite* HAnimSite1019 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1019->setName("l_metacarpal_pha2_pt");
HAnimSite1019->setDEF("hanim_l_metacarpal_pha2_pt");
HAnimSite1019->setTranslation(new float[3]{0.2009,0.8139,-0.0237});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1020 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1020->setDescription("HAnimSite l_metacarpal_pha2");
HAnimSite1019->addChildren(*TouchSensor1020);

CShape* Shape1021 = (CShape *)(m_pScene.createNode("Shape"));
Shape1021->setUSE("HAnimSiteShape");
HAnimSite1019->addChildren(*Shape1021);

HAnimSegment979->addChildren(*HAnimSite1019);

CHAnimSite* HAnimSite1022 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1022->setName("l_ulnar_styloid_pt");
HAnimSite1022->setDEF("hanim_l_ulnar_styloid_pt");
HAnimSite1022->setTranslation(new float[3]{0.2142,0.8529,-0.0648});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1023 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1023->setDescription("HAnimSite l_ulnar_styloid");
HAnimSite1022->addChildren(*TouchSensor1023);

CShape* Shape1024 = (CShape *)(m_pScene.createNode("Shape"));
Shape1024->setUSE("HAnimSiteShape");
HAnimSite1022->addChildren(*Shape1024);

HAnimSegment979->addChildren(*HAnimSite1022);

CHAnimSite* HAnimSite1025 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1025->setName("l_metacarpal_pha5_pt");
HAnimSite1025->setDEF("hanim_l_metacarpal_pha5_pt");
HAnimSite1025->setTranslation(new float[3]{0.1929,0.786,-0.1122});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1026 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1026->setDescription("HAnimSite l_metacarpal_pha5");
HAnimSite1025->addChildren(*TouchSensor1026);

CShape* Shape1027 = (CShape *)(m_pScene.createNode("Shape"));
Shape1027->setUSE("HAnimSiteShape");
HAnimSite1025->addChildren(*Shape1027);

HAnimSegment979->addChildren(*HAnimSite1025);

CHAnimSite* HAnimSite1028 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1028->setName("l_hand_front_view");
HAnimSite1028->setDEF("hanim_l_hand_front_view");
HAnimSite1028->setTranslation(new float[3]{0.3,0.75,0.45});
CViewpoint* Viewpoint1029 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1029->setDEF("hanim_l_hand_front_viewpoint");
Viewpoint1029->setCenterOfRotation(new float[3]{0,0.7,0});
Viewpoint1029->setDescription("left hand front");
Viewpoint1029->setPosition(new float[3]{0,0,0});
HAnimSite1028->addChildren(*Viewpoint1029);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1030 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1030->setDescription("HAnimSite Viewpoint hanim_l_hand_front_view");
Anchor1030->setUrl(new CString[1]{"#hanim_l_hand_front_viewpoint"}, 1);
CLOD* LOD1031 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1031->setForceTransitions(True);
LOD1031->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo1032 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1032->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1031->addChildren(*WorldInfo1032);

CShape* Shape1033 = (CShape *)(m_pScene.createNode("Shape"));
Shape1033->setUSE("HAnimSiteViewpointShape");
LOD1031->addChildren(*Shape1033);

Anchor1030->addChildren(*LOD1031);

HAnimSite1028->addChildren(*Anchor1030);

HAnimSegment979->addChildren(*HAnimSite1028);

HAnimJoint978->addChildren(*HAnimSegment979);

CHAnimJoint* HAnimJoint1034 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1034->setName("l_thumb1");
HAnimJoint1034->setDEF("hanim_l_thumb1");
HAnimJoint1034->setCenter(new float[3]{0.1924,0.8472,-0.0534});
HAnimJoint1034->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1034->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1035 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1035->setName("l_thumb_metacarpal");
HAnimSegment1035->setDEF("hanim_l_thumb_metacarpal");
//<HAnimJoint name='l_thumb1'/> visualization sphere within <HAnimSegment name='l_thumb_metacarpal'/>
CTouchSensor* TouchSensor1036 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1036->setDescription("HAnimJoint l_thumb1, HAnimSegment l_thumb_metacarpal");
HAnimSegment1035->addChildren(*TouchSensor1036);

CTransform* Transform1037 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1037->setTranslation(new float[3]{0.1924,0.8472,-0.0534});
CShape* Shape1038 = (CShape *)(m_pScene.createNode("Shape"));
Shape1038->setUSE("HAnimJointShape");
Transform1037->addChildren(*Shape1038);

HAnimSegment1035->addChildren(*Transform1037);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_thumb1'/> to <HAnimJoint name='l_thumb2'/>
CShape* Shape1039 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1040 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1040->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1041 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1041->setPoint(new float[6]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246});
LineSet1040->setCoord(*Coordinate1041);

CColorRGBA* ColorRGBA1042 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1042->setUSE("HAnimSegmentLineColorRGBA");
LineSet1040->setColor(*ColorRGBA1042);

Shape1039->setGeometry(LineSet1040);

HAnimSegment1035->addChildren(*Shape1039);

HAnimJoint1034->addChildren(*HAnimSegment1035);

CHAnimJoint* HAnimJoint1043 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1043->setName("l_thumb2");
HAnimJoint1043->setDEF("hanim_l_thumb2");
HAnimJoint1043->setCenter(new float[3]{0.1951,0.8226,0.0246});
HAnimJoint1043->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1043->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1044 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1044->setName("l_thumb_proximal");
HAnimSegment1044->setDEF("hanim_l_thumb_proximal");
//<HAnimJoint name='l_thumb2'/> visualization sphere within <HAnimSegment name='l_thumb_proximal'/>
CTouchSensor* TouchSensor1045 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1045->setDescription("HAnimJoint l_thumb2, HAnimSegment l_thumb_proximal");
HAnimSegment1044->addChildren(*TouchSensor1045);

CTransform* Transform1046 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1046->setTranslation(new float[3]{0.1951,0.8226,0.0246});
CShape* Shape1047 = (CShape *)(m_pScene.createNode("Shape"));
Shape1047->setUSE("HAnimJointShape");
Transform1046->addChildren(*Shape1047);

HAnimSegment1044->addChildren(*Transform1046);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_thumb2'/> to <HAnimJoint name='l_thumb3'/>
CShape* Shape1048 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1049 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1049->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1050 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1050->setPoint(new float[6]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464});
LineSet1049->setCoord(*Coordinate1050);

CColorRGBA* ColorRGBA1051 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1051->setUSE("HAnimSegmentLineColorRGBA");
LineSet1049->setColor(*ColorRGBA1051);

Shape1048->setGeometry(LineSet1049);

HAnimSegment1044->addChildren(*Shape1048);

HAnimJoint1043->addChildren(*HAnimSegment1044);

CHAnimJoint* HAnimJoint1052 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1052->setName("l_thumb3");
HAnimJoint1052->setDEF("hanim_l_thumb3");
HAnimJoint1052->setCenter(new float[3]{0.1955,0.8159,0.0464});
HAnimJoint1052->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1052->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1053 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1053->setName("l_thumb_distal");
HAnimSegment1053->setDEF("hanim_l_thumb_distal");
//<HAnimJoint name='l_thumb3'/> visualization sphere within <HAnimSegment name='l_thumb_distal'/>
CTouchSensor* TouchSensor1054 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1054->setDescription("HAnimJoint l_thumb3, HAnimSegment l_thumb_distal");
HAnimSegment1053->addChildren(*TouchSensor1054);

CTransform* Transform1055 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1055->setTranslation(new float[3]{0.1955,0.8159,0.0464});
CShape* Shape1056 = (CShape *)(m_pScene.createNode("Shape"));
Shape1056->setUSE("HAnimJointShape");
Transform1055->addChildren(*Shape1056);

HAnimSegment1053->addChildren(*Transform1055);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_thumb3'/> to <HAnimSite name='l_thumb_distal_tip'/>
CShape* Shape1057 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1058 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1058->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1059 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1059->setPoint(new float[6]{0.1955,0.8159,0.0464,0.1982,0.8061,0.0759});
LineSet1058->setCoord(*Coordinate1059);

CColorRGBA* ColorRGBA1060 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1060->setUSE("HAnimSiteLineColorRGBA");
LineSet1058->setColor(*ColorRGBA1060);

Shape1057->setGeometry(LineSet1058);

HAnimSegment1053->addChildren(*Shape1057);

CHAnimSite* HAnimSite1061 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1061->setName("l_thumb_distal_tip");
HAnimSite1061->setDEF("hanim_l_thumb_distal_tip");
HAnimSite1061->setTranslation(new float[3]{0.1982,0.8061,0.0759});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1062 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1062->setDescription("HAnimSite l_thumb_distal_tip");
HAnimSite1061->addChildren(*TouchSensor1062);

CShape* Shape1063 = (CShape *)(m_pScene.createNode("Shape"));
Shape1063->setUSE("HAnimSiteShape");
HAnimSite1061->addChildren(*Shape1063);

HAnimSegment1053->addChildren(*HAnimSite1061);

HAnimJoint1052->addChildren(*HAnimSegment1053);

HAnimJoint1043->addChildren(*HAnimJoint1052);

HAnimJoint1034->addChildren(*HAnimJoint1043);

HAnimJoint978->addChildren(*HAnimJoint1034);

CHAnimJoint* HAnimJoint1064 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1064->setName("l_index0");
HAnimJoint1064->setDEF("hanim_l_index0");
HAnimJoint1064->setCenter(new float[3]{0.1983,0.8024,-0.028});
HAnimJoint1064->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1064->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1065 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1065->setName("l_index_metacarpal");
HAnimSegment1065->setDEF("hanim_l_index_metacarpal");
//<HAnimJoint name='l_index0'/> visualization sphere within <HAnimSegment name='l_index_metacarpal'/>
CTouchSensor* TouchSensor1066 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1066->setDescription("HAnimJoint l_index0, HAnimSegment l_index_metacarpal");
HAnimSegment1065->addChildren(*TouchSensor1066);

CTransform* Transform1067 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1067->setTranslation(new float[3]{0.1983,0.8024,-0.028});
CShape* Shape1068 = (CShape *)(m_pScene.createNode("Shape"));
Shape1068->setUSE("HAnimJointShape");
Transform1067->addChildren(*Shape1068);

HAnimSegment1065->addChildren(*Transform1067);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_index0'/> to <HAnimJoint name='l_index1'/>
CShape* Shape1069 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1070 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1070->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1071 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1071->setPoint(new float[6]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028});
LineSet1070->setCoord(*Coordinate1071);

CColorRGBA* ColorRGBA1072 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1072->setUSE("HAnimSegmentLineColorRGBA");
LineSet1070->setColor(*ColorRGBA1072);

Shape1069->setGeometry(LineSet1070);

HAnimSegment1065->addChildren(*Shape1069);

HAnimJoint1064->addChildren(*HAnimSegment1065);

CHAnimJoint* HAnimJoint1073 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1073->setName("l_index1");
HAnimJoint1073->setDEF("hanim_l_index1");
HAnimJoint1073->setCenter(new float[3]{0.1983,0.7815,-0.028});
HAnimJoint1073->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1073->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1074 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1074->setName("l_index_proximal");
HAnimSegment1074->setDEF("hanim_l_index_proximal");
//<HAnimJoint name='l_index1'/> visualization sphere within <HAnimSegment name='l_index_proximal'/>
CTouchSensor* TouchSensor1075 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1075->setDescription("HAnimJoint l_index1, HAnimSegment l_index_proximal");
HAnimSegment1074->addChildren(*TouchSensor1075);

CTransform* Transform1076 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1076->setTranslation(new float[3]{0.1983,0.7815,-0.028});
CShape* Shape1077 = (CShape *)(m_pScene.createNode("Shape"));
Shape1077->setUSE("HAnimJointShape");
Transform1076->addChildren(*Shape1077);

HAnimSegment1074->addChildren(*Transform1076);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_index1'/> to <HAnimJoint name='l_index2'/>
CShape* Shape1078 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1079 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1079->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1080 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1080->setPoint(new float[6]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248});
LineSet1079->setCoord(*Coordinate1080);

CColorRGBA* ColorRGBA1081 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1081->setUSE("HAnimSegmentLineColorRGBA");
LineSet1079->setColor(*ColorRGBA1081);

Shape1078->setGeometry(LineSet1079);

HAnimSegment1074->addChildren(*Shape1078);

HAnimJoint1073->addChildren(*HAnimSegment1074);

CHAnimJoint* HAnimJoint1082 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1082->setName("l_index2");
HAnimJoint1082->setDEF("hanim_l_index2");
HAnimJoint1082->setCenter(new float[3]{0.2017,0.7363,-0.0248});
HAnimJoint1082->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1082->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1083 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1083->setName("l_index_middle");
HAnimSegment1083->setDEF("hanim_l_index_middle");
//<HAnimJoint name='l_index2'/> visualization sphere within <HAnimSegment name='l_index_middle'/>
CTouchSensor* TouchSensor1084 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1084->setDescription("HAnimJoint l_index2, HAnimSegment l_index_middle");
HAnimSegment1083->addChildren(*TouchSensor1084);

CTransform* Transform1085 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1085->setTranslation(new float[3]{0.2017,0.7363,-0.0248});
CShape* Shape1086 = (CShape *)(m_pScene.createNode("Shape"));
Shape1086->setUSE("HAnimJointShape");
Transform1085->addChildren(*Shape1086);

HAnimSegment1083->addChildren(*Transform1085);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_index2'/> to <HAnimJoint name='l_index3'/>
CShape* Shape1087 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1088 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1088->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1089 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1089->setPoint(new float[6]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236});
LineSet1088->setCoord(*Coordinate1089);

CColorRGBA* ColorRGBA1090 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1090->setUSE("HAnimSegmentLineColorRGBA");
LineSet1088->setColor(*ColorRGBA1090);

Shape1087->setGeometry(LineSet1088);

HAnimSegment1083->addChildren(*Shape1087);

HAnimJoint1082->addChildren(*HAnimSegment1083);

CHAnimJoint* HAnimJoint1091 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1091->setName("l_index3");
HAnimJoint1091->setDEF("hanim_l_index3");
HAnimJoint1091->setCenter(new float[3]{0.2028,0.7139,-0.0236});
HAnimJoint1091->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1091->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1092 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1092->setName("l_index_distal");
HAnimSegment1092->setDEF("hanim_l_index_distal");
//<HAnimJoint name='l_index3'/> visualization sphere within <HAnimSegment name='l_index_distal'/>
CTouchSensor* TouchSensor1093 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1093->setDescription("HAnimJoint l_index3, HAnimSegment l_index_distal");
HAnimSegment1092->addChildren(*TouchSensor1093);

CTransform* Transform1094 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1094->setTranslation(new float[3]{0.2028,0.7139,-0.0236});
CShape* Shape1095 = (CShape *)(m_pScene.createNode("Shape"));
Shape1095->setUSE("HAnimJointShape");
Transform1094->addChildren(*Shape1095);

HAnimSegment1092->addChildren(*Transform1094);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_index_distal_tip'/>
CShape* Shape1096 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1097 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1097->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1098 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1098->setPoint(new float[6]{0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245});
LineSet1097->setCoord(*Coordinate1098);

CColorRGBA* ColorRGBA1099 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1099->setUSE("HAnimSiteLineColorRGBA");
LineSet1097->setColor(*ColorRGBA1099);

Shape1096->setGeometry(LineSet1097);

HAnimSegment1092->addChildren(*Shape1096);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_dactylion'/>
CShape* Shape1100 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1101 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1101->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1102 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1102->setPoint(new float[6]{0.2028,0.7139,-0.0236,0.2056,0.6743,-0.0482});
LineSet1101->setCoord(*Coordinate1102);

CColorRGBA* ColorRGBA1103 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1103->setUSE("HAnimSiteLineColorRGBA");
LineSet1101->setColor(*ColorRGBA1103);

Shape1100->setGeometry(LineSet1101);

HAnimSegment1092->addChildren(*Shape1100);

CHAnimSite* HAnimSite1104 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1104->setName("l_index_distal_tip");
HAnimSite1104->setDEF("hanim_l_index_distal_tip");
HAnimSite1104->setTranslation(new float[3]{0.2089,0.6858,-0.0245});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1105 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1105->setDescription("HAnimSite l_index_distal_tip");
HAnimSite1104->addChildren(*TouchSensor1105);

CShape* Shape1106 = (CShape *)(m_pScene.createNode("Shape"));
Shape1106->setUSE("HAnimSiteShape");
HAnimSite1104->addChildren(*Shape1106);

HAnimSegment1092->addChildren(*HAnimSite1104);

CHAnimSite* HAnimSite1107 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1107->setName("l_dactylion_pt");
HAnimSite1107->setDEF("hanim_l_dactylion_pt");
HAnimSite1107->setTranslation(new float[3]{0.2056,0.6743,-0.0482});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1108 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1108->setDescription("HAnimSite l_dactylion");
HAnimSite1107->addChildren(*TouchSensor1108);

CShape* Shape1109 = (CShape *)(m_pScene.createNode("Shape"));
Shape1109->setUSE("HAnimSiteShape");
HAnimSite1107->addChildren(*Shape1109);

HAnimSegment1092->addChildren(*HAnimSite1107);

HAnimJoint1091->addChildren(*HAnimSegment1092);

HAnimJoint1082->addChildren(*HAnimJoint1091);

HAnimJoint1073->addChildren(*HAnimJoint1082);

HAnimJoint1064->addChildren(*HAnimJoint1073);

HAnimJoint978->addChildren(*HAnimJoint1064);

CHAnimJoint* HAnimJoint1110 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1110->setName("l_middle0");
HAnimJoint1110->setDEF("hanim_l_middle0");
HAnimJoint1110->setCenter(new float[3]{0.1987,0.8029,-0.053});
HAnimJoint1110->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1110->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1111 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1111->setName("l_middle_metacarpal");
HAnimSegment1111->setDEF("hanim_l_middle_metacarpal");
//<HAnimJoint name='l_middle0'/> visualization sphere within <HAnimSegment name='l_middle_metacarpal'/>
CTouchSensor* TouchSensor1112 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1112->setDescription("HAnimJoint l_middle0, HAnimSegment l_middle_metacarpal");
HAnimSegment1111->addChildren(*TouchSensor1112);

CTransform* Transform1113 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1113->setTranslation(new float[3]{0.1987,0.8029,-0.053});
CShape* Shape1114 = (CShape *)(m_pScene.createNode("Shape"));
Shape1114->setUSE("HAnimJointShape");
Transform1113->addChildren(*Shape1114);

HAnimSegment1111->addChildren(*Transform1113);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle0'/> to <HAnimJoint name='l_middle1'/>
CShape* Shape1115 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1116 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1116->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1117 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1117->setPoint(new float[6]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053});
LineSet1116->setCoord(*Coordinate1117);

CColorRGBA* ColorRGBA1118 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1118->setUSE("HAnimSegmentLineColorRGBA");
LineSet1116->setColor(*ColorRGBA1118);

Shape1115->setGeometry(LineSet1116);

HAnimSegment1111->addChildren(*Shape1115);

HAnimJoint1110->addChildren(*HAnimSegment1111);

CHAnimJoint* HAnimJoint1119 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1119->setName("l_middle1");
HAnimJoint1119->setDEF("hanim_l_middle1");
HAnimJoint1119->setCenter(new float[3]{0.1987,0.7818,-0.053});
HAnimJoint1119->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1119->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1120 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1120->setName("l_middle_proximal");
HAnimSegment1120->setDEF("hanim_l_middle_proximal");
//<HAnimJoint name='l_middle1'/> visualization sphere within <HAnimSegment name='l_middle_proximal'/>
CTouchSensor* TouchSensor1121 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1121->setDescription("HAnimJoint l_middle1, HAnimSegment l_middle_proximal");
HAnimSegment1120->addChildren(*TouchSensor1121);

CTransform* Transform1122 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1122->setTranslation(new float[3]{0.1987,0.7818,-0.053});
CShape* Shape1123 = (CShape *)(m_pScene.createNode("Shape"));
Shape1123->setUSE("HAnimJointShape");
Transform1122->addChildren(*Shape1123);

HAnimSegment1120->addChildren(*Transform1122);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle1'/> to <HAnimJoint name='l_middle2'/>
CShape* Shape1124 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1125 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1125->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1126 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1126->setPoint(new float[6]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503});
LineSet1125->setCoord(*Coordinate1126);

CColorRGBA* ColorRGBA1127 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1127->setUSE("HAnimSegmentLineColorRGBA");
LineSet1125->setColor(*ColorRGBA1127);

Shape1124->setGeometry(LineSet1125);

HAnimSegment1120->addChildren(*Shape1124);

HAnimJoint1119->addChildren(*HAnimSegment1120);

CHAnimJoint* HAnimJoint1128 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1128->setName("l_middle2");
HAnimJoint1128->setDEF("hanim_l_middle2");
HAnimJoint1128->setCenter(new float[3]{0.2013,0.7273,-0.0503});
HAnimJoint1128->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1128->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1129 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1129->setName("l_middle_middle");
HAnimSegment1129->setDEF("hanim_l_middle_middle");
//<HAnimJoint name='l_middle2'/> visualization sphere within <HAnimSegment name='l_middle_middle'/>
CTouchSensor* TouchSensor1130 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1130->setDescription("HAnimJoint l_middle2, HAnimSegment l_middle_middle");
HAnimSegment1129->addChildren(*TouchSensor1130);

CTransform* Transform1131 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1131->setTranslation(new float[3]{0.2013,0.7273,-0.0503});
CShape* Shape1132 = (CShape *)(m_pScene.createNode("Shape"));
Shape1132->setUSE("HAnimJointShape");
Transform1131->addChildren(*Shape1132);

HAnimSegment1129->addChildren(*Transform1131);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle2'/> to <HAnimJoint name='l_middle3'/>
CShape* Shape1133 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1134 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1134->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1135 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1135->setPoint(new float[6]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494});
LineSet1134->setCoord(*Coordinate1135);

CColorRGBA* ColorRGBA1136 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1136->setUSE("HAnimSegmentLineColorRGBA");
LineSet1134->setColor(*ColorRGBA1136);

Shape1133->setGeometry(LineSet1134);

HAnimSegment1129->addChildren(*Shape1133);

HAnimJoint1128->addChildren(*HAnimSegment1129);

CHAnimJoint* HAnimJoint1137 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1137->setName("l_middle3");
HAnimJoint1137->setDEF("hanim_l_middle3");
HAnimJoint1137->setCenter(new float[3]{0.2026,0.7011,-0.0494});
HAnimJoint1137->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1137->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1138 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1138->setName("l_middle_distal");
HAnimSegment1138->setDEF("hanim_l_middle_distal");
//<HAnimJoint name='l_middle3'/> visualization sphere within <HAnimSegment name='l_middle_distal'/>
CTouchSensor* TouchSensor1139 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1139->setDescription("HAnimJoint l_middle3, HAnimSegment l_middle_distal");
HAnimSegment1138->addChildren(*TouchSensor1139);

CTransform* Transform1140 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1140->setTranslation(new float[3]{0.2026,0.7011,-0.0494});
CShape* Shape1141 = (CShape *)(m_pScene.createNode("Shape"));
Shape1141->setUSE("HAnimJointShape");
Transform1140->addChildren(*Shape1141);

HAnimSegment1138->addChildren(*Transform1140);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_middle3'/> to <HAnimSite name='l_middle_distal_tip'/>
CShape* Shape1142 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1143 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1143->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1144 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1144->setPoint(new float[6]{0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491});
LineSet1143->setCoord(*Coordinate1144);

CColorRGBA* ColorRGBA1145 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1145->setUSE("HAnimSiteLineColorRGBA");
LineSet1143->setColor(*ColorRGBA1145);

Shape1142->setGeometry(LineSet1143);

HAnimSegment1138->addChildren(*Shape1142);

CHAnimSite* HAnimSite1146 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1146->setName("l_middle_distal_tip");
HAnimSite1146->setDEF("hanim_l_middle_distal_tip");
HAnimSite1146->setTranslation(new float[3]{0.208,0.6731,-0.0491});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1147 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1147->setDescription("HAnimSite l_middle_distal_tip");
HAnimSite1146->addChildren(*TouchSensor1147);

CShape* Shape1148 = (CShape *)(m_pScene.createNode("Shape"));
Shape1148->setUSE("HAnimSiteShape");
HAnimSite1146->addChildren(*Shape1148);

HAnimSegment1138->addChildren(*HAnimSite1146);

HAnimJoint1137->addChildren(*HAnimSegment1138);

HAnimJoint1128->addChildren(*HAnimJoint1137);

HAnimJoint1119->addChildren(*HAnimJoint1128);

HAnimJoint1110->addChildren(*HAnimJoint1119);

HAnimJoint978->addChildren(*HAnimJoint1110);

CHAnimJoint* HAnimJoint1149 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1149->setName("l_ring0");
HAnimJoint1149->setDEF("hanim_l_ring0");
HAnimJoint1149->setCenter(new float[3]{0.1956,0.8019,-0.0794});
HAnimJoint1149->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1149->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1150 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1150->setName("l_ring_metacarpal");
HAnimSegment1150->setDEF("hanim_l_ring_metacarpal");
//<HAnimJoint name='l_ring0'/> visualization sphere within <HAnimSegment name='l_ring_metacarpal'/>
CTouchSensor* TouchSensor1151 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1151->setDescription("HAnimJoint l_ring0, HAnimSegment l_ring_metacarpal");
HAnimSegment1150->addChildren(*TouchSensor1151);

CTransform* Transform1152 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1152->setTranslation(new float[3]{0.1956,0.8019,-0.0794});
CShape* Shape1153 = (CShape *)(m_pScene.createNode("Shape"));
Shape1153->setUSE("HAnimJointShape");
Transform1152->addChildren(*Shape1153);

HAnimSegment1150->addChildren(*Transform1152);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring0'/> to <HAnimJoint name='l_ring1'/>
CShape* Shape1154 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1155 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1155->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1156 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1156->setPoint(new float[6]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794});
LineSet1155->setCoord(*Coordinate1156);

CColorRGBA* ColorRGBA1157 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1157->setUSE("HAnimSegmentLineColorRGBA");
LineSet1155->setColor(*ColorRGBA1157);

Shape1154->setGeometry(LineSet1155);

HAnimSegment1150->addChildren(*Shape1154);

HAnimJoint1149->addChildren(*HAnimSegment1150);

CHAnimJoint* HAnimJoint1158 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1158->setName("l_ring1");
HAnimJoint1158->setDEF("hanim_l_ring1");
HAnimJoint1158->setCenter(new float[3]{0.1956,0.7815,-0.0794});
HAnimJoint1158->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1158->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1159 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1159->setName("l_ring_proximal");
HAnimSegment1159->setDEF("hanim_l_ring_proximal");
//<HAnimJoint name='l_ring1'/> visualization sphere within <HAnimSegment name='l_ring_proximal'/>
CTouchSensor* TouchSensor1160 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1160->setDescription("HAnimJoint l_ring1, HAnimSegment l_ring_proximal");
HAnimSegment1159->addChildren(*TouchSensor1160);

CTransform* Transform1161 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1161->setTranslation(new float[3]{0.1956,0.7815,-0.0794});
CShape* Shape1162 = (CShape *)(m_pScene.createNode("Shape"));
Shape1162->setUSE("HAnimJointShape");
Transform1161->addChildren(*Shape1162);

HAnimSegment1159->addChildren(*Transform1161);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring1'/> to <HAnimJoint name='l_ring2'/>
CShape* Shape1163 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1164 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1164->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1165 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1165->setPoint(new float[6]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777});
LineSet1164->setCoord(*Coordinate1165);

CColorRGBA* ColorRGBA1166 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1166->setUSE("HAnimSegmentLineColorRGBA");
LineSet1164->setColor(*ColorRGBA1166);

Shape1163->setGeometry(LineSet1164);

HAnimSegment1159->addChildren(*Shape1163);

HAnimJoint1158->addChildren(*HAnimSegment1159);

CHAnimJoint* HAnimJoint1167 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1167->setName("l_ring2");
HAnimJoint1167->setDEF("hanim_l_ring2");
HAnimJoint1167->setCenter(new float[3]{0.1973,0.7287,-0.0777});
HAnimJoint1167->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1167->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1168 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1168->setName("l_ring_middle");
HAnimSegment1168->setDEF("hanim_l_ring_middle");
//<HAnimJoint name='l_ring2'/> visualization sphere within <HAnimSegment name='l_ring_middle'/>
CTouchSensor* TouchSensor1169 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1169->setDescription("HAnimJoint l_ring2, HAnimSegment l_ring_middle");
HAnimSegment1168->addChildren(*TouchSensor1169);

CTransform* Transform1170 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1170->setTranslation(new float[3]{0.1973,0.7287,-0.0777});
CShape* Shape1171 = (CShape *)(m_pScene.createNode("Shape"));
Shape1171->setUSE("HAnimJointShape");
Transform1170->addChildren(*Shape1171);

HAnimSegment1168->addChildren(*Transform1170);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring2'/> to <HAnimJoint name='l_ring3'/>
CShape* Shape1172 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1173 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1173->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1174 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1174->setPoint(new float[6]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767});
LineSet1173->setCoord(*Coordinate1174);

CColorRGBA* ColorRGBA1175 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1175->setUSE("HAnimSegmentLineColorRGBA");
LineSet1173->setColor(*ColorRGBA1175);

Shape1172->setGeometry(LineSet1173);

HAnimSegment1168->addChildren(*Shape1172);

HAnimJoint1167->addChildren(*HAnimSegment1168);

CHAnimJoint* HAnimJoint1176 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1176->setName("l_ring3");
HAnimJoint1176->setDEF("hanim_l_ring3");
HAnimJoint1176->setCenter(new float[3]{0.1983,0.7045,-0.0767});
HAnimJoint1176->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1176->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1177 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1177->setName("l_ring_distal");
HAnimSegment1177->setDEF("hanim_l_ring_distal");
//<HAnimJoint name='l_ring3'/> visualization sphere within <HAnimSegment name='l_ring_distal'/>
CTouchSensor* TouchSensor1178 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1178->setDescription("HAnimJoint l_ring3, HAnimSegment l_ring_distal");
HAnimSegment1177->addChildren(*TouchSensor1178);

CTransform* Transform1179 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1179->setTranslation(new float[3]{0.1983,0.7045,-0.0767});
CShape* Shape1180 = (CShape *)(m_pScene.createNode("Shape"));
Shape1180->setUSE("HAnimJointShape");
Transform1179->addChildren(*Shape1180);

HAnimSegment1177->addChildren(*Transform1179);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ring3'/> to <HAnimSite name='l_ring_distal_tip'/>
CShape* Shape1181 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1182 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1182->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1183 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1183->setPoint(new float[6]{0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756});
LineSet1182->setCoord(*Coordinate1183);

CColorRGBA* ColorRGBA1184 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1184->setUSE("HAnimSiteLineColorRGBA");
LineSet1182->setColor(*ColorRGBA1184);

Shape1181->setGeometry(LineSet1182);

HAnimSegment1177->addChildren(*Shape1181);

CHAnimSite* HAnimSite1185 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1185->setName("l_ring_distal_tip");
HAnimSite1185->setDEF("hanim_l_ring_distal_tip");
HAnimSite1185->setTranslation(new float[3]{0.2035,0.675,-0.0756});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1186 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1186->setDescription("HAnimSite l_ring_distal_tip");
HAnimSite1185->addChildren(*TouchSensor1186);

CShape* Shape1187 = (CShape *)(m_pScene.createNode("Shape"));
Shape1187->setUSE("HAnimSiteShape");
HAnimSite1185->addChildren(*Shape1187);

HAnimSegment1177->addChildren(*HAnimSite1185);

HAnimJoint1176->addChildren(*HAnimSegment1177);

HAnimJoint1167->addChildren(*HAnimJoint1176);

HAnimJoint1158->addChildren(*HAnimJoint1167);

HAnimJoint1149->addChildren(*HAnimJoint1158);

HAnimJoint978->addChildren(*HAnimJoint1149);

CHAnimJoint* HAnimJoint1188 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1188->setName("l_pinky0");
HAnimJoint1188->setDEF("hanim_l_pinky0");
HAnimJoint1188->setCenter(new float[3]{0.1925,0.8066,-0.1036});
HAnimJoint1188->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1188->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1189 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1189->setName("l_pinky_metacarpal");
HAnimSegment1189->setDEF("hanim_l_pinky_metacarpal");
//<HAnimJoint name='l_pinky0'/> visualization sphere within <HAnimSegment name='l_pinky_metacarpal'/>
CTouchSensor* TouchSensor1190 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1190->setDescription("HAnimJoint l_pinky0, HAnimSegment l_pinky_metacarpal");
HAnimSegment1189->addChildren(*TouchSensor1190);

CTransform* Transform1191 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1191->setTranslation(new float[3]{0.1925,0.8066,-0.1036});
CShape* Shape1192 = (CShape *)(m_pScene.createNode("Shape"));
Shape1192->setUSE("HAnimJointShape");
Transform1191->addChildren(*Shape1192);

HAnimSegment1189->addChildren(*Transform1191);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky0'/> to <HAnimJoint name='l_pinky1'/>
CShape* Shape1193 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1194 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1194->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1195 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1195->setPoint(new float[6]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036});
LineSet1194->setCoord(*Coordinate1195);

CColorRGBA* ColorRGBA1196 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1196->setUSE("HAnimSegmentLineColorRGBA");
LineSet1194->setColor(*ColorRGBA1196);

Shape1193->setGeometry(LineSet1194);

HAnimSegment1189->addChildren(*Shape1193);

HAnimJoint1188->addChildren(*HAnimSegment1189);

CHAnimJoint* HAnimJoint1197 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1197->setName("l_pinky1");
HAnimJoint1197->setDEF("hanim_l_pinky1");
HAnimJoint1197->setCenter(new float[3]{0.1925,0.7866,-0.1036});
HAnimJoint1197->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1197->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1198 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1198->setName("l_pinky_proximal");
HAnimSegment1198->setDEF("hanim_l_pinky_proximal");
//<HAnimJoint name='l_pinky1'/> visualization sphere within <HAnimSegment name='l_pinky_proximal'/>
CTouchSensor* TouchSensor1199 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1199->setDescription("HAnimJoint l_pinky1, HAnimSegment l_pinky_proximal");
HAnimSegment1198->addChildren(*TouchSensor1199);

CTransform* Transform1200 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1200->setTranslation(new float[3]{0.1925,0.7866,-0.1036});
CShape* Shape1201 = (CShape *)(m_pScene.createNode("Shape"));
Shape1201->setUSE("HAnimJointShape");
Transform1200->addChildren(*Shape1201);

HAnimSegment1198->addChildren(*Transform1200);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky1'/> to <HAnimJoint name='l_pinky2'/>
CShape* Shape1202 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1203 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1203->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1204 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1204->setPoint(new float[6]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024});
LineSet1203->setCoord(*Coordinate1204);

CColorRGBA* ColorRGBA1205 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1205->setUSE("HAnimSegmentLineColorRGBA");
LineSet1203->setColor(*ColorRGBA1205);

Shape1202->setGeometry(LineSet1203);

HAnimSegment1198->addChildren(*Shape1202);

HAnimJoint1197->addChildren(*HAnimSegment1198);

CHAnimJoint* HAnimJoint1206 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1206->setName("l_pinky2");
HAnimJoint1206->setDEF("hanim_l_pinky2");
HAnimJoint1206->setCenter(new float[3]{0.1938,0.7452,-0.1024});
HAnimJoint1206->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1206->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1207 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1207->setName("l_pinky_middle");
HAnimSegment1207->setDEF("hanim_l_pinky_middle");
//<HAnimJoint name='l_pinky2'/> visualization sphere within <HAnimSegment name='l_pinky_middle'/>
CTouchSensor* TouchSensor1208 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1208->setDescription("HAnimJoint l_pinky2, HAnimSegment l_pinky_middle");
HAnimSegment1207->addChildren(*TouchSensor1208);

CTransform* Transform1209 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1209->setTranslation(new float[3]{0.1938,0.7452,-0.1024});
CShape* Shape1210 = (CShape *)(m_pScene.createNode("Shape"));
Shape1210->setUSE("HAnimJointShape");
Transform1209->addChildren(*Shape1210);

HAnimSegment1207->addChildren(*Transform1209);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky2'/> to <HAnimJoint name='l_pinky3'/>
CShape* Shape1211 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1212 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1212->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1213 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1213->setPoint(new float[6]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017});
LineSet1212->setCoord(*Coordinate1213);

CColorRGBA* ColorRGBA1214 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1214->setUSE("HAnimSegmentLineColorRGBA");
LineSet1212->setColor(*ColorRGBA1214);

Shape1211->setGeometry(LineSet1212);

HAnimSegment1207->addChildren(*Shape1211);

HAnimJoint1206->addChildren(*HAnimSegment1207);

CHAnimJoint* HAnimJoint1215 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1215->setName("l_pinky3");
HAnimJoint1215->setDEF("hanim_l_pinky3");
HAnimJoint1215->setCenter(new float[3]{0.1948,0.7277,-0.1017});
HAnimJoint1215->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1215->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1216 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1216->setName("l_pinky_distal");
HAnimSegment1216->setDEF("hanim_l_pinky_distal");
//<HAnimJoint name='l_pinky3'/> visualization sphere within <HAnimSegment name='l_pinky_distal'/>
CTouchSensor* TouchSensor1217 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1217->setDescription("HAnimJoint l_pinky3, HAnimSegment l_pinky_distal");
HAnimSegment1216->addChildren(*TouchSensor1217);

CTransform* Transform1218 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1218->setTranslation(new float[3]{0.1948,0.7277,-0.1017});
CShape* Shape1219 = (CShape *)(m_pScene.createNode("Shape"));
Shape1219->setUSE("HAnimJointShape");
Transform1218->addChildren(*Shape1219);

HAnimSegment1216->addChildren(*Transform1218);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_pinky3'/> to <HAnimSite name='l_pinky_distal_tip'/>
CShape* Shape1220 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1221 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1221->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1222 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1222->setPoint(new float[6]{0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012});
LineSet1221->setCoord(*Coordinate1222);

CColorRGBA* ColorRGBA1223 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1223->setUSE("HAnimSiteLineColorRGBA");
LineSet1221->setColor(*ColorRGBA1223);

Shape1220->setGeometry(LineSet1221);

HAnimSegment1216->addChildren(*Shape1220);

CHAnimSite* HAnimSite1224 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1224->setName("l_pinky_distal_tip");
HAnimSite1224->setDEF("hanim_l_pinky_distal_tip");
HAnimSite1224->setTranslation(new float[3]{0.2014,0.7009,-0.1012});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1225 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1225->setDescription("HAnimSite l_pinky_distal_tip");
HAnimSite1224->addChildren(*TouchSensor1225);

CShape* Shape1226 = (CShape *)(m_pScene.createNode("Shape"));
Shape1226->setUSE("HAnimSiteShape");
HAnimSite1224->addChildren(*Shape1226);

HAnimSegment1216->addChildren(*HAnimSite1224);

HAnimJoint1215->addChildren(*HAnimSegment1216);

HAnimJoint1206->addChildren(*HAnimJoint1215);

HAnimJoint1197->addChildren(*HAnimJoint1206);

HAnimJoint1188->addChildren(*HAnimJoint1197);

HAnimJoint978->addChildren(*HAnimJoint1188);

HAnimJoint941->addChildren(*HAnimJoint978);

HAnimJoint925->addChildren(*HAnimJoint941);

HAnimJoint916->addChildren(*HAnimJoint925);

HAnimJoint879->addChildren(*HAnimJoint916);

HAnimJoint595->addChildren(*HAnimJoint879);

CHAnimJoint* HAnimJoint1227 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1227->setName("r_sternoclavicular");
HAnimJoint1227->setDEF("hanim_r_sternoclavicular");
HAnimJoint1227->setCenter(new float[3]{-0.082,1.4488,-0.0353});
HAnimJoint1227->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1227->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1228 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1228->setName("r_clavicle");
HAnimSegment1228->setDEF("hanim_r_clavicle");
//<HAnimJoint name='r_sternoclavicular'/> visualization sphere within <HAnimSegment name='r_clavicle'/>
CTouchSensor* TouchSensor1229 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1229->setDescription("HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle");
HAnimSegment1228->addChildren(*TouchSensor1229);

CTransform* Transform1230 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1230->setTranslation(new float[3]{-0.082,1.4488,-0.0353});
CShape* Shape1231 = (CShape *)(m_pScene.createNode("Shape"));
Shape1231->setUSE("HAnimJointShape");
Transform1230->addChildren(*Shape1231);

HAnimSegment1228->addChildren(*Transform1230);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_sternoclavicular'/> to <HAnimJoint name='r_acromioclavicular'/>
CShape* Shape1232 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1233 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1233->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1234 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1234->setPoint(new float[6]{-0.082,1.4488,-0.0353,-0.0962,1.4269,-0.0424});
LineSet1233->setCoord(*Coordinate1234);

CColorRGBA* ColorRGBA1235 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1235->setUSE("HAnimSegmentLineColorRGBA");
LineSet1233->setColor(*ColorRGBA1235);

Shape1232->setGeometry(LineSet1233);

HAnimSegment1228->addChildren(*Shape1232);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_clavicale'/>
CShape* Shape1236 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1237 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1237->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1238 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1238->setPoint(new float[6]{-0.082,1.4488,-0.0353,-0.0115,1.4943,0.04});
LineSet1237->setCoord(*Coordinate1238);

CColorRGBA* ColorRGBA1239 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1239->setUSE("HAnimSiteLineColorRGBA");
LineSet1237->setColor(*ColorRGBA1239);

Shape1236->setGeometry(LineSet1237);

HAnimSegment1228->addChildren(*Shape1236);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_acromion'/>
CShape* Shape1240 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1241 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1241->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1242 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1242->setPoint(new float[6]{-0.082,1.4488,-0.0353,-0.1905,1.4791,-0.0431});
LineSet1241->setCoord(*Coordinate1242);

CColorRGBA* ColorRGBA1243 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1243->setUSE("HAnimSiteLineColorRGBA");
LineSet1241->setColor(*ColorRGBA1243);

Shape1240->setGeometry(LineSet1241);

HAnimSegment1228->addChildren(*Shape1240);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_ant'/>
CShape* Shape1244 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1245 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1245->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1246 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1246->setPoint(new float[6]{-0.082,1.4488,-0.0353,-0.1626,1.4072,-0.0031});
LineSet1245->setCoord(*Coordinate1246);

CColorRGBA* ColorRGBA1247 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1247->setUSE("HAnimSiteLineColorRGBA");
LineSet1245->setColor(*ColorRGBA1247);

Shape1244->setGeometry(LineSet1245);

HAnimSegment1228->addChildren(*Shape1244);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_post'/>
CShape* Shape1248 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1249 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1249->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1250 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1250->setPoint(new float[6]{-0.082,1.4488,-0.0353,-0.1603,1.4098,-0.0826});
LineSet1249->setCoord(*Coordinate1250);

CColorRGBA* ColorRGBA1251 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1251->setUSE("HAnimSiteLineColorRGBA");
LineSet1249->setColor(*ColorRGBA1251);

Shape1248->setGeometry(LineSet1249);

HAnimSegment1228->addChildren(*Shape1248);

CHAnimSite* HAnimSite1252 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1252->setName("r_clavicale_pt");
HAnimSite1252->setDEF("hanim_r_clavicale_pt");
HAnimSite1252->setTranslation(new float[3]{-0.0115,1.4943,0.04});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1253 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1253->setDescription("HAnimSite r_clavicale");
HAnimSite1252->addChildren(*TouchSensor1253);

CShape* Shape1254 = (CShape *)(m_pScene.createNode("Shape"));
Shape1254->setUSE("HAnimSiteShape");
HAnimSite1252->addChildren(*Shape1254);

HAnimSegment1228->addChildren(*HAnimSite1252);

CHAnimSite* HAnimSite1255 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1255->setName("r_acromion_pt");
HAnimSite1255->setDEF("hanim_r_acromion_pt");
HAnimSite1255->setTranslation(new float[3]{-0.1905,1.4791,-0.0431});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1256 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1256->setDescription("HAnimSite r_acromion");
HAnimSite1255->addChildren(*TouchSensor1256);

CShape* Shape1257 = (CShape *)(m_pScene.createNode("Shape"));
Shape1257->setUSE("HAnimSiteShape");
HAnimSite1255->addChildren(*Shape1257);

HAnimSegment1228->addChildren(*HAnimSite1255);

CHAnimSite* HAnimSite1258 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1258->setName("r_axilla_ant_pt");
HAnimSite1258->setDEF("hanim_r_axilla_ant_pt");
HAnimSite1258->setTranslation(new float[3]{-0.1626,1.4072,-0.0031});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1259 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1259->setDescription("HAnimSite r_axilla_ant");
HAnimSite1258->addChildren(*TouchSensor1259);

CShape* Shape1260 = (CShape *)(m_pScene.createNode("Shape"));
Shape1260->setUSE("HAnimSiteShape");
HAnimSite1258->addChildren(*Shape1260);

HAnimSegment1228->addChildren(*HAnimSite1258);

CHAnimSite* HAnimSite1261 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1261->setName("r_axilla_post_pt");
HAnimSite1261->setDEF("hanim_r_axilla_post_pt");
HAnimSite1261->setTranslation(new float[3]{-0.1603,1.4098,-0.0826});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1262 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1262->setDescription("HAnimSite r_axilla_post");
HAnimSite1261->addChildren(*TouchSensor1262);

CShape* Shape1263 = (CShape *)(m_pScene.createNode("Shape"));
Shape1263->setUSE("HAnimSiteShape");
HAnimSite1261->addChildren(*Shape1263);

HAnimSegment1228->addChildren(*HAnimSite1261);

HAnimJoint1227->addChildren(*HAnimSegment1228);

CHAnimJoint* HAnimJoint1264 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1264->setName("r_acromioclavicular");
HAnimJoint1264->setDEF("hanim_r_acromioclavicular");
HAnimJoint1264->setCenter(new float[3]{-0.0962,1.4269,-0.0424});
HAnimJoint1264->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1264->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1265 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1265->setName("r_scapula");
HAnimSegment1265->setDEF("hanim_r_scapula");
//<HAnimJoint name='r_acromioclavicular'/> visualization sphere within <HAnimSegment name='r_scapula'/>
CTouchSensor* TouchSensor1266 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1266->setDescription("HAnimJoint r_acromioclavicular, HAnimSegment r_scapula");
HAnimSegment1265->addChildren(*TouchSensor1266);

CTransform* Transform1267 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1267->setTranslation(new float[3]{-0.0962,1.4269,-0.0424});
CShape* Shape1268 = (CShape *)(m_pScene.createNode("Shape"));
Shape1268->setUSE("HAnimJointShape");
Transform1267->addChildren(*Shape1268);

HAnimSegment1265->addChildren(*Transform1267);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_acromioclavicular'/> to <HAnimJoint name='r_shoulder'/>
CShape* Shape1269 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1270 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1270->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1271 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1271->setPoint(new float[6]{-0.0962,1.4269,-0.0424,-0.2029,1.4376,-0.0387});
LineSet1270->setCoord(*Coordinate1271);

CColorRGBA* ColorRGBA1272 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1272->setUSE("HAnimSegmentLineColorRGBA");
LineSet1270->setColor(*ColorRGBA1272);

Shape1269->setGeometry(LineSet1270);

HAnimSegment1265->addChildren(*Shape1269);

HAnimJoint1264->addChildren(*HAnimSegment1265);

CHAnimJoint* HAnimJoint1273 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1273->setName("r_shoulder");
HAnimJoint1273->setDEF("hanim_r_shoulder");
HAnimJoint1273->setCenter(new float[3]{-0.2029,1.4376,-0.0387});
HAnimJoint1273->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1273->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1274 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1274->setName("r_upperarm");
HAnimSegment1274->setDEF("hanim_r_upperarm");
//<HAnimJoint name='r_shoulder'/> visualization sphere within <HAnimSegment name='r_upperarm'/>
CTouchSensor* TouchSensor1275 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1275->setDescription("HAnimJoint r_shoulder, HAnimSegment r_upperarm");
HAnimSegment1274->addChildren(*TouchSensor1275);

CTransform* Transform1276 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1276->setTranslation(new float[3]{-0.2029,1.4376,-0.0387});
CShape* Shape1277 = (CShape *)(m_pScene.createNode("Shape"));
Shape1277->setUSE("HAnimJointShape");
Transform1276->addChildren(*Shape1277);

HAnimSegment1274->addChildren(*Transform1276);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_shoulder'/> to <HAnimJoint name='r_elbow'/>
CShape* Shape1278 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1279 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1279->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1280 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1280->setPoint(new float[6]{-0.2029,1.4376,-0.0387,-0.2014,1.1357,-0.0682});
LineSet1279->setCoord(*Coordinate1280);

CColorRGBA* ColorRGBA1281 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1281->setUSE("HAnimSegmentLineColorRGBA");
LineSet1279->setColor(*ColorRGBA1281);

Shape1278->setGeometry(LineSet1279);

HAnimSegment1274->addChildren(*Shape1278);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_shoulder'/> to <HAnimSite name='r_humeral_lateral_epicn'/>
CShape* Shape1282 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1283 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1283->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1284 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1284->setPoint(new float[6]{-0.2029,1.4376,-0.0387,-0.2224,1.1517,-0.1033});
LineSet1283->setCoord(*Coordinate1284);

CColorRGBA* ColorRGBA1285 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1285->setUSE("HAnimSiteLineColorRGBA");
LineSet1283->setColor(*ColorRGBA1285);

Shape1282->setGeometry(LineSet1283);

HAnimSegment1274->addChildren(*Shape1282);

CHAnimSite* HAnimSite1286 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1286->setName("r_humeral_lateral_epicn_pt");
HAnimSite1286->setDEF("hanim_r_humeral_lateral_epicn_pt");
HAnimSite1286->setTranslation(new float[3]{-0.2224,1.1517,-0.1033});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1287 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1287->setDescription("HAnimSite r_humeral_lateral_epicn");
HAnimSite1286->addChildren(*TouchSensor1287);

CShape* Shape1288 = (CShape *)(m_pScene.createNode("Shape"));
Shape1288->setUSE("HAnimSiteShape");
HAnimSite1286->addChildren(*Shape1288);

HAnimSegment1274->addChildren(*HAnimSite1286);

HAnimJoint1273->addChildren(*HAnimSegment1274);

CHAnimJoint* HAnimJoint1289 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1289->setName("r_elbow");
HAnimJoint1289->setDEF("hanim_r_elbow");
HAnimJoint1289->setCenter(new float[3]{-0.2014,1.1357,-0.0682});
HAnimJoint1289->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1289->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1290 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1290->setName("r_forearm");
HAnimSegment1290->setDEF("hanim_r_forearm");
//<HAnimJoint name='r_elbow'/> visualization sphere within <HAnimSegment name='r_forearm'/>
CTouchSensor* TouchSensor1291 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1291->setDescription("HAnimJoint r_elbow, HAnimSegment r_forearm");
HAnimSegment1290->addChildren(*TouchSensor1291);

CTransform* Transform1292 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1292->setTranslation(new float[3]{-0.2014,1.1357,-0.0682});
CShape* Shape1293 = (CShape *)(m_pScene.createNode("Shape"));
Shape1293->setUSE("HAnimJointShape");
Transform1292->addChildren(*Shape1293);

HAnimSegment1290->addChildren(*Transform1292);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_elbow'/> to <HAnimJoint name='r_wrist'/>
CShape* Shape1294 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1295 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1295->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1296 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1296->setPoint(new float[6]{-0.2014,1.1357,-0.0682,-0.1984,0.8663,-0.0583});
LineSet1295->setCoord(*Coordinate1296);

CColorRGBA* ColorRGBA1297 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1297->setUSE("HAnimSegmentLineColorRGBA");
LineSet1295->setColor(*ColorRGBA1297);

Shape1294->setGeometry(LineSet1295);

HAnimSegment1290->addChildren(*Shape1294);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radial_styloid'/>
CShape* Shape1298 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1299 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1299->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1300 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1300->setPoint(new float[6]{-0.2014,1.1357,-0.0682,-0.1884,0.8676,-0.036});
LineSet1299->setCoord(*Coordinate1300);

CColorRGBA* ColorRGBA1301 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1301->setUSE("HAnimSiteLineColorRGBA");
LineSet1299->setColor(*ColorRGBA1301);

Shape1298->setGeometry(LineSet1299);

HAnimSegment1290->addChildren(*Shape1298);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_olecranon'/>
CShape* Shape1302 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1303 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1303->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1304 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1304->setPoint(new float[6]{-0.2014,1.1357,-0.0682,-0.1907,1.1405,-0.1065});
LineSet1303->setCoord(*Coordinate1304);

CColorRGBA* ColorRGBA1305 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1305->setUSE("HAnimSiteLineColorRGBA");
LineSet1303->setColor(*ColorRGBA1305);

Shape1302->setGeometry(LineSet1303);

HAnimSegment1290->addChildren(*Shape1302);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_humeral_medial_epicn'/>
CShape* Shape1306 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1307 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1307->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1308 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1308->setPoint(new float[6]{-0.2014,1.1357,-0.0682,-0.168,1.1298,-0.1062});
LineSet1307->setCoord(*Coordinate1308);

CColorRGBA* ColorRGBA1309 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1309->setUSE("HAnimSiteLineColorRGBA");
LineSet1307->setColor(*ColorRGBA1309);

Shape1306->setGeometry(LineSet1307);

HAnimSegment1290->addChildren(*Shape1306);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radiale'/>
CShape* Shape1310 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1311 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1311->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1312 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1312->setPoint(new float[6]{-0.2014,1.1357,-0.0682,-0.213,1.1305,-0.1091});
LineSet1311->setCoord(*Coordinate1312);

CColorRGBA* ColorRGBA1313 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1313->setUSE("HAnimSiteLineColorRGBA");
LineSet1311->setColor(*ColorRGBA1313);

Shape1310->setGeometry(LineSet1311);

HAnimSegment1290->addChildren(*Shape1310);

CHAnimSite* HAnimSite1314 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1314->setName("r_radial_styloid_pt");
HAnimSite1314->setDEF("hanim_r_radial_styloid_pt");
HAnimSite1314->setTranslation(new float[3]{-0.1884,0.8676,-0.036});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1315 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1315->setDescription("HAnimSite r_radial_styloid");
HAnimSite1314->addChildren(*TouchSensor1315);

CShape* Shape1316 = (CShape *)(m_pScene.createNode("Shape"));
Shape1316->setUSE("HAnimSiteShape");
HAnimSite1314->addChildren(*Shape1316);

HAnimSegment1290->addChildren(*HAnimSite1314);

CHAnimSite* HAnimSite1317 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1317->setName("r_olecranon_pt");
HAnimSite1317->setDEF("hanim_r_olecranon_pt");
HAnimSite1317->setTranslation(new float[3]{-0.1907,1.1405,-0.1065});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1318 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1318->setDescription("HAnimSite r_olecranon");
HAnimSite1317->addChildren(*TouchSensor1318);

CShape* Shape1319 = (CShape *)(m_pScene.createNode("Shape"));
Shape1319->setUSE("HAnimSiteShape");
HAnimSite1317->addChildren(*Shape1319);

HAnimSegment1290->addChildren(*HAnimSite1317);

CHAnimSite* HAnimSite1320 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1320->setName("r_humeral_medial_epicn_pt");
HAnimSite1320->setDEF("hanim_r_humeral_medial_epicn_pt");
HAnimSite1320->setTranslation(new float[3]{-0.168,1.1298,-0.1062});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1321 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1321->setDescription("HAnimSite r_humeral_medial_epicn");
HAnimSite1320->addChildren(*TouchSensor1321);

CShape* Shape1322 = (CShape *)(m_pScene.createNode("Shape"));
Shape1322->setUSE("HAnimSiteShape");
HAnimSite1320->addChildren(*Shape1322);

HAnimSegment1290->addChildren(*HAnimSite1320);

CHAnimSite* HAnimSite1323 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1323->setName("r_radiale_pt");
HAnimSite1323->setDEF("hanim_r_radiale_pt");
HAnimSite1323->setTranslation(new float[3]{-0.213,1.1305,-0.1091});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1324 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1324->setDescription("HAnimSite r_radiale");
HAnimSite1323->addChildren(*TouchSensor1324);

CShape* Shape1325 = (CShape *)(m_pScene.createNode("Shape"));
Shape1325->setUSE("HAnimSiteShape");
HAnimSite1323->addChildren(*Shape1325);

HAnimSegment1290->addChildren(*HAnimSite1323);

HAnimJoint1289->addChildren(*HAnimSegment1290);

CHAnimJoint* HAnimJoint1326 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1326->setName("r_wrist");
HAnimJoint1326->setDEF("hanim_r_wrist");
HAnimJoint1326->setCenter(new float[3]{-0.1984,0.8663,-0.0583});
HAnimJoint1326->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1326->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1327 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1327->setName("r_hand");
HAnimSegment1327->setDEF("hanim_r_hand");
//<HAnimJoint name='r_wrist'/> visualization sphere within <HAnimSegment name='r_hand'/>
CTouchSensor* TouchSensor1328 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1328->setDescription("HAnimJoint r_wrist, HAnimSegment r_hand");
HAnimSegment1327->addChildren(*TouchSensor1328);

CTransform* Transform1329 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1329->setTranslation(new float[3]{-0.1984,0.8663,-0.0583});
CShape* Shape1330 = (CShape *)(m_pScene.createNode("Shape"));
Shape1330->setUSE("HAnimJointShape");
Transform1329->addChildren(*Shape1330);

HAnimSegment1327->addChildren(*Transform1329);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_thumb1'/>
CShape* Shape1331 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1332 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1332->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1333 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1333->setPoint(new float[6]{-0.1984,0.8663,-0.0583,-0.1924,0.8472,-0.0534});
LineSet1332->setCoord(*Coordinate1333);

CColorRGBA* ColorRGBA1334 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1334->setUSE("HAnimSegmentLineColorRGBA");
LineSet1332->setColor(*ColorRGBA1334);

Shape1331->setGeometry(LineSet1332);

HAnimSegment1327->addChildren(*Shape1331);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_index0'/>
CShape* Shape1335 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1336 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1336->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1337 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1337->setPoint(new float[6]{-0.1984,0.8663,-0.0583,-0.1983,0.8024,-0.028});
LineSet1336->setCoord(*Coordinate1337);

CColorRGBA* ColorRGBA1338 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1338->setUSE("HAnimSegmentLineColorRGBA");
LineSet1336->setColor(*ColorRGBA1338);

Shape1335->setGeometry(LineSet1336);

HAnimSegment1327->addChildren(*Shape1335);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_middle0'/>
CShape* Shape1339 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1340 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1340->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1341 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1341->setPoint(new float[6]{-0.1984,0.8663,-0.0583,-0.1987,0.8029,-0.053});
LineSet1340->setCoord(*Coordinate1341);

CColorRGBA* ColorRGBA1342 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1342->setUSE("HAnimSegmentLineColorRGBA");
LineSet1340->setColor(*ColorRGBA1342);

Shape1339->setGeometry(LineSet1340);

HAnimSegment1327->addChildren(*Shape1339);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_ring0'/>
CShape* Shape1343 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1344 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1344->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1345 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1345->setPoint(new float[6]{-0.1984,0.8663,-0.0583,-0.1956,0.8019,-0.0794});
LineSet1344->setCoord(*Coordinate1345);

CColorRGBA* ColorRGBA1346 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1346->setUSE("HAnimSegmentLineColorRGBA");
LineSet1344->setColor(*ColorRGBA1346);

Shape1343->setGeometry(LineSet1344);

HAnimSegment1327->addChildren(*Shape1343);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_pinky0'/>
CShape* Shape1347 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1348 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1348->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1349 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1349->setPoint(new float[6]{-0.1984,0.8663,-0.0583,-0.1925,0.8066,-0.1036});
LineSet1348->setCoord(*Coordinate1349);

CColorRGBA* ColorRGBA1350 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1350->setUSE("HAnimSegmentLineColorRGBA");
LineSet1348->setColor(*ColorRGBA1350);

Shape1347->setGeometry(LineSet1348);

HAnimSegment1327->addChildren(*Shape1347);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_metacarpal_pha2'/>
CShape* Shape1351 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1352 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1352->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1353 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1353->setPoint(new float[6]{-0.1984,0.8663,-0.0583,-0.1977,0.8169,-0.0177});
LineSet1352->setCoord(*Coordinate1353);

CColorRGBA* ColorRGBA1354 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1354->setUSE("HAnimSiteLineColorRGBA");
LineSet1352->setColor(*ColorRGBA1354);

Shape1351->setGeometry(LineSet1352);

HAnimSegment1327->addChildren(*Shape1351);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_ulnar_styloid'/>
CShape* Shape1355 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1356 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1356->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1357 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1357->setPoint(new float[6]{-0.1984,0.8663,-0.0583,-0.2117,0.8562,-0.0584});
LineSet1356->setCoord(*Coordinate1357);

CColorRGBA* ColorRGBA1358 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1358->setUSE("HAnimSiteLineColorRGBA");
LineSet1356->setColor(*ColorRGBA1358);

Shape1355->setGeometry(LineSet1356);

HAnimSegment1327->addChildren(*Shape1355);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_metacarpal_pha5'/>
CShape* Shape1359 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1360 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1360->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1361 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1361->setPoint(new float[6]{-0.1984,0.8663,-0.0583,-0.1929,0.789,-0.1064});
LineSet1360->setCoord(*Coordinate1361);

CColorRGBA* ColorRGBA1362 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1362->setUSE("HAnimSiteLineColorRGBA");
LineSet1360->setColor(*ColorRGBA1362);

Shape1359->setGeometry(LineSet1360);

HAnimSegment1327->addChildren(*Shape1359);

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_hand_front_view'/>
CShape* Shape1363 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1364 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1364->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1365 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1365->setPoint(new float[6]{-0.1984,0.8663,-0.0583,-0.3,0.75,0.45});
LineSet1364->setCoord(*Coordinate1365);

CColorRGBA* ColorRGBA1366 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1366->setUSE("HAnimSiteViewpointLineColorRGBA");
LineSet1364->setColor(*ColorRGBA1366);

Shape1363->setGeometry(LineSet1364);

HAnimSegment1327->addChildren(*Shape1363);

CHAnimSite* HAnimSite1367 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1367->setName("r_metacarpal_pha2_pt");
HAnimSite1367->setDEF("hanim_r_metacarpal_pha2_pt");
HAnimSite1367->setTranslation(new float[3]{-0.1977,0.8169,-0.0177});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1368 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1368->setDescription("HAnimSite r_metacarpal_pha2");
HAnimSite1367->addChildren(*TouchSensor1368);

CShape* Shape1369 = (CShape *)(m_pScene.createNode("Shape"));
Shape1369->setUSE("HAnimSiteShape");
HAnimSite1367->addChildren(*Shape1369);

HAnimSegment1327->addChildren(*HAnimSite1367);

CHAnimSite* HAnimSite1370 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1370->setName("r_ulnar_styloid_pt");
HAnimSite1370->setDEF("hanim_r_ulnar_styloid_pt");
HAnimSite1370->setTranslation(new float[3]{-0.2117,0.8562,-0.0584});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1371 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1371->setDescription("HAnimSite r_ulnar_styloid");
HAnimSite1370->addChildren(*TouchSensor1371);

CShape* Shape1372 = (CShape *)(m_pScene.createNode("Shape"));
Shape1372->setUSE("HAnimSiteShape");
HAnimSite1370->addChildren(*Shape1372);

HAnimSegment1327->addChildren(*HAnimSite1370);

CHAnimSite* HAnimSite1373 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1373->setName("r_metacarpal_pha5_pt");
HAnimSite1373->setDEF("hanim_r_metacarpal_pha5_pt");
HAnimSite1373->setTranslation(new float[3]{-0.1929,0.789,-0.1064});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1374 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1374->setDescription("HAnimSite r_metacarpal_pha5");
HAnimSite1373->addChildren(*TouchSensor1374);

CShape* Shape1375 = (CShape *)(m_pScene.createNode("Shape"));
Shape1375->setUSE("HAnimSiteShape");
HAnimSite1373->addChildren(*Shape1375);

HAnimSegment1327->addChildren(*HAnimSite1373);

CHAnimSite* HAnimSite1376 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1376->setName("r_hand_front_view");
HAnimSite1376->setDEF("hanim_r_hand_front_view");
HAnimSite1376->setTranslation(new float[3]{-0.3,0.75,0.45});
CViewpoint* Viewpoint1377 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1377->setDEF("hanim_r_hand_front_viewpoint");
Viewpoint1377->setCenterOfRotation(new float[3]{0,0.7,0});
Viewpoint1377->setDescription("right hand front");
Viewpoint1377->setPosition(new float[3]{0,0,0});
HAnimSite1376->addChildren(*Viewpoint1377);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1378 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1378->setDescription("HAnimSite Viewpoint hanim_r_hand_front_view");
Anchor1378->setUrl(new CString[1]{"#hanim_r_hand_front_viewpoint"}, 1);
CLOD* LOD1379 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1379->setForceTransitions(True);
LOD1379->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo1380 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1380->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1379->addChildren(*WorldInfo1380);

CShape* Shape1381 = (CShape *)(m_pScene.createNode("Shape"));
Shape1381->setUSE("HAnimSiteViewpointShape");
LOD1379->addChildren(*Shape1381);

Anchor1378->addChildren(*LOD1379);

HAnimSite1376->addChildren(*Anchor1378);

HAnimSegment1327->addChildren(*HAnimSite1376);

HAnimJoint1326->addChildren(*HAnimSegment1327);

CHAnimJoint* HAnimJoint1382 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1382->setName("r_thumb1");
HAnimJoint1382->setDEF("hanim_r_thumb1");
HAnimJoint1382->setCenter(new float[3]{-0.1924,0.8472,-0.0534});
HAnimJoint1382->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1382->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1383 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1383->setName("r_thumb_metacarpal");
HAnimSegment1383->setDEF("hanim_r_thumb_metacarpal");
//<HAnimJoint name='r_thumb1'/> visualization sphere within <HAnimSegment name='r_thumb_metacarpal'/>
CTouchSensor* TouchSensor1384 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1384->setDescription("HAnimJoint r_thumb1, HAnimSegment r_thumb_metacarpal");
HAnimSegment1383->addChildren(*TouchSensor1384);

CTransform* Transform1385 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1385->setTranslation(new float[3]{-0.1924,0.8472,-0.0534});
CShape* Shape1386 = (CShape *)(m_pScene.createNode("Shape"));
Shape1386->setUSE("HAnimJointShape");
Transform1385->addChildren(*Shape1386);

HAnimSegment1383->addChildren(*Transform1385);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_thumb1'/> to <HAnimJoint name='r_thumb2'/>
CShape* Shape1387 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1388 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1388->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1389 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1389->setPoint(new float[6]{-0.1924,0.8472,-0.0534,-0.1951,0.8226,0.0246});
LineSet1388->setCoord(*Coordinate1389);

CColorRGBA* ColorRGBA1390 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1390->setUSE("HAnimSegmentLineColorRGBA");
LineSet1388->setColor(*ColorRGBA1390);

Shape1387->setGeometry(LineSet1388);

HAnimSegment1383->addChildren(*Shape1387);

HAnimJoint1382->addChildren(*HAnimSegment1383);

CHAnimJoint* HAnimJoint1391 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1391->setName("r_thumb2");
HAnimJoint1391->setDEF("hanim_r_thumb2");
HAnimJoint1391->setCenter(new float[3]{-0.1951,0.8226,0.0246});
HAnimJoint1391->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1391->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1392 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1392->setName("r_thumb_proximal");
HAnimSegment1392->setDEF("hanim_r_thumb_proximal");
//<HAnimJoint name='r_thumb2'/> visualization sphere within <HAnimSegment name='r_thumb_proximal'/>
CTouchSensor* TouchSensor1393 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1393->setDescription("HAnimJoint r_thumb2, HAnimSegment r_thumb_proximal");
HAnimSegment1392->addChildren(*TouchSensor1393);

CTransform* Transform1394 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1394->setTranslation(new float[3]{-0.1951,0.8226,0.0246});
CShape* Shape1395 = (CShape *)(m_pScene.createNode("Shape"));
Shape1395->setUSE("HAnimJointShape");
Transform1394->addChildren(*Shape1395);

HAnimSegment1392->addChildren(*Transform1394);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_thumb2'/> to <HAnimJoint name='r_thumb3'/>
CShape* Shape1396 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1397 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1397->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1398 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1398->setPoint(new float[6]{-0.1951,0.8226,0.0246,-0.1955,0.8159,0.0464});
LineSet1397->setCoord(*Coordinate1398);

CColorRGBA* ColorRGBA1399 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1399->setUSE("HAnimSegmentLineColorRGBA");
LineSet1397->setColor(*ColorRGBA1399);

Shape1396->setGeometry(LineSet1397);

HAnimSegment1392->addChildren(*Shape1396);

HAnimJoint1391->addChildren(*HAnimSegment1392);

CHAnimJoint* HAnimJoint1400 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1400->setName("r_thumb3");
HAnimJoint1400->setDEF("hanim_r_thumb3");
HAnimJoint1400->setCenter(new float[3]{-0.1955,0.8159,0.0464});
HAnimJoint1400->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1400->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1401 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1401->setName("r_thumb_distal");
HAnimSegment1401->setDEF("hanim_r_thumb_distal");
//<HAnimJoint name='r_thumb3'/> visualization sphere within <HAnimSegment name='r_thumb_distal'/>
CTouchSensor* TouchSensor1402 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1402->setDescription("HAnimJoint r_thumb3, HAnimSegment r_thumb_distal");
HAnimSegment1401->addChildren(*TouchSensor1402);

CTransform* Transform1403 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1403->setTranslation(new float[3]{-0.1955,0.8159,0.0464});
CShape* Shape1404 = (CShape *)(m_pScene.createNode("Shape"));
Shape1404->setUSE("HAnimJointShape");
Transform1403->addChildren(*Shape1404);

HAnimSegment1401->addChildren(*Transform1403);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_thumb3'/> to <HAnimSite name='r_thumb_distal_tip'/>
CShape* Shape1405 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1406 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1406->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1407 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1407->setPoint(new float[6]{-0.1955,0.8159,0.0464,-0.1869,0.809,0.082});
LineSet1406->setCoord(*Coordinate1407);

CColorRGBA* ColorRGBA1408 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1408->setUSE("HAnimSiteLineColorRGBA");
LineSet1406->setColor(*ColorRGBA1408);

Shape1405->setGeometry(LineSet1406);

HAnimSegment1401->addChildren(*Shape1405);

CHAnimSite* HAnimSite1409 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1409->setName("r_thumb_distal_tip");
HAnimSite1409->setDEF("hanim_r_thumb_distal_tip");
HAnimSite1409->setTranslation(new float[3]{-0.1869,0.809,0.082});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1410 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1410->setDescription("HAnimSite r_thumb_distal_tip");
HAnimSite1409->addChildren(*TouchSensor1410);

CShape* Shape1411 = (CShape *)(m_pScene.createNode("Shape"));
Shape1411->setUSE("HAnimSiteShape");
HAnimSite1409->addChildren(*Shape1411);

HAnimSegment1401->addChildren(*HAnimSite1409);

HAnimJoint1400->addChildren(*HAnimSegment1401);

HAnimJoint1391->addChildren(*HAnimJoint1400);

HAnimJoint1382->addChildren(*HAnimJoint1391);

HAnimJoint1326->addChildren(*HAnimJoint1382);

CHAnimJoint* HAnimJoint1412 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1412->setName("r_index0");
HAnimJoint1412->setDEF("hanim_r_index0");
HAnimJoint1412->setCenter(new float[3]{-0.1983,0.8024,-0.028});
HAnimJoint1412->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1412->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1413 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1413->setName("r_index_metacarpal");
HAnimSegment1413->setDEF("hanim_r_index_metacarpal");
//<HAnimJoint name='r_index0'/> visualization sphere within <HAnimSegment name='r_index_metacarpal'/>
CTouchSensor* TouchSensor1414 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1414->setDescription("HAnimJoint r_index0, HAnimSegment r_index_metacarpal");
HAnimSegment1413->addChildren(*TouchSensor1414);

CTransform* Transform1415 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1415->setTranslation(new float[3]{-0.1983,0.8024,-0.028});
CShape* Shape1416 = (CShape *)(m_pScene.createNode("Shape"));
Shape1416->setUSE("HAnimJointShape");
Transform1415->addChildren(*Shape1416);

HAnimSegment1413->addChildren(*Transform1415);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_index0'/> to <HAnimJoint name='r_index1'/>
CShape* Shape1417 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1418 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1418->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1419 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1419->setPoint(new float[6]{-0.1983,0.8024,-0.028,-0.1983,0.7815,-0.028});
LineSet1418->setCoord(*Coordinate1419);

CColorRGBA* ColorRGBA1420 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1420->setUSE("HAnimSegmentLineColorRGBA");
LineSet1418->setColor(*ColorRGBA1420);

Shape1417->setGeometry(LineSet1418);

HAnimSegment1413->addChildren(*Shape1417);

HAnimJoint1412->addChildren(*HAnimSegment1413);

CHAnimJoint* HAnimJoint1421 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1421->setName("r_index1");
HAnimJoint1421->setDEF("hanim_r_index1");
HAnimJoint1421->setCenter(new float[3]{-0.1983,0.7815,-0.028});
HAnimJoint1421->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1421->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1422 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1422->setName("r_index_proximal");
HAnimSegment1422->setDEF("hanim_r_index_proximal");
//<HAnimJoint name='r_index1'/> visualization sphere within <HAnimSegment name='r_index_proximal'/>
CTouchSensor* TouchSensor1423 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1423->setDescription("HAnimJoint r_index1, HAnimSegment r_index_proximal");
HAnimSegment1422->addChildren(*TouchSensor1423);

CTransform* Transform1424 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1424->setTranslation(new float[3]{-0.1983,0.7815,-0.028});
CShape* Shape1425 = (CShape *)(m_pScene.createNode("Shape"));
Shape1425->setUSE("HAnimJointShape");
Transform1424->addChildren(*Shape1425);

HAnimSegment1422->addChildren(*Transform1424);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_index1'/> to <HAnimJoint name='r_index2'/>
CShape* Shape1426 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1427 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1427->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1428 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1428->setPoint(new float[6]{-0.1983,0.7815,-0.028,-0.2017,0.7363,-0.0248});
LineSet1427->setCoord(*Coordinate1428);

CColorRGBA* ColorRGBA1429 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1429->setUSE("HAnimSegmentLineColorRGBA");
LineSet1427->setColor(*ColorRGBA1429);

Shape1426->setGeometry(LineSet1427);

HAnimSegment1422->addChildren(*Shape1426);

HAnimJoint1421->addChildren(*HAnimSegment1422);

CHAnimJoint* HAnimJoint1430 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1430->setName("r_index2");
HAnimJoint1430->setDEF("hanim_r_index2");
HAnimJoint1430->setCenter(new float[3]{-0.2017,0.7363,-0.0248});
HAnimJoint1430->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1430->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1431 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1431->setName("r_index_middle");
HAnimSegment1431->setDEF("hanim_r_index_middle");
//<HAnimJoint name='r_index2'/> visualization sphere within <HAnimSegment name='r_index_middle'/>
CTouchSensor* TouchSensor1432 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1432->setDescription("HAnimJoint r_index2, HAnimSegment r_index_middle");
HAnimSegment1431->addChildren(*TouchSensor1432);

CTransform* Transform1433 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1433->setTranslation(new float[3]{-0.2017,0.7363,-0.0248});
CShape* Shape1434 = (CShape *)(m_pScene.createNode("Shape"));
Shape1434->setUSE("HAnimJointShape");
Transform1433->addChildren(*Shape1434);

HAnimSegment1431->addChildren(*Transform1433);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_index2'/> to <HAnimJoint name='r_index3'/>
CShape* Shape1435 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1436 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1436->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1437 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1437->setPoint(new float[6]{-0.2017,0.7363,-0.0248,-0.2028,0.7139,-0.0236});
LineSet1436->setCoord(*Coordinate1437);

CColorRGBA* ColorRGBA1438 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1438->setUSE("HAnimSegmentLineColorRGBA");
LineSet1436->setColor(*ColorRGBA1438);

Shape1435->setGeometry(LineSet1436);

HAnimSegment1431->addChildren(*Shape1435);

HAnimJoint1430->addChildren(*HAnimSegment1431);

CHAnimJoint* HAnimJoint1439 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1439->setName("r_index3");
HAnimJoint1439->setDEF("hanim_r_index3");
HAnimJoint1439->setCenter(new float[3]{-0.2028,0.7139,-0.0236});
HAnimJoint1439->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1439->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1440 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1440->setName("r_index_distal");
HAnimSegment1440->setDEF("hanim_r_index_distal");
//<HAnimJoint name='r_index3'/> visualization sphere within <HAnimSegment name='r_index_distal'/>
CTouchSensor* TouchSensor1441 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1441->setDescription("HAnimJoint r_index3, HAnimSegment r_index_distal");
HAnimSegment1440->addChildren(*TouchSensor1441);

CTransform* Transform1442 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1442->setTranslation(new float[3]{-0.2028,0.7139,-0.0236});
CShape* Shape1443 = (CShape *)(m_pScene.createNode("Shape"));
Shape1443->setUSE("HAnimJointShape");
Transform1442->addChildren(*Shape1443);

HAnimSegment1440->addChildren(*Transform1442);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_index_distal_tip'/>
CShape* Shape1444 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1445 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1445->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1446 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1446->setPoint(new float[6]{-0.2028,0.7139,-0.0236,-0.198,0.6883,-0.018});
LineSet1445->setCoord(*Coordinate1446);

CColorRGBA* ColorRGBA1447 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1447->setUSE("HAnimSiteLineColorRGBA");
LineSet1445->setColor(*ColorRGBA1447);

Shape1444->setGeometry(LineSet1445);

HAnimSegment1440->addChildren(*Shape1444);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_dactylion'/>
CShape* Shape1448 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1449 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1449->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1450 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1450->setPoint(new float[6]{-0.2028,0.7139,-0.0236,-0.1941,0.6772,-0.0423});
LineSet1449->setCoord(*Coordinate1450);

CColorRGBA* ColorRGBA1451 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1451->setUSE("HAnimSiteLineColorRGBA");
LineSet1449->setColor(*ColorRGBA1451);

Shape1448->setGeometry(LineSet1449);

HAnimSegment1440->addChildren(*Shape1448);

CHAnimSite* HAnimSite1452 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1452->setName("r_index_distal_tip");
HAnimSite1452->setDEF("hanim_r_index_distal_tip");
HAnimSite1452->setTranslation(new float[3]{-0.198,0.6883,-0.018});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1453 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1453->setDescription("HAnimSite r_index_distal_tip");
HAnimSite1452->addChildren(*TouchSensor1453);

CShape* Shape1454 = (CShape *)(m_pScene.createNode("Shape"));
Shape1454->setUSE("HAnimSiteShape");
HAnimSite1452->addChildren(*Shape1454);

HAnimSegment1440->addChildren(*HAnimSite1452);

CHAnimSite* HAnimSite1455 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1455->setName("r_dactylion_pt");
HAnimSite1455->setDEF("hanim_r_dactylion_pt");
HAnimSite1455->setTranslation(new float[3]{-0.1941,0.6772,-0.0423});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1456 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1456->setDescription("HAnimSite r_dactylion");
HAnimSite1455->addChildren(*TouchSensor1456);

CShape* Shape1457 = (CShape *)(m_pScene.createNode("Shape"));
Shape1457->setUSE("HAnimSiteShape");
HAnimSite1455->addChildren(*Shape1457);

HAnimSegment1440->addChildren(*HAnimSite1455);

HAnimJoint1439->addChildren(*HAnimSegment1440);

HAnimJoint1430->addChildren(*HAnimJoint1439);

HAnimJoint1421->addChildren(*HAnimJoint1430);

HAnimJoint1412->addChildren(*HAnimJoint1421);

HAnimJoint1326->addChildren(*HAnimJoint1412);

CHAnimJoint* HAnimJoint1458 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1458->setName("r_middle0");
HAnimJoint1458->setDEF("hanim_r_middle0");
HAnimJoint1458->setCenter(new float[3]{-0.1987,0.8029,-0.053});
HAnimJoint1458->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1458->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1459 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1459->setName("r_middle_metacarpal");
HAnimSegment1459->setDEF("hanim_r_middle_metacarpal");
//<HAnimJoint name='r_middle0'/> visualization sphere within <HAnimSegment name='r_middle_metacarpal'/>
CTouchSensor* TouchSensor1460 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1460->setDescription("HAnimJoint r_middle0, HAnimSegment r_middle_metacarpal");
HAnimSegment1459->addChildren(*TouchSensor1460);

CTransform* Transform1461 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1461->setTranslation(new float[3]{-0.1987,0.8029,-0.053});
CShape* Shape1462 = (CShape *)(m_pScene.createNode("Shape"));
Shape1462->setUSE("HAnimJointShape");
Transform1461->addChildren(*Shape1462);

HAnimSegment1459->addChildren(*Transform1461);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle0'/> to <HAnimJoint name='r_middle1'/>
CShape* Shape1463 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1464 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1464->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1465 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1465->setPoint(new float[6]{-0.1987,0.8029,-0.053,-0.1987,0.7818,-0.053});
LineSet1464->setCoord(*Coordinate1465);

CColorRGBA* ColorRGBA1466 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1466->setUSE("HAnimSegmentLineColorRGBA");
LineSet1464->setColor(*ColorRGBA1466);

Shape1463->setGeometry(LineSet1464);

HAnimSegment1459->addChildren(*Shape1463);

HAnimJoint1458->addChildren(*HAnimSegment1459);

CHAnimJoint* HAnimJoint1467 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1467->setName("r_middle1");
HAnimJoint1467->setDEF("hanim_r_middle1");
HAnimJoint1467->setCenter(new float[3]{-0.1987,0.7818,-0.053});
HAnimJoint1467->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1467->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1468 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1468->setName("r_middle_proximal");
HAnimSegment1468->setDEF("hanim_r_middle_proximal");
//<HAnimJoint name='r_middle1'/> visualization sphere within <HAnimSegment name='r_middle_proximal'/>
CTouchSensor* TouchSensor1469 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1469->setDescription("HAnimJoint r_middle1, HAnimSegment r_middle_proximal");
HAnimSegment1468->addChildren(*TouchSensor1469);

CTransform* Transform1470 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1470->setTranslation(new float[3]{-0.1987,0.7818,-0.053});
CShape* Shape1471 = (CShape *)(m_pScene.createNode("Shape"));
Shape1471->setUSE("HAnimJointShape");
Transform1470->addChildren(*Shape1471);

HAnimSegment1468->addChildren(*Transform1470);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle1'/> to <HAnimJoint name='r_middle2'/>
CShape* Shape1472 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1473 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1473->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1474 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1474->setPoint(new float[6]{-0.1987,0.7818,-0.053,-0.2013,0.7273,-0.0503});
LineSet1473->setCoord(*Coordinate1474);

CColorRGBA* ColorRGBA1475 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1475->setUSE("HAnimSegmentLineColorRGBA");
LineSet1473->setColor(*ColorRGBA1475);

Shape1472->setGeometry(LineSet1473);

HAnimSegment1468->addChildren(*Shape1472);

HAnimJoint1467->addChildren(*HAnimSegment1468);

CHAnimJoint* HAnimJoint1476 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1476->setName("r_middle2");
HAnimJoint1476->setDEF("hanim_r_middle2");
HAnimJoint1476->setCenter(new float[3]{-0.2013,0.7273,-0.0503});
HAnimJoint1476->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1476->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1477 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1477->setName("r_middle_middle");
HAnimSegment1477->setDEF("hanim_r_middle_middle");
//<HAnimJoint name='r_middle2'/> visualization sphere within <HAnimSegment name='r_middle_middle'/>
CTouchSensor* TouchSensor1478 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1478->setDescription("HAnimJoint r_middle2, HAnimSegment r_middle_middle");
HAnimSegment1477->addChildren(*TouchSensor1478);

CTransform* Transform1479 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1479->setTranslation(new float[3]{-0.2013,0.7273,-0.0503});
CShape* Shape1480 = (CShape *)(m_pScene.createNode("Shape"));
Shape1480->setUSE("HAnimJointShape");
Transform1479->addChildren(*Shape1480);

HAnimSegment1477->addChildren(*Transform1479);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle2'/> to <HAnimJoint name='r_middle3'/>
CShape* Shape1481 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1482 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1482->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1483 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1483->setPoint(new float[6]{-0.2013,0.7273,-0.0503,-0.2026,0.7011,-0.0494});
LineSet1482->setCoord(*Coordinate1483);

CColorRGBA* ColorRGBA1484 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1484->setUSE("HAnimSegmentLineColorRGBA");
LineSet1482->setColor(*ColorRGBA1484);

Shape1481->setGeometry(LineSet1482);

HAnimSegment1477->addChildren(*Shape1481);

HAnimJoint1476->addChildren(*HAnimSegment1477);

CHAnimJoint* HAnimJoint1485 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1485->setName("r_middle3");
HAnimJoint1485->setDEF("hanim_r_middle3");
HAnimJoint1485->setCenter(new float[3]{-0.2026,0.7011,-0.0494});
HAnimJoint1485->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1485->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1486 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1486->setName("r_middle_distal");
HAnimSegment1486->setDEF("hanim_r_middle_distal");
//<HAnimJoint name='r_middle3'/> visualization sphere within <HAnimSegment name='r_middle_distal'/>
CTouchSensor* TouchSensor1487 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1487->setDescription("HAnimJoint r_middle3, HAnimSegment r_middle_distal");
HAnimSegment1486->addChildren(*TouchSensor1487);

CTransform* Transform1488 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1488->setTranslation(new float[3]{-0.2026,0.7011,-0.0494});
CShape* Shape1489 = (CShape *)(m_pScene.createNode("Shape"));
Shape1489->setUSE("HAnimJointShape");
Transform1488->addChildren(*Shape1489);

HAnimSegment1486->addChildren(*Transform1488);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_middle3'/> to <HAnimSite name='r_middle_distal_tip'/>
CShape* Shape1490 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1491 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1491->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1492 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1492->setPoint(new float[6]{-0.2026,0.7011,-0.0494,-0.1969,0.6758,-0.0427});
LineSet1491->setCoord(*Coordinate1492);

CColorRGBA* ColorRGBA1493 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1493->setUSE("HAnimSiteLineColorRGBA");
LineSet1491->setColor(*ColorRGBA1493);

Shape1490->setGeometry(LineSet1491);

HAnimSegment1486->addChildren(*Shape1490);

CHAnimSite* HAnimSite1494 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1494->setName("r_middle_distal_tip");
HAnimSite1494->setDEF("hanim_r_middle_distal_tip");
HAnimSite1494->setTranslation(new float[3]{-0.1969,0.6758,-0.0427});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1495 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1495->setDescription("HAnimSite r_middle_distal_tip");
HAnimSite1494->addChildren(*TouchSensor1495);

CShape* Shape1496 = (CShape *)(m_pScene.createNode("Shape"));
Shape1496->setUSE("HAnimSiteShape");
HAnimSite1494->addChildren(*Shape1496);

HAnimSegment1486->addChildren(*HAnimSite1494);

HAnimJoint1485->addChildren(*HAnimSegment1486);

HAnimJoint1476->addChildren(*HAnimJoint1485);

HAnimJoint1467->addChildren(*HAnimJoint1476);

HAnimJoint1458->addChildren(*HAnimJoint1467);

HAnimJoint1326->addChildren(*HAnimJoint1458);

CHAnimJoint* HAnimJoint1497 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1497->setName("r_ring0");
HAnimJoint1497->setDEF("hanim_r_ring0");
HAnimJoint1497->setCenter(new float[3]{-0.1956,0.8019,-0.0794});
HAnimJoint1497->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1497->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1498 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1498->setName("r_ring_metacarpal");
HAnimSegment1498->setDEF("hanim_r_ring_metacarpal");
//<HAnimJoint name='r_ring0'/> visualization sphere within <HAnimSegment name='r_ring_metacarpal'/>
CTouchSensor* TouchSensor1499 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1499->setDescription("HAnimJoint r_ring0, HAnimSegment r_ring_metacarpal");
HAnimSegment1498->addChildren(*TouchSensor1499);

CTransform* Transform1500 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1500->setTranslation(new float[3]{-0.1956,0.8019,-0.0794});
CShape* Shape1501 = (CShape *)(m_pScene.createNode("Shape"));
Shape1501->setUSE("HAnimJointShape");
Transform1500->addChildren(*Shape1501);

HAnimSegment1498->addChildren(*Transform1500);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring0'/> to <HAnimJoint name='r_ring1'/>
CShape* Shape1502 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1503 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1503->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1504 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1504->setPoint(new float[6]{-0.1956,0.8019,-0.0794,-0.1956,0.7815,-0.0794});
LineSet1503->setCoord(*Coordinate1504);

CColorRGBA* ColorRGBA1505 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1505->setUSE("HAnimSegmentLineColorRGBA");
LineSet1503->setColor(*ColorRGBA1505);

Shape1502->setGeometry(LineSet1503);

HAnimSegment1498->addChildren(*Shape1502);

HAnimJoint1497->addChildren(*HAnimSegment1498);

CHAnimJoint* HAnimJoint1506 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1506->setName("r_ring1");
HAnimJoint1506->setDEF("hanim_r_ring1");
HAnimJoint1506->setCenter(new float[3]{-0.1956,0.7815,-0.0794});
HAnimJoint1506->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1506->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1507 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1507->setName("r_ring_proximal");
HAnimSegment1507->setDEF("hanim_r_ring_proximal");
//<HAnimJoint name='r_ring1'/> visualization sphere within <HAnimSegment name='r_ring_proximal'/>
CTouchSensor* TouchSensor1508 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1508->setDescription("HAnimJoint r_ring1, HAnimSegment r_ring_proximal");
HAnimSegment1507->addChildren(*TouchSensor1508);

CTransform* Transform1509 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1509->setTranslation(new float[3]{-0.1956,0.7815,-0.0794});
CShape* Shape1510 = (CShape *)(m_pScene.createNode("Shape"));
Shape1510->setUSE("HAnimJointShape");
Transform1509->addChildren(*Shape1510);

HAnimSegment1507->addChildren(*Transform1509);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring1'/> to <HAnimJoint name='r_ring2'/>
CShape* Shape1511 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1512 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1512->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1513 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1513->setPoint(new float[6]{-0.1956,0.7815,-0.0794,-0.1973,0.7287,-0.0777});
LineSet1512->setCoord(*Coordinate1513);

CColorRGBA* ColorRGBA1514 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1514->setUSE("HAnimSegmentLineColorRGBA");
LineSet1512->setColor(*ColorRGBA1514);

Shape1511->setGeometry(LineSet1512);

HAnimSegment1507->addChildren(*Shape1511);

HAnimJoint1506->addChildren(*HAnimSegment1507);

CHAnimJoint* HAnimJoint1515 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1515->setName("r_ring2");
HAnimJoint1515->setDEF("hanim_r_ring2");
HAnimJoint1515->setCenter(new float[3]{-0.1973,0.7287,-0.0777});
HAnimJoint1515->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1515->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1516 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1516->setName("r_ring_middle");
HAnimSegment1516->setDEF("hanim_r_ring_middle");
//<HAnimJoint name='r_ring2'/> visualization sphere within <HAnimSegment name='r_ring_middle'/>
CTouchSensor* TouchSensor1517 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1517->setDescription("HAnimJoint r_ring2, HAnimSegment r_ring_middle");
HAnimSegment1516->addChildren(*TouchSensor1517);

CTransform* Transform1518 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1518->setTranslation(new float[3]{-0.1973,0.7287,-0.0777});
CShape* Shape1519 = (CShape *)(m_pScene.createNode("Shape"));
Shape1519->setUSE("HAnimJointShape");
Transform1518->addChildren(*Shape1519);

HAnimSegment1516->addChildren(*Transform1518);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring2'/> to <HAnimJoint name='r_ring3'/>
CShape* Shape1520 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1521 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1521->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1522 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1522->setPoint(new float[6]{-0.1973,0.7287,-0.0777,-0.1983,0.7045,-0.0767});
LineSet1521->setCoord(*Coordinate1522);

CColorRGBA* ColorRGBA1523 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1523->setUSE("HAnimSegmentLineColorRGBA");
LineSet1521->setColor(*ColorRGBA1523);

Shape1520->setGeometry(LineSet1521);

HAnimSegment1516->addChildren(*Shape1520);

HAnimJoint1515->addChildren(*HAnimSegment1516);

CHAnimJoint* HAnimJoint1524 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1524->setName("r_ring3");
HAnimJoint1524->setDEF("hanim_r_ring3");
HAnimJoint1524->setCenter(new float[3]{-0.1983,0.7045,-0.0767});
HAnimJoint1524->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1524->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1525 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1525->setName("r_ring_distal");
HAnimSegment1525->setDEF("hanim_r_ring_distal");
//<HAnimJoint name='r_ring3'/> visualization sphere within <HAnimSegment name='r_ring_distal'/>
CTouchSensor* TouchSensor1526 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1526->setDescription("HAnimJoint r_ring3, HAnimSegment r_ring_distal");
HAnimSegment1525->addChildren(*TouchSensor1526);

CTransform* Transform1527 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1527->setTranslation(new float[3]{-0.1983,0.7045,-0.0767});
CShape* Shape1528 = (CShape *)(m_pScene.createNode("Shape"));
Shape1528->setUSE("HAnimJointShape");
Transform1527->addChildren(*Shape1528);

HAnimSegment1525->addChildren(*Transform1527);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ring3'/> to <HAnimSite name='r_ring_distal_tip'/>
CShape* Shape1529 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1530 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1530->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1531 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1531->setPoint(new float[6]{-0.1983,0.7045,-0.0767,-0.1934,0.6778,-0.0693});
LineSet1530->setCoord(*Coordinate1531);

CColorRGBA* ColorRGBA1532 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1532->setUSE("HAnimSiteLineColorRGBA");
LineSet1530->setColor(*ColorRGBA1532);

Shape1529->setGeometry(LineSet1530);

HAnimSegment1525->addChildren(*Shape1529);

CHAnimSite* HAnimSite1533 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1533->setName("r_ring_distal_tip");
HAnimSite1533->setDEF("hanim_r_ring_distal_tip");
HAnimSite1533->setTranslation(new float[3]{-0.1934,0.6778,-0.0693});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1534 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1534->setDescription("HAnimSite r_ring_distal_tip");
HAnimSite1533->addChildren(*TouchSensor1534);

CShape* Shape1535 = (CShape *)(m_pScene.createNode("Shape"));
Shape1535->setUSE("HAnimSiteShape");
HAnimSite1533->addChildren(*Shape1535);

HAnimSegment1525->addChildren(*HAnimSite1533);

HAnimJoint1524->addChildren(*HAnimSegment1525);

HAnimJoint1515->addChildren(*HAnimJoint1524);

HAnimJoint1506->addChildren(*HAnimJoint1515);

HAnimJoint1497->addChildren(*HAnimJoint1506);

HAnimJoint1326->addChildren(*HAnimJoint1497);

CHAnimJoint* HAnimJoint1536 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1536->setName("r_pinky0");
HAnimJoint1536->setDEF("hanim_r_pinky0");
HAnimJoint1536->setCenter(new float[3]{-0.1925,0.8066,-0.1036});
HAnimJoint1536->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1536->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1537 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1537->setName("r_pinky_metacarpal");
HAnimSegment1537->setDEF("hanim_r_pinky_metacarpal");
//<HAnimJoint name='r_pinky0'/> visualization sphere within <HAnimSegment name='r_pinky_metacarpal'/>
CTouchSensor* TouchSensor1538 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1538->setDescription("HAnimJoint r_pinky0, HAnimSegment r_pinky_metacarpal");
HAnimSegment1537->addChildren(*TouchSensor1538);

CTransform* Transform1539 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1539->setTranslation(new float[3]{-0.1925,0.8066,-0.1036});
CShape* Shape1540 = (CShape *)(m_pScene.createNode("Shape"));
Shape1540->setUSE("HAnimJointShape");
Transform1539->addChildren(*Shape1540);

HAnimSegment1537->addChildren(*Transform1539);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky0'/> to <HAnimJoint name='r_pinky1'/>
CShape* Shape1541 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1542 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1542->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1543 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1543->setPoint(new float[6]{-0.1925,0.8066,-0.1036,-0.1925,0.7866,-0.1036});
LineSet1542->setCoord(*Coordinate1543);

CColorRGBA* ColorRGBA1544 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1544->setUSE("HAnimSegmentLineColorRGBA");
LineSet1542->setColor(*ColorRGBA1544);

Shape1541->setGeometry(LineSet1542);

HAnimSegment1537->addChildren(*Shape1541);

HAnimJoint1536->addChildren(*HAnimSegment1537);

CHAnimJoint* HAnimJoint1545 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1545->setName("r_pinky1");
HAnimJoint1545->setDEF("hanim_r_pinky1");
HAnimJoint1545->setCenter(new float[3]{-0.1925,0.7866,-0.1036});
HAnimJoint1545->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1545->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1546 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1546->setName("r_pinky_proximal");
HAnimSegment1546->setDEF("hanim_r_pinky_proximal");
//<HAnimJoint name='r_pinky1'/> visualization sphere within <HAnimSegment name='r_pinky_proximal'/>
CTouchSensor* TouchSensor1547 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1547->setDescription("HAnimJoint r_pinky1, HAnimSegment r_pinky_proximal");
HAnimSegment1546->addChildren(*TouchSensor1547);

CTransform* Transform1548 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1548->setTranslation(new float[3]{-0.1925,0.7866,-0.1036});
CShape* Shape1549 = (CShape *)(m_pScene.createNode("Shape"));
Shape1549->setUSE("HAnimJointShape");
Transform1548->addChildren(*Shape1549);

HAnimSegment1546->addChildren(*Transform1548);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky1'/> to <HAnimJoint name='r_pinky2'/>
CShape* Shape1550 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1551 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1551->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1552 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1552->setPoint(new float[6]{-0.1925,0.7866,-0.1036,-0.1938,0.7452,-0.1024});
LineSet1551->setCoord(*Coordinate1552);

CColorRGBA* ColorRGBA1553 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1553->setUSE("HAnimSegmentLineColorRGBA");
LineSet1551->setColor(*ColorRGBA1553);

Shape1550->setGeometry(LineSet1551);

HAnimSegment1546->addChildren(*Shape1550);

HAnimJoint1545->addChildren(*HAnimSegment1546);

CHAnimJoint* HAnimJoint1554 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1554->setName("r_pinky2");
HAnimJoint1554->setDEF("hanim_r_pinky2");
HAnimJoint1554->setCenter(new float[3]{-0.1938,0.7452,-0.1024});
HAnimJoint1554->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1554->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1555 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1555->setName("r_pinky_middle");
HAnimSegment1555->setDEF("hanim_r_pinky_middle");
//<HAnimJoint name='r_pinky2'/> visualization sphere within <HAnimSegment name='r_pinky_middle'/>
CTouchSensor* TouchSensor1556 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1556->setDescription("HAnimJoint r_pinky2, HAnimSegment r_pinky_middle");
HAnimSegment1555->addChildren(*TouchSensor1556);

CTransform* Transform1557 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1557->setTranslation(new float[3]{-0.1938,0.7452,-0.1024});
CShape* Shape1558 = (CShape *)(m_pScene.createNode("Shape"));
Shape1558->setUSE("HAnimJointShape");
Transform1557->addChildren(*Shape1558);

HAnimSegment1555->addChildren(*Transform1557);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky2'/> to <HAnimJoint name='r_pinky3'/>
CShape* Shape1559 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1560 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1560->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1561 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1561->setPoint(new float[6]{-0.1938,0.7452,-0.1024,-0.1948,0.7277,-0.1017});
LineSet1560->setCoord(*Coordinate1561);

CColorRGBA* ColorRGBA1562 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1562->setUSE("HAnimSegmentLineColorRGBA");
LineSet1560->setColor(*ColorRGBA1562);

Shape1559->setGeometry(LineSet1560);

HAnimSegment1555->addChildren(*Shape1559);

HAnimJoint1554->addChildren(*HAnimSegment1555);

CHAnimJoint* HAnimJoint1563 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1563->setName("r_pinky3");
HAnimJoint1563->setDEF("hanim_r_pinky3");
HAnimJoint1563->setCenter(new float[3]{-0.1948,0.7277,-0.1017});
HAnimJoint1563->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1563->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1564 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1564->setName("r_pinky_distal");
HAnimSegment1564->setDEF("hanim_r_pinky_distal");
//<HAnimJoint name='r_pinky3'/> visualization sphere within <HAnimSegment name='r_pinky_distal'/>
CTouchSensor* TouchSensor1565 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1565->setDescription("HAnimJoint r_pinky3, HAnimSegment r_pinky_distal");
HAnimSegment1564->addChildren(*TouchSensor1565);

CTransform* Transform1566 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1566->setTranslation(new float[3]{-0.1948,0.7277,-0.1017});
CShape* Shape1567 = (CShape *)(m_pScene.createNode("Shape"));
Shape1567->setUSE("HAnimJointShape");
Transform1566->addChildren(*Shape1567);

HAnimSegment1564->addChildren(*Transform1566);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_pinky3'/> to <HAnimSite name='r_pinky_distal_tip'/>
CShape* Shape1568 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1569 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1569->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1570 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1570->setPoint(new float[6]{-0.1948,0.7277,-0.1017,-0.1938,0.7035,-0.0949});
LineSet1569->setCoord(*Coordinate1570);

CColorRGBA* ColorRGBA1571 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1571->setUSE("HAnimSiteLineColorRGBA");
LineSet1569->setColor(*ColorRGBA1571);

Shape1568->setGeometry(LineSet1569);

HAnimSegment1564->addChildren(*Shape1568);

CHAnimSite* HAnimSite1572 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1572->setName("r_pinky_distal_tip");
HAnimSite1572->setDEF("hanim_r_pinky_distal_tip");
HAnimSite1572->setTranslation(new float[3]{-0.1938,0.7035,-0.0949});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1573 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1573->setDescription("HAnimSite r_pinky_distal_tip");
HAnimSite1572->addChildren(*TouchSensor1573);

CShape* Shape1574 = (CShape *)(m_pScene.createNode("Shape"));
Shape1574->setUSE("HAnimSiteShape");
HAnimSite1572->addChildren(*Shape1574);

HAnimSegment1564->addChildren(*HAnimSite1572);

HAnimJoint1563->addChildren(*HAnimSegment1564);

HAnimJoint1554->addChildren(*HAnimJoint1563);

HAnimJoint1545->addChildren(*HAnimJoint1554);

HAnimJoint1536->addChildren(*HAnimJoint1545);

HAnimJoint1326->addChildren(*HAnimJoint1536);

HAnimJoint1289->addChildren(*HAnimJoint1326);

HAnimJoint1273->addChildren(*HAnimJoint1289);

HAnimJoint1264->addChildren(*HAnimJoint1273);

HAnimJoint1227->addChildren(*HAnimJoint1264);

HAnimJoint595->addChildren(*HAnimJoint1227);

HAnimJoint586->addChildren(*HAnimJoint595);

HAnimJoint577->addChildren(*HAnimJoint586);

HAnimJoint568->addChildren(*HAnimJoint577);

HAnimJoint559->addChildren(*HAnimJoint568);

HAnimJoint550->addChildren(*HAnimJoint559);

HAnimJoint541->addChildren(*HAnimJoint550);

HAnimJoint532->addChildren(*HAnimJoint541);

HAnimJoint509->addChildren(*HAnimJoint532);

HAnimJoint493->addChildren(*HAnimJoint509);

HAnimJoint484->addChildren(*HAnimJoint493);

HAnimJoint475->addChildren(*HAnimJoint484);

HAnimJoint466->addChildren(*HAnimJoint475);

HAnimJoint436->addChildren(*HAnimJoint466);

HAnimJoint427->addChildren(*HAnimJoint436);

HAnimJoint418->addChildren(*HAnimJoint427);

HAnimJoint395->addChildren(*HAnimJoint418);

HAnimJoint45->addChildren(*HAnimJoint395);

HAnimHumanoid44->setSkeleton(*HAnimJoint45);

//USE nodes for inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes for viewing the humanoid without being affected by body motion
CHAnimSite* HAnimSite1575 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1575->setName("l_inclined_view");
HAnimSite1575->setDEF("hanim_l_inclined_view");
HAnimSite1575->setRotation(new float[4]{-0.113,0.993,0.0347,0.671});
HAnimSite1575->setTranslation(new float[3]{1.62,1.05,2.06});
CViewpoint* Viewpoint1576 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1576->setDEF("hanim_l_inclined_viewpoint");
Viewpoint1576->setDescription("left inclined");
Viewpoint1576->setPosition(new float[3]{0,0,0});
HAnimSite1575->addChildren(*Viewpoint1576);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1577 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1577->setDescription("HAnimSite Viewpoint hanim_l_inclined_view");
Anchor1577->setUrl(new CString[1]{"#hanim_l_inclined_viewpoint"}, 1);
CLOD* LOD1578 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1578->setForceTransitions(True);
LOD1578->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo1579 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1579->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1578->addChildren(*WorldInfo1579);

CShape* Shape1580 = (CShape *)(m_pScene.createNode("Shape"));
Shape1580->setUSE("HAnimSiteViewpointShape");
LOD1578->addChildren(*Shape1580);

Anchor1577->addChildren(*LOD1578);

HAnimSite1575->addChildren(*Anchor1577);

HAnimHumanoid44->addViewpoints(*HAnimSite1575);

CHAnimSite* HAnimSite1581 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1581->setName("r_inclined_view");
HAnimSite1581->setDEF("hanim_r_inclined_view");
HAnimSite1581->setRotation(new float[4]{-0.113,-0.993,0.0347,0.671});
HAnimSite1581->setTranslation(new float[3]{-1.62,1.05,2.06});
CViewpoint* Viewpoint1582 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1582->setDEF("hanim_r_inclined_viewpoint");
Viewpoint1582->setCenterOfRotation(new float[3]{0,0.9,0});
Viewpoint1582->setDescription("right inclined");
Viewpoint1582->setPosition(new float[3]{0,0,0});
HAnimSite1581->addChildren(*Viewpoint1582);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1583 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1583->setDescription("HAnimSite Viewpoint hanim_r_inclined_view");
Anchor1583->setUrl(new CString[1]{"#hanim_r_inclined_viewpoint"}, 1);
CLOD* LOD1584 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1584->setForceTransitions(True);
LOD1584->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo1585 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1585->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1584->addChildren(*WorldInfo1585);

CShape* Shape1586 = (CShape *)(m_pScene.createNode("Shape"));
Shape1586->setUSE("HAnimSiteViewpointShape");
LOD1584->addChildren(*Shape1586);

Anchor1583->addChildren(*LOD1584);

HAnimSite1581->addChildren(*Anchor1583);

HAnimHumanoid44->addViewpoints(*HAnimSite1581);

CHAnimSite* HAnimSite1587 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1587->setName("front_view");
HAnimSite1587->setDEF("hanim_front_view");
HAnimSite1587->setTranslation(new float[3]{0,0.85,2.58});
CViewpoint* Viewpoint1588 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1588->setDEF("hanim_front_viewpoint");
Viewpoint1588->setCenterOfRotation(new float[3]{0,0.9,0});
Viewpoint1588->setDescription("front");
Viewpoint1588->setPosition(new float[3]{0,0,0});
HAnimSite1587->addChildren(*Viewpoint1588);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1589 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1589->setDescription("HAnimSite Viewpoint hanim_front_view");
Anchor1589->setUrl(new CString[1]{"#hanim_front_viewpoint"}, 1);
CLOD* LOD1590 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1590->setForceTransitions(True);
LOD1590->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo1591 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1591->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1590->addChildren(*WorldInfo1591);

CShape* Shape1592 = (CShape *)(m_pScene.createNode("Shape"));
Shape1592->setUSE("HAnimSiteViewpointShape");
LOD1590->addChildren(*Shape1592);

Anchor1589->addChildren(*LOD1590);

HAnimSite1587->addChildren(*Anchor1589);

HAnimHumanoid44->addViewpoints(*HAnimSite1587);

CHAnimSite* HAnimSite1593 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1593->setName("back_view");
HAnimSite1593->setDEF("hanim_back_view");
HAnimSite1593->setRotation(new float[4]{0,1,0,3.14});
HAnimSite1593->setTranslation(new float[3]{0,0.85,-2.58});
CViewpoint* Viewpoint1594 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1594->setDEF("hanim_back_viewpoint");
Viewpoint1594->setCenterOfRotation(new float[3]{0,0.9,0});
Viewpoint1594->setDescription("back");
Viewpoint1594->setPosition(new float[3]{0,0,0});
HAnimSite1593->addChildren(*Viewpoint1594);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1595 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1595->setDescription("HAnimSite Viewpoint hanim_back_view");
Anchor1595->setUrl(new CString[1]{"#hanim_back_viewpoint"}, 1);
CLOD* LOD1596 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1596->setForceTransitions(True);
LOD1596->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo1597 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1597->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1596->addChildren(*WorldInfo1597);

CShape* Shape1598 = (CShape *)(m_pScene.createNode("Shape"));
Shape1598->setUSE("HAnimSiteViewpointShape");
LOD1596->addChildren(*Shape1598);

Anchor1595->addChildren(*LOD1596);

HAnimSite1593->addChildren(*Anchor1595);

HAnimHumanoid44->addViewpoints(*HAnimSite1593);

CHAnimSite* HAnimSite1599 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1599->setName("l_side_view");
HAnimSite1599->setDEF("hanim_l_side_view");
HAnimSite1599->setRotation(new float[4]{0,1,0,1.5708});
HAnimSite1599->setTranslation(new float[3]{2.6,0.854,0});
CViewpoint* Viewpoint1600 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1600->setDEF("hanim_l_side_viewpoint");
Viewpoint1600->setCenterOfRotation(new float[3]{0,0.9,0});
Viewpoint1600->setDescription("left side");
Viewpoint1600->setPosition(new float[3]{0,0,0});
HAnimSite1599->addChildren(*Viewpoint1600);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1601 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1601->setDescription("HAnimSite Viewpoint hanim_l_side_view");
Anchor1601->setUrl(new CString[1]{"#hanim_l_side_viewpoint"}, 1);
CLOD* LOD1602 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1602->setForceTransitions(True);
LOD1602->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo1603 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1603->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1602->addChildren(*WorldInfo1603);

CShape* Shape1604 = (CShape *)(m_pScene.createNode("Shape"));
Shape1604->setUSE("HAnimSiteViewpointShape");
LOD1602->addChildren(*Shape1604);

Anchor1601->addChildren(*LOD1602);

HAnimSite1599->addChildren(*Anchor1601);

HAnimHumanoid44->addViewpoints(*HAnimSite1599);

CHAnimSite* HAnimSite1605 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1605->setName("Top_view");
HAnimSite1605->setDEF("hanim_Top_view");
HAnimSite1605->setRotation(new float[4]{1,0,0,-1.57});
HAnimSite1605->setTranslation(new float[3]{0,3.5,0});
CViewpoint* Viewpoint1606 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1606->setDEF("hanim_Top_viewpoint");
Viewpoint1606->setCenterOfRotation(new float[3]{0,0.9,0});
Viewpoint1606->setDescription("Top");
Viewpoint1606->setPosition(new float[3]{0,0,0});
HAnimSite1605->addChildren(*Viewpoint1606);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1607 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1607->setDescription("HAnimSite Viewpoint hanim_Top_view");
Anchor1607->setUrl(new CString[1]{"#hanim_Top_viewpoint"}, 1);
CLOD* LOD1608 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1608->setForceTransitions(True);
LOD1608->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo1609 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1609->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1608->addChildren(*WorldInfo1609);

CShape* Shape1610 = (CShape *)(m_pScene.createNode("Shape"));
Shape1610->setUSE("HAnimSiteViewpointShape");
LOD1608->addChildren(*Shape1610);

Anchor1607->addChildren(*LOD1608);

HAnimSite1605->addChildren(*Anchor1607);

HAnimHumanoid44->addViewpoints(*HAnimSite1605);

CHAnimSite* HAnimSite1611 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1611->setName("front_close_view");
HAnimSite1611->setDEF("hanim_front_close_view");
HAnimSite1611->setTranslation(new float[3]{0,0.854,1.575});
CViewpoint* Viewpoint1612 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1612->setDEF("hanim_front_close_viewpoint");
Viewpoint1612->setCenterOfRotation(new float[3]{0,0,1.575});
Viewpoint1612->setDescription("front close");
Viewpoint1612->setPosition(new float[3]{0,0,0});
HAnimSite1611->addChildren(*Viewpoint1612);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1613 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1613->setDescription("HAnimSite Viewpoint hanim_front_close_view");
Anchor1613->setUrl(new CString[1]{"#hanim_front_close_viewpoint"}, 1);
CLOD* LOD1614 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1614->setForceTransitions(True);
LOD1614->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo1615 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1615->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1614->addChildren(*WorldInfo1615);

CShape* Shape1616 = (CShape *)(m_pScene.createNode("Shape"));
Shape1616->setUSE("HAnimSiteViewpointShape");
LOD1614->addChildren(*Shape1616);

Anchor1613->addChildren(*LOD1614);

HAnimSite1611->addChildren(*Anchor1613);

HAnimHumanoid44->addViewpoints(*HAnimSite1611);

CHAnimSite* HAnimSite1617 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1617->setName("side_close_view");
HAnimSite1617->setDEF("hanim_side_close_view");
HAnimSite1617->setRotation(new float[4]{0,1,0,1.5708});
HAnimSite1617->setTranslation(new float[3]{1.56,0.854,0});
CViewpoint* Viewpoint1618 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1618->setDEF("hanim_side_close_viewpoint");
Viewpoint1618->setCenterOfRotation(new float[3]{1.6,0,0});
Viewpoint1618->setDescription("side close");
Viewpoint1618->setPosition(new float[3]{0,0,0});
HAnimSite1617->addChildren(*Viewpoint1618);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1619 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1619->setDescription("HAnimSite Viewpoint hanim_side_close_view");
Anchor1619->setUrl(new CString[1]{"#hanim_side_close_viewpoint"}, 1);
CLOD* LOD1620 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1620->setForceTransitions(True);
LOD1620->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo1621 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1621->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1620->addChildren(*WorldInfo1621);

CShape* Shape1622 = (CShape *)(m_pScene.createNode("Shape"));
Shape1622->setUSE("HAnimSiteViewpointShape");
LOD1620->addChildren(*Shape1622);

Anchor1619->addChildren(*LOD1620);

HAnimSite1617->addChildren(*Anchor1619);

HAnimHumanoid44->addViewpoints(*HAnimSite1617);

CHAnimSite* HAnimSite1623 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1623->setName("head_front_close_view");
HAnimSite1623->setDEF("hanim_head_front_close_view");
HAnimSite1623->setTranslation(new float[3]{0,1.5,1});
CViewpoint* Viewpoint1624 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1624->setDEF("hanim_head_front_close_viewpoint");
Viewpoint1624->setCenterOfRotation(new float[3]{0,0,1});
Viewpoint1624->setDescription("head front close");
Viewpoint1624->setPosition(new float[3]{0,0,0});
HAnimSite1623->addChildren(*Viewpoint1624);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1625 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1625->setDescription("HAnimSite Viewpoint hanim_head_front_close_view");
Anchor1625->setUrl(new CString[1]{"#hanim_head_front_close_viewpoint"}, 1);
CLOD* LOD1626 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1626->setForceTransitions(True);
LOD1626->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo1627 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1627->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1626->addChildren(*WorldInfo1627);

CShape* Shape1628 = (CShape *)(m_pScene.createNode("Shape"));
Shape1628->setUSE("HAnimSiteViewpointShape");
LOD1626->addChildren(*Shape1628);

Anchor1625->addChildren(*LOD1626);

HAnimSite1623->addChildren(*Anchor1625);

HAnimHumanoid44->addViewpoints(*HAnimSite1623);

CHAnimSite* HAnimSite1629 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1629->setName("chest_front_close_view");
HAnimSite1629->setDEF("hanim_chest_front_close_view");
HAnimSite1629->setTranslation(new float[3]{0,1.2,1});
CViewpoint* Viewpoint1630 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1630->setDEF("hanim_chest_front_close_viewpoint");
Viewpoint1630->setCenterOfRotation(new float[3]{0,0,1});
Viewpoint1630->setDescription("chest front close");
Viewpoint1630->setPosition(new float[3]{0,0,0});
HAnimSite1629->addChildren(*Viewpoint1630);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1631 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1631->setDescription("HAnimSite Viewpoint hanim_chest_front_close_view");
Anchor1631->setUrl(new CString[1]{"#hanim_chest_front_close_viewpoint"}, 1);
CLOD* LOD1632 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1632->setForceTransitions(True);
LOD1632->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo1633 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1633->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1632->addChildren(*WorldInfo1633);

CShape* Shape1634 = (CShape *)(m_pScene.createNode("Shape"));
Shape1634->setUSE("HAnimSiteViewpointShape");
LOD1632->addChildren(*Shape1634);

Anchor1631->addChildren(*LOD1632);

HAnimSite1629->addChildren(*Anchor1631);

HAnimHumanoid44->addViewpoints(*HAnimSite1629);

CHAnimSite* HAnimSite1635 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1635->setName("pelvis_front_close_view");
HAnimSite1635->setDEF("hanim_pelvis_front_close_view");
HAnimSite1635->setTranslation(new float[3]{0,0.8,1});
CViewpoint* Viewpoint1636 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1636->setDEF("hanim_pelvis_front_close_viewpoint");
Viewpoint1636->setCenterOfRotation(new float[3]{0,0,1});
Viewpoint1636->setDescription("pelvis front close");
Viewpoint1636->setPosition(new float[3]{0,0,0});
HAnimSite1635->addChildren(*Viewpoint1636);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1637 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1637->setDescription("HAnimSite Viewpoint hanim_pelvis_front_close_view");
Anchor1637->setUrl(new CString[1]{"#hanim_pelvis_front_close_viewpoint"}, 1);
CLOD* LOD1638 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1638->setForceTransitions(True);
LOD1638->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo1639 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1639->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1638->addChildren(*WorldInfo1639);

CShape* Shape1640 = (CShape *)(m_pScene.createNode("Shape"));
Shape1640->setUSE("HAnimSiteViewpointShape");
LOD1638->addChildren(*Shape1640);

Anchor1637->addChildren(*LOD1638);

HAnimSite1635->addChildren(*Anchor1637);

HAnimHumanoid44->addViewpoints(*HAnimSite1635);

CHAnimSite* HAnimSite1641 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1641->setName("knees_front_close_view");
HAnimSite1641->setDEF("hanim_knees_front_close_view");
HAnimSite1641->setTranslation(new float[3]{0,0.4,1});
CViewpoint* Viewpoint1642 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1642->setDEF("hanim_knees_front_close_viewpoint");
Viewpoint1642->setCenterOfRotation(new float[3]{0,0.4,0});
Viewpoint1642->setDescription("knees front close");
Viewpoint1642->setPosition(new float[3]{0,0,0});
HAnimSite1641->addChildren(*Viewpoint1642);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1643 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1643->setDescription("HAnimSite Viewpoint hanim_knees_front_close_view");
Anchor1643->setUrl(new CString[1]{"#hanim_knees_front_close_viewpoint"}, 1);
CLOD* LOD1644 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1644->setForceTransitions(True);
LOD1644->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo1645 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1645->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1644->addChildren(*WorldInfo1645);

CShape* Shape1646 = (CShape *)(m_pScene.createNode("Shape"));
Shape1646->setUSE("HAnimSiteViewpointShape");
LOD1644->addChildren(*Shape1646);

Anchor1643->addChildren(*LOD1644);

HAnimSite1641->addChildren(*Anchor1643);

HAnimHumanoid44->addViewpoints(*HAnimSite1641);

CHAnimSite* HAnimSite1647 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1647->setName("feet_front_close_view");
HAnimSite1647->setDEF("hanim_feet_front_close_view");
HAnimSite1647->setTranslation(new float[3]{0,0,1});
CViewpoint* Viewpoint1648 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1648->setDEF("hanim_feet_front_close_viewpoint");
Viewpoint1648->setDescription("feet front close");
Viewpoint1648->setPosition(new float[3]{0,0,0});
HAnimSite1647->addChildren(*Viewpoint1648);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1649 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1649->setDescription("HAnimSite Viewpoint hanim_feet_front_close_view");
Anchor1649->setUrl(new CString[1]{"#hanim_feet_front_close_viewpoint"}, 1);
CLOD* LOD1650 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1650->setForceTransitions(True);
LOD1650->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo1651 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1651->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1650->addChildren(*WorldInfo1651);

CShape* Shape1652 = (CShape *)(m_pScene.createNode("Shape"));
Shape1652->setUSE("HAnimSiteViewpointShape");
LOD1650->addChildren(*Shape1652);

Anchor1649->addChildren(*LOD1650);

HAnimSite1647->addChildren(*Anchor1649);

HAnimHumanoid44->addViewpoints(*HAnimSite1647);

CHAnimSite* HAnimSite1653 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1653->setName("eye_level_view");
HAnimSite1653->setDEF("hanim_eye_level_view");
HAnimSite1653->setTranslation(new float[3]{0,1.6332,0.0502});
CViewpoint* Viewpoint1654 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1654->setDEF("hanim_eye_level_viewpoint");
Viewpoint1654->setDescription("eye level looking forward");
Viewpoint1654->setOrientation(new float[4]{0,1,0,3.141593});
Viewpoint1654->setPosition(new float[3]{0,0,0});
HAnimSite1653->addChildren(*Viewpoint1654);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1655 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1655->setDescription("HAnimSite Viewpoint hanim_eye_level_view");
Anchor1655->setUrl(new CString[1]{"#hanim_eye_level_viewpoint"}, 1);
CLOD* LOD1656 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1656->setForceTransitions(True);
LOD1656->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo1657 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1657->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1656->addChildren(*WorldInfo1657);

CShape* Shape1658 = (CShape *)(m_pScene.createNode("Shape"));
Shape1658->setUSE("HAnimSiteViewpointShape");
LOD1656->addChildren(*Shape1658);

Anchor1655->addChildren(*LOD1656);

HAnimSite1653->addChildren(*Anchor1655);

HAnimHumanoid44->addViewpoints(*HAnimSite1653);

CHAnimSite* HAnimSite1659 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1659->setUSE("hanim_l_eyeball_site_view");
HAnimHumanoid44->setSites(*HAnimSite1659);

CHAnimSite* HAnimSite1660 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1660->setUSE("hanim_r_eyeball_site_view");
HAnimHumanoid44->setSites(*HAnimSite1660);

CHAnimSite* HAnimSite1661 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1661->setUSE("hanim_l_hand_front_view");
HAnimHumanoid44->setSites(*HAnimSite1661);

CHAnimSite* HAnimSite1662 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1662->setUSE("hanim_r_hand_front_view");
HAnimHumanoid44->setSites(*HAnimSite1662);

CHAnimJoint* HAnimJoint1663 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1663->setUSE("hanim_humanoid_root");
HAnimHumanoid44->addJoints(*HAnimJoint1663);

CHAnimJoint* HAnimJoint1664 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1664->setUSE("hanim_sacroiliac");
HAnimHumanoid44->addJoints(*HAnimJoint1664);

CHAnimJoint* HAnimJoint1665 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1665->setUSE("hanim_vl5");
HAnimHumanoid44->addJoints(*HAnimJoint1665);

CHAnimJoint* HAnimJoint1666 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1666->setUSE("hanim_vl4");
HAnimHumanoid44->addJoints(*HAnimJoint1666);

CHAnimJoint* HAnimJoint1667 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1667->setUSE("hanim_vl3");
HAnimHumanoid44->addJoints(*HAnimJoint1667);

CHAnimJoint* HAnimJoint1668 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1668->setUSE("hanim_vl2");
HAnimHumanoid44->addJoints(*HAnimJoint1668);

CHAnimJoint* HAnimJoint1669 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1669->setUSE("hanim_vl1");
HAnimHumanoid44->addJoints(*HAnimJoint1669);

CHAnimJoint* HAnimJoint1670 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1670->setUSE("hanim_vt12");
HAnimHumanoid44->addJoints(*HAnimJoint1670);

CHAnimJoint* HAnimJoint1671 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1671->setUSE("hanim_vt11");
HAnimHumanoid44->addJoints(*HAnimJoint1671);

CHAnimJoint* HAnimJoint1672 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1672->setUSE("hanim_vt10");
HAnimHumanoid44->addJoints(*HAnimJoint1672);

CHAnimJoint* HAnimJoint1673 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1673->setUSE("hanim_vt9");
HAnimHumanoid44->addJoints(*HAnimJoint1673);

CHAnimJoint* HAnimJoint1674 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1674->setUSE("hanim_vt8");
HAnimHumanoid44->addJoints(*HAnimJoint1674);

CHAnimJoint* HAnimJoint1675 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1675->setUSE("hanim_vt7");
HAnimHumanoid44->addJoints(*HAnimJoint1675);

CHAnimJoint* HAnimJoint1676 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1676->setUSE("hanim_vt6");
HAnimHumanoid44->addJoints(*HAnimJoint1676);

CHAnimJoint* HAnimJoint1677 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1677->setUSE("hanim_vt5");
HAnimHumanoid44->addJoints(*HAnimJoint1677);

CHAnimJoint* HAnimJoint1678 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1678->setUSE("hanim_vt4");
HAnimHumanoid44->addJoints(*HAnimJoint1678);

CHAnimJoint* HAnimJoint1679 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1679->setUSE("hanim_vt3");
HAnimHumanoid44->addJoints(*HAnimJoint1679);

CHAnimJoint* HAnimJoint1680 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1680->setUSE("hanim_vt2");
HAnimHumanoid44->addJoints(*HAnimJoint1680);

CHAnimJoint* HAnimJoint1681 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1681->setUSE("hanim_vt1");
HAnimHumanoid44->addJoints(*HAnimJoint1681);

CHAnimJoint* HAnimJoint1682 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1682->setUSE("hanim_vc7");
HAnimHumanoid44->addJoints(*HAnimJoint1682);

CHAnimJoint* HAnimJoint1683 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1683->setUSE("hanim_vc6");
HAnimHumanoid44->addJoints(*HAnimJoint1683);

CHAnimJoint* HAnimJoint1684 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1684->setUSE("hanim_vc5");
HAnimHumanoid44->addJoints(*HAnimJoint1684);

CHAnimJoint* HAnimJoint1685 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1685->setUSE("hanim_vc4");
HAnimHumanoid44->addJoints(*HAnimJoint1685);

CHAnimJoint* HAnimJoint1686 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1686->setUSE("hanim_vc3");
HAnimHumanoid44->addJoints(*HAnimJoint1686);

CHAnimJoint* HAnimJoint1687 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1687->setUSE("hanim_vc2");
HAnimHumanoid44->addJoints(*HAnimJoint1687);

CHAnimJoint* HAnimJoint1688 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1688->setUSE("hanim_vc1");
HAnimHumanoid44->addJoints(*HAnimJoint1688);

CHAnimJoint* HAnimJoint1689 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1689->setUSE("hanim_skullbase");
HAnimHumanoid44->addJoints(*HAnimJoint1689);

CHAnimJoint* HAnimJoint1690 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1690->setUSE("hanim_temporomandibular");
HAnimHumanoid44->addJoints(*HAnimJoint1690);

CHAnimJoint* HAnimJoint1691 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1691->setUSE("hanim_l_acromioclavicular");
HAnimHumanoid44->addJoints(*HAnimJoint1691);

CHAnimJoint* HAnimJoint1692 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1692->setUSE("hanim_r_acromioclavicular");
HAnimHumanoid44->addJoints(*HAnimJoint1692);

CHAnimJoint* HAnimJoint1693 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1693->setUSE("hanim_l_ankle");
HAnimHumanoid44->addJoints(*HAnimJoint1693);

CHAnimJoint* HAnimJoint1694 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1694->setUSE("hanim_r_ankle");
HAnimHumanoid44->addJoints(*HAnimJoint1694);

CHAnimJoint* HAnimJoint1695 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1695->setUSE("hanim_l_elbow");
HAnimHumanoid44->addJoints(*HAnimJoint1695);

CHAnimJoint* HAnimJoint1696 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1696->setUSE("hanim_r_elbow");
HAnimHumanoid44->addJoints(*HAnimJoint1696);

CHAnimJoint* HAnimJoint1697 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1697->setUSE("hanim_l_eyeball_joint");
HAnimHumanoid44->addJoints(*HAnimJoint1697);

CHAnimJoint* HAnimJoint1698 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1698->setUSE("hanim_r_eyeball_joint");
HAnimHumanoid44->addJoints(*HAnimJoint1698);

CHAnimJoint* HAnimJoint1699 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1699->setUSE("hanim_l_eyebrow_joint");
HAnimHumanoid44->addJoints(*HAnimJoint1699);

CHAnimJoint* HAnimJoint1700 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1700->setUSE("hanim_r_eyebrow_joint");
HAnimHumanoid44->addJoints(*HAnimJoint1700);

CHAnimJoint* HAnimJoint1701 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1701->setUSE("hanim_l_eyelid_joint");
HAnimHumanoid44->addJoints(*HAnimJoint1701);

CHAnimJoint* HAnimJoint1702 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1702->setUSE("hanim_r_eyelid_joint");
HAnimHumanoid44->addJoints(*HAnimJoint1702);

CHAnimJoint* HAnimJoint1703 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1703->setUSE("hanim_l_hip");
HAnimHumanoid44->addJoints(*HAnimJoint1703);

CHAnimJoint* HAnimJoint1704 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1704->setUSE("hanim_r_hip");
HAnimHumanoid44->addJoints(*HAnimJoint1704);

CHAnimJoint* HAnimJoint1705 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1705->setUSE("hanim_l_index0");
HAnimHumanoid44->addJoints(*HAnimJoint1705);

CHAnimJoint* HAnimJoint1706 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1706->setUSE("hanim_r_index0");
HAnimHumanoid44->addJoints(*HAnimJoint1706);

CHAnimJoint* HAnimJoint1707 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1707->setUSE("hanim_l_index1");
HAnimHumanoid44->addJoints(*HAnimJoint1707);

CHAnimJoint* HAnimJoint1708 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1708->setUSE("hanim_r_index1");
HAnimHumanoid44->addJoints(*HAnimJoint1708);

CHAnimJoint* HAnimJoint1709 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1709->setUSE("hanim_l_index2");
HAnimHumanoid44->addJoints(*HAnimJoint1709);

CHAnimJoint* HAnimJoint1710 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1710->setUSE("hanim_r_index2");
HAnimHumanoid44->addJoints(*HAnimJoint1710);

CHAnimJoint* HAnimJoint1711 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1711->setUSE("hanim_l_index3");
HAnimHumanoid44->addJoints(*HAnimJoint1711);

CHAnimJoint* HAnimJoint1712 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1712->setUSE("hanim_r_index3");
HAnimHumanoid44->addJoints(*HAnimJoint1712);

CHAnimJoint* HAnimJoint1713 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1713->setUSE("hanim_l_knee");
HAnimHumanoid44->addJoints(*HAnimJoint1713);

CHAnimJoint* HAnimJoint1714 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1714->setUSE("hanim_r_knee");
HAnimHumanoid44->addJoints(*HAnimJoint1714);

CHAnimJoint* HAnimJoint1715 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1715->setUSE("hanim_l_metatarsal");
HAnimHumanoid44->addJoints(*HAnimJoint1715);

CHAnimJoint* HAnimJoint1716 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1716->setUSE("hanim_r_metatarsal");
HAnimHumanoid44->addJoints(*HAnimJoint1716);

CHAnimJoint* HAnimJoint1717 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1717->setUSE("hanim_l_middle0");
HAnimHumanoid44->addJoints(*HAnimJoint1717);

CHAnimJoint* HAnimJoint1718 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1718->setUSE("hanim_r_middle0");
HAnimHumanoid44->addJoints(*HAnimJoint1718);

CHAnimJoint* HAnimJoint1719 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1719->setUSE("hanim_l_middle1");
HAnimHumanoid44->addJoints(*HAnimJoint1719);

CHAnimJoint* HAnimJoint1720 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1720->setUSE("hanim_r_middle1");
HAnimHumanoid44->addJoints(*HAnimJoint1720);

CHAnimJoint* HAnimJoint1721 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1721->setUSE("hanim_l_middle2");
HAnimHumanoid44->addJoints(*HAnimJoint1721);

CHAnimJoint* HAnimJoint1722 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1722->setUSE("hanim_r_middle2");
HAnimHumanoid44->addJoints(*HAnimJoint1722);

CHAnimJoint* HAnimJoint1723 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1723->setUSE("hanim_l_middle3");
HAnimHumanoid44->addJoints(*HAnimJoint1723);

CHAnimJoint* HAnimJoint1724 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1724->setUSE("hanim_r_middle3");
HAnimHumanoid44->addJoints(*HAnimJoint1724);

CHAnimJoint* HAnimJoint1725 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1725->setUSE("hanim_l_midtarsal");
HAnimHumanoid44->addJoints(*HAnimJoint1725);

CHAnimJoint* HAnimJoint1726 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1726->setUSE("hanim_r_midtarsal");
HAnimHumanoid44->addJoints(*HAnimJoint1726);

CHAnimJoint* HAnimJoint1727 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1727->setUSE("hanim_l_pinky0");
HAnimHumanoid44->addJoints(*HAnimJoint1727);

CHAnimJoint* HAnimJoint1728 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1728->setUSE("hanim_r_pinky0");
HAnimHumanoid44->addJoints(*HAnimJoint1728);

CHAnimJoint* HAnimJoint1729 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1729->setUSE("hanim_l_pinky1");
HAnimHumanoid44->addJoints(*HAnimJoint1729);

CHAnimJoint* HAnimJoint1730 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1730->setUSE("hanim_r_pinky1");
HAnimHumanoid44->addJoints(*HAnimJoint1730);

CHAnimJoint* HAnimJoint1731 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1731->setUSE("hanim_l_pinky2");
HAnimHumanoid44->addJoints(*HAnimJoint1731);

CHAnimJoint* HAnimJoint1732 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1732->setUSE("hanim_r_pinky2");
HAnimHumanoid44->addJoints(*HAnimJoint1732);

CHAnimJoint* HAnimJoint1733 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1733->setUSE("hanim_l_pinky3");
HAnimHumanoid44->addJoints(*HAnimJoint1733);

CHAnimJoint* HAnimJoint1734 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1734->setUSE("hanim_r_pinky3");
HAnimHumanoid44->addJoints(*HAnimJoint1734);

CHAnimJoint* HAnimJoint1735 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1735->setUSE("hanim_l_ring0");
HAnimHumanoid44->addJoints(*HAnimJoint1735);

CHAnimJoint* HAnimJoint1736 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1736->setUSE("hanim_r_ring0");
HAnimHumanoid44->addJoints(*HAnimJoint1736);

CHAnimJoint* HAnimJoint1737 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1737->setUSE("hanim_l_ring1");
HAnimHumanoid44->addJoints(*HAnimJoint1737);

CHAnimJoint* HAnimJoint1738 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1738->setUSE("hanim_r_ring1");
HAnimHumanoid44->addJoints(*HAnimJoint1738);

CHAnimJoint* HAnimJoint1739 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1739->setUSE("hanim_l_ring2");
HAnimHumanoid44->addJoints(*HAnimJoint1739);

CHAnimJoint* HAnimJoint1740 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1740->setUSE("hanim_r_ring2");
HAnimHumanoid44->addJoints(*HAnimJoint1740);

CHAnimJoint* HAnimJoint1741 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1741->setUSE("hanim_l_ring3");
HAnimHumanoid44->addJoints(*HAnimJoint1741);

CHAnimJoint* HAnimJoint1742 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1742->setUSE("hanim_r_ring3");
HAnimHumanoid44->addJoints(*HAnimJoint1742);

CHAnimJoint* HAnimJoint1743 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1743->setUSE("hanim_l_shoulder");
HAnimHumanoid44->addJoints(*HAnimJoint1743);

CHAnimJoint* HAnimJoint1744 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1744->setUSE("hanim_r_shoulder");
HAnimHumanoid44->addJoints(*HAnimJoint1744);

CHAnimJoint* HAnimJoint1745 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1745->setUSE("hanim_l_sternoclavicular");
HAnimHumanoid44->addJoints(*HAnimJoint1745);

CHAnimJoint* HAnimJoint1746 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1746->setUSE("hanim_r_sternoclavicular");
HAnimHumanoid44->addJoints(*HAnimJoint1746);

CHAnimJoint* HAnimJoint1747 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1747->setUSE("hanim_l_subtalar");
HAnimHumanoid44->addJoints(*HAnimJoint1747);

CHAnimJoint* HAnimJoint1748 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1748->setUSE("hanim_r_subtalar");
HAnimHumanoid44->addJoints(*HAnimJoint1748);

CHAnimJoint* HAnimJoint1749 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1749->setUSE("hanim_l_thumb1");
HAnimHumanoid44->addJoints(*HAnimJoint1749);

CHAnimJoint* HAnimJoint1750 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1750->setUSE("hanim_r_thumb1");
HAnimHumanoid44->addJoints(*HAnimJoint1750);

CHAnimJoint* HAnimJoint1751 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1751->setUSE("hanim_l_thumb2");
HAnimHumanoid44->addJoints(*HAnimJoint1751);

CHAnimJoint* HAnimJoint1752 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1752->setUSE("hanim_r_thumb2");
HAnimHumanoid44->addJoints(*HAnimJoint1752);

CHAnimJoint* HAnimJoint1753 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1753->setUSE("hanim_l_thumb3");
HAnimHumanoid44->addJoints(*HAnimJoint1753);

CHAnimJoint* HAnimJoint1754 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1754->setUSE("hanim_r_thumb3");
HAnimHumanoid44->addJoints(*HAnimJoint1754);

CHAnimJoint* HAnimJoint1755 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1755->setUSE("hanim_l_wrist");
HAnimHumanoid44->addJoints(*HAnimJoint1755);

CHAnimJoint* HAnimJoint1756 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1756->setUSE("hanim_r_wrist");
HAnimHumanoid44->addJoints(*HAnimJoint1756);

CHAnimSegment* HAnimSegment1757 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1757->setUSE("hanim_pelvis");
HAnimHumanoid44->setSegments(*HAnimSegment1757);

CHAnimSegment* HAnimSegment1758 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1758->setUSE("hanim_skull");
HAnimHumanoid44->setSegments(*HAnimSegment1758);

CHAnimSegment* HAnimSegment1759 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1759->setUSE("hanim_jaw");
HAnimHumanoid44->setSegments(*HAnimSegment1759);

CHAnimSegment* HAnimSegment1760 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1760->setUSE("hanim_c1");
HAnimHumanoid44->setSegments(*HAnimSegment1760);

CHAnimSegment* HAnimSegment1761 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1761->setUSE("hanim_c2");
HAnimHumanoid44->setSegments(*HAnimSegment1761);

CHAnimSegment* HAnimSegment1762 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1762->setUSE("hanim_c3");
HAnimHumanoid44->setSegments(*HAnimSegment1762);

CHAnimSegment* HAnimSegment1763 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1763->setUSE("hanim_c4");
HAnimHumanoid44->setSegments(*HAnimSegment1763);

CHAnimSegment* HAnimSegment1764 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1764->setUSE("hanim_c5");
HAnimHumanoid44->setSegments(*HAnimSegment1764);

CHAnimSegment* HAnimSegment1765 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1765->setUSE("hanim_c6");
HAnimHumanoid44->setSegments(*HAnimSegment1765);

CHAnimSegment* HAnimSegment1766 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1766->setUSE("hanim_c7");
HAnimHumanoid44->setSegments(*HAnimSegment1766);

CHAnimSegment* HAnimSegment1767 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1767->setUSE("hanim_t1");
HAnimHumanoid44->setSegments(*HAnimSegment1767);

CHAnimSegment* HAnimSegment1768 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1768->setUSE("hanim_t2");
HAnimHumanoid44->setSegments(*HAnimSegment1768);

CHAnimSegment* HAnimSegment1769 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1769->setUSE("hanim_t3");
HAnimHumanoid44->setSegments(*HAnimSegment1769);

CHAnimSegment* HAnimSegment1770 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1770->setUSE("hanim_t4");
HAnimHumanoid44->setSegments(*HAnimSegment1770);

CHAnimSegment* HAnimSegment1771 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1771->setUSE("hanim_t5");
HAnimHumanoid44->setSegments(*HAnimSegment1771);

CHAnimSegment* HAnimSegment1772 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1772->setUSE("hanim_t6");
HAnimHumanoid44->setSegments(*HAnimSegment1772);

CHAnimSegment* HAnimSegment1773 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1773->setUSE("hanim_t7");
HAnimHumanoid44->setSegments(*HAnimSegment1773);

CHAnimSegment* HAnimSegment1774 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1774->setUSE("hanim_t8");
HAnimHumanoid44->setSegments(*HAnimSegment1774);

CHAnimSegment* HAnimSegment1775 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1775->setUSE("hanim_t9");
HAnimHumanoid44->setSegments(*HAnimSegment1775);

CHAnimSegment* HAnimSegment1776 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1776->setUSE("hanim_t10");
HAnimHumanoid44->setSegments(*HAnimSegment1776);

CHAnimSegment* HAnimSegment1777 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1777->setUSE("hanim_t11");
HAnimHumanoid44->setSegments(*HAnimSegment1777);

CHAnimSegment* HAnimSegment1778 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1778->setUSE("hanim_t12");
HAnimHumanoid44->setSegments(*HAnimSegment1778);

CHAnimSegment* HAnimSegment1779 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1779->setUSE("hanim_l1");
HAnimHumanoid44->setSegments(*HAnimSegment1779);

CHAnimSegment* HAnimSegment1780 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1780->setUSE("hanim_l2");
HAnimHumanoid44->setSegments(*HAnimSegment1780);

CHAnimSegment* HAnimSegment1781 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1781->setUSE("hanim_l3");
HAnimHumanoid44->setSegments(*HAnimSegment1781);

CHAnimSegment* HAnimSegment1782 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1782->setUSE("hanim_l4");
HAnimHumanoid44->setSegments(*HAnimSegment1782);

CHAnimSegment* HAnimSegment1783 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1783->setUSE("hanim_l5");
HAnimHumanoid44->setSegments(*HAnimSegment1783);

CHAnimSegment* HAnimSegment1784 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1784->setUSE("hanim_sacrum");
HAnimHumanoid44->setSegments(*HAnimSegment1784);

CHAnimSegment* HAnimSegment1785 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1785->setUSE("hanim_l_calf");
HAnimHumanoid44->setSegments(*HAnimSegment1785);

CHAnimSegment* HAnimSegment1786 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1786->setUSE("hanim_r_calf");
HAnimHumanoid44->setSegments(*HAnimSegment1786);

CHAnimSegment* HAnimSegment1787 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1787->setUSE("hanim_l_clavicle");
HAnimHumanoid44->setSegments(*HAnimSegment1787);

CHAnimSegment* HAnimSegment1788 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1788->setUSE("hanim_r_clavicle");
HAnimHumanoid44->setSegments(*HAnimSegment1788);

CHAnimSegment* HAnimSegment1789 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1789->setUSE("hanim_l_eyeball");
HAnimHumanoid44->setSegments(*HAnimSegment1789);

CHAnimSegment* HAnimSegment1790 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1790->setUSE("hanim_r_eyeball");
HAnimHumanoid44->setSegments(*HAnimSegment1790);

CHAnimSegment* HAnimSegment1791 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1791->setUSE("hanim_l_eyebrow");
HAnimHumanoid44->setSegments(*HAnimSegment1791);

CHAnimSegment* HAnimSegment1792 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1792->setUSE("hanim_r_eyebrow");
HAnimHumanoid44->setSegments(*HAnimSegment1792);

CHAnimSegment* HAnimSegment1793 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1793->setUSE("hanim_l_eyelid");
HAnimHumanoid44->setSegments(*HAnimSegment1793);

CHAnimSegment* HAnimSegment1794 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1794->setUSE("hanim_r_eyelid");
HAnimHumanoid44->setSegments(*HAnimSegment1794);

CHAnimSegment* HAnimSegment1795 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1795->setUSE("hanim_l_forearm");
HAnimHumanoid44->setSegments(*HAnimSegment1795);

CHAnimSegment* HAnimSegment1796 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1796->setUSE("hanim_r_forearm");
HAnimHumanoid44->setSegments(*HAnimSegment1796);

CHAnimSegment* HAnimSegment1797 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1797->setUSE("hanim_l_forefoot");
HAnimHumanoid44->setSegments(*HAnimSegment1797);

CHAnimSegment* HAnimSegment1798 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1798->setUSE("hanim_r_forefoot");
HAnimHumanoid44->setSegments(*HAnimSegment1798);

CHAnimSegment* HAnimSegment1799 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1799->setUSE("hanim_l_hand");
HAnimHumanoid44->setSegments(*HAnimSegment1799);

CHAnimSegment* HAnimSegment1800 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1800->setUSE("hanim_r_hand");
HAnimHumanoid44->setSegments(*HAnimSegment1800);

CHAnimSegment* HAnimSegment1801 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1801->setUSE("hanim_l_hindfoot");
HAnimHumanoid44->setSegments(*HAnimSegment1801);

CHAnimSegment* HAnimSegment1802 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1802->setUSE("hanim_r_hindfoot");
HAnimHumanoid44->setSegments(*HAnimSegment1802);

CHAnimSegment* HAnimSegment1803 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1803->setUSE("hanim_l_index_distal");
HAnimHumanoid44->setSegments(*HAnimSegment1803);

CHAnimSegment* HAnimSegment1804 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1804->setUSE("hanim_r_index_distal");
HAnimHumanoid44->setSegments(*HAnimSegment1804);

CHAnimSegment* HAnimSegment1805 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1805->setUSE("hanim_l_index_metacarpal");
HAnimHumanoid44->setSegments(*HAnimSegment1805);

CHAnimSegment* HAnimSegment1806 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1806->setUSE("hanim_r_index_metacarpal");
HAnimHumanoid44->setSegments(*HAnimSegment1806);

CHAnimSegment* HAnimSegment1807 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1807->setUSE("hanim_l_index_middle");
HAnimHumanoid44->setSegments(*HAnimSegment1807);

CHAnimSegment* HAnimSegment1808 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1808->setUSE("hanim_r_index_middle");
HAnimHumanoid44->setSegments(*HAnimSegment1808);

CHAnimSegment* HAnimSegment1809 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1809->setUSE("hanim_l_index_proximal");
HAnimHumanoid44->setSegments(*HAnimSegment1809);

CHAnimSegment* HAnimSegment1810 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1810->setUSE("hanim_r_index_proximal");
HAnimHumanoid44->setSegments(*HAnimSegment1810);

CHAnimSegment* HAnimSegment1811 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1811->setUSE("hanim_l_middistal");
HAnimHumanoid44->setSegments(*HAnimSegment1811);

CHAnimSegment* HAnimSegment1812 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1812->setUSE("hanim_r_middistal");
HAnimHumanoid44->setSegments(*HAnimSegment1812);

CHAnimSegment* HAnimSegment1813 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1813->setUSE("hanim_l_middle_distal");
HAnimHumanoid44->setSegments(*HAnimSegment1813);

CHAnimSegment* HAnimSegment1814 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1814->setUSE("hanim_r_middle_distal");
HAnimHumanoid44->setSegments(*HAnimSegment1814);

CHAnimSegment* HAnimSegment1815 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1815->setUSE("hanim_l_middle_metacarpal");
HAnimHumanoid44->setSegments(*HAnimSegment1815);

CHAnimSegment* HAnimSegment1816 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1816->setUSE("hanim_r_middle_metacarpal");
HAnimHumanoid44->setSegments(*HAnimSegment1816);

CHAnimSegment* HAnimSegment1817 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1817->setUSE("hanim_l_middle_middle");
HAnimHumanoid44->setSegments(*HAnimSegment1817);

CHAnimSegment* HAnimSegment1818 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1818->setUSE("hanim_r_middle_middle");
HAnimHumanoid44->setSegments(*HAnimSegment1818);

CHAnimSegment* HAnimSegment1819 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1819->setUSE("hanim_l_middle_proximal");
HAnimHumanoid44->setSegments(*HAnimSegment1819);

CHAnimSegment* HAnimSegment1820 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1820->setUSE("hanim_r_middle_proximal");
HAnimHumanoid44->setSegments(*HAnimSegment1820);

CHAnimSegment* HAnimSegment1821 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1821->setUSE("hanim_l_midproximal");
HAnimHumanoid44->setSegments(*HAnimSegment1821);

CHAnimSegment* HAnimSegment1822 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1822->setUSE("hanim_r_midproximal");
HAnimHumanoid44->setSegments(*HAnimSegment1822);

CHAnimSegment* HAnimSegment1823 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1823->setUSE("hanim_l_pinky_distal");
HAnimHumanoid44->setSegments(*HAnimSegment1823);

CHAnimSegment* HAnimSegment1824 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1824->setUSE("hanim_r_pinky_distal");
HAnimHumanoid44->setSegments(*HAnimSegment1824);

CHAnimSegment* HAnimSegment1825 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1825->setUSE("hanim_l_pinky_metacarpal");
HAnimHumanoid44->setSegments(*HAnimSegment1825);

CHAnimSegment* HAnimSegment1826 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1826->setUSE("hanim_r_pinky_metacarpal");
HAnimHumanoid44->setSegments(*HAnimSegment1826);

CHAnimSegment* HAnimSegment1827 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1827->setUSE("hanim_l_pinky_middle");
HAnimHumanoid44->setSegments(*HAnimSegment1827);

CHAnimSegment* HAnimSegment1828 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1828->setUSE("hanim_r_pinky_middle");
HAnimHumanoid44->setSegments(*HAnimSegment1828);

CHAnimSegment* HAnimSegment1829 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1829->setUSE("hanim_l_pinky_proximal");
HAnimHumanoid44->setSegments(*HAnimSegment1829);

CHAnimSegment* HAnimSegment1830 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1830->setUSE("hanim_r_pinky_proximal");
HAnimHumanoid44->setSegments(*HAnimSegment1830);

CHAnimSegment* HAnimSegment1831 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1831->setUSE("hanim_l_ring_distal");
HAnimHumanoid44->setSegments(*HAnimSegment1831);

CHAnimSegment* HAnimSegment1832 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1832->setUSE("hanim_r_ring_distal");
HAnimHumanoid44->setSegments(*HAnimSegment1832);

CHAnimSegment* HAnimSegment1833 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1833->setUSE("hanim_l_ring_metacarpal");
HAnimHumanoid44->setSegments(*HAnimSegment1833);

CHAnimSegment* HAnimSegment1834 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1834->setUSE("hanim_r_ring_metacarpal");
HAnimHumanoid44->setSegments(*HAnimSegment1834);

CHAnimSegment* HAnimSegment1835 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1835->setUSE("hanim_l_ring_middle");
HAnimHumanoid44->setSegments(*HAnimSegment1835);

CHAnimSegment* HAnimSegment1836 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1836->setUSE("hanim_r_ring_middle");
HAnimHumanoid44->setSegments(*HAnimSegment1836);

CHAnimSegment* HAnimSegment1837 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1837->setUSE("hanim_l_ring_proximal");
HAnimHumanoid44->setSegments(*HAnimSegment1837);

CHAnimSegment* HAnimSegment1838 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1838->setUSE("hanim_r_ring_proximal");
HAnimHumanoid44->setSegments(*HAnimSegment1838);

CHAnimSegment* HAnimSegment1839 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1839->setUSE("hanim_l_scapula");
HAnimHumanoid44->setSegments(*HAnimSegment1839);

CHAnimSegment* HAnimSegment1840 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1840->setUSE("hanim_r_scapula");
HAnimHumanoid44->setSegments(*HAnimSegment1840);

CHAnimSegment* HAnimSegment1841 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1841->setUSE("hanim_l_thigh");
HAnimHumanoid44->setSegments(*HAnimSegment1841);

CHAnimSegment* HAnimSegment1842 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1842->setUSE("hanim_r_thigh");
HAnimHumanoid44->setSegments(*HAnimSegment1842);

CHAnimSegment* HAnimSegment1843 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1843->setUSE("hanim_l_thumb_distal");
HAnimHumanoid44->setSegments(*HAnimSegment1843);

CHAnimSegment* HAnimSegment1844 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1844->setUSE("hanim_r_thumb_distal");
HAnimHumanoid44->setSegments(*HAnimSegment1844);

CHAnimSegment* HAnimSegment1845 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1845->setUSE("hanim_l_thumb_metacarpal");
HAnimHumanoid44->setSegments(*HAnimSegment1845);

CHAnimSegment* HAnimSegment1846 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1846->setUSE("hanim_r_thumb_metacarpal");
HAnimHumanoid44->setSegments(*HAnimSegment1846);

CHAnimSegment* HAnimSegment1847 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1847->setUSE("hanim_l_thumb_proximal");
HAnimHumanoid44->setSegments(*HAnimSegment1847);

CHAnimSegment* HAnimSegment1848 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1848->setUSE("hanim_r_thumb_proximal");
HAnimHumanoid44->setSegments(*HAnimSegment1848);

CHAnimSegment* HAnimSegment1849 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1849->setUSE("hanim_l_upperarm");
HAnimHumanoid44->setSegments(*HAnimSegment1849);

CHAnimSegment* HAnimSegment1850 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1850->setUSE("hanim_r_upperarm");
HAnimHumanoid44->setSegments(*HAnimSegment1850);

CHAnimSite* HAnimSite1851 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1851->setUSE("hanim_crotch_pt");
HAnimHumanoid44->setSites(*HAnimSite1851);

CHAnimSite* HAnimSite1852 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1852->setUSE("hanim_skull_tip");
HAnimHumanoid44->setSites(*HAnimSite1852);

CHAnimSite* HAnimSite1853 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1853->setUSE("hanim_sellion_pt");
HAnimHumanoid44->setSites(*HAnimSite1853);

CHAnimSite* HAnimSite1854 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1854->setUSE("hanim_supramenton_pt");
HAnimHumanoid44->setSites(*HAnimSite1854);

CHAnimSite* HAnimSite1855 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1855->setUSE("hanim_nuchale_pt");
HAnimHumanoid44->setSites(*HAnimSite1855);

CHAnimSite* HAnimSite1856 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1856->setUSE("hanim_suprasternale_pt");
HAnimHumanoid44->setSites(*HAnimSite1856);

CHAnimSite* HAnimSite1857 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1857->setUSE("hanim_cervicale_pt");
HAnimHumanoid44->setSites(*HAnimSite1857);

CHAnimSite* HAnimSite1858 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1858->setUSE("hanim_substernale_pt");
HAnimHumanoid44->setSites(*HAnimSite1858);

CHAnimSite* HAnimSite1859 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1859->setUSE("hanim_rib10_midspine_pt");
HAnimHumanoid44->setSites(*HAnimSite1859);

CHAnimSite* HAnimSite1860 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1860->setUSE("hanim_waist_preferred_post_pt");
HAnimHumanoid44->setSites(*HAnimSite1860);

CHAnimSite* HAnimSite1861 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1861->setUSE("hanim_navel_pt");
HAnimHumanoid44->setSites(*HAnimSite1861);

CHAnimSite* HAnimSite1862 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1862->setUSE("hanim_l_acromion_pt");
HAnimHumanoid44->setSites(*HAnimSite1862);

CHAnimSite* HAnimSite1863 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1863->setUSE("hanim_r_acromion_pt");
HAnimHumanoid44->setSites(*HAnimSite1863);

CHAnimSite* HAnimSite1864 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1864->setUSE("hanim_r_asis_pt");
HAnimHumanoid44->setSites(*HAnimSite1864);

CHAnimSite* HAnimSite1865 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1865->setUSE("hanim_l_asis_pt");
HAnimHumanoid44->setSites(*HAnimSite1865);

CHAnimSite* HAnimSite1866 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1866->setUSE("hanim_l_axilla_ant_pt");
HAnimHumanoid44->setSites(*HAnimSite1866);

CHAnimSite* HAnimSite1867 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1867->setUSE("hanim_r_axilla_ant_pt");
HAnimHumanoid44->setSites(*HAnimSite1867);

CHAnimSite* HAnimSite1868 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1868->setUSE("hanim_l_axilla_post_pt");
HAnimHumanoid44->setSites(*HAnimSite1868);

CHAnimSite* HAnimSite1869 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1869->setUSE("hanim_r_axilla_post_pt");
HAnimHumanoid44->setSites(*HAnimSite1869);

CHAnimSite* HAnimSite1870 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1870->setUSE("hanim_l_calcaneous_post_pt");
HAnimHumanoid44->setSites(*HAnimSite1870);

CHAnimSite* HAnimSite1871 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1871->setUSE("hanim_r_calcaneous_post_pt");
HAnimHumanoid44->setSites(*HAnimSite1871);

CHAnimSite* HAnimSite1872 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1872->setUSE("hanim_l_clavicale_pt");
HAnimHumanoid44->setSites(*HAnimSite1872);

CHAnimSite* HAnimSite1873 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1873->setUSE("hanim_r_clavicale_pt");
HAnimHumanoid44->setSites(*HAnimSite1873);

CHAnimSite* HAnimSite1874 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1874->setUSE("hanim_l_dactylion_pt");
HAnimHumanoid44->setSites(*HAnimSite1874);

CHAnimSite* HAnimSite1875 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1875->setUSE("hanim_r_dactylion_pt");
HAnimHumanoid44->setSites(*HAnimSite1875);

CHAnimSite* HAnimSite1876 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1876->setUSE("hanim_l_digit2_pt");
HAnimHumanoid44->setSites(*HAnimSite1876);

CHAnimSite* HAnimSite1877 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1877->setUSE("hanim_r_digit2_pt");
HAnimHumanoid44->setSites(*HAnimSite1877);

CHAnimSite* HAnimSite1878 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1878->setUSE("hanim_l_femoral_lateral_epicn_pt");
HAnimHumanoid44->setSites(*HAnimSite1878);

CHAnimSite* HAnimSite1879 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1879->setUSE("hanim_r_femoral_lateral_epicn_pt");
HAnimHumanoid44->setSites(*HAnimSite1879);

CHAnimSite* HAnimSite1880 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1880->setUSE("hanim_l_femoral_medial_epicn_pt");
HAnimHumanoid44->setSites(*HAnimSite1880);

CHAnimSite* HAnimSite1881 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1881->setUSE("hanim_r_femoral_medial_epicn_pt");
HAnimHumanoid44->setSites(*HAnimSite1881);

CHAnimSite* HAnimSite1882 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1882->setUSE("hanim_l_forefoot_tip");
HAnimHumanoid44->setSites(*HAnimSite1882);

CHAnimSite* HAnimSite1883 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1883->setUSE("hanim_r_forefoot_tip");
HAnimHumanoid44->setSites(*HAnimSite1883);

CHAnimSite* HAnimSite1884 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1884->setUSE("hanim_r_gonion_pt");
HAnimHumanoid44->setSites(*HAnimSite1884);

CHAnimSite* HAnimSite1885 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1885->setUSE("hanim_l_gonion_pt");
HAnimHumanoid44->setSites(*HAnimSite1885);

CHAnimSite* HAnimSite1886 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1886->setUSE("hanim_l_humeral_lateral_epicn_pt");
HAnimHumanoid44->setSites(*HAnimSite1886);

CHAnimSite* HAnimSite1887 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1887->setUSE("hanim_r_humeral_lateral_epicn_pt");
HAnimHumanoid44->setSites(*HAnimSite1887);

CHAnimSite* HAnimSite1888 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1888->setUSE("hanim_l_humeral_medial_epicn_pt");
HAnimHumanoid44->setSites(*HAnimSite1888);

CHAnimSite* HAnimSite1889 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1889->setUSE("hanim_r_humeral_medial_epicn_pt");
HAnimHumanoid44->setSites(*HAnimSite1889);

CHAnimSite* HAnimSite1890 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1890->setUSE("hanim_r_iliocristale_pt");
HAnimHumanoid44->setSites(*HAnimSite1890);

CHAnimSite* HAnimSite1891 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1891->setUSE("hanim_l_iliocristale_pt");
HAnimHumanoid44->setSites(*HAnimSite1891);

CHAnimSite* HAnimSite1892 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1892->setUSE("hanim_l_index_distal_tip");
HAnimHumanoid44->setSites(*HAnimSite1892);

CHAnimSite* HAnimSite1893 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1893->setUSE("hanim_r_index_distal_tip");
HAnimHumanoid44->setSites(*HAnimSite1893);

CHAnimSite* HAnimSite1894 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1894->setUSE("hanim_r_infraorbitale_pt");
HAnimHumanoid44->setSites(*HAnimSite1894);

CHAnimSite* HAnimSite1895 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1895->setUSE("hanim_l_infraorbitale_pt");
HAnimHumanoid44->setSites(*HAnimSite1895);

CHAnimSite* HAnimSite1896 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1896->setUSE("hanim_l_knee_crease_pt");
HAnimHumanoid44->setSites(*HAnimSite1896);

CHAnimSite* HAnimSite1897 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1897->setUSE("hanim_r_knee_crease_pt");
HAnimHumanoid44->setSites(*HAnimSite1897);

CHAnimSite* HAnimSite1898 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1898->setUSE("hanim_l_lateral_malleolus_pt");
HAnimHumanoid44->setSites(*HAnimSite1898);

CHAnimSite* HAnimSite1899 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1899->setUSE("hanim_r_lateral_malleolus_pt");
HAnimHumanoid44->setSites(*HAnimSite1899);

CHAnimSite* HAnimSite1900 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1900->setUSE("hanim_l_medial_malleolus_pt");
HAnimHumanoid44->setSites(*HAnimSite1900);

CHAnimSite* HAnimSite1901 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1901->setUSE("hanim_r_medial_malleolus_pt");
HAnimHumanoid44->setSites(*HAnimSite1901);

CHAnimSite* HAnimSite1902 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1902->setUSE("hanim_l_metacarpal_pha2_pt");
HAnimHumanoid44->setSites(*HAnimSite1902);

CHAnimSite* HAnimSite1903 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1903->setUSE("hanim_r_metacarpal_pha2_pt");
HAnimHumanoid44->setSites(*HAnimSite1903);

CHAnimSite* HAnimSite1904 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1904->setUSE("hanim_l_metacarpal_pha5_pt");
HAnimHumanoid44->setSites(*HAnimSite1904);

CHAnimSite* HAnimSite1905 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1905->setUSE("hanim_r_metacarpal_pha5_pt");
HAnimHumanoid44->setSites(*HAnimSite1905);

CHAnimSite* HAnimSite1906 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1906->setUSE("hanim_l_metatarsal_pha1_pt");
HAnimHumanoid44->setSites(*HAnimSite1906);

CHAnimSite* HAnimSite1907 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1907->setUSE("hanim_r_metatarsal_pha1_pt");
HAnimHumanoid44->setSites(*HAnimSite1907);

CHAnimSite* HAnimSite1908 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1908->setUSE("hanim_l_metatarsal_pha5_pt");
HAnimHumanoid44->setSites(*HAnimSite1908);

CHAnimSite* HAnimSite1909 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1909->setUSE("hanim_r_metatarsal_pha5_pt");
HAnimHumanoid44->setSites(*HAnimSite1909);

CHAnimSite* HAnimSite1910 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1910->setUSE("hanim_l_middle_distal_tip");
HAnimHumanoid44->setSites(*HAnimSite1910);

CHAnimSite* HAnimSite1911 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1911->setUSE("hanim_r_middle_distal_tip");
HAnimHumanoid44->setSites(*HAnimSite1911);

CHAnimSite* HAnimSite1912 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1912->setUSE("hanim_r_neck_base_pt");
HAnimHumanoid44->setSites(*HAnimSite1912);

CHAnimSite* HAnimSite1913 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1913->setUSE("hanim_l_neck_base_pt");
HAnimHumanoid44->setSites(*HAnimSite1913);

CHAnimSite* HAnimSite1914 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1914->setUSE("hanim_l_olecranon_pt");
HAnimHumanoid44->setSites(*HAnimSite1914);

CHAnimSite* HAnimSite1915 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1915->setUSE("hanim_r_olecranon_pt");
HAnimHumanoid44->setSites(*HAnimSite1915);

CHAnimSite* HAnimSite1916 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1916->setUSE("hanim_l_pinky_distal_tip");
HAnimHumanoid44->setSites(*HAnimSite1916);

CHAnimSite* HAnimSite1917 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1917->setUSE("hanim_r_pinky_distal_tip");
HAnimHumanoid44->setSites(*HAnimSite1917);

CHAnimSite* HAnimSite1918 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1918->setUSE("hanim_r_psis_pt");
HAnimHumanoid44->setSites(*HAnimSite1918);

CHAnimSite* HAnimSite1919 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1919->setUSE("hanim_l_psis_pt");
HAnimHumanoid44->setSites(*HAnimSite1919);

CHAnimSite* HAnimSite1920 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1920->setUSE("hanim_l_radial_styloid_pt");
HAnimHumanoid44->setSites(*HAnimSite1920);

CHAnimSite* HAnimSite1921 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1921->setUSE("hanim_r_radial_styloid_pt");
HAnimHumanoid44->setSites(*HAnimSite1921);

CHAnimSite* HAnimSite1922 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1922->setUSE("hanim_l_radiale_pt");
HAnimHumanoid44->setSites(*HAnimSite1922);

CHAnimSite* HAnimSite1923 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1923->setUSE("hanim_r_radiale_pt");
HAnimHumanoid44->setSites(*HAnimSite1923);

CHAnimSite* HAnimSite1924 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1924->setUSE("hanim_r_rib10_pt");
HAnimHumanoid44->setSites(*HAnimSite1924);

CHAnimSite* HAnimSite1925 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1925->setUSE("hanim_l_rib10_pt");
HAnimHumanoid44->setSites(*HAnimSite1925);

CHAnimSite* HAnimSite1926 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1926->setUSE("hanim_l_ring_distal_tip");
HAnimHumanoid44->setSites(*HAnimSite1926);

CHAnimSite* HAnimSite1927 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1927->setUSE("hanim_r_ring_distal_tip");
HAnimHumanoid44->setSites(*HAnimSite1927);

CHAnimSite* HAnimSite1928 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1928->setUSE("hanim_temporomandibular_l_site_pt");
HAnimHumanoid44->setSites(*HAnimSite1928);

CHAnimSite* HAnimSite1929 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1929->setUSE("hanim_temporomandibular_r_site_pt");
HAnimHumanoid44->setSites(*HAnimSite1929);

CHAnimSite* HAnimSite1930 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1930->setUSE("hanim_l_sphyrion_pt");
HAnimHumanoid44->setSites(*HAnimSite1930);

CHAnimSite* HAnimSite1931 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1931->setUSE("hanim_r_sphyrion_pt");
HAnimHumanoid44->setSites(*HAnimSite1931);

CHAnimSite* HAnimSite1932 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1932->setUSE("hanim_r_thelion_pt");
HAnimHumanoid44->setSites(*HAnimSite1932);

CHAnimSite* HAnimSite1933 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1933->setUSE("hanim_l_thelion_pt");
HAnimHumanoid44->setSites(*HAnimSite1933);

CHAnimSite* HAnimSite1934 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1934->setUSE("hanim_l_thumb_distal_tip");
HAnimHumanoid44->setSites(*HAnimSite1934);

CHAnimSite* HAnimSite1935 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1935->setUSE("hanim_r_thumb_distal_tip");
HAnimHumanoid44->setSites(*HAnimSite1935);

CHAnimSite* HAnimSite1936 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1936->setUSE("hanim_r_tragion_pt");
HAnimHumanoid44->setSites(*HAnimSite1936);

CHAnimSite* HAnimSite1937 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1937->setUSE("hanim_l_tragion_pt");
HAnimHumanoid44->setSites(*HAnimSite1937);

CHAnimSite* HAnimSite1938 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1938->setUSE("hanim_r_trochanterion_pt");
HAnimHumanoid44->setSites(*HAnimSite1938);

CHAnimSite* HAnimSite1939 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1939->setUSE("hanim_l_trochanterion_pt");
HAnimHumanoid44->setSites(*HAnimSite1939);

CHAnimSite* HAnimSite1940 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1940->setUSE("hanim_l_ulnar_styloid_pt");
HAnimHumanoid44->setSites(*HAnimSite1940);

CHAnimSite* HAnimSite1941 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1941->setUSE("hanim_r_ulnar_styloid_pt");
HAnimHumanoid44->setSites(*HAnimSite1941);

group->addChildren(*HAnimHumanoid44);

CGroup* Group1942 = (CGroup *)(m_pScene.createNode("Group"));
Group1942->setDEF("StopAnimation");
CTimeSensor* TimeSensor1943 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor1943->setDEF("StopTimer");
TimeSensor1943->setCycleInterval(5.73);
TimeSensor1943->setLoop(True);
Group1942->addChildren(*TimeSensor1943);

CPositionInterpolator* PositionInterpolator1944 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator1944->setDEF("Stop_humanoid_root_TranslationInterpolator");
PositionInterpolator1944->setKey(new float[3]{0,0.5,1}, 3);
PositionInterpolator1944->setKeyValue(new float[9]{0,0,0,0,0,0,0,0,0});
Group1942->addChildren(*PositionInterpolator1944);

COrientationInterpolator* OrientationInterpolator1945 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1945->setDEF("Stop_humanoid_root_RotationInterpolator");
OrientationInterpolator1945->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1945->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1945);

COrientationInterpolator* OrientationInterpolator1946 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1946->setDEF("Stop_sacroiliac_RotationInterpolator");
OrientationInterpolator1946->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1946->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1946);

COrientationInterpolator* OrientationInterpolator1947 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1947->setDEF("Stop_l_hip_RotationInterpolator");
OrientationInterpolator1947->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1947->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1947);

COrientationInterpolator* OrientationInterpolator1948 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1948->setDEF("Stop_l_knee_RotationInterpolator");
OrientationInterpolator1948->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1948->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1948);

COrientationInterpolator* OrientationInterpolator1949 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1949->setDEF("Stop_l_ankle_RotationInterpolator");
OrientationInterpolator1949->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1949->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1949);

COrientationInterpolator* OrientationInterpolator1950 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1950->setDEF("Stop_l_subtalar_RotationInterpolator");
OrientationInterpolator1950->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1950->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1950);

COrientationInterpolator* OrientationInterpolator1951 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1951->setDEF("Stop_l_midtarsal_RotationInterpolator");
OrientationInterpolator1951->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1951->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1951);

COrientationInterpolator* OrientationInterpolator1952 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1952->setDEF("Stop_l_metatarsal_RotationInterpolator");
OrientationInterpolator1952->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1952->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1952);

COrientationInterpolator* OrientationInterpolator1953 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1953->setDEF("Stop_r_hip_RotationInterpolator");
OrientationInterpolator1953->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1953->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1953);

COrientationInterpolator* OrientationInterpolator1954 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1954->setDEF("Stop_r_knee_RotationInterpolator");
OrientationInterpolator1954->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1954->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1954);

COrientationInterpolator* OrientationInterpolator1955 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1955->setDEF("Stop_r_ankle_RotationInterpolator");
OrientationInterpolator1955->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1955->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1955);

COrientationInterpolator* OrientationInterpolator1956 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1956->setDEF("Stop_r_subtalar_RotationInterpolator");
OrientationInterpolator1956->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1956->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1956);

COrientationInterpolator* OrientationInterpolator1957 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1957->setDEF("Stop_r_midtarsal_RotationInterpolator");
OrientationInterpolator1957->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1957->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1957);

COrientationInterpolator* OrientationInterpolator1958 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1958->setDEF("Stop_r_metatarsal_RotationInterpolator");
OrientationInterpolator1958->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1958->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1958);

COrientationInterpolator* OrientationInterpolator1959 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1959->setDEF("Stop_vl5_RotationInterpolator");
OrientationInterpolator1959->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1959->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1959);

COrientationInterpolator* OrientationInterpolator1960 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1960->setDEF("Stop_vl4_RotationInterpolator");
OrientationInterpolator1960->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1960->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1960);

COrientationInterpolator* OrientationInterpolator1961 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1961->setDEF("Stop_vl3_RotationInterpolator");
OrientationInterpolator1961->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1961->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1961);

COrientationInterpolator* OrientationInterpolator1962 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1962->setDEF("Stop_vl2_RotationInterpolator");
OrientationInterpolator1962->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1962->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1962);

COrientationInterpolator* OrientationInterpolator1963 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1963->setDEF("Stop_vl1_RotationInterpolator");
OrientationInterpolator1963->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1963->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1963);

COrientationInterpolator* OrientationInterpolator1964 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1964->setDEF("Stop_vt12_RotationInterpolator");
OrientationInterpolator1964->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1964->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1964);

COrientationInterpolator* OrientationInterpolator1965 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1965->setDEF("Stop_vt11_RotationInterpolator");
OrientationInterpolator1965->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1965->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1965);

COrientationInterpolator* OrientationInterpolator1966 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1966->setDEF("Stop_vt10_RotationInterpolator");
OrientationInterpolator1966->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1966->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1966);

COrientationInterpolator* OrientationInterpolator1967 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1967->setDEF("Stop_vt9_RotationInterpolator");
OrientationInterpolator1967->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1967->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1967);

COrientationInterpolator* OrientationInterpolator1968 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1968->setDEF("Stop_vt8_RotationInterpolator");
OrientationInterpolator1968->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1968->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1968);

COrientationInterpolator* OrientationInterpolator1969 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1969->setDEF("Stop_vt7_RotationInterpolator");
OrientationInterpolator1969->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1969->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1969);

COrientationInterpolator* OrientationInterpolator1970 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1970->setDEF("Stop_vt6_RotationInterpolator");
OrientationInterpolator1970->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1970->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1970);

COrientationInterpolator* OrientationInterpolator1971 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1971->setDEF("Stop_vt5_RotationInterpolator");
OrientationInterpolator1971->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1971->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1971);

COrientationInterpolator* OrientationInterpolator1972 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1972->setDEF("Stop_vt4_RotationInterpolator");
OrientationInterpolator1972->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1972->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1972);

COrientationInterpolator* OrientationInterpolator1973 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1973->setDEF("Stop_vt3_RotationInterpolator");
OrientationInterpolator1973->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1973->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1973);

COrientationInterpolator* OrientationInterpolator1974 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1974->setDEF("Stop_vt2_RotationInterpolator");
OrientationInterpolator1974->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1974->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1974);

COrientationInterpolator* OrientationInterpolator1975 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1975->setDEF("Stop_vt1_RotationInterpolator");
OrientationInterpolator1975->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1975->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1975);

COrientationInterpolator* OrientationInterpolator1976 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1976->setDEF("Stop_vc7_RotationInterpolator");
OrientationInterpolator1976->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1976->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1976);

COrientationInterpolator* OrientationInterpolator1977 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1977->setDEF("Stop_vc6_RotationInterpolator");
OrientationInterpolator1977->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1977->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1977);

COrientationInterpolator* OrientationInterpolator1978 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1978->setDEF("Stop_vc5_RotationInterpolator");
OrientationInterpolator1978->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1978->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1978);

COrientationInterpolator* OrientationInterpolator1979 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1979->setDEF("Stop_vc4_RotationInterpolator");
OrientationInterpolator1979->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1979->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1979);

COrientationInterpolator* OrientationInterpolator1980 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1980->setDEF("Stop_vc3_RotationInterpolator");
OrientationInterpolator1980->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1980->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1980);

COrientationInterpolator* OrientationInterpolator1981 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1981->setDEF("Stop_vc2_RotationInterpolator");
OrientationInterpolator1981->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1981->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1981);

COrientationInterpolator* OrientationInterpolator1982 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1982->setDEF("Stop_vc1_RotationInterpolator");
OrientationInterpolator1982->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1982->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1982);

COrientationInterpolator* OrientationInterpolator1983 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1983->setDEF("Stop_skullbase_RotationInterpolator");
OrientationInterpolator1983->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1983->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1983);

COrientationInterpolator* OrientationInterpolator1984 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1984->setDEF("Stop_l_eyeball_joint_RotationInterpolator");
OrientationInterpolator1984->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1984->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1984);

COrientationInterpolator* OrientationInterpolator1985 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1985->setDEF("Stop_r_eyeball_joint_RotationInterpolator");
OrientationInterpolator1985->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1985->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1985);

COrientationInterpolator* OrientationInterpolator1986 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1986->setDEF("Stop_l_sternoclavicular_RotationInterpolator");
OrientationInterpolator1986->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1986->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1986);

COrientationInterpolator* OrientationInterpolator1987 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1987->setDEF("Stop_l_acromioclavicular_RotationInterpolator");
OrientationInterpolator1987->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1987->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1987);

COrientationInterpolator* OrientationInterpolator1988 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1988->setDEF("Stop_l_shoulder_RotationInterpolator");
OrientationInterpolator1988->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1988->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1988);

COrientationInterpolator* OrientationInterpolator1989 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1989->setDEF("Stop_l_elbow_RotationInterpolator");
OrientationInterpolator1989->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1989->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1989);

COrientationInterpolator* OrientationInterpolator1990 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1990->setDEF("Stop_l_wrist_RotationInterpolator");
OrientationInterpolator1990->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1990->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1990);

COrientationInterpolator* OrientationInterpolator1991 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1991->setDEF("Stop_l_thumb1_RotationInterpolator");
OrientationInterpolator1991->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1991->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1991);

COrientationInterpolator* OrientationInterpolator1992 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1992->setDEF("Stop_l_thumb2_RotationInterpolator");
OrientationInterpolator1992->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1992->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1992);

COrientationInterpolator* OrientationInterpolator1993 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1993->setDEF("Stop_l_thumb3_RotationInterpolator");
OrientationInterpolator1993->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1993->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1993);

COrientationInterpolator* OrientationInterpolator1994 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1994->setDEF("Stop_l_index0_RotationInterpolator");
OrientationInterpolator1994->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1994->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1994);

COrientationInterpolator* OrientationInterpolator1995 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1995->setDEF("Stop_l_index1_RotationInterpolator");
OrientationInterpolator1995->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1995->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1995);

COrientationInterpolator* OrientationInterpolator1996 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1996->setDEF("Stop_l_index2_RotationInterpolator");
OrientationInterpolator1996->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1996->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1996);

COrientationInterpolator* OrientationInterpolator1997 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1997->setDEF("Stop_l_index3_RotationInterpolator");
OrientationInterpolator1997->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1997->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1997);

COrientationInterpolator* OrientationInterpolator1998 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1998->setDEF("Stop_l_middle0_RotationInterpolator");
OrientationInterpolator1998->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1998->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1998);

COrientationInterpolator* OrientationInterpolator1999 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1999->setDEF("Stop_l_middle1_RotationInterpolator");
OrientationInterpolator1999->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1999->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator1999);

COrientationInterpolator* OrientationInterpolator2000 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2000->setDEF("Stop_l_middle2_RotationInterpolator");
OrientationInterpolator2000->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2000->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator2000);

COrientationInterpolator* OrientationInterpolator2001 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2001->setDEF("Stop_l_middle3_RotationInterpolator");
OrientationInterpolator2001->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2001->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator2001);

COrientationInterpolator* OrientationInterpolator2002 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2002->setDEF("Stop_l_ring0_RotationInterpolator");
OrientationInterpolator2002->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2002->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator2002);

COrientationInterpolator* OrientationInterpolator2003 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2003->setDEF("Stop_l_ring1_RotationInterpolator");
OrientationInterpolator2003->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2003->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator2003);

COrientationInterpolator* OrientationInterpolator2004 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2004->setDEF("Stop_l_ring2_RotationInterpolator");
OrientationInterpolator2004->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2004->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator2004);

COrientationInterpolator* OrientationInterpolator2005 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2005->setDEF("Stop_l_ring3_RotationInterpolator");
OrientationInterpolator2005->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2005->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator2005);

COrientationInterpolator* OrientationInterpolator2006 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2006->setDEF("Stop_l_pinky0_RotationInterpolator");
OrientationInterpolator2006->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2006->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator2006);

COrientationInterpolator* OrientationInterpolator2007 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2007->setDEF("Stop_l_pinky1_RotationInterpolator");
OrientationInterpolator2007->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2007->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator2007);

COrientationInterpolator* OrientationInterpolator2008 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2008->setDEF("Stop_l_pinky2_RotationInterpolator");
OrientationInterpolator2008->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2008->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator2008);

COrientationInterpolator* OrientationInterpolator2009 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2009->setDEF("Stop_l_pinky3_RotationInterpolator");
OrientationInterpolator2009->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2009->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator2009);

COrientationInterpolator* OrientationInterpolator2010 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2010->setDEF("Stop_r_sternoclavicular_RotationInterpolator");
OrientationInterpolator2010->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2010->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator2010);

COrientationInterpolator* OrientationInterpolator2011 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2011->setDEF("Stop_r_acromioclavicular_RotationInterpolator");
OrientationInterpolator2011->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2011->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator2011);

COrientationInterpolator* OrientationInterpolator2012 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2012->setDEF("Stop_r_shoulder_RotationInterpolator");
OrientationInterpolator2012->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2012->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator2012);

COrientationInterpolator* OrientationInterpolator2013 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2013->setDEF("Stop_r_elbow_RotationInterpolator");
OrientationInterpolator2013->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2013->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator2013);

COrientationInterpolator* OrientationInterpolator2014 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2014->setDEF("Stop_r_wrist_RotationInterpolator");
OrientationInterpolator2014->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2014->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator2014);

COrientationInterpolator* OrientationInterpolator2015 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2015->setDEF("Stop_r_thumb1_RotationInterpolator");
OrientationInterpolator2015->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2015->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator2015);

COrientationInterpolator* OrientationInterpolator2016 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2016->setDEF("Stop_r_thumb2_RotationInterpolator");
OrientationInterpolator2016->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2016->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator2016);

COrientationInterpolator* OrientationInterpolator2017 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2017->setDEF("Stop_r_thumb3_RotationInterpolator");
OrientationInterpolator2017->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2017->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator2017);

COrientationInterpolator* OrientationInterpolator2018 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2018->setDEF("Stop_r_index0_RotationInterpolator");
OrientationInterpolator2018->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2018->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator2018);

COrientationInterpolator* OrientationInterpolator2019 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2019->setDEF("Stop_r_index1_RotationInterpolator");
OrientationInterpolator2019->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2019->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator2019);

COrientationInterpolator* OrientationInterpolator2020 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2020->setDEF("Stop_r_index2_RotationInterpolator");
OrientationInterpolator2020->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2020->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator2020);

COrientationInterpolator* OrientationInterpolator2021 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2021->setDEF("Stop_r_index3_RotationInterpolator");
OrientationInterpolator2021->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2021->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator2021);

COrientationInterpolator* OrientationInterpolator2022 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2022->setDEF("Stop_r_middle0_RotationInterpolator");
OrientationInterpolator2022->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2022->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator2022);

COrientationInterpolator* OrientationInterpolator2023 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2023->setDEF("Stop_r_middle1_RotationInterpolator");
OrientationInterpolator2023->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2023->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator2023);

COrientationInterpolator* OrientationInterpolator2024 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2024->setDEF("Stop_r_middle2_RotationInterpolator");
OrientationInterpolator2024->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2024->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator2024);

COrientationInterpolator* OrientationInterpolator2025 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2025->setDEF("Stop_r_middle3_RotationInterpolator");
OrientationInterpolator2025->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2025->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator2025);

COrientationInterpolator* OrientationInterpolator2026 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2026->setDEF("Stop_r_ring0_RotationInterpolator");
OrientationInterpolator2026->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2026->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator2026);

COrientationInterpolator* OrientationInterpolator2027 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2027->setDEF("Stop_r_ring1_RotationInterpolator");
OrientationInterpolator2027->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2027->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator2027);

COrientationInterpolator* OrientationInterpolator2028 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2028->setDEF("Stop_r_ring2_RotationInterpolator");
OrientationInterpolator2028->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2028->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator2028);

COrientationInterpolator* OrientationInterpolator2029 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2029->setDEF("Stop_r_ring3_RotationInterpolator");
OrientationInterpolator2029->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2029->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator2029);

COrientationInterpolator* OrientationInterpolator2030 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2030->setDEF("Stop_r_pinky0_RotationInterpolator");
OrientationInterpolator2030->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2030->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator2030);

COrientationInterpolator* OrientationInterpolator2031 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2031->setDEF("Stop_r_pinky1_RotationInterpolator");
OrientationInterpolator2031->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2031->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator2031);

COrientationInterpolator* OrientationInterpolator2032 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2032->setDEF("Stop_r_pinky2_RotationInterpolator");
OrientationInterpolator2032->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2032->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator2032);

COrientationInterpolator* OrientationInterpolator2033 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2033->setDEF("Stop_r_pinky3_RotationInterpolator");
OrientationInterpolator2033->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2033->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1942->addChildren(*OrientationInterpolator2033);

CROUTE* ROUTE2034 = new CROUTE();
ROUTE2034->setFromField("fraction_changed");
ROUTE2034->setFromNode("StopTimer");
ROUTE2034->setToField("set_fraction");
ROUTE2034->setToNode("Stop_humanoid_root_TranslationInterpolator");
Group1942->addChildren(*ROUTE2034);

CROUTE* ROUTE2035 = new CROUTE();
ROUTE2035->setFromField("fraction_changed");
ROUTE2035->setFromNode("StopTimer");
ROUTE2035->setToField("set_fraction");
ROUTE2035->setToNode("Stop_humanoid_root_RotationInterpolator");
Group1942->addChildren(*ROUTE2035);

CROUTE* ROUTE2036 = new CROUTE();
ROUTE2036->setFromField("fraction_changed");
ROUTE2036->setFromNode("StopTimer");
ROUTE2036->setToField("set_fraction");
ROUTE2036->setToNode("Stop_sacroiliac_RotationInterpolator");
Group1942->addChildren(*ROUTE2036);

CROUTE* ROUTE2037 = new CROUTE();
ROUTE2037->setFromField("fraction_changed");
ROUTE2037->setFromNode("StopTimer");
ROUTE2037->setToField("set_fraction");
ROUTE2037->setToNode("Stop_l_hip_RotationInterpolator");
Group1942->addChildren(*ROUTE2037);

CROUTE* ROUTE2038 = new CROUTE();
ROUTE2038->setFromField("fraction_changed");
ROUTE2038->setFromNode("StopTimer");
ROUTE2038->setToField("set_fraction");
ROUTE2038->setToNode("Stop_l_knee_RotationInterpolator");
Group1942->addChildren(*ROUTE2038);

CROUTE* ROUTE2039 = new CROUTE();
ROUTE2039->setFromField("fraction_changed");
ROUTE2039->setFromNode("StopTimer");
ROUTE2039->setToField("set_fraction");
ROUTE2039->setToNode("Stop_l_ankle_RotationInterpolator");
Group1942->addChildren(*ROUTE2039);

CROUTE* ROUTE2040 = new CROUTE();
ROUTE2040->setFromField("fraction_changed");
ROUTE2040->setFromNode("StopTimer");
ROUTE2040->setToField("set_fraction");
ROUTE2040->setToNode("Stop_l_subtalar_RotationInterpolator");
Group1942->addChildren(*ROUTE2040);

CROUTE* ROUTE2041 = new CROUTE();
ROUTE2041->setFromField("fraction_changed");
ROUTE2041->setFromNode("StopTimer");
ROUTE2041->setToField("set_fraction");
ROUTE2041->setToNode("Stop_l_midtarsal_RotationInterpolator");
Group1942->addChildren(*ROUTE2041);

CROUTE* ROUTE2042 = new CROUTE();
ROUTE2042->setFromField("fraction_changed");
ROUTE2042->setFromNode("StopTimer");
ROUTE2042->setToField("set_fraction");
ROUTE2042->setToNode("Stop_l_metatarsal_RotationInterpolator");
Group1942->addChildren(*ROUTE2042);

CROUTE* ROUTE2043 = new CROUTE();
ROUTE2043->setFromField("fraction_changed");
ROUTE2043->setFromNode("StopTimer");
ROUTE2043->setToField("set_fraction");
ROUTE2043->setToNode("Stop_r_hip_RotationInterpolator");
Group1942->addChildren(*ROUTE2043);

CROUTE* ROUTE2044 = new CROUTE();
ROUTE2044->setFromField("fraction_changed");
ROUTE2044->setFromNode("StopTimer");
ROUTE2044->setToField("set_fraction");
ROUTE2044->setToNode("Stop_r_knee_RotationInterpolator");
Group1942->addChildren(*ROUTE2044);

CROUTE* ROUTE2045 = new CROUTE();
ROUTE2045->setFromField("fraction_changed");
ROUTE2045->setFromNode("StopTimer");
ROUTE2045->setToField("set_fraction");
ROUTE2045->setToNode("Stop_r_ankle_RotationInterpolator");
Group1942->addChildren(*ROUTE2045);

CROUTE* ROUTE2046 = new CROUTE();
ROUTE2046->setFromField("fraction_changed");
ROUTE2046->setFromNode("StopTimer");
ROUTE2046->setToField("set_fraction");
ROUTE2046->setToNode("Stop_r_subtalar_RotationInterpolator");
Group1942->addChildren(*ROUTE2046);

CROUTE* ROUTE2047 = new CROUTE();
ROUTE2047->setFromField("fraction_changed");
ROUTE2047->setFromNode("StopTimer");
ROUTE2047->setToField("set_fraction");
ROUTE2047->setToNode("Stop_r_midtarsal_RotationInterpolator");
Group1942->addChildren(*ROUTE2047);

CROUTE* ROUTE2048 = new CROUTE();
ROUTE2048->setFromField("fraction_changed");
ROUTE2048->setFromNode("StopTimer");
ROUTE2048->setToField("set_fraction");
ROUTE2048->setToNode("Stop_r_metatarsal_RotationInterpolator");
Group1942->addChildren(*ROUTE2048);

CROUTE* ROUTE2049 = new CROUTE();
ROUTE2049->setFromField("fraction_changed");
ROUTE2049->setFromNode("StopTimer");
ROUTE2049->setToField("set_fraction");
ROUTE2049->setToNode("Stop_vl5_RotationInterpolator");
Group1942->addChildren(*ROUTE2049);

CROUTE* ROUTE2050 = new CROUTE();
ROUTE2050->setFromField("fraction_changed");
ROUTE2050->setFromNode("StopTimer");
ROUTE2050->setToField("set_fraction");
ROUTE2050->setToNode("Stop_vl4_RotationInterpolator");
Group1942->addChildren(*ROUTE2050);

CROUTE* ROUTE2051 = new CROUTE();
ROUTE2051->setFromField("fraction_changed");
ROUTE2051->setFromNode("StopTimer");
ROUTE2051->setToField("set_fraction");
ROUTE2051->setToNode("Stop_vl3_RotationInterpolator");
Group1942->addChildren(*ROUTE2051);

CROUTE* ROUTE2052 = new CROUTE();
ROUTE2052->setFromField("fraction_changed");
ROUTE2052->setFromNode("StopTimer");
ROUTE2052->setToField("set_fraction");
ROUTE2052->setToNode("Stop_vl2_RotationInterpolator");
Group1942->addChildren(*ROUTE2052);

CROUTE* ROUTE2053 = new CROUTE();
ROUTE2053->setFromField("fraction_changed");
ROUTE2053->setFromNode("StopTimer");
ROUTE2053->setToField("set_fraction");
ROUTE2053->setToNode("Stop_vl1_RotationInterpolator");
Group1942->addChildren(*ROUTE2053);

CROUTE* ROUTE2054 = new CROUTE();
ROUTE2054->setFromField("fraction_changed");
ROUTE2054->setFromNode("StopTimer");
ROUTE2054->setToField("set_fraction");
ROUTE2054->setToNode("Stop_vt12_RotationInterpolator");
Group1942->addChildren(*ROUTE2054);

CROUTE* ROUTE2055 = new CROUTE();
ROUTE2055->setFromField("fraction_changed");
ROUTE2055->setFromNode("StopTimer");
ROUTE2055->setToField("set_fraction");
ROUTE2055->setToNode("Stop_vt11_RotationInterpolator");
Group1942->addChildren(*ROUTE2055);

CROUTE* ROUTE2056 = new CROUTE();
ROUTE2056->setFromField("fraction_changed");
ROUTE2056->setFromNode("StopTimer");
ROUTE2056->setToField("set_fraction");
ROUTE2056->setToNode("Stop_vt10_RotationInterpolator");
Group1942->addChildren(*ROUTE2056);

CROUTE* ROUTE2057 = new CROUTE();
ROUTE2057->setFromField("fraction_changed");
ROUTE2057->setFromNode("StopTimer");
ROUTE2057->setToField("set_fraction");
ROUTE2057->setToNode("Stop_vt9_RotationInterpolator");
Group1942->addChildren(*ROUTE2057);

CROUTE* ROUTE2058 = new CROUTE();
ROUTE2058->setFromField("fraction_changed");
ROUTE2058->setFromNode("StopTimer");
ROUTE2058->setToField("set_fraction");
ROUTE2058->setToNode("Stop_vt8_RotationInterpolator");
Group1942->addChildren(*ROUTE2058);

CROUTE* ROUTE2059 = new CROUTE();
ROUTE2059->setFromField("fraction_changed");
ROUTE2059->setFromNode("StopTimer");
ROUTE2059->setToField("set_fraction");
ROUTE2059->setToNode("Stop_vt7_RotationInterpolator");
Group1942->addChildren(*ROUTE2059);

CROUTE* ROUTE2060 = new CROUTE();
ROUTE2060->setFromField("fraction_changed");
ROUTE2060->setFromNode("StopTimer");
ROUTE2060->setToField("set_fraction");
ROUTE2060->setToNode("Stop_vt6_RotationInterpolator");
Group1942->addChildren(*ROUTE2060);

CROUTE* ROUTE2061 = new CROUTE();
ROUTE2061->setFromField("fraction_changed");
ROUTE2061->setFromNode("StopTimer");
ROUTE2061->setToField("set_fraction");
ROUTE2061->setToNode("Stop_vt5_RotationInterpolator");
Group1942->addChildren(*ROUTE2061);

CROUTE* ROUTE2062 = new CROUTE();
ROUTE2062->setFromField("fraction_changed");
ROUTE2062->setFromNode("StopTimer");
ROUTE2062->setToField("set_fraction");
ROUTE2062->setToNode("Stop_vt4_RotationInterpolator");
Group1942->addChildren(*ROUTE2062);

CROUTE* ROUTE2063 = new CROUTE();
ROUTE2063->setFromField("fraction_changed");
ROUTE2063->setFromNode("StopTimer");
ROUTE2063->setToField("set_fraction");
ROUTE2063->setToNode("Stop_vt3_RotationInterpolator");
Group1942->addChildren(*ROUTE2063);

CROUTE* ROUTE2064 = new CROUTE();
ROUTE2064->setFromField("fraction_changed");
ROUTE2064->setFromNode("StopTimer");
ROUTE2064->setToField("set_fraction");
ROUTE2064->setToNode("Stop_vt2_RotationInterpolator");
Group1942->addChildren(*ROUTE2064);

CROUTE* ROUTE2065 = new CROUTE();
ROUTE2065->setFromField("fraction_changed");
ROUTE2065->setFromNode("StopTimer");
ROUTE2065->setToField("set_fraction");
ROUTE2065->setToNode("Stop_vt1_RotationInterpolator");
Group1942->addChildren(*ROUTE2065);

CROUTE* ROUTE2066 = new CROUTE();
ROUTE2066->setFromField("fraction_changed");
ROUTE2066->setFromNode("StopTimer");
ROUTE2066->setToField("set_fraction");
ROUTE2066->setToNode("Stop_vc7_RotationInterpolator");
Group1942->addChildren(*ROUTE2066);

CROUTE* ROUTE2067 = new CROUTE();
ROUTE2067->setFromField("fraction_changed");
ROUTE2067->setFromNode("StopTimer");
ROUTE2067->setToField("set_fraction");
ROUTE2067->setToNode("Stop_vc6_RotationInterpolator");
Group1942->addChildren(*ROUTE2067);

CROUTE* ROUTE2068 = new CROUTE();
ROUTE2068->setFromField("fraction_changed");
ROUTE2068->setFromNode("StopTimer");
ROUTE2068->setToField("set_fraction");
ROUTE2068->setToNode("Stop_vc5_RotationInterpolator");
Group1942->addChildren(*ROUTE2068);

CROUTE* ROUTE2069 = new CROUTE();
ROUTE2069->setFromField("fraction_changed");
ROUTE2069->setFromNode("StopTimer");
ROUTE2069->setToField("set_fraction");
ROUTE2069->setToNode("Stop_vc4_RotationInterpolator");
Group1942->addChildren(*ROUTE2069);

CROUTE* ROUTE2070 = new CROUTE();
ROUTE2070->setFromField("fraction_changed");
ROUTE2070->setFromNode("StopTimer");
ROUTE2070->setToField("set_fraction");
ROUTE2070->setToNode("Stop_vc3_RotationInterpolator");
Group1942->addChildren(*ROUTE2070);

CROUTE* ROUTE2071 = new CROUTE();
ROUTE2071->setFromField("fraction_changed");
ROUTE2071->setFromNode("StopTimer");
ROUTE2071->setToField("set_fraction");
ROUTE2071->setToNode("Stop_vc2_RotationInterpolator");
Group1942->addChildren(*ROUTE2071);

CROUTE* ROUTE2072 = new CROUTE();
ROUTE2072->setFromField("fraction_changed");
ROUTE2072->setFromNode("StopTimer");
ROUTE2072->setToField("set_fraction");
ROUTE2072->setToNode("Stop_vc1_RotationInterpolator");
Group1942->addChildren(*ROUTE2072);

CROUTE* ROUTE2073 = new CROUTE();
ROUTE2073->setFromField("fraction_changed");
ROUTE2073->setFromNode("StopTimer");
ROUTE2073->setToField("set_fraction");
ROUTE2073->setToNode("Stop_skullbase_RotationInterpolator");
Group1942->addChildren(*ROUTE2073);

CROUTE* ROUTE2074 = new CROUTE();
ROUTE2074->setFromField("fraction_changed");
ROUTE2074->setFromNode("StopTimer");
ROUTE2074->setToField("set_fraction");
ROUTE2074->setToNode("Stop_l_eyeball_joint_RotationInterpolator");
Group1942->addChildren(*ROUTE2074);

CROUTE* ROUTE2075 = new CROUTE();
ROUTE2075->setFromField("fraction_changed");
ROUTE2075->setFromNode("StopTimer");
ROUTE2075->setToField("set_fraction");
ROUTE2075->setToNode("Stop_r_eyeball_joint_RotationInterpolator");
Group1942->addChildren(*ROUTE2075);

CROUTE* ROUTE2076 = new CROUTE();
ROUTE2076->setFromField("fraction_changed");
ROUTE2076->setFromNode("StopTimer");
ROUTE2076->setToField("set_fraction");
ROUTE2076->setToNode("Stop_l_sternoclavicular_RotationInterpolator");
Group1942->addChildren(*ROUTE2076);

CROUTE* ROUTE2077 = new CROUTE();
ROUTE2077->setFromField("fraction_changed");
ROUTE2077->setFromNode("StopTimer");
ROUTE2077->setToField("set_fraction");
ROUTE2077->setToNode("Stop_l_acromioclavicular_RotationInterpolator");
Group1942->addChildren(*ROUTE2077);

CROUTE* ROUTE2078 = new CROUTE();
ROUTE2078->setFromField("fraction_changed");
ROUTE2078->setFromNode("StopTimer");
ROUTE2078->setToField("set_fraction");
ROUTE2078->setToNode("Stop_l_shoulder_RotationInterpolator");
Group1942->addChildren(*ROUTE2078);

CROUTE* ROUTE2079 = new CROUTE();
ROUTE2079->setFromField("fraction_changed");
ROUTE2079->setFromNode("StopTimer");
ROUTE2079->setToField("set_fraction");
ROUTE2079->setToNode("Stop_l_elbow_RotationInterpolator");
Group1942->addChildren(*ROUTE2079);

CROUTE* ROUTE2080 = new CROUTE();
ROUTE2080->setFromField("fraction_changed");
ROUTE2080->setFromNode("StopTimer");
ROUTE2080->setToField("set_fraction");
ROUTE2080->setToNode("Stop_l_wrist_RotationInterpolator");
Group1942->addChildren(*ROUTE2080);

CROUTE* ROUTE2081 = new CROUTE();
ROUTE2081->setFromField("fraction_changed");
ROUTE2081->setFromNode("StopTimer");
ROUTE2081->setToField("set_fraction");
ROUTE2081->setToNode("Stop_l_thumb1_RotationInterpolator");
Group1942->addChildren(*ROUTE2081);

CROUTE* ROUTE2082 = new CROUTE();
ROUTE2082->setFromField("fraction_changed");
ROUTE2082->setFromNode("StopTimer");
ROUTE2082->setToField("set_fraction");
ROUTE2082->setToNode("Stop_l_thumb2_RotationInterpolator");
Group1942->addChildren(*ROUTE2082);

CROUTE* ROUTE2083 = new CROUTE();
ROUTE2083->setFromField("fraction_changed");
ROUTE2083->setFromNode("StopTimer");
ROUTE2083->setToField("set_fraction");
ROUTE2083->setToNode("Stop_l_thumb3_RotationInterpolator");
Group1942->addChildren(*ROUTE2083);

CROUTE* ROUTE2084 = new CROUTE();
ROUTE2084->setFromField("fraction_changed");
ROUTE2084->setFromNode("StopTimer");
ROUTE2084->setToField("set_fraction");
ROUTE2084->setToNode("Stop_l_index0_RotationInterpolator");
Group1942->addChildren(*ROUTE2084);

CROUTE* ROUTE2085 = new CROUTE();
ROUTE2085->setFromField("fraction_changed");
ROUTE2085->setFromNode("StopTimer");
ROUTE2085->setToField("set_fraction");
ROUTE2085->setToNode("Stop_l_index1_RotationInterpolator");
Group1942->addChildren(*ROUTE2085);

CROUTE* ROUTE2086 = new CROUTE();
ROUTE2086->setFromField("fraction_changed");
ROUTE2086->setFromNode("StopTimer");
ROUTE2086->setToField("set_fraction");
ROUTE2086->setToNode("Stop_l_index2_RotationInterpolator");
Group1942->addChildren(*ROUTE2086);

CROUTE* ROUTE2087 = new CROUTE();
ROUTE2087->setFromField("fraction_changed");
ROUTE2087->setFromNode("StopTimer");
ROUTE2087->setToField("set_fraction");
ROUTE2087->setToNode("Stop_l_index3_RotationInterpolator");
Group1942->addChildren(*ROUTE2087);

CROUTE* ROUTE2088 = new CROUTE();
ROUTE2088->setFromField("fraction_changed");
ROUTE2088->setFromNode("StopTimer");
ROUTE2088->setToField("set_fraction");
ROUTE2088->setToNode("Stop_l_middle0_RotationInterpolator");
Group1942->addChildren(*ROUTE2088);

CROUTE* ROUTE2089 = new CROUTE();
ROUTE2089->setFromField("fraction_changed");
ROUTE2089->setFromNode("StopTimer");
ROUTE2089->setToField("set_fraction");
ROUTE2089->setToNode("Stop_l_middle1_RotationInterpolator");
Group1942->addChildren(*ROUTE2089);

CROUTE* ROUTE2090 = new CROUTE();
ROUTE2090->setFromField("fraction_changed");
ROUTE2090->setFromNode("StopTimer");
ROUTE2090->setToField("set_fraction");
ROUTE2090->setToNode("Stop_l_middle2_RotationInterpolator");
Group1942->addChildren(*ROUTE2090);

CROUTE* ROUTE2091 = new CROUTE();
ROUTE2091->setFromField("fraction_changed");
ROUTE2091->setFromNode("StopTimer");
ROUTE2091->setToField("set_fraction");
ROUTE2091->setToNode("Stop_l_middle3_RotationInterpolator");
Group1942->addChildren(*ROUTE2091);

CROUTE* ROUTE2092 = new CROUTE();
ROUTE2092->setFromField("fraction_changed");
ROUTE2092->setFromNode("StopTimer");
ROUTE2092->setToField("set_fraction");
ROUTE2092->setToNode("Stop_l_ring0_RotationInterpolator");
Group1942->addChildren(*ROUTE2092);

CROUTE* ROUTE2093 = new CROUTE();
ROUTE2093->setFromField("fraction_changed");
ROUTE2093->setFromNode("StopTimer");
ROUTE2093->setToField("set_fraction");
ROUTE2093->setToNode("Stop_l_ring1_RotationInterpolator");
Group1942->addChildren(*ROUTE2093);

CROUTE* ROUTE2094 = new CROUTE();
ROUTE2094->setFromField("fraction_changed");
ROUTE2094->setFromNode("StopTimer");
ROUTE2094->setToField("set_fraction");
ROUTE2094->setToNode("Stop_l_ring2_RotationInterpolator");
Group1942->addChildren(*ROUTE2094);

CROUTE* ROUTE2095 = new CROUTE();
ROUTE2095->setFromField("fraction_changed");
ROUTE2095->setFromNode("StopTimer");
ROUTE2095->setToField("set_fraction");
ROUTE2095->setToNode("Stop_l_ring3_RotationInterpolator");
Group1942->addChildren(*ROUTE2095);

CROUTE* ROUTE2096 = new CROUTE();
ROUTE2096->setFromField("fraction_changed");
ROUTE2096->setFromNode("StopTimer");
ROUTE2096->setToField("set_fraction");
ROUTE2096->setToNode("Stop_l_pinky0_RotationInterpolator");
Group1942->addChildren(*ROUTE2096);

CROUTE* ROUTE2097 = new CROUTE();
ROUTE2097->setFromField("fraction_changed");
ROUTE2097->setFromNode("StopTimer");
ROUTE2097->setToField("set_fraction");
ROUTE2097->setToNode("Stop_l_pinky1_RotationInterpolator");
Group1942->addChildren(*ROUTE2097);

CROUTE* ROUTE2098 = new CROUTE();
ROUTE2098->setFromField("fraction_changed");
ROUTE2098->setFromNode("StopTimer");
ROUTE2098->setToField("set_fraction");
ROUTE2098->setToNode("Stop_l_pinky2_RotationInterpolator");
Group1942->addChildren(*ROUTE2098);

CROUTE* ROUTE2099 = new CROUTE();
ROUTE2099->setFromField("fraction_changed");
ROUTE2099->setFromNode("StopTimer");
ROUTE2099->setToField("set_fraction");
ROUTE2099->setToNode("Stop_l_pinky3_RotationInterpolator");
Group1942->addChildren(*ROUTE2099);

CROUTE* ROUTE2100 = new CROUTE();
ROUTE2100->setFromField("fraction_changed");
ROUTE2100->setFromNode("StopTimer");
ROUTE2100->setToField("set_fraction");
ROUTE2100->setToNode("Stop_r_sternoclavicular_RotationInterpolator");
Group1942->addChildren(*ROUTE2100);

CROUTE* ROUTE2101 = new CROUTE();
ROUTE2101->setFromField("fraction_changed");
ROUTE2101->setFromNode("StopTimer");
ROUTE2101->setToField("set_fraction");
ROUTE2101->setToNode("Stop_r_acromioclavicular_RotationInterpolator");
Group1942->addChildren(*ROUTE2101);

CROUTE* ROUTE2102 = new CROUTE();
ROUTE2102->setFromField("fraction_changed");
ROUTE2102->setFromNode("StopTimer");
ROUTE2102->setToField("set_fraction");
ROUTE2102->setToNode("Stop_r_shoulder_RotationInterpolator");
Group1942->addChildren(*ROUTE2102);

CROUTE* ROUTE2103 = new CROUTE();
ROUTE2103->setFromField("fraction_changed");
ROUTE2103->setFromNode("StopTimer");
ROUTE2103->setToField("set_fraction");
ROUTE2103->setToNode("Stop_r_elbow_RotationInterpolator");
Group1942->addChildren(*ROUTE2103);

CROUTE* ROUTE2104 = new CROUTE();
ROUTE2104->setFromField("fraction_changed");
ROUTE2104->setFromNode("StopTimer");
ROUTE2104->setToField("set_fraction");
ROUTE2104->setToNode("Stop_r_wrist_RotationInterpolator");
Group1942->addChildren(*ROUTE2104);

CROUTE* ROUTE2105 = new CROUTE();
ROUTE2105->setFromField("fraction_changed");
ROUTE2105->setFromNode("StopTimer");
ROUTE2105->setToField("set_fraction");
ROUTE2105->setToNode("Stop_r_thumb1_RotationInterpolator");
Group1942->addChildren(*ROUTE2105);

CROUTE* ROUTE2106 = new CROUTE();
ROUTE2106->setFromField("fraction_changed");
ROUTE2106->setFromNode("StopTimer");
ROUTE2106->setToField("set_fraction");
ROUTE2106->setToNode("Stop_r_thumb2_RotationInterpolator");
Group1942->addChildren(*ROUTE2106);

CROUTE* ROUTE2107 = new CROUTE();
ROUTE2107->setFromField("fraction_changed");
ROUTE2107->setFromNode("StopTimer");
ROUTE2107->setToField("set_fraction");
ROUTE2107->setToNode("Stop_r_thumb3_RotationInterpolator");
Group1942->addChildren(*ROUTE2107);

CROUTE* ROUTE2108 = new CROUTE();
ROUTE2108->setFromField("fraction_changed");
ROUTE2108->setFromNode("StopTimer");
ROUTE2108->setToField("set_fraction");
ROUTE2108->setToNode("Stop_r_index0_RotationInterpolator");
Group1942->addChildren(*ROUTE2108);

CROUTE* ROUTE2109 = new CROUTE();
ROUTE2109->setFromField("fraction_changed");
ROUTE2109->setFromNode("StopTimer");
ROUTE2109->setToField("set_fraction");
ROUTE2109->setToNode("Stop_r_index1_RotationInterpolator");
Group1942->addChildren(*ROUTE2109);

CROUTE* ROUTE2110 = new CROUTE();
ROUTE2110->setFromField("fraction_changed");
ROUTE2110->setFromNode("StopTimer");
ROUTE2110->setToField("set_fraction");
ROUTE2110->setToNode("Stop_r_index2_RotationInterpolator");
Group1942->addChildren(*ROUTE2110);

CROUTE* ROUTE2111 = new CROUTE();
ROUTE2111->setFromField("fraction_changed");
ROUTE2111->setFromNode("StopTimer");
ROUTE2111->setToField("set_fraction");
ROUTE2111->setToNode("Stop_r_index3_RotationInterpolator");
Group1942->addChildren(*ROUTE2111);

CROUTE* ROUTE2112 = new CROUTE();
ROUTE2112->setFromField("fraction_changed");
ROUTE2112->setFromNode("StopTimer");
ROUTE2112->setToField("set_fraction");
ROUTE2112->setToNode("Stop_r_middle0_RotationInterpolator");
Group1942->addChildren(*ROUTE2112);

CROUTE* ROUTE2113 = new CROUTE();
ROUTE2113->setFromField("fraction_changed");
ROUTE2113->setFromNode("StopTimer");
ROUTE2113->setToField("set_fraction");
ROUTE2113->setToNode("Stop_r_middle1_RotationInterpolator");
Group1942->addChildren(*ROUTE2113);

CROUTE* ROUTE2114 = new CROUTE();
ROUTE2114->setFromField("fraction_changed");
ROUTE2114->setFromNode("StopTimer");
ROUTE2114->setToField("set_fraction");
ROUTE2114->setToNode("Stop_r_middle2_RotationInterpolator");
Group1942->addChildren(*ROUTE2114);

CROUTE* ROUTE2115 = new CROUTE();
ROUTE2115->setFromField("fraction_changed");
ROUTE2115->setFromNode("StopTimer");
ROUTE2115->setToField("set_fraction");
ROUTE2115->setToNode("Stop_r_middle3_RotationInterpolator");
Group1942->addChildren(*ROUTE2115);

CROUTE* ROUTE2116 = new CROUTE();
ROUTE2116->setFromField("fraction_changed");
ROUTE2116->setFromNode("StopTimer");
ROUTE2116->setToField("set_fraction");
ROUTE2116->setToNode("Stop_r_ring0_RotationInterpolator");
Group1942->addChildren(*ROUTE2116);

CROUTE* ROUTE2117 = new CROUTE();
ROUTE2117->setFromField("fraction_changed");
ROUTE2117->setFromNode("StopTimer");
ROUTE2117->setToField("set_fraction");
ROUTE2117->setToNode("Stop_r_ring1_RotationInterpolator");
Group1942->addChildren(*ROUTE2117);

CROUTE* ROUTE2118 = new CROUTE();
ROUTE2118->setFromField("fraction_changed");
ROUTE2118->setFromNode("StopTimer");
ROUTE2118->setToField("set_fraction");
ROUTE2118->setToNode("Stop_r_ring2_RotationInterpolator");
Group1942->addChildren(*ROUTE2118);

CROUTE* ROUTE2119 = new CROUTE();
ROUTE2119->setFromField("fraction_changed");
ROUTE2119->setFromNode("StopTimer");
ROUTE2119->setToField("set_fraction");
ROUTE2119->setToNode("Stop_r_ring3_RotationInterpolator");
Group1942->addChildren(*ROUTE2119);

CROUTE* ROUTE2120 = new CROUTE();
ROUTE2120->setFromField("fraction_changed");
ROUTE2120->setFromNode("StopTimer");
ROUTE2120->setToField("set_fraction");
ROUTE2120->setToNode("Stop_r_pinky0_RotationInterpolator");
Group1942->addChildren(*ROUTE2120);

CROUTE* ROUTE2121 = new CROUTE();
ROUTE2121->setFromField("fraction_changed");
ROUTE2121->setFromNode("StopTimer");
ROUTE2121->setToField("set_fraction");
ROUTE2121->setToNode("Stop_r_pinky1_RotationInterpolator");
Group1942->addChildren(*ROUTE2121);

CROUTE* ROUTE2122 = new CROUTE();
ROUTE2122->setFromField("fraction_changed");
ROUTE2122->setFromNode("StopTimer");
ROUTE2122->setToField("set_fraction");
ROUTE2122->setToNode("Stop_r_pinky2_RotationInterpolator");
Group1942->addChildren(*ROUTE2122);

CROUTE* ROUTE2123 = new CROUTE();
ROUTE2123->setFromField("fraction_changed");
ROUTE2123->setFromNode("StopTimer");
ROUTE2123->setToField("set_fraction");
ROUTE2123->setToNode("Stop_r_pinky3_RotationInterpolator");
Group1942->addChildren(*ROUTE2123);

CROUTE* ROUTE2124 = new CROUTE();
ROUTE2124->setFromField("value_changed");
ROUTE2124->setFromNode("Stop_humanoid_root_TranslationInterpolator");
ROUTE2124->setToField("translation");
ROUTE2124->setToNode("hanim_humanoid_root");
Group1942->addChildren(*ROUTE2124);

CROUTE* ROUTE2125 = new CROUTE();
ROUTE2125->setFromField("value_changed");
ROUTE2125->setFromNode("Stop_humanoid_root_RotationInterpolator");
ROUTE2125->setToField("rotation");
ROUTE2125->setToNode("hanim_humanoid_root");
Group1942->addChildren(*ROUTE2125);

CROUTE* ROUTE2126 = new CROUTE();
ROUTE2126->setFromField("value_changed");
ROUTE2126->setFromNode("Stop_sacroiliac_RotationInterpolator");
ROUTE2126->setToField("rotation");
ROUTE2126->setToNode("hanim_sacroiliac");
Group1942->addChildren(*ROUTE2126);

CROUTE* ROUTE2127 = new CROUTE();
ROUTE2127->setFromField("value_changed");
ROUTE2127->setFromNode("Stop_l_hip_RotationInterpolator");
ROUTE2127->setToField("rotation");
ROUTE2127->setToNode("hanim_l_hip");
Group1942->addChildren(*ROUTE2127);

CROUTE* ROUTE2128 = new CROUTE();
ROUTE2128->setFromField("value_changed");
ROUTE2128->setFromNode("Stop_l_knee_RotationInterpolator");
ROUTE2128->setToField("rotation");
ROUTE2128->setToNode("hanim_l_knee");
Group1942->addChildren(*ROUTE2128);

CROUTE* ROUTE2129 = new CROUTE();
ROUTE2129->setFromField("value_changed");
ROUTE2129->setFromNode("Stop_l_ankle_RotationInterpolator");
ROUTE2129->setToField("rotation");
ROUTE2129->setToNode("hanim_l_ankle");
Group1942->addChildren(*ROUTE2129);

CROUTE* ROUTE2130 = new CROUTE();
ROUTE2130->setFromField("value_changed");
ROUTE2130->setFromNode("Stop_l_subtalar_RotationInterpolator");
ROUTE2130->setToField("rotation");
ROUTE2130->setToNode("hanim_l_subtalar");
Group1942->addChildren(*ROUTE2130);

CROUTE* ROUTE2131 = new CROUTE();
ROUTE2131->setFromField("value_changed");
ROUTE2131->setFromNode("Stop_l_midtarsal_RotationInterpolator");
ROUTE2131->setToField("rotation");
ROUTE2131->setToNode("hanim_l_midtarsal");
Group1942->addChildren(*ROUTE2131);

CROUTE* ROUTE2132 = new CROUTE();
ROUTE2132->setFromField("value_changed");
ROUTE2132->setFromNode("Stop_l_metatarsal_RotationInterpolator");
ROUTE2132->setToField("rotation");
ROUTE2132->setToNode("hanim_l_metatarsal");
Group1942->addChildren(*ROUTE2132);

CROUTE* ROUTE2133 = new CROUTE();
ROUTE2133->setFromField("value_changed");
ROUTE2133->setFromNode("Stop_r_hip_RotationInterpolator");
ROUTE2133->setToField("rotation");
ROUTE2133->setToNode("hanim_r_hip");
Group1942->addChildren(*ROUTE2133);

CROUTE* ROUTE2134 = new CROUTE();
ROUTE2134->setFromField("value_changed");
ROUTE2134->setFromNode("Stop_r_knee_RotationInterpolator");
ROUTE2134->setToField("rotation");
ROUTE2134->setToNode("hanim_r_knee");
Group1942->addChildren(*ROUTE2134);

CROUTE* ROUTE2135 = new CROUTE();
ROUTE2135->setFromField("value_changed");
ROUTE2135->setFromNode("Stop_r_ankle_RotationInterpolator");
ROUTE2135->setToField("rotation");
ROUTE2135->setToNode("hanim_r_ankle");
Group1942->addChildren(*ROUTE2135);

CROUTE* ROUTE2136 = new CROUTE();
ROUTE2136->setFromField("value_changed");
ROUTE2136->setFromNode("Stop_r_subtalar_RotationInterpolator");
ROUTE2136->setToField("rotation");
ROUTE2136->setToNode("hanim_r_subtalar");
Group1942->addChildren(*ROUTE2136);

CROUTE* ROUTE2137 = new CROUTE();
ROUTE2137->setFromField("value_changed");
ROUTE2137->setFromNode("Stop_r_midtarsal_RotationInterpolator");
ROUTE2137->setToField("rotation");
ROUTE2137->setToNode("hanim_r_midtarsal");
Group1942->addChildren(*ROUTE2137);

CROUTE* ROUTE2138 = new CROUTE();
ROUTE2138->setFromField("value_changed");
ROUTE2138->setFromNode("Stop_r_metatarsal_RotationInterpolator");
ROUTE2138->setToField("rotation");
ROUTE2138->setToNode("hanim_r_metatarsal");
Group1942->addChildren(*ROUTE2138);

CROUTE* ROUTE2139 = new CROUTE();
ROUTE2139->setFromField("value_changed");
ROUTE2139->setFromNode("Stop_vl5_RotationInterpolator");
ROUTE2139->setToField("rotation");
ROUTE2139->setToNode("hanim_vl5");
Group1942->addChildren(*ROUTE2139);

CROUTE* ROUTE2140 = new CROUTE();
ROUTE2140->setFromField("value_changed");
ROUTE2140->setFromNode("Stop_vl4_RotationInterpolator");
ROUTE2140->setToField("rotation");
ROUTE2140->setToNode("hanim_vl4");
Group1942->addChildren(*ROUTE2140);

CROUTE* ROUTE2141 = new CROUTE();
ROUTE2141->setFromField("value_changed");
ROUTE2141->setFromNode("Stop_vl3_RotationInterpolator");
ROUTE2141->setToField("rotation");
ROUTE2141->setToNode("hanim_vl3");
Group1942->addChildren(*ROUTE2141);

CROUTE* ROUTE2142 = new CROUTE();
ROUTE2142->setFromField("value_changed");
ROUTE2142->setFromNode("Stop_vl2_RotationInterpolator");
ROUTE2142->setToField("rotation");
ROUTE2142->setToNode("hanim_vl2");
Group1942->addChildren(*ROUTE2142);

CROUTE* ROUTE2143 = new CROUTE();
ROUTE2143->setFromField("value_changed");
ROUTE2143->setFromNode("Stop_vl1_RotationInterpolator");
ROUTE2143->setToField("rotation");
ROUTE2143->setToNode("hanim_vl1");
Group1942->addChildren(*ROUTE2143);

CROUTE* ROUTE2144 = new CROUTE();
ROUTE2144->setFromField("value_changed");
ROUTE2144->setFromNode("Stop_vt12_RotationInterpolator");
ROUTE2144->setToField("rotation");
ROUTE2144->setToNode("hanim_vt12");
Group1942->addChildren(*ROUTE2144);

CROUTE* ROUTE2145 = new CROUTE();
ROUTE2145->setFromField("value_changed");
ROUTE2145->setFromNode("Stop_vt11_RotationInterpolator");
ROUTE2145->setToField("rotation");
ROUTE2145->setToNode("hanim_vt11");
Group1942->addChildren(*ROUTE2145);

CROUTE* ROUTE2146 = new CROUTE();
ROUTE2146->setFromField("value_changed");
ROUTE2146->setFromNode("Stop_vt10_RotationInterpolator");
ROUTE2146->setToField("rotation");
ROUTE2146->setToNode("hanim_vt10");
Group1942->addChildren(*ROUTE2146);

CROUTE* ROUTE2147 = new CROUTE();
ROUTE2147->setFromField("value_changed");
ROUTE2147->setFromNode("Stop_vt9_RotationInterpolator");
ROUTE2147->setToField("rotation");
ROUTE2147->setToNode("hanim_vt9");
Group1942->addChildren(*ROUTE2147);

CROUTE* ROUTE2148 = new CROUTE();
ROUTE2148->setFromField("value_changed");
ROUTE2148->setFromNode("Stop_vt8_RotationInterpolator");
ROUTE2148->setToField("rotation");
ROUTE2148->setToNode("hanim_vt8");
Group1942->addChildren(*ROUTE2148);

CROUTE* ROUTE2149 = new CROUTE();
ROUTE2149->setFromField("value_changed");
ROUTE2149->setFromNode("Stop_vt7_RotationInterpolator");
ROUTE2149->setToField("rotation");
ROUTE2149->setToNode("hanim_vt7");
Group1942->addChildren(*ROUTE2149);

CROUTE* ROUTE2150 = new CROUTE();
ROUTE2150->setFromField("value_changed");
ROUTE2150->setFromNode("Stop_vt6_RotationInterpolator");
ROUTE2150->setToField("rotation");
ROUTE2150->setToNode("hanim_vt6");
Group1942->addChildren(*ROUTE2150);

CROUTE* ROUTE2151 = new CROUTE();
ROUTE2151->setFromField("value_changed");
ROUTE2151->setFromNode("Stop_vt5_RotationInterpolator");
ROUTE2151->setToField("rotation");
ROUTE2151->setToNode("hanim_vt5");
Group1942->addChildren(*ROUTE2151);

CROUTE* ROUTE2152 = new CROUTE();
ROUTE2152->setFromField("value_changed");
ROUTE2152->setFromNode("Stop_vt4_RotationInterpolator");
ROUTE2152->setToField("rotation");
ROUTE2152->setToNode("hanim_vt4");
Group1942->addChildren(*ROUTE2152);

CROUTE* ROUTE2153 = new CROUTE();
ROUTE2153->setFromField("value_changed");
ROUTE2153->setFromNode("Stop_vt3_RotationInterpolator");
ROUTE2153->setToField("rotation");
ROUTE2153->setToNode("hanim_vt3");
Group1942->addChildren(*ROUTE2153);

CROUTE* ROUTE2154 = new CROUTE();
ROUTE2154->setFromField("value_changed");
ROUTE2154->setFromNode("Stop_vt2_RotationInterpolator");
ROUTE2154->setToField("rotation");
ROUTE2154->setToNode("hanim_vt2");
Group1942->addChildren(*ROUTE2154);

CROUTE* ROUTE2155 = new CROUTE();
ROUTE2155->setFromField("value_changed");
ROUTE2155->setFromNode("Stop_vt1_RotationInterpolator");
ROUTE2155->setToField("rotation");
ROUTE2155->setToNode("hanim_vt1");
Group1942->addChildren(*ROUTE2155);

CROUTE* ROUTE2156 = new CROUTE();
ROUTE2156->setFromField("value_changed");
ROUTE2156->setFromNode("Stop_vc7_RotationInterpolator");
ROUTE2156->setToField("rotation");
ROUTE2156->setToNode("hanim_vc7");
Group1942->addChildren(*ROUTE2156);

CROUTE* ROUTE2157 = new CROUTE();
ROUTE2157->setFromField("value_changed");
ROUTE2157->setFromNode("Stop_vc6_RotationInterpolator");
ROUTE2157->setToField("rotation");
ROUTE2157->setToNode("hanim_vc6");
Group1942->addChildren(*ROUTE2157);

CROUTE* ROUTE2158 = new CROUTE();
ROUTE2158->setFromField("value_changed");
ROUTE2158->setFromNode("Stop_vc5_RotationInterpolator");
ROUTE2158->setToField("rotation");
ROUTE2158->setToNode("hanim_vc5");
Group1942->addChildren(*ROUTE2158);

CROUTE* ROUTE2159 = new CROUTE();
ROUTE2159->setFromField("value_changed");
ROUTE2159->setFromNode("Stop_vc4_RotationInterpolator");
ROUTE2159->setToField("rotation");
ROUTE2159->setToNode("hanim_vc4");
Group1942->addChildren(*ROUTE2159);

CROUTE* ROUTE2160 = new CROUTE();
ROUTE2160->setFromField("value_changed");
ROUTE2160->setFromNode("Stop_vc3_RotationInterpolator");
ROUTE2160->setToField("rotation");
ROUTE2160->setToNode("hanim_vc3");
Group1942->addChildren(*ROUTE2160);

CROUTE* ROUTE2161 = new CROUTE();
ROUTE2161->setFromField("value_changed");
ROUTE2161->setFromNode("Stop_vc2_RotationInterpolator");
ROUTE2161->setToField("rotation");
ROUTE2161->setToNode("hanim_vc2");
Group1942->addChildren(*ROUTE2161);

CROUTE* ROUTE2162 = new CROUTE();
ROUTE2162->setFromField("value_changed");
ROUTE2162->setFromNode("Stop_vc1_RotationInterpolator");
ROUTE2162->setToField("rotation");
ROUTE2162->setToNode("hanim_vc1");
Group1942->addChildren(*ROUTE2162);

CROUTE* ROUTE2163 = new CROUTE();
ROUTE2163->setFromField("value_changed");
ROUTE2163->setFromNode("Stop_skullbase_RotationInterpolator");
ROUTE2163->setToField("rotation");
ROUTE2163->setToNode("hanim_skullbase");
Group1942->addChildren(*ROUTE2163);

CROUTE* ROUTE2164 = new CROUTE();
ROUTE2164->setFromField("value_changed");
ROUTE2164->setFromNode("Stop_l_eyeball_joint_RotationInterpolator");
ROUTE2164->setToField("rotation");
ROUTE2164->setToNode("hanim_l_eyeball_joint");
Group1942->addChildren(*ROUTE2164);

CROUTE* ROUTE2165 = new CROUTE();
ROUTE2165->setFromField("value_changed");
ROUTE2165->setFromNode("Stop_r_eyeball_joint_RotationInterpolator");
ROUTE2165->setToField("rotation");
ROUTE2165->setToNode("hanim_r_eyeball_joint");
Group1942->addChildren(*ROUTE2165);

CROUTE* ROUTE2166 = new CROUTE();
ROUTE2166->setFromField("value_changed");
ROUTE2166->setFromNode("Stop_l_sternoclavicular_RotationInterpolator");
ROUTE2166->setToField("rotation");
ROUTE2166->setToNode("hanim_l_sternoclavicular");
Group1942->addChildren(*ROUTE2166);

CROUTE* ROUTE2167 = new CROUTE();
ROUTE2167->setFromField("value_changed");
ROUTE2167->setFromNode("Stop_l_acromioclavicular_RotationInterpolator");
ROUTE2167->setToField("rotation");
ROUTE2167->setToNode("hanim_l_acromioclavicular");
Group1942->addChildren(*ROUTE2167);

CROUTE* ROUTE2168 = new CROUTE();
ROUTE2168->setFromField("value_changed");
ROUTE2168->setFromNode("Stop_l_shoulder_RotationInterpolator");
ROUTE2168->setToField("rotation");
ROUTE2168->setToNode("hanim_l_shoulder");
Group1942->addChildren(*ROUTE2168);

CROUTE* ROUTE2169 = new CROUTE();
ROUTE2169->setFromField("value_changed");
ROUTE2169->setFromNode("Stop_l_elbow_RotationInterpolator");
ROUTE2169->setToField("rotation");
ROUTE2169->setToNode("hanim_l_elbow");
Group1942->addChildren(*ROUTE2169);

CROUTE* ROUTE2170 = new CROUTE();
ROUTE2170->setFromField("value_changed");
ROUTE2170->setFromNode("Stop_l_wrist_RotationInterpolator");
ROUTE2170->setToField("rotation");
ROUTE2170->setToNode("hanim_l_wrist");
Group1942->addChildren(*ROUTE2170);

CROUTE* ROUTE2171 = new CROUTE();
ROUTE2171->setFromField("value_changed");
ROUTE2171->setFromNode("Stop_l_thumb1_RotationInterpolator");
ROUTE2171->setToField("rotation");
ROUTE2171->setToNode("hanim_l_thumb1");
Group1942->addChildren(*ROUTE2171);

CROUTE* ROUTE2172 = new CROUTE();
ROUTE2172->setFromField("value_changed");
ROUTE2172->setFromNode("Stop_l_thumb2_RotationInterpolator");
ROUTE2172->setToField("rotation");
ROUTE2172->setToNode("hanim_l_thumb2");
Group1942->addChildren(*ROUTE2172);

CROUTE* ROUTE2173 = new CROUTE();
ROUTE2173->setFromField("value_changed");
ROUTE2173->setFromNode("Stop_l_thumb3_RotationInterpolator");
ROUTE2173->setToField("rotation");
ROUTE2173->setToNode("hanim_l_thumb3");
Group1942->addChildren(*ROUTE2173);

CROUTE* ROUTE2174 = new CROUTE();
ROUTE2174->setFromField("value_changed");
ROUTE2174->setFromNode("Stop_l_index0_RotationInterpolator");
ROUTE2174->setToField("rotation");
ROUTE2174->setToNode("hanim_l_index0");
Group1942->addChildren(*ROUTE2174);

CROUTE* ROUTE2175 = new CROUTE();
ROUTE2175->setFromField("value_changed");
ROUTE2175->setFromNode("Stop_l_index1_RotationInterpolator");
ROUTE2175->setToField("rotation");
ROUTE2175->setToNode("hanim_l_index1");
Group1942->addChildren(*ROUTE2175);

CROUTE* ROUTE2176 = new CROUTE();
ROUTE2176->setFromField("value_changed");
ROUTE2176->setFromNode("Stop_l_index2_RotationInterpolator");
ROUTE2176->setToField("rotation");
ROUTE2176->setToNode("hanim_l_index2");
Group1942->addChildren(*ROUTE2176);

CROUTE* ROUTE2177 = new CROUTE();
ROUTE2177->setFromField("value_changed");
ROUTE2177->setFromNode("Stop_l_index3_RotationInterpolator");
ROUTE2177->setToField("rotation");
ROUTE2177->setToNode("hanim_l_index3");
Group1942->addChildren(*ROUTE2177);

CROUTE* ROUTE2178 = new CROUTE();
ROUTE2178->setFromField("value_changed");
ROUTE2178->setFromNode("Stop_l_middle0_RotationInterpolator");
ROUTE2178->setToField("rotation");
ROUTE2178->setToNode("hanim_l_middle0");
Group1942->addChildren(*ROUTE2178);

CROUTE* ROUTE2179 = new CROUTE();
ROUTE2179->setFromField("value_changed");
ROUTE2179->setFromNode("Stop_l_middle1_RotationInterpolator");
ROUTE2179->setToField("rotation");
ROUTE2179->setToNode("hanim_l_middle1");
Group1942->addChildren(*ROUTE2179);

CROUTE* ROUTE2180 = new CROUTE();
ROUTE2180->setFromField("value_changed");
ROUTE2180->setFromNode("Stop_l_middle2_RotationInterpolator");
ROUTE2180->setToField("rotation");
ROUTE2180->setToNode("hanim_l_middle2");
Group1942->addChildren(*ROUTE2180);

CROUTE* ROUTE2181 = new CROUTE();
ROUTE2181->setFromField("value_changed");
ROUTE2181->setFromNode("Stop_l_middle3_RotationInterpolator");
ROUTE2181->setToField("rotation");
ROUTE2181->setToNode("hanim_l_middle3");
Group1942->addChildren(*ROUTE2181);

CROUTE* ROUTE2182 = new CROUTE();
ROUTE2182->setFromField("value_changed");
ROUTE2182->setFromNode("Stop_l_ring0_RotationInterpolator");
ROUTE2182->setToField("rotation");
ROUTE2182->setToNode("hanim_l_ring0");
Group1942->addChildren(*ROUTE2182);

CROUTE* ROUTE2183 = new CROUTE();
ROUTE2183->setFromField("value_changed");
ROUTE2183->setFromNode("Stop_l_ring1_RotationInterpolator");
ROUTE2183->setToField("rotation");
ROUTE2183->setToNode("hanim_l_ring1");
Group1942->addChildren(*ROUTE2183);

CROUTE* ROUTE2184 = new CROUTE();
ROUTE2184->setFromField("value_changed");
ROUTE2184->setFromNode("Stop_l_ring2_RotationInterpolator");
ROUTE2184->setToField("rotation");
ROUTE2184->setToNode("hanim_l_ring2");
Group1942->addChildren(*ROUTE2184);

CROUTE* ROUTE2185 = new CROUTE();
ROUTE2185->setFromField("value_changed");
ROUTE2185->setFromNode("Stop_l_ring3_RotationInterpolator");
ROUTE2185->setToField("rotation");
ROUTE2185->setToNode("hanim_l_ring3");
Group1942->addChildren(*ROUTE2185);

CROUTE* ROUTE2186 = new CROUTE();
ROUTE2186->setFromField("value_changed");
ROUTE2186->setFromNode("Stop_l_pinky0_RotationInterpolator");
ROUTE2186->setToField("rotation");
ROUTE2186->setToNode("hanim_l_pinky0");
Group1942->addChildren(*ROUTE2186);

CROUTE* ROUTE2187 = new CROUTE();
ROUTE2187->setFromField("value_changed");
ROUTE2187->setFromNode("Stop_l_pinky1_RotationInterpolator");
ROUTE2187->setToField("rotation");
ROUTE2187->setToNode("hanim_l_pinky1");
Group1942->addChildren(*ROUTE2187);

CROUTE* ROUTE2188 = new CROUTE();
ROUTE2188->setFromField("value_changed");
ROUTE2188->setFromNode("Stop_l_pinky2_RotationInterpolator");
ROUTE2188->setToField("rotation");
ROUTE2188->setToNode("hanim_l_pinky2");
Group1942->addChildren(*ROUTE2188);

CROUTE* ROUTE2189 = new CROUTE();
ROUTE2189->setFromField("value_changed");
ROUTE2189->setFromNode("Stop_l_pinky3_RotationInterpolator");
ROUTE2189->setToField("rotation");
ROUTE2189->setToNode("hanim_l_pinky3");
Group1942->addChildren(*ROUTE2189);

CROUTE* ROUTE2190 = new CROUTE();
ROUTE2190->setFromField("value_changed");
ROUTE2190->setFromNode("Stop_r_sternoclavicular_RotationInterpolator");
ROUTE2190->setToField("rotation");
ROUTE2190->setToNode("hanim_r_sternoclavicular");
Group1942->addChildren(*ROUTE2190);

CROUTE* ROUTE2191 = new CROUTE();
ROUTE2191->setFromField("value_changed");
ROUTE2191->setFromNode("Stop_r_acromioclavicular_RotationInterpolator");
ROUTE2191->setToField("rotation");
ROUTE2191->setToNode("hanim_r_acromioclavicular");
Group1942->addChildren(*ROUTE2191);

CROUTE* ROUTE2192 = new CROUTE();
ROUTE2192->setFromField("value_changed");
ROUTE2192->setFromNode("Stop_r_shoulder_RotationInterpolator");
ROUTE2192->setToField("rotation");
ROUTE2192->setToNode("hanim_r_shoulder");
Group1942->addChildren(*ROUTE2192);

CROUTE* ROUTE2193 = new CROUTE();
ROUTE2193->setFromField("value_changed");
ROUTE2193->setFromNode("Stop_r_elbow_RotationInterpolator");
ROUTE2193->setToField("rotation");
ROUTE2193->setToNode("hanim_r_elbow");
Group1942->addChildren(*ROUTE2193);

CROUTE* ROUTE2194 = new CROUTE();
ROUTE2194->setFromField("value_changed");
ROUTE2194->setFromNode("Stop_r_wrist_RotationInterpolator");
ROUTE2194->setToField("rotation");
ROUTE2194->setToNode("hanim_r_wrist");
Group1942->addChildren(*ROUTE2194);

CROUTE* ROUTE2195 = new CROUTE();
ROUTE2195->setFromField("value_changed");
ROUTE2195->setFromNode("Stop_r_thumb1_RotationInterpolator");
ROUTE2195->setToField("rotation");
ROUTE2195->setToNode("hanim_r_thumb1");
Group1942->addChildren(*ROUTE2195);

CROUTE* ROUTE2196 = new CROUTE();
ROUTE2196->setFromField("value_changed");
ROUTE2196->setFromNode("Stop_r_thumb2_RotationInterpolator");
ROUTE2196->setToField("rotation");
ROUTE2196->setToNode("hanim_r_thumb2");
Group1942->addChildren(*ROUTE2196);

CROUTE* ROUTE2197 = new CROUTE();
ROUTE2197->setFromField("value_changed");
ROUTE2197->setFromNode("Stop_r_thumb3_RotationInterpolator");
ROUTE2197->setToField("rotation");
ROUTE2197->setToNode("hanim_r_thumb3");
Group1942->addChildren(*ROUTE2197);

CROUTE* ROUTE2198 = new CROUTE();
ROUTE2198->setFromField("value_changed");
ROUTE2198->setFromNode("Stop_r_index0_RotationInterpolator");
ROUTE2198->setToField("rotation");
ROUTE2198->setToNode("hanim_r_index0");
Group1942->addChildren(*ROUTE2198);

CROUTE* ROUTE2199 = new CROUTE();
ROUTE2199->setFromField("value_changed");
ROUTE2199->setFromNode("Stop_r_index1_RotationInterpolator");
ROUTE2199->setToField("rotation");
ROUTE2199->setToNode("hanim_r_index1");
Group1942->addChildren(*ROUTE2199);

CROUTE* ROUTE2200 = new CROUTE();
ROUTE2200->setFromField("value_changed");
ROUTE2200->setFromNode("Stop_r_index2_RotationInterpolator");
ROUTE2200->setToField("rotation");
ROUTE2200->setToNode("hanim_r_index2");
Group1942->addChildren(*ROUTE2200);

CROUTE* ROUTE2201 = new CROUTE();
ROUTE2201->setFromField("value_changed");
ROUTE2201->setFromNode("Stop_r_index3_RotationInterpolator");
ROUTE2201->setToField("rotation");
ROUTE2201->setToNode("hanim_r_index3");
Group1942->addChildren(*ROUTE2201);

CROUTE* ROUTE2202 = new CROUTE();
ROUTE2202->setFromField("value_changed");
ROUTE2202->setFromNode("Stop_r_middle0_RotationInterpolator");
ROUTE2202->setToField("rotation");
ROUTE2202->setToNode("hanim_r_middle0");
Group1942->addChildren(*ROUTE2202);

CROUTE* ROUTE2203 = new CROUTE();
ROUTE2203->setFromField("value_changed");
ROUTE2203->setFromNode("Stop_r_middle1_RotationInterpolator");
ROUTE2203->setToField("rotation");
ROUTE2203->setToNode("hanim_r_middle1");
Group1942->addChildren(*ROUTE2203);

CROUTE* ROUTE2204 = new CROUTE();
ROUTE2204->setFromField("value_changed");
ROUTE2204->setFromNode("Stop_r_middle2_RotationInterpolator");
ROUTE2204->setToField("rotation");
ROUTE2204->setToNode("hanim_r_middle2");
Group1942->addChildren(*ROUTE2204);

CROUTE* ROUTE2205 = new CROUTE();
ROUTE2205->setFromField("value_changed");
ROUTE2205->setFromNode("Stop_r_middle3_RotationInterpolator");
ROUTE2205->setToField("rotation");
ROUTE2205->setToNode("hanim_r_middle3");
Group1942->addChildren(*ROUTE2205);

CROUTE* ROUTE2206 = new CROUTE();
ROUTE2206->setFromField("value_changed");
ROUTE2206->setFromNode("Stop_r_ring0_RotationInterpolator");
ROUTE2206->setToField("rotation");
ROUTE2206->setToNode("hanim_r_ring0");
Group1942->addChildren(*ROUTE2206);

CROUTE* ROUTE2207 = new CROUTE();
ROUTE2207->setFromField("value_changed");
ROUTE2207->setFromNode("Stop_r_ring1_RotationInterpolator");
ROUTE2207->setToField("rotation");
ROUTE2207->setToNode("hanim_r_ring1");
Group1942->addChildren(*ROUTE2207);

CROUTE* ROUTE2208 = new CROUTE();
ROUTE2208->setFromField("value_changed");
ROUTE2208->setFromNode("Stop_r_ring2_RotationInterpolator");
ROUTE2208->setToField("rotation");
ROUTE2208->setToNode("hanim_r_ring2");
Group1942->addChildren(*ROUTE2208);

CROUTE* ROUTE2209 = new CROUTE();
ROUTE2209->setFromField("value_changed");
ROUTE2209->setFromNode("Stop_r_ring3_RotationInterpolator");
ROUTE2209->setToField("rotation");
ROUTE2209->setToNode("hanim_r_ring3");
Group1942->addChildren(*ROUTE2209);

CROUTE* ROUTE2210 = new CROUTE();
ROUTE2210->setFromField("value_changed");
ROUTE2210->setFromNode("Stop_r_pinky0_RotationInterpolator");
ROUTE2210->setToField("rotation");
ROUTE2210->setToNode("hanim_r_pinky0");
Group1942->addChildren(*ROUTE2210);

CROUTE* ROUTE2211 = new CROUTE();
ROUTE2211->setFromField("value_changed");
ROUTE2211->setFromNode("Stop_r_pinky1_RotationInterpolator");
ROUTE2211->setToField("rotation");
ROUTE2211->setToNode("hanim_r_pinky1");
Group1942->addChildren(*ROUTE2211);

CROUTE* ROUTE2212 = new CROUTE();
ROUTE2212->setFromField("value_changed");
ROUTE2212->setFromNode("Stop_r_pinky2_RotationInterpolator");
ROUTE2212->setToField("rotation");
ROUTE2212->setToNode("hanim_r_pinky2");
Group1942->addChildren(*ROUTE2212);

CROUTE* ROUTE2213 = new CROUTE();
ROUTE2213->setFromField("value_changed");
ROUTE2213->setFromNode("Stop_r_pinky3_RotationInterpolator");
ROUTE2213->setToField("rotation");
ROUTE2213->setToNode("hanim_r_pinky3");
Group1942->addChildren(*ROUTE2213);

group->addChildren(*Group1942);

CGroup* Group2214 = (CGroup *)(m_pScene.createNode("Group"));
Group2214->setDEF("StandAnimation");
CTimeSensor* TimeSensor2215 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor2215->setDEF("StandTimer");
TimeSensor2215->setCycleInterval(5.73);
TimeSensor2215->setLoop(True);
Group2214->addChildren(*TimeSensor2215);

COrientationInterpolator* OrientationInterpolator2216 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2216->setDEF("Stand_r_metatarsal_PitchInterpolator");
OrientationInterpolator2216->setKey(new float[6]{0,0.2,0.4,0.6,0.7,1}, 6);
OrientationInterpolator2216->setKeyValue(new float[24]{1,0,0,0,-1,0,0,0.015,1,0,0,0.17,-1,0,0,0.025,1,0,0,0.01,1,0,0,0});
Group2214->addChildren(*OrientationInterpolator2216);

COrientationInterpolator* OrientationInterpolator2217 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2217->setDEF("Stand_r_ankle_RotationInterpolator");
OrientationInterpolator2217->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2217->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2214->addChildren(*OrientationInterpolator2217);

COrientationInterpolator* OrientationInterpolator2218 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2218->setDEF("Stand_r_knee_RotationInterpolator");
OrientationInterpolator2218->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2218->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2214->addChildren(*OrientationInterpolator2218);

COrientationInterpolator* OrientationInterpolator2219 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2219->setDEF("Stand_r_hip_RotationInterpolator");
OrientationInterpolator2219->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2219->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2214->addChildren(*OrientationInterpolator2219);

COrientationInterpolator* OrientationInterpolator2220 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2220->setDEF("Stand_l_ankle_RotationInterpolator");
OrientationInterpolator2220->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2220->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2214->addChildren(*OrientationInterpolator2220);

COrientationInterpolator* OrientationInterpolator2221 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2221->setDEF("Stand_l_knee_RotationInterpolator");
OrientationInterpolator2221->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2221->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2214->addChildren(*OrientationInterpolator2221);

COrientationInterpolator* OrientationInterpolator2222 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2222->setDEF("Stand_l_hip_RotationInterpolator");
OrientationInterpolator2222->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2222->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2214->addChildren(*OrientationInterpolator2222);

COrientationInterpolator* OrientationInterpolator2223 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2223->setDEF("Stand_r_wrist_RotationInterpolator");
OrientationInterpolator2223->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2223->setKeyValue(new float[12]{0,0,1,0,0,0,-1,0.25,0,0,1,0});
Group2214->addChildren(*OrientationInterpolator2223);

COrientationInterpolator* OrientationInterpolator2224 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2224->setDEF("Stand_r_elbow_RotationInterpolator");
OrientationInterpolator2224->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2224->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2214->addChildren(*OrientationInterpolator2224);

COrientationInterpolator* OrientationInterpolator2225 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2225->setDEF("Stand_r_shoulder_RotationInterpolator");
OrientationInterpolator2225->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2225->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2214->addChildren(*OrientationInterpolator2225);

COrientationInterpolator* OrientationInterpolator2226 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2226->setDEF("Stand_l_wrist_RotationInterpolator");
OrientationInterpolator2226->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2226->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2214->addChildren(*OrientationInterpolator2226);

COrientationInterpolator* OrientationInterpolator2227 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2227->setDEF("Stand_l_elbow_RotationInterpolator");
OrientationInterpolator2227->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2227->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2214->addChildren(*OrientationInterpolator2227);

COrientationInterpolator* OrientationInterpolator2228 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2228->setDEF("Stand_l_shoulder_RotationInterpolator");
OrientationInterpolator2228->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2228->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2214->addChildren(*OrientationInterpolator2228);

COrientationInterpolator* OrientationInterpolator2229 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2229->setDEF("Stand_head_RotationInterpolator");
OrientationInterpolator2229->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2229->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2214->addChildren(*OrientationInterpolator2229);

COrientationInterpolator* OrientationInterpolator2230 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2230->setDEF("Stand_neck_RotationInterpolator");
OrientationInterpolator2230->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2230->setKeyValue(new float[12]{0,0,1,0,-1,0,0,0.5,0,0,1,0});
Group2214->addChildren(*OrientationInterpolator2230);

COrientationInterpolator* OrientationInterpolator2231 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2231->setDEF("Stand_l_eyeball_RotationInterpolator");
OrientationInterpolator2231->setKey(new float[4]{0,0.4,0.7,1}, 4);
OrientationInterpolator2231->setKeyValue(new float[16]{0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0});
Group2214->addChildren(*OrientationInterpolator2231);

COrientationInterpolator* OrientationInterpolator2232 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2232->setDEF("Stand_r_eyeball_RotationInterpolator");
OrientationInterpolator2232->setKey(new float[4]{0,0.4,0.7,1}, 4);
OrientationInterpolator2232->setKeyValue(new float[16]{0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0});
Group2214->addChildren(*OrientationInterpolator2232);

COrientationInterpolator* OrientationInterpolator2233 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2233->setDEF("Stand_lower_body_RotationInterpolator");
OrientationInterpolator2233->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2233->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2214->addChildren(*OrientationInterpolator2233);

COrientationInterpolator* OrientationInterpolator2234 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2234->setDEF("Stand_upper_body_RotationInterpolator");
OrientationInterpolator2234->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2234->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2214->addChildren(*OrientationInterpolator2234);

COrientationInterpolator* OrientationInterpolator2235 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2235->setDEF("Stand_whole_body_RotationInterpolator");
OrientationInterpolator2235->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2235->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2214->addChildren(*OrientationInterpolator2235);

CPositionInterpolator* PositionInterpolator2236 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator2236->setDEF("Stand_whole_body_TranslationInterpolator");
PositionInterpolator2236->setKey(new float[3]{0,0.5,1}, 3);
PositionInterpolator2236->setKeyValue(new float[9]{0,0,0,0,0,0,0,0,0});
Group2214->addChildren(*PositionInterpolator2236);

COrientationInterpolator* OrientationInterpolator2237 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2237->setDEF("Stand_l_sternoclavicular_RollInterpolator");
OrientationInterpolator2237->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2237->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2214->addChildren(*OrientationInterpolator2237);

COrientationInterpolator* OrientationInterpolator2238 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2238->setDEF("Stand_l_acromioclavicular_RollInterpolator");
OrientationInterpolator2238->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2238->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2214->addChildren(*OrientationInterpolator2238);

COrientationInterpolator* OrientationInterpolator2239 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2239->setDEF("Stand_r_sternoclavicular_RollInterpolator");
OrientationInterpolator2239->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2239->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2214->addChildren(*OrientationInterpolator2239);

COrientationInterpolator* OrientationInterpolator2240 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2240->setDEF("Stand_r_acromioclavicular_RollInterpolator");
OrientationInterpolator2240->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2240->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2214->addChildren(*OrientationInterpolator2240);

COrientationInterpolator* OrientationInterpolator2241 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2241->setDEF("Stand_sacroiliac_YawInterpolator");
OrientationInterpolator2241->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2241->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2214->addChildren(*OrientationInterpolator2241);

COrientationInterpolator* OrientationInterpolator2242 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2242->setDEF("Stand_vl5_YawInterpolator");
OrientationInterpolator2242->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator2242->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2214->addChildren(*OrientationInterpolator2242);

COrientationInterpolator* OrientationInterpolator2243 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2243->setDEF("Stand_vc6_YawInterpolator");
OrientationInterpolator2243->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator2243->setKeyValue(new float[28]{0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,-1,0,0,0,0,-1,0,0,0,1,0,0});
Group2214->addChildren(*OrientationInterpolator2243);

COrientationInterpolator* OrientationInterpolator2244 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2244->setDEF("Stand_l_thumb1_PitchInterpolator");
OrientationInterpolator2244->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2244->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2214->addChildren(*OrientationInterpolator2244);

COrientationInterpolator* OrientationInterpolator2245 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2245->setDEF("Stand_r_thumb1_PitchInterpolator");
OrientationInterpolator2245->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2245->setKeyValue(new float[24]{1,0,0,0,1,0,0,0.5,1,0,0,0.1,1,0,0,0.27,1,0,0,0.2,1,0,0,0});
Group2214->addChildren(*OrientationInterpolator2245);

COrientationInterpolator* OrientationInterpolator2246 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2246->setDEF("Stand_r_index1_RollInterpolator");
OrientationInterpolator2246->setKey(new float[6]{0,0.2,0.4,0.5,0.8,1}, 6);
OrientationInterpolator2246->setKeyValue(new float[24]{0,0,1,0,0,0,1,0.1,0,0,1,0.2,0,0,1,0.3,0,0,1,0,0,0,1,0});
Group2214->addChildren(*OrientationInterpolator2246);

COrientationInterpolator* OrientationInterpolator2247 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2247->setDEF("Stand_r_index2_RollInterpolator");
OrientationInterpolator2247->setKey(new float[6]{0,0.2,0.4,0.5,0.8,1}, 6);
OrientationInterpolator2247->setKeyValue(new float[24]{0,0,1,0,0,0,1,0.4,0,0,1,0.32,0,0,1,0.25,0,0,1,0.2,0,0,1,0});
Group2214->addChildren(*OrientationInterpolator2247);

COrientationInterpolator* OrientationInterpolator2248 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2248->setDEF("Stand_r_index3_RollInterpolator");
OrientationInterpolator2248->setKey(new float[6]{0,0.2,0.4,0.5,0.8,1}, 6);
OrientationInterpolator2248->setKeyValue(new float[24]{0,0,1,0,0,0,1,0.2,0,0,1,0.3,0,0,1,0.35,0,0,1,0.2,0,0,1,0});
Group2214->addChildren(*OrientationInterpolator2248);

CROUTE* ROUTE2249 = new CROUTE();
ROUTE2249->setFromField("fraction_changed");
ROUTE2249->setFromNode("StandTimer");
ROUTE2249->setToField("set_fraction");
ROUTE2249->setToNode("Stand_r_ankle_RotationInterpolator");
Group2214->addChildren(*ROUTE2249);

CROUTE* ROUTE2250 = new CROUTE();
ROUTE2250->setFromField("fraction_changed");
ROUTE2250->setFromNode("StandTimer");
ROUTE2250->setToField("set_fraction");
ROUTE2250->setToNode("Stand_r_knee_RotationInterpolator");
Group2214->addChildren(*ROUTE2250);

CROUTE* ROUTE2251 = new CROUTE();
ROUTE2251->setFromField("fraction_changed");
ROUTE2251->setFromNode("StandTimer");
ROUTE2251->setToField("set_fraction");
ROUTE2251->setToNode("Stand_r_hip_RotationInterpolator");
Group2214->addChildren(*ROUTE2251);

CROUTE* ROUTE2252 = new CROUTE();
ROUTE2252->setFromField("fraction_changed");
ROUTE2252->setFromNode("StandTimer");
ROUTE2252->setToField("set_fraction");
ROUTE2252->setToNode("Stand_l_ankle_RotationInterpolator");
Group2214->addChildren(*ROUTE2252);

CROUTE* ROUTE2253 = new CROUTE();
ROUTE2253->setFromField("fraction_changed");
ROUTE2253->setFromNode("StandTimer");
ROUTE2253->setToField("set_fraction");
ROUTE2253->setToNode("Stand_l_knee_RotationInterpolator");
Group2214->addChildren(*ROUTE2253);

CROUTE* ROUTE2254 = new CROUTE();
ROUTE2254->setFromField("fraction_changed");
ROUTE2254->setFromNode("StandTimer");
ROUTE2254->setToField("set_fraction");
ROUTE2254->setToNode("Stand_l_hip_RotationInterpolator");
Group2214->addChildren(*ROUTE2254);

CROUTE* ROUTE2255 = new CROUTE();
ROUTE2255->setFromField("fraction_changed");
ROUTE2255->setFromNode("StandTimer");
ROUTE2255->setToField("set_fraction");
ROUTE2255->setToNode("Stand_lower_body_RotationInterpolator");
Group2214->addChildren(*ROUTE2255);

CROUTE* ROUTE2256 = new CROUTE();
ROUTE2256->setFromField("fraction_changed");
ROUTE2256->setFromNode("StandTimer");
ROUTE2256->setToField("set_fraction");
ROUTE2256->setToNode("Stand_r_wrist_RotationInterpolator");
Group2214->addChildren(*ROUTE2256);

CROUTE* ROUTE2257 = new CROUTE();
ROUTE2257->setFromField("fraction_changed");
ROUTE2257->setFromNode("StandTimer");
ROUTE2257->setToField("set_fraction");
ROUTE2257->setToNode("Stand_r_elbow_RotationInterpolator");
Group2214->addChildren(*ROUTE2257);

CROUTE* ROUTE2258 = new CROUTE();
ROUTE2258->setFromField("fraction_changed");
ROUTE2258->setFromNode("StandTimer");
ROUTE2258->setToField("set_fraction");
ROUTE2258->setToNode("Stand_r_shoulder_RotationInterpolator");
Group2214->addChildren(*ROUTE2258);

CROUTE* ROUTE2259 = new CROUTE();
ROUTE2259->setFromField("fraction_changed");
ROUTE2259->setFromNode("StandTimer");
ROUTE2259->setToField("set_fraction");
ROUTE2259->setToNode("Stand_l_wrist_RotationInterpolator");
Group2214->addChildren(*ROUTE2259);

CROUTE* ROUTE2260 = new CROUTE();
ROUTE2260->setFromField("fraction_changed");
ROUTE2260->setFromNode("StandTimer");
ROUTE2260->setToField("set_fraction");
ROUTE2260->setToNode("Stand_l_elbow_RotationInterpolator");
Group2214->addChildren(*ROUTE2260);

CROUTE* ROUTE2261 = new CROUTE();
ROUTE2261->setFromField("fraction_changed");
ROUTE2261->setFromNode("StandTimer");
ROUTE2261->setToField("set_fraction");
ROUTE2261->setToNode("Stand_l_shoulder_RotationInterpolator");
Group2214->addChildren(*ROUTE2261);

CROUTE* ROUTE2262 = new CROUTE();
ROUTE2262->setFromField("fraction_changed");
ROUTE2262->setFromNode("StandTimer");
ROUTE2262->setToField("set_fraction");
ROUTE2262->setToNode("Stand_head_RotationInterpolator");
Group2214->addChildren(*ROUTE2262);

CROUTE* ROUTE2263 = new CROUTE();
ROUTE2263->setFromField("fraction_changed");
ROUTE2263->setFromNode("StandTimer");
ROUTE2263->setToField("set_fraction");
ROUTE2263->setToNode("Stand_neck_RotationInterpolator");
Group2214->addChildren(*ROUTE2263);

CROUTE* ROUTE2264 = new CROUTE();
ROUTE2264->setFromField("fraction_changed");
ROUTE2264->setFromNode("StandTimer");
ROUTE2264->setToField("set_fraction");
ROUTE2264->setToNode("Stand_l_eyeball_RotationInterpolator");
Group2214->addChildren(*ROUTE2264);

CROUTE* ROUTE2265 = new CROUTE();
ROUTE2265->setFromField("fraction_changed");
ROUTE2265->setFromNode("StandTimer");
ROUTE2265->setToField("set_fraction");
ROUTE2265->setToNode("Stand_r_eyeball_RotationInterpolator");
Group2214->addChildren(*ROUTE2265);

CROUTE* ROUTE2266 = new CROUTE();
ROUTE2266->setFromField("fraction_changed");
ROUTE2266->setFromNode("StandTimer");
ROUTE2266->setToField("set_fraction");
ROUTE2266->setToNode("Stand_upper_body_RotationInterpolator");
Group2214->addChildren(*ROUTE2266);

CROUTE* ROUTE2267 = new CROUTE();
ROUTE2267->setFromField("fraction_changed");
ROUTE2267->setFromNode("StandTimer");
ROUTE2267->setToField("set_fraction");
ROUTE2267->setToNode("Stand_whole_body_RotationInterpolator");
Group2214->addChildren(*ROUTE2267);

CROUTE* ROUTE2268 = new CROUTE();
ROUTE2268->setFromField("fraction_changed");
ROUTE2268->setFromNode("StandTimer");
ROUTE2268->setToField("set_fraction");
ROUTE2268->setToNode("Stand_whole_body_TranslationInterpolator");
Group2214->addChildren(*ROUTE2268);

CROUTE* ROUTE2269 = new CROUTE();
ROUTE2269->setFromField("fraction_changed");
ROUTE2269->setFromNode("StandTimer");
ROUTE2269->setToField("set_fraction");
ROUTE2269->setToNode("Stand_l_sternoclavicular_RollInterpolator");
Group2214->addChildren(*ROUTE2269);

CROUTE* ROUTE2270 = new CROUTE();
ROUTE2270->setFromField("fraction_changed");
ROUTE2270->setFromNode("StandTimer");
ROUTE2270->setToField("set_fraction");
ROUTE2270->setToNode("Stand_l_acromioclavicular_RollInterpolator");
Group2214->addChildren(*ROUTE2270);

CROUTE* ROUTE2271 = new CROUTE();
ROUTE2271->setFromField("fraction_changed");
ROUTE2271->setFromNode("StandTimer");
ROUTE2271->setToField("set_fraction");
ROUTE2271->setToNode("Stand_r_sternoclavicular_RollInterpolator");
Group2214->addChildren(*ROUTE2271);

CROUTE* ROUTE2272 = new CROUTE();
ROUTE2272->setFromField("fraction_changed");
ROUTE2272->setFromNode("StandTimer");
ROUTE2272->setToField("set_fraction");
ROUTE2272->setToNode("Stand_r_acromioclavicular_RollInterpolator");
Group2214->addChildren(*ROUTE2272);

CROUTE* ROUTE2273 = new CROUTE();
ROUTE2273->setFromField("fraction_changed");
ROUTE2273->setFromNode("StandTimer");
ROUTE2273->setToField("set_fraction");
ROUTE2273->setToNode("Stand_r_metatarsal_PitchInterpolator");
Group2214->addChildren(*ROUTE2273);

CROUTE* ROUTE2274 = new CROUTE();
ROUTE2274->setFromField("fraction_changed");
ROUTE2274->setFromNode("StandTimer");
ROUTE2274->setToField("set_fraction");
ROUTE2274->setToNode("Stand_sacroiliac_YawInterpolator");
Group2214->addChildren(*ROUTE2274);

CROUTE* ROUTE2275 = new CROUTE();
ROUTE2275->setFromField("fraction_changed");
ROUTE2275->setFromNode("StandTimer");
ROUTE2275->setToField("set_fraction");
ROUTE2275->setToNode("Stand_vl5_YawInterpolator");
Group2214->addChildren(*ROUTE2275);

CROUTE* ROUTE2276 = new CROUTE();
ROUTE2276->setFromField("fraction_changed");
ROUTE2276->setFromNode("StandTimer");
ROUTE2276->setToField("set_fraction");
ROUTE2276->setToNode("Stand_vc6_YawInterpolator");
Group2214->addChildren(*ROUTE2276);

CROUTE* ROUTE2277 = new CROUTE();
ROUTE2277->setFromField("fraction_changed");
ROUTE2277->setFromNode("StandTimer");
ROUTE2277->setToField("set_fraction");
ROUTE2277->setToNode("Stand_l_thumb1_PitchInterpolator");
Group2214->addChildren(*ROUTE2277);

CROUTE* ROUTE2278 = new CROUTE();
ROUTE2278->setFromField("fraction_changed");
ROUTE2278->setFromNode("StandTimer");
ROUTE2278->setToField("set_fraction");
ROUTE2278->setToNode("Stand_r_thumb1_PitchInterpolator");
Group2214->addChildren(*ROUTE2278);

CROUTE* ROUTE2279 = new CROUTE();
ROUTE2279->setFromField("fraction_changed");
ROUTE2279->setFromNode("StandTimer");
ROUTE2279->setToField("set_fraction");
ROUTE2279->setToNode("Stand_r_index1_RollInterpolator");
Group2214->addChildren(*ROUTE2279);

CROUTE* ROUTE2280 = new CROUTE();
ROUTE2280->setFromField("fraction_changed");
ROUTE2280->setFromNode("StandTimer");
ROUTE2280->setToField("set_fraction");
ROUTE2280->setToNode("Stand_r_index2_RollInterpolator");
Group2214->addChildren(*ROUTE2280);

CROUTE* ROUTE2281 = new CROUTE();
ROUTE2281->setFromField("fraction_changed");
ROUTE2281->setFromNode("StandTimer");
ROUTE2281->setToField("set_fraction");
ROUTE2281->setToNode("Stand_r_index3_RollInterpolator");
Group2214->addChildren(*ROUTE2281);

CROUTE* ROUTE2282 = new CROUTE();
ROUTE2282->setFromField("value_changed");
ROUTE2282->setFromNode("Stand_r_ankle_RotationInterpolator");
ROUTE2282->setToField("rotation");
ROUTE2282->setToNode("hanim_r_ankle");
Group2214->addChildren(*ROUTE2282);

CROUTE* ROUTE2283 = new CROUTE();
ROUTE2283->setFromField("value_changed");
ROUTE2283->setFromNode("Stand_r_knee_RotationInterpolator");
ROUTE2283->setToField("rotation");
ROUTE2283->setToNode("hanim_r_knee");
Group2214->addChildren(*ROUTE2283);

CROUTE* ROUTE2284 = new CROUTE();
ROUTE2284->setFromField("value_changed");
ROUTE2284->setFromNode("Stand_r_hip_RotationInterpolator");
ROUTE2284->setToField("rotation");
ROUTE2284->setToNode("hanim_r_hip");
Group2214->addChildren(*ROUTE2284);

CROUTE* ROUTE2285 = new CROUTE();
ROUTE2285->setFromField("value_changed");
ROUTE2285->setFromNode("Stand_l_ankle_RotationInterpolator");
ROUTE2285->setToField("rotation");
ROUTE2285->setToNode("hanim_l_ankle");
Group2214->addChildren(*ROUTE2285);

CROUTE* ROUTE2286 = new CROUTE();
ROUTE2286->setFromField("value_changed");
ROUTE2286->setFromNode("Stand_l_knee_RotationInterpolator");
ROUTE2286->setToField("rotation");
ROUTE2286->setToNode("hanim_l_knee");
Group2214->addChildren(*ROUTE2286);

CROUTE* ROUTE2287 = new CROUTE();
ROUTE2287->setFromField("value_changed");
ROUTE2287->setFromNode("Stand_l_hip_RotationInterpolator");
ROUTE2287->setToField("rotation");
ROUTE2287->setToNode("hanim_l_hip");
Group2214->addChildren(*ROUTE2287);

CROUTE* ROUTE2288 = new CROUTE();
ROUTE2288->setFromField("value_changed");
ROUTE2288->setFromNode("Stand_r_wrist_RotationInterpolator");
ROUTE2288->setToField("rotation");
ROUTE2288->setToNode("hanim_r_wrist");
Group2214->addChildren(*ROUTE2288);

CROUTE* ROUTE2289 = new CROUTE();
ROUTE2289->setFromField("value_changed");
ROUTE2289->setFromNode("Stand_r_elbow_RotationInterpolator");
ROUTE2289->setToField("rotation");
ROUTE2289->setToNode("hanim_r_elbow");
Group2214->addChildren(*ROUTE2289);

CROUTE* ROUTE2290 = new CROUTE();
ROUTE2290->setFromField("value_changed");
ROUTE2290->setFromNode("Stand_r_shoulder_RotationInterpolator");
ROUTE2290->setToField("rotation");
ROUTE2290->setToNode("hanim_r_shoulder");
Group2214->addChildren(*ROUTE2290);

CROUTE* ROUTE2291 = new CROUTE();
ROUTE2291->setFromField("value_changed");
ROUTE2291->setFromNode("Stand_l_wrist_RotationInterpolator");
ROUTE2291->setToField("rotation");
ROUTE2291->setToNode("hanim_l_wrist");
Group2214->addChildren(*ROUTE2291);

CROUTE* ROUTE2292 = new CROUTE();
ROUTE2292->setFromField("value_changed");
ROUTE2292->setFromNode("Stand_l_elbow_RotationInterpolator");
ROUTE2292->setToField("rotation");
ROUTE2292->setToNode("hanim_l_elbow");
Group2214->addChildren(*ROUTE2292);

CROUTE* ROUTE2293 = new CROUTE();
ROUTE2293->setFromField("value_changed");
ROUTE2293->setFromNode("Stand_l_shoulder_RotationInterpolator");
ROUTE2293->setToField("rotation");
ROUTE2293->setToNode("hanim_l_shoulder");
Group2214->addChildren(*ROUTE2293);

CROUTE* ROUTE2294 = new CROUTE();
ROUTE2294->setFromField("value_changed");
ROUTE2294->setFromNode("Stand_head_RotationInterpolator");
ROUTE2294->setToField("rotation");
ROUTE2294->setToNode("hanim_skullbase");
Group2214->addChildren(*ROUTE2294);

CROUTE* ROUTE2295 = new CROUTE();
ROUTE2295->setFromField("value_changed");
ROUTE2295->setFromNode("Stand_neck_RotationInterpolator");
ROUTE2295->setToField("rotation");
ROUTE2295->setToNode("hanim_vc7");
Group2214->addChildren(*ROUTE2295);

CROUTE* ROUTE2296 = new CROUTE();
ROUTE2296->setFromField("value_changed");
ROUTE2296->setFromNode("Stand_l_eyeball_RotationInterpolator");
ROUTE2296->setToField("rotation");
ROUTE2296->setToNode("hanim_l_eyeball_joint");
Group2214->addChildren(*ROUTE2296);

CROUTE* ROUTE2297 = new CROUTE();
ROUTE2297->setFromField("value_changed");
ROUTE2297->setFromNode("Stand_r_eyeball_RotationInterpolator");
ROUTE2297->setToField("rotation");
ROUTE2297->setToNode("hanim_r_eyeball_joint");
Group2214->addChildren(*ROUTE2297);

CROUTE* ROUTE2298 = new CROUTE();
ROUTE2298->setFromField("value_changed");
ROUTE2298->setFromNode("Stand_upper_body_RotationInterpolator");
ROUTE2298->setToField("rotation");
ROUTE2298->setToNode("hanim_vl1");
Group2214->addChildren(*ROUTE2298);

CROUTE* ROUTE2299 = new CROUTE();
ROUTE2299->setFromField("value_changed");
ROUTE2299->setFromNode("Stand_lower_body_RotationInterpolator");
ROUTE2299->setToField("rotation");
ROUTE2299->setToNode("hanim_sacroiliac");
Group2214->addChildren(*ROUTE2299);

CROUTE* ROUTE2300 = new CROUTE();
ROUTE2300->setFromField("value_changed");
ROUTE2300->setFromNode("Stand_whole_body_RotationInterpolator");
ROUTE2300->setToField("rotation");
ROUTE2300->setToNode("hanim_humanoid_root");
Group2214->addChildren(*ROUTE2300);

CROUTE* ROUTE2301 = new CROUTE();
ROUTE2301->setFromField("value_changed");
ROUTE2301->setFromNode("Stand_whole_body_TranslationInterpolator");
ROUTE2301->setToField("translation");
ROUTE2301->setToNode("hanim_humanoid_root");
Group2214->addChildren(*ROUTE2301);

CROUTE* ROUTE2302 = new CROUTE();
ROUTE2302->setFromField("value_changed");
ROUTE2302->setFromNode("Stand_l_sternoclavicular_RollInterpolator");
ROUTE2302->setToField("rotation");
ROUTE2302->setToNode("hanim_l_sternoclavicular");
Group2214->addChildren(*ROUTE2302);

CROUTE* ROUTE2303 = new CROUTE();
ROUTE2303->setFromField("value_changed");
ROUTE2303->setFromNode("Stand_l_acromioclavicular_RollInterpolator");
ROUTE2303->setToField("rotation");
ROUTE2303->setToNode("hanim_l_acromioclavicular");
Group2214->addChildren(*ROUTE2303);

CROUTE* ROUTE2304 = new CROUTE();
ROUTE2304->setFromField("value_changed");
ROUTE2304->setFromNode("Stand_r_sternoclavicular_RollInterpolator");
ROUTE2304->setToField("rotation");
ROUTE2304->setToNode("hanim_r_sternoclavicular");
Group2214->addChildren(*ROUTE2304);

CROUTE* ROUTE2305 = new CROUTE();
ROUTE2305->setFromField("value_changed");
ROUTE2305->setFromNode("Stand_r_acromioclavicular_RollInterpolator");
ROUTE2305->setToField("rotation");
ROUTE2305->setToNode("hanim_r_acromioclavicular");
Group2214->addChildren(*ROUTE2305);

CROUTE* ROUTE2306 = new CROUTE();
ROUTE2306->setFromField("value_changed");
ROUTE2306->setFromNode("Stand_r_metatarsal_PitchInterpolator");
ROUTE2306->setToField("rotation");
ROUTE2306->setToNode("hanim_l_metatarsal");
Group2214->addChildren(*ROUTE2306);

CROUTE* ROUTE2307 = new CROUTE();
ROUTE2307->setFromField("value_changed");
ROUTE2307->setFromNode("Stand_r_metatarsal_PitchInterpolator");
ROUTE2307->setToField("rotation");
ROUTE2307->setToNode("hanim_r_metatarsal");
Group2214->addChildren(*ROUTE2307);

CROUTE* ROUTE2308 = new CROUTE();
ROUTE2308->setFromField("value_changed");
ROUTE2308->setFromNode("Stand_sacroiliac_YawInterpolator");
ROUTE2308->setToField("rotation");
ROUTE2308->setToNode("hanim_sacroiliac");
Group2214->addChildren(*ROUTE2308);

CROUTE* ROUTE2309 = new CROUTE();
ROUTE2309->setFromField("value_changed");
ROUTE2309->setFromNode("Stand_vl5_YawInterpolator");
ROUTE2309->setToField("rotation");
ROUTE2309->setToNode("hanim_vl5");
Group2214->addChildren(*ROUTE2309);

CROUTE* ROUTE2310 = new CROUTE();
ROUTE2310->setFromField("value_changed");
ROUTE2310->setFromNode("Stand_vc6_YawInterpolator");
ROUTE2310->setToField("rotation");
ROUTE2310->setToNode("hanim_vc6");
Group2214->addChildren(*ROUTE2310);

CROUTE* ROUTE2311 = new CROUTE();
ROUTE2311->setFromField("value_changed");
ROUTE2311->setFromNode("Stand_l_thumb1_PitchInterpolator");
ROUTE2311->setToField("rotation");
ROUTE2311->setToNode("hanim_l_thumb1");
Group2214->addChildren(*ROUTE2311);

CROUTE* ROUTE2312 = new CROUTE();
ROUTE2312->setFromField("value_changed");
ROUTE2312->setFromNode("Stand_r_thumb1_PitchInterpolator");
ROUTE2312->setToField("rotation");
ROUTE2312->setToNode("hanim_r_thumb1");
Group2214->addChildren(*ROUTE2312);

CROUTE* ROUTE2313 = new CROUTE();
ROUTE2313->setFromField("value_changed");
ROUTE2313->setFromNode("Stand_r_index1_RollInterpolator");
ROUTE2313->setToField("rotation");
ROUTE2313->setToNode("hanim_r_index1");
Group2214->addChildren(*ROUTE2313);

CROUTE* ROUTE2314 = new CROUTE();
ROUTE2314->setFromField("value_changed");
ROUTE2314->setFromNode("Stand_r_index2_RollInterpolator");
ROUTE2314->setToField("rotation");
ROUTE2314->setToNode("hanim_r_index2");
Group2214->addChildren(*ROUTE2314);

CROUTE* ROUTE2315 = new CROUTE();
ROUTE2315->setFromField("value_changed");
ROUTE2315->setFromNode("Stand_r_index3_RollInterpolator");
ROUTE2315->setToField("rotation");
ROUTE2315->setToNode("hanim_r_index3");
Group2214->addChildren(*ROUTE2315);

CROUTE* ROUTE2316 = new CROUTE();
ROUTE2316->setFromField("value_changed");
ROUTE2316->setFromNode("Stand_r_index1_RollInterpolator");
ROUTE2316->setToField("rotation");
ROUTE2316->setToNode("hanim_r_middle1");
Group2214->addChildren(*ROUTE2316);

CROUTE* ROUTE2317 = new CROUTE();
ROUTE2317->setFromField("value_changed");
ROUTE2317->setFromNode("Stand_r_index2_RollInterpolator");
ROUTE2317->setToField("rotation");
ROUTE2317->setToNode("hanim_r_middle2");
Group2214->addChildren(*ROUTE2317);

CROUTE* ROUTE2318 = new CROUTE();
ROUTE2318->setFromField("value_changed");
ROUTE2318->setFromNode("Stand_r_index3_RollInterpolator");
ROUTE2318->setToField("rotation");
ROUTE2318->setToNode("hanim_r_middle3");
Group2214->addChildren(*ROUTE2318);

CROUTE* ROUTE2319 = new CROUTE();
ROUTE2319->setFromField("value_changed");
ROUTE2319->setFromNode("Stand_r_index1_RollInterpolator");
ROUTE2319->setToField("rotation");
ROUTE2319->setToNode("hanim_r_ring1");
Group2214->addChildren(*ROUTE2319);

CROUTE* ROUTE2320 = new CROUTE();
ROUTE2320->setFromField("value_changed");
ROUTE2320->setFromNode("Stand_r_index2_RollInterpolator");
ROUTE2320->setToField("rotation");
ROUTE2320->setToNode("hanim_r_ring2");
Group2214->addChildren(*ROUTE2320);

CROUTE* ROUTE2321 = new CROUTE();
ROUTE2321->setFromField("value_changed");
ROUTE2321->setFromNode("Stand_r_index3_RollInterpolator");
ROUTE2321->setToField("rotation");
ROUTE2321->setToNode("hanim_r_ring3");
Group2214->addChildren(*ROUTE2321);

CROUTE* ROUTE2322 = new CROUTE();
ROUTE2322->setFromField("value_changed");
ROUTE2322->setFromNode("Stand_r_index1_RollInterpolator");
ROUTE2322->setToField("rotation");
ROUTE2322->setToNode("hanim_r_pinky1");
Group2214->addChildren(*ROUTE2322);

CROUTE* ROUTE2323 = new CROUTE();
ROUTE2323->setFromField("value_changed");
ROUTE2323->setFromNode("Stand_r_index2_RollInterpolator");
ROUTE2323->setToField("rotation");
ROUTE2323->setToNode("hanim_r_pinky2");
Group2214->addChildren(*ROUTE2323);

CROUTE* ROUTE2324 = new CROUTE();
ROUTE2324->setFromField("value_changed");
ROUTE2324->setFromNode("Stand_r_index3_RollInterpolator");
ROUTE2324->setToField("rotation");
ROUTE2324->setToNode("hanim_r_pinky3");
Group2214->addChildren(*ROUTE2324);

group->addChildren(*Group2214);

CGroup* Group2325 = (CGroup *)(m_pScene.createNode("Group"));
Group2325->setDEF("PitchesAnimation");
CTimeSensor* TimeSensor2326 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor2326->setDEF("PitchTimer");
TimeSensor2326->setCycleInterval(5.73);
TimeSensor2326->setLoop(True);
Group2325->addChildren(*TimeSensor2326);

COrientationInterpolator* OrientationInterpolator2327 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2327->setDEF("Pitch_r_metatarsal_PitchInterpolator");
OrientationInterpolator2327->setKey(new float[6]{0,0.2,0.4,0.6,0.7,1}, 6);
OrientationInterpolator2327->setKeyValue(new float[24]{1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0});
Group2325->addChildren(*OrientationInterpolator2327);

COrientationInterpolator* OrientationInterpolator2328 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2328->setDEF("Pitches_r_ankle_RotationInterpolator");
OrientationInterpolator2328->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2328->setKeyValue(new float[20]{0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0});
Group2325->addChildren(*OrientationInterpolator2328);

COrientationInterpolator* OrientationInterpolator2329 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2329->setDEF("Pitches_r_knee_RotationInterpolator");
OrientationInterpolator2329->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2329->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2325->addChildren(*OrientationInterpolator2329);

COrientationInterpolator* OrientationInterpolator2330 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2330->setDEF("Pitches_r_hip_RotationInterpolator");
OrientationInterpolator2330->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2330->setKeyValue(new float[20]{0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0});
Group2325->addChildren(*OrientationInterpolator2330);

COrientationInterpolator* OrientationInterpolator2331 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2331->setDEF("Pitches_l_ankle_RotationInterpolator");
OrientationInterpolator2331->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2331->setKeyValue(new float[20]{0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0});
Group2325->addChildren(*OrientationInterpolator2331);

COrientationInterpolator* OrientationInterpolator2332 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2332->setDEF("Pitches_l_knee_RotationInterpolator");
OrientationInterpolator2332->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2332->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2325->addChildren(*OrientationInterpolator2332);

COrientationInterpolator* OrientationInterpolator2333 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2333->setDEF("Pitches_l_hip_RotationInterpolator");
OrientationInterpolator2333->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2333->setKeyValue(new float[20]{0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0});
Group2325->addChildren(*OrientationInterpolator2333);

COrientationInterpolator* OrientationInterpolator2334 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2334->setDEF("Pitches_r_wrist_RotationInterpolator");
OrientationInterpolator2334->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2334->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2325->addChildren(*OrientationInterpolator2334);

COrientationInterpolator* OrientationInterpolator2335 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2335->setDEF("Pitches_r_elbow_RotationInterpolator");
OrientationInterpolator2335->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2335->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2325->addChildren(*OrientationInterpolator2335);

COrientationInterpolator* OrientationInterpolator2336 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2336->setDEF("Pitches_r_shoulder_RotationInterpolator");
OrientationInterpolator2336->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2336->setKeyValue(new float[20]{0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0});
Group2325->addChildren(*OrientationInterpolator2336);

COrientationInterpolator* OrientationInterpolator2337 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2337->setDEF("Pitches_l_wrist_RotationInterpolator");
OrientationInterpolator2337->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2337->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2325->addChildren(*OrientationInterpolator2337);

COrientationInterpolator* OrientationInterpolator2338 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2338->setDEF("Pitches_l_elbow_RotationInterpolator");
OrientationInterpolator2338->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2338->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2325->addChildren(*OrientationInterpolator2338);

COrientationInterpolator* OrientationInterpolator2339 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2339->setDEF("Pitches_l_shoulder_RotationInterpolator");
OrientationInterpolator2339->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2339->setKeyValue(new float[20]{0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0});
Group2325->addChildren(*OrientationInterpolator2339);

COrientationInterpolator* OrientationInterpolator2340 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2340->setDEF("Pitches_head_RotationInterpolator");
OrientationInterpolator2340->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2340->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2325->addChildren(*OrientationInterpolator2340);

COrientationInterpolator* OrientationInterpolator2341 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2341->setDEF("Pitches_neck_RotationInterpolator");
OrientationInterpolator2341->setKey(new float[4]{0,0.25,0.55,1}, 4);
OrientationInterpolator2341->setKeyValue(new float[16]{0,0,1,0,1,0,0,0.55,-1,0,0,1.05,0,0,1,0});
Group2325->addChildren(*OrientationInterpolator2341);

COrientationInterpolator* OrientationInterpolator2342 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2342->setDEF("Pitches_lower_body_RotationInterpolator");
OrientationInterpolator2342->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2342->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2325->addChildren(*OrientationInterpolator2342);

COrientationInterpolator* OrientationInterpolator2343 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2343->setDEF("Pitches_upper_body_RotationInterpolator");
OrientationInterpolator2343->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2343->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2325->addChildren(*OrientationInterpolator2343);

COrientationInterpolator* OrientationInterpolator2344 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2344->setDEF("Pitches_whole_body_RotationInterpolator");
OrientationInterpolator2344->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2344->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2325->addChildren(*OrientationInterpolator2344);

CPositionInterpolator* PositionInterpolator2345 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator2345->setDEF("Pitches_whole_body_TranslationInterpolator");
PositionInterpolator2345->setKey(new float[9]{0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1}, 9);
PositionInterpolator2345->setKeyValue(new float[27]{0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0});
Group2325->addChildren(*PositionInterpolator2345);

COrientationInterpolator* OrientationInterpolator2346 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2346->setDEF("Pitch_l_sternoclavicular_RollInterpolator");
OrientationInterpolator2346->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2346->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2325->addChildren(*OrientationInterpolator2346);

COrientationInterpolator* OrientationInterpolator2347 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2347->setDEF("Pitch_l_acromioclavicular_RollInterpolator");
OrientationInterpolator2347->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2347->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2325->addChildren(*OrientationInterpolator2347);

COrientationInterpolator* OrientationInterpolator2348 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2348->setDEF("Pitch_r_sternoclavicular_RollInterpolator");
OrientationInterpolator2348->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2348->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2325->addChildren(*OrientationInterpolator2348);

COrientationInterpolator* OrientationInterpolator2349 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2349->setDEF("Pitch_r_acromioclavicular_RollInterpolator");
OrientationInterpolator2349->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2349->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2325->addChildren(*OrientationInterpolator2349);

COrientationInterpolator* OrientationInterpolator2350 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2350->setDEF("Pitch_sacroiliac_YawInterpolator");
OrientationInterpolator2350->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2350->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2325->addChildren(*OrientationInterpolator2350);

COrientationInterpolator* OrientationInterpolator2351 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2351->setDEF("Pitch_vl5_YawInterpolator");
OrientationInterpolator2351->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator2351->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2325->addChildren(*OrientationInterpolator2351);

COrientationInterpolator* OrientationInterpolator2352 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2352->setDEF("Pitch_vc6_YawInterpolator");
OrientationInterpolator2352->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator2352->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2325->addChildren(*OrientationInterpolator2352);

COrientationInterpolator* OrientationInterpolator2353 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2353->setDEF("Pitch_l_thumb1_PitchInterpolator");
OrientationInterpolator2353->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2353->setKeyValue(new float[24]{1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0});
Group2325->addChildren(*OrientationInterpolator2353);

COrientationInterpolator* OrientationInterpolator2354 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2354->setDEF("Pitch_r_thumb1_PitchInterpolator");
OrientationInterpolator2354->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2354->setKeyValue(new float[24]{1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0});
Group2325->addChildren(*OrientationInterpolator2354);

CROUTE* ROUTE2355 = new CROUTE();
ROUTE2355->setFromField("fraction_changed");
ROUTE2355->setFromNode("PitchTimer");
ROUTE2355->setToField("set_fraction");
ROUTE2355->setToNode("Pitches_r_ankle_RotationInterpolator");
Group2325->addChildren(*ROUTE2355);

CROUTE* ROUTE2356 = new CROUTE();
ROUTE2356->setFromField("fraction_changed");
ROUTE2356->setFromNode("PitchTimer");
ROUTE2356->setToField("set_fraction");
ROUTE2356->setToNode("Pitches_r_knee_RotationInterpolator");
Group2325->addChildren(*ROUTE2356);

CROUTE* ROUTE2357 = new CROUTE();
ROUTE2357->setFromField("fraction_changed");
ROUTE2357->setFromNode("PitchTimer");
ROUTE2357->setToField("set_fraction");
ROUTE2357->setToNode("Pitches_r_hip_RotationInterpolator");
Group2325->addChildren(*ROUTE2357);

CROUTE* ROUTE2358 = new CROUTE();
ROUTE2358->setFromField("fraction_changed");
ROUTE2358->setFromNode("PitchTimer");
ROUTE2358->setToField("set_fraction");
ROUTE2358->setToNode("Pitches_l_ankle_RotationInterpolator");
Group2325->addChildren(*ROUTE2358);

CROUTE* ROUTE2359 = new CROUTE();
ROUTE2359->setFromField("fraction_changed");
ROUTE2359->setFromNode("PitchTimer");
ROUTE2359->setToField("set_fraction");
ROUTE2359->setToNode("Pitches_l_knee_RotationInterpolator");
Group2325->addChildren(*ROUTE2359);

CROUTE* ROUTE2360 = new CROUTE();
ROUTE2360->setFromField("fraction_changed");
ROUTE2360->setFromNode("PitchTimer");
ROUTE2360->setToField("set_fraction");
ROUTE2360->setToNode("Pitches_l_hip_RotationInterpolator");
Group2325->addChildren(*ROUTE2360);

CROUTE* ROUTE2361 = new CROUTE();
ROUTE2361->setFromField("fraction_changed");
ROUTE2361->setFromNode("PitchTimer");
ROUTE2361->setToField("set_fraction");
ROUTE2361->setToNode("Pitches_lower_body_RotationInterpolator");
Group2325->addChildren(*ROUTE2361);

CROUTE* ROUTE2362 = new CROUTE();
ROUTE2362->setFromField("fraction_changed");
ROUTE2362->setFromNode("PitchTimer");
ROUTE2362->setToField("set_fraction");
ROUTE2362->setToNode("Pitches_r_wrist_RotationInterpolator");
Group2325->addChildren(*ROUTE2362);

CROUTE* ROUTE2363 = new CROUTE();
ROUTE2363->setFromField("fraction_changed");
ROUTE2363->setFromNode("PitchTimer");
ROUTE2363->setToField("set_fraction");
ROUTE2363->setToNode("Pitches_r_elbow_RotationInterpolator");
Group2325->addChildren(*ROUTE2363);

CROUTE* ROUTE2364 = new CROUTE();
ROUTE2364->setFromField("fraction_changed");
ROUTE2364->setFromNode("PitchTimer");
ROUTE2364->setToField("set_fraction");
ROUTE2364->setToNode("Pitches_r_shoulder_RotationInterpolator");
Group2325->addChildren(*ROUTE2364);

CROUTE* ROUTE2365 = new CROUTE();
ROUTE2365->setFromField("fraction_changed");
ROUTE2365->setFromNode("PitchTimer");
ROUTE2365->setToField("set_fraction");
ROUTE2365->setToNode("Pitches_l_wrist_RotationInterpolator");
Group2325->addChildren(*ROUTE2365);

CROUTE* ROUTE2366 = new CROUTE();
ROUTE2366->setFromField("fraction_changed");
ROUTE2366->setFromNode("PitchTimer");
ROUTE2366->setToField("set_fraction");
ROUTE2366->setToNode("Pitches_l_elbow_RotationInterpolator");
Group2325->addChildren(*ROUTE2366);

CROUTE* ROUTE2367 = new CROUTE();
ROUTE2367->setFromField("fraction_changed");
ROUTE2367->setFromNode("PitchTimer");
ROUTE2367->setToField("set_fraction");
ROUTE2367->setToNode("Pitches_l_shoulder_RotationInterpolator");
Group2325->addChildren(*ROUTE2367);

CROUTE* ROUTE2368 = new CROUTE();
ROUTE2368->setFromField("fraction_changed");
ROUTE2368->setFromNode("PitchTimer");
ROUTE2368->setToField("set_fraction");
ROUTE2368->setToNode("Pitches_head_RotationInterpolator");
Group2325->addChildren(*ROUTE2368);

CROUTE* ROUTE2369 = new CROUTE();
ROUTE2369->setFromField("fraction_changed");
ROUTE2369->setFromNode("PitchTimer");
ROUTE2369->setToField("set_fraction");
ROUTE2369->setToNode("Pitches_neck_RotationInterpolator");
Group2325->addChildren(*ROUTE2369);

CROUTE* ROUTE2370 = new CROUTE();
ROUTE2370->setFromField("fraction_changed");
ROUTE2370->setFromNode("PitchTimer");
ROUTE2370->setToField("set_fraction");
ROUTE2370->setToNode("Pitches_upper_body_RotationInterpolator");
Group2325->addChildren(*ROUTE2370);

CROUTE* ROUTE2371 = new CROUTE();
ROUTE2371->setFromField("fraction_changed");
ROUTE2371->setFromNode("PitchTimer");
ROUTE2371->setToField("set_fraction");
ROUTE2371->setToNode("Pitches_whole_body_RotationInterpolator");
Group2325->addChildren(*ROUTE2371);

CROUTE* ROUTE2372 = new CROUTE();
ROUTE2372->setFromField("fraction_changed");
ROUTE2372->setFromNode("PitchTimer");
ROUTE2372->setToField("set_fraction");
ROUTE2372->setToNode("Pitches_whole_body_TranslationInterpolator");
Group2325->addChildren(*ROUTE2372);

CROUTE* ROUTE2373 = new CROUTE();
ROUTE2373->setFromField("fraction_changed");
ROUTE2373->setFromNode("PitchTimer");
ROUTE2373->setToField("set_fraction");
ROUTE2373->setToNode("Pitch_l_sternoclavicular_RollInterpolator");
Group2325->addChildren(*ROUTE2373);

CROUTE* ROUTE2374 = new CROUTE();
ROUTE2374->setFromField("fraction_changed");
ROUTE2374->setFromNode("PitchTimer");
ROUTE2374->setToField("set_fraction");
ROUTE2374->setToNode("Pitch_l_acromioclavicular_RollInterpolator");
Group2325->addChildren(*ROUTE2374);

CROUTE* ROUTE2375 = new CROUTE();
ROUTE2375->setFromField("fraction_changed");
ROUTE2375->setFromNode("PitchTimer");
ROUTE2375->setToField("set_fraction");
ROUTE2375->setToNode("Pitch_r_sternoclavicular_RollInterpolator");
Group2325->addChildren(*ROUTE2375);

CROUTE* ROUTE2376 = new CROUTE();
ROUTE2376->setFromField("fraction_changed");
ROUTE2376->setFromNode("PitchTimer");
ROUTE2376->setToField("set_fraction");
ROUTE2376->setToNode("Pitch_r_acromioclavicular_RollInterpolator");
Group2325->addChildren(*ROUTE2376);

CROUTE* ROUTE2377 = new CROUTE();
ROUTE2377->setFromField("fraction_changed");
ROUTE2377->setFromNode("PitchTimer");
ROUTE2377->setToField("set_fraction");
ROUTE2377->setToNode("Pitch_r_metatarsal_PitchInterpolator");
Group2325->addChildren(*ROUTE2377);

CROUTE* ROUTE2378 = new CROUTE();
ROUTE2378->setFromField("fraction_changed");
ROUTE2378->setFromNode("PitchTimer");
ROUTE2378->setToField("set_fraction");
ROUTE2378->setToNode("Pitch_sacroiliac_YawInterpolator");
Group2325->addChildren(*ROUTE2378);

CROUTE* ROUTE2379 = new CROUTE();
ROUTE2379->setFromField("fraction_changed");
ROUTE2379->setFromNode("PitchTimer");
ROUTE2379->setToField("set_fraction");
ROUTE2379->setToNode("Pitch_vl5_YawInterpolator");
Group2325->addChildren(*ROUTE2379);

CROUTE* ROUTE2380 = new CROUTE();
ROUTE2380->setFromField("fraction_changed");
ROUTE2380->setFromNode("PitchTimer");
ROUTE2380->setToField("set_fraction");
ROUTE2380->setToNode("Pitch_vc6_YawInterpolator");
Group2325->addChildren(*ROUTE2380);

CROUTE* ROUTE2381 = new CROUTE();
ROUTE2381->setFromField("fraction_changed");
ROUTE2381->setFromNode("PitchTimer");
ROUTE2381->setToField("set_fraction");
ROUTE2381->setToNode("Pitch_l_thumb1_PitchInterpolator");
Group2325->addChildren(*ROUTE2381);

CROUTE* ROUTE2382 = new CROUTE();
ROUTE2382->setFromField("fraction_changed");
ROUTE2382->setFromNode("PitchTimer");
ROUTE2382->setToField("set_fraction");
ROUTE2382->setToNode("Pitch_r_thumb1_PitchInterpolator");
Group2325->addChildren(*ROUTE2382);

CROUTE* ROUTE2383 = new CROUTE();
ROUTE2383->setFromField("value_changed");
ROUTE2383->setFromNode("Pitches_r_ankle_RotationInterpolator");
ROUTE2383->setToField("rotation");
ROUTE2383->setToNode("hanim_r_ankle");
Group2325->addChildren(*ROUTE2383);

CROUTE* ROUTE2384 = new CROUTE();
ROUTE2384->setFromField("value_changed");
ROUTE2384->setFromNode("Pitches_r_knee_RotationInterpolator");
ROUTE2384->setToField("rotation");
ROUTE2384->setToNode("hanim_r_knee");
Group2325->addChildren(*ROUTE2384);

CROUTE* ROUTE2385 = new CROUTE();
ROUTE2385->setFromField("value_changed");
ROUTE2385->setFromNode("Pitches_r_hip_RotationInterpolator");
ROUTE2385->setToField("rotation");
ROUTE2385->setToNode("hanim_r_hip");
Group2325->addChildren(*ROUTE2385);

CROUTE* ROUTE2386 = new CROUTE();
ROUTE2386->setFromField("value_changed");
ROUTE2386->setFromNode("Pitches_l_ankle_RotationInterpolator");
ROUTE2386->setToField("rotation");
ROUTE2386->setToNode("hanim_l_ankle");
Group2325->addChildren(*ROUTE2386);

CROUTE* ROUTE2387 = new CROUTE();
ROUTE2387->setFromField("value_changed");
ROUTE2387->setFromNode("Pitches_l_knee_RotationInterpolator");
ROUTE2387->setToField("rotation");
ROUTE2387->setToNode("hanim_l_knee");
Group2325->addChildren(*ROUTE2387);

CROUTE* ROUTE2388 = new CROUTE();
ROUTE2388->setFromField("value_changed");
ROUTE2388->setFromNode("Pitches_l_hip_RotationInterpolator");
ROUTE2388->setToField("rotation");
ROUTE2388->setToNode("hanim_l_hip");
Group2325->addChildren(*ROUTE2388);

CROUTE* ROUTE2389 = new CROUTE();
ROUTE2389->setFromField("value_changed");
ROUTE2389->setFromNode("Pitches_lower_body_RotationInterpolator");
ROUTE2389->setToField("rotation");
ROUTE2389->setToNode("hanim_sacroiliac");
Group2325->addChildren(*ROUTE2389);

CROUTE* ROUTE2390 = new CROUTE();
ROUTE2390->setFromField("value_changed");
ROUTE2390->setFromNode("Pitches_r_wrist_RotationInterpolator");
ROUTE2390->setToField("rotation");
ROUTE2390->setToNode("hanim_r_wrist");
Group2325->addChildren(*ROUTE2390);

CROUTE* ROUTE2391 = new CROUTE();
ROUTE2391->setFromField("value_changed");
ROUTE2391->setFromNode("Pitches_r_elbow_RotationInterpolator");
ROUTE2391->setToField("rotation");
ROUTE2391->setToNode("hanim_r_elbow");
Group2325->addChildren(*ROUTE2391);

CROUTE* ROUTE2392 = new CROUTE();
ROUTE2392->setFromField("value_changed");
ROUTE2392->setFromNode("Pitches_r_shoulder_RotationInterpolator");
ROUTE2392->setToField("rotation");
ROUTE2392->setToNode("hanim_r_shoulder");
Group2325->addChildren(*ROUTE2392);

CROUTE* ROUTE2393 = new CROUTE();
ROUTE2393->setFromField("value_changed");
ROUTE2393->setFromNode("Pitches_l_wrist_RotationInterpolator");
ROUTE2393->setToField("rotation");
ROUTE2393->setToNode("hanim_l_wrist");
Group2325->addChildren(*ROUTE2393);

CROUTE* ROUTE2394 = new CROUTE();
ROUTE2394->setFromField("value_changed");
ROUTE2394->setFromNode("Pitches_l_elbow_RotationInterpolator");
ROUTE2394->setToField("rotation");
ROUTE2394->setToNode("hanim_l_elbow");
Group2325->addChildren(*ROUTE2394);

CROUTE* ROUTE2395 = new CROUTE();
ROUTE2395->setFromField("value_changed");
ROUTE2395->setFromNode("Pitches_l_shoulder_RotationInterpolator");
ROUTE2395->setToField("rotation");
ROUTE2395->setToNode("hanim_l_shoulder");
Group2325->addChildren(*ROUTE2395);

CROUTE* ROUTE2396 = new CROUTE();
ROUTE2396->setFromField("value_changed");
ROUTE2396->setFromNode("Pitches_head_RotationInterpolator");
ROUTE2396->setToField("rotation");
ROUTE2396->setToNode("hanim_skullbase");
Group2325->addChildren(*ROUTE2396);

CROUTE* ROUTE2397 = new CROUTE();
ROUTE2397->setFromField("value_changed");
ROUTE2397->setFromNode("Pitches_neck_RotationInterpolator");
ROUTE2397->setToField("rotation");
ROUTE2397->setToNode("hanim_vc4");
Group2325->addChildren(*ROUTE2397);

CROUTE* ROUTE2398 = new CROUTE();
ROUTE2398->setFromField("value_changed");
ROUTE2398->setFromNode("Pitches_upper_body_RotationInterpolator");
ROUTE2398->setToField("rotation");
ROUTE2398->setToNode("hanim_vl1");
Group2325->addChildren(*ROUTE2398);

CROUTE* ROUTE2399 = new CROUTE();
ROUTE2399->setFromField("value_changed");
ROUTE2399->setFromNode("Pitches_whole_body_RotationInterpolator");
ROUTE2399->setToField("rotation");
ROUTE2399->setToNode("hanim_humanoid_root");
Group2325->addChildren(*ROUTE2399);

CROUTE* ROUTE2400 = new CROUTE();
ROUTE2400->setFromField("value_changed");
ROUTE2400->setFromNode("Pitches_whole_body_TranslationInterpolator");
ROUTE2400->setToField("translation");
ROUTE2400->setToNode("hanim_humanoid_root");
Group2325->addChildren(*ROUTE2400);

CROUTE* ROUTE2401 = new CROUTE();
ROUTE2401->setFromField("value_changed");
ROUTE2401->setFromNode("Pitch_l_sternoclavicular_RollInterpolator");
ROUTE2401->setToField("rotation");
ROUTE2401->setToNode("hanim_l_sternoclavicular");
Group2325->addChildren(*ROUTE2401);

CROUTE* ROUTE2402 = new CROUTE();
ROUTE2402->setFromField("value_changed");
ROUTE2402->setFromNode("Pitch_l_acromioclavicular_RollInterpolator");
ROUTE2402->setToField("rotation");
ROUTE2402->setToNode("hanim_l_acromioclavicular");
Group2325->addChildren(*ROUTE2402);

CROUTE* ROUTE2403 = new CROUTE();
ROUTE2403->setFromField("value_changed");
ROUTE2403->setFromNode("Pitch_r_sternoclavicular_RollInterpolator");
ROUTE2403->setToField("rotation");
ROUTE2403->setToNode("hanim_r_sternoclavicular");
Group2325->addChildren(*ROUTE2403);

CROUTE* ROUTE2404 = new CROUTE();
ROUTE2404->setFromField("value_changed");
ROUTE2404->setFromNode("Pitch_r_acromioclavicular_RollInterpolator");
ROUTE2404->setToField("rotation");
ROUTE2404->setToNode("hanim_r_acromioclavicular");
Group2325->addChildren(*ROUTE2404);

CROUTE* ROUTE2405 = new CROUTE();
ROUTE2405->setFromField("value_changed");
ROUTE2405->setFromNode("Pitch_r_metatarsal_PitchInterpolator");
ROUTE2405->setToField("rotation");
ROUTE2405->setToNode("hanim_l_metatarsal");
Group2325->addChildren(*ROUTE2405);

CROUTE* ROUTE2406 = new CROUTE();
ROUTE2406->setFromField("value_changed");
ROUTE2406->setFromNode("Pitch_r_metatarsal_PitchInterpolator");
ROUTE2406->setToField("rotation");
ROUTE2406->setToNode("hanim_r_metatarsal");
Group2325->addChildren(*ROUTE2406);

CROUTE* ROUTE2407 = new CROUTE();
ROUTE2407->setFromField("value_changed");
ROUTE2407->setFromNode("Pitch_sacroiliac_YawInterpolator");
ROUTE2407->setToField("rotation");
ROUTE2407->setToNode("hanim_sacroiliac");
Group2325->addChildren(*ROUTE2407);

CROUTE* ROUTE2408 = new CROUTE();
ROUTE2408->setFromField("value_changed");
ROUTE2408->setFromNode("Pitch_vl5_YawInterpolator");
ROUTE2408->setToField("rotation");
ROUTE2408->setToNode("hanim_vl5");
Group2325->addChildren(*ROUTE2408);

CROUTE* ROUTE2409 = new CROUTE();
ROUTE2409->setFromField("value_changed");
ROUTE2409->setFromNode("Pitch_vc6_YawInterpolator");
ROUTE2409->setToField("rotation");
ROUTE2409->setToNode("hanim_vc6");
Group2325->addChildren(*ROUTE2409);

CROUTE* ROUTE2410 = new CROUTE();
ROUTE2410->setFromField("value_changed");
ROUTE2410->setFromNode("Pitch_l_thumb1_PitchInterpolator");
ROUTE2410->setToField("rotation");
ROUTE2410->setToNode("hanim_l_thumb1");
Group2325->addChildren(*ROUTE2410);

CROUTE* ROUTE2411 = new CROUTE();
ROUTE2411->setFromField("value_changed");
ROUTE2411->setFromNode("Pitch_r_thumb1_PitchInterpolator");
ROUTE2411->setToField("rotation");
ROUTE2411->setToNode("hanim_r_thumb1");
Group2325->addChildren(*ROUTE2411);

group->addChildren(*Group2325);

CGroup* Group2412 = (CGroup *)(m_pScene.createNode("Group"));
Group2412->setDEF("YawsAnimation");
CTimeSensor* TimeSensor2413 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor2413->setDEF("YawTimer");
TimeSensor2413->setCycleInterval(5.73);
TimeSensor2413->setLoop(True);
Group2412->addChildren(*TimeSensor2413);

COrientationInterpolator* OrientationInterpolator2414 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2414->setDEF("Yaw_r_metatarsal_PitchInterpolator");
OrientationInterpolator2414->setKey(new float[6]{0,0.2,0.4,0.6,0.7,1}, 6);
OrientationInterpolator2414->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2412->addChildren(*OrientationInterpolator2414);

COrientationInterpolator* OrientationInterpolator2415 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2415->setDEF("Yaws_r_ankle_RotationInterpolator");
OrientationInterpolator2415->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2415->setKeyValue(new float[20]{0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0});
Group2412->addChildren(*OrientationInterpolator2415);

COrientationInterpolator* OrientationInterpolator2416 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2416->setDEF("Yaws_r_knee_RotationInterpolator");
OrientationInterpolator2416->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2416->setKeyValue(new float[20]{0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0});
Group2412->addChildren(*OrientationInterpolator2416);

COrientationInterpolator* OrientationInterpolator2417 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2417->setDEF("Yaws_r_hip_RotationInterpolator");
OrientationInterpolator2417->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2417->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2412->addChildren(*OrientationInterpolator2417);

COrientationInterpolator* OrientationInterpolator2418 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2418->setDEF("Yaws_l_ankle_RotationInterpolator");
OrientationInterpolator2418->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2418->setKeyValue(new float[20]{0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0});
Group2412->addChildren(*OrientationInterpolator2418);

COrientationInterpolator* OrientationInterpolator2419 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2419->setDEF("Yaws_l_knee_RotationInterpolator");
OrientationInterpolator2419->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2419->setKeyValue(new float[20]{0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0});
Group2412->addChildren(*OrientationInterpolator2419);

COrientationInterpolator* OrientationInterpolator2420 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2420->setDEF("Yaws_l_hip_RotationInterpolator");
OrientationInterpolator2420->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2420->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2412->addChildren(*OrientationInterpolator2420);

COrientationInterpolator* OrientationInterpolator2421 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2421->setDEF("Yaws_r_wrist_RotationInterpolator");
OrientationInterpolator2421->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2421->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2412->addChildren(*OrientationInterpolator2421);

COrientationInterpolator* OrientationInterpolator2422 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2422->setDEF("Yaws_r_elbow_RotationInterpolator");
OrientationInterpolator2422->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2422->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2412->addChildren(*OrientationInterpolator2422);

COrientationInterpolator* OrientationInterpolator2423 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2423->setDEF("Yaws_r_shoulder_RotationInterpolator");
OrientationInterpolator2423->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2423->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2412->addChildren(*OrientationInterpolator2423);

COrientationInterpolator* OrientationInterpolator2424 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2424->setDEF("Yaws_l_wrist_RotationInterpolator");
OrientationInterpolator2424->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2424->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2412->addChildren(*OrientationInterpolator2424);

COrientationInterpolator* OrientationInterpolator2425 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2425->setDEF("Yaws_l_elbow_RotationInterpolator");
OrientationInterpolator2425->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2425->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2412->addChildren(*OrientationInterpolator2425);

COrientationInterpolator* OrientationInterpolator2426 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2426->setDEF("Yaws_l_shoulder_RotationInterpolator");
OrientationInterpolator2426->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2426->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2412->addChildren(*OrientationInterpolator2426);

COrientationInterpolator* OrientationInterpolator2427 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2427->setDEF("Yaws_head_RotationInterpolator");
OrientationInterpolator2427->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2427->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2412->addChildren(*OrientationInterpolator2427);

COrientationInterpolator* OrientationInterpolator2428 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2428->setDEF("Yaws_neck_RotationInterpolator");
OrientationInterpolator2428->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2428->setKeyValue(new float[20]{0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0});
Group2412->addChildren(*OrientationInterpolator2428);

COrientationInterpolator* OrientationInterpolator2429 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2429->setDEF("Yaws_upper_body_RotationInterpolator");
OrientationInterpolator2429->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2429->setKeyValue(new float[20]{0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0});
Group2412->addChildren(*OrientationInterpolator2429);

COrientationInterpolator* OrientationInterpolator2430 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2430->setDEF("Yaws_lower_body_RotationInterpolator");
OrientationInterpolator2430->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2430->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2412->addChildren(*OrientationInterpolator2430);

COrientationInterpolator* OrientationInterpolator2431 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2431->setDEF("Yaws_whole_body_RotationInterpolator");
OrientationInterpolator2431->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2431->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2412->addChildren(*OrientationInterpolator2431);

CPositionInterpolator* PositionInterpolator2432 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator2432->setDEF("Yaws_whole_body_TranslationInterpolator");
PositionInterpolator2432->setKey(new float[3]{0,0.5,1}, 3);
PositionInterpolator2432->setKeyValue(new float[9]{0,0,0,0,0,0,0,0,0});
Group2412->addChildren(*PositionInterpolator2432);

COrientationInterpolator* OrientationInterpolator2433 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2433->setDEF("Yaw_l_sternoclavicular_RollInterpolator");
OrientationInterpolator2433->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2433->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2412->addChildren(*OrientationInterpolator2433);

COrientationInterpolator* OrientationInterpolator2434 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2434->setDEF("Yaw_l_acromioclavicular_RollInterpolator");
OrientationInterpolator2434->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2434->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2412->addChildren(*OrientationInterpolator2434);

COrientationInterpolator* OrientationInterpolator2435 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2435->setDEF("Yaw_r_sternoclavicular_RollInterpolator");
OrientationInterpolator2435->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2435->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2412->addChildren(*OrientationInterpolator2435);

COrientationInterpolator* OrientationInterpolator2436 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2436->setDEF("Yaw_r_acromioclavicular_RollInterpolator");
OrientationInterpolator2436->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2436->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2412->addChildren(*OrientationInterpolator2436);

COrientationInterpolator* OrientationInterpolator2437 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2437->setDEF("Yaw_sacroiliac_YawInterpolator");
OrientationInterpolator2437->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2437->setKeyValue(new float[24]{0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,0,0.24,0,-1,0,0.4,0,1,0,0});
Group2412->addChildren(*OrientationInterpolator2437);

COrientationInterpolator* OrientationInterpolator2438 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2438->setDEF("Yaw_vl5_YawInterpolator");
OrientationInterpolator2438->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator2438->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2412->addChildren(*OrientationInterpolator2438);

COrientationInterpolator* OrientationInterpolator2439 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2439->setDEF("Yaw_vc6_YawInterpolator");
OrientationInterpolator2439->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator2439->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2412->addChildren(*OrientationInterpolator2439);

COrientationInterpolator* OrientationInterpolator2440 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2440->setDEF("Yaw_l_thumb1_PitchInterpolator");
OrientationInterpolator2440->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2440->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2412->addChildren(*OrientationInterpolator2440);

COrientationInterpolator* OrientationInterpolator2441 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2441->setDEF("Yaw_r_thumb1_PitchInterpolator");
OrientationInterpolator2441->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2441->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2412->addChildren(*OrientationInterpolator2441);

CROUTE* ROUTE2442 = new CROUTE();
ROUTE2442->setFromField("fraction_changed");
ROUTE2442->setFromNode("YawTimer");
ROUTE2442->setToField("set_fraction");
ROUTE2442->setToNode("Yaws_r_ankle_RotationInterpolator");
Group2412->addChildren(*ROUTE2442);

CROUTE* ROUTE2443 = new CROUTE();
ROUTE2443->setFromField("fraction_changed");
ROUTE2443->setFromNode("YawTimer");
ROUTE2443->setToField("set_fraction");
ROUTE2443->setToNode("Yaws_r_knee_RotationInterpolator");
Group2412->addChildren(*ROUTE2443);

CROUTE* ROUTE2444 = new CROUTE();
ROUTE2444->setFromField("fraction_changed");
ROUTE2444->setFromNode("YawTimer");
ROUTE2444->setToField("set_fraction");
ROUTE2444->setToNode("Yaws_r_hip_RotationInterpolator");
Group2412->addChildren(*ROUTE2444);

CROUTE* ROUTE2445 = new CROUTE();
ROUTE2445->setFromField("fraction_changed");
ROUTE2445->setFromNode("YawTimer");
ROUTE2445->setToField("set_fraction");
ROUTE2445->setToNode("Yaws_l_ankle_RotationInterpolator");
Group2412->addChildren(*ROUTE2445);

CROUTE* ROUTE2446 = new CROUTE();
ROUTE2446->setFromField("fraction_changed");
ROUTE2446->setFromNode("YawTimer");
ROUTE2446->setToField("set_fraction");
ROUTE2446->setToNode("Yaws_l_knee_RotationInterpolator");
Group2412->addChildren(*ROUTE2446);

CROUTE* ROUTE2447 = new CROUTE();
ROUTE2447->setFromField("fraction_changed");
ROUTE2447->setFromNode("YawTimer");
ROUTE2447->setToField("set_fraction");
ROUTE2447->setToNode("Yaws_l_hip_RotationInterpolator");
Group2412->addChildren(*ROUTE2447);

CROUTE* ROUTE2448 = new CROUTE();
ROUTE2448->setFromField("fraction_changed");
ROUTE2448->setFromNode("YawTimer");
ROUTE2448->setToField("set_fraction");
ROUTE2448->setToNode("Yaws_lower_body_RotationInterpolator");
Group2412->addChildren(*ROUTE2448);

CROUTE* ROUTE2449 = new CROUTE();
ROUTE2449->setFromField("fraction_changed");
ROUTE2449->setFromNode("YawTimer");
ROUTE2449->setToField("set_fraction");
ROUTE2449->setToNode("Yaws_r_wrist_RotationInterpolator");
Group2412->addChildren(*ROUTE2449);

CROUTE* ROUTE2450 = new CROUTE();
ROUTE2450->setFromField("fraction_changed");
ROUTE2450->setFromNode("YawTimer");
ROUTE2450->setToField("set_fraction");
ROUTE2450->setToNode("Yaws_r_elbow_RotationInterpolator");
Group2412->addChildren(*ROUTE2450);

CROUTE* ROUTE2451 = new CROUTE();
ROUTE2451->setFromField("fraction_changed");
ROUTE2451->setFromNode("YawTimer");
ROUTE2451->setToField("set_fraction");
ROUTE2451->setToNode("Yaws_r_shoulder_RotationInterpolator");
Group2412->addChildren(*ROUTE2451);

CROUTE* ROUTE2452 = new CROUTE();
ROUTE2452->setFromField("fraction_changed");
ROUTE2452->setFromNode("YawTimer");
ROUTE2452->setToField("set_fraction");
ROUTE2452->setToNode("Yaws_l_wrist_RotationInterpolator");
Group2412->addChildren(*ROUTE2452);

CROUTE* ROUTE2453 = new CROUTE();
ROUTE2453->setFromField("fraction_changed");
ROUTE2453->setFromNode("YawTimer");
ROUTE2453->setToField("set_fraction");
ROUTE2453->setToNode("Yaws_l_elbow_RotationInterpolator");
Group2412->addChildren(*ROUTE2453);

CROUTE* ROUTE2454 = new CROUTE();
ROUTE2454->setFromField("fraction_changed");
ROUTE2454->setFromNode("YawTimer");
ROUTE2454->setToField("set_fraction");
ROUTE2454->setToNode("Yaws_l_shoulder_RotationInterpolator");
Group2412->addChildren(*ROUTE2454);

CROUTE* ROUTE2455 = new CROUTE();
ROUTE2455->setFromField("fraction_changed");
ROUTE2455->setFromNode("YawTimer");
ROUTE2455->setToField("set_fraction");
ROUTE2455->setToNode("Yaws_head_RotationInterpolator");
Group2412->addChildren(*ROUTE2455);

CROUTE* ROUTE2456 = new CROUTE();
ROUTE2456->setFromField("fraction_changed");
ROUTE2456->setFromNode("YawTimer");
ROUTE2456->setToField("set_fraction");
ROUTE2456->setToNode("Yaws_neck_RotationInterpolator");
Group2412->addChildren(*ROUTE2456);

CROUTE* ROUTE2457 = new CROUTE();
ROUTE2457->setFromField("fraction_changed");
ROUTE2457->setFromNode("YawTimer");
ROUTE2457->setToField("set_fraction");
ROUTE2457->setToNode("Yaws_upper_body_RotationInterpolator");
Group2412->addChildren(*ROUTE2457);

CROUTE* ROUTE2458 = new CROUTE();
ROUTE2458->setFromField("fraction_changed");
ROUTE2458->setFromNode("YawTimer");
ROUTE2458->setToField("set_fraction");
ROUTE2458->setToNode("Yaws_whole_body_RotationInterpolator");
Group2412->addChildren(*ROUTE2458);

CROUTE* ROUTE2459 = new CROUTE();
ROUTE2459->setFromField("fraction_changed");
ROUTE2459->setFromNode("YawTimer");
ROUTE2459->setToField("set_fraction");
ROUTE2459->setToNode("Yaws_whole_body_TranslationInterpolator");
Group2412->addChildren(*ROUTE2459);

CROUTE* ROUTE2460 = new CROUTE();
ROUTE2460->setFromField("fraction_changed");
ROUTE2460->setFromNode("YawTimer");
ROUTE2460->setToField("set_fraction");
ROUTE2460->setToNode("Yaw_l_sternoclavicular_RollInterpolator");
Group2412->addChildren(*ROUTE2460);

CROUTE* ROUTE2461 = new CROUTE();
ROUTE2461->setFromField("fraction_changed");
ROUTE2461->setFromNode("YawTimer");
ROUTE2461->setToField("set_fraction");
ROUTE2461->setToNode("Yaw_l_acromioclavicular_RollInterpolator");
Group2412->addChildren(*ROUTE2461);

CROUTE* ROUTE2462 = new CROUTE();
ROUTE2462->setFromField("fraction_changed");
ROUTE2462->setFromNode("YawTimer");
ROUTE2462->setToField("set_fraction");
ROUTE2462->setToNode("Yaw_r_sternoclavicular_RollInterpolator");
Group2412->addChildren(*ROUTE2462);

CROUTE* ROUTE2463 = new CROUTE();
ROUTE2463->setFromField("fraction_changed");
ROUTE2463->setFromNode("YawTimer");
ROUTE2463->setToField("set_fraction");
ROUTE2463->setToNode("Yaw_r_acromioclavicular_RollInterpolator");
Group2412->addChildren(*ROUTE2463);

CROUTE* ROUTE2464 = new CROUTE();
ROUTE2464->setFromField("fraction_changed");
ROUTE2464->setFromNode("YawTimer");
ROUTE2464->setToField("set_fraction");
ROUTE2464->setToNode("Yaw_r_metatarsal_PitchInterpolator");
Group2412->addChildren(*ROUTE2464);

CROUTE* ROUTE2465 = new CROUTE();
ROUTE2465->setFromField("fraction_changed");
ROUTE2465->setFromNode("YawTimer");
ROUTE2465->setToField("set_fraction");
ROUTE2465->setToNode("Yaw_sacroiliac_YawInterpolator");
Group2412->addChildren(*ROUTE2465);

CROUTE* ROUTE2466 = new CROUTE();
ROUTE2466->setFromField("fraction_changed");
ROUTE2466->setFromNode("YawTimer");
ROUTE2466->setToField("set_fraction");
ROUTE2466->setToNode("Yaw_vl5_YawInterpolator");
Group2412->addChildren(*ROUTE2466);

CROUTE* ROUTE2467 = new CROUTE();
ROUTE2467->setFromField("fraction_changed");
ROUTE2467->setFromNode("YawTimer");
ROUTE2467->setToField("set_fraction");
ROUTE2467->setToNode("Yaw_vc6_YawInterpolator");
Group2412->addChildren(*ROUTE2467);

CROUTE* ROUTE2468 = new CROUTE();
ROUTE2468->setFromField("fraction_changed");
ROUTE2468->setFromNode("YawTimer");
ROUTE2468->setToField("set_fraction");
ROUTE2468->setToNode("Yaw_l_thumb1_PitchInterpolator");
Group2412->addChildren(*ROUTE2468);

CROUTE* ROUTE2469 = new CROUTE();
ROUTE2469->setFromField("fraction_changed");
ROUTE2469->setFromNode("YawTimer");
ROUTE2469->setToField("set_fraction");
ROUTE2469->setToNode("Yaw_r_thumb1_PitchInterpolator");
Group2412->addChildren(*ROUTE2469);

CROUTE* ROUTE2470 = new CROUTE();
ROUTE2470->setFromField("value_changed");
ROUTE2470->setFromNode("Yaws_r_ankle_RotationInterpolator");
ROUTE2470->setToField("rotation");
ROUTE2470->setToNode("hanim_r_ankle");
Group2412->addChildren(*ROUTE2470);

CROUTE* ROUTE2471 = new CROUTE();
ROUTE2471->setFromField("value_changed");
ROUTE2471->setFromNode("Yaws_r_knee_RotationInterpolator");
ROUTE2471->setToField("rotation");
ROUTE2471->setToNode("hanim_r_knee");
Group2412->addChildren(*ROUTE2471);

CROUTE* ROUTE2472 = new CROUTE();
ROUTE2472->setFromField("value_changed");
ROUTE2472->setFromNode("Yaws_r_hip_RotationInterpolator");
ROUTE2472->setToField("rotation");
ROUTE2472->setToNode("hanim_r_hip");
Group2412->addChildren(*ROUTE2472);

CROUTE* ROUTE2473 = new CROUTE();
ROUTE2473->setFromField("value_changed");
ROUTE2473->setFromNode("Yaws_l_ankle_RotationInterpolator");
ROUTE2473->setToField("rotation");
ROUTE2473->setToNode("hanim_l_ankle");
Group2412->addChildren(*ROUTE2473);

CROUTE* ROUTE2474 = new CROUTE();
ROUTE2474->setFromField("value_changed");
ROUTE2474->setFromNode("Yaws_l_knee_RotationInterpolator");
ROUTE2474->setToField("rotation");
ROUTE2474->setToNode("hanim_l_knee");
Group2412->addChildren(*ROUTE2474);

CROUTE* ROUTE2475 = new CROUTE();
ROUTE2475->setFromField("value_changed");
ROUTE2475->setFromNode("Yaws_l_hip_RotationInterpolator");
ROUTE2475->setToField("rotation");
ROUTE2475->setToNode("hanim_l_hip");
Group2412->addChildren(*ROUTE2475);

CROUTE* ROUTE2476 = new CROUTE();
ROUTE2476->setFromField("value_changed");
ROUTE2476->setFromNode("Yaws_lower_body_RotationInterpolator");
ROUTE2476->setToField("rotation");
ROUTE2476->setToNode("hanim_sacroiliac");
Group2412->addChildren(*ROUTE2476);

CROUTE* ROUTE2477 = new CROUTE();
ROUTE2477->setFromField("value_changed");
ROUTE2477->setFromNode("Yaws_r_wrist_RotationInterpolator");
ROUTE2477->setToField("rotation");
ROUTE2477->setToNode("hanim_r_wrist");
Group2412->addChildren(*ROUTE2477);

CROUTE* ROUTE2478 = new CROUTE();
ROUTE2478->setFromField("value_changed");
ROUTE2478->setFromNode("Yaws_r_elbow_RotationInterpolator");
ROUTE2478->setToField("rotation");
ROUTE2478->setToNode("hanim_r_elbow");
Group2412->addChildren(*ROUTE2478);

CROUTE* ROUTE2479 = new CROUTE();
ROUTE2479->setFromField("value_changed");
ROUTE2479->setFromNode("Yaws_r_shoulder_RotationInterpolator");
ROUTE2479->setToField("rotation");
ROUTE2479->setToNode("hanim_r_shoulder");
Group2412->addChildren(*ROUTE2479);

CROUTE* ROUTE2480 = new CROUTE();
ROUTE2480->setFromField("value_changed");
ROUTE2480->setFromNode("Yaws_l_wrist_RotationInterpolator");
ROUTE2480->setToField("rotation");
ROUTE2480->setToNode("hanim_l_wrist");
Group2412->addChildren(*ROUTE2480);

CROUTE* ROUTE2481 = new CROUTE();
ROUTE2481->setFromField("value_changed");
ROUTE2481->setFromNode("Yaws_l_elbow_RotationInterpolator");
ROUTE2481->setToField("rotation");
ROUTE2481->setToNode("hanim_l_elbow");
Group2412->addChildren(*ROUTE2481);

CROUTE* ROUTE2482 = new CROUTE();
ROUTE2482->setFromField("value_changed");
ROUTE2482->setFromNode("Yaws_l_shoulder_RotationInterpolator");
ROUTE2482->setToField("rotation");
ROUTE2482->setToNode("hanim_l_shoulder");
Group2412->addChildren(*ROUTE2482);

CROUTE* ROUTE2483 = new CROUTE();
ROUTE2483->setFromField("value_changed");
ROUTE2483->setFromNode("Yaws_head_RotationInterpolator");
ROUTE2483->setToField("rotation");
ROUTE2483->setToNode("hanim_skullbase");
Group2412->addChildren(*ROUTE2483);

CROUTE* ROUTE2484 = new CROUTE();
ROUTE2484->setFromField("value_changed");
ROUTE2484->setFromNode("Yaws_neck_RotationInterpolator");
ROUTE2484->setToField("rotation");
ROUTE2484->setToNode("hanim_vc4");
Group2412->addChildren(*ROUTE2484);

CROUTE* ROUTE2485 = new CROUTE();
ROUTE2485->setFromField("value_changed");
ROUTE2485->setFromNode("Yaws_upper_body_RotationInterpolator");
ROUTE2485->setToField("rotation");
ROUTE2485->setToNode("hanim_vl1");
Group2412->addChildren(*ROUTE2485);

CROUTE* ROUTE2486 = new CROUTE();
ROUTE2486->setFromField("value_changed");
ROUTE2486->setFromNode("Yaws_whole_body_RotationInterpolator");
ROUTE2486->setToField("rotation");
ROUTE2486->setToNode("hanim_humanoid_root");
Group2412->addChildren(*ROUTE2486);

CROUTE* ROUTE2487 = new CROUTE();
ROUTE2487->setFromField("value_changed");
ROUTE2487->setFromNode("Yaws_whole_body_TranslationInterpolator");
ROUTE2487->setToField("translation");
ROUTE2487->setToNode("hanim_humanoid_root");
Group2412->addChildren(*ROUTE2487);

CROUTE* ROUTE2488 = new CROUTE();
ROUTE2488->setFromField("value_changed");
ROUTE2488->setFromNode("Yaw_l_sternoclavicular_RollInterpolator");
ROUTE2488->setToField("rotation");
ROUTE2488->setToNode("hanim_l_sternoclavicular");
Group2412->addChildren(*ROUTE2488);

CROUTE* ROUTE2489 = new CROUTE();
ROUTE2489->setFromField("value_changed");
ROUTE2489->setFromNode("Yaw_l_acromioclavicular_RollInterpolator");
ROUTE2489->setToField("rotation");
ROUTE2489->setToNode("hanim_l_acromioclavicular");
Group2412->addChildren(*ROUTE2489);

CROUTE* ROUTE2490 = new CROUTE();
ROUTE2490->setFromField("value_changed");
ROUTE2490->setFromNode("Yaw_r_sternoclavicular_RollInterpolator");
ROUTE2490->setToField("rotation");
ROUTE2490->setToNode("hanim_r_sternoclavicular");
Group2412->addChildren(*ROUTE2490);

CROUTE* ROUTE2491 = new CROUTE();
ROUTE2491->setFromField("value_changed");
ROUTE2491->setFromNode("Yaw_r_acromioclavicular_RollInterpolator");
ROUTE2491->setToField("rotation");
ROUTE2491->setToNode("hanim_r_acromioclavicular");
Group2412->addChildren(*ROUTE2491);

CROUTE* ROUTE2492 = new CROUTE();
ROUTE2492->setFromField("value_changed");
ROUTE2492->setFromNode("Yaw_r_metatarsal_PitchInterpolator");
ROUTE2492->setToField("rotation");
ROUTE2492->setToNode("hanim_l_metatarsal");
Group2412->addChildren(*ROUTE2492);

CROUTE* ROUTE2493 = new CROUTE();
ROUTE2493->setFromField("value_changed");
ROUTE2493->setFromNode("Yaw_r_metatarsal_PitchInterpolator");
ROUTE2493->setToField("rotation");
ROUTE2493->setToNode("hanim_r_metatarsal");
Group2412->addChildren(*ROUTE2493);

CROUTE* ROUTE2494 = new CROUTE();
ROUTE2494->setFromField("value_changed");
ROUTE2494->setFromNode("Yaw_sacroiliac_YawInterpolator");
ROUTE2494->setToField("rotation");
ROUTE2494->setToNode("hanim_sacroiliac");
Group2412->addChildren(*ROUTE2494);

CROUTE* ROUTE2495 = new CROUTE();
ROUTE2495->setFromField("value_changed");
ROUTE2495->setFromNode("Yaw_vl5_YawInterpolator");
ROUTE2495->setToField("rotation");
ROUTE2495->setToNode("hanim_vl5");
Group2412->addChildren(*ROUTE2495);

CROUTE* ROUTE2496 = new CROUTE();
ROUTE2496->setFromField("value_changed");
ROUTE2496->setFromNode("Yaw_vc6_YawInterpolator");
ROUTE2496->setToField("rotation");
ROUTE2496->setToNode("hanim_vc6");
Group2412->addChildren(*ROUTE2496);

CROUTE* ROUTE2497 = new CROUTE();
ROUTE2497->setFromField("value_changed");
ROUTE2497->setFromNode("Yaw_l_thumb1_PitchInterpolator");
ROUTE2497->setToField("rotation");
ROUTE2497->setToNode("hanim_l_thumb1");
Group2412->addChildren(*ROUTE2497);

CROUTE* ROUTE2498 = new CROUTE();
ROUTE2498->setFromField("value_changed");
ROUTE2498->setFromNode("Yaw_r_thumb1_PitchInterpolator");
ROUTE2498->setToField("rotation");
ROUTE2498->setToNode("hanim_r_thumb1");
Group2412->addChildren(*ROUTE2498);

group->addChildren(*Group2412);

CGroup* Group2499 = (CGroup *)(m_pScene.createNode("Group"));
Group2499->setDEF("RollsAnimation");
CTimeSensor* TimeSensor2500 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor2500->setDEF("RollTimer");
TimeSensor2500->setCycleInterval(5.73);
TimeSensor2500->setLoop(True);
Group2499->addChildren(*TimeSensor2500);

COrientationInterpolator* OrientationInterpolator2501 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2501->setDEF("Roll_r_metatarsal_PitchInterpolator");
OrientationInterpolator2501->setKey(new float[6]{0,0.2,0.4,0.6,0.7,1}, 6);
OrientationInterpolator2501->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2499->addChildren(*OrientationInterpolator2501);

COrientationInterpolator* OrientationInterpolator2502 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2502->setDEF("Rolls_r_ankle_RotationInterpolator");
OrientationInterpolator2502->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2502->setKeyValue(new float[20]{0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group2499->addChildren(*OrientationInterpolator2502);

COrientationInterpolator* OrientationInterpolator2503 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2503->setDEF("Rolls_r_knee_RotationInterpolator");
OrientationInterpolator2503->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2503->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2499->addChildren(*OrientationInterpolator2503);

COrientationInterpolator* OrientationInterpolator2504 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2504->setDEF("Rolls_r_hip_RotationInterpolator");
OrientationInterpolator2504->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2504->setKeyValue(new float[20]{0,0,-1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0});
Group2499->addChildren(*OrientationInterpolator2504);

COrientationInterpolator* OrientationInterpolator2505 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2505->setDEF("Rolls_l_ankle_RotationInterpolator");
OrientationInterpolator2505->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2505->setKeyValue(new float[20]{0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0});
Group2499->addChildren(*OrientationInterpolator2505);

COrientationInterpolator* OrientationInterpolator2506 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2506->setDEF("Rolls_l_knee_RotationInterpolator");
OrientationInterpolator2506->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2506->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2499->addChildren(*OrientationInterpolator2506);

COrientationInterpolator* OrientationInterpolator2507 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2507->setDEF("Rolls_l_hip_RotationInterpolator");
OrientationInterpolator2507->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2507->setKeyValue(new float[20]{0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group2499->addChildren(*OrientationInterpolator2507);

COrientationInterpolator* OrientationInterpolator2508 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2508->setDEF("Rolls_r_wrist_RotationInterpolator");
OrientationInterpolator2508->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2508->setKeyValue(new float[20]{0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group2499->addChildren(*OrientationInterpolator2508);

COrientationInterpolator* OrientationInterpolator2509 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2509->setDEF("Rolls_r_elbow_RotationInterpolator");
OrientationInterpolator2509->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2509->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2499->addChildren(*OrientationInterpolator2509);

COrientationInterpolator* OrientationInterpolator2510 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2510->setDEF("Rolls_r_shoulder_RotationInterpolator");
OrientationInterpolator2510->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2510->setKeyValue(new float[20]{0,0,1,0,0,0,-1,1.5,0,0,-1,3,0,0,-1,1.5,0,0,1,0});
Group2499->addChildren(*OrientationInterpolator2510);

COrientationInterpolator* OrientationInterpolator2511 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2511->setDEF("Rolls_l_wrist_RotationInterpolator");
OrientationInterpolator2511->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2511->setKeyValue(new float[20]{0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0});
Group2499->addChildren(*OrientationInterpolator2511);

COrientationInterpolator* OrientationInterpolator2512 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2512->setDEF("Rolls_l_elbow_RotationInterpolator");
OrientationInterpolator2512->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2512->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2499->addChildren(*OrientationInterpolator2512);

COrientationInterpolator* OrientationInterpolator2513 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2513->setDEF("Rolls_l_shoulder_RotationInterpolator");
OrientationInterpolator2513->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2513->setKeyValue(new float[20]{0,0,1,0,0,0,1,1.5,0,0,1,3,0,0,1,1.5,0,0,1,0});
Group2499->addChildren(*OrientationInterpolator2513);

COrientationInterpolator* OrientationInterpolator2514 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2514->setDEF("Rolls_head_RotationInterpolator");
OrientationInterpolator2514->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2514->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2499->addChildren(*OrientationInterpolator2514);

COrientationInterpolator* OrientationInterpolator2515 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2515->setDEF("Rolls_neck_RotationInterpolator");
OrientationInterpolator2515->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2515->setKeyValue(new float[20]{0,0,1,0,0,0,1,1.25,0,0,1,0,0,0,-1,1.25,0,0,1,0});
Group2499->addChildren(*OrientationInterpolator2515);

COrientationInterpolator* OrientationInterpolator2516 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2516->setDEF("Rolls_lower_body_RotationInterpolator");
OrientationInterpolator2516->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2516->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2499->addChildren(*OrientationInterpolator2516);

COrientationInterpolator* OrientationInterpolator2517 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2517->setDEF("Rolls_upper_body_RotationInterpolator");
OrientationInterpolator2517->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2517->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2499->addChildren(*OrientationInterpolator2517);

COrientationInterpolator* OrientationInterpolator2518 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2518->setDEF("Rolls_whole_body_RotationInterpolator");
OrientationInterpolator2518->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2518->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2499->addChildren(*OrientationInterpolator2518);

CPositionInterpolator* PositionInterpolator2519 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator2519->setDEF("Rolls_whole_body_TranslationInterpolator");
PositionInterpolator2519->setKey(new float[9]{0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1}, 9);
PositionInterpolator2519->setKeyValue(new float[27]{0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0});
Group2499->addChildren(*PositionInterpolator2519);

COrientationInterpolator* OrientationInterpolator2520 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2520->setDEF("Roll_l_sternoclavicular_RollInterpolator");
OrientationInterpolator2520->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2520->setKeyValue(new float[24]{0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0});
Group2499->addChildren(*OrientationInterpolator2520);

COrientationInterpolator* OrientationInterpolator2521 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2521->setDEF("Roll_l_acromioclavicular_RollInterpolator");
OrientationInterpolator2521->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2521->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0});
Group2499->addChildren(*OrientationInterpolator2521);

COrientationInterpolator* OrientationInterpolator2522 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2522->setDEF("Roll_r_sternoclavicular_RollInterpolator");
OrientationInterpolator2522->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2522->setKeyValue(new float[24]{0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0});
Group2499->addChildren(*OrientationInterpolator2522);

COrientationInterpolator* OrientationInterpolator2523 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2523->setDEF("Roll_r_acromioclavicular_RollInterpolator");
OrientationInterpolator2523->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2523->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0});
Group2499->addChildren(*OrientationInterpolator2523);

COrientationInterpolator* OrientationInterpolator2524 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2524->setDEF("Roll_sacroiliac_YawInterpolator");
OrientationInterpolator2524->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2524->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2499->addChildren(*OrientationInterpolator2524);

COrientationInterpolator* OrientationInterpolator2525 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2525->setDEF("Roll_vl5_YawInterpolator");
OrientationInterpolator2525->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator2525->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2499->addChildren(*OrientationInterpolator2525);

COrientationInterpolator* OrientationInterpolator2526 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2526->setDEF("Roll_vc6_YawInterpolator");
OrientationInterpolator2526->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator2526->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2499->addChildren(*OrientationInterpolator2526);

COrientationInterpolator* OrientationInterpolator2527 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2527->setDEF("Roll_l_thumb1_PitchInterpolator");
OrientationInterpolator2527->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2527->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2499->addChildren(*OrientationInterpolator2527);

COrientationInterpolator* OrientationInterpolator2528 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2528->setDEF("Roll_r_thumb1_PitchInterpolator");
OrientationInterpolator2528->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2528->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2499->addChildren(*OrientationInterpolator2528);

CROUTE* ROUTE2529 = new CROUTE();
ROUTE2529->setFromField("fraction_changed");
ROUTE2529->setFromNode("RollTimer");
ROUTE2529->setToField("set_fraction");
ROUTE2529->setToNode("Rolls_r_ankle_RotationInterpolator");
Group2499->addChildren(*ROUTE2529);

CROUTE* ROUTE2530 = new CROUTE();
ROUTE2530->setFromField("fraction_changed");
ROUTE2530->setFromNode("RollTimer");
ROUTE2530->setToField("set_fraction");
ROUTE2530->setToNode("Rolls_r_knee_RotationInterpolator");
Group2499->addChildren(*ROUTE2530);

CROUTE* ROUTE2531 = new CROUTE();
ROUTE2531->setFromField("fraction_changed");
ROUTE2531->setFromNode("RollTimer");
ROUTE2531->setToField("set_fraction");
ROUTE2531->setToNode("Rolls_r_hip_RotationInterpolator");
Group2499->addChildren(*ROUTE2531);

CROUTE* ROUTE2532 = new CROUTE();
ROUTE2532->setFromField("fraction_changed");
ROUTE2532->setFromNode("RollTimer");
ROUTE2532->setToField("set_fraction");
ROUTE2532->setToNode("Rolls_l_ankle_RotationInterpolator");
Group2499->addChildren(*ROUTE2532);

CROUTE* ROUTE2533 = new CROUTE();
ROUTE2533->setFromField("fraction_changed");
ROUTE2533->setFromNode("RollTimer");
ROUTE2533->setToField("set_fraction");
ROUTE2533->setToNode("Rolls_l_knee_RotationInterpolator");
Group2499->addChildren(*ROUTE2533);

CROUTE* ROUTE2534 = new CROUTE();
ROUTE2534->setFromField("fraction_changed");
ROUTE2534->setFromNode("RollTimer");
ROUTE2534->setToField("set_fraction");
ROUTE2534->setToNode("Rolls_l_hip_RotationInterpolator");
Group2499->addChildren(*ROUTE2534);

CROUTE* ROUTE2535 = new CROUTE();
ROUTE2535->setFromField("fraction_changed");
ROUTE2535->setFromNode("RollTimer");
ROUTE2535->setToField("set_fraction");
ROUTE2535->setToNode("Rolls_lower_body_RotationInterpolator");
Group2499->addChildren(*ROUTE2535);

CROUTE* ROUTE2536 = new CROUTE();
ROUTE2536->setFromField("fraction_changed");
ROUTE2536->setFromNode("RollTimer");
ROUTE2536->setToField("set_fraction");
ROUTE2536->setToNode("Rolls_r_wrist_RotationInterpolator");
Group2499->addChildren(*ROUTE2536);

CROUTE* ROUTE2537 = new CROUTE();
ROUTE2537->setFromField("fraction_changed");
ROUTE2537->setFromNode("RollTimer");
ROUTE2537->setToField("set_fraction");
ROUTE2537->setToNode("Rolls_r_elbow_RotationInterpolator");
Group2499->addChildren(*ROUTE2537);

CROUTE* ROUTE2538 = new CROUTE();
ROUTE2538->setFromField("fraction_changed");
ROUTE2538->setFromNode("RollTimer");
ROUTE2538->setToField("set_fraction");
ROUTE2538->setToNode("Rolls_r_shoulder_RotationInterpolator");
Group2499->addChildren(*ROUTE2538);

CROUTE* ROUTE2539 = new CROUTE();
ROUTE2539->setFromField("fraction_changed");
ROUTE2539->setFromNode("RollTimer");
ROUTE2539->setToField("set_fraction");
ROUTE2539->setToNode("Rolls_l_wrist_RotationInterpolator");
Group2499->addChildren(*ROUTE2539);

CROUTE* ROUTE2540 = new CROUTE();
ROUTE2540->setFromField("fraction_changed");
ROUTE2540->setFromNode("RollTimer");
ROUTE2540->setToField("set_fraction");
ROUTE2540->setToNode("Rolls_l_elbow_RotationInterpolator");
Group2499->addChildren(*ROUTE2540);

CROUTE* ROUTE2541 = new CROUTE();
ROUTE2541->setFromField("fraction_changed");
ROUTE2541->setFromNode("RollTimer");
ROUTE2541->setToField("set_fraction");
ROUTE2541->setToNode("Rolls_l_shoulder_RotationInterpolator");
Group2499->addChildren(*ROUTE2541);

CROUTE* ROUTE2542 = new CROUTE();
ROUTE2542->setFromField("fraction_changed");
ROUTE2542->setFromNode("RollTimer");
ROUTE2542->setToField("set_fraction");
ROUTE2542->setToNode("Rolls_head_RotationInterpolator");
Group2499->addChildren(*ROUTE2542);

CROUTE* ROUTE2543 = new CROUTE();
ROUTE2543->setFromField("fraction_changed");
ROUTE2543->setFromNode("RollTimer");
ROUTE2543->setToField("set_fraction");
ROUTE2543->setToNode("Rolls_neck_RotationInterpolator");
Group2499->addChildren(*ROUTE2543);

CROUTE* ROUTE2544 = new CROUTE();
ROUTE2544->setFromField("fraction_changed");
ROUTE2544->setFromNode("RollTimer");
ROUTE2544->setToField("set_fraction");
ROUTE2544->setToNode("Rolls_upper_body_RotationInterpolator");
Group2499->addChildren(*ROUTE2544);

CROUTE* ROUTE2545 = new CROUTE();
ROUTE2545->setFromField("fraction_changed");
ROUTE2545->setFromNode("RollTimer");
ROUTE2545->setToField("set_fraction");
ROUTE2545->setToNode("Rolls_whole_body_RotationInterpolator");
Group2499->addChildren(*ROUTE2545);

CROUTE* ROUTE2546 = new CROUTE();
ROUTE2546->setFromField("fraction_changed");
ROUTE2546->setFromNode("RollTimer");
ROUTE2546->setToField("set_fraction");
ROUTE2546->setToNode("Rolls_whole_body_TranslationInterpolator");
Group2499->addChildren(*ROUTE2546);

CROUTE* ROUTE2547 = new CROUTE();
ROUTE2547->setFromField("fraction_changed");
ROUTE2547->setFromNode("RollTimer");
ROUTE2547->setToField("set_fraction");
ROUTE2547->setToNode("Roll_l_sternoclavicular_RollInterpolator");
Group2499->addChildren(*ROUTE2547);

CROUTE* ROUTE2548 = new CROUTE();
ROUTE2548->setFromField("fraction_changed");
ROUTE2548->setFromNode("RollTimer");
ROUTE2548->setToField("set_fraction");
ROUTE2548->setToNode("Roll_l_acromioclavicular_RollInterpolator");
Group2499->addChildren(*ROUTE2548);

CROUTE* ROUTE2549 = new CROUTE();
ROUTE2549->setFromField("fraction_changed");
ROUTE2549->setFromNode("RollTimer");
ROUTE2549->setToField("set_fraction");
ROUTE2549->setToNode("Roll_r_sternoclavicular_RollInterpolator");
Group2499->addChildren(*ROUTE2549);

CROUTE* ROUTE2550 = new CROUTE();
ROUTE2550->setFromField("fraction_changed");
ROUTE2550->setFromNode("RollTimer");
ROUTE2550->setToField("set_fraction");
ROUTE2550->setToNode("Roll_r_acromioclavicular_RollInterpolator");
Group2499->addChildren(*ROUTE2550);

CROUTE* ROUTE2551 = new CROUTE();
ROUTE2551->setFromField("fraction_changed");
ROUTE2551->setFromNode("RollTimer");
ROUTE2551->setToField("set_fraction");
ROUTE2551->setToNode("Roll_r_metatarsal_PitchInterpolator");
Group2499->addChildren(*ROUTE2551);

CROUTE* ROUTE2552 = new CROUTE();
ROUTE2552->setFromField("fraction_changed");
ROUTE2552->setFromNode("RollTimer");
ROUTE2552->setToField("set_fraction");
ROUTE2552->setToNode("Roll_sacroiliac_YawInterpolator");
Group2499->addChildren(*ROUTE2552);

CROUTE* ROUTE2553 = new CROUTE();
ROUTE2553->setFromField("fraction_changed");
ROUTE2553->setFromNode("RollTimer");
ROUTE2553->setToField("set_fraction");
ROUTE2553->setToNode("Roll_vl5_YawInterpolator");
Group2499->addChildren(*ROUTE2553);

CROUTE* ROUTE2554 = new CROUTE();
ROUTE2554->setFromField("fraction_changed");
ROUTE2554->setFromNode("RollTimer");
ROUTE2554->setToField("set_fraction");
ROUTE2554->setToNode("Roll_vc6_YawInterpolator");
Group2499->addChildren(*ROUTE2554);

CROUTE* ROUTE2555 = new CROUTE();
ROUTE2555->setFromField("fraction_changed");
ROUTE2555->setFromNode("RollTimer");
ROUTE2555->setToField("set_fraction");
ROUTE2555->setToNode("Roll_l_thumb1_PitchInterpolator");
Group2499->addChildren(*ROUTE2555);

CROUTE* ROUTE2556 = new CROUTE();
ROUTE2556->setFromField("fraction_changed");
ROUTE2556->setFromNode("RollTimer");
ROUTE2556->setToField("set_fraction");
ROUTE2556->setToNode("Roll_r_thumb1_PitchInterpolator");
Group2499->addChildren(*ROUTE2556);

CROUTE* ROUTE2557 = new CROUTE();
ROUTE2557->setFromField("value_changed");
ROUTE2557->setFromNode("Rolls_r_ankle_RotationInterpolator");
ROUTE2557->setToField("rotation");
ROUTE2557->setToNode("hanim_r_ankle");
Group2499->addChildren(*ROUTE2557);

CROUTE* ROUTE2558 = new CROUTE();
ROUTE2558->setFromField("value_changed");
ROUTE2558->setFromNode("Rolls_r_knee_RotationInterpolator");
ROUTE2558->setToField("rotation");
ROUTE2558->setToNode("hanim_r_knee");
Group2499->addChildren(*ROUTE2558);

CROUTE* ROUTE2559 = new CROUTE();
ROUTE2559->setFromField("value_changed");
ROUTE2559->setFromNode("Rolls_r_hip_RotationInterpolator");
ROUTE2559->setToField("rotation");
ROUTE2559->setToNode("hanim_r_hip");
Group2499->addChildren(*ROUTE2559);

CROUTE* ROUTE2560 = new CROUTE();
ROUTE2560->setFromField("value_changed");
ROUTE2560->setFromNode("Rolls_l_ankle_RotationInterpolator");
ROUTE2560->setToField("rotation");
ROUTE2560->setToNode("hanim_l_ankle");
Group2499->addChildren(*ROUTE2560);

CROUTE* ROUTE2561 = new CROUTE();
ROUTE2561->setFromField("value_changed");
ROUTE2561->setFromNode("Rolls_l_knee_RotationInterpolator");
ROUTE2561->setToField("rotation");
ROUTE2561->setToNode("hanim_l_knee");
Group2499->addChildren(*ROUTE2561);

CROUTE* ROUTE2562 = new CROUTE();
ROUTE2562->setFromField("value_changed");
ROUTE2562->setFromNode("Rolls_l_hip_RotationInterpolator");
ROUTE2562->setToField("rotation");
ROUTE2562->setToNode("hanim_l_hip");
Group2499->addChildren(*ROUTE2562);

CROUTE* ROUTE2563 = new CROUTE();
ROUTE2563->setFromField("value_changed");
ROUTE2563->setFromNode("Rolls_lower_body_RotationInterpolator");
ROUTE2563->setToField("rotation");
ROUTE2563->setToNode("hanim_sacroiliac");
Group2499->addChildren(*ROUTE2563);

CROUTE* ROUTE2564 = new CROUTE();
ROUTE2564->setFromField("value_changed");
ROUTE2564->setFromNode("Rolls_r_wrist_RotationInterpolator");
ROUTE2564->setToField("rotation");
ROUTE2564->setToNode("hanim_r_wrist");
Group2499->addChildren(*ROUTE2564);

CROUTE* ROUTE2565 = new CROUTE();
ROUTE2565->setFromField("value_changed");
ROUTE2565->setFromNode("Rolls_r_elbow_RotationInterpolator");
ROUTE2565->setToField("rotation");
ROUTE2565->setToNode("hanim_r_elbow");
Group2499->addChildren(*ROUTE2565);

CROUTE* ROUTE2566 = new CROUTE();
ROUTE2566->setFromField("value_changed");
ROUTE2566->setFromNode("Rolls_r_shoulder_RotationInterpolator");
ROUTE2566->setToField("rotation");
ROUTE2566->setToNode("hanim_r_shoulder");
Group2499->addChildren(*ROUTE2566);

CROUTE* ROUTE2567 = new CROUTE();
ROUTE2567->setFromField("value_changed");
ROUTE2567->setFromNode("Rolls_l_wrist_RotationInterpolator");
ROUTE2567->setToField("rotation");
ROUTE2567->setToNode("hanim_l_wrist");
Group2499->addChildren(*ROUTE2567);

CROUTE* ROUTE2568 = new CROUTE();
ROUTE2568->setFromField("value_changed");
ROUTE2568->setFromNode("Rolls_l_elbow_RotationInterpolator");
ROUTE2568->setToField("rotation");
ROUTE2568->setToNode("hanim_l_elbow");
Group2499->addChildren(*ROUTE2568);

CROUTE* ROUTE2569 = new CROUTE();
ROUTE2569->setFromField("value_changed");
ROUTE2569->setFromNode("Rolls_l_shoulder_RotationInterpolator");
ROUTE2569->setToField("rotation");
ROUTE2569->setToNode("hanim_l_shoulder");
Group2499->addChildren(*ROUTE2569);

CROUTE* ROUTE2570 = new CROUTE();
ROUTE2570->setFromField("value_changed");
ROUTE2570->setFromNode("Rolls_head_RotationInterpolator");
ROUTE2570->setToField("rotation");
ROUTE2570->setToNode("hanim_skullbase");
Group2499->addChildren(*ROUTE2570);

CROUTE* ROUTE2571 = new CROUTE();
ROUTE2571->setFromField("value_changed");
ROUTE2571->setFromNode("Rolls_neck_RotationInterpolator");
ROUTE2571->setToField("rotation");
ROUTE2571->setToNode("hanim_vc4");
Group2499->addChildren(*ROUTE2571);

CROUTE* ROUTE2572 = new CROUTE();
ROUTE2572->setFromField("value_changed");
ROUTE2572->setFromNode("Rolls_upper_body_RotationInterpolator");
ROUTE2572->setToField("rotation");
ROUTE2572->setToNode("hanim_vl1");
Group2499->addChildren(*ROUTE2572);

CROUTE* ROUTE2573 = new CROUTE();
ROUTE2573->setFromField("value_changed");
ROUTE2573->setFromNode("Rolls_whole_body_RotationInterpolator");
ROUTE2573->setToField("rotation");
ROUTE2573->setToNode("hanim_humanoid_root");
Group2499->addChildren(*ROUTE2573);

CROUTE* ROUTE2574 = new CROUTE();
ROUTE2574->setFromField("value_changed");
ROUTE2574->setFromNode("Rolls_whole_body_TranslationInterpolator");
ROUTE2574->setToField("translation");
ROUTE2574->setToNode("hanim_humanoid_root");
Group2499->addChildren(*ROUTE2574);

CROUTE* ROUTE2575 = new CROUTE();
ROUTE2575->setFromField("value_changed");
ROUTE2575->setFromNode("Roll_l_sternoclavicular_RollInterpolator");
ROUTE2575->setToField("rotation");
ROUTE2575->setToNode("hanim_l_sternoclavicular");
Group2499->addChildren(*ROUTE2575);

CROUTE* ROUTE2576 = new CROUTE();
ROUTE2576->setFromField("value_changed");
ROUTE2576->setFromNode("Roll_l_acromioclavicular_RollInterpolator");
ROUTE2576->setToField("rotation");
ROUTE2576->setToNode("hanim_l_acromioclavicular");
Group2499->addChildren(*ROUTE2576);

CROUTE* ROUTE2577 = new CROUTE();
ROUTE2577->setFromField("value_changed");
ROUTE2577->setFromNode("Roll_r_sternoclavicular_RollInterpolator");
ROUTE2577->setToField("rotation");
ROUTE2577->setToNode("hanim_r_sternoclavicular");
Group2499->addChildren(*ROUTE2577);

CROUTE* ROUTE2578 = new CROUTE();
ROUTE2578->setFromField("value_changed");
ROUTE2578->setFromNode("Roll_r_acromioclavicular_RollInterpolator");
ROUTE2578->setToField("rotation");
ROUTE2578->setToNode("hanim_r_acromioclavicular");
Group2499->addChildren(*ROUTE2578);

CROUTE* ROUTE2579 = new CROUTE();
ROUTE2579->setFromField("value_changed");
ROUTE2579->setFromNode("Roll_r_metatarsal_PitchInterpolator");
ROUTE2579->setToField("rotation");
ROUTE2579->setToNode("hanim_l_metatarsal");
Group2499->addChildren(*ROUTE2579);

CROUTE* ROUTE2580 = new CROUTE();
ROUTE2580->setFromField("value_changed");
ROUTE2580->setFromNode("Roll_r_metatarsal_PitchInterpolator");
ROUTE2580->setToField("rotation");
ROUTE2580->setToNode("hanim_r_metatarsal");
Group2499->addChildren(*ROUTE2580);

CROUTE* ROUTE2581 = new CROUTE();
ROUTE2581->setFromField("value_changed");
ROUTE2581->setFromNode("Roll_sacroiliac_YawInterpolator");
ROUTE2581->setToField("rotation");
ROUTE2581->setToNode("hanim_sacroiliac");
Group2499->addChildren(*ROUTE2581);

CROUTE* ROUTE2582 = new CROUTE();
ROUTE2582->setFromField("value_changed");
ROUTE2582->setFromNode("Roll_vl5_YawInterpolator");
ROUTE2582->setToField("rotation");
ROUTE2582->setToNode("hanim_vl5");
Group2499->addChildren(*ROUTE2582);

CROUTE* ROUTE2583 = new CROUTE();
ROUTE2583->setFromField("value_changed");
ROUTE2583->setFromNode("Roll_vc6_YawInterpolator");
ROUTE2583->setToField("rotation");
ROUTE2583->setToNode("hanim_vc6");
Group2499->addChildren(*ROUTE2583);

CROUTE* ROUTE2584 = new CROUTE();
ROUTE2584->setFromField("value_changed");
ROUTE2584->setFromNode("Roll_l_thumb1_PitchInterpolator");
ROUTE2584->setToField("rotation");
ROUTE2584->setToNode("hanim_l_thumb1");
Group2499->addChildren(*ROUTE2584);

CROUTE* ROUTE2585 = new CROUTE();
ROUTE2585->setFromField("value_changed");
ROUTE2585->setFromNode("Roll_r_thumb1_PitchInterpolator");
ROUTE2585->setToField("rotation");
ROUTE2585->setToNode("hanim_r_thumb1");
Group2499->addChildren(*ROUTE2585);

group->addChildren(*Group2499);

CGroup* Group2586 = (CGroup *)(m_pScene.createNode("Group"));
Group2586->setDEF("WalkAnimation");
CTimeSensor* TimeSensor2587 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor2587->setDEF("WalkTimer");
TimeSensor2587->setCycleInterval(1.73);
TimeSensor2587->setLoop(True);
Group2586->addChildren(*TimeSensor2587);

COrientationInterpolator* OrientationInterpolator2588 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2588->setDEF("Walk_r_metatarsal_PitchInterpolator");
OrientationInterpolator2588->setKey(new float[6]{0,0.2,0.4,0.6,0.7,1}, 6);
OrientationInterpolator2588->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2586->addChildren(*OrientationInterpolator2588);

COrientationInterpolator* OrientationInterpolator2589 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2589->setDEF("Walk_r_ankle_RotationInterpolator");
OrientationInterpolator2589->setKey(new float[11]{0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1}, 11);
OrientationInterpolator2589->setKeyValue(new float[44]{0,0,1,0,-1,0,0,0.3533,-1,0,0,0.1072,1,0,0,0.2612,1,0,0,0.1268,-1,0,0,0.01793,-1,0,0,0.05824,-1,0,0,0.2398,-1,0,0,0.35,-1,0,0,0.3322,0,0,1,0});
Group2586->addChildren(*OrientationInterpolator2589);

COrientationInterpolator* OrientationInterpolator2590 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2590->setDEF("Walk_r_knee_RotationInterpolator");
OrientationInterpolator2590->setKey(new float[10]{0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1}, 10);
OrientationInterpolator2590->setKeyValue(new float[40]{1,0,0,0.8573,1,0,0,0.8926,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.09354,1,0,0,0.08558,1,0,0,0.2475,1,0,0,0.8573});
Group2586->addChildren(*OrientationInterpolator2590);

COrientationInterpolator* OrientationInterpolator2591 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2591->setDEF("Walk_r_hip_RotationInterpolator");
OrientationInterpolator2591->setKey(new float[10]{0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1}, 10);
OrientationInterpolator2591->setKeyValue(new float[40]{-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9911,-0.03541,-0.1286,0.5419,-0.9131,-0.06243,-0.403,0.3361,-0.4306,-0.07962,-0.899,0.07038,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481});
Group2586->addChildren(*OrientationInterpolator2591);

COrientationInterpolator* OrientationInterpolator2592 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2592->setDEF("Walk_l_ankle_RotationInterpolator");
OrientationInterpolator2592->setKey(new float[7]{0,0.125,0.2083,0.375,0.6667,0.9167,1}, 7);
OrientationInterpolator2592->setKeyValue(new float[28]{-1,0,0,0.06714,-1,0,0,0.2152,-1,0,0,0.3184,-1,0,0,0.4717,-1,0,0,0.2912,1,0,0,0.1222,-1,0,0,0.06714});
Group2586->addChildren(*OrientationInterpolator2592);

COrientationInterpolator* OrientationInterpolator2593 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2593->setDEF("Walk_l_knee_RotationInterpolator");
OrientationInterpolator2593->setKey(new float[8]{0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1}, 8);
OrientationInterpolator2593->setKeyValue(new float[32]{1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226});
Group2586->addChildren(*OrientationInterpolator2593);

COrientationInterpolator* OrientationInterpolator2594 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2594->setDEF("Walk_l_hip_RotationInterpolator");
OrientationInterpolator2594->setKey(new float[8]{0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1}, 8);
OrientationInterpolator2594->setKeyValue(new float[32]{-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-0.7018,-0.03223,-0.7117,0.1289,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865});
Group2586->addChildren(*OrientationInterpolator2594);

COrientationInterpolator* OrientationInterpolator2595 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2595->setDEF("Walk_lower_body_RotationInterpolator");
OrientationInterpolator2595->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2595->setKeyValue(new float[12]{0,0,-1,0.1056,0,0,1,0.09018,0,0,-1,0.1056});
Group2586->addChildren(*OrientationInterpolator2595);

COrientationInterpolator* OrientationInterpolator2596 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2596->setDEF("Walk_r_wrist_RotationInterpolator");
OrientationInterpolator2596->setKey(new float[4]{0,0.375,0.9167,1}, 4);
OrientationInterpolator2596->setKeyValue(new float[16]{-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.02582,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346});
Group2586->addChildren(*OrientationInterpolator2596);

COrientationInterpolator* OrientationInterpolator2597 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2597->setDEF("Walk_r_elbow_RotationInterpolator");
OrientationInterpolator2597->setKey(new float[4]{0,0.375,0.9167,1}, 4);
OrientationInterpolator2597->setKeyValue(new float[16]{-1,0,0,0.411508,-1,0,0,0.0925011,-1,0,0,0.572568,-1,0,0,0.411508});
Group2586->addChildren(*OrientationInterpolator2597);

COrientationInterpolator* OrientationInterpolator2598 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2598->setDEF("Walk_r_shoulder_RotationInterpolator");
OrientationInterpolator2598->setKey(new float[4]{0,0.375,0.9167,1}, 4);
OrientationInterpolator2598->setKeyValue(new float[16]{-1,0,0,0.09346,1,0,0,0.3197,-1,0,0,0.1564,-1,0,0,0.09346});
Group2586->addChildren(*OrientationInterpolator2598);

COrientationInterpolator* OrientationInterpolator2599 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2599->setDEF("Walk_l_wrist_RotationInterpolator");
OrientationInterpolator2599->setKey(new float[4]{0,0.375,0.9167,1}, 4);
OrientationInterpolator2599->setKeyValue(new float[16]{0,-1,0,0.461076,-0.330195,-0.927451,0.175516,0.538852,0.0327774,-0.999314,-0.0172185,0.492033,0,-1,0,0.461076});
Group2586->addChildren(*OrientationInterpolator2599);

COrientationInterpolator* OrientationInterpolator2600 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2600->setDEF("Walk_l_elbow_RotationInterpolator");
OrientationInterpolator2600->setKey(new float[4]{0,0.375,0.9167,1}, 4);
OrientationInterpolator2600->setKeyValue(new float[16]{-1,0,0,0.0659878,-1,0,0,0.488383,-1,0,0,0.0177536,-1,0,0,0.0659878});
Group2586->addChildren(*OrientationInterpolator2600);

COrientationInterpolator* OrientationInterpolator2601 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2601->setDEF("Walk_l_shoulder_RotationInterpolator");
OrientationInterpolator2601->setKey(new float[4]{0,0.375,0.9167,1}, 4);
OrientationInterpolator2601->setKeyValue(new float[16]{1,0,0,0.1189,-1,0,0,0.1861,1,0,0,0.3357,1,0,0,0.1189});
Group2586->addChildren(*OrientationInterpolator2601);

COrientationInterpolator* OrientationInterpolator2602 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2602->setDEF("Walk_head_RotationInterpolator");
OrientationInterpolator2602->setKey(new float[10]{0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1}, 10);
OrientationInterpolator2602->setKeyValue(new float[40]{0,-1,0,0.08642,0,1,0,0.1825,0,1,0,0.1505,0,1,0,0.1053,0,1,0,0.04391,0,-1,0,0.03119,0,-1,0,0.07936,0,-1,0,0.1616,0,-1,0,0.155,0,-1,0,0.08642});
Group2586->addChildren(*OrientationInterpolator2602);

COrientationInterpolator* OrientationInterpolator2603 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2603->setDEF("Walk_neck_RotationInterpolator");
OrientationInterpolator2603->setKey(new float[2]{0,1}, 2);
OrientationInterpolator2603->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
Group2586->addChildren(*OrientationInterpolator2603);

COrientationInterpolator* OrientationInterpolator2604 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2604->setDEF("Walk_upper_body_RotationInterpolator");
OrientationInterpolator2604->setKey(new float[6]{0,0.2083,0.375,0.75,0.8333,1}, 6);
OrientationInterpolator2604->setKeyValue(new float[24]{0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826});
Group2586->addChildren(*OrientationInterpolator2604);

COrientationInterpolator* OrientationInterpolator2605 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2605->setDEF("Walk_whole_body_RotationInterpolator");
OrientationInterpolator2605->setKey(new float[2]{0,1}, 2);
OrientationInterpolator2605->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
Group2586->addChildren(*OrientationInterpolator2605);

CPositionInterpolator* PositionInterpolator2606 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator2606->setDEF("Walk_whole_body_TranslationInterpolator");
PositionInterpolator2606->setKey(new float[19]{0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1}, 19);
PositionInterpolator2606->setKeyValue(new float[57]{0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0});
Group2586->addChildren(*PositionInterpolator2606);

COrientationInterpolator* OrientationInterpolator2607 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2607->setDEF("Walk_l_sternoclavicular_RollInterpolator");
OrientationInterpolator2607->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2607->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2586->addChildren(*OrientationInterpolator2607);

COrientationInterpolator* OrientationInterpolator2608 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2608->setDEF("Walk_l_acromioclavicular_RollInterpolator");
OrientationInterpolator2608->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2608->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2586->addChildren(*OrientationInterpolator2608);

COrientationInterpolator* OrientationInterpolator2609 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2609->setDEF("Walk_r_sternoclavicular_RollInterpolator");
OrientationInterpolator2609->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2609->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2586->addChildren(*OrientationInterpolator2609);

COrientationInterpolator* OrientationInterpolator2610 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2610->setDEF("Walk_r_acromioclavicular_RollInterpolator");
OrientationInterpolator2610->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2610->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2586->addChildren(*OrientationInterpolator2610);

COrientationInterpolator* OrientationInterpolator2611 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2611->setDEF("Walk_sacroiliac_YawInterpolator");
OrientationInterpolator2611->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2611->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2586->addChildren(*OrientationInterpolator2611);

COrientationInterpolator* OrientationInterpolator2612 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2612->setDEF("Walk_vl5_YawInterpolator");
OrientationInterpolator2612->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator2612->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2586->addChildren(*OrientationInterpolator2612);

COrientationInterpolator* OrientationInterpolator2613 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2613->setDEF("Walk_vc6_YawInterpolator");
OrientationInterpolator2613->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator2613->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2586->addChildren(*OrientationInterpolator2613);

COrientationInterpolator* OrientationInterpolator2614 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2614->setDEF("Walk_l_thumb1_PitchInterpolator");
OrientationInterpolator2614->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2614->setKeyValue(new float[24]{1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0});
Group2586->addChildren(*OrientationInterpolator2614);

COrientationInterpolator* OrientationInterpolator2615 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2615->setDEF("Walk_r_thumb1_PitchInterpolator");
OrientationInterpolator2615->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2615->setKeyValue(new float[24]{1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0});
Group2586->addChildren(*OrientationInterpolator2615);

CROUTE* ROUTE2616 = new CROUTE();
ROUTE2616->setFromField("fraction_changed");
ROUTE2616->setFromNode("WalkTimer");
ROUTE2616->setToField("set_fraction");
ROUTE2616->setToNode("Walk_r_ankle_RotationInterpolator");
Group2586->addChildren(*ROUTE2616);

CROUTE* ROUTE2617 = new CROUTE();
ROUTE2617->setFromField("fraction_changed");
ROUTE2617->setFromNode("WalkTimer");
ROUTE2617->setToField("set_fraction");
ROUTE2617->setToNode("Walk_r_knee_RotationInterpolator");
Group2586->addChildren(*ROUTE2617);

CROUTE* ROUTE2618 = new CROUTE();
ROUTE2618->setFromField("fraction_changed");
ROUTE2618->setFromNode("WalkTimer");
ROUTE2618->setToField("set_fraction");
ROUTE2618->setToNode("Walk_r_hip_RotationInterpolator");
Group2586->addChildren(*ROUTE2618);

CROUTE* ROUTE2619 = new CROUTE();
ROUTE2619->setFromField("fraction_changed");
ROUTE2619->setFromNode("WalkTimer");
ROUTE2619->setToField("set_fraction");
ROUTE2619->setToNode("Walk_l_ankle_RotationInterpolator");
Group2586->addChildren(*ROUTE2619);

CROUTE* ROUTE2620 = new CROUTE();
ROUTE2620->setFromField("fraction_changed");
ROUTE2620->setFromNode("WalkTimer");
ROUTE2620->setToField("set_fraction");
ROUTE2620->setToNode("Walk_l_knee_RotationInterpolator");
Group2586->addChildren(*ROUTE2620);

CROUTE* ROUTE2621 = new CROUTE();
ROUTE2621->setFromField("fraction_changed");
ROUTE2621->setFromNode("WalkTimer");
ROUTE2621->setToField("set_fraction");
ROUTE2621->setToNode("Walk_l_hip_RotationInterpolator");
Group2586->addChildren(*ROUTE2621);

CROUTE* ROUTE2622 = new CROUTE();
ROUTE2622->setFromField("fraction_changed");
ROUTE2622->setFromNode("WalkTimer");
ROUTE2622->setToField("set_fraction");
ROUTE2622->setToNode("Walk_lower_body_RotationInterpolator");
Group2586->addChildren(*ROUTE2622);

CROUTE* ROUTE2623 = new CROUTE();
ROUTE2623->setFromField("fraction_changed");
ROUTE2623->setFromNode("WalkTimer");
ROUTE2623->setToField("set_fraction");
ROUTE2623->setToNode("Walk_r_wrist_RotationInterpolator");
Group2586->addChildren(*ROUTE2623);

CROUTE* ROUTE2624 = new CROUTE();
ROUTE2624->setFromField("fraction_changed");
ROUTE2624->setFromNode("WalkTimer");
ROUTE2624->setToField("set_fraction");
ROUTE2624->setToNode("Walk_r_elbow_RotationInterpolator");
Group2586->addChildren(*ROUTE2624);

CROUTE* ROUTE2625 = new CROUTE();
ROUTE2625->setFromField("fraction_changed");
ROUTE2625->setFromNode("WalkTimer");
ROUTE2625->setToField("set_fraction");
ROUTE2625->setToNode("Walk_r_shoulder_RotationInterpolator");
Group2586->addChildren(*ROUTE2625);

CROUTE* ROUTE2626 = new CROUTE();
ROUTE2626->setFromField("fraction_changed");
ROUTE2626->setFromNode("WalkTimer");
ROUTE2626->setToField("set_fraction");
ROUTE2626->setToNode("Walk_l_wrist_RotationInterpolator");
Group2586->addChildren(*ROUTE2626);

CROUTE* ROUTE2627 = new CROUTE();
ROUTE2627->setFromField("fraction_changed");
ROUTE2627->setFromNode("WalkTimer");
ROUTE2627->setToField("set_fraction");
ROUTE2627->setToNode("Walk_l_elbow_RotationInterpolator");
Group2586->addChildren(*ROUTE2627);

CROUTE* ROUTE2628 = new CROUTE();
ROUTE2628->setFromField("fraction_changed");
ROUTE2628->setFromNode("WalkTimer");
ROUTE2628->setToField("set_fraction");
ROUTE2628->setToNode("Walk_l_shoulder_RotationInterpolator");
Group2586->addChildren(*ROUTE2628);

CROUTE* ROUTE2629 = new CROUTE();
ROUTE2629->setFromField("fraction_changed");
ROUTE2629->setFromNode("WalkTimer");
ROUTE2629->setToField("set_fraction");
ROUTE2629->setToNode("Walk_head_RotationInterpolator");
Group2586->addChildren(*ROUTE2629);

CROUTE* ROUTE2630 = new CROUTE();
ROUTE2630->setFromField("fraction_changed");
ROUTE2630->setFromNode("WalkTimer");
ROUTE2630->setToField("set_fraction");
ROUTE2630->setToNode("Walk_neck_RotationInterpolator");
Group2586->addChildren(*ROUTE2630);

CROUTE* ROUTE2631 = new CROUTE();
ROUTE2631->setFromField("fraction_changed");
ROUTE2631->setFromNode("WalkTimer");
ROUTE2631->setToField("set_fraction");
ROUTE2631->setToNode("Walk_upper_body_RotationInterpolator");
Group2586->addChildren(*ROUTE2631);

CROUTE* ROUTE2632 = new CROUTE();
ROUTE2632->setFromField("fraction_changed");
ROUTE2632->setFromNode("WalkTimer");
ROUTE2632->setToField("set_fraction");
ROUTE2632->setToNode("Walk_whole_body_RotationInterpolator");
Group2586->addChildren(*ROUTE2632);

CROUTE* ROUTE2633 = new CROUTE();
ROUTE2633->setFromField("fraction_changed");
ROUTE2633->setFromNode("WalkTimer");
ROUTE2633->setToField("set_fraction");
ROUTE2633->setToNode("Walk_whole_body_TranslationInterpolator");
Group2586->addChildren(*ROUTE2633);

CROUTE* ROUTE2634 = new CROUTE();
ROUTE2634->setFromField("fraction_changed");
ROUTE2634->setFromNode("WalkTimer");
ROUTE2634->setToField("set_fraction");
ROUTE2634->setToNode("Walk_l_sternoclavicular_RollInterpolator");
Group2586->addChildren(*ROUTE2634);

CROUTE* ROUTE2635 = new CROUTE();
ROUTE2635->setFromField("fraction_changed");
ROUTE2635->setFromNode("WalkTimer");
ROUTE2635->setToField("set_fraction");
ROUTE2635->setToNode("Walk_l_acromioclavicular_RollInterpolator");
Group2586->addChildren(*ROUTE2635);

CROUTE* ROUTE2636 = new CROUTE();
ROUTE2636->setFromField("fraction_changed");
ROUTE2636->setFromNode("WalkTimer");
ROUTE2636->setToField("set_fraction");
ROUTE2636->setToNode("Walk_r_sternoclavicular_RollInterpolator");
Group2586->addChildren(*ROUTE2636);

CROUTE* ROUTE2637 = new CROUTE();
ROUTE2637->setFromField("fraction_changed");
ROUTE2637->setFromNode("WalkTimer");
ROUTE2637->setToField("set_fraction");
ROUTE2637->setToNode("Walk_r_acromioclavicular_RollInterpolator");
Group2586->addChildren(*ROUTE2637);

CROUTE* ROUTE2638 = new CROUTE();
ROUTE2638->setFromField("fraction_changed");
ROUTE2638->setFromNode("WalkTimer");
ROUTE2638->setToField("set_fraction");
ROUTE2638->setToNode("Walk_r_metatarsal_PitchInterpolator");
Group2586->addChildren(*ROUTE2638);

CROUTE* ROUTE2639 = new CROUTE();
ROUTE2639->setFromField("fraction_changed");
ROUTE2639->setFromNode("WalkTimer");
ROUTE2639->setToField("set_fraction");
ROUTE2639->setToNode("Walk_sacroiliac_YawInterpolator");
Group2586->addChildren(*ROUTE2639);

CROUTE* ROUTE2640 = new CROUTE();
ROUTE2640->setFromField("fraction_changed");
ROUTE2640->setFromNode("WalkTimer");
ROUTE2640->setToField("set_fraction");
ROUTE2640->setToNode("Walk_vl5_YawInterpolator");
Group2586->addChildren(*ROUTE2640);

CROUTE* ROUTE2641 = new CROUTE();
ROUTE2641->setFromField("fraction_changed");
ROUTE2641->setFromNode("WalkTimer");
ROUTE2641->setToField("set_fraction");
ROUTE2641->setToNode("Walk_vc6_YawInterpolator");
Group2586->addChildren(*ROUTE2641);

CROUTE* ROUTE2642 = new CROUTE();
ROUTE2642->setFromField("fraction_changed");
ROUTE2642->setFromNode("WalkTimer");
ROUTE2642->setToField("set_fraction");
ROUTE2642->setToNode("Walk_l_thumb1_PitchInterpolator");
Group2586->addChildren(*ROUTE2642);

CROUTE* ROUTE2643 = new CROUTE();
ROUTE2643->setFromField("fraction_changed");
ROUTE2643->setFromNode("WalkTimer");
ROUTE2643->setToField("set_fraction");
ROUTE2643->setToNode("Walk_r_thumb1_PitchInterpolator");
Group2586->addChildren(*ROUTE2643);

CROUTE* ROUTE2644 = new CROUTE();
ROUTE2644->setFromField("value_changed");
ROUTE2644->setFromNode("Walk_r_ankle_RotationInterpolator");
ROUTE2644->setToField("rotation");
ROUTE2644->setToNode("hanim_r_ankle");
Group2586->addChildren(*ROUTE2644);

CROUTE* ROUTE2645 = new CROUTE();
ROUTE2645->setFromField("value_changed");
ROUTE2645->setFromNode("Walk_r_knee_RotationInterpolator");
ROUTE2645->setToField("rotation");
ROUTE2645->setToNode("hanim_r_knee");
Group2586->addChildren(*ROUTE2645);

CROUTE* ROUTE2646 = new CROUTE();
ROUTE2646->setFromField("value_changed");
ROUTE2646->setFromNode("Walk_r_hip_RotationInterpolator");
ROUTE2646->setToField("rotation");
ROUTE2646->setToNode("hanim_r_hip");
Group2586->addChildren(*ROUTE2646);

CROUTE* ROUTE2647 = new CROUTE();
ROUTE2647->setFromField("value_changed");
ROUTE2647->setFromNode("Walk_l_ankle_RotationInterpolator");
ROUTE2647->setToField("rotation");
ROUTE2647->setToNode("hanim_l_ankle");
Group2586->addChildren(*ROUTE2647);

CROUTE* ROUTE2648 = new CROUTE();
ROUTE2648->setFromField("value_changed");
ROUTE2648->setFromNode("Walk_l_knee_RotationInterpolator");
ROUTE2648->setToField("rotation");
ROUTE2648->setToNode("hanim_l_knee");
Group2586->addChildren(*ROUTE2648);

CROUTE* ROUTE2649 = new CROUTE();
ROUTE2649->setFromField("value_changed");
ROUTE2649->setFromNode("Walk_l_hip_RotationInterpolator");
ROUTE2649->setToField("rotation");
ROUTE2649->setToNode("hanim_l_hip");
Group2586->addChildren(*ROUTE2649);

CROUTE* ROUTE2650 = new CROUTE();
ROUTE2650->setFromField("value_changed");
ROUTE2650->setFromNode("Walk_lower_body_RotationInterpolator");
ROUTE2650->setToField("rotation");
ROUTE2650->setToNode("hanim_sacroiliac");
Group2586->addChildren(*ROUTE2650);

CROUTE* ROUTE2651 = new CROUTE();
ROUTE2651->setFromField("value_changed");
ROUTE2651->setFromNode("Walk_r_wrist_RotationInterpolator");
ROUTE2651->setToField("rotation");
ROUTE2651->setToNode("hanim_r_wrist");
Group2586->addChildren(*ROUTE2651);

CROUTE* ROUTE2652 = new CROUTE();
ROUTE2652->setFromField("value_changed");
ROUTE2652->setFromNode("Walk_r_elbow_RotationInterpolator");
ROUTE2652->setToField("rotation");
ROUTE2652->setToNode("hanim_r_elbow");
Group2586->addChildren(*ROUTE2652);

CROUTE* ROUTE2653 = new CROUTE();
ROUTE2653->setFromField("value_changed");
ROUTE2653->setFromNode("Walk_r_shoulder_RotationInterpolator");
ROUTE2653->setToField("rotation");
ROUTE2653->setToNode("hanim_r_shoulder");
Group2586->addChildren(*ROUTE2653);

CROUTE* ROUTE2654 = new CROUTE();
ROUTE2654->setFromField("value_changed");
ROUTE2654->setFromNode("Walk_l_wrist_RotationInterpolator");
ROUTE2654->setToField("rotation");
ROUTE2654->setToNode("hanim_l_wrist");
Group2586->addChildren(*ROUTE2654);

CROUTE* ROUTE2655 = new CROUTE();
ROUTE2655->setFromField("value_changed");
ROUTE2655->setFromNode("Walk_l_elbow_RotationInterpolator");
ROUTE2655->setToField("rotation");
ROUTE2655->setToNode("hanim_l_elbow");
Group2586->addChildren(*ROUTE2655);

CROUTE* ROUTE2656 = new CROUTE();
ROUTE2656->setFromField("value_changed");
ROUTE2656->setFromNode("Walk_l_shoulder_RotationInterpolator");
ROUTE2656->setToField("rotation");
ROUTE2656->setToNode("hanim_l_shoulder");
Group2586->addChildren(*ROUTE2656);

CROUTE* ROUTE2657 = new CROUTE();
ROUTE2657->setFromField("value_changed");
ROUTE2657->setFromNode("Walk_head_RotationInterpolator");
ROUTE2657->setToField("rotation");
ROUTE2657->setToNode("hanim_skullbase");
Group2586->addChildren(*ROUTE2657);

CROUTE* ROUTE2658 = new CROUTE();
ROUTE2658->setFromField("value_changed");
ROUTE2658->setFromNode("Walk_neck_RotationInterpolator");
ROUTE2658->setToField("rotation");
ROUTE2658->setToNode("hanim_vc4");
Group2586->addChildren(*ROUTE2658);

CROUTE* ROUTE2659 = new CROUTE();
ROUTE2659->setFromField("value_changed");
ROUTE2659->setFromNode("Walk_upper_body_RotationInterpolator");
ROUTE2659->setToField("rotation");
ROUTE2659->setToNode("hanim_vl1");
Group2586->addChildren(*ROUTE2659);

CROUTE* ROUTE2660 = new CROUTE();
ROUTE2660->setFromField("value_changed");
ROUTE2660->setFromNode("Walk_whole_body_RotationInterpolator");
ROUTE2660->setToField("rotation");
ROUTE2660->setToNode("hanim_humanoid_root");
Group2586->addChildren(*ROUTE2660);

CROUTE* ROUTE2661 = new CROUTE();
ROUTE2661->setFromField("value_changed");
ROUTE2661->setFromNode("Walk_whole_body_TranslationInterpolator");
ROUTE2661->setToField("translation");
ROUTE2661->setToNode("hanim_humanoid_root");
Group2586->addChildren(*ROUTE2661);

CROUTE* ROUTE2662 = new CROUTE();
ROUTE2662->setFromField("value_changed");
ROUTE2662->setFromNode("Walk_l_sternoclavicular_RollInterpolator");
ROUTE2662->setToField("rotation");
ROUTE2662->setToNode("hanim_l_sternoclavicular");
Group2586->addChildren(*ROUTE2662);

CROUTE* ROUTE2663 = new CROUTE();
ROUTE2663->setFromField("value_changed");
ROUTE2663->setFromNode("Walk_l_acromioclavicular_RollInterpolator");
ROUTE2663->setToField("rotation");
ROUTE2663->setToNode("hanim_l_acromioclavicular");
Group2586->addChildren(*ROUTE2663);

CROUTE* ROUTE2664 = new CROUTE();
ROUTE2664->setFromField("value_changed");
ROUTE2664->setFromNode("Walk_r_sternoclavicular_RollInterpolator");
ROUTE2664->setToField("rotation");
ROUTE2664->setToNode("hanim_r_sternoclavicular");
Group2586->addChildren(*ROUTE2664);

CROUTE* ROUTE2665 = new CROUTE();
ROUTE2665->setFromField("value_changed");
ROUTE2665->setFromNode("Walk_r_acromioclavicular_RollInterpolator");
ROUTE2665->setToField("rotation");
ROUTE2665->setToNode("hanim_r_acromioclavicular");
Group2586->addChildren(*ROUTE2665);

CROUTE* ROUTE2666 = new CROUTE();
ROUTE2666->setFromField("value_changed");
ROUTE2666->setFromNode("Walk_r_metatarsal_PitchInterpolator");
ROUTE2666->setToField("rotation");
ROUTE2666->setToNode("hanim_l_metatarsal");
Group2586->addChildren(*ROUTE2666);

CROUTE* ROUTE2667 = new CROUTE();
ROUTE2667->setFromField("value_changed");
ROUTE2667->setFromNode("Walk_r_metatarsal_PitchInterpolator");
ROUTE2667->setToField("rotation");
ROUTE2667->setToNode("hanim_r_metatarsal");
Group2586->addChildren(*ROUTE2667);

CROUTE* ROUTE2668 = new CROUTE();
ROUTE2668->setFromField("value_changed");
ROUTE2668->setFromNode("Walk_sacroiliac_YawInterpolator");
ROUTE2668->setToField("rotation");
ROUTE2668->setToNode("hanim_sacroiliac");
Group2586->addChildren(*ROUTE2668);

CROUTE* ROUTE2669 = new CROUTE();
ROUTE2669->setFromField("value_changed");
ROUTE2669->setFromNode("Walk_vl5_YawInterpolator");
ROUTE2669->setToField("rotation");
ROUTE2669->setToNode("hanim_vl5");
Group2586->addChildren(*ROUTE2669);

CROUTE* ROUTE2670 = new CROUTE();
ROUTE2670->setFromField("value_changed");
ROUTE2670->setFromNode("Walk_vc6_YawInterpolator");
ROUTE2670->setToField("rotation");
ROUTE2670->setToNode("hanim_vc6");
Group2586->addChildren(*ROUTE2670);

CROUTE* ROUTE2671 = new CROUTE();
ROUTE2671->setFromField("value_changed");
ROUTE2671->setFromNode("Walk_l_thumb1_PitchInterpolator");
ROUTE2671->setToField("rotation");
ROUTE2671->setToNode("hanim_l_thumb1");
Group2586->addChildren(*ROUTE2671);

CROUTE* ROUTE2672 = new CROUTE();
ROUTE2672->setFromField("value_changed");
ROUTE2672->setFromNode("Walk_r_thumb1_PitchInterpolator");
ROUTE2672->setToField("rotation");
ROUTE2672->setToNode("hanim_r_thumb1");
Group2586->addChildren(*ROUTE2672);

group->addChildren(*Group2586);

CGroup* Group2673 = (CGroup *)(m_pScene.createNode("Group"));
Group2673->setDEF("RunAnimation");
CTimeSensor* TimeSensor2674 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor2674->setDEF("RunTimer");
TimeSensor2674->setCycleInterval(0.9);
TimeSensor2674->setLoop(True);
Group2673->addChildren(*TimeSensor2674);

COrientationInterpolator* OrientationInterpolator2675 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2675->setDEF("Run_r_metatarsal_PitchInterpolator");
OrientationInterpolator2675->setKey(new float[6]{0,0.2,0.4,0.6,0.7,1}, 6);
OrientationInterpolator2675->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2673->addChildren(*OrientationInterpolator2675);

COrientationInterpolator* OrientationInterpolator2676 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2676->setDEF("Run_l_hip_RotationInterpolator_Run");
OrientationInterpolator2676->setKey(new float[5]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator2676->setKeyValue(new float[20]{-0.99,0.033,0.04,1.42,-0.99,0.1328,0.067,0.42,0.99,0.014,0.009,0.9,-0.99,0.0703,0.05,0.7,-0.99,0.033,0.04,1.42});
Group2673->addChildren(*OrientationInterpolator2676);

COrientationInterpolator* OrientationInterpolator2677 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2677->setDEF("Run_l_knee_RotationInterpolator_Run");
OrientationInterpolator2677->setKey(new float[5]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator2677->setKeyValue(new float[20]{1,0,0,1.01,1,0,0,0.426,1,0,0,0.705,1,0,0,2.179,1,0,0,1.01});
Group2673->addChildren(*OrientationInterpolator2677);

COrientationInterpolator* OrientationInterpolator2678 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2678->setDEF("Run_l_ankle_RotationInterpolator_Run");
OrientationInterpolator2678->setKey(new float[5]{0,0.22,0.3,0.4,1}, 5);
OrientationInterpolator2678->setKeyValue(new float[20]{1,0,0,0.0374,-1,0,0,0.1037,-1,0,0,0.4328,1,0,0,0.1929,1,0,0,0.03574});
Group2673->addChildren(*OrientationInterpolator2678);

COrientationInterpolator* OrientationInterpolator2679 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2679->setDEF("Run_r_hip_RotationInterpolator_Run");
OrientationInterpolator2679->setKey(new float[5]{0,0.2545,0.4909,0.7091,1}, 5);
OrientationInterpolator2679->setKeyValue(new float[20]{0.99,-0.014,0.009,0.9,-0.99,-0.0703,-0.05,0.7,-0.99,-0.033,0.04,1.42,-0.99,-0.1328,-0.067,0.42,0.99,-0.014,0.009,0.9});
Group2673->addChildren(*OrientationInterpolator2679);

COrientationInterpolator* OrientationInterpolator2680 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2680->setDEF("Run_r_knee_RotationInterpolator_Run");
OrientationInterpolator2680->setKey(new float[5]{0,0.2545,0.4909,0.7091,1}, 5);
OrientationInterpolator2680->setKeyValue(new float[20]{1,0,0,0.705,1,0,0,2.179,1,0,0,1.01,1,0,0,0.426,1,0,0,0.705});
Group2673->addChildren(*OrientationInterpolator2680);

COrientationInterpolator* OrientationInterpolator2681 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2681->setDEF("Run_r_ankle_RotationInterpolator_Run");
OrientationInterpolator2681->setKey(new float[6]{0,0.4,0.71,0.8,0.82,1}, 6);
OrientationInterpolator2681->setKeyValue(new float[24]{1,0,0,0.2323,-1,0,0,0.07843,-1,0,0,0.32,-1,0,0,0.374,-1,0,0,0.3478,1,0,0,0.2323});
Group2673->addChildren(*OrientationInterpolator2681);

COrientationInterpolator* OrientationInterpolator2682 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2682->setDEF("Run_l_shoulder_RotationInterpolator_Run");
OrientationInterpolator2682->setKey(new float[5]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator2682->setKeyValue(new float[20]{0.99,-0.074,0.25,1.5,0.99,-0.092,0.44,0.3,-0.99,0.136,0.25,0.85,0.99,-0.081,0.38,0.4,0.99,-0.074,0.25,1.5});
Group2673->addChildren(*OrientationInterpolator2682);

COrientationInterpolator* OrientationInterpolator2683 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2683->setDEF("Run_l_elbow_RotationInterpolator_Run");
OrientationInterpolator2683->setKey(new float[5]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator2683->setKeyValue(new float[20]{-1,0,0,1.85,-0.99,-0.19,0.18,1.35,-1,0,0,0.975,-0.99,-0.09,-0.02,1.55,-1,0,0,1.85});
Group2673->addChildren(*OrientationInterpolator2683);

COrientationInterpolator* OrientationInterpolator2684 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2684->setDEF("Run_l_wrist_RotationInterpolator_Run");
OrientationInterpolator2684->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2684->setKeyValue(new float[20]{-0.25,-1,0.08,0.14,0.25,1,0.08,0.14,0,0,1,0,-0.25,1,0.08,-0.14,-0.25,1,0.08,0.14});
Group2673->addChildren(*OrientationInterpolator2684);

COrientationInterpolator* OrientationInterpolator2685 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2685->setDEF("Run_r_shoulder_RotationInterpolator_Run");
OrientationInterpolator2685->setKey(new float[5]{0,0.2545,0.4909,0.7091,1}, 5);
OrientationInterpolator2685->setKeyValue(new float[20]{-0.99,-0.136,-0.25,0.85,0.99,0.081,-0.38,0.4,0.99,0.074,-0.25,1.5,0.99,0.081,-0.38,0.4,-0.99,-0.136,-0.25,0.85});
Group2673->addChildren(*OrientationInterpolator2685);

COrientationInterpolator* OrientationInterpolator2686 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2686->setDEF("Run_r_elbow_RotationInterpolator_Run");
OrientationInterpolator2686->setKey(new float[5]{0,0.2545,0.4909,0.7091,1}, 5);
OrientationInterpolator2686->setKeyValue(new float[20]{-1,0,0,0.975,-0.99,0.09,0.02,1.55,-1,0,0,1.85,-0.99,0.19,-0.18,1.35,-1,0,0,0.975});
Group2673->addChildren(*OrientationInterpolator2686);

COrientationInterpolator* OrientationInterpolator2687 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2687->setDEF("Run_r_wrist_RotationInterpolator_Run");
OrientationInterpolator2687->setKey(new float[2]{0,1}, 2);
OrientationInterpolator2687->setKeyValue(new float[8]{-0.917742,-0.237244,-0.318536,0.214273,-0.917742,-0.237244,-0.318536,0.214273});
Group2673->addChildren(*OrientationInterpolator2687);

COrientationInterpolator* OrientationInterpolator2688 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2688->setDEF("Run_lower_body_RotationInterpolator_Run");
OrientationInterpolator2688->setKey(new float[5]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator2688->setKeyValue(new float[20]{0,-1,0,0.125,0,0,1,0,0,1,0,0.125,0,0,1,0,0,-1,0,0.125});
Group2673->addChildren(*OrientationInterpolator2688);

COrientationInterpolator* OrientationInterpolator2689 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2689->setDEF("Run_head_RotationInterpolator_Run");
OrientationInterpolator2689->setKey(new float[5]{0,0.2545,0.4909,0.7091,1}, 5);
OrientationInterpolator2689->setKeyValue(new float[20]{1,0,0,0.08,1,0,0,0.12,1,0,0,0.3,1,0,0,0.3,1,0,0,0.08});
Group2673->addChildren(*OrientationInterpolator2689);

COrientationInterpolator* OrientationInterpolator2690 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2690->setDEF("Run_neck_RotationInterpolator_Run");
OrientationInterpolator2690->setKey(new float[5]{0,0.2545,0.4909,0.7091,1}, 5);
OrientationInterpolator2690->setKeyValue(new float[20]{0.7,0,0,0.4,-0.7,-0.7,0,0.4,0,0,0,0.4,-0.7,0.7,0,0.4,0.7,0,0,0.4});
Group2673->addChildren(*OrientationInterpolator2690);

COrientationInterpolator* OrientationInterpolator2691 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2691->setDEF("Run_upper_body_RotationInterpolator_Run");
OrientationInterpolator2691->setKey(new float[5]{0,0.2545,0.4909,0.7636,1}, 5);
OrientationInterpolator2691->setKeyValue(new float[20]{0.97,0.65,0.086,0.5,0.9,0.003,-0.02,0.38,0.95,-0.68,-0.086,0.5,0.9,0.004,-0.025,0.4,0.97,0.65,0.086,0.5});
Group2673->addChildren(*OrientationInterpolator2691);

COrientationInterpolator* OrientationInterpolator2692 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2692->setDEF("Run_whole_body_RotationInterpolator_Run");
OrientationInterpolator2692->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator2692->setKeyValue(new float[20]{1,0,0,0.06,1,0,0,0.167,1,0,0,0.06,1,0,0,0.168,1,0,0,0.06});
Group2673->addChildren(*OrientationInterpolator2692);

CPositionInterpolator* PositionInterpolator2693 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator2693->setDEF("Run_whole_body_TranslationInterpolator_Run");
PositionInterpolator2693->setKey(new float[9]{0,0.22,0.3,0.31,0.5,0.69,0.7,0.78,1}, 9);
PositionInterpolator2693->setKeyValue(new float[27]{0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0});
Group2673->addChildren(*PositionInterpolator2693);

COrientationInterpolator* OrientationInterpolator2694 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2694->setDEF("Run_l_sternoclavicular_RollInterpolator");
OrientationInterpolator2694->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2694->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2673->addChildren(*OrientationInterpolator2694);

COrientationInterpolator* OrientationInterpolator2695 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2695->setDEF("Run_l_acromioclavicular_RollInterpolator");
OrientationInterpolator2695->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2695->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2673->addChildren(*OrientationInterpolator2695);

COrientationInterpolator* OrientationInterpolator2696 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2696->setDEF("Run_r_sternoclavicular_RollInterpolator");
OrientationInterpolator2696->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2696->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2673->addChildren(*OrientationInterpolator2696);

COrientationInterpolator* OrientationInterpolator2697 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2697->setDEF("Run_r_acromioclavicular_RollInterpolator");
OrientationInterpolator2697->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2697->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2673->addChildren(*OrientationInterpolator2697);

COrientationInterpolator* OrientationInterpolator2698 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2698->setDEF("Run_sacroiliac_YawInterpolator");
OrientationInterpolator2698->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2698->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2673->addChildren(*OrientationInterpolator2698);

COrientationInterpolator* OrientationInterpolator2699 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2699->setDEF("Run_vl5_YawInterpolator");
OrientationInterpolator2699->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator2699->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2673->addChildren(*OrientationInterpolator2699);

COrientationInterpolator* OrientationInterpolator2700 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2700->setDEF("Run_vc6_YawInterpolator");
OrientationInterpolator2700->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator2700->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2673->addChildren(*OrientationInterpolator2700);

COrientationInterpolator* OrientationInterpolator2701 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2701->setDEF("Run_l_thumb1_PitchInterpolator");
OrientationInterpolator2701->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2701->setKeyValue(new float[24]{1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0});
Group2673->addChildren(*OrientationInterpolator2701);

COrientationInterpolator* OrientationInterpolator2702 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2702->setDEF("Run_r_thumb1_PitchInterpolator");
OrientationInterpolator2702->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2702->setKeyValue(new float[24]{1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0});
Group2673->addChildren(*OrientationInterpolator2702);

CROUTE* ROUTE2703 = new CROUTE();
ROUTE2703->setFromField("fraction_changed");
ROUTE2703->setFromNode("RunTimer");
ROUTE2703->setToField("set_fraction");
ROUTE2703->setToNode("Run_r_ankle_RotationInterpolator_Run");
Group2673->addChildren(*ROUTE2703);

CROUTE* ROUTE2704 = new CROUTE();
ROUTE2704->setFromField("fraction_changed");
ROUTE2704->setFromNode("RunTimer");
ROUTE2704->setToField("set_fraction");
ROUTE2704->setToNode("Run_r_knee_RotationInterpolator_Run");
Group2673->addChildren(*ROUTE2704);

CROUTE* ROUTE2705 = new CROUTE();
ROUTE2705->setFromField("fraction_changed");
ROUTE2705->setFromNode("RunTimer");
ROUTE2705->setToField("set_fraction");
ROUTE2705->setToNode("Run_r_hip_RotationInterpolator_Run");
Group2673->addChildren(*ROUTE2705);

CROUTE* ROUTE2706 = new CROUTE();
ROUTE2706->setFromField("fraction_changed");
ROUTE2706->setFromNode("RunTimer");
ROUTE2706->setToField("set_fraction");
ROUTE2706->setToNode("Run_l_ankle_RotationInterpolator_Run");
Group2673->addChildren(*ROUTE2706);

CROUTE* ROUTE2707 = new CROUTE();
ROUTE2707->setFromField("fraction_changed");
ROUTE2707->setFromNode("RunTimer");
ROUTE2707->setToField("set_fraction");
ROUTE2707->setToNode("Run_l_knee_RotationInterpolator_Run");
Group2673->addChildren(*ROUTE2707);

CROUTE* ROUTE2708 = new CROUTE();
ROUTE2708->setFromField("fraction_changed");
ROUTE2708->setFromNode("RunTimer");
ROUTE2708->setToField("set_fraction");
ROUTE2708->setToNode("Run_l_hip_RotationInterpolator_Run");
Group2673->addChildren(*ROUTE2708);

CROUTE* ROUTE2709 = new CROUTE();
ROUTE2709->setFromField("fraction_changed");
ROUTE2709->setFromNode("RunTimer");
ROUTE2709->setToField("set_fraction");
ROUTE2709->setToNode("Run_lower_body_RotationInterpolator_Run");
Group2673->addChildren(*ROUTE2709);

CROUTE* ROUTE2710 = new CROUTE();
ROUTE2710->setFromField("fraction_changed");
ROUTE2710->setFromNode("RunTimer");
ROUTE2710->setToField("set_fraction");
ROUTE2710->setToNode("Run_r_wrist_RotationInterpolator_Run");
Group2673->addChildren(*ROUTE2710);

CROUTE* ROUTE2711 = new CROUTE();
ROUTE2711->setFromField("fraction_changed");
ROUTE2711->setFromNode("RunTimer");
ROUTE2711->setToField("set_fraction");
ROUTE2711->setToNode("Run_r_elbow_RotationInterpolator_Run");
Group2673->addChildren(*ROUTE2711);

CROUTE* ROUTE2712 = new CROUTE();
ROUTE2712->setFromField("fraction_changed");
ROUTE2712->setFromNode("RunTimer");
ROUTE2712->setToField("set_fraction");
ROUTE2712->setToNode("Run_r_shoulder_RotationInterpolator_Run");
Group2673->addChildren(*ROUTE2712);

CROUTE* ROUTE2713 = new CROUTE();
ROUTE2713->setFromField("fraction_changed");
ROUTE2713->setFromNode("RunTimer");
ROUTE2713->setToField("set_fraction");
ROUTE2713->setToNode("Run_l_wrist_RotationInterpolator_Run");
Group2673->addChildren(*ROUTE2713);

CROUTE* ROUTE2714 = new CROUTE();
ROUTE2714->setFromField("fraction_changed");
ROUTE2714->setFromNode("RunTimer");
ROUTE2714->setToField("set_fraction");
ROUTE2714->setToNode("Run_l_elbow_RotationInterpolator_Run");
Group2673->addChildren(*ROUTE2714);

CROUTE* ROUTE2715 = new CROUTE();
ROUTE2715->setFromField("fraction_changed");
ROUTE2715->setFromNode("RunTimer");
ROUTE2715->setToField("set_fraction");
ROUTE2715->setToNode("Run_l_shoulder_RotationInterpolator_Run");
Group2673->addChildren(*ROUTE2715);

CROUTE* ROUTE2716 = new CROUTE();
ROUTE2716->setFromField("fraction_changed");
ROUTE2716->setFromNode("RunTimer");
ROUTE2716->setToField("set_fraction");
ROUTE2716->setToNode("Run_head_RotationInterpolator_Run");
Group2673->addChildren(*ROUTE2716);

CROUTE* ROUTE2717 = new CROUTE();
ROUTE2717->setFromField("fraction_changed");
ROUTE2717->setFromNode("RunTimer");
ROUTE2717->setToField("set_fraction");
ROUTE2717->setToNode("Run_neck_RotationInterpolator_Run");
Group2673->addChildren(*ROUTE2717);

CROUTE* ROUTE2718 = new CROUTE();
ROUTE2718->setFromField("fraction_changed");
ROUTE2718->setFromNode("RunTimer");
ROUTE2718->setToField("set_fraction");
ROUTE2718->setToNode("Run_upper_body_RotationInterpolator_Run");
Group2673->addChildren(*ROUTE2718);

CROUTE* ROUTE2719 = new CROUTE();
ROUTE2719->setFromField("fraction_changed");
ROUTE2719->setFromNode("RunTimer");
ROUTE2719->setToField("set_fraction");
ROUTE2719->setToNode("Run_whole_body_RotationInterpolator_Run");
Group2673->addChildren(*ROUTE2719);

CROUTE* ROUTE2720 = new CROUTE();
ROUTE2720->setFromField("fraction_changed");
ROUTE2720->setFromNode("RunTimer");
ROUTE2720->setToField("set_fraction");
ROUTE2720->setToNode("Run_whole_body_TranslationInterpolator_Run");
Group2673->addChildren(*ROUTE2720);

CROUTE* ROUTE2721 = new CROUTE();
ROUTE2721->setFromField("fraction_changed");
ROUTE2721->setFromNode("RunTimer");
ROUTE2721->setToField("set_fraction");
ROUTE2721->setToNode("Run_l_sternoclavicular_RollInterpolator");
Group2673->addChildren(*ROUTE2721);

CROUTE* ROUTE2722 = new CROUTE();
ROUTE2722->setFromField("fraction_changed");
ROUTE2722->setFromNode("RunTimer");
ROUTE2722->setToField("set_fraction");
ROUTE2722->setToNode("Run_l_acromioclavicular_RollInterpolator");
Group2673->addChildren(*ROUTE2722);

CROUTE* ROUTE2723 = new CROUTE();
ROUTE2723->setFromField("fraction_changed");
ROUTE2723->setFromNode("RunTimer");
ROUTE2723->setToField("set_fraction");
ROUTE2723->setToNode("Run_r_sternoclavicular_RollInterpolator");
Group2673->addChildren(*ROUTE2723);

CROUTE* ROUTE2724 = new CROUTE();
ROUTE2724->setFromField("fraction_changed");
ROUTE2724->setFromNode("RunTimer");
ROUTE2724->setToField("set_fraction");
ROUTE2724->setToNode("Run_r_acromioclavicular_RollInterpolator");
Group2673->addChildren(*ROUTE2724);

CROUTE* ROUTE2725 = new CROUTE();
ROUTE2725->setFromField("fraction_changed");
ROUTE2725->setFromNode("RunTimer");
ROUTE2725->setToField("set_fraction");
ROUTE2725->setToNode("Run_r_metatarsal_PitchInterpolator");
Group2673->addChildren(*ROUTE2725);

CROUTE* ROUTE2726 = new CROUTE();
ROUTE2726->setFromField("fraction_changed");
ROUTE2726->setFromNode("RunTimer");
ROUTE2726->setToField("set_fraction");
ROUTE2726->setToNode("Run_sacroiliac_YawInterpolator");
Group2673->addChildren(*ROUTE2726);

CROUTE* ROUTE2727 = new CROUTE();
ROUTE2727->setFromField("fraction_changed");
ROUTE2727->setFromNode("RunTimer");
ROUTE2727->setToField("set_fraction");
ROUTE2727->setToNode("Run_vl5_YawInterpolator");
Group2673->addChildren(*ROUTE2727);

CROUTE* ROUTE2728 = new CROUTE();
ROUTE2728->setFromField("fraction_changed");
ROUTE2728->setFromNode("RunTimer");
ROUTE2728->setToField("set_fraction");
ROUTE2728->setToNode("Run_vc6_YawInterpolator");
Group2673->addChildren(*ROUTE2728);

CROUTE* ROUTE2729 = new CROUTE();
ROUTE2729->setFromField("fraction_changed");
ROUTE2729->setFromNode("RunTimer");
ROUTE2729->setToField("set_fraction");
ROUTE2729->setToNode("Run_l_thumb1_PitchInterpolator");
Group2673->addChildren(*ROUTE2729);

CROUTE* ROUTE2730 = new CROUTE();
ROUTE2730->setFromField("fraction_changed");
ROUTE2730->setFromNode("RunTimer");
ROUTE2730->setToField("set_fraction");
ROUTE2730->setToNode("Run_r_thumb1_PitchInterpolator");
Group2673->addChildren(*ROUTE2730);

CROUTE* ROUTE2731 = new CROUTE();
ROUTE2731->setFromField("value_changed");
ROUTE2731->setFromNode("Run_r_ankle_RotationInterpolator_Run");
ROUTE2731->setToField("rotation");
ROUTE2731->setToNode("hanim_r_ankle");
Group2673->addChildren(*ROUTE2731);

CROUTE* ROUTE2732 = new CROUTE();
ROUTE2732->setFromField("value_changed");
ROUTE2732->setFromNode("Run_r_knee_RotationInterpolator_Run");
ROUTE2732->setToField("rotation");
ROUTE2732->setToNode("hanim_r_knee");
Group2673->addChildren(*ROUTE2732);

CROUTE* ROUTE2733 = new CROUTE();
ROUTE2733->setFromField("value_changed");
ROUTE2733->setFromNode("Run_r_hip_RotationInterpolator_Run");
ROUTE2733->setToField("rotation");
ROUTE2733->setToNode("hanim_r_hip");
Group2673->addChildren(*ROUTE2733);

CROUTE* ROUTE2734 = new CROUTE();
ROUTE2734->setFromField("value_changed");
ROUTE2734->setFromNode("Run_l_ankle_RotationInterpolator_Run");
ROUTE2734->setToField("rotation");
ROUTE2734->setToNode("hanim_l_ankle");
Group2673->addChildren(*ROUTE2734);

CROUTE* ROUTE2735 = new CROUTE();
ROUTE2735->setFromField("value_changed");
ROUTE2735->setFromNode("Run_l_knee_RotationInterpolator_Run");
ROUTE2735->setToField("rotation");
ROUTE2735->setToNode("hanim_l_knee");
Group2673->addChildren(*ROUTE2735);

CROUTE* ROUTE2736 = new CROUTE();
ROUTE2736->setFromField("value_changed");
ROUTE2736->setFromNode("Run_l_hip_RotationInterpolator_Run");
ROUTE2736->setToField("rotation");
ROUTE2736->setToNode("hanim_l_hip");
Group2673->addChildren(*ROUTE2736);

CROUTE* ROUTE2737 = new CROUTE();
ROUTE2737->setFromField("value_changed");
ROUTE2737->setFromNode("Run_r_wrist_RotationInterpolator_Run");
ROUTE2737->setToField("rotation");
ROUTE2737->setToNode("hanim_r_wrist");
Group2673->addChildren(*ROUTE2737);

CROUTE* ROUTE2738 = new CROUTE();
ROUTE2738->setFromField("value_changed");
ROUTE2738->setFromNode("Run_r_elbow_RotationInterpolator_Run");
ROUTE2738->setToField("rotation");
ROUTE2738->setToNode("hanim_r_elbow");
Group2673->addChildren(*ROUTE2738);

CROUTE* ROUTE2739 = new CROUTE();
ROUTE2739->setFromField("value_changed");
ROUTE2739->setFromNode("Run_r_shoulder_RotationInterpolator_Run");
ROUTE2739->setToField("rotation");
ROUTE2739->setToNode("hanim_r_shoulder");
Group2673->addChildren(*ROUTE2739);

CROUTE* ROUTE2740 = new CROUTE();
ROUTE2740->setFromField("value_changed");
ROUTE2740->setFromNode("Run_l_wrist_RotationInterpolator_Run");
ROUTE2740->setToField("rotation");
ROUTE2740->setToNode("hanim_l_wrist");
Group2673->addChildren(*ROUTE2740);

CROUTE* ROUTE2741 = new CROUTE();
ROUTE2741->setFromField("value_changed");
ROUTE2741->setFromNode("Run_l_elbow_RotationInterpolator_Run");
ROUTE2741->setToField("rotation");
ROUTE2741->setToNode("hanim_l_elbow");
Group2673->addChildren(*ROUTE2741);

CROUTE* ROUTE2742 = new CROUTE();
ROUTE2742->setFromField("value_changed");
ROUTE2742->setFromNode("Run_l_shoulder_RotationInterpolator_Run");
ROUTE2742->setToField("rotation");
ROUTE2742->setToNode("hanim_l_shoulder");
Group2673->addChildren(*ROUTE2742);

CROUTE* ROUTE2743 = new CROUTE();
ROUTE2743->setFromField("value_changed");
ROUTE2743->setFromNode("Run_lower_body_RotationInterpolator_Run");
ROUTE2743->setToField("rotation");
ROUTE2743->setToNode("hanim_sacroiliac");
Group2673->addChildren(*ROUTE2743);

CROUTE* ROUTE2744 = new CROUTE();
ROUTE2744->setFromField("value_changed");
ROUTE2744->setFromNode("Run_head_RotationInterpolator_Run");
ROUTE2744->setToField("rotation");
ROUTE2744->setToNode("hanim_skullbase");
Group2673->addChildren(*ROUTE2744);

CROUTE* ROUTE2745 = new CROUTE();
ROUTE2745->setFromField("value_changed");
ROUTE2745->setFromNode("Run_neck_RotationInterpolator_Run");
ROUTE2745->setToField("rotation");
ROUTE2745->setToNode("hanim_vc4");
Group2673->addChildren(*ROUTE2745);

CROUTE* ROUTE2746 = new CROUTE();
ROUTE2746->setFromField("value_changed");
ROUTE2746->setFromNode("Run_upper_body_RotationInterpolator_Run");
ROUTE2746->setToField("rotation");
ROUTE2746->setToNode("hanim_vl1");
Group2673->addChildren(*ROUTE2746);

CROUTE* ROUTE2747 = new CROUTE();
ROUTE2747->setFromField("value_changed");
ROUTE2747->setFromNode("Run_whole_body_RotationInterpolator_Run");
ROUTE2747->setToField("rotation");
ROUTE2747->setToNode("hanim_humanoid_root");
Group2673->addChildren(*ROUTE2747);

CROUTE* ROUTE2748 = new CROUTE();
ROUTE2748->setFromField("value_changed");
ROUTE2748->setFromNode("Run_whole_body_TranslationInterpolator_Run");
ROUTE2748->setToField("translation");
ROUTE2748->setToNode("hanim_humanoid_root");
Group2673->addChildren(*ROUTE2748);

CROUTE* ROUTE2749 = new CROUTE();
ROUTE2749->setFromField("value_changed");
ROUTE2749->setFromNode("Run_l_sternoclavicular_RollInterpolator");
ROUTE2749->setToField("rotation");
ROUTE2749->setToNode("hanim_l_sternoclavicular");
Group2673->addChildren(*ROUTE2749);

CROUTE* ROUTE2750 = new CROUTE();
ROUTE2750->setFromField("value_changed");
ROUTE2750->setFromNode("Run_l_acromioclavicular_RollInterpolator");
ROUTE2750->setToField("rotation");
ROUTE2750->setToNode("hanim_l_acromioclavicular");
Group2673->addChildren(*ROUTE2750);

CROUTE* ROUTE2751 = new CROUTE();
ROUTE2751->setFromField("value_changed");
ROUTE2751->setFromNode("Run_r_sternoclavicular_RollInterpolator");
ROUTE2751->setToField("rotation");
ROUTE2751->setToNode("hanim_r_sternoclavicular");
Group2673->addChildren(*ROUTE2751);

CROUTE* ROUTE2752 = new CROUTE();
ROUTE2752->setFromField("value_changed");
ROUTE2752->setFromNode("Run_r_acromioclavicular_RollInterpolator");
ROUTE2752->setToField("rotation");
ROUTE2752->setToNode("hanim_r_acromioclavicular");
Group2673->addChildren(*ROUTE2752);

CROUTE* ROUTE2753 = new CROUTE();
ROUTE2753->setFromField("value_changed");
ROUTE2753->setFromNode("Run_r_metatarsal_PitchInterpolator");
ROUTE2753->setToField("rotation");
ROUTE2753->setToNode("hanim_l_metatarsal");
Group2673->addChildren(*ROUTE2753);

CROUTE* ROUTE2754 = new CROUTE();
ROUTE2754->setFromField("value_changed");
ROUTE2754->setFromNode("Run_r_metatarsal_PitchInterpolator");
ROUTE2754->setToField("rotation");
ROUTE2754->setToNode("hanim_r_metatarsal");
Group2673->addChildren(*ROUTE2754);

CROUTE* ROUTE2755 = new CROUTE();
ROUTE2755->setFromField("value_changed");
ROUTE2755->setFromNode("Run_sacroiliac_YawInterpolator");
ROUTE2755->setToField("rotation");
ROUTE2755->setToNode("hanim_sacroiliac");
Group2673->addChildren(*ROUTE2755);

CROUTE* ROUTE2756 = new CROUTE();
ROUTE2756->setFromField("value_changed");
ROUTE2756->setFromNode("Run_vl5_YawInterpolator");
ROUTE2756->setToField("rotation");
ROUTE2756->setToNode("hanim_vl5");
Group2673->addChildren(*ROUTE2756);

CROUTE* ROUTE2757 = new CROUTE();
ROUTE2757->setFromField("value_changed");
ROUTE2757->setFromNode("Run_vc6_YawInterpolator");
ROUTE2757->setToField("rotation");
ROUTE2757->setToNode("hanim_vc6");
Group2673->addChildren(*ROUTE2757);

CROUTE* ROUTE2758 = new CROUTE();
ROUTE2758->setFromField("value_changed");
ROUTE2758->setFromNode("Run_l_thumb1_PitchInterpolator");
ROUTE2758->setToField("rotation");
ROUTE2758->setToNode("hanim_l_thumb1");
Group2673->addChildren(*ROUTE2758);

CROUTE* ROUTE2759 = new CROUTE();
ROUTE2759->setFromField("value_changed");
ROUTE2759->setFromNode("Run_r_thumb1_PitchInterpolator");
ROUTE2759->setToField("rotation");
ROUTE2759->setToNode("hanim_r_thumb1");
Group2673->addChildren(*ROUTE2759);

group->addChildren(*Group2673);

CGroup* Group2760 = (CGroup *)(m_pScene.createNode("Group"));
Group2760->setDEF("JumpAnimation");
CTimeSensor* TimeSensor2761 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor2761->setDEF("JumpTimer");
TimeSensor2761->setCycleInterval(3.73);
TimeSensor2761->setLoop(True);
Group2760->addChildren(*TimeSensor2761);

COrientationInterpolator* OrientationInterpolator2762 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2762->setDEF("Jump_r_metatarsal_PitchInterpolator");
OrientationInterpolator2762->setKey(new float[6]{0,0.2,0.4,0.6,0.7,1}, 6);
OrientationInterpolator2762->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2760->addChildren(*OrientationInterpolator2762);

COrientationInterpolator* OrientationInterpolator2763 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2763->setDEF("Jump_r_ankle_RotationInterpolator");
OrientationInterpolator2763->setKey(new float[14]{0,0.1,0.15,0.25,0.28,0.32,0.35,0.64,0.76,0.84,0.88,0.92,0.96,1}, 14);
OrientationInterpolator2763->setKeyValue(new float[56]{0,0,1,0,-1,0,0,0.6735,-1,0,0,0.6735,-1,0,0,0.3527,-1,0,0,0.3038,-1,0,0,0.07964,1,0,0,1.3,1,0,0,0.6509,1,0,0,0.3001,-1,0,0,0.2087,-1,0,0,0.3756,-1,0,0,0.3279,-1,0,0,0.1193,0,0,1,0});
Group2760->addChildren(*OrientationInterpolator2763);

COrientationInterpolator* OrientationInterpolator2764 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2764->setDEF("Jump_r_knee_RotationInterpolator");
OrientationInterpolator2764->setKey(new float[8]{0,0.2,0.25,0.3,0.64,0.76,0.88,1}, 8);
OrientationInterpolator2764->setKeyValue(new float[32]{0,0,1,0,1,0,0,2.5,1,0,0,1.7,0,0,1,0,1,0,0,0.9507,1,0,0,0.5845,1,0,0,0.9054,0,0,1,0});
Group2760->addChildren(*OrientationInterpolator2764);

COrientationInterpolator* OrientationInterpolator2765 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2765->setDEF("Jump_r_hip_RotationInterpolator");
OrientationInterpolator2765->setKey(new float[11]{0,0.18,0.24,0.26,0.28,0.32,0.48,0.64,0.76,0.88,1}, 11);
OrientationInterpolator2765->setKeyValue(new float[44]{0,0,1,0,-1,0,0,1.63,-1,0,0,1.7,-1,0,0,1.55,-1,0,0,0.8943,-1,0,0,0.3698,0,0,1,0,-1,0,0,0.4963,-1,0,0,0.3829,-1,0,0,0.5169,0,0,1,0});
Group2760->addChildren(*OrientationInterpolator2765);

COrientationInterpolator* OrientationInterpolator2766 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2766->setDEF("Jump_l_ankle_RotationInterpolator");
OrientationInterpolator2766->setKey(new float[14]{0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1}, 14);
OrientationInterpolator2766->setKeyValue(new float[56]{0,0,1,0,-1,0,0,0.625,-1,0,0,0.625,-1,0,0,0.3364,-1,0,0,0.2742,-1,0,0,0.05078,1,0,0,0.2833,1,0,0,0.6667,1,0,0,0.2833,-1,0,0,0.2108,-1,0,0,0.375,-1,0,0,0.3146,-1,0,0,0.1174,0,0,1,0});
Group2760->addChildren(*OrientationInterpolator2766);

COrientationInterpolator* OrientationInterpolator2767 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2767->setDEF("Jump_l_knee_RotationInterpolator");
OrientationInterpolator2767->setKey(new float[8]{0,0.28,0.32,0.48,0.64,0.76,0.88,1}, 8);
OrientationInterpolator2767->setKeyValue(new float[32]{0,0,1,0,1,0,0,2.047,1,0,0,2.047,0,0,1,0,1,0,0,1.566,1,0,0,0.5913,1,0,0,0.9235,0,0,1,0});
Group2760->addChildren(*OrientationInterpolator2767);

COrientationInterpolator* OrientationInterpolator2768 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2768->setDEF("Jump_l_hip_RotationInterpolator");
OrientationInterpolator2768->setKey(new float[11]{0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1}, 11);
OrientationInterpolator2768->setKeyValue(new float[44]{0,0,1,0,1,0,0,4.349,1,0,0,4.349,1,0,0,4.615,-1,0,0,0.9136,-1,0,0,0.3614,0,0,1,0,-1,0,0,0.7869,-1,0,0,0.3918,-1,0,0,0.5433,0,0,1,0});
Group2760->addChildren(*OrientationInterpolator2768);

COrientationInterpolator* OrientationInterpolator2769 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2769->setDEF("Jump_lower_body_RotationInterpolator");
OrientationInterpolator2769->setKey(new float[6]{0,0.28,0.32,0.48,0.76,1}, 6);
OrientationInterpolator2769->setKeyValue(new float[24]{0,0,1,0,1,0,0,0.1892,1,0,0,0.1892,0,0,1,0,0,0,1,0,0,0,1,0});
Group2760->addChildren(*OrientationInterpolator2769);

COrientationInterpolator* OrientationInterpolator2770 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2770->setDEF("Jump_r_wrist_RotationInterpolator");
OrientationInterpolator2770->setKey(new float[6]{0,0.28,0.32,0.64,0.76,1}, 6);
OrientationInterpolator2770->setKeyValue(new float[24]{0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0});
Group2760->addChildren(*OrientationInterpolator2770);

COrientationInterpolator* OrientationInterpolator2771 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2771->setDEF("Jump_r_elbow_RotationInterpolator");
OrientationInterpolator2771->setKey(new float[6]{0,0.28,0.32,0.64,0.76,1}, 6);
OrientationInterpolator2771->setKeyValue(new float[24]{0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0});
Group2760->addChildren(*OrientationInterpolator2771);

COrientationInterpolator* OrientationInterpolator2772 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2772->setDEF("Jump_r_shoulder_RotationInterpolator");
OrientationInterpolator2772->setKey(new float[7]{0,0.28,0.32,0.64,0.76,0.88,1}, 7);
OrientationInterpolator2772->setKeyValue(new float[28]{0,0,1,0,0.9992,0.02042,0.03558,4.688,0.9992,0.02042,0.03558,4.688,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0});
Group2760->addChildren(*OrientationInterpolator2772);

COrientationInterpolator* OrientationInterpolator2773 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2773->setDEF("Jump_l_wrist_RotationInterpolator");
OrientationInterpolator2773->setKey(new float[7]{0,0.48,0.52,0.64,0.76,0.88,1}, 7);
OrientationInterpolator2773->setKeyValue(new float[28]{0,0,1,0,0.0672928,0.989475,-0.128107,4.15574,0.0672928,0.989475,-0.128107,4.15574,0.00364942,0.999901,0.0135896,4.5822,0,-1,0,0.655922,-0.00050618,-0.999999,0.0012782,1.28397,0,0,1,0});
Group2760->addChildren(*OrientationInterpolator2773);

COrientationInterpolator* OrientationInterpolator2774 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2774->setDEF("Jump_l_elbow_RotationInterpolator");
OrientationInterpolator2774->setKey(new float[6]{0,0.28,0.32,0.58,0.72,1}, 6);
OrientationInterpolator2774->setKeyValue(new float[24]{0,0,1,0,-1,0,0,1.13,-1,0,0,1.7,-1,0,0,1.7,-1,0,0,0.4,0,0,1,0});
Group2760->addChildren(*OrientationInterpolator2774);

COrientationInterpolator* OrientationInterpolator2775 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2775->setDEF("Jump_l_shoulder_RotationInterpolator");
OrientationInterpolator2775->setKey(new float[7]{0,0.28,0.32,0.64,0.76,0.88,1}, 7);
OrientationInterpolator2775->setKeyValue(new float[28]{0,0,1,0,-0.9987,0.02554,0.04498,1.57,-0.9987,0.02554,0.04498,1.57,1,0.0004113,0.003055,4.114,-0.8413,0.3238,0.4329,1.453,-0.877,0.4198,0.2337,0.6009,0,0,1,0});
Group2760->addChildren(*OrientationInterpolator2775);

COrientationInterpolator* OrientationInterpolator2776 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2776->setDEF("Jump_head_RotationInterpolator");
OrientationInterpolator2776->setKey(new float[6]{0,0.28,0.32,0.48,0.76,1}, 6);
OrientationInterpolator2776->setKeyValue(new float[24]{0,0,1,0,-1,0,0,0.5989,-1,0,0,0.5989,-1,0,0,0.3216,1,0,0,0.06503,0,0,1,0});
Group2760->addChildren(*OrientationInterpolator2776);

COrientationInterpolator* OrientationInterpolator2777 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2777->setDEF("Jump_neck_RotationInterpolator");
OrientationInterpolator2777->setKey(new float[6]{0,0.28,0.32,0.48,0.76,1}, 6);
OrientationInterpolator2777->setKeyValue(new float[24]{0,0,1,0,-1,0,0,0.1942,-1,0,0,0.1942,0,0,1,0,1,0,0,0.2284,0,0,1,0});
Group2760->addChildren(*OrientationInterpolator2777);

COrientationInterpolator* OrientationInterpolator2778 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2778->setDEF("Jump_upper_body_RotationInterpolator");
OrientationInterpolator2778->setKey(new float[7]{0,0.22,0.28,0.34,0.71,0.88,1}, 7);
OrientationInterpolator2778->setKeyValue(new float[28]{0,0,1,0,1,0,0,1.05,1,0,0,1.051,-1,0,0,0.257,1,0,0,0.2171,1,0,0,0.3465,0,0,1,0});
Group2760->addChildren(*OrientationInterpolator2778);

COrientationInterpolator* OrientationInterpolator2779 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2779->setDEF("Jump_whole_body_RotationInterpolator");
OrientationInterpolator2779->setKey(new float[7]{0,0.28,0.32,0.48,0.64,0.76,1}, 7);
OrientationInterpolator2779->setKeyValue(new float[28]{0,0,1,0,1,0,0,0.3273,1,0,0,0.3273,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2760->addChildren(*OrientationInterpolator2779);

CPositionInterpolator* PositionInterpolator2780 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator2780->setDEF("Jump_whole_body_TranslationInterpolator");
PositionInterpolator2780->setKey(new float[22]{0,0.04,0.07,0.11,0.15,0.19,0.22,0.25,0.27,0.31,0.33,0.35,0.38,0.53,0.544,0.76,0.8,0.84,0.88,0.92,0.96,1}, 22);
PositionInterpolator2780->setKeyValue(new float[66]{0,0,0,0,-0.01264,-0.01289,0,-0.04712,-0.03738,-0.0003345,-0.1049,-0.05353,-0.0005712,-0.1892,-0.06561,-0.0008233,-0.286,-0.06276,-0.0009591,-0.3795,-0.05148,-0.00106,-0.4484,-0.03656,-0.00106,-0.4484,-0.03656,-0.001122,-0.25,-0.1499,-0.0008616,-0.05,-0.06358,-0.0005128,0.15,-0.05488,0.0004779,0.55,0.02732,0.0001728,1.385,0.006873,0.00017,1.395,0.0069,0,0.35,0.02148,0,-0.01299,-0.01057,0,-0.06932,-0.01064,0.0001365,-0.1037,-0.005059,0.0001279,-0.07198,-0.007596,0.000141,-0.01626,-0.004935,0,0,0});
Group2760->addChildren(*PositionInterpolator2780);

COrientationInterpolator* OrientationInterpolator2781 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2781->setDEF("Jump_l_sternoclavicular_RollInterpolator");
OrientationInterpolator2781->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2781->setKeyValue(new float[24]{0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0});
Group2760->addChildren(*OrientationInterpolator2781);

COrientationInterpolator* OrientationInterpolator2782 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2782->setDEF("Jump_l_acromioclavicular_RollInterpolator");
OrientationInterpolator2782->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2782->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0});
Group2760->addChildren(*OrientationInterpolator2782);

COrientationInterpolator* OrientationInterpolator2783 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2783->setDEF("Jump_r_sternoclavicular_RollInterpolator");
OrientationInterpolator2783->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2783->setKeyValue(new float[24]{0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0});
Group2760->addChildren(*OrientationInterpolator2783);

COrientationInterpolator* OrientationInterpolator2784 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2784->setDEF("Jump_r_acromioclavicular_RollInterpolator");
OrientationInterpolator2784->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2784->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0});
Group2760->addChildren(*OrientationInterpolator2784);

COrientationInterpolator* OrientationInterpolator2785 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2785->setDEF("Jump_sacroiliac_YawInterpolator");
OrientationInterpolator2785->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2785->setKeyValue(new float[24]{0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0});
Group2760->addChildren(*OrientationInterpolator2785);

COrientationInterpolator* OrientationInterpolator2786 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2786->setDEF("Jump_vl5_YawInterpolator");
OrientationInterpolator2786->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator2786->setKeyValue(new float[28]{0,1,0,0,0,1,0,-0.1,0,1,0,0,0,1,0,0,1,0,0,0.6,0,1,0,0.1,0,1,0,0});
Group2760->addChildren(*OrientationInterpolator2786);

COrientationInterpolator* OrientationInterpolator2787 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2787->setDEF("Jump_vc6_YawInterpolator");
OrientationInterpolator2787->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator2787->setKeyValue(new float[28]{0,1,0,0,0,1,0,0.8,0,1,0,0,0,1,0,0,-1,0,0,0.6,0,-1,0,0.8,0,1,0,0});
Group2760->addChildren(*OrientationInterpolator2787);

COrientationInterpolator* OrientationInterpolator2788 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2788->setDEF("Jump_l_thumb1_PitchInterpolator");
OrientationInterpolator2788->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2788->setKeyValue(new float[24]{1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0});
Group2760->addChildren(*OrientationInterpolator2788);

COrientationInterpolator* OrientationInterpolator2789 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2789->setDEF("Jump_r_thumb1_PitchInterpolator");
OrientationInterpolator2789->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2789->setKeyValue(new float[24]{1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0});
Group2760->addChildren(*OrientationInterpolator2789);

CROUTE* ROUTE2790 = new CROUTE();
ROUTE2790->setFromField("fraction_changed");
ROUTE2790->setFromNode("JumpTimer");
ROUTE2790->setToField("set_fraction");
ROUTE2790->setToNode("Jump_r_ankle_RotationInterpolator");
Group2760->addChildren(*ROUTE2790);

CROUTE* ROUTE2791 = new CROUTE();
ROUTE2791->setFromField("fraction_changed");
ROUTE2791->setFromNode("JumpTimer");
ROUTE2791->setToField("set_fraction");
ROUTE2791->setToNode("Jump_r_knee_RotationInterpolator");
Group2760->addChildren(*ROUTE2791);

CROUTE* ROUTE2792 = new CROUTE();
ROUTE2792->setFromField("fraction_changed");
ROUTE2792->setFromNode("JumpTimer");
ROUTE2792->setToField("set_fraction");
ROUTE2792->setToNode("Jump_r_hip_RotationInterpolator");
Group2760->addChildren(*ROUTE2792);

CROUTE* ROUTE2793 = new CROUTE();
ROUTE2793->setFromField("fraction_changed");
ROUTE2793->setFromNode("JumpTimer");
ROUTE2793->setToField("set_fraction");
ROUTE2793->setToNode("Jump_l_ankle_RotationInterpolator");
Group2760->addChildren(*ROUTE2793);

CROUTE* ROUTE2794 = new CROUTE();
ROUTE2794->setFromField("fraction_changed");
ROUTE2794->setFromNode("JumpTimer");
ROUTE2794->setToField("set_fraction");
ROUTE2794->setToNode("Jump_l_knee_RotationInterpolator");
Group2760->addChildren(*ROUTE2794);

CROUTE* ROUTE2795 = new CROUTE();
ROUTE2795->setFromField("fraction_changed");
ROUTE2795->setFromNode("JumpTimer");
ROUTE2795->setToField("set_fraction");
ROUTE2795->setToNode("Jump_l_hip_RotationInterpolator");
Group2760->addChildren(*ROUTE2795);

CROUTE* ROUTE2796 = new CROUTE();
ROUTE2796->setFromField("fraction_changed");
ROUTE2796->setFromNode("JumpTimer");
ROUTE2796->setToField("set_fraction");
ROUTE2796->setToNode("Jump_lower_body_RotationInterpolator");
Group2760->addChildren(*ROUTE2796);

CROUTE* ROUTE2797 = new CROUTE();
ROUTE2797->setFromField("fraction_changed");
ROUTE2797->setFromNode("JumpTimer");
ROUTE2797->setToField("set_fraction");
ROUTE2797->setToNode("Jump_r_wrist_RotationInterpolator");
Group2760->addChildren(*ROUTE2797);

CROUTE* ROUTE2798 = new CROUTE();
ROUTE2798->setFromField("fraction_changed");
ROUTE2798->setFromNode("JumpTimer");
ROUTE2798->setToField("set_fraction");
ROUTE2798->setToNode("Jump_r_elbow_RotationInterpolator");
Group2760->addChildren(*ROUTE2798);

CROUTE* ROUTE2799 = new CROUTE();
ROUTE2799->setFromField("fraction_changed");
ROUTE2799->setFromNode("JumpTimer");
ROUTE2799->setToField("set_fraction");
ROUTE2799->setToNode("Jump_r_shoulder_RotationInterpolator");
Group2760->addChildren(*ROUTE2799);

CROUTE* ROUTE2800 = new CROUTE();
ROUTE2800->setFromField("fraction_changed");
ROUTE2800->setFromNode("JumpTimer");
ROUTE2800->setToField("set_fraction");
ROUTE2800->setToNode("Jump_l_wrist_RotationInterpolator");
Group2760->addChildren(*ROUTE2800);

CROUTE* ROUTE2801 = new CROUTE();
ROUTE2801->setFromField("fraction_changed");
ROUTE2801->setFromNode("JumpTimer");
ROUTE2801->setToField("set_fraction");
ROUTE2801->setToNode("Jump_l_elbow_RotationInterpolator");
Group2760->addChildren(*ROUTE2801);

CROUTE* ROUTE2802 = new CROUTE();
ROUTE2802->setFromField("fraction_changed");
ROUTE2802->setFromNode("JumpTimer");
ROUTE2802->setToField("set_fraction");
ROUTE2802->setToNode("Jump_l_shoulder_RotationInterpolator");
Group2760->addChildren(*ROUTE2802);

CROUTE* ROUTE2803 = new CROUTE();
ROUTE2803->setFromField("fraction_changed");
ROUTE2803->setFromNode("JumpTimer");
ROUTE2803->setToField("set_fraction");
ROUTE2803->setToNode("Jump_head_RotationInterpolator");
Group2760->addChildren(*ROUTE2803);

CROUTE* ROUTE2804 = new CROUTE();
ROUTE2804->setFromField("fraction_changed");
ROUTE2804->setFromNode("JumpTimer");
ROUTE2804->setToField("set_fraction");
ROUTE2804->setToNode("Jump_neck_RotationInterpolator");
Group2760->addChildren(*ROUTE2804);

CROUTE* ROUTE2805 = new CROUTE();
ROUTE2805->setFromField("fraction_changed");
ROUTE2805->setFromNode("JumpTimer");
ROUTE2805->setToField("set_fraction");
ROUTE2805->setToNode("Jump_upper_body_RotationInterpolator");
Group2760->addChildren(*ROUTE2805);

CROUTE* ROUTE2806 = new CROUTE();
ROUTE2806->setFromField("fraction_changed");
ROUTE2806->setFromNode("JumpTimer");
ROUTE2806->setToField("set_fraction");
ROUTE2806->setToNode("Jump_whole_body_RotationInterpolator");
Group2760->addChildren(*ROUTE2806);

CROUTE* ROUTE2807 = new CROUTE();
ROUTE2807->setFromField("fraction_changed");
ROUTE2807->setFromNode("JumpTimer");
ROUTE2807->setToField("set_fraction");
ROUTE2807->setToNode("Jump_whole_body_TranslationInterpolator");
Group2760->addChildren(*ROUTE2807);

CROUTE* ROUTE2808 = new CROUTE();
ROUTE2808->setFromField("fraction_changed");
ROUTE2808->setFromNode("JumpTimer");
ROUTE2808->setToField("set_fraction");
ROUTE2808->setToNode("Jump_l_sternoclavicular_RollInterpolator");
Group2760->addChildren(*ROUTE2808);

CROUTE* ROUTE2809 = new CROUTE();
ROUTE2809->setFromField("fraction_changed");
ROUTE2809->setFromNode("JumpTimer");
ROUTE2809->setToField("set_fraction");
ROUTE2809->setToNode("Jump_l_acromioclavicular_RollInterpolator");
Group2760->addChildren(*ROUTE2809);

CROUTE* ROUTE2810 = new CROUTE();
ROUTE2810->setFromField("fraction_changed");
ROUTE2810->setFromNode("JumpTimer");
ROUTE2810->setToField("set_fraction");
ROUTE2810->setToNode("Jump_r_sternoclavicular_RollInterpolator");
Group2760->addChildren(*ROUTE2810);

CROUTE* ROUTE2811 = new CROUTE();
ROUTE2811->setFromField("fraction_changed");
ROUTE2811->setFromNode("JumpTimer");
ROUTE2811->setToField("set_fraction");
ROUTE2811->setToNode("Jump_r_acromioclavicular_RollInterpolator");
Group2760->addChildren(*ROUTE2811);

CROUTE* ROUTE2812 = new CROUTE();
ROUTE2812->setFromField("fraction_changed");
ROUTE2812->setFromNode("JumpTimer");
ROUTE2812->setToField("set_fraction");
ROUTE2812->setToNode("Jump_r_metatarsal_PitchInterpolator");
Group2760->addChildren(*ROUTE2812);

CROUTE* ROUTE2813 = new CROUTE();
ROUTE2813->setFromField("fraction_changed");
ROUTE2813->setFromNode("JumpTimer");
ROUTE2813->setToField("set_fraction");
ROUTE2813->setToNode("Jump_sacroiliac_YawInterpolator");
Group2760->addChildren(*ROUTE2813);

CROUTE* ROUTE2814 = new CROUTE();
ROUTE2814->setFromField("fraction_changed");
ROUTE2814->setFromNode("JumpTimer");
ROUTE2814->setToField("set_fraction");
ROUTE2814->setToNode("Jump_vl5_YawInterpolator");
Group2760->addChildren(*ROUTE2814);

CROUTE* ROUTE2815 = new CROUTE();
ROUTE2815->setFromField("fraction_changed");
ROUTE2815->setFromNode("JumpTimer");
ROUTE2815->setToField("set_fraction");
ROUTE2815->setToNode("Jump_vc6_YawInterpolator");
Group2760->addChildren(*ROUTE2815);

CROUTE* ROUTE2816 = new CROUTE();
ROUTE2816->setFromField("fraction_changed");
ROUTE2816->setFromNode("JumpTimer");
ROUTE2816->setToField("set_fraction");
ROUTE2816->setToNode("Jump_l_thumb1_PitchInterpolator");
Group2760->addChildren(*ROUTE2816);

CROUTE* ROUTE2817 = new CROUTE();
ROUTE2817->setFromField("fraction_changed");
ROUTE2817->setFromNode("JumpTimer");
ROUTE2817->setToField("set_fraction");
ROUTE2817->setToNode("Jump_r_thumb1_PitchInterpolator");
Group2760->addChildren(*ROUTE2817);

CROUTE* ROUTE2818 = new CROUTE();
ROUTE2818->setFromField("value_changed");
ROUTE2818->setFromNode("Jump_r_ankle_RotationInterpolator");
ROUTE2818->setToField("rotation");
ROUTE2818->setToNode("hanim_r_ankle");
Group2760->addChildren(*ROUTE2818);

CROUTE* ROUTE2819 = new CROUTE();
ROUTE2819->setFromField("value_changed");
ROUTE2819->setFromNode("Jump_r_knee_RotationInterpolator");
ROUTE2819->setToField("rotation");
ROUTE2819->setToNode("hanim_r_knee");
Group2760->addChildren(*ROUTE2819);

CROUTE* ROUTE2820 = new CROUTE();
ROUTE2820->setFromField("value_changed");
ROUTE2820->setFromNode("Jump_r_hip_RotationInterpolator");
ROUTE2820->setToField("rotation");
ROUTE2820->setToNode("hanim_r_hip");
Group2760->addChildren(*ROUTE2820);

CROUTE* ROUTE2821 = new CROUTE();
ROUTE2821->setFromField("value_changed");
ROUTE2821->setFromNode("Jump_l_ankle_RotationInterpolator");
ROUTE2821->setToField("rotation");
ROUTE2821->setToNode("hanim_l_ankle");
Group2760->addChildren(*ROUTE2821);

CROUTE* ROUTE2822 = new CROUTE();
ROUTE2822->setFromField("value_changed");
ROUTE2822->setFromNode("Jump_l_knee_RotationInterpolator");
ROUTE2822->setToField("rotation");
ROUTE2822->setToNode("hanim_l_knee");
Group2760->addChildren(*ROUTE2822);

CROUTE* ROUTE2823 = new CROUTE();
ROUTE2823->setFromField("value_changed");
ROUTE2823->setFromNode("Jump_l_hip_RotationInterpolator");
ROUTE2823->setToField("rotation");
ROUTE2823->setToNode("hanim_l_hip");
Group2760->addChildren(*ROUTE2823);

CROUTE* ROUTE2824 = new CROUTE();
ROUTE2824->setFromField("value_changed");
ROUTE2824->setFromNode("Jump_lower_body_RotationInterpolator");
ROUTE2824->setToField("rotation");
ROUTE2824->setToNode("hanim_sacroiliac");
Group2760->addChildren(*ROUTE2824);

CROUTE* ROUTE2825 = new CROUTE();
ROUTE2825->setFromField("value_changed");
ROUTE2825->setFromNode("Jump_r_wrist_RotationInterpolator");
ROUTE2825->setToField("rotation");
ROUTE2825->setToNode("hanim_r_wrist");
Group2760->addChildren(*ROUTE2825);

CROUTE* ROUTE2826 = new CROUTE();
ROUTE2826->setFromField("value_changed");
ROUTE2826->setFromNode("Jump_r_elbow_RotationInterpolator");
ROUTE2826->setToField("rotation");
ROUTE2826->setToNode("hanim_r_elbow");
Group2760->addChildren(*ROUTE2826);

CROUTE* ROUTE2827 = new CROUTE();
ROUTE2827->setFromField("value_changed");
ROUTE2827->setFromNode("Jump_r_shoulder_RotationInterpolator");
ROUTE2827->setToField("rotation");
ROUTE2827->setToNode("hanim_r_shoulder");
Group2760->addChildren(*ROUTE2827);

CROUTE* ROUTE2828 = new CROUTE();
ROUTE2828->setFromField("value_changed");
ROUTE2828->setFromNode("Jump_l_wrist_RotationInterpolator");
ROUTE2828->setToField("rotation");
ROUTE2828->setToNode("hanim_l_wrist");
Group2760->addChildren(*ROUTE2828);

CROUTE* ROUTE2829 = new CROUTE();
ROUTE2829->setFromField("value_changed");
ROUTE2829->setFromNode("Jump_l_elbow_RotationInterpolator");
ROUTE2829->setToField("rotation");
ROUTE2829->setToNode("hanim_l_elbow");
Group2760->addChildren(*ROUTE2829);

CROUTE* ROUTE2830 = new CROUTE();
ROUTE2830->setFromField("value_changed");
ROUTE2830->setFromNode("Jump_l_shoulder_RotationInterpolator");
ROUTE2830->setToField("rotation");
ROUTE2830->setToNode("hanim_l_shoulder");
Group2760->addChildren(*ROUTE2830);

CROUTE* ROUTE2831 = new CROUTE();
ROUTE2831->setFromField("value_changed");
ROUTE2831->setFromNode("Jump_head_RotationInterpolator");
ROUTE2831->setToField("rotation");
ROUTE2831->setToNode("hanim_skullbase");
Group2760->addChildren(*ROUTE2831);

CROUTE* ROUTE2832 = new CROUTE();
ROUTE2832->setFromField("value_changed");
ROUTE2832->setFromNode("Jump_neck_RotationInterpolator");
ROUTE2832->setToField("rotation");
ROUTE2832->setToNode("hanim_vc4");
Group2760->addChildren(*ROUTE2832);

CROUTE* ROUTE2833 = new CROUTE();
ROUTE2833->setFromField("value_changed");
ROUTE2833->setFromNode("Jump_upper_body_RotationInterpolator");
ROUTE2833->setToField("rotation");
ROUTE2833->setToNode("hanim_vl1");
Group2760->addChildren(*ROUTE2833);

CROUTE* ROUTE2834 = new CROUTE();
ROUTE2834->setFromField("value_changed");
ROUTE2834->setFromNode("Jump_whole_body_RotationInterpolator");
ROUTE2834->setToField("rotation");
ROUTE2834->setToNode("hanim_humanoid_root");
Group2760->addChildren(*ROUTE2834);

CROUTE* ROUTE2835 = new CROUTE();
ROUTE2835->setFromField("value_changed");
ROUTE2835->setFromNode("Jump_whole_body_TranslationInterpolator");
ROUTE2835->setToField("translation");
ROUTE2835->setToNode("hanim_humanoid_root");
Group2760->addChildren(*ROUTE2835);

CROUTE* ROUTE2836 = new CROUTE();
ROUTE2836->setFromField("value_changed");
ROUTE2836->setFromNode("Jump_l_sternoclavicular_RollInterpolator");
ROUTE2836->setToField("rotation");
ROUTE2836->setToNode("hanim_l_sternoclavicular");
Group2760->addChildren(*ROUTE2836);

CROUTE* ROUTE2837 = new CROUTE();
ROUTE2837->setFromField("value_changed");
ROUTE2837->setFromNode("Jump_l_acromioclavicular_RollInterpolator");
ROUTE2837->setToField("rotation");
ROUTE2837->setToNode("hanim_l_acromioclavicular");
Group2760->addChildren(*ROUTE2837);

CROUTE* ROUTE2838 = new CROUTE();
ROUTE2838->setFromField("value_changed");
ROUTE2838->setFromNode("Jump_r_sternoclavicular_RollInterpolator");
ROUTE2838->setToField("rotation");
ROUTE2838->setToNode("hanim_r_sternoclavicular");
Group2760->addChildren(*ROUTE2838);

CROUTE* ROUTE2839 = new CROUTE();
ROUTE2839->setFromField("value_changed");
ROUTE2839->setFromNode("Jump_r_acromioclavicular_RollInterpolator");
ROUTE2839->setToField("rotation");
ROUTE2839->setToNode("hanim_r_acromioclavicular");
Group2760->addChildren(*ROUTE2839);

CROUTE* ROUTE2840 = new CROUTE();
ROUTE2840->setFromField("value_changed");
ROUTE2840->setFromNode("Jump_r_metatarsal_PitchInterpolator");
ROUTE2840->setToField("rotation");
ROUTE2840->setToNode("hanim_l_metatarsal");
Group2760->addChildren(*ROUTE2840);

CROUTE* ROUTE2841 = new CROUTE();
ROUTE2841->setFromField("value_changed");
ROUTE2841->setFromNode("Jump_r_metatarsal_PitchInterpolator");
ROUTE2841->setToField("rotation");
ROUTE2841->setToNode("hanim_r_metatarsal");
Group2760->addChildren(*ROUTE2841);

CROUTE* ROUTE2842 = new CROUTE();
ROUTE2842->setFromField("value_changed");
ROUTE2842->setFromNode("Jump_sacroiliac_YawInterpolator");
ROUTE2842->setToField("rotation");
ROUTE2842->setToNode("hanim_sacroiliac");
Group2760->addChildren(*ROUTE2842);

CROUTE* ROUTE2843 = new CROUTE();
ROUTE2843->setFromField("value_changed");
ROUTE2843->setFromNode("Jump_vl5_YawInterpolator");
ROUTE2843->setToField("rotation");
ROUTE2843->setToNode("hanim_vl5");
Group2760->addChildren(*ROUTE2843);

CROUTE* ROUTE2844 = new CROUTE();
ROUTE2844->setFromField("value_changed");
ROUTE2844->setFromNode("Jump_vc6_YawInterpolator");
ROUTE2844->setToField("rotation");
ROUTE2844->setToNode("hanim_vc6");
Group2760->addChildren(*ROUTE2844);

CROUTE* ROUTE2845 = new CROUTE();
ROUTE2845->setFromField("value_changed");
ROUTE2845->setFromNode("Jump_l_thumb1_PitchInterpolator");
ROUTE2845->setToField("rotation");
ROUTE2845->setToNode("hanim_l_thumb1");
Group2760->addChildren(*ROUTE2845);

CROUTE* ROUTE2846 = new CROUTE();
ROUTE2846->setFromField("value_changed");
ROUTE2846->setFromNode("Jump_r_thumb1_PitchInterpolator");
ROUTE2846->setToField("rotation");
ROUTE2846->setToNode("hanim_r_thumb1");
Group2760->addChildren(*ROUTE2846);

group->addChildren(*Group2760);

CGroup* Group2847 = (CGroup *)(m_pScene.createNode("Group"));
Group2847->setDEF("KickAnimation");
CTimeSensor* TimeSensor2848 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor2848->setDEF("KickTimer");
TimeSensor2848->setCycleInterval(3.73);
TimeSensor2848->setLoop(True);
Group2847->addChildren(*TimeSensor2848);

COrientationInterpolator* OrientationInterpolator2849 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2849->setDEF("Kick_l_sternoclavicular_RollInterpolator");
OrientationInterpolator2849->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2849->setKeyValue(new float[24]{0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0});
Group2847->addChildren(*OrientationInterpolator2849);

COrientationInterpolator* OrientationInterpolator2850 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2850->setDEF("Kick_l_acromioclavicular_RollInterpolator");
OrientationInterpolator2850->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2850->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0});
Group2847->addChildren(*OrientationInterpolator2850);

COrientationInterpolator* OrientationInterpolator2851 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2851->setDEF("Kick_l_shoulder_RollInterpolator");
OrientationInterpolator2851->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2851->setKeyValue(new float[24]{0,0,1,0,0,0,1,1.76,-0.25,0,1,1.76,0,0,1,1.256,0,0,1,0.05,0,0,1,0});
Group2847->addChildren(*OrientationInterpolator2851);

COrientationInterpolator* OrientationInterpolator2852 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2852->setDEF("Kick_l_ForeArm_PitchInterpolator");
OrientationInterpolator2852->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2852->setKeyValue(new float[24]{1,0,0,0,1,0,0,-0.55,-1,0.25,0,2.55,1,0,0,0,1,0,0,0,1,0,0,0});
Group2847->addChildren(*OrientationInterpolator2852);

COrientationInterpolator* OrientationInterpolator2853 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2853->setDEF("Kick_l_wrist_RollInterpolator");
OrientationInterpolator2853->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2853->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,1,0,0.55,0,0,1,0,0,0,1,0,0,0,1,0});
Group2847->addChildren(*OrientationInterpolator2853);

COrientationInterpolator* OrientationInterpolator2854 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2854->setDEF("Kick_l_thumb1_PitchInterpolator");
OrientationInterpolator2854->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2854->setKeyValue(new float[24]{1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0});
Group2847->addChildren(*OrientationInterpolator2854);

COrientationInterpolator* OrientationInterpolator2855 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2855->setDEF("Kick_r_sternoclavicular_RollInterpolator");
OrientationInterpolator2855->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2855->setKeyValue(new float[24]{0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0});
Group2847->addChildren(*OrientationInterpolator2855);

COrientationInterpolator* OrientationInterpolator2856 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2856->setDEF("Kick_r_acromioclavicular_RollInterpolator");
OrientationInterpolator2856->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2856->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0});
Group2847->addChildren(*OrientationInterpolator2856);

COrientationInterpolator* OrientationInterpolator2857 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2857->setDEF("Kick_r_shoulder_RollInterpolator");
OrientationInterpolator2857->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2857->setKeyValue(new float[24]{0,0,1,0,0,0,1,-1.76,0.25,0,1,-1.76,0,0,1,-1.256,0,0,1,-0.05,0,0,1,0});
Group2847->addChildren(*OrientationInterpolator2857);

COrientationInterpolator* OrientationInterpolator2858 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2858->setDEF("Kick_r_ForeArm_PitchInterpolator");
OrientationInterpolator2858->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2858->setKeyValue(new float[24]{1,0,0,0,1,0,0,-0.55,1,0.25,0,-2.55,1,0,0,0,1,0,0,0,1,0,0,0});
Group2847->addChildren(*OrientationInterpolator2858);

COrientationInterpolator* OrientationInterpolator2859 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2859->setDEF("Kick_r_wrist_RollInterpolator");
OrientationInterpolator2859->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2859->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,1,0,-0.55,0,0,1,0,0,0,1,0,0,0,1,0});
Group2847->addChildren(*OrientationInterpolator2859);

COrientationInterpolator* OrientationInterpolator2860 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2860->setDEF("Kick_r_thumb1_PitchInterpolator");
OrientationInterpolator2860->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2860->setKeyValue(new float[24]{1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0});
Group2847->addChildren(*OrientationInterpolator2860);

COrientationInterpolator* OrientationInterpolator2861 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2861->setDEF("Kick_r_hip_PitchInterpolator");
OrientationInterpolator2861->setKey(new float[7]{0,0.2,0.3,0.5,0.6,0.9,1}, 7);
OrientationInterpolator2861->setKeyValue(new float[28]{1,0,0,0,1,0,0,0.9,-1,0,0,1.75,-1,0,0,2.25,-1,0,0,2,1,0,0,0,1,0,0,0});
Group2847->addChildren(*OrientationInterpolator2861);

COrientationInterpolator* OrientationInterpolator2862 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2862->setDEF("Kick_r_knee_PitchInterpolator");
OrientationInterpolator2862->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2862->setKeyValue(new float[24]{0,0,1,0,1,0,0,1.95,1,0,0,1.75,-1,0,0,0.28,1,0,0,0,1,0,0,0});
Group2847->addChildren(*OrientationInterpolator2862);

COrientationInterpolator* OrientationInterpolator2863 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2863->setDEF("Kick_l_hip_PitchInterpolator");
OrientationInterpolator2863->setKey(new float[7]{0,0.2,0.3,0.5,0.6,0.9,1}, 7);
OrientationInterpolator2863->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2847->addChildren(*OrientationInterpolator2863);

COrientationInterpolator* OrientationInterpolator2864 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2864->setDEF("Kick_l_knee_PitchInterpolator");
OrientationInterpolator2864->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2864->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2847->addChildren(*OrientationInterpolator2864);

COrientationInterpolator* OrientationInterpolator2865 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2865->setDEF("Kick_r_ankle_PitchInterpolator");
OrientationInterpolator2865->setKey(new float[6]{0,0.2,0.4,0.6,0.7,1}, 6);
OrientationInterpolator2865->setKeyValue(new float[24]{0,0,1,0,-1,0,0,0.9,-1,0,0,0.95,1,0,0,0.75,-1,0,0,0.05,1,0,0,0});
Group2847->addChildren(*OrientationInterpolator2865);

COrientationInterpolator* OrientationInterpolator2866 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2866->setDEF("Kick_r_metatarsal_PitchInterpolator");
OrientationInterpolator2866->setKey(new float[6]{0,0.2,0.4,0.6,0.7,1}, 6);
OrientationInterpolator2866->setKeyValue(new float[24]{1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0});
Group2847->addChildren(*OrientationInterpolator2866);

COrientationInterpolator* OrientationInterpolator2867 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2867->setDEF("Kick_sacroiliac_YawInterpolator");
OrientationInterpolator2867->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator2867->setKeyValue(new float[24]{0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0});
Group2847->addChildren(*OrientationInterpolator2867);

COrientationInterpolator* OrientationInterpolator2868 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2868->setDEF("Kick_vl5_YawInterpolator");
OrientationInterpolator2868->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator2868->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2847->addChildren(*OrientationInterpolator2868);

COrientationInterpolator* OrientationInterpolator2869 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2869->setDEF("Kick_vc6_YawInterpolator");
OrientationInterpolator2869->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator2869->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group2847->addChildren(*OrientationInterpolator2869);

COrientationInterpolator* OrientationInterpolator2870 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2870->setDEF("Kick_lower_body_RotationInterpolator");
OrientationInterpolator2870->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2870->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2847->addChildren(*OrientationInterpolator2870);

COrientationInterpolator* OrientationInterpolator2871 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2871->setDEF("Kick_upper_body_RotationInterpolator");
OrientationInterpolator2871->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2871->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2847->addChildren(*OrientationInterpolator2871);

COrientationInterpolator* OrientationInterpolator2872 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2872->setDEF("Kick_whole_body_RotationInterpolator");
OrientationInterpolator2872->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator2872->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group2847->addChildren(*OrientationInterpolator2872);

CPositionInterpolator* PositionInterpolator2873 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator2873->setDEF("Kick_whole_body_TranslationInterpolator");
PositionInterpolator2873->setKey(new float[3]{0,0.5,1}, 3);
PositionInterpolator2873->setKeyValue(new float[9]{0,0,0,0,0,0,0,0,0});
Group2847->addChildren(*PositionInterpolator2873);

COrientationInterpolator* OrientationInterpolator2874 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator2874->setDEF("Kick_neck_RotationInterpolator");
OrientationInterpolator2874->setKey(new float[4]{0,0.25,0.55,1}, 4);
OrientationInterpolator2874->setKeyValue(new float[16]{0,0,1,0,1,0,0,0.7,1,0,0,0.5,0,0,1,0});
Group2847->addChildren(*OrientationInterpolator2874);

CROUTE* ROUTE2875 = new CROUTE();
ROUTE2875->setFromField("fraction_changed");
ROUTE2875->setFromNode("KickTimer");
ROUTE2875->setToField("set_fraction");
ROUTE2875->setToNode("Kick_l_sternoclavicular_RollInterpolator");
Group2847->addChildren(*ROUTE2875);

CROUTE* ROUTE2876 = new CROUTE();
ROUTE2876->setFromField("fraction_changed");
ROUTE2876->setFromNode("KickTimer");
ROUTE2876->setToField("set_fraction");
ROUTE2876->setToNode("Kick_l_acromioclavicular_RollInterpolator");
Group2847->addChildren(*ROUTE2876);

CROUTE* ROUTE2877 = new CROUTE();
ROUTE2877->setFromField("fraction_changed");
ROUTE2877->setFromNode("KickTimer");
ROUTE2877->setToField("set_fraction");
ROUTE2877->setToNode("Kick_l_shoulder_RollInterpolator");
Group2847->addChildren(*ROUTE2877);

CROUTE* ROUTE2878 = new CROUTE();
ROUTE2878->setFromField("fraction_changed");
ROUTE2878->setFromNode("KickTimer");
ROUTE2878->setToField("set_fraction");
ROUTE2878->setToNode("Kick_l_ForeArm_PitchInterpolator");
Group2847->addChildren(*ROUTE2878);

CROUTE* ROUTE2879 = new CROUTE();
ROUTE2879->setFromField("fraction_changed");
ROUTE2879->setFromNode("KickTimer");
ROUTE2879->setToField("set_fraction");
ROUTE2879->setToNode("Kick_l_wrist_RollInterpolator");
Group2847->addChildren(*ROUTE2879);

CROUTE* ROUTE2880 = new CROUTE();
ROUTE2880->setFromField("fraction_changed");
ROUTE2880->setFromNode("KickTimer");
ROUTE2880->setToField("set_fraction");
ROUTE2880->setToNode("Kick_l_thumb1_PitchInterpolator");
Group2847->addChildren(*ROUTE2880);

CROUTE* ROUTE2881 = new CROUTE();
ROUTE2881->setFromField("fraction_changed");
ROUTE2881->setFromNode("KickTimer");
ROUTE2881->setToField("set_fraction");
ROUTE2881->setToNode("Kick_r_sternoclavicular_RollInterpolator");
Group2847->addChildren(*ROUTE2881);

CROUTE* ROUTE2882 = new CROUTE();
ROUTE2882->setFromField("fraction_changed");
ROUTE2882->setFromNode("KickTimer");
ROUTE2882->setToField("set_fraction");
ROUTE2882->setToNode("Kick_r_acromioclavicular_RollInterpolator");
Group2847->addChildren(*ROUTE2882);

CROUTE* ROUTE2883 = new CROUTE();
ROUTE2883->setFromField("fraction_changed");
ROUTE2883->setFromNode("KickTimer");
ROUTE2883->setToField("set_fraction");
ROUTE2883->setToNode("Kick_r_shoulder_RollInterpolator");
Group2847->addChildren(*ROUTE2883);

CROUTE* ROUTE2884 = new CROUTE();
ROUTE2884->setFromField("fraction_changed");
ROUTE2884->setFromNode("KickTimer");
ROUTE2884->setToField("set_fraction");
ROUTE2884->setToNode("Kick_r_ForeArm_PitchInterpolator");
Group2847->addChildren(*ROUTE2884);

CROUTE* ROUTE2885 = new CROUTE();
ROUTE2885->setFromField("fraction_changed");
ROUTE2885->setFromNode("KickTimer");
ROUTE2885->setToField("set_fraction");
ROUTE2885->setToNode("Kick_r_wrist_RollInterpolator");
Group2847->addChildren(*ROUTE2885);

CROUTE* ROUTE2886 = new CROUTE();
ROUTE2886->setFromField("fraction_changed");
ROUTE2886->setFromNode("KickTimer");
ROUTE2886->setToField("set_fraction");
ROUTE2886->setToNode("Kick_r_thumb1_PitchInterpolator");
Group2847->addChildren(*ROUTE2886);

CROUTE* ROUTE2887 = new CROUTE();
ROUTE2887->setFromField("fraction_changed");
ROUTE2887->setFromNode("KickTimer");
ROUTE2887->setToField("set_fraction");
ROUTE2887->setToNode("Kick_r_hip_PitchInterpolator");
Group2847->addChildren(*ROUTE2887);

CROUTE* ROUTE2888 = new CROUTE();
ROUTE2888->setFromField("fraction_changed");
ROUTE2888->setFromNode("KickTimer");
ROUTE2888->setToField("set_fraction");
ROUTE2888->setToNode("Kick_r_knee_PitchInterpolator");
Group2847->addChildren(*ROUTE2888);

CROUTE* ROUTE2889 = new CROUTE();
ROUTE2889->setFromField("fraction_changed");
ROUTE2889->setFromNode("KickTimer");
ROUTE2889->setToField("set_fraction");
ROUTE2889->setToNode("Kick_l_hip_PitchInterpolator");
Group2847->addChildren(*ROUTE2889);

CROUTE* ROUTE2890 = new CROUTE();
ROUTE2890->setFromField("fraction_changed");
ROUTE2890->setFromNode("KickTimer");
ROUTE2890->setToField("set_fraction");
ROUTE2890->setToNode("Kick_l_knee_PitchInterpolator");
Group2847->addChildren(*ROUTE2890);

CROUTE* ROUTE2891 = new CROUTE();
ROUTE2891->setFromField("fraction_changed");
ROUTE2891->setFromNode("KickTimer");
ROUTE2891->setToField("set_fraction");
ROUTE2891->setToNode("Kick_r_ankle_PitchInterpolator");
Group2847->addChildren(*ROUTE2891);

CROUTE* ROUTE2892 = new CROUTE();
ROUTE2892->setFromField("fraction_changed");
ROUTE2892->setFromNode("KickTimer");
ROUTE2892->setToField("set_fraction");
ROUTE2892->setToNode("Kick_r_metatarsal_PitchInterpolator");
Group2847->addChildren(*ROUTE2892);

CROUTE* ROUTE2893 = new CROUTE();
ROUTE2893->setFromField("fraction_changed");
ROUTE2893->setFromNode("KickTimer");
ROUTE2893->setToField("set_fraction");
ROUTE2893->setToNode("Kick_sacroiliac_YawInterpolator");
Group2847->addChildren(*ROUTE2893);

CROUTE* ROUTE2894 = new CROUTE();
ROUTE2894->setFromField("fraction_changed");
ROUTE2894->setFromNode("KickTimer");
ROUTE2894->setToField("set_fraction");
ROUTE2894->setToNode("Kick_vl5_YawInterpolator");
Group2847->addChildren(*ROUTE2894);

CROUTE* ROUTE2895 = new CROUTE();
ROUTE2895->setFromField("fraction_changed");
ROUTE2895->setFromNode("KickTimer");
ROUTE2895->setToField("set_fraction");
ROUTE2895->setToNode("Kick_vc6_YawInterpolator");
Group2847->addChildren(*ROUTE2895);

CROUTE* ROUTE2896 = new CROUTE();
ROUTE2896->setFromField("fraction_changed");
ROUTE2896->setFromNode("KickTimer");
ROUTE2896->setToField("set_fraction");
ROUTE2896->setToNode("Kick_lower_body_RotationInterpolator");
Group2847->addChildren(*ROUTE2896);

CROUTE* ROUTE2897 = new CROUTE();
ROUTE2897->setFromField("fraction_changed");
ROUTE2897->setFromNode("KickTimer");
ROUTE2897->setToField("set_fraction");
ROUTE2897->setToNode("Kick_upper_body_RotationInterpolator");
Group2847->addChildren(*ROUTE2897);

CROUTE* ROUTE2898 = new CROUTE();
ROUTE2898->setFromField("fraction_changed");
ROUTE2898->setFromNode("KickTimer");
ROUTE2898->setToField("set_fraction");
ROUTE2898->setToNode("Kick_whole_body_RotationInterpolator");
Group2847->addChildren(*ROUTE2898);

CROUTE* ROUTE2899 = new CROUTE();
ROUTE2899->setFromField("fraction_changed");
ROUTE2899->setFromNode("KickTimer");
ROUTE2899->setToField("set_fraction");
ROUTE2899->setToNode("Kick_whole_body_TranslationInterpolator");
Group2847->addChildren(*ROUTE2899);

CROUTE* ROUTE2900 = new CROUTE();
ROUTE2900->setFromField("fraction_changed");
ROUTE2900->setFromNode("KickTimer");
ROUTE2900->setToField("set_fraction");
ROUTE2900->setToNode("Kick_neck_RotationInterpolator");
Group2847->addChildren(*ROUTE2900);

CROUTE* ROUTE2901 = new CROUTE();
ROUTE2901->setFromField("value_changed");
ROUTE2901->setFromNode("Kick_l_sternoclavicular_RollInterpolator");
ROUTE2901->setToField("rotation");
ROUTE2901->setToNode("hanim_l_sternoclavicular");
Group2847->addChildren(*ROUTE2901);

CROUTE* ROUTE2902 = new CROUTE();
ROUTE2902->setFromField("value_changed");
ROUTE2902->setFromNode("Kick_l_acromioclavicular_RollInterpolator");
ROUTE2902->setToField("rotation");
ROUTE2902->setToNode("hanim_l_acromioclavicular");
Group2847->addChildren(*ROUTE2902);

CROUTE* ROUTE2903 = new CROUTE();
ROUTE2903->setFromField("value_changed");
ROUTE2903->setFromNode("Kick_l_shoulder_RollInterpolator");
ROUTE2903->setToField("rotation");
ROUTE2903->setToNode("hanim_l_shoulder");
Group2847->addChildren(*ROUTE2903);

CROUTE* ROUTE2904 = new CROUTE();
ROUTE2904->setFromField("value_changed");
ROUTE2904->setFromNode("Kick_l_ForeArm_PitchInterpolator");
ROUTE2904->setToField("rotation");
ROUTE2904->setToNode("hanim_l_elbow");
Group2847->addChildren(*ROUTE2904);

CROUTE* ROUTE2905 = new CROUTE();
ROUTE2905->setFromField("value_changed");
ROUTE2905->setFromNode("Kick_l_wrist_RollInterpolator");
ROUTE2905->setToField("rotation");
ROUTE2905->setToNode("hanim_l_wrist");
Group2847->addChildren(*ROUTE2905);

CROUTE* ROUTE2906 = new CROUTE();
ROUTE2906->setFromField("value_changed");
ROUTE2906->setFromNode("Kick_l_thumb1_PitchInterpolator");
ROUTE2906->setToField("rotation");
ROUTE2906->setToNode("hanim_l_thumb1");
Group2847->addChildren(*ROUTE2906);

CROUTE* ROUTE2907 = new CROUTE();
ROUTE2907->setFromField("value_changed");
ROUTE2907->setFromNode("Kick_r_sternoclavicular_RollInterpolator");
ROUTE2907->setToField("rotation");
ROUTE2907->setToNode("hanim_r_sternoclavicular");
Group2847->addChildren(*ROUTE2907);

CROUTE* ROUTE2908 = new CROUTE();
ROUTE2908->setFromField("value_changed");
ROUTE2908->setFromNode("Kick_r_acromioclavicular_RollInterpolator");
ROUTE2908->setToField("rotation");
ROUTE2908->setToNode("hanim_r_acromioclavicular");
Group2847->addChildren(*ROUTE2908);

CROUTE* ROUTE2909 = new CROUTE();
ROUTE2909->setFromField("value_changed");
ROUTE2909->setFromNode("Kick_r_shoulder_RollInterpolator");
ROUTE2909->setToField("rotation");
ROUTE2909->setToNode("hanim_r_shoulder");
Group2847->addChildren(*ROUTE2909);

CROUTE* ROUTE2910 = new CROUTE();
ROUTE2910->setFromField("value_changed");
ROUTE2910->setFromNode("Kick_r_ForeArm_PitchInterpolator");
ROUTE2910->setToField("rotation");
ROUTE2910->setToNode("hanim_r_elbow");
Group2847->addChildren(*ROUTE2910);

CROUTE* ROUTE2911 = new CROUTE();
ROUTE2911->setFromField("value_changed");
ROUTE2911->setFromNode("Kick_r_wrist_RollInterpolator");
ROUTE2911->setToField("rotation");
ROUTE2911->setToNode("hanim_r_wrist");
Group2847->addChildren(*ROUTE2911);

CROUTE* ROUTE2912 = new CROUTE();
ROUTE2912->setFromField("value_changed");
ROUTE2912->setFromNode("Kick_r_thumb1_PitchInterpolator");
ROUTE2912->setToField("rotation");
ROUTE2912->setToNode("hanim_r_thumb1");
Group2847->addChildren(*ROUTE2912);

CROUTE* ROUTE2913 = new CROUTE();
ROUTE2913->setFromField("value_changed");
ROUTE2913->setFromNode("Kick_r_hip_PitchInterpolator");
ROUTE2913->setToField("rotation");
ROUTE2913->setToNode("hanim_r_hip");
Group2847->addChildren(*ROUTE2913);

CROUTE* ROUTE2914 = new CROUTE();
ROUTE2914->setFromField("value_changed");
ROUTE2914->setFromNode("Kick_r_knee_PitchInterpolator");
ROUTE2914->setToField("rotation");
ROUTE2914->setToNode("hanim_r_knee");
Group2847->addChildren(*ROUTE2914);

CROUTE* ROUTE2915 = new CROUTE();
ROUTE2915->setFromField("value_changed");
ROUTE2915->setFromNode("Kick_r_ankle_PitchInterpolator");
ROUTE2915->setToField("rotation");
ROUTE2915->setToNode("hanim_r_ankle");
Group2847->addChildren(*ROUTE2915);

CROUTE* ROUTE2916 = new CROUTE();
ROUTE2916->setFromField("value_changed");
ROUTE2916->setFromNode("Kick_r_metatarsal_PitchInterpolator");
ROUTE2916->setToField("rotation");
ROUTE2916->setToNode("hanim_r_metatarsal");
Group2847->addChildren(*ROUTE2916);

CROUTE* ROUTE2917 = new CROUTE();
ROUTE2917->setFromField("value_changed");
ROUTE2917->setFromNode("Kick_l_hip_PitchInterpolator");
ROUTE2917->setToField("rotation");
ROUTE2917->setToNode("hanim_l_hip");
Group2847->addChildren(*ROUTE2917);

CROUTE* ROUTE2918 = new CROUTE();
ROUTE2918->setFromField("value_changed");
ROUTE2918->setFromNode("Kick_l_knee_PitchInterpolator");
ROUTE2918->setToField("rotation");
ROUTE2918->setToNode("hanim_l_knee");
Group2847->addChildren(*ROUTE2918);

CROUTE* ROUTE2919 = new CROUTE();
ROUTE2919->setFromField("value_changed");
ROUTE2919->setFromNode("Kick_r_ankle_PitchInterpolator");
ROUTE2919->setToField("rotation");
ROUTE2919->setToNode("hanim_l_ankle");
Group2847->addChildren(*ROUTE2919);

CROUTE* ROUTE2920 = new CROUTE();
ROUTE2920->setFromField("value_changed");
ROUTE2920->setFromNode("Kick_r_metatarsal_PitchInterpolator");
ROUTE2920->setToField("rotation");
ROUTE2920->setToNode("hanim_l_metatarsal");
Group2847->addChildren(*ROUTE2920);

CROUTE* ROUTE2921 = new CROUTE();
ROUTE2921->setFromField("value_changed");
ROUTE2921->setFromNode("Kick_sacroiliac_YawInterpolator");
ROUTE2921->setToField("rotation");
ROUTE2921->setToNode("hanim_sacroiliac");
Group2847->addChildren(*ROUTE2921);

CROUTE* ROUTE2922 = new CROUTE();
ROUTE2922->setFromField("value_changed");
ROUTE2922->setFromNode("Kick_vl5_YawInterpolator");
ROUTE2922->setToField("rotation");
ROUTE2922->setToNode("hanim_vl5");
Group2847->addChildren(*ROUTE2922);

CROUTE* ROUTE2923 = new CROUTE();
ROUTE2923->setFromField("value_changed");
ROUTE2923->setFromNode("Kick_vc6_YawInterpolator");
ROUTE2923->setToField("rotation");
ROUTE2923->setToNode("hanim_vc6");
Group2847->addChildren(*ROUTE2923);

CROUTE* ROUTE2924 = new CROUTE();
ROUTE2924->setFromField("value_changed");
ROUTE2924->setFromNode("Kick_upper_body_RotationInterpolator");
ROUTE2924->setToField("rotation");
ROUTE2924->setToNode("hanim_vl1");
Group2847->addChildren(*ROUTE2924);

CROUTE* ROUTE2925 = new CROUTE();
ROUTE2925->setFromField("value_changed");
ROUTE2925->setFromNode("Kick_lower_body_RotationInterpolator");
ROUTE2925->setToField("rotation");
ROUTE2925->setToNode("hanim_sacroiliac");
Group2847->addChildren(*ROUTE2925);

CROUTE* ROUTE2926 = new CROUTE();
ROUTE2926->setFromField("value_changed");
ROUTE2926->setFromNode("Kick_whole_body_RotationInterpolator");
ROUTE2926->setToField("rotation");
ROUTE2926->setToNode("hanim_humanoid_root");
Group2847->addChildren(*ROUTE2926);

CROUTE* ROUTE2927 = new CROUTE();
ROUTE2927->setFromField("value_changed");
ROUTE2927->setFromNode("Kick_whole_body_TranslationInterpolator");
ROUTE2927->setToField("translation");
ROUTE2927->setToNode("hanim_humanoid_root");
Group2847->addChildren(*ROUTE2927);

CROUTE* ROUTE2928 = new CROUTE();
ROUTE2928->setFromField("value_changed");
ROUTE2928->setFromNode("Kick_neck_RotationInterpolator");
ROUTE2928->setToField("rotation");
ROUTE2928->setToNode("hanim_vc4");
Group2847->addChildren(*ROUTE2928);

group->addChildren(*Group2847);

CGroup* Group2929 = (CGroup *)(m_pScene.createNode("Group"));
Group2929->setDEF("UserInterface");
//Authoring hint: these axes are aligned within local coordinate system
CTransform* Transform2930 = (CTransform *)(m_pScene.createNode("Transform"));
Transform2930->setDEF("CoordinateAxesAdjustedScale");
Transform2930->setScale(new float[3]{0.175,0.175,0.175});
CInline* Inline2931 = (CInline *)(m_pScene.createNode("Inline"));
Inline2931->setDEF("CoordinateAxes");
Inline2931->setUrl(new CString[4]{"../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl"}, 4);
Transform2930->addChildren(*Inline2931);

Group2929->addChildren(*Transform2930);

CTransform* Transform2932 = (CTransform *)(m_pScene.createNode("Transform"));
Transform2932->setDEF("cordsys");
Transform2932->setScale(new float[3]{0.175,0.175,0.175});
//<Inline bboxCenter='0.05143541 0.07883984 0.04731131' bboxSize='2.202872 2.25768 2.194624' url='\"JointCoordinateAxes.x3dv\"'/>
Group2929->addChildren(*Transform2932);

CProximitySensor* ProximitySensor2933 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor2933->setDEF("HudProximitySensor");
ProximitySensor2933->setCenter(new float[3]{0,20,0});
ProximitySensor2933->setSize(new float[3]{500,100,500});
Group2929->addChildren(*ProximitySensor2933);

CTransform* Transform2934 = (CTransform *)(m_pScene.createNode("Transform"));
Transform2934->setDEF("Stage");
Transform2934->setScale(new float[3]{1,0.0125,1});
Transform2934->setTranslation(new float[3]{0,-0.0125,0});
CShape* Shape2935 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance2936 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material2937 = (CMaterial *)(m_pScene.createNode("Material"));
Material2937->setTransparency(0.6);
Appearance2936->setMaterial(*Material2937);

Shape2935->setAppearance(*Appearance2936);

CBox* Box2938 = (CBox *)(m_pScene.createNode("Box"));
Shape2935->setGeometry(Box2938);

Transform2934->addChildren(*Shape2935);

CTransform* Transform2939 = (CTransform *)(m_pScene.createNode("Transform"));
Transform2939->setDEF("Circle0");
Transform2939->setScale(new float[3]{1.175,1,1.175});
CShape* Shape2940 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance2941 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material2942 = (CMaterial *)(m_pScene.createNode("Material"));
Material2942->setDiffuseColor(new float[3]{0.9,0,0.7});
Material2942->setEmissiveColor(new float[3]{0.424956,0.483976,1});
Appearance2941->setMaterial(*Material2942);

Shape2940->setAppearance(*Appearance2941);

CIndexedLineSet* IndexedLineSet2943 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet2943->setDEF("Orbit1");
IndexedLineSet2943->setCoordIndex(new int[62]{0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1});
CCoordinate* Coordinate2944 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate2944->setPoint(new float[183]{1,0,0,0.995,0,-0.105,0.979,0,-0.208,0.951,0,-0.309,0.914,0,-0.407,0.866,0,-0.5,0.809,0,-0.588,0.743,0,-0.669,0.669,0,-0.743,0.588,0,-0.809,0.5,0,-0.866,0.407,0,-0.914,0.309,0,-0.951,0.208,0,-0.978,0.105,0,-0.995,0,0,-1,-0.105,0,-0.994522,-0.208,0,-0.978,-0.309,0,-0.951,-0.407,0,-0.914,-0.5,0,-0.866,-0.588,0,-0.809,-0.669,0,-0.743,-0.743,0,-0.669,-0.809,0,-0.588,-0.866,0,-0.5,-0.914,0,-0.407,-0.951,0,-0.309,-0.978,0,-0.208,-0.995,0,-0.105,-1,0,0,-0.995,0,0.105,-0.978,0,0.208,-0.951,0,0.309,-0.914,0,0.407,-0.866,0,0.5,-0.809,0,0.588,-0.743,0,0.669,-0.669,0,0.743,-0.588,0,0.809,-0.5,0,0.866,-0.407,0,0.914,-0.309,0,0.951,-0.208,0,0.978,-0.105,0,0.995,0,0,1,0.105,0,0.995,0.208,0,0.978,0.309,0,0.951,0.407,0,0.914,0.5,0,0.866,0.588,0,0.809,0.669,0,0.743,0.743,0,0.669,0.809,0,0.588,0.866,0,0.5,0.914,0,0.407,0.951,0,0.309,0.978,0,0.208,0.995,0,0.104,1,0,0});
IndexedLineSet2943->setCoord(*Coordinate2944);

Shape2940->setGeometry(IndexedLineSet2943);

Transform2939->addChildren(*Shape2940);

Transform2934->addChildren(*Transform2939);

CTransform* Transform2945 = (CTransform *)(m_pScene.createNode("Transform"));
Transform2945->setDEF("Circle1");
Transform2945->setScale(new float[3]{0.5,1,0.5});
CShape* Shape2946 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance2947 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material2948 = (CMaterial *)(m_pScene.createNode("Material"));
Material2948->setDiffuseColor(new float[3]{0.9,0,0.7});
Material2948->setEmissiveColor(new float[3]{0.424956,0.483976,1});
Appearance2947->setMaterial(*Material2948);

Shape2946->setAppearance(*Appearance2947);

CIndexedLineSet* IndexedLineSet2949 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet2949->setUSE("Orbit1");
Shape2946->setGeometry(IndexedLineSet2949);

Transform2945->addChildren(*Shape2946);

Transform2934->addChildren(*Transform2945);

CTransform* Transform2950 = (CTransform *)(m_pScene.createNode("Transform"));
Transform2950->setDEF("Circle2");
Transform2950->setScale(new float[3]{0.25,1,0.25});
CShape* Shape2951 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance2952 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material2953 = (CMaterial *)(m_pScene.createNode("Material"));
Material2953->setDiffuseColor(new float[3]{0.9,0,0.7});
Material2953->setEmissiveColor(new float[3]{0.424956,0.483976,1});
Appearance2952->setMaterial(*Material2953);

Shape2951->setAppearance(*Appearance2952);

CIndexedLineSet* IndexedLineSet2954 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet2954->setUSE("Orbit1");
Shape2951->setGeometry(IndexedLineSet2954);

Transform2950->addChildren(*Shape2951);

Transform2934->addChildren(*Transform2950);

Group2929->addChildren(*Transform2934);

CTransform* Transform2955 = (CTransform *)(m_pScene.createNode("Transform"));
Transform2955->setDEF("HudXform");
Transform2955->setRotation(new float[4]{-0.09996068,0.9942513,0.03837026,0.7131352});
Transform2955->setTranslation(new float[3]{1.705442,1.042139,1.989742});
CTransform* Transform2956 = (CTransform *)(m_pScene.createNode("Transform"));
Transform2956->setScale(new float[3]{0.035,0.035,0.035});
Transform2956->setTranslation(new float[3]{-0.42,-0.2,-0.75});
CTransform* Transform2957 = (CTransform *)(m_pScene.createNode("Transform"));
Transform2957->setDEF("StandTransform");
Transform2957->setTranslation(new float[3]{0,-1,0});
CTouchSensor* TouchSensor2958 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor2958->setDEF("Stand_Touch");
TouchSensor2958->setDescription("touch to select");
Transform2957->addChildren(*TouchSensor2958);

CShape* Shape2959 = (CShape *)(m_pScene.createNode("Shape"));
Shape2959->setDEF("StandTextShape");
CAppearance* Appearance2960 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material2961 = (CMaterial *)(m_pScene.createNode("Material"));
Material2961->setDEF("text_color");
Material2961->setAmbientIntensity(1);
Material2961->setDiffuseColor(new float[3]{0.819,0.521,0.169});
Material2961->setEmissiveColor(new float[3]{0.819,0.521,0.169});
Material2961->setSpecularColor(new float[3]{0.819,0.521,0.169});
Appearance2960->setMaterial(*Material2961);

Shape2959->setAppearance(*Appearance2960);

CText* Text2962 = (CText *)(m_pScene.createNode("Text"));
Text2962->setString(new CString[1]{"Stand"}, 1);
Shape2959->setGeometry(Text2962);

Transform2957->addChildren(*Shape2959);

CShape* Shape2963 = (CShape *)(m_pScene.createNode("Shape"));
Shape2963->setDEF("Stand_Back");
CAppearance* Appearance2964 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material2965 = (CMaterial *)(m_pScene.createNode("Material"));
Material2965->setDEF("Clear");
Material2965->setAmbientIntensity(1);
Material2965->setDiffuseColor(new float[3]{0,0.5,0});
Material2965->setEmissiveColor(new float[3]{0,0.5,0});
Material2965->setTransparency(0.8);
Appearance2964->setMaterial(*Material2965);

Shape2963->setAppearance(*Appearance2964);

CIndexedFaceSet* IndexedFaceSet2966 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet2966->setDEF("Backing");
IndexedFaceSet2966->setCoordIndex(new int[5]{0,1,2,3,-1});
CCoordinate* Coordinate2967 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate2967->setPoint(new float[12]{-0.2,-1.2,-0.01,2.5,-1.2,-0.01,2.5,0.75,-0.01,-0.2,0.75,-0.01});
IndexedFaceSet2966->setCoord(*Coordinate2967);

Shape2963->setGeometry(IndexedFaceSet2966);

Transform2957->addChildren(*Shape2963);

Transform2956->addChildren(*Transform2957);

CTransform* Transform2968 = (CTransform *)(m_pScene.createNode("Transform"));
Transform2968->setDEF("PitchTransform");
Transform2968->setTranslation(new float[3]{3,-1,0});
CTouchSensor* TouchSensor2969 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor2969->setDEF("Pitch_Touch");
TouchSensor2969->setDescription("touch to select");
Transform2968->addChildren(*TouchSensor2969);

CShape* Shape2970 = (CShape *)(m_pScene.createNode("Shape"));
Shape2970->setDEF("PitchTextShape");
CAppearance* Appearance2971 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material2972 = (CMaterial *)(m_pScene.createNode("Material"));
Material2972->setUSE("text_color");
Appearance2971->setMaterial(*Material2972);

Shape2970->setAppearance(*Appearance2971);

CText* Text2973 = (CText *)(m_pScene.createNode("Text"));
Text2973->setString(new CString[1]{"Pitch"}, 1);
Shape2970->setGeometry(Text2973);

Transform2968->addChildren(*Shape2970);

CShape* Shape2974 = (CShape *)(m_pScene.createNode("Shape"));
Shape2974->setDEF("Pitch_Back");
CAppearance* Appearance2975 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material2976 = (CMaterial *)(m_pScene.createNode("Material"));
Material2976->setUSE("Clear");
Appearance2975->setMaterial(*Material2976);

Shape2974->setAppearance(*Appearance2975);

CIndexedFaceSet* IndexedFaceSet2977 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet2977->setUSE("Backing");
Shape2974->setGeometry(IndexedFaceSet2977);

Transform2968->addChildren(*Shape2974);

Transform2956->addChildren(*Transform2968);

CTransform* Transform2978 = (CTransform *)(m_pScene.createNode("Transform"));
Transform2978->setDEF("YawTransform");
Transform2978->setTranslation(new float[3]{6,-1,0});
CTouchSensor* TouchSensor2979 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor2979->setDEF("Yaw_Touch");
TouchSensor2979->setDescription("touch to select");
Transform2978->addChildren(*TouchSensor2979);

CShape* Shape2980 = (CShape *)(m_pScene.createNode("Shape"));
Shape2980->setDEF("YawText");
CAppearance* Appearance2981 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material2982 = (CMaterial *)(m_pScene.createNode("Material"));
Material2982->setUSE("text_color");
Appearance2981->setMaterial(*Material2982);

Shape2980->setAppearance(*Appearance2981);

CText* Text2983 = (CText *)(m_pScene.createNode("Text"));
Text2983->setString(new CString[1]{"Yaw"}, 1);
Shape2980->setGeometry(Text2983);

Transform2978->addChildren(*Shape2980);

CShape* Shape2984 = (CShape *)(m_pScene.createNode("Shape"));
Shape2984->setDEF("Yaw_Back");
CAppearance* Appearance2985 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material2986 = (CMaterial *)(m_pScene.createNode("Material"));
Material2986->setUSE("Clear");
Appearance2985->setMaterial(*Material2986);

Shape2984->setAppearance(*Appearance2985);

CIndexedFaceSet* IndexedFaceSet2987 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet2987->setUSE("Backing");
Shape2984->setGeometry(IndexedFaceSet2987);

Transform2978->addChildren(*Shape2984);

Transform2956->addChildren(*Transform2978);

CTransform* Transform2988 = (CTransform *)(m_pScene.createNode("Transform"));
Transform2988->setDEF("RollTransform");
Transform2988->setTranslation(new float[3]{9,-1,0});
CTouchSensor* TouchSensor2989 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor2989->setDEF("Roll_Touch");
TouchSensor2989->setDescription("touch to select");
Transform2988->addChildren(*TouchSensor2989);

CShape* Shape2990 = (CShape *)(m_pScene.createNode("Shape"));
Shape2990->setDEF("_RollInterpolator");
CAppearance* Appearance2991 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material2992 = (CMaterial *)(m_pScene.createNode("Material"));
Material2992->setUSE("text_color");
Appearance2991->setMaterial(*Material2992);

Shape2990->setAppearance(*Appearance2991);

CText* Text2993 = (CText *)(m_pScene.createNode("Text"));
Text2993->setString(new CString[1]{"Roll"}, 1);
Shape2990->setGeometry(Text2993);

Transform2988->addChildren(*Shape2990);

CShape* Shape2994 = (CShape *)(m_pScene.createNode("Shape"));
Shape2994->setDEF("Roll_Back");
CAppearance* Appearance2995 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material2996 = (CMaterial *)(m_pScene.createNode("Material"));
Material2996->setUSE("Clear");
Appearance2995->setMaterial(*Material2996);

Shape2994->setAppearance(*Appearance2995);

CIndexedFaceSet* IndexedFaceSet2997 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet2997->setUSE("Backing");
Shape2994->setGeometry(IndexedFaceSet2997);

Transform2988->addChildren(*Shape2994);

Transform2956->addChildren(*Transform2988);

CTransform* Transform2998 = (CTransform *)(m_pScene.createNode("Transform"));
Transform2998->setDEF("WalkTransform");
Transform2998->setTranslation(new float[3]{12,-1,0});
CTouchSensor* TouchSensor2999 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor2999->setDEF("Walk_Touch");
TouchSensor2999->setDescription("touch to select");
Transform2998->addChildren(*TouchSensor2999);

CShape* Shape3000 = (CShape *)(m_pScene.createNode("Shape"));
Shape3000->setDEF("WalkText");
CAppearance* Appearance3001 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material3002 = (CMaterial *)(m_pScene.createNode("Material"));
Material3002->setUSE("text_color");
Appearance3001->setMaterial(*Material3002);

Shape3000->setAppearance(*Appearance3001);

CText* Text3003 = (CText *)(m_pScene.createNode("Text"));
Text3003->setString(new CString[1]{"Walk"}, 1);
Shape3000->setGeometry(Text3003);

Transform2998->addChildren(*Shape3000);

CShape* Shape3004 = (CShape *)(m_pScene.createNode("Shape"));
Shape3004->setDEF("Walk_Back");
CAppearance* Appearance3005 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material3006 = (CMaterial *)(m_pScene.createNode("Material"));
Material3006->setUSE("Clear");
Appearance3005->setMaterial(*Material3006);

Shape3004->setAppearance(*Appearance3005);

CIndexedFaceSet* IndexedFaceSet3007 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet3007->setUSE("Backing");
Shape3004->setGeometry(IndexedFaceSet3007);

Transform2998->addChildren(*Shape3004);

Transform2956->addChildren(*Transform2998);

CTransform* Transform3008 = (CTransform *)(m_pScene.createNode("Transform"));
Transform3008->setDEF("RunTransform");
Transform3008->setTranslation(new float[3]{15,-1,0});
CTouchSensor* TouchSensor3009 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor3009->setDEF("Run_Touch");
TouchSensor3009->setDescription("touch to select");
Transform3008->addChildren(*TouchSensor3009);

CShape* Shape3010 = (CShape *)(m_pScene.createNode("Shape"));
Shape3010->setDEF("RunText");
CAppearance* Appearance3011 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material3012 = (CMaterial *)(m_pScene.createNode("Material"));
Material3012->setUSE("text_color");
Appearance3011->setMaterial(*Material3012);

Shape3010->setAppearance(*Appearance3011);

CText* Text3013 = (CText *)(m_pScene.createNode("Text"));
Text3013->setString(new CString[1]{"Run"}, 1);
Shape3010->setGeometry(Text3013);

Transform3008->addChildren(*Shape3010);

CShape* Shape3014 = (CShape *)(m_pScene.createNode("Shape"));
Shape3014->setDEF("Run_Back");
CAppearance* Appearance3015 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material3016 = (CMaterial *)(m_pScene.createNode("Material"));
Material3016->setUSE("Clear");
Appearance3015->setMaterial(*Material3016);

Shape3014->setAppearance(*Appearance3015);

CIndexedFaceSet* IndexedFaceSet3017 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet3017->setUSE("Backing");
Shape3014->setGeometry(IndexedFaceSet3017);

Transform3008->addChildren(*Shape3014);

Transform2956->addChildren(*Transform3008);

CTransform* Transform3018 = (CTransform *)(m_pScene.createNode("Transform"));
Transform3018->setDEF("JumpTransform");
Transform3018->setTranslation(new float[3]{18,-1,0});
CTouchSensor* TouchSensor3019 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor3019->setDEF("Jump_Touch");
TouchSensor3019->setDescription("touch to select");
Transform3018->addChildren(*TouchSensor3019);

CShape* Shape3020 = (CShape *)(m_pScene.createNode("Shape"));
Shape3020->setDEF("Jump");
CAppearance* Appearance3021 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material3022 = (CMaterial *)(m_pScene.createNode("Material"));
Material3022->setUSE("text_color");
Appearance3021->setMaterial(*Material3022);

Shape3020->setAppearance(*Appearance3021);

CText* Text3023 = (CText *)(m_pScene.createNode("Text"));
Text3023->setString(new CString[1]{"Jump"}, 1);
Shape3020->setGeometry(Text3023);

Transform3018->addChildren(*Shape3020);

CShape* Shape3024 = (CShape *)(m_pScene.createNode("Shape"));
Shape3024->setDEF("Jump_Back");
CAppearance* Appearance3025 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material3026 = (CMaterial *)(m_pScene.createNode("Material"));
Material3026->setUSE("Clear");
Appearance3025->setMaterial(*Material3026);

Shape3024->setAppearance(*Appearance3025);

CIndexedFaceSet* IndexedFaceSet3027 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet3027->setUSE("Backing");
Shape3024->setGeometry(IndexedFaceSet3027);

Transform3018->addChildren(*Shape3024);

Transform2956->addChildren(*Transform3018);

CTransform* Transform3028 = (CTransform *)(m_pScene.createNode("Transform"));
Transform3028->setDEF("KickTransform");
Transform3028->setTranslation(new float[3]{21,-1,0});
CTouchSensor* TouchSensor3029 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor3029->setDEF("Kick_Touch");
TouchSensor3029->setDescription("touch to select");
Transform3028->addChildren(*TouchSensor3029);

CShape* Shape3030 = (CShape *)(m_pScene.createNode("Shape"));
Shape3030->setDEF("KickText");
CAppearance* Appearance3031 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material3032 = (CMaterial *)(m_pScene.createNode("Material"));
Material3032->setUSE("text_color");
Appearance3031->setMaterial(*Material3032);

Shape3030->setAppearance(*Appearance3031);

CText* Text3033 = (CText *)(m_pScene.createNode("Text"));
Text3033->setString(new CString[1]{"Kick"}, 1);
Shape3030->setGeometry(Text3033);

Transform3028->addChildren(*Shape3030);

CShape* Shape3034 = (CShape *)(m_pScene.createNode("Shape"));
Shape3034->setDEF("Kick_Back");
CAppearance* Appearance3035 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material3036 = (CMaterial *)(m_pScene.createNode("Material"));
Material3036->setUSE("Clear");
Appearance3035->setMaterial(*Material3036);

Shape3034->setAppearance(*Appearance3035);

CIndexedFaceSet* IndexedFaceSet3037 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet3037->setUSE("Backing");
Shape3034->setGeometry(IndexedFaceSet3037);

Transform3028->addChildren(*Shape3034);

Transform2956->addChildren(*Transform3028);

CTransform* Transform3038 = (CTransform *)(m_pScene.createNode("Transform"));
Transform3038->setDEF("Stop_Text");
Transform3038->setTranslation(new float[3]{0,1.4,0});
CTouchSensor* TouchSensor3039 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor3039->setDEF("Stop_Touch");
TouchSensor3039->setDescription("touch to select");
Transform3038->addChildren(*TouchSensor3039);

CShape* Shape3040 = (CShape *)(m_pScene.createNode("Shape"));
Shape3040->setDEF("StopText");
CAppearance* Appearance3041 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material3042 = (CMaterial *)(m_pScene.createNode("Material"));
Material3042->setUSE("text_color");
Appearance3041->setMaterial(*Material3042);

Shape3040->setAppearance(*Appearance3041);

CText* Text3043 = (CText *)(m_pScene.createNode("Text"));
Text3043->setString(new CString[2]{"Stop","Default Pose"}, 2);
Shape3040->setGeometry(Text3043);

Transform3038->addChildren(*Shape3040);

CShape* Shape3044 = (CShape *)(m_pScene.createNode("Shape"));
Shape3044->setDEF("Stop_Back");
CAppearance* Appearance3045 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material3046 = (CMaterial *)(m_pScene.createNode("Material"));
Material3046->setUSE("Clear");
Appearance3045->setMaterial(*Material3046);

Shape3044->setAppearance(*Appearance3045);

CIndexedFaceSet* IndexedFaceSet3047 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet3047->setUSE("Backing");
Shape3044->setGeometry(IndexedFaceSet3047);

Transform3038->addChildren(*Shape3044);

Transform2956->addChildren(*Transform3038);

Transform2955->addChildren(*Transform2956);

Group2929->addChildren(*Transform2955);

CROUTE* ROUTE3048 = new CROUTE();
ROUTE3048->setFromField("position_changed");
ROUTE3048->setFromNode("HudProximitySensor");
ROUTE3048->setToField("translation");
ROUTE3048->setToNode("HudXform");
Group2929->addChildren(*ROUTE3048);

CROUTE* ROUTE3049 = new CROUTE();
ROUTE3049->setFromField("orientation_changed");
ROUTE3049->setFromNode("HudProximitySensor");
ROUTE3049->setToField("rotation");
ROUTE3049->setToNode("HudXform");
Group2929->addChildren(*ROUTE3049);

group->addChildren(*Group2929);

CGroup* Group3050 = (CGroup *)(m_pScene.createNode("Group"));
Group3050->setDEF("BehaviorSynchronization");
CROUTE* ROUTE3051 = new CROUTE();
ROUTE3051->setFromField("touchTime");
ROUTE3051->setFromNode("Stand_Touch");
ROUTE3051->setToField("stopTime");
ROUTE3051->setToNode("PitchTimer");
Group3050->addChildren(*ROUTE3051);

CROUTE* ROUTE3052 = new CROUTE();
ROUTE3052->setFromField("touchTime");
ROUTE3052->setFromNode("Stand_Touch");
ROUTE3052->setToField("stopTime");
ROUTE3052->setToNode("YawTimer");
Group3050->addChildren(*ROUTE3052);

CROUTE* ROUTE3053 = new CROUTE();
ROUTE3053->setFromField("touchTime");
ROUTE3053->setFromNode("Stand_Touch");
ROUTE3053->setToField("stopTime");
ROUTE3053->setToNode("RollTimer");
Group3050->addChildren(*ROUTE3053);

CROUTE* ROUTE3054 = new CROUTE();
ROUTE3054->setFromField("touchTime");
ROUTE3054->setFromNode("Stand_Touch");
ROUTE3054->setToField("stopTime");
ROUTE3054->setToNode("WalkTimer");
Group3050->addChildren(*ROUTE3054);

CROUTE* ROUTE3055 = new CROUTE();
ROUTE3055->setFromField("touchTime");
ROUTE3055->setFromNode("Stand_Touch");
ROUTE3055->setToField("stopTime");
ROUTE3055->setToNode("RunTimer");
Group3050->addChildren(*ROUTE3055);

CROUTE* ROUTE3056 = new CROUTE();
ROUTE3056->setFromField("touchTime");
ROUTE3056->setFromNode("Stand_Touch");
ROUTE3056->setToField("stopTime");
ROUTE3056->setToNode("JumpTimer");
Group3050->addChildren(*ROUTE3056);

CROUTE* ROUTE3057 = new CROUTE();
ROUTE3057->setFromField("touchTime");
ROUTE3057->setFromNode("Stand_Touch");
ROUTE3057->setToField("stopTime");
ROUTE3057->setToNode("KickTimer");
Group3050->addChildren(*ROUTE3057);

CROUTE* ROUTE3058 = new CROUTE();
ROUTE3058->setFromField("touchTime");
ROUTE3058->setFromNode("Stand_Touch");
ROUTE3058->setToField("stopTime");
ROUTE3058->setToNode("StopTimer");
Group3050->addChildren(*ROUTE3058);

CROUTE* ROUTE3059 = new CROUTE();
ROUTE3059->setFromField("touchTime");
ROUTE3059->setFromNode("Stand_Touch");
ROUTE3059->setToField("startTime");
ROUTE3059->setToNode("StandTimer");
Group3050->addChildren(*ROUTE3059);

CROUTE* ROUTE3060 = new CROUTE();
ROUTE3060->setFromField("touchTime");
ROUTE3060->setFromNode("Pitch_Touch");
ROUTE3060->setToField("stopTime");
ROUTE3060->setToNode("StandTimer");
Group3050->addChildren(*ROUTE3060);

CROUTE* ROUTE3061 = new CROUTE();
ROUTE3061->setFromField("touchTime");
ROUTE3061->setFromNode("Pitch_Touch");
ROUTE3061->setToField("stopTime");
ROUTE3061->setToNode("YawTimer");
Group3050->addChildren(*ROUTE3061);

CROUTE* ROUTE3062 = new CROUTE();
ROUTE3062->setFromField("touchTime");
ROUTE3062->setFromNode("Pitch_Touch");
ROUTE3062->setToField("stopTime");
ROUTE3062->setToNode("RollTimer");
Group3050->addChildren(*ROUTE3062);

CROUTE* ROUTE3063 = new CROUTE();
ROUTE3063->setFromField("touchTime");
ROUTE3063->setFromNode("Pitch_Touch");
ROUTE3063->setToField("stopTime");
ROUTE3063->setToNode("WalkTimer");
Group3050->addChildren(*ROUTE3063);

CROUTE* ROUTE3064 = new CROUTE();
ROUTE3064->setFromField("touchTime");
ROUTE3064->setFromNode("Pitch_Touch");
ROUTE3064->setToField("stopTime");
ROUTE3064->setToNode("RunTimer");
Group3050->addChildren(*ROUTE3064);

CROUTE* ROUTE3065 = new CROUTE();
ROUTE3065->setFromField("touchTime");
ROUTE3065->setFromNode("Pitch_Touch");
ROUTE3065->setToField("stopTime");
ROUTE3065->setToNode("JumpTimer");
Group3050->addChildren(*ROUTE3065);

CROUTE* ROUTE3066 = new CROUTE();
ROUTE3066->setFromField("touchTime");
ROUTE3066->setFromNode("Pitch_Touch");
ROUTE3066->setToField("stopTime");
ROUTE3066->setToNode("KickTimer");
Group3050->addChildren(*ROUTE3066);

CROUTE* ROUTE3067 = new CROUTE();
ROUTE3067->setFromField("touchTime");
ROUTE3067->setFromNode("Pitch_Touch");
ROUTE3067->setToField("stopTime");
ROUTE3067->setToNode("StopTimer");
Group3050->addChildren(*ROUTE3067);

CROUTE* ROUTE3068 = new CROUTE();
ROUTE3068->setFromField("touchTime");
ROUTE3068->setFromNode("Pitch_Touch");
ROUTE3068->setToField("startTime");
ROUTE3068->setToNode("PitchTimer");
Group3050->addChildren(*ROUTE3068);

CROUTE* ROUTE3069 = new CROUTE();
ROUTE3069->setFromField("touchTime");
ROUTE3069->setFromNode("Yaw_Touch");
ROUTE3069->setToField("stopTime");
ROUTE3069->setToNode("StandTimer");
Group3050->addChildren(*ROUTE3069);

CROUTE* ROUTE3070 = new CROUTE();
ROUTE3070->setFromField("touchTime");
ROUTE3070->setFromNode("Yaw_Touch");
ROUTE3070->setToField("stopTime");
ROUTE3070->setToNode("PitchTimer");
Group3050->addChildren(*ROUTE3070);

CROUTE* ROUTE3071 = new CROUTE();
ROUTE3071->setFromField("touchTime");
ROUTE3071->setFromNode("Yaw_Touch");
ROUTE3071->setToField("stopTime");
ROUTE3071->setToNode("RollTimer");
Group3050->addChildren(*ROUTE3071);

CROUTE* ROUTE3072 = new CROUTE();
ROUTE3072->setFromField("touchTime");
ROUTE3072->setFromNode("Yaw_Touch");
ROUTE3072->setToField("stopTime");
ROUTE3072->setToNode("WalkTimer");
Group3050->addChildren(*ROUTE3072);

CROUTE* ROUTE3073 = new CROUTE();
ROUTE3073->setFromField("touchTime");
ROUTE3073->setFromNode("Yaw_Touch");
ROUTE3073->setToField("stopTime");
ROUTE3073->setToNode("RunTimer");
Group3050->addChildren(*ROUTE3073);

CROUTE* ROUTE3074 = new CROUTE();
ROUTE3074->setFromField("touchTime");
ROUTE3074->setFromNode("Yaw_Touch");
ROUTE3074->setToField("stopTime");
ROUTE3074->setToNode("JumpTimer");
Group3050->addChildren(*ROUTE3074);

CROUTE* ROUTE3075 = new CROUTE();
ROUTE3075->setFromField("touchTime");
ROUTE3075->setFromNode("Yaw_Touch");
ROUTE3075->setToField("stopTime");
ROUTE3075->setToNode("KickTimer");
Group3050->addChildren(*ROUTE3075);

CROUTE* ROUTE3076 = new CROUTE();
ROUTE3076->setFromField("touchTime");
ROUTE3076->setFromNode("Yaw_Touch");
ROUTE3076->setToField("stopTime");
ROUTE3076->setToNode("StopTimer");
Group3050->addChildren(*ROUTE3076);

CROUTE* ROUTE3077 = new CROUTE();
ROUTE3077->setFromField("touchTime");
ROUTE3077->setFromNode("Yaw_Touch");
ROUTE3077->setToField("startTime");
ROUTE3077->setToNode("YawTimer");
Group3050->addChildren(*ROUTE3077);

CROUTE* ROUTE3078 = new CROUTE();
ROUTE3078->setFromField("touchTime");
ROUTE3078->setFromNode("Walk_Touch");
ROUTE3078->setToField("stopTime");
ROUTE3078->setToNode("StandTimer");
Group3050->addChildren(*ROUTE3078);

CROUTE* ROUTE3079 = new CROUTE();
ROUTE3079->setFromField("touchTime");
ROUTE3079->setFromNode("Walk_Touch");
ROUTE3079->setToField("stopTime");
ROUTE3079->setToNode("PitchTimer");
Group3050->addChildren(*ROUTE3079);

CROUTE* ROUTE3080 = new CROUTE();
ROUTE3080->setFromField("touchTime");
ROUTE3080->setFromNode("Walk_Touch");
ROUTE3080->setToField("stopTime");
ROUTE3080->setToNode("YawTimer");
Group3050->addChildren(*ROUTE3080);

CROUTE* ROUTE3081 = new CROUTE();
ROUTE3081->setFromField("touchTime");
ROUTE3081->setFromNode("Walk_Touch");
ROUTE3081->setToField("stopTime");
ROUTE3081->setToNode("RollTimer");
Group3050->addChildren(*ROUTE3081);

CROUTE* ROUTE3082 = new CROUTE();
ROUTE3082->setFromField("touchTime");
ROUTE3082->setFromNode("Walk_Touch");
ROUTE3082->setToField("stopTime");
ROUTE3082->setToNode("RunTimer");
Group3050->addChildren(*ROUTE3082);

CROUTE* ROUTE3083 = new CROUTE();
ROUTE3083->setFromField("touchTime");
ROUTE3083->setFromNode("Walk_Touch");
ROUTE3083->setToField("stopTime");
ROUTE3083->setToNode("JumpTimer");
Group3050->addChildren(*ROUTE3083);

CROUTE* ROUTE3084 = new CROUTE();
ROUTE3084->setFromField("touchTime");
ROUTE3084->setFromNode("Walk_Touch");
ROUTE3084->setToField("stopTime");
ROUTE3084->setToNode("KickTimer");
Group3050->addChildren(*ROUTE3084);

CROUTE* ROUTE3085 = new CROUTE();
ROUTE3085->setFromField("touchTime");
ROUTE3085->setFromNode("Walk_Touch");
ROUTE3085->setToField("stopTime");
ROUTE3085->setToNode("StopTimer");
Group3050->addChildren(*ROUTE3085);

CROUTE* ROUTE3086 = new CROUTE();
ROUTE3086->setFromField("touchTime");
ROUTE3086->setFromNode("Walk_Touch");
ROUTE3086->setToField("startTime");
ROUTE3086->setToNode("WalkTimer");
Group3050->addChildren(*ROUTE3086);

CROUTE* ROUTE3087 = new CROUTE();
ROUTE3087->setFromField("touchTime");
ROUTE3087->setFromNode("Roll_Touch");
ROUTE3087->setToField("stopTime");
ROUTE3087->setToNode("StandTimer");
Group3050->addChildren(*ROUTE3087);

CROUTE* ROUTE3088 = new CROUTE();
ROUTE3088->setFromField("touchTime");
ROUTE3088->setFromNode("Roll_Touch");
ROUTE3088->setToField("stopTime");
ROUTE3088->setToNode("PitchTimer");
Group3050->addChildren(*ROUTE3088);

CROUTE* ROUTE3089 = new CROUTE();
ROUTE3089->setFromField("touchTime");
ROUTE3089->setFromNode("Roll_Touch");
ROUTE3089->setToField("stopTime");
ROUTE3089->setToNode("YawTimer");
Group3050->addChildren(*ROUTE3089);

CROUTE* ROUTE3090 = new CROUTE();
ROUTE3090->setFromField("touchTime");
ROUTE3090->setFromNode("Roll_Touch");
ROUTE3090->setToField("stopTime");
ROUTE3090->setToNode("WalkTimer");
Group3050->addChildren(*ROUTE3090);

CROUTE* ROUTE3091 = new CROUTE();
ROUTE3091->setFromField("touchTime");
ROUTE3091->setFromNode("Roll_Touch");
ROUTE3091->setToField("stopTime");
ROUTE3091->setToNode("RunTimer");
Group3050->addChildren(*ROUTE3091);

CROUTE* ROUTE3092 = new CROUTE();
ROUTE3092->setFromField("touchTime");
ROUTE3092->setFromNode("Roll_Touch");
ROUTE3092->setToField("stopTime");
ROUTE3092->setToNode("JumpTimer");
Group3050->addChildren(*ROUTE3092);

CROUTE* ROUTE3093 = new CROUTE();
ROUTE3093->setFromField("touchTime");
ROUTE3093->setFromNode("Roll_Touch");
ROUTE3093->setToField("stopTime");
ROUTE3093->setToNode("KickTimer");
Group3050->addChildren(*ROUTE3093);

CROUTE* ROUTE3094 = new CROUTE();
ROUTE3094->setFromField("touchTime");
ROUTE3094->setFromNode("Roll_Touch");
ROUTE3094->setToField("stopTime");
ROUTE3094->setToNode("StopTimer");
Group3050->addChildren(*ROUTE3094);

CROUTE* ROUTE3095 = new CROUTE();
ROUTE3095->setFromField("touchTime");
ROUTE3095->setFromNode("Roll_Touch");
ROUTE3095->setToField("startTime");
ROUTE3095->setToNode("RollTimer");
Group3050->addChildren(*ROUTE3095);

CROUTE* ROUTE3096 = new CROUTE();
ROUTE3096->setFromField("touchTime");
ROUTE3096->setFromNode("Run_Touch");
ROUTE3096->setToField("stopTime");
ROUTE3096->setToNode("StandTimer");
Group3050->addChildren(*ROUTE3096);

CROUTE* ROUTE3097 = new CROUTE();
ROUTE3097->setFromField("touchTime");
ROUTE3097->setFromNode("Run_Touch");
ROUTE3097->setToField("stopTime");
ROUTE3097->setToNode("PitchTimer");
Group3050->addChildren(*ROUTE3097);

CROUTE* ROUTE3098 = new CROUTE();
ROUTE3098->setFromField("touchTime");
ROUTE3098->setFromNode("Run_Touch");
ROUTE3098->setToField("stopTime");
ROUTE3098->setToNode("YawTimer");
Group3050->addChildren(*ROUTE3098);

CROUTE* ROUTE3099 = new CROUTE();
ROUTE3099->setFromField("touchTime");
ROUTE3099->setFromNode("Run_Touch");
ROUTE3099->setToField("stopTime");
ROUTE3099->setToNode("RollTimer");
Group3050->addChildren(*ROUTE3099);

CROUTE* ROUTE3100 = new CROUTE();
ROUTE3100->setFromField("touchTime");
ROUTE3100->setFromNode("Run_Touch");
ROUTE3100->setToField("stopTime");
ROUTE3100->setToNode("WalkTimer");
Group3050->addChildren(*ROUTE3100);

CROUTE* ROUTE3101 = new CROUTE();
ROUTE3101->setFromField("touchTime");
ROUTE3101->setFromNode("Run_Touch");
ROUTE3101->setToField("stopTime");
ROUTE3101->setToNode("JumpTimer");
Group3050->addChildren(*ROUTE3101);

CROUTE* ROUTE3102 = new CROUTE();
ROUTE3102->setFromField("touchTime");
ROUTE3102->setFromNode("Run_Touch");
ROUTE3102->setToField("stopTime");
ROUTE3102->setToNode("KickTimer");
Group3050->addChildren(*ROUTE3102);

CROUTE* ROUTE3103 = new CROUTE();
ROUTE3103->setFromField("touchTime");
ROUTE3103->setFromNode("Run_Touch");
ROUTE3103->setToField("stopTime");
ROUTE3103->setToNode("StopTimer");
Group3050->addChildren(*ROUTE3103);

CROUTE* ROUTE3104 = new CROUTE();
ROUTE3104->setFromField("touchTime");
ROUTE3104->setFromNode("Run_Touch");
ROUTE3104->setToField("startTime");
ROUTE3104->setToNode("RunTimer");
Group3050->addChildren(*ROUTE3104);

CROUTE* ROUTE3105 = new CROUTE();
ROUTE3105->setFromField("touchTime");
ROUTE3105->setFromNode("Jump_Touch");
ROUTE3105->setToField("stopTime");
ROUTE3105->setToNode("StandTimer");
Group3050->addChildren(*ROUTE3105);

CROUTE* ROUTE3106 = new CROUTE();
ROUTE3106->setFromField("touchTime");
ROUTE3106->setFromNode("Jump_Touch");
ROUTE3106->setToField("stopTime");
ROUTE3106->setToNode("PitchTimer");
Group3050->addChildren(*ROUTE3106);

CROUTE* ROUTE3107 = new CROUTE();
ROUTE3107->setFromField("touchTime");
ROUTE3107->setFromNode("Jump_Touch");
ROUTE3107->setToField("stopTime");
ROUTE3107->setToNode("YawTimer");
Group3050->addChildren(*ROUTE3107);

CROUTE* ROUTE3108 = new CROUTE();
ROUTE3108->setFromField("touchTime");
ROUTE3108->setFromNode("Jump_Touch");
ROUTE3108->setToField("stopTime");
ROUTE3108->setToNode("RollTimer");
Group3050->addChildren(*ROUTE3108);

CROUTE* ROUTE3109 = new CROUTE();
ROUTE3109->setFromField("touchTime");
ROUTE3109->setFromNode("Jump_Touch");
ROUTE3109->setToField("stopTime");
ROUTE3109->setToNode("WalkTimer");
Group3050->addChildren(*ROUTE3109);

CROUTE* ROUTE3110 = new CROUTE();
ROUTE3110->setFromField("touchTime");
ROUTE3110->setFromNode("Jump_Touch");
ROUTE3110->setToField("stopTime");
ROUTE3110->setToNode("RunTimer");
Group3050->addChildren(*ROUTE3110);

CROUTE* ROUTE3111 = new CROUTE();
ROUTE3111->setFromField("touchTime");
ROUTE3111->setFromNode("Jump_Touch");
ROUTE3111->setToField("stopTime");
ROUTE3111->setToNode("KickTimer");
Group3050->addChildren(*ROUTE3111);

CROUTE* ROUTE3112 = new CROUTE();
ROUTE3112->setFromField("touchTime");
ROUTE3112->setFromNode("Jump_Touch");
ROUTE3112->setToField("stopTime");
ROUTE3112->setToNode("StopTimer");
Group3050->addChildren(*ROUTE3112);

CROUTE* ROUTE3113 = new CROUTE();
ROUTE3113->setFromField("touchTime");
ROUTE3113->setFromNode("Jump_Touch");
ROUTE3113->setToField("startTime");
ROUTE3113->setToNode("JumpTimer");
Group3050->addChildren(*ROUTE3113);

CROUTE* ROUTE3114 = new CROUTE();
ROUTE3114->setFromField("touchTime");
ROUTE3114->setFromNode("Kick_Touch");
ROUTE3114->setToField("stopTime");
ROUTE3114->setToNode("StandTimer");
Group3050->addChildren(*ROUTE3114);

CROUTE* ROUTE3115 = new CROUTE();
ROUTE3115->setFromField("touchTime");
ROUTE3115->setFromNode("Kick_Touch");
ROUTE3115->setToField("stopTime");
ROUTE3115->setToNode("PitchTimer");
Group3050->addChildren(*ROUTE3115);

CROUTE* ROUTE3116 = new CROUTE();
ROUTE3116->setFromField("touchTime");
ROUTE3116->setFromNode("Kick_Touch");
ROUTE3116->setToField("stopTime");
ROUTE3116->setToNode("YawTimer");
Group3050->addChildren(*ROUTE3116);

CROUTE* ROUTE3117 = new CROUTE();
ROUTE3117->setFromField("touchTime");
ROUTE3117->setFromNode("Kick_Touch");
ROUTE3117->setToField("stopTime");
ROUTE3117->setToNode("RollTimer");
Group3050->addChildren(*ROUTE3117);

CROUTE* ROUTE3118 = new CROUTE();
ROUTE3118->setFromField("touchTime");
ROUTE3118->setFromNode("Kick_Touch");
ROUTE3118->setToField("stopTime");
ROUTE3118->setToNode("WalkTimer");
Group3050->addChildren(*ROUTE3118);

CROUTE* ROUTE3119 = new CROUTE();
ROUTE3119->setFromField("touchTime");
ROUTE3119->setFromNode("Kick_Touch");
ROUTE3119->setToField("stopTime");
ROUTE3119->setToNode("RunTimer");
Group3050->addChildren(*ROUTE3119);

CROUTE* ROUTE3120 = new CROUTE();
ROUTE3120->setFromField("touchTime");
ROUTE3120->setFromNode("Kick_Touch");
ROUTE3120->setToField("stopTime");
ROUTE3120->setToNode("JumpTimer");
Group3050->addChildren(*ROUTE3120);

CROUTE* ROUTE3121 = new CROUTE();
ROUTE3121->setFromField("touchTime");
ROUTE3121->setFromNode("Kick_Touch");
ROUTE3121->setToField("stopTime");
ROUTE3121->setToNode("StopTimer");
Group3050->addChildren(*ROUTE3121);

CROUTE* ROUTE3122 = new CROUTE();
ROUTE3122->setFromField("touchTime");
ROUTE3122->setFromNode("Kick_Touch");
ROUTE3122->setToField("startTime");
ROUTE3122->setToNode("KickTimer");
Group3050->addChildren(*ROUTE3122);

CROUTE* ROUTE3123 = new CROUTE();
ROUTE3123->setFromField("touchTime");
ROUTE3123->setFromNode("Stop_Touch");
ROUTE3123->setToField("stopTime");
ROUTE3123->setToNode("StandTimer");
Group3050->addChildren(*ROUTE3123);

CROUTE* ROUTE3124 = new CROUTE();
ROUTE3124->setFromField("touchTime");
ROUTE3124->setFromNode("Stop_Touch");
ROUTE3124->setToField("stopTime");
ROUTE3124->setToNode("PitchTimer");
Group3050->addChildren(*ROUTE3124);

CROUTE* ROUTE3125 = new CROUTE();
ROUTE3125->setFromField("touchTime");
ROUTE3125->setFromNode("Stop_Touch");
ROUTE3125->setToField("stopTime");
ROUTE3125->setToNode("YawTimer");
Group3050->addChildren(*ROUTE3125);

CROUTE* ROUTE3126 = new CROUTE();
ROUTE3126->setFromField("touchTime");
ROUTE3126->setFromNode("Stop_Touch");
ROUTE3126->setToField("stopTime");
ROUTE3126->setToNode("RollTimer");
Group3050->addChildren(*ROUTE3126);

CROUTE* ROUTE3127 = new CROUTE();
ROUTE3127->setFromField("touchTime");
ROUTE3127->setFromNode("Stop_Touch");
ROUTE3127->setToField("stopTime");
ROUTE3127->setToNode("WalkTimer");
Group3050->addChildren(*ROUTE3127);

CROUTE* ROUTE3128 = new CROUTE();
ROUTE3128->setFromField("touchTime");
ROUTE3128->setFromNode("Stop_Touch");
ROUTE3128->setToField("stopTime");
ROUTE3128->setToNode("RunTimer");
Group3050->addChildren(*ROUTE3128);

CROUTE* ROUTE3129 = new CROUTE();
ROUTE3129->setFromField("touchTime");
ROUTE3129->setFromNode("Stop_Touch");
ROUTE3129->setToField("stopTime");
ROUTE3129->setToNode("JumpTimer");
Group3050->addChildren(*ROUTE3129);

CROUTE* ROUTE3130 = new CROUTE();
ROUTE3130->setFromField("touchTime");
ROUTE3130->setFromNode("Stop_Touch");
ROUTE3130->setToField("stopTime");
ROUTE3130->setToNode("KickTimer");
Group3050->addChildren(*ROUTE3130);

CROUTE* ROUTE3131 = new CROUTE();
ROUTE3131->setFromField("touchTime");
ROUTE3131->setFromNode("Stop_Touch");
ROUTE3131->setToField("startTime");
ROUTE3131->setToNode("StopTimer");
Group3050->addChildren(*ROUTE3131);

group->addChildren(*Group3050);

X3D0->setScene(*Scene30);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

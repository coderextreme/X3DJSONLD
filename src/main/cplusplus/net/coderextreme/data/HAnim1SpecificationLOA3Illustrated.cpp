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
meta3->setContent("HAnim1SpecificationLOA3Illustrated.x3d");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("description");
meta4->setContent("HAnim Specification reference example providing full coverage and visibility of all specified HAnim constructs, also suitable for re-use as an authoring template. Geometry visualizations are derived from HAnim1SpecificationLOA3Invisible.x3d visualization report. Resusable exemplar animations also added via heads-up display (HUD) interface to confirm proper parent-child relationships.");
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
meta8->setName("creator");
meta8->setContent("Matthew T. Beitler, Joe D. Williams, Don Brutzman");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("Image");
meta9->setContent("HAnim1SpecificationLOA3Illustrated.png");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("Image");
meta10->setContent("HAnim1SpecificationLOA3IllustratedLeftSide.png");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("reference");
meta11->setContent("HAnim1SpecificationLOA3Invisible.x3d");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("reference");
meta12->setContent("HAnim1SpecificationLOA3Animation.x3d");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("reference");
meta13->setContent("HAnimSpecificationExampleChangeLog.txt");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("Image");
meta14->setContent("images/BonesAllSkeletonFrontViewLOA1.png");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("Image");
meta15->setContent("images/BonesAllSkeletonFrontViewLOA2.png");
head1->addMeta(*meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("Image");
meta16->setContent("images/BonesAllSkeletonFrontViewLOA3.png");
head1->addMeta(*meta16);

Cmeta* meta17 = new Cmeta();
meta17->setName("TODO");
meta17->setContent("move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations");
head1->addMeta(*meta17);

Cmeta* meta18 = new Cmeta();
meta18->setName("warning");
meta18->setContent("BS Contact and H3DViewer have polygon-culling problems at close range (possibly related to avatarSize), other players look OK");
head1->addMeta(*meta18);

Cmeta* meta19 = new Cmeta();
meta19->setName("TODO");
meta19->setContent("insert MetadataInteger nodes indicating LOA for each Joint and Segment");
head1->addMeta(*meta19);

Cmeta* meta20 = new Cmeta();
meta20->setName("reference");
meta20->setContent("Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.");
head1->addMeta(*meta20);

Cmeta* meta21 = new Cmeta();
meta21->setName("reference");
meta21->setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.ps");
head1->addMeta(*meta21);

Cmeta* meta22 = new Cmeta();
meta22->setName("reference");
meta22->setContent("tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf");
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
meta28->setName("reference");
meta28->setContent("HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames");
head1->addMeta(*meta28);

Cmeta* meta29 = new Cmeta();
meta29->setName("generator");
meta29->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta29);

Cmeta* meta30 = new Cmeta();
meta30->setName("identifier");
meta30->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/HAnim1SpecificationLOA3Illustrated.x3d");
head1->addMeta(*meta30);

Cmeta* meta31 = new Cmeta();
meta31->setName("license");
meta31->setContent("../license.html");
head1->addMeta(*meta31);

X3D0->setHead(*head1);

CScene* Scene32 = new CScene();
CBackground* Background33 = (CBackground *)(m_pScene.createNode("Background"));
Background33->setSkyColor(new float[3]{0.3,0.3,0.3});
group->addChildren(*Background33);

CNavigationInfo* NavigationInfo34 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
group->addChildren(*NavigationInfo34);

CGroup* Group35 = (CGroup *)(m_pScene.createNode("Group"));
Group35->setDEF("Original_WorldInfo");
CWorldInfo* WorldInfo36 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo36->setInfo(new CString[1]{" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "}, 1);
WorldInfo36->setTitle("HANIM 200x Default Joint Centers, LOA3");
Group35->addChildren(*WorldInfo36);

group->addChildren(*Group35);

//TODO move viewpoints to be internal to HAnimHumanoid
//Viewpoint centerOfRotation=\"0 0.9149 0.0016\" matches initial at-rest locaton of the sacroliac. Note that these viewpoints are external to the HAnimHumanoid and do not move with the human.
CViewpoint* Viewpoint37 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint37->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint37->setDescription("Humanoid LOA 3 Front");
Viewpoint37->setPosition(new float[3]{0,0.4,4});
group->addChildren(*Viewpoint37);

CViewpoint* Viewpoint38 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint38->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint38->setDescription("Humanoid LOA 3 Front Close");
Viewpoint38->setPosition(new float[3]{0,0.8,2});
group->addChildren(*Viewpoint38);

CViewpoint* Viewpoint39 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint39->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint39->setDescription("Humanoid LOA 3 Front Closer");
Viewpoint39->setPosition(new float[3]{0,1.2,1});
group->addChildren(*Viewpoint39);

CViewpoint* Viewpoint40 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint40->setCenterOfRotation(new float[3]{0,1.5,0.0016});
Viewpoint40->setDescription("Humanoid LOA 3 Front Face");
Viewpoint40->setPosition(new float[3]{0,1.63,1});
group->addChildren(*Viewpoint40);

CViewpoint* Viewpoint41 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint41->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint41->setDescription("Humanoid LOA 3 Right Side");
Viewpoint41->setOrientation(new float[4]{0,1,0,1.5708});
Viewpoint41->setPosition(new float[3]{2.6,0.8,0});
group->addChildren(*Viewpoint41);

CViewpoint* Viewpoint42 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint42->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint42->setDescription("Humanoid LOA 3 Right Side Close");
Viewpoint42->setOrientation(new float[4]{0,1,0,1.2});
Viewpoint42->setPosition(new float[3]{1,0.8,0.5});
group->addChildren(*Viewpoint42);

CViewpoint* Viewpoint43 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint43->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint43->setDescription("Humanoid LOA 3 Left Side Close");
Viewpoint43->setOrientation(new float[4]{0,1,0,-1.2});
Viewpoint43->setPosition(new float[3]{-1,0.8,0.5});
group->addChildren(*Viewpoint43);

CViewpoint* Viewpoint44 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint44->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint44->setDescription("Humanoid LOA 3 Left Side");
Viewpoint44->setOrientation(new float[4]{0,1,0,-1.5708});
Viewpoint44->setPosition(new float[3]{-2.6,0.8,0});
group->addChildren(*Viewpoint44);

CViewpoint* Viewpoint45 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint45->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint45->setDescription("Humanoid LOA 3 Top");
Viewpoint45->setOrientation(new float[4]{1,0,0,-1.5708});
Viewpoint45->setPosition(new float[3]{0,3.5,0});
group->addChildren(*Viewpoint45);

CHAnimHumanoid* HAnimHumanoid46 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid46->setName("humanoid");
HAnimHumanoid46->setDEF("hanim_humanoid");
HAnimHumanoid46->setInfo(new CString[7]{"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman","authorEmail=HAnim@web3D.org","copyright=none","creationDate=12 May 1999","usageRestrictions=none","humanoidVersion=2.0","height=1.7504"}, 7);
HAnimHumanoid46->setVersion("1.0");
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
//right between the eyes, stationary position not animating except with body itself
CHAnimJoint* HAnimJoint47 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint47->setName("humanoid_root");
HAnimJoint47->setDEF("hanim_humanoid_root");
HAnimJoint47->setCenter(new float[3]{0,0.824,0.0277});
<<<<<<< HEAD
HAnimJoint47->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint47->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint47->setUlimit(new float[3]{0,0,0});
HAnimJoint47->setLlimit(new float[3]{0,0,0});
HAnimJoint47->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment48 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment48->setName("sacrum");
HAnimSegment48->setDEF("hanim_sacrum");
//<HAnimJoint name='humanoid_root'/> visualization sphere is placed within <HAnimSegment name='sacrum'/>
CTouchSensor* TouchSensor49 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor49->setDescription("HAnimJoint HumanoidRoot, HAnimSegment sacrum");
HAnimSegment48->addChildren(*TouchSensor49);

CTransform* Transform50 = (CTransform *)(m_pScene.createNode("Transform"));
Transform50->setTranslation(new float[3]{0,0.824,0.0277});
CShape* Shape51 = (CShape *)(m_pScene.createNode("Shape"));
Shape51->setDEF("HAnimJointShape");
CSphere* Sphere52 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere52->setRadius(0.006);
Shape51->setGeometry(Sphere52);

CAppearance* Appearance53 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance53->setDEF("HAnimJointAppearance");
CMaterial* Material54 = (CMaterial *)(m_pScene.createNode("Material"));
Material54->setDiffuseColor(new float[3]{1,0.5,0});
Material54->setTransparency(0.5);
Appearance53->setMaterial(*Material54);

Shape51->setAppearance(*Appearance53);

Transform50->addChildren(*Shape51);

HAnimSegment48->addChildren(*Transform50);

//HAnimSegment visualization line segment from parent <HAnimJoint name='humanoid_root'/> to <HAnimJoint name='sacroiliac'/>
CShape* Shape55 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet56 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet56->setVertexCount(new int[1]{2});
CCoordinate* Coordinate57 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate57->setPoint(new float[6]{0,0.824,0.0277,0,0.9149,0.0016});
LineSet56->setCoord(*Coordinate57);

CColorRGBA* ColorRGBA58 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA58->setDEF("HAnimSegmentLineColorRGBA");
ColorRGBA58->setColor(new float[8]{1,1,0,1,1,1,0,0.1});
LineSet56->setColor(*ColorRGBA58);

Shape55->setGeometry(LineSet56);

HAnimSegment48->addChildren(*Shape55);

//HAnimSegment visualization line segment from parent <HAnimJoint name='humanoid_root'/> to <HAnimJoint name='vl5'/>
CShape* Shape59 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet60 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet60->setVertexCount(new int[1]{2});
CCoordinate* Coordinate61 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate61->setPoint(new float[6]{0,0.824,0.0277,0.0028,1.0568,-0.0776});
LineSet60->setCoord(*Coordinate61);

CColorRGBA* ColorRGBA62 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA62->setUSE("HAnimSegmentLineColorRGBA");
LineSet60->setColor(*ColorRGBA62);

Shape59->setGeometry(LineSet60);

HAnimSegment48->addChildren(*Shape59);

HAnimJoint47->addChildren(*HAnimSegment48);

CHAnimJoint* HAnimJoint63 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint63->setName("sacroiliac");
HAnimJoint63->setDEF("hanim_sacroiliac");
HAnimJoint63->setCenter(new float[3]{0,0.9149,0.0016});
<<<<<<< HEAD
HAnimJoint63->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint63->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint63->setUlimit(new float[3]{0,0,0});
HAnimJoint63->setLlimit(new float[3]{0,0,0});
HAnimJoint63->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment64 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment64->setName("pelvis");
HAnimSegment64->setDEF("hanim_pelvis");
//<HAnimJoint name='sacroiliac'/> visualization sphere is placed within <HAnimSegment name='pelvis'/>
CTouchSensor* TouchSensor65 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor65->setDescription("HAnimJoint sacroiliac, HAnimSegment pelvis");
HAnimSegment64->addChildren(*TouchSensor65);

CTransform* Transform66 = (CTransform *)(m_pScene.createNode("Transform"));
Transform66->setTranslation(new float[3]{0,0.9149,0.0016});
CShape* Shape67 = (CShape *)(m_pScene.createNode("Shape"));
Shape67->setUSE("HAnimJointShape");
Transform66->addChildren(*Shape67);

HAnimSegment64->addChildren(*Transform66);

//HAnimSegment visualization line segment from parent <HAnimJoint name='sacroiliac'/> to <HAnimJoint name='l_hip'/>
CShape* Shape68 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet69 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet69->setVertexCount(new int[1]{2});
CCoordinate* Coordinate70 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate70->setPoint(new float[6]{0,0.9149,0.0016,0.0961,0.9124,-0.0001});
LineSet69->setCoord(*Coordinate70);

CColorRGBA* ColorRGBA71 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA71->setUSE("HAnimSegmentLineColorRGBA");
LineSet69->setColor(*ColorRGBA71);

Shape68->setGeometry(LineSet69);

HAnimSegment64->addChildren(*Shape68);

//HAnimSegment visualization line segment from parent <HAnimJoint name='sacroiliac'/> to <HAnimJoint name='r_hip'/>
CShape* Shape72 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet73 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet73->setVertexCount(new int[1]{2});
CCoordinate* Coordinate74 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate74->setPoint(new float[6]{0,0.9149,0.0016,-0.0961,0.9124,-0.0001});
LineSet73->setCoord(*Coordinate74);

CColorRGBA* ColorRGBA75 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA75->setUSE("HAnimSegmentLineColorRGBA");
LineSet73->setColor(*ColorRGBA75);

Shape72->setGeometry(LineSet73);

HAnimSegment64->addChildren(*Shape72);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_iliocristale'/>
CShape* Shape76 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet77 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet77->setVertexCount(new int[1]{2});
CCoordinate* Coordinate78 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate78->setPoint(new float[6]{0,0.9149,0.0016,-0.1525,1.0628,0.0035});
LineSet77->setCoord(*Coordinate78);

CColorRGBA* ColorRGBA79 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA79->setDEF("HAnimSiteLineColorRGBA");
ColorRGBA79->setColor(new float[8]{1,0,0,1,1,0,0,0.1});
LineSet77->setColor(*ColorRGBA79);

Shape76->setGeometry(LineSet77);

HAnimSegment64->addChildren(*Shape76);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_trochanterion'/>
CShape* Shape80 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet81 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet81->setVertexCount(new int[1]{2});
CCoordinate* Coordinate82 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate82->setPoint(new float[6]{0,0.9149,0.0016,-0.1689,0.8419,0.0352});
LineSet81->setCoord(*Coordinate82);

CColorRGBA* ColorRGBA83 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA83->setUSE("HAnimSiteLineColorRGBA");
LineSet81->setColor(*ColorRGBA83);

Shape80->setGeometry(LineSet81);

HAnimSegment64->addChildren(*Shape80);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_iliocristale'/>
CShape* Shape84 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet85 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet85->setVertexCount(new int[1]{2});
CCoordinate* Coordinate86 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate86->setPoint(new float[6]{0,0.9149,0.0016,0.1612,1.0537,0.0008});
LineSet85->setCoord(*Coordinate86);

CColorRGBA* ColorRGBA87 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA87->setUSE("HAnimSiteLineColorRGBA");
LineSet85->setColor(*ColorRGBA87);

Shape84->setGeometry(LineSet85);

HAnimSegment64->addChildren(*Shape84);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_trochanterion'/>
CShape* Shape88 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet89 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet89->setVertexCount(new int[1]{2});
CCoordinate* Coordinate90 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate90->setPoint(new float[6]{0,0.9149,0.0016,0.1677,0.8336,0.0303});
LineSet89->setCoord(*Coordinate90);

CColorRGBA* ColorRGBA91 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA91->setUSE("HAnimSiteLineColorRGBA");
LineSet89->setColor(*ColorRGBA91);

Shape88->setGeometry(LineSet89);

HAnimSegment64->addChildren(*Shape88);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_asis'/>
CShape* Shape92 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet93 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet93->setVertexCount(new int[1]{2});
CCoordinate* Coordinate94 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate94->setPoint(new float[6]{0,0.9149,0.0016,-0.0887,1.0021,0.1112});
LineSet93->setCoord(*Coordinate94);

CColorRGBA* ColorRGBA95 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA95->setUSE("HAnimSiteLineColorRGBA");
LineSet93->setColor(*ColorRGBA95);

Shape92->setGeometry(LineSet93);

HAnimSegment64->addChildren(*Shape92);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_asis'/>
CShape* Shape96 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet97 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet97->setVertexCount(new int[1]{2});
CCoordinate* Coordinate98 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate98->setPoint(new float[6]{0,0.9149,0.0016,0.0925,0.9983,0.1052});
LineSet97->setCoord(*Coordinate98);

CColorRGBA* ColorRGBA99 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA99->setUSE("HAnimSiteLineColorRGBA");
LineSet97->setColor(*ColorRGBA99);

Shape96->setGeometry(LineSet97);

HAnimSegment64->addChildren(*Shape96);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_psis'/>
CShape* Shape100 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet101 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet101->setVertexCount(new int[1]{2});
CCoordinate* Coordinate102 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate102->setPoint(new float[6]{0,0.9149,0.0016,-0.0716,1.019,-0.1138});
LineSet101->setCoord(*Coordinate102);

CColorRGBA* ColorRGBA103 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA103->setUSE("HAnimSiteLineColorRGBA");
LineSet101->setColor(*ColorRGBA103);

Shape100->setGeometry(LineSet101);

HAnimSegment64->addChildren(*Shape100);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_psis'/>
CShape* Shape104 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet105 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet105->setVertexCount(new int[1]{2});
CCoordinate* Coordinate106 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate106->setPoint(new float[6]{0,0.9149,0.0016,0.0774,1.019,-0.1151});
LineSet105->setCoord(*Coordinate106);

CColorRGBA* ColorRGBA107 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA107->setUSE("HAnimSiteLineColorRGBA");
LineSet105->setColor(*ColorRGBA107);

Shape104->setGeometry(LineSet105);

HAnimSegment64->addChildren(*Shape104);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='crotch'/>
CShape* Shape108 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet109 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet109->setVertexCount(new int[1]{2});
CCoordinate* Coordinate110 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate110->setPoint(new float[6]{0,0.9149,0.0016,0.0034,0.8266,0.0257});
LineSet109->setCoord(*Coordinate110);

CColorRGBA* ColorRGBA111 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA111->setUSE("HAnimSiteLineColorRGBA");
LineSet109->setColor(*ColorRGBA111);

Shape108->setGeometry(LineSet109);

HAnimSegment64->addChildren(*Shape108);

CHAnimSite* HAnimSite112 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite112->setName("r_iliocristale_pt");
HAnimSite112->setDEF("hanim_r_iliocristale_pt");
HAnimSite112->setTranslation(new float[3]{-0.1525,1.0628,0.0035});
//HAnimSite visualization shape
CTouchSensor* TouchSensor113 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor113->setDescription("HAnimSite r_iliocristale");
HAnimSite112->addChildren(*TouchSensor113);

CShape* Shape114 = (CShape *)(m_pScene.createNode("Shape"));
Shape114->setDEF("HAnimSiteShape");
CIndexedFaceSet* IndexedFaceSet115 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet115->setDEF("DiamondIFS");
IndexedFaceSet115->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet115->setCreaseAngle(0.5);
IndexedFaceSet115->setSolid(False);
CCoordinate* Coordinate116 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate116->setPoint(new float[18]{0,0.008,0,-0.008,0,0,0,0,0.008,0.008,0,0,0,0,-0.008,0,-0.008,0});
IndexedFaceSet115->setCoord(*Coordinate116);

Shape114->setGeometry(IndexedFaceSet115);

CAppearance* Appearance117 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material118 = (CMaterial *)(m_pScene.createNode("Material"));
Material118->setDiffuseColor(new float[3]{1,0,0});
Appearance117->setMaterial(*Material118);

Shape114->setAppearance(*Appearance117);

HAnimSite112->addChildren(*Shape114);

HAnimSegment64->addChildren(*HAnimSite112);

CHAnimSite* HAnimSite119 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite119->setName("r_trochanterion_pt");
HAnimSite119->setDEF("hanim_r_trochanterion_pt");
HAnimSite119->setTranslation(new float[3]{-0.1689,0.8419,0.0352});
//HAnimSite visualization shape
CTouchSensor* TouchSensor120 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor120->setDescription("HAnimSite r_trochanterion");
HAnimSite119->addChildren(*TouchSensor120);

CShape* Shape121 = (CShape *)(m_pScene.createNode("Shape"));
Shape121->setUSE("HAnimSiteShape");
HAnimSite119->addChildren(*Shape121);

HAnimSegment64->addChildren(*HAnimSite119);

CHAnimSite* HAnimSite122 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite122->setName("l_iliocristale_pt");
HAnimSite122->setDEF("hanim_l_iliocristale_pt");
HAnimSite122->setTranslation(new float[3]{0.1612,1.0537,0.0008});
//HAnimSite visualization shape
CTouchSensor* TouchSensor123 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor123->setDescription("HAnimSite l_iliocristale");
HAnimSite122->addChildren(*TouchSensor123);

CShape* Shape124 = (CShape *)(m_pScene.createNode("Shape"));
Shape124->setUSE("HAnimSiteShape");
HAnimSite122->addChildren(*Shape124);

HAnimSegment64->addChildren(*HAnimSite122);

CHAnimSite* HAnimSite125 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite125->setName("l_trochanterion_pt");
HAnimSite125->setDEF("hanim_l_trochanterion_pt");
HAnimSite125->setTranslation(new float[3]{0.1677,0.8336,0.0303});
//HAnimSite visualization shape
CTouchSensor* TouchSensor126 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor126->setDescription("HAnimSite l_trochanterion");
HAnimSite125->addChildren(*TouchSensor126);

CShape* Shape127 = (CShape *)(m_pScene.createNode("Shape"));
Shape127->setUSE("HAnimSiteShape");
HAnimSite125->addChildren(*Shape127);

HAnimSegment64->addChildren(*HAnimSite125);

CHAnimSite* HAnimSite128 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite128->setName("r_asis_pt");
HAnimSite128->setDEF("hanim_r_asis_pt");
HAnimSite128->setTranslation(new float[3]{-0.0887,1.0021,0.1112});
//HAnimSite visualization shape
CTouchSensor* TouchSensor129 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor129->setDescription("HAnimSite r_asis");
HAnimSite128->addChildren(*TouchSensor129);

CShape* Shape130 = (CShape *)(m_pScene.createNode("Shape"));
Shape130->setUSE("HAnimSiteShape");
HAnimSite128->addChildren(*Shape130);

HAnimSegment64->addChildren(*HAnimSite128);

CHAnimSite* HAnimSite131 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite131->setName("l_asis_pt");
HAnimSite131->setDEF("hanim_l_asis_pt");
HAnimSite131->setTranslation(new float[3]{0.0925,0.9983,0.1052});
//HAnimSite visualization shape
CTouchSensor* TouchSensor132 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor132->setDescription("HAnimSite l_asis");
HAnimSite131->addChildren(*TouchSensor132);

CShape* Shape133 = (CShape *)(m_pScene.createNode("Shape"));
Shape133->setUSE("HAnimSiteShape");
HAnimSite131->addChildren(*Shape133);

HAnimSegment64->addChildren(*HAnimSite131);

CHAnimSite* HAnimSite134 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite134->setName("r_psis_pt");
HAnimSite134->setDEF("hanim_r_psis_pt");
HAnimSite134->setTranslation(new float[3]{-0.0716,1.019,-0.1138});
//HAnimSite visualization shape
CTouchSensor* TouchSensor135 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor135->setDescription("HAnimSite r_psis");
HAnimSite134->addChildren(*TouchSensor135);

CShape* Shape136 = (CShape *)(m_pScene.createNode("Shape"));
Shape136->setUSE("HAnimSiteShape");
HAnimSite134->addChildren(*Shape136);

HAnimSegment64->addChildren(*HAnimSite134);

CHAnimSite* HAnimSite137 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite137->setName("l_psis_pt");
HAnimSite137->setDEF("hanim_l_psis_pt");
HAnimSite137->setTranslation(new float[3]{0.0774,1.019,-0.1151});
//HAnimSite visualization shape
CTouchSensor* TouchSensor138 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor138->setDescription("HAnimSite l_psis");
HAnimSite137->addChildren(*TouchSensor138);

CShape* Shape139 = (CShape *)(m_pScene.createNode("Shape"));
Shape139->setUSE("HAnimSiteShape");
HAnimSite137->addChildren(*Shape139);

HAnimSegment64->addChildren(*HAnimSite137);

CHAnimSite* HAnimSite140 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite140->setName("crotch_pt");
HAnimSite140->setDEF("hanim_crotch_pt");
HAnimSite140->setTranslation(new float[3]{0.0034,0.8266,0.0257});
//HAnimSite visualization shape
CTouchSensor* TouchSensor141 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor141->setDescription("HAnimSite crotch");
HAnimSite140->addChildren(*TouchSensor141);

CShape* Shape142 = (CShape *)(m_pScene.createNode("Shape"));
Shape142->setUSE("HAnimSiteShape");
HAnimSite140->addChildren(*Shape142);

HAnimSegment64->addChildren(*HAnimSite140);

HAnimJoint63->addChildren(*HAnimSegment64);

CHAnimJoint* HAnimJoint143 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint143->setName("l_hip");
HAnimJoint143->setDEF("hanim_l_hip");
HAnimJoint143->setCenter(new float[3]{0.0961,0.9124,-0.0001});
<<<<<<< HEAD
HAnimJoint143->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint143->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint143->setUlimit(new float[3]{0,0,0});
HAnimJoint143->setLlimit(new float[3]{0,0,0});
HAnimJoint143->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment144 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment144->setName("l_thigh");
HAnimSegment144->setDEF("hanim_l_thigh");
//<HAnimJoint name='l_hip'/> visualization sphere is placed within <HAnimSegment name='l_thigh'/>
CTouchSensor* TouchSensor145 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor145->setDescription("HAnimJoint l_hip, HAnimSegment l_thigh");
HAnimSegment144->addChildren(*TouchSensor145);

CTransform* Transform146 = (CTransform *)(m_pScene.createNode("Transform"));
Transform146->setTranslation(new float[3]{0.0961,0.9124,-0.0001});
CShape* Shape147 = (CShape *)(m_pScene.createNode("Shape"));
Shape147->setUSE("HAnimJointShape");
Transform146->addChildren(*Shape147);

HAnimSegment144->addChildren(*Transform146);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_hip'/> to <HAnimJoint name='l_knee'/>
CShape* Shape148 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet149 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet149->setVertexCount(new int[1]{2});
CCoordinate* Coordinate150 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate150->setPoint(new float[6]{0.0961,0.9124,-0.0001,0.104,0.4867,0.0308});
LineSet149->setCoord(*Coordinate150);

CColorRGBA* ColorRGBA151 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA151->setUSE("HAnimSegmentLineColorRGBA");
LineSet149->setColor(*ColorRGBA151);

Shape148->setGeometry(LineSet149);

HAnimSegment144->addChildren(*Shape148);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_knee_crease'/>
CShape* Shape152 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet153 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet153->setVertexCount(new int[1]{2});
CCoordinate* Coordinate154 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate154->setPoint(new float[6]{0.0961,0.9124,-0.0001,0.0993,0.4881,-0.0309});
LineSet153->setCoord(*Coordinate154);

CColorRGBA* ColorRGBA155 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA155->setUSE("HAnimSiteLineColorRGBA");
LineSet153->setColor(*ColorRGBA155);

Shape152->setGeometry(LineSet153);

HAnimSegment144->addChildren(*Shape152);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_lateral_epicn'/>
CShape* Shape156 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet157 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet157->setVertexCount(new int[1]{2});
CCoordinate* Coordinate158 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate158->setPoint(new float[6]{0.0961,0.9124,-0.0001,0.1598,0.4967,0.0297});
LineSet157->setCoord(*Coordinate158);

CColorRGBA* ColorRGBA159 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA159->setUSE("HAnimSiteLineColorRGBA");
LineSet157->setColor(*ColorRGBA159);

Shape156->setGeometry(LineSet157);

HAnimSegment144->addChildren(*Shape156);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_medial_epicn'/>
CShape* Shape160 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet161 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet161->setVertexCount(new int[1]{2});
CCoordinate* Coordinate162 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate162->setPoint(new float[6]{0.0961,0.9124,-0.0001,0.0398,0.4946,0.0303});
LineSet161->setCoord(*Coordinate162);

CColorRGBA* ColorRGBA163 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA163->setUSE("HAnimSiteLineColorRGBA");
LineSet161->setColor(*ColorRGBA163);

Shape160->setGeometry(LineSet161);

HAnimSegment144->addChildren(*Shape160);

CHAnimSite* HAnimSite164 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite164->setName("l_knee_crease_pt");
HAnimSite164->setDEF("hanim_l_knee_crease_pt");
HAnimSite164->setTranslation(new float[3]{0.0993,0.4881,-0.0309});
//HAnimSite visualization shape
CTouchSensor* TouchSensor165 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor165->setDescription("HAnimSite l_knee_crease");
HAnimSite164->addChildren(*TouchSensor165);

CShape* Shape166 = (CShape *)(m_pScene.createNode("Shape"));
Shape166->setUSE("HAnimSiteShape");
HAnimSite164->addChildren(*Shape166);

HAnimSegment144->addChildren(*HAnimSite164);

CHAnimSite* HAnimSite167 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite167->setName("l_femoral_lateral_epicn_pt");
HAnimSite167->setDEF("hanim_l_femoral_lateral_epicn_pt");
HAnimSite167->setTranslation(new float[3]{0.1598,0.4967,0.0297});
//HAnimSite visualization shape
CTouchSensor* TouchSensor168 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor168->setDescription("HAnimSite l_femoral_lateral_epicn");
HAnimSite167->addChildren(*TouchSensor168);

CShape* Shape169 = (CShape *)(m_pScene.createNode("Shape"));
Shape169->setUSE("HAnimSiteShape");
HAnimSite167->addChildren(*Shape169);

HAnimSegment144->addChildren(*HAnimSite167);

CHAnimSite* HAnimSite170 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite170->setName("l_femoral_medial_epicn_pt");
HAnimSite170->setDEF("hanim_l_femoral_medial_epicn_pt");
HAnimSite170->setTranslation(new float[3]{0.0398,0.4946,0.0303});
//HAnimSite visualization shape
CTouchSensor* TouchSensor171 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor171->setDescription("HAnimSite l_femoral_medial_epicn");
HAnimSite170->addChildren(*TouchSensor171);

CShape* Shape172 = (CShape *)(m_pScene.createNode("Shape"));
Shape172->setUSE("HAnimSiteShape");
HAnimSite170->addChildren(*Shape172);

HAnimSegment144->addChildren(*HAnimSite170);

HAnimJoint143->addChildren(*HAnimSegment144);

CHAnimJoint* HAnimJoint173 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint173->setName("l_knee");
HAnimJoint173->setDEF("hanim_l_knee");
HAnimJoint173->setCenter(new float[3]{0.104,0.4867,0.0308});
<<<<<<< HEAD
HAnimJoint173->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint173->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint173->setUlimit(new float[3]{0,0,0});
HAnimJoint173->setLlimit(new float[3]{0,0,0});
HAnimJoint173->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment174 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment174->setName("l_calf");
HAnimSegment174->setDEF("hanim_l_calf");
//<HAnimJoint name='l_knee'/> visualization sphere is placed within <HAnimSegment name='l_calf'/>
CTouchSensor* TouchSensor175 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor175->setDescription("HAnimJoint l_knee, HAnimSegment l_calf");
HAnimSegment174->addChildren(*TouchSensor175);

CTransform* Transform176 = (CTransform *)(m_pScene.createNode("Transform"));
Transform176->setTranslation(new float[3]{0.104,0.4867,0.0308});
CShape* Shape177 = (CShape *)(m_pScene.createNode("Shape"));
Shape177->setUSE("HAnimJointShape");
Transform176->addChildren(*Shape177);

HAnimSegment174->addChildren(*Transform176);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_knee'/> to <HAnimJoint name='l_ankle'/>
CShape* Shape178 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet179 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet179->setVertexCount(new int[1]{2});
CCoordinate* Coordinate180 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate180->setPoint(new float[6]{0.104,0.4867,0.0308,0.1101,0.0656,-0.0736});
LineSet179->setCoord(*Coordinate180);

CColorRGBA* ColorRGBA181 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA181->setUSE("HAnimSegmentLineColorRGBA");
LineSet179->setColor(*ColorRGBA181);

Shape178->setGeometry(LineSet179);

HAnimSegment174->addChildren(*Shape178);

HAnimJoint173->addChildren(*HAnimSegment174);

CHAnimJoint* HAnimJoint182 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint182->setName("l_ankle");
HAnimJoint182->setDEF("hanim_l_ankle");
HAnimJoint182->setCenter(new float[3]{0.1101,0.0656,-0.0736});
<<<<<<< HEAD
HAnimJoint182->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint182->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint182->setUlimit(new float[3]{0,0,0});
HAnimJoint182->setLlimit(new float[3]{0,0,0});
HAnimJoint182->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment183 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment183->setName("l_hindfoot");
HAnimSegment183->setDEF("hanim_l_hindfoot");
//<HAnimJoint name='l_ankle'/> visualization sphere is placed within <HAnimSegment name='l_hindfoot'/>
CTouchSensor* TouchSensor184 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor184->setDescription("HAnimJoint l_ankle, HAnimSegment l_hindfoot");
HAnimSegment183->addChildren(*TouchSensor184);

CTransform* Transform185 = (CTransform *)(m_pScene.createNode("Transform"));
Transform185->setTranslation(new float[3]{0.1101,0.0656,-0.0736});
CShape* Shape186 = (CShape *)(m_pScene.createNode("Shape"));
Shape186->setUSE("HAnimJointShape");
Transform185->addChildren(*Shape186);

HAnimSegment183->addChildren(*Transform185);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ankle'/> to <HAnimJoint name='l_subtalar'/>
CShape* Shape187 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet188 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet188->setVertexCount(new int[1]{2});
CCoordinate* Coordinate189 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate189->setPoint(new float[6]{0.1101,0.0656,-0.0736,0.1086,0.0001,-0.0368});
LineSet188->setCoord(*Coordinate189);

CColorRGBA* ColorRGBA190 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA190->setUSE("HAnimSegmentLineColorRGBA");
LineSet188->setColor(*ColorRGBA190);

Shape187->setGeometry(LineSet188);

HAnimSegment183->addChildren(*Shape187);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_lateral_malleolus'/>
CShape* Shape191 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet192 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet192->setVertexCount(new int[1]{2});
CCoordinate* Coordinate193 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate193->setPoint(new float[6]{0.1101,0.0656,-0.0736,0.1308,0.0597,-0.1032});
LineSet192->setCoord(*Coordinate193);

CColorRGBA* ColorRGBA194 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA194->setUSE("HAnimSiteLineColorRGBA");
LineSet192->setColor(*ColorRGBA194);

Shape191->setGeometry(LineSet192);

HAnimSegment183->addChildren(*Shape191);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_medial_malleolus'/>
CShape* Shape195 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet196 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet196->setVertexCount(new int[1]{2});
CCoordinate* Coordinate197 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate197->setPoint(new float[6]{0.1101,0.0656,-0.0736,0.089,0.0716,-0.0881});
LineSet196->setCoord(*Coordinate197);

CColorRGBA* ColorRGBA198 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA198->setUSE("HAnimSiteLineColorRGBA");
LineSet196->setColor(*ColorRGBA198);

Shape195->setGeometry(LineSet196);

HAnimSegment183->addChildren(*Shape195);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_sphyrion'/>
CShape* Shape199 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet200 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet200->setVertexCount(new int[1]{2});
CCoordinate* Coordinate201 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate201->setPoint(new float[6]{0.1101,0.0656,-0.0736,0.089,0.0575,-0.0943});
LineSet200->setCoord(*Coordinate201);

CColorRGBA* ColorRGBA202 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA202->setUSE("HAnimSiteLineColorRGBA");
LineSet200->setColor(*ColorRGBA202);

Shape199->setGeometry(LineSet200);

HAnimSegment183->addChildren(*Shape199);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_calcaneous_post'/>
CShape* Shape203 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet204 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet204->setVertexCount(new int[1]{2});
CCoordinate* Coordinate205 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate205->setPoint(new float[6]{0.1101,0.0656,-0.0736,0.0974,0.0259,-0.1171});
LineSet204->setCoord(*Coordinate205);

CColorRGBA* ColorRGBA206 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA206->setUSE("HAnimSiteLineColorRGBA");
LineSet204->setColor(*ColorRGBA206);

Shape203->setGeometry(LineSet204);

HAnimSegment183->addChildren(*Shape203);

CHAnimSite* HAnimSite207 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite207->setName("l_lateral_malleolus_pt");
HAnimSite207->setDEF("hanim_l_lateral_malleolus_pt");
HAnimSite207->setTranslation(new float[3]{0.1308,0.0597,-0.1032});
//HAnimSite visualization shape
CTouchSensor* TouchSensor208 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor208->setDescription("HAnimSite l_lateral_malleolus");
HAnimSite207->addChildren(*TouchSensor208);

CShape* Shape209 = (CShape *)(m_pScene.createNode("Shape"));
Shape209->setUSE("HAnimSiteShape");
HAnimSite207->addChildren(*Shape209);

HAnimSegment183->addChildren(*HAnimSite207);

CHAnimSite* HAnimSite210 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite210->setName("l_medial_malleolus_pt");
HAnimSite210->setDEF("hanim_l_medial_malleolus_pt");
HAnimSite210->setTranslation(new float[3]{0.089,0.0716,-0.0881});
//HAnimSite visualization shape
CTouchSensor* TouchSensor211 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor211->setDescription("HAnimSite l_medial_malleolus");
HAnimSite210->addChildren(*TouchSensor211);

CShape* Shape212 = (CShape *)(m_pScene.createNode("Shape"));
Shape212->setUSE("HAnimSiteShape");
HAnimSite210->addChildren(*Shape212);

HAnimSegment183->addChildren(*HAnimSite210);

CHAnimSite* HAnimSite213 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite213->setName("l_sphyrion_pt");
HAnimSite213->setDEF("hanim_l_sphyrion_pt");
HAnimSite213->setTranslation(new float[3]{0.089,0.0575,-0.0943});
//HAnimSite visualization shape
CTouchSensor* TouchSensor214 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor214->setDescription("HAnimSite l_sphyrion");
HAnimSite213->addChildren(*TouchSensor214);

CShape* Shape215 = (CShape *)(m_pScene.createNode("Shape"));
Shape215->setUSE("HAnimSiteShape");
HAnimSite213->addChildren(*Shape215);

HAnimSegment183->addChildren(*HAnimSite213);

CHAnimSite* HAnimSite216 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite216->setName("l_calcaneous_post_pt");
HAnimSite216->setDEF("hanim_l_calcaneous_post_pt");
HAnimSite216->setTranslation(new float[3]{0.0974,0.0259,-0.1171});
//HAnimSite visualization shape
CTouchSensor* TouchSensor217 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor217->setDescription("HAnimSite l_calcaneous_post");
HAnimSite216->addChildren(*TouchSensor217);

CShape* Shape218 = (CShape *)(m_pScene.createNode("Shape"));
Shape218->setUSE("HAnimSiteShape");
HAnimSite216->addChildren(*Shape218);

HAnimSegment183->addChildren(*HAnimSite216);

HAnimJoint182->addChildren(*HAnimSegment183);

CHAnimJoint* HAnimJoint219 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint219->setName("l_subtalar");
HAnimJoint219->setDEF("hanim_l_subtalar");
HAnimJoint219->setCenter(new float[3]{0.1086,0.0001,-0.0368});
<<<<<<< HEAD
HAnimJoint219->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint219->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint219->setUlimit(new float[3]{0,0,0});
HAnimJoint219->setLlimit(new float[3]{0,0,0});
HAnimJoint219->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment220 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment220->setName("l_midproximal");
HAnimSegment220->setDEF("hanim_l_midproximal");
//<HAnimJoint name='l_subtalar'/> visualization sphere is placed within <HAnimSegment name='l_midproximal'/>
CTouchSensor* TouchSensor221 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor221->setDescription("HAnimJoint l_subtalar, HAnimSegment l_midproximal");
HAnimSegment220->addChildren(*TouchSensor221);

CTransform* Transform222 = (CTransform *)(m_pScene.createNode("Transform"));
Transform222->setTranslation(new float[3]{0.1086,0.0001,-0.0368});
CShape* Shape223 = (CShape *)(m_pScene.createNode("Shape"));
Shape223->setUSE("HAnimJointShape");
Transform222->addChildren(*Shape223);

HAnimSegment220->addChildren(*Transform222);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_subtalar'/> to <HAnimJoint name='l_midtarsal'/>
CShape* Shape224 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet225 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet225->setVertexCount(new int[1]{2});
CCoordinate* Coordinate226 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate226->setPoint(new float[6]{0.1086,0.0001,-0.0368,0.1086,0.0001,0.0368});
LineSet225->setCoord(*Coordinate226);

CColorRGBA* ColorRGBA227 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA227->setUSE("HAnimSegmentLineColorRGBA");
LineSet225->setColor(*ColorRGBA227);

Shape224->setGeometry(LineSet225);

HAnimSegment220->addChildren(*Shape224);

HAnimJoint219->addChildren(*HAnimSegment220);

CHAnimJoint* HAnimJoint228 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint228->setName("l_midtarsal");
HAnimJoint228->setDEF("hanim_l_midtarsal");
HAnimJoint228->setCenter(new float[3]{0.1086,0.0001,0.0368});
<<<<<<< HEAD
HAnimJoint228->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint228->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint228->setUlimit(new float[3]{0,0,0});
HAnimJoint228->setLlimit(new float[3]{0,0,0});
HAnimJoint228->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment229 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment229->setName("l_middistal");
HAnimSegment229->setDEF("hanim_l_middistal");
//<HAnimJoint name='l_midtarsal'/> visualization sphere is placed within <HAnimSegment name='l_middistal'/>
CTouchSensor* TouchSensor230 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor230->setDescription("HAnimJoint l_midtarsal, HAnimSegment l_middistal");
HAnimSegment229->addChildren(*TouchSensor230);

CTransform* Transform231 = (CTransform *)(m_pScene.createNode("Transform"));
Transform231->setTranslation(new float[3]{0.1086,0.0001,0.0368});
CShape* Shape232 = (CShape *)(m_pScene.createNode("Shape"));
Shape232->setUSE("HAnimJointShape");
Transform231->addChildren(*Shape232);

HAnimSegment229->addChildren(*Transform231);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_midtarsal'/> to <HAnimJoint name='l_metatarsal'/>
CShape* Shape233 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet234 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet234->setVertexCount(new int[1]{2});
CCoordinate* Coordinate235 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate235->setPoint(new float[6]{0.1086,0.0001,0.0368,0.1086,0,0.0762});
LineSet234->setCoord(*Coordinate235);

CColorRGBA* ColorRGBA236 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA236->setUSE("HAnimSegmentLineColorRGBA");
LineSet234->setColor(*ColorRGBA236);

Shape233->setGeometry(LineSet234);

HAnimSegment229->addChildren(*Shape233);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_midtarsal'/> to <HAnimSite name='l_metatarsal_pha1'/>
CShape* Shape237 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet238 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet238->setVertexCount(new int[1]{2});
CCoordinate* Coordinate239 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate239->setPoint(new float[6]{0.1086,0.0001,0.0368,0.0816,0.0232,0.0106});
LineSet238->setCoord(*Coordinate239);

CColorRGBA* ColorRGBA240 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA240->setUSE("HAnimSiteLineColorRGBA");
LineSet238->setColor(*ColorRGBA240);

Shape237->setGeometry(LineSet238);

HAnimSegment229->addChildren(*Shape237);

CHAnimSite* HAnimSite241 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite241->setName("l_metatarsal_pha1_pt");
HAnimSite241->setDEF("hanim_l_metatarsal_pha1_pt");
HAnimSite241->setTranslation(new float[3]{0.0816,0.0232,0.0106});
//HAnimSite visualization shape
CTouchSensor* TouchSensor242 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor242->setDescription("HAnimSite l_metatarsal_pha1");
HAnimSite241->addChildren(*TouchSensor242);

CShape* Shape243 = (CShape *)(m_pScene.createNode("Shape"));
Shape243->setUSE("HAnimSiteShape");
HAnimSite241->addChildren(*Shape243);

HAnimSegment229->addChildren(*HAnimSite241);

HAnimJoint228->addChildren(*HAnimSegment229);

CHAnimJoint* HAnimJoint244 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint244->setName("l_metatarsal");
HAnimJoint244->setDEF("hanim_l_metatarsal");
HAnimJoint244->setCenter(new float[3]{0.1086,0,0.0762});
<<<<<<< HEAD
HAnimJoint244->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint244->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint244->setUlimit(new float[3]{0,0,0});
HAnimJoint244->setLlimit(new float[3]{0,0,0});
HAnimJoint244->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment245 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment245->setName("l_forefoot");
HAnimSegment245->setDEF("hanim_l_forefoot");
//<HAnimJoint name='l_metatarsal'/> visualization sphere is placed within <HAnimSegment name='l_forefoot'/>
CTouchSensor* TouchSensor246 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor246->setDescription("HAnimJoint l_metatarsal, HAnimSegment l_forefoot");
HAnimSegment245->addChildren(*TouchSensor246);

CTransform* Transform247 = (CTransform *)(m_pScene.createNode("Transform"));
Transform247->setTranslation(new float[3]{0.1086,0,0.0762});
CShape* Shape248 = (CShape *)(m_pScene.createNode("Shape"));
Shape248->setUSE("HAnimJointShape");
Transform247->addChildren(*Shape248);

HAnimSegment245->addChildren(*Transform247);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_forefoot_tip'/>
CShape* Shape249 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet250 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet250->setVertexCount(new int[1]{2});
CCoordinate* Coordinate251 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate251->setPoint(new float[6]{0.1086,0,0.0762,0.1354,0.0016,0.1476});
LineSet250->setCoord(*Coordinate251);

CColorRGBA* ColorRGBA252 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA252->setUSE("HAnimSiteLineColorRGBA");
LineSet250->setColor(*ColorRGBA252);

Shape249->setGeometry(LineSet250);

HAnimSegment245->addChildren(*Shape249);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_metatarsal_pha5'/>
CShape* Shape253 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet254 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet254->setVertexCount(new int[1]{2});
CCoordinate* Coordinate255 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate255->setPoint(new float[6]{0.1086,0,0.0762,0.1825,0.007,0.0928});
LineSet254->setCoord(*Coordinate255);

CColorRGBA* ColorRGBA256 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA256->setUSE("HAnimSiteLineColorRGBA");
LineSet254->setColor(*ColorRGBA256);

Shape253->setGeometry(LineSet254);

HAnimSegment245->addChildren(*Shape253);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_digit2'/>
CShape* Shape257 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet258 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet258->setVertexCount(new int[1]{2});
CCoordinate* Coordinate259 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate259->setPoint(new float[6]{0.1086,0,0.0762,0.1195,0.0079,0.1433});
LineSet258->setCoord(*Coordinate259);

CColorRGBA* ColorRGBA260 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA260->setUSE("HAnimSiteLineColorRGBA");
LineSet258->setColor(*ColorRGBA260);

Shape257->setGeometry(LineSet258);

HAnimSegment245->addChildren(*Shape257);

CHAnimSite* HAnimSite261 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite261->setName("l_forefoot_tip");
HAnimSite261->setDEF("hanim_l_forefoot_tip");
HAnimSite261->setTranslation(new float[3]{0.1354,0.0016,0.1476});
//HAnimSite visualization shape
CTouchSensor* TouchSensor262 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor262->setDescription("HAnimSite l_forefoot_tip");
HAnimSite261->addChildren(*TouchSensor262);

CShape* Shape263 = (CShape *)(m_pScene.createNode("Shape"));
Shape263->setUSE("HAnimSiteShape");
HAnimSite261->addChildren(*Shape263);

HAnimSegment245->addChildren(*HAnimSite261);

CHAnimSite* HAnimSite264 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite264->setName("l_metatarsal_pha5_pt");
HAnimSite264->setDEF("hanim_l_metatarsal_pha5_pt");
HAnimSite264->setTranslation(new float[3]{0.1825,0.007,0.0928});
//HAnimSite visualization shape
CTouchSensor* TouchSensor265 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor265->setDescription("HAnimSite l_metatarsal_pha5");
HAnimSite264->addChildren(*TouchSensor265);

CShape* Shape266 = (CShape *)(m_pScene.createNode("Shape"));
Shape266->setUSE("HAnimSiteShape");
HAnimSite264->addChildren(*Shape266);

HAnimSegment245->addChildren(*HAnimSite264);

CHAnimSite* HAnimSite267 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite267->setName("l_digit2_pt");
HAnimSite267->setDEF("hanim_l_digit2_pt");
HAnimSite267->setTranslation(new float[3]{0.1195,0.0079,0.1433});
//HAnimSite visualization shape
CTouchSensor* TouchSensor268 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor268->setDescription("HAnimSite l_digit2");
HAnimSite267->addChildren(*TouchSensor268);

CShape* Shape269 = (CShape *)(m_pScene.createNode("Shape"));
Shape269->setUSE("HAnimSiteShape");
HAnimSite267->addChildren(*Shape269);

HAnimSegment245->addChildren(*HAnimSite267);

HAnimJoint244->addChildren(*HAnimSegment245);

HAnimJoint228->addChildren(*HAnimJoint244);

HAnimJoint219->addChildren(*HAnimJoint228);

HAnimJoint182->addChildren(*HAnimJoint219);

HAnimJoint173->addChildren(*HAnimJoint182);

HAnimJoint143->addChildren(*HAnimJoint173);

HAnimJoint63->addChildren(*HAnimJoint143);

CHAnimJoint* HAnimJoint270 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint270->setName("r_hip");
HAnimJoint270->setDEF("hanim_r_hip");
HAnimJoint270->setCenter(new float[3]{-0.0961,0.9124,-0.0001});
<<<<<<< HEAD
HAnimJoint270->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint270->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint270->setUlimit(new float[3]{0,0,0});
HAnimJoint270->setLlimit(new float[3]{0,0,0});
HAnimJoint270->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment271 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment271->setName("r_thigh");
HAnimSegment271->setDEF("hanim_r_thigh");
//<HAnimJoint name='r_hip'/> visualization sphere is placed within <HAnimSegment name='r_thigh'/>
CTouchSensor* TouchSensor272 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor272->setDescription("HAnimJoint r_hip, HAnimSegment r_thigh");
HAnimSegment271->addChildren(*TouchSensor272);

CTransform* Transform273 = (CTransform *)(m_pScene.createNode("Transform"));
Transform273->setTranslation(new float[3]{-0.0961,0.9124,-0.0001});
CShape* Shape274 = (CShape *)(m_pScene.createNode("Shape"));
Shape274->setUSE("HAnimJointShape");
Transform273->addChildren(*Shape274);

HAnimSegment271->addChildren(*Transform273);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_hip'/> to <HAnimJoint name='r_knee'/>
CShape* Shape275 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet276 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet276->setVertexCount(new int[1]{2});
CCoordinate* Coordinate277 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate277->setPoint(new float[6]{-0.0961,0.9124,-0.0001,-0.104,0.4867,0.0308});
LineSet276->setCoord(*Coordinate277);

CColorRGBA* ColorRGBA278 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA278->setUSE("HAnimSegmentLineColorRGBA");
LineSet276->setColor(*ColorRGBA278);

Shape275->setGeometry(LineSet276);

HAnimSegment271->addChildren(*Shape275);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_knee_crease'/>
CShape* Shape279 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet280 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet280->setVertexCount(new int[1]{2});
CCoordinate* Coordinate281 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate281->setPoint(new float[6]{-0.0961,0.9124,-0.0001,-0.0825,0.4932,-0.0326});
LineSet280->setCoord(*Coordinate281);

CColorRGBA* ColorRGBA282 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA282->setUSE("HAnimSiteLineColorRGBA");
LineSet280->setColor(*ColorRGBA282);

Shape279->setGeometry(LineSet280);

HAnimSegment271->addChildren(*Shape279);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_lateral_epicn'/>
CShape* Shape283 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet284 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet284->setVertexCount(new int[1]{2});
CCoordinate* Coordinate285 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate285->setPoint(new float[6]{-0.0961,0.9124,-0.0001,-0.1421,0.4992,0.031});
LineSet284->setCoord(*Coordinate285);

CColorRGBA* ColorRGBA286 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA286->setUSE("HAnimSiteLineColorRGBA");
LineSet284->setColor(*ColorRGBA286);

Shape283->setGeometry(LineSet284);

HAnimSegment271->addChildren(*Shape283);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_medial_epicn'/>
CShape* Shape287 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet288 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet288->setVertexCount(new int[1]{2});
CCoordinate* Coordinate289 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate289->setPoint(new float[6]{-0.0961,0.9124,-0.0001,-0.0221,0.5014,0.0289});
LineSet288->setCoord(*Coordinate289);

CColorRGBA* ColorRGBA290 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA290->setUSE("HAnimSiteLineColorRGBA");
LineSet288->setColor(*ColorRGBA290);

Shape287->setGeometry(LineSet288);

HAnimSegment271->addChildren(*Shape287);

CHAnimSite* HAnimSite291 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite291->setName("r_knee_crease_pt");
HAnimSite291->setDEF("hanim_r_knee_crease_pt");
HAnimSite291->setTranslation(new float[3]{-0.0825,0.4932,-0.0326});
//HAnimSite visualization shape
CTouchSensor* TouchSensor292 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor292->setDescription("HAnimSite r_knee_crease");
HAnimSite291->addChildren(*TouchSensor292);

CShape* Shape293 = (CShape *)(m_pScene.createNode("Shape"));
Shape293->setUSE("HAnimSiteShape");
HAnimSite291->addChildren(*Shape293);

HAnimSegment271->addChildren(*HAnimSite291);

CHAnimSite* HAnimSite294 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite294->setName("r_femoral_lateral_epicn_pt");
HAnimSite294->setDEF("hanim_r_femoral_lateral_epicn_pt");
HAnimSite294->setTranslation(new float[3]{-0.1421,0.4992,0.031});
//HAnimSite visualization shape
CTouchSensor* TouchSensor295 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor295->setDescription("HAnimSite r_femoral_lateral_epicn");
HAnimSite294->addChildren(*TouchSensor295);

CShape* Shape296 = (CShape *)(m_pScene.createNode("Shape"));
Shape296->setUSE("HAnimSiteShape");
HAnimSite294->addChildren(*Shape296);

HAnimSegment271->addChildren(*HAnimSite294);

CHAnimSite* HAnimSite297 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite297->setName("r_femoral_medial_epicn_pt");
HAnimSite297->setDEF("hanim_r_femoral_medial_epicn_pt");
HAnimSite297->setTranslation(new float[3]{-0.0221,0.5014,0.0289});
//HAnimSite visualization shape
CTouchSensor* TouchSensor298 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor298->setDescription("HAnimSite r_femoral_medial_epicn");
HAnimSite297->addChildren(*TouchSensor298);

CShape* Shape299 = (CShape *)(m_pScene.createNode("Shape"));
Shape299->setUSE("HAnimSiteShape");
HAnimSite297->addChildren(*Shape299);

HAnimSegment271->addChildren(*HAnimSite297);

HAnimJoint270->addChildren(*HAnimSegment271);

CHAnimJoint* HAnimJoint300 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint300->setName("r_knee");
HAnimJoint300->setDEF("hanim_r_knee");
HAnimJoint300->setCenter(new float[3]{-0.104,0.4867,0.0308});
<<<<<<< HEAD
HAnimJoint300->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint300->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint300->setUlimit(new float[3]{0,0,0});
HAnimJoint300->setLlimit(new float[3]{0,0,0});
HAnimJoint300->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment301 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment301->setName("r_calf");
HAnimSegment301->setDEF("hanim_r_calf");
//<HAnimJoint name='r_knee'/> visualization sphere is placed within <HAnimSegment name='r_calf'/>
CTouchSensor* TouchSensor302 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor302->setDescription("HAnimJoint r_knee, HAnimSegment r_calf");
HAnimSegment301->addChildren(*TouchSensor302);

CTransform* Transform303 = (CTransform *)(m_pScene.createNode("Transform"));
Transform303->setTranslation(new float[3]{-0.104,0.4867,0.0308});
CShape* Shape304 = (CShape *)(m_pScene.createNode("Shape"));
Shape304->setUSE("HAnimJointShape");
Transform303->addChildren(*Shape304);

HAnimSegment301->addChildren(*Transform303);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_knee'/> to <HAnimJoint name='r_ankle'/>
CShape* Shape305 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet306 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet306->setVertexCount(new int[1]{2});
CCoordinate* Coordinate307 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate307->setPoint(new float[6]{-0.104,0.4867,0.0308,-0.1101,0.0656,-0.0736});
LineSet306->setCoord(*Coordinate307);

CColorRGBA* ColorRGBA308 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA308->setUSE("HAnimSegmentLineColorRGBA");
LineSet306->setColor(*ColorRGBA308);

Shape305->setGeometry(LineSet306);

HAnimSegment301->addChildren(*Shape305);

HAnimJoint300->addChildren(*HAnimSegment301);

CHAnimJoint* HAnimJoint309 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint309->setName("r_ankle");
HAnimJoint309->setDEF("hanim_r_ankle");
HAnimJoint309->setCenter(new float[3]{-0.1101,0.0656,-0.0736});
<<<<<<< HEAD
HAnimJoint309->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint309->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint309->setUlimit(new float[3]{0,0,0});
HAnimJoint309->setLlimit(new float[3]{0,0,0});
HAnimJoint309->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment310 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment310->setName("r_hindfoot");
HAnimSegment310->setDEF("hanim_r_hindfoot");
//<HAnimJoint name='r_ankle'/> visualization sphere is placed within <HAnimSegment name='r_hindfoot'/>
CTouchSensor* TouchSensor311 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor311->setDescription("HAnimJoint r_ankle, HAnimSegment r_hindfoot");
HAnimSegment310->addChildren(*TouchSensor311);

CTransform* Transform312 = (CTransform *)(m_pScene.createNode("Transform"));
Transform312->setTranslation(new float[3]{-0.1101,0.0656,-0.0736});
CShape* Shape313 = (CShape *)(m_pScene.createNode("Shape"));
Shape313->setUSE("HAnimJointShape");
Transform312->addChildren(*Shape313);

HAnimSegment310->addChildren(*Transform312);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ankle'/> to <HAnimJoint name='r_subtalar'/>
CShape* Shape314 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet315 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet315->setVertexCount(new int[1]{2});
CCoordinate* Coordinate316 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate316->setPoint(new float[6]{-0.1101,0.0656,-0.0736,-0.1086,0.0001,-0.0368});
LineSet315->setCoord(*Coordinate316);

CColorRGBA* ColorRGBA317 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA317->setUSE("HAnimSegmentLineColorRGBA");
LineSet315->setColor(*ColorRGBA317);

Shape314->setGeometry(LineSet315);

HAnimSegment310->addChildren(*Shape314);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_lateral_malleolus'/>
CShape* Shape318 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet319 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet319->setVertexCount(new int[1]{2});
CCoordinate* Coordinate320 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate320->setPoint(new float[6]{-0.1101,0.0656,-0.0736,-0.1006,0.0658,-0.1075});
LineSet319->setCoord(*Coordinate320);

CColorRGBA* ColorRGBA321 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA321->setUSE("HAnimSiteLineColorRGBA");
LineSet319->setColor(*ColorRGBA321);

Shape318->setGeometry(LineSet319);

HAnimSegment310->addChildren(*Shape318);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_medial_malleolus'/>
CShape* Shape322 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet323 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet323->setVertexCount(new int[1]{2});
CCoordinate* Coordinate324 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate324->setPoint(new float[6]{-0.1101,0.0656,-0.0736,-0.0591,0.076,-0.0928});
LineSet323->setCoord(*Coordinate324);

CColorRGBA* ColorRGBA325 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA325->setUSE("HAnimSiteLineColorRGBA");
LineSet323->setColor(*ColorRGBA325);

Shape322->setGeometry(LineSet323);

HAnimSegment310->addChildren(*Shape322);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_sphyrion'/>
CShape* Shape326 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet327 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet327->setVertexCount(new int[1]{2});
CCoordinate* Coordinate328 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate328->setPoint(new float[6]{-0.1101,0.0656,-0.0736,-0.0603,0.061,-0.1002});
LineSet327->setCoord(*Coordinate328);

CColorRGBA* ColorRGBA329 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA329->setUSE("HAnimSiteLineColorRGBA");
LineSet327->setColor(*ColorRGBA329);

Shape326->setGeometry(LineSet327);

HAnimSegment310->addChildren(*Shape326);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_calcaneous_post'/>
CShape* Shape330 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet331 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet331->setVertexCount(new int[1]{2});
CCoordinate* Coordinate332 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate332->setPoint(new float[6]{-0.1101,0.0656,-0.0736,-0.0692,0.0297,-0.1221});
LineSet331->setCoord(*Coordinate332);

CColorRGBA* ColorRGBA333 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA333->setUSE("HAnimSiteLineColorRGBA");
LineSet331->setColor(*ColorRGBA333);

Shape330->setGeometry(LineSet331);

HAnimSegment310->addChildren(*Shape330);

CHAnimSite* HAnimSite334 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite334->setName("r_lateral_malleolus_pt");
HAnimSite334->setDEF("hanim_r_lateral_malleolus_pt");
HAnimSite334->setTranslation(new float[3]{-0.1006,0.0658,-0.1075});
//HAnimSite visualization shape
CTouchSensor* TouchSensor335 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor335->setDescription("HAnimSite r_lateral_malleolus");
HAnimSite334->addChildren(*TouchSensor335);

CShape* Shape336 = (CShape *)(m_pScene.createNode("Shape"));
Shape336->setUSE("HAnimSiteShape");
HAnimSite334->addChildren(*Shape336);

HAnimSegment310->addChildren(*HAnimSite334);

CHAnimSite* HAnimSite337 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite337->setName("r_medial_malleolus_pt");
HAnimSite337->setDEF("hanim_r_medial_malleolus_pt");
HAnimSite337->setTranslation(new float[3]{-0.0591,0.076,-0.0928});
//HAnimSite visualization shape
CTouchSensor* TouchSensor338 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor338->setDescription("HAnimSite r_medial_malleolus");
HAnimSite337->addChildren(*TouchSensor338);

CShape* Shape339 = (CShape *)(m_pScene.createNode("Shape"));
Shape339->setUSE("HAnimSiteShape");
HAnimSite337->addChildren(*Shape339);

HAnimSegment310->addChildren(*HAnimSite337);

CHAnimSite* HAnimSite340 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite340->setName("r_sphyrion_pt");
HAnimSite340->setDEF("hanim_r_sphyrion_pt");
HAnimSite340->setTranslation(new float[3]{-0.0603,0.061,-0.1002});
//HAnimSite visualization shape
CTouchSensor* TouchSensor341 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor341->setDescription("HAnimSite r_sphyrion");
HAnimSite340->addChildren(*TouchSensor341);

CShape* Shape342 = (CShape *)(m_pScene.createNode("Shape"));
Shape342->setUSE("HAnimSiteShape");
HAnimSite340->addChildren(*Shape342);

HAnimSegment310->addChildren(*HAnimSite340);

CHAnimSite* HAnimSite343 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite343->setName("r_calcaneous_post_pt");
HAnimSite343->setDEF("hanim_r_calcaneous_post_pt");
HAnimSite343->setTranslation(new float[3]{-0.0692,0.0297,-0.1221});
//HAnimSite visualization shape
CTouchSensor* TouchSensor344 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor344->setDescription("HAnimSite r_calcaneous_post");
HAnimSite343->addChildren(*TouchSensor344);

CShape* Shape345 = (CShape *)(m_pScene.createNode("Shape"));
Shape345->setUSE("HAnimSiteShape");
HAnimSite343->addChildren(*Shape345);

HAnimSegment310->addChildren(*HAnimSite343);

HAnimJoint309->addChildren(*HAnimSegment310);

CHAnimJoint* HAnimJoint346 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint346->setName("r_subtalar");
HAnimJoint346->setDEF("hanim_r_subtalar");
HAnimJoint346->setCenter(new float[3]{-0.1086,0.0001,-0.0368});
<<<<<<< HEAD
HAnimJoint346->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint346->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint346->setUlimit(new float[3]{0,0,0});
HAnimJoint346->setLlimit(new float[3]{0,0,0});
HAnimJoint346->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment347 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment347->setName("r_midproximal");
HAnimSegment347->setDEF("hanim_r_midproximal");
//<HAnimJoint name='r_subtalar'/> visualization sphere is placed within <HAnimSegment name='r_midproximal'/>
CTouchSensor* TouchSensor348 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor348->setDescription("HAnimJoint r_subtalar, HAnimSegment r_midproximal");
HAnimSegment347->addChildren(*TouchSensor348);

CTransform* Transform349 = (CTransform *)(m_pScene.createNode("Transform"));
Transform349->setTranslation(new float[3]{-0.1086,0.0001,-0.0368});
CShape* Shape350 = (CShape *)(m_pScene.createNode("Shape"));
Shape350->setUSE("HAnimJointShape");
Transform349->addChildren(*Shape350);

HAnimSegment347->addChildren(*Transform349);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_subtalar'/> to <HAnimJoint name='r_midtarsal'/>
CShape* Shape351 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet352 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet352->setVertexCount(new int[1]{2});
CCoordinate* Coordinate353 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate353->setPoint(new float[6]{-0.1086,0.0001,-0.0368,-0.1086,0.0001,0.0368});
LineSet352->setCoord(*Coordinate353);

CColorRGBA* ColorRGBA354 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA354->setUSE("HAnimSegmentLineColorRGBA");
LineSet352->setColor(*ColorRGBA354);

Shape351->setGeometry(LineSet352);

HAnimSegment347->addChildren(*Shape351);

HAnimJoint346->addChildren(*HAnimSegment347);

CHAnimJoint* HAnimJoint355 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint355->setName("r_midtarsal");
HAnimJoint355->setDEF("hanim_r_midtarsal");
HAnimJoint355->setCenter(new float[3]{-0.1086,0.0001,0.0368});
<<<<<<< HEAD
HAnimJoint355->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint355->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint355->setUlimit(new float[3]{0,0,0});
HAnimJoint355->setLlimit(new float[3]{0,0,0});
HAnimJoint355->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment356 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment356->setName("r_middistal");
HAnimSegment356->setDEF("hanim_r_middistal");
//<HAnimJoint name='r_midtarsal'/> visualization sphere is placed within <HAnimSegment name='r_middistal'/>
CTouchSensor* TouchSensor357 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor357->setDescription("HAnimJoint r_midtarsal, HAnimSegment r_middistal");
HAnimSegment356->addChildren(*TouchSensor357);

CTransform* Transform358 = (CTransform *)(m_pScene.createNode("Transform"));
Transform358->setTranslation(new float[3]{-0.1086,0.0001,0.0368});
CShape* Shape359 = (CShape *)(m_pScene.createNode("Shape"));
Shape359->setUSE("HAnimJointShape");
Transform358->addChildren(*Shape359);

HAnimSegment356->addChildren(*Transform358);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_midtarsal'/> to <HAnimJoint name='r_metatarsal'/>
CShape* Shape360 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet361 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet361->setVertexCount(new int[1]{2});
CCoordinate* Coordinate362 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate362->setPoint(new float[6]{-0.1086,0.0001,0.0368,-0.1086,0,0.0762});
LineSet361->setCoord(*Coordinate362);

CColorRGBA* ColorRGBA363 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA363->setUSE("HAnimSegmentLineColorRGBA");
LineSet361->setColor(*ColorRGBA363);

Shape360->setGeometry(LineSet361);

HAnimSegment356->addChildren(*Shape360);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_midtarsal'/> to <HAnimSite name='r_metatarsal_pha1'/>
CShape* Shape364 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet365 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet365->setVertexCount(new int[1]{2});
CCoordinate* Coordinate366 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate366->setPoint(new float[6]{-0.1086,0.0001,0.0368,-0.0521,0.026,0.0127});
LineSet365->setCoord(*Coordinate366);

CColorRGBA* ColorRGBA367 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA367->setUSE("HAnimSiteLineColorRGBA");
LineSet365->setColor(*ColorRGBA367);

Shape364->setGeometry(LineSet365);

HAnimSegment356->addChildren(*Shape364);

CHAnimSite* HAnimSite368 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite368->setName("r_metatarsal_pha1_pt");
HAnimSite368->setDEF("hanim_r_metatarsal_pha1_pt");
HAnimSite368->setTranslation(new float[3]{-0.0521,0.026,0.0127});
//HAnimSite visualization shape
CTouchSensor* TouchSensor369 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor369->setDescription("HAnimSite r_metatarsal_pha1");
HAnimSite368->addChildren(*TouchSensor369);

CShape* Shape370 = (CShape *)(m_pScene.createNode("Shape"));
Shape370->setUSE("HAnimSiteShape");
HAnimSite368->addChildren(*Shape370);

HAnimSegment356->addChildren(*HAnimSite368);

HAnimJoint355->addChildren(*HAnimSegment356);

CHAnimJoint* HAnimJoint371 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint371->setName("r_metatarsal");
HAnimJoint371->setDEF("hanim_r_metatarsal");
HAnimJoint371->setCenter(new float[3]{-0.1086,0,0.0762});
<<<<<<< HEAD
HAnimJoint371->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint371->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint371->setUlimit(new float[3]{0,0,0});
HAnimJoint371->setLlimit(new float[3]{0,0,0});
HAnimJoint371->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment372 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment372->setName("r_forefoot");
HAnimSegment372->setDEF("hanim_r_forefoot");
//<HAnimJoint name='r_metatarsal'/> visualization sphere is placed within <HAnimSegment name='r_forefoot'/>
CTouchSensor* TouchSensor373 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor373->setDescription("HAnimJoint r_metatarsal, HAnimSegment r_forefoot");
HAnimSegment372->addChildren(*TouchSensor373);

CTransform* Transform374 = (CTransform *)(m_pScene.createNode("Transform"));
Transform374->setTranslation(new float[3]{-0.1086,0,0.0762});
CShape* Shape375 = (CShape *)(m_pScene.createNode("Shape"));
Shape375->setUSE("HAnimJointShape");
Transform374->addChildren(*Shape375);

HAnimSegment372->addChildren(*Transform374);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_forefoot_tip'/>
CShape* Shape376 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet377 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet377->setVertexCount(new int[1]{2});
CCoordinate* Coordinate378 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate378->setPoint(new float[6]{-0.1086,0,0.0762,-0.1043,0.0227,0.145});
LineSet377->setCoord(*Coordinate378);

CColorRGBA* ColorRGBA379 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA379->setUSE("HAnimSiteLineColorRGBA");
LineSet377->setColor(*ColorRGBA379);

Shape376->setGeometry(LineSet377);

HAnimSegment372->addChildren(*Shape376);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_metatarsal_pha5'/>
CShape* Shape380 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet381 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet381->setVertexCount(new int[1]{2});
CCoordinate* Coordinate382 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate382->setPoint(new float[6]{-0.1086,0,0.0762,-0.1523,0.0166,0.0895});
LineSet381->setCoord(*Coordinate382);

CColorRGBA* ColorRGBA383 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA383->setUSE("HAnimSiteLineColorRGBA");
LineSet381->setColor(*ColorRGBA383);

Shape380->setGeometry(LineSet381);

HAnimSegment372->addChildren(*Shape380);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_digit2'/>
CShape* Shape384 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet385 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet385->setVertexCount(new int[1]{2});
CCoordinate* Coordinate386 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate386->setPoint(new float[6]{-0.1086,0,0.0762,-0.0883,0.0134,0.1383});
LineSet385->setCoord(*Coordinate386);

CColorRGBA* ColorRGBA387 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA387->setUSE("HAnimSiteLineColorRGBA");
LineSet385->setColor(*ColorRGBA387);

Shape384->setGeometry(LineSet385);

HAnimSegment372->addChildren(*Shape384);

CHAnimSite* HAnimSite388 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite388->setName("r_forefoot_tip");
HAnimSite388->setDEF("hanim_r_forefoot_tip");
HAnimSite388->setTranslation(new float[3]{-0.1043,0.0227,0.145});
//HAnimSite visualization shape
CTouchSensor* TouchSensor389 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor389->setDescription("HAnimSite r_forefoot_tip");
HAnimSite388->addChildren(*TouchSensor389);

CShape* Shape390 = (CShape *)(m_pScene.createNode("Shape"));
Shape390->setUSE("HAnimSiteShape");
HAnimSite388->addChildren(*Shape390);

HAnimSegment372->addChildren(*HAnimSite388);

CHAnimSite* HAnimSite391 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite391->setName("r_metatarsal_pha5_pt");
HAnimSite391->setDEF("hanim_r_metatarsal_pha5_pt");
HAnimSite391->setTranslation(new float[3]{-0.1523,0.0166,0.0895});
//HAnimSite visualization shape
CTouchSensor* TouchSensor392 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor392->setDescription("HAnimSite r_metatarsal_pha5");
HAnimSite391->addChildren(*TouchSensor392);

CShape* Shape393 = (CShape *)(m_pScene.createNode("Shape"));
Shape393->setUSE("HAnimSiteShape");
HAnimSite391->addChildren(*Shape393);

HAnimSegment372->addChildren(*HAnimSite391);

CHAnimSite* HAnimSite394 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite394->setName("r_digit2_pt");
HAnimSite394->setDEF("hanim_r_digit2_pt");
HAnimSite394->setTranslation(new float[3]{-0.0883,0.0134,0.1383});
//HAnimSite visualization shape
CTouchSensor* TouchSensor395 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor395->setDescription("HAnimSite r_digit2");
HAnimSite394->addChildren(*TouchSensor395);

CShape* Shape396 = (CShape *)(m_pScene.createNode("Shape"));
Shape396->setUSE("HAnimSiteShape");
HAnimSite394->addChildren(*Shape396);

HAnimSegment372->addChildren(*HAnimSite394);

HAnimJoint371->addChildren(*HAnimSegment372);

HAnimJoint355->addChildren(*HAnimJoint371);

HAnimJoint346->addChildren(*HAnimJoint355);

HAnimJoint309->addChildren(*HAnimJoint346);

HAnimJoint300->addChildren(*HAnimJoint309);

HAnimJoint270->addChildren(*HAnimJoint300);

HAnimJoint63->addChildren(*HAnimJoint270);

HAnimJoint47->addChildren(*HAnimJoint63);

CHAnimJoint* HAnimJoint397 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint397->setName("vl5");
HAnimJoint397->setDEF("hanim_vl5");
HAnimJoint397->setCenter(new float[3]{0.0028,1.0568,-0.0776});
<<<<<<< HEAD
HAnimJoint397->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint397->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint397->setUlimit(new float[3]{0,0,0});
HAnimJoint397->setLlimit(new float[3]{0,0,0});
HAnimJoint397->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment398 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment398->setName("l5");
HAnimSegment398->setDEF("hanim_l5");
//<HAnimJoint name='vl5'/> visualization sphere is placed within <HAnimSegment name='l5'/>
CTouchSensor* TouchSensor399 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor399->setDescription("HAnimJoint vl5, HAnimSegment l5");
HAnimSegment398->addChildren(*TouchSensor399);

CTransform* Transform400 = (CTransform *)(m_pScene.createNode("Transform"));
Transform400->setTranslation(new float[3]{0.0028,1.0568,-0.0776});
CShape* Shape401 = (CShape *)(m_pScene.createNode("Shape"));
Shape401->setUSE("HAnimJointShape");
Transform400->addChildren(*Shape401);

HAnimSegment398->addChildren(*Transform400);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl5'/> to <HAnimJoint name='vl4'/>
CShape* Shape402 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet403 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet403->setVertexCount(new int[1]{2});
CCoordinate* Coordinate404 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate404->setPoint(new float[6]{0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787});
LineSet403->setCoord(*Coordinate404);

CColorRGBA* ColorRGBA405 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA405->setUSE("HAnimSegmentLineColorRGBA");
LineSet403->setColor(*ColorRGBA405);

Shape402->setGeometry(LineSet403);

HAnimSegment398->addChildren(*Shape402);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='waist_preferred_post'/>
CShape* Shape406 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet407 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet407->setVertexCount(new int[1]{2});
CCoordinate* Coordinate408 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate408->setPoint(new float[6]{0.0028,1.0568,-0.0776,0,1.0915,-0.1091});
LineSet407->setCoord(*Coordinate408);

CColorRGBA* ColorRGBA409 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA409->setUSE("HAnimSiteLineColorRGBA");
LineSet407->setColor(*ColorRGBA409);

Shape406->setGeometry(LineSet407);

HAnimSegment398->addChildren(*Shape406);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='navel'/>
CShape* Shape410 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet411 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet411->setVertexCount(new int[1]{2});
CCoordinate* Coordinate412 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate412->setPoint(new float[6]{0.0028,1.0568,-0.0776,0.0069,1.0966,0.1017});
LineSet411->setCoord(*Coordinate412);

CColorRGBA* ColorRGBA413 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA413->setUSE("HAnimSiteLineColorRGBA");
LineSet411->setColor(*ColorRGBA413);

Shape410->setGeometry(LineSet411);

HAnimSegment398->addChildren(*Shape410);

CHAnimSite* HAnimSite414 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite414->setName("waist_preferred_post_pt");
HAnimSite414->setDEF("hanim_waist_preferred_post_pt");
HAnimSite414->setTranslation(new float[3]{0,1.0915,-0.1091});
//HAnimSite visualization shape
CTouchSensor* TouchSensor415 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor415->setDescription("HAnimSite waist_preferred_post");
HAnimSite414->addChildren(*TouchSensor415);

CShape* Shape416 = (CShape *)(m_pScene.createNode("Shape"));
Shape416->setUSE("HAnimSiteShape");
HAnimSite414->addChildren(*Shape416);

HAnimSegment398->addChildren(*HAnimSite414);

CHAnimSite* HAnimSite417 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite417->setName("navel_pt");
HAnimSite417->setDEF("hanim_navel_pt");
HAnimSite417->setTranslation(new float[3]{0.0069,1.0966,0.1017});
//HAnimSite visualization shape
CTouchSensor* TouchSensor418 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor418->setDescription("HAnimSite navel");
HAnimSite417->addChildren(*TouchSensor418);

CShape* Shape419 = (CShape *)(m_pScene.createNode("Shape"));
Shape419->setUSE("HAnimSiteShape");
HAnimSite417->addChildren(*Shape419);

HAnimSegment398->addChildren(*HAnimSite417);

HAnimJoint397->addChildren(*HAnimSegment398);

CHAnimJoint* HAnimJoint420 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint420->setName("vl4");
HAnimJoint420->setDEF("hanim_vl4");
HAnimJoint420->setCenter(new float[3]{0.0035,1.0925,-0.0787});
<<<<<<< HEAD
HAnimJoint420->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint420->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint420->setUlimit(new float[3]{0,0,0});
HAnimJoint420->setLlimit(new float[3]{0,0,0});
HAnimJoint420->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment421 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment421->setName("l4");
HAnimSegment421->setDEF("hanim_l4");
//<HAnimJoint name='vl4'/> visualization sphere is placed within <HAnimSegment name='l4'/>
CTouchSensor* TouchSensor422 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor422->setDescription("HAnimJoint vl4, HAnimSegment l4");
HAnimSegment421->addChildren(*TouchSensor422);

CTransform* Transform423 = (CTransform *)(m_pScene.createNode("Transform"));
Transform423->setTranslation(new float[3]{0.0035,1.0925,-0.0787});
CShape* Shape424 = (CShape *)(m_pScene.createNode("Shape"));
Shape424->setUSE("HAnimJointShape");
Transform423->addChildren(*Shape424);

HAnimSegment421->addChildren(*Transform423);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl4'/> to <HAnimJoint name='vl3'/>
CShape* Shape425 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet426 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet426->setVertexCount(new int[1]{2});
CCoordinate* Coordinate427 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate427->setPoint(new float[6]{0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796});
LineSet426->setCoord(*Coordinate427);

CColorRGBA* ColorRGBA428 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA428->setUSE("HAnimSegmentLineColorRGBA");
LineSet426->setColor(*ColorRGBA428);

Shape425->setGeometry(LineSet426);

HAnimSegment421->addChildren(*Shape425);

HAnimJoint420->addChildren(*HAnimSegment421);

CHAnimJoint* HAnimJoint429 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint429->setName("vl3");
HAnimJoint429->setDEF("hanim_vl3");
HAnimJoint429->setCenter(new float[3]{0.0041,1.1276,-0.0796});
<<<<<<< HEAD
HAnimJoint429->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint429->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint429->setUlimit(new float[3]{0,0,0});
HAnimJoint429->setLlimit(new float[3]{0,0,0});
HAnimJoint429->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment430 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment430->setName("l3");
HAnimSegment430->setDEF("hanim_l3");
//<HAnimJoint name='vl3'/> visualization sphere is placed within <HAnimSegment name='l3'/>
CTouchSensor* TouchSensor431 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor431->setDescription("HAnimJoint vl3, HAnimSegment l3");
HAnimSegment430->addChildren(*TouchSensor431);

CTransform* Transform432 = (CTransform *)(m_pScene.createNode("Transform"));
Transform432->setTranslation(new float[3]{0.0041,1.1276,-0.0796});
CShape* Shape433 = (CShape *)(m_pScene.createNode("Shape"));
Shape433->setUSE("HAnimJointShape");
Transform432->addChildren(*Shape433);

HAnimSegment430->addChildren(*Transform432);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl3'/> to <HAnimJoint name='vl2'/>
CShape* Shape434 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet435 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet435->setVertexCount(new int[1]{2});
CCoordinate* Coordinate436 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate436->setPoint(new float[6]{0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08});
LineSet435->setCoord(*Coordinate436);

CColorRGBA* ColorRGBA437 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA437->setUSE("HAnimSegmentLineColorRGBA");
LineSet435->setColor(*ColorRGBA437);

Shape434->setGeometry(LineSet435);

HAnimSegment430->addChildren(*Shape434);

HAnimJoint429->addChildren(*HAnimSegment430);

CHAnimJoint* HAnimJoint438 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint438->setName("vl2");
HAnimJoint438->setDEF("hanim_vl2");
HAnimJoint438->setCenter(new float[3]{0.0045,1.1546,-0.08});
<<<<<<< HEAD
HAnimJoint438->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint438->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint438->setUlimit(new float[3]{0,0,0});
HAnimJoint438->setLlimit(new float[3]{0,0,0});
HAnimJoint438->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment439 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment439->setName("l2");
HAnimSegment439->setDEF("hanim_l2");
//<HAnimJoint name='vl2'/> visualization sphere is placed within <HAnimSegment name='l2'/>
CTouchSensor* TouchSensor440 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor440->setDescription("HAnimJoint vl2, HAnimSegment l2");
HAnimSegment439->addChildren(*TouchSensor440);

CTransform* Transform441 = (CTransform *)(m_pScene.createNode("Transform"));
Transform441->setTranslation(new float[3]{0.0045,1.1546,-0.08});
CShape* Shape442 = (CShape *)(m_pScene.createNode("Shape"));
Shape442->setUSE("HAnimJointShape");
Transform441->addChildren(*Shape442);

HAnimSegment439->addChildren(*Transform441);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl2'/> to <HAnimJoint name='vl1'/>
CShape* Shape443 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet444 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet444->setVertexCount(new int[1]{2});
CCoordinate* Coordinate445 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate445->setPoint(new float[6]{0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805});
LineSet444->setCoord(*Coordinate445);

CColorRGBA* ColorRGBA446 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA446->setUSE("HAnimSegmentLineColorRGBA");
LineSet444->setColor(*ColorRGBA446);

Shape443->setGeometry(LineSet444);

HAnimSegment439->addChildren(*Shape443);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='r_rib10'/>
CShape* Shape447 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet448 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet448->setVertexCount(new int[1]{2});
CCoordinate* Coordinate449 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate449->setPoint(new float[6]{0.0045,1.1546,-0.08,-0.0711,1.1941,0.1016});
LineSet448->setCoord(*Coordinate449);

CColorRGBA* ColorRGBA450 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA450->setUSE("HAnimSiteLineColorRGBA");
LineSet448->setColor(*ColorRGBA450);

Shape447->setGeometry(LineSet448);

HAnimSegment439->addChildren(*Shape447);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='l_rib10'/>
CShape* Shape451 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet452 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet452->setVertexCount(new int[1]{2});
CCoordinate* Coordinate453 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate453->setPoint(new float[6]{0.0045,1.1546,-0.08,0.0871,1.1925,0.0992});
LineSet452->setCoord(*Coordinate453);

CColorRGBA* ColorRGBA454 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA454->setUSE("HAnimSiteLineColorRGBA");
LineSet452->setColor(*ColorRGBA454);

Shape451->setGeometry(LineSet452);

HAnimSegment439->addChildren(*Shape451);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='rib10_midspine'/>
CShape* Shape455 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet456 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet456->setVertexCount(new int[1]{2});
CCoordinate* Coordinate457 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate457->setPoint(new float[6]{0.0045,1.1546,-0.08,0.0049,1.1908,-0.1113});
LineSet456->setCoord(*Coordinate457);

CColorRGBA* ColorRGBA458 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA458->setUSE("HAnimSiteLineColorRGBA");
LineSet456->setColor(*ColorRGBA458);

Shape455->setGeometry(LineSet456);

HAnimSegment439->addChildren(*Shape455);

CHAnimSite* HAnimSite459 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite459->setName("r_rib10_pt");
HAnimSite459->setDEF("hanim_r_rib10_pt");
HAnimSite459->setTranslation(new float[3]{-0.0711,1.1941,0.1016});
//HAnimSite visualization shape
CTouchSensor* TouchSensor460 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor460->setDescription("HAnimSite r_rib10");
HAnimSite459->addChildren(*TouchSensor460);

CShape* Shape461 = (CShape *)(m_pScene.createNode("Shape"));
Shape461->setUSE("HAnimSiteShape");
HAnimSite459->addChildren(*Shape461);

HAnimSegment439->addChildren(*HAnimSite459);

CHAnimSite* HAnimSite462 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite462->setName("l_rib10_pt");
HAnimSite462->setDEF("hanim_l_rib10_pt");
HAnimSite462->setTranslation(new float[3]{0.0871,1.1925,0.0992});
//HAnimSite visualization shape
CTouchSensor* TouchSensor463 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor463->setDescription("HAnimSite l_rib10");
HAnimSite462->addChildren(*TouchSensor463);

CShape* Shape464 = (CShape *)(m_pScene.createNode("Shape"));
Shape464->setUSE("HAnimSiteShape");
HAnimSite462->addChildren(*Shape464);

HAnimSegment439->addChildren(*HAnimSite462);

CHAnimSite* HAnimSite465 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite465->setName("rib10_midspine_pt");
HAnimSite465->setDEF("hanim_rib10_midspine_pt");
HAnimSite465->setTranslation(new float[3]{0.0049,1.1908,-0.1113});
//HAnimSite visualization shape
CTouchSensor* TouchSensor466 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor466->setDescription("HAnimSite rib10_midspine");
HAnimSite465->addChildren(*TouchSensor466);

CShape* Shape467 = (CShape *)(m_pScene.createNode("Shape"));
Shape467->setUSE("HAnimSiteShape");
HAnimSite465->addChildren(*Shape467);

HAnimSegment439->addChildren(*HAnimSite465);

HAnimJoint438->addChildren(*HAnimSegment439);

CHAnimJoint* HAnimJoint468 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint468->setName("vl1");
HAnimJoint468->setDEF("hanim_vl1");
HAnimJoint468->setCenter(new float[3]{0.0048,1.1912,-0.0805});
<<<<<<< HEAD
HAnimJoint468->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint468->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint468->setUlimit(new float[3]{0,0,0});
HAnimJoint468->setLlimit(new float[3]{0,0,0});
HAnimJoint468->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment469 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment469->setName("l1");
HAnimSegment469->setDEF("hanim_l1");
//<HAnimJoint name='vl1'/> visualization sphere is placed within <HAnimSegment name='l1'/>
CTouchSensor* TouchSensor470 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor470->setDescription("HAnimJoint vl1, HAnimSegment l1");
HAnimSegment469->addChildren(*TouchSensor470);

CTransform* Transform471 = (CTransform *)(m_pScene.createNode("Transform"));
Transform471->setTranslation(new float[3]{0.0048,1.1912,-0.0805});
CShape* Shape472 = (CShape *)(m_pScene.createNode("Shape"));
Shape472->setUSE("HAnimJointShape");
Transform471->addChildren(*Shape472);

HAnimSegment469->addChildren(*Transform471);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl1'/> to <HAnimJoint name='vt12'/>
CShape* Shape473 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet474 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet474->setVertexCount(new int[1]{2});
CCoordinate* Coordinate475 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate475->setPoint(new float[6]{0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808});
LineSet474->setCoord(*Coordinate475);

CColorRGBA* ColorRGBA476 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA476->setUSE("HAnimSegmentLineColorRGBA");
LineSet474->setColor(*ColorRGBA476);

Shape473->setGeometry(LineSet474);

HAnimSegment469->addChildren(*Shape473);

HAnimJoint468->addChildren(*HAnimSegment469);

CHAnimJoint* HAnimJoint477 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint477->setName("vt12");
HAnimJoint477->setDEF("hanim_vt12");
HAnimJoint477->setCenter(new float[3]{0.0051,1.2278,-0.0808});
<<<<<<< HEAD
HAnimJoint477->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint477->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint477->setUlimit(new float[3]{0,0,0});
HAnimJoint477->setLlimit(new float[3]{0,0,0});
HAnimJoint477->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment478 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment478->setName("t12");
HAnimSegment478->setDEF("hanim_t12");
//<HAnimJoint name='vt12'/> visualization sphere is placed within <HAnimSegment name='t12'/>
CTouchSensor* TouchSensor479 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor479->setDescription("HAnimJoint vt12, HAnimSegment t12");
HAnimSegment478->addChildren(*TouchSensor479);

CTransform* Transform480 = (CTransform *)(m_pScene.createNode("Transform"));
Transform480->setTranslation(new float[3]{0.0051,1.2278,-0.0808});
CShape* Shape481 = (CShape *)(m_pScene.createNode("Shape"));
Shape481->setUSE("HAnimJointShape");
Transform480->addChildren(*Shape481);

HAnimSegment478->addChildren(*Transform480);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt12'/> to <HAnimJoint name='vt11'/>
CShape* Shape482 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet483 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet483->setVertexCount(new int[1]{2});
CCoordinate* Coordinate484 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate484->setPoint(new float[6]{0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081});
LineSet483->setCoord(*Coordinate484);

CColorRGBA* ColorRGBA485 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA485->setUSE("HAnimSegmentLineColorRGBA");
LineSet483->setColor(*ColorRGBA485);

Shape482->setGeometry(LineSet483);

HAnimSegment478->addChildren(*Shape482);

HAnimJoint477->addChildren(*HAnimSegment478);

CHAnimJoint* HAnimJoint486 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint486->setName("vt11");
HAnimJoint486->setDEF("hanim_vt11");
HAnimJoint486->setCenter(new float[3]{0.0053,1.2679,-0.081});
<<<<<<< HEAD
HAnimJoint486->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint486->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint486->setUlimit(new float[3]{0,0,0});
HAnimJoint486->setLlimit(new float[3]{0,0,0});
HAnimJoint486->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment487 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment487->setName("t11");
HAnimSegment487->setDEF("hanim_t11");
//<HAnimJoint name='vt11'/> visualization sphere is placed within <HAnimSegment name='t11'/>
CTouchSensor* TouchSensor488 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor488->setDescription("HAnimJoint vt11, HAnimSegment t11");
HAnimSegment487->addChildren(*TouchSensor488);

CTransform* Transform489 = (CTransform *)(m_pScene.createNode("Transform"));
Transform489->setTranslation(new float[3]{0.0053,1.2679,-0.081});
CShape* Shape490 = (CShape *)(m_pScene.createNode("Shape"));
Shape490->setUSE("HAnimJointShape");
Transform489->addChildren(*Shape490);

HAnimSegment487->addChildren(*Transform489);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt11'/> to <HAnimJoint name='vt10'/>
CShape* Shape491 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet492 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet492->setVertexCount(new int[1]{2});
CCoordinate* Coordinate493 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate493->setPoint(new float[6]{0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822});
LineSet492->setCoord(*Coordinate493);

CColorRGBA* ColorRGBA494 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA494->setUSE("HAnimSegmentLineColorRGBA");
LineSet492->setColor(*ColorRGBA494);

Shape491->setGeometry(LineSet492);

HAnimSegment487->addChildren(*Shape491);

HAnimJoint486->addChildren(*HAnimSegment487);

CHAnimJoint* HAnimJoint495 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint495->setName("vt10");
HAnimJoint495->setDEF("hanim_vt10");
HAnimJoint495->setCenter(new float[3]{0.0056,1.2848,-0.0822});
<<<<<<< HEAD
HAnimJoint495->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint495->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint495->setUlimit(new float[3]{0,0,0});
HAnimJoint495->setLlimit(new float[3]{0,0,0});
HAnimJoint495->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment496 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment496->setName("t10");
HAnimSegment496->setDEF("hanim_t10");
//<HAnimJoint name='vt10'/> visualization sphere is placed within <HAnimSegment name='t10'/>
CTouchSensor* TouchSensor497 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor497->setDescription("HAnimJoint vt10, HAnimSegment t10");
HAnimSegment496->addChildren(*TouchSensor497);

CTransform* Transform498 = (CTransform *)(m_pScene.createNode("Transform"));
Transform498->setTranslation(new float[3]{0.0056,1.2848,-0.0822});
CShape* Shape499 = (CShape *)(m_pScene.createNode("Shape"));
Shape499->setUSE("HAnimJointShape");
Transform498->addChildren(*Shape499);

HAnimSegment496->addChildren(*Transform498);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt10'/> to <HAnimJoint name='vt9'/>
CShape* Shape500 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet501 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet501->setVertexCount(new int[1]{2});
CCoordinate* Coordinate502 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate502->setPoint(new float[6]{0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838});
LineSet501->setCoord(*Coordinate502);

CColorRGBA* ColorRGBA503 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA503->setUSE("HAnimSegmentLineColorRGBA");
LineSet501->setColor(*ColorRGBA503);

Shape500->setGeometry(LineSet501);

HAnimSegment496->addChildren(*Shape500);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt10'/> to <HAnimSite name='substernale'/>
CShape* Shape504 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet505 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet505->setVertexCount(new int[1]{2});
CCoordinate* Coordinate506 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate506->setPoint(new float[6]{0.0056,1.2848,-0.0822,0.0085,1.2995,0.1147});
LineSet505->setCoord(*Coordinate506);

CColorRGBA* ColorRGBA507 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA507->setUSE("HAnimSiteLineColorRGBA");
LineSet505->setColor(*ColorRGBA507);

Shape504->setGeometry(LineSet505);

HAnimSegment496->addChildren(*Shape504);

CHAnimSite* HAnimSite508 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite508->setName("substernale_pt");
HAnimSite508->setDEF("hanim_substernale_pt");
HAnimSite508->setTranslation(new float[3]{0.0085,1.2995,0.1147});
//HAnimSite visualization shape
CTouchSensor* TouchSensor509 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor509->setDescription("HAnimSite substernale");
HAnimSite508->addChildren(*TouchSensor509);

CShape* Shape510 = (CShape *)(m_pScene.createNode("Shape"));
Shape510->setUSE("HAnimSiteShape");
HAnimSite508->addChildren(*Shape510);

HAnimSegment496->addChildren(*HAnimSite508);

HAnimJoint495->addChildren(*HAnimSegment496);

CHAnimJoint* HAnimJoint511 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint511->setName("vt9");
HAnimJoint511->setDEF("hanim_vt9");
HAnimJoint511->setCenter(new float[3]{0.0057,1.3126,-0.0838});
<<<<<<< HEAD
HAnimJoint511->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint511->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint511->setUlimit(new float[3]{0,0,0});
HAnimJoint511->setLlimit(new float[3]{0,0,0});
HAnimJoint511->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment512 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment512->setName("t9");
HAnimSegment512->setDEF("hanim_t9");
//<HAnimJoint name='vt9'/> visualization sphere is placed within <HAnimSegment name='t9'/>
CTouchSensor* TouchSensor513 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor513->setDescription("HAnimJoint vt9, HAnimSegment t9");
HAnimSegment512->addChildren(*TouchSensor513);

CTransform* Transform514 = (CTransform *)(m_pScene.createNode("Transform"));
Transform514->setTranslation(new float[3]{0.0057,1.3126,-0.0838});
CShape* Shape515 = (CShape *)(m_pScene.createNode("Shape"));
Shape515->setUSE("HAnimJointShape");
Transform514->addChildren(*Shape515);

HAnimSegment512->addChildren(*Transform514);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt9'/> to <HAnimJoint name='vt8'/>
CShape* Shape516 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet517 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet517->setVertexCount(new int[1]{2});
CCoordinate* Coordinate518 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate518->setPoint(new float[6]{0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845});
LineSet517->setCoord(*Coordinate518);

CColorRGBA* ColorRGBA519 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA519->setUSE("HAnimSegmentLineColorRGBA");
LineSet517->setColor(*ColorRGBA519);

Shape516->setGeometry(LineSet517);

HAnimSegment512->addChildren(*Shape516);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='r_thelion'/>
CShape* Shape520 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet521 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet521->setVertexCount(new int[1]{2});
CCoordinate* Coordinate522 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate522->setPoint(new float[6]{0.0057,1.3126,-0.0838,-0.0736,1.3385,0.1217});
LineSet521->setCoord(*Coordinate522);

CColorRGBA* ColorRGBA523 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA523->setUSE("HAnimSiteLineColorRGBA");
LineSet521->setColor(*ColorRGBA523);

Shape520->setGeometry(LineSet521);

HAnimSegment512->addChildren(*Shape520);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='l_thelion'/>
CShape* Shape524 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet525 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet525->setVertexCount(new int[1]{2});
CCoordinate* Coordinate526 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate526->setPoint(new float[6]{0.0057,1.3126,-0.0838,0.0918,1.3382,0.1192});
LineSet525->setCoord(*Coordinate526);

CColorRGBA* ColorRGBA527 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA527->setUSE("HAnimSiteLineColorRGBA");
LineSet525->setColor(*ColorRGBA527);

Shape524->setGeometry(LineSet525);

HAnimSegment512->addChildren(*Shape524);

CHAnimSite* HAnimSite528 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite528->setName("r_thelion_pt");
HAnimSite528->setDEF("hanim_r_thelion_pt");
HAnimSite528->setTranslation(new float[3]{-0.0736,1.3385,0.1217});
//HAnimSite visualization shape
CTouchSensor* TouchSensor529 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor529->setDescription("HAnimSite r_thelion");
HAnimSite528->addChildren(*TouchSensor529);

CShape* Shape530 = (CShape *)(m_pScene.createNode("Shape"));
Shape530->setUSE("HAnimSiteShape");
HAnimSite528->addChildren(*Shape530);

HAnimSegment512->addChildren(*HAnimSite528);

CHAnimSite* HAnimSite531 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite531->setName("l_thelion_pt");
HAnimSite531->setDEF("hanim_l_thelion_pt");
HAnimSite531->setTranslation(new float[3]{0.0918,1.3382,0.1192});
//HAnimSite visualization shape
CTouchSensor* TouchSensor532 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor532->setDescription("HAnimSite l_thelion");
HAnimSite531->addChildren(*TouchSensor532);

CShape* Shape533 = (CShape *)(m_pScene.createNode("Shape"));
Shape533->setUSE("HAnimSiteShape");
HAnimSite531->addChildren(*Shape533);

HAnimSegment512->addChildren(*HAnimSite531);

HAnimJoint511->addChildren(*HAnimSegment512);

CHAnimJoint* HAnimJoint534 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint534->setName("vt8");
HAnimJoint534->setDEF("hanim_vt8");
HAnimJoint534->setCenter(new float[3]{0.0057,1.3382,-0.0845});
<<<<<<< HEAD
HAnimJoint534->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint534->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint534->setUlimit(new float[3]{0,0,0});
HAnimJoint534->setLlimit(new float[3]{0,0,0});
HAnimJoint534->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment535 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment535->setName("t8");
HAnimSegment535->setDEF("hanim_t8");
//<HAnimJoint name='vt8'/> visualization sphere is placed within <HAnimSegment name='t8'/>
CTouchSensor* TouchSensor536 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor536->setDescription("HAnimJoint vt8, HAnimSegment t8");
HAnimSegment535->addChildren(*TouchSensor536);

CTransform* Transform537 = (CTransform *)(m_pScene.createNode("Transform"));
Transform537->setTranslation(new float[3]{0.0057,1.3382,-0.0845});
CShape* Shape538 = (CShape *)(m_pScene.createNode("Shape"));
Shape538->setUSE("HAnimJointShape");
Transform537->addChildren(*Shape538);

HAnimSegment535->addChildren(*Transform537);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt8'/> to <HAnimJoint name='vt7'/>
CShape* Shape539 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet540 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet540->setVertexCount(new int[1]{2});
CCoordinate* Coordinate541 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate541->setPoint(new float[6]{0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833});
LineSet540->setCoord(*Coordinate541);

CColorRGBA* ColorRGBA542 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA542->setUSE("HAnimSegmentLineColorRGBA");
LineSet540->setColor(*ColorRGBA542);

Shape539->setGeometry(LineSet540);

HAnimSegment535->addChildren(*Shape539);

HAnimJoint534->addChildren(*HAnimSegment535);

CHAnimJoint* HAnimJoint543 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint543->setName("vt7");
HAnimJoint543->setDEF("hanim_vt7");
HAnimJoint543->setCenter(new float[3]{0.0058,1.3625,-0.0833});
<<<<<<< HEAD
HAnimJoint543->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint543->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint543->setUlimit(new float[3]{0,0,0});
HAnimJoint543->setLlimit(new float[3]{0,0,0});
HAnimJoint543->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment544 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment544->setName("t7");
HAnimSegment544->setDEF("hanim_t7");
//<HAnimJoint name='vt7'/> visualization sphere is placed within <HAnimSegment name='t7'/>
CTouchSensor* TouchSensor545 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor545->setDescription("HAnimJoint vt7, HAnimSegment t7");
HAnimSegment544->addChildren(*TouchSensor545);

CTransform* Transform546 = (CTransform *)(m_pScene.createNode("Transform"));
Transform546->setTranslation(new float[3]{0.0058,1.3625,-0.0833});
CShape* Shape547 = (CShape *)(m_pScene.createNode("Shape"));
Shape547->setUSE("HAnimJointShape");
Transform546->addChildren(*Shape547);

HAnimSegment544->addChildren(*Transform546);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt7'/> to <HAnimJoint name='vt6'/>
CShape* Shape548 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet549 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet549->setVertexCount(new int[1]{2});
CCoordinate* Coordinate550 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate550->setPoint(new float[6]{0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08});
LineSet549->setCoord(*Coordinate550);

CColorRGBA* ColorRGBA551 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA551->setUSE("HAnimSegmentLineColorRGBA");
LineSet549->setColor(*ColorRGBA551);

Shape548->setGeometry(LineSet549);

HAnimSegment544->addChildren(*Shape548);

HAnimJoint543->addChildren(*HAnimSegment544);

CHAnimJoint* HAnimJoint552 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint552->setName("vt6");
HAnimJoint552->setDEF("hanim_vt6");
HAnimJoint552->setCenter(new float[3]{0.0059,1.3866,-0.08});
<<<<<<< HEAD
HAnimJoint552->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint552->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint552->setUlimit(new float[3]{0,0,0});
HAnimJoint552->setLlimit(new float[3]{0,0,0});
HAnimJoint552->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment553 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment553->setName("t6");
HAnimSegment553->setDEF("hanim_t6");
//<HAnimJoint name='vt6'/> visualization sphere is placed within <HAnimSegment name='t6'/>
CTouchSensor* TouchSensor554 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor554->setDescription("HAnimJoint vt6, HAnimSegment t6");
HAnimSegment553->addChildren(*TouchSensor554);

CTransform* Transform555 = (CTransform *)(m_pScene.createNode("Transform"));
Transform555->setTranslation(new float[3]{0.0059,1.3866,-0.08});
CShape* Shape556 = (CShape *)(m_pScene.createNode("Shape"));
Shape556->setUSE("HAnimJointShape");
Transform555->addChildren(*Shape556);

HAnimSegment553->addChildren(*Transform555);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt6'/> to <HAnimJoint name='vt5'/>
CShape* Shape557 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet558 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet558->setVertexCount(new int[1]{2});
CCoordinate* Coordinate559 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate559->setPoint(new float[6]{0.0059,1.3866,-0.08,0.006,1.4102,-0.0745});
LineSet558->setCoord(*Coordinate559);

CColorRGBA* ColorRGBA560 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA560->setUSE("HAnimSegmentLineColorRGBA");
LineSet558->setColor(*ColorRGBA560);

Shape557->setGeometry(LineSet558);

HAnimSegment553->addChildren(*Shape557);

HAnimJoint552->addChildren(*HAnimSegment553);

CHAnimJoint* HAnimJoint561 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint561->setName("vt5");
HAnimJoint561->setDEF("hanim_vt5");
HAnimJoint561->setCenter(new float[3]{0.006,1.4102,-0.0745});
<<<<<<< HEAD
HAnimJoint561->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint561->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint561->setUlimit(new float[3]{0,0,0});
HAnimJoint561->setLlimit(new float[3]{0,0,0});
HAnimJoint561->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment562 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment562->setName("t5");
HAnimSegment562->setDEF("hanim_t5");
//<HAnimJoint name='vt5'/> visualization sphere is placed within <HAnimSegment name='t5'/>
CTouchSensor* TouchSensor563 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor563->setDescription("HAnimJoint vt5, HAnimSegment t5");
HAnimSegment562->addChildren(*TouchSensor563);

CTransform* Transform564 = (CTransform *)(m_pScene.createNode("Transform"));
Transform564->setTranslation(new float[3]{0.006,1.4102,-0.0745});
CShape* Shape565 = (CShape *)(m_pScene.createNode("Shape"));
Shape565->setUSE("HAnimJointShape");
Transform564->addChildren(*Shape565);

HAnimSegment562->addChildren(*Transform564);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt5'/> to <HAnimJoint name='vt4'/>
CShape* Shape566 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet567 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet567->setVertexCount(new int[1]{2});
CCoordinate* Coordinate568 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate568->setPoint(new float[6]{0.006,1.4102,-0.0745,0.0061,1.432,-0.0675});
LineSet567->setCoord(*Coordinate568);

CColorRGBA* ColorRGBA569 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA569->setUSE("HAnimSegmentLineColorRGBA");
LineSet567->setColor(*ColorRGBA569);

Shape566->setGeometry(LineSet567);

HAnimSegment562->addChildren(*Shape566);

HAnimJoint561->addChildren(*HAnimSegment562);

CHAnimJoint* HAnimJoint570 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint570->setName("vt4");
HAnimJoint570->setDEF("hanim_vt4");
HAnimJoint570->setCenter(new float[3]{0.0061,1.432,-0.0675});
<<<<<<< HEAD
HAnimJoint570->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint570->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint570->setUlimit(new float[3]{0,0,0});
HAnimJoint570->setLlimit(new float[3]{0,0,0});
HAnimJoint570->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment571 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment571->setName("t4");
HAnimSegment571->setDEF("hanim_t4");
//<HAnimJoint name='vt4'/> visualization sphere is placed within <HAnimSegment name='t4'/>
CTouchSensor* TouchSensor572 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor572->setDescription("HAnimJoint vt4, HAnimSegment t4");
HAnimSegment571->addChildren(*TouchSensor572);

CTransform* Transform573 = (CTransform *)(m_pScene.createNode("Transform"));
Transform573->setTranslation(new float[3]{0.0061,1.432,-0.0675});
CShape* Shape574 = (CShape *)(m_pScene.createNode("Shape"));
Shape574->setUSE("HAnimJointShape");
Transform573->addChildren(*Shape574);

HAnimSegment571->addChildren(*Transform573);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt4'/> to <HAnimJoint name='vt3'/>
CShape* Shape575 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet576 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet576->setVertexCount(new int[1]{2});
CCoordinate* Coordinate577 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate577->setPoint(new float[6]{0.0061,1.432,-0.0675,0.0062,1.4583,-0.057});
LineSet576->setCoord(*Coordinate577);

CColorRGBA* ColorRGBA578 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA578->setUSE("HAnimSegmentLineColorRGBA");
LineSet576->setColor(*ColorRGBA578);

Shape575->setGeometry(LineSet576);

HAnimSegment571->addChildren(*Shape575);

HAnimJoint570->addChildren(*HAnimSegment571);

CHAnimJoint* HAnimJoint579 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint579->setName("vt3");
HAnimJoint579->setDEF("hanim_vt3");
HAnimJoint579->setCenter(new float[3]{0.0062,1.4583,-0.057});
<<<<<<< HEAD
HAnimJoint579->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint579->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint579->setUlimit(new float[3]{0,0,0});
HAnimJoint579->setLlimit(new float[3]{0,0,0});
HAnimJoint579->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment580 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment580->setName("t3");
HAnimSegment580->setDEF("hanim_t3");
//<HAnimJoint name='vt3'/> visualization sphere is placed within <HAnimSegment name='t3'/>
CTouchSensor* TouchSensor581 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor581->setDescription("HAnimJoint vt3, HAnimSegment t3");
HAnimSegment580->addChildren(*TouchSensor581);

CTransform* Transform582 = (CTransform *)(m_pScene.createNode("Transform"));
Transform582->setTranslation(new float[3]{0.0062,1.4583,-0.057});
CShape* Shape583 = (CShape *)(m_pScene.createNode("Shape"));
Shape583->setUSE("HAnimJointShape");
Transform582->addChildren(*Shape583);

HAnimSegment580->addChildren(*Transform582);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt3'/> to <HAnimJoint name='vt2'/>
CShape* Shape584 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet585 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet585->setVertexCount(new int[1]{2});
CCoordinate* Coordinate586 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate586->setPoint(new float[6]{0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484});
LineSet585->setCoord(*Coordinate586);

CColorRGBA* ColorRGBA587 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA587->setUSE("HAnimSegmentLineColorRGBA");
LineSet585->setColor(*ColorRGBA587);

Shape584->setGeometry(LineSet585);

HAnimSegment580->addChildren(*Shape584);

HAnimJoint579->addChildren(*HAnimSegment580);

CHAnimJoint* HAnimJoint588 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint588->setName("vt2");
HAnimJoint588->setDEF("hanim_vt2");
HAnimJoint588->setCenter(new float[3]{0.0063,1.4761,-0.0484});
<<<<<<< HEAD
HAnimJoint588->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint588->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint588->setUlimit(new float[3]{0,0,0});
HAnimJoint588->setLlimit(new float[3]{0,0,0});
HAnimJoint588->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment589 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment589->setName("t2");
HAnimSegment589->setDEF("hanim_t2");
//<HAnimJoint name='vt2'/> visualization sphere is placed within <HAnimSegment name='t2'/>
CTouchSensor* TouchSensor590 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor590->setDescription("HAnimJoint vt2, HAnimSegment t2");
HAnimSegment589->addChildren(*TouchSensor590);

CTransform* Transform591 = (CTransform *)(m_pScene.createNode("Transform"));
Transform591->setTranslation(new float[3]{0.0063,1.4761,-0.0484});
CShape* Shape592 = (CShape *)(m_pScene.createNode("Shape"));
Shape592->setUSE("HAnimJointShape");
Transform591->addChildren(*Shape592);

HAnimSegment589->addChildren(*Transform591);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt2'/> to <HAnimJoint name='vt1'/>
CShape* Shape593 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet594 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet594->setVertexCount(new int[1]{2});
CCoordinate* Coordinate595 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate595->setPoint(new float[6]{0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387});
LineSet594->setCoord(*Coordinate595);

CColorRGBA* ColorRGBA596 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA596->setUSE("HAnimSegmentLineColorRGBA");
LineSet594->setColor(*ColorRGBA596);

Shape593->setGeometry(LineSet594);

HAnimSegment589->addChildren(*Shape593);

HAnimJoint588->addChildren(*HAnimSegment589);

CHAnimJoint* HAnimJoint597 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint597->setName("vt1");
HAnimJoint597->setDEF("hanim_vt1");
HAnimJoint597->setCenter(new float[3]{0.0065,1.4951,-0.0387});
<<<<<<< HEAD
HAnimJoint597->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint597->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint597->setUlimit(new float[3]{0,0,0});
HAnimJoint597->setLlimit(new float[3]{0,0,0});
HAnimJoint597->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment598 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment598->setName("t1");
HAnimSegment598->setDEF("hanim_t1");
//<HAnimJoint name='vt1'/> visualization sphere is placed within <HAnimSegment name='t1'/>
CTouchSensor* TouchSensor599 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor599->setDescription("HAnimJoint vt1, HAnimSegment t1");
HAnimSegment598->addChildren(*TouchSensor599);

CTransform* Transform600 = (CTransform *)(m_pScene.createNode("Transform"));
Transform600->setTranslation(new float[3]{0.0065,1.4951,-0.0387});
CShape* Shape601 = (CShape *)(m_pScene.createNode("Shape"));
Shape601->setUSE("HAnimJointShape");
Transform600->addChildren(*Shape601);

HAnimSegment598->addChildren(*Transform600);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='vc7'/>
CShape* Shape602 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet603 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet603->setVertexCount(new int[1]{2});
CCoordinate* Coordinate604 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate604->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301});
LineSet603->setCoord(*Coordinate604);

CColorRGBA* ColorRGBA605 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA605->setUSE("HAnimSegmentLineColorRGBA");
LineSet603->setColor(*ColorRGBA605);

Shape602->setGeometry(LineSet603);

HAnimSegment598->addChildren(*Shape602);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='l_sternoclavicular'/>
CShape* Shape606 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet607 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet607->setVertexCount(new int[1]{2});
CCoordinate* Coordinate608 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate608->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353});
LineSet607->setCoord(*Coordinate608);

CColorRGBA* ColorRGBA609 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA609->setUSE("HAnimSegmentLineColorRGBA");
LineSet607->setColor(*ColorRGBA609);

Shape606->setGeometry(LineSet607);

HAnimSegment598->addChildren(*Shape606);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='r_sternoclavicular'/>
CShape* Shape610 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet611 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet611->setVertexCount(new int[1]{2});
CCoordinate* Coordinate612 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate612->setPoint(new float[6]{0.0065,1.4951,-0.0387,-0.082,1.4488,-0.0353});
LineSet611->setCoord(*Coordinate612);

CColorRGBA* ColorRGBA613 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA613->setUSE("HAnimSegmentLineColorRGBA");
LineSet611->setColor(*ColorRGBA613);

Shape610->setGeometry(LineSet611);

HAnimSegment598->addChildren(*Shape610);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='suprasternale'/>
CShape* Shape614 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet615 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet615->setVertexCount(new int[1]{2});
CCoordinate* Coordinate616 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate616->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.0084,1.4714,0.0551});
LineSet615->setCoord(*Coordinate616);

CColorRGBA* ColorRGBA617 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA617->setUSE("HAnimSiteLineColorRGBA");
LineSet615->setColor(*ColorRGBA617);

Shape614->setGeometry(LineSet615);

HAnimSegment598->addChildren(*Shape614);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='cervicale'/>
CShape* Shape618 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet619 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet619->setVertexCount(new int[1]{2});
CCoordinate* Coordinate620 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate620->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.0064,1.52,-0.0815});
LineSet619->setCoord(*Coordinate620);

CColorRGBA* ColorRGBA621 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA621->setUSE("HAnimSiteLineColorRGBA");
LineSet619->setColor(*ColorRGBA621);

Shape618->setGeometry(LineSet619);

HAnimSegment598->addChildren(*Shape618);

CHAnimSite* HAnimSite622 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite622->setName("suprasternale_pt");
HAnimSite622->setDEF("hanim_suprasternale_pt");
HAnimSite622->setTranslation(new float[3]{0.0084,1.4714,0.0551});
//HAnimSite visualization shape
CTouchSensor* TouchSensor623 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor623->setDescription("HAnimSite suprasternale");
HAnimSite622->addChildren(*TouchSensor623);

CShape* Shape624 = (CShape *)(m_pScene.createNode("Shape"));
Shape624->setUSE("HAnimSiteShape");
HAnimSite622->addChildren(*Shape624);

HAnimSegment598->addChildren(*HAnimSite622);

CHAnimSite* HAnimSite625 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite625->setName("cervicale_pt");
HAnimSite625->setDEF("hanim_cervicale_pt");
HAnimSite625->setTranslation(new float[3]{0.0064,1.52,-0.0815});
//HAnimSite visualization shape
CTouchSensor* TouchSensor626 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor626->setDescription("HAnimSite cervicale");
HAnimSite625->addChildren(*TouchSensor626);

CShape* Shape627 = (CShape *)(m_pScene.createNode("Shape"));
Shape627->setUSE("HAnimSiteShape");
HAnimSite625->addChildren(*Shape627);

HAnimSegment598->addChildren(*HAnimSite625);

HAnimJoint597->addChildren(*HAnimSegment598);

CHAnimJoint* HAnimJoint628 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint628->setName("vc7");
HAnimJoint628->setDEF("hanim_vc7");
HAnimJoint628->setCenter(new float[3]{0.0066,1.5132,-0.0301});
<<<<<<< HEAD
HAnimJoint628->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint628->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint628->setUlimit(new float[3]{0,0,0});
HAnimJoint628->setLlimit(new float[3]{0,0,0});
HAnimJoint628->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment629 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment629->setName("c7");
HAnimSegment629->setDEF("hanim_c7");
//<HAnimJoint name='vc7'/> visualization sphere is placed within <HAnimSegment name='c7'/>
CTouchSensor* TouchSensor630 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor630->setDescription("HAnimJoint vc7, HAnimSegment c7");
HAnimSegment629->addChildren(*TouchSensor630);

CTransform* Transform631 = (CTransform *)(m_pScene.createNode("Transform"));
Transform631->setTranslation(new float[3]{0.0066,1.5132,-0.0301});
CShape* Shape632 = (CShape *)(m_pScene.createNode("Shape"));
Shape632->setUSE("HAnimJointShape");
Transform631->addChildren(*Shape632);

HAnimSegment629->addChildren(*Transform631);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc7'/> to <HAnimJoint name='vc6'/>
CShape* Shape633 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet634 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet634->setVertexCount(new int[1]{2});
CCoordinate* Coordinate635 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate635->setPoint(new float[6]{0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143});
LineSet634->setCoord(*Coordinate635);

CColorRGBA* ColorRGBA636 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA636->setUSE("HAnimSegmentLineColorRGBA");
LineSet634->setColor(*ColorRGBA636);

Shape633->setGeometry(LineSet634);

HAnimSegment629->addChildren(*Shape633);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='r_neck_base'/>
CShape* Shape637 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet638 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet638->setVertexCount(new int[1]{2});
CCoordinate* Coordinate639 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate639->setPoint(new float[6]{0.0066,1.5132,-0.0301,-0.0419,1.5149,-0.022});
LineSet638->setCoord(*Coordinate639);

CColorRGBA* ColorRGBA640 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA640->setUSE("HAnimSiteLineColorRGBA");
LineSet638->setColor(*ColorRGBA640);

Shape637->setGeometry(LineSet638);

HAnimSegment629->addChildren(*Shape637);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='l_neck_base'/>
CShape* Shape641 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet642 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet642->setVertexCount(new int[1]{2});
CCoordinate* Coordinate643 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate643->setPoint(new float[6]{0.0066,1.5132,-0.0301,0.0646,1.5141,-0.038});
LineSet642->setCoord(*Coordinate643);

CColorRGBA* ColorRGBA644 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA644->setUSE("HAnimSiteLineColorRGBA");
LineSet642->setColor(*ColorRGBA644);

Shape641->setGeometry(LineSet642);

HAnimSegment629->addChildren(*Shape641);

CHAnimSite* HAnimSite645 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite645->setName("r_neck_base_pt");
HAnimSite645->setDEF("hanim_r_neck_base_pt");
HAnimSite645->setTranslation(new float[3]{-0.0419,1.5149,-0.022});
//HAnimSite visualization shape
CTouchSensor* TouchSensor646 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor646->setDescription("HAnimSite r_neck_base");
HAnimSite645->addChildren(*TouchSensor646);

CShape* Shape647 = (CShape *)(m_pScene.createNode("Shape"));
Shape647->setUSE("HAnimSiteShape");
HAnimSite645->addChildren(*Shape647);

HAnimSegment629->addChildren(*HAnimSite645);

CHAnimSite* HAnimSite648 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite648->setName("l_neck_base_pt");
HAnimSite648->setDEF("hanim_l_neck_base_pt");
HAnimSite648->setTranslation(new float[3]{0.0646,1.5141,-0.038});
//HAnimSite visualization shape
CTouchSensor* TouchSensor649 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor649->setDescription("HAnimSite l_neck_base");
HAnimSite648->addChildren(*TouchSensor649);

CShape* Shape650 = (CShape *)(m_pScene.createNode("Shape"));
Shape650->setUSE("HAnimSiteShape");
HAnimSite648->addChildren(*Shape650);

HAnimSegment629->addChildren(*HAnimSite648);

HAnimJoint628->addChildren(*HAnimSegment629);

CHAnimJoint* HAnimJoint651 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint651->setName("vc6");
HAnimJoint651->setDEF("hanim_vc6");
HAnimJoint651->setCenter(new float[3]{0.0066,1.5357,-0.0143});
<<<<<<< HEAD
HAnimJoint651->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint651->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint651->setUlimit(new float[3]{0,0,0});
HAnimJoint651->setLlimit(new float[3]{0,0,0});
HAnimJoint651->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment652 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment652->setName("c6");
HAnimSegment652->setDEF("hanim_c6");
//<HAnimJoint name='vc6'/> visualization sphere is placed within <HAnimSegment name='c6'/>
CTouchSensor* TouchSensor653 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor653->setDescription("HAnimJoint vc6, HAnimSegment c6");
HAnimSegment652->addChildren(*TouchSensor653);

CTransform* Transform654 = (CTransform *)(m_pScene.createNode("Transform"));
Transform654->setTranslation(new float[3]{0.0066,1.5357,-0.0143});
CShape* Shape655 = (CShape *)(m_pScene.createNode("Shape"));
Shape655->setUSE("HAnimJointShape");
Transform654->addChildren(*Shape655);

HAnimSegment652->addChildren(*Transform654);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc6'/> to <HAnimJoint name='vc5'/>
CShape* Shape656 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet657 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet657->setVertexCount(new int[1]{2});
CCoordinate* Coordinate658 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate658->setPoint(new float[6]{0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082});
LineSet657->setCoord(*Coordinate658);

CColorRGBA* ColorRGBA659 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA659->setUSE("HAnimSegmentLineColorRGBA");
LineSet657->setColor(*ColorRGBA659);

Shape656->setGeometry(LineSet657);

HAnimSegment652->addChildren(*Shape656);

HAnimJoint651->addChildren(*HAnimSegment652);

CHAnimJoint* HAnimJoint660 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint660->setName("vc5");
HAnimJoint660->setDEF("hanim_vc5");
HAnimJoint660->setCenter(new float[3]{0.0066,1.552,-0.0082});
<<<<<<< HEAD
HAnimJoint660->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint660->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint660->setUlimit(new float[3]{0,0,0});
HAnimJoint660->setLlimit(new float[3]{0,0,0});
HAnimJoint660->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment661 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment661->setName("c5");
HAnimSegment661->setDEF("hanim_c5");
//<HAnimJoint name='vc5'/> visualization sphere is placed within <HAnimSegment name='c5'/>
CTouchSensor* TouchSensor662 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor662->setDescription("HAnimJoint vc5, HAnimSegment c5");
HAnimSegment661->addChildren(*TouchSensor662);

CTransform* Transform663 = (CTransform *)(m_pScene.createNode("Transform"));
Transform663->setTranslation(new float[3]{0.0066,1.552,-0.0082});
CShape* Shape664 = (CShape *)(m_pScene.createNode("Shape"));
Shape664->setUSE("HAnimJointShape");
Transform663->addChildren(*Shape664);

HAnimSegment661->addChildren(*Transform663);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc5'/> to <HAnimJoint name='vc4'/>
CShape* Shape665 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet666 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet666->setVertexCount(new int[1]{2});
CCoordinate* Coordinate667 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate667->setPoint(new float[6]{0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084});
LineSet666->setCoord(*Coordinate667);

CColorRGBA* ColorRGBA668 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA668->setUSE("HAnimSegmentLineColorRGBA");
LineSet666->setColor(*ColorRGBA668);

Shape665->setGeometry(LineSet666);

HAnimSegment661->addChildren(*Shape665);

HAnimJoint660->addChildren(*HAnimSegment661);

CHAnimJoint* HAnimJoint669 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint669->setName("vc4");
HAnimJoint669->setDEF("hanim_vc4");
HAnimJoint669->setCenter(new float[3]{0.0066,1.5662,-0.0084});
<<<<<<< HEAD
HAnimJoint669->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint669->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint669->setUlimit(new float[3]{0,0,0});
HAnimJoint669->setLlimit(new float[3]{0,0,0});
HAnimJoint669->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment670 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment670->setName("c4");
HAnimSegment670->setDEF("hanim_c4");
//<HAnimJoint name='vc4'/> visualization sphere is placed within <HAnimSegment name='c4'/>
CTouchSensor* TouchSensor671 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor671->setDescription("HAnimJoint vc4, HAnimSegment c4");
HAnimSegment670->addChildren(*TouchSensor671);

CTransform* Transform672 = (CTransform *)(m_pScene.createNode("Transform"));
Transform672->setTranslation(new float[3]{0.0066,1.5662,-0.0084});
CShape* Shape673 = (CShape *)(m_pScene.createNode("Shape"));
Shape673->setUSE("HAnimJointShape");
Transform672->addChildren(*Shape673);

HAnimSegment670->addChildren(*Transform672);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc4'/> to <HAnimJoint name='vc3'/>
CShape* Shape674 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet675 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet675->setVertexCount(new int[1]{2});
CCoordinate* Coordinate676 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate676->setPoint(new float[6]{0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103});
LineSet675->setCoord(*Coordinate676);

CColorRGBA* ColorRGBA677 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA677->setUSE("HAnimSegmentLineColorRGBA");
LineSet675->setColor(*ColorRGBA677);

Shape674->setGeometry(LineSet675);

HAnimSegment670->addChildren(*Shape674);

HAnimJoint669->addChildren(*HAnimSegment670);

CHAnimJoint* HAnimJoint678 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint678->setName("vc3");
HAnimJoint678->setDEF("hanim_vc3");
HAnimJoint678->setCenter(new float[3]{0.0066,1.58,-0.0103});
<<<<<<< HEAD
HAnimJoint678->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint678->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint678->setUlimit(new float[3]{0,0,0});
HAnimJoint678->setLlimit(new float[3]{0,0,0});
HAnimJoint678->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment679 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment679->setName("c3");
HAnimSegment679->setDEF("hanim_c3");
//<HAnimJoint name='vc3'/> visualization sphere is placed within <HAnimSegment name='c3'/>
CTouchSensor* TouchSensor680 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor680->setDescription("HAnimJoint vc3, HAnimSegment c3");
HAnimSegment679->addChildren(*TouchSensor680);

CTransform* Transform681 = (CTransform *)(m_pScene.createNode("Transform"));
Transform681->setTranslation(new float[3]{0.0066,1.58,-0.0103});
CShape* Shape682 = (CShape *)(m_pScene.createNode("Shape"));
Shape682->setUSE("HAnimJointShape");
Transform681->addChildren(*Shape682);

HAnimSegment679->addChildren(*Transform681);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc3'/> to <HAnimJoint name='vc2'/>
CShape* Shape683 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet684 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet684->setVertexCount(new int[1]{2});
CCoordinate* Coordinate685 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate685->setPoint(new float[6]{0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103});
LineSet684->setCoord(*Coordinate685);

CColorRGBA* ColorRGBA686 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA686->setUSE("HAnimSegmentLineColorRGBA");
LineSet684->setColor(*ColorRGBA686);

Shape683->setGeometry(LineSet684);

HAnimSegment679->addChildren(*Shape683);

HAnimJoint678->addChildren(*HAnimSegment679);

CHAnimJoint* HAnimJoint687 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint687->setName("vc2");
HAnimJoint687->setDEF("hanim_vc2");
HAnimJoint687->setCenter(new float[3]{0.0066,1.5928,-0.0103});
<<<<<<< HEAD
HAnimJoint687->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint687->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint687->setUlimit(new float[3]{0,0,0});
HAnimJoint687->setLlimit(new float[3]{0,0,0});
HAnimJoint687->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment688 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment688->setName("c2");
HAnimSegment688->setDEF("hanim_c2");
//<HAnimJoint name='vc2'/> visualization sphere is placed within <HAnimSegment name='c2'/>
CTouchSensor* TouchSensor689 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor689->setDescription("HAnimJoint vc2, HAnimSegment c2");
HAnimSegment688->addChildren(*TouchSensor689);

CTransform* Transform690 = (CTransform *)(m_pScene.createNode("Transform"));
Transform690->setTranslation(new float[3]{0.0066,1.5928,-0.0103});
CShape* Shape691 = (CShape *)(m_pScene.createNode("Shape"));
Shape691->setUSE("HAnimJointShape");
Transform690->addChildren(*Shape691);

HAnimSegment688->addChildren(*Transform690);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc2'/> to <HAnimJoint name='vc1'/>
CShape* Shape692 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet693 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet693->setVertexCount(new int[1]{2});
CCoordinate* Coordinate694 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate694->setPoint(new float[6]{0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034});
LineSet693->setCoord(*Coordinate694);

CColorRGBA* ColorRGBA695 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA695->setUSE("HAnimSegmentLineColorRGBA");
LineSet693->setColor(*ColorRGBA695);

Shape692->setGeometry(LineSet693);

HAnimSegment688->addChildren(*Shape692);

HAnimJoint687->addChildren(*HAnimSegment688);

CHAnimJoint* HAnimJoint696 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint696->setName("vc1");
HAnimJoint696->setDEF("hanim_vc1");
HAnimJoint696->setCenter(new float[3]{0.0066,1.6144,-0.0034});
<<<<<<< HEAD
HAnimJoint696->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint696->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint696->setUlimit(new float[3]{0,0,0});
HAnimJoint696->setLlimit(new float[3]{0,0,0});
HAnimJoint696->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment697 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment697->setName("c1");
HAnimSegment697->setDEF("hanim_c1");
//<HAnimJoint name='vc1'/> visualization sphere is placed within <HAnimSegment name='c1'/>
CTouchSensor* TouchSensor698 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor698->setDescription("HAnimJoint vc1, HAnimSegment c1");
HAnimSegment697->addChildren(*TouchSensor698);

CTransform* Transform699 = (CTransform *)(m_pScene.createNode("Transform"));
Transform699->setTranslation(new float[3]{0.0066,1.6144,-0.0034});
CShape* Shape700 = (CShape *)(m_pScene.createNode("Shape"));
Shape700->setUSE("HAnimJointShape");
Transform699->addChildren(*Shape700);

HAnimSegment697->addChildren(*Transform699);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc1'/> to <HAnimJoint name='skullbase'/>
CShape* Shape701 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet702 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet702->setVertexCount(new int[1]{2});
CCoordinate* Coordinate703 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate703->setPoint(new float[6]{0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236});
LineSet702->setCoord(*Coordinate703);

CColorRGBA* ColorRGBA704 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA704->setUSE("HAnimSegmentLineColorRGBA");
LineSet702->setColor(*ColorRGBA704);

Shape701->setGeometry(LineSet702);

HAnimSegment697->addChildren(*Shape701);

HAnimJoint696->addChildren(*HAnimSegment697);

CHAnimJoint* HAnimJoint705 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint705->setName("skullbase");
HAnimJoint705->setDEF("hanim_skullbase");
HAnimJoint705->setCenter(new float[3]{0.0044,1.6209,0.0236});
<<<<<<< HEAD
HAnimJoint705->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint705->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint705->setUlimit(new float[3]{0,0,0});
HAnimJoint705->setLlimit(new float[3]{0,0,0});
HAnimJoint705->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment706 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment706->setName("skull");
HAnimSegment706->setDEF("hanim_skull");
//<HAnimJoint name='skullbase'/> visualization sphere is placed within <HAnimSegment name='skull'/>
CTouchSensor* TouchSensor707 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor707->setDescription("HAnimJoint skullbase, HAnimSegment skull");
HAnimSegment706->addChildren(*TouchSensor707);

CTransform* Transform708 = (CTransform *)(m_pScene.createNode("Transform"));
Transform708->setTranslation(new float[3]{0.0044,1.6209,0.0236});
CShape* Shape709 = (CShape *)(m_pScene.createNode("Shape"));
Shape709->setUSE("HAnimJointShape");
Transform708->addChildren(*Shape709);

HAnimSegment706->addChildren(*Transform708);

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyeball_joint'/>
CShape* Shape710 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet711 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet711->setVertexCount(new int[1]{2});
CCoordinate* Coordinate712 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate712->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0336,1.6332,0.0502});
LineSet711->setCoord(*Coordinate712);

CColorRGBA* ColorRGBA713 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA713->setUSE("HAnimSegmentLineColorRGBA");
LineSet711->setColor(*ColorRGBA713);

Shape710->setGeometry(LineSet711);

HAnimSegment706->addChildren(*Shape710);

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyelid_joint'/>
CShape* Shape714 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet715 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet715->setVertexCount(new int[1]{2});
CCoordinate* Coordinate716 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate716->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0336,1.6332,0.0502});
LineSet715->setCoord(*Coordinate716);

CColorRGBA* ColorRGBA717 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA717->setUSE("HAnimSegmentLineColorRGBA");
LineSet715->setColor(*ColorRGBA717);

Shape714->setGeometry(LineSet715);

HAnimSegment706->addChildren(*Shape714);

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyebrow_joint'/>
CShape* Shape718 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet719 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet719->setVertexCount(new int[1]{2});
CCoordinate* Coordinate720 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate720->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0336,1.635,0.0506});
LineSet719->setCoord(*Coordinate720);

CColorRGBA* ColorRGBA721 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA721->setUSE("HAnimSegmentLineColorRGBA");
LineSet719->setColor(*ColorRGBA721);

Shape718->setGeometry(LineSet719);

HAnimSegment706->addChildren(*Shape718);

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyeball_joint'/>
CShape* Shape722 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet723 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet723->setVertexCount(new int[1]{2});
CCoordinate* Coordinate724 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate724->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502});
LineSet723->setCoord(*Coordinate724);

CColorRGBA* ColorRGBA725 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA725->setUSE("HAnimSegmentLineColorRGBA");
LineSet723->setColor(*ColorRGBA725);

Shape722->setGeometry(LineSet723);

HAnimSegment706->addChildren(*Shape722);

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyelid_joint'/>
CShape* Shape726 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet727 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet727->setVertexCount(new int[1]{2});
CCoordinate* Coordinate728 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate728->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502});
LineSet727->setCoord(*Coordinate728);

CColorRGBA* ColorRGBA729 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA729->setUSE("HAnimSegmentLineColorRGBA");
LineSet727->setColor(*ColorRGBA729);

Shape726->setGeometry(LineSet727);

HAnimSegment706->addChildren(*Shape726);

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyebrow_joint'/>
CShape* Shape730 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet731 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet731->setVertexCount(new int[1]{2});
CCoordinate* Coordinate732 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate732->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0336,1.635,0.0506});
LineSet731->setCoord(*Coordinate732);

CColorRGBA* ColorRGBA733 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA733->setUSE("HAnimSegmentLineColorRGBA");
LineSet731->setColor(*ColorRGBA733);

Shape730->setGeometry(LineSet731);

HAnimSegment706->addChildren(*Shape730);

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='temporomandibular'/>
CShape* Shape734 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet735 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet735->setVertexCount(new int[1]{2});
CCoordinate* Coordinate736 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate736->setPoint(new float[6]{0.0044,1.6209,0.0236,0,1.63,0.015});
LineSet735->setCoord(*Coordinate736);

CColorRGBA* ColorRGBA737 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA737->setUSE("HAnimSegmentLineColorRGBA");
LineSet735->setColor(*ColorRGBA737);

Shape734->setGeometry(LineSet735);

HAnimSegment706->addChildren(*Shape734);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='skull_tip'/>
CShape* Shape738 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet739 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet739->setVertexCount(new int[1]{2});
CCoordinate* Coordinate740 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate740->setPoint(new float[6]{0.0044,1.6209,0.0236,0.005,1.7504,0.0055});
LineSet739->setCoord(*Coordinate740);

CColorRGBA* ColorRGBA741 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA741->setUSE("HAnimSiteLineColorRGBA");
LineSet739->setColor(*ColorRGBA741);

Shape738->setGeometry(LineSet739);

HAnimSegment706->addChildren(*Shape738);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='sellion'/>
CShape* Shape742 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet743 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet743->setVertexCount(new int[1]{2});
CCoordinate* Coordinate744 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate744->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0058,1.6316,0.0852});
LineSet743->setCoord(*Coordinate744);

CColorRGBA* ColorRGBA745 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA745->setUSE("HAnimSiteLineColorRGBA");
LineSet743->setColor(*ColorRGBA745);

Shape742->setGeometry(LineSet743);

HAnimSegment706->addChildren(*Shape742);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_infraorbitale'/>
CShape* Shape746 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet747 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet747->setVertexCount(new int[1]{2});
CCoordinate* Coordinate748 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate748->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0237,1.6171,0.0752});
LineSet747->setCoord(*Coordinate748);

CColorRGBA* ColorRGBA749 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA749->setUSE("HAnimSiteLineColorRGBA");
LineSet747->setColor(*ColorRGBA749);

Shape746->setGeometry(LineSet747);

HAnimSegment706->addChildren(*Shape746);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_infraorbitale'/>
CShape* Shape750 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet751 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet751->setVertexCount(new int[1]{2});
CCoordinate* Coordinate752 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate752->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0341,1.6171,0.0752});
LineSet751->setCoord(*Coordinate752);

CColorRGBA* ColorRGBA753 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA753->setUSE("HAnimSiteLineColorRGBA");
LineSet751->setColor(*ColorRGBA753);

Shape750->setGeometry(LineSet751);

HAnimSegment706->addChildren(*Shape750);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='supramenton'/>
CShape* Shape754 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet755 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet755->setVertexCount(new int[1]{2});
CCoordinate* Coordinate756 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate756->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0061,1.541,0.0805});
LineSet755->setCoord(*Coordinate756);

CColorRGBA* ColorRGBA757 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA757->setUSE("HAnimSiteLineColorRGBA");
LineSet755->setColor(*ColorRGBA757);

Shape754->setGeometry(LineSet755);

HAnimSegment706->addChildren(*Shape754);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_tragion'/>
CShape* Shape758 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet759 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet759->setVertexCount(new int[1]{2});
CCoordinate* Coordinate760 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate760->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0646,1.6347,0.0302});
LineSet759->setCoord(*Coordinate760);

CColorRGBA* ColorRGBA761 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA761->setUSE("HAnimSiteLineColorRGBA");
LineSet759->setColor(*ColorRGBA761);

Shape758->setGeometry(LineSet759);

HAnimSegment706->addChildren(*Shape758);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_gonion'/>
CShape* Shape762 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet763 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet763->setVertexCount(new int[1]{2});
CCoordinate* Coordinate764 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate764->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.052,1.5529,0.0347});
LineSet763->setCoord(*Coordinate764);

CColorRGBA* ColorRGBA765 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA765->setUSE("HAnimSiteLineColorRGBA");
LineSet763->setColor(*ColorRGBA765);

Shape762->setGeometry(LineSet763);

HAnimSegment706->addChildren(*Shape762);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_tragion'/>
CShape* Shape766 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet767 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet767->setVertexCount(new int[1]{2});
CCoordinate* Coordinate768 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate768->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0739,1.6348,0.0282});
LineSet767->setCoord(*Coordinate768);

CColorRGBA* ColorRGBA769 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA769->setUSE("HAnimSiteLineColorRGBA");
LineSet767->setColor(*ColorRGBA769);

Shape766->setGeometry(LineSet767);

HAnimSegment706->addChildren(*Shape766);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_gonion'/>
CShape* Shape770 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet771 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet771->setVertexCount(new int[1]{2});
CCoordinate* Coordinate772 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate772->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0631,1.553,0.033});
LineSet771->setCoord(*Coordinate772);

CColorRGBA* ColorRGBA773 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA773->setUSE("HAnimSiteLineColorRGBA");
LineSet771->setColor(*ColorRGBA773);

Shape770->setGeometry(LineSet771);

HAnimSegment706->addChildren(*Shape770);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='nuchale'/>
CShape* Shape774 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet775 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet775->setVertexCount(new int[1]{2});
CCoordinate* Coordinate776 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate776->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0039,1.5972,-0.0796});
LineSet775->setCoord(*Coordinate776);

CColorRGBA* ColorRGBA777 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA777->setUSE("HAnimSiteLineColorRGBA");
LineSet775->setColor(*ColorRGBA777);

Shape774->setGeometry(LineSet775);

HAnimSegment706->addChildren(*Shape774);

CHAnimSite* HAnimSite778 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite778->setName("skull_tip");
HAnimSite778->setDEF("hanim_skull_tip");
HAnimSite778->setTranslation(new float[3]{0.005,1.7504,0.0055});
//TODO move skull_tip x to zero, check others for symmetry
//HAnimSite visualization shape
CTouchSensor* TouchSensor779 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor779->setDescription("HAnimSite skull_tip");
HAnimSite778->addChildren(*TouchSensor779);

CShape* Shape780 = (CShape *)(m_pScene.createNode("Shape"));
Shape780->setUSE("HAnimSiteShape");
HAnimSite778->addChildren(*Shape780);

HAnimSegment706->addChildren(*HAnimSite778);

CHAnimSite* HAnimSite781 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite781->setName("sellion_pt");
HAnimSite781->setDEF("hanim_sellion_pt");
HAnimSite781->setTranslation(new float[3]{0.0058,1.6316,0.0852});
//HAnimSite visualization shape
CTouchSensor* TouchSensor782 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor782->setDescription("HAnimSite sellion");
HAnimSite781->addChildren(*TouchSensor782);

CShape* Shape783 = (CShape *)(m_pScene.createNode("Shape"));
Shape783->setUSE("HAnimSiteShape");
HAnimSite781->addChildren(*Shape783);

HAnimSegment706->addChildren(*HAnimSite781);

CHAnimSite* HAnimSite784 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite784->setName("r_infraorbitale_pt");
HAnimSite784->setDEF("hanim_r_infraorbitale_pt");
HAnimSite784->setTranslation(new float[3]{-0.0237,1.6171,0.0752});
//HAnimSite visualization shape
CTouchSensor* TouchSensor785 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor785->setDescription("HAnimSite r_infraorbitale");
HAnimSite784->addChildren(*TouchSensor785);

CShape* Shape786 = (CShape *)(m_pScene.createNode("Shape"));
Shape786->setUSE("HAnimSiteShape");
HAnimSite784->addChildren(*Shape786);

HAnimSegment706->addChildren(*HAnimSite784);

CHAnimSite* HAnimSite787 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite787->setName("l_infraorbitale_pt");
HAnimSite787->setDEF("hanim_l_infraorbitale_pt");
HAnimSite787->setTranslation(new float[3]{0.0341,1.6171,0.0752});
//HAnimSite visualization shape
CTouchSensor* TouchSensor788 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor788->setDescription("HAnimSite l_infraorbitale");
HAnimSite787->addChildren(*TouchSensor788);

CShape* Shape789 = (CShape *)(m_pScene.createNode("Shape"));
Shape789->setUSE("HAnimSiteShape");
HAnimSite787->addChildren(*Shape789);

HAnimSegment706->addChildren(*HAnimSite787);

CHAnimSite* HAnimSite790 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite790->setName("supramenton_pt");
HAnimSite790->setDEF("hanim_supramenton_pt");
HAnimSite790->setTranslation(new float[3]{0.0061,1.541,0.0805});
//HAnimSite visualization shape
CTouchSensor* TouchSensor791 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor791->setDescription("HAnimSite supramenton");
HAnimSite790->addChildren(*TouchSensor791);

CShape* Shape792 = (CShape *)(m_pScene.createNode("Shape"));
Shape792->setUSE("HAnimSiteShape");
HAnimSite790->addChildren(*Shape792);

HAnimSegment706->addChildren(*HAnimSite790);

CHAnimSite* HAnimSite793 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite793->setName("r_tragion_pt");
HAnimSite793->setDEF("hanim_r_tragion_pt");
HAnimSite793->setTranslation(new float[3]{-0.0646,1.6347,0.0302});
//HAnimSite visualization shape
CTouchSensor* TouchSensor794 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor794->setDescription("HAnimSite r_tragion");
HAnimSite793->addChildren(*TouchSensor794);

CShape* Shape795 = (CShape *)(m_pScene.createNode("Shape"));
Shape795->setUSE("HAnimSiteShape");
HAnimSite793->addChildren(*Shape795);

HAnimSegment706->addChildren(*HAnimSite793);

CHAnimSite* HAnimSite796 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite796->setName("r_gonion_pt");
HAnimSite796->setDEF("hanim_r_gonion_pt");
HAnimSite796->setTranslation(new float[3]{-0.052,1.5529,0.0347});
//HAnimSite visualization shape
CTouchSensor* TouchSensor797 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor797->setDescription("HAnimSite r_gonion");
HAnimSite796->addChildren(*TouchSensor797);

CShape* Shape798 = (CShape *)(m_pScene.createNode("Shape"));
Shape798->setUSE("HAnimSiteShape");
HAnimSite796->addChildren(*Shape798);

HAnimSegment706->addChildren(*HAnimSite796);

CHAnimSite* HAnimSite799 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite799->setName("l_tragion_pt");
HAnimSite799->setDEF("hanim_l_tragion_pt");
HAnimSite799->setTranslation(new float[3]{0.0739,1.6348,0.0282});
//HAnimSite visualization shape
CTouchSensor* TouchSensor800 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor800->setDescription("HAnimSite l_tragion");
HAnimSite799->addChildren(*TouchSensor800);

CShape* Shape801 = (CShape *)(m_pScene.createNode("Shape"));
Shape801->setUSE("HAnimSiteShape");
HAnimSite799->addChildren(*Shape801);

HAnimSegment706->addChildren(*HAnimSite799);

CHAnimSite* HAnimSite802 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite802->setName("l_gonion_pt");
HAnimSite802->setDEF("hanim_l_gonion_pt");
HAnimSite802->setTranslation(new float[3]{0.0631,1.553,0.033});
//HAnimSite visualization shape
CTouchSensor* TouchSensor803 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor803->setDescription("HAnimSite l_gonion");
HAnimSite802->addChildren(*TouchSensor803);

CShape* Shape804 = (CShape *)(m_pScene.createNode("Shape"));
Shape804->setUSE("HAnimSiteShape");
HAnimSite802->addChildren(*Shape804);

HAnimSegment706->addChildren(*HAnimSite802);

CHAnimSite* HAnimSite805 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite805->setName("nuchale_pt");
HAnimSite805->setDEF("hanim_nuchale_pt");
HAnimSite805->setTranslation(new float[3]{0.0039,1.5972,-0.0796});
//HAnimSite visualization shape
CTouchSensor* TouchSensor806 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor806->setDescription("HAnimSite nuchale");
HAnimSite805->addChildren(*TouchSensor806);

CShape* Shape807 = (CShape *)(m_pScene.createNode("Shape"));
Shape807->setUSE("HAnimSiteShape");
HAnimSite805->addChildren(*Shape807);

HAnimSegment706->addChildren(*HAnimSite805);

HAnimJoint705->addChildren(*HAnimSegment706);

CHAnimJoint* HAnimJoint808 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint808->setName("l_eyeball_joint");
HAnimJoint808->setDEF("hanim_l_eyeball_joint");
HAnimJoint808->setCenter(new float[3]{0.0336,1.6332,0.0502});
<<<<<<< HEAD
HAnimJoint808->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint808->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint808->setUlimit(new float[3]{0,0,0});
HAnimJoint808->setLlimit(new float[3]{0,0,0});
HAnimJoint808->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment809 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment809->setName("l_eyeball");
HAnimSegment809->setDEF("hanim_l_eyeball");
//<HAnimJoint name='l_eyeball_joint'/> visualization sphere is placed within <HAnimSegment name='l_eyeball'/>
CTouchSensor* TouchSensor810 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor810->setDescription("HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball");
HAnimSegment809->addChildren(*TouchSensor810);

CTransform* Transform811 = (CTransform *)(m_pScene.createNode("Transform"));
Transform811->setTranslation(new float[3]{0.0336,1.6332,0.0502});
CShape* Shape812 = (CShape *)(m_pScene.createNode("Shape"));
Shape812->setUSE("HAnimJointShape");
Transform811->addChildren(*Shape812);

HAnimSegment809->addChildren(*Transform811);

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_eyeball_joint'/> to <HAnimSite name='l_eyeball_site_view'/>
CShape* Shape813 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet814 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet814->setVertexCount(new int[1]{2});
CCoordinate* Coordinate815 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate815->setPoint(new float[6]{0.0336,1.6332,0.0502,0.034,1.64,0.05});
LineSet814->setCoord(*Coordinate815);

CColorRGBA* ColorRGBA816 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA816->setDEF("HAnimSiteViewpointLineColorRGBA");
ColorRGBA816->setColor(new float[8]{0,0,1,1,0,0,1,0.1});
LineSet814->setColor(*ColorRGBA816);

Shape813->setGeometry(LineSet814);

HAnimSegment809->addChildren(*Shape813);

CHAnimSite* HAnimSite817 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite817->setName("l_eyeball_site_view");
HAnimSite817->setDEF("hanim_l_eyeball_site_view");
HAnimSite817->setTranslation(new float[3]{0.034,1.64,0.05});
//HAnimSite visualization shape
CTouchSensor* TouchSensor818 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor818->setDescription("HAnimSite l_eyeball_site_view");
HAnimSite817->addChildren(*TouchSensor818);

CShape* Shape819 = (CShape *)(m_pScene.createNode("Shape"));
Shape819->setUSE("HAnimSiteShape");
HAnimSite817->addChildren(*Shape819);

CViewpoint* Viewpoint820 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint820->setDEF("hanim_l_eyeball_site_viewpoint");
Viewpoint820->setDescription("l_eyeball_site_viewpoint looking forward");
Viewpoint820->setOrientation(new float[4]{0,1,0,3.141593});
Viewpoint820->setPosition(new float[3]{0,0,0});
HAnimSite817->addChildren(*Viewpoint820);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor821 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor821->setDescription("HAnimSite hanim_l_eyeball_site_view Viewpoint");
Anchor821->setUrl(new CString[1]{"#hanim_l_eyeball_site_viewpoint"}, 1);
CLOD* LOD822 = (CLOD *)(m_pScene.createNode("LOD"));
LOD822->setForceTransitions(True);
LOD822->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo823 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo823->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD822->addChildren(*WorldInfo823);

CShape* Shape824 = (CShape *)(m_pScene.createNode("Shape"));
Shape824->setDEF("HAnimSiteViewpointShape");
CIndexedFaceSet* IndexedFaceSet825 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet825->setDEF("SiteViewpointDiamondIFS");
IndexedFaceSet825->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet825->setCreaseAngle(0.5);
CCoordinate* Coordinate826 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate826->setPoint(new float[18]{0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
IndexedFaceSet825->setCoord(*Coordinate826);

Shape824->setGeometry(IndexedFaceSet825);

CAppearance* Appearance827 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material828 = (CMaterial *)(m_pScene.createNode("Material"));
Material828->setDiffuseColor(new float[3]{0,0,1});
Material828->setTransparency(0.6);
Appearance827->setMaterial(*Material828);

Shape824->setAppearance(*Appearance827);

LOD822->addChildren(*Shape824);

Anchor821->addChildren(*LOD822);

HAnimSite817->addChildren(*Anchor821);

HAnimSegment809->addChildren(*HAnimSite817);

HAnimJoint808->addChildren(*HAnimSegment809);

HAnimJoint705->addChildren(*HAnimJoint808);

CHAnimJoint* HAnimJoint829 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint829->setName("l_eyelid_joint");
HAnimJoint829->setDEF("hanim_l_eyelid_joint");
HAnimJoint829->setCenter(new float[3]{0.0336,1.6332,0.0502});
<<<<<<< HEAD
HAnimJoint829->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint829->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint829->setUlimit(new float[3]{0,0,0});
HAnimJoint829->setLlimit(new float[3]{0,0,0});
HAnimJoint829->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment830 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment830->setName("l_eyelid");
HAnimSegment830->setDEF("hanim_l_eyelid");
//<HAnimJoint name='l_eyelid_joint'/> visualization sphere is placed within <HAnimSegment name='l_eyelid'/>
CTouchSensor* TouchSensor831 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor831->setDescription("HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid");
HAnimSegment830->addChildren(*TouchSensor831);

CTransform* Transform832 = (CTransform *)(m_pScene.createNode("Transform"));
Transform832->setTranslation(new float[3]{0.0336,1.6332,0.0502});
CShape* Shape833 = (CShape *)(m_pScene.createNode("Shape"));
Shape833->setUSE("HAnimJointShape");
Transform832->addChildren(*Shape833);

HAnimSegment830->addChildren(*Transform832);

HAnimJoint829->addChildren(*HAnimSegment830);

HAnimJoint705->addChildren(*HAnimJoint829);

CHAnimJoint* HAnimJoint834 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint834->setName("l_eyebrow_joint");
HAnimJoint834->setDEF("hanim_l_eyebrow_joint");
HAnimJoint834->setCenter(new float[3]{0.0336,1.635,0.0506});
<<<<<<< HEAD
HAnimJoint834->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint834->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint834->setUlimit(new float[3]{0,0,0});
HAnimJoint834->setLlimit(new float[3]{0,0,0});
HAnimJoint834->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment835 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment835->setName("l_eyebrow");
HAnimSegment835->setDEF("hanim_l_eyebrow");
//<HAnimJoint name='l_eyebrow_joint'/> visualization sphere is placed within <HAnimSegment name='l_eyebrow'/>
CTouchSensor* TouchSensor836 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor836->setDescription("HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow");
HAnimSegment835->addChildren(*TouchSensor836);

CTransform* Transform837 = (CTransform *)(m_pScene.createNode("Transform"));
Transform837->setTranslation(new float[3]{0.0336,1.635,0.0506});
CShape* Shape838 = (CShape *)(m_pScene.createNode("Shape"));
Shape838->setUSE("HAnimJointShape");
Transform837->addChildren(*Shape838);

HAnimSegment835->addChildren(*Transform837);

HAnimJoint834->addChildren(*HAnimSegment835);

HAnimJoint705->addChildren(*HAnimJoint834);

CHAnimJoint* HAnimJoint839 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint839->setName("r_eyeball_joint");
HAnimJoint839->setDEF("hanim_r_eyeball_joint");
HAnimJoint839->setCenter(new float[3]{-0.0336,1.6332,0.0502});
<<<<<<< HEAD
HAnimJoint839->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint839->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint839->setUlimit(new float[3]{0,0,0});
HAnimJoint839->setLlimit(new float[3]{0,0,0});
HAnimJoint839->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment840 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment840->setName("r_eyeball");
HAnimSegment840->setDEF("hanim_r_eyeball");
//<HAnimJoint name='r_eyeball_joint'/> visualization sphere is placed within <HAnimSegment name='r_eyeball'/>
CTouchSensor* TouchSensor841 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor841->setDescription("HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball");
HAnimSegment840->addChildren(*TouchSensor841);

CTransform* Transform842 = (CTransform *)(m_pScene.createNode("Transform"));
Transform842->setTranslation(new float[3]{-0.0336,1.6332,0.0502});
CShape* Shape843 = (CShape *)(m_pScene.createNode("Shape"));
Shape843->setUSE("HAnimJointShape");
Transform842->addChildren(*Shape843);

HAnimSegment840->addChildren(*Transform842);

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_eyeball_joint'/> to <HAnimSite name='r_eyeball_site_view'/>
CShape* Shape844 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet845 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet845->setVertexCount(new int[1]{2});
CCoordinate* Coordinate846 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate846->setPoint(new float[6]{-0.0336,1.6332,0.0502,-0.034,1.64,0.05});
LineSet845->setCoord(*Coordinate846);

CColorRGBA* ColorRGBA847 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA847->setUSE("HAnimSiteViewpointLineColorRGBA");
LineSet845->setColor(*ColorRGBA847);

Shape844->setGeometry(LineSet845);

HAnimSegment840->addChildren(*Shape844);

CHAnimSite* HAnimSite848 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite848->setName("r_eyeball_site_view");
HAnimSite848->setDEF("hanim_r_eyeball_site_view");
HAnimSite848->setTranslation(new float[3]{-0.034,1.64,0.05});
//HAnimSite visualization shape
CTouchSensor* TouchSensor849 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor849->setDescription("HAnimSite r_eyeball_site_view");
HAnimSite848->addChildren(*TouchSensor849);

CShape* Shape850 = (CShape *)(m_pScene.createNode("Shape"));
Shape850->setUSE("HAnimSiteShape");
HAnimSite848->addChildren(*Shape850);

CViewpoint* Viewpoint851 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint851->setDEF("hanim_r_eyeball_site_viewpoint");
Viewpoint851->setDescription("r_eyeball_site_viewpoint looking forward");
Viewpoint851->setOrientation(new float[4]{0,1,0,3.141593});
Viewpoint851->setPosition(new float[3]{0,0,0});
HAnimSite848->addChildren(*Viewpoint851);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor852 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor852->setDescription("HAnimSite hanim_r_eyeball_site_view Viewpoint");
Anchor852->setUrl(new CString[1]{"#hanim_r_eyeball_site_viewpoint"}, 1);
CLOD* LOD853 = (CLOD *)(m_pScene.createNode("LOD"));
LOD853->setForceTransitions(True);
LOD853->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo854 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo854->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD853->addChildren(*WorldInfo854);

CShape* Shape855 = (CShape *)(m_pScene.createNode("Shape"));
Shape855->setUSE("HAnimSiteViewpointShape");
LOD853->addChildren(*Shape855);

Anchor852->addChildren(*LOD853);

HAnimSite848->addChildren(*Anchor852);

HAnimSegment840->addChildren(*HAnimSite848);

HAnimJoint839->addChildren(*HAnimSegment840);

HAnimJoint705->addChildren(*HAnimJoint839);

CHAnimJoint* HAnimJoint856 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint856->setName("r_eyelid_joint");
HAnimJoint856->setDEF("hanim_r_eyelid_joint");
HAnimJoint856->setCenter(new float[3]{-0.0336,1.6332,0.0502});
<<<<<<< HEAD
HAnimJoint856->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint856->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint856->setUlimit(new float[3]{0,0,0});
HAnimJoint856->setLlimit(new float[3]{0,0,0});
HAnimJoint856->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment857 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment857->setName("r_eyelid");
HAnimSegment857->setDEF("hanim_r_eyelid");
//<HAnimJoint name='r_eyelid_joint'/> visualization sphere is placed within <HAnimSegment name='r_eyelid'/>
CTouchSensor* TouchSensor858 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor858->setDescription("HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid");
HAnimSegment857->addChildren(*TouchSensor858);

CTransform* Transform859 = (CTransform *)(m_pScene.createNode("Transform"));
Transform859->setTranslation(new float[3]{-0.0336,1.6332,0.0502});
CShape* Shape860 = (CShape *)(m_pScene.createNode("Shape"));
Shape860->setUSE("HAnimJointShape");
Transform859->addChildren(*Shape860);

HAnimSegment857->addChildren(*Transform859);

HAnimJoint856->addChildren(*HAnimSegment857);

HAnimJoint705->addChildren(*HAnimJoint856);

CHAnimJoint* HAnimJoint861 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint861->setName("r_eyebrow_joint");
HAnimJoint861->setDEF("hanim_r_eyebrow_joint");
HAnimJoint861->setCenter(new float[3]{-0.0336,1.635,0.0506});
<<<<<<< HEAD
HAnimJoint861->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint861->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint861->setUlimit(new float[3]{0,0,0});
HAnimJoint861->setLlimit(new float[3]{0,0,0});
HAnimJoint861->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment862 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment862->setName("r_eyebrow");
HAnimSegment862->setDEF("hanim_r_eyebrow");
//<HAnimJoint name='r_eyebrow_joint'/> visualization sphere is placed within <HAnimSegment name='r_eyebrow'/>
CTouchSensor* TouchSensor863 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor863->setDescription("HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow");
HAnimSegment862->addChildren(*TouchSensor863);

CTransform* Transform864 = (CTransform *)(m_pScene.createNode("Transform"));
Transform864->setTranslation(new float[3]{-0.0336,1.635,0.0506});
CShape* Shape865 = (CShape *)(m_pScene.createNode("Shape"));
Shape865->setUSE("HAnimJointShape");
Transform864->addChildren(*Shape865);

HAnimSegment862->addChildren(*Transform864);

HAnimJoint861->addChildren(*HAnimSegment862);

HAnimJoint705->addChildren(*HAnimJoint861);

CHAnimJoint* HAnimJoint866 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint866->setName("temporomandibular");
HAnimJoint866->setDEF("hanim_temporomandibular");
HAnimJoint866->setCenter(new float[3]{0,1.63,0.015});
<<<<<<< HEAD
HAnimJoint866->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint866->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint866->setUlimit(new float[3]{0,0,0});
HAnimJoint866->setLlimit(new float[3]{0,0,0});
HAnimJoint866->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
//Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint
CHAnimSegment* HAnimSegment867 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment867->setName("jaw");
HAnimSegment867->setDEF("hanim_jaw");
//<HAnimJoint name='temporomandibular'/> visualization sphere is placed within <HAnimSegment name='jaw'/>
CTouchSensor* TouchSensor868 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor868->setDescription("HAnimJoint temporomandibular, HAnimSegment jaw");
HAnimSegment867->addChildren(*TouchSensor868);

CTransform* Transform869 = (CTransform *)(m_pScene.createNode("Transform"));
Transform869->setTranslation(new float[3]{0,1.63,0.015});
CShape* Shape870 = (CShape *)(m_pScene.createNode("Shape"));
Shape870->setUSE("HAnimJointShape");
Transform869->addChildren(*Shape870);

HAnimSegment867->addChildren(*Transform869);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_l_site'/>
CShape* Shape871 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet872 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet872->setVertexCount(new int[1]{2});
CCoordinate* Coordinate873 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate873->setPoint(new float[6]{0,1.63,0.015,0.045,1.63,0});
LineSet872->setCoord(*Coordinate873);

CColorRGBA* ColorRGBA874 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA874->setUSE("HAnimSiteLineColorRGBA");
LineSet872->setColor(*ColorRGBA874);

Shape871->setGeometry(LineSet872);

HAnimSegment867->addChildren(*Shape871);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_r_site'/>
CShape* Shape875 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet876 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet876->setVertexCount(new int[1]{2});
CCoordinate* Coordinate877 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate877->setPoint(new float[6]{0,1.63,0.015,-0.045,1.63,0});
LineSet876->setCoord(*Coordinate877);

CColorRGBA* ColorRGBA878 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA878->setUSE("HAnimSiteLineColorRGBA");
LineSet876->setColor(*ColorRGBA878);

Shape875->setGeometry(LineSet876);

HAnimSegment867->addChildren(*Shape875);

CHAnimSite* HAnimSite879 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite879->setName("temporomandibular_l_site_pt");
HAnimSite879->setDEF("hanim_temporomandibular_l_site_pt");
HAnimSite879->setTranslation(new float[3]{0.045,1.63,0});
//HAnimSite visualization shape
CTouchSensor* TouchSensor880 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor880->setDescription("HAnimSite temporomandibular_l_site");
HAnimSite879->addChildren(*TouchSensor880);

CShape* Shape881 = (CShape *)(m_pScene.createNode("Shape"));
Shape881->setUSE("HAnimSiteShape");
HAnimSite879->addChildren(*Shape881);

HAnimSegment867->addChildren(*HAnimSite879);

CHAnimSite* HAnimSite882 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite882->setName("temporomandibular_r_site_pt");
HAnimSite882->setDEF("hanim_temporomandibular_r_site_pt");
HAnimSite882->setTranslation(new float[3]{-0.045,1.63,0});
//HAnimSite visualization shape
CTouchSensor* TouchSensor883 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor883->setDescription("HAnimSite temporomandibular_r_site");
HAnimSite882->addChildren(*TouchSensor883);

CShape* Shape884 = (CShape *)(m_pScene.createNode("Shape"));
Shape884->setUSE("HAnimSiteShape");
HAnimSite882->addChildren(*Shape884);

HAnimSegment867->addChildren(*HAnimSite882);

HAnimJoint866->addChildren(*HAnimSegment867);

HAnimJoint705->addChildren(*HAnimJoint866);

HAnimJoint696->addChildren(*HAnimJoint705);

HAnimJoint687->addChildren(*HAnimJoint696);

HAnimJoint678->addChildren(*HAnimJoint687);

HAnimJoint669->addChildren(*HAnimJoint678);

HAnimJoint660->addChildren(*HAnimJoint669);

HAnimJoint651->addChildren(*HAnimJoint660);

HAnimJoint628->addChildren(*HAnimJoint651);

HAnimJoint597->addChildren(*HAnimJoint628);

CHAnimJoint* HAnimJoint885 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint885->setName("l_sternoclavicular");
HAnimJoint885->setDEF("hanim_l_sternoclavicular");
HAnimJoint885->setCenter(new float[3]{0.082,1.4488,-0.0353});
<<<<<<< HEAD
HAnimJoint885->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint885->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint885->setUlimit(new float[3]{0,0,0});
HAnimJoint885->setLlimit(new float[3]{0,0,0});
HAnimJoint885->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment886 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment886->setName("l_clavicle");
HAnimSegment886->setDEF("hanim_l_clavicle");
//<HAnimJoint name='l_sternoclavicular'/> visualization sphere is placed within <HAnimSegment name='l_clavicle'/>
CTouchSensor* TouchSensor887 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor887->setDescription("HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle");
HAnimSegment886->addChildren(*TouchSensor887);

CTransform* Transform888 = (CTransform *)(m_pScene.createNode("Transform"));
Transform888->setTranslation(new float[3]{0.082,1.4488,-0.0353});
CShape* Shape889 = (CShape *)(m_pScene.createNode("Shape"));
Shape889->setUSE("HAnimJointShape");
Transform888->addChildren(*Shape889);

HAnimSegment886->addChildren(*Transform888);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_sternoclavicular'/> to <HAnimJoint name='l_acromioclavicular'/>
CShape* Shape890 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet891 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet891->setVertexCount(new int[1]{2});
CCoordinate* Coordinate892 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate892->setPoint(new float[6]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424});
LineSet891->setCoord(*Coordinate892);

CColorRGBA* ColorRGBA893 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA893->setUSE("HAnimSegmentLineColorRGBA");
LineSet891->setColor(*ColorRGBA893);

Shape890->setGeometry(LineSet891);

HAnimSegment886->addChildren(*Shape890);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_clavicale'/>
CShape* Shape894 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet895 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet895->setVertexCount(new int[1]{2});
CCoordinate* Coordinate896 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate896->setPoint(new float[6]{0.082,1.4488,-0.0353,0.0271,1.4943,0.0394});
LineSet895->setCoord(*Coordinate896);

CColorRGBA* ColorRGBA897 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA897->setUSE("HAnimSiteLineColorRGBA");
LineSet895->setColor(*ColorRGBA897);

Shape894->setGeometry(LineSet895);

HAnimSegment886->addChildren(*Shape894);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_acromion'/>
CShape* Shape898 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet899 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet899->setVertexCount(new int[1]{2});
CCoordinate* Coordinate900 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate900->setPoint(new float[6]{0.082,1.4488,-0.0353,0.2032,1.476,-0.049});
LineSet899->setCoord(*Coordinate900);

CColorRGBA* ColorRGBA901 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA901->setUSE("HAnimSiteLineColorRGBA");
LineSet899->setColor(*ColorRGBA901);

Shape898->setGeometry(LineSet899);

HAnimSegment886->addChildren(*Shape898);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_ant'/>
CShape* Shape902 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet903 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet903->setVertexCount(new int[1]{2});
CCoordinate* Coordinate904 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate904->setPoint(new float[6]{0.082,1.4488,-0.0353,0.1777,1.4065,-0.0075});
LineSet903->setCoord(*Coordinate904);

CColorRGBA* ColorRGBA905 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA905->setUSE("HAnimSiteLineColorRGBA");
LineSet903->setColor(*ColorRGBA905);

Shape902->setGeometry(LineSet903);

HAnimSegment886->addChildren(*Shape902);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_post'/>
CShape* Shape906 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet907 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet907->setVertexCount(new int[1]{2});
CCoordinate* Coordinate908 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate908->setPoint(new float[6]{0.082,1.4488,-0.0353,0.1706,1.4072,-0.0875});
LineSet907->setCoord(*Coordinate908);

CColorRGBA* ColorRGBA909 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA909->setUSE("HAnimSiteLineColorRGBA");
LineSet907->setColor(*ColorRGBA909);

Shape906->setGeometry(LineSet907);

HAnimSegment886->addChildren(*Shape906);

CHAnimSite* HAnimSite910 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite910->setName("l_clavicale_pt");
HAnimSite910->setDEF("hanim_l_clavicale_pt");
HAnimSite910->setTranslation(new float[3]{0.0271,1.4943,0.0394});
//HAnimSite visualization shape
CTouchSensor* TouchSensor911 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor911->setDescription("HAnimSite l_clavicale");
HAnimSite910->addChildren(*TouchSensor911);

CShape* Shape912 = (CShape *)(m_pScene.createNode("Shape"));
Shape912->setUSE("HAnimSiteShape");
HAnimSite910->addChildren(*Shape912);

HAnimSegment886->addChildren(*HAnimSite910);

CHAnimSite* HAnimSite913 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite913->setName("l_acromion_pt");
HAnimSite913->setDEF("hanim_l_acromion_pt");
HAnimSite913->setTranslation(new float[3]{0.2032,1.476,-0.049});
//HAnimSite visualization shape
CTouchSensor* TouchSensor914 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor914->setDescription("HAnimSite l_acromion");
HAnimSite913->addChildren(*TouchSensor914);

CShape* Shape915 = (CShape *)(m_pScene.createNode("Shape"));
Shape915->setUSE("HAnimSiteShape");
HAnimSite913->addChildren(*Shape915);

HAnimSegment886->addChildren(*HAnimSite913);

CHAnimSite* HAnimSite916 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite916->setName("l_axilla_ant_pt");
HAnimSite916->setDEF("hanim_l_axilla_ant_pt");
HAnimSite916->setTranslation(new float[3]{0.1777,1.4065,-0.0075});
//HAnimSite visualization shape
CTouchSensor* TouchSensor917 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor917->setDescription("HAnimSite l_axilla_ant");
HAnimSite916->addChildren(*TouchSensor917);

CShape* Shape918 = (CShape *)(m_pScene.createNode("Shape"));
Shape918->setUSE("HAnimSiteShape");
HAnimSite916->addChildren(*Shape918);

HAnimSegment886->addChildren(*HAnimSite916);

CHAnimSite* HAnimSite919 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite919->setName("l_axilla_post_pt");
HAnimSite919->setDEF("hanim_l_axilla_post_pt");
HAnimSite919->setTranslation(new float[3]{0.1706,1.4072,-0.0875});
//HAnimSite visualization shape
CTouchSensor* TouchSensor920 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor920->setDescription("HAnimSite l_axilla_post");
HAnimSite919->addChildren(*TouchSensor920);

CShape* Shape921 = (CShape *)(m_pScene.createNode("Shape"));
Shape921->setUSE("HAnimSiteShape");
HAnimSite919->addChildren(*Shape921);

HAnimSegment886->addChildren(*HAnimSite919);

HAnimJoint885->addChildren(*HAnimSegment886);

CHAnimJoint* HAnimJoint922 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint922->setName("l_acromioclavicular");
HAnimJoint922->setDEF("hanim_l_acromioclavicular");
HAnimJoint922->setCenter(new float[3]{0.0962,1.4269,-0.0424});
<<<<<<< HEAD
HAnimJoint922->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint922->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint922->setUlimit(new float[3]{0,0,0});
HAnimJoint922->setLlimit(new float[3]{0,0,0});
HAnimJoint922->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment923 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment923->setName("l_scapula");
HAnimSegment923->setDEF("hanim_l_scapula");
//<HAnimJoint name='l_acromioclavicular'/> visualization sphere is placed within <HAnimSegment name='l_scapula'/>
CTouchSensor* TouchSensor924 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor924->setDescription("HAnimJoint l_acromioclavicular, HAnimSegment l_scapula");
HAnimSegment923->addChildren(*TouchSensor924);

CTransform* Transform925 = (CTransform *)(m_pScene.createNode("Transform"));
Transform925->setTranslation(new float[3]{0.0962,1.4269,-0.0424});
CShape* Shape926 = (CShape *)(m_pScene.createNode("Shape"));
Shape926->setUSE("HAnimJointShape");
Transform925->addChildren(*Shape926);

HAnimSegment923->addChildren(*Transform925);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_acromioclavicular'/> to <HAnimJoint name='l_shoulder'/>
CShape* Shape927 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet928 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet928->setVertexCount(new int[1]{2});
CCoordinate* Coordinate929 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate929->setPoint(new float[6]{0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387});
LineSet928->setCoord(*Coordinate929);

CColorRGBA* ColorRGBA930 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA930->setUSE("HAnimSegmentLineColorRGBA");
LineSet928->setColor(*ColorRGBA930);

Shape927->setGeometry(LineSet928);

HAnimSegment923->addChildren(*Shape927);

HAnimJoint922->addChildren(*HAnimSegment923);

CHAnimJoint* HAnimJoint931 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint931->setName("l_shoulder");
HAnimJoint931->setDEF("hanim_l_shoulder");
HAnimJoint931->setCenter(new float[3]{0.2029,1.4376,-0.0387});
<<<<<<< HEAD
HAnimJoint931->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint931->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint931->setUlimit(new float[3]{0,0,0});
HAnimJoint931->setLlimit(new float[3]{0,0,0});
HAnimJoint931->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment932 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment932->setName("l_upperarm");
HAnimSegment932->setDEF("hanim_l_upperarm");
//<HAnimJoint name='l_shoulder'/> visualization sphere is placed within <HAnimSegment name='l_upperarm'/>
CTouchSensor* TouchSensor933 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor933->setDescription("HAnimJoint l_shoulder, HAnimSegment l_upperarm");
HAnimSegment932->addChildren(*TouchSensor933);

CTransform* Transform934 = (CTransform *)(m_pScene.createNode("Transform"));
Transform934->setTranslation(new float[3]{0.2029,1.4376,-0.0387});
CShape* Shape935 = (CShape *)(m_pScene.createNode("Shape"));
Shape935->setUSE("HAnimJointShape");
Transform934->addChildren(*Shape935);

HAnimSegment932->addChildren(*Transform934);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_shoulder'/> to <HAnimJoint name='l_elbow'/>
CShape* Shape936 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet937 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet937->setVertexCount(new int[1]{2});
CCoordinate* Coordinate938 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate938->setPoint(new float[6]{0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682});
LineSet937->setCoord(*Coordinate938);

CColorRGBA* ColorRGBA939 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA939->setUSE("HAnimSegmentLineColorRGBA");
LineSet937->setColor(*ColorRGBA939);

Shape936->setGeometry(LineSet937);

HAnimSegment932->addChildren(*Shape936);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_shoulder'/> to <HAnimSite name='l_humeral_lateral_epicn'/>
CShape* Shape940 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet941 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet941->setVertexCount(new int[1]{2});
CCoordinate* Coordinate942 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate942->setPoint(new float[6]{0.2029,1.4376,-0.0387,0.228,1.1482,-0.11});
LineSet941->setCoord(*Coordinate942);

CColorRGBA* ColorRGBA943 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA943->setUSE("HAnimSiteLineColorRGBA");
LineSet941->setColor(*ColorRGBA943);

Shape940->setGeometry(LineSet941);

HAnimSegment932->addChildren(*Shape940);

CHAnimSite* HAnimSite944 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite944->setName("l_humeral_lateral_epicn_pt");
HAnimSite944->setDEF("hanim_l_humeral_lateral_epicn_pt");
HAnimSite944->setTranslation(new float[3]{0.228,1.1482,-0.11});
//HAnimSite visualization shape
CTouchSensor* TouchSensor945 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor945->setDescription("HAnimSite l_humeral_lateral_epicn");
HAnimSite944->addChildren(*TouchSensor945);

CShape* Shape946 = (CShape *)(m_pScene.createNode("Shape"));
Shape946->setUSE("HAnimSiteShape");
HAnimSite944->addChildren(*Shape946);

HAnimSegment932->addChildren(*HAnimSite944);

HAnimJoint931->addChildren(*HAnimSegment932);

CHAnimJoint* HAnimJoint947 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint947->setName("l_elbow");
HAnimJoint947->setDEF("hanim_l_elbow");
HAnimJoint947->setCenter(new float[3]{0.2014,1.1357,-0.0682});
<<<<<<< HEAD
HAnimJoint947->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint947->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint947->setUlimit(new float[3]{0,0,0});
HAnimJoint947->setLlimit(new float[3]{0,0,0});
HAnimJoint947->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment948 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment948->setName("l_forearm");
HAnimSegment948->setDEF("hanim_l_forearm");
//<HAnimJoint name='l_elbow'/> visualization sphere is placed within <HAnimSegment name='l_forearm'/>
CTouchSensor* TouchSensor949 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor949->setDescription("HAnimJoint l_elbow, HAnimSegment l_forearm");
HAnimSegment948->addChildren(*TouchSensor949);

CTransform* Transform950 = (CTransform *)(m_pScene.createNode("Transform"));
Transform950->setTranslation(new float[3]{0.2014,1.1357,-0.0682});
CShape* Shape951 = (CShape *)(m_pScene.createNode("Shape"));
Shape951->setUSE("HAnimJointShape");
Transform950->addChildren(*Shape951);

HAnimSegment948->addChildren(*Transform950);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_elbow'/> to <HAnimJoint name='l_wrist'/>
CShape* Shape952 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet953 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet953->setVertexCount(new int[1]{2});
CCoordinate* Coordinate954 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate954->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583});
LineSet953->setCoord(*Coordinate954);

CColorRGBA* ColorRGBA955 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA955->setUSE("HAnimSegmentLineColorRGBA");
LineSet953->setColor(*ColorRGBA955);

Shape952->setGeometry(LineSet953);

HAnimSegment948->addChildren(*Shape952);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radial_styloid'/>
CShape* Shape956 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet957 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet957->setVertexCount(new int[1]{2});
CCoordinate* Coordinate958 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate958->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.1901,0.8645,-0.0415});
LineSet957->setCoord(*Coordinate958);

CColorRGBA* ColorRGBA959 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA959->setUSE("HAnimSiteLineColorRGBA");
LineSet957->setColor(*ColorRGBA959);

Shape956->setGeometry(LineSet957);

HAnimSegment948->addChildren(*Shape956);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_olecranon'/>
CShape* Shape960 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet961 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet961->setVertexCount(new int[1]{2});
CCoordinate* Coordinate962 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate962->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.1962,1.1375,-0.1123});
LineSet961->setCoord(*Coordinate962);

CColorRGBA* ColorRGBA963 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA963->setUSE("HAnimSiteLineColorRGBA");
LineSet961->setColor(*ColorRGBA963);

Shape960->setGeometry(LineSet961);

HAnimSegment948->addChildren(*Shape960);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_humeral_medial_epicn'/>
CShape* Shape964 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet965 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet965->setVertexCount(new int[1]{2});
CCoordinate* Coordinate966 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate966->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.1735,1.1272,-0.1113});
LineSet965->setCoord(*Coordinate966);

CColorRGBA* ColorRGBA967 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA967->setUSE("HAnimSiteLineColorRGBA");
LineSet965->setColor(*ColorRGBA967);

Shape964->setGeometry(LineSet965);

HAnimSegment948->addChildren(*Shape964);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radiale'/>
CShape* Shape968 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet969 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet969->setVertexCount(new int[1]{2});
CCoordinate* Coordinate970 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate970->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.2182,1.1212,-0.1167});
LineSet969->setCoord(*Coordinate970);

CColorRGBA* ColorRGBA971 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA971->setUSE("HAnimSiteLineColorRGBA");
LineSet969->setColor(*ColorRGBA971);

Shape968->setGeometry(LineSet969);

HAnimSegment948->addChildren(*Shape968);

CHAnimSite* HAnimSite972 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite972->setName("l_radial_styloid_pt");
HAnimSite972->setDEF("hanim_l_radial_styloid_pt");
HAnimSite972->setTranslation(new float[3]{0.1901,0.8645,-0.0415});
//HAnimSite visualization shape
CTouchSensor* TouchSensor973 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor973->setDescription("HAnimSite l_radial_styloid");
HAnimSite972->addChildren(*TouchSensor973);

CShape* Shape974 = (CShape *)(m_pScene.createNode("Shape"));
Shape974->setUSE("HAnimSiteShape");
HAnimSite972->addChildren(*Shape974);

HAnimSegment948->addChildren(*HAnimSite972);

CHAnimSite* HAnimSite975 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite975->setName("l_olecranon_pt");
HAnimSite975->setDEF("hanim_l_olecranon_pt");
HAnimSite975->setTranslation(new float[3]{0.1962,1.1375,-0.1123});
//HAnimSite visualization shape
CTouchSensor* TouchSensor976 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor976->setDescription("HAnimSite l_olecranon");
HAnimSite975->addChildren(*TouchSensor976);

CShape* Shape977 = (CShape *)(m_pScene.createNode("Shape"));
Shape977->setUSE("HAnimSiteShape");
HAnimSite975->addChildren(*Shape977);

HAnimSegment948->addChildren(*HAnimSite975);

CHAnimSite* HAnimSite978 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite978->setName("l_humeral_medial_epicn_pt");
HAnimSite978->setDEF("hanim_l_humeral_medial_epicn_pt");
HAnimSite978->setTranslation(new float[3]{0.1735,1.1272,-0.1113});
//HAnimSite visualization shape
CTouchSensor* TouchSensor979 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor979->setDescription("HAnimSite l_humeral_medial_epicn");
HAnimSite978->addChildren(*TouchSensor979);

CShape* Shape980 = (CShape *)(m_pScene.createNode("Shape"));
Shape980->setUSE("HAnimSiteShape");
HAnimSite978->addChildren(*Shape980);

HAnimSegment948->addChildren(*HAnimSite978);

CHAnimSite* HAnimSite981 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite981->setName("l_radiale_pt");
HAnimSite981->setDEF("hanim_l_radiale_pt");
HAnimSite981->setTranslation(new float[3]{0.2182,1.1212,-0.1167});
//HAnimSite visualization shape
CTouchSensor* TouchSensor982 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor982->setDescription("HAnimSite l_radiale");
HAnimSite981->addChildren(*TouchSensor982);

CShape* Shape983 = (CShape *)(m_pScene.createNode("Shape"));
Shape983->setUSE("HAnimSiteShape");
HAnimSite981->addChildren(*Shape983);

HAnimSegment948->addChildren(*HAnimSite981);

HAnimJoint947->addChildren(*HAnimSegment948);

CHAnimJoint* HAnimJoint984 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint984->setName("l_wrist");
HAnimJoint984->setDEF("hanim_l_wrist");
HAnimJoint984->setCenter(new float[3]{0.1984,0.8663,-0.0583});
<<<<<<< HEAD
HAnimJoint984->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint984->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint984->setUlimit(new float[3]{0,0,0});
HAnimJoint984->setLlimit(new float[3]{0,0,0});
HAnimJoint984->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment985 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment985->setName("l_hand");
HAnimSegment985->setDEF("hanim_l_hand");
//<HAnimJoint name='l_wrist'/> visualization sphere is placed within <HAnimSegment name='l_hand'/>
CTouchSensor* TouchSensor986 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor986->setDescription("HAnimJoint l_wrist, HAnimSegment l_hand");
HAnimSegment985->addChildren(*TouchSensor986);

CTransform* Transform987 = (CTransform *)(m_pScene.createNode("Transform"));
Transform987->setTranslation(new float[3]{0.1984,0.8663,-0.0583});
CShape* Shape988 = (CShape *)(m_pScene.createNode("Shape"));
Shape988->setUSE("HAnimJointShape");
Transform987->addChildren(*Shape988);

HAnimSegment985->addChildren(*Transform987);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_thumb1'/>
CShape* Shape989 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet990 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet990->setVertexCount(new int[1]{2});
CCoordinate* Coordinate991 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate991->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534});
LineSet990->setCoord(*Coordinate991);

CColorRGBA* ColorRGBA992 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA992->setUSE("HAnimSegmentLineColorRGBA");
LineSet990->setColor(*ColorRGBA992);

Shape989->setGeometry(LineSet990);

HAnimSegment985->addChildren(*Shape989);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_index0'/>
CShape* Shape993 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet994 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet994->setVertexCount(new int[1]{2});
CCoordinate* Coordinate995 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate995->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028});
LineSet994->setCoord(*Coordinate995);

CColorRGBA* ColorRGBA996 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA996->setUSE("HAnimSegmentLineColorRGBA");
LineSet994->setColor(*ColorRGBA996);

Shape993->setGeometry(LineSet994);

HAnimSegment985->addChildren(*Shape993);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_middle0'/>
CShape* Shape997 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet998 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet998->setVertexCount(new int[1]{2});
CCoordinate* Coordinate999 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate999->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053});
LineSet998->setCoord(*Coordinate999);

CColorRGBA* ColorRGBA1000 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1000->setUSE("HAnimSegmentLineColorRGBA");
LineSet998->setColor(*ColorRGBA1000);

Shape997->setGeometry(LineSet998);

HAnimSegment985->addChildren(*Shape997);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_ring0'/>
CShape* Shape1001 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1002 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1002->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1003 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1003->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794});
LineSet1002->setCoord(*Coordinate1003);

CColorRGBA* ColorRGBA1004 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1004->setUSE("HAnimSegmentLineColorRGBA");
LineSet1002->setColor(*ColorRGBA1004);

Shape1001->setGeometry(LineSet1002);

HAnimSegment985->addChildren(*Shape1001);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_pinky0'/>
CShape* Shape1005 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1006 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1006->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1007 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1007->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036});
LineSet1006->setCoord(*Coordinate1007);

CColorRGBA* ColorRGBA1008 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1008->setUSE("HAnimSegmentLineColorRGBA");
LineSet1006->setColor(*ColorRGBA1008);

Shape1005->setGeometry(LineSet1006);

HAnimSegment985->addChildren(*Shape1005);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_metacarpal_pha2'/>
CShape* Shape1009 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1010 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1010->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1011 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1011->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.2009,0.8139,-0.0237});
LineSet1010->setCoord(*Coordinate1011);

CColorRGBA* ColorRGBA1012 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1012->setUSE("HAnimSiteLineColorRGBA");
LineSet1010->setColor(*ColorRGBA1012);

Shape1009->setGeometry(LineSet1010);

HAnimSegment985->addChildren(*Shape1009);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_ulnar_styloid'/>
CShape* Shape1013 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1014 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1014->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1015 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1015->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.2142,0.8529,-0.0648});
LineSet1014->setCoord(*Coordinate1015);

CColorRGBA* ColorRGBA1016 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1016->setUSE("HAnimSiteLineColorRGBA");
LineSet1014->setColor(*ColorRGBA1016);

Shape1013->setGeometry(LineSet1014);

HAnimSegment985->addChildren(*Shape1013);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_metacarpal_pha5'/>
CShape* Shape1017 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1018 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1018->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1019 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1019->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1929,0.786,-0.1122});
LineSet1018->setCoord(*Coordinate1019);

CColorRGBA* ColorRGBA1020 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1020->setUSE("HAnimSiteLineColorRGBA");
LineSet1018->setColor(*ColorRGBA1020);

Shape1017->setGeometry(LineSet1018);

HAnimSegment985->addChildren(*Shape1017);

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_hand_front_view'/>
CShape* Shape1021 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1022 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1022->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1023 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1023->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.3,0.75,0.45});
LineSet1022->setCoord(*Coordinate1023);

CColorRGBA* ColorRGBA1024 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1024->setUSE("HAnimSiteViewpointLineColorRGBA");
LineSet1022->setColor(*ColorRGBA1024);

Shape1021->setGeometry(LineSet1022);

HAnimSegment985->addChildren(*Shape1021);

CHAnimSite* HAnimSite1025 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1025->setName("l_metacarpal_pha2_pt");
HAnimSite1025->setDEF("hanim_l_metacarpal_pha2_pt");
HAnimSite1025->setTranslation(new float[3]{0.2009,0.8139,-0.0237});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1026 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1026->setDescription("HAnimSite l_metacarpal_pha2");
HAnimSite1025->addChildren(*TouchSensor1026);

CShape* Shape1027 = (CShape *)(m_pScene.createNode("Shape"));
Shape1027->setUSE("HAnimSiteShape");
HAnimSite1025->addChildren(*Shape1027);

HAnimSegment985->addChildren(*HAnimSite1025);

CHAnimSite* HAnimSite1028 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1028->setName("l_ulnar_styloid_pt");
HAnimSite1028->setDEF("hanim_l_ulnar_styloid_pt");
HAnimSite1028->setTranslation(new float[3]{0.2142,0.8529,-0.0648});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1029 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1029->setDescription("HAnimSite l_ulnar_styloid");
HAnimSite1028->addChildren(*TouchSensor1029);

CShape* Shape1030 = (CShape *)(m_pScene.createNode("Shape"));
Shape1030->setUSE("HAnimSiteShape");
HAnimSite1028->addChildren(*Shape1030);

HAnimSegment985->addChildren(*HAnimSite1028);

CHAnimSite* HAnimSite1031 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1031->setName("l_metacarpal_pha5_pt");
HAnimSite1031->setDEF("hanim_l_metacarpal_pha5_pt");
HAnimSite1031->setTranslation(new float[3]{0.1929,0.786,-0.1122});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1032 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1032->setDescription("HAnimSite l_metacarpal_pha5");
HAnimSite1031->addChildren(*TouchSensor1032);

CShape* Shape1033 = (CShape *)(m_pScene.createNode("Shape"));
Shape1033->setUSE("HAnimSiteShape");
HAnimSite1031->addChildren(*Shape1033);

HAnimSegment985->addChildren(*HAnimSite1031);

CHAnimSite* HAnimSite1034 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1034->setName("l_hand_front_view");
HAnimSite1034->setDEF("hanim_l_hand_front_view");
HAnimSite1034->setTranslation(new float[3]{0.3,0.75,0.45});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1035 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1035->setDescription("HAnimSite l_hand_front_view");
HAnimSite1034->addChildren(*TouchSensor1035);

CShape* Shape1036 = (CShape *)(m_pScene.createNode("Shape"));
Shape1036->setUSE("HAnimSiteShape");
HAnimSite1034->addChildren(*Shape1036);

CViewpoint* Viewpoint1037 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1037->setDEF("hanim_l_hand_front_viewpoint");
Viewpoint1037->setCenterOfRotation(new float[3]{0,0.7,0});
Viewpoint1037->setDescription("left hand front");
Viewpoint1037->setPosition(new float[3]{0,0,0});
HAnimSite1034->addChildren(*Viewpoint1037);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1038 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1038->setDescription("HAnimSite hanim_l_hand_front_view Viewpoint");
Anchor1038->setUrl(new CString[1]{"#hanim_l_hand_front_viewpoint"}, 1);
CLOD* LOD1039 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1039->setForceTransitions(True);
LOD1039->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo1040 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1040->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1039->addChildren(*WorldInfo1040);

CShape* Shape1041 = (CShape *)(m_pScene.createNode("Shape"));
Shape1041->setUSE("HAnimSiteViewpointShape");
LOD1039->addChildren(*Shape1041);

Anchor1038->addChildren(*LOD1039);

HAnimSite1034->addChildren(*Anchor1038);

HAnimSegment985->addChildren(*HAnimSite1034);

HAnimJoint984->addChildren(*HAnimSegment985);

CHAnimJoint* HAnimJoint1042 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1042->setName("l_thumb1");
HAnimJoint1042->setDEF("hanim_l_thumb1");
HAnimJoint1042->setCenter(new float[3]{0.1924,0.8472,-0.0534});
<<<<<<< HEAD
HAnimJoint1042->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1042->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint1042->setUlimit(new float[3]{0,0,0});
HAnimJoint1042->setLlimit(new float[3]{0,0,0});
HAnimJoint1042->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment1043 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1043->setName("l_thumb_metacarpal");
HAnimSegment1043->setDEF("hanim_l_thumb_metacarpal");
//<HAnimJoint name='l_thumb1'/> visualization sphere is placed within <HAnimSegment name='l_thumb_metacarpal'/>
CTouchSensor* TouchSensor1044 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1044->setDescription("HAnimJoint l_thumb1, HAnimSegment l_thumb_metacarpal");
HAnimSegment1043->addChildren(*TouchSensor1044);

CTransform* Transform1045 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1045->setTranslation(new float[3]{0.1924,0.8472,-0.0534});
CShape* Shape1046 = (CShape *)(m_pScene.createNode("Shape"));
Shape1046->setUSE("HAnimJointShape");
Transform1045->addChildren(*Shape1046);

HAnimSegment1043->addChildren(*Transform1045);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_thumb1'/> to <HAnimJoint name='l_thumb2'/>
CShape* Shape1047 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1048 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1048->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1049 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1049->setPoint(new float[6]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246});
LineSet1048->setCoord(*Coordinate1049);

CColorRGBA* ColorRGBA1050 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1050->setUSE("HAnimSegmentLineColorRGBA");
LineSet1048->setColor(*ColorRGBA1050);

Shape1047->setGeometry(LineSet1048);

HAnimSegment1043->addChildren(*Shape1047);

HAnimJoint1042->addChildren(*HAnimSegment1043);

CHAnimJoint* HAnimJoint1051 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1051->setName("l_thumb2");
HAnimJoint1051->setDEF("hanim_l_thumb2");
HAnimJoint1051->setCenter(new float[3]{0.1951,0.8226,0.0246});
<<<<<<< HEAD
HAnimJoint1051->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1051->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint1051->setUlimit(new float[3]{0,0,0});
HAnimJoint1051->setLlimit(new float[3]{0,0,0});
HAnimJoint1051->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment1052 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1052->setName("l_thumb_proximal");
HAnimSegment1052->setDEF("hanim_l_thumb_proximal");
//<HAnimJoint name='l_thumb2'/> visualization sphere is placed within <HAnimSegment name='l_thumb_proximal'/>
CTouchSensor* TouchSensor1053 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1053->setDescription("HAnimJoint l_thumb2, HAnimSegment l_thumb_proximal");
HAnimSegment1052->addChildren(*TouchSensor1053);

CTransform* Transform1054 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1054->setTranslation(new float[3]{0.1951,0.8226,0.0246});
CShape* Shape1055 = (CShape *)(m_pScene.createNode("Shape"));
Shape1055->setUSE("HAnimJointShape");
Transform1054->addChildren(*Shape1055);

HAnimSegment1052->addChildren(*Transform1054);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_thumb2'/> to <HAnimJoint name='l_thumb3'/>
CShape* Shape1056 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1057 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1057->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1058 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1058->setPoint(new float[6]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464});
LineSet1057->setCoord(*Coordinate1058);

CColorRGBA* ColorRGBA1059 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1059->setUSE("HAnimSegmentLineColorRGBA");
LineSet1057->setColor(*ColorRGBA1059);

Shape1056->setGeometry(LineSet1057);

HAnimSegment1052->addChildren(*Shape1056);

HAnimJoint1051->addChildren(*HAnimSegment1052);

CHAnimJoint* HAnimJoint1060 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1060->setName("l_thumb3");
HAnimJoint1060->setDEF("hanim_l_thumb3");
HAnimJoint1060->setCenter(new float[3]{0.1955,0.8159,0.0464});
<<<<<<< HEAD
HAnimJoint1060->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1060->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint1060->setUlimit(new float[3]{0,0,0});
HAnimJoint1060->setLlimit(new float[3]{0,0,0});
HAnimJoint1060->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment1061 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1061->setName("l_thumb_distal");
HAnimSegment1061->setDEF("hanim_l_thumb_distal");
//<HAnimJoint name='l_thumb3'/> visualization sphere is placed within <HAnimSegment name='l_thumb_distal'/>
CTouchSensor* TouchSensor1062 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1062->setDescription("HAnimJoint l_thumb3, HAnimSegment l_thumb_distal");
HAnimSegment1061->addChildren(*TouchSensor1062);

CTransform* Transform1063 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1063->setTranslation(new float[3]{0.1955,0.8159,0.0464});
CShape* Shape1064 = (CShape *)(m_pScene.createNode("Shape"));
Shape1064->setUSE("HAnimJointShape");
Transform1063->addChildren(*Shape1064);

HAnimSegment1061->addChildren(*Transform1063);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_thumb3'/> to <HAnimSite name='l_thumb_distal_tip'/>
CShape* Shape1065 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1066 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1066->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1067 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1067->setPoint(new float[6]{0.1955,0.8159,0.0464,0.1982,0.8061,0.0759});
LineSet1066->setCoord(*Coordinate1067);

CColorRGBA* ColorRGBA1068 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1068->setUSE("HAnimSiteLineColorRGBA");
LineSet1066->setColor(*ColorRGBA1068);

Shape1065->setGeometry(LineSet1066);

HAnimSegment1061->addChildren(*Shape1065);

CHAnimSite* HAnimSite1069 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1069->setName("l_thumb_distal_tip");
HAnimSite1069->setDEF("hanim_l_thumb_distal_tip");
HAnimSite1069->setTranslation(new float[3]{0.1982,0.8061,0.0759});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1070 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1070->setDescription("HAnimSite l_thumb_distal_tip");
HAnimSite1069->addChildren(*TouchSensor1070);

CShape* Shape1071 = (CShape *)(m_pScene.createNode("Shape"));
Shape1071->setUSE("HAnimSiteShape");
HAnimSite1069->addChildren(*Shape1071);

HAnimSegment1061->addChildren(*HAnimSite1069);

HAnimJoint1060->addChildren(*HAnimSegment1061);

HAnimJoint1051->addChildren(*HAnimJoint1060);

HAnimJoint1042->addChildren(*HAnimJoint1051);

HAnimJoint984->addChildren(*HAnimJoint1042);

CHAnimJoint* HAnimJoint1072 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1072->setName("l_index0");
HAnimJoint1072->setDEF("hanim_l_index0");
HAnimJoint1072->setCenter(new float[3]{0.1983,0.8024,-0.028});
<<<<<<< HEAD
HAnimJoint1072->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1072->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint1072->setUlimit(new float[3]{0,0,0});
HAnimJoint1072->setLlimit(new float[3]{0,0,0});
HAnimJoint1072->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment1073 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1073->setName("l_index_metacarpal");
HAnimSegment1073->setDEF("hanim_l_index_metacarpal");
//<HAnimJoint name='l_index0'/> visualization sphere is placed within <HAnimSegment name='l_index_metacarpal'/>
CTouchSensor* TouchSensor1074 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1074->setDescription("HAnimJoint l_index0, HAnimSegment l_index_metacarpal");
HAnimSegment1073->addChildren(*TouchSensor1074);

CTransform* Transform1075 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1075->setTranslation(new float[3]{0.1983,0.8024,-0.028});
CShape* Shape1076 = (CShape *)(m_pScene.createNode("Shape"));
Shape1076->setUSE("HAnimJointShape");
Transform1075->addChildren(*Shape1076);

HAnimSegment1073->addChildren(*Transform1075);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_index0'/> to <HAnimJoint name='l_index1'/>
CShape* Shape1077 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1078 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1078->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1079 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1079->setPoint(new float[6]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028});
LineSet1078->setCoord(*Coordinate1079);

CColorRGBA* ColorRGBA1080 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1080->setUSE("HAnimSegmentLineColorRGBA");
LineSet1078->setColor(*ColorRGBA1080);

Shape1077->setGeometry(LineSet1078);

HAnimSegment1073->addChildren(*Shape1077);

HAnimJoint1072->addChildren(*HAnimSegment1073);

CHAnimJoint* HAnimJoint1081 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1081->setName("l_index1");
HAnimJoint1081->setDEF("hanim_l_index1");
HAnimJoint1081->setCenter(new float[3]{0.1983,0.7815,-0.028});
<<<<<<< HEAD
HAnimJoint1081->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1081->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint1081->setUlimit(new float[3]{0,0,0});
HAnimJoint1081->setLlimit(new float[3]{0,0,0});
HAnimJoint1081->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment1082 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1082->setName("l_index_proximal");
HAnimSegment1082->setDEF("hanim_l_index_proximal");
//<HAnimJoint name='l_index1'/> visualization sphere is placed within <HAnimSegment name='l_index_proximal'/>
CTouchSensor* TouchSensor1083 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1083->setDescription("HAnimJoint l_index1, HAnimSegment l_index_proximal");
HAnimSegment1082->addChildren(*TouchSensor1083);

CTransform* Transform1084 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1084->setTranslation(new float[3]{0.1983,0.7815,-0.028});
CShape* Shape1085 = (CShape *)(m_pScene.createNode("Shape"));
Shape1085->setUSE("HAnimJointShape");
Transform1084->addChildren(*Shape1085);

HAnimSegment1082->addChildren(*Transform1084);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_index1'/> to <HAnimJoint name='l_index2'/>
CShape* Shape1086 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1087 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1087->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1088 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1088->setPoint(new float[6]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248});
LineSet1087->setCoord(*Coordinate1088);

CColorRGBA* ColorRGBA1089 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1089->setUSE("HAnimSegmentLineColorRGBA");
LineSet1087->setColor(*ColorRGBA1089);

Shape1086->setGeometry(LineSet1087);

HAnimSegment1082->addChildren(*Shape1086);

HAnimJoint1081->addChildren(*HAnimSegment1082);

CHAnimJoint* HAnimJoint1090 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1090->setName("l_index2");
HAnimJoint1090->setDEF("hanim_l_index2");
HAnimJoint1090->setCenter(new float[3]{0.2017,0.7363,-0.0248});
<<<<<<< HEAD
HAnimJoint1090->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1090->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint1090->setUlimit(new float[3]{0,0,0});
HAnimJoint1090->setLlimit(new float[3]{0,0,0});
HAnimJoint1090->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment1091 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1091->setName("l_index_middle");
HAnimSegment1091->setDEF("hanim_l_index_middle");
//<HAnimJoint name='l_index2'/> visualization sphere is placed within <HAnimSegment name='l_index_middle'/>
CTouchSensor* TouchSensor1092 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1092->setDescription("HAnimJoint l_index2, HAnimSegment l_index_middle");
HAnimSegment1091->addChildren(*TouchSensor1092);

CTransform* Transform1093 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1093->setTranslation(new float[3]{0.2017,0.7363,-0.0248});
CShape* Shape1094 = (CShape *)(m_pScene.createNode("Shape"));
Shape1094->setUSE("HAnimJointShape");
Transform1093->addChildren(*Shape1094);

HAnimSegment1091->addChildren(*Transform1093);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_index2'/> to <HAnimJoint name='l_index3'/>
CShape* Shape1095 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1096 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1096->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1097 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1097->setPoint(new float[6]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236});
LineSet1096->setCoord(*Coordinate1097);

CColorRGBA* ColorRGBA1098 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1098->setUSE("HAnimSegmentLineColorRGBA");
LineSet1096->setColor(*ColorRGBA1098);

Shape1095->setGeometry(LineSet1096);

HAnimSegment1091->addChildren(*Shape1095);

HAnimJoint1090->addChildren(*HAnimSegment1091);

CHAnimJoint* HAnimJoint1099 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1099->setName("l_index3");
HAnimJoint1099->setDEF("hanim_l_index3");
HAnimJoint1099->setCenter(new float[3]{0.2028,0.7139,-0.0236});
<<<<<<< HEAD
HAnimJoint1099->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1099->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint1099->setUlimit(new float[3]{0,0,0});
HAnimJoint1099->setLlimit(new float[3]{0,0,0});
HAnimJoint1099->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment1100 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1100->setName("l_index_distal");
HAnimSegment1100->setDEF("hanim_l_index_distal");
//<HAnimJoint name='l_index3'/> visualization sphere is placed within <HAnimSegment name='l_index_distal'/>
CTouchSensor* TouchSensor1101 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1101->setDescription("HAnimJoint l_index3, HAnimSegment l_index_distal");
HAnimSegment1100->addChildren(*TouchSensor1101);

CTransform* Transform1102 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1102->setTranslation(new float[3]{0.2028,0.7139,-0.0236});
CShape* Shape1103 = (CShape *)(m_pScene.createNode("Shape"));
Shape1103->setUSE("HAnimJointShape");
Transform1102->addChildren(*Shape1103);

HAnimSegment1100->addChildren(*Transform1102);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_index_distal_tip'/>
CShape* Shape1104 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1105 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1105->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1106 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1106->setPoint(new float[6]{0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245});
LineSet1105->setCoord(*Coordinate1106);

CColorRGBA* ColorRGBA1107 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1107->setUSE("HAnimSiteLineColorRGBA");
LineSet1105->setColor(*ColorRGBA1107);

Shape1104->setGeometry(LineSet1105);

HAnimSegment1100->addChildren(*Shape1104);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_dactylion'/>
CShape* Shape1108 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1109 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1109->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1110 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1110->setPoint(new float[6]{0.2028,0.7139,-0.0236,0.2056,0.6743,-0.0482});
LineSet1109->setCoord(*Coordinate1110);

CColorRGBA* ColorRGBA1111 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1111->setUSE("HAnimSiteLineColorRGBA");
LineSet1109->setColor(*ColorRGBA1111);

Shape1108->setGeometry(LineSet1109);

HAnimSegment1100->addChildren(*Shape1108);

CHAnimSite* HAnimSite1112 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1112->setName("l_index_distal_tip");
HAnimSite1112->setDEF("hanim_l_index_distal_tip");
HAnimSite1112->setTranslation(new float[3]{0.2089,0.6858,-0.0245});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1113 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1113->setDescription("HAnimSite l_index_distal_tip");
HAnimSite1112->addChildren(*TouchSensor1113);

CShape* Shape1114 = (CShape *)(m_pScene.createNode("Shape"));
Shape1114->setUSE("HAnimSiteShape");
HAnimSite1112->addChildren(*Shape1114);

HAnimSegment1100->addChildren(*HAnimSite1112);

CHAnimSite* HAnimSite1115 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1115->setName("l_dactylion_pt");
HAnimSite1115->setDEF("hanim_l_dactylion_pt");
HAnimSite1115->setTranslation(new float[3]{0.2056,0.6743,-0.0482});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1116 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1116->setDescription("HAnimSite l_dactylion");
HAnimSite1115->addChildren(*TouchSensor1116);

CShape* Shape1117 = (CShape *)(m_pScene.createNode("Shape"));
Shape1117->setUSE("HAnimSiteShape");
HAnimSite1115->addChildren(*Shape1117);

HAnimSegment1100->addChildren(*HAnimSite1115);

HAnimJoint1099->addChildren(*HAnimSegment1100);

HAnimJoint1090->addChildren(*HAnimJoint1099);

HAnimJoint1081->addChildren(*HAnimJoint1090);

HAnimJoint1072->addChildren(*HAnimJoint1081);

HAnimJoint984->addChildren(*HAnimJoint1072);

CHAnimJoint* HAnimJoint1118 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1118->setName("l_middle0");
HAnimJoint1118->setDEF("hanim_l_middle0");
HAnimJoint1118->setCenter(new float[3]{0.1987,0.8029,-0.053});
<<<<<<< HEAD
HAnimJoint1118->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1118->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint1118->setUlimit(new float[3]{0,0,0});
HAnimJoint1118->setLlimit(new float[3]{0,0,0});
HAnimJoint1118->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment1119 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1119->setName("l_middle_metacarpal");
HAnimSegment1119->setDEF("hanim_l_middle_metacarpal");
//<HAnimJoint name='l_middle0'/> visualization sphere is placed within <HAnimSegment name='l_middle_metacarpal'/>
CTouchSensor* TouchSensor1120 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1120->setDescription("HAnimJoint l_middle0, HAnimSegment l_middle_metacarpal");
HAnimSegment1119->addChildren(*TouchSensor1120);

CTransform* Transform1121 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1121->setTranslation(new float[3]{0.1987,0.8029,-0.053});
CShape* Shape1122 = (CShape *)(m_pScene.createNode("Shape"));
Shape1122->setUSE("HAnimJointShape");
Transform1121->addChildren(*Shape1122);

HAnimSegment1119->addChildren(*Transform1121);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle0'/> to <HAnimJoint name='l_middle1'/>
CShape* Shape1123 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1124 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1124->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1125 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1125->setPoint(new float[6]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053});
LineSet1124->setCoord(*Coordinate1125);

CColorRGBA* ColorRGBA1126 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1126->setUSE("HAnimSegmentLineColorRGBA");
LineSet1124->setColor(*ColorRGBA1126);

Shape1123->setGeometry(LineSet1124);

HAnimSegment1119->addChildren(*Shape1123);

HAnimJoint1118->addChildren(*HAnimSegment1119);

CHAnimJoint* HAnimJoint1127 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1127->setName("l_middle1");
HAnimJoint1127->setDEF("hanim_l_middle1");
HAnimJoint1127->setCenter(new float[3]{0.1987,0.7818,-0.053});
<<<<<<< HEAD
HAnimJoint1127->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1127->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint1127->setUlimit(new float[3]{0,0,0});
HAnimJoint1127->setLlimit(new float[3]{0,0,0});
HAnimJoint1127->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment1128 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1128->setName("l_middle_proximal");
HAnimSegment1128->setDEF("hanim_l_middle_proximal");
//<HAnimJoint name='l_middle1'/> visualization sphere is placed within <HAnimSegment name='l_middle_proximal'/>
CTouchSensor* TouchSensor1129 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1129->setDescription("HAnimJoint l_middle1, HAnimSegment l_middle_proximal");
HAnimSegment1128->addChildren(*TouchSensor1129);

CTransform* Transform1130 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1130->setTranslation(new float[3]{0.1987,0.7818,-0.053});
CShape* Shape1131 = (CShape *)(m_pScene.createNode("Shape"));
Shape1131->setUSE("HAnimJointShape");
Transform1130->addChildren(*Shape1131);

HAnimSegment1128->addChildren(*Transform1130);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle1'/> to <HAnimJoint name='l_middle2'/>
CShape* Shape1132 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1133 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1133->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1134 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1134->setPoint(new float[6]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503});
LineSet1133->setCoord(*Coordinate1134);

CColorRGBA* ColorRGBA1135 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1135->setUSE("HAnimSegmentLineColorRGBA");
LineSet1133->setColor(*ColorRGBA1135);

Shape1132->setGeometry(LineSet1133);

HAnimSegment1128->addChildren(*Shape1132);

HAnimJoint1127->addChildren(*HAnimSegment1128);

CHAnimJoint* HAnimJoint1136 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1136->setName("l_middle2");
HAnimJoint1136->setDEF("hanim_l_middle2");
HAnimJoint1136->setCenter(new float[3]{0.2013,0.7273,-0.0503});
<<<<<<< HEAD
HAnimJoint1136->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1136->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint1136->setUlimit(new float[3]{0,0,0});
HAnimJoint1136->setLlimit(new float[3]{0,0,0});
HAnimJoint1136->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment1137 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1137->setName("l_middle_middle");
HAnimSegment1137->setDEF("hanim_l_middle_middle");
//<HAnimJoint name='l_middle2'/> visualization sphere is placed within <HAnimSegment name='l_middle_middle'/>
CTouchSensor* TouchSensor1138 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1138->setDescription("HAnimJoint l_middle2, HAnimSegment l_middle_middle");
HAnimSegment1137->addChildren(*TouchSensor1138);

CTransform* Transform1139 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1139->setTranslation(new float[3]{0.2013,0.7273,-0.0503});
CShape* Shape1140 = (CShape *)(m_pScene.createNode("Shape"));
Shape1140->setUSE("HAnimJointShape");
Transform1139->addChildren(*Shape1140);

HAnimSegment1137->addChildren(*Transform1139);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle2'/> to <HAnimJoint name='l_middle3'/>
CShape* Shape1141 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1142 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1142->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1143 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1143->setPoint(new float[6]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494});
LineSet1142->setCoord(*Coordinate1143);

CColorRGBA* ColorRGBA1144 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1144->setUSE("HAnimSegmentLineColorRGBA");
LineSet1142->setColor(*ColorRGBA1144);

Shape1141->setGeometry(LineSet1142);

HAnimSegment1137->addChildren(*Shape1141);

HAnimJoint1136->addChildren(*HAnimSegment1137);

CHAnimJoint* HAnimJoint1145 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1145->setName("l_middle3");
HAnimJoint1145->setDEF("hanim_l_middle3");
HAnimJoint1145->setCenter(new float[3]{0.2026,0.7011,-0.0494});
<<<<<<< HEAD
HAnimJoint1145->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1145->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint1145->setUlimit(new float[3]{0,0,0});
HAnimJoint1145->setLlimit(new float[3]{0,0,0});
HAnimJoint1145->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment1146 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1146->setName("l_middle_distal");
HAnimSegment1146->setDEF("hanim_l_middle_distal");
//<HAnimJoint name='l_middle3'/> visualization sphere is placed within <HAnimSegment name='l_middle_distal'/>
CTouchSensor* TouchSensor1147 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1147->setDescription("HAnimJoint l_middle3, HAnimSegment l_middle_distal");
HAnimSegment1146->addChildren(*TouchSensor1147);

CTransform* Transform1148 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1148->setTranslation(new float[3]{0.2026,0.7011,-0.0494});
CShape* Shape1149 = (CShape *)(m_pScene.createNode("Shape"));
Shape1149->setUSE("HAnimJointShape");
Transform1148->addChildren(*Shape1149);

HAnimSegment1146->addChildren(*Transform1148);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_middle3'/> to <HAnimSite name='l_middle_distal_tip'/>
CShape* Shape1150 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1151 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1151->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1152 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1152->setPoint(new float[6]{0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491});
LineSet1151->setCoord(*Coordinate1152);

CColorRGBA* ColorRGBA1153 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1153->setUSE("HAnimSiteLineColorRGBA");
LineSet1151->setColor(*ColorRGBA1153);

Shape1150->setGeometry(LineSet1151);

HAnimSegment1146->addChildren(*Shape1150);

CHAnimSite* HAnimSite1154 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1154->setName("l_middle_distal_tip");
HAnimSite1154->setDEF("hanim_l_middle_distal_tip");
HAnimSite1154->setTranslation(new float[3]{0.208,0.6731,-0.0491});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1155 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1155->setDescription("HAnimSite l_middle_distal_tip");
HAnimSite1154->addChildren(*TouchSensor1155);

CShape* Shape1156 = (CShape *)(m_pScene.createNode("Shape"));
Shape1156->setUSE("HAnimSiteShape");
HAnimSite1154->addChildren(*Shape1156);

HAnimSegment1146->addChildren(*HAnimSite1154);

HAnimJoint1145->addChildren(*HAnimSegment1146);

HAnimJoint1136->addChildren(*HAnimJoint1145);

HAnimJoint1127->addChildren(*HAnimJoint1136);

HAnimJoint1118->addChildren(*HAnimJoint1127);

HAnimJoint984->addChildren(*HAnimJoint1118);

CHAnimJoint* HAnimJoint1157 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1157->setName("l_ring0");
HAnimJoint1157->setDEF("hanim_l_ring0");
HAnimJoint1157->setCenter(new float[3]{0.1956,0.8019,-0.0794});
<<<<<<< HEAD
HAnimJoint1157->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1157->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint1157->setUlimit(new float[3]{0,0,0});
HAnimJoint1157->setLlimit(new float[3]{0,0,0});
HAnimJoint1157->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment1158 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1158->setName("l_ring_metacarpal");
HAnimSegment1158->setDEF("hanim_l_ring_metacarpal");
//<HAnimJoint name='l_ring0'/> visualization sphere is placed within <HAnimSegment name='l_ring_metacarpal'/>
CTouchSensor* TouchSensor1159 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1159->setDescription("HAnimJoint l_ring0, HAnimSegment l_ring_metacarpal");
HAnimSegment1158->addChildren(*TouchSensor1159);

CTransform* Transform1160 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1160->setTranslation(new float[3]{0.1956,0.8019,-0.0794});
CShape* Shape1161 = (CShape *)(m_pScene.createNode("Shape"));
Shape1161->setUSE("HAnimJointShape");
Transform1160->addChildren(*Shape1161);

HAnimSegment1158->addChildren(*Transform1160);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring0'/> to <HAnimJoint name='l_ring1'/>
CShape* Shape1162 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1163 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1163->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1164 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1164->setPoint(new float[6]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794});
LineSet1163->setCoord(*Coordinate1164);

CColorRGBA* ColorRGBA1165 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1165->setUSE("HAnimSegmentLineColorRGBA");
LineSet1163->setColor(*ColorRGBA1165);

Shape1162->setGeometry(LineSet1163);

HAnimSegment1158->addChildren(*Shape1162);

HAnimJoint1157->addChildren(*HAnimSegment1158);

CHAnimJoint* HAnimJoint1166 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1166->setName("l_ring1");
HAnimJoint1166->setDEF("hanim_l_ring1");
HAnimJoint1166->setCenter(new float[3]{0.1956,0.7815,-0.0794});
<<<<<<< HEAD
HAnimJoint1166->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1166->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint1166->setUlimit(new float[3]{0,0,0});
HAnimJoint1166->setLlimit(new float[3]{0,0,0});
HAnimJoint1166->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment1167 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1167->setName("l_ring_proximal");
HAnimSegment1167->setDEF("hanim_l_ring_proximal");
//<HAnimJoint name='l_ring1'/> visualization sphere is placed within <HAnimSegment name='l_ring_proximal'/>
CTouchSensor* TouchSensor1168 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1168->setDescription("HAnimJoint l_ring1, HAnimSegment l_ring_proximal");
HAnimSegment1167->addChildren(*TouchSensor1168);

CTransform* Transform1169 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1169->setTranslation(new float[3]{0.1956,0.7815,-0.0794});
CShape* Shape1170 = (CShape *)(m_pScene.createNode("Shape"));
Shape1170->setUSE("HAnimJointShape");
Transform1169->addChildren(*Shape1170);

HAnimSegment1167->addChildren(*Transform1169);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring1'/> to <HAnimJoint name='l_ring2'/>
CShape* Shape1171 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1172 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1172->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1173 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1173->setPoint(new float[6]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777});
LineSet1172->setCoord(*Coordinate1173);

CColorRGBA* ColorRGBA1174 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1174->setUSE("HAnimSegmentLineColorRGBA");
LineSet1172->setColor(*ColorRGBA1174);

Shape1171->setGeometry(LineSet1172);

HAnimSegment1167->addChildren(*Shape1171);

HAnimJoint1166->addChildren(*HAnimSegment1167);

CHAnimJoint* HAnimJoint1175 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1175->setName("l_ring2");
HAnimJoint1175->setDEF("hanim_l_ring2");
HAnimJoint1175->setCenter(new float[3]{0.1973,0.7287,-0.0777});
<<<<<<< HEAD
HAnimJoint1175->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1175->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint1175->setUlimit(new float[3]{0,0,0});
HAnimJoint1175->setLlimit(new float[3]{0,0,0});
HAnimJoint1175->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment1176 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1176->setName("l_ring_middle");
HAnimSegment1176->setDEF("hanim_l_ring_middle");
//<HAnimJoint name='l_ring2'/> visualization sphere is placed within <HAnimSegment name='l_ring_middle'/>
CTouchSensor* TouchSensor1177 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1177->setDescription("HAnimJoint l_ring2, HAnimSegment l_ring_middle");
HAnimSegment1176->addChildren(*TouchSensor1177);

CTransform* Transform1178 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1178->setTranslation(new float[3]{0.1973,0.7287,-0.0777});
CShape* Shape1179 = (CShape *)(m_pScene.createNode("Shape"));
Shape1179->setUSE("HAnimJointShape");
Transform1178->addChildren(*Shape1179);

HAnimSegment1176->addChildren(*Transform1178);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring2'/> to <HAnimJoint name='l_ring3'/>
CShape* Shape1180 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1181 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1181->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1182 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1182->setPoint(new float[6]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767});
LineSet1181->setCoord(*Coordinate1182);

CColorRGBA* ColorRGBA1183 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1183->setUSE("HAnimSegmentLineColorRGBA");
LineSet1181->setColor(*ColorRGBA1183);

Shape1180->setGeometry(LineSet1181);

HAnimSegment1176->addChildren(*Shape1180);

HAnimJoint1175->addChildren(*HAnimSegment1176);

CHAnimJoint* HAnimJoint1184 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1184->setName("l_ring3");
HAnimJoint1184->setDEF("hanim_l_ring3");
HAnimJoint1184->setCenter(new float[3]{0.1983,0.7045,-0.0767});
<<<<<<< HEAD
HAnimJoint1184->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1184->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint1184->setUlimit(new float[3]{0,0,0});
HAnimJoint1184->setLlimit(new float[3]{0,0,0});
HAnimJoint1184->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment1185 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1185->setName("l_ring_distal");
HAnimSegment1185->setDEF("hanim_l_ring_distal");
//<HAnimJoint name='l_ring3'/> visualization sphere is placed within <HAnimSegment name='l_ring_distal'/>
CTouchSensor* TouchSensor1186 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1186->setDescription("HAnimJoint l_ring3, HAnimSegment l_ring_distal");
HAnimSegment1185->addChildren(*TouchSensor1186);

CTransform* Transform1187 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1187->setTranslation(new float[3]{0.1983,0.7045,-0.0767});
CShape* Shape1188 = (CShape *)(m_pScene.createNode("Shape"));
Shape1188->setUSE("HAnimJointShape");
Transform1187->addChildren(*Shape1188);

HAnimSegment1185->addChildren(*Transform1187);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ring3'/> to <HAnimSite name='l_ring_distal_tip'/>
CShape* Shape1189 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1190 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1190->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1191 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1191->setPoint(new float[6]{0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756});
LineSet1190->setCoord(*Coordinate1191);

CColorRGBA* ColorRGBA1192 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1192->setUSE("HAnimSiteLineColorRGBA");
LineSet1190->setColor(*ColorRGBA1192);

Shape1189->setGeometry(LineSet1190);

HAnimSegment1185->addChildren(*Shape1189);

CHAnimSite* HAnimSite1193 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1193->setName("l_ring_distal_tip");
HAnimSite1193->setDEF("hanim_l_ring_distal_tip");
HAnimSite1193->setTranslation(new float[3]{0.2035,0.675,-0.0756});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1194 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1194->setDescription("HAnimSite l_ring_distal_tip");
HAnimSite1193->addChildren(*TouchSensor1194);

CShape* Shape1195 = (CShape *)(m_pScene.createNode("Shape"));
Shape1195->setUSE("HAnimSiteShape");
HAnimSite1193->addChildren(*Shape1195);

HAnimSegment1185->addChildren(*HAnimSite1193);

HAnimJoint1184->addChildren(*HAnimSegment1185);

HAnimJoint1175->addChildren(*HAnimJoint1184);

HAnimJoint1166->addChildren(*HAnimJoint1175);

HAnimJoint1157->addChildren(*HAnimJoint1166);

HAnimJoint984->addChildren(*HAnimJoint1157);

CHAnimJoint* HAnimJoint1196 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1196->setName("l_pinky0");
HAnimJoint1196->setDEF("hanim_l_pinky0");
HAnimJoint1196->setCenter(new float[3]{0.1925,0.8066,-0.1036});
<<<<<<< HEAD
HAnimJoint1196->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1196->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint1196->setUlimit(new float[3]{0,0,0});
HAnimJoint1196->setLlimit(new float[3]{0,0,0});
HAnimJoint1196->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment1197 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1197->setName("l_pinky_metacarpal");
HAnimSegment1197->setDEF("hanim_l_pinky_metacarpal");
//<HAnimJoint name='l_pinky0'/> visualization sphere is placed within <HAnimSegment name='l_pinky_metacarpal'/>
CTouchSensor* TouchSensor1198 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1198->setDescription("HAnimJoint l_pinky0, HAnimSegment l_pinky_metacarpal");
HAnimSegment1197->addChildren(*TouchSensor1198);

CTransform* Transform1199 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1199->setTranslation(new float[3]{0.1925,0.8066,-0.1036});
CShape* Shape1200 = (CShape *)(m_pScene.createNode("Shape"));
Shape1200->setUSE("HAnimJointShape");
Transform1199->addChildren(*Shape1200);

HAnimSegment1197->addChildren(*Transform1199);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky0'/> to <HAnimJoint name='l_pinky1'/>
CShape* Shape1201 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1202 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1202->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1203 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1203->setPoint(new float[6]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036});
LineSet1202->setCoord(*Coordinate1203);

CColorRGBA* ColorRGBA1204 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1204->setUSE("HAnimSegmentLineColorRGBA");
LineSet1202->setColor(*ColorRGBA1204);

Shape1201->setGeometry(LineSet1202);

HAnimSegment1197->addChildren(*Shape1201);

HAnimJoint1196->addChildren(*HAnimSegment1197);

CHAnimJoint* HAnimJoint1205 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1205->setName("l_pinky1");
HAnimJoint1205->setDEF("hanim_l_pinky1");
HAnimJoint1205->setCenter(new float[3]{0.1925,0.7866,-0.1036});
<<<<<<< HEAD
HAnimJoint1205->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1205->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint1205->setUlimit(new float[3]{0,0,0});
HAnimJoint1205->setLlimit(new float[3]{0,0,0});
HAnimJoint1205->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment1206 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1206->setName("l_pinky_proximal");
HAnimSegment1206->setDEF("hanim_l_pinky_proximal");
//<HAnimJoint name='l_pinky1'/> visualization sphere is placed within <HAnimSegment name='l_pinky_proximal'/>
CTouchSensor* TouchSensor1207 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1207->setDescription("HAnimJoint l_pinky1, HAnimSegment l_pinky_proximal");
HAnimSegment1206->addChildren(*TouchSensor1207);

CTransform* Transform1208 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1208->setTranslation(new float[3]{0.1925,0.7866,-0.1036});
CShape* Shape1209 = (CShape *)(m_pScene.createNode("Shape"));
Shape1209->setUSE("HAnimJointShape");
Transform1208->addChildren(*Shape1209);

HAnimSegment1206->addChildren(*Transform1208);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky1'/> to <HAnimJoint name='l_pinky2'/>
CShape* Shape1210 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1211 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1211->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1212 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1212->setPoint(new float[6]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024});
LineSet1211->setCoord(*Coordinate1212);

CColorRGBA* ColorRGBA1213 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1213->setUSE("HAnimSegmentLineColorRGBA");
LineSet1211->setColor(*ColorRGBA1213);

Shape1210->setGeometry(LineSet1211);

HAnimSegment1206->addChildren(*Shape1210);

HAnimJoint1205->addChildren(*HAnimSegment1206);

CHAnimJoint* HAnimJoint1214 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1214->setName("l_pinky2");
HAnimJoint1214->setDEF("hanim_l_pinky2");
HAnimJoint1214->setCenter(new float[3]{0.1938,0.7452,-0.1024});
<<<<<<< HEAD
HAnimJoint1214->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1214->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint1214->setUlimit(new float[3]{0,0,0});
HAnimJoint1214->setLlimit(new float[3]{0,0,0});
HAnimJoint1214->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment1215 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1215->setName("l_pinky_middle");
HAnimSegment1215->setDEF("hanim_l_pinky_middle");
//<HAnimJoint name='l_pinky2'/> visualization sphere is placed within <HAnimSegment name='l_pinky_middle'/>
CTouchSensor* TouchSensor1216 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1216->setDescription("HAnimJoint l_pinky2, HAnimSegment l_pinky_middle");
HAnimSegment1215->addChildren(*TouchSensor1216);

CTransform* Transform1217 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1217->setTranslation(new float[3]{0.1938,0.7452,-0.1024});
CShape* Shape1218 = (CShape *)(m_pScene.createNode("Shape"));
Shape1218->setUSE("HAnimJointShape");
Transform1217->addChildren(*Shape1218);

HAnimSegment1215->addChildren(*Transform1217);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky2'/> to <HAnimJoint name='l_pinky3'/>
CShape* Shape1219 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1220 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1220->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1221 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1221->setPoint(new float[6]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017});
LineSet1220->setCoord(*Coordinate1221);

CColorRGBA* ColorRGBA1222 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1222->setUSE("HAnimSegmentLineColorRGBA");
LineSet1220->setColor(*ColorRGBA1222);

Shape1219->setGeometry(LineSet1220);

HAnimSegment1215->addChildren(*Shape1219);

HAnimJoint1214->addChildren(*HAnimSegment1215);

CHAnimJoint* HAnimJoint1223 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1223->setName("l_pinky3");
HAnimJoint1223->setDEF("hanim_l_pinky3");
HAnimJoint1223->setCenter(new float[3]{0.1948,0.7277,-0.1017});
<<<<<<< HEAD
HAnimJoint1223->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1223->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint1223->setUlimit(new float[3]{0,0,0});
HAnimJoint1223->setLlimit(new float[3]{0,0,0});
HAnimJoint1223->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment1224 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1224->setName("l_pinky_distal");
HAnimSegment1224->setDEF("hanim_l_pinky_distal");
//<HAnimJoint name='l_pinky3'/> visualization sphere is placed within <HAnimSegment name='l_pinky_distal'/>
CTouchSensor* TouchSensor1225 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1225->setDescription("HAnimJoint l_pinky3, HAnimSegment l_pinky_distal");
HAnimSegment1224->addChildren(*TouchSensor1225);

CTransform* Transform1226 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1226->setTranslation(new float[3]{0.1948,0.7277,-0.1017});
CShape* Shape1227 = (CShape *)(m_pScene.createNode("Shape"));
Shape1227->setUSE("HAnimJointShape");
Transform1226->addChildren(*Shape1227);

HAnimSegment1224->addChildren(*Transform1226);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_pinky3'/> to <HAnimSite name='l_pinky_distal_tip'/>
CShape* Shape1228 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1229 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1229->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1230 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1230->setPoint(new float[6]{0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012});
LineSet1229->setCoord(*Coordinate1230);

CColorRGBA* ColorRGBA1231 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1231->setUSE("HAnimSiteLineColorRGBA");
LineSet1229->setColor(*ColorRGBA1231);

Shape1228->setGeometry(LineSet1229);

HAnimSegment1224->addChildren(*Shape1228);

CHAnimSite* HAnimSite1232 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1232->setName("l_pinky_distal_tip");
HAnimSite1232->setDEF("hanim_l_pinky_distal_tip");
HAnimSite1232->setTranslation(new float[3]{0.2014,0.7009,-0.1012});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1233 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1233->setDescription("HAnimSite l_pinky_distal_tip");
HAnimSite1232->addChildren(*TouchSensor1233);

CShape* Shape1234 = (CShape *)(m_pScene.createNode("Shape"));
Shape1234->setUSE("HAnimSiteShape");
HAnimSite1232->addChildren(*Shape1234);

HAnimSegment1224->addChildren(*HAnimSite1232);

HAnimJoint1223->addChildren(*HAnimSegment1224);

HAnimJoint1214->addChildren(*HAnimJoint1223);

HAnimJoint1205->addChildren(*HAnimJoint1214);

HAnimJoint1196->addChildren(*HAnimJoint1205);

HAnimJoint984->addChildren(*HAnimJoint1196);

HAnimJoint947->addChildren(*HAnimJoint984);

HAnimJoint931->addChildren(*HAnimJoint947);

HAnimJoint922->addChildren(*HAnimJoint931);

HAnimJoint885->addChildren(*HAnimJoint922);

HAnimJoint597->addChildren(*HAnimJoint885);

CHAnimJoint* HAnimJoint1235 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1235->setName("r_sternoclavicular");
HAnimJoint1235->setDEF("hanim_r_sternoclavicular");
HAnimJoint1235->setCenter(new float[3]{-0.082,1.4488,-0.0353});
<<<<<<< HEAD
HAnimJoint1235->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1235->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint1235->setUlimit(new float[3]{0,0,0});
HAnimJoint1235->setLlimit(new float[3]{0,0,0});
HAnimJoint1235->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment1236 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1236->setName("r_clavicle");
HAnimSegment1236->setDEF("hanim_r_clavicle");
//<HAnimJoint name='r_sternoclavicular'/> visualization sphere is placed within <HAnimSegment name='r_clavicle'/>
CTouchSensor* TouchSensor1237 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1237->setDescription("HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle");
HAnimSegment1236->addChildren(*TouchSensor1237);

CTransform* Transform1238 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1238->setTranslation(new float[3]{-0.082,1.4488,-0.0353});
CShape* Shape1239 = (CShape *)(m_pScene.createNode("Shape"));
Shape1239->setUSE("HAnimJointShape");
Transform1238->addChildren(*Shape1239);

HAnimSegment1236->addChildren(*Transform1238);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_sternoclavicular'/> to <HAnimJoint name='r_acromioclavicular'/>
CShape* Shape1240 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1241 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1241->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1242 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1242->setPoint(new float[6]{-0.082,1.4488,-0.0353,-0.0962,1.4269,-0.0424});
LineSet1241->setCoord(*Coordinate1242);

CColorRGBA* ColorRGBA1243 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1243->setUSE("HAnimSegmentLineColorRGBA");
LineSet1241->setColor(*ColorRGBA1243);

Shape1240->setGeometry(LineSet1241);

HAnimSegment1236->addChildren(*Shape1240);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_clavicale'/>
CShape* Shape1244 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1245 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1245->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1246 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1246->setPoint(new float[6]{-0.082,1.4488,-0.0353,-0.0115,1.4943,0.04});
LineSet1245->setCoord(*Coordinate1246);

CColorRGBA* ColorRGBA1247 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1247->setUSE("HAnimSiteLineColorRGBA");
LineSet1245->setColor(*ColorRGBA1247);

Shape1244->setGeometry(LineSet1245);

HAnimSegment1236->addChildren(*Shape1244);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_acromion'/>
CShape* Shape1248 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1249 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1249->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1250 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1250->setPoint(new float[6]{-0.082,1.4488,-0.0353,-0.1905,1.4791,-0.0431});
LineSet1249->setCoord(*Coordinate1250);

CColorRGBA* ColorRGBA1251 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1251->setUSE("HAnimSiteLineColorRGBA");
LineSet1249->setColor(*ColorRGBA1251);

Shape1248->setGeometry(LineSet1249);

HAnimSegment1236->addChildren(*Shape1248);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_ant'/>
CShape* Shape1252 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1253 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1253->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1254 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1254->setPoint(new float[6]{-0.082,1.4488,-0.0353,-0.1626,1.4072,-0.0031});
LineSet1253->setCoord(*Coordinate1254);

CColorRGBA* ColorRGBA1255 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1255->setUSE("HAnimSiteLineColorRGBA");
LineSet1253->setColor(*ColorRGBA1255);

Shape1252->setGeometry(LineSet1253);

HAnimSegment1236->addChildren(*Shape1252);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_post'/>
CShape* Shape1256 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1257 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1257->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1258 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1258->setPoint(new float[6]{-0.082,1.4488,-0.0353,-0.1603,1.4098,-0.0826});
LineSet1257->setCoord(*Coordinate1258);

CColorRGBA* ColorRGBA1259 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1259->setUSE("HAnimSiteLineColorRGBA");
LineSet1257->setColor(*ColorRGBA1259);

Shape1256->setGeometry(LineSet1257);

HAnimSegment1236->addChildren(*Shape1256);

CHAnimSite* HAnimSite1260 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1260->setName("r_clavicale_pt");
HAnimSite1260->setDEF("hanim_r_clavicale_pt");
HAnimSite1260->setTranslation(new float[3]{-0.0115,1.4943,0.04});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1261 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1261->setDescription("HAnimSite r_clavicale");
HAnimSite1260->addChildren(*TouchSensor1261);

CShape* Shape1262 = (CShape *)(m_pScene.createNode("Shape"));
Shape1262->setUSE("HAnimSiteShape");
HAnimSite1260->addChildren(*Shape1262);

HAnimSegment1236->addChildren(*HAnimSite1260);

CHAnimSite* HAnimSite1263 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1263->setName("r_acromion_pt");
HAnimSite1263->setDEF("hanim_r_acromion_pt");
HAnimSite1263->setTranslation(new float[3]{-0.1905,1.4791,-0.0431});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1264 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1264->setDescription("HAnimSite r_acromion");
HAnimSite1263->addChildren(*TouchSensor1264);

CShape* Shape1265 = (CShape *)(m_pScene.createNode("Shape"));
Shape1265->setUSE("HAnimSiteShape");
HAnimSite1263->addChildren(*Shape1265);

HAnimSegment1236->addChildren(*HAnimSite1263);

CHAnimSite* HAnimSite1266 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1266->setName("r_axilla_ant_pt");
HAnimSite1266->setDEF("hanim_r_axilla_ant_pt");
HAnimSite1266->setTranslation(new float[3]{-0.1626,1.4072,-0.0031});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1267 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1267->setDescription("HAnimSite r_axilla_ant");
HAnimSite1266->addChildren(*TouchSensor1267);

CShape* Shape1268 = (CShape *)(m_pScene.createNode("Shape"));
Shape1268->setUSE("HAnimSiteShape");
HAnimSite1266->addChildren(*Shape1268);

HAnimSegment1236->addChildren(*HAnimSite1266);

CHAnimSite* HAnimSite1269 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1269->setName("r_axilla_post_pt");
HAnimSite1269->setDEF("hanim_r_axilla_post_pt");
HAnimSite1269->setTranslation(new float[3]{-0.1603,1.4098,-0.0826});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1270 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1270->setDescription("HAnimSite r_axilla_post");
HAnimSite1269->addChildren(*TouchSensor1270);

CShape* Shape1271 = (CShape *)(m_pScene.createNode("Shape"));
Shape1271->setUSE("HAnimSiteShape");
HAnimSite1269->addChildren(*Shape1271);

HAnimSegment1236->addChildren(*HAnimSite1269);

HAnimJoint1235->addChildren(*HAnimSegment1236);

CHAnimJoint* HAnimJoint1272 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1272->setName("r_acromioclavicular");
HAnimJoint1272->setDEF("hanim_r_acromioclavicular");
HAnimJoint1272->setCenter(new float[3]{-0.0962,1.4269,-0.0424});
<<<<<<< HEAD
HAnimJoint1272->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1272->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint1272->setUlimit(new float[3]{0,0,0});
HAnimJoint1272->setLlimit(new float[3]{0,0,0});
HAnimJoint1272->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment1273 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1273->setName("r_scapula");
HAnimSegment1273->setDEF("hanim_r_scapula");
//<HAnimJoint name='r_acromioclavicular'/> visualization sphere is placed within <HAnimSegment name='r_scapula'/>
CTouchSensor* TouchSensor1274 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1274->setDescription("HAnimJoint r_acromioclavicular, HAnimSegment r_scapula");
HAnimSegment1273->addChildren(*TouchSensor1274);

CTransform* Transform1275 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1275->setTranslation(new float[3]{-0.0962,1.4269,-0.0424});
CShape* Shape1276 = (CShape *)(m_pScene.createNode("Shape"));
Shape1276->setUSE("HAnimJointShape");
Transform1275->addChildren(*Shape1276);

HAnimSegment1273->addChildren(*Transform1275);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_acromioclavicular'/> to <HAnimJoint name='r_shoulder'/>
CShape* Shape1277 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1278 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1278->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1279 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1279->setPoint(new float[6]{-0.0962,1.4269,-0.0424,-0.2029,1.4376,-0.0387});
LineSet1278->setCoord(*Coordinate1279);

CColorRGBA* ColorRGBA1280 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1280->setUSE("HAnimSegmentLineColorRGBA");
LineSet1278->setColor(*ColorRGBA1280);

Shape1277->setGeometry(LineSet1278);

HAnimSegment1273->addChildren(*Shape1277);

HAnimJoint1272->addChildren(*HAnimSegment1273);

CHAnimJoint* HAnimJoint1281 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1281->setName("r_shoulder");
HAnimJoint1281->setDEF("hanim_r_shoulder");
HAnimJoint1281->setCenter(new float[3]{-0.2029,1.4376,-0.0387});
<<<<<<< HEAD
HAnimJoint1281->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1281->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint1281->setUlimit(new float[3]{0,0,0});
HAnimJoint1281->setLlimit(new float[3]{0,0,0});
HAnimJoint1281->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment1282 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1282->setName("r_upperarm");
HAnimSegment1282->setDEF("hanim_r_upperarm");
//<HAnimJoint name='r_shoulder'/> visualization sphere is placed within <HAnimSegment name='r_upperarm'/>
CTouchSensor* TouchSensor1283 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1283->setDescription("HAnimJoint r_shoulder, HAnimSegment r_upperarm");
HAnimSegment1282->addChildren(*TouchSensor1283);

CTransform* Transform1284 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1284->setTranslation(new float[3]{-0.2029,1.4376,-0.0387});
CShape* Shape1285 = (CShape *)(m_pScene.createNode("Shape"));
Shape1285->setUSE("HAnimJointShape");
Transform1284->addChildren(*Shape1285);

HAnimSegment1282->addChildren(*Transform1284);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_shoulder'/> to <HAnimJoint name='r_elbow'/>
CShape* Shape1286 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1287 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1287->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1288 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1288->setPoint(new float[6]{-0.2029,1.4376,-0.0387,-0.2014,1.1357,-0.0682});
LineSet1287->setCoord(*Coordinate1288);

CColorRGBA* ColorRGBA1289 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1289->setUSE("HAnimSegmentLineColorRGBA");
LineSet1287->setColor(*ColorRGBA1289);

Shape1286->setGeometry(LineSet1287);

HAnimSegment1282->addChildren(*Shape1286);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_shoulder'/> to <HAnimSite name='r_humeral_lateral_epicn'/>
CShape* Shape1290 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1291 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1291->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1292 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1292->setPoint(new float[6]{-0.2029,1.4376,-0.0387,-0.2224,1.1517,-0.1033});
LineSet1291->setCoord(*Coordinate1292);

CColorRGBA* ColorRGBA1293 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1293->setUSE("HAnimSiteLineColorRGBA");
LineSet1291->setColor(*ColorRGBA1293);

Shape1290->setGeometry(LineSet1291);

HAnimSegment1282->addChildren(*Shape1290);

CHAnimSite* HAnimSite1294 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1294->setName("r_humeral_lateral_epicn_pt");
HAnimSite1294->setDEF("hanim_r_humeral_lateral_epicn_pt");
HAnimSite1294->setTranslation(new float[3]{-0.2224,1.1517,-0.1033});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1295 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1295->setDescription("HAnimSite r_humeral_lateral_epicn");
HAnimSite1294->addChildren(*TouchSensor1295);

CShape* Shape1296 = (CShape *)(m_pScene.createNode("Shape"));
Shape1296->setUSE("HAnimSiteShape");
HAnimSite1294->addChildren(*Shape1296);

HAnimSegment1282->addChildren(*HAnimSite1294);

HAnimJoint1281->addChildren(*HAnimSegment1282);

CHAnimJoint* HAnimJoint1297 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1297->setName("r_elbow");
HAnimJoint1297->setDEF("hanim_r_elbow");
HAnimJoint1297->setCenter(new float[3]{-0.2014,1.1357,-0.0682});
<<<<<<< HEAD
HAnimJoint1297->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1297->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint1297->setUlimit(new float[3]{0,0,0});
HAnimJoint1297->setLlimit(new float[3]{0,0,0});
HAnimJoint1297->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment1298 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1298->setName("r_forearm");
HAnimSegment1298->setDEF("hanim_r_forearm");
//<HAnimJoint name='r_elbow'/> visualization sphere is placed within <HAnimSegment name='r_forearm'/>
CTouchSensor* TouchSensor1299 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1299->setDescription("HAnimJoint r_elbow, HAnimSegment r_forearm");
HAnimSegment1298->addChildren(*TouchSensor1299);

CTransform* Transform1300 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1300->setTranslation(new float[3]{-0.2014,1.1357,-0.0682});
CShape* Shape1301 = (CShape *)(m_pScene.createNode("Shape"));
Shape1301->setUSE("HAnimJointShape");
Transform1300->addChildren(*Shape1301);

HAnimSegment1298->addChildren(*Transform1300);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_elbow'/> to <HAnimJoint name='r_wrist'/>
CShape* Shape1302 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1303 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1303->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1304 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1304->setPoint(new float[6]{-0.2014,1.1357,-0.0682,-0.1984,0.8663,-0.0583});
LineSet1303->setCoord(*Coordinate1304);

CColorRGBA* ColorRGBA1305 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1305->setUSE("HAnimSegmentLineColorRGBA");
LineSet1303->setColor(*ColorRGBA1305);

Shape1302->setGeometry(LineSet1303);

HAnimSegment1298->addChildren(*Shape1302);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radial_styloid'/>
CShape* Shape1306 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1307 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1307->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1308 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1308->setPoint(new float[6]{-0.2014,1.1357,-0.0682,-0.1884,0.8676,-0.036});
LineSet1307->setCoord(*Coordinate1308);

CColorRGBA* ColorRGBA1309 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1309->setUSE("HAnimSiteLineColorRGBA");
LineSet1307->setColor(*ColorRGBA1309);

Shape1306->setGeometry(LineSet1307);

HAnimSegment1298->addChildren(*Shape1306);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_olecranon'/>
CShape* Shape1310 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1311 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1311->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1312 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1312->setPoint(new float[6]{-0.2014,1.1357,-0.0682,-0.1907,1.1405,-0.1065});
LineSet1311->setCoord(*Coordinate1312);

CColorRGBA* ColorRGBA1313 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1313->setUSE("HAnimSiteLineColorRGBA");
LineSet1311->setColor(*ColorRGBA1313);

Shape1310->setGeometry(LineSet1311);

HAnimSegment1298->addChildren(*Shape1310);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_humeral_medial_epicn'/>
CShape* Shape1314 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1315 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1315->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1316 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1316->setPoint(new float[6]{-0.2014,1.1357,-0.0682,-0.168,1.1298,-0.1062});
LineSet1315->setCoord(*Coordinate1316);

CColorRGBA* ColorRGBA1317 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1317->setUSE("HAnimSiteLineColorRGBA");
LineSet1315->setColor(*ColorRGBA1317);

Shape1314->setGeometry(LineSet1315);

HAnimSegment1298->addChildren(*Shape1314);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radiale'/>
CShape* Shape1318 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1319 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1319->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1320 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1320->setPoint(new float[6]{-0.2014,1.1357,-0.0682,-0.213,1.1305,-0.1091});
LineSet1319->setCoord(*Coordinate1320);

CColorRGBA* ColorRGBA1321 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1321->setUSE("HAnimSiteLineColorRGBA");
LineSet1319->setColor(*ColorRGBA1321);

Shape1318->setGeometry(LineSet1319);

HAnimSegment1298->addChildren(*Shape1318);

CHAnimSite* HAnimSite1322 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1322->setName("r_radial_styloid_pt");
HAnimSite1322->setDEF("hanim_r_radial_styloid_pt");
HAnimSite1322->setTranslation(new float[3]{-0.1884,0.8676,-0.036});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1323 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1323->setDescription("HAnimSite r_radial_styloid");
HAnimSite1322->addChildren(*TouchSensor1323);

CShape* Shape1324 = (CShape *)(m_pScene.createNode("Shape"));
Shape1324->setUSE("HAnimSiteShape");
HAnimSite1322->addChildren(*Shape1324);

HAnimSegment1298->addChildren(*HAnimSite1322);

CHAnimSite* HAnimSite1325 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1325->setName("r_olecranon_pt");
HAnimSite1325->setDEF("hanim_r_olecranon_pt");
HAnimSite1325->setTranslation(new float[3]{-0.1907,1.1405,-0.1065});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1326 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1326->setDescription("HAnimSite r_olecranon");
HAnimSite1325->addChildren(*TouchSensor1326);

CShape* Shape1327 = (CShape *)(m_pScene.createNode("Shape"));
Shape1327->setUSE("HAnimSiteShape");
HAnimSite1325->addChildren(*Shape1327);

HAnimSegment1298->addChildren(*HAnimSite1325);

CHAnimSite* HAnimSite1328 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1328->setName("r_humeral_medial_epicn_pt");
HAnimSite1328->setDEF("hanim_r_humeral_medial_epicn_pt");
HAnimSite1328->setTranslation(new float[3]{-0.168,1.1298,-0.1062});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1329 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1329->setDescription("HAnimSite r_humeral_medial_epicn");
HAnimSite1328->addChildren(*TouchSensor1329);

CShape* Shape1330 = (CShape *)(m_pScene.createNode("Shape"));
Shape1330->setUSE("HAnimSiteShape");
HAnimSite1328->addChildren(*Shape1330);

HAnimSegment1298->addChildren(*HAnimSite1328);

CHAnimSite* HAnimSite1331 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1331->setName("r_radiale_pt");
HAnimSite1331->setDEF("hanim_r_radiale_pt");
HAnimSite1331->setTranslation(new float[3]{-0.213,1.1305,-0.1091});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1332 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1332->setDescription("HAnimSite r_radiale");
HAnimSite1331->addChildren(*TouchSensor1332);

CShape* Shape1333 = (CShape *)(m_pScene.createNode("Shape"));
Shape1333->setUSE("HAnimSiteShape");
HAnimSite1331->addChildren(*Shape1333);

HAnimSegment1298->addChildren(*HAnimSite1331);

HAnimJoint1297->addChildren(*HAnimSegment1298);

CHAnimJoint* HAnimJoint1334 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1334->setName("r_wrist");
HAnimJoint1334->setDEF("hanim_r_wrist");
HAnimJoint1334->setCenter(new float[3]{-0.1984,0.8663,-0.0583});
<<<<<<< HEAD
HAnimJoint1334->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1334->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint1334->setUlimit(new float[3]{0,0,0});
HAnimJoint1334->setLlimit(new float[3]{0,0,0});
HAnimJoint1334->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment1335 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1335->setName("r_hand");
HAnimSegment1335->setDEF("hanim_r_hand");
//<HAnimJoint name='r_wrist'/> visualization sphere is placed within <HAnimSegment name='r_hand'/>
CTouchSensor* TouchSensor1336 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1336->setDescription("HAnimJoint r_wrist, HAnimSegment r_hand");
HAnimSegment1335->addChildren(*TouchSensor1336);

CTransform* Transform1337 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1337->setTranslation(new float[3]{-0.1984,0.8663,-0.0583});
CShape* Shape1338 = (CShape *)(m_pScene.createNode("Shape"));
Shape1338->setUSE("HAnimJointShape");
Transform1337->addChildren(*Shape1338);

HAnimSegment1335->addChildren(*Transform1337);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_thumb1'/>
CShape* Shape1339 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1340 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1340->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1341 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1341->setPoint(new float[6]{-0.1984,0.8663,-0.0583,-0.1924,0.8472,-0.0534});
LineSet1340->setCoord(*Coordinate1341);

CColorRGBA* ColorRGBA1342 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1342->setUSE("HAnimSegmentLineColorRGBA");
LineSet1340->setColor(*ColorRGBA1342);

Shape1339->setGeometry(LineSet1340);

HAnimSegment1335->addChildren(*Shape1339);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_index0'/>
CShape* Shape1343 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1344 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1344->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1345 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1345->setPoint(new float[6]{-0.1984,0.8663,-0.0583,-0.1983,0.8024,-0.028});
LineSet1344->setCoord(*Coordinate1345);

CColorRGBA* ColorRGBA1346 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1346->setUSE("HAnimSegmentLineColorRGBA");
LineSet1344->setColor(*ColorRGBA1346);

Shape1343->setGeometry(LineSet1344);

HAnimSegment1335->addChildren(*Shape1343);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_middle0'/>
CShape* Shape1347 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1348 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1348->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1349 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1349->setPoint(new float[6]{-0.1984,0.8663,-0.0583,-0.1987,0.8029,-0.053});
LineSet1348->setCoord(*Coordinate1349);

CColorRGBA* ColorRGBA1350 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1350->setUSE("HAnimSegmentLineColorRGBA");
LineSet1348->setColor(*ColorRGBA1350);

Shape1347->setGeometry(LineSet1348);

HAnimSegment1335->addChildren(*Shape1347);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_ring0'/>
CShape* Shape1351 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1352 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1352->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1353 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1353->setPoint(new float[6]{-0.1984,0.8663,-0.0583,-0.1956,0.8019,-0.0794});
LineSet1352->setCoord(*Coordinate1353);

CColorRGBA* ColorRGBA1354 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1354->setUSE("HAnimSegmentLineColorRGBA");
LineSet1352->setColor(*ColorRGBA1354);

Shape1351->setGeometry(LineSet1352);

HAnimSegment1335->addChildren(*Shape1351);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_pinky0'/>
CShape* Shape1355 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1356 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1356->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1357 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1357->setPoint(new float[6]{-0.1984,0.8663,-0.0583,-0.1925,0.8066,-0.1036});
LineSet1356->setCoord(*Coordinate1357);

CColorRGBA* ColorRGBA1358 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1358->setUSE("HAnimSegmentLineColorRGBA");
LineSet1356->setColor(*ColorRGBA1358);

Shape1355->setGeometry(LineSet1356);

HAnimSegment1335->addChildren(*Shape1355);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_metacarpal_pha2'/>
CShape* Shape1359 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1360 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1360->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1361 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1361->setPoint(new float[6]{-0.1984,0.8663,-0.0583,-0.1977,0.8169,-0.0177});
LineSet1360->setCoord(*Coordinate1361);

CColorRGBA* ColorRGBA1362 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1362->setUSE("HAnimSiteLineColorRGBA");
LineSet1360->setColor(*ColorRGBA1362);

Shape1359->setGeometry(LineSet1360);

HAnimSegment1335->addChildren(*Shape1359);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_ulnar_styloid'/>
CShape* Shape1363 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1364 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1364->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1365 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1365->setPoint(new float[6]{-0.1984,0.8663,-0.0583,-0.2117,0.8562,-0.0584});
LineSet1364->setCoord(*Coordinate1365);

CColorRGBA* ColorRGBA1366 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1366->setUSE("HAnimSiteLineColorRGBA");
LineSet1364->setColor(*ColorRGBA1366);

Shape1363->setGeometry(LineSet1364);

HAnimSegment1335->addChildren(*Shape1363);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_metacarpal_pha5'/>
CShape* Shape1367 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1368 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1368->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1369 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1369->setPoint(new float[6]{-0.1984,0.8663,-0.0583,-0.1929,0.789,-0.1064});
LineSet1368->setCoord(*Coordinate1369);

CColorRGBA* ColorRGBA1370 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1370->setUSE("HAnimSiteLineColorRGBA");
LineSet1368->setColor(*ColorRGBA1370);

Shape1367->setGeometry(LineSet1368);

HAnimSegment1335->addChildren(*Shape1367);

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_hand_front_view'/>
CShape* Shape1371 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1372 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1372->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1373 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1373->setPoint(new float[6]{-0.1984,0.8663,-0.0583,-0.3,0.75,0.45});
LineSet1372->setCoord(*Coordinate1373);

CColorRGBA* ColorRGBA1374 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1374->setUSE("HAnimSiteViewpointLineColorRGBA");
LineSet1372->setColor(*ColorRGBA1374);

Shape1371->setGeometry(LineSet1372);

HAnimSegment1335->addChildren(*Shape1371);

CHAnimSite* HAnimSite1375 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1375->setName("r_metacarpal_pha2_pt");
HAnimSite1375->setDEF("hanim_r_metacarpal_pha2_pt");
HAnimSite1375->setTranslation(new float[3]{-0.1977,0.8169,-0.0177});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1376 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1376->setDescription("HAnimSite r_metacarpal_pha2");
HAnimSite1375->addChildren(*TouchSensor1376);

CShape* Shape1377 = (CShape *)(m_pScene.createNode("Shape"));
Shape1377->setUSE("HAnimSiteShape");
HAnimSite1375->addChildren(*Shape1377);

HAnimSegment1335->addChildren(*HAnimSite1375);

CHAnimSite* HAnimSite1378 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1378->setName("r_ulnar_styloid_pt");
HAnimSite1378->setDEF("hanim_r_ulnar_styloid_pt");
HAnimSite1378->setTranslation(new float[3]{-0.2117,0.8562,-0.0584});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1379 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1379->setDescription("HAnimSite r_ulnar_styloid");
HAnimSite1378->addChildren(*TouchSensor1379);

CShape* Shape1380 = (CShape *)(m_pScene.createNode("Shape"));
Shape1380->setUSE("HAnimSiteShape");
HAnimSite1378->addChildren(*Shape1380);

HAnimSegment1335->addChildren(*HAnimSite1378);

CHAnimSite* HAnimSite1381 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1381->setName("r_metacarpal_pha5_pt");
HAnimSite1381->setDEF("hanim_r_metacarpal_pha5_pt");
HAnimSite1381->setTranslation(new float[3]{-0.1929,0.789,-0.1064});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1382 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1382->setDescription("HAnimSite r_metacarpal_pha5");
HAnimSite1381->addChildren(*TouchSensor1382);

CShape* Shape1383 = (CShape *)(m_pScene.createNode("Shape"));
Shape1383->setUSE("HAnimSiteShape");
HAnimSite1381->addChildren(*Shape1383);

HAnimSegment1335->addChildren(*HAnimSite1381);

CHAnimSite* HAnimSite1384 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1384->setName("r_hand_front_view");
HAnimSite1384->setDEF("hanim_r_hand_front_view");
HAnimSite1384->setTranslation(new float[3]{-0.3,0.75,0.45});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1385 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1385->setDescription("HAnimSite r_hand_front_view");
HAnimSite1384->addChildren(*TouchSensor1385);

CShape* Shape1386 = (CShape *)(m_pScene.createNode("Shape"));
Shape1386->setUSE("HAnimSiteShape");
HAnimSite1384->addChildren(*Shape1386);

CViewpoint* Viewpoint1387 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1387->setDEF("hanim_r_hand_front_viewpoint");
Viewpoint1387->setCenterOfRotation(new float[3]{0,0.7,0});
Viewpoint1387->setDescription("right hand front");
Viewpoint1387->setPosition(new float[3]{0,0,0});
HAnimSite1384->addChildren(*Viewpoint1387);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1388 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1388->setDescription("HAnimSite hanim_r_hand_front_view Viewpoint");
Anchor1388->setUrl(new CString[1]{"#hanim_r_hand_front_viewpoint"}, 1);
CLOD* LOD1389 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1389->setForceTransitions(True);
LOD1389->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo1390 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1390->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1389->addChildren(*WorldInfo1390);

CShape* Shape1391 = (CShape *)(m_pScene.createNode("Shape"));
Shape1391->setUSE("HAnimSiteViewpointShape");
LOD1389->addChildren(*Shape1391);

Anchor1388->addChildren(*LOD1389);

HAnimSite1384->addChildren(*Anchor1388);

HAnimSegment1335->addChildren(*HAnimSite1384);

HAnimJoint1334->addChildren(*HAnimSegment1335);

CHAnimJoint* HAnimJoint1392 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1392->setName("r_thumb1");
HAnimJoint1392->setDEF("hanim_r_thumb1");
HAnimJoint1392->setCenter(new float[3]{-0.1924,0.8472,-0.0534});
<<<<<<< HEAD
HAnimJoint1392->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1392->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint1392->setUlimit(new float[3]{0,0,0});
HAnimJoint1392->setLlimit(new float[3]{0,0,0});
HAnimJoint1392->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment1393 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1393->setName("r_thumb_metacarpal");
HAnimSegment1393->setDEF("hanim_r_thumb_metacarpal");
//<HAnimJoint name='r_thumb1'/> visualization sphere is placed within <HAnimSegment name='r_thumb_metacarpal'/>
CTouchSensor* TouchSensor1394 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1394->setDescription("HAnimJoint r_thumb1, HAnimSegment r_thumb_metacarpal");
HAnimSegment1393->addChildren(*TouchSensor1394);

CTransform* Transform1395 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1395->setTranslation(new float[3]{-0.1924,0.8472,-0.0534});
CShape* Shape1396 = (CShape *)(m_pScene.createNode("Shape"));
Shape1396->setUSE("HAnimJointShape");
Transform1395->addChildren(*Shape1396);

HAnimSegment1393->addChildren(*Transform1395);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_thumb1'/> to <HAnimJoint name='r_thumb2'/>
CShape* Shape1397 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1398 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1398->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1399 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1399->setPoint(new float[6]{-0.1924,0.8472,-0.0534,-0.1951,0.8226,0.0246});
LineSet1398->setCoord(*Coordinate1399);

CColorRGBA* ColorRGBA1400 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1400->setUSE("HAnimSegmentLineColorRGBA");
LineSet1398->setColor(*ColorRGBA1400);

Shape1397->setGeometry(LineSet1398);

HAnimSegment1393->addChildren(*Shape1397);

HAnimJoint1392->addChildren(*HAnimSegment1393);

CHAnimJoint* HAnimJoint1401 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1401->setName("r_thumb2");
HAnimJoint1401->setDEF("hanim_r_thumb2");
HAnimJoint1401->setCenter(new float[3]{-0.1951,0.8226,0.0246});
<<<<<<< HEAD
HAnimJoint1401->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1401->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint1401->setUlimit(new float[3]{0,0,0});
HAnimJoint1401->setLlimit(new float[3]{0,0,0});
HAnimJoint1401->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment1402 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1402->setName("r_thumb_proximal");
HAnimSegment1402->setDEF("hanim_r_thumb_proximal");
//<HAnimJoint name='r_thumb2'/> visualization sphere is placed within <HAnimSegment name='r_thumb_proximal'/>
CTouchSensor* TouchSensor1403 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1403->setDescription("HAnimJoint r_thumb2, HAnimSegment r_thumb_proximal");
HAnimSegment1402->addChildren(*TouchSensor1403);

CTransform* Transform1404 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1404->setTranslation(new float[3]{-0.1951,0.8226,0.0246});
CShape* Shape1405 = (CShape *)(m_pScene.createNode("Shape"));
Shape1405->setUSE("HAnimJointShape");
Transform1404->addChildren(*Shape1405);

HAnimSegment1402->addChildren(*Transform1404);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_thumb2'/> to <HAnimJoint name='r_thumb3'/>
CShape* Shape1406 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1407 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1407->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1408 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1408->setPoint(new float[6]{-0.1951,0.8226,0.0246,-0.1955,0.8159,0.0464});
LineSet1407->setCoord(*Coordinate1408);

CColorRGBA* ColorRGBA1409 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1409->setUSE("HAnimSegmentLineColorRGBA");
LineSet1407->setColor(*ColorRGBA1409);

Shape1406->setGeometry(LineSet1407);

HAnimSegment1402->addChildren(*Shape1406);

HAnimJoint1401->addChildren(*HAnimSegment1402);

CHAnimJoint* HAnimJoint1410 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1410->setName("r_thumb3");
HAnimJoint1410->setDEF("hanim_r_thumb3");
HAnimJoint1410->setCenter(new float[3]{-0.1955,0.8159,0.0464});
<<<<<<< HEAD
HAnimJoint1410->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1410->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint1410->setUlimit(new float[3]{0,0,0});
HAnimJoint1410->setLlimit(new float[3]{0,0,0});
HAnimJoint1410->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment1411 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1411->setName("r_thumb_distal");
HAnimSegment1411->setDEF("hanim_r_thumb_distal");
//<HAnimJoint name='r_thumb3'/> visualization sphere is placed within <HAnimSegment name='r_thumb_distal'/>
CTouchSensor* TouchSensor1412 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1412->setDescription("HAnimJoint r_thumb3, HAnimSegment r_thumb_distal");
HAnimSegment1411->addChildren(*TouchSensor1412);

CTransform* Transform1413 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1413->setTranslation(new float[3]{-0.1955,0.8159,0.0464});
CShape* Shape1414 = (CShape *)(m_pScene.createNode("Shape"));
Shape1414->setUSE("HAnimJointShape");
Transform1413->addChildren(*Shape1414);

HAnimSegment1411->addChildren(*Transform1413);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_thumb3'/> to <HAnimSite name='r_thumb_distal_tip'/>
CShape* Shape1415 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1416 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1416->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1417 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1417->setPoint(new float[6]{-0.1955,0.8159,0.0464,-0.1869,0.809,0.082});
LineSet1416->setCoord(*Coordinate1417);

CColorRGBA* ColorRGBA1418 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1418->setUSE("HAnimSiteLineColorRGBA");
LineSet1416->setColor(*ColorRGBA1418);

Shape1415->setGeometry(LineSet1416);

HAnimSegment1411->addChildren(*Shape1415);

CHAnimSite* HAnimSite1419 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1419->setName("r_thumb_distal_tip");
HAnimSite1419->setDEF("hanim_r_thumb_distal_tip");
HAnimSite1419->setTranslation(new float[3]{-0.1869,0.809,0.082});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1420 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1420->setDescription("HAnimSite r_thumb_distal_tip");
HAnimSite1419->addChildren(*TouchSensor1420);

CShape* Shape1421 = (CShape *)(m_pScene.createNode("Shape"));
Shape1421->setUSE("HAnimSiteShape");
HAnimSite1419->addChildren(*Shape1421);

HAnimSegment1411->addChildren(*HAnimSite1419);

HAnimJoint1410->addChildren(*HAnimSegment1411);

HAnimJoint1401->addChildren(*HAnimJoint1410);

HAnimJoint1392->addChildren(*HAnimJoint1401);

HAnimJoint1334->addChildren(*HAnimJoint1392);

CHAnimJoint* HAnimJoint1422 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1422->setName("r_index0");
HAnimJoint1422->setDEF("hanim_r_index0");
HAnimJoint1422->setCenter(new float[3]{-0.1983,0.8024,-0.028});
<<<<<<< HEAD
HAnimJoint1422->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1422->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint1422->setUlimit(new float[3]{0,0,0});
HAnimJoint1422->setLlimit(new float[3]{0,0,0});
HAnimJoint1422->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment1423 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1423->setName("r_index_metacarpal");
HAnimSegment1423->setDEF("hanim_r_index_metacarpal");
//<HAnimJoint name='r_index0'/> visualization sphere is placed within <HAnimSegment name='r_index_metacarpal'/>
CTouchSensor* TouchSensor1424 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1424->setDescription("HAnimJoint r_index0, HAnimSegment r_index_metacarpal");
HAnimSegment1423->addChildren(*TouchSensor1424);

CTransform* Transform1425 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1425->setTranslation(new float[3]{-0.1983,0.8024,-0.028});
CShape* Shape1426 = (CShape *)(m_pScene.createNode("Shape"));
Shape1426->setUSE("HAnimJointShape");
Transform1425->addChildren(*Shape1426);

HAnimSegment1423->addChildren(*Transform1425);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_index0'/> to <HAnimJoint name='r_index1'/>
CShape* Shape1427 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1428 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1428->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1429 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1429->setPoint(new float[6]{-0.1983,0.8024,-0.028,-0.1983,0.7815,-0.028});
LineSet1428->setCoord(*Coordinate1429);

CColorRGBA* ColorRGBA1430 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1430->setUSE("HAnimSegmentLineColorRGBA");
LineSet1428->setColor(*ColorRGBA1430);

Shape1427->setGeometry(LineSet1428);

HAnimSegment1423->addChildren(*Shape1427);

HAnimJoint1422->addChildren(*HAnimSegment1423);

CHAnimJoint* HAnimJoint1431 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1431->setName("r_index1");
HAnimJoint1431->setDEF("hanim_r_index1");
HAnimJoint1431->setCenter(new float[3]{-0.1983,0.7815,-0.028});
<<<<<<< HEAD
HAnimJoint1431->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1431->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint1431->setUlimit(new float[3]{0,0,0});
HAnimJoint1431->setLlimit(new float[3]{0,0,0});
HAnimJoint1431->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment1432 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1432->setName("r_index_proximal");
HAnimSegment1432->setDEF("hanim_r_index_proximal");
//<HAnimJoint name='r_index1'/> visualization sphere is placed within <HAnimSegment name='r_index_proximal'/>
CTouchSensor* TouchSensor1433 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1433->setDescription("HAnimJoint r_index1, HAnimSegment r_index_proximal");
HAnimSegment1432->addChildren(*TouchSensor1433);

CTransform* Transform1434 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1434->setTranslation(new float[3]{-0.1983,0.7815,-0.028});
CShape* Shape1435 = (CShape *)(m_pScene.createNode("Shape"));
Shape1435->setUSE("HAnimJointShape");
Transform1434->addChildren(*Shape1435);

HAnimSegment1432->addChildren(*Transform1434);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_index1'/> to <HAnimJoint name='r_index2'/>
CShape* Shape1436 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1437 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1437->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1438 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1438->setPoint(new float[6]{-0.1983,0.7815,-0.028,-0.2017,0.7363,-0.0248});
LineSet1437->setCoord(*Coordinate1438);

CColorRGBA* ColorRGBA1439 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1439->setUSE("HAnimSegmentLineColorRGBA");
LineSet1437->setColor(*ColorRGBA1439);

Shape1436->setGeometry(LineSet1437);

HAnimSegment1432->addChildren(*Shape1436);

HAnimJoint1431->addChildren(*HAnimSegment1432);

CHAnimJoint* HAnimJoint1440 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1440->setName("r_index2");
HAnimJoint1440->setDEF("hanim_r_index2");
HAnimJoint1440->setCenter(new float[3]{-0.2017,0.7363,-0.0248});
<<<<<<< HEAD
HAnimJoint1440->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1440->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint1440->setUlimit(new float[3]{0,0,0});
HAnimJoint1440->setLlimit(new float[3]{0,0,0});
HAnimJoint1440->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment1441 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1441->setName("r_index_middle");
HAnimSegment1441->setDEF("hanim_r_index_middle");
//<HAnimJoint name='r_index2'/> visualization sphere is placed within <HAnimSegment name='r_index_middle'/>
CTouchSensor* TouchSensor1442 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1442->setDescription("HAnimJoint r_index2, HAnimSegment r_index_middle");
HAnimSegment1441->addChildren(*TouchSensor1442);

CTransform* Transform1443 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1443->setTranslation(new float[3]{-0.2017,0.7363,-0.0248});
CShape* Shape1444 = (CShape *)(m_pScene.createNode("Shape"));
Shape1444->setUSE("HAnimJointShape");
Transform1443->addChildren(*Shape1444);

HAnimSegment1441->addChildren(*Transform1443);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_index2'/> to <HAnimJoint name='r_index3'/>
CShape* Shape1445 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1446 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1446->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1447 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1447->setPoint(new float[6]{-0.2017,0.7363,-0.0248,-0.2028,0.7139,-0.0236});
LineSet1446->setCoord(*Coordinate1447);

CColorRGBA* ColorRGBA1448 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1448->setUSE("HAnimSegmentLineColorRGBA");
LineSet1446->setColor(*ColorRGBA1448);

Shape1445->setGeometry(LineSet1446);

HAnimSegment1441->addChildren(*Shape1445);

HAnimJoint1440->addChildren(*HAnimSegment1441);

CHAnimJoint* HAnimJoint1449 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1449->setName("r_index3");
HAnimJoint1449->setDEF("hanim_r_index3");
HAnimJoint1449->setCenter(new float[3]{-0.2028,0.7139,-0.0236});
<<<<<<< HEAD
HAnimJoint1449->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1449->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint1449->setUlimit(new float[3]{0,0,0});
HAnimJoint1449->setLlimit(new float[3]{0,0,0});
HAnimJoint1449->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment1450 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1450->setName("r_index_distal");
HAnimSegment1450->setDEF("hanim_r_index_distal");
//<HAnimJoint name='r_index3'/> visualization sphere is placed within <HAnimSegment name='r_index_distal'/>
CTouchSensor* TouchSensor1451 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1451->setDescription("HAnimJoint r_index3, HAnimSegment r_index_distal");
HAnimSegment1450->addChildren(*TouchSensor1451);

CTransform* Transform1452 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1452->setTranslation(new float[3]{-0.2028,0.7139,-0.0236});
CShape* Shape1453 = (CShape *)(m_pScene.createNode("Shape"));
Shape1453->setUSE("HAnimJointShape");
Transform1452->addChildren(*Shape1453);

HAnimSegment1450->addChildren(*Transform1452);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_index_distal_tip'/>
CShape* Shape1454 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1455 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1455->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1456 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1456->setPoint(new float[6]{-0.2028,0.7139,-0.0236,-0.198,0.6883,-0.018});
LineSet1455->setCoord(*Coordinate1456);

CColorRGBA* ColorRGBA1457 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1457->setUSE("HAnimSiteLineColorRGBA");
LineSet1455->setColor(*ColorRGBA1457);

Shape1454->setGeometry(LineSet1455);

HAnimSegment1450->addChildren(*Shape1454);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_dactylion'/>
CShape* Shape1458 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1459 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1459->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1460 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1460->setPoint(new float[6]{-0.2028,0.7139,-0.0236,-0.1941,0.6772,-0.0423});
LineSet1459->setCoord(*Coordinate1460);

CColorRGBA* ColorRGBA1461 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1461->setUSE("HAnimSiteLineColorRGBA");
LineSet1459->setColor(*ColorRGBA1461);

Shape1458->setGeometry(LineSet1459);

HAnimSegment1450->addChildren(*Shape1458);

CHAnimSite* HAnimSite1462 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1462->setName("r_index_distal_tip");
HAnimSite1462->setDEF("hanim_r_index_distal_tip");
HAnimSite1462->setTranslation(new float[3]{-0.198,0.6883,-0.018});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1463 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1463->setDescription("HAnimSite r_index_distal_tip");
HAnimSite1462->addChildren(*TouchSensor1463);

CShape* Shape1464 = (CShape *)(m_pScene.createNode("Shape"));
Shape1464->setUSE("HAnimSiteShape");
HAnimSite1462->addChildren(*Shape1464);

HAnimSegment1450->addChildren(*HAnimSite1462);

CHAnimSite* HAnimSite1465 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1465->setName("r_dactylion_pt");
HAnimSite1465->setDEF("hanim_r_dactylion_pt");
HAnimSite1465->setTranslation(new float[3]{-0.1941,0.6772,-0.0423});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1466 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1466->setDescription("HAnimSite r_dactylion");
HAnimSite1465->addChildren(*TouchSensor1466);

CShape* Shape1467 = (CShape *)(m_pScene.createNode("Shape"));
Shape1467->setUSE("HAnimSiteShape");
HAnimSite1465->addChildren(*Shape1467);

HAnimSegment1450->addChildren(*HAnimSite1465);

HAnimJoint1449->addChildren(*HAnimSegment1450);

HAnimJoint1440->addChildren(*HAnimJoint1449);

HAnimJoint1431->addChildren(*HAnimJoint1440);

HAnimJoint1422->addChildren(*HAnimJoint1431);

HAnimJoint1334->addChildren(*HAnimJoint1422);

CHAnimJoint* HAnimJoint1468 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1468->setName("r_middle0");
HAnimJoint1468->setDEF("hanim_r_middle0");
HAnimJoint1468->setCenter(new float[3]{-0.1987,0.8029,-0.053});
<<<<<<< HEAD
HAnimJoint1468->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1468->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint1468->setUlimit(new float[3]{0,0,0});
HAnimJoint1468->setLlimit(new float[3]{0,0,0});
HAnimJoint1468->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment1469 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1469->setName("r_middle_metacarpal");
HAnimSegment1469->setDEF("hanim_r_middle_metacarpal");
//<HAnimJoint name='r_middle0'/> visualization sphere is placed within <HAnimSegment name='r_middle_metacarpal'/>
CTouchSensor* TouchSensor1470 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1470->setDescription("HAnimJoint r_middle0, HAnimSegment r_middle_metacarpal");
HAnimSegment1469->addChildren(*TouchSensor1470);

CTransform* Transform1471 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1471->setTranslation(new float[3]{-0.1987,0.8029,-0.053});
CShape* Shape1472 = (CShape *)(m_pScene.createNode("Shape"));
Shape1472->setUSE("HAnimJointShape");
Transform1471->addChildren(*Shape1472);

HAnimSegment1469->addChildren(*Transform1471);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle0'/> to <HAnimJoint name='r_middle1'/>
CShape* Shape1473 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1474 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1474->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1475 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1475->setPoint(new float[6]{-0.1987,0.8029,-0.053,-0.1987,0.7818,-0.053});
LineSet1474->setCoord(*Coordinate1475);

CColorRGBA* ColorRGBA1476 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1476->setUSE("HAnimSegmentLineColorRGBA");
LineSet1474->setColor(*ColorRGBA1476);

Shape1473->setGeometry(LineSet1474);

HAnimSegment1469->addChildren(*Shape1473);

HAnimJoint1468->addChildren(*HAnimSegment1469);

CHAnimJoint* HAnimJoint1477 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1477->setName("r_middle1");
HAnimJoint1477->setDEF("hanim_r_middle1");
HAnimJoint1477->setCenter(new float[3]{-0.1987,0.7818,-0.053});
<<<<<<< HEAD
HAnimJoint1477->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1477->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint1477->setUlimit(new float[3]{0,0,0});
HAnimJoint1477->setLlimit(new float[3]{0,0,0});
HAnimJoint1477->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment1478 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1478->setName("r_middle_proximal");
HAnimSegment1478->setDEF("hanim_r_middle_proximal");
//<HAnimJoint name='r_middle1'/> visualization sphere is placed within <HAnimSegment name='r_middle_proximal'/>
CTouchSensor* TouchSensor1479 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1479->setDescription("HAnimJoint r_middle1, HAnimSegment r_middle_proximal");
HAnimSegment1478->addChildren(*TouchSensor1479);

CTransform* Transform1480 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1480->setTranslation(new float[3]{-0.1987,0.7818,-0.053});
CShape* Shape1481 = (CShape *)(m_pScene.createNode("Shape"));
Shape1481->setUSE("HAnimJointShape");
Transform1480->addChildren(*Shape1481);

HAnimSegment1478->addChildren(*Transform1480);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle1'/> to <HAnimJoint name='r_middle2'/>
CShape* Shape1482 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1483 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1483->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1484 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1484->setPoint(new float[6]{-0.1987,0.7818,-0.053,-0.2013,0.7273,-0.0503});
LineSet1483->setCoord(*Coordinate1484);

CColorRGBA* ColorRGBA1485 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1485->setUSE("HAnimSegmentLineColorRGBA");
LineSet1483->setColor(*ColorRGBA1485);

Shape1482->setGeometry(LineSet1483);

HAnimSegment1478->addChildren(*Shape1482);

HAnimJoint1477->addChildren(*HAnimSegment1478);

CHAnimJoint* HAnimJoint1486 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1486->setName("r_middle2");
HAnimJoint1486->setDEF("hanim_r_middle2");
HAnimJoint1486->setCenter(new float[3]{-0.2013,0.7273,-0.0503});
<<<<<<< HEAD
HAnimJoint1486->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1486->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint1486->setUlimit(new float[3]{0,0,0});
HAnimJoint1486->setLlimit(new float[3]{0,0,0});
HAnimJoint1486->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment1487 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1487->setName("r_middle_middle");
HAnimSegment1487->setDEF("hanim_r_middle_middle");
//<HAnimJoint name='r_middle2'/> visualization sphere is placed within <HAnimSegment name='r_middle_middle'/>
CTouchSensor* TouchSensor1488 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1488->setDescription("HAnimJoint r_middle2, HAnimSegment r_middle_middle");
HAnimSegment1487->addChildren(*TouchSensor1488);

CTransform* Transform1489 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1489->setTranslation(new float[3]{-0.2013,0.7273,-0.0503});
CShape* Shape1490 = (CShape *)(m_pScene.createNode("Shape"));
Shape1490->setUSE("HAnimJointShape");
Transform1489->addChildren(*Shape1490);

HAnimSegment1487->addChildren(*Transform1489);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle2'/> to <HAnimJoint name='r_middle3'/>
CShape* Shape1491 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1492 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1492->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1493 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1493->setPoint(new float[6]{-0.2013,0.7273,-0.0503,-0.2026,0.7011,-0.0494});
LineSet1492->setCoord(*Coordinate1493);

CColorRGBA* ColorRGBA1494 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1494->setUSE("HAnimSegmentLineColorRGBA");
LineSet1492->setColor(*ColorRGBA1494);

Shape1491->setGeometry(LineSet1492);

HAnimSegment1487->addChildren(*Shape1491);

HAnimJoint1486->addChildren(*HAnimSegment1487);

CHAnimJoint* HAnimJoint1495 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1495->setName("r_middle3");
HAnimJoint1495->setDEF("hanim_r_middle3");
HAnimJoint1495->setCenter(new float[3]{-0.2026,0.7011,-0.0494});
<<<<<<< HEAD
HAnimJoint1495->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1495->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint1495->setUlimit(new float[3]{0,0,0});
HAnimJoint1495->setLlimit(new float[3]{0,0,0});
HAnimJoint1495->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment1496 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1496->setName("r_middle_distal");
HAnimSegment1496->setDEF("hanim_r_middle_distal");
//<HAnimJoint name='r_middle3'/> visualization sphere is placed within <HAnimSegment name='r_middle_distal'/>
CTouchSensor* TouchSensor1497 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1497->setDescription("HAnimJoint r_middle3, HAnimSegment r_middle_distal");
HAnimSegment1496->addChildren(*TouchSensor1497);

CTransform* Transform1498 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1498->setTranslation(new float[3]{-0.2026,0.7011,-0.0494});
CShape* Shape1499 = (CShape *)(m_pScene.createNode("Shape"));
Shape1499->setUSE("HAnimJointShape");
Transform1498->addChildren(*Shape1499);

HAnimSegment1496->addChildren(*Transform1498);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_middle3'/> to <HAnimSite name='r_middle_distal_tip'/>
CShape* Shape1500 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1501 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1501->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1502 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1502->setPoint(new float[6]{-0.2026,0.7011,-0.0494,-0.1969,0.6758,-0.0427});
LineSet1501->setCoord(*Coordinate1502);

CColorRGBA* ColorRGBA1503 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1503->setUSE("HAnimSiteLineColorRGBA");
LineSet1501->setColor(*ColorRGBA1503);

Shape1500->setGeometry(LineSet1501);

HAnimSegment1496->addChildren(*Shape1500);

CHAnimSite* HAnimSite1504 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1504->setName("r_middle_distal_tip");
HAnimSite1504->setDEF("hanim_r_middle_distal_tip");
HAnimSite1504->setTranslation(new float[3]{-0.1969,0.6758,-0.0427});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1505 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1505->setDescription("HAnimSite r_middle_distal_tip");
HAnimSite1504->addChildren(*TouchSensor1505);

CShape* Shape1506 = (CShape *)(m_pScene.createNode("Shape"));
Shape1506->setUSE("HAnimSiteShape");
HAnimSite1504->addChildren(*Shape1506);

HAnimSegment1496->addChildren(*HAnimSite1504);

HAnimJoint1495->addChildren(*HAnimSegment1496);

HAnimJoint1486->addChildren(*HAnimJoint1495);

HAnimJoint1477->addChildren(*HAnimJoint1486);

HAnimJoint1468->addChildren(*HAnimJoint1477);

HAnimJoint1334->addChildren(*HAnimJoint1468);

CHAnimJoint* HAnimJoint1507 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1507->setName("r_ring0");
HAnimJoint1507->setDEF("hanim_r_ring0");
HAnimJoint1507->setCenter(new float[3]{-0.1956,0.8019,-0.0794});
<<<<<<< HEAD
HAnimJoint1507->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1507->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint1507->setUlimit(new float[3]{0,0,0});
HAnimJoint1507->setLlimit(new float[3]{0,0,0});
HAnimJoint1507->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment1508 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1508->setName("r_ring_metacarpal");
HAnimSegment1508->setDEF("hanim_r_ring_metacarpal");
//<HAnimJoint name='r_ring0'/> visualization sphere is placed within <HAnimSegment name='r_ring_metacarpal'/>
CTouchSensor* TouchSensor1509 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1509->setDescription("HAnimJoint r_ring0, HAnimSegment r_ring_metacarpal");
HAnimSegment1508->addChildren(*TouchSensor1509);

CTransform* Transform1510 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1510->setTranslation(new float[3]{-0.1956,0.8019,-0.0794});
CShape* Shape1511 = (CShape *)(m_pScene.createNode("Shape"));
Shape1511->setUSE("HAnimJointShape");
Transform1510->addChildren(*Shape1511);

HAnimSegment1508->addChildren(*Transform1510);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring0'/> to <HAnimJoint name='r_ring1'/>
CShape* Shape1512 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1513 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1513->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1514 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1514->setPoint(new float[6]{-0.1956,0.8019,-0.0794,-0.1956,0.7815,-0.0794});
LineSet1513->setCoord(*Coordinate1514);

CColorRGBA* ColorRGBA1515 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1515->setUSE("HAnimSegmentLineColorRGBA");
LineSet1513->setColor(*ColorRGBA1515);

Shape1512->setGeometry(LineSet1513);

HAnimSegment1508->addChildren(*Shape1512);

HAnimJoint1507->addChildren(*HAnimSegment1508);

CHAnimJoint* HAnimJoint1516 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1516->setName("r_ring1");
HAnimJoint1516->setDEF("hanim_r_ring1");
HAnimJoint1516->setCenter(new float[3]{-0.1956,0.7815,-0.0794});
<<<<<<< HEAD
HAnimJoint1516->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1516->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint1516->setUlimit(new float[3]{0,0,0});
HAnimJoint1516->setLlimit(new float[3]{0,0,0});
HAnimJoint1516->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment1517 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1517->setName("r_ring_proximal");
HAnimSegment1517->setDEF("hanim_r_ring_proximal");
//<HAnimJoint name='r_ring1'/> visualization sphere is placed within <HAnimSegment name='r_ring_proximal'/>
CTouchSensor* TouchSensor1518 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1518->setDescription("HAnimJoint r_ring1, HAnimSegment r_ring_proximal");
HAnimSegment1517->addChildren(*TouchSensor1518);

CTransform* Transform1519 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1519->setTranslation(new float[3]{-0.1956,0.7815,-0.0794});
CShape* Shape1520 = (CShape *)(m_pScene.createNode("Shape"));
Shape1520->setUSE("HAnimJointShape");
Transform1519->addChildren(*Shape1520);

HAnimSegment1517->addChildren(*Transform1519);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring1'/> to <HAnimJoint name='r_ring2'/>
CShape* Shape1521 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1522 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1522->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1523 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1523->setPoint(new float[6]{-0.1956,0.7815,-0.0794,-0.1973,0.7287,-0.0777});
LineSet1522->setCoord(*Coordinate1523);

CColorRGBA* ColorRGBA1524 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1524->setUSE("HAnimSegmentLineColorRGBA");
LineSet1522->setColor(*ColorRGBA1524);

Shape1521->setGeometry(LineSet1522);

HAnimSegment1517->addChildren(*Shape1521);

HAnimJoint1516->addChildren(*HAnimSegment1517);

CHAnimJoint* HAnimJoint1525 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1525->setName("r_ring2");
HAnimJoint1525->setDEF("hanim_r_ring2");
HAnimJoint1525->setCenter(new float[3]{-0.1973,0.7287,-0.0777});
<<<<<<< HEAD
HAnimJoint1525->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1525->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint1525->setUlimit(new float[3]{0,0,0});
HAnimJoint1525->setLlimit(new float[3]{0,0,0});
HAnimJoint1525->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment1526 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1526->setName("r_ring_middle");
HAnimSegment1526->setDEF("hanim_r_ring_middle");
//<HAnimJoint name='r_ring2'/> visualization sphere is placed within <HAnimSegment name='r_ring_middle'/>
CTouchSensor* TouchSensor1527 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1527->setDescription("HAnimJoint r_ring2, HAnimSegment r_ring_middle");
HAnimSegment1526->addChildren(*TouchSensor1527);

CTransform* Transform1528 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1528->setTranslation(new float[3]{-0.1973,0.7287,-0.0777});
CShape* Shape1529 = (CShape *)(m_pScene.createNode("Shape"));
Shape1529->setUSE("HAnimJointShape");
Transform1528->addChildren(*Shape1529);

HAnimSegment1526->addChildren(*Transform1528);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring2'/> to <HAnimJoint name='r_ring3'/>
CShape* Shape1530 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1531 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1531->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1532 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1532->setPoint(new float[6]{-0.1973,0.7287,-0.0777,-0.1983,0.7045,-0.0767});
LineSet1531->setCoord(*Coordinate1532);

CColorRGBA* ColorRGBA1533 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1533->setUSE("HAnimSegmentLineColorRGBA");
LineSet1531->setColor(*ColorRGBA1533);

Shape1530->setGeometry(LineSet1531);

HAnimSegment1526->addChildren(*Shape1530);

HAnimJoint1525->addChildren(*HAnimSegment1526);

CHAnimJoint* HAnimJoint1534 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1534->setName("r_ring3");
HAnimJoint1534->setDEF("hanim_r_ring3");
HAnimJoint1534->setCenter(new float[3]{-0.1983,0.7045,-0.0767});
<<<<<<< HEAD
HAnimJoint1534->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1534->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint1534->setUlimit(new float[3]{0,0,0});
HAnimJoint1534->setLlimit(new float[3]{0,0,0});
HAnimJoint1534->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment1535 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1535->setName("r_ring_distal");
HAnimSegment1535->setDEF("hanim_r_ring_distal");
//<HAnimJoint name='r_ring3'/> visualization sphere is placed within <HAnimSegment name='r_ring_distal'/>
CTouchSensor* TouchSensor1536 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1536->setDescription("HAnimJoint r_ring3, HAnimSegment r_ring_distal");
HAnimSegment1535->addChildren(*TouchSensor1536);

CTransform* Transform1537 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1537->setTranslation(new float[3]{-0.1983,0.7045,-0.0767});
CShape* Shape1538 = (CShape *)(m_pScene.createNode("Shape"));
Shape1538->setUSE("HAnimJointShape");
Transform1537->addChildren(*Shape1538);

HAnimSegment1535->addChildren(*Transform1537);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ring3'/> to <HAnimSite name='r_ring_distal_tip'/>
CShape* Shape1539 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1540 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1540->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1541 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1541->setPoint(new float[6]{-0.1983,0.7045,-0.0767,-0.1934,0.6778,-0.0693});
LineSet1540->setCoord(*Coordinate1541);

CColorRGBA* ColorRGBA1542 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1542->setUSE("HAnimSiteLineColorRGBA");
LineSet1540->setColor(*ColorRGBA1542);

Shape1539->setGeometry(LineSet1540);

HAnimSegment1535->addChildren(*Shape1539);

CHAnimSite* HAnimSite1543 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1543->setName("r_ring_distal_tip");
HAnimSite1543->setDEF("hanim_r_ring_distal_tip");
HAnimSite1543->setTranslation(new float[3]{-0.1934,0.6778,-0.0693});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1544 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1544->setDescription("HAnimSite r_ring_distal_tip");
HAnimSite1543->addChildren(*TouchSensor1544);

CShape* Shape1545 = (CShape *)(m_pScene.createNode("Shape"));
Shape1545->setUSE("HAnimSiteShape");
HAnimSite1543->addChildren(*Shape1545);

HAnimSegment1535->addChildren(*HAnimSite1543);

HAnimJoint1534->addChildren(*HAnimSegment1535);

HAnimJoint1525->addChildren(*HAnimJoint1534);

HAnimJoint1516->addChildren(*HAnimJoint1525);

HAnimJoint1507->addChildren(*HAnimJoint1516);

HAnimJoint1334->addChildren(*HAnimJoint1507);

CHAnimJoint* HAnimJoint1546 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1546->setName("r_pinky0");
HAnimJoint1546->setDEF("hanim_r_pinky0");
HAnimJoint1546->setCenter(new float[3]{-0.1925,0.8066,-0.1036});
<<<<<<< HEAD
HAnimJoint1546->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1546->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint1546->setUlimit(new float[3]{0,0,0});
HAnimJoint1546->setLlimit(new float[3]{0,0,0});
HAnimJoint1546->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment1547 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1547->setName("r_pinky_metacarpal");
HAnimSegment1547->setDEF("hanim_r_pinky_metacarpal");
//<HAnimJoint name='r_pinky0'/> visualization sphere is placed within <HAnimSegment name='r_pinky_metacarpal'/>
CTouchSensor* TouchSensor1548 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1548->setDescription("HAnimJoint r_pinky0, HAnimSegment r_pinky_metacarpal");
HAnimSegment1547->addChildren(*TouchSensor1548);

CTransform* Transform1549 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1549->setTranslation(new float[3]{-0.1925,0.8066,-0.1036});
CShape* Shape1550 = (CShape *)(m_pScene.createNode("Shape"));
Shape1550->setUSE("HAnimJointShape");
Transform1549->addChildren(*Shape1550);

HAnimSegment1547->addChildren(*Transform1549);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky0'/> to <HAnimJoint name='r_pinky1'/>
CShape* Shape1551 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1552 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1552->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1553 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1553->setPoint(new float[6]{-0.1925,0.8066,-0.1036,-0.1925,0.7866,-0.1036});
LineSet1552->setCoord(*Coordinate1553);

CColorRGBA* ColorRGBA1554 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1554->setUSE("HAnimSegmentLineColorRGBA");
LineSet1552->setColor(*ColorRGBA1554);

Shape1551->setGeometry(LineSet1552);

HAnimSegment1547->addChildren(*Shape1551);

HAnimJoint1546->addChildren(*HAnimSegment1547);

CHAnimJoint* HAnimJoint1555 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1555->setName("r_pinky1");
HAnimJoint1555->setDEF("hanim_r_pinky1");
HAnimJoint1555->setCenter(new float[3]{-0.1925,0.7866,-0.1036});
<<<<<<< HEAD
HAnimJoint1555->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1555->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint1555->setUlimit(new float[3]{0,0,0});
HAnimJoint1555->setLlimit(new float[3]{0,0,0});
HAnimJoint1555->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment1556 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1556->setName("r_pinky_proximal");
HAnimSegment1556->setDEF("hanim_r_pinky_proximal");
//<HAnimJoint name='r_pinky1'/> visualization sphere is placed within <HAnimSegment name='r_pinky_proximal'/>
CTouchSensor* TouchSensor1557 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1557->setDescription("HAnimJoint r_pinky1, HAnimSegment r_pinky_proximal");
HAnimSegment1556->addChildren(*TouchSensor1557);

CTransform* Transform1558 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1558->setTranslation(new float[3]{-0.1925,0.7866,-0.1036});
CShape* Shape1559 = (CShape *)(m_pScene.createNode("Shape"));
Shape1559->setUSE("HAnimJointShape");
Transform1558->addChildren(*Shape1559);

HAnimSegment1556->addChildren(*Transform1558);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky1'/> to <HAnimJoint name='r_pinky2'/>
CShape* Shape1560 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1561 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1561->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1562 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1562->setPoint(new float[6]{-0.1925,0.7866,-0.1036,-0.1938,0.7452,-0.1024});
LineSet1561->setCoord(*Coordinate1562);

CColorRGBA* ColorRGBA1563 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1563->setUSE("HAnimSegmentLineColorRGBA");
LineSet1561->setColor(*ColorRGBA1563);

Shape1560->setGeometry(LineSet1561);

HAnimSegment1556->addChildren(*Shape1560);

HAnimJoint1555->addChildren(*HAnimSegment1556);

CHAnimJoint* HAnimJoint1564 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1564->setName("r_pinky2");
HAnimJoint1564->setDEF("hanim_r_pinky2");
HAnimJoint1564->setCenter(new float[3]{-0.1938,0.7452,-0.1024});
<<<<<<< HEAD
HAnimJoint1564->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1564->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint1564->setUlimit(new float[3]{0,0,0});
HAnimJoint1564->setLlimit(new float[3]{0,0,0});
HAnimJoint1564->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment1565 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1565->setName("r_pinky_middle");
HAnimSegment1565->setDEF("hanim_r_pinky_middle");
//<HAnimJoint name='r_pinky2'/> visualization sphere is placed within <HAnimSegment name='r_pinky_middle'/>
CTouchSensor* TouchSensor1566 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1566->setDescription("HAnimJoint r_pinky2, HAnimSegment r_pinky_middle");
HAnimSegment1565->addChildren(*TouchSensor1566);

CTransform* Transform1567 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1567->setTranslation(new float[3]{-0.1938,0.7452,-0.1024});
CShape* Shape1568 = (CShape *)(m_pScene.createNode("Shape"));
Shape1568->setUSE("HAnimJointShape");
Transform1567->addChildren(*Shape1568);

HAnimSegment1565->addChildren(*Transform1567);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky2'/> to <HAnimJoint name='r_pinky3'/>
CShape* Shape1569 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1570 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1570->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1571 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1571->setPoint(new float[6]{-0.1938,0.7452,-0.1024,-0.1948,0.7277,-0.1017});
LineSet1570->setCoord(*Coordinate1571);

CColorRGBA* ColorRGBA1572 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1572->setUSE("HAnimSegmentLineColorRGBA");
LineSet1570->setColor(*ColorRGBA1572);

Shape1569->setGeometry(LineSet1570);

HAnimSegment1565->addChildren(*Shape1569);

HAnimJoint1564->addChildren(*HAnimSegment1565);

CHAnimJoint* HAnimJoint1573 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1573->setName("r_pinky3");
HAnimJoint1573->setDEF("hanim_r_pinky3");
HAnimJoint1573->setCenter(new float[3]{-0.1948,0.7277,-0.1017});
<<<<<<< HEAD
HAnimJoint1573->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1573->setLlimit(new float[3]{0,0,0}, 3);
=======
HAnimJoint1573->setUlimit(new float[3]{0,0,0});
HAnimJoint1573->setLlimit(new float[3]{0,0,0});
HAnimJoint1573->setStiffness(new float[3]{0,0,0});
>>>>>>> postes6branch
CHAnimSegment* HAnimSegment1574 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1574->setName("r_pinky_distal");
HAnimSegment1574->setDEF("hanim_r_pinky_distal");
//<HAnimJoint name='r_pinky3'/> visualization sphere is placed within <HAnimSegment name='r_pinky_distal'/>
CTouchSensor* TouchSensor1575 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1575->setDescription("HAnimJoint r_pinky3, HAnimSegment r_pinky_distal");
HAnimSegment1574->addChildren(*TouchSensor1575);

CTransform* Transform1576 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1576->setTranslation(new float[3]{-0.1948,0.7277,-0.1017});
CShape* Shape1577 = (CShape *)(m_pScene.createNode("Shape"));
Shape1577->setUSE("HAnimJointShape");
Transform1576->addChildren(*Shape1577);

HAnimSegment1574->addChildren(*Transform1576);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_pinky3'/> to <HAnimSite name='r_pinky_distal_tip'/>
CShape* Shape1578 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1579 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1579->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1580 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1580->setPoint(new float[6]{-0.1948,0.7277,-0.1017,-0.1938,0.7035,-0.0949});
LineSet1579->setCoord(*Coordinate1580);

CColorRGBA* ColorRGBA1581 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1581->setUSE("HAnimSiteLineColorRGBA");
LineSet1579->setColor(*ColorRGBA1581);

Shape1578->setGeometry(LineSet1579);

HAnimSegment1574->addChildren(*Shape1578);

CHAnimSite* HAnimSite1582 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1582->setName("r_pinky_distal_tip");
HAnimSite1582->setDEF("hanim_r_pinky_distal_tip");
HAnimSite1582->setTranslation(new float[3]{-0.1938,0.7035,-0.0949});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1583 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1583->setDescription("HAnimSite r_pinky_distal_tip");
HAnimSite1582->addChildren(*TouchSensor1583);

CShape* Shape1584 = (CShape *)(m_pScene.createNode("Shape"));
Shape1584->setUSE("HAnimSiteShape");
HAnimSite1582->addChildren(*Shape1584);

HAnimSegment1574->addChildren(*HAnimSite1582);

HAnimJoint1573->addChildren(*HAnimSegment1574);

HAnimJoint1564->addChildren(*HAnimJoint1573);

HAnimJoint1555->addChildren(*HAnimJoint1564);

HAnimJoint1546->addChildren(*HAnimJoint1555);

HAnimJoint1334->addChildren(*HAnimJoint1546);

HAnimJoint1297->addChildren(*HAnimJoint1334);

HAnimJoint1281->addChildren(*HAnimJoint1297);

HAnimJoint1272->addChildren(*HAnimJoint1281);

HAnimJoint1235->addChildren(*HAnimJoint1272);

HAnimJoint597->addChildren(*HAnimJoint1235);

HAnimJoint588->addChildren(*HAnimJoint597);

HAnimJoint579->addChildren(*HAnimJoint588);

HAnimJoint570->addChildren(*HAnimJoint579);

HAnimJoint561->addChildren(*HAnimJoint570);

HAnimJoint552->addChildren(*HAnimJoint561);

HAnimJoint543->addChildren(*HAnimJoint552);

HAnimJoint534->addChildren(*HAnimJoint543);

HAnimJoint511->addChildren(*HAnimJoint534);

HAnimJoint495->addChildren(*HAnimJoint511);

HAnimJoint486->addChildren(*HAnimJoint495);

HAnimJoint477->addChildren(*HAnimJoint486);

HAnimJoint468->addChildren(*HAnimJoint477);

HAnimJoint438->addChildren(*HAnimJoint468);

HAnimJoint429->addChildren(*HAnimJoint438);

HAnimJoint420->addChildren(*HAnimJoint429);

HAnimJoint397->addChildren(*HAnimJoint420);

HAnimJoint47->addChildren(*HAnimJoint397);

HAnimHumanoid46->setSkeleton(*HAnimJoint47);

CHAnimSite* HAnimSite1585 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1585->setName("l_inclined_view");
HAnimSite1585->setDEF("hanim_l_inclined_view");
HAnimSite1585->setRotation(new float[4]{-0.113,0.993,0.0347,0.671});
HAnimSite1585->setTranslation(new float[3]{1.62,1.05,2.06});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1586 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1586->setDescription("HAnimSite l_inclined_view");
HAnimSite1585->addChildren(*TouchSensor1586);

CShape* Shape1587 = (CShape *)(m_pScene.createNode("Shape"));
Shape1587->setUSE("HAnimSiteShape");
HAnimSite1585->addChildren(*Shape1587);

CViewpoint* Viewpoint1588 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1588->setDEF("hanim_l_inclined_viewpoint");
Viewpoint1588->setDescription("left inclined");
Viewpoint1588->setPosition(new float[3]{0,0,0});
HAnimSite1585->addChildren(*Viewpoint1588);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1589 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1589->setDescription("HAnimSite hanim_l_inclined_view Viewpoint");
Anchor1589->setUrl(new CString[1]{"#hanim_l_inclined_viewpoint"}, 1);
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

HAnimSite1585->addChildren(*Anchor1589);

HAnimHumanoid46->addViewpoints(*HAnimSite1585);

CHAnimSite* HAnimSite1593 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1593->setName("r_inclined_view");
HAnimSite1593->setDEF("hanim_r_inclined_view");
HAnimSite1593->setRotation(new float[4]{-0.113,-0.993,0.0347,0.671});
HAnimSite1593->setTranslation(new float[3]{-1.62,1.05,2.06});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1594 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1594->setDescription("HAnimSite r_inclined_view");
HAnimSite1593->addChildren(*TouchSensor1594);

CShape* Shape1595 = (CShape *)(m_pScene.createNode("Shape"));
Shape1595->setUSE("HAnimSiteShape");
HAnimSite1593->addChildren(*Shape1595);

CViewpoint* Viewpoint1596 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1596->setDEF("hanim_r_inclined_viewpoint");
Viewpoint1596->setCenterOfRotation(new float[3]{0,0.9,0});
Viewpoint1596->setDescription("right inclined");
Viewpoint1596->setPosition(new float[3]{0,0,0});
HAnimSite1593->addChildren(*Viewpoint1596);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1597 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1597->setDescription("HAnimSite hanim_r_inclined_view Viewpoint");
Anchor1597->setUrl(new CString[1]{"#hanim_r_inclined_viewpoint"}, 1);
CLOD* LOD1598 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1598->setForceTransitions(True);
LOD1598->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo1599 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1599->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1598->addChildren(*WorldInfo1599);

CShape* Shape1600 = (CShape *)(m_pScene.createNode("Shape"));
Shape1600->setUSE("HAnimSiteViewpointShape");
LOD1598->addChildren(*Shape1600);

Anchor1597->addChildren(*LOD1598);

HAnimSite1593->addChildren(*Anchor1597);

HAnimHumanoid46->addViewpoints(*HAnimSite1593);

CHAnimSite* HAnimSite1601 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1601->setName("front_view");
HAnimSite1601->setDEF("hanim_front_view");
HAnimSite1601->setTranslation(new float[3]{0,0.85,2.58});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1602 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1602->setDescription("HAnimSite front_view");
HAnimSite1601->addChildren(*TouchSensor1602);

CShape* Shape1603 = (CShape *)(m_pScene.createNode("Shape"));
Shape1603->setUSE("HAnimSiteShape");
HAnimSite1601->addChildren(*Shape1603);

CViewpoint* Viewpoint1604 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1604->setDEF("hanim_front_viewpoint");
Viewpoint1604->setCenterOfRotation(new float[3]{0,0.9,0});
Viewpoint1604->setDescription("front");
Viewpoint1604->setPosition(new float[3]{0,0,0});
HAnimSite1601->addChildren(*Viewpoint1604);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1605 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1605->setDescription("HAnimSite hanim_front_view Viewpoint");
Anchor1605->setUrl(new CString[1]{"#hanim_front_viewpoint"}, 1);
CLOD* LOD1606 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1606->setForceTransitions(True);
LOD1606->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo1607 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1607->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1606->addChildren(*WorldInfo1607);

CShape* Shape1608 = (CShape *)(m_pScene.createNode("Shape"));
Shape1608->setUSE("HAnimSiteViewpointShape");
LOD1606->addChildren(*Shape1608);

Anchor1605->addChildren(*LOD1606);

HAnimSite1601->addChildren(*Anchor1605);

HAnimHumanoid46->addViewpoints(*HAnimSite1601);

CHAnimSite* HAnimSite1609 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1609->setName("back_view");
HAnimSite1609->setDEF("hanim_back_view");
HAnimSite1609->setRotation(new float[4]{0,1,0,3.14});
HAnimSite1609->setTranslation(new float[3]{0,0.85,-2.58});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1610 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1610->setDescription("HAnimSite back_view");
HAnimSite1609->addChildren(*TouchSensor1610);

CShape* Shape1611 = (CShape *)(m_pScene.createNode("Shape"));
Shape1611->setUSE("HAnimSiteShape");
HAnimSite1609->addChildren(*Shape1611);

CViewpoint* Viewpoint1612 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1612->setDEF("hanim_back_viewpoint");
Viewpoint1612->setCenterOfRotation(new float[3]{0,0.9,0});
Viewpoint1612->setDescription("back");
Viewpoint1612->setPosition(new float[3]{0,0,0});
HAnimSite1609->addChildren(*Viewpoint1612);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1613 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1613->setDescription("HAnimSite hanim_back_view Viewpoint");
Anchor1613->setUrl(new CString[1]{"#hanim_back_viewpoint"}, 1);
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

HAnimSite1609->addChildren(*Anchor1613);

HAnimHumanoid46->addViewpoints(*HAnimSite1609);

CHAnimSite* HAnimSite1617 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1617->setName("l_side_view");
HAnimSite1617->setDEF("hanim_l_side_view");
HAnimSite1617->setRotation(new float[4]{0,1,0,1.5708});
HAnimSite1617->setTranslation(new float[3]{2.6,0.854,0});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1618 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1618->setDescription("HAnimSite l_side_view");
HAnimSite1617->addChildren(*TouchSensor1618);

CShape* Shape1619 = (CShape *)(m_pScene.createNode("Shape"));
Shape1619->setUSE("HAnimSiteShape");
HAnimSite1617->addChildren(*Shape1619);

CViewpoint* Viewpoint1620 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1620->setDEF("hanim_l_side_viewpoint");
Viewpoint1620->setCenterOfRotation(new float[3]{0,0.9,0});
Viewpoint1620->setDescription("left side");
Viewpoint1620->setPosition(new float[3]{0,0,0});
HAnimSite1617->addChildren(*Viewpoint1620);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1621 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1621->setDescription("HAnimSite hanim_l_side_view Viewpoint");
Anchor1621->setUrl(new CString[1]{"#hanim_l_side_viewpoint"}, 1);
CLOD* LOD1622 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1622->setForceTransitions(True);
LOD1622->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo1623 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1623->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1622->addChildren(*WorldInfo1623);

CShape* Shape1624 = (CShape *)(m_pScene.createNode("Shape"));
Shape1624->setUSE("HAnimSiteViewpointShape");
LOD1622->addChildren(*Shape1624);

Anchor1621->addChildren(*LOD1622);

HAnimSite1617->addChildren(*Anchor1621);

HAnimHumanoid46->addViewpoints(*HAnimSite1617);

CHAnimSite* HAnimSite1625 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1625->setName("Top_view");
HAnimSite1625->setDEF("hanim_Top_view");
HAnimSite1625->setRotation(new float[4]{1,0,0,-1.57});
HAnimSite1625->setTranslation(new float[3]{0,3.5,0});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1626 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1626->setDescription("HAnimSite Top_view");
HAnimSite1625->addChildren(*TouchSensor1626);

CShape* Shape1627 = (CShape *)(m_pScene.createNode("Shape"));
Shape1627->setUSE("HAnimSiteShape");
HAnimSite1625->addChildren(*Shape1627);

CViewpoint* Viewpoint1628 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1628->setDEF("hanim_Top_viewpoint");
Viewpoint1628->setCenterOfRotation(new float[3]{0,0.9,0});
Viewpoint1628->setDescription("Top");
Viewpoint1628->setPosition(new float[3]{0,0,0});
HAnimSite1625->addChildren(*Viewpoint1628);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1629 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1629->setDescription("HAnimSite hanim_Top_view Viewpoint");
Anchor1629->setUrl(new CString[1]{"#hanim_Top_viewpoint"}, 1);
CLOD* LOD1630 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1630->setForceTransitions(True);
LOD1630->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo1631 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1631->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1630->addChildren(*WorldInfo1631);

CShape* Shape1632 = (CShape *)(m_pScene.createNode("Shape"));
Shape1632->setUSE("HAnimSiteViewpointShape");
LOD1630->addChildren(*Shape1632);

Anchor1629->addChildren(*LOD1630);

HAnimSite1625->addChildren(*Anchor1629);

HAnimHumanoid46->addViewpoints(*HAnimSite1625);

CHAnimSite* HAnimSite1633 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1633->setName("front_close_view");
HAnimSite1633->setDEF("hanim_front_close_view");
HAnimSite1633->setTranslation(new float[3]{0,0.854,1.575});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1634 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1634->setDescription("HAnimSite front_close_view");
HAnimSite1633->addChildren(*TouchSensor1634);

CShape* Shape1635 = (CShape *)(m_pScene.createNode("Shape"));
Shape1635->setUSE("HAnimSiteShape");
HAnimSite1633->addChildren(*Shape1635);

CViewpoint* Viewpoint1636 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1636->setDEF("hanim_front_close_viewpoint");
Viewpoint1636->setCenterOfRotation(new float[3]{0,0,1.575});
Viewpoint1636->setDescription("front close");
Viewpoint1636->setPosition(new float[3]{0,0,0});
HAnimSite1633->addChildren(*Viewpoint1636);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1637 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1637->setDescription("HAnimSite hanim_front_close_view Viewpoint");
Anchor1637->setUrl(new CString[1]{"#hanim_front_close_viewpoint"}, 1);
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

HAnimSite1633->addChildren(*Anchor1637);

HAnimHumanoid46->addViewpoints(*HAnimSite1633);

CHAnimSite* HAnimSite1641 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1641->setName("side_close_view");
HAnimSite1641->setDEF("hanim_side_close_view");
HAnimSite1641->setRotation(new float[4]{0,1,0,1.5708});
HAnimSite1641->setTranslation(new float[3]{1.56,0.854,0});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1642 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1642->setDescription("HAnimSite side_close_view");
HAnimSite1641->addChildren(*TouchSensor1642);

CShape* Shape1643 = (CShape *)(m_pScene.createNode("Shape"));
Shape1643->setUSE("HAnimSiteShape");
HAnimSite1641->addChildren(*Shape1643);

CViewpoint* Viewpoint1644 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1644->setDEF("hanim_side_close_viewpoint");
Viewpoint1644->setCenterOfRotation(new float[3]{1.6,0,0});
Viewpoint1644->setDescription("side close");
Viewpoint1644->setPosition(new float[3]{0,0,0});
HAnimSite1641->addChildren(*Viewpoint1644);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1645 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1645->setDescription("HAnimSite hanim_side_close_view Viewpoint");
Anchor1645->setUrl(new CString[1]{"#hanim_side_close_viewpoint"}, 1);
CLOD* LOD1646 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1646->setForceTransitions(True);
LOD1646->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo1647 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1647->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1646->addChildren(*WorldInfo1647);

CShape* Shape1648 = (CShape *)(m_pScene.createNode("Shape"));
Shape1648->setUSE("HAnimSiteViewpointShape");
LOD1646->addChildren(*Shape1648);

Anchor1645->addChildren(*LOD1646);

HAnimSite1641->addChildren(*Anchor1645);

HAnimHumanoid46->addViewpoints(*HAnimSite1641);

CHAnimSite* HAnimSite1649 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1649->setName("head_front_close_view");
HAnimSite1649->setDEF("hanim_head_front_close_view");
HAnimSite1649->setTranslation(new float[3]{0,1.5,1});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1650 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1650->setDescription("HAnimSite head_front_close_view");
HAnimSite1649->addChildren(*TouchSensor1650);

CShape* Shape1651 = (CShape *)(m_pScene.createNode("Shape"));
Shape1651->setUSE("HAnimSiteShape");
HAnimSite1649->addChildren(*Shape1651);

CViewpoint* Viewpoint1652 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1652->setDEF("hanim_head_front_close_viewpoint");
Viewpoint1652->setCenterOfRotation(new float[3]{0,0,1});
Viewpoint1652->setDescription("head front close");
Viewpoint1652->setPosition(new float[3]{0,0,0});
HAnimSite1649->addChildren(*Viewpoint1652);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1653 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1653->setDescription("HAnimSite hanim_head_front_close_view Viewpoint");
Anchor1653->setUrl(new CString[1]{"#hanim_head_front_close_viewpoint"}, 1);
CLOD* LOD1654 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1654->setForceTransitions(True);
LOD1654->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo1655 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1655->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1654->addChildren(*WorldInfo1655);

CShape* Shape1656 = (CShape *)(m_pScene.createNode("Shape"));
Shape1656->setUSE("HAnimSiteViewpointShape");
LOD1654->addChildren(*Shape1656);

Anchor1653->addChildren(*LOD1654);

HAnimSite1649->addChildren(*Anchor1653);

HAnimHumanoid46->addViewpoints(*HAnimSite1649);

CHAnimSite* HAnimSite1657 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1657->setName("chest_front_close_view");
HAnimSite1657->setDEF("hanim_chest_front_close_view");
HAnimSite1657->setTranslation(new float[3]{0,1.2,1});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1658 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1658->setDescription("HAnimSite chest_front_close_view");
HAnimSite1657->addChildren(*TouchSensor1658);

CShape* Shape1659 = (CShape *)(m_pScene.createNode("Shape"));
Shape1659->setUSE("HAnimSiteShape");
HAnimSite1657->addChildren(*Shape1659);

CViewpoint* Viewpoint1660 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1660->setDEF("hanim_chest_front_close_viewpoint");
Viewpoint1660->setCenterOfRotation(new float[3]{0,0,1});
Viewpoint1660->setDescription("chest front close");
Viewpoint1660->setPosition(new float[3]{0,0,0});
HAnimSite1657->addChildren(*Viewpoint1660);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1661 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1661->setDescription("HAnimSite hanim_chest_front_close_view Viewpoint");
Anchor1661->setUrl(new CString[1]{"#hanim_chest_front_close_viewpoint"}, 1);
CLOD* LOD1662 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1662->setForceTransitions(True);
LOD1662->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo1663 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1663->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1662->addChildren(*WorldInfo1663);

CShape* Shape1664 = (CShape *)(m_pScene.createNode("Shape"));
Shape1664->setUSE("HAnimSiteViewpointShape");
LOD1662->addChildren(*Shape1664);

Anchor1661->addChildren(*LOD1662);

HAnimSite1657->addChildren(*Anchor1661);

HAnimHumanoid46->addViewpoints(*HAnimSite1657);

CHAnimSite* HAnimSite1665 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1665->setName("pelvis_front_close_view");
HAnimSite1665->setDEF("hanim_pelvis_front_close_view");
HAnimSite1665->setTranslation(new float[3]{0,0.8,1});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1666 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1666->setDescription("HAnimSite pelvis_front_close_view");
HAnimSite1665->addChildren(*TouchSensor1666);

CShape* Shape1667 = (CShape *)(m_pScene.createNode("Shape"));
Shape1667->setUSE("HAnimSiteShape");
HAnimSite1665->addChildren(*Shape1667);

CViewpoint* Viewpoint1668 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1668->setDEF("hanim_pelvis_front_close_viewpoint");
Viewpoint1668->setCenterOfRotation(new float[3]{0,0,1});
Viewpoint1668->setDescription("pelvis front close");
Viewpoint1668->setPosition(new float[3]{0,0,0});
HAnimSite1665->addChildren(*Viewpoint1668);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1669 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1669->setDescription("HAnimSite hanim_pelvis_front_close_view Viewpoint");
Anchor1669->setUrl(new CString[1]{"#hanim_pelvis_front_close_viewpoint"}, 1);
CLOD* LOD1670 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1670->setForceTransitions(True);
LOD1670->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo1671 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1671->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1670->addChildren(*WorldInfo1671);

CShape* Shape1672 = (CShape *)(m_pScene.createNode("Shape"));
Shape1672->setUSE("HAnimSiteViewpointShape");
LOD1670->addChildren(*Shape1672);

Anchor1669->addChildren(*LOD1670);

HAnimSite1665->addChildren(*Anchor1669);

HAnimHumanoid46->addViewpoints(*HAnimSite1665);

CHAnimSite* HAnimSite1673 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1673->setName("knees_front_close_view");
HAnimSite1673->setDEF("hanim_knees_front_close_view");
HAnimSite1673->setTranslation(new float[3]{0,0.4,1});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1674 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1674->setDescription("HAnimSite knees_front_close_view");
HAnimSite1673->addChildren(*TouchSensor1674);

CShape* Shape1675 = (CShape *)(m_pScene.createNode("Shape"));
Shape1675->setUSE("HAnimSiteShape");
HAnimSite1673->addChildren(*Shape1675);

CViewpoint* Viewpoint1676 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1676->setDEF("hanim_knees_front_close_viewpoint");
Viewpoint1676->setCenterOfRotation(new float[3]{0,0.4,0});
Viewpoint1676->setDescription("knees front close");
Viewpoint1676->setPosition(new float[3]{0,0,0});
HAnimSite1673->addChildren(*Viewpoint1676);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1677 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1677->setDescription("HAnimSite hanim_knees_front_close_view Viewpoint");
Anchor1677->setUrl(new CString[1]{"#hanim_knees_front_close_viewpoint"}, 1);
CLOD* LOD1678 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1678->setForceTransitions(True);
LOD1678->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo1679 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1679->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1678->addChildren(*WorldInfo1679);

CShape* Shape1680 = (CShape *)(m_pScene.createNode("Shape"));
Shape1680->setUSE("HAnimSiteViewpointShape");
LOD1678->addChildren(*Shape1680);

Anchor1677->addChildren(*LOD1678);

HAnimSite1673->addChildren(*Anchor1677);

HAnimHumanoid46->addViewpoints(*HAnimSite1673);

CHAnimSite* HAnimSite1681 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1681->setName("feet_front_close_view");
HAnimSite1681->setDEF("hanim_feet_front_close_view");
HAnimSite1681->setTranslation(new float[3]{0,0,1});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1682 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1682->setDescription("HAnimSite feet_front_close_view");
HAnimSite1681->addChildren(*TouchSensor1682);

CShape* Shape1683 = (CShape *)(m_pScene.createNode("Shape"));
Shape1683->setUSE("HAnimSiteShape");
HAnimSite1681->addChildren(*Shape1683);

CViewpoint* Viewpoint1684 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1684->setDEF("hanim_feet_front_close_viewpoint");
Viewpoint1684->setDescription("feet front close");
Viewpoint1684->setPosition(new float[3]{0,0,0});
HAnimSite1681->addChildren(*Viewpoint1684);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1685 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1685->setDescription("HAnimSite hanim_feet_front_close_view Viewpoint");
Anchor1685->setUrl(new CString[1]{"#hanim_feet_front_close_viewpoint"}, 1);
CLOD* LOD1686 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1686->setForceTransitions(True);
LOD1686->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo1687 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1687->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1686->addChildren(*WorldInfo1687);

CShape* Shape1688 = (CShape *)(m_pScene.createNode("Shape"));
Shape1688->setUSE("HAnimSiteViewpointShape");
LOD1686->addChildren(*Shape1688);

Anchor1685->addChildren(*LOD1686);

HAnimSite1681->addChildren(*Anchor1685);

HAnimHumanoid46->addViewpoints(*HAnimSite1681);

CHAnimSite* HAnimSite1689 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1689->setName("eye_level_view");
HAnimSite1689->setDEF("hanim_eye_level_view");
HAnimSite1689->setTranslation(new float[3]{0,1.6332,0.0502});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1690 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1690->setDescription("HAnimSite eye_level_view");
HAnimSite1689->addChildren(*TouchSensor1690);

CShape* Shape1691 = (CShape *)(m_pScene.createNode("Shape"));
Shape1691->setUSE("HAnimSiteShape");
HAnimSite1689->addChildren(*Shape1691);

CViewpoint* Viewpoint1692 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1692->setDEF("hanim_eye_level_viewpoint");
Viewpoint1692->setDescription("eye level looking forward");
Viewpoint1692->setOrientation(new float[4]{0,1,0,3.141593});
Viewpoint1692->setPosition(new float[3]{0,0,0});
HAnimSite1689->addChildren(*Viewpoint1692);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1693 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1693->setDescription("HAnimSite hanim_eye_level_view Viewpoint");
Anchor1693->setUrl(new CString[1]{"#hanim_eye_level_viewpoint"}, 1);
CLOD* LOD1694 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1694->setForceTransitions(True);
LOD1694->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo1695 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1695->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1694->addChildren(*WorldInfo1695);

CShape* Shape1696 = (CShape *)(m_pScene.createNode("Shape"));
Shape1696->setUSE("HAnimSiteViewpointShape");
LOD1694->addChildren(*Shape1696);

Anchor1693->addChildren(*LOD1694);

HAnimSite1689->addChildren(*Anchor1693);

HAnimHumanoid46->addViewpoints(*HAnimSite1689);

CHAnimSite* HAnimSite1697 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1697->setUSE("hanim_l_eyeball_site_view");
HAnimHumanoid46->setSites(*HAnimSite1697);

CHAnimSite* HAnimSite1698 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1698->setUSE("hanim_r_eyeball_site_view");
HAnimHumanoid46->setSites(*HAnimSite1698);

CHAnimSite* HAnimSite1699 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1699->setUSE("hanim_l_hand_front_view");
HAnimHumanoid46->setSites(*HAnimSite1699);

CHAnimSite* HAnimSite1700 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1700->setUSE("hanim_r_hand_front_view");
HAnimHumanoid46->setSites(*HAnimSite1700);

CHAnimJoint* HAnimJoint1701 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1701->setUSE("hanim_humanoid_root");
HAnimHumanoid46->addJoints(*HAnimJoint1701);

CHAnimJoint* HAnimJoint1702 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1702->setUSE("hanim_sacroiliac");
HAnimHumanoid46->addJoints(*HAnimJoint1702);

CHAnimJoint* HAnimJoint1703 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1703->setUSE("hanim_vl5");
HAnimHumanoid46->addJoints(*HAnimJoint1703);

CHAnimJoint* HAnimJoint1704 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1704->setUSE("hanim_vl4");
HAnimHumanoid46->addJoints(*HAnimJoint1704);

CHAnimJoint* HAnimJoint1705 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1705->setUSE("hanim_vl3");
HAnimHumanoid46->addJoints(*HAnimJoint1705);

CHAnimJoint* HAnimJoint1706 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1706->setUSE("hanim_vl2");
HAnimHumanoid46->addJoints(*HAnimJoint1706);

CHAnimJoint* HAnimJoint1707 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1707->setUSE("hanim_vl1");
HAnimHumanoid46->addJoints(*HAnimJoint1707);

CHAnimJoint* HAnimJoint1708 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1708->setUSE("hanim_vt12");
HAnimHumanoid46->addJoints(*HAnimJoint1708);

CHAnimJoint* HAnimJoint1709 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1709->setUSE("hanim_vt11");
HAnimHumanoid46->addJoints(*HAnimJoint1709);

CHAnimJoint* HAnimJoint1710 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1710->setUSE("hanim_vt10");
HAnimHumanoid46->addJoints(*HAnimJoint1710);

CHAnimJoint* HAnimJoint1711 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1711->setUSE("hanim_vt9");
HAnimHumanoid46->addJoints(*HAnimJoint1711);

CHAnimJoint* HAnimJoint1712 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1712->setUSE("hanim_vt8");
HAnimHumanoid46->addJoints(*HAnimJoint1712);

CHAnimJoint* HAnimJoint1713 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1713->setUSE("hanim_vt7");
HAnimHumanoid46->addJoints(*HAnimJoint1713);

CHAnimJoint* HAnimJoint1714 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1714->setUSE("hanim_vt6");
HAnimHumanoid46->addJoints(*HAnimJoint1714);

CHAnimJoint* HAnimJoint1715 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1715->setUSE("hanim_vt5");
HAnimHumanoid46->addJoints(*HAnimJoint1715);

CHAnimJoint* HAnimJoint1716 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1716->setUSE("hanim_vt4");
HAnimHumanoid46->addJoints(*HAnimJoint1716);

CHAnimJoint* HAnimJoint1717 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1717->setUSE("hanim_vt3");
HAnimHumanoid46->addJoints(*HAnimJoint1717);

CHAnimJoint* HAnimJoint1718 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1718->setUSE("hanim_vt2");
HAnimHumanoid46->addJoints(*HAnimJoint1718);

CHAnimJoint* HAnimJoint1719 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1719->setUSE("hanim_vt1");
HAnimHumanoid46->addJoints(*HAnimJoint1719);

CHAnimJoint* HAnimJoint1720 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1720->setUSE("hanim_vc7");
HAnimHumanoid46->addJoints(*HAnimJoint1720);

CHAnimJoint* HAnimJoint1721 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1721->setUSE("hanim_vc6");
HAnimHumanoid46->addJoints(*HAnimJoint1721);

CHAnimJoint* HAnimJoint1722 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1722->setUSE("hanim_vc5");
HAnimHumanoid46->addJoints(*HAnimJoint1722);

CHAnimJoint* HAnimJoint1723 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1723->setUSE("hanim_vc4");
HAnimHumanoid46->addJoints(*HAnimJoint1723);

CHAnimJoint* HAnimJoint1724 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1724->setUSE("hanim_vc3");
HAnimHumanoid46->addJoints(*HAnimJoint1724);

CHAnimJoint* HAnimJoint1725 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1725->setUSE("hanim_vc2");
HAnimHumanoid46->addJoints(*HAnimJoint1725);

CHAnimJoint* HAnimJoint1726 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1726->setUSE("hanim_vc1");
HAnimHumanoid46->addJoints(*HAnimJoint1726);

CHAnimJoint* HAnimJoint1727 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1727->setUSE("hanim_skullbase");
HAnimHumanoid46->addJoints(*HAnimJoint1727);

CHAnimJoint* HAnimJoint1728 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1728->setUSE("hanim_temporomandibular");
HAnimHumanoid46->addJoints(*HAnimJoint1728);

CHAnimJoint* HAnimJoint1729 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1729->setUSE("hanim_l_acromioclavicular");
HAnimHumanoid46->addJoints(*HAnimJoint1729);

CHAnimJoint* HAnimJoint1730 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1730->setUSE("hanim_r_acromioclavicular");
HAnimHumanoid46->addJoints(*HAnimJoint1730);

CHAnimJoint* HAnimJoint1731 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1731->setUSE("hanim_l_ankle");
HAnimHumanoid46->addJoints(*HAnimJoint1731);

CHAnimJoint* HAnimJoint1732 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1732->setUSE("hanim_r_ankle");
HAnimHumanoid46->addJoints(*HAnimJoint1732);

CHAnimJoint* HAnimJoint1733 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1733->setUSE("hanim_l_elbow");
HAnimHumanoid46->addJoints(*HAnimJoint1733);

CHAnimJoint* HAnimJoint1734 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1734->setUSE("hanim_r_elbow");
HAnimHumanoid46->addJoints(*HAnimJoint1734);

CHAnimJoint* HAnimJoint1735 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1735->setUSE("hanim_l_eyeball_joint");
HAnimHumanoid46->addJoints(*HAnimJoint1735);

CHAnimJoint* HAnimJoint1736 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1736->setUSE("hanim_r_eyeball_joint");
HAnimHumanoid46->addJoints(*HAnimJoint1736);

CHAnimJoint* HAnimJoint1737 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1737->setUSE("hanim_l_eyebrow_joint");
HAnimHumanoid46->addJoints(*HAnimJoint1737);

CHAnimJoint* HAnimJoint1738 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1738->setUSE("hanim_r_eyebrow_joint");
HAnimHumanoid46->addJoints(*HAnimJoint1738);

CHAnimJoint* HAnimJoint1739 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1739->setUSE("hanim_l_eyelid_joint");
HAnimHumanoid46->addJoints(*HAnimJoint1739);

CHAnimJoint* HAnimJoint1740 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1740->setUSE("hanim_r_eyelid_joint");
HAnimHumanoid46->addJoints(*HAnimJoint1740);

CHAnimJoint* HAnimJoint1741 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1741->setUSE("hanim_l_hip");
HAnimHumanoid46->addJoints(*HAnimJoint1741);

CHAnimJoint* HAnimJoint1742 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1742->setUSE("hanim_r_hip");
HAnimHumanoid46->addJoints(*HAnimJoint1742);

CHAnimJoint* HAnimJoint1743 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1743->setUSE("hanim_l_index0");
HAnimHumanoid46->addJoints(*HAnimJoint1743);

CHAnimJoint* HAnimJoint1744 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1744->setUSE("hanim_r_index0");
HAnimHumanoid46->addJoints(*HAnimJoint1744);

CHAnimJoint* HAnimJoint1745 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1745->setUSE("hanim_l_index1");
HAnimHumanoid46->addJoints(*HAnimJoint1745);

CHAnimJoint* HAnimJoint1746 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1746->setUSE("hanim_r_index1");
HAnimHumanoid46->addJoints(*HAnimJoint1746);

CHAnimJoint* HAnimJoint1747 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1747->setUSE("hanim_l_index2");
HAnimHumanoid46->addJoints(*HAnimJoint1747);

CHAnimJoint* HAnimJoint1748 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1748->setUSE("hanim_r_index2");
HAnimHumanoid46->addJoints(*HAnimJoint1748);

CHAnimJoint* HAnimJoint1749 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1749->setUSE("hanim_l_index3");
HAnimHumanoid46->addJoints(*HAnimJoint1749);

CHAnimJoint* HAnimJoint1750 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1750->setUSE("hanim_r_index3");
HAnimHumanoid46->addJoints(*HAnimJoint1750);

CHAnimJoint* HAnimJoint1751 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1751->setUSE("hanim_l_knee");
HAnimHumanoid46->addJoints(*HAnimJoint1751);

CHAnimJoint* HAnimJoint1752 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1752->setUSE("hanim_r_knee");
HAnimHumanoid46->addJoints(*HAnimJoint1752);

CHAnimJoint* HAnimJoint1753 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1753->setUSE("hanim_l_metatarsal");
HAnimHumanoid46->addJoints(*HAnimJoint1753);

CHAnimJoint* HAnimJoint1754 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1754->setUSE("hanim_r_metatarsal");
HAnimHumanoid46->addJoints(*HAnimJoint1754);

CHAnimJoint* HAnimJoint1755 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1755->setUSE("hanim_l_middle0");
HAnimHumanoid46->addJoints(*HAnimJoint1755);

CHAnimJoint* HAnimJoint1756 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1756->setUSE("hanim_r_middle0");
HAnimHumanoid46->addJoints(*HAnimJoint1756);

CHAnimJoint* HAnimJoint1757 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1757->setUSE("hanim_l_middle1");
HAnimHumanoid46->addJoints(*HAnimJoint1757);

CHAnimJoint* HAnimJoint1758 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1758->setUSE("hanim_r_middle1");
HAnimHumanoid46->addJoints(*HAnimJoint1758);

CHAnimJoint* HAnimJoint1759 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1759->setUSE("hanim_l_middle2");
HAnimHumanoid46->addJoints(*HAnimJoint1759);

CHAnimJoint* HAnimJoint1760 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1760->setUSE("hanim_r_middle2");
HAnimHumanoid46->addJoints(*HAnimJoint1760);

CHAnimJoint* HAnimJoint1761 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1761->setUSE("hanim_l_middle3");
HAnimHumanoid46->addJoints(*HAnimJoint1761);

CHAnimJoint* HAnimJoint1762 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1762->setUSE("hanim_r_middle3");
HAnimHumanoid46->addJoints(*HAnimJoint1762);

CHAnimJoint* HAnimJoint1763 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1763->setUSE("hanim_l_midtarsal");
HAnimHumanoid46->addJoints(*HAnimJoint1763);

CHAnimJoint* HAnimJoint1764 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1764->setUSE("hanim_r_midtarsal");
HAnimHumanoid46->addJoints(*HAnimJoint1764);

CHAnimJoint* HAnimJoint1765 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1765->setUSE("hanim_l_pinky0");
HAnimHumanoid46->addJoints(*HAnimJoint1765);

CHAnimJoint* HAnimJoint1766 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1766->setUSE("hanim_r_pinky0");
HAnimHumanoid46->addJoints(*HAnimJoint1766);

CHAnimJoint* HAnimJoint1767 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1767->setUSE("hanim_l_pinky1");
HAnimHumanoid46->addJoints(*HAnimJoint1767);

CHAnimJoint* HAnimJoint1768 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1768->setUSE("hanim_r_pinky1");
HAnimHumanoid46->addJoints(*HAnimJoint1768);

CHAnimJoint* HAnimJoint1769 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1769->setUSE("hanim_l_pinky2");
HAnimHumanoid46->addJoints(*HAnimJoint1769);

CHAnimJoint* HAnimJoint1770 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1770->setUSE("hanim_r_pinky2");
HAnimHumanoid46->addJoints(*HAnimJoint1770);

CHAnimJoint* HAnimJoint1771 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1771->setUSE("hanim_l_pinky3");
HAnimHumanoid46->addJoints(*HAnimJoint1771);

CHAnimJoint* HAnimJoint1772 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1772->setUSE("hanim_r_pinky3");
HAnimHumanoid46->addJoints(*HAnimJoint1772);

CHAnimJoint* HAnimJoint1773 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1773->setUSE("hanim_l_ring0");
HAnimHumanoid46->addJoints(*HAnimJoint1773);

CHAnimJoint* HAnimJoint1774 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1774->setUSE("hanim_r_ring0");
HAnimHumanoid46->addJoints(*HAnimJoint1774);

CHAnimJoint* HAnimJoint1775 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1775->setUSE("hanim_l_ring1");
HAnimHumanoid46->addJoints(*HAnimJoint1775);

CHAnimJoint* HAnimJoint1776 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1776->setUSE("hanim_r_ring1");
HAnimHumanoid46->addJoints(*HAnimJoint1776);

CHAnimJoint* HAnimJoint1777 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1777->setUSE("hanim_l_ring2");
HAnimHumanoid46->addJoints(*HAnimJoint1777);

CHAnimJoint* HAnimJoint1778 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1778->setUSE("hanim_r_ring2");
HAnimHumanoid46->addJoints(*HAnimJoint1778);

CHAnimJoint* HAnimJoint1779 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1779->setUSE("hanim_l_ring3");
HAnimHumanoid46->addJoints(*HAnimJoint1779);

CHAnimJoint* HAnimJoint1780 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1780->setUSE("hanim_r_ring3");
HAnimHumanoid46->addJoints(*HAnimJoint1780);

CHAnimJoint* HAnimJoint1781 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1781->setUSE("hanim_l_shoulder");
HAnimHumanoid46->addJoints(*HAnimJoint1781);

CHAnimJoint* HAnimJoint1782 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1782->setUSE("hanim_r_shoulder");
HAnimHumanoid46->addJoints(*HAnimJoint1782);

CHAnimJoint* HAnimJoint1783 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1783->setUSE("hanim_l_sternoclavicular");
HAnimHumanoid46->addJoints(*HAnimJoint1783);

CHAnimJoint* HAnimJoint1784 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1784->setUSE("hanim_r_sternoclavicular");
HAnimHumanoid46->addJoints(*HAnimJoint1784);

CHAnimJoint* HAnimJoint1785 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1785->setUSE("hanim_l_subtalar");
HAnimHumanoid46->addJoints(*HAnimJoint1785);

CHAnimJoint* HAnimJoint1786 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1786->setUSE("hanim_r_subtalar");
HAnimHumanoid46->addJoints(*HAnimJoint1786);

CHAnimJoint* HAnimJoint1787 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1787->setUSE("hanim_l_thumb1");
HAnimHumanoid46->addJoints(*HAnimJoint1787);

CHAnimJoint* HAnimJoint1788 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1788->setUSE("hanim_r_thumb1");
HAnimHumanoid46->addJoints(*HAnimJoint1788);

CHAnimJoint* HAnimJoint1789 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1789->setUSE("hanim_l_thumb2");
HAnimHumanoid46->addJoints(*HAnimJoint1789);

CHAnimJoint* HAnimJoint1790 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1790->setUSE("hanim_r_thumb2");
HAnimHumanoid46->addJoints(*HAnimJoint1790);

CHAnimJoint* HAnimJoint1791 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1791->setUSE("hanim_l_thumb3");
HAnimHumanoid46->addJoints(*HAnimJoint1791);

CHAnimJoint* HAnimJoint1792 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1792->setUSE("hanim_r_thumb3");
HAnimHumanoid46->addJoints(*HAnimJoint1792);

CHAnimJoint* HAnimJoint1793 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1793->setUSE("hanim_l_wrist");
HAnimHumanoid46->addJoints(*HAnimJoint1793);

CHAnimJoint* HAnimJoint1794 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1794->setUSE("hanim_r_wrist");
HAnimHumanoid46->addJoints(*HAnimJoint1794);

CHAnimSegment* HAnimSegment1795 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1795->setUSE("hanim_pelvis");
HAnimHumanoid46->setSegments(*HAnimSegment1795);

CHAnimSegment* HAnimSegment1796 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1796->setUSE("hanim_skull");
HAnimHumanoid46->setSegments(*HAnimSegment1796);

CHAnimSegment* HAnimSegment1797 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1797->setUSE("hanim_jaw");
HAnimHumanoid46->setSegments(*HAnimSegment1797);

CHAnimSegment* HAnimSegment1798 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1798->setUSE("hanim_c1");
HAnimHumanoid46->setSegments(*HAnimSegment1798);

CHAnimSegment* HAnimSegment1799 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1799->setUSE("hanim_c2");
HAnimHumanoid46->setSegments(*HAnimSegment1799);

CHAnimSegment* HAnimSegment1800 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1800->setUSE("hanim_c3");
HAnimHumanoid46->setSegments(*HAnimSegment1800);

CHAnimSegment* HAnimSegment1801 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1801->setUSE("hanim_c4");
HAnimHumanoid46->setSegments(*HAnimSegment1801);

CHAnimSegment* HAnimSegment1802 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1802->setUSE("hanim_c5");
HAnimHumanoid46->setSegments(*HAnimSegment1802);

CHAnimSegment* HAnimSegment1803 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1803->setUSE("hanim_c6");
HAnimHumanoid46->setSegments(*HAnimSegment1803);

CHAnimSegment* HAnimSegment1804 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1804->setUSE("hanim_c7");
HAnimHumanoid46->setSegments(*HAnimSegment1804);

CHAnimSegment* HAnimSegment1805 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1805->setUSE("hanim_t1");
HAnimHumanoid46->setSegments(*HAnimSegment1805);

CHAnimSegment* HAnimSegment1806 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1806->setUSE("hanim_t2");
HAnimHumanoid46->setSegments(*HAnimSegment1806);

CHAnimSegment* HAnimSegment1807 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1807->setUSE("hanim_t3");
HAnimHumanoid46->setSegments(*HAnimSegment1807);

CHAnimSegment* HAnimSegment1808 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1808->setUSE("hanim_t4");
HAnimHumanoid46->setSegments(*HAnimSegment1808);

CHAnimSegment* HAnimSegment1809 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1809->setUSE("hanim_t5");
HAnimHumanoid46->setSegments(*HAnimSegment1809);

CHAnimSegment* HAnimSegment1810 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1810->setUSE("hanim_t6");
HAnimHumanoid46->setSegments(*HAnimSegment1810);

CHAnimSegment* HAnimSegment1811 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1811->setUSE("hanim_t7");
HAnimHumanoid46->setSegments(*HAnimSegment1811);

CHAnimSegment* HAnimSegment1812 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1812->setUSE("hanim_t8");
HAnimHumanoid46->setSegments(*HAnimSegment1812);

CHAnimSegment* HAnimSegment1813 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1813->setUSE("hanim_t9");
HAnimHumanoid46->setSegments(*HAnimSegment1813);

CHAnimSegment* HAnimSegment1814 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1814->setUSE("hanim_t10");
HAnimHumanoid46->setSegments(*HAnimSegment1814);

CHAnimSegment* HAnimSegment1815 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1815->setUSE("hanim_t11");
HAnimHumanoid46->setSegments(*HAnimSegment1815);

CHAnimSegment* HAnimSegment1816 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1816->setUSE("hanim_t12");
HAnimHumanoid46->setSegments(*HAnimSegment1816);

CHAnimSegment* HAnimSegment1817 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1817->setUSE("hanim_l1");
HAnimHumanoid46->setSegments(*HAnimSegment1817);

CHAnimSegment* HAnimSegment1818 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1818->setUSE("hanim_l2");
HAnimHumanoid46->setSegments(*HAnimSegment1818);

CHAnimSegment* HAnimSegment1819 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1819->setUSE("hanim_l3");
HAnimHumanoid46->setSegments(*HAnimSegment1819);

CHAnimSegment* HAnimSegment1820 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1820->setUSE("hanim_l4");
HAnimHumanoid46->setSegments(*HAnimSegment1820);

CHAnimSegment* HAnimSegment1821 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1821->setUSE("hanim_l5");
HAnimHumanoid46->setSegments(*HAnimSegment1821);

CHAnimSegment* HAnimSegment1822 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1822->setUSE("hanim_sacrum");
HAnimHumanoid46->setSegments(*HAnimSegment1822);

CHAnimSegment* HAnimSegment1823 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1823->setUSE("hanim_l_calf");
HAnimHumanoid46->setSegments(*HAnimSegment1823);

CHAnimSegment* HAnimSegment1824 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1824->setUSE("hanim_r_calf");
HAnimHumanoid46->setSegments(*HAnimSegment1824);

CHAnimSegment* HAnimSegment1825 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1825->setUSE("hanim_l_clavicle");
HAnimHumanoid46->setSegments(*HAnimSegment1825);

CHAnimSegment* HAnimSegment1826 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1826->setUSE("hanim_r_clavicle");
HAnimHumanoid46->setSegments(*HAnimSegment1826);

CHAnimSegment* HAnimSegment1827 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1827->setUSE("hanim_l_eyeball");
HAnimHumanoid46->setSegments(*HAnimSegment1827);

CHAnimSegment* HAnimSegment1828 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1828->setUSE("hanim_r_eyeball");
HAnimHumanoid46->setSegments(*HAnimSegment1828);

CHAnimSegment* HAnimSegment1829 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1829->setUSE("hanim_l_eyebrow");
HAnimHumanoid46->setSegments(*HAnimSegment1829);

CHAnimSegment* HAnimSegment1830 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1830->setUSE("hanim_r_eyebrow");
HAnimHumanoid46->setSegments(*HAnimSegment1830);

CHAnimSegment* HAnimSegment1831 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1831->setUSE("hanim_l_eyelid");
HAnimHumanoid46->setSegments(*HAnimSegment1831);

CHAnimSegment* HAnimSegment1832 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1832->setUSE("hanim_r_eyelid");
HAnimHumanoid46->setSegments(*HAnimSegment1832);

CHAnimSegment* HAnimSegment1833 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1833->setUSE("hanim_l_forearm");
HAnimHumanoid46->setSegments(*HAnimSegment1833);

CHAnimSegment* HAnimSegment1834 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1834->setUSE("hanim_r_forearm");
HAnimHumanoid46->setSegments(*HAnimSegment1834);

CHAnimSegment* HAnimSegment1835 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1835->setUSE("hanim_l_forefoot");
HAnimHumanoid46->setSegments(*HAnimSegment1835);

CHAnimSegment* HAnimSegment1836 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1836->setUSE("hanim_r_forefoot");
HAnimHumanoid46->setSegments(*HAnimSegment1836);

CHAnimSegment* HAnimSegment1837 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1837->setUSE("hanim_l_hand");
HAnimHumanoid46->setSegments(*HAnimSegment1837);

CHAnimSegment* HAnimSegment1838 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1838->setUSE("hanim_r_hand");
HAnimHumanoid46->setSegments(*HAnimSegment1838);

CHAnimSegment* HAnimSegment1839 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1839->setUSE("hanim_l_hindfoot");
HAnimHumanoid46->setSegments(*HAnimSegment1839);

CHAnimSegment* HAnimSegment1840 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1840->setUSE("hanim_r_hindfoot");
HAnimHumanoid46->setSegments(*HAnimSegment1840);

CHAnimSegment* HAnimSegment1841 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1841->setUSE("hanim_l_index_distal");
HAnimHumanoid46->setSegments(*HAnimSegment1841);

CHAnimSegment* HAnimSegment1842 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1842->setUSE("hanim_r_index_distal");
HAnimHumanoid46->setSegments(*HAnimSegment1842);

CHAnimSegment* HAnimSegment1843 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1843->setUSE("hanim_l_index_metacarpal");
HAnimHumanoid46->setSegments(*HAnimSegment1843);

CHAnimSegment* HAnimSegment1844 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1844->setUSE("hanim_r_index_metacarpal");
HAnimHumanoid46->setSegments(*HAnimSegment1844);

CHAnimSegment* HAnimSegment1845 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1845->setUSE("hanim_l_index_middle");
HAnimHumanoid46->setSegments(*HAnimSegment1845);

CHAnimSegment* HAnimSegment1846 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1846->setUSE("hanim_r_index_middle");
HAnimHumanoid46->setSegments(*HAnimSegment1846);

CHAnimSegment* HAnimSegment1847 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1847->setUSE("hanim_l_index_proximal");
HAnimHumanoid46->setSegments(*HAnimSegment1847);

CHAnimSegment* HAnimSegment1848 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1848->setUSE("hanim_r_index_proximal");
HAnimHumanoid46->setSegments(*HAnimSegment1848);

CHAnimSegment* HAnimSegment1849 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1849->setUSE("hanim_l_middistal");
HAnimHumanoid46->setSegments(*HAnimSegment1849);

CHAnimSegment* HAnimSegment1850 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1850->setUSE("hanim_r_middistal");
HAnimHumanoid46->setSegments(*HAnimSegment1850);

CHAnimSegment* HAnimSegment1851 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1851->setUSE("hanim_l_middle_distal");
HAnimHumanoid46->setSegments(*HAnimSegment1851);

CHAnimSegment* HAnimSegment1852 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1852->setUSE("hanim_r_middle_distal");
HAnimHumanoid46->setSegments(*HAnimSegment1852);

CHAnimSegment* HAnimSegment1853 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1853->setUSE("hanim_l_middle_metacarpal");
HAnimHumanoid46->setSegments(*HAnimSegment1853);

CHAnimSegment* HAnimSegment1854 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1854->setUSE("hanim_r_middle_metacarpal");
HAnimHumanoid46->setSegments(*HAnimSegment1854);

CHAnimSegment* HAnimSegment1855 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1855->setUSE("hanim_l_middle_middle");
HAnimHumanoid46->setSegments(*HAnimSegment1855);

CHAnimSegment* HAnimSegment1856 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1856->setUSE("hanim_r_middle_middle");
HAnimHumanoid46->setSegments(*HAnimSegment1856);

CHAnimSegment* HAnimSegment1857 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1857->setUSE("hanim_l_middle_proximal");
HAnimHumanoid46->setSegments(*HAnimSegment1857);

CHAnimSegment* HAnimSegment1858 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1858->setUSE("hanim_r_middle_proximal");
HAnimHumanoid46->setSegments(*HAnimSegment1858);

CHAnimSegment* HAnimSegment1859 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1859->setUSE("hanim_l_midproximal");
HAnimHumanoid46->setSegments(*HAnimSegment1859);

CHAnimSegment* HAnimSegment1860 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1860->setUSE("hanim_r_midproximal");
HAnimHumanoid46->setSegments(*HAnimSegment1860);

CHAnimSegment* HAnimSegment1861 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1861->setUSE("hanim_l_pinky_distal");
HAnimHumanoid46->setSegments(*HAnimSegment1861);

CHAnimSegment* HAnimSegment1862 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1862->setUSE("hanim_r_pinky_distal");
HAnimHumanoid46->setSegments(*HAnimSegment1862);

CHAnimSegment* HAnimSegment1863 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1863->setUSE("hanim_l_pinky_metacarpal");
HAnimHumanoid46->setSegments(*HAnimSegment1863);

CHAnimSegment* HAnimSegment1864 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1864->setUSE("hanim_r_pinky_metacarpal");
HAnimHumanoid46->setSegments(*HAnimSegment1864);

CHAnimSegment* HAnimSegment1865 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1865->setUSE("hanim_l_pinky_middle");
HAnimHumanoid46->setSegments(*HAnimSegment1865);

CHAnimSegment* HAnimSegment1866 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1866->setUSE("hanim_r_pinky_middle");
HAnimHumanoid46->setSegments(*HAnimSegment1866);

CHAnimSegment* HAnimSegment1867 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1867->setUSE("hanim_l_pinky_proximal");
HAnimHumanoid46->setSegments(*HAnimSegment1867);

CHAnimSegment* HAnimSegment1868 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1868->setUSE("hanim_r_pinky_proximal");
HAnimHumanoid46->setSegments(*HAnimSegment1868);

CHAnimSegment* HAnimSegment1869 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1869->setUSE("hanim_l_ring_distal");
HAnimHumanoid46->setSegments(*HAnimSegment1869);

CHAnimSegment* HAnimSegment1870 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1870->setUSE("hanim_r_ring_distal");
HAnimHumanoid46->setSegments(*HAnimSegment1870);

CHAnimSegment* HAnimSegment1871 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1871->setUSE("hanim_l_ring_metacarpal");
HAnimHumanoid46->setSegments(*HAnimSegment1871);

CHAnimSegment* HAnimSegment1872 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1872->setUSE("hanim_r_ring_metacarpal");
HAnimHumanoid46->setSegments(*HAnimSegment1872);

CHAnimSegment* HAnimSegment1873 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1873->setUSE("hanim_l_ring_middle");
HAnimHumanoid46->setSegments(*HAnimSegment1873);

CHAnimSegment* HAnimSegment1874 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1874->setUSE("hanim_r_ring_middle");
HAnimHumanoid46->setSegments(*HAnimSegment1874);

CHAnimSegment* HAnimSegment1875 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1875->setUSE("hanim_l_ring_proximal");
HAnimHumanoid46->setSegments(*HAnimSegment1875);

CHAnimSegment* HAnimSegment1876 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1876->setUSE("hanim_r_ring_proximal");
HAnimHumanoid46->setSegments(*HAnimSegment1876);

CHAnimSegment* HAnimSegment1877 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1877->setUSE("hanim_l_scapula");
HAnimHumanoid46->setSegments(*HAnimSegment1877);

CHAnimSegment* HAnimSegment1878 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1878->setUSE("hanim_r_scapula");
HAnimHumanoid46->setSegments(*HAnimSegment1878);

CHAnimSegment* HAnimSegment1879 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1879->setUSE("hanim_l_thigh");
HAnimHumanoid46->setSegments(*HAnimSegment1879);

CHAnimSegment* HAnimSegment1880 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1880->setUSE("hanim_r_thigh");
HAnimHumanoid46->setSegments(*HAnimSegment1880);

CHAnimSegment* HAnimSegment1881 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1881->setUSE("hanim_l_thumb_distal");
HAnimHumanoid46->setSegments(*HAnimSegment1881);

CHAnimSegment* HAnimSegment1882 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1882->setUSE("hanim_r_thumb_distal");
HAnimHumanoid46->setSegments(*HAnimSegment1882);

CHAnimSegment* HAnimSegment1883 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1883->setUSE("hanim_l_thumb_metacarpal");
HAnimHumanoid46->setSegments(*HAnimSegment1883);

CHAnimSegment* HAnimSegment1884 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1884->setUSE("hanim_r_thumb_metacarpal");
HAnimHumanoid46->setSegments(*HAnimSegment1884);

CHAnimSegment* HAnimSegment1885 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1885->setUSE("hanim_l_thumb_proximal");
HAnimHumanoid46->setSegments(*HAnimSegment1885);

CHAnimSegment* HAnimSegment1886 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1886->setUSE("hanim_r_thumb_proximal");
HAnimHumanoid46->setSegments(*HAnimSegment1886);

CHAnimSegment* HAnimSegment1887 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1887->setUSE("hanim_l_upperarm");
HAnimHumanoid46->setSegments(*HAnimSegment1887);

CHAnimSegment* HAnimSegment1888 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1888->setUSE("hanim_r_upperarm");
HAnimHumanoid46->setSegments(*HAnimSegment1888);

CHAnimSite* HAnimSite1889 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1889->setUSE("hanim_crotch_pt");
HAnimHumanoid46->setSites(*HAnimSite1889);

CHAnimSite* HAnimSite1890 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1890->setUSE("hanim_skull_tip");
HAnimHumanoid46->setSites(*HAnimSite1890);

CHAnimSite* HAnimSite1891 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1891->setUSE("hanim_sellion_pt");
HAnimHumanoid46->setSites(*HAnimSite1891);

CHAnimSite* HAnimSite1892 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1892->setUSE("hanim_supramenton_pt");
HAnimHumanoid46->setSites(*HAnimSite1892);

CHAnimSite* HAnimSite1893 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1893->setUSE("hanim_nuchale_pt");
HAnimHumanoid46->setSites(*HAnimSite1893);

CHAnimSite* HAnimSite1894 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1894->setUSE("hanim_suprasternale_pt");
HAnimHumanoid46->setSites(*HAnimSite1894);

CHAnimSite* HAnimSite1895 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1895->setUSE("hanim_cervicale_pt");
HAnimHumanoid46->setSites(*HAnimSite1895);

CHAnimSite* HAnimSite1896 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1896->setUSE("hanim_substernale_pt");
HAnimHumanoid46->setSites(*HAnimSite1896);

CHAnimSite* HAnimSite1897 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1897->setUSE("hanim_rib10_midspine_pt");
HAnimHumanoid46->setSites(*HAnimSite1897);

CHAnimSite* HAnimSite1898 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1898->setUSE("hanim_waist_preferred_post_pt");
HAnimHumanoid46->setSites(*HAnimSite1898);

CHAnimSite* HAnimSite1899 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1899->setUSE("hanim_navel_pt");
HAnimHumanoid46->setSites(*HAnimSite1899);

CHAnimSite* HAnimSite1900 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1900->setUSE("hanim_l_acromion_pt");
HAnimHumanoid46->setSites(*HAnimSite1900);

CHAnimSite* HAnimSite1901 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1901->setUSE("hanim_r_acromion_pt");
HAnimHumanoid46->setSites(*HAnimSite1901);

CHAnimSite* HAnimSite1902 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1902->setUSE("hanim_r_asis_pt");
HAnimHumanoid46->setSites(*HAnimSite1902);

CHAnimSite* HAnimSite1903 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1903->setUSE("hanim_l_asis_pt");
HAnimHumanoid46->setSites(*HAnimSite1903);

CHAnimSite* HAnimSite1904 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1904->setUSE("hanim_l_axilla_ant_pt");
HAnimHumanoid46->setSites(*HAnimSite1904);

CHAnimSite* HAnimSite1905 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1905->setUSE("hanim_r_axilla_ant_pt");
HAnimHumanoid46->setSites(*HAnimSite1905);

CHAnimSite* HAnimSite1906 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1906->setUSE("hanim_l_axilla_post_pt");
HAnimHumanoid46->setSites(*HAnimSite1906);

CHAnimSite* HAnimSite1907 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1907->setUSE("hanim_r_axilla_post_pt");
HAnimHumanoid46->setSites(*HAnimSite1907);

CHAnimSite* HAnimSite1908 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1908->setUSE("hanim_l_calcaneous_post_pt");
HAnimHumanoid46->setSites(*HAnimSite1908);

CHAnimSite* HAnimSite1909 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1909->setUSE("hanim_r_calcaneous_post_pt");
HAnimHumanoid46->setSites(*HAnimSite1909);

CHAnimSite* HAnimSite1910 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1910->setUSE("hanim_l_clavicale_pt");
HAnimHumanoid46->setSites(*HAnimSite1910);

CHAnimSite* HAnimSite1911 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1911->setUSE("hanim_r_clavicale_pt");
HAnimHumanoid46->setSites(*HAnimSite1911);

CHAnimSite* HAnimSite1912 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1912->setUSE("hanim_l_dactylion_pt");
HAnimHumanoid46->setSites(*HAnimSite1912);

CHAnimSite* HAnimSite1913 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1913->setUSE("hanim_r_dactylion_pt");
HAnimHumanoid46->setSites(*HAnimSite1913);

CHAnimSite* HAnimSite1914 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1914->setUSE("hanim_l_digit2_pt");
HAnimHumanoid46->setSites(*HAnimSite1914);

CHAnimSite* HAnimSite1915 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1915->setUSE("hanim_r_digit2_pt");
HAnimHumanoid46->setSites(*HAnimSite1915);

CHAnimSite* HAnimSite1916 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1916->setUSE("hanim_l_femoral_lateral_epicn_pt");
HAnimHumanoid46->setSites(*HAnimSite1916);

CHAnimSite* HAnimSite1917 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1917->setUSE("hanim_r_femoral_lateral_epicn_pt");
HAnimHumanoid46->setSites(*HAnimSite1917);

CHAnimSite* HAnimSite1918 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1918->setUSE("hanim_l_femoral_medial_epicn_pt");
HAnimHumanoid46->setSites(*HAnimSite1918);

CHAnimSite* HAnimSite1919 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1919->setUSE("hanim_r_femoral_medial_epicn_pt");
HAnimHumanoid46->setSites(*HAnimSite1919);

CHAnimSite* HAnimSite1920 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1920->setUSE("hanim_l_forefoot_tip");
HAnimHumanoid46->setSites(*HAnimSite1920);

CHAnimSite* HAnimSite1921 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1921->setUSE("hanim_r_forefoot_tip");
HAnimHumanoid46->setSites(*HAnimSite1921);

CHAnimSite* HAnimSite1922 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1922->setUSE("hanim_r_gonion_pt");
HAnimHumanoid46->setSites(*HAnimSite1922);

CHAnimSite* HAnimSite1923 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1923->setUSE("hanim_l_gonion_pt");
HAnimHumanoid46->setSites(*HAnimSite1923);

CHAnimSite* HAnimSite1924 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1924->setUSE("hanim_l_humeral_lateral_epicn_pt");
HAnimHumanoid46->setSites(*HAnimSite1924);

CHAnimSite* HAnimSite1925 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1925->setUSE("hanim_r_humeral_lateral_epicn_pt");
HAnimHumanoid46->setSites(*HAnimSite1925);

CHAnimSite* HAnimSite1926 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1926->setUSE("hanim_l_humeral_medial_epicn_pt");
HAnimHumanoid46->setSites(*HAnimSite1926);

CHAnimSite* HAnimSite1927 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1927->setUSE("hanim_r_humeral_medial_epicn_pt");
HAnimHumanoid46->setSites(*HAnimSite1927);

CHAnimSite* HAnimSite1928 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1928->setUSE("hanim_r_iliocristale_pt");
HAnimHumanoid46->setSites(*HAnimSite1928);

CHAnimSite* HAnimSite1929 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1929->setUSE("hanim_l_iliocristale_pt");
HAnimHumanoid46->setSites(*HAnimSite1929);

CHAnimSite* HAnimSite1930 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1930->setUSE("hanim_l_index_distal_tip");
HAnimHumanoid46->setSites(*HAnimSite1930);

CHAnimSite* HAnimSite1931 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1931->setUSE("hanim_r_index_distal_tip");
HAnimHumanoid46->setSites(*HAnimSite1931);

CHAnimSite* HAnimSite1932 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1932->setUSE("hanim_r_infraorbitale_pt");
HAnimHumanoid46->setSites(*HAnimSite1932);

CHAnimSite* HAnimSite1933 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1933->setUSE("hanim_l_infraorbitale_pt");
HAnimHumanoid46->setSites(*HAnimSite1933);

CHAnimSite* HAnimSite1934 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1934->setUSE("hanim_l_knee_crease_pt");
HAnimHumanoid46->setSites(*HAnimSite1934);

CHAnimSite* HAnimSite1935 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1935->setUSE("hanim_r_knee_crease_pt");
HAnimHumanoid46->setSites(*HAnimSite1935);

CHAnimSite* HAnimSite1936 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1936->setUSE("hanim_l_lateral_malleolus_pt");
HAnimHumanoid46->setSites(*HAnimSite1936);

CHAnimSite* HAnimSite1937 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1937->setUSE("hanim_r_lateral_malleolus_pt");
HAnimHumanoid46->setSites(*HAnimSite1937);

CHAnimSite* HAnimSite1938 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1938->setUSE("hanim_l_medial_malleolus_pt");
HAnimHumanoid46->setSites(*HAnimSite1938);

CHAnimSite* HAnimSite1939 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1939->setUSE("hanim_r_medial_malleolus_pt");
HAnimHumanoid46->setSites(*HAnimSite1939);

CHAnimSite* HAnimSite1940 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1940->setUSE("hanim_l_metacarpal_pha2_pt");
HAnimHumanoid46->setSites(*HAnimSite1940);

CHAnimSite* HAnimSite1941 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1941->setUSE("hanim_r_metacarpal_pha2_pt");
HAnimHumanoid46->setSites(*HAnimSite1941);

CHAnimSite* HAnimSite1942 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1942->setUSE("hanim_l_metacarpal_pha5_pt");
HAnimHumanoid46->setSites(*HAnimSite1942);

CHAnimSite* HAnimSite1943 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1943->setUSE("hanim_r_metacarpal_pha5_pt");
HAnimHumanoid46->setSites(*HAnimSite1943);

CHAnimSite* HAnimSite1944 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1944->setUSE("hanim_l_metatarsal_pha1_pt");
HAnimHumanoid46->setSites(*HAnimSite1944);

CHAnimSite* HAnimSite1945 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1945->setUSE("hanim_r_metatarsal_pha1_pt");
HAnimHumanoid46->setSites(*HAnimSite1945);

CHAnimSite* HAnimSite1946 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1946->setUSE("hanim_l_metatarsal_pha5_pt");
HAnimHumanoid46->setSites(*HAnimSite1946);

CHAnimSite* HAnimSite1947 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1947->setUSE("hanim_r_metatarsal_pha5_pt");
HAnimHumanoid46->setSites(*HAnimSite1947);

CHAnimSite* HAnimSite1948 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1948->setUSE("hanim_l_middle_distal_tip");
HAnimHumanoid46->setSites(*HAnimSite1948);

CHAnimSite* HAnimSite1949 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1949->setUSE("hanim_r_middle_distal_tip");
HAnimHumanoid46->setSites(*HAnimSite1949);

CHAnimSite* HAnimSite1950 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1950->setUSE("hanim_r_neck_base_pt");
HAnimHumanoid46->setSites(*HAnimSite1950);

CHAnimSite* HAnimSite1951 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1951->setUSE("hanim_l_neck_base_pt");
HAnimHumanoid46->setSites(*HAnimSite1951);

CHAnimSite* HAnimSite1952 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1952->setUSE("hanim_l_olecranon_pt");
HAnimHumanoid46->setSites(*HAnimSite1952);

CHAnimSite* HAnimSite1953 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1953->setUSE("hanim_r_olecranon_pt");
HAnimHumanoid46->setSites(*HAnimSite1953);

CHAnimSite* HAnimSite1954 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1954->setUSE("hanim_l_pinky_distal_tip");
HAnimHumanoid46->setSites(*HAnimSite1954);

CHAnimSite* HAnimSite1955 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1955->setUSE("hanim_r_pinky_distal_tip");
HAnimHumanoid46->setSites(*HAnimSite1955);

CHAnimSite* HAnimSite1956 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1956->setUSE("hanim_r_psis_pt");
HAnimHumanoid46->setSites(*HAnimSite1956);

CHAnimSite* HAnimSite1957 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1957->setUSE("hanim_l_psis_pt");
HAnimHumanoid46->setSites(*HAnimSite1957);

CHAnimSite* HAnimSite1958 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1958->setUSE("hanim_l_radial_styloid_pt");
HAnimHumanoid46->setSites(*HAnimSite1958);

CHAnimSite* HAnimSite1959 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1959->setUSE("hanim_r_radial_styloid_pt");
HAnimHumanoid46->setSites(*HAnimSite1959);

CHAnimSite* HAnimSite1960 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1960->setUSE("hanim_l_radiale_pt");
HAnimHumanoid46->setSites(*HAnimSite1960);

CHAnimSite* HAnimSite1961 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1961->setUSE("hanim_r_radiale_pt");
HAnimHumanoid46->setSites(*HAnimSite1961);

CHAnimSite* HAnimSite1962 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1962->setUSE("hanim_r_rib10_pt");
HAnimHumanoid46->setSites(*HAnimSite1962);

CHAnimSite* HAnimSite1963 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1963->setUSE("hanim_l_rib10_pt");
HAnimHumanoid46->setSites(*HAnimSite1963);

CHAnimSite* HAnimSite1964 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1964->setUSE("hanim_l_ring_distal_tip");
HAnimHumanoid46->setSites(*HAnimSite1964);

CHAnimSite* HAnimSite1965 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1965->setUSE("hanim_r_ring_distal_tip");
HAnimHumanoid46->setSites(*HAnimSite1965);

CHAnimSite* HAnimSite1966 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1966->setUSE("hanim_temporomandibular_l_site_pt");
HAnimHumanoid46->setSites(*HAnimSite1966);

CHAnimSite* HAnimSite1967 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1967->setUSE("hanim_temporomandibular_r_site_pt");
HAnimHumanoid46->setSites(*HAnimSite1967);

CHAnimSite* HAnimSite1968 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1968->setUSE("hanim_l_sphyrion_pt");
HAnimHumanoid46->setSites(*HAnimSite1968);

CHAnimSite* HAnimSite1969 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1969->setUSE("hanim_r_sphyrion_pt");
HAnimHumanoid46->setSites(*HAnimSite1969);

CHAnimSite* HAnimSite1970 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1970->setUSE("hanim_r_thelion_pt");
HAnimHumanoid46->setSites(*HAnimSite1970);

CHAnimSite* HAnimSite1971 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1971->setUSE("hanim_l_thelion_pt");
HAnimHumanoid46->setSites(*HAnimSite1971);

CHAnimSite* HAnimSite1972 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1972->setUSE("hanim_l_thumb_distal_tip");
HAnimHumanoid46->setSites(*HAnimSite1972);

CHAnimSite* HAnimSite1973 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1973->setUSE("hanim_r_thumb_distal_tip");
HAnimHumanoid46->setSites(*HAnimSite1973);

CHAnimSite* HAnimSite1974 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1974->setUSE("hanim_r_tragion_pt");
HAnimHumanoid46->setSites(*HAnimSite1974);

CHAnimSite* HAnimSite1975 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1975->setUSE("hanim_l_tragion_pt");
HAnimHumanoid46->setSites(*HAnimSite1975);

CHAnimSite* HAnimSite1976 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1976->setUSE("hanim_r_trochanterion_pt");
HAnimHumanoid46->setSites(*HAnimSite1976);

CHAnimSite* HAnimSite1977 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1977->setUSE("hanim_l_trochanterion_pt");
HAnimHumanoid46->setSites(*HAnimSite1977);

CHAnimSite* HAnimSite1978 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1978->setUSE("hanim_l_ulnar_styloid_pt");
HAnimHumanoid46->setSites(*HAnimSite1978);

CHAnimSite* HAnimSite1979 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1979->setUSE("hanim_r_ulnar_styloid_pt");
HAnimHumanoid46->setSites(*HAnimSite1979);

group->addChildren(*HAnimHumanoid46);

X3D0->setScene(*Scene32);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

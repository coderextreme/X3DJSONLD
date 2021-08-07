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
CGroup* group = (CGroup*)m_pScene.createNode("Group");
group->addChildren(X3D0);
X3D0->setProfile("Immersive");
X3D0->setVersion("3.3");
Chead* head1 = new Chead();
Ccomponent* component2 = new Ccomponent();
component2->setName("H-Anim");
component2->setLevel(1);
head1->addComponent(component2);

Cmeta* meta3 = new Cmeta();
meta3->setName("title");
meta3->setContent("HAnimSpecificationLOA3Illustrated.x3d");
head1->addMeta(meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("description");
meta4->setContent("HAnim Specification reference example providing full coverage and visibility of all specified HAnim constructs, also suitable for re-use as an authoring template. Geometry visualizations are derived from HAnimSpecificationLOA3Invisible.x3d visualization report. Resusable exemplar animations also added via heads-up display (HUD) interface to confirm proper parent-child relationships.");
head1->addMeta(meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("reference");
meta5->setContent("https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds");
head1->addMeta(meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("created");
meta6->setContent("24 April 2013");
head1->addMeta(meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("modified");
meta7->setContent("4 July 2020");
head1->addMeta(meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("TODO");
meta8->setContent("Convert to X3D4 HAnim2");
head1->addMeta(meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("creator");
meta9->setContent("Matthew T. Beitler, Joe D. Williams, Don Brutzman");
head1->addMeta(meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("Image");
meta10->setContent("HAnimSpecificationLOA3Illustrated.png");
head1->addMeta(meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("Image");
meta11->setContent("HAnimSpecificationLOA3IllustratedLeftSide.png");
head1->addMeta(meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("reference");
meta12->setContent("HAnimSpecificationLOA3Invisible.x3d");
head1->addMeta(meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("reference");
meta13->setContent("HAnimSpecificationLOA3Animation.x3d");
head1->addMeta(meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("reference");
meta14->setContent("HAnimSpecificationExampleChangeLog.txt");
head1->addMeta(meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("Image");
meta15->setContent("images/BonesAllSkeletonFrontViewLOA1.png");
head1->addMeta(meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("Image");
meta16->setContent("images/BonesAllSkeletonFrontViewLOA2.png");
head1->addMeta(meta16);

Cmeta* meta17 = new Cmeta();
meta17->setName("Image");
meta17->setContent("images/BonesAllSkeletonFrontViewLOA3.png");
head1->addMeta(meta17);

Cmeta* meta18 = new Cmeta();
meta18->setName("TODO");
meta18->setContent("move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations");
head1->addMeta(meta18);

Cmeta* meta19 = new Cmeta();
meta19->setName("warning");
meta19->setContent("BS Contact and H3DViewer have polygon-culling problems at close range (possibly related to avatarSize), other players look OK");
head1->addMeta(meta19);

Cmeta* meta20 = new Cmeta();
meta20->setName("TODO");
meta20->setContent("insert MetadataInteger nodes indicating LOA for each Joint and Segment");
head1->addMeta(meta20);

Cmeta* meta21 = new Cmeta();
meta21->setName("reference");
meta21->setContent("Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.");
head1->addMeta(meta21);

Cmeta* meta22 = new Cmeta();
meta22->setName("reference");
meta22->setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.ps");
head1->addMeta(meta22);

Cmeta* meta23 = new Cmeta();
meta23->setName("reference");
meta23->setContent("tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf");
head1->addMeta(meta23);

Cmeta* meta24 = new Cmeta();
meta24->setName("translator");
meta24->setContent("Don Brutzman and Joe Williams");
head1->addMeta(meta24);

Cmeta* meta25 = new Cmeta();
meta25->setName("generator");
meta25->setContent("BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo");
head1->addMeta(meta25);

Cmeta* meta26 = new Cmeta();
meta26->setName("reference");
meta26->setContent("originals/LOA3ExampleSourceWithDiamondsOriginal.wrl");
head1->addMeta(meta26);

Cmeta* meta27 = new Cmeta();
meta27->setName("reference");
meta27->setContent("originals/LOA3ExampleSourceWithDiamondsOriginal.x3d");
head1->addMeta(meta27);

Cmeta* meta28 = new Cmeta();
meta28->setName("reference");
meta28->setContent("originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d");
head1->addMeta(meta28);

Cmeta* meta29 = new Cmeta();
meta29->setName("reference");
meta29->setContent("HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames");
head1->addMeta(meta29);

Cmeta* meta30 = new Cmeta();
meta30->setName("generator");
meta30->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(meta30);

Cmeta* meta31 = new Cmeta();
meta31->setName("identifier");
meta31->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/HAnimSpecificationLOA3Illustrated.x3d");
head1->addMeta(meta31);

Cmeta* meta32 = new Cmeta();
meta32->setName("license");
meta32->setContent("../license.html");
head1->addMeta(meta32);

X3D0->setHead(head1);

CScene* Scene33 = new CScene();
CBackground* Background34 = (CBackground *)m_pScene.createNode("Background");
Background34->setSkyColor(new float[3]{0.3,0.3,0.3});
group->addChildren(Background34);

CNavigationInfo* NavigationInfo35 = (CNavigationInfo *)m_pScene.createNode("NavigationInfo");
group->addChildren(NavigationInfo35);

CGroup* Group36 = (CGroup *)m_pScene.createNode("Group");
Group36->setDEF("Original_WorldInfo");
CWorldInfo* WorldInfo37 = (CWorldInfo *)m_pScene.createNode("WorldInfo");
WorldInfo37->setInfo(new CString[1]{" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "}, 1);
WorldInfo37->setTitle("HANIM 200x Default Joint Centers, LOA3");
Group36->addChildren(WorldInfo37);

group->addChildren(Group36);

//TODO move viewpoints to be internal to HAnimHumanoid
//Viewpoint centerOfRotation=\"0 0.9149 0.0016\" matches initial at-rest locaton of the sacroliac. Note that these viewpoints are external to the HAnimHumanoid and do not move with the human.
CViewpoint* Viewpoint38 = (CViewpoint *)m_pScene.createNode("Viewpoint");
Viewpoint38->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint38->setDescription("Humanoid LOA 3 Front");
Viewpoint38->setPosition(new float[3]{0,0.4,4});
group->addChildren(Viewpoint38);

CViewpoint* Viewpoint39 = (CViewpoint *)m_pScene.createNode("Viewpoint");
Viewpoint39->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint39->setDescription("Humanoid LOA 3 Front Close");
Viewpoint39->setPosition(new float[3]{0,0.8,2});
group->addChildren(Viewpoint39);

CViewpoint* Viewpoint40 = (CViewpoint *)m_pScene.createNode("Viewpoint");
Viewpoint40->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint40->setDescription("Humanoid LOA 3 Front Closer");
Viewpoint40->setPosition(new float[3]{0,1.2,1});
group->addChildren(Viewpoint40);

CViewpoint* Viewpoint41 = (CViewpoint *)m_pScene.createNode("Viewpoint");
Viewpoint41->setCenterOfRotation(new float[3]{0,1.5,0.0016});
Viewpoint41->setDescription("Humanoid LOA 3 Front Face");
Viewpoint41->setPosition(new float[3]{0,1.63,1});
group->addChildren(Viewpoint41);

CViewpoint* Viewpoint42 = (CViewpoint *)m_pScene.createNode("Viewpoint");
Viewpoint42->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint42->setDescription("Humanoid LOA 3 Right Side");
Viewpoint42->setOrientation(new float[4]{0,1,0,1.5708});
Viewpoint42->setPosition(new float[3]{2.6,0.8,0});
group->addChildren(Viewpoint42);

CViewpoint* Viewpoint43 = (CViewpoint *)m_pScene.createNode("Viewpoint");
Viewpoint43->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint43->setDescription("Humanoid LOA 3 Right Side Close");
Viewpoint43->setOrientation(new float[4]{0,1,0,1.2});
Viewpoint43->setPosition(new float[3]{1,0.8,0.5});
group->addChildren(Viewpoint43);

CViewpoint* Viewpoint44 = (CViewpoint *)m_pScene.createNode("Viewpoint");
Viewpoint44->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint44->setDescription("Humanoid LOA 3 Left Side Close");
Viewpoint44->setOrientation(new float[4]{0,1,0,-1.2});
Viewpoint44->setPosition(new float[3]{-1,0.8,0.5});
group->addChildren(Viewpoint44);

CViewpoint* Viewpoint45 = (CViewpoint *)m_pScene.createNode("Viewpoint");
Viewpoint45->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint45->setDescription("Humanoid LOA 3 Left Side");
Viewpoint45->setOrientation(new float[4]{0,1,0,-1.5708});
Viewpoint45->setPosition(new float[3]{-2.6,0.8,0});
group->addChildren(Viewpoint45);

CViewpoint* Viewpoint46 = (CViewpoint *)m_pScene.createNode("Viewpoint");
Viewpoint46->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint46->setDescription("Humanoid LOA 3 Top");
Viewpoint46->setOrientation(new float[4]{1,0,0,-1.5708});
Viewpoint46->setPosition(new float[3]{0,3.5,0});
group->addChildren(Viewpoint46);

CHAnimHumanoid* HAnimHumanoid47 = (CHAnimHumanoid *)m_pScene.createNode("HAnimHumanoid");
HAnimHumanoid47->setName("humanoid");
HAnimHumanoid47->setDEF("hanim_humanoid");
HAnimHumanoid47->setInfo(new CString[7]{"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman","authorEmail=HAnim@web3D.org","copyright=none","creationDate=12 May 1999","usageRestrictions=none","humanoidVersion=2.0","height=1.7504"}, 7);
HAnimHumanoid47->setVersion("1.0");
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
//right between the eyes, stationary position not animating except with body itself
CHAnimJoint* HAnimJoint48 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint48->setName("humanoid_root");
HAnimJoint48->setDEF("hanim_humanoid_root");
HAnimJoint48->setCenter(new float[3]{0,0.824,0.0277});
HAnimJoint48->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment49 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment49->setName("sacrum");
HAnimSegment49->setDEF("hanim_sacrum");
//<HAnimJoint name='humanoid_root'/> visualization sphere is placed within <HAnimSegment name='sacrum'/>
CTouchSensor* TouchSensor50 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor50->setDescription("HAnimJoint HumanoidRoot, HAnimSegment sacrum");
HAnimSegment49->addChildren(TouchSensor50);

CTransform* Transform51 = (CTransform *)m_pScene.createNode("Transform");
Transform51->setTranslation(new float[3]{0,0.824,0.0277});
CShape* Shape52 = (CShape *)m_pScene.createNode("Shape");
Shape52->setDEF("HAnimJointShape");
CSphere* Sphere53 = (CSphere *)m_pScene.createNode("Sphere");
Sphere53->setRadius(0.006);
Shape52->setGeometry(Sphere53);

CAppearance* Appearance54 = (CAppearance *)m_pScene.createNode("Appearance");
Appearance54->setDEF("HAnimJointAppearance");
CMaterial* Material55 = (CMaterial *)m_pScene.createNode("Material");
Material55->setDiffuseColor(new float[3]{1,0.5,0});
Material55->setTransparency(0.5);
Appearance54->setMaterial(Material55);

Shape52->setAppearance(Appearance54);

Transform51->addChildren(Shape52);

HAnimSegment49->addChildren(Transform51);

//HAnimSegment visualization line segment from parent <HAnimJoint name='humanoid_root'/> to <HAnimJoint name='sacroiliac'/>
CShape* Shape56 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet57 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet57->setVertexCount(new int[1]{2});
CCoordinate* Coordinate58 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate58->setPoint(new float[6]{0,0.824,0.0277,0,0.9149,0.0016});
LineSet57->setCoord(Coordinate58);

CColorRGBA* ColorRGBA59 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA59->setDEF("HAnimSegmentLineColorRGBA");
ColorRGBA59->setColor(new float[8]{1,1,0,1,1,1,0,0.1});
LineSet57->setColor(ColorRGBA59);

Shape56->setGeometry(LineSet57);

HAnimSegment49->addChildren(Shape56);

//HAnimSegment visualization line segment from parent <HAnimJoint name='humanoid_root'/> to <HAnimJoint name='vl5'/>
CShape* Shape60 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet61 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet61->setVertexCount(new int[1]{2});
CCoordinate* Coordinate62 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate62->setPoint(new float[6]{0,0.824,0.0277,0.0028,1.0568,-0.0776});
LineSet61->setCoord(Coordinate62);

CColorRGBA* ColorRGBA63 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA63->setUSE("HAnimSegmentLineColorRGBA");
LineSet61->setColor(ColorRGBA63);

Shape60->setGeometry(LineSet61);

HAnimSegment49->addChildren(Shape60);

HAnimJoint48->addChildren(HAnimSegment49);

CHAnimJoint* HAnimJoint64 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint64->setName("sacroiliac");
HAnimJoint64->setDEF("hanim_sacroiliac");
HAnimJoint64->setCenter(new float[3]{0,0.9149,0.0016});
HAnimJoint64->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment65 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment65->setName("pelvis");
HAnimSegment65->setDEF("hanim_pelvis");
//<HAnimJoint name='sacroiliac'/> visualization sphere is placed within <HAnimSegment name='pelvis'/>
CTouchSensor* TouchSensor66 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor66->setDescription("HAnimJoint sacroiliac, HAnimSegment pelvis");
HAnimSegment65->addChildren(TouchSensor66);

CTransform* Transform67 = (CTransform *)m_pScene.createNode("Transform");
Transform67->setTranslation(new float[3]{0,0.9149,0.0016});
CShape* Shape68 = (CShape *)m_pScene.createNode("Shape");
Shape68->setUSE("HAnimJointShape");
Transform67->addChildren(Shape68);

HAnimSegment65->addChildren(Transform67);

//HAnimSegment visualization line segment from parent <HAnimJoint name='sacroiliac'/> to <HAnimJoint name='l_hip'/>
CShape* Shape69 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet70 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet70->setVertexCount(new int[1]{2});
CCoordinate* Coordinate71 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate71->setPoint(new float[6]{0,0.9149,0.0016,0.0961,0.9124,-0.0001});
LineSet70->setCoord(Coordinate71);

CColorRGBA* ColorRGBA72 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA72->setUSE("HAnimSegmentLineColorRGBA");
LineSet70->setColor(ColorRGBA72);

Shape69->setGeometry(LineSet70);

HAnimSegment65->addChildren(Shape69);

//HAnimSegment visualization line segment from parent <HAnimJoint name='sacroiliac'/> to <HAnimJoint name='r_hip'/>
CShape* Shape73 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet74 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet74->setVertexCount(new int[1]{2});
CCoordinate* Coordinate75 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate75->setPoint(new float[6]{0,0.9149,0.0016,-0.0961,0.9124,-0.0001});
LineSet74->setCoord(Coordinate75);

CColorRGBA* ColorRGBA76 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA76->setUSE("HAnimSegmentLineColorRGBA");
LineSet74->setColor(ColorRGBA76);

Shape73->setGeometry(LineSet74);

HAnimSegment65->addChildren(Shape73);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_iliocristale'/>
CShape* Shape77 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet78 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet78->setVertexCount(new int[1]{2});
CCoordinate* Coordinate79 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate79->setPoint(new float[6]{0,0.9149,0.0016,-0.1525,1.0628,0.0035});
LineSet78->setCoord(Coordinate79);

CColorRGBA* ColorRGBA80 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA80->setDEF("HAnimSiteLineColorRGBA");
ColorRGBA80->setColor(new float[8]{1,0,0,1,1,0,0,0.1});
LineSet78->setColor(ColorRGBA80);

Shape77->setGeometry(LineSet78);

HAnimSegment65->addChildren(Shape77);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_trochanterion'/>
CShape* Shape81 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet82 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet82->setVertexCount(new int[1]{2});
CCoordinate* Coordinate83 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate83->setPoint(new float[6]{0,0.9149,0.0016,-0.1689,0.8419,0.0352});
LineSet82->setCoord(Coordinate83);

CColorRGBA* ColorRGBA84 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA84->setUSE("HAnimSiteLineColorRGBA");
LineSet82->setColor(ColorRGBA84);

Shape81->setGeometry(LineSet82);

HAnimSegment65->addChildren(Shape81);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_iliocristale'/>
CShape* Shape85 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet86 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet86->setVertexCount(new int[1]{2});
CCoordinate* Coordinate87 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate87->setPoint(new float[6]{0,0.9149,0.0016,0.1612,1.0537,0.0008});
LineSet86->setCoord(Coordinate87);

CColorRGBA* ColorRGBA88 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA88->setUSE("HAnimSiteLineColorRGBA");
LineSet86->setColor(ColorRGBA88);

Shape85->setGeometry(LineSet86);

HAnimSegment65->addChildren(Shape85);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_trochanterion'/>
CShape* Shape89 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet90 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet90->setVertexCount(new int[1]{2});
CCoordinate* Coordinate91 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate91->setPoint(new float[6]{0,0.9149,0.0016,0.1677,0.8336,0.0303});
LineSet90->setCoord(Coordinate91);

CColorRGBA* ColorRGBA92 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA92->setUSE("HAnimSiteLineColorRGBA");
LineSet90->setColor(ColorRGBA92);

Shape89->setGeometry(LineSet90);

HAnimSegment65->addChildren(Shape89);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_asis'/>
CShape* Shape93 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet94 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet94->setVertexCount(new int[1]{2});
CCoordinate* Coordinate95 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate95->setPoint(new float[6]{0,0.9149,0.0016,-0.0887,1.0021,0.1112});
LineSet94->setCoord(Coordinate95);

CColorRGBA* ColorRGBA96 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA96->setUSE("HAnimSiteLineColorRGBA");
LineSet94->setColor(ColorRGBA96);

Shape93->setGeometry(LineSet94);

HAnimSegment65->addChildren(Shape93);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_asis'/>
CShape* Shape97 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet98 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet98->setVertexCount(new int[1]{2});
CCoordinate* Coordinate99 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate99->setPoint(new float[6]{0,0.9149,0.0016,0.0925,0.9983,0.1052});
LineSet98->setCoord(Coordinate99);

CColorRGBA* ColorRGBA100 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA100->setUSE("HAnimSiteLineColorRGBA");
LineSet98->setColor(ColorRGBA100);

Shape97->setGeometry(LineSet98);

HAnimSegment65->addChildren(Shape97);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_psis'/>
CShape* Shape101 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet102 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet102->setVertexCount(new int[1]{2});
CCoordinate* Coordinate103 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate103->setPoint(new float[6]{0,0.9149,0.0016,-0.0716,1.019,-0.1138});
LineSet102->setCoord(Coordinate103);

CColorRGBA* ColorRGBA104 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA104->setUSE("HAnimSiteLineColorRGBA");
LineSet102->setColor(ColorRGBA104);

Shape101->setGeometry(LineSet102);

HAnimSegment65->addChildren(Shape101);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_psis'/>
CShape* Shape105 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet106 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet106->setVertexCount(new int[1]{2});
CCoordinate* Coordinate107 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate107->setPoint(new float[6]{0,0.9149,0.0016,0.0774,1.019,-0.1151});
LineSet106->setCoord(Coordinate107);

CColorRGBA* ColorRGBA108 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA108->setUSE("HAnimSiteLineColorRGBA");
LineSet106->setColor(ColorRGBA108);

Shape105->setGeometry(LineSet106);

HAnimSegment65->addChildren(Shape105);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='crotch'/>
CShape* Shape109 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet110 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet110->setVertexCount(new int[1]{2});
CCoordinate* Coordinate111 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate111->setPoint(new float[6]{0,0.9149,0.0016,0.0034,0.8266,0.0257});
LineSet110->setCoord(Coordinate111);

CColorRGBA* ColorRGBA112 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA112->setUSE("HAnimSiteLineColorRGBA");
LineSet110->setColor(ColorRGBA112);

Shape109->setGeometry(LineSet110);

HAnimSegment65->addChildren(Shape109);

CHAnimSite* HAnimSite113 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite113->setName("r_iliocristale_pt");
HAnimSite113->setDEF("hanim_r_iliocristale_pt");
HAnimSite113->setTranslation(new float[3]{-0.1525,1.0628,0.0035});
//HAnimSite visualization shape
CTouchSensor* TouchSensor114 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor114->setDescription("HAnimSite r_iliocristale");
HAnimSite113->addChildren(TouchSensor114);

CShape* Shape115 = (CShape *)m_pScene.createNode("Shape");
Shape115->setDEF("HAnimSiteShape");
CIndexedFaceSet* IndexedFaceSet116 = (CIndexedFaceSet *)m_pScene.createNode("IndexedFaceSet");
IndexedFaceSet116->setDEF("DiamondIFS");
IndexedFaceSet116->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet116->setCreaseAngle(0.5);
IndexedFaceSet116->setSolid(False);
CCoordinate* Coordinate117 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate117->setPoint(new float[18]{0,0.008,0,-0.008,0,0,0,0,0.008,0.008,0,0,0,0,-0.008,0,-0.008,0});
IndexedFaceSet116->setCoord(Coordinate117);

Shape115->setGeometry(IndexedFaceSet116);

CAppearance* Appearance118 = (CAppearance *)m_pScene.createNode("Appearance");
CMaterial* Material119 = (CMaterial *)m_pScene.createNode("Material");
Material119->setDiffuseColor(new float[3]{1,0,0});
Appearance118->setMaterial(Material119);

Shape115->setAppearance(Appearance118);

HAnimSite113->addChildren(Shape115);

HAnimSegment65->addChildren(HAnimSite113);

CHAnimSite* HAnimSite120 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite120->setName("r_trochanterion_pt");
HAnimSite120->setDEF("hanim_r_trochanterion_pt");
HAnimSite120->setTranslation(new float[3]{-0.1689,0.8419,0.0352});
//HAnimSite visualization shape
CTouchSensor* TouchSensor121 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor121->setDescription("HAnimSite r_trochanterion");
HAnimSite120->addChildren(TouchSensor121);

CShape* Shape122 = (CShape *)m_pScene.createNode("Shape");
Shape122->setUSE("HAnimSiteShape");
HAnimSite120->addChildren(Shape122);

HAnimSegment65->addChildren(HAnimSite120);

CHAnimSite* HAnimSite123 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite123->setName("l_iliocristale_pt");
HAnimSite123->setDEF("hanim_l_iliocristale_pt");
HAnimSite123->setTranslation(new float[3]{0.1612,1.0537,0.0008});
//HAnimSite visualization shape
CTouchSensor* TouchSensor124 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor124->setDescription("HAnimSite l_iliocristale");
HAnimSite123->addChildren(TouchSensor124);

CShape* Shape125 = (CShape *)m_pScene.createNode("Shape");
Shape125->setUSE("HAnimSiteShape");
HAnimSite123->addChildren(Shape125);

HAnimSegment65->addChildren(HAnimSite123);

CHAnimSite* HAnimSite126 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite126->setName("l_trochanterion_pt");
HAnimSite126->setDEF("hanim_l_trochanterion_pt");
HAnimSite126->setTranslation(new float[3]{0.1677,0.8336,0.0303});
//HAnimSite visualization shape
CTouchSensor* TouchSensor127 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor127->setDescription("HAnimSite l_trochanterion");
HAnimSite126->addChildren(TouchSensor127);

CShape* Shape128 = (CShape *)m_pScene.createNode("Shape");
Shape128->setUSE("HAnimSiteShape");
HAnimSite126->addChildren(Shape128);

HAnimSegment65->addChildren(HAnimSite126);

CHAnimSite* HAnimSite129 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite129->setName("r_asis_pt");
HAnimSite129->setDEF("hanim_r_asis_pt");
HAnimSite129->setTranslation(new float[3]{-0.0887,1.0021,0.1112});
//HAnimSite visualization shape
CTouchSensor* TouchSensor130 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor130->setDescription("HAnimSite r_asis");
HAnimSite129->addChildren(TouchSensor130);

CShape* Shape131 = (CShape *)m_pScene.createNode("Shape");
Shape131->setUSE("HAnimSiteShape");
HAnimSite129->addChildren(Shape131);

HAnimSegment65->addChildren(HAnimSite129);

CHAnimSite* HAnimSite132 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite132->setName("l_asis_pt");
HAnimSite132->setDEF("hanim_l_asis_pt");
HAnimSite132->setTranslation(new float[3]{0.0925,0.9983,0.1052});
//HAnimSite visualization shape
CTouchSensor* TouchSensor133 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor133->setDescription("HAnimSite l_asis");
HAnimSite132->addChildren(TouchSensor133);

CShape* Shape134 = (CShape *)m_pScene.createNode("Shape");
Shape134->setUSE("HAnimSiteShape");
HAnimSite132->addChildren(Shape134);

HAnimSegment65->addChildren(HAnimSite132);

CHAnimSite* HAnimSite135 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite135->setName("r_psis_pt");
HAnimSite135->setDEF("hanim_r_psis_pt");
HAnimSite135->setTranslation(new float[3]{-0.0716,1.019,-0.1138});
//HAnimSite visualization shape
CTouchSensor* TouchSensor136 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor136->setDescription("HAnimSite r_psis");
HAnimSite135->addChildren(TouchSensor136);

CShape* Shape137 = (CShape *)m_pScene.createNode("Shape");
Shape137->setUSE("HAnimSiteShape");
HAnimSite135->addChildren(Shape137);

HAnimSegment65->addChildren(HAnimSite135);

CHAnimSite* HAnimSite138 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite138->setName("l_psis_pt");
HAnimSite138->setDEF("hanim_l_psis_pt");
HAnimSite138->setTranslation(new float[3]{0.0774,1.019,-0.1151});
//HAnimSite visualization shape
CTouchSensor* TouchSensor139 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor139->setDescription("HAnimSite l_psis");
HAnimSite138->addChildren(TouchSensor139);

CShape* Shape140 = (CShape *)m_pScene.createNode("Shape");
Shape140->setUSE("HAnimSiteShape");
HAnimSite138->addChildren(Shape140);

HAnimSegment65->addChildren(HAnimSite138);

CHAnimSite* HAnimSite141 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite141->setName("crotch_pt");
HAnimSite141->setDEF("hanim_crotch_pt");
HAnimSite141->setTranslation(new float[3]{0.0034,0.8266,0.0257});
//HAnimSite visualization shape
CTouchSensor* TouchSensor142 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor142->setDescription("HAnimSite crotch");
HAnimSite141->addChildren(TouchSensor142);

CShape* Shape143 = (CShape *)m_pScene.createNode("Shape");
Shape143->setUSE("HAnimSiteShape");
HAnimSite141->addChildren(Shape143);

HAnimSegment65->addChildren(HAnimSite141);

HAnimJoint64->addChildren(HAnimSegment65);

CHAnimJoint* HAnimJoint144 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint144->setName("l_hip");
HAnimJoint144->setDEF("hanim_l_hip");
HAnimJoint144->setCenter(new float[3]{0.0961,0.9124,-0.0001});
HAnimJoint144->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment145 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment145->setName("l_thigh");
HAnimSegment145->setDEF("hanim_l_thigh");
//<HAnimJoint name='l_hip'/> visualization sphere is placed within <HAnimSegment name='l_thigh'/>
CTouchSensor* TouchSensor146 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor146->setDescription("HAnimJoint l_hip, HAnimSegment l_thigh");
HAnimSegment145->addChildren(TouchSensor146);

CTransform* Transform147 = (CTransform *)m_pScene.createNode("Transform");
Transform147->setTranslation(new float[3]{0.0961,0.9124,-0.0001});
CShape* Shape148 = (CShape *)m_pScene.createNode("Shape");
Shape148->setUSE("HAnimJointShape");
Transform147->addChildren(Shape148);

HAnimSegment145->addChildren(Transform147);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_hip'/> to <HAnimJoint name='l_knee'/>
CShape* Shape149 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet150 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet150->setVertexCount(new int[1]{2});
CCoordinate* Coordinate151 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate151->setPoint(new float[6]{0.0961,0.9124,-0.0001,0.104,0.4867,0.0308});
LineSet150->setCoord(Coordinate151);

CColorRGBA* ColorRGBA152 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA152->setUSE("HAnimSegmentLineColorRGBA");
LineSet150->setColor(ColorRGBA152);

Shape149->setGeometry(LineSet150);

HAnimSegment145->addChildren(Shape149);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_knee_crease'/>
CShape* Shape153 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet154 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet154->setVertexCount(new int[1]{2});
CCoordinate* Coordinate155 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate155->setPoint(new float[6]{0.0961,0.9124,-0.0001,0.0993,0.4881,-0.0309});
LineSet154->setCoord(Coordinate155);

CColorRGBA* ColorRGBA156 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA156->setUSE("HAnimSiteLineColorRGBA");
LineSet154->setColor(ColorRGBA156);

Shape153->setGeometry(LineSet154);

HAnimSegment145->addChildren(Shape153);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_lateral_epicn'/>
CShape* Shape157 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet158 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet158->setVertexCount(new int[1]{2});
CCoordinate* Coordinate159 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate159->setPoint(new float[6]{0.0961,0.9124,-0.0001,0.1598,0.4967,0.0297});
LineSet158->setCoord(Coordinate159);

CColorRGBA* ColorRGBA160 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA160->setUSE("HAnimSiteLineColorRGBA");
LineSet158->setColor(ColorRGBA160);

Shape157->setGeometry(LineSet158);

HAnimSegment145->addChildren(Shape157);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_medial_epicn'/>
CShape* Shape161 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet162 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet162->setVertexCount(new int[1]{2});
CCoordinate* Coordinate163 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate163->setPoint(new float[6]{0.0961,0.9124,-0.0001,0.0398,0.4946,0.0303});
LineSet162->setCoord(Coordinate163);

CColorRGBA* ColorRGBA164 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA164->setUSE("HAnimSiteLineColorRGBA");
LineSet162->setColor(ColorRGBA164);

Shape161->setGeometry(LineSet162);

HAnimSegment145->addChildren(Shape161);

CHAnimSite* HAnimSite165 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite165->setName("l_knee_crease_pt");
HAnimSite165->setDEF("hanim_l_knee_crease_pt");
HAnimSite165->setTranslation(new float[3]{0.0993,0.4881,-0.0309});
//HAnimSite visualization shape
CTouchSensor* TouchSensor166 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor166->setDescription("HAnimSite l_knee_crease");
HAnimSite165->addChildren(TouchSensor166);

CShape* Shape167 = (CShape *)m_pScene.createNode("Shape");
Shape167->setUSE("HAnimSiteShape");
HAnimSite165->addChildren(Shape167);

HAnimSegment145->addChildren(HAnimSite165);

CHAnimSite* HAnimSite168 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite168->setName("l_femoral_lateral_epicn_pt");
HAnimSite168->setDEF("hanim_l_femoral_lateral_epicn_pt");
HAnimSite168->setTranslation(new float[3]{0.1598,0.4967,0.0297});
//HAnimSite visualization shape
CTouchSensor* TouchSensor169 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor169->setDescription("HAnimSite l_femoral_lateral_epicn");
HAnimSite168->addChildren(TouchSensor169);

CShape* Shape170 = (CShape *)m_pScene.createNode("Shape");
Shape170->setUSE("HAnimSiteShape");
HAnimSite168->addChildren(Shape170);

HAnimSegment145->addChildren(HAnimSite168);

CHAnimSite* HAnimSite171 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite171->setName("l_femoral_medial_epicn_pt");
HAnimSite171->setDEF("hanim_l_femoral_medial_epicn_pt");
HAnimSite171->setTranslation(new float[3]{0.0398,0.4946,0.0303});
//HAnimSite visualization shape
CTouchSensor* TouchSensor172 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor172->setDescription("HAnimSite l_femoral_medial_epicn");
HAnimSite171->addChildren(TouchSensor172);

CShape* Shape173 = (CShape *)m_pScene.createNode("Shape");
Shape173->setUSE("HAnimSiteShape");
HAnimSite171->addChildren(Shape173);

HAnimSegment145->addChildren(HAnimSite171);

HAnimJoint144->addChildren(HAnimSegment145);

CHAnimJoint* HAnimJoint174 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint174->setName("l_knee");
HAnimJoint174->setDEF("hanim_l_knee");
HAnimJoint174->setCenter(new float[3]{0.104,0.4867,0.0308});
HAnimJoint174->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment175 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment175->setName("l_calf");
HAnimSegment175->setDEF("hanim_l_calf");
//<HAnimJoint name='l_knee'/> visualization sphere is placed within <HAnimSegment name='l_calf'/>
CTouchSensor* TouchSensor176 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor176->setDescription("HAnimJoint l_knee, HAnimSegment l_calf");
HAnimSegment175->addChildren(TouchSensor176);

CTransform* Transform177 = (CTransform *)m_pScene.createNode("Transform");
Transform177->setTranslation(new float[3]{0.104,0.4867,0.0308});
CShape* Shape178 = (CShape *)m_pScene.createNode("Shape");
Shape178->setUSE("HAnimJointShape");
Transform177->addChildren(Shape178);

HAnimSegment175->addChildren(Transform177);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_knee'/> to <HAnimJoint name='l_ankle'/>
CShape* Shape179 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet180 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet180->setVertexCount(new int[1]{2});
CCoordinate* Coordinate181 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate181->setPoint(new float[6]{0.104,0.4867,0.0308,0.1101,0.0656,-0.0736});
LineSet180->setCoord(Coordinate181);

CColorRGBA* ColorRGBA182 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA182->setUSE("HAnimSegmentLineColorRGBA");
LineSet180->setColor(ColorRGBA182);

Shape179->setGeometry(LineSet180);

HAnimSegment175->addChildren(Shape179);

HAnimJoint174->addChildren(HAnimSegment175);

CHAnimJoint* HAnimJoint183 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint183->setName("l_ankle");
HAnimJoint183->setDEF("hanim_l_ankle");
HAnimJoint183->setCenter(new float[3]{0.1101,0.0656,-0.0736});
HAnimJoint183->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment184 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment184->setName("l_hindfoot");
HAnimSegment184->setDEF("hanim_l_hindfoot");
//<HAnimJoint name='l_ankle'/> visualization sphere is placed within <HAnimSegment name='l_hindfoot'/>
CTouchSensor* TouchSensor185 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor185->setDescription("HAnimJoint l_ankle, HAnimSegment l_hindfoot");
HAnimSegment184->addChildren(TouchSensor185);

CTransform* Transform186 = (CTransform *)m_pScene.createNode("Transform");
Transform186->setTranslation(new float[3]{0.1101,0.0656,-0.0736});
CShape* Shape187 = (CShape *)m_pScene.createNode("Shape");
Shape187->setUSE("HAnimJointShape");
Transform186->addChildren(Shape187);

HAnimSegment184->addChildren(Transform186);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ankle'/> to <HAnimJoint name='l_subtalar'/>
CShape* Shape188 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet189 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet189->setVertexCount(new int[1]{2});
CCoordinate* Coordinate190 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate190->setPoint(new float[6]{0.1101,0.0656,-0.0736,0.1086,0.0001,-0.0368});
LineSet189->setCoord(Coordinate190);

CColorRGBA* ColorRGBA191 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA191->setUSE("HAnimSegmentLineColorRGBA");
LineSet189->setColor(ColorRGBA191);

Shape188->setGeometry(LineSet189);

HAnimSegment184->addChildren(Shape188);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_lateral_malleolus'/>
CShape* Shape192 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet193 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet193->setVertexCount(new int[1]{2});
CCoordinate* Coordinate194 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate194->setPoint(new float[6]{0.1101,0.0656,-0.0736,0.1308,0.0597,-0.1032});
LineSet193->setCoord(Coordinate194);

CColorRGBA* ColorRGBA195 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA195->setUSE("HAnimSiteLineColorRGBA");
LineSet193->setColor(ColorRGBA195);

Shape192->setGeometry(LineSet193);

HAnimSegment184->addChildren(Shape192);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_medial_malleolus'/>
CShape* Shape196 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet197 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet197->setVertexCount(new int[1]{2});
CCoordinate* Coordinate198 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate198->setPoint(new float[6]{0.1101,0.0656,-0.0736,0.089,0.0716,-0.0881});
LineSet197->setCoord(Coordinate198);

CColorRGBA* ColorRGBA199 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA199->setUSE("HAnimSiteLineColorRGBA");
LineSet197->setColor(ColorRGBA199);

Shape196->setGeometry(LineSet197);

HAnimSegment184->addChildren(Shape196);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_sphyrion'/>
CShape* Shape200 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet201 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet201->setVertexCount(new int[1]{2});
CCoordinate* Coordinate202 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate202->setPoint(new float[6]{0.1101,0.0656,-0.0736,0.089,0.0575,-0.0943});
LineSet201->setCoord(Coordinate202);

CColorRGBA* ColorRGBA203 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA203->setUSE("HAnimSiteLineColorRGBA");
LineSet201->setColor(ColorRGBA203);

Shape200->setGeometry(LineSet201);

HAnimSegment184->addChildren(Shape200);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_calcaneous_post'/>
CShape* Shape204 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet205 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet205->setVertexCount(new int[1]{2});
CCoordinate* Coordinate206 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate206->setPoint(new float[6]{0.1101,0.0656,-0.0736,0.0974,0.0259,-0.1171});
LineSet205->setCoord(Coordinate206);

CColorRGBA* ColorRGBA207 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA207->setUSE("HAnimSiteLineColorRGBA");
LineSet205->setColor(ColorRGBA207);

Shape204->setGeometry(LineSet205);

HAnimSegment184->addChildren(Shape204);

CHAnimSite* HAnimSite208 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite208->setName("l_lateral_malleolus_pt");
HAnimSite208->setDEF("hanim_l_lateral_malleolus_pt");
HAnimSite208->setTranslation(new float[3]{0.1308,0.0597,-0.1032});
//HAnimSite visualization shape
CTouchSensor* TouchSensor209 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor209->setDescription("HAnimSite l_lateral_malleolus");
HAnimSite208->addChildren(TouchSensor209);

CShape* Shape210 = (CShape *)m_pScene.createNode("Shape");
Shape210->setUSE("HAnimSiteShape");
HAnimSite208->addChildren(Shape210);

HAnimSegment184->addChildren(HAnimSite208);

CHAnimSite* HAnimSite211 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite211->setName("l_medial_malleolus_pt");
HAnimSite211->setDEF("hanim_l_medial_malleolus_pt");
HAnimSite211->setTranslation(new float[3]{0.089,0.0716,-0.0881});
//HAnimSite visualization shape
CTouchSensor* TouchSensor212 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor212->setDescription("HAnimSite l_medial_malleolus");
HAnimSite211->addChildren(TouchSensor212);

CShape* Shape213 = (CShape *)m_pScene.createNode("Shape");
Shape213->setUSE("HAnimSiteShape");
HAnimSite211->addChildren(Shape213);

HAnimSegment184->addChildren(HAnimSite211);

CHAnimSite* HAnimSite214 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite214->setName("l_sphyrion_pt");
HAnimSite214->setDEF("hanim_l_sphyrion_pt");
HAnimSite214->setTranslation(new float[3]{0.089,0.0575,-0.0943});
//HAnimSite visualization shape
CTouchSensor* TouchSensor215 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor215->setDescription("HAnimSite l_sphyrion");
HAnimSite214->addChildren(TouchSensor215);

CShape* Shape216 = (CShape *)m_pScene.createNode("Shape");
Shape216->setUSE("HAnimSiteShape");
HAnimSite214->addChildren(Shape216);

HAnimSegment184->addChildren(HAnimSite214);

CHAnimSite* HAnimSite217 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite217->setName("l_calcaneous_post_pt");
HAnimSite217->setDEF("hanim_l_calcaneous_post_pt");
HAnimSite217->setTranslation(new float[3]{0.0974,0.0259,-0.1171});
//HAnimSite visualization shape
CTouchSensor* TouchSensor218 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor218->setDescription("HAnimSite l_calcaneous_post");
HAnimSite217->addChildren(TouchSensor218);

CShape* Shape219 = (CShape *)m_pScene.createNode("Shape");
Shape219->setUSE("HAnimSiteShape");
HAnimSite217->addChildren(Shape219);

HAnimSegment184->addChildren(HAnimSite217);

HAnimJoint183->addChildren(HAnimSegment184);

CHAnimJoint* HAnimJoint220 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint220->setName("l_subtalar");
HAnimJoint220->setDEF("hanim_l_subtalar");
HAnimJoint220->setCenter(new float[3]{0.1086,0.0001,-0.0368});
HAnimJoint220->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment221 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment221->setName("l_midproximal");
HAnimSegment221->setDEF("hanim_l_midproximal");
//<HAnimJoint name='l_subtalar'/> visualization sphere is placed within <HAnimSegment name='l_midproximal'/>
CTouchSensor* TouchSensor222 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor222->setDescription("HAnimJoint l_subtalar, HAnimSegment l_midproximal");
HAnimSegment221->addChildren(TouchSensor222);

CTransform* Transform223 = (CTransform *)m_pScene.createNode("Transform");
Transform223->setTranslation(new float[3]{0.1086,0.0001,-0.0368});
CShape* Shape224 = (CShape *)m_pScene.createNode("Shape");
Shape224->setUSE("HAnimJointShape");
Transform223->addChildren(Shape224);

HAnimSegment221->addChildren(Transform223);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_subtalar'/> to <HAnimJoint name='l_midtarsal'/>
CShape* Shape225 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet226 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet226->setVertexCount(new int[1]{2});
CCoordinate* Coordinate227 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate227->setPoint(new float[6]{0.1086,0.0001,-0.0368,0.1086,0.0001,0.0368});
LineSet226->setCoord(Coordinate227);

CColorRGBA* ColorRGBA228 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA228->setUSE("HAnimSegmentLineColorRGBA");
LineSet226->setColor(ColorRGBA228);

Shape225->setGeometry(LineSet226);

HAnimSegment221->addChildren(Shape225);

HAnimJoint220->addChildren(HAnimSegment221);

CHAnimJoint* HAnimJoint229 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint229->setName("l_midtarsal");
HAnimJoint229->setDEF("hanim_l_midtarsal");
HAnimJoint229->setCenter(new float[3]{0.1086,0.0001,0.0368});
HAnimJoint229->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment230 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment230->setName("l_middistal");
HAnimSegment230->setDEF("hanim_l_middistal");
//<HAnimJoint name='l_midtarsal'/> visualization sphere is placed within <HAnimSegment name='l_middistal'/>
CTouchSensor* TouchSensor231 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor231->setDescription("HAnimJoint l_midtarsal, HAnimSegment l_middistal");
HAnimSegment230->addChildren(TouchSensor231);

CTransform* Transform232 = (CTransform *)m_pScene.createNode("Transform");
Transform232->setTranslation(new float[3]{0.1086,0.0001,0.0368});
CShape* Shape233 = (CShape *)m_pScene.createNode("Shape");
Shape233->setUSE("HAnimJointShape");
Transform232->addChildren(Shape233);

HAnimSegment230->addChildren(Transform232);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_midtarsal'/> to <HAnimJoint name='l_metatarsal'/>
CShape* Shape234 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet235 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet235->setVertexCount(new int[1]{2});
CCoordinate* Coordinate236 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate236->setPoint(new float[6]{0.1086,0.0001,0.0368,0.1086,0,0.0762});
LineSet235->setCoord(Coordinate236);

CColorRGBA* ColorRGBA237 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA237->setUSE("HAnimSegmentLineColorRGBA");
LineSet235->setColor(ColorRGBA237);

Shape234->setGeometry(LineSet235);

HAnimSegment230->addChildren(Shape234);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_midtarsal'/> to <HAnimSite name='l_metatarsal_pha1'/>
CShape* Shape238 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet239 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet239->setVertexCount(new int[1]{2});
CCoordinate* Coordinate240 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate240->setPoint(new float[6]{0.1086,0.0001,0.0368,0.0816,0.0232,0.0106});
LineSet239->setCoord(Coordinate240);

CColorRGBA* ColorRGBA241 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA241->setUSE("HAnimSiteLineColorRGBA");
LineSet239->setColor(ColorRGBA241);

Shape238->setGeometry(LineSet239);

HAnimSegment230->addChildren(Shape238);

CHAnimSite* HAnimSite242 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite242->setName("l_metatarsal_pha1_pt");
HAnimSite242->setDEF("hanim_l_metatarsal_pha1_pt");
HAnimSite242->setTranslation(new float[3]{0.0816,0.0232,0.0106});
//HAnimSite visualization shape
CTouchSensor* TouchSensor243 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor243->setDescription("HAnimSite l_metatarsal_pha1");
HAnimSite242->addChildren(TouchSensor243);

CShape* Shape244 = (CShape *)m_pScene.createNode("Shape");
Shape244->setUSE("HAnimSiteShape");
HAnimSite242->addChildren(Shape244);

HAnimSegment230->addChildren(HAnimSite242);

HAnimJoint229->addChildren(HAnimSegment230);

CHAnimJoint* HAnimJoint245 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint245->setName("l_metatarsal");
HAnimJoint245->setDEF("hanim_l_metatarsal");
HAnimJoint245->setCenter(new float[3]{0.1086,0,0.0762});
HAnimJoint245->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment246 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment246->setName("l_forefoot");
HAnimSegment246->setDEF("hanim_l_forefoot");
//<HAnimJoint name='l_metatarsal'/> visualization sphere is placed within <HAnimSegment name='l_forefoot'/>
CTouchSensor* TouchSensor247 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor247->setDescription("HAnimJoint l_metatarsal, HAnimSegment l_forefoot");
HAnimSegment246->addChildren(TouchSensor247);

CTransform* Transform248 = (CTransform *)m_pScene.createNode("Transform");
Transform248->setTranslation(new float[3]{0.1086,0,0.0762});
CShape* Shape249 = (CShape *)m_pScene.createNode("Shape");
Shape249->setUSE("HAnimJointShape");
Transform248->addChildren(Shape249);

HAnimSegment246->addChildren(Transform248);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_forefoot_tip'/>
CShape* Shape250 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet251 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet251->setVertexCount(new int[1]{2});
CCoordinate* Coordinate252 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate252->setPoint(new float[6]{0.1086,0,0.0762,0.1354,0.0016,0.1476});
LineSet251->setCoord(Coordinate252);

CColorRGBA* ColorRGBA253 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA253->setUSE("HAnimSiteLineColorRGBA");
LineSet251->setColor(ColorRGBA253);

Shape250->setGeometry(LineSet251);

HAnimSegment246->addChildren(Shape250);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_metatarsal_pha5'/>
CShape* Shape254 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet255 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet255->setVertexCount(new int[1]{2});
CCoordinate* Coordinate256 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate256->setPoint(new float[6]{0.1086,0,0.0762,0.1825,0.007,0.0928});
LineSet255->setCoord(Coordinate256);

CColorRGBA* ColorRGBA257 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA257->setUSE("HAnimSiteLineColorRGBA");
LineSet255->setColor(ColorRGBA257);

Shape254->setGeometry(LineSet255);

HAnimSegment246->addChildren(Shape254);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_digit2'/>
CShape* Shape258 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet259 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet259->setVertexCount(new int[1]{2});
CCoordinate* Coordinate260 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate260->setPoint(new float[6]{0.1086,0,0.0762,0.1195,0.0079,0.1433});
LineSet259->setCoord(Coordinate260);

CColorRGBA* ColorRGBA261 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA261->setUSE("HAnimSiteLineColorRGBA");
LineSet259->setColor(ColorRGBA261);

Shape258->setGeometry(LineSet259);

HAnimSegment246->addChildren(Shape258);

CHAnimSite* HAnimSite262 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite262->setName("l_forefoot_tip");
HAnimSite262->setDEF("hanim_l_forefoot_tip");
HAnimSite262->setTranslation(new float[3]{0.1354,0.0016,0.1476});
//HAnimSite visualization shape
CTouchSensor* TouchSensor263 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor263->setDescription("HAnimSite l_forefoot_tip");
HAnimSite262->addChildren(TouchSensor263);

CShape* Shape264 = (CShape *)m_pScene.createNode("Shape");
Shape264->setUSE("HAnimSiteShape");
HAnimSite262->addChildren(Shape264);

HAnimSegment246->addChildren(HAnimSite262);

CHAnimSite* HAnimSite265 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite265->setName("l_metatarsal_pha5_pt");
HAnimSite265->setDEF("hanim_l_metatarsal_pha5_pt");
HAnimSite265->setTranslation(new float[3]{0.1825,0.007,0.0928});
//HAnimSite visualization shape
CTouchSensor* TouchSensor266 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor266->setDescription("HAnimSite l_metatarsal_pha5");
HAnimSite265->addChildren(TouchSensor266);

CShape* Shape267 = (CShape *)m_pScene.createNode("Shape");
Shape267->setUSE("HAnimSiteShape");
HAnimSite265->addChildren(Shape267);

HAnimSegment246->addChildren(HAnimSite265);

CHAnimSite* HAnimSite268 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite268->setName("l_digit2_pt");
HAnimSite268->setDEF("hanim_l_digit2_pt");
HAnimSite268->setTranslation(new float[3]{0.1195,0.0079,0.1433});
//HAnimSite visualization shape
CTouchSensor* TouchSensor269 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor269->setDescription("HAnimSite l_digit2");
HAnimSite268->addChildren(TouchSensor269);

CShape* Shape270 = (CShape *)m_pScene.createNode("Shape");
Shape270->setUSE("HAnimSiteShape");
HAnimSite268->addChildren(Shape270);

HAnimSegment246->addChildren(HAnimSite268);

HAnimJoint245->addChildren(HAnimSegment246);

HAnimJoint229->addChildren(HAnimJoint245);

HAnimJoint220->addChildren(HAnimJoint229);

HAnimJoint183->addChildren(HAnimJoint220);

HAnimJoint174->addChildren(HAnimJoint183);

HAnimJoint144->addChildren(HAnimJoint174);

HAnimJoint64->addChildren(HAnimJoint144);

CHAnimJoint* HAnimJoint271 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint271->setName("r_hip");
HAnimJoint271->setDEF("hanim_r_hip");
HAnimJoint271->setCenter(new float[3]{-0.0961,0.9124,-0.0001});
HAnimJoint271->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment272 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment272->setName("r_thigh");
HAnimSegment272->setDEF("hanim_r_thigh");
//<HAnimJoint name='r_hip'/> visualization sphere is placed within <HAnimSegment name='r_thigh'/>
CTouchSensor* TouchSensor273 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor273->setDescription("HAnimJoint r_hip, HAnimSegment r_thigh");
HAnimSegment272->addChildren(TouchSensor273);

CTransform* Transform274 = (CTransform *)m_pScene.createNode("Transform");
Transform274->setTranslation(new float[3]{-0.0961,0.9124,-0.0001});
CShape* Shape275 = (CShape *)m_pScene.createNode("Shape");
Shape275->setUSE("HAnimJointShape");
Transform274->addChildren(Shape275);

HAnimSegment272->addChildren(Transform274);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_hip'/> to <HAnimJoint name='r_knee'/>
CShape* Shape276 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet277 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet277->setVertexCount(new int[1]{2});
CCoordinate* Coordinate278 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate278->setPoint(new float[6]{-0.0961,0.9124,-0.0001,-0.104,0.4867,0.0308});
LineSet277->setCoord(Coordinate278);

CColorRGBA* ColorRGBA279 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA279->setUSE("HAnimSegmentLineColorRGBA");
LineSet277->setColor(ColorRGBA279);

Shape276->setGeometry(LineSet277);

HAnimSegment272->addChildren(Shape276);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_knee_crease'/>
CShape* Shape280 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet281 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet281->setVertexCount(new int[1]{2});
CCoordinate* Coordinate282 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate282->setPoint(new float[6]{-0.0961,0.9124,-0.0001,-0.0825,0.4932,-0.0326});
LineSet281->setCoord(Coordinate282);

CColorRGBA* ColorRGBA283 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA283->setUSE("HAnimSiteLineColorRGBA");
LineSet281->setColor(ColorRGBA283);

Shape280->setGeometry(LineSet281);

HAnimSegment272->addChildren(Shape280);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_lateral_epicn'/>
CShape* Shape284 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet285 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet285->setVertexCount(new int[1]{2});
CCoordinate* Coordinate286 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate286->setPoint(new float[6]{-0.0961,0.9124,-0.0001,-0.1421,0.4992,0.031});
LineSet285->setCoord(Coordinate286);

CColorRGBA* ColorRGBA287 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA287->setUSE("HAnimSiteLineColorRGBA");
LineSet285->setColor(ColorRGBA287);

Shape284->setGeometry(LineSet285);

HAnimSegment272->addChildren(Shape284);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_medial_epicn'/>
CShape* Shape288 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet289 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet289->setVertexCount(new int[1]{2});
CCoordinate* Coordinate290 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate290->setPoint(new float[6]{-0.0961,0.9124,-0.0001,-0.0221,0.5014,0.0289});
LineSet289->setCoord(Coordinate290);

CColorRGBA* ColorRGBA291 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA291->setUSE("HAnimSiteLineColorRGBA");
LineSet289->setColor(ColorRGBA291);

Shape288->setGeometry(LineSet289);

HAnimSegment272->addChildren(Shape288);

CHAnimSite* HAnimSite292 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite292->setName("r_knee_crease_pt");
HAnimSite292->setDEF("hanim_r_knee_crease_pt");
HAnimSite292->setTranslation(new float[3]{-0.0825,0.4932,-0.0326});
//HAnimSite visualization shape
CTouchSensor* TouchSensor293 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor293->setDescription("HAnimSite r_knee_crease");
HAnimSite292->addChildren(TouchSensor293);

CShape* Shape294 = (CShape *)m_pScene.createNode("Shape");
Shape294->setUSE("HAnimSiteShape");
HAnimSite292->addChildren(Shape294);

HAnimSegment272->addChildren(HAnimSite292);

CHAnimSite* HAnimSite295 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite295->setName("r_femoral_lateral_epicn_pt");
HAnimSite295->setDEF("hanim_r_femoral_lateral_epicn_pt");
HAnimSite295->setTranslation(new float[3]{-0.1421,0.4992,0.031});
//HAnimSite visualization shape
CTouchSensor* TouchSensor296 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor296->setDescription("HAnimSite r_femoral_lateral_epicn");
HAnimSite295->addChildren(TouchSensor296);

CShape* Shape297 = (CShape *)m_pScene.createNode("Shape");
Shape297->setUSE("HAnimSiteShape");
HAnimSite295->addChildren(Shape297);

HAnimSegment272->addChildren(HAnimSite295);

CHAnimSite* HAnimSite298 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite298->setName("r_femoral_medial_epicn_pt");
HAnimSite298->setDEF("hanim_r_femoral_medial_epicn_pt");
HAnimSite298->setTranslation(new float[3]{-0.0221,0.5014,0.0289});
//HAnimSite visualization shape
CTouchSensor* TouchSensor299 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor299->setDescription("HAnimSite r_femoral_medial_epicn");
HAnimSite298->addChildren(TouchSensor299);

CShape* Shape300 = (CShape *)m_pScene.createNode("Shape");
Shape300->setUSE("HAnimSiteShape");
HAnimSite298->addChildren(Shape300);

HAnimSegment272->addChildren(HAnimSite298);

HAnimJoint271->addChildren(HAnimSegment272);

CHAnimJoint* HAnimJoint301 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint301->setName("r_knee");
HAnimJoint301->setDEF("hanim_r_knee");
HAnimJoint301->setCenter(new float[3]{-0.104,0.4867,0.0308});
HAnimJoint301->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment302 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment302->setName("r_calf");
HAnimSegment302->setDEF("hanim_r_calf");
//<HAnimJoint name='r_knee'/> visualization sphere is placed within <HAnimSegment name='r_calf'/>
CTouchSensor* TouchSensor303 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor303->setDescription("HAnimJoint r_knee, HAnimSegment r_calf");
HAnimSegment302->addChildren(TouchSensor303);

CTransform* Transform304 = (CTransform *)m_pScene.createNode("Transform");
Transform304->setTranslation(new float[3]{-0.104,0.4867,0.0308});
CShape* Shape305 = (CShape *)m_pScene.createNode("Shape");
Shape305->setUSE("HAnimJointShape");
Transform304->addChildren(Shape305);

HAnimSegment302->addChildren(Transform304);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_knee'/> to <HAnimJoint name='r_ankle'/>
CShape* Shape306 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet307 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet307->setVertexCount(new int[1]{2});
CCoordinate* Coordinate308 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate308->setPoint(new float[6]{-0.104,0.4867,0.0308,-0.1101,0.0656,-0.0736});
LineSet307->setCoord(Coordinate308);

CColorRGBA* ColorRGBA309 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA309->setUSE("HAnimSegmentLineColorRGBA");
LineSet307->setColor(ColorRGBA309);

Shape306->setGeometry(LineSet307);

HAnimSegment302->addChildren(Shape306);

HAnimJoint301->addChildren(HAnimSegment302);

CHAnimJoint* HAnimJoint310 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint310->setName("r_ankle");
HAnimJoint310->setDEF("hanim_r_ankle");
HAnimJoint310->setCenter(new float[3]{-0.1101,0.0656,-0.0736});
HAnimJoint310->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment311 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment311->setName("r_hindfoot");
HAnimSegment311->setDEF("hanim_r_hindfoot");
//<HAnimJoint name='r_ankle'/> visualization sphere is placed within <HAnimSegment name='r_hindfoot'/>
CTouchSensor* TouchSensor312 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor312->setDescription("HAnimJoint r_ankle, HAnimSegment r_hindfoot");
HAnimSegment311->addChildren(TouchSensor312);

CTransform* Transform313 = (CTransform *)m_pScene.createNode("Transform");
Transform313->setTranslation(new float[3]{-0.1101,0.0656,-0.0736});
CShape* Shape314 = (CShape *)m_pScene.createNode("Shape");
Shape314->setUSE("HAnimJointShape");
Transform313->addChildren(Shape314);

HAnimSegment311->addChildren(Transform313);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ankle'/> to <HAnimJoint name='r_subtalar'/>
CShape* Shape315 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet316 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet316->setVertexCount(new int[1]{2});
CCoordinate* Coordinate317 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate317->setPoint(new float[6]{-0.1101,0.0656,-0.0736,-0.1086,0.0001,-0.0368});
LineSet316->setCoord(Coordinate317);

CColorRGBA* ColorRGBA318 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA318->setUSE("HAnimSegmentLineColorRGBA");
LineSet316->setColor(ColorRGBA318);

Shape315->setGeometry(LineSet316);

HAnimSegment311->addChildren(Shape315);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_lateral_malleolus'/>
CShape* Shape319 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet320 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet320->setVertexCount(new int[1]{2});
CCoordinate* Coordinate321 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate321->setPoint(new float[6]{-0.1101,0.0656,-0.0736,-0.1006,0.0658,-0.1075});
LineSet320->setCoord(Coordinate321);

CColorRGBA* ColorRGBA322 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA322->setUSE("HAnimSiteLineColorRGBA");
LineSet320->setColor(ColorRGBA322);

Shape319->setGeometry(LineSet320);

HAnimSegment311->addChildren(Shape319);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_medial_malleolus'/>
CShape* Shape323 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet324 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet324->setVertexCount(new int[1]{2});
CCoordinate* Coordinate325 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate325->setPoint(new float[6]{-0.1101,0.0656,-0.0736,-0.0591,0.076,-0.0928});
LineSet324->setCoord(Coordinate325);

CColorRGBA* ColorRGBA326 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA326->setUSE("HAnimSiteLineColorRGBA");
LineSet324->setColor(ColorRGBA326);

Shape323->setGeometry(LineSet324);

HAnimSegment311->addChildren(Shape323);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_sphyrion'/>
CShape* Shape327 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet328 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet328->setVertexCount(new int[1]{2});
CCoordinate* Coordinate329 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate329->setPoint(new float[6]{-0.1101,0.0656,-0.0736,-0.0603,0.061,-0.1002});
LineSet328->setCoord(Coordinate329);

CColorRGBA* ColorRGBA330 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA330->setUSE("HAnimSiteLineColorRGBA");
LineSet328->setColor(ColorRGBA330);

Shape327->setGeometry(LineSet328);

HAnimSegment311->addChildren(Shape327);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_calcaneous_post'/>
CShape* Shape331 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet332 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet332->setVertexCount(new int[1]{2});
CCoordinate* Coordinate333 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate333->setPoint(new float[6]{-0.1101,0.0656,-0.0736,-0.0692,0.0297,-0.1221});
LineSet332->setCoord(Coordinate333);

CColorRGBA* ColorRGBA334 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA334->setUSE("HAnimSiteLineColorRGBA");
LineSet332->setColor(ColorRGBA334);

Shape331->setGeometry(LineSet332);

HAnimSegment311->addChildren(Shape331);

CHAnimSite* HAnimSite335 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite335->setName("r_lateral_malleolus_pt");
HAnimSite335->setDEF("hanim_r_lateral_malleolus_pt");
HAnimSite335->setTranslation(new float[3]{-0.1006,0.0658,-0.1075});
//HAnimSite visualization shape
CTouchSensor* TouchSensor336 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor336->setDescription("HAnimSite r_lateral_malleolus");
HAnimSite335->addChildren(TouchSensor336);

CShape* Shape337 = (CShape *)m_pScene.createNode("Shape");
Shape337->setUSE("HAnimSiteShape");
HAnimSite335->addChildren(Shape337);

HAnimSegment311->addChildren(HAnimSite335);

CHAnimSite* HAnimSite338 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite338->setName("r_medial_malleolus_pt");
HAnimSite338->setDEF("hanim_r_medial_malleolus_pt");
HAnimSite338->setTranslation(new float[3]{-0.0591,0.076,-0.0928});
//HAnimSite visualization shape
CTouchSensor* TouchSensor339 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor339->setDescription("HAnimSite r_medial_malleolus");
HAnimSite338->addChildren(TouchSensor339);

CShape* Shape340 = (CShape *)m_pScene.createNode("Shape");
Shape340->setUSE("HAnimSiteShape");
HAnimSite338->addChildren(Shape340);

HAnimSegment311->addChildren(HAnimSite338);

CHAnimSite* HAnimSite341 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite341->setName("r_sphyrion_pt");
HAnimSite341->setDEF("hanim_r_sphyrion_pt");
HAnimSite341->setTranslation(new float[3]{-0.0603,0.061,-0.1002});
//HAnimSite visualization shape
CTouchSensor* TouchSensor342 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor342->setDescription("HAnimSite r_sphyrion");
HAnimSite341->addChildren(TouchSensor342);

CShape* Shape343 = (CShape *)m_pScene.createNode("Shape");
Shape343->setUSE("HAnimSiteShape");
HAnimSite341->addChildren(Shape343);

HAnimSegment311->addChildren(HAnimSite341);

CHAnimSite* HAnimSite344 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite344->setName("r_calcaneous_post_pt");
HAnimSite344->setDEF("hanim_r_calcaneous_post_pt");
HAnimSite344->setTranslation(new float[3]{-0.0692,0.0297,-0.1221});
//HAnimSite visualization shape
CTouchSensor* TouchSensor345 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor345->setDescription("HAnimSite r_calcaneous_post");
HAnimSite344->addChildren(TouchSensor345);

CShape* Shape346 = (CShape *)m_pScene.createNode("Shape");
Shape346->setUSE("HAnimSiteShape");
HAnimSite344->addChildren(Shape346);

HAnimSegment311->addChildren(HAnimSite344);

HAnimJoint310->addChildren(HAnimSegment311);

CHAnimJoint* HAnimJoint347 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint347->setName("r_subtalar");
HAnimJoint347->setDEF("hanim_r_subtalar");
HAnimJoint347->setCenter(new float[3]{-0.1086,0.0001,-0.0368});
HAnimJoint347->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment348 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment348->setName("r_midproximal");
HAnimSegment348->setDEF("hanim_r_midproximal");
//<HAnimJoint name='r_subtalar'/> visualization sphere is placed within <HAnimSegment name='r_midproximal'/>
CTouchSensor* TouchSensor349 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor349->setDescription("HAnimJoint r_subtalar, HAnimSegment r_midproximal");
HAnimSegment348->addChildren(TouchSensor349);

CTransform* Transform350 = (CTransform *)m_pScene.createNode("Transform");
Transform350->setTranslation(new float[3]{-0.1086,0.0001,-0.0368});
CShape* Shape351 = (CShape *)m_pScene.createNode("Shape");
Shape351->setUSE("HAnimJointShape");
Transform350->addChildren(Shape351);

HAnimSegment348->addChildren(Transform350);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_subtalar'/> to <HAnimJoint name='r_midtarsal'/>
CShape* Shape352 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet353 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet353->setVertexCount(new int[1]{2});
CCoordinate* Coordinate354 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate354->setPoint(new float[6]{-0.1086,0.0001,-0.0368,-0.1086,0.0001,0.0368});
LineSet353->setCoord(Coordinate354);

CColorRGBA* ColorRGBA355 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA355->setUSE("HAnimSegmentLineColorRGBA");
LineSet353->setColor(ColorRGBA355);

Shape352->setGeometry(LineSet353);

HAnimSegment348->addChildren(Shape352);

HAnimJoint347->addChildren(HAnimSegment348);

CHAnimJoint* HAnimJoint356 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint356->setName("r_midtarsal");
HAnimJoint356->setDEF("hanim_r_midtarsal");
HAnimJoint356->setCenter(new float[3]{-0.1086,0.0001,0.0368});
HAnimJoint356->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment357 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment357->setName("r_middistal");
HAnimSegment357->setDEF("hanim_r_middistal");
//<HAnimJoint name='r_midtarsal'/> visualization sphere is placed within <HAnimSegment name='r_middistal'/>
CTouchSensor* TouchSensor358 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor358->setDescription("HAnimJoint r_midtarsal, HAnimSegment r_middistal");
HAnimSegment357->addChildren(TouchSensor358);

CTransform* Transform359 = (CTransform *)m_pScene.createNode("Transform");
Transform359->setTranslation(new float[3]{-0.1086,0.0001,0.0368});
CShape* Shape360 = (CShape *)m_pScene.createNode("Shape");
Shape360->setUSE("HAnimJointShape");
Transform359->addChildren(Shape360);

HAnimSegment357->addChildren(Transform359);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_midtarsal'/> to <HAnimJoint name='r_metatarsal'/>
CShape* Shape361 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet362 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet362->setVertexCount(new int[1]{2});
CCoordinate* Coordinate363 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate363->setPoint(new float[6]{-0.1086,0.0001,0.0368,-0.1086,0,0.0762});
LineSet362->setCoord(Coordinate363);

CColorRGBA* ColorRGBA364 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA364->setUSE("HAnimSegmentLineColorRGBA");
LineSet362->setColor(ColorRGBA364);

Shape361->setGeometry(LineSet362);

HAnimSegment357->addChildren(Shape361);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_midtarsal'/> to <HAnimSite name='r_metatarsal_pha1'/>
CShape* Shape365 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet366 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet366->setVertexCount(new int[1]{2});
CCoordinate* Coordinate367 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate367->setPoint(new float[6]{-0.1086,0.0001,0.0368,-0.0521,0.026,0.0127});
LineSet366->setCoord(Coordinate367);

CColorRGBA* ColorRGBA368 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA368->setUSE("HAnimSiteLineColorRGBA");
LineSet366->setColor(ColorRGBA368);

Shape365->setGeometry(LineSet366);

HAnimSegment357->addChildren(Shape365);

CHAnimSite* HAnimSite369 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite369->setName("r_metatarsal_pha1_pt");
HAnimSite369->setDEF("hanim_r_metatarsal_pha1_pt");
HAnimSite369->setTranslation(new float[3]{-0.0521,0.026,0.0127});
//HAnimSite visualization shape
CTouchSensor* TouchSensor370 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor370->setDescription("HAnimSite r_metatarsal_pha1");
HAnimSite369->addChildren(TouchSensor370);

CShape* Shape371 = (CShape *)m_pScene.createNode("Shape");
Shape371->setUSE("HAnimSiteShape");
HAnimSite369->addChildren(Shape371);

HAnimSegment357->addChildren(HAnimSite369);

HAnimJoint356->addChildren(HAnimSegment357);

CHAnimJoint* HAnimJoint372 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint372->setName("r_metatarsal");
HAnimJoint372->setDEF("hanim_r_metatarsal");
HAnimJoint372->setCenter(new float[3]{-0.1086,0,0.0762});
HAnimJoint372->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment373 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment373->setName("r_forefoot");
HAnimSegment373->setDEF("hanim_r_forefoot");
//<HAnimJoint name='r_metatarsal'/> visualization sphere is placed within <HAnimSegment name='r_forefoot'/>
CTouchSensor* TouchSensor374 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor374->setDescription("HAnimJoint r_metatarsal, HAnimSegment r_forefoot");
HAnimSegment373->addChildren(TouchSensor374);

CTransform* Transform375 = (CTransform *)m_pScene.createNode("Transform");
Transform375->setTranslation(new float[3]{-0.1086,0,0.0762});
CShape* Shape376 = (CShape *)m_pScene.createNode("Shape");
Shape376->setUSE("HAnimJointShape");
Transform375->addChildren(Shape376);

HAnimSegment373->addChildren(Transform375);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_forefoot_tip'/>
CShape* Shape377 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet378 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet378->setVertexCount(new int[1]{2});
CCoordinate* Coordinate379 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate379->setPoint(new float[6]{-0.1086,0,0.0762,-0.1043,0.0227,0.145});
LineSet378->setCoord(Coordinate379);

CColorRGBA* ColorRGBA380 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA380->setUSE("HAnimSiteLineColorRGBA");
LineSet378->setColor(ColorRGBA380);

Shape377->setGeometry(LineSet378);

HAnimSegment373->addChildren(Shape377);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_metatarsal_pha5'/>
CShape* Shape381 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet382 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet382->setVertexCount(new int[1]{2});
CCoordinate* Coordinate383 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate383->setPoint(new float[6]{-0.1086,0,0.0762,-0.1523,0.0166,0.0895});
LineSet382->setCoord(Coordinate383);

CColorRGBA* ColorRGBA384 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA384->setUSE("HAnimSiteLineColorRGBA");
LineSet382->setColor(ColorRGBA384);

Shape381->setGeometry(LineSet382);

HAnimSegment373->addChildren(Shape381);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_digit2'/>
CShape* Shape385 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet386 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet386->setVertexCount(new int[1]{2});
CCoordinate* Coordinate387 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate387->setPoint(new float[6]{-0.1086,0,0.0762,-0.0883,0.0134,0.1383});
LineSet386->setCoord(Coordinate387);

CColorRGBA* ColorRGBA388 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA388->setUSE("HAnimSiteLineColorRGBA");
LineSet386->setColor(ColorRGBA388);

Shape385->setGeometry(LineSet386);

HAnimSegment373->addChildren(Shape385);

CHAnimSite* HAnimSite389 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite389->setName("r_forefoot_tip");
HAnimSite389->setDEF("hanim_r_forefoot_tip");
HAnimSite389->setTranslation(new float[3]{-0.1043,0.0227,0.145});
//HAnimSite visualization shape
CTouchSensor* TouchSensor390 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor390->setDescription("HAnimSite r_forefoot_tip");
HAnimSite389->addChildren(TouchSensor390);

CShape* Shape391 = (CShape *)m_pScene.createNode("Shape");
Shape391->setUSE("HAnimSiteShape");
HAnimSite389->addChildren(Shape391);

HAnimSegment373->addChildren(HAnimSite389);

CHAnimSite* HAnimSite392 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite392->setName("r_metatarsal_pha5_pt");
HAnimSite392->setDEF("hanim_r_metatarsal_pha5_pt");
HAnimSite392->setTranslation(new float[3]{-0.1523,0.0166,0.0895});
//HAnimSite visualization shape
CTouchSensor* TouchSensor393 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor393->setDescription("HAnimSite r_metatarsal_pha5");
HAnimSite392->addChildren(TouchSensor393);

CShape* Shape394 = (CShape *)m_pScene.createNode("Shape");
Shape394->setUSE("HAnimSiteShape");
HAnimSite392->addChildren(Shape394);

HAnimSegment373->addChildren(HAnimSite392);

CHAnimSite* HAnimSite395 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite395->setName("r_digit2_pt");
HAnimSite395->setDEF("hanim_r_digit2_pt");
HAnimSite395->setTranslation(new float[3]{-0.0883,0.0134,0.1383});
//HAnimSite visualization shape
CTouchSensor* TouchSensor396 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor396->setDescription("HAnimSite r_digit2");
HAnimSite395->addChildren(TouchSensor396);

CShape* Shape397 = (CShape *)m_pScene.createNode("Shape");
Shape397->setUSE("HAnimSiteShape");
HAnimSite395->addChildren(Shape397);

HAnimSegment373->addChildren(HAnimSite395);

HAnimJoint372->addChildren(HAnimSegment373);

HAnimJoint356->addChildren(HAnimJoint372);

HAnimJoint347->addChildren(HAnimJoint356);

HAnimJoint310->addChildren(HAnimJoint347);

HAnimJoint301->addChildren(HAnimJoint310);

HAnimJoint271->addChildren(HAnimJoint301);

HAnimJoint64->addChildren(HAnimJoint271);

HAnimJoint48->addChildren(HAnimJoint64);

CHAnimJoint* HAnimJoint398 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint398->setName("vl5");
HAnimJoint398->setDEF("hanim_vl5");
HAnimJoint398->setCenter(new float[3]{0.0028,1.0568,-0.0776});
HAnimJoint398->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment399 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment399->setName("l5");
HAnimSegment399->setDEF("hanim_l5");
//<HAnimJoint name='vl5'/> visualization sphere is placed within <HAnimSegment name='l5'/>
CTouchSensor* TouchSensor400 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor400->setDescription("HAnimJoint vl5, HAnimSegment l5");
HAnimSegment399->addChildren(TouchSensor400);

CTransform* Transform401 = (CTransform *)m_pScene.createNode("Transform");
Transform401->setTranslation(new float[3]{0.0028,1.0568,-0.0776});
CShape* Shape402 = (CShape *)m_pScene.createNode("Shape");
Shape402->setUSE("HAnimJointShape");
Transform401->addChildren(Shape402);

HAnimSegment399->addChildren(Transform401);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl5'/> to <HAnimJoint name='vl4'/>
CShape* Shape403 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet404 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet404->setVertexCount(new int[1]{2});
CCoordinate* Coordinate405 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate405->setPoint(new float[6]{0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787});
LineSet404->setCoord(Coordinate405);

CColorRGBA* ColorRGBA406 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA406->setUSE("HAnimSegmentLineColorRGBA");
LineSet404->setColor(ColorRGBA406);

Shape403->setGeometry(LineSet404);

HAnimSegment399->addChildren(Shape403);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='waist_preferred_post'/>
CShape* Shape407 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet408 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet408->setVertexCount(new int[1]{2});
CCoordinate* Coordinate409 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate409->setPoint(new float[6]{0.0028,1.0568,-0.0776,0,1.0915,-0.1091});
LineSet408->setCoord(Coordinate409);

CColorRGBA* ColorRGBA410 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA410->setUSE("HAnimSiteLineColorRGBA");
LineSet408->setColor(ColorRGBA410);

Shape407->setGeometry(LineSet408);

HAnimSegment399->addChildren(Shape407);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='navel'/>
CShape* Shape411 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet412 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet412->setVertexCount(new int[1]{2});
CCoordinate* Coordinate413 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate413->setPoint(new float[6]{0.0028,1.0568,-0.0776,0.0069,1.0966,0.1017});
LineSet412->setCoord(Coordinate413);

CColorRGBA* ColorRGBA414 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA414->setUSE("HAnimSiteLineColorRGBA");
LineSet412->setColor(ColorRGBA414);

Shape411->setGeometry(LineSet412);

HAnimSegment399->addChildren(Shape411);

CHAnimSite* HAnimSite415 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite415->setName("waist_preferred_post_pt");
HAnimSite415->setDEF("hanim_waist_preferred_post_pt");
HAnimSite415->setTranslation(new float[3]{0,1.0915,-0.1091});
//HAnimSite visualization shape
CTouchSensor* TouchSensor416 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor416->setDescription("HAnimSite waist_preferred_post");
HAnimSite415->addChildren(TouchSensor416);

CShape* Shape417 = (CShape *)m_pScene.createNode("Shape");
Shape417->setUSE("HAnimSiteShape");
HAnimSite415->addChildren(Shape417);

HAnimSegment399->addChildren(HAnimSite415);

CHAnimSite* HAnimSite418 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite418->setName("navel_pt");
HAnimSite418->setDEF("hanim_navel_pt");
HAnimSite418->setTranslation(new float[3]{0.0069,1.0966,0.1017});
//HAnimSite visualization shape
CTouchSensor* TouchSensor419 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor419->setDescription("HAnimSite navel");
HAnimSite418->addChildren(TouchSensor419);

CShape* Shape420 = (CShape *)m_pScene.createNode("Shape");
Shape420->setUSE("HAnimSiteShape");
HAnimSite418->addChildren(Shape420);

HAnimSegment399->addChildren(HAnimSite418);

HAnimJoint398->addChildren(HAnimSegment399);

CHAnimJoint* HAnimJoint421 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint421->setName("vl4");
HAnimJoint421->setDEF("hanim_vl4");
HAnimJoint421->setCenter(new float[3]{0.0035,1.0925,-0.0787});
HAnimJoint421->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment422 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment422->setName("l4");
HAnimSegment422->setDEF("hanim_l4");
//<HAnimJoint name='vl4'/> visualization sphere is placed within <HAnimSegment name='l4'/>
CTouchSensor* TouchSensor423 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor423->setDescription("HAnimJoint vl4, HAnimSegment l4");
HAnimSegment422->addChildren(TouchSensor423);

CTransform* Transform424 = (CTransform *)m_pScene.createNode("Transform");
Transform424->setTranslation(new float[3]{0.0035,1.0925,-0.0787});
CShape* Shape425 = (CShape *)m_pScene.createNode("Shape");
Shape425->setUSE("HAnimJointShape");
Transform424->addChildren(Shape425);

HAnimSegment422->addChildren(Transform424);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl4'/> to <HAnimJoint name='vl3'/>
CShape* Shape426 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet427 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet427->setVertexCount(new int[1]{2});
CCoordinate* Coordinate428 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate428->setPoint(new float[6]{0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796});
LineSet427->setCoord(Coordinate428);

CColorRGBA* ColorRGBA429 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA429->setUSE("HAnimSegmentLineColorRGBA");
LineSet427->setColor(ColorRGBA429);

Shape426->setGeometry(LineSet427);

HAnimSegment422->addChildren(Shape426);

HAnimJoint421->addChildren(HAnimSegment422);

CHAnimJoint* HAnimJoint430 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint430->setName("vl3");
HAnimJoint430->setDEF("hanim_vl3");
HAnimJoint430->setCenter(new float[3]{0.0041,1.1276,-0.0796});
HAnimJoint430->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment431 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment431->setName("l3");
HAnimSegment431->setDEF("hanim_l3");
//<HAnimJoint name='vl3'/> visualization sphere is placed within <HAnimSegment name='l3'/>
CTouchSensor* TouchSensor432 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor432->setDescription("HAnimJoint vl3, HAnimSegment l3");
HAnimSegment431->addChildren(TouchSensor432);

CTransform* Transform433 = (CTransform *)m_pScene.createNode("Transform");
Transform433->setTranslation(new float[3]{0.0041,1.1276,-0.0796});
CShape* Shape434 = (CShape *)m_pScene.createNode("Shape");
Shape434->setUSE("HAnimJointShape");
Transform433->addChildren(Shape434);

HAnimSegment431->addChildren(Transform433);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl3'/> to <HAnimJoint name='vl2'/>
CShape* Shape435 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet436 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet436->setVertexCount(new int[1]{2});
CCoordinate* Coordinate437 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate437->setPoint(new float[6]{0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08});
LineSet436->setCoord(Coordinate437);

CColorRGBA* ColorRGBA438 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA438->setUSE("HAnimSegmentLineColorRGBA");
LineSet436->setColor(ColorRGBA438);

Shape435->setGeometry(LineSet436);

HAnimSegment431->addChildren(Shape435);

HAnimJoint430->addChildren(HAnimSegment431);

CHAnimJoint* HAnimJoint439 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint439->setName("vl2");
HAnimJoint439->setDEF("hanim_vl2");
HAnimJoint439->setCenter(new float[3]{0.0045,1.1546,-0.08});
HAnimJoint439->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment440 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment440->setName("l2");
HAnimSegment440->setDEF("hanim_l2");
//<HAnimJoint name='vl2'/> visualization sphere is placed within <HAnimSegment name='l2'/>
CTouchSensor* TouchSensor441 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor441->setDescription("HAnimJoint vl2, HAnimSegment l2");
HAnimSegment440->addChildren(TouchSensor441);

CTransform* Transform442 = (CTransform *)m_pScene.createNode("Transform");
Transform442->setTranslation(new float[3]{0.0045,1.1546,-0.08});
CShape* Shape443 = (CShape *)m_pScene.createNode("Shape");
Shape443->setUSE("HAnimJointShape");
Transform442->addChildren(Shape443);

HAnimSegment440->addChildren(Transform442);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl2'/> to <HAnimJoint name='vl1'/>
CShape* Shape444 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet445 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet445->setVertexCount(new int[1]{2});
CCoordinate* Coordinate446 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate446->setPoint(new float[6]{0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805});
LineSet445->setCoord(Coordinate446);

CColorRGBA* ColorRGBA447 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA447->setUSE("HAnimSegmentLineColorRGBA");
LineSet445->setColor(ColorRGBA447);

Shape444->setGeometry(LineSet445);

HAnimSegment440->addChildren(Shape444);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='r_rib10'/>
CShape* Shape448 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet449 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet449->setVertexCount(new int[1]{2});
CCoordinate* Coordinate450 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate450->setPoint(new float[6]{0.0045,1.1546,-0.08,-0.0711,1.1941,0.1016});
LineSet449->setCoord(Coordinate450);

CColorRGBA* ColorRGBA451 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA451->setUSE("HAnimSiteLineColorRGBA");
LineSet449->setColor(ColorRGBA451);

Shape448->setGeometry(LineSet449);

HAnimSegment440->addChildren(Shape448);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='l_rib10'/>
CShape* Shape452 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet453 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet453->setVertexCount(new int[1]{2});
CCoordinate* Coordinate454 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate454->setPoint(new float[6]{0.0045,1.1546,-0.08,0.0871,1.1925,0.0992});
LineSet453->setCoord(Coordinate454);

CColorRGBA* ColorRGBA455 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA455->setUSE("HAnimSiteLineColorRGBA");
LineSet453->setColor(ColorRGBA455);

Shape452->setGeometry(LineSet453);

HAnimSegment440->addChildren(Shape452);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='rib10_midspine'/>
CShape* Shape456 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet457 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet457->setVertexCount(new int[1]{2});
CCoordinate* Coordinate458 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate458->setPoint(new float[6]{0.0045,1.1546,-0.08,0.0049,1.1908,-0.1113});
LineSet457->setCoord(Coordinate458);

CColorRGBA* ColorRGBA459 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA459->setUSE("HAnimSiteLineColorRGBA");
LineSet457->setColor(ColorRGBA459);

Shape456->setGeometry(LineSet457);

HAnimSegment440->addChildren(Shape456);

CHAnimSite* HAnimSite460 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite460->setName("r_rib10_pt");
HAnimSite460->setDEF("hanim_r_rib10_pt");
HAnimSite460->setTranslation(new float[3]{-0.0711,1.1941,0.1016});
//HAnimSite visualization shape
CTouchSensor* TouchSensor461 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor461->setDescription("HAnimSite r_rib10");
HAnimSite460->addChildren(TouchSensor461);

CShape* Shape462 = (CShape *)m_pScene.createNode("Shape");
Shape462->setUSE("HAnimSiteShape");
HAnimSite460->addChildren(Shape462);

HAnimSegment440->addChildren(HAnimSite460);

CHAnimSite* HAnimSite463 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite463->setName("l_rib10_pt");
HAnimSite463->setDEF("hanim_l_rib10_pt");
HAnimSite463->setTranslation(new float[3]{0.0871,1.1925,0.0992});
//HAnimSite visualization shape
CTouchSensor* TouchSensor464 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor464->setDescription("HAnimSite l_rib10");
HAnimSite463->addChildren(TouchSensor464);

CShape* Shape465 = (CShape *)m_pScene.createNode("Shape");
Shape465->setUSE("HAnimSiteShape");
HAnimSite463->addChildren(Shape465);

HAnimSegment440->addChildren(HAnimSite463);

CHAnimSite* HAnimSite466 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite466->setName("rib10_midspine_pt");
HAnimSite466->setDEF("hanim_rib10_midspine_pt");
HAnimSite466->setTranslation(new float[3]{0.0049,1.1908,-0.1113});
//HAnimSite visualization shape
CTouchSensor* TouchSensor467 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor467->setDescription("HAnimSite rib10_midspine");
HAnimSite466->addChildren(TouchSensor467);

CShape* Shape468 = (CShape *)m_pScene.createNode("Shape");
Shape468->setUSE("HAnimSiteShape");
HAnimSite466->addChildren(Shape468);

HAnimSegment440->addChildren(HAnimSite466);

HAnimJoint439->addChildren(HAnimSegment440);

CHAnimJoint* HAnimJoint469 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint469->setName("vl1");
HAnimJoint469->setDEF("hanim_vl1");
HAnimJoint469->setCenter(new float[3]{0.0048,1.1912,-0.0805});
HAnimJoint469->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment470 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment470->setName("l1");
HAnimSegment470->setDEF("hanim_l1");
//<HAnimJoint name='vl1'/> visualization sphere is placed within <HAnimSegment name='l1'/>
CTouchSensor* TouchSensor471 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor471->setDescription("HAnimJoint vl1, HAnimSegment l1");
HAnimSegment470->addChildren(TouchSensor471);

CTransform* Transform472 = (CTransform *)m_pScene.createNode("Transform");
Transform472->setTranslation(new float[3]{0.0048,1.1912,-0.0805});
CShape* Shape473 = (CShape *)m_pScene.createNode("Shape");
Shape473->setUSE("HAnimJointShape");
Transform472->addChildren(Shape473);

HAnimSegment470->addChildren(Transform472);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl1'/> to <HAnimJoint name='vt12'/>
CShape* Shape474 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet475 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet475->setVertexCount(new int[1]{2});
CCoordinate* Coordinate476 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate476->setPoint(new float[6]{0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808});
LineSet475->setCoord(Coordinate476);

CColorRGBA* ColorRGBA477 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA477->setUSE("HAnimSegmentLineColorRGBA");
LineSet475->setColor(ColorRGBA477);

Shape474->setGeometry(LineSet475);

HAnimSegment470->addChildren(Shape474);

HAnimJoint469->addChildren(HAnimSegment470);

CHAnimJoint* HAnimJoint478 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint478->setName("vt12");
HAnimJoint478->setDEF("hanim_vt12");
HAnimJoint478->setCenter(new float[3]{0.0051,1.2278,-0.0808});
HAnimJoint478->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment479 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment479->setName("t12");
HAnimSegment479->setDEF("hanim_t12");
//<HAnimJoint name='vt12'/> visualization sphere is placed within <HAnimSegment name='t12'/>
CTouchSensor* TouchSensor480 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor480->setDescription("HAnimJoint vt12, HAnimSegment t12");
HAnimSegment479->addChildren(TouchSensor480);

CTransform* Transform481 = (CTransform *)m_pScene.createNode("Transform");
Transform481->setTranslation(new float[3]{0.0051,1.2278,-0.0808});
CShape* Shape482 = (CShape *)m_pScene.createNode("Shape");
Shape482->setUSE("HAnimJointShape");
Transform481->addChildren(Shape482);

HAnimSegment479->addChildren(Transform481);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt12'/> to <HAnimJoint name='vt11'/>
CShape* Shape483 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet484 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet484->setVertexCount(new int[1]{2});
CCoordinate* Coordinate485 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate485->setPoint(new float[6]{0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081});
LineSet484->setCoord(Coordinate485);

CColorRGBA* ColorRGBA486 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA486->setUSE("HAnimSegmentLineColorRGBA");
LineSet484->setColor(ColorRGBA486);

Shape483->setGeometry(LineSet484);

HAnimSegment479->addChildren(Shape483);

HAnimJoint478->addChildren(HAnimSegment479);

CHAnimJoint* HAnimJoint487 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint487->setName("vt11");
HAnimJoint487->setDEF("hanim_vt11");
HAnimJoint487->setCenter(new float[3]{0.0053,1.2679,-0.081});
HAnimJoint487->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment488 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment488->setName("t11");
HAnimSegment488->setDEF("hanim_t11");
//<HAnimJoint name='vt11'/> visualization sphere is placed within <HAnimSegment name='t11'/>
CTouchSensor* TouchSensor489 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor489->setDescription("HAnimJoint vt11, HAnimSegment t11");
HAnimSegment488->addChildren(TouchSensor489);

CTransform* Transform490 = (CTransform *)m_pScene.createNode("Transform");
Transform490->setTranslation(new float[3]{0.0053,1.2679,-0.081});
CShape* Shape491 = (CShape *)m_pScene.createNode("Shape");
Shape491->setUSE("HAnimJointShape");
Transform490->addChildren(Shape491);

HAnimSegment488->addChildren(Transform490);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt11'/> to <HAnimJoint name='vt10'/>
CShape* Shape492 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet493 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet493->setVertexCount(new int[1]{2});
CCoordinate* Coordinate494 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate494->setPoint(new float[6]{0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822});
LineSet493->setCoord(Coordinate494);

CColorRGBA* ColorRGBA495 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA495->setUSE("HAnimSegmentLineColorRGBA");
LineSet493->setColor(ColorRGBA495);

Shape492->setGeometry(LineSet493);

HAnimSegment488->addChildren(Shape492);

HAnimJoint487->addChildren(HAnimSegment488);

CHAnimJoint* HAnimJoint496 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint496->setName("vt10");
HAnimJoint496->setDEF("hanim_vt10");
HAnimJoint496->setCenter(new float[3]{0.0056,1.2848,-0.0822});
HAnimJoint496->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment497 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment497->setName("t10");
HAnimSegment497->setDEF("hanim_t10");
//<HAnimJoint name='vt10'/> visualization sphere is placed within <HAnimSegment name='t10'/>
CTouchSensor* TouchSensor498 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor498->setDescription("HAnimJoint vt10, HAnimSegment t10");
HAnimSegment497->addChildren(TouchSensor498);

CTransform* Transform499 = (CTransform *)m_pScene.createNode("Transform");
Transform499->setTranslation(new float[3]{0.0056,1.2848,-0.0822});
CShape* Shape500 = (CShape *)m_pScene.createNode("Shape");
Shape500->setUSE("HAnimJointShape");
Transform499->addChildren(Shape500);

HAnimSegment497->addChildren(Transform499);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt10'/> to <HAnimJoint name='vt9'/>
CShape* Shape501 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet502 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet502->setVertexCount(new int[1]{2});
CCoordinate* Coordinate503 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate503->setPoint(new float[6]{0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838});
LineSet502->setCoord(Coordinate503);

CColorRGBA* ColorRGBA504 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA504->setUSE("HAnimSegmentLineColorRGBA");
LineSet502->setColor(ColorRGBA504);

Shape501->setGeometry(LineSet502);

HAnimSegment497->addChildren(Shape501);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt10'/> to <HAnimSite name='substernale'/>
CShape* Shape505 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet506 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet506->setVertexCount(new int[1]{2});
CCoordinate* Coordinate507 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate507->setPoint(new float[6]{0.0056,1.2848,-0.0822,0.0085,1.2995,0.1147});
LineSet506->setCoord(Coordinate507);

CColorRGBA* ColorRGBA508 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA508->setUSE("HAnimSiteLineColorRGBA");
LineSet506->setColor(ColorRGBA508);

Shape505->setGeometry(LineSet506);

HAnimSegment497->addChildren(Shape505);

CHAnimSite* HAnimSite509 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite509->setName("substernale_pt");
HAnimSite509->setDEF("hanim_substernale_pt");
HAnimSite509->setTranslation(new float[3]{0.0085,1.2995,0.1147});
//HAnimSite visualization shape
CTouchSensor* TouchSensor510 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor510->setDescription("HAnimSite substernale");
HAnimSite509->addChildren(TouchSensor510);

CShape* Shape511 = (CShape *)m_pScene.createNode("Shape");
Shape511->setUSE("HAnimSiteShape");
HAnimSite509->addChildren(Shape511);

HAnimSegment497->addChildren(HAnimSite509);

HAnimJoint496->addChildren(HAnimSegment497);

CHAnimJoint* HAnimJoint512 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint512->setName("vt9");
HAnimJoint512->setDEF("hanim_vt9");
HAnimJoint512->setCenter(new float[3]{0.0057,1.3126,-0.0838});
HAnimJoint512->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment513 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment513->setName("t9");
HAnimSegment513->setDEF("hanim_t9");
//<HAnimJoint name='vt9'/> visualization sphere is placed within <HAnimSegment name='t9'/>
CTouchSensor* TouchSensor514 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor514->setDescription("HAnimJoint vt9, HAnimSegment t9");
HAnimSegment513->addChildren(TouchSensor514);

CTransform* Transform515 = (CTransform *)m_pScene.createNode("Transform");
Transform515->setTranslation(new float[3]{0.0057,1.3126,-0.0838});
CShape* Shape516 = (CShape *)m_pScene.createNode("Shape");
Shape516->setUSE("HAnimJointShape");
Transform515->addChildren(Shape516);

HAnimSegment513->addChildren(Transform515);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt9'/> to <HAnimJoint name='vt8'/>
CShape* Shape517 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet518 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet518->setVertexCount(new int[1]{2});
CCoordinate* Coordinate519 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate519->setPoint(new float[6]{0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845});
LineSet518->setCoord(Coordinate519);

CColorRGBA* ColorRGBA520 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA520->setUSE("HAnimSegmentLineColorRGBA");
LineSet518->setColor(ColorRGBA520);

Shape517->setGeometry(LineSet518);

HAnimSegment513->addChildren(Shape517);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='r_thelion'/>
CShape* Shape521 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet522 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet522->setVertexCount(new int[1]{2});
CCoordinate* Coordinate523 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate523->setPoint(new float[6]{0.0057,1.3126,-0.0838,-0.0736,1.3385,0.1217});
LineSet522->setCoord(Coordinate523);

CColorRGBA* ColorRGBA524 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA524->setUSE("HAnimSiteLineColorRGBA");
LineSet522->setColor(ColorRGBA524);

Shape521->setGeometry(LineSet522);

HAnimSegment513->addChildren(Shape521);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='l_thelion'/>
CShape* Shape525 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet526 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet526->setVertexCount(new int[1]{2});
CCoordinate* Coordinate527 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate527->setPoint(new float[6]{0.0057,1.3126,-0.0838,0.0918,1.3382,0.1192});
LineSet526->setCoord(Coordinate527);

CColorRGBA* ColorRGBA528 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA528->setUSE("HAnimSiteLineColorRGBA");
LineSet526->setColor(ColorRGBA528);

Shape525->setGeometry(LineSet526);

HAnimSegment513->addChildren(Shape525);

CHAnimSite* HAnimSite529 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite529->setName("r_thelion_pt");
HAnimSite529->setDEF("hanim_r_thelion_pt");
HAnimSite529->setTranslation(new float[3]{-0.0736,1.3385,0.1217});
//HAnimSite visualization shape
CTouchSensor* TouchSensor530 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor530->setDescription("HAnimSite r_thelion");
HAnimSite529->addChildren(TouchSensor530);

CShape* Shape531 = (CShape *)m_pScene.createNode("Shape");
Shape531->setUSE("HAnimSiteShape");
HAnimSite529->addChildren(Shape531);

HAnimSegment513->addChildren(HAnimSite529);

CHAnimSite* HAnimSite532 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite532->setName("l_thelion_pt");
HAnimSite532->setDEF("hanim_l_thelion_pt");
HAnimSite532->setTranslation(new float[3]{0.0918,1.3382,0.1192});
//HAnimSite visualization shape
CTouchSensor* TouchSensor533 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor533->setDescription("HAnimSite l_thelion");
HAnimSite532->addChildren(TouchSensor533);

CShape* Shape534 = (CShape *)m_pScene.createNode("Shape");
Shape534->setUSE("HAnimSiteShape");
HAnimSite532->addChildren(Shape534);

HAnimSegment513->addChildren(HAnimSite532);

HAnimJoint512->addChildren(HAnimSegment513);

CHAnimJoint* HAnimJoint535 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint535->setName("vt8");
HAnimJoint535->setDEF("hanim_vt8");
HAnimJoint535->setCenter(new float[3]{0.0057,1.3382,-0.0845});
HAnimJoint535->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment536 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment536->setName("t8");
HAnimSegment536->setDEF("hanim_t8");
//<HAnimJoint name='vt8'/> visualization sphere is placed within <HAnimSegment name='t8'/>
CTouchSensor* TouchSensor537 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor537->setDescription("HAnimJoint vt8, HAnimSegment t8");
HAnimSegment536->addChildren(TouchSensor537);

CTransform* Transform538 = (CTransform *)m_pScene.createNode("Transform");
Transform538->setTranslation(new float[3]{0.0057,1.3382,-0.0845});
CShape* Shape539 = (CShape *)m_pScene.createNode("Shape");
Shape539->setUSE("HAnimJointShape");
Transform538->addChildren(Shape539);

HAnimSegment536->addChildren(Transform538);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt8'/> to <HAnimJoint name='vt7'/>
CShape* Shape540 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet541 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet541->setVertexCount(new int[1]{2});
CCoordinate* Coordinate542 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate542->setPoint(new float[6]{0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833});
LineSet541->setCoord(Coordinate542);

CColorRGBA* ColorRGBA543 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA543->setUSE("HAnimSegmentLineColorRGBA");
LineSet541->setColor(ColorRGBA543);

Shape540->setGeometry(LineSet541);

HAnimSegment536->addChildren(Shape540);

HAnimJoint535->addChildren(HAnimSegment536);

CHAnimJoint* HAnimJoint544 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint544->setName("vt7");
HAnimJoint544->setDEF("hanim_vt7");
HAnimJoint544->setCenter(new float[3]{0.0058,1.3625,-0.0833});
HAnimJoint544->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment545 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment545->setName("t7");
HAnimSegment545->setDEF("hanim_t7");
//<HAnimJoint name='vt7'/> visualization sphere is placed within <HAnimSegment name='t7'/>
CTouchSensor* TouchSensor546 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor546->setDescription("HAnimJoint vt7, HAnimSegment t7");
HAnimSegment545->addChildren(TouchSensor546);

CTransform* Transform547 = (CTransform *)m_pScene.createNode("Transform");
Transform547->setTranslation(new float[3]{0.0058,1.3625,-0.0833});
CShape* Shape548 = (CShape *)m_pScene.createNode("Shape");
Shape548->setUSE("HAnimJointShape");
Transform547->addChildren(Shape548);

HAnimSegment545->addChildren(Transform547);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt7'/> to <HAnimJoint name='vt6'/>
CShape* Shape549 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet550 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet550->setVertexCount(new int[1]{2});
CCoordinate* Coordinate551 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate551->setPoint(new float[6]{0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08});
LineSet550->setCoord(Coordinate551);

CColorRGBA* ColorRGBA552 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA552->setUSE("HAnimSegmentLineColorRGBA");
LineSet550->setColor(ColorRGBA552);

Shape549->setGeometry(LineSet550);

HAnimSegment545->addChildren(Shape549);

HAnimJoint544->addChildren(HAnimSegment545);

CHAnimJoint* HAnimJoint553 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint553->setName("vt6");
HAnimJoint553->setDEF("hanim_vt6");
HAnimJoint553->setCenter(new float[3]{0.0059,1.3866,-0.08});
HAnimJoint553->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment554 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment554->setName("t6");
HAnimSegment554->setDEF("hanim_t6");
//<HAnimJoint name='vt6'/> visualization sphere is placed within <HAnimSegment name='t6'/>
CTouchSensor* TouchSensor555 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor555->setDescription("HAnimJoint vt6, HAnimSegment t6");
HAnimSegment554->addChildren(TouchSensor555);

CTransform* Transform556 = (CTransform *)m_pScene.createNode("Transform");
Transform556->setTranslation(new float[3]{0.0059,1.3866,-0.08});
CShape* Shape557 = (CShape *)m_pScene.createNode("Shape");
Shape557->setUSE("HAnimJointShape");
Transform556->addChildren(Shape557);

HAnimSegment554->addChildren(Transform556);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt6'/> to <HAnimJoint name='vt5'/>
CShape* Shape558 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet559 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet559->setVertexCount(new int[1]{2});
CCoordinate* Coordinate560 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate560->setPoint(new float[6]{0.0059,1.3866,-0.08,0.006,1.4102,-0.0745});
LineSet559->setCoord(Coordinate560);

CColorRGBA* ColorRGBA561 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA561->setUSE("HAnimSegmentLineColorRGBA");
LineSet559->setColor(ColorRGBA561);

Shape558->setGeometry(LineSet559);

HAnimSegment554->addChildren(Shape558);

HAnimJoint553->addChildren(HAnimSegment554);

CHAnimJoint* HAnimJoint562 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint562->setName("vt5");
HAnimJoint562->setDEF("hanim_vt5");
HAnimJoint562->setCenter(new float[3]{0.006,1.4102,-0.0745});
HAnimJoint562->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment563 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment563->setName("t5");
HAnimSegment563->setDEF("hanim_t5");
//<HAnimJoint name='vt5'/> visualization sphere is placed within <HAnimSegment name='t5'/>
CTouchSensor* TouchSensor564 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor564->setDescription("HAnimJoint vt5, HAnimSegment t5");
HAnimSegment563->addChildren(TouchSensor564);

CTransform* Transform565 = (CTransform *)m_pScene.createNode("Transform");
Transform565->setTranslation(new float[3]{0.006,1.4102,-0.0745});
CShape* Shape566 = (CShape *)m_pScene.createNode("Shape");
Shape566->setUSE("HAnimJointShape");
Transform565->addChildren(Shape566);

HAnimSegment563->addChildren(Transform565);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt5'/> to <HAnimJoint name='vt4'/>
CShape* Shape567 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet568 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet568->setVertexCount(new int[1]{2});
CCoordinate* Coordinate569 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate569->setPoint(new float[6]{0.006,1.4102,-0.0745,0.0061,1.432,-0.0675});
LineSet568->setCoord(Coordinate569);

CColorRGBA* ColorRGBA570 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA570->setUSE("HAnimSegmentLineColorRGBA");
LineSet568->setColor(ColorRGBA570);

Shape567->setGeometry(LineSet568);

HAnimSegment563->addChildren(Shape567);

HAnimJoint562->addChildren(HAnimSegment563);

CHAnimJoint* HAnimJoint571 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint571->setName("vt4");
HAnimJoint571->setDEF("hanim_vt4");
HAnimJoint571->setCenter(new float[3]{0.0061,1.432,-0.0675});
HAnimJoint571->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment572 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment572->setName("t4");
HAnimSegment572->setDEF("hanim_t4");
//<HAnimJoint name='vt4'/> visualization sphere is placed within <HAnimSegment name='t4'/>
CTouchSensor* TouchSensor573 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor573->setDescription("HAnimJoint vt4, HAnimSegment t4");
HAnimSegment572->addChildren(TouchSensor573);

CTransform* Transform574 = (CTransform *)m_pScene.createNode("Transform");
Transform574->setTranslation(new float[3]{0.0061,1.432,-0.0675});
CShape* Shape575 = (CShape *)m_pScene.createNode("Shape");
Shape575->setUSE("HAnimJointShape");
Transform574->addChildren(Shape575);

HAnimSegment572->addChildren(Transform574);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt4'/> to <HAnimJoint name='vt3'/>
CShape* Shape576 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet577 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet577->setVertexCount(new int[1]{2});
CCoordinate* Coordinate578 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate578->setPoint(new float[6]{0.0061,1.432,-0.0675,0.0062,1.4583,-0.057});
LineSet577->setCoord(Coordinate578);

CColorRGBA* ColorRGBA579 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA579->setUSE("HAnimSegmentLineColorRGBA");
LineSet577->setColor(ColorRGBA579);

Shape576->setGeometry(LineSet577);

HAnimSegment572->addChildren(Shape576);

HAnimJoint571->addChildren(HAnimSegment572);

CHAnimJoint* HAnimJoint580 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint580->setName("vt3");
HAnimJoint580->setDEF("hanim_vt3");
HAnimJoint580->setCenter(new float[3]{0.0062,1.4583,-0.057});
HAnimJoint580->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment581 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment581->setName("t3");
HAnimSegment581->setDEF("hanim_t3");
//<HAnimJoint name='vt3'/> visualization sphere is placed within <HAnimSegment name='t3'/>
CTouchSensor* TouchSensor582 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor582->setDescription("HAnimJoint vt3, HAnimSegment t3");
HAnimSegment581->addChildren(TouchSensor582);

CTransform* Transform583 = (CTransform *)m_pScene.createNode("Transform");
Transform583->setTranslation(new float[3]{0.0062,1.4583,-0.057});
CShape* Shape584 = (CShape *)m_pScene.createNode("Shape");
Shape584->setUSE("HAnimJointShape");
Transform583->addChildren(Shape584);

HAnimSegment581->addChildren(Transform583);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt3'/> to <HAnimJoint name='vt2'/>
CShape* Shape585 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet586 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet586->setVertexCount(new int[1]{2});
CCoordinate* Coordinate587 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate587->setPoint(new float[6]{0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484});
LineSet586->setCoord(Coordinate587);

CColorRGBA* ColorRGBA588 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA588->setUSE("HAnimSegmentLineColorRGBA");
LineSet586->setColor(ColorRGBA588);

Shape585->setGeometry(LineSet586);

HAnimSegment581->addChildren(Shape585);

HAnimJoint580->addChildren(HAnimSegment581);

CHAnimJoint* HAnimJoint589 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint589->setName("vt2");
HAnimJoint589->setDEF("hanim_vt2");
HAnimJoint589->setCenter(new float[3]{0.0063,1.4761,-0.0484});
HAnimJoint589->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment590 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment590->setName("t2");
HAnimSegment590->setDEF("hanim_t2");
//<HAnimJoint name='vt2'/> visualization sphere is placed within <HAnimSegment name='t2'/>
CTouchSensor* TouchSensor591 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor591->setDescription("HAnimJoint vt2, HAnimSegment t2");
HAnimSegment590->addChildren(TouchSensor591);

CTransform* Transform592 = (CTransform *)m_pScene.createNode("Transform");
Transform592->setTranslation(new float[3]{0.0063,1.4761,-0.0484});
CShape* Shape593 = (CShape *)m_pScene.createNode("Shape");
Shape593->setUSE("HAnimJointShape");
Transform592->addChildren(Shape593);

HAnimSegment590->addChildren(Transform592);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt2'/> to <HAnimJoint name='vt1'/>
CShape* Shape594 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet595 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet595->setVertexCount(new int[1]{2});
CCoordinate* Coordinate596 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate596->setPoint(new float[6]{0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387});
LineSet595->setCoord(Coordinate596);

CColorRGBA* ColorRGBA597 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA597->setUSE("HAnimSegmentLineColorRGBA");
LineSet595->setColor(ColorRGBA597);

Shape594->setGeometry(LineSet595);

HAnimSegment590->addChildren(Shape594);

HAnimJoint589->addChildren(HAnimSegment590);

CHAnimJoint* HAnimJoint598 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint598->setName("vt1");
HAnimJoint598->setDEF("hanim_vt1");
HAnimJoint598->setCenter(new float[3]{0.0065,1.4951,-0.0387});
HAnimJoint598->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment599 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment599->setName("t1");
HAnimSegment599->setDEF("hanim_t1");
//<HAnimJoint name='vt1'/> visualization sphere is placed within <HAnimSegment name='t1'/>
CTouchSensor* TouchSensor600 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor600->setDescription("HAnimJoint vt1, HAnimSegment t1");
HAnimSegment599->addChildren(TouchSensor600);

CTransform* Transform601 = (CTransform *)m_pScene.createNode("Transform");
Transform601->setTranslation(new float[3]{0.0065,1.4951,-0.0387});
CShape* Shape602 = (CShape *)m_pScene.createNode("Shape");
Shape602->setUSE("HAnimJointShape");
Transform601->addChildren(Shape602);

HAnimSegment599->addChildren(Transform601);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='vc7'/>
CShape* Shape603 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet604 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet604->setVertexCount(new int[1]{2});
CCoordinate* Coordinate605 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate605->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301});
LineSet604->setCoord(Coordinate605);

CColorRGBA* ColorRGBA606 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA606->setUSE("HAnimSegmentLineColorRGBA");
LineSet604->setColor(ColorRGBA606);

Shape603->setGeometry(LineSet604);

HAnimSegment599->addChildren(Shape603);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='l_sternoclavicular'/>
CShape* Shape607 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet608 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet608->setVertexCount(new int[1]{2});
CCoordinate* Coordinate609 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate609->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353});
LineSet608->setCoord(Coordinate609);

CColorRGBA* ColorRGBA610 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA610->setUSE("HAnimSegmentLineColorRGBA");
LineSet608->setColor(ColorRGBA610);

Shape607->setGeometry(LineSet608);

HAnimSegment599->addChildren(Shape607);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='r_sternoclavicular'/>
CShape* Shape611 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet612 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet612->setVertexCount(new int[1]{2});
CCoordinate* Coordinate613 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate613->setPoint(new float[6]{0.0065,1.4951,-0.0387,-0.082,1.4488,-0.0353});
LineSet612->setCoord(Coordinate613);

CColorRGBA* ColorRGBA614 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA614->setUSE("HAnimSegmentLineColorRGBA");
LineSet612->setColor(ColorRGBA614);

Shape611->setGeometry(LineSet612);

HAnimSegment599->addChildren(Shape611);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='suprasternale'/>
CShape* Shape615 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet616 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet616->setVertexCount(new int[1]{2});
CCoordinate* Coordinate617 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate617->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.0084,1.4714,0.0551});
LineSet616->setCoord(Coordinate617);

CColorRGBA* ColorRGBA618 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA618->setUSE("HAnimSiteLineColorRGBA");
LineSet616->setColor(ColorRGBA618);

Shape615->setGeometry(LineSet616);

HAnimSegment599->addChildren(Shape615);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='cervicale'/>
CShape* Shape619 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet620 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet620->setVertexCount(new int[1]{2});
CCoordinate* Coordinate621 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate621->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.0064,1.52,-0.0815});
LineSet620->setCoord(Coordinate621);

CColorRGBA* ColorRGBA622 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA622->setUSE("HAnimSiteLineColorRGBA");
LineSet620->setColor(ColorRGBA622);

Shape619->setGeometry(LineSet620);

HAnimSegment599->addChildren(Shape619);

CHAnimSite* HAnimSite623 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite623->setName("suprasternale_pt");
HAnimSite623->setDEF("hanim_suprasternale_pt");
HAnimSite623->setTranslation(new float[3]{0.0084,1.4714,0.0551});
//HAnimSite visualization shape
CTouchSensor* TouchSensor624 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor624->setDescription("HAnimSite suprasternale");
HAnimSite623->addChildren(TouchSensor624);

CShape* Shape625 = (CShape *)m_pScene.createNode("Shape");
Shape625->setUSE("HAnimSiteShape");
HAnimSite623->addChildren(Shape625);

HAnimSegment599->addChildren(HAnimSite623);

CHAnimSite* HAnimSite626 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite626->setName("cervicale_pt");
HAnimSite626->setDEF("hanim_cervicale_pt");
HAnimSite626->setTranslation(new float[3]{0.0064,1.52,-0.0815});
//HAnimSite visualization shape
CTouchSensor* TouchSensor627 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor627->setDescription("HAnimSite cervicale");
HAnimSite626->addChildren(TouchSensor627);

CShape* Shape628 = (CShape *)m_pScene.createNode("Shape");
Shape628->setUSE("HAnimSiteShape");
HAnimSite626->addChildren(Shape628);

HAnimSegment599->addChildren(HAnimSite626);

HAnimJoint598->addChildren(HAnimSegment599);

CHAnimJoint* HAnimJoint629 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint629->setName("vc7");
HAnimJoint629->setDEF("hanim_vc7");
HAnimJoint629->setCenter(new float[3]{0.0066,1.5132,-0.0301});
HAnimJoint629->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment630 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment630->setName("c7");
HAnimSegment630->setDEF("hanim_c7");
//<HAnimJoint name='vc7'/> visualization sphere is placed within <HAnimSegment name='c7'/>
CTouchSensor* TouchSensor631 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor631->setDescription("HAnimJoint vc7, HAnimSegment c7");
HAnimSegment630->addChildren(TouchSensor631);

CTransform* Transform632 = (CTransform *)m_pScene.createNode("Transform");
Transform632->setTranslation(new float[3]{0.0066,1.5132,-0.0301});
CShape* Shape633 = (CShape *)m_pScene.createNode("Shape");
Shape633->setUSE("HAnimJointShape");
Transform632->addChildren(Shape633);

HAnimSegment630->addChildren(Transform632);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc7'/> to <HAnimJoint name='vc6'/>
CShape* Shape634 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet635 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet635->setVertexCount(new int[1]{2});
CCoordinate* Coordinate636 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate636->setPoint(new float[6]{0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143});
LineSet635->setCoord(Coordinate636);

CColorRGBA* ColorRGBA637 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA637->setUSE("HAnimSegmentLineColorRGBA");
LineSet635->setColor(ColorRGBA637);

Shape634->setGeometry(LineSet635);

HAnimSegment630->addChildren(Shape634);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='r_neck_base'/>
CShape* Shape638 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet639 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet639->setVertexCount(new int[1]{2});
CCoordinate* Coordinate640 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate640->setPoint(new float[6]{0.0066,1.5132,-0.0301,-0.0419,1.5149,-0.022});
LineSet639->setCoord(Coordinate640);

CColorRGBA* ColorRGBA641 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA641->setUSE("HAnimSiteLineColorRGBA");
LineSet639->setColor(ColorRGBA641);

Shape638->setGeometry(LineSet639);

HAnimSegment630->addChildren(Shape638);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='l_neck_base'/>
CShape* Shape642 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet643 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet643->setVertexCount(new int[1]{2});
CCoordinate* Coordinate644 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate644->setPoint(new float[6]{0.0066,1.5132,-0.0301,0.0646,1.5141,-0.038});
LineSet643->setCoord(Coordinate644);

CColorRGBA* ColorRGBA645 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA645->setUSE("HAnimSiteLineColorRGBA");
LineSet643->setColor(ColorRGBA645);

Shape642->setGeometry(LineSet643);

HAnimSegment630->addChildren(Shape642);

CHAnimSite* HAnimSite646 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite646->setName("r_neck_base_pt");
HAnimSite646->setDEF("hanim_r_neck_base_pt");
HAnimSite646->setTranslation(new float[3]{-0.0419,1.5149,-0.022});
//HAnimSite visualization shape
CTouchSensor* TouchSensor647 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor647->setDescription("HAnimSite r_neck_base");
HAnimSite646->addChildren(TouchSensor647);

CShape* Shape648 = (CShape *)m_pScene.createNode("Shape");
Shape648->setUSE("HAnimSiteShape");
HAnimSite646->addChildren(Shape648);

HAnimSegment630->addChildren(HAnimSite646);

CHAnimSite* HAnimSite649 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite649->setName("l_neck_base_pt");
HAnimSite649->setDEF("hanim_l_neck_base_pt");
HAnimSite649->setTranslation(new float[3]{0.0646,1.5141,-0.038});
//HAnimSite visualization shape
CTouchSensor* TouchSensor650 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor650->setDescription("HAnimSite l_neck_base");
HAnimSite649->addChildren(TouchSensor650);

CShape* Shape651 = (CShape *)m_pScene.createNode("Shape");
Shape651->setUSE("HAnimSiteShape");
HAnimSite649->addChildren(Shape651);

HAnimSegment630->addChildren(HAnimSite649);

HAnimJoint629->addChildren(HAnimSegment630);

CHAnimJoint* HAnimJoint652 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint652->setName("vc6");
HAnimJoint652->setDEF("hanim_vc6");
HAnimJoint652->setCenter(new float[3]{0.0066,1.5357,-0.0143});
HAnimJoint652->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment653 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment653->setName("c6");
HAnimSegment653->setDEF("hanim_c6");
//<HAnimJoint name='vc6'/> visualization sphere is placed within <HAnimSegment name='c6'/>
CTouchSensor* TouchSensor654 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor654->setDescription("HAnimJoint vc6, HAnimSegment c6");
HAnimSegment653->addChildren(TouchSensor654);

CTransform* Transform655 = (CTransform *)m_pScene.createNode("Transform");
Transform655->setTranslation(new float[3]{0.0066,1.5357,-0.0143});
CShape* Shape656 = (CShape *)m_pScene.createNode("Shape");
Shape656->setUSE("HAnimJointShape");
Transform655->addChildren(Shape656);

HAnimSegment653->addChildren(Transform655);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc6'/> to <HAnimJoint name='vc5'/>
CShape* Shape657 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet658 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet658->setVertexCount(new int[1]{2});
CCoordinate* Coordinate659 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate659->setPoint(new float[6]{0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082});
LineSet658->setCoord(Coordinate659);

CColorRGBA* ColorRGBA660 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA660->setUSE("HAnimSegmentLineColorRGBA");
LineSet658->setColor(ColorRGBA660);

Shape657->setGeometry(LineSet658);

HAnimSegment653->addChildren(Shape657);

HAnimJoint652->addChildren(HAnimSegment653);

CHAnimJoint* HAnimJoint661 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint661->setName("vc5");
HAnimJoint661->setDEF("hanim_vc5");
HAnimJoint661->setCenter(new float[3]{0.0066,1.552,-0.0082});
HAnimJoint661->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment662 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment662->setName("c5");
HAnimSegment662->setDEF("hanim_c5");
//<HAnimJoint name='vc5'/> visualization sphere is placed within <HAnimSegment name='c5'/>
CTouchSensor* TouchSensor663 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor663->setDescription("HAnimJoint vc5, HAnimSegment c5");
HAnimSegment662->addChildren(TouchSensor663);

CTransform* Transform664 = (CTransform *)m_pScene.createNode("Transform");
Transform664->setTranslation(new float[3]{0.0066,1.552,-0.0082});
CShape* Shape665 = (CShape *)m_pScene.createNode("Shape");
Shape665->setUSE("HAnimJointShape");
Transform664->addChildren(Shape665);

HAnimSegment662->addChildren(Transform664);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc5'/> to <HAnimJoint name='vc4'/>
CShape* Shape666 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet667 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet667->setVertexCount(new int[1]{2});
CCoordinate* Coordinate668 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate668->setPoint(new float[6]{0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084});
LineSet667->setCoord(Coordinate668);

CColorRGBA* ColorRGBA669 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA669->setUSE("HAnimSegmentLineColorRGBA");
LineSet667->setColor(ColorRGBA669);

Shape666->setGeometry(LineSet667);

HAnimSegment662->addChildren(Shape666);

HAnimJoint661->addChildren(HAnimSegment662);

CHAnimJoint* HAnimJoint670 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint670->setName("vc4");
HAnimJoint670->setDEF("hanim_vc4");
HAnimJoint670->setCenter(new float[3]{0.0066,1.5662,-0.0084});
HAnimJoint670->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment671 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment671->setName("c4");
HAnimSegment671->setDEF("hanim_c4");
//<HAnimJoint name='vc4'/> visualization sphere is placed within <HAnimSegment name='c4'/>
CTouchSensor* TouchSensor672 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor672->setDescription("HAnimJoint vc4, HAnimSegment c4");
HAnimSegment671->addChildren(TouchSensor672);

CTransform* Transform673 = (CTransform *)m_pScene.createNode("Transform");
Transform673->setTranslation(new float[3]{0.0066,1.5662,-0.0084});
CShape* Shape674 = (CShape *)m_pScene.createNode("Shape");
Shape674->setUSE("HAnimJointShape");
Transform673->addChildren(Shape674);

HAnimSegment671->addChildren(Transform673);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc4'/> to <HAnimJoint name='vc3'/>
CShape* Shape675 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet676 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet676->setVertexCount(new int[1]{2});
CCoordinate* Coordinate677 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate677->setPoint(new float[6]{0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103});
LineSet676->setCoord(Coordinate677);

CColorRGBA* ColorRGBA678 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA678->setUSE("HAnimSegmentLineColorRGBA");
LineSet676->setColor(ColorRGBA678);

Shape675->setGeometry(LineSet676);

HAnimSegment671->addChildren(Shape675);

HAnimJoint670->addChildren(HAnimSegment671);

CHAnimJoint* HAnimJoint679 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint679->setName("vc3");
HAnimJoint679->setDEF("hanim_vc3");
HAnimJoint679->setCenter(new float[3]{0.0066,1.58,-0.0103});
HAnimJoint679->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment680 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment680->setName("c3");
HAnimSegment680->setDEF("hanim_c3");
//<HAnimJoint name='vc3'/> visualization sphere is placed within <HAnimSegment name='c3'/>
CTouchSensor* TouchSensor681 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor681->setDescription("HAnimJoint vc3, HAnimSegment c3");
HAnimSegment680->addChildren(TouchSensor681);

CTransform* Transform682 = (CTransform *)m_pScene.createNode("Transform");
Transform682->setTranslation(new float[3]{0.0066,1.58,-0.0103});
CShape* Shape683 = (CShape *)m_pScene.createNode("Shape");
Shape683->setUSE("HAnimJointShape");
Transform682->addChildren(Shape683);

HAnimSegment680->addChildren(Transform682);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc3'/> to <HAnimJoint name='vc2'/>
CShape* Shape684 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet685 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet685->setVertexCount(new int[1]{2});
CCoordinate* Coordinate686 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate686->setPoint(new float[6]{0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103});
LineSet685->setCoord(Coordinate686);

CColorRGBA* ColorRGBA687 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA687->setUSE("HAnimSegmentLineColorRGBA");
LineSet685->setColor(ColorRGBA687);

Shape684->setGeometry(LineSet685);

HAnimSegment680->addChildren(Shape684);

HAnimJoint679->addChildren(HAnimSegment680);

CHAnimJoint* HAnimJoint688 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint688->setName("vc2");
HAnimJoint688->setDEF("hanim_vc2");
HAnimJoint688->setCenter(new float[3]{0.0066,1.5928,-0.0103});
HAnimJoint688->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment689 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment689->setName("c2");
HAnimSegment689->setDEF("hanim_c2");
//<HAnimJoint name='vc2'/> visualization sphere is placed within <HAnimSegment name='c2'/>
CTouchSensor* TouchSensor690 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor690->setDescription("HAnimJoint vc2, HAnimSegment c2");
HAnimSegment689->addChildren(TouchSensor690);

CTransform* Transform691 = (CTransform *)m_pScene.createNode("Transform");
Transform691->setTranslation(new float[3]{0.0066,1.5928,-0.0103});
CShape* Shape692 = (CShape *)m_pScene.createNode("Shape");
Shape692->setUSE("HAnimJointShape");
Transform691->addChildren(Shape692);

HAnimSegment689->addChildren(Transform691);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc2'/> to <HAnimJoint name='vc1'/>
CShape* Shape693 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet694 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet694->setVertexCount(new int[1]{2});
CCoordinate* Coordinate695 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate695->setPoint(new float[6]{0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034});
LineSet694->setCoord(Coordinate695);

CColorRGBA* ColorRGBA696 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA696->setUSE("HAnimSegmentLineColorRGBA");
LineSet694->setColor(ColorRGBA696);

Shape693->setGeometry(LineSet694);

HAnimSegment689->addChildren(Shape693);

HAnimJoint688->addChildren(HAnimSegment689);

CHAnimJoint* HAnimJoint697 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint697->setName("vc1");
HAnimJoint697->setDEF("hanim_vc1");
HAnimJoint697->setCenter(new float[3]{0.0066,1.6144,-0.0034});
HAnimJoint697->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment698 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment698->setName("c1");
HAnimSegment698->setDEF("hanim_c1");
//<HAnimJoint name='vc1'/> visualization sphere is placed within <HAnimSegment name='c1'/>
CTouchSensor* TouchSensor699 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor699->setDescription("HAnimJoint vc1, HAnimSegment c1");
HAnimSegment698->addChildren(TouchSensor699);

CTransform* Transform700 = (CTransform *)m_pScene.createNode("Transform");
Transform700->setTranslation(new float[3]{0.0066,1.6144,-0.0034});
CShape* Shape701 = (CShape *)m_pScene.createNode("Shape");
Shape701->setUSE("HAnimJointShape");
Transform700->addChildren(Shape701);

HAnimSegment698->addChildren(Transform700);

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc1'/> to <HAnimJoint name='skullbase'/>
CShape* Shape702 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet703 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet703->setVertexCount(new int[1]{2});
CCoordinate* Coordinate704 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate704->setPoint(new float[6]{0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236});
LineSet703->setCoord(Coordinate704);

CColorRGBA* ColorRGBA705 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA705->setUSE("HAnimSegmentLineColorRGBA");
LineSet703->setColor(ColorRGBA705);

Shape702->setGeometry(LineSet703);

HAnimSegment698->addChildren(Shape702);

HAnimJoint697->addChildren(HAnimSegment698);

CHAnimJoint* HAnimJoint706 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint706->setName("skullbase");
HAnimJoint706->setDEF("hanim_skullbase");
HAnimJoint706->setCenter(new float[3]{0.0044,1.6209,0.0236});
HAnimJoint706->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment707 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment707->setName("skull");
HAnimSegment707->setDEF("hanim_skull");
//<HAnimJoint name='skullbase'/> visualization sphere is placed within <HAnimSegment name='skull'/>
CTouchSensor* TouchSensor708 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor708->setDescription("HAnimJoint skullbase, HAnimSegment skull");
HAnimSegment707->addChildren(TouchSensor708);

CTransform* Transform709 = (CTransform *)m_pScene.createNode("Transform");
Transform709->setTranslation(new float[3]{0.0044,1.6209,0.0236});
CShape* Shape710 = (CShape *)m_pScene.createNode("Shape");
Shape710->setUSE("HAnimJointShape");
Transform709->addChildren(Shape710);

HAnimSegment707->addChildren(Transform709);

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyeball_joint'/>
CShape* Shape711 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet712 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet712->setVertexCount(new int[1]{2});
CCoordinate* Coordinate713 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate713->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0336,1.6332,0.0502});
LineSet712->setCoord(Coordinate713);

CColorRGBA* ColorRGBA714 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA714->setUSE("HAnimSegmentLineColorRGBA");
LineSet712->setColor(ColorRGBA714);

Shape711->setGeometry(LineSet712);

HAnimSegment707->addChildren(Shape711);

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyelid_joint'/>
CShape* Shape715 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet716 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet716->setVertexCount(new int[1]{2});
CCoordinate* Coordinate717 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate717->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0336,1.6332,0.0502});
LineSet716->setCoord(Coordinate717);

CColorRGBA* ColorRGBA718 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA718->setUSE("HAnimSegmentLineColorRGBA");
LineSet716->setColor(ColorRGBA718);

Shape715->setGeometry(LineSet716);

HAnimSegment707->addChildren(Shape715);

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyebrow_joint'/>
CShape* Shape719 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet720 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet720->setVertexCount(new int[1]{2});
CCoordinate* Coordinate721 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate721->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0336,1.635,0.0506});
LineSet720->setCoord(Coordinate721);

CColorRGBA* ColorRGBA722 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA722->setUSE("HAnimSegmentLineColorRGBA");
LineSet720->setColor(ColorRGBA722);

Shape719->setGeometry(LineSet720);

HAnimSegment707->addChildren(Shape719);

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyeball_joint'/>
CShape* Shape723 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet724 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet724->setVertexCount(new int[1]{2});
CCoordinate* Coordinate725 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate725->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502});
LineSet724->setCoord(Coordinate725);

CColorRGBA* ColorRGBA726 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA726->setUSE("HAnimSegmentLineColorRGBA");
LineSet724->setColor(ColorRGBA726);

Shape723->setGeometry(LineSet724);

HAnimSegment707->addChildren(Shape723);

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyelid_joint'/>
CShape* Shape727 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet728 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet728->setVertexCount(new int[1]{2});
CCoordinate* Coordinate729 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate729->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502});
LineSet728->setCoord(Coordinate729);

CColorRGBA* ColorRGBA730 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA730->setUSE("HAnimSegmentLineColorRGBA");
LineSet728->setColor(ColorRGBA730);

Shape727->setGeometry(LineSet728);

HAnimSegment707->addChildren(Shape727);

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyebrow_joint'/>
CShape* Shape731 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet732 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet732->setVertexCount(new int[1]{2});
CCoordinate* Coordinate733 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate733->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0336,1.635,0.0506});
LineSet732->setCoord(Coordinate733);

CColorRGBA* ColorRGBA734 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA734->setUSE("HAnimSegmentLineColorRGBA");
LineSet732->setColor(ColorRGBA734);

Shape731->setGeometry(LineSet732);

HAnimSegment707->addChildren(Shape731);

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='temporomandibular'/>
CShape* Shape735 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet736 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet736->setVertexCount(new int[1]{2});
CCoordinate* Coordinate737 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate737->setPoint(new float[6]{0.0044,1.6209,0.0236,0,1.63,0.015});
LineSet736->setCoord(Coordinate737);

CColorRGBA* ColorRGBA738 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA738->setUSE("HAnimSegmentLineColorRGBA");
LineSet736->setColor(ColorRGBA738);

Shape735->setGeometry(LineSet736);

HAnimSegment707->addChildren(Shape735);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='skull_tip'/>
CShape* Shape739 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet740 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet740->setVertexCount(new int[1]{2});
CCoordinate* Coordinate741 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate741->setPoint(new float[6]{0.0044,1.6209,0.0236,0.005,1.7504,0.0055});
LineSet740->setCoord(Coordinate741);

CColorRGBA* ColorRGBA742 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA742->setUSE("HAnimSiteLineColorRGBA");
LineSet740->setColor(ColorRGBA742);

Shape739->setGeometry(LineSet740);

HAnimSegment707->addChildren(Shape739);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='sellion'/>
CShape* Shape743 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet744 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet744->setVertexCount(new int[1]{2});
CCoordinate* Coordinate745 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate745->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0058,1.6316,0.0852});
LineSet744->setCoord(Coordinate745);

CColorRGBA* ColorRGBA746 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA746->setUSE("HAnimSiteLineColorRGBA");
LineSet744->setColor(ColorRGBA746);

Shape743->setGeometry(LineSet744);

HAnimSegment707->addChildren(Shape743);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_infraorbitale'/>
CShape* Shape747 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet748 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet748->setVertexCount(new int[1]{2});
CCoordinate* Coordinate749 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate749->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0237,1.6171,0.0752});
LineSet748->setCoord(Coordinate749);

CColorRGBA* ColorRGBA750 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA750->setUSE("HAnimSiteLineColorRGBA");
LineSet748->setColor(ColorRGBA750);

Shape747->setGeometry(LineSet748);

HAnimSegment707->addChildren(Shape747);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_infraorbitale'/>
CShape* Shape751 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet752 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet752->setVertexCount(new int[1]{2});
CCoordinate* Coordinate753 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate753->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0341,1.6171,0.0752});
LineSet752->setCoord(Coordinate753);

CColorRGBA* ColorRGBA754 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA754->setUSE("HAnimSiteLineColorRGBA");
LineSet752->setColor(ColorRGBA754);

Shape751->setGeometry(LineSet752);

HAnimSegment707->addChildren(Shape751);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='supramenton'/>
CShape* Shape755 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet756 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet756->setVertexCount(new int[1]{2});
CCoordinate* Coordinate757 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate757->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0061,1.541,0.0805});
LineSet756->setCoord(Coordinate757);

CColorRGBA* ColorRGBA758 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA758->setUSE("HAnimSiteLineColorRGBA");
LineSet756->setColor(ColorRGBA758);

Shape755->setGeometry(LineSet756);

HAnimSegment707->addChildren(Shape755);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_tragion'/>
CShape* Shape759 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet760 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet760->setVertexCount(new int[1]{2});
CCoordinate* Coordinate761 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate761->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0646,1.6347,0.0302});
LineSet760->setCoord(Coordinate761);

CColorRGBA* ColorRGBA762 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA762->setUSE("HAnimSiteLineColorRGBA");
LineSet760->setColor(ColorRGBA762);

Shape759->setGeometry(LineSet760);

HAnimSegment707->addChildren(Shape759);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_gonion'/>
CShape* Shape763 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet764 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet764->setVertexCount(new int[1]{2});
CCoordinate* Coordinate765 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate765->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.052,1.5529,0.0347});
LineSet764->setCoord(Coordinate765);

CColorRGBA* ColorRGBA766 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA766->setUSE("HAnimSiteLineColorRGBA");
LineSet764->setColor(ColorRGBA766);

Shape763->setGeometry(LineSet764);

HAnimSegment707->addChildren(Shape763);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_tragion'/>
CShape* Shape767 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet768 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet768->setVertexCount(new int[1]{2});
CCoordinate* Coordinate769 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate769->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0739,1.6348,0.0282});
LineSet768->setCoord(Coordinate769);

CColorRGBA* ColorRGBA770 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA770->setUSE("HAnimSiteLineColorRGBA");
LineSet768->setColor(ColorRGBA770);

Shape767->setGeometry(LineSet768);

HAnimSegment707->addChildren(Shape767);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_gonion'/>
CShape* Shape771 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet772 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet772->setVertexCount(new int[1]{2});
CCoordinate* Coordinate773 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate773->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0631,1.553,0.033});
LineSet772->setCoord(Coordinate773);

CColorRGBA* ColorRGBA774 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA774->setUSE("HAnimSiteLineColorRGBA");
LineSet772->setColor(ColorRGBA774);

Shape771->setGeometry(LineSet772);

HAnimSegment707->addChildren(Shape771);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='nuchale'/>
CShape* Shape775 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet776 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet776->setVertexCount(new int[1]{2});
CCoordinate* Coordinate777 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate777->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0039,1.5972,-0.0796});
LineSet776->setCoord(Coordinate777);

CColorRGBA* ColorRGBA778 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA778->setUSE("HAnimSiteLineColorRGBA");
LineSet776->setColor(ColorRGBA778);

Shape775->setGeometry(LineSet776);

HAnimSegment707->addChildren(Shape775);

CHAnimSite* HAnimSite779 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite779->setName("skull_tip");
HAnimSite779->setDEF("hanim_skull_tip");
HAnimSite779->setTranslation(new float[3]{0.005,1.7504,0.0055});
//TODO move skull_tip x to zero, check others for symmetry
//HAnimSite visualization shape
CTouchSensor* TouchSensor780 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor780->setDescription("HAnimSite skull_tip");
HAnimSite779->addChildren(TouchSensor780);

CShape* Shape781 = (CShape *)m_pScene.createNode("Shape");
Shape781->setUSE("HAnimSiteShape");
HAnimSite779->addChildren(Shape781);

HAnimSegment707->addChildren(HAnimSite779);

CHAnimSite* HAnimSite782 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite782->setName("sellion_pt");
HAnimSite782->setDEF("hanim_sellion_pt");
HAnimSite782->setTranslation(new float[3]{0.0058,1.6316,0.0852});
//HAnimSite visualization shape
CTouchSensor* TouchSensor783 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor783->setDescription("HAnimSite sellion");
HAnimSite782->addChildren(TouchSensor783);

CShape* Shape784 = (CShape *)m_pScene.createNode("Shape");
Shape784->setUSE("HAnimSiteShape");
HAnimSite782->addChildren(Shape784);

HAnimSegment707->addChildren(HAnimSite782);

CHAnimSite* HAnimSite785 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite785->setName("r_infraorbitale_pt");
HAnimSite785->setDEF("hanim_r_infraorbitale_pt");
HAnimSite785->setTranslation(new float[3]{-0.0237,1.6171,0.0752});
//HAnimSite visualization shape
CTouchSensor* TouchSensor786 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor786->setDescription("HAnimSite r_infraorbitale");
HAnimSite785->addChildren(TouchSensor786);

CShape* Shape787 = (CShape *)m_pScene.createNode("Shape");
Shape787->setUSE("HAnimSiteShape");
HAnimSite785->addChildren(Shape787);

HAnimSegment707->addChildren(HAnimSite785);

CHAnimSite* HAnimSite788 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite788->setName("l_infraorbitale_pt");
HAnimSite788->setDEF("hanim_l_infraorbitale_pt");
HAnimSite788->setTranslation(new float[3]{0.0341,1.6171,0.0752});
//HAnimSite visualization shape
CTouchSensor* TouchSensor789 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor789->setDescription("HAnimSite l_infraorbitale");
HAnimSite788->addChildren(TouchSensor789);

CShape* Shape790 = (CShape *)m_pScene.createNode("Shape");
Shape790->setUSE("HAnimSiteShape");
HAnimSite788->addChildren(Shape790);

HAnimSegment707->addChildren(HAnimSite788);

CHAnimSite* HAnimSite791 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite791->setName("supramenton_pt");
HAnimSite791->setDEF("hanim_supramenton_pt");
HAnimSite791->setTranslation(new float[3]{0.0061,1.541,0.0805});
//HAnimSite visualization shape
CTouchSensor* TouchSensor792 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor792->setDescription("HAnimSite supramenton");
HAnimSite791->addChildren(TouchSensor792);

CShape* Shape793 = (CShape *)m_pScene.createNode("Shape");
Shape793->setUSE("HAnimSiteShape");
HAnimSite791->addChildren(Shape793);

HAnimSegment707->addChildren(HAnimSite791);

CHAnimSite* HAnimSite794 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite794->setName("r_tragion_pt");
HAnimSite794->setDEF("hanim_r_tragion_pt");
HAnimSite794->setTranslation(new float[3]{-0.0646,1.6347,0.0302});
//HAnimSite visualization shape
CTouchSensor* TouchSensor795 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor795->setDescription("HAnimSite r_tragion");
HAnimSite794->addChildren(TouchSensor795);

CShape* Shape796 = (CShape *)m_pScene.createNode("Shape");
Shape796->setUSE("HAnimSiteShape");
HAnimSite794->addChildren(Shape796);

HAnimSegment707->addChildren(HAnimSite794);

CHAnimSite* HAnimSite797 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite797->setName("r_gonion_pt");
HAnimSite797->setDEF("hanim_r_gonion_pt");
HAnimSite797->setTranslation(new float[3]{-0.052,1.5529,0.0347});
//HAnimSite visualization shape
CTouchSensor* TouchSensor798 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor798->setDescription("HAnimSite r_gonion");
HAnimSite797->addChildren(TouchSensor798);

CShape* Shape799 = (CShape *)m_pScene.createNode("Shape");
Shape799->setUSE("HAnimSiteShape");
HAnimSite797->addChildren(Shape799);

HAnimSegment707->addChildren(HAnimSite797);

CHAnimSite* HAnimSite800 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite800->setName("l_tragion_pt");
HAnimSite800->setDEF("hanim_l_tragion_pt");
HAnimSite800->setTranslation(new float[3]{0.0739,1.6348,0.0282});
//HAnimSite visualization shape
CTouchSensor* TouchSensor801 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor801->setDescription("HAnimSite l_tragion");
HAnimSite800->addChildren(TouchSensor801);

CShape* Shape802 = (CShape *)m_pScene.createNode("Shape");
Shape802->setUSE("HAnimSiteShape");
HAnimSite800->addChildren(Shape802);

HAnimSegment707->addChildren(HAnimSite800);

CHAnimSite* HAnimSite803 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite803->setName("l_gonion_pt");
HAnimSite803->setDEF("hanim_l_gonion_pt");
HAnimSite803->setTranslation(new float[3]{0.0631,1.553,0.033});
//HAnimSite visualization shape
CTouchSensor* TouchSensor804 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor804->setDescription("HAnimSite l_gonion");
HAnimSite803->addChildren(TouchSensor804);

CShape* Shape805 = (CShape *)m_pScene.createNode("Shape");
Shape805->setUSE("HAnimSiteShape");
HAnimSite803->addChildren(Shape805);

HAnimSegment707->addChildren(HAnimSite803);

CHAnimSite* HAnimSite806 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite806->setName("nuchale_pt");
HAnimSite806->setDEF("hanim_nuchale_pt");
HAnimSite806->setTranslation(new float[3]{0.0039,1.5972,-0.0796});
//HAnimSite visualization shape
CTouchSensor* TouchSensor807 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor807->setDescription("HAnimSite nuchale");
HAnimSite806->addChildren(TouchSensor807);

CShape* Shape808 = (CShape *)m_pScene.createNode("Shape");
Shape808->setUSE("HAnimSiteShape");
HAnimSite806->addChildren(Shape808);

HAnimSegment707->addChildren(HAnimSite806);

HAnimJoint706->addChildren(HAnimSegment707);

CHAnimJoint* HAnimJoint809 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint809->setName("l_eyeball_joint");
HAnimJoint809->setDEF("hanim_l_eyeball_joint");
HAnimJoint809->setCenter(new float[3]{0.0336,1.6332,0.0502});
HAnimJoint809->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment810 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment810->setName("l_eyeball");
HAnimSegment810->setDEF("hanim_l_eyeball");
//<HAnimJoint name='l_eyeball_joint'/> visualization sphere is placed within <HAnimSegment name='l_eyeball'/>
CTouchSensor* TouchSensor811 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor811->setDescription("HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball");
HAnimSegment810->addChildren(TouchSensor811);

CTransform* Transform812 = (CTransform *)m_pScene.createNode("Transform");
Transform812->setTranslation(new float[3]{0.0336,1.6332,0.0502});
CShape* Shape813 = (CShape *)m_pScene.createNode("Shape");
Shape813->setUSE("HAnimJointShape");
Transform812->addChildren(Shape813);

HAnimSegment810->addChildren(Transform812);

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_eyeball_joint'/> to <HAnimSite name='l_eyeball_site_view'/>
CShape* Shape814 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet815 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet815->setVertexCount(new int[1]{2});
CCoordinate* Coordinate816 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate816->setPoint(new float[6]{0.0336,1.6332,0.0502,0.034,1.64,0.05});
LineSet815->setCoord(Coordinate816);

CColorRGBA* ColorRGBA817 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA817->setDEF("HAnimSiteViewpointLineColorRGBA");
ColorRGBA817->setColor(new float[8]{0,0,1,1,0,0,1,0.1});
LineSet815->setColor(ColorRGBA817);

Shape814->setGeometry(LineSet815);

HAnimSegment810->addChildren(Shape814);

CHAnimSite* HAnimSite818 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite818->setName("l_eyeball_site_view");
HAnimSite818->setDEF("hanim_l_eyeball_site_view");
HAnimSite818->setTranslation(new float[3]{0.034,1.64,0.05});
//HAnimSite visualization shape
CTouchSensor* TouchSensor819 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor819->setDescription("HAnimSite l_eyeball_site_view");
HAnimSite818->addChildren(TouchSensor819);

CShape* Shape820 = (CShape *)m_pScene.createNode("Shape");
Shape820->setUSE("HAnimSiteShape");
HAnimSite818->addChildren(Shape820);

CViewpoint* Viewpoint821 = (CViewpoint *)m_pScene.createNode("Viewpoint");
Viewpoint821->setDEF("hanim_l_eyeball_site_viewpoint");
Viewpoint821->setDescription("l_eyeball_site_viewpoint looking forward");
Viewpoint821->setOrientation(new float[4]{0,1,0,3.141593});
Viewpoint821->setPosition(new float[3]{0,0,0});
HAnimSite818->addChildren(Viewpoint821);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor822 = (CAnchor *)m_pScene.createNode("Anchor");
Anchor822->setDescription("HAnimSite hanim_l_eyeball_site_view Viewpoint");
Anchor822->setUrl(new CString[1]{"#hanim_l_eyeball_site_viewpoint"}, 1);
CLOD* LOD823 = (CLOD *)m_pScene.createNode("LOD");
LOD823->setForceTransitions(True);
LOD823->setRange(new float[1]{0.04});
CWorldInfo* WorldInfo824 = (CWorldInfo *)m_pScene.createNode("WorldInfo");
WorldInfo824->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD823->addChildren(WorldInfo824);

CShape* Shape825 = (CShape *)m_pScene.createNode("Shape");
Shape825->setDEF("HAnimSiteViewpointShape");
CIndexedFaceSet* IndexedFaceSet826 = (CIndexedFaceSet *)m_pScene.createNode("IndexedFaceSet");
IndexedFaceSet826->setDEF("SiteViewpointDiamondIFS");
IndexedFaceSet826->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet826->setCreaseAngle(0.5);
CCoordinate* Coordinate827 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate827->setPoint(new float[18]{0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
IndexedFaceSet826->setCoord(Coordinate827);

Shape825->setGeometry(IndexedFaceSet826);

CAppearance* Appearance828 = (CAppearance *)m_pScene.createNode("Appearance");
CMaterial* Material829 = (CMaterial *)m_pScene.createNode("Material");
Material829->setDiffuseColor(new float[3]{0,0,1});
Material829->setTransparency(0.6);
Appearance828->setMaterial(Material829);

Shape825->setAppearance(Appearance828);

LOD823->addChildren(Shape825);

Anchor822->addChildren(LOD823);

HAnimSite818->addChildren(Anchor822);

HAnimSegment810->addChildren(HAnimSite818);

HAnimJoint809->addChildren(HAnimSegment810);

HAnimJoint706->addChildren(HAnimJoint809);

CHAnimJoint* HAnimJoint830 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint830->setName("l_eyelid_joint");
HAnimJoint830->setDEF("hanim_l_eyelid_joint");
HAnimJoint830->setCenter(new float[3]{0.0336,1.6332,0.0502});
HAnimJoint830->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment831 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment831->setName("l_eyelid");
HAnimSegment831->setDEF("hanim_l_eyelid");
//<HAnimJoint name='l_eyelid_joint'/> visualization sphere is placed within <HAnimSegment name='l_eyelid'/>
CTouchSensor* TouchSensor832 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor832->setDescription("HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid");
HAnimSegment831->addChildren(TouchSensor832);

CTransform* Transform833 = (CTransform *)m_pScene.createNode("Transform");
Transform833->setTranslation(new float[3]{0.0336,1.6332,0.0502});
CShape* Shape834 = (CShape *)m_pScene.createNode("Shape");
Shape834->setUSE("HAnimJointShape");
Transform833->addChildren(Shape834);

HAnimSegment831->addChildren(Transform833);

HAnimJoint830->addChildren(HAnimSegment831);

HAnimJoint706->addChildren(HAnimJoint830);

CHAnimJoint* HAnimJoint835 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint835->setName("l_eyebrow_joint");
HAnimJoint835->setDEF("hanim_l_eyebrow_joint");
HAnimJoint835->setCenter(new float[3]{0.0336,1.635,0.0506});
HAnimJoint835->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment836 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment836->setName("l_eyebrow");
HAnimSegment836->setDEF("hanim_l_eyebrow");
//<HAnimJoint name='l_eyebrow_joint'/> visualization sphere is placed within <HAnimSegment name='l_eyebrow'/>
CTouchSensor* TouchSensor837 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor837->setDescription("HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow");
HAnimSegment836->addChildren(TouchSensor837);

CTransform* Transform838 = (CTransform *)m_pScene.createNode("Transform");
Transform838->setTranslation(new float[3]{0.0336,1.635,0.0506});
CShape* Shape839 = (CShape *)m_pScene.createNode("Shape");
Shape839->setUSE("HAnimJointShape");
Transform838->addChildren(Shape839);

HAnimSegment836->addChildren(Transform838);

HAnimJoint835->addChildren(HAnimSegment836);

HAnimJoint706->addChildren(HAnimJoint835);

CHAnimJoint* HAnimJoint840 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint840->setName("r_eyeball_joint");
HAnimJoint840->setDEF("hanim_r_eyeball_joint");
HAnimJoint840->setCenter(new float[3]{-0.0336,1.6332,0.0502});
HAnimJoint840->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment841 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment841->setName("r_eyeball");
HAnimSegment841->setDEF("hanim_r_eyeball");
//<HAnimJoint name='r_eyeball_joint'/> visualization sphere is placed within <HAnimSegment name='r_eyeball'/>
CTouchSensor* TouchSensor842 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor842->setDescription("HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball");
HAnimSegment841->addChildren(TouchSensor842);

CTransform* Transform843 = (CTransform *)m_pScene.createNode("Transform");
Transform843->setTranslation(new float[3]{-0.0336,1.6332,0.0502});
CShape* Shape844 = (CShape *)m_pScene.createNode("Shape");
Shape844->setUSE("HAnimJointShape");
Transform843->addChildren(Shape844);

HAnimSegment841->addChildren(Transform843);

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_eyeball_joint'/> to <HAnimSite name='r_eyeball_site_view'/>
CShape* Shape845 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet846 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet846->setVertexCount(new int[1]{2});
CCoordinate* Coordinate847 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate847->setPoint(new float[6]{-0.0336,1.6332,0.0502,-0.034,1.64,0.05});
LineSet846->setCoord(Coordinate847);

CColorRGBA* ColorRGBA848 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA848->setUSE("HAnimSiteViewpointLineColorRGBA");
LineSet846->setColor(ColorRGBA848);

Shape845->setGeometry(LineSet846);

HAnimSegment841->addChildren(Shape845);

CHAnimSite* HAnimSite849 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite849->setName("r_eyeball_site_view");
HAnimSite849->setDEF("hanim_r_eyeball_site_view");
HAnimSite849->setTranslation(new float[3]{-0.034,1.64,0.05});
//HAnimSite visualization shape
CTouchSensor* TouchSensor850 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor850->setDescription("HAnimSite r_eyeball_site_view");
HAnimSite849->addChildren(TouchSensor850);

CShape* Shape851 = (CShape *)m_pScene.createNode("Shape");
Shape851->setUSE("HAnimSiteShape");
HAnimSite849->addChildren(Shape851);

CViewpoint* Viewpoint852 = (CViewpoint *)m_pScene.createNode("Viewpoint");
Viewpoint852->setDEF("hanim_r_eyeball_site_viewpoint");
Viewpoint852->setDescription("r_eyeball_site_viewpoint looking forward");
Viewpoint852->setOrientation(new float[4]{0,1,0,3.141593});
Viewpoint852->setPosition(new float[3]{0,0,0});
HAnimSite849->addChildren(Viewpoint852);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor853 = (CAnchor *)m_pScene.createNode("Anchor");
Anchor853->setDescription("HAnimSite hanim_r_eyeball_site_view Viewpoint");
Anchor853->setUrl(new CString[1]{"#hanim_r_eyeball_site_viewpoint"}, 1);
CLOD* LOD854 = (CLOD *)m_pScene.createNode("LOD");
LOD854->setForceTransitions(True);
LOD854->setRange(new float[1]{0.04});
CWorldInfo* WorldInfo855 = (CWorldInfo *)m_pScene.createNode("WorldInfo");
WorldInfo855->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD854->addChildren(WorldInfo855);

CShape* Shape856 = (CShape *)m_pScene.createNode("Shape");
Shape856->setUSE("HAnimSiteViewpointShape");
LOD854->addChildren(Shape856);

Anchor853->addChildren(LOD854);

HAnimSite849->addChildren(Anchor853);

HAnimSegment841->addChildren(HAnimSite849);

HAnimJoint840->addChildren(HAnimSegment841);

HAnimJoint706->addChildren(HAnimJoint840);

CHAnimJoint* HAnimJoint857 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint857->setName("r_eyelid_joint");
HAnimJoint857->setDEF("hanim_r_eyelid_joint");
HAnimJoint857->setCenter(new float[3]{-0.0336,1.6332,0.0502});
HAnimJoint857->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment858 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment858->setName("r_eyelid");
HAnimSegment858->setDEF("hanim_r_eyelid");
//<HAnimJoint name='r_eyelid_joint'/> visualization sphere is placed within <HAnimSegment name='r_eyelid'/>
CTouchSensor* TouchSensor859 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor859->setDescription("HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid");
HAnimSegment858->addChildren(TouchSensor859);

CTransform* Transform860 = (CTransform *)m_pScene.createNode("Transform");
Transform860->setTranslation(new float[3]{-0.0336,1.6332,0.0502});
CShape* Shape861 = (CShape *)m_pScene.createNode("Shape");
Shape861->setUSE("HAnimJointShape");
Transform860->addChildren(Shape861);

HAnimSegment858->addChildren(Transform860);

HAnimJoint857->addChildren(HAnimSegment858);

HAnimJoint706->addChildren(HAnimJoint857);

CHAnimJoint* HAnimJoint862 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint862->setName("r_eyebrow_joint");
HAnimJoint862->setDEF("hanim_r_eyebrow_joint");
HAnimJoint862->setCenter(new float[3]{-0.0336,1.635,0.0506});
HAnimJoint862->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment863 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment863->setName("r_eyebrow");
HAnimSegment863->setDEF("hanim_r_eyebrow");
//<HAnimJoint name='r_eyebrow_joint'/> visualization sphere is placed within <HAnimSegment name='r_eyebrow'/>
CTouchSensor* TouchSensor864 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor864->setDescription("HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow");
HAnimSegment863->addChildren(TouchSensor864);

CTransform* Transform865 = (CTransform *)m_pScene.createNode("Transform");
Transform865->setTranslation(new float[3]{-0.0336,1.635,0.0506});
CShape* Shape866 = (CShape *)m_pScene.createNode("Shape");
Shape866->setUSE("HAnimJointShape");
Transform865->addChildren(Shape866);

HAnimSegment863->addChildren(Transform865);

HAnimJoint862->addChildren(HAnimSegment863);

HAnimJoint706->addChildren(HAnimJoint862);

CHAnimJoint* HAnimJoint867 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint867->setName("temporomandibular");
HAnimJoint867->setDEF("hanim_temporomandibular");
HAnimJoint867->setCenter(new float[3]{0,1.63,0.015});
HAnimJoint867->setStiffness(new float[3]{0,0,0});
//Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint
CHAnimSegment* HAnimSegment868 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment868->setName("jaw");
HAnimSegment868->setDEF("hanim_jaw");
//<HAnimJoint name='temporomandibular'/> visualization sphere is placed within <HAnimSegment name='jaw'/>
CTouchSensor* TouchSensor869 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor869->setDescription("HAnimJoint temporomandibular, HAnimSegment jaw");
HAnimSegment868->addChildren(TouchSensor869);

CTransform* Transform870 = (CTransform *)m_pScene.createNode("Transform");
Transform870->setTranslation(new float[3]{0,1.63,0.015});
CShape* Shape871 = (CShape *)m_pScene.createNode("Shape");
Shape871->setUSE("HAnimJointShape");
Transform870->addChildren(Shape871);

HAnimSegment868->addChildren(Transform870);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_l_site'/>
CShape* Shape872 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet873 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet873->setVertexCount(new int[1]{2});
CCoordinate* Coordinate874 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate874->setPoint(new float[6]{0,1.63,0.015,0.045,1.63,0});
LineSet873->setCoord(Coordinate874);

CColorRGBA* ColorRGBA875 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA875->setUSE("HAnimSiteLineColorRGBA");
LineSet873->setColor(ColorRGBA875);

Shape872->setGeometry(LineSet873);

HAnimSegment868->addChildren(Shape872);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_r_site'/>
CShape* Shape876 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet877 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet877->setVertexCount(new int[1]{2});
CCoordinate* Coordinate878 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate878->setPoint(new float[6]{0,1.63,0.015,-0.045,1.63,0});
LineSet877->setCoord(Coordinate878);

CColorRGBA* ColorRGBA879 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA879->setUSE("HAnimSiteLineColorRGBA");
LineSet877->setColor(ColorRGBA879);

Shape876->setGeometry(LineSet877);

HAnimSegment868->addChildren(Shape876);

CHAnimSite* HAnimSite880 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite880->setName("temporomandibular_l_site_pt");
HAnimSite880->setDEF("hanim_temporomandibular_l_site_pt");
HAnimSite880->setTranslation(new float[3]{0.045,1.63,0});
//HAnimSite visualization shape
CTouchSensor* TouchSensor881 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor881->setDescription("HAnimSite temporomandibular_l_site");
HAnimSite880->addChildren(TouchSensor881);

CShape* Shape882 = (CShape *)m_pScene.createNode("Shape");
Shape882->setUSE("HAnimSiteShape");
HAnimSite880->addChildren(Shape882);

HAnimSegment868->addChildren(HAnimSite880);

CHAnimSite* HAnimSite883 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite883->setName("temporomandibular_r_site_pt");
HAnimSite883->setDEF("hanim_temporomandibular_r_site_pt");
HAnimSite883->setTranslation(new float[3]{-0.045,1.63,0});
//HAnimSite visualization shape
CTouchSensor* TouchSensor884 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor884->setDescription("HAnimSite temporomandibular_r_site");
HAnimSite883->addChildren(TouchSensor884);

CShape* Shape885 = (CShape *)m_pScene.createNode("Shape");
Shape885->setUSE("HAnimSiteShape");
HAnimSite883->addChildren(Shape885);

HAnimSegment868->addChildren(HAnimSite883);

HAnimJoint867->addChildren(HAnimSegment868);

HAnimJoint706->addChildren(HAnimJoint867);

HAnimJoint697->addChildren(HAnimJoint706);

HAnimJoint688->addChildren(HAnimJoint697);

HAnimJoint679->addChildren(HAnimJoint688);

HAnimJoint670->addChildren(HAnimJoint679);

HAnimJoint661->addChildren(HAnimJoint670);

HAnimJoint652->addChildren(HAnimJoint661);

HAnimJoint629->addChildren(HAnimJoint652);

HAnimJoint598->addChildren(HAnimJoint629);

CHAnimJoint* HAnimJoint886 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint886->setName("l_sternoclavicular");
HAnimJoint886->setDEF("hanim_l_sternoclavicular");
HAnimJoint886->setCenter(new float[3]{0.082,1.4488,-0.0353});
HAnimJoint886->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment887 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment887->setName("l_clavicle");
HAnimSegment887->setDEF("hanim_l_clavicle");
//<HAnimJoint name='l_sternoclavicular'/> visualization sphere is placed within <HAnimSegment name='l_clavicle'/>
CTouchSensor* TouchSensor888 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor888->setDescription("HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle");
HAnimSegment887->addChildren(TouchSensor888);

CTransform* Transform889 = (CTransform *)m_pScene.createNode("Transform");
Transform889->setTranslation(new float[3]{0.082,1.4488,-0.0353});
CShape* Shape890 = (CShape *)m_pScene.createNode("Shape");
Shape890->setUSE("HAnimJointShape");
Transform889->addChildren(Shape890);

HAnimSegment887->addChildren(Transform889);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_sternoclavicular'/> to <HAnimJoint name='l_acromioclavicular'/>
CShape* Shape891 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet892 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet892->setVertexCount(new int[1]{2});
CCoordinate* Coordinate893 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate893->setPoint(new float[6]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424});
LineSet892->setCoord(Coordinate893);

CColorRGBA* ColorRGBA894 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA894->setUSE("HAnimSegmentLineColorRGBA");
LineSet892->setColor(ColorRGBA894);

Shape891->setGeometry(LineSet892);

HAnimSegment887->addChildren(Shape891);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_clavicale'/>
CShape* Shape895 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet896 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet896->setVertexCount(new int[1]{2});
CCoordinate* Coordinate897 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate897->setPoint(new float[6]{0.082,1.4488,-0.0353,0.0271,1.4943,0.0394});
LineSet896->setCoord(Coordinate897);

CColorRGBA* ColorRGBA898 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA898->setUSE("HAnimSiteLineColorRGBA");
LineSet896->setColor(ColorRGBA898);

Shape895->setGeometry(LineSet896);

HAnimSegment887->addChildren(Shape895);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_acromion'/>
CShape* Shape899 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet900 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet900->setVertexCount(new int[1]{2});
CCoordinate* Coordinate901 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate901->setPoint(new float[6]{0.082,1.4488,-0.0353,0.2032,1.476,-0.049});
LineSet900->setCoord(Coordinate901);

CColorRGBA* ColorRGBA902 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA902->setUSE("HAnimSiteLineColorRGBA");
LineSet900->setColor(ColorRGBA902);

Shape899->setGeometry(LineSet900);

HAnimSegment887->addChildren(Shape899);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_ant'/>
CShape* Shape903 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet904 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet904->setVertexCount(new int[1]{2});
CCoordinate* Coordinate905 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate905->setPoint(new float[6]{0.082,1.4488,-0.0353,0.1777,1.4065,-0.0075});
LineSet904->setCoord(Coordinate905);

CColorRGBA* ColorRGBA906 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA906->setUSE("HAnimSiteLineColorRGBA");
LineSet904->setColor(ColorRGBA906);

Shape903->setGeometry(LineSet904);

HAnimSegment887->addChildren(Shape903);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_post'/>
CShape* Shape907 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet908 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet908->setVertexCount(new int[1]{2});
CCoordinate* Coordinate909 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate909->setPoint(new float[6]{0.082,1.4488,-0.0353,0.1706,1.4072,-0.0875});
LineSet908->setCoord(Coordinate909);

CColorRGBA* ColorRGBA910 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA910->setUSE("HAnimSiteLineColorRGBA");
LineSet908->setColor(ColorRGBA910);

Shape907->setGeometry(LineSet908);

HAnimSegment887->addChildren(Shape907);

CHAnimSite* HAnimSite911 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite911->setName("l_clavicale_pt");
HAnimSite911->setDEF("hanim_l_clavicale_pt");
HAnimSite911->setTranslation(new float[3]{0.0271,1.4943,0.0394});
//HAnimSite visualization shape
CTouchSensor* TouchSensor912 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor912->setDescription("HAnimSite l_clavicale");
HAnimSite911->addChildren(TouchSensor912);

CShape* Shape913 = (CShape *)m_pScene.createNode("Shape");
Shape913->setUSE("HAnimSiteShape");
HAnimSite911->addChildren(Shape913);

HAnimSegment887->addChildren(HAnimSite911);

CHAnimSite* HAnimSite914 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite914->setName("l_acromion_pt");
HAnimSite914->setDEF("hanim_l_acromion_pt");
HAnimSite914->setTranslation(new float[3]{0.2032,1.476,-0.049});
//HAnimSite visualization shape
CTouchSensor* TouchSensor915 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor915->setDescription("HAnimSite l_acromion");
HAnimSite914->addChildren(TouchSensor915);

CShape* Shape916 = (CShape *)m_pScene.createNode("Shape");
Shape916->setUSE("HAnimSiteShape");
HAnimSite914->addChildren(Shape916);

HAnimSegment887->addChildren(HAnimSite914);

CHAnimSite* HAnimSite917 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite917->setName("l_axilla_ant_pt");
HAnimSite917->setDEF("hanim_l_axilla_ant_pt");
HAnimSite917->setTranslation(new float[3]{0.1777,1.4065,-0.0075});
//HAnimSite visualization shape
CTouchSensor* TouchSensor918 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor918->setDescription("HAnimSite l_axilla_ant");
HAnimSite917->addChildren(TouchSensor918);

CShape* Shape919 = (CShape *)m_pScene.createNode("Shape");
Shape919->setUSE("HAnimSiteShape");
HAnimSite917->addChildren(Shape919);

HAnimSegment887->addChildren(HAnimSite917);

CHAnimSite* HAnimSite920 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite920->setName("l_axilla_post_pt");
HAnimSite920->setDEF("hanim_l_axilla_post_pt");
HAnimSite920->setTranslation(new float[3]{0.1706,1.4072,-0.0875});
//HAnimSite visualization shape
CTouchSensor* TouchSensor921 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor921->setDescription("HAnimSite l_axilla_post");
HAnimSite920->addChildren(TouchSensor921);

CShape* Shape922 = (CShape *)m_pScene.createNode("Shape");
Shape922->setUSE("HAnimSiteShape");
HAnimSite920->addChildren(Shape922);

HAnimSegment887->addChildren(HAnimSite920);

HAnimJoint886->addChildren(HAnimSegment887);

CHAnimJoint* HAnimJoint923 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint923->setName("l_acromioclavicular");
HAnimJoint923->setDEF("hanim_l_acromioclavicular");
HAnimJoint923->setCenter(new float[3]{0.0962,1.4269,-0.0424});
HAnimJoint923->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment924 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment924->setName("l_scapula");
HAnimSegment924->setDEF("hanim_l_scapula");
//<HAnimJoint name='l_acromioclavicular'/> visualization sphere is placed within <HAnimSegment name='l_scapula'/>
CTouchSensor* TouchSensor925 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor925->setDescription("HAnimJoint l_acromioclavicular, HAnimSegment l_scapula");
HAnimSegment924->addChildren(TouchSensor925);

CTransform* Transform926 = (CTransform *)m_pScene.createNode("Transform");
Transform926->setTranslation(new float[3]{0.0962,1.4269,-0.0424});
CShape* Shape927 = (CShape *)m_pScene.createNode("Shape");
Shape927->setUSE("HAnimJointShape");
Transform926->addChildren(Shape927);

HAnimSegment924->addChildren(Transform926);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_acromioclavicular'/> to <HAnimJoint name='l_shoulder'/>
CShape* Shape928 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet929 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet929->setVertexCount(new int[1]{2});
CCoordinate* Coordinate930 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate930->setPoint(new float[6]{0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387});
LineSet929->setCoord(Coordinate930);

CColorRGBA* ColorRGBA931 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA931->setUSE("HAnimSegmentLineColorRGBA");
LineSet929->setColor(ColorRGBA931);

Shape928->setGeometry(LineSet929);

HAnimSegment924->addChildren(Shape928);

HAnimJoint923->addChildren(HAnimSegment924);

CHAnimJoint* HAnimJoint932 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint932->setName("l_shoulder");
HAnimJoint932->setDEF("hanim_l_shoulder");
HAnimJoint932->setCenter(new float[3]{0.2029,1.4376,-0.0387});
HAnimJoint932->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment933 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment933->setName("l_upperarm");
HAnimSegment933->setDEF("hanim_l_upperarm");
//<HAnimJoint name='l_shoulder'/> visualization sphere is placed within <HAnimSegment name='l_upperarm'/>
CTouchSensor* TouchSensor934 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor934->setDescription("HAnimJoint l_shoulder, HAnimSegment l_upperarm");
HAnimSegment933->addChildren(TouchSensor934);

CTransform* Transform935 = (CTransform *)m_pScene.createNode("Transform");
Transform935->setTranslation(new float[3]{0.2029,1.4376,-0.0387});
CShape* Shape936 = (CShape *)m_pScene.createNode("Shape");
Shape936->setUSE("HAnimJointShape");
Transform935->addChildren(Shape936);

HAnimSegment933->addChildren(Transform935);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_shoulder'/> to <HAnimJoint name='l_elbow'/>
CShape* Shape937 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet938 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet938->setVertexCount(new int[1]{2});
CCoordinate* Coordinate939 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate939->setPoint(new float[6]{0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682});
LineSet938->setCoord(Coordinate939);

CColorRGBA* ColorRGBA940 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA940->setUSE("HAnimSegmentLineColorRGBA");
LineSet938->setColor(ColorRGBA940);

Shape937->setGeometry(LineSet938);

HAnimSegment933->addChildren(Shape937);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_shoulder'/> to <HAnimSite name='l_humeral_lateral_epicn'/>
CShape* Shape941 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet942 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet942->setVertexCount(new int[1]{2});
CCoordinate* Coordinate943 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate943->setPoint(new float[6]{0.2029,1.4376,-0.0387,0.228,1.1482,-0.11});
LineSet942->setCoord(Coordinate943);

CColorRGBA* ColorRGBA944 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA944->setUSE("HAnimSiteLineColorRGBA");
LineSet942->setColor(ColorRGBA944);

Shape941->setGeometry(LineSet942);

HAnimSegment933->addChildren(Shape941);

CHAnimSite* HAnimSite945 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite945->setName("l_humeral_lateral_epicn_pt");
HAnimSite945->setDEF("hanim_l_humeral_lateral_epicn_pt");
HAnimSite945->setTranslation(new float[3]{0.228,1.1482,-0.11});
//HAnimSite visualization shape
CTouchSensor* TouchSensor946 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor946->setDescription("HAnimSite l_humeral_lateral_epicn");
HAnimSite945->addChildren(TouchSensor946);

CShape* Shape947 = (CShape *)m_pScene.createNode("Shape");
Shape947->setUSE("HAnimSiteShape");
HAnimSite945->addChildren(Shape947);

HAnimSegment933->addChildren(HAnimSite945);

HAnimJoint932->addChildren(HAnimSegment933);

CHAnimJoint* HAnimJoint948 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint948->setName("l_elbow");
HAnimJoint948->setDEF("hanim_l_elbow");
HAnimJoint948->setCenter(new float[3]{0.2014,1.1357,-0.0682});
HAnimJoint948->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment949 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment949->setName("l_forearm");
HAnimSegment949->setDEF("hanim_l_forearm");
//<HAnimJoint name='l_elbow'/> visualization sphere is placed within <HAnimSegment name='l_forearm'/>
CTouchSensor* TouchSensor950 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor950->setDescription("HAnimJoint l_elbow, HAnimSegment l_forearm");
HAnimSegment949->addChildren(TouchSensor950);

CTransform* Transform951 = (CTransform *)m_pScene.createNode("Transform");
Transform951->setTranslation(new float[3]{0.2014,1.1357,-0.0682});
CShape* Shape952 = (CShape *)m_pScene.createNode("Shape");
Shape952->setUSE("HAnimJointShape");
Transform951->addChildren(Shape952);

HAnimSegment949->addChildren(Transform951);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_elbow'/> to <HAnimJoint name='l_wrist'/>
CShape* Shape953 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet954 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet954->setVertexCount(new int[1]{2});
CCoordinate* Coordinate955 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate955->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583});
LineSet954->setCoord(Coordinate955);

CColorRGBA* ColorRGBA956 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA956->setUSE("HAnimSegmentLineColorRGBA");
LineSet954->setColor(ColorRGBA956);

Shape953->setGeometry(LineSet954);

HAnimSegment949->addChildren(Shape953);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radial_styloid'/>
CShape* Shape957 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet958 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet958->setVertexCount(new int[1]{2});
CCoordinate* Coordinate959 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate959->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.1901,0.8645,-0.0415});
LineSet958->setCoord(Coordinate959);

CColorRGBA* ColorRGBA960 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA960->setUSE("HAnimSiteLineColorRGBA");
LineSet958->setColor(ColorRGBA960);

Shape957->setGeometry(LineSet958);

HAnimSegment949->addChildren(Shape957);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_olecranon'/>
CShape* Shape961 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet962 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet962->setVertexCount(new int[1]{2});
CCoordinate* Coordinate963 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate963->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.1962,1.1375,-0.1123});
LineSet962->setCoord(Coordinate963);

CColorRGBA* ColorRGBA964 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA964->setUSE("HAnimSiteLineColorRGBA");
LineSet962->setColor(ColorRGBA964);

Shape961->setGeometry(LineSet962);

HAnimSegment949->addChildren(Shape961);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_humeral_medial_epicn'/>
CShape* Shape965 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet966 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet966->setVertexCount(new int[1]{2});
CCoordinate* Coordinate967 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate967->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.1735,1.1272,-0.1113});
LineSet966->setCoord(Coordinate967);

CColorRGBA* ColorRGBA968 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA968->setUSE("HAnimSiteLineColorRGBA");
LineSet966->setColor(ColorRGBA968);

Shape965->setGeometry(LineSet966);

HAnimSegment949->addChildren(Shape965);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radiale'/>
CShape* Shape969 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet970 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet970->setVertexCount(new int[1]{2});
CCoordinate* Coordinate971 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate971->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.2182,1.1212,-0.1167});
LineSet970->setCoord(Coordinate971);

CColorRGBA* ColorRGBA972 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA972->setUSE("HAnimSiteLineColorRGBA");
LineSet970->setColor(ColorRGBA972);

Shape969->setGeometry(LineSet970);

HAnimSegment949->addChildren(Shape969);

CHAnimSite* HAnimSite973 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite973->setName("l_radial_styloid_pt");
HAnimSite973->setDEF("hanim_l_radial_styloid_pt");
HAnimSite973->setTranslation(new float[3]{0.1901,0.8645,-0.0415});
//HAnimSite visualization shape
CTouchSensor* TouchSensor974 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor974->setDescription("HAnimSite l_radial_styloid");
HAnimSite973->addChildren(TouchSensor974);

CShape* Shape975 = (CShape *)m_pScene.createNode("Shape");
Shape975->setUSE("HAnimSiteShape");
HAnimSite973->addChildren(Shape975);

HAnimSegment949->addChildren(HAnimSite973);

CHAnimSite* HAnimSite976 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite976->setName("l_olecranon_pt");
HAnimSite976->setDEF("hanim_l_olecranon_pt");
HAnimSite976->setTranslation(new float[3]{0.1962,1.1375,-0.1123});
//HAnimSite visualization shape
CTouchSensor* TouchSensor977 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor977->setDescription("HAnimSite l_olecranon");
HAnimSite976->addChildren(TouchSensor977);

CShape* Shape978 = (CShape *)m_pScene.createNode("Shape");
Shape978->setUSE("HAnimSiteShape");
HAnimSite976->addChildren(Shape978);

HAnimSegment949->addChildren(HAnimSite976);

CHAnimSite* HAnimSite979 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite979->setName("l_humeral_medial_epicn_pt");
HAnimSite979->setDEF("hanim_l_humeral_medial_epicn_pt");
HAnimSite979->setTranslation(new float[3]{0.1735,1.1272,-0.1113});
//HAnimSite visualization shape
CTouchSensor* TouchSensor980 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor980->setDescription("HAnimSite l_humeral_medial_epicn");
HAnimSite979->addChildren(TouchSensor980);

CShape* Shape981 = (CShape *)m_pScene.createNode("Shape");
Shape981->setUSE("HAnimSiteShape");
HAnimSite979->addChildren(Shape981);

HAnimSegment949->addChildren(HAnimSite979);

CHAnimSite* HAnimSite982 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite982->setName("l_radiale_pt");
HAnimSite982->setDEF("hanim_l_radiale_pt");
HAnimSite982->setTranslation(new float[3]{0.2182,1.1212,-0.1167});
//HAnimSite visualization shape
CTouchSensor* TouchSensor983 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor983->setDescription("HAnimSite l_radiale");
HAnimSite982->addChildren(TouchSensor983);

CShape* Shape984 = (CShape *)m_pScene.createNode("Shape");
Shape984->setUSE("HAnimSiteShape");
HAnimSite982->addChildren(Shape984);

HAnimSegment949->addChildren(HAnimSite982);

HAnimJoint948->addChildren(HAnimSegment949);

CHAnimJoint* HAnimJoint985 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint985->setName("l_wrist");
HAnimJoint985->setDEF("hanim_l_wrist");
HAnimJoint985->setCenter(new float[3]{0.1984,0.8663,-0.0583});
HAnimJoint985->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment986 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment986->setName("l_hand");
HAnimSegment986->setDEF("hanim_l_hand");
//<HAnimJoint name='l_wrist'/> visualization sphere is placed within <HAnimSegment name='l_hand'/>
CTouchSensor* TouchSensor987 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor987->setDescription("HAnimJoint l_wrist, HAnimSegment l_hand");
HAnimSegment986->addChildren(TouchSensor987);

CTransform* Transform988 = (CTransform *)m_pScene.createNode("Transform");
Transform988->setTranslation(new float[3]{0.1984,0.8663,-0.0583});
CShape* Shape989 = (CShape *)m_pScene.createNode("Shape");
Shape989->setUSE("HAnimJointShape");
Transform988->addChildren(Shape989);

HAnimSegment986->addChildren(Transform988);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_thumb1'/>
CShape* Shape990 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet991 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet991->setVertexCount(new int[1]{2});
CCoordinate* Coordinate992 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate992->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534});
LineSet991->setCoord(Coordinate992);

CColorRGBA* ColorRGBA993 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA993->setUSE("HAnimSegmentLineColorRGBA");
LineSet991->setColor(ColorRGBA993);

Shape990->setGeometry(LineSet991);

HAnimSegment986->addChildren(Shape990);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_index0'/>
CShape* Shape994 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet995 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet995->setVertexCount(new int[1]{2});
CCoordinate* Coordinate996 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate996->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028});
LineSet995->setCoord(Coordinate996);

CColorRGBA* ColorRGBA997 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA997->setUSE("HAnimSegmentLineColorRGBA");
LineSet995->setColor(ColorRGBA997);

Shape994->setGeometry(LineSet995);

HAnimSegment986->addChildren(Shape994);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_middle0'/>
CShape* Shape998 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet999 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet999->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1000 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1000->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053});
LineSet999->setCoord(Coordinate1000);

CColorRGBA* ColorRGBA1001 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1001->setUSE("HAnimSegmentLineColorRGBA");
LineSet999->setColor(ColorRGBA1001);

Shape998->setGeometry(LineSet999);

HAnimSegment986->addChildren(Shape998);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_ring0'/>
CShape* Shape1002 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1003 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1003->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1004 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1004->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794});
LineSet1003->setCoord(Coordinate1004);

CColorRGBA* ColorRGBA1005 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1005->setUSE("HAnimSegmentLineColorRGBA");
LineSet1003->setColor(ColorRGBA1005);

Shape1002->setGeometry(LineSet1003);

HAnimSegment986->addChildren(Shape1002);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_pinky0'/>
CShape* Shape1006 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1007 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1007->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1008 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1008->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036});
LineSet1007->setCoord(Coordinate1008);

CColorRGBA* ColorRGBA1009 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1009->setUSE("HAnimSegmentLineColorRGBA");
LineSet1007->setColor(ColorRGBA1009);

Shape1006->setGeometry(LineSet1007);

HAnimSegment986->addChildren(Shape1006);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_metacarpal_pha2'/>
CShape* Shape1010 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1011 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1011->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1012 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1012->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.2009,0.8139,-0.0237});
LineSet1011->setCoord(Coordinate1012);

CColorRGBA* ColorRGBA1013 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1013->setUSE("HAnimSiteLineColorRGBA");
LineSet1011->setColor(ColorRGBA1013);

Shape1010->setGeometry(LineSet1011);

HAnimSegment986->addChildren(Shape1010);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_ulnar_styloid'/>
CShape* Shape1014 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1015 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1015->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1016 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1016->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.2142,0.8529,-0.0648});
LineSet1015->setCoord(Coordinate1016);

CColorRGBA* ColorRGBA1017 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1017->setUSE("HAnimSiteLineColorRGBA");
LineSet1015->setColor(ColorRGBA1017);

Shape1014->setGeometry(LineSet1015);

HAnimSegment986->addChildren(Shape1014);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_metacarpal_pha5'/>
CShape* Shape1018 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1019 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1019->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1020 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1020->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1929,0.786,-0.1122});
LineSet1019->setCoord(Coordinate1020);

CColorRGBA* ColorRGBA1021 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1021->setUSE("HAnimSiteLineColorRGBA");
LineSet1019->setColor(ColorRGBA1021);

Shape1018->setGeometry(LineSet1019);

HAnimSegment986->addChildren(Shape1018);

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_hand_front_view'/>
CShape* Shape1022 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1023 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1023->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1024 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1024->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.3,0.75,0.45});
LineSet1023->setCoord(Coordinate1024);

CColorRGBA* ColorRGBA1025 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1025->setUSE("HAnimSiteViewpointLineColorRGBA");
LineSet1023->setColor(ColorRGBA1025);

Shape1022->setGeometry(LineSet1023);

HAnimSegment986->addChildren(Shape1022);

CHAnimSite* HAnimSite1026 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1026->setName("l_metacarpal_pha2_pt");
HAnimSite1026->setDEF("hanim_l_metacarpal_pha2_pt");
HAnimSite1026->setTranslation(new float[3]{0.2009,0.8139,-0.0237});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1027 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1027->setDescription("HAnimSite l_metacarpal_pha2");
HAnimSite1026->addChildren(TouchSensor1027);

CShape* Shape1028 = (CShape *)m_pScene.createNode("Shape");
Shape1028->setUSE("HAnimSiteShape");
HAnimSite1026->addChildren(Shape1028);

HAnimSegment986->addChildren(HAnimSite1026);

CHAnimSite* HAnimSite1029 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1029->setName("l_ulnar_styloid_pt");
HAnimSite1029->setDEF("hanim_l_ulnar_styloid_pt");
HAnimSite1029->setTranslation(new float[3]{0.2142,0.8529,-0.0648});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1030 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1030->setDescription("HAnimSite l_ulnar_styloid");
HAnimSite1029->addChildren(TouchSensor1030);

CShape* Shape1031 = (CShape *)m_pScene.createNode("Shape");
Shape1031->setUSE("HAnimSiteShape");
HAnimSite1029->addChildren(Shape1031);

HAnimSegment986->addChildren(HAnimSite1029);

CHAnimSite* HAnimSite1032 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1032->setName("l_metacarpal_pha5_pt");
HAnimSite1032->setDEF("hanim_l_metacarpal_pha5_pt");
HAnimSite1032->setTranslation(new float[3]{0.1929,0.786,-0.1122});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1033 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1033->setDescription("HAnimSite l_metacarpal_pha5");
HAnimSite1032->addChildren(TouchSensor1033);

CShape* Shape1034 = (CShape *)m_pScene.createNode("Shape");
Shape1034->setUSE("HAnimSiteShape");
HAnimSite1032->addChildren(Shape1034);

HAnimSegment986->addChildren(HAnimSite1032);

CHAnimSite* HAnimSite1035 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1035->setName("l_hand_front_view");
HAnimSite1035->setDEF("hanim_l_hand_front_view");
HAnimSite1035->setTranslation(new float[3]{0.3,0.75,0.45});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1036 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1036->setDescription("HAnimSite l_hand_front_view");
HAnimSite1035->addChildren(TouchSensor1036);

CShape* Shape1037 = (CShape *)m_pScene.createNode("Shape");
Shape1037->setUSE("HAnimSiteShape");
HAnimSite1035->addChildren(Shape1037);

CViewpoint* Viewpoint1038 = (CViewpoint *)m_pScene.createNode("Viewpoint");
Viewpoint1038->setDEF("hanim_l_hand_front_viewpoint");
Viewpoint1038->setCenterOfRotation(new float[3]{0,0.7,0});
Viewpoint1038->setDescription("left hand front");
Viewpoint1038->setPosition(new float[3]{0,0,0});
HAnimSite1035->addChildren(Viewpoint1038);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1039 = (CAnchor *)m_pScene.createNode("Anchor");
Anchor1039->setDescription("HAnimSite hanim_l_hand_front_view Viewpoint");
Anchor1039->setUrl(new CString[1]{"#hanim_l_hand_front_viewpoint"}, 1);
CLOD* LOD1040 = (CLOD *)m_pScene.createNode("LOD");
LOD1040->setForceTransitions(True);
LOD1040->setRange(new float[1]{0.04});
CWorldInfo* WorldInfo1041 = (CWorldInfo *)m_pScene.createNode("WorldInfo");
WorldInfo1041->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1040->addChildren(WorldInfo1041);

CShape* Shape1042 = (CShape *)m_pScene.createNode("Shape");
Shape1042->setUSE("HAnimSiteViewpointShape");
LOD1040->addChildren(Shape1042);

Anchor1039->addChildren(LOD1040);

HAnimSite1035->addChildren(Anchor1039);

HAnimSegment986->addChildren(HAnimSite1035);

HAnimJoint985->addChildren(HAnimSegment986);

CHAnimJoint* HAnimJoint1043 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1043->setName("l_thumb1");
HAnimJoint1043->setDEF("hanim_l_thumb1");
HAnimJoint1043->setCenter(new float[3]{0.1924,0.8472,-0.0534});
HAnimJoint1043->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1044 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1044->setName("l_thumb_metacarpal");
HAnimSegment1044->setDEF("hanim_l_thumb_metacarpal");
//<HAnimJoint name='l_thumb1'/> visualization sphere is placed within <HAnimSegment name='l_thumb_metacarpal'/>
CTouchSensor* TouchSensor1045 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1045->setDescription("HAnimJoint l_thumb1, HAnimSegment l_thumb_metacarpal");
HAnimSegment1044->addChildren(TouchSensor1045);

CTransform* Transform1046 = (CTransform *)m_pScene.createNode("Transform");
Transform1046->setTranslation(new float[3]{0.1924,0.8472,-0.0534});
CShape* Shape1047 = (CShape *)m_pScene.createNode("Shape");
Shape1047->setUSE("HAnimJointShape");
Transform1046->addChildren(Shape1047);

HAnimSegment1044->addChildren(Transform1046);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_thumb1'/> to <HAnimJoint name='l_thumb2'/>
CShape* Shape1048 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1049 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1049->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1050 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1050->setPoint(new float[6]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246});
LineSet1049->setCoord(Coordinate1050);

CColorRGBA* ColorRGBA1051 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1051->setUSE("HAnimSegmentLineColorRGBA");
LineSet1049->setColor(ColorRGBA1051);

Shape1048->setGeometry(LineSet1049);

HAnimSegment1044->addChildren(Shape1048);

HAnimJoint1043->addChildren(HAnimSegment1044);

CHAnimJoint* HAnimJoint1052 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1052->setName("l_thumb2");
HAnimJoint1052->setDEF("hanim_l_thumb2");
HAnimJoint1052->setCenter(new float[3]{0.1951,0.8226,0.0246});
HAnimJoint1052->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1053 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1053->setName("l_thumb_proximal");
HAnimSegment1053->setDEF("hanim_l_thumb_proximal");
//<HAnimJoint name='l_thumb2'/> visualization sphere is placed within <HAnimSegment name='l_thumb_proximal'/>
CTouchSensor* TouchSensor1054 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1054->setDescription("HAnimJoint l_thumb2, HAnimSegment l_thumb_proximal");
HAnimSegment1053->addChildren(TouchSensor1054);

CTransform* Transform1055 = (CTransform *)m_pScene.createNode("Transform");
Transform1055->setTranslation(new float[3]{0.1951,0.8226,0.0246});
CShape* Shape1056 = (CShape *)m_pScene.createNode("Shape");
Shape1056->setUSE("HAnimJointShape");
Transform1055->addChildren(Shape1056);

HAnimSegment1053->addChildren(Transform1055);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_thumb2'/> to <HAnimJoint name='l_thumb3'/>
CShape* Shape1057 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1058 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1058->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1059 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1059->setPoint(new float[6]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464});
LineSet1058->setCoord(Coordinate1059);

CColorRGBA* ColorRGBA1060 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1060->setUSE("HAnimSegmentLineColorRGBA");
LineSet1058->setColor(ColorRGBA1060);

Shape1057->setGeometry(LineSet1058);

HAnimSegment1053->addChildren(Shape1057);

HAnimJoint1052->addChildren(HAnimSegment1053);

CHAnimJoint* HAnimJoint1061 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1061->setName("l_thumb3");
HAnimJoint1061->setDEF("hanim_l_thumb3");
HAnimJoint1061->setCenter(new float[3]{0.1955,0.8159,0.0464});
HAnimJoint1061->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1062 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1062->setName("l_thumb_distal");
HAnimSegment1062->setDEF("hanim_l_thumb_distal");
//<HAnimJoint name='l_thumb3'/> visualization sphere is placed within <HAnimSegment name='l_thumb_distal'/>
CTouchSensor* TouchSensor1063 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1063->setDescription("HAnimJoint l_thumb3, HAnimSegment l_thumb_distal");
HAnimSegment1062->addChildren(TouchSensor1063);

CTransform* Transform1064 = (CTransform *)m_pScene.createNode("Transform");
Transform1064->setTranslation(new float[3]{0.1955,0.8159,0.0464});
CShape* Shape1065 = (CShape *)m_pScene.createNode("Shape");
Shape1065->setUSE("HAnimJointShape");
Transform1064->addChildren(Shape1065);

HAnimSegment1062->addChildren(Transform1064);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_thumb3'/> to <HAnimSite name='l_thumb_distal_tip'/>
CShape* Shape1066 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1067 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1067->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1068 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1068->setPoint(new float[6]{0.1955,0.8159,0.0464,0.1982,0.8061,0.0759});
LineSet1067->setCoord(Coordinate1068);

CColorRGBA* ColorRGBA1069 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1069->setUSE("HAnimSiteLineColorRGBA");
LineSet1067->setColor(ColorRGBA1069);

Shape1066->setGeometry(LineSet1067);

HAnimSegment1062->addChildren(Shape1066);

CHAnimSite* HAnimSite1070 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1070->setName("l_thumb_distal_tip");
HAnimSite1070->setDEF("hanim_l_thumb_distal_tip");
HAnimSite1070->setTranslation(new float[3]{0.1982,0.8061,0.0759});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1071 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1071->setDescription("HAnimSite l_thumb_distal_tip");
HAnimSite1070->addChildren(TouchSensor1071);

CShape* Shape1072 = (CShape *)m_pScene.createNode("Shape");
Shape1072->setUSE("HAnimSiteShape");
HAnimSite1070->addChildren(Shape1072);

HAnimSegment1062->addChildren(HAnimSite1070);

HAnimJoint1061->addChildren(HAnimSegment1062);

HAnimJoint1052->addChildren(HAnimJoint1061);

HAnimJoint1043->addChildren(HAnimJoint1052);

HAnimJoint985->addChildren(HAnimJoint1043);

CHAnimJoint* HAnimJoint1073 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1073->setName("l_index0");
HAnimJoint1073->setDEF("hanim_l_index0");
HAnimJoint1073->setCenter(new float[3]{0.1983,0.8024,-0.028});
HAnimJoint1073->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1074 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1074->setName("l_index_metacarpal");
HAnimSegment1074->setDEF("hanim_l_index_metacarpal");
//<HAnimJoint name='l_index0'/> visualization sphere is placed within <HAnimSegment name='l_index_metacarpal'/>
CTouchSensor* TouchSensor1075 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1075->setDescription("HAnimJoint l_index0, HAnimSegment l_index_metacarpal");
HAnimSegment1074->addChildren(TouchSensor1075);

CTransform* Transform1076 = (CTransform *)m_pScene.createNode("Transform");
Transform1076->setTranslation(new float[3]{0.1983,0.8024,-0.028});
CShape* Shape1077 = (CShape *)m_pScene.createNode("Shape");
Shape1077->setUSE("HAnimJointShape");
Transform1076->addChildren(Shape1077);

HAnimSegment1074->addChildren(Transform1076);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_index0'/> to <HAnimJoint name='l_index1'/>
CShape* Shape1078 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1079 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1079->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1080 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1080->setPoint(new float[6]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028});
LineSet1079->setCoord(Coordinate1080);

CColorRGBA* ColorRGBA1081 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1081->setUSE("HAnimSegmentLineColorRGBA");
LineSet1079->setColor(ColorRGBA1081);

Shape1078->setGeometry(LineSet1079);

HAnimSegment1074->addChildren(Shape1078);

HAnimJoint1073->addChildren(HAnimSegment1074);

CHAnimJoint* HAnimJoint1082 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1082->setName("l_index1");
HAnimJoint1082->setDEF("hanim_l_index1");
HAnimJoint1082->setCenter(new float[3]{0.1983,0.7815,-0.028});
HAnimJoint1082->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1083 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1083->setName("l_index_proximal");
HAnimSegment1083->setDEF("hanim_l_index_proximal");
//<HAnimJoint name='l_index1'/> visualization sphere is placed within <HAnimSegment name='l_index_proximal'/>
CTouchSensor* TouchSensor1084 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1084->setDescription("HAnimJoint l_index1, HAnimSegment l_index_proximal");
HAnimSegment1083->addChildren(TouchSensor1084);

CTransform* Transform1085 = (CTransform *)m_pScene.createNode("Transform");
Transform1085->setTranslation(new float[3]{0.1983,0.7815,-0.028});
CShape* Shape1086 = (CShape *)m_pScene.createNode("Shape");
Shape1086->setUSE("HAnimJointShape");
Transform1085->addChildren(Shape1086);

HAnimSegment1083->addChildren(Transform1085);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_index1'/> to <HAnimJoint name='l_index2'/>
CShape* Shape1087 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1088 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1088->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1089 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1089->setPoint(new float[6]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248});
LineSet1088->setCoord(Coordinate1089);

CColorRGBA* ColorRGBA1090 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1090->setUSE("HAnimSegmentLineColorRGBA");
LineSet1088->setColor(ColorRGBA1090);

Shape1087->setGeometry(LineSet1088);

HAnimSegment1083->addChildren(Shape1087);

HAnimJoint1082->addChildren(HAnimSegment1083);

CHAnimJoint* HAnimJoint1091 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1091->setName("l_index2");
HAnimJoint1091->setDEF("hanim_l_index2");
HAnimJoint1091->setCenter(new float[3]{0.2017,0.7363,-0.0248});
HAnimJoint1091->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1092 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1092->setName("l_index_middle");
HAnimSegment1092->setDEF("hanim_l_index_middle");
//<HAnimJoint name='l_index2'/> visualization sphere is placed within <HAnimSegment name='l_index_middle'/>
CTouchSensor* TouchSensor1093 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1093->setDescription("HAnimJoint l_index2, HAnimSegment l_index_middle");
HAnimSegment1092->addChildren(TouchSensor1093);

CTransform* Transform1094 = (CTransform *)m_pScene.createNode("Transform");
Transform1094->setTranslation(new float[3]{0.2017,0.7363,-0.0248});
CShape* Shape1095 = (CShape *)m_pScene.createNode("Shape");
Shape1095->setUSE("HAnimJointShape");
Transform1094->addChildren(Shape1095);

HAnimSegment1092->addChildren(Transform1094);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_index2'/> to <HAnimJoint name='l_index3'/>
CShape* Shape1096 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1097 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1097->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1098 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1098->setPoint(new float[6]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236});
LineSet1097->setCoord(Coordinate1098);

CColorRGBA* ColorRGBA1099 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1099->setUSE("HAnimSegmentLineColorRGBA");
LineSet1097->setColor(ColorRGBA1099);

Shape1096->setGeometry(LineSet1097);

HAnimSegment1092->addChildren(Shape1096);

HAnimJoint1091->addChildren(HAnimSegment1092);

CHAnimJoint* HAnimJoint1100 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1100->setName("l_index3");
HAnimJoint1100->setDEF("hanim_l_index3");
HAnimJoint1100->setCenter(new float[3]{0.2028,0.7139,-0.0236});
HAnimJoint1100->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1101 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1101->setName("l_index_distal");
HAnimSegment1101->setDEF("hanim_l_index_distal");
//<HAnimJoint name='l_index3'/> visualization sphere is placed within <HAnimSegment name='l_index_distal'/>
CTouchSensor* TouchSensor1102 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1102->setDescription("HAnimJoint l_index3, HAnimSegment l_index_distal");
HAnimSegment1101->addChildren(TouchSensor1102);

CTransform* Transform1103 = (CTransform *)m_pScene.createNode("Transform");
Transform1103->setTranslation(new float[3]{0.2028,0.7139,-0.0236});
CShape* Shape1104 = (CShape *)m_pScene.createNode("Shape");
Shape1104->setUSE("HAnimJointShape");
Transform1103->addChildren(Shape1104);

HAnimSegment1101->addChildren(Transform1103);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_index_distal_tip'/>
CShape* Shape1105 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1106 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1106->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1107 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1107->setPoint(new float[6]{0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245});
LineSet1106->setCoord(Coordinate1107);

CColorRGBA* ColorRGBA1108 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1108->setUSE("HAnimSiteLineColorRGBA");
LineSet1106->setColor(ColorRGBA1108);

Shape1105->setGeometry(LineSet1106);

HAnimSegment1101->addChildren(Shape1105);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_dactylion'/>
CShape* Shape1109 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1110 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1110->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1111 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1111->setPoint(new float[6]{0.2028,0.7139,-0.0236,0.2056,0.6743,-0.0482});
LineSet1110->setCoord(Coordinate1111);

CColorRGBA* ColorRGBA1112 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1112->setUSE("HAnimSiteLineColorRGBA");
LineSet1110->setColor(ColorRGBA1112);

Shape1109->setGeometry(LineSet1110);

HAnimSegment1101->addChildren(Shape1109);

CHAnimSite* HAnimSite1113 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1113->setName("l_index_distal_tip");
HAnimSite1113->setDEF("hanim_l_index_distal_tip");
HAnimSite1113->setTranslation(new float[3]{0.2089,0.6858,-0.0245});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1114 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1114->setDescription("HAnimSite l_index_distal_tip");
HAnimSite1113->addChildren(TouchSensor1114);

CShape* Shape1115 = (CShape *)m_pScene.createNode("Shape");
Shape1115->setUSE("HAnimSiteShape");
HAnimSite1113->addChildren(Shape1115);

HAnimSegment1101->addChildren(HAnimSite1113);

CHAnimSite* HAnimSite1116 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1116->setName("l_dactylion_pt");
HAnimSite1116->setDEF("hanim_l_dactylion_pt");
HAnimSite1116->setTranslation(new float[3]{0.2056,0.6743,-0.0482});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1117 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1117->setDescription("HAnimSite l_dactylion");
HAnimSite1116->addChildren(TouchSensor1117);

CShape* Shape1118 = (CShape *)m_pScene.createNode("Shape");
Shape1118->setUSE("HAnimSiteShape");
HAnimSite1116->addChildren(Shape1118);

HAnimSegment1101->addChildren(HAnimSite1116);

HAnimJoint1100->addChildren(HAnimSegment1101);

HAnimJoint1091->addChildren(HAnimJoint1100);

HAnimJoint1082->addChildren(HAnimJoint1091);

HAnimJoint1073->addChildren(HAnimJoint1082);

HAnimJoint985->addChildren(HAnimJoint1073);

CHAnimJoint* HAnimJoint1119 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1119->setName("l_middle0");
HAnimJoint1119->setDEF("hanim_l_middle0");
HAnimJoint1119->setCenter(new float[3]{0.1987,0.8029,-0.053});
HAnimJoint1119->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1120 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1120->setName("l_middle_metacarpal");
HAnimSegment1120->setDEF("hanim_l_middle_metacarpal");
//<HAnimJoint name='l_middle0'/> visualization sphere is placed within <HAnimSegment name='l_middle_metacarpal'/>
CTouchSensor* TouchSensor1121 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1121->setDescription("HAnimJoint l_middle0, HAnimSegment l_middle_metacarpal");
HAnimSegment1120->addChildren(TouchSensor1121);

CTransform* Transform1122 = (CTransform *)m_pScene.createNode("Transform");
Transform1122->setTranslation(new float[3]{0.1987,0.8029,-0.053});
CShape* Shape1123 = (CShape *)m_pScene.createNode("Shape");
Shape1123->setUSE("HAnimJointShape");
Transform1122->addChildren(Shape1123);

HAnimSegment1120->addChildren(Transform1122);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle0'/> to <HAnimJoint name='l_middle1'/>
CShape* Shape1124 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1125 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1125->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1126 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1126->setPoint(new float[6]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053});
LineSet1125->setCoord(Coordinate1126);

CColorRGBA* ColorRGBA1127 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1127->setUSE("HAnimSegmentLineColorRGBA");
LineSet1125->setColor(ColorRGBA1127);

Shape1124->setGeometry(LineSet1125);

HAnimSegment1120->addChildren(Shape1124);

HAnimJoint1119->addChildren(HAnimSegment1120);

CHAnimJoint* HAnimJoint1128 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1128->setName("l_middle1");
HAnimJoint1128->setDEF("hanim_l_middle1");
HAnimJoint1128->setCenter(new float[3]{0.1987,0.7818,-0.053});
HAnimJoint1128->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1129 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1129->setName("l_middle_proximal");
HAnimSegment1129->setDEF("hanim_l_middle_proximal");
//<HAnimJoint name='l_middle1'/> visualization sphere is placed within <HAnimSegment name='l_middle_proximal'/>
CTouchSensor* TouchSensor1130 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1130->setDescription("HAnimJoint l_middle1, HAnimSegment l_middle_proximal");
HAnimSegment1129->addChildren(TouchSensor1130);

CTransform* Transform1131 = (CTransform *)m_pScene.createNode("Transform");
Transform1131->setTranslation(new float[3]{0.1987,0.7818,-0.053});
CShape* Shape1132 = (CShape *)m_pScene.createNode("Shape");
Shape1132->setUSE("HAnimJointShape");
Transform1131->addChildren(Shape1132);

HAnimSegment1129->addChildren(Transform1131);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle1'/> to <HAnimJoint name='l_middle2'/>
CShape* Shape1133 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1134 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1134->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1135 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1135->setPoint(new float[6]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503});
LineSet1134->setCoord(Coordinate1135);

CColorRGBA* ColorRGBA1136 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1136->setUSE("HAnimSegmentLineColorRGBA");
LineSet1134->setColor(ColorRGBA1136);

Shape1133->setGeometry(LineSet1134);

HAnimSegment1129->addChildren(Shape1133);

HAnimJoint1128->addChildren(HAnimSegment1129);

CHAnimJoint* HAnimJoint1137 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1137->setName("l_middle2");
HAnimJoint1137->setDEF("hanim_l_middle2");
HAnimJoint1137->setCenter(new float[3]{0.2013,0.7273,-0.0503});
HAnimJoint1137->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1138 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1138->setName("l_middle_middle");
HAnimSegment1138->setDEF("hanim_l_middle_middle");
//<HAnimJoint name='l_middle2'/> visualization sphere is placed within <HAnimSegment name='l_middle_middle'/>
CTouchSensor* TouchSensor1139 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1139->setDescription("HAnimJoint l_middle2, HAnimSegment l_middle_middle");
HAnimSegment1138->addChildren(TouchSensor1139);

CTransform* Transform1140 = (CTransform *)m_pScene.createNode("Transform");
Transform1140->setTranslation(new float[3]{0.2013,0.7273,-0.0503});
CShape* Shape1141 = (CShape *)m_pScene.createNode("Shape");
Shape1141->setUSE("HAnimJointShape");
Transform1140->addChildren(Shape1141);

HAnimSegment1138->addChildren(Transform1140);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle2'/> to <HAnimJoint name='l_middle3'/>
CShape* Shape1142 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1143 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1143->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1144 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1144->setPoint(new float[6]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494});
LineSet1143->setCoord(Coordinate1144);

CColorRGBA* ColorRGBA1145 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1145->setUSE("HAnimSegmentLineColorRGBA");
LineSet1143->setColor(ColorRGBA1145);

Shape1142->setGeometry(LineSet1143);

HAnimSegment1138->addChildren(Shape1142);

HAnimJoint1137->addChildren(HAnimSegment1138);

CHAnimJoint* HAnimJoint1146 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1146->setName("l_middle3");
HAnimJoint1146->setDEF("hanim_l_middle3");
HAnimJoint1146->setCenter(new float[3]{0.2026,0.7011,-0.0494});
HAnimJoint1146->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1147 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1147->setName("l_middle_distal");
HAnimSegment1147->setDEF("hanim_l_middle_distal");
//<HAnimJoint name='l_middle3'/> visualization sphere is placed within <HAnimSegment name='l_middle_distal'/>
CTouchSensor* TouchSensor1148 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1148->setDescription("HAnimJoint l_middle3, HAnimSegment l_middle_distal");
HAnimSegment1147->addChildren(TouchSensor1148);

CTransform* Transform1149 = (CTransform *)m_pScene.createNode("Transform");
Transform1149->setTranslation(new float[3]{0.2026,0.7011,-0.0494});
CShape* Shape1150 = (CShape *)m_pScene.createNode("Shape");
Shape1150->setUSE("HAnimJointShape");
Transform1149->addChildren(Shape1150);

HAnimSegment1147->addChildren(Transform1149);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_middle3'/> to <HAnimSite name='l_middle_distal_tip'/>
CShape* Shape1151 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1152 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1152->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1153 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1153->setPoint(new float[6]{0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491});
LineSet1152->setCoord(Coordinate1153);

CColorRGBA* ColorRGBA1154 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1154->setUSE("HAnimSiteLineColorRGBA");
LineSet1152->setColor(ColorRGBA1154);

Shape1151->setGeometry(LineSet1152);

HAnimSegment1147->addChildren(Shape1151);

CHAnimSite* HAnimSite1155 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1155->setName("l_middle_distal_tip");
HAnimSite1155->setDEF("hanim_l_middle_distal_tip");
HAnimSite1155->setTranslation(new float[3]{0.208,0.6731,-0.0491});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1156 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1156->setDescription("HAnimSite l_middle_distal_tip");
HAnimSite1155->addChildren(TouchSensor1156);

CShape* Shape1157 = (CShape *)m_pScene.createNode("Shape");
Shape1157->setUSE("HAnimSiteShape");
HAnimSite1155->addChildren(Shape1157);

HAnimSegment1147->addChildren(HAnimSite1155);

HAnimJoint1146->addChildren(HAnimSegment1147);

HAnimJoint1137->addChildren(HAnimJoint1146);

HAnimJoint1128->addChildren(HAnimJoint1137);

HAnimJoint1119->addChildren(HAnimJoint1128);

HAnimJoint985->addChildren(HAnimJoint1119);

CHAnimJoint* HAnimJoint1158 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1158->setName("l_ring0");
HAnimJoint1158->setDEF("hanim_l_ring0");
HAnimJoint1158->setCenter(new float[3]{0.1956,0.8019,-0.0794});
HAnimJoint1158->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1159 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1159->setName("l_ring_metacarpal");
HAnimSegment1159->setDEF("hanim_l_ring_metacarpal");
//<HAnimJoint name='l_ring0'/> visualization sphere is placed within <HAnimSegment name='l_ring_metacarpal'/>
CTouchSensor* TouchSensor1160 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1160->setDescription("HAnimJoint l_ring0, HAnimSegment l_ring_metacarpal");
HAnimSegment1159->addChildren(TouchSensor1160);

CTransform* Transform1161 = (CTransform *)m_pScene.createNode("Transform");
Transform1161->setTranslation(new float[3]{0.1956,0.8019,-0.0794});
CShape* Shape1162 = (CShape *)m_pScene.createNode("Shape");
Shape1162->setUSE("HAnimJointShape");
Transform1161->addChildren(Shape1162);

HAnimSegment1159->addChildren(Transform1161);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring0'/> to <HAnimJoint name='l_ring1'/>
CShape* Shape1163 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1164 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1164->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1165 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1165->setPoint(new float[6]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794});
LineSet1164->setCoord(Coordinate1165);

CColorRGBA* ColorRGBA1166 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1166->setUSE("HAnimSegmentLineColorRGBA");
LineSet1164->setColor(ColorRGBA1166);

Shape1163->setGeometry(LineSet1164);

HAnimSegment1159->addChildren(Shape1163);

HAnimJoint1158->addChildren(HAnimSegment1159);

CHAnimJoint* HAnimJoint1167 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1167->setName("l_ring1");
HAnimJoint1167->setDEF("hanim_l_ring1");
HAnimJoint1167->setCenter(new float[3]{0.1956,0.7815,-0.0794});
HAnimJoint1167->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1168 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1168->setName("l_ring_proximal");
HAnimSegment1168->setDEF("hanim_l_ring_proximal");
//<HAnimJoint name='l_ring1'/> visualization sphere is placed within <HAnimSegment name='l_ring_proximal'/>
CTouchSensor* TouchSensor1169 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1169->setDescription("HAnimJoint l_ring1, HAnimSegment l_ring_proximal");
HAnimSegment1168->addChildren(TouchSensor1169);

CTransform* Transform1170 = (CTransform *)m_pScene.createNode("Transform");
Transform1170->setTranslation(new float[3]{0.1956,0.7815,-0.0794});
CShape* Shape1171 = (CShape *)m_pScene.createNode("Shape");
Shape1171->setUSE("HAnimJointShape");
Transform1170->addChildren(Shape1171);

HAnimSegment1168->addChildren(Transform1170);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring1'/> to <HAnimJoint name='l_ring2'/>
CShape* Shape1172 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1173 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1173->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1174 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1174->setPoint(new float[6]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777});
LineSet1173->setCoord(Coordinate1174);

CColorRGBA* ColorRGBA1175 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1175->setUSE("HAnimSegmentLineColorRGBA");
LineSet1173->setColor(ColorRGBA1175);

Shape1172->setGeometry(LineSet1173);

HAnimSegment1168->addChildren(Shape1172);

HAnimJoint1167->addChildren(HAnimSegment1168);

CHAnimJoint* HAnimJoint1176 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1176->setName("l_ring2");
HAnimJoint1176->setDEF("hanim_l_ring2");
HAnimJoint1176->setCenter(new float[3]{0.1973,0.7287,-0.0777});
HAnimJoint1176->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1177 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1177->setName("l_ring_middle");
HAnimSegment1177->setDEF("hanim_l_ring_middle");
//<HAnimJoint name='l_ring2'/> visualization sphere is placed within <HAnimSegment name='l_ring_middle'/>
CTouchSensor* TouchSensor1178 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1178->setDescription("HAnimJoint l_ring2, HAnimSegment l_ring_middle");
HAnimSegment1177->addChildren(TouchSensor1178);

CTransform* Transform1179 = (CTransform *)m_pScene.createNode("Transform");
Transform1179->setTranslation(new float[3]{0.1973,0.7287,-0.0777});
CShape* Shape1180 = (CShape *)m_pScene.createNode("Shape");
Shape1180->setUSE("HAnimJointShape");
Transform1179->addChildren(Shape1180);

HAnimSegment1177->addChildren(Transform1179);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring2'/> to <HAnimJoint name='l_ring3'/>
CShape* Shape1181 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1182 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1182->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1183 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1183->setPoint(new float[6]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767});
LineSet1182->setCoord(Coordinate1183);

CColorRGBA* ColorRGBA1184 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1184->setUSE("HAnimSegmentLineColorRGBA");
LineSet1182->setColor(ColorRGBA1184);

Shape1181->setGeometry(LineSet1182);

HAnimSegment1177->addChildren(Shape1181);

HAnimJoint1176->addChildren(HAnimSegment1177);

CHAnimJoint* HAnimJoint1185 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1185->setName("l_ring3");
HAnimJoint1185->setDEF("hanim_l_ring3");
HAnimJoint1185->setCenter(new float[3]{0.1983,0.7045,-0.0767});
HAnimJoint1185->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1186 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1186->setName("l_ring_distal");
HAnimSegment1186->setDEF("hanim_l_ring_distal");
//<HAnimJoint name='l_ring3'/> visualization sphere is placed within <HAnimSegment name='l_ring_distal'/>
CTouchSensor* TouchSensor1187 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1187->setDescription("HAnimJoint l_ring3, HAnimSegment l_ring_distal");
HAnimSegment1186->addChildren(TouchSensor1187);

CTransform* Transform1188 = (CTransform *)m_pScene.createNode("Transform");
Transform1188->setTranslation(new float[3]{0.1983,0.7045,-0.0767});
CShape* Shape1189 = (CShape *)m_pScene.createNode("Shape");
Shape1189->setUSE("HAnimJointShape");
Transform1188->addChildren(Shape1189);

HAnimSegment1186->addChildren(Transform1188);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ring3'/> to <HAnimSite name='l_ring_distal_tip'/>
CShape* Shape1190 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1191 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1191->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1192 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1192->setPoint(new float[6]{0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756});
LineSet1191->setCoord(Coordinate1192);

CColorRGBA* ColorRGBA1193 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1193->setUSE("HAnimSiteLineColorRGBA");
LineSet1191->setColor(ColorRGBA1193);

Shape1190->setGeometry(LineSet1191);

HAnimSegment1186->addChildren(Shape1190);

CHAnimSite* HAnimSite1194 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1194->setName("l_ring_distal_tip");
HAnimSite1194->setDEF("hanim_l_ring_distal_tip");
HAnimSite1194->setTranslation(new float[3]{0.2035,0.675,-0.0756});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1195 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1195->setDescription("HAnimSite l_ring_distal_tip");
HAnimSite1194->addChildren(TouchSensor1195);

CShape* Shape1196 = (CShape *)m_pScene.createNode("Shape");
Shape1196->setUSE("HAnimSiteShape");
HAnimSite1194->addChildren(Shape1196);

HAnimSegment1186->addChildren(HAnimSite1194);

HAnimJoint1185->addChildren(HAnimSegment1186);

HAnimJoint1176->addChildren(HAnimJoint1185);

HAnimJoint1167->addChildren(HAnimJoint1176);

HAnimJoint1158->addChildren(HAnimJoint1167);

HAnimJoint985->addChildren(HAnimJoint1158);

CHAnimJoint* HAnimJoint1197 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1197->setName("l_pinky0");
HAnimJoint1197->setDEF("hanim_l_pinky0");
HAnimJoint1197->setCenter(new float[3]{0.1925,0.8066,-0.1036});
HAnimJoint1197->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1198 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1198->setName("l_pinky_metacarpal");
HAnimSegment1198->setDEF("hanim_l_pinky_metacarpal");
//<HAnimJoint name='l_pinky0'/> visualization sphere is placed within <HAnimSegment name='l_pinky_metacarpal'/>
CTouchSensor* TouchSensor1199 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1199->setDescription("HAnimJoint l_pinky0, HAnimSegment l_pinky_metacarpal");
HAnimSegment1198->addChildren(TouchSensor1199);

CTransform* Transform1200 = (CTransform *)m_pScene.createNode("Transform");
Transform1200->setTranslation(new float[3]{0.1925,0.8066,-0.1036});
CShape* Shape1201 = (CShape *)m_pScene.createNode("Shape");
Shape1201->setUSE("HAnimJointShape");
Transform1200->addChildren(Shape1201);

HAnimSegment1198->addChildren(Transform1200);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky0'/> to <HAnimJoint name='l_pinky1'/>
CShape* Shape1202 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1203 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1203->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1204 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1204->setPoint(new float[6]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036});
LineSet1203->setCoord(Coordinate1204);

CColorRGBA* ColorRGBA1205 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1205->setUSE("HAnimSegmentLineColorRGBA");
LineSet1203->setColor(ColorRGBA1205);

Shape1202->setGeometry(LineSet1203);

HAnimSegment1198->addChildren(Shape1202);

HAnimJoint1197->addChildren(HAnimSegment1198);

CHAnimJoint* HAnimJoint1206 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1206->setName("l_pinky1");
HAnimJoint1206->setDEF("hanim_l_pinky1");
HAnimJoint1206->setCenter(new float[3]{0.1925,0.7866,-0.1036});
HAnimJoint1206->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1207 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1207->setName("l_pinky_proximal");
HAnimSegment1207->setDEF("hanim_l_pinky_proximal");
//<HAnimJoint name='l_pinky1'/> visualization sphere is placed within <HAnimSegment name='l_pinky_proximal'/>
CTouchSensor* TouchSensor1208 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1208->setDescription("HAnimJoint l_pinky1, HAnimSegment l_pinky_proximal");
HAnimSegment1207->addChildren(TouchSensor1208);

CTransform* Transform1209 = (CTransform *)m_pScene.createNode("Transform");
Transform1209->setTranslation(new float[3]{0.1925,0.7866,-0.1036});
CShape* Shape1210 = (CShape *)m_pScene.createNode("Shape");
Shape1210->setUSE("HAnimJointShape");
Transform1209->addChildren(Shape1210);

HAnimSegment1207->addChildren(Transform1209);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky1'/> to <HAnimJoint name='l_pinky2'/>
CShape* Shape1211 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1212 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1212->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1213 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1213->setPoint(new float[6]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024});
LineSet1212->setCoord(Coordinate1213);

CColorRGBA* ColorRGBA1214 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1214->setUSE("HAnimSegmentLineColorRGBA");
LineSet1212->setColor(ColorRGBA1214);

Shape1211->setGeometry(LineSet1212);

HAnimSegment1207->addChildren(Shape1211);

HAnimJoint1206->addChildren(HAnimSegment1207);

CHAnimJoint* HAnimJoint1215 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1215->setName("l_pinky2");
HAnimJoint1215->setDEF("hanim_l_pinky2");
HAnimJoint1215->setCenter(new float[3]{0.1938,0.7452,-0.1024});
HAnimJoint1215->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1216 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1216->setName("l_pinky_middle");
HAnimSegment1216->setDEF("hanim_l_pinky_middle");
//<HAnimJoint name='l_pinky2'/> visualization sphere is placed within <HAnimSegment name='l_pinky_middle'/>
CTouchSensor* TouchSensor1217 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1217->setDescription("HAnimJoint l_pinky2, HAnimSegment l_pinky_middle");
HAnimSegment1216->addChildren(TouchSensor1217);

CTransform* Transform1218 = (CTransform *)m_pScene.createNode("Transform");
Transform1218->setTranslation(new float[3]{0.1938,0.7452,-0.1024});
CShape* Shape1219 = (CShape *)m_pScene.createNode("Shape");
Shape1219->setUSE("HAnimJointShape");
Transform1218->addChildren(Shape1219);

HAnimSegment1216->addChildren(Transform1218);

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky2'/> to <HAnimJoint name='l_pinky3'/>
CShape* Shape1220 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1221 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1221->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1222 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1222->setPoint(new float[6]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017});
LineSet1221->setCoord(Coordinate1222);

CColorRGBA* ColorRGBA1223 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1223->setUSE("HAnimSegmentLineColorRGBA");
LineSet1221->setColor(ColorRGBA1223);

Shape1220->setGeometry(LineSet1221);

HAnimSegment1216->addChildren(Shape1220);

HAnimJoint1215->addChildren(HAnimSegment1216);

CHAnimJoint* HAnimJoint1224 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1224->setName("l_pinky3");
HAnimJoint1224->setDEF("hanim_l_pinky3");
HAnimJoint1224->setCenter(new float[3]{0.1948,0.7277,-0.1017});
HAnimJoint1224->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1225 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1225->setName("l_pinky_distal");
HAnimSegment1225->setDEF("hanim_l_pinky_distal");
//<HAnimJoint name='l_pinky3'/> visualization sphere is placed within <HAnimSegment name='l_pinky_distal'/>
CTouchSensor* TouchSensor1226 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1226->setDescription("HAnimJoint l_pinky3, HAnimSegment l_pinky_distal");
HAnimSegment1225->addChildren(TouchSensor1226);

CTransform* Transform1227 = (CTransform *)m_pScene.createNode("Transform");
Transform1227->setTranslation(new float[3]{0.1948,0.7277,-0.1017});
CShape* Shape1228 = (CShape *)m_pScene.createNode("Shape");
Shape1228->setUSE("HAnimJointShape");
Transform1227->addChildren(Shape1228);

HAnimSegment1225->addChildren(Transform1227);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_pinky3'/> to <HAnimSite name='l_pinky_distal_tip'/>
CShape* Shape1229 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1230 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1230->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1231 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1231->setPoint(new float[6]{0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012});
LineSet1230->setCoord(Coordinate1231);

CColorRGBA* ColorRGBA1232 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1232->setUSE("HAnimSiteLineColorRGBA");
LineSet1230->setColor(ColorRGBA1232);

Shape1229->setGeometry(LineSet1230);

HAnimSegment1225->addChildren(Shape1229);

CHAnimSite* HAnimSite1233 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1233->setName("l_pinky_distal_tip");
HAnimSite1233->setDEF("hanim_l_pinky_distal_tip");
HAnimSite1233->setTranslation(new float[3]{0.2014,0.7009,-0.1012});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1234 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1234->setDescription("HAnimSite l_pinky_distal_tip");
HAnimSite1233->addChildren(TouchSensor1234);

CShape* Shape1235 = (CShape *)m_pScene.createNode("Shape");
Shape1235->setUSE("HAnimSiteShape");
HAnimSite1233->addChildren(Shape1235);

HAnimSegment1225->addChildren(HAnimSite1233);

HAnimJoint1224->addChildren(HAnimSegment1225);

HAnimJoint1215->addChildren(HAnimJoint1224);

HAnimJoint1206->addChildren(HAnimJoint1215);

HAnimJoint1197->addChildren(HAnimJoint1206);

HAnimJoint985->addChildren(HAnimJoint1197);

HAnimJoint948->addChildren(HAnimJoint985);

HAnimJoint932->addChildren(HAnimJoint948);

HAnimJoint923->addChildren(HAnimJoint932);

HAnimJoint886->addChildren(HAnimJoint923);

HAnimJoint598->addChildren(HAnimJoint886);

CHAnimJoint* HAnimJoint1236 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1236->setName("r_sternoclavicular");
HAnimJoint1236->setDEF("hanim_r_sternoclavicular");
HAnimJoint1236->setCenter(new float[3]{-0.082,1.4488,-0.0353});
HAnimJoint1236->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1237 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1237->setName("r_clavicle");
HAnimSegment1237->setDEF("hanim_r_clavicle");
//<HAnimJoint name='r_sternoclavicular'/> visualization sphere is placed within <HAnimSegment name='r_clavicle'/>
CTouchSensor* TouchSensor1238 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1238->setDescription("HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle");
HAnimSegment1237->addChildren(TouchSensor1238);

CTransform* Transform1239 = (CTransform *)m_pScene.createNode("Transform");
Transform1239->setTranslation(new float[3]{-0.082,1.4488,-0.0353});
CShape* Shape1240 = (CShape *)m_pScene.createNode("Shape");
Shape1240->setUSE("HAnimJointShape");
Transform1239->addChildren(Shape1240);

HAnimSegment1237->addChildren(Transform1239);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_sternoclavicular'/> to <HAnimJoint name='r_acromioclavicular'/>
CShape* Shape1241 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1242 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1242->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1243 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1243->setPoint(new float[6]{-0.082,1.4488,-0.0353,-0.0962,1.4269,-0.0424});
LineSet1242->setCoord(Coordinate1243);

CColorRGBA* ColorRGBA1244 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1244->setUSE("HAnimSegmentLineColorRGBA");
LineSet1242->setColor(ColorRGBA1244);

Shape1241->setGeometry(LineSet1242);

HAnimSegment1237->addChildren(Shape1241);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_clavicale'/>
CShape* Shape1245 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1246 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1246->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1247 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1247->setPoint(new float[6]{-0.082,1.4488,-0.0353,-0.0115,1.4943,0.04});
LineSet1246->setCoord(Coordinate1247);

CColorRGBA* ColorRGBA1248 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1248->setUSE("HAnimSiteLineColorRGBA");
LineSet1246->setColor(ColorRGBA1248);

Shape1245->setGeometry(LineSet1246);

HAnimSegment1237->addChildren(Shape1245);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_acromion'/>
CShape* Shape1249 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1250 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1250->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1251 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1251->setPoint(new float[6]{-0.082,1.4488,-0.0353,-0.1905,1.4791,-0.0431});
LineSet1250->setCoord(Coordinate1251);

CColorRGBA* ColorRGBA1252 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1252->setUSE("HAnimSiteLineColorRGBA");
LineSet1250->setColor(ColorRGBA1252);

Shape1249->setGeometry(LineSet1250);

HAnimSegment1237->addChildren(Shape1249);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_ant'/>
CShape* Shape1253 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1254 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1254->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1255 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1255->setPoint(new float[6]{-0.082,1.4488,-0.0353,-0.1626,1.4072,-0.0031});
LineSet1254->setCoord(Coordinate1255);

CColorRGBA* ColorRGBA1256 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1256->setUSE("HAnimSiteLineColorRGBA");
LineSet1254->setColor(ColorRGBA1256);

Shape1253->setGeometry(LineSet1254);

HAnimSegment1237->addChildren(Shape1253);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_post'/>
CShape* Shape1257 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1258 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1258->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1259 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1259->setPoint(new float[6]{-0.082,1.4488,-0.0353,-0.1603,1.4098,-0.0826});
LineSet1258->setCoord(Coordinate1259);

CColorRGBA* ColorRGBA1260 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1260->setUSE("HAnimSiteLineColorRGBA");
LineSet1258->setColor(ColorRGBA1260);

Shape1257->setGeometry(LineSet1258);

HAnimSegment1237->addChildren(Shape1257);

CHAnimSite* HAnimSite1261 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1261->setName("r_clavicale_pt");
HAnimSite1261->setDEF("hanim_r_clavicale_pt");
HAnimSite1261->setTranslation(new float[3]{-0.0115,1.4943,0.04});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1262 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1262->setDescription("HAnimSite r_clavicale");
HAnimSite1261->addChildren(TouchSensor1262);

CShape* Shape1263 = (CShape *)m_pScene.createNode("Shape");
Shape1263->setUSE("HAnimSiteShape");
HAnimSite1261->addChildren(Shape1263);

HAnimSegment1237->addChildren(HAnimSite1261);

CHAnimSite* HAnimSite1264 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1264->setName("r_acromion_pt");
HAnimSite1264->setDEF("hanim_r_acromion_pt");
HAnimSite1264->setTranslation(new float[3]{-0.1905,1.4791,-0.0431});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1265 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1265->setDescription("HAnimSite r_acromion");
HAnimSite1264->addChildren(TouchSensor1265);

CShape* Shape1266 = (CShape *)m_pScene.createNode("Shape");
Shape1266->setUSE("HAnimSiteShape");
HAnimSite1264->addChildren(Shape1266);

HAnimSegment1237->addChildren(HAnimSite1264);

CHAnimSite* HAnimSite1267 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1267->setName("r_axilla_ant_pt");
HAnimSite1267->setDEF("hanim_r_axilla_ant_pt");
HAnimSite1267->setTranslation(new float[3]{-0.1626,1.4072,-0.0031});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1268 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1268->setDescription("HAnimSite r_axilla_ant");
HAnimSite1267->addChildren(TouchSensor1268);

CShape* Shape1269 = (CShape *)m_pScene.createNode("Shape");
Shape1269->setUSE("HAnimSiteShape");
HAnimSite1267->addChildren(Shape1269);

HAnimSegment1237->addChildren(HAnimSite1267);

CHAnimSite* HAnimSite1270 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1270->setName("r_axilla_post_pt");
HAnimSite1270->setDEF("hanim_r_axilla_post_pt");
HAnimSite1270->setTranslation(new float[3]{-0.1603,1.4098,-0.0826});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1271 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1271->setDescription("HAnimSite r_axilla_post");
HAnimSite1270->addChildren(TouchSensor1271);

CShape* Shape1272 = (CShape *)m_pScene.createNode("Shape");
Shape1272->setUSE("HAnimSiteShape");
HAnimSite1270->addChildren(Shape1272);

HAnimSegment1237->addChildren(HAnimSite1270);

HAnimJoint1236->addChildren(HAnimSegment1237);

CHAnimJoint* HAnimJoint1273 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1273->setName("r_acromioclavicular");
HAnimJoint1273->setDEF("hanim_r_acromioclavicular");
HAnimJoint1273->setCenter(new float[3]{-0.0962,1.4269,-0.0424});
HAnimJoint1273->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1274 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1274->setName("r_scapula");
HAnimSegment1274->setDEF("hanim_r_scapula");
//<HAnimJoint name='r_acromioclavicular'/> visualization sphere is placed within <HAnimSegment name='r_scapula'/>
CTouchSensor* TouchSensor1275 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1275->setDescription("HAnimJoint r_acromioclavicular, HAnimSegment r_scapula");
HAnimSegment1274->addChildren(TouchSensor1275);

CTransform* Transform1276 = (CTransform *)m_pScene.createNode("Transform");
Transform1276->setTranslation(new float[3]{-0.0962,1.4269,-0.0424});
CShape* Shape1277 = (CShape *)m_pScene.createNode("Shape");
Shape1277->setUSE("HAnimJointShape");
Transform1276->addChildren(Shape1277);

HAnimSegment1274->addChildren(Transform1276);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_acromioclavicular'/> to <HAnimJoint name='r_shoulder'/>
CShape* Shape1278 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1279 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1279->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1280 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1280->setPoint(new float[6]{-0.0962,1.4269,-0.0424,-0.2029,1.4376,-0.0387});
LineSet1279->setCoord(Coordinate1280);

CColorRGBA* ColorRGBA1281 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1281->setUSE("HAnimSegmentLineColorRGBA");
LineSet1279->setColor(ColorRGBA1281);

Shape1278->setGeometry(LineSet1279);

HAnimSegment1274->addChildren(Shape1278);

HAnimJoint1273->addChildren(HAnimSegment1274);

CHAnimJoint* HAnimJoint1282 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1282->setName("r_shoulder");
HAnimJoint1282->setDEF("hanim_r_shoulder");
HAnimJoint1282->setCenter(new float[3]{-0.2029,1.4376,-0.0387});
HAnimJoint1282->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1283 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1283->setName("r_upperarm");
HAnimSegment1283->setDEF("hanim_r_upperarm");
//<HAnimJoint name='r_shoulder'/> visualization sphere is placed within <HAnimSegment name='r_upperarm'/>
CTouchSensor* TouchSensor1284 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1284->setDescription("HAnimJoint r_shoulder, HAnimSegment r_upperarm");
HAnimSegment1283->addChildren(TouchSensor1284);

CTransform* Transform1285 = (CTransform *)m_pScene.createNode("Transform");
Transform1285->setTranslation(new float[3]{-0.2029,1.4376,-0.0387});
CShape* Shape1286 = (CShape *)m_pScene.createNode("Shape");
Shape1286->setUSE("HAnimJointShape");
Transform1285->addChildren(Shape1286);

HAnimSegment1283->addChildren(Transform1285);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_shoulder'/> to <HAnimJoint name='r_elbow'/>
CShape* Shape1287 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1288 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1288->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1289 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1289->setPoint(new float[6]{-0.2029,1.4376,-0.0387,-0.2014,1.1357,-0.0682});
LineSet1288->setCoord(Coordinate1289);

CColorRGBA* ColorRGBA1290 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1290->setUSE("HAnimSegmentLineColorRGBA");
LineSet1288->setColor(ColorRGBA1290);

Shape1287->setGeometry(LineSet1288);

HAnimSegment1283->addChildren(Shape1287);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_shoulder'/> to <HAnimSite name='r_humeral_lateral_epicn'/>
CShape* Shape1291 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1292 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1292->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1293 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1293->setPoint(new float[6]{-0.2029,1.4376,-0.0387,-0.2224,1.1517,-0.1033});
LineSet1292->setCoord(Coordinate1293);

CColorRGBA* ColorRGBA1294 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1294->setUSE("HAnimSiteLineColorRGBA");
LineSet1292->setColor(ColorRGBA1294);

Shape1291->setGeometry(LineSet1292);

HAnimSegment1283->addChildren(Shape1291);

CHAnimSite* HAnimSite1295 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1295->setName("r_humeral_lateral_epicn_pt");
HAnimSite1295->setDEF("hanim_r_humeral_lateral_epicn_pt");
HAnimSite1295->setTranslation(new float[3]{-0.2224,1.1517,-0.1033});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1296 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1296->setDescription("HAnimSite r_humeral_lateral_epicn");
HAnimSite1295->addChildren(TouchSensor1296);

CShape* Shape1297 = (CShape *)m_pScene.createNode("Shape");
Shape1297->setUSE("HAnimSiteShape");
HAnimSite1295->addChildren(Shape1297);

HAnimSegment1283->addChildren(HAnimSite1295);

HAnimJoint1282->addChildren(HAnimSegment1283);

CHAnimJoint* HAnimJoint1298 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1298->setName("r_elbow");
HAnimJoint1298->setDEF("hanim_r_elbow");
HAnimJoint1298->setCenter(new float[3]{-0.2014,1.1357,-0.0682});
HAnimJoint1298->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1299 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1299->setName("r_forearm");
HAnimSegment1299->setDEF("hanim_r_forearm");
//<HAnimJoint name='r_elbow'/> visualization sphere is placed within <HAnimSegment name='r_forearm'/>
CTouchSensor* TouchSensor1300 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1300->setDescription("HAnimJoint r_elbow, HAnimSegment r_forearm");
HAnimSegment1299->addChildren(TouchSensor1300);

CTransform* Transform1301 = (CTransform *)m_pScene.createNode("Transform");
Transform1301->setTranslation(new float[3]{-0.2014,1.1357,-0.0682});
CShape* Shape1302 = (CShape *)m_pScene.createNode("Shape");
Shape1302->setUSE("HAnimJointShape");
Transform1301->addChildren(Shape1302);

HAnimSegment1299->addChildren(Transform1301);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_elbow'/> to <HAnimJoint name='r_wrist'/>
CShape* Shape1303 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1304 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1304->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1305 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1305->setPoint(new float[6]{-0.2014,1.1357,-0.0682,-0.1984,0.8663,-0.0583});
LineSet1304->setCoord(Coordinate1305);

CColorRGBA* ColorRGBA1306 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1306->setUSE("HAnimSegmentLineColorRGBA");
LineSet1304->setColor(ColorRGBA1306);

Shape1303->setGeometry(LineSet1304);

HAnimSegment1299->addChildren(Shape1303);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radial_styloid'/>
CShape* Shape1307 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1308 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1308->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1309 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1309->setPoint(new float[6]{-0.2014,1.1357,-0.0682,-0.1884,0.8676,-0.036});
LineSet1308->setCoord(Coordinate1309);

CColorRGBA* ColorRGBA1310 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1310->setUSE("HAnimSiteLineColorRGBA");
LineSet1308->setColor(ColorRGBA1310);

Shape1307->setGeometry(LineSet1308);

HAnimSegment1299->addChildren(Shape1307);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_olecranon'/>
CShape* Shape1311 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1312 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1312->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1313 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1313->setPoint(new float[6]{-0.2014,1.1357,-0.0682,-0.1907,1.1405,-0.1065});
LineSet1312->setCoord(Coordinate1313);

CColorRGBA* ColorRGBA1314 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1314->setUSE("HAnimSiteLineColorRGBA");
LineSet1312->setColor(ColorRGBA1314);

Shape1311->setGeometry(LineSet1312);

HAnimSegment1299->addChildren(Shape1311);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_humeral_medial_epicn'/>
CShape* Shape1315 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1316 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1316->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1317 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1317->setPoint(new float[6]{-0.2014,1.1357,-0.0682,-0.168,1.1298,-0.1062});
LineSet1316->setCoord(Coordinate1317);

CColorRGBA* ColorRGBA1318 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1318->setUSE("HAnimSiteLineColorRGBA");
LineSet1316->setColor(ColorRGBA1318);

Shape1315->setGeometry(LineSet1316);

HAnimSegment1299->addChildren(Shape1315);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radiale'/>
CShape* Shape1319 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1320 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1320->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1321 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1321->setPoint(new float[6]{-0.2014,1.1357,-0.0682,-0.213,1.1305,-0.1091});
LineSet1320->setCoord(Coordinate1321);

CColorRGBA* ColorRGBA1322 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1322->setUSE("HAnimSiteLineColorRGBA");
LineSet1320->setColor(ColorRGBA1322);

Shape1319->setGeometry(LineSet1320);

HAnimSegment1299->addChildren(Shape1319);

CHAnimSite* HAnimSite1323 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1323->setName("r_radial_styloid_pt");
HAnimSite1323->setDEF("hanim_r_radial_styloid_pt");
HAnimSite1323->setTranslation(new float[3]{-0.1884,0.8676,-0.036});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1324 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1324->setDescription("HAnimSite r_radial_styloid");
HAnimSite1323->addChildren(TouchSensor1324);

CShape* Shape1325 = (CShape *)m_pScene.createNode("Shape");
Shape1325->setUSE("HAnimSiteShape");
HAnimSite1323->addChildren(Shape1325);

HAnimSegment1299->addChildren(HAnimSite1323);

CHAnimSite* HAnimSite1326 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1326->setName("r_olecranon_pt");
HAnimSite1326->setDEF("hanim_r_olecranon_pt");
HAnimSite1326->setTranslation(new float[3]{-0.1907,1.1405,-0.1065});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1327 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1327->setDescription("HAnimSite r_olecranon");
HAnimSite1326->addChildren(TouchSensor1327);

CShape* Shape1328 = (CShape *)m_pScene.createNode("Shape");
Shape1328->setUSE("HAnimSiteShape");
HAnimSite1326->addChildren(Shape1328);

HAnimSegment1299->addChildren(HAnimSite1326);

CHAnimSite* HAnimSite1329 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1329->setName("r_humeral_medial_epicn_pt");
HAnimSite1329->setDEF("hanim_r_humeral_medial_epicn_pt");
HAnimSite1329->setTranslation(new float[3]{-0.168,1.1298,-0.1062});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1330 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1330->setDescription("HAnimSite r_humeral_medial_epicn");
HAnimSite1329->addChildren(TouchSensor1330);

CShape* Shape1331 = (CShape *)m_pScene.createNode("Shape");
Shape1331->setUSE("HAnimSiteShape");
HAnimSite1329->addChildren(Shape1331);

HAnimSegment1299->addChildren(HAnimSite1329);

CHAnimSite* HAnimSite1332 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1332->setName("r_radiale_pt");
HAnimSite1332->setDEF("hanim_r_radiale_pt");
HAnimSite1332->setTranslation(new float[3]{-0.213,1.1305,-0.1091});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1333 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1333->setDescription("HAnimSite r_radiale");
HAnimSite1332->addChildren(TouchSensor1333);

CShape* Shape1334 = (CShape *)m_pScene.createNode("Shape");
Shape1334->setUSE("HAnimSiteShape");
HAnimSite1332->addChildren(Shape1334);

HAnimSegment1299->addChildren(HAnimSite1332);

HAnimJoint1298->addChildren(HAnimSegment1299);

CHAnimJoint* HAnimJoint1335 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1335->setName("r_wrist");
HAnimJoint1335->setDEF("hanim_r_wrist");
HAnimJoint1335->setCenter(new float[3]{-0.1984,0.8663,-0.0583});
HAnimJoint1335->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1336 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1336->setName("r_hand");
HAnimSegment1336->setDEF("hanim_r_hand");
//<HAnimJoint name='r_wrist'/> visualization sphere is placed within <HAnimSegment name='r_hand'/>
CTouchSensor* TouchSensor1337 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1337->setDescription("HAnimJoint r_wrist, HAnimSegment r_hand");
HAnimSegment1336->addChildren(TouchSensor1337);

CTransform* Transform1338 = (CTransform *)m_pScene.createNode("Transform");
Transform1338->setTranslation(new float[3]{-0.1984,0.8663,-0.0583});
CShape* Shape1339 = (CShape *)m_pScene.createNode("Shape");
Shape1339->setUSE("HAnimJointShape");
Transform1338->addChildren(Shape1339);

HAnimSegment1336->addChildren(Transform1338);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_thumb1'/>
CShape* Shape1340 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1341 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1341->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1342 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1342->setPoint(new float[6]{-0.1984,0.8663,-0.0583,-0.1924,0.8472,-0.0534});
LineSet1341->setCoord(Coordinate1342);

CColorRGBA* ColorRGBA1343 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1343->setUSE("HAnimSegmentLineColorRGBA");
LineSet1341->setColor(ColorRGBA1343);

Shape1340->setGeometry(LineSet1341);

HAnimSegment1336->addChildren(Shape1340);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_index0'/>
CShape* Shape1344 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1345 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1345->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1346 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1346->setPoint(new float[6]{-0.1984,0.8663,-0.0583,-0.1983,0.8024,-0.028});
LineSet1345->setCoord(Coordinate1346);

CColorRGBA* ColorRGBA1347 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1347->setUSE("HAnimSegmentLineColorRGBA");
LineSet1345->setColor(ColorRGBA1347);

Shape1344->setGeometry(LineSet1345);

HAnimSegment1336->addChildren(Shape1344);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_middle0'/>
CShape* Shape1348 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1349 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1349->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1350 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1350->setPoint(new float[6]{-0.1984,0.8663,-0.0583,-0.1987,0.8029,-0.053});
LineSet1349->setCoord(Coordinate1350);

CColorRGBA* ColorRGBA1351 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1351->setUSE("HAnimSegmentLineColorRGBA");
LineSet1349->setColor(ColorRGBA1351);

Shape1348->setGeometry(LineSet1349);

HAnimSegment1336->addChildren(Shape1348);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_ring0'/>
CShape* Shape1352 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1353 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1353->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1354 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1354->setPoint(new float[6]{-0.1984,0.8663,-0.0583,-0.1956,0.8019,-0.0794});
LineSet1353->setCoord(Coordinate1354);

CColorRGBA* ColorRGBA1355 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1355->setUSE("HAnimSegmentLineColorRGBA");
LineSet1353->setColor(ColorRGBA1355);

Shape1352->setGeometry(LineSet1353);

HAnimSegment1336->addChildren(Shape1352);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_pinky0'/>
CShape* Shape1356 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1357 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1357->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1358 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1358->setPoint(new float[6]{-0.1984,0.8663,-0.0583,-0.1925,0.8066,-0.1036});
LineSet1357->setCoord(Coordinate1358);

CColorRGBA* ColorRGBA1359 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1359->setUSE("HAnimSegmentLineColorRGBA");
LineSet1357->setColor(ColorRGBA1359);

Shape1356->setGeometry(LineSet1357);

HAnimSegment1336->addChildren(Shape1356);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_metacarpal_pha2'/>
CShape* Shape1360 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1361 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1361->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1362 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1362->setPoint(new float[6]{-0.1984,0.8663,-0.0583,-0.1977,0.8169,-0.0177});
LineSet1361->setCoord(Coordinate1362);

CColorRGBA* ColorRGBA1363 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1363->setUSE("HAnimSiteLineColorRGBA");
LineSet1361->setColor(ColorRGBA1363);

Shape1360->setGeometry(LineSet1361);

HAnimSegment1336->addChildren(Shape1360);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_ulnar_styloid'/>
CShape* Shape1364 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1365 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1365->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1366 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1366->setPoint(new float[6]{-0.1984,0.8663,-0.0583,-0.2117,0.8562,-0.0584});
LineSet1365->setCoord(Coordinate1366);

CColorRGBA* ColorRGBA1367 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1367->setUSE("HAnimSiteLineColorRGBA");
LineSet1365->setColor(ColorRGBA1367);

Shape1364->setGeometry(LineSet1365);

HAnimSegment1336->addChildren(Shape1364);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_metacarpal_pha5'/>
CShape* Shape1368 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1369 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1369->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1370 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1370->setPoint(new float[6]{-0.1984,0.8663,-0.0583,-0.1929,0.789,-0.1064});
LineSet1369->setCoord(Coordinate1370);

CColorRGBA* ColorRGBA1371 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1371->setUSE("HAnimSiteLineColorRGBA");
LineSet1369->setColor(ColorRGBA1371);

Shape1368->setGeometry(LineSet1369);

HAnimSegment1336->addChildren(Shape1368);

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_hand_front_view'/>
CShape* Shape1372 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1373 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1373->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1374 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1374->setPoint(new float[6]{-0.1984,0.8663,-0.0583,-0.3,0.75,0.45});
LineSet1373->setCoord(Coordinate1374);

CColorRGBA* ColorRGBA1375 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1375->setUSE("HAnimSiteViewpointLineColorRGBA");
LineSet1373->setColor(ColorRGBA1375);

Shape1372->setGeometry(LineSet1373);

HAnimSegment1336->addChildren(Shape1372);

CHAnimSite* HAnimSite1376 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1376->setName("r_metacarpal_pha2_pt");
HAnimSite1376->setDEF("hanim_r_metacarpal_pha2_pt");
HAnimSite1376->setTranslation(new float[3]{-0.1977,0.8169,-0.0177});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1377 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1377->setDescription("HAnimSite r_metacarpal_pha2");
HAnimSite1376->addChildren(TouchSensor1377);

CShape* Shape1378 = (CShape *)m_pScene.createNode("Shape");
Shape1378->setUSE("HAnimSiteShape");
HAnimSite1376->addChildren(Shape1378);

HAnimSegment1336->addChildren(HAnimSite1376);

CHAnimSite* HAnimSite1379 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1379->setName("r_ulnar_styloid_pt");
HAnimSite1379->setDEF("hanim_r_ulnar_styloid_pt");
HAnimSite1379->setTranslation(new float[3]{-0.2117,0.8562,-0.0584});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1380 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1380->setDescription("HAnimSite r_ulnar_styloid");
HAnimSite1379->addChildren(TouchSensor1380);

CShape* Shape1381 = (CShape *)m_pScene.createNode("Shape");
Shape1381->setUSE("HAnimSiteShape");
HAnimSite1379->addChildren(Shape1381);

HAnimSegment1336->addChildren(HAnimSite1379);

CHAnimSite* HAnimSite1382 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1382->setName("r_metacarpal_pha5_pt");
HAnimSite1382->setDEF("hanim_r_metacarpal_pha5_pt");
HAnimSite1382->setTranslation(new float[3]{-0.1929,0.789,-0.1064});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1383 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1383->setDescription("HAnimSite r_metacarpal_pha5");
HAnimSite1382->addChildren(TouchSensor1383);

CShape* Shape1384 = (CShape *)m_pScene.createNode("Shape");
Shape1384->setUSE("HAnimSiteShape");
HAnimSite1382->addChildren(Shape1384);

HAnimSegment1336->addChildren(HAnimSite1382);

CHAnimSite* HAnimSite1385 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1385->setName("r_hand_front_view");
HAnimSite1385->setDEF("hanim_r_hand_front_view");
HAnimSite1385->setTranslation(new float[3]{-0.3,0.75,0.45});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1386 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1386->setDescription("HAnimSite r_hand_front_view");
HAnimSite1385->addChildren(TouchSensor1386);

CShape* Shape1387 = (CShape *)m_pScene.createNode("Shape");
Shape1387->setUSE("HAnimSiteShape");
HAnimSite1385->addChildren(Shape1387);

CViewpoint* Viewpoint1388 = (CViewpoint *)m_pScene.createNode("Viewpoint");
Viewpoint1388->setDEF("hanim_r_hand_front_viewpoint");
Viewpoint1388->setCenterOfRotation(new float[3]{0,0.7,0});
Viewpoint1388->setDescription("right hand front");
Viewpoint1388->setPosition(new float[3]{0,0,0});
HAnimSite1385->addChildren(Viewpoint1388);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1389 = (CAnchor *)m_pScene.createNode("Anchor");
Anchor1389->setDescription("HAnimSite hanim_r_hand_front_view Viewpoint");
Anchor1389->setUrl(new CString[1]{"#hanim_r_hand_front_viewpoint"}, 1);
CLOD* LOD1390 = (CLOD *)m_pScene.createNode("LOD");
LOD1390->setForceTransitions(True);
LOD1390->setRange(new float[1]{0.04});
CWorldInfo* WorldInfo1391 = (CWorldInfo *)m_pScene.createNode("WorldInfo");
WorldInfo1391->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1390->addChildren(WorldInfo1391);

CShape* Shape1392 = (CShape *)m_pScene.createNode("Shape");
Shape1392->setUSE("HAnimSiteViewpointShape");
LOD1390->addChildren(Shape1392);

Anchor1389->addChildren(LOD1390);

HAnimSite1385->addChildren(Anchor1389);

HAnimSegment1336->addChildren(HAnimSite1385);

HAnimJoint1335->addChildren(HAnimSegment1336);

CHAnimJoint* HAnimJoint1393 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1393->setName("r_thumb1");
HAnimJoint1393->setDEF("hanim_r_thumb1");
HAnimJoint1393->setCenter(new float[3]{-0.1924,0.8472,-0.0534});
HAnimJoint1393->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1394 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1394->setName("r_thumb_metacarpal");
HAnimSegment1394->setDEF("hanim_r_thumb_metacarpal");
//<HAnimJoint name='r_thumb1'/> visualization sphere is placed within <HAnimSegment name='r_thumb_metacarpal'/>
CTouchSensor* TouchSensor1395 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1395->setDescription("HAnimJoint r_thumb1, HAnimSegment r_thumb_metacarpal");
HAnimSegment1394->addChildren(TouchSensor1395);

CTransform* Transform1396 = (CTransform *)m_pScene.createNode("Transform");
Transform1396->setTranslation(new float[3]{-0.1924,0.8472,-0.0534});
CShape* Shape1397 = (CShape *)m_pScene.createNode("Shape");
Shape1397->setUSE("HAnimJointShape");
Transform1396->addChildren(Shape1397);

HAnimSegment1394->addChildren(Transform1396);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_thumb1'/> to <HAnimJoint name='r_thumb2'/>
CShape* Shape1398 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1399 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1399->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1400 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1400->setPoint(new float[6]{-0.1924,0.8472,-0.0534,-0.1951,0.8226,0.0246});
LineSet1399->setCoord(Coordinate1400);

CColorRGBA* ColorRGBA1401 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1401->setUSE("HAnimSegmentLineColorRGBA");
LineSet1399->setColor(ColorRGBA1401);

Shape1398->setGeometry(LineSet1399);

HAnimSegment1394->addChildren(Shape1398);

HAnimJoint1393->addChildren(HAnimSegment1394);

CHAnimJoint* HAnimJoint1402 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1402->setName("r_thumb2");
HAnimJoint1402->setDEF("hanim_r_thumb2");
HAnimJoint1402->setCenter(new float[3]{-0.1951,0.8226,0.0246});
HAnimJoint1402->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1403 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1403->setName("r_thumb_proximal");
HAnimSegment1403->setDEF("hanim_r_thumb_proximal");
//<HAnimJoint name='r_thumb2'/> visualization sphere is placed within <HAnimSegment name='r_thumb_proximal'/>
CTouchSensor* TouchSensor1404 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1404->setDescription("HAnimJoint r_thumb2, HAnimSegment r_thumb_proximal");
HAnimSegment1403->addChildren(TouchSensor1404);

CTransform* Transform1405 = (CTransform *)m_pScene.createNode("Transform");
Transform1405->setTranslation(new float[3]{-0.1951,0.8226,0.0246});
CShape* Shape1406 = (CShape *)m_pScene.createNode("Shape");
Shape1406->setUSE("HAnimJointShape");
Transform1405->addChildren(Shape1406);

HAnimSegment1403->addChildren(Transform1405);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_thumb2'/> to <HAnimJoint name='r_thumb3'/>
CShape* Shape1407 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1408 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1408->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1409 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1409->setPoint(new float[6]{-0.1951,0.8226,0.0246,-0.1955,0.8159,0.0464});
LineSet1408->setCoord(Coordinate1409);

CColorRGBA* ColorRGBA1410 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1410->setUSE("HAnimSegmentLineColorRGBA");
LineSet1408->setColor(ColorRGBA1410);

Shape1407->setGeometry(LineSet1408);

HAnimSegment1403->addChildren(Shape1407);

HAnimJoint1402->addChildren(HAnimSegment1403);

CHAnimJoint* HAnimJoint1411 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1411->setName("r_thumb3");
HAnimJoint1411->setDEF("hanim_r_thumb3");
HAnimJoint1411->setCenter(new float[3]{-0.1955,0.8159,0.0464});
HAnimJoint1411->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1412 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1412->setName("r_thumb_distal");
HAnimSegment1412->setDEF("hanim_r_thumb_distal");
//<HAnimJoint name='r_thumb3'/> visualization sphere is placed within <HAnimSegment name='r_thumb_distal'/>
CTouchSensor* TouchSensor1413 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1413->setDescription("HAnimJoint r_thumb3, HAnimSegment r_thumb_distal");
HAnimSegment1412->addChildren(TouchSensor1413);

CTransform* Transform1414 = (CTransform *)m_pScene.createNode("Transform");
Transform1414->setTranslation(new float[3]{-0.1955,0.8159,0.0464});
CShape* Shape1415 = (CShape *)m_pScene.createNode("Shape");
Shape1415->setUSE("HAnimJointShape");
Transform1414->addChildren(Shape1415);

HAnimSegment1412->addChildren(Transform1414);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_thumb3'/> to <HAnimSite name='r_thumb_distal_tip'/>
CShape* Shape1416 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1417 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1417->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1418 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1418->setPoint(new float[6]{-0.1955,0.8159,0.0464,-0.1869,0.809,0.082});
LineSet1417->setCoord(Coordinate1418);

CColorRGBA* ColorRGBA1419 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1419->setUSE("HAnimSiteLineColorRGBA");
LineSet1417->setColor(ColorRGBA1419);

Shape1416->setGeometry(LineSet1417);

HAnimSegment1412->addChildren(Shape1416);

CHAnimSite* HAnimSite1420 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1420->setName("r_thumb_distal_tip");
HAnimSite1420->setDEF("hanim_r_thumb_distal_tip");
HAnimSite1420->setTranslation(new float[3]{-0.1869,0.809,0.082});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1421 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1421->setDescription("HAnimSite r_thumb_distal_tip");
HAnimSite1420->addChildren(TouchSensor1421);

CShape* Shape1422 = (CShape *)m_pScene.createNode("Shape");
Shape1422->setUSE("HAnimSiteShape");
HAnimSite1420->addChildren(Shape1422);

HAnimSegment1412->addChildren(HAnimSite1420);

HAnimJoint1411->addChildren(HAnimSegment1412);

HAnimJoint1402->addChildren(HAnimJoint1411);

HAnimJoint1393->addChildren(HAnimJoint1402);

HAnimJoint1335->addChildren(HAnimJoint1393);

CHAnimJoint* HAnimJoint1423 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1423->setName("r_index0");
HAnimJoint1423->setDEF("hanim_r_index0");
HAnimJoint1423->setCenter(new float[3]{-0.1983,0.8024,-0.028});
HAnimJoint1423->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1424 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1424->setName("r_index_metacarpal");
HAnimSegment1424->setDEF("hanim_r_index_metacarpal");
//<HAnimJoint name='r_index0'/> visualization sphere is placed within <HAnimSegment name='r_index_metacarpal'/>
CTouchSensor* TouchSensor1425 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1425->setDescription("HAnimJoint r_index0, HAnimSegment r_index_metacarpal");
HAnimSegment1424->addChildren(TouchSensor1425);

CTransform* Transform1426 = (CTransform *)m_pScene.createNode("Transform");
Transform1426->setTranslation(new float[3]{-0.1983,0.8024,-0.028});
CShape* Shape1427 = (CShape *)m_pScene.createNode("Shape");
Shape1427->setUSE("HAnimJointShape");
Transform1426->addChildren(Shape1427);

HAnimSegment1424->addChildren(Transform1426);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_index0'/> to <HAnimJoint name='r_index1'/>
CShape* Shape1428 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1429 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1429->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1430 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1430->setPoint(new float[6]{-0.1983,0.8024,-0.028,-0.1983,0.7815,-0.028});
LineSet1429->setCoord(Coordinate1430);

CColorRGBA* ColorRGBA1431 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1431->setUSE("HAnimSegmentLineColorRGBA");
LineSet1429->setColor(ColorRGBA1431);

Shape1428->setGeometry(LineSet1429);

HAnimSegment1424->addChildren(Shape1428);

HAnimJoint1423->addChildren(HAnimSegment1424);

CHAnimJoint* HAnimJoint1432 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1432->setName("r_index1");
HAnimJoint1432->setDEF("hanim_r_index1");
HAnimJoint1432->setCenter(new float[3]{-0.1983,0.7815,-0.028});
HAnimJoint1432->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1433 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1433->setName("r_index_proximal");
HAnimSegment1433->setDEF("hanim_r_index_proximal");
//<HAnimJoint name='r_index1'/> visualization sphere is placed within <HAnimSegment name='r_index_proximal'/>
CTouchSensor* TouchSensor1434 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1434->setDescription("HAnimJoint r_index1, HAnimSegment r_index_proximal");
HAnimSegment1433->addChildren(TouchSensor1434);

CTransform* Transform1435 = (CTransform *)m_pScene.createNode("Transform");
Transform1435->setTranslation(new float[3]{-0.1983,0.7815,-0.028});
CShape* Shape1436 = (CShape *)m_pScene.createNode("Shape");
Shape1436->setUSE("HAnimJointShape");
Transform1435->addChildren(Shape1436);

HAnimSegment1433->addChildren(Transform1435);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_index1'/> to <HAnimJoint name='r_index2'/>
CShape* Shape1437 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1438 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1438->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1439 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1439->setPoint(new float[6]{-0.1983,0.7815,-0.028,-0.2017,0.7363,-0.0248});
LineSet1438->setCoord(Coordinate1439);

CColorRGBA* ColorRGBA1440 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1440->setUSE("HAnimSegmentLineColorRGBA");
LineSet1438->setColor(ColorRGBA1440);

Shape1437->setGeometry(LineSet1438);

HAnimSegment1433->addChildren(Shape1437);

HAnimJoint1432->addChildren(HAnimSegment1433);

CHAnimJoint* HAnimJoint1441 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1441->setName("r_index2");
HAnimJoint1441->setDEF("hanim_r_index2");
HAnimJoint1441->setCenter(new float[3]{-0.2017,0.7363,-0.0248});
HAnimJoint1441->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1442 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1442->setName("r_index_middle");
HAnimSegment1442->setDEF("hanim_r_index_middle");
//<HAnimJoint name='r_index2'/> visualization sphere is placed within <HAnimSegment name='r_index_middle'/>
CTouchSensor* TouchSensor1443 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1443->setDescription("HAnimJoint r_index2, HAnimSegment r_index_middle");
HAnimSegment1442->addChildren(TouchSensor1443);

CTransform* Transform1444 = (CTransform *)m_pScene.createNode("Transform");
Transform1444->setTranslation(new float[3]{-0.2017,0.7363,-0.0248});
CShape* Shape1445 = (CShape *)m_pScene.createNode("Shape");
Shape1445->setUSE("HAnimJointShape");
Transform1444->addChildren(Shape1445);

HAnimSegment1442->addChildren(Transform1444);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_index2'/> to <HAnimJoint name='r_index3'/>
CShape* Shape1446 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1447 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1447->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1448 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1448->setPoint(new float[6]{-0.2017,0.7363,-0.0248,-0.2028,0.7139,-0.0236});
LineSet1447->setCoord(Coordinate1448);

CColorRGBA* ColorRGBA1449 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1449->setUSE("HAnimSegmentLineColorRGBA");
LineSet1447->setColor(ColorRGBA1449);

Shape1446->setGeometry(LineSet1447);

HAnimSegment1442->addChildren(Shape1446);

HAnimJoint1441->addChildren(HAnimSegment1442);

CHAnimJoint* HAnimJoint1450 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1450->setName("r_index3");
HAnimJoint1450->setDEF("hanim_r_index3");
HAnimJoint1450->setCenter(new float[3]{-0.2028,0.7139,-0.0236});
HAnimJoint1450->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1451 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1451->setName("r_index_distal");
HAnimSegment1451->setDEF("hanim_r_index_distal");
//<HAnimJoint name='r_index3'/> visualization sphere is placed within <HAnimSegment name='r_index_distal'/>
CTouchSensor* TouchSensor1452 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1452->setDescription("HAnimJoint r_index3, HAnimSegment r_index_distal");
HAnimSegment1451->addChildren(TouchSensor1452);

CTransform* Transform1453 = (CTransform *)m_pScene.createNode("Transform");
Transform1453->setTranslation(new float[3]{-0.2028,0.7139,-0.0236});
CShape* Shape1454 = (CShape *)m_pScene.createNode("Shape");
Shape1454->setUSE("HAnimJointShape");
Transform1453->addChildren(Shape1454);

HAnimSegment1451->addChildren(Transform1453);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_index_distal_tip'/>
CShape* Shape1455 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1456 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1456->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1457 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1457->setPoint(new float[6]{-0.2028,0.7139,-0.0236,-0.198,0.6883,-0.018});
LineSet1456->setCoord(Coordinate1457);

CColorRGBA* ColorRGBA1458 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1458->setUSE("HAnimSiteLineColorRGBA");
LineSet1456->setColor(ColorRGBA1458);

Shape1455->setGeometry(LineSet1456);

HAnimSegment1451->addChildren(Shape1455);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_dactylion'/>
CShape* Shape1459 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1460 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1460->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1461 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1461->setPoint(new float[6]{-0.2028,0.7139,-0.0236,-0.1941,0.6772,-0.0423});
LineSet1460->setCoord(Coordinate1461);

CColorRGBA* ColorRGBA1462 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1462->setUSE("HAnimSiteLineColorRGBA");
LineSet1460->setColor(ColorRGBA1462);

Shape1459->setGeometry(LineSet1460);

HAnimSegment1451->addChildren(Shape1459);

CHAnimSite* HAnimSite1463 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1463->setName("r_index_distal_tip");
HAnimSite1463->setDEF("hanim_r_index_distal_tip");
HAnimSite1463->setTranslation(new float[3]{-0.198,0.6883,-0.018});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1464 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1464->setDescription("HAnimSite r_index_distal_tip");
HAnimSite1463->addChildren(TouchSensor1464);

CShape* Shape1465 = (CShape *)m_pScene.createNode("Shape");
Shape1465->setUSE("HAnimSiteShape");
HAnimSite1463->addChildren(Shape1465);

HAnimSegment1451->addChildren(HAnimSite1463);

CHAnimSite* HAnimSite1466 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1466->setName("r_dactylion_pt");
HAnimSite1466->setDEF("hanim_r_dactylion_pt");
HAnimSite1466->setTranslation(new float[3]{-0.1941,0.6772,-0.0423});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1467 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1467->setDescription("HAnimSite r_dactylion");
HAnimSite1466->addChildren(TouchSensor1467);

CShape* Shape1468 = (CShape *)m_pScene.createNode("Shape");
Shape1468->setUSE("HAnimSiteShape");
HAnimSite1466->addChildren(Shape1468);

HAnimSegment1451->addChildren(HAnimSite1466);

HAnimJoint1450->addChildren(HAnimSegment1451);

HAnimJoint1441->addChildren(HAnimJoint1450);

HAnimJoint1432->addChildren(HAnimJoint1441);

HAnimJoint1423->addChildren(HAnimJoint1432);

HAnimJoint1335->addChildren(HAnimJoint1423);

CHAnimJoint* HAnimJoint1469 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1469->setName("r_middle0");
HAnimJoint1469->setDEF("hanim_r_middle0");
HAnimJoint1469->setCenter(new float[3]{-0.1987,0.8029,-0.053});
HAnimJoint1469->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1470 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1470->setName("r_middle_metacarpal");
HAnimSegment1470->setDEF("hanim_r_middle_metacarpal");
//<HAnimJoint name='r_middle0'/> visualization sphere is placed within <HAnimSegment name='r_middle_metacarpal'/>
CTouchSensor* TouchSensor1471 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1471->setDescription("HAnimJoint r_middle0, HAnimSegment r_middle_metacarpal");
HAnimSegment1470->addChildren(TouchSensor1471);

CTransform* Transform1472 = (CTransform *)m_pScene.createNode("Transform");
Transform1472->setTranslation(new float[3]{-0.1987,0.8029,-0.053});
CShape* Shape1473 = (CShape *)m_pScene.createNode("Shape");
Shape1473->setUSE("HAnimJointShape");
Transform1472->addChildren(Shape1473);

HAnimSegment1470->addChildren(Transform1472);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle0'/> to <HAnimJoint name='r_middle1'/>
CShape* Shape1474 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1475 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1475->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1476 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1476->setPoint(new float[6]{-0.1987,0.8029,-0.053,-0.1987,0.7818,-0.053});
LineSet1475->setCoord(Coordinate1476);

CColorRGBA* ColorRGBA1477 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1477->setUSE("HAnimSegmentLineColorRGBA");
LineSet1475->setColor(ColorRGBA1477);

Shape1474->setGeometry(LineSet1475);

HAnimSegment1470->addChildren(Shape1474);

HAnimJoint1469->addChildren(HAnimSegment1470);

CHAnimJoint* HAnimJoint1478 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1478->setName("r_middle1");
HAnimJoint1478->setDEF("hanim_r_middle1");
HAnimJoint1478->setCenter(new float[3]{-0.1987,0.7818,-0.053});
HAnimJoint1478->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1479 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1479->setName("r_middle_proximal");
HAnimSegment1479->setDEF("hanim_r_middle_proximal");
//<HAnimJoint name='r_middle1'/> visualization sphere is placed within <HAnimSegment name='r_middle_proximal'/>
CTouchSensor* TouchSensor1480 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1480->setDescription("HAnimJoint r_middle1, HAnimSegment r_middle_proximal");
HAnimSegment1479->addChildren(TouchSensor1480);

CTransform* Transform1481 = (CTransform *)m_pScene.createNode("Transform");
Transform1481->setTranslation(new float[3]{-0.1987,0.7818,-0.053});
CShape* Shape1482 = (CShape *)m_pScene.createNode("Shape");
Shape1482->setUSE("HAnimJointShape");
Transform1481->addChildren(Shape1482);

HAnimSegment1479->addChildren(Transform1481);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle1'/> to <HAnimJoint name='r_middle2'/>
CShape* Shape1483 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1484 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1484->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1485 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1485->setPoint(new float[6]{-0.1987,0.7818,-0.053,-0.2013,0.7273,-0.0503});
LineSet1484->setCoord(Coordinate1485);

CColorRGBA* ColorRGBA1486 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1486->setUSE("HAnimSegmentLineColorRGBA");
LineSet1484->setColor(ColorRGBA1486);

Shape1483->setGeometry(LineSet1484);

HAnimSegment1479->addChildren(Shape1483);

HAnimJoint1478->addChildren(HAnimSegment1479);

CHAnimJoint* HAnimJoint1487 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1487->setName("r_middle2");
HAnimJoint1487->setDEF("hanim_r_middle2");
HAnimJoint1487->setCenter(new float[3]{-0.2013,0.7273,-0.0503});
HAnimJoint1487->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1488 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1488->setName("r_middle_middle");
HAnimSegment1488->setDEF("hanim_r_middle_middle");
//<HAnimJoint name='r_middle2'/> visualization sphere is placed within <HAnimSegment name='r_middle_middle'/>
CTouchSensor* TouchSensor1489 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1489->setDescription("HAnimJoint r_middle2, HAnimSegment r_middle_middle");
HAnimSegment1488->addChildren(TouchSensor1489);

CTransform* Transform1490 = (CTransform *)m_pScene.createNode("Transform");
Transform1490->setTranslation(new float[3]{-0.2013,0.7273,-0.0503});
CShape* Shape1491 = (CShape *)m_pScene.createNode("Shape");
Shape1491->setUSE("HAnimJointShape");
Transform1490->addChildren(Shape1491);

HAnimSegment1488->addChildren(Transform1490);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle2'/> to <HAnimJoint name='r_middle3'/>
CShape* Shape1492 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1493 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1493->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1494 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1494->setPoint(new float[6]{-0.2013,0.7273,-0.0503,-0.2026,0.7011,-0.0494});
LineSet1493->setCoord(Coordinate1494);

CColorRGBA* ColorRGBA1495 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1495->setUSE("HAnimSegmentLineColorRGBA");
LineSet1493->setColor(ColorRGBA1495);

Shape1492->setGeometry(LineSet1493);

HAnimSegment1488->addChildren(Shape1492);

HAnimJoint1487->addChildren(HAnimSegment1488);

CHAnimJoint* HAnimJoint1496 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1496->setName("r_middle3");
HAnimJoint1496->setDEF("hanim_r_middle3");
HAnimJoint1496->setCenter(new float[3]{-0.2026,0.7011,-0.0494});
HAnimJoint1496->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1497 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1497->setName("r_middle_distal");
HAnimSegment1497->setDEF("hanim_r_middle_distal");
//<HAnimJoint name='r_middle3'/> visualization sphere is placed within <HAnimSegment name='r_middle_distal'/>
CTouchSensor* TouchSensor1498 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1498->setDescription("HAnimJoint r_middle3, HAnimSegment r_middle_distal");
HAnimSegment1497->addChildren(TouchSensor1498);

CTransform* Transform1499 = (CTransform *)m_pScene.createNode("Transform");
Transform1499->setTranslation(new float[3]{-0.2026,0.7011,-0.0494});
CShape* Shape1500 = (CShape *)m_pScene.createNode("Shape");
Shape1500->setUSE("HAnimJointShape");
Transform1499->addChildren(Shape1500);

HAnimSegment1497->addChildren(Transform1499);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_middle3'/> to <HAnimSite name='r_middle_distal_tip'/>
CShape* Shape1501 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1502 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1502->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1503 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1503->setPoint(new float[6]{-0.2026,0.7011,-0.0494,-0.1969,0.6758,-0.0427});
LineSet1502->setCoord(Coordinate1503);

CColorRGBA* ColorRGBA1504 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1504->setUSE("HAnimSiteLineColorRGBA");
LineSet1502->setColor(ColorRGBA1504);

Shape1501->setGeometry(LineSet1502);

HAnimSegment1497->addChildren(Shape1501);

CHAnimSite* HAnimSite1505 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1505->setName("r_middle_distal_tip");
HAnimSite1505->setDEF("hanim_r_middle_distal_tip");
HAnimSite1505->setTranslation(new float[3]{-0.1969,0.6758,-0.0427});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1506 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1506->setDescription("HAnimSite r_middle_distal_tip");
HAnimSite1505->addChildren(TouchSensor1506);

CShape* Shape1507 = (CShape *)m_pScene.createNode("Shape");
Shape1507->setUSE("HAnimSiteShape");
HAnimSite1505->addChildren(Shape1507);

HAnimSegment1497->addChildren(HAnimSite1505);

HAnimJoint1496->addChildren(HAnimSegment1497);

HAnimJoint1487->addChildren(HAnimJoint1496);

HAnimJoint1478->addChildren(HAnimJoint1487);

HAnimJoint1469->addChildren(HAnimJoint1478);

HAnimJoint1335->addChildren(HAnimJoint1469);

CHAnimJoint* HAnimJoint1508 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1508->setName("r_ring0");
HAnimJoint1508->setDEF("hanim_r_ring0");
HAnimJoint1508->setCenter(new float[3]{-0.1956,0.8019,-0.0794});
HAnimJoint1508->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1509 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1509->setName("r_ring_metacarpal");
HAnimSegment1509->setDEF("hanim_r_ring_metacarpal");
//<HAnimJoint name='r_ring0'/> visualization sphere is placed within <HAnimSegment name='r_ring_metacarpal'/>
CTouchSensor* TouchSensor1510 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1510->setDescription("HAnimJoint r_ring0, HAnimSegment r_ring_metacarpal");
HAnimSegment1509->addChildren(TouchSensor1510);

CTransform* Transform1511 = (CTransform *)m_pScene.createNode("Transform");
Transform1511->setTranslation(new float[3]{-0.1956,0.8019,-0.0794});
CShape* Shape1512 = (CShape *)m_pScene.createNode("Shape");
Shape1512->setUSE("HAnimJointShape");
Transform1511->addChildren(Shape1512);

HAnimSegment1509->addChildren(Transform1511);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring0'/> to <HAnimJoint name='r_ring1'/>
CShape* Shape1513 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1514 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1514->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1515 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1515->setPoint(new float[6]{-0.1956,0.8019,-0.0794,-0.1956,0.7815,-0.0794});
LineSet1514->setCoord(Coordinate1515);

CColorRGBA* ColorRGBA1516 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1516->setUSE("HAnimSegmentLineColorRGBA");
LineSet1514->setColor(ColorRGBA1516);

Shape1513->setGeometry(LineSet1514);

HAnimSegment1509->addChildren(Shape1513);

HAnimJoint1508->addChildren(HAnimSegment1509);

CHAnimJoint* HAnimJoint1517 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1517->setName("r_ring1");
HAnimJoint1517->setDEF("hanim_r_ring1");
HAnimJoint1517->setCenter(new float[3]{-0.1956,0.7815,-0.0794});
HAnimJoint1517->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1518 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1518->setName("r_ring_proximal");
HAnimSegment1518->setDEF("hanim_r_ring_proximal");
//<HAnimJoint name='r_ring1'/> visualization sphere is placed within <HAnimSegment name='r_ring_proximal'/>
CTouchSensor* TouchSensor1519 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1519->setDescription("HAnimJoint r_ring1, HAnimSegment r_ring_proximal");
HAnimSegment1518->addChildren(TouchSensor1519);

CTransform* Transform1520 = (CTransform *)m_pScene.createNode("Transform");
Transform1520->setTranslation(new float[3]{-0.1956,0.7815,-0.0794});
CShape* Shape1521 = (CShape *)m_pScene.createNode("Shape");
Shape1521->setUSE("HAnimJointShape");
Transform1520->addChildren(Shape1521);

HAnimSegment1518->addChildren(Transform1520);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring1'/> to <HAnimJoint name='r_ring2'/>
CShape* Shape1522 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1523 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1523->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1524 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1524->setPoint(new float[6]{-0.1956,0.7815,-0.0794,-0.1973,0.7287,-0.0777});
LineSet1523->setCoord(Coordinate1524);

CColorRGBA* ColorRGBA1525 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1525->setUSE("HAnimSegmentLineColorRGBA");
LineSet1523->setColor(ColorRGBA1525);

Shape1522->setGeometry(LineSet1523);

HAnimSegment1518->addChildren(Shape1522);

HAnimJoint1517->addChildren(HAnimSegment1518);

CHAnimJoint* HAnimJoint1526 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1526->setName("r_ring2");
HAnimJoint1526->setDEF("hanim_r_ring2");
HAnimJoint1526->setCenter(new float[3]{-0.1973,0.7287,-0.0777});
HAnimJoint1526->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1527 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1527->setName("r_ring_middle");
HAnimSegment1527->setDEF("hanim_r_ring_middle");
//<HAnimJoint name='r_ring2'/> visualization sphere is placed within <HAnimSegment name='r_ring_middle'/>
CTouchSensor* TouchSensor1528 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1528->setDescription("HAnimJoint r_ring2, HAnimSegment r_ring_middle");
HAnimSegment1527->addChildren(TouchSensor1528);

CTransform* Transform1529 = (CTransform *)m_pScene.createNode("Transform");
Transform1529->setTranslation(new float[3]{-0.1973,0.7287,-0.0777});
CShape* Shape1530 = (CShape *)m_pScene.createNode("Shape");
Shape1530->setUSE("HAnimJointShape");
Transform1529->addChildren(Shape1530);

HAnimSegment1527->addChildren(Transform1529);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring2'/> to <HAnimJoint name='r_ring3'/>
CShape* Shape1531 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1532 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1532->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1533 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1533->setPoint(new float[6]{-0.1973,0.7287,-0.0777,-0.1983,0.7045,-0.0767});
LineSet1532->setCoord(Coordinate1533);

CColorRGBA* ColorRGBA1534 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1534->setUSE("HAnimSegmentLineColorRGBA");
LineSet1532->setColor(ColorRGBA1534);

Shape1531->setGeometry(LineSet1532);

HAnimSegment1527->addChildren(Shape1531);

HAnimJoint1526->addChildren(HAnimSegment1527);

CHAnimJoint* HAnimJoint1535 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1535->setName("r_ring3");
HAnimJoint1535->setDEF("hanim_r_ring3");
HAnimJoint1535->setCenter(new float[3]{-0.1983,0.7045,-0.0767});
HAnimJoint1535->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1536 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1536->setName("r_ring_distal");
HAnimSegment1536->setDEF("hanim_r_ring_distal");
//<HAnimJoint name='r_ring3'/> visualization sphere is placed within <HAnimSegment name='r_ring_distal'/>
CTouchSensor* TouchSensor1537 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1537->setDescription("HAnimJoint r_ring3, HAnimSegment r_ring_distal");
HAnimSegment1536->addChildren(TouchSensor1537);

CTransform* Transform1538 = (CTransform *)m_pScene.createNode("Transform");
Transform1538->setTranslation(new float[3]{-0.1983,0.7045,-0.0767});
CShape* Shape1539 = (CShape *)m_pScene.createNode("Shape");
Shape1539->setUSE("HAnimJointShape");
Transform1538->addChildren(Shape1539);

HAnimSegment1536->addChildren(Transform1538);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ring3'/> to <HAnimSite name='r_ring_distal_tip'/>
CShape* Shape1540 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1541 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1541->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1542 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1542->setPoint(new float[6]{-0.1983,0.7045,-0.0767,-0.1934,0.6778,-0.0693});
LineSet1541->setCoord(Coordinate1542);

CColorRGBA* ColorRGBA1543 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1543->setUSE("HAnimSiteLineColorRGBA");
LineSet1541->setColor(ColorRGBA1543);

Shape1540->setGeometry(LineSet1541);

HAnimSegment1536->addChildren(Shape1540);

CHAnimSite* HAnimSite1544 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1544->setName("r_ring_distal_tip");
HAnimSite1544->setDEF("hanim_r_ring_distal_tip");
HAnimSite1544->setTranslation(new float[3]{-0.1934,0.6778,-0.0693});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1545 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1545->setDescription("HAnimSite r_ring_distal_tip");
HAnimSite1544->addChildren(TouchSensor1545);

CShape* Shape1546 = (CShape *)m_pScene.createNode("Shape");
Shape1546->setUSE("HAnimSiteShape");
HAnimSite1544->addChildren(Shape1546);

HAnimSegment1536->addChildren(HAnimSite1544);

HAnimJoint1535->addChildren(HAnimSegment1536);

HAnimJoint1526->addChildren(HAnimJoint1535);

HAnimJoint1517->addChildren(HAnimJoint1526);

HAnimJoint1508->addChildren(HAnimJoint1517);

HAnimJoint1335->addChildren(HAnimJoint1508);

CHAnimJoint* HAnimJoint1547 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1547->setName("r_pinky0");
HAnimJoint1547->setDEF("hanim_r_pinky0");
HAnimJoint1547->setCenter(new float[3]{-0.1925,0.8066,-0.1036});
HAnimJoint1547->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1548 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1548->setName("r_pinky_metacarpal");
HAnimSegment1548->setDEF("hanim_r_pinky_metacarpal");
//<HAnimJoint name='r_pinky0'/> visualization sphere is placed within <HAnimSegment name='r_pinky_metacarpal'/>
CTouchSensor* TouchSensor1549 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1549->setDescription("HAnimJoint r_pinky0, HAnimSegment r_pinky_metacarpal");
HAnimSegment1548->addChildren(TouchSensor1549);

CTransform* Transform1550 = (CTransform *)m_pScene.createNode("Transform");
Transform1550->setTranslation(new float[3]{-0.1925,0.8066,-0.1036});
CShape* Shape1551 = (CShape *)m_pScene.createNode("Shape");
Shape1551->setUSE("HAnimJointShape");
Transform1550->addChildren(Shape1551);

HAnimSegment1548->addChildren(Transform1550);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky0'/> to <HAnimJoint name='r_pinky1'/>
CShape* Shape1552 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1553 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1553->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1554 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1554->setPoint(new float[6]{-0.1925,0.8066,-0.1036,-0.1925,0.7866,-0.1036});
LineSet1553->setCoord(Coordinate1554);

CColorRGBA* ColorRGBA1555 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1555->setUSE("HAnimSegmentLineColorRGBA");
LineSet1553->setColor(ColorRGBA1555);

Shape1552->setGeometry(LineSet1553);

HAnimSegment1548->addChildren(Shape1552);

HAnimJoint1547->addChildren(HAnimSegment1548);

CHAnimJoint* HAnimJoint1556 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1556->setName("r_pinky1");
HAnimJoint1556->setDEF("hanim_r_pinky1");
HAnimJoint1556->setCenter(new float[3]{-0.1925,0.7866,-0.1036});
HAnimJoint1556->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1557 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1557->setName("r_pinky_proximal");
HAnimSegment1557->setDEF("hanim_r_pinky_proximal");
//<HAnimJoint name='r_pinky1'/> visualization sphere is placed within <HAnimSegment name='r_pinky_proximal'/>
CTouchSensor* TouchSensor1558 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1558->setDescription("HAnimJoint r_pinky1, HAnimSegment r_pinky_proximal");
HAnimSegment1557->addChildren(TouchSensor1558);

CTransform* Transform1559 = (CTransform *)m_pScene.createNode("Transform");
Transform1559->setTranslation(new float[3]{-0.1925,0.7866,-0.1036});
CShape* Shape1560 = (CShape *)m_pScene.createNode("Shape");
Shape1560->setUSE("HAnimJointShape");
Transform1559->addChildren(Shape1560);

HAnimSegment1557->addChildren(Transform1559);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky1'/> to <HAnimJoint name='r_pinky2'/>
CShape* Shape1561 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1562 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1562->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1563 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1563->setPoint(new float[6]{-0.1925,0.7866,-0.1036,-0.1938,0.7452,-0.1024});
LineSet1562->setCoord(Coordinate1563);

CColorRGBA* ColorRGBA1564 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1564->setUSE("HAnimSegmentLineColorRGBA");
LineSet1562->setColor(ColorRGBA1564);

Shape1561->setGeometry(LineSet1562);

HAnimSegment1557->addChildren(Shape1561);

HAnimJoint1556->addChildren(HAnimSegment1557);

CHAnimJoint* HAnimJoint1565 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1565->setName("r_pinky2");
HAnimJoint1565->setDEF("hanim_r_pinky2");
HAnimJoint1565->setCenter(new float[3]{-0.1938,0.7452,-0.1024});
HAnimJoint1565->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1566 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1566->setName("r_pinky_middle");
HAnimSegment1566->setDEF("hanim_r_pinky_middle");
//<HAnimJoint name='r_pinky2'/> visualization sphere is placed within <HAnimSegment name='r_pinky_middle'/>
CTouchSensor* TouchSensor1567 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1567->setDescription("HAnimJoint r_pinky2, HAnimSegment r_pinky_middle");
HAnimSegment1566->addChildren(TouchSensor1567);

CTransform* Transform1568 = (CTransform *)m_pScene.createNode("Transform");
Transform1568->setTranslation(new float[3]{-0.1938,0.7452,-0.1024});
CShape* Shape1569 = (CShape *)m_pScene.createNode("Shape");
Shape1569->setUSE("HAnimJointShape");
Transform1568->addChildren(Shape1569);

HAnimSegment1566->addChildren(Transform1568);

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky2'/> to <HAnimJoint name='r_pinky3'/>
CShape* Shape1570 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1571 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1571->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1572 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1572->setPoint(new float[6]{-0.1938,0.7452,-0.1024,-0.1948,0.7277,-0.1017});
LineSet1571->setCoord(Coordinate1572);

CColorRGBA* ColorRGBA1573 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1573->setUSE("HAnimSegmentLineColorRGBA");
LineSet1571->setColor(ColorRGBA1573);

Shape1570->setGeometry(LineSet1571);

HAnimSegment1566->addChildren(Shape1570);

HAnimJoint1565->addChildren(HAnimSegment1566);

CHAnimJoint* HAnimJoint1574 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1574->setName("r_pinky3");
HAnimJoint1574->setDEF("hanim_r_pinky3");
HAnimJoint1574->setCenter(new float[3]{-0.1948,0.7277,-0.1017});
HAnimJoint1574->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment1575 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1575->setName("r_pinky_distal");
HAnimSegment1575->setDEF("hanim_r_pinky_distal");
//<HAnimJoint name='r_pinky3'/> visualization sphere is placed within <HAnimSegment name='r_pinky_distal'/>
CTouchSensor* TouchSensor1576 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1576->setDescription("HAnimJoint r_pinky3, HAnimSegment r_pinky_distal");
HAnimSegment1575->addChildren(TouchSensor1576);

CTransform* Transform1577 = (CTransform *)m_pScene.createNode("Transform");
Transform1577->setTranslation(new float[3]{-0.1948,0.7277,-0.1017});
CShape* Shape1578 = (CShape *)m_pScene.createNode("Shape");
Shape1578->setUSE("HAnimJointShape");
Transform1577->addChildren(Shape1578);

HAnimSegment1575->addChildren(Transform1577);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_pinky3'/> to <HAnimSite name='r_pinky_distal_tip'/>
CShape* Shape1579 = (CShape *)m_pScene.createNode("Shape");
CLineSet* LineSet1580 = (CLineSet *)m_pScene.createNode("LineSet");
LineSet1580->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1581 = (CCoordinate *)m_pScene.createNode("Coordinate");
Coordinate1581->setPoint(new float[6]{-0.1948,0.7277,-0.1017,-0.1938,0.7035,-0.0949});
LineSet1580->setCoord(Coordinate1581);

CColorRGBA* ColorRGBA1582 = (CColorRGBA *)m_pScene.createNode("ColorRGBA");
ColorRGBA1582->setUSE("HAnimSiteLineColorRGBA");
LineSet1580->setColor(ColorRGBA1582);

Shape1579->setGeometry(LineSet1580);

HAnimSegment1575->addChildren(Shape1579);

CHAnimSite* HAnimSite1583 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1583->setName("r_pinky_distal_tip");
HAnimSite1583->setDEF("hanim_r_pinky_distal_tip");
HAnimSite1583->setTranslation(new float[3]{-0.1938,0.7035,-0.0949});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1584 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1584->setDescription("HAnimSite r_pinky_distal_tip");
HAnimSite1583->addChildren(TouchSensor1584);

CShape* Shape1585 = (CShape *)m_pScene.createNode("Shape");
Shape1585->setUSE("HAnimSiteShape");
HAnimSite1583->addChildren(Shape1585);

HAnimSegment1575->addChildren(HAnimSite1583);

HAnimJoint1574->addChildren(HAnimSegment1575);

HAnimJoint1565->addChildren(HAnimJoint1574);

HAnimJoint1556->addChildren(HAnimJoint1565);

HAnimJoint1547->addChildren(HAnimJoint1556);

HAnimJoint1335->addChildren(HAnimJoint1547);

HAnimJoint1298->addChildren(HAnimJoint1335);

HAnimJoint1282->addChildren(HAnimJoint1298);

HAnimJoint1273->addChildren(HAnimJoint1282);

HAnimJoint1236->addChildren(HAnimJoint1273);

HAnimJoint598->addChildren(HAnimJoint1236);

HAnimJoint589->addChildren(HAnimJoint598);

HAnimJoint580->addChildren(HAnimJoint589);

HAnimJoint571->addChildren(HAnimJoint580);

HAnimJoint562->addChildren(HAnimJoint571);

HAnimJoint553->addChildren(HAnimJoint562);

HAnimJoint544->addChildren(HAnimJoint553);

HAnimJoint535->addChildren(HAnimJoint544);

HAnimJoint512->addChildren(HAnimJoint535);

HAnimJoint496->addChildren(HAnimJoint512);

HAnimJoint487->addChildren(HAnimJoint496);

HAnimJoint478->addChildren(HAnimJoint487);

HAnimJoint469->addChildren(HAnimJoint478);

HAnimJoint439->addChildren(HAnimJoint469);

HAnimJoint430->addChildren(HAnimJoint439);

HAnimJoint421->addChildren(HAnimJoint430);

HAnimJoint398->addChildren(HAnimJoint421);

HAnimJoint48->addChildren(HAnimJoint398);

HAnimHumanoid47->setSkeleton(HAnimJoint48);

CHAnimSite* HAnimSite1586 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1586->setName("l_inclined_view");
HAnimSite1586->setDEF("hanim_l_inclined_view");
HAnimSite1586->setRotation(new float[4]{-0.113,0.993,0.0347,0.671});
HAnimSite1586->setTranslation(new float[3]{1.62,1.05,2.06});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1587 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1587->setDescription("HAnimSite l_inclined_view");
HAnimSite1586->addChildren(TouchSensor1587);

CShape* Shape1588 = (CShape *)m_pScene.createNode("Shape");
Shape1588->setUSE("HAnimSiteShape");
HAnimSite1586->addChildren(Shape1588);

CViewpoint* Viewpoint1589 = (CViewpoint *)m_pScene.createNode("Viewpoint");
Viewpoint1589->setDEF("hanim_l_inclined_viewpoint");
Viewpoint1589->setDescription("left inclined");
Viewpoint1589->setPosition(new float[3]{0,0,0});
HAnimSite1586->addChildren(Viewpoint1589);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1590 = (CAnchor *)m_pScene.createNode("Anchor");
Anchor1590->setDescription("HAnimSite hanim_l_inclined_view Viewpoint");
Anchor1590->setUrl(new CString[1]{"#hanim_l_inclined_viewpoint"}, 1);
CLOD* LOD1591 = (CLOD *)m_pScene.createNode("LOD");
LOD1591->setForceTransitions(True);
LOD1591->setRange(new float[1]{0.04});
CWorldInfo* WorldInfo1592 = (CWorldInfo *)m_pScene.createNode("WorldInfo");
WorldInfo1592->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1591->addChildren(WorldInfo1592);

CShape* Shape1593 = (CShape *)m_pScene.createNode("Shape");
Shape1593->setUSE("HAnimSiteViewpointShape");
LOD1591->addChildren(Shape1593);

Anchor1590->addChildren(LOD1591);

HAnimSite1586->addChildren(Anchor1590);

HAnimHumanoid47->addViewpoints(HAnimSite1586);

CHAnimSite* HAnimSite1594 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1594->setName("r_inclined_view");
HAnimSite1594->setDEF("hanim_r_inclined_view");
HAnimSite1594->setRotation(new float[4]{-0.113,-0.993,0.0347,0.671});
HAnimSite1594->setTranslation(new float[3]{-1.62,1.05,2.06});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1595 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1595->setDescription("HAnimSite r_inclined_view");
HAnimSite1594->addChildren(TouchSensor1595);

CShape* Shape1596 = (CShape *)m_pScene.createNode("Shape");
Shape1596->setUSE("HAnimSiteShape");
HAnimSite1594->addChildren(Shape1596);

CViewpoint* Viewpoint1597 = (CViewpoint *)m_pScene.createNode("Viewpoint");
Viewpoint1597->setDEF("hanim_r_inclined_viewpoint");
Viewpoint1597->setCenterOfRotation(new float[3]{0,0.9,0});
Viewpoint1597->setDescription("right inclined");
Viewpoint1597->setPosition(new float[3]{0,0,0});
HAnimSite1594->addChildren(Viewpoint1597);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1598 = (CAnchor *)m_pScene.createNode("Anchor");
Anchor1598->setDescription("HAnimSite hanim_r_inclined_view Viewpoint");
Anchor1598->setUrl(new CString[1]{"#hanim_r_inclined_viewpoint"}, 1);
CLOD* LOD1599 = (CLOD *)m_pScene.createNode("LOD");
LOD1599->setForceTransitions(True);
LOD1599->setRange(new float[1]{0.04});
CWorldInfo* WorldInfo1600 = (CWorldInfo *)m_pScene.createNode("WorldInfo");
WorldInfo1600->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1599->addChildren(WorldInfo1600);

CShape* Shape1601 = (CShape *)m_pScene.createNode("Shape");
Shape1601->setUSE("HAnimSiteViewpointShape");
LOD1599->addChildren(Shape1601);

Anchor1598->addChildren(LOD1599);

HAnimSite1594->addChildren(Anchor1598);

HAnimHumanoid47->addViewpoints(HAnimSite1594);

CHAnimSite* HAnimSite1602 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1602->setName("front_view");
HAnimSite1602->setDEF("hanim_front_view");
HAnimSite1602->setTranslation(new float[3]{0,0.85,2.58});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1603 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1603->setDescription("HAnimSite front_view");
HAnimSite1602->addChildren(TouchSensor1603);

CShape* Shape1604 = (CShape *)m_pScene.createNode("Shape");
Shape1604->setUSE("HAnimSiteShape");
HAnimSite1602->addChildren(Shape1604);

CViewpoint* Viewpoint1605 = (CViewpoint *)m_pScene.createNode("Viewpoint");
Viewpoint1605->setDEF("hanim_front_viewpoint");
Viewpoint1605->setCenterOfRotation(new float[3]{0,0.9,0});
Viewpoint1605->setDescription("front");
Viewpoint1605->setPosition(new float[3]{0,0,0});
HAnimSite1602->addChildren(Viewpoint1605);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1606 = (CAnchor *)m_pScene.createNode("Anchor");
Anchor1606->setDescription("HAnimSite hanim_front_view Viewpoint");
Anchor1606->setUrl(new CString[1]{"#hanim_front_viewpoint"}, 1);
CLOD* LOD1607 = (CLOD *)m_pScene.createNode("LOD");
LOD1607->setForceTransitions(True);
LOD1607->setRange(new float[1]{0.04});
CWorldInfo* WorldInfo1608 = (CWorldInfo *)m_pScene.createNode("WorldInfo");
WorldInfo1608->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1607->addChildren(WorldInfo1608);

CShape* Shape1609 = (CShape *)m_pScene.createNode("Shape");
Shape1609->setUSE("HAnimSiteViewpointShape");
LOD1607->addChildren(Shape1609);

Anchor1606->addChildren(LOD1607);

HAnimSite1602->addChildren(Anchor1606);

HAnimHumanoid47->addViewpoints(HAnimSite1602);

CHAnimSite* HAnimSite1610 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1610->setName("back_view");
HAnimSite1610->setDEF("hanim_back_view");
HAnimSite1610->setRotation(new float[4]{0,1,0,3.14});
HAnimSite1610->setTranslation(new float[3]{0,0.85,-2.58});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1611 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1611->setDescription("HAnimSite back_view");
HAnimSite1610->addChildren(TouchSensor1611);

CShape* Shape1612 = (CShape *)m_pScene.createNode("Shape");
Shape1612->setUSE("HAnimSiteShape");
HAnimSite1610->addChildren(Shape1612);

CViewpoint* Viewpoint1613 = (CViewpoint *)m_pScene.createNode("Viewpoint");
Viewpoint1613->setDEF("hanim_back_viewpoint");
Viewpoint1613->setCenterOfRotation(new float[3]{0,0.9,0});
Viewpoint1613->setDescription("back");
Viewpoint1613->setPosition(new float[3]{0,0,0});
HAnimSite1610->addChildren(Viewpoint1613);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1614 = (CAnchor *)m_pScene.createNode("Anchor");
Anchor1614->setDescription("HAnimSite hanim_back_view Viewpoint");
Anchor1614->setUrl(new CString[1]{"#hanim_back_viewpoint"}, 1);
CLOD* LOD1615 = (CLOD *)m_pScene.createNode("LOD");
LOD1615->setForceTransitions(True);
LOD1615->setRange(new float[1]{0.04});
CWorldInfo* WorldInfo1616 = (CWorldInfo *)m_pScene.createNode("WorldInfo");
WorldInfo1616->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1615->addChildren(WorldInfo1616);

CShape* Shape1617 = (CShape *)m_pScene.createNode("Shape");
Shape1617->setUSE("HAnimSiteViewpointShape");
LOD1615->addChildren(Shape1617);

Anchor1614->addChildren(LOD1615);

HAnimSite1610->addChildren(Anchor1614);

HAnimHumanoid47->addViewpoints(HAnimSite1610);

CHAnimSite* HAnimSite1618 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1618->setName("l_side_view");
HAnimSite1618->setDEF("hanim_l_side_view");
HAnimSite1618->setRotation(new float[4]{0,1,0,1.5708});
HAnimSite1618->setTranslation(new float[3]{2.6,0.854,0});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1619 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1619->setDescription("HAnimSite l_side_view");
HAnimSite1618->addChildren(TouchSensor1619);

CShape* Shape1620 = (CShape *)m_pScene.createNode("Shape");
Shape1620->setUSE("HAnimSiteShape");
HAnimSite1618->addChildren(Shape1620);

CViewpoint* Viewpoint1621 = (CViewpoint *)m_pScene.createNode("Viewpoint");
Viewpoint1621->setDEF("hanim_l_side_viewpoint");
Viewpoint1621->setCenterOfRotation(new float[3]{0,0.9,0});
Viewpoint1621->setDescription("left side");
Viewpoint1621->setPosition(new float[3]{0,0,0});
HAnimSite1618->addChildren(Viewpoint1621);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1622 = (CAnchor *)m_pScene.createNode("Anchor");
Anchor1622->setDescription("HAnimSite hanim_l_side_view Viewpoint");
Anchor1622->setUrl(new CString[1]{"#hanim_l_side_viewpoint"}, 1);
CLOD* LOD1623 = (CLOD *)m_pScene.createNode("LOD");
LOD1623->setForceTransitions(True);
LOD1623->setRange(new float[1]{0.04});
CWorldInfo* WorldInfo1624 = (CWorldInfo *)m_pScene.createNode("WorldInfo");
WorldInfo1624->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1623->addChildren(WorldInfo1624);

CShape* Shape1625 = (CShape *)m_pScene.createNode("Shape");
Shape1625->setUSE("HAnimSiteViewpointShape");
LOD1623->addChildren(Shape1625);

Anchor1622->addChildren(LOD1623);

HAnimSite1618->addChildren(Anchor1622);

HAnimHumanoid47->addViewpoints(HAnimSite1618);

CHAnimSite* HAnimSite1626 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1626->setName("Top_view");
HAnimSite1626->setDEF("hanim_Top_view");
HAnimSite1626->setRotation(new float[4]{1,0,0,-1.57});
HAnimSite1626->setTranslation(new float[3]{0,3.5,0});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1627 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1627->setDescription("HAnimSite Top_view");
HAnimSite1626->addChildren(TouchSensor1627);

CShape* Shape1628 = (CShape *)m_pScene.createNode("Shape");
Shape1628->setUSE("HAnimSiteShape");
HAnimSite1626->addChildren(Shape1628);

CViewpoint* Viewpoint1629 = (CViewpoint *)m_pScene.createNode("Viewpoint");
Viewpoint1629->setDEF("hanim_Top_viewpoint");
Viewpoint1629->setCenterOfRotation(new float[3]{0,0.9,0});
Viewpoint1629->setDescription("Top");
Viewpoint1629->setPosition(new float[3]{0,0,0});
HAnimSite1626->addChildren(Viewpoint1629);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1630 = (CAnchor *)m_pScene.createNode("Anchor");
Anchor1630->setDescription("HAnimSite hanim_Top_view Viewpoint");
Anchor1630->setUrl(new CString[1]{"#hanim_Top_viewpoint"}, 1);
CLOD* LOD1631 = (CLOD *)m_pScene.createNode("LOD");
LOD1631->setForceTransitions(True);
LOD1631->setRange(new float[1]{0.04});
CWorldInfo* WorldInfo1632 = (CWorldInfo *)m_pScene.createNode("WorldInfo");
WorldInfo1632->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1631->addChildren(WorldInfo1632);

CShape* Shape1633 = (CShape *)m_pScene.createNode("Shape");
Shape1633->setUSE("HAnimSiteViewpointShape");
LOD1631->addChildren(Shape1633);

Anchor1630->addChildren(LOD1631);

HAnimSite1626->addChildren(Anchor1630);

HAnimHumanoid47->addViewpoints(HAnimSite1626);

CHAnimSite* HAnimSite1634 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1634->setName("front_close_view");
HAnimSite1634->setDEF("hanim_front_close_view");
HAnimSite1634->setTranslation(new float[3]{0,0.854,1.575});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1635 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1635->setDescription("HAnimSite front_close_view");
HAnimSite1634->addChildren(TouchSensor1635);

CShape* Shape1636 = (CShape *)m_pScene.createNode("Shape");
Shape1636->setUSE("HAnimSiteShape");
HAnimSite1634->addChildren(Shape1636);

CViewpoint* Viewpoint1637 = (CViewpoint *)m_pScene.createNode("Viewpoint");
Viewpoint1637->setDEF("hanim_front_close_viewpoint");
Viewpoint1637->setCenterOfRotation(new float[3]{0,0,1.575});
Viewpoint1637->setDescription("front close");
Viewpoint1637->setPosition(new float[3]{0,0,0});
HAnimSite1634->addChildren(Viewpoint1637);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1638 = (CAnchor *)m_pScene.createNode("Anchor");
Anchor1638->setDescription("HAnimSite hanim_front_close_view Viewpoint");
Anchor1638->setUrl(new CString[1]{"#hanim_front_close_viewpoint"}, 1);
CLOD* LOD1639 = (CLOD *)m_pScene.createNode("LOD");
LOD1639->setForceTransitions(True);
LOD1639->setRange(new float[1]{0.04});
CWorldInfo* WorldInfo1640 = (CWorldInfo *)m_pScene.createNode("WorldInfo");
WorldInfo1640->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1639->addChildren(WorldInfo1640);

CShape* Shape1641 = (CShape *)m_pScene.createNode("Shape");
Shape1641->setUSE("HAnimSiteViewpointShape");
LOD1639->addChildren(Shape1641);

Anchor1638->addChildren(LOD1639);

HAnimSite1634->addChildren(Anchor1638);

HAnimHumanoid47->addViewpoints(HAnimSite1634);

CHAnimSite* HAnimSite1642 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1642->setName("side_close_view");
HAnimSite1642->setDEF("hanim_side_close_view");
HAnimSite1642->setRotation(new float[4]{0,1,0,1.5708});
HAnimSite1642->setTranslation(new float[3]{1.56,0.854,0});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1643 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1643->setDescription("HAnimSite side_close_view");
HAnimSite1642->addChildren(TouchSensor1643);

CShape* Shape1644 = (CShape *)m_pScene.createNode("Shape");
Shape1644->setUSE("HAnimSiteShape");
HAnimSite1642->addChildren(Shape1644);

CViewpoint* Viewpoint1645 = (CViewpoint *)m_pScene.createNode("Viewpoint");
Viewpoint1645->setDEF("hanim_side_close_viewpoint");
Viewpoint1645->setCenterOfRotation(new float[3]{1.6,0,0});
Viewpoint1645->setDescription("side close");
Viewpoint1645->setPosition(new float[3]{0,0,0});
HAnimSite1642->addChildren(Viewpoint1645);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1646 = (CAnchor *)m_pScene.createNode("Anchor");
Anchor1646->setDescription("HAnimSite hanim_side_close_view Viewpoint");
Anchor1646->setUrl(new CString[1]{"#hanim_side_close_viewpoint"}, 1);
CLOD* LOD1647 = (CLOD *)m_pScene.createNode("LOD");
LOD1647->setForceTransitions(True);
LOD1647->setRange(new float[1]{0.04});
CWorldInfo* WorldInfo1648 = (CWorldInfo *)m_pScene.createNode("WorldInfo");
WorldInfo1648->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1647->addChildren(WorldInfo1648);

CShape* Shape1649 = (CShape *)m_pScene.createNode("Shape");
Shape1649->setUSE("HAnimSiteViewpointShape");
LOD1647->addChildren(Shape1649);

Anchor1646->addChildren(LOD1647);

HAnimSite1642->addChildren(Anchor1646);

HAnimHumanoid47->addViewpoints(HAnimSite1642);

CHAnimSite* HAnimSite1650 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1650->setName("head_front_close_view");
HAnimSite1650->setDEF("hanim_head_front_close_view");
HAnimSite1650->setTranslation(new float[3]{0,1.5,1});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1651 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1651->setDescription("HAnimSite head_front_close_view");
HAnimSite1650->addChildren(TouchSensor1651);

CShape* Shape1652 = (CShape *)m_pScene.createNode("Shape");
Shape1652->setUSE("HAnimSiteShape");
HAnimSite1650->addChildren(Shape1652);

CViewpoint* Viewpoint1653 = (CViewpoint *)m_pScene.createNode("Viewpoint");
Viewpoint1653->setDEF("hanim_head_front_close_viewpoint");
Viewpoint1653->setCenterOfRotation(new float[3]{0,0,1});
Viewpoint1653->setDescription("head front close");
Viewpoint1653->setPosition(new float[3]{0,0,0});
HAnimSite1650->addChildren(Viewpoint1653);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1654 = (CAnchor *)m_pScene.createNode("Anchor");
Anchor1654->setDescription("HAnimSite hanim_head_front_close_view Viewpoint");
Anchor1654->setUrl(new CString[1]{"#hanim_head_front_close_viewpoint"}, 1);
CLOD* LOD1655 = (CLOD *)m_pScene.createNode("LOD");
LOD1655->setForceTransitions(True);
LOD1655->setRange(new float[1]{0.04});
CWorldInfo* WorldInfo1656 = (CWorldInfo *)m_pScene.createNode("WorldInfo");
WorldInfo1656->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1655->addChildren(WorldInfo1656);

CShape* Shape1657 = (CShape *)m_pScene.createNode("Shape");
Shape1657->setUSE("HAnimSiteViewpointShape");
LOD1655->addChildren(Shape1657);

Anchor1654->addChildren(LOD1655);

HAnimSite1650->addChildren(Anchor1654);

HAnimHumanoid47->addViewpoints(HAnimSite1650);

CHAnimSite* HAnimSite1658 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1658->setName("chest_front_close_view");
HAnimSite1658->setDEF("hanim_chest_front_close_view");
HAnimSite1658->setTranslation(new float[3]{0,1.2,1});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1659 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1659->setDescription("HAnimSite chest_front_close_view");
HAnimSite1658->addChildren(TouchSensor1659);

CShape* Shape1660 = (CShape *)m_pScene.createNode("Shape");
Shape1660->setUSE("HAnimSiteShape");
HAnimSite1658->addChildren(Shape1660);

CViewpoint* Viewpoint1661 = (CViewpoint *)m_pScene.createNode("Viewpoint");
Viewpoint1661->setDEF("hanim_chest_front_close_viewpoint");
Viewpoint1661->setCenterOfRotation(new float[3]{0,0,1});
Viewpoint1661->setDescription("chest front close");
Viewpoint1661->setPosition(new float[3]{0,0,0});
HAnimSite1658->addChildren(Viewpoint1661);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1662 = (CAnchor *)m_pScene.createNode("Anchor");
Anchor1662->setDescription("HAnimSite hanim_chest_front_close_view Viewpoint");
Anchor1662->setUrl(new CString[1]{"#hanim_chest_front_close_viewpoint"}, 1);
CLOD* LOD1663 = (CLOD *)m_pScene.createNode("LOD");
LOD1663->setForceTransitions(True);
LOD1663->setRange(new float[1]{0.04});
CWorldInfo* WorldInfo1664 = (CWorldInfo *)m_pScene.createNode("WorldInfo");
WorldInfo1664->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1663->addChildren(WorldInfo1664);

CShape* Shape1665 = (CShape *)m_pScene.createNode("Shape");
Shape1665->setUSE("HAnimSiteViewpointShape");
LOD1663->addChildren(Shape1665);

Anchor1662->addChildren(LOD1663);

HAnimSite1658->addChildren(Anchor1662);

HAnimHumanoid47->addViewpoints(HAnimSite1658);

CHAnimSite* HAnimSite1666 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1666->setName("pelvis_front_close_view");
HAnimSite1666->setDEF("hanim_pelvis_front_close_view");
HAnimSite1666->setTranslation(new float[3]{0,0.8,1});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1667 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1667->setDescription("HAnimSite pelvis_front_close_view");
HAnimSite1666->addChildren(TouchSensor1667);

CShape* Shape1668 = (CShape *)m_pScene.createNode("Shape");
Shape1668->setUSE("HAnimSiteShape");
HAnimSite1666->addChildren(Shape1668);

CViewpoint* Viewpoint1669 = (CViewpoint *)m_pScene.createNode("Viewpoint");
Viewpoint1669->setDEF("hanim_pelvis_front_close_viewpoint");
Viewpoint1669->setCenterOfRotation(new float[3]{0,0,1});
Viewpoint1669->setDescription("pelvis front close");
Viewpoint1669->setPosition(new float[3]{0,0,0});
HAnimSite1666->addChildren(Viewpoint1669);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1670 = (CAnchor *)m_pScene.createNode("Anchor");
Anchor1670->setDescription("HAnimSite hanim_pelvis_front_close_view Viewpoint");
Anchor1670->setUrl(new CString[1]{"#hanim_pelvis_front_close_viewpoint"}, 1);
CLOD* LOD1671 = (CLOD *)m_pScene.createNode("LOD");
LOD1671->setForceTransitions(True);
LOD1671->setRange(new float[1]{0.04});
CWorldInfo* WorldInfo1672 = (CWorldInfo *)m_pScene.createNode("WorldInfo");
WorldInfo1672->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1671->addChildren(WorldInfo1672);

CShape* Shape1673 = (CShape *)m_pScene.createNode("Shape");
Shape1673->setUSE("HAnimSiteViewpointShape");
LOD1671->addChildren(Shape1673);

Anchor1670->addChildren(LOD1671);

HAnimSite1666->addChildren(Anchor1670);

HAnimHumanoid47->addViewpoints(HAnimSite1666);

CHAnimSite* HAnimSite1674 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1674->setName("knees_front_close_view");
HAnimSite1674->setDEF("hanim_knees_front_close_view");
HAnimSite1674->setTranslation(new float[3]{0,0.4,1});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1675 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1675->setDescription("HAnimSite knees_front_close_view");
HAnimSite1674->addChildren(TouchSensor1675);

CShape* Shape1676 = (CShape *)m_pScene.createNode("Shape");
Shape1676->setUSE("HAnimSiteShape");
HAnimSite1674->addChildren(Shape1676);

CViewpoint* Viewpoint1677 = (CViewpoint *)m_pScene.createNode("Viewpoint");
Viewpoint1677->setDEF("hanim_knees_front_close_viewpoint");
Viewpoint1677->setCenterOfRotation(new float[3]{0,0.4,0});
Viewpoint1677->setDescription("knees front close");
Viewpoint1677->setPosition(new float[3]{0,0,0});
HAnimSite1674->addChildren(Viewpoint1677);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1678 = (CAnchor *)m_pScene.createNode("Anchor");
Anchor1678->setDescription("HAnimSite hanim_knees_front_close_view Viewpoint");
Anchor1678->setUrl(new CString[1]{"#hanim_knees_front_close_viewpoint"}, 1);
CLOD* LOD1679 = (CLOD *)m_pScene.createNode("LOD");
LOD1679->setForceTransitions(True);
LOD1679->setRange(new float[1]{0.04});
CWorldInfo* WorldInfo1680 = (CWorldInfo *)m_pScene.createNode("WorldInfo");
WorldInfo1680->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1679->addChildren(WorldInfo1680);

CShape* Shape1681 = (CShape *)m_pScene.createNode("Shape");
Shape1681->setUSE("HAnimSiteViewpointShape");
LOD1679->addChildren(Shape1681);

Anchor1678->addChildren(LOD1679);

HAnimSite1674->addChildren(Anchor1678);

HAnimHumanoid47->addViewpoints(HAnimSite1674);

CHAnimSite* HAnimSite1682 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1682->setName("feet_front_close_view");
HAnimSite1682->setDEF("hanim_feet_front_close_view");
HAnimSite1682->setTranslation(new float[3]{0,0,1});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1683 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1683->setDescription("HAnimSite feet_front_close_view");
HAnimSite1682->addChildren(TouchSensor1683);

CShape* Shape1684 = (CShape *)m_pScene.createNode("Shape");
Shape1684->setUSE("HAnimSiteShape");
HAnimSite1682->addChildren(Shape1684);

CViewpoint* Viewpoint1685 = (CViewpoint *)m_pScene.createNode("Viewpoint");
Viewpoint1685->setDEF("hanim_feet_front_close_viewpoint");
Viewpoint1685->setDescription("feet front close");
Viewpoint1685->setPosition(new float[3]{0,0,0});
HAnimSite1682->addChildren(Viewpoint1685);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1686 = (CAnchor *)m_pScene.createNode("Anchor");
Anchor1686->setDescription("HAnimSite hanim_feet_front_close_view Viewpoint");
Anchor1686->setUrl(new CString[1]{"#hanim_feet_front_close_viewpoint"}, 1);
CLOD* LOD1687 = (CLOD *)m_pScene.createNode("LOD");
LOD1687->setForceTransitions(True);
LOD1687->setRange(new float[1]{0.04});
CWorldInfo* WorldInfo1688 = (CWorldInfo *)m_pScene.createNode("WorldInfo");
WorldInfo1688->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1687->addChildren(WorldInfo1688);

CShape* Shape1689 = (CShape *)m_pScene.createNode("Shape");
Shape1689->setUSE("HAnimSiteViewpointShape");
LOD1687->addChildren(Shape1689);

Anchor1686->addChildren(LOD1687);

HAnimSite1682->addChildren(Anchor1686);

HAnimHumanoid47->addViewpoints(HAnimSite1682);

CHAnimSite* HAnimSite1690 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1690->setName("eye_level_view");
HAnimSite1690->setDEF("hanim_eye_level_view");
HAnimSite1690->setTranslation(new float[3]{0,1.6332,0.0502});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1691 = (CTouchSensor *)m_pScene.createNode("TouchSensor");
TouchSensor1691->setDescription("HAnimSite eye_level_view");
HAnimSite1690->addChildren(TouchSensor1691);

CShape* Shape1692 = (CShape *)m_pScene.createNode("Shape");
Shape1692->setUSE("HAnimSiteShape");
HAnimSite1690->addChildren(Shape1692);

CViewpoint* Viewpoint1693 = (CViewpoint *)m_pScene.createNode("Viewpoint");
Viewpoint1693->setDEF("hanim_eye_level_viewpoint");
Viewpoint1693->setDescription("eye level looking forward");
Viewpoint1693->setOrientation(new float[4]{0,1,0,3.141593});
Viewpoint1693->setPosition(new float[3]{0,0,0});
HAnimSite1690->addChildren(Viewpoint1693);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1694 = (CAnchor *)m_pScene.createNode("Anchor");
Anchor1694->setDescription("HAnimSite hanim_eye_level_view Viewpoint");
Anchor1694->setUrl(new CString[1]{"#hanim_eye_level_viewpoint"}, 1);
CLOD* LOD1695 = (CLOD *)m_pScene.createNode("LOD");
LOD1695->setForceTransitions(True);
LOD1695->setRange(new float[1]{0.04});
CWorldInfo* WorldInfo1696 = (CWorldInfo *)m_pScene.createNode("WorldInfo");
WorldInfo1696->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1695->addChildren(WorldInfo1696);

CShape* Shape1697 = (CShape *)m_pScene.createNode("Shape");
Shape1697->setUSE("HAnimSiteViewpointShape");
LOD1695->addChildren(Shape1697);

Anchor1694->addChildren(LOD1695);

HAnimSite1690->addChildren(Anchor1694);

HAnimHumanoid47->addViewpoints(HAnimSite1690);

CHAnimSite* HAnimSite1698 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1698->setUSE("hanim_l_eyeball_site_view");
HAnimHumanoid47->setSites(HAnimSite1698);

CHAnimSite* HAnimSite1699 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1699->setUSE("hanim_r_eyeball_site_view");
HAnimHumanoid47->setSites(HAnimSite1699);

CHAnimSite* HAnimSite1700 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1700->setUSE("hanim_l_hand_front_view");
HAnimHumanoid47->setSites(HAnimSite1700);

CHAnimSite* HAnimSite1701 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1701->setUSE("hanim_r_hand_front_view");
HAnimHumanoid47->setSites(HAnimSite1701);

CHAnimJoint* HAnimJoint1702 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1702->setUSE("hanim_humanoid_root");
HAnimHumanoid47->addJoints(HAnimJoint1702);

CHAnimJoint* HAnimJoint1703 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1703->setUSE("hanim_sacroiliac");
HAnimHumanoid47->addJoints(HAnimJoint1703);

CHAnimJoint* HAnimJoint1704 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1704->setUSE("hanim_vl5");
HAnimHumanoid47->addJoints(HAnimJoint1704);

CHAnimJoint* HAnimJoint1705 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1705->setUSE("hanim_vl4");
HAnimHumanoid47->addJoints(HAnimJoint1705);

CHAnimJoint* HAnimJoint1706 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1706->setUSE("hanim_vl3");
HAnimHumanoid47->addJoints(HAnimJoint1706);

CHAnimJoint* HAnimJoint1707 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1707->setUSE("hanim_vl2");
HAnimHumanoid47->addJoints(HAnimJoint1707);

CHAnimJoint* HAnimJoint1708 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1708->setUSE("hanim_vl1");
HAnimHumanoid47->addJoints(HAnimJoint1708);

CHAnimJoint* HAnimJoint1709 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1709->setUSE("hanim_vt12");
HAnimHumanoid47->addJoints(HAnimJoint1709);

CHAnimJoint* HAnimJoint1710 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1710->setUSE("hanim_vt11");
HAnimHumanoid47->addJoints(HAnimJoint1710);

CHAnimJoint* HAnimJoint1711 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1711->setUSE("hanim_vt10");
HAnimHumanoid47->addJoints(HAnimJoint1711);

CHAnimJoint* HAnimJoint1712 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1712->setUSE("hanim_vt9");
HAnimHumanoid47->addJoints(HAnimJoint1712);

CHAnimJoint* HAnimJoint1713 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1713->setUSE("hanim_vt8");
HAnimHumanoid47->addJoints(HAnimJoint1713);

CHAnimJoint* HAnimJoint1714 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1714->setUSE("hanim_vt7");
HAnimHumanoid47->addJoints(HAnimJoint1714);

CHAnimJoint* HAnimJoint1715 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1715->setUSE("hanim_vt6");
HAnimHumanoid47->addJoints(HAnimJoint1715);

CHAnimJoint* HAnimJoint1716 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1716->setUSE("hanim_vt5");
HAnimHumanoid47->addJoints(HAnimJoint1716);

CHAnimJoint* HAnimJoint1717 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1717->setUSE("hanim_vt4");
HAnimHumanoid47->addJoints(HAnimJoint1717);

CHAnimJoint* HAnimJoint1718 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1718->setUSE("hanim_vt3");
HAnimHumanoid47->addJoints(HAnimJoint1718);

CHAnimJoint* HAnimJoint1719 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1719->setUSE("hanim_vt2");
HAnimHumanoid47->addJoints(HAnimJoint1719);

CHAnimJoint* HAnimJoint1720 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1720->setUSE("hanim_vt1");
HAnimHumanoid47->addJoints(HAnimJoint1720);

CHAnimJoint* HAnimJoint1721 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1721->setUSE("hanim_vc7");
HAnimHumanoid47->addJoints(HAnimJoint1721);

CHAnimJoint* HAnimJoint1722 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1722->setUSE("hanim_vc6");
HAnimHumanoid47->addJoints(HAnimJoint1722);

CHAnimJoint* HAnimJoint1723 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1723->setUSE("hanim_vc5");
HAnimHumanoid47->addJoints(HAnimJoint1723);

CHAnimJoint* HAnimJoint1724 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1724->setUSE("hanim_vc4");
HAnimHumanoid47->addJoints(HAnimJoint1724);

CHAnimJoint* HAnimJoint1725 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1725->setUSE("hanim_vc3");
HAnimHumanoid47->addJoints(HAnimJoint1725);

CHAnimJoint* HAnimJoint1726 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1726->setUSE("hanim_vc2");
HAnimHumanoid47->addJoints(HAnimJoint1726);

CHAnimJoint* HAnimJoint1727 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1727->setUSE("hanim_vc1");
HAnimHumanoid47->addJoints(HAnimJoint1727);

CHAnimJoint* HAnimJoint1728 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1728->setUSE("hanim_skullbase");
HAnimHumanoid47->addJoints(HAnimJoint1728);

CHAnimJoint* HAnimJoint1729 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1729->setUSE("hanim_temporomandibular");
HAnimHumanoid47->addJoints(HAnimJoint1729);

CHAnimJoint* HAnimJoint1730 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1730->setUSE("hanim_l_acromioclavicular");
HAnimHumanoid47->addJoints(HAnimJoint1730);

CHAnimJoint* HAnimJoint1731 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1731->setUSE("hanim_r_acromioclavicular");
HAnimHumanoid47->addJoints(HAnimJoint1731);

CHAnimJoint* HAnimJoint1732 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1732->setUSE("hanim_l_ankle");
HAnimHumanoid47->addJoints(HAnimJoint1732);

CHAnimJoint* HAnimJoint1733 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1733->setUSE("hanim_r_ankle");
HAnimHumanoid47->addJoints(HAnimJoint1733);

CHAnimJoint* HAnimJoint1734 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1734->setUSE("hanim_l_elbow");
HAnimHumanoid47->addJoints(HAnimJoint1734);

CHAnimJoint* HAnimJoint1735 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1735->setUSE("hanim_r_elbow");
HAnimHumanoid47->addJoints(HAnimJoint1735);

CHAnimJoint* HAnimJoint1736 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1736->setUSE("hanim_l_eyeball_joint");
HAnimHumanoid47->addJoints(HAnimJoint1736);

CHAnimJoint* HAnimJoint1737 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1737->setUSE("hanim_r_eyeball_joint");
HAnimHumanoid47->addJoints(HAnimJoint1737);

CHAnimJoint* HAnimJoint1738 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1738->setUSE("hanim_l_eyebrow_joint");
HAnimHumanoid47->addJoints(HAnimJoint1738);

CHAnimJoint* HAnimJoint1739 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1739->setUSE("hanim_r_eyebrow_joint");
HAnimHumanoid47->addJoints(HAnimJoint1739);

CHAnimJoint* HAnimJoint1740 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1740->setUSE("hanim_l_eyelid_joint");
HAnimHumanoid47->addJoints(HAnimJoint1740);

CHAnimJoint* HAnimJoint1741 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1741->setUSE("hanim_r_eyelid_joint");
HAnimHumanoid47->addJoints(HAnimJoint1741);

CHAnimJoint* HAnimJoint1742 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1742->setUSE("hanim_l_hip");
HAnimHumanoid47->addJoints(HAnimJoint1742);

CHAnimJoint* HAnimJoint1743 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1743->setUSE("hanim_r_hip");
HAnimHumanoid47->addJoints(HAnimJoint1743);

CHAnimJoint* HAnimJoint1744 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1744->setUSE("hanim_l_index0");
HAnimHumanoid47->addJoints(HAnimJoint1744);

CHAnimJoint* HAnimJoint1745 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1745->setUSE("hanim_r_index0");
HAnimHumanoid47->addJoints(HAnimJoint1745);

CHAnimJoint* HAnimJoint1746 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1746->setUSE("hanim_l_index1");
HAnimHumanoid47->addJoints(HAnimJoint1746);

CHAnimJoint* HAnimJoint1747 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1747->setUSE("hanim_r_index1");
HAnimHumanoid47->addJoints(HAnimJoint1747);

CHAnimJoint* HAnimJoint1748 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1748->setUSE("hanim_l_index2");
HAnimHumanoid47->addJoints(HAnimJoint1748);

CHAnimJoint* HAnimJoint1749 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1749->setUSE("hanim_r_index2");
HAnimHumanoid47->addJoints(HAnimJoint1749);

CHAnimJoint* HAnimJoint1750 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1750->setUSE("hanim_l_index3");
HAnimHumanoid47->addJoints(HAnimJoint1750);

CHAnimJoint* HAnimJoint1751 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1751->setUSE("hanim_r_index3");
HAnimHumanoid47->addJoints(HAnimJoint1751);

CHAnimJoint* HAnimJoint1752 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1752->setUSE("hanim_l_knee");
HAnimHumanoid47->addJoints(HAnimJoint1752);

CHAnimJoint* HAnimJoint1753 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1753->setUSE("hanim_r_knee");
HAnimHumanoid47->addJoints(HAnimJoint1753);

CHAnimJoint* HAnimJoint1754 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1754->setUSE("hanim_l_metatarsal");
HAnimHumanoid47->addJoints(HAnimJoint1754);

CHAnimJoint* HAnimJoint1755 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1755->setUSE("hanim_r_metatarsal");
HAnimHumanoid47->addJoints(HAnimJoint1755);

CHAnimJoint* HAnimJoint1756 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1756->setUSE("hanim_l_middle0");
HAnimHumanoid47->addJoints(HAnimJoint1756);

CHAnimJoint* HAnimJoint1757 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1757->setUSE("hanim_r_middle0");
HAnimHumanoid47->addJoints(HAnimJoint1757);

CHAnimJoint* HAnimJoint1758 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1758->setUSE("hanim_l_middle1");
HAnimHumanoid47->addJoints(HAnimJoint1758);

CHAnimJoint* HAnimJoint1759 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1759->setUSE("hanim_r_middle1");
HAnimHumanoid47->addJoints(HAnimJoint1759);

CHAnimJoint* HAnimJoint1760 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1760->setUSE("hanim_l_middle2");
HAnimHumanoid47->addJoints(HAnimJoint1760);

CHAnimJoint* HAnimJoint1761 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1761->setUSE("hanim_r_middle2");
HAnimHumanoid47->addJoints(HAnimJoint1761);

CHAnimJoint* HAnimJoint1762 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1762->setUSE("hanim_l_middle3");
HAnimHumanoid47->addJoints(HAnimJoint1762);

CHAnimJoint* HAnimJoint1763 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1763->setUSE("hanim_r_middle3");
HAnimHumanoid47->addJoints(HAnimJoint1763);

CHAnimJoint* HAnimJoint1764 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1764->setUSE("hanim_l_midtarsal");
HAnimHumanoid47->addJoints(HAnimJoint1764);

CHAnimJoint* HAnimJoint1765 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1765->setUSE("hanim_r_midtarsal");
HAnimHumanoid47->addJoints(HAnimJoint1765);

CHAnimJoint* HAnimJoint1766 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1766->setUSE("hanim_l_pinky0");
HAnimHumanoid47->addJoints(HAnimJoint1766);

CHAnimJoint* HAnimJoint1767 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1767->setUSE("hanim_r_pinky0");
HAnimHumanoid47->addJoints(HAnimJoint1767);

CHAnimJoint* HAnimJoint1768 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1768->setUSE("hanim_l_pinky1");
HAnimHumanoid47->addJoints(HAnimJoint1768);

CHAnimJoint* HAnimJoint1769 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1769->setUSE("hanim_r_pinky1");
HAnimHumanoid47->addJoints(HAnimJoint1769);

CHAnimJoint* HAnimJoint1770 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1770->setUSE("hanim_l_pinky2");
HAnimHumanoid47->addJoints(HAnimJoint1770);

CHAnimJoint* HAnimJoint1771 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1771->setUSE("hanim_r_pinky2");
HAnimHumanoid47->addJoints(HAnimJoint1771);

CHAnimJoint* HAnimJoint1772 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1772->setUSE("hanim_l_pinky3");
HAnimHumanoid47->addJoints(HAnimJoint1772);

CHAnimJoint* HAnimJoint1773 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1773->setUSE("hanim_r_pinky3");
HAnimHumanoid47->addJoints(HAnimJoint1773);

CHAnimJoint* HAnimJoint1774 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1774->setUSE("hanim_l_ring0");
HAnimHumanoid47->addJoints(HAnimJoint1774);

CHAnimJoint* HAnimJoint1775 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1775->setUSE("hanim_r_ring0");
HAnimHumanoid47->addJoints(HAnimJoint1775);

CHAnimJoint* HAnimJoint1776 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1776->setUSE("hanim_l_ring1");
HAnimHumanoid47->addJoints(HAnimJoint1776);

CHAnimJoint* HAnimJoint1777 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1777->setUSE("hanim_r_ring1");
HAnimHumanoid47->addJoints(HAnimJoint1777);

CHAnimJoint* HAnimJoint1778 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1778->setUSE("hanim_l_ring2");
HAnimHumanoid47->addJoints(HAnimJoint1778);

CHAnimJoint* HAnimJoint1779 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1779->setUSE("hanim_r_ring2");
HAnimHumanoid47->addJoints(HAnimJoint1779);

CHAnimJoint* HAnimJoint1780 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1780->setUSE("hanim_l_ring3");
HAnimHumanoid47->addJoints(HAnimJoint1780);

CHAnimJoint* HAnimJoint1781 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1781->setUSE("hanim_r_ring3");
HAnimHumanoid47->addJoints(HAnimJoint1781);

CHAnimJoint* HAnimJoint1782 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1782->setUSE("hanim_l_shoulder");
HAnimHumanoid47->addJoints(HAnimJoint1782);

CHAnimJoint* HAnimJoint1783 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1783->setUSE("hanim_r_shoulder");
HAnimHumanoid47->addJoints(HAnimJoint1783);

CHAnimJoint* HAnimJoint1784 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1784->setUSE("hanim_l_sternoclavicular");
HAnimHumanoid47->addJoints(HAnimJoint1784);

CHAnimJoint* HAnimJoint1785 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1785->setUSE("hanim_r_sternoclavicular");
HAnimHumanoid47->addJoints(HAnimJoint1785);

CHAnimJoint* HAnimJoint1786 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1786->setUSE("hanim_l_subtalar");
HAnimHumanoid47->addJoints(HAnimJoint1786);

CHAnimJoint* HAnimJoint1787 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1787->setUSE("hanim_r_subtalar");
HAnimHumanoid47->addJoints(HAnimJoint1787);

CHAnimJoint* HAnimJoint1788 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1788->setUSE("hanim_l_thumb1");
HAnimHumanoid47->addJoints(HAnimJoint1788);

CHAnimJoint* HAnimJoint1789 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1789->setUSE("hanim_r_thumb1");
HAnimHumanoid47->addJoints(HAnimJoint1789);

CHAnimJoint* HAnimJoint1790 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1790->setUSE("hanim_l_thumb2");
HAnimHumanoid47->addJoints(HAnimJoint1790);

CHAnimJoint* HAnimJoint1791 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1791->setUSE("hanim_r_thumb2");
HAnimHumanoid47->addJoints(HAnimJoint1791);

CHAnimJoint* HAnimJoint1792 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1792->setUSE("hanim_l_thumb3");
HAnimHumanoid47->addJoints(HAnimJoint1792);

CHAnimJoint* HAnimJoint1793 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1793->setUSE("hanim_r_thumb3");
HAnimHumanoid47->addJoints(HAnimJoint1793);

CHAnimJoint* HAnimJoint1794 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1794->setUSE("hanim_l_wrist");
HAnimHumanoid47->addJoints(HAnimJoint1794);

CHAnimJoint* HAnimJoint1795 = (CHAnimJoint *)m_pScene.createNode("HAnimJoint");
HAnimJoint1795->setUSE("hanim_r_wrist");
HAnimHumanoid47->addJoints(HAnimJoint1795);

CHAnimSegment* HAnimSegment1796 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1796->setUSE("hanim_pelvis");
HAnimHumanoid47->setSegments(HAnimSegment1796);

CHAnimSegment* HAnimSegment1797 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1797->setUSE("hanim_skull");
HAnimHumanoid47->setSegments(HAnimSegment1797);

CHAnimSegment* HAnimSegment1798 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1798->setUSE("hanim_jaw");
HAnimHumanoid47->setSegments(HAnimSegment1798);

CHAnimSegment* HAnimSegment1799 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1799->setUSE("hanim_c1");
HAnimHumanoid47->setSegments(HAnimSegment1799);

CHAnimSegment* HAnimSegment1800 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1800->setUSE("hanim_c2");
HAnimHumanoid47->setSegments(HAnimSegment1800);

CHAnimSegment* HAnimSegment1801 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1801->setUSE("hanim_c3");
HAnimHumanoid47->setSegments(HAnimSegment1801);

CHAnimSegment* HAnimSegment1802 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1802->setUSE("hanim_c4");
HAnimHumanoid47->setSegments(HAnimSegment1802);

CHAnimSegment* HAnimSegment1803 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1803->setUSE("hanim_c5");
HAnimHumanoid47->setSegments(HAnimSegment1803);

CHAnimSegment* HAnimSegment1804 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1804->setUSE("hanim_c6");
HAnimHumanoid47->setSegments(HAnimSegment1804);

CHAnimSegment* HAnimSegment1805 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1805->setUSE("hanim_c7");
HAnimHumanoid47->setSegments(HAnimSegment1805);

CHAnimSegment* HAnimSegment1806 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1806->setUSE("hanim_t1");
HAnimHumanoid47->setSegments(HAnimSegment1806);

CHAnimSegment* HAnimSegment1807 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1807->setUSE("hanim_t2");
HAnimHumanoid47->setSegments(HAnimSegment1807);

CHAnimSegment* HAnimSegment1808 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1808->setUSE("hanim_t3");
HAnimHumanoid47->setSegments(HAnimSegment1808);

CHAnimSegment* HAnimSegment1809 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1809->setUSE("hanim_t4");
HAnimHumanoid47->setSegments(HAnimSegment1809);

CHAnimSegment* HAnimSegment1810 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1810->setUSE("hanim_t5");
HAnimHumanoid47->setSegments(HAnimSegment1810);

CHAnimSegment* HAnimSegment1811 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1811->setUSE("hanim_t6");
HAnimHumanoid47->setSegments(HAnimSegment1811);

CHAnimSegment* HAnimSegment1812 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1812->setUSE("hanim_t7");
HAnimHumanoid47->setSegments(HAnimSegment1812);

CHAnimSegment* HAnimSegment1813 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1813->setUSE("hanim_t8");
HAnimHumanoid47->setSegments(HAnimSegment1813);

CHAnimSegment* HAnimSegment1814 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1814->setUSE("hanim_t9");
HAnimHumanoid47->setSegments(HAnimSegment1814);

CHAnimSegment* HAnimSegment1815 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1815->setUSE("hanim_t10");
HAnimHumanoid47->setSegments(HAnimSegment1815);

CHAnimSegment* HAnimSegment1816 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1816->setUSE("hanim_t11");
HAnimHumanoid47->setSegments(HAnimSegment1816);

CHAnimSegment* HAnimSegment1817 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1817->setUSE("hanim_t12");
HAnimHumanoid47->setSegments(HAnimSegment1817);

CHAnimSegment* HAnimSegment1818 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1818->setUSE("hanim_l1");
HAnimHumanoid47->setSegments(HAnimSegment1818);

CHAnimSegment* HAnimSegment1819 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1819->setUSE("hanim_l2");
HAnimHumanoid47->setSegments(HAnimSegment1819);

CHAnimSegment* HAnimSegment1820 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1820->setUSE("hanim_l3");
HAnimHumanoid47->setSegments(HAnimSegment1820);

CHAnimSegment* HAnimSegment1821 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1821->setUSE("hanim_l4");
HAnimHumanoid47->setSegments(HAnimSegment1821);

CHAnimSegment* HAnimSegment1822 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1822->setUSE("hanim_l5");
HAnimHumanoid47->setSegments(HAnimSegment1822);

CHAnimSegment* HAnimSegment1823 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1823->setUSE("hanim_sacrum");
HAnimHumanoid47->setSegments(HAnimSegment1823);

CHAnimSegment* HAnimSegment1824 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1824->setUSE("hanim_l_calf");
HAnimHumanoid47->setSegments(HAnimSegment1824);

CHAnimSegment* HAnimSegment1825 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1825->setUSE("hanim_r_calf");
HAnimHumanoid47->setSegments(HAnimSegment1825);

CHAnimSegment* HAnimSegment1826 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1826->setUSE("hanim_l_clavicle");
HAnimHumanoid47->setSegments(HAnimSegment1826);

CHAnimSegment* HAnimSegment1827 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1827->setUSE("hanim_r_clavicle");
HAnimHumanoid47->setSegments(HAnimSegment1827);

CHAnimSegment* HAnimSegment1828 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1828->setUSE("hanim_l_eyeball");
HAnimHumanoid47->setSegments(HAnimSegment1828);

CHAnimSegment* HAnimSegment1829 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1829->setUSE("hanim_r_eyeball");
HAnimHumanoid47->setSegments(HAnimSegment1829);

CHAnimSegment* HAnimSegment1830 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1830->setUSE("hanim_l_eyebrow");
HAnimHumanoid47->setSegments(HAnimSegment1830);

CHAnimSegment* HAnimSegment1831 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1831->setUSE("hanim_r_eyebrow");
HAnimHumanoid47->setSegments(HAnimSegment1831);

CHAnimSegment* HAnimSegment1832 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1832->setUSE("hanim_l_eyelid");
HAnimHumanoid47->setSegments(HAnimSegment1832);

CHAnimSegment* HAnimSegment1833 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1833->setUSE("hanim_r_eyelid");
HAnimHumanoid47->setSegments(HAnimSegment1833);

CHAnimSegment* HAnimSegment1834 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1834->setUSE("hanim_l_forearm");
HAnimHumanoid47->setSegments(HAnimSegment1834);

CHAnimSegment* HAnimSegment1835 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1835->setUSE("hanim_r_forearm");
HAnimHumanoid47->setSegments(HAnimSegment1835);

CHAnimSegment* HAnimSegment1836 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1836->setUSE("hanim_l_forefoot");
HAnimHumanoid47->setSegments(HAnimSegment1836);

CHAnimSegment* HAnimSegment1837 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1837->setUSE("hanim_r_forefoot");
HAnimHumanoid47->setSegments(HAnimSegment1837);

CHAnimSegment* HAnimSegment1838 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1838->setUSE("hanim_l_hand");
HAnimHumanoid47->setSegments(HAnimSegment1838);

CHAnimSegment* HAnimSegment1839 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1839->setUSE("hanim_r_hand");
HAnimHumanoid47->setSegments(HAnimSegment1839);

CHAnimSegment* HAnimSegment1840 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1840->setUSE("hanim_l_hindfoot");
HAnimHumanoid47->setSegments(HAnimSegment1840);

CHAnimSegment* HAnimSegment1841 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1841->setUSE("hanim_r_hindfoot");
HAnimHumanoid47->setSegments(HAnimSegment1841);

CHAnimSegment* HAnimSegment1842 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1842->setUSE("hanim_l_index_distal");
HAnimHumanoid47->setSegments(HAnimSegment1842);

CHAnimSegment* HAnimSegment1843 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1843->setUSE("hanim_r_index_distal");
HAnimHumanoid47->setSegments(HAnimSegment1843);

CHAnimSegment* HAnimSegment1844 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1844->setUSE("hanim_l_index_metacarpal");
HAnimHumanoid47->setSegments(HAnimSegment1844);

CHAnimSegment* HAnimSegment1845 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1845->setUSE("hanim_r_index_metacarpal");
HAnimHumanoid47->setSegments(HAnimSegment1845);

CHAnimSegment* HAnimSegment1846 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1846->setUSE("hanim_l_index_middle");
HAnimHumanoid47->setSegments(HAnimSegment1846);

CHAnimSegment* HAnimSegment1847 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1847->setUSE("hanim_r_index_middle");
HAnimHumanoid47->setSegments(HAnimSegment1847);

CHAnimSegment* HAnimSegment1848 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1848->setUSE("hanim_l_index_proximal");
HAnimHumanoid47->setSegments(HAnimSegment1848);

CHAnimSegment* HAnimSegment1849 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1849->setUSE("hanim_r_index_proximal");
HAnimHumanoid47->setSegments(HAnimSegment1849);

CHAnimSegment* HAnimSegment1850 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1850->setUSE("hanim_l_middistal");
HAnimHumanoid47->setSegments(HAnimSegment1850);

CHAnimSegment* HAnimSegment1851 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1851->setUSE("hanim_r_middistal");
HAnimHumanoid47->setSegments(HAnimSegment1851);

CHAnimSegment* HAnimSegment1852 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1852->setUSE("hanim_l_middle_distal");
HAnimHumanoid47->setSegments(HAnimSegment1852);

CHAnimSegment* HAnimSegment1853 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1853->setUSE("hanim_r_middle_distal");
HAnimHumanoid47->setSegments(HAnimSegment1853);

CHAnimSegment* HAnimSegment1854 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1854->setUSE("hanim_l_middle_metacarpal");
HAnimHumanoid47->setSegments(HAnimSegment1854);

CHAnimSegment* HAnimSegment1855 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1855->setUSE("hanim_r_middle_metacarpal");
HAnimHumanoid47->setSegments(HAnimSegment1855);

CHAnimSegment* HAnimSegment1856 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1856->setUSE("hanim_l_middle_middle");
HAnimHumanoid47->setSegments(HAnimSegment1856);

CHAnimSegment* HAnimSegment1857 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1857->setUSE("hanim_r_middle_middle");
HAnimHumanoid47->setSegments(HAnimSegment1857);

CHAnimSegment* HAnimSegment1858 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1858->setUSE("hanim_l_middle_proximal");
HAnimHumanoid47->setSegments(HAnimSegment1858);

CHAnimSegment* HAnimSegment1859 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1859->setUSE("hanim_r_middle_proximal");
HAnimHumanoid47->setSegments(HAnimSegment1859);

CHAnimSegment* HAnimSegment1860 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1860->setUSE("hanim_l_midproximal");
HAnimHumanoid47->setSegments(HAnimSegment1860);

CHAnimSegment* HAnimSegment1861 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1861->setUSE("hanim_r_midproximal");
HAnimHumanoid47->setSegments(HAnimSegment1861);

CHAnimSegment* HAnimSegment1862 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1862->setUSE("hanim_l_pinky_distal");
HAnimHumanoid47->setSegments(HAnimSegment1862);

CHAnimSegment* HAnimSegment1863 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1863->setUSE("hanim_r_pinky_distal");
HAnimHumanoid47->setSegments(HAnimSegment1863);

CHAnimSegment* HAnimSegment1864 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1864->setUSE("hanim_l_pinky_metacarpal");
HAnimHumanoid47->setSegments(HAnimSegment1864);

CHAnimSegment* HAnimSegment1865 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1865->setUSE("hanim_r_pinky_metacarpal");
HAnimHumanoid47->setSegments(HAnimSegment1865);

CHAnimSegment* HAnimSegment1866 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1866->setUSE("hanim_l_pinky_middle");
HAnimHumanoid47->setSegments(HAnimSegment1866);

CHAnimSegment* HAnimSegment1867 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1867->setUSE("hanim_r_pinky_middle");
HAnimHumanoid47->setSegments(HAnimSegment1867);

CHAnimSegment* HAnimSegment1868 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1868->setUSE("hanim_l_pinky_proximal");
HAnimHumanoid47->setSegments(HAnimSegment1868);

CHAnimSegment* HAnimSegment1869 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1869->setUSE("hanim_r_pinky_proximal");
HAnimHumanoid47->setSegments(HAnimSegment1869);

CHAnimSegment* HAnimSegment1870 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1870->setUSE("hanim_l_ring_distal");
HAnimHumanoid47->setSegments(HAnimSegment1870);

CHAnimSegment* HAnimSegment1871 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1871->setUSE("hanim_r_ring_distal");
HAnimHumanoid47->setSegments(HAnimSegment1871);

CHAnimSegment* HAnimSegment1872 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1872->setUSE("hanim_l_ring_metacarpal");
HAnimHumanoid47->setSegments(HAnimSegment1872);

CHAnimSegment* HAnimSegment1873 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1873->setUSE("hanim_r_ring_metacarpal");
HAnimHumanoid47->setSegments(HAnimSegment1873);

CHAnimSegment* HAnimSegment1874 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1874->setUSE("hanim_l_ring_middle");
HAnimHumanoid47->setSegments(HAnimSegment1874);

CHAnimSegment* HAnimSegment1875 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1875->setUSE("hanim_r_ring_middle");
HAnimHumanoid47->setSegments(HAnimSegment1875);

CHAnimSegment* HAnimSegment1876 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1876->setUSE("hanim_l_ring_proximal");
HAnimHumanoid47->setSegments(HAnimSegment1876);

CHAnimSegment* HAnimSegment1877 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1877->setUSE("hanim_r_ring_proximal");
HAnimHumanoid47->setSegments(HAnimSegment1877);

CHAnimSegment* HAnimSegment1878 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1878->setUSE("hanim_l_scapula");
HAnimHumanoid47->setSegments(HAnimSegment1878);

CHAnimSegment* HAnimSegment1879 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1879->setUSE("hanim_r_scapula");
HAnimHumanoid47->setSegments(HAnimSegment1879);

CHAnimSegment* HAnimSegment1880 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1880->setUSE("hanim_l_thigh");
HAnimHumanoid47->setSegments(HAnimSegment1880);

CHAnimSegment* HAnimSegment1881 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1881->setUSE("hanim_r_thigh");
HAnimHumanoid47->setSegments(HAnimSegment1881);

CHAnimSegment* HAnimSegment1882 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1882->setUSE("hanim_l_thumb_distal");
HAnimHumanoid47->setSegments(HAnimSegment1882);

CHAnimSegment* HAnimSegment1883 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1883->setUSE("hanim_r_thumb_distal");
HAnimHumanoid47->setSegments(HAnimSegment1883);

CHAnimSegment* HAnimSegment1884 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1884->setUSE("hanim_l_thumb_metacarpal");
HAnimHumanoid47->setSegments(HAnimSegment1884);

CHAnimSegment* HAnimSegment1885 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1885->setUSE("hanim_r_thumb_metacarpal");
HAnimHumanoid47->setSegments(HAnimSegment1885);

CHAnimSegment* HAnimSegment1886 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1886->setUSE("hanim_l_thumb_proximal");
HAnimHumanoid47->setSegments(HAnimSegment1886);

CHAnimSegment* HAnimSegment1887 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1887->setUSE("hanim_r_thumb_proximal");
HAnimHumanoid47->setSegments(HAnimSegment1887);

CHAnimSegment* HAnimSegment1888 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1888->setUSE("hanim_l_upperarm");
HAnimHumanoid47->setSegments(HAnimSegment1888);

CHAnimSegment* HAnimSegment1889 = (CHAnimSegment *)m_pScene.createNode("HAnimSegment");
HAnimSegment1889->setUSE("hanim_r_upperarm");
HAnimHumanoid47->setSegments(HAnimSegment1889);

CHAnimSite* HAnimSite1890 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1890->setUSE("hanim_crotch_pt");
HAnimHumanoid47->setSites(HAnimSite1890);

CHAnimSite* HAnimSite1891 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1891->setUSE("hanim_skull_tip");
HAnimHumanoid47->setSites(HAnimSite1891);

CHAnimSite* HAnimSite1892 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1892->setUSE("hanim_sellion_pt");
HAnimHumanoid47->setSites(HAnimSite1892);

CHAnimSite* HAnimSite1893 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1893->setUSE("hanim_supramenton_pt");
HAnimHumanoid47->setSites(HAnimSite1893);

CHAnimSite* HAnimSite1894 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1894->setUSE("hanim_nuchale_pt");
HAnimHumanoid47->setSites(HAnimSite1894);

CHAnimSite* HAnimSite1895 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1895->setUSE("hanim_suprasternale_pt");
HAnimHumanoid47->setSites(HAnimSite1895);

CHAnimSite* HAnimSite1896 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1896->setUSE("hanim_cervicale_pt");
HAnimHumanoid47->setSites(HAnimSite1896);

CHAnimSite* HAnimSite1897 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1897->setUSE("hanim_substernale_pt");
HAnimHumanoid47->setSites(HAnimSite1897);

CHAnimSite* HAnimSite1898 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1898->setUSE("hanim_rib10_midspine_pt");
HAnimHumanoid47->setSites(HAnimSite1898);

CHAnimSite* HAnimSite1899 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1899->setUSE("hanim_waist_preferred_post_pt");
HAnimHumanoid47->setSites(HAnimSite1899);

CHAnimSite* HAnimSite1900 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1900->setUSE("hanim_navel_pt");
HAnimHumanoid47->setSites(HAnimSite1900);

CHAnimSite* HAnimSite1901 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1901->setUSE("hanim_l_acromion_pt");
HAnimHumanoid47->setSites(HAnimSite1901);

CHAnimSite* HAnimSite1902 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1902->setUSE("hanim_r_acromion_pt");
HAnimHumanoid47->setSites(HAnimSite1902);

CHAnimSite* HAnimSite1903 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1903->setUSE("hanim_r_asis_pt");
HAnimHumanoid47->setSites(HAnimSite1903);

CHAnimSite* HAnimSite1904 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1904->setUSE("hanim_l_asis_pt");
HAnimHumanoid47->setSites(HAnimSite1904);

CHAnimSite* HAnimSite1905 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1905->setUSE("hanim_l_axilla_ant_pt");
HAnimHumanoid47->setSites(HAnimSite1905);

CHAnimSite* HAnimSite1906 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1906->setUSE("hanim_r_axilla_ant_pt");
HAnimHumanoid47->setSites(HAnimSite1906);

CHAnimSite* HAnimSite1907 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1907->setUSE("hanim_l_axilla_post_pt");
HAnimHumanoid47->setSites(HAnimSite1907);

CHAnimSite* HAnimSite1908 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1908->setUSE("hanim_r_axilla_post_pt");
HAnimHumanoid47->setSites(HAnimSite1908);

CHAnimSite* HAnimSite1909 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1909->setUSE("hanim_l_calcaneous_post_pt");
HAnimHumanoid47->setSites(HAnimSite1909);

CHAnimSite* HAnimSite1910 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1910->setUSE("hanim_r_calcaneous_post_pt");
HAnimHumanoid47->setSites(HAnimSite1910);

CHAnimSite* HAnimSite1911 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1911->setUSE("hanim_l_clavicale_pt");
HAnimHumanoid47->setSites(HAnimSite1911);

CHAnimSite* HAnimSite1912 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1912->setUSE("hanim_r_clavicale_pt");
HAnimHumanoid47->setSites(HAnimSite1912);

CHAnimSite* HAnimSite1913 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1913->setUSE("hanim_l_dactylion_pt");
HAnimHumanoid47->setSites(HAnimSite1913);

CHAnimSite* HAnimSite1914 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1914->setUSE("hanim_r_dactylion_pt");
HAnimHumanoid47->setSites(HAnimSite1914);

CHAnimSite* HAnimSite1915 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1915->setUSE("hanim_l_digit2_pt");
HAnimHumanoid47->setSites(HAnimSite1915);

CHAnimSite* HAnimSite1916 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1916->setUSE("hanim_r_digit2_pt");
HAnimHumanoid47->setSites(HAnimSite1916);

CHAnimSite* HAnimSite1917 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1917->setUSE("hanim_l_femoral_lateral_epicn_pt");
HAnimHumanoid47->setSites(HAnimSite1917);

CHAnimSite* HAnimSite1918 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1918->setUSE("hanim_r_femoral_lateral_epicn_pt");
HAnimHumanoid47->setSites(HAnimSite1918);

CHAnimSite* HAnimSite1919 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1919->setUSE("hanim_l_femoral_medial_epicn_pt");
HAnimHumanoid47->setSites(HAnimSite1919);

CHAnimSite* HAnimSite1920 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1920->setUSE("hanim_r_femoral_medial_epicn_pt");
HAnimHumanoid47->setSites(HAnimSite1920);

CHAnimSite* HAnimSite1921 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1921->setUSE("hanim_l_forefoot_tip");
HAnimHumanoid47->setSites(HAnimSite1921);

CHAnimSite* HAnimSite1922 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1922->setUSE("hanim_r_forefoot_tip");
HAnimHumanoid47->setSites(HAnimSite1922);

CHAnimSite* HAnimSite1923 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1923->setUSE("hanim_r_gonion_pt");
HAnimHumanoid47->setSites(HAnimSite1923);

CHAnimSite* HAnimSite1924 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1924->setUSE("hanim_l_gonion_pt");
HAnimHumanoid47->setSites(HAnimSite1924);

CHAnimSite* HAnimSite1925 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1925->setUSE("hanim_l_humeral_lateral_epicn_pt");
HAnimHumanoid47->setSites(HAnimSite1925);

CHAnimSite* HAnimSite1926 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1926->setUSE("hanim_r_humeral_lateral_epicn_pt");
HAnimHumanoid47->setSites(HAnimSite1926);

CHAnimSite* HAnimSite1927 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1927->setUSE("hanim_l_humeral_medial_epicn_pt");
HAnimHumanoid47->setSites(HAnimSite1927);

CHAnimSite* HAnimSite1928 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1928->setUSE("hanim_r_humeral_medial_epicn_pt");
HAnimHumanoid47->setSites(HAnimSite1928);

CHAnimSite* HAnimSite1929 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1929->setUSE("hanim_r_iliocristale_pt");
HAnimHumanoid47->setSites(HAnimSite1929);

CHAnimSite* HAnimSite1930 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1930->setUSE("hanim_l_iliocristale_pt");
HAnimHumanoid47->setSites(HAnimSite1930);

CHAnimSite* HAnimSite1931 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1931->setUSE("hanim_l_index_distal_tip");
HAnimHumanoid47->setSites(HAnimSite1931);

CHAnimSite* HAnimSite1932 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1932->setUSE("hanim_r_index_distal_tip");
HAnimHumanoid47->setSites(HAnimSite1932);

CHAnimSite* HAnimSite1933 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1933->setUSE("hanim_r_infraorbitale_pt");
HAnimHumanoid47->setSites(HAnimSite1933);

CHAnimSite* HAnimSite1934 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1934->setUSE("hanim_l_infraorbitale_pt");
HAnimHumanoid47->setSites(HAnimSite1934);

CHAnimSite* HAnimSite1935 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1935->setUSE("hanim_l_knee_crease_pt");
HAnimHumanoid47->setSites(HAnimSite1935);

CHAnimSite* HAnimSite1936 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1936->setUSE("hanim_r_knee_crease_pt");
HAnimHumanoid47->setSites(HAnimSite1936);

CHAnimSite* HAnimSite1937 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1937->setUSE("hanim_l_lateral_malleolus_pt");
HAnimHumanoid47->setSites(HAnimSite1937);

CHAnimSite* HAnimSite1938 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1938->setUSE("hanim_r_lateral_malleolus_pt");
HAnimHumanoid47->setSites(HAnimSite1938);

CHAnimSite* HAnimSite1939 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1939->setUSE("hanim_l_medial_malleolus_pt");
HAnimHumanoid47->setSites(HAnimSite1939);

CHAnimSite* HAnimSite1940 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1940->setUSE("hanim_r_medial_malleolus_pt");
HAnimHumanoid47->setSites(HAnimSite1940);

CHAnimSite* HAnimSite1941 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1941->setUSE("hanim_l_metacarpal_pha2_pt");
HAnimHumanoid47->setSites(HAnimSite1941);

CHAnimSite* HAnimSite1942 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1942->setUSE("hanim_r_metacarpal_pha2_pt");
HAnimHumanoid47->setSites(HAnimSite1942);

CHAnimSite* HAnimSite1943 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1943->setUSE("hanim_l_metacarpal_pha5_pt");
HAnimHumanoid47->setSites(HAnimSite1943);

CHAnimSite* HAnimSite1944 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1944->setUSE("hanim_r_metacarpal_pha5_pt");
HAnimHumanoid47->setSites(HAnimSite1944);

CHAnimSite* HAnimSite1945 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1945->setUSE("hanim_l_metatarsal_pha1_pt");
HAnimHumanoid47->setSites(HAnimSite1945);

CHAnimSite* HAnimSite1946 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1946->setUSE("hanim_r_metatarsal_pha1_pt");
HAnimHumanoid47->setSites(HAnimSite1946);

CHAnimSite* HAnimSite1947 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1947->setUSE("hanim_l_metatarsal_pha5_pt");
HAnimHumanoid47->setSites(HAnimSite1947);

CHAnimSite* HAnimSite1948 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1948->setUSE("hanim_r_metatarsal_pha5_pt");
HAnimHumanoid47->setSites(HAnimSite1948);

CHAnimSite* HAnimSite1949 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1949->setUSE("hanim_l_middle_distal_tip");
HAnimHumanoid47->setSites(HAnimSite1949);

CHAnimSite* HAnimSite1950 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1950->setUSE("hanim_r_middle_distal_tip");
HAnimHumanoid47->setSites(HAnimSite1950);

CHAnimSite* HAnimSite1951 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1951->setUSE("hanim_r_neck_base_pt");
HAnimHumanoid47->setSites(HAnimSite1951);

CHAnimSite* HAnimSite1952 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1952->setUSE("hanim_l_neck_base_pt");
HAnimHumanoid47->setSites(HAnimSite1952);

CHAnimSite* HAnimSite1953 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1953->setUSE("hanim_l_olecranon_pt");
HAnimHumanoid47->setSites(HAnimSite1953);

CHAnimSite* HAnimSite1954 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1954->setUSE("hanim_r_olecranon_pt");
HAnimHumanoid47->setSites(HAnimSite1954);

CHAnimSite* HAnimSite1955 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1955->setUSE("hanim_l_pinky_distal_tip");
HAnimHumanoid47->setSites(HAnimSite1955);

CHAnimSite* HAnimSite1956 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1956->setUSE("hanim_r_pinky_distal_tip");
HAnimHumanoid47->setSites(HAnimSite1956);

CHAnimSite* HAnimSite1957 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1957->setUSE("hanim_r_psis_pt");
HAnimHumanoid47->setSites(HAnimSite1957);

CHAnimSite* HAnimSite1958 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1958->setUSE("hanim_l_psis_pt");
HAnimHumanoid47->setSites(HAnimSite1958);

CHAnimSite* HAnimSite1959 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1959->setUSE("hanim_l_radial_styloid_pt");
HAnimHumanoid47->setSites(HAnimSite1959);

CHAnimSite* HAnimSite1960 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1960->setUSE("hanim_r_radial_styloid_pt");
HAnimHumanoid47->setSites(HAnimSite1960);

CHAnimSite* HAnimSite1961 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1961->setUSE("hanim_l_radiale_pt");
HAnimHumanoid47->setSites(HAnimSite1961);

CHAnimSite* HAnimSite1962 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1962->setUSE("hanim_r_radiale_pt");
HAnimHumanoid47->setSites(HAnimSite1962);

CHAnimSite* HAnimSite1963 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1963->setUSE("hanim_r_rib10_pt");
HAnimHumanoid47->setSites(HAnimSite1963);

CHAnimSite* HAnimSite1964 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1964->setUSE("hanim_l_rib10_pt");
HAnimHumanoid47->setSites(HAnimSite1964);

CHAnimSite* HAnimSite1965 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1965->setUSE("hanim_l_ring_distal_tip");
HAnimHumanoid47->setSites(HAnimSite1965);

CHAnimSite* HAnimSite1966 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1966->setUSE("hanim_r_ring_distal_tip");
HAnimHumanoid47->setSites(HAnimSite1966);

CHAnimSite* HAnimSite1967 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1967->setUSE("hanim_temporomandibular_l_site_pt");
HAnimHumanoid47->setSites(HAnimSite1967);

CHAnimSite* HAnimSite1968 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1968->setUSE("hanim_temporomandibular_r_site_pt");
HAnimHumanoid47->setSites(HAnimSite1968);

CHAnimSite* HAnimSite1969 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1969->setUSE("hanim_l_sphyrion_pt");
HAnimHumanoid47->setSites(HAnimSite1969);

CHAnimSite* HAnimSite1970 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1970->setUSE("hanim_r_sphyrion_pt");
HAnimHumanoid47->setSites(HAnimSite1970);

CHAnimSite* HAnimSite1971 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1971->setUSE("hanim_r_thelion_pt");
HAnimHumanoid47->setSites(HAnimSite1971);

CHAnimSite* HAnimSite1972 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1972->setUSE("hanim_l_thelion_pt");
HAnimHumanoid47->setSites(HAnimSite1972);

CHAnimSite* HAnimSite1973 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1973->setUSE("hanim_l_thumb_distal_tip");
HAnimHumanoid47->setSites(HAnimSite1973);

CHAnimSite* HAnimSite1974 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1974->setUSE("hanim_r_thumb_distal_tip");
HAnimHumanoid47->setSites(HAnimSite1974);

CHAnimSite* HAnimSite1975 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1975->setUSE("hanim_r_tragion_pt");
HAnimHumanoid47->setSites(HAnimSite1975);

CHAnimSite* HAnimSite1976 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1976->setUSE("hanim_l_tragion_pt");
HAnimHumanoid47->setSites(HAnimSite1976);

CHAnimSite* HAnimSite1977 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1977->setUSE("hanim_r_trochanterion_pt");
HAnimHumanoid47->setSites(HAnimSite1977);

CHAnimSite* HAnimSite1978 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1978->setUSE("hanim_l_trochanterion_pt");
HAnimHumanoid47->setSites(HAnimSite1978);

CHAnimSite* HAnimSite1979 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1979->setUSE("hanim_l_ulnar_styloid_pt");
HAnimHumanoid47->setSites(HAnimSite1979);

CHAnimSite* HAnimSite1980 = (CHAnimSite *)m_pScene.createNode("HAnimSite");
HAnimSite1980->setUSE("hanim_r_ulnar_styloid_pt");
HAnimHumanoid47->setSites(HAnimSite1980);

group->addChildren(HAnimHumanoid47);

X3D0->setScene(Scene33);

m_pScene.addRootNode(group);
}

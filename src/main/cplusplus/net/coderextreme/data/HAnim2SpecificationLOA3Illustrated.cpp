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
X3D0->setVersion("4.0");
Chead* head1 = new Chead();
Ccomponent* component2 = new Ccomponent();
component2->setName("HAnim");
component2->setLevel(1);
head1->addComponent(*component2);

Cmeta* meta3 = new Cmeta();
meta3->setName("title");
meta3->setContent("HAnim2SpecificationLOA3Illustrated.x3d");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("description");
meta4->setContent("HAnim Specification reference example providing full coverage (and no illustrated visibility) of all specified HAnim constructs, also suitable for re-use as an authoring template.");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("reference");
meta5->setContent("https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("created");
meta6->setContent("18 February 2021");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("modified");
meta7->setContent("23 December 2021");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("creator");
meta8->setContent("Don Brutzman");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("reference");
meta9->setContent("HAnim2SpecificationLOA3Invisible.x3d");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("reference");
meta10->setContent("HAnim2SpecificationLOA3Animation.x3d");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("reference");
meta11->setContent("HAnimSpecificationExampleChangeLog.txt");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("Image");
meta12->setContent("images/BonesAllSkeletonFrontViewLOA1.png");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("Image");
meta13->setContent("images/BonesAllSkeletonFrontViewLOA2.png");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("Image");
meta14->setContent("images/BonesAllSkeletonFrontViewLOA3.png");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("TODO");
meta15->setContent("move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations");
head1->addMeta(*meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("TODO");
meta16->setContent("insert MetadataInteger nodes indicating LOA for each Joint and Segment");
head1->addMeta(*meta16);

Cmeta* meta17 = new Cmeta();
meta17->setName("reference");
meta17->setContent("Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.");
head1->addMeta(*meta17);

Cmeta* meta18 = new Cmeta();
meta18->setName("reference");
meta18->setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.ps");
head1->addMeta(*meta18);

Cmeta* meta19 = new Cmeta();
meta19->setName("reference");
meta19->setContent("tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf");
head1->addMeta(*meta19);

Cmeta* meta20 = new Cmeta();
meta20->setName("translator");
meta20->setContent("Don Brutzman and Joe Williams");
head1->addMeta(*meta20);

Cmeta* meta21 = new Cmeta();
meta21->setName("generator");
meta21->setContent("BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo");
head1->addMeta(*meta21);

Cmeta* meta22 = new Cmeta();
meta22->setName("reference");
meta22->setContent("originals/LOA3ExampleSourceWithDiamondsOriginal.wrl");
head1->addMeta(*meta22);

Cmeta* meta23 = new Cmeta();
meta23->setName("reference");
meta23->setContent("originals/LOA3ExampleSourceWithDiamondsOriginal.x3d");
head1->addMeta(*meta23);

Cmeta* meta24 = new Cmeta();
meta24->setName("reference");
meta24->setContent("originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d");
head1->addMeta(*meta24);

Cmeta* meta25 = new Cmeta();
meta25->setName("reference");
meta25->setContent("HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames");
head1->addMeta(*meta25);

Cmeta* meta26 = new Cmeta();
meta26->setName("generator");
meta26->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta26);

Cmeta* meta27 = new Cmeta();
meta27->setName("identifier");
meta27->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/HAnim2SpecificationLOA3Illustrated.x3d");
head1->addMeta(*meta27);

Cmeta* meta28 = new Cmeta();
meta28->setName("license");
meta28->setContent("../license.html");
head1->addMeta(*meta28);

X3D0->setHead(*head1);

CScene* Scene29 = new CScene();
CBackground* Background30 = (CBackground *)(m_pScene.createNode("Background"));
Background30->setSkyColor(new float[3]{0.3,0.3,0.3});
group->addChildren(*Background30);

CNavigationInfo* NavigationInfo31 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
group->addChildren(*NavigationInfo31);

CGroup* Group32 = (CGroup *)(m_pScene.createNode("Group"));
Group32->setDEF("Original_WorldInfo");
CWorldInfo* WorldInfo33 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo33->setInfo(new CString[1]{" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "}, 1);
WorldInfo33->setTitle("HANIM 200x Default Joint Centers, LOA3");
Group32->addChildren(*WorldInfo33);

group->addChildren(*Group32);

//TODO move viewpoints to be internal to HAnimHumanoid
//Viewpoint centerOfRotation=\"0 0.9149 0.0016\" matches initial at-rest locaton of the sacroliac. Note that these viewpoints are external to the HAnimHumanoid and do not move with the human.
CViewpoint* Viewpoint34 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint34->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint34->setDescription("Humanoid LOA 3 Front");
Viewpoint34->setPosition(new float[3]{0,0.4,4});
group->addChildren(*Viewpoint34);

CViewpoint* Viewpoint35 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint35->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint35->setDescription("Humanoid LOA 3 Front Close");
Viewpoint35->setPosition(new float[3]{0,0.8,2});
group->addChildren(*Viewpoint35);

CViewpoint* Viewpoint36 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint36->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint36->setDescription("Humanoid LOA 3 Front Closer");
Viewpoint36->setPosition(new float[3]{0,1.2,1});
group->addChildren(*Viewpoint36);

CViewpoint* Viewpoint37 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint37->setCenterOfRotation(new float[3]{0,1.5,0.0016});
Viewpoint37->setDescription("Humanoid LOA 3 Front Face");
Viewpoint37->setPosition(new float[3]{0,1.63,1});
group->addChildren(*Viewpoint37);

CViewpoint* Viewpoint38 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint38->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint38->setDescription("Humanoid LOA 3 Right Side");
Viewpoint38->setOrientation(new float[4]{0,1,0,1.5708});
Viewpoint38->setPosition(new float[3]{2.6,0.8,0});
group->addChildren(*Viewpoint38);

CViewpoint* Viewpoint39 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint39->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint39->setDescription("Humanoid LOA 3 Right Side Close");
Viewpoint39->setOrientation(new float[4]{0,1,0,1.2});
Viewpoint39->setPosition(new float[3]{1,0.8,0.5});
group->addChildren(*Viewpoint39);

CViewpoint* Viewpoint40 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint40->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint40->setDescription("Humanoid LOA 3 Left Side Close");
Viewpoint40->setOrientation(new float[4]{0,1,0,-1.2});
Viewpoint40->setPosition(new float[3]{-1,0.8,0.5});
group->addChildren(*Viewpoint40);

CViewpoint* Viewpoint41 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint41->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint41->setDescription("Humanoid LOA 3 Left Side");
Viewpoint41->setOrientation(new float[4]{0,1,0,-1.5708});
Viewpoint41->setPosition(new float[3]{-2.6,0.8,0});
group->addChildren(*Viewpoint41);

CViewpoint* Viewpoint42 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint42->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint42->setDescription("Humanoid LOA 3 Top");
Viewpoint42->setOrientation(new float[4]{1,0,0,-1.5708});
Viewpoint42->setPosition(new float[3]{0,3.5,0});
group->addChildren(*Viewpoint42);

CHAnimHumanoid* HAnimHumanoid43 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid43->setName("humanoid");
HAnimHumanoid43->setDEF("hanim_humanoid");
HAnimHumanoid43->setLoa(3);
HAnimHumanoid43->setVersion("2.0");
//original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is allowed
//original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is allowed
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
//original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
//original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
//original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
//original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
//original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
//original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
//original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
//right between the eyes, stationary position not animating except with body itself
CMetadataSet* MetadataSet44 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet44->setName("HAnimHumanoid.info");
MetadataSet44->setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid");
CMetadataString* MetadataString45 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString45->setName("authorName");
MetadataString45->setValue(new CString[1]{"Matthew T. Beitler Joe D. Williams Don Brutzman"}, 1);
MetadataSet44->setValue(*MetadataString45);

CMetadataString* MetadataString46 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString46->setName("authorEmail");
MetadataString46->setValue(new CString[1]{"HAnim@web3D.org"}, 1);
MetadataSet44->addValue(*MetadataString46);

CMetadataString* MetadataString47 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString47->setName("copyright");
MetadataString47->setValue(new CString[1]{"none"}, 1);
MetadataSet44->addValue(*MetadataString47);

CMetadataString* MetadataString48 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString48->setName("creationDate");
MetadataString48->setValue(new CString[1]{"12 May 1999"}, 1);
MetadataSet44->addValue(*MetadataString48);

CMetadataFloat* MetadataFloat49 = (CMetadataFloat *)(m_pScene.createNode("MetadataFloat"));
MetadataFloat49->setName("height");
MetadataFloat49->setValue(new float[1]{1.7504}, 1);
MetadataSet44->addValue(*MetadataFloat49);

CMetadataString* MetadataString50 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString50->setName("humanoidVersion");
MetadataString50->setValue(new CString[1]{"2.0"}, 1);
MetadataSet44->addValue(*MetadataString50);

CMetadataString* MetadataString51 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString51->setName("usageRestrictions");
MetadataString51->setValue(new CString[1]{"none"}, 1);
MetadataSet44->addValue(*MetadataString51);

HAnimHumanoid43->setMetadata(*MetadataSet44);

CHAnimJoint* HAnimJoint52 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint52->setName("humanoid_root");
HAnimJoint52->setDEF("hanim_humanoid_root");
HAnimJoint52->setCenter(new float[3]{0,0.824,0.0277});
HAnimJoint52->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint52->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment53 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment53->setName("sacrum");
HAnimSegment53->setDEF("hanim_sacrum");
//Visualization sphere for <HAnimJoint name='humanoid_root'/> is placed within <HAnimSegment name='sacrum'/>
CTouchSensor* TouchSensor54 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor54->setDescription("HAnimJoint humanoid_root, HAnimSegment sacrum");
HAnimSegment53->addChildren(*TouchSensor54);

CTransform* Transform55 = (CTransform *)(m_pScene.createNode("Transform"));
Transform55->setTranslation(new float[3]{0,0.824,0.0277});
CShape* Shape56 = (CShape *)(m_pScene.createNode("Shape"));
Shape56->setDEF("HAnimJointShape");
CSphere* Sphere57 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere57->setRadius(0.006);
Shape56->setGeometry(Sphere57);

CAppearance* Appearance58 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance58->setDEF("HAnimJointAppearance");
CMaterial* Material59 = (CMaterial *)(m_pScene.createNode("Material"));
Material59->setDiffuseColor(new float[3]{1,0.5,0});
Material59->setTransparency(0.5);
Appearance58->setMaterial(*Material59);

Shape56->setAppearance(*Appearance58);

Transform55->addChildren(*Shape56);

HAnimSegment53->addChildren(*Transform55);

//HAnimSegment visualization line from current <HAnimJoint name='humanoid_root'/> to child <HAnimJoint name='sacroiliac'/>
CShape* Shape60 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet61 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet61->setVertexCount(new int[1]{2});
CCoordinate* Coordinate62 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate62->setPoint(new float[6]{0,0.824,0.0277,0,0.9149,0.0016});
LineSet61->setCoord(*Coordinate62);

CColorRGBA* ColorRGBA63 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA63->setDEF("HAnimSegmentLineColorRGBA");
ColorRGBA63->setColor(new float[8]{1,1,0,1,1,1,0,0.1});
LineSet61->setColor(*ColorRGBA63);

Shape60->setGeometry(LineSet61);

HAnimSegment53->addChildren(*Shape60);

//HAnimSegment visualization line from current <HAnimJoint name='humanoid_root'/> to child <HAnimJoint name='vl5'/>
CShape* Shape64 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet65 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet65->setVertexCount(new int[1]{2});
CCoordinate* Coordinate66 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate66->setPoint(new float[6]{0,0.824,0.0277,0.0028,1.0568,-0.0776});
LineSet65->setCoord(*Coordinate66);

CColorRGBA* ColorRGBA67 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA67->setUSE("HAnimSegmentLineColorRGBA");
LineSet65->setColor(*ColorRGBA67);

Shape64->setGeometry(LineSet65);

HAnimSegment53->addChildren(*Shape64);

HAnimJoint52->addChildren(*HAnimSegment53);

CHAnimJoint* HAnimJoint68 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint68->setName("sacroiliac");
HAnimJoint68->setDEF("hanim_sacroiliac");
HAnimJoint68->setCenter(new float[3]{0,0.9149,0.0016});
HAnimJoint68->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint68->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment69 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment69->setName("pelvis");
HAnimSegment69->setDEF("hanim_pelvis");
//Visualization sphere for <HAnimJoint name='sacroiliac'/> is placed within <HAnimSegment name='pelvis'/>
CTouchSensor* TouchSensor70 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor70->setDescription("HAnimJoint sacroiliac, HAnimSegment pelvis");
HAnimSegment69->addChildren(*TouchSensor70);

CTransform* Transform71 = (CTransform *)(m_pScene.createNode("Transform"));
Transform71->setTranslation(new float[3]{0,0.9149,0.0016});
CShape* Shape72 = (CShape *)(m_pScene.createNode("Shape"));
Shape72->setUSE("HAnimJointShape");
Transform71->addChildren(*Shape72);

HAnimSegment69->addChildren(*Transform71);

//HAnimSegment visualization line from current <HAnimJoint name='sacroiliac'/> to child <HAnimJoint name='l_hip'/>
CShape* Shape73 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet74 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet74->setVertexCount(new int[1]{2});
CCoordinate* Coordinate75 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate75->setPoint(new float[6]{0,0.9149,0.0016,0.0961,0.9124,-0.0001});
LineSet74->setCoord(*Coordinate75);

CColorRGBA* ColorRGBA76 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA76->setUSE("HAnimSegmentLineColorRGBA");
LineSet74->setColor(*ColorRGBA76);

Shape73->setGeometry(LineSet74);

HAnimSegment69->addChildren(*Shape73);

//HAnimSegment visualization line from current <HAnimJoint name='sacroiliac'/> to child <HAnimJoint name='r_hip'/>
CShape* Shape77 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet78 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet78->setVertexCount(new int[1]{2});
CCoordinate* Coordinate79 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate79->setPoint(new float[6]{0,0.9149,0.0016,-0.0961,0.9124,-0.0001});
LineSet78->setCoord(*Coordinate79);

CColorRGBA* ColorRGBA80 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA80->setUSE("HAnimSegmentLineColorRGBA");
LineSet78->setColor(*ColorRGBA80);

Shape77->setGeometry(LineSet78);

HAnimSegment69->addChildren(*Shape77);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_iliocristale_pt'/>
CShape* Shape81 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet82 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet82->setVertexCount(new int[1]{2});
CCoordinate* Coordinate83 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate83->setPoint(new float[6]{0,0.9149,0.0016,-0.1525,1.0628,0.0035});
LineSet82->setCoord(*Coordinate83);

CColorRGBA* ColorRGBA84 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA84->setDEF("HAnimSiteLineColorRGBA");
ColorRGBA84->setColor(new float[8]{1,0,0,1,1,0,0,0.1});
LineSet82->setColor(*ColorRGBA84);

Shape81->setGeometry(LineSet82);

HAnimSegment69->addChildren(*Shape81);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_trochanterion_pt'/>
CShape* Shape85 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet86 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet86->setVertexCount(new int[1]{2});
CCoordinate* Coordinate87 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate87->setPoint(new float[6]{0,0.9149,0.0016,-0.1689,0.8419,0.0352});
LineSet86->setCoord(*Coordinate87);

CColorRGBA* ColorRGBA88 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA88->setUSE("HAnimSiteLineColorRGBA");
LineSet86->setColor(*ColorRGBA88);

Shape85->setGeometry(LineSet86);

HAnimSegment69->addChildren(*Shape85);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_iliocristale_pt'/>
CShape* Shape89 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet90 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet90->setVertexCount(new int[1]{2});
CCoordinate* Coordinate91 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate91->setPoint(new float[6]{0,0.9149,0.0016,0.1612,1.0537,0.0008});
LineSet90->setCoord(*Coordinate91);

CColorRGBA* ColorRGBA92 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA92->setUSE("HAnimSiteLineColorRGBA");
LineSet90->setColor(*ColorRGBA92);

Shape89->setGeometry(LineSet90);

HAnimSegment69->addChildren(*Shape89);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_trochanterion_pt'/>
CShape* Shape93 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet94 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet94->setVertexCount(new int[1]{2});
CCoordinate* Coordinate95 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate95->setPoint(new float[6]{0,0.9149,0.0016,0.1677,0.8336,0.0303});
LineSet94->setCoord(*Coordinate95);

CColorRGBA* ColorRGBA96 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA96->setUSE("HAnimSiteLineColorRGBA");
LineSet94->setColor(*ColorRGBA96);

Shape93->setGeometry(LineSet94);

HAnimSegment69->addChildren(*Shape93);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_asis_pt'/>
CShape* Shape97 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet98 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet98->setVertexCount(new int[1]{2});
CCoordinate* Coordinate99 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate99->setPoint(new float[6]{0,0.9149,0.0016,-0.0887,1.0021,0.1112});
LineSet98->setCoord(*Coordinate99);

CColorRGBA* ColorRGBA100 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA100->setUSE("HAnimSiteLineColorRGBA");
LineSet98->setColor(*ColorRGBA100);

Shape97->setGeometry(LineSet98);

HAnimSegment69->addChildren(*Shape97);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_asis_pt'/>
CShape* Shape101 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet102 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet102->setVertexCount(new int[1]{2});
CCoordinate* Coordinate103 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate103->setPoint(new float[6]{0,0.9149,0.0016,0.0925,0.9983,0.1052});
LineSet102->setCoord(*Coordinate103);

CColorRGBA* ColorRGBA104 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA104->setUSE("HAnimSiteLineColorRGBA");
LineSet102->setColor(*ColorRGBA104);

Shape101->setGeometry(LineSet102);

HAnimSegment69->addChildren(*Shape101);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_psis_pt'/>
CShape* Shape105 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet106 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet106->setVertexCount(new int[1]{2});
CCoordinate* Coordinate107 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate107->setPoint(new float[6]{0,0.9149,0.0016,-0.0716,1.019,-0.1138});
LineSet106->setCoord(*Coordinate107);

CColorRGBA* ColorRGBA108 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA108->setUSE("HAnimSiteLineColorRGBA");
LineSet106->setColor(*ColorRGBA108);

Shape105->setGeometry(LineSet106);

HAnimSegment69->addChildren(*Shape105);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_psis_pt'/>
CShape* Shape109 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet110 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet110->setVertexCount(new int[1]{2});
CCoordinate* Coordinate111 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate111->setPoint(new float[6]{0,0.9149,0.0016,0.0774,1.019,-0.1151});
LineSet110->setCoord(*Coordinate111);

CColorRGBA* ColorRGBA112 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA112->setUSE("HAnimSiteLineColorRGBA");
LineSet110->setColor(*ColorRGBA112);

Shape109->setGeometry(LineSet110);

HAnimSegment69->addChildren(*Shape109);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='crotch_pt'/>
CShape* Shape113 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet114 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet114->setVertexCount(new int[1]{2});
CCoordinate* Coordinate115 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate115->setPoint(new float[6]{0,0.9149,0.0016,0.0034,0.8266,0.0257});
LineSet114->setCoord(*Coordinate115);

CColorRGBA* ColorRGBA116 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA116->setUSE("HAnimSiteLineColorRGBA");
LineSet114->setColor(*ColorRGBA116);

Shape113->setGeometry(LineSet114);

HAnimSegment69->addChildren(*Shape113);

CHAnimSite* HAnimSite117 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite117->setName("r_iliocristale_pt");
HAnimSite117->setDEF("hanim_r_iliocristale_pt");
HAnimSite117->setTranslation(new float[3]{-0.1525,1.0628,0.0035});
//HAnimSite visualization shape
CTouchSensor* TouchSensor118 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor118->setDescription("HAnimSite r_iliocristale_pt");
HAnimSite117->addChildren(*TouchSensor118);

CShape* Shape119 = (CShape *)(m_pScene.createNode("Shape"));
Shape119->setDEF("HAnimSiteShape");
CIndexedFaceSet* IndexedFaceSet120 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet120->setDEF("DiamondIFS");
IndexedFaceSet120->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet120->setCreaseAngle(0.5);
IndexedFaceSet120->setSolid(False);
CCoordinate* Coordinate121 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate121->setPoint(new float[18]{0,0.008,0,-0.008,0,0,0,0,0.008,0.008,0,0,0,0,-0.008,0,-0.008,0});
IndexedFaceSet120->setCoord(*Coordinate121);

Shape119->setGeometry(IndexedFaceSet120);

CAppearance* Appearance122 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material123 = (CMaterial *)(m_pScene.createNode("Material"));
Material123->setDiffuseColor(new float[3]{1,0,0});
Appearance122->setMaterial(*Material123);

Shape119->setAppearance(*Appearance122);

HAnimSite117->addChildren(*Shape119);

HAnimSegment69->addChildren(*HAnimSite117);

CHAnimSite* HAnimSite124 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite124->setName("r_trochanterion_pt");
HAnimSite124->setDEF("hanim_r_trochanterion_pt");
HAnimSite124->setTranslation(new float[3]{-0.1689,0.8419,0.0352});
//HAnimSite visualization shape
CTouchSensor* TouchSensor125 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor125->setDescription("HAnimSite r_trochanterion_pt");
HAnimSite124->addChildren(*TouchSensor125);

CShape* Shape126 = (CShape *)(m_pScene.createNode("Shape"));
Shape126->setUSE("HAnimSiteShape");
HAnimSite124->addChildren(*Shape126);

HAnimSegment69->addChildren(*HAnimSite124);

CHAnimSite* HAnimSite127 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite127->setName("l_iliocristale_pt");
HAnimSite127->setDEF("hanim_l_iliocristale_pt");
HAnimSite127->setTranslation(new float[3]{0.1612,1.0537,0.0008});
//HAnimSite visualization shape
CTouchSensor* TouchSensor128 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor128->setDescription("HAnimSite l_iliocristale_pt");
HAnimSite127->addChildren(*TouchSensor128);

CShape* Shape129 = (CShape *)(m_pScene.createNode("Shape"));
Shape129->setUSE("HAnimSiteShape");
HAnimSite127->addChildren(*Shape129);

HAnimSegment69->addChildren(*HAnimSite127);

CHAnimSite* HAnimSite130 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite130->setName("l_trochanterion_pt");
HAnimSite130->setDEF("hanim_l_trochanterion_pt");
HAnimSite130->setTranslation(new float[3]{0.1677,0.8336,0.0303});
//HAnimSite visualization shape
CTouchSensor* TouchSensor131 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor131->setDescription("HAnimSite l_trochanterion_pt");
HAnimSite130->addChildren(*TouchSensor131);

CShape* Shape132 = (CShape *)(m_pScene.createNode("Shape"));
Shape132->setUSE("HAnimSiteShape");
HAnimSite130->addChildren(*Shape132);

HAnimSegment69->addChildren(*HAnimSite130);

CHAnimSite* HAnimSite133 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite133->setName("r_asis_pt");
HAnimSite133->setDEF("hanim_r_asis_pt");
HAnimSite133->setTranslation(new float[3]{-0.0887,1.0021,0.1112});
//HAnimSite visualization shape
CTouchSensor* TouchSensor134 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor134->setDescription("HAnimSite r_asis_pt");
HAnimSite133->addChildren(*TouchSensor134);

CShape* Shape135 = (CShape *)(m_pScene.createNode("Shape"));
Shape135->setUSE("HAnimSiteShape");
HAnimSite133->addChildren(*Shape135);

HAnimSegment69->addChildren(*HAnimSite133);

CHAnimSite* HAnimSite136 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite136->setName("l_asis_pt");
HAnimSite136->setDEF("hanim_l_asis_pt");
HAnimSite136->setTranslation(new float[3]{0.0925,0.9983,0.1052});
//HAnimSite visualization shape
CTouchSensor* TouchSensor137 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor137->setDescription("HAnimSite l_asis_pt");
HAnimSite136->addChildren(*TouchSensor137);

CShape* Shape138 = (CShape *)(m_pScene.createNode("Shape"));
Shape138->setUSE("HAnimSiteShape");
HAnimSite136->addChildren(*Shape138);

HAnimSegment69->addChildren(*HAnimSite136);

CHAnimSite* HAnimSite139 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite139->setName("r_psis_pt");
HAnimSite139->setDEF("hanim_r_psis_pt");
HAnimSite139->setTranslation(new float[3]{-0.0716,1.019,-0.1138});
//HAnimSite visualization shape
CTouchSensor* TouchSensor140 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor140->setDescription("HAnimSite r_psis_pt");
HAnimSite139->addChildren(*TouchSensor140);

CShape* Shape141 = (CShape *)(m_pScene.createNode("Shape"));
Shape141->setUSE("HAnimSiteShape");
HAnimSite139->addChildren(*Shape141);

HAnimSegment69->addChildren(*HAnimSite139);

CHAnimSite* HAnimSite142 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite142->setName("l_psis_pt");
HAnimSite142->setDEF("hanim_l_psis_pt");
HAnimSite142->setTranslation(new float[3]{0.0774,1.019,-0.1151});
//HAnimSite visualization shape
CTouchSensor* TouchSensor143 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor143->setDescription("HAnimSite l_psis_pt");
HAnimSite142->addChildren(*TouchSensor143);

CShape* Shape144 = (CShape *)(m_pScene.createNode("Shape"));
Shape144->setUSE("HAnimSiteShape");
HAnimSite142->addChildren(*Shape144);

HAnimSegment69->addChildren(*HAnimSite142);

CHAnimSite* HAnimSite145 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite145->setName("crotch_pt");
HAnimSite145->setDEF("hanim_crotch_pt");
HAnimSite145->setTranslation(new float[3]{0.0034,0.8266,0.0257});
//HAnimSite visualization shape
CTouchSensor* TouchSensor146 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor146->setDescription("HAnimSite crotch_pt");
HAnimSite145->addChildren(*TouchSensor146);

CShape* Shape147 = (CShape *)(m_pScene.createNode("Shape"));
Shape147->setUSE("HAnimSiteShape");
HAnimSite145->addChildren(*Shape147);

HAnimSegment69->addChildren(*HAnimSite145);

HAnimJoint68->addChildren(*HAnimSegment69);

CHAnimJoint* HAnimJoint148 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint148->setName("l_hip");
HAnimJoint148->setDEF("hanim_l_hip");
HAnimJoint148->setCenter(new float[3]{0.0961,0.9124,-0.0001});
HAnimJoint148->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint148->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment149 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment149->setName("l_thigh");
HAnimSegment149->setDEF("hanim_l_thigh");
//Visualization sphere for <HAnimJoint name='l_hip'/> is placed within <HAnimSegment name='l_thigh'/>
CTouchSensor* TouchSensor150 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor150->setDescription("HAnimJoint l_hip, HAnimSegment l_thigh");
HAnimSegment149->addChildren(*TouchSensor150);

CTransform* Transform151 = (CTransform *)(m_pScene.createNode("Transform"));
Transform151->setTranslation(new float[3]{0.0961,0.9124,-0.0001});
CShape* Shape152 = (CShape *)(m_pScene.createNode("Shape"));
Shape152->setUSE("HAnimJointShape");
Transform151->addChildren(*Shape152);

HAnimSegment149->addChildren(*Transform151);

//HAnimSegment visualization line from current <HAnimJoint name='l_hip'/> to child <HAnimJoint name='l_knee'/>
CShape* Shape153 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet154 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet154->setVertexCount(new int[1]{2});
CCoordinate* Coordinate155 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate155->setPoint(new float[6]{0.0961,0.9124,-0.0001,0.104,0.4867,0.0308});
LineSet154->setCoord(*Coordinate155);

CColorRGBA* ColorRGBA156 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA156->setUSE("HAnimSegmentLineColorRGBA");
LineSet154->setColor(*ColorRGBA156);

Shape153->setGeometry(LineSet154);

HAnimSegment149->addChildren(*Shape153);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_knee_crease_pt'/>
CShape* Shape157 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet158 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet158->setVertexCount(new int[1]{2});
CCoordinate* Coordinate159 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate159->setPoint(new float[6]{0.0961,0.9124,-0.0001,0.0993,0.4881,-0.0309});
LineSet158->setCoord(*Coordinate159);

CColorRGBA* ColorRGBA160 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA160->setUSE("HAnimSiteLineColorRGBA");
LineSet158->setColor(*ColorRGBA160);

Shape157->setGeometry(LineSet158);

HAnimSegment149->addChildren(*Shape157);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_lateral_epicn_pt'/>
CShape* Shape161 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet162 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet162->setVertexCount(new int[1]{2});
CCoordinate* Coordinate163 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate163->setPoint(new float[6]{0.0961,0.9124,-0.0001,0.1598,0.4967,0.0297});
LineSet162->setCoord(*Coordinate163);

CColorRGBA* ColorRGBA164 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA164->setUSE("HAnimSiteLineColorRGBA");
LineSet162->setColor(*ColorRGBA164);

Shape161->setGeometry(LineSet162);

HAnimSegment149->addChildren(*Shape161);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_medial_epicn_pt'/>
CShape* Shape165 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet166 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet166->setVertexCount(new int[1]{2});
CCoordinate* Coordinate167 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate167->setPoint(new float[6]{0.0961,0.9124,-0.0001,0.0398,0.4946,0.0303});
LineSet166->setCoord(*Coordinate167);

CColorRGBA* ColorRGBA168 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA168->setUSE("HAnimSiteLineColorRGBA");
LineSet166->setColor(*ColorRGBA168);

Shape165->setGeometry(LineSet166);

HAnimSegment149->addChildren(*Shape165);

CHAnimSite* HAnimSite169 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite169->setName("l_knee_crease_pt");
HAnimSite169->setDEF("hanim_l_knee_crease_pt");
HAnimSite169->setTranslation(new float[3]{0.0993,0.4881,-0.0309});
//HAnimSite visualization shape
CTouchSensor* TouchSensor170 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor170->setDescription("HAnimSite l_knee_crease_pt");
HAnimSite169->addChildren(*TouchSensor170);

CShape* Shape171 = (CShape *)(m_pScene.createNode("Shape"));
Shape171->setUSE("HAnimSiteShape");
HAnimSite169->addChildren(*Shape171);

HAnimSegment149->addChildren(*HAnimSite169);

CHAnimSite* HAnimSite172 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite172->setName("l_femoral_lateral_epicondyle_pt");
HAnimSite172->setDEF("hanim_l_femoral_lateral_epicondyle_pt");
HAnimSite172->setTranslation(new float[3]{0.1598,0.4967,0.0297});
//HAnimSite visualization shape
CTouchSensor* TouchSensor173 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor173->setDescription("HAnimSite l_femoral_lateral_epicn_pt");
HAnimSite172->addChildren(*TouchSensor173);

CShape* Shape174 = (CShape *)(m_pScene.createNode("Shape"));
Shape174->setUSE("HAnimSiteShape");
HAnimSite172->addChildren(*Shape174);

HAnimSegment149->addChildren(*HAnimSite172);

CHAnimSite* HAnimSite175 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite175->setName("l_femoral_medial_epicondyle_pt");
HAnimSite175->setDEF("hanim_l_femoral_medial_epicondyle_pt");
HAnimSite175->setTranslation(new float[3]{0.0398,0.4946,0.0303});
//HAnimSite visualization shape
CTouchSensor* TouchSensor176 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor176->setDescription("HAnimSite l_femoral_medial_epicn_pt");
HAnimSite175->addChildren(*TouchSensor176);

CShape* Shape177 = (CShape *)(m_pScene.createNode("Shape"));
Shape177->setUSE("HAnimSiteShape");
HAnimSite175->addChildren(*Shape177);

HAnimSegment149->addChildren(*HAnimSite175);

HAnimJoint148->addChildren(*HAnimSegment149);

CHAnimJoint* HAnimJoint178 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint178->setName("l_knee");
HAnimJoint178->setDEF("hanim_l_knee");
HAnimJoint178->setCenter(new float[3]{0.104,0.4867,0.0308});
HAnimJoint178->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint178->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment179 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment179->setName("l_calf");
HAnimSegment179->setDEF("hanim_l_calf");
//Visualization sphere for <HAnimJoint name='l_knee'/> is placed within <HAnimSegment name='l_calf'/>
CTouchSensor* TouchSensor180 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor180->setDescription("HAnimJoint l_knee, HAnimSegment l_calf");
HAnimSegment179->addChildren(*TouchSensor180);

CTransform* Transform181 = (CTransform *)(m_pScene.createNode("Transform"));
Transform181->setTranslation(new float[3]{0.104,0.4867,0.0308});
CShape* Shape182 = (CShape *)(m_pScene.createNode("Shape"));
Shape182->setUSE("HAnimJointShape");
Transform181->addChildren(*Shape182);

HAnimSegment179->addChildren(*Transform181);

//HAnimSegment visualization line from current <HAnimJoint name='l_knee'/> to child <HAnimJoint name='l_talocrural'/>
CShape* Shape183 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet184 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet184->setVertexCount(new int[1]{2});
CCoordinate* Coordinate185 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate185->setPoint(new float[6]{0.104,0.4867,0.0308,0.1101,0.0656,-0.0736});
LineSet184->setCoord(*Coordinate185);

CColorRGBA* ColorRGBA186 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA186->setUSE("HAnimSegmentLineColorRGBA");
LineSet184->setColor(*ColorRGBA186);

Shape183->setGeometry(LineSet184);

HAnimSegment179->addChildren(*Shape183);

HAnimJoint178->addChildren(*HAnimSegment179);

CHAnimJoint* HAnimJoint187 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint187->setName("l_talocrural");
HAnimJoint187->setDEF("hanim_l_talocrural");
HAnimJoint187->setCenter(new float[3]{0.1101,0.0656,-0.0736});
HAnimJoint187->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint187->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment188 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment188->setName("l_talus");
HAnimSegment188->setDEF("hanim_l_talus");
//Visualization sphere for <HAnimJoint name='l_talocrural'/> is placed within <HAnimSegment name='l_talus'/>
CTouchSensor* TouchSensor189 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor189->setDescription("HAnimJoint l_talocrural, HAnimSegment l_talus");
HAnimSegment188->addChildren(*TouchSensor189);

CTransform* Transform190 = (CTransform *)(m_pScene.createNode("Transform"));
Transform190->setTranslation(new float[3]{0.1101,0.0656,-0.0736});
CShape* Shape191 = (CShape *)(m_pScene.createNode("Shape"));
Shape191->setUSE("HAnimJointShape");
Transform190->addChildren(*Shape191);

HAnimSegment188->addChildren(*Transform190);

//HAnimSegment visualization line from current <HAnimJoint name='l_talocrural'/> to child <HAnimJoint name='l_tarsometatarsal_2'/>
CShape* Shape192 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet193 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet193->setVertexCount(new int[1]{2});
CCoordinate* Coordinate194 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate194->setPoint(new float[6]{0.1101,0.0656,-0.0736,0.1086,0.0001,-0.0368});
LineSet193->setCoord(*Coordinate194);

CColorRGBA* ColorRGBA195 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA195->setUSE("HAnimSegmentLineColorRGBA");
LineSet193->setColor(*ColorRGBA195);

Shape192->setGeometry(LineSet193);

HAnimSegment188->addChildren(*Shape192);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_talocrural'/> to <HAnimSite name='l_lateral_malleolus_pt'/>
CShape* Shape196 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet197 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet197->setVertexCount(new int[1]{2});
CCoordinate* Coordinate198 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate198->setPoint(new float[6]{0.1101,0.0656,-0.0736,0.1308,0.0597,-0.1032});
LineSet197->setCoord(*Coordinate198);

CColorRGBA* ColorRGBA199 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA199->setUSE("HAnimSiteLineColorRGBA");
LineSet197->setColor(*ColorRGBA199);

Shape196->setGeometry(LineSet197);

HAnimSegment188->addChildren(*Shape196);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_talocrural'/> to <HAnimSite name='l_medial_malleolus_pt'/>
CShape* Shape200 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet201 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet201->setVertexCount(new int[1]{2});
CCoordinate* Coordinate202 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate202->setPoint(new float[6]{0.1101,0.0656,-0.0736,0.089,0.0716,-0.0881});
LineSet201->setCoord(*Coordinate202);

CColorRGBA* ColorRGBA203 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA203->setUSE("HAnimSiteLineColorRGBA");
LineSet201->setColor(*ColorRGBA203);

Shape200->setGeometry(LineSet201);

HAnimSegment188->addChildren(*Shape200);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_talocrural'/> to <HAnimSite name='l_sphyrion_pt'/>
CShape* Shape204 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet205 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet205->setVertexCount(new int[1]{2});
CCoordinate* Coordinate206 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate206->setPoint(new float[6]{0.1101,0.0656,-0.0736,0.089,0.0575,-0.0943});
LineSet205->setCoord(*Coordinate206);

CColorRGBA* ColorRGBA207 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA207->setUSE("HAnimSiteLineColorRGBA");
LineSet205->setColor(*ColorRGBA207);

Shape204->setGeometry(LineSet205);

HAnimSegment188->addChildren(*Shape204);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_talocrural'/> to <HAnimSite name='l_calcaneous_post_pt'/>
CShape* Shape208 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet209 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet209->setVertexCount(new int[1]{2});
CCoordinate* Coordinate210 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate210->setPoint(new float[6]{0.1101,0.0656,-0.0736,0.0974,0.0259,-0.1171});
LineSet209->setCoord(*Coordinate210);

CColorRGBA* ColorRGBA211 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA211->setUSE("HAnimSiteLineColorRGBA");
LineSet209->setColor(*ColorRGBA211);

Shape208->setGeometry(LineSet209);

HAnimSegment188->addChildren(*Shape208);

CHAnimSite* HAnimSite212 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite212->setName("l_lateral_malleolus_pt");
HAnimSite212->setDEF("hanim_l_lateral_malleolus_pt");
HAnimSite212->setTranslation(new float[3]{0.1308,0.0597,-0.1032});
//HAnimSite visualization shape
CTouchSensor* TouchSensor213 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor213->setDescription("HAnimSite l_lateral_malleolus_pt");
HAnimSite212->addChildren(*TouchSensor213);

CShape* Shape214 = (CShape *)(m_pScene.createNode("Shape"));
Shape214->setUSE("HAnimSiteShape");
HAnimSite212->addChildren(*Shape214);

HAnimSegment188->addChildren(*HAnimSite212);

CHAnimSite* HAnimSite215 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite215->setName("l_medial_malleolus_pt");
HAnimSite215->setDEF("hanim_l_medial_malleolus_pt");
HAnimSite215->setTranslation(new float[3]{0.089,0.0716,-0.0881});
//HAnimSite visualization shape
CTouchSensor* TouchSensor216 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor216->setDescription("HAnimSite l_medial_malleolus_pt");
HAnimSite215->addChildren(*TouchSensor216);

CShape* Shape217 = (CShape *)(m_pScene.createNode("Shape"));
Shape217->setUSE("HAnimSiteShape");
HAnimSite215->addChildren(*Shape217);

HAnimSegment188->addChildren(*HAnimSite215);

CHAnimSite* HAnimSite218 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite218->setName("l_sphyrion_pt");
HAnimSite218->setDEF("hanim_l_sphyrion_pt");
HAnimSite218->setTranslation(new float[3]{0.089,0.0575,-0.0943});
//HAnimSite visualization shape
CTouchSensor* TouchSensor219 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor219->setDescription("HAnimSite l_sphyrion_pt");
HAnimSite218->addChildren(*TouchSensor219);

CShape* Shape220 = (CShape *)(m_pScene.createNode("Shape"));
Shape220->setUSE("HAnimSiteShape");
HAnimSite218->addChildren(*Shape220);

HAnimSegment188->addChildren(*HAnimSite218);

CHAnimSite* HAnimSite221 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite221->setName("l_calcaneus_posterior_pt");
HAnimSite221->setDEF("hanim_l_calcaneus_posterior_pt");
HAnimSite221->setTranslation(new float[3]{0.0974,0.0259,-0.1171});
//HAnimSite visualization shape
CTouchSensor* TouchSensor222 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor222->setDescription("HAnimSite l_calcaneous_post_pt");
HAnimSite221->addChildren(*TouchSensor222);

CShape* Shape223 = (CShape *)(m_pScene.createNode("Shape"));
Shape223->setUSE("HAnimSiteShape");
HAnimSite221->addChildren(*Shape223);

HAnimSegment188->addChildren(*HAnimSite221);

HAnimJoint187->addChildren(*HAnimSegment188);

CHAnimJoint* HAnimJoint224 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint224->setName("l_tarsometatarsal_2");
HAnimJoint224->setDEF("hanim_l_tarsometatarsal_2");
HAnimJoint224->setCenter(new float[3]{0.1086,0.0001,-0.0368});
HAnimJoint224->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint224->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment225 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment225->setName("l_metatarsal_2");
HAnimSegment225->setDEF("hanim_l_metatarsal_2");
//Visualization sphere for <HAnimJoint name='l_tarsometatarsal_2'/> is placed within <HAnimSegment name='l_metatarsal_2'/>
CTouchSensor* TouchSensor226 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor226->setDescription("HAnimJoint l_tarsometatarsal_2, HAnimSegment l_metatarsal_2");
HAnimSegment225->addChildren(*TouchSensor226);

CTransform* Transform227 = (CTransform *)(m_pScene.createNode("Transform"));
Transform227->setTranslation(new float[3]{0.1086,0.0001,-0.0368});
CShape* Shape228 = (CShape *)(m_pScene.createNode("Shape"));
Shape228->setUSE("HAnimJointShape");
Transform227->addChildren(*Shape228);

HAnimSegment225->addChildren(*Transform227);

//HAnimSegment visualization line from current <HAnimJoint name='l_tarsometatarsal_2'/> to child <HAnimJoint name='l_metatarsophalangeal_2'/>
CShape* Shape229 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet230 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet230->setVertexCount(new int[1]{2});
CCoordinate* Coordinate231 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate231->setPoint(new float[6]{0.1086,0.0001,-0.0368,0.1086,0.0001,0.0368});
LineSet230->setCoord(*Coordinate231);

CColorRGBA* ColorRGBA232 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA232->setUSE("HAnimSegmentLineColorRGBA");
LineSet230->setColor(*ColorRGBA232);

Shape229->setGeometry(LineSet230);

HAnimSegment225->addChildren(*Shape229);

HAnimJoint224->addChildren(*HAnimSegment225);

CHAnimJoint* HAnimJoint233 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint233->setName("l_metatarsophalangeal_2");
HAnimJoint233->setDEF("hanim_l_metatarsophalangeal_2");
HAnimJoint233->setCenter(new float[3]{0.1086,0.0001,0.0368});
HAnimJoint233->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint233->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment234 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment234->setName("l_tarsal_proximal_phalanx_2");
HAnimSegment234->setDEF("hanim_l_tarsal_proximal_phalanx_2");
//Visualization sphere for <HAnimJoint name='l_metatarsophalangeal_2'/> is placed within <HAnimSegment name='l_tarsal_proximal_phalanx_2'/>
CTouchSensor* TouchSensor235 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor235->setDescription("HAnimJoint l_metatarsophalangeal_2, HAnimSegment l_tarsal_proximal_phalanx_2");
HAnimSegment234->addChildren(*TouchSensor235);

CTransform* Transform236 = (CTransform *)(m_pScene.createNode("Transform"));
Transform236->setTranslation(new float[3]{0.1086,0.0001,0.0368});
CShape* Shape237 = (CShape *)(m_pScene.createNode("Shape"));
Shape237->setUSE("HAnimJointShape");
Transform236->addChildren(*Shape237);

HAnimSegment234->addChildren(*Transform236);

//HAnimSegment visualization line from current <HAnimJoint name='l_metatarsophalangeal_2'/> to child <HAnimJoint name='l_tarsal_distal_interphalangeal_2'/>
CShape* Shape238 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet239 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet239->setVertexCount(new int[1]{2});
CCoordinate* Coordinate240 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate240->setPoint(new float[6]{0.1086,0.0001,0.0368,0.1086,0,0.0762});
LineSet239->setCoord(*Coordinate240);

CColorRGBA* ColorRGBA241 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA241->setUSE("HAnimSegmentLineColorRGBA");
LineSet239->setColor(*ColorRGBA241);

Shape238->setGeometry(LineSet239);

HAnimSegment234->addChildren(*Shape238);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsophalangeal_2'/> to <HAnimSite name='l_metatarsal_pha1_pt'/>
CShape* Shape242 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet243 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet243->setVertexCount(new int[1]{2});
CCoordinate* Coordinate244 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate244->setPoint(new float[6]{0.1086,0.0001,0.0368,0.0816,0.0232,0.0106});
LineSet243->setCoord(*Coordinate244);

CColorRGBA* ColorRGBA245 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA245->setUSE("HAnimSiteLineColorRGBA");
LineSet243->setColor(*ColorRGBA245);

Shape242->setGeometry(LineSet243);

HAnimSegment234->addChildren(*Shape242);

CHAnimSite* HAnimSite246 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite246->setName("l_metatarsal_phalanx_1_pt");
HAnimSite246->setDEF("hanim_l_metatarsal_phalanx_1_pt");
HAnimSite246->setTranslation(new float[3]{0.0816,0.0232,0.0106});
//HAnimSite visualization shape
CTouchSensor* TouchSensor247 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor247->setDescription("HAnimSite l_metatarsal_pha1_pt");
HAnimSite246->addChildren(*TouchSensor247);

CShape* Shape248 = (CShape *)(m_pScene.createNode("Shape"));
Shape248->setUSE("HAnimSiteShape");
HAnimSite246->addChildren(*Shape248);

HAnimSegment234->addChildren(*HAnimSite246);

HAnimJoint233->addChildren(*HAnimSegment234);

CHAnimJoint* HAnimJoint249 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint249->setName("l_tarsal_distal_interphalangeal_2");
HAnimJoint249->setDEF("hanim_l_tarsal_distal_interphalangeal_2");
HAnimJoint249->setCenter(new float[3]{0.1086,0,0.0762});
HAnimJoint249->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint249->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment250 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment250->setName("l_tarsal_distal_phalanx_2");
HAnimSegment250->setDEF("hanim_l_tarsal_distal_phalanx_2");
//Visualization sphere for <HAnimJoint name='l_tarsal_distal_interphalangeal_2'/> is placed within <HAnimSegment name='l_tarsal_distal_phalanx_2'/>
CTouchSensor* TouchSensor251 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor251->setDescription("HAnimJoint l_tarsal_distal_interphalangeal_2, HAnimSegment l_tarsal_distal_phalanx_2");
HAnimSegment250->addChildren(*TouchSensor251);

CTransform* Transform252 = (CTransform *)(m_pScene.createNode("Transform"));
Transform252->setTranslation(new float[3]{0.1086,0,0.0762});
CShape* Shape253 = (CShape *)(m_pScene.createNode("Shape"));
Shape253->setUSE("HAnimJointShape");
Transform252->addChildren(*Shape253);

HAnimSegment250->addChildren(*Transform252);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='l_forefoot_tip'/>
CShape* Shape254 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet255 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet255->setVertexCount(new int[1]{2});
CCoordinate* Coordinate256 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate256->setPoint(new float[6]{0.1086,0,0.0762,0.1354,0.0016,0.1476});
LineSet255->setCoord(*Coordinate256);

CColorRGBA* ColorRGBA257 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA257->setUSE("HAnimSiteLineColorRGBA");
LineSet255->setColor(*ColorRGBA257);

Shape254->setGeometry(LineSet255);

HAnimSegment250->addChildren(*Shape254);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='l_metatarsal_pha5_pt'/>
CShape* Shape258 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet259 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet259->setVertexCount(new int[1]{2});
CCoordinate* Coordinate260 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate260->setPoint(new float[6]{0.1086,0,0.0762,0.1825,0.007,0.0928});
LineSet259->setCoord(*Coordinate260);

CColorRGBA* ColorRGBA261 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA261->setUSE("HAnimSiteLineColorRGBA");
LineSet259->setColor(*ColorRGBA261);

Shape258->setGeometry(LineSet259);

HAnimSegment250->addChildren(*Shape258);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='l_digit2_pt'/>
CShape* Shape262 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet263 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet263->setVertexCount(new int[1]{2});
CCoordinate* Coordinate264 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate264->setPoint(new float[6]{0.1086,0,0.0762,0.1195,0.0079,0.1433});
LineSet263->setCoord(*Coordinate264);

CColorRGBA* ColorRGBA265 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA265->setUSE("HAnimSiteLineColorRGBA");
LineSet263->setColor(*ColorRGBA265);

Shape262->setGeometry(LineSet263);

HAnimSegment250->addChildren(*Shape262);

CHAnimSite* HAnimSite266 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite266->setName("l_forefoot_tip_pt");
HAnimSite266->setDEF("hanim_l_forefoot_tip_pt");
HAnimSite266->setTranslation(new float[3]{0.1354,0.0016,0.1476});
//HAnimSite visualization shape
CTouchSensor* TouchSensor267 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor267->setDescription("HAnimSite l_forefoot_tip");
HAnimSite266->addChildren(*TouchSensor267);

CShape* Shape268 = (CShape *)(m_pScene.createNode("Shape"));
Shape268->setUSE("HAnimSiteShape");
HAnimSite266->addChildren(*Shape268);

HAnimSegment250->addChildren(*HAnimSite266);

CHAnimSite* HAnimSite269 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite269->setName("l_metatarsal_phalanx_5_pt");
HAnimSite269->setDEF("hanim_l_metatarsal_phalanx_5_pt");
HAnimSite269->setTranslation(new float[3]{0.1825,0.007,0.0928});
//HAnimSite visualization shape
CTouchSensor* TouchSensor270 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor270->setDescription("HAnimSite l_metatarsal_pha5_pt");
HAnimSite269->addChildren(*TouchSensor270);

CShape* Shape271 = (CShape *)(m_pScene.createNode("Shape"));
Shape271->setUSE("HAnimSiteShape");
HAnimSite269->addChildren(*Shape271);

HAnimSegment250->addChildren(*HAnimSite269);

CHAnimSite* HAnimSite272 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite272->setName("l_tarsal_distal_phalanx_2_pt");
HAnimSite272->setDEF("hanim_l_tarsal_distal_phalanx_2_pt");
HAnimSite272->setTranslation(new float[3]{0.1195,0.0079,0.1433});
//HAnimSite visualization shape
CTouchSensor* TouchSensor273 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor273->setDescription("HAnimSite l_digit2_pt");
HAnimSite272->addChildren(*TouchSensor273);

CShape* Shape274 = (CShape *)(m_pScene.createNode("Shape"));
Shape274->setUSE("HAnimSiteShape");
HAnimSite272->addChildren(*Shape274);

HAnimSegment250->addChildren(*HAnimSite272);

HAnimJoint249->addChildren(*HAnimSegment250);

HAnimJoint233->addChildren(*HAnimJoint249);

HAnimJoint224->addChildren(*HAnimJoint233);

HAnimJoint187->addChildren(*HAnimJoint224);

HAnimJoint178->addChildren(*HAnimJoint187);

HAnimJoint148->addChildren(*HAnimJoint178);

HAnimJoint68->addChildren(*HAnimJoint148);

CHAnimJoint* HAnimJoint275 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint275->setName("r_hip");
HAnimJoint275->setDEF("hanim_r_hip");
HAnimJoint275->setCenter(new float[3]{-0.0961,0.9124,-0.0001});
HAnimJoint275->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint275->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment276 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment276->setName("r_thigh");
HAnimSegment276->setDEF("hanim_r_thigh");
//Visualization sphere for <HAnimJoint name='r_hip'/> is placed within <HAnimSegment name='r_thigh'/>
CTouchSensor* TouchSensor277 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor277->setDescription("HAnimJoint r_hip, HAnimSegment r_thigh");
HAnimSegment276->addChildren(*TouchSensor277);

CTransform* Transform278 = (CTransform *)(m_pScene.createNode("Transform"));
Transform278->setTranslation(new float[3]{-0.0961,0.9124,-0.0001});
CShape* Shape279 = (CShape *)(m_pScene.createNode("Shape"));
Shape279->setUSE("HAnimJointShape");
Transform278->addChildren(*Shape279);

HAnimSegment276->addChildren(*Transform278);

//HAnimSegment visualization line from current <HAnimJoint name='r_hip'/> to child <HAnimJoint name='r_knee'/>
CShape* Shape280 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet281 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet281->setVertexCount(new int[1]{2});
CCoordinate* Coordinate282 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate282->setPoint(new float[6]{-0.0961,0.9124,-0.0001,-0.104,0.4867,0.0308});
LineSet281->setCoord(*Coordinate282);

CColorRGBA* ColorRGBA283 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA283->setUSE("HAnimSegmentLineColorRGBA");
LineSet281->setColor(*ColorRGBA283);

Shape280->setGeometry(LineSet281);

HAnimSegment276->addChildren(*Shape280);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_knee_crease_pt'/>
CShape* Shape284 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet285 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet285->setVertexCount(new int[1]{2});
CCoordinate* Coordinate286 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate286->setPoint(new float[6]{-0.0961,0.9124,-0.0001,-0.0825,0.4932,-0.0326});
LineSet285->setCoord(*Coordinate286);

CColorRGBA* ColorRGBA287 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA287->setUSE("HAnimSiteLineColorRGBA");
LineSet285->setColor(*ColorRGBA287);

Shape284->setGeometry(LineSet285);

HAnimSegment276->addChildren(*Shape284);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_lateral_epicn_pt'/>
CShape* Shape288 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet289 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet289->setVertexCount(new int[1]{2});
CCoordinate* Coordinate290 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate290->setPoint(new float[6]{-0.0961,0.9124,-0.0001,-0.1421,0.4992,0.031});
LineSet289->setCoord(*Coordinate290);

CColorRGBA* ColorRGBA291 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA291->setUSE("HAnimSiteLineColorRGBA");
LineSet289->setColor(*ColorRGBA291);

Shape288->setGeometry(LineSet289);

HAnimSegment276->addChildren(*Shape288);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_medial_epicn_pt'/>
CShape* Shape292 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet293 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet293->setVertexCount(new int[1]{2});
CCoordinate* Coordinate294 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate294->setPoint(new float[6]{-0.0961,0.9124,-0.0001,-0.0221,0.5014,0.0289});
LineSet293->setCoord(*Coordinate294);

CColorRGBA* ColorRGBA295 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA295->setUSE("HAnimSiteLineColorRGBA");
LineSet293->setColor(*ColorRGBA295);

Shape292->setGeometry(LineSet293);

HAnimSegment276->addChildren(*Shape292);

CHAnimSite* HAnimSite296 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite296->setName("r_knee_crease_pt");
HAnimSite296->setDEF("hanim_r_knee_crease_pt");
HAnimSite296->setTranslation(new float[3]{-0.0825,0.4932,-0.0326});
//HAnimSite visualization shape
CTouchSensor* TouchSensor297 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor297->setDescription("HAnimSite r_knee_crease_pt");
HAnimSite296->addChildren(*TouchSensor297);

CShape* Shape298 = (CShape *)(m_pScene.createNode("Shape"));
Shape298->setUSE("HAnimSiteShape");
HAnimSite296->addChildren(*Shape298);

HAnimSegment276->addChildren(*HAnimSite296);

CHAnimSite* HAnimSite299 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite299->setName("r_femoral_lateral_epicondyle_pt");
HAnimSite299->setDEF("hanim_r_femoral_lateral_epicondyle_pt");
HAnimSite299->setTranslation(new float[3]{-0.1421,0.4992,0.031});
//HAnimSite visualization shape
CTouchSensor* TouchSensor300 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor300->setDescription("HAnimSite r_femoral_lateral_epicn_pt");
HAnimSite299->addChildren(*TouchSensor300);

CShape* Shape301 = (CShape *)(m_pScene.createNode("Shape"));
Shape301->setUSE("HAnimSiteShape");
HAnimSite299->addChildren(*Shape301);

HAnimSegment276->addChildren(*HAnimSite299);

CHAnimSite* HAnimSite302 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite302->setName("r_femoral_medial_epicondyle_pt");
HAnimSite302->setDEF("hanim_r_femoral_medial_epicondyle_pt");
HAnimSite302->setTranslation(new float[3]{-0.0221,0.5014,0.0289});
//HAnimSite visualization shape
CTouchSensor* TouchSensor303 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor303->setDescription("HAnimSite r_femoral_medial_epicn_pt");
HAnimSite302->addChildren(*TouchSensor303);

CShape* Shape304 = (CShape *)(m_pScene.createNode("Shape"));
Shape304->setUSE("HAnimSiteShape");
HAnimSite302->addChildren(*Shape304);

HAnimSegment276->addChildren(*HAnimSite302);

HAnimJoint275->addChildren(*HAnimSegment276);

CHAnimJoint* HAnimJoint305 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint305->setName("r_knee");
HAnimJoint305->setDEF("hanim_r_knee");
HAnimJoint305->setCenter(new float[3]{-0.104,0.4867,0.0308});
HAnimJoint305->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint305->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment306 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment306->setName("r_calf");
HAnimSegment306->setDEF("hanim_r_calf");
//Visualization sphere for <HAnimJoint name='r_knee'/> is placed within <HAnimSegment name='r_calf'/>
CTouchSensor* TouchSensor307 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor307->setDescription("HAnimJoint r_knee, HAnimSegment r_calf");
HAnimSegment306->addChildren(*TouchSensor307);

CTransform* Transform308 = (CTransform *)(m_pScene.createNode("Transform"));
Transform308->setTranslation(new float[3]{-0.104,0.4867,0.0308});
CShape* Shape309 = (CShape *)(m_pScene.createNode("Shape"));
Shape309->setUSE("HAnimJointShape");
Transform308->addChildren(*Shape309);

HAnimSegment306->addChildren(*Transform308);

//HAnimSegment visualization line from current <HAnimJoint name='r_knee'/> to child <HAnimJoint name='r_talocrural'/>
CShape* Shape310 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet311 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet311->setVertexCount(new int[1]{2});
CCoordinate* Coordinate312 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate312->setPoint(new float[6]{-0.104,0.4867,0.0308,-0.1101,0.0656,-0.0736});
LineSet311->setCoord(*Coordinate312);

CColorRGBA* ColorRGBA313 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA313->setUSE("HAnimSegmentLineColorRGBA");
LineSet311->setColor(*ColorRGBA313);

Shape310->setGeometry(LineSet311);

HAnimSegment306->addChildren(*Shape310);

HAnimJoint305->addChildren(*HAnimSegment306);

CHAnimJoint* HAnimJoint314 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint314->setName("r_talocrural");
HAnimJoint314->setDEF("hanim_r_talocrural");
HAnimJoint314->setCenter(new float[3]{-0.1101,0.0656,-0.0736});
HAnimJoint314->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint314->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment315 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment315->setName("r_talus");
HAnimSegment315->setDEF("hanim_r_talus");
//Visualization sphere for <HAnimJoint name='r_talocrural'/> is placed within <HAnimSegment name='r_talus'/>
CTouchSensor* TouchSensor316 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor316->setDescription("HAnimJoint r_talocrural, HAnimSegment r_talus");
HAnimSegment315->addChildren(*TouchSensor316);

CTransform* Transform317 = (CTransform *)(m_pScene.createNode("Transform"));
Transform317->setTranslation(new float[3]{-0.1101,0.0656,-0.0736});
CShape* Shape318 = (CShape *)(m_pScene.createNode("Shape"));
Shape318->setUSE("HAnimJointShape");
Transform317->addChildren(*Shape318);

HAnimSegment315->addChildren(*Transform317);

//HAnimSegment visualization line from current <HAnimJoint name='r_talocrural'/> to child <HAnimJoint name='r_tarsometatarsal_2'/>
CShape* Shape319 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet320 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet320->setVertexCount(new int[1]{2});
CCoordinate* Coordinate321 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate321->setPoint(new float[6]{-0.1101,0.0656,-0.0736,-0.1086,0.0001,-0.0368});
LineSet320->setCoord(*Coordinate321);

CColorRGBA* ColorRGBA322 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA322->setUSE("HAnimSegmentLineColorRGBA");
LineSet320->setColor(*ColorRGBA322);

Shape319->setGeometry(LineSet320);

HAnimSegment315->addChildren(*Shape319);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_talocrural'/> to <HAnimSite name='r_lateral_malleolus_pt'/>
CShape* Shape323 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet324 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet324->setVertexCount(new int[1]{2});
CCoordinate* Coordinate325 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate325->setPoint(new float[6]{-0.1101,0.0656,-0.0736,-0.1006,0.0658,-0.1075});
LineSet324->setCoord(*Coordinate325);

CColorRGBA* ColorRGBA326 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA326->setUSE("HAnimSiteLineColorRGBA");
LineSet324->setColor(*ColorRGBA326);

Shape323->setGeometry(LineSet324);

HAnimSegment315->addChildren(*Shape323);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_talocrural'/> to <HAnimSite name='r_medial_malleolus_pt'/>
CShape* Shape327 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet328 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet328->setVertexCount(new int[1]{2});
CCoordinate* Coordinate329 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate329->setPoint(new float[6]{-0.1101,0.0656,-0.0736,-0.0591,0.076,-0.0928});
LineSet328->setCoord(*Coordinate329);

CColorRGBA* ColorRGBA330 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA330->setUSE("HAnimSiteLineColorRGBA");
LineSet328->setColor(*ColorRGBA330);

Shape327->setGeometry(LineSet328);

HAnimSegment315->addChildren(*Shape327);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_talocrural'/> to <HAnimSite name='r_sphyrion_pt'/>
CShape* Shape331 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet332 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet332->setVertexCount(new int[1]{2});
CCoordinate* Coordinate333 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate333->setPoint(new float[6]{-0.1101,0.0656,-0.0736,-0.0603,0.061,-0.1002});
LineSet332->setCoord(*Coordinate333);

CColorRGBA* ColorRGBA334 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA334->setUSE("HAnimSiteLineColorRGBA");
LineSet332->setColor(*ColorRGBA334);

Shape331->setGeometry(LineSet332);

HAnimSegment315->addChildren(*Shape331);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_talocrural'/> to <HAnimSite name='r_calcaneous_post_pt'/>
CShape* Shape335 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet336 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet336->setVertexCount(new int[1]{2});
CCoordinate* Coordinate337 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate337->setPoint(new float[6]{-0.1101,0.0656,-0.0736,-0.0692,0.0297,-0.1221});
LineSet336->setCoord(*Coordinate337);

CColorRGBA* ColorRGBA338 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA338->setUSE("HAnimSiteLineColorRGBA");
LineSet336->setColor(*ColorRGBA338);

Shape335->setGeometry(LineSet336);

HAnimSegment315->addChildren(*Shape335);

CHAnimSite* HAnimSite339 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite339->setName("r_lateral_malleolus_pt");
HAnimSite339->setDEF("hanim_r_lateral_malleolus_pt");
HAnimSite339->setTranslation(new float[3]{-0.1006,0.0658,-0.1075});
//HAnimSite visualization shape
CTouchSensor* TouchSensor340 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor340->setDescription("HAnimSite r_lateral_malleolus_pt");
HAnimSite339->addChildren(*TouchSensor340);

CShape* Shape341 = (CShape *)(m_pScene.createNode("Shape"));
Shape341->setUSE("HAnimSiteShape");
HAnimSite339->addChildren(*Shape341);

HAnimSegment315->addChildren(*HAnimSite339);

CHAnimSite* HAnimSite342 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite342->setName("r_medial_malleolus_pt");
HAnimSite342->setDEF("hanim_r_medial_malleolus_pt");
HAnimSite342->setTranslation(new float[3]{-0.0591,0.076,-0.0928});
//HAnimSite visualization shape
CTouchSensor* TouchSensor343 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor343->setDescription("HAnimSite r_medial_malleolus_pt");
HAnimSite342->addChildren(*TouchSensor343);

CShape* Shape344 = (CShape *)(m_pScene.createNode("Shape"));
Shape344->setUSE("HAnimSiteShape");
HAnimSite342->addChildren(*Shape344);

HAnimSegment315->addChildren(*HAnimSite342);

CHAnimSite* HAnimSite345 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite345->setName("r_sphyrion_pt");
HAnimSite345->setDEF("hanim_r_sphyrion_pt");
HAnimSite345->setTranslation(new float[3]{-0.0603,0.061,-0.1002});
//HAnimSite visualization shape
CTouchSensor* TouchSensor346 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor346->setDescription("HAnimSite r_sphyrion_pt");
HAnimSite345->addChildren(*TouchSensor346);

CShape* Shape347 = (CShape *)(m_pScene.createNode("Shape"));
Shape347->setUSE("HAnimSiteShape");
HAnimSite345->addChildren(*Shape347);

HAnimSegment315->addChildren(*HAnimSite345);

CHAnimSite* HAnimSite348 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite348->setName("r_calcaneus_posterior_pt");
HAnimSite348->setDEF("hanim_r_calcaneus_posterior_pt");
HAnimSite348->setTranslation(new float[3]{-0.0692,0.0297,-0.1221});
//HAnimSite visualization shape
CTouchSensor* TouchSensor349 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor349->setDescription("HAnimSite r_calcaneous_post_pt");
HAnimSite348->addChildren(*TouchSensor349);

CShape* Shape350 = (CShape *)(m_pScene.createNode("Shape"));
Shape350->setUSE("HAnimSiteShape");
HAnimSite348->addChildren(*Shape350);

HAnimSegment315->addChildren(*HAnimSite348);

HAnimJoint314->addChildren(*HAnimSegment315);

CHAnimJoint* HAnimJoint351 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint351->setName("r_tarsometatarsal_2");
HAnimJoint351->setDEF("hanim_r_tarsometatarsal_2");
HAnimJoint351->setCenter(new float[3]{-0.1086,0.0001,-0.0368});
HAnimJoint351->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint351->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment352 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment352->setName("r_metatarsal_2");
HAnimSegment352->setDEF("hanim_r_metatarsal_2");
//Visualization sphere for <HAnimJoint name='r_tarsometatarsal_2'/> is placed within <HAnimSegment name='r_metatarsal_2'/>
CTouchSensor* TouchSensor353 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor353->setDescription("HAnimJoint r_tarsometatarsal_2, HAnimSegment r_metatarsal_2");
HAnimSegment352->addChildren(*TouchSensor353);

CTransform* Transform354 = (CTransform *)(m_pScene.createNode("Transform"));
Transform354->setTranslation(new float[3]{-0.1086,0.0001,-0.0368});
CShape* Shape355 = (CShape *)(m_pScene.createNode("Shape"));
Shape355->setUSE("HAnimJointShape");
Transform354->addChildren(*Shape355);

HAnimSegment352->addChildren(*Transform354);

//HAnimSegment visualization line from current <HAnimJoint name='r_tarsometatarsal_2'/> to child <HAnimJoint name='r_metatarsophalangeal_2'/>
CShape* Shape356 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet357 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet357->setVertexCount(new int[1]{2});
CCoordinate* Coordinate358 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate358->setPoint(new float[6]{-0.1086,0.0001,-0.0368,-0.1086,0.0001,0.0368});
LineSet357->setCoord(*Coordinate358);

CColorRGBA* ColorRGBA359 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA359->setUSE("HAnimSegmentLineColorRGBA");
LineSet357->setColor(*ColorRGBA359);

Shape356->setGeometry(LineSet357);

HAnimSegment352->addChildren(*Shape356);

HAnimJoint351->addChildren(*HAnimSegment352);

CHAnimJoint* HAnimJoint360 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint360->setName("r_metatarsophalangeal_2");
HAnimJoint360->setDEF("hanim_r_metatarsophalangeal_2");
HAnimJoint360->setCenter(new float[3]{-0.1086,0.0001,0.0368});
HAnimJoint360->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint360->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment361 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment361->setName("r_tarsal_proximal_phalanx_2");
HAnimSegment361->setDEF("hanim_r_tarsal_proximal_phalanx_2");
//Visualization sphere for <HAnimJoint name='r_metatarsophalangeal_2'/> is placed within <HAnimSegment name='r_tarsal_proximal_phalanx_2'/>
CTouchSensor* TouchSensor362 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor362->setDescription("HAnimJoint r_metatarsophalangeal_2, HAnimSegment r_tarsal_proximal_phalanx_2");
HAnimSegment361->addChildren(*TouchSensor362);

CTransform* Transform363 = (CTransform *)(m_pScene.createNode("Transform"));
Transform363->setTranslation(new float[3]{-0.1086,0.0001,0.0368});
CShape* Shape364 = (CShape *)(m_pScene.createNode("Shape"));
Shape364->setUSE("HAnimJointShape");
Transform363->addChildren(*Shape364);

HAnimSegment361->addChildren(*Transform363);

//HAnimSegment visualization line from current <HAnimJoint name='r_metatarsophalangeal_2'/> to child <HAnimJoint name='r_tarsal_distal_interphalangeal_2'/>
CShape* Shape365 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet366 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet366->setVertexCount(new int[1]{2});
CCoordinate* Coordinate367 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate367->setPoint(new float[6]{-0.1086,0.0001,0.0368,-0.1086,0,0.0762});
LineSet366->setCoord(*Coordinate367);

CColorRGBA* ColorRGBA368 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA368->setUSE("HAnimSegmentLineColorRGBA");
LineSet366->setColor(*ColorRGBA368);

Shape365->setGeometry(LineSet366);

HAnimSegment361->addChildren(*Shape365);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsophalangeal_2'/> to <HAnimSite name='r_metatarsal_pha1_pt'/>
CShape* Shape369 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet370 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet370->setVertexCount(new int[1]{2});
CCoordinate* Coordinate371 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate371->setPoint(new float[6]{-0.1086,0.0001,0.0368,-0.0521,0.026,0.0127});
LineSet370->setCoord(*Coordinate371);

CColorRGBA* ColorRGBA372 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA372->setUSE("HAnimSiteLineColorRGBA");
LineSet370->setColor(*ColorRGBA372);

Shape369->setGeometry(LineSet370);

HAnimSegment361->addChildren(*Shape369);

CHAnimSite* HAnimSite373 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite373->setName("r_metatarsal_phalanx_1_pt");
HAnimSite373->setDEF("hanim_r_metatarsal_phalanx_1_pt");
HAnimSite373->setTranslation(new float[3]{-0.0521,0.026,0.0127});
//HAnimSite visualization shape
CTouchSensor* TouchSensor374 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor374->setDescription("HAnimSite r_metatarsal_pha1_pt");
HAnimSite373->addChildren(*TouchSensor374);

CShape* Shape375 = (CShape *)(m_pScene.createNode("Shape"));
Shape375->setUSE("HAnimSiteShape");
HAnimSite373->addChildren(*Shape375);

HAnimSegment361->addChildren(*HAnimSite373);

HAnimJoint360->addChildren(*HAnimSegment361);

CHAnimJoint* HAnimJoint376 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint376->setName("r_tarsal_distal_interphalangeal_2");
HAnimJoint376->setDEF("hanim_r_tarsal_distal_interphalangeal_2");
HAnimJoint376->setCenter(new float[3]{-0.1086,0,0.0762});
HAnimJoint376->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint376->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment377 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment377->setName("r_tarsal_distal_phalanx_2");
HAnimSegment377->setDEF("hanim_r_tarsal_distal_phalanx_2");
//Visualization sphere for <HAnimJoint name='r_tarsal_distal_interphalangeal_2'/> is placed within <HAnimSegment name='r_tarsal_distal_phalanx_2'/>
CTouchSensor* TouchSensor378 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor378->setDescription("HAnimJoint r_tarsal_distal_interphalangeal_2, HAnimSegment r_tarsal_distal_phalanx_2");
HAnimSegment377->addChildren(*TouchSensor378);

CTransform* Transform379 = (CTransform *)(m_pScene.createNode("Transform"));
Transform379->setTranslation(new float[3]{-0.1086,0,0.0762});
CShape* Shape380 = (CShape *)(m_pScene.createNode("Shape"));
Shape380->setUSE("HAnimJointShape");
Transform379->addChildren(*Shape380);

HAnimSegment377->addChildren(*Transform379);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='r_forefoot_tip'/>
CShape* Shape381 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet382 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet382->setVertexCount(new int[1]{2});
CCoordinate* Coordinate383 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate383->setPoint(new float[6]{-0.1086,0,0.0762,-0.1043,0.0227,0.145});
LineSet382->setCoord(*Coordinate383);

CColorRGBA* ColorRGBA384 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA384->setUSE("HAnimSiteLineColorRGBA");
LineSet382->setColor(*ColorRGBA384);

Shape381->setGeometry(LineSet382);

HAnimSegment377->addChildren(*Shape381);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='r_metatarsal_pha5_pt'/>
CShape* Shape385 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet386 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet386->setVertexCount(new int[1]{2});
CCoordinate* Coordinate387 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate387->setPoint(new float[6]{-0.1086,0,0.0762,-0.1523,0.0166,0.0895});
LineSet386->setCoord(*Coordinate387);

CColorRGBA* ColorRGBA388 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA388->setUSE("HAnimSiteLineColorRGBA");
LineSet386->setColor(*ColorRGBA388);

Shape385->setGeometry(LineSet386);

HAnimSegment377->addChildren(*Shape385);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='r_digit2_pt'/>
CShape* Shape389 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet390 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet390->setVertexCount(new int[1]{2});
CCoordinate* Coordinate391 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate391->setPoint(new float[6]{-0.1086,0,0.0762,-0.0883,0.0134,0.1383});
LineSet390->setCoord(*Coordinate391);

CColorRGBA* ColorRGBA392 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA392->setUSE("HAnimSiteLineColorRGBA");
LineSet390->setColor(*ColorRGBA392);

Shape389->setGeometry(LineSet390);

HAnimSegment377->addChildren(*Shape389);

CHAnimSite* HAnimSite393 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite393->setName("r_forefoot_tip_pt");
HAnimSite393->setDEF("hanim_r_forefoot_tip_pt");
HAnimSite393->setTranslation(new float[3]{-0.1043,0.0227,0.145});
//HAnimSite visualization shape
CTouchSensor* TouchSensor394 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor394->setDescription("HAnimSite r_forefoot_tip");
HAnimSite393->addChildren(*TouchSensor394);

CShape* Shape395 = (CShape *)(m_pScene.createNode("Shape"));
Shape395->setUSE("HAnimSiteShape");
HAnimSite393->addChildren(*Shape395);

HAnimSegment377->addChildren(*HAnimSite393);

CHAnimSite* HAnimSite396 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite396->setName("r_metatarsal_phalanx_5_pt");
HAnimSite396->setDEF("hanim_r_metatarsal_phalanx_5_pt");
HAnimSite396->setTranslation(new float[3]{-0.1523,0.0166,0.0895});
//HAnimSite visualization shape
CTouchSensor* TouchSensor397 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor397->setDescription("HAnimSite r_metatarsal_pha5_pt");
HAnimSite396->addChildren(*TouchSensor397);

CShape* Shape398 = (CShape *)(m_pScene.createNode("Shape"));
Shape398->setUSE("HAnimSiteShape");
HAnimSite396->addChildren(*Shape398);

HAnimSegment377->addChildren(*HAnimSite396);

CHAnimSite* HAnimSite399 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite399->setName("r_tarsal_distal_phalanx_2_pt");
HAnimSite399->setDEF("hanim_r_tarsal_distal_phalanx_2_pt");
HAnimSite399->setTranslation(new float[3]{-0.0883,0.0134,0.1383});
//HAnimSite visualization shape
CTouchSensor* TouchSensor400 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor400->setDescription("HAnimSite r_digit2_pt");
HAnimSite399->addChildren(*TouchSensor400);

CShape* Shape401 = (CShape *)(m_pScene.createNode("Shape"));
Shape401->setUSE("HAnimSiteShape");
HAnimSite399->addChildren(*Shape401);

HAnimSegment377->addChildren(*HAnimSite399);

HAnimJoint376->addChildren(*HAnimSegment377);

HAnimJoint360->addChildren(*HAnimJoint376);

HAnimJoint351->addChildren(*HAnimJoint360);

HAnimJoint314->addChildren(*HAnimJoint351);

HAnimJoint305->addChildren(*HAnimJoint314);

HAnimJoint275->addChildren(*HAnimJoint305);

HAnimJoint68->addChildren(*HAnimJoint275);

HAnimJoint52->addChildren(*HAnimJoint68);

CHAnimJoint* HAnimJoint402 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint402->setName("vl5");
HAnimJoint402->setDEF("hanim_vl5");
HAnimJoint402->setCenter(new float[3]{0.0028,1.0568,-0.0776});
HAnimJoint402->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint402->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment403 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment403->setName("l5");
HAnimSegment403->setDEF("hanim_l5");
//Visualization sphere for <HAnimJoint name='vl5'/> is placed within <HAnimSegment name='l5'/>
CTouchSensor* TouchSensor404 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor404->setDescription("HAnimJoint vl5, HAnimSegment l5");
HAnimSegment403->addChildren(*TouchSensor404);

CTransform* Transform405 = (CTransform *)(m_pScene.createNode("Transform"));
Transform405->setTranslation(new float[3]{0.0028,1.0568,-0.0776});
CShape* Shape406 = (CShape *)(m_pScene.createNode("Shape"));
Shape406->setUSE("HAnimJointShape");
Transform405->addChildren(*Shape406);

HAnimSegment403->addChildren(*Transform405);

//HAnimSegment visualization line from current <HAnimJoint name='vl5'/> to child <HAnimJoint name='vl4'/>
CShape* Shape407 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet408 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet408->setVertexCount(new int[1]{2});
CCoordinate* Coordinate409 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate409->setPoint(new float[6]{0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787});
LineSet408->setCoord(*Coordinate409);

CColorRGBA* ColorRGBA410 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA410->setUSE("HAnimSegmentLineColorRGBA");
LineSet408->setColor(*ColorRGBA410);

Shape407->setGeometry(LineSet408);

HAnimSegment403->addChildren(*Shape407);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='waist_preferred_post_pt'/>
CShape* Shape411 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet412 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet412->setVertexCount(new int[1]{2});
CCoordinate* Coordinate413 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate413->setPoint(new float[6]{0.0028,1.0568,-0.0776,0,1.0915,-0.1091});
LineSet412->setCoord(*Coordinate413);

CColorRGBA* ColorRGBA414 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA414->setUSE("HAnimSiteLineColorRGBA");
LineSet412->setColor(*ColorRGBA414);

Shape411->setGeometry(LineSet412);

HAnimSegment403->addChildren(*Shape411);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='navel_pt'/>
CShape* Shape415 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet416 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet416->setVertexCount(new int[1]{2});
CCoordinate* Coordinate417 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate417->setPoint(new float[6]{0.0028,1.0568,-0.0776,0.0069,1.0966,0.1017});
LineSet416->setCoord(*Coordinate417);

CColorRGBA* ColorRGBA418 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA418->setUSE("HAnimSiteLineColorRGBA");
LineSet416->setColor(*ColorRGBA418);

Shape415->setGeometry(LineSet416);

HAnimSegment403->addChildren(*Shape415);

CHAnimSite* HAnimSite419 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite419->setName("waist_preferred_posterior_pt");
HAnimSite419->setDEF("hanim_waist_preferred_posterior_pt");
HAnimSite419->setTranslation(new float[3]{0,1.0915,-0.1091});
//HAnimSite visualization shape
CTouchSensor* TouchSensor420 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor420->setDescription("HAnimSite waist_preferred_post_pt");
HAnimSite419->addChildren(*TouchSensor420);

CShape* Shape421 = (CShape *)(m_pScene.createNode("Shape"));
Shape421->setUSE("HAnimSiteShape");
HAnimSite419->addChildren(*Shape421);

HAnimSegment403->addChildren(*HAnimSite419);

CHAnimSite* HAnimSite422 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite422->setName("navel_pt");
HAnimSite422->setDEF("hanim_navel_pt");
HAnimSite422->setTranslation(new float[3]{0.0069,1.0966,0.1017});
//HAnimSite visualization shape
CTouchSensor* TouchSensor423 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor423->setDescription("HAnimSite navel_pt");
HAnimSite422->addChildren(*TouchSensor423);

CShape* Shape424 = (CShape *)(m_pScene.createNode("Shape"));
Shape424->setUSE("HAnimSiteShape");
HAnimSite422->addChildren(*Shape424);

HAnimSegment403->addChildren(*HAnimSite422);

HAnimJoint402->addChildren(*HAnimSegment403);

CHAnimJoint* HAnimJoint425 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint425->setName("vl4");
HAnimJoint425->setDEF("hanim_vl4");
HAnimJoint425->setCenter(new float[3]{0.0035,1.0925,-0.0787});
HAnimJoint425->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint425->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment426 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment426->setName("l4");
HAnimSegment426->setDEF("hanim_l4");
//Visualization sphere for <HAnimJoint name='vl4'/> is placed within <HAnimSegment name='l4'/>
CTouchSensor* TouchSensor427 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor427->setDescription("HAnimJoint vl4, HAnimSegment l4");
HAnimSegment426->addChildren(*TouchSensor427);

CTransform* Transform428 = (CTransform *)(m_pScene.createNode("Transform"));
Transform428->setTranslation(new float[3]{0.0035,1.0925,-0.0787});
CShape* Shape429 = (CShape *)(m_pScene.createNode("Shape"));
Shape429->setUSE("HAnimJointShape");
Transform428->addChildren(*Shape429);

HAnimSegment426->addChildren(*Transform428);

//HAnimSegment visualization line from current <HAnimJoint name='vl4'/> to child <HAnimJoint name='vl3'/>
CShape* Shape430 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet431 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet431->setVertexCount(new int[1]{2});
CCoordinate* Coordinate432 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate432->setPoint(new float[6]{0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796});
LineSet431->setCoord(*Coordinate432);

CColorRGBA* ColorRGBA433 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA433->setUSE("HAnimSegmentLineColorRGBA");
LineSet431->setColor(*ColorRGBA433);

Shape430->setGeometry(LineSet431);

HAnimSegment426->addChildren(*Shape430);

HAnimJoint425->addChildren(*HAnimSegment426);

CHAnimJoint* HAnimJoint434 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint434->setName("vl3");
HAnimJoint434->setDEF("hanim_vl3");
HAnimJoint434->setCenter(new float[3]{0.0041,1.1276,-0.0796});
HAnimJoint434->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint434->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment435 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment435->setName("l3");
HAnimSegment435->setDEF("hanim_l3");
//Visualization sphere for <HAnimJoint name='vl3'/> is placed within <HAnimSegment name='l3'/>
CTouchSensor* TouchSensor436 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor436->setDescription("HAnimJoint vl3, HAnimSegment l3");
HAnimSegment435->addChildren(*TouchSensor436);

CTransform* Transform437 = (CTransform *)(m_pScene.createNode("Transform"));
Transform437->setTranslation(new float[3]{0.0041,1.1276,-0.0796});
CShape* Shape438 = (CShape *)(m_pScene.createNode("Shape"));
Shape438->setUSE("HAnimJointShape");
Transform437->addChildren(*Shape438);

HAnimSegment435->addChildren(*Transform437);

//HAnimSegment visualization line from current <HAnimJoint name='vl3'/> to child <HAnimJoint name='vl2'/>
CShape* Shape439 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet440 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet440->setVertexCount(new int[1]{2});
CCoordinate* Coordinate441 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate441->setPoint(new float[6]{0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08});
LineSet440->setCoord(*Coordinate441);

CColorRGBA* ColorRGBA442 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA442->setUSE("HAnimSegmentLineColorRGBA");
LineSet440->setColor(*ColorRGBA442);

Shape439->setGeometry(LineSet440);

HAnimSegment435->addChildren(*Shape439);

HAnimJoint434->addChildren(*HAnimSegment435);

CHAnimJoint* HAnimJoint443 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint443->setName("vl2");
HAnimJoint443->setDEF("hanim_vl2");
HAnimJoint443->setCenter(new float[3]{0.0045,1.1546,-0.08});
HAnimJoint443->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint443->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment444 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment444->setName("l2");
HAnimSegment444->setDEF("hanim_l2");
//Visualization sphere for <HAnimJoint name='vl2'/> is placed within <HAnimSegment name='l2'/>
CTouchSensor* TouchSensor445 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor445->setDescription("HAnimJoint vl2, HAnimSegment l2");
HAnimSegment444->addChildren(*TouchSensor445);

CTransform* Transform446 = (CTransform *)(m_pScene.createNode("Transform"));
Transform446->setTranslation(new float[3]{0.0045,1.1546,-0.08});
CShape* Shape447 = (CShape *)(m_pScene.createNode("Shape"));
Shape447->setUSE("HAnimJointShape");
Transform446->addChildren(*Shape447);

HAnimSegment444->addChildren(*Transform446);

//HAnimSegment visualization line from current <HAnimJoint name='vl2'/> to child <HAnimJoint name='vl1'/>
CShape* Shape448 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet449 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet449->setVertexCount(new int[1]{2});
CCoordinate* Coordinate450 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate450->setPoint(new float[6]{0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805});
LineSet449->setCoord(*Coordinate450);

CColorRGBA* ColorRGBA451 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA451->setUSE("HAnimSegmentLineColorRGBA");
LineSet449->setColor(*ColorRGBA451);

Shape448->setGeometry(LineSet449);

HAnimSegment444->addChildren(*Shape448);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='r_rib10_pt'/>
CShape* Shape452 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet453 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet453->setVertexCount(new int[1]{2});
CCoordinate* Coordinate454 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate454->setPoint(new float[6]{0.0045,1.1546,-0.08,-0.0711,1.1941,0.1016});
LineSet453->setCoord(*Coordinate454);

CColorRGBA* ColorRGBA455 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA455->setUSE("HAnimSiteLineColorRGBA");
LineSet453->setColor(*ColorRGBA455);

Shape452->setGeometry(LineSet453);

HAnimSegment444->addChildren(*Shape452);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='l_rib10_pt'/>
CShape* Shape456 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet457 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet457->setVertexCount(new int[1]{2});
CCoordinate* Coordinate458 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate458->setPoint(new float[6]{0.0045,1.1546,-0.08,0.0871,1.1925,0.0992});
LineSet457->setCoord(*Coordinate458);

CColorRGBA* ColorRGBA459 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA459->setUSE("HAnimSiteLineColorRGBA");
LineSet457->setColor(*ColorRGBA459);

Shape456->setGeometry(LineSet457);

HAnimSegment444->addChildren(*Shape456);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='rib10_midspine_pt'/>
CShape* Shape460 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet461 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet461->setVertexCount(new int[1]{2});
CCoordinate* Coordinate462 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate462->setPoint(new float[6]{0.0045,1.1546,-0.08,0.0049,1.1908,-0.1113});
LineSet461->setCoord(*Coordinate462);

CColorRGBA* ColorRGBA463 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA463->setUSE("HAnimSiteLineColorRGBA");
LineSet461->setColor(*ColorRGBA463);

Shape460->setGeometry(LineSet461);

HAnimSegment444->addChildren(*Shape460);

CHAnimSite* HAnimSite464 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite464->setName("r_rib10_pt");
HAnimSite464->setDEF("hanim_r_rib10_pt");
HAnimSite464->setTranslation(new float[3]{-0.0711,1.1941,0.1016});
//HAnimSite visualization shape
CTouchSensor* TouchSensor465 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor465->setDescription("HAnimSite r_rib10_pt");
HAnimSite464->addChildren(*TouchSensor465);

CShape* Shape466 = (CShape *)(m_pScene.createNode("Shape"));
Shape466->setUSE("HAnimSiteShape");
HAnimSite464->addChildren(*Shape466);

HAnimSegment444->addChildren(*HAnimSite464);

CHAnimSite* HAnimSite467 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite467->setName("l_rib10_pt");
HAnimSite467->setDEF("hanim_l_rib10_pt");
HAnimSite467->setTranslation(new float[3]{0.0871,1.1925,0.0992});
//HAnimSite visualization shape
CTouchSensor* TouchSensor468 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor468->setDescription("HAnimSite l_rib10_pt");
HAnimSite467->addChildren(*TouchSensor468);

CShape* Shape469 = (CShape *)(m_pScene.createNode("Shape"));
Shape469->setUSE("HAnimSiteShape");
HAnimSite467->addChildren(*Shape469);

HAnimSegment444->addChildren(*HAnimSite467);

CHAnimSite* HAnimSite470 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite470->setName("rib10_midspine_pt");
HAnimSite470->setDEF("hanim_rib10_midspine_pt");
HAnimSite470->setTranslation(new float[3]{0.0049,1.1908,-0.1113});
//HAnimSite visualization shape
CTouchSensor* TouchSensor471 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor471->setDescription("HAnimSite rib10_midspine_pt");
HAnimSite470->addChildren(*TouchSensor471);

CShape* Shape472 = (CShape *)(m_pScene.createNode("Shape"));
Shape472->setUSE("HAnimSiteShape");
HAnimSite470->addChildren(*Shape472);

HAnimSegment444->addChildren(*HAnimSite470);

HAnimJoint443->addChildren(*HAnimSegment444);

CHAnimJoint* HAnimJoint473 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint473->setName("vl1");
HAnimJoint473->setDEF("hanim_vl1");
HAnimJoint473->setCenter(new float[3]{0.0048,1.1912,-0.0805});
HAnimJoint473->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint473->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment474 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment474->setName("l1");
HAnimSegment474->setDEF("hanim_l1");
//Visualization sphere for <HAnimJoint name='vl1'/> is placed within <HAnimSegment name='l1'/>
CTouchSensor* TouchSensor475 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor475->setDescription("HAnimJoint vl1, HAnimSegment l1");
HAnimSegment474->addChildren(*TouchSensor475);

CTransform* Transform476 = (CTransform *)(m_pScene.createNode("Transform"));
Transform476->setTranslation(new float[3]{0.0048,1.1912,-0.0805});
CShape* Shape477 = (CShape *)(m_pScene.createNode("Shape"));
Shape477->setUSE("HAnimJointShape");
Transform476->addChildren(*Shape477);

HAnimSegment474->addChildren(*Transform476);

//HAnimSegment visualization line from current <HAnimJoint name='vl1'/> to child <HAnimJoint name='vt12'/>
CShape* Shape478 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet479 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet479->setVertexCount(new int[1]{2});
CCoordinate* Coordinate480 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate480->setPoint(new float[6]{0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808});
LineSet479->setCoord(*Coordinate480);

CColorRGBA* ColorRGBA481 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA481->setUSE("HAnimSegmentLineColorRGBA");
LineSet479->setColor(*ColorRGBA481);

Shape478->setGeometry(LineSet479);

HAnimSegment474->addChildren(*Shape478);

HAnimJoint473->addChildren(*HAnimSegment474);

CHAnimJoint* HAnimJoint482 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint482->setName("vt12");
HAnimJoint482->setDEF("hanim_vt12");
HAnimJoint482->setCenter(new float[3]{0.0051,1.2278,-0.0808});
HAnimJoint482->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint482->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment483 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment483->setName("t12");
HAnimSegment483->setDEF("hanim_t12");
//Visualization sphere for <HAnimJoint name='vt12'/> is placed within <HAnimSegment name='t12'/>
CTouchSensor* TouchSensor484 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor484->setDescription("HAnimJoint vt12, HAnimSegment t12");
HAnimSegment483->addChildren(*TouchSensor484);

CTransform* Transform485 = (CTransform *)(m_pScene.createNode("Transform"));
Transform485->setTranslation(new float[3]{0.0051,1.2278,-0.0808});
CShape* Shape486 = (CShape *)(m_pScene.createNode("Shape"));
Shape486->setUSE("HAnimJointShape");
Transform485->addChildren(*Shape486);

HAnimSegment483->addChildren(*Transform485);

//HAnimSegment visualization line from current <HAnimJoint name='vt12'/> to child <HAnimJoint name='vt11'/>
CShape* Shape487 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet488 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet488->setVertexCount(new int[1]{2});
CCoordinate* Coordinate489 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate489->setPoint(new float[6]{0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081});
LineSet488->setCoord(*Coordinate489);

CColorRGBA* ColorRGBA490 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA490->setUSE("HAnimSegmentLineColorRGBA");
LineSet488->setColor(*ColorRGBA490);

Shape487->setGeometry(LineSet488);

HAnimSegment483->addChildren(*Shape487);

HAnimJoint482->addChildren(*HAnimSegment483);

CHAnimJoint* HAnimJoint491 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint491->setName("vt11");
HAnimJoint491->setDEF("hanim_vt11");
HAnimJoint491->setCenter(new float[3]{0.0053,1.2679,-0.081});
HAnimJoint491->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint491->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment492 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment492->setName("t11");
HAnimSegment492->setDEF("hanim_t11");
//Visualization sphere for <HAnimJoint name='vt11'/> is placed within <HAnimSegment name='t11'/>
CTouchSensor* TouchSensor493 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor493->setDescription("HAnimJoint vt11, HAnimSegment t11");
HAnimSegment492->addChildren(*TouchSensor493);

CTransform* Transform494 = (CTransform *)(m_pScene.createNode("Transform"));
Transform494->setTranslation(new float[3]{0.0053,1.2679,-0.081});
CShape* Shape495 = (CShape *)(m_pScene.createNode("Shape"));
Shape495->setUSE("HAnimJointShape");
Transform494->addChildren(*Shape495);

HAnimSegment492->addChildren(*Transform494);

//HAnimSegment visualization line from current <HAnimJoint name='vt11'/> to child <HAnimJoint name='vt10'/>
CShape* Shape496 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet497 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet497->setVertexCount(new int[1]{2});
CCoordinate* Coordinate498 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate498->setPoint(new float[6]{0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822});
LineSet497->setCoord(*Coordinate498);

CColorRGBA* ColorRGBA499 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA499->setUSE("HAnimSegmentLineColorRGBA");
LineSet497->setColor(*ColorRGBA499);

Shape496->setGeometry(LineSet497);

HAnimSegment492->addChildren(*Shape496);

HAnimJoint491->addChildren(*HAnimSegment492);

CHAnimJoint* HAnimJoint500 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint500->setName("vt10");
HAnimJoint500->setDEF("hanim_vt10");
HAnimJoint500->setCenter(new float[3]{0.0056,1.2848,-0.0822});
HAnimJoint500->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint500->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment501 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment501->setName("t10");
HAnimSegment501->setDEF("hanim_t10");
//Visualization sphere for <HAnimJoint name='vt10'/> is placed within <HAnimSegment name='t10'/>
CTouchSensor* TouchSensor502 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor502->setDescription("HAnimJoint vt10, HAnimSegment t10");
HAnimSegment501->addChildren(*TouchSensor502);

CTransform* Transform503 = (CTransform *)(m_pScene.createNode("Transform"));
Transform503->setTranslation(new float[3]{0.0056,1.2848,-0.0822});
CShape* Shape504 = (CShape *)(m_pScene.createNode("Shape"));
Shape504->setUSE("HAnimJointShape");
Transform503->addChildren(*Shape504);

HAnimSegment501->addChildren(*Transform503);

//HAnimSegment visualization line from current <HAnimJoint name='vt10'/> to child <HAnimJoint name='vt9'/>
CShape* Shape505 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet506 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet506->setVertexCount(new int[1]{2});
CCoordinate* Coordinate507 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate507->setPoint(new float[6]{0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838});
LineSet506->setCoord(*Coordinate507);

CColorRGBA* ColorRGBA508 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA508->setUSE("HAnimSegmentLineColorRGBA");
LineSet506->setColor(*ColorRGBA508);

Shape505->setGeometry(LineSet506);

HAnimSegment501->addChildren(*Shape505);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt10'/> to <HAnimSite name='substernale_pt'/>
CShape* Shape509 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet510 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet510->setVertexCount(new int[1]{2});
CCoordinate* Coordinate511 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate511->setPoint(new float[6]{0.0056,1.2848,-0.0822,0.0085,1.2995,0.1147});
LineSet510->setCoord(*Coordinate511);

CColorRGBA* ColorRGBA512 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA512->setUSE("HAnimSiteLineColorRGBA");
LineSet510->setColor(*ColorRGBA512);

Shape509->setGeometry(LineSet510);

HAnimSegment501->addChildren(*Shape509);

CHAnimSite* HAnimSite513 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite513->setName("substernale_pt");
HAnimSite513->setDEF("hanim_substernale_pt");
HAnimSite513->setTranslation(new float[3]{0.0085,1.2995,0.1147});
//HAnimSite visualization shape
CTouchSensor* TouchSensor514 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor514->setDescription("HAnimSite substernale_pt");
HAnimSite513->addChildren(*TouchSensor514);

CShape* Shape515 = (CShape *)(m_pScene.createNode("Shape"));
Shape515->setUSE("HAnimSiteShape");
HAnimSite513->addChildren(*Shape515);

HAnimSegment501->addChildren(*HAnimSite513);

HAnimJoint500->addChildren(*HAnimSegment501);

CHAnimJoint* HAnimJoint516 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint516->setName("vt9");
HAnimJoint516->setDEF("hanim_vt9");
HAnimJoint516->setCenter(new float[3]{0.0057,1.3126,-0.0838});
HAnimJoint516->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint516->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment517 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment517->setName("t9");
HAnimSegment517->setDEF("hanim_t9");
//Visualization sphere for <HAnimJoint name='vt9'/> is placed within <HAnimSegment name='t9'/>
CTouchSensor* TouchSensor518 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor518->setDescription("HAnimJoint vt9, HAnimSegment t9");
HAnimSegment517->addChildren(*TouchSensor518);

CTransform* Transform519 = (CTransform *)(m_pScene.createNode("Transform"));
Transform519->setTranslation(new float[3]{0.0057,1.3126,-0.0838});
CShape* Shape520 = (CShape *)(m_pScene.createNode("Shape"));
Shape520->setUSE("HAnimJointShape");
Transform519->addChildren(*Shape520);

HAnimSegment517->addChildren(*Transform519);

//HAnimSegment visualization line from current <HAnimJoint name='vt9'/> to child <HAnimJoint name='vt8'/>
CShape* Shape521 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet522 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet522->setVertexCount(new int[1]{2});
CCoordinate* Coordinate523 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate523->setPoint(new float[6]{0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845});
LineSet522->setCoord(*Coordinate523);

CColorRGBA* ColorRGBA524 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA524->setUSE("HAnimSegmentLineColorRGBA");
LineSet522->setColor(*ColorRGBA524);

Shape521->setGeometry(LineSet522);

HAnimSegment517->addChildren(*Shape521);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='r_thelion_pt'/>
CShape* Shape525 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet526 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet526->setVertexCount(new int[1]{2});
CCoordinate* Coordinate527 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate527->setPoint(new float[6]{0.0057,1.3126,-0.0838,-0.0736,1.3385,0.1217});
LineSet526->setCoord(*Coordinate527);

CColorRGBA* ColorRGBA528 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA528->setUSE("HAnimSiteLineColorRGBA");
LineSet526->setColor(*ColorRGBA528);

Shape525->setGeometry(LineSet526);

HAnimSegment517->addChildren(*Shape525);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='l_thelion_pt'/>
CShape* Shape529 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet530 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet530->setVertexCount(new int[1]{2});
CCoordinate* Coordinate531 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate531->setPoint(new float[6]{0.0057,1.3126,-0.0838,0.0918,1.3382,0.1192});
LineSet530->setCoord(*Coordinate531);

CColorRGBA* ColorRGBA532 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA532->setUSE("HAnimSiteLineColorRGBA");
LineSet530->setColor(*ColorRGBA532);

Shape529->setGeometry(LineSet530);

HAnimSegment517->addChildren(*Shape529);

CHAnimSite* HAnimSite533 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite533->setName("r_thelion_pt");
HAnimSite533->setDEF("hanim_r_thelion_pt");
HAnimSite533->setTranslation(new float[3]{-0.0736,1.3385,0.1217});
//HAnimSite visualization shape
CTouchSensor* TouchSensor534 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor534->setDescription("HAnimSite r_thelion_pt");
HAnimSite533->addChildren(*TouchSensor534);

CShape* Shape535 = (CShape *)(m_pScene.createNode("Shape"));
Shape535->setUSE("HAnimSiteShape");
HAnimSite533->addChildren(*Shape535);

HAnimSegment517->addChildren(*HAnimSite533);

CHAnimSite* HAnimSite536 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite536->setName("l_thelion_pt");
HAnimSite536->setDEF("hanim_l_thelion_pt");
HAnimSite536->setTranslation(new float[3]{0.0918,1.3382,0.1192});
//HAnimSite visualization shape
CTouchSensor* TouchSensor537 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor537->setDescription("HAnimSite l_thelion_pt");
HAnimSite536->addChildren(*TouchSensor537);

CShape* Shape538 = (CShape *)(m_pScene.createNode("Shape"));
Shape538->setUSE("HAnimSiteShape");
HAnimSite536->addChildren(*Shape538);

HAnimSegment517->addChildren(*HAnimSite536);

HAnimJoint516->addChildren(*HAnimSegment517);

CHAnimJoint* HAnimJoint539 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint539->setName("vt8");
HAnimJoint539->setDEF("hanim_vt8");
HAnimJoint539->setCenter(new float[3]{0.0057,1.3382,-0.0845});
HAnimJoint539->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint539->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment540 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment540->setName("t8");
HAnimSegment540->setDEF("hanim_t8");
//Visualization sphere for <HAnimJoint name='vt8'/> is placed within <HAnimSegment name='t8'/>
CTouchSensor* TouchSensor541 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor541->setDescription("HAnimJoint vt8, HAnimSegment t8");
HAnimSegment540->addChildren(*TouchSensor541);

CTransform* Transform542 = (CTransform *)(m_pScene.createNode("Transform"));
Transform542->setTranslation(new float[3]{0.0057,1.3382,-0.0845});
CShape* Shape543 = (CShape *)(m_pScene.createNode("Shape"));
Shape543->setUSE("HAnimJointShape");
Transform542->addChildren(*Shape543);

HAnimSegment540->addChildren(*Transform542);

//HAnimSegment visualization line from current <HAnimJoint name='vt8'/> to child <HAnimJoint name='vt7'/>
CShape* Shape544 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet545 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet545->setVertexCount(new int[1]{2});
CCoordinate* Coordinate546 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate546->setPoint(new float[6]{0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833});
LineSet545->setCoord(*Coordinate546);

CColorRGBA* ColorRGBA547 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA547->setUSE("HAnimSegmentLineColorRGBA");
LineSet545->setColor(*ColorRGBA547);

Shape544->setGeometry(LineSet545);

HAnimSegment540->addChildren(*Shape544);

HAnimJoint539->addChildren(*HAnimSegment540);

CHAnimJoint* HAnimJoint548 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint548->setName("vt7");
HAnimJoint548->setDEF("hanim_vt7");
HAnimJoint548->setCenter(new float[3]{0.0058,1.3625,-0.0833});
HAnimJoint548->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint548->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment549 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment549->setName("t7");
HAnimSegment549->setDEF("hanim_t7");
//Visualization sphere for <HAnimJoint name='vt7'/> is placed within <HAnimSegment name='t7'/>
CTouchSensor* TouchSensor550 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor550->setDescription("HAnimJoint vt7, HAnimSegment t7");
HAnimSegment549->addChildren(*TouchSensor550);

CTransform* Transform551 = (CTransform *)(m_pScene.createNode("Transform"));
Transform551->setTranslation(new float[3]{0.0058,1.3625,-0.0833});
CShape* Shape552 = (CShape *)(m_pScene.createNode("Shape"));
Shape552->setUSE("HAnimJointShape");
Transform551->addChildren(*Shape552);

HAnimSegment549->addChildren(*Transform551);

//HAnimSegment visualization line from current <HAnimJoint name='vt7'/> to child <HAnimJoint name='vt6'/>
CShape* Shape553 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet554 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet554->setVertexCount(new int[1]{2});
CCoordinate* Coordinate555 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate555->setPoint(new float[6]{0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08});
LineSet554->setCoord(*Coordinate555);

CColorRGBA* ColorRGBA556 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA556->setUSE("HAnimSegmentLineColorRGBA");
LineSet554->setColor(*ColorRGBA556);

Shape553->setGeometry(LineSet554);

HAnimSegment549->addChildren(*Shape553);

HAnimJoint548->addChildren(*HAnimSegment549);

CHAnimJoint* HAnimJoint557 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint557->setName("vt6");
HAnimJoint557->setDEF("hanim_vt6");
HAnimJoint557->setCenter(new float[3]{0.0059,1.3866,-0.08});
HAnimJoint557->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint557->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment558 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment558->setName("t6");
HAnimSegment558->setDEF("hanim_t6");
//Visualization sphere for <HAnimJoint name='vt6'/> is placed within <HAnimSegment name='t6'/>
CTouchSensor* TouchSensor559 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor559->setDescription("HAnimJoint vt6, HAnimSegment t6");
HAnimSegment558->addChildren(*TouchSensor559);

CTransform* Transform560 = (CTransform *)(m_pScene.createNode("Transform"));
Transform560->setTranslation(new float[3]{0.0059,1.3866,-0.08});
CShape* Shape561 = (CShape *)(m_pScene.createNode("Shape"));
Shape561->setUSE("HAnimJointShape");
Transform560->addChildren(*Shape561);

HAnimSegment558->addChildren(*Transform560);

//HAnimSegment visualization line from current <HAnimJoint name='vt6'/> to child <HAnimJoint name='vt5'/>
CShape* Shape562 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet563 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet563->setVertexCount(new int[1]{2});
CCoordinate* Coordinate564 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate564->setPoint(new float[6]{0.0059,1.3866,-0.08,0.006,1.4102,-0.0745});
LineSet563->setCoord(*Coordinate564);

CColorRGBA* ColorRGBA565 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA565->setUSE("HAnimSegmentLineColorRGBA");
LineSet563->setColor(*ColorRGBA565);

Shape562->setGeometry(LineSet563);

HAnimSegment558->addChildren(*Shape562);

HAnimJoint557->addChildren(*HAnimSegment558);

CHAnimJoint* HAnimJoint566 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint566->setName("vt5");
HAnimJoint566->setDEF("hanim_vt5");
HAnimJoint566->setCenter(new float[3]{0.006,1.4102,-0.0745});
HAnimJoint566->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint566->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment567 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment567->setName("t5");
HAnimSegment567->setDEF("hanim_t5");
//Visualization sphere for <HAnimJoint name='vt5'/> is placed within <HAnimSegment name='t5'/>
CTouchSensor* TouchSensor568 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor568->setDescription("HAnimJoint vt5, HAnimSegment t5");
HAnimSegment567->addChildren(*TouchSensor568);

CTransform* Transform569 = (CTransform *)(m_pScene.createNode("Transform"));
Transform569->setTranslation(new float[3]{0.006,1.4102,-0.0745});
CShape* Shape570 = (CShape *)(m_pScene.createNode("Shape"));
Shape570->setUSE("HAnimJointShape");
Transform569->addChildren(*Shape570);

HAnimSegment567->addChildren(*Transform569);

//HAnimSegment visualization line from current <HAnimJoint name='vt5'/> to child <HAnimJoint name='vt4'/>
CShape* Shape571 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet572 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet572->setVertexCount(new int[1]{2});
CCoordinate* Coordinate573 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate573->setPoint(new float[6]{0.006,1.4102,-0.0745,0.0061,1.432,-0.0675});
LineSet572->setCoord(*Coordinate573);

CColorRGBA* ColorRGBA574 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA574->setUSE("HAnimSegmentLineColorRGBA");
LineSet572->setColor(*ColorRGBA574);

Shape571->setGeometry(LineSet572);

HAnimSegment567->addChildren(*Shape571);

HAnimJoint566->addChildren(*HAnimSegment567);

CHAnimJoint* HAnimJoint575 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint575->setName("vt4");
HAnimJoint575->setDEF("hanim_vt4");
HAnimJoint575->setCenter(new float[3]{0.0061,1.432,-0.0675});
HAnimJoint575->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint575->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment576 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment576->setName("t4");
HAnimSegment576->setDEF("hanim_t4");
//Visualization sphere for <HAnimJoint name='vt4'/> is placed within <HAnimSegment name='t4'/>
CTouchSensor* TouchSensor577 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor577->setDescription("HAnimJoint vt4, HAnimSegment t4");
HAnimSegment576->addChildren(*TouchSensor577);

CTransform* Transform578 = (CTransform *)(m_pScene.createNode("Transform"));
Transform578->setTranslation(new float[3]{0.0061,1.432,-0.0675});
CShape* Shape579 = (CShape *)(m_pScene.createNode("Shape"));
Shape579->setUSE("HAnimJointShape");
Transform578->addChildren(*Shape579);

HAnimSegment576->addChildren(*Transform578);

//HAnimSegment visualization line from current <HAnimJoint name='vt4'/> to child <HAnimJoint name='vt3'/>
CShape* Shape580 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet581 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet581->setVertexCount(new int[1]{2});
CCoordinate* Coordinate582 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate582->setPoint(new float[6]{0.0061,1.432,-0.0675,0.0062,1.4583,-0.057});
LineSet581->setCoord(*Coordinate582);

CColorRGBA* ColorRGBA583 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA583->setUSE("HAnimSegmentLineColorRGBA");
LineSet581->setColor(*ColorRGBA583);

Shape580->setGeometry(LineSet581);

HAnimSegment576->addChildren(*Shape580);

HAnimJoint575->addChildren(*HAnimSegment576);

CHAnimJoint* HAnimJoint584 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint584->setName("vt3");
HAnimJoint584->setDEF("hanim_vt3");
HAnimJoint584->setCenter(new float[3]{0.0062,1.4583,-0.057});
HAnimJoint584->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint584->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment585 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment585->setName("t3");
HAnimSegment585->setDEF("hanim_t3");
//Visualization sphere for <HAnimJoint name='vt3'/> is placed within <HAnimSegment name='t3'/>
CTouchSensor* TouchSensor586 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor586->setDescription("HAnimJoint vt3, HAnimSegment t3");
HAnimSegment585->addChildren(*TouchSensor586);

CTransform* Transform587 = (CTransform *)(m_pScene.createNode("Transform"));
Transform587->setTranslation(new float[3]{0.0062,1.4583,-0.057});
CShape* Shape588 = (CShape *)(m_pScene.createNode("Shape"));
Shape588->setUSE("HAnimJointShape");
Transform587->addChildren(*Shape588);

HAnimSegment585->addChildren(*Transform587);

//HAnimSegment visualization line from current <HAnimJoint name='vt3'/> to child <HAnimJoint name='vt2'/>
CShape* Shape589 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet590 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet590->setVertexCount(new int[1]{2});
CCoordinate* Coordinate591 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate591->setPoint(new float[6]{0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484});
LineSet590->setCoord(*Coordinate591);

CColorRGBA* ColorRGBA592 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA592->setUSE("HAnimSegmentLineColorRGBA");
LineSet590->setColor(*ColorRGBA592);

Shape589->setGeometry(LineSet590);

HAnimSegment585->addChildren(*Shape589);

HAnimJoint584->addChildren(*HAnimSegment585);

CHAnimJoint* HAnimJoint593 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint593->setName("vt2");
HAnimJoint593->setDEF("hanim_vt2");
HAnimJoint593->setCenter(new float[3]{0.0063,1.4761,-0.0484});
HAnimJoint593->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint593->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment594 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment594->setName("t2");
HAnimSegment594->setDEF("hanim_t2");
//Visualization sphere for <HAnimJoint name='vt2'/> is placed within <HAnimSegment name='t2'/>
CTouchSensor* TouchSensor595 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor595->setDescription("HAnimJoint vt2, HAnimSegment t2");
HAnimSegment594->addChildren(*TouchSensor595);

CTransform* Transform596 = (CTransform *)(m_pScene.createNode("Transform"));
Transform596->setTranslation(new float[3]{0.0063,1.4761,-0.0484});
CShape* Shape597 = (CShape *)(m_pScene.createNode("Shape"));
Shape597->setUSE("HAnimJointShape");
Transform596->addChildren(*Shape597);

HAnimSegment594->addChildren(*Transform596);

//HAnimSegment visualization line from current <HAnimJoint name='vt2'/> to child <HAnimJoint name='vt1'/>
CShape* Shape598 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet599 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet599->setVertexCount(new int[1]{2});
CCoordinate* Coordinate600 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate600->setPoint(new float[6]{0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387});
LineSet599->setCoord(*Coordinate600);

CColorRGBA* ColorRGBA601 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA601->setUSE("HAnimSegmentLineColorRGBA");
LineSet599->setColor(*ColorRGBA601);

Shape598->setGeometry(LineSet599);

HAnimSegment594->addChildren(*Shape598);

HAnimJoint593->addChildren(*HAnimSegment594);

CHAnimJoint* HAnimJoint602 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint602->setName("vt1");
HAnimJoint602->setDEF("hanim_vt1");
HAnimJoint602->setCenter(new float[3]{0.0065,1.4951,-0.0387});
HAnimJoint602->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint602->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment603 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment603->setName("t1");
HAnimSegment603->setDEF("hanim_t1");
//Visualization sphere for <HAnimJoint name='vt1'/> is placed within <HAnimSegment name='t1'/>
CTouchSensor* TouchSensor604 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor604->setDescription("HAnimJoint vt1, HAnimSegment t1");
HAnimSegment603->addChildren(*TouchSensor604);

CTransform* Transform605 = (CTransform *)(m_pScene.createNode("Transform"));
Transform605->setTranslation(new float[3]{0.0065,1.4951,-0.0387});
CShape* Shape606 = (CShape *)(m_pScene.createNode("Shape"));
Shape606->setUSE("HAnimJointShape");
Transform605->addChildren(*Shape606);

HAnimSegment603->addChildren(*Transform605);

//HAnimSegment visualization line from current <HAnimJoint name='vt1'/> to child <HAnimJoint name='vc7'/>
CShape* Shape607 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet608 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet608->setVertexCount(new int[1]{2});
CCoordinate* Coordinate609 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate609->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301});
LineSet608->setCoord(*Coordinate609);

CColorRGBA* ColorRGBA610 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA610->setUSE("HAnimSegmentLineColorRGBA");
LineSet608->setColor(*ColorRGBA610);

Shape607->setGeometry(LineSet608);

HAnimSegment603->addChildren(*Shape607);

//HAnimSegment visualization line from current <HAnimJoint name='vt1'/> to child <HAnimJoint name='l_sternoclavicular'/>
CShape* Shape611 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet612 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet612->setVertexCount(new int[1]{2});
CCoordinate* Coordinate613 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate613->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353});
LineSet612->setCoord(*Coordinate613);

CColorRGBA* ColorRGBA614 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA614->setUSE("HAnimSegmentLineColorRGBA");
LineSet612->setColor(*ColorRGBA614);

Shape611->setGeometry(LineSet612);

HAnimSegment603->addChildren(*Shape611);

//HAnimSegment visualization line from current <HAnimJoint name='vt1'/> to child <HAnimJoint name='r_sternoclavicular'/>
CShape* Shape615 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet616 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet616->setVertexCount(new int[1]{2});
CCoordinate* Coordinate617 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate617->setPoint(new float[6]{0.0065,1.4951,-0.0387,-0.082,1.4488,-0.0353});
LineSet616->setCoord(*Coordinate617);

CColorRGBA* ColorRGBA618 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA618->setUSE("HAnimSegmentLineColorRGBA");
LineSet616->setColor(*ColorRGBA618);

Shape615->setGeometry(LineSet616);

HAnimSegment603->addChildren(*Shape615);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='suprasternale_pt'/>
CShape* Shape619 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet620 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet620->setVertexCount(new int[1]{2});
CCoordinate* Coordinate621 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate621->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.0084,1.4714,0.0551});
LineSet620->setCoord(*Coordinate621);

CColorRGBA* ColorRGBA622 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA622->setUSE("HAnimSiteLineColorRGBA");
LineSet620->setColor(*ColorRGBA622);

Shape619->setGeometry(LineSet620);

HAnimSegment603->addChildren(*Shape619);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='cervicale_pt'/>
CShape* Shape623 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet624 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet624->setVertexCount(new int[1]{2});
CCoordinate* Coordinate625 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate625->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.0064,1.52,-0.0815});
LineSet624->setCoord(*Coordinate625);

CColorRGBA* ColorRGBA626 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA626->setUSE("HAnimSiteLineColorRGBA");
LineSet624->setColor(*ColorRGBA626);

Shape623->setGeometry(LineSet624);

HAnimSegment603->addChildren(*Shape623);

CHAnimSite* HAnimSite627 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite627->setName("suprasternale_pt");
HAnimSite627->setDEF("hanim_suprasternale_pt");
HAnimSite627->setTranslation(new float[3]{0.0084,1.4714,0.0551});
//HAnimSite visualization shape
CTouchSensor* TouchSensor628 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor628->setDescription("HAnimSite suprasternale_pt");
HAnimSite627->addChildren(*TouchSensor628);

CShape* Shape629 = (CShape *)(m_pScene.createNode("Shape"));
Shape629->setUSE("HAnimSiteShape");
HAnimSite627->addChildren(*Shape629);

HAnimSegment603->addChildren(*HAnimSite627);

CHAnimSite* HAnimSite630 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite630->setName("cervicale_pt");
HAnimSite630->setDEF("hanim_cervicale_pt");
HAnimSite630->setTranslation(new float[3]{0.0064,1.52,-0.0815});
//HAnimSite visualization shape
CTouchSensor* TouchSensor631 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor631->setDescription("HAnimSite cervicale_pt");
HAnimSite630->addChildren(*TouchSensor631);

CShape* Shape632 = (CShape *)(m_pScene.createNode("Shape"));
Shape632->setUSE("HAnimSiteShape");
HAnimSite630->addChildren(*Shape632);

HAnimSegment603->addChildren(*HAnimSite630);

HAnimJoint602->addChildren(*HAnimSegment603);

CHAnimJoint* HAnimJoint633 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint633->setName("vc7");
HAnimJoint633->setDEF("hanim_vc7");
HAnimJoint633->setCenter(new float[3]{0.0066,1.5132,-0.0301});
HAnimJoint633->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint633->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment634 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment634->setName("c7");
HAnimSegment634->setDEF("hanim_c7");
//Visualization sphere for <HAnimJoint name='vc7'/> is placed within <HAnimSegment name='c7'/>
CTouchSensor* TouchSensor635 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor635->setDescription("HAnimJoint vc7, HAnimSegment c7");
HAnimSegment634->addChildren(*TouchSensor635);

CTransform* Transform636 = (CTransform *)(m_pScene.createNode("Transform"));
Transform636->setTranslation(new float[3]{0.0066,1.5132,-0.0301});
CShape* Shape637 = (CShape *)(m_pScene.createNode("Shape"));
Shape637->setUSE("HAnimJointShape");
Transform636->addChildren(*Shape637);

HAnimSegment634->addChildren(*Transform636);

//HAnimSegment visualization line from current <HAnimJoint name='vc7'/> to child <HAnimJoint name='vc6'/>
CShape* Shape638 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet639 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet639->setVertexCount(new int[1]{2});
CCoordinate* Coordinate640 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate640->setPoint(new float[6]{0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143});
LineSet639->setCoord(*Coordinate640);

CColorRGBA* ColorRGBA641 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA641->setUSE("HAnimSegmentLineColorRGBA");
LineSet639->setColor(*ColorRGBA641);

Shape638->setGeometry(LineSet639);

HAnimSegment634->addChildren(*Shape638);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='r_neck_base_pt'/>
CShape* Shape642 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet643 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet643->setVertexCount(new int[1]{2});
CCoordinate* Coordinate644 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate644->setPoint(new float[6]{0.0066,1.5132,-0.0301,-0.0419,1.5149,-0.022});
LineSet643->setCoord(*Coordinate644);

CColorRGBA* ColorRGBA645 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA645->setUSE("HAnimSiteLineColorRGBA");
LineSet643->setColor(*ColorRGBA645);

Shape642->setGeometry(LineSet643);

HAnimSegment634->addChildren(*Shape642);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='l_neck_base_pt'/>
CShape* Shape646 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet647 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet647->setVertexCount(new int[1]{2});
CCoordinate* Coordinate648 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate648->setPoint(new float[6]{0.0066,1.5132,-0.0301,0.0646,1.5141,-0.038});
LineSet647->setCoord(*Coordinate648);

CColorRGBA* ColorRGBA649 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA649->setUSE("HAnimSiteLineColorRGBA");
LineSet647->setColor(*ColorRGBA649);

Shape646->setGeometry(LineSet647);

HAnimSegment634->addChildren(*Shape646);

CHAnimSite* HAnimSite650 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite650->setName("r_neck_base_pt");
HAnimSite650->setDEF("hanim_r_neck_base_pt");
HAnimSite650->setTranslation(new float[3]{-0.0419,1.5149,-0.022});
//HAnimSite visualization shape
CTouchSensor* TouchSensor651 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor651->setDescription("HAnimSite r_neck_base_pt");
HAnimSite650->addChildren(*TouchSensor651);

CShape* Shape652 = (CShape *)(m_pScene.createNode("Shape"));
Shape652->setUSE("HAnimSiteShape");
HAnimSite650->addChildren(*Shape652);

HAnimSegment634->addChildren(*HAnimSite650);

CHAnimSite* HAnimSite653 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite653->setName("l_neck_base_pt");
HAnimSite653->setDEF("hanim_l_neck_base_pt");
HAnimSite653->setTranslation(new float[3]{0.0646,1.5141,-0.038});
//HAnimSite visualization shape
CTouchSensor* TouchSensor654 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor654->setDescription("HAnimSite l_neck_base_pt");
HAnimSite653->addChildren(*TouchSensor654);

CShape* Shape655 = (CShape *)(m_pScene.createNode("Shape"));
Shape655->setUSE("HAnimSiteShape");
HAnimSite653->addChildren(*Shape655);

HAnimSegment634->addChildren(*HAnimSite653);

HAnimJoint633->addChildren(*HAnimSegment634);

CHAnimJoint* HAnimJoint656 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint656->setName("vc6");
HAnimJoint656->setDEF("hanim_vc6");
HAnimJoint656->setCenter(new float[3]{0.0066,1.5357,-0.0143});
HAnimJoint656->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint656->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment657 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment657->setName("c6");
HAnimSegment657->setDEF("hanim_c6");
//Visualization sphere for <HAnimJoint name='vc6'/> is placed within <HAnimSegment name='c6'/>
CTouchSensor* TouchSensor658 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor658->setDescription("HAnimJoint vc6, HAnimSegment c6");
HAnimSegment657->addChildren(*TouchSensor658);

CTransform* Transform659 = (CTransform *)(m_pScene.createNode("Transform"));
Transform659->setTranslation(new float[3]{0.0066,1.5357,-0.0143});
CShape* Shape660 = (CShape *)(m_pScene.createNode("Shape"));
Shape660->setUSE("HAnimJointShape");
Transform659->addChildren(*Shape660);

HAnimSegment657->addChildren(*Transform659);

//HAnimSegment visualization line from current <HAnimJoint name='vc6'/> to child <HAnimJoint name='vc5'/>
CShape* Shape661 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet662 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet662->setVertexCount(new int[1]{2});
CCoordinate* Coordinate663 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate663->setPoint(new float[6]{0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082});
LineSet662->setCoord(*Coordinate663);

CColorRGBA* ColorRGBA664 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA664->setUSE("HAnimSegmentLineColorRGBA");
LineSet662->setColor(*ColorRGBA664);

Shape661->setGeometry(LineSet662);

HAnimSegment657->addChildren(*Shape661);

HAnimJoint656->addChildren(*HAnimSegment657);

CHAnimJoint* HAnimJoint665 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint665->setName("vc5");
HAnimJoint665->setDEF("hanim_vc5");
HAnimJoint665->setCenter(new float[3]{0.0066,1.552,-0.0082});
HAnimJoint665->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint665->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment666 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment666->setName("c5");
HAnimSegment666->setDEF("hanim_c5");
//Visualization sphere for <HAnimJoint name='vc5'/> is placed within <HAnimSegment name='c5'/>
CTouchSensor* TouchSensor667 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor667->setDescription("HAnimJoint vc5, HAnimSegment c5");
HAnimSegment666->addChildren(*TouchSensor667);

CTransform* Transform668 = (CTransform *)(m_pScene.createNode("Transform"));
Transform668->setTranslation(new float[3]{0.0066,1.552,-0.0082});
CShape* Shape669 = (CShape *)(m_pScene.createNode("Shape"));
Shape669->setUSE("HAnimJointShape");
Transform668->addChildren(*Shape669);

HAnimSegment666->addChildren(*Transform668);

//HAnimSegment visualization line from current <HAnimJoint name='vc5'/> to child <HAnimJoint name='vc4'/>
CShape* Shape670 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet671 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet671->setVertexCount(new int[1]{2});
CCoordinate* Coordinate672 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate672->setPoint(new float[6]{0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084});
LineSet671->setCoord(*Coordinate672);

CColorRGBA* ColorRGBA673 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA673->setUSE("HAnimSegmentLineColorRGBA");
LineSet671->setColor(*ColorRGBA673);

Shape670->setGeometry(LineSet671);

HAnimSegment666->addChildren(*Shape670);

HAnimJoint665->addChildren(*HAnimSegment666);

CHAnimJoint* HAnimJoint674 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint674->setName("vc4");
HAnimJoint674->setDEF("hanim_vc4");
HAnimJoint674->setCenter(new float[3]{0.0066,1.5662,-0.0084});
HAnimJoint674->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint674->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment675 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment675->setName("c4");
HAnimSegment675->setDEF("hanim_c4");
//Visualization sphere for <HAnimJoint name='vc4'/> is placed within <HAnimSegment name='c4'/>
CTouchSensor* TouchSensor676 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor676->setDescription("HAnimJoint vc4, HAnimSegment c4");
HAnimSegment675->addChildren(*TouchSensor676);

CTransform* Transform677 = (CTransform *)(m_pScene.createNode("Transform"));
Transform677->setTranslation(new float[3]{0.0066,1.5662,-0.0084});
CShape* Shape678 = (CShape *)(m_pScene.createNode("Shape"));
Shape678->setUSE("HAnimJointShape");
Transform677->addChildren(*Shape678);

HAnimSegment675->addChildren(*Transform677);

//HAnimSegment visualization line from current <HAnimJoint name='vc4'/> to child <HAnimJoint name='vc3'/>
CShape* Shape679 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet680 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet680->setVertexCount(new int[1]{2});
CCoordinate* Coordinate681 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate681->setPoint(new float[6]{0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103});
LineSet680->setCoord(*Coordinate681);

CColorRGBA* ColorRGBA682 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA682->setUSE("HAnimSegmentLineColorRGBA");
LineSet680->setColor(*ColorRGBA682);

Shape679->setGeometry(LineSet680);

HAnimSegment675->addChildren(*Shape679);

HAnimJoint674->addChildren(*HAnimSegment675);

CHAnimJoint* HAnimJoint683 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint683->setName("vc3");
HAnimJoint683->setDEF("hanim_vc3");
HAnimJoint683->setCenter(new float[3]{0.0066,1.58,-0.0103});
HAnimJoint683->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint683->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment684 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment684->setName("c3");
HAnimSegment684->setDEF("hanim_c3");
//Visualization sphere for <HAnimJoint name='vc3'/> is placed within <HAnimSegment name='c3'/>
CTouchSensor* TouchSensor685 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor685->setDescription("HAnimJoint vc3, HAnimSegment c3");
HAnimSegment684->addChildren(*TouchSensor685);

CTransform* Transform686 = (CTransform *)(m_pScene.createNode("Transform"));
Transform686->setTranslation(new float[3]{0.0066,1.58,-0.0103});
CShape* Shape687 = (CShape *)(m_pScene.createNode("Shape"));
Shape687->setUSE("HAnimJointShape");
Transform686->addChildren(*Shape687);

HAnimSegment684->addChildren(*Transform686);

//HAnimSegment visualization line from current <HAnimJoint name='vc3'/> to child <HAnimJoint name='vc2'/>
CShape* Shape688 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet689 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet689->setVertexCount(new int[1]{2});
CCoordinate* Coordinate690 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate690->setPoint(new float[6]{0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103});
LineSet689->setCoord(*Coordinate690);

CColorRGBA* ColorRGBA691 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA691->setUSE("HAnimSegmentLineColorRGBA");
LineSet689->setColor(*ColorRGBA691);

Shape688->setGeometry(LineSet689);

HAnimSegment684->addChildren(*Shape688);

HAnimJoint683->addChildren(*HAnimSegment684);

CHAnimJoint* HAnimJoint692 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint692->setName("vc2");
HAnimJoint692->setDEF("hanim_vc2");
HAnimJoint692->setCenter(new float[3]{0.0066,1.5928,-0.0103});
HAnimJoint692->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint692->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment693 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment693->setName("c2");
HAnimSegment693->setDEF("hanim_c2");
//Visualization sphere for <HAnimJoint name='vc2'/> is placed within <HAnimSegment name='c2'/>
CTouchSensor* TouchSensor694 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor694->setDescription("HAnimJoint vc2, HAnimSegment c2");
HAnimSegment693->addChildren(*TouchSensor694);

CTransform* Transform695 = (CTransform *)(m_pScene.createNode("Transform"));
Transform695->setTranslation(new float[3]{0.0066,1.5928,-0.0103});
CShape* Shape696 = (CShape *)(m_pScene.createNode("Shape"));
Shape696->setUSE("HAnimJointShape");
Transform695->addChildren(*Shape696);

HAnimSegment693->addChildren(*Transform695);

//HAnimSegment visualization line from current <HAnimJoint name='vc2'/> to child <HAnimJoint name='vc1'/>
CShape* Shape697 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet698 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet698->setVertexCount(new int[1]{2});
CCoordinate* Coordinate699 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate699->setPoint(new float[6]{0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034});
LineSet698->setCoord(*Coordinate699);

CColorRGBA* ColorRGBA700 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA700->setUSE("HAnimSegmentLineColorRGBA");
LineSet698->setColor(*ColorRGBA700);

Shape697->setGeometry(LineSet698);

HAnimSegment693->addChildren(*Shape697);

HAnimJoint692->addChildren(*HAnimSegment693);

CHAnimJoint* HAnimJoint701 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint701->setName("vc1");
HAnimJoint701->setDEF("hanim_vc1");
HAnimJoint701->setCenter(new float[3]{0.0066,1.6144,-0.0034});
HAnimJoint701->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint701->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment702 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment702->setName("c1");
HAnimSegment702->setDEF("hanim_c1");
//Visualization sphere for <HAnimJoint name='vc1'/> is placed within <HAnimSegment name='c1'/>
CTouchSensor* TouchSensor703 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor703->setDescription("HAnimJoint vc1, HAnimSegment c1");
HAnimSegment702->addChildren(*TouchSensor703);

CTransform* Transform704 = (CTransform *)(m_pScene.createNode("Transform"));
Transform704->setTranslation(new float[3]{0.0066,1.6144,-0.0034});
CShape* Shape705 = (CShape *)(m_pScene.createNode("Shape"));
Shape705->setUSE("HAnimJointShape");
Transform704->addChildren(*Shape705);

HAnimSegment702->addChildren(*Transform704);

//HAnimSegment visualization line from current <HAnimJoint name='vc1'/> to child <HAnimJoint name='skullbase'/>
CShape* Shape706 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet707 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet707->setVertexCount(new int[1]{2});
CCoordinate* Coordinate708 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate708->setPoint(new float[6]{0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236});
LineSet707->setCoord(*Coordinate708);

CColorRGBA* ColorRGBA709 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA709->setUSE("HAnimSegmentLineColorRGBA");
LineSet707->setColor(*ColorRGBA709);

Shape706->setGeometry(LineSet707);

HAnimSegment702->addChildren(*Shape706);

HAnimJoint701->addChildren(*HAnimSegment702);

CHAnimJoint* HAnimJoint710 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint710->setName("skullbase");
HAnimJoint710->setDEF("hanim_skullbase");
HAnimJoint710->setCenter(new float[3]{0.0044,1.6209,0.0236});
HAnimJoint710->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint710->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment711 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment711->setName("skull");
HAnimSegment711->setDEF("hanim_skull");
//Visualization sphere for <HAnimJoint name='skullbase'/> is placed within <HAnimSegment name='skull'/>
CTouchSensor* TouchSensor712 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor712->setDescription("HAnimJoint skullbase, HAnimSegment skull");
HAnimSegment711->addChildren(*TouchSensor712);

CTransform* Transform713 = (CTransform *)(m_pScene.createNode("Transform"));
Transform713->setTranslation(new float[3]{0.0044,1.6209,0.0236});
CShape* Shape714 = (CShape *)(m_pScene.createNode("Shape"));
Shape714->setUSE("HAnimJointShape");
Transform713->addChildren(*Shape714);

HAnimSegment711->addChildren(*Transform713);

//HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='l_eyeball_joint'/>
CShape* Shape715 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet716 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet716->setVertexCount(new int[1]{2});
CCoordinate* Coordinate717 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate717->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0336,1.6332,0.0502});
LineSet716->setCoord(*Coordinate717);

CColorRGBA* ColorRGBA718 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA718->setUSE("HAnimSegmentLineColorRGBA");
LineSet716->setColor(*ColorRGBA718);

Shape715->setGeometry(LineSet716);

HAnimSegment711->addChildren(*Shape715);

//HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='l_eyelid_joint'/>
CShape* Shape719 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet720 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet720->setVertexCount(new int[1]{2});
CCoordinate* Coordinate721 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate721->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0336,1.6332,0.0502});
LineSet720->setCoord(*Coordinate721);

CColorRGBA* ColorRGBA722 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA722->setUSE("HAnimSegmentLineColorRGBA");
LineSet720->setColor(*ColorRGBA722);

Shape719->setGeometry(LineSet720);

HAnimSegment711->addChildren(*Shape719);

//HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='l_eyebrow_joint'/>
CShape* Shape723 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet724 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet724->setVertexCount(new int[1]{2});
CCoordinate* Coordinate725 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate725->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0336,1.635,0.0506});
LineSet724->setCoord(*Coordinate725);

CColorRGBA* ColorRGBA726 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA726->setUSE("HAnimSegmentLineColorRGBA");
LineSet724->setColor(*ColorRGBA726);

Shape723->setGeometry(LineSet724);

HAnimSegment711->addChildren(*Shape723);

//HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='r_eyeball_joint'/>
CShape* Shape727 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet728 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet728->setVertexCount(new int[1]{2});
CCoordinate* Coordinate729 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate729->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502});
LineSet728->setCoord(*Coordinate729);

CColorRGBA* ColorRGBA730 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA730->setUSE("HAnimSegmentLineColorRGBA");
LineSet728->setColor(*ColorRGBA730);

Shape727->setGeometry(LineSet728);

HAnimSegment711->addChildren(*Shape727);

//HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='r_eyelid_joint'/>
CShape* Shape731 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet732 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet732->setVertexCount(new int[1]{2});
CCoordinate* Coordinate733 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate733->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502});
LineSet732->setCoord(*Coordinate733);

CColorRGBA* ColorRGBA734 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA734->setUSE("HAnimSegmentLineColorRGBA");
LineSet732->setColor(*ColorRGBA734);

Shape731->setGeometry(LineSet732);

HAnimSegment711->addChildren(*Shape731);

//HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='r_eyebrow_joint'/>
CShape* Shape735 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet736 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet736->setVertexCount(new int[1]{2});
CCoordinate* Coordinate737 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate737->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0336,1.635,0.0506});
LineSet736->setCoord(*Coordinate737);

CColorRGBA* ColorRGBA738 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA738->setUSE("HAnimSegmentLineColorRGBA");
LineSet736->setColor(*ColorRGBA738);

Shape735->setGeometry(LineSet736);

HAnimSegment711->addChildren(*Shape735);

//HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='temporomandibular'/>
CShape* Shape739 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet740 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet740->setVertexCount(new int[1]{2});
CCoordinate* Coordinate741 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate741->setPoint(new float[6]{0.0044,1.6209,0.0236,0,1.63,0.015});
LineSet740->setCoord(*Coordinate741);

CColorRGBA* ColorRGBA742 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA742->setUSE("HAnimSegmentLineColorRGBA");
LineSet740->setColor(*ColorRGBA742);

Shape739->setGeometry(LineSet740);

HAnimSegment711->addChildren(*Shape739);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='skull_tip'/>
CShape* Shape743 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet744 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet744->setVertexCount(new int[1]{2});
CCoordinate* Coordinate745 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate745->setPoint(new float[6]{0.0044,1.6209,0.0236,0.005,1.7504,0.0055});
LineSet744->setCoord(*Coordinate745);

CColorRGBA* ColorRGBA746 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA746->setUSE("HAnimSiteLineColorRGBA");
LineSet744->setColor(*ColorRGBA746);

Shape743->setGeometry(LineSet744);

HAnimSegment711->addChildren(*Shape743);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='sellion_pt'/>
CShape* Shape747 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet748 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet748->setVertexCount(new int[1]{2});
CCoordinate* Coordinate749 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate749->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0058,1.6316,0.0852});
LineSet748->setCoord(*Coordinate749);

CColorRGBA* ColorRGBA750 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA750->setUSE("HAnimSiteLineColorRGBA");
LineSet748->setColor(*ColorRGBA750);

Shape747->setGeometry(LineSet748);

HAnimSegment711->addChildren(*Shape747);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_infraorbitale_pt'/>
CShape* Shape751 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet752 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet752->setVertexCount(new int[1]{2});
CCoordinate* Coordinate753 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate753->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0237,1.6171,0.0752});
LineSet752->setCoord(*Coordinate753);

CColorRGBA* ColorRGBA754 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA754->setUSE("HAnimSiteLineColorRGBA");
LineSet752->setColor(*ColorRGBA754);

Shape751->setGeometry(LineSet752);

HAnimSegment711->addChildren(*Shape751);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_infraorbitale_pt'/>
CShape* Shape755 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet756 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet756->setVertexCount(new int[1]{2});
CCoordinate* Coordinate757 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate757->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0341,1.6171,0.0752});
LineSet756->setCoord(*Coordinate757);

CColorRGBA* ColorRGBA758 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA758->setUSE("HAnimSiteLineColorRGBA");
LineSet756->setColor(*ColorRGBA758);

Shape755->setGeometry(LineSet756);

HAnimSegment711->addChildren(*Shape755);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='supramenton_pt'/>
CShape* Shape759 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet760 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet760->setVertexCount(new int[1]{2});
CCoordinate* Coordinate761 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate761->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0061,1.541,0.0805});
LineSet760->setCoord(*Coordinate761);

CColorRGBA* ColorRGBA762 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA762->setUSE("HAnimSiteLineColorRGBA");
LineSet760->setColor(*ColorRGBA762);

Shape759->setGeometry(LineSet760);

HAnimSegment711->addChildren(*Shape759);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_tragion_pt'/>
CShape* Shape763 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet764 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet764->setVertexCount(new int[1]{2});
CCoordinate* Coordinate765 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate765->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0646,1.6347,0.0302});
LineSet764->setCoord(*Coordinate765);

CColorRGBA* ColorRGBA766 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA766->setUSE("HAnimSiteLineColorRGBA");
LineSet764->setColor(*ColorRGBA766);

Shape763->setGeometry(LineSet764);

HAnimSegment711->addChildren(*Shape763);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_gonion_pt'/>
CShape* Shape767 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet768 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet768->setVertexCount(new int[1]{2});
CCoordinate* Coordinate769 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate769->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.052,1.5529,0.0347});
LineSet768->setCoord(*Coordinate769);

CColorRGBA* ColorRGBA770 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA770->setUSE("HAnimSiteLineColorRGBA");
LineSet768->setColor(*ColorRGBA770);

Shape767->setGeometry(LineSet768);

HAnimSegment711->addChildren(*Shape767);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_tragion_pt'/>
CShape* Shape771 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet772 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet772->setVertexCount(new int[1]{2});
CCoordinate* Coordinate773 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate773->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0739,1.6348,0.0282});
LineSet772->setCoord(*Coordinate773);

CColorRGBA* ColorRGBA774 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA774->setUSE("HAnimSiteLineColorRGBA");
LineSet772->setColor(*ColorRGBA774);

Shape771->setGeometry(LineSet772);

HAnimSegment711->addChildren(*Shape771);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_gonion_pt'/>
CShape* Shape775 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet776 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet776->setVertexCount(new int[1]{2});
CCoordinate* Coordinate777 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate777->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0631,1.553,0.033});
LineSet776->setCoord(*Coordinate777);

CColorRGBA* ColorRGBA778 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA778->setUSE("HAnimSiteLineColorRGBA");
LineSet776->setColor(*ColorRGBA778);

Shape775->setGeometry(LineSet776);

HAnimSegment711->addChildren(*Shape775);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='nuchale_pt'/>
CShape* Shape779 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet780 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet780->setVertexCount(new int[1]{2});
CCoordinate* Coordinate781 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate781->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0039,1.5972,-0.0796});
LineSet780->setCoord(*Coordinate781);

CColorRGBA* ColorRGBA782 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA782->setUSE("HAnimSiteLineColorRGBA");
LineSet780->setColor(*ColorRGBA782);

Shape779->setGeometry(LineSet780);

HAnimSegment711->addChildren(*Shape779);

CHAnimSite* HAnimSite783 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite783->setName("skull_vertex_pt");
HAnimSite783->setDEF("hanim_skull_vertex_pt");
HAnimSite783->setTranslation(new float[3]{0.005,1.7504,0.0055});
//TODO move skull_tip x to zero, check others for symmetry
//HAnimSite visualization shape
CTouchSensor* TouchSensor784 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor784->setDescription("HAnimSite skull_tip");
HAnimSite783->addChildren(*TouchSensor784);

CShape* Shape785 = (CShape *)(m_pScene.createNode("Shape"));
Shape785->setUSE("HAnimSiteShape");
HAnimSite783->addChildren(*Shape785);

HAnimSegment711->addChildren(*HAnimSite783);

CHAnimSite* HAnimSite786 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite786->setName("sellion_pt");
HAnimSite786->setDEF("hanim_sellion_pt");
HAnimSite786->setTranslation(new float[3]{0.0058,1.6316,0.0852});
//HAnimSite visualization shape
CTouchSensor* TouchSensor787 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor787->setDescription("HAnimSite sellion_pt");
HAnimSite786->addChildren(*TouchSensor787);

CShape* Shape788 = (CShape *)(m_pScene.createNode("Shape"));
Shape788->setUSE("HAnimSiteShape");
HAnimSite786->addChildren(*Shape788);

HAnimSegment711->addChildren(*HAnimSite786);

CHAnimSite* HAnimSite789 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite789->setName("r_infraorbitale_pt");
HAnimSite789->setDEF("hanim_r_infraorbitale_pt");
HAnimSite789->setTranslation(new float[3]{-0.0237,1.6171,0.0752});
//HAnimSite visualization shape
CTouchSensor* TouchSensor790 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor790->setDescription("HAnimSite r_infraorbitale_pt");
HAnimSite789->addChildren(*TouchSensor790);

CShape* Shape791 = (CShape *)(m_pScene.createNode("Shape"));
Shape791->setUSE("HAnimSiteShape");
HAnimSite789->addChildren(*Shape791);

HAnimSegment711->addChildren(*HAnimSite789);

CHAnimSite* HAnimSite792 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite792->setName("l_infraorbitale_pt");
HAnimSite792->setDEF("hanim_l_infraorbitale_pt");
HAnimSite792->setTranslation(new float[3]{0.0341,1.6171,0.0752});
//HAnimSite visualization shape
CTouchSensor* TouchSensor793 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor793->setDescription("HAnimSite l_infraorbitale_pt");
HAnimSite792->addChildren(*TouchSensor793);

CShape* Shape794 = (CShape *)(m_pScene.createNode("Shape"));
Shape794->setUSE("HAnimSiteShape");
HAnimSite792->addChildren(*Shape794);

HAnimSegment711->addChildren(*HAnimSite792);

CHAnimSite* HAnimSite795 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite795->setName("supramenton_pt");
HAnimSite795->setDEF("hanim_supramenton_pt");
HAnimSite795->setTranslation(new float[3]{0.0061,1.541,0.0805});
//HAnimSite visualization shape
CTouchSensor* TouchSensor796 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor796->setDescription("HAnimSite supramenton_pt");
HAnimSite795->addChildren(*TouchSensor796);

CShape* Shape797 = (CShape *)(m_pScene.createNode("Shape"));
Shape797->setUSE("HAnimSiteShape");
HAnimSite795->addChildren(*Shape797);

HAnimSegment711->addChildren(*HAnimSite795);

CHAnimSite* HAnimSite798 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite798->setName("r_tragion_pt");
HAnimSite798->setDEF("hanim_r_tragion_pt");
HAnimSite798->setTranslation(new float[3]{-0.0646,1.6347,0.0302});
//HAnimSite visualization shape
CTouchSensor* TouchSensor799 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor799->setDescription("HAnimSite r_tragion_pt");
HAnimSite798->addChildren(*TouchSensor799);

CShape* Shape800 = (CShape *)(m_pScene.createNode("Shape"));
Shape800->setUSE("HAnimSiteShape");
HAnimSite798->addChildren(*Shape800);

HAnimSegment711->addChildren(*HAnimSite798);

CHAnimSite* HAnimSite801 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite801->setName("r_gonion_pt");
HAnimSite801->setDEF("hanim_r_gonion_pt");
HAnimSite801->setTranslation(new float[3]{-0.052,1.5529,0.0347});
//HAnimSite visualization shape
CTouchSensor* TouchSensor802 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor802->setDescription("HAnimSite r_gonion_pt");
HAnimSite801->addChildren(*TouchSensor802);

CShape* Shape803 = (CShape *)(m_pScene.createNode("Shape"));
Shape803->setUSE("HAnimSiteShape");
HAnimSite801->addChildren(*Shape803);

HAnimSegment711->addChildren(*HAnimSite801);

CHAnimSite* HAnimSite804 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite804->setName("l_tragion_pt");
HAnimSite804->setDEF("hanim_l_tragion_pt");
HAnimSite804->setTranslation(new float[3]{0.0739,1.6348,0.0282});
//HAnimSite visualization shape
CTouchSensor* TouchSensor805 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor805->setDescription("HAnimSite l_tragion_pt");
HAnimSite804->addChildren(*TouchSensor805);

CShape* Shape806 = (CShape *)(m_pScene.createNode("Shape"));
Shape806->setUSE("HAnimSiteShape");
HAnimSite804->addChildren(*Shape806);

HAnimSegment711->addChildren(*HAnimSite804);

CHAnimSite* HAnimSite807 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite807->setName("l_gonion_pt");
HAnimSite807->setDEF("hanim_l_gonion_pt");
HAnimSite807->setTranslation(new float[3]{0.0631,1.553,0.033});
//HAnimSite visualization shape
CTouchSensor* TouchSensor808 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor808->setDescription("HAnimSite l_gonion_pt");
HAnimSite807->addChildren(*TouchSensor808);

CShape* Shape809 = (CShape *)(m_pScene.createNode("Shape"));
Shape809->setUSE("HAnimSiteShape");
HAnimSite807->addChildren(*Shape809);

HAnimSegment711->addChildren(*HAnimSite807);

CHAnimSite* HAnimSite810 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite810->setName("nuchale_pt");
HAnimSite810->setDEF("hanim_nuchale_pt");
HAnimSite810->setTranslation(new float[3]{0.0039,1.5972,-0.0796});
//HAnimSite visualization shape
CTouchSensor* TouchSensor811 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor811->setDescription("HAnimSite nuchale_pt");
HAnimSite810->addChildren(*TouchSensor811);

CShape* Shape812 = (CShape *)(m_pScene.createNode("Shape"));
Shape812->setUSE("HAnimSiteShape");
HAnimSite810->addChildren(*Shape812);

HAnimSegment711->addChildren(*HAnimSite810);

HAnimJoint710->addChildren(*HAnimSegment711);

CHAnimJoint* HAnimJoint813 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint813->setName("l_eyeball_joint");
HAnimJoint813->setDEF("hanim_l_eyeball_joint");
HAnimJoint813->setCenter(new float[3]{0.0336,1.6332,0.0502});
HAnimJoint813->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint813->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment814 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment814->setName("l_eyeball");
HAnimSegment814->setDEF("hanim_l_eyeball");
//Visualization sphere for <HAnimJoint name='l_eyeball_joint'/> is placed within <HAnimSegment name='l_eyeball'/>
CTouchSensor* TouchSensor815 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor815->setDescription("HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball");
HAnimSegment814->addChildren(*TouchSensor815);

CTransform* Transform816 = (CTransform *)(m_pScene.createNode("Transform"));
Transform816->setTranslation(new float[3]{0.0336,1.6332,0.0502});
CShape* Shape817 = (CShape *)(m_pScene.createNode("Shape"));
Shape817->setUSE("HAnimJointShape");
Transform816->addChildren(*Shape817);

HAnimSegment814->addChildren(*Transform816);

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_eyeball_joint'/> to <HAnimSite name='l_eyeball_site_view'/>
CShape* Shape818 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet819 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet819->setVertexCount(new int[1]{2});
CCoordinate* Coordinate820 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate820->setPoint(new float[6]{0.0336,1.6332,0.0502,0.034,1.64,0.05});
LineSet819->setCoord(*Coordinate820);

CColorRGBA* ColorRGBA821 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA821->setDEF("HAnimSiteViewpointLineColorRGBA");
ColorRGBA821->setColor(new float[8]{1,1,0,1,1,1,0,0.1});
LineSet819->setColor(*ColorRGBA821);

Shape818->setGeometry(LineSet819);

HAnimSegment814->addChildren(*Shape818);

CHAnimSite* HAnimSite822 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite822->setName("l_eyeball_site_view");
HAnimSite822->setDEF("hanim_l_eyeball_site_view");
HAnimSite822->setTranslation(new float[3]{0.034,1.64,0.05});
//HAnimSite visualization shape
CTouchSensor* TouchSensor823 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor823->setDescription("HAnimSite l_eyeball_site_view");
HAnimSite822->addChildren(*TouchSensor823);

CShape* Shape824 = (CShape *)(m_pScene.createNode("Shape"));
Shape824->setUSE("HAnimSiteShape");
HAnimSite822->addChildren(*Shape824);

CViewpoint* Viewpoint825 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint825->setDEF("hanim_l_eyeball_site_viewpoint");
Viewpoint825->setDescription("l_eyeball_site_viewpoint looking forward");
Viewpoint825->setOrientation(new float[4]{0,1,0,3.141593});
Viewpoint825->setPosition(new float[3]{0,0,0});
HAnimSite822->addChildren(*Viewpoint825);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor826 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor826->setDescription("HAnimSite hanim_l_eyeball_site_view Viewpoint");
Anchor826->setUrl(new CString[1]{"#hanim_l_eyeball_site_viewpoint"}, 1);
CLOD* LOD827 = (CLOD *)(m_pScene.createNode("LOD"));
LOD827->setForceTransitions(True);
LOD827->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo828 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo828->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD827->addChildren(*WorldInfo828);

CShape* Shape829 = (CShape *)(m_pScene.createNode("Shape"));
Shape829->setDEF("HAnimSiteViewpointShape");
CIndexedFaceSet* IndexedFaceSet830 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet830->setDEF("SiteViewpointDiamondIFS");
IndexedFaceSet830->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet830->setCreaseAngle(0.5);
CCoordinate* Coordinate831 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate831->setPoint(new float[18]{0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
IndexedFaceSet830->setCoord(*Coordinate831);

Shape829->setGeometry(IndexedFaceSet830);

CAppearance* Appearance832 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material833 = (CMaterial *)(m_pScene.createNode("Material"));
Material833->setDiffuseColor(new float[3]{1,1,0});
Material833->setTransparency(0.3);
Appearance832->setMaterial(*Material833);

Shape829->setAppearance(*Appearance832);

LOD827->addChildren(*Shape829);

Anchor826->addChildren(*LOD827);

HAnimSite822->addChildren(*Anchor826);

HAnimSegment814->addChildren(*HAnimSite822);

HAnimJoint813->addChildren(*HAnimSegment814);

HAnimJoint710->addChildren(*HAnimJoint813);

CHAnimJoint* HAnimJoint834 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint834->setName("l_eyelid_joint");
HAnimJoint834->setDEF("hanim_l_eyelid_joint");
HAnimJoint834->setCenter(new float[3]{0.0336,1.6332,0.0502});
HAnimJoint834->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint834->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment835 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment835->setName("l_eyelid");
HAnimSegment835->setDEF("hanim_l_eyelid");
//Visualization sphere for <HAnimJoint name='l_eyelid_joint'/> is placed within <HAnimSegment name='l_eyelid'/>
CTouchSensor* TouchSensor836 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor836->setDescription("HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid");
HAnimSegment835->addChildren(*TouchSensor836);

CTransform* Transform837 = (CTransform *)(m_pScene.createNode("Transform"));
Transform837->setTranslation(new float[3]{0.0336,1.6332,0.0502});
CShape* Shape838 = (CShape *)(m_pScene.createNode("Shape"));
Shape838->setUSE("HAnimJointShape");
Transform837->addChildren(*Shape838);

HAnimSegment835->addChildren(*Transform837);

HAnimJoint834->addChildren(*HAnimSegment835);

HAnimJoint710->addChildren(*HAnimJoint834);

CHAnimJoint* HAnimJoint839 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint839->setName("l_eyebrow_joint");
HAnimJoint839->setDEF("hanim_l_eyebrow_joint");
HAnimJoint839->setCenter(new float[3]{0.0336,1.635,0.0506});
HAnimJoint839->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint839->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment840 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment840->setName("l_eyebrow");
HAnimSegment840->setDEF("hanim_l_eyebrow");
//Visualization sphere for <HAnimJoint name='l_eyebrow_joint'/> is placed within <HAnimSegment name='l_eyebrow'/>
CTouchSensor* TouchSensor841 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor841->setDescription("HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow");
HAnimSegment840->addChildren(*TouchSensor841);

CTransform* Transform842 = (CTransform *)(m_pScene.createNode("Transform"));
Transform842->setTranslation(new float[3]{0.0336,1.635,0.0506});
CShape* Shape843 = (CShape *)(m_pScene.createNode("Shape"));
Shape843->setUSE("HAnimJointShape");
Transform842->addChildren(*Shape843);

HAnimSegment840->addChildren(*Transform842);

HAnimJoint839->addChildren(*HAnimSegment840);

HAnimJoint710->addChildren(*HAnimJoint839);

CHAnimJoint* HAnimJoint844 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint844->setName("r_eyeball_joint");
HAnimJoint844->setDEF("hanim_r_eyeball_joint");
HAnimJoint844->setCenter(new float[3]{-0.0336,1.6332,0.0502});
HAnimJoint844->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint844->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment845 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment845->setName("r_eyeball");
HAnimSegment845->setDEF("hanim_r_eyeball");
//Visualization sphere for <HAnimJoint name='r_eyeball_joint'/> is placed within <HAnimSegment name='r_eyeball'/>
CTouchSensor* TouchSensor846 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor846->setDescription("HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball");
HAnimSegment845->addChildren(*TouchSensor846);

CTransform* Transform847 = (CTransform *)(m_pScene.createNode("Transform"));
Transform847->setTranslation(new float[3]{-0.0336,1.6332,0.0502});
CShape* Shape848 = (CShape *)(m_pScene.createNode("Shape"));
Shape848->setUSE("HAnimJointShape");
Transform847->addChildren(*Shape848);

HAnimSegment845->addChildren(*Transform847);

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_eyeball_joint'/> to <HAnimSite name='r_eyeball_site_view'/>
CShape* Shape849 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet850 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet850->setVertexCount(new int[1]{2});
CCoordinate* Coordinate851 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate851->setPoint(new float[6]{-0.0336,1.6332,0.0502,-0.034,1.64,0.05});
LineSet850->setCoord(*Coordinate851);

CColorRGBA* ColorRGBA852 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA852->setUSE("HAnimSiteViewpointLineColorRGBA");
LineSet850->setColor(*ColorRGBA852);

Shape849->setGeometry(LineSet850);

HAnimSegment845->addChildren(*Shape849);

CHAnimSite* HAnimSite853 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite853->setName("r_eyeball_site_view");
HAnimSite853->setDEF("hanim_r_eyeball_site_view");
HAnimSite853->setTranslation(new float[3]{-0.034,1.64,0.05});
//HAnimSite visualization shape
CTouchSensor* TouchSensor854 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor854->setDescription("HAnimSite r_eyeball_site_view");
HAnimSite853->addChildren(*TouchSensor854);

CShape* Shape855 = (CShape *)(m_pScene.createNode("Shape"));
Shape855->setUSE("HAnimSiteShape");
HAnimSite853->addChildren(*Shape855);

CViewpoint* Viewpoint856 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint856->setDEF("hanim_r_eyeball_site_viewpoint");
Viewpoint856->setDescription("r_eyeball_site_viewpoint looking forward");
Viewpoint856->setOrientation(new float[4]{0,1,0,3.141593});
Viewpoint856->setPosition(new float[3]{0,0,0});
HAnimSite853->addChildren(*Viewpoint856);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor857 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor857->setDescription("HAnimSite hanim_r_eyeball_site_view Viewpoint");
Anchor857->setUrl(new CString[1]{"#hanim_r_eyeball_site_viewpoint"}, 1);
CLOD* LOD858 = (CLOD *)(m_pScene.createNode("LOD"));
LOD858->setForceTransitions(True);
LOD858->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo859 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo859->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD858->addChildren(*WorldInfo859);

CShape* Shape860 = (CShape *)(m_pScene.createNode("Shape"));
Shape860->setUSE("HAnimSiteViewpointShape");
LOD858->addChildren(*Shape860);

Anchor857->addChildren(*LOD858);

HAnimSite853->addChildren(*Anchor857);

HAnimSegment845->addChildren(*HAnimSite853);

HAnimJoint844->addChildren(*HAnimSegment845);

HAnimJoint710->addChildren(*HAnimJoint844);

CHAnimJoint* HAnimJoint861 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint861->setName("r_eyelid_joint");
HAnimJoint861->setDEF("hanim_r_eyelid_joint");
HAnimJoint861->setCenter(new float[3]{-0.0336,1.6332,0.0502});
HAnimJoint861->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint861->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment862 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment862->setName("r_eyelid");
HAnimSegment862->setDEF("hanim_r_eyelid");
//Visualization sphere for <HAnimJoint name='r_eyelid_joint'/> is placed within <HAnimSegment name='r_eyelid'/>
CTouchSensor* TouchSensor863 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor863->setDescription("HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid");
HAnimSegment862->addChildren(*TouchSensor863);

CTransform* Transform864 = (CTransform *)(m_pScene.createNode("Transform"));
Transform864->setTranslation(new float[3]{-0.0336,1.6332,0.0502});
CShape* Shape865 = (CShape *)(m_pScene.createNode("Shape"));
Shape865->setUSE("HAnimJointShape");
Transform864->addChildren(*Shape865);

HAnimSegment862->addChildren(*Transform864);

HAnimJoint861->addChildren(*HAnimSegment862);

HAnimJoint710->addChildren(*HAnimJoint861);

CHAnimJoint* HAnimJoint866 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint866->setName("r_eyebrow_joint");
HAnimJoint866->setDEF("hanim_r_eyebrow_joint");
HAnimJoint866->setCenter(new float[3]{-0.0336,1.635,0.0506});
HAnimJoint866->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint866->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment867 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment867->setName("r_eyebrow");
HAnimSegment867->setDEF("hanim_r_eyebrow");
//Visualization sphere for <HAnimJoint name='r_eyebrow_joint'/> is placed within <HAnimSegment name='r_eyebrow'/>
CTouchSensor* TouchSensor868 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor868->setDescription("HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow");
HAnimSegment867->addChildren(*TouchSensor868);

CTransform* Transform869 = (CTransform *)(m_pScene.createNode("Transform"));
Transform869->setTranslation(new float[3]{-0.0336,1.635,0.0506});
CShape* Shape870 = (CShape *)(m_pScene.createNode("Shape"));
Shape870->setUSE("HAnimJointShape");
Transform869->addChildren(*Shape870);

HAnimSegment867->addChildren(*Transform869);

HAnimJoint866->addChildren(*HAnimSegment867);

HAnimJoint710->addChildren(*HAnimJoint866);

CHAnimJoint* HAnimJoint871 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint871->setName("temporomandibular");
HAnimJoint871->setDEF("hanim_temporomandibular");
HAnimJoint871->setCenter(new float[3]{0,1.63,0.015});
HAnimJoint871->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint871->setLlimit(new float[3]{0,0,0}, 3);
//Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint
CHAnimSegment* HAnimSegment872 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment872->setName("jaw");
HAnimSegment872->setDEF("hanim_jaw");
//Visualization sphere for <HAnimJoint name='temporomandibular'/> is placed within <HAnimSegment name='jaw'/>
CTouchSensor* TouchSensor873 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor873->setDescription("HAnimJoint temporomandibular, HAnimSegment jaw");
HAnimSegment872->addChildren(*TouchSensor873);

CTransform* Transform874 = (CTransform *)(m_pScene.createNode("Transform"));
Transform874->setTranslation(new float[3]{0,1.63,0.015});
CShape* Shape875 = (CShape *)(m_pScene.createNode("Shape"));
Shape875->setUSE("HAnimJointShape");
Transform874->addChildren(*Shape875);

HAnimSegment872->addChildren(*Transform874);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_l_site_pt'/>
CShape* Shape876 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet877 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet877->setVertexCount(new int[1]{2});
CCoordinate* Coordinate878 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate878->setPoint(new float[6]{0,1.63,0.015,0.045,1.63,0});
LineSet877->setCoord(*Coordinate878);

CColorRGBA* ColorRGBA879 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA879->setUSE("HAnimSiteLineColorRGBA");
LineSet877->setColor(*ColorRGBA879);

Shape876->setGeometry(LineSet877);

HAnimSegment872->addChildren(*Shape876);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_r_site_pt'/>
CShape* Shape880 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet881 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet881->setVertexCount(new int[1]{2});
CCoordinate* Coordinate882 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate882->setPoint(new float[6]{0,1.63,0.015,-0.045,1.63,0});
LineSet881->setCoord(*Coordinate882);

CColorRGBA* ColorRGBA883 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA883->setUSE("HAnimSiteLineColorRGBA");
LineSet881->setColor(*ColorRGBA883);

Shape880->setGeometry(LineSet881);

HAnimSegment872->addChildren(*Shape880);

CHAnimSite* HAnimSite884 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite884->setName("temporomandibular_l_site_pt");
HAnimSite884->setDEF("hanim_temporomandibular_l_site_pt");
HAnimSite884->setTranslation(new float[3]{0.045,1.63,0});
//HAnimSite visualization shape
CTouchSensor* TouchSensor885 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor885->setDescription("HAnimSite temporomandibular_l_site_pt");
HAnimSite884->addChildren(*TouchSensor885);

CShape* Shape886 = (CShape *)(m_pScene.createNode("Shape"));
Shape886->setUSE("HAnimSiteShape");
HAnimSite884->addChildren(*Shape886);

HAnimSegment872->addChildren(*HAnimSite884);

CHAnimSite* HAnimSite887 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite887->setName("temporomandibular_r_site_pt");
HAnimSite887->setDEF("hanim_temporomandibular_r_site_pt");
HAnimSite887->setTranslation(new float[3]{-0.045,1.63,0});
//HAnimSite visualization shape
CTouchSensor* TouchSensor888 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor888->setDescription("HAnimSite temporomandibular_r_site_pt");
HAnimSite887->addChildren(*TouchSensor888);

CShape* Shape889 = (CShape *)(m_pScene.createNode("Shape"));
Shape889->setUSE("HAnimSiteShape");
HAnimSite887->addChildren(*Shape889);

HAnimSegment872->addChildren(*HAnimSite887);

HAnimJoint871->addChildren(*HAnimSegment872);

HAnimJoint710->addChildren(*HAnimJoint871);

HAnimJoint701->addChildren(*HAnimJoint710);

HAnimJoint692->addChildren(*HAnimJoint701);

HAnimJoint683->addChildren(*HAnimJoint692);

HAnimJoint674->addChildren(*HAnimJoint683);

HAnimJoint665->addChildren(*HAnimJoint674);

HAnimJoint656->addChildren(*HAnimJoint665);

HAnimJoint633->addChildren(*HAnimJoint656);

HAnimJoint602->addChildren(*HAnimJoint633);

CHAnimJoint* HAnimJoint890 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint890->setName("l_sternoclavicular");
HAnimJoint890->setDEF("hanim_l_sternoclavicular");
HAnimJoint890->setCenter(new float[3]{0.082,1.4488,-0.0353});
HAnimJoint890->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint890->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment891 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment891->setName("l_clavicle");
HAnimSegment891->setDEF("hanim_l_clavicle");
//Visualization sphere for <HAnimJoint name='l_sternoclavicular'/> is placed within <HAnimSegment name='l_clavicle'/>
CTouchSensor* TouchSensor892 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor892->setDescription("HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle");
HAnimSegment891->addChildren(*TouchSensor892);

CTransform* Transform893 = (CTransform *)(m_pScene.createNode("Transform"));
Transform893->setTranslation(new float[3]{0.082,1.4488,-0.0353});
CShape* Shape894 = (CShape *)(m_pScene.createNode("Shape"));
Shape894->setUSE("HAnimJointShape");
Transform893->addChildren(*Shape894);

HAnimSegment891->addChildren(*Transform893);

//HAnimSegment visualization line from current <HAnimJoint name='l_sternoclavicular'/> to child <HAnimJoint name='l_acromioclavicular'/>
CShape* Shape895 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet896 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet896->setVertexCount(new int[1]{2});
CCoordinate* Coordinate897 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate897->setPoint(new float[6]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424});
LineSet896->setCoord(*Coordinate897);

CColorRGBA* ColorRGBA898 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA898->setUSE("HAnimSegmentLineColorRGBA");
LineSet896->setColor(*ColorRGBA898);

Shape895->setGeometry(LineSet896);

HAnimSegment891->addChildren(*Shape895);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_clavicale_pt'/>
CShape* Shape899 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet900 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet900->setVertexCount(new int[1]{2});
CCoordinate* Coordinate901 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate901->setPoint(new float[6]{0.082,1.4488,-0.0353,0.0271,1.4943,0.0394});
LineSet900->setCoord(*Coordinate901);

CColorRGBA* ColorRGBA902 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA902->setUSE("HAnimSiteLineColorRGBA");
LineSet900->setColor(*ColorRGBA902);

Shape899->setGeometry(LineSet900);

HAnimSegment891->addChildren(*Shape899);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_acromion_pt'/>
CShape* Shape903 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet904 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet904->setVertexCount(new int[1]{2});
CCoordinate* Coordinate905 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate905->setPoint(new float[6]{0.082,1.4488,-0.0353,0.2032,1.476,-0.049});
LineSet904->setCoord(*Coordinate905);

CColorRGBA* ColorRGBA906 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA906->setUSE("HAnimSiteLineColorRGBA");
LineSet904->setColor(*ColorRGBA906);

Shape903->setGeometry(LineSet904);

HAnimSegment891->addChildren(*Shape903);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_ant_pt'/>
CShape* Shape907 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet908 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet908->setVertexCount(new int[1]{2});
CCoordinate* Coordinate909 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate909->setPoint(new float[6]{0.082,1.4488,-0.0353,0.1777,1.4065,-0.0075});
LineSet908->setCoord(*Coordinate909);

CColorRGBA* ColorRGBA910 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA910->setUSE("HAnimSiteLineColorRGBA");
LineSet908->setColor(*ColorRGBA910);

Shape907->setGeometry(LineSet908);

HAnimSegment891->addChildren(*Shape907);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_post_pt'/>
CShape* Shape911 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet912 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet912->setVertexCount(new int[1]{2});
CCoordinate* Coordinate913 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate913->setPoint(new float[6]{0.082,1.4488,-0.0353,0.1706,1.4072,-0.0875});
LineSet912->setCoord(*Coordinate913);

CColorRGBA* ColorRGBA914 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA914->setUSE("HAnimSiteLineColorRGBA");
LineSet912->setColor(*ColorRGBA914);

Shape911->setGeometry(LineSet912);

HAnimSegment891->addChildren(*Shape911);

CHAnimSite* HAnimSite915 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite915->setName("l_clavicle_pt");
HAnimSite915->setDEF("hanim_l_clavicle_pt");
HAnimSite915->setTranslation(new float[3]{0.0271,1.4943,0.0394});
//HAnimSite visualization shape
CTouchSensor* TouchSensor916 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor916->setDescription("HAnimSite l_clavicale_pt");
HAnimSite915->addChildren(*TouchSensor916);

CShape* Shape917 = (CShape *)(m_pScene.createNode("Shape"));
Shape917->setUSE("HAnimSiteShape");
HAnimSite915->addChildren(*Shape917);

HAnimSegment891->addChildren(*HAnimSite915);

CHAnimSite* HAnimSite918 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite918->setName("l_acromion_pt");
HAnimSite918->setDEF("hanim_l_acromion_pt");
HAnimSite918->setTranslation(new float[3]{0.2032,1.476,-0.049});
//HAnimSite visualization shape
CTouchSensor* TouchSensor919 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor919->setDescription("HAnimSite l_acromion_pt");
HAnimSite918->addChildren(*TouchSensor919);

CShape* Shape920 = (CShape *)(m_pScene.createNode("Shape"));
Shape920->setUSE("HAnimSiteShape");
HAnimSite918->addChildren(*Shape920);

HAnimSegment891->addChildren(*HAnimSite918);

CHAnimSite* HAnimSite921 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite921->setName("l_axilla_proximal_pt");
HAnimSite921->setDEF("hanim_l_axilla_proximal_pt");
HAnimSite921->setTranslation(new float[3]{0.1777,1.4065,-0.0075});
//HAnimSite visualization shape
CTouchSensor* TouchSensor922 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor922->setDescription("HAnimSite l_axilla_ant_pt");
HAnimSite921->addChildren(*TouchSensor922);

CShape* Shape923 = (CShape *)(m_pScene.createNode("Shape"));
Shape923->setUSE("HAnimSiteShape");
HAnimSite921->addChildren(*Shape923);

HAnimSegment891->addChildren(*HAnimSite921);

CHAnimSite* HAnimSite924 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite924->setName("l_axilla_distal_pt");
HAnimSite924->setDEF("hanim_l_axilla_distal_pt");
HAnimSite924->setTranslation(new float[3]{0.1706,1.4072,-0.0875});
//HAnimSite visualization shape
CTouchSensor* TouchSensor925 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor925->setDescription("HAnimSite l_axilla_post_pt");
HAnimSite924->addChildren(*TouchSensor925);

CShape* Shape926 = (CShape *)(m_pScene.createNode("Shape"));
Shape926->setUSE("HAnimSiteShape");
HAnimSite924->addChildren(*Shape926);

HAnimSegment891->addChildren(*HAnimSite924);

HAnimJoint890->addChildren(*HAnimSegment891);

CHAnimJoint* HAnimJoint927 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint927->setName("l_acromioclavicular");
HAnimJoint927->setDEF("hanim_l_acromioclavicular");
HAnimJoint927->setCenter(new float[3]{0.0962,1.4269,-0.0424});
HAnimJoint927->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint927->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment928 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment928->setName("l_scapula");
HAnimSegment928->setDEF("hanim_l_scapula");
//Visualization sphere for <HAnimJoint name='l_acromioclavicular'/> is placed within <HAnimSegment name='l_scapula'/>
CTouchSensor* TouchSensor929 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor929->setDescription("HAnimJoint l_acromioclavicular, HAnimSegment l_scapula");
HAnimSegment928->addChildren(*TouchSensor929);

CTransform* Transform930 = (CTransform *)(m_pScene.createNode("Transform"));
Transform930->setTranslation(new float[3]{0.0962,1.4269,-0.0424});
CShape* Shape931 = (CShape *)(m_pScene.createNode("Shape"));
Shape931->setUSE("HAnimJointShape");
Transform930->addChildren(*Shape931);

HAnimSegment928->addChildren(*Transform930);

//HAnimSegment visualization line from current <HAnimJoint name='l_acromioclavicular'/> to child <HAnimJoint name='l_shoulder'/>
CShape* Shape932 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet933 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet933->setVertexCount(new int[1]{2});
CCoordinate* Coordinate934 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate934->setPoint(new float[6]{0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387});
LineSet933->setCoord(*Coordinate934);

CColorRGBA* ColorRGBA935 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA935->setUSE("HAnimSegmentLineColorRGBA");
LineSet933->setColor(*ColorRGBA935);

Shape932->setGeometry(LineSet933);

HAnimSegment928->addChildren(*Shape932);

HAnimJoint927->addChildren(*HAnimSegment928);

CHAnimJoint* HAnimJoint936 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint936->setName("l_shoulder");
HAnimJoint936->setDEF("hanim_l_shoulder");
HAnimJoint936->setCenter(new float[3]{0.2029,1.4376,-0.0387});
HAnimJoint936->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint936->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment937 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment937->setName("l_upperarm");
HAnimSegment937->setDEF("hanim_l_upperarm");
//Visualization sphere for <HAnimJoint name='l_shoulder'/> is placed within <HAnimSegment name='l_upperarm'/>
CTouchSensor* TouchSensor938 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor938->setDescription("HAnimJoint l_shoulder, HAnimSegment l_upperarm");
HAnimSegment937->addChildren(*TouchSensor938);

CTransform* Transform939 = (CTransform *)(m_pScene.createNode("Transform"));
Transform939->setTranslation(new float[3]{0.2029,1.4376,-0.0387});
CShape* Shape940 = (CShape *)(m_pScene.createNode("Shape"));
Shape940->setUSE("HAnimJointShape");
Transform939->addChildren(*Shape940);

HAnimSegment937->addChildren(*Transform939);

//HAnimSegment visualization line from current <HAnimJoint name='l_shoulder'/> to child <HAnimJoint name='l_elbow'/>
CShape* Shape941 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet942 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet942->setVertexCount(new int[1]{2});
CCoordinate* Coordinate943 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate943->setPoint(new float[6]{0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682});
LineSet942->setCoord(*Coordinate943);

CColorRGBA* ColorRGBA944 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA944->setUSE("HAnimSegmentLineColorRGBA");
LineSet942->setColor(*ColorRGBA944);

Shape941->setGeometry(LineSet942);

HAnimSegment937->addChildren(*Shape941);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_shoulder'/> to <HAnimSite name='l_humeral_lateral_epicn_pt'/>
CShape* Shape945 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet946 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet946->setVertexCount(new int[1]{2});
CCoordinate* Coordinate947 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate947->setPoint(new float[6]{0.2029,1.4376,-0.0387,0.228,1.1482,-0.11});
LineSet946->setCoord(*Coordinate947);

CColorRGBA* ColorRGBA948 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA948->setUSE("HAnimSiteLineColorRGBA");
LineSet946->setColor(*ColorRGBA948);

Shape945->setGeometry(LineSet946);

HAnimSegment937->addChildren(*Shape945);

CHAnimSite* HAnimSite949 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite949->setName("l_humeral_lateral_epicondyle_pt");
HAnimSite949->setDEF("hanim_l_humeral_lateral_epicondyle_pt");
HAnimSite949->setTranslation(new float[3]{0.228,1.1482,-0.11});
//HAnimSite visualization shape
CTouchSensor* TouchSensor950 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor950->setDescription("HAnimSite l_humeral_lateral_epicn_pt");
HAnimSite949->addChildren(*TouchSensor950);

CShape* Shape951 = (CShape *)(m_pScene.createNode("Shape"));
Shape951->setUSE("HAnimSiteShape");
HAnimSite949->addChildren(*Shape951);

HAnimSegment937->addChildren(*HAnimSite949);

HAnimJoint936->addChildren(*HAnimSegment937);

CHAnimJoint* HAnimJoint952 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint952->setName("l_elbow");
HAnimJoint952->setDEF("hanim_l_elbow");
HAnimJoint952->setCenter(new float[3]{0.2014,1.1357,-0.0682});
HAnimJoint952->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint952->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment953 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment953->setName("l_forearm");
HAnimSegment953->setDEF("hanim_l_forearm");
//Visualization sphere for <HAnimJoint name='l_elbow'/> is placed within <HAnimSegment name='l_forearm'/>
CTouchSensor* TouchSensor954 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor954->setDescription("HAnimJoint l_elbow, HAnimSegment l_forearm");
HAnimSegment953->addChildren(*TouchSensor954);

CTransform* Transform955 = (CTransform *)(m_pScene.createNode("Transform"));
Transform955->setTranslation(new float[3]{0.2014,1.1357,-0.0682});
CShape* Shape956 = (CShape *)(m_pScene.createNode("Shape"));
Shape956->setUSE("HAnimJointShape");
Transform955->addChildren(*Shape956);

HAnimSegment953->addChildren(*Transform955);

//HAnimSegment visualization line from current <HAnimJoint name='l_elbow'/> to child <HAnimJoint name='l_radiocarpal'/>
CShape* Shape957 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet958 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet958->setVertexCount(new int[1]{2});
CCoordinate* Coordinate959 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate959->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583});
LineSet958->setCoord(*Coordinate959);

CColorRGBA* ColorRGBA960 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA960->setUSE("HAnimSegmentLineColorRGBA");
LineSet958->setColor(*ColorRGBA960);

Shape957->setGeometry(LineSet958);

HAnimSegment953->addChildren(*Shape957);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radial_styloid_pt'/>
CShape* Shape961 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet962 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet962->setVertexCount(new int[1]{2});
CCoordinate* Coordinate963 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate963->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.1901,0.8645,-0.0415});
LineSet962->setCoord(*Coordinate963);

CColorRGBA* ColorRGBA964 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA964->setUSE("HAnimSiteLineColorRGBA");
LineSet962->setColor(*ColorRGBA964);

Shape961->setGeometry(LineSet962);

HAnimSegment953->addChildren(*Shape961);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_olecranon_pt'/>
CShape* Shape965 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet966 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet966->setVertexCount(new int[1]{2});
CCoordinate* Coordinate967 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate967->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.1962,1.1375,-0.1123});
LineSet966->setCoord(*Coordinate967);

CColorRGBA* ColorRGBA968 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA968->setUSE("HAnimSiteLineColorRGBA");
LineSet966->setColor(*ColorRGBA968);

Shape965->setGeometry(LineSet966);

HAnimSegment953->addChildren(*Shape965);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_humeral_medial_epicn_pt'/>
CShape* Shape969 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet970 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet970->setVertexCount(new int[1]{2});
CCoordinate* Coordinate971 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate971->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.1735,1.1272,-0.1113});
LineSet970->setCoord(*Coordinate971);

CColorRGBA* ColorRGBA972 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA972->setUSE("HAnimSiteLineColorRGBA");
LineSet970->setColor(*ColorRGBA972);

Shape969->setGeometry(LineSet970);

HAnimSegment953->addChildren(*Shape969);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radiale_pt'/>
CShape* Shape973 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet974 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet974->setVertexCount(new int[1]{2});
CCoordinate* Coordinate975 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate975->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.2182,1.1212,-0.1167});
LineSet974->setCoord(*Coordinate975);

CColorRGBA* ColorRGBA976 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA976->setUSE("HAnimSiteLineColorRGBA");
LineSet974->setColor(*ColorRGBA976);

Shape973->setGeometry(LineSet974);

HAnimSegment953->addChildren(*Shape973);

CHAnimSite* HAnimSite977 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite977->setName("l_radial_styloid_pt");
HAnimSite977->setDEF("hanim_l_radial_styloid_pt");
HAnimSite977->setTranslation(new float[3]{0.1901,0.8645,-0.0415});
//HAnimSite visualization shape
CTouchSensor* TouchSensor978 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor978->setDescription("HAnimSite l_radial_styloid_pt");
HAnimSite977->addChildren(*TouchSensor978);

CShape* Shape979 = (CShape *)(m_pScene.createNode("Shape"));
Shape979->setUSE("HAnimSiteShape");
HAnimSite977->addChildren(*Shape979);

HAnimSegment953->addChildren(*HAnimSite977);

CHAnimSite* HAnimSite980 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite980->setName("l_olecranon_pt");
HAnimSite980->setDEF("hanim_l_olecranon_pt");
HAnimSite980->setTranslation(new float[3]{0.1962,1.1375,-0.1123});
//HAnimSite visualization shape
CTouchSensor* TouchSensor981 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor981->setDescription("HAnimSite l_olecranon_pt");
HAnimSite980->addChildren(*TouchSensor981);

CShape* Shape982 = (CShape *)(m_pScene.createNode("Shape"));
Shape982->setUSE("HAnimSiteShape");
HAnimSite980->addChildren(*Shape982);

HAnimSegment953->addChildren(*HAnimSite980);

CHAnimSite* HAnimSite983 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite983->setName("l_humeral_medial_epicondyle_pt");
HAnimSite983->setDEF("hanim_l_humeral_medial_epicondyle_pt");
HAnimSite983->setTranslation(new float[3]{0.1735,1.1272,-0.1113});
//HAnimSite visualization shape
CTouchSensor* TouchSensor984 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor984->setDescription("HAnimSite l_humeral_medial_epicn_pt");
HAnimSite983->addChildren(*TouchSensor984);

CShape* Shape985 = (CShape *)(m_pScene.createNode("Shape"));
Shape985->setUSE("HAnimSiteShape");
HAnimSite983->addChildren(*Shape985);

HAnimSegment953->addChildren(*HAnimSite983);

CHAnimSite* HAnimSite986 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite986->setName("l_radiale_pt");
HAnimSite986->setDEF("hanim_l_radiale_pt");
HAnimSite986->setTranslation(new float[3]{0.2182,1.1212,-0.1167});
//HAnimSite visualization shape
CTouchSensor* TouchSensor987 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor987->setDescription("HAnimSite l_radiale_pt");
HAnimSite986->addChildren(*TouchSensor987);

CShape* Shape988 = (CShape *)(m_pScene.createNode("Shape"));
Shape988->setUSE("HAnimSiteShape");
HAnimSite986->addChildren(*Shape988);

HAnimSegment953->addChildren(*HAnimSite986);

HAnimJoint952->addChildren(*HAnimSegment953);

CHAnimJoint* HAnimJoint989 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint989->setName("l_radiocarpal");
HAnimJoint989->setDEF("hanim_l_radiocarpal");
HAnimJoint989->setCenter(new float[3]{0.1984,0.8663,-0.0583});
HAnimJoint989->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint989->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment990 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment990->setName("l_carpal");
HAnimSegment990->setDEF("hanim_l_carpal");
//Visualization sphere for <HAnimJoint name='l_radiocarpal'/> is placed within <HAnimSegment name='l_carpal'/>
CTouchSensor* TouchSensor991 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor991->setDescription("HAnimJoint l_radiocarpal, HAnimSegment l_carpal");
HAnimSegment990->addChildren(*TouchSensor991);

CTransform* Transform992 = (CTransform *)(m_pScene.createNode("Transform"));
Transform992->setTranslation(new float[3]{0.1984,0.8663,-0.0583});
CShape* Shape993 = (CShape *)(m_pScene.createNode("Shape"));
Shape993->setUSE("HAnimJointShape");
Transform992->addChildren(*Shape993);

HAnimSegment990->addChildren(*Transform992);

//HAnimSegment visualization line from current <HAnimJoint name='l_radiocarpal'/> to child <HAnimJoint name='l_thumb1'/>
CShape* Shape994 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet995 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet995->setVertexCount(new int[1]{2});
CCoordinate* Coordinate996 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate996->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534});
LineSet995->setCoord(*Coordinate996);

CColorRGBA* ColorRGBA997 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA997->setUSE("HAnimSegmentLineColorRGBA");
LineSet995->setColor(*ColorRGBA997);

Shape994->setGeometry(LineSet995);

HAnimSegment990->addChildren(*Shape994);

//HAnimSegment visualization line from current <HAnimJoint name='l_radiocarpal'/> to child <HAnimJoint name='l_index0'/>
CShape* Shape998 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet999 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet999->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1000 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1000->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028});
LineSet999->setCoord(*Coordinate1000);

CColorRGBA* ColorRGBA1001 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1001->setUSE("HAnimSegmentLineColorRGBA");
LineSet999->setColor(*ColorRGBA1001);

Shape998->setGeometry(LineSet999);

HAnimSegment990->addChildren(*Shape998);

//HAnimSegment visualization line from current <HAnimJoint name='l_radiocarpal'/> to child <HAnimJoint name='l_middle0'/>
CShape* Shape1002 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1003 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1003->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1004 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1004->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053});
LineSet1003->setCoord(*Coordinate1004);

CColorRGBA* ColorRGBA1005 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1005->setUSE("HAnimSegmentLineColorRGBA");
LineSet1003->setColor(*ColorRGBA1005);

Shape1002->setGeometry(LineSet1003);

HAnimSegment990->addChildren(*Shape1002);

//HAnimSegment visualization line from current <HAnimJoint name='l_radiocarpal'/> to child <HAnimJoint name='l_ring0'/>
CShape* Shape1006 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1007 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1007->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1008 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1008->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794});
LineSet1007->setCoord(*Coordinate1008);

CColorRGBA* ColorRGBA1009 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1009->setUSE("HAnimSegmentLineColorRGBA");
LineSet1007->setColor(*ColorRGBA1009);

Shape1006->setGeometry(LineSet1007);

HAnimSegment990->addChildren(*Shape1006);

//HAnimSegment visualization line from current <HAnimJoint name='l_radiocarpal'/> to child <HAnimJoint name='l_pinky0'/>
CShape* Shape1010 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1011 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1011->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1012 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1012->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036});
LineSet1011->setCoord(*Coordinate1012);

CColorRGBA* ColorRGBA1013 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1013->setUSE("HAnimSegmentLineColorRGBA");
LineSet1011->setColor(*ColorRGBA1013);

Shape1010->setGeometry(LineSet1011);

HAnimSegment990->addChildren(*Shape1010);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_radiocarpal'/> to <HAnimSite name='l_metacarpal_pha2_pt'/>
CShape* Shape1014 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1015 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1015->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1016 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1016->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.2009,0.8139,-0.0237});
LineSet1015->setCoord(*Coordinate1016);

CColorRGBA* ColorRGBA1017 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1017->setUSE("HAnimSiteLineColorRGBA");
LineSet1015->setColor(*ColorRGBA1017);

Shape1014->setGeometry(LineSet1015);

HAnimSegment990->addChildren(*Shape1014);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_radiocarpal'/> to <HAnimSite name='l_ulnar_styloid_pt'/>
CShape* Shape1018 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1019 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1019->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1020 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1020->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.2142,0.8529,-0.0648});
LineSet1019->setCoord(*Coordinate1020);

CColorRGBA* ColorRGBA1021 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1021->setUSE("HAnimSiteLineColorRGBA");
LineSet1019->setColor(*ColorRGBA1021);

Shape1018->setGeometry(LineSet1019);

HAnimSegment990->addChildren(*Shape1018);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_radiocarpal'/> to <HAnimSite name='l_metacarpal_pha5_pt'/>
CShape* Shape1022 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1023 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1023->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1024 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1024->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1929,0.786,-0.1122});
LineSet1023->setCoord(*Coordinate1024);

CColorRGBA* ColorRGBA1025 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1025->setUSE("HAnimSiteLineColorRGBA");
LineSet1023->setColor(*ColorRGBA1025);

Shape1022->setGeometry(LineSet1023);

HAnimSegment990->addChildren(*Shape1022);

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_radiocarpal'/> to <HAnimSite name='l_hand_front_view'/>
CShape* Shape1026 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1027 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1027->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1028 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1028->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.3,0.75,0.45});
LineSet1027->setCoord(*Coordinate1028);

CColorRGBA* ColorRGBA1029 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1029->setUSE("HAnimSiteViewpointLineColorRGBA");
LineSet1027->setColor(*ColorRGBA1029);

Shape1026->setGeometry(LineSet1027);

HAnimSegment990->addChildren(*Shape1026);

CHAnimSite* HAnimSite1030 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1030->setName("l_metacarpal_phalanx_2_pt");
HAnimSite1030->setDEF("hanim_l_metacarpal_phalanx_2_pt");
HAnimSite1030->setTranslation(new float[3]{0.2009,0.8139,-0.0237});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1031 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1031->setDescription("HAnimSite l_metacarpal_pha2_pt");
HAnimSite1030->addChildren(*TouchSensor1031);

CShape* Shape1032 = (CShape *)(m_pScene.createNode("Shape"));
Shape1032->setUSE("HAnimSiteShape");
HAnimSite1030->addChildren(*Shape1032);

HAnimSegment990->addChildren(*HAnimSite1030);

CHAnimSite* HAnimSite1033 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1033->setName("l_ulnar_styloid_pt");
HAnimSite1033->setDEF("hanim_l_ulnar_styloid_pt");
HAnimSite1033->setTranslation(new float[3]{0.2142,0.8529,-0.0648});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1034 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1034->setDescription("HAnimSite l_ulnar_styloid_pt");
HAnimSite1033->addChildren(*TouchSensor1034);

CShape* Shape1035 = (CShape *)(m_pScene.createNode("Shape"));
Shape1035->setUSE("HAnimSiteShape");
HAnimSite1033->addChildren(*Shape1035);

HAnimSegment990->addChildren(*HAnimSite1033);

CHAnimSite* HAnimSite1036 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1036->setName("l_metacarpal_phalanx_5_pt");
HAnimSite1036->setDEF("hanim_l_metacarpal_phalanx_5_pt");
HAnimSite1036->setTranslation(new float[3]{0.1929,0.786,-0.1122});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1037 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1037->setDescription("HAnimSite l_metacarpal_pha5_pt");
HAnimSite1036->addChildren(*TouchSensor1037);

CShape* Shape1038 = (CShape *)(m_pScene.createNode("Shape"));
Shape1038->setUSE("HAnimSiteShape");
HAnimSite1036->addChildren(*Shape1038);

HAnimSegment990->addChildren(*HAnimSite1036);

CHAnimSite* HAnimSite1039 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1039->setName("l_hand_front_view");
HAnimSite1039->setDEF("hanim_l_hand_front_view");
HAnimSite1039->setTranslation(new float[3]{0.3,0.75,0.45});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1040 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1040->setDescription("HAnimSite l_hand_front_view");
HAnimSite1039->addChildren(*TouchSensor1040);

CShape* Shape1041 = (CShape *)(m_pScene.createNode("Shape"));
Shape1041->setUSE("HAnimSiteShape");
HAnimSite1039->addChildren(*Shape1041);

CViewpoint* Viewpoint1042 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1042->setDEF("hanim_l_hand_front_viewpoint");
Viewpoint1042->setCenterOfRotation(new float[3]{0,0.7,0});
Viewpoint1042->setDescription("left hand front");
Viewpoint1042->setPosition(new float[3]{0,0,0});
HAnimSite1039->addChildren(*Viewpoint1042);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1043 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1043->setDescription("HAnimSite hanim_l_hand_front_view Viewpoint");
Anchor1043->setUrl(new CString[1]{"#hanim_l_hand_front_viewpoint"}, 1);
CLOD* LOD1044 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1044->setForceTransitions(True);
LOD1044->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo1045 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1045->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1044->addChildren(*WorldInfo1045);

CShape* Shape1046 = (CShape *)(m_pScene.createNode("Shape"));
Shape1046->setUSE("HAnimSiteViewpointShape");
LOD1044->addChildren(*Shape1046);

Anchor1043->addChildren(*LOD1044);

HAnimSite1039->addChildren(*Anchor1043);

HAnimSegment990->addChildren(*HAnimSite1039);

HAnimJoint989->addChildren(*HAnimSegment990);

CHAnimJoint* HAnimJoint1047 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1047->setName("l_carpometacarpal_1");
HAnimJoint1047->setDEF("hanim_l_carpometacarpal_1");
HAnimJoint1047->setCenter(new float[3]{0.1924,0.8472,-0.0534});
HAnimJoint1047->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1047->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1048 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1048->setName("l_metacarpal_1");
HAnimSegment1048->setDEF("hanim_l_metacarpal_1");
//Visualization sphere for <HAnimJoint name='l_thumb1'/> is placed within <HAnimSegment name='l_metacarpal_1'/>
CTouchSensor* TouchSensor1049 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1049->setDescription("HAnimJoint l_thumb1, HAnimSegment l_metacarpal_1");
HAnimSegment1048->addChildren(*TouchSensor1049);

CTransform* Transform1050 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1050->setTranslation(new float[3]{0.1924,0.8472,-0.0534});
CShape* Shape1051 = (CShape *)(m_pScene.createNode("Shape"));
Shape1051->setUSE("HAnimJointShape");
Transform1050->addChildren(*Shape1051);

HAnimSegment1048->addChildren(*Transform1050);

//HAnimSegment visualization line from current <HAnimJoint name='l_thumb1'/> to child <HAnimJoint name='l_thumb2'/>
CShape* Shape1052 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1053 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1053->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1054 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1054->setPoint(new float[6]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246});
LineSet1053->setCoord(*Coordinate1054);

CColorRGBA* ColorRGBA1055 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1055->setUSE("HAnimSegmentLineColorRGBA");
LineSet1053->setColor(*ColorRGBA1055);

Shape1052->setGeometry(LineSet1053);

HAnimSegment1048->addChildren(*Shape1052);

HAnimJoint1047->addChildren(*HAnimSegment1048);

CHAnimJoint* HAnimJoint1056 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1056->setName("l_metacarpophalangeal_1");
HAnimJoint1056->setDEF("hanim_l_metacarpophalangeal_1");
HAnimJoint1056->setCenter(new float[3]{0.1951,0.8226,0.0246});
HAnimJoint1056->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1056->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1057 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1057->setName("l_carpal_proximal_phalanx_1");
HAnimSegment1057->setDEF("hanim_l_carpal_proximal_phalanx_1");
//Visualization sphere for <HAnimJoint name='l_thumb2'/> is placed within <HAnimSegment name='l_carpal_proximal_phalanx_1'/>
CTouchSensor* TouchSensor1058 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1058->setDescription("HAnimJoint l_thumb2, HAnimSegment l_carpal_proximal_phalanx_1");
HAnimSegment1057->addChildren(*TouchSensor1058);

CTransform* Transform1059 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1059->setTranslation(new float[3]{0.1951,0.8226,0.0246});
CShape* Shape1060 = (CShape *)(m_pScene.createNode("Shape"));
Shape1060->setUSE("HAnimJointShape");
Transform1059->addChildren(*Shape1060);

HAnimSegment1057->addChildren(*Transform1059);

//HAnimSegment visualization line from current <HAnimJoint name='l_thumb2'/> to child <HAnimJoint name='l_thumb3'/>
CShape* Shape1061 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1062 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1062->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1063 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1063->setPoint(new float[6]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464});
LineSet1062->setCoord(*Coordinate1063);

CColorRGBA* ColorRGBA1064 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1064->setUSE("HAnimSegmentLineColorRGBA");
LineSet1062->setColor(*ColorRGBA1064);

Shape1061->setGeometry(LineSet1062);

HAnimSegment1057->addChildren(*Shape1061);

HAnimJoint1056->addChildren(*HAnimSegment1057);

CHAnimJoint* HAnimJoint1065 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1065->setName("l_carpal_interphalangeal_1");
HAnimJoint1065->setDEF("hanim_l_carpal_interphalangeal_1");
HAnimJoint1065->setCenter(new float[3]{0.1955,0.8159,0.0464});
HAnimJoint1065->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1065->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1066 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1066->setName("l_carpal_distal_phalanx_1");
HAnimSegment1066->setDEF("hanim_l_carpal_distal_phalanx_1");
//Visualization sphere for <HAnimJoint name='l_thumb3'/> is placed within <HAnimSegment name='l_carpal_distal_phalanx_1'/>
CTouchSensor* TouchSensor1067 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1067->setDescription("HAnimJoint l_thumb3, HAnimSegment l_carpal_distal_phalanx_1");
HAnimSegment1066->addChildren(*TouchSensor1067);

CTransform* Transform1068 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1068->setTranslation(new float[3]{0.1955,0.8159,0.0464});
CShape* Shape1069 = (CShape *)(m_pScene.createNode("Shape"));
Shape1069->setUSE("HAnimJointShape");
Transform1068->addChildren(*Shape1069);

HAnimSegment1066->addChildren(*Transform1068);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_thumb3'/> to <HAnimSite name='l_thumb_distal_tip'/>
CShape* Shape1070 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1071 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1071->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1072 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1072->setPoint(new float[6]{0.1955,0.8159,0.0464,0.1982,0.8061,0.0759});
LineSet1071->setCoord(*Coordinate1072);

CColorRGBA* ColorRGBA1073 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1073->setUSE("HAnimSiteLineColorRGBA");
LineSet1071->setColor(*ColorRGBA1073);

Shape1070->setGeometry(LineSet1071);

HAnimSegment1066->addChildren(*Shape1070);

CHAnimSite* HAnimSite1074 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1074->setName("l_carpal_distal_phalanx_1_pt");
HAnimSite1074->setDEF("hanim_l_carpal_distal_phalanx_1_pt");
HAnimSite1074->setTranslation(new float[3]{0.1982,0.8061,0.0759});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1075 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1075->setDescription("HAnimSite l_thumb_distal_tip");
HAnimSite1074->addChildren(*TouchSensor1075);

CShape* Shape1076 = (CShape *)(m_pScene.createNode("Shape"));
Shape1076->setUSE("HAnimSiteShape");
HAnimSite1074->addChildren(*Shape1076);

HAnimSegment1066->addChildren(*HAnimSite1074);

HAnimJoint1065->addChildren(*HAnimSegment1066);

HAnimJoint1056->addChildren(*HAnimJoint1065);

HAnimJoint1047->addChildren(*HAnimJoint1056);

HAnimJoint989->addChildren(*HAnimJoint1047);

CHAnimJoint* HAnimJoint1077 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1077->setName("l_carpometacarpal_2");
HAnimJoint1077->setDEF("hanim_l_carpometacarpal_2");
HAnimJoint1077->setCenter(new float[3]{0.1983,0.8024,-0.028});
HAnimJoint1077->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1077->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1078 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1078->setName("l_metacarpal_2");
HAnimSegment1078->setDEF("hanim_l_metacarpal_2");
//Visualization sphere for <HAnimJoint name='l_index0'/> is placed within <HAnimSegment name='l_metacarpal_2'/>
CTouchSensor* TouchSensor1079 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1079->setDescription("HAnimJoint l_index0, HAnimSegment l_metacarpal_2");
HAnimSegment1078->addChildren(*TouchSensor1079);

CTransform* Transform1080 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1080->setTranslation(new float[3]{0.1983,0.8024,-0.028});
CShape* Shape1081 = (CShape *)(m_pScene.createNode("Shape"));
Shape1081->setUSE("HAnimJointShape");
Transform1080->addChildren(*Shape1081);

HAnimSegment1078->addChildren(*Transform1080);

//HAnimSegment visualization line from current <HAnimJoint name='l_index0'/> to child <HAnimJoint name='l_index1'/>
CShape* Shape1082 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1083 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1083->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1084 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1084->setPoint(new float[6]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028});
LineSet1083->setCoord(*Coordinate1084);

CColorRGBA* ColorRGBA1085 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1085->setUSE("HAnimSegmentLineColorRGBA");
LineSet1083->setColor(*ColorRGBA1085);

Shape1082->setGeometry(LineSet1083);

HAnimSegment1078->addChildren(*Shape1082);

HAnimJoint1077->addChildren(*HAnimSegment1078);

CHAnimJoint* HAnimJoint1086 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1086->setName("l_metacarpophalangeal_2");
HAnimJoint1086->setDEF("hanim_l_metacarpophalangeal_2");
HAnimJoint1086->setCenter(new float[3]{0.1983,0.7815,-0.028});
HAnimJoint1086->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1086->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1087 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1087->setName("l_carpal_proximal_phalanx_2");
HAnimSegment1087->setDEF("hanim_l_carpal_proximal_phalanx_2");
//Visualization sphere for <HAnimJoint name='l_index1'/> is placed within <HAnimSegment name='l_carpal_proximal_phalanx_2'/>
CTouchSensor* TouchSensor1088 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1088->setDescription("HAnimJoint l_index1, HAnimSegment l_carpal_proximal_phalanx_2");
HAnimSegment1087->addChildren(*TouchSensor1088);

CTransform* Transform1089 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1089->setTranslation(new float[3]{0.1983,0.7815,-0.028});
CShape* Shape1090 = (CShape *)(m_pScene.createNode("Shape"));
Shape1090->setUSE("HAnimJointShape");
Transform1089->addChildren(*Shape1090);

HAnimSegment1087->addChildren(*Transform1089);

//HAnimSegment visualization line from current <HAnimJoint name='l_index1'/> to child <HAnimJoint name='l_index2'/>
CShape* Shape1091 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1092 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1092->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1093 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1093->setPoint(new float[6]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248});
LineSet1092->setCoord(*Coordinate1093);

CColorRGBA* ColorRGBA1094 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1094->setUSE("HAnimSegmentLineColorRGBA");
LineSet1092->setColor(*ColorRGBA1094);

Shape1091->setGeometry(LineSet1092);

HAnimSegment1087->addChildren(*Shape1091);

HAnimJoint1086->addChildren(*HAnimSegment1087);

CHAnimJoint* HAnimJoint1095 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1095->setName("l_carpal_proximal_interphalangeal_2");
HAnimJoint1095->setDEF("hanim_l_carpal_proximal_interphalangeal_2");
HAnimJoint1095->setCenter(new float[3]{0.2017,0.7363,-0.0248});
HAnimJoint1095->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1095->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1096 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1096->setName("l_carpal_middle_phalanx_2");
HAnimSegment1096->setDEF("hanim_l_carpal_middle_phalanx_2");
//Visualization sphere for <HAnimJoint name='l_index2'/> is placed within <HAnimSegment name='l_carpal_middle_phalanx_2'/>
CTouchSensor* TouchSensor1097 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1097->setDescription("HAnimJoint l_index2, HAnimSegment l_carpal_middle_phalanx_2");
HAnimSegment1096->addChildren(*TouchSensor1097);

CTransform* Transform1098 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1098->setTranslation(new float[3]{0.2017,0.7363,-0.0248});
CShape* Shape1099 = (CShape *)(m_pScene.createNode("Shape"));
Shape1099->setUSE("HAnimJointShape");
Transform1098->addChildren(*Shape1099);

HAnimSegment1096->addChildren(*Transform1098);

//HAnimSegment visualization line from current <HAnimJoint name='l_index2'/> to child <HAnimJoint name='l_index3'/>
CShape* Shape1100 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1101 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1101->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1102 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1102->setPoint(new float[6]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236});
LineSet1101->setCoord(*Coordinate1102);

CColorRGBA* ColorRGBA1103 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1103->setUSE("HAnimSegmentLineColorRGBA");
LineSet1101->setColor(*ColorRGBA1103);

Shape1100->setGeometry(LineSet1101);

HAnimSegment1096->addChildren(*Shape1100);

HAnimJoint1095->addChildren(*HAnimSegment1096);

CHAnimJoint* HAnimJoint1104 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1104->setName("l_carpal_distal_interphalangeal_2");
HAnimJoint1104->setDEF("hanim_l_carpal_distal_interphalangeal_2");
HAnimJoint1104->setCenter(new float[3]{0.2028,0.7139,-0.0236});
HAnimJoint1104->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1104->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1105 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1105->setName("l_carpal_distal_phalanx_2");
HAnimSegment1105->setDEF("hanim_l_carpal_distal_phalanx_2");
//Visualization sphere for <HAnimJoint name='l_index3'/> is placed within <HAnimSegment name='l_carpal_distal_phalanx_2'/>
CTouchSensor* TouchSensor1106 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1106->setDescription("HAnimJoint l_index3, HAnimSegment l_carpal_distal_phalanx_2");
HAnimSegment1105->addChildren(*TouchSensor1106);

CTransform* Transform1107 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1107->setTranslation(new float[3]{0.2028,0.7139,-0.0236});
CShape* Shape1108 = (CShape *)(m_pScene.createNode("Shape"));
Shape1108->setUSE("HAnimJointShape");
Transform1107->addChildren(*Shape1108);

HAnimSegment1105->addChildren(*Transform1107);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_index_distal_tip'/>
CShape* Shape1109 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1110 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1110->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1111 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1111->setPoint(new float[6]{0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245});
LineSet1110->setCoord(*Coordinate1111);

CColorRGBA* ColorRGBA1112 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1112->setUSE("HAnimSiteLineColorRGBA");
LineSet1110->setColor(*ColorRGBA1112);

Shape1109->setGeometry(LineSet1110);

HAnimSegment1105->addChildren(*Shape1109);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_dactylion_pt'/>
CShape* Shape1113 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1114 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1114->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1115 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1115->setPoint(new float[6]{0.2028,0.7139,-0.0236,0.2056,0.6743,-0.0482});
LineSet1114->setCoord(*Coordinate1115);

CColorRGBA* ColorRGBA1116 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1116->setUSE("HAnimSiteLineColorRGBA");
LineSet1114->setColor(*ColorRGBA1116);

Shape1113->setGeometry(LineSet1114);

HAnimSegment1105->addChildren(*Shape1113);

CHAnimSite* HAnimSite1117 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1117->setName("l_carpal_distal_phalanx_2_pt");
HAnimSite1117->setDEF("hanim_l_carpal_distal_phalanx_2_pt");
HAnimSite1117->setTranslation(new float[3]{0.2089,0.6858,-0.0245});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1118 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1118->setDescription("HAnimSite l_index_distal_tip");
HAnimSite1117->addChildren(*TouchSensor1118);

CShape* Shape1119 = (CShape *)(m_pScene.createNode("Shape"));
Shape1119->setUSE("HAnimSiteShape");
HAnimSite1117->addChildren(*Shape1119);

HAnimSegment1105->addChildren(*HAnimSite1117);

CHAnimSite* HAnimSite1120 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1120->setName("l_dactylion_pt");
HAnimSite1120->setDEF("hanim_l_dactylion_pt");
HAnimSite1120->setTranslation(new float[3]{0.2056,0.6743,-0.0482});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1121 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1121->setDescription("HAnimSite l_dactylion_pt");
HAnimSite1120->addChildren(*TouchSensor1121);

CShape* Shape1122 = (CShape *)(m_pScene.createNode("Shape"));
Shape1122->setUSE("HAnimSiteShape");
HAnimSite1120->addChildren(*Shape1122);

HAnimSegment1105->addChildren(*HAnimSite1120);

HAnimJoint1104->addChildren(*HAnimSegment1105);

HAnimJoint1095->addChildren(*HAnimJoint1104);

HAnimJoint1086->addChildren(*HAnimJoint1095);

HAnimJoint1077->addChildren(*HAnimJoint1086);

HAnimJoint989->addChildren(*HAnimJoint1077);

CHAnimJoint* HAnimJoint1123 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1123->setName("l_carpometacarpal_3");
HAnimJoint1123->setDEF("hanim_l_carpometacarpal_3");
HAnimJoint1123->setCenter(new float[3]{0.1987,0.8029,-0.053});
HAnimJoint1123->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1123->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1124 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1124->setName("l_metacarpal_3");
HAnimSegment1124->setDEF("hanim_l_metacarpal_3");
//Visualization sphere for <HAnimJoint name='l_middle0'/> is placed within <HAnimSegment name='l_metacarpal_3'/>
CTouchSensor* TouchSensor1125 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1125->setDescription("HAnimJoint l_middle0, HAnimSegment l_metacarpal_3");
HAnimSegment1124->addChildren(*TouchSensor1125);

CTransform* Transform1126 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1126->setTranslation(new float[3]{0.1987,0.8029,-0.053});
CShape* Shape1127 = (CShape *)(m_pScene.createNode("Shape"));
Shape1127->setUSE("HAnimJointShape");
Transform1126->addChildren(*Shape1127);

HAnimSegment1124->addChildren(*Transform1126);

//HAnimSegment visualization line from current <HAnimJoint name='l_middle0'/> to child <HAnimJoint name='l_middle1'/>
CShape* Shape1128 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1129 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1129->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1130 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1130->setPoint(new float[6]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053});
LineSet1129->setCoord(*Coordinate1130);

CColorRGBA* ColorRGBA1131 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1131->setUSE("HAnimSegmentLineColorRGBA");
LineSet1129->setColor(*ColorRGBA1131);

Shape1128->setGeometry(LineSet1129);

HAnimSegment1124->addChildren(*Shape1128);

HAnimJoint1123->addChildren(*HAnimSegment1124);

CHAnimJoint* HAnimJoint1132 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1132->setName("l_metacarpophalangeal_3");
HAnimJoint1132->setDEF("hanim_l_metacarpophalangeal_3");
HAnimJoint1132->setCenter(new float[3]{0.1987,0.7818,-0.053});
HAnimJoint1132->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1132->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1133 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1133->setName("l_carpal_proximal_phalanx_3");
HAnimSegment1133->setDEF("hanim_l_carpal_proximal_phalanx_3");
//Visualization sphere for <HAnimJoint name='l_middle1'/> is placed within <HAnimSegment name='l_carpal_proximal_phalanx_3'/>
CTouchSensor* TouchSensor1134 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1134->setDescription("HAnimJoint l_middle1, HAnimSegment l_carpal_proximal_phalanx_3");
HAnimSegment1133->addChildren(*TouchSensor1134);

CTransform* Transform1135 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1135->setTranslation(new float[3]{0.1987,0.7818,-0.053});
CShape* Shape1136 = (CShape *)(m_pScene.createNode("Shape"));
Shape1136->setUSE("HAnimJointShape");
Transform1135->addChildren(*Shape1136);

HAnimSegment1133->addChildren(*Transform1135);

//HAnimSegment visualization line from current <HAnimJoint name='l_middle1'/> to child <HAnimJoint name='l_middle2'/>
CShape* Shape1137 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1138 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1138->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1139 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1139->setPoint(new float[6]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503});
LineSet1138->setCoord(*Coordinate1139);

CColorRGBA* ColorRGBA1140 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1140->setUSE("HAnimSegmentLineColorRGBA");
LineSet1138->setColor(*ColorRGBA1140);

Shape1137->setGeometry(LineSet1138);

HAnimSegment1133->addChildren(*Shape1137);

HAnimJoint1132->addChildren(*HAnimSegment1133);

CHAnimJoint* HAnimJoint1141 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1141->setName("l_carpal_proximal_interphalangeal_3");
HAnimJoint1141->setDEF("hanim_l_carpal_proximal_interphalangeal_3");
HAnimJoint1141->setCenter(new float[3]{0.2013,0.7273,-0.0503});
HAnimJoint1141->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1141->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1142 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1142->setName("l_carpal_middle_phalanx_3");
HAnimSegment1142->setDEF("hanim_l_carpal_middle_phalanx_3");
//Visualization sphere for <HAnimJoint name='l_middle2'/> is placed within <HAnimSegment name='l_carpal_middle_phalanx_3'/>
CTouchSensor* TouchSensor1143 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1143->setDescription("HAnimJoint l_middle2, HAnimSegment l_carpal_middle_phalanx_3");
HAnimSegment1142->addChildren(*TouchSensor1143);

CTransform* Transform1144 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1144->setTranslation(new float[3]{0.2013,0.7273,-0.0503});
CShape* Shape1145 = (CShape *)(m_pScene.createNode("Shape"));
Shape1145->setUSE("HAnimJointShape");
Transform1144->addChildren(*Shape1145);

HAnimSegment1142->addChildren(*Transform1144);

//HAnimSegment visualization line from current <HAnimJoint name='l_middle2'/> to child <HAnimJoint name='l_middle3'/>
CShape* Shape1146 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1147 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1147->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1148 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1148->setPoint(new float[6]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494});
LineSet1147->setCoord(*Coordinate1148);

CColorRGBA* ColorRGBA1149 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1149->setUSE("HAnimSegmentLineColorRGBA");
LineSet1147->setColor(*ColorRGBA1149);

Shape1146->setGeometry(LineSet1147);

HAnimSegment1142->addChildren(*Shape1146);

HAnimJoint1141->addChildren(*HAnimSegment1142);

CHAnimJoint* HAnimJoint1150 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1150->setName("l_carpal_distal_interphalangeal_3");
HAnimJoint1150->setDEF("hanim_l_carpal_distal_interphalangeal_3");
HAnimJoint1150->setCenter(new float[3]{0.2026,0.7011,-0.0494});
HAnimJoint1150->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1150->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1151 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1151->setName("l_carpal_distal_phalanx_3");
HAnimSegment1151->setDEF("hanim_l_carpal_distal_phalanx_3");
//Visualization sphere for <HAnimJoint name='l_middle3'/> is placed within <HAnimSegment name='l_carpal_distal_phalanx_3'/>
CTouchSensor* TouchSensor1152 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1152->setDescription("HAnimJoint l_middle3, HAnimSegment l_carpal_distal_phalanx_3");
HAnimSegment1151->addChildren(*TouchSensor1152);

CTransform* Transform1153 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1153->setTranslation(new float[3]{0.2026,0.7011,-0.0494});
CShape* Shape1154 = (CShape *)(m_pScene.createNode("Shape"));
Shape1154->setUSE("HAnimJointShape");
Transform1153->addChildren(*Shape1154);

HAnimSegment1151->addChildren(*Transform1153);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_middle3'/> to <HAnimSite name='l_middle_distal_tip'/>
CShape* Shape1155 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1156 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1156->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1157 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1157->setPoint(new float[6]{0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491});
LineSet1156->setCoord(*Coordinate1157);

CColorRGBA* ColorRGBA1158 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1158->setUSE("HAnimSiteLineColorRGBA");
LineSet1156->setColor(*ColorRGBA1158);

Shape1155->setGeometry(LineSet1156);

HAnimSegment1151->addChildren(*Shape1155);

CHAnimSite* HAnimSite1159 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1159->setName("l_carpal_distal_phalanx_3_pt");
HAnimSite1159->setDEF("hanim_l_carpal_distal_phalanx_3_pt");
HAnimSite1159->setTranslation(new float[3]{0.208,0.6731,-0.0491});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1160 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1160->setDescription("HAnimSite l_middle_distal_tip");
HAnimSite1159->addChildren(*TouchSensor1160);

CShape* Shape1161 = (CShape *)(m_pScene.createNode("Shape"));
Shape1161->setUSE("HAnimSiteShape");
HAnimSite1159->addChildren(*Shape1161);

HAnimSegment1151->addChildren(*HAnimSite1159);

HAnimJoint1150->addChildren(*HAnimSegment1151);

HAnimJoint1141->addChildren(*HAnimJoint1150);

HAnimJoint1132->addChildren(*HAnimJoint1141);

HAnimJoint1123->addChildren(*HAnimJoint1132);

HAnimJoint989->addChildren(*HAnimJoint1123);

CHAnimJoint* HAnimJoint1162 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1162->setName("l_carpometacarpal_4");
HAnimJoint1162->setDEF("hanim_l_carpometacarpal_4");
HAnimJoint1162->setCenter(new float[3]{0.1956,0.8019,-0.0794});
HAnimJoint1162->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1162->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1163 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1163->setName("l_metacarpal_4");
HAnimSegment1163->setDEF("hanim_l_metacarpal_4");
//Visualization sphere for <HAnimJoint name='l_ring0'/> is placed within <HAnimSegment name='l_metacarpal_4'/>
CTouchSensor* TouchSensor1164 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1164->setDescription("HAnimJoint l_ring0, HAnimSegment l_metacarpal_4");
HAnimSegment1163->addChildren(*TouchSensor1164);

CTransform* Transform1165 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1165->setTranslation(new float[3]{0.1956,0.8019,-0.0794});
CShape* Shape1166 = (CShape *)(m_pScene.createNode("Shape"));
Shape1166->setUSE("HAnimJointShape");
Transform1165->addChildren(*Shape1166);

HAnimSegment1163->addChildren(*Transform1165);

//HAnimSegment visualization line from current <HAnimJoint name='l_ring0'/> to child <HAnimJoint name='l_ring1'/>
CShape* Shape1167 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1168 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1168->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1169 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1169->setPoint(new float[6]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794});
LineSet1168->setCoord(*Coordinate1169);

CColorRGBA* ColorRGBA1170 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1170->setUSE("HAnimSegmentLineColorRGBA");
LineSet1168->setColor(*ColorRGBA1170);

Shape1167->setGeometry(LineSet1168);

HAnimSegment1163->addChildren(*Shape1167);

HAnimJoint1162->addChildren(*HAnimSegment1163);

CHAnimJoint* HAnimJoint1171 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1171->setName("l_metacarpophalangeal_4");
HAnimJoint1171->setDEF("hanim_l_metacarpophalangeal_4");
HAnimJoint1171->setCenter(new float[3]{0.1956,0.7815,-0.0794});
HAnimJoint1171->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1171->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1172 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1172->setName("l_carpal_proximal_phalanx_4");
HAnimSegment1172->setDEF("hanim_l_carpal_proximal_phalanx_4");
//Visualization sphere for <HAnimJoint name='l_ring1'/> is placed within <HAnimSegment name='l_carpal_proximal_phalanx_4'/>
CTouchSensor* TouchSensor1173 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1173->setDescription("HAnimJoint l_ring1, HAnimSegment l_carpal_proximal_phalanx_4");
HAnimSegment1172->addChildren(*TouchSensor1173);

CTransform* Transform1174 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1174->setTranslation(new float[3]{0.1956,0.7815,-0.0794});
CShape* Shape1175 = (CShape *)(m_pScene.createNode("Shape"));
Shape1175->setUSE("HAnimJointShape");
Transform1174->addChildren(*Shape1175);

HAnimSegment1172->addChildren(*Transform1174);

//HAnimSegment visualization line from current <HAnimJoint name='l_ring1'/> to child <HAnimJoint name='l_ring2'/>
CShape* Shape1176 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1177 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1177->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1178 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1178->setPoint(new float[6]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777});
LineSet1177->setCoord(*Coordinate1178);

CColorRGBA* ColorRGBA1179 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1179->setUSE("HAnimSegmentLineColorRGBA");
LineSet1177->setColor(*ColorRGBA1179);

Shape1176->setGeometry(LineSet1177);

HAnimSegment1172->addChildren(*Shape1176);

HAnimJoint1171->addChildren(*HAnimSegment1172);

CHAnimJoint* HAnimJoint1180 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1180->setName("l_carpal_proximal_interphalangeal_4");
HAnimJoint1180->setDEF("hanim_l_carpal_proximal_interphalangeal_4");
HAnimJoint1180->setCenter(new float[3]{0.1973,0.7287,-0.0777});
HAnimJoint1180->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1180->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1181 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1181->setName("l_carpal_middle_phalanx_4");
HAnimSegment1181->setDEF("hanim_l_carpal_middle_phalanx_4");
//Visualization sphere for <HAnimJoint name='l_ring2'/> is placed within <HAnimSegment name='l_carpal_middle_phalanx_4'/>
CTouchSensor* TouchSensor1182 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1182->setDescription("HAnimJoint l_ring2, HAnimSegment l_carpal_middle_phalanx_4");
HAnimSegment1181->addChildren(*TouchSensor1182);

CTransform* Transform1183 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1183->setTranslation(new float[3]{0.1973,0.7287,-0.0777});
CShape* Shape1184 = (CShape *)(m_pScene.createNode("Shape"));
Shape1184->setUSE("HAnimJointShape");
Transform1183->addChildren(*Shape1184);

HAnimSegment1181->addChildren(*Transform1183);

//HAnimSegment visualization line from current <HAnimJoint name='l_ring2'/> to child <HAnimJoint name='l_ring3'/>
CShape* Shape1185 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1186 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1186->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1187 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1187->setPoint(new float[6]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767});
LineSet1186->setCoord(*Coordinate1187);

CColorRGBA* ColorRGBA1188 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1188->setUSE("HAnimSegmentLineColorRGBA");
LineSet1186->setColor(*ColorRGBA1188);

Shape1185->setGeometry(LineSet1186);

HAnimSegment1181->addChildren(*Shape1185);

HAnimJoint1180->addChildren(*HAnimSegment1181);

CHAnimJoint* HAnimJoint1189 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1189->setName("l_carpal_distal_interphalangeal_4");
HAnimJoint1189->setDEF("hanim_l_carpal_distal_interphalangeal_4");
HAnimJoint1189->setCenter(new float[3]{0.1983,0.7045,-0.0767});
HAnimJoint1189->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1189->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1190 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1190->setName("l_carpal_distal_phalanx_4");
HAnimSegment1190->setDEF("hanim_l_carpal_distal_phalanx_4");
//Visualization sphere for <HAnimJoint name='l_ring3'/> is placed within <HAnimSegment name='l_carpal_distal_phalanx_4'/>
CTouchSensor* TouchSensor1191 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1191->setDescription("HAnimJoint l_ring3, HAnimSegment l_carpal_distal_phalanx_4");
HAnimSegment1190->addChildren(*TouchSensor1191);

CTransform* Transform1192 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1192->setTranslation(new float[3]{0.1983,0.7045,-0.0767});
CShape* Shape1193 = (CShape *)(m_pScene.createNode("Shape"));
Shape1193->setUSE("HAnimJointShape");
Transform1192->addChildren(*Shape1193);

HAnimSegment1190->addChildren(*Transform1192);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ring3'/> to <HAnimSite name='l_ring_distal_tip'/>
CShape* Shape1194 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1195 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1195->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1196 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1196->setPoint(new float[6]{0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756});
LineSet1195->setCoord(*Coordinate1196);

CColorRGBA* ColorRGBA1197 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1197->setUSE("HAnimSiteLineColorRGBA");
LineSet1195->setColor(*ColorRGBA1197);

Shape1194->setGeometry(LineSet1195);

HAnimSegment1190->addChildren(*Shape1194);

CHAnimSite* HAnimSite1198 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1198->setName("l_carpal_distal_phalanx_4_pt");
HAnimSite1198->setDEF("hanim_l_carpal_distal_phalanx_4_pt");
HAnimSite1198->setTranslation(new float[3]{0.2035,0.675,-0.0756});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1199 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1199->setDescription("HAnimSite l_ring_distal_tip");
HAnimSite1198->addChildren(*TouchSensor1199);

CShape* Shape1200 = (CShape *)(m_pScene.createNode("Shape"));
Shape1200->setUSE("HAnimSiteShape");
HAnimSite1198->addChildren(*Shape1200);

HAnimSegment1190->addChildren(*HAnimSite1198);

HAnimJoint1189->addChildren(*HAnimSegment1190);

HAnimJoint1180->addChildren(*HAnimJoint1189);

HAnimJoint1171->addChildren(*HAnimJoint1180);

HAnimJoint1162->addChildren(*HAnimJoint1171);

HAnimJoint989->addChildren(*HAnimJoint1162);

CHAnimJoint* HAnimJoint1201 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1201->setName("l_carpometacarpal_5");
HAnimJoint1201->setDEF("hanim_l_carpometacarpal_5");
HAnimJoint1201->setCenter(new float[3]{0.1925,0.8066,-0.1036});
HAnimJoint1201->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1201->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1202 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1202->setName("l_metacarpal_5");
HAnimSegment1202->setDEF("hanim_l_metacarpal_5");
//Visualization sphere for <HAnimJoint name='l_pinky0'/> is placed within <HAnimSegment name='l_metacarpal_5'/>
CTouchSensor* TouchSensor1203 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1203->setDescription("HAnimJoint l_pinky0, HAnimSegment l_metacarpal_5");
HAnimSegment1202->addChildren(*TouchSensor1203);

CTransform* Transform1204 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1204->setTranslation(new float[3]{0.1925,0.8066,-0.1036});
CShape* Shape1205 = (CShape *)(m_pScene.createNode("Shape"));
Shape1205->setUSE("HAnimJointShape");
Transform1204->addChildren(*Shape1205);

HAnimSegment1202->addChildren(*Transform1204);

//HAnimSegment visualization line from current <HAnimJoint name='l_pinky0'/> to child <HAnimJoint name='l_pinky1'/>
CShape* Shape1206 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1207 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1207->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1208 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1208->setPoint(new float[6]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036});
LineSet1207->setCoord(*Coordinate1208);

CColorRGBA* ColorRGBA1209 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1209->setUSE("HAnimSegmentLineColorRGBA");
LineSet1207->setColor(*ColorRGBA1209);

Shape1206->setGeometry(LineSet1207);

HAnimSegment1202->addChildren(*Shape1206);

HAnimJoint1201->addChildren(*HAnimSegment1202);

CHAnimJoint* HAnimJoint1210 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1210->setName("l_metacarpophalangeal_5");
HAnimJoint1210->setDEF("hanim_l_metacarpophalangeal_5");
HAnimJoint1210->setCenter(new float[3]{0.1925,0.7866,-0.1036});
HAnimJoint1210->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1210->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1211 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1211->setName("l_carpal_proximal_phalanx_5");
HAnimSegment1211->setDEF("hanim_l_carpal_proximal_phalanx_5");
//Visualization sphere for <HAnimJoint name='l_pinky1'/> is placed within <HAnimSegment name='l_carpal_proximal_phalanx_5'/>
CTouchSensor* TouchSensor1212 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1212->setDescription("HAnimJoint l_pinky1, HAnimSegment l_carpal_proximal_phalanx_5");
HAnimSegment1211->addChildren(*TouchSensor1212);

CTransform* Transform1213 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1213->setTranslation(new float[3]{0.1925,0.7866,-0.1036});
CShape* Shape1214 = (CShape *)(m_pScene.createNode("Shape"));
Shape1214->setUSE("HAnimJointShape");
Transform1213->addChildren(*Shape1214);

HAnimSegment1211->addChildren(*Transform1213);

//HAnimSegment visualization line from current <HAnimJoint name='l_pinky1'/> to child <HAnimJoint name='l_pinky2'/>
CShape* Shape1215 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1216 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1216->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1217 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1217->setPoint(new float[6]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024});
LineSet1216->setCoord(*Coordinate1217);

CColorRGBA* ColorRGBA1218 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1218->setUSE("HAnimSegmentLineColorRGBA");
LineSet1216->setColor(*ColorRGBA1218);

Shape1215->setGeometry(LineSet1216);

HAnimSegment1211->addChildren(*Shape1215);

HAnimJoint1210->addChildren(*HAnimSegment1211);

CHAnimJoint* HAnimJoint1219 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1219->setName("l_carpal_proximal_interphalangeal_5");
HAnimJoint1219->setDEF("hanim_l_carpal_proximal_interphalangeal_5");
HAnimJoint1219->setCenter(new float[3]{0.1938,0.7452,-0.1024});
HAnimJoint1219->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1219->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1220 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1220->setName("l_carpal_middle_phalanx_5");
HAnimSegment1220->setDEF("hanim_l_carpal_middle_phalanx_5");
//Visualization sphere for <HAnimJoint name='l_pinky2'/> is placed within <HAnimSegment name='l_carpal_middle_phalanx_5'/>
CTouchSensor* TouchSensor1221 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1221->setDescription("HAnimJoint l_pinky2, HAnimSegment l_carpal_middle_phalanx_5");
HAnimSegment1220->addChildren(*TouchSensor1221);

CTransform* Transform1222 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1222->setTranslation(new float[3]{0.1938,0.7452,-0.1024});
CShape* Shape1223 = (CShape *)(m_pScene.createNode("Shape"));
Shape1223->setUSE("HAnimJointShape");
Transform1222->addChildren(*Shape1223);

HAnimSegment1220->addChildren(*Transform1222);

//HAnimSegment visualization line from current <HAnimJoint name='l_pinky2'/> to child <HAnimJoint name='l_pinky3'/>
CShape* Shape1224 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1225 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1225->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1226 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1226->setPoint(new float[6]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017});
LineSet1225->setCoord(*Coordinate1226);

CColorRGBA* ColorRGBA1227 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1227->setUSE("HAnimSegmentLineColorRGBA");
LineSet1225->setColor(*ColorRGBA1227);

Shape1224->setGeometry(LineSet1225);

HAnimSegment1220->addChildren(*Shape1224);

HAnimJoint1219->addChildren(*HAnimSegment1220);

CHAnimJoint* HAnimJoint1228 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1228->setName("l_carpal_distal_interphalangeal_5");
HAnimJoint1228->setDEF("hanim_l_carpal_distal_interphalangeal_5");
HAnimJoint1228->setCenter(new float[3]{0.1948,0.7277,-0.1017});
HAnimJoint1228->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1228->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1229 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1229->setName("l_carpal_distal_phalanx_5");
HAnimSegment1229->setDEF("hanim_l_carpal_distal_phalanx_5");
//Visualization sphere for <HAnimJoint name='l_pinky3'/> is placed within <HAnimSegment name='l_carpal_distal_phalanx_5'/>
CTouchSensor* TouchSensor1230 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1230->setDescription("HAnimJoint l_pinky3, HAnimSegment l_carpal_distal_phalanx_5");
HAnimSegment1229->addChildren(*TouchSensor1230);

CTransform* Transform1231 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1231->setTranslation(new float[3]{0.1948,0.7277,-0.1017});
CShape* Shape1232 = (CShape *)(m_pScene.createNode("Shape"));
Shape1232->setUSE("HAnimJointShape");
Transform1231->addChildren(*Shape1232);

HAnimSegment1229->addChildren(*Transform1231);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_pinky3'/> to <HAnimSite name='l_pinky_distal_tip'/>
CShape* Shape1233 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1234 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1234->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1235 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1235->setPoint(new float[6]{0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012});
LineSet1234->setCoord(*Coordinate1235);

CColorRGBA* ColorRGBA1236 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1236->setUSE("HAnimSiteLineColorRGBA");
LineSet1234->setColor(*ColorRGBA1236);

Shape1233->setGeometry(LineSet1234);

HAnimSegment1229->addChildren(*Shape1233);

CHAnimSite* HAnimSite1237 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1237->setName("l_carpal_distal_phalanx_5_pt");
HAnimSite1237->setDEF("hanim_l_carpal_distal_phalanx_5_pt");
HAnimSite1237->setTranslation(new float[3]{0.2014,0.7009,-0.1012});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1238 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1238->setDescription("HAnimSite l_pinky_distal_tip");
HAnimSite1237->addChildren(*TouchSensor1238);

CShape* Shape1239 = (CShape *)(m_pScene.createNode("Shape"));
Shape1239->setUSE("HAnimSiteShape");
HAnimSite1237->addChildren(*Shape1239);

HAnimSegment1229->addChildren(*HAnimSite1237);

HAnimJoint1228->addChildren(*HAnimSegment1229);

HAnimJoint1219->addChildren(*HAnimJoint1228);

HAnimJoint1210->addChildren(*HAnimJoint1219);

HAnimJoint1201->addChildren(*HAnimJoint1210);

HAnimJoint989->addChildren(*HAnimJoint1201);

HAnimJoint952->addChildren(*HAnimJoint989);

HAnimJoint936->addChildren(*HAnimJoint952);

HAnimJoint927->addChildren(*HAnimJoint936);

HAnimJoint890->addChildren(*HAnimJoint927);

HAnimJoint602->addChildren(*HAnimJoint890);

CHAnimJoint* HAnimJoint1240 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1240->setName("r_sternoclavicular");
HAnimJoint1240->setDEF("hanim_r_sternoclavicular");
HAnimJoint1240->setCenter(new float[3]{-0.082,1.4488,-0.0353});
HAnimJoint1240->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1240->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1241 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1241->setName("r_clavicle");
HAnimSegment1241->setDEF("hanim_r_clavicle");
//Visualization sphere for <HAnimJoint name='r_sternoclavicular'/> is placed within <HAnimSegment name='r_clavicle'/>
CTouchSensor* TouchSensor1242 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1242->setDescription("HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle");
HAnimSegment1241->addChildren(*TouchSensor1242);

CTransform* Transform1243 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1243->setTranslation(new float[3]{-0.082,1.4488,-0.0353});
CShape* Shape1244 = (CShape *)(m_pScene.createNode("Shape"));
Shape1244->setUSE("HAnimJointShape");
Transform1243->addChildren(*Shape1244);

HAnimSegment1241->addChildren(*Transform1243);

//HAnimSegment visualization line from current <HAnimJoint name='r_sternoclavicular'/> to child <HAnimJoint name='r_acromioclavicular'/>
CShape* Shape1245 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1246 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1246->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1247 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1247->setPoint(new float[6]{-0.082,1.4488,-0.0353,-0.0962,1.4269,-0.0424});
LineSet1246->setCoord(*Coordinate1247);

CColorRGBA* ColorRGBA1248 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1248->setUSE("HAnimSegmentLineColorRGBA");
LineSet1246->setColor(*ColorRGBA1248);

Shape1245->setGeometry(LineSet1246);

HAnimSegment1241->addChildren(*Shape1245);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_clavicale_pt'/>
CShape* Shape1249 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1250 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1250->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1251 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1251->setPoint(new float[6]{-0.082,1.4488,-0.0353,-0.0115,1.4943,0.04});
LineSet1250->setCoord(*Coordinate1251);

CColorRGBA* ColorRGBA1252 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1252->setUSE("HAnimSiteLineColorRGBA");
LineSet1250->setColor(*ColorRGBA1252);

Shape1249->setGeometry(LineSet1250);

HAnimSegment1241->addChildren(*Shape1249);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_acromion_pt'/>
CShape* Shape1253 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1254 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1254->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1255 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1255->setPoint(new float[6]{-0.082,1.4488,-0.0353,-0.1905,1.4791,-0.0431});
LineSet1254->setCoord(*Coordinate1255);

CColorRGBA* ColorRGBA1256 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1256->setUSE("HAnimSiteLineColorRGBA");
LineSet1254->setColor(*ColorRGBA1256);

Shape1253->setGeometry(LineSet1254);

HAnimSegment1241->addChildren(*Shape1253);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_ant_pt'/>
CShape* Shape1257 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1258 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1258->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1259 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1259->setPoint(new float[6]{-0.082,1.4488,-0.0353,-0.1626,1.4072,-0.0031});
LineSet1258->setCoord(*Coordinate1259);

CColorRGBA* ColorRGBA1260 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1260->setUSE("HAnimSiteLineColorRGBA");
LineSet1258->setColor(*ColorRGBA1260);

Shape1257->setGeometry(LineSet1258);

HAnimSegment1241->addChildren(*Shape1257);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_post_pt'/>
CShape* Shape1261 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1262 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1262->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1263 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1263->setPoint(new float[6]{-0.082,1.4488,-0.0353,-0.1603,1.4098,-0.0826});
LineSet1262->setCoord(*Coordinate1263);

CColorRGBA* ColorRGBA1264 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1264->setUSE("HAnimSiteLineColorRGBA");
LineSet1262->setColor(*ColorRGBA1264);

Shape1261->setGeometry(LineSet1262);

HAnimSegment1241->addChildren(*Shape1261);

CHAnimSite* HAnimSite1265 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1265->setName("r_clavicle_pt");
HAnimSite1265->setDEF("hanim_r_clavicle_pt");
HAnimSite1265->setTranslation(new float[3]{-0.0115,1.4943,0.04});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1266 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1266->setDescription("HAnimSite r_clavicale_pt");
HAnimSite1265->addChildren(*TouchSensor1266);

CShape* Shape1267 = (CShape *)(m_pScene.createNode("Shape"));
Shape1267->setUSE("HAnimSiteShape");
HAnimSite1265->addChildren(*Shape1267);

HAnimSegment1241->addChildren(*HAnimSite1265);

CHAnimSite* HAnimSite1268 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1268->setName("r_acromion_pt");
HAnimSite1268->setDEF("hanim_r_acromion_pt");
HAnimSite1268->setTranslation(new float[3]{-0.1905,1.4791,-0.0431});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1269 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1269->setDescription("HAnimSite r_acromion_pt");
HAnimSite1268->addChildren(*TouchSensor1269);

CShape* Shape1270 = (CShape *)(m_pScene.createNode("Shape"));
Shape1270->setUSE("HAnimSiteShape");
HAnimSite1268->addChildren(*Shape1270);

HAnimSegment1241->addChildren(*HAnimSite1268);

CHAnimSite* HAnimSite1271 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1271->setName("r_axilla_proximal_pt");
HAnimSite1271->setDEF("hanim_r_axilla_proximal_pt");
HAnimSite1271->setTranslation(new float[3]{-0.1626,1.4072,-0.0031});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1272 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1272->setDescription("HAnimSite r_axilla_ant_pt");
HAnimSite1271->addChildren(*TouchSensor1272);

CShape* Shape1273 = (CShape *)(m_pScene.createNode("Shape"));
Shape1273->setUSE("HAnimSiteShape");
HAnimSite1271->addChildren(*Shape1273);

HAnimSegment1241->addChildren(*HAnimSite1271);

CHAnimSite* HAnimSite1274 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1274->setName("r_axilla_distal_pt");
HAnimSite1274->setDEF("hanim_r_axilla_distal_pt");
HAnimSite1274->setTranslation(new float[3]{-0.1603,1.4098,-0.0826});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1275 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1275->setDescription("HAnimSite r_axilla_post_pt");
HAnimSite1274->addChildren(*TouchSensor1275);

CShape* Shape1276 = (CShape *)(m_pScene.createNode("Shape"));
Shape1276->setUSE("HAnimSiteShape");
HAnimSite1274->addChildren(*Shape1276);

HAnimSegment1241->addChildren(*HAnimSite1274);

HAnimJoint1240->addChildren(*HAnimSegment1241);

CHAnimJoint* HAnimJoint1277 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1277->setName("r_acromioclavicular");
HAnimJoint1277->setDEF("hanim_r_acromioclavicular");
HAnimJoint1277->setCenter(new float[3]{-0.0962,1.4269,-0.0424});
HAnimJoint1277->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1277->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1278 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1278->setName("r_scapula");
HAnimSegment1278->setDEF("hanim_r_scapula");
//Visualization sphere for <HAnimJoint name='r_acromioclavicular'/> is placed within <HAnimSegment name='r_scapula'/>
CTouchSensor* TouchSensor1279 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1279->setDescription("HAnimJoint r_acromioclavicular, HAnimSegment r_scapula");
HAnimSegment1278->addChildren(*TouchSensor1279);

CTransform* Transform1280 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1280->setTranslation(new float[3]{-0.0962,1.4269,-0.0424});
CShape* Shape1281 = (CShape *)(m_pScene.createNode("Shape"));
Shape1281->setUSE("HAnimJointShape");
Transform1280->addChildren(*Shape1281);

HAnimSegment1278->addChildren(*Transform1280);

//HAnimSegment visualization line from current <HAnimJoint name='r_acromioclavicular'/> to child <HAnimJoint name='r_shoulder'/>
CShape* Shape1282 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1283 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1283->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1284 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1284->setPoint(new float[6]{-0.0962,1.4269,-0.0424,-0.2029,1.4376,-0.0387});
LineSet1283->setCoord(*Coordinate1284);

CColorRGBA* ColorRGBA1285 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1285->setUSE("HAnimSegmentLineColorRGBA");
LineSet1283->setColor(*ColorRGBA1285);

Shape1282->setGeometry(LineSet1283);

HAnimSegment1278->addChildren(*Shape1282);

HAnimJoint1277->addChildren(*HAnimSegment1278);

CHAnimJoint* HAnimJoint1286 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1286->setName("r_shoulder");
HAnimJoint1286->setDEF("hanim_r_shoulder");
HAnimJoint1286->setCenter(new float[3]{-0.2029,1.4376,-0.0387});
HAnimJoint1286->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1286->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1287 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1287->setName("r_upperarm");
HAnimSegment1287->setDEF("hanim_r_upperarm");
//Visualization sphere for <HAnimJoint name='r_shoulder'/> is placed within <HAnimSegment name='r_upperarm'/>
CTouchSensor* TouchSensor1288 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1288->setDescription("HAnimJoint r_shoulder, HAnimSegment r_upperarm");
HAnimSegment1287->addChildren(*TouchSensor1288);

CTransform* Transform1289 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1289->setTranslation(new float[3]{-0.2029,1.4376,-0.0387});
CShape* Shape1290 = (CShape *)(m_pScene.createNode("Shape"));
Shape1290->setUSE("HAnimJointShape");
Transform1289->addChildren(*Shape1290);

HAnimSegment1287->addChildren(*Transform1289);

//HAnimSegment visualization line from current <HAnimJoint name='r_shoulder'/> to child <HAnimJoint name='r_elbow'/>
CShape* Shape1291 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1292 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1292->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1293 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1293->setPoint(new float[6]{-0.2029,1.4376,-0.0387,-0.2014,1.1357,-0.0682});
LineSet1292->setCoord(*Coordinate1293);

CColorRGBA* ColorRGBA1294 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1294->setUSE("HAnimSegmentLineColorRGBA");
LineSet1292->setColor(*ColorRGBA1294);

Shape1291->setGeometry(LineSet1292);

HAnimSegment1287->addChildren(*Shape1291);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_shoulder'/> to <HAnimSite name='r_humeral_lateral_epicn_pt'/>
CShape* Shape1295 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1296 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1296->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1297 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1297->setPoint(new float[6]{-0.2029,1.4376,-0.0387,-0.2224,1.1517,-0.1033});
LineSet1296->setCoord(*Coordinate1297);

CColorRGBA* ColorRGBA1298 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1298->setUSE("HAnimSiteLineColorRGBA");
LineSet1296->setColor(*ColorRGBA1298);

Shape1295->setGeometry(LineSet1296);

HAnimSegment1287->addChildren(*Shape1295);

CHAnimSite* HAnimSite1299 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1299->setName("r_humeral_lateral_epicondyle_pt");
HAnimSite1299->setDEF("hanim_r_humeral_lateral_epicondyle_pt");
HAnimSite1299->setTranslation(new float[3]{-0.2224,1.1517,-0.1033});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1300 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1300->setDescription("HAnimSite r_humeral_lateral_epicn_pt");
HAnimSite1299->addChildren(*TouchSensor1300);

CShape* Shape1301 = (CShape *)(m_pScene.createNode("Shape"));
Shape1301->setUSE("HAnimSiteShape");
HAnimSite1299->addChildren(*Shape1301);

HAnimSegment1287->addChildren(*HAnimSite1299);

HAnimJoint1286->addChildren(*HAnimSegment1287);

CHAnimJoint* HAnimJoint1302 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1302->setName("r_elbow");
HAnimJoint1302->setDEF("hanim_r_elbow");
HAnimJoint1302->setCenter(new float[3]{-0.2014,1.1357,-0.0682});
HAnimJoint1302->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1302->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1303 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1303->setName("r_forearm");
HAnimSegment1303->setDEF("hanim_r_forearm");
//Visualization sphere for <HAnimJoint name='r_elbow'/> is placed within <HAnimSegment name='r_forearm'/>
CTouchSensor* TouchSensor1304 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1304->setDescription("HAnimJoint r_elbow, HAnimSegment r_forearm");
HAnimSegment1303->addChildren(*TouchSensor1304);

CTransform* Transform1305 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1305->setTranslation(new float[3]{-0.2014,1.1357,-0.0682});
CShape* Shape1306 = (CShape *)(m_pScene.createNode("Shape"));
Shape1306->setUSE("HAnimJointShape");
Transform1305->addChildren(*Shape1306);

HAnimSegment1303->addChildren(*Transform1305);

//HAnimSegment visualization line from current <HAnimJoint name='r_elbow'/> to child <HAnimJoint name='r_radiocarpal'/>
CShape* Shape1307 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1308 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1308->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1309 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1309->setPoint(new float[6]{-0.2014,1.1357,-0.0682,-0.1984,0.8663,-0.0583});
LineSet1308->setCoord(*Coordinate1309);

CColorRGBA* ColorRGBA1310 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1310->setUSE("HAnimSegmentLineColorRGBA");
LineSet1308->setColor(*ColorRGBA1310);

Shape1307->setGeometry(LineSet1308);

HAnimSegment1303->addChildren(*Shape1307);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radial_styloid_pt'/>
CShape* Shape1311 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1312 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1312->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1313 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1313->setPoint(new float[6]{-0.2014,1.1357,-0.0682,-0.1884,0.8676,-0.036});
LineSet1312->setCoord(*Coordinate1313);

CColorRGBA* ColorRGBA1314 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1314->setUSE("HAnimSiteLineColorRGBA");
LineSet1312->setColor(*ColorRGBA1314);

Shape1311->setGeometry(LineSet1312);

HAnimSegment1303->addChildren(*Shape1311);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_olecranon_pt'/>
CShape* Shape1315 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1316 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1316->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1317 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1317->setPoint(new float[6]{-0.2014,1.1357,-0.0682,-0.1907,1.1405,-0.1065});
LineSet1316->setCoord(*Coordinate1317);

CColorRGBA* ColorRGBA1318 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1318->setUSE("HAnimSiteLineColorRGBA");
LineSet1316->setColor(*ColorRGBA1318);

Shape1315->setGeometry(LineSet1316);

HAnimSegment1303->addChildren(*Shape1315);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_humeral_medial_epicn_pt'/>
CShape* Shape1319 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1320 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1320->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1321 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1321->setPoint(new float[6]{-0.2014,1.1357,-0.0682,-0.168,1.1298,-0.1062});
LineSet1320->setCoord(*Coordinate1321);

CColorRGBA* ColorRGBA1322 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1322->setUSE("HAnimSiteLineColorRGBA");
LineSet1320->setColor(*ColorRGBA1322);

Shape1319->setGeometry(LineSet1320);

HAnimSegment1303->addChildren(*Shape1319);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radiale_pt'/>
CShape* Shape1323 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1324 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1324->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1325 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1325->setPoint(new float[6]{-0.2014,1.1357,-0.0682,-0.213,1.1305,-0.1091});
LineSet1324->setCoord(*Coordinate1325);

CColorRGBA* ColorRGBA1326 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1326->setUSE("HAnimSiteLineColorRGBA");
LineSet1324->setColor(*ColorRGBA1326);

Shape1323->setGeometry(LineSet1324);

HAnimSegment1303->addChildren(*Shape1323);

CHAnimSite* HAnimSite1327 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1327->setName("r_radial_styloid_pt");
HAnimSite1327->setDEF("hanim_r_radial_styloid_pt");
HAnimSite1327->setTranslation(new float[3]{-0.1884,0.8676,-0.036});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1328 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1328->setDescription("HAnimSite r_radial_styloid_pt");
HAnimSite1327->addChildren(*TouchSensor1328);

CShape* Shape1329 = (CShape *)(m_pScene.createNode("Shape"));
Shape1329->setUSE("HAnimSiteShape");
HAnimSite1327->addChildren(*Shape1329);

HAnimSegment1303->addChildren(*HAnimSite1327);

CHAnimSite* HAnimSite1330 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1330->setName("r_olecranon_pt");
HAnimSite1330->setDEF("hanim_r_olecranon_pt");
HAnimSite1330->setTranslation(new float[3]{-0.1907,1.1405,-0.1065});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1331 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1331->setDescription("HAnimSite r_olecranon_pt");
HAnimSite1330->addChildren(*TouchSensor1331);

CShape* Shape1332 = (CShape *)(m_pScene.createNode("Shape"));
Shape1332->setUSE("HAnimSiteShape");
HAnimSite1330->addChildren(*Shape1332);

HAnimSegment1303->addChildren(*HAnimSite1330);

CHAnimSite* HAnimSite1333 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1333->setName("r_humeral_medial_epicondyle_pt");
HAnimSite1333->setDEF("hanim_r_humeral_medial_epicondyle_pt");
HAnimSite1333->setTranslation(new float[3]{-0.168,1.1298,-0.1062});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1334 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1334->setDescription("HAnimSite r_humeral_medial_epicn_pt");
HAnimSite1333->addChildren(*TouchSensor1334);

CShape* Shape1335 = (CShape *)(m_pScene.createNode("Shape"));
Shape1335->setUSE("HAnimSiteShape");
HAnimSite1333->addChildren(*Shape1335);

HAnimSegment1303->addChildren(*HAnimSite1333);

CHAnimSite* HAnimSite1336 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1336->setName("r_radiale_pt");
HAnimSite1336->setDEF("hanim_r_radiale_pt");
HAnimSite1336->setTranslation(new float[3]{-0.213,1.1305,-0.1091});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1337 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1337->setDescription("HAnimSite r_radiale_pt");
HAnimSite1336->addChildren(*TouchSensor1337);

CShape* Shape1338 = (CShape *)(m_pScene.createNode("Shape"));
Shape1338->setUSE("HAnimSiteShape");
HAnimSite1336->addChildren(*Shape1338);

HAnimSegment1303->addChildren(*HAnimSite1336);

HAnimJoint1302->addChildren(*HAnimSegment1303);

CHAnimJoint* HAnimJoint1339 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1339->setName("r_radiocarpal");
HAnimJoint1339->setDEF("hanim_r_radiocarpal");
HAnimJoint1339->setCenter(new float[3]{-0.1984,0.8663,-0.0583});
HAnimJoint1339->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1339->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1340 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1340->setName("r_carpal");
HAnimSegment1340->setDEF("hanim_r_carpal");
//Visualization sphere for <HAnimJoint name='r_radiocarpal'/> is placed within <HAnimSegment name='r_carpal'/>
CTouchSensor* TouchSensor1341 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1341->setDescription("HAnimJoint r_radiocarpal, HAnimSegment r_carpal");
HAnimSegment1340->addChildren(*TouchSensor1341);

CTransform* Transform1342 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1342->setTranslation(new float[3]{-0.1984,0.8663,-0.0583});
CShape* Shape1343 = (CShape *)(m_pScene.createNode("Shape"));
Shape1343->setUSE("HAnimJointShape");
Transform1342->addChildren(*Shape1343);

HAnimSegment1340->addChildren(*Transform1342);

//HAnimSegment visualization line from current <HAnimJoint name='r_radiocarpal'/> to child <HAnimJoint name='r_thumb1'/>
CShape* Shape1344 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1345 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1345->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1346 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1346->setPoint(new float[6]{-0.1984,0.8663,-0.0583,-0.1924,0.8472,-0.0534});
LineSet1345->setCoord(*Coordinate1346);

CColorRGBA* ColorRGBA1347 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1347->setUSE("HAnimSegmentLineColorRGBA");
LineSet1345->setColor(*ColorRGBA1347);

Shape1344->setGeometry(LineSet1345);

HAnimSegment1340->addChildren(*Shape1344);

//HAnimSegment visualization line from current <HAnimJoint name='r_radiocarpal'/> to child <HAnimJoint name='r_index0'/>
CShape* Shape1348 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1349 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1349->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1350 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1350->setPoint(new float[6]{-0.1984,0.8663,-0.0583,-0.1983,0.8024,-0.028});
LineSet1349->setCoord(*Coordinate1350);

CColorRGBA* ColorRGBA1351 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1351->setUSE("HAnimSegmentLineColorRGBA");
LineSet1349->setColor(*ColorRGBA1351);

Shape1348->setGeometry(LineSet1349);

HAnimSegment1340->addChildren(*Shape1348);

//HAnimSegment visualization line from current <HAnimJoint name='r_radiocarpal'/> to child <HAnimJoint name='r_middle0'/>
CShape* Shape1352 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1353 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1353->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1354 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1354->setPoint(new float[6]{-0.1984,0.8663,-0.0583,-0.1987,0.8029,-0.053});
LineSet1353->setCoord(*Coordinate1354);

CColorRGBA* ColorRGBA1355 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1355->setUSE("HAnimSegmentLineColorRGBA");
LineSet1353->setColor(*ColorRGBA1355);

Shape1352->setGeometry(LineSet1353);

HAnimSegment1340->addChildren(*Shape1352);

//HAnimSegment visualization line from current <HAnimJoint name='r_radiocarpal'/> to child <HAnimJoint name='r_ring0'/>
CShape* Shape1356 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1357 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1357->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1358 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1358->setPoint(new float[6]{-0.1984,0.8663,-0.0583,-0.1956,0.8019,-0.0794});
LineSet1357->setCoord(*Coordinate1358);

CColorRGBA* ColorRGBA1359 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1359->setUSE("HAnimSegmentLineColorRGBA");
LineSet1357->setColor(*ColorRGBA1359);

Shape1356->setGeometry(LineSet1357);

HAnimSegment1340->addChildren(*Shape1356);

//HAnimSegment visualization line from current <HAnimJoint name='r_radiocarpal'/> to child <HAnimJoint name='r_pinky0'/>
CShape* Shape1360 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1361 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1361->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1362 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1362->setPoint(new float[6]{-0.1984,0.8663,-0.0583,-0.1925,0.8066,-0.1036});
LineSet1361->setCoord(*Coordinate1362);

CColorRGBA* ColorRGBA1363 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1363->setUSE("HAnimSegmentLineColorRGBA");
LineSet1361->setColor(*ColorRGBA1363);

Shape1360->setGeometry(LineSet1361);

HAnimSegment1340->addChildren(*Shape1360);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_radiocarpal'/> to <HAnimSite name='r_metacarpal_pha2_pt'/>
CShape* Shape1364 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1365 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1365->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1366 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1366->setPoint(new float[6]{-0.1984,0.8663,-0.0583,-0.1977,0.8169,-0.0177});
LineSet1365->setCoord(*Coordinate1366);

CColorRGBA* ColorRGBA1367 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1367->setUSE("HAnimSiteLineColorRGBA");
LineSet1365->setColor(*ColorRGBA1367);

Shape1364->setGeometry(LineSet1365);

HAnimSegment1340->addChildren(*Shape1364);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_radiocarpal'/> to <HAnimSite name='r_ulnar_styloid_pt'/>
CShape* Shape1368 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1369 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1369->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1370 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1370->setPoint(new float[6]{-0.1984,0.8663,-0.0583,-0.2117,0.8562,-0.0584});
LineSet1369->setCoord(*Coordinate1370);

CColorRGBA* ColorRGBA1371 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1371->setUSE("HAnimSiteLineColorRGBA");
LineSet1369->setColor(*ColorRGBA1371);

Shape1368->setGeometry(LineSet1369);

HAnimSegment1340->addChildren(*Shape1368);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_radiocarpal'/> to <HAnimSite name='r_metacarpal_pha5_pt'/>
CShape* Shape1372 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1373 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1373->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1374 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1374->setPoint(new float[6]{-0.1984,0.8663,-0.0583,-0.1929,0.789,-0.1064});
LineSet1373->setCoord(*Coordinate1374);

CColorRGBA* ColorRGBA1375 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1375->setUSE("HAnimSiteLineColorRGBA");
LineSet1373->setColor(*ColorRGBA1375);

Shape1372->setGeometry(LineSet1373);

HAnimSegment1340->addChildren(*Shape1372);

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_radiocarpal'/> to <HAnimSite name='r_hand_front_view'/>
CShape* Shape1376 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1377 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1377->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1378 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1378->setPoint(new float[6]{-0.1984,0.8663,-0.0583,-0.3,0.75,0.45});
LineSet1377->setCoord(*Coordinate1378);

CColorRGBA* ColorRGBA1379 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1379->setUSE("HAnimSiteViewpointLineColorRGBA");
LineSet1377->setColor(*ColorRGBA1379);

Shape1376->setGeometry(LineSet1377);

HAnimSegment1340->addChildren(*Shape1376);

CHAnimSite* HAnimSite1380 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1380->setName("r_metacarpal_phalanx_2_pt");
HAnimSite1380->setDEF("hanim_r_metacarpal_phalanx_2_pt");
HAnimSite1380->setTranslation(new float[3]{-0.1977,0.8169,-0.0177});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1381 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1381->setDescription("HAnimSite r_metacarpal_pha2_pt");
HAnimSite1380->addChildren(*TouchSensor1381);

CShape* Shape1382 = (CShape *)(m_pScene.createNode("Shape"));
Shape1382->setUSE("HAnimSiteShape");
HAnimSite1380->addChildren(*Shape1382);

HAnimSegment1340->addChildren(*HAnimSite1380);

CHAnimSite* HAnimSite1383 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1383->setName("r_ulnar_styloid_pt");
HAnimSite1383->setDEF("hanim_r_ulnar_styloid_pt");
HAnimSite1383->setTranslation(new float[3]{-0.2117,0.8562,-0.0584});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1384 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1384->setDescription("HAnimSite r_ulnar_styloid_pt");
HAnimSite1383->addChildren(*TouchSensor1384);

CShape* Shape1385 = (CShape *)(m_pScene.createNode("Shape"));
Shape1385->setUSE("HAnimSiteShape");
HAnimSite1383->addChildren(*Shape1385);

HAnimSegment1340->addChildren(*HAnimSite1383);

CHAnimSite* HAnimSite1386 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1386->setName("r_metacarpal_phalanx_5_pt");
HAnimSite1386->setDEF("hanim_r_metacarpal_phalanx_5_pt");
HAnimSite1386->setTranslation(new float[3]{-0.1929,0.789,-0.1064});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1387 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1387->setDescription("HAnimSite r_metacarpal_pha5_pt");
HAnimSite1386->addChildren(*TouchSensor1387);

CShape* Shape1388 = (CShape *)(m_pScene.createNode("Shape"));
Shape1388->setUSE("HAnimSiteShape");
HAnimSite1386->addChildren(*Shape1388);

HAnimSegment1340->addChildren(*HAnimSite1386);

CHAnimSite* HAnimSite1389 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1389->setName("r_hand_front_view");
HAnimSite1389->setDEF("hanim_r_hand_front_view");
HAnimSite1389->setTranslation(new float[3]{-0.3,0.75,0.45});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1390 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1390->setDescription("HAnimSite r_hand_front_view");
HAnimSite1389->addChildren(*TouchSensor1390);

CShape* Shape1391 = (CShape *)(m_pScene.createNode("Shape"));
Shape1391->setUSE("HAnimSiteShape");
HAnimSite1389->addChildren(*Shape1391);

CViewpoint* Viewpoint1392 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1392->setDEF("hanim_r_hand_front_viewpoint");
Viewpoint1392->setCenterOfRotation(new float[3]{0,0.7,0});
Viewpoint1392->setDescription("right hand front");
Viewpoint1392->setPosition(new float[3]{0,0,0});
HAnimSite1389->addChildren(*Viewpoint1392);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1393 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1393->setDescription("HAnimSite hanim_r_hand_front_view Viewpoint");
Anchor1393->setUrl(new CString[1]{"#hanim_r_hand_front_viewpoint"}, 1);
CLOD* LOD1394 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1394->setForceTransitions(True);
LOD1394->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo1395 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1395->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1394->addChildren(*WorldInfo1395);

CShape* Shape1396 = (CShape *)(m_pScene.createNode("Shape"));
Shape1396->setUSE("HAnimSiteViewpointShape");
LOD1394->addChildren(*Shape1396);

Anchor1393->addChildren(*LOD1394);

HAnimSite1389->addChildren(*Anchor1393);

HAnimSegment1340->addChildren(*HAnimSite1389);

HAnimJoint1339->addChildren(*HAnimSegment1340);

CHAnimJoint* HAnimJoint1397 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1397->setName("r_carpometacarpal_1");
HAnimJoint1397->setDEF("hanim_r_carpometacarpal_1");
HAnimJoint1397->setCenter(new float[3]{-0.1924,0.8472,-0.0534});
HAnimJoint1397->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1397->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1398 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1398->setName("r_metacarpal_1");
HAnimSegment1398->setDEF("hanim_r_metacarpal_1");
//Visualization sphere for <HAnimJoint name='r_thumb1'/> is placed within <HAnimSegment name='r_metacarpal_1'/>
CTouchSensor* TouchSensor1399 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1399->setDescription("HAnimJoint r_thumb1, HAnimSegment r_metacarpal_1");
HAnimSegment1398->addChildren(*TouchSensor1399);

CTransform* Transform1400 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1400->setTranslation(new float[3]{-0.1924,0.8472,-0.0534});
CShape* Shape1401 = (CShape *)(m_pScene.createNode("Shape"));
Shape1401->setUSE("HAnimJointShape");
Transform1400->addChildren(*Shape1401);

HAnimSegment1398->addChildren(*Transform1400);

//HAnimSegment visualization line from current <HAnimJoint name='r_thumb1'/> to child <HAnimJoint name='r_thumb2'/>
CShape* Shape1402 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1403 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1403->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1404 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1404->setPoint(new float[6]{-0.1924,0.8472,-0.0534,-0.1951,0.8226,0.0246});
LineSet1403->setCoord(*Coordinate1404);

CColorRGBA* ColorRGBA1405 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1405->setUSE("HAnimSegmentLineColorRGBA");
LineSet1403->setColor(*ColorRGBA1405);

Shape1402->setGeometry(LineSet1403);

HAnimSegment1398->addChildren(*Shape1402);

HAnimJoint1397->addChildren(*HAnimSegment1398);

CHAnimJoint* HAnimJoint1406 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1406->setName("r_metacarpophalangeal_1");
HAnimJoint1406->setDEF("hanim_r_metacarpophalangeal_1");
HAnimJoint1406->setCenter(new float[3]{-0.1951,0.8226,0.0246});
HAnimJoint1406->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1406->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1407 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1407->setName("r_carpal_proximal_phalanx_1");
HAnimSegment1407->setDEF("hanim_r_carpal_proximal_phalanx_1");
//Visualization sphere for <HAnimJoint name='r_thumb2'/> is placed within <HAnimSegment name='r_carpal_proximal_phalanx_1'/>
CTouchSensor* TouchSensor1408 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1408->setDescription("HAnimJoint r_thumb2, HAnimSegment r_carpal_proximal_phalanx_1");
HAnimSegment1407->addChildren(*TouchSensor1408);

CTransform* Transform1409 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1409->setTranslation(new float[3]{-0.1951,0.8226,0.0246});
CShape* Shape1410 = (CShape *)(m_pScene.createNode("Shape"));
Shape1410->setUSE("HAnimJointShape");
Transform1409->addChildren(*Shape1410);

HAnimSegment1407->addChildren(*Transform1409);

//HAnimSegment visualization line from current <HAnimJoint name='r_thumb2'/> to child <HAnimJoint name='r_thumb3'/>
CShape* Shape1411 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1412 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1412->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1413 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1413->setPoint(new float[6]{-0.1951,0.8226,0.0246,-0.1955,0.8159,0.0464});
LineSet1412->setCoord(*Coordinate1413);

CColorRGBA* ColorRGBA1414 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1414->setUSE("HAnimSegmentLineColorRGBA");
LineSet1412->setColor(*ColorRGBA1414);

Shape1411->setGeometry(LineSet1412);

HAnimSegment1407->addChildren(*Shape1411);

HAnimJoint1406->addChildren(*HAnimSegment1407);

CHAnimJoint* HAnimJoint1415 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1415->setName("r_carpal_interphalangeal_1");
HAnimJoint1415->setDEF("hanim_r_carpal_interphalangeal_1");
HAnimJoint1415->setCenter(new float[3]{-0.1955,0.8159,0.0464});
HAnimJoint1415->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1415->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1416 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1416->setName("r_carpal_distal_phalanx_1");
HAnimSegment1416->setDEF("hanim_r_carpal_distal_phalanx_1");
//Visualization sphere for <HAnimJoint name='r_thumb3'/> is placed within <HAnimSegment name='r_carpal_distal_phalanx_1'/>
CTouchSensor* TouchSensor1417 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1417->setDescription("HAnimJoint r_thumb3, HAnimSegment r_carpal_distal_phalanx_1");
HAnimSegment1416->addChildren(*TouchSensor1417);

CTransform* Transform1418 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1418->setTranslation(new float[3]{-0.1955,0.8159,0.0464});
CShape* Shape1419 = (CShape *)(m_pScene.createNode("Shape"));
Shape1419->setUSE("HAnimJointShape");
Transform1418->addChildren(*Shape1419);

HAnimSegment1416->addChildren(*Transform1418);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_thumb3'/> to <HAnimSite name='r_thumb_distal_tip'/>
CShape* Shape1420 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1421 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1421->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1422 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1422->setPoint(new float[6]{-0.1955,0.8159,0.0464,-0.1869,0.809,0.082});
LineSet1421->setCoord(*Coordinate1422);

CColorRGBA* ColorRGBA1423 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1423->setUSE("HAnimSiteLineColorRGBA");
LineSet1421->setColor(*ColorRGBA1423);

Shape1420->setGeometry(LineSet1421);

HAnimSegment1416->addChildren(*Shape1420);

CHAnimSite* HAnimSite1424 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1424->setName("r_carpal_distal_phalanx_1_pt");
HAnimSite1424->setDEF("hanim_r_carpal_distal_phalanx_1_pt");
HAnimSite1424->setTranslation(new float[3]{-0.1869,0.809,0.082});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1425 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1425->setDescription("HAnimSite r_thumb_distal_tip");
HAnimSite1424->addChildren(*TouchSensor1425);

CShape* Shape1426 = (CShape *)(m_pScene.createNode("Shape"));
Shape1426->setUSE("HAnimSiteShape");
HAnimSite1424->addChildren(*Shape1426);

HAnimSegment1416->addChildren(*HAnimSite1424);

HAnimJoint1415->addChildren(*HAnimSegment1416);

HAnimJoint1406->addChildren(*HAnimJoint1415);

HAnimJoint1397->addChildren(*HAnimJoint1406);

HAnimJoint1339->addChildren(*HAnimJoint1397);

CHAnimJoint* HAnimJoint1427 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1427->setName("r_carpometacarpal_2");
HAnimJoint1427->setDEF("hanim_r_carpometacarpal_2");
HAnimJoint1427->setCenter(new float[3]{-0.1983,0.8024,-0.028});
HAnimJoint1427->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1427->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1428 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1428->setName("r_metacarpal_2");
HAnimSegment1428->setDEF("hanim_r_metacarpal_2");
//Visualization sphere for <HAnimJoint name='r_index0'/> is placed within <HAnimSegment name='r_metacarpal_2'/>
CTouchSensor* TouchSensor1429 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1429->setDescription("HAnimJoint r_index0, HAnimSegment r_metacarpal_2");
HAnimSegment1428->addChildren(*TouchSensor1429);

CTransform* Transform1430 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1430->setTranslation(new float[3]{-0.1983,0.8024,-0.028});
CShape* Shape1431 = (CShape *)(m_pScene.createNode("Shape"));
Shape1431->setUSE("HAnimJointShape");
Transform1430->addChildren(*Shape1431);

HAnimSegment1428->addChildren(*Transform1430);

//HAnimSegment visualization line from current <HAnimJoint name='r_index0'/> to child <HAnimJoint name='r_index1'/>
CShape* Shape1432 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1433 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1433->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1434 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1434->setPoint(new float[6]{-0.1983,0.8024,-0.028,-0.1983,0.7815,-0.028});
LineSet1433->setCoord(*Coordinate1434);

CColorRGBA* ColorRGBA1435 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1435->setUSE("HAnimSegmentLineColorRGBA");
LineSet1433->setColor(*ColorRGBA1435);

Shape1432->setGeometry(LineSet1433);

HAnimSegment1428->addChildren(*Shape1432);

HAnimJoint1427->addChildren(*HAnimSegment1428);

CHAnimJoint* HAnimJoint1436 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1436->setName("r_metacarpophalangeal_2");
HAnimJoint1436->setDEF("hanim_r_metacarpophalangeal_2");
HAnimJoint1436->setCenter(new float[3]{-0.1983,0.7815,-0.028});
HAnimJoint1436->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1436->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1437 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1437->setName("r_carpal_proximal_phalanx_2");
HAnimSegment1437->setDEF("hanim_r_carpal_proximal_phalanx_2");
//Visualization sphere for <HAnimJoint name='r_index1'/> is placed within <HAnimSegment name='r_carpal_proximal_phalanx_2'/>
CTouchSensor* TouchSensor1438 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1438->setDescription("HAnimJoint r_index1, HAnimSegment r_carpal_proximal_phalanx_2");
HAnimSegment1437->addChildren(*TouchSensor1438);

CTransform* Transform1439 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1439->setTranslation(new float[3]{-0.1983,0.7815,-0.028});
CShape* Shape1440 = (CShape *)(m_pScene.createNode("Shape"));
Shape1440->setUSE("HAnimJointShape");
Transform1439->addChildren(*Shape1440);

HAnimSegment1437->addChildren(*Transform1439);

//HAnimSegment visualization line from current <HAnimJoint name='r_index1'/> to child <HAnimJoint name='r_index2'/>
CShape* Shape1441 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1442 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1442->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1443 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1443->setPoint(new float[6]{-0.1983,0.7815,-0.028,-0.2017,0.7363,-0.0248});
LineSet1442->setCoord(*Coordinate1443);

CColorRGBA* ColorRGBA1444 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1444->setUSE("HAnimSegmentLineColorRGBA");
LineSet1442->setColor(*ColorRGBA1444);

Shape1441->setGeometry(LineSet1442);

HAnimSegment1437->addChildren(*Shape1441);

HAnimJoint1436->addChildren(*HAnimSegment1437);

CHAnimJoint* HAnimJoint1445 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1445->setName("r_carpal_proximal_interphalangeal_2");
HAnimJoint1445->setDEF("hanim_r_carpal_proximal_interphalangeal_2");
HAnimJoint1445->setCenter(new float[3]{-0.2017,0.7363,-0.0248});
HAnimJoint1445->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1445->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1446 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1446->setName("r_carpal_middle_phalanx_2");
HAnimSegment1446->setDEF("hanim_r_carpal_middle_phalanx_2");
//Visualization sphere for <HAnimJoint name='r_index2'/> is placed within <HAnimSegment name='r_carpal_middle_phalanx_2'/>
CTouchSensor* TouchSensor1447 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1447->setDescription("HAnimJoint r_index2, HAnimSegment r_carpal_middle_phalanx_2");
HAnimSegment1446->addChildren(*TouchSensor1447);

CTransform* Transform1448 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1448->setTranslation(new float[3]{-0.2017,0.7363,-0.0248});
CShape* Shape1449 = (CShape *)(m_pScene.createNode("Shape"));
Shape1449->setUSE("HAnimJointShape");
Transform1448->addChildren(*Shape1449);

HAnimSegment1446->addChildren(*Transform1448);

//HAnimSegment visualization line from current <HAnimJoint name='r_index2'/> to child <HAnimJoint name='r_index3'/>
CShape* Shape1450 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1451 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1451->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1452 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1452->setPoint(new float[6]{-0.2017,0.7363,-0.0248,-0.2028,0.7139,-0.0236});
LineSet1451->setCoord(*Coordinate1452);

CColorRGBA* ColorRGBA1453 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1453->setUSE("HAnimSegmentLineColorRGBA");
LineSet1451->setColor(*ColorRGBA1453);

Shape1450->setGeometry(LineSet1451);

HAnimSegment1446->addChildren(*Shape1450);

HAnimJoint1445->addChildren(*HAnimSegment1446);

CHAnimJoint* HAnimJoint1454 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1454->setName("r_carpal_distal_interphalangeal_2");
HAnimJoint1454->setDEF("hanim_r_carpal_distal_interphalangeal_2");
HAnimJoint1454->setCenter(new float[3]{-0.2028,0.7139,-0.0236});
HAnimJoint1454->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1454->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1455 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1455->setName("r_carpal_distal_phalanx_2");
HAnimSegment1455->setDEF("hanim_r_carpal_distal_phalanx_2");
//Visualization sphere for <HAnimJoint name='r_index3'/> is placed within <HAnimSegment name='r_carpal_distal_phalanx_2'/>
CTouchSensor* TouchSensor1456 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1456->setDescription("HAnimJoint r_index3, HAnimSegment r_carpal_distal_phalanx_2");
HAnimSegment1455->addChildren(*TouchSensor1456);

CTransform* Transform1457 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1457->setTranslation(new float[3]{-0.2028,0.7139,-0.0236});
CShape* Shape1458 = (CShape *)(m_pScene.createNode("Shape"));
Shape1458->setUSE("HAnimJointShape");
Transform1457->addChildren(*Shape1458);

HAnimSegment1455->addChildren(*Transform1457);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_index_distal_tip'/>
CShape* Shape1459 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1460 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1460->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1461 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1461->setPoint(new float[6]{-0.2028,0.7139,-0.0236,-0.198,0.6883,-0.018});
LineSet1460->setCoord(*Coordinate1461);

CColorRGBA* ColorRGBA1462 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1462->setUSE("HAnimSiteLineColorRGBA");
LineSet1460->setColor(*ColorRGBA1462);

Shape1459->setGeometry(LineSet1460);

HAnimSegment1455->addChildren(*Shape1459);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_dactylion_pt'/>
CShape* Shape1463 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1464 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1464->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1465 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1465->setPoint(new float[6]{-0.2028,0.7139,-0.0236,-0.1941,0.6772,-0.0423});
LineSet1464->setCoord(*Coordinate1465);

CColorRGBA* ColorRGBA1466 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1466->setUSE("HAnimSiteLineColorRGBA");
LineSet1464->setColor(*ColorRGBA1466);

Shape1463->setGeometry(LineSet1464);

HAnimSegment1455->addChildren(*Shape1463);

CHAnimSite* HAnimSite1467 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1467->setName("r_carpal_distal_phalanx_2_pt");
HAnimSite1467->setDEF("hanim_r_carpal_distal_phalanx_2_pt");
HAnimSite1467->setTranslation(new float[3]{-0.198,0.6883,-0.018});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1468 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1468->setDescription("HAnimSite r_index_distal_tip");
HAnimSite1467->addChildren(*TouchSensor1468);

CShape* Shape1469 = (CShape *)(m_pScene.createNode("Shape"));
Shape1469->setUSE("HAnimSiteShape");
HAnimSite1467->addChildren(*Shape1469);

HAnimSegment1455->addChildren(*HAnimSite1467);

CHAnimSite* HAnimSite1470 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1470->setName("r_dactylion_pt");
HAnimSite1470->setDEF("hanim_r_dactylion_pt");
HAnimSite1470->setTranslation(new float[3]{-0.1941,0.6772,-0.0423});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1471 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1471->setDescription("HAnimSite r_dactylion_pt");
HAnimSite1470->addChildren(*TouchSensor1471);

CShape* Shape1472 = (CShape *)(m_pScene.createNode("Shape"));
Shape1472->setUSE("HAnimSiteShape");
HAnimSite1470->addChildren(*Shape1472);

HAnimSegment1455->addChildren(*HAnimSite1470);

HAnimJoint1454->addChildren(*HAnimSegment1455);

HAnimJoint1445->addChildren(*HAnimJoint1454);

HAnimJoint1436->addChildren(*HAnimJoint1445);

HAnimJoint1427->addChildren(*HAnimJoint1436);

HAnimJoint1339->addChildren(*HAnimJoint1427);

CHAnimJoint* HAnimJoint1473 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1473->setName("r_carpometacarpal_3");
HAnimJoint1473->setDEF("hanim_r_carpometacarpal_3");
HAnimJoint1473->setCenter(new float[3]{-0.1987,0.8029,-0.053});
HAnimJoint1473->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1473->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1474 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1474->setName("r_metacarpal_3");
HAnimSegment1474->setDEF("hanim_r_metacarpal_3");
//Visualization sphere for <HAnimJoint name='r_middle0'/> is placed within <HAnimSegment name='r_metacarpal_3'/>
CTouchSensor* TouchSensor1475 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1475->setDescription("HAnimJoint r_middle0, HAnimSegment r_metacarpal_3");
HAnimSegment1474->addChildren(*TouchSensor1475);

CTransform* Transform1476 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1476->setTranslation(new float[3]{-0.1987,0.8029,-0.053});
CShape* Shape1477 = (CShape *)(m_pScene.createNode("Shape"));
Shape1477->setUSE("HAnimJointShape");
Transform1476->addChildren(*Shape1477);

HAnimSegment1474->addChildren(*Transform1476);

//HAnimSegment visualization line from current <HAnimJoint name='r_middle0'/> to child <HAnimJoint name='r_middle1'/>
CShape* Shape1478 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1479 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1479->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1480 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1480->setPoint(new float[6]{-0.1987,0.8029,-0.053,-0.1987,0.7818,-0.053});
LineSet1479->setCoord(*Coordinate1480);

CColorRGBA* ColorRGBA1481 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1481->setUSE("HAnimSegmentLineColorRGBA");
LineSet1479->setColor(*ColorRGBA1481);

Shape1478->setGeometry(LineSet1479);

HAnimSegment1474->addChildren(*Shape1478);

HAnimJoint1473->addChildren(*HAnimSegment1474);

CHAnimJoint* HAnimJoint1482 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1482->setName("r_metacarpophalangeal_3");
HAnimJoint1482->setDEF("hanim_r_metacarpophalangeal_3");
HAnimJoint1482->setCenter(new float[3]{-0.1987,0.7818,-0.053});
HAnimJoint1482->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1482->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1483 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1483->setName("r_carpal_proximal_phalanx_3");
HAnimSegment1483->setDEF("hanim_r_carpal_proximal_phalanx_3");
//Visualization sphere for <HAnimJoint name='r_middle1'/> is placed within <HAnimSegment name='r_carpal_proximal_phalanx_3'/>
CTouchSensor* TouchSensor1484 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1484->setDescription("HAnimJoint r_middle1, HAnimSegment r_carpal_proximal_phalanx_3");
HAnimSegment1483->addChildren(*TouchSensor1484);

CTransform* Transform1485 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1485->setTranslation(new float[3]{-0.1987,0.7818,-0.053});
CShape* Shape1486 = (CShape *)(m_pScene.createNode("Shape"));
Shape1486->setUSE("HAnimJointShape");
Transform1485->addChildren(*Shape1486);

HAnimSegment1483->addChildren(*Transform1485);

//HAnimSegment visualization line from current <HAnimJoint name='r_middle1'/> to child <HAnimJoint name='r_middle2'/>
CShape* Shape1487 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1488 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1488->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1489 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1489->setPoint(new float[6]{-0.1987,0.7818,-0.053,-0.2013,0.7273,-0.0503});
LineSet1488->setCoord(*Coordinate1489);

CColorRGBA* ColorRGBA1490 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1490->setUSE("HAnimSegmentLineColorRGBA");
LineSet1488->setColor(*ColorRGBA1490);

Shape1487->setGeometry(LineSet1488);

HAnimSegment1483->addChildren(*Shape1487);

HAnimJoint1482->addChildren(*HAnimSegment1483);

CHAnimJoint* HAnimJoint1491 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1491->setName("r_carpal_proximal_interphalangeal_3");
HAnimJoint1491->setDEF("hanim_r_carpal_proximal_interphalangeal_3");
HAnimJoint1491->setCenter(new float[3]{-0.2013,0.7273,-0.0503});
HAnimJoint1491->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1491->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1492 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1492->setName("r_carpal_middle_phalanx_3");
HAnimSegment1492->setDEF("hanim_r_carpal_middle_phalanx_3");
//Visualization sphere for <HAnimJoint name='r_middle2'/> is placed within <HAnimSegment name='r_carpal_middle_phalanx_3'/>
CTouchSensor* TouchSensor1493 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1493->setDescription("HAnimJoint r_middle2, HAnimSegment r_carpal_middle_phalanx_3");
HAnimSegment1492->addChildren(*TouchSensor1493);

CTransform* Transform1494 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1494->setTranslation(new float[3]{-0.2013,0.7273,-0.0503});
CShape* Shape1495 = (CShape *)(m_pScene.createNode("Shape"));
Shape1495->setUSE("HAnimJointShape");
Transform1494->addChildren(*Shape1495);

HAnimSegment1492->addChildren(*Transform1494);

//HAnimSegment visualization line from current <HAnimJoint name='r_middle2'/> to child <HAnimJoint name='r_middle3'/>
CShape* Shape1496 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1497 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1497->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1498 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1498->setPoint(new float[6]{-0.2013,0.7273,-0.0503,-0.2026,0.7011,-0.0494});
LineSet1497->setCoord(*Coordinate1498);

CColorRGBA* ColorRGBA1499 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1499->setUSE("HAnimSegmentLineColorRGBA");
LineSet1497->setColor(*ColorRGBA1499);

Shape1496->setGeometry(LineSet1497);

HAnimSegment1492->addChildren(*Shape1496);

HAnimJoint1491->addChildren(*HAnimSegment1492);

CHAnimJoint* HAnimJoint1500 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1500->setName("r_carpal_distal_interphalangeal_3");
HAnimJoint1500->setDEF("hanim_r_carpal_distal_interphalangeal_3");
HAnimJoint1500->setCenter(new float[3]{-0.2026,0.7011,-0.0494});
HAnimJoint1500->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1500->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1501 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1501->setName("r_carpal_distal_phalanx_3");
HAnimSegment1501->setDEF("hanim_r_carpal_distal_phalanx_3");
//Visualization sphere for <HAnimJoint name='r_middle3'/> is placed within <HAnimSegment name='r_carpal_distal_phalanx_3'/>
CTouchSensor* TouchSensor1502 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1502->setDescription("HAnimJoint r_middle3, HAnimSegment r_carpal_distal_phalanx_3");
HAnimSegment1501->addChildren(*TouchSensor1502);

CTransform* Transform1503 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1503->setTranslation(new float[3]{-0.2026,0.7011,-0.0494});
CShape* Shape1504 = (CShape *)(m_pScene.createNode("Shape"));
Shape1504->setUSE("HAnimJointShape");
Transform1503->addChildren(*Shape1504);

HAnimSegment1501->addChildren(*Transform1503);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_middle3'/> to <HAnimSite name='r_middle_distal_tip'/>
CShape* Shape1505 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1506 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1506->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1507 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1507->setPoint(new float[6]{-0.2026,0.7011,-0.0494,-0.1969,0.6758,-0.0427});
LineSet1506->setCoord(*Coordinate1507);

CColorRGBA* ColorRGBA1508 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1508->setUSE("HAnimSiteLineColorRGBA");
LineSet1506->setColor(*ColorRGBA1508);

Shape1505->setGeometry(LineSet1506);

HAnimSegment1501->addChildren(*Shape1505);

CHAnimSite* HAnimSite1509 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1509->setName("r_carpal_distal_phalanx_3_pt");
HAnimSite1509->setDEF("hanim_r_carpal_distal_phalanx_3_pt");
HAnimSite1509->setTranslation(new float[3]{-0.1969,0.6758,-0.0427});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1510 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1510->setDescription("HAnimSite r_middle_distal_tip");
HAnimSite1509->addChildren(*TouchSensor1510);

CShape* Shape1511 = (CShape *)(m_pScene.createNode("Shape"));
Shape1511->setUSE("HAnimSiteShape");
HAnimSite1509->addChildren(*Shape1511);

HAnimSegment1501->addChildren(*HAnimSite1509);

HAnimJoint1500->addChildren(*HAnimSegment1501);

HAnimJoint1491->addChildren(*HAnimJoint1500);

HAnimJoint1482->addChildren(*HAnimJoint1491);

HAnimJoint1473->addChildren(*HAnimJoint1482);

HAnimJoint1339->addChildren(*HAnimJoint1473);

CHAnimJoint* HAnimJoint1512 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1512->setName("r_carpometacarpal_4");
HAnimJoint1512->setDEF("hanim_r_carpometacarpal_4");
HAnimJoint1512->setCenter(new float[3]{-0.1956,0.8019,-0.0794});
HAnimJoint1512->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1512->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1513 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1513->setName("r_metacarpal_4");
HAnimSegment1513->setDEF("hanim_r_metacarpal_4");
//Visualization sphere for <HAnimJoint name='r_ring0'/> is placed within <HAnimSegment name='r_metacarpal_4'/>
CTouchSensor* TouchSensor1514 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1514->setDescription("HAnimJoint r_ring0, HAnimSegment r_metacarpal_4");
HAnimSegment1513->addChildren(*TouchSensor1514);

CTransform* Transform1515 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1515->setTranslation(new float[3]{-0.1956,0.8019,-0.0794});
CShape* Shape1516 = (CShape *)(m_pScene.createNode("Shape"));
Shape1516->setUSE("HAnimJointShape");
Transform1515->addChildren(*Shape1516);

HAnimSegment1513->addChildren(*Transform1515);

//HAnimSegment visualization line from current <HAnimJoint name='r_ring0'/> to child <HAnimJoint name='r_ring1'/>
CShape* Shape1517 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1518 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1518->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1519 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1519->setPoint(new float[6]{-0.1956,0.8019,-0.0794,-0.1956,0.7815,-0.0794});
LineSet1518->setCoord(*Coordinate1519);

CColorRGBA* ColorRGBA1520 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1520->setUSE("HAnimSegmentLineColorRGBA");
LineSet1518->setColor(*ColorRGBA1520);

Shape1517->setGeometry(LineSet1518);

HAnimSegment1513->addChildren(*Shape1517);

HAnimJoint1512->addChildren(*HAnimSegment1513);

CHAnimJoint* HAnimJoint1521 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1521->setName("r_metacarpophalangeal_4");
HAnimJoint1521->setDEF("hanim_r_metacarpophalangeal_4");
HAnimJoint1521->setCenter(new float[3]{-0.1956,0.7815,-0.0794});
HAnimJoint1521->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1521->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1522 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1522->setName("r_carpal_proximal_phalanx_4");
HAnimSegment1522->setDEF("hanim_r_carpal_proximal_phalanx_4");
//Visualization sphere for <HAnimJoint name='r_ring1'/> is placed within <HAnimSegment name='r_carpal_proximal_phalanx_4'/>
CTouchSensor* TouchSensor1523 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1523->setDescription("HAnimJoint r_ring1, HAnimSegment r_carpal_proximal_phalanx_4");
HAnimSegment1522->addChildren(*TouchSensor1523);

CTransform* Transform1524 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1524->setTranslation(new float[3]{-0.1956,0.7815,-0.0794});
CShape* Shape1525 = (CShape *)(m_pScene.createNode("Shape"));
Shape1525->setUSE("HAnimJointShape");
Transform1524->addChildren(*Shape1525);

HAnimSegment1522->addChildren(*Transform1524);

//HAnimSegment visualization line from current <HAnimJoint name='r_ring1'/> to child <HAnimJoint name='r_ring2'/>
CShape* Shape1526 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1527 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1527->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1528 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1528->setPoint(new float[6]{-0.1956,0.7815,-0.0794,-0.1973,0.7287,-0.0777});
LineSet1527->setCoord(*Coordinate1528);

CColorRGBA* ColorRGBA1529 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1529->setUSE("HAnimSegmentLineColorRGBA");
LineSet1527->setColor(*ColorRGBA1529);

Shape1526->setGeometry(LineSet1527);

HAnimSegment1522->addChildren(*Shape1526);

HAnimJoint1521->addChildren(*HAnimSegment1522);

CHAnimJoint* HAnimJoint1530 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1530->setName("r_carpal_proximal_interphalangeal_4");
HAnimJoint1530->setDEF("hanim_r_carpal_proximal_interphalangeal_4");
HAnimJoint1530->setCenter(new float[3]{-0.1973,0.7287,-0.0777});
HAnimJoint1530->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1530->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1531 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1531->setName("r_carpal_middle_phalanx_4");
HAnimSegment1531->setDEF("hanim_r_carpal_middle_phalanx_4");
//Visualization sphere for <HAnimJoint name='r_ring2'/> is placed within <HAnimSegment name='r_carpal_middle_phalanx_4'/>
CTouchSensor* TouchSensor1532 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1532->setDescription("HAnimJoint r_ring2, HAnimSegment r_carpal_middle_phalanx_4");
HAnimSegment1531->addChildren(*TouchSensor1532);

CTransform* Transform1533 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1533->setTranslation(new float[3]{-0.1973,0.7287,-0.0777});
CShape* Shape1534 = (CShape *)(m_pScene.createNode("Shape"));
Shape1534->setUSE("HAnimJointShape");
Transform1533->addChildren(*Shape1534);

HAnimSegment1531->addChildren(*Transform1533);

//HAnimSegment visualization line from current <HAnimJoint name='r_ring2'/> to child <HAnimJoint name='r_ring3'/>
CShape* Shape1535 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1536 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1536->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1537 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1537->setPoint(new float[6]{-0.1973,0.7287,-0.0777,-0.1983,0.7045,-0.0767});
LineSet1536->setCoord(*Coordinate1537);

CColorRGBA* ColorRGBA1538 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1538->setUSE("HAnimSegmentLineColorRGBA");
LineSet1536->setColor(*ColorRGBA1538);

Shape1535->setGeometry(LineSet1536);

HAnimSegment1531->addChildren(*Shape1535);

HAnimJoint1530->addChildren(*HAnimSegment1531);

CHAnimJoint* HAnimJoint1539 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1539->setName("r_carpal_distal_interphalangeal_4");
HAnimJoint1539->setDEF("hanim_r_carpal_distal_interphalangeal_4");
HAnimJoint1539->setCenter(new float[3]{-0.1983,0.7045,-0.0767});
HAnimJoint1539->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1539->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1540 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1540->setName("r_carpal_distal_phalanx_4");
HAnimSegment1540->setDEF("hanim_r_carpal_distal_phalanx_4");
//Visualization sphere for <HAnimJoint name='r_ring3'/> is placed within <HAnimSegment name='r_carpal_distal_phalanx_4'/>
CTouchSensor* TouchSensor1541 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1541->setDescription("HAnimJoint r_ring3, HAnimSegment r_carpal_distal_phalanx_4");
HAnimSegment1540->addChildren(*TouchSensor1541);

CTransform* Transform1542 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1542->setTranslation(new float[3]{-0.1983,0.7045,-0.0767});
CShape* Shape1543 = (CShape *)(m_pScene.createNode("Shape"));
Shape1543->setUSE("HAnimJointShape");
Transform1542->addChildren(*Shape1543);

HAnimSegment1540->addChildren(*Transform1542);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ring3'/> to <HAnimSite name='r_ring_distal_tip'/>
CShape* Shape1544 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1545 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1545->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1546 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1546->setPoint(new float[6]{-0.1983,0.7045,-0.0767,-0.1934,0.6778,-0.0693});
LineSet1545->setCoord(*Coordinate1546);

CColorRGBA* ColorRGBA1547 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1547->setUSE("HAnimSiteLineColorRGBA");
LineSet1545->setColor(*ColorRGBA1547);

Shape1544->setGeometry(LineSet1545);

HAnimSegment1540->addChildren(*Shape1544);

CHAnimSite* HAnimSite1548 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1548->setName("r_carpal_distal_phalanx_4_pt");
HAnimSite1548->setDEF("hanim_r_carpal_distal_phalanx_4_pt");
HAnimSite1548->setTranslation(new float[3]{-0.1934,0.6778,-0.0693});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1549 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1549->setDescription("HAnimSite r_ring_distal_tip");
HAnimSite1548->addChildren(*TouchSensor1549);

CShape* Shape1550 = (CShape *)(m_pScene.createNode("Shape"));
Shape1550->setUSE("HAnimSiteShape");
HAnimSite1548->addChildren(*Shape1550);

HAnimSegment1540->addChildren(*HAnimSite1548);

HAnimJoint1539->addChildren(*HAnimSegment1540);

HAnimJoint1530->addChildren(*HAnimJoint1539);

HAnimJoint1521->addChildren(*HAnimJoint1530);

HAnimJoint1512->addChildren(*HAnimJoint1521);

HAnimJoint1339->addChildren(*HAnimJoint1512);

CHAnimJoint* HAnimJoint1551 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1551->setName("r_carpometacarpal_5");
HAnimJoint1551->setDEF("hanim_r_carpometacarpal_5");
HAnimJoint1551->setCenter(new float[3]{-0.1925,0.8066,-0.1036});
HAnimJoint1551->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1551->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1552 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1552->setName("r_metacarpal_5");
HAnimSegment1552->setDEF("hanim_r_metacarpal_5");
//Visualization sphere for <HAnimJoint name='r_pinky0'/> is placed within <HAnimSegment name='r_metacarpal_5'/>
CTouchSensor* TouchSensor1553 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1553->setDescription("HAnimJoint r_pinky0, HAnimSegment r_metacarpal_5");
HAnimSegment1552->addChildren(*TouchSensor1553);

CTransform* Transform1554 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1554->setTranslation(new float[3]{-0.1925,0.8066,-0.1036});
CShape* Shape1555 = (CShape *)(m_pScene.createNode("Shape"));
Shape1555->setUSE("HAnimJointShape");
Transform1554->addChildren(*Shape1555);

HAnimSegment1552->addChildren(*Transform1554);

//HAnimSegment visualization line from current <HAnimJoint name='r_pinky0'/> to child <HAnimJoint name='r_pinky1'/>
CShape* Shape1556 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1557 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1557->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1558 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1558->setPoint(new float[6]{-0.1925,0.8066,-0.1036,-0.1925,0.7866,-0.1036});
LineSet1557->setCoord(*Coordinate1558);

CColorRGBA* ColorRGBA1559 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1559->setUSE("HAnimSegmentLineColorRGBA");
LineSet1557->setColor(*ColorRGBA1559);

Shape1556->setGeometry(LineSet1557);

HAnimSegment1552->addChildren(*Shape1556);

HAnimJoint1551->addChildren(*HAnimSegment1552);

CHAnimJoint* HAnimJoint1560 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1560->setName("r_metacarpophalangeal_5");
HAnimJoint1560->setDEF("hanim_r_metacarpophalangeal_5");
HAnimJoint1560->setCenter(new float[3]{-0.1925,0.7866,-0.1036});
HAnimJoint1560->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1560->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1561 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1561->setName("r_carpal_proximal_phalanx_5");
HAnimSegment1561->setDEF("hanim_r_carpal_proximal_phalanx_5");
//Visualization sphere for <HAnimJoint name='r_pinky1'/> is placed within <HAnimSegment name='r_carpal_proximal_phalanx_5'/>
CTouchSensor* TouchSensor1562 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1562->setDescription("HAnimJoint r_pinky1, HAnimSegment r_carpal_proximal_phalanx_5");
HAnimSegment1561->addChildren(*TouchSensor1562);

CTransform* Transform1563 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1563->setTranslation(new float[3]{-0.1925,0.7866,-0.1036});
CShape* Shape1564 = (CShape *)(m_pScene.createNode("Shape"));
Shape1564->setUSE("HAnimJointShape");
Transform1563->addChildren(*Shape1564);

HAnimSegment1561->addChildren(*Transform1563);

//HAnimSegment visualization line from current <HAnimJoint name='r_pinky1'/> to child <HAnimJoint name='r_pinky2'/>
CShape* Shape1565 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1566 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1566->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1567 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1567->setPoint(new float[6]{-0.1925,0.7866,-0.1036,-0.1938,0.7452,-0.1024});
LineSet1566->setCoord(*Coordinate1567);

CColorRGBA* ColorRGBA1568 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1568->setUSE("HAnimSegmentLineColorRGBA");
LineSet1566->setColor(*ColorRGBA1568);

Shape1565->setGeometry(LineSet1566);

HAnimSegment1561->addChildren(*Shape1565);

HAnimJoint1560->addChildren(*HAnimSegment1561);

CHAnimJoint* HAnimJoint1569 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1569->setName("r_carpal_proximal_interphalangeal_5");
HAnimJoint1569->setDEF("hanim_r_carpal_proximal_interphalangeal_5");
HAnimJoint1569->setCenter(new float[3]{-0.1938,0.7452,-0.1024});
HAnimJoint1569->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1569->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1570 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1570->setName("r_carpal_middle_phalanx_5");
HAnimSegment1570->setDEF("hanim_r_carpal_middle_phalanx_5");
//Visualization sphere for <HAnimJoint name='r_pinky2'/> is placed within <HAnimSegment name='r_carpal_middle_phalanx_5'/>
CTouchSensor* TouchSensor1571 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1571->setDescription("HAnimJoint r_pinky2, HAnimSegment r_carpal_middle_phalanx_5");
HAnimSegment1570->addChildren(*TouchSensor1571);

CTransform* Transform1572 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1572->setTranslation(new float[3]{-0.1938,0.7452,-0.1024});
CShape* Shape1573 = (CShape *)(m_pScene.createNode("Shape"));
Shape1573->setUSE("HAnimJointShape");
Transform1572->addChildren(*Shape1573);

HAnimSegment1570->addChildren(*Transform1572);

//HAnimSegment visualization line from current <HAnimJoint name='r_pinky2'/> to child <HAnimJoint name='r_pinky3'/>
CShape* Shape1574 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1575 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1575->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1576 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1576->setPoint(new float[6]{-0.1938,0.7452,-0.1024,-0.1948,0.7277,-0.1017});
LineSet1575->setCoord(*Coordinate1576);

CColorRGBA* ColorRGBA1577 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1577->setUSE("HAnimSegmentLineColorRGBA");
LineSet1575->setColor(*ColorRGBA1577);

Shape1574->setGeometry(LineSet1575);

HAnimSegment1570->addChildren(*Shape1574);

HAnimJoint1569->addChildren(*HAnimSegment1570);

CHAnimJoint* HAnimJoint1578 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1578->setName("r_carpal_distal_interphalangeal_5");
HAnimJoint1578->setDEF("hanim_r_carpal_distal_interphalangeal_5");
HAnimJoint1578->setCenter(new float[3]{-0.1948,0.7277,-0.1017});
HAnimJoint1578->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1578->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1579 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1579->setName("r_carpal_distal_phalanx_5");
HAnimSegment1579->setDEF("hanim_r_carpal_distal_phalanx_5");
//Visualization sphere for <HAnimJoint name='r_pinky3'/> is placed within <HAnimSegment name='r_carpal_distal_phalanx_5'/>
CTouchSensor* TouchSensor1580 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1580->setDescription("HAnimJoint r_pinky3, HAnimSegment r_carpal_distal_phalanx_5");
HAnimSegment1579->addChildren(*TouchSensor1580);

CTransform* Transform1581 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1581->setTranslation(new float[3]{-0.1948,0.7277,-0.1017});
CShape* Shape1582 = (CShape *)(m_pScene.createNode("Shape"));
Shape1582->setUSE("HAnimJointShape");
Transform1581->addChildren(*Shape1582);

HAnimSegment1579->addChildren(*Transform1581);

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_pinky3'/> to <HAnimSite name='r_pinky_distal_tip'/>
CShape* Shape1583 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1584 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1584->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1585 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1585->setPoint(new float[6]{-0.1948,0.7277,-0.1017,-0.1938,0.7035,-0.0949});
LineSet1584->setCoord(*Coordinate1585);

CColorRGBA* ColorRGBA1586 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1586->setUSE("HAnimSiteLineColorRGBA");
LineSet1584->setColor(*ColorRGBA1586);

Shape1583->setGeometry(LineSet1584);

HAnimSegment1579->addChildren(*Shape1583);

CHAnimSite* HAnimSite1587 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1587->setName("r_carpal_distal_phalanx_5_pt");
HAnimSite1587->setDEF("hanim_r_carpal_distal_phalanx_5_pt");
HAnimSite1587->setTranslation(new float[3]{-0.1938,0.7035,-0.0949});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1588 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1588->setDescription("HAnimSite r_pinky_distal_tip");
HAnimSite1587->addChildren(*TouchSensor1588);

CShape* Shape1589 = (CShape *)(m_pScene.createNode("Shape"));
Shape1589->setUSE("HAnimSiteShape");
HAnimSite1587->addChildren(*Shape1589);

HAnimSegment1579->addChildren(*HAnimSite1587);

HAnimJoint1578->addChildren(*HAnimSegment1579);

HAnimJoint1569->addChildren(*HAnimJoint1578);

HAnimJoint1560->addChildren(*HAnimJoint1569);

HAnimJoint1551->addChildren(*HAnimJoint1560);

HAnimJoint1339->addChildren(*HAnimJoint1551);

HAnimJoint1302->addChildren(*HAnimJoint1339);

HAnimJoint1286->addChildren(*HAnimJoint1302);

HAnimJoint1277->addChildren(*HAnimJoint1286);

HAnimJoint1240->addChildren(*HAnimJoint1277);

HAnimJoint602->addChildren(*HAnimJoint1240);

HAnimJoint593->addChildren(*HAnimJoint602);

HAnimJoint584->addChildren(*HAnimJoint593);

HAnimJoint575->addChildren(*HAnimJoint584);

HAnimJoint566->addChildren(*HAnimJoint575);

HAnimJoint557->addChildren(*HAnimJoint566);

HAnimJoint548->addChildren(*HAnimJoint557);

HAnimJoint539->addChildren(*HAnimJoint548);

HAnimJoint516->addChildren(*HAnimJoint539);

HAnimJoint500->addChildren(*HAnimJoint516);

HAnimJoint491->addChildren(*HAnimJoint500);

HAnimJoint482->addChildren(*HAnimJoint491);

HAnimJoint473->addChildren(*HAnimJoint482);

HAnimJoint443->addChildren(*HAnimJoint473);

HAnimJoint434->addChildren(*HAnimJoint443);

HAnimJoint425->addChildren(*HAnimJoint434);

HAnimJoint402->addChildren(*HAnimJoint425);

HAnimJoint52->addChildren(*HAnimJoint402);

HAnimHumanoid43->setSkeleton(*HAnimJoint52);

CHAnimSite* HAnimSite1590 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1590->setName("l_inclined_view");
HAnimSite1590->setDEF("hanim_l_inclined_view");
HAnimSite1590->setRotation(new float[4]{-0.113,0.993,0.0347,0.671});
HAnimSite1590->setTranslation(new float[3]{1.62,1.05,2.06});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1591 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1591->setDescription("HAnimSite l_inclined_view");
HAnimSite1590->addChildren(*TouchSensor1591);

CShape* Shape1592 = (CShape *)(m_pScene.createNode("Shape"));
Shape1592->setUSE("HAnimSiteShape");
HAnimSite1590->addChildren(*Shape1592);

CViewpoint* Viewpoint1593 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1593->setDEF("hanim_l_inclined_viewpoint");
Viewpoint1593->setDescription("left inclined");
Viewpoint1593->setPosition(new float[3]{0,0,0});
HAnimSite1590->addChildren(*Viewpoint1593);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1594 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1594->setDescription("HAnimSite hanim_l_inclined_view Viewpoint");
Anchor1594->setUrl(new CString[1]{"#hanim_l_inclined_viewpoint"}, 1);
CLOD* LOD1595 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1595->setForceTransitions(True);
LOD1595->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo1596 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1596->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1595->addChildren(*WorldInfo1596);

CShape* Shape1597 = (CShape *)(m_pScene.createNode("Shape"));
Shape1597->setUSE("HAnimSiteViewpointShape");
LOD1595->addChildren(*Shape1597);

Anchor1594->addChildren(*LOD1595);

HAnimSite1590->addChildren(*Anchor1594);

HAnimHumanoid43->addViewpoints(*HAnimSite1590);

CHAnimSite* HAnimSite1598 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1598->setName("r_inclined_view");
HAnimSite1598->setDEF("hanim_r_inclined_view");
HAnimSite1598->setRotation(new float[4]{-0.113,-0.993,0.0347,0.671});
HAnimSite1598->setTranslation(new float[3]{-1.62,1.05,2.06});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1599 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1599->setDescription("HAnimSite r_inclined_view");
HAnimSite1598->addChildren(*TouchSensor1599);

CShape* Shape1600 = (CShape *)(m_pScene.createNode("Shape"));
Shape1600->setUSE("HAnimSiteShape");
HAnimSite1598->addChildren(*Shape1600);

CViewpoint* Viewpoint1601 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1601->setDEF("hanim_r_inclined_viewpoint");
Viewpoint1601->setCenterOfRotation(new float[3]{0,0.9,0});
Viewpoint1601->setDescription("right inclined");
Viewpoint1601->setPosition(new float[3]{0,0,0});
HAnimSite1598->addChildren(*Viewpoint1601);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1602 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1602->setDescription("HAnimSite hanim_r_inclined_view Viewpoint");
Anchor1602->setUrl(new CString[1]{"#hanim_r_inclined_viewpoint"}, 1);
CLOD* LOD1603 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1603->setForceTransitions(True);
LOD1603->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo1604 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1604->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1603->addChildren(*WorldInfo1604);

CShape* Shape1605 = (CShape *)(m_pScene.createNode("Shape"));
Shape1605->setUSE("HAnimSiteViewpointShape");
LOD1603->addChildren(*Shape1605);

Anchor1602->addChildren(*LOD1603);

HAnimSite1598->addChildren(*Anchor1602);

HAnimHumanoid43->addViewpoints(*HAnimSite1598);

CHAnimSite* HAnimSite1606 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1606->setName("front_view");
HAnimSite1606->setDEF("hanim_front_view");
HAnimSite1606->setTranslation(new float[3]{0,0.85,2.58});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1607 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1607->setDescription("HAnimSite front_view");
HAnimSite1606->addChildren(*TouchSensor1607);

CShape* Shape1608 = (CShape *)(m_pScene.createNode("Shape"));
Shape1608->setUSE("HAnimSiteShape");
HAnimSite1606->addChildren(*Shape1608);

CViewpoint* Viewpoint1609 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1609->setDEF("hanim_front_viewpoint");
Viewpoint1609->setCenterOfRotation(new float[3]{0,0.9,0});
Viewpoint1609->setDescription("front");
Viewpoint1609->setPosition(new float[3]{0,0,0});
HAnimSite1606->addChildren(*Viewpoint1609);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1610 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1610->setDescription("HAnimSite hanim_front_view Viewpoint");
Anchor1610->setUrl(new CString[1]{"#hanim_front_viewpoint"}, 1);
CLOD* LOD1611 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1611->setForceTransitions(True);
LOD1611->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo1612 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1612->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1611->addChildren(*WorldInfo1612);

CShape* Shape1613 = (CShape *)(m_pScene.createNode("Shape"));
Shape1613->setUSE("HAnimSiteViewpointShape");
LOD1611->addChildren(*Shape1613);

Anchor1610->addChildren(*LOD1611);

HAnimSite1606->addChildren(*Anchor1610);

HAnimHumanoid43->addViewpoints(*HAnimSite1606);

CHAnimSite* HAnimSite1614 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1614->setName("back_view");
HAnimSite1614->setDEF("hanim_back_view");
HAnimSite1614->setRotation(new float[4]{0,1,0,3.14});
HAnimSite1614->setTranslation(new float[3]{0,0.85,-2.58});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1615 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1615->setDescription("HAnimSite back_view");
HAnimSite1614->addChildren(*TouchSensor1615);

CShape* Shape1616 = (CShape *)(m_pScene.createNode("Shape"));
Shape1616->setUSE("HAnimSiteShape");
HAnimSite1614->addChildren(*Shape1616);

CViewpoint* Viewpoint1617 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1617->setDEF("hanim_back_viewpoint");
Viewpoint1617->setCenterOfRotation(new float[3]{0,0.9,0});
Viewpoint1617->setDescription("back");
Viewpoint1617->setPosition(new float[3]{0,0,0});
HAnimSite1614->addChildren(*Viewpoint1617);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1618 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1618->setDescription("HAnimSite hanim_back_view Viewpoint");
Anchor1618->setUrl(new CString[1]{"#hanim_back_viewpoint"}, 1);
CLOD* LOD1619 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1619->setForceTransitions(True);
LOD1619->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo1620 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1620->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1619->addChildren(*WorldInfo1620);

CShape* Shape1621 = (CShape *)(m_pScene.createNode("Shape"));
Shape1621->setUSE("HAnimSiteViewpointShape");
LOD1619->addChildren(*Shape1621);

Anchor1618->addChildren(*LOD1619);

HAnimSite1614->addChildren(*Anchor1618);

HAnimHumanoid43->addViewpoints(*HAnimSite1614);

CHAnimSite* HAnimSite1622 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1622->setName("l_side_view");
HAnimSite1622->setDEF("hanim_l_side_view");
HAnimSite1622->setRotation(new float[4]{0,1,0,1.5708});
HAnimSite1622->setTranslation(new float[3]{2.6,0.854,0});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1623 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1623->setDescription("HAnimSite l_side_view");
HAnimSite1622->addChildren(*TouchSensor1623);

CShape* Shape1624 = (CShape *)(m_pScene.createNode("Shape"));
Shape1624->setUSE("HAnimSiteShape");
HAnimSite1622->addChildren(*Shape1624);

CViewpoint* Viewpoint1625 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1625->setDEF("hanim_l_side_viewpoint");
Viewpoint1625->setCenterOfRotation(new float[3]{0,0.9,0});
Viewpoint1625->setDescription("left side");
Viewpoint1625->setPosition(new float[3]{0,0,0});
HAnimSite1622->addChildren(*Viewpoint1625);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1626 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1626->setDescription("HAnimSite hanim_l_side_view Viewpoint");
Anchor1626->setUrl(new CString[1]{"#hanim_l_side_viewpoint"}, 1);
CLOD* LOD1627 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1627->setForceTransitions(True);
LOD1627->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo1628 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1628->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1627->addChildren(*WorldInfo1628);

CShape* Shape1629 = (CShape *)(m_pScene.createNode("Shape"));
Shape1629->setUSE("HAnimSiteViewpointShape");
LOD1627->addChildren(*Shape1629);

Anchor1626->addChildren(*LOD1627);

HAnimSite1622->addChildren(*Anchor1626);

HAnimHumanoid43->addViewpoints(*HAnimSite1622);

CHAnimSite* HAnimSite1630 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1630->setName("Top_view");
HAnimSite1630->setDEF("hanim_Top_view");
HAnimSite1630->setRotation(new float[4]{1,0,0,-1.57});
HAnimSite1630->setTranslation(new float[3]{0,3.5,0});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1631 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1631->setDescription("HAnimSite Top_view");
HAnimSite1630->addChildren(*TouchSensor1631);

CShape* Shape1632 = (CShape *)(m_pScene.createNode("Shape"));
Shape1632->setUSE("HAnimSiteShape");
HAnimSite1630->addChildren(*Shape1632);

CViewpoint* Viewpoint1633 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1633->setDEF("hanim_Top_viewpoint");
Viewpoint1633->setCenterOfRotation(new float[3]{0,0.9,0});
Viewpoint1633->setDescription("Top");
Viewpoint1633->setPosition(new float[3]{0,0,0});
HAnimSite1630->addChildren(*Viewpoint1633);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1634 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1634->setDescription("HAnimSite hanim_Top_view Viewpoint");
Anchor1634->setUrl(new CString[1]{"#hanim_Top_viewpoint"}, 1);
CLOD* LOD1635 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1635->setForceTransitions(True);
LOD1635->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo1636 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1636->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1635->addChildren(*WorldInfo1636);

CShape* Shape1637 = (CShape *)(m_pScene.createNode("Shape"));
Shape1637->setUSE("HAnimSiteViewpointShape");
LOD1635->addChildren(*Shape1637);

Anchor1634->addChildren(*LOD1635);

HAnimSite1630->addChildren(*Anchor1634);

HAnimHumanoid43->addViewpoints(*HAnimSite1630);

CHAnimSite* HAnimSite1638 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1638->setName("front_close_view");
HAnimSite1638->setDEF("hanim_front_close_view");
HAnimSite1638->setTranslation(new float[3]{0,0.854,1.575});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1639 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1639->setDescription("HAnimSite front_close_view");
HAnimSite1638->addChildren(*TouchSensor1639);

CShape* Shape1640 = (CShape *)(m_pScene.createNode("Shape"));
Shape1640->setUSE("HAnimSiteShape");
HAnimSite1638->addChildren(*Shape1640);

CViewpoint* Viewpoint1641 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1641->setDEF("hanim_front_close_viewpoint");
Viewpoint1641->setCenterOfRotation(new float[3]{0,0,1.575});
Viewpoint1641->setDescription("front close");
Viewpoint1641->setPosition(new float[3]{0,0,0});
HAnimSite1638->addChildren(*Viewpoint1641);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1642 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1642->setDescription("HAnimSite hanim_front_close_view Viewpoint");
Anchor1642->setUrl(new CString[1]{"#hanim_front_close_viewpoint"}, 1);
CLOD* LOD1643 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1643->setForceTransitions(True);
LOD1643->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo1644 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1644->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1643->addChildren(*WorldInfo1644);

CShape* Shape1645 = (CShape *)(m_pScene.createNode("Shape"));
Shape1645->setUSE("HAnimSiteViewpointShape");
LOD1643->addChildren(*Shape1645);

Anchor1642->addChildren(*LOD1643);

HAnimSite1638->addChildren(*Anchor1642);

HAnimHumanoid43->addViewpoints(*HAnimSite1638);

CHAnimSite* HAnimSite1646 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1646->setName("side_close_view");
HAnimSite1646->setDEF("hanim_side_close_view");
HAnimSite1646->setRotation(new float[4]{0,1,0,1.5708});
HAnimSite1646->setTranslation(new float[3]{1.56,0.854,0});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1647 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1647->setDescription("HAnimSite side_close_view");
HAnimSite1646->addChildren(*TouchSensor1647);

CShape* Shape1648 = (CShape *)(m_pScene.createNode("Shape"));
Shape1648->setUSE("HAnimSiteShape");
HAnimSite1646->addChildren(*Shape1648);

CViewpoint* Viewpoint1649 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1649->setDEF("hanim_side_close_viewpoint");
Viewpoint1649->setCenterOfRotation(new float[3]{1.6,0,0});
Viewpoint1649->setDescription("side close");
Viewpoint1649->setPosition(new float[3]{0,0,0});
HAnimSite1646->addChildren(*Viewpoint1649);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1650 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1650->setDescription("HAnimSite hanim_side_close_view Viewpoint");
Anchor1650->setUrl(new CString[1]{"#hanim_side_close_viewpoint"}, 1);
CLOD* LOD1651 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1651->setForceTransitions(True);
LOD1651->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo1652 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1652->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1651->addChildren(*WorldInfo1652);

CShape* Shape1653 = (CShape *)(m_pScene.createNode("Shape"));
Shape1653->setUSE("HAnimSiteViewpointShape");
LOD1651->addChildren(*Shape1653);

Anchor1650->addChildren(*LOD1651);

HAnimSite1646->addChildren(*Anchor1650);

HAnimHumanoid43->addViewpoints(*HAnimSite1646);

CHAnimSite* HAnimSite1654 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1654->setName("head_front_close_view");
HAnimSite1654->setDEF("hanim_head_front_close_view");
HAnimSite1654->setTranslation(new float[3]{0,1.5,1});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1655 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1655->setDescription("HAnimSite head_front_close_view");
HAnimSite1654->addChildren(*TouchSensor1655);

CShape* Shape1656 = (CShape *)(m_pScene.createNode("Shape"));
Shape1656->setUSE("HAnimSiteShape");
HAnimSite1654->addChildren(*Shape1656);

CViewpoint* Viewpoint1657 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1657->setDEF("hanim_head_front_close_viewpoint");
Viewpoint1657->setCenterOfRotation(new float[3]{0,0,1});
Viewpoint1657->setDescription("head front close");
Viewpoint1657->setPosition(new float[3]{0,0,0});
HAnimSite1654->addChildren(*Viewpoint1657);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1658 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1658->setDescription("HAnimSite hanim_head_front_close_view Viewpoint");
Anchor1658->setUrl(new CString[1]{"#hanim_head_front_close_viewpoint"}, 1);
CLOD* LOD1659 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1659->setForceTransitions(True);
LOD1659->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo1660 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1660->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1659->addChildren(*WorldInfo1660);

CShape* Shape1661 = (CShape *)(m_pScene.createNode("Shape"));
Shape1661->setUSE("HAnimSiteViewpointShape");
LOD1659->addChildren(*Shape1661);

Anchor1658->addChildren(*LOD1659);

HAnimSite1654->addChildren(*Anchor1658);

HAnimHumanoid43->addViewpoints(*HAnimSite1654);

CHAnimSite* HAnimSite1662 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1662->setName("chest_front_close_view");
HAnimSite1662->setDEF("hanim_chest_front_close_view");
HAnimSite1662->setTranslation(new float[3]{0,1.2,1});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1663 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1663->setDescription("HAnimSite chest_front_close_view");
HAnimSite1662->addChildren(*TouchSensor1663);

CShape* Shape1664 = (CShape *)(m_pScene.createNode("Shape"));
Shape1664->setUSE("HAnimSiteShape");
HAnimSite1662->addChildren(*Shape1664);

CViewpoint* Viewpoint1665 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1665->setDEF("hanim_chest_front_close_viewpoint");
Viewpoint1665->setCenterOfRotation(new float[3]{0,0,1});
Viewpoint1665->setDescription("chest front close");
Viewpoint1665->setPosition(new float[3]{0,0,0});
HAnimSite1662->addChildren(*Viewpoint1665);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1666 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1666->setDescription("HAnimSite hanim_chest_front_close_view Viewpoint");
Anchor1666->setUrl(new CString[1]{"#hanim_chest_front_close_viewpoint"}, 1);
CLOD* LOD1667 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1667->setForceTransitions(True);
LOD1667->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo1668 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1668->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1667->addChildren(*WorldInfo1668);

CShape* Shape1669 = (CShape *)(m_pScene.createNode("Shape"));
Shape1669->setUSE("HAnimSiteViewpointShape");
LOD1667->addChildren(*Shape1669);

Anchor1666->addChildren(*LOD1667);

HAnimSite1662->addChildren(*Anchor1666);

HAnimHumanoid43->addViewpoints(*HAnimSite1662);

CHAnimSite* HAnimSite1670 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1670->setName("pelvis_front_close_view");
HAnimSite1670->setDEF("hanim_pelvis_front_close_view");
HAnimSite1670->setTranslation(new float[3]{0,0.8,1});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1671 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1671->setDescription("HAnimSite pelvis_front_close_view");
HAnimSite1670->addChildren(*TouchSensor1671);

CShape* Shape1672 = (CShape *)(m_pScene.createNode("Shape"));
Shape1672->setUSE("HAnimSiteShape");
HAnimSite1670->addChildren(*Shape1672);

CViewpoint* Viewpoint1673 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1673->setDEF("hanim_pelvis_front_close_viewpoint");
Viewpoint1673->setCenterOfRotation(new float[3]{0,0,1});
Viewpoint1673->setDescription("pelvis front close");
Viewpoint1673->setPosition(new float[3]{0,0,0});
HAnimSite1670->addChildren(*Viewpoint1673);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1674 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1674->setDescription("HAnimSite hanim_pelvis_front_close_view Viewpoint");
Anchor1674->setUrl(new CString[1]{"#hanim_pelvis_front_close_viewpoint"}, 1);
CLOD* LOD1675 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1675->setForceTransitions(True);
LOD1675->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo1676 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1676->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1675->addChildren(*WorldInfo1676);

CShape* Shape1677 = (CShape *)(m_pScene.createNode("Shape"));
Shape1677->setUSE("HAnimSiteViewpointShape");
LOD1675->addChildren(*Shape1677);

Anchor1674->addChildren(*LOD1675);

HAnimSite1670->addChildren(*Anchor1674);

HAnimHumanoid43->addViewpoints(*HAnimSite1670);

CHAnimSite* HAnimSite1678 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1678->setName("knees_front_close_view");
HAnimSite1678->setDEF("hanim_knees_front_close_view");
HAnimSite1678->setTranslation(new float[3]{0,0.4,1});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1679 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1679->setDescription("HAnimSite knees_front_close_view");
HAnimSite1678->addChildren(*TouchSensor1679);

CShape* Shape1680 = (CShape *)(m_pScene.createNode("Shape"));
Shape1680->setUSE("HAnimSiteShape");
HAnimSite1678->addChildren(*Shape1680);

CViewpoint* Viewpoint1681 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1681->setDEF("hanim_knees_front_close_viewpoint");
Viewpoint1681->setCenterOfRotation(new float[3]{0,0.4,0});
Viewpoint1681->setDescription("knees front close");
Viewpoint1681->setPosition(new float[3]{0,0,0});
HAnimSite1678->addChildren(*Viewpoint1681);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1682 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1682->setDescription("HAnimSite hanim_knees_front_close_view Viewpoint");
Anchor1682->setUrl(new CString[1]{"#hanim_knees_front_close_viewpoint"}, 1);
CLOD* LOD1683 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1683->setForceTransitions(True);
LOD1683->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo1684 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1684->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1683->addChildren(*WorldInfo1684);

CShape* Shape1685 = (CShape *)(m_pScene.createNode("Shape"));
Shape1685->setUSE("HAnimSiteViewpointShape");
LOD1683->addChildren(*Shape1685);

Anchor1682->addChildren(*LOD1683);

HAnimSite1678->addChildren(*Anchor1682);

HAnimHumanoid43->addViewpoints(*HAnimSite1678);

CHAnimSite* HAnimSite1686 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1686->setName("feet_front_close_view");
HAnimSite1686->setDEF("hanim_feet_front_close_view");
HAnimSite1686->setTranslation(new float[3]{0,0,1});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1687 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1687->setDescription("HAnimSite feet_front_close_view");
HAnimSite1686->addChildren(*TouchSensor1687);

CShape* Shape1688 = (CShape *)(m_pScene.createNode("Shape"));
Shape1688->setUSE("HAnimSiteShape");
HAnimSite1686->addChildren(*Shape1688);

CViewpoint* Viewpoint1689 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1689->setDEF("hanim_feet_front_close_viewpoint");
Viewpoint1689->setDescription("feet front close");
Viewpoint1689->setPosition(new float[3]{0,0,0});
HAnimSite1686->addChildren(*Viewpoint1689);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1690 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1690->setDescription("HAnimSite hanim_feet_front_close_view Viewpoint");
Anchor1690->setUrl(new CString[1]{"#hanim_feet_front_close_viewpoint"}, 1);
CLOD* LOD1691 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1691->setForceTransitions(True);
LOD1691->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo1692 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1692->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1691->addChildren(*WorldInfo1692);

CShape* Shape1693 = (CShape *)(m_pScene.createNode("Shape"));
Shape1693->setUSE("HAnimSiteViewpointShape");
LOD1691->addChildren(*Shape1693);

Anchor1690->addChildren(*LOD1691);

HAnimSite1686->addChildren(*Anchor1690);

HAnimHumanoid43->addViewpoints(*HAnimSite1686);

CHAnimSite* HAnimSite1694 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1694->setName("eye_level_view");
HAnimSite1694->setDEF("hanim_eye_level_view");
HAnimSite1694->setTranslation(new float[3]{0,1.6332,0.0502});
//HAnimSite visualization shape
CTouchSensor* TouchSensor1695 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1695->setDescription("HAnimSite eye_level_view");
HAnimSite1694->addChildren(*TouchSensor1695);

CShape* Shape1696 = (CShape *)(m_pScene.createNode("Shape"));
Shape1696->setUSE("HAnimSiteShape");
HAnimSite1694->addChildren(*Shape1696);

CViewpoint* Viewpoint1697 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1697->setDEF("hanim_eye_level_viewpoint");
Viewpoint1697->setDescription("eye level looking forward");
Viewpoint1697->setOrientation(new float[4]{0,1,0,3.141593});
Viewpoint1697->setPosition(new float[3]{0,0,0});
HAnimSite1694->addChildren(*Viewpoint1697);

//HAnimSite/Viewpoint visualization shape
CAnchor* Anchor1698 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor1698->setDescription("HAnimSite hanim_eye_level_view Viewpoint");
Anchor1698->setUrl(new CString[1]{"#hanim_eye_level_viewpoint"}, 1);
CLOD* LOD1699 = (CLOD *)(m_pScene.createNode("LOD"));
LOD1699->setForceTransitions(True);
LOD1699->setRange(new float[1]{0.04}, 1);
CWorldInfo* WorldInfo1700 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo1700->setInfo(new CString[1]{"hide diamond when close"}, 1);
LOD1699->addChildren(*WorldInfo1700);

CShape* Shape1701 = (CShape *)(m_pScene.createNode("Shape"));
Shape1701->setUSE("HAnimSiteViewpointShape");
LOD1699->addChildren(*Shape1701);

Anchor1698->addChildren(*LOD1699);

HAnimSite1694->addChildren(*Anchor1698);

HAnimHumanoid43->addViewpoints(*HAnimSite1694);

CHAnimSite* HAnimSite1702 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1702->setUSE("hanim_l_eyeball_site_view");
HAnimHumanoid43->setSites(*HAnimSite1702);

CHAnimSite* HAnimSite1703 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1703->setUSE("hanim_r_eyeball_site_view");
HAnimHumanoid43->setSites(*HAnimSite1703);

CHAnimSite* HAnimSite1704 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1704->setUSE("hanim_l_hand_front_view");
HAnimHumanoid43->setSites(*HAnimSite1704);

CHAnimSite* HAnimSite1705 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1705->setUSE("hanim_r_hand_front_view");
HAnimHumanoid43->setSites(*HAnimSite1705);

CHAnimJoint* HAnimJoint1706 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1706->setUSE("hanim_humanoid_root");
HAnimHumanoid43->addJoints(*HAnimJoint1706);

CHAnimJoint* HAnimJoint1707 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1707->setUSE("hanim_sacroiliac");
HAnimHumanoid43->addJoints(*HAnimJoint1707);

CHAnimJoint* HAnimJoint1708 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1708->setUSE("hanim_vl5");
HAnimHumanoid43->addJoints(*HAnimJoint1708);

CHAnimJoint* HAnimJoint1709 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1709->setUSE("hanim_vl4");
HAnimHumanoid43->addJoints(*HAnimJoint1709);

CHAnimJoint* HAnimJoint1710 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1710->setUSE("hanim_vl3");
HAnimHumanoid43->addJoints(*HAnimJoint1710);

CHAnimJoint* HAnimJoint1711 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1711->setUSE("hanim_vl2");
HAnimHumanoid43->addJoints(*HAnimJoint1711);

CHAnimJoint* HAnimJoint1712 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1712->setUSE("hanim_vl1");
HAnimHumanoid43->addJoints(*HAnimJoint1712);

CHAnimJoint* HAnimJoint1713 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1713->setUSE("hanim_vt12");
HAnimHumanoid43->addJoints(*HAnimJoint1713);

CHAnimJoint* HAnimJoint1714 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1714->setUSE("hanim_vt11");
HAnimHumanoid43->addJoints(*HAnimJoint1714);

CHAnimJoint* HAnimJoint1715 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1715->setUSE("hanim_vt10");
HAnimHumanoid43->addJoints(*HAnimJoint1715);

CHAnimJoint* HAnimJoint1716 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1716->setUSE("hanim_vt9");
HAnimHumanoid43->addJoints(*HAnimJoint1716);

CHAnimJoint* HAnimJoint1717 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1717->setUSE("hanim_vt8");
HAnimHumanoid43->addJoints(*HAnimJoint1717);

CHAnimJoint* HAnimJoint1718 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1718->setUSE("hanim_vt7");
HAnimHumanoid43->addJoints(*HAnimJoint1718);

CHAnimJoint* HAnimJoint1719 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1719->setUSE("hanim_vt6");
HAnimHumanoid43->addJoints(*HAnimJoint1719);

CHAnimJoint* HAnimJoint1720 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1720->setUSE("hanim_vt5");
HAnimHumanoid43->addJoints(*HAnimJoint1720);

CHAnimJoint* HAnimJoint1721 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1721->setUSE("hanim_vt4");
HAnimHumanoid43->addJoints(*HAnimJoint1721);

CHAnimJoint* HAnimJoint1722 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1722->setUSE("hanim_vt3");
HAnimHumanoid43->addJoints(*HAnimJoint1722);

CHAnimJoint* HAnimJoint1723 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1723->setUSE("hanim_vt2");
HAnimHumanoid43->addJoints(*HAnimJoint1723);

CHAnimJoint* HAnimJoint1724 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1724->setUSE("hanim_vt1");
HAnimHumanoid43->addJoints(*HAnimJoint1724);

CHAnimJoint* HAnimJoint1725 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1725->setUSE("hanim_vc7");
HAnimHumanoid43->addJoints(*HAnimJoint1725);

CHAnimJoint* HAnimJoint1726 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1726->setUSE("hanim_vc6");
HAnimHumanoid43->addJoints(*HAnimJoint1726);

CHAnimJoint* HAnimJoint1727 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1727->setUSE("hanim_vc5");
HAnimHumanoid43->addJoints(*HAnimJoint1727);

CHAnimJoint* HAnimJoint1728 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1728->setUSE("hanim_vc4");
HAnimHumanoid43->addJoints(*HAnimJoint1728);

CHAnimJoint* HAnimJoint1729 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1729->setUSE("hanim_vc3");
HAnimHumanoid43->addJoints(*HAnimJoint1729);

CHAnimJoint* HAnimJoint1730 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1730->setUSE("hanim_vc2");
HAnimHumanoid43->addJoints(*HAnimJoint1730);

CHAnimJoint* HAnimJoint1731 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1731->setUSE("hanim_vc1");
HAnimHumanoid43->addJoints(*HAnimJoint1731);

CHAnimJoint* HAnimJoint1732 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1732->setUSE("hanim_skullbase");
HAnimHumanoid43->addJoints(*HAnimJoint1732);

CHAnimJoint* HAnimJoint1733 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1733->setUSE("hanim_temporomandibular");
HAnimHumanoid43->addJoints(*HAnimJoint1733);

CHAnimJoint* HAnimJoint1734 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1734->setUSE("hanim_l_acromioclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1734);

CHAnimJoint* HAnimJoint1735 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1735->setUSE("hanim_r_acromioclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1735);

CHAnimJoint* HAnimJoint1736 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1736->setUSE("hanim_l_carpal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1736);

CHAnimJoint* HAnimJoint1737 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1737->setUSE("hanim_r_carpal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1737);

CHAnimJoint* HAnimJoint1738 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1738->setUSE("hanim_l_carpal_distal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1738);

CHAnimJoint* HAnimJoint1739 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1739->setUSE("hanim_r_carpal_distal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1739);

CHAnimJoint* HAnimJoint1740 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1740->setUSE("hanim_l_carpal_distal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1740);

CHAnimJoint* HAnimJoint1741 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1741->setUSE("hanim_r_carpal_distal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1741);

CHAnimJoint* HAnimJoint1742 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1742->setUSE("hanim_l_carpal_distal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1742);

CHAnimJoint* HAnimJoint1743 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1743->setUSE("hanim_r_carpal_distal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1743);

CHAnimJoint* HAnimJoint1744 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1744->setUSE("hanim_l_carpal_interphalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1744);

CHAnimJoint* HAnimJoint1745 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1745->setUSE("hanim_r_carpal_interphalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1745);

CHAnimJoint* HAnimJoint1746 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1746->setUSE("hanim_l_carpal_proximal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1746);

CHAnimJoint* HAnimJoint1747 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1747->setUSE("hanim_r_carpal_proximal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1747);

CHAnimJoint* HAnimJoint1748 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1748->setUSE("hanim_l_carpal_proximal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1748);

CHAnimJoint* HAnimJoint1749 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1749->setUSE("hanim_r_carpal_proximal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1749);

CHAnimJoint* HAnimJoint1750 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1750->setUSE("hanim_l_carpal_proximal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1750);

CHAnimJoint* HAnimJoint1751 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1751->setUSE("hanim_r_carpal_proximal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1751);

CHAnimJoint* HAnimJoint1752 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1752->setUSE("hanim_l_carpal_proximal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1752);

CHAnimJoint* HAnimJoint1753 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1753->setUSE("hanim_r_carpal_proximal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1753);

CHAnimJoint* HAnimJoint1754 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1754->setUSE("hanim_l_carpometacarpal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1754);

CHAnimJoint* HAnimJoint1755 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1755->setUSE("hanim_r_carpometacarpal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1755);

CHAnimJoint* HAnimJoint1756 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1756->setUSE("hanim_l_carpometacarpal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1756);

CHAnimJoint* HAnimJoint1757 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1757->setUSE("hanim_r_carpometacarpal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1757);

CHAnimJoint* HAnimJoint1758 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1758->setUSE("hanim_l_carpometacarpal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1758);

CHAnimJoint* HAnimJoint1759 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1759->setUSE("hanim_r_carpometacarpal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1759);

CHAnimJoint* HAnimJoint1760 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1760->setUSE("hanim_l_carpometacarpal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1760);

CHAnimJoint* HAnimJoint1761 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1761->setUSE("hanim_r_carpometacarpal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1761);

CHAnimJoint* HAnimJoint1762 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1762->setUSE("hanim_l_carpometacarpal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1762);

CHAnimJoint* HAnimJoint1763 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1763->setUSE("hanim_r_carpometacarpal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1763);

CHAnimJoint* HAnimJoint1764 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1764->setUSE("hanim_l_elbow");
HAnimHumanoid43->addJoints(*HAnimJoint1764);

CHAnimJoint* HAnimJoint1765 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1765->setUSE("hanim_r_elbow");
HAnimHumanoid43->addJoints(*HAnimJoint1765);

CHAnimJoint* HAnimJoint1766 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1766->setUSE("hanim_l_eyeball_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1766);

CHAnimJoint* HAnimJoint1767 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1767->setUSE("hanim_r_eyeball_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1767);

CHAnimJoint* HAnimJoint1768 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1768->setUSE("hanim_l_eyebrow_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1768);

CHAnimJoint* HAnimJoint1769 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1769->setUSE("hanim_r_eyebrow_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1769);

CHAnimJoint* HAnimJoint1770 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1770->setUSE("hanim_l_eyelid_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1770);

CHAnimJoint* HAnimJoint1771 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1771->setUSE("hanim_r_eyelid_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1771);

CHAnimJoint* HAnimJoint1772 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1772->setUSE("hanim_l_hip");
HAnimHumanoid43->addJoints(*HAnimJoint1772);

CHAnimJoint* HAnimJoint1773 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1773->setUSE("hanim_r_hip");
HAnimHumanoid43->addJoints(*HAnimJoint1773);

CHAnimJoint* HAnimJoint1774 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1774->setUSE("hanim_l_knee");
HAnimHumanoid43->addJoints(*HAnimJoint1774);

CHAnimJoint* HAnimJoint1775 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1775->setUSE("hanim_r_knee");
HAnimHumanoid43->addJoints(*HAnimJoint1775);

CHAnimJoint* HAnimJoint1776 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1776->setUSE("hanim_l_metacarpophalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1776);

CHAnimJoint* HAnimJoint1777 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1777->setUSE("hanim_r_metacarpophalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1777);

CHAnimJoint* HAnimJoint1778 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1778->setUSE("hanim_l_metacarpophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1778);

CHAnimJoint* HAnimJoint1779 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1779->setUSE("hanim_r_metacarpophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1779);

CHAnimJoint* HAnimJoint1780 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1780->setUSE("hanim_l_metacarpophalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1780);

CHAnimJoint* HAnimJoint1781 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1781->setUSE("hanim_r_metacarpophalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1781);

CHAnimJoint* HAnimJoint1782 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1782->setUSE("hanim_l_metacarpophalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1782);

CHAnimJoint* HAnimJoint1783 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1783->setUSE("hanim_r_metacarpophalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1783);

CHAnimJoint* HAnimJoint1784 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1784->setUSE("hanim_l_metacarpophalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1784);

CHAnimJoint* HAnimJoint1785 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1785->setUSE("hanim_r_metacarpophalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1785);

CHAnimJoint* HAnimJoint1786 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1786->setUSE("hanim_l_metatarsophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1786);

CHAnimJoint* HAnimJoint1787 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1787->setUSE("hanim_r_metatarsophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1787);

CHAnimJoint* HAnimJoint1788 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1788->setUSE("hanim_l_radiocarpal");
HAnimHumanoid43->addJoints(*HAnimJoint1788);

CHAnimJoint* HAnimJoint1789 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1789->setUSE("hanim_r_radiocarpal");
HAnimHumanoid43->addJoints(*HAnimJoint1789);

CHAnimJoint* HAnimJoint1790 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1790->setUSE("hanim_l_shoulder");
HAnimHumanoid43->addJoints(*HAnimJoint1790);

CHAnimJoint* HAnimJoint1791 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1791->setUSE("hanim_r_shoulder");
HAnimHumanoid43->addJoints(*HAnimJoint1791);

CHAnimJoint* HAnimJoint1792 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1792->setUSE("hanim_l_sternoclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1792);

CHAnimJoint* HAnimJoint1793 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1793->setUSE("hanim_r_sternoclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1793);

CHAnimJoint* HAnimJoint1794 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1794->setUSE("hanim_l_talocrural");
HAnimHumanoid43->addJoints(*HAnimJoint1794);

CHAnimJoint* HAnimJoint1795 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1795->setUSE("hanim_r_talocrural");
HAnimHumanoid43->addJoints(*HAnimJoint1795);

CHAnimJoint* HAnimJoint1796 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1796->setUSE("hanim_l_tarsal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1796);

CHAnimJoint* HAnimJoint1797 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1797->setUSE("hanim_r_tarsal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1797);

CHAnimJoint* HAnimJoint1798 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1798->setUSE("hanim_l_tarsometatarsal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1798);

CHAnimJoint* HAnimJoint1799 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1799->setUSE("hanim_r_tarsometatarsal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1799);

CHAnimSegment* HAnimSegment1800 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1800->setUSE("hanim_pelvis");
HAnimHumanoid43->setSegments(*HAnimSegment1800);

CHAnimSegment* HAnimSegment1801 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1801->setUSE("hanim_skull");
HAnimHumanoid43->setSegments(*HAnimSegment1801);

CHAnimSegment* HAnimSegment1802 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1802->setUSE("hanim_jaw");
HAnimHumanoid43->setSegments(*HAnimSegment1802);

CHAnimSegment* HAnimSegment1803 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1803->setUSE("hanim_c1");
HAnimHumanoid43->setSegments(*HAnimSegment1803);

CHAnimSegment* HAnimSegment1804 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1804->setUSE("hanim_c2");
HAnimHumanoid43->setSegments(*HAnimSegment1804);

CHAnimSegment* HAnimSegment1805 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1805->setUSE("hanim_c3");
HAnimHumanoid43->setSegments(*HAnimSegment1805);

CHAnimSegment* HAnimSegment1806 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1806->setUSE("hanim_c4");
HAnimHumanoid43->setSegments(*HAnimSegment1806);

CHAnimSegment* HAnimSegment1807 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1807->setUSE("hanim_c5");
HAnimHumanoid43->setSegments(*HAnimSegment1807);

CHAnimSegment* HAnimSegment1808 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1808->setUSE("hanim_c6");
HAnimHumanoid43->setSegments(*HAnimSegment1808);

CHAnimSegment* HAnimSegment1809 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1809->setUSE("hanim_c7");
HAnimHumanoid43->setSegments(*HAnimSegment1809);

CHAnimSegment* HAnimSegment1810 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1810->setUSE("hanim_t1");
HAnimHumanoid43->setSegments(*HAnimSegment1810);

CHAnimSegment* HAnimSegment1811 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1811->setUSE("hanim_t2");
HAnimHumanoid43->setSegments(*HAnimSegment1811);

CHAnimSegment* HAnimSegment1812 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1812->setUSE("hanim_t3");
HAnimHumanoid43->setSegments(*HAnimSegment1812);

CHAnimSegment* HAnimSegment1813 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1813->setUSE("hanim_t4");
HAnimHumanoid43->setSegments(*HAnimSegment1813);

CHAnimSegment* HAnimSegment1814 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1814->setUSE("hanim_t5");
HAnimHumanoid43->setSegments(*HAnimSegment1814);

CHAnimSegment* HAnimSegment1815 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1815->setUSE("hanim_t6");
HAnimHumanoid43->setSegments(*HAnimSegment1815);

CHAnimSegment* HAnimSegment1816 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1816->setUSE("hanim_t7");
HAnimHumanoid43->setSegments(*HAnimSegment1816);

CHAnimSegment* HAnimSegment1817 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1817->setUSE("hanim_t8");
HAnimHumanoid43->setSegments(*HAnimSegment1817);

CHAnimSegment* HAnimSegment1818 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1818->setUSE("hanim_t9");
HAnimHumanoid43->setSegments(*HAnimSegment1818);

CHAnimSegment* HAnimSegment1819 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1819->setUSE("hanim_t10");
HAnimHumanoid43->setSegments(*HAnimSegment1819);

CHAnimSegment* HAnimSegment1820 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1820->setUSE("hanim_t11");
HAnimHumanoid43->setSegments(*HAnimSegment1820);

CHAnimSegment* HAnimSegment1821 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1821->setUSE("hanim_t12");
HAnimHumanoid43->setSegments(*HAnimSegment1821);

CHAnimSegment* HAnimSegment1822 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1822->setUSE("hanim_l1");
HAnimHumanoid43->setSegments(*HAnimSegment1822);

CHAnimSegment* HAnimSegment1823 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1823->setUSE("hanim_l2");
HAnimHumanoid43->setSegments(*HAnimSegment1823);

CHAnimSegment* HAnimSegment1824 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1824->setUSE("hanim_l3");
HAnimHumanoid43->setSegments(*HAnimSegment1824);

CHAnimSegment* HAnimSegment1825 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1825->setUSE("hanim_l4");
HAnimHumanoid43->setSegments(*HAnimSegment1825);

CHAnimSegment* HAnimSegment1826 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1826->setUSE("hanim_l5");
HAnimHumanoid43->setSegments(*HAnimSegment1826);

CHAnimSegment* HAnimSegment1827 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1827->setUSE("hanim_sacrum");
HAnimHumanoid43->setSegments(*HAnimSegment1827);

CHAnimSegment* HAnimSegment1828 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1828->setUSE("hanim_l_calf");
HAnimHumanoid43->setSegments(*HAnimSegment1828);

CHAnimSegment* HAnimSegment1829 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1829->setUSE("hanim_r_calf");
HAnimHumanoid43->setSegments(*HAnimSegment1829);

CHAnimSegment* HAnimSegment1830 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1830->setUSE("hanim_l_carpal");
HAnimHumanoid43->setSegments(*HAnimSegment1830);

CHAnimSegment* HAnimSegment1831 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1831->setUSE("hanim_r_carpal");
HAnimHumanoid43->setSegments(*HAnimSegment1831);

CHAnimSegment* HAnimSegment1832 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1832->setUSE("hanim_l_carpal_distal_phalanx_1");
HAnimHumanoid43->setSegments(*HAnimSegment1832);

CHAnimSegment* HAnimSegment1833 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1833->setUSE("hanim_r_carpal_distal_phalanx_1");
HAnimHumanoid43->setSegments(*HAnimSegment1833);

CHAnimSegment* HAnimSegment1834 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1834->setUSE("hanim_l_carpal_distal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1834);

CHAnimSegment* HAnimSegment1835 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1835->setUSE("hanim_r_carpal_distal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1835);

CHAnimSegment* HAnimSegment1836 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1836->setUSE("hanim_l_carpal_distal_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1836);

CHAnimSegment* HAnimSegment1837 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1837->setUSE("hanim_r_carpal_distal_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1837);

CHAnimSegment* HAnimSegment1838 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1838->setUSE("hanim_l_carpal_distal_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1838);

CHAnimSegment* HAnimSegment1839 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1839->setUSE("hanim_r_carpal_distal_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1839);

CHAnimSegment* HAnimSegment1840 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1840->setUSE("hanim_l_carpal_distal_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1840);

CHAnimSegment* HAnimSegment1841 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1841->setUSE("hanim_r_carpal_distal_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1841);

CHAnimSegment* HAnimSegment1842 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1842->setUSE("hanim_l_carpal_middle_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1842);

CHAnimSegment* HAnimSegment1843 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1843->setUSE("hanim_r_carpal_middle_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1843);

CHAnimSegment* HAnimSegment1844 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1844->setUSE("hanim_l_carpal_middle_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1844);

CHAnimSegment* HAnimSegment1845 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1845->setUSE("hanim_r_carpal_middle_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1845);

CHAnimSegment* HAnimSegment1846 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1846->setUSE("hanim_l_carpal_middle_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1846);

CHAnimSegment* HAnimSegment1847 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1847->setUSE("hanim_r_carpal_middle_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1847);

CHAnimSegment* HAnimSegment1848 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1848->setUSE("hanim_l_carpal_middle_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1848);

CHAnimSegment* HAnimSegment1849 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1849->setUSE("hanim_r_carpal_middle_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1849);

CHAnimSegment* HAnimSegment1850 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1850->setUSE("hanim_l_carpal_proximal_phalanx_1");
HAnimHumanoid43->setSegments(*HAnimSegment1850);

CHAnimSegment* HAnimSegment1851 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1851->setUSE("hanim_r_carpal_proximal_phalanx_1");
HAnimHumanoid43->setSegments(*HAnimSegment1851);

CHAnimSegment* HAnimSegment1852 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1852->setUSE("hanim_l_carpal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1852);

CHAnimSegment* HAnimSegment1853 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1853->setUSE("hanim_r_carpal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1853);

CHAnimSegment* HAnimSegment1854 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1854->setUSE("hanim_l_carpal_proximal_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1854);

CHAnimSegment* HAnimSegment1855 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1855->setUSE("hanim_r_carpal_proximal_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1855);

CHAnimSegment* HAnimSegment1856 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1856->setUSE("hanim_l_carpal_proximal_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1856);

CHAnimSegment* HAnimSegment1857 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1857->setUSE("hanim_r_carpal_proximal_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1857);

CHAnimSegment* HAnimSegment1858 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1858->setUSE("hanim_l_carpal_proximal_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1858);

CHAnimSegment* HAnimSegment1859 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1859->setUSE("hanim_r_carpal_proximal_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1859);

CHAnimSegment* HAnimSegment1860 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1860->setUSE("hanim_l_clavicle");
HAnimHumanoid43->setSegments(*HAnimSegment1860);

CHAnimSegment* HAnimSegment1861 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1861->setUSE("hanim_r_clavicle");
HAnimHumanoid43->setSegments(*HAnimSegment1861);

CHAnimSegment* HAnimSegment1862 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1862->setUSE("hanim_l_eyeball");
HAnimHumanoid43->setSegments(*HAnimSegment1862);

CHAnimSegment* HAnimSegment1863 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1863->setUSE("hanim_r_eyeball");
HAnimHumanoid43->setSegments(*HAnimSegment1863);

CHAnimSegment* HAnimSegment1864 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1864->setUSE("hanim_l_eyebrow");
HAnimHumanoid43->setSegments(*HAnimSegment1864);

CHAnimSegment* HAnimSegment1865 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1865->setUSE("hanim_r_eyebrow");
HAnimHumanoid43->setSegments(*HAnimSegment1865);

CHAnimSegment* HAnimSegment1866 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1866->setUSE("hanim_l_eyelid");
HAnimHumanoid43->setSegments(*HAnimSegment1866);

CHAnimSegment* HAnimSegment1867 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1867->setUSE("hanim_r_eyelid");
HAnimHumanoid43->setSegments(*HAnimSegment1867);

CHAnimSegment* HAnimSegment1868 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1868->setUSE("hanim_l_forearm");
HAnimHumanoid43->setSegments(*HAnimSegment1868);

CHAnimSegment* HAnimSegment1869 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1869->setUSE("hanim_r_forearm");
HAnimHumanoid43->setSegments(*HAnimSegment1869);

CHAnimSegment* HAnimSegment1870 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1870->setUSE("hanim_l_metacarpal_1");
HAnimHumanoid43->setSegments(*HAnimSegment1870);

CHAnimSegment* HAnimSegment1871 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1871->setUSE("hanim_r_metacarpal_1");
HAnimHumanoid43->setSegments(*HAnimSegment1871);

CHAnimSegment* HAnimSegment1872 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1872->setUSE("hanim_l_metacarpal_2");
HAnimHumanoid43->setSegments(*HAnimSegment1872);

CHAnimSegment* HAnimSegment1873 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1873->setUSE("hanim_r_metacarpal_2");
HAnimHumanoid43->setSegments(*HAnimSegment1873);

CHAnimSegment* HAnimSegment1874 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1874->setUSE("hanim_l_metacarpal_3");
HAnimHumanoid43->setSegments(*HAnimSegment1874);

CHAnimSegment* HAnimSegment1875 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1875->setUSE("hanim_r_metacarpal_3");
HAnimHumanoid43->setSegments(*HAnimSegment1875);

CHAnimSegment* HAnimSegment1876 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1876->setUSE("hanim_l_metacarpal_4");
HAnimHumanoid43->setSegments(*HAnimSegment1876);

CHAnimSegment* HAnimSegment1877 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1877->setUSE("hanim_r_metacarpal_4");
HAnimHumanoid43->setSegments(*HAnimSegment1877);

CHAnimSegment* HAnimSegment1878 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1878->setUSE("hanim_l_metacarpal_5");
HAnimHumanoid43->setSegments(*HAnimSegment1878);

CHAnimSegment* HAnimSegment1879 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1879->setUSE("hanim_r_metacarpal_5");
HAnimHumanoid43->setSegments(*HAnimSegment1879);

CHAnimSegment* HAnimSegment1880 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1880->setUSE("hanim_l_metatarsal_2");
HAnimHumanoid43->setSegments(*HAnimSegment1880);

CHAnimSegment* HAnimSegment1881 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1881->setUSE("hanim_r_metatarsal_2");
HAnimHumanoid43->setSegments(*HAnimSegment1881);

CHAnimSegment* HAnimSegment1882 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1882->setUSE("hanim_l_scapula");
HAnimHumanoid43->setSegments(*HAnimSegment1882);

CHAnimSegment* HAnimSegment1883 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1883->setUSE("hanim_r_scapula");
HAnimHumanoid43->setSegments(*HAnimSegment1883);

CHAnimSegment* HAnimSegment1884 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1884->setUSE("hanim_l_talus");
HAnimHumanoid43->setSegments(*HAnimSegment1884);

CHAnimSegment* HAnimSegment1885 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1885->setUSE("hanim_r_talus");
HAnimHumanoid43->setSegments(*HAnimSegment1885);

CHAnimSegment* HAnimSegment1886 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1886->setUSE("hanim_l_tarsal_distal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1886);

CHAnimSegment* HAnimSegment1887 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1887->setUSE("hanim_r_tarsal_distal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1887);

CHAnimSegment* HAnimSegment1888 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1888->setUSE("hanim_l_tarsal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1888);

CHAnimSegment* HAnimSegment1889 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1889->setUSE("hanim_r_tarsal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1889);

CHAnimSegment* HAnimSegment1890 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1890->setUSE("hanim_l_thigh");
HAnimHumanoid43->setSegments(*HAnimSegment1890);

CHAnimSegment* HAnimSegment1891 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1891->setUSE("hanim_r_thigh");
HAnimHumanoid43->setSegments(*HAnimSegment1891);

CHAnimSegment* HAnimSegment1892 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1892->setUSE("hanim_l_upperarm");
HAnimHumanoid43->setSegments(*HAnimSegment1892);

CHAnimSegment* HAnimSegment1893 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1893->setUSE("hanim_r_upperarm");
HAnimHumanoid43->setSegments(*HAnimSegment1893);

CHAnimSite* HAnimSite1894 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1894->setUSE("hanim_crotch_pt");
HAnimHumanoid43->setSites(*HAnimSite1894);

CHAnimSite* HAnimSite1895 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1895->setUSE("hanim_skull_vertex_pt");
HAnimHumanoid43->setSites(*HAnimSite1895);

CHAnimSite* HAnimSite1896 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1896->setUSE("hanim_sellion_pt");
HAnimHumanoid43->setSites(*HAnimSite1896);

CHAnimSite* HAnimSite1897 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1897->setUSE("hanim_supramenton_pt");
HAnimHumanoid43->setSites(*HAnimSite1897);

CHAnimSite* HAnimSite1898 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1898->setUSE("hanim_nuchale_pt");
HAnimHumanoid43->setSites(*HAnimSite1898);

CHAnimSite* HAnimSite1899 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1899->setUSE("hanim_suprasternale_pt");
HAnimHumanoid43->setSites(*HAnimSite1899);

CHAnimSite* HAnimSite1900 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1900->setUSE("hanim_cervicale_pt");
HAnimHumanoid43->setSites(*HAnimSite1900);

CHAnimSite* HAnimSite1901 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1901->setUSE("hanim_substernale_pt");
HAnimHumanoid43->setSites(*HAnimSite1901);

CHAnimSite* HAnimSite1902 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1902->setUSE("hanim_rib10_midspine_pt");
HAnimHumanoid43->setSites(*HAnimSite1902);

CHAnimSite* HAnimSite1903 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1903->setUSE("hanim_waist_preferred_posterior_pt");
HAnimHumanoid43->setSites(*HAnimSite1903);

CHAnimSite* HAnimSite1904 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1904->setUSE("hanim_navel_pt");
HAnimHumanoid43->setSites(*HAnimSite1904);

CHAnimSite* HAnimSite1905 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1905->setUSE("hanim_l_acromion_pt");
HAnimHumanoid43->setSites(*HAnimSite1905);

CHAnimSite* HAnimSite1906 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1906->setUSE("hanim_r_acromion_pt");
HAnimHumanoid43->setSites(*HAnimSite1906);

CHAnimSite* HAnimSite1907 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1907->setUSE("hanim_r_asis_pt");
HAnimHumanoid43->setSites(*HAnimSite1907);

CHAnimSite* HAnimSite1908 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1908->setUSE("hanim_l_asis_pt");
HAnimHumanoid43->setSites(*HAnimSite1908);

CHAnimSite* HAnimSite1909 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1909->setUSE("hanim_l_axilla_distal_pt");
HAnimHumanoid43->setSites(*HAnimSite1909);

CHAnimSite* HAnimSite1910 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1910->setUSE("hanim_r_axilla_distal_pt");
HAnimHumanoid43->setSites(*HAnimSite1910);

CHAnimSite* HAnimSite1911 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1911->setUSE("hanim_l_axilla_proximal_pt");
HAnimHumanoid43->setSites(*HAnimSite1911);

CHAnimSite* HAnimSite1912 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1912->setUSE("hanim_r_axilla_proximal_pt");
HAnimHumanoid43->setSites(*HAnimSite1912);

CHAnimSite* HAnimSite1913 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1913->setUSE("hanim_l_calcaneus_posterior_pt");
HAnimHumanoid43->setSites(*HAnimSite1913);

CHAnimSite* HAnimSite1914 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1914->setUSE("hanim_r_calcaneus_posterior_pt");
HAnimHumanoid43->setSites(*HAnimSite1914);

CHAnimSite* HAnimSite1915 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1915->setUSE("hanim_l_carpal_distal_phalanx_1_pt");
HAnimHumanoid43->setSites(*HAnimSite1915);

CHAnimSite* HAnimSite1916 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1916->setUSE("hanim_r_carpal_distal_phalanx_1_pt");
HAnimHumanoid43->setSites(*HAnimSite1916);

CHAnimSite* HAnimSite1917 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1917->setUSE("hanim_l_carpal_distal_phalanx_2_pt");
HAnimHumanoid43->setSites(*HAnimSite1917);

CHAnimSite* HAnimSite1918 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1918->setUSE("hanim_r_carpal_distal_phalanx_2_pt");
HAnimHumanoid43->setSites(*HAnimSite1918);

CHAnimSite* HAnimSite1919 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1919->setUSE("hanim_l_carpal_distal_phalanx_3_pt");
HAnimHumanoid43->setSites(*HAnimSite1919);

CHAnimSite* HAnimSite1920 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1920->setUSE("hanim_r_carpal_distal_phalanx_3_pt");
HAnimHumanoid43->setSites(*HAnimSite1920);

CHAnimSite* HAnimSite1921 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1921->setUSE("hanim_l_carpal_distal_phalanx_4_pt");
HAnimHumanoid43->setSites(*HAnimSite1921);

CHAnimSite* HAnimSite1922 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1922->setUSE("hanim_r_carpal_distal_phalanx_4_pt");
HAnimHumanoid43->setSites(*HAnimSite1922);

CHAnimSite* HAnimSite1923 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1923->setUSE("hanim_l_carpal_distal_phalanx_5_pt");
HAnimHumanoid43->setSites(*HAnimSite1923);

CHAnimSite* HAnimSite1924 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1924->setUSE("hanim_r_carpal_distal_phalanx_5_pt");
HAnimHumanoid43->setSites(*HAnimSite1924);

CHAnimSite* HAnimSite1925 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1925->setUSE("hanim_l_clavicle_pt");
HAnimHumanoid43->setSites(*HAnimSite1925);

CHAnimSite* HAnimSite1926 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1926->setUSE("hanim_r_clavicle_pt");
HAnimHumanoid43->setSites(*HAnimSite1926);

CHAnimSite* HAnimSite1927 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1927->setUSE("hanim_l_dactylion_pt");
HAnimHumanoid43->setSites(*HAnimSite1927);

CHAnimSite* HAnimSite1928 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1928->setUSE("hanim_r_dactylion_pt");
HAnimHumanoid43->setSites(*HAnimSite1928);

CHAnimSite* HAnimSite1929 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1929->setUSE("hanim_l_femoral_lateral_epicondyle_pt");
HAnimHumanoid43->setSites(*HAnimSite1929);

CHAnimSite* HAnimSite1930 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1930->setUSE("hanim_r_femoral_lateral_epicondyle_pt");
HAnimHumanoid43->setSites(*HAnimSite1930);

CHAnimSite* HAnimSite1931 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1931->setUSE("hanim_l_femoral_medial_epicondyle_pt");
HAnimHumanoid43->setSites(*HAnimSite1931);

CHAnimSite* HAnimSite1932 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1932->setUSE("hanim_r_femoral_medial_epicondyle_pt");
HAnimHumanoid43->setSites(*HAnimSite1932);

CHAnimSite* HAnimSite1933 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1933->setUSE("hanim_l_forefoot_tip_pt");
HAnimHumanoid43->setSites(*HAnimSite1933);

CHAnimSite* HAnimSite1934 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1934->setUSE("hanim_r_forefoot_tip_pt");
HAnimHumanoid43->setSites(*HAnimSite1934);

CHAnimSite* HAnimSite1935 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1935->setUSE("hanim_r_gonion_pt");
HAnimHumanoid43->setSites(*HAnimSite1935);

CHAnimSite* HAnimSite1936 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1936->setUSE("hanim_l_gonion_pt");
HAnimHumanoid43->setSites(*HAnimSite1936);

CHAnimSite* HAnimSite1937 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1937->setUSE("hanim_l_humeral_lateral_epicondyle_pt");
HAnimHumanoid43->setSites(*HAnimSite1937);

CHAnimSite* HAnimSite1938 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1938->setUSE("hanim_r_humeral_lateral_epicondyle_pt");
HAnimHumanoid43->setSites(*HAnimSite1938);

CHAnimSite* HAnimSite1939 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1939->setUSE("hanim_l_humeral_medial_epicondyle_pt");
HAnimHumanoid43->setSites(*HAnimSite1939);

CHAnimSite* HAnimSite1940 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1940->setUSE("hanim_r_humeral_medial_epicondyle_pt");
HAnimHumanoid43->setSites(*HAnimSite1940);

CHAnimSite* HAnimSite1941 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1941->setUSE("hanim_r_iliocristale_pt");
HAnimHumanoid43->setSites(*HAnimSite1941);

CHAnimSite* HAnimSite1942 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1942->setUSE("hanim_l_iliocristale_pt");
HAnimHumanoid43->setSites(*HAnimSite1942);

CHAnimSite* HAnimSite1943 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1943->setUSE("hanim_r_infraorbitale_pt");
HAnimHumanoid43->setSites(*HAnimSite1943);

CHAnimSite* HAnimSite1944 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1944->setUSE("hanim_l_infraorbitale_pt");
HAnimHumanoid43->setSites(*HAnimSite1944);

CHAnimSite* HAnimSite1945 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1945->setUSE("hanim_l_knee_crease_pt");
HAnimHumanoid43->setSites(*HAnimSite1945);

CHAnimSite* HAnimSite1946 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1946->setUSE("hanim_r_knee_crease_pt");
HAnimHumanoid43->setSites(*HAnimSite1946);

CHAnimSite* HAnimSite1947 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1947->setUSE("hanim_l_lateral_malleolus_pt");
HAnimHumanoid43->setSites(*HAnimSite1947);

CHAnimSite* HAnimSite1948 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1948->setUSE("hanim_r_lateral_malleolus_pt");
HAnimHumanoid43->setSites(*HAnimSite1948);

CHAnimSite* HAnimSite1949 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1949->setUSE("hanim_l_medial_malleolus_pt");
HAnimHumanoid43->setSites(*HAnimSite1949);

CHAnimSite* HAnimSite1950 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1950->setUSE("hanim_r_medial_malleolus_pt");
HAnimHumanoid43->setSites(*HAnimSite1950);

CHAnimSite* HAnimSite1951 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1951->setUSE("hanim_l_metacarpal_phalanx_2_pt");
HAnimHumanoid43->setSites(*HAnimSite1951);

CHAnimSite* HAnimSite1952 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1952->setUSE("hanim_r_metacarpal_phalanx_2_pt");
HAnimHumanoid43->setSites(*HAnimSite1952);

CHAnimSite* HAnimSite1953 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1953->setUSE("hanim_l_metacarpal_phalanx_5_pt");
HAnimHumanoid43->setSites(*HAnimSite1953);

CHAnimSite* HAnimSite1954 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1954->setUSE("hanim_r_metacarpal_phalanx_5_pt");
HAnimHumanoid43->setSites(*HAnimSite1954);

CHAnimSite* HAnimSite1955 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1955->setUSE("hanim_l_metatarsal_phalanx_1_pt");
HAnimHumanoid43->setSites(*HAnimSite1955);

CHAnimSite* HAnimSite1956 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1956->setUSE("hanim_r_metatarsal_phalanx_1_pt");
HAnimHumanoid43->setSites(*HAnimSite1956);

CHAnimSite* HAnimSite1957 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1957->setUSE("hanim_l_metatarsal_phalanx_5_pt");
HAnimHumanoid43->setSites(*HAnimSite1957);

CHAnimSite* HAnimSite1958 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1958->setUSE("hanim_r_metatarsal_phalanx_5_pt");
HAnimHumanoid43->setSites(*HAnimSite1958);

CHAnimSite* HAnimSite1959 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1959->setUSE("hanim_r_neck_base_pt");
HAnimHumanoid43->setSites(*HAnimSite1959);

CHAnimSite* HAnimSite1960 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1960->setUSE("hanim_l_neck_base_pt");
HAnimHumanoid43->setSites(*HAnimSite1960);

CHAnimSite* HAnimSite1961 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1961->setUSE("hanim_l_olecranon_pt");
HAnimHumanoid43->setSites(*HAnimSite1961);

CHAnimSite* HAnimSite1962 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1962->setUSE("hanim_r_olecranon_pt");
HAnimHumanoid43->setSites(*HAnimSite1962);

CHAnimSite* HAnimSite1963 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1963->setUSE("hanim_r_psis_pt");
HAnimHumanoid43->setSites(*HAnimSite1963);

CHAnimSite* HAnimSite1964 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1964->setUSE("hanim_l_psis_pt");
HAnimHumanoid43->setSites(*HAnimSite1964);

CHAnimSite* HAnimSite1965 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1965->setUSE("hanim_l_radial_styloid_pt");
HAnimHumanoid43->setSites(*HAnimSite1965);

CHAnimSite* HAnimSite1966 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1966->setUSE("hanim_r_radial_styloid_pt");
HAnimHumanoid43->setSites(*HAnimSite1966);

CHAnimSite* HAnimSite1967 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1967->setUSE("hanim_l_radiale_pt");
HAnimHumanoid43->setSites(*HAnimSite1967);

CHAnimSite* HAnimSite1968 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1968->setUSE("hanim_r_radiale_pt");
HAnimHumanoid43->setSites(*HAnimSite1968);

CHAnimSite* HAnimSite1969 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1969->setUSE("hanim_r_rib10_pt");
HAnimHumanoid43->setSites(*HAnimSite1969);

CHAnimSite* HAnimSite1970 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1970->setUSE("hanim_l_rib10_pt");
HAnimHumanoid43->setSites(*HAnimSite1970);

CHAnimSite* HAnimSite1971 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1971->setUSE("hanim_temporomandibular_l_site_pt");
HAnimHumanoid43->setSites(*HAnimSite1971);

CHAnimSite* HAnimSite1972 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1972->setUSE("hanim_temporomandibular_r_site_pt");
HAnimHumanoid43->setSites(*HAnimSite1972);

CHAnimSite* HAnimSite1973 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1973->setUSE("hanim_l_sphyrion_pt");
HAnimHumanoid43->setSites(*HAnimSite1973);

CHAnimSite* HAnimSite1974 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1974->setUSE("hanim_r_sphyrion_pt");
HAnimHumanoid43->setSites(*HAnimSite1974);

CHAnimSite* HAnimSite1975 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1975->setUSE("hanim_l_tarsal_distal_phalanx_2_pt");
HAnimHumanoid43->setSites(*HAnimSite1975);

CHAnimSite* HAnimSite1976 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1976->setUSE("hanim_r_tarsal_distal_phalanx_2_pt");
HAnimHumanoid43->setSites(*HAnimSite1976);

CHAnimSite* HAnimSite1977 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1977->setUSE("hanim_r_thelion_pt");
HAnimHumanoid43->setSites(*HAnimSite1977);

CHAnimSite* HAnimSite1978 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1978->setUSE("hanim_l_thelion_pt");
HAnimHumanoid43->setSites(*HAnimSite1978);

CHAnimSite* HAnimSite1979 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1979->setUSE("hanim_r_tragion_pt");
HAnimHumanoid43->setSites(*HAnimSite1979);

CHAnimSite* HAnimSite1980 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1980->setUSE("hanim_l_tragion_pt");
HAnimHumanoid43->setSites(*HAnimSite1980);

CHAnimSite* HAnimSite1981 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1981->setUSE("hanim_r_trochanterion_pt");
HAnimHumanoid43->setSites(*HAnimSite1981);

CHAnimSite* HAnimSite1982 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1982->setUSE("hanim_l_trochanterion_pt");
HAnimHumanoid43->setSites(*HAnimSite1982);

CHAnimSite* HAnimSite1983 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1983->setUSE("hanim_l_ulnar_styloid_pt");
HAnimHumanoid43->setSites(*HAnimSite1983);

CHAnimSite* HAnimSite1984 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1984->setUSE("hanim_r_ulnar_styloid_pt");
HAnimHumanoid43->setSites(*HAnimSite1984);

group->addChildren(*HAnimHumanoid43);

X3D0->setScene(*Scene29);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

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
meta3->setContent("DiamondManLOA0.x3d");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("description");
meta4->setContent("HAnim skeletal structure for Level of Action (LOA) zero, with one diamond at the base node for the structure. HumanoidRoot only, so this is the minimum legal HAnim humanoid.");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("creator");
meta5->setContent("Matthew T. Beitler");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("translator");
meta6->setContent("Joel S. Pawloski");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("created");
meta7->setContent("12 November 2001");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("modified");
meta8->setContent("23 December 2021");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("motto");
meta9->setContent("(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\"");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("reference");
meta10->setContent("HAnim 2.0 specification, Appendix A: Nominal human body dimensions and levels of articulation (LOAs)");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("reference");
meta11->setContent("https://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/BodyDimensionsAndLOAs.html");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("reference");
meta12->setContent("https://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/BodyDimensionsAndLOAs.html#LevelOfArticulationZero");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("reference");
meta13->setContent("HAnim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Zero");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("reference");
meta14->setContent("http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("reference");
meta15->setContent("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA0.wrl");
head1->addMeta(*meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("reference");
meta16->setContent("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA0-diamond.wrl");
head1->addMeta(*meta16);

Cmeta* meta17 = new Cmeta();
meta17->setName("reference");
meta17->setContent("http://ece.uwaterloo.ca/~HAnim");
head1->addMeta(*meta17);

Cmeta* meta18 = new Cmeta();
meta18->setName("reference");
meta18->setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.pdf");
head1->addMeta(*meta18);

Cmeta* meta19 = new Cmeta();
meta19->setName("reference");
meta19->setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.ps");
head1->addMeta(*meta19);

Cmeta* meta20 = new Cmeta();
meta20->setName("reference");
meta20->setContent("http://www.cis.upenn.edu/~beitler");
head1->addMeta(*meta20);

Cmeta* meta21 = new Cmeta();
meta21->setName("Image");
meta21->setContent("humanoid_landmark_locations.gif");
head1->addMeta(*meta21);

Cmeta* meta22 = new Cmeta();
meta22->setName("Image");
meta22->setContent("http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif");
head1->addMeta(*meta22);

Cmeta* meta23 = new Cmeta();
meta23->setName("identifier");
meta23->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA0.x3d");
head1->addMeta(*meta23);

Cmeta* meta24 = new Cmeta();
meta24->setName("generator");
meta24->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta24);

Cmeta* meta25 = new Cmeta();
meta25->setName("license");
meta25->setContent("../license.html");
head1->addMeta(*meta25);

X3D0->setHead(*head1);

CScene* Scene26 = new CScene();
CWorldInfo* WorldInfo27 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo27->setInfo(new CString[1]{"HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 0 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"}, 1);
WorldInfo27->setTitle("HANIM 2.0 Default Joint Centers, LOA0");
group->addChildren(*WorldInfo27);

CNavigationInfo* NavigationInfo28 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo28->setSpeed(1.5);
group->addChildren(*NavigationInfo28);

CViewpoint* Viewpoint29 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint29->setCenterOfRotation(new float[3]{0,1,0});
Viewpoint29->setDescription("Diamond Man, LOA 0");
Viewpoint29->setPosition(new float[3]{0,1,3});
group->addChildren(*Viewpoint29);

CHAnimHumanoid* HAnimHumanoid30 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid30->setName("humanoid");
HAnimHumanoid30->setDEF("hanim_humanoid");
HAnimHumanoid30->setLoa(0);
HAnimHumanoid30->setVersion("2.0");
//original HAnimHumanoid info='\"authorEmail=beitler@graphics.cis.upenn.edu beitler@acm.org\" \"authorName=Matthew T. Beitler\" \"copyright=Copyright 1999 Matthew T. Beitler\" \"creationDate=05/12/99\" \"humanoidVersion=JointCenters 1.1 LOA0\" \"usageRestrictions=PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose.\"'
CMetadataSet* MetadataSet31 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet31->setName("HAnimHumanoid.info");
MetadataSet31->setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid");
CMetadataString* MetadataString32 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString32->setName("authorEmail");
MetadataString32->setValue(new CString[1]{"beitler@graphics.cis.upenn.edu beitler@acm.org"}, 1);
MetadataSet31->setValue(*MetadataString32);

CMetadataString* MetadataString33 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString33->setName("authorName");
MetadataString33->setValue(new CString[1]{"Matthew T. Beitler"}, 1);
MetadataSet31->addValue(*MetadataString33);

CMetadataString* MetadataString34 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString34->setName("copyright");
MetadataString34->setValue(new CString[1]{"Copyright 1999 Matthew T. Beitler"}, 1);
MetadataSet31->addValue(*MetadataString34);

CMetadataString* MetadataString35 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString35->setName("creationDate");
MetadataString35->setValue(new CString[1]{"05/12/99"}, 1);
MetadataSet31->addValue(*MetadataString35);

CMetadataString* MetadataString36 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString36->setName("humanoidVersion");
MetadataString36->setValue(new CString[1]{"JointCenters 1.1 LOA0"}, 1);
MetadataSet31->addValue(*MetadataString36);

CMetadataString* MetadataString37 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString37->setName("usageRestrictions");
MetadataString37->setValue(new CString[1]{"PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose."}, 1);
MetadataSet31->addValue(*MetadataString37);

HAnimHumanoid30->setMetadata(*MetadataSet31);

CHAnimJoint* HAnimJoint38 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint38->setName("humanoid_root");
HAnimJoint38->setDEF("hanim_humanoid_root");
HAnimJoint38->setCenter(new float[3]{0,0.824,0.0277});
HAnimJoint38->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint38->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint39 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint39->setName("sacroiliac");
HAnimJoint39->setDEF("hanim_sacroiliac");
HAnimJoint39->setCenter(new float[3]{0,0.9149,0.0016});
HAnimJoint39->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint39->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment40 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment40->setName("pelvis");
HAnimSegment40->setDEF("hanim_pelvis");
CTransform* Transform41 = (CTransform *)(m_pScene.createNode("Transform"));
Transform41->setTranslation(new float[3]{0,0.9149,0.0016});
CShape* Shape42 = (CShape *)(m_pScene.createNode("Shape"));
Shape42->setDEF("DiamondShape");
CIndexedFaceSet* IndexedFaceSet43 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet43->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet43->setCreaseAngle(0.5);
CCoordinate* Coordinate44 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate44->setPoint(new float[18]{0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
IndexedFaceSet43->setCoord(*Coordinate44);

Shape42->setGeometry(IndexedFaceSet43);

CAppearance* Appearance45 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material46 = (CMaterial *)(m_pScene.createNode("Material"));
Material46->setDiffuseColor(new float[3]{1,1,0});
Appearance45->setMaterial(*Material46);

Shape42->setAppearance(*Appearance45);

Transform41->addChildren(*Shape42);

HAnimSegment40->addChildren(*Transform41);

HAnimJoint39->addChildren(*HAnimSegment40);

HAnimJoint38->addChildren(*HAnimJoint39);

HAnimHumanoid30->setSkeleton(*HAnimJoint38);

CHAnimSite* HAnimSite47 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite47->setName("site_view");
HAnimSite47->setDEF("hanim_site_view");
CViewpoint* Viewpoint48 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint48->setDEF("InclinedView");
Viewpoint48->setDescription("Inclined View");
Viewpoint48->setOrientation(new float[4]{-0.113,0.993,0.0347,0.671});
Viewpoint48->setPosition(new float[3]{1.62,1.05,2.06});
HAnimSite47->addChildren(*Viewpoint48);

CViewpoint* Viewpoint49 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint49->setDEF("FrontView");
Viewpoint49->setDescription("Front View");
Viewpoint49->setPosition(new float[3]{0,0.854,2.57665});
HAnimSite47->addChildren(*Viewpoint49);

CViewpoint* Viewpoint50 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint50->setDEF("SideView");
Viewpoint50->setDescription("Side View");
Viewpoint50->setOrientation(new float[4]{0,1,0,1.57079});
Viewpoint50->setPosition(new float[3]{2.5929,0.854,0});
HAnimSite47->addChildren(*Viewpoint50);

CViewpoint* Viewpoint51 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint51->setDEF("TopView");
Viewpoint51->setDescription("Top View");
Viewpoint51->setOrientation(new float[4]{1,0,0,-1.57079});
Viewpoint51->setPosition(new float[3]{0,3.4495,0});
HAnimSite47->addChildren(*Viewpoint51);

HAnimHumanoid30->addViewpoints(*HAnimSite47);

CHAnimJoint* HAnimJoint52 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint52->setUSE("hanim_humanoid_root");
HAnimHumanoid30->addJoints(*HAnimJoint52);

CHAnimJoint* HAnimJoint53 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint53->setUSE("hanim_sacroiliac");
HAnimHumanoid30->addJoints(*HAnimJoint53);

CHAnimSegment* HAnimSegment54 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment54->setUSE("hanim_pelvis");
HAnimHumanoid30->setSegments(*HAnimSegment54);

group->addChildren(*HAnimHumanoid30);

X3D0->setScene(*Scene26);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

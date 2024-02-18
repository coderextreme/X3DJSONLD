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
Cmeta* meta2 = new Cmeta();
meta2->setName("title");
meta2->setContent("DiamondManLOA0.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("description");
meta3->setContent("HAnim skeletal structure for Level of Action (LOA) zero, with one diamond at the base node for the structure. HumanoidRoot only, so this is the minimum legal HAnim humanoid.");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("creator");
meta4->setContent("Matthew T. Beitler");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("translator");
meta5->setContent("Joel S. Pawloski");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("created");
meta6->setContent("12 November 2001");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("modified");
meta7->setContent("Thu, 14 Dec 2023 22:20:20 GMT");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("motto");
meta8->setContent("(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\"");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("reference");
meta9->setContent("HAnim 2.0 specification, Appendix A: Nominal human body dimensions and levels of articulation (LOAs)");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("reference");
meta10->setContent("https://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/BodyDimensionsAndLOAs.html");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("reference");
meta11->setContent("https://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/BodyDimensionsAndLOAs.html#LevelOfArticulationZero");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("reference");
meta12->setContent("HAnim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Zero");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("reference");
meta13->setContent("http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("reference");
meta14->setContent("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA0.wrl");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("reference");
meta15->setContent("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA0-diamond.wrl");
head1->addMeta(*meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("reference");
meta16->setContent("http://ece.uwaterloo.ca/~HAnim");
head1->addMeta(*meta16);

Cmeta* meta17 = new Cmeta();
meta17->setName("reference");
meta17->setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.pdf");
head1->addMeta(*meta17);

Cmeta* meta18 = new Cmeta();
meta18->setName("reference");
meta18->setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.ps");
head1->addMeta(*meta18);

Cmeta* meta19 = new Cmeta();
meta19->setName("reference");
meta19->setContent("http://www.cis.upenn.edu/~beitler");
head1->addMeta(*meta19);

Cmeta* meta20 = new Cmeta();
meta20->setName("Image");
meta20->setContent("humanoid_landmark_locations.gif");
head1->addMeta(*meta20);

Cmeta* meta21 = new Cmeta();
meta21->setName("Image");
meta21->setContent("http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif");
head1->addMeta(*meta21);

Cmeta* meta22 = new Cmeta();
meta22->setName("identifier");
meta22->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA0.x3d");
head1->addMeta(*meta22);

Ccomponent* component23 = new Ccomponent();
component23->setName("HAnim");
component23->setLevel(1);
head1->addComponent(*component23);

X3D0->setHead(*head1);

CScene* Scene24 = new CScene();
CWorldInfo* WorldInfo25 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo25->setTitle("HANIM 2.0 Default Joint Centers, LOA0");
WorldInfo25->setInfo(new CString[1]{"HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 0 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"}, 1);
group->addChildren(*WorldInfo25);

CNavigationInfo* NavigationInfo26 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo26->setSpeed(1.5);
group->addChildren(*NavigationInfo26);

CViewpoint* Viewpoint27 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint27->setDescription("Diamond Man, LOA 0");
Viewpoint27->setPosition(new float[3]{0,1,3});
Viewpoint27->setCenterOfRotation(new float[3]{0,1,0});
group->addChildren(*Viewpoint27);

CHAnimHumanoid* HAnimHumanoid28 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid28->setDEF("hanim_humanoid");
HAnimHumanoid28->setName("humanoid");
HAnimHumanoid28->setLoa(0);
CMetadataSet* MetadataSet29 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet29->setName("HAnimHumanoid.info");
MetadataSet29->setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid");
CMetadataString* MetadataString30 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString30->setName("authorEmail");
MetadataString30->setValue(new CString[1]{"beitler@graphics.cis.upenn.edu beitler@acm.org"}, 1);
MetadataSet29->setValue(*MetadataString30);

CMetadataString* MetadataString31 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString31->setName("authorName");
MetadataString31->setValue(new CString[1]{"Matthew T. Beitler"}, 1);
MetadataSet29->setValue(*MetadataString31);

CMetadataString* MetadataString32 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString32->setName("copyright");
MetadataString32->setValue(new CString[1]{"Copyright 1999 Matthew T. Beitler"}, 1);
MetadataSet29->setValue(*MetadataString32);

CMetadataString* MetadataString33 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString33->setName("creationDate");
MetadataString33->setValue(new CString[1]{"05/12/99"}, 1);
MetadataSet29->setValue(*MetadataString33);

CMetadataString* MetadataString34 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString34->setName("humanoidVersion");
MetadataString34->setValue(new CString[1]{"JointCenters 1.1 LOA0"}, 1);
MetadataSet29->setValue(*MetadataString34);

CMetadataString* MetadataString35 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString35->setName("usageRestrictions");
MetadataString35->setValue(new CString[1]{"PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose."}, 1);
MetadataSet29->setValue(*MetadataString35);

HAnimHumanoid28->setMetadata(*MetadataSet29);

CHAnimJoint* HAnimJoint36 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint36->setDEF("hanim_humanoid_root");
HAnimJoint36->setName("humanoid_root");
HAnimJoint36->setCenter(new float[3]{0,0.824,0.0277});
CHAnimJoint* HAnimJoint37 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint37->setDEF("hanim_sacroiliac");
HAnimJoint37->setName("sacroiliac");
HAnimJoint37->setCenter(new float[3]{0,0.9149,0.0016});
CHAnimSegment* HAnimSegment38 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment38->setDEF("hanim_pelvis");
HAnimSegment38->setName("pelvis");
CTransform* Transform39 = (CTransform *)(m_pScene.createNode("Transform"));
Transform39->setTranslation(new float[3]{0,0.9149,0.0016});
CShape* Shape40 = (CShape *)(m_pScene.createNode("Shape"));
Shape40->setDEF("DiamondShape");
CAppearance* Appearance41 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material42 = (CMaterial *)(m_pScene.createNode("Material"));
Material42->setDiffuseColor(new float[3]{1,1,0});
Appearance41->setMaterial(*Material42);

Shape40->setAppearance(*Appearance41);

CIndexedFaceSet* IndexedFaceSet43 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet43->setCreaseAngle(0.5);
IndexedFaceSet43->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
CCoordinate* Coordinate44 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate44->setPoint(new float[18]{0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
IndexedFaceSet43->setCoord(*Coordinate44);

Shape40->setGeometry(IndexedFaceSet43);

Transform39->addChild(*Shape40);

HAnimSegment38->addChildren(*Transform39);

HAnimJoint37->addChildren(*HAnimSegment38);

HAnimJoint36->addChildren(*HAnimJoint37);

HAnimHumanoid28->setSkeleton(*HAnimJoint36);

CHAnimSite* HAnimSite45 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite45->setDEF("hanim_site_view");
HAnimSite45->setName("site_view");
CViewpoint* Viewpoint46 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint46->setDEF("InclinedView");
Viewpoint46->setDescription("Inclined View");
Viewpoint46->setPosition(new float[3]{1.62,1.05,2.06});
Viewpoint46->setOrientation(new float[4]{-0.113,0.993,0.0347,0.671});
HAnimSite45->addChildren(*Viewpoint46);

CViewpoint* Viewpoint47 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint47->setDEF("FrontView");
Viewpoint47->setDescription("Front View");
Viewpoint47->setPosition(new float[3]{0,0.854,2.57665});
HAnimSite45->addChildren(*Viewpoint47);

CViewpoint* Viewpoint48 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint48->setDEF("SideView");
Viewpoint48->setDescription("Side View");
Viewpoint48->setPosition(new float[3]{2.5929,0.854,0});
Viewpoint48->setOrientation(new float[4]{0,1,0,1.57079});
HAnimSite45->addChildren(*Viewpoint48);

CViewpoint* Viewpoint49 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint49->setDEF("TopView");
Viewpoint49->setDescription("Top View");
Viewpoint49->setPosition(new float[3]{0,3.4495,0});
Viewpoint49->setOrientation(new float[4]{1,0,0,-1.57079});
HAnimSite45->addChildren(*Viewpoint49);

HAnimHumanoid28->addViewpoints(*HAnimSite45);

CHAnimSegment* HAnimSegment50 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment50->setUSE("hanim_pelvis");
HAnimHumanoid28->setSegments(*HAnimSegment50);

CHAnimJoint* HAnimJoint51 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint51->setUSE("hanim_humanoid_root");
HAnimHumanoid28->addJoints(*HAnimJoint51);

CHAnimJoint* HAnimJoint52 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint52->setUSE("hanim_sacroiliac");
HAnimHumanoid28->addJoints(*HAnimJoint52);

group->addChildren(*HAnimHumanoid28);

X3D0->setScene(*Scene24);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

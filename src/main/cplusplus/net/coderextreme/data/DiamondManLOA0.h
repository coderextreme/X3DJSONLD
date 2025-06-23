//#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
component& component2 =  component();
component2.setName(CString("HAnim"));
component2.setLevel(1);
head1.addChild(&component2);

meta& meta3 =  meta();
meta3.setName(CString("title"));
meta3.setContent(CString("DiamondManLOA0.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("description"));
meta4.setContent(CString("HAnim skeletal structure for Level of Action (LOA) zero, with one diamond at the base node for the structure. HumanoidRoot only, so this is the minimum legal HAnim humanoid."));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("creator"));
meta5.setContent(CString("Matthew T. Beitler"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("translator"));
meta6.setContent(CString("Joel S. Pawloski"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("created"));
meta7.setContent(CString("12 November 2001"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("modified"));
meta8.setContent(CString("23 December 2021"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("motto"));
meta9.setContent(CString("(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\""));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("reference"));
meta10.setContent(CString("HAnim 2.0 specification, Appendix A: Nominal human body dimensions and levels of articulation (LOAs)"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("reference"));
meta11.setContent(CString("https://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/BodyDimensionsAndLOAs.html"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("reference"));
meta12.setContent(CString("https://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/BodyDimensionsAndLOAs.html#LevelOfArticulationZero"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("reference"));
meta13.setContent(CString("HAnim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Zero"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("reference"));
meta14.setContent(CString("http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(CString("reference"));
meta15.setContent(CString("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA0.wrl"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(CString("reference"));
meta16.setContent(CString("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA0-diamond.wrl"));
head1.addMeta(&meta16);

meta& meta17 =  meta();
meta17.setName(CString("reference"));
meta17.setContent(CString("http://ece.uwaterloo.ca/~HAnim"));
head1.addMeta(&meta17);

meta& meta18 =  meta();
meta18.setName(CString("reference"));
meta18.setContent(CString("http://www.cis.upenn.edu/~badler/anthro/89-71.pdf"));
head1.addMeta(&meta18);

meta& meta19 =  meta();
meta19.setName(CString("reference"));
meta19.setContent(CString("http://www.cis.upenn.edu/~badler/anthro/89-71.ps"));
head1.addMeta(&meta19);

meta& meta20 =  meta();
meta20.setName(CString("reference"));
meta20.setContent(CString("http://www.cis.upenn.edu/~beitler"));
head1.addMeta(&meta20);

meta& meta21 =  meta();
meta21.setName(CString("Image"));
meta21.setContent(CString("humanoid_landmark_locations.gif"));
head1.addMeta(&meta21);

meta& meta22 =  meta();
meta22.setName(CString("Image"));
meta22.setContent(CString("http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif"));
head1.addMeta(&meta22);

meta& meta23 =  meta();
meta23.setName(CString("identifier"));
meta23.setContent(CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA0.x3d"));
head1.addMeta(&meta23);

meta& meta24 =  meta();
meta24.setName(CString("generator"));
meta24.setContent(CString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta24);

meta& meta25 =  meta();
meta25.setName(CString("license"));
meta25.setContent(CString("../license.html"));
head1.addMeta(&meta25);

X3D0.setHead(&head1);

Scene& Scene26 =  Scene();
WorldInfo& WorldInfo27 =  WorldInfo();
WorldInfo27.setInfo(new CString[]{CString("HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 0 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf")}, 1);
WorldInfo27.setTitle(CString("HANIM 2.0 Default Joint Centers, LOA0"));
Scene26.addChild(&WorldInfo27);

NavigationInfo& NavigationInfo28 =  NavigationInfo();
NavigationInfo28.setSpeed(1.5);
Scene26.addChild(&NavigationInfo28);

Viewpoint& Viewpoint29 =  Viewpoint();
Viewpoint29.setCenterOfRotation(new float[]{0.0,1.0,0.0});
Viewpoint29.setDescription(CString("Diamond Man, LOA 0"));
Viewpoint29.setPosition(new float[]{0.0,1.0,3.0});
Scene26.addChild(&Viewpoint29);

HAnimHumanoid& HAnimHumanoid30 =  HAnimHumanoid();
HAnimHumanoid30.X3DNode::setName(CString("humanoid"));
HAnimHumanoid30.setDEF(CString("hanim_humanoid"));
HAnimHumanoid30.setLoa(0);
HAnimHumanoid30.setVersion(CString("2.0"));
//original HAnimHumanoid info='\"authorEmail=beitler@graphics.cis.upenn.edu beitler@acm.org\" \"authorName=Matthew T. Beitler\" \"copyright=Copyright 1999 Matthew T. Beitler\" \"creationDate=05/12/99\" \"humanoidVersion=JointCenters 1.1 LOA0\" \"usageRestrictions=PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose.\"'
MetadataSet& MetadataSet31 =  MetadataSet();
MetadataSet31.X3DNode::setName(CString("HAnimHumanoid.info"));
MetadataSet31.X3DNode::setReference(CString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"));
MetadataString& MetadataString32 =  MetadataString();
MetadataString32.X3DNode::setName(CString("authorEmail"));
MetadataString32.setValue(new CString[]{CString("beitler@graphics.cis.upenn.edu beitler@acm.org")}, 1);
MetadataSet31.setValue((X3DNode *)&MetadataString32);

MetadataString& MetadataString33 =  MetadataString();
MetadataString33.X3DNode::setName(CString("authorName"));
MetadataString33.setValue(new CString[]{CString("Matthew T. Beitler")}, 1);
MetadataSet31.setValue((X3DNode *)&MetadataString33);

MetadataString& MetadataString34 =  MetadataString();
MetadataString34.X3DNode::setName(CString("copyright"));
MetadataString34.setValue(new CString[]{CString("Copyright 1999 Matthew T. Beitler")}, 1);
MetadataSet31.setValue((X3DNode *)&MetadataString34);

MetadataString& MetadataString35 =  MetadataString();
MetadataString35.X3DNode::setName(CString("creationDate"));
MetadataString35.setValue(new CString[]{CString("05/12/99")}, 1);
MetadataSet31.setValue((X3DNode *)&MetadataString35);

MetadataString& MetadataString36 =  MetadataString();
MetadataString36.X3DNode::setName(CString("humanoidVersion"));
MetadataString36.setValue(new CString[]{CString("JointCenters 1.1 LOA0")}, 1);
MetadataSet31.setValue((X3DNode *)&MetadataString36);

MetadataString& MetadataString37 =  MetadataString();
MetadataString37.X3DNode::setName(CString("usageRestrictions"));
MetadataString37.setValue(new CString[]{CString("PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose.")}, 1);
MetadataSet31.setValue((X3DNode *)&MetadataString37);

HAnimHumanoid30.setMetadata(&MetadataSet31);

HAnimJoint& HAnimJoint38 =  HAnimJoint();
HAnimJoint38.X3DNode::setName(CString("humanoid_root"));
HAnimJoint38.setDEF(CString("hanim_humanoid_root"));
HAnimJoint38.setCenter(new float[]{0.0,0.824,0.0277});
HAnimJoint& HAnimJoint39 =  HAnimJoint();
HAnimJoint39.X3DNode::setName(CString("sacroiliac"));
HAnimJoint39.setDEF(CString("hanim_sacroiliac"));
HAnimJoint39.setCenter(new float[]{0.0,0.9149,0.0016});
HAnimSegment& HAnimSegment40 =  HAnimSegment();
HAnimSegment40.X3DNode::setName(CString("pelvis"));
HAnimSegment40.setDEF(CString("hanim_pelvis"));
Transform& Transform41 =  Transform();
Transform41.setTranslation(new float[]{0.0,0.9149,0.0016});
Shape& Shape42 =  Shape();
Shape42.setDEF(CString("DiamondShape"));
IndexedFaceSet& IndexedFaceSet43 =  IndexedFaceSet();
IndexedFaceSet43.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
IndexedFaceSet43.setCreaseAngle(0.5);
Coordinate& Coordinate44 =  Coordinate();
Coordinate44.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet43.setCoord(&Coordinate44);

Shape42.setGeometry(&IndexedFaceSet43);

Appearance& Appearance45 =  Appearance();
Material& Material46 =  Material();
Material46.setDiffuseColor(new float[]{1.0,1.0,0.0});
Appearance45.addChild(&Material46);

Shape42.addChild(&Appearance45);

Transform41.addChild(&Shape42);

HAnimSegment40.addChild(&Transform41);

HAnimJoint39.addChildren(&HAnimSegment40);

HAnimJoint38.addChildren(&HAnimJoint39);

HAnimHumanoid30.setSkeleton(&HAnimJoint38);

HAnimSite& HAnimSite47 =  HAnimSite();
HAnimSite47.X3DNode::setName(CString("site_view"));
HAnimSite47.setDEF(CString("hanim_site_view"));
Viewpoint& Viewpoint48 =  Viewpoint();
Viewpoint48.setDEF(CString("InclinedView"));
Viewpoint48.setDescription(CString("Inclined View"));
Viewpoint48.setOrientation(new float[]{-0.113,0.993,0.0347,0.671});
Viewpoint48.setPosition(new float[]{1.62,1.05,2.06});
HAnimSite47.addChild(&Viewpoint48);

Viewpoint& Viewpoint49 =  Viewpoint();
Viewpoint49.setDEF(CString("FrontView"));
Viewpoint49.setDescription(CString("Front View"));
Viewpoint49.setPosition(new float[]{0.0,0.854,2.57665});
HAnimSite47.addChild(&Viewpoint49);

Viewpoint& Viewpoint50 =  Viewpoint();
Viewpoint50.setDEF(CString("SideView"));
Viewpoint50.setDescription(CString("Side View"));
Viewpoint50.setOrientation(new float[]{0.0,1.0,0.0,1.57079});
Viewpoint50.setPosition(new float[]{2.5929,0.854,0.0});
HAnimSite47.addChild(&Viewpoint50);

Viewpoint& Viewpoint51 =  Viewpoint();
Viewpoint51.setDEF(CString("TopView"));
Viewpoint51.setDescription(CString("Top View"));
Viewpoint51.setOrientation(new float[]{1.0,0.0,0.0,-1.57079});
Viewpoint51.setPosition(new float[]{0.0,3.4495,0.0});
HAnimSite47.addChild(&Viewpoint51);

HAnimHumanoid30.setViewpoints(&HAnimSite47);

HAnimJoint& HAnimJoint52 =  HAnimJoint();
HAnimJoint52.setUSE(CString("hanim_humanoid_root"));
HAnimHumanoid30.setJoints(&HAnimJoint52);

HAnimJoint& HAnimJoint53 =  HAnimJoint();
HAnimJoint53.setUSE(CString("hanim_sacroiliac"));
HAnimHumanoid30.setJoints(&HAnimJoint53);

HAnimSegment& HAnimSegment54 =  HAnimSegment();
HAnimSegment54.setUSE(CString("hanim_pelvis"));
HAnimHumanoid30.setSegments(&HAnimSegment54);

Scene26.addChild(&HAnimHumanoid30);

X3D0.setScene(&Scene26);

//}

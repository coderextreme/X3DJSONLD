#ifndef WIN32
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#define WINGDIAPI
#define APIENTRY
#endif
#define FALSE false
#define TRUE true
#define BOOL bool
#define False false
#define True true
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
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
meta8.setContent(CString("Mon, 15 Sep 2025 05:18:46 GMT"));
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

X3D0.setHead(&head1);

Scene& Scene24 =  Scene();
WorldInfo& WorldInfo25 =  WorldInfo();
WorldInfo25.setTitle(CString("HANIM 2.0 Default Joint Centers, LOA0"));
WorldInfo25.setInfo(new CString[]{CString("HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 0 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf")}, 1);
Scene24.addChild(&WorldInfo25);

NavigationInfo& NavigationInfo26 =  NavigationInfo();
NavigationInfo26.setSpeed(1.5);
Scene24.addChild(&NavigationInfo26);

Viewpoint& Viewpoint27 =  Viewpoint();
Viewpoint27.setDescription(CString("Diamond Man, LOA 0"));
Viewpoint27.setPosition(new float[]{0,1,3});
Viewpoint27.setCenterOfRotation(new float[]{0,1,0});
Scene24.addChild(&Viewpoint27);

HAnimHumanoid& HAnimHumanoid28 =  HAnimHumanoid();
HAnimHumanoid28.setDEF(CString("hanim_humanoid"));
HAnimHumanoid28.X3DNode::setName(CString("humanoid"));
HAnimHumanoid28.setLoa(0);
MetadataSet& MetadataSet29 =  MetadataSet();
MetadataSet29.X3DNode::setName(CString("HAnimHumanoid.info"));
MetadataSet29.X3DNode::setReference(CString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"));
MetadataString& MetadataString30 =  MetadataString();
MetadataString30.X3DNode::setName(CString("authorEmail"));
MetadataSet29.setValue((X3DNode *)&MetadataString30);

MetadataString& MetadataString31 =  MetadataString();
MetadataString31.X3DNode::setName(CString("authorName"));
MetadataSet29.setValue((X3DNode *)&MetadataString31);

MetadataString& MetadataString32 =  MetadataString();
MetadataString32.X3DNode::setName(CString("copyright"));
MetadataSet29.setValue((X3DNode *)&MetadataString32);

MetadataString& MetadataString33 =  MetadataString();
MetadataString33.X3DNode::setName(CString("creationDate"));
MetadataSet29.setValue((X3DNode *)&MetadataString33);

MetadataString& MetadataString34 =  MetadataString();
MetadataString34.X3DNode::setName(CString("humanoidVersion"));
MetadataSet29.setValue((X3DNode *)&MetadataString34);

MetadataString& MetadataString35 =  MetadataString();
MetadataString35.X3DNode::setName(CString("usageRestrictions"));
MetadataSet29.setValue((X3DNode *)&MetadataString35);

HAnimHumanoid28.setMetadata(&MetadataSet29);

HAnimJoint& HAnimJoint36 =  HAnimJoint();
HAnimJoint36.setDEF(CString("hanim_humanoid_root"));
HAnimJoint36.X3DNode::setName(CString("humanoid_root"));
HAnimJoint36.setCenter(new float[]{0,0.824,0.0277});
HAnimJoint& HAnimJoint37 =  HAnimJoint();
HAnimJoint37.setDEF(CString("hanim_sacroiliac"));
HAnimJoint37.X3DNode::setName(CString("sacroiliac"));
HAnimJoint37.setCenter(new float[]{0,0.9149,0.0016});
HAnimSegment& HAnimSegment38 =  HAnimSegment();
HAnimSegment38.setDEF(CString("hanim_pelvis"));
HAnimSegment38.X3DNode::setName(CString("pelvis"));
Transform& Transform39 =  Transform();
Transform39.setTranslation(new float[]{0,0.9149,0.0016});
Shape& Shape40 =  Shape();
Shape40.setDEF(CString("DiamondShape"));
Appearance& Appearance41 =  Appearance();
Material& Material42 =  Material();
Material42.setDiffuseColor(new float[]{1,1,0});
Appearance41.addChild(&Material42);

Shape40.addChild(&Appearance41);

IndexedFaceSet& IndexedFaceSet43 =  IndexedFaceSet();
IndexedFaceSet43.setCreaseAngle(0.5);
IndexedFaceSet43.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate44 =  Coordinate();
Coordinate44.setPoint(new float[]{0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0}, 18);
IndexedFaceSet43.setCoord(&Coordinate44);

Shape40.setGeometry(&IndexedFaceSet43);

Transform39.addChild(&Shape40);

HAnimSegment38.addChild(&Transform39);

HAnimJoint37.addChildren(&HAnimSegment38);

HAnimJoint36.addChildren(&HAnimJoint37);

HAnimHumanoid28.setSkeleton(&HAnimJoint36);

HAnimJoint& HAnimJoint45 =  HAnimJoint();
HAnimJoint45.setUSE(CString("hanim_humanoid_root"));
HAnimHumanoid28.setJoints(&HAnimJoint45);

HAnimJoint& HAnimJoint46 =  HAnimJoint();
HAnimJoint46.setUSE(CString("hanim_sacroiliac"));
HAnimHumanoid28.setJoints(&HAnimJoint46);

HAnimSegment& HAnimSegment47 =  HAnimSegment();
HAnimSegment47.setUSE(CString("hanim_pelvis"));
HAnimHumanoid28.setSegments(&HAnimSegment47);

HAnimSite& HAnimSite48 =  HAnimSite();
HAnimSite48.setDEF(CString("hanim_site_view"));
HAnimSite48.X3DNode::setName(CString("site_view"));
Viewpoint& Viewpoint49 =  Viewpoint();
Viewpoint49.setDEF(CString("InclinedView"));
Viewpoint49.setDescription(CString("Inclined View"));
Viewpoint49.setPosition(new float[]{1.62,1.05,2.06});
Viewpoint49.setOrientation(new float[]{-0.113,0.993,0.0347,0.671});
HAnimSite48.addChild(&Viewpoint49);

Viewpoint& Viewpoint50 =  Viewpoint();
Viewpoint50.setDEF(CString("FrontView"));
Viewpoint50.setDescription(CString("Front View"));
Viewpoint50.setPosition(new float[]{0,0.854,2.57665});
HAnimSite48.addChild(&Viewpoint50);

Viewpoint& Viewpoint51 =  Viewpoint();
Viewpoint51.setDEF(CString("SideView"));
Viewpoint51.setDescription(CString("Side View"));
Viewpoint51.setPosition(new float[]{2.5929,0.854,0});
Viewpoint51.setOrientation(new float[]{0,1,0,1.57079});
HAnimSite48.addChild(&Viewpoint51);

Viewpoint& Viewpoint52 =  Viewpoint();
Viewpoint52.setDEF(CString("TopView"));
Viewpoint52.setDescription(CString("Top View"));
Viewpoint52.setPosition(new float[]{0,3.4495,0});
Viewpoint52.setOrientation(new float[]{1,0,0,-1.57079});
HAnimSite48.addChild(&Viewpoint52);

HAnimHumanoid28.setViewpoints(&HAnimSite48);

Scene24.addChild(&HAnimHumanoid28);

X3D0.setScene(&Scene24);

}

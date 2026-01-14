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
meta3.setContent(CString("DiamondManLOA_1.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("description"));
meta4.setContent(CString("HAnim skeletal structure for Level of Action (LOA) one, with diamonds at the Joint centers. LOA-1 is typical low-end real-time 3D hierarchy."));
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
meta8.setContent(CString("Tue, 09 Sep 2025 19:37:54 GMT"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("reference"));
meta9.setContent(CString("../Templates/DiamondManLOA_1.x3d"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("reference"));
meta10.setContent(CString("HAnim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Two"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("reference"));
meta11.setContent(CString("http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("reference"));
meta12.setContent(CString("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1.wrl"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("reference"));
meta13.setContent(CString("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1-diamond.wrl"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("reference"));
meta14.setContent(CString("http://ece.uwaterloo.ca/~HAnim"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(CString("reference"));
meta15.setContent(CString("http://www.cis.upenn.edu/~badler/anthro/89-71.pdf"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(CString("reference"));
meta16.setContent(CString("http://www.cis.upenn.edu/~badler/anthro/89-71.ps"));
head1.addMeta(&meta16);

meta& meta17 =  meta();
meta17.setName(CString("reference"));
meta17.setContent(CString("http://www.cis.upenn.edu/~beitler"));
head1.addMeta(&meta17);

meta& meta18 =  meta();
meta18.setName(CString("error"));
meta18.setContent(CString("Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported"));
head1.addMeta(&meta18);

meta& meta19 =  meta();
meta19.setName(CString("Image"));
meta19.setContent(CString("images/BonesAllSkeletonFrontViewLOA1.png"));
head1.addMeta(&meta19);

meta& meta20 =  meta();
meta20.setName(CString("Image"));
meta20.setContent(CString("humanoid_landmark_locations.gif"));
head1.addMeta(&meta20);

meta& meta21 =  meta();
meta21.setName(CString("Image"));
meta21.setContent(CString("http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif"));
head1.addMeta(&meta21);

meta& meta22 =  meta();
meta22.setName(CString("motto"));
meta22.setContent(CString("(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\""));
head1.addMeta(&meta22);

meta& meta23 =  meta();
meta23.setName(CString("warning"));
meta23.setContent(CString("Still needs comments on CAESAR feature points inserted"));
head1.addMeta(&meta23);

meta& meta24 =  meta();
meta24.setName(CString("identifier"));
meta24.setContent(CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA_1.x3d"));
head1.addMeta(&meta24);

X3D0.setHead(&head1);

Scene& Scene25 =  Scene();
WorldInfo& WorldInfo26 =  WorldInfo();
WorldInfo26.setTitle(CString("HANIM 1.1 Default Joint Centers, LOA1"));
WorldInfo26.setInfo(new CString[]{CString("HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 1 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf")}, 1);
Scene25.addChild(&WorldInfo26);

NavigationInfo& NavigationInfo27 =  NavigationInfo();
NavigationInfo27.setSpeed(1.5);
Scene25.addChild(&NavigationInfo27);

Viewpoint& Viewpoint28 =  Viewpoint();
Viewpoint28.setDescription(CString("Diamond Man, LOA 1"));
Viewpoint28.setPosition(new float[]{0,1,3});
Viewpoint28.setCenterOfRotation(new float[]{0,1,0});
Scene25.addChild(&Viewpoint28);

HAnimHumanoid& HAnimHumanoid29 =  HAnimHumanoid();
HAnimHumanoid29.setDEF(CString("hanim_humanoid"));
HAnimHumanoid29.X3DNode::setName(CString("humanoid"));
HAnimHumanoid29.setVersion(CString("1.0"));
MetadataSet& MetadataSet30 =  MetadataSet();
MetadataSet30.X3DNode::setName(CString("HAnimHumanoid.info"));
MetadataSet30.X3DNode::setReference(CString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"));
MetadataString& MetadataString31 =  MetadataString();
MetadataString31.X3DNode::setName(CString("authorEmail"));
MetadataSet30.setValue((X3DNode *)&MetadataString31);

MetadataString& MetadataString32 =  MetadataString();
MetadataString32.X3DNode::setName(CString("authorName"));
MetadataSet30.setValue((X3DNode *)&MetadataString32);

MetadataString& MetadataString33 =  MetadataString();
MetadataString33.X3DNode::setName(CString("copyright"));
MetadataSet30.setValue((X3DNode *)&MetadataString33);

MetadataString& MetadataString34 =  MetadataString();
MetadataString34.X3DNode::setName(CString("humanoidVersion"));
MetadataSet30.setValue((X3DNode *)&MetadataString34);

MetadataString& MetadataString35 =  MetadataString();
MetadataString35.X3DNode::setName(CString("usageRestrictions"));
MetadataSet30.setValue((X3DNode *)&MetadataString35);

HAnimHumanoid29.setMetadata(&MetadataSet30);

HAnimJoint& HAnimJoint36 =  HAnimJoint();
HAnimJoint36.setDEF(CString("hanim_HumanoidRoot"));
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
Coordinate44.setDEF(CString("points"));
Coordinate44.setPoint(new float[]{0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0}, 18);
IndexedFaceSet43.setCoord(&Coordinate44);

Shape40.setGeometry(&IndexedFaceSet43);

Transform39.addChild(&Shape40);

HAnimSegment38.addChild(&Transform39);

HAnimJoint37.addChildren(&HAnimSegment38);

HAnimJoint& HAnimJoint45 =  HAnimJoint();
HAnimJoint45.setDEF(CString("hanim_l_hip"));
HAnimJoint45.X3DNode::setName(CString("l_hip"));
HAnimJoint45.setCenter(new float[]{0.0961,0.9124,-0.0001});
HAnimSegment& HAnimSegment46 =  HAnimSegment();
HAnimSegment46.setDEF(CString("hanim_l_thigh"));
HAnimSegment46.X3DNode::setName(CString("l_thigh"));
Transform& Transform47 =  Transform();
Transform47.setTranslation(new float[]{0.0961,0.9124,-0.0001});
Shape& Shape48 =  Shape();
Shape48.setUSE(CString("DiamondShape"));
Transform47.addChild(&Shape48);

HAnimSegment46.addChild(&Transform47);

HAnimSite& HAnimSite49 =  HAnimSite();
HAnimSite49.setDEF(CString("hanim_l_knee_crease_pt"));
HAnimSite49.X3DNode::setName(CString("l_knee_crease_pt"));
HAnimSite49.setTranslation(new float[]{0.0993,0.4881,-0.0309});
HAnimSegment46.addChild(&HAnimSite49);

HAnimSite& HAnimSite50 =  HAnimSite();
HAnimSite50.setDEF(CString("hanim_l_femoral_lateral_epicn_pt"));
HAnimSite50.X3DNode::setName(CString("l_femoral_lateral_epicn_pt"));
HAnimSite50.setTranslation(new float[]{0.1598,0.4967,0.0297});
HAnimSegment46.addChild(&HAnimSite50);

HAnimSite& HAnimSite51 =  HAnimSite();
HAnimSite51.setDEF(CString("hanim_l_femoral_medial_epicn_pt"));
HAnimSite51.X3DNode::setName(CString("l_femoral_medial_epicn_pt"));
HAnimSite51.setTranslation(new float[]{0.0398,0.4946,0.0303});
HAnimSegment46.addChild(&HAnimSite51);

HAnimJoint45.addChildren(&HAnimSegment46);

HAnimJoint& HAnimJoint52 =  HAnimJoint();
HAnimJoint52.setDEF(CString("hanim_l_knee"));
HAnimJoint52.X3DNode::setName(CString("l_knee"));
HAnimJoint52.setCenter(new float[]{0.104,0.4867,0.0308});
HAnimSegment& HAnimSegment53 =  HAnimSegment();
HAnimSegment53.setDEF(CString("hanim_l_calf"));
HAnimSegment53.X3DNode::setName(CString("l_calf"));
Transform& Transform54 =  Transform();
Transform54.setTranslation(new float[]{0.104,0.4867,0.0308});
Shape& Shape55 =  Shape();
Shape55.setUSE(CString("DiamondShape"));
Transform54.addChild(&Shape55);

HAnimSegment53.addChild(&Transform54);

HAnimJoint52.addChildren(&HAnimSegment53);

HAnimJoint& HAnimJoint56 =  HAnimJoint();
HAnimJoint56.setDEF(CString("hanim_l_ankle"));
HAnimJoint56.X3DNode::setName(CString("l_ankle"));
HAnimJoint56.setCenter(new float[]{0.1101,0.0656,-0.0736});
HAnimSegment& HAnimSegment57 =  HAnimSegment();
HAnimSegment57.setDEF(CString("hanim_l_hindfoot"));
HAnimSegment57.X3DNode::setName(CString("l_hindfoot"));
Transform& Transform58 =  Transform();
Transform58.setTranslation(new float[]{0.1101,0.0656,-0.0736});
Shape& Shape59 =  Shape();
Shape59.setUSE(CString("DiamondShape"));
Transform58.addChild(&Shape59);

HAnimSegment57.addChild(&Transform58);

HAnimSite& HAnimSite60 =  HAnimSite();
HAnimSite60.setDEF(CString("hanim_l_lateral_malleolus_pt"));
HAnimSite60.X3DNode::setName(CString("l_lateral_malleolus_pt"));
HAnimSite60.setTranslation(new float[]{0.1308,0.0597,-0.1032});
HAnimSegment57.addChild(&HAnimSite60);

HAnimSite& HAnimSite61 =  HAnimSite();
HAnimSite61.setDEF(CString("hanim_l_medial_malleolus_pt"));
HAnimSite61.X3DNode::setName(CString("l_medial_malleolus_pt"));
HAnimSite61.setTranslation(new float[]{0.089,0.0716,-0.0881});
HAnimSegment57.addChild(&HAnimSite61);

HAnimSite& HAnimSite62 =  HAnimSite();
HAnimSite62.setDEF(CString("hanim_l_sphyrion_pt"));
HAnimSite62.X3DNode::setName(CString("l_sphyrion_pt"));
HAnimSite62.setTranslation(new float[]{0.089,0.0575,-0.0943});
HAnimSegment57.addChild(&HAnimSite62);

HAnimSite& HAnimSite63 =  HAnimSite();
HAnimSite63.setDEF(CString("hanim_l_calcaneous_post_pt"));
HAnimSite63.X3DNode::setName(CString("l_calcaneous_post_pt"));
HAnimSite63.setTranslation(new float[]{0.0974,0.0259,-0.1171});
HAnimSegment57.addChild(&HAnimSite63);

HAnimJoint56.addChildren(&HAnimSegment57);

HAnimJoint& HAnimJoint64 =  HAnimJoint();
HAnimJoint64.setDEF(CString("hanim_l_midtarsal"));
HAnimJoint64.X3DNode::setName(CString("l_midtarsal"));
HAnimJoint64.setCenter(new float[]{0.1086,0.0001,0.0368});
HAnimSegment& HAnimSegment65 =  HAnimSegment();
HAnimSegment65.setDEF(CString("hanim_l_middistal"));
HAnimSegment65.X3DNode::setName(CString("l_middistal"));
HAnimSite& HAnimSite66 =  HAnimSite();
HAnimSite66.setDEF(CString("hanim_l_middistal_tip"));
HAnimSite66.X3DNode::setName(CString("l_middistal_tip"));
HAnimSite66.setTranslation(new float[]{0.1354,0.0016,0.1476});
HAnimSegment65.addChild(&HAnimSite66);

HAnimSite& HAnimSite67 =  HAnimSite();
HAnimSite67.setDEF(CString("hanim_l_metatarsal_pha5_pt"));
HAnimSite67.X3DNode::setName(CString("l_metatarsal_pha5_pt"));
HAnimSite67.setTranslation(new float[]{0.1825,0.007,0.0928});
HAnimSegment65.addChild(&HAnimSite67);

HAnimSite& HAnimSite68 =  HAnimSite();
HAnimSite68.setDEF(CString("hanim_l_metatarsal_pha1_pt"));
HAnimSite68.X3DNode::setName(CString("l_metatarsal_pha1_pt"));
HAnimSite68.setTranslation(new float[]{0.0816,0.0232,0.0106});
HAnimSegment65.addChild(&HAnimSite68);

HAnimSite& HAnimSite69 =  HAnimSite();
HAnimSite69.setDEF(CString("hanim_l_digit2_pt"));
HAnimSite69.X3DNode::setName(CString("l_digit2_pt"));
HAnimSite69.setTranslation(new float[]{0.1195,0.0079,0.1433});
HAnimSegment65.addChild(&HAnimSite69);

HAnimJoint64.addChildren(&HAnimSegment65);

HAnimJoint56.addChildren(&HAnimJoint64);

HAnimJoint52.addChildren(&HAnimJoint56);

HAnimJoint45.addChildren(&HAnimJoint52);

HAnimJoint37.addChildren(&HAnimJoint45);

HAnimJoint& HAnimJoint70 =  HAnimJoint();
HAnimJoint70.setDEF(CString("hanim_r_hip"));
HAnimJoint70.X3DNode::setName(CString("r_hip"));
HAnimJoint70.setCenter(new float[]{-0.095,0.9171,0.0029});
HAnimSegment& HAnimSegment71 =  HAnimSegment();
HAnimSegment71.setDEF(CString("hanim_r_thigh"));
HAnimSegment71.X3DNode::setName(CString("r_thigh"));
Transform& Transform72 =  Transform();
Transform72.setTranslation(new float[]{-0.095,0.9171,0.0029});
Shape& Shape73 =  Shape();
Shape73.setUSE(CString("DiamondShape"));
Transform72.addChild(&Shape73);

HAnimSegment71.addChild(&Transform72);

HAnimSite& HAnimSite74 =  HAnimSite();
HAnimSite74.setDEF(CString("hanim_r_knee_crease_pt"));
HAnimSite74.X3DNode::setName(CString("r_knee_crease_pt"));
HAnimSite74.setTranslation(new float[]{-0.0825,0.4932,-0.0326});
HAnimSegment71.addChild(&HAnimSite74);

HAnimSite& HAnimSite75 =  HAnimSite();
HAnimSite75.setDEF(CString("hanim_r_femoral_lateral_epicn_pt"));
HAnimSite75.X3DNode::setName(CString("r_femoral_lateral_epicn_pt"));
HAnimSite75.setTranslation(new float[]{-0.1421,0.4992,0.031});
HAnimSegment71.addChild(&HAnimSite75);

HAnimSite& HAnimSite76 =  HAnimSite();
HAnimSite76.setDEF(CString("hanim_r_femoral_medial_epicn_pt"));
HAnimSite76.X3DNode::setName(CString("r_femoral_medial_epicn_pt"));
HAnimSite76.setTranslation(new float[]{-0.0221,0.5014,0.0289});
HAnimSegment71.addChild(&HAnimSite76);

HAnimJoint70.addChildren(&HAnimSegment71);

HAnimJoint& HAnimJoint77 =  HAnimJoint();
HAnimJoint77.setDEF(CString("hanim_r_knee"));
HAnimJoint77.X3DNode::setName(CString("r_knee"));
HAnimJoint77.setCenter(new float[]{-0.0867,0.4913,0.0318});
HAnimSegment& HAnimSegment78 =  HAnimSegment();
HAnimSegment78.setDEF(CString("hanim_r_calf"));
HAnimSegment78.X3DNode::setName(CString("r_calf"));
Transform& Transform79 =  Transform();
Transform79.setTranslation(new float[]{-0.0867,0.4913,0.0318});
Shape& Shape80 =  Shape();
Shape80.setUSE(CString("DiamondShape"));
Transform79.addChild(&Shape80);

HAnimSegment78.addChild(&Transform79);

HAnimJoint77.addChildren(&HAnimSegment78);

HAnimJoint& HAnimJoint81 =  HAnimJoint();
HAnimJoint81.setDEF(CString("hanim_r_ankle"));
HAnimJoint81.X3DNode::setName(CString("r_ankle"));
HAnimJoint81.setCenter(new float[]{-0.0801,0.0712,-0.0766});
HAnimSegment& HAnimSegment82 =  HAnimSegment();
HAnimSegment82.setDEF(CString("hanim_r_hindfoot"));
HAnimSegment82.X3DNode::setName(CString("r_hindfoot"));
Transform& Transform83 =  Transform();
Transform83.setTranslation(new float[]{-0.0801,0.0712,-0.0766});
Shape& Shape84 =  Shape();
Shape84.setUSE(CString("DiamondShape"));
Transform83.addChild(&Shape84);

HAnimSegment82.addChild(&Transform83);

HAnimSite& HAnimSite85 =  HAnimSite();
HAnimSite85.setDEF(CString("hanim_r_lateral_malleolus_pt"));
HAnimSite85.X3DNode::setName(CString("r_lateral_malleolus_pt"));
HAnimSite85.setTranslation(new float[]{-0.1006,0.0658,-0.1075});
HAnimSegment82.addChild(&HAnimSite85);

HAnimSite& HAnimSite86 =  HAnimSite();
HAnimSite86.setDEF(CString("hanim_r_medial_malleolus_pt"));
HAnimSite86.X3DNode::setName(CString("r_medial_malleolus_pt"));
HAnimSite86.setTranslation(new float[]{-0.0591,0.076,-0.0928});
HAnimSegment82.addChild(&HAnimSite86);

HAnimSite& HAnimSite87 =  HAnimSite();
HAnimSite87.setDEF(CString("hanim_r_sphyrion_pt"));
HAnimSite87.X3DNode::setName(CString("r_sphyrion_pt"));
HAnimSite87.setTranslation(new float[]{-0.0603,0.061,-0.1002});
HAnimSegment82.addChild(&HAnimSite87);

HAnimSite& HAnimSite88 =  HAnimSite();
HAnimSite88.setDEF(CString("hanim_r_calcaneous_post_pt"));
HAnimSite88.X3DNode::setName(CString("r_calcaneous_post_pt"));
HAnimSite88.setTranslation(new float[]{-0.0692,0.0297,-0.1221});
HAnimSegment82.addChild(&HAnimSite88);

HAnimJoint81.addChildren(&HAnimSegment82);

HAnimJoint& HAnimJoint89 =  HAnimJoint();
HAnimJoint89.setDEF(CString("hanim_r_midtarsal"));
HAnimJoint89.X3DNode::setName(CString("r_midtarsal"));
HAnimJoint89.setCenter(new float[]{-0.0801,0,0.0368});
HAnimSegment& HAnimSegment90 =  HAnimSegment();
HAnimSegment90.setDEF(CString("hanim_r_middistal"));
HAnimSegment90.X3DNode::setName(CString("r_middistal"));
HAnimSite& HAnimSite91 =  HAnimSite();
HAnimSite91.setDEF(CString("hanim_r_middistal_tip"));
HAnimSite91.X3DNode::setName(CString("r_middistal_tip"));
HAnimSite91.setTranslation(new float[]{-0.1043,-0.0227,0.145});
HAnimSegment90.addChild(&HAnimSite91);

HAnimSite& HAnimSite92 =  HAnimSite();
HAnimSite92.setDEF(CString("hanim_r_metatarsal_pha5_pt"));
HAnimSite92.X3DNode::setName(CString("r_metatarsal_pha5_pt"));
HAnimSite92.setTranslation(new float[]{-0.1523,0.0166,0.0895});
HAnimSegment90.addChild(&HAnimSite92);

HAnimSite& HAnimSite93 =  HAnimSite();
HAnimSite93.setDEF(CString("hanim_r_metatarsal_pha1_pt"));
HAnimSite93.X3DNode::setName(CString("r_metatarsal_pha1_pt"));
HAnimSite93.setTranslation(new float[]{-0.0521,0.026,0.0127});
HAnimSegment90.addChild(&HAnimSite93);

HAnimSite& HAnimSite94 =  HAnimSite();
HAnimSite94.setDEF(CString("hanim_r_digit2_pt"));
HAnimSite94.X3DNode::setName(CString("r_digit2_pt"));
HAnimSite94.setTranslation(new float[]{-0.0883,0.0134,0.1383});
HAnimSegment90.addChild(&HAnimSite94);

HAnimJoint89.addChildren(&HAnimSegment90);

HAnimJoint81.addChildren(&HAnimJoint89);

HAnimJoint77.addChildren(&HAnimJoint81);

HAnimJoint70.addChildren(&HAnimJoint77);

HAnimJoint37.addChildren(&HAnimJoint70);

HAnimJoint36.addChildren(&HAnimJoint37);

HAnimJoint& HAnimJoint95 =  HAnimJoint();
HAnimJoint95.setDEF(CString("hanim_vl1"));
HAnimJoint95.X3DNode::setName(CString("vl1"));
HAnimJoint95.setCenter(new float[]{-0.00405,1.07,-0.0275});
HAnimSegment& HAnimSegment96 =  HAnimSegment();
HAnimSegment96.setDEF(CString("hanim_l1"));
HAnimSegment96.X3DNode::setName(CString("l1"));
HAnimJoint95.addChildren(&HAnimSegment96);

HAnimJoint& HAnimJoint97 =  HAnimJoint();
HAnimJoint97.setDEF(CString("hanim_l_shoulder"));
HAnimJoint97.X3DNode::setName(CString("l_shoulder"));
HAnimJoint97.setCenter(new float[]{0.2029,1.4376,-0.0387});
HAnimSegment& HAnimSegment98 =  HAnimSegment();
HAnimSegment98.setDEF(CString("hanim_l_upperarm"));
HAnimSegment98.X3DNode::setName(CString("l_upperarm"));
Transform& Transform99 =  Transform();
Transform99.setTranslation(new float[]{0.2029,1.4376,-0.0387});
Shape& Shape100 =  Shape();
Shape100.setUSE(CString("DiamondShape"));
Transform99.addChild(&Shape100);

HAnimSegment98.addChild(&Transform99);

Transform& Transform101 =  Transform();
Transform101.setDEF(CString("l_upperarm_adjust"));
Transform101.setTranslation(new float[]{0.2029,1.4376,-0.0387});
Transform101.setRotation(new float[]{1,0,0,0.119});
Transform101.setCenter(new float[]{0.182,1.22,-0.047});
HAnimSegment98.addChild(&Transform101);

HAnimSite& HAnimSite102 =  HAnimSite();
HAnimSite102.setDEF(CString("hanim_l_humeral_lateral_epicn_pt"));
HAnimSite102.X3DNode::setName(CString("l_humeral_lateral_epicn_pt"));
HAnimSite102.setTranslation(new float[]{0.228,1.1482,-0.11});
HAnimSegment98.addChild(&HAnimSite102);

HAnimJoint97.addChildren(&HAnimSegment98);

HAnimJoint& HAnimJoint103 =  HAnimJoint();
HAnimJoint103.setDEF(CString("hanim_l_elbow"));
HAnimJoint103.X3DNode::setName(CString("l_elbow"));
HAnimJoint103.setCenter(new float[]{0.2014,1.1357,-0.0682});
HAnimSegment& HAnimSegment104 =  HAnimSegment();
HAnimSegment104.setDEF(CString("hanim_l_forearm"));
HAnimSegment104.X3DNode::setName(CString("l_forearm"));
Transform& Transform105 =  Transform();
Transform105.setTranslation(new float[]{0.2014,1.1357,-0.0682});
Shape& Shape106 =  Shape();
Shape106.setUSE(CString("DiamondShape"));
Transform105.addChild(&Shape106);

HAnimSegment104.addChild(&Transform105);

Transform& Transform107 =  Transform();
Transform107.setDEF(CString("l_forearm_adjust"));
Transform107.setTranslation(new float[]{0.2014,1.1357,-0.0682});
Transform107.setRotation(new float[]{-1,0,0,0.1});
Transform107.setCenter(new float[]{0.198,0.961,-0.0405});
HAnimSegment104.addChild(&Transform107);

HAnimSite& HAnimSite108 =  HAnimSite();
HAnimSite108.setDEF(CString("hanim_l_radial_styloid_pt"));
HAnimSite108.X3DNode::setName(CString("l_radial_styloid_pt"));
HAnimSite108.setTranslation(new float[]{0.1901,0.8645,-0.0415});
HAnimSegment104.addChild(&HAnimSite108);

HAnimSite& HAnimSite109 =  HAnimSite();
HAnimSite109.setDEF(CString("hanim_l_olecranon_pt"));
HAnimSite109.X3DNode::setName(CString("l_olecranon_pt"));
HAnimSite109.setTranslation(new float[]{-0.1962,1.1375,-0.1123});
HAnimSegment104.addChild(&HAnimSite109);

HAnimSite& HAnimSite110 =  HAnimSite();
HAnimSite110.setDEF(CString("hanim_l_humeral_medial_epicn_pt"));
HAnimSite110.X3DNode::setName(CString("l_humeral_medial_epicn_pt"));
HAnimSite110.setTranslation(new float[]{0.1735,1.1272,-0.1113});
HAnimSegment104.addChild(&HAnimSite110);

HAnimSite& HAnimSite111 =  HAnimSite();
HAnimSite111.setDEF(CString("hanim_l_radiale_pt"));
HAnimSite111.X3DNode::setName(CString("l_radiale_pt"));
HAnimSite111.setTranslation(new float[]{0.2182,1.1212,-0.1167});
HAnimSegment104.addChild(&HAnimSite111);

HAnimJoint103.addChildren(&HAnimSegment104);

HAnimJoint& HAnimJoint112 =  HAnimJoint();
HAnimJoint112.setDEF(CString("hanim_l_wrist"));
HAnimJoint112.X3DNode::setName(CString("l_wrist"));
HAnimJoint112.setCenter(new float[]{0.1984,0.8663,-0.0583});
HAnimSegment& HAnimSegment113 =  HAnimSegment();
HAnimSegment113.setDEF(CString("hanim_l_hand"));
HAnimSegment113.X3DNode::setName(CString("l_hand"));
Transform& Transform114 =  Transform();
Transform114.setTranslation(new float[]{0.1984,0.8663,-0.0583});
Shape& Shape115 =  Shape();
Shape115.setUSE(CString("DiamondShape"));
Transform114.addChild(&Shape115);

HAnimSegment113.addChild(&Transform114);

Transform& Transform116 =  Transform();
Transform116.setDEF(CString("l_hand_adjust"));
Transform116.setTranslation(new float[]{0.1984,0.8663,-0.0583});
Transform116.setRotation(new float[]{-0.06361,-0.9967,0.04988,1.333});
Transform116.setCenter(new float[]{0.213,0.811,-0.0338});
HAnimSegment113.addChild(&Transform116);

HAnimSite& HAnimSite117 =  HAnimSite();
HAnimSite117.setDEF(CString("hanim_l_hand_tip"));
HAnimSite117.X3DNode::setName(CString("l_hand_tip"));
HAnimSite117.setTranslation(new float[]{0.208,0.6731,-0.0491});
HAnimSegment113.addChild(&HAnimSite117);

HAnimSite& HAnimSite118 =  HAnimSite();
HAnimSite118.setDEF(CString("hanim_l_metacarpal_pha2_pt"));
HAnimSite118.X3DNode::setName(CString("l_metacarpal_pha2_pt"));
HAnimSite118.setTranslation(new float[]{0.2009,0.8139,-0.0237});
HAnimSegment113.addChild(&HAnimSite118);

HAnimSite& HAnimSite119 =  HAnimSite();
HAnimSite119.setDEF(CString("hanim_l_dactylion_pt"));
HAnimSite119.X3DNode::setName(CString("l_dactylion_pt"));
HAnimSite119.setTranslation(new float[]{0.2056,0.6743,-0.0482});
HAnimSegment113.addChild(&HAnimSite119);

HAnimSite& HAnimSite120 =  HAnimSite();
HAnimSite120.setDEF(CString("hanim_l_ulnar_styloid_pt"));
HAnimSite120.X3DNode::setName(CString("l_ulnar_styloid_pt"));
HAnimSite120.setTranslation(new float[]{-0.2142,0.8529,-0.0648});
HAnimSegment113.addChild(&HAnimSite120);

HAnimSite& HAnimSite121 =  HAnimSite();
HAnimSite121.setDEF(CString("hanim_l_metacarpal_pha5_pt"));
HAnimSite121.X3DNode::setName(CString("l_metacarpal_pha5_pt"));
HAnimSite121.setTranslation(new float[]{0.1929,0.786,-0.1122});
HAnimSegment113.addChild(&HAnimSite121);

HAnimJoint112.addChildren(&HAnimSegment113);

HAnimJoint103.addChildren(&HAnimJoint112);

HAnimJoint97.addChildren(&HAnimJoint103);

HAnimJoint95.addChildren(&HAnimJoint97);

HAnimJoint& HAnimJoint122 =  HAnimJoint();
HAnimJoint122.setDEF(CString("hanim_r_shoulder"));
HAnimJoint122.X3DNode::setName(CString("r_shoulder"));
HAnimJoint122.setCenter(new float[]{-0.1907,1.4407,-0.0325});
HAnimSegment& HAnimSegment123 =  HAnimSegment();
HAnimSegment123.setDEF(CString("hanim_r_upperarm"));
HAnimSegment123.X3DNode::setName(CString("r_upperarm"));
Transform& Transform124 =  Transform();
Transform124.setTranslation(new float[]{-0.1907,1.4407,-0.0325});
Shape& Shape125 =  Shape();
Shape125.setUSE(CString("DiamondShape"));
Transform124.addChild(&Shape125);

HAnimSegment123.addChild(&Transform124);

Transform& Transform126 =  Transform();
Transform126.setDEF(CString("r_upperarm_adjust"));
Transform126.setTranslation(new float[]{-0.1907,1.4407,-0.0325});
Transform126.setRotation(new float[]{1,0,0,0.0836});
Transform126.setCenter(new float[]{-0.182,1.22,-0.047});
HAnimSegment123.addChild(&Transform126);

HAnimSite& HAnimSite127 =  HAnimSite();
HAnimSite127.setDEF(CString("hanim_r_humeral_lateral_epicn_pt"));
HAnimSite127.X3DNode::setName(CString("r_humeral_lateral_epicn_pt"));
HAnimSite127.setTranslation(new float[]{-0.2224,1.1517,-0.1033});
HAnimSegment123.addChild(&HAnimSite127);

HAnimJoint122.addChildren(&HAnimSegment123);

HAnimJoint& HAnimJoint128 =  HAnimJoint();
HAnimJoint128.setDEF(CString("hanim_r_elbow"));
HAnimJoint128.X3DNode::setName(CString("r_elbow"));
HAnimJoint128.setCenter(new float[]{-0.1949,1.1388,-0.062});
HAnimSegment& HAnimSegment129 =  HAnimSegment();
HAnimSegment129.setDEF(CString("hanim_r_forearm"));
HAnimSegment129.X3DNode::setName(CString("r_forearm"));
Transform& Transform130 =  Transform();
Transform130.setTranslation(new float[]{-0.1949,1.1388,-0.062});
Shape& Shape131 =  Shape();
Shape131.setUSE(CString("DiamondShape"));
Transform130.addChild(&Shape131);

HAnimSegment129.addChild(&Transform130);

Transform& Transform132 =  Transform();
Transform132.setDEF(CString("r_forearm_adjust"));
Transform132.setTranslation(new float[]{-0.1949,1.1388,-0.062});
Transform132.setRotation(new float[]{-1,0,0,0.1254});
Transform132.setCenter(new float[]{-0.198,0.961,-0.0397});
HAnimSegment129.addChild(&Transform132);

HAnimSite& HAnimSite133 =  HAnimSite();
HAnimSite133.setDEF(CString("hanim_r_radial_styloid_pt"));
HAnimSite133.X3DNode::setName(CString("r_radial_styloid_pt"));
HAnimSite133.setTranslation(new float[]{-0.1884,0.8676,-0.036});
HAnimSegment129.addChild(&HAnimSite133);

HAnimSite& HAnimSite134 =  HAnimSite();
HAnimSite134.setDEF(CString("hanim_r_olecranon_pt"));
HAnimSite134.X3DNode::setName(CString("r_olecranon_pt"));
HAnimSite134.setTranslation(new float[]{-0.1907,1.1405,-0.1065});
HAnimSegment129.addChild(&HAnimSite134);

HAnimSite& HAnimSite135 =  HAnimSite();
HAnimSite135.setDEF(CString("hanim_r_humeral_medial_epicn_pt"));
HAnimSite135.X3DNode::setName(CString("r_humeral_medial_epicn_pt"));
HAnimSite135.setTranslation(new float[]{-0.168,1.1298,-0.1062});
HAnimSegment129.addChild(&HAnimSite135);

HAnimSite& HAnimSite136 =  HAnimSite();
HAnimSite136.setDEF(CString("hanim_r_radiale_pt"));
HAnimSite136.X3DNode::setName(CString("r_radiale_pt"));
HAnimSite136.setTranslation(new float[]{-0.213,1.1305,-0.1091});
HAnimSegment129.addChild(&HAnimSite136);

HAnimJoint128.addChildren(&HAnimSegment129);

HAnimJoint& HAnimJoint137 =  HAnimJoint();
HAnimJoint137.setDEF(CString("hanim_r_wrist"));
HAnimJoint137.X3DNode::setName(CString("r_wrist"));
HAnimJoint137.setCenter(new float[]{-0.1959,0.8694,-0.0521});
HAnimSegment& HAnimSegment138 =  HAnimSegment();
HAnimSegment138.setDEF(CString("hanim_r_hand"));
HAnimSegment138.X3DNode::setName(CString("r_hand"));
Transform& Transform139 =  Transform();
Transform139.setTranslation(new float[]{-0.1959,0.8694,-0.0521});
Shape& Shape140 =  Shape();
Shape140.setUSE(CString("DiamondShape"));
Transform139.addChild(&Shape140);

HAnimSegment138.addChild(&Transform139);

Transform& Transform141 =  Transform();
Transform141.setDEF(CString("r_hand_adjust"));
Transform141.setRotation(new float[]{-0.09024,0.994,-0.0624,1.216});
Transform141.setCenter(new float[]{-0.217,0.811,-0.0338});
HAnimSegment138.addChild(&Transform141);

HAnimSite& HAnimSite142 =  HAnimSite();
HAnimSite142.setDEF(CString("hanim_r_hand_tip"));
HAnimSite142.X3DNode::setName(CString("r_hand_tip"));
HAnimSite142.setTranslation(new float[]{-0.1969,0.6758,-0.0427});
HAnimSegment138.addChild(&HAnimSite142);

HAnimSite& HAnimSite143 =  HAnimSite();
HAnimSite143.setDEF(CString("hanim_r_metacarpal_pha2_pt"));
HAnimSite143.X3DNode::setName(CString("r_metacarpal_pha2_pt"));
HAnimSite143.setTranslation(new float[]{-0.1977,0.8169,-0.0177});
HAnimSegment138.addChild(&HAnimSite143);

HAnimSite& HAnimSite144 =  HAnimSite();
HAnimSite144.setDEF(CString("hanim_r_dactylion_pt"));
HAnimSite144.X3DNode::setName(CString("r_dactylion_pt"));
HAnimSite144.setTranslation(new float[]{-0.1941,0.6772,-0.0423});
HAnimSegment138.addChild(&HAnimSite144);

HAnimSite& HAnimSite145 =  HAnimSite();
HAnimSite145.setDEF(CString("hanim_r_ulnar_styloid_pt"));
HAnimSite145.X3DNode::setName(CString("r_ulnar_styloid_pt"));
HAnimSite145.setTranslation(new float[]{-0.2117,0.8562,-0.0584});
HAnimSegment138.addChild(&HAnimSite145);

HAnimSite& HAnimSite146 =  HAnimSite();
HAnimSite146.setDEF(CString("hanim_r_metacarpal_pha5_pt"));
HAnimSite146.X3DNode::setName(CString("r_metacarpal_pha5_pt"));
HAnimSite146.setTranslation(new float[]{-0.1929,0.789,-0.1064});
HAnimSegment138.addChild(&HAnimSite146);

HAnimJoint137.addChildren(&HAnimSegment138);

HAnimJoint128.addChildren(&HAnimJoint137);

HAnimJoint122.addChildren(&HAnimJoint128);

HAnimJoint95.addChildren(&HAnimJoint122);

HAnimJoint& HAnimJoint147 =  HAnimJoint();
HAnimJoint147.setDEF(CString("hanim_vc4"));
HAnimJoint147.X3DNode::setName(CString("vc4"));
HAnimJoint147.setCenter(new float[]{0,1.43,-0.0458});
HAnimSegment& HAnimSegment148 =  HAnimSegment();
HAnimSegment148.setDEF(CString("hanim_c4"));
HAnimSegment148.X3DNode::setName(CString("c4"));
HAnimJoint147.addChildren(&HAnimSegment148);

HAnimJoint95.addChildren(&HAnimJoint147);

HAnimJoint36.addChildren(&HAnimJoint95);

HAnimJoint& HAnimJoint149 =  HAnimJoint();
HAnimJoint149.setDEF(CString("hanim_vl5"));
HAnimJoint149.X3DNode::setName(CString("vl5"));
HAnimJoint149.setCenter(new float[]{0.0028,1.0568,-0.0776});
HAnimJoint& HAnimJoint150 =  HAnimJoint();
HAnimJoint150.setDEF(CString("hanim_skullbase"));
HAnimJoint150.X3DNode::setName(CString("skullbase"));
HAnimJoint150.setCenter(new float[]{0.0044,1.6209,0.0236});
HAnimSegment& HAnimSegment151 =  HAnimSegment();
HAnimSegment151.setDEF(CString("hanim_skull"));
HAnimSegment151.X3DNode::setName(CString("skull"));
Transform& Transform152 =  Transform();
Transform152.setTranslation(new float[]{0.0044,1.6209,0.0236});
Shape& Shape153 =  Shape();
Shape153.setUSE(CString("DiamondShape"));
Transform152.addChild(&Shape153);

HAnimSegment151.addChild(&Transform152);

HAnimSite& HAnimSite154 =  HAnimSite();
HAnimSite154.setDEF(CString("hanim_skull_tip"));
HAnimSite154.X3DNode::setName(CString("skull_tip"));
HAnimSite154.setTranslation(new float[]{0.005,1.7504,0.0055});
HAnimSegment151.addChild(&HAnimSite154);

HAnimSite& HAnimSite155 =  HAnimSite();
HAnimSite155.setDEF(CString("hanim_sellion_pt"));
HAnimSite155.X3DNode::setName(CString("sellion_pt"));
HAnimSite155.setTranslation(new float[]{0.0058,1.6316,0.0852});
HAnimSegment151.addChild(&HAnimSite155);

HAnimSite& HAnimSite156 =  HAnimSite();
HAnimSite156.setDEF(CString("hanim_r_infraorbitale_pt"));
HAnimSite156.X3DNode::setName(CString("r_infraorbitale_pt"));
HAnimSite156.setTranslation(new float[]{-0.0237,1.6171,0.0752});
HAnimSegment151.addChild(&HAnimSite156);

HAnimSite& HAnimSite157 =  HAnimSite();
HAnimSite157.setDEF(CString("hanim_l_infraorbitale_pt"));
HAnimSite157.X3DNode::setName(CString("l_infraorbitale_pt"));
HAnimSite157.setTranslation(new float[]{0.0341,1.6171,0.0752});
HAnimSegment151.addChild(&HAnimSite157);

HAnimSite& HAnimSite158 =  HAnimSite();
HAnimSite158.setDEF(CString("hanim_supramenton_pt"));
HAnimSite158.X3DNode::setName(CString("supramenton_pt"));
HAnimSite158.setTranslation(new float[]{0.0061,1.541,0.0805});
HAnimSegment151.addChild(&HAnimSite158);

HAnimSite& HAnimSite159 =  HAnimSite();
HAnimSite159.setDEF(CString("hanim_r_tragion_pt"));
HAnimSite159.X3DNode::setName(CString("r_tragion_pt"));
HAnimSite159.setTranslation(new float[]{-0.0646,1.6347,0.0302});
HAnimSegment151.addChild(&HAnimSite159);

HAnimSite& HAnimSite160 =  HAnimSite();
HAnimSite160.setDEF(CString("hanim_r_gonion_pt"));
HAnimSite160.X3DNode::setName(CString("r_gonion_pt"));
HAnimSite160.setTranslation(new float[]{-0.052,1.5529,0.0347});
HAnimSegment151.addChild(&HAnimSite160);

HAnimSite& HAnimSite161 =  HAnimSite();
HAnimSite161.setDEF(CString("hanim_l_tragion_pt"));
HAnimSite161.X3DNode::setName(CString("l_tragion_pt"));
HAnimSite161.setTranslation(new float[]{0.0739,1.6348,0.0282});
HAnimSegment151.addChild(&HAnimSite161);

HAnimSite& HAnimSite162 =  HAnimSite();
HAnimSite162.setDEF(CString("hanim_l_gonion_pt"));
HAnimSite162.X3DNode::setName(CString("l_gonion_pt"));
HAnimSite162.setTranslation(new float[]{0.0631,1.553,0.033});
HAnimSegment151.addChild(&HAnimSite162);

HAnimSite& HAnimSite163 =  HAnimSite();
HAnimSite163.setDEF(CString("hanim_nuchale_pt"));
HAnimSite163.X3DNode::setName(CString("nuchale_pt"));
HAnimSite163.setTranslation(new float[]{0.0039,1.5972,-0.0796});
HAnimSegment151.addChild(&HAnimSite163);

HAnimJoint150.addChildren(&HAnimSegment151);

HAnimJoint149.addChildren(&HAnimJoint150);

HAnimJoint36.addChildren(&HAnimJoint149);

HAnimHumanoid29.setSkeleton(&HAnimJoint36);

HAnimJoint& HAnimJoint164 =  HAnimJoint();
HAnimJoint164.setUSE(CString("hanim_HumanoidRoot"));
HAnimHumanoid29.setJoints(&HAnimJoint164);

HAnimJoint& HAnimJoint165 =  HAnimJoint();
HAnimJoint165.setUSE(CString("hanim_sacroiliac"));
HAnimHumanoid29.setJoints(&HAnimJoint165);

HAnimJoint& HAnimJoint166 =  HAnimJoint();
HAnimJoint166.setUSE(CString("hanim_vl1"));
HAnimHumanoid29.setJoints(&HAnimJoint166);

HAnimJoint& HAnimJoint167 =  HAnimJoint();
HAnimJoint167.setUSE(CString("hanim_vc4"));
HAnimHumanoid29.setJoints(&HAnimJoint167);

HAnimJoint& HAnimJoint168 =  HAnimJoint();
HAnimJoint168.setUSE(CString("hanim_skullbase"));
HAnimHumanoid29.setJoints(&HAnimJoint168);

HAnimJoint& HAnimJoint169 =  HAnimJoint();
HAnimJoint169.setUSE(CString("hanim_vl5"));
HAnimHumanoid29.setJoints(&HAnimJoint169);

HAnimJoint& HAnimJoint170 =  HAnimJoint();
HAnimJoint170.setUSE(CString("hanim_l_ankle"));
HAnimHumanoid29.setJoints(&HAnimJoint170);

HAnimJoint& HAnimJoint171 =  HAnimJoint();
HAnimJoint171.setUSE(CString("hanim_r_ankle"));
HAnimHumanoid29.setJoints(&HAnimJoint171);

HAnimJoint& HAnimJoint172 =  HAnimJoint();
HAnimJoint172.setUSE(CString("hanim_l_elbow"));
HAnimHumanoid29.setJoints(&HAnimJoint172);

HAnimJoint& HAnimJoint173 =  HAnimJoint();
HAnimJoint173.setUSE(CString("hanim_r_elbow"));
HAnimHumanoid29.setJoints(&HAnimJoint173);

HAnimJoint& HAnimJoint174 =  HAnimJoint();
HAnimJoint174.setUSE(CString("hanim_l_hip"));
HAnimHumanoid29.setJoints(&HAnimJoint174);

HAnimJoint& HAnimJoint175 =  HAnimJoint();
HAnimJoint175.setUSE(CString("hanim_r_hip"));
HAnimHumanoid29.setJoints(&HAnimJoint175);

HAnimJoint& HAnimJoint176 =  HAnimJoint();
HAnimJoint176.setUSE(CString("hanim_l_knee"));
HAnimHumanoid29.setJoints(&HAnimJoint176);

HAnimJoint& HAnimJoint177 =  HAnimJoint();
HAnimJoint177.setUSE(CString("hanim_r_knee"));
HAnimHumanoid29.setJoints(&HAnimJoint177);

HAnimJoint& HAnimJoint178 =  HAnimJoint();
HAnimJoint178.setUSE(CString("hanim_l_midtarsal"));
HAnimHumanoid29.setJoints(&HAnimJoint178);

HAnimJoint& HAnimJoint179 =  HAnimJoint();
HAnimJoint179.setUSE(CString("hanim_r_midtarsal"));
HAnimHumanoid29.setJoints(&HAnimJoint179);

HAnimJoint& HAnimJoint180 =  HAnimJoint();
HAnimJoint180.setUSE(CString("hanim_l_shoulder"));
HAnimHumanoid29.setJoints(&HAnimJoint180);

HAnimJoint& HAnimJoint181 =  HAnimJoint();
HAnimJoint181.setUSE(CString("hanim_r_shoulder"));
HAnimHumanoid29.setJoints(&HAnimJoint181);

HAnimJoint& HAnimJoint182 =  HAnimJoint();
HAnimJoint182.setUSE(CString("hanim_l_wrist"));
HAnimHumanoid29.setJoints(&HAnimJoint182);

HAnimJoint& HAnimJoint183 =  HAnimJoint();
HAnimJoint183.setUSE(CString("hanim_r_wrist"));
HAnimHumanoid29.setJoints(&HAnimJoint183);

HAnimSegment& HAnimSegment184 =  HAnimSegment();
HAnimSegment184.setUSE(CString("hanim_pelvis"));
HAnimHumanoid29.setSegments(&HAnimSegment184);

HAnimSegment& HAnimSegment185 =  HAnimSegment();
HAnimSegment185.setUSE(CString("hanim_l1"));
HAnimHumanoid29.setSegments(&HAnimSegment185);

HAnimSegment& HAnimSegment186 =  HAnimSegment();
HAnimSegment186.setUSE(CString("hanim_c4"));
HAnimHumanoid29.setSegments(&HAnimSegment186);

HAnimSegment& HAnimSegment187 =  HAnimSegment();
HAnimSegment187.setUSE(CString("hanim_skull"));
HAnimHumanoid29.setSegments(&HAnimSegment187);

HAnimSegment& HAnimSegment188 =  HAnimSegment();
HAnimSegment188.setUSE(CString("hanim_l_calf"));
HAnimHumanoid29.setSegments(&HAnimSegment188);

HAnimSegment& HAnimSegment189 =  HAnimSegment();
HAnimSegment189.setUSE(CString("hanim_r_calf"));
HAnimHumanoid29.setSegments(&HAnimSegment189);

HAnimSegment& HAnimSegment190 =  HAnimSegment();
HAnimSegment190.setUSE(CString("hanim_l_forearm"));
HAnimHumanoid29.setSegments(&HAnimSegment190);

HAnimSegment& HAnimSegment191 =  HAnimSegment();
HAnimSegment191.setUSE(CString("hanim_r_forearm"));
HAnimHumanoid29.setSegments(&HAnimSegment191);

HAnimSegment& HAnimSegment192 =  HAnimSegment();
HAnimSegment192.setUSE(CString("hanim_l_hand"));
HAnimHumanoid29.setSegments(&HAnimSegment192);

HAnimSegment& HAnimSegment193 =  HAnimSegment();
HAnimSegment193.setUSE(CString("hanim_r_hand"));
HAnimHumanoid29.setSegments(&HAnimSegment193);

HAnimSegment& HAnimSegment194 =  HAnimSegment();
HAnimSegment194.setUSE(CString("hanim_l_hindfoot"));
HAnimHumanoid29.setSegments(&HAnimSegment194);

HAnimSegment& HAnimSegment195 =  HAnimSegment();
HAnimSegment195.setUSE(CString("hanim_r_hindfoot"));
HAnimHumanoid29.setSegments(&HAnimSegment195);

HAnimSegment& HAnimSegment196 =  HAnimSegment();
HAnimSegment196.setUSE(CString("hanim_l_middistal"));
HAnimHumanoid29.setSegments(&HAnimSegment196);

HAnimSegment& HAnimSegment197 =  HAnimSegment();
HAnimSegment197.setUSE(CString("hanim_r_middistal"));
HAnimHumanoid29.setSegments(&HAnimSegment197);

HAnimSegment& HAnimSegment198 =  HAnimSegment();
HAnimSegment198.setUSE(CString("hanim_l_thigh"));
HAnimHumanoid29.setSegments(&HAnimSegment198);

HAnimSegment& HAnimSegment199 =  HAnimSegment();
HAnimSegment199.setUSE(CString("hanim_r_thigh"));
HAnimHumanoid29.setSegments(&HAnimSegment199);

HAnimSegment& HAnimSegment200 =  HAnimSegment();
HAnimSegment200.setUSE(CString("hanim_l_upperarm"));
HAnimHumanoid29.setSegments(&HAnimSegment200);

HAnimSegment& HAnimSegment201 =  HAnimSegment();
HAnimSegment201.setUSE(CString("hanim_r_upperarm"));
HAnimHumanoid29.setSegments(&HAnimSegment201);

HAnimSite& HAnimSite202 =  HAnimSite();
HAnimSite202.setUSE(CString("hanim_skull_tip"));
HAnimHumanoid29.setSites(&HAnimSite202);

HAnimSite& HAnimSite203 =  HAnimSite();
HAnimSite203.setUSE(CString("hanim_sellion_pt"));
HAnimHumanoid29.setSites(&HAnimSite203);

HAnimSite& HAnimSite204 =  HAnimSite();
HAnimSite204.setUSE(CString("hanim_supramenton_pt"));
HAnimHumanoid29.setSites(&HAnimSite204);

HAnimSite& HAnimSite205 =  HAnimSite();
HAnimSite205.setUSE(CString("hanim_nuchale_pt"));
HAnimHumanoid29.setSites(&HAnimSite205);

HAnimSite& HAnimSite206 =  HAnimSite();
HAnimSite206.setUSE(CString("hanim_l_calcaneous_post_pt"));
HAnimHumanoid29.setSites(&HAnimSite206);

HAnimSite& HAnimSite207 =  HAnimSite();
HAnimSite207.setUSE(CString("hanim_r_calcaneous_post_pt"));
HAnimHumanoid29.setSites(&HAnimSite207);

HAnimSite& HAnimSite208 =  HAnimSite();
HAnimSite208.setUSE(CString("hanim_l_dactylion_pt"));
HAnimHumanoid29.setSites(&HAnimSite208);

HAnimSite& HAnimSite209 =  HAnimSite();
HAnimSite209.setUSE(CString("hanim_r_dactylion_pt"));
HAnimHumanoid29.setSites(&HAnimSite209);

HAnimSite& HAnimSite210 =  HAnimSite();
HAnimSite210.setUSE(CString("hanim_l_digit2_pt"));
HAnimHumanoid29.setSites(&HAnimSite210);

HAnimSite& HAnimSite211 =  HAnimSite();
HAnimSite211.setUSE(CString("hanim_r_digit2_pt"));
HAnimHumanoid29.setSites(&HAnimSite211);

HAnimSite& HAnimSite212 =  HAnimSite();
HAnimSite212.setUSE(CString("hanim_l_femoral_lateral_epicn_pt"));
HAnimHumanoid29.setSites(&HAnimSite212);

HAnimSite& HAnimSite213 =  HAnimSite();
HAnimSite213.setUSE(CString("hanim_r_femoral_lateral_epicn_pt"));
HAnimHumanoid29.setSites(&HAnimSite213);

HAnimSite& HAnimSite214 =  HAnimSite();
HAnimSite214.setUSE(CString("hanim_l_femoral_medial_epicn_pt"));
HAnimHumanoid29.setSites(&HAnimSite214);

HAnimSite& HAnimSite215 =  HAnimSite();
HAnimSite215.setUSE(CString("hanim_r_femoral_medial_epicn_pt"));
HAnimHumanoid29.setSites(&HAnimSite215);

HAnimSite& HAnimSite216 =  HAnimSite();
HAnimSite216.setUSE(CString("hanim_r_gonion_pt"));
HAnimHumanoid29.setSites(&HAnimSite216);

HAnimSite& HAnimSite217 =  HAnimSite();
HAnimSite217.setUSE(CString("hanim_l_gonion_pt"));
HAnimHumanoid29.setSites(&HAnimSite217);

HAnimSite& HAnimSite218 =  HAnimSite();
HAnimSite218.setUSE(CString("hanim_l_hand_tip"));
HAnimHumanoid29.setSites(&HAnimSite218);

HAnimSite& HAnimSite219 =  HAnimSite();
HAnimSite219.setUSE(CString("hanim_r_hand_tip"));
HAnimHumanoid29.setSites(&HAnimSite219);

HAnimSite& HAnimSite220 =  HAnimSite();
HAnimSite220.setUSE(CString("hanim_l_humeral_lateral_epicn_pt"));
HAnimHumanoid29.setSites(&HAnimSite220);

HAnimSite& HAnimSite221 =  HAnimSite();
HAnimSite221.setUSE(CString("hanim_r_humeral_lateral_epicn_pt"));
HAnimHumanoid29.setSites(&HAnimSite221);

HAnimSite& HAnimSite222 =  HAnimSite();
HAnimSite222.setUSE(CString("hanim_l_humeral_medial_epicn_pt"));
HAnimHumanoid29.setSites(&HAnimSite222);

HAnimSite& HAnimSite223 =  HAnimSite();
HAnimSite223.setUSE(CString("hanim_r_humeral_medial_epicn_pt"));
HAnimHumanoid29.setSites(&HAnimSite223);

HAnimSite& HAnimSite224 =  HAnimSite();
HAnimSite224.setUSE(CString("hanim_r_infraorbitale_pt"));
HAnimHumanoid29.setSites(&HAnimSite224);

HAnimSite& HAnimSite225 =  HAnimSite();
HAnimSite225.setUSE(CString("hanim_l_infraorbitale_pt"));
HAnimHumanoid29.setSites(&HAnimSite225);

HAnimSite& HAnimSite226 =  HAnimSite();
HAnimSite226.setUSE(CString("hanim_l_knee_crease_pt"));
HAnimHumanoid29.setSites(&HAnimSite226);

HAnimSite& HAnimSite227 =  HAnimSite();
HAnimSite227.setUSE(CString("hanim_r_knee_crease_pt"));
HAnimHumanoid29.setSites(&HAnimSite227);

HAnimSite& HAnimSite228 =  HAnimSite();
HAnimSite228.setUSE(CString("hanim_l_lateral_malleolus_pt"));
HAnimHumanoid29.setSites(&HAnimSite228);

HAnimSite& HAnimSite229 =  HAnimSite();
HAnimSite229.setUSE(CString("hanim_r_lateral_malleolus_pt"));
HAnimHumanoid29.setSites(&HAnimSite229);

HAnimSite& HAnimSite230 =  HAnimSite();
HAnimSite230.setUSE(CString("hanim_l_medial_malleolus_pt"));
HAnimHumanoid29.setSites(&HAnimSite230);

HAnimSite& HAnimSite231 =  HAnimSite();
HAnimSite231.setUSE(CString("hanim_r_medial_malleolus_pt"));
HAnimHumanoid29.setSites(&HAnimSite231);

HAnimSite& HAnimSite232 =  HAnimSite();
HAnimSite232.setUSE(CString("hanim_l_metacarpal_pha2_pt"));
HAnimHumanoid29.setSites(&HAnimSite232);

HAnimSite& HAnimSite233 =  HAnimSite();
HAnimSite233.setUSE(CString("hanim_r_metacarpal_pha2_pt"));
HAnimHumanoid29.setSites(&HAnimSite233);

HAnimSite& HAnimSite234 =  HAnimSite();
HAnimSite234.setUSE(CString("hanim_l_metacarpal_pha5_pt"));
HAnimHumanoid29.setSites(&HAnimSite234);

HAnimSite& HAnimSite235 =  HAnimSite();
HAnimSite235.setUSE(CString("hanim_r_metacarpal_pha5_pt"));
HAnimHumanoid29.setSites(&HAnimSite235);

HAnimSite& HAnimSite236 =  HAnimSite();
HAnimSite236.setUSE(CString("hanim_l_metatarsal_pha1_pt"));
HAnimHumanoid29.setSites(&HAnimSite236);

HAnimSite& HAnimSite237 =  HAnimSite();
HAnimSite237.setUSE(CString("hanim_r_metatarsal_pha1_pt"));
HAnimHumanoid29.setSites(&HAnimSite237);

HAnimSite& HAnimSite238 =  HAnimSite();
HAnimSite238.setUSE(CString("hanim_l_metatarsal_pha5_pt"));
HAnimHumanoid29.setSites(&HAnimSite238);

HAnimSite& HAnimSite239 =  HAnimSite();
HAnimSite239.setUSE(CString("hanim_r_metatarsal_pha5_pt"));
HAnimHumanoid29.setSites(&HAnimSite239);

HAnimSite& HAnimSite240 =  HAnimSite();
HAnimSite240.setUSE(CString("hanim_l_middistal_tip"));
HAnimHumanoid29.setSites(&HAnimSite240);

HAnimSite& HAnimSite241 =  HAnimSite();
HAnimSite241.setUSE(CString("hanim_r_middistal_tip"));
HAnimHumanoid29.setSites(&HAnimSite241);

HAnimSite& HAnimSite242 =  HAnimSite();
HAnimSite242.setUSE(CString("hanim_l_olecranon_pt"));
HAnimHumanoid29.setSites(&HAnimSite242);

HAnimSite& HAnimSite243 =  HAnimSite();
HAnimSite243.setUSE(CString("hanim_r_olecranon_pt"));
HAnimHumanoid29.setSites(&HAnimSite243);

HAnimSite& HAnimSite244 =  HAnimSite();
HAnimSite244.setUSE(CString("hanim_l_radial_styloid_pt"));
HAnimHumanoid29.setSites(&HAnimSite244);

HAnimSite& HAnimSite245 =  HAnimSite();
HAnimSite245.setUSE(CString("hanim_r_radial_styloid_pt"));
HAnimHumanoid29.setSites(&HAnimSite245);

HAnimSite& HAnimSite246 =  HAnimSite();
HAnimSite246.setUSE(CString("hanim_l_radiale_pt"));
HAnimHumanoid29.setSites(&HAnimSite246);

HAnimSite& HAnimSite247 =  HAnimSite();
HAnimSite247.setUSE(CString("hanim_r_radiale_pt"));
HAnimHumanoid29.setSites(&HAnimSite247);

HAnimSite& HAnimSite248 =  HAnimSite();
HAnimSite248.setUSE(CString("hanim_l_sphyrion_pt"));
HAnimHumanoid29.setSites(&HAnimSite248);

HAnimSite& HAnimSite249 =  HAnimSite();
HAnimSite249.setUSE(CString("hanim_r_sphyrion_pt"));
HAnimHumanoid29.setSites(&HAnimSite249);

HAnimSite& HAnimSite250 =  HAnimSite();
HAnimSite250.setUSE(CString("hanim_r_tragion_pt"));
HAnimHumanoid29.setSites(&HAnimSite250);

HAnimSite& HAnimSite251 =  HAnimSite();
HAnimSite251.setUSE(CString("hanim_l_tragion_pt"));
HAnimHumanoid29.setSites(&HAnimSite251);

HAnimSite& HAnimSite252 =  HAnimSite();
HAnimSite252.setUSE(CString("hanim_l_ulnar_styloid_pt"));
HAnimHumanoid29.setSites(&HAnimSite252);

HAnimSite& HAnimSite253 =  HAnimSite();
HAnimSite253.setUSE(CString("hanim_r_ulnar_styloid_pt"));
HAnimHumanoid29.setSites(&HAnimSite253);

HAnimSite& HAnimSite254 =  HAnimSite();
HAnimSite254.setDEF(CString("hanim_DiamondManLOA_1_view"));
HAnimSite254.X3DNode::setName(CString("DiamondManLOA_1_view"));
Viewpoint& Viewpoint255 =  Viewpoint();
Viewpoint255.setDEF(CString("InclinedView"));
Viewpoint255.setDescription(CString("Inclined View"));
Viewpoint255.setPosition(new float[]{1.62,1.05,2.06});
Viewpoint255.setOrientation(new float[]{-0.113,0.993,0.0347,0.671});
HAnimSite254.addChild(&Viewpoint255);

Viewpoint& Viewpoint256 =  Viewpoint();
Viewpoint256.setDEF(CString("FrontView"));
Viewpoint256.setDescription(CString("Front View"));
Viewpoint256.setPosition(new float[]{0,0.854,2.57665});
HAnimSite254.addChild(&Viewpoint256);

Viewpoint& Viewpoint257 =  Viewpoint();
Viewpoint257.setDEF(CString("SideView"));
Viewpoint257.setDescription(CString("Side View"));
Viewpoint257.setPosition(new float[]{2.5929,0.854,0});
Viewpoint257.setOrientation(new float[]{0,1,0,1.57079});
HAnimSite254.addChild(&Viewpoint257);

Viewpoint& Viewpoint258 =  Viewpoint();
Viewpoint258.setDEF(CString("TopView"));
Viewpoint258.setDescription(CString("Top View"));
Viewpoint258.setPosition(new float[]{0,3.4495,0});
Viewpoint258.setOrientation(new float[]{1,0,0,-1.57079});
HAnimSite254.addChild(&Viewpoint258);

HAnimHumanoid29.setViewpoints(&HAnimSite254);

Scene25.addChild(&HAnimHumanoid29);

X3D0.setScene(&Scene25);

}

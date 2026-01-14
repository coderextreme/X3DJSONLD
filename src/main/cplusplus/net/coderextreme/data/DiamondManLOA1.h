//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
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
meta3.setContent(CString("DiamondManLOA1.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("description"));
meta4.setContent(CString("HAnim skeletal structure for Level of Action (LOA) one, with diamonds at the Joint centers, also includes HAnimSite feaature points. LOA-1 is typical low-end real-time 3D hierarchy."));
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
meta9.setName(CString("Image"));
meta9.setContent(CString("images/BonesAllSkeletonFrontViewLOA1.png"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("Image"));
meta10.setContent(CString("humanoid_landmark_locations.gif"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("Image"));
meta11.setContent(CString("http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("motto"));
meta12.setContent(CString("(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\""));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("warning"));
meta13.setContent(CString("Still needs comments on CAESAR feature points inserted"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("reference"));
meta14.setContent(CString("HAnim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Two"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(CString("reference"));
meta15.setContent(CString("http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(CString("reference"));
meta16.setContent(CString("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1.wrl"));
head1.addMeta(&meta16);

meta& meta17 =  meta();
meta17.setName(CString("reference"));
meta17.setContent(CString("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1-diamond.wrl"));
head1.addMeta(&meta17);

meta& meta18 =  meta();
meta18.setName(CString("reference"));
meta18.setContent(CString("http://ece.uwaterloo.ca/~HAnim"));
head1.addMeta(&meta18);

meta& meta19 =  meta();
meta19.setName(CString("reference"));
meta19.setContent(CString("http://www.cis.upenn.edu/~badler/anthro/89-71.pdf"));
head1.addMeta(&meta19);

meta& meta20 =  meta();
meta20.setName(CString("reference"));
meta20.setContent(CString("http://www.cis.upenn.edu/~badler/anthro/89-71.ps"));
head1.addMeta(&meta20);

meta& meta21 =  meta();
meta21.setName(CString("reference"));
meta21.setContent(CString("http://www.cis.upenn.edu/~beitler"));
head1.addMeta(&meta21);

meta& meta22 =  meta();
meta22.setName(CString("identifier"));
meta22.setContent(CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA1.x3d"));
head1.addMeta(&meta22);

meta& meta23 =  meta();
meta23.setName(CString("generator"));
meta23.setContent(CString("X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit"));
head1.addMeta(&meta23);

X3D0.setHead(&head1);

Scene& Scene24 =  Scene();
WorldInfo& WorldInfo25 =  WorldInfo();
WorldInfo25.setTitle(CString("HANIM 1.1 Default Joint Centers, LOA1"));
WorldInfo25.setInfo(new CString[]{CString("HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 1 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf")}, 1);
Scene24.addChild(&WorldInfo25);

NavigationInfo& NavigationInfo26 =  NavigationInfo();
NavigationInfo26.setSpeed(1.5);
Scene24.addChild(&NavigationInfo26);

Viewpoint& Viewpoint27 =  Viewpoint();
Viewpoint27.setDescription(CString("Diamond Man, LOA 1"));
Viewpoint27.setPosition(new float[]{0.0,1.0,3.0});
Viewpoint27.setCenterOfRotation(new float[]{0.0,1.0,0.0});
Scene24.addChild(&Viewpoint27);

HAnimHumanoid& HAnimHumanoid28 =  HAnimHumanoid();
HAnimHumanoid28.setDEF(CString("hanim_humanoid"));
HAnimHumanoid28.X3DNode::setName(CString("humanoid"));
HAnimHumanoid28.setLoa(1);
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
MetadataString33.X3DNode::setName(CString("humanoidVersion"));
MetadataSet29.setValue((X3DNode *)&MetadataString33);

MetadataString& MetadataString34 =  MetadataString();
MetadataString34.X3DNode::setName(CString("usageRestrictions"));
MetadataSet29.setValue((X3DNode *)&MetadataString34);

HAnimHumanoid28.setMetadata(&MetadataSet29);

HAnimJoint& HAnimJoint35 =  HAnimJoint();
HAnimJoint35.setDEF(CString("hanim_humanoid_root"));
HAnimJoint35.X3DNode::setName(CString("humanoid_root"));
HAnimJoint35.setCenter(new float[]{0.0,0.824,0.0277});
HAnimJoint& HAnimJoint36 =  HAnimJoint();
HAnimJoint36.setDEF(CString("hanim_sacroiliac"));
HAnimJoint36.X3DNode::setName(CString("sacroiliac"));
HAnimJoint36.setCenter(new float[]{0.0,0.9149,0.0016});
HAnimSegment& HAnimSegment37 =  HAnimSegment();
HAnimSegment37.setDEF(CString("hanim_pelvis"));
HAnimSegment37.X3DNode::setName(CString("pelvis"));
Transform& Transform38 =  Transform();
Transform38.setTranslation(new float[]{0.0,0.9149,0.0016});
Shape& Shape39 =  Shape();
Shape39.setDEF(CString("DiamondShape"));
Appearance& Appearance40 =  Appearance();
Material& Material41 =  Material();
Material41.setDiffuseColor(new float[]{1.0,1.0,0.0});
Appearance40.addChild(&Material41);

Shape39.addChild(&Appearance40);

IndexedFaceSet& IndexedFaceSet42 =  IndexedFaceSet();
IndexedFaceSet42.setCreaseAngle(0.5);
IndexedFaceSet42.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate43 =  Coordinate();
Coordinate43.setDEF(CString("points"));
Coordinate43.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet42.setCoord(&Coordinate43);

Shape39.setGeometry(&IndexedFaceSet42);

Transform38.addChild(&Shape39);

HAnimSegment37.addChild(&Transform38);

HAnimJoint36.addChildren(&HAnimSegment37);

HAnimJoint& HAnimJoint44 =  HAnimJoint();
HAnimJoint44.setDEF(CString("hanim_l_hip"));
HAnimJoint44.X3DNode::setName(CString("l_hip"));
HAnimJoint44.setCenter(new float[]{0.0961,0.9124,-0.0001});
HAnimSegment& HAnimSegment45 =  HAnimSegment();
HAnimSegment45.setDEF(CString("hanim_l_thigh"));
HAnimSegment45.X3DNode::setName(CString("l_thigh"));
Transform& Transform46 =  Transform();
Transform46.setTranslation(new float[]{0.0961,0.9124,-0.0001});
Shape& Shape47 =  Shape();
Shape47.setUSE(CString("DiamondShape"));
Transform46.addChild(&Shape47);

HAnimSegment45.addChild(&Transform46);

HAnimSite& HAnimSite48 =  HAnimSite();
HAnimSite48.setDEF(CString("hanim_l_knee_crease_pt"));
HAnimSite48.X3DNode::setName(CString("l_knee_crease_pt"));
HAnimSite48.setTranslation(new float[]{0.0993,0.4881,-0.0309});
HAnimSegment45.addChild(&HAnimSite48);

HAnimSite& HAnimSite49 =  HAnimSite();
HAnimSite49.setDEF(CString("hanim_l_femoral_lateral_epicondyle_pt"));
HAnimSite49.X3DNode::setName(CString("l_femoral_lateral_epicondyle_pt"));
HAnimSite49.setTranslation(new float[]{0.1598,0.4967,0.0297});
HAnimSegment45.addChild(&HAnimSite49);

HAnimSite& HAnimSite50 =  HAnimSite();
HAnimSite50.setDEF(CString("hanim_l_femoral_medial_epicondyle_pt"));
HAnimSite50.X3DNode::setName(CString("l_femoral_medial_epicondyle_pt"));
HAnimSite50.setTranslation(new float[]{0.0398,0.4946,0.0303});
HAnimSegment45.addChild(&HAnimSite50);

HAnimJoint44.addChildren(&HAnimSegment45);

HAnimJoint& HAnimJoint51 =  HAnimJoint();
HAnimJoint51.setDEF(CString("hanim_l_knee"));
HAnimJoint51.X3DNode::setName(CString("l_knee"));
HAnimJoint51.setCenter(new float[]{0.104,0.4867,0.0308});
HAnimSegment& HAnimSegment52 =  HAnimSegment();
HAnimSegment52.setDEF(CString("hanim_l_calf"));
HAnimSegment52.X3DNode::setName(CString("l_calf"));
Transform& Transform53 =  Transform();
Transform53.setTranslation(new float[]{0.104,0.4867,0.0308});
Shape& Shape54 =  Shape();
Shape54.setUSE(CString("DiamondShape"));
Transform53.addChild(&Shape54);

HAnimSegment52.addChild(&Transform53);

HAnimJoint51.addChildren(&HAnimSegment52);

HAnimJoint& HAnimJoint55 =  HAnimJoint();
HAnimJoint55.setDEF(CString("hanim_l_talocrural"));
HAnimJoint55.X3DNode::setName(CString("l_talocrural"));
HAnimJoint55.setCenter(new float[]{0.1101,0.0656,-0.0736});
HAnimSegment& HAnimSegment56 =  HAnimSegment();
HAnimSegment56.setDEF(CString("hanim_l_talus"));
HAnimSegment56.X3DNode::setName(CString("l_talus"));
Transform& Transform57 =  Transform();
Transform57.setTranslation(new float[]{0.1101,0.0656,-0.0736});
Shape& Shape58 =  Shape();
Shape58.setUSE(CString("DiamondShape"));
Transform57.addChild(&Shape58);

HAnimSegment56.addChild(&Transform57);

HAnimSite& HAnimSite59 =  HAnimSite();
HAnimSite59.setDEF(CString("hanim_l_lateral_malleolus_pt"));
HAnimSite59.X3DNode::setName(CString("l_lateral_malleolus_pt"));
HAnimSite59.setTranslation(new float[]{0.1308,0.0597,-0.1032});
HAnimSegment56.addChild(&HAnimSite59);

HAnimSite& HAnimSite60 =  HAnimSite();
HAnimSite60.setDEF(CString("hanim_l_medial_malleolus_pt"));
HAnimSite60.X3DNode::setName(CString("l_medial_malleolus_pt"));
HAnimSite60.setTranslation(new float[]{0.089,0.0716,-0.0881});
HAnimSegment56.addChild(&HAnimSite60);

HAnimSite& HAnimSite61 =  HAnimSite();
HAnimSite61.setDEF(CString("hanim_l_sphyrion_pt"));
HAnimSite61.X3DNode::setName(CString("l_sphyrion_pt"));
HAnimSite61.setTranslation(new float[]{0.089,0.0575,-0.0943});
HAnimSegment56.addChild(&HAnimSite61);

HAnimSite& HAnimSite62 =  HAnimSite();
HAnimSite62.setDEF(CString("hanim_l_calcaneus_posterior_pt"));
HAnimSite62.X3DNode::setName(CString("l_calcaneus_posterior_pt"));
HAnimSite62.setTranslation(new float[]{0.0974,0.0259,-0.1171});
HAnimSegment56.addChild(&HAnimSite62);

HAnimJoint55.addChildren(&HAnimSegment56);

HAnimJoint& HAnimJoint63 =  HAnimJoint();
HAnimJoint63.setDEF(CString("hanim_l_metatarsophalangeal_2"));
HAnimJoint63.X3DNode::setName(CString("l_metatarsophalangeal_2"));
HAnimJoint63.setCenter(new float[]{0.1086,0.0001,0.0368});
HAnimSegment& HAnimSegment64 =  HAnimSegment();
HAnimSegment64.setDEF(CString("hanim_l_tarsal_proximal_phalanx_2"));
HAnimSegment64.X3DNode::setName(CString("l_tarsal_proximal_phalanx_2"));
HAnimSite& HAnimSite65 =  HAnimSite();
HAnimSite65.setDEF(CString("hanim_l_middistal_tip"));
HAnimSite65.X3DNode::setName(CString("l_middistal_tip"));
HAnimSite65.setTranslation(new float[]{0.1354,0.0016,0.1476});
HAnimSegment64.addChild(&HAnimSite65);

HAnimSite& HAnimSite66 =  HAnimSite();
HAnimSite66.setDEF(CString("hanim_l_metatarsal_phalanx_5_pt"));
HAnimSite66.X3DNode::setName(CString("l_metatarsal_phalanx_5_pt"));
HAnimSite66.setTranslation(new float[]{0.1825,0.007,0.0928});
HAnimSegment64.addChild(&HAnimSite66);

HAnimSite& HAnimSite67 =  HAnimSite();
HAnimSite67.setDEF(CString("hanim_l_metatarsal_phalanx_1_pt"));
HAnimSite67.X3DNode::setName(CString("l_metatarsal_phalanx_1_pt"));
HAnimSite67.setTranslation(new float[]{0.0816,0.0232,0.0106});
HAnimSegment64.addChild(&HAnimSite67);

HAnimSite& HAnimSite68 =  HAnimSite();
HAnimSite68.setDEF(CString("hanim_l_tarsal_distal_phalanx_2_pt"));
HAnimSite68.X3DNode::setName(CString("l_tarsal_distal_phalanx_2_pt"));
HAnimSite68.setTranslation(new float[]{0.1195,0.0079,0.1433});
HAnimSegment64.addChild(&HAnimSite68);

HAnimJoint63.addChildren(&HAnimSegment64);

HAnimJoint55.addChildren(&HAnimJoint63);

HAnimJoint51.addChildren(&HAnimJoint55);

HAnimJoint44.addChildren(&HAnimJoint51);

HAnimJoint36.addChildren(&HAnimJoint44);

HAnimJoint& HAnimJoint69 =  HAnimJoint();
HAnimJoint69.setDEF(CString("hanim_r_hip"));
HAnimJoint69.X3DNode::setName(CString("r_hip"));
HAnimJoint69.setCenter(new float[]{-0.095,0.9171,0.0029});
HAnimSegment& HAnimSegment70 =  HAnimSegment();
HAnimSegment70.setDEF(CString("hanim_r_thigh"));
HAnimSegment70.X3DNode::setName(CString("r_thigh"));
Transform& Transform71 =  Transform();
Transform71.setTranslation(new float[]{-0.095,0.9171,0.0029});
Shape& Shape72 =  Shape();
Shape72.setUSE(CString("DiamondShape"));
Transform71.addChild(&Shape72);

HAnimSegment70.addChild(&Transform71);

HAnimSite& HAnimSite73 =  HAnimSite();
HAnimSite73.setDEF(CString("hanim_r_knee_crease_pt"));
HAnimSite73.X3DNode::setName(CString("r_knee_crease_pt"));
HAnimSite73.setTranslation(new float[]{-0.0825,0.4932,-0.0326});
HAnimSegment70.addChild(&HAnimSite73);

HAnimSite& HAnimSite74 =  HAnimSite();
HAnimSite74.setDEF(CString("hanim_r_femoral_lateral_epicondyle_pt"));
HAnimSite74.X3DNode::setName(CString("r_femoral_lateral_epicondyle_pt"));
HAnimSite74.setTranslation(new float[]{-0.1421,0.4992,0.031});
HAnimSegment70.addChild(&HAnimSite74);

HAnimSite& HAnimSite75 =  HAnimSite();
HAnimSite75.setDEF(CString("hanim_r_femoral_medial_epicondyle_pt"));
HAnimSite75.X3DNode::setName(CString("r_femoral_medial_epicondyle_pt"));
HAnimSite75.setTranslation(new float[]{-0.0221,0.5014,0.0289});
HAnimSegment70.addChild(&HAnimSite75);

HAnimJoint69.addChildren(&HAnimSegment70);

HAnimJoint& HAnimJoint76 =  HAnimJoint();
HAnimJoint76.setDEF(CString("hanim_r_knee"));
HAnimJoint76.X3DNode::setName(CString("r_knee"));
HAnimJoint76.setCenter(new float[]{-0.0867,0.4913,0.0318});
HAnimSegment& HAnimSegment77 =  HAnimSegment();
HAnimSegment77.setDEF(CString("hanim_r_calf"));
HAnimSegment77.X3DNode::setName(CString("r_calf"));
Transform& Transform78 =  Transform();
Transform78.setTranslation(new float[]{-0.0867,0.4913,0.0318});
Shape& Shape79 =  Shape();
Shape79.setUSE(CString("DiamondShape"));
Transform78.addChild(&Shape79);

HAnimSegment77.addChild(&Transform78);

HAnimJoint76.addChildren(&HAnimSegment77);

HAnimJoint& HAnimJoint80 =  HAnimJoint();
HAnimJoint80.setDEF(CString("hanim_r_talocrural"));
HAnimJoint80.X3DNode::setName(CString("r_talocrural"));
HAnimJoint80.setCenter(new float[]{-0.0801,0.0712,-0.0766});
HAnimSegment& HAnimSegment81 =  HAnimSegment();
HAnimSegment81.setDEF(CString("hanim_r_talus"));
HAnimSegment81.X3DNode::setName(CString("r_talus"));
Transform& Transform82 =  Transform();
Transform82.setTranslation(new float[]{-0.0801,0.0712,-0.0766});
Shape& Shape83 =  Shape();
Shape83.setUSE(CString("DiamondShape"));
Transform82.addChild(&Shape83);

HAnimSegment81.addChild(&Transform82);

HAnimSite& HAnimSite84 =  HAnimSite();
HAnimSite84.setDEF(CString("hanim_r_lateral_malleolus_pt"));
HAnimSite84.X3DNode::setName(CString("r_lateral_malleolus_pt"));
HAnimSite84.setTranslation(new float[]{-0.1006,0.0658,-0.1075});
HAnimSegment81.addChild(&HAnimSite84);

HAnimSite& HAnimSite85 =  HAnimSite();
HAnimSite85.setDEF(CString("hanim_r_medial_malleolus_pt"));
HAnimSite85.X3DNode::setName(CString("r_medial_malleolus_pt"));
HAnimSite85.setTranslation(new float[]{-0.0591,0.076,-0.0928});
HAnimSegment81.addChild(&HAnimSite85);

HAnimSite& HAnimSite86 =  HAnimSite();
HAnimSite86.setDEF(CString("hanim_r_sphyrion_pt"));
HAnimSite86.X3DNode::setName(CString("r_sphyrion_pt"));
HAnimSite86.setTranslation(new float[]{-0.0603,0.061,-0.1002});
HAnimSegment81.addChild(&HAnimSite86);

HAnimSite& HAnimSite87 =  HAnimSite();
HAnimSite87.setDEF(CString("hanim_r_calcaneus_posterior_pt"));
HAnimSite87.X3DNode::setName(CString("r_calcaneus_posterior_pt"));
HAnimSite87.setTranslation(new float[]{-0.0692,0.0297,-0.1221});
HAnimSegment81.addChild(&HAnimSite87);

HAnimJoint80.addChildren(&HAnimSegment81);

HAnimJoint& HAnimJoint88 =  HAnimJoint();
HAnimJoint88.setDEF(CString("hanim_r_metatarsophalangeal_2"));
HAnimJoint88.X3DNode::setName(CString("r_metatarsophalangeal_2"));
HAnimJoint88.setCenter(new float[]{-0.0801,0.0,0.0368});
HAnimSegment& HAnimSegment89 =  HAnimSegment();
HAnimSegment89.setDEF(CString("hanim_r_tarsal_proximal_phalanx_2"));
HAnimSegment89.X3DNode::setName(CString("r_tarsal_proximal_phalanx_2"));
HAnimSite& HAnimSite90 =  HAnimSite();
HAnimSite90.setDEF(CString("hanim_r_middistal_tip"));
HAnimSite90.X3DNode::setName(CString("r_middistal_tip"));
HAnimSite90.setTranslation(new float[]{-0.1043,-0.0227,0.145});
HAnimSegment89.addChild(&HAnimSite90);

HAnimSite& HAnimSite91 =  HAnimSite();
HAnimSite91.setDEF(CString("hanim_r_metatarsal_phalanx_5_pt"));
HAnimSite91.X3DNode::setName(CString("r_metatarsal_phalanx_5_pt"));
HAnimSite91.setTranslation(new float[]{-0.1523,0.0166,0.0895});
HAnimSegment89.addChild(&HAnimSite91);

HAnimSite& HAnimSite92 =  HAnimSite();
HAnimSite92.setDEF(CString("hanim_r_metatarsal_phalanx_1_pt"));
HAnimSite92.X3DNode::setName(CString("r_metatarsal_phalanx_1_pt"));
HAnimSite92.setTranslation(new float[]{-0.0521,0.026,0.0127});
HAnimSegment89.addChild(&HAnimSite92);

HAnimSite& HAnimSite93 =  HAnimSite();
HAnimSite93.setDEF(CString("hanim_r_tarsal_distal_phalanx_2_pt"));
HAnimSite93.X3DNode::setName(CString("r_tarsal_distal_phalanx_2_pt"));
HAnimSite93.setTranslation(new float[]{-0.0883,0.0134,0.1383});
HAnimSegment89.addChild(&HAnimSite93);

HAnimJoint88.addChildren(&HAnimSegment89);

HAnimJoint80.addChildren(&HAnimJoint88);

HAnimJoint76.addChildren(&HAnimJoint80);

HAnimJoint69.addChildren(&HAnimJoint76);

HAnimJoint36.addChildren(&HAnimJoint69);

HAnimJoint35.addChildren(&HAnimJoint36);

HAnimJoint& HAnimJoint94 =  HAnimJoint();
HAnimJoint94.setDEF(CString("hanim_vl1"));
HAnimJoint94.X3DNode::setName(CString("vl1"));
HAnimJoint94.setCenter(new float[]{-0.00405,1.07,-0.0275});
HAnimSegment& HAnimSegment95 =  HAnimSegment();
HAnimSegment95.setDEF(CString("hanim_l1"));
HAnimSegment95.X3DNode::setName(CString("l1"));
HAnimJoint94.addChildren(&HAnimSegment95);

HAnimJoint& HAnimJoint96 =  HAnimJoint();
HAnimJoint96.setDEF(CString("hanim_l_shoulder"));
HAnimJoint96.X3DNode::setName(CString("l_shoulder"));
HAnimJoint96.setCenter(new float[]{0.2029,1.4376,-0.0387});
HAnimSegment& HAnimSegment97 =  HAnimSegment();
HAnimSegment97.setDEF(CString("hanim_l_upperarm"));
HAnimSegment97.X3DNode::setName(CString("l_upperarm"));
Transform& Transform98 =  Transform();
Transform98.setTranslation(new float[]{0.2029,1.4376,-0.0387});
Shape& Shape99 =  Shape();
Shape99.setUSE(CString("DiamondShape"));
Transform98.addChild(&Shape99);

HAnimSegment97.addChild(&Transform98);

Transform& Transform100 =  Transform();
Transform100.setDEF(CString("l_upperarm_adjust"));
Transform100.setTranslation(new float[]{0.2029,1.4376,-0.0387});
Transform100.setRotation(new float[]{1.0,0.0,0.0,0.119});
Transform100.setCenter(new float[]{0.182,1.22,-0.047});
HAnimSegment97.addChild(&Transform100);

HAnimSite& HAnimSite101 =  HAnimSite();
HAnimSite101.setDEF(CString("hanim_l_humeral_lateral_epicondyle_pt"));
HAnimSite101.X3DNode::setName(CString("l_humeral_lateral_epicondyle_pt"));
HAnimSite101.setTranslation(new float[]{0.228,1.1482,-0.11});
HAnimSegment97.addChild(&HAnimSite101);

HAnimJoint96.addChildren(&HAnimSegment97);

HAnimJoint& HAnimJoint102 =  HAnimJoint();
HAnimJoint102.setDEF(CString("hanim_l_elbow"));
HAnimJoint102.X3DNode::setName(CString("l_elbow"));
HAnimJoint102.setCenter(new float[]{0.2014,1.1357,-0.0682});
HAnimSegment& HAnimSegment103 =  HAnimSegment();
HAnimSegment103.setDEF(CString("hanim_l_forearm"));
HAnimSegment103.X3DNode::setName(CString("l_forearm"));
Transform& Transform104 =  Transform();
Transform104.setTranslation(new float[]{0.2014,1.1357,-0.0682});
Shape& Shape105 =  Shape();
Shape105.setUSE(CString("DiamondShape"));
Transform104.addChild(&Shape105);

HAnimSegment103.addChild(&Transform104);

Transform& Transform106 =  Transform();
Transform106.setDEF(CString("l_forearm_adjust"));
Transform106.setTranslation(new float[]{0.2014,1.1357,-0.0682});
Transform106.setRotation(new float[]{-1.0,0.0,0.0,0.1});
Transform106.setCenter(new float[]{0.198,0.961,-0.0405});
HAnimSegment103.addChild(&Transform106);

HAnimSite& HAnimSite107 =  HAnimSite();
HAnimSite107.setDEF(CString("hanim_l_radial_styloid_pt"));
HAnimSite107.X3DNode::setName(CString("l_radial_styloid_pt"));
HAnimSite107.setTranslation(new float[]{0.1901,0.8645,-0.0415});
HAnimSegment103.addChild(&HAnimSite107);

HAnimSite& HAnimSite108 =  HAnimSite();
HAnimSite108.setDEF(CString("hanim_l_olecranon_pt"));
HAnimSite108.X3DNode::setName(CString("l_olecranon_pt"));
HAnimSite108.setTranslation(new float[]{-0.1962,1.1375,-0.1123});
HAnimSegment103.addChild(&HAnimSite108);

HAnimSite& HAnimSite109 =  HAnimSite();
HAnimSite109.setDEF(CString("hanim_l_humeral_medial_epicondyle_pt"));
HAnimSite109.X3DNode::setName(CString("l_humeral_medial_epicondyle_pt"));
HAnimSite109.setTranslation(new float[]{0.1735,1.1272,-0.1113});
HAnimSegment103.addChild(&HAnimSite109);

HAnimSite& HAnimSite110 =  HAnimSite();
HAnimSite110.setDEF(CString("hanim_l_radiale_pt"));
HAnimSite110.X3DNode::setName(CString("l_radiale_pt"));
HAnimSite110.setTranslation(new float[]{0.2182,1.1212,-0.1167});
HAnimSegment103.addChild(&HAnimSite110);

HAnimJoint102.addChildren(&HAnimSegment103);

HAnimJoint& HAnimJoint111 =  HAnimJoint();
HAnimJoint111.setDEF(CString("hanim_l_radiocarpal"));
HAnimJoint111.X3DNode::setName(CString("l_radiocarpal"));
HAnimJoint111.setCenter(new float[]{0.1984,0.8663,-0.0583});
HAnimSegment& HAnimSegment112 =  HAnimSegment();
HAnimSegment112.setDEF(CString("hanim_l_carpal"));
HAnimSegment112.X3DNode::setName(CString("l_carpal"));
Transform& Transform113 =  Transform();
Transform113.setTranslation(new float[]{0.1984,0.8663,-0.0583});
Shape& Shape114 =  Shape();
Shape114.setUSE(CString("DiamondShape"));
Transform113.addChild(&Shape114);

HAnimSegment112.addChild(&Transform113);

Transform& Transform115 =  Transform();
Transform115.setDEF(CString("l_hand_adjust"));
Transform115.setTranslation(new float[]{0.1984,0.8663,-0.0583});
Transform115.setRotation(new float[]{-0.06361,-0.9967,0.04988,1.333});
Transform115.setCenter(new float[]{0.213,0.811,-0.0338});
HAnimSegment112.addChild(&Transform115);

HAnimSite& HAnimSite116 =  HAnimSite();
HAnimSite116.setDEF(CString("hanim_l_hand_tip"));
HAnimSite116.X3DNode::setName(CString("l_hand_tip"));
HAnimSite116.setTranslation(new float[]{0.208,0.6731,-0.0491});
HAnimSegment112.addChild(&HAnimSite116);

HAnimSite& HAnimSite117 =  HAnimSite();
HAnimSite117.setDEF(CString("hanim_l_metacarpal_phalanx_2_pt"));
HAnimSite117.X3DNode::setName(CString("l_metacarpal_phalanx_2_pt"));
HAnimSite117.setTranslation(new float[]{0.2009,0.8139,-0.0237});
HAnimSegment112.addChild(&HAnimSite117);

HAnimSite& HAnimSite118 =  HAnimSite();
HAnimSite118.setDEF(CString("hanim_l_dactylion_pt"));
HAnimSite118.X3DNode::setName(CString("l_dactylion_pt"));
HAnimSite118.setTranslation(new float[]{0.2056,0.6743,-0.0482});
HAnimSegment112.addChild(&HAnimSite118);

HAnimSite& HAnimSite119 =  HAnimSite();
HAnimSite119.setDEF(CString("hanim_l_ulnar_styloid_pt"));
HAnimSite119.X3DNode::setName(CString("l_ulnar_styloid_pt"));
HAnimSite119.setTranslation(new float[]{-0.2142,0.8529,-0.0648});
HAnimSegment112.addChild(&HAnimSite119);

HAnimSite& HAnimSite120 =  HAnimSite();
HAnimSite120.setDEF(CString("hanim_l_metacarpal_phalanx_5_pt"));
HAnimSite120.X3DNode::setName(CString("l_metacarpal_phalanx_5_pt"));
HAnimSite120.setTranslation(new float[]{0.1929,0.786,-0.1122});
HAnimSegment112.addChild(&HAnimSite120);

HAnimJoint111.addChildren(&HAnimSegment112);

HAnimJoint102.addChildren(&HAnimJoint111);

HAnimJoint96.addChildren(&HAnimJoint102);

HAnimJoint94.addChildren(&HAnimJoint96);

HAnimJoint& HAnimJoint121 =  HAnimJoint();
HAnimJoint121.setDEF(CString("hanim_r_shoulder"));
HAnimJoint121.X3DNode::setName(CString("r_shoulder"));
HAnimJoint121.setCenter(new float[]{-0.1907,1.4407,-0.0325});
HAnimSegment& HAnimSegment122 =  HAnimSegment();
HAnimSegment122.setDEF(CString("hanim_r_upperarm"));
HAnimSegment122.X3DNode::setName(CString("r_upperarm"));
Transform& Transform123 =  Transform();
Transform123.setTranslation(new float[]{-0.1907,1.4407,-0.0325});
Shape& Shape124 =  Shape();
Shape124.setUSE(CString("DiamondShape"));
Transform123.addChild(&Shape124);

HAnimSegment122.addChild(&Transform123);

Transform& Transform125 =  Transform();
Transform125.setDEF(CString("r_upperarm_adjust"));
Transform125.setTranslation(new float[]{-0.1907,1.4407,-0.0325});
Transform125.setRotation(new float[]{1.0,0.0,0.0,0.0836});
Transform125.setCenter(new float[]{-0.182,1.22,-0.047});
HAnimSegment122.addChild(&Transform125);

HAnimSite& HAnimSite126 =  HAnimSite();
HAnimSite126.setDEF(CString("hanim_r_humeral_lateral_epicondyle_pt"));
HAnimSite126.X3DNode::setName(CString("r_humeral_lateral_epicondyle_pt"));
HAnimSite126.setTranslation(new float[]{-0.2224,1.1517,-0.1033});
HAnimSegment122.addChild(&HAnimSite126);

HAnimJoint121.addChildren(&HAnimSegment122);

HAnimJoint& HAnimJoint127 =  HAnimJoint();
HAnimJoint127.setDEF(CString("hanim_r_elbow"));
HAnimJoint127.X3DNode::setName(CString("r_elbow"));
HAnimJoint127.setCenter(new float[]{-0.1949,1.1388,-0.062});
HAnimSegment& HAnimSegment128 =  HAnimSegment();
HAnimSegment128.setDEF(CString("hanim_r_forearm"));
HAnimSegment128.X3DNode::setName(CString("r_forearm"));
Transform& Transform129 =  Transform();
Transform129.setTranslation(new float[]{-0.1949,1.1388,-0.062});
Shape& Shape130 =  Shape();
Shape130.setUSE(CString("DiamondShape"));
Transform129.addChild(&Shape130);

HAnimSegment128.addChild(&Transform129);

Transform& Transform131 =  Transform();
Transform131.setDEF(CString("r_forearm_adjust"));
Transform131.setTranslation(new float[]{-0.1949,1.1388,-0.062});
Transform131.setRotation(new float[]{-1.0,0.0,0.0,0.1254});
Transform131.setCenter(new float[]{-0.198,0.961,-0.0397});
HAnimSegment128.addChild(&Transform131);

HAnimSite& HAnimSite132 =  HAnimSite();
HAnimSite132.setDEF(CString("hanim_r_radial_styloid_pt"));
HAnimSite132.X3DNode::setName(CString("r_radial_styloid_pt"));
HAnimSite132.setTranslation(new float[]{-0.1884,0.8676,-0.036});
HAnimSegment128.addChild(&HAnimSite132);

HAnimSite& HAnimSite133 =  HAnimSite();
HAnimSite133.setDEF(CString("hanim_r_olecranon_pt"));
HAnimSite133.X3DNode::setName(CString("r_olecranon_pt"));
HAnimSite133.setTranslation(new float[]{-0.1907,1.1405,-0.1065});
HAnimSegment128.addChild(&HAnimSite133);

HAnimSite& HAnimSite134 =  HAnimSite();
HAnimSite134.setDEF(CString("hanim_r_humeral_medial_epicondyle_pt"));
HAnimSite134.X3DNode::setName(CString("r_humeral_medial_epicondyle_pt"));
HAnimSite134.setTranslation(new float[]{-0.168,1.1298,-0.1062});
HAnimSegment128.addChild(&HAnimSite134);

HAnimSite& HAnimSite135 =  HAnimSite();
HAnimSite135.setDEF(CString("hanim_r_radiale_pt"));
HAnimSite135.X3DNode::setName(CString("r_radiale_pt"));
HAnimSite135.setTranslation(new float[]{-0.213,1.1305,-0.1091});
HAnimSegment128.addChild(&HAnimSite135);

HAnimJoint127.addChildren(&HAnimSegment128);

HAnimJoint& HAnimJoint136 =  HAnimJoint();
HAnimJoint136.setDEF(CString("hanim_r_radiocarpal"));
HAnimJoint136.X3DNode::setName(CString("r_radiocarpal"));
HAnimJoint136.setCenter(new float[]{-0.1959,0.8694,-0.0521});
HAnimSegment& HAnimSegment137 =  HAnimSegment();
HAnimSegment137.setDEF(CString("hanim_r_carpal"));
HAnimSegment137.X3DNode::setName(CString("r_carpal"));
Transform& Transform138 =  Transform();
Transform138.setTranslation(new float[]{-0.1959,0.8694,-0.0521});
Shape& Shape139 =  Shape();
Shape139.setUSE(CString("DiamondShape"));
Transform138.addChild(&Shape139);

HAnimSegment137.addChild(&Transform138);

Transform& Transform140 =  Transform();
Transform140.setDEF(CString("r_hand_adjust"));
Transform140.setRotation(new float[]{-0.09024,0.994,-0.0624,1.216});
Transform140.setCenter(new float[]{-0.217,0.811,-0.0338});
HAnimSegment137.addChild(&Transform140);

HAnimSite& HAnimSite141 =  HAnimSite();
HAnimSite141.setDEF(CString("hanim_r_hand_tip"));
HAnimSite141.X3DNode::setName(CString("r_hand_tip"));
HAnimSite141.setTranslation(new float[]{-0.1969,0.6758,-0.0427});
HAnimSegment137.addChild(&HAnimSite141);

HAnimSite& HAnimSite142 =  HAnimSite();
HAnimSite142.setDEF(CString("hanim_r_metacarpal_phalanx_2_pt"));
HAnimSite142.X3DNode::setName(CString("r_metacarpal_phalanx_2_pt"));
HAnimSite142.setTranslation(new float[]{-0.1977,0.8169,-0.0177});
HAnimSegment137.addChild(&HAnimSite142);

HAnimSite& HAnimSite143 =  HAnimSite();
HAnimSite143.setDEF(CString("hanim_r_dactylion_pt"));
HAnimSite143.X3DNode::setName(CString("r_dactylion_pt"));
HAnimSite143.setTranslation(new float[]{-0.1941,0.6772,-0.0423});
HAnimSegment137.addChild(&HAnimSite143);

HAnimSite& HAnimSite144 =  HAnimSite();
HAnimSite144.setDEF(CString("hanim_r_ulnar_styloid_pt"));
HAnimSite144.X3DNode::setName(CString("r_ulnar_styloid_pt"));
HAnimSite144.setTranslation(new float[]{-0.2117,0.8562,-0.0584});
HAnimSegment137.addChild(&HAnimSite144);

HAnimSite& HAnimSite145 =  HAnimSite();
HAnimSite145.setDEF(CString("hanim_r_metacarpal_phalanx_5_pt"));
HAnimSite145.X3DNode::setName(CString("r_metacarpal_phalanx_5_pt"));
HAnimSite145.setTranslation(new float[]{-0.1929,0.789,-0.1064});
HAnimSegment137.addChild(&HAnimSite145);

HAnimJoint136.addChildren(&HAnimSegment137);

HAnimJoint127.addChildren(&HAnimJoint136);

HAnimJoint121.addChildren(&HAnimJoint127);

HAnimJoint94.addChildren(&HAnimJoint121);

HAnimJoint& HAnimJoint146 =  HAnimJoint();
HAnimJoint146.setDEF(CString("hanim_vc4"));
HAnimJoint146.X3DNode::setName(CString("vc4"));
HAnimJoint146.setCenter(new float[]{0.0,1.43,-0.0458});
HAnimSegment& HAnimSegment147 =  HAnimSegment();
HAnimSegment147.setDEF(CString("hanim_c4"));
HAnimSegment147.X3DNode::setName(CString("c4"));
HAnimJoint146.addChildren(&HAnimSegment147);

HAnimJoint94.addChildren(&HAnimJoint146);

HAnimJoint35.addChildren(&HAnimJoint94);

HAnimJoint& HAnimJoint148 =  HAnimJoint();
HAnimJoint148.setDEF(CString("hanim_vl5"));
HAnimJoint148.X3DNode::setName(CString("vl5"));
HAnimJoint148.setCenter(new float[]{0.0028,1.0568,-0.0776});
HAnimJoint& HAnimJoint149 =  HAnimJoint();
HAnimJoint149.setDEF(CString("hanim_skullbase"));
HAnimJoint149.X3DNode::setName(CString("skullbase"));
HAnimJoint149.setCenter(new float[]{0.0044,1.6209,0.0236});
HAnimSegment& HAnimSegment150 =  HAnimSegment();
HAnimSegment150.setDEF(CString("hanim_skull"));
HAnimSegment150.X3DNode::setName(CString("skull"));
Transform& Transform151 =  Transform();
Transform151.setTranslation(new float[]{0.0044,1.6209,0.0236});
Shape& Shape152 =  Shape();
Shape152.setUSE(CString("DiamondShape"));
Transform151.addChild(&Shape152);

HAnimSegment150.addChild(&Transform151);

HAnimSite& HAnimSite153 =  HAnimSite();
HAnimSite153.setDEF(CString("hanim_skull_vertex_tip"));
HAnimSite153.X3DNode::setName(CString("skull_vertex_tip"));
HAnimSite153.setTranslation(new float[]{0.005,1.7504,0.0055});
HAnimSegment150.addChild(&HAnimSite153);

HAnimSite& HAnimSite154 =  HAnimSite();
HAnimSite154.setDEF(CString("hanim_sellion_pt"));
HAnimSite154.X3DNode::setName(CString("sellion_pt"));
HAnimSite154.setTranslation(new float[]{0.0058,1.6316,0.0852});
HAnimSegment150.addChild(&HAnimSite154);

HAnimSite& HAnimSite155 =  HAnimSite();
HAnimSite155.setDEF(CString("hanim_r_infraorbitale_pt"));
HAnimSite155.X3DNode::setName(CString("r_infraorbitale_pt"));
HAnimSite155.setTranslation(new float[]{-0.0237,1.6171,0.0752});
HAnimSegment150.addChild(&HAnimSite155);

HAnimSite& HAnimSite156 =  HAnimSite();
HAnimSite156.setDEF(CString("hanim_l_infraorbitale_pt"));
HAnimSite156.X3DNode::setName(CString("l_infraorbitale_pt"));
HAnimSite156.setTranslation(new float[]{0.0341,1.6171,0.0752});
HAnimSegment150.addChild(&HAnimSite156);

HAnimSite& HAnimSite157 =  HAnimSite();
HAnimSite157.setDEF(CString("hanim_supramenton_pt"));
HAnimSite157.X3DNode::setName(CString("supramenton_pt"));
HAnimSite157.setTranslation(new float[]{0.0061,1.541,0.0805});
HAnimSegment150.addChild(&HAnimSite157);

HAnimSite& HAnimSite158 =  HAnimSite();
HAnimSite158.setDEF(CString("hanim_r_tragion_pt"));
HAnimSite158.X3DNode::setName(CString("r_tragion_pt"));
HAnimSite158.setTranslation(new float[]{-0.0646,1.6347,0.0302});
HAnimSegment150.addChild(&HAnimSite158);

HAnimSite& HAnimSite159 =  HAnimSite();
HAnimSite159.setDEF(CString("hanim_r_gonion_pt"));
HAnimSite159.X3DNode::setName(CString("r_gonion_pt"));
HAnimSite159.setTranslation(new float[]{-0.052,1.5529,0.0347});
HAnimSegment150.addChild(&HAnimSite159);

HAnimSite& HAnimSite160 =  HAnimSite();
HAnimSite160.setDEF(CString("hanim_l_tragion_pt"));
HAnimSite160.X3DNode::setName(CString("l_tragion_pt"));
HAnimSite160.setTranslation(new float[]{0.0739,1.6348,0.0282});
HAnimSegment150.addChild(&HAnimSite160);

HAnimSite& HAnimSite161 =  HAnimSite();
HAnimSite161.setDEF(CString("hanim_l_gonion_pt"));
HAnimSite161.X3DNode::setName(CString("l_gonion_pt"));
HAnimSite161.setTranslation(new float[]{0.0631,1.553,0.033});
HAnimSegment150.addChild(&HAnimSite161);

HAnimSite& HAnimSite162 =  HAnimSite();
HAnimSite162.setDEF(CString("hanim_nuchale_pt"));
HAnimSite162.X3DNode::setName(CString("nuchale_pt"));
HAnimSite162.setTranslation(new float[]{0.0039,1.5972,-0.0796});
HAnimSegment150.addChild(&HAnimSite162);

HAnimJoint149.addChildren(&HAnimSegment150);

HAnimJoint148.addChildren(&HAnimJoint149);

HAnimJoint35.addChildren(&HAnimJoint148);

HAnimHumanoid28.setSkeleton(&HAnimJoint35);

HAnimJoint& HAnimJoint163 =  HAnimJoint();
HAnimJoint163.setUSE(CString("hanim_humanoid_root"));
HAnimHumanoid28.setJoints(&HAnimJoint163);

HAnimJoint& HAnimJoint164 =  HAnimJoint();
HAnimJoint164.setUSE(CString("hanim_sacroiliac"));
HAnimHumanoid28.setJoints(&HAnimJoint164);

HAnimJoint& HAnimJoint165 =  HAnimJoint();
HAnimJoint165.setUSE(CString("hanim_vl1"));
HAnimHumanoid28.setJoints(&HAnimJoint165);

HAnimJoint& HAnimJoint166 =  HAnimJoint();
HAnimJoint166.setUSE(CString("hanim_vc4"));
HAnimHumanoid28.setJoints(&HAnimJoint166);

HAnimJoint& HAnimJoint167 =  HAnimJoint();
HAnimJoint167.setUSE(CString("hanim_skullbase"));
HAnimHumanoid28.setJoints(&HAnimJoint167);

HAnimJoint& HAnimJoint168 =  HAnimJoint();
HAnimJoint168.setUSE(CString("hanim_vl5"));
HAnimHumanoid28.setJoints(&HAnimJoint168);

HAnimJoint& HAnimJoint169 =  HAnimJoint();
HAnimJoint169.setUSE(CString("hanim_l_elbow"));
HAnimHumanoid28.setJoints(&HAnimJoint169);

HAnimJoint& HAnimJoint170 =  HAnimJoint();
HAnimJoint170.setUSE(CString("hanim_r_elbow"));
HAnimHumanoid28.setJoints(&HAnimJoint170);

HAnimJoint& HAnimJoint171 =  HAnimJoint();
HAnimJoint171.setUSE(CString("hanim_l_hip"));
HAnimHumanoid28.setJoints(&HAnimJoint171);

HAnimJoint& HAnimJoint172 =  HAnimJoint();
HAnimJoint172.setUSE(CString("hanim_r_hip"));
HAnimHumanoid28.setJoints(&HAnimJoint172);

HAnimJoint& HAnimJoint173 =  HAnimJoint();
HAnimJoint173.setUSE(CString("hanim_l_knee"));
HAnimHumanoid28.setJoints(&HAnimJoint173);

HAnimJoint& HAnimJoint174 =  HAnimJoint();
HAnimJoint174.setUSE(CString("hanim_r_knee"));
HAnimHumanoid28.setJoints(&HAnimJoint174);

HAnimJoint& HAnimJoint175 =  HAnimJoint();
HAnimJoint175.setUSE(CString("hanim_l_metatarsophalangeal_2"));
HAnimHumanoid28.setJoints(&HAnimJoint175);

HAnimJoint& HAnimJoint176 =  HAnimJoint();
HAnimJoint176.setUSE(CString("hanim_r_metatarsophalangeal_2"));
HAnimHumanoid28.setJoints(&HAnimJoint176);

HAnimJoint& HAnimJoint177 =  HAnimJoint();
HAnimJoint177.setUSE(CString("hanim_l_radiocarpal"));
HAnimHumanoid28.setJoints(&HAnimJoint177);

HAnimJoint& HAnimJoint178 =  HAnimJoint();
HAnimJoint178.setUSE(CString("hanim_r_radiocarpal"));
HAnimHumanoid28.setJoints(&HAnimJoint178);

HAnimJoint& HAnimJoint179 =  HAnimJoint();
HAnimJoint179.setUSE(CString("hanim_l_shoulder"));
HAnimHumanoid28.setJoints(&HAnimJoint179);

HAnimJoint& HAnimJoint180 =  HAnimJoint();
HAnimJoint180.setUSE(CString("hanim_r_shoulder"));
HAnimHumanoid28.setJoints(&HAnimJoint180);

HAnimJoint& HAnimJoint181 =  HAnimJoint();
HAnimJoint181.setUSE(CString("hanim_l_talocrural"));
HAnimHumanoid28.setJoints(&HAnimJoint181);

HAnimJoint& HAnimJoint182 =  HAnimJoint();
HAnimJoint182.setUSE(CString("hanim_r_talocrural"));
HAnimHumanoid28.setJoints(&HAnimJoint182);

HAnimSegment& HAnimSegment183 =  HAnimSegment();
HAnimSegment183.setUSE(CString("hanim_pelvis"));
HAnimHumanoid28.setSegments(&HAnimSegment183);

HAnimSegment& HAnimSegment184 =  HAnimSegment();
HAnimSegment184.setUSE(CString("hanim_l1"));
HAnimHumanoid28.setSegments(&HAnimSegment184);

HAnimSegment& HAnimSegment185 =  HAnimSegment();
HAnimSegment185.setUSE(CString("hanim_c4"));
HAnimHumanoid28.setSegments(&HAnimSegment185);

HAnimSegment& HAnimSegment186 =  HAnimSegment();
HAnimSegment186.setUSE(CString("hanim_skull"));
HAnimHumanoid28.setSegments(&HAnimSegment186);

HAnimSegment& HAnimSegment187 =  HAnimSegment();
HAnimSegment187.setUSE(CString("hanim_l_calf"));
HAnimHumanoid28.setSegments(&HAnimSegment187);

HAnimSegment& HAnimSegment188 =  HAnimSegment();
HAnimSegment188.setUSE(CString("hanim_r_calf"));
HAnimHumanoid28.setSegments(&HAnimSegment188);

HAnimSegment& HAnimSegment189 =  HAnimSegment();
HAnimSegment189.setUSE(CString("hanim_l_carpal"));
HAnimHumanoid28.setSegments(&HAnimSegment189);

HAnimSegment& HAnimSegment190 =  HAnimSegment();
HAnimSegment190.setUSE(CString("hanim_r_carpal"));
HAnimHumanoid28.setSegments(&HAnimSegment190);

HAnimSegment& HAnimSegment191 =  HAnimSegment();
HAnimSegment191.setUSE(CString("hanim_l_forearm"));
HAnimHumanoid28.setSegments(&HAnimSegment191);

HAnimSegment& HAnimSegment192 =  HAnimSegment();
HAnimSegment192.setUSE(CString("hanim_r_forearm"));
HAnimHumanoid28.setSegments(&HAnimSegment192);

HAnimSegment& HAnimSegment193 =  HAnimSegment();
HAnimSegment193.setUSE(CString("hanim_l_talus"));
HAnimHumanoid28.setSegments(&HAnimSegment193);

HAnimSegment& HAnimSegment194 =  HAnimSegment();
HAnimSegment194.setUSE(CString("hanim_r_talus"));
HAnimHumanoid28.setSegments(&HAnimSegment194);

HAnimSegment& HAnimSegment195 =  HAnimSegment();
HAnimSegment195.setUSE(CString("hanim_l_tarsal_proximal_phalanx_2"));
HAnimHumanoid28.setSegments(&HAnimSegment195);

HAnimSegment& HAnimSegment196 =  HAnimSegment();
HAnimSegment196.setUSE(CString("hanim_r_tarsal_proximal_phalanx_2"));
HAnimHumanoid28.setSegments(&HAnimSegment196);

HAnimSegment& HAnimSegment197 =  HAnimSegment();
HAnimSegment197.setUSE(CString("hanim_l_thigh"));
HAnimHumanoid28.setSegments(&HAnimSegment197);

HAnimSegment& HAnimSegment198 =  HAnimSegment();
HAnimSegment198.setUSE(CString("hanim_r_thigh"));
HAnimHumanoid28.setSegments(&HAnimSegment198);

HAnimSegment& HAnimSegment199 =  HAnimSegment();
HAnimSegment199.setUSE(CString("hanim_l_upperarm"));
HAnimHumanoid28.setSegments(&HAnimSegment199);

HAnimSegment& HAnimSegment200 =  HAnimSegment();
HAnimSegment200.setUSE(CString("hanim_r_upperarm"));
HAnimHumanoid28.setSegments(&HAnimSegment200);

HAnimSite& HAnimSite201 =  HAnimSite();
HAnimSite201.setUSE(CString("hanim_skull_vertex_tip"));
HAnimHumanoid28.setSites(&HAnimSite201);

HAnimSite& HAnimSite202 =  HAnimSite();
HAnimSite202.setUSE(CString("hanim_sellion_pt"));
HAnimHumanoid28.setSites(&HAnimSite202);

HAnimSite& HAnimSite203 =  HAnimSite();
HAnimSite203.setUSE(CString("hanim_supramenton_pt"));
HAnimHumanoid28.setSites(&HAnimSite203);

HAnimSite& HAnimSite204 =  HAnimSite();
HAnimSite204.setUSE(CString("hanim_nuchale_pt"));
HAnimHumanoid28.setSites(&HAnimSite204);

HAnimSite& HAnimSite205 =  HAnimSite();
HAnimSite205.setUSE(CString("hanim_l_calcaneus_posterior_pt"));
HAnimHumanoid28.setSites(&HAnimSite205);

HAnimSite& HAnimSite206 =  HAnimSite();
HAnimSite206.setUSE(CString("hanim_r_calcaneus_posterior_pt"));
HAnimHumanoid28.setSites(&HAnimSite206);

HAnimSite& HAnimSite207 =  HAnimSite();
HAnimSite207.setUSE(CString("hanim_l_dactylion_pt"));
HAnimHumanoid28.setSites(&HAnimSite207);

HAnimSite& HAnimSite208 =  HAnimSite();
HAnimSite208.setUSE(CString("hanim_r_dactylion_pt"));
HAnimHumanoid28.setSites(&HAnimSite208);

HAnimSite& HAnimSite209 =  HAnimSite();
HAnimSite209.setUSE(CString("hanim_l_femoral_lateral_epicondyle_pt"));
HAnimHumanoid28.setSites(&HAnimSite209);

HAnimSite& HAnimSite210 =  HAnimSite();
HAnimSite210.setUSE(CString("hanim_r_femoral_lateral_epicondyle_pt"));
HAnimHumanoid28.setSites(&HAnimSite210);

HAnimSite& HAnimSite211 =  HAnimSite();
HAnimSite211.setUSE(CString("hanim_l_femoral_medial_epicondyle_pt"));
HAnimHumanoid28.setSites(&HAnimSite211);

HAnimSite& HAnimSite212 =  HAnimSite();
HAnimSite212.setUSE(CString("hanim_r_femoral_medial_epicondyle_pt"));
HAnimHumanoid28.setSites(&HAnimSite212);

HAnimSite& HAnimSite213 =  HAnimSite();
HAnimSite213.setUSE(CString("hanim_r_gonion_pt"));
HAnimHumanoid28.setSites(&HAnimSite213);

HAnimSite& HAnimSite214 =  HAnimSite();
HAnimSite214.setUSE(CString("hanim_l_gonion_pt"));
HAnimHumanoid28.setSites(&HAnimSite214);

HAnimSite& HAnimSite215 =  HAnimSite();
HAnimSite215.setUSE(CString("hanim_l_hand_tip"));
HAnimHumanoid28.setSites(&HAnimSite215);

HAnimSite& HAnimSite216 =  HAnimSite();
HAnimSite216.setUSE(CString("hanim_r_hand_tip"));
HAnimHumanoid28.setSites(&HAnimSite216);

HAnimSite& HAnimSite217 =  HAnimSite();
HAnimSite217.setUSE(CString("hanim_l_humeral_lateral_epicondyle_pt"));
HAnimHumanoid28.setSites(&HAnimSite217);

HAnimSite& HAnimSite218 =  HAnimSite();
HAnimSite218.setUSE(CString("hanim_r_humeral_lateral_epicondyle_pt"));
HAnimHumanoid28.setSites(&HAnimSite218);

HAnimSite& HAnimSite219 =  HAnimSite();
HAnimSite219.setUSE(CString("hanim_l_humeral_medial_epicondyle_pt"));
HAnimHumanoid28.setSites(&HAnimSite219);

HAnimSite& HAnimSite220 =  HAnimSite();
HAnimSite220.setUSE(CString("hanim_r_humeral_medial_epicondyle_pt"));
HAnimHumanoid28.setSites(&HAnimSite220);

HAnimSite& HAnimSite221 =  HAnimSite();
HAnimSite221.setUSE(CString("hanim_r_infraorbitale_pt"));
HAnimHumanoid28.setSites(&HAnimSite221);

HAnimSite& HAnimSite222 =  HAnimSite();
HAnimSite222.setUSE(CString("hanim_l_infraorbitale_pt"));
HAnimHumanoid28.setSites(&HAnimSite222);

HAnimSite& HAnimSite223 =  HAnimSite();
HAnimSite223.setUSE(CString("hanim_l_knee_crease_pt"));
HAnimHumanoid28.setSites(&HAnimSite223);

HAnimSite& HAnimSite224 =  HAnimSite();
HAnimSite224.setUSE(CString("hanim_r_knee_crease_pt"));
HAnimHumanoid28.setSites(&HAnimSite224);

HAnimSite& HAnimSite225 =  HAnimSite();
HAnimSite225.setUSE(CString("hanim_l_lateral_malleolus_pt"));
HAnimHumanoid28.setSites(&HAnimSite225);

HAnimSite& HAnimSite226 =  HAnimSite();
HAnimSite226.setUSE(CString("hanim_r_lateral_malleolus_pt"));
HAnimHumanoid28.setSites(&HAnimSite226);

HAnimSite& HAnimSite227 =  HAnimSite();
HAnimSite227.setUSE(CString("hanim_l_medial_malleolus_pt"));
HAnimHumanoid28.setSites(&HAnimSite227);

HAnimSite& HAnimSite228 =  HAnimSite();
HAnimSite228.setUSE(CString("hanim_r_medial_malleolus_pt"));
HAnimHumanoid28.setSites(&HAnimSite228);

HAnimSite& HAnimSite229 =  HAnimSite();
HAnimSite229.setUSE(CString("hanim_l_metacarpal_phalanx_2_pt"));
HAnimHumanoid28.setSites(&HAnimSite229);

HAnimSite& HAnimSite230 =  HAnimSite();
HAnimSite230.setUSE(CString("hanim_r_metacarpal_phalanx_2_pt"));
HAnimHumanoid28.setSites(&HAnimSite230);

HAnimSite& HAnimSite231 =  HAnimSite();
HAnimSite231.setUSE(CString("hanim_l_metacarpal_phalanx_5_pt"));
HAnimHumanoid28.setSites(&HAnimSite231);

HAnimSite& HAnimSite232 =  HAnimSite();
HAnimSite232.setUSE(CString("hanim_r_metacarpal_phalanx_5_pt"));
HAnimHumanoid28.setSites(&HAnimSite232);

HAnimSite& HAnimSite233 =  HAnimSite();
HAnimSite233.setUSE(CString("hanim_l_metatarsal_phalanx_1_pt"));
HAnimHumanoid28.setSites(&HAnimSite233);

HAnimSite& HAnimSite234 =  HAnimSite();
HAnimSite234.setUSE(CString("hanim_r_metatarsal_phalanx_1_pt"));
HAnimHumanoid28.setSites(&HAnimSite234);

HAnimSite& HAnimSite235 =  HAnimSite();
HAnimSite235.setUSE(CString("hanim_l_metatarsal_phalanx_5_pt"));
HAnimHumanoid28.setSites(&HAnimSite235);

HAnimSite& HAnimSite236 =  HAnimSite();
HAnimSite236.setUSE(CString("hanim_r_metatarsal_phalanx_5_pt"));
HAnimHumanoid28.setSites(&HAnimSite236);

HAnimSite& HAnimSite237 =  HAnimSite();
HAnimSite237.setUSE(CString("hanim_l_middistal_tip"));
HAnimHumanoid28.setSites(&HAnimSite237);

HAnimSite& HAnimSite238 =  HAnimSite();
HAnimSite238.setUSE(CString("hanim_r_middistal_tip"));
HAnimHumanoid28.setSites(&HAnimSite238);

HAnimSite& HAnimSite239 =  HAnimSite();
HAnimSite239.setUSE(CString("hanim_l_olecranon_pt"));
HAnimHumanoid28.setSites(&HAnimSite239);

HAnimSite& HAnimSite240 =  HAnimSite();
HAnimSite240.setUSE(CString("hanim_r_olecranon_pt"));
HAnimHumanoid28.setSites(&HAnimSite240);

HAnimSite& HAnimSite241 =  HAnimSite();
HAnimSite241.setUSE(CString("hanim_l_radial_styloid_pt"));
HAnimHumanoid28.setSites(&HAnimSite241);

HAnimSite& HAnimSite242 =  HAnimSite();
HAnimSite242.setUSE(CString("hanim_r_radial_styloid_pt"));
HAnimHumanoid28.setSites(&HAnimSite242);

HAnimSite& HAnimSite243 =  HAnimSite();
HAnimSite243.setUSE(CString("hanim_l_radiale_pt"));
HAnimHumanoid28.setSites(&HAnimSite243);

HAnimSite& HAnimSite244 =  HAnimSite();
HAnimSite244.setUSE(CString("hanim_r_radiale_pt"));
HAnimHumanoid28.setSites(&HAnimSite244);

HAnimSite& HAnimSite245 =  HAnimSite();
HAnimSite245.setUSE(CString("hanim_l_sphyrion_pt"));
HAnimHumanoid28.setSites(&HAnimSite245);

HAnimSite& HAnimSite246 =  HAnimSite();
HAnimSite246.setUSE(CString("hanim_r_sphyrion_pt"));
HAnimHumanoid28.setSites(&HAnimSite246);

HAnimSite& HAnimSite247 =  HAnimSite();
HAnimSite247.setUSE(CString("hanim_l_tarsal_distal_phalanx_2_pt"));
HAnimHumanoid28.setSites(&HAnimSite247);

HAnimSite& HAnimSite248 =  HAnimSite();
HAnimSite248.setUSE(CString("hanim_r_tarsal_distal_phalanx_2_pt"));
HAnimHumanoid28.setSites(&HAnimSite248);

HAnimSite& HAnimSite249 =  HAnimSite();
HAnimSite249.setUSE(CString("hanim_r_tragion_pt"));
HAnimHumanoid28.setSites(&HAnimSite249);

HAnimSite& HAnimSite250 =  HAnimSite();
HAnimSite250.setUSE(CString("hanim_l_tragion_pt"));
HAnimHumanoid28.setSites(&HAnimSite250);

HAnimSite& HAnimSite251 =  HAnimSite();
HAnimSite251.setUSE(CString("hanim_l_ulnar_styloid_pt"));
HAnimHumanoid28.setSites(&HAnimSite251);

HAnimSite& HAnimSite252 =  HAnimSite();
HAnimSite252.setUSE(CString("hanim_r_ulnar_styloid_pt"));
HAnimHumanoid28.setSites(&HAnimSite252);

HAnimSite& HAnimSite253 =  HAnimSite();
HAnimSite253.setDEF(CString("hanim_DiamondManLOA1_view"));
HAnimSite253.X3DNode::setName(CString("DiamondManLOA1_view"));
Viewpoint& Viewpoint254 =  Viewpoint();
Viewpoint254.setDEF(CString("InclinedView"));
Viewpoint254.setDescription(CString("Inclined View"));
Viewpoint254.setPosition(new float[]{1.62,1.05,2.06});
Viewpoint254.setOrientation(new float[]{-0.113,0.993,0.0347,0.671});
HAnimSite253.addChild(&Viewpoint254);

Viewpoint& Viewpoint255 =  Viewpoint();
Viewpoint255.setDEF(CString("FrontView"));
Viewpoint255.setDescription(CString("Front View"));
Viewpoint255.setPosition(new float[]{0.0,0.854,2.57665});
HAnimSite253.addChild(&Viewpoint255);

Viewpoint& Viewpoint256 =  Viewpoint();
Viewpoint256.setDEF(CString("SideView"));
Viewpoint256.setDescription(CString("Side View"));
Viewpoint256.setPosition(new float[]{2.5929,0.854,0.0});
Viewpoint256.setOrientation(new float[]{0.0,1.0,0.0,1.57079});
HAnimSite253.addChild(&Viewpoint256);

Viewpoint& Viewpoint257 =  Viewpoint();
Viewpoint257.setDEF(CString("TopView"));
Viewpoint257.setDescription(CString("Top View"));
Viewpoint257.setPosition(new float[]{0.0,3.4495,0.0});
Viewpoint257.setOrientation(new float[]{1.0,0.0,0.0,-1.57079});
HAnimSite253.addChild(&Viewpoint257);

HAnimHumanoid28.setViewpoints(&HAnimSite253);

Scene24.addChild(&HAnimHumanoid28);

X3D0.setScene(&Scene24);

//}

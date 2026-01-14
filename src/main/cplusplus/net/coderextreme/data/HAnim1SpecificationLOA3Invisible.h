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
meta3.setContent(CString("HAnimSpecificationLOA3Invisible.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("description"));
meta4.setContent(CString("HAnim Specification reference example providing full coverage (and no illustrated visibility) of all specified HAnim constructs, also suitable for re-use as an authoring template."));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("reference"));
meta5.setContent(CString("https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("reference"));
meta6.setContent(CString("HAnimSpecificationLOA3Illustrated.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("reference"));
meta7.setContent(CString("HAnimSpecificationLOA3Animation.x3d"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("reference"));
meta8.setContent(CString("HAnimSpecificationExampleChangeLog.txt"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("reference"));
meta9.setContent(CString("Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989."));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("reference"));
meta10.setContent(CString("http://www.cis.upenn.edu/~badler/anthro/89-71.ps"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("reference"));
meta11.setContent(CString("tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("reference"));
meta12.setContent(CString("originals/LOA3ExampleSourceWithDiamondsOriginal.wrl"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("reference"));
meta13.setContent(CString("originals/LOA3ExampleSourceWithDiamondsOriginal.x3d"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("reference"));
meta14.setContent(CString("originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(CString("reference"));
meta15.setContent(CString("HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(CString("created"));
meta16.setContent(CString("24 April 2013"));
head1.addMeta(&meta16);

meta& meta17 =  meta();
meta17.setName(CString("modified"));
meta17.setContent(CString("Tue, 09 Sep 2025 19:39:08 GMT"));
head1.addMeta(&meta17);

meta& meta18 =  meta();
meta18.setName(CString("error"));
meta18.setContent(CString("Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported"));
head1.addMeta(&meta18);

meta& meta19 =  meta();
meta19.setName(CString("creator"));
meta19.setContent(CString("Matthew T. Beitler, Joe D. Williams, Don Brutzman"));
head1.addMeta(&meta19);

meta& meta20 =  meta();
meta20.setName(CString("Image"));
meta20.setContent(CString("images/BonesAllSkeletonFrontViewLOA1.png"));
head1.addMeta(&meta20);

meta& meta21 =  meta();
meta21.setName(CString("Image"));
meta21.setContent(CString("images/BonesAllSkeletonFrontViewLOA2.png"));
head1.addMeta(&meta21);

meta& meta22 =  meta();
meta22.setName(CString("Image"));
meta22.setContent(CString("images/BonesAllSkeletonFrontViewLOA3.png"));
head1.addMeta(&meta22);

meta& meta23 =  meta();
meta23.setName(CString("TODO"));
meta23.setContent(CString("move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations"));
head1.addMeta(&meta23);

meta& meta24 =  meta();
meta24.setName(CString("TODO"));
meta24.setContent(CString("insert MetadataInteger nodes indicating LOA for each Joint and Segment"));
head1.addMeta(&meta24);

meta& meta25 =  meta();
meta25.setName(CString("translator"));
meta25.setContent(CString("Don Brutzman and Joe Williams"));
head1.addMeta(&meta25);

meta& meta26 =  meta();
meta26.setName(CString("generator"));
meta26.setContent(CString("BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo"));
head1.addMeta(&meta26);

meta& meta27 =  meta();
meta27.setName(CString("generator"));
meta27.setContent(CString("X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit"));
head1.addMeta(&meta27);

X3D0.setHead(&head1);

Scene& Scene28 =  Scene();
Background& Background29 =  Background();
Background29.setSkyColor(new float[]{0.3,0.3,0.3}, 3);
Scene28.addChild(&Background29);

NavigationInfo& NavigationInfo30 =  NavigationInfo();
Scene28.addChild(&NavigationInfo30);

Group& Group31 =  Group();
Group31.setDEF(CString("Original_WorldInfo"));
WorldInfo& WorldInfo32 =  WorldInfo();
WorldInfo32.setTitle(CString("HANIM 200x Default Joint Centers, LOA3"));
WorldInfo32.setInfo(new CString[]{CString(" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps ")}, 1);
Group31.addChild(&WorldInfo32);

Scene28.addChild(&Group31);

Viewpoint& Viewpoint33 =  Viewpoint();
Viewpoint33.setDescription(CString("Humanoid LOA 3 Front"));
Viewpoint33.setPosition(new float[]{0.0,0.4,4.0});
Viewpoint33.setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
Scene28.addChild(&Viewpoint33);

Viewpoint& Viewpoint34 =  Viewpoint();
Viewpoint34.setDescription(CString("Humanoid LOA 3 Front Close"));
Viewpoint34.setPosition(new float[]{0.0,0.8,2.0});
Viewpoint34.setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
Scene28.addChild(&Viewpoint34);

Viewpoint& Viewpoint35 =  Viewpoint();
Viewpoint35.setDescription(CString("Humanoid LOA 3 Front Closer"));
Viewpoint35.setPosition(new float[]{0.0,1.2,1.0});
Viewpoint35.setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
Scene28.addChild(&Viewpoint35);

Viewpoint& Viewpoint36 =  Viewpoint();
Viewpoint36.setDescription(CString("Humanoid LOA 3 Front Face"));
Viewpoint36.setPosition(new float[]{0.0,1.63,1.0});
Viewpoint36.setCenterOfRotation(new float[]{0.0,1.5,0.0016});
Scene28.addChild(&Viewpoint36);

Viewpoint& Viewpoint37 =  Viewpoint();
Viewpoint37.setDescription(CString("Humanoid LOA 3 Right Side"));
Viewpoint37.setPosition(new float[]{2.6,0.8,0.0});
Viewpoint37.setOrientation(new float[]{0.0,1.0,0.0,1.5708});
Viewpoint37.setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
Scene28.addChild(&Viewpoint37);

Viewpoint& Viewpoint38 =  Viewpoint();
Viewpoint38.setDescription(CString("Humanoid LOA 3 Right Side Close"));
Viewpoint38.setPosition(new float[]{1.0,0.8,0.5});
Viewpoint38.setOrientation(new float[]{0.0,1.0,0.0,1.2});
Viewpoint38.setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
Scene28.addChild(&Viewpoint38);

Viewpoint& Viewpoint39 =  Viewpoint();
Viewpoint39.setDescription(CString("Humanoid LOA 3 Left Side Close"));
Viewpoint39.setPosition(new float[]{-1.0,0.8,0.5});
Viewpoint39.setOrientation(new float[]{0.0,1.0,0.0,-1.2});
Viewpoint39.setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
Scene28.addChild(&Viewpoint39);

Viewpoint& Viewpoint40 =  Viewpoint();
Viewpoint40.setDescription(CString("Humanoid LOA 3 Left Side"));
Viewpoint40.setPosition(new float[]{-2.6,0.8,0.0});
Viewpoint40.setOrientation(new float[]{0.0,1.0,0.0,-1.5708});
Viewpoint40.setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
Scene28.addChild(&Viewpoint40);

Viewpoint& Viewpoint41 =  Viewpoint();
Viewpoint41.setDescription(CString("Humanoid LOA 3 Top"));
Viewpoint41.setPosition(new float[]{0.0,3.5,0.0});
Viewpoint41.setOrientation(new float[]{1.0,0.0,0.0,-1.5708});
Viewpoint41.setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
Scene28.addChild(&Viewpoint41);

HAnimHumanoid& HAnimHumanoid42 =  HAnimHumanoid();
HAnimHumanoid42.setDEF(CString("hanim_humanoid"));
HAnimHumanoid42.X3DNode::setName(CString("humanoid"));
HAnimHumanoid42.setInfo(new CString[]{CString("authorName=Matthew T. Beitler Joe D. Williams Don Brutzman"), CString("authorEmail=HAnim@web3D.org"), CString("copyright=none"), CString("creationDate=12 May 1999"), CString("usageRestrictions=none"), CString("humanoidVersion=2.0"), CString("height=1.7504")}, 7);
HAnimHumanoid42.setVersion(CString("1.0"));
HAnimJoint& HAnimJoint43 =  HAnimJoint();
HAnimJoint43.setDEF(CString("hanim_humanoid_root"));
HAnimJoint43.X3DNode::setName(CString("humanoid_root"));
HAnimJoint43.setCenter(new float[]{0.0,0.824,0.0277});
HAnimSegment& HAnimSegment44 =  HAnimSegment();
HAnimSegment44.setDEF(CString("hanim_sacrum"));
HAnimSegment44.X3DNode::setName(CString("sacrum"));
HAnimJoint43.addChildren(&HAnimSegment44);

HAnimJoint& HAnimJoint45 =  HAnimJoint();
HAnimJoint45.setDEF(CString("hanim_sacroiliac"));
HAnimJoint45.X3DNode::setName(CString("sacroiliac"));
HAnimJoint45.setCenter(new float[]{0.0,0.9149,0.0016});
HAnimSegment& HAnimSegment46 =  HAnimSegment();
HAnimSegment46.setDEF(CString("hanim_pelvis"));
HAnimSegment46.X3DNode::setName(CString("pelvis"));
HAnimSite& HAnimSite47 =  HAnimSite();
HAnimSite47.setDEF(CString("hanim_r_iliocristale_pt"));
HAnimSite47.X3DNode::setName(CString("r_iliocristale_pt"));
HAnimSite47.setTranslation(new float[]{-0.1525,1.0628,0.0035});
HAnimSegment46.addChild(&HAnimSite47);

HAnimSite& HAnimSite48 =  HAnimSite();
HAnimSite48.setDEF(CString("hanim_r_trochanterion_pt"));
HAnimSite48.X3DNode::setName(CString("r_trochanterion_pt"));
HAnimSite48.setTranslation(new float[]{-0.1689,0.8419,0.0352});
HAnimSegment46.addChild(&HAnimSite48);

HAnimSite& HAnimSite49 =  HAnimSite();
HAnimSite49.setDEF(CString("hanim_l_iliocristale_pt"));
HAnimSite49.X3DNode::setName(CString("l_iliocristale_pt"));
HAnimSite49.setTranslation(new float[]{0.1612,1.0537,0.0008});
HAnimSegment46.addChild(&HAnimSite49);

HAnimSite& HAnimSite50 =  HAnimSite();
HAnimSite50.setDEF(CString("hanim_l_trochanterion_pt"));
HAnimSite50.X3DNode::setName(CString("l_trochanterion_pt"));
HAnimSite50.setTranslation(new float[]{0.1677,0.8336,0.0303});
HAnimSegment46.addChild(&HAnimSite50);

HAnimSite& HAnimSite51 =  HAnimSite();
HAnimSite51.setDEF(CString("hanim_r_asis_pt"));
HAnimSite51.X3DNode::setName(CString("r_asis_pt"));
HAnimSite51.setTranslation(new float[]{-0.0887,1.0021,0.1112});
HAnimSegment46.addChild(&HAnimSite51);

HAnimSite& HAnimSite52 =  HAnimSite();
HAnimSite52.setDEF(CString("hanim_l_asis_pt"));
HAnimSite52.X3DNode::setName(CString("l_asis_pt"));
HAnimSite52.setTranslation(new float[]{0.0925,0.9983,0.1052});
HAnimSegment46.addChild(&HAnimSite52);

HAnimSite& HAnimSite53 =  HAnimSite();
HAnimSite53.setDEF(CString("hanim_r_psis_pt"));
HAnimSite53.X3DNode::setName(CString("r_psis_pt"));
HAnimSite53.setTranslation(new float[]{-0.0716,1.019,-0.1138});
HAnimSegment46.addChild(&HAnimSite53);

HAnimSite& HAnimSite54 =  HAnimSite();
HAnimSite54.setDEF(CString("hanim_l_psis_pt"));
HAnimSite54.X3DNode::setName(CString("l_psis_pt"));
HAnimSite54.setTranslation(new float[]{0.0774,1.019,-0.1151});
HAnimSegment46.addChild(&HAnimSite54);

HAnimSite& HAnimSite55 =  HAnimSite();
HAnimSite55.setDEF(CString("hanim_crotch_pt"));
HAnimSite55.X3DNode::setName(CString("crotch_pt"));
HAnimSite55.setTranslation(new float[]{0.0034,0.8266,0.0257});
HAnimSegment46.addChild(&HAnimSite55);

HAnimJoint45.addChildren(&HAnimSegment46);

HAnimJoint& HAnimJoint56 =  HAnimJoint();
HAnimJoint56.setDEF(CString("hanim_l_hip"));
HAnimJoint56.X3DNode::setName(CString("l_hip"));
HAnimJoint56.setCenter(new float[]{0.0961,0.9124,-0.0001});
HAnimSegment& HAnimSegment57 =  HAnimSegment();
HAnimSegment57.setDEF(CString("hanim_l_thigh"));
HAnimSegment57.X3DNode::setName(CString("l_thigh"));
HAnimSite& HAnimSite58 =  HAnimSite();
HAnimSite58.setDEF(CString("hanim_l_knee_crease_pt"));
HAnimSite58.X3DNode::setName(CString("l_knee_crease_pt"));
HAnimSite58.setTranslation(new float[]{0.0993,0.4881,-0.0309});
HAnimSegment57.addChild(&HAnimSite58);

HAnimSite& HAnimSite59 =  HAnimSite();
HAnimSite59.setDEF(CString("hanim_l_femoral_lateral_epicn_pt"));
HAnimSite59.X3DNode::setName(CString("l_femoral_lateral_epicn_pt"));
HAnimSite59.setTranslation(new float[]{0.1598,0.4967,0.0297});
HAnimSegment57.addChild(&HAnimSite59);

HAnimSite& HAnimSite60 =  HAnimSite();
HAnimSite60.setDEF(CString("hanim_l_femoral_medial_epicn_pt"));
HAnimSite60.X3DNode::setName(CString("l_femoral_medial_epicn_pt"));
HAnimSite60.setTranslation(new float[]{0.0398,0.4946,0.0303});
HAnimSegment57.addChild(&HAnimSite60);

HAnimJoint56.addChildren(&HAnimSegment57);

HAnimJoint& HAnimJoint61 =  HAnimJoint();
HAnimJoint61.setDEF(CString("hanim_l_knee"));
HAnimJoint61.X3DNode::setName(CString("l_knee"));
HAnimJoint61.setCenter(new float[]{0.104,0.4867,0.0308});
HAnimSegment& HAnimSegment62 =  HAnimSegment();
HAnimSegment62.setDEF(CString("hanim_l_calf"));
HAnimSegment62.X3DNode::setName(CString("l_calf"));
HAnimJoint61.addChildren(&HAnimSegment62);

HAnimJoint& HAnimJoint63 =  HAnimJoint();
HAnimJoint63.setDEF(CString("hanim_l_ankle"));
HAnimJoint63.X3DNode::setName(CString("l_ankle"));
HAnimJoint63.setCenter(new float[]{0.1101,0.0656,-0.0736});
HAnimSegment& HAnimSegment64 =  HAnimSegment();
HAnimSegment64.setDEF(CString("hanim_l_hindfoot"));
HAnimSegment64.X3DNode::setName(CString("l_hindfoot"));
HAnimSite& HAnimSite65 =  HAnimSite();
HAnimSite65.setDEF(CString("hanim_l_lateral_malleolus_pt"));
HAnimSite65.X3DNode::setName(CString("l_lateral_malleolus_pt"));
HAnimSite65.setTranslation(new float[]{0.1308,0.0597,-0.1032});
HAnimSegment64.addChild(&HAnimSite65);

HAnimSite& HAnimSite66 =  HAnimSite();
HAnimSite66.setDEF(CString("hanim_l_medial_malleolus_pt"));
HAnimSite66.X3DNode::setName(CString("l_medial_malleolus_pt"));
HAnimSite66.setTranslation(new float[]{0.089,0.0716,-0.0881});
HAnimSegment64.addChild(&HAnimSite66);

HAnimSite& HAnimSite67 =  HAnimSite();
HAnimSite67.setDEF(CString("hanim_l_sphyrion_pt"));
HAnimSite67.X3DNode::setName(CString("l_sphyrion_pt"));
HAnimSite67.setTranslation(new float[]{0.089,0.0575,-0.0943});
HAnimSegment64.addChild(&HAnimSite67);

HAnimSite& HAnimSite68 =  HAnimSite();
HAnimSite68.setDEF(CString("hanim_l_calcaneous_post_pt"));
HAnimSite68.X3DNode::setName(CString("l_calcaneous_post_pt"));
HAnimSite68.setTranslation(new float[]{0.0974,0.0259,-0.1171});
HAnimSegment64.addChild(&HAnimSite68);

HAnimJoint63.addChildren(&HAnimSegment64);

HAnimJoint& HAnimJoint69 =  HAnimJoint();
HAnimJoint69.setDEF(CString("hanim_l_subtalar"));
HAnimJoint69.X3DNode::setName(CString("l_subtalar"));
HAnimJoint69.setCenter(new float[]{0.1086,0.0001,-0.0368});
HAnimSegment& HAnimSegment70 =  HAnimSegment();
HAnimSegment70.setDEF(CString("hanim_l_midproximal"));
HAnimSegment70.X3DNode::setName(CString("l_midproximal"));
HAnimJoint69.addChildren(&HAnimSegment70);

HAnimJoint& HAnimJoint71 =  HAnimJoint();
HAnimJoint71.setDEF(CString("hanim_l_midtarsal"));
HAnimJoint71.X3DNode::setName(CString("l_midtarsal"));
HAnimJoint71.setCenter(new float[]{0.1086,0.0001,0.0368});
HAnimSegment& HAnimSegment72 =  HAnimSegment();
HAnimSegment72.setDEF(CString("hanim_l_middistal"));
HAnimSegment72.X3DNode::setName(CString("l_middistal"));
HAnimSite& HAnimSite73 =  HAnimSite();
HAnimSite73.setDEF(CString("hanim_l_metatarsal_pha1_pt"));
HAnimSite73.X3DNode::setName(CString("l_metatarsal_pha1_pt"));
HAnimSite73.setTranslation(new float[]{0.0816,0.0232,0.0106});
HAnimSegment72.addChild(&HAnimSite73);

HAnimJoint71.addChildren(&HAnimSegment72);

HAnimJoint& HAnimJoint74 =  HAnimJoint();
HAnimJoint74.setDEF(CString("hanim_l_metatarsal"));
HAnimJoint74.X3DNode::setName(CString("l_metatarsal"));
HAnimJoint74.setCenter(new float[]{0.1086,0.0,0.0762});
HAnimSegment& HAnimSegment75 =  HAnimSegment();
HAnimSegment75.setDEF(CString("hanim_l_forefoot"));
HAnimSegment75.X3DNode::setName(CString("l_forefoot"));
HAnimSite& HAnimSite76 =  HAnimSite();
HAnimSite76.setDEF(CString("hanim_l_forefoot_tip"));
HAnimSite76.X3DNode::setName(CString("l_forefoot_tip"));
HAnimSite76.setTranslation(new float[]{0.1354,0.0016,0.1476});
HAnimSegment75.addChild(&HAnimSite76);

HAnimSite& HAnimSite77 =  HAnimSite();
HAnimSite77.setDEF(CString("hanim_l_metatarsal_pha5_pt"));
HAnimSite77.X3DNode::setName(CString("l_metatarsal_pha5_pt"));
HAnimSite77.setTranslation(new float[]{0.1825,0.007,0.0928});
HAnimSegment75.addChild(&HAnimSite77);

HAnimSite& HAnimSite78 =  HAnimSite();
HAnimSite78.setDEF(CString("hanim_l_digit2_pt"));
HAnimSite78.X3DNode::setName(CString("l_digit2_pt"));
HAnimSite78.setTranslation(new float[]{0.1195,0.0079,0.1433});
HAnimSegment75.addChild(&HAnimSite78);

HAnimJoint74.addChildren(&HAnimSegment75);

HAnimJoint71.addChildren(&HAnimJoint74);

HAnimJoint69.addChildren(&HAnimJoint71);

HAnimJoint63.addChildren(&HAnimJoint69);

HAnimJoint61.addChildren(&HAnimJoint63);

HAnimJoint56.addChildren(&HAnimJoint61);

HAnimJoint45.addChildren(&HAnimJoint56);

HAnimJoint& HAnimJoint79 =  HAnimJoint();
HAnimJoint79.setDEF(CString("hanim_r_hip"));
HAnimJoint79.X3DNode::setName(CString("r_hip"));
HAnimJoint79.setCenter(new float[]{-0.0961,0.9124,-0.0001});
HAnimSegment& HAnimSegment80 =  HAnimSegment();
HAnimSegment80.setDEF(CString("hanim_r_thigh"));
HAnimSegment80.X3DNode::setName(CString("r_thigh"));
HAnimSite& HAnimSite81 =  HAnimSite();
HAnimSite81.setDEF(CString("hanim_r_knee_crease_pt"));
HAnimSite81.X3DNode::setName(CString("r_knee_crease_pt"));
HAnimSite81.setTranslation(new float[]{-0.0825,0.4932,-0.0326});
HAnimSegment80.addChild(&HAnimSite81);

HAnimSite& HAnimSite82 =  HAnimSite();
HAnimSite82.setDEF(CString("hanim_r_femoral_lateral_epicn_pt"));
HAnimSite82.X3DNode::setName(CString("r_femoral_lateral_epicn_pt"));
HAnimSite82.setTranslation(new float[]{-0.1421,0.4992,0.031});
HAnimSegment80.addChild(&HAnimSite82);

HAnimSite& HAnimSite83 =  HAnimSite();
HAnimSite83.setDEF(CString("hanim_r_femoral_medial_epicn_pt"));
HAnimSite83.X3DNode::setName(CString("r_femoral_medial_epicn_pt"));
HAnimSite83.setTranslation(new float[]{-0.0221,0.5014,0.0289});
HAnimSegment80.addChild(&HAnimSite83);

HAnimJoint79.addChildren(&HAnimSegment80);

HAnimJoint& HAnimJoint84 =  HAnimJoint();
HAnimJoint84.setDEF(CString("hanim_r_knee"));
HAnimJoint84.X3DNode::setName(CString("r_knee"));
HAnimJoint84.setCenter(new float[]{-0.104,0.4867,0.0308});
HAnimSegment& HAnimSegment85 =  HAnimSegment();
HAnimSegment85.setDEF(CString("hanim_r_calf"));
HAnimSegment85.X3DNode::setName(CString("r_calf"));
HAnimJoint84.addChildren(&HAnimSegment85);

HAnimJoint& HAnimJoint86 =  HAnimJoint();
HAnimJoint86.setDEF(CString("hanim_r_ankle"));
HAnimJoint86.X3DNode::setName(CString("r_ankle"));
HAnimJoint86.setCenter(new float[]{-0.1101,0.0656,-0.0736});
HAnimSegment& HAnimSegment87 =  HAnimSegment();
HAnimSegment87.setDEF(CString("hanim_r_hindfoot"));
HAnimSegment87.X3DNode::setName(CString("r_hindfoot"));
HAnimSite& HAnimSite88 =  HAnimSite();
HAnimSite88.setDEF(CString("hanim_r_lateral_malleolus_pt"));
HAnimSite88.X3DNode::setName(CString("r_lateral_malleolus_pt"));
HAnimSite88.setTranslation(new float[]{-0.1006,0.0658,-0.1075});
HAnimSegment87.addChild(&HAnimSite88);

HAnimSite& HAnimSite89 =  HAnimSite();
HAnimSite89.setDEF(CString("hanim_r_medial_malleolus_pt"));
HAnimSite89.X3DNode::setName(CString("r_medial_malleolus_pt"));
HAnimSite89.setTranslation(new float[]{-0.0591,0.076,-0.0928});
HAnimSegment87.addChild(&HAnimSite89);

HAnimSite& HAnimSite90 =  HAnimSite();
HAnimSite90.setDEF(CString("hanim_r_sphyrion_pt"));
HAnimSite90.X3DNode::setName(CString("r_sphyrion_pt"));
HAnimSite90.setTranslation(new float[]{-0.0603,0.061,-0.1002});
HAnimSegment87.addChild(&HAnimSite90);

HAnimSite& HAnimSite91 =  HAnimSite();
HAnimSite91.setDEF(CString("hanim_r_calcaneous_post_pt"));
HAnimSite91.X3DNode::setName(CString("r_calcaneous_post_pt"));
HAnimSite91.setTranslation(new float[]{-0.0692,0.0297,-0.1221});
HAnimSegment87.addChild(&HAnimSite91);

HAnimJoint86.addChildren(&HAnimSegment87);

HAnimJoint& HAnimJoint92 =  HAnimJoint();
HAnimJoint92.setDEF(CString("hanim_r_subtalar"));
HAnimJoint92.X3DNode::setName(CString("r_subtalar"));
HAnimJoint92.setCenter(new float[]{-0.1086,0.0001,-0.0368});
HAnimSegment& HAnimSegment93 =  HAnimSegment();
HAnimSegment93.setDEF(CString("hanim_r_midproximal"));
HAnimSegment93.X3DNode::setName(CString("r_midproximal"));
HAnimJoint92.addChildren(&HAnimSegment93);

HAnimJoint& HAnimJoint94 =  HAnimJoint();
HAnimJoint94.setDEF(CString("hanim_r_midtarsal"));
HAnimJoint94.X3DNode::setName(CString("r_midtarsal"));
HAnimJoint94.setCenter(new float[]{-0.1086,0.0001,0.0368});
HAnimSegment& HAnimSegment95 =  HAnimSegment();
HAnimSegment95.setDEF(CString("hanim_r_middistal"));
HAnimSegment95.X3DNode::setName(CString("r_middistal"));
HAnimSite& HAnimSite96 =  HAnimSite();
HAnimSite96.setDEF(CString("hanim_r_metatarsal_pha1_pt"));
HAnimSite96.X3DNode::setName(CString("r_metatarsal_pha1_pt"));
HAnimSite96.setTranslation(new float[]{-0.0521,0.026,0.0127});
HAnimSegment95.addChild(&HAnimSite96);

HAnimJoint94.addChildren(&HAnimSegment95);

HAnimJoint& HAnimJoint97 =  HAnimJoint();
HAnimJoint97.setDEF(CString("hanim_r_metatarsal"));
HAnimJoint97.X3DNode::setName(CString("r_metatarsal"));
HAnimJoint97.setCenter(new float[]{-0.1086,0.0,0.0762});
HAnimSegment& HAnimSegment98 =  HAnimSegment();
HAnimSegment98.setDEF(CString("hanim_r_forefoot"));
HAnimSegment98.X3DNode::setName(CString("r_forefoot"));
HAnimSite& HAnimSite99 =  HAnimSite();
HAnimSite99.setDEF(CString("hanim_r_forefoot_tip"));
HAnimSite99.X3DNode::setName(CString("r_forefoot_tip"));
HAnimSite99.setTranslation(new float[]{-0.1043,0.0227,0.145});
HAnimSegment98.addChild(&HAnimSite99);

HAnimSite& HAnimSite100 =  HAnimSite();
HAnimSite100.setDEF(CString("hanim_r_metatarsal_pha5_pt"));
HAnimSite100.X3DNode::setName(CString("r_metatarsal_pha5_pt"));
HAnimSite100.setTranslation(new float[]{-0.1523,0.0166,0.0895});
HAnimSegment98.addChild(&HAnimSite100);

HAnimSite& HAnimSite101 =  HAnimSite();
HAnimSite101.setDEF(CString("hanim_r_digit2_pt"));
HAnimSite101.X3DNode::setName(CString("r_digit2_pt"));
HAnimSite101.setTranslation(new float[]{-0.0883,0.0134,0.1383});
HAnimSegment98.addChild(&HAnimSite101);

HAnimJoint97.addChildren(&HAnimSegment98);

HAnimJoint94.addChildren(&HAnimJoint97);

HAnimJoint92.addChildren(&HAnimJoint94);

HAnimJoint86.addChildren(&HAnimJoint92);

HAnimJoint84.addChildren(&HAnimJoint86);

HAnimJoint79.addChildren(&HAnimJoint84);

HAnimJoint45.addChildren(&HAnimJoint79);

HAnimJoint43.addChildren(&HAnimJoint45);

HAnimJoint& HAnimJoint102 =  HAnimJoint();
HAnimJoint102.setDEF(CString("hanim_vl5"));
HAnimJoint102.X3DNode::setName(CString("vl5"));
HAnimJoint102.setCenter(new float[]{0.0028,1.0568,-0.0776});
HAnimSegment& HAnimSegment103 =  HAnimSegment();
HAnimSegment103.setDEF(CString("hanim_l5"));
HAnimSegment103.X3DNode::setName(CString("l5"));
HAnimSite& HAnimSite104 =  HAnimSite();
HAnimSite104.setDEF(CString("hanim_waist_preferred_post_pt"));
HAnimSite104.X3DNode::setName(CString("waist_preferred_post_pt"));
HAnimSite104.setTranslation(new float[]{0.0,1.0915,-0.1091});
HAnimSegment103.addChild(&HAnimSite104);

HAnimSite& HAnimSite105 =  HAnimSite();
HAnimSite105.setDEF(CString("hanim_navel_pt"));
HAnimSite105.X3DNode::setName(CString("navel_pt"));
HAnimSite105.setTranslation(new float[]{0.0069,1.0966,0.1017});
HAnimSegment103.addChild(&HAnimSite105);

HAnimJoint102.addChildren(&HAnimSegment103);

HAnimJoint& HAnimJoint106 =  HAnimJoint();
HAnimJoint106.setDEF(CString("hanim_vl4"));
HAnimJoint106.X3DNode::setName(CString("vl4"));
HAnimJoint106.setCenter(new float[]{0.0035,1.0925,-0.0787});
HAnimSegment& HAnimSegment107 =  HAnimSegment();
HAnimSegment107.setDEF(CString("hanim_l4"));
HAnimSegment107.X3DNode::setName(CString("l4"));
HAnimJoint106.addChildren(&HAnimSegment107);

HAnimJoint& HAnimJoint108 =  HAnimJoint();
HAnimJoint108.setDEF(CString("hanim_vl3"));
HAnimJoint108.X3DNode::setName(CString("vl3"));
HAnimJoint108.setCenter(new float[]{0.0041,1.1276,-0.0796});
HAnimSegment& HAnimSegment109 =  HAnimSegment();
HAnimSegment109.setDEF(CString("hanim_l3"));
HAnimSegment109.X3DNode::setName(CString("l3"));
HAnimJoint108.addChildren(&HAnimSegment109);

HAnimJoint& HAnimJoint110 =  HAnimJoint();
HAnimJoint110.setDEF(CString("hanim_vl2"));
HAnimJoint110.X3DNode::setName(CString("vl2"));
HAnimJoint110.setCenter(new float[]{0.0045,1.1546,-0.08});
HAnimSegment& HAnimSegment111 =  HAnimSegment();
HAnimSegment111.setDEF(CString("hanim_l2"));
HAnimSegment111.X3DNode::setName(CString("l2"));
HAnimSite& HAnimSite112 =  HAnimSite();
HAnimSite112.setDEF(CString("hanim_r_rib10_pt"));
HAnimSite112.X3DNode::setName(CString("r_rib10_pt"));
HAnimSite112.setTranslation(new float[]{-0.0711,1.1941,0.1016});
HAnimSegment111.addChild(&HAnimSite112);

HAnimSite& HAnimSite113 =  HAnimSite();
HAnimSite113.setDEF(CString("hanim_l_rib10_pt"));
HAnimSite113.X3DNode::setName(CString("l_rib10_pt"));
HAnimSite113.setTranslation(new float[]{0.0871,1.1925,0.0992});
HAnimSegment111.addChild(&HAnimSite113);

HAnimSite& HAnimSite114 =  HAnimSite();
HAnimSite114.setDEF(CString("hanim_rib10_midspine_pt"));
HAnimSite114.X3DNode::setName(CString("rib10_midspine_pt"));
HAnimSite114.setTranslation(new float[]{0.0049,1.1908,-0.1113});
HAnimSegment111.addChild(&HAnimSite114);

HAnimJoint110.addChildren(&HAnimSegment111);

HAnimJoint& HAnimJoint115 =  HAnimJoint();
HAnimJoint115.setDEF(CString("hanim_vl1"));
HAnimJoint115.X3DNode::setName(CString("vl1"));
HAnimJoint115.setCenter(new float[]{0.0048,1.1912,-0.0805});
HAnimSegment& HAnimSegment116 =  HAnimSegment();
HAnimSegment116.setDEF(CString("hanim_l1"));
HAnimSegment116.X3DNode::setName(CString("l1"));
HAnimJoint115.addChildren(&HAnimSegment116);

HAnimJoint& HAnimJoint117 =  HAnimJoint();
HAnimJoint117.setDEF(CString("hanim_vt12"));
HAnimJoint117.X3DNode::setName(CString("vt12"));
HAnimJoint117.setCenter(new float[]{0.0051,1.2278,-0.0808});
HAnimSegment& HAnimSegment118 =  HAnimSegment();
HAnimSegment118.setDEF(CString("hanim_t12"));
HAnimSegment118.X3DNode::setName(CString("t12"));
HAnimJoint117.addChildren(&HAnimSegment118);

HAnimJoint& HAnimJoint119 =  HAnimJoint();
HAnimJoint119.setDEF(CString("hanim_vt11"));
HAnimJoint119.X3DNode::setName(CString("vt11"));
HAnimJoint119.setCenter(new float[]{0.0053,1.2679,-0.081});
HAnimSegment& HAnimSegment120 =  HAnimSegment();
HAnimSegment120.setDEF(CString("hanim_t11"));
HAnimSegment120.X3DNode::setName(CString("t11"));
HAnimJoint119.addChildren(&HAnimSegment120);

HAnimJoint& HAnimJoint121 =  HAnimJoint();
HAnimJoint121.setDEF(CString("hanim_vt10"));
HAnimJoint121.X3DNode::setName(CString("vt10"));
HAnimJoint121.setCenter(new float[]{0.0056,1.2848,-0.0822});
HAnimSegment& HAnimSegment122 =  HAnimSegment();
HAnimSegment122.setDEF(CString("hanim_t10"));
HAnimSegment122.X3DNode::setName(CString("t10"));
HAnimSite& HAnimSite123 =  HAnimSite();
HAnimSite123.setDEF(CString("hanim_substernale_pt"));
HAnimSite123.X3DNode::setName(CString("substernale_pt"));
HAnimSite123.setTranslation(new float[]{0.0085,1.2995,0.1147});
HAnimSegment122.addChild(&HAnimSite123);

HAnimJoint121.addChildren(&HAnimSegment122);

HAnimJoint& HAnimJoint124 =  HAnimJoint();
HAnimJoint124.setDEF(CString("hanim_vt9"));
HAnimJoint124.X3DNode::setName(CString("vt9"));
HAnimJoint124.setCenter(new float[]{0.0057,1.3126,-0.0838});
HAnimSegment& HAnimSegment125 =  HAnimSegment();
HAnimSegment125.setDEF(CString("hanim_t9"));
HAnimSegment125.X3DNode::setName(CString("t9"));
HAnimSite& HAnimSite126 =  HAnimSite();
HAnimSite126.setDEF(CString("hanim_r_thelion_pt"));
HAnimSite126.X3DNode::setName(CString("r_thelion_pt"));
HAnimSite126.setTranslation(new float[]{-0.0736,1.3385,0.1217});
HAnimSegment125.addChild(&HAnimSite126);

HAnimSite& HAnimSite127 =  HAnimSite();
HAnimSite127.setDEF(CString("hanim_l_thelion_pt"));
HAnimSite127.X3DNode::setName(CString("l_thelion_pt"));
HAnimSite127.setTranslation(new float[]{0.0918,1.3382,0.1192});
HAnimSegment125.addChild(&HAnimSite127);

HAnimJoint124.addChildren(&HAnimSegment125);

HAnimJoint& HAnimJoint128 =  HAnimJoint();
HAnimJoint128.setDEF(CString("hanim_vt8"));
HAnimJoint128.X3DNode::setName(CString("vt8"));
HAnimJoint128.setCenter(new float[]{0.0057,1.3382,-0.0845});
HAnimSegment& HAnimSegment129 =  HAnimSegment();
HAnimSegment129.setDEF(CString("hanim_t8"));
HAnimSegment129.X3DNode::setName(CString("t8"));
HAnimJoint128.addChildren(&HAnimSegment129);

HAnimJoint& HAnimJoint130 =  HAnimJoint();
HAnimJoint130.setDEF(CString("hanim_vt7"));
HAnimJoint130.X3DNode::setName(CString("vt7"));
HAnimJoint130.setCenter(new float[]{0.0058,1.3625,-0.0833});
HAnimSegment& HAnimSegment131 =  HAnimSegment();
HAnimSegment131.setDEF(CString("hanim_t7"));
HAnimSegment131.X3DNode::setName(CString("t7"));
HAnimJoint130.addChildren(&HAnimSegment131);

HAnimJoint& HAnimJoint132 =  HAnimJoint();
HAnimJoint132.setDEF(CString("hanim_vt6"));
HAnimJoint132.X3DNode::setName(CString("vt6"));
HAnimJoint132.setCenter(new float[]{0.0059,1.3866,-0.08});
HAnimSegment& HAnimSegment133 =  HAnimSegment();
HAnimSegment133.setDEF(CString("hanim_t6"));
HAnimSegment133.X3DNode::setName(CString("t6"));
HAnimJoint132.addChildren(&HAnimSegment133);

HAnimJoint& HAnimJoint134 =  HAnimJoint();
HAnimJoint134.setDEF(CString("hanim_vt5"));
HAnimJoint134.X3DNode::setName(CString("vt5"));
HAnimJoint134.setCenter(new float[]{0.006,1.4102,-0.0745});
HAnimSegment& HAnimSegment135 =  HAnimSegment();
HAnimSegment135.setDEF(CString("hanim_t5"));
HAnimSegment135.X3DNode::setName(CString("t5"));
HAnimJoint134.addChildren(&HAnimSegment135);

HAnimJoint& HAnimJoint136 =  HAnimJoint();
HAnimJoint136.setDEF(CString("hanim_vt4"));
HAnimJoint136.X3DNode::setName(CString("vt4"));
HAnimJoint136.setCenter(new float[]{0.0061,1.432,-0.0675});
HAnimSegment& HAnimSegment137 =  HAnimSegment();
HAnimSegment137.setDEF(CString("hanim_t4"));
HAnimSegment137.X3DNode::setName(CString("t4"));
HAnimJoint136.addChildren(&HAnimSegment137);

HAnimJoint& HAnimJoint138 =  HAnimJoint();
HAnimJoint138.setDEF(CString("hanim_vt3"));
HAnimJoint138.X3DNode::setName(CString("vt3"));
HAnimJoint138.setCenter(new float[]{0.0062,1.4583,-0.057});
HAnimSegment& HAnimSegment139 =  HAnimSegment();
HAnimSegment139.setDEF(CString("hanim_t3"));
HAnimSegment139.X3DNode::setName(CString("t3"));
HAnimJoint138.addChildren(&HAnimSegment139);

HAnimJoint& HAnimJoint140 =  HAnimJoint();
HAnimJoint140.setDEF(CString("hanim_vt2"));
HAnimJoint140.X3DNode::setName(CString("vt2"));
HAnimJoint140.setCenter(new float[]{0.0063,1.4761,-0.0484});
HAnimSegment& HAnimSegment141 =  HAnimSegment();
HAnimSegment141.setDEF(CString("hanim_t2"));
HAnimSegment141.X3DNode::setName(CString("t2"));
HAnimJoint140.addChildren(&HAnimSegment141);

HAnimJoint& HAnimJoint142 =  HAnimJoint();
HAnimJoint142.setDEF(CString("hanim_vt1"));
HAnimJoint142.X3DNode::setName(CString("vt1"));
HAnimJoint142.setCenter(new float[]{0.0065,1.4951,-0.0387});
HAnimSegment& HAnimSegment143 =  HAnimSegment();
HAnimSegment143.setDEF(CString("hanim_t1"));
HAnimSegment143.X3DNode::setName(CString("t1"));
HAnimSite& HAnimSite144 =  HAnimSite();
HAnimSite144.setDEF(CString("hanim_suprasternale_pt"));
HAnimSite144.X3DNode::setName(CString("suprasternale_pt"));
HAnimSite144.setTranslation(new float[]{0.0084,1.4714,0.0551});
HAnimSegment143.addChild(&HAnimSite144);

HAnimSite& HAnimSite145 =  HAnimSite();
HAnimSite145.setDEF(CString("hanim_cervicale_pt"));
HAnimSite145.X3DNode::setName(CString("cervicale_pt"));
HAnimSite145.setTranslation(new float[]{0.0064,1.52,-0.0815});
HAnimSegment143.addChild(&HAnimSite145);

HAnimJoint142.addChildren(&HAnimSegment143);

HAnimJoint& HAnimJoint146 =  HAnimJoint();
HAnimJoint146.setDEF(CString("hanim_vc7"));
HAnimJoint146.X3DNode::setName(CString("vc7"));
HAnimJoint146.setCenter(new float[]{0.0066,1.5132,-0.0301});
HAnimSegment& HAnimSegment147 =  HAnimSegment();
HAnimSegment147.setDEF(CString("hanim_c7"));
HAnimSegment147.X3DNode::setName(CString("c7"));
HAnimSite& HAnimSite148 =  HAnimSite();
HAnimSite148.setDEF(CString("hanim_r_neck_base_pt"));
HAnimSite148.X3DNode::setName(CString("r_neck_base_pt"));
HAnimSite148.setTranslation(new float[]{-0.0419,1.5149,-0.022});
HAnimSegment147.addChild(&HAnimSite148);

HAnimSite& HAnimSite149 =  HAnimSite();
HAnimSite149.setDEF(CString("hanim_l_neck_base_pt"));
HAnimSite149.X3DNode::setName(CString("l_neck_base_pt"));
HAnimSite149.setTranslation(new float[]{0.0646,1.5141,-0.038});
HAnimSegment147.addChild(&HAnimSite149);

HAnimJoint146.addChildren(&HAnimSegment147);

HAnimJoint& HAnimJoint150 =  HAnimJoint();
HAnimJoint150.setDEF(CString("hanim_vc6"));
HAnimJoint150.X3DNode::setName(CString("vc6"));
HAnimJoint150.setCenter(new float[]{0.0066,1.5357,-0.0143});
HAnimSegment& HAnimSegment151 =  HAnimSegment();
HAnimSegment151.setDEF(CString("hanim_c6"));
HAnimSegment151.X3DNode::setName(CString("c6"));
HAnimJoint150.addChildren(&HAnimSegment151);

HAnimJoint& HAnimJoint152 =  HAnimJoint();
HAnimJoint152.setDEF(CString("hanim_vc5"));
HAnimJoint152.X3DNode::setName(CString("vc5"));
HAnimJoint152.setCenter(new float[]{0.0066,1.552,-0.0082});
HAnimSegment& HAnimSegment153 =  HAnimSegment();
HAnimSegment153.setDEF(CString("hanim_c5"));
HAnimSegment153.X3DNode::setName(CString("c5"));
HAnimJoint152.addChildren(&HAnimSegment153);

HAnimJoint& HAnimJoint154 =  HAnimJoint();
HAnimJoint154.setDEF(CString("hanim_vc4"));
HAnimJoint154.X3DNode::setName(CString("vc4"));
HAnimJoint154.setCenter(new float[]{0.0066,1.5662,-0.0084});
HAnimSegment& HAnimSegment155 =  HAnimSegment();
HAnimSegment155.setDEF(CString("hanim_c4"));
HAnimSegment155.X3DNode::setName(CString("c4"));
HAnimJoint154.addChildren(&HAnimSegment155);

HAnimJoint& HAnimJoint156 =  HAnimJoint();
HAnimJoint156.setDEF(CString("hanim_vc3"));
HAnimJoint156.X3DNode::setName(CString("vc3"));
HAnimJoint156.setCenter(new float[]{0.0066,1.58,-0.0103});
HAnimSegment& HAnimSegment157 =  HAnimSegment();
HAnimSegment157.setDEF(CString("hanim_c3"));
HAnimSegment157.X3DNode::setName(CString("c3"));
HAnimJoint156.addChildren(&HAnimSegment157);

HAnimJoint& HAnimJoint158 =  HAnimJoint();
HAnimJoint158.setDEF(CString("hanim_vc2"));
HAnimJoint158.X3DNode::setName(CString("vc2"));
HAnimJoint158.setCenter(new float[]{0.0066,1.5928,-0.0103});
HAnimSegment& HAnimSegment159 =  HAnimSegment();
HAnimSegment159.setDEF(CString("hanim_c2"));
HAnimSegment159.X3DNode::setName(CString("c2"));
HAnimJoint158.addChildren(&HAnimSegment159);

HAnimJoint& HAnimJoint160 =  HAnimJoint();
HAnimJoint160.setDEF(CString("hanim_vc1"));
HAnimJoint160.X3DNode::setName(CString("vc1"));
HAnimJoint160.setCenter(new float[]{0.0066,1.6144,-0.0034});
HAnimSegment& HAnimSegment161 =  HAnimSegment();
HAnimSegment161.setDEF(CString("hanim_c1"));
HAnimSegment161.X3DNode::setName(CString("c1"));
HAnimJoint160.addChildren(&HAnimSegment161);

HAnimJoint& HAnimJoint162 =  HAnimJoint();
HAnimJoint162.setDEF(CString("hanim_skullbase"));
HAnimJoint162.X3DNode::setName(CString("skullbase"));
HAnimJoint162.setCenter(new float[]{0.0044,1.6209,0.0236});
HAnimSegment& HAnimSegment163 =  HAnimSegment();
HAnimSegment163.setDEF(CString("hanim_skull"));
HAnimSegment163.X3DNode::setName(CString("skull"));
HAnimSite& HAnimSite164 =  HAnimSite();
HAnimSite164.setDEF(CString("hanim_skull_tip"));
HAnimSite164.X3DNode::setName(CString("skull_tip"));
HAnimSite164.setTranslation(new float[]{0.005,1.7504,0.0055});
HAnimSegment163.addChild(&HAnimSite164);

HAnimSite& HAnimSite165 =  HAnimSite();
HAnimSite165.setDEF(CString("hanim_sellion_pt"));
HAnimSite165.X3DNode::setName(CString("sellion_pt"));
HAnimSite165.setTranslation(new float[]{0.0058,1.6316,0.0852});
HAnimSegment163.addChild(&HAnimSite165);

HAnimSite& HAnimSite166 =  HAnimSite();
HAnimSite166.setDEF(CString("hanim_r_infraorbitale_pt"));
HAnimSite166.X3DNode::setName(CString("r_infraorbitale_pt"));
HAnimSite166.setTranslation(new float[]{-0.0237,1.6171,0.0752});
HAnimSegment163.addChild(&HAnimSite166);

HAnimSite& HAnimSite167 =  HAnimSite();
HAnimSite167.setDEF(CString("hanim_l_infraorbitale_pt"));
HAnimSite167.X3DNode::setName(CString("l_infraorbitale_pt"));
HAnimSite167.setTranslation(new float[]{0.0341,1.6171,0.0752});
HAnimSegment163.addChild(&HAnimSite167);

HAnimSite& HAnimSite168 =  HAnimSite();
HAnimSite168.setDEF(CString("hanim_supramenton_pt"));
HAnimSite168.X3DNode::setName(CString("supramenton_pt"));
HAnimSite168.setTranslation(new float[]{0.0061,1.541,0.0805});
HAnimSegment163.addChild(&HAnimSite168);

HAnimSite& HAnimSite169 =  HAnimSite();
HAnimSite169.setDEF(CString("hanim_r_tragion_pt"));
HAnimSite169.X3DNode::setName(CString("r_tragion_pt"));
HAnimSite169.setTranslation(new float[]{-0.0646,1.6347,0.0302});
HAnimSegment163.addChild(&HAnimSite169);

HAnimSite& HAnimSite170 =  HAnimSite();
HAnimSite170.setDEF(CString("hanim_r_gonion_pt"));
HAnimSite170.X3DNode::setName(CString("r_gonion_pt"));
HAnimSite170.setTranslation(new float[]{-0.052,1.5529,0.0347});
HAnimSegment163.addChild(&HAnimSite170);

HAnimSite& HAnimSite171 =  HAnimSite();
HAnimSite171.setDEF(CString("hanim_l_tragion_pt"));
HAnimSite171.X3DNode::setName(CString("l_tragion_pt"));
HAnimSite171.setTranslation(new float[]{0.0739,1.6348,0.0282});
HAnimSegment163.addChild(&HAnimSite171);

HAnimSite& HAnimSite172 =  HAnimSite();
HAnimSite172.setDEF(CString("hanim_l_gonion_pt"));
HAnimSite172.X3DNode::setName(CString("l_gonion_pt"));
HAnimSite172.setTranslation(new float[]{0.0631,1.553,0.033});
HAnimSegment163.addChild(&HAnimSite172);

HAnimSite& HAnimSite173 =  HAnimSite();
HAnimSite173.setDEF(CString("hanim_nuchale_pt"));
HAnimSite173.X3DNode::setName(CString("nuchale_pt"));
HAnimSite173.setTranslation(new float[]{0.0039,1.5972,-0.0796});
HAnimSegment163.addChild(&HAnimSite173);

HAnimJoint162.addChildren(&HAnimSegment163);

HAnimJoint& HAnimJoint174 =  HAnimJoint();
HAnimJoint174.setDEF(CString("hanim_l_eyeball_joint"));
HAnimJoint174.X3DNode::setName(CString("l_eyeball_joint"));
HAnimJoint174.setCenter(new float[]{0.0336,1.6332,0.0502});
HAnimSegment& HAnimSegment175 =  HAnimSegment();
HAnimSegment175.setDEF(CString("hanim_l_eyeball"));
HAnimSegment175.X3DNode::setName(CString("l_eyeball"));
HAnimSite& HAnimSite176 =  HAnimSite();
HAnimSite176.setDEF(CString("hanim_l_eyeball_site_view"));
HAnimSite176.X3DNode::setName(CString("l_eyeball_site_view"));
HAnimSite176.setTranslation(new float[]{0.034,1.64,0.05});
Viewpoint& Viewpoint177 =  Viewpoint();
Viewpoint177.setDEF(CString("hanim_l_eyeball_site_viewpoint"));
Viewpoint177.setDescription(CString("l_eyeball_site_viewpoint looking forward"));
Viewpoint177.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint177.setOrientation(new float[]{0.0,1.0,0.0,3.141593});
HAnimSite176.addChild(&Viewpoint177);

HAnimSegment175.addChild(&HAnimSite176);

HAnimJoint174.addChildren(&HAnimSegment175);

HAnimJoint162.addChildren(&HAnimJoint174);

HAnimJoint& HAnimJoint178 =  HAnimJoint();
HAnimJoint178.setDEF(CString("hanim_l_eyelid_joint"));
HAnimJoint178.X3DNode::setName(CString("l_eyelid_joint"));
HAnimJoint178.setCenter(new float[]{0.0336,1.6332,0.0502});
HAnimSegment& HAnimSegment179 =  HAnimSegment();
HAnimSegment179.setDEF(CString("hanim_l_eyelid"));
HAnimSegment179.X3DNode::setName(CString("l_eyelid"));
HAnimJoint178.addChildren(&HAnimSegment179);

HAnimJoint162.addChildren(&HAnimJoint178);

HAnimJoint& HAnimJoint180 =  HAnimJoint();
HAnimJoint180.setDEF(CString("hanim_l_eyebrow_joint"));
HAnimJoint180.X3DNode::setName(CString("l_eyebrow_joint"));
HAnimJoint180.setCenter(new float[]{0.0336,1.635,0.0506});
HAnimSegment& HAnimSegment181 =  HAnimSegment();
HAnimSegment181.setDEF(CString("hanim_l_eyebrow"));
HAnimSegment181.X3DNode::setName(CString("l_eyebrow"));
HAnimJoint180.addChildren(&HAnimSegment181);

HAnimJoint162.addChildren(&HAnimJoint180);

HAnimJoint& HAnimJoint182 =  HAnimJoint();
HAnimJoint182.setDEF(CString("hanim_r_eyeball_joint"));
HAnimJoint182.X3DNode::setName(CString("r_eyeball_joint"));
HAnimJoint182.setCenter(new float[]{-0.0336,1.6332,0.0502});
HAnimSegment& HAnimSegment183 =  HAnimSegment();
HAnimSegment183.setDEF(CString("hanim_r_eyeball"));
HAnimSegment183.X3DNode::setName(CString("r_eyeball"));
HAnimSite& HAnimSite184 =  HAnimSite();
HAnimSite184.setDEF(CString("hanim_r_eyeball_site_view"));
HAnimSite184.X3DNode::setName(CString("r_eyeball_site_view"));
HAnimSite184.setTranslation(new float[]{-0.034,1.64,0.05});
Viewpoint& Viewpoint185 =  Viewpoint();
Viewpoint185.setDEF(CString("hanim_r_eyeball_site_viewpoint"));
Viewpoint185.setDescription(CString("r_eyeball_site_viewpoint looking forward"));
Viewpoint185.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint185.setOrientation(new float[]{0.0,1.0,0.0,3.141593});
HAnimSite184.addChild(&Viewpoint185);

HAnimSegment183.addChild(&HAnimSite184);

HAnimJoint182.addChildren(&HAnimSegment183);

HAnimJoint162.addChildren(&HAnimJoint182);

HAnimJoint& HAnimJoint186 =  HAnimJoint();
HAnimJoint186.setDEF(CString("hanim_r_eyelid_joint"));
HAnimJoint186.X3DNode::setName(CString("r_eyelid_joint"));
HAnimJoint186.setCenter(new float[]{-0.0336,1.6332,0.0502});
HAnimSegment& HAnimSegment187 =  HAnimSegment();
HAnimSegment187.setDEF(CString("hanim_r_eyelid"));
HAnimSegment187.X3DNode::setName(CString("r_eyelid"));
HAnimJoint186.addChildren(&HAnimSegment187);

HAnimJoint162.addChildren(&HAnimJoint186);

HAnimJoint& HAnimJoint188 =  HAnimJoint();
HAnimJoint188.setDEF(CString("hanim_r_eyebrow_joint"));
HAnimJoint188.X3DNode::setName(CString("r_eyebrow_joint"));
HAnimJoint188.setCenter(new float[]{-0.0336,1.635,0.0506});
HAnimSegment& HAnimSegment189 =  HAnimSegment();
HAnimSegment189.setDEF(CString("hanim_r_eyebrow"));
HAnimSegment189.X3DNode::setName(CString("r_eyebrow"));
HAnimJoint188.addChildren(&HAnimSegment189);

HAnimJoint162.addChildren(&HAnimJoint188);

HAnimJoint& HAnimJoint190 =  HAnimJoint();
HAnimJoint190.setDEF(CString("hanim_temporomandibular"));
HAnimJoint190.X3DNode::setName(CString("temporomandibular"));
HAnimJoint190.setCenter(new float[]{0.0,1.63,0.015});
HAnimSegment& HAnimSegment191 =  HAnimSegment();
HAnimSegment191.setDEF(CString("hanim_jaw"));
HAnimSegment191.X3DNode::setName(CString("jaw"));
HAnimSite& HAnimSite192 =  HAnimSite();
HAnimSite192.setDEF(CString("hanim_temporomandibular_l_site_pt"));
HAnimSite192.X3DNode::setName(CString("temporomandibular_l_site_pt"));
HAnimSite192.setTranslation(new float[]{0.045,1.63,0.0});
HAnimSegment191.addChild(&HAnimSite192);

HAnimSite& HAnimSite193 =  HAnimSite();
HAnimSite193.setDEF(CString("hanim_temporomandibular_r_site_pt"));
HAnimSite193.X3DNode::setName(CString("temporomandibular_r_site_pt"));
HAnimSite193.setTranslation(new float[]{-0.045,1.63,0.0});
HAnimSegment191.addChild(&HAnimSite193);

HAnimJoint190.addChildren(&HAnimSegment191);

HAnimJoint162.addChildren(&HAnimJoint190);

HAnimJoint160.addChildren(&HAnimJoint162);

HAnimJoint158.addChildren(&HAnimJoint160);

HAnimJoint156.addChildren(&HAnimJoint158);

HAnimJoint154.addChildren(&HAnimJoint156);

HAnimJoint152.addChildren(&HAnimJoint154);

HAnimJoint150.addChildren(&HAnimJoint152);

HAnimJoint146.addChildren(&HAnimJoint150);

HAnimJoint142.addChildren(&HAnimJoint146);

HAnimJoint& HAnimJoint194 =  HAnimJoint();
HAnimJoint194.setDEF(CString("hanim_l_sternoclavicular"));
HAnimJoint194.X3DNode::setName(CString("l_sternoclavicular"));
HAnimJoint194.setCenter(new float[]{0.082,1.4488,-0.0353});
HAnimSegment& HAnimSegment195 =  HAnimSegment();
HAnimSegment195.setDEF(CString("hanim_l_clavicle"));
HAnimSegment195.X3DNode::setName(CString("l_clavicle"));
HAnimSite& HAnimSite196 =  HAnimSite();
HAnimSite196.setDEF(CString("hanim_l_clavicale_pt"));
HAnimSite196.X3DNode::setName(CString("l_clavicale_pt"));
HAnimSite196.setTranslation(new float[]{0.0271,1.4943,0.0394});
HAnimSegment195.addChild(&HAnimSite196);

HAnimSite& HAnimSite197 =  HAnimSite();
HAnimSite197.setDEF(CString("hanim_l_acromion_pt"));
HAnimSite197.X3DNode::setName(CString("l_acromion_pt"));
HAnimSite197.setTranslation(new float[]{0.2032,1.476,-0.049});
HAnimSegment195.addChild(&HAnimSite197);

HAnimSite& HAnimSite198 =  HAnimSite();
HAnimSite198.setDEF(CString("hanim_l_axilla_ant_pt"));
HAnimSite198.X3DNode::setName(CString("l_axilla_ant_pt"));
HAnimSite198.setTranslation(new float[]{0.1777,1.4065,-0.0075});
HAnimSegment195.addChild(&HAnimSite198);

HAnimSite& HAnimSite199 =  HAnimSite();
HAnimSite199.setDEF(CString("hanim_l_axilla_post_pt"));
HAnimSite199.X3DNode::setName(CString("l_axilla_post_pt"));
HAnimSite199.setTranslation(new float[]{0.1706,1.4072,-0.0875});
HAnimSegment195.addChild(&HAnimSite199);

HAnimJoint194.addChildren(&HAnimSegment195);

HAnimJoint& HAnimJoint200 =  HAnimJoint();
HAnimJoint200.setDEF(CString("hanim_l_acromioclavicular"));
HAnimJoint200.X3DNode::setName(CString("l_acromioclavicular"));
HAnimJoint200.setCenter(new float[]{0.0962,1.4269,-0.0424});
HAnimSegment& HAnimSegment201 =  HAnimSegment();
HAnimSegment201.setDEF(CString("hanim_l_scapula"));
HAnimSegment201.X3DNode::setName(CString("l_scapula"));
HAnimJoint200.addChildren(&HAnimSegment201);

HAnimJoint& HAnimJoint202 =  HAnimJoint();
HAnimJoint202.setDEF(CString("hanim_l_shoulder"));
HAnimJoint202.X3DNode::setName(CString("l_shoulder"));
HAnimJoint202.setCenter(new float[]{0.2029,1.4376,-0.0387});
HAnimSegment& HAnimSegment203 =  HAnimSegment();
HAnimSegment203.setDEF(CString("hanim_l_upperarm"));
HAnimSegment203.X3DNode::setName(CString("l_upperarm"));
HAnimSite& HAnimSite204 =  HAnimSite();
HAnimSite204.setDEF(CString("hanim_l_humeral_lateral_epicn_pt"));
HAnimSite204.X3DNode::setName(CString("l_humeral_lateral_epicn_pt"));
HAnimSite204.setTranslation(new float[]{0.228,1.1482,-0.11});
HAnimSegment203.addChild(&HAnimSite204);

HAnimJoint202.addChildren(&HAnimSegment203);

HAnimJoint& HAnimJoint205 =  HAnimJoint();
HAnimJoint205.setDEF(CString("hanim_l_elbow"));
HAnimJoint205.X3DNode::setName(CString("l_elbow"));
HAnimJoint205.setCenter(new float[]{0.2014,1.1357,-0.0682});
HAnimSegment& HAnimSegment206 =  HAnimSegment();
HAnimSegment206.setDEF(CString("hanim_l_forearm"));
HAnimSegment206.X3DNode::setName(CString("l_forearm"));
HAnimSite& HAnimSite207 =  HAnimSite();
HAnimSite207.setDEF(CString("hanim_l_radial_styloid_pt"));
HAnimSite207.X3DNode::setName(CString("l_radial_styloid_pt"));
HAnimSite207.setTranslation(new float[]{0.1901,0.8645,-0.0415});
HAnimSegment206.addChild(&HAnimSite207);

HAnimSite& HAnimSite208 =  HAnimSite();
HAnimSite208.setDEF(CString("hanim_l_olecranon_pt"));
HAnimSite208.X3DNode::setName(CString("l_olecranon_pt"));
HAnimSite208.setTranslation(new float[]{0.1962,1.1375,-0.1123});
HAnimSegment206.addChild(&HAnimSite208);

HAnimSite& HAnimSite209 =  HAnimSite();
HAnimSite209.setDEF(CString("hanim_l_humeral_medial_epicn_pt"));
HAnimSite209.X3DNode::setName(CString("l_humeral_medial_epicn_pt"));
HAnimSite209.setTranslation(new float[]{0.1735,1.1272,-0.1113});
HAnimSegment206.addChild(&HAnimSite209);

HAnimSite& HAnimSite210 =  HAnimSite();
HAnimSite210.setDEF(CString("hanim_l_radiale_pt"));
HAnimSite210.X3DNode::setName(CString("l_radiale_pt"));
HAnimSite210.setTranslation(new float[]{0.2182,1.1212,-0.1167});
HAnimSegment206.addChild(&HAnimSite210);

HAnimJoint205.addChildren(&HAnimSegment206);

HAnimJoint& HAnimJoint211 =  HAnimJoint();
HAnimJoint211.setDEF(CString("hanim_l_wrist"));
HAnimJoint211.X3DNode::setName(CString("l_wrist"));
HAnimJoint211.setCenter(new float[]{0.1984,0.8663,-0.0583});
HAnimSegment& HAnimSegment212 =  HAnimSegment();
HAnimSegment212.setDEF(CString("hanim_l_hand"));
HAnimSegment212.X3DNode::setName(CString("l_hand"));
HAnimSite& HAnimSite213 =  HAnimSite();
HAnimSite213.setDEF(CString("hanim_l_metacarpal_pha2_pt"));
HAnimSite213.X3DNode::setName(CString("l_metacarpal_pha2_pt"));
HAnimSite213.setTranslation(new float[]{0.2009,0.8139,-0.0237});
HAnimSegment212.addChild(&HAnimSite213);

HAnimSite& HAnimSite214 =  HAnimSite();
HAnimSite214.setDEF(CString("hanim_l_ulnar_styloid_pt"));
HAnimSite214.X3DNode::setName(CString("l_ulnar_styloid_pt"));
HAnimSite214.setTranslation(new float[]{0.2142,0.8529,-0.0648});
HAnimSegment212.addChild(&HAnimSite214);

HAnimSite& HAnimSite215 =  HAnimSite();
HAnimSite215.setDEF(CString("hanim_l_metacarpal_pha5_pt"));
HAnimSite215.X3DNode::setName(CString("l_metacarpal_pha5_pt"));
HAnimSite215.setTranslation(new float[]{0.1929,0.786,-0.1122});
HAnimSegment212.addChild(&HAnimSite215);

HAnimSite& HAnimSite216 =  HAnimSite();
HAnimSite216.setDEF(CString("hanim_l_hand_front_view"));
HAnimSite216.X3DNode::setName(CString("l_hand_front_view"));
HAnimSite216.setTranslation(new float[]{0.3,0.75,0.45});
Viewpoint& Viewpoint217 =  Viewpoint();
Viewpoint217.setDEF(CString("hanim_l_hand_front_viewpoint"));
Viewpoint217.setDescription(CString("left hand front"));
Viewpoint217.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint217.setCenterOfRotation(new float[]{0.0,0.7,0.0});
HAnimSite216.addChild(&Viewpoint217);

HAnimSegment212.addChild(&HAnimSite216);

HAnimJoint211.addChildren(&HAnimSegment212);

HAnimJoint& HAnimJoint218 =  HAnimJoint();
HAnimJoint218.setDEF(CString("hanim_l_thumb1"));
HAnimJoint218.X3DNode::setName(CString("l_thumb1"));
HAnimJoint218.setCenter(new float[]{0.1924,0.8472,-0.0534});
HAnimSegment& HAnimSegment219 =  HAnimSegment();
HAnimSegment219.setDEF(CString("hanim_l_thumb_metacarpal"));
HAnimSegment219.X3DNode::setName(CString("l_thumb_metacarpal"));
HAnimJoint218.addChildren(&HAnimSegment219);

HAnimJoint& HAnimJoint220 =  HAnimJoint();
HAnimJoint220.setDEF(CString("hanim_l_thumb2"));
HAnimJoint220.X3DNode::setName(CString("l_thumb2"));
HAnimJoint220.setCenter(new float[]{0.1951,0.8226,0.0246});
HAnimSegment& HAnimSegment221 =  HAnimSegment();
HAnimSegment221.setDEF(CString("hanim_l_thumb_proximal"));
HAnimSegment221.X3DNode::setName(CString("l_thumb_proximal"));
HAnimJoint220.addChildren(&HAnimSegment221);

HAnimJoint& HAnimJoint222 =  HAnimJoint();
HAnimJoint222.setDEF(CString("hanim_l_thumb3"));
HAnimJoint222.X3DNode::setName(CString("l_thumb3"));
HAnimJoint222.setCenter(new float[]{0.1955,0.8159,0.0464});
HAnimSegment& HAnimSegment223 =  HAnimSegment();
HAnimSegment223.setDEF(CString("hanim_l_thumb_distal"));
HAnimSegment223.X3DNode::setName(CString("l_thumb_distal"));
HAnimSite& HAnimSite224 =  HAnimSite();
HAnimSite224.setDEF(CString("hanim_l_thumb_distal_tip"));
HAnimSite224.X3DNode::setName(CString("l_thumb_distal_tip"));
HAnimSite224.setTranslation(new float[]{0.1982,0.8061,0.0759});
HAnimSegment223.addChild(&HAnimSite224);

HAnimJoint222.addChildren(&HAnimSegment223);

HAnimJoint220.addChildren(&HAnimJoint222);

HAnimJoint218.addChildren(&HAnimJoint220);

HAnimJoint211.addChildren(&HAnimJoint218);

HAnimJoint& HAnimJoint225 =  HAnimJoint();
HAnimJoint225.setDEF(CString("hanim_l_index0"));
HAnimJoint225.X3DNode::setName(CString("l_index0"));
HAnimJoint225.setCenter(new float[]{0.1983,0.8024,-0.028});
HAnimSegment& HAnimSegment226 =  HAnimSegment();
HAnimSegment226.setDEF(CString("hanim_l_index_metacarpal"));
HAnimSegment226.X3DNode::setName(CString("l_index_metacarpal"));
HAnimJoint225.addChildren(&HAnimSegment226);

HAnimJoint& HAnimJoint227 =  HAnimJoint();
HAnimJoint227.setDEF(CString("hanim_l_index1"));
HAnimJoint227.X3DNode::setName(CString("l_index1"));
HAnimJoint227.setCenter(new float[]{0.1983,0.7815,-0.028});
HAnimSegment& HAnimSegment228 =  HAnimSegment();
HAnimSegment228.setDEF(CString("hanim_l_index_proximal"));
HAnimSegment228.X3DNode::setName(CString("l_index_proximal"));
HAnimJoint227.addChildren(&HAnimSegment228);

HAnimJoint& HAnimJoint229 =  HAnimJoint();
HAnimJoint229.setDEF(CString("hanim_l_index2"));
HAnimJoint229.X3DNode::setName(CString("l_index2"));
HAnimJoint229.setCenter(new float[]{0.2017,0.7363,-0.0248});
HAnimSegment& HAnimSegment230 =  HAnimSegment();
HAnimSegment230.setDEF(CString("hanim_l_index_middle"));
HAnimSegment230.X3DNode::setName(CString("l_index_middle"));
HAnimJoint229.addChildren(&HAnimSegment230);

HAnimJoint& HAnimJoint231 =  HAnimJoint();
HAnimJoint231.setDEF(CString("hanim_l_index3"));
HAnimJoint231.X3DNode::setName(CString("l_index3"));
HAnimJoint231.setCenter(new float[]{0.2028,0.7139,-0.0236});
HAnimSegment& HAnimSegment232 =  HAnimSegment();
HAnimSegment232.setDEF(CString("hanim_l_index_distal"));
HAnimSegment232.X3DNode::setName(CString("l_index_distal"));
HAnimSite& HAnimSite233 =  HAnimSite();
HAnimSite233.setDEF(CString("hanim_l_index_distal_tip"));
HAnimSite233.X3DNode::setName(CString("l_index_distal_tip"));
HAnimSite233.setTranslation(new float[]{0.2089,0.6858,-0.0245});
HAnimSegment232.addChild(&HAnimSite233);

HAnimSite& HAnimSite234 =  HAnimSite();
HAnimSite234.setDEF(CString("hanim_l_dactylion_pt"));
HAnimSite234.X3DNode::setName(CString("l_dactylion_pt"));
HAnimSite234.setTranslation(new float[]{0.2056,0.6743,-0.0482});
HAnimSegment232.addChild(&HAnimSite234);

HAnimJoint231.addChildren(&HAnimSegment232);

HAnimJoint229.addChildren(&HAnimJoint231);

HAnimJoint227.addChildren(&HAnimJoint229);

HAnimJoint225.addChildren(&HAnimJoint227);

HAnimJoint211.addChildren(&HAnimJoint225);

HAnimJoint& HAnimJoint235 =  HAnimJoint();
HAnimJoint235.setDEF(CString("hanim_l_middle0"));
HAnimJoint235.X3DNode::setName(CString("l_middle0"));
HAnimJoint235.setCenter(new float[]{0.1987,0.8029,-0.053});
HAnimSegment& HAnimSegment236 =  HAnimSegment();
HAnimSegment236.setDEF(CString("hanim_l_middle_metacarpal"));
HAnimSegment236.X3DNode::setName(CString("l_middle_metacarpal"));
HAnimJoint235.addChildren(&HAnimSegment236);

HAnimJoint& HAnimJoint237 =  HAnimJoint();
HAnimJoint237.setDEF(CString("hanim_l_middle1"));
HAnimJoint237.X3DNode::setName(CString("l_middle1"));
HAnimJoint237.setCenter(new float[]{0.1987,0.7818,-0.053});
HAnimSegment& HAnimSegment238 =  HAnimSegment();
HAnimSegment238.setDEF(CString("hanim_l_middle_proximal"));
HAnimSegment238.X3DNode::setName(CString("l_middle_proximal"));
HAnimJoint237.addChildren(&HAnimSegment238);

HAnimJoint& HAnimJoint239 =  HAnimJoint();
HAnimJoint239.setDEF(CString("hanim_l_middle2"));
HAnimJoint239.X3DNode::setName(CString("l_middle2"));
HAnimJoint239.setCenter(new float[]{0.2013,0.7273,-0.0503});
HAnimSegment& HAnimSegment240 =  HAnimSegment();
HAnimSegment240.setDEF(CString("hanim_l_middle_middle"));
HAnimSegment240.X3DNode::setName(CString("l_middle_middle"));
HAnimJoint239.addChildren(&HAnimSegment240);

HAnimJoint& HAnimJoint241 =  HAnimJoint();
HAnimJoint241.setDEF(CString("hanim_l_middle3"));
HAnimJoint241.X3DNode::setName(CString("l_middle3"));
HAnimJoint241.setCenter(new float[]{0.2026,0.7011,-0.0494});
HAnimSegment& HAnimSegment242 =  HAnimSegment();
HAnimSegment242.setDEF(CString("hanim_l_middle_distal"));
HAnimSegment242.X3DNode::setName(CString("l_middle_distal"));
HAnimSite& HAnimSite243 =  HAnimSite();
HAnimSite243.setDEF(CString("hanim_l_middle_distal_tip"));
HAnimSite243.X3DNode::setName(CString("l_middle_distal_tip"));
HAnimSite243.setTranslation(new float[]{0.208,0.6731,-0.0491});
HAnimSegment242.addChild(&HAnimSite243);

HAnimJoint241.addChildren(&HAnimSegment242);

HAnimJoint239.addChildren(&HAnimJoint241);

HAnimJoint237.addChildren(&HAnimJoint239);

HAnimJoint235.addChildren(&HAnimJoint237);

HAnimJoint211.addChildren(&HAnimJoint235);

HAnimJoint& HAnimJoint244 =  HAnimJoint();
HAnimJoint244.setDEF(CString("hanim_l_ring0"));
HAnimJoint244.X3DNode::setName(CString("l_ring0"));
HAnimJoint244.setCenter(new float[]{0.1956,0.8019,-0.0794});
HAnimSegment& HAnimSegment245 =  HAnimSegment();
HAnimSegment245.setDEF(CString("hanim_l_ring_metacarpal"));
HAnimSegment245.X3DNode::setName(CString("l_ring_metacarpal"));
HAnimJoint244.addChildren(&HAnimSegment245);

HAnimJoint& HAnimJoint246 =  HAnimJoint();
HAnimJoint246.setDEF(CString("hanim_l_ring1"));
HAnimJoint246.X3DNode::setName(CString("l_ring1"));
HAnimJoint246.setCenter(new float[]{0.1956,0.7815,-0.0794});
HAnimSegment& HAnimSegment247 =  HAnimSegment();
HAnimSegment247.setDEF(CString("hanim_l_ring_proximal"));
HAnimSegment247.X3DNode::setName(CString("l_ring_proximal"));
HAnimJoint246.addChildren(&HAnimSegment247);

HAnimJoint& HAnimJoint248 =  HAnimJoint();
HAnimJoint248.setDEF(CString("hanim_l_ring2"));
HAnimJoint248.X3DNode::setName(CString("l_ring2"));
HAnimJoint248.setCenter(new float[]{0.1973,0.7287,-0.0777});
HAnimSegment& HAnimSegment249 =  HAnimSegment();
HAnimSegment249.setDEF(CString("hanim_l_ring_middle"));
HAnimSegment249.X3DNode::setName(CString("l_ring_middle"));
HAnimJoint248.addChildren(&HAnimSegment249);

HAnimJoint& HAnimJoint250 =  HAnimJoint();
HAnimJoint250.setDEF(CString("hanim_l_ring3"));
HAnimJoint250.X3DNode::setName(CString("l_ring3"));
HAnimJoint250.setCenter(new float[]{0.1983,0.7045,-0.0767});
HAnimSegment& HAnimSegment251 =  HAnimSegment();
HAnimSegment251.setDEF(CString("hanim_l_ring_distal"));
HAnimSegment251.X3DNode::setName(CString("l_ring_distal"));
HAnimSite& HAnimSite252 =  HAnimSite();
HAnimSite252.setDEF(CString("hanim_l_ring_distal_tip"));
HAnimSite252.X3DNode::setName(CString("l_ring_distal_tip"));
HAnimSite252.setTranslation(new float[]{0.2035,0.675,-0.0756});
HAnimSegment251.addChild(&HAnimSite252);

HAnimJoint250.addChildren(&HAnimSegment251);

HAnimJoint248.addChildren(&HAnimJoint250);

HAnimJoint246.addChildren(&HAnimJoint248);

HAnimJoint244.addChildren(&HAnimJoint246);

HAnimJoint211.addChildren(&HAnimJoint244);

HAnimJoint& HAnimJoint253 =  HAnimJoint();
HAnimJoint253.setDEF(CString("hanim_l_pinky0"));
HAnimJoint253.X3DNode::setName(CString("l_pinky0"));
HAnimJoint253.setCenter(new float[]{0.1925,0.8066,-0.1036});
HAnimSegment& HAnimSegment254 =  HAnimSegment();
HAnimSegment254.setDEF(CString("hanim_l_pinky_metacarpal"));
HAnimSegment254.X3DNode::setName(CString("l_pinky_metacarpal"));
HAnimJoint253.addChildren(&HAnimSegment254);

HAnimJoint& HAnimJoint255 =  HAnimJoint();
HAnimJoint255.setDEF(CString("hanim_l_pinky1"));
HAnimJoint255.X3DNode::setName(CString("l_pinky1"));
HAnimJoint255.setCenter(new float[]{0.1925,0.7866,-0.1036});
HAnimSegment& HAnimSegment256 =  HAnimSegment();
HAnimSegment256.setDEF(CString("hanim_l_pinky_proximal"));
HAnimSegment256.X3DNode::setName(CString("l_pinky_proximal"));
HAnimJoint255.addChildren(&HAnimSegment256);

HAnimJoint& HAnimJoint257 =  HAnimJoint();
HAnimJoint257.setDEF(CString("hanim_l_pinky2"));
HAnimJoint257.X3DNode::setName(CString("l_pinky2"));
HAnimJoint257.setCenter(new float[]{0.1938,0.7452,-0.1024});
HAnimSegment& HAnimSegment258 =  HAnimSegment();
HAnimSegment258.setDEF(CString("hanim_l_pinky_middle"));
HAnimSegment258.X3DNode::setName(CString("l_pinky_middle"));
HAnimJoint257.addChildren(&HAnimSegment258);

HAnimJoint& HAnimJoint259 =  HAnimJoint();
HAnimJoint259.setDEF(CString("hanim_l_pinky3"));
HAnimJoint259.X3DNode::setName(CString("l_pinky3"));
HAnimJoint259.setCenter(new float[]{0.1948,0.7277,-0.1017});
HAnimSegment& HAnimSegment260 =  HAnimSegment();
HAnimSegment260.setDEF(CString("hanim_l_pinky_distal"));
HAnimSegment260.X3DNode::setName(CString("l_pinky_distal"));
HAnimSite& HAnimSite261 =  HAnimSite();
HAnimSite261.setDEF(CString("hanim_l_pinky_distal_tip"));
HAnimSite261.X3DNode::setName(CString("l_pinky_distal_tip"));
HAnimSite261.setTranslation(new float[]{0.2014,0.7009,-0.1012});
HAnimSegment260.addChild(&HAnimSite261);

HAnimJoint259.addChildren(&HAnimSegment260);

HAnimJoint257.addChildren(&HAnimJoint259);

HAnimJoint255.addChildren(&HAnimJoint257);

HAnimJoint253.addChildren(&HAnimJoint255);

HAnimJoint211.addChildren(&HAnimJoint253);

HAnimJoint205.addChildren(&HAnimJoint211);

HAnimJoint202.addChildren(&HAnimJoint205);

HAnimJoint200.addChildren(&HAnimJoint202);

HAnimJoint194.addChildren(&HAnimJoint200);

HAnimJoint142.addChildren(&HAnimJoint194);

HAnimJoint& HAnimJoint262 =  HAnimJoint();
HAnimJoint262.setDEF(CString("hanim_r_sternoclavicular"));
HAnimJoint262.X3DNode::setName(CString("r_sternoclavicular"));
HAnimJoint262.setCenter(new float[]{-0.082,1.4488,-0.0353});
HAnimSegment& HAnimSegment263 =  HAnimSegment();
HAnimSegment263.setDEF(CString("hanim_r_clavicle"));
HAnimSegment263.X3DNode::setName(CString("r_clavicle"));
HAnimSite& HAnimSite264 =  HAnimSite();
HAnimSite264.setDEF(CString("hanim_r_clavicale_pt"));
HAnimSite264.X3DNode::setName(CString("r_clavicale_pt"));
HAnimSite264.setTranslation(new float[]{-0.0115,1.4943,0.04});
HAnimSegment263.addChild(&HAnimSite264);

HAnimSite& HAnimSite265 =  HAnimSite();
HAnimSite265.setDEF(CString("hanim_r_acromion_pt"));
HAnimSite265.X3DNode::setName(CString("r_acromion_pt"));
HAnimSite265.setTranslation(new float[]{-0.1905,1.4791,-0.0431});
HAnimSegment263.addChild(&HAnimSite265);

HAnimSite& HAnimSite266 =  HAnimSite();
HAnimSite266.setDEF(CString("hanim_r_axilla_ant_pt"));
HAnimSite266.X3DNode::setName(CString("r_axilla_ant_pt"));
HAnimSite266.setTranslation(new float[]{-0.1626,1.4072,-0.0031});
HAnimSegment263.addChild(&HAnimSite266);

HAnimSite& HAnimSite267 =  HAnimSite();
HAnimSite267.setDEF(CString("hanim_r_axilla_post_pt"));
HAnimSite267.X3DNode::setName(CString("r_axilla_post_pt"));
HAnimSite267.setTranslation(new float[]{-0.1603,1.4098,-0.0826});
HAnimSegment263.addChild(&HAnimSite267);

HAnimJoint262.addChildren(&HAnimSegment263);

HAnimJoint& HAnimJoint268 =  HAnimJoint();
HAnimJoint268.setDEF(CString("hanim_r_acromioclavicular"));
HAnimJoint268.X3DNode::setName(CString("r_acromioclavicular"));
HAnimJoint268.setCenter(new float[]{-0.0962,1.4269,-0.0424});
HAnimSegment& HAnimSegment269 =  HAnimSegment();
HAnimSegment269.setDEF(CString("hanim_r_scapula"));
HAnimSegment269.X3DNode::setName(CString("r_scapula"));
HAnimJoint268.addChildren(&HAnimSegment269);

HAnimJoint& HAnimJoint270 =  HAnimJoint();
HAnimJoint270.setDEF(CString("hanim_r_shoulder"));
HAnimJoint270.X3DNode::setName(CString("r_shoulder"));
HAnimJoint270.setCenter(new float[]{-0.2029,1.4376,-0.0387});
HAnimSegment& HAnimSegment271 =  HAnimSegment();
HAnimSegment271.setDEF(CString("hanim_r_upperarm"));
HAnimSegment271.X3DNode::setName(CString("r_upperarm"));
HAnimSite& HAnimSite272 =  HAnimSite();
HAnimSite272.setDEF(CString("hanim_r_humeral_lateral_epicn_pt"));
HAnimSite272.X3DNode::setName(CString("r_humeral_lateral_epicn_pt"));
HAnimSite272.setTranslation(new float[]{-0.2224,1.1517,-0.1033});
HAnimSegment271.addChild(&HAnimSite272);

HAnimJoint270.addChildren(&HAnimSegment271);

HAnimJoint& HAnimJoint273 =  HAnimJoint();
HAnimJoint273.setDEF(CString("hanim_r_elbow"));
HAnimJoint273.X3DNode::setName(CString("r_elbow"));
HAnimJoint273.setCenter(new float[]{-0.2014,1.1357,-0.0682});
HAnimSegment& HAnimSegment274 =  HAnimSegment();
HAnimSegment274.setDEF(CString("hanim_r_forearm"));
HAnimSegment274.X3DNode::setName(CString("r_forearm"));
HAnimSite& HAnimSite275 =  HAnimSite();
HAnimSite275.setDEF(CString("hanim_r_radial_styloid_pt"));
HAnimSite275.X3DNode::setName(CString("r_radial_styloid_pt"));
HAnimSite275.setTranslation(new float[]{-0.1884,0.8676,-0.036});
HAnimSegment274.addChild(&HAnimSite275);

HAnimSite& HAnimSite276 =  HAnimSite();
HAnimSite276.setDEF(CString("hanim_r_olecranon_pt"));
HAnimSite276.X3DNode::setName(CString("r_olecranon_pt"));
HAnimSite276.setTranslation(new float[]{-0.1907,1.1405,-0.1065});
HAnimSegment274.addChild(&HAnimSite276);

HAnimSite& HAnimSite277 =  HAnimSite();
HAnimSite277.setDEF(CString("hanim_r_humeral_medial_epicn_pt"));
HAnimSite277.X3DNode::setName(CString("r_humeral_medial_epicn_pt"));
HAnimSite277.setTranslation(new float[]{-0.168,1.1298,-0.1062});
HAnimSegment274.addChild(&HAnimSite277);

HAnimSite& HAnimSite278 =  HAnimSite();
HAnimSite278.setDEF(CString("hanim_r_radiale_pt"));
HAnimSite278.X3DNode::setName(CString("r_radiale_pt"));
HAnimSite278.setTranslation(new float[]{-0.213,1.1305,-0.1091});
HAnimSegment274.addChild(&HAnimSite278);

HAnimJoint273.addChildren(&HAnimSegment274);

HAnimJoint& HAnimJoint279 =  HAnimJoint();
HAnimJoint279.setDEF(CString("hanim_r_wrist"));
HAnimJoint279.X3DNode::setName(CString("r_wrist"));
HAnimJoint279.setCenter(new float[]{-0.1984,0.8663,-0.0583});
HAnimSegment& HAnimSegment280 =  HAnimSegment();
HAnimSegment280.setDEF(CString("hanim_r_hand"));
HAnimSegment280.X3DNode::setName(CString("r_hand"));
HAnimSite& HAnimSite281 =  HAnimSite();
HAnimSite281.setDEF(CString("hanim_r_metacarpal_pha2_pt"));
HAnimSite281.X3DNode::setName(CString("r_metacarpal_pha2_pt"));
HAnimSite281.setTranslation(new float[]{-0.1977,0.8169,-0.0177});
HAnimSegment280.addChild(&HAnimSite281);

HAnimSite& HAnimSite282 =  HAnimSite();
HAnimSite282.setDEF(CString("hanim_r_ulnar_styloid_pt"));
HAnimSite282.X3DNode::setName(CString("r_ulnar_styloid_pt"));
HAnimSite282.setTranslation(new float[]{-0.2117,0.8562,-0.0584});
HAnimSegment280.addChild(&HAnimSite282);

HAnimSite& HAnimSite283 =  HAnimSite();
HAnimSite283.setDEF(CString("hanim_r_metacarpal_pha5_pt"));
HAnimSite283.X3DNode::setName(CString("r_metacarpal_pha5_pt"));
HAnimSite283.setTranslation(new float[]{-0.1929,0.789,-0.1064});
HAnimSegment280.addChild(&HAnimSite283);

HAnimSite& HAnimSite284 =  HAnimSite();
HAnimSite284.setDEF(CString("hanim_r_hand_front_view"));
HAnimSite284.X3DNode::setName(CString("r_hand_front_view"));
HAnimSite284.setTranslation(new float[]{-0.3,0.75,0.45});
Viewpoint& Viewpoint285 =  Viewpoint();
Viewpoint285.setDEF(CString("hanim_r_hand_front_viewpoint"));
Viewpoint285.setDescription(CString("right hand front"));
Viewpoint285.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint285.setCenterOfRotation(new float[]{0.0,0.7,0.0});
HAnimSite284.addChild(&Viewpoint285);

HAnimSegment280.addChild(&HAnimSite284);

HAnimJoint279.addChildren(&HAnimSegment280);

HAnimJoint& HAnimJoint286 =  HAnimJoint();
HAnimJoint286.setDEF(CString("hanim_r_thumb1"));
HAnimJoint286.X3DNode::setName(CString("r_thumb1"));
HAnimJoint286.setCenter(new float[]{-0.1924,0.8472,-0.0534});
HAnimSegment& HAnimSegment287 =  HAnimSegment();
HAnimSegment287.setDEF(CString("hanim_r_thumb_metacarpal"));
HAnimSegment287.X3DNode::setName(CString("r_thumb_metacarpal"));
HAnimJoint286.addChildren(&HAnimSegment287);

HAnimJoint& HAnimJoint288 =  HAnimJoint();
HAnimJoint288.setDEF(CString("hanim_r_thumb2"));
HAnimJoint288.X3DNode::setName(CString("r_thumb2"));
HAnimJoint288.setCenter(new float[]{-0.1951,0.8226,0.0246});
HAnimSegment& HAnimSegment289 =  HAnimSegment();
HAnimSegment289.setDEF(CString("hanim_r_thumb_proximal"));
HAnimSegment289.X3DNode::setName(CString("r_thumb_proximal"));
HAnimJoint288.addChildren(&HAnimSegment289);

HAnimJoint& HAnimJoint290 =  HAnimJoint();
HAnimJoint290.setDEF(CString("hanim_r_thumb3"));
HAnimJoint290.X3DNode::setName(CString("r_thumb3"));
HAnimJoint290.setCenter(new float[]{-0.1955,0.8159,0.0464});
HAnimSegment& HAnimSegment291 =  HAnimSegment();
HAnimSegment291.setDEF(CString("hanim_r_thumb_distal"));
HAnimSegment291.X3DNode::setName(CString("r_thumb_distal"));
HAnimSite& HAnimSite292 =  HAnimSite();
HAnimSite292.setDEF(CString("hanim_r_thumb_distal_tip"));
HAnimSite292.X3DNode::setName(CString("r_thumb_distal_tip"));
HAnimSite292.setTranslation(new float[]{-0.1869,0.809,0.082});
HAnimSegment291.addChild(&HAnimSite292);

HAnimJoint290.addChildren(&HAnimSegment291);

HAnimJoint288.addChildren(&HAnimJoint290);

HAnimJoint286.addChildren(&HAnimJoint288);

HAnimJoint279.addChildren(&HAnimJoint286);

HAnimJoint& HAnimJoint293 =  HAnimJoint();
HAnimJoint293.setDEF(CString("hanim_r_index0"));
HAnimJoint293.X3DNode::setName(CString("r_index0"));
HAnimJoint293.setCenter(new float[]{-0.1983,0.8024,-0.028});
HAnimSegment& HAnimSegment294 =  HAnimSegment();
HAnimSegment294.setDEF(CString("hanim_r_index_metacarpal"));
HAnimSegment294.X3DNode::setName(CString("r_index_metacarpal"));
HAnimJoint293.addChildren(&HAnimSegment294);

HAnimJoint& HAnimJoint295 =  HAnimJoint();
HAnimJoint295.setDEF(CString("hanim_r_index1"));
HAnimJoint295.X3DNode::setName(CString("r_index1"));
HAnimJoint295.setCenter(new float[]{-0.1983,0.7815,-0.028});
HAnimSegment& HAnimSegment296 =  HAnimSegment();
HAnimSegment296.setDEF(CString("hanim_r_index_proximal"));
HAnimSegment296.X3DNode::setName(CString("r_index_proximal"));
HAnimJoint295.addChildren(&HAnimSegment296);

HAnimJoint& HAnimJoint297 =  HAnimJoint();
HAnimJoint297.setDEF(CString("hanim_r_index2"));
HAnimJoint297.X3DNode::setName(CString("r_index2"));
HAnimJoint297.setCenter(new float[]{-0.2017,0.7363,-0.0248});
HAnimSegment& HAnimSegment298 =  HAnimSegment();
HAnimSegment298.setDEF(CString("hanim_r_index_middle"));
HAnimSegment298.X3DNode::setName(CString("r_index_middle"));
HAnimJoint297.addChildren(&HAnimSegment298);

HAnimJoint& HAnimJoint299 =  HAnimJoint();
HAnimJoint299.setDEF(CString("hanim_r_index3"));
HAnimJoint299.X3DNode::setName(CString("r_index3"));
HAnimJoint299.setCenter(new float[]{-0.2028,0.7139,-0.0236});
HAnimSegment& HAnimSegment300 =  HAnimSegment();
HAnimSegment300.setDEF(CString("hanim_r_index_distal"));
HAnimSegment300.X3DNode::setName(CString("r_index_distal"));
HAnimSite& HAnimSite301 =  HAnimSite();
HAnimSite301.setDEF(CString("hanim_r_index_distal_tip"));
HAnimSite301.X3DNode::setName(CString("r_index_distal_tip"));
HAnimSite301.setTranslation(new float[]{-0.198,0.6883,-0.018});
HAnimSegment300.addChild(&HAnimSite301);

HAnimSite& HAnimSite302 =  HAnimSite();
HAnimSite302.setDEF(CString("hanim_r_dactylion_pt"));
HAnimSite302.X3DNode::setName(CString("r_dactylion_pt"));
HAnimSite302.setTranslation(new float[]{-0.1941,0.6772,-0.0423});
HAnimSegment300.addChild(&HAnimSite302);

HAnimJoint299.addChildren(&HAnimSegment300);

HAnimJoint297.addChildren(&HAnimJoint299);

HAnimJoint295.addChildren(&HAnimJoint297);

HAnimJoint293.addChildren(&HAnimJoint295);

HAnimJoint279.addChildren(&HAnimJoint293);

HAnimJoint& HAnimJoint303 =  HAnimJoint();
HAnimJoint303.setDEF(CString("hanim_r_middle0"));
HAnimJoint303.X3DNode::setName(CString("r_middle0"));
HAnimJoint303.setCenter(new float[]{-0.1987,0.8029,-0.053});
HAnimSegment& HAnimSegment304 =  HAnimSegment();
HAnimSegment304.setDEF(CString("hanim_r_middle_metacarpal"));
HAnimSegment304.X3DNode::setName(CString("r_middle_metacarpal"));
HAnimJoint303.addChildren(&HAnimSegment304);

HAnimJoint& HAnimJoint305 =  HAnimJoint();
HAnimJoint305.setDEF(CString("hanim_r_middle1"));
HAnimJoint305.X3DNode::setName(CString("r_middle1"));
HAnimJoint305.setCenter(new float[]{-0.1987,0.7818,-0.053});
HAnimSegment& HAnimSegment306 =  HAnimSegment();
HAnimSegment306.setDEF(CString("hanim_r_middle_proximal"));
HAnimSegment306.X3DNode::setName(CString("r_middle_proximal"));
HAnimJoint305.addChildren(&HAnimSegment306);

HAnimJoint& HAnimJoint307 =  HAnimJoint();
HAnimJoint307.setDEF(CString("hanim_r_middle2"));
HAnimJoint307.X3DNode::setName(CString("r_middle2"));
HAnimJoint307.setCenter(new float[]{-0.2013,0.7273,-0.0503});
HAnimSegment& HAnimSegment308 =  HAnimSegment();
HAnimSegment308.setDEF(CString("hanim_r_middle_middle"));
HAnimSegment308.X3DNode::setName(CString("r_middle_middle"));
HAnimJoint307.addChildren(&HAnimSegment308);

HAnimJoint& HAnimJoint309 =  HAnimJoint();
HAnimJoint309.setDEF(CString("hanim_r_middle3"));
HAnimJoint309.X3DNode::setName(CString("r_middle3"));
HAnimJoint309.setCenter(new float[]{-0.2026,0.7011,-0.0494});
HAnimSegment& HAnimSegment310 =  HAnimSegment();
HAnimSegment310.setDEF(CString("hanim_r_middle_distal"));
HAnimSegment310.X3DNode::setName(CString("r_middle_distal"));
HAnimSite& HAnimSite311 =  HAnimSite();
HAnimSite311.setDEF(CString("hanim_r_middle_distal_tip"));
HAnimSite311.X3DNode::setName(CString("r_middle_distal_tip"));
HAnimSite311.setTranslation(new float[]{-0.1969,0.6758,-0.0427});
HAnimSegment310.addChild(&HAnimSite311);

HAnimJoint309.addChildren(&HAnimSegment310);

HAnimJoint307.addChildren(&HAnimJoint309);

HAnimJoint305.addChildren(&HAnimJoint307);

HAnimJoint303.addChildren(&HAnimJoint305);

HAnimJoint279.addChildren(&HAnimJoint303);

HAnimJoint& HAnimJoint312 =  HAnimJoint();
HAnimJoint312.setDEF(CString("hanim_r_ring0"));
HAnimJoint312.X3DNode::setName(CString("r_ring0"));
HAnimJoint312.setCenter(new float[]{-0.1956,0.8019,-0.0794});
HAnimSegment& HAnimSegment313 =  HAnimSegment();
HAnimSegment313.setDEF(CString("hanim_r_ring_metacarpal"));
HAnimSegment313.X3DNode::setName(CString("r_ring_metacarpal"));
HAnimJoint312.addChildren(&HAnimSegment313);

HAnimJoint& HAnimJoint314 =  HAnimJoint();
HAnimJoint314.setDEF(CString("hanim_r_ring1"));
HAnimJoint314.X3DNode::setName(CString("r_ring1"));
HAnimJoint314.setCenter(new float[]{-0.1956,0.7815,-0.0794});
HAnimSegment& HAnimSegment315 =  HAnimSegment();
HAnimSegment315.setDEF(CString("hanim_r_ring_proximal"));
HAnimSegment315.X3DNode::setName(CString("r_ring_proximal"));
HAnimJoint314.addChildren(&HAnimSegment315);

HAnimJoint& HAnimJoint316 =  HAnimJoint();
HAnimJoint316.setDEF(CString("hanim_r_ring2"));
HAnimJoint316.X3DNode::setName(CString("r_ring2"));
HAnimJoint316.setCenter(new float[]{-0.1973,0.7287,-0.0777});
HAnimSegment& HAnimSegment317 =  HAnimSegment();
HAnimSegment317.setDEF(CString("hanim_r_ring_middle"));
HAnimSegment317.X3DNode::setName(CString("r_ring_middle"));
HAnimJoint316.addChildren(&HAnimSegment317);

HAnimJoint& HAnimJoint318 =  HAnimJoint();
HAnimJoint318.setDEF(CString("hanim_r_ring3"));
HAnimJoint318.X3DNode::setName(CString("r_ring3"));
HAnimJoint318.setCenter(new float[]{-0.1983,0.7045,-0.0767});
HAnimSegment& HAnimSegment319 =  HAnimSegment();
HAnimSegment319.setDEF(CString("hanim_r_ring_distal"));
HAnimSegment319.X3DNode::setName(CString("r_ring_distal"));
HAnimSite& HAnimSite320 =  HAnimSite();
HAnimSite320.setDEF(CString("hanim_r_ring_distal_tip"));
HAnimSite320.X3DNode::setName(CString("r_ring_distal_tip"));
HAnimSite320.setTranslation(new float[]{-0.1934,0.6778,-0.0693});
HAnimSegment319.addChild(&HAnimSite320);

HAnimJoint318.addChildren(&HAnimSegment319);

HAnimJoint316.addChildren(&HAnimJoint318);

HAnimJoint314.addChildren(&HAnimJoint316);

HAnimJoint312.addChildren(&HAnimJoint314);

HAnimJoint279.addChildren(&HAnimJoint312);

HAnimJoint& HAnimJoint321 =  HAnimJoint();
HAnimJoint321.setDEF(CString("hanim_r_pinky0"));
HAnimJoint321.X3DNode::setName(CString("r_pinky0"));
HAnimJoint321.setCenter(new float[]{-0.1925,0.8066,-0.1036});
HAnimSegment& HAnimSegment322 =  HAnimSegment();
HAnimSegment322.setDEF(CString("hanim_r_pinky_metacarpal"));
HAnimSegment322.X3DNode::setName(CString("r_pinky_metacarpal"));
HAnimJoint321.addChildren(&HAnimSegment322);

HAnimJoint& HAnimJoint323 =  HAnimJoint();
HAnimJoint323.setDEF(CString("hanim_r_pinky1"));
HAnimJoint323.X3DNode::setName(CString("r_pinky1"));
HAnimJoint323.setCenter(new float[]{-0.1925,0.7866,-0.1036});
HAnimSegment& HAnimSegment324 =  HAnimSegment();
HAnimSegment324.setDEF(CString("hanim_r_pinky_proximal"));
HAnimSegment324.X3DNode::setName(CString("r_pinky_proximal"));
HAnimJoint323.addChildren(&HAnimSegment324);

HAnimJoint& HAnimJoint325 =  HAnimJoint();
HAnimJoint325.setDEF(CString("hanim_r_pinky2"));
HAnimJoint325.X3DNode::setName(CString("r_pinky2"));
HAnimJoint325.setCenter(new float[]{-0.1938,0.7452,-0.1024});
HAnimSegment& HAnimSegment326 =  HAnimSegment();
HAnimSegment326.setDEF(CString("hanim_r_pinky_middle"));
HAnimSegment326.X3DNode::setName(CString("r_pinky_middle"));
HAnimJoint325.addChildren(&HAnimSegment326);

HAnimJoint& HAnimJoint327 =  HAnimJoint();
HAnimJoint327.setDEF(CString("hanim_r_pinky3"));
HAnimJoint327.X3DNode::setName(CString("r_pinky3"));
HAnimJoint327.setCenter(new float[]{-0.1948,0.7277,-0.1017});
HAnimSegment& HAnimSegment328 =  HAnimSegment();
HAnimSegment328.setDEF(CString("hanim_r_pinky_distal"));
HAnimSegment328.X3DNode::setName(CString("r_pinky_distal"));
HAnimSite& HAnimSite329 =  HAnimSite();
HAnimSite329.setDEF(CString("hanim_r_pinky_distal_tip"));
HAnimSite329.X3DNode::setName(CString("r_pinky_distal_tip"));
HAnimSite329.setTranslation(new float[]{-0.1938,0.7035,-0.0949});
HAnimSegment328.addChild(&HAnimSite329);

HAnimJoint327.addChildren(&HAnimSegment328);

HAnimJoint325.addChildren(&HAnimJoint327);

HAnimJoint323.addChildren(&HAnimJoint325);

HAnimJoint321.addChildren(&HAnimJoint323);

HAnimJoint279.addChildren(&HAnimJoint321);

HAnimJoint273.addChildren(&HAnimJoint279);

HAnimJoint270.addChildren(&HAnimJoint273);

HAnimJoint268.addChildren(&HAnimJoint270);

HAnimJoint262.addChildren(&HAnimJoint268);

HAnimJoint142.addChildren(&HAnimJoint262);

HAnimJoint140.addChildren(&HAnimJoint142);

HAnimJoint138.addChildren(&HAnimJoint140);

HAnimJoint136.addChildren(&HAnimJoint138);

HAnimJoint134.addChildren(&HAnimJoint136);

HAnimJoint132.addChildren(&HAnimJoint134);

HAnimJoint130.addChildren(&HAnimJoint132);

HAnimJoint128.addChildren(&HAnimJoint130);

HAnimJoint124.addChildren(&HAnimJoint128);

HAnimJoint121.addChildren(&HAnimJoint124);

HAnimJoint119.addChildren(&HAnimJoint121);

HAnimJoint117.addChildren(&HAnimJoint119);

HAnimJoint115.addChildren(&HAnimJoint117);

HAnimJoint110.addChildren(&HAnimJoint115);

HAnimJoint108.addChildren(&HAnimJoint110);

HAnimJoint106.addChildren(&HAnimJoint108);

HAnimJoint102.addChildren(&HAnimJoint106);

HAnimJoint43.addChildren(&HAnimJoint102);

HAnimHumanoid42.setSkeleton(&HAnimJoint43);

HAnimJoint& HAnimJoint330 =  HAnimJoint();
HAnimJoint330.setUSE(CString("hanim_humanoid_root"));
HAnimHumanoid42.setJoints(&HAnimJoint330);

HAnimJoint& HAnimJoint331 =  HAnimJoint();
HAnimJoint331.setUSE(CString("hanim_sacroiliac"));
HAnimHumanoid42.setJoints(&HAnimJoint331);

HAnimJoint& HAnimJoint332 =  HAnimJoint();
HAnimJoint332.setUSE(CString("hanim_vl5"));
HAnimHumanoid42.setJoints(&HAnimJoint332);

HAnimJoint& HAnimJoint333 =  HAnimJoint();
HAnimJoint333.setUSE(CString("hanim_vl4"));
HAnimHumanoid42.setJoints(&HAnimJoint333);

HAnimJoint& HAnimJoint334 =  HAnimJoint();
HAnimJoint334.setUSE(CString("hanim_vl3"));
HAnimHumanoid42.setJoints(&HAnimJoint334);

HAnimJoint& HAnimJoint335 =  HAnimJoint();
HAnimJoint335.setUSE(CString("hanim_vl2"));
HAnimHumanoid42.setJoints(&HAnimJoint335);

HAnimJoint& HAnimJoint336 =  HAnimJoint();
HAnimJoint336.setUSE(CString("hanim_vl1"));
HAnimHumanoid42.setJoints(&HAnimJoint336);

HAnimJoint& HAnimJoint337 =  HAnimJoint();
HAnimJoint337.setUSE(CString("hanim_vt12"));
HAnimHumanoid42.setJoints(&HAnimJoint337);

HAnimJoint& HAnimJoint338 =  HAnimJoint();
HAnimJoint338.setUSE(CString("hanim_vt11"));
HAnimHumanoid42.setJoints(&HAnimJoint338);

HAnimJoint& HAnimJoint339 =  HAnimJoint();
HAnimJoint339.setUSE(CString("hanim_vt10"));
HAnimHumanoid42.setJoints(&HAnimJoint339);

HAnimJoint& HAnimJoint340 =  HAnimJoint();
HAnimJoint340.setUSE(CString("hanim_vt9"));
HAnimHumanoid42.setJoints(&HAnimJoint340);

HAnimJoint& HAnimJoint341 =  HAnimJoint();
HAnimJoint341.setUSE(CString("hanim_vt8"));
HAnimHumanoid42.setJoints(&HAnimJoint341);

HAnimJoint& HAnimJoint342 =  HAnimJoint();
HAnimJoint342.setUSE(CString("hanim_vt7"));
HAnimHumanoid42.setJoints(&HAnimJoint342);

HAnimJoint& HAnimJoint343 =  HAnimJoint();
HAnimJoint343.setUSE(CString("hanim_vt6"));
HAnimHumanoid42.setJoints(&HAnimJoint343);

HAnimJoint& HAnimJoint344 =  HAnimJoint();
HAnimJoint344.setUSE(CString("hanim_vt5"));
HAnimHumanoid42.setJoints(&HAnimJoint344);

HAnimJoint& HAnimJoint345 =  HAnimJoint();
HAnimJoint345.setUSE(CString("hanim_vt4"));
HAnimHumanoid42.setJoints(&HAnimJoint345);

HAnimJoint& HAnimJoint346 =  HAnimJoint();
HAnimJoint346.setUSE(CString("hanim_vt3"));
HAnimHumanoid42.setJoints(&HAnimJoint346);

HAnimJoint& HAnimJoint347 =  HAnimJoint();
HAnimJoint347.setUSE(CString("hanim_vt2"));
HAnimHumanoid42.setJoints(&HAnimJoint347);

HAnimJoint& HAnimJoint348 =  HAnimJoint();
HAnimJoint348.setUSE(CString("hanim_vt1"));
HAnimHumanoid42.setJoints(&HAnimJoint348);

HAnimJoint& HAnimJoint349 =  HAnimJoint();
HAnimJoint349.setUSE(CString("hanim_vc7"));
HAnimHumanoid42.setJoints(&HAnimJoint349);

HAnimJoint& HAnimJoint350 =  HAnimJoint();
HAnimJoint350.setUSE(CString("hanim_vc6"));
HAnimHumanoid42.setJoints(&HAnimJoint350);

HAnimJoint& HAnimJoint351 =  HAnimJoint();
HAnimJoint351.setUSE(CString("hanim_vc5"));
HAnimHumanoid42.setJoints(&HAnimJoint351);

HAnimJoint& HAnimJoint352 =  HAnimJoint();
HAnimJoint352.setUSE(CString("hanim_vc4"));
HAnimHumanoid42.setJoints(&HAnimJoint352);

HAnimJoint& HAnimJoint353 =  HAnimJoint();
HAnimJoint353.setUSE(CString("hanim_vc3"));
HAnimHumanoid42.setJoints(&HAnimJoint353);

HAnimJoint& HAnimJoint354 =  HAnimJoint();
HAnimJoint354.setUSE(CString("hanim_vc2"));
HAnimHumanoid42.setJoints(&HAnimJoint354);

HAnimJoint& HAnimJoint355 =  HAnimJoint();
HAnimJoint355.setUSE(CString("hanim_vc1"));
HAnimHumanoid42.setJoints(&HAnimJoint355);

HAnimJoint& HAnimJoint356 =  HAnimJoint();
HAnimJoint356.setUSE(CString("hanim_skullbase"));
HAnimHumanoid42.setJoints(&HAnimJoint356);

HAnimJoint& HAnimJoint357 =  HAnimJoint();
HAnimJoint357.setUSE(CString("hanim_temporomandibular"));
HAnimHumanoid42.setJoints(&HAnimJoint357);

HAnimJoint& HAnimJoint358 =  HAnimJoint();
HAnimJoint358.setUSE(CString("hanim_l_acromioclavicular"));
HAnimHumanoid42.setJoints(&HAnimJoint358);

HAnimJoint& HAnimJoint359 =  HAnimJoint();
HAnimJoint359.setUSE(CString("hanim_r_acromioclavicular"));
HAnimHumanoid42.setJoints(&HAnimJoint359);

HAnimJoint& HAnimJoint360 =  HAnimJoint();
HAnimJoint360.setUSE(CString("hanim_l_ankle"));
HAnimHumanoid42.setJoints(&HAnimJoint360);

HAnimJoint& HAnimJoint361 =  HAnimJoint();
HAnimJoint361.setUSE(CString("hanim_r_ankle"));
HAnimHumanoid42.setJoints(&HAnimJoint361);

HAnimJoint& HAnimJoint362 =  HAnimJoint();
HAnimJoint362.setUSE(CString("hanim_l_elbow"));
HAnimHumanoid42.setJoints(&HAnimJoint362);

HAnimJoint& HAnimJoint363 =  HAnimJoint();
HAnimJoint363.setUSE(CString("hanim_r_elbow"));
HAnimHumanoid42.setJoints(&HAnimJoint363);

HAnimJoint& HAnimJoint364 =  HAnimJoint();
HAnimJoint364.setUSE(CString("hanim_l_eyeball_joint"));
HAnimHumanoid42.setJoints(&HAnimJoint364);

HAnimJoint& HAnimJoint365 =  HAnimJoint();
HAnimJoint365.setUSE(CString("hanim_r_eyeball_joint"));
HAnimHumanoid42.setJoints(&HAnimJoint365);

HAnimJoint& HAnimJoint366 =  HAnimJoint();
HAnimJoint366.setUSE(CString("hanim_l_eyebrow_joint"));
HAnimHumanoid42.setJoints(&HAnimJoint366);

HAnimJoint& HAnimJoint367 =  HAnimJoint();
HAnimJoint367.setUSE(CString("hanim_r_eyebrow_joint"));
HAnimHumanoid42.setJoints(&HAnimJoint367);

HAnimJoint& HAnimJoint368 =  HAnimJoint();
HAnimJoint368.setUSE(CString("hanim_l_eyelid_joint"));
HAnimHumanoid42.setJoints(&HAnimJoint368);

HAnimJoint& HAnimJoint369 =  HAnimJoint();
HAnimJoint369.setUSE(CString("hanim_r_eyelid_joint"));
HAnimHumanoid42.setJoints(&HAnimJoint369);

HAnimJoint& HAnimJoint370 =  HAnimJoint();
HAnimJoint370.setUSE(CString("hanim_l_hip"));
HAnimHumanoid42.setJoints(&HAnimJoint370);

HAnimJoint& HAnimJoint371 =  HAnimJoint();
HAnimJoint371.setUSE(CString("hanim_r_hip"));
HAnimHumanoid42.setJoints(&HAnimJoint371);

HAnimJoint& HAnimJoint372 =  HAnimJoint();
HAnimJoint372.setUSE(CString("hanim_l_index0"));
HAnimHumanoid42.setJoints(&HAnimJoint372);

HAnimJoint& HAnimJoint373 =  HAnimJoint();
HAnimJoint373.setUSE(CString("hanim_r_index0"));
HAnimHumanoid42.setJoints(&HAnimJoint373);

HAnimJoint& HAnimJoint374 =  HAnimJoint();
HAnimJoint374.setUSE(CString("hanim_l_index1"));
HAnimHumanoid42.setJoints(&HAnimJoint374);

HAnimJoint& HAnimJoint375 =  HAnimJoint();
HAnimJoint375.setUSE(CString("hanim_r_index1"));
HAnimHumanoid42.setJoints(&HAnimJoint375);

HAnimJoint& HAnimJoint376 =  HAnimJoint();
HAnimJoint376.setUSE(CString("hanim_l_index2"));
HAnimHumanoid42.setJoints(&HAnimJoint376);

HAnimJoint& HAnimJoint377 =  HAnimJoint();
HAnimJoint377.setUSE(CString("hanim_r_index2"));
HAnimHumanoid42.setJoints(&HAnimJoint377);

HAnimJoint& HAnimJoint378 =  HAnimJoint();
HAnimJoint378.setUSE(CString("hanim_l_index3"));
HAnimHumanoid42.setJoints(&HAnimJoint378);

HAnimJoint& HAnimJoint379 =  HAnimJoint();
HAnimJoint379.setUSE(CString("hanim_r_index3"));
HAnimHumanoid42.setJoints(&HAnimJoint379);

HAnimJoint& HAnimJoint380 =  HAnimJoint();
HAnimJoint380.setUSE(CString("hanim_l_knee"));
HAnimHumanoid42.setJoints(&HAnimJoint380);

HAnimJoint& HAnimJoint381 =  HAnimJoint();
HAnimJoint381.setUSE(CString("hanim_r_knee"));
HAnimHumanoid42.setJoints(&HAnimJoint381);

HAnimJoint& HAnimJoint382 =  HAnimJoint();
HAnimJoint382.setUSE(CString("hanim_l_metatarsal"));
HAnimHumanoid42.setJoints(&HAnimJoint382);

HAnimJoint& HAnimJoint383 =  HAnimJoint();
HAnimJoint383.setUSE(CString("hanim_r_metatarsal"));
HAnimHumanoid42.setJoints(&HAnimJoint383);

HAnimJoint& HAnimJoint384 =  HAnimJoint();
HAnimJoint384.setUSE(CString("hanim_l_middle0"));
HAnimHumanoid42.setJoints(&HAnimJoint384);

HAnimJoint& HAnimJoint385 =  HAnimJoint();
HAnimJoint385.setUSE(CString("hanim_r_middle0"));
HAnimHumanoid42.setJoints(&HAnimJoint385);

HAnimJoint& HAnimJoint386 =  HAnimJoint();
HAnimJoint386.setUSE(CString("hanim_l_middle1"));
HAnimHumanoid42.setJoints(&HAnimJoint386);

HAnimJoint& HAnimJoint387 =  HAnimJoint();
HAnimJoint387.setUSE(CString("hanim_r_middle1"));
HAnimHumanoid42.setJoints(&HAnimJoint387);

HAnimJoint& HAnimJoint388 =  HAnimJoint();
HAnimJoint388.setUSE(CString("hanim_l_middle2"));
HAnimHumanoid42.setJoints(&HAnimJoint388);

HAnimJoint& HAnimJoint389 =  HAnimJoint();
HAnimJoint389.setUSE(CString("hanim_r_middle2"));
HAnimHumanoid42.setJoints(&HAnimJoint389);

HAnimJoint& HAnimJoint390 =  HAnimJoint();
HAnimJoint390.setUSE(CString("hanim_l_middle3"));
HAnimHumanoid42.setJoints(&HAnimJoint390);

HAnimJoint& HAnimJoint391 =  HAnimJoint();
HAnimJoint391.setUSE(CString("hanim_r_middle3"));
HAnimHumanoid42.setJoints(&HAnimJoint391);

HAnimJoint& HAnimJoint392 =  HAnimJoint();
HAnimJoint392.setUSE(CString("hanim_l_midtarsal"));
HAnimHumanoid42.setJoints(&HAnimJoint392);

HAnimJoint& HAnimJoint393 =  HAnimJoint();
HAnimJoint393.setUSE(CString("hanim_r_midtarsal"));
HAnimHumanoid42.setJoints(&HAnimJoint393);

HAnimJoint& HAnimJoint394 =  HAnimJoint();
HAnimJoint394.setUSE(CString("hanim_l_pinky0"));
HAnimHumanoid42.setJoints(&HAnimJoint394);

HAnimJoint& HAnimJoint395 =  HAnimJoint();
HAnimJoint395.setUSE(CString("hanim_r_pinky0"));
HAnimHumanoid42.setJoints(&HAnimJoint395);

HAnimJoint& HAnimJoint396 =  HAnimJoint();
HAnimJoint396.setUSE(CString("hanim_l_pinky1"));
HAnimHumanoid42.setJoints(&HAnimJoint396);

HAnimJoint& HAnimJoint397 =  HAnimJoint();
HAnimJoint397.setUSE(CString("hanim_r_pinky1"));
HAnimHumanoid42.setJoints(&HAnimJoint397);

HAnimJoint& HAnimJoint398 =  HAnimJoint();
HAnimJoint398.setUSE(CString("hanim_l_pinky2"));
HAnimHumanoid42.setJoints(&HAnimJoint398);

HAnimJoint& HAnimJoint399 =  HAnimJoint();
HAnimJoint399.setUSE(CString("hanim_r_pinky2"));
HAnimHumanoid42.setJoints(&HAnimJoint399);

HAnimJoint& HAnimJoint400 =  HAnimJoint();
HAnimJoint400.setUSE(CString("hanim_l_pinky3"));
HAnimHumanoid42.setJoints(&HAnimJoint400);

HAnimJoint& HAnimJoint401 =  HAnimJoint();
HAnimJoint401.setUSE(CString("hanim_r_pinky3"));
HAnimHumanoid42.setJoints(&HAnimJoint401);

HAnimJoint& HAnimJoint402 =  HAnimJoint();
HAnimJoint402.setUSE(CString("hanim_l_ring0"));
HAnimHumanoid42.setJoints(&HAnimJoint402);

HAnimJoint& HAnimJoint403 =  HAnimJoint();
HAnimJoint403.setUSE(CString("hanim_r_ring0"));
HAnimHumanoid42.setJoints(&HAnimJoint403);

HAnimJoint& HAnimJoint404 =  HAnimJoint();
HAnimJoint404.setUSE(CString("hanim_l_ring1"));
HAnimHumanoid42.setJoints(&HAnimJoint404);

HAnimJoint& HAnimJoint405 =  HAnimJoint();
HAnimJoint405.setUSE(CString("hanim_r_ring1"));
HAnimHumanoid42.setJoints(&HAnimJoint405);

HAnimJoint& HAnimJoint406 =  HAnimJoint();
HAnimJoint406.setUSE(CString("hanim_l_ring2"));
HAnimHumanoid42.setJoints(&HAnimJoint406);

HAnimJoint& HAnimJoint407 =  HAnimJoint();
HAnimJoint407.setUSE(CString("hanim_r_ring2"));
HAnimHumanoid42.setJoints(&HAnimJoint407);

HAnimJoint& HAnimJoint408 =  HAnimJoint();
HAnimJoint408.setUSE(CString("hanim_l_ring3"));
HAnimHumanoid42.setJoints(&HAnimJoint408);

HAnimJoint& HAnimJoint409 =  HAnimJoint();
HAnimJoint409.setUSE(CString("hanim_r_ring3"));
HAnimHumanoid42.setJoints(&HAnimJoint409);

HAnimJoint& HAnimJoint410 =  HAnimJoint();
HAnimJoint410.setUSE(CString("hanim_l_shoulder"));
HAnimHumanoid42.setJoints(&HAnimJoint410);

HAnimJoint& HAnimJoint411 =  HAnimJoint();
HAnimJoint411.setUSE(CString("hanim_r_shoulder"));
HAnimHumanoid42.setJoints(&HAnimJoint411);

HAnimJoint& HAnimJoint412 =  HAnimJoint();
HAnimJoint412.setUSE(CString("hanim_l_sternoclavicular"));
HAnimHumanoid42.setJoints(&HAnimJoint412);

HAnimJoint& HAnimJoint413 =  HAnimJoint();
HAnimJoint413.setUSE(CString("hanim_r_sternoclavicular"));
HAnimHumanoid42.setJoints(&HAnimJoint413);

HAnimJoint& HAnimJoint414 =  HAnimJoint();
HAnimJoint414.setUSE(CString("hanim_l_subtalar"));
HAnimHumanoid42.setJoints(&HAnimJoint414);

HAnimJoint& HAnimJoint415 =  HAnimJoint();
HAnimJoint415.setUSE(CString("hanim_r_subtalar"));
HAnimHumanoid42.setJoints(&HAnimJoint415);

HAnimJoint& HAnimJoint416 =  HAnimJoint();
HAnimJoint416.setUSE(CString("hanim_l_thumb1"));
HAnimHumanoid42.setJoints(&HAnimJoint416);

HAnimJoint& HAnimJoint417 =  HAnimJoint();
HAnimJoint417.setUSE(CString("hanim_r_thumb1"));
HAnimHumanoid42.setJoints(&HAnimJoint417);

HAnimJoint& HAnimJoint418 =  HAnimJoint();
HAnimJoint418.setUSE(CString("hanim_l_thumb2"));
HAnimHumanoid42.setJoints(&HAnimJoint418);

HAnimJoint& HAnimJoint419 =  HAnimJoint();
HAnimJoint419.setUSE(CString("hanim_r_thumb2"));
HAnimHumanoid42.setJoints(&HAnimJoint419);

HAnimJoint& HAnimJoint420 =  HAnimJoint();
HAnimJoint420.setUSE(CString("hanim_l_thumb3"));
HAnimHumanoid42.setJoints(&HAnimJoint420);

HAnimJoint& HAnimJoint421 =  HAnimJoint();
HAnimJoint421.setUSE(CString("hanim_r_thumb3"));
HAnimHumanoid42.setJoints(&HAnimJoint421);

HAnimJoint& HAnimJoint422 =  HAnimJoint();
HAnimJoint422.setUSE(CString("hanim_l_wrist"));
HAnimHumanoid42.setJoints(&HAnimJoint422);

HAnimJoint& HAnimJoint423 =  HAnimJoint();
HAnimJoint423.setUSE(CString("hanim_r_wrist"));
HAnimHumanoid42.setJoints(&HAnimJoint423);

HAnimSegment& HAnimSegment424 =  HAnimSegment();
HAnimSegment424.setUSE(CString("hanim_pelvis"));
HAnimHumanoid42.setSegments(&HAnimSegment424);

HAnimSegment& HAnimSegment425 =  HAnimSegment();
HAnimSegment425.setUSE(CString("hanim_skull"));
HAnimHumanoid42.setSegments(&HAnimSegment425);

HAnimSegment& HAnimSegment426 =  HAnimSegment();
HAnimSegment426.setUSE(CString("hanim_jaw"));
HAnimHumanoid42.setSegments(&HAnimSegment426);

HAnimSegment& HAnimSegment427 =  HAnimSegment();
HAnimSegment427.setUSE(CString("hanim_c1"));
HAnimHumanoid42.setSegments(&HAnimSegment427);

HAnimSegment& HAnimSegment428 =  HAnimSegment();
HAnimSegment428.setUSE(CString("hanim_c2"));
HAnimHumanoid42.setSegments(&HAnimSegment428);

HAnimSegment& HAnimSegment429 =  HAnimSegment();
HAnimSegment429.setUSE(CString("hanim_c3"));
HAnimHumanoid42.setSegments(&HAnimSegment429);

HAnimSegment& HAnimSegment430 =  HAnimSegment();
HAnimSegment430.setUSE(CString("hanim_c4"));
HAnimHumanoid42.setSegments(&HAnimSegment430);

HAnimSegment& HAnimSegment431 =  HAnimSegment();
HAnimSegment431.setUSE(CString("hanim_c5"));
HAnimHumanoid42.setSegments(&HAnimSegment431);

HAnimSegment& HAnimSegment432 =  HAnimSegment();
HAnimSegment432.setUSE(CString("hanim_c6"));
HAnimHumanoid42.setSegments(&HAnimSegment432);

HAnimSegment& HAnimSegment433 =  HAnimSegment();
HAnimSegment433.setUSE(CString("hanim_c7"));
HAnimHumanoid42.setSegments(&HAnimSegment433);

HAnimSegment& HAnimSegment434 =  HAnimSegment();
HAnimSegment434.setUSE(CString("hanim_t1"));
HAnimHumanoid42.setSegments(&HAnimSegment434);

HAnimSegment& HAnimSegment435 =  HAnimSegment();
HAnimSegment435.setUSE(CString("hanim_t2"));
HAnimHumanoid42.setSegments(&HAnimSegment435);

HAnimSegment& HAnimSegment436 =  HAnimSegment();
HAnimSegment436.setUSE(CString("hanim_t3"));
HAnimHumanoid42.setSegments(&HAnimSegment436);

HAnimSegment& HAnimSegment437 =  HAnimSegment();
HAnimSegment437.setUSE(CString("hanim_t4"));
HAnimHumanoid42.setSegments(&HAnimSegment437);

HAnimSegment& HAnimSegment438 =  HAnimSegment();
HAnimSegment438.setUSE(CString("hanim_t5"));
HAnimHumanoid42.setSegments(&HAnimSegment438);

HAnimSegment& HAnimSegment439 =  HAnimSegment();
HAnimSegment439.setUSE(CString("hanim_t6"));
HAnimHumanoid42.setSegments(&HAnimSegment439);

HAnimSegment& HAnimSegment440 =  HAnimSegment();
HAnimSegment440.setUSE(CString("hanim_t7"));
HAnimHumanoid42.setSegments(&HAnimSegment440);

HAnimSegment& HAnimSegment441 =  HAnimSegment();
HAnimSegment441.setUSE(CString("hanim_t8"));
HAnimHumanoid42.setSegments(&HAnimSegment441);

HAnimSegment& HAnimSegment442 =  HAnimSegment();
HAnimSegment442.setUSE(CString("hanim_t9"));
HAnimHumanoid42.setSegments(&HAnimSegment442);

HAnimSegment& HAnimSegment443 =  HAnimSegment();
HAnimSegment443.setUSE(CString("hanim_t10"));
HAnimHumanoid42.setSegments(&HAnimSegment443);

HAnimSegment& HAnimSegment444 =  HAnimSegment();
HAnimSegment444.setUSE(CString("hanim_t11"));
HAnimHumanoid42.setSegments(&HAnimSegment444);

HAnimSegment& HAnimSegment445 =  HAnimSegment();
HAnimSegment445.setUSE(CString("hanim_t12"));
HAnimHumanoid42.setSegments(&HAnimSegment445);

HAnimSegment& HAnimSegment446 =  HAnimSegment();
HAnimSegment446.setUSE(CString("hanim_l1"));
HAnimHumanoid42.setSegments(&HAnimSegment446);

HAnimSegment& HAnimSegment447 =  HAnimSegment();
HAnimSegment447.setUSE(CString("hanim_l2"));
HAnimHumanoid42.setSegments(&HAnimSegment447);

HAnimSegment& HAnimSegment448 =  HAnimSegment();
HAnimSegment448.setUSE(CString("hanim_l3"));
HAnimHumanoid42.setSegments(&HAnimSegment448);

HAnimSegment& HAnimSegment449 =  HAnimSegment();
HAnimSegment449.setUSE(CString("hanim_l4"));
HAnimHumanoid42.setSegments(&HAnimSegment449);

HAnimSegment& HAnimSegment450 =  HAnimSegment();
HAnimSegment450.setUSE(CString("hanim_l5"));
HAnimHumanoid42.setSegments(&HAnimSegment450);

HAnimSegment& HAnimSegment451 =  HAnimSegment();
HAnimSegment451.setUSE(CString("hanim_sacrum"));
HAnimHumanoid42.setSegments(&HAnimSegment451);

HAnimSegment& HAnimSegment452 =  HAnimSegment();
HAnimSegment452.setUSE(CString("hanim_l_calf"));
HAnimHumanoid42.setSegments(&HAnimSegment452);

HAnimSegment& HAnimSegment453 =  HAnimSegment();
HAnimSegment453.setUSE(CString("hanim_r_calf"));
HAnimHumanoid42.setSegments(&HAnimSegment453);

HAnimSegment& HAnimSegment454 =  HAnimSegment();
HAnimSegment454.setUSE(CString("hanim_l_clavicle"));
HAnimHumanoid42.setSegments(&HAnimSegment454);

HAnimSegment& HAnimSegment455 =  HAnimSegment();
HAnimSegment455.setUSE(CString("hanim_r_clavicle"));
HAnimHumanoid42.setSegments(&HAnimSegment455);

HAnimSegment& HAnimSegment456 =  HAnimSegment();
HAnimSegment456.setUSE(CString("hanim_l_eyeball"));
HAnimHumanoid42.setSegments(&HAnimSegment456);

HAnimSegment& HAnimSegment457 =  HAnimSegment();
HAnimSegment457.setUSE(CString("hanim_r_eyeball"));
HAnimHumanoid42.setSegments(&HAnimSegment457);

HAnimSegment& HAnimSegment458 =  HAnimSegment();
HAnimSegment458.setUSE(CString("hanim_l_eyebrow"));
HAnimHumanoid42.setSegments(&HAnimSegment458);

HAnimSegment& HAnimSegment459 =  HAnimSegment();
HAnimSegment459.setUSE(CString("hanim_r_eyebrow"));
HAnimHumanoid42.setSegments(&HAnimSegment459);

HAnimSegment& HAnimSegment460 =  HAnimSegment();
HAnimSegment460.setUSE(CString("hanim_l_eyelid"));
HAnimHumanoid42.setSegments(&HAnimSegment460);

HAnimSegment& HAnimSegment461 =  HAnimSegment();
HAnimSegment461.setUSE(CString("hanim_r_eyelid"));
HAnimHumanoid42.setSegments(&HAnimSegment461);

HAnimSegment& HAnimSegment462 =  HAnimSegment();
HAnimSegment462.setUSE(CString("hanim_l_forearm"));
HAnimHumanoid42.setSegments(&HAnimSegment462);

HAnimSegment& HAnimSegment463 =  HAnimSegment();
HAnimSegment463.setUSE(CString("hanim_r_forearm"));
HAnimHumanoid42.setSegments(&HAnimSegment463);

HAnimSegment& HAnimSegment464 =  HAnimSegment();
HAnimSegment464.setUSE(CString("hanim_l_forefoot"));
HAnimHumanoid42.setSegments(&HAnimSegment464);

HAnimSegment& HAnimSegment465 =  HAnimSegment();
HAnimSegment465.setUSE(CString("hanim_r_forefoot"));
HAnimHumanoid42.setSegments(&HAnimSegment465);

HAnimSegment& HAnimSegment466 =  HAnimSegment();
HAnimSegment466.setUSE(CString("hanim_l_hand"));
HAnimHumanoid42.setSegments(&HAnimSegment466);

HAnimSegment& HAnimSegment467 =  HAnimSegment();
HAnimSegment467.setUSE(CString("hanim_r_hand"));
HAnimHumanoid42.setSegments(&HAnimSegment467);

HAnimSegment& HAnimSegment468 =  HAnimSegment();
HAnimSegment468.setUSE(CString("hanim_l_hindfoot"));
HAnimHumanoid42.setSegments(&HAnimSegment468);

HAnimSegment& HAnimSegment469 =  HAnimSegment();
HAnimSegment469.setUSE(CString("hanim_r_hindfoot"));
HAnimHumanoid42.setSegments(&HAnimSegment469);

HAnimSegment& HAnimSegment470 =  HAnimSegment();
HAnimSegment470.setUSE(CString("hanim_l_index_distal"));
HAnimHumanoid42.setSegments(&HAnimSegment470);

HAnimSegment& HAnimSegment471 =  HAnimSegment();
HAnimSegment471.setUSE(CString("hanim_r_index_distal"));
HAnimHumanoid42.setSegments(&HAnimSegment471);

HAnimSegment& HAnimSegment472 =  HAnimSegment();
HAnimSegment472.setUSE(CString("hanim_l_index_metacarpal"));
HAnimHumanoid42.setSegments(&HAnimSegment472);

HAnimSegment& HAnimSegment473 =  HAnimSegment();
HAnimSegment473.setUSE(CString("hanim_r_index_metacarpal"));
HAnimHumanoid42.setSegments(&HAnimSegment473);

HAnimSegment& HAnimSegment474 =  HAnimSegment();
HAnimSegment474.setUSE(CString("hanim_l_index_middle"));
HAnimHumanoid42.setSegments(&HAnimSegment474);

HAnimSegment& HAnimSegment475 =  HAnimSegment();
HAnimSegment475.setUSE(CString("hanim_r_index_middle"));
HAnimHumanoid42.setSegments(&HAnimSegment475);

HAnimSegment& HAnimSegment476 =  HAnimSegment();
HAnimSegment476.setUSE(CString("hanim_l_index_proximal"));
HAnimHumanoid42.setSegments(&HAnimSegment476);

HAnimSegment& HAnimSegment477 =  HAnimSegment();
HAnimSegment477.setUSE(CString("hanim_r_index_proximal"));
HAnimHumanoid42.setSegments(&HAnimSegment477);

HAnimSegment& HAnimSegment478 =  HAnimSegment();
HAnimSegment478.setUSE(CString("hanim_l_middistal"));
HAnimHumanoid42.setSegments(&HAnimSegment478);

HAnimSegment& HAnimSegment479 =  HAnimSegment();
HAnimSegment479.setUSE(CString("hanim_r_middistal"));
HAnimHumanoid42.setSegments(&HAnimSegment479);

HAnimSegment& HAnimSegment480 =  HAnimSegment();
HAnimSegment480.setUSE(CString("hanim_l_middle_distal"));
HAnimHumanoid42.setSegments(&HAnimSegment480);

HAnimSegment& HAnimSegment481 =  HAnimSegment();
HAnimSegment481.setUSE(CString("hanim_r_middle_distal"));
HAnimHumanoid42.setSegments(&HAnimSegment481);

HAnimSegment& HAnimSegment482 =  HAnimSegment();
HAnimSegment482.setUSE(CString("hanim_l_middle_metacarpal"));
HAnimHumanoid42.setSegments(&HAnimSegment482);

HAnimSegment& HAnimSegment483 =  HAnimSegment();
HAnimSegment483.setUSE(CString("hanim_r_middle_metacarpal"));
HAnimHumanoid42.setSegments(&HAnimSegment483);

HAnimSegment& HAnimSegment484 =  HAnimSegment();
HAnimSegment484.setUSE(CString("hanim_l_middle_middle"));
HAnimHumanoid42.setSegments(&HAnimSegment484);

HAnimSegment& HAnimSegment485 =  HAnimSegment();
HAnimSegment485.setUSE(CString("hanim_r_middle_middle"));
HAnimHumanoid42.setSegments(&HAnimSegment485);

HAnimSegment& HAnimSegment486 =  HAnimSegment();
HAnimSegment486.setUSE(CString("hanim_l_middle_proximal"));
HAnimHumanoid42.setSegments(&HAnimSegment486);

HAnimSegment& HAnimSegment487 =  HAnimSegment();
HAnimSegment487.setUSE(CString("hanim_r_middle_proximal"));
HAnimHumanoid42.setSegments(&HAnimSegment487);

HAnimSegment& HAnimSegment488 =  HAnimSegment();
HAnimSegment488.setUSE(CString("hanim_l_midproximal"));
HAnimHumanoid42.setSegments(&HAnimSegment488);

HAnimSegment& HAnimSegment489 =  HAnimSegment();
HAnimSegment489.setUSE(CString("hanim_r_midproximal"));
HAnimHumanoid42.setSegments(&HAnimSegment489);

HAnimSegment& HAnimSegment490 =  HAnimSegment();
HAnimSegment490.setUSE(CString("hanim_l_pinky_distal"));
HAnimHumanoid42.setSegments(&HAnimSegment490);

HAnimSegment& HAnimSegment491 =  HAnimSegment();
HAnimSegment491.setUSE(CString("hanim_r_pinky_distal"));
HAnimHumanoid42.setSegments(&HAnimSegment491);

HAnimSegment& HAnimSegment492 =  HAnimSegment();
HAnimSegment492.setUSE(CString("hanim_l_pinky_metacarpal"));
HAnimHumanoid42.setSegments(&HAnimSegment492);

HAnimSegment& HAnimSegment493 =  HAnimSegment();
HAnimSegment493.setUSE(CString("hanim_r_pinky_metacarpal"));
HAnimHumanoid42.setSegments(&HAnimSegment493);

HAnimSegment& HAnimSegment494 =  HAnimSegment();
HAnimSegment494.setUSE(CString("hanim_l_pinky_middle"));
HAnimHumanoid42.setSegments(&HAnimSegment494);

HAnimSegment& HAnimSegment495 =  HAnimSegment();
HAnimSegment495.setUSE(CString("hanim_r_pinky_middle"));
HAnimHumanoid42.setSegments(&HAnimSegment495);

HAnimSegment& HAnimSegment496 =  HAnimSegment();
HAnimSegment496.setUSE(CString("hanim_l_pinky_proximal"));
HAnimHumanoid42.setSegments(&HAnimSegment496);

HAnimSegment& HAnimSegment497 =  HAnimSegment();
HAnimSegment497.setUSE(CString("hanim_r_pinky_proximal"));
HAnimHumanoid42.setSegments(&HAnimSegment497);

HAnimSegment& HAnimSegment498 =  HAnimSegment();
HAnimSegment498.setUSE(CString("hanim_l_ring_distal"));
HAnimHumanoid42.setSegments(&HAnimSegment498);

HAnimSegment& HAnimSegment499 =  HAnimSegment();
HAnimSegment499.setUSE(CString("hanim_r_ring_distal"));
HAnimHumanoid42.setSegments(&HAnimSegment499);

HAnimSegment& HAnimSegment500 =  HAnimSegment();
HAnimSegment500.setUSE(CString("hanim_l_ring_metacarpal"));
HAnimHumanoid42.setSegments(&HAnimSegment500);

HAnimSegment& HAnimSegment501 =  HAnimSegment();
HAnimSegment501.setUSE(CString("hanim_r_ring_metacarpal"));
HAnimHumanoid42.setSegments(&HAnimSegment501);

HAnimSegment& HAnimSegment502 =  HAnimSegment();
HAnimSegment502.setUSE(CString("hanim_l_ring_middle"));
HAnimHumanoid42.setSegments(&HAnimSegment502);

HAnimSegment& HAnimSegment503 =  HAnimSegment();
HAnimSegment503.setUSE(CString("hanim_r_ring_middle"));
HAnimHumanoid42.setSegments(&HAnimSegment503);

HAnimSegment& HAnimSegment504 =  HAnimSegment();
HAnimSegment504.setUSE(CString("hanim_l_ring_proximal"));
HAnimHumanoid42.setSegments(&HAnimSegment504);

HAnimSegment& HAnimSegment505 =  HAnimSegment();
HAnimSegment505.setUSE(CString("hanim_r_ring_proximal"));
HAnimHumanoid42.setSegments(&HAnimSegment505);

HAnimSegment& HAnimSegment506 =  HAnimSegment();
HAnimSegment506.setUSE(CString("hanim_l_scapula"));
HAnimHumanoid42.setSegments(&HAnimSegment506);

HAnimSegment& HAnimSegment507 =  HAnimSegment();
HAnimSegment507.setUSE(CString("hanim_r_scapula"));
HAnimHumanoid42.setSegments(&HAnimSegment507);

HAnimSegment& HAnimSegment508 =  HAnimSegment();
HAnimSegment508.setUSE(CString("hanim_l_thigh"));
HAnimHumanoid42.setSegments(&HAnimSegment508);

HAnimSegment& HAnimSegment509 =  HAnimSegment();
HAnimSegment509.setUSE(CString("hanim_r_thigh"));
HAnimHumanoid42.setSegments(&HAnimSegment509);

HAnimSegment& HAnimSegment510 =  HAnimSegment();
HAnimSegment510.setUSE(CString("hanim_l_thumb_distal"));
HAnimHumanoid42.setSegments(&HAnimSegment510);

HAnimSegment& HAnimSegment511 =  HAnimSegment();
HAnimSegment511.setUSE(CString("hanim_r_thumb_distal"));
HAnimHumanoid42.setSegments(&HAnimSegment511);

HAnimSegment& HAnimSegment512 =  HAnimSegment();
HAnimSegment512.setUSE(CString("hanim_l_thumb_metacarpal"));
HAnimHumanoid42.setSegments(&HAnimSegment512);

HAnimSegment& HAnimSegment513 =  HAnimSegment();
HAnimSegment513.setUSE(CString("hanim_r_thumb_metacarpal"));
HAnimHumanoid42.setSegments(&HAnimSegment513);

HAnimSegment& HAnimSegment514 =  HAnimSegment();
HAnimSegment514.setUSE(CString("hanim_l_thumb_proximal"));
HAnimHumanoid42.setSegments(&HAnimSegment514);

HAnimSegment& HAnimSegment515 =  HAnimSegment();
HAnimSegment515.setUSE(CString("hanim_r_thumb_proximal"));
HAnimHumanoid42.setSegments(&HAnimSegment515);

HAnimSegment& HAnimSegment516 =  HAnimSegment();
HAnimSegment516.setUSE(CString("hanim_l_upperarm"));
HAnimHumanoid42.setSegments(&HAnimSegment516);

HAnimSegment& HAnimSegment517 =  HAnimSegment();
HAnimSegment517.setUSE(CString("hanim_r_upperarm"));
HAnimHumanoid42.setSegments(&HAnimSegment517);

HAnimSite& HAnimSite518 =  HAnimSite();
HAnimSite518.setUSE(CString("hanim_crotch_pt"));
HAnimHumanoid42.setSites(&HAnimSite518);

HAnimSite& HAnimSite519 =  HAnimSite();
HAnimSite519.setUSE(CString("hanim_skull_tip"));
HAnimHumanoid42.setSites(&HAnimSite519);

HAnimSite& HAnimSite520 =  HAnimSite();
HAnimSite520.setUSE(CString("hanim_sellion_pt"));
HAnimHumanoid42.setSites(&HAnimSite520);

HAnimSite& HAnimSite521 =  HAnimSite();
HAnimSite521.setUSE(CString("hanim_supramenton_pt"));
HAnimHumanoid42.setSites(&HAnimSite521);

HAnimSite& HAnimSite522 =  HAnimSite();
HAnimSite522.setUSE(CString("hanim_nuchale_pt"));
HAnimHumanoid42.setSites(&HAnimSite522);

HAnimSite& HAnimSite523 =  HAnimSite();
HAnimSite523.setUSE(CString("hanim_suprasternale_pt"));
HAnimHumanoid42.setSites(&HAnimSite523);

HAnimSite& HAnimSite524 =  HAnimSite();
HAnimSite524.setUSE(CString("hanim_cervicale_pt"));
HAnimHumanoid42.setSites(&HAnimSite524);

HAnimSite& HAnimSite525 =  HAnimSite();
HAnimSite525.setUSE(CString("hanim_substernale_pt"));
HAnimHumanoid42.setSites(&HAnimSite525);

HAnimSite& HAnimSite526 =  HAnimSite();
HAnimSite526.setUSE(CString("hanim_rib10_midspine_pt"));
HAnimHumanoid42.setSites(&HAnimSite526);

HAnimSite& HAnimSite527 =  HAnimSite();
HAnimSite527.setUSE(CString("hanim_waist_preferred_post_pt"));
HAnimHumanoid42.setSites(&HAnimSite527);

HAnimSite& HAnimSite528 =  HAnimSite();
HAnimSite528.setUSE(CString("hanim_navel_pt"));
HAnimHumanoid42.setSites(&HAnimSite528);

HAnimSite& HAnimSite529 =  HAnimSite();
HAnimSite529.setUSE(CString("hanim_l_acromion_pt"));
HAnimHumanoid42.setSites(&HAnimSite529);

HAnimSite& HAnimSite530 =  HAnimSite();
HAnimSite530.setUSE(CString("hanim_r_acromion_pt"));
HAnimHumanoid42.setSites(&HAnimSite530);

HAnimSite& HAnimSite531 =  HAnimSite();
HAnimSite531.setUSE(CString("hanim_r_asis_pt"));
HAnimHumanoid42.setSites(&HAnimSite531);

HAnimSite& HAnimSite532 =  HAnimSite();
HAnimSite532.setUSE(CString("hanim_l_asis_pt"));
HAnimHumanoid42.setSites(&HAnimSite532);

HAnimSite& HAnimSite533 =  HAnimSite();
HAnimSite533.setUSE(CString("hanim_l_axilla_ant_pt"));
HAnimHumanoid42.setSites(&HAnimSite533);

HAnimSite& HAnimSite534 =  HAnimSite();
HAnimSite534.setUSE(CString("hanim_r_axilla_ant_pt"));
HAnimHumanoid42.setSites(&HAnimSite534);

HAnimSite& HAnimSite535 =  HAnimSite();
HAnimSite535.setUSE(CString("hanim_l_axilla_post_pt"));
HAnimHumanoid42.setSites(&HAnimSite535);

HAnimSite& HAnimSite536 =  HAnimSite();
HAnimSite536.setUSE(CString("hanim_r_axilla_post_pt"));
HAnimHumanoid42.setSites(&HAnimSite536);

HAnimSite& HAnimSite537 =  HAnimSite();
HAnimSite537.setUSE(CString("hanim_l_calcaneous_post_pt"));
HAnimHumanoid42.setSites(&HAnimSite537);

HAnimSite& HAnimSite538 =  HAnimSite();
HAnimSite538.setUSE(CString("hanim_r_calcaneous_post_pt"));
HAnimHumanoid42.setSites(&HAnimSite538);

HAnimSite& HAnimSite539 =  HAnimSite();
HAnimSite539.setUSE(CString("hanim_l_clavicale_pt"));
HAnimHumanoid42.setSites(&HAnimSite539);

HAnimSite& HAnimSite540 =  HAnimSite();
HAnimSite540.setUSE(CString("hanim_r_clavicale_pt"));
HAnimHumanoid42.setSites(&HAnimSite540);

HAnimSite& HAnimSite541 =  HAnimSite();
HAnimSite541.setUSE(CString("hanim_l_dactylion_pt"));
HAnimHumanoid42.setSites(&HAnimSite541);

HAnimSite& HAnimSite542 =  HAnimSite();
HAnimSite542.setUSE(CString("hanim_r_dactylion_pt"));
HAnimHumanoid42.setSites(&HAnimSite542);

HAnimSite& HAnimSite543 =  HAnimSite();
HAnimSite543.setUSE(CString("hanim_l_digit2_pt"));
HAnimHumanoid42.setSites(&HAnimSite543);

HAnimSite& HAnimSite544 =  HAnimSite();
HAnimSite544.setUSE(CString("hanim_r_digit2_pt"));
HAnimHumanoid42.setSites(&HAnimSite544);

HAnimSite& HAnimSite545 =  HAnimSite();
HAnimSite545.setUSE(CString("hanim_l_femoral_lateral_epicn_pt"));
HAnimHumanoid42.setSites(&HAnimSite545);

HAnimSite& HAnimSite546 =  HAnimSite();
HAnimSite546.setUSE(CString("hanim_r_femoral_lateral_epicn_pt"));
HAnimHumanoid42.setSites(&HAnimSite546);

HAnimSite& HAnimSite547 =  HAnimSite();
HAnimSite547.setUSE(CString("hanim_l_femoral_medial_epicn_pt"));
HAnimHumanoid42.setSites(&HAnimSite547);

HAnimSite& HAnimSite548 =  HAnimSite();
HAnimSite548.setUSE(CString("hanim_r_femoral_medial_epicn_pt"));
HAnimHumanoid42.setSites(&HAnimSite548);

HAnimSite& HAnimSite549 =  HAnimSite();
HAnimSite549.setUSE(CString("hanim_l_forefoot_tip"));
HAnimHumanoid42.setSites(&HAnimSite549);

HAnimSite& HAnimSite550 =  HAnimSite();
HAnimSite550.setUSE(CString("hanim_r_forefoot_tip"));
HAnimHumanoid42.setSites(&HAnimSite550);

HAnimSite& HAnimSite551 =  HAnimSite();
HAnimSite551.setUSE(CString("hanim_r_gonion_pt"));
HAnimHumanoid42.setSites(&HAnimSite551);

HAnimSite& HAnimSite552 =  HAnimSite();
HAnimSite552.setUSE(CString("hanim_l_gonion_pt"));
HAnimHumanoid42.setSites(&HAnimSite552);

HAnimSite& HAnimSite553 =  HAnimSite();
HAnimSite553.setUSE(CString("hanim_l_humeral_lateral_epicn_pt"));
HAnimHumanoid42.setSites(&HAnimSite553);

HAnimSite& HAnimSite554 =  HAnimSite();
HAnimSite554.setUSE(CString("hanim_r_humeral_lateral_epicn_pt"));
HAnimHumanoid42.setSites(&HAnimSite554);

HAnimSite& HAnimSite555 =  HAnimSite();
HAnimSite555.setUSE(CString("hanim_l_humeral_medial_epicn_pt"));
HAnimHumanoid42.setSites(&HAnimSite555);

HAnimSite& HAnimSite556 =  HAnimSite();
HAnimSite556.setUSE(CString("hanim_r_humeral_medial_epicn_pt"));
HAnimHumanoid42.setSites(&HAnimSite556);

HAnimSite& HAnimSite557 =  HAnimSite();
HAnimSite557.setUSE(CString("hanim_r_iliocristale_pt"));
HAnimHumanoid42.setSites(&HAnimSite557);

HAnimSite& HAnimSite558 =  HAnimSite();
HAnimSite558.setUSE(CString("hanim_l_iliocristale_pt"));
HAnimHumanoid42.setSites(&HAnimSite558);

HAnimSite& HAnimSite559 =  HAnimSite();
HAnimSite559.setUSE(CString("hanim_l_index_distal_tip"));
HAnimHumanoid42.setSites(&HAnimSite559);

HAnimSite& HAnimSite560 =  HAnimSite();
HAnimSite560.setUSE(CString("hanim_r_index_distal_tip"));
HAnimHumanoid42.setSites(&HAnimSite560);

HAnimSite& HAnimSite561 =  HAnimSite();
HAnimSite561.setUSE(CString("hanim_r_infraorbitale_pt"));
HAnimHumanoid42.setSites(&HAnimSite561);

HAnimSite& HAnimSite562 =  HAnimSite();
HAnimSite562.setUSE(CString("hanim_l_infraorbitale_pt"));
HAnimHumanoid42.setSites(&HAnimSite562);

HAnimSite& HAnimSite563 =  HAnimSite();
HAnimSite563.setUSE(CString("hanim_l_knee_crease_pt"));
HAnimHumanoid42.setSites(&HAnimSite563);

HAnimSite& HAnimSite564 =  HAnimSite();
HAnimSite564.setUSE(CString("hanim_r_knee_crease_pt"));
HAnimHumanoid42.setSites(&HAnimSite564);

HAnimSite& HAnimSite565 =  HAnimSite();
HAnimSite565.setUSE(CString("hanim_l_lateral_malleolus_pt"));
HAnimHumanoid42.setSites(&HAnimSite565);

HAnimSite& HAnimSite566 =  HAnimSite();
HAnimSite566.setUSE(CString("hanim_r_lateral_malleolus_pt"));
HAnimHumanoid42.setSites(&HAnimSite566);

HAnimSite& HAnimSite567 =  HAnimSite();
HAnimSite567.setUSE(CString("hanim_l_medial_malleolus_pt"));
HAnimHumanoid42.setSites(&HAnimSite567);

HAnimSite& HAnimSite568 =  HAnimSite();
HAnimSite568.setUSE(CString("hanim_r_medial_malleolus_pt"));
HAnimHumanoid42.setSites(&HAnimSite568);

HAnimSite& HAnimSite569 =  HAnimSite();
HAnimSite569.setUSE(CString("hanim_l_metacarpal_pha2_pt"));
HAnimHumanoid42.setSites(&HAnimSite569);

HAnimSite& HAnimSite570 =  HAnimSite();
HAnimSite570.setUSE(CString("hanim_r_metacarpal_pha2_pt"));
HAnimHumanoid42.setSites(&HAnimSite570);

HAnimSite& HAnimSite571 =  HAnimSite();
HAnimSite571.setUSE(CString("hanim_l_metacarpal_pha5_pt"));
HAnimHumanoid42.setSites(&HAnimSite571);

HAnimSite& HAnimSite572 =  HAnimSite();
HAnimSite572.setUSE(CString("hanim_r_metacarpal_pha5_pt"));
HAnimHumanoid42.setSites(&HAnimSite572);

HAnimSite& HAnimSite573 =  HAnimSite();
HAnimSite573.setUSE(CString("hanim_l_metatarsal_pha1_pt"));
HAnimHumanoid42.setSites(&HAnimSite573);

HAnimSite& HAnimSite574 =  HAnimSite();
HAnimSite574.setUSE(CString("hanim_r_metatarsal_pha1_pt"));
HAnimHumanoid42.setSites(&HAnimSite574);

HAnimSite& HAnimSite575 =  HAnimSite();
HAnimSite575.setUSE(CString("hanim_l_metatarsal_pha5_pt"));
HAnimHumanoid42.setSites(&HAnimSite575);

HAnimSite& HAnimSite576 =  HAnimSite();
HAnimSite576.setUSE(CString("hanim_r_metatarsal_pha5_pt"));
HAnimHumanoid42.setSites(&HAnimSite576);

HAnimSite& HAnimSite577 =  HAnimSite();
HAnimSite577.setUSE(CString("hanim_l_middle_distal_tip"));
HAnimHumanoid42.setSites(&HAnimSite577);

HAnimSite& HAnimSite578 =  HAnimSite();
HAnimSite578.setUSE(CString("hanim_r_middle_distal_tip"));
HAnimHumanoid42.setSites(&HAnimSite578);

HAnimSite& HAnimSite579 =  HAnimSite();
HAnimSite579.setUSE(CString("hanim_r_neck_base_pt"));
HAnimHumanoid42.setSites(&HAnimSite579);

HAnimSite& HAnimSite580 =  HAnimSite();
HAnimSite580.setUSE(CString("hanim_l_neck_base_pt"));
HAnimHumanoid42.setSites(&HAnimSite580);

HAnimSite& HAnimSite581 =  HAnimSite();
HAnimSite581.setUSE(CString("hanim_l_olecranon_pt"));
HAnimHumanoid42.setSites(&HAnimSite581);

HAnimSite& HAnimSite582 =  HAnimSite();
HAnimSite582.setUSE(CString("hanim_r_olecranon_pt"));
HAnimHumanoid42.setSites(&HAnimSite582);

HAnimSite& HAnimSite583 =  HAnimSite();
HAnimSite583.setUSE(CString("hanim_l_pinky_distal_tip"));
HAnimHumanoid42.setSites(&HAnimSite583);

HAnimSite& HAnimSite584 =  HAnimSite();
HAnimSite584.setUSE(CString("hanim_r_pinky_distal_tip"));
HAnimHumanoid42.setSites(&HAnimSite584);

HAnimSite& HAnimSite585 =  HAnimSite();
HAnimSite585.setUSE(CString("hanim_r_psis_pt"));
HAnimHumanoid42.setSites(&HAnimSite585);

HAnimSite& HAnimSite586 =  HAnimSite();
HAnimSite586.setUSE(CString("hanim_l_psis_pt"));
HAnimHumanoid42.setSites(&HAnimSite586);

HAnimSite& HAnimSite587 =  HAnimSite();
HAnimSite587.setUSE(CString("hanim_l_radial_styloid_pt"));
HAnimHumanoid42.setSites(&HAnimSite587);

HAnimSite& HAnimSite588 =  HAnimSite();
HAnimSite588.setUSE(CString("hanim_r_radial_styloid_pt"));
HAnimHumanoid42.setSites(&HAnimSite588);

HAnimSite& HAnimSite589 =  HAnimSite();
HAnimSite589.setUSE(CString("hanim_l_radiale_pt"));
HAnimHumanoid42.setSites(&HAnimSite589);

HAnimSite& HAnimSite590 =  HAnimSite();
HAnimSite590.setUSE(CString("hanim_r_radiale_pt"));
HAnimHumanoid42.setSites(&HAnimSite590);

HAnimSite& HAnimSite591 =  HAnimSite();
HAnimSite591.setUSE(CString("hanim_r_rib10_pt"));
HAnimHumanoid42.setSites(&HAnimSite591);

HAnimSite& HAnimSite592 =  HAnimSite();
HAnimSite592.setUSE(CString("hanim_l_rib10_pt"));
HAnimHumanoid42.setSites(&HAnimSite592);

HAnimSite& HAnimSite593 =  HAnimSite();
HAnimSite593.setUSE(CString("hanim_l_ring_distal_tip"));
HAnimHumanoid42.setSites(&HAnimSite593);

HAnimSite& HAnimSite594 =  HAnimSite();
HAnimSite594.setUSE(CString("hanim_r_ring_distal_tip"));
HAnimHumanoid42.setSites(&HAnimSite594);

HAnimSite& HAnimSite595 =  HAnimSite();
HAnimSite595.setUSE(CString("hanim_temporomandibular_l_site_pt"));
HAnimHumanoid42.setSites(&HAnimSite595);

HAnimSite& HAnimSite596 =  HAnimSite();
HAnimSite596.setUSE(CString("hanim_temporomandibular_r_site_pt"));
HAnimHumanoid42.setSites(&HAnimSite596);

HAnimSite& HAnimSite597 =  HAnimSite();
HAnimSite597.setUSE(CString("hanim_l_sphyrion_pt"));
HAnimHumanoid42.setSites(&HAnimSite597);

HAnimSite& HAnimSite598 =  HAnimSite();
HAnimSite598.setUSE(CString("hanim_r_sphyrion_pt"));
HAnimHumanoid42.setSites(&HAnimSite598);

HAnimSite& HAnimSite599 =  HAnimSite();
HAnimSite599.setUSE(CString("hanim_r_thelion_pt"));
HAnimHumanoid42.setSites(&HAnimSite599);

HAnimSite& HAnimSite600 =  HAnimSite();
HAnimSite600.setUSE(CString("hanim_l_thelion_pt"));
HAnimHumanoid42.setSites(&HAnimSite600);

HAnimSite& HAnimSite601 =  HAnimSite();
HAnimSite601.setUSE(CString("hanim_l_thumb_distal_tip"));
HAnimHumanoid42.setSites(&HAnimSite601);

HAnimSite& HAnimSite602 =  HAnimSite();
HAnimSite602.setUSE(CString("hanim_r_thumb_distal_tip"));
HAnimHumanoid42.setSites(&HAnimSite602);

HAnimSite& HAnimSite603 =  HAnimSite();
HAnimSite603.setUSE(CString("hanim_r_tragion_pt"));
HAnimHumanoid42.setSites(&HAnimSite603);

HAnimSite& HAnimSite604 =  HAnimSite();
HAnimSite604.setUSE(CString("hanim_l_tragion_pt"));
HAnimHumanoid42.setSites(&HAnimSite604);

HAnimSite& HAnimSite605 =  HAnimSite();
HAnimSite605.setUSE(CString("hanim_r_trochanterion_pt"));
HAnimHumanoid42.setSites(&HAnimSite605);

HAnimSite& HAnimSite606 =  HAnimSite();
HAnimSite606.setUSE(CString("hanim_l_trochanterion_pt"));
HAnimHumanoid42.setSites(&HAnimSite606);

HAnimSite& HAnimSite607 =  HAnimSite();
HAnimSite607.setUSE(CString("hanim_l_ulnar_styloid_pt"));
HAnimHumanoid42.setSites(&HAnimSite607);

HAnimSite& HAnimSite608 =  HAnimSite();
HAnimSite608.setUSE(CString("hanim_r_ulnar_styloid_pt"));
HAnimHumanoid42.setSites(&HAnimSite608);

HAnimSite& HAnimSite609 =  HAnimSite();
HAnimSite609.setDEF(CString("hanim_l_inclined_view"));
HAnimSite609.X3DNode::setName(CString("l_inclined_view"));
HAnimSite609.setTranslation(new float[]{1.62,1.05,2.06});
HAnimSite609.setRotation(new float[]{-0.113,0.993,0.0347,0.671});
Viewpoint& Viewpoint610 =  Viewpoint();
Viewpoint610.setDEF(CString("hanim_l_inclined_viewpoint"));
Viewpoint610.setDescription(CString("left inclined"));
Viewpoint610.setPosition(new float[]{0.0,0.0,0.0});
HAnimSite609.addChild(&Viewpoint610);

HAnimHumanoid42.setViewpoints(&HAnimSite609);

HAnimSite& HAnimSite611 =  HAnimSite();
HAnimSite611.setDEF(CString("hanim_r_inclined_view"));
HAnimSite611.X3DNode::setName(CString("r_inclined_view"));
HAnimSite611.setTranslation(new float[]{-1.62,1.05,2.06});
HAnimSite611.setRotation(new float[]{-0.113,-0.993,0.0347,0.671});
Viewpoint& Viewpoint612 =  Viewpoint();
Viewpoint612.setDEF(CString("hanim_r_inclined_viewpoint"));
Viewpoint612.setDescription(CString("right inclined"));
Viewpoint612.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint612.setCenterOfRotation(new float[]{0.0,0.9,0.0});
HAnimSite611.addChild(&Viewpoint612);

HAnimHumanoid42.setViewpoints(&HAnimSite611);

HAnimSite& HAnimSite613 =  HAnimSite();
HAnimSite613.setDEF(CString("hanim_front_view"));
HAnimSite613.X3DNode::setName(CString("front_view"));
HAnimSite613.setTranslation(new float[]{0.0,0.85,2.58});
Viewpoint& Viewpoint614 =  Viewpoint();
Viewpoint614.setDEF(CString("hanim_front_viewpoint"));
Viewpoint614.setDescription(CString("front"));
Viewpoint614.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint614.setCenterOfRotation(new float[]{0.0,0.9,0.0});
HAnimSite613.addChild(&Viewpoint614);

HAnimHumanoid42.setViewpoints(&HAnimSite613);

HAnimSite& HAnimSite615 =  HAnimSite();
HAnimSite615.setDEF(CString("hanim_back_view"));
HAnimSite615.X3DNode::setName(CString("back_view"));
HAnimSite615.setTranslation(new float[]{0.0,0.85,-2.58});
HAnimSite615.setRotation(new float[]{0.0,1.0,0.0,3.14});
Viewpoint& Viewpoint616 =  Viewpoint();
Viewpoint616.setDEF(CString("hanim_back_viewpoint"));
Viewpoint616.setDescription(CString("back"));
Viewpoint616.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint616.setCenterOfRotation(new float[]{0.0,0.9,0.0});
HAnimSite615.addChild(&Viewpoint616);

HAnimHumanoid42.setViewpoints(&HAnimSite615);

HAnimSite& HAnimSite617 =  HAnimSite();
HAnimSite617.setDEF(CString("hanim_l_side_view"));
HAnimSite617.X3DNode::setName(CString("l_side_view"));
HAnimSite617.setTranslation(new float[]{2.6,0.854,0.0});
HAnimSite617.setRotation(new float[]{0.0,1.0,0.0,1.5708});
Viewpoint& Viewpoint618 =  Viewpoint();
Viewpoint618.setDEF(CString("hanim_l_side_viewpoint"));
Viewpoint618.setDescription(CString("left side"));
Viewpoint618.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint618.setCenterOfRotation(new float[]{0.0,0.9,0.0});
HAnimSite617.addChild(&Viewpoint618);

HAnimHumanoid42.setViewpoints(&HAnimSite617);

HAnimSite& HAnimSite619 =  HAnimSite();
HAnimSite619.setDEF(CString("hanim_Top_view"));
HAnimSite619.X3DNode::setName(CString("Top_view"));
HAnimSite619.setTranslation(new float[]{0.0,3.5,0.0});
HAnimSite619.setRotation(new float[]{1.0,0.0,0.0,-1.57});
Viewpoint& Viewpoint620 =  Viewpoint();
Viewpoint620.setDEF(CString("hanim_Top_viewpoint"));
Viewpoint620.setDescription(CString("Top"));
Viewpoint620.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint620.setCenterOfRotation(new float[]{0.0,0.9,0.0});
HAnimSite619.addChild(&Viewpoint620);

HAnimHumanoid42.setViewpoints(&HAnimSite619);

HAnimSite& HAnimSite621 =  HAnimSite();
HAnimSite621.setDEF(CString("hanim_front_close_view"));
HAnimSite621.X3DNode::setName(CString("front_close_view"));
HAnimSite621.setTranslation(new float[]{0.0,0.854,1.575});
Viewpoint& Viewpoint622 =  Viewpoint();
Viewpoint622.setDEF(CString("hanim_front_close_viewpoint"));
Viewpoint622.setDescription(CString("front close"));
Viewpoint622.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint622.setCenterOfRotation(new float[]{0.0,0.0,1.575});
HAnimSite621.addChild(&Viewpoint622);

HAnimHumanoid42.setViewpoints(&HAnimSite621);

HAnimSite& HAnimSite623 =  HAnimSite();
HAnimSite623.setDEF(CString("hanim_side_close_view"));
HAnimSite623.X3DNode::setName(CString("side_close_view"));
HAnimSite623.setTranslation(new float[]{1.56,0.854,0.0});
HAnimSite623.setRotation(new float[]{0.0,1.0,0.0,1.5708});
Viewpoint& Viewpoint624 =  Viewpoint();
Viewpoint624.setDEF(CString("hanim_side_close_viewpoint"));
Viewpoint624.setDescription(CString("side close"));
Viewpoint624.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint624.setCenterOfRotation(new float[]{1.6,0.0,0.0});
HAnimSite623.addChild(&Viewpoint624);

HAnimHumanoid42.setViewpoints(&HAnimSite623);

HAnimSite& HAnimSite625 =  HAnimSite();
HAnimSite625.setDEF(CString("hanim_head_front_close_view"));
HAnimSite625.X3DNode::setName(CString("head_front_close_view"));
HAnimSite625.setTranslation(new float[]{0.0,1.5,1.0});
Viewpoint& Viewpoint626 =  Viewpoint();
Viewpoint626.setDEF(CString("hanim_head_front_close_viewpoint"));
Viewpoint626.setDescription(CString("head front close"));
Viewpoint626.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint626.setCenterOfRotation(new float[]{0.0,0.0,1.0});
HAnimSite625.addChild(&Viewpoint626);

HAnimHumanoid42.setViewpoints(&HAnimSite625);

HAnimSite& HAnimSite627 =  HAnimSite();
HAnimSite627.setDEF(CString("hanim_chest_front_close_view"));
HAnimSite627.X3DNode::setName(CString("chest_front_close_view"));
HAnimSite627.setTranslation(new float[]{0.0,1.2,1.0});
Viewpoint& Viewpoint628 =  Viewpoint();
Viewpoint628.setDEF(CString("hanim_chest_front_close_viewpoint"));
Viewpoint628.setDescription(CString("chest front close"));
Viewpoint628.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint628.setCenterOfRotation(new float[]{0.0,0.0,1.0});
HAnimSite627.addChild(&Viewpoint628);

HAnimHumanoid42.setViewpoints(&HAnimSite627);

HAnimSite& HAnimSite629 =  HAnimSite();
HAnimSite629.setDEF(CString("hanim_pelvis_front_close_view"));
HAnimSite629.X3DNode::setName(CString("pelvis_front_close_view"));
HAnimSite629.setTranslation(new float[]{0.0,0.8,1.0});
Viewpoint& Viewpoint630 =  Viewpoint();
Viewpoint630.setDEF(CString("hanim_pelvis_front_close_viewpoint"));
Viewpoint630.setDescription(CString("pelvis front close"));
Viewpoint630.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint630.setCenterOfRotation(new float[]{0.0,0.0,1.0});
HAnimSite629.addChild(&Viewpoint630);

HAnimHumanoid42.setViewpoints(&HAnimSite629);

HAnimSite& HAnimSite631 =  HAnimSite();
HAnimSite631.setDEF(CString("hanim_knees_front_close_view"));
HAnimSite631.X3DNode::setName(CString("knees_front_close_view"));
HAnimSite631.setTranslation(new float[]{0.0,0.4,1.0});
Viewpoint& Viewpoint632 =  Viewpoint();
Viewpoint632.setDEF(CString("hanim_knees_front_close_viewpoint"));
Viewpoint632.setDescription(CString("knees front close"));
Viewpoint632.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint632.setCenterOfRotation(new float[]{0.0,0.4,0.0});
HAnimSite631.addChild(&Viewpoint632);

HAnimHumanoid42.setViewpoints(&HAnimSite631);

HAnimSite& HAnimSite633 =  HAnimSite();
HAnimSite633.setDEF(CString("hanim_feet_front_close_view"));
HAnimSite633.X3DNode::setName(CString("feet_front_close_view"));
HAnimSite633.setTranslation(new float[]{0.0,0.0,1.0});
Viewpoint& Viewpoint634 =  Viewpoint();
Viewpoint634.setDEF(CString("hanim_feet_front_close_viewpoint"));
Viewpoint634.setDescription(CString("feet front close"));
Viewpoint634.setPosition(new float[]{0.0,0.0,0.0});
HAnimSite633.addChild(&Viewpoint634);

HAnimHumanoid42.setViewpoints(&HAnimSite633);

HAnimSite& HAnimSite635 =  HAnimSite();
HAnimSite635.setDEF(CString("hanim_eye_level_view"));
HAnimSite635.X3DNode::setName(CString("eye_level_view"));
HAnimSite635.setTranslation(new float[]{0.0,1.6332,0.0502});
Viewpoint& Viewpoint636 =  Viewpoint();
Viewpoint636.setDEF(CString("hanim_eye_level_viewpoint"));
Viewpoint636.setDescription(CString("eye level looking forward"));
Viewpoint636.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint636.setOrientation(new float[]{0.0,1.0,0.0,3.141593});
HAnimSite635.addChild(&Viewpoint636);

HAnimHumanoid42.setViewpoints(&HAnimSite635);

HAnimSite& HAnimSite637 =  HAnimSite();
HAnimSite637.setUSE(CString("hanim_l_eyeball_site_view"));
HAnimHumanoid42.setSites(&HAnimSite637);

HAnimSite& HAnimSite638 =  HAnimSite();
HAnimSite638.setUSE(CString("hanim_r_eyeball_site_view"));
HAnimHumanoid42.setSites(&HAnimSite638);

HAnimSite& HAnimSite639 =  HAnimSite();
HAnimSite639.setUSE(CString("hanim_l_hand_front_view"));
HAnimHumanoid42.setSites(&HAnimSite639);

HAnimSite& HAnimSite640 =  HAnimSite();
HAnimSite640.setUSE(CString("hanim_r_hand_front_view"));
HAnimHumanoid42.setSites(&HAnimSite640);

Scene28.addChild(&HAnimHumanoid42);

X3D0.setScene(&Scene28);

//}

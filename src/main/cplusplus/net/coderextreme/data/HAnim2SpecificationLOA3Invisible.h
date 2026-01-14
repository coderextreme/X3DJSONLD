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
meta3.setContent(CString("HAnim2SpecificationLOA3Invisible.x3d"));
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
meta6.setContent(CString("HAnim2SpecificationLOA3Illustrated.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("reference"));
meta7.setContent(CString("HAnim2SpecificationLOA3Animation.x3d"));
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
meta17.setContent(CString("Mon, 15 Sep 2025 05:20:09 GMT"));
head1.addMeta(&meta17);

meta& meta18 =  meta();
meta18.setName(CString("creator"));
meta18.setContent(CString("Matthew T. Beitler, Joe D. Williams, Don Brutzman"));
head1.addMeta(&meta18);

meta& meta19 =  meta();
meta19.setName(CString("Image"));
meta19.setContent(CString("images/BonesAllSkeletonFrontViewLOA1.png"));
head1.addMeta(&meta19);

meta& meta20 =  meta();
meta20.setName(CString("Image"));
meta20.setContent(CString("images/BonesAllSkeletonFrontViewLOA2.png"));
head1.addMeta(&meta20);

meta& meta21 =  meta();
meta21.setName(CString("Image"));
meta21.setContent(CString("images/BonesAllSkeletonFrontViewLOA3.png"));
head1.addMeta(&meta21);

meta& meta22 =  meta();
meta22.setName(CString("TODO"));
meta22.setContent(CString("move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations"));
head1.addMeta(&meta22);

meta& meta23 =  meta();
meta23.setName(CString("TODO"));
meta23.setContent(CString("insert MetadataInteger nodes indicating LOA for each Joint and Segment"));
head1.addMeta(&meta23);

meta& meta24 =  meta();
meta24.setName(CString("translator"));
meta24.setContent(CString("Don Brutzman and Joe Williams"));
head1.addMeta(&meta24);

meta& meta25 =  meta();
meta25.setName(CString("generator"));
meta25.setContent(CString("BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo"));
head1.addMeta(&meta25);

meta& meta26 =  meta();
meta26.setName(CString("generator"));
meta26.setContent(CString("X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit"));
head1.addMeta(&meta26);

X3D0.setHead(&head1);

Scene& Scene27 =  Scene();
Background& Background28 =  Background();
Background28.setSkyColor(new float[]{0.3,0.3,0.3}, 3);
Scene27.addChild(&Background28);

NavigationInfo& NavigationInfo29 =  NavigationInfo();
Scene27.addChild(&NavigationInfo29);

Group& Group30 =  Group();
Group30.setDEF(CString("Original_WorldInfo"));
WorldInfo& WorldInfo31 =  WorldInfo();
WorldInfo31.setTitle(CString("HANIM 200x Default Joint Centers, LOA3"));
WorldInfo31.setInfo(new CString[]{CString(" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps ")}, 1);
Group30.addChild(&WorldInfo31);

Scene27.addChild(&Group30);

Viewpoint& Viewpoint32 =  Viewpoint();
Viewpoint32.setDescription(CString("Humanoid LOA 3 Front"));
Viewpoint32.setPosition(new float[]{0.0,0.4,4.0});
Viewpoint32.setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
Scene27.addChild(&Viewpoint32);

Viewpoint& Viewpoint33 =  Viewpoint();
Viewpoint33.setDescription(CString("Humanoid LOA 3 Front Close"));
Viewpoint33.setPosition(new float[]{0.0,0.8,2.0});
Viewpoint33.setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
Scene27.addChild(&Viewpoint33);

Viewpoint& Viewpoint34 =  Viewpoint();
Viewpoint34.setDescription(CString("Humanoid LOA 3 Front Closer"));
Viewpoint34.setPosition(new float[]{0.0,1.2,1.0});
Viewpoint34.setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
Scene27.addChild(&Viewpoint34);

Viewpoint& Viewpoint35 =  Viewpoint();
Viewpoint35.setDescription(CString("Humanoid LOA 3 Front Face"));
Viewpoint35.setPosition(new float[]{0.0,1.63,1.0});
Viewpoint35.setCenterOfRotation(new float[]{0.0,1.5,0.0016});
Scene27.addChild(&Viewpoint35);

Viewpoint& Viewpoint36 =  Viewpoint();
Viewpoint36.setDescription(CString("Humanoid LOA 3 Right Side"));
Viewpoint36.setPosition(new float[]{2.6,0.8,0.0});
Viewpoint36.setOrientation(new float[]{0.0,1.0,0.0,1.5708});
Viewpoint36.setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
Scene27.addChild(&Viewpoint36);

Viewpoint& Viewpoint37 =  Viewpoint();
Viewpoint37.setDescription(CString("Humanoid LOA 3 Right Side Close"));
Viewpoint37.setPosition(new float[]{1.0,0.8,0.5});
Viewpoint37.setOrientation(new float[]{0.0,1.0,0.0,1.2});
Viewpoint37.setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
Scene27.addChild(&Viewpoint37);

Viewpoint& Viewpoint38 =  Viewpoint();
Viewpoint38.setDescription(CString("Humanoid LOA 3 Left Side Close"));
Viewpoint38.setPosition(new float[]{-1.0,0.8,0.5});
Viewpoint38.setOrientation(new float[]{0.0,1.0,0.0,-1.2});
Viewpoint38.setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
Scene27.addChild(&Viewpoint38);

Viewpoint& Viewpoint39 =  Viewpoint();
Viewpoint39.setDescription(CString("Humanoid LOA 3 Left Side"));
Viewpoint39.setPosition(new float[]{-2.6,0.8,0.0});
Viewpoint39.setOrientation(new float[]{0.0,1.0,0.0,-1.5708});
Viewpoint39.setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
Scene27.addChild(&Viewpoint39);

Viewpoint& Viewpoint40 =  Viewpoint();
Viewpoint40.setDescription(CString("Humanoid LOA 3 Top"));
Viewpoint40.setPosition(new float[]{0.0,3.5,0.0});
Viewpoint40.setOrientation(new float[]{1.0,0.0,0.0,-1.5708});
Viewpoint40.setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
Scene27.addChild(&Viewpoint40);

HAnimHumanoid& HAnimHumanoid41 =  HAnimHumanoid();
HAnimHumanoid41.setDEF(CString("hanim_humanoid"));
HAnimHumanoid41.X3DNode::setName(CString("humanoid"));
HAnimHumanoid41.setLoa(3);
MetadataSet& MetadataSet42 =  MetadataSet();
MetadataSet42.X3DNode::setName(CString("HAnimHumanoid.info"));
MetadataSet42.X3DNode::setReference(CString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"));
MetadataString& MetadataString43 =  MetadataString();
MetadataString43.X3DNode::setName(CString("authorName"));
MetadataSet42.setValue((X3DNode *)&MetadataString43);

MetadataString& MetadataString44 =  MetadataString();
MetadataString44.X3DNode::setName(CString("authorEmail"));
MetadataSet42.setValue((X3DNode *)&MetadataString44);

MetadataString& MetadataString45 =  MetadataString();
MetadataString45.X3DNode::setName(CString("copyright"));
MetadataSet42.setValue((X3DNode *)&MetadataString45);

MetadataString& MetadataString46 =  MetadataString();
MetadataString46.X3DNode::setName(CString("creationDate"));
MetadataSet42.setValue((X3DNode *)&MetadataString46);

MetadataFloat& MetadataFloat47 =  MetadataFloat();
MetadataFloat47.X3DNode::setName(CString("height"));
MetadataFloat47.setValue(new float[]{1.7504}, 1);
MetadataSet42.setValue((X3DNode *)&MetadataFloat47);

MetadataString& MetadataString48 =  MetadataString();
MetadataString48.X3DNode::setName(CString("humanoidVersion"));
MetadataSet42.setValue((X3DNode *)&MetadataString48);

MetadataString& MetadataString49 =  MetadataString();
MetadataString49.X3DNode::setName(CString("usageRestrictions"));
MetadataSet42.setValue((X3DNode *)&MetadataString49);

HAnimHumanoid41.setMetadata(&MetadataSet42);

HAnimJoint& HAnimJoint50 =  HAnimJoint();
HAnimJoint50.setDEF(CString("hanim_humanoid_root"));
HAnimJoint50.X3DNode::setName(CString("humanoid_root"));
HAnimJoint50.setCenter(new float[]{0.0,0.824,0.0277});
HAnimSegment& HAnimSegment51 =  HAnimSegment();
HAnimSegment51.setDEF(CString("hanim_sacrum"));
HAnimSegment51.X3DNode::setName(CString("sacrum"));
HAnimJoint50.addChildren(&HAnimSegment51);

HAnimJoint& HAnimJoint52 =  HAnimJoint();
HAnimJoint52.setDEF(CString("hanim_sacroiliac"));
HAnimJoint52.X3DNode::setName(CString("sacroiliac"));
HAnimJoint52.setCenter(new float[]{0.0,0.9149,0.0016});
HAnimSegment& HAnimSegment53 =  HAnimSegment();
HAnimSegment53.setDEF(CString("hanim_pelvis"));
HAnimSegment53.X3DNode::setName(CString("pelvis"));
HAnimSite& HAnimSite54 =  HAnimSite();
HAnimSite54.setDEF(CString("hanim_r_iliocristale_pt"));
HAnimSite54.X3DNode::setName(CString("r_iliocristale_pt"));
HAnimSite54.setTranslation(new float[]{-0.1525,1.0628,0.0035});
HAnimSegment53.addChild(&HAnimSite54);

HAnimSite& HAnimSite55 =  HAnimSite();
HAnimSite55.setDEF(CString("hanim_r_trochanterion_pt"));
HAnimSite55.X3DNode::setName(CString("r_trochanterion_pt"));
HAnimSite55.setTranslation(new float[]{-0.1689,0.8419,0.0352});
HAnimSegment53.addChild(&HAnimSite55);

HAnimSite& HAnimSite56 =  HAnimSite();
HAnimSite56.setDEF(CString("hanim_l_iliocristale_pt"));
HAnimSite56.X3DNode::setName(CString("l_iliocristale_pt"));
HAnimSite56.setTranslation(new float[]{0.1612,1.0537,0.0008});
HAnimSegment53.addChild(&HAnimSite56);

HAnimSite& HAnimSite57 =  HAnimSite();
HAnimSite57.setDEF(CString("hanim_l_trochanterion_pt"));
HAnimSite57.X3DNode::setName(CString("l_trochanterion_pt"));
HAnimSite57.setTranslation(new float[]{0.1677,0.8336,0.0303});
HAnimSegment53.addChild(&HAnimSite57);

HAnimSite& HAnimSite58 =  HAnimSite();
HAnimSite58.setDEF(CString("hanim_r_asis_pt"));
HAnimSite58.X3DNode::setName(CString("r_asis_pt"));
HAnimSite58.setTranslation(new float[]{-0.0887,1.0021,0.1112});
HAnimSegment53.addChild(&HAnimSite58);

HAnimSite& HAnimSite59 =  HAnimSite();
HAnimSite59.setDEF(CString("hanim_l_asis_pt"));
HAnimSite59.X3DNode::setName(CString("l_asis_pt"));
HAnimSite59.setTranslation(new float[]{0.0925,0.9983,0.1052});
HAnimSegment53.addChild(&HAnimSite59);

HAnimSite& HAnimSite60 =  HAnimSite();
HAnimSite60.setDEF(CString("hanim_r_psis_pt"));
HAnimSite60.X3DNode::setName(CString("r_psis_pt"));
HAnimSite60.setTranslation(new float[]{-0.0716,1.019,-0.1138});
HAnimSegment53.addChild(&HAnimSite60);

HAnimSite& HAnimSite61 =  HAnimSite();
HAnimSite61.setDEF(CString("hanim_l_psis_pt"));
HAnimSite61.X3DNode::setName(CString("l_psis_pt"));
HAnimSite61.setTranslation(new float[]{0.0774,1.019,-0.1151});
HAnimSegment53.addChild(&HAnimSite61);

HAnimSite& HAnimSite62 =  HAnimSite();
HAnimSite62.setDEF(CString("hanim_crotch_pt"));
HAnimSite62.X3DNode::setName(CString("crotch_pt"));
HAnimSite62.setTranslation(new float[]{0.0034,0.8266,0.0257});
HAnimSegment53.addChild(&HAnimSite62);

HAnimJoint52.addChildren(&HAnimSegment53);

HAnimJoint& HAnimJoint63 =  HAnimJoint();
HAnimJoint63.setDEF(CString("hanim_l_hip"));
HAnimJoint63.X3DNode::setName(CString("l_hip"));
HAnimJoint63.setCenter(new float[]{0.0961,0.9124,-0.0001});
HAnimSegment& HAnimSegment64 =  HAnimSegment();
HAnimSegment64.setDEF(CString("hanim_l_thigh"));
HAnimSegment64.X3DNode::setName(CString("l_thigh"));
HAnimSite& HAnimSite65 =  HAnimSite();
HAnimSite65.setDEF(CString("hanim_l_knee_crease_pt"));
HAnimSite65.X3DNode::setName(CString("l_knee_crease_pt"));
HAnimSite65.setTranslation(new float[]{0.0993,0.4881,-0.0309});
HAnimSegment64.addChild(&HAnimSite65);

HAnimSite& HAnimSite66 =  HAnimSite();
HAnimSite66.setDEF(CString("hanim_l_femoral_lateral_epicondyle_pt"));
HAnimSite66.X3DNode::setName(CString("l_femoral_lateral_epicondyle_pt"));
HAnimSite66.setTranslation(new float[]{0.1598,0.4967,0.0297});
HAnimSegment64.addChild(&HAnimSite66);

HAnimSite& HAnimSite67 =  HAnimSite();
HAnimSite67.setDEF(CString("hanim_l_femoral_medial_epicondyle_pt"));
HAnimSite67.X3DNode::setName(CString("l_femoral_medial_epicondyle_pt"));
HAnimSite67.setTranslation(new float[]{0.0398,0.4946,0.0303});
HAnimSegment64.addChild(&HAnimSite67);

HAnimJoint63.addChildren(&HAnimSegment64);

HAnimJoint& HAnimJoint68 =  HAnimJoint();
HAnimJoint68.setDEF(CString("hanim_l_knee"));
HAnimJoint68.X3DNode::setName(CString("l_knee"));
HAnimJoint68.setCenter(new float[]{0.104,0.4867,0.0308});
HAnimSegment& HAnimSegment69 =  HAnimSegment();
HAnimSegment69.setDEF(CString("hanim_l_calf"));
HAnimSegment69.X3DNode::setName(CString("l_calf"));
HAnimJoint68.addChildren(&HAnimSegment69);

HAnimJoint& HAnimJoint70 =  HAnimJoint();
HAnimJoint70.setDEF(CString("hanim_l_talocrural"));
HAnimJoint70.X3DNode::setName(CString("l_talocrural"));
HAnimJoint70.setCenter(new float[]{0.1101,0.0656,-0.0736});
HAnimSegment& HAnimSegment71 =  HAnimSegment();
HAnimSegment71.setDEF(CString("hanim_l_talus"));
HAnimSegment71.X3DNode::setName(CString("l_talus"));
HAnimSite& HAnimSite72 =  HAnimSite();
HAnimSite72.setDEF(CString("hanim_l_lateral_malleolus_pt"));
HAnimSite72.X3DNode::setName(CString("l_lateral_malleolus_pt"));
HAnimSite72.setTranslation(new float[]{0.1308,0.0597,-0.1032});
HAnimSegment71.addChild(&HAnimSite72);

HAnimSite& HAnimSite73 =  HAnimSite();
HAnimSite73.setDEF(CString("hanim_l_medial_malleolus_pt"));
HAnimSite73.X3DNode::setName(CString("l_medial_malleolus_pt"));
HAnimSite73.setTranslation(new float[]{0.089,0.0716,-0.0881});
HAnimSegment71.addChild(&HAnimSite73);

HAnimSite& HAnimSite74 =  HAnimSite();
HAnimSite74.setDEF(CString("hanim_l_sphyrion_pt"));
HAnimSite74.X3DNode::setName(CString("l_sphyrion_pt"));
HAnimSite74.setTranslation(new float[]{0.089,0.0575,-0.0943});
HAnimSegment71.addChild(&HAnimSite74);

HAnimSite& HAnimSite75 =  HAnimSite();
HAnimSite75.setDEF(CString("hanim_l_calcaneus_posterior_pt"));
HAnimSite75.X3DNode::setName(CString("l_calcaneus_posterior_pt"));
HAnimSite75.setTranslation(new float[]{0.0974,0.0259,-0.1171});
HAnimSegment71.addChild(&HAnimSite75);

HAnimJoint70.addChildren(&HAnimSegment71);

HAnimJoint& HAnimJoint76 =  HAnimJoint();
HAnimJoint76.setDEF(CString("hanim_l_tarsometatarsal_2"));
HAnimJoint76.X3DNode::setName(CString("l_tarsometatarsal_2"));
HAnimJoint76.setCenter(new float[]{0.1086,0.0001,-0.0368});
HAnimSegment& HAnimSegment77 =  HAnimSegment();
HAnimSegment77.setDEF(CString("hanim_l_metatarsal_2"));
HAnimSegment77.X3DNode::setName(CString("l_metatarsal_2"));
HAnimJoint76.addChildren(&HAnimSegment77);

HAnimJoint& HAnimJoint78 =  HAnimJoint();
HAnimJoint78.setDEF(CString("hanim_l_metatarsophalangeal_2"));
HAnimJoint78.X3DNode::setName(CString("l_metatarsophalangeal_2"));
HAnimJoint78.setCenter(new float[]{0.1086,0.0001,0.0368});
HAnimSegment& HAnimSegment79 =  HAnimSegment();
HAnimSegment79.setDEF(CString("hanim_l_tarsal_proximal_phalanx_2"));
HAnimSegment79.X3DNode::setName(CString("l_tarsal_proximal_phalanx_2"));
HAnimSite& HAnimSite80 =  HAnimSite();
HAnimSite80.setDEF(CString("hanim_l_metatarsal_phalanx_1_pt"));
HAnimSite80.X3DNode::setName(CString("l_metatarsal_phalanx_1_pt"));
HAnimSite80.setTranslation(new float[]{0.0816,0.0232,0.0106});
HAnimSegment79.addChild(&HAnimSite80);

HAnimJoint78.addChildren(&HAnimSegment79);

HAnimJoint& HAnimJoint81 =  HAnimJoint();
HAnimJoint81.setDEF(CString("hanim_l_tarsal_distal_interphalangeal_2"));
HAnimJoint81.X3DNode::setName(CString("l_tarsal_distal_interphalangeal_2"));
HAnimJoint81.setCenter(new float[]{0.1086,0.0,0.0762});
HAnimSegment& HAnimSegment82 =  HAnimSegment();
HAnimSegment82.setDEF(CString("hanim_l_tarsal_distal_phalanx_2"));
HAnimSegment82.X3DNode::setName(CString("l_tarsal_distal_phalanx_2"));
HAnimSite& HAnimSite83 =  HAnimSite();
HAnimSite83.setDEF(CString("hanim_l_forefoot_tip"));
HAnimSite83.X3DNode::setName(CString("l_forefoot_tip"));
HAnimSite83.setTranslation(new float[]{0.1354,0.0016,0.1476});
HAnimSegment82.addChild(&HAnimSite83);

HAnimSite& HAnimSite84 =  HAnimSite();
HAnimSite84.setDEF(CString("hanim_l_metatarsal_phalanx_5_pt"));
HAnimSite84.X3DNode::setName(CString("l_metatarsal_phalanx_5_pt"));
HAnimSite84.setTranslation(new float[]{0.1825,0.007,0.0928});
HAnimSegment82.addChild(&HAnimSite84);

HAnimSite& HAnimSite85 =  HAnimSite();
HAnimSite85.setDEF(CString("hanim_l_tarsal_distal_phalanx_2_pt"));
HAnimSite85.X3DNode::setName(CString("l_tarsal_distal_phalanx_2_pt"));
HAnimSite85.setTranslation(new float[]{0.1195,0.0079,0.1433});
HAnimSegment82.addChild(&HAnimSite85);

HAnimJoint81.addChildren(&HAnimSegment82);

HAnimJoint78.addChildren(&HAnimJoint81);

HAnimJoint76.addChildren(&HAnimJoint78);

HAnimJoint70.addChildren(&HAnimJoint76);

HAnimJoint68.addChildren(&HAnimJoint70);

HAnimJoint63.addChildren(&HAnimJoint68);

HAnimJoint52.addChildren(&HAnimJoint63);

HAnimJoint& HAnimJoint86 =  HAnimJoint();
HAnimJoint86.setDEF(CString("hanim_r_hip"));
HAnimJoint86.X3DNode::setName(CString("r_hip"));
HAnimJoint86.setCenter(new float[]{-0.0961,0.9124,-0.0001});
HAnimSegment& HAnimSegment87 =  HAnimSegment();
HAnimSegment87.setDEF(CString("hanim_r_thigh"));
HAnimSegment87.X3DNode::setName(CString("r_thigh"));
HAnimSite& HAnimSite88 =  HAnimSite();
HAnimSite88.setDEF(CString("hanim_r_knee_crease_pt"));
HAnimSite88.X3DNode::setName(CString("r_knee_crease_pt"));
HAnimSite88.setTranslation(new float[]{-0.0825,0.4932,-0.0326});
HAnimSegment87.addChild(&HAnimSite88);

HAnimSite& HAnimSite89 =  HAnimSite();
HAnimSite89.setDEF(CString("hanim_r_femoral_lateral_epicondyle_pt"));
HAnimSite89.X3DNode::setName(CString("r_femoral_lateral_epicondyle_pt"));
HAnimSite89.setTranslation(new float[]{-0.1421,0.4992,0.031});
HAnimSegment87.addChild(&HAnimSite89);

HAnimSite& HAnimSite90 =  HAnimSite();
HAnimSite90.setDEF(CString("hanim_r_femoral_medial_epicondyle_pt"));
HAnimSite90.X3DNode::setName(CString("r_femoral_medial_epicondyle_pt"));
HAnimSite90.setTranslation(new float[]{-0.0221,0.5014,0.0289});
HAnimSegment87.addChild(&HAnimSite90);

HAnimJoint86.addChildren(&HAnimSegment87);

HAnimJoint& HAnimJoint91 =  HAnimJoint();
HAnimJoint91.setDEF(CString("hanim_r_knee"));
HAnimJoint91.X3DNode::setName(CString("r_knee"));
HAnimJoint91.setCenter(new float[]{-0.104,0.4867,0.0308});
HAnimSegment& HAnimSegment92 =  HAnimSegment();
HAnimSegment92.setDEF(CString("hanim_r_calf"));
HAnimSegment92.X3DNode::setName(CString("r_calf"));
HAnimJoint91.addChildren(&HAnimSegment92);

HAnimJoint& HAnimJoint93 =  HAnimJoint();
HAnimJoint93.setDEF(CString("hanim_r_talocrural"));
HAnimJoint93.X3DNode::setName(CString("r_talocrural"));
HAnimJoint93.setCenter(new float[]{-0.1101,0.0656,-0.0736});
HAnimSegment& HAnimSegment94 =  HAnimSegment();
HAnimSegment94.setDEF(CString("hanim_r_talus"));
HAnimSegment94.X3DNode::setName(CString("r_talus"));
HAnimSite& HAnimSite95 =  HAnimSite();
HAnimSite95.setDEF(CString("hanim_r_lateral_malleolus_pt"));
HAnimSite95.X3DNode::setName(CString("r_lateral_malleolus_pt"));
HAnimSite95.setTranslation(new float[]{-0.1006,0.0658,-0.1075});
HAnimSegment94.addChild(&HAnimSite95);

HAnimSite& HAnimSite96 =  HAnimSite();
HAnimSite96.setDEF(CString("hanim_r_medial_malleolus_pt"));
HAnimSite96.X3DNode::setName(CString("r_medial_malleolus_pt"));
HAnimSite96.setTranslation(new float[]{-0.0591,0.076,-0.0928});
HAnimSegment94.addChild(&HAnimSite96);

HAnimSite& HAnimSite97 =  HAnimSite();
HAnimSite97.setDEF(CString("hanim_r_sphyrion_pt"));
HAnimSite97.X3DNode::setName(CString("r_sphyrion_pt"));
HAnimSite97.setTranslation(new float[]{-0.0603,0.061,-0.1002});
HAnimSegment94.addChild(&HAnimSite97);

HAnimSite& HAnimSite98 =  HAnimSite();
HAnimSite98.setDEF(CString("hanim_r_calcaneus_posterior_pt"));
HAnimSite98.X3DNode::setName(CString("r_calcaneus_posterior_pt"));
HAnimSite98.setTranslation(new float[]{-0.0692,0.0297,-0.1221});
HAnimSegment94.addChild(&HAnimSite98);

HAnimJoint93.addChildren(&HAnimSegment94);

HAnimJoint& HAnimJoint99 =  HAnimJoint();
HAnimJoint99.setDEF(CString("hanim_r_tarsometatarsal_2"));
HAnimJoint99.X3DNode::setName(CString("r_tarsometatarsal_2"));
HAnimJoint99.setCenter(new float[]{-0.1086,0.0001,-0.0368});
HAnimSegment& HAnimSegment100 =  HAnimSegment();
HAnimSegment100.setDEF(CString("hanim_r_metatarsal_2"));
HAnimSegment100.X3DNode::setName(CString("r_metatarsal_2"));
HAnimJoint99.addChildren(&HAnimSegment100);

HAnimJoint& HAnimJoint101 =  HAnimJoint();
HAnimJoint101.setDEF(CString("hanim_r_metatarsophalangeal_2"));
HAnimJoint101.X3DNode::setName(CString("r_metatarsophalangeal_2"));
HAnimJoint101.setCenter(new float[]{-0.1086,0.0001,0.0368});
HAnimSegment& HAnimSegment102 =  HAnimSegment();
HAnimSegment102.setDEF(CString("hanim_r_tarsal_proximal_phalanx_2"));
HAnimSegment102.X3DNode::setName(CString("r_tarsal_proximal_phalanx_2"));
HAnimSite& HAnimSite103 =  HAnimSite();
HAnimSite103.setDEF(CString("hanim_r_metatarsal_phalanx_1_pt"));
HAnimSite103.X3DNode::setName(CString("r_metatarsal_phalanx_1_pt"));
HAnimSite103.setTranslation(new float[]{-0.0521,0.026,0.0127});
HAnimSegment102.addChild(&HAnimSite103);

HAnimJoint101.addChildren(&HAnimSegment102);

HAnimJoint& HAnimJoint104 =  HAnimJoint();
HAnimJoint104.setDEF(CString("hanim_r_tarsal_distal_interphalangeal_2"));
HAnimJoint104.X3DNode::setName(CString("r_tarsal_distal_interphalangeal_2"));
HAnimJoint104.setCenter(new float[]{-0.1086,0.0,0.0762});
HAnimSegment& HAnimSegment105 =  HAnimSegment();
HAnimSegment105.setDEF(CString("hanim_r_tarsal_distal_phalanx_2"));
HAnimSegment105.X3DNode::setName(CString("r_tarsal_distal_phalanx_2"));
HAnimSite& HAnimSite106 =  HAnimSite();
HAnimSite106.setDEF(CString("hanim_r_forefoot_tip"));
HAnimSite106.X3DNode::setName(CString("r_forefoot_tip"));
HAnimSite106.setTranslation(new float[]{-0.1043,0.0227,0.145});
HAnimSegment105.addChild(&HAnimSite106);

HAnimSite& HAnimSite107 =  HAnimSite();
HAnimSite107.setDEF(CString("hanim_r_metatarsal_phalanx_5_pt"));
HAnimSite107.X3DNode::setName(CString("r_metatarsal_phalanx_5_pt"));
HAnimSite107.setTranslation(new float[]{-0.1523,0.0166,0.0895});
HAnimSegment105.addChild(&HAnimSite107);

HAnimSite& HAnimSite108 =  HAnimSite();
HAnimSite108.setDEF(CString("hanim_r_tarsal_distal_phalanx_2_pt"));
HAnimSite108.X3DNode::setName(CString("r_tarsal_distal_phalanx_2_pt"));
HAnimSite108.setTranslation(new float[]{-0.0883,0.0134,0.1383});
HAnimSegment105.addChild(&HAnimSite108);

HAnimJoint104.addChildren(&HAnimSegment105);

HAnimJoint101.addChildren(&HAnimJoint104);

HAnimJoint99.addChildren(&HAnimJoint101);

HAnimJoint93.addChildren(&HAnimJoint99);

HAnimJoint91.addChildren(&HAnimJoint93);

HAnimJoint86.addChildren(&HAnimJoint91);

HAnimJoint52.addChildren(&HAnimJoint86);

HAnimJoint50.addChildren(&HAnimJoint52);

HAnimJoint& HAnimJoint109 =  HAnimJoint();
HAnimJoint109.setDEF(CString("hanim_vl5"));
HAnimJoint109.X3DNode::setName(CString("vl5"));
HAnimJoint109.setCenter(new float[]{0.0028,1.0568,-0.0776});
HAnimSegment& HAnimSegment110 =  HAnimSegment();
HAnimSegment110.setDEF(CString("hanim_l5"));
HAnimSegment110.X3DNode::setName(CString("l5"));
HAnimSite& HAnimSite111 =  HAnimSite();
HAnimSite111.setDEF(CString("hanim_waist_preferred_posterior_pt"));
HAnimSite111.X3DNode::setName(CString("waist_preferred_posterior_pt"));
HAnimSite111.setTranslation(new float[]{0.0,1.0915,-0.1091});
HAnimSegment110.addChild(&HAnimSite111);

HAnimSite& HAnimSite112 =  HAnimSite();
HAnimSite112.setDEF(CString("hanim_navel_pt"));
HAnimSite112.X3DNode::setName(CString("navel_pt"));
HAnimSite112.setTranslation(new float[]{0.0069,1.0966,0.1017});
HAnimSegment110.addChild(&HAnimSite112);

HAnimJoint109.addChildren(&HAnimSegment110);

HAnimJoint& HAnimJoint113 =  HAnimJoint();
HAnimJoint113.setDEF(CString("hanim_vl4"));
HAnimJoint113.X3DNode::setName(CString("vl4"));
HAnimJoint113.setCenter(new float[]{0.0035,1.0925,-0.0787});
HAnimSegment& HAnimSegment114 =  HAnimSegment();
HAnimSegment114.setDEF(CString("hanim_l4"));
HAnimSegment114.X3DNode::setName(CString("l4"));
HAnimJoint113.addChildren(&HAnimSegment114);

HAnimJoint& HAnimJoint115 =  HAnimJoint();
HAnimJoint115.setDEF(CString("hanim_vl3"));
HAnimJoint115.X3DNode::setName(CString("vl3"));
HAnimJoint115.setCenter(new float[]{0.0041,1.1276,-0.0796});
HAnimSegment& HAnimSegment116 =  HAnimSegment();
HAnimSegment116.setDEF(CString("hanim_l3"));
HAnimSegment116.X3DNode::setName(CString("l3"));
HAnimJoint115.addChildren(&HAnimSegment116);

HAnimJoint& HAnimJoint117 =  HAnimJoint();
HAnimJoint117.setDEF(CString("hanim_vl2"));
HAnimJoint117.X3DNode::setName(CString("vl2"));
HAnimJoint117.setCenter(new float[]{0.0045,1.1546,-0.08});
HAnimSegment& HAnimSegment118 =  HAnimSegment();
HAnimSegment118.setDEF(CString("hanim_l2"));
HAnimSegment118.X3DNode::setName(CString("l2"));
HAnimSite& HAnimSite119 =  HAnimSite();
HAnimSite119.setDEF(CString("hanim_r_rib10_pt"));
HAnimSite119.X3DNode::setName(CString("r_rib10_pt"));
HAnimSite119.setTranslation(new float[]{-0.0711,1.1941,0.1016});
HAnimSegment118.addChild(&HAnimSite119);

HAnimSite& HAnimSite120 =  HAnimSite();
HAnimSite120.setDEF(CString("hanim_l_rib10_pt"));
HAnimSite120.X3DNode::setName(CString("l_rib10_pt"));
HAnimSite120.setTranslation(new float[]{0.0871,1.1925,0.0992});
HAnimSegment118.addChild(&HAnimSite120);

HAnimSite& HAnimSite121 =  HAnimSite();
HAnimSite121.setDEF(CString("hanim_rib10_midspine_pt"));
HAnimSite121.X3DNode::setName(CString("rib10_midspine_pt"));
HAnimSite121.setTranslation(new float[]{0.0049,1.1908,-0.1113});
HAnimSegment118.addChild(&HAnimSite121);

HAnimJoint117.addChildren(&HAnimSegment118);

HAnimJoint& HAnimJoint122 =  HAnimJoint();
HAnimJoint122.setDEF(CString("hanim_vl1"));
HAnimJoint122.X3DNode::setName(CString("vl1"));
HAnimJoint122.setCenter(new float[]{0.0048,1.1912,-0.0805});
HAnimSegment& HAnimSegment123 =  HAnimSegment();
HAnimSegment123.setDEF(CString("hanim_l1"));
HAnimSegment123.X3DNode::setName(CString("l1"));
HAnimJoint122.addChildren(&HAnimSegment123);

HAnimJoint& HAnimJoint124 =  HAnimJoint();
HAnimJoint124.setDEF(CString("hanim_vt12"));
HAnimJoint124.X3DNode::setName(CString("vt12"));
HAnimJoint124.setCenter(new float[]{0.0051,1.2278,-0.0808});
HAnimSegment& HAnimSegment125 =  HAnimSegment();
HAnimSegment125.setDEF(CString("hanim_t12"));
HAnimSegment125.X3DNode::setName(CString("t12"));
HAnimJoint124.addChildren(&HAnimSegment125);

HAnimJoint& HAnimJoint126 =  HAnimJoint();
HAnimJoint126.setDEF(CString("hanim_vt11"));
HAnimJoint126.X3DNode::setName(CString("vt11"));
HAnimJoint126.setCenter(new float[]{0.0053,1.2679,-0.081});
HAnimSegment& HAnimSegment127 =  HAnimSegment();
HAnimSegment127.setDEF(CString("hanim_t11"));
HAnimSegment127.X3DNode::setName(CString("t11"));
HAnimJoint126.addChildren(&HAnimSegment127);

HAnimJoint& HAnimJoint128 =  HAnimJoint();
HAnimJoint128.setDEF(CString("hanim_vt10"));
HAnimJoint128.X3DNode::setName(CString("vt10"));
HAnimJoint128.setCenter(new float[]{0.0056,1.2848,-0.0822});
HAnimSegment& HAnimSegment129 =  HAnimSegment();
HAnimSegment129.setDEF(CString("hanim_t10"));
HAnimSegment129.X3DNode::setName(CString("t10"));
HAnimSite& HAnimSite130 =  HAnimSite();
HAnimSite130.setDEF(CString("hanim_substernale_pt"));
HAnimSite130.X3DNode::setName(CString("substernale_pt"));
HAnimSite130.setTranslation(new float[]{0.0085,1.2995,0.1147});
HAnimSegment129.addChild(&HAnimSite130);

HAnimJoint128.addChildren(&HAnimSegment129);

HAnimJoint& HAnimJoint131 =  HAnimJoint();
HAnimJoint131.setDEF(CString("hanim_vt9"));
HAnimJoint131.X3DNode::setName(CString("vt9"));
HAnimJoint131.setCenter(new float[]{0.0057,1.3126,-0.0838});
HAnimSegment& HAnimSegment132 =  HAnimSegment();
HAnimSegment132.setDEF(CString("hanim_t9"));
HAnimSegment132.X3DNode::setName(CString("t9"));
HAnimSite& HAnimSite133 =  HAnimSite();
HAnimSite133.setDEF(CString("hanim_r_thelion_pt"));
HAnimSite133.X3DNode::setName(CString("r_thelion_pt"));
HAnimSite133.setTranslation(new float[]{-0.0736,1.3385,0.1217});
HAnimSegment132.addChild(&HAnimSite133);

HAnimSite& HAnimSite134 =  HAnimSite();
HAnimSite134.setDEF(CString("hanim_l_thelion_pt"));
HAnimSite134.X3DNode::setName(CString("l_thelion_pt"));
HAnimSite134.setTranslation(new float[]{0.0918,1.3382,0.1192});
HAnimSegment132.addChild(&HAnimSite134);

HAnimJoint131.addChildren(&HAnimSegment132);

HAnimJoint& HAnimJoint135 =  HAnimJoint();
HAnimJoint135.setDEF(CString("hanim_vt8"));
HAnimJoint135.X3DNode::setName(CString("vt8"));
HAnimJoint135.setCenter(new float[]{0.0057,1.3382,-0.0845});
HAnimSegment& HAnimSegment136 =  HAnimSegment();
HAnimSegment136.setDEF(CString("hanim_t8"));
HAnimSegment136.X3DNode::setName(CString("t8"));
HAnimJoint135.addChildren(&HAnimSegment136);

HAnimJoint& HAnimJoint137 =  HAnimJoint();
HAnimJoint137.setDEF(CString("hanim_vt7"));
HAnimJoint137.X3DNode::setName(CString("vt7"));
HAnimJoint137.setCenter(new float[]{0.0058,1.3625,-0.0833});
HAnimSegment& HAnimSegment138 =  HAnimSegment();
HAnimSegment138.setDEF(CString("hanim_t7"));
HAnimSegment138.X3DNode::setName(CString("t7"));
HAnimJoint137.addChildren(&HAnimSegment138);

HAnimJoint& HAnimJoint139 =  HAnimJoint();
HAnimJoint139.setDEF(CString("hanim_vt6"));
HAnimJoint139.X3DNode::setName(CString("vt6"));
HAnimJoint139.setCenter(new float[]{0.0059,1.3866,-0.08});
HAnimSegment& HAnimSegment140 =  HAnimSegment();
HAnimSegment140.setDEF(CString("hanim_t6"));
HAnimSegment140.X3DNode::setName(CString("t6"));
HAnimJoint139.addChildren(&HAnimSegment140);

HAnimJoint& HAnimJoint141 =  HAnimJoint();
HAnimJoint141.setDEF(CString("hanim_vt5"));
HAnimJoint141.X3DNode::setName(CString("vt5"));
HAnimJoint141.setCenter(new float[]{0.006,1.4102,-0.0745});
HAnimSegment& HAnimSegment142 =  HAnimSegment();
HAnimSegment142.setDEF(CString("hanim_t5"));
HAnimSegment142.X3DNode::setName(CString("t5"));
HAnimJoint141.addChildren(&HAnimSegment142);

HAnimJoint& HAnimJoint143 =  HAnimJoint();
HAnimJoint143.setDEF(CString("hanim_vt4"));
HAnimJoint143.X3DNode::setName(CString("vt4"));
HAnimJoint143.setCenter(new float[]{0.0061,1.432,-0.0675});
HAnimSegment& HAnimSegment144 =  HAnimSegment();
HAnimSegment144.setDEF(CString("hanim_t4"));
HAnimSegment144.X3DNode::setName(CString("t4"));
HAnimJoint143.addChildren(&HAnimSegment144);

HAnimJoint& HAnimJoint145 =  HAnimJoint();
HAnimJoint145.setDEF(CString("hanim_vt3"));
HAnimJoint145.X3DNode::setName(CString("vt3"));
HAnimJoint145.setCenter(new float[]{0.0062,1.4583,-0.057});
HAnimSegment& HAnimSegment146 =  HAnimSegment();
HAnimSegment146.setDEF(CString("hanim_t3"));
HAnimSegment146.X3DNode::setName(CString("t3"));
HAnimJoint145.addChildren(&HAnimSegment146);

HAnimJoint& HAnimJoint147 =  HAnimJoint();
HAnimJoint147.setDEF(CString("hanim_vt2"));
HAnimJoint147.X3DNode::setName(CString("vt2"));
HAnimJoint147.setCenter(new float[]{0.0063,1.4761,-0.0484});
HAnimSegment& HAnimSegment148 =  HAnimSegment();
HAnimSegment148.setDEF(CString("hanim_t2"));
HAnimSegment148.X3DNode::setName(CString("t2"));
HAnimJoint147.addChildren(&HAnimSegment148);

HAnimJoint& HAnimJoint149 =  HAnimJoint();
HAnimJoint149.setDEF(CString("hanim_vt1"));
HAnimJoint149.X3DNode::setName(CString("vt1"));
HAnimJoint149.setCenter(new float[]{0.0065,1.4951,-0.0387});
HAnimSegment& HAnimSegment150 =  HAnimSegment();
HAnimSegment150.setDEF(CString("hanim_t1"));
HAnimSegment150.X3DNode::setName(CString("t1"));
HAnimSite& HAnimSite151 =  HAnimSite();
HAnimSite151.setDEF(CString("hanim_suprasternale_pt"));
HAnimSite151.X3DNode::setName(CString("suprasternale_pt"));
HAnimSite151.setTranslation(new float[]{0.0084,1.4714,0.0551});
HAnimSegment150.addChild(&HAnimSite151);

HAnimSite& HAnimSite152 =  HAnimSite();
HAnimSite152.setDEF(CString("hanim_cervicale_pt"));
HAnimSite152.X3DNode::setName(CString("cervicale_pt"));
HAnimSite152.setTranslation(new float[]{0.0064,1.52,-0.0815});
HAnimSegment150.addChild(&HAnimSite152);

HAnimJoint149.addChildren(&HAnimSegment150);

HAnimJoint& HAnimJoint153 =  HAnimJoint();
HAnimJoint153.setDEF(CString("hanim_vc7"));
HAnimJoint153.X3DNode::setName(CString("vc7"));
HAnimJoint153.setCenter(new float[]{0.0066,1.5132,-0.0301});
HAnimSegment& HAnimSegment154 =  HAnimSegment();
HAnimSegment154.setDEF(CString("hanim_c7"));
HAnimSegment154.X3DNode::setName(CString("c7"));
HAnimSite& HAnimSite155 =  HAnimSite();
HAnimSite155.setDEF(CString("hanim_r_neck_base_pt"));
HAnimSite155.X3DNode::setName(CString("r_neck_base_pt"));
HAnimSite155.setTranslation(new float[]{-0.0419,1.5149,-0.022});
HAnimSegment154.addChild(&HAnimSite155);

HAnimSite& HAnimSite156 =  HAnimSite();
HAnimSite156.setDEF(CString("hanim_l_neck_base_pt"));
HAnimSite156.X3DNode::setName(CString("l_neck_base_pt"));
HAnimSite156.setTranslation(new float[]{0.0646,1.5141,-0.038});
HAnimSegment154.addChild(&HAnimSite156);

HAnimJoint153.addChildren(&HAnimSegment154);

HAnimJoint& HAnimJoint157 =  HAnimJoint();
HAnimJoint157.setDEF(CString("hanim_vc6"));
HAnimJoint157.X3DNode::setName(CString("vc6"));
HAnimJoint157.setCenter(new float[]{0.0066,1.5357,-0.0143});
HAnimSegment& HAnimSegment158 =  HAnimSegment();
HAnimSegment158.setDEF(CString("hanim_c6"));
HAnimSegment158.X3DNode::setName(CString("c6"));
HAnimJoint157.addChildren(&HAnimSegment158);

HAnimJoint& HAnimJoint159 =  HAnimJoint();
HAnimJoint159.setDEF(CString("hanim_vc5"));
HAnimJoint159.X3DNode::setName(CString("vc5"));
HAnimJoint159.setCenter(new float[]{0.0066,1.552,-0.0082});
HAnimSegment& HAnimSegment160 =  HAnimSegment();
HAnimSegment160.setDEF(CString("hanim_c5"));
HAnimSegment160.X3DNode::setName(CString("c5"));
HAnimJoint159.addChildren(&HAnimSegment160);

HAnimJoint& HAnimJoint161 =  HAnimJoint();
HAnimJoint161.setDEF(CString("hanim_vc4"));
HAnimJoint161.X3DNode::setName(CString("vc4"));
HAnimJoint161.setCenter(new float[]{0.0066,1.5662,-0.0084});
HAnimSegment& HAnimSegment162 =  HAnimSegment();
HAnimSegment162.setDEF(CString("hanim_c4"));
HAnimSegment162.X3DNode::setName(CString("c4"));
HAnimJoint161.addChildren(&HAnimSegment162);

HAnimJoint& HAnimJoint163 =  HAnimJoint();
HAnimJoint163.setDEF(CString("hanim_vc3"));
HAnimJoint163.X3DNode::setName(CString("vc3"));
HAnimJoint163.setCenter(new float[]{0.0066,1.58,-0.0103});
HAnimSegment& HAnimSegment164 =  HAnimSegment();
HAnimSegment164.setDEF(CString("hanim_c3"));
HAnimSegment164.X3DNode::setName(CString("c3"));
HAnimJoint163.addChildren(&HAnimSegment164);

HAnimJoint& HAnimJoint165 =  HAnimJoint();
HAnimJoint165.setDEF(CString("hanim_vc2"));
HAnimJoint165.X3DNode::setName(CString("vc2"));
HAnimJoint165.setCenter(new float[]{0.0066,1.5928,-0.0103});
HAnimSegment& HAnimSegment166 =  HAnimSegment();
HAnimSegment166.setDEF(CString("hanim_c2"));
HAnimSegment166.X3DNode::setName(CString("c2"));
HAnimJoint165.addChildren(&HAnimSegment166);

HAnimJoint& HAnimJoint167 =  HAnimJoint();
HAnimJoint167.setDEF(CString("hanim_vc1"));
HAnimJoint167.X3DNode::setName(CString("vc1"));
HAnimJoint167.setCenter(new float[]{0.0066,1.6144,-0.0034});
HAnimSegment& HAnimSegment168 =  HAnimSegment();
HAnimSegment168.setDEF(CString("hanim_c1"));
HAnimSegment168.X3DNode::setName(CString("c1"));
HAnimJoint167.addChildren(&HAnimSegment168);

HAnimJoint& HAnimJoint169 =  HAnimJoint();
HAnimJoint169.setDEF(CString("hanim_skullbase"));
HAnimJoint169.X3DNode::setName(CString("skullbase"));
HAnimJoint169.setCenter(new float[]{0.0044,1.6209,0.0236});
HAnimSegment& HAnimSegment170 =  HAnimSegment();
HAnimSegment170.setDEF(CString("hanim_skull"));
HAnimSegment170.X3DNode::setName(CString("skull"));
HAnimSite& HAnimSite171 =  HAnimSite();
HAnimSite171.setDEF(CString("hanim_skull_vertex_tip"));
HAnimSite171.X3DNode::setName(CString("skull_vertex_tip"));
HAnimSite171.setTranslation(new float[]{0.005,1.7504,0.0055});
HAnimSegment170.addChild(&HAnimSite171);

HAnimSite& HAnimSite172 =  HAnimSite();
HAnimSite172.setDEF(CString("hanim_sellion_pt"));
HAnimSite172.X3DNode::setName(CString("sellion_pt"));
HAnimSite172.setTranslation(new float[]{0.0058,1.6316,0.0852});
HAnimSegment170.addChild(&HAnimSite172);

HAnimSite& HAnimSite173 =  HAnimSite();
HAnimSite173.setDEF(CString("hanim_r_infraorbitale_pt"));
HAnimSite173.X3DNode::setName(CString("r_infraorbitale_pt"));
HAnimSite173.setTranslation(new float[]{-0.0237,1.6171,0.0752});
HAnimSegment170.addChild(&HAnimSite173);

HAnimSite& HAnimSite174 =  HAnimSite();
HAnimSite174.setDEF(CString("hanim_l_infraorbitale_pt"));
HAnimSite174.X3DNode::setName(CString("l_infraorbitale_pt"));
HAnimSite174.setTranslation(new float[]{0.0341,1.6171,0.0752});
HAnimSegment170.addChild(&HAnimSite174);

HAnimSite& HAnimSite175 =  HAnimSite();
HAnimSite175.setDEF(CString("hanim_supramenton_pt"));
HAnimSite175.X3DNode::setName(CString("supramenton_pt"));
HAnimSite175.setTranslation(new float[]{0.0061,1.541,0.0805});
HAnimSegment170.addChild(&HAnimSite175);

HAnimSite& HAnimSite176 =  HAnimSite();
HAnimSite176.setDEF(CString("hanim_r_tragion_pt"));
HAnimSite176.X3DNode::setName(CString("r_tragion_pt"));
HAnimSite176.setTranslation(new float[]{-0.0646,1.6347,0.0302});
HAnimSegment170.addChild(&HAnimSite176);

HAnimSite& HAnimSite177 =  HAnimSite();
HAnimSite177.setDEF(CString("hanim_r_gonion_pt"));
HAnimSite177.X3DNode::setName(CString("r_gonion_pt"));
HAnimSite177.setTranslation(new float[]{-0.052,1.5529,0.0347});
HAnimSegment170.addChild(&HAnimSite177);

HAnimSite& HAnimSite178 =  HAnimSite();
HAnimSite178.setDEF(CString("hanim_l_tragion_pt"));
HAnimSite178.X3DNode::setName(CString("l_tragion_pt"));
HAnimSite178.setTranslation(new float[]{0.0739,1.6348,0.0282});
HAnimSegment170.addChild(&HAnimSite178);

HAnimSite& HAnimSite179 =  HAnimSite();
HAnimSite179.setDEF(CString("hanim_l_gonion_pt"));
HAnimSite179.X3DNode::setName(CString("l_gonion_pt"));
HAnimSite179.setTranslation(new float[]{0.0631,1.553,0.033});
HAnimSegment170.addChild(&HAnimSite179);

HAnimSite& HAnimSite180 =  HAnimSite();
HAnimSite180.setDEF(CString("hanim_nuchale_pt"));
HAnimSite180.X3DNode::setName(CString("nuchale_pt"));
HAnimSite180.setTranslation(new float[]{0.0039,1.5972,-0.0796});
HAnimSegment170.addChild(&HAnimSite180);

HAnimJoint169.addChildren(&HAnimSegment170);

HAnimJoint& HAnimJoint181 =  HAnimJoint();
HAnimJoint181.setDEF(CString("hanim_l_eyeball_joint"));
HAnimJoint181.X3DNode::setName(CString("l_eyeball_joint"));
HAnimJoint181.setCenter(new float[]{0.0336,1.6332,0.0502});
HAnimSegment& HAnimSegment182 =  HAnimSegment();
HAnimSegment182.setDEF(CString("hanim_l_eyeball"));
HAnimSegment182.X3DNode::setName(CString("l_eyeball"));
HAnimSite& HAnimSite183 =  HAnimSite();
HAnimSite183.setDEF(CString("hanim_l_eyeball_site_view"));
HAnimSite183.X3DNode::setName(CString("l_eyeball_site_view"));
HAnimSite183.setTranslation(new float[]{0.034,1.64,0.05});
Viewpoint& Viewpoint184 =  Viewpoint();
Viewpoint184.setDEF(CString("hanim_l_eyeball_site_viewpoint"));
Viewpoint184.setDescription(CString("l_eyeball_site_viewpoint looking forward"));
Viewpoint184.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint184.setOrientation(new float[]{0.0,1.0,0.0,3.141593});
HAnimSite183.addChild(&Viewpoint184);

HAnimSegment182.addChild(&HAnimSite183);

HAnimJoint181.addChildren(&HAnimSegment182);

HAnimJoint169.addChildren(&HAnimJoint181);

HAnimJoint& HAnimJoint185 =  HAnimJoint();
HAnimJoint185.setDEF(CString("hanim_l_eyelid_joint"));
HAnimJoint185.X3DNode::setName(CString("l_eyelid_joint"));
HAnimJoint185.setCenter(new float[]{0.0336,1.6332,0.0502});
HAnimSegment& HAnimSegment186 =  HAnimSegment();
HAnimSegment186.setDEF(CString("hanim_l_eyelid"));
HAnimSegment186.X3DNode::setName(CString("l_eyelid"));
HAnimJoint185.addChildren(&HAnimSegment186);

HAnimJoint169.addChildren(&HAnimJoint185);

HAnimJoint& HAnimJoint187 =  HAnimJoint();
HAnimJoint187.setDEF(CString("hanim_l_eyebrow_joint"));
HAnimJoint187.X3DNode::setName(CString("l_eyebrow_joint"));
HAnimJoint187.setCenter(new float[]{0.0336,1.635,0.0506});
HAnimSegment& HAnimSegment188 =  HAnimSegment();
HAnimSegment188.setDEF(CString("hanim_l_eyebrow"));
HAnimSegment188.X3DNode::setName(CString("l_eyebrow"));
HAnimJoint187.addChildren(&HAnimSegment188);

HAnimJoint169.addChildren(&HAnimJoint187);

HAnimJoint& HAnimJoint189 =  HAnimJoint();
HAnimJoint189.setDEF(CString("hanim_r_eyeball_joint"));
HAnimJoint189.X3DNode::setName(CString("r_eyeball_joint"));
HAnimJoint189.setCenter(new float[]{-0.0336,1.6332,0.0502});
HAnimSegment& HAnimSegment190 =  HAnimSegment();
HAnimSegment190.setDEF(CString("hanim_r_eyeball"));
HAnimSegment190.X3DNode::setName(CString("r_eyeball"));
HAnimSite& HAnimSite191 =  HAnimSite();
HAnimSite191.setDEF(CString("hanim_r_eyeball_site_view"));
HAnimSite191.X3DNode::setName(CString("r_eyeball_site_view"));
HAnimSite191.setTranslation(new float[]{-0.034,1.64,0.05});
Viewpoint& Viewpoint192 =  Viewpoint();
Viewpoint192.setDEF(CString("hanim_r_eyeball_site_viewpoint"));
Viewpoint192.setDescription(CString("r_eyeball_site_viewpoint looking forward"));
Viewpoint192.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint192.setOrientation(new float[]{0.0,1.0,0.0,3.141593});
HAnimSite191.addChild(&Viewpoint192);

HAnimSegment190.addChild(&HAnimSite191);

HAnimJoint189.addChildren(&HAnimSegment190);

HAnimJoint169.addChildren(&HAnimJoint189);

HAnimJoint& HAnimJoint193 =  HAnimJoint();
HAnimJoint193.setDEF(CString("hanim_r_eyelid_joint"));
HAnimJoint193.X3DNode::setName(CString("r_eyelid_joint"));
HAnimJoint193.setCenter(new float[]{-0.0336,1.6332,0.0502});
HAnimSegment& HAnimSegment194 =  HAnimSegment();
HAnimSegment194.setDEF(CString("hanim_r_eyelid"));
HAnimSegment194.X3DNode::setName(CString("r_eyelid"));
HAnimJoint193.addChildren(&HAnimSegment194);

HAnimJoint169.addChildren(&HAnimJoint193);

HAnimJoint& HAnimJoint195 =  HAnimJoint();
HAnimJoint195.setDEF(CString("hanim_r_eyebrow_joint"));
HAnimJoint195.X3DNode::setName(CString("r_eyebrow_joint"));
HAnimJoint195.setCenter(new float[]{-0.0336,1.635,0.0506});
HAnimSegment& HAnimSegment196 =  HAnimSegment();
HAnimSegment196.setDEF(CString("hanim_r_eyebrow"));
HAnimSegment196.X3DNode::setName(CString("r_eyebrow"));
HAnimJoint195.addChildren(&HAnimSegment196);

HAnimJoint169.addChildren(&HAnimJoint195);

HAnimJoint& HAnimJoint197 =  HAnimJoint();
HAnimJoint197.setDEF(CString("hanim_temporomandibular"));
HAnimJoint197.X3DNode::setName(CString("temporomandibular"));
HAnimJoint197.setCenter(new float[]{0.0,1.63,0.015});
HAnimSegment& HAnimSegment198 =  HAnimSegment();
HAnimSegment198.setDEF(CString("hanim_jaw"));
HAnimSegment198.X3DNode::setName(CString("jaw"));
HAnimSite& HAnimSite199 =  HAnimSite();
HAnimSite199.setDEF(CString("hanim_temporomandibular_l_site_pt"));
HAnimSite199.X3DNode::setName(CString("temporomandibular_l_site_pt"));
HAnimSite199.setTranslation(new float[]{0.045,1.63,0.0});
HAnimSegment198.addChild(&HAnimSite199);

HAnimSite& HAnimSite200 =  HAnimSite();
HAnimSite200.setDEF(CString("hanim_temporomandibular_r_site_pt"));
HAnimSite200.X3DNode::setName(CString("temporomandibular_r_site_pt"));
HAnimSite200.setTranslation(new float[]{-0.045,1.63,0.0});
HAnimSegment198.addChild(&HAnimSite200);

HAnimJoint197.addChildren(&HAnimSegment198);

HAnimJoint169.addChildren(&HAnimJoint197);

HAnimJoint167.addChildren(&HAnimJoint169);

HAnimJoint165.addChildren(&HAnimJoint167);

HAnimJoint163.addChildren(&HAnimJoint165);

HAnimJoint161.addChildren(&HAnimJoint163);

HAnimJoint159.addChildren(&HAnimJoint161);

HAnimJoint157.addChildren(&HAnimJoint159);

HAnimJoint153.addChildren(&HAnimJoint157);

HAnimJoint149.addChildren(&HAnimJoint153);

HAnimJoint& HAnimJoint201 =  HAnimJoint();
HAnimJoint201.setDEF(CString("hanim_l_sternoclavicular"));
HAnimJoint201.X3DNode::setName(CString("l_sternoclavicular"));
HAnimJoint201.setCenter(new float[]{0.082,1.4488,-0.0353});
HAnimSegment& HAnimSegment202 =  HAnimSegment();
HAnimSegment202.setDEF(CString("hanim_l_clavicle"));
HAnimSegment202.X3DNode::setName(CString("l_clavicle"));
HAnimSite& HAnimSite203 =  HAnimSite();
HAnimSite203.setDEF(CString("hanim_l_clavicle_pt"));
HAnimSite203.X3DNode::setName(CString("l_clavicle_pt"));
HAnimSite203.setTranslation(new float[]{0.0271,1.4943,0.0394});
HAnimSegment202.addChild(&HAnimSite203);

HAnimSite& HAnimSite204 =  HAnimSite();
HAnimSite204.setDEF(CString("hanim_l_acromion_pt"));
HAnimSite204.X3DNode::setName(CString("l_acromion_pt"));
HAnimSite204.setTranslation(new float[]{0.2032,1.476,-0.049});
HAnimSegment202.addChild(&HAnimSite204);

HAnimSite& HAnimSite205 =  HAnimSite();
HAnimSite205.setDEF(CString("hanim_l_axilla_proximal_pt"));
HAnimSite205.X3DNode::setName(CString("l_axilla_proximal_pt"));
HAnimSite205.setTranslation(new float[]{0.1777,1.4065,-0.0075});
HAnimSegment202.addChild(&HAnimSite205);

HAnimSite& HAnimSite206 =  HAnimSite();
HAnimSite206.setDEF(CString("hanim_l_axilla_distal_pt"));
HAnimSite206.X3DNode::setName(CString("l_axilla_distal_pt"));
HAnimSite206.setTranslation(new float[]{0.1706,1.4072,-0.0875});
HAnimSegment202.addChild(&HAnimSite206);

HAnimJoint201.addChildren(&HAnimSegment202);

HAnimJoint& HAnimJoint207 =  HAnimJoint();
HAnimJoint207.setDEF(CString("hanim_l_acromioclavicular"));
HAnimJoint207.X3DNode::setName(CString("l_acromioclavicular"));
HAnimJoint207.setCenter(new float[]{0.0962,1.4269,-0.0424});
HAnimSegment& HAnimSegment208 =  HAnimSegment();
HAnimSegment208.setDEF(CString("hanim_l_scapula"));
HAnimSegment208.X3DNode::setName(CString("l_scapula"));
HAnimJoint207.addChildren(&HAnimSegment208);

HAnimJoint& HAnimJoint209 =  HAnimJoint();
HAnimJoint209.setDEF(CString("hanim_l_shoulder"));
HAnimJoint209.X3DNode::setName(CString("l_shoulder"));
HAnimJoint209.setCenter(new float[]{0.2029,1.4376,-0.0387});
HAnimSegment& HAnimSegment210 =  HAnimSegment();
HAnimSegment210.setDEF(CString("hanim_l_upperarm"));
HAnimSegment210.X3DNode::setName(CString("l_upperarm"));
HAnimSite& HAnimSite211 =  HAnimSite();
HAnimSite211.setDEF(CString("hanim_l_humeral_lateral_epicondyle_pt"));
HAnimSite211.X3DNode::setName(CString("l_humeral_lateral_epicondyle_pt"));
HAnimSite211.setTranslation(new float[]{0.228,1.1482,-0.11});
HAnimSegment210.addChild(&HAnimSite211);

HAnimJoint209.addChildren(&HAnimSegment210);

HAnimJoint& HAnimJoint212 =  HAnimJoint();
HAnimJoint212.setDEF(CString("hanim_l_elbow"));
HAnimJoint212.X3DNode::setName(CString("l_elbow"));
HAnimJoint212.setCenter(new float[]{0.2014,1.1357,-0.0682});
HAnimSegment& HAnimSegment213 =  HAnimSegment();
HAnimSegment213.setDEF(CString("hanim_l_forearm"));
HAnimSegment213.X3DNode::setName(CString("l_forearm"));
HAnimSite& HAnimSite214 =  HAnimSite();
HAnimSite214.setDEF(CString("hanim_l_radial_styloid_pt"));
HAnimSite214.X3DNode::setName(CString("l_radial_styloid_pt"));
HAnimSite214.setTranslation(new float[]{0.1901,0.8645,-0.0415});
HAnimSegment213.addChild(&HAnimSite214);

HAnimSite& HAnimSite215 =  HAnimSite();
HAnimSite215.setDEF(CString("hanim_l_olecranon_pt"));
HAnimSite215.X3DNode::setName(CString("l_olecranon_pt"));
HAnimSite215.setTranslation(new float[]{0.1962,1.1375,-0.1123});
HAnimSegment213.addChild(&HAnimSite215);

HAnimSite& HAnimSite216 =  HAnimSite();
HAnimSite216.setDEF(CString("hanim_l_humeral_medial_epicondyle_pt"));
HAnimSite216.X3DNode::setName(CString("l_humeral_medial_epicondyle_pt"));
HAnimSite216.setTranslation(new float[]{0.1735,1.1272,-0.1113});
HAnimSegment213.addChild(&HAnimSite216);

HAnimSite& HAnimSite217 =  HAnimSite();
HAnimSite217.setDEF(CString("hanim_l_radiale_pt"));
HAnimSite217.X3DNode::setName(CString("l_radiale_pt"));
HAnimSite217.setTranslation(new float[]{0.2182,1.1212,-0.1167});
HAnimSegment213.addChild(&HAnimSite217);

HAnimJoint212.addChildren(&HAnimSegment213);

HAnimJoint& HAnimJoint218 =  HAnimJoint();
HAnimJoint218.setDEF(CString("hanim_l_radiocarpal"));
HAnimJoint218.X3DNode::setName(CString("l_radiocarpal"));
HAnimJoint218.setCenter(new float[]{0.1984,0.8663,-0.0583});
HAnimSegment& HAnimSegment219 =  HAnimSegment();
HAnimSegment219.setDEF(CString("hanim_l_carpal"));
HAnimSegment219.X3DNode::setName(CString("l_carpal"));
HAnimSite& HAnimSite220 =  HAnimSite();
HAnimSite220.setDEF(CString("hanim_l_metacarpal_phalanx_2_pt"));
HAnimSite220.X3DNode::setName(CString("l_metacarpal_phalanx_2_pt"));
HAnimSite220.setTranslation(new float[]{0.2009,0.8139,-0.0237});
HAnimSegment219.addChild(&HAnimSite220);

HAnimSite& HAnimSite221 =  HAnimSite();
HAnimSite221.setDEF(CString("hanim_l_ulnar_styloid_pt"));
HAnimSite221.X3DNode::setName(CString("l_ulnar_styloid_pt"));
HAnimSite221.setTranslation(new float[]{0.2142,0.8529,-0.0648});
HAnimSegment219.addChild(&HAnimSite221);

HAnimSite& HAnimSite222 =  HAnimSite();
HAnimSite222.setDEF(CString("hanim_l_metacarpal_phalanx_5_pt"));
HAnimSite222.X3DNode::setName(CString("l_metacarpal_phalanx_5_pt"));
HAnimSite222.setTranslation(new float[]{0.1929,0.786,-0.1122});
HAnimSegment219.addChild(&HAnimSite222);

HAnimSite& HAnimSite223 =  HAnimSite();
HAnimSite223.setDEF(CString("hanim_l_hand_front_view"));
HAnimSite223.X3DNode::setName(CString("l_hand_front_view"));
HAnimSite223.setTranslation(new float[]{0.3,0.75,0.45});
Viewpoint& Viewpoint224 =  Viewpoint();
Viewpoint224.setDEF(CString("hanim_l_hand_front_viewpoint"));
Viewpoint224.setDescription(CString("left hand front"));
Viewpoint224.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint224.setCenterOfRotation(new float[]{0.0,0.7,0.0});
HAnimSite223.addChild(&Viewpoint224);

HAnimSegment219.addChild(&HAnimSite223);

HAnimJoint218.addChildren(&HAnimSegment219);

HAnimJoint& HAnimJoint225 =  HAnimJoint();
HAnimJoint225.setDEF(CString("hanim_l_carpometacarpal_1"));
HAnimJoint225.X3DNode::setName(CString("l_carpometacarpal_1"));
HAnimJoint225.setCenter(new float[]{0.1924,0.8472,-0.0534});
HAnimSegment& HAnimSegment226 =  HAnimSegment();
HAnimSegment226.setDEF(CString("hanim_l_metacarpal_1"));
HAnimSegment226.X3DNode::setName(CString("l_metacarpal_1"));
HAnimJoint225.addChildren(&HAnimSegment226);

HAnimJoint& HAnimJoint227 =  HAnimJoint();
HAnimJoint227.setDEF(CString("hanim_l_metacarpophalangeal_1"));
HAnimJoint227.X3DNode::setName(CString("l_metacarpophalangeal_1"));
HAnimJoint227.setCenter(new float[]{0.1951,0.8226,0.0246});
HAnimSegment& HAnimSegment228 =  HAnimSegment();
HAnimSegment228.setDEF(CString("hanim_l_carpal_proximal_phalanx_1"));
HAnimSegment228.X3DNode::setName(CString("l_carpal_proximal_phalanx_1"));
HAnimJoint227.addChildren(&HAnimSegment228);

HAnimJoint& HAnimJoint229 =  HAnimJoint();
HAnimJoint229.setDEF(CString("hanim_l_carpal_interphalangeal_1"));
HAnimJoint229.X3DNode::setName(CString("l_carpal_interphalangeal_1"));
HAnimJoint229.setCenter(new float[]{0.1955,0.8159,0.0464});
HAnimSegment& HAnimSegment230 =  HAnimSegment();
HAnimSegment230.setDEF(CString("hanim_l_carpal_distal_phalanx_1"));
HAnimSegment230.X3DNode::setName(CString("l_carpal_distal_phalanx_1"));
HAnimSite& HAnimSite231 =  HAnimSite();
HAnimSite231.setDEF(CString("hanim_l_carpal_distal_phalanx_1_tip"));
HAnimSite231.X3DNode::setName(CString("l_carpal_distal_phalanx_1_tip"));
HAnimSite231.setTranslation(new float[]{0.1982,0.8061,0.0759});
HAnimSegment230.addChild(&HAnimSite231);

HAnimJoint229.addChildren(&HAnimSegment230);

HAnimJoint227.addChildren(&HAnimJoint229);

HAnimJoint225.addChildren(&HAnimJoint227);

HAnimJoint218.addChildren(&HAnimJoint225);

HAnimJoint& HAnimJoint232 =  HAnimJoint();
HAnimJoint232.setDEF(CString("hanim_l_carpometacarpal_2"));
HAnimJoint232.X3DNode::setName(CString("l_carpometacarpal_2"));
HAnimJoint232.setCenter(new float[]{0.1983,0.8024,-0.028});
HAnimSegment& HAnimSegment233 =  HAnimSegment();
HAnimSegment233.setDEF(CString("hanim_l_metacarpal_2"));
HAnimSegment233.X3DNode::setName(CString("l_metacarpal_2"));
HAnimJoint232.addChildren(&HAnimSegment233);

HAnimJoint& HAnimJoint234 =  HAnimJoint();
HAnimJoint234.setDEF(CString("hanim_l_metacarpophalangeal_2"));
HAnimJoint234.X3DNode::setName(CString("l_metacarpophalangeal_2"));
HAnimJoint234.setCenter(new float[]{0.1983,0.7815,-0.028});
HAnimSegment& HAnimSegment235 =  HAnimSegment();
HAnimSegment235.setDEF(CString("hanim_l_carpal_proximal_phalanx_2"));
HAnimSegment235.X3DNode::setName(CString("l_carpal_proximal_phalanx_2"));
HAnimJoint234.addChildren(&HAnimSegment235);

HAnimJoint& HAnimJoint236 =  HAnimJoint();
HAnimJoint236.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_2"));
HAnimJoint236.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_2"));
HAnimJoint236.setCenter(new float[]{0.2017,0.7363,-0.0248});
HAnimSegment& HAnimSegment237 =  HAnimSegment();
HAnimSegment237.setDEF(CString("hanim_l_carpal_middle_phalanx_2"));
HAnimSegment237.X3DNode::setName(CString("l_carpal_middle_phalanx_2"));
HAnimJoint236.addChildren(&HAnimSegment237);

HAnimJoint& HAnimJoint238 =  HAnimJoint();
HAnimJoint238.setDEF(CString("hanim_l_carpal_distal_interphalangeal_2"));
HAnimJoint238.X3DNode::setName(CString("l_carpal_distal_interphalangeal_2"));
HAnimJoint238.setCenter(new float[]{0.2028,0.7139,-0.0236});
HAnimSegment& HAnimSegment239 =  HAnimSegment();
HAnimSegment239.setDEF(CString("hanim_l_carpal_distal_phalanx_2"));
HAnimSegment239.X3DNode::setName(CString("l_carpal_distal_phalanx_2"));
HAnimSite& HAnimSite240 =  HAnimSite();
HAnimSite240.setDEF(CString("hanim_l_carpal_distal_phalanx_2_tip"));
HAnimSite240.X3DNode::setName(CString("l_carpal_distal_phalanx_2_tip"));
HAnimSite240.setTranslation(new float[]{0.2089,0.6858,-0.0245});
HAnimSegment239.addChild(&HAnimSite240);

HAnimSite& HAnimSite241 =  HAnimSite();
HAnimSite241.setDEF(CString("hanim_l_dactylion_pt"));
HAnimSite241.X3DNode::setName(CString("l_dactylion_pt"));
HAnimSite241.setTranslation(new float[]{0.2056,0.6743,-0.0482});
HAnimSegment239.addChild(&HAnimSite241);

HAnimJoint238.addChildren(&HAnimSegment239);

HAnimJoint236.addChildren(&HAnimJoint238);

HAnimJoint234.addChildren(&HAnimJoint236);

HAnimJoint232.addChildren(&HAnimJoint234);

HAnimJoint218.addChildren(&HAnimJoint232);

HAnimJoint& HAnimJoint242 =  HAnimJoint();
HAnimJoint242.setDEF(CString("hanim_l_carpometacarpal_3"));
HAnimJoint242.X3DNode::setName(CString("l_carpometacarpal_3"));
HAnimJoint242.setCenter(new float[]{0.1987,0.8029,-0.053});
HAnimSegment& HAnimSegment243 =  HAnimSegment();
HAnimSegment243.setDEF(CString("hanim_l_metacarpal_3"));
HAnimSegment243.X3DNode::setName(CString("l_metacarpal_3"));
HAnimJoint242.addChildren(&HAnimSegment243);

HAnimJoint& HAnimJoint244 =  HAnimJoint();
HAnimJoint244.setDEF(CString("hanim_l_metacarpophalangeal_3"));
HAnimJoint244.X3DNode::setName(CString("l_metacarpophalangeal_3"));
HAnimJoint244.setCenter(new float[]{0.1987,0.7818,-0.053});
HAnimSegment& HAnimSegment245 =  HAnimSegment();
HAnimSegment245.setDEF(CString("hanim_l_carpal_proximal_phalanx_3"));
HAnimSegment245.X3DNode::setName(CString("l_carpal_proximal_phalanx_3"));
HAnimJoint244.addChildren(&HAnimSegment245);

HAnimJoint& HAnimJoint246 =  HAnimJoint();
HAnimJoint246.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_3"));
HAnimJoint246.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_3"));
HAnimJoint246.setCenter(new float[]{0.2013,0.7273,-0.0503});
HAnimSegment& HAnimSegment247 =  HAnimSegment();
HAnimSegment247.setDEF(CString("hanim_l_carpal_middle_phalanx_3"));
HAnimSegment247.X3DNode::setName(CString("l_carpal_middle_phalanx_3"));
HAnimJoint246.addChildren(&HAnimSegment247);

HAnimJoint& HAnimJoint248 =  HAnimJoint();
HAnimJoint248.setDEF(CString("hanim_l_carpal_distal_interphalangeal_3"));
HAnimJoint248.X3DNode::setName(CString("l_carpal_distal_interphalangeal_3"));
HAnimJoint248.setCenter(new float[]{0.2026,0.7011,-0.0494});
HAnimSegment& HAnimSegment249 =  HAnimSegment();
HAnimSegment249.setDEF(CString("hanim_l_carpal_distal_phalanx_3"));
HAnimSegment249.X3DNode::setName(CString("l_carpal_distal_phalanx_3"));
HAnimSite& HAnimSite250 =  HAnimSite();
HAnimSite250.setDEF(CString("hanim_l_carpal_distal_phalanx_3_tip"));
HAnimSite250.X3DNode::setName(CString("l_carpal_distal_phalanx_3_tip"));
HAnimSite250.setTranslation(new float[]{0.208,0.6731,-0.0491});
HAnimSegment249.addChild(&HAnimSite250);

HAnimJoint248.addChildren(&HAnimSegment249);

HAnimJoint246.addChildren(&HAnimJoint248);

HAnimJoint244.addChildren(&HAnimJoint246);

HAnimJoint242.addChildren(&HAnimJoint244);

HAnimJoint218.addChildren(&HAnimJoint242);

HAnimJoint& HAnimJoint251 =  HAnimJoint();
HAnimJoint251.setDEF(CString("hanim_l_carpometacarpal_4"));
HAnimJoint251.X3DNode::setName(CString("l_carpometacarpal_4"));
HAnimJoint251.setCenter(new float[]{0.1956,0.8019,-0.0794});
HAnimSegment& HAnimSegment252 =  HAnimSegment();
HAnimSegment252.setDEF(CString("hanim_l_metacarpal_4"));
HAnimSegment252.X3DNode::setName(CString("l_metacarpal_4"));
HAnimJoint251.addChildren(&HAnimSegment252);

HAnimJoint& HAnimJoint253 =  HAnimJoint();
HAnimJoint253.setDEF(CString("hanim_l_metacarpophalangeal_4"));
HAnimJoint253.X3DNode::setName(CString("l_metacarpophalangeal_4"));
HAnimJoint253.setCenter(new float[]{0.1956,0.7815,-0.0794});
HAnimSegment& HAnimSegment254 =  HAnimSegment();
HAnimSegment254.setDEF(CString("hanim_l_carpal_proximal_phalanx_4"));
HAnimSegment254.X3DNode::setName(CString("l_carpal_proximal_phalanx_4"));
HAnimJoint253.addChildren(&HAnimSegment254);

HAnimJoint& HAnimJoint255 =  HAnimJoint();
HAnimJoint255.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_4"));
HAnimJoint255.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_4"));
HAnimJoint255.setCenter(new float[]{0.1973,0.7287,-0.0777});
HAnimSegment& HAnimSegment256 =  HAnimSegment();
HAnimSegment256.setDEF(CString("hanim_l_carpal_middle_phalanx_4"));
HAnimSegment256.X3DNode::setName(CString("l_carpal_middle_phalanx_4"));
HAnimJoint255.addChildren(&HAnimSegment256);

HAnimJoint& HAnimJoint257 =  HAnimJoint();
HAnimJoint257.setDEF(CString("hanim_l_carpal_distal_interphalangeal_4"));
HAnimJoint257.X3DNode::setName(CString("l_carpal_distal_interphalangeal_4"));
HAnimJoint257.setCenter(new float[]{0.1983,0.7045,-0.0767});
HAnimSegment& HAnimSegment258 =  HAnimSegment();
HAnimSegment258.setDEF(CString("hanim_l_carpal_distal_phalanx_4"));
HAnimSegment258.X3DNode::setName(CString("l_carpal_distal_phalanx_4"));
HAnimSite& HAnimSite259 =  HAnimSite();
HAnimSite259.setDEF(CString("hanim_l_carpal_distal_phalanx_4_tip"));
HAnimSite259.X3DNode::setName(CString("l_carpal_distal_phalanx_4_tip"));
HAnimSite259.setTranslation(new float[]{0.2035,0.675,-0.0756});
HAnimSegment258.addChild(&HAnimSite259);

HAnimJoint257.addChildren(&HAnimSegment258);

HAnimJoint255.addChildren(&HAnimJoint257);

HAnimJoint253.addChildren(&HAnimJoint255);

HAnimJoint251.addChildren(&HAnimJoint253);

HAnimJoint218.addChildren(&HAnimJoint251);

HAnimJoint& HAnimJoint260 =  HAnimJoint();
HAnimJoint260.setDEF(CString("hanim_l_carpometacarpal_5"));
HAnimJoint260.X3DNode::setName(CString("l_carpometacarpal_5"));
HAnimJoint260.setCenter(new float[]{0.1925,0.8066,-0.1036});
HAnimSegment& HAnimSegment261 =  HAnimSegment();
HAnimSegment261.setDEF(CString("hanim_l_metacarpal_5"));
HAnimSegment261.X3DNode::setName(CString("l_metacarpal_5"));
HAnimJoint260.addChildren(&HAnimSegment261);

HAnimJoint& HAnimJoint262 =  HAnimJoint();
HAnimJoint262.setDEF(CString("hanim_l_metacarpophalangeal_5"));
HAnimJoint262.X3DNode::setName(CString("l_metacarpophalangeal_5"));
HAnimJoint262.setCenter(new float[]{0.1925,0.7866,-0.1036});
HAnimSegment& HAnimSegment263 =  HAnimSegment();
HAnimSegment263.setDEF(CString("hanim_l_carpal_proximal_phalanx_5"));
HAnimSegment263.X3DNode::setName(CString("l_carpal_proximal_phalanx_5"));
HAnimJoint262.addChildren(&HAnimSegment263);

HAnimJoint& HAnimJoint264 =  HAnimJoint();
HAnimJoint264.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_5"));
HAnimJoint264.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_5"));
HAnimJoint264.setCenter(new float[]{0.1938,0.7452,-0.1024});
HAnimSegment& HAnimSegment265 =  HAnimSegment();
HAnimSegment265.setDEF(CString("hanim_l_carpal_middle_phalanx_5"));
HAnimSegment265.X3DNode::setName(CString("l_carpal_middle_phalanx_5"));
HAnimJoint264.addChildren(&HAnimSegment265);

HAnimJoint& HAnimJoint266 =  HAnimJoint();
HAnimJoint266.setDEF(CString("hanim_l_carpal_distal_interphalangeal_5"));
HAnimJoint266.X3DNode::setName(CString("l_carpal_distal_interphalangeal_5"));
HAnimJoint266.setCenter(new float[]{0.1948,0.7277,-0.1017});
HAnimSegment& HAnimSegment267 =  HAnimSegment();
HAnimSegment267.setDEF(CString("hanim_l_carpal_distal_phalanx_5"));
HAnimSegment267.X3DNode::setName(CString("l_carpal_distal_phalanx_5"));
HAnimSite& HAnimSite268 =  HAnimSite();
HAnimSite268.setDEF(CString("hanim_l_carpal_distal_phalanx_5_tip"));
HAnimSite268.X3DNode::setName(CString("l_carpal_distal_phalanx_5_tip"));
HAnimSite268.setTranslation(new float[]{0.2014,0.7009,-0.1012});
HAnimSegment267.addChild(&HAnimSite268);

HAnimJoint266.addChildren(&HAnimSegment267);

HAnimJoint264.addChildren(&HAnimJoint266);

HAnimJoint262.addChildren(&HAnimJoint264);

HAnimJoint260.addChildren(&HAnimJoint262);

HAnimJoint218.addChildren(&HAnimJoint260);

HAnimJoint212.addChildren(&HAnimJoint218);

HAnimJoint209.addChildren(&HAnimJoint212);

HAnimJoint207.addChildren(&HAnimJoint209);

HAnimJoint201.addChildren(&HAnimJoint207);

HAnimJoint149.addChildren(&HAnimJoint201);

HAnimJoint& HAnimJoint269 =  HAnimJoint();
HAnimJoint269.setDEF(CString("hanim_r_sternoclavicular"));
HAnimJoint269.X3DNode::setName(CString("r_sternoclavicular"));
HAnimJoint269.setCenter(new float[]{-0.082,1.4488,-0.0353});
HAnimSegment& HAnimSegment270 =  HAnimSegment();
HAnimSegment270.setDEF(CString("hanim_r_clavicle"));
HAnimSegment270.X3DNode::setName(CString("r_clavicle"));
HAnimSite& HAnimSite271 =  HAnimSite();
HAnimSite271.setDEF(CString("hanim_r_clavicle_pt"));
HAnimSite271.X3DNode::setName(CString("r_clavicle_pt"));
HAnimSite271.setTranslation(new float[]{-0.0115,1.4943,0.04});
HAnimSegment270.addChild(&HAnimSite271);

HAnimSite& HAnimSite272 =  HAnimSite();
HAnimSite272.setDEF(CString("hanim_r_acromion_pt"));
HAnimSite272.X3DNode::setName(CString("r_acromion_pt"));
HAnimSite272.setTranslation(new float[]{-0.1905,1.4791,-0.0431});
HAnimSegment270.addChild(&HAnimSite272);

HAnimSite& HAnimSite273 =  HAnimSite();
HAnimSite273.setDEF(CString("hanim_r_axilla_proximal_pt"));
HAnimSite273.X3DNode::setName(CString("r_axilla_proximal_pt"));
HAnimSite273.setTranslation(new float[]{-0.1626,1.4072,-0.0031});
HAnimSegment270.addChild(&HAnimSite273);

HAnimSite& HAnimSite274 =  HAnimSite();
HAnimSite274.setDEF(CString("hanim_r_axilla_distal_pt"));
HAnimSite274.X3DNode::setName(CString("r_axilla_distal_pt"));
HAnimSite274.setTranslation(new float[]{-0.1603,1.4098,-0.0826});
HAnimSegment270.addChild(&HAnimSite274);

HAnimJoint269.addChildren(&HAnimSegment270);

HAnimJoint& HAnimJoint275 =  HAnimJoint();
HAnimJoint275.setDEF(CString("hanim_r_acromioclavicular"));
HAnimJoint275.X3DNode::setName(CString("r_acromioclavicular"));
HAnimJoint275.setCenter(new float[]{-0.0962,1.4269,-0.0424});
HAnimSegment& HAnimSegment276 =  HAnimSegment();
HAnimSegment276.setDEF(CString("hanim_r_scapula"));
HAnimSegment276.X3DNode::setName(CString("r_scapula"));
HAnimJoint275.addChildren(&HAnimSegment276);

HAnimJoint& HAnimJoint277 =  HAnimJoint();
HAnimJoint277.setDEF(CString("hanim_r_shoulder"));
HAnimJoint277.X3DNode::setName(CString("r_shoulder"));
HAnimJoint277.setCenter(new float[]{-0.2029,1.4376,-0.0387});
HAnimSegment& HAnimSegment278 =  HAnimSegment();
HAnimSegment278.setDEF(CString("hanim_r_upperarm"));
HAnimSegment278.X3DNode::setName(CString("r_upperarm"));
HAnimSite& HAnimSite279 =  HAnimSite();
HAnimSite279.setDEF(CString("hanim_r_humeral_lateral_epicondyle_pt"));
HAnimSite279.X3DNode::setName(CString("r_humeral_lateral_epicondyle_pt"));
HAnimSite279.setTranslation(new float[]{-0.2224,1.1517,-0.1033});
HAnimSegment278.addChild(&HAnimSite279);

HAnimJoint277.addChildren(&HAnimSegment278);

HAnimJoint& HAnimJoint280 =  HAnimJoint();
HAnimJoint280.setDEF(CString("hanim_r_elbow"));
HAnimJoint280.X3DNode::setName(CString("r_elbow"));
HAnimJoint280.setCenter(new float[]{-0.2014,1.1357,-0.0682});
HAnimSegment& HAnimSegment281 =  HAnimSegment();
HAnimSegment281.setDEF(CString("hanim_r_forearm"));
HAnimSegment281.X3DNode::setName(CString("r_forearm"));
HAnimSite& HAnimSite282 =  HAnimSite();
HAnimSite282.setDEF(CString("hanim_r_radial_styloid_pt"));
HAnimSite282.X3DNode::setName(CString("r_radial_styloid_pt"));
HAnimSite282.setTranslation(new float[]{-0.1884,0.8676,-0.036});
HAnimSegment281.addChild(&HAnimSite282);

HAnimSite& HAnimSite283 =  HAnimSite();
HAnimSite283.setDEF(CString("hanim_r_olecranon_pt"));
HAnimSite283.X3DNode::setName(CString("r_olecranon_pt"));
HAnimSite283.setTranslation(new float[]{-0.1907,1.1405,-0.1065});
HAnimSegment281.addChild(&HAnimSite283);

HAnimSite& HAnimSite284 =  HAnimSite();
HAnimSite284.setDEF(CString("hanim_r_humeral_medial_epicondyle_pt"));
HAnimSite284.X3DNode::setName(CString("r_humeral_medial_epicondyle_pt"));
HAnimSite284.setTranslation(new float[]{-0.168,1.1298,-0.1062});
HAnimSegment281.addChild(&HAnimSite284);

HAnimSite& HAnimSite285 =  HAnimSite();
HAnimSite285.setDEF(CString("hanim_r_radiale_pt"));
HAnimSite285.X3DNode::setName(CString("r_radiale_pt"));
HAnimSite285.setTranslation(new float[]{-0.213,1.1305,-0.1091});
HAnimSegment281.addChild(&HAnimSite285);

HAnimJoint280.addChildren(&HAnimSegment281);

HAnimJoint& HAnimJoint286 =  HAnimJoint();
HAnimJoint286.setDEF(CString("hanim_r_radiocarpal"));
HAnimJoint286.X3DNode::setName(CString("r_radiocarpal"));
HAnimJoint286.setCenter(new float[]{-0.1984,0.8663,-0.0583});
HAnimSegment& HAnimSegment287 =  HAnimSegment();
HAnimSegment287.setDEF(CString("hanim_r_carpal"));
HAnimSegment287.X3DNode::setName(CString("r_carpal"));
HAnimSite& HAnimSite288 =  HAnimSite();
HAnimSite288.setDEF(CString("hanim_r_metacarpal_phalanx_2_pt"));
HAnimSite288.X3DNode::setName(CString("r_metacarpal_phalanx_2_pt"));
HAnimSite288.setTranslation(new float[]{-0.1977,0.8169,-0.0177});
HAnimSegment287.addChild(&HAnimSite288);

HAnimSite& HAnimSite289 =  HAnimSite();
HAnimSite289.setDEF(CString("hanim_r_ulnar_styloid_pt"));
HAnimSite289.X3DNode::setName(CString("r_ulnar_styloid_pt"));
HAnimSite289.setTranslation(new float[]{-0.2117,0.8562,-0.0584});
HAnimSegment287.addChild(&HAnimSite289);

HAnimSite& HAnimSite290 =  HAnimSite();
HAnimSite290.setDEF(CString("hanim_r_metacarpal_phalanx_5_pt"));
HAnimSite290.X3DNode::setName(CString("r_metacarpal_phalanx_5_pt"));
HAnimSite290.setTranslation(new float[]{-0.1929,0.789,-0.1064});
HAnimSegment287.addChild(&HAnimSite290);

HAnimSite& HAnimSite291 =  HAnimSite();
HAnimSite291.setDEF(CString("hanim_r_hand_front_view"));
HAnimSite291.X3DNode::setName(CString("r_hand_front_view"));
HAnimSite291.setTranslation(new float[]{-0.3,0.75,0.45});
Viewpoint& Viewpoint292 =  Viewpoint();
Viewpoint292.setDEF(CString("hanim_r_hand_front_viewpoint"));
Viewpoint292.setDescription(CString("right hand front"));
Viewpoint292.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint292.setCenterOfRotation(new float[]{0.0,0.7,0.0});
HAnimSite291.addChild(&Viewpoint292);

HAnimSegment287.addChild(&HAnimSite291);

HAnimJoint286.addChildren(&HAnimSegment287);

HAnimJoint& HAnimJoint293 =  HAnimJoint();
HAnimJoint293.setDEF(CString("hanim_r_carpometacarpal_1"));
HAnimJoint293.X3DNode::setName(CString("r_carpometacarpal_1"));
HAnimJoint293.setCenter(new float[]{-0.1924,0.8472,-0.0534});
HAnimSegment& HAnimSegment294 =  HAnimSegment();
HAnimSegment294.setDEF(CString("hanim_r_metacarpal_1"));
HAnimSegment294.X3DNode::setName(CString("r_metacarpal_1"));
HAnimJoint293.addChildren(&HAnimSegment294);

HAnimJoint& HAnimJoint295 =  HAnimJoint();
HAnimJoint295.setDEF(CString("hanim_r_metacarpophalangeal_1"));
HAnimJoint295.X3DNode::setName(CString("r_metacarpophalangeal_1"));
HAnimJoint295.setCenter(new float[]{-0.1951,0.8226,0.0246});
HAnimSegment& HAnimSegment296 =  HAnimSegment();
HAnimSegment296.setDEF(CString("hanim_r_carpal_proximal_phalanx_1"));
HAnimSegment296.X3DNode::setName(CString("r_carpal_proximal_phalanx_1"));
HAnimJoint295.addChildren(&HAnimSegment296);

HAnimJoint& HAnimJoint297 =  HAnimJoint();
HAnimJoint297.setDEF(CString("hanim_r_carpal_interphalangeal_1"));
HAnimJoint297.X3DNode::setName(CString("r_carpal_interphalangeal_1"));
HAnimJoint297.setCenter(new float[]{-0.1955,0.8159,0.0464});
HAnimSegment& HAnimSegment298 =  HAnimSegment();
HAnimSegment298.setDEF(CString("hanim_r_carpal_distal_phalanx_1"));
HAnimSegment298.X3DNode::setName(CString("r_carpal_distal_phalanx_1"));
HAnimSite& HAnimSite299 =  HAnimSite();
HAnimSite299.setDEF(CString("hanim_r_carpal_distal_phalanx_1_tip"));
HAnimSite299.X3DNode::setName(CString("r_carpal_distal_phalanx_1_tip"));
HAnimSite299.setTranslation(new float[]{-0.1869,0.809,0.082});
HAnimSegment298.addChild(&HAnimSite299);

HAnimJoint297.addChildren(&HAnimSegment298);

HAnimJoint295.addChildren(&HAnimJoint297);

HAnimJoint293.addChildren(&HAnimJoint295);

HAnimJoint286.addChildren(&HAnimJoint293);

HAnimJoint& HAnimJoint300 =  HAnimJoint();
HAnimJoint300.setDEF(CString("hanim_r_carpometacarpal_2"));
HAnimJoint300.X3DNode::setName(CString("r_carpometacarpal_2"));
HAnimJoint300.setCenter(new float[]{-0.1983,0.8024,-0.028});
HAnimSegment& HAnimSegment301 =  HAnimSegment();
HAnimSegment301.setDEF(CString("hanim_r_metacarpal_2"));
HAnimSegment301.X3DNode::setName(CString("r_metacarpal_2"));
HAnimJoint300.addChildren(&HAnimSegment301);

HAnimJoint& HAnimJoint302 =  HAnimJoint();
HAnimJoint302.setDEF(CString("hanim_r_metacarpophalangeal_2"));
HAnimJoint302.X3DNode::setName(CString("r_metacarpophalangeal_2"));
HAnimJoint302.setCenter(new float[]{-0.1983,0.7815,-0.028});
HAnimSegment& HAnimSegment303 =  HAnimSegment();
HAnimSegment303.setDEF(CString("hanim_r_carpal_proximal_phalanx_2"));
HAnimSegment303.X3DNode::setName(CString("r_carpal_proximal_phalanx_2"));
HAnimJoint302.addChildren(&HAnimSegment303);

HAnimJoint& HAnimJoint304 =  HAnimJoint();
HAnimJoint304.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_2"));
HAnimJoint304.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_2"));
HAnimJoint304.setCenter(new float[]{-0.2017,0.7363,-0.0248});
HAnimSegment& HAnimSegment305 =  HAnimSegment();
HAnimSegment305.setDEF(CString("hanim_r_carpal_middle_phalanx_2"));
HAnimSegment305.X3DNode::setName(CString("r_carpal_middle_phalanx_2"));
HAnimJoint304.addChildren(&HAnimSegment305);

HAnimJoint& HAnimJoint306 =  HAnimJoint();
HAnimJoint306.setDEF(CString("hanim_r_carpal_distal_interphalangeal_2"));
HAnimJoint306.X3DNode::setName(CString("r_carpal_distal_interphalangeal_2"));
HAnimJoint306.setCenter(new float[]{-0.2028,0.7139,-0.0236});
HAnimSegment& HAnimSegment307 =  HAnimSegment();
HAnimSegment307.setDEF(CString("hanim_r_carpal_distal_phalanx_2"));
HAnimSegment307.X3DNode::setName(CString("r_carpal_distal_phalanx_2"));
HAnimSite& HAnimSite308 =  HAnimSite();
HAnimSite308.setDEF(CString("hanim_r_carpal_distal_phalanx_2_tip"));
HAnimSite308.X3DNode::setName(CString("r_carpal_distal_phalanx_2_tip"));
HAnimSite308.setTranslation(new float[]{-0.198,0.6883,-0.018});
HAnimSegment307.addChild(&HAnimSite308);

HAnimSite& HAnimSite309 =  HAnimSite();
HAnimSite309.setDEF(CString("hanim_r_dactylion_pt"));
HAnimSite309.X3DNode::setName(CString("r_dactylion_pt"));
HAnimSite309.setTranslation(new float[]{-0.1941,0.6772,-0.0423});
HAnimSegment307.addChild(&HAnimSite309);

HAnimJoint306.addChildren(&HAnimSegment307);

HAnimJoint304.addChildren(&HAnimJoint306);

HAnimJoint302.addChildren(&HAnimJoint304);

HAnimJoint300.addChildren(&HAnimJoint302);

HAnimJoint286.addChildren(&HAnimJoint300);

HAnimJoint& HAnimJoint310 =  HAnimJoint();
HAnimJoint310.setDEF(CString("hanim_r_carpometacarpal_3"));
HAnimJoint310.X3DNode::setName(CString("r_carpometacarpal_3"));
HAnimJoint310.setCenter(new float[]{-0.1987,0.8029,-0.053});
HAnimSegment& HAnimSegment311 =  HAnimSegment();
HAnimSegment311.setDEF(CString("hanim_r_metacarpal_3"));
HAnimSegment311.X3DNode::setName(CString("r_metacarpal_3"));
HAnimJoint310.addChildren(&HAnimSegment311);

HAnimJoint& HAnimJoint312 =  HAnimJoint();
HAnimJoint312.setDEF(CString("hanim_r_metacarpophalangeal_3"));
HAnimJoint312.X3DNode::setName(CString("r_metacarpophalangeal_3"));
HAnimJoint312.setCenter(new float[]{-0.1987,0.7818,-0.053});
HAnimSegment& HAnimSegment313 =  HAnimSegment();
HAnimSegment313.setDEF(CString("hanim_r_carpal_proximal_phalanx_3"));
HAnimSegment313.X3DNode::setName(CString("r_carpal_proximal_phalanx_3"));
HAnimJoint312.addChildren(&HAnimSegment313);

HAnimJoint& HAnimJoint314 =  HAnimJoint();
HAnimJoint314.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_3"));
HAnimJoint314.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_3"));
HAnimJoint314.setCenter(new float[]{-0.2013,0.7273,-0.0503});
HAnimSegment& HAnimSegment315 =  HAnimSegment();
HAnimSegment315.setDEF(CString("hanim_r_carpal_middle_phalanx_3"));
HAnimSegment315.X3DNode::setName(CString("r_carpal_middle_phalanx_3"));
HAnimJoint314.addChildren(&HAnimSegment315);

HAnimJoint& HAnimJoint316 =  HAnimJoint();
HAnimJoint316.setDEF(CString("hanim_r_carpal_distal_interphalangeal_3"));
HAnimJoint316.X3DNode::setName(CString("r_carpal_distal_interphalangeal_3"));
HAnimJoint316.setCenter(new float[]{-0.2026,0.7011,-0.0494});
HAnimSegment& HAnimSegment317 =  HAnimSegment();
HAnimSegment317.setDEF(CString("hanim_r_carpal_distal_phalanx_3"));
HAnimSegment317.X3DNode::setName(CString("r_carpal_distal_phalanx_3"));
HAnimSite& HAnimSite318 =  HAnimSite();
HAnimSite318.setDEF(CString("hanim_r_carpal_distal_phalanx_3_tip"));
HAnimSite318.X3DNode::setName(CString("r_carpal_distal_phalanx_3_tip"));
HAnimSite318.setTranslation(new float[]{-0.1969,0.6758,-0.0427});
HAnimSegment317.addChild(&HAnimSite318);

HAnimJoint316.addChildren(&HAnimSegment317);

HAnimJoint314.addChildren(&HAnimJoint316);

HAnimJoint312.addChildren(&HAnimJoint314);

HAnimJoint310.addChildren(&HAnimJoint312);

HAnimJoint286.addChildren(&HAnimJoint310);

HAnimJoint& HAnimJoint319 =  HAnimJoint();
HAnimJoint319.setDEF(CString("hanim_r_carpometacarpal_4"));
HAnimJoint319.X3DNode::setName(CString("r_carpometacarpal_4"));
HAnimJoint319.setCenter(new float[]{-0.1956,0.8019,-0.0794});
HAnimSegment& HAnimSegment320 =  HAnimSegment();
HAnimSegment320.setDEF(CString("hanim_r_metacarpal_4"));
HAnimSegment320.X3DNode::setName(CString("r_metacarpal_4"));
HAnimJoint319.addChildren(&HAnimSegment320);

HAnimJoint& HAnimJoint321 =  HAnimJoint();
HAnimJoint321.setDEF(CString("hanim_r_metacarpophalangeal_4"));
HAnimJoint321.X3DNode::setName(CString("r_metacarpophalangeal_4"));
HAnimJoint321.setCenter(new float[]{-0.1956,0.7815,-0.0794});
HAnimSegment& HAnimSegment322 =  HAnimSegment();
HAnimSegment322.setDEF(CString("hanim_r_carpal_proximal_phalanx_4"));
HAnimSegment322.X3DNode::setName(CString("r_carpal_proximal_phalanx_4"));
HAnimJoint321.addChildren(&HAnimSegment322);

HAnimJoint& HAnimJoint323 =  HAnimJoint();
HAnimJoint323.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_4"));
HAnimJoint323.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_4"));
HAnimJoint323.setCenter(new float[]{-0.1973,0.7287,-0.0777});
HAnimSegment& HAnimSegment324 =  HAnimSegment();
HAnimSegment324.setDEF(CString("hanim_r_carpal_middle_phalanx_4"));
HAnimSegment324.X3DNode::setName(CString("r_carpal_middle_phalanx_4"));
HAnimJoint323.addChildren(&HAnimSegment324);

HAnimJoint& HAnimJoint325 =  HAnimJoint();
HAnimJoint325.setDEF(CString("hanim_r_carpal_distal_interphalangeal_4"));
HAnimJoint325.X3DNode::setName(CString("r_carpal_distal_interphalangeal_4"));
HAnimJoint325.setCenter(new float[]{-0.1983,0.7045,-0.0767});
HAnimSegment& HAnimSegment326 =  HAnimSegment();
HAnimSegment326.setDEF(CString("hanim_r_carpal_distal_phalanx_4"));
HAnimSegment326.X3DNode::setName(CString("r_carpal_distal_phalanx_4"));
HAnimSite& HAnimSite327 =  HAnimSite();
HAnimSite327.setDEF(CString("hanim_r_carpal_distal_phalanx_4_tip"));
HAnimSite327.X3DNode::setName(CString("r_carpal_distal_phalanx_4_tip"));
HAnimSite327.setTranslation(new float[]{-0.1934,0.6778,-0.0693});
HAnimSegment326.addChild(&HAnimSite327);

HAnimJoint325.addChildren(&HAnimSegment326);

HAnimJoint323.addChildren(&HAnimJoint325);

HAnimJoint321.addChildren(&HAnimJoint323);

HAnimJoint319.addChildren(&HAnimJoint321);

HAnimJoint286.addChildren(&HAnimJoint319);

HAnimJoint& HAnimJoint328 =  HAnimJoint();
HAnimJoint328.setDEF(CString("hanim_r_carpometacarpal_5"));
HAnimJoint328.X3DNode::setName(CString("r_carpometacarpal_5"));
HAnimJoint328.setCenter(new float[]{-0.1925,0.8066,-0.1036});
HAnimSegment& HAnimSegment329 =  HAnimSegment();
HAnimSegment329.setDEF(CString("hanim_r_metacarpal_5"));
HAnimSegment329.X3DNode::setName(CString("r_metacarpal_5"));
HAnimJoint328.addChildren(&HAnimSegment329);

HAnimJoint& HAnimJoint330 =  HAnimJoint();
HAnimJoint330.setDEF(CString("hanim_r_metacarpophalangeal_5"));
HAnimJoint330.X3DNode::setName(CString("r_metacarpophalangeal_5"));
HAnimJoint330.setCenter(new float[]{-0.1925,0.7866,-0.1036});
HAnimSegment& HAnimSegment331 =  HAnimSegment();
HAnimSegment331.setDEF(CString("hanim_r_carpal_proximal_phalanx_5"));
HAnimSegment331.X3DNode::setName(CString("r_carpal_proximal_phalanx_5"));
HAnimJoint330.addChildren(&HAnimSegment331);

HAnimJoint& HAnimJoint332 =  HAnimJoint();
HAnimJoint332.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_5"));
HAnimJoint332.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_5"));
HAnimJoint332.setCenter(new float[]{-0.1938,0.7452,-0.1024});
HAnimSegment& HAnimSegment333 =  HAnimSegment();
HAnimSegment333.setDEF(CString("hanim_r_carpal_middle_phalanx_5"));
HAnimSegment333.X3DNode::setName(CString("r_carpal_middle_phalanx_5"));
HAnimJoint332.addChildren(&HAnimSegment333);

HAnimJoint& HAnimJoint334 =  HAnimJoint();
HAnimJoint334.setDEF(CString("hanim_r_carpal_distal_interphalangeal_5"));
HAnimJoint334.X3DNode::setName(CString("r_carpal_distal_interphalangeal_5"));
HAnimJoint334.setCenter(new float[]{-0.1948,0.7277,-0.1017});
HAnimSegment& HAnimSegment335 =  HAnimSegment();
HAnimSegment335.setDEF(CString("hanim_r_carpal_distal_phalanx_5"));
HAnimSegment335.X3DNode::setName(CString("r_carpal_distal_phalanx_5"));
HAnimSite& HAnimSite336 =  HAnimSite();
HAnimSite336.setDEF(CString("hanim_r_carpal_distal_phalanx_5_tip"));
HAnimSite336.X3DNode::setName(CString("r_carpal_distal_phalanx_5_tip"));
HAnimSite336.setTranslation(new float[]{-0.1938,0.7035,-0.0949});
HAnimSegment335.addChild(&HAnimSite336);

HAnimJoint334.addChildren(&HAnimSegment335);

HAnimJoint332.addChildren(&HAnimJoint334);

HAnimJoint330.addChildren(&HAnimJoint332);

HAnimJoint328.addChildren(&HAnimJoint330);

HAnimJoint286.addChildren(&HAnimJoint328);

HAnimJoint280.addChildren(&HAnimJoint286);

HAnimJoint277.addChildren(&HAnimJoint280);

HAnimJoint275.addChildren(&HAnimJoint277);

HAnimJoint269.addChildren(&HAnimJoint275);

HAnimJoint149.addChildren(&HAnimJoint269);

HAnimJoint147.addChildren(&HAnimJoint149);

HAnimJoint145.addChildren(&HAnimJoint147);

HAnimJoint143.addChildren(&HAnimJoint145);

HAnimJoint141.addChildren(&HAnimJoint143);

HAnimJoint139.addChildren(&HAnimJoint141);

HAnimJoint137.addChildren(&HAnimJoint139);

HAnimJoint135.addChildren(&HAnimJoint137);

HAnimJoint131.addChildren(&HAnimJoint135);

HAnimJoint128.addChildren(&HAnimJoint131);

HAnimJoint126.addChildren(&HAnimJoint128);

HAnimJoint124.addChildren(&HAnimJoint126);

HAnimJoint122.addChildren(&HAnimJoint124);

HAnimJoint117.addChildren(&HAnimJoint122);

HAnimJoint115.addChildren(&HAnimJoint117);

HAnimJoint113.addChildren(&HAnimJoint115);

HAnimJoint109.addChildren(&HAnimJoint113);

HAnimJoint50.addChildren(&HAnimJoint109);

HAnimHumanoid41.setSkeleton(&HAnimJoint50);

HAnimJoint& HAnimJoint337 =  HAnimJoint();
HAnimJoint337.setUSE(CString("hanim_humanoid_root"));
HAnimHumanoid41.setJoints(&HAnimJoint337);

HAnimJoint& HAnimJoint338 =  HAnimJoint();
HAnimJoint338.setUSE(CString("hanim_sacroiliac"));
HAnimHumanoid41.setJoints(&HAnimJoint338);

HAnimJoint& HAnimJoint339 =  HAnimJoint();
HAnimJoint339.setUSE(CString("hanim_vl5"));
HAnimHumanoid41.setJoints(&HAnimJoint339);

HAnimJoint& HAnimJoint340 =  HAnimJoint();
HAnimJoint340.setUSE(CString("hanim_vl4"));
HAnimHumanoid41.setJoints(&HAnimJoint340);

HAnimJoint& HAnimJoint341 =  HAnimJoint();
HAnimJoint341.setUSE(CString("hanim_vl3"));
HAnimHumanoid41.setJoints(&HAnimJoint341);

HAnimJoint& HAnimJoint342 =  HAnimJoint();
HAnimJoint342.setUSE(CString("hanim_vl2"));
HAnimHumanoid41.setJoints(&HAnimJoint342);

HAnimJoint& HAnimJoint343 =  HAnimJoint();
HAnimJoint343.setUSE(CString("hanim_vl1"));
HAnimHumanoid41.setJoints(&HAnimJoint343);

HAnimJoint& HAnimJoint344 =  HAnimJoint();
HAnimJoint344.setUSE(CString("hanim_vt12"));
HAnimHumanoid41.setJoints(&HAnimJoint344);

HAnimJoint& HAnimJoint345 =  HAnimJoint();
HAnimJoint345.setUSE(CString("hanim_vt11"));
HAnimHumanoid41.setJoints(&HAnimJoint345);

HAnimJoint& HAnimJoint346 =  HAnimJoint();
HAnimJoint346.setUSE(CString("hanim_vt10"));
HAnimHumanoid41.setJoints(&HAnimJoint346);

HAnimJoint& HAnimJoint347 =  HAnimJoint();
HAnimJoint347.setUSE(CString("hanim_vt9"));
HAnimHumanoid41.setJoints(&HAnimJoint347);

HAnimJoint& HAnimJoint348 =  HAnimJoint();
HAnimJoint348.setUSE(CString("hanim_vt8"));
HAnimHumanoid41.setJoints(&HAnimJoint348);

HAnimJoint& HAnimJoint349 =  HAnimJoint();
HAnimJoint349.setUSE(CString("hanim_vt7"));
HAnimHumanoid41.setJoints(&HAnimJoint349);

HAnimJoint& HAnimJoint350 =  HAnimJoint();
HAnimJoint350.setUSE(CString("hanim_vt6"));
HAnimHumanoid41.setJoints(&HAnimJoint350);

HAnimJoint& HAnimJoint351 =  HAnimJoint();
HAnimJoint351.setUSE(CString("hanim_vt5"));
HAnimHumanoid41.setJoints(&HAnimJoint351);

HAnimJoint& HAnimJoint352 =  HAnimJoint();
HAnimJoint352.setUSE(CString("hanim_vt4"));
HAnimHumanoid41.setJoints(&HAnimJoint352);

HAnimJoint& HAnimJoint353 =  HAnimJoint();
HAnimJoint353.setUSE(CString("hanim_vt3"));
HAnimHumanoid41.setJoints(&HAnimJoint353);

HAnimJoint& HAnimJoint354 =  HAnimJoint();
HAnimJoint354.setUSE(CString("hanim_vt2"));
HAnimHumanoid41.setJoints(&HAnimJoint354);

HAnimJoint& HAnimJoint355 =  HAnimJoint();
HAnimJoint355.setUSE(CString("hanim_vt1"));
HAnimHumanoid41.setJoints(&HAnimJoint355);

HAnimJoint& HAnimJoint356 =  HAnimJoint();
HAnimJoint356.setUSE(CString("hanim_vc7"));
HAnimHumanoid41.setJoints(&HAnimJoint356);

HAnimJoint& HAnimJoint357 =  HAnimJoint();
HAnimJoint357.setUSE(CString("hanim_vc6"));
HAnimHumanoid41.setJoints(&HAnimJoint357);

HAnimJoint& HAnimJoint358 =  HAnimJoint();
HAnimJoint358.setUSE(CString("hanim_vc5"));
HAnimHumanoid41.setJoints(&HAnimJoint358);

HAnimJoint& HAnimJoint359 =  HAnimJoint();
HAnimJoint359.setUSE(CString("hanim_vc4"));
HAnimHumanoid41.setJoints(&HAnimJoint359);

HAnimJoint& HAnimJoint360 =  HAnimJoint();
HAnimJoint360.setUSE(CString("hanim_vc3"));
HAnimHumanoid41.setJoints(&HAnimJoint360);

HAnimJoint& HAnimJoint361 =  HAnimJoint();
HAnimJoint361.setUSE(CString("hanim_vc2"));
HAnimHumanoid41.setJoints(&HAnimJoint361);

HAnimJoint& HAnimJoint362 =  HAnimJoint();
HAnimJoint362.setUSE(CString("hanim_vc1"));
HAnimHumanoid41.setJoints(&HAnimJoint362);

HAnimJoint& HAnimJoint363 =  HAnimJoint();
HAnimJoint363.setUSE(CString("hanim_skullbase"));
HAnimHumanoid41.setJoints(&HAnimJoint363);

HAnimJoint& HAnimJoint364 =  HAnimJoint();
HAnimJoint364.setUSE(CString("hanim_temporomandibular"));
HAnimHumanoid41.setJoints(&HAnimJoint364);

HAnimJoint& HAnimJoint365 =  HAnimJoint();
HAnimJoint365.setUSE(CString("hanim_l_acromioclavicular"));
HAnimHumanoid41.setJoints(&HAnimJoint365);

HAnimJoint& HAnimJoint366 =  HAnimJoint();
HAnimJoint366.setUSE(CString("hanim_r_acromioclavicular"));
HAnimHumanoid41.setJoints(&HAnimJoint366);

HAnimJoint& HAnimJoint367 =  HAnimJoint();
HAnimJoint367.setUSE(CString("hanim_l_carpal_distal_interphalangeal_2"));
HAnimHumanoid41.setJoints(&HAnimJoint367);

HAnimJoint& HAnimJoint368 =  HAnimJoint();
HAnimJoint368.setUSE(CString("hanim_r_carpal_distal_interphalangeal_2"));
HAnimHumanoid41.setJoints(&HAnimJoint368);

HAnimJoint& HAnimJoint369 =  HAnimJoint();
HAnimJoint369.setUSE(CString("hanim_l_carpal_distal_interphalangeal_3"));
HAnimHumanoid41.setJoints(&HAnimJoint369);

HAnimJoint& HAnimJoint370 =  HAnimJoint();
HAnimJoint370.setUSE(CString("hanim_r_carpal_distal_interphalangeal_3"));
HAnimHumanoid41.setJoints(&HAnimJoint370);

HAnimJoint& HAnimJoint371 =  HAnimJoint();
HAnimJoint371.setUSE(CString("hanim_l_carpal_distal_interphalangeal_4"));
HAnimHumanoid41.setJoints(&HAnimJoint371);

HAnimJoint& HAnimJoint372 =  HAnimJoint();
HAnimJoint372.setUSE(CString("hanim_r_carpal_distal_interphalangeal_4"));
HAnimHumanoid41.setJoints(&HAnimJoint372);

HAnimJoint& HAnimJoint373 =  HAnimJoint();
HAnimJoint373.setUSE(CString("hanim_l_carpal_distal_interphalangeal_5"));
HAnimHumanoid41.setJoints(&HAnimJoint373);

HAnimJoint& HAnimJoint374 =  HAnimJoint();
HAnimJoint374.setUSE(CString("hanim_r_carpal_distal_interphalangeal_5"));
HAnimHumanoid41.setJoints(&HAnimJoint374);

HAnimJoint& HAnimJoint375 =  HAnimJoint();
HAnimJoint375.setUSE(CString("hanim_l_carpal_interphalangeal_1"));
HAnimHumanoid41.setJoints(&HAnimJoint375);

HAnimJoint& HAnimJoint376 =  HAnimJoint();
HAnimJoint376.setUSE(CString("hanim_r_carpal_interphalangeal_1"));
HAnimHumanoid41.setJoints(&HAnimJoint376);

HAnimJoint& HAnimJoint377 =  HAnimJoint();
HAnimJoint377.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_2"));
HAnimHumanoid41.setJoints(&HAnimJoint377);

HAnimJoint& HAnimJoint378 =  HAnimJoint();
HAnimJoint378.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_2"));
HAnimHumanoid41.setJoints(&HAnimJoint378);

HAnimJoint& HAnimJoint379 =  HAnimJoint();
HAnimJoint379.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_3"));
HAnimHumanoid41.setJoints(&HAnimJoint379);

HAnimJoint& HAnimJoint380 =  HAnimJoint();
HAnimJoint380.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_3"));
HAnimHumanoid41.setJoints(&HAnimJoint380);

HAnimJoint& HAnimJoint381 =  HAnimJoint();
HAnimJoint381.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_4"));
HAnimHumanoid41.setJoints(&HAnimJoint381);

HAnimJoint& HAnimJoint382 =  HAnimJoint();
HAnimJoint382.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_4"));
HAnimHumanoid41.setJoints(&HAnimJoint382);

HAnimJoint& HAnimJoint383 =  HAnimJoint();
HAnimJoint383.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_5"));
HAnimHumanoid41.setJoints(&HAnimJoint383);

HAnimJoint& HAnimJoint384 =  HAnimJoint();
HAnimJoint384.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_5"));
HAnimHumanoid41.setJoints(&HAnimJoint384);

HAnimJoint& HAnimJoint385 =  HAnimJoint();
HAnimJoint385.setUSE(CString("hanim_l_carpometacarpal_1"));
HAnimHumanoid41.setJoints(&HAnimJoint385);

HAnimJoint& HAnimJoint386 =  HAnimJoint();
HAnimJoint386.setUSE(CString("hanim_r_carpometacarpal_1"));
HAnimHumanoid41.setJoints(&HAnimJoint386);

HAnimJoint& HAnimJoint387 =  HAnimJoint();
HAnimJoint387.setUSE(CString("hanim_l_carpometacarpal_2"));
HAnimHumanoid41.setJoints(&HAnimJoint387);

HAnimJoint& HAnimJoint388 =  HAnimJoint();
HAnimJoint388.setUSE(CString("hanim_r_carpometacarpal_2"));
HAnimHumanoid41.setJoints(&HAnimJoint388);

HAnimJoint& HAnimJoint389 =  HAnimJoint();
HAnimJoint389.setUSE(CString("hanim_l_carpometacarpal_3"));
HAnimHumanoid41.setJoints(&HAnimJoint389);

HAnimJoint& HAnimJoint390 =  HAnimJoint();
HAnimJoint390.setUSE(CString("hanim_r_carpometacarpal_3"));
HAnimHumanoid41.setJoints(&HAnimJoint390);

HAnimJoint& HAnimJoint391 =  HAnimJoint();
HAnimJoint391.setUSE(CString("hanim_l_carpometacarpal_4"));
HAnimHumanoid41.setJoints(&HAnimJoint391);

HAnimJoint& HAnimJoint392 =  HAnimJoint();
HAnimJoint392.setUSE(CString("hanim_r_carpometacarpal_4"));
HAnimHumanoid41.setJoints(&HAnimJoint392);

HAnimJoint& HAnimJoint393 =  HAnimJoint();
HAnimJoint393.setUSE(CString("hanim_l_carpometacarpal_5"));
HAnimHumanoid41.setJoints(&HAnimJoint393);

HAnimJoint& HAnimJoint394 =  HAnimJoint();
HAnimJoint394.setUSE(CString("hanim_r_carpometacarpal_5"));
HAnimHumanoid41.setJoints(&HAnimJoint394);

HAnimJoint& HAnimJoint395 =  HAnimJoint();
HAnimJoint395.setUSE(CString("hanim_l_elbow"));
HAnimHumanoid41.setJoints(&HAnimJoint395);

HAnimJoint& HAnimJoint396 =  HAnimJoint();
HAnimJoint396.setUSE(CString("hanim_r_elbow"));
HAnimHumanoid41.setJoints(&HAnimJoint396);

HAnimJoint& HAnimJoint397 =  HAnimJoint();
HAnimJoint397.setUSE(CString("hanim_l_eyeball_joint"));
HAnimHumanoid41.setJoints(&HAnimJoint397);

HAnimJoint& HAnimJoint398 =  HAnimJoint();
HAnimJoint398.setUSE(CString("hanim_r_eyeball_joint"));
HAnimHumanoid41.setJoints(&HAnimJoint398);

HAnimJoint& HAnimJoint399 =  HAnimJoint();
HAnimJoint399.setUSE(CString("hanim_l_eyebrow_joint"));
HAnimHumanoid41.setJoints(&HAnimJoint399);

HAnimJoint& HAnimJoint400 =  HAnimJoint();
HAnimJoint400.setUSE(CString("hanim_r_eyebrow_joint"));
HAnimHumanoid41.setJoints(&HAnimJoint400);

HAnimJoint& HAnimJoint401 =  HAnimJoint();
HAnimJoint401.setUSE(CString("hanim_l_eyelid_joint"));
HAnimHumanoid41.setJoints(&HAnimJoint401);

HAnimJoint& HAnimJoint402 =  HAnimJoint();
HAnimJoint402.setUSE(CString("hanim_r_eyelid_joint"));
HAnimHumanoid41.setJoints(&HAnimJoint402);

HAnimJoint& HAnimJoint403 =  HAnimJoint();
HAnimJoint403.setUSE(CString("hanim_l_hip"));
HAnimHumanoid41.setJoints(&HAnimJoint403);

HAnimJoint& HAnimJoint404 =  HAnimJoint();
HAnimJoint404.setUSE(CString("hanim_r_hip"));
HAnimHumanoid41.setJoints(&HAnimJoint404);

HAnimJoint& HAnimJoint405 =  HAnimJoint();
HAnimJoint405.setUSE(CString("hanim_l_knee"));
HAnimHumanoid41.setJoints(&HAnimJoint405);

HAnimJoint& HAnimJoint406 =  HAnimJoint();
HAnimJoint406.setUSE(CString("hanim_r_knee"));
HAnimHumanoid41.setJoints(&HAnimJoint406);

HAnimJoint& HAnimJoint407 =  HAnimJoint();
HAnimJoint407.setUSE(CString("hanim_l_metacarpophalangeal_1"));
HAnimHumanoid41.setJoints(&HAnimJoint407);

HAnimJoint& HAnimJoint408 =  HAnimJoint();
HAnimJoint408.setUSE(CString("hanim_r_metacarpophalangeal_1"));
HAnimHumanoid41.setJoints(&HAnimJoint408);

HAnimJoint& HAnimJoint409 =  HAnimJoint();
HAnimJoint409.setUSE(CString("hanim_l_metacarpophalangeal_2"));
HAnimHumanoid41.setJoints(&HAnimJoint409);

HAnimJoint& HAnimJoint410 =  HAnimJoint();
HAnimJoint410.setUSE(CString("hanim_r_metacarpophalangeal_2"));
HAnimHumanoid41.setJoints(&HAnimJoint410);

HAnimJoint& HAnimJoint411 =  HAnimJoint();
HAnimJoint411.setUSE(CString("hanim_l_metacarpophalangeal_3"));
HAnimHumanoid41.setJoints(&HAnimJoint411);

HAnimJoint& HAnimJoint412 =  HAnimJoint();
HAnimJoint412.setUSE(CString("hanim_r_metacarpophalangeal_3"));
HAnimHumanoid41.setJoints(&HAnimJoint412);

HAnimJoint& HAnimJoint413 =  HAnimJoint();
HAnimJoint413.setUSE(CString("hanim_l_metacarpophalangeal_4"));
HAnimHumanoid41.setJoints(&HAnimJoint413);

HAnimJoint& HAnimJoint414 =  HAnimJoint();
HAnimJoint414.setUSE(CString("hanim_r_metacarpophalangeal_4"));
HAnimHumanoid41.setJoints(&HAnimJoint414);

HAnimJoint& HAnimJoint415 =  HAnimJoint();
HAnimJoint415.setUSE(CString("hanim_l_metacarpophalangeal_5"));
HAnimHumanoid41.setJoints(&HAnimJoint415);

HAnimJoint& HAnimJoint416 =  HAnimJoint();
HAnimJoint416.setUSE(CString("hanim_r_metacarpophalangeal_5"));
HAnimHumanoid41.setJoints(&HAnimJoint416);

HAnimJoint& HAnimJoint417 =  HAnimJoint();
HAnimJoint417.setUSE(CString("hanim_l_metatarsophalangeal_2"));
HAnimHumanoid41.setJoints(&HAnimJoint417);

HAnimJoint& HAnimJoint418 =  HAnimJoint();
HAnimJoint418.setUSE(CString("hanim_r_metatarsophalangeal_2"));
HAnimHumanoid41.setJoints(&HAnimJoint418);

HAnimJoint& HAnimJoint419 =  HAnimJoint();
HAnimJoint419.setUSE(CString("hanim_l_radiocarpal"));
HAnimHumanoid41.setJoints(&HAnimJoint419);

HAnimJoint& HAnimJoint420 =  HAnimJoint();
HAnimJoint420.setUSE(CString("hanim_r_radiocarpal"));
HAnimHumanoid41.setJoints(&HAnimJoint420);

HAnimJoint& HAnimJoint421 =  HAnimJoint();
HAnimJoint421.setUSE(CString("hanim_l_shoulder"));
HAnimHumanoid41.setJoints(&HAnimJoint421);

HAnimJoint& HAnimJoint422 =  HAnimJoint();
HAnimJoint422.setUSE(CString("hanim_r_shoulder"));
HAnimHumanoid41.setJoints(&HAnimJoint422);

HAnimJoint& HAnimJoint423 =  HAnimJoint();
HAnimJoint423.setUSE(CString("hanim_l_sternoclavicular"));
HAnimHumanoid41.setJoints(&HAnimJoint423);

HAnimJoint& HAnimJoint424 =  HAnimJoint();
HAnimJoint424.setUSE(CString("hanim_r_sternoclavicular"));
HAnimHumanoid41.setJoints(&HAnimJoint424);

HAnimJoint& HAnimJoint425 =  HAnimJoint();
HAnimJoint425.setUSE(CString("hanim_l_talocrural"));
HAnimHumanoid41.setJoints(&HAnimJoint425);

HAnimJoint& HAnimJoint426 =  HAnimJoint();
HAnimJoint426.setUSE(CString("hanim_r_talocrural"));
HAnimHumanoid41.setJoints(&HAnimJoint426);

HAnimJoint& HAnimJoint427 =  HAnimJoint();
HAnimJoint427.setUSE(CString("hanim_l_tarsal_distal_interphalangeal_2"));
HAnimHumanoid41.setJoints(&HAnimJoint427);

HAnimJoint& HAnimJoint428 =  HAnimJoint();
HAnimJoint428.setUSE(CString("hanim_r_tarsal_distal_interphalangeal_2"));
HAnimHumanoid41.setJoints(&HAnimJoint428);

HAnimJoint& HAnimJoint429 =  HAnimJoint();
HAnimJoint429.setUSE(CString("hanim_l_tarsometatarsal_2"));
HAnimHumanoid41.setJoints(&HAnimJoint429);

HAnimJoint& HAnimJoint430 =  HAnimJoint();
HAnimJoint430.setUSE(CString("hanim_r_tarsometatarsal_2"));
HAnimHumanoid41.setJoints(&HAnimJoint430);

HAnimSegment& HAnimSegment431 =  HAnimSegment();
HAnimSegment431.setUSE(CString("hanim_pelvis"));
HAnimHumanoid41.setSegments(&HAnimSegment431);

HAnimSegment& HAnimSegment432 =  HAnimSegment();
HAnimSegment432.setUSE(CString("hanim_skull"));
HAnimHumanoid41.setSegments(&HAnimSegment432);

HAnimSegment& HAnimSegment433 =  HAnimSegment();
HAnimSegment433.setUSE(CString("hanim_jaw"));
HAnimHumanoid41.setSegments(&HAnimSegment433);

HAnimSegment& HAnimSegment434 =  HAnimSegment();
HAnimSegment434.setUSE(CString("hanim_c1"));
HAnimHumanoid41.setSegments(&HAnimSegment434);

HAnimSegment& HAnimSegment435 =  HAnimSegment();
HAnimSegment435.setUSE(CString("hanim_c2"));
HAnimHumanoid41.setSegments(&HAnimSegment435);

HAnimSegment& HAnimSegment436 =  HAnimSegment();
HAnimSegment436.setUSE(CString("hanim_c3"));
HAnimHumanoid41.setSegments(&HAnimSegment436);

HAnimSegment& HAnimSegment437 =  HAnimSegment();
HAnimSegment437.setUSE(CString("hanim_c4"));
HAnimHumanoid41.setSegments(&HAnimSegment437);

HAnimSegment& HAnimSegment438 =  HAnimSegment();
HAnimSegment438.setUSE(CString("hanim_c5"));
HAnimHumanoid41.setSegments(&HAnimSegment438);

HAnimSegment& HAnimSegment439 =  HAnimSegment();
HAnimSegment439.setUSE(CString("hanim_c6"));
HAnimHumanoid41.setSegments(&HAnimSegment439);

HAnimSegment& HAnimSegment440 =  HAnimSegment();
HAnimSegment440.setUSE(CString("hanim_c7"));
HAnimHumanoid41.setSegments(&HAnimSegment440);

HAnimSegment& HAnimSegment441 =  HAnimSegment();
HAnimSegment441.setUSE(CString("hanim_t1"));
HAnimHumanoid41.setSegments(&HAnimSegment441);

HAnimSegment& HAnimSegment442 =  HAnimSegment();
HAnimSegment442.setUSE(CString("hanim_t2"));
HAnimHumanoid41.setSegments(&HAnimSegment442);

HAnimSegment& HAnimSegment443 =  HAnimSegment();
HAnimSegment443.setUSE(CString("hanim_t3"));
HAnimHumanoid41.setSegments(&HAnimSegment443);

HAnimSegment& HAnimSegment444 =  HAnimSegment();
HAnimSegment444.setUSE(CString("hanim_t4"));
HAnimHumanoid41.setSegments(&HAnimSegment444);

HAnimSegment& HAnimSegment445 =  HAnimSegment();
HAnimSegment445.setUSE(CString("hanim_t5"));
HAnimHumanoid41.setSegments(&HAnimSegment445);

HAnimSegment& HAnimSegment446 =  HAnimSegment();
HAnimSegment446.setUSE(CString("hanim_t6"));
HAnimHumanoid41.setSegments(&HAnimSegment446);

HAnimSegment& HAnimSegment447 =  HAnimSegment();
HAnimSegment447.setUSE(CString("hanim_t7"));
HAnimHumanoid41.setSegments(&HAnimSegment447);

HAnimSegment& HAnimSegment448 =  HAnimSegment();
HAnimSegment448.setUSE(CString("hanim_t8"));
HAnimHumanoid41.setSegments(&HAnimSegment448);

HAnimSegment& HAnimSegment449 =  HAnimSegment();
HAnimSegment449.setUSE(CString("hanim_t9"));
HAnimHumanoid41.setSegments(&HAnimSegment449);

HAnimSegment& HAnimSegment450 =  HAnimSegment();
HAnimSegment450.setUSE(CString("hanim_t10"));
HAnimHumanoid41.setSegments(&HAnimSegment450);

HAnimSegment& HAnimSegment451 =  HAnimSegment();
HAnimSegment451.setUSE(CString("hanim_t11"));
HAnimHumanoid41.setSegments(&HAnimSegment451);

HAnimSegment& HAnimSegment452 =  HAnimSegment();
HAnimSegment452.setUSE(CString("hanim_t12"));
HAnimHumanoid41.setSegments(&HAnimSegment452);

HAnimSegment& HAnimSegment453 =  HAnimSegment();
HAnimSegment453.setUSE(CString("hanim_l1"));
HAnimHumanoid41.setSegments(&HAnimSegment453);

HAnimSegment& HAnimSegment454 =  HAnimSegment();
HAnimSegment454.setUSE(CString("hanim_l2"));
HAnimHumanoid41.setSegments(&HAnimSegment454);

HAnimSegment& HAnimSegment455 =  HAnimSegment();
HAnimSegment455.setUSE(CString("hanim_l3"));
HAnimHumanoid41.setSegments(&HAnimSegment455);

HAnimSegment& HAnimSegment456 =  HAnimSegment();
HAnimSegment456.setUSE(CString("hanim_l4"));
HAnimHumanoid41.setSegments(&HAnimSegment456);

HAnimSegment& HAnimSegment457 =  HAnimSegment();
HAnimSegment457.setUSE(CString("hanim_l5"));
HAnimHumanoid41.setSegments(&HAnimSegment457);

HAnimSegment& HAnimSegment458 =  HAnimSegment();
HAnimSegment458.setUSE(CString("hanim_sacrum"));
HAnimHumanoid41.setSegments(&HAnimSegment458);

HAnimSegment& HAnimSegment459 =  HAnimSegment();
HAnimSegment459.setUSE(CString("hanim_l_calf"));
HAnimHumanoid41.setSegments(&HAnimSegment459);

HAnimSegment& HAnimSegment460 =  HAnimSegment();
HAnimSegment460.setUSE(CString("hanim_r_calf"));
HAnimHumanoid41.setSegments(&HAnimSegment460);

HAnimSegment& HAnimSegment461 =  HAnimSegment();
HAnimSegment461.setUSE(CString("hanim_l_carpal"));
HAnimHumanoid41.setSegments(&HAnimSegment461);

HAnimSegment& HAnimSegment462 =  HAnimSegment();
HAnimSegment462.setUSE(CString("hanim_r_carpal"));
HAnimHumanoid41.setSegments(&HAnimSegment462);

HAnimSegment& HAnimSegment463 =  HAnimSegment();
HAnimSegment463.setUSE(CString("hanim_l_carpal_distal_phalanx_1"));
HAnimHumanoid41.setSegments(&HAnimSegment463);

HAnimSegment& HAnimSegment464 =  HAnimSegment();
HAnimSegment464.setUSE(CString("hanim_r_carpal_distal_phalanx_1"));
HAnimHumanoid41.setSegments(&HAnimSegment464);

HAnimSegment& HAnimSegment465 =  HAnimSegment();
HAnimSegment465.setUSE(CString("hanim_l_carpal_distal_phalanx_2"));
HAnimHumanoid41.setSegments(&HAnimSegment465);

HAnimSegment& HAnimSegment466 =  HAnimSegment();
HAnimSegment466.setUSE(CString("hanim_r_carpal_distal_phalanx_2"));
HAnimHumanoid41.setSegments(&HAnimSegment466);

HAnimSegment& HAnimSegment467 =  HAnimSegment();
HAnimSegment467.setUSE(CString("hanim_l_carpal_distal_phalanx_3"));
HAnimHumanoid41.setSegments(&HAnimSegment467);

HAnimSegment& HAnimSegment468 =  HAnimSegment();
HAnimSegment468.setUSE(CString("hanim_r_carpal_distal_phalanx_3"));
HAnimHumanoid41.setSegments(&HAnimSegment468);

HAnimSegment& HAnimSegment469 =  HAnimSegment();
HAnimSegment469.setUSE(CString("hanim_l_carpal_distal_phalanx_4"));
HAnimHumanoid41.setSegments(&HAnimSegment469);

HAnimSegment& HAnimSegment470 =  HAnimSegment();
HAnimSegment470.setUSE(CString("hanim_r_carpal_distal_phalanx_4"));
HAnimHumanoid41.setSegments(&HAnimSegment470);

HAnimSegment& HAnimSegment471 =  HAnimSegment();
HAnimSegment471.setUSE(CString("hanim_l_carpal_distal_phalanx_5"));
HAnimHumanoid41.setSegments(&HAnimSegment471);

HAnimSegment& HAnimSegment472 =  HAnimSegment();
HAnimSegment472.setUSE(CString("hanim_r_carpal_distal_phalanx_5"));
HAnimHumanoid41.setSegments(&HAnimSegment472);

HAnimSegment& HAnimSegment473 =  HAnimSegment();
HAnimSegment473.setUSE(CString("hanim_l_carpal_middle_phalanx_2"));
HAnimHumanoid41.setSegments(&HAnimSegment473);

HAnimSegment& HAnimSegment474 =  HAnimSegment();
HAnimSegment474.setUSE(CString("hanim_r_carpal_middle_phalanx_2"));
HAnimHumanoid41.setSegments(&HAnimSegment474);

HAnimSegment& HAnimSegment475 =  HAnimSegment();
HAnimSegment475.setUSE(CString("hanim_l_carpal_middle_phalanx_3"));
HAnimHumanoid41.setSegments(&HAnimSegment475);

HAnimSegment& HAnimSegment476 =  HAnimSegment();
HAnimSegment476.setUSE(CString("hanim_r_carpal_middle_phalanx_3"));
HAnimHumanoid41.setSegments(&HAnimSegment476);

HAnimSegment& HAnimSegment477 =  HAnimSegment();
HAnimSegment477.setUSE(CString("hanim_l_carpal_middle_phalanx_4"));
HAnimHumanoid41.setSegments(&HAnimSegment477);

HAnimSegment& HAnimSegment478 =  HAnimSegment();
HAnimSegment478.setUSE(CString("hanim_r_carpal_middle_phalanx_4"));
HAnimHumanoid41.setSegments(&HAnimSegment478);

HAnimSegment& HAnimSegment479 =  HAnimSegment();
HAnimSegment479.setUSE(CString("hanim_l_carpal_middle_phalanx_5"));
HAnimHumanoid41.setSegments(&HAnimSegment479);

HAnimSegment& HAnimSegment480 =  HAnimSegment();
HAnimSegment480.setUSE(CString("hanim_r_carpal_middle_phalanx_5"));
HAnimHumanoid41.setSegments(&HAnimSegment480);

HAnimSegment& HAnimSegment481 =  HAnimSegment();
HAnimSegment481.setUSE(CString("hanim_l_carpal_proximal_phalanx_1"));
HAnimHumanoid41.setSegments(&HAnimSegment481);

HAnimSegment& HAnimSegment482 =  HAnimSegment();
HAnimSegment482.setUSE(CString("hanim_r_carpal_proximal_phalanx_1"));
HAnimHumanoid41.setSegments(&HAnimSegment482);

HAnimSegment& HAnimSegment483 =  HAnimSegment();
HAnimSegment483.setUSE(CString("hanim_l_carpal_proximal_phalanx_2"));
HAnimHumanoid41.setSegments(&HAnimSegment483);

HAnimSegment& HAnimSegment484 =  HAnimSegment();
HAnimSegment484.setUSE(CString("hanim_r_carpal_proximal_phalanx_2"));
HAnimHumanoid41.setSegments(&HAnimSegment484);

HAnimSegment& HAnimSegment485 =  HAnimSegment();
HAnimSegment485.setUSE(CString("hanim_l_carpal_proximal_phalanx_3"));
HAnimHumanoid41.setSegments(&HAnimSegment485);

HAnimSegment& HAnimSegment486 =  HAnimSegment();
HAnimSegment486.setUSE(CString("hanim_r_carpal_proximal_phalanx_3"));
HAnimHumanoid41.setSegments(&HAnimSegment486);

HAnimSegment& HAnimSegment487 =  HAnimSegment();
HAnimSegment487.setUSE(CString("hanim_l_carpal_proximal_phalanx_4"));
HAnimHumanoid41.setSegments(&HAnimSegment487);

HAnimSegment& HAnimSegment488 =  HAnimSegment();
HAnimSegment488.setUSE(CString("hanim_r_carpal_proximal_phalanx_4"));
HAnimHumanoid41.setSegments(&HAnimSegment488);

HAnimSegment& HAnimSegment489 =  HAnimSegment();
HAnimSegment489.setUSE(CString("hanim_l_carpal_proximal_phalanx_5"));
HAnimHumanoid41.setSegments(&HAnimSegment489);

HAnimSegment& HAnimSegment490 =  HAnimSegment();
HAnimSegment490.setUSE(CString("hanim_r_carpal_proximal_phalanx_5"));
HAnimHumanoid41.setSegments(&HAnimSegment490);

HAnimSegment& HAnimSegment491 =  HAnimSegment();
HAnimSegment491.setUSE(CString("hanim_l_clavicle"));
HAnimHumanoid41.setSegments(&HAnimSegment491);

HAnimSegment& HAnimSegment492 =  HAnimSegment();
HAnimSegment492.setUSE(CString("hanim_r_clavicle"));
HAnimHumanoid41.setSegments(&HAnimSegment492);

HAnimSegment& HAnimSegment493 =  HAnimSegment();
HAnimSegment493.setUSE(CString("hanim_l_eyeball"));
HAnimHumanoid41.setSegments(&HAnimSegment493);

HAnimSegment& HAnimSegment494 =  HAnimSegment();
HAnimSegment494.setUSE(CString("hanim_r_eyeball"));
HAnimHumanoid41.setSegments(&HAnimSegment494);

HAnimSegment& HAnimSegment495 =  HAnimSegment();
HAnimSegment495.setUSE(CString("hanim_l_eyebrow"));
HAnimHumanoid41.setSegments(&HAnimSegment495);

HAnimSegment& HAnimSegment496 =  HAnimSegment();
HAnimSegment496.setUSE(CString("hanim_r_eyebrow"));
HAnimHumanoid41.setSegments(&HAnimSegment496);

HAnimSegment& HAnimSegment497 =  HAnimSegment();
HAnimSegment497.setUSE(CString("hanim_l_eyelid"));
HAnimHumanoid41.setSegments(&HAnimSegment497);

HAnimSegment& HAnimSegment498 =  HAnimSegment();
HAnimSegment498.setUSE(CString("hanim_r_eyelid"));
HAnimHumanoid41.setSegments(&HAnimSegment498);

HAnimSegment& HAnimSegment499 =  HAnimSegment();
HAnimSegment499.setUSE(CString("hanim_l_forearm"));
HAnimHumanoid41.setSegments(&HAnimSegment499);

HAnimSegment& HAnimSegment500 =  HAnimSegment();
HAnimSegment500.setUSE(CString("hanim_r_forearm"));
HAnimHumanoid41.setSegments(&HAnimSegment500);

HAnimSegment& HAnimSegment501 =  HAnimSegment();
HAnimSegment501.setUSE(CString("hanim_l_metacarpal_1"));
HAnimHumanoid41.setSegments(&HAnimSegment501);

HAnimSegment& HAnimSegment502 =  HAnimSegment();
HAnimSegment502.setUSE(CString("hanim_r_metacarpal_1"));
HAnimHumanoid41.setSegments(&HAnimSegment502);

HAnimSegment& HAnimSegment503 =  HAnimSegment();
HAnimSegment503.setUSE(CString("hanim_l_metacarpal_2"));
HAnimHumanoid41.setSegments(&HAnimSegment503);

HAnimSegment& HAnimSegment504 =  HAnimSegment();
HAnimSegment504.setUSE(CString("hanim_r_metacarpal_2"));
HAnimHumanoid41.setSegments(&HAnimSegment504);

HAnimSegment& HAnimSegment505 =  HAnimSegment();
HAnimSegment505.setUSE(CString("hanim_l_metacarpal_3"));
HAnimHumanoid41.setSegments(&HAnimSegment505);

HAnimSegment& HAnimSegment506 =  HAnimSegment();
HAnimSegment506.setUSE(CString("hanim_r_metacarpal_3"));
HAnimHumanoid41.setSegments(&HAnimSegment506);

HAnimSegment& HAnimSegment507 =  HAnimSegment();
HAnimSegment507.setUSE(CString("hanim_l_metacarpal_4"));
HAnimHumanoid41.setSegments(&HAnimSegment507);

HAnimSegment& HAnimSegment508 =  HAnimSegment();
HAnimSegment508.setUSE(CString("hanim_r_metacarpal_4"));
HAnimHumanoid41.setSegments(&HAnimSegment508);

HAnimSegment& HAnimSegment509 =  HAnimSegment();
HAnimSegment509.setUSE(CString("hanim_l_metacarpal_5"));
HAnimHumanoid41.setSegments(&HAnimSegment509);

HAnimSegment& HAnimSegment510 =  HAnimSegment();
HAnimSegment510.setUSE(CString("hanim_r_metacarpal_5"));
HAnimHumanoid41.setSegments(&HAnimSegment510);

HAnimSegment& HAnimSegment511 =  HAnimSegment();
HAnimSegment511.setUSE(CString("hanim_l_metatarsal_2"));
HAnimHumanoid41.setSegments(&HAnimSegment511);

HAnimSegment& HAnimSegment512 =  HAnimSegment();
HAnimSegment512.setUSE(CString("hanim_r_metatarsal_2"));
HAnimHumanoid41.setSegments(&HAnimSegment512);

HAnimSegment& HAnimSegment513 =  HAnimSegment();
HAnimSegment513.setUSE(CString("hanim_l_scapula"));
HAnimHumanoid41.setSegments(&HAnimSegment513);

HAnimSegment& HAnimSegment514 =  HAnimSegment();
HAnimSegment514.setUSE(CString("hanim_r_scapula"));
HAnimHumanoid41.setSegments(&HAnimSegment514);

HAnimSegment& HAnimSegment515 =  HAnimSegment();
HAnimSegment515.setUSE(CString("hanim_l_talus"));
HAnimHumanoid41.setSegments(&HAnimSegment515);

HAnimSegment& HAnimSegment516 =  HAnimSegment();
HAnimSegment516.setUSE(CString("hanim_r_talus"));
HAnimHumanoid41.setSegments(&HAnimSegment516);

HAnimSegment& HAnimSegment517 =  HAnimSegment();
HAnimSegment517.setUSE(CString("hanim_l_tarsal_distal_phalanx_2"));
HAnimHumanoid41.setSegments(&HAnimSegment517);

HAnimSegment& HAnimSegment518 =  HAnimSegment();
HAnimSegment518.setUSE(CString("hanim_r_tarsal_distal_phalanx_2"));
HAnimHumanoid41.setSegments(&HAnimSegment518);

HAnimSegment& HAnimSegment519 =  HAnimSegment();
HAnimSegment519.setUSE(CString("hanim_l_tarsal_proximal_phalanx_2"));
HAnimHumanoid41.setSegments(&HAnimSegment519);

HAnimSegment& HAnimSegment520 =  HAnimSegment();
HAnimSegment520.setUSE(CString("hanim_r_tarsal_proximal_phalanx_2"));
HAnimHumanoid41.setSegments(&HAnimSegment520);

HAnimSegment& HAnimSegment521 =  HAnimSegment();
HAnimSegment521.setUSE(CString("hanim_l_thigh"));
HAnimHumanoid41.setSegments(&HAnimSegment521);

HAnimSegment& HAnimSegment522 =  HAnimSegment();
HAnimSegment522.setUSE(CString("hanim_r_thigh"));
HAnimHumanoid41.setSegments(&HAnimSegment522);

HAnimSegment& HAnimSegment523 =  HAnimSegment();
HAnimSegment523.setUSE(CString("hanim_l_upperarm"));
HAnimHumanoid41.setSegments(&HAnimSegment523);

HAnimSegment& HAnimSegment524 =  HAnimSegment();
HAnimSegment524.setUSE(CString("hanim_r_upperarm"));
HAnimHumanoid41.setSegments(&HAnimSegment524);

HAnimSite& HAnimSite525 =  HAnimSite();
HAnimSite525.setUSE(CString("hanim_crotch_pt"));
HAnimHumanoid41.setSites(&HAnimSite525);

HAnimSite& HAnimSite526 =  HAnimSite();
HAnimSite526.setUSE(CString("hanim_skull_vertex_tip"));
HAnimHumanoid41.setSites(&HAnimSite526);

HAnimSite& HAnimSite527 =  HAnimSite();
HAnimSite527.setUSE(CString("hanim_sellion_pt"));
HAnimHumanoid41.setSites(&HAnimSite527);

HAnimSite& HAnimSite528 =  HAnimSite();
HAnimSite528.setUSE(CString("hanim_supramenton_pt"));
HAnimHumanoid41.setSites(&HAnimSite528);

HAnimSite& HAnimSite529 =  HAnimSite();
HAnimSite529.setUSE(CString("hanim_nuchale_pt"));
HAnimHumanoid41.setSites(&HAnimSite529);

HAnimSite& HAnimSite530 =  HAnimSite();
HAnimSite530.setUSE(CString("hanim_suprasternale_pt"));
HAnimHumanoid41.setSites(&HAnimSite530);

HAnimSite& HAnimSite531 =  HAnimSite();
HAnimSite531.setUSE(CString("hanim_cervicale_pt"));
HAnimHumanoid41.setSites(&HAnimSite531);

HAnimSite& HAnimSite532 =  HAnimSite();
HAnimSite532.setUSE(CString("hanim_substernale_pt"));
HAnimHumanoid41.setSites(&HAnimSite532);

HAnimSite& HAnimSite533 =  HAnimSite();
HAnimSite533.setUSE(CString("hanim_rib10_midspine_pt"));
HAnimHumanoid41.setSites(&HAnimSite533);

HAnimSite& HAnimSite534 =  HAnimSite();
HAnimSite534.setUSE(CString("hanim_waist_preferred_posterior_pt"));
HAnimHumanoid41.setSites(&HAnimSite534);

HAnimSite& HAnimSite535 =  HAnimSite();
HAnimSite535.setUSE(CString("hanim_navel_pt"));
HAnimHumanoid41.setSites(&HAnimSite535);

HAnimSite& HAnimSite536 =  HAnimSite();
HAnimSite536.setUSE(CString("hanim_l_acromion_pt"));
HAnimHumanoid41.setSites(&HAnimSite536);

HAnimSite& HAnimSite537 =  HAnimSite();
HAnimSite537.setUSE(CString("hanim_r_acromion_pt"));
HAnimHumanoid41.setSites(&HAnimSite537);

HAnimSite& HAnimSite538 =  HAnimSite();
HAnimSite538.setUSE(CString("hanim_r_asis_pt"));
HAnimHumanoid41.setSites(&HAnimSite538);

HAnimSite& HAnimSite539 =  HAnimSite();
HAnimSite539.setUSE(CString("hanim_l_asis_pt"));
HAnimHumanoid41.setSites(&HAnimSite539);

HAnimSite& HAnimSite540 =  HAnimSite();
HAnimSite540.setUSE(CString("hanim_l_axilla_distal_pt"));
HAnimHumanoid41.setSites(&HAnimSite540);

HAnimSite& HAnimSite541 =  HAnimSite();
HAnimSite541.setUSE(CString("hanim_r_axilla_distal_pt"));
HAnimHumanoid41.setSites(&HAnimSite541);

HAnimSite& HAnimSite542 =  HAnimSite();
HAnimSite542.setUSE(CString("hanim_l_axilla_proximal_pt"));
HAnimHumanoid41.setSites(&HAnimSite542);

HAnimSite& HAnimSite543 =  HAnimSite();
HAnimSite543.setUSE(CString("hanim_r_axilla_proximal_pt"));
HAnimHumanoid41.setSites(&HAnimSite543);

HAnimSite& HAnimSite544 =  HAnimSite();
HAnimSite544.setUSE(CString("hanim_l_calcaneus_posterior_pt"));
HAnimHumanoid41.setSites(&HAnimSite544);

HAnimSite& HAnimSite545 =  HAnimSite();
HAnimSite545.setUSE(CString("hanim_r_calcaneus_posterior_pt"));
HAnimHumanoid41.setSites(&HAnimSite545);

HAnimSite& HAnimSite546 =  HAnimSite();
HAnimSite546.setUSE(CString("hanim_l_carpal_distal_phalanx_1_tip"));
HAnimHumanoid41.setSites(&HAnimSite546);

HAnimSite& HAnimSite547 =  HAnimSite();
HAnimSite547.setUSE(CString("hanim_r_carpal_distal_phalanx_1_tip"));
HAnimHumanoid41.setSites(&HAnimSite547);

HAnimSite& HAnimSite548 =  HAnimSite();
HAnimSite548.setUSE(CString("hanim_l_carpal_distal_phalanx_2_tip"));
HAnimHumanoid41.setSites(&HAnimSite548);

HAnimSite& HAnimSite549 =  HAnimSite();
HAnimSite549.setUSE(CString("hanim_r_carpal_distal_phalanx_2_tip"));
HAnimHumanoid41.setSites(&HAnimSite549);

HAnimSite& HAnimSite550 =  HAnimSite();
HAnimSite550.setUSE(CString("hanim_l_carpal_distal_phalanx_3_tip"));
HAnimHumanoid41.setSites(&HAnimSite550);

HAnimSite& HAnimSite551 =  HAnimSite();
HAnimSite551.setUSE(CString("hanim_r_carpal_distal_phalanx_3_tip"));
HAnimHumanoid41.setSites(&HAnimSite551);

HAnimSite& HAnimSite552 =  HAnimSite();
HAnimSite552.setUSE(CString("hanim_l_carpal_distal_phalanx_4_tip"));
HAnimHumanoid41.setSites(&HAnimSite552);

HAnimSite& HAnimSite553 =  HAnimSite();
HAnimSite553.setUSE(CString("hanim_r_carpal_distal_phalanx_4_tip"));
HAnimHumanoid41.setSites(&HAnimSite553);

HAnimSite& HAnimSite554 =  HAnimSite();
HAnimSite554.setUSE(CString("hanim_l_carpal_distal_phalanx_5_tip"));
HAnimHumanoid41.setSites(&HAnimSite554);

HAnimSite& HAnimSite555 =  HAnimSite();
HAnimSite555.setUSE(CString("hanim_r_carpal_distal_phalanx_5_tip"));
HAnimHumanoid41.setSites(&HAnimSite555);

HAnimSite& HAnimSite556 =  HAnimSite();
HAnimSite556.setUSE(CString("hanim_l_clavicle_pt"));
HAnimHumanoid41.setSites(&HAnimSite556);

HAnimSite& HAnimSite557 =  HAnimSite();
HAnimSite557.setUSE(CString("hanim_r_clavicle_pt"));
HAnimHumanoid41.setSites(&HAnimSite557);

HAnimSite& HAnimSite558 =  HAnimSite();
HAnimSite558.setUSE(CString("hanim_l_dactylion_pt"));
HAnimHumanoid41.setSites(&HAnimSite558);

HAnimSite& HAnimSite559 =  HAnimSite();
HAnimSite559.setUSE(CString("hanim_r_dactylion_pt"));
HAnimHumanoid41.setSites(&HAnimSite559);

HAnimSite& HAnimSite560 =  HAnimSite();
HAnimSite560.setUSE(CString("hanim_l_femoral_lateral_epicondyle_pt"));
HAnimHumanoid41.setSites(&HAnimSite560);

HAnimSite& HAnimSite561 =  HAnimSite();
HAnimSite561.setUSE(CString("hanim_r_femoral_lateral_epicondyle_pt"));
HAnimHumanoid41.setSites(&HAnimSite561);

HAnimSite& HAnimSite562 =  HAnimSite();
HAnimSite562.setUSE(CString("hanim_l_femoral_medial_epicondyle_pt"));
HAnimHumanoid41.setSites(&HAnimSite562);

HAnimSite& HAnimSite563 =  HAnimSite();
HAnimSite563.setUSE(CString("hanim_r_femoral_medial_epicondyle_pt"));
HAnimHumanoid41.setSites(&HAnimSite563);

HAnimSite& HAnimSite564 =  HAnimSite();
HAnimSite564.setUSE(CString("hanim_l_forefoot_tip"));
HAnimHumanoid41.setSites(&HAnimSite564);

HAnimSite& HAnimSite565 =  HAnimSite();
HAnimSite565.setUSE(CString("hanim_r_forefoot_tip"));
HAnimHumanoid41.setSites(&HAnimSite565);

HAnimSite& HAnimSite566 =  HAnimSite();
HAnimSite566.setUSE(CString("hanim_r_gonion_pt"));
HAnimHumanoid41.setSites(&HAnimSite566);

HAnimSite& HAnimSite567 =  HAnimSite();
HAnimSite567.setUSE(CString("hanim_l_gonion_pt"));
HAnimHumanoid41.setSites(&HAnimSite567);

HAnimSite& HAnimSite568 =  HAnimSite();
HAnimSite568.setUSE(CString("hanim_l_humeral_lateral_epicondyle_pt"));
HAnimHumanoid41.setSites(&HAnimSite568);

HAnimSite& HAnimSite569 =  HAnimSite();
HAnimSite569.setUSE(CString("hanim_r_humeral_lateral_epicondyle_pt"));
HAnimHumanoid41.setSites(&HAnimSite569);

HAnimSite& HAnimSite570 =  HAnimSite();
HAnimSite570.setUSE(CString("hanim_l_humeral_medial_epicondyle_pt"));
HAnimHumanoid41.setSites(&HAnimSite570);

HAnimSite& HAnimSite571 =  HAnimSite();
HAnimSite571.setUSE(CString("hanim_r_humeral_medial_epicondyle_pt"));
HAnimHumanoid41.setSites(&HAnimSite571);

HAnimSite& HAnimSite572 =  HAnimSite();
HAnimSite572.setUSE(CString("hanim_r_iliocristale_pt"));
HAnimHumanoid41.setSites(&HAnimSite572);

HAnimSite& HAnimSite573 =  HAnimSite();
HAnimSite573.setUSE(CString("hanim_l_iliocristale_pt"));
HAnimHumanoid41.setSites(&HAnimSite573);

HAnimSite& HAnimSite574 =  HAnimSite();
HAnimSite574.setUSE(CString("hanim_r_infraorbitale_pt"));
HAnimHumanoid41.setSites(&HAnimSite574);

HAnimSite& HAnimSite575 =  HAnimSite();
HAnimSite575.setUSE(CString("hanim_l_infraorbitale_pt"));
HAnimHumanoid41.setSites(&HAnimSite575);

HAnimSite& HAnimSite576 =  HAnimSite();
HAnimSite576.setUSE(CString("hanim_l_knee_crease_pt"));
HAnimHumanoid41.setSites(&HAnimSite576);

HAnimSite& HAnimSite577 =  HAnimSite();
HAnimSite577.setUSE(CString("hanim_r_knee_crease_pt"));
HAnimHumanoid41.setSites(&HAnimSite577);

HAnimSite& HAnimSite578 =  HAnimSite();
HAnimSite578.setUSE(CString("hanim_l_lateral_malleolus_pt"));
HAnimHumanoid41.setSites(&HAnimSite578);

HAnimSite& HAnimSite579 =  HAnimSite();
HAnimSite579.setUSE(CString("hanim_r_lateral_malleolus_pt"));
HAnimHumanoid41.setSites(&HAnimSite579);

HAnimSite& HAnimSite580 =  HAnimSite();
HAnimSite580.setUSE(CString("hanim_l_medial_malleolus_pt"));
HAnimHumanoid41.setSites(&HAnimSite580);

HAnimSite& HAnimSite581 =  HAnimSite();
HAnimSite581.setUSE(CString("hanim_r_medial_malleolus_pt"));
HAnimHumanoid41.setSites(&HAnimSite581);

HAnimSite& HAnimSite582 =  HAnimSite();
HAnimSite582.setUSE(CString("hanim_l_metacarpal_phalanx_2_pt"));
HAnimHumanoid41.setSites(&HAnimSite582);

HAnimSite& HAnimSite583 =  HAnimSite();
HAnimSite583.setUSE(CString("hanim_r_metacarpal_phalanx_2_pt"));
HAnimHumanoid41.setSites(&HAnimSite583);

HAnimSite& HAnimSite584 =  HAnimSite();
HAnimSite584.setUSE(CString("hanim_l_metacarpal_phalanx_5_pt"));
HAnimHumanoid41.setSites(&HAnimSite584);

HAnimSite& HAnimSite585 =  HAnimSite();
HAnimSite585.setUSE(CString("hanim_r_metacarpal_phalanx_5_pt"));
HAnimHumanoid41.setSites(&HAnimSite585);

HAnimSite& HAnimSite586 =  HAnimSite();
HAnimSite586.setUSE(CString("hanim_l_metatarsal_phalanx_1_pt"));
HAnimHumanoid41.setSites(&HAnimSite586);

HAnimSite& HAnimSite587 =  HAnimSite();
HAnimSite587.setUSE(CString("hanim_r_metatarsal_phalanx_1_pt"));
HAnimHumanoid41.setSites(&HAnimSite587);

HAnimSite& HAnimSite588 =  HAnimSite();
HAnimSite588.setUSE(CString("hanim_l_metatarsal_phalanx_5_pt"));
HAnimHumanoid41.setSites(&HAnimSite588);

HAnimSite& HAnimSite589 =  HAnimSite();
HAnimSite589.setUSE(CString("hanim_r_metatarsal_phalanx_5_pt"));
HAnimHumanoid41.setSites(&HAnimSite589);

HAnimSite& HAnimSite590 =  HAnimSite();
HAnimSite590.setUSE(CString("hanim_r_neck_base_pt"));
HAnimHumanoid41.setSites(&HAnimSite590);

HAnimSite& HAnimSite591 =  HAnimSite();
HAnimSite591.setUSE(CString("hanim_l_neck_base_pt"));
HAnimHumanoid41.setSites(&HAnimSite591);

HAnimSite& HAnimSite592 =  HAnimSite();
HAnimSite592.setUSE(CString("hanim_l_olecranon_pt"));
HAnimHumanoid41.setSites(&HAnimSite592);

HAnimSite& HAnimSite593 =  HAnimSite();
HAnimSite593.setUSE(CString("hanim_r_olecranon_pt"));
HAnimHumanoid41.setSites(&HAnimSite593);

HAnimSite& HAnimSite594 =  HAnimSite();
HAnimSite594.setUSE(CString("hanim_r_psis_pt"));
HAnimHumanoid41.setSites(&HAnimSite594);

HAnimSite& HAnimSite595 =  HAnimSite();
HAnimSite595.setUSE(CString("hanim_l_psis_pt"));
HAnimHumanoid41.setSites(&HAnimSite595);

HAnimSite& HAnimSite596 =  HAnimSite();
HAnimSite596.setUSE(CString("hanim_l_radial_styloid_pt"));
HAnimHumanoid41.setSites(&HAnimSite596);

HAnimSite& HAnimSite597 =  HAnimSite();
HAnimSite597.setUSE(CString("hanim_r_radial_styloid_pt"));
HAnimHumanoid41.setSites(&HAnimSite597);

HAnimSite& HAnimSite598 =  HAnimSite();
HAnimSite598.setUSE(CString("hanim_l_radiale_pt"));
HAnimHumanoid41.setSites(&HAnimSite598);

HAnimSite& HAnimSite599 =  HAnimSite();
HAnimSite599.setUSE(CString("hanim_r_radiale_pt"));
HAnimHumanoid41.setSites(&HAnimSite599);

HAnimSite& HAnimSite600 =  HAnimSite();
HAnimSite600.setUSE(CString("hanim_r_rib10_pt"));
HAnimHumanoid41.setSites(&HAnimSite600);

HAnimSite& HAnimSite601 =  HAnimSite();
HAnimSite601.setUSE(CString("hanim_l_rib10_pt"));
HAnimHumanoid41.setSites(&HAnimSite601);

HAnimSite& HAnimSite602 =  HAnimSite();
HAnimSite602.setUSE(CString("hanim_temporomandibular_l_site_pt"));
HAnimHumanoid41.setSites(&HAnimSite602);

HAnimSite& HAnimSite603 =  HAnimSite();
HAnimSite603.setUSE(CString("hanim_temporomandibular_r_site_pt"));
HAnimHumanoid41.setSites(&HAnimSite603);

HAnimSite& HAnimSite604 =  HAnimSite();
HAnimSite604.setUSE(CString("hanim_l_sphyrion_pt"));
HAnimHumanoid41.setSites(&HAnimSite604);

HAnimSite& HAnimSite605 =  HAnimSite();
HAnimSite605.setUSE(CString("hanim_r_sphyrion_pt"));
HAnimHumanoid41.setSites(&HAnimSite605);

HAnimSite& HAnimSite606 =  HAnimSite();
HAnimSite606.setUSE(CString("hanim_l_tarsal_distal_phalanx_2_pt"));
HAnimHumanoid41.setSites(&HAnimSite606);

HAnimSite& HAnimSite607 =  HAnimSite();
HAnimSite607.setUSE(CString("hanim_r_tarsal_distal_phalanx_2_pt"));
HAnimHumanoid41.setSites(&HAnimSite607);

HAnimSite& HAnimSite608 =  HAnimSite();
HAnimSite608.setUSE(CString("hanim_r_thelion_pt"));
HAnimHumanoid41.setSites(&HAnimSite608);

HAnimSite& HAnimSite609 =  HAnimSite();
HAnimSite609.setUSE(CString("hanim_l_thelion_pt"));
HAnimHumanoid41.setSites(&HAnimSite609);

HAnimSite& HAnimSite610 =  HAnimSite();
HAnimSite610.setUSE(CString("hanim_r_tragion_pt"));
HAnimHumanoid41.setSites(&HAnimSite610);

HAnimSite& HAnimSite611 =  HAnimSite();
HAnimSite611.setUSE(CString("hanim_l_tragion_pt"));
HAnimHumanoid41.setSites(&HAnimSite611);

HAnimSite& HAnimSite612 =  HAnimSite();
HAnimSite612.setUSE(CString("hanim_r_trochanterion_pt"));
HAnimHumanoid41.setSites(&HAnimSite612);

HAnimSite& HAnimSite613 =  HAnimSite();
HAnimSite613.setUSE(CString("hanim_l_trochanterion_pt"));
HAnimHumanoid41.setSites(&HAnimSite613);

HAnimSite& HAnimSite614 =  HAnimSite();
HAnimSite614.setUSE(CString("hanim_l_ulnar_styloid_pt"));
HAnimHumanoid41.setSites(&HAnimSite614);

HAnimSite& HAnimSite615 =  HAnimSite();
HAnimSite615.setUSE(CString("hanim_r_ulnar_styloid_pt"));
HAnimHumanoid41.setSites(&HAnimSite615);

HAnimSite& HAnimSite616 =  HAnimSite();
HAnimSite616.setDEF(CString("hanim_l_inclined_view"));
HAnimSite616.X3DNode::setName(CString("l_inclined_view"));
HAnimSite616.setTranslation(new float[]{1.62,1.05,2.06});
HAnimSite616.setRotation(new float[]{-0.113,0.993,0.0347,0.671});
Viewpoint& Viewpoint617 =  Viewpoint();
Viewpoint617.setDEF(CString("hanim_l_inclined_viewpoint"));
Viewpoint617.setDescription(CString("left inclined"));
Viewpoint617.setPosition(new float[]{0.0,0.0,0.0});
HAnimSite616.addChild(&Viewpoint617);

HAnimHumanoid41.setViewpoints(&HAnimSite616);

HAnimSite& HAnimSite618 =  HAnimSite();
HAnimSite618.setDEF(CString("hanim_r_inclined_view"));
HAnimSite618.X3DNode::setName(CString("r_inclined_view"));
HAnimSite618.setTranslation(new float[]{-1.62,1.05,2.06});
HAnimSite618.setRotation(new float[]{-0.113,-0.993,0.0347,0.671});
Viewpoint& Viewpoint619 =  Viewpoint();
Viewpoint619.setDEF(CString("hanim_r_inclined_viewpoint"));
Viewpoint619.setDescription(CString("right inclined"));
Viewpoint619.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint619.setCenterOfRotation(new float[]{0.0,0.9,0.0});
HAnimSite618.addChild(&Viewpoint619);

HAnimHumanoid41.addViewpoints(&HAnimSite618);

HAnimSite& HAnimSite620 =  HAnimSite();
HAnimSite620.setDEF(CString("hanim_front_view"));
HAnimSite620.X3DNode::setName(CString("front_view"));
HAnimSite620.setTranslation(new float[]{0.0,0.85,2.58});
Viewpoint& Viewpoint621 =  Viewpoint();
Viewpoint621.setDEF(CString("hanim_front_viewpoint"));
Viewpoint621.setDescription(CString("front"));
Viewpoint621.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint621.setCenterOfRotation(new float[]{0.0,0.9,0.0});
HAnimSite620.addChild(&Viewpoint621);

HAnimHumanoid41.addViewpoints(&HAnimSite620);

HAnimSite& HAnimSite622 =  HAnimSite();
HAnimSite622.setDEF(CString("hanim_back_view"));
HAnimSite622.X3DNode::setName(CString("back_view"));
HAnimSite622.setTranslation(new float[]{0.0,0.85,-2.58});
HAnimSite622.setRotation(new float[]{0.0,1.0,0.0,3.14});
Viewpoint& Viewpoint623 =  Viewpoint();
Viewpoint623.setDEF(CString("hanim_back_viewpoint"));
Viewpoint623.setDescription(CString("back"));
Viewpoint623.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint623.setCenterOfRotation(new float[]{0.0,0.9,0.0});
HAnimSite622.addChild(&Viewpoint623);

HAnimHumanoid41.addViewpoints(&HAnimSite622);

HAnimSite& HAnimSite624 =  HAnimSite();
HAnimSite624.setDEF(CString("hanim_l_side_view"));
HAnimSite624.X3DNode::setName(CString("l_side_view"));
HAnimSite624.setTranslation(new float[]{2.6,0.854,0.0});
HAnimSite624.setRotation(new float[]{0.0,1.0,0.0,1.5708});
Viewpoint& Viewpoint625 =  Viewpoint();
Viewpoint625.setDEF(CString("hanim_l_side_viewpoint"));
Viewpoint625.setDescription(CString("left side"));
Viewpoint625.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint625.setCenterOfRotation(new float[]{0.0,0.9,0.0});
HAnimSite624.addChild(&Viewpoint625);

HAnimHumanoid41.addViewpoints(&HAnimSite624);

HAnimSite& HAnimSite626 =  HAnimSite();
HAnimSite626.setDEF(CString("hanim_Top_view"));
HAnimSite626.X3DNode::setName(CString("Top_view"));
HAnimSite626.setTranslation(new float[]{0.0,3.5,0.0});
HAnimSite626.setRotation(new float[]{1.0,0.0,0.0,-1.57});
Viewpoint& Viewpoint627 =  Viewpoint();
Viewpoint627.setDEF(CString("hanim_Top_viewpoint"));
Viewpoint627.setDescription(CString("Top"));
Viewpoint627.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint627.setCenterOfRotation(new float[]{0.0,0.9,0.0});
HAnimSite626.addChild(&Viewpoint627);

HAnimHumanoid41.addViewpoints(&HAnimSite626);

HAnimSite& HAnimSite628 =  HAnimSite();
HAnimSite628.setDEF(CString("hanim_front_close_view"));
HAnimSite628.X3DNode::setName(CString("front_close_view"));
HAnimSite628.setTranslation(new float[]{0.0,0.854,1.575});
Viewpoint& Viewpoint629 =  Viewpoint();
Viewpoint629.setDEF(CString("hanim_front_close_viewpoint"));
Viewpoint629.setDescription(CString("front close"));
Viewpoint629.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint629.setCenterOfRotation(new float[]{0.0,0.0,1.575});
HAnimSite628.addChild(&Viewpoint629);

HAnimHumanoid41.addViewpoints(&HAnimSite628);

HAnimSite& HAnimSite630 =  HAnimSite();
HAnimSite630.setDEF(CString("hanim_side_close_view"));
HAnimSite630.X3DNode::setName(CString("side_close_view"));
HAnimSite630.setTranslation(new float[]{1.56,0.854,0.0});
HAnimSite630.setRotation(new float[]{0.0,1.0,0.0,1.5708});
Viewpoint& Viewpoint631 =  Viewpoint();
Viewpoint631.setDEF(CString("hanim_side_close_viewpoint"));
Viewpoint631.setDescription(CString("side close"));
Viewpoint631.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint631.setCenterOfRotation(new float[]{1.6,0.0,0.0});
HAnimSite630.addChild(&Viewpoint631);

HAnimHumanoid41.addViewpoints(&HAnimSite630);

HAnimSite& HAnimSite632 =  HAnimSite();
HAnimSite632.setDEF(CString("hanim_head_front_close_view"));
HAnimSite632.X3DNode::setName(CString("head_front_close_view"));
HAnimSite632.setTranslation(new float[]{0.0,1.5,1.0});
Viewpoint& Viewpoint633 =  Viewpoint();
Viewpoint633.setDEF(CString("hanim_head_front_close_viewpoint"));
Viewpoint633.setDescription(CString("head front close"));
Viewpoint633.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint633.setCenterOfRotation(new float[]{0.0,0.0,1.0});
HAnimSite632.addChild(&Viewpoint633);

HAnimHumanoid41.addViewpoints(&HAnimSite632);

HAnimSite& HAnimSite634 =  HAnimSite();
HAnimSite634.setDEF(CString("hanim_chest_front_close_view"));
HAnimSite634.X3DNode::setName(CString("chest_front_close_view"));
HAnimSite634.setTranslation(new float[]{0.0,1.2,1.0});
Viewpoint& Viewpoint635 =  Viewpoint();
Viewpoint635.setDEF(CString("hanim_chest_front_close_viewpoint"));
Viewpoint635.setDescription(CString("chest front close"));
Viewpoint635.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint635.setCenterOfRotation(new float[]{0.0,0.0,1.0});
HAnimSite634.addChild(&Viewpoint635);

HAnimHumanoid41.addViewpoints(&HAnimSite634);

HAnimSite& HAnimSite636 =  HAnimSite();
HAnimSite636.setDEF(CString("hanim_pelvis_front_close_view"));
HAnimSite636.X3DNode::setName(CString("pelvis_front_close_view"));
HAnimSite636.setTranslation(new float[]{0.0,0.8,1.0});
Viewpoint& Viewpoint637 =  Viewpoint();
Viewpoint637.setDEF(CString("hanim_pelvis_front_close_viewpoint"));
Viewpoint637.setDescription(CString("pelvis front close"));
Viewpoint637.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint637.setCenterOfRotation(new float[]{0.0,0.0,1.0});
HAnimSite636.addChild(&Viewpoint637);

HAnimHumanoid41.addViewpoints(&HAnimSite636);

HAnimSite& HAnimSite638 =  HAnimSite();
HAnimSite638.setDEF(CString("hanim_knees_front_close_view"));
HAnimSite638.X3DNode::setName(CString("knees_front_close_view"));
HAnimSite638.setTranslation(new float[]{0.0,0.4,1.0});
Viewpoint& Viewpoint639 =  Viewpoint();
Viewpoint639.setDEF(CString("hanim_knees_front_close_viewpoint"));
Viewpoint639.setDescription(CString("knees front close"));
Viewpoint639.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint639.setCenterOfRotation(new float[]{0.0,0.4,0.0});
HAnimSite638.addChild(&Viewpoint639);

HAnimHumanoid41.addViewpoints(&HAnimSite638);

HAnimSite& HAnimSite640 =  HAnimSite();
HAnimSite640.setDEF(CString("hanim_feet_front_close_view"));
HAnimSite640.X3DNode::setName(CString("feet_front_close_view"));
HAnimSite640.setTranslation(new float[]{0.0,0.0,1.0});
Viewpoint& Viewpoint641 =  Viewpoint();
Viewpoint641.setDEF(CString("hanim_feet_front_close_viewpoint"));
Viewpoint641.setDescription(CString("feet front close"));
Viewpoint641.setPosition(new float[]{0.0,0.0,0.0});
HAnimSite640.addChild(&Viewpoint641);

HAnimHumanoid41.addViewpoints(&HAnimSite640);

HAnimSite& HAnimSite642 =  HAnimSite();
HAnimSite642.setDEF(CString("hanim_eye_level_view"));
HAnimSite642.X3DNode::setName(CString("eye_level_view"));
HAnimSite642.setTranslation(new float[]{0.0,1.6332,0.0502});
Viewpoint& Viewpoint643 =  Viewpoint();
Viewpoint643.setDEF(CString("hanim_eye_level_viewpoint"));
Viewpoint643.setDescription(CString("eye level looking forward"));
Viewpoint643.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint643.setOrientation(new float[]{0.0,1.0,0.0,3.141593});
HAnimSite642.addChild(&Viewpoint643);

HAnimHumanoid41.addViewpoints(&HAnimSite642);

HAnimSite& HAnimSite644 =  HAnimSite();
HAnimSite644.setUSE(CString("hanim_l_eyeball_site_view"));
HAnimHumanoid41.setSites(&HAnimSite644);

HAnimSite& HAnimSite645 =  HAnimSite();
HAnimSite645.setUSE(CString("hanim_r_eyeball_site_view"));
HAnimHumanoid41.setSites(&HAnimSite645);

HAnimSite& HAnimSite646 =  HAnimSite();
HAnimSite646.setUSE(CString("hanim_l_hand_front_view"));
HAnimHumanoid41.setSites(&HAnimSite646);

HAnimSite& HAnimSite647 =  HAnimSite();
HAnimSite647.setUSE(CString("hanim_r_hand_front_view"));
HAnimHumanoid41.setSites(&HAnimSite647);

Scene27.addChild(&HAnimHumanoid41);

X3D0.setScene(&Scene27);

//}

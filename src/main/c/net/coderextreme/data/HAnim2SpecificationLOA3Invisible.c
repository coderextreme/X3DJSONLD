#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "HAnim";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

meta meta3 = createNode("meta");
meta3.name = "title";
meta3.content = "HAnim2SpecificationLOA3Invisible.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "description";
meta4.content = "HAnim Specification reference example providing full coverage (and no illustrated visibility) of all specified HAnim constructs, also suitable for re-use as an authoring template.";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "reference";
meta5.content = "https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "reference";
meta6.content = "HAnim2SpecificationLOA3Illustrated.x3d";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "reference";
meta7.content = "HAnim2SpecificationLOA3Animation.x3d";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "reference";
meta8.content = "HAnimSpecificationExampleChangeLog.txt";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "reference";
meta9.content = "Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "reference";
meta10.content = "http://www.cis.upenn.edu/~badler/anthro/89-71.ps";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "reference";
meta11.content = "tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "reference";
meta12.content = "originals/LOA3ExampleSourceWithDiamondsOriginal.wrl";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "reference";
meta13.content = "originals/LOA3ExampleSourceWithDiamondsOriginal.x3d";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "reference";
meta14.content = "originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "reference";
meta15.content = "HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "created";
meta16.content = "24 April 2013";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "modified";
meta17.content = "Mon, 15 Sep 2025 05:20:09 GMT";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "creator";
meta18.content = "Matthew T. Beitler, Joe D. Williams, Don Brutzman";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "Image";
meta19.content = "images/BonesAllSkeletonFrontViewLOA1.png";
head1.meta[17] = meta19;

meta meta20 = createNode("meta");
meta20.name = "Image";
meta20.content = "images/BonesAllSkeletonFrontViewLOA2.png";
head1.meta[18] = meta20;

meta meta21 = createNode("meta");
meta21.name = "Image";
meta21.content = "images/BonesAllSkeletonFrontViewLOA3.png";
head1.meta[19] = meta21;

meta meta22 = createNode("meta");
meta22.name = "TODO";
meta22.content = "move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations";
head1.meta[20] = meta22;

meta meta23 = createNode("meta");
meta23.name = "TODO";
meta23.content = "insert MetadataInteger nodes indicating LOA for each Joint and Segment";
head1.meta[21] = meta23;

meta meta24 = createNode("meta");
meta24.name = "translator";
meta24.content = "Don Brutzman and Joe Williams";
head1.meta[22] = meta24;

meta meta25 = createNode("meta");
meta25.name = "generator";
meta25.content = "BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo";
head1.meta[23] = meta25;

meta meta26 = createNode("meta");
meta26.name = "generator";
meta26.content = "X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit";
head1.meta[24] = meta26;

head = head1;

Background Background28 = createNode("Background");
Background28.skyColor = new MFColor(new float[0.3,0.3,0.3]);
children = new MFNode();

children[0] = Background28;

NavigationInfo NavigationInfo29 = createNode("NavigationInfo");
children[1] = NavigationInfo29;

Group Group30 = createNode("Group");
Group30.DEF = "Original_WorldInfo";
WorldInfo WorldInfo31 = createNode("WorldInfo");
WorldInfo31.title = "HANIM 200x Default Joint Centers, LOA3";
WorldInfo31.info = new MFString(new java.lang.String[" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "]);
Group30.children = new MFNode();

Group30.children[0] = WorldInfo31;

children[2] = Group30;

Viewpoint Viewpoint32 = createNode("Viewpoint");
Viewpoint32.description = "Humanoid LOA 3 Front";
Viewpoint32.position = new SFVec3f(new float[0,0.4,4]);
Viewpoint32.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
children[3] = Viewpoint32;

Viewpoint Viewpoint33 = createNode("Viewpoint");
Viewpoint33.description = "Humanoid LOA 3 Front Close";
Viewpoint33.position = new SFVec3f(new float[0,0.8,2]);
Viewpoint33.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
children[4] = Viewpoint33;

Viewpoint Viewpoint34 = createNode("Viewpoint");
Viewpoint34.description = "Humanoid LOA 3 Front Closer";
Viewpoint34.position = new SFVec3f(new float[0,1.2,1]);
Viewpoint34.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
children[5] = Viewpoint34;

Viewpoint Viewpoint35 = createNode("Viewpoint");
Viewpoint35.description = "Humanoid LOA 3 Front Face";
Viewpoint35.position = new SFVec3f(new float[0,1.63,1]);
Viewpoint35.centerOfRotation = new SFVec3f(new float[0,1.5,0.0016]);
children[6] = Viewpoint35;

Viewpoint Viewpoint36 = createNode("Viewpoint");
Viewpoint36.description = "Humanoid LOA 3 Right Side";
Viewpoint36.position = new SFVec3f(new float[2.6,0.8,0]);
Viewpoint36.orientation = new SFRotation(new float[0,1,0,1.5708]);
Viewpoint36.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
children[7] = Viewpoint36;

Viewpoint Viewpoint37 = createNode("Viewpoint");
Viewpoint37.description = "Humanoid LOA 3 Right Side Close";
Viewpoint37.position = new SFVec3f(new float[1,0.8,0.5]);
Viewpoint37.orientation = new SFRotation(new float[0,1,0,1.2]);
Viewpoint37.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
children[8] = Viewpoint37;

Viewpoint Viewpoint38 = createNode("Viewpoint");
Viewpoint38.description = "Humanoid LOA 3 Left Side Close";
Viewpoint38.position = new SFVec3f(new float[-1,0.8,0.5]);
Viewpoint38.orientation = new SFRotation(new float[0,1,0,-1.2]);
Viewpoint38.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
children[9] = Viewpoint38;

Viewpoint Viewpoint39 = createNode("Viewpoint");
Viewpoint39.description = "Humanoid LOA 3 Left Side";
Viewpoint39.position = new SFVec3f(new float[-2.6,0.8,0]);
Viewpoint39.orientation = new SFRotation(new float[0,1,0,-1.5708]);
Viewpoint39.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
children[10] = Viewpoint39;

Viewpoint Viewpoint40 = createNode("Viewpoint");
Viewpoint40.description = "Humanoid LOA 3 Top";
Viewpoint40.position = new SFVec3f(new float[0,3.5,0]);
Viewpoint40.orientation = new SFRotation(new float[1,0,0,-1.5708]);
Viewpoint40.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
children[11] = Viewpoint40;

HAnimHumanoid HAnimHumanoid41 = createNode("HAnimHumanoid");
HAnimHumanoid41.DEF = "hanim_humanoid";
HAnimHumanoid41.name = "humanoid";
HAnimHumanoid41.loa = 3;
MetadataSet MetadataSet42 = createNode("MetadataSet");
MetadataSet42.name = "HAnimHumanoid.info";
MetadataSet42.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
MetadataString MetadataString43 = createNode("MetadataString");
MetadataString43.name = "authorName";
MetadataSet42.value = new MFNode();

MetadataSet42.value[0] = MetadataString43;

MetadataString MetadataString44 = createNode("MetadataString");
MetadataString44.name = "authorEmail";
MetadataSet42.value[1] = MetadataString44;

MetadataString MetadataString45 = createNode("MetadataString");
MetadataString45.name = "copyright";
MetadataSet42.value[2] = MetadataString45;

MetadataString MetadataString46 = createNode("MetadataString");
MetadataString46.name = "creationDate";
MetadataSet42.value[3] = MetadataString46;

MetadataFloat MetadataFloat47 = createNode("MetadataFloat");
MetadataFloat47.name = "height";
MetadataFloat47.value = new MFFloat(new float[1.7504]);
MetadataSet42.value[4] = MetadataFloat47;

MetadataString MetadataString48 = createNode("MetadataString");
MetadataString48.name = "humanoidVersion";
MetadataSet42.value[5] = MetadataString48;

MetadataString MetadataString49 = createNode("MetadataString");
MetadataString49.name = "usageRestrictions";
MetadataSet42.value[6] = MetadataString49;

HAnimHumanoid41.metadata = new SFNode();

HAnimHumanoid41.metadata[0] = MetadataSet42;

HAnimJoint HAnimJoint50 = createNode("HAnimJoint");
HAnimJoint50.DEF = "hanim_humanoid_root";
HAnimJoint50.name = "humanoid_root";
HAnimJoint50.center = new SFVec3f(new float[0,0.824,0.0277]);
HAnimSegment HAnimSegment51 = createNode("HAnimSegment");
HAnimSegment51.DEF = "hanim_sacrum";
HAnimSegment51.name = "sacrum";
HAnimJoint50.children = new MFNode();

HAnimJoint50.children[0] = HAnimSegment51;

HAnimJoint HAnimJoint52 = createNode("HAnimJoint");
HAnimJoint52.DEF = "hanim_sacroiliac";
HAnimJoint52.name = "sacroiliac";
HAnimJoint52.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimSegment HAnimSegment53 = createNode("HAnimSegment");
HAnimSegment53.DEF = "hanim_pelvis";
HAnimSegment53.name = "pelvis";
HAnimSite HAnimSite54 = createNode("HAnimSite");
HAnimSite54.DEF = "hanim_r_iliocristale_pt";
HAnimSite54.name = "r_iliocristale_pt";
HAnimSite54.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
HAnimSegment53.children = new MFNode();

HAnimSegment53.children[0] = HAnimSite54;

HAnimSite HAnimSite55 = createNode("HAnimSite");
HAnimSite55.DEF = "hanim_r_trochanterion_pt";
HAnimSite55.name = "r_trochanterion_pt";
HAnimSite55.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
HAnimSegment53.children[1] = HAnimSite55;

HAnimSite HAnimSite56 = createNode("HAnimSite");
HAnimSite56.DEF = "hanim_l_iliocristale_pt";
HAnimSite56.name = "l_iliocristale_pt";
HAnimSite56.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
HAnimSegment53.children[2] = HAnimSite56;

HAnimSite HAnimSite57 = createNode("HAnimSite");
HAnimSite57.DEF = "hanim_l_trochanterion_pt";
HAnimSite57.name = "l_trochanterion_pt";
HAnimSite57.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
HAnimSegment53.children[3] = HAnimSite57;

HAnimSite HAnimSite58 = createNode("HAnimSite");
HAnimSite58.DEF = "hanim_r_asis_pt";
HAnimSite58.name = "r_asis_pt";
HAnimSite58.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
HAnimSegment53.children[4] = HAnimSite58;

HAnimSite HAnimSite59 = createNode("HAnimSite");
HAnimSite59.DEF = "hanim_l_asis_pt";
HAnimSite59.name = "l_asis_pt";
HAnimSite59.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
HAnimSegment53.children[5] = HAnimSite59;

HAnimSite HAnimSite60 = createNode("HAnimSite");
HAnimSite60.DEF = "hanim_r_psis_pt";
HAnimSite60.name = "r_psis_pt";
HAnimSite60.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
HAnimSegment53.children[6] = HAnimSite60;

HAnimSite HAnimSite61 = createNode("HAnimSite");
HAnimSite61.DEF = "hanim_l_psis_pt";
HAnimSite61.name = "l_psis_pt";
HAnimSite61.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
HAnimSegment53.children[7] = HAnimSite61;

HAnimSite HAnimSite62 = createNode("HAnimSite");
HAnimSite62.DEF = "hanim_crotch_pt";
HAnimSite62.name = "crotch_pt";
HAnimSite62.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
HAnimSegment53.children[8] = HAnimSite62;

HAnimJoint52.children = new MFNode();

HAnimJoint52.children[0] = HAnimSegment53;

HAnimJoint HAnimJoint63 = createNode("HAnimJoint");
HAnimJoint63.DEF = "hanim_l_hip";
HAnimJoint63.name = "l_hip";
HAnimJoint63.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimSegment HAnimSegment64 = createNode("HAnimSegment");
HAnimSegment64.DEF = "hanim_l_thigh";
HAnimSegment64.name = "l_thigh";
HAnimSite HAnimSite65 = createNode("HAnimSite");
HAnimSite65.DEF = "hanim_l_knee_crease_pt";
HAnimSite65.name = "l_knee_crease_pt";
HAnimSite65.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
HAnimSegment64.children = new MFNode();

HAnimSegment64.children[0] = HAnimSite65;

HAnimSite HAnimSite66 = createNode("HAnimSite");
HAnimSite66.DEF = "hanim_l_femoral_lateral_epicondyle_pt";
HAnimSite66.name = "l_femoral_lateral_epicondyle_pt";
HAnimSite66.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
HAnimSegment64.children[1] = HAnimSite66;

HAnimSite HAnimSite67 = createNode("HAnimSite");
HAnimSite67.DEF = "hanim_l_femoral_medial_epicondyle_pt";
HAnimSite67.name = "l_femoral_medial_epicondyle_pt";
HAnimSite67.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
HAnimSegment64.children[2] = HAnimSite67;

HAnimJoint63.children = new MFNode();

HAnimJoint63.children[0] = HAnimSegment64;

HAnimJoint HAnimJoint68 = createNode("HAnimJoint");
HAnimJoint68.DEF = "hanim_l_knee";
HAnimJoint68.name = "l_knee";
HAnimJoint68.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimSegment HAnimSegment69 = createNode("HAnimSegment");
HAnimSegment69.DEF = "hanim_l_calf";
HAnimSegment69.name = "l_calf";
HAnimJoint68.children = new MFNode();

HAnimJoint68.children[0] = HAnimSegment69;

HAnimJoint HAnimJoint70 = createNode("HAnimJoint");
HAnimJoint70.DEF = "hanim_l_talocrural";
HAnimJoint70.name = "l_talocrural";
HAnimJoint70.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimSegment HAnimSegment71 = createNode("HAnimSegment");
HAnimSegment71.DEF = "hanim_l_talus";
HAnimSegment71.name = "l_talus";
HAnimSite HAnimSite72 = createNode("HAnimSite");
HAnimSite72.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite72.name = "l_lateral_malleolus_pt";
HAnimSite72.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
HAnimSegment71.children = new MFNode();

HAnimSegment71.children[0] = HAnimSite72;

HAnimSite HAnimSite73 = createNode("HAnimSite");
HAnimSite73.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite73.name = "l_medial_malleolus_pt";
HAnimSite73.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
HAnimSegment71.children[1] = HAnimSite73;

HAnimSite HAnimSite74 = createNode("HAnimSite");
HAnimSite74.DEF = "hanim_l_sphyrion_pt";
HAnimSite74.name = "l_sphyrion_pt";
HAnimSite74.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
HAnimSegment71.children[2] = HAnimSite74;

HAnimSite HAnimSite75 = createNode("HAnimSite");
HAnimSite75.DEF = "hanim_l_calcaneus_posterior_pt";
HAnimSite75.name = "l_calcaneus_posterior_pt";
HAnimSite75.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
HAnimSegment71.children[3] = HAnimSite75;

HAnimJoint70.children = new MFNode();

HAnimJoint70.children[0] = HAnimSegment71;

HAnimJoint HAnimJoint76 = createNode("HAnimJoint");
HAnimJoint76.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint76.name = "l_tarsometatarsal_2";
HAnimJoint76.center = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
HAnimSegment HAnimSegment77 = createNode("HAnimSegment");
HAnimSegment77.DEF = "hanim_l_metatarsal_2";
HAnimSegment77.name = "l_metatarsal_2";
HAnimJoint76.children = new MFNode();

HAnimJoint76.children[0] = HAnimSegment77;

HAnimJoint HAnimJoint78 = createNode("HAnimJoint");
HAnimJoint78.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint78.name = "l_metatarsophalangeal_2";
HAnimJoint78.center = new SFVec3f(new float[0.1086,0.0001,0.0368]);
HAnimSegment HAnimSegment79 = createNode("HAnimSegment");
HAnimSegment79.DEF = "hanim_l_tarsal_proximal_phalanx_2";
HAnimSegment79.name = "l_tarsal_proximal_phalanx_2";
HAnimSite HAnimSite80 = createNode("HAnimSite");
HAnimSite80.DEF = "hanim_l_metatarsal_phalanx_1_pt";
HAnimSite80.name = "l_metatarsal_phalanx_1_pt";
HAnimSite80.translation = new SFVec3f(new float[0.0816,0.0232,0.0106]);
HAnimSegment79.children = new MFNode();

HAnimSegment79.children[0] = HAnimSite80;

HAnimJoint78.children = new MFNode();

HAnimJoint78.children[0] = HAnimSegment79;

HAnimJoint HAnimJoint81 = createNode("HAnimJoint");
HAnimJoint81.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint81.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint81.center = new SFVec3f(new float[0.1086,0,0.0762]);
HAnimSegment HAnimSegment82 = createNode("HAnimSegment");
HAnimSegment82.DEF = "hanim_l_tarsal_distal_phalanx_2";
HAnimSegment82.name = "l_tarsal_distal_phalanx_2";
HAnimSite HAnimSite83 = createNode("HAnimSite");
HAnimSite83.DEF = "hanim_l_forefoot_tip";
HAnimSite83.name = "l_forefoot_tip";
HAnimSite83.translation = new SFVec3f(new float[0.1354,0.0016,0.1476]);
HAnimSegment82.children = new MFNode();

HAnimSegment82.children[0] = HAnimSite83;

HAnimSite HAnimSite84 = createNode("HAnimSite");
HAnimSite84.DEF = "hanim_l_metatarsal_phalanx_5_pt";
HAnimSite84.name = "l_metatarsal_phalanx_5_pt";
HAnimSite84.translation = new SFVec3f(new float[0.1825,0.007,0.0928]);
HAnimSegment82.children[1] = HAnimSite84;

HAnimSite HAnimSite85 = createNode("HAnimSite");
HAnimSite85.DEF = "hanim_l_tarsal_distal_phalanx_2_pt";
HAnimSite85.name = "l_tarsal_distal_phalanx_2_pt";
HAnimSite85.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
HAnimSegment82.children[2] = HAnimSite85;

HAnimJoint81.children = new MFNode();

HAnimJoint81.children[0] = HAnimSegment82;

HAnimJoint78.children[1] = HAnimJoint81;

HAnimJoint76.children[1] = HAnimJoint78;

HAnimJoint70.children[1] = HAnimJoint76;

HAnimJoint68.children[1] = HAnimJoint70;

HAnimJoint63.children[1] = HAnimJoint68;

HAnimJoint52.children[1] = HAnimJoint63;

HAnimJoint HAnimJoint86 = createNode("HAnimJoint");
HAnimJoint86.DEF = "hanim_r_hip";
HAnimJoint86.name = "r_hip";
HAnimJoint86.center = new SFVec3f(new float[-0.0961,0.9124,-0.0001]);
HAnimSegment HAnimSegment87 = createNode("HAnimSegment");
HAnimSegment87.DEF = "hanim_r_thigh";
HAnimSegment87.name = "r_thigh";
HAnimSite HAnimSite88 = createNode("HAnimSite");
HAnimSite88.DEF = "hanim_r_knee_crease_pt";
HAnimSite88.name = "r_knee_crease_pt";
HAnimSite88.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
HAnimSegment87.children = new MFNode();

HAnimSegment87.children[0] = HAnimSite88;

HAnimSite HAnimSite89 = createNode("HAnimSite");
HAnimSite89.DEF = "hanim_r_femoral_lateral_epicondyle_pt";
HAnimSite89.name = "r_femoral_lateral_epicondyle_pt";
HAnimSite89.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
HAnimSegment87.children[1] = HAnimSite89;

HAnimSite HAnimSite90 = createNode("HAnimSite");
HAnimSite90.DEF = "hanim_r_femoral_medial_epicondyle_pt";
HAnimSite90.name = "r_femoral_medial_epicondyle_pt";
HAnimSite90.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
HAnimSegment87.children[2] = HAnimSite90;

HAnimJoint86.children = new MFNode();

HAnimJoint86.children[0] = HAnimSegment87;

HAnimJoint HAnimJoint91 = createNode("HAnimJoint");
HAnimJoint91.DEF = "hanim_r_knee";
HAnimJoint91.name = "r_knee";
HAnimJoint91.center = new SFVec3f(new float[-0.104,0.4867,0.0308]);
HAnimSegment HAnimSegment92 = createNode("HAnimSegment");
HAnimSegment92.DEF = "hanim_r_calf";
HAnimSegment92.name = "r_calf";
HAnimJoint91.children = new MFNode();

HAnimJoint91.children[0] = HAnimSegment92;

HAnimJoint HAnimJoint93 = createNode("HAnimJoint");
HAnimJoint93.DEF = "hanim_r_talocrural";
HAnimJoint93.name = "r_talocrural";
HAnimJoint93.center = new SFVec3f(new float[-0.1101,0.0656,-0.0736]);
HAnimSegment HAnimSegment94 = createNode("HAnimSegment");
HAnimSegment94.DEF = "hanim_r_talus";
HAnimSegment94.name = "r_talus";
HAnimSite HAnimSite95 = createNode("HAnimSite");
HAnimSite95.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite95.name = "r_lateral_malleolus_pt";
HAnimSite95.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
HAnimSegment94.children = new MFNode();

HAnimSegment94.children[0] = HAnimSite95;

HAnimSite HAnimSite96 = createNode("HAnimSite");
HAnimSite96.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite96.name = "r_medial_malleolus_pt";
HAnimSite96.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
HAnimSegment94.children[1] = HAnimSite96;

HAnimSite HAnimSite97 = createNode("HAnimSite");
HAnimSite97.DEF = "hanim_r_sphyrion_pt";
HAnimSite97.name = "r_sphyrion_pt";
HAnimSite97.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
HAnimSegment94.children[2] = HAnimSite97;

HAnimSite HAnimSite98 = createNode("HAnimSite");
HAnimSite98.DEF = "hanim_r_calcaneus_posterior_pt";
HAnimSite98.name = "r_calcaneus_posterior_pt";
HAnimSite98.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
HAnimSegment94.children[3] = HAnimSite98;

HAnimJoint93.children = new MFNode();

HAnimJoint93.children[0] = HAnimSegment94;

HAnimJoint HAnimJoint99 = createNode("HAnimJoint");
HAnimJoint99.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint99.name = "r_tarsometatarsal_2";
HAnimJoint99.center = new SFVec3f(new float[-0.1086,0.0001,-0.0368]);
HAnimSegment HAnimSegment100 = createNode("HAnimSegment");
HAnimSegment100.DEF = "hanim_r_metatarsal_2";
HAnimSegment100.name = "r_metatarsal_2";
HAnimJoint99.children = new MFNode();

HAnimJoint99.children[0] = HAnimSegment100;

HAnimJoint HAnimJoint101 = createNode("HAnimJoint");
HAnimJoint101.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint101.name = "r_metatarsophalangeal_2";
HAnimJoint101.center = new SFVec3f(new float[-0.1086,0.0001,0.0368]);
HAnimSegment HAnimSegment102 = createNode("HAnimSegment");
HAnimSegment102.DEF = "hanim_r_tarsal_proximal_phalanx_2";
HAnimSegment102.name = "r_tarsal_proximal_phalanx_2";
HAnimSite HAnimSite103 = createNode("HAnimSite");
HAnimSite103.DEF = "hanim_r_metatarsal_phalanx_1_pt";
HAnimSite103.name = "r_metatarsal_phalanx_1_pt";
HAnimSite103.translation = new SFVec3f(new float[-0.0521,0.026,0.0127]);
HAnimSegment102.children = new MFNode();

HAnimSegment102.children[0] = HAnimSite103;

HAnimJoint101.children = new MFNode();

HAnimJoint101.children[0] = HAnimSegment102;

HAnimJoint HAnimJoint104 = createNode("HAnimJoint");
HAnimJoint104.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint104.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint104.center = new SFVec3f(new float[-0.1086,0,0.0762]);
HAnimSegment HAnimSegment105 = createNode("HAnimSegment");
HAnimSegment105.DEF = "hanim_r_tarsal_distal_phalanx_2";
HAnimSegment105.name = "r_tarsal_distal_phalanx_2";
HAnimSite HAnimSite106 = createNode("HAnimSite");
HAnimSite106.DEF = "hanim_r_forefoot_tip";
HAnimSite106.name = "r_forefoot_tip";
HAnimSite106.translation = new SFVec3f(new float[-0.1043,0.0227,0.145]);
HAnimSegment105.children = new MFNode();

HAnimSegment105.children[0] = HAnimSite106;

HAnimSite HAnimSite107 = createNode("HAnimSite");
HAnimSite107.DEF = "hanim_r_metatarsal_phalanx_5_pt";
HAnimSite107.name = "r_metatarsal_phalanx_5_pt";
HAnimSite107.translation = new SFVec3f(new float[-0.1523,0.0166,0.0895]);
HAnimSegment105.children[1] = HAnimSite107;

HAnimSite HAnimSite108 = createNode("HAnimSite");
HAnimSite108.DEF = "hanim_r_tarsal_distal_phalanx_2_pt";
HAnimSite108.name = "r_tarsal_distal_phalanx_2_pt";
HAnimSite108.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
HAnimSegment105.children[2] = HAnimSite108;

HAnimJoint104.children = new MFNode();

HAnimJoint104.children[0] = HAnimSegment105;

HAnimJoint101.children[1] = HAnimJoint104;

HAnimJoint99.children[1] = HAnimJoint101;

HAnimJoint93.children[1] = HAnimJoint99;

HAnimJoint91.children[1] = HAnimJoint93;

HAnimJoint86.children[1] = HAnimJoint91;

HAnimJoint52.children[2] = HAnimJoint86;

HAnimJoint50.children[1] = HAnimJoint52;

HAnimJoint HAnimJoint109 = createNode("HAnimJoint");
HAnimJoint109.DEF = "hanim_vl5";
HAnimJoint109.name = "vl5";
HAnimJoint109.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimSegment HAnimSegment110 = createNode("HAnimSegment");
HAnimSegment110.DEF = "hanim_l5";
HAnimSegment110.name = "l5";
HAnimSite HAnimSite111 = createNode("HAnimSite");
HAnimSite111.DEF = "hanim_waist_preferred_posterior_pt";
HAnimSite111.name = "waist_preferred_posterior_pt";
HAnimSite111.translation = new SFVec3f(new float[0,1.0915,-0.1091]);
HAnimSegment110.children = new MFNode();

HAnimSegment110.children[0] = HAnimSite111;

HAnimSite HAnimSite112 = createNode("HAnimSite");
HAnimSite112.DEF = "hanim_navel_pt";
HAnimSite112.name = "navel_pt";
HAnimSite112.translation = new SFVec3f(new float[0.0069,1.0966,0.1017]);
HAnimSegment110.children[1] = HAnimSite112;

HAnimJoint109.children = new MFNode();

HAnimJoint109.children[0] = HAnimSegment110;

HAnimJoint HAnimJoint113 = createNode("HAnimJoint");
HAnimJoint113.DEF = "hanim_vl4";
HAnimJoint113.name = "vl4";
HAnimJoint113.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimSegment HAnimSegment114 = createNode("HAnimSegment");
HAnimSegment114.DEF = "hanim_l4";
HAnimSegment114.name = "l4";
HAnimJoint113.children = new MFNode();

HAnimJoint113.children[0] = HAnimSegment114;

HAnimJoint HAnimJoint115 = createNode("HAnimJoint");
HAnimJoint115.DEF = "hanim_vl3";
HAnimJoint115.name = "vl3";
HAnimJoint115.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimSegment HAnimSegment116 = createNode("HAnimSegment");
HAnimSegment116.DEF = "hanim_l3";
HAnimSegment116.name = "l3";
HAnimJoint115.children = new MFNode();

HAnimJoint115.children[0] = HAnimSegment116;

HAnimJoint HAnimJoint117 = createNode("HAnimJoint");
HAnimJoint117.DEF = "hanim_vl2";
HAnimJoint117.name = "vl2";
HAnimJoint117.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimSegment HAnimSegment118 = createNode("HAnimSegment");
HAnimSegment118.DEF = "hanim_l2";
HAnimSegment118.name = "l2";
HAnimSite HAnimSite119 = createNode("HAnimSite");
HAnimSite119.DEF = "hanim_r_rib10_pt";
HAnimSite119.name = "r_rib10_pt";
HAnimSite119.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
HAnimSegment118.children = new MFNode();

HAnimSegment118.children[0] = HAnimSite119;

HAnimSite HAnimSite120 = createNode("HAnimSite");
HAnimSite120.DEF = "hanim_l_rib10_pt";
HAnimSite120.name = "l_rib10_pt";
HAnimSite120.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
HAnimSegment118.children[1] = HAnimSite120;

HAnimSite HAnimSite121 = createNode("HAnimSite");
HAnimSite121.DEF = "hanim_rib10_midspine_pt";
HAnimSite121.name = "rib10_midspine_pt";
HAnimSite121.translation = new SFVec3f(new float[0.0049,1.1908,-0.1113]);
HAnimSegment118.children[2] = HAnimSite121;

HAnimJoint117.children = new MFNode();

HAnimJoint117.children[0] = HAnimSegment118;

HAnimJoint HAnimJoint122 = createNode("HAnimJoint");
HAnimJoint122.DEF = "hanim_vl1";
HAnimJoint122.name = "vl1";
HAnimJoint122.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimSegment HAnimSegment123 = createNode("HAnimSegment");
HAnimSegment123.DEF = "hanim_l1";
HAnimSegment123.name = "l1";
HAnimJoint122.children = new MFNode();

HAnimJoint122.children[0] = HAnimSegment123;

HAnimJoint HAnimJoint124 = createNode("HAnimJoint");
HAnimJoint124.DEF = "hanim_vt12";
HAnimJoint124.name = "vt12";
HAnimJoint124.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimSegment HAnimSegment125 = createNode("HAnimSegment");
HAnimSegment125.DEF = "hanim_t12";
HAnimSegment125.name = "t12";
HAnimJoint124.children = new MFNode();

HAnimJoint124.children[0] = HAnimSegment125;

HAnimJoint HAnimJoint126 = createNode("HAnimJoint");
HAnimJoint126.DEF = "hanim_vt11";
HAnimJoint126.name = "vt11";
HAnimJoint126.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimSegment HAnimSegment127 = createNode("HAnimSegment");
HAnimSegment127.DEF = "hanim_t11";
HAnimSegment127.name = "t11";
HAnimJoint126.children = new MFNode();

HAnimJoint126.children[0] = HAnimSegment127;

HAnimJoint HAnimJoint128 = createNode("HAnimJoint");
HAnimJoint128.DEF = "hanim_vt10";
HAnimJoint128.name = "vt10";
HAnimJoint128.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimSegment HAnimSegment129 = createNode("HAnimSegment");
HAnimSegment129.DEF = "hanim_t10";
HAnimSegment129.name = "t10";
HAnimSite HAnimSite130 = createNode("HAnimSite");
HAnimSite130.DEF = "hanim_substernale_pt";
HAnimSite130.name = "substernale_pt";
HAnimSite130.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
HAnimSegment129.children = new MFNode();

HAnimSegment129.children[0] = HAnimSite130;

HAnimJoint128.children = new MFNode();

HAnimJoint128.children[0] = HAnimSegment129;

HAnimJoint HAnimJoint131 = createNode("HAnimJoint");
HAnimJoint131.DEF = "hanim_vt9";
HAnimJoint131.name = "vt9";
HAnimJoint131.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimSegment HAnimSegment132 = createNode("HAnimSegment");
HAnimSegment132.DEF = "hanim_t9";
HAnimSegment132.name = "t9";
HAnimSite HAnimSite133 = createNode("HAnimSite");
HAnimSite133.DEF = "hanim_r_thelion_pt";
HAnimSite133.name = "r_thelion_pt";
HAnimSite133.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
HAnimSegment132.children = new MFNode();

HAnimSegment132.children[0] = HAnimSite133;

HAnimSite HAnimSite134 = createNode("HAnimSite");
HAnimSite134.DEF = "hanim_l_thelion_pt";
HAnimSite134.name = "l_thelion_pt";
HAnimSite134.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
HAnimSegment132.children[1] = HAnimSite134;

HAnimJoint131.children = new MFNode();

HAnimJoint131.children[0] = HAnimSegment132;

HAnimJoint HAnimJoint135 = createNode("HAnimJoint");
HAnimJoint135.DEF = "hanim_vt8";
HAnimJoint135.name = "vt8";
HAnimJoint135.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimSegment HAnimSegment136 = createNode("HAnimSegment");
HAnimSegment136.DEF = "hanim_t8";
HAnimSegment136.name = "t8";
HAnimJoint135.children = new MFNode();

HAnimJoint135.children[0] = HAnimSegment136;

HAnimJoint HAnimJoint137 = createNode("HAnimJoint");
HAnimJoint137.DEF = "hanim_vt7";
HAnimJoint137.name = "vt7";
HAnimJoint137.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimSegment HAnimSegment138 = createNode("HAnimSegment");
HAnimSegment138.DEF = "hanim_t7";
HAnimSegment138.name = "t7";
HAnimJoint137.children = new MFNode();

HAnimJoint137.children[0] = HAnimSegment138;

HAnimJoint HAnimJoint139 = createNode("HAnimJoint");
HAnimJoint139.DEF = "hanim_vt6";
HAnimJoint139.name = "vt6";
HAnimJoint139.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimSegment HAnimSegment140 = createNode("HAnimSegment");
HAnimSegment140.DEF = "hanim_t6";
HAnimSegment140.name = "t6";
HAnimJoint139.children = new MFNode();

HAnimJoint139.children[0] = HAnimSegment140;

HAnimJoint HAnimJoint141 = createNode("HAnimJoint");
HAnimJoint141.DEF = "hanim_vt5";
HAnimJoint141.name = "vt5";
HAnimJoint141.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimSegment HAnimSegment142 = createNode("HAnimSegment");
HAnimSegment142.DEF = "hanim_t5";
HAnimSegment142.name = "t5";
HAnimJoint141.children = new MFNode();

HAnimJoint141.children[0] = HAnimSegment142;

HAnimJoint HAnimJoint143 = createNode("HAnimJoint");
HAnimJoint143.DEF = "hanim_vt4";
HAnimJoint143.name = "vt4";
HAnimJoint143.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimSegment HAnimSegment144 = createNode("HAnimSegment");
HAnimSegment144.DEF = "hanim_t4";
HAnimSegment144.name = "t4";
HAnimJoint143.children = new MFNode();

HAnimJoint143.children[0] = HAnimSegment144;

HAnimJoint HAnimJoint145 = createNode("HAnimJoint");
HAnimJoint145.DEF = "hanim_vt3";
HAnimJoint145.name = "vt3";
HAnimJoint145.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimSegment HAnimSegment146 = createNode("HAnimSegment");
HAnimSegment146.DEF = "hanim_t3";
HAnimSegment146.name = "t3";
HAnimJoint145.children = new MFNode();

HAnimJoint145.children[0] = HAnimSegment146;

HAnimJoint HAnimJoint147 = createNode("HAnimJoint");
HAnimJoint147.DEF = "hanim_vt2";
HAnimJoint147.name = "vt2";
HAnimJoint147.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimSegment HAnimSegment148 = createNode("HAnimSegment");
HAnimSegment148.DEF = "hanim_t2";
HAnimSegment148.name = "t2";
HAnimJoint147.children = new MFNode();

HAnimJoint147.children[0] = HAnimSegment148;

HAnimJoint HAnimJoint149 = createNode("HAnimJoint");
HAnimJoint149.DEF = "hanim_vt1";
HAnimJoint149.name = "vt1";
HAnimJoint149.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimSegment HAnimSegment150 = createNode("HAnimSegment");
HAnimSegment150.DEF = "hanim_t1";
HAnimSegment150.name = "t1";
HAnimSite HAnimSite151 = createNode("HAnimSite");
HAnimSite151.DEF = "hanim_suprasternale_pt";
HAnimSite151.name = "suprasternale_pt";
HAnimSite151.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
HAnimSegment150.children = new MFNode();

HAnimSegment150.children[0] = HAnimSite151;

HAnimSite HAnimSite152 = createNode("HAnimSite");
HAnimSite152.DEF = "hanim_cervicale_pt";
HAnimSite152.name = "cervicale_pt";
HAnimSite152.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
HAnimSegment150.children[1] = HAnimSite152;

HAnimJoint149.children = new MFNode();

HAnimJoint149.children[0] = HAnimSegment150;

HAnimJoint HAnimJoint153 = createNode("HAnimJoint");
HAnimJoint153.DEF = "hanim_vc7";
HAnimJoint153.name = "vc7";
HAnimJoint153.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimSegment HAnimSegment154 = createNode("HAnimSegment");
HAnimSegment154.DEF = "hanim_c7";
HAnimSegment154.name = "c7";
HAnimSite HAnimSite155 = createNode("HAnimSite");
HAnimSite155.DEF = "hanim_r_neck_base_pt";
HAnimSite155.name = "r_neck_base_pt";
HAnimSite155.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
HAnimSegment154.children = new MFNode();

HAnimSegment154.children[0] = HAnimSite155;

HAnimSite HAnimSite156 = createNode("HAnimSite");
HAnimSite156.DEF = "hanim_l_neck_base_pt";
HAnimSite156.name = "l_neck_base_pt";
HAnimSite156.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
HAnimSegment154.children[1] = HAnimSite156;

HAnimJoint153.children = new MFNode();

HAnimJoint153.children[0] = HAnimSegment154;

HAnimJoint HAnimJoint157 = createNode("HAnimJoint");
HAnimJoint157.DEF = "hanim_vc6";
HAnimJoint157.name = "vc6";
HAnimJoint157.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimSegment HAnimSegment158 = createNode("HAnimSegment");
HAnimSegment158.DEF = "hanim_c6";
HAnimSegment158.name = "c6";
HAnimJoint157.children = new MFNode();

HAnimJoint157.children[0] = HAnimSegment158;

HAnimJoint HAnimJoint159 = createNode("HAnimJoint");
HAnimJoint159.DEF = "hanim_vc5";
HAnimJoint159.name = "vc5";
HAnimJoint159.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimSegment HAnimSegment160 = createNode("HAnimSegment");
HAnimSegment160.DEF = "hanim_c5";
HAnimSegment160.name = "c5";
HAnimJoint159.children = new MFNode();

HAnimJoint159.children[0] = HAnimSegment160;

HAnimJoint HAnimJoint161 = createNode("HAnimJoint");
HAnimJoint161.DEF = "hanim_vc4";
HAnimJoint161.name = "vc4";
HAnimJoint161.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimSegment HAnimSegment162 = createNode("HAnimSegment");
HAnimSegment162.DEF = "hanim_c4";
HAnimSegment162.name = "c4";
HAnimJoint161.children = new MFNode();

HAnimJoint161.children[0] = HAnimSegment162;

HAnimJoint HAnimJoint163 = createNode("HAnimJoint");
HAnimJoint163.DEF = "hanim_vc3";
HAnimJoint163.name = "vc3";
HAnimJoint163.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimSegment HAnimSegment164 = createNode("HAnimSegment");
HAnimSegment164.DEF = "hanim_c3";
HAnimSegment164.name = "c3";
HAnimJoint163.children = new MFNode();

HAnimJoint163.children[0] = HAnimSegment164;

HAnimJoint HAnimJoint165 = createNode("HAnimJoint");
HAnimJoint165.DEF = "hanim_vc2";
HAnimJoint165.name = "vc2";
HAnimJoint165.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimSegment HAnimSegment166 = createNode("HAnimSegment");
HAnimSegment166.DEF = "hanim_c2";
HAnimSegment166.name = "c2";
HAnimJoint165.children = new MFNode();

HAnimJoint165.children[0] = HAnimSegment166;

HAnimJoint HAnimJoint167 = createNode("HAnimJoint");
HAnimJoint167.DEF = "hanim_vc1";
HAnimJoint167.name = "vc1";
HAnimJoint167.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimSegment HAnimSegment168 = createNode("HAnimSegment");
HAnimSegment168.DEF = "hanim_c1";
HAnimSegment168.name = "c1";
HAnimJoint167.children = new MFNode();

HAnimJoint167.children[0] = HAnimSegment168;

HAnimJoint HAnimJoint169 = createNode("HAnimJoint");
HAnimJoint169.DEF = "hanim_skullbase";
HAnimJoint169.name = "skullbase";
HAnimJoint169.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimSegment HAnimSegment170 = createNode("HAnimSegment");
HAnimSegment170.DEF = "hanim_skull";
HAnimSegment170.name = "skull";
HAnimSite HAnimSite171 = createNode("HAnimSite");
HAnimSite171.DEF = "hanim_skull_vertex_tip";
HAnimSite171.name = "skull_vertex_tip";
HAnimSite171.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
HAnimSegment170.children = new MFNode();

HAnimSegment170.children[0] = HAnimSite171;

HAnimSite HAnimSite172 = createNode("HAnimSite");
HAnimSite172.DEF = "hanim_sellion_pt";
HAnimSite172.name = "sellion_pt";
HAnimSite172.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
HAnimSegment170.children[1] = HAnimSite172;

HAnimSite HAnimSite173 = createNode("HAnimSite");
HAnimSite173.DEF = "hanim_r_infraorbitale_pt";
HAnimSite173.name = "r_infraorbitale_pt";
HAnimSite173.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
HAnimSegment170.children[2] = HAnimSite173;

HAnimSite HAnimSite174 = createNode("HAnimSite");
HAnimSite174.DEF = "hanim_l_infraorbitale_pt";
HAnimSite174.name = "l_infraorbitale_pt";
HAnimSite174.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
HAnimSegment170.children[3] = HAnimSite174;

HAnimSite HAnimSite175 = createNode("HAnimSite");
HAnimSite175.DEF = "hanim_supramenton_pt";
HAnimSite175.name = "supramenton_pt";
HAnimSite175.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
HAnimSegment170.children[4] = HAnimSite175;

HAnimSite HAnimSite176 = createNode("HAnimSite");
HAnimSite176.DEF = "hanim_r_tragion_pt";
HAnimSite176.name = "r_tragion_pt";
HAnimSite176.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
HAnimSegment170.children[5] = HAnimSite176;

HAnimSite HAnimSite177 = createNode("HAnimSite");
HAnimSite177.DEF = "hanim_r_gonion_pt";
HAnimSite177.name = "r_gonion_pt";
HAnimSite177.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
HAnimSegment170.children[6] = HAnimSite177;

HAnimSite HAnimSite178 = createNode("HAnimSite");
HAnimSite178.DEF = "hanim_l_tragion_pt";
HAnimSite178.name = "l_tragion_pt";
HAnimSite178.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
HAnimSegment170.children[7] = HAnimSite178;

HAnimSite HAnimSite179 = createNode("HAnimSite");
HAnimSite179.DEF = "hanim_l_gonion_pt";
HAnimSite179.name = "l_gonion_pt";
HAnimSite179.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
HAnimSegment170.children[8] = HAnimSite179;

HAnimSite HAnimSite180 = createNode("HAnimSite");
HAnimSite180.DEF = "hanim_nuchale_pt";
HAnimSite180.name = "nuchale_pt";
HAnimSite180.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
HAnimSegment170.children[9] = HAnimSite180;

HAnimJoint169.children = new MFNode();

HAnimJoint169.children[0] = HAnimSegment170;

HAnimJoint HAnimJoint181 = createNode("HAnimJoint");
HAnimJoint181.DEF = "hanim_l_eyeball_joint";
HAnimJoint181.name = "l_eyeball_joint";
HAnimJoint181.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
HAnimSegment HAnimSegment182 = createNode("HAnimSegment");
HAnimSegment182.DEF = "hanim_l_eyeball";
HAnimSegment182.name = "l_eyeball";
HAnimSite HAnimSite183 = createNode("HAnimSite");
HAnimSite183.DEF = "hanim_l_eyeball_site_view";
HAnimSite183.name = "l_eyeball_site_view";
HAnimSite183.translation = new SFVec3f(new float[0.034,1.64,0.05]);
Viewpoint Viewpoint184 = createNode("Viewpoint");
Viewpoint184.DEF = "hanim_l_eyeball_site_viewpoint";
Viewpoint184.description = "l_eyeball_site_viewpoint looking forward";
Viewpoint184.position = new SFVec3f(new float[0,0,0]);
Viewpoint184.orientation = new SFRotation(new float[0,1,0,3.141593]);
HAnimSite183.children = new MFNode();

HAnimSite183.children[0] = Viewpoint184;

HAnimSegment182.children = new MFNode();

HAnimSegment182.children[0] = HAnimSite183;

HAnimJoint181.children = new MFNode();

HAnimJoint181.children[0] = HAnimSegment182;

HAnimJoint169.children[1] = HAnimJoint181;

HAnimJoint HAnimJoint185 = createNode("HAnimJoint");
HAnimJoint185.DEF = "hanim_l_eyelid_joint";
HAnimJoint185.name = "l_eyelid_joint";
HAnimJoint185.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
HAnimSegment HAnimSegment186 = createNode("HAnimSegment");
HAnimSegment186.DEF = "hanim_l_eyelid";
HAnimSegment186.name = "l_eyelid";
HAnimJoint185.children = new MFNode();

HAnimJoint185.children[0] = HAnimSegment186;

HAnimJoint169.children[2] = HAnimJoint185;

HAnimJoint HAnimJoint187 = createNode("HAnimJoint");
HAnimJoint187.DEF = "hanim_l_eyebrow_joint";
HAnimJoint187.name = "l_eyebrow_joint";
HAnimJoint187.center = new SFVec3f(new float[0.0336,1.635,0.0506]);
HAnimSegment HAnimSegment188 = createNode("HAnimSegment");
HAnimSegment188.DEF = "hanim_l_eyebrow";
HAnimSegment188.name = "l_eyebrow";
HAnimJoint187.children = new MFNode();

HAnimJoint187.children[0] = HAnimSegment188;

HAnimJoint169.children[3] = HAnimJoint187;

HAnimJoint HAnimJoint189 = createNode("HAnimJoint");
HAnimJoint189.DEF = "hanim_r_eyeball_joint";
HAnimJoint189.name = "r_eyeball_joint";
HAnimJoint189.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
HAnimSegment HAnimSegment190 = createNode("HAnimSegment");
HAnimSegment190.DEF = "hanim_r_eyeball";
HAnimSegment190.name = "r_eyeball";
HAnimSite HAnimSite191 = createNode("HAnimSite");
HAnimSite191.DEF = "hanim_r_eyeball_site_view";
HAnimSite191.name = "r_eyeball_site_view";
HAnimSite191.translation = new SFVec3f(new float[-0.034,1.64,0.05]);
Viewpoint Viewpoint192 = createNode("Viewpoint");
Viewpoint192.DEF = "hanim_r_eyeball_site_viewpoint";
Viewpoint192.description = "r_eyeball_site_viewpoint looking forward";
Viewpoint192.position = new SFVec3f(new float[0,0,0]);
Viewpoint192.orientation = new SFRotation(new float[0,1,0,3.141593]);
HAnimSite191.children = new MFNode();

HAnimSite191.children[0] = Viewpoint192;

HAnimSegment190.children = new MFNode();

HAnimSegment190.children[0] = HAnimSite191;

HAnimJoint189.children = new MFNode();

HAnimJoint189.children[0] = HAnimSegment190;

HAnimJoint169.children[4] = HAnimJoint189;

HAnimJoint HAnimJoint193 = createNode("HAnimJoint");
HAnimJoint193.DEF = "hanim_r_eyelid_joint";
HAnimJoint193.name = "r_eyelid_joint";
HAnimJoint193.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
HAnimSegment HAnimSegment194 = createNode("HAnimSegment");
HAnimSegment194.DEF = "hanim_r_eyelid";
HAnimSegment194.name = "r_eyelid";
HAnimJoint193.children = new MFNode();

HAnimJoint193.children[0] = HAnimSegment194;

HAnimJoint169.children[5] = HAnimJoint193;

HAnimJoint HAnimJoint195 = createNode("HAnimJoint");
HAnimJoint195.DEF = "hanim_r_eyebrow_joint";
HAnimJoint195.name = "r_eyebrow_joint";
HAnimJoint195.center = new SFVec3f(new float[-0.0336,1.635,0.0506]);
HAnimSegment HAnimSegment196 = createNode("HAnimSegment");
HAnimSegment196.DEF = "hanim_r_eyebrow";
HAnimSegment196.name = "r_eyebrow";
HAnimJoint195.children = new MFNode();

HAnimJoint195.children[0] = HAnimSegment196;

HAnimJoint169.children[6] = HAnimJoint195;

HAnimJoint HAnimJoint197 = createNode("HAnimJoint");
HAnimJoint197.DEF = "hanim_temporomandibular";
HAnimJoint197.name = "temporomandibular";
HAnimJoint197.center = new SFVec3f(new float[0,1.63,0.015]);
HAnimSegment HAnimSegment198 = createNode("HAnimSegment");
HAnimSegment198.DEF = "hanim_jaw";
HAnimSegment198.name = "jaw";
HAnimSite HAnimSite199 = createNode("HAnimSite");
HAnimSite199.DEF = "hanim_temporomandibular_l_site_pt";
HAnimSite199.name = "temporomandibular_l_site_pt";
HAnimSite199.translation = new SFVec3f(new float[0.045,1.63,0]);
HAnimSegment198.children = new MFNode();

HAnimSegment198.children[0] = HAnimSite199;

HAnimSite HAnimSite200 = createNode("HAnimSite");
HAnimSite200.DEF = "hanim_temporomandibular_r_site_pt";
HAnimSite200.name = "temporomandibular_r_site_pt";
HAnimSite200.translation = new SFVec3f(new float[-0.045,1.63,0]);
HAnimSegment198.children[1] = HAnimSite200;

HAnimJoint197.children = new MFNode();

HAnimJoint197.children[0] = HAnimSegment198;

HAnimJoint169.children[7] = HAnimJoint197;

HAnimJoint167.children[1] = HAnimJoint169;

HAnimJoint165.children[1] = HAnimJoint167;

HAnimJoint163.children[1] = HAnimJoint165;

HAnimJoint161.children[1] = HAnimJoint163;

HAnimJoint159.children[1] = HAnimJoint161;

HAnimJoint157.children[1] = HAnimJoint159;

HAnimJoint153.children[1] = HAnimJoint157;

HAnimJoint149.children[1] = HAnimJoint153;

HAnimJoint HAnimJoint201 = createNode("HAnimJoint");
HAnimJoint201.DEF = "hanim_l_sternoclavicular";
HAnimJoint201.name = "l_sternoclavicular";
HAnimJoint201.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimSegment HAnimSegment202 = createNode("HAnimSegment");
HAnimSegment202.DEF = "hanim_l_clavicle";
HAnimSegment202.name = "l_clavicle";
HAnimSite HAnimSite203 = createNode("HAnimSite");
HAnimSite203.DEF = "hanim_l_clavicle_pt";
HAnimSite203.name = "l_clavicle_pt";
HAnimSite203.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
HAnimSegment202.children = new MFNode();

HAnimSegment202.children[0] = HAnimSite203;

HAnimSite HAnimSite204 = createNode("HAnimSite");
HAnimSite204.DEF = "hanim_l_acromion_pt";
HAnimSite204.name = "l_acromion_pt";
HAnimSite204.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
HAnimSegment202.children[1] = HAnimSite204;

HAnimSite HAnimSite205 = createNode("HAnimSite");
HAnimSite205.DEF = "hanim_l_axilla_proximal_pt";
HAnimSite205.name = "l_axilla_proximal_pt";
HAnimSite205.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
HAnimSegment202.children[2] = HAnimSite205;

HAnimSite HAnimSite206 = createNode("HAnimSite");
HAnimSite206.DEF = "hanim_l_axilla_distal_pt";
HAnimSite206.name = "l_axilla_distal_pt";
HAnimSite206.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
HAnimSegment202.children[3] = HAnimSite206;

HAnimJoint201.children = new MFNode();

HAnimJoint201.children[0] = HAnimSegment202;

HAnimJoint HAnimJoint207 = createNode("HAnimJoint");
HAnimJoint207.DEF = "hanim_l_acromioclavicular";
HAnimJoint207.name = "l_acromioclavicular";
HAnimJoint207.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimSegment HAnimSegment208 = createNode("HAnimSegment");
HAnimSegment208.DEF = "hanim_l_scapula";
HAnimSegment208.name = "l_scapula";
HAnimJoint207.children = new MFNode();

HAnimJoint207.children[0] = HAnimSegment208;

HAnimJoint HAnimJoint209 = createNode("HAnimJoint");
HAnimJoint209.DEF = "hanim_l_shoulder";
HAnimJoint209.name = "l_shoulder";
HAnimJoint209.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimSegment HAnimSegment210 = createNode("HAnimSegment");
HAnimSegment210.DEF = "hanim_l_upperarm";
HAnimSegment210.name = "l_upperarm";
HAnimSite HAnimSite211 = createNode("HAnimSite");
HAnimSite211.DEF = "hanim_l_humeral_lateral_epicondyle_pt";
HAnimSite211.name = "l_humeral_lateral_epicondyle_pt";
HAnimSite211.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
HAnimSegment210.children = new MFNode();

HAnimSegment210.children[0] = HAnimSite211;

HAnimJoint209.children = new MFNode();

HAnimJoint209.children[0] = HAnimSegment210;

HAnimJoint HAnimJoint212 = createNode("HAnimJoint");
HAnimJoint212.DEF = "hanim_l_elbow";
HAnimJoint212.name = "l_elbow";
HAnimJoint212.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimSegment HAnimSegment213 = createNode("HAnimSegment");
HAnimSegment213.DEF = "hanim_l_forearm";
HAnimSegment213.name = "l_forearm";
HAnimSite HAnimSite214 = createNode("HAnimSite");
HAnimSite214.DEF = "hanim_l_radial_styloid_pt";
HAnimSite214.name = "l_radial_styloid_pt";
HAnimSite214.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
HAnimSegment213.children = new MFNode();

HAnimSegment213.children[0] = HAnimSite214;

HAnimSite HAnimSite215 = createNode("HAnimSite");
HAnimSite215.DEF = "hanim_l_olecranon_pt";
HAnimSite215.name = "l_olecranon_pt";
HAnimSite215.translation = new SFVec3f(new float[0.1962,1.1375,-0.1123]);
HAnimSegment213.children[1] = HAnimSite215;

HAnimSite HAnimSite216 = createNode("HAnimSite");
HAnimSite216.DEF = "hanim_l_humeral_medial_epicondyle_pt";
HAnimSite216.name = "l_humeral_medial_epicondyle_pt";
HAnimSite216.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
HAnimSegment213.children[2] = HAnimSite216;

HAnimSite HAnimSite217 = createNode("HAnimSite");
HAnimSite217.DEF = "hanim_l_radiale_pt";
HAnimSite217.name = "l_radiale_pt";
HAnimSite217.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
HAnimSegment213.children[3] = HAnimSite217;

HAnimJoint212.children = new MFNode();

HAnimJoint212.children[0] = HAnimSegment213;

HAnimJoint HAnimJoint218 = createNode("HAnimJoint");
HAnimJoint218.DEF = "hanim_l_radiocarpal";
HAnimJoint218.name = "l_radiocarpal";
HAnimJoint218.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimSegment HAnimSegment219 = createNode("HAnimSegment");
HAnimSegment219.DEF = "hanim_l_carpal";
HAnimSegment219.name = "l_carpal";
HAnimSite HAnimSite220 = createNode("HAnimSite");
HAnimSite220.DEF = "hanim_l_metacarpal_phalanx_2_pt";
HAnimSite220.name = "l_metacarpal_phalanx_2_pt";
HAnimSite220.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
HAnimSegment219.children = new MFNode();

HAnimSegment219.children[0] = HAnimSite220;

HAnimSite HAnimSite221 = createNode("HAnimSite");
HAnimSite221.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite221.name = "l_ulnar_styloid_pt";
HAnimSite221.translation = new SFVec3f(new float[0.2142,0.8529,-0.0648]);
HAnimSegment219.children[1] = HAnimSite221;

HAnimSite HAnimSite222 = createNode("HAnimSite");
HAnimSite222.DEF = "hanim_l_metacarpal_phalanx_5_pt";
HAnimSite222.name = "l_metacarpal_phalanx_5_pt";
HAnimSite222.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
HAnimSegment219.children[2] = HAnimSite222;

HAnimSite HAnimSite223 = createNode("HAnimSite");
HAnimSite223.DEF = "hanim_l_hand_front_view";
HAnimSite223.name = "l_hand_front_view";
HAnimSite223.translation = new SFVec3f(new float[0.3,0.75,0.45]);
Viewpoint Viewpoint224 = createNode("Viewpoint");
Viewpoint224.DEF = "hanim_l_hand_front_viewpoint";
Viewpoint224.description = "left hand front";
Viewpoint224.position = new SFVec3f(new float[0,0,0]);
Viewpoint224.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
HAnimSite223.children = new MFNode();

HAnimSite223.children[0] = Viewpoint224;

HAnimSegment219.children[3] = HAnimSite223;

HAnimJoint218.children = new MFNode();

HAnimJoint218.children[0] = HAnimSegment219;

HAnimJoint HAnimJoint225 = createNode("HAnimJoint");
HAnimJoint225.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint225.name = "l_carpometacarpal_1";
HAnimJoint225.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimSegment HAnimSegment226 = createNode("HAnimSegment");
HAnimSegment226.DEF = "hanim_l_metacarpal_1";
HAnimSegment226.name = "l_metacarpal_1";
HAnimJoint225.children = new MFNode();

HAnimJoint225.children[0] = HAnimSegment226;

HAnimJoint HAnimJoint227 = createNode("HAnimJoint");
HAnimJoint227.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint227.name = "l_metacarpophalangeal_1";
HAnimJoint227.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimSegment HAnimSegment228 = createNode("HAnimSegment");
HAnimSegment228.DEF = "hanim_l_carpal_proximal_phalanx_1";
HAnimSegment228.name = "l_carpal_proximal_phalanx_1";
HAnimJoint227.children = new MFNode();

HAnimJoint227.children[0] = HAnimSegment228;

HAnimJoint HAnimJoint229 = createNode("HAnimJoint");
HAnimJoint229.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint229.name = "l_carpal_interphalangeal_1";
HAnimJoint229.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimSegment HAnimSegment230 = createNode("HAnimSegment");
HAnimSegment230.DEF = "hanim_l_carpal_distal_phalanx_1";
HAnimSegment230.name = "l_carpal_distal_phalanx_1";
HAnimSite HAnimSite231 = createNode("HAnimSite");
HAnimSite231.DEF = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimSite231.name = "l_carpal_distal_phalanx_1_tip";
HAnimSite231.translation = new SFVec3f(new float[0.1982,0.8061,0.0759]);
HAnimSegment230.children = new MFNode();

HAnimSegment230.children[0] = HAnimSite231;

HAnimJoint229.children = new MFNode();

HAnimJoint229.children[0] = HAnimSegment230;

HAnimJoint227.children[1] = HAnimJoint229;

HAnimJoint225.children[1] = HAnimJoint227;

HAnimJoint218.children[1] = HAnimJoint225;

HAnimJoint HAnimJoint232 = createNode("HAnimJoint");
HAnimJoint232.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint232.name = "l_carpometacarpal_2";
HAnimJoint232.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimSegment HAnimSegment233 = createNode("HAnimSegment");
HAnimSegment233.DEF = "hanim_l_metacarpal_2";
HAnimSegment233.name = "l_metacarpal_2";
HAnimJoint232.children = new MFNode();

HAnimJoint232.children[0] = HAnimSegment233;

HAnimJoint HAnimJoint234 = createNode("HAnimJoint");
HAnimJoint234.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint234.name = "l_metacarpophalangeal_2";
HAnimJoint234.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimSegment HAnimSegment235 = createNode("HAnimSegment");
HAnimSegment235.DEF = "hanim_l_carpal_proximal_phalanx_2";
HAnimSegment235.name = "l_carpal_proximal_phalanx_2";
HAnimJoint234.children = new MFNode();

HAnimJoint234.children[0] = HAnimSegment235;

HAnimJoint HAnimJoint236 = createNode("HAnimJoint");
HAnimJoint236.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint236.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint236.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimSegment HAnimSegment237 = createNode("HAnimSegment");
HAnimSegment237.DEF = "hanim_l_carpal_middle_phalanx_2";
HAnimSegment237.name = "l_carpal_middle_phalanx_2";
HAnimJoint236.children = new MFNode();

HAnimJoint236.children[0] = HAnimSegment237;

HAnimJoint HAnimJoint238 = createNode("HAnimJoint");
HAnimJoint238.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint238.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint238.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimSegment HAnimSegment239 = createNode("HAnimSegment");
HAnimSegment239.DEF = "hanim_l_carpal_distal_phalanx_2";
HAnimSegment239.name = "l_carpal_distal_phalanx_2";
HAnimSite HAnimSite240 = createNode("HAnimSite");
HAnimSite240.DEF = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimSite240.name = "l_carpal_distal_phalanx_2_tip";
HAnimSite240.translation = new SFVec3f(new float[0.2089,0.6858,-0.0245]);
HAnimSegment239.children = new MFNode();

HAnimSegment239.children[0] = HAnimSite240;

HAnimSite HAnimSite241 = createNode("HAnimSite");
HAnimSite241.DEF = "hanim_l_dactylion_pt";
HAnimSite241.name = "l_dactylion_pt";
HAnimSite241.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
HAnimSegment239.children[1] = HAnimSite241;

HAnimJoint238.children = new MFNode();

HAnimJoint238.children[0] = HAnimSegment239;

HAnimJoint236.children[1] = HAnimJoint238;

HAnimJoint234.children[1] = HAnimJoint236;

HAnimJoint232.children[1] = HAnimJoint234;

HAnimJoint218.children[2] = HAnimJoint232;

HAnimJoint HAnimJoint242 = createNode("HAnimJoint");
HAnimJoint242.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint242.name = "l_carpometacarpal_3";
HAnimJoint242.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimSegment HAnimSegment243 = createNode("HAnimSegment");
HAnimSegment243.DEF = "hanim_l_metacarpal_3";
HAnimSegment243.name = "l_metacarpal_3";
HAnimJoint242.children = new MFNode();

HAnimJoint242.children[0] = HAnimSegment243;

HAnimJoint HAnimJoint244 = createNode("HAnimJoint");
HAnimJoint244.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint244.name = "l_metacarpophalangeal_3";
HAnimJoint244.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimSegment HAnimSegment245 = createNode("HAnimSegment");
HAnimSegment245.DEF = "hanim_l_carpal_proximal_phalanx_3";
HAnimSegment245.name = "l_carpal_proximal_phalanx_3";
HAnimJoint244.children = new MFNode();

HAnimJoint244.children[0] = HAnimSegment245;

HAnimJoint HAnimJoint246 = createNode("HAnimJoint");
HAnimJoint246.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint246.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint246.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimSegment HAnimSegment247 = createNode("HAnimSegment");
HAnimSegment247.DEF = "hanim_l_carpal_middle_phalanx_3";
HAnimSegment247.name = "l_carpal_middle_phalanx_3";
HAnimJoint246.children = new MFNode();

HAnimJoint246.children[0] = HAnimSegment247;

HAnimJoint HAnimJoint248 = createNode("HAnimJoint");
HAnimJoint248.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint248.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint248.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimSegment HAnimSegment249 = createNode("HAnimSegment");
HAnimSegment249.DEF = "hanim_l_carpal_distal_phalanx_3";
HAnimSegment249.name = "l_carpal_distal_phalanx_3";
HAnimSite HAnimSite250 = createNode("HAnimSite");
HAnimSite250.DEF = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimSite250.name = "l_carpal_distal_phalanx_3_tip";
HAnimSite250.translation = new SFVec3f(new float[0.208,0.6731,-0.0491]);
HAnimSegment249.children = new MFNode();

HAnimSegment249.children[0] = HAnimSite250;

HAnimJoint248.children = new MFNode();

HAnimJoint248.children[0] = HAnimSegment249;

HAnimJoint246.children[1] = HAnimJoint248;

HAnimJoint244.children[1] = HAnimJoint246;

HAnimJoint242.children[1] = HAnimJoint244;

HAnimJoint218.children[3] = HAnimJoint242;

HAnimJoint HAnimJoint251 = createNode("HAnimJoint");
HAnimJoint251.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint251.name = "l_carpometacarpal_4";
HAnimJoint251.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimSegment HAnimSegment252 = createNode("HAnimSegment");
HAnimSegment252.DEF = "hanim_l_metacarpal_4";
HAnimSegment252.name = "l_metacarpal_4";
HAnimJoint251.children = new MFNode();

HAnimJoint251.children[0] = HAnimSegment252;

HAnimJoint HAnimJoint253 = createNode("HAnimJoint");
HAnimJoint253.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint253.name = "l_metacarpophalangeal_4";
HAnimJoint253.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimSegment HAnimSegment254 = createNode("HAnimSegment");
HAnimSegment254.DEF = "hanim_l_carpal_proximal_phalanx_4";
HAnimSegment254.name = "l_carpal_proximal_phalanx_4";
HAnimJoint253.children = new MFNode();

HAnimJoint253.children[0] = HAnimSegment254;

HAnimJoint HAnimJoint255 = createNode("HAnimJoint");
HAnimJoint255.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint255.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint255.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimSegment HAnimSegment256 = createNode("HAnimSegment");
HAnimSegment256.DEF = "hanim_l_carpal_middle_phalanx_4";
HAnimSegment256.name = "l_carpal_middle_phalanx_4";
HAnimJoint255.children = new MFNode();

HAnimJoint255.children[0] = HAnimSegment256;

HAnimJoint HAnimJoint257 = createNode("HAnimJoint");
HAnimJoint257.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint257.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint257.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimSegment HAnimSegment258 = createNode("HAnimSegment");
HAnimSegment258.DEF = "hanim_l_carpal_distal_phalanx_4";
HAnimSegment258.name = "l_carpal_distal_phalanx_4";
HAnimSite HAnimSite259 = createNode("HAnimSite");
HAnimSite259.DEF = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimSite259.name = "l_carpal_distal_phalanx_4_tip";
HAnimSite259.translation = new SFVec3f(new float[0.2035,0.675,-0.0756]);
HAnimSegment258.children = new MFNode();

HAnimSegment258.children[0] = HAnimSite259;

HAnimJoint257.children = new MFNode();

HAnimJoint257.children[0] = HAnimSegment258;

HAnimJoint255.children[1] = HAnimJoint257;

HAnimJoint253.children[1] = HAnimJoint255;

HAnimJoint251.children[1] = HAnimJoint253;

HAnimJoint218.children[4] = HAnimJoint251;

HAnimJoint HAnimJoint260 = createNode("HAnimJoint");
HAnimJoint260.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint260.name = "l_carpometacarpal_5";
HAnimJoint260.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimSegment HAnimSegment261 = createNode("HAnimSegment");
HAnimSegment261.DEF = "hanim_l_metacarpal_5";
HAnimSegment261.name = "l_metacarpal_5";
HAnimJoint260.children = new MFNode();

HAnimJoint260.children[0] = HAnimSegment261;

HAnimJoint HAnimJoint262 = createNode("HAnimJoint");
HAnimJoint262.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint262.name = "l_metacarpophalangeal_5";
HAnimJoint262.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimSegment HAnimSegment263 = createNode("HAnimSegment");
HAnimSegment263.DEF = "hanim_l_carpal_proximal_phalanx_5";
HAnimSegment263.name = "l_carpal_proximal_phalanx_5";
HAnimJoint262.children = new MFNode();

HAnimJoint262.children[0] = HAnimSegment263;

HAnimJoint HAnimJoint264 = createNode("HAnimJoint");
HAnimJoint264.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint264.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint264.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimSegment HAnimSegment265 = createNode("HAnimSegment");
HAnimSegment265.DEF = "hanim_l_carpal_middle_phalanx_5";
HAnimSegment265.name = "l_carpal_middle_phalanx_5";
HAnimJoint264.children = new MFNode();

HAnimJoint264.children[0] = HAnimSegment265;

HAnimJoint HAnimJoint266 = createNode("HAnimJoint");
HAnimJoint266.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint266.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint266.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimSegment HAnimSegment267 = createNode("HAnimSegment");
HAnimSegment267.DEF = "hanim_l_carpal_distal_phalanx_5";
HAnimSegment267.name = "l_carpal_distal_phalanx_5";
HAnimSite HAnimSite268 = createNode("HAnimSite");
HAnimSite268.DEF = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimSite268.name = "l_carpal_distal_phalanx_5_tip";
HAnimSite268.translation = new SFVec3f(new float[0.2014,0.7009,-0.1012]);
HAnimSegment267.children = new MFNode();

HAnimSegment267.children[0] = HAnimSite268;

HAnimJoint266.children = new MFNode();

HAnimJoint266.children[0] = HAnimSegment267;

HAnimJoint264.children[1] = HAnimJoint266;

HAnimJoint262.children[1] = HAnimJoint264;

HAnimJoint260.children[1] = HAnimJoint262;

HAnimJoint218.children[5] = HAnimJoint260;

HAnimJoint212.children[1] = HAnimJoint218;

HAnimJoint209.children[1] = HAnimJoint212;

HAnimJoint207.children[1] = HAnimJoint209;

HAnimJoint201.children[1] = HAnimJoint207;

HAnimJoint149.children[2] = HAnimJoint201;

HAnimJoint HAnimJoint269 = createNode("HAnimJoint");
HAnimJoint269.DEF = "hanim_r_sternoclavicular";
HAnimJoint269.name = "r_sternoclavicular";
HAnimJoint269.center = new SFVec3f(new float[-0.082,1.4488,-0.0353]);
HAnimSegment HAnimSegment270 = createNode("HAnimSegment");
HAnimSegment270.DEF = "hanim_r_clavicle";
HAnimSegment270.name = "r_clavicle";
HAnimSite HAnimSite271 = createNode("HAnimSite");
HAnimSite271.DEF = "hanim_r_clavicle_pt";
HAnimSite271.name = "r_clavicle_pt";
HAnimSite271.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
HAnimSegment270.children = new MFNode();

HAnimSegment270.children[0] = HAnimSite271;

HAnimSite HAnimSite272 = createNode("HAnimSite");
HAnimSite272.DEF = "hanim_r_acromion_pt";
HAnimSite272.name = "r_acromion_pt";
HAnimSite272.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
HAnimSegment270.children[1] = HAnimSite272;

HAnimSite HAnimSite273 = createNode("HAnimSite");
HAnimSite273.DEF = "hanim_r_axilla_proximal_pt";
HAnimSite273.name = "r_axilla_proximal_pt";
HAnimSite273.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
HAnimSegment270.children[2] = HAnimSite273;

HAnimSite HAnimSite274 = createNode("HAnimSite");
HAnimSite274.DEF = "hanim_r_axilla_distal_pt";
HAnimSite274.name = "r_axilla_distal_pt";
HAnimSite274.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
HAnimSegment270.children[3] = HAnimSite274;

HAnimJoint269.children = new MFNode();

HAnimJoint269.children[0] = HAnimSegment270;

HAnimJoint HAnimJoint275 = createNode("HAnimJoint");
HAnimJoint275.DEF = "hanim_r_acromioclavicular";
HAnimJoint275.name = "r_acromioclavicular";
HAnimJoint275.center = new SFVec3f(new float[-0.0962,1.4269,-0.0424]);
HAnimSegment HAnimSegment276 = createNode("HAnimSegment");
HAnimSegment276.DEF = "hanim_r_scapula";
HAnimSegment276.name = "r_scapula";
HAnimJoint275.children = new MFNode();

HAnimJoint275.children[0] = HAnimSegment276;

HAnimJoint HAnimJoint277 = createNode("HAnimJoint");
HAnimJoint277.DEF = "hanim_r_shoulder";
HAnimJoint277.name = "r_shoulder";
HAnimJoint277.center = new SFVec3f(new float[-0.2029,1.4376,-0.0387]);
HAnimSegment HAnimSegment278 = createNode("HAnimSegment");
HAnimSegment278.DEF = "hanim_r_upperarm";
HAnimSegment278.name = "r_upperarm";
HAnimSite HAnimSite279 = createNode("HAnimSite");
HAnimSite279.DEF = "hanim_r_humeral_lateral_epicondyle_pt";
HAnimSite279.name = "r_humeral_lateral_epicondyle_pt";
HAnimSite279.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
HAnimSegment278.children = new MFNode();

HAnimSegment278.children[0] = HAnimSite279;

HAnimJoint277.children = new MFNode();

HAnimJoint277.children[0] = HAnimSegment278;

HAnimJoint HAnimJoint280 = createNode("HAnimJoint");
HAnimJoint280.DEF = "hanim_r_elbow";
HAnimJoint280.name = "r_elbow";
HAnimJoint280.center = new SFVec3f(new float[-0.2014,1.1357,-0.0682]);
HAnimSegment HAnimSegment281 = createNode("HAnimSegment");
HAnimSegment281.DEF = "hanim_r_forearm";
HAnimSegment281.name = "r_forearm";
HAnimSite HAnimSite282 = createNode("HAnimSite");
HAnimSite282.DEF = "hanim_r_radial_styloid_pt";
HAnimSite282.name = "r_radial_styloid_pt";
HAnimSite282.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
HAnimSegment281.children = new MFNode();

HAnimSegment281.children[0] = HAnimSite282;

HAnimSite HAnimSite283 = createNode("HAnimSite");
HAnimSite283.DEF = "hanim_r_olecranon_pt";
HAnimSite283.name = "r_olecranon_pt";
HAnimSite283.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
HAnimSegment281.children[1] = HAnimSite283;

HAnimSite HAnimSite284 = createNode("HAnimSite");
HAnimSite284.DEF = "hanim_r_humeral_medial_epicondyle_pt";
HAnimSite284.name = "r_humeral_medial_epicondyle_pt";
HAnimSite284.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
HAnimSegment281.children[2] = HAnimSite284;

HAnimSite HAnimSite285 = createNode("HAnimSite");
HAnimSite285.DEF = "hanim_r_radiale_pt";
HAnimSite285.name = "r_radiale_pt";
HAnimSite285.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
HAnimSegment281.children[3] = HAnimSite285;

HAnimJoint280.children = new MFNode();

HAnimJoint280.children[0] = HAnimSegment281;

HAnimJoint HAnimJoint286 = createNode("HAnimJoint");
HAnimJoint286.DEF = "hanim_r_radiocarpal";
HAnimJoint286.name = "r_radiocarpal";
HAnimJoint286.center = new SFVec3f(new float[-0.1984,0.8663,-0.0583]);
HAnimSegment HAnimSegment287 = createNode("HAnimSegment");
HAnimSegment287.DEF = "hanim_r_carpal";
HAnimSegment287.name = "r_carpal";
HAnimSite HAnimSite288 = createNode("HAnimSite");
HAnimSite288.DEF = "hanim_r_metacarpal_phalanx_2_pt";
HAnimSite288.name = "r_metacarpal_phalanx_2_pt";
HAnimSite288.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
HAnimSegment287.children = new MFNode();

HAnimSegment287.children[0] = HAnimSite288;

HAnimSite HAnimSite289 = createNode("HAnimSite");
HAnimSite289.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite289.name = "r_ulnar_styloid_pt";
HAnimSite289.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
HAnimSegment287.children[1] = HAnimSite289;

HAnimSite HAnimSite290 = createNode("HAnimSite");
HAnimSite290.DEF = "hanim_r_metacarpal_phalanx_5_pt";
HAnimSite290.name = "r_metacarpal_phalanx_5_pt";
HAnimSite290.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
HAnimSegment287.children[2] = HAnimSite290;

HAnimSite HAnimSite291 = createNode("HAnimSite");
HAnimSite291.DEF = "hanim_r_hand_front_view";
HAnimSite291.name = "r_hand_front_view";
HAnimSite291.translation = new SFVec3f(new float[-0.3,0.75,0.45]);
Viewpoint Viewpoint292 = createNode("Viewpoint");
Viewpoint292.DEF = "hanim_r_hand_front_viewpoint";
Viewpoint292.description = "right hand front";
Viewpoint292.position = new SFVec3f(new float[0,0,0]);
Viewpoint292.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
HAnimSite291.children = new MFNode();

HAnimSite291.children[0] = Viewpoint292;

HAnimSegment287.children[3] = HAnimSite291;

HAnimJoint286.children = new MFNode();

HAnimJoint286.children[0] = HAnimSegment287;

HAnimJoint HAnimJoint293 = createNode("HAnimJoint");
HAnimJoint293.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint293.name = "r_carpometacarpal_1";
HAnimJoint293.center = new SFVec3f(new float[-0.1924,0.8472,-0.0534]);
HAnimSegment HAnimSegment294 = createNode("HAnimSegment");
HAnimSegment294.DEF = "hanim_r_metacarpal_1";
HAnimSegment294.name = "r_metacarpal_1";
HAnimJoint293.children = new MFNode();

HAnimJoint293.children[0] = HAnimSegment294;

HAnimJoint HAnimJoint295 = createNode("HAnimJoint");
HAnimJoint295.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint295.name = "r_metacarpophalangeal_1";
HAnimJoint295.center = new SFVec3f(new float[-0.1951,0.8226,0.0246]);
HAnimSegment HAnimSegment296 = createNode("HAnimSegment");
HAnimSegment296.DEF = "hanim_r_carpal_proximal_phalanx_1";
HAnimSegment296.name = "r_carpal_proximal_phalanx_1";
HAnimJoint295.children = new MFNode();

HAnimJoint295.children[0] = HAnimSegment296;

HAnimJoint HAnimJoint297 = createNode("HAnimJoint");
HAnimJoint297.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint297.name = "r_carpal_interphalangeal_1";
HAnimJoint297.center = new SFVec3f(new float[-0.1955,0.8159,0.0464]);
HAnimSegment HAnimSegment298 = createNode("HAnimSegment");
HAnimSegment298.DEF = "hanim_r_carpal_distal_phalanx_1";
HAnimSegment298.name = "r_carpal_distal_phalanx_1";
HAnimSite HAnimSite299 = createNode("HAnimSite");
HAnimSite299.DEF = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimSite299.name = "r_carpal_distal_phalanx_1_tip";
HAnimSite299.translation = new SFVec3f(new float[-0.1869,0.809,0.082]);
HAnimSegment298.children = new MFNode();

HAnimSegment298.children[0] = HAnimSite299;

HAnimJoint297.children = new MFNode();

HAnimJoint297.children[0] = HAnimSegment298;

HAnimJoint295.children[1] = HAnimJoint297;

HAnimJoint293.children[1] = HAnimJoint295;

HAnimJoint286.children[1] = HAnimJoint293;

HAnimJoint HAnimJoint300 = createNode("HAnimJoint");
HAnimJoint300.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint300.name = "r_carpometacarpal_2";
HAnimJoint300.center = new SFVec3f(new float[-0.1983,0.8024,-0.028]);
HAnimSegment HAnimSegment301 = createNode("HAnimSegment");
HAnimSegment301.DEF = "hanim_r_metacarpal_2";
HAnimSegment301.name = "r_metacarpal_2";
HAnimJoint300.children = new MFNode();

HAnimJoint300.children[0] = HAnimSegment301;

HAnimJoint HAnimJoint302 = createNode("HAnimJoint");
HAnimJoint302.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint302.name = "r_metacarpophalangeal_2";
HAnimJoint302.center = new SFVec3f(new float[-0.1983,0.7815,-0.028]);
HAnimSegment HAnimSegment303 = createNode("HAnimSegment");
HAnimSegment303.DEF = "hanim_r_carpal_proximal_phalanx_2";
HAnimSegment303.name = "r_carpal_proximal_phalanx_2";
HAnimJoint302.children = new MFNode();

HAnimJoint302.children[0] = HAnimSegment303;

HAnimJoint HAnimJoint304 = createNode("HAnimJoint");
HAnimJoint304.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint304.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint304.center = new SFVec3f(new float[-0.2017,0.7363,-0.0248]);
HAnimSegment HAnimSegment305 = createNode("HAnimSegment");
HAnimSegment305.DEF = "hanim_r_carpal_middle_phalanx_2";
HAnimSegment305.name = "r_carpal_middle_phalanx_2";
HAnimJoint304.children = new MFNode();

HAnimJoint304.children[0] = HAnimSegment305;

HAnimJoint HAnimJoint306 = createNode("HAnimJoint");
HAnimJoint306.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint306.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint306.center = new SFVec3f(new float[-0.2028,0.7139,-0.0236]);
HAnimSegment HAnimSegment307 = createNode("HAnimSegment");
HAnimSegment307.DEF = "hanim_r_carpal_distal_phalanx_2";
HAnimSegment307.name = "r_carpal_distal_phalanx_2";
HAnimSite HAnimSite308 = createNode("HAnimSite");
HAnimSite308.DEF = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimSite308.name = "r_carpal_distal_phalanx_2_tip";
HAnimSite308.translation = new SFVec3f(new float[-0.198,0.6883,-0.018]);
HAnimSegment307.children = new MFNode();

HAnimSegment307.children[0] = HAnimSite308;

HAnimSite HAnimSite309 = createNode("HAnimSite");
HAnimSite309.DEF = "hanim_r_dactylion_pt";
HAnimSite309.name = "r_dactylion_pt";
HAnimSite309.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
HAnimSegment307.children[1] = HAnimSite309;

HAnimJoint306.children = new MFNode();

HAnimJoint306.children[0] = HAnimSegment307;

HAnimJoint304.children[1] = HAnimJoint306;

HAnimJoint302.children[1] = HAnimJoint304;

HAnimJoint300.children[1] = HAnimJoint302;

HAnimJoint286.children[2] = HAnimJoint300;

HAnimJoint HAnimJoint310 = createNode("HAnimJoint");
HAnimJoint310.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint310.name = "r_carpometacarpal_3";
HAnimJoint310.center = new SFVec3f(new float[-0.1987,0.8029,-0.053]);
HAnimSegment HAnimSegment311 = createNode("HAnimSegment");
HAnimSegment311.DEF = "hanim_r_metacarpal_3";
HAnimSegment311.name = "r_metacarpal_3";
HAnimJoint310.children = new MFNode();

HAnimJoint310.children[0] = HAnimSegment311;

HAnimJoint HAnimJoint312 = createNode("HAnimJoint");
HAnimJoint312.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint312.name = "r_metacarpophalangeal_3";
HAnimJoint312.center = new SFVec3f(new float[-0.1987,0.7818,-0.053]);
HAnimSegment HAnimSegment313 = createNode("HAnimSegment");
HAnimSegment313.DEF = "hanim_r_carpal_proximal_phalanx_3";
HAnimSegment313.name = "r_carpal_proximal_phalanx_3";
HAnimJoint312.children = new MFNode();

HAnimJoint312.children[0] = HAnimSegment313;

HAnimJoint HAnimJoint314 = createNode("HAnimJoint");
HAnimJoint314.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint314.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint314.center = new SFVec3f(new float[-0.2013,0.7273,-0.0503]);
HAnimSegment HAnimSegment315 = createNode("HAnimSegment");
HAnimSegment315.DEF = "hanim_r_carpal_middle_phalanx_3";
HAnimSegment315.name = "r_carpal_middle_phalanx_3";
HAnimJoint314.children = new MFNode();

HAnimJoint314.children[0] = HAnimSegment315;

HAnimJoint HAnimJoint316 = createNode("HAnimJoint");
HAnimJoint316.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint316.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint316.center = new SFVec3f(new float[-0.2026,0.7011,-0.0494]);
HAnimSegment HAnimSegment317 = createNode("HAnimSegment");
HAnimSegment317.DEF = "hanim_r_carpal_distal_phalanx_3";
HAnimSegment317.name = "r_carpal_distal_phalanx_3";
HAnimSite HAnimSite318 = createNode("HAnimSite");
HAnimSite318.DEF = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimSite318.name = "r_carpal_distal_phalanx_3_tip";
HAnimSite318.translation = new SFVec3f(new float[-0.1969,0.6758,-0.0427]);
HAnimSegment317.children = new MFNode();

HAnimSegment317.children[0] = HAnimSite318;

HAnimJoint316.children = new MFNode();

HAnimJoint316.children[0] = HAnimSegment317;

HAnimJoint314.children[1] = HAnimJoint316;

HAnimJoint312.children[1] = HAnimJoint314;

HAnimJoint310.children[1] = HAnimJoint312;

HAnimJoint286.children[3] = HAnimJoint310;

HAnimJoint HAnimJoint319 = createNode("HAnimJoint");
HAnimJoint319.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint319.name = "r_carpometacarpal_4";
HAnimJoint319.center = new SFVec3f(new float[-0.1956,0.8019,-0.0794]);
HAnimSegment HAnimSegment320 = createNode("HAnimSegment");
HAnimSegment320.DEF = "hanim_r_metacarpal_4";
HAnimSegment320.name = "r_metacarpal_4";
HAnimJoint319.children = new MFNode();

HAnimJoint319.children[0] = HAnimSegment320;

HAnimJoint HAnimJoint321 = createNode("HAnimJoint");
HAnimJoint321.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint321.name = "r_metacarpophalangeal_4";
HAnimJoint321.center = new SFVec3f(new float[-0.1956,0.7815,-0.0794]);
HAnimSegment HAnimSegment322 = createNode("HAnimSegment");
HAnimSegment322.DEF = "hanim_r_carpal_proximal_phalanx_4";
HAnimSegment322.name = "r_carpal_proximal_phalanx_4";
HAnimJoint321.children = new MFNode();

HAnimJoint321.children[0] = HAnimSegment322;

HAnimJoint HAnimJoint323 = createNode("HAnimJoint");
HAnimJoint323.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint323.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint323.center = new SFVec3f(new float[-0.1973,0.7287,-0.0777]);
HAnimSegment HAnimSegment324 = createNode("HAnimSegment");
HAnimSegment324.DEF = "hanim_r_carpal_middle_phalanx_4";
HAnimSegment324.name = "r_carpal_middle_phalanx_4";
HAnimJoint323.children = new MFNode();

HAnimJoint323.children[0] = HAnimSegment324;

HAnimJoint HAnimJoint325 = createNode("HAnimJoint");
HAnimJoint325.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint325.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint325.center = new SFVec3f(new float[-0.1983,0.7045,-0.0767]);
HAnimSegment HAnimSegment326 = createNode("HAnimSegment");
HAnimSegment326.DEF = "hanim_r_carpal_distal_phalanx_4";
HAnimSegment326.name = "r_carpal_distal_phalanx_4";
HAnimSite HAnimSite327 = createNode("HAnimSite");
HAnimSite327.DEF = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimSite327.name = "r_carpal_distal_phalanx_4_tip";
HAnimSite327.translation = new SFVec3f(new float[-0.1934,0.6778,-0.0693]);
HAnimSegment326.children = new MFNode();

HAnimSegment326.children[0] = HAnimSite327;

HAnimJoint325.children = new MFNode();

HAnimJoint325.children[0] = HAnimSegment326;

HAnimJoint323.children[1] = HAnimJoint325;

HAnimJoint321.children[1] = HAnimJoint323;

HAnimJoint319.children[1] = HAnimJoint321;

HAnimJoint286.children[4] = HAnimJoint319;

HAnimJoint HAnimJoint328 = createNode("HAnimJoint");
HAnimJoint328.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint328.name = "r_carpometacarpal_5";
HAnimJoint328.center = new SFVec3f(new float[-0.1925,0.8066,-0.1036]);
HAnimSegment HAnimSegment329 = createNode("HAnimSegment");
HAnimSegment329.DEF = "hanim_r_metacarpal_5";
HAnimSegment329.name = "r_metacarpal_5";
HAnimJoint328.children = new MFNode();

HAnimJoint328.children[0] = HAnimSegment329;

HAnimJoint HAnimJoint330 = createNode("HAnimJoint");
HAnimJoint330.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint330.name = "r_metacarpophalangeal_5";
HAnimJoint330.center = new SFVec3f(new float[-0.1925,0.7866,-0.1036]);
HAnimSegment HAnimSegment331 = createNode("HAnimSegment");
HAnimSegment331.DEF = "hanim_r_carpal_proximal_phalanx_5";
HAnimSegment331.name = "r_carpal_proximal_phalanx_5";
HAnimJoint330.children = new MFNode();

HAnimJoint330.children[0] = HAnimSegment331;

HAnimJoint HAnimJoint332 = createNode("HAnimJoint");
HAnimJoint332.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint332.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint332.center = new SFVec3f(new float[-0.1938,0.7452,-0.1024]);
HAnimSegment HAnimSegment333 = createNode("HAnimSegment");
HAnimSegment333.DEF = "hanim_r_carpal_middle_phalanx_5";
HAnimSegment333.name = "r_carpal_middle_phalanx_5";
HAnimJoint332.children = new MFNode();

HAnimJoint332.children[0] = HAnimSegment333;

HAnimJoint HAnimJoint334 = createNode("HAnimJoint");
HAnimJoint334.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint334.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint334.center = new SFVec3f(new float[-0.1948,0.7277,-0.1017]);
HAnimSegment HAnimSegment335 = createNode("HAnimSegment");
HAnimSegment335.DEF = "hanim_r_carpal_distal_phalanx_5";
HAnimSegment335.name = "r_carpal_distal_phalanx_5";
HAnimSite HAnimSite336 = createNode("HAnimSite");
HAnimSite336.DEF = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimSite336.name = "r_carpal_distal_phalanx_5_tip";
HAnimSite336.translation = new SFVec3f(new float[-0.1938,0.7035,-0.0949]);
HAnimSegment335.children = new MFNode();

HAnimSegment335.children[0] = HAnimSite336;

HAnimJoint334.children = new MFNode();

HAnimJoint334.children[0] = HAnimSegment335;

HAnimJoint332.children[1] = HAnimJoint334;

HAnimJoint330.children[1] = HAnimJoint332;

HAnimJoint328.children[1] = HAnimJoint330;

HAnimJoint286.children[5] = HAnimJoint328;

HAnimJoint280.children[1] = HAnimJoint286;

HAnimJoint277.children[1] = HAnimJoint280;

HAnimJoint275.children[1] = HAnimJoint277;

HAnimJoint269.children[1] = HAnimJoint275;

HAnimJoint149.children[3] = HAnimJoint269;

HAnimJoint147.children[1] = HAnimJoint149;

HAnimJoint145.children[1] = HAnimJoint147;

HAnimJoint143.children[1] = HAnimJoint145;

HAnimJoint141.children[1] = HAnimJoint143;

HAnimJoint139.children[1] = HAnimJoint141;

HAnimJoint137.children[1] = HAnimJoint139;

HAnimJoint135.children[1] = HAnimJoint137;

HAnimJoint131.children[1] = HAnimJoint135;

HAnimJoint128.children[1] = HAnimJoint131;

HAnimJoint126.children[1] = HAnimJoint128;

HAnimJoint124.children[1] = HAnimJoint126;

HAnimJoint122.children[1] = HAnimJoint124;

HAnimJoint117.children[1] = HAnimJoint122;

HAnimJoint115.children[1] = HAnimJoint117;

HAnimJoint113.children[1] = HAnimJoint115;

HAnimJoint109.children[1] = HAnimJoint113;

HAnimJoint50.children[2] = HAnimJoint109;

HAnimHumanoid41.joints[1] = HAnimJoint50;

HAnimJoint HAnimJoint337 = createNode("HAnimJoint");
HAnimJoint337.USE = "hanim_humanoid_root";
HAnimHumanoid41.joints[2] = HAnimJoint337;

HAnimJoint HAnimJoint338 = createNode("HAnimJoint");
HAnimJoint338.USE = "hanim_sacroiliac";
HAnimHumanoid41.joints[3] = HAnimJoint338;

HAnimJoint HAnimJoint339 = createNode("HAnimJoint");
HAnimJoint339.USE = "hanim_vl5";
HAnimHumanoid41.joints[4] = HAnimJoint339;

HAnimJoint HAnimJoint340 = createNode("HAnimJoint");
HAnimJoint340.USE = "hanim_vl4";
HAnimHumanoid41.joints[5] = HAnimJoint340;

HAnimJoint HAnimJoint341 = createNode("HAnimJoint");
HAnimJoint341.USE = "hanim_vl3";
HAnimHumanoid41.joints[6] = HAnimJoint341;

HAnimJoint HAnimJoint342 = createNode("HAnimJoint");
HAnimJoint342.USE = "hanim_vl2";
HAnimHumanoid41.joints[7] = HAnimJoint342;

HAnimJoint HAnimJoint343 = createNode("HAnimJoint");
HAnimJoint343.USE = "hanim_vl1";
HAnimHumanoid41.joints[8] = HAnimJoint343;

HAnimJoint HAnimJoint344 = createNode("HAnimJoint");
HAnimJoint344.USE = "hanim_vt12";
HAnimHumanoid41.joints[9] = HAnimJoint344;

HAnimJoint HAnimJoint345 = createNode("HAnimJoint");
HAnimJoint345.USE = "hanim_vt11";
HAnimHumanoid41.joints[10] = HAnimJoint345;

HAnimJoint HAnimJoint346 = createNode("HAnimJoint");
HAnimJoint346.USE = "hanim_vt10";
HAnimHumanoid41.joints[11] = HAnimJoint346;

HAnimJoint HAnimJoint347 = createNode("HAnimJoint");
HAnimJoint347.USE = "hanim_vt9";
HAnimHumanoid41.joints[12] = HAnimJoint347;

HAnimJoint HAnimJoint348 = createNode("HAnimJoint");
HAnimJoint348.USE = "hanim_vt8";
HAnimHumanoid41.joints[13] = HAnimJoint348;

HAnimJoint HAnimJoint349 = createNode("HAnimJoint");
HAnimJoint349.USE = "hanim_vt7";
HAnimHumanoid41.joints[14] = HAnimJoint349;

HAnimJoint HAnimJoint350 = createNode("HAnimJoint");
HAnimJoint350.USE = "hanim_vt6";
HAnimHumanoid41.joints[15] = HAnimJoint350;

HAnimJoint HAnimJoint351 = createNode("HAnimJoint");
HAnimJoint351.USE = "hanim_vt5";
HAnimHumanoid41.joints[16] = HAnimJoint351;

HAnimJoint HAnimJoint352 = createNode("HAnimJoint");
HAnimJoint352.USE = "hanim_vt4";
HAnimHumanoid41.joints[17] = HAnimJoint352;

HAnimJoint HAnimJoint353 = createNode("HAnimJoint");
HAnimJoint353.USE = "hanim_vt3";
HAnimHumanoid41.joints[18] = HAnimJoint353;

HAnimJoint HAnimJoint354 = createNode("HAnimJoint");
HAnimJoint354.USE = "hanim_vt2";
HAnimHumanoid41.joints[19] = HAnimJoint354;

HAnimJoint HAnimJoint355 = createNode("HAnimJoint");
HAnimJoint355.USE = "hanim_vt1";
HAnimHumanoid41.joints[20] = HAnimJoint355;

HAnimJoint HAnimJoint356 = createNode("HAnimJoint");
HAnimJoint356.USE = "hanim_vc7";
HAnimHumanoid41.joints[21] = HAnimJoint356;

HAnimJoint HAnimJoint357 = createNode("HAnimJoint");
HAnimJoint357.USE = "hanim_vc6";
HAnimHumanoid41.joints[22] = HAnimJoint357;

HAnimJoint HAnimJoint358 = createNode("HAnimJoint");
HAnimJoint358.USE = "hanim_vc5";
HAnimHumanoid41.joints[23] = HAnimJoint358;

HAnimJoint HAnimJoint359 = createNode("HAnimJoint");
HAnimJoint359.USE = "hanim_vc4";
HAnimHumanoid41.joints[24] = HAnimJoint359;

HAnimJoint HAnimJoint360 = createNode("HAnimJoint");
HAnimJoint360.USE = "hanim_vc3";
HAnimHumanoid41.joints[25] = HAnimJoint360;

HAnimJoint HAnimJoint361 = createNode("HAnimJoint");
HAnimJoint361.USE = "hanim_vc2";
HAnimHumanoid41.joints[26] = HAnimJoint361;

HAnimJoint HAnimJoint362 = createNode("HAnimJoint");
HAnimJoint362.USE = "hanim_vc1";
HAnimHumanoid41.joints[27] = HAnimJoint362;

HAnimJoint HAnimJoint363 = createNode("HAnimJoint");
HAnimJoint363.USE = "hanim_skullbase";
HAnimHumanoid41.joints[28] = HAnimJoint363;

HAnimJoint HAnimJoint364 = createNode("HAnimJoint");
HAnimJoint364.USE = "hanim_temporomandibular";
HAnimHumanoid41.joints[29] = HAnimJoint364;

HAnimJoint HAnimJoint365 = createNode("HAnimJoint");
HAnimJoint365.USE = "hanim_l_acromioclavicular";
HAnimHumanoid41.joints[30] = HAnimJoint365;

HAnimJoint HAnimJoint366 = createNode("HAnimJoint");
HAnimJoint366.USE = "hanim_r_acromioclavicular";
HAnimHumanoid41.joints[31] = HAnimJoint366;

HAnimJoint HAnimJoint367 = createNode("HAnimJoint");
HAnimJoint367.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid41.joints[32] = HAnimJoint367;

HAnimJoint HAnimJoint368 = createNode("HAnimJoint");
HAnimJoint368.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid41.joints[33] = HAnimJoint368;

HAnimJoint HAnimJoint369 = createNode("HAnimJoint");
HAnimJoint369.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid41.joints[34] = HAnimJoint369;

HAnimJoint HAnimJoint370 = createNode("HAnimJoint");
HAnimJoint370.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid41.joints[35] = HAnimJoint370;

HAnimJoint HAnimJoint371 = createNode("HAnimJoint");
HAnimJoint371.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid41.joints[36] = HAnimJoint371;

HAnimJoint HAnimJoint372 = createNode("HAnimJoint");
HAnimJoint372.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid41.joints[37] = HAnimJoint372;

HAnimJoint HAnimJoint373 = createNode("HAnimJoint");
HAnimJoint373.USE = "hanim_l_carpal_distal_interphalangeal_5";
HAnimHumanoid41.joints[38] = HAnimJoint373;

HAnimJoint HAnimJoint374 = createNode("HAnimJoint");
HAnimJoint374.USE = "hanim_r_carpal_distal_interphalangeal_5";
HAnimHumanoid41.joints[39] = HAnimJoint374;

HAnimJoint HAnimJoint375 = createNode("HAnimJoint");
HAnimJoint375.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid41.joints[40] = HAnimJoint375;

HAnimJoint HAnimJoint376 = createNode("HAnimJoint");
HAnimJoint376.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid41.joints[41] = HAnimJoint376;

HAnimJoint HAnimJoint377 = createNode("HAnimJoint");
HAnimJoint377.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid41.joints[42] = HAnimJoint377;

HAnimJoint HAnimJoint378 = createNode("HAnimJoint");
HAnimJoint378.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid41.joints[43] = HAnimJoint378;

HAnimJoint HAnimJoint379 = createNode("HAnimJoint");
HAnimJoint379.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid41.joints[44] = HAnimJoint379;

HAnimJoint HAnimJoint380 = createNode("HAnimJoint");
HAnimJoint380.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid41.joints[45] = HAnimJoint380;

HAnimJoint HAnimJoint381 = createNode("HAnimJoint");
HAnimJoint381.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid41.joints[46] = HAnimJoint381;

HAnimJoint HAnimJoint382 = createNode("HAnimJoint");
HAnimJoint382.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid41.joints[47] = HAnimJoint382;

HAnimJoint HAnimJoint383 = createNode("HAnimJoint");
HAnimJoint383.USE = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimHumanoid41.joints[48] = HAnimJoint383;

HAnimJoint HAnimJoint384 = createNode("HAnimJoint");
HAnimJoint384.USE = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimHumanoid41.joints[49] = HAnimJoint384;

HAnimJoint HAnimJoint385 = createNode("HAnimJoint");
HAnimJoint385.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid41.joints[50] = HAnimJoint385;

HAnimJoint HAnimJoint386 = createNode("HAnimJoint");
HAnimJoint386.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid41.joints[51] = HAnimJoint386;

HAnimJoint HAnimJoint387 = createNode("HAnimJoint");
HAnimJoint387.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid41.joints[52] = HAnimJoint387;

HAnimJoint HAnimJoint388 = createNode("HAnimJoint");
HAnimJoint388.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid41.joints[53] = HAnimJoint388;

HAnimJoint HAnimJoint389 = createNode("HAnimJoint");
HAnimJoint389.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid41.joints[54] = HAnimJoint389;

HAnimJoint HAnimJoint390 = createNode("HAnimJoint");
HAnimJoint390.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid41.joints[55] = HAnimJoint390;

HAnimJoint HAnimJoint391 = createNode("HAnimJoint");
HAnimJoint391.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid41.joints[56] = HAnimJoint391;

HAnimJoint HAnimJoint392 = createNode("HAnimJoint");
HAnimJoint392.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid41.joints[57] = HAnimJoint392;

HAnimJoint HAnimJoint393 = createNode("HAnimJoint");
HAnimJoint393.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid41.joints[58] = HAnimJoint393;

HAnimJoint HAnimJoint394 = createNode("HAnimJoint");
HAnimJoint394.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid41.joints[59] = HAnimJoint394;

HAnimJoint HAnimJoint395 = createNode("HAnimJoint");
HAnimJoint395.USE = "hanim_l_elbow";
HAnimHumanoid41.joints[60] = HAnimJoint395;

HAnimJoint HAnimJoint396 = createNode("HAnimJoint");
HAnimJoint396.USE = "hanim_r_elbow";
HAnimHumanoid41.joints[61] = HAnimJoint396;

HAnimJoint HAnimJoint397 = createNode("HAnimJoint");
HAnimJoint397.USE = "hanim_l_eyeball_joint";
HAnimHumanoid41.joints[62] = HAnimJoint397;

HAnimJoint HAnimJoint398 = createNode("HAnimJoint");
HAnimJoint398.USE = "hanim_r_eyeball_joint";
HAnimHumanoid41.joints[63] = HAnimJoint398;

HAnimJoint HAnimJoint399 = createNode("HAnimJoint");
HAnimJoint399.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid41.joints[64] = HAnimJoint399;

HAnimJoint HAnimJoint400 = createNode("HAnimJoint");
HAnimJoint400.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid41.joints[65] = HAnimJoint400;

HAnimJoint HAnimJoint401 = createNode("HAnimJoint");
HAnimJoint401.USE = "hanim_l_eyelid_joint";
HAnimHumanoid41.joints[66] = HAnimJoint401;

HAnimJoint HAnimJoint402 = createNode("HAnimJoint");
HAnimJoint402.USE = "hanim_r_eyelid_joint";
HAnimHumanoid41.joints[67] = HAnimJoint402;

HAnimJoint HAnimJoint403 = createNode("HAnimJoint");
HAnimJoint403.USE = "hanim_l_hip";
HAnimHumanoid41.joints[68] = HAnimJoint403;

HAnimJoint HAnimJoint404 = createNode("HAnimJoint");
HAnimJoint404.USE = "hanim_r_hip";
HAnimHumanoid41.joints[69] = HAnimJoint404;

HAnimJoint HAnimJoint405 = createNode("HAnimJoint");
HAnimJoint405.USE = "hanim_l_knee";
HAnimHumanoid41.joints[70] = HAnimJoint405;

HAnimJoint HAnimJoint406 = createNode("HAnimJoint");
HAnimJoint406.USE = "hanim_r_knee";
HAnimHumanoid41.joints[71] = HAnimJoint406;

HAnimJoint HAnimJoint407 = createNode("HAnimJoint");
HAnimJoint407.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid41.joints[72] = HAnimJoint407;

HAnimJoint HAnimJoint408 = createNode("HAnimJoint");
HAnimJoint408.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid41.joints[73] = HAnimJoint408;

HAnimJoint HAnimJoint409 = createNode("HAnimJoint");
HAnimJoint409.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid41.joints[74] = HAnimJoint409;

HAnimJoint HAnimJoint410 = createNode("HAnimJoint");
HAnimJoint410.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid41.joints[75] = HAnimJoint410;

HAnimJoint HAnimJoint411 = createNode("HAnimJoint");
HAnimJoint411.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid41.joints[76] = HAnimJoint411;

HAnimJoint HAnimJoint412 = createNode("HAnimJoint");
HAnimJoint412.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid41.joints[77] = HAnimJoint412;

HAnimJoint HAnimJoint413 = createNode("HAnimJoint");
HAnimJoint413.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid41.joints[78] = HAnimJoint413;

HAnimJoint HAnimJoint414 = createNode("HAnimJoint");
HAnimJoint414.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid41.joints[79] = HAnimJoint414;

HAnimJoint HAnimJoint415 = createNode("HAnimJoint");
HAnimJoint415.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid41.joints[80] = HAnimJoint415;

HAnimJoint HAnimJoint416 = createNode("HAnimJoint");
HAnimJoint416.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid41.joints[81] = HAnimJoint416;

HAnimJoint HAnimJoint417 = createNode("HAnimJoint");
HAnimJoint417.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid41.joints[82] = HAnimJoint417;

HAnimJoint HAnimJoint418 = createNode("HAnimJoint");
HAnimJoint418.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid41.joints[83] = HAnimJoint418;

HAnimJoint HAnimJoint419 = createNode("HAnimJoint");
HAnimJoint419.USE = "hanim_l_radiocarpal";
HAnimHumanoid41.joints[84] = HAnimJoint419;

HAnimJoint HAnimJoint420 = createNode("HAnimJoint");
HAnimJoint420.USE = "hanim_r_radiocarpal";
HAnimHumanoid41.joints[85] = HAnimJoint420;

HAnimJoint HAnimJoint421 = createNode("HAnimJoint");
HAnimJoint421.USE = "hanim_l_shoulder";
HAnimHumanoid41.joints[86] = HAnimJoint421;

HAnimJoint HAnimJoint422 = createNode("HAnimJoint");
HAnimJoint422.USE = "hanim_r_shoulder";
HAnimHumanoid41.joints[87] = HAnimJoint422;

HAnimJoint HAnimJoint423 = createNode("HAnimJoint");
HAnimJoint423.USE = "hanim_l_sternoclavicular";
HAnimHumanoid41.joints[88] = HAnimJoint423;

HAnimJoint HAnimJoint424 = createNode("HAnimJoint");
HAnimJoint424.USE = "hanim_r_sternoclavicular";
HAnimHumanoid41.joints[89] = HAnimJoint424;

HAnimJoint HAnimJoint425 = createNode("HAnimJoint");
HAnimJoint425.USE = "hanim_l_talocrural";
HAnimHumanoid41.joints[90] = HAnimJoint425;

HAnimJoint HAnimJoint426 = createNode("HAnimJoint");
HAnimJoint426.USE = "hanim_r_talocrural";
HAnimHumanoid41.joints[91] = HAnimJoint426;

HAnimJoint HAnimJoint427 = createNode("HAnimJoint");
HAnimJoint427.USE = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid41.joints[92] = HAnimJoint427;

HAnimJoint HAnimJoint428 = createNode("HAnimJoint");
HAnimJoint428.USE = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid41.joints[93] = HAnimJoint428;

HAnimJoint HAnimJoint429 = createNode("HAnimJoint");
HAnimJoint429.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid41.joints[94] = HAnimJoint429;

HAnimJoint HAnimJoint430 = createNode("HAnimJoint");
HAnimJoint430.USE = "hanim_r_tarsometatarsal_2";
HAnimHumanoid41.joints[95] = HAnimJoint430;

HAnimSegment HAnimSegment431 = createNode("HAnimSegment");
HAnimSegment431.USE = "hanim_pelvis";
HAnimHumanoid41.segments[96] = HAnimSegment431;

HAnimSegment HAnimSegment432 = createNode("HAnimSegment");
HAnimSegment432.USE = "hanim_skull";
HAnimHumanoid41.segments[97] = HAnimSegment432;

HAnimSegment HAnimSegment433 = createNode("HAnimSegment");
HAnimSegment433.USE = "hanim_jaw";
HAnimHumanoid41.segments[98] = HAnimSegment433;

HAnimSegment HAnimSegment434 = createNode("HAnimSegment");
HAnimSegment434.USE = "hanim_c1";
HAnimHumanoid41.segments[99] = HAnimSegment434;

HAnimSegment HAnimSegment435 = createNode("HAnimSegment");
HAnimSegment435.USE = "hanim_c2";
HAnimHumanoid41.segments[100] = HAnimSegment435;

HAnimSegment HAnimSegment436 = createNode("HAnimSegment");
HAnimSegment436.USE = "hanim_c3";
HAnimHumanoid41.segments[101] = HAnimSegment436;

HAnimSegment HAnimSegment437 = createNode("HAnimSegment");
HAnimSegment437.USE = "hanim_c4";
HAnimHumanoid41.segments[102] = HAnimSegment437;

HAnimSegment HAnimSegment438 = createNode("HAnimSegment");
HAnimSegment438.USE = "hanim_c5";
HAnimHumanoid41.segments[103] = HAnimSegment438;

HAnimSegment HAnimSegment439 = createNode("HAnimSegment");
HAnimSegment439.USE = "hanim_c6";
HAnimHumanoid41.segments[104] = HAnimSegment439;

HAnimSegment HAnimSegment440 = createNode("HAnimSegment");
HAnimSegment440.USE = "hanim_c7";
HAnimHumanoid41.segments[105] = HAnimSegment440;

HAnimSegment HAnimSegment441 = createNode("HAnimSegment");
HAnimSegment441.USE = "hanim_t1";
HAnimHumanoid41.segments[106] = HAnimSegment441;

HAnimSegment HAnimSegment442 = createNode("HAnimSegment");
HAnimSegment442.USE = "hanim_t2";
HAnimHumanoid41.segments[107] = HAnimSegment442;

HAnimSegment HAnimSegment443 = createNode("HAnimSegment");
HAnimSegment443.USE = "hanim_t3";
HAnimHumanoid41.segments[108] = HAnimSegment443;

HAnimSegment HAnimSegment444 = createNode("HAnimSegment");
HAnimSegment444.USE = "hanim_t4";
HAnimHumanoid41.segments[109] = HAnimSegment444;

HAnimSegment HAnimSegment445 = createNode("HAnimSegment");
HAnimSegment445.USE = "hanim_t5";
HAnimHumanoid41.segments[110] = HAnimSegment445;

HAnimSegment HAnimSegment446 = createNode("HAnimSegment");
HAnimSegment446.USE = "hanim_t6";
HAnimHumanoid41.segments[111] = HAnimSegment446;

HAnimSegment HAnimSegment447 = createNode("HAnimSegment");
HAnimSegment447.USE = "hanim_t7";
HAnimHumanoid41.segments[112] = HAnimSegment447;

HAnimSegment HAnimSegment448 = createNode("HAnimSegment");
HAnimSegment448.USE = "hanim_t8";
HAnimHumanoid41.segments[113] = HAnimSegment448;

HAnimSegment HAnimSegment449 = createNode("HAnimSegment");
HAnimSegment449.USE = "hanim_t9";
HAnimHumanoid41.segments[114] = HAnimSegment449;

HAnimSegment HAnimSegment450 = createNode("HAnimSegment");
HAnimSegment450.USE = "hanim_t10";
HAnimHumanoid41.segments[115] = HAnimSegment450;

HAnimSegment HAnimSegment451 = createNode("HAnimSegment");
HAnimSegment451.USE = "hanim_t11";
HAnimHumanoid41.segments[116] = HAnimSegment451;

HAnimSegment HAnimSegment452 = createNode("HAnimSegment");
HAnimSegment452.USE = "hanim_t12";
HAnimHumanoid41.segments[117] = HAnimSegment452;

HAnimSegment HAnimSegment453 = createNode("HAnimSegment");
HAnimSegment453.USE = "hanim_l1";
HAnimHumanoid41.segments[118] = HAnimSegment453;

HAnimSegment HAnimSegment454 = createNode("HAnimSegment");
HAnimSegment454.USE = "hanim_l2";
HAnimHumanoid41.segments[119] = HAnimSegment454;

HAnimSegment HAnimSegment455 = createNode("HAnimSegment");
HAnimSegment455.USE = "hanim_l3";
HAnimHumanoid41.segments[120] = HAnimSegment455;

HAnimSegment HAnimSegment456 = createNode("HAnimSegment");
HAnimSegment456.USE = "hanim_l4";
HAnimHumanoid41.segments[121] = HAnimSegment456;

HAnimSegment HAnimSegment457 = createNode("HAnimSegment");
HAnimSegment457.USE = "hanim_l5";
HAnimHumanoid41.segments[122] = HAnimSegment457;

HAnimSegment HAnimSegment458 = createNode("HAnimSegment");
HAnimSegment458.USE = "hanim_sacrum";
HAnimHumanoid41.segments[123] = HAnimSegment458;

HAnimSegment HAnimSegment459 = createNode("HAnimSegment");
HAnimSegment459.USE = "hanim_l_calf";
HAnimHumanoid41.segments[124] = HAnimSegment459;

HAnimSegment HAnimSegment460 = createNode("HAnimSegment");
HAnimSegment460.USE = "hanim_r_calf";
HAnimHumanoid41.segments[125] = HAnimSegment460;

HAnimSegment HAnimSegment461 = createNode("HAnimSegment");
HAnimSegment461.USE = "hanim_l_carpal";
HAnimHumanoid41.segments[126] = HAnimSegment461;

HAnimSegment HAnimSegment462 = createNode("HAnimSegment");
HAnimSegment462.USE = "hanim_r_carpal";
HAnimHumanoid41.segments[127] = HAnimSegment462;

HAnimSegment HAnimSegment463 = createNode("HAnimSegment");
HAnimSegment463.USE = "hanim_l_carpal_distal_phalanx_1";
HAnimHumanoid41.segments[128] = HAnimSegment463;

HAnimSegment HAnimSegment464 = createNode("HAnimSegment");
HAnimSegment464.USE = "hanim_r_carpal_distal_phalanx_1";
HAnimHumanoid41.segments[129] = HAnimSegment464;

HAnimSegment HAnimSegment465 = createNode("HAnimSegment");
HAnimSegment465.USE = "hanim_l_carpal_distal_phalanx_2";
HAnimHumanoid41.segments[130] = HAnimSegment465;

HAnimSegment HAnimSegment466 = createNode("HAnimSegment");
HAnimSegment466.USE = "hanim_r_carpal_distal_phalanx_2";
HAnimHumanoid41.segments[131] = HAnimSegment466;

HAnimSegment HAnimSegment467 = createNode("HAnimSegment");
HAnimSegment467.USE = "hanim_l_carpal_distal_phalanx_3";
HAnimHumanoid41.segments[132] = HAnimSegment467;

HAnimSegment HAnimSegment468 = createNode("HAnimSegment");
HAnimSegment468.USE = "hanim_r_carpal_distal_phalanx_3";
HAnimHumanoid41.segments[133] = HAnimSegment468;

HAnimSegment HAnimSegment469 = createNode("HAnimSegment");
HAnimSegment469.USE = "hanim_l_carpal_distal_phalanx_4";
HAnimHumanoid41.segments[134] = HAnimSegment469;

HAnimSegment HAnimSegment470 = createNode("HAnimSegment");
HAnimSegment470.USE = "hanim_r_carpal_distal_phalanx_4";
HAnimHumanoid41.segments[135] = HAnimSegment470;

HAnimSegment HAnimSegment471 = createNode("HAnimSegment");
HAnimSegment471.USE = "hanim_l_carpal_distal_phalanx_5";
HAnimHumanoid41.segments[136] = HAnimSegment471;

HAnimSegment HAnimSegment472 = createNode("HAnimSegment");
HAnimSegment472.USE = "hanim_r_carpal_distal_phalanx_5";
HAnimHumanoid41.segments[137] = HAnimSegment472;

HAnimSegment HAnimSegment473 = createNode("HAnimSegment");
HAnimSegment473.USE = "hanim_l_carpal_middle_phalanx_2";
HAnimHumanoid41.segments[138] = HAnimSegment473;

HAnimSegment HAnimSegment474 = createNode("HAnimSegment");
HAnimSegment474.USE = "hanim_r_carpal_middle_phalanx_2";
HAnimHumanoid41.segments[139] = HAnimSegment474;

HAnimSegment HAnimSegment475 = createNode("HAnimSegment");
HAnimSegment475.USE = "hanim_l_carpal_middle_phalanx_3";
HAnimHumanoid41.segments[140] = HAnimSegment475;

HAnimSegment HAnimSegment476 = createNode("HAnimSegment");
HAnimSegment476.USE = "hanim_r_carpal_middle_phalanx_3";
HAnimHumanoid41.segments[141] = HAnimSegment476;

HAnimSegment HAnimSegment477 = createNode("HAnimSegment");
HAnimSegment477.USE = "hanim_l_carpal_middle_phalanx_4";
HAnimHumanoid41.segments[142] = HAnimSegment477;

HAnimSegment HAnimSegment478 = createNode("HAnimSegment");
HAnimSegment478.USE = "hanim_r_carpal_middle_phalanx_4";
HAnimHumanoid41.segments[143] = HAnimSegment478;

HAnimSegment HAnimSegment479 = createNode("HAnimSegment");
HAnimSegment479.USE = "hanim_l_carpal_middle_phalanx_5";
HAnimHumanoid41.segments[144] = HAnimSegment479;

HAnimSegment HAnimSegment480 = createNode("HAnimSegment");
HAnimSegment480.USE = "hanim_r_carpal_middle_phalanx_5";
HAnimHumanoid41.segments[145] = HAnimSegment480;

HAnimSegment HAnimSegment481 = createNode("HAnimSegment");
HAnimSegment481.USE = "hanim_l_carpal_proximal_phalanx_1";
HAnimHumanoid41.segments[146] = HAnimSegment481;

HAnimSegment HAnimSegment482 = createNode("HAnimSegment");
HAnimSegment482.USE = "hanim_r_carpal_proximal_phalanx_1";
HAnimHumanoid41.segments[147] = HAnimSegment482;

HAnimSegment HAnimSegment483 = createNode("HAnimSegment");
HAnimSegment483.USE = "hanim_l_carpal_proximal_phalanx_2";
HAnimHumanoid41.segments[148] = HAnimSegment483;

HAnimSegment HAnimSegment484 = createNode("HAnimSegment");
HAnimSegment484.USE = "hanim_r_carpal_proximal_phalanx_2";
HAnimHumanoid41.segments[149] = HAnimSegment484;

HAnimSegment HAnimSegment485 = createNode("HAnimSegment");
HAnimSegment485.USE = "hanim_l_carpal_proximal_phalanx_3";
HAnimHumanoid41.segments[150] = HAnimSegment485;

HAnimSegment HAnimSegment486 = createNode("HAnimSegment");
HAnimSegment486.USE = "hanim_r_carpal_proximal_phalanx_3";
HAnimHumanoid41.segments[151] = HAnimSegment486;

HAnimSegment HAnimSegment487 = createNode("HAnimSegment");
HAnimSegment487.USE = "hanim_l_carpal_proximal_phalanx_4";
HAnimHumanoid41.segments[152] = HAnimSegment487;

HAnimSegment HAnimSegment488 = createNode("HAnimSegment");
HAnimSegment488.USE = "hanim_r_carpal_proximal_phalanx_4";
HAnimHumanoid41.segments[153] = HAnimSegment488;

HAnimSegment HAnimSegment489 = createNode("HAnimSegment");
HAnimSegment489.USE = "hanim_l_carpal_proximal_phalanx_5";
HAnimHumanoid41.segments[154] = HAnimSegment489;

HAnimSegment HAnimSegment490 = createNode("HAnimSegment");
HAnimSegment490.USE = "hanim_r_carpal_proximal_phalanx_5";
HAnimHumanoid41.segments[155] = HAnimSegment490;

HAnimSegment HAnimSegment491 = createNode("HAnimSegment");
HAnimSegment491.USE = "hanim_l_clavicle";
HAnimHumanoid41.segments[156] = HAnimSegment491;

HAnimSegment HAnimSegment492 = createNode("HAnimSegment");
HAnimSegment492.USE = "hanim_r_clavicle";
HAnimHumanoid41.segments[157] = HAnimSegment492;

HAnimSegment HAnimSegment493 = createNode("HAnimSegment");
HAnimSegment493.USE = "hanim_l_eyeball";
HAnimHumanoid41.segments[158] = HAnimSegment493;

HAnimSegment HAnimSegment494 = createNode("HAnimSegment");
HAnimSegment494.USE = "hanim_r_eyeball";
HAnimHumanoid41.segments[159] = HAnimSegment494;

HAnimSegment HAnimSegment495 = createNode("HAnimSegment");
HAnimSegment495.USE = "hanim_l_eyebrow";
HAnimHumanoid41.segments[160] = HAnimSegment495;

HAnimSegment HAnimSegment496 = createNode("HAnimSegment");
HAnimSegment496.USE = "hanim_r_eyebrow";
HAnimHumanoid41.segments[161] = HAnimSegment496;

HAnimSegment HAnimSegment497 = createNode("HAnimSegment");
HAnimSegment497.USE = "hanim_l_eyelid";
HAnimHumanoid41.segments[162] = HAnimSegment497;

HAnimSegment HAnimSegment498 = createNode("HAnimSegment");
HAnimSegment498.USE = "hanim_r_eyelid";
HAnimHumanoid41.segments[163] = HAnimSegment498;

HAnimSegment HAnimSegment499 = createNode("HAnimSegment");
HAnimSegment499.USE = "hanim_l_forearm";
HAnimHumanoid41.segments[164] = HAnimSegment499;

HAnimSegment HAnimSegment500 = createNode("HAnimSegment");
HAnimSegment500.USE = "hanim_r_forearm";
HAnimHumanoid41.segments[165] = HAnimSegment500;

HAnimSegment HAnimSegment501 = createNode("HAnimSegment");
HAnimSegment501.USE = "hanim_l_metacarpal_1";
HAnimHumanoid41.segments[166] = HAnimSegment501;

HAnimSegment HAnimSegment502 = createNode("HAnimSegment");
HAnimSegment502.USE = "hanim_r_metacarpal_1";
HAnimHumanoid41.segments[167] = HAnimSegment502;

HAnimSegment HAnimSegment503 = createNode("HAnimSegment");
HAnimSegment503.USE = "hanim_l_metacarpal_2";
HAnimHumanoid41.segments[168] = HAnimSegment503;

HAnimSegment HAnimSegment504 = createNode("HAnimSegment");
HAnimSegment504.USE = "hanim_r_metacarpal_2";
HAnimHumanoid41.segments[169] = HAnimSegment504;

HAnimSegment HAnimSegment505 = createNode("HAnimSegment");
HAnimSegment505.USE = "hanim_l_metacarpal_3";
HAnimHumanoid41.segments[170] = HAnimSegment505;

HAnimSegment HAnimSegment506 = createNode("HAnimSegment");
HAnimSegment506.USE = "hanim_r_metacarpal_3";
HAnimHumanoid41.segments[171] = HAnimSegment506;

HAnimSegment HAnimSegment507 = createNode("HAnimSegment");
HAnimSegment507.USE = "hanim_l_metacarpal_4";
HAnimHumanoid41.segments[172] = HAnimSegment507;

HAnimSegment HAnimSegment508 = createNode("HAnimSegment");
HAnimSegment508.USE = "hanim_r_metacarpal_4";
HAnimHumanoid41.segments[173] = HAnimSegment508;

HAnimSegment HAnimSegment509 = createNode("HAnimSegment");
HAnimSegment509.USE = "hanim_l_metacarpal_5";
HAnimHumanoid41.segments[174] = HAnimSegment509;

HAnimSegment HAnimSegment510 = createNode("HAnimSegment");
HAnimSegment510.USE = "hanim_r_metacarpal_5";
HAnimHumanoid41.segments[175] = HAnimSegment510;

HAnimSegment HAnimSegment511 = createNode("HAnimSegment");
HAnimSegment511.USE = "hanim_l_metatarsal_2";
HAnimHumanoid41.segments[176] = HAnimSegment511;

HAnimSegment HAnimSegment512 = createNode("HAnimSegment");
HAnimSegment512.USE = "hanim_r_metatarsal_2";
HAnimHumanoid41.segments[177] = HAnimSegment512;

HAnimSegment HAnimSegment513 = createNode("HAnimSegment");
HAnimSegment513.USE = "hanim_l_scapula";
HAnimHumanoid41.segments[178] = HAnimSegment513;

HAnimSegment HAnimSegment514 = createNode("HAnimSegment");
HAnimSegment514.USE = "hanim_r_scapula";
HAnimHumanoid41.segments[179] = HAnimSegment514;

HAnimSegment HAnimSegment515 = createNode("HAnimSegment");
HAnimSegment515.USE = "hanim_l_talus";
HAnimHumanoid41.segments[180] = HAnimSegment515;

HAnimSegment HAnimSegment516 = createNode("HAnimSegment");
HAnimSegment516.USE = "hanim_r_talus";
HAnimHumanoid41.segments[181] = HAnimSegment516;

HAnimSegment HAnimSegment517 = createNode("HAnimSegment");
HAnimSegment517.USE = "hanim_l_tarsal_distal_phalanx_2";
HAnimHumanoid41.segments[182] = HAnimSegment517;

HAnimSegment HAnimSegment518 = createNode("HAnimSegment");
HAnimSegment518.USE = "hanim_r_tarsal_distal_phalanx_2";
HAnimHumanoid41.segments[183] = HAnimSegment518;

HAnimSegment HAnimSegment519 = createNode("HAnimSegment");
HAnimSegment519.USE = "hanim_l_tarsal_proximal_phalanx_2";
HAnimHumanoid41.segments[184] = HAnimSegment519;

HAnimSegment HAnimSegment520 = createNode("HAnimSegment");
HAnimSegment520.USE = "hanim_r_tarsal_proximal_phalanx_2";
HAnimHumanoid41.segments[185] = HAnimSegment520;

HAnimSegment HAnimSegment521 = createNode("HAnimSegment");
HAnimSegment521.USE = "hanim_l_thigh";
HAnimHumanoid41.segments[186] = HAnimSegment521;

HAnimSegment HAnimSegment522 = createNode("HAnimSegment");
HAnimSegment522.USE = "hanim_r_thigh";
HAnimHumanoid41.segments[187] = HAnimSegment522;

HAnimSegment HAnimSegment523 = createNode("HAnimSegment");
HAnimSegment523.USE = "hanim_l_upperarm";
HAnimHumanoid41.segments[188] = HAnimSegment523;

HAnimSegment HAnimSegment524 = createNode("HAnimSegment");
HAnimSegment524.USE = "hanim_r_upperarm";
HAnimHumanoid41.segments[189] = HAnimSegment524;

HAnimSite HAnimSite525 = createNode("HAnimSite");
HAnimSite525.USE = "hanim_crotch_pt";
HAnimHumanoid41.viewpoints[190] = HAnimSite525;

HAnimSite HAnimSite526 = createNode("HAnimSite");
HAnimSite526.USE = "hanim_skull_vertex_tip";
HAnimHumanoid41.viewpoints[191] = HAnimSite526;

HAnimSite HAnimSite527 = createNode("HAnimSite");
HAnimSite527.USE = "hanim_sellion_pt";
HAnimHumanoid41.viewpoints[192] = HAnimSite527;

HAnimSite HAnimSite528 = createNode("HAnimSite");
HAnimSite528.USE = "hanim_supramenton_pt";
HAnimHumanoid41.viewpoints[193] = HAnimSite528;

HAnimSite HAnimSite529 = createNode("HAnimSite");
HAnimSite529.USE = "hanim_nuchale_pt";
HAnimHumanoid41.viewpoints[194] = HAnimSite529;

HAnimSite HAnimSite530 = createNode("HAnimSite");
HAnimSite530.USE = "hanim_suprasternale_pt";
HAnimHumanoid41.viewpoints[195] = HAnimSite530;

HAnimSite HAnimSite531 = createNode("HAnimSite");
HAnimSite531.USE = "hanim_cervicale_pt";
HAnimHumanoid41.viewpoints[196] = HAnimSite531;

HAnimSite HAnimSite532 = createNode("HAnimSite");
HAnimSite532.USE = "hanim_substernale_pt";
HAnimHumanoid41.viewpoints[197] = HAnimSite532;

HAnimSite HAnimSite533 = createNode("HAnimSite");
HAnimSite533.USE = "hanim_rib10_midspine_pt";
HAnimHumanoid41.viewpoints[198] = HAnimSite533;

HAnimSite HAnimSite534 = createNode("HAnimSite");
HAnimSite534.USE = "hanim_waist_preferred_posterior_pt";
HAnimHumanoid41.viewpoints[199] = HAnimSite534;

HAnimSite HAnimSite535 = createNode("HAnimSite");
HAnimSite535.USE = "hanim_navel_pt";
HAnimHumanoid41.viewpoints[200] = HAnimSite535;

HAnimSite HAnimSite536 = createNode("HAnimSite");
HAnimSite536.USE = "hanim_l_acromion_pt";
HAnimHumanoid41.viewpoints[201] = HAnimSite536;

HAnimSite HAnimSite537 = createNode("HAnimSite");
HAnimSite537.USE = "hanim_r_acromion_pt";
HAnimHumanoid41.viewpoints[202] = HAnimSite537;

HAnimSite HAnimSite538 = createNode("HAnimSite");
HAnimSite538.USE = "hanim_r_asis_pt";
HAnimHumanoid41.viewpoints[203] = HAnimSite538;

HAnimSite HAnimSite539 = createNode("HAnimSite");
HAnimSite539.USE = "hanim_l_asis_pt";
HAnimHumanoid41.viewpoints[204] = HAnimSite539;

HAnimSite HAnimSite540 = createNode("HAnimSite");
HAnimSite540.USE = "hanim_l_axilla_distal_pt";
HAnimHumanoid41.viewpoints[205] = HAnimSite540;

HAnimSite HAnimSite541 = createNode("HAnimSite");
HAnimSite541.USE = "hanim_r_axilla_distal_pt";
HAnimHumanoid41.viewpoints[206] = HAnimSite541;

HAnimSite HAnimSite542 = createNode("HAnimSite");
HAnimSite542.USE = "hanim_l_axilla_proximal_pt";
HAnimHumanoid41.viewpoints[207] = HAnimSite542;

HAnimSite HAnimSite543 = createNode("HAnimSite");
HAnimSite543.USE = "hanim_r_axilla_proximal_pt";
HAnimHumanoid41.viewpoints[208] = HAnimSite543;

HAnimSite HAnimSite544 = createNode("HAnimSite");
HAnimSite544.USE = "hanim_l_calcaneus_posterior_pt";
HAnimHumanoid41.viewpoints[209] = HAnimSite544;

HAnimSite HAnimSite545 = createNode("HAnimSite");
HAnimSite545.USE = "hanim_r_calcaneus_posterior_pt";
HAnimHumanoid41.viewpoints[210] = HAnimSite545;

HAnimSite HAnimSite546 = createNode("HAnimSite");
HAnimSite546.USE = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimHumanoid41.viewpoints[211] = HAnimSite546;

HAnimSite HAnimSite547 = createNode("HAnimSite");
HAnimSite547.USE = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimHumanoid41.viewpoints[212] = HAnimSite547;

HAnimSite HAnimSite548 = createNode("HAnimSite");
HAnimSite548.USE = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimHumanoid41.viewpoints[213] = HAnimSite548;

HAnimSite HAnimSite549 = createNode("HAnimSite");
HAnimSite549.USE = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimHumanoid41.viewpoints[214] = HAnimSite549;

HAnimSite HAnimSite550 = createNode("HAnimSite");
HAnimSite550.USE = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimHumanoid41.viewpoints[215] = HAnimSite550;

HAnimSite HAnimSite551 = createNode("HAnimSite");
HAnimSite551.USE = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimHumanoid41.viewpoints[216] = HAnimSite551;

HAnimSite HAnimSite552 = createNode("HAnimSite");
HAnimSite552.USE = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimHumanoid41.viewpoints[217] = HAnimSite552;

HAnimSite HAnimSite553 = createNode("HAnimSite");
HAnimSite553.USE = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimHumanoid41.viewpoints[218] = HAnimSite553;

HAnimSite HAnimSite554 = createNode("HAnimSite");
HAnimSite554.USE = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimHumanoid41.viewpoints[219] = HAnimSite554;

HAnimSite HAnimSite555 = createNode("HAnimSite");
HAnimSite555.USE = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimHumanoid41.viewpoints[220] = HAnimSite555;

HAnimSite HAnimSite556 = createNode("HAnimSite");
HAnimSite556.USE = "hanim_l_clavicle_pt";
HAnimHumanoid41.viewpoints[221] = HAnimSite556;

HAnimSite HAnimSite557 = createNode("HAnimSite");
HAnimSite557.USE = "hanim_r_clavicle_pt";
HAnimHumanoid41.viewpoints[222] = HAnimSite557;

HAnimSite HAnimSite558 = createNode("HAnimSite");
HAnimSite558.USE = "hanim_l_dactylion_pt";
HAnimHumanoid41.viewpoints[223] = HAnimSite558;

HAnimSite HAnimSite559 = createNode("HAnimSite");
HAnimSite559.USE = "hanim_r_dactylion_pt";
HAnimHumanoid41.viewpoints[224] = HAnimSite559;

HAnimSite HAnimSite560 = createNode("HAnimSite");
HAnimSite560.USE = "hanim_l_femoral_lateral_epicondyle_pt";
HAnimHumanoid41.viewpoints[225] = HAnimSite560;

HAnimSite HAnimSite561 = createNode("HAnimSite");
HAnimSite561.USE = "hanim_r_femoral_lateral_epicondyle_pt";
HAnimHumanoid41.viewpoints[226] = HAnimSite561;

HAnimSite HAnimSite562 = createNode("HAnimSite");
HAnimSite562.USE = "hanim_l_femoral_medial_epicondyle_pt";
HAnimHumanoid41.viewpoints[227] = HAnimSite562;

HAnimSite HAnimSite563 = createNode("HAnimSite");
HAnimSite563.USE = "hanim_r_femoral_medial_epicondyle_pt";
HAnimHumanoid41.viewpoints[228] = HAnimSite563;

HAnimSite HAnimSite564 = createNode("HAnimSite");
HAnimSite564.USE = "hanim_l_forefoot_tip";
HAnimHumanoid41.viewpoints[229] = HAnimSite564;

HAnimSite HAnimSite565 = createNode("HAnimSite");
HAnimSite565.USE = "hanim_r_forefoot_tip";
HAnimHumanoid41.viewpoints[230] = HAnimSite565;

HAnimSite HAnimSite566 = createNode("HAnimSite");
HAnimSite566.USE = "hanim_r_gonion_pt";
HAnimHumanoid41.viewpoints[231] = HAnimSite566;

HAnimSite HAnimSite567 = createNode("HAnimSite");
HAnimSite567.USE = "hanim_l_gonion_pt";
HAnimHumanoid41.viewpoints[232] = HAnimSite567;

HAnimSite HAnimSite568 = createNode("HAnimSite");
HAnimSite568.USE = "hanim_l_humeral_lateral_epicondyle_pt";
HAnimHumanoid41.viewpoints[233] = HAnimSite568;

HAnimSite HAnimSite569 = createNode("HAnimSite");
HAnimSite569.USE = "hanim_r_humeral_lateral_epicondyle_pt";
HAnimHumanoid41.viewpoints[234] = HAnimSite569;

HAnimSite HAnimSite570 = createNode("HAnimSite");
HAnimSite570.USE = "hanim_l_humeral_medial_epicondyle_pt";
HAnimHumanoid41.viewpoints[235] = HAnimSite570;

HAnimSite HAnimSite571 = createNode("HAnimSite");
HAnimSite571.USE = "hanim_r_humeral_medial_epicondyle_pt";
HAnimHumanoid41.viewpoints[236] = HAnimSite571;

HAnimSite HAnimSite572 = createNode("HAnimSite");
HAnimSite572.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid41.viewpoints[237] = HAnimSite572;

HAnimSite HAnimSite573 = createNode("HAnimSite");
HAnimSite573.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid41.viewpoints[238] = HAnimSite573;

HAnimSite HAnimSite574 = createNode("HAnimSite");
HAnimSite574.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid41.viewpoints[239] = HAnimSite574;

HAnimSite HAnimSite575 = createNode("HAnimSite");
HAnimSite575.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid41.viewpoints[240] = HAnimSite575;

HAnimSite HAnimSite576 = createNode("HAnimSite");
HAnimSite576.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid41.viewpoints[241] = HAnimSite576;

HAnimSite HAnimSite577 = createNode("HAnimSite");
HAnimSite577.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid41.viewpoints[242] = HAnimSite577;

HAnimSite HAnimSite578 = createNode("HAnimSite");
HAnimSite578.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid41.viewpoints[243] = HAnimSite578;

HAnimSite HAnimSite579 = createNode("HAnimSite");
HAnimSite579.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid41.viewpoints[244] = HAnimSite579;

HAnimSite HAnimSite580 = createNode("HAnimSite");
HAnimSite580.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid41.viewpoints[245] = HAnimSite580;

HAnimSite HAnimSite581 = createNode("HAnimSite");
HAnimSite581.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid41.viewpoints[246] = HAnimSite581;

HAnimSite HAnimSite582 = createNode("HAnimSite");
HAnimSite582.USE = "hanim_l_metacarpal_phalanx_2_pt";
HAnimHumanoid41.viewpoints[247] = HAnimSite582;

HAnimSite HAnimSite583 = createNode("HAnimSite");
HAnimSite583.USE = "hanim_r_metacarpal_phalanx_2_pt";
HAnimHumanoid41.viewpoints[248] = HAnimSite583;

HAnimSite HAnimSite584 = createNode("HAnimSite");
HAnimSite584.USE = "hanim_l_metacarpal_phalanx_5_pt";
HAnimHumanoid41.viewpoints[249] = HAnimSite584;

HAnimSite HAnimSite585 = createNode("HAnimSite");
HAnimSite585.USE = "hanim_r_metacarpal_phalanx_5_pt";
HAnimHumanoid41.viewpoints[250] = HAnimSite585;

HAnimSite HAnimSite586 = createNode("HAnimSite");
HAnimSite586.USE = "hanim_l_metatarsal_phalanx_1_pt";
HAnimHumanoid41.viewpoints[251] = HAnimSite586;

HAnimSite HAnimSite587 = createNode("HAnimSite");
HAnimSite587.USE = "hanim_r_metatarsal_phalanx_1_pt";
HAnimHumanoid41.viewpoints[252] = HAnimSite587;

HAnimSite HAnimSite588 = createNode("HAnimSite");
HAnimSite588.USE = "hanim_l_metatarsal_phalanx_5_pt";
HAnimHumanoid41.viewpoints[253] = HAnimSite588;

HAnimSite HAnimSite589 = createNode("HAnimSite");
HAnimSite589.USE = "hanim_r_metatarsal_phalanx_5_pt";
HAnimHumanoid41.viewpoints[254] = HAnimSite589;

HAnimSite HAnimSite590 = createNode("HAnimSite");
HAnimSite590.USE = "hanim_r_neck_base_pt";
HAnimHumanoid41.viewpoints[255] = HAnimSite590;

HAnimSite HAnimSite591 = createNode("HAnimSite");
HAnimSite591.USE = "hanim_l_neck_base_pt";
HAnimHumanoid41.viewpoints[256] = HAnimSite591;

HAnimSite HAnimSite592 = createNode("HAnimSite");
HAnimSite592.USE = "hanim_l_olecranon_pt";
HAnimHumanoid41.viewpoints[257] = HAnimSite592;

HAnimSite HAnimSite593 = createNode("HAnimSite");
HAnimSite593.USE = "hanim_r_olecranon_pt";
HAnimHumanoid41.viewpoints[258] = HAnimSite593;

HAnimSite HAnimSite594 = createNode("HAnimSite");
HAnimSite594.USE = "hanim_r_psis_pt";
HAnimHumanoid41.viewpoints[259] = HAnimSite594;

HAnimSite HAnimSite595 = createNode("HAnimSite");
HAnimSite595.USE = "hanim_l_psis_pt";
HAnimHumanoid41.viewpoints[260] = HAnimSite595;

HAnimSite HAnimSite596 = createNode("HAnimSite");
HAnimSite596.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid41.viewpoints[261] = HAnimSite596;

HAnimSite HAnimSite597 = createNode("HAnimSite");
HAnimSite597.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid41.viewpoints[262] = HAnimSite597;

HAnimSite HAnimSite598 = createNode("HAnimSite");
HAnimSite598.USE = "hanim_l_radiale_pt";
HAnimHumanoid41.viewpoints[263] = HAnimSite598;

HAnimSite HAnimSite599 = createNode("HAnimSite");
HAnimSite599.USE = "hanim_r_radiale_pt";
HAnimHumanoid41.viewpoints[264] = HAnimSite599;

HAnimSite HAnimSite600 = createNode("HAnimSite");
HAnimSite600.USE = "hanim_r_rib10_pt";
HAnimHumanoid41.viewpoints[265] = HAnimSite600;

HAnimSite HAnimSite601 = createNode("HAnimSite");
HAnimSite601.USE = "hanim_l_rib10_pt";
HAnimHumanoid41.viewpoints[266] = HAnimSite601;

HAnimSite HAnimSite602 = createNode("HAnimSite");
HAnimSite602.USE = "hanim_temporomandibular_l_site_pt";
HAnimHumanoid41.viewpoints[267] = HAnimSite602;

HAnimSite HAnimSite603 = createNode("HAnimSite");
HAnimSite603.USE = "hanim_temporomandibular_r_site_pt";
HAnimHumanoid41.viewpoints[268] = HAnimSite603;

HAnimSite HAnimSite604 = createNode("HAnimSite");
HAnimSite604.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid41.viewpoints[269] = HAnimSite604;

HAnimSite HAnimSite605 = createNode("HAnimSite");
HAnimSite605.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid41.viewpoints[270] = HAnimSite605;

HAnimSite HAnimSite606 = createNode("HAnimSite");
HAnimSite606.USE = "hanim_l_tarsal_distal_phalanx_2_pt";
HAnimHumanoid41.viewpoints[271] = HAnimSite606;

HAnimSite HAnimSite607 = createNode("HAnimSite");
HAnimSite607.USE = "hanim_r_tarsal_distal_phalanx_2_pt";
HAnimHumanoid41.viewpoints[272] = HAnimSite607;

HAnimSite HAnimSite608 = createNode("HAnimSite");
HAnimSite608.USE = "hanim_r_thelion_pt";
HAnimHumanoid41.viewpoints[273] = HAnimSite608;

HAnimSite HAnimSite609 = createNode("HAnimSite");
HAnimSite609.USE = "hanim_l_thelion_pt";
HAnimHumanoid41.viewpoints[274] = HAnimSite609;

HAnimSite HAnimSite610 = createNode("HAnimSite");
HAnimSite610.USE = "hanim_r_tragion_pt";
HAnimHumanoid41.viewpoints[275] = HAnimSite610;

HAnimSite HAnimSite611 = createNode("HAnimSite");
HAnimSite611.USE = "hanim_l_tragion_pt";
HAnimHumanoid41.viewpoints[276] = HAnimSite611;

HAnimSite HAnimSite612 = createNode("HAnimSite");
HAnimSite612.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid41.viewpoints[277] = HAnimSite612;

HAnimSite HAnimSite613 = createNode("HAnimSite");
HAnimSite613.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid41.viewpoints[278] = HAnimSite613;

HAnimSite HAnimSite614 = createNode("HAnimSite");
HAnimSite614.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid41.viewpoints[279] = HAnimSite614;

HAnimSite HAnimSite615 = createNode("HAnimSite");
HAnimSite615.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid41.viewpoints[280] = HAnimSite615;

HAnimSite HAnimSite616 = createNode("HAnimSite");
HAnimSite616.DEF = "hanim_l_inclined_view";
HAnimSite616.name = "l_inclined_view";
HAnimSite616.translation = new SFVec3f(new float[1.62,1.05,2.06]);
HAnimSite616.rotation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
Viewpoint Viewpoint617 = createNode("Viewpoint");
Viewpoint617.DEF = "hanim_l_inclined_viewpoint";
Viewpoint617.description = "left inclined";
Viewpoint617.position = new SFVec3f(new float[0,0,0]);
HAnimSite616.children = new MFNode();

HAnimSite616.children[0] = Viewpoint617;

HAnimHumanoid41.viewpoints[281] = HAnimSite616;

HAnimSite HAnimSite618 = createNode("HAnimSite");
HAnimSite618.DEF = "hanim_r_inclined_view";
HAnimSite618.name = "r_inclined_view";
HAnimSite618.translation = new SFVec3f(new float[-1.62,1.05,2.06]);
HAnimSite618.rotation = new SFRotation(new float[-0.113,-0.993,0.0347,0.671]);
Viewpoint Viewpoint619 = createNode("Viewpoint");
Viewpoint619.DEF = "hanim_r_inclined_viewpoint";
Viewpoint619.description = "right inclined";
Viewpoint619.position = new SFVec3f(new float[0,0,0]);
Viewpoint619.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
HAnimSite618.children = new MFNode();

HAnimSite618.children[0] = Viewpoint619;

HAnimHumanoid41.viewpoints[282] = HAnimSite618;

HAnimSite HAnimSite620 = createNode("HAnimSite");
HAnimSite620.DEF = "hanim_front_view";
HAnimSite620.name = "front_view";
HAnimSite620.translation = new SFVec3f(new float[0,0.85,2.58]);
Viewpoint Viewpoint621 = createNode("Viewpoint");
Viewpoint621.DEF = "hanim_front_viewpoint";
Viewpoint621.description = "front";
Viewpoint621.position = new SFVec3f(new float[0,0,0]);
Viewpoint621.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
HAnimSite620.children = new MFNode();

HAnimSite620.children[0] = Viewpoint621;

HAnimHumanoid41.viewpoints[283] = HAnimSite620;

HAnimSite HAnimSite622 = createNode("HAnimSite");
HAnimSite622.DEF = "hanim_back_view";
HAnimSite622.name = "back_view";
HAnimSite622.translation = new SFVec3f(new float[0,0.85,-2.58]);
HAnimSite622.rotation = new SFRotation(new float[0,1,0,3.14]);
Viewpoint Viewpoint623 = createNode("Viewpoint");
Viewpoint623.DEF = "hanim_back_viewpoint";
Viewpoint623.description = "back";
Viewpoint623.position = new SFVec3f(new float[0,0,0]);
Viewpoint623.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
HAnimSite622.children = new MFNode();

HAnimSite622.children[0] = Viewpoint623;

HAnimHumanoid41.viewpoints[284] = HAnimSite622;

HAnimSite HAnimSite624 = createNode("HAnimSite");
HAnimSite624.DEF = "hanim_l_side_view";
HAnimSite624.name = "l_side_view";
HAnimSite624.translation = new SFVec3f(new float[2.6,0.854,0]);
HAnimSite624.rotation = new SFRotation(new float[0,1,0,1.5708]);
Viewpoint Viewpoint625 = createNode("Viewpoint");
Viewpoint625.DEF = "hanim_l_side_viewpoint";
Viewpoint625.description = "left side";
Viewpoint625.position = new SFVec3f(new float[0,0,0]);
Viewpoint625.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
HAnimSite624.children = new MFNode();

HAnimSite624.children[0] = Viewpoint625;

HAnimHumanoid41.viewpoints[285] = HAnimSite624;

HAnimSite HAnimSite626 = createNode("HAnimSite");
HAnimSite626.DEF = "hanim_Top_view";
HAnimSite626.name = "Top_view";
HAnimSite626.translation = new SFVec3f(new float[0,3.5,0]);
HAnimSite626.rotation = new SFRotation(new float[1,0,0,-1.57]);
Viewpoint Viewpoint627 = createNode("Viewpoint");
Viewpoint627.DEF = "hanim_Top_viewpoint";
Viewpoint627.description = "Top";
Viewpoint627.position = new SFVec3f(new float[0,0,0]);
Viewpoint627.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
HAnimSite626.children = new MFNode();

HAnimSite626.children[0] = Viewpoint627;

HAnimHumanoid41.viewpoints[286] = HAnimSite626;

HAnimSite HAnimSite628 = createNode("HAnimSite");
HAnimSite628.DEF = "hanim_front_close_view";
HAnimSite628.name = "front_close_view";
HAnimSite628.translation = new SFVec3f(new float[0,0.854,1.575]);
Viewpoint Viewpoint629 = createNode("Viewpoint");
Viewpoint629.DEF = "hanim_front_close_viewpoint";
Viewpoint629.description = "front close";
Viewpoint629.position = new SFVec3f(new float[0,0,0]);
Viewpoint629.centerOfRotation = new SFVec3f(new float[0,0,1.575]);
HAnimSite628.children = new MFNode();

HAnimSite628.children[0] = Viewpoint629;

HAnimHumanoid41.viewpoints[287] = HAnimSite628;

HAnimSite HAnimSite630 = createNode("HAnimSite");
HAnimSite630.DEF = "hanim_side_close_view";
HAnimSite630.name = "side_close_view";
HAnimSite630.translation = new SFVec3f(new float[1.56,0.854,0]);
HAnimSite630.rotation = new SFRotation(new float[0,1,0,1.5708]);
Viewpoint Viewpoint631 = createNode("Viewpoint");
Viewpoint631.DEF = "hanim_side_close_viewpoint";
Viewpoint631.description = "side close";
Viewpoint631.position = new SFVec3f(new float[0,0,0]);
Viewpoint631.centerOfRotation = new SFVec3f(new float[1.6,0,0]);
HAnimSite630.children = new MFNode();

HAnimSite630.children[0] = Viewpoint631;

HAnimHumanoid41.viewpoints[288] = HAnimSite630;

HAnimSite HAnimSite632 = createNode("HAnimSite");
HAnimSite632.DEF = "hanim_head_front_close_view";
HAnimSite632.name = "head_front_close_view";
HAnimSite632.translation = new SFVec3f(new float[0,1.5,1]);
Viewpoint Viewpoint633 = createNode("Viewpoint");
Viewpoint633.DEF = "hanim_head_front_close_viewpoint";
Viewpoint633.description = "head front close";
Viewpoint633.position = new SFVec3f(new float[0,0,0]);
Viewpoint633.centerOfRotation = new SFVec3f(new float[0,0,1]);
HAnimSite632.children = new MFNode();

HAnimSite632.children[0] = Viewpoint633;

HAnimHumanoid41.viewpoints[289] = HAnimSite632;

HAnimSite HAnimSite634 = createNode("HAnimSite");
HAnimSite634.DEF = "hanim_chest_front_close_view";
HAnimSite634.name = "chest_front_close_view";
HAnimSite634.translation = new SFVec3f(new float[0,1.2,1]);
Viewpoint Viewpoint635 = createNode("Viewpoint");
Viewpoint635.DEF = "hanim_chest_front_close_viewpoint";
Viewpoint635.description = "chest front close";
Viewpoint635.position = new SFVec3f(new float[0,0,0]);
Viewpoint635.centerOfRotation = new SFVec3f(new float[0,0,1]);
HAnimSite634.children = new MFNode();

HAnimSite634.children[0] = Viewpoint635;

HAnimHumanoid41.viewpoints[290] = HAnimSite634;

HAnimSite HAnimSite636 = createNode("HAnimSite");
HAnimSite636.DEF = "hanim_pelvis_front_close_view";
HAnimSite636.name = "pelvis_front_close_view";
HAnimSite636.translation = new SFVec3f(new float[0,0.8,1]);
Viewpoint Viewpoint637 = createNode("Viewpoint");
Viewpoint637.DEF = "hanim_pelvis_front_close_viewpoint";
Viewpoint637.description = "pelvis front close";
Viewpoint637.position = new SFVec3f(new float[0,0,0]);
Viewpoint637.centerOfRotation = new SFVec3f(new float[0,0,1]);
HAnimSite636.children = new MFNode();

HAnimSite636.children[0] = Viewpoint637;

HAnimHumanoid41.viewpoints[291] = HAnimSite636;

HAnimSite HAnimSite638 = createNode("HAnimSite");
HAnimSite638.DEF = "hanim_knees_front_close_view";
HAnimSite638.name = "knees_front_close_view";
HAnimSite638.translation = new SFVec3f(new float[0,0.4,1]);
Viewpoint Viewpoint639 = createNode("Viewpoint");
Viewpoint639.DEF = "hanim_knees_front_close_viewpoint";
Viewpoint639.description = "knees front close";
Viewpoint639.position = new SFVec3f(new float[0,0,0]);
Viewpoint639.centerOfRotation = new SFVec3f(new float[0,0.4,0]);
HAnimSite638.children = new MFNode();

HAnimSite638.children[0] = Viewpoint639;

HAnimHumanoid41.viewpoints[292] = HAnimSite638;

HAnimSite HAnimSite640 = createNode("HAnimSite");
HAnimSite640.DEF = "hanim_feet_front_close_view";
HAnimSite640.name = "feet_front_close_view";
HAnimSite640.translation = new SFVec3f(new float[0,0,1]);
Viewpoint Viewpoint641 = createNode("Viewpoint");
Viewpoint641.DEF = "hanim_feet_front_close_viewpoint";
Viewpoint641.description = "feet front close";
Viewpoint641.position = new SFVec3f(new float[0,0,0]);
HAnimSite640.children = new MFNode();

HAnimSite640.children[0] = Viewpoint641;

HAnimHumanoid41.viewpoints[293] = HAnimSite640;

HAnimSite HAnimSite642 = createNode("HAnimSite");
HAnimSite642.DEF = "hanim_eye_level_view";
HAnimSite642.name = "eye_level_view";
HAnimSite642.translation = new SFVec3f(new float[0,1.6332,0.0502]);
Viewpoint Viewpoint643 = createNode("Viewpoint");
Viewpoint643.DEF = "hanim_eye_level_viewpoint";
Viewpoint643.description = "eye level looking forward";
Viewpoint643.position = new SFVec3f(new float[0,0,0]);
Viewpoint643.orientation = new SFRotation(new float[0,1,0,3.141593]);
HAnimSite642.children = new MFNode();

HAnimSite642.children[0] = Viewpoint643;

HAnimHumanoid41.viewpoints[294] = HAnimSite642;

HAnimSite HAnimSite644 = createNode("HAnimSite");
HAnimSite644.USE = "hanim_l_eyeball_site_view";
HAnimHumanoid41.viewpoints[295] = HAnimSite644;

HAnimSite HAnimSite645 = createNode("HAnimSite");
HAnimSite645.USE = "hanim_r_eyeball_site_view";
HAnimHumanoid41.viewpoints[296] = HAnimSite645;

HAnimSite HAnimSite646 = createNode("HAnimSite");
HAnimSite646.USE = "hanim_l_hand_front_view";
HAnimHumanoid41.viewpoints[297] = HAnimSite646;

HAnimSite HAnimSite647 = createNode("HAnimSite");
HAnimSite647.USE = "hanim_r_hand_front_view";
HAnimHumanoid41.viewpoints[298] = HAnimSite647;

children[12] = HAnimHumanoid41;

}

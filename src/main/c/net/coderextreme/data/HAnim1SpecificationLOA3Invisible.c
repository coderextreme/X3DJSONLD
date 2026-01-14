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
meta3.content = "HAnimSpecificationLOA3Invisible.x3d";
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
meta6.content = "HAnimSpecificationLOA3Illustrated.x3d";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "reference";
meta7.content = "HAnimSpecificationLOA3Animation.x3d";
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
meta17.content = "Tue, 09 Sep 2025 19:39:08 GMT";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "error";
meta18.content = "Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "creator";
meta19.content = "Matthew T. Beitler, Joe D. Williams, Don Brutzman";
head1.meta[17] = meta19;

meta meta20 = createNode("meta");
meta20.name = "Image";
meta20.content = "images/BonesAllSkeletonFrontViewLOA1.png";
head1.meta[18] = meta20;

meta meta21 = createNode("meta");
meta21.name = "Image";
meta21.content = "images/BonesAllSkeletonFrontViewLOA2.png";
head1.meta[19] = meta21;

meta meta22 = createNode("meta");
meta22.name = "Image";
meta22.content = "images/BonesAllSkeletonFrontViewLOA3.png";
head1.meta[20] = meta22;

meta meta23 = createNode("meta");
meta23.name = "TODO";
meta23.content = "move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations";
head1.meta[21] = meta23;

meta meta24 = createNode("meta");
meta24.name = "TODO";
meta24.content = "insert MetadataInteger nodes indicating LOA for each Joint and Segment";
head1.meta[22] = meta24;

meta meta25 = createNode("meta");
meta25.name = "translator";
meta25.content = "Don Brutzman and Joe Williams";
head1.meta[23] = meta25;

meta meta26 = createNode("meta");
meta26.name = "generator";
meta26.content = "BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo";
head1.meta[24] = meta26;

meta meta27 = createNode("meta");
meta27.name = "generator";
meta27.content = "X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit";
head1.meta[25] = meta27;

head = head1;

Background Background29 = createNode("Background");
Background29.skyColor = new MFColor(new float[0.3,0.3,0.3]);
children = new MFNode();

children[0] = Background29;

NavigationInfo NavigationInfo30 = createNode("NavigationInfo");
children[1] = NavigationInfo30;

Group Group31 = createNode("Group");
Group31.DEF = "Original_WorldInfo";
WorldInfo WorldInfo32 = createNode("WorldInfo");
WorldInfo32.title = "HANIM 200x Default Joint Centers, LOA3";
WorldInfo32.info = new MFString(new java.lang.String[" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "]);
Group31.children = new MFNode();

Group31.children[0] = WorldInfo32;

children[2] = Group31;

Viewpoint Viewpoint33 = createNode("Viewpoint");
Viewpoint33.description = "Humanoid LOA 3 Front";
Viewpoint33.position = new SFVec3f(new float[0,0.4,4]);
Viewpoint33.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
children[3] = Viewpoint33;

Viewpoint Viewpoint34 = createNode("Viewpoint");
Viewpoint34.description = "Humanoid LOA 3 Front Close";
Viewpoint34.position = new SFVec3f(new float[0,0.8,2]);
Viewpoint34.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
children[4] = Viewpoint34;

Viewpoint Viewpoint35 = createNode("Viewpoint");
Viewpoint35.description = "Humanoid LOA 3 Front Closer";
Viewpoint35.position = new SFVec3f(new float[0,1.2,1]);
Viewpoint35.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
children[5] = Viewpoint35;

Viewpoint Viewpoint36 = createNode("Viewpoint");
Viewpoint36.description = "Humanoid LOA 3 Front Face";
Viewpoint36.position = new SFVec3f(new float[0,1.63,1]);
Viewpoint36.centerOfRotation = new SFVec3f(new float[0,1.5,0.0016]);
children[6] = Viewpoint36;

Viewpoint Viewpoint37 = createNode("Viewpoint");
Viewpoint37.description = "Humanoid LOA 3 Right Side";
Viewpoint37.position = new SFVec3f(new float[2.6,0.8,0]);
Viewpoint37.orientation = new SFRotation(new float[0,1,0,1.5708]);
Viewpoint37.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
children[7] = Viewpoint37;

Viewpoint Viewpoint38 = createNode("Viewpoint");
Viewpoint38.description = "Humanoid LOA 3 Right Side Close";
Viewpoint38.position = new SFVec3f(new float[1,0.8,0.5]);
Viewpoint38.orientation = new SFRotation(new float[0,1,0,1.2]);
Viewpoint38.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
children[8] = Viewpoint38;

Viewpoint Viewpoint39 = createNode("Viewpoint");
Viewpoint39.description = "Humanoid LOA 3 Left Side Close";
Viewpoint39.position = new SFVec3f(new float[-1,0.8,0.5]);
Viewpoint39.orientation = new SFRotation(new float[0,1,0,-1.2]);
Viewpoint39.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
children[9] = Viewpoint39;

Viewpoint Viewpoint40 = createNode("Viewpoint");
Viewpoint40.description = "Humanoid LOA 3 Left Side";
Viewpoint40.position = new SFVec3f(new float[-2.6,0.8,0]);
Viewpoint40.orientation = new SFRotation(new float[0,1,0,-1.5708]);
Viewpoint40.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
children[10] = Viewpoint40;

Viewpoint Viewpoint41 = createNode("Viewpoint");
Viewpoint41.description = "Humanoid LOA 3 Top";
Viewpoint41.position = new SFVec3f(new float[0,3.5,0]);
Viewpoint41.orientation = new SFRotation(new float[1,0,0,-1.5708]);
Viewpoint41.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
children[11] = Viewpoint41;

HAnimHumanoid HAnimHumanoid42 = createNode("HAnimHumanoid");
HAnimHumanoid42.DEF = "hanim_humanoid";
HAnimHumanoid42.name = "humanoid";
HAnimHumanoid42.info = new MFString(new java.lang.String["authorName=Matthew T. Beitler Joe D. Williams Don Brutzman","authorEmail=HAnim@web3D.org","copyright=none","creationDate=12 May 1999","usageRestrictions=none","humanoidVersion=2.0","height=1.7504"]);
HAnimHumanoid42.version = "1.0";
HAnimJoint HAnimJoint43 = createNode("HAnimJoint");
HAnimJoint43.DEF = "hanim_humanoid_root";
HAnimJoint43.name = "humanoid_root";
HAnimJoint43.center = new SFVec3f(new float[0,0.824,0.0277]);
HAnimSegment HAnimSegment44 = createNode("HAnimSegment");
HAnimSegment44.DEF = "hanim_sacrum";
HAnimSegment44.name = "sacrum";
HAnimJoint43.children = new MFNode();

HAnimJoint43.children[0] = HAnimSegment44;

HAnimJoint HAnimJoint45 = createNode("HAnimJoint");
HAnimJoint45.DEF = "hanim_sacroiliac";
HAnimJoint45.name = "sacroiliac";
HAnimJoint45.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimSegment HAnimSegment46 = createNode("HAnimSegment");
HAnimSegment46.DEF = "hanim_pelvis";
HAnimSegment46.name = "pelvis";
HAnimSite HAnimSite47 = createNode("HAnimSite");
HAnimSite47.DEF = "hanim_r_iliocristale_pt";
HAnimSite47.name = "r_iliocristale_pt";
HAnimSite47.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
HAnimSegment46.children = new MFNode();

HAnimSegment46.children[0] = HAnimSite47;

HAnimSite HAnimSite48 = createNode("HAnimSite");
HAnimSite48.DEF = "hanim_r_trochanterion_pt";
HAnimSite48.name = "r_trochanterion_pt";
HAnimSite48.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
HAnimSegment46.children[1] = HAnimSite48;

HAnimSite HAnimSite49 = createNode("HAnimSite");
HAnimSite49.DEF = "hanim_l_iliocristale_pt";
HAnimSite49.name = "l_iliocristale_pt";
HAnimSite49.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
HAnimSegment46.children[2] = HAnimSite49;

HAnimSite HAnimSite50 = createNode("HAnimSite");
HAnimSite50.DEF = "hanim_l_trochanterion_pt";
HAnimSite50.name = "l_trochanterion_pt";
HAnimSite50.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
HAnimSegment46.children[3] = HAnimSite50;

HAnimSite HAnimSite51 = createNode("HAnimSite");
HAnimSite51.DEF = "hanim_r_asis_pt";
HAnimSite51.name = "r_asis_pt";
HAnimSite51.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
HAnimSegment46.children[4] = HAnimSite51;

HAnimSite HAnimSite52 = createNode("HAnimSite");
HAnimSite52.DEF = "hanim_l_asis_pt";
HAnimSite52.name = "l_asis_pt";
HAnimSite52.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
HAnimSegment46.children[5] = HAnimSite52;

HAnimSite HAnimSite53 = createNode("HAnimSite");
HAnimSite53.DEF = "hanim_r_psis_pt";
HAnimSite53.name = "r_psis_pt";
HAnimSite53.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
HAnimSegment46.children[6] = HAnimSite53;

HAnimSite HAnimSite54 = createNode("HAnimSite");
HAnimSite54.DEF = "hanim_l_psis_pt";
HAnimSite54.name = "l_psis_pt";
HAnimSite54.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
HAnimSegment46.children[7] = HAnimSite54;

HAnimSite HAnimSite55 = createNode("HAnimSite");
HAnimSite55.DEF = "hanim_crotch_pt";
HAnimSite55.name = "crotch_pt";
HAnimSite55.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
HAnimSegment46.children[8] = HAnimSite55;

HAnimJoint45.children = new MFNode();

HAnimJoint45.children[0] = HAnimSegment46;

HAnimJoint HAnimJoint56 = createNode("HAnimJoint");
HAnimJoint56.DEF = "hanim_l_hip";
HAnimJoint56.name = "l_hip";
HAnimJoint56.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimSegment HAnimSegment57 = createNode("HAnimSegment");
HAnimSegment57.DEF = "hanim_l_thigh";
HAnimSegment57.name = "l_thigh";
HAnimSite HAnimSite58 = createNode("HAnimSite");
HAnimSite58.DEF = "hanim_l_knee_crease_pt";
HAnimSite58.name = "l_knee_crease_pt";
HAnimSite58.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
HAnimSegment57.children = new MFNode();

HAnimSegment57.children[0] = HAnimSite58;

HAnimSite HAnimSite59 = createNode("HAnimSite");
HAnimSite59.DEF = "hanim_l_femoral_lateral_epicn_pt";
HAnimSite59.name = "l_femoral_lateral_epicn_pt";
HAnimSite59.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
HAnimSegment57.children[1] = HAnimSite59;

HAnimSite HAnimSite60 = createNode("HAnimSite");
HAnimSite60.DEF = "hanim_l_femoral_medial_epicn_pt";
HAnimSite60.name = "l_femoral_medial_epicn_pt";
HAnimSite60.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
HAnimSegment57.children[2] = HAnimSite60;

HAnimJoint56.children = new MFNode();

HAnimJoint56.children[0] = HAnimSegment57;

HAnimJoint HAnimJoint61 = createNode("HAnimJoint");
HAnimJoint61.DEF = "hanim_l_knee";
HAnimJoint61.name = "l_knee";
HAnimJoint61.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimSegment HAnimSegment62 = createNode("HAnimSegment");
HAnimSegment62.DEF = "hanim_l_calf";
HAnimSegment62.name = "l_calf";
HAnimJoint61.children = new MFNode();

HAnimJoint61.children[0] = HAnimSegment62;

HAnimJoint HAnimJoint63 = createNode("HAnimJoint");
HAnimJoint63.DEF = "hanim_l_ankle";
HAnimJoint63.name = "l_ankle";
HAnimJoint63.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimSegment HAnimSegment64 = createNode("HAnimSegment");
HAnimSegment64.DEF = "hanim_l_hindfoot";
HAnimSegment64.name = "l_hindfoot";
HAnimSite HAnimSite65 = createNode("HAnimSite");
HAnimSite65.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite65.name = "l_lateral_malleolus_pt";
HAnimSite65.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
HAnimSegment64.children = new MFNode();

HAnimSegment64.children[0] = HAnimSite65;

HAnimSite HAnimSite66 = createNode("HAnimSite");
HAnimSite66.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite66.name = "l_medial_malleolus_pt";
HAnimSite66.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
HAnimSegment64.children[1] = HAnimSite66;

HAnimSite HAnimSite67 = createNode("HAnimSite");
HAnimSite67.DEF = "hanim_l_sphyrion_pt";
HAnimSite67.name = "l_sphyrion_pt";
HAnimSite67.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
HAnimSegment64.children[2] = HAnimSite67;

HAnimSite HAnimSite68 = createNode("HAnimSite");
HAnimSite68.DEF = "hanim_l_calcaneous_post_pt";
HAnimSite68.name = "l_calcaneous_post_pt";
HAnimSite68.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
HAnimSegment64.children[3] = HAnimSite68;

HAnimJoint63.children = new MFNode();

HAnimJoint63.children[0] = HAnimSegment64;

HAnimJoint HAnimJoint69 = createNode("HAnimJoint");
HAnimJoint69.DEF = "hanim_l_subtalar";
HAnimJoint69.name = "l_subtalar";
HAnimJoint69.center = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
HAnimSegment HAnimSegment70 = createNode("HAnimSegment");
HAnimSegment70.DEF = "hanim_l_midproximal";
HAnimSegment70.name = "l_midproximal";
HAnimJoint69.children = new MFNode();

HAnimJoint69.children[0] = HAnimSegment70;

HAnimJoint HAnimJoint71 = createNode("HAnimJoint");
HAnimJoint71.DEF = "hanim_l_midtarsal";
HAnimJoint71.name = "l_midtarsal";
HAnimJoint71.center = new SFVec3f(new float[0.1086,0.0001,0.0368]);
HAnimSegment HAnimSegment72 = createNode("HAnimSegment");
HAnimSegment72.DEF = "hanim_l_middistal";
HAnimSegment72.name = "l_middistal";
HAnimSite HAnimSite73 = createNode("HAnimSite");
HAnimSite73.DEF = "hanim_l_metatarsal_pha1_pt";
HAnimSite73.name = "l_metatarsal_pha1_pt";
HAnimSite73.translation = new SFVec3f(new float[0.0816,0.0232,0.0106]);
HAnimSegment72.children = new MFNode();

HAnimSegment72.children[0] = HAnimSite73;

HAnimJoint71.children = new MFNode();

HAnimJoint71.children[0] = HAnimSegment72;

HAnimJoint HAnimJoint74 = createNode("HAnimJoint");
HAnimJoint74.DEF = "hanim_l_metatarsal";
HAnimJoint74.name = "l_metatarsal";
HAnimJoint74.center = new SFVec3f(new float[0.1086,0,0.0762]);
HAnimSegment HAnimSegment75 = createNode("HAnimSegment");
HAnimSegment75.DEF = "hanim_l_forefoot";
HAnimSegment75.name = "l_forefoot";
HAnimSite HAnimSite76 = createNode("HAnimSite");
HAnimSite76.DEF = "hanim_l_forefoot_tip";
HAnimSite76.name = "l_forefoot_tip";
HAnimSite76.translation = new SFVec3f(new float[0.1354,0.0016,0.1476]);
HAnimSegment75.children = new MFNode();

HAnimSegment75.children[0] = HAnimSite76;

HAnimSite HAnimSite77 = createNode("HAnimSite");
HAnimSite77.DEF = "hanim_l_metatarsal_pha5_pt";
HAnimSite77.name = "l_metatarsal_pha5_pt";
HAnimSite77.translation = new SFVec3f(new float[0.1825,0.007,0.0928]);
HAnimSegment75.children[1] = HAnimSite77;

HAnimSite HAnimSite78 = createNode("HAnimSite");
HAnimSite78.DEF = "hanim_l_digit2_pt";
HAnimSite78.name = "l_digit2_pt";
HAnimSite78.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
HAnimSegment75.children[2] = HAnimSite78;

HAnimJoint74.children = new MFNode();

HAnimJoint74.children[0] = HAnimSegment75;

HAnimJoint71.children[1] = HAnimJoint74;

HAnimJoint69.children[1] = HAnimJoint71;

HAnimJoint63.children[1] = HAnimJoint69;

HAnimJoint61.children[1] = HAnimJoint63;

HAnimJoint56.children[1] = HAnimJoint61;

HAnimJoint45.children[1] = HAnimJoint56;

HAnimJoint HAnimJoint79 = createNode("HAnimJoint");
HAnimJoint79.DEF = "hanim_r_hip";
HAnimJoint79.name = "r_hip";
HAnimJoint79.center = new SFVec3f(new float[-0.0961,0.9124,-0.0001]);
HAnimSegment HAnimSegment80 = createNode("HAnimSegment");
HAnimSegment80.DEF = "hanim_r_thigh";
HAnimSegment80.name = "r_thigh";
HAnimSite HAnimSite81 = createNode("HAnimSite");
HAnimSite81.DEF = "hanim_r_knee_crease_pt";
HAnimSite81.name = "r_knee_crease_pt";
HAnimSite81.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
HAnimSegment80.children = new MFNode();

HAnimSegment80.children[0] = HAnimSite81;

HAnimSite HAnimSite82 = createNode("HAnimSite");
HAnimSite82.DEF = "hanim_r_femoral_lateral_epicn_pt";
HAnimSite82.name = "r_femoral_lateral_epicn_pt";
HAnimSite82.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
HAnimSegment80.children[1] = HAnimSite82;

HAnimSite HAnimSite83 = createNode("HAnimSite");
HAnimSite83.DEF = "hanim_r_femoral_medial_epicn_pt";
HAnimSite83.name = "r_femoral_medial_epicn_pt";
HAnimSite83.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
HAnimSegment80.children[2] = HAnimSite83;

HAnimJoint79.children = new MFNode();

HAnimJoint79.children[0] = HAnimSegment80;

HAnimJoint HAnimJoint84 = createNode("HAnimJoint");
HAnimJoint84.DEF = "hanim_r_knee";
HAnimJoint84.name = "r_knee";
HAnimJoint84.center = new SFVec3f(new float[-0.104,0.4867,0.0308]);
HAnimSegment HAnimSegment85 = createNode("HAnimSegment");
HAnimSegment85.DEF = "hanim_r_calf";
HAnimSegment85.name = "r_calf";
HAnimJoint84.children = new MFNode();

HAnimJoint84.children[0] = HAnimSegment85;

HAnimJoint HAnimJoint86 = createNode("HAnimJoint");
HAnimJoint86.DEF = "hanim_r_ankle";
HAnimJoint86.name = "r_ankle";
HAnimJoint86.center = new SFVec3f(new float[-0.1101,0.0656,-0.0736]);
HAnimSegment HAnimSegment87 = createNode("HAnimSegment");
HAnimSegment87.DEF = "hanim_r_hindfoot";
HAnimSegment87.name = "r_hindfoot";
HAnimSite HAnimSite88 = createNode("HAnimSite");
HAnimSite88.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite88.name = "r_lateral_malleolus_pt";
HAnimSite88.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
HAnimSegment87.children = new MFNode();

HAnimSegment87.children[0] = HAnimSite88;

HAnimSite HAnimSite89 = createNode("HAnimSite");
HAnimSite89.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite89.name = "r_medial_malleolus_pt";
HAnimSite89.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
HAnimSegment87.children[1] = HAnimSite89;

HAnimSite HAnimSite90 = createNode("HAnimSite");
HAnimSite90.DEF = "hanim_r_sphyrion_pt";
HAnimSite90.name = "r_sphyrion_pt";
HAnimSite90.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
HAnimSegment87.children[2] = HAnimSite90;

HAnimSite HAnimSite91 = createNode("HAnimSite");
HAnimSite91.DEF = "hanim_r_calcaneous_post_pt";
HAnimSite91.name = "r_calcaneous_post_pt";
HAnimSite91.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
HAnimSegment87.children[3] = HAnimSite91;

HAnimJoint86.children = new MFNode();

HAnimJoint86.children[0] = HAnimSegment87;

HAnimJoint HAnimJoint92 = createNode("HAnimJoint");
HAnimJoint92.DEF = "hanim_r_subtalar";
HAnimJoint92.name = "r_subtalar";
HAnimJoint92.center = new SFVec3f(new float[-0.1086,0.0001,-0.0368]);
HAnimSegment HAnimSegment93 = createNode("HAnimSegment");
HAnimSegment93.DEF = "hanim_r_midproximal";
HAnimSegment93.name = "r_midproximal";
HAnimJoint92.children = new MFNode();

HAnimJoint92.children[0] = HAnimSegment93;

HAnimJoint HAnimJoint94 = createNode("HAnimJoint");
HAnimJoint94.DEF = "hanim_r_midtarsal";
HAnimJoint94.name = "r_midtarsal";
HAnimJoint94.center = new SFVec3f(new float[-0.1086,0.0001,0.0368]);
HAnimSegment HAnimSegment95 = createNode("HAnimSegment");
HAnimSegment95.DEF = "hanim_r_middistal";
HAnimSegment95.name = "r_middistal";
HAnimSite HAnimSite96 = createNode("HAnimSite");
HAnimSite96.DEF = "hanim_r_metatarsal_pha1_pt";
HAnimSite96.name = "r_metatarsal_pha1_pt";
HAnimSite96.translation = new SFVec3f(new float[-0.0521,0.026,0.0127]);
HAnimSegment95.children = new MFNode();

HAnimSegment95.children[0] = HAnimSite96;

HAnimJoint94.children = new MFNode();

HAnimJoint94.children[0] = HAnimSegment95;

HAnimJoint HAnimJoint97 = createNode("HAnimJoint");
HAnimJoint97.DEF = "hanim_r_metatarsal";
HAnimJoint97.name = "r_metatarsal";
HAnimJoint97.center = new SFVec3f(new float[-0.1086,0,0.0762]);
HAnimSegment HAnimSegment98 = createNode("HAnimSegment");
HAnimSegment98.DEF = "hanim_r_forefoot";
HAnimSegment98.name = "r_forefoot";
HAnimSite HAnimSite99 = createNode("HAnimSite");
HAnimSite99.DEF = "hanim_r_forefoot_tip";
HAnimSite99.name = "r_forefoot_tip";
HAnimSite99.translation = new SFVec3f(new float[-0.1043,0.0227,0.145]);
HAnimSegment98.children = new MFNode();

HAnimSegment98.children[0] = HAnimSite99;

HAnimSite HAnimSite100 = createNode("HAnimSite");
HAnimSite100.DEF = "hanim_r_metatarsal_pha5_pt";
HAnimSite100.name = "r_metatarsal_pha5_pt";
HAnimSite100.translation = new SFVec3f(new float[-0.1523,0.0166,0.0895]);
HAnimSegment98.children[1] = HAnimSite100;

HAnimSite HAnimSite101 = createNode("HAnimSite");
HAnimSite101.DEF = "hanim_r_digit2_pt";
HAnimSite101.name = "r_digit2_pt";
HAnimSite101.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
HAnimSegment98.children[2] = HAnimSite101;

HAnimJoint97.children = new MFNode();

HAnimJoint97.children[0] = HAnimSegment98;

HAnimJoint94.children[1] = HAnimJoint97;

HAnimJoint92.children[1] = HAnimJoint94;

HAnimJoint86.children[1] = HAnimJoint92;

HAnimJoint84.children[1] = HAnimJoint86;

HAnimJoint79.children[1] = HAnimJoint84;

HAnimJoint45.children[2] = HAnimJoint79;

HAnimJoint43.children[1] = HAnimJoint45;

HAnimJoint HAnimJoint102 = createNode("HAnimJoint");
HAnimJoint102.DEF = "hanim_vl5";
HAnimJoint102.name = "vl5";
HAnimJoint102.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimSegment HAnimSegment103 = createNode("HAnimSegment");
HAnimSegment103.DEF = "hanim_l5";
HAnimSegment103.name = "l5";
HAnimSite HAnimSite104 = createNode("HAnimSite");
HAnimSite104.DEF = "hanim_waist_preferred_post_pt";
HAnimSite104.name = "waist_preferred_post_pt";
HAnimSite104.translation = new SFVec3f(new float[0,1.0915,-0.1091]);
HAnimSegment103.children = new MFNode();

HAnimSegment103.children[0] = HAnimSite104;

HAnimSite HAnimSite105 = createNode("HAnimSite");
HAnimSite105.DEF = "hanim_navel_pt";
HAnimSite105.name = "navel_pt";
HAnimSite105.translation = new SFVec3f(new float[0.0069,1.0966,0.1017]);
HAnimSegment103.children[1] = HAnimSite105;

HAnimJoint102.children = new MFNode();

HAnimJoint102.children[0] = HAnimSegment103;

HAnimJoint HAnimJoint106 = createNode("HAnimJoint");
HAnimJoint106.DEF = "hanim_vl4";
HAnimJoint106.name = "vl4";
HAnimJoint106.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimSegment HAnimSegment107 = createNode("HAnimSegment");
HAnimSegment107.DEF = "hanim_l4";
HAnimSegment107.name = "l4";
HAnimJoint106.children = new MFNode();

HAnimJoint106.children[0] = HAnimSegment107;

HAnimJoint HAnimJoint108 = createNode("HAnimJoint");
HAnimJoint108.DEF = "hanim_vl3";
HAnimJoint108.name = "vl3";
HAnimJoint108.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimSegment HAnimSegment109 = createNode("HAnimSegment");
HAnimSegment109.DEF = "hanim_l3";
HAnimSegment109.name = "l3";
HAnimJoint108.children = new MFNode();

HAnimJoint108.children[0] = HAnimSegment109;

HAnimJoint HAnimJoint110 = createNode("HAnimJoint");
HAnimJoint110.DEF = "hanim_vl2";
HAnimJoint110.name = "vl2";
HAnimJoint110.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimSegment HAnimSegment111 = createNode("HAnimSegment");
HAnimSegment111.DEF = "hanim_l2";
HAnimSegment111.name = "l2";
HAnimSite HAnimSite112 = createNode("HAnimSite");
HAnimSite112.DEF = "hanim_r_rib10_pt";
HAnimSite112.name = "r_rib10_pt";
HAnimSite112.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
HAnimSegment111.children = new MFNode();

HAnimSegment111.children[0] = HAnimSite112;

HAnimSite HAnimSite113 = createNode("HAnimSite");
HAnimSite113.DEF = "hanim_l_rib10_pt";
HAnimSite113.name = "l_rib10_pt";
HAnimSite113.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
HAnimSegment111.children[1] = HAnimSite113;

HAnimSite HAnimSite114 = createNode("HAnimSite");
HAnimSite114.DEF = "hanim_rib10_midspine_pt";
HAnimSite114.name = "rib10_midspine_pt";
HAnimSite114.translation = new SFVec3f(new float[0.0049,1.1908,-0.1113]);
HAnimSegment111.children[2] = HAnimSite114;

HAnimJoint110.children = new MFNode();

HAnimJoint110.children[0] = HAnimSegment111;

HAnimJoint HAnimJoint115 = createNode("HAnimJoint");
HAnimJoint115.DEF = "hanim_vl1";
HAnimJoint115.name = "vl1";
HAnimJoint115.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimSegment HAnimSegment116 = createNode("HAnimSegment");
HAnimSegment116.DEF = "hanim_l1";
HAnimSegment116.name = "l1";
HAnimJoint115.children = new MFNode();

HAnimJoint115.children[0] = HAnimSegment116;

HAnimJoint HAnimJoint117 = createNode("HAnimJoint");
HAnimJoint117.DEF = "hanim_vt12";
HAnimJoint117.name = "vt12";
HAnimJoint117.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimSegment HAnimSegment118 = createNode("HAnimSegment");
HAnimSegment118.DEF = "hanim_t12";
HAnimSegment118.name = "t12";
HAnimJoint117.children = new MFNode();

HAnimJoint117.children[0] = HAnimSegment118;

HAnimJoint HAnimJoint119 = createNode("HAnimJoint");
HAnimJoint119.DEF = "hanim_vt11";
HAnimJoint119.name = "vt11";
HAnimJoint119.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimSegment HAnimSegment120 = createNode("HAnimSegment");
HAnimSegment120.DEF = "hanim_t11";
HAnimSegment120.name = "t11";
HAnimJoint119.children = new MFNode();

HAnimJoint119.children[0] = HAnimSegment120;

HAnimJoint HAnimJoint121 = createNode("HAnimJoint");
HAnimJoint121.DEF = "hanim_vt10";
HAnimJoint121.name = "vt10";
HAnimJoint121.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimSegment HAnimSegment122 = createNode("HAnimSegment");
HAnimSegment122.DEF = "hanim_t10";
HAnimSegment122.name = "t10";
HAnimSite HAnimSite123 = createNode("HAnimSite");
HAnimSite123.DEF = "hanim_substernale_pt";
HAnimSite123.name = "substernale_pt";
HAnimSite123.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
HAnimSegment122.children = new MFNode();

HAnimSegment122.children[0] = HAnimSite123;

HAnimJoint121.children = new MFNode();

HAnimJoint121.children[0] = HAnimSegment122;

HAnimJoint HAnimJoint124 = createNode("HAnimJoint");
HAnimJoint124.DEF = "hanim_vt9";
HAnimJoint124.name = "vt9";
HAnimJoint124.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimSegment HAnimSegment125 = createNode("HAnimSegment");
HAnimSegment125.DEF = "hanim_t9";
HAnimSegment125.name = "t9";
HAnimSite HAnimSite126 = createNode("HAnimSite");
HAnimSite126.DEF = "hanim_r_thelion_pt";
HAnimSite126.name = "r_thelion_pt";
HAnimSite126.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
HAnimSegment125.children = new MFNode();

HAnimSegment125.children[0] = HAnimSite126;

HAnimSite HAnimSite127 = createNode("HAnimSite");
HAnimSite127.DEF = "hanim_l_thelion_pt";
HAnimSite127.name = "l_thelion_pt";
HAnimSite127.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
HAnimSegment125.children[1] = HAnimSite127;

HAnimJoint124.children = new MFNode();

HAnimJoint124.children[0] = HAnimSegment125;

HAnimJoint HAnimJoint128 = createNode("HAnimJoint");
HAnimJoint128.DEF = "hanim_vt8";
HAnimJoint128.name = "vt8";
HAnimJoint128.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimSegment HAnimSegment129 = createNode("HAnimSegment");
HAnimSegment129.DEF = "hanim_t8";
HAnimSegment129.name = "t8";
HAnimJoint128.children = new MFNode();

HAnimJoint128.children[0] = HAnimSegment129;

HAnimJoint HAnimJoint130 = createNode("HAnimJoint");
HAnimJoint130.DEF = "hanim_vt7";
HAnimJoint130.name = "vt7";
HAnimJoint130.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimSegment HAnimSegment131 = createNode("HAnimSegment");
HAnimSegment131.DEF = "hanim_t7";
HAnimSegment131.name = "t7";
HAnimJoint130.children = new MFNode();

HAnimJoint130.children[0] = HAnimSegment131;

HAnimJoint HAnimJoint132 = createNode("HAnimJoint");
HAnimJoint132.DEF = "hanim_vt6";
HAnimJoint132.name = "vt6";
HAnimJoint132.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimSegment HAnimSegment133 = createNode("HAnimSegment");
HAnimSegment133.DEF = "hanim_t6";
HAnimSegment133.name = "t6";
HAnimJoint132.children = new MFNode();

HAnimJoint132.children[0] = HAnimSegment133;

HAnimJoint HAnimJoint134 = createNode("HAnimJoint");
HAnimJoint134.DEF = "hanim_vt5";
HAnimJoint134.name = "vt5";
HAnimJoint134.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimSegment HAnimSegment135 = createNode("HAnimSegment");
HAnimSegment135.DEF = "hanim_t5";
HAnimSegment135.name = "t5";
HAnimJoint134.children = new MFNode();

HAnimJoint134.children[0] = HAnimSegment135;

HAnimJoint HAnimJoint136 = createNode("HAnimJoint");
HAnimJoint136.DEF = "hanim_vt4";
HAnimJoint136.name = "vt4";
HAnimJoint136.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimSegment HAnimSegment137 = createNode("HAnimSegment");
HAnimSegment137.DEF = "hanim_t4";
HAnimSegment137.name = "t4";
HAnimJoint136.children = new MFNode();

HAnimJoint136.children[0] = HAnimSegment137;

HAnimJoint HAnimJoint138 = createNode("HAnimJoint");
HAnimJoint138.DEF = "hanim_vt3";
HAnimJoint138.name = "vt3";
HAnimJoint138.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimSegment HAnimSegment139 = createNode("HAnimSegment");
HAnimSegment139.DEF = "hanim_t3";
HAnimSegment139.name = "t3";
HAnimJoint138.children = new MFNode();

HAnimJoint138.children[0] = HAnimSegment139;

HAnimJoint HAnimJoint140 = createNode("HAnimJoint");
HAnimJoint140.DEF = "hanim_vt2";
HAnimJoint140.name = "vt2";
HAnimJoint140.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimSegment HAnimSegment141 = createNode("HAnimSegment");
HAnimSegment141.DEF = "hanim_t2";
HAnimSegment141.name = "t2";
HAnimJoint140.children = new MFNode();

HAnimJoint140.children[0] = HAnimSegment141;

HAnimJoint HAnimJoint142 = createNode("HAnimJoint");
HAnimJoint142.DEF = "hanim_vt1";
HAnimJoint142.name = "vt1";
HAnimJoint142.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimSegment HAnimSegment143 = createNode("HAnimSegment");
HAnimSegment143.DEF = "hanim_t1";
HAnimSegment143.name = "t1";
HAnimSite HAnimSite144 = createNode("HAnimSite");
HAnimSite144.DEF = "hanim_suprasternale_pt";
HAnimSite144.name = "suprasternale_pt";
HAnimSite144.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
HAnimSegment143.children = new MFNode();

HAnimSegment143.children[0] = HAnimSite144;

HAnimSite HAnimSite145 = createNode("HAnimSite");
HAnimSite145.DEF = "hanim_cervicale_pt";
HAnimSite145.name = "cervicale_pt";
HAnimSite145.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
HAnimSegment143.children[1] = HAnimSite145;

HAnimJoint142.children = new MFNode();

HAnimJoint142.children[0] = HAnimSegment143;

HAnimJoint HAnimJoint146 = createNode("HAnimJoint");
HAnimJoint146.DEF = "hanim_vc7";
HAnimJoint146.name = "vc7";
HAnimJoint146.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimSegment HAnimSegment147 = createNode("HAnimSegment");
HAnimSegment147.DEF = "hanim_c7";
HAnimSegment147.name = "c7";
HAnimSite HAnimSite148 = createNode("HAnimSite");
HAnimSite148.DEF = "hanim_r_neck_base_pt";
HAnimSite148.name = "r_neck_base_pt";
HAnimSite148.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
HAnimSegment147.children = new MFNode();

HAnimSegment147.children[0] = HAnimSite148;

HAnimSite HAnimSite149 = createNode("HAnimSite");
HAnimSite149.DEF = "hanim_l_neck_base_pt";
HAnimSite149.name = "l_neck_base_pt";
HAnimSite149.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
HAnimSegment147.children[1] = HAnimSite149;

HAnimJoint146.children = new MFNode();

HAnimJoint146.children[0] = HAnimSegment147;

HAnimJoint HAnimJoint150 = createNode("HAnimJoint");
HAnimJoint150.DEF = "hanim_vc6";
HAnimJoint150.name = "vc6";
HAnimJoint150.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimSegment HAnimSegment151 = createNode("HAnimSegment");
HAnimSegment151.DEF = "hanim_c6";
HAnimSegment151.name = "c6";
HAnimJoint150.children = new MFNode();

HAnimJoint150.children[0] = HAnimSegment151;

HAnimJoint HAnimJoint152 = createNode("HAnimJoint");
HAnimJoint152.DEF = "hanim_vc5";
HAnimJoint152.name = "vc5";
HAnimJoint152.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimSegment HAnimSegment153 = createNode("HAnimSegment");
HAnimSegment153.DEF = "hanim_c5";
HAnimSegment153.name = "c5";
HAnimJoint152.children = new MFNode();

HAnimJoint152.children[0] = HAnimSegment153;

HAnimJoint HAnimJoint154 = createNode("HAnimJoint");
HAnimJoint154.DEF = "hanim_vc4";
HAnimJoint154.name = "vc4";
HAnimJoint154.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimSegment HAnimSegment155 = createNode("HAnimSegment");
HAnimSegment155.DEF = "hanim_c4";
HAnimSegment155.name = "c4";
HAnimJoint154.children = new MFNode();

HAnimJoint154.children[0] = HAnimSegment155;

HAnimJoint HAnimJoint156 = createNode("HAnimJoint");
HAnimJoint156.DEF = "hanim_vc3";
HAnimJoint156.name = "vc3";
HAnimJoint156.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimSegment HAnimSegment157 = createNode("HAnimSegment");
HAnimSegment157.DEF = "hanim_c3";
HAnimSegment157.name = "c3";
HAnimJoint156.children = new MFNode();

HAnimJoint156.children[0] = HAnimSegment157;

HAnimJoint HAnimJoint158 = createNode("HAnimJoint");
HAnimJoint158.DEF = "hanim_vc2";
HAnimJoint158.name = "vc2";
HAnimJoint158.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimSegment HAnimSegment159 = createNode("HAnimSegment");
HAnimSegment159.DEF = "hanim_c2";
HAnimSegment159.name = "c2";
HAnimJoint158.children = new MFNode();

HAnimJoint158.children[0] = HAnimSegment159;

HAnimJoint HAnimJoint160 = createNode("HAnimJoint");
HAnimJoint160.DEF = "hanim_vc1";
HAnimJoint160.name = "vc1";
HAnimJoint160.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimSegment HAnimSegment161 = createNode("HAnimSegment");
HAnimSegment161.DEF = "hanim_c1";
HAnimSegment161.name = "c1";
HAnimJoint160.children = new MFNode();

HAnimJoint160.children[0] = HAnimSegment161;

HAnimJoint HAnimJoint162 = createNode("HAnimJoint");
HAnimJoint162.DEF = "hanim_skullbase";
HAnimJoint162.name = "skullbase";
HAnimJoint162.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimSegment HAnimSegment163 = createNode("HAnimSegment");
HAnimSegment163.DEF = "hanim_skull";
HAnimSegment163.name = "skull";
HAnimSite HAnimSite164 = createNode("HAnimSite");
HAnimSite164.DEF = "hanim_skull_tip";
HAnimSite164.name = "skull_tip";
HAnimSite164.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
HAnimSegment163.children = new MFNode();

HAnimSegment163.children[0] = HAnimSite164;

HAnimSite HAnimSite165 = createNode("HAnimSite");
HAnimSite165.DEF = "hanim_sellion_pt";
HAnimSite165.name = "sellion_pt";
HAnimSite165.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
HAnimSegment163.children[1] = HAnimSite165;

HAnimSite HAnimSite166 = createNode("HAnimSite");
HAnimSite166.DEF = "hanim_r_infraorbitale_pt";
HAnimSite166.name = "r_infraorbitale_pt";
HAnimSite166.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
HAnimSegment163.children[2] = HAnimSite166;

HAnimSite HAnimSite167 = createNode("HAnimSite");
HAnimSite167.DEF = "hanim_l_infraorbitale_pt";
HAnimSite167.name = "l_infraorbitale_pt";
HAnimSite167.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
HAnimSegment163.children[3] = HAnimSite167;

HAnimSite HAnimSite168 = createNode("HAnimSite");
HAnimSite168.DEF = "hanim_supramenton_pt";
HAnimSite168.name = "supramenton_pt";
HAnimSite168.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
HAnimSegment163.children[4] = HAnimSite168;

HAnimSite HAnimSite169 = createNode("HAnimSite");
HAnimSite169.DEF = "hanim_r_tragion_pt";
HAnimSite169.name = "r_tragion_pt";
HAnimSite169.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
HAnimSegment163.children[5] = HAnimSite169;

HAnimSite HAnimSite170 = createNode("HAnimSite");
HAnimSite170.DEF = "hanim_r_gonion_pt";
HAnimSite170.name = "r_gonion_pt";
HAnimSite170.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
HAnimSegment163.children[6] = HAnimSite170;

HAnimSite HAnimSite171 = createNode("HAnimSite");
HAnimSite171.DEF = "hanim_l_tragion_pt";
HAnimSite171.name = "l_tragion_pt";
HAnimSite171.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
HAnimSegment163.children[7] = HAnimSite171;

HAnimSite HAnimSite172 = createNode("HAnimSite");
HAnimSite172.DEF = "hanim_l_gonion_pt";
HAnimSite172.name = "l_gonion_pt";
HAnimSite172.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
HAnimSegment163.children[8] = HAnimSite172;

HAnimSite HAnimSite173 = createNode("HAnimSite");
HAnimSite173.DEF = "hanim_nuchale_pt";
HAnimSite173.name = "nuchale_pt";
HAnimSite173.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
HAnimSegment163.children[9] = HAnimSite173;

HAnimJoint162.children = new MFNode();

HAnimJoint162.children[0] = HAnimSegment163;

HAnimJoint HAnimJoint174 = createNode("HAnimJoint");
HAnimJoint174.DEF = "hanim_l_eyeball_joint";
HAnimJoint174.name = "l_eyeball_joint";
HAnimJoint174.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
HAnimSegment HAnimSegment175 = createNode("HAnimSegment");
HAnimSegment175.DEF = "hanim_l_eyeball";
HAnimSegment175.name = "l_eyeball";
HAnimSite HAnimSite176 = createNode("HAnimSite");
HAnimSite176.DEF = "hanim_l_eyeball_site_view";
HAnimSite176.name = "l_eyeball_site_view";
HAnimSite176.translation = new SFVec3f(new float[0.034,1.64,0.05]);
Viewpoint Viewpoint177 = createNode("Viewpoint");
Viewpoint177.DEF = "hanim_l_eyeball_site_viewpoint";
Viewpoint177.description = "l_eyeball_site_viewpoint looking forward";
Viewpoint177.position = new SFVec3f(new float[0,0,0]);
Viewpoint177.orientation = new SFRotation(new float[0,1,0,3.141593]);
HAnimSite176.children = new MFNode();

HAnimSite176.children[0] = Viewpoint177;

HAnimSegment175.children = new MFNode();

HAnimSegment175.children[0] = HAnimSite176;

HAnimJoint174.children = new MFNode();

HAnimJoint174.children[0] = HAnimSegment175;

HAnimJoint162.children[1] = HAnimJoint174;

HAnimJoint HAnimJoint178 = createNode("HAnimJoint");
HAnimJoint178.DEF = "hanim_l_eyelid_joint";
HAnimJoint178.name = "l_eyelid_joint";
HAnimJoint178.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
HAnimSegment HAnimSegment179 = createNode("HAnimSegment");
HAnimSegment179.DEF = "hanim_l_eyelid";
HAnimSegment179.name = "l_eyelid";
HAnimJoint178.children = new MFNode();

HAnimJoint178.children[0] = HAnimSegment179;

HAnimJoint162.children[2] = HAnimJoint178;

HAnimJoint HAnimJoint180 = createNode("HAnimJoint");
HAnimJoint180.DEF = "hanim_l_eyebrow_joint";
HAnimJoint180.name = "l_eyebrow_joint";
HAnimJoint180.center = new SFVec3f(new float[0.0336,1.635,0.0506]);
HAnimSegment HAnimSegment181 = createNode("HAnimSegment");
HAnimSegment181.DEF = "hanim_l_eyebrow";
HAnimSegment181.name = "l_eyebrow";
HAnimJoint180.children = new MFNode();

HAnimJoint180.children[0] = HAnimSegment181;

HAnimJoint162.children[3] = HAnimJoint180;

HAnimJoint HAnimJoint182 = createNode("HAnimJoint");
HAnimJoint182.DEF = "hanim_r_eyeball_joint";
HAnimJoint182.name = "r_eyeball_joint";
HAnimJoint182.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
HAnimSegment HAnimSegment183 = createNode("HAnimSegment");
HAnimSegment183.DEF = "hanim_r_eyeball";
HAnimSegment183.name = "r_eyeball";
HAnimSite HAnimSite184 = createNode("HAnimSite");
HAnimSite184.DEF = "hanim_r_eyeball_site_view";
HAnimSite184.name = "r_eyeball_site_view";
HAnimSite184.translation = new SFVec3f(new float[-0.034,1.64,0.05]);
Viewpoint Viewpoint185 = createNode("Viewpoint");
Viewpoint185.DEF = "hanim_r_eyeball_site_viewpoint";
Viewpoint185.description = "r_eyeball_site_viewpoint looking forward";
Viewpoint185.position = new SFVec3f(new float[0,0,0]);
Viewpoint185.orientation = new SFRotation(new float[0,1,0,3.141593]);
HAnimSite184.children = new MFNode();

HAnimSite184.children[0] = Viewpoint185;

HAnimSegment183.children = new MFNode();

HAnimSegment183.children[0] = HAnimSite184;

HAnimJoint182.children = new MFNode();

HAnimJoint182.children[0] = HAnimSegment183;

HAnimJoint162.children[4] = HAnimJoint182;

HAnimJoint HAnimJoint186 = createNode("HAnimJoint");
HAnimJoint186.DEF = "hanim_r_eyelid_joint";
HAnimJoint186.name = "r_eyelid_joint";
HAnimJoint186.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
HAnimSegment HAnimSegment187 = createNode("HAnimSegment");
HAnimSegment187.DEF = "hanim_r_eyelid";
HAnimSegment187.name = "r_eyelid";
HAnimJoint186.children = new MFNode();

HAnimJoint186.children[0] = HAnimSegment187;

HAnimJoint162.children[5] = HAnimJoint186;

HAnimJoint HAnimJoint188 = createNode("HAnimJoint");
HAnimJoint188.DEF = "hanim_r_eyebrow_joint";
HAnimJoint188.name = "r_eyebrow_joint";
HAnimJoint188.center = new SFVec3f(new float[-0.0336,1.635,0.0506]);
HAnimSegment HAnimSegment189 = createNode("HAnimSegment");
HAnimSegment189.DEF = "hanim_r_eyebrow";
HAnimSegment189.name = "r_eyebrow";
HAnimJoint188.children = new MFNode();

HAnimJoint188.children[0] = HAnimSegment189;

HAnimJoint162.children[6] = HAnimJoint188;

HAnimJoint HAnimJoint190 = createNode("HAnimJoint");
HAnimJoint190.DEF = "hanim_temporomandibular";
HAnimJoint190.name = "temporomandibular";
HAnimJoint190.center = new SFVec3f(new float[0,1.63,0.015]);
HAnimSegment HAnimSegment191 = createNode("HAnimSegment");
HAnimSegment191.DEF = "hanim_jaw";
HAnimSegment191.name = "jaw";
HAnimSite HAnimSite192 = createNode("HAnimSite");
HAnimSite192.DEF = "hanim_temporomandibular_l_site_pt";
HAnimSite192.name = "temporomandibular_l_site_pt";
HAnimSite192.translation = new SFVec3f(new float[0.045,1.63,0]);
HAnimSegment191.children = new MFNode();

HAnimSegment191.children[0] = HAnimSite192;

HAnimSite HAnimSite193 = createNode("HAnimSite");
HAnimSite193.DEF = "hanim_temporomandibular_r_site_pt";
HAnimSite193.name = "temporomandibular_r_site_pt";
HAnimSite193.translation = new SFVec3f(new float[-0.045,1.63,0]);
HAnimSegment191.children[1] = HAnimSite193;

HAnimJoint190.children = new MFNode();

HAnimJoint190.children[0] = HAnimSegment191;

HAnimJoint162.children[7] = HAnimJoint190;

HAnimJoint160.children[1] = HAnimJoint162;

HAnimJoint158.children[1] = HAnimJoint160;

HAnimJoint156.children[1] = HAnimJoint158;

HAnimJoint154.children[1] = HAnimJoint156;

HAnimJoint152.children[1] = HAnimJoint154;

HAnimJoint150.children[1] = HAnimJoint152;

HAnimJoint146.children[1] = HAnimJoint150;

HAnimJoint142.children[1] = HAnimJoint146;

HAnimJoint HAnimJoint194 = createNode("HAnimJoint");
HAnimJoint194.DEF = "hanim_l_sternoclavicular";
HAnimJoint194.name = "l_sternoclavicular";
HAnimJoint194.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimSegment HAnimSegment195 = createNode("HAnimSegment");
HAnimSegment195.DEF = "hanim_l_clavicle";
HAnimSegment195.name = "l_clavicle";
HAnimSite HAnimSite196 = createNode("HAnimSite");
HAnimSite196.DEF = "hanim_l_clavicale_pt";
HAnimSite196.name = "l_clavicale_pt";
HAnimSite196.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
HAnimSegment195.children = new MFNode();

HAnimSegment195.children[0] = HAnimSite196;

HAnimSite HAnimSite197 = createNode("HAnimSite");
HAnimSite197.DEF = "hanim_l_acromion_pt";
HAnimSite197.name = "l_acromion_pt";
HAnimSite197.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
HAnimSegment195.children[1] = HAnimSite197;

HAnimSite HAnimSite198 = createNode("HAnimSite");
HAnimSite198.DEF = "hanim_l_axilla_ant_pt";
HAnimSite198.name = "l_axilla_ant_pt";
HAnimSite198.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
HAnimSegment195.children[2] = HAnimSite198;

HAnimSite HAnimSite199 = createNode("HAnimSite");
HAnimSite199.DEF = "hanim_l_axilla_post_pt";
HAnimSite199.name = "l_axilla_post_pt";
HAnimSite199.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
HAnimSegment195.children[3] = HAnimSite199;

HAnimJoint194.children = new MFNode();

HAnimJoint194.children[0] = HAnimSegment195;

HAnimJoint HAnimJoint200 = createNode("HAnimJoint");
HAnimJoint200.DEF = "hanim_l_acromioclavicular";
HAnimJoint200.name = "l_acromioclavicular";
HAnimJoint200.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimSegment HAnimSegment201 = createNode("HAnimSegment");
HAnimSegment201.DEF = "hanim_l_scapula";
HAnimSegment201.name = "l_scapula";
HAnimJoint200.children = new MFNode();

HAnimJoint200.children[0] = HAnimSegment201;

HAnimJoint HAnimJoint202 = createNode("HAnimJoint");
HAnimJoint202.DEF = "hanim_l_shoulder";
HAnimJoint202.name = "l_shoulder";
HAnimJoint202.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimSegment HAnimSegment203 = createNode("HAnimSegment");
HAnimSegment203.DEF = "hanim_l_upperarm";
HAnimSegment203.name = "l_upperarm";
HAnimSite HAnimSite204 = createNode("HAnimSite");
HAnimSite204.DEF = "hanim_l_humeral_lateral_epicn_pt";
HAnimSite204.name = "l_humeral_lateral_epicn_pt";
HAnimSite204.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
HAnimSegment203.children = new MFNode();

HAnimSegment203.children[0] = HAnimSite204;

HAnimJoint202.children = new MFNode();

HAnimJoint202.children[0] = HAnimSegment203;

HAnimJoint HAnimJoint205 = createNode("HAnimJoint");
HAnimJoint205.DEF = "hanim_l_elbow";
HAnimJoint205.name = "l_elbow";
HAnimJoint205.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimSegment HAnimSegment206 = createNode("HAnimSegment");
HAnimSegment206.DEF = "hanim_l_forearm";
HAnimSegment206.name = "l_forearm";
HAnimSite HAnimSite207 = createNode("HAnimSite");
HAnimSite207.DEF = "hanim_l_radial_styloid_pt";
HAnimSite207.name = "l_radial_styloid_pt";
HAnimSite207.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
HAnimSegment206.children = new MFNode();

HAnimSegment206.children[0] = HAnimSite207;

HAnimSite HAnimSite208 = createNode("HAnimSite");
HAnimSite208.DEF = "hanim_l_olecranon_pt";
HAnimSite208.name = "l_olecranon_pt";
HAnimSite208.translation = new SFVec3f(new float[0.1962,1.1375,-0.1123]);
HAnimSegment206.children[1] = HAnimSite208;

HAnimSite HAnimSite209 = createNode("HAnimSite");
HAnimSite209.DEF = "hanim_l_humeral_medial_epicn_pt";
HAnimSite209.name = "l_humeral_medial_epicn_pt";
HAnimSite209.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
HAnimSegment206.children[2] = HAnimSite209;

HAnimSite HAnimSite210 = createNode("HAnimSite");
HAnimSite210.DEF = "hanim_l_radiale_pt";
HAnimSite210.name = "l_radiale_pt";
HAnimSite210.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
HAnimSegment206.children[3] = HAnimSite210;

HAnimJoint205.children = new MFNode();

HAnimJoint205.children[0] = HAnimSegment206;

HAnimJoint HAnimJoint211 = createNode("HAnimJoint");
HAnimJoint211.DEF = "hanim_l_wrist";
HAnimJoint211.name = "l_wrist";
HAnimJoint211.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimSegment HAnimSegment212 = createNode("HAnimSegment");
HAnimSegment212.DEF = "hanim_l_hand";
HAnimSegment212.name = "l_hand";
HAnimSite HAnimSite213 = createNode("HAnimSite");
HAnimSite213.DEF = "hanim_l_metacarpal_pha2_pt";
HAnimSite213.name = "l_metacarpal_pha2_pt";
HAnimSite213.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
HAnimSegment212.children = new MFNode();

HAnimSegment212.children[0] = HAnimSite213;

HAnimSite HAnimSite214 = createNode("HAnimSite");
HAnimSite214.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite214.name = "l_ulnar_styloid_pt";
HAnimSite214.translation = new SFVec3f(new float[0.2142,0.8529,-0.0648]);
HAnimSegment212.children[1] = HAnimSite214;

HAnimSite HAnimSite215 = createNode("HAnimSite");
HAnimSite215.DEF = "hanim_l_metacarpal_pha5_pt";
HAnimSite215.name = "l_metacarpal_pha5_pt";
HAnimSite215.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
HAnimSegment212.children[2] = HAnimSite215;

HAnimSite HAnimSite216 = createNode("HAnimSite");
HAnimSite216.DEF = "hanim_l_hand_front_view";
HAnimSite216.name = "l_hand_front_view";
HAnimSite216.translation = new SFVec3f(new float[0.3,0.75,0.45]);
Viewpoint Viewpoint217 = createNode("Viewpoint");
Viewpoint217.DEF = "hanim_l_hand_front_viewpoint";
Viewpoint217.description = "left hand front";
Viewpoint217.position = new SFVec3f(new float[0,0,0]);
Viewpoint217.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
HAnimSite216.children = new MFNode();

HAnimSite216.children[0] = Viewpoint217;

HAnimSegment212.children[3] = HAnimSite216;

HAnimJoint211.children = new MFNode();

HAnimJoint211.children[0] = HAnimSegment212;

HAnimJoint HAnimJoint218 = createNode("HAnimJoint");
HAnimJoint218.DEF = "hanim_l_thumb1";
HAnimJoint218.name = "l_thumb1";
HAnimJoint218.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimSegment HAnimSegment219 = createNode("HAnimSegment");
HAnimSegment219.DEF = "hanim_l_thumb_metacarpal";
HAnimSegment219.name = "l_thumb_metacarpal";
HAnimJoint218.children = new MFNode();

HAnimJoint218.children[0] = HAnimSegment219;

HAnimJoint HAnimJoint220 = createNode("HAnimJoint");
HAnimJoint220.DEF = "hanim_l_thumb2";
HAnimJoint220.name = "l_thumb2";
HAnimJoint220.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimSegment HAnimSegment221 = createNode("HAnimSegment");
HAnimSegment221.DEF = "hanim_l_thumb_proximal";
HAnimSegment221.name = "l_thumb_proximal";
HAnimJoint220.children = new MFNode();

HAnimJoint220.children[0] = HAnimSegment221;

HAnimJoint HAnimJoint222 = createNode("HAnimJoint");
HAnimJoint222.DEF = "hanim_l_thumb3";
HAnimJoint222.name = "l_thumb3";
HAnimJoint222.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimSegment HAnimSegment223 = createNode("HAnimSegment");
HAnimSegment223.DEF = "hanim_l_thumb_distal";
HAnimSegment223.name = "l_thumb_distal";
HAnimSite HAnimSite224 = createNode("HAnimSite");
HAnimSite224.DEF = "hanim_l_thumb_distal_tip";
HAnimSite224.name = "l_thumb_distal_tip";
HAnimSite224.translation = new SFVec3f(new float[0.1982,0.8061,0.0759]);
HAnimSegment223.children = new MFNode();

HAnimSegment223.children[0] = HAnimSite224;

HAnimJoint222.children = new MFNode();

HAnimJoint222.children[0] = HAnimSegment223;

HAnimJoint220.children[1] = HAnimJoint222;

HAnimJoint218.children[1] = HAnimJoint220;

HAnimJoint211.children[1] = HAnimJoint218;

HAnimJoint HAnimJoint225 = createNode("HAnimJoint");
HAnimJoint225.DEF = "hanim_l_index0";
HAnimJoint225.name = "l_index0";
HAnimJoint225.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimSegment HAnimSegment226 = createNode("HAnimSegment");
HAnimSegment226.DEF = "hanim_l_index_metacarpal";
HAnimSegment226.name = "l_index_metacarpal";
HAnimJoint225.children = new MFNode();

HAnimJoint225.children[0] = HAnimSegment226;

HAnimJoint HAnimJoint227 = createNode("HAnimJoint");
HAnimJoint227.DEF = "hanim_l_index1";
HAnimJoint227.name = "l_index1";
HAnimJoint227.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimSegment HAnimSegment228 = createNode("HAnimSegment");
HAnimSegment228.DEF = "hanim_l_index_proximal";
HAnimSegment228.name = "l_index_proximal";
HAnimJoint227.children = new MFNode();

HAnimJoint227.children[0] = HAnimSegment228;

HAnimJoint HAnimJoint229 = createNode("HAnimJoint");
HAnimJoint229.DEF = "hanim_l_index2";
HAnimJoint229.name = "l_index2";
HAnimJoint229.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimSegment HAnimSegment230 = createNode("HAnimSegment");
HAnimSegment230.DEF = "hanim_l_index_middle";
HAnimSegment230.name = "l_index_middle";
HAnimJoint229.children = new MFNode();

HAnimJoint229.children[0] = HAnimSegment230;

HAnimJoint HAnimJoint231 = createNode("HAnimJoint");
HAnimJoint231.DEF = "hanim_l_index3";
HAnimJoint231.name = "l_index3";
HAnimJoint231.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimSegment HAnimSegment232 = createNode("HAnimSegment");
HAnimSegment232.DEF = "hanim_l_index_distal";
HAnimSegment232.name = "l_index_distal";
HAnimSite HAnimSite233 = createNode("HAnimSite");
HAnimSite233.DEF = "hanim_l_index_distal_tip";
HAnimSite233.name = "l_index_distal_tip";
HAnimSite233.translation = new SFVec3f(new float[0.2089,0.6858,-0.0245]);
HAnimSegment232.children = new MFNode();

HAnimSegment232.children[0] = HAnimSite233;

HAnimSite HAnimSite234 = createNode("HAnimSite");
HAnimSite234.DEF = "hanim_l_dactylion_pt";
HAnimSite234.name = "l_dactylion_pt";
HAnimSite234.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
HAnimSegment232.children[1] = HAnimSite234;

HAnimJoint231.children = new MFNode();

HAnimJoint231.children[0] = HAnimSegment232;

HAnimJoint229.children[1] = HAnimJoint231;

HAnimJoint227.children[1] = HAnimJoint229;

HAnimJoint225.children[1] = HAnimJoint227;

HAnimJoint211.children[2] = HAnimJoint225;

HAnimJoint HAnimJoint235 = createNode("HAnimJoint");
HAnimJoint235.DEF = "hanim_l_middle0";
HAnimJoint235.name = "l_middle0";
HAnimJoint235.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimSegment HAnimSegment236 = createNode("HAnimSegment");
HAnimSegment236.DEF = "hanim_l_middle_metacarpal";
HAnimSegment236.name = "l_middle_metacarpal";
HAnimJoint235.children = new MFNode();

HAnimJoint235.children[0] = HAnimSegment236;

HAnimJoint HAnimJoint237 = createNode("HAnimJoint");
HAnimJoint237.DEF = "hanim_l_middle1";
HAnimJoint237.name = "l_middle1";
HAnimJoint237.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimSegment HAnimSegment238 = createNode("HAnimSegment");
HAnimSegment238.DEF = "hanim_l_middle_proximal";
HAnimSegment238.name = "l_middle_proximal";
HAnimJoint237.children = new MFNode();

HAnimJoint237.children[0] = HAnimSegment238;

HAnimJoint HAnimJoint239 = createNode("HAnimJoint");
HAnimJoint239.DEF = "hanim_l_middle2";
HAnimJoint239.name = "l_middle2";
HAnimJoint239.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimSegment HAnimSegment240 = createNode("HAnimSegment");
HAnimSegment240.DEF = "hanim_l_middle_middle";
HAnimSegment240.name = "l_middle_middle";
HAnimJoint239.children = new MFNode();

HAnimJoint239.children[0] = HAnimSegment240;

HAnimJoint HAnimJoint241 = createNode("HAnimJoint");
HAnimJoint241.DEF = "hanim_l_middle3";
HAnimJoint241.name = "l_middle3";
HAnimJoint241.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimSegment HAnimSegment242 = createNode("HAnimSegment");
HAnimSegment242.DEF = "hanim_l_middle_distal";
HAnimSegment242.name = "l_middle_distal";
HAnimSite HAnimSite243 = createNode("HAnimSite");
HAnimSite243.DEF = "hanim_l_middle_distal_tip";
HAnimSite243.name = "l_middle_distal_tip";
HAnimSite243.translation = new SFVec3f(new float[0.208,0.6731,-0.0491]);
HAnimSegment242.children = new MFNode();

HAnimSegment242.children[0] = HAnimSite243;

HAnimJoint241.children = new MFNode();

HAnimJoint241.children[0] = HAnimSegment242;

HAnimJoint239.children[1] = HAnimJoint241;

HAnimJoint237.children[1] = HAnimJoint239;

HAnimJoint235.children[1] = HAnimJoint237;

HAnimJoint211.children[3] = HAnimJoint235;

HAnimJoint HAnimJoint244 = createNode("HAnimJoint");
HAnimJoint244.DEF = "hanim_l_ring0";
HAnimJoint244.name = "l_ring0";
HAnimJoint244.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimSegment HAnimSegment245 = createNode("HAnimSegment");
HAnimSegment245.DEF = "hanim_l_ring_metacarpal";
HAnimSegment245.name = "l_ring_metacarpal";
HAnimJoint244.children = new MFNode();

HAnimJoint244.children[0] = HAnimSegment245;

HAnimJoint HAnimJoint246 = createNode("HAnimJoint");
HAnimJoint246.DEF = "hanim_l_ring1";
HAnimJoint246.name = "l_ring1";
HAnimJoint246.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimSegment HAnimSegment247 = createNode("HAnimSegment");
HAnimSegment247.DEF = "hanim_l_ring_proximal";
HAnimSegment247.name = "l_ring_proximal";
HAnimJoint246.children = new MFNode();

HAnimJoint246.children[0] = HAnimSegment247;

HAnimJoint HAnimJoint248 = createNode("HAnimJoint");
HAnimJoint248.DEF = "hanim_l_ring2";
HAnimJoint248.name = "l_ring2";
HAnimJoint248.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimSegment HAnimSegment249 = createNode("HAnimSegment");
HAnimSegment249.DEF = "hanim_l_ring_middle";
HAnimSegment249.name = "l_ring_middle";
HAnimJoint248.children = new MFNode();

HAnimJoint248.children[0] = HAnimSegment249;

HAnimJoint HAnimJoint250 = createNode("HAnimJoint");
HAnimJoint250.DEF = "hanim_l_ring3";
HAnimJoint250.name = "l_ring3";
HAnimJoint250.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimSegment HAnimSegment251 = createNode("HAnimSegment");
HAnimSegment251.DEF = "hanim_l_ring_distal";
HAnimSegment251.name = "l_ring_distal";
HAnimSite HAnimSite252 = createNode("HAnimSite");
HAnimSite252.DEF = "hanim_l_ring_distal_tip";
HAnimSite252.name = "l_ring_distal_tip";
HAnimSite252.translation = new SFVec3f(new float[0.2035,0.675,-0.0756]);
HAnimSegment251.children = new MFNode();

HAnimSegment251.children[0] = HAnimSite252;

HAnimJoint250.children = new MFNode();

HAnimJoint250.children[0] = HAnimSegment251;

HAnimJoint248.children[1] = HAnimJoint250;

HAnimJoint246.children[1] = HAnimJoint248;

HAnimJoint244.children[1] = HAnimJoint246;

HAnimJoint211.children[4] = HAnimJoint244;

HAnimJoint HAnimJoint253 = createNode("HAnimJoint");
HAnimJoint253.DEF = "hanim_l_pinky0";
HAnimJoint253.name = "l_pinky0";
HAnimJoint253.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimSegment HAnimSegment254 = createNode("HAnimSegment");
HAnimSegment254.DEF = "hanim_l_pinky_metacarpal";
HAnimSegment254.name = "l_pinky_metacarpal";
HAnimJoint253.children = new MFNode();

HAnimJoint253.children[0] = HAnimSegment254;

HAnimJoint HAnimJoint255 = createNode("HAnimJoint");
HAnimJoint255.DEF = "hanim_l_pinky1";
HAnimJoint255.name = "l_pinky1";
HAnimJoint255.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimSegment HAnimSegment256 = createNode("HAnimSegment");
HAnimSegment256.DEF = "hanim_l_pinky_proximal";
HAnimSegment256.name = "l_pinky_proximal";
HAnimJoint255.children = new MFNode();

HAnimJoint255.children[0] = HAnimSegment256;

HAnimJoint HAnimJoint257 = createNode("HAnimJoint");
HAnimJoint257.DEF = "hanim_l_pinky2";
HAnimJoint257.name = "l_pinky2";
HAnimJoint257.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimSegment HAnimSegment258 = createNode("HAnimSegment");
HAnimSegment258.DEF = "hanim_l_pinky_middle";
HAnimSegment258.name = "l_pinky_middle";
HAnimJoint257.children = new MFNode();

HAnimJoint257.children[0] = HAnimSegment258;

HAnimJoint HAnimJoint259 = createNode("HAnimJoint");
HAnimJoint259.DEF = "hanim_l_pinky3";
HAnimJoint259.name = "l_pinky3";
HAnimJoint259.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimSegment HAnimSegment260 = createNode("HAnimSegment");
HAnimSegment260.DEF = "hanim_l_pinky_distal";
HAnimSegment260.name = "l_pinky_distal";
HAnimSite HAnimSite261 = createNode("HAnimSite");
HAnimSite261.DEF = "hanim_l_pinky_distal_tip";
HAnimSite261.name = "l_pinky_distal_tip";
HAnimSite261.translation = new SFVec3f(new float[0.2014,0.7009,-0.1012]);
HAnimSegment260.children = new MFNode();

HAnimSegment260.children[0] = HAnimSite261;

HAnimJoint259.children = new MFNode();

HAnimJoint259.children[0] = HAnimSegment260;

HAnimJoint257.children[1] = HAnimJoint259;

HAnimJoint255.children[1] = HAnimJoint257;

HAnimJoint253.children[1] = HAnimJoint255;

HAnimJoint211.children[5] = HAnimJoint253;

HAnimJoint205.children[1] = HAnimJoint211;

HAnimJoint202.children[1] = HAnimJoint205;

HAnimJoint200.children[1] = HAnimJoint202;

HAnimJoint194.children[1] = HAnimJoint200;

HAnimJoint142.children[2] = HAnimJoint194;

HAnimJoint HAnimJoint262 = createNode("HAnimJoint");
HAnimJoint262.DEF = "hanim_r_sternoclavicular";
HAnimJoint262.name = "r_sternoclavicular";
HAnimJoint262.center = new SFVec3f(new float[-0.082,1.4488,-0.0353]);
HAnimSegment HAnimSegment263 = createNode("HAnimSegment");
HAnimSegment263.DEF = "hanim_r_clavicle";
HAnimSegment263.name = "r_clavicle";
HAnimSite HAnimSite264 = createNode("HAnimSite");
HAnimSite264.DEF = "hanim_r_clavicale_pt";
HAnimSite264.name = "r_clavicale_pt";
HAnimSite264.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
HAnimSegment263.children = new MFNode();

HAnimSegment263.children[0] = HAnimSite264;

HAnimSite HAnimSite265 = createNode("HAnimSite");
HAnimSite265.DEF = "hanim_r_acromion_pt";
HAnimSite265.name = "r_acromion_pt";
HAnimSite265.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
HAnimSegment263.children[1] = HAnimSite265;

HAnimSite HAnimSite266 = createNode("HAnimSite");
HAnimSite266.DEF = "hanim_r_axilla_ant_pt";
HAnimSite266.name = "r_axilla_ant_pt";
HAnimSite266.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
HAnimSegment263.children[2] = HAnimSite266;

HAnimSite HAnimSite267 = createNode("HAnimSite");
HAnimSite267.DEF = "hanim_r_axilla_post_pt";
HAnimSite267.name = "r_axilla_post_pt";
HAnimSite267.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
HAnimSegment263.children[3] = HAnimSite267;

HAnimJoint262.children = new MFNode();

HAnimJoint262.children[0] = HAnimSegment263;

HAnimJoint HAnimJoint268 = createNode("HAnimJoint");
HAnimJoint268.DEF = "hanim_r_acromioclavicular";
HAnimJoint268.name = "r_acromioclavicular";
HAnimJoint268.center = new SFVec3f(new float[-0.0962,1.4269,-0.0424]);
HAnimSegment HAnimSegment269 = createNode("HAnimSegment");
HAnimSegment269.DEF = "hanim_r_scapula";
HAnimSegment269.name = "r_scapula";
HAnimJoint268.children = new MFNode();

HAnimJoint268.children[0] = HAnimSegment269;

HAnimJoint HAnimJoint270 = createNode("HAnimJoint");
HAnimJoint270.DEF = "hanim_r_shoulder";
HAnimJoint270.name = "r_shoulder";
HAnimJoint270.center = new SFVec3f(new float[-0.2029,1.4376,-0.0387]);
HAnimSegment HAnimSegment271 = createNode("HAnimSegment");
HAnimSegment271.DEF = "hanim_r_upperarm";
HAnimSegment271.name = "r_upperarm";
HAnimSite HAnimSite272 = createNode("HAnimSite");
HAnimSite272.DEF = "hanim_r_humeral_lateral_epicn_pt";
HAnimSite272.name = "r_humeral_lateral_epicn_pt";
HAnimSite272.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
HAnimSegment271.children = new MFNode();

HAnimSegment271.children[0] = HAnimSite272;

HAnimJoint270.children = new MFNode();

HAnimJoint270.children[0] = HAnimSegment271;

HAnimJoint HAnimJoint273 = createNode("HAnimJoint");
HAnimJoint273.DEF = "hanim_r_elbow";
HAnimJoint273.name = "r_elbow";
HAnimJoint273.center = new SFVec3f(new float[-0.2014,1.1357,-0.0682]);
HAnimSegment HAnimSegment274 = createNode("HAnimSegment");
HAnimSegment274.DEF = "hanim_r_forearm";
HAnimSegment274.name = "r_forearm";
HAnimSite HAnimSite275 = createNode("HAnimSite");
HAnimSite275.DEF = "hanim_r_radial_styloid_pt";
HAnimSite275.name = "r_radial_styloid_pt";
HAnimSite275.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
HAnimSegment274.children = new MFNode();

HAnimSegment274.children[0] = HAnimSite275;

HAnimSite HAnimSite276 = createNode("HAnimSite");
HAnimSite276.DEF = "hanim_r_olecranon_pt";
HAnimSite276.name = "r_olecranon_pt";
HAnimSite276.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
HAnimSegment274.children[1] = HAnimSite276;

HAnimSite HAnimSite277 = createNode("HAnimSite");
HAnimSite277.DEF = "hanim_r_humeral_medial_epicn_pt";
HAnimSite277.name = "r_humeral_medial_epicn_pt";
HAnimSite277.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
HAnimSegment274.children[2] = HAnimSite277;

HAnimSite HAnimSite278 = createNode("HAnimSite");
HAnimSite278.DEF = "hanim_r_radiale_pt";
HAnimSite278.name = "r_radiale_pt";
HAnimSite278.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
HAnimSegment274.children[3] = HAnimSite278;

HAnimJoint273.children = new MFNode();

HAnimJoint273.children[0] = HAnimSegment274;

HAnimJoint HAnimJoint279 = createNode("HAnimJoint");
HAnimJoint279.DEF = "hanim_r_wrist";
HAnimJoint279.name = "r_wrist";
HAnimJoint279.center = new SFVec3f(new float[-0.1984,0.8663,-0.0583]);
HAnimSegment HAnimSegment280 = createNode("HAnimSegment");
HAnimSegment280.DEF = "hanim_r_hand";
HAnimSegment280.name = "r_hand";
HAnimSite HAnimSite281 = createNode("HAnimSite");
HAnimSite281.DEF = "hanim_r_metacarpal_pha2_pt";
HAnimSite281.name = "r_metacarpal_pha2_pt";
HAnimSite281.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
HAnimSegment280.children = new MFNode();

HAnimSegment280.children[0] = HAnimSite281;

HAnimSite HAnimSite282 = createNode("HAnimSite");
HAnimSite282.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite282.name = "r_ulnar_styloid_pt";
HAnimSite282.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
HAnimSegment280.children[1] = HAnimSite282;

HAnimSite HAnimSite283 = createNode("HAnimSite");
HAnimSite283.DEF = "hanim_r_metacarpal_pha5_pt";
HAnimSite283.name = "r_metacarpal_pha5_pt";
HAnimSite283.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
HAnimSegment280.children[2] = HAnimSite283;

HAnimSite HAnimSite284 = createNode("HAnimSite");
HAnimSite284.DEF = "hanim_r_hand_front_view";
HAnimSite284.name = "r_hand_front_view";
HAnimSite284.translation = new SFVec3f(new float[-0.3,0.75,0.45]);
Viewpoint Viewpoint285 = createNode("Viewpoint");
Viewpoint285.DEF = "hanim_r_hand_front_viewpoint";
Viewpoint285.description = "right hand front";
Viewpoint285.position = new SFVec3f(new float[0,0,0]);
Viewpoint285.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
HAnimSite284.children = new MFNode();

HAnimSite284.children[0] = Viewpoint285;

HAnimSegment280.children[3] = HAnimSite284;

HAnimJoint279.children = new MFNode();

HAnimJoint279.children[0] = HAnimSegment280;

HAnimJoint HAnimJoint286 = createNode("HAnimJoint");
HAnimJoint286.DEF = "hanim_r_thumb1";
HAnimJoint286.name = "r_thumb1";
HAnimJoint286.center = new SFVec3f(new float[-0.1924,0.8472,-0.0534]);
HAnimSegment HAnimSegment287 = createNode("HAnimSegment");
HAnimSegment287.DEF = "hanim_r_thumb_metacarpal";
HAnimSegment287.name = "r_thumb_metacarpal";
HAnimJoint286.children = new MFNode();

HAnimJoint286.children[0] = HAnimSegment287;

HAnimJoint HAnimJoint288 = createNode("HAnimJoint");
HAnimJoint288.DEF = "hanim_r_thumb2";
HAnimJoint288.name = "r_thumb2";
HAnimJoint288.center = new SFVec3f(new float[-0.1951,0.8226,0.0246]);
HAnimSegment HAnimSegment289 = createNode("HAnimSegment");
HAnimSegment289.DEF = "hanim_r_thumb_proximal";
HAnimSegment289.name = "r_thumb_proximal";
HAnimJoint288.children = new MFNode();

HAnimJoint288.children[0] = HAnimSegment289;

HAnimJoint HAnimJoint290 = createNode("HAnimJoint");
HAnimJoint290.DEF = "hanim_r_thumb3";
HAnimJoint290.name = "r_thumb3";
HAnimJoint290.center = new SFVec3f(new float[-0.1955,0.8159,0.0464]);
HAnimSegment HAnimSegment291 = createNode("HAnimSegment");
HAnimSegment291.DEF = "hanim_r_thumb_distal";
HAnimSegment291.name = "r_thumb_distal";
HAnimSite HAnimSite292 = createNode("HAnimSite");
HAnimSite292.DEF = "hanim_r_thumb_distal_tip";
HAnimSite292.name = "r_thumb_distal_tip";
HAnimSite292.translation = new SFVec3f(new float[-0.1869,0.809,0.082]);
HAnimSegment291.children = new MFNode();

HAnimSegment291.children[0] = HAnimSite292;

HAnimJoint290.children = new MFNode();

HAnimJoint290.children[0] = HAnimSegment291;

HAnimJoint288.children[1] = HAnimJoint290;

HAnimJoint286.children[1] = HAnimJoint288;

HAnimJoint279.children[1] = HAnimJoint286;

HAnimJoint HAnimJoint293 = createNode("HAnimJoint");
HAnimJoint293.DEF = "hanim_r_index0";
HAnimJoint293.name = "r_index0";
HAnimJoint293.center = new SFVec3f(new float[-0.1983,0.8024,-0.028]);
HAnimSegment HAnimSegment294 = createNode("HAnimSegment");
HAnimSegment294.DEF = "hanim_r_index_metacarpal";
HAnimSegment294.name = "r_index_metacarpal";
HAnimJoint293.children = new MFNode();

HAnimJoint293.children[0] = HAnimSegment294;

HAnimJoint HAnimJoint295 = createNode("HAnimJoint");
HAnimJoint295.DEF = "hanim_r_index1";
HAnimJoint295.name = "r_index1";
HAnimJoint295.center = new SFVec3f(new float[-0.1983,0.7815,-0.028]);
HAnimSegment HAnimSegment296 = createNode("HAnimSegment");
HAnimSegment296.DEF = "hanim_r_index_proximal";
HAnimSegment296.name = "r_index_proximal";
HAnimJoint295.children = new MFNode();

HAnimJoint295.children[0] = HAnimSegment296;

HAnimJoint HAnimJoint297 = createNode("HAnimJoint");
HAnimJoint297.DEF = "hanim_r_index2";
HAnimJoint297.name = "r_index2";
HAnimJoint297.center = new SFVec3f(new float[-0.2017,0.7363,-0.0248]);
HAnimSegment HAnimSegment298 = createNode("HAnimSegment");
HAnimSegment298.DEF = "hanim_r_index_middle";
HAnimSegment298.name = "r_index_middle";
HAnimJoint297.children = new MFNode();

HAnimJoint297.children[0] = HAnimSegment298;

HAnimJoint HAnimJoint299 = createNode("HAnimJoint");
HAnimJoint299.DEF = "hanim_r_index3";
HAnimJoint299.name = "r_index3";
HAnimJoint299.center = new SFVec3f(new float[-0.2028,0.7139,-0.0236]);
HAnimSegment HAnimSegment300 = createNode("HAnimSegment");
HAnimSegment300.DEF = "hanim_r_index_distal";
HAnimSegment300.name = "r_index_distal";
HAnimSite HAnimSite301 = createNode("HAnimSite");
HAnimSite301.DEF = "hanim_r_index_distal_tip";
HAnimSite301.name = "r_index_distal_tip";
HAnimSite301.translation = new SFVec3f(new float[-0.198,0.6883,-0.018]);
HAnimSegment300.children = new MFNode();

HAnimSegment300.children[0] = HAnimSite301;

HAnimSite HAnimSite302 = createNode("HAnimSite");
HAnimSite302.DEF = "hanim_r_dactylion_pt";
HAnimSite302.name = "r_dactylion_pt";
HAnimSite302.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
HAnimSegment300.children[1] = HAnimSite302;

HAnimJoint299.children = new MFNode();

HAnimJoint299.children[0] = HAnimSegment300;

HAnimJoint297.children[1] = HAnimJoint299;

HAnimJoint295.children[1] = HAnimJoint297;

HAnimJoint293.children[1] = HAnimJoint295;

HAnimJoint279.children[2] = HAnimJoint293;

HAnimJoint HAnimJoint303 = createNode("HAnimJoint");
HAnimJoint303.DEF = "hanim_r_middle0";
HAnimJoint303.name = "r_middle0";
HAnimJoint303.center = new SFVec3f(new float[-0.1987,0.8029,-0.053]);
HAnimSegment HAnimSegment304 = createNode("HAnimSegment");
HAnimSegment304.DEF = "hanim_r_middle_metacarpal";
HAnimSegment304.name = "r_middle_metacarpal";
HAnimJoint303.children = new MFNode();

HAnimJoint303.children[0] = HAnimSegment304;

HAnimJoint HAnimJoint305 = createNode("HAnimJoint");
HAnimJoint305.DEF = "hanim_r_middle1";
HAnimJoint305.name = "r_middle1";
HAnimJoint305.center = new SFVec3f(new float[-0.1987,0.7818,-0.053]);
HAnimSegment HAnimSegment306 = createNode("HAnimSegment");
HAnimSegment306.DEF = "hanim_r_middle_proximal";
HAnimSegment306.name = "r_middle_proximal";
HAnimJoint305.children = new MFNode();

HAnimJoint305.children[0] = HAnimSegment306;

HAnimJoint HAnimJoint307 = createNode("HAnimJoint");
HAnimJoint307.DEF = "hanim_r_middle2";
HAnimJoint307.name = "r_middle2";
HAnimJoint307.center = new SFVec3f(new float[-0.2013,0.7273,-0.0503]);
HAnimSegment HAnimSegment308 = createNode("HAnimSegment");
HAnimSegment308.DEF = "hanim_r_middle_middle";
HAnimSegment308.name = "r_middle_middle";
HAnimJoint307.children = new MFNode();

HAnimJoint307.children[0] = HAnimSegment308;

HAnimJoint HAnimJoint309 = createNode("HAnimJoint");
HAnimJoint309.DEF = "hanim_r_middle3";
HAnimJoint309.name = "r_middle3";
HAnimJoint309.center = new SFVec3f(new float[-0.2026,0.7011,-0.0494]);
HAnimSegment HAnimSegment310 = createNode("HAnimSegment");
HAnimSegment310.DEF = "hanim_r_middle_distal";
HAnimSegment310.name = "r_middle_distal";
HAnimSite HAnimSite311 = createNode("HAnimSite");
HAnimSite311.DEF = "hanim_r_middle_distal_tip";
HAnimSite311.name = "r_middle_distal_tip";
HAnimSite311.translation = new SFVec3f(new float[-0.1969,0.6758,-0.0427]);
HAnimSegment310.children = new MFNode();

HAnimSegment310.children[0] = HAnimSite311;

HAnimJoint309.children = new MFNode();

HAnimJoint309.children[0] = HAnimSegment310;

HAnimJoint307.children[1] = HAnimJoint309;

HAnimJoint305.children[1] = HAnimJoint307;

HAnimJoint303.children[1] = HAnimJoint305;

HAnimJoint279.children[3] = HAnimJoint303;

HAnimJoint HAnimJoint312 = createNode("HAnimJoint");
HAnimJoint312.DEF = "hanim_r_ring0";
HAnimJoint312.name = "r_ring0";
HAnimJoint312.center = new SFVec3f(new float[-0.1956,0.8019,-0.0794]);
HAnimSegment HAnimSegment313 = createNode("HAnimSegment");
HAnimSegment313.DEF = "hanim_r_ring_metacarpal";
HAnimSegment313.name = "r_ring_metacarpal";
HAnimJoint312.children = new MFNode();

HAnimJoint312.children[0] = HAnimSegment313;

HAnimJoint HAnimJoint314 = createNode("HAnimJoint");
HAnimJoint314.DEF = "hanim_r_ring1";
HAnimJoint314.name = "r_ring1";
HAnimJoint314.center = new SFVec3f(new float[-0.1956,0.7815,-0.0794]);
HAnimSegment HAnimSegment315 = createNode("HAnimSegment");
HAnimSegment315.DEF = "hanim_r_ring_proximal";
HAnimSegment315.name = "r_ring_proximal";
HAnimJoint314.children = new MFNode();

HAnimJoint314.children[0] = HAnimSegment315;

HAnimJoint HAnimJoint316 = createNode("HAnimJoint");
HAnimJoint316.DEF = "hanim_r_ring2";
HAnimJoint316.name = "r_ring2";
HAnimJoint316.center = new SFVec3f(new float[-0.1973,0.7287,-0.0777]);
HAnimSegment HAnimSegment317 = createNode("HAnimSegment");
HAnimSegment317.DEF = "hanim_r_ring_middle";
HAnimSegment317.name = "r_ring_middle";
HAnimJoint316.children = new MFNode();

HAnimJoint316.children[0] = HAnimSegment317;

HAnimJoint HAnimJoint318 = createNode("HAnimJoint");
HAnimJoint318.DEF = "hanim_r_ring3";
HAnimJoint318.name = "r_ring3";
HAnimJoint318.center = new SFVec3f(new float[-0.1983,0.7045,-0.0767]);
HAnimSegment HAnimSegment319 = createNode("HAnimSegment");
HAnimSegment319.DEF = "hanim_r_ring_distal";
HAnimSegment319.name = "r_ring_distal";
HAnimSite HAnimSite320 = createNode("HAnimSite");
HAnimSite320.DEF = "hanim_r_ring_distal_tip";
HAnimSite320.name = "r_ring_distal_tip";
HAnimSite320.translation = new SFVec3f(new float[-0.1934,0.6778,-0.0693]);
HAnimSegment319.children = new MFNode();

HAnimSegment319.children[0] = HAnimSite320;

HAnimJoint318.children = new MFNode();

HAnimJoint318.children[0] = HAnimSegment319;

HAnimJoint316.children[1] = HAnimJoint318;

HAnimJoint314.children[1] = HAnimJoint316;

HAnimJoint312.children[1] = HAnimJoint314;

HAnimJoint279.children[4] = HAnimJoint312;

HAnimJoint HAnimJoint321 = createNode("HAnimJoint");
HAnimJoint321.DEF = "hanim_r_pinky0";
HAnimJoint321.name = "r_pinky0";
HAnimJoint321.center = new SFVec3f(new float[-0.1925,0.8066,-0.1036]);
HAnimSegment HAnimSegment322 = createNode("HAnimSegment");
HAnimSegment322.DEF = "hanim_r_pinky_metacarpal";
HAnimSegment322.name = "r_pinky_metacarpal";
HAnimJoint321.children = new MFNode();

HAnimJoint321.children[0] = HAnimSegment322;

HAnimJoint HAnimJoint323 = createNode("HAnimJoint");
HAnimJoint323.DEF = "hanim_r_pinky1";
HAnimJoint323.name = "r_pinky1";
HAnimJoint323.center = new SFVec3f(new float[-0.1925,0.7866,-0.1036]);
HAnimSegment HAnimSegment324 = createNode("HAnimSegment");
HAnimSegment324.DEF = "hanim_r_pinky_proximal";
HAnimSegment324.name = "r_pinky_proximal";
HAnimJoint323.children = new MFNode();

HAnimJoint323.children[0] = HAnimSegment324;

HAnimJoint HAnimJoint325 = createNode("HAnimJoint");
HAnimJoint325.DEF = "hanim_r_pinky2";
HAnimJoint325.name = "r_pinky2";
HAnimJoint325.center = new SFVec3f(new float[-0.1938,0.7452,-0.1024]);
HAnimSegment HAnimSegment326 = createNode("HAnimSegment");
HAnimSegment326.DEF = "hanim_r_pinky_middle";
HAnimSegment326.name = "r_pinky_middle";
HAnimJoint325.children = new MFNode();

HAnimJoint325.children[0] = HAnimSegment326;

HAnimJoint HAnimJoint327 = createNode("HAnimJoint");
HAnimJoint327.DEF = "hanim_r_pinky3";
HAnimJoint327.name = "r_pinky3";
HAnimJoint327.center = new SFVec3f(new float[-0.1948,0.7277,-0.1017]);
HAnimSegment HAnimSegment328 = createNode("HAnimSegment");
HAnimSegment328.DEF = "hanim_r_pinky_distal";
HAnimSegment328.name = "r_pinky_distal";
HAnimSite HAnimSite329 = createNode("HAnimSite");
HAnimSite329.DEF = "hanim_r_pinky_distal_tip";
HAnimSite329.name = "r_pinky_distal_tip";
HAnimSite329.translation = new SFVec3f(new float[-0.1938,0.7035,-0.0949]);
HAnimSegment328.children = new MFNode();

HAnimSegment328.children[0] = HAnimSite329;

HAnimJoint327.children = new MFNode();

HAnimJoint327.children[0] = HAnimSegment328;

HAnimJoint325.children[1] = HAnimJoint327;

HAnimJoint323.children[1] = HAnimJoint325;

HAnimJoint321.children[1] = HAnimJoint323;

HAnimJoint279.children[5] = HAnimJoint321;

HAnimJoint273.children[1] = HAnimJoint279;

HAnimJoint270.children[1] = HAnimJoint273;

HAnimJoint268.children[1] = HAnimJoint270;

HAnimJoint262.children[1] = HAnimJoint268;

HAnimJoint142.children[3] = HAnimJoint262;

HAnimJoint140.children[1] = HAnimJoint142;

HAnimJoint138.children[1] = HAnimJoint140;

HAnimJoint136.children[1] = HAnimJoint138;

HAnimJoint134.children[1] = HAnimJoint136;

HAnimJoint132.children[1] = HAnimJoint134;

HAnimJoint130.children[1] = HAnimJoint132;

HAnimJoint128.children[1] = HAnimJoint130;

HAnimJoint124.children[1] = HAnimJoint128;

HAnimJoint121.children[1] = HAnimJoint124;

HAnimJoint119.children[1] = HAnimJoint121;

HAnimJoint117.children[1] = HAnimJoint119;

HAnimJoint115.children[1] = HAnimJoint117;

HAnimJoint110.children[1] = HAnimJoint115;

HAnimJoint108.children[1] = HAnimJoint110;

HAnimJoint106.children[1] = HAnimJoint108;

HAnimJoint102.children[1] = HAnimJoint106;

HAnimJoint43.children[2] = HAnimJoint102;

HAnimHumanoid42.joints = new MFNode();

HAnimHumanoid42.joints[0] = HAnimJoint43;

HAnimJoint HAnimJoint330 = createNode("HAnimJoint");
HAnimJoint330.USE = "hanim_humanoid_root";
HAnimHumanoid42.joints[1] = HAnimJoint330;

HAnimJoint HAnimJoint331 = createNode("HAnimJoint");
HAnimJoint331.USE = "hanim_sacroiliac";
HAnimHumanoid42.joints[2] = HAnimJoint331;

HAnimJoint HAnimJoint332 = createNode("HAnimJoint");
HAnimJoint332.USE = "hanim_vl5";
HAnimHumanoid42.joints[3] = HAnimJoint332;

HAnimJoint HAnimJoint333 = createNode("HAnimJoint");
HAnimJoint333.USE = "hanim_vl4";
HAnimHumanoid42.joints[4] = HAnimJoint333;

HAnimJoint HAnimJoint334 = createNode("HAnimJoint");
HAnimJoint334.USE = "hanim_vl3";
HAnimHumanoid42.joints[5] = HAnimJoint334;

HAnimJoint HAnimJoint335 = createNode("HAnimJoint");
HAnimJoint335.USE = "hanim_vl2";
HAnimHumanoid42.joints[6] = HAnimJoint335;

HAnimJoint HAnimJoint336 = createNode("HAnimJoint");
HAnimJoint336.USE = "hanim_vl1";
HAnimHumanoid42.joints[7] = HAnimJoint336;

HAnimJoint HAnimJoint337 = createNode("HAnimJoint");
HAnimJoint337.USE = "hanim_vt12";
HAnimHumanoid42.joints[8] = HAnimJoint337;

HAnimJoint HAnimJoint338 = createNode("HAnimJoint");
HAnimJoint338.USE = "hanim_vt11";
HAnimHumanoid42.joints[9] = HAnimJoint338;

HAnimJoint HAnimJoint339 = createNode("HAnimJoint");
HAnimJoint339.USE = "hanim_vt10";
HAnimHumanoid42.joints[10] = HAnimJoint339;

HAnimJoint HAnimJoint340 = createNode("HAnimJoint");
HAnimJoint340.USE = "hanim_vt9";
HAnimHumanoid42.joints[11] = HAnimJoint340;

HAnimJoint HAnimJoint341 = createNode("HAnimJoint");
HAnimJoint341.USE = "hanim_vt8";
HAnimHumanoid42.joints[12] = HAnimJoint341;

HAnimJoint HAnimJoint342 = createNode("HAnimJoint");
HAnimJoint342.USE = "hanim_vt7";
HAnimHumanoid42.joints[13] = HAnimJoint342;

HAnimJoint HAnimJoint343 = createNode("HAnimJoint");
HAnimJoint343.USE = "hanim_vt6";
HAnimHumanoid42.joints[14] = HAnimJoint343;

HAnimJoint HAnimJoint344 = createNode("HAnimJoint");
HAnimJoint344.USE = "hanim_vt5";
HAnimHumanoid42.joints[15] = HAnimJoint344;

HAnimJoint HAnimJoint345 = createNode("HAnimJoint");
HAnimJoint345.USE = "hanim_vt4";
HAnimHumanoid42.joints[16] = HAnimJoint345;

HAnimJoint HAnimJoint346 = createNode("HAnimJoint");
HAnimJoint346.USE = "hanim_vt3";
HAnimHumanoid42.joints[17] = HAnimJoint346;

HAnimJoint HAnimJoint347 = createNode("HAnimJoint");
HAnimJoint347.USE = "hanim_vt2";
HAnimHumanoid42.joints[18] = HAnimJoint347;

HAnimJoint HAnimJoint348 = createNode("HAnimJoint");
HAnimJoint348.USE = "hanim_vt1";
HAnimHumanoid42.joints[19] = HAnimJoint348;

HAnimJoint HAnimJoint349 = createNode("HAnimJoint");
HAnimJoint349.USE = "hanim_vc7";
HAnimHumanoid42.joints[20] = HAnimJoint349;

HAnimJoint HAnimJoint350 = createNode("HAnimJoint");
HAnimJoint350.USE = "hanim_vc6";
HAnimHumanoid42.joints[21] = HAnimJoint350;

HAnimJoint HAnimJoint351 = createNode("HAnimJoint");
HAnimJoint351.USE = "hanim_vc5";
HAnimHumanoid42.joints[22] = HAnimJoint351;

HAnimJoint HAnimJoint352 = createNode("HAnimJoint");
HAnimJoint352.USE = "hanim_vc4";
HAnimHumanoid42.joints[23] = HAnimJoint352;

HAnimJoint HAnimJoint353 = createNode("HAnimJoint");
HAnimJoint353.USE = "hanim_vc3";
HAnimHumanoid42.joints[24] = HAnimJoint353;

HAnimJoint HAnimJoint354 = createNode("HAnimJoint");
HAnimJoint354.USE = "hanim_vc2";
HAnimHumanoid42.joints[25] = HAnimJoint354;

HAnimJoint HAnimJoint355 = createNode("HAnimJoint");
HAnimJoint355.USE = "hanim_vc1";
HAnimHumanoid42.joints[26] = HAnimJoint355;

HAnimJoint HAnimJoint356 = createNode("HAnimJoint");
HAnimJoint356.USE = "hanim_skullbase";
HAnimHumanoid42.joints[27] = HAnimJoint356;

HAnimJoint HAnimJoint357 = createNode("HAnimJoint");
HAnimJoint357.USE = "hanim_temporomandibular";
HAnimHumanoid42.joints[28] = HAnimJoint357;

HAnimJoint HAnimJoint358 = createNode("HAnimJoint");
HAnimJoint358.USE = "hanim_l_acromioclavicular";
HAnimHumanoid42.joints[29] = HAnimJoint358;

HAnimJoint HAnimJoint359 = createNode("HAnimJoint");
HAnimJoint359.USE = "hanim_r_acromioclavicular";
HAnimHumanoid42.joints[30] = HAnimJoint359;

HAnimJoint HAnimJoint360 = createNode("HAnimJoint");
HAnimJoint360.USE = "hanim_l_ankle";
HAnimHumanoid42.joints[31] = HAnimJoint360;

HAnimJoint HAnimJoint361 = createNode("HAnimJoint");
HAnimJoint361.USE = "hanim_r_ankle";
HAnimHumanoid42.joints[32] = HAnimJoint361;

HAnimJoint HAnimJoint362 = createNode("HAnimJoint");
HAnimJoint362.USE = "hanim_l_elbow";
HAnimHumanoid42.joints[33] = HAnimJoint362;

HAnimJoint HAnimJoint363 = createNode("HAnimJoint");
HAnimJoint363.USE = "hanim_r_elbow";
HAnimHumanoid42.joints[34] = HAnimJoint363;

HAnimJoint HAnimJoint364 = createNode("HAnimJoint");
HAnimJoint364.USE = "hanim_l_eyeball_joint";
HAnimHumanoid42.joints[35] = HAnimJoint364;

HAnimJoint HAnimJoint365 = createNode("HAnimJoint");
HAnimJoint365.USE = "hanim_r_eyeball_joint";
HAnimHumanoid42.joints[36] = HAnimJoint365;

HAnimJoint HAnimJoint366 = createNode("HAnimJoint");
HAnimJoint366.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid42.joints[37] = HAnimJoint366;

HAnimJoint HAnimJoint367 = createNode("HAnimJoint");
HAnimJoint367.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid42.joints[38] = HAnimJoint367;

HAnimJoint HAnimJoint368 = createNode("HAnimJoint");
HAnimJoint368.USE = "hanim_l_eyelid_joint";
HAnimHumanoid42.joints[39] = HAnimJoint368;

HAnimJoint HAnimJoint369 = createNode("HAnimJoint");
HAnimJoint369.USE = "hanim_r_eyelid_joint";
HAnimHumanoid42.joints[40] = HAnimJoint369;

HAnimJoint HAnimJoint370 = createNode("HAnimJoint");
HAnimJoint370.USE = "hanim_l_hip";
HAnimHumanoid42.joints[41] = HAnimJoint370;

HAnimJoint HAnimJoint371 = createNode("HAnimJoint");
HAnimJoint371.USE = "hanim_r_hip";
HAnimHumanoid42.joints[42] = HAnimJoint371;

HAnimJoint HAnimJoint372 = createNode("HAnimJoint");
HAnimJoint372.USE = "hanim_l_index0";
HAnimHumanoid42.joints[43] = HAnimJoint372;

HAnimJoint HAnimJoint373 = createNode("HAnimJoint");
HAnimJoint373.USE = "hanim_r_index0";
HAnimHumanoid42.joints[44] = HAnimJoint373;

HAnimJoint HAnimJoint374 = createNode("HAnimJoint");
HAnimJoint374.USE = "hanim_l_index1";
HAnimHumanoid42.joints[45] = HAnimJoint374;

HAnimJoint HAnimJoint375 = createNode("HAnimJoint");
HAnimJoint375.USE = "hanim_r_index1";
HAnimHumanoid42.joints[46] = HAnimJoint375;

HAnimJoint HAnimJoint376 = createNode("HAnimJoint");
HAnimJoint376.USE = "hanim_l_index2";
HAnimHumanoid42.joints[47] = HAnimJoint376;

HAnimJoint HAnimJoint377 = createNode("HAnimJoint");
HAnimJoint377.USE = "hanim_r_index2";
HAnimHumanoid42.joints[48] = HAnimJoint377;

HAnimJoint HAnimJoint378 = createNode("HAnimJoint");
HAnimJoint378.USE = "hanim_l_index3";
HAnimHumanoid42.joints[49] = HAnimJoint378;

HAnimJoint HAnimJoint379 = createNode("HAnimJoint");
HAnimJoint379.USE = "hanim_r_index3";
HAnimHumanoid42.joints[50] = HAnimJoint379;

HAnimJoint HAnimJoint380 = createNode("HAnimJoint");
HAnimJoint380.USE = "hanim_l_knee";
HAnimHumanoid42.joints[51] = HAnimJoint380;

HAnimJoint HAnimJoint381 = createNode("HAnimJoint");
HAnimJoint381.USE = "hanim_r_knee";
HAnimHumanoid42.joints[52] = HAnimJoint381;

HAnimJoint HAnimJoint382 = createNode("HAnimJoint");
HAnimJoint382.USE = "hanim_l_metatarsal";
HAnimHumanoid42.joints[53] = HAnimJoint382;

HAnimJoint HAnimJoint383 = createNode("HAnimJoint");
HAnimJoint383.USE = "hanim_r_metatarsal";
HAnimHumanoid42.joints[54] = HAnimJoint383;

HAnimJoint HAnimJoint384 = createNode("HAnimJoint");
HAnimJoint384.USE = "hanim_l_middle0";
HAnimHumanoid42.joints[55] = HAnimJoint384;

HAnimJoint HAnimJoint385 = createNode("HAnimJoint");
HAnimJoint385.USE = "hanim_r_middle0";
HAnimHumanoid42.joints[56] = HAnimJoint385;

HAnimJoint HAnimJoint386 = createNode("HAnimJoint");
HAnimJoint386.USE = "hanim_l_middle1";
HAnimHumanoid42.joints[57] = HAnimJoint386;

HAnimJoint HAnimJoint387 = createNode("HAnimJoint");
HAnimJoint387.USE = "hanim_r_middle1";
HAnimHumanoid42.joints[58] = HAnimJoint387;

HAnimJoint HAnimJoint388 = createNode("HAnimJoint");
HAnimJoint388.USE = "hanim_l_middle2";
HAnimHumanoid42.joints[59] = HAnimJoint388;

HAnimJoint HAnimJoint389 = createNode("HAnimJoint");
HAnimJoint389.USE = "hanim_r_middle2";
HAnimHumanoid42.joints[60] = HAnimJoint389;

HAnimJoint HAnimJoint390 = createNode("HAnimJoint");
HAnimJoint390.USE = "hanim_l_middle3";
HAnimHumanoid42.joints[61] = HAnimJoint390;

HAnimJoint HAnimJoint391 = createNode("HAnimJoint");
HAnimJoint391.USE = "hanim_r_middle3";
HAnimHumanoid42.joints[62] = HAnimJoint391;

HAnimJoint HAnimJoint392 = createNode("HAnimJoint");
HAnimJoint392.USE = "hanim_l_midtarsal";
HAnimHumanoid42.joints[63] = HAnimJoint392;

HAnimJoint HAnimJoint393 = createNode("HAnimJoint");
HAnimJoint393.USE = "hanim_r_midtarsal";
HAnimHumanoid42.joints[64] = HAnimJoint393;

HAnimJoint HAnimJoint394 = createNode("HAnimJoint");
HAnimJoint394.USE = "hanim_l_pinky0";
HAnimHumanoid42.joints[65] = HAnimJoint394;

HAnimJoint HAnimJoint395 = createNode("HAnimJoint");
HAnimJoint395.USE = "hanim_r_pinky0";
HAnimHumanoid42.joints[66] = HAnimJoint395;

HAnimJoint HAnimJoint396 = createNode("HAnimJoint");
HAnimJoint396.USE = "hanim_l_pinky1";
HAnimHumanoid42.joints[67] = HAnimJoint396;

HAnimJoint HAnimJoint397 = createNode("HAnimJoint");
HAnimJoint397.USE = "hanim_r_pinky1";
HAnimHumanoid42.joints[68] = HAnimJoint397;

HAnimJoint HAnimJoint398 = createNode("HAnimJoint");
HAnimJoint398.USE = "hanim_l_pinky2";
HAnimHumanoid42.joints[69] = HAnimJoint398;

HAnimJoint HAnimJoint399 = createNode("HAnimJoint");
HAnimJoint399.USE = "hanim_r_pinky2";
HAnimHumanoid42.joints[70] = HAnimJoint399;

HAnimJoint HAnimJoint400 = createNode("HAnimJoint");
HAnimJoint400.USE = "hanim_l_pinky3";
HAnimHumanoid42.joints[71] = HAnimJoint400;

HAnimJoint HAnimJoint401 = createNode("HAnimJoint");
HAnimJoint401.USE = "hanim_r_pinky3";
HAnimHumanoid42.joints[72] = HAnimJoint401;

HAnimJoint HAnimJoint402 = createNode("HAnimJoint");
HAnimJoint402.USE = "hanim_l_ring0";
HAnimHumanoid42.joints[73] = HAnimJoint402;

HAnimJoint HAnimJoint403 = createNode("HAnimJoint");
HAnimJoint403.USE = "hanim_r_ring0";
HAnimHumanoid42.joints[74] = HAnimJoint403;

HAnimJoint HAnimJoint404 = createNode("HAnimJoint");
HAnimJoint404.USE = "hanim_l_ring1";
HAnimHumanoid42.joints[75] = HAnimJoint404;

HAnimJoint HAnimJoint405 = createNode("HAnimJoint");
HAnimJoint405.USE = "hanim_r_ring1";
HAnimHumanoid42.joints[76] = HAnimJoint405;

HAnimJoint HAnimJoint406 = createNode("HAnimJoint");
HAnimJoint406.USE = "hanim_l_ring2";
HAnimHumanoid42.joints[77] = HAnimJoint406;

HAnimJoint HAnimJoint407 = createNode("HAnimJoint");
HAnimJoint407.USE = "hanim_r_ring2";
HAnimHumanoid42.joints[78] = HAnimJoint407;

HAnimJoint HAnimJoint408 = createNode("HAnimJoint");
HAnimJoint408.USE = "hanim_l_ring3";
HAnimHumanoid42.joints[79] = HAnimJoint408;

HAnimJoint HAnimJoint409 = createNode("HAnimJoint");
HAnimJoint409.USE = "hanim_r_ring3";
HAnimHumanoid42.joints[80] = HAnimJoint409;

HAnimJoint HAnimJoint410 = createNode("HAnimJoint");
HAnimJoint410.USE = "hanim_l_shoulder";
HAnimHumanoid42.joints[81] = HAnimJoint410;

HAnimJoint HAnimJoint411 = createNode("HAnimJoint");
HAnimJoint411.USE = "hanim_r_shoulder";
HAnimHumanoid42.joints[82] = HAnimJoint411;

HAnimJoint HAnimJoint412 = createNode("HAnimJoint");
HAnimJoint412.USE = "hanim_l_sternoclavicular";
HAnimHumanoid42.joints[83] = HAnimJoint412;

HAnimJoint HAnimJoint413 = createNode("HAnimJoint");
HAnimJoint413.USE = "hanim_r_sternoclavicular";
HAnimHumanoid42.joints[84] = HAnimJoint413;

HAnimJoint HAnimJoint414 = createNode("HAnimJoint");
HAnimJoint414.USE = "hanim_l_subtalar";
HAnimHumanoid42.joints[85] = HAnimJoint414;

HAnimJoint HAnimJoint415 = createNode("HAnimJoint");
HAnimJoint415.USE = "hanim_r_subtalar";
HAnimHumanoid42.joints[86] = HAnimJoint415;

HAnimJoint HAnimJoint416 = createNode("HAnimJoint");
HAnimJoint416.USE = "hanim_l_thumb1";
HAnimHumanoid42.joints[87] = HAnimJoint416;

HAnimJoint HAnimJoint417 = createNode("HAnimJoint");
HAnimJoint417.USE = "hanim_r_thumb1";
HAnimHumanoid42.joints[88] = HAnimJoint417;

HAnimJoint HAnimJoint418 = createNode("HAnimJoint");
HAnimJoint418.USE = "hanim_l_thumb2";
HAnimHumanoid42.joints[89] = HAnimJoint418;

HAnimJoint HAnimJoint419 = createNode("HAnimJoint");
HAnimJoint419.USE = "hanim_r_thumb2";
HAnimHumanoid42.joints[90] = HAnimJoint419;

HAnimJoint HAnimJoint420 = createNode("HAnimJoint");
HAnimJoint420.USE = "hanim_l_thumb3";
HAnimHumanoid42.joints[91] = HAnimJoint420;

HAnimJoint HAnimJoint421 = createNode("HAnimJoint");
HAnimJoint421.USE = "hanim_r_thumb3";
HAnimHumanoid42.joints[92] = HAnimJoint421;

HAnimJoint HAnimJoint422 = createNode("HAnimJoint");
HAnimJoint422.USE = "hanim_l_wrist";
HAnimHumanoid42.joints[93] = HAnimJoint422;

HAnimJoint HAnimJoint423 = createNode("HAnimJoint");
HAnimJoint423.USE = "hanim_r_wrist";
HAnimHumanoid42.joints[94] = HAnimJoint423;

HAnimSegment HAnimSegment424 = createNode("HAnimSegment");
HAnimSegment424.USE = "hanim_pelvis";
HAnimHumanoid42.segments[95] = HAnimSegment424;

HAnimSegment HAnimSegment425 = createNode("HAnimSegment");
HAnimSegment425.USE = "hanim_skull";
HAnimHumanoid42.segments[96] = HAnimSegment425;

HAnimSegment HAnimSegment426 = createNode("HAnimSegment");
HAnimSegment426.USE = "hanim_jaw";
HAnimHumanoid42.segments[97] = HAnimSegment426;

HAnimSegment HAnimSegment427 = createNode("HAnimSegment");
HAnimSegment427.USE = "hanim_c1";
HAnimHumanoid42.segments[98] = HAnimSegment427;

HAnimSegment HAnimSegment428 = createNode("HAnimSegment");
HAnimSegment428.USE = "hanim_c2";
HAnimHumanoid42.segments[99] = HAnimSegment428;

HAnimSegment HAnimSegment429 = createNode("HAnimSegment");
HAnimSegment429.USE = "hanim_c3";
HAnimHumanoid42.segments[100] = HAnimSegment429;

HAnimSegment HAnimSegment430 = createNode("HAnimSegment");
HAnimSegment430.USE = "hanim_c4";
HAnimHumanoid42.segments[101] = HAnimSegment430;

HAnimSegment HAnimSegment431 = createNode("HAnimSegment");
HAnimSegment431.USE = "hanim_c5";
HAnimHumanoid42.segments[102] = HAnimSegment431;

HAnimSegment HAnimSegment432 = createNode("HAnimSegment");
HAnimSegment432.USE = "hanim_c6";
HAnimHumanoid42.segments[103] = HAnimSegment432;

HAnimSegment HAnimSegment433 = createNode("HAnimSegment");
HAnimSegment433.USE = "hanim_c7";
HAnimHumanoid42.segments[104] = HAnimSegment433;

HAnimSegment HAnimSegment434 = createNode("HAnimSegment");
HAnimSegment434.USE = "hanim_t1";
HAnimHumanoid42.segments[105] = HAnimSegment434;

HAnimSegment HAnimSegment435 = createNode("HAnimSegment");
HAnimSegment435.USE = "hanim_t2";
HAnimHumanoid42.segments[106] = HAnimSegment435;

HAnimSegment HAnimSegment436 = createNode("HAnimSegment");
HAnimSegment436.USE = "hanim_t3";
HAnimHumanoid42.segments[107] = HAnimSegment436;

HAnimSegment HAnimSegment437 = createNode("HAnimSegment");
HAnimSegment437.USE = "hanim_t4";
HAnimHumanoid42.segments[108] = HAnimSegment437;

HAnimSegment HAnimSegment438 = createNode("HAnimSegment");
HAnimSegment438.USE = "hanim_t5";
HAnimHumanoid42.segments[109] = HAnimSegment438;

HAnimSegment HAnimSegment439 = createNode("HAnimSegment");
HAnimSegment439.USE = "hanim_t6";
HAnimHumanoid42.segments[110] = HAnimSegment439;

HAnimSegment HAnimSegment440 = createNode("HAnimSegment");
HAnimSegment440.USE = "hanim_t7";
HAnimHumanoid42.segments[111] = HAnimSegment440;

HAnimSegment HAnimSegment441 = createNode("HAnimSegment");
HAnimSegment441.USE = "hanim_t8";
HAnimHumanoid42.segments[112] = HAnimSegment441;

HAnimSegment HAnimSegment442 = createNode("HAnimSegment");
HAnimSegment442.USE = "hanim_t9";
HAnimHumanoid42.segments[113] = HAnimSegment442;

HAnimSegment HAnimSegment443 = createNode("HAnimSegment");
HAnimSegment443.USE = "hanim_t10";
HAnimHumanoid42.segments[114] = HAnimSegment443;

HAnimSegment HAnimSegment444 = createNode("HAnimSegment");
HAnimSegment444.USE = "hanim_t11";
HAnimHumanoid42.segments[115] = HAnimSegment444;

HAnimSegment HAnimSegment445 = createNode("HAnimSegment");
HAnimSegment445.USE = "hanim_t12";
HAnimHumanoid42.segments[116] = HAnimSegment445;

HAnimSegment HAnimSegment446 = createNode("HAnimSegment");
HAnimSegment446.USE = "hanim_l1";
HAnimHumanoid42.segments[117] = HAnimSegment446;

HAnimSegment HAnimSegment447 = createNode("HAnimSegment");
HAnimSegment447.USE = "hanim_l2";
HAnimHumanoid42.segments[118] = HAnimSegment447;

HAnimSegment HAnimSegment448 = createNode("HAnimSegment");
HAnimSegment448.USE = "hanim_l3";
HAnimHumanoid42.segments[119] = HAnimSegment448;

HAnimSegment HAnimSegment449 = createNode("HAnimSegment");
HAnimSegment449.USE = "hanim_l4";
HAnimHumanoid42.segments[120] = HAnimSegment449;

HAnimSegment HAnimSegment450 = createNode("HAnimSegment");
HAnimSegment450.USE = "hanim_l5";
HAnimHumanoid42.segments[121] = HAnimSegment450;

HAnimSegment HAnimSegment451 = createNode("HAnimSegment");
HAnimSegment451.USE = "hanim_sacrum";
HAnimHumanoid42.segments[122] = HAnimSegment451;

HAnimSegment HAnimSegment452 = createNode("HAnimSegment");
HAnimSegment452.USE = "hanim_l_calf";
HAnimHumanoid42.segments[123] = HAnimSegment452;

HAnimSegment HAnimSegment453 = createNode("HAnimSegment");
HAnimSegment453.USE = "hanim_r_calf";
HAnimHumanoid42.segments[124] = HAnimSegment453;

HAnimSegment HAnimSegment454 = createNode("HAnimSegment");
HAnimSegment454.USE = "hanim_l_clavicle";
HAnimHumanoid42.segments[125] = HAnimSegment454;

HAnimSegment HAnimSegment455 = createNode("HAnimSegment");
HAnimSegment455.USE = "hanim_r_clavicle";
HAnimHumanoid42.segments[126] = HAnimSegment455;

HAnimSegment HAnimSegment456 = createNode("HAnimSegment");
HAnimSegment456.USE = "hanim_l_eyeball";
HAnimHumanoid42.segments[127] = HAnimSegment456;

HAnimSegment HAnimSegment457 = createNode("HAnimSegment");
HAnimSegment457.USE = "hanim_r_eyeball";
HAnimHumanoid42.segments[128] = HAnimSegment457;

HAnimSegment HAnimSegment458 = createNode("HAnimSegment");
HAnimSegment458.USE = "hanim_l_eyebrow";
HAnimHumanoid42.segments[129] = HAnimSegment458;

HAnimSegment HAnimSegment459 = createNode("HAnimSegment");
HAnimSegment459.USE = "hanim_r_eyebrow";
HAnimHumanoid42.segments[130] = HAnimSegment459;

HAnimSegment HAnimSegment460 = createNode("HAnimSegment");
HAnimSegment460.USE = "hanim_l_eyelid";
HAnimHumanoid42.segments[131] = HAnimSegment460;

HAnimSegment HAnimSegment461 = createNode("HAnimSegment");
HAnimSegment461.USE = "hanim_r_eyelid";
HAnimHumanoid42.segments[132] = HAnimSegment461;

HAnimSegment HAnimSegment462 = createNode("HAnimSegment");
HAnimSegment462.USE = "hanim_l_forearm";
HAnimHumanoid42.segments[133] = HAnimSegment462;

HAnimSegment HAnimSegment463 = createNode("HAnimSegment");
HAnimSegment463.USE = "hanim_r_forearm";
HAnimHumanoid42.segments[134] = HAnimSegment463;

HAnimSegment HAnimSegment464 = createNode("HAnimSegment");
HAnimSegment464.USE = "hanim_l_forefoot";
HAnimHumanoid42.segments[135] = HAnimSegment464;

HAnimSegment HAnimSegment465 = createNode("HAnimSegment");
HAnimSegment465.USE = "hanim_r_forefoot";
HAnimHumanoid42.segments[136] = HAnimSegment465;

HAnimSegment HAnimSegment466 = createNode("HAnimSegment");
HAnimSegment466.USE = "hanim_l_hand";
HAnimHumanoid42.segments[137] = HAnimSegment466;

HAnimSegment HAnimSegment467 = createNode("HAnimSegment");
HAnimSegment467.USE = "hanim_r_hand";
HAnimHumanoid42.segments[138] = HAnimSegment467;

HAnimSegment HAnimSegment468 = createNode("HAnimSegment");
HAnimSegment468.USE = "hanim_l_hindfoot";
HAnimHumanoid42.segments[139] = HAnimSegment468;

HAnimSegment HAnimSegment469 = createNode("HAnimSegment");
HAnimSegment469.USE = "hanim_r_hindfoot";
HAnimHumanoid42.segments[140] = HAnimSegment469;

HAnimSegment HAnimSegment470 = createNode("HAnimSegment");
HAnimSegment470.USE = "hanim_l_index_distal";
HAnimHumanoid42.segments[141] = HAnimSegment470;

HAnimSegment HAnimSegment471 = createNode("HAnimSegment");
HAnimSegment471.USE = "hanim_r_index_distal";
HAnimHumanoid42.segments[142] = HAnimSegment471;

HAnimSegment HAnimSegment472 = createNode("HAnimSegment");
HAnimSegment472.USE = "hanim_l_index_metacarpal";
HAnimHumanoid42.segments[143] = HAnimSegment472;

HAnimSegment HAnimSegment473 = createNode("HAnimSegment");
HAnimSegment473.USE = "hanim_r_index_metacarpal";
HAnimHumanoid42.segments[144] = HAnimSegment473;

HAnimSegment HAnimSegment474 = createNode("HAnimSegment");
HAnimSegment474.USE = "hanim_l_index_middle";
HAnimHumanoid42.segments[145] = HAnimSegment474;

HAnimSegment HAnimSegment475 = createNode("HAnimSegment");
HAnimSegment475.USE = "hanim_r_index_middle";
HAnimHumanoid42.segments[146] = HAnimSegment475;

HAnimSegment HAnimSegment476 = createNode("HAnimSegment");
HAnimSegment476.USE = "hanim_l_index_proximal";
HAnimHumanoid42.segments[147] = HAnimSegment476;

HAnimSegment HAnimSegment477 = createNode("HAnimSegment");
HAnimSegment477.USE = "hanim_r_index_proximal";
HAnimHumanoid42.segments[148] = HAnimSegment477;

HAnimSegment HAnimSegment478 = createNode("HAnimSegment");
HAnimSegment478.USE = "hanim_l_middistal";
HAnimHumanoid42.segments[149] = HAnimSegment478;

HAnimSegment HAnimSegment479 = createNode("HAnimSegment");
HAnimSegment479.USE = "hanim_r_middistal";
HAnimHumanoid42.segments[150] = HAnimSegment479;

HAnimSegment HAnimSegment480 = createNode("HAnimSegment");
HAnimSegment480.USE = "hanim_l_middle_distal";
HAnimHumanoid42.segments[151] = HAnimSegment480;

HAnimSegment HAnimSegment481 = createNode("HAnimSegment");
HAnimSegment481.USE = "hanim_r_middle_distal";
HAnimHumanoid42.segments[152] = HAnimSegment481;

HAnimSegment HAnimSegment482 = createNode("HAnimSegment");
HAnimSegment482.USE = "hanim_l_middle_metacarpal";
HAnimHumanoid42.segments[153] = HAnimSegment482;

HAnimSegment HAnimSegment483 = createNode("HAnimSegment");
HAnimSegment483.USE = "hanim_r_middle_metacarpal";
HAnimHumanoid42.segments[154] = HAnimSegment483;

HAnimSegment HAnimSegment484 = createNode("HAnimSegment");
HAnimSegment484.USE = "hanim_l_middle_middle";
HAnimHumanoid42.segments[155] = HAnimSegment484;

HAnimSegment HAnimSegment485 = createNode("HAnimSegment");
HAnimSegment485.USE = "hanim_r_middle_middle";
HAnimHumanoid42.segments[156] = HAnimSegment485;

HAnimSegment HAnimSegment486 = createNode("HAnimSegment");
HAnimSegment486.USE = "hanim_l_middle_proximal";
HAnimHumanoid42.segments[157] = HAnimSegment486;

HAnimSegment HAnimSegment487 = createNode("HAnimSegment");
HAnimSegment487.USE = "hanim_r_middle_proximal";
HAnimHumanoid42.segments[158] = HAnimSegment487;

HAnimSegment HAnimSegment488 = createNode("HAnimSegment");
HAnimSegment488.USE = "hanim_l_midproximal";
HAnimHumanoid42.segments[159] = HAnimSegment488;

HAnimSegment HAnimSegment489 = createNode("HAnimSegment");
HAnimSegment489.USE = "hanim_r_midproximal";
HAnimHumanoid42.segments[160] = HAnimSegment489;

HAnimSegment HAnimSegment490 = createNode("HAnimSegment");
HAnimSegment490.USE = "hanim_l_pinky_distal";
HAnimHumanoid42.segments[161] = HAnimSegment490;

HAnimSegment HAnimSegment491 = createNode("HAnimSegment");
HAnimSegment491.USE = "hanim_r_pinky_distal";
HAnimHumanoid42.segments[162] = HAnimSegment491;

HAnimSegment HAnimSegment492 = createNode("HAnimSegment");
HAnimSegment492.USE = "hanim_l_pinky_metacarpal";
HAnimHumanoid42.segments[163] = HAnimSegment492;

HAnimSegment HAnimSegment493 = createNode("HAnimSegment");
HAnimSegment493.USE = "hanim_r_pinky_metacarpal";
HAnimHumanoid42.segments[164] = HAnimSegment493;

HAnimSegment HAnimSegment494 = createNode("HAnimSegment");
HAnimSegment494.USE = "hanim_l_pinky_middle";
HAnimHumanoid42.segments[165] = HAnimSegment494;

HAnimSegment HAnimSegment495 = createNode("HAnimSegment");
HAnimSegment495.USE = "hanim_r_pinky_middle";
HAnimHumanoid42.segments[166] = HAnimSegment495;

HAnimSegment HAnimSegment496 = createNode("HAnimSegment");
HAnimSegment496.USE = "hanim_l_pinky_proximal";
HAnimHumanoid42.segments[167] = HAnimSegment496;

HAnimSegment HAnimSegment497 = createNode("HAnimSegment");
HAnimSegment497.USE = "hanim_r_pinky_proximal";
HAnimHumanoid42.segments[168] = HAnimSegment497;

HAnimSegment HAnimSegment498 = createNode("HAnimSegment");
HAnimSegment498.USE = "hanim_l_ring_distal";
HAnimHumanoid42.segments[169] = HAnimSegment498;

HAnimSegment HAnimSegment499 = createNode("HAnimSegment");
HAnimSegment499.USE = "hanim_r_ring_distal";
HAnimHumanoid42.segments[170] = HAnimSegment499;

HAnimSegment HAnimSegment500 = createNode("HAnimSegment");
HAnimSegment500.USE = "hanim_l_ring_metacarpal";
HAnimHumanoid42.segments[171] = HAnimSegment500;

HAnimSegment HAnimSegment501 = createNode("HAnimSegment");
HAnimSegment501.USE = "hanim_r_ring_metacarpal";
HAnimHumanoid42.segments[172] = HAnimSegment501;

HAnimSegment HAnimSegment502 = createNode("HAnimSegment");
HAnimSegment502.USE = "hanim_l_ring_middle";
HAnimHumanoid42.segments[173] = HAnimSegment502;

HAnimSegment HAnimSegment503 = createNode("HAnimSegment");
HAnimSegment503.USE = "hanim_r_ring_middle";
HAnimHumanoid42.segments[174] = HAnimSegment503;

HAnimSegment HAnimSegment504 = createNode("HAnimSegment");
HAnimSegment504.USE = "hanim_l_ring_proximal";
HAnimHumanoid42.segments[175] = HAnimSegment504;

HAnimSegment HAnimSegment505 = createNode("HAnimSegment");
HAnimSegment505.USE = "hanim_r_ring_proximal";
HAnimHumanoid42.segments[176] = HAnimSegment505;

HAnimSegment HAnimSegment506 = createNode("HAnimSegment");
HAnimSegment506.USE = "hanim_l_scapula";
HAnimHumanoid42.segments[177] = HAnimSegment506;

HAnimSegment HAnimSegment507 = createNode("HAnimSegment");
HAnimSegment507.USE = "hanim_r_scapula";
HAnimHumanoid42.segments[178] = HAnimSegment507;

HAnimSegment HAnimSegment508 = createNode("HAnimSegment");
HAnimSegment508.USE = "hanim_l_thigh";
HAnimHumanoid42.segments[179] = HAnimSegment508;

HAnimSegment HAnimSegment509 = createNode("HAnimSegment");
HAnimSegment509.USE = "hanim_r_thigh";
HAnimHumanoid42.segments[180] = HAnimSegment509;

HAnimSegment HAnimSegment510 = createNode("HAnimSegment");
HAnimSegment510.USE = "hanim_l_thumb_distal";
HAnimHumanoid42.segments[181] = HAnimSegment510;

HAnimSegment HAnimSegment511 = createNode("HAnimSegment");
HAnimSegment511.USE = "hanim_r_thumb_distal";
HAnimHumanoid42.segments[182] = HAnimSegment511;

HAnimSegment HAnimSegment512 = createNode("HAnimSegment");
HAnimSegment512.USE = "hanim_l_thumb_metacarpal";
HAnimHumanoid42.segments[183] = HAnimSegment512;

HAnimSegment HAnimSegment513 = createNode("HAnimSegment");
HAnimSegment513.USE = "hanim_r_thumb_metacarpal";
HAnimHumanoid42.segments[184] = HAnimSegment513;

HAnimSegment HAnimSegment514 = createNode("HAnimSegment");
HAnimSegment514.USE = "hanim_l_thumb_proximal";
HAnimHumanoid42.segments[185] = HAnimSegment514;

HAnimSegment HAnimSegment515 = createNode("HAnimSegment");
HAnimSegment515.USE = "hanim_r_thumb_proximal";
HAnimHumanoid42.segments[186] = HAnimSegment515;

HAnimSegment HAnimSegment516 = createNode("HAnimSegment");
HAnimSegment516.USE = "hanim_l_upperarm";
HAnimHumanoid42.segments[187] = HAnimSegment516;

HAnimSegment HAnimSegment517 = createNode("HAnimSegment");
HAnimSegment517.USE = "hanim_r_upperarm";
HAnimHumanoid42.segments[188] = HAnimSegment517;

HAnimSite HAnimSite518 = createNode("HAnimSite");
HAnimSite518.USE = "hanim_crotch_pt";
HAnimHumanoid42.viewpoints[189] = HAnimSite518;

HAnimSite HAnimSite519 = createNode("HAnimSite");
HAnimSite519.USE = "hanim_skull_tip";
HAnimHumanoid42.viewpoints[190] = HAnimSite519;

HAnimSite HAnimSite520 = createNode("HAnimSite");
HAnimSite520.USE = "hanim_sellion_pt";
HAnimHumanoid42.viewpoints[191] = HAnimSite520;

HAnimSite HAnimSite521 = createNode("HAnimSite");
HAnimSite521.USE = "hanim_supramenton_pt";
HAnimHumanoid42.viewpoints[192] = HAnimSite521;

HAnimSite HAnimSite522 = createNode("HAnimSite");
HAnimSite522.USE = "hanim_nuchale_pt";
HAnimHumanoid42.viewpoints[193] = HAnimSite522;

HAnimSite HAnimSite523 = createNode("HAnimSite");
HAnimSite523.USE = "hanim_suprasternale_pt";
HAnimHumanoid42.viewpoints[194] = HAnimSite523;

HAnimSite HAnimSite524 = createNode("HAnimSite");
HAnimSite524.USE = "hanim_cervicale_pt";
HAnimHumanoid42.viewpoints[195] = HAnimSite524;

HAnimSite HAnimSite525 = createNode("HAnimSite");
HAnimSite525.USE = "hanim_substernale_pt";
HAnimHumanoid42.viewpoints[196] = HAnimSite525;

HAnimSite HAnimSite526 = createNode("HAnimSite");
HAnimSite526.USE = "hanim_rib10_midspine_pt";
HAnimHumanoid42.viewpoints[197] = HAnimSite526;

HAnimSite HAnimSite527 = createNode("HAnimSite");
HAnimSite527.USE = "hanim_waist_preferred_post_pt";
HAnimHumanoid42.viewpoints[198] = HAnimSite527;

HAnimSite HAnimSite528 = createNode("HAnimSite");
HAnimSite528.USE = "hanim_navel_pt";
HAnimHumanoid42.viewpoints[199] = HAnimSite528;

HAnimSite HAnimSite529 = createNode("HAnimSite");
HAnimSite529.USE = "hanim_l_acromion_pt";
HAnimHumanoid42.viewpoints[200] = HAnimSite529;

HAnimSite HAnimSite530 = createNode("HAnimSite");
HAnimSite530.USE = "hanim_r_acromion_pt";
HAnimHumanoid42.viewpoints[201] = HAnimSite530;

HAnimSite HAnimSite531 = createNode("HAnimSite");
HAnimSite531.USE = "hanim_r_asis_pt";
HAnimHumanoid42.viewpoints[202] = HAnimSite531;

HAnimSite HAnimSite532 = createNode("HAnimSite");
HAnimSite532.USE = "hanim_l_asis_pt";
HAnimHumanoid42.viewpoints[203] = HAnimSite532;

HAnimSite HAnimSite533 = createNode("HAnimSite");
HAnimSite533.USE = "hanim_l_axilla_ant_pt";
HAnimHumanoid42.viewpoints[204] = HAnimSite533;

HAnimSite HAnimSite534 = createNode("HAnimSite");
HAnimSite534.USE = "hanim_r_axilla_ant_pt";
HAnimHumanoid42.viewpoints[205] = HAnimSite534;

HAnimSite HAnimSite535 = createNode("HAnimSite");
HAnimSite535.USE = "hanim_l_axilla_post_pt";
HAnimHumanoid42.viewpoints[206] = HAnimSite535;

HAnimSite HAnimSite536 = createNode("HAnimSite");
HAnimSite536.USE = "hanim_r_axilla_post_pt";
HAnimHumanoid42.viewpoints[207] = HAnimSite536;

HAnimSite HAnimSite537 = createNode("HAnimSite");
HAnimSite537.USE = "hanim_l_calcaneous_post_pt";
HAnimHumanoid42.viewpoints[208] = HAnimSite537;

HAnimSite HAnimSite538 = createNode("HAnimSite");
HAnimSite538.USE = "hanim_r_calcaneous_post_pt";
HAnimHumanoid42.viewpoints[209] = HAnimSite538;

HAnimSite HAnimSite539 = createNode("HAnimSite");
HAnimSite539.USE = "hanim_l_clavicale_pt";
HAnimHumanoid42.viewpoints[210] = HAnimSite539;

HAnimSite HAnimSite540 = createNode("HAnimSite");
HAnimSite540.USE = "hanim_r_clavicale_pt";
HAnimHumanoid42.viewpoints[211] = HAnimSite540;

HAnimSite HAnimSite541 = createNode("HAnimSite");
HAnimSite541.USE = "hanim_l_dactylion_pt";
HAnimHumanoid42.viewpoints[212] = HAnimSite541;

HAnimSite HAnimSite542 = createNode("HAnimSite");
HAnimSite542.USE = "hanim_r_dactylion_pt";
HAnimHumanoid42.viewpoints[213] = HAnimSite542;

HAnimSite HAnimSite543 = createNode("HAnimSite");
HAnimSite543.USE = "hanim_l_digit2_pt";
HAnimHumanoid42.viewpoints[214] = HAnimSite543;

HAnimSite HAnimSite544 = createNode("HAnimSite");
HAnimSite544.USE = "hanim_r_digit2_pt";
HAnimHumanoid42.viewpoints[215] = HAnimSite544;

HAnimSite HAnimSite545 = createNode("HAnimSite");
HAnimSite545.USE = "hanim_l_femoral_lateral_epicn_pt";
HAnimHumanoid42.viewpoints[216] = HAnimSite545;

HAnimSite HAnimSite546 = createNode("HAnimSite");
HAnimSite546.USE = "hanim_r_femoral_lateral_epicn_pt";
HAnimHumanoid42.viewpoints[217] = HAnimSite546;

HAnimSite HAnimSite547 = createNode("HAnimSite");
HAnimSite547.USE = "hanim_l_femoral_medial_epicn_pt";
HAnimHumanoid42.viewpoints[218] = HAnimSite547;

HAnimSite HAnimSite548 = createNode("HAnimSite");
HAnimSite548.USE = "hanim_r_femoral_medial_epicn_pt";
HAnimHumanoid42.viewpoints[219] = HAnimSite548;

HAnimSite HAnimSite549 = createNode("HAnimSite");
HAnimSite549.USE = "hanim_l_forefoot_tip";
HAnimHumanoid42.viewpoints[220] = HAnimSite549;

HAnimSite HAnimSite550 = createNode("HAnimSite");
HAnimSite550.USE = "hanim_r_forefoot_tip";
HAnimHumanoid42.viewpoints[221] = HAnimSite550;

HAnimSite HAnimSite551 = createNode("HAnimSite");
HAnimSite551.USE = "hanim_r_gonion_pt";
HAnimHumanoid42.viewpoints[222] = HAnimSite551;

HAnimSite HAnimSite552 = createNode("HAnimSite");
HAnimSite552.USE = "hanim_l_gonion_pt";
HAnimHumanoid42.viewpoints[223] = HAnimSite552;

HAnimSite HAnimSite553 = createNode("HAnimSite");
HAnimSite553.USE = "hanim_l_humeral_lateral_epicn_pt";
HAnimHumanoid42.viewpoints[224] = HAnimSite553;

HAnimSite HAnimSite554 = createNode("HAnimSite");
HAnimSite554.USE = "hanim_r_humeral_lateral_epicn_pt";
HAnimHumanoid42.viewpoints[225] = HAnimSite554;

HAnimSite HAnimSite555 = createNode("HAnimSite");
HAnimSite555.USE = "hanim_l_humeral_medial_epicn_pt";
HAnimHumanoid42.viewpoints[226] = HAnimSite555;

HAnimSite HAnimSite556 = createNode("HAnimSite");
HAnimSite556.USE = "hanim_r_humeral_medial_epicn_pt";
HAnimHumanoid42.viewpoints[227] = HAnimSite556;

HAnimSite HAnimSite557 = createNode("HAnimSite");
HAnimSite557.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid42.viewpoints[228] = HAnimSite557;

HAnimSite HAnimSite558 = createNode("HAnimSite");
HAnimSite558.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid42.viewpoints[229] = HAnimSite558;

HAnimSite HAnimSite559 = createNode("HAnimSite");
HAnimSite559.USE = "hanim_l_index_distal_tip";
HAnimHumanoid42.viewpoints[230] = HAnimSite559;

HAnimSite HAnimSite560 = createNode("HAnimSite");
HAnimSite560.USE = "hanim_r_index_distal_tip";
HAnimHumanoid42.viewpoints[231] = HAnimSite560;

HAnimSite HAnimSite561 = createNode("HAnimSite");
HAnimSite561.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid42.viewpoints[232] = HAnimSite561;

HAnimSite HAnimSite562 = createNode("HAnimSite");
HAnimSite562.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid42.viewpoints[233] = HAnimSite562;

HAnimSite HAnimSite563 = createNode("HAnimSite");
HAnimSite563.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid42.viewpoints[234] = HAnimSite563;

HAnimSite HAnimSite564 = createNode("HAnimSite");
HAnimSite564.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid42.viewpoints[235] = HAnimSite564;

HAnimSite HAnimSite565 = createNode("HAnimSite");
HAnimSite565.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid42.viewpoints[236] = HAnimSite565;

HAnimSite HAnimSite566 = createNode("HAnimSite");
HAnimSite566.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid42.viewpoints[237] = HAnimSite566;

HAnimSite HAnimSite567 = createNode("HAnimSite");
HAnimSite567.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid42.viewpoints[238] = HAnimSite567;

HAnimSite HAnimSite568 = createNode("HAnimSite");
HAnimSite568.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid42.viewpoints[239] = HAnimSite568;

HAnimSite HAnimSite569 = createNode("HAnimSite");
HAnimSite569.USE = "hanim_l_metacarpal_pha2_pt";
HAnimHumanoid42.viewpoints[240] = HAnimSite569;

HAnimSite HAnimSite570 = createNode("HAnimSite");
HAnimSite570.USE = "hanim_r_metacarpal_pha2_pt";
HAnimHumanoid42.viewpoints[241] = HAnimSite570;

HAnimSite HAnimSite571 = createNode("HAnimSite");
HAnimSite571.USE = "hanim_l_metacarpal_pha5_pt";
HAnimHumanoid42.viewpoints[242] = HAnimSite571;

HAnimSite HAnimSite572 = createNode("HAnimSite");
HAnimSite572.USE = "hanim_r_metacarpal_pha5_pt";
HAnimHumanoid42.viewpoints[243] = HAnimSite572;

HAnimSite HAnimSite573 = createNode("HAnimSite");
HAnimSite573.USE = "hanim_l_metatarsal_pha1_pt";
HAnimHumanoid42.viewpoints[244] = HAnimSite573;

HAnimSite HAnimSite574 = createNode("HAnimSite");
HAnimSite574.USE = "hanim_r_metatarsal_pha1_pt";
HAnimHumanoid42.viewpoints[245] = HAnimSite574;

HAnimSite HAnimSite575 = createNode("HAnimSite");
HAnimSite575.USE = "hanim_l_metatarsal_pha5_pt";
HAnimHumanoid42.viewpoints[246] = HAnimSite575;

HAnimSite HAnimSite576 = createNode("HAnimSite");
HAnimSite576.USE = "hanim_r_metatarsal_pha5_pt";
HAnimHumanoid42.viewpoints[247] = HAnimSite576;

HAnimSite HAnimSite577 = createNode("HAnimSite");
HAnimSite577.USE = "hanim_l_middle_distal_tip";
HAnimHumanoid42.viewpoints[248] = HAnimSite577;

HAnimSite HAnimSite578 = createNode("HAnimSite");
HAnimSite578.USE = "hanim_r_middle_distal_tip";
HAnimHumanoid42.viewpoints[249] = HAnimSite578;

HAnimSite HAnimSite579 = createNode("HAnimSite");
HAnimSite579.USE = "hanim_r_neck_base_pt";
HAnimHumanoid42.viewpoints[250] = HAnimSite579;

HAnimSite HAnimSite580 = createNode("HAnimSite");
HAnimSite580.USE = "hanim_l_neck_base_pt";
HAnimHumanoid42.viewpoints[251] = HAnimSite580;

HAnimSite HAnimSite581 = createNode("HAnimSite");
HAnimSite581.USE = "hanim_l_olecranon_pt";
HAnimHumanoid42.viewpoints[252] = HAnimSite581;

HAnimSite HAnimSite582 = createNode("HAnimSite");
HAnimSite582.USE = "hanim_r_olecranon_pt";
HAnimHumanoid42.viewpoints[253] = HAnimSite582;

HAnimSite HAnimSite583 = createNode("HAnimSite");
HAnimSite583.USE = "hanim_l_pinky_distal_tip";
HAnimHumanoid42.viewpoints[254] = HAnimSite583;

HAnimSite HAnimSite584 = createNode("HAnimSite");
HAnimSite584.USE = "hanim_r_pinky_distal_tip";
HAnimHumanoid42.viewpoints[255] = HAnimSite584;

HAnimSite HAnimSite585 = createNode("HAnimSite");
HAnimSite585.USE = "hanim_r_psis_pt";
HAnimHumanoid42.viewpoints[256] = HAnimSite585;

HAnimSite HAnimSite586 = createNode("HAnimSite");
HAnimSite586.USE = "hanim_l_psis_pt";
HAnimHumanoid42.viewpoints[257] = HAnimSite586;

HAnimSite HAnimSite587 = createNode("HAnimSite");
HAnimSite587.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid42.viewpoints[258] = HAnimSite587;

HAnimSite HAnimSite588 = createNode("HAnimSite");
HAnimSite588.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid42.viewpoints[259] = HAnimSite588;

HAnimSite HAnimSite589 = createNode("HAnimSite");
HAnimSite589.USE = "hanim_l_radiale_pt";
HAnimHumanoid42.viewpoints[260] = HAnimSite589;

HAnimSite HAnimSite590 = createNode("HAnimSite");
HAnimSite590.USE = "hanim_r_radiale_pt";
HAnimHumanoid42.viewpoints[261] = HAnimSite590;

HAnimSite HAnimSite591 = createNode("HAnimSite");
HAnimSite591.USE = "hanim_r_rib10_pt";
HAnimHumanoid42.viewpoints[262] = HAnimSite591;

HAnimSite HAnimSite592 = createNode("HAnimSite");
HAnimSite592.USE = "hanim_l_rib10_pt";
HAnimHumanoid42.viewpoints[263] = HAnimSite592;

HAnimSite HAnimSite593 = createNode("HAnimSite");
HAnimSite593.USE = "hanim_l_ring_distal_tip";
HAnimHumanoid42.viewpoints[264] = HAnimSite593;

HAnimSite HAnimSite594 = createNode("HAnimSite");
HAnimSite594.USE = "hanim_r_ring_distal_tip";
HAnimHumanoid42.viewpoints[265] = HAnimSite594;

HAnimSite HAnimSite595 = createNode("HAnimSite");
HAnimSite595.USE = "hanim_temporomandibular_l_site_pt";
HAnimHumanoid42.viewpoints[266] = HAnimSite595;

HAnimSite HAnimSite596 = createNode("HAnimSite");
HAnimSite596.USE = "hanim_temporomandibular_r_site_pt";
HAnimHumanoid42.viewpoints[267] = HAnimSite596;

HAnimSite HAnimSite597 = createNode("HAnimSite");
HAnimSite597.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid42.viewpoints[268] = HAnimSite597;

HAnimSite HAnimSite598 = createNode("HAnimSite");
HAnimSite598.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid42.viewpoints[269] = HAnimSite598;

HAnimSite HAnimSite599 = createNode("HAnimSite");
HAnimSite599.USE = "hanim_r_thelion_pt";
HAnimHumanoid42.viewpoints[270] = HAnimSite599;

HAnimSite HAnimSite600 = createNode("HAnimSite");
HAnimSite600.USE = "hanim_l_thelion_pt";
HAnimHumanoid42.viewpoints[271] = HAnimSite600;

HAnimSite HAnimSite601 = createNode("HAnimSite");
HAnimSite601.USE = "hanim_l_thumb_distal_tip";
HAnimHumanoid42.viewpoints[272] = HAnimSite601;

HAnimSite HAnimSite602 = createNode("HAnimSite");
HAnimSite602.USE = "hanim_r_thumb_distal_tip";
HAnimHumanoid42.viewpoints[273] = HAnimSite602;

HAnimSite HAnimSite603 = createNode("HAnimSite");
HAnimSite603.USE = "hanim_r_tragion_pt";
HAnimHumanoid42.viewpoints[274] = HAnimSite603;

HAnimSite HAnimSite604 = createNode("HAnimSite");
HAnimSite604.USE = "hanim_l_tragion_pt";
HAnimHumanoid42.viewpoints[275] = HAnimSite604;

HAnimSite HAnimSite605 = createNode("HAnimSite");
HAnimSite605.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid42.viewpoints[276] = HAnimSite605;

HAnimSite HAnimSite606 = createNode("HAnimSite");
HAnimSite606.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid42.viewpoints[277] = HAnimSite606;

HAnimSite HAnimSite607 = createNode("HAnimSite");
HAnimSite607.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid42.viewpoints[278] = HAnimSite607;

HAnimSite HAnimSite608 = createNode("HAnimSite");
HAnimSite608.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid42.viewpoints[279] = HAnimSite608;

HAnimSite HAnimSite609 = createNode("HAnimSite");
HAnimSite609.DEF = "hanim_l_inclined_view";
HAnimSite609.name = "l_inclined_view";
HAnimSite609.translation = new SFVec3f(new float[1.62,1.05,2.06]);
HAnimSite609.rotation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
Viewpoint Viewpoint610 = createNode("Viewpoint");
Viewpoint610.DEF = "hanim_l_inclined_viewpoint";
Viewpoint610.description = "left inclined";
Viewpoint610.position = new SFVec3f(new float[0,0,0]);
HAnimSite609.children = new MFNode();

HAnimSite609.children[0] = Viewpoint610;

HAnimHumanoid42.viewpoints[280] = HAnimSite609;

HAnimSite HAnimSite611 = createNode("HAnimSite");
HAnimSite611.DEF = "hanim_r_inclined_view";
HAnimSite611.name = "r_inclined_view";
HAnimSite611.translation = new SFVec3f(new float[-1.62,1.05,2.06]);
HAnimSite611.rotation = new SFRotation(new float[-0.113,-0.993,0.0347,0.671]);
Viewpoint Viewpoint612 = createNode("Viewpoint");
Viewpoint612.DEF = "hanim_r_inclined_viewpoint";
Viewpoint612.description = "right inclined";
Viewpoint612.position = new SFVec3f(new float[0,0,0]);
Viewpoint612.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
HAnimSite611.children = new MFNode();

HAnimSite611.children[0] = Viewpoint612;

HAnimHumanoid42.viewpoints[281] = HAnimSite611;

HAnimSite HAnimSite613 = createNode("HAnimSite");
HAnimSite613.DEF = "hanim_front_view";
HAnimSite613.name = "front_view";
HAnimSite613.translation = new SFVec3f(new float[0,0.85,2.58]);
Viewpoint Viewpoint614 = createNode("Viewpoint");
Viewpoint614.DEF = "hanim_front_viewpoint";
Viewpoint614.description = "front";
Viewpoint614.position = new SFVec3f(new float[0,0,0]);
Viewpoint614.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
HAnimSite613.children = new MFNode();

HAnimSite613.children[0] = Viewpoint614;

HAnimHumanoid42.viewpoints[282] = HAnimSite613;

HAnimSite HAnimSite615 = createNode("HAnimSite");
HAnimSite615.DEF = "hanim_back_view";
HAnimSite615.name = "back_view";
HAnimSite615.translation = new SFVec3f(new float[0,0.85,-2.58]);
HAnimSite615.rotation = new SFRotation(new float[0,1,0,3.14]);
Viewpoint Viewpoint616 = createNode("Viewpoint");
Viewpoint616.DEF = "hanim_back_viewpoint";
Viewpoint616.description = "back";
Viewpoint616.position = new SFVec3f(new float[0,0,0]);
Viewpoint616.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
HAnimSite615.children = new MFNode();

HAnimSite615.children[0] = Viewpoint616;

HAnimHumanoid42.viewpoints[283] = HAnimSite615;

HAnimSite HAnimSite617 = createNode("HAnimSite");
HAnimSite617.DEF = "hanim_l_side_view";
HAnimSite617.name = "l_side_view";
HAnimSite617.translation = new SFVec3f(new float[2.6,0.854,0]);
HAnimSite617.rotation = new SFRotation(new float[0,1,0,1.5708]);
Viewpoint Viewpoint618 = createNode("Viewpoint");
Viewpoint618.DEF = "hanim_l_side_viewpoint";
Viewpoint618.description = "left side";
Viewpoint618.position = new SFVec3f(new float[0,0,0]);
Viewpoint618.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
HAnimSite617.children = new MFNode();

HAnimSite617.children[0] = Viewpoint618;

HAnimHumanoid42.viewpoints[284] = HAnimSite617;

HAnimSite HAnimSite619 = createNode("HAnimSite");
HAnimSite619.DEF = "hanim_Top_view";
HAnimSite619.name = "Top_view";
HAnimSite619.translation = new SFVec3f(new float[0,3.5,0]);
HAnimSite619.rotation = new SFRotation(new float[1,0,0,-1.57]);
Viewpoint Viewpoint620 = createNode("Viewpoint");
Viewpoint620.DEF = "hanim_Top_viewpoint";
Viewpoint620.description = "Top";
Viewpoint620.position = new SFVec3f(new float[0,0,0]);
Viewpoint620.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
HAnimSite619.children = new MFNode();

HAnimSite619.children[0] = Viewpoint620;

HAnimHumanoid42.viewpoints[285] = HAnimSite619;

HAnimSite HAnimSite621 = createNode("HAnimSite");
HAnimSite621.DEF = "hanim_front_close_view";
HAnimSite621.name = "front_close_view";
HAnimSite621.translation = new SFVec3f(new float[0,0.854,1.575]);
Viewpoint Viewpoint622 = createNode("Viewpoint");
Viewpoint622.DEF = "hanim_front_close_viewpoint";
Viewpoint622.description = "front close";
Viewpoint622.position = new SFVec3f(new float[0,0,0]);
Viewpoint622.centerOfRotation = new SFVec3f(new float[0,0,1.575]);
HAnimSite621.children = new MFNode();

HAnimSite621.children[0] = Viewpoint622;

HAnimHumanoid42.viewpoints[286] = HAnimSite621;

HAnimSite HAnimSite623 = createNode("HAnimSite");
HAnimSite623.DEF = "hanim_side_close_view";
HAnimSite623.name = "side_close_view";
HAnimSite623.translation = new SFVec3f(new float[1.56,0.854,0]);
HAnimSite623.rotation = new SFRotation(new float[0,1,0,1.5708]);
Viewpoint Viewpoint624 = createNode("Viewpoint");
Viewpoint624.DEF = "hanim_side_close_viewpoint";
Viewpoint624.description = "side close";
Viewpoint624.position = new SFVec3f(new float[0,0,0]);
Viewpoint624.centerOfRotation = new SFVec3f(new float[1.6,0,0]);
HAnimSite623.children = new MFNode();

HAnimSite623.children[0] = Viewpoint624;

HAnimHumanoid42.viewpoints[287] = HAnimSite623;

HAnimSite HAnimSite625 = createNode("HAnimSite");
HAnimSite625.DEF = "hanim_head_front_close_view";
HAnimSite625.name = "head_front_close_view";
HAnimSite625.translation = new SFVec3f(new float[0,1.5,1]);
Viewpoint Viewpoint626 = createNode("Viewpoint");
Viewpoint626.DEF = "hanim_head_front_close_viewpoint";
Viewpoint626.description = "head front close";
Viewpoint626.position = new SFVec3f(new float[0,0,0]);
Viewpoint626.centerOfRotation = new SFVec3f(new float[0,0,1]);
HAnimSite625.children = new MFNode();

HAnimSite625.children[0] = Viewpoint626;

HAnimHumanoid42.viewpoints[288] = HAnimSite625;

HAnimSite HAnimSite627 = createNode("HAnimSite");
HAnimSite627.DEF = "hanim_chest_front_close_view";
HAnimSite627.name = "chest_front_close_view";
HAnimSite627.translation = new SFVec3f(new float[0,1.2,1]);
Viewpoint Viewpoint628 = createNode("Viewpoint");
Viewpoint628.DEF = "hanim_chest_front_close_viewpoint";
Viewpoint628.description = "chest front close";
Viewpoint628.position = new SFVec3f(new float[0,0,0]);
Viewpoint628.centerOfRotation = new SFVec3f(new float[0,0,1]);
HAnimSite627.children = new MFNode();

HAnimSite627.children[0] = Viewpoint628;

HAnimHumanoid42.viewpoints[289] = HAnimSite627;

HAnimSite HAnimSite629 = createNode("HAnimSite");
HAnimSite629.DEF = "hanim_pelvis_front_close_view";
HAnimSite629.name = "pelvis_front_close_view";
HAnimSite629.translation = new SFVec3f(new float[0,0.8,1]);
Viewpoint Viewpoint630 = createNode("Viewpoint");
Viewpoint630.DEF = "hanim_pelvis_front_close_viewpoint";
Viewpoint630.description = "pelvis front close";
Viewpoint630.position = new SFVec3f(new float[0,0,0]);
Viewpoint630.centerOfRotation = new SFVec3f(new float[0,0,1]);
HAnimSite629.children = new MFNode();

HAnimSite629.children[0] = Viewpoint630;

HAnimHumanoid42.viewpoints[290] = HAnimSite629;

HAnimSite HAnimSite631 = createNode("HAnimSite");
HAnimSite631.DEF = "hanim_knees_front_close_view";
HAnimSite631.name = "knees_front_close_view";
HAnimSite631.translation = new SFVec3f(new float[0,0.4,1]);
Viewpoint Viewpoint632 = createNode("Viewpoint");
Viewpoint632.DEF = "hanim_knees_front_close_viewpoint";
Viewpoint632.description = "knees front close";
Viewpoint632.position = new SFVec3f(new float[0,0,0]);
Viewpoint632.centerOfRotation = new SFVec3f(new float[0,0.4,0]);
HAnimSite631.children = new MFNode();

HAnimSite631.children[0] = Viewpoint632;

HAnimHumanoid42.viewpoints[291] = HAnimSite631;

HAnimSite HAnimSite633 = createNode("HAnimSite");
HAnimSite633.DEF = "hanim_feet_front_close_view";
HAnimSite633.name = "feet_front_close_view";
HAnimSite633.translation = new SFVec3f(new float[0,0,1]);
Viewpoint Viewpoint634 = createNode("Viewpoint");
Viewpoint634.DEF = "hanim_feet_front_close_viewpoint";
Viewpoint634.description = "feet front close";
Viewpoint634.position = new SFVec3f(new float[0,0,0]);
HAnimSite633.children = new MFNode();

HAnimSite633.children[0] = Viewpoint634;

HAnimHumanoid42.viewpoints[292] = HAnimSite633;

HAnimSite HAnimSite635 = createNode("HAnimSite");
HAnimSite635.DEF = "hanim_eye_level_view";
HAnimSite635.name = "eye_level_view";
HAnimSite635.translation = new SFVec3f(new float[0,1.6332,0.0502]);
Viewpoint Viewpoint636 = createNode("Viewpoint");
Viewpoint636.DEF = "hanim_eye_level_viewpoint";
Viewpoint636.description = "eye level looking forward";
Viewpoint636.position = new SFVec3f(new float[0,0,0]);
Viewpoint636.orientation = new SFRotation(new float[0,1,0,3.141593]);
HAnimSite635.children = new MFNode();

HAnimSite635.children[0] = Viewpoint636;

HAnimHumanoid42.viewpoints[293] = HAnimSite635;

HAnimSite HAnimSite637 = createNode("HAnimSite");
HAnimSite637.USE = "hanim_l_eyeball_site_view";
HAnimHumanoid42.viewpoints[294] = HAnimSite637;

HAnimSite HAnimSite638 = createNode("HAnimSite");
HAnimSite638.USE = "hanim_r_eyeball_site_view";
HAnimHumanoid42.viewpoints[295] = HAnimSite638;

HAnimSite HAnimSite639 = createNode("HAnimSite");
HAnimSite639.USE = "hanim_l_hand_front_view";
HAnimHumanoid42.viewpoints[296] = HAnimSite639;

HAnimSite HAnimSite640 = createNode("HAnimSite");
HAnimSite640.USE = "hanim_r_hand_front_view";
HAnimHumanoid42.viewpoints[297] = HAnimSite640;

children[12] = HAnimHumanoid42;

}

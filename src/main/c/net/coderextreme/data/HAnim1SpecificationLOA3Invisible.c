#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "3.3";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "H-Anim";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

meta meta3 = createNode("meta");
meta3.name = "title";
meta3.content = "HAnim1SpecificationLOA3Invisible.x3d";
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
meta6.name = "created";
meta6.content = "24 April 2013";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "19 February 2021";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "creator";
meta8.content = "Matthew T. Beitler, Joe D. Williams, Don Brutzman";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "reference";
meta9.content = "HAnim1SpecificationLOA3Illustrated.x3d";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "reference";
meta10.content = "HAnim1SpecificationLOA3Animation.x3d";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "reference";
meta11.content = "HAnimSpecificationExampleChangeLog.txt";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "Image";
meta12.content = "images/BonesAllSkeletonFrontViewLOA1.png";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "Image";
meta13.content = "images/BonesAllSkeletonFrontViewLOA2.png";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "Image";
meta14.content = "images/BonesAllSkeletonFrontViewLOA3.png";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "TODO";
meta15.content = "move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "TODO";
meta16.content = "insert MetadataInteger nodes indicating LOA for each Joint and Segment";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "reference";
meta17.content = "Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "reference";
meta18.content = "http://www.cis.upenn.edu/~badler/anthro/89-71.ps";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "reference";
meta19.content = "tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf";
head1.meta[17] = meta19;

meta meta20 = createNode("meta");
meta20.name = "translator";
meta20.content = "Don Brutzman and Joe Williams";
head1.meta[18] = meta20;

meta meta21 = createNode("meta");
meta21.name = "generator";
meta21.content = "BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo";
head1.meta[19] = meta21;

meta meta22 = createNode("meta");
meta22.name = "reference";
meta22.content = "originals/LOA3ExampleSourceWithDiamondsOriginal.wrl";
head1.meta[20] = meta22;

meta meta23 = createNode("meta");
meta23.name = "reference";
meta23.content = "originals/LOA3ExampleSourceWithDiamondsOriginal.x3d";
head1.meta[21] = meta23;

meta meta24 = createNode("meta");
meta24.name = "reference";
meta24.content = "originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d";
head1.meta[22] = meta24;

meta meta25 = createNode("meta");
meta25.name = "reference";
meta25.content = "HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames";
head1.meta[23] = meta25;

meta meta26 = createNode("meta");
meta26.name = "generator";
meta26.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[24] = meta26;

meta meta27 = createNode("meta");
meta27.name = "identifier";
meta27.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/HAnim1SpecificationLOA3Invisible.x3d";
head1.meta[25] = meta27;

meta meta28 = createNode("meta");
meta28.name = "license";
meta28.content = "../license.html";
head1.meta[26] = meta28;

head = head1;

Background Background30 = createNode("Background");
Background30.skyColor = new MFColor(new float[0.3,0.3,0.3]);
children = new MFNode();

children[0] = Background30;

NavigationInfo NavigationInfo31 = createNode("NavigationInfo");
children[1] = NavigationInfo31;

Group Group32 = createNode("Group");
Group32.DEF = "Original_WorldInfo";
WorldInfo WorldInfo33 = createNode("WorldInfo");
WorldInfo33.info = new MFString(new java.lang.String[" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "]);
WorldInfo33.title = "HANIM 200x Default Joint Centers, LOA3";
Group32.children = new MFNode();

Group32.children[0] = WorldInfo33;

children[2] = Group32;

//TODO move viewpoints to be internal to HAnimHumanoid
//Viewpoint centerOfRotation=\"0 0.9149 0.0016\" matches initial at-rest locaton of the sacroliac. Note that these viewpoints are external to the HAnimHumanoid and do not move with the human.
Viewpoint Viewpoint34 = createNode("Viewpoint");
Viewpoint34.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint34.description = "Humanoid LOA 3 Front";
Viewpoint34.position = new SFVec3f(new float[0,0.4,4]);
children[3] = Viewpoint34;

Viewpoint Viewpoint35 = createNode("Viewpoint");
Viewpoint35.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint35.description = "Humanoid LOA 3 Front Close";
Viewpoint35.position = new SFVec3f(new float[0,0.8,2]);
children[4] = Viewpoint35;

Viewpoint Viewpoint36 = createNode("Viewpoint");
Viewpoint36.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint36.description = "Humanoid LOA 3 Front Closer";
Viewpoint36.position = new SFVec3f(new float[0,1.2,1]);
children[5] = Viewpoint36;

Viewpoint Viewpoint37 = createNode("Viewpoint");
Viewpoint37.centerOfRotation = new SFVec3f(new float[0,1.5,0.0016]);
Viewpoint37.description = "Humanoid LOA 3 Front Face";
Viewpoint37.position = new SFVec3f(new float[0,1.63,1]);
children[6] = Viewpoint37;

Viewpoint Viewpoint38 = createNode("Viewpoint");
Viewpoint38.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint38.description = "Humanoid LOA 3 Right Side";
Viewpoint38.orientation = new SFRotation(new float[0,1,0,1.5708]);
Viewpoint38.position = new SFVec3f(new float[2.6,0.8,0]);
children[7] = Viewpoint38;

Viewpoint Viewpoint39 = createNode("Viewpoint");
Viewpoint39.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint39.description = "Humanoid LOA 3 Right Side Close";
Viewpoint39.orientation = new SFRotation(new float[0,1,0,1.2]);
Viewpoint39.position = new SFVec3f(new float[1,0.8,0.5]);
children[8] = Viewpoint39;

Viewpoint Viewpoint40 = createNode("Viewpoint");
Viewpoint40.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint40.description = "Humanoid LOA 3 Left Side Close";
Viewpoint40.orientation = new SFRotation(new float[0,1,0,-1.2]);
Viewpoint40.position = new SFVec3f(new float[-1,0.8,0.5]);
children[9] = Viewpoint40;

Viewpoint Viewpoint41 = createNode("Viewpoint");
Viewpoint41.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint41.description = "Humanoid LOA 3 Left Side";
Viewpoint41.orientation = new SFRotation(new float[0,1,0,-1.5708]);
Viewpoint41.position = new SFVec3f(new float[-2.6,0.8,0]);
children[10] = Viewpoint41;

Viewpoint Viewpoint42 = createNode("Viewpoint");
Viewpoint42.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint42.description = "Humanoid LOA 3 Top";
Viewpoint42.orientation = new SFRotation(new float[1,0,0,-1.5708]);
Viewpoint42.position = new SFVec3f(new float[0,3.5,0]);
children[11] = Viewpoint42;

HAnimHumanoid HAnimHumanoid43 = createNode("HAnimHumanoid");
HAnimHumanoid43.name = "humanoid";
HAnimHumanoid43.DEF = "hanim_humanoid";
HAnimHumanoid43.info = new MFString(new java.lang.String["authorName=Matthew T. Beitler Joe D. Williams Don Brutzman","authorEmail=HAnim@web3D.org","copyright=none","creationDate=12 May 1999","usageRestrictions=none","humanoidVersion=1.0","height=1.7504"]);
HAnimHumanoid43.version = "1.0";
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
//right between the eyes, stationary position not animating except with body itself
HAnimJoint HAnimJoint44 = createNode("HAnimJoint");
HAnimJoint44.name = "humanoid_root";
HAnimJoint44.DEF = "hanim_humanoid_root";
HAnimJoint44.center = new SFVec3f(new float[0,0.824,0.0277]);
HAnimJoint44.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint44.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment45 = createNode("HAnimSegment");
HAnimSegment45.name = "sacrum";
HAnimSegment45.DEF = "hanim_sacrum";
HAnimJoint44.children = new MFNode();

HAnimJoint44.children[0] = HAnimSegment45;

HAnimJoint HAnimJoint46 = createNode("HAnimJoint");
HAnimJoint46.name = "sacroiliac";
HAnimJoint46.DEF = "hanim_sacroiliac";
HAnimJoint46.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimJoint46.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint46.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment47 = createNode("HAnimSegment");
HAnimSegment47.name = "pelvis";
HAnimSegment47.DEF = "hanim_pelvis";
HAnimSite HAnimSite48 = createNode("HAnimSite");
HAnimSite48.name = "r_iliocristale_pt";
HAnimSite48.DEF = "hanim_r_iliocristale_pt";
HAnimSite48.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
HAnimSegment47.children = new MFNode();

HAnimSegment47.children[0] = HAnimSite48;

HAnimSite HAnimSite49 = createNode("HAnimSite");
HAnimSite49.name = "r_trochanterion_pt";
HAnimSite49.DEF = "hanim_r_trochanterion_pt";
HAnimSite49.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
HAnimSegment47.children[1] = HAnimSite49;

HAnimSite HAnimSite50 = createNode("HAnimSite");
HAnimSite50.name = "l_iliocristale_pt";
HAnimSite50.DEF = "hanim_l_iliocristale_pt";
HAnimSite50.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
HAnimSegment47.children[2] = HAnimSite50;

HAnimSite HAnimSite51 = createNode("HAnimSite");
HAnimSite51.name = "l_trochanterion_pt";
HAnimSite51.DEF = "hanim_l_trochanterion_pt";
HAnimSite51.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
HAnimSegment47.children[3] = HAnimSite51;

HAnimSite HAnimSite52 = createNode("HAnimSite");
HAnimSite52.name = "r_asis_pt";
HAnimSite52.DEF = "hanim_r_asis_pt";
HAnimSite52.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
HAnimSegment47.children[4] = HAnimSite52;

HAnimSite HAnimSite53 = createNode("HAnimSite");
HAnimSite53.name = "l_asis_pt";
HAnimSite53.DEF = "hanim_l_asis_pt";
HAnimSite53.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
HAnimSegment47.children[5] = HAnimSite53;

HAnimSite HAnimSite54 = createNode("HAnimSite");
HAnimSite54.name = "r_psis_pt";
HAnimSite54.DEF = "hanim_r_psis_pt";
HAnimSite54.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
HAnimSegment47.children[6] = HAnimSite54;

HAnimSite HAnimSite55 = createNode("HAnimSite");
HAnimSite55.name = "l_psis_pt";
HAnimSite55.DEF = "hanim_l_psis_pt";
HAnimSite55.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
HAnimSegment47.children[7] = HAnimSite55;

HAnimSite HAnimSite56 = createNode("HAnimSite");
HAnimSite56.name = "crotch_pt";
HAnimSite56.DEF = "hanim_crotch_pt";
HAnimSite56.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
HAnimSegment47.children[8] = HAnimSite56;

HAnimJoint46.children = new MFNode();

HAnimJoint46.children[0] = HAnimSegment47;

HAnimJoint HAnimJoint57 = createNode("HAnimJoint");
HAnimJoint57.name = "l_hip";
HAnimJoint57.DEF = "hanim_l_hip";
HAnimJoint57.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimJoint57.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint57.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment58 = createNode("HAnimSegment");
HAnimSegment58.name = "l_thigh";
HAnimSegment58.DEF = "hanim_l_thigh";
HAnimSite HAnimSite59 = createNode("HAnimSite");
HAnimSite59.name = "l_knee_crease_pt";
HAnimSite59.DEF = "hanim_l_knee_crease_pt";
HAnimSite59.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
HAnimSegment58.children = new MFNode();

HAnimSegment58.children[0] = HAnimSite59;

HAnimSite HAnimSite60 = createNode("HAnimSite");
HAnimSite60.name = "l_femoral_lateral_epicn_pt";
HAnimSite60.DEF = "hanim_l_femoral_lateral_epicn_pt";
HAnimSite60.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
HAnimSegment58.children[1] = HAnimSite60;

HAnimSite HAnimSite61 = createNode("HAnimSite");
HAnimSite61.name = "l_femoral_medial_epicn_pt";
HAnimSite61.DEF = "hanim_l_femoral_medial_epicn_pt";
HAnimSite61.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
HAnimSegment58.children[2] = HAnimSite61;

HAnimJoint57.children = new MFNode();

HAnimJoint57.children[0] = HAnimSegment58;

HAnimJoint HAnimJoint62 = createNode("HAnimJoint");
HAnimJoint62.name = "l_knee";
HAnimJoint62.DEF = "hanim_l_knee";
HAnimJoint62.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimJoint62.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint62.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment63 = createNode("HAnimSegment");
HAnimSegment63.name = "l_calf";
HAnimSegment63.DEF = "hanim_l_calf";
HAnimJoint62.children = new MFNode();

HAnimJoint62.children[0] = HAnimSegment63;

HAnimJoint HAnimJoint64 = createNode("HAnimJoint");
HAnimJoint64.name = "l_ankle";
HAnimJoint64.DEF = "hanim_l_ankle";
HAnimJoint64.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimJoint64.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint64.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment65 = createNode("HAnimSegment");
HAnimSegment65.name = "l_hindfoot";
HAnimSegment65.DEF = "hanim_l_hindfoot";
HAnimSite HAnimSite66 = createNode("HAnimSite");
HAnimSite66.name = "l_lateral_malleolus_pt";
HAnimSite66.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite66.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
HAnimSegment65.children = new MFNode();

HAnimSegment65.children[0] = HAnimSite66;

HAnimSite HAnimSite67 = createNode("HAnimSite");
HAnimSite67.name = "l_medial_malleolus_pt";
HAnimSite67.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite67.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
HAnimSegment65.children[1] = HAnimSite67;

HAnimSite HAnimSite68 = createNode("HAnimSite");
HAnimSite68.name = "l_sphyrion_pt";
HAnimSite68.DEF = "hanim_l_sphyrion_pt";
HAnimSite68.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
HAnimSegment65.children[2] = HAnimSite68;

HAnimSite HAnimSite69 = createNode("HAnimSite");
HAnimSite69.name = "l_calcaneous_post_pt";
HAnimSite69.DEF = "hanim_l_calcaneous_post_pt";
HAnimSite69.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
HAnimSegment65.children[3] = HAnimSite69;

HAnimJoint64.children = new MFNode();

HAnimJoint64.children[0] = HAnimSegment65;

HAnimJoint HAnimJoint70 = createNode("HAnimJoint");
HAnimJoint70.name = "l_subtalar";
HAnimJoint70.DEF = "hanim_l_subtalar";
HAnimJoint70.center = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
HAnimJoint70.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint70.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment71 = createNode("HAnimSegment");
HAnimSegment71.name = "l_midproximal";
HAnimSegment71.DEF = "hanim_l_midproximal";
HAnimJoint70.children = new MFNode();

HAnimJoint70.children[0] = HAnimSegment71;

HAnimJoint HAnimJoint72 = createNode("HAnimJoint");
HAnimJoint72.name = "l_midtarsal";
HAnimJoint72.DEF = "hanim_l_midtarsal";
HAnimJoint72.center = new SFVec3f(new float[0.1086,0.0001,0.0368]);
HAnimJoint72.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint72.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment73 = createNode("HAnimSegment");
HAnimSegment73.name = "l_middistal";
HAnimSegment73.DEF = "hanim_l_middistal";
HAnimSite HAnimSite74 = createNode("HAnimSite");
HAnimSite74.name = "l_metatarsal_pha1_pt";
HAnimSite74.DEF = "hanim_l_metatarsal_pha1_pt";
HAnimSite74.translation = new SFVec3f(new float[0.0816,0.0232,0.0106]);
HAnimSegment73.children = new MFNode();

HAnimSegment73.children[0] = HAnimSite74;

HAnimJoint72.children = new MFNode();

HAnimJoint72.children[0] = HAnimSegment73;

HAnimJoint HAnimJoint75 = createNode("HAnimJoint");
HAnimJoint75.name = "l_metatarsal";
HAnimJoint75.DEF = "hanim_l_metatarsal";
HAnimJoint75.center = new SFVec3f(new float[0.1086,0,0.0762]);
HAnimJoint75.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint75.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment76 = createNode("HAnimSegment");
HAnimSegment76.name = "l_forefoot";
HAnimSegment76.DEF = "hanim_l_forefoot";
HAnimSite HAnimSite77 = createNode("HAnimSite");
HAnimSite77.name = "l_forefoot_tip";
HAnimSite77.DEF = "hanim_l_forefoot_tip";
HAnimSite77.translation = new SFVec3f(new float[0.1354,0.0016,0.1476]);
HAnimSegment76.children = new MFNode();

HAnimSegment76.children[0] = HAnimSite77;

HAnimSite HAnimSite78 = createNode("HAnimSite");
HAnimSite78.name = "l_metatarsal_pha5_pt";
HAnimSite78.DEF = "hanim_l_metatarsal_pha5_pt";
HAnimSite78.translation = new SFVec3f(new float[0.1825,0.007,0.0928]);
HAnimSegment76.children[1] = HAnimSite78;

HAnimSite HAnimSite79 = createNode("HAnimSite");
HAnimSite79.name = "l_digit2_pt";
HAnimSite79.DEF = "hanim_l_digit2_pt";
HAnimSite79.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
HAnimSegment76.children[2] = HAnimSite79;

HAnimJoint75.children = new MFNode();

HAnimJoint75.children[0] = HAnimSegment76;

HAnimJoint72.children[1] = HAnimJoint75;

HAnimJoint70.children[1] = HAnimJoint72;

HAnimJoint64.children[1] = HAnimJoint70;

HAnimJoint62.children[1] = HAnimJoint64;

HAnimJoint57.children[1] = HAnimJoint62;

HAnimJoint46.children[1] = HAnimJoint57;

HAnimJoint HAnimJoint80 = createNode("HAnimJoint");
HAnimJoint80.name = "r_hip";
HAnimJoint80.DEF = "hanim_r_hip";
HAnimJoint80.center = new SFVec3f(new float[-0.0961,0.9124,-0.0001]);
HAnimJoint80.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint80.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment81 = createNode("HAnimSegment");
HAnimSegment81.name = "r_thigh";
HAnimSegment81.DEF = "hanim_r_thigh";
HAnimSite HAnimSite82 = createNode("HAnimSite");
HAnimSite82.name = "r_knee_crease_pt";
HAnimSite82.DEF = "hanim_r_knee_crease_pt";
HAnimSite82.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
HAnimSegment81.children = new MFNode();

HAnimSegment81.children[0] = HAnimSite82;

HAnimSite HAnimSite83 = createNode("HAnimSite");
HAnimSite83.name = "r_femoral_lateral_epicn_pt";
HAnimSite83.DEF = "hanim_r_femoral_lateral_epicn_pt";
HAnimSite83.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
HAnimSegment81.children[1] = HAnimSite83;

HAnimSite HAnimSite84 = createNode("HAnimSite");
HAnimSite84.name = "r_femoral_medial_epicn_pt";
HAnimSite84.DEF = "hanim_r_femoral_medial_epicn_pt";
HAnimSite84.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
HAnimSegment81.children[2] = HAnimSite84;

HAnimJoint80.children = new MFNode();

HAnimJoint80.children[0] = HAnimSegment81;

HAnimJoint HAnimJoint85 = createNode("HAnimJoint");
HAnimJoint85.name = "r_knee";
HAnimJoint85.DEF = "hanim_r_knee";
HAnimJoint85.center = new SFVec3f(new float[-0.104,0.4867,0.0308]);
HAnimJoint85.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint85.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment86 = createNode("HAnimSegment");
HAnimSegment86.name = "r_calf";
HAnimSegment86.DEF = "hanim_r_calf";
HAnimJoint85.children = new MFNode();

HAnimJoint85.children[0] = HAnimSegment86;

HAnimJoint HAnimJoint87 = createNode("HAnimJoint");
HAnimJoint87.name = "r_ankle";
HAnimJoint87.DEF = "hanim_r_ankle";
HAnimJoint87.center = new SFVec3f(new float[-0.1101,0.0656,-0.0736]);
HAnimJoint87.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint87.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment88 = createNode("HAnimSegment");
HAnimSegment88.name = "r_hindfoot";
HAnimSegment88.DEF = "hanim_r_hindfoot";
HAnimSite HAnimSite89 = createNode("HAnimSite");
HAnimSite89.name = "r_lateral_malleolus_pt";
HAnimSite89.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite89.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
HAnimSegment88.children = new MFNode();

HAnimSegment88.children[0] = HAnimSite89;

HAnimSite HAnimSite90 = createNode("HAnimSite");
HAnimSite90.name = "r_medial_malleolus_pt";
HAnimSite90.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite90.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
HAnimSegment88.children[1] = HAnimSite90;

HAnimSite HAnimSite91 = createNode("HAnimSite");
HAnimSite91.name = "r_sphyrion_pt";
HAnimSite91.DEF = "hanim_r_sphyrion_pt";
HAnimSite91.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
HAnimSegment88.children[2] = HAnimSite91;

HAnimSite HAnimSite92 = createNode("HAnimSite");
HAnimSite92.name = "r_calcaneous_post_pt";
HAnimSite92.DEF = "hanim_r_calcaneous_post_pt";
HAnimSite92.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
HAnimSegment88.children[3] = HAnimSite92;

HAnimJoint87.children = new MFNode();

HAnimJoint87.children[0] = HAnimSegment88;

HAnimJoint HAnimJoint93 = createNode("HAnimJoint");
HAnimJoint93.name = "r_subtalar";
HAnimJoint93.DEF = "hanim_r_subtalar";
HAnimJoint93.center = new SFVec3f(new float[-0.1086,0.0001,-0.0368]);
HAnimJoint93.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint93.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment94 = createNode("HAnimSegment");
HAnimSegment94.name = "r_midproximal";
HAnimSegment94.DEF = "hanim_r_midproximal";
HAnimJoint93.children = new MFNode();

HAnimJoint93.children[0] = HAnimSegment94;

HAnimJoint HAnimJoint95 = createNode("HAnimJoint");
HAnimJoint95.name = "r_midtarsal";
HAnimJoint95.DEF = "hanim_r_midtarsal";
HAnimJoint95.center = new SFVec3f(new float[-0.1086,0.0001,0.0368]);
HAnimJoint95.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint95.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment96 = createNode("HAnimSegment");
HAnimSegment96.name = "r_middistal";
HAnimSegment96.DEF = "hanim_r_middistal";
HAnimSite HAnimSite97 = createNode("HAnimSite");
HAnimSite97.name = "r_metatarsal_pha1_pt";
HAnimSite97.DEF = "hanim_r_metatarsal_pha1_pt";
HAnimSite97.translation = new SFVec3f(new float[-0.0521,0.026,0.0127]);
HAnimSegment96.children = new MFNode();

HAnimSegment96.children[0] = HAnimSite97;

HAnimJoint95.children = new MFNode();

HAnimJoint95.children[0] = HAnimSegment96;

HAnimJoint HAnimJoint98 = createNode("HAnimJoint");
HAnimJoint98.name = "r_metatarsal";
HAnimJoint98.DEF = "hanim_r_metatarsal";
HAnimJoint98.center = new SFVec3f(new float[-0.1086,0,0.0762]);
HAnimJoint98.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint98.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment99 = createNode("HAnimSegment");
HAnimSegment99.name = "r_forefoot";
HAnimSegment99.DEF = "hanim_r_forefoot";
HAnimSite HAnimSite100 = createNode("HAnimSite");
HAnimSite100.name = "r_forefoot_tip";
HAnimSite100.DEF = "hanim_r_forefoot_tip";
HAnimSite100.translation = new SFVec3f(new float[-0.1043,0.0227,0.145]);
HAnimSegment99.children = new MFNode();

HAnimSegment99.children[0] = HAnimSite100;

HAnimSite HAnimSite101 = createNode("HAnimSite");
HAnimSite101.name = "r_metatarsal_pha5_pt";
HAnimSite101.DEF = "hanim_r_metatarsal_pha5_pt";
HAnimSite101.translation = new SFVec3f(new float[-0.1523,0.0166,0.0895]);
HAnimSegment99.children[1] = HAnimSite101;

HAnimSite HAnimSite102 = createNode("HAnimSite");
HAnimSite102.name = "r_digit2_pt";
HAnimSite102.DEF = "hanim_r_digit2_pt";
HAnimSite102.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
HAnimSegment99.children[2] = HAnimSite102;

HAnimJoint98.children = new MFNode();

HAnimJoint98.children[0] = HAnimSegment99;

HAnimJoint95.children[1] = HAnimJoint98;

HAnimJoint93.children[1] = HAnimJoint95;

HAnimJoint87.children[1] = HAnimJoint93;

HAnimJoint85.children[1] = HAnimJoint87;

HAnimJoint80.children[1] = HAnimJoint85;

HAnimJoint46.children[2] = HAnimJoint80;

HAnimJoint44.children[1] = HAnimJoint46;

HAnimJoint HAnimJoint103 = createNode("HAnimJoint");
HAnimJoint103.name = "vl5";
HAnimJoint103.DEF = "hanim_vl5";
HAnimJoint103.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimJoint103.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint103.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment104 = createNode("HAnimSegment");
HAnimSegment104.name = "l5";
HAnimSegment104.DEF = "hanim_l5";
HAnimSite HAnimSite105 = createNode("HAnimSite");
HAnimSite105.name = "waist_preferred_post_pt";
HAnimSite105.DEF = "hanim_waist_preferred_post_pt";
HAnimSite105.translation = new SFVec3f(new float[0,1.0915,-0.1091]);
HAnimSegment104.children = new MFNode();

HAnimSegment104.children[0] = HAnimSite105;

HAnimSite HAnimSite106 = createNode("HAnimSite");
HAnimSite106.name = "navel_pt";
HAnimSite106.DEF = "hanim_navel_pt";
HAnimSite106.translation = new SFVec3f(new float[0.0069,1.0966,0.1017]);
HAnimSegment104.children[1] = HAnimSite106;

HAnimJoint103.children = new MFNode();

HAnimJoint103.children[0] = HAnimSegment104;

HAnimJoint HAnimJoint107 = createNode("HAnimJoint");
HAnimJoint107.name = "vl4";
HAnimJoint107.DEF = "hanim_vl4";
HAnimJoint107.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimJoint107.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint107.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment108 = createNode("HAnimSegment");
HAnimSegment108.name = "l4";
HAnimSegment108.DEF = "hanim_l4";
HAnimJoint107.children = new MFNode();

HAnimJoint107.children[0] = HAnimSegment108;

HAnimJoint HAnimJoint109 = createNode("HAnimJoint");
HAnimJoint109.name = "vl3";
HAnimJoint109.DEF = "hanim_vl3";
HAnimJoint109.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimJoint109.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint109.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment110 = createNode("HAnimSegment");
HAnimSegment110.name = "l3";
HAnimSegment110.DEF = "hanim_l3";
HAnimJoint109.children = new MFNode();

HAnimJoint109.children[0] = HAnimSegment110;

HAnimJoint HAnimJoint111 = createNode("HAnimJoint");
HAnimJoint111.name = "vl2";
HAnimJoint111.DEF = "hanim_vl2";
HAnimJoint111.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimJoint111.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint111.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment112 = createNode("HAnimSegment");
HAnimSegment112.name = "l2";
HAnimSegment112.DEF = "hanim_l2";
HAnimSite HAnimSite113 = createNode("HAnimSite");
HAnimSite113.name = "r_rib10_pt";
HAnimSite113.DEF = "hanim_r_rib10_pt";
HAnimSite113.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
HAnimSegment112.children = new MFNode();

HAnimSegment112.children[0] = HAnimSite113;

HAnimSite HAnimSite114 = createNode("HAnimSite");
HAnimSite114.name = "l_rib10_pt";
HAnimSite114.DEF = "hanim_l_rib10_pt";
HAnimSite114.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
HAnimSegment112.children[1] = HAnimSite114;

HAnimSite HAnimSite115 = createNode("HAnimSite");
HAnimSite115.name = "rib10_midspine_pt";
HAnimSite115.DEF = "hanim_rib10_midspine_pt";
HAnimSite115.translation = new SFVec3f(new float[0.0049,1.1908,-0.1113]);
HAnimSegment112.children[2] = HAnimSite115;

HAnimJoint111.children = new MFNode();

HAnimJoint111.children[0] = HAnimSegment112;

HAnimJoint HAnimJoint116 = createNode("HAnimJoint");
HAnimJoint116.name = "vl1";
HAnimJoint116.DEF = "hanim_vl1";
HAnimJoint116.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimJoint116.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint116.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment117 = createNode("HAnimSegment");
HAnimSegment117.name = "l1";
HAnimSegment117.DEF = "hanim_l1";
HAnimJoint116.children = new MFNode();

HAnimJoint116.children[0] = HAnimSegment117;

HAnimJoint HAnimJoint118 = createNode("HAnimJoint");
HAnimJoint118.name = "vt12";
HAnimJoint118.DEF = "hanim_vt12";
HAnimJoint118.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimJoint118.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint118.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment119 = createNode("HAnimSegment");
HAnimSegment119.name = "t12";
HAnimSegment119.DEF = "hanim_t12";
HAnimJoint118.children = new MFNode();

HAnimJoint118.children[0] = HAnimSegment119;

HAnimJoint HAnimJoint120 = createNode("HAnimJoint");
HAnimJoint120.name = "vt11";
HAnimJoint120.DEF = "hanim_vt11";
HAnimJoint120.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimJoint120.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint120.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment121 = createNode("HAnimSegment");
HAnimSegment121.name = "t11";
HAnimSegment121.DEF = "hanim_t11";
HAnimJoint120.children = new MFNode();

HAnimJoint120.children[0] = HAnimSegment121;

HAnimJoint HAnimJoint122 = createNode("HAnimJoint");
HAnimJoint122.name = "vt10";
HAnimJoint122.DEF = "hanim_vt10";
HAnimJoint122.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimJoint122.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint122.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment123 = createNode("HAnimSegment");
HAnimSegment123.name = "t10";
HAnimSegment123.DEF = "hanim_t10";
HAnimSite HAnimSite124 = createNode("HAnimSite");
HAnimSite124.name = "substernale_pt";
HAnimSite124.DEF = "hanim_substernale_pt";
HAnimSite124.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
HAnimSegment123.children = new MFNode();

HAnimSegment123.children[0] = HAnimSite124;

HAnimJoint122.children = new MFNode();

HAnimJoint122.children[0] = HAnimSegment123;

HAnimJoint HAnimJoint125 = createNode("HAnimJoint");
HAnimJoint125.name = "vt9";
HAnimJoint125.DEF = "hanim_vt9";
HAnimJoint125.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimJoint125.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint125.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment126 = createNode("HAnimSegment");
HAnimSegment126.name = "t9";
HAnimSegment126.DEF = "hanim_t9";
HAnimSite HAnimSite127 = createNode("HAnimSite");
HAnimSite127.name = "r_thelion_pt";
HAnimSite127.DEF = "hanim_r_thelion_pt";
HAnimSite127.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
HAnimSegment126.children = new MFNode();

HAnimSegment126.children[0] = HAnimSite127;

HAnimSite HAnimSite128 = createNode("HAnimSite");
HAnimSite128.name = "l_thelion_pt";
HAnimSite128.DEF = "hanim_l_thelion_pt";
HAnimSite128.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
HAnimSegment126.children[1] = HAnimSite128;

HAnimJoint125.children = new MFNode();

HAnimJoint125.children[0] = HAnimSegment126;

HAnimJoint HAnimJoint129 = createNode("HAnimJoint");
HAnimJoint129.name = "vt8";
HAnimJoint129.DEF = "hanim_vt8";
HAnimJoint129.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimJoint129.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint129.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment130 = createNode("HAnimSegment");
HAnimSegment130.name = "t8";
HAnimSegment130.DEF = "hanim_t8";
HAnimJoint129.children = new MFNode();

HAnimJoint129.children[0] = HAnimSegment130;

HAnimJoint HAnimJoint131 = createNode("HAnimJoint");
HAnimJoint131.name = "vt7";
HAnimJoint131.DEF = "hanim_vt7";
HAnimJoint131.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimJoint131.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint131.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment132 = createNode("HAnimSegment");
HAnimSegment132.name = "t7";
HAnimSegment132.DEF = "hanim_t7";
HAnimJoint131.children = new MFNode();

HAnimJoint131.children[0] = HAnimSegment132;

HAnimJoint HAnimJoint133 = createNode("HAnimJoint");
HAnimJoint133.name = "vt6";
HAnimJoint133.DEF = "hanim_vt6";
HAnimJoint133.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimJoint133.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint133.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment134 = createNode("HAnimSegment");
HAnimSegment134.name = "t6";
HAnimSegment134.DEF = "hanim_t6";
HAnimJoint133.children = new MFNode();

HAnimJoint133.children[0] = HAnimSegment134;

HAnimJoint HAnimJoint135 = createNode("HAnimJoint");
HAnimJoint135.name = "vt5";
HAnimJoint135.DEF = "hanim_vt5";
HAnimJoint135.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimJoint135.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint135.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment136 = createNode("HAnimSegment");
HAnimSegment136.name = "t5";
HAnimSegment136.DEF = "hanim_t5";
HAnimJoint135.children = new MFNode();

HAnimJoint135.children[0] = HAnimSegment136;

HAnimJoint HAnimJoint137 = createNode("HAnimJoint");
HAnimJoint137.name = "vt4";
HAnimJoint137.DEF = "hanim_vt4";
HAnimJoint137.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimJoint137.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint137.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment138 = createNode("HAnimSegment");
HAnimSegment138.name = "t4";
HAnimSegment138.DEF = "hanim_t4";
HAnimJoint137.children = new MFNode();

HAnimJoint137.children[0] = HAnimSegment138;

HAnimJoint HAnimJoint139 = createNode("HAnimJoint");
HAnimJoint139.name = "vt3";
HAnimJoint139.DEF = "hanim_vt3";
HAnimJoint139.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimJoint139.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint139.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment140 = createNode("HAnimSegment");
HAnimSegment140.name = "t3";
HAnimSegment140.DEF = "hanim_t3";
HAnimJoint139.children = new MFNode();

HAnimJoint139.children[0] = HAnimSegment140;

HAnimJoint HAnimJoint141 = createNode("HAnimJoint");
HAnimJoint141.name = "vt2";
HAnimJoint141.DEF = "hanim_vt2";
HAnimJoint141.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimJoint141.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint141.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment142 = createNode("HAnimSegment");
HAnimSegment142.name = "t2";
HAnimSegment142.DEF = "hanim_t2";
HAnimJoint141.children = new MFNode();

HAnimJoint141.children[0] = HAnimSegment142;

HAnimJoint HAnimJoint143 = createNode("HAnimJoint");
HAnimJoint143.name = "vt1";
HAnimJoint143.DEF = "hanim_vt1";
HAnimJoint143.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimJoint143.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint143.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment144 = createNode("HAnimSegment");
HAnimSegment144.name = "t1";
HAnimSegment144.DEF = "hanim_t1";
HAnimSite HAnimSite145 = createNode("HAnimSite");
HAnimSite145.name = "suprasternale_pt";
HAnimSite145.DEF = "hanim_suprasternale_pt";
HAnimSite145.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
HAnimSegment144.children = new MFNode();

HAnimSegment144.children[0] = HAnimSite145;

HAnimSite HAnimSite146 = createNode("HAnimSite");
HAnimSite146.name = "cervicale_pt";
HAnimSite146.DEF = "hanim_cervicale_pt";
HAnimSite146.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
HAnimSegment144.children[1] = HAnimSite146;

HAnimJoint143.children = new MFNode();

HAnimJoint143.children[0] = HAnimSegment144;

HAnimJoint HAnimJoint147 = createNode("HAnimJoint");
HAnimJoint147.name = "vc7";
HAnimJoint147.DEF = "hanim_vc7";
HAnimJoint147.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimJoint147.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint147.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment148 = createNode("HAnimSegment");
HAnimSegment148.name = "c7";
HAnimSegment148.DEF = "hanim_c7";
HAnimSite HAnimSite149 = createNode("HAnimSite");
HAnimSite149.name = "r_neck_base_pt";
HAnimSite149.DEF = "hanim_r_neck_base_pt";
HAnimSite149.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
HAnimSegment148.children = new MFNode();

HAnimSegment148.children[0] = HAnimSite149;

HAnimSite HAnimSite150 = createNode("HAnimSite");
HAnimSite150.name = "l_neck_base_pt";
HAnimSite150.DEF = "hanim_l_neck_base_pt";
HAnimSite150.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
HAnimSegment148.children[1] = HAnimSite150;

HAnimJoint147.children = new MFNode();

HAnimJoint147.children[0] = HAnimSegment148;

HAnimJoint HAnimJoint151 = createNode("HAnimJoint");
HAnimJoint151.name = "vc6";
HAnimJoint151.DEF = "hanim_vc6";
HAnimJoint151.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimJoint151.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint151.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment152 = createNode("HAnimSegment");
HAnimSegment152.name = "c6";
HAnimSegment152.DEF = "hanim_c6";
HAnimJoint151.children = new MFNode();

HAnimJoint151.children[0] = HAnimSegment152;

HAnimJoint HAnimJoint153 = createNode("HAnimJoint");
HAnimJoint153.name = "vc5";
HAnimJoint153.DEF = "hanim_vc5";
HAnimJoint153.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimJoint153.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint153.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment154 = createNode("HAnimSegment");
HAnimSegment154.name = "c5";
HAnimSegment154.DEF = "hanim_c5";
HAnimJoint153.children = new MFNode();

HAnimJoint153.children[0] = HAnimSegment154;

HAnimJoint HAnimJoint155 = createNode("HAnimJoint");
HAnimJoint155.name = "vc4";
HAnimJoint155.DEF = "hanim_vc4";
HAnimJoint155.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimJoint155.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint155.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment156 = createNode("HAnimSegment");
HAnimSegment156.name = "c4";
HAnimSegment156.DEF = "hanim_c4";
HAnimJoint155.children = new MFNode();

HAnimJoint155.children[0] = HAnimSegment156;

HAnimJoint HAnimJoint157 = createNode("HAnimJoint");
HAnimJoint157.name = "vc3";
HAnimJoint157.DEF = "hanim_vc3";
HAnimJoint157.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimJoint157.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint157.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment158 = createNode("HAnimSegment");
HAnimSegment158.name = "c3";
HAnimSegment158.DEF = "hanim_c3";
HAnimJoint157.children = new MFNode();

HAnimJoint157.children[0] = HAnimSegment158;

HAnimJoint HAnimJoint159 = createNode("HAnimJoint");
HAnimJoint159.name = "vc2";
HAnimJoint159.DEF = "hanim_vc2";
HAnimJoint159.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimJoint159.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint159.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment160 = createNode("HAnimSegment");
HAnimSegment160.name = "c2";
HAnimSegment160.DEF = "hanim_c2";
HAnimJoint159.children = new MFNode();

HAnimJoint159.children[0] = HAnimSegment160;

HAnimJoint HAnimJoint161 = createNode("HAnimJoint");
HAnimJoint161.name = "vc1";
HAnimJoint161.DEF = "hanim_vc1";
HAnimJoint161.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimJoint161.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint161.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment162 = createNode("HAnimSegment");
HAnimSegment162.name = "c1";
HAnimSegment162.DEF = "hanim_c1";
HAnimJoint161.children = new MFNode();

HAnimJoint161.children[0] = HAnimSegment162;

HAnimJoint HAnimJoint163 = createNode("HAnimJoint");
HAnimJoint163.name = "skullbase";
HAnimJoint163.DEF = "hanim_skullbase";
HAnimJoint163.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint163.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint163.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment164 = createNode("HAnimSegment");
HAnimSegment164.name = "skull";
HAnimSegment164.DEF = "hanim_skull";
HAnimSite HAnimSite165 = createNode("HAnimSite");
HAnimSite165.name = "skull_tip";
HAnimSite165.DEF = "hanim_skull_tip";
HAnimSite165.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
//TODO move skull_tip x to zero, check others for symmetry
HAnimSegment164.children = new MFNode();

HAnimSegment164.children[0] = HAnimSite165;

HAnimSite HAnimSite166 = createNode("HAnimSite");
HAnimSite166.name = "sellion_pt";
HAnimSite166.DEF = "hanim_sellion_pt";
HAnimSite166.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
HAnimSegment164.children[1] = HAnimSite166;

HAnimSite HAnimSite167 = createNode("HAnimSite");
HAnimSite167.name = "r_infraorbitale_pt";
HAnimSite167.DEF = "hanim_r_infraorbitale_pt";
HAnimSite167.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
HAnimSegment164.children[2] = HAnimSite167;

HAnimSite HAnimSite168 = createNode("HAnimSite");
HAnimSite168.name = "l_infraorbitale_pt";
HAnimSite168.DEF = "hanim_l_infraorbitale_pt";
HAnimSite168.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
HAnimSegment164.children[3] = HAnimSite168;

HAnimSite HAnimSite169 = createNode("HAnimSite");
HAnimSite169.name = "supramenton_pt";
HAnimSite169.DEF = "hanim_supramenton_pt";
HAnimSite169.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
HAnimSegment164.children[4] = HAnimSite169;

HAnimSite HAnimSite170 = createNode("HAnimSite");
HAnimSite170.name = "r_tragion_pt";
HAnimSite170.DEF = "hanim_r_tragion_pt";
HAnimSite170.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
HAnimSegment164.children[5] = HAnimSite170;

HAnimSite HAnimSite171 = createNode("HAnimSite");
HAnimSite171.name = "r_gonion_pt";
HAnimSite171.DEF = "hanim_r_gonion_pt";
HAnimSite171.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
HAnimSegment164.children[6] = HAnimSite171;

HAnimSite HAnimSite172 = createNode("HAnimSite");
HAnimSite172.name = "l_tragion_pt";
HAnimSite172.DEF = "hanim_l_tragion_pt";
HAnimSite172.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
HAnimSegment164.children[7] = HAnimSite172;

HAnimSite HAnimSite173 = createNode("HAnimSite");
HAnimSite173.name = "l_gonion_pt";
HAnimSite173.DEF = "hanim_l_gonion_pt";
HAnimSite173.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
HAnimSegment164.children[8] = HAnimSite173;

HAnimSite HAnimSite174 = createNode("HAnimSite");
HAnimSite174.name = "nuchale_pt";
HAnimSite174.DEF = "hanim_nuchale_pt";
HAnimSite174.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
HAnimSegment164.children[9] = HAnimSite174;

HAnimJoint163.children = new MFNode();

HAnimJoint163.children[0] = HAnimSegment164;

HAnimJoint HAnimJoint175 = createNode("HAnimJoint");
HAnimJoint175.name = "l_eyeball_joint";
HAnimJoint175.DEF = "hanim_l_eyeball_joint";
HAnimJoint175.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
HAnimJoint175.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint175.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment176 = createNode("HAnimSegment");
HAnimSegment176.name = "l_eyeball";
HAnimSegment176.DEF = "hanim_l_eyeball";
HAnimSite HAnimSite177 = createNode("HAnimSite");
HAnimSite177.name = "l_eyeball_site_view";
HAnimSite177.DEF = "hanim_l_eyeball_site_view";
HAnimSite177.translation = new SFVec3f(new float[0.034,1.64,0.05]);
Viewpoint Viewpoint178 = createNode("Viewpoint");
Viewpoint178.DEF = "hanim_l_eyeball_site_viewpoint";
Viewpoint178.description = "l_eyeball_site_viewpoint looking forward";
Viewpoint178.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint178.position = new SFVec3f(new float[0,0,0]);
HAnimSite177.children = new MFNode();

HAnimSite177.children[0] = Viewpoint178;

HAnimSegment176.children = new MFNode();

HAnimSegment176.children[0] = HAnimSite177;

HAnimJoint175.children = new MFNode();

HAnimJoint175.children[0] = HAnimSegment176;

HAnimJoint163.children[1] = HAnimJoint175;

HAnimJoint HAnimJoint179 = createNode("HAnimJoint");
HAnimJoint179.name = "l_eyelid_joint";
HAnimJoint179.DEF = "hanim_l_eyelid_joint";
HAnimJoint179.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
HAnimJoint179.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint179.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment180 = createNode("HAnimSegment");
HAnimSegment180.name = "l_eyelid";
HAnimSegment180.DEF = "hanim_l_eyelid";
HAnimJoint179.children = new MFNode();

HAnimJoint179.children[0] = HAnimSegment180;

HAnimJoint163.children[2] = HAnimJoint179;

HAnimJoint HAnimJoint181 = createNode("HAnimJoint");
HAnimJoint181.name = "l_eyebrow_joint";
HAnimJoint181.DEF = "hanim_l_eyebrow_joint";
HAnimJoint181.center = new SFVec3f(new float[0.0336,1.635,0.0506]);
HAnimJoint181.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint181.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment182 = createNode("HAnimSegment");
HAnimSegment182.name = "l_eyebrow";
HAnimSegment182.DEF = "hanim_l_eyebrow";
HAnimJoint181.children = new MFNode();

HAnimJoint181.children[0] = HAnimSegment182;

HAnimJoint163.children[3] = HAnimJoint181;

HAnimJoint HAnimJoint183 = createNode("HAnimJoint");
HAnimJoint183.name = "r_eyeball_joint";
HAnimJoint183.DEF = "hanim_r_eyeball_joint";
HAnimJoint183.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
HAnimJoint183.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint183.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment184 = createNode("HAnimSegment");
HAnimSegment184.name = "r_eyeball";
HAnimSegment184.DEF = "hanim_r_eyeball";
HAnimSite HAnimSite185 = createNode("HAnimSite");
HAnimSite185.name = "r_eyeball_site_view";
HAnimSite185.DEF = "hanim_r_eyeball_site_view";
HAnimSite185.translation = new SFVec3f(new float[-0.034,1.64,0.05]);
Viewpoint Viewpoint186 = createNode("Viewpoint");
Viewpoint186.DEF = "hanim_r_eyeball_site_viewpoint";
Viewpoint186.description = "r_eyeball_site_viewpoint looking forward";
Viewpoint186.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint186.position = new SFVec3f(new float[0,0,0]);
HAnimSite185.children = new MFNode();

HAnimSite185.children[0] = Viewpoint186;

HAnimSegment184.children = new MFNode();

HAnimSegment184.children[0] = HAnimSite185;

HAnimJoint183.children = new MFNode();

HAnimJoint183.children[0] = HAnimSegment184;

HAnimJoint163.children[4] = HAnimJoint183;

HAnimJoint HAnimJoint187 = createNode("HAnimJoint");
HAnimJoint187.name = "r_eyelid_joint";
HAnimJoint187.DEF = "hanim_r_eyelid_joint";
HAnimJoint187.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
HAnimJoint187.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint187.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment188 = createNode("HAnimSegment");
HAnimSegment188.name = "r_eyelid";
HAnimSegment188.DEF = "hanim_r_eyelid";
HAnimJoint187.children = new MFNode();

HAnimJoint187.children[0] = HAnimSegment188;

HAnimJoint163.children[5] = HAnimJoint187;

HAnimJoint HAnimJoint189 = createNode("HAnimJoint");
HAnimJoint189.name = "r_eyebrow_joint";
HAnimJoint189.DEF = "hanim_r_eyebrow_joint";
HAnimJoint189.center = new SFVec3f(new float[-0.0336,1.635,0.0506]);
HAnimJoint189.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint189.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment190 = createNode("HAnimSegment");
HAnimSegment190.name = "r_eyebrow";
HAnimSegment190.DEF = "hanim_r_eyebrow";
HAnimJoint189.children = new MFNode();

HAnimJoint189.children[0] = HAnimSegment190;

HAnimJoint163.children[6] = HAnimJoint189;

HAnimJoint HAnimJoint191 = createNode("HAnimJoint");
HAnimJoint191.name = "temporomandibular";
HAnimJoint191.DEF = "hanim_temporomandibular";
HAnimJoint191.center = new SFVec3f(new float[0,1.63,0.015]);
HAnimJoint191.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint191.llimit = new MFFloat(new float[0,0,0]);
//Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint
HAnimSegment HAnimSegment192 = createNode("HAnimSegment");
HAnimSegment192.name = "jaw";
HAnimSegment192.DEF = "hanim_jaw";
HAnimSite HAnimSite193 = createNode("HAnimSite");
HAnimSite193.name = "temporomandibular_l_site_pt";
HAnimSite193.DEF = "hanim_temporomandibular_l_site_pt";
HAnimSite193.translation = new SFVec3f(new float[0.045,1.63,0]);
HAnimSegment192.children = new MFNode();

HAnimSegment192.children[0] = HAnimSite193;

HAnimSite HAnimSite194 = createNode("HAnimSite");
HAnimSite194.name = "temporomandibular_r_site_pt";
HAnimSite194.DEF = "hanim_temporomandibular_r_site_pt";
HAnimSite194.translation = new SFVec3f(new float[-0.045,1.63,0]);
HAnimSegment192.children[1] = HAnimSite194;

HAnimJoint191.children = new MFNode();

HAnimJoint191.children[0] = HAnimSegment192;

HAnimJoint163.children[7] = HAnimJoint191;

HAnimJoint161.children[1] = HAnimJoint163;

HAnimJoint159.children[1] = HAnimJoint161;

HAnimJoint157.children[1] = HAnimJoint159;

HAnimJoint155.children[1] = HAnimJoint157;

HAnimJoint153.children[1] = HAnimJoint155;

HAnimJoint151.children[1] = HAnimJoint153;

HAnimJoint147.children[1] = HAnimJoint151;

HAnimJoint143.children[1] = HAnimJoint147;

HAnimJoint HAnimJoint195 = createNode("HAnimJoint");
HAnimJoint195.name = "l_sternoclavicular";
HAnimJoint195.DEF = "hanim_l_sternoclavicular";
HAnimJoint195.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint195.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint195.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment196 = createNode("HAnimSegment");
HAnimSegment196.name = "l_clavicle";
HAnimSegment196.DEF = "hanim_l_clavicle";
HAnimSite HAnimSite197 = createNode("HAnimSite");
HAnimSite197.name = "l_clavicale_pt";
HAnimSite197.DEF = "hanim_l_clavicale_pt";
HAnimSite197.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
HAnimSegment196.children = new MFNode();

HAnimSegment196.children[0] = HAnimSite197;

HAnimSite HAnimSite198 = createNode("HAnimSite");
HAnimSite198.name = "l_acromion_pt";
HAnimSite198.DEF = "hanim_l_acromion_pt";
HAnimSite198.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
HAnimSegment196.children[1] = HAnimSite198;

HAnimSite HAnimSite199 = createNode("HAnimSite");
HAnimSite199.name = "l_axilla_ant_pt";
HAnimSite199.DEF = "hanim_l_axilla_ant_pt";
HAnimSite199.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
HAnimSegment196.children[2] = HAnimSite199;

HAnimSite HAnimSite200 = createNode("HAnimSite");
HAnimSite200.name = "l_axilla_post_pt";
HAnimSite200.DEF = "hanim_l_axilla_post_pt";
HAnimSite200.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
HAnimSegment196.children[3] = HAnimSite200;

HAnimJoint195.children = new MFNode();

HAnimJoint195.children[0] = HAnimSegment196;

HAnimJoint HAnimJoint201 = createNode("HAnimJoint");
HAnimJoint201.name = "l_acromioclavicular";
HAnimJoint201.DEF = "hanim_l_acromioclavicular";
HAnimJoint201.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint201.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint201.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment202 = createNode("HAnimSegment");
HAnimSegment202.name = "l_scapula";
HAnimSegment202.DEF = "hanim_l_scapula";
HAnimJoint201.children = new MFNode();

HAnimJoint201.children[0] = HAnimSegment202;

HAnimJoint HAnimJoint203 = createNode("HAnimJoint");
HAnimJoint203.name = "l_shoulder";
HAnimJoint203.DEF = "hanim_l_shoulder";
HAnimJoint203.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimJoint203.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint203.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment204 = createNode("HAnimSegment");
HAnimSegment204.name = "l_upperarm";
HAnimSegment204.DEF = "hanim_l_upperarm";
HAnimSite HAnimSite205 = createNode("HAnimSite");
HAnimSite205.name = "l_humeral_lateral_epicn_pt";
HAnimSite205.DEF = "hanim_l_humeral_lateral_epicn_pt";
HAnimSite205.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
HAnimSegment204.children = new MFNode();

HAnimSegment204.children[0] = HAnimSite205;

HAnimJoint203.children = new MFNode();

HAnimJoint203.children[0] = HAnimSegment204;

HAnimJoint HAnimJoint206 = createNode("HAnimJoint");
HAnimJoint206.name = "l_elbow";
HAnimJoint206.DEF = "hanim_l_elbow";
HAnimJoint206.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimJoint206.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint206.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment207 = createNode("HAnimSegment");
HAnimSegment207.name = "l_forearm";
HAnimSegment207.DEF = "hanim_l_forearm";
HAnimSite HAnimSite208 = createNode("HAnimSite");
HAnimSite208.name = "l_radial_styloid_pt";
HAnimSite208.DEF = "hanim_l_radial_styloid_pt";
HAnimSite208.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
HAnimSegment207.children = new MFNode();

HAnimSegment207.children[0] = HAnimSite208;

HAnimSite HAnimSite209 = createNode("HAnimSite");
HAnimSite209.name = "l_olecranon_pt";
HAnimSite209.DEF = "hanim_l_olecranon_pt";
HAnimSite209.translation = new SFVec3f(new float[0.1962,1.1375,-0.1123]);
HAnimSegment207.children[1] = HAnimSite209;

HAnimSite HAnimSite210 = createNode("HAnimSite");
HAnimSite210.name = "l_humeral_medial_epicn_pt";
HAnimSite210.DEF = "hanim_l_humeral_medial_epicn_pt";
HAnimSite210.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
HAnimSegment207.children[2] = HAnimSite210;

HAnimSite HAnimSite211 = createNode("HAnimSite");
HAnimSite211.name = "l_radiale_pt";
HAnimSite211.DEF = "hanim_l_radiale_pt";
HAnimSite211.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
HAnimSegment207.children[3] = HAnimSite211;

HAnimJoint206.children = new MFNode();

HAnimJoint206.children[0] = HAnimSegment207;

HAnimJoint HAnimJoint212 = createNode("HAnimJoint");
HAnimJoint212.name = "l_wrist";
HAnimJoint212.DEF = "hanim_l_wrist";
HAnimJoint212.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint212.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint212.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment213 = createNode("HAnimSegment");
HAnimSegment213.name = "l_hand";
HAnimSegment213.DEF = "hanim_l_hand";
HAnimSite HAnimSite214 = createNode("HAnimSite");
HAnimSite214.name = "l_metacarpal_pha2_pt";
HAnimSite214.DEF = "hanim_l_metacarpal_pha2_pt";
HAnimSite214.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
HAnimSegment213.children = new MFNode();

HAnimSegment213.children[0] = HAnimSite214;

HAnimSite HAnimSite215 = createNode("HAnimSite");
HAnimSite215.name = "l_ulnar_styloid_pt";
HAnimSite215.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite215.translation = new SFVec3f(new float[0.2142,0.8529,-0.0648]);
HAnimSegment213.children[1] = HAnimSite215;

HAnimSite HAnimSite216 = createNode("HAnimSite");
HAnimSite216.name = "l_metacarpal_pha5_pt";
HAnimSite216.DEF = "hanim_l_metacarpal_pha5_pt";
HAnimSite216.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
HAnimSegment213.children[2] = HAnimSite216;

HAnimSite HAnimSite217 = createNode("HAnimSite");
HAnimSite217.name = "l_hand_front_view";
HAnimSite217.DEF = "hanim_l_hand_front_view";
HAnimSite217.translation = new SFVec3f(new float[0.3,0.75,0.45]);
Viewpoint Viewpoint218 = createNode("Viewpoint");
Viewpoint218.DEF = "hanim_l_hand_front_viewpoint";
Viewpoint218.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
Viewpoint218.description = "left hand front";
Viewpoint218.position = new SFVec3f(new float[0,0,0]);
HAnimSite217.children = new MFNode();

HAnimSite217.children[0] = Viewpoint218;

HAnimSegment213.children[3] = HAnimSite217;

HAnimJoint212.children = new MFNode();

HAnimJoint212.children[0] = HAnimSegment213;

HAnimJoint HAnimJoint219 = createNode("HAnimJoint");
HAnimJoint219.name = "l_thumb1";
HAnimJoint219.DEF = "hanim_l_thumb1";
HAnimJoint219.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint219.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint219.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment220 = createNode("HAnimSegment");
HAnimSegment220.name = "l_thumb_metacarpal";
HAnimSegment220.DEF = "hanim_l_thumb_metacarpal";
HAnimJoint219.children = new MFNode();

HAnimJoint219.children[0] = HAnimSegment220;

HAnimJoint HAnimJoint221 = createNode("HAnimJoint");
HAnimJoint221.name = "l_thumb2";
HAnimJoint221.DEF = "hanim_l_thumb2";
HAnimJoint221.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint221.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint221.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment222 = createNode("HAnimSegment");
HAnimSegment222.name = "l_thumb_proximal";
HAnimSegment222.DEF = "hanim_l_thumb_proximal";
HAnimJoint221.children = new MFNode();

HAnimJoint221.children[0] = HAnimSegment222;

HAnimJoint HAnimJoint223 = createNode("HAnimJoint");
HAnimJoint223.name = "l_thumb3";
HAnimJoint223.DEF = "hanim_l_thumb3";
HAnimJoint223.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint223.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint223.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment224 = createNode("HAnimSegment");
HAnimSegment224.name = "l_thumb_distal";
HAnimSegment224.DEF = "hanim_l_thumb_distal";
HAnimSite HAnimSite225 = createNode("HAnimSite");
HAnimSite225.name = "l_thumb_distal_tip";
HAnimSite225.DEF = "hanim_l_thumb_distal_tip";
HAnimSite225.translation = new SFVec3f(new float[0.1982,0.8061,0.0759]);
HAnimSegment224.children = new MFNode();

HAnimSegment224.children[0] = HAnimSite225;

HAnimJoint223.children = new MFNode();

HAnimJoint223.children[0] = HAnimSegment224;

HAnimJoint221.children[1] = HAnimJoint223;

HAnimJoint219.children[1] = HAnimJoint221;

HAnimJoint212.children[1] = HAnimJoint219;

HAnimJoint HAnimJoint226 = createNode("HAnimJoint");
HAnimJoint226.name = "l_index0";
HAnimJoint226.DEF = "hanim_l_index0";
HAnimJoint226.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint226.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint226.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment227 = createNode("HAnimSegment");
HAnimSegment227.name = "l_index_metacarpal";
HAnimSegment227.DEF = "hanim_l_index_metacarpal";
HAnimJoint226.children = new MFNode();

HAnimJoint226.children[0] = HAnimSegment227;

HAnimJoint HAnimJoint228 = createNode("HAnimJoint");
HAnimJoint228.name = "l_index1";
HAnimJoint228.DEF = "hanim_l_index1";
HAnimJoint228.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint228.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint228.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment229 = createNode("HAnimSegment");
HAnimSegment229.name = "l_index_proximal";
HAnimSegment229.DEF = "hanim_l_index_proximal";
HAnimJoint228.children = new MFNode();

HAnimJoint228.children[0] = HAnimSegment229;

HAnimJoint HAnimJoint230 = createNode("HAnimJoint");
HAnimJoint230.name = "l_index2";
HAnimJoint230.DEF = "hanim_l_index2";
HAnimJoint230.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint230.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint230.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment231 = createNode("HAnimSegment");
HAnimSegment231.name = "l_index_middle";
HAnimSegment231.DEF = "hanim_l_index_middle";
HAnimJoint230.children = new MFNode();

HAnimJoint230.children[0] = HAnimSegment231;

HAnimJoint HAnimJoint232 = createNode("HAnimJoint");
HAnimJoint232.name = "l_index3";
HAnimJoint232.DEF = "hanim_l_index3";
HAnimJoint232.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint232.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint232.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment233 = createNode("HAnimSegment");
HAnimSegment233.name = "l_index_distal";
HAnimSegment233.DEF = "hanim_l_index_distal";
HAnimSite HAnimSite234 = createNode("HAnimSite");
HAnimSite234.name = "l_index_distal_tip";
HAnimSite234.DEF = "hanim_l_index_distal_tip";
HAnimSite234.translation = new SFVec3f(new float[0.2089,0.6858,-0.0245]);
HAnimSegment233.children = new MFNode();

HAnimSegment233.children[0] = HAnimSite234;

HAnimSite HAnimSite235 = createNode("HAnimSite");
HAnimSite235.name = "l_dactylion_pt";
HAnimSite235.DEF = "hanim_l_dactylion_pt";
HAnimSite235.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
HAnimSegment233.children[1] = HAnimSite235;

HAnimJoint232.children = new MFNode();

HAnimJoint232.children[0] = HAnimSegment233;

HAnimJoint230.children[1] = HAnimJoint232;

HAnimJoint228.children[1] = HAnimJoint230;

HAnimJoint226.children[1] = HAnimJoint228;

HAnimJoint212.children[2] = HAnimJoint226;

HAnimJoint HAnimJoint236 = createNode("HAnimJoint");
HAnimJoint236.name = "l_middle0";
HAnimJoint236.DEF = "hanim_l_middle0";
HAnimJoint236.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint236.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint236.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment237 = createNode("HAnimSegment");
HAnimSegment237.name = "l_middle_metacarpal";
HAnimSegment237.DEF = "hanim_l_middle_metacarpal";
HAnimJoint236.children = new MFNode();

HAnimJoint236.children[0] = HAnimSegment237;

HAnimJoint HAnimJoint238 = createNode("HAnimJoint");
HAnimJoint238.name = "l_middle1";
HAnimJoint238.DEF = "hanim_l_middle1";
HAnimJoint238.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint238.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint238.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment239 = createNode("HAnimSegment");
HAnimSegment239.name = "l_middle_proximal";
HAnimSegment239.DEF = "hanim_l_middle_proximal";
HAnimJoint238.children = new MFNode();

HAnimJoint238.children[0] = HAnimSegment239;

HAnimJoint HAnimJoint240 = createNode("HAnimJoint");
HAnimJoint240.name = "l_middle2";
HAnimJoint240.DEF = "hanim_l_middle2";
HAnimJoint240.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint240.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint240.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment241 = createNode("HAnimSegment");
HAnimSegment241.name = "l_middle_middle";
HAnimSegment241.DEF = "hanim_l_middle_middle";
HAnimJoint240.children = new MFNode();

HAnimJoint240.children[0] = HAnimSegment241;

HAnimJoint HAnimJoint242 = createNode("HAnimJoint");
HAnimJoint242.name = "l_middle3";
HAnimJoint242.DEF = "hanim_l_middle3";
HAnimJoint242.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint242.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint242.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment243 = createNode("HAnimSegment");
HAnimSegment243.name = "l_middle_distal";
HAnimSegment243.DEF = "hanim_l_middle_distal";
HAnimSite HAnimSite244 = createNode("HAnimSite");
HAnimSite244.name = "l_middle_distal_tip";
HAnimSite244.DEF = "hanim_l_middle_distal_tip";
HAnimSite244.translation = new SFVec3f(new float[0.208,0.6731,-0.0491]);
HAnimSegment243.children = new MFNode();

HAnimSegment243.children[0] = HAnimSite244;

HAnimJoint242.children = new MFNode();

HAnimJoint242.children[0] = HAnimSegment243;

HAnimJoint240.children[1] = HAnimJoint242;

HAnimJoint238.children[1] = HAnimJoint240;

HAnimJoint236.children[1] = HAnimJoint238;

HAnimJoint212.children[3] = HAnimJoint236;

HAnimJoint HAnimJoint245 = createNode("HAnimJoint");
HAnimJoint245.name = "l_ring0";
HAnimJoint245.DEF = "hanim_l_ring0";
HAnimJoint245.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint245.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint245.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment246 = createNode("HAnimSegment");
HAnimSegment246.name = "l_ring_metacarpal";
HAnimSegment246.DEF = "hanim_l_ring_metacarpal";
HAnimJoint245.children = new MFNode();

HAnimJoint245.children[0] = HAnimSegment246;

HAnimJoint HAnimJoint247 = createNode("HAnimJoint");
HAnimJoint247.name = "l_ring1";
HAnimJoint247.DEF = "hanim_l_ring1";
HAnimJoint247.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint247.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint247.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment248 = createNode("HAnimSegment");
HAnimSegment248.name = "l_ring_proximal";
HAnimSegment248.DEF = "hanim_l_ring_proximal";
HAnimJoint247.children = new MFNode();

HAnimJoint247.children[0] = HAnimSegment248;

HAnimJoint HAnimJoint249 = createNode("HAnimJoint");
HAnimJoint249.name = "l_ring2";
HAnimJoint249.DEF = "hanim_l_ring2";
HAnimJoint249.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint249.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint249.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment250 = createNode("HAnimSegment");
HAnimSegment250.name = "l_ring_middle";
HAnimSegment250.DEF = "hanim_l_ring_middle";
HAnimJoint249.children = new MFNode();

HAnimJoint249.children[0] = HAnimSegment250;

HAnimJoint HAnimJoint251 = createNode("HAnimJoint");
HAnimJoint251.name = "l_ring3";
HAnimJoint251.DEF = "hanim_l_ring3";
HAnimJoint251.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint251.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint251.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment252 = createNode("HAnimSegment");
HAnimSegment252.name = "l_ring_distal";
HAnimSegment252.DEF = "hanim_l_ring_distal";
HAnimSite HAnimSite253 = createNode("HAnimSite");
HAnimSite253.name = "l_ring_distal_tip";
HAnimSite253.DEF = "hanim_l_ring_distal_tip";
HAnimSite253.translation = new SFVec3f(new float[0.2035,0.675,-0.0756]);
HAnimSegment252.children = new MFNode();

HAnimSegment252.children[0] = HAnimSite253;

HAnimJoint251.children = new MFNode();

HAnimJoint251.children[0] = HAnimSegment252;

HAnimJoint249.children[1] = HAnimJoint251;

HAnimJoint247.children[1] = HAnimJoint249;

HAnimJoint245.children[1] = HAnimJoint247;

HAnimJoint212.children[4] = HAnimJoint245;

HAnimJoint HAnimJoint254 = createNode("HAnimJoint");
HAnimJoint254.name = "l_pinky0";
HAnimJoint254.DEF = "hanim_l_pinky0";
HAnimJoint254.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint254.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint254.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment255 = createNode("HAnimSegment");
HAnimSegment255.name = "l_pinky_metacarpal";
HAnimSegment255.DEF = "hanim_l_pinky_metacarpal";
HAnimJoint254.children = new MFNode();

HAnimJoint254.children[0] = HAnimSegment255;

HAnimJoint HAnimJoint256 = createNode("HAnimJoint");
HAnimJoint256.name = "l_pinky1";
HAnimJoint256.DEF = "hanim_l_pinky1";
HAnimJoint256.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint256.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint256.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment257 = createNode("HAnimSegment");
HAnimSegment257.name = "l_pinky_proximal";
HAnimSegment257.DEF = "hanim_l_pinky_proximal";
HAnimJoint256.children = new MFNode();

HAnimJoint256.children[0] = HAnimSegment257;

HAnimJoint HAnimJoint258 = createNode("HAnimJoint");
HAnimJoint258.name = "l_pinky2";
HAnimJoint258.DEF = "hanim_l_pinky2";
HAnimJoint258.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint258.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint258.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment259 = createNode("HAnimSegment");
HAnimSegment259.name = "l_pinky_middle";
HAnimSegment259.DEF = "hanim_l_pinky_middle";
HAnimJoint258.children = new MFNode();

HAnimJoint258.children[0] = HAnimSegment259;

HAnimJoint HAnimJoint260 = createNode("HAnimJoint");
HAnimJoint260.name = "l_pinky3";
HAnimJoint260.DEF = "hanim_l_pinky3";
HAnimJoint260.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint260.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint260.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment261 = createNode("HAnimSegment");
HAnimSegment261.name = "l_pinky_distal";
HAnimSegment261.DEF = "hanim_l_pinky_distal";
HAnimSite HAnimSite262 = createNode("HAnimSite");
HAnimSite262.name = "l_pinky_distal_tip";
HAnimSite262.DEF = "hanim_l_pinky_distal_tip";
HAnimSite262.translation = new SFVec3f(new float[0.2014,0.7009,-0.1012]);
HAnimSegment261.children = new MFNode();

HAnimSegment261.children[0] = HAnimSite262;

HAnimJoint260.children = new MFNode();

HAnimJoint260.children[0] = HAnimSegment261;

HAnimJoint258.children[1] = HAnimJoint260;

HAnimJoint256.children[1] = HAnimJoint258;

HAnimJoint254.children[1] = HAnimJoint256;

HAnimJoint212.children[5] = HAnimJoint254;

HAnimJoint206.children[1] = HAnimJoint212;

HAnimJoint203.children[1] = HAnimJoint206;

HAnimJoint201.children[1] = HAnimJoint203;

HAnimJoint195.children[1] = HAnimJoint201;

HAnimJoint143.children[2] = HAnimJoint195;

HAnimJoint HAnimJoint263 = createNode("HAnimJoint");
HAnimJoint263.name = "r_sternoclavicular";
HAnimJoint263.DEF = "hanim_r_sternoclavicular";
HAnimJoint263.center = new SFVec3f(new float[-0.082,1.4488,-0.0353]);
HAnimJoint263.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint263.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment264 = createNode("HAnimSegment");
HAnimSegment264.name = "r_clavicle";
HAnimSegment264.DEF = "hanim_r_clavicle";
HAnimSite HAnimSite265 = createNode("HAnimSite");
HAnimSite265.name = "r_clavicale_pt";
HAnimSite265.DEF = "hanim_r_clavicale_pt";
HAnimSite265.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
HAnimSegment264.children = new MFNode();

HAnimSegment264.children[0] = HAnimSite265;

HAnimSite HAnimSite266 = createNode("HAnimSite");
HAnimSite266.name = "r_acromion_pt";
HAnimSite266.DEF = "hanim_r_acromion_pt";
HAnimSite266.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
HAnimSegment264.children[1] = HAnimSite266;

HAnimSite HAnimSite267 = createNode("HAnimSite");
HAnimSite267.name = "r_axilla_ant_pt";
HAnimSite267.DEF = "hanim_r_axilla_ant_pt";
HAnimSite267.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
HAnimSegment264.children[2] = HAnimSite267;

HAnimSite HAnimSite268 = createNode("HAnimSite");
HAnimSite268.name = "r_axilla_post_pt";
HAnimSite268.DEF = "hanim_r_axilla_post_pt";
HAnimSite268.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
HAnimSegment264.children[3] = HAnimSite268;

HAnimJoint263.children = new MFNode();

HAnimJoint263.children[0] = HAnimSegment264;

HAnimJoint HAnimJoint269 = createNode("HAnimJoint");
HAnimJoint269.name = "r_acromioclavicular";
HAnimJoint269.DEF = "hanim_r_acromioclavicular";
HAnimJoint269.center = new SFVec3f(new float[-0.0962,1.4269,-0.0424]);
HAnimJoint269.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint269.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment270 = createNode("HAnimSegment");
HAnimSegment270.name = "r_scapula";
HAnimSegment270.DEF = "hanim_r_scapula";
HAnimJoint269.children = new MFNode();

HAnimJoint269.children[0] = HAnimSegment270;

HAnimJoint HAnimJoint271 = createNode("HAnimJoint");
HAnimJoint271.name = "r_shoulder";
HAnimJoint271.DEF = "hanim_r_shoulder";
HAnimJoint271.center = new SFVec3f(new float[-0.2029,1.4376,-0.0387]);
HAnimJoint271.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint271.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment272 = createNode("HAnimSegment");
HAnimSegment272.name = "r_upperarm";
HAnimSegment272.DEF = "hanim_r_upperarm";
HAnimSite HAnimSite273 = createNode("HAnimSite");
HAnimSite273.name = "r_humeral_lateral_epicn_pt";
HAnimSite273.DEF = "hanim_r_humeral_lateral_epicn_pt";
HAnimSite273.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
HAnimSegment272.children = new MFNode();

HAnimSegment272.children[0] = HAnimSite273;

HAnimJoint271.children = new MFNode();

HAnimJoint271.children[0] = HAnimSegment272;

HAnimJoint HAnimJoint274 = createNode("HAnimJoint");
HAnimJoint274.name = "r_elbow";
HAnimJoint274.DEF = "hanim_r_elbow";
HAnimJoint274.center = new SFVec3f(new float[-0.2014,1.1357,-0.0682]);
HAnimJoint274.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint274.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment275 = createNode("HAnimSegment");
HAnimSegment275.name = "r_forearm";
HAnimSegment275.DEF = "hanim_r_forearm";
HAnimSite HAnimSite276 = createNode("HAnimSite");
HAnimSite276.name = "r_radial_styloid_pt";
HAnimSite276.DEF = "hanim_r_radial_styloid_pt";
HAnimSite276.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
HAnimSegment275.children = new MFNode();

HAnimSegment275.children[0] = HAnimSite276;

HAnimSite HAnimSite277 = createNode("HAnimSite");
HAnimSite277.name = "r_olecranon_pt";
HAnimSite277.DEF = "hanim_r_olecranon_pt";
HAnimSite277.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
HAnimSegment275.children[1] = HAnimSite277;

HAnimSite HAnimSite278 = createNode("HAnimSite");
HAnimSite278.name = "r_humeral_medial_epicn_pt";
HAnimSite278.DEF = "hanim_r_humeral_medial_epicn_pt";
HAnimSite278.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
HAnimSegment275.children[2] = HAnimSite278;

HAnimSite HAnimSite279 = createNode("HAnimSite");
HAnimSite279.name = "r_radiale_pt";
HAnimSite279.DEF = "hanim_r_radiale_pt";
HAnimSite279.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
HAnimSegment275.children[3] = HAnimSite279;

HAnimJoint274.children = new MFNode();

HAnimJoint274.children[0] = HAnimSegment275;

HAnimJoint HAnimJoint280 = createNode("HAnimJoint");
HAnimJoint280.name = "r_wrist";
HAnimJoint280.DEF = "hanim_r_wrist";
HAnimJoint280.center = new SFVec3f(new float[-0.1984,0.8663,-0.0583]);
HAnimJoint280.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint280.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment281 = createNode("HAnimSegment");
HAnimSegment281.name = "r_hand";
HAnimSegment281.DEF = "hanim_r_hand";
HAnimSite HAnimSite282 = createNode("HAnimSite");
HAnimSite282.name = "r_metacarpal_pha2_pt";
HAnimSite282.DEF = "hanim_r_metacarpal_pha2_pt";
HAnimSite282.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
HAnimSegment281.children = new MFNode();

HAnimSegment281.children[0] = HAnimSite282;

HAnimSite HAnimSite283 = createNode("HAnimSite");
HAnimSite283.name = "r_ulnar_styloid_pt";
HAnimSite283.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite283.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
HAnimSegment281.children[1] = HAnimSite283;

HAnimSite HAnimSite284 = createNode("HAnimSite");
HAnimSite284.name = "r_metacarpal_pha5_pt";
HAnimSite284.DEF = "hanim_r_metacarpal_pha5_pt";
HAnimSite284.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
HAnimSegment281.children[2] = HAnimSite284;

HAnimSite HAnimSite285 = createNode("HAnimSite");
HAnimSite285.name = "r_hand_front_view";
HAnimSite285.DEF = "hanim_r_hand_front_view";
HAnimSite285.translation = new SFVec3f(new float[-0.3,0.75,0.45]);
Viewpoint Viewpoint286 = createNode("Viewpoint");
Viewpoint286.DEF = "hanim_r_hand_front_viewpoint";
Viewpoint286.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
Viewpoint286.description = "right hand front";
Viewpoint286.position = new SFVec3f(new float[0,0,0]);
HAnimSite285.children = new MFNode();

HAnimSite285.children[0] = Viewpoint286;

HAnimSegment281.children[3] = HAnimSite285;

HAnimJoint280.children = new MFNode();

HAnimJoint280.children[0] = HAnimSegment281;

HAnimJoint HAnimJoint287 = createNode("HAnimJoint");
HAnimJoint287.name = "r_thumb1";
HAnimJoint287.DEF = "hanim_r_thumb1";
HAnimJoint287.center = new SFVec3f(new float[-0.1924,0.8472,-0.0534]);
HAnimJoint287.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint287.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment288 = createNode("HAnimSegment");
HAnimSegment288.name = "r_thumb_metacarpal";
HAnimSegment288.DEF = "hanim_r_thumb_metacarpal";
HAnimJoint287.children = new MFNode();

HAnimJoint287.children[0] = HAnimSegment288;

HAnimJoint HAnimJoint289 = createNode("HAnimJoint");
HAnimJoint289.name = "r_thumb2";
HAnimJoint289.DEF = "hanim_r_thumb2";
HAnimJoint289.center = new SFVec3f(new float[-0.1951,0.8226,0.0246]);
HAnimJoint289.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint289.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment290 = createNode("HAnimSegment");
HAnimSegment290.name = "r_thumb_proximal";
HAnimSegment290.DEF = "hanim_r_thumb_proximal";
HAnimJoint289.children = new MFNode();

HAnimJoint289.children[0] = HAnimSegment290;

HAnimJoint HAnimJoint291 = createNode("HAnimJoint");
HAnimJoint291.name = "r_thumb3";
HAnimJoint291.DEF = "hanim_r_thumb3";
HAnimJoint291.center = new SFVec3f(new float[-0.1955,0.8159,0.0464]);
HAnimJoint291.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint291.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment292 = createNode("HAnimSegment");
HAnimSegment292.name = "r_thumb_distal";
HAnimSegment292.DEF = "hanim_r_thumb_distal";
HAnimSite HAnimSite293 = createNode("HAnimSite");
HAnimSite293.name = "r_thumb_distal_tip";
HAnimSite293.DEF = "hanim_r_thumb_distal_tip";
HAnimSite293.translation = new SFVec3f(new float[-0.1869,0.809,0.082]);
HAnimSegment292.children = new MFNode();

HAnimSegment292.children[0] = HAnimSite293;

HAnimJoint291.children = new MFNode();

HAnimJoint291.children[0] = HAnimSegment292;

HAnimJoint289.children[1] = HAnimJoint291;

HAnimJoint287.children[1] = HAnimJoint289;

HAnimJoint280.children[1] = HAnimJoint287;

HAnimJoint HAnimJoint294 = createNode("HAnimJoint");
HAnimJoint294.name = "r_index0";
HAnimJoint294.DEF = "hanim_r_index0";
HAnimJoint294.center = new SFVec3f(new float[-0.1983,0.8024,-0.028]);
HAnimJoint294.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint294.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment295 = createNode("HAnimSegment");
HAnimSegment295.name = "r_index_metacarpal";
HAnimSegment295.DEF = "hanim_r_index_metacarpal";
HAnimJoint294.children = new MFNode();

HAnimJoint294.children[0] = HAnimSegment295;

HAnimJoint HAnimJoint296 = createNode("HAnimJoint");
HAnimJoint296.name = "r_index1";
HAnimJoint296.DEF = "hanim_r_index1";
HAnimJoint296.center = new SFVec3f(new float[-0.1983,0.7815,-0.028]);
HAnimJoint296.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint296.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment297 = createNode("HAnimSegment");
HAnimSegment297.name = "r_index_proximal";
HAnimSegment297.DEF = "hanim_r_index_proximal";
HAnimJoint296.children = new MFNode();

HAnimJoint296.children[0] = HAnimSegment297;

HAnimJoint HAnimJoint298 = createNode("HAnimJoint");
HAnimJoint298.name = "r_index2";
HAnimJoint298.DEF = "hanim_r_index2";
HAnimJoint298.center = new SFVec3f(new float[-0.2017,0.7363,-0.0248]);
HAnimJoint298.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint298.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment299 = createNode("HAnimSegment");
HAnimSegment299.name = "r_index_middle";
HAnimSegment299.DEF = "hanim_r_index_middle";
HAnimJoint298.children = new MFNode();

HAnimJoint298.children[0] = HAnimSegment299;

HAnimJoint HAnimJoint300 = createNode("HAnimJoint");
HAnimJoint300.name = "r_index3";
HAnimJoint300.DEF = "hanim_r_index3";
HAnimJoint300.center = new SFVec3f(new float[-0.2028,0.7139,-0.0236]);
HAnimJoint300.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint300.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment301 = createNode("HAnimSegment");
HAnimSegment301.name = "r_index_distal";
HAnimSegment301.DEF = "hanim_r_index_distal";
HAnimSite HAnimSite302 = createNode("HAnimSite");
HAnimSite302.name = "r_index_distal_tip";
HAnimSite302.DEF = "hanim_r_index_distal_tip";
HAnimSite302.translation = new SFVec3f(new float[-0.198,0.6883,-0.018]);
HAnimSegment301.children = new MFNode();

HAnimSegment301.children[0] = HAnimSite302;

HAnimSite HAnimSite303 = createNode("HAnimSite");
HAnimSite303.name = "r_dactylion_pt";
HAnimSite303.DEF = "hanim_r_dactylion_pt";
HAnimSite303.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
HAnimSegment301.children[1] = HAnimSite303;

HAnimJoint300.children = new MFNode();

HAnimJoint300.children[0] = HAnimSegment301;

HAnimJoint298.children[1] = HAnimJoint300;

HAnimJoint296.children[1] = HAnimJoint298;

HAnimJoint294.children[1] = HAnimJoint296;

HAnimJoint280.children[2] = HAnimJoint294;

HAnimJoint HAnimJoint304 = createNode("HAnimJoint");
HAnimJoint304.name = "r_middle0";
HAnimJoint304.DEF = "hanim_r_middle0";
HAnimJoint304.center = new SFVec3f(new float[-0.1987,0.8029,-0.053]);
HAnimJoint304.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint304.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment305 = createNode("HAnimSegment");
HAnimSegment305.name = "r_middle_metacarpal";
HAnimSegment305.DEF = "hanim_r_middle_metacarpal";
HAnimJoint304.children = new MFNode();

HAnimJoint304.children[0] = HAnimSegment305;

HAnimJoint HAnimJoint306 = createNode("HAnimJoint");
HAnimJoint306.name = "r_middle1";
HAnimJoint306.DEF = "hanim_r_middle1";
HAnimJoint306.center = new SFVec3f(new float[-0.1987,0.7818,-0.053]);
HAnimJoint306.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint306.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment307 = createNode("HAnimSegment");
HAnimSegment307.name = "r_middle_proximal";
HAnimSegment307.DEF = "hanim_r_middle_proximal";
HAnimJoint306.children = new MFNode();

HAnimJoint306.children[0] = HAnimSegment307;

HAnimJoint HAnimJoint308 = createNode("HAnimJoint");
HAnimJoint308.name = "r_middle2";
HAnimJoint308.DEF = "hanim_r_middle2";
HAnimJoint308.center = new SFVec3f(new float[-0.2013,0.7273,-0.0503]);
HAnimJoint308.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint308.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment309 = createNode("HAnimSegment");
HAnimSegment309.name = "r_middle_middle";
HAnimSegment309.DEF = "hanim_r_middle_middle";
HAnimJoint308.children = new MFNode();

HAnimJoint308.children[0] = HAnimSegment309;

HAnimJoint HAnimJoint310 = createNode("HAnimJoint");
HAnimJoint310.name = "r_middle3";
HAnimJoint310.DEF = "hanim_r_middle3";
HAnimJoint310.center = new SFVec3f(new float[-0.2026,0.7011,-0.0494]);
HAnimJoint310.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint310.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment311 = createNode("HAnimSegment");
HAnimSegment311.name = "r_middle_distal";
HAnimSegment311.DEF = "hanim_r_middle_distal";
HAnimSite HAnimSite312 = createNode("HAnimSite");
HAnimSite312.name = "r_middle_distal_tip";
HAnimSite312.DEF = "hanim_r_middle_distal_tip";
HAnimSite312.translation = new SFVec3f(new float[-0.1969,0.6758,-0.0427]);
HAnimSegment311.children = new MFNode();

HAnimSegment311.children[0] = HAnimSite312;

HAnimJoint310.children = new MFNode();

HAnimJoint310.children[0] = HAnimSegment311;

HAnimJoint308.children[1] = HAnimJoint310;

HAnimJoint306.children[1] = HAnimJoint308;

HAnimJoint304.children[1] = HAnimJoint306;

HAnimJoint280.children[3] = HAnimJoint304;

HAnimJoint HAnimJoint313 = createNode("HAnimJoint");
HAnimJoint313.name = "r_ring0";
HAnimJoint313.DEF = "hanim_r_ring0";
HAnimJoint313.center = new SFVec3f(new float[-0.1956,0.8019,-0.0794]);
HAnimJoint313.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint313.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment314 = createNode("HAnimSegment");
HAnimSegment314.name = "r_ring_metacarpal";
HAnimSegment314.DEF = "hanim_r_ring_metacarpal";
HAnimJoint313.children = new MFNode();

HAnimJoint313.children[0] = HAnimSegment314;

HAnimJoint HAnimJoint315 = createNode("HAnimJoint");
HAnimJoint315.name = "r_ring1";
HAnimJoint315.DEF = "hanim_r_ring1";
HAnimJoint315.center = new SFVec3f(new float[-0.1956,0.7815,-0.0794]);
HAnimJoint315.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint315.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment316 = createNode("HAnimSegment");
HAnimSegment316.name = "r_ring_proximal";
HAnimSegment316.DEF = "hanim_r_ring_proximal";
HAnimJoint315.children = new MFNode();

HAnimJoint315.children[0] = HAnimSegment316;

HAnimJoint HAnimJoint317 = createNode("HAnimJoint");
HAnimJoint317.name = "r_ring2";
HAnimJoint317.DEF = "hanim_r_ring2";
HAnimJoint317.center = new SFVec3f(new float[-0.1973,0.7287,-0.0777]);
HAnimJoint317.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint317.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment318 = createNode("HAnimSegment");
HAnimSegment318.name = "r_ring_middle";
HAnimSegment318.DEF = "hanim_r_ring_middle";
HAnimJoint317.children = new MFNode();

HAnimJoint317.children[0] = HAnimSegment318;

HAnimJoint HAnimJoint319 = createNode("HAnimJoint");
HAnimJoint319.name = "r_ring3";
HAnimJoint319.DEF = "hanim_r_ring3";
HAnimJoint319.center = new SFVec3f(new float[-0.1983,0.7045,-0.0767]);
HAnimJoint319.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint319.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment320 = createNode("HAnimSegment");
HAnimSegment320.name = "r_ring_distal";
HAnimSegment320.DEF = "hanim_r_ring_distal";
HAnimSite HAnimSite321 = createNode("HAnimSite");
HAnimSite321.name = "r_ring_distal_tip";
HAnimSite321.DEF = "hanim_r_ring_distal_tip";
HAnimSite321.translation = new SFVec3f(new float[-0.1934,0.6778,-0.0693]);
HAnimSegment320.children = new MFNode();

HAnimSegment320.children[0] = HAnimSite321;

HAnimJoint319.children = new MFNode();

HAnimJoint319.children[0] = HAnimSegment320;

HAnimJoint317.children[1] = HAnimJoint319;

HAnimJoint315.children[1] = HAnimJoint317;

HAnimJoint313.children[1] = HAnimJoint315;

HAnimJoint280.children[4] = HAnimJoint313;

HAnimJoint HAnimJoint322 = createNode("HAnimJoint");
HAnimJoint322.name = "r_pinky0";
HAnimJoint322.DEF = "hanim_r_pinky0";
HAnimJoint322.center = new SFVec3f(new float[-0.1925,0.8066,-0.1036]);
HAnimJoint322.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint322.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment323 = createNode("HAnimSegment");
HAnimSegment323.name = "r_pinky_metacarpal";
HAnimSegment323.DEF = "hanim_r_pinky_metacarpal";
HAnimJoint322.children = new MFNode();

HAnimJoint322.children[0] = HAnimSegment323;

HAnimJoint HAnimJoint324 = createNode("HAnimJoint");
HAnimJoint324.name = "r_pinky1";
HAnimJoint324.DEF = "hanim_r_pinky1";
HAnimJoint324.center = new SFVec3f(new float[-0.1925,0.7866,-0.1036]);
HAnimJoint324.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint324.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment325 = createNode("HAnimSegment");
HAnimSegment325.name = "r_pinky_proximal";
HAnimSegment325.DEF = "hanim_r_pinky_proximal";
HAnimJoint324.children = new MFNode();

HAnimJoint324.children[0] = HAnimSegment325;

HAnimJoint HAnimJoint326 = createNode("HAnimJoint");
HAnimJoint326.name = "r_pinky2";
HAnimJoint326.DEF = "hanim_r_pinky2";
HAnimJoint326.center = new SFVec3f(new float[-0.1938,0.7452,-0.1024]);
HAnimJoint326.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint326.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment327 = createNode("HAnimSegment");
HAnimSegment327.name = "r_pinky_middle";
HAnimSegment327.DEF = "hanim_r_pinky_middle";
HAnimJoint326.children = new MFNode();

HAnimJoint326.children[0] = HAnimSegment327;

HAnimJoint HAnimJoint328 = createNode("HAnimJoint");
HAnimJoint328.name = "r_pinky3";
HAnimJoint328.DEF = "hanim_r_pinky3";
HAnimJoint328.center = new SFVec3f(new float[-0.1948,0.7277,-0.1017]);
HAnimJoint328.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint328.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment329 = createNode("HAnimSegment");
HAnimSegment329.name = "r_pinky_distal";
HAnimSegment329.DEF = "hanim_r_pinky_distal";
HAnimSite HAnimSite330 = createNode("HAnimSite");
HAnimSite330.name = "r_pinky_distal_tip";
HAnimSite330.DEF = "hanim_r_pinky_distal_tip";
HAnimSite330.translation = new SFVec3f(new float[-0.1938,0.7035,-0.0949]);
HAnimSegment329.children = new MFNode();

HAnimSegment329.children[0] = HAnimSite330;

HAnimJoint328.children = new MFNode();

HAnimJoint328.children[0] = HAnimSegment329;

HAnimJoint326.children[1] = HAnimJoint328;

HAnimJoint324.children[1] = HAnimJoint326;

HAnimJoint322.children[1] = HAnimJoint324;

HAnimJoint280.children[5] = HAnimJoint322;

HAnimJoint274.children[1] = HAnimJoint280;

HAnimJoint271.children[1] = HAnimJoint274;

HAnimJoint269.children[1] = HAnimJoint271;

HAnimJoint263.children[1] = HAnimJoint269;

HAnimJoint143.children[3] = HAnimJoint263;

HAnimJoint141.children[1] = HAnimJoint143;

HAnimJoint139.children[1] = HAnimJoint141;

HAnimJoint137.children[1] = HAnimJoint139;

HAnimJoint135.children[1] = HAnimJoint137;

HAnimJoint133.children[1] = HAnimJoint135;

HAnimJoint131.children[1] = HAnimJoint133;

HAnimJoint129.children[1] = HAnimJoint131;

HAnimJoint125.children[1] = HAnimJoint129;

HAnimJoint122.children[1] = HAnimJoint125;

HAnimJoint120.children[1] = HAnimJoint122;

HAnimJoint118.children[1] = HAnimJoint120;

HAnimJoint116.children[1] = HAnimJoint118;

HAnimJoint111.children[1] = HAnimJoint116;

HAnimJoint109.children[1] = HAnimJoint111;

HAnimJoint107.children[1] = HAnimJoint109;

HAnimJoint103.children[1] = HAnimJoint107;

HAnimJoint44.children[2] = HAnimJoint103;

HAnimHumanoid43.joints = new MFNode();

HAnimHumanoid43.joints[0] = HAnimJoint44;

HAnimSite HAnimSite331 = createNode("HAnimSite");
HAnimSite331.name = "l_inclined_view";
HAnimSite331.DEF = "hanim_l_inclined_view";
HAnimSite331.rotation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
HAnimSite331.translation = new SFVec3f(new float[1.62,1.05,2.06]);
Viewpoint Viewpoint332 = createNode("Viewpoint");
Viewpoint332.DEF = "hanim_l_inclined_viewpoint";
Viewpoint332.description = "left inclined";
Viewpoint332.position = new SFVec3f(new float[0,0,0]);
HAnimSite331.children = new MFNode();

HAnimSite331.children[0] = Viewpoint332;

HAnimHumanoid43.viewpoints[1] = HAnimSite331;

HAnimSite HAnimSite333 = createNode("HAnimSite");
HAnimSite333.name = "r_inclined_view";
HAnimSite333.DEF = "hanim_r_inclined_view";
HAnimSite333.rotation = new SFRotation(new float[-0.113,-0.993,0.0347,0.671]);
HAnimSite333.translation = new SFVec3f(new float[-1.62,1.05,2.06]);
Viewpoint Viewpoint334 = createNode("Viewpoint");
Viewpoint334.DEF = "hanim_r_inclined_viewpoint";
Viewpoint334.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint334.description = "right inclined";
Viewpoint334.position = new SFVec3f(new float[0,0,0]);
HAnimSite333.children = new MFNode();

HAnimSite333.children[0] = Viewpoint334;

HAnimHumanoid43.viewpoints[2] = HAnimSite333;

HAnimSite HAnimSite335 = createNode("HAnimSite");
HAnimSite335.name = "front_view";
HAnimSite335.DEF = "hanim_front_view";
HAnimSite335.translation = new SFVec3f(new float[0,0.85,2.58]);
Viewpoint Viewpoint336 = createNode("Viewpoint");
Viewpoint336.DEF = "hanim_front_viewpoint";
Viewpoint336.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint336.description = "front";
Viewpoint336.position = new SFVec3f(new float[0,0,0]);
HAnimSite335.children = new MFNode();

HAnimSite335.children[0] = Viewpoint336;

HAnimHumanoid43.viewpoints[3] = HAnimSite335;

HAnimSite HAnimSite337 = createNode("HAnimSite");
HAnimSite337.name = "back_view";
HAnimSite337.DEF = "hanim_back_view";
HAnimSite337.rotation = new SFRotation(new float[0,1,0,3.14]);
HAnimSite337.translation = new SFVec3f(new float[0,0.85,-2.58]);
Viewpoint Viewpoint338 = createNode("Viewpoint");
Viewpoint338.DEF = "hanim_back_viewpoint";
Viewpoint338.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint338.description = "back";
Viewpoint338.position = new SFVec3f(new float[0,0,0]);
HAnimSite337.children = new MFNode();

HAnimSite337.children[0] = Viewpoint338;

HAnimHumanoid43.viewpoints[4] = HAnimSite337;

HAnimSite HAnimSite339 = createNode("HAnimSite");
HAnimSite339.name = "l_side_view";
HAnimSite339.DEF = "hanim_l_side_view";
HAnimSite339.rotation = new SFRotation(new float[0,1,0,1.5708]);
HAnimSite339.translation = new SFVec3f(new float[2.6,0.854,0]);
Viewpoint Viewpoint340 = createNode("Viewpoint");
Viewpoint340.DEF = "hanim_l_side_viewpoint";
Viewpoint340.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint340.description = "left side";
Viewpoint340.position = new SFVec3f(new float[0,0,0]);
HAnimSite339.children = new MFNode();

HAnimSite339.children[0] = Viewpoint340;

HAnimHumanoid43.viewpoints[5] = HAnimSite339;

HAnimSite HAnimSite341 = createNode("HAnimSite");
HAnimSite341.name = "Top_view";
HAnimSite341.DEF = "hanim_Top_view";
HAnimSite341.rotation = new SFRotation(new float[1,0,0,-1.57]);
HAnimSite341.translation = new SFVec3f(new float[0,3.5,0]);
Viewpoint Viewpoint342 = createNode("Viewpoint");
Viewpoint342.DEF = "hanim_Top_viewpoint";
Viewpoint342.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint342.description = "Top";
Viewpoint342.position = new SFVec3f(new float[0,0,0]);
HAnimSite341.children = new MFNode();

HAnimSite341.children[0] = Viewpoint342;

HAnimHumanoid43.viewpoints[6] = HAnimSite341;

HAnimSite HAnimSite343 = createNode("HAnimSite");
HAnimSite343.name = "front_close_view";
HAnimSite343.DEF = "hanim_front_close_view";
HAnimSite343.translation = new SFVec3f(new float[0,0.854,1.575]);
Viewpoint Viewpoint344 = createNode("Viewpoint");
Viewpoint344.DEF = "hanim_front_close_viewpoint";
Viewpoint344.centerOfRotation = new SFVec3f(new float[0,0,1.575]);
Viewpoint344.description = "front close";
Viewpoint344.position = new SFVec3f(new float[0,0,0]);
HAnimSite343.children = new MFNode();

HAnimSite343.children[0] = Viewpoint344;

HAnimHumanoid43.viewpoints[7] = HAnimSite343;

HAnimSite HAnimSite345 = createNode("HAnimSite");
HAnimSite345.name = "side_close_view";
HAnimSite345.DEF = "hanim_side_close_view";
HAnimSite345.rotation = new SFRotation(new float[0,1,0,1.5708]);
HAnimSite345.translation = new SFVec3f(new float[1.56,0.854,0]);
Viewpoint Viewpoint346 = createNode("Viewpoint");
Viewpoint346.DEF = "hanim_side_close_viewpoint";
Viewpoint346.centerOfRotation = new SFVec3f(new float[1.6,0,0]);
Viewpoint346.description = "side close";
Viewpoint346.position = new SFVec3f(new float[0,0,0]);
HAnimSite345.children = new MFNode();

HAnimSite345.children[0] = Viewpoint346;

HAnimHumanoid43.viewpoints[8] = HAnimSite345;

HAnimSite HAnimSite347 = createNode("HAnimSite");
HAnimSite347.name = "head_front_close_view";
HAnimSite347.DEF = "hanim_head_front_close_view";
HAnimSite347.translation = new SFVec3f(new float[0,1.5,1]);
Viewpoint Viewpoint348 = createNode("Viewpoint");
Viewpoint348.DEF = "hanim_head_front_close_viewpoint";
Viewpoint348.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint348.description = "head front close";
Viewpoint348.position = new SFVec3f(new float[0,0,0]);
HAnimSite347.children = new MFNode();

HAnimSite347.children[0] = Viewpoint348;

HAnimHumanoid43.viewpoints[9] = HAnimSite347;

HAnimSite HAnimSite349 = createNode("HAnimSite");
HAnimSite349.name = "chest_front_close_view";
HAnimSite349.DEF = "hanim_chest_front_close_view";
HAnimSite349.translation = new SFVec3f(new float[0,1.2,1]);
Viewpoint Viewpoint350 = createNode("Viewpoint");
Viewpoint350.DEF = "hanim_chest_front_close_viewpoint";
Viewpoint350.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint350.description = "chest front close";
Viewpoint350.position = new SFVec3f(new float[0,0,0]);
HAnimSite349.children = new MFNode();

HAnimSite349.children[0] = Viewpoint350;

HAnimHumanoid43.viewpoints[10] = HAnimSite349;

HAnimSite HAnimSite351 = createNode("HAnimSite");
HAnimSite351.name = "pelvis_front_close_view";
HAnimSite351.DEF = "hanim_pelvis_front_close_view";
HAnimSite351.translation = new SFVec3f(new float[0,0.8,1]);
Viewpoint Viewpoint352 = createNode("Viewpoint");
Viewpoint352.DEF = "hanim_pelvis_front_close_viewpoint";
Viewpoint352.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint352.description = "pelvis front close";
Viewpoint352.position = new SFVec3f(new float[0,0,0]);
HAnimSite351.children = new MFNode();

HAnimSite351.children[0] = Viewpoint352;

HAnimHumanoid43.viewpoints[11] = HAnimSite351;

HAnimSite HAnimSite353 = createNode("HAnimSite");
HAnimSite353.name = "knees_front_close_view";
HAnimSite353.DEF = "hanim_knees_front_close_view";
HAnimSite353.translation = new SFVec3f(new float[0,0.4,1]);
Viewpoint Viewpoint354 = createNode("Viewpoint");
Viewpoint354.DEF = "hanim_knees_front_close_viewpoint";
Viewpoint354.centerOfRotation = new SFVec3f(new float[0,0.4,0]);
Viewpoint354.description = "knees front close";
Viewpoint354.position = new SFVec3f(new float[0,0,0]);
HAnimSite353.children = new MFNode();

HAnimSite353.children[0] = Viewpoint354;

HAnimHumanoid43.viewpoints[12] = HAnimSite353;

HAnimSite HAnimSite355 = createNode("HAnimSite");
HAnimSite355.name = "feet_front_close_view";
HAnimSite355.DEF = "hanim_feet_front_close_view";
HAnimSite355.translation = new SFVec3f(new float[0,0,1]);
Viewpoint Viewpoint356 = createNode("Viewpoint");
Viewpoint356.DEF = "hanim_feet_front_close_viewpoint";
Viewpoint356.description = "feet front close";
Viewpoint356.position = new SFVec3f(new float[0,0,0]);
HAnimSite355.children = new MFNode();

HAnimSite355.children[0] = Viewpoint356;

HAnimHumanoid43.viewpoints[13] = HAnimSite355;

HAnimSite HAnimSite357 = createNode("HAnimSite");
HAnimSite357.name = "eye_level_view";
HAnimSite357.DEF = "hanim_eye_level_view";
HAnimSite357.translation = new SFVec3f(new float[0,1.6332,0.0502]);
Viewpoint Viewpoint358 = createNode("Viewpoint");
Viewpoint358.DEF = "hanim_eye_level_viewpoint";
Viewpoint358.description = "eye level looking forward";
Viewpoint358.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint358.position = new SFVec3f(new float[0,0,0]);
HAnimSite357.children = new MFNode();

HAnimSite357.children[0] = Viewpoint358;

HAnimHumanoid43.viewpoints[14] = HAnimSite357;

HAnimSite HAnimSite359 = createNode("HAnimSite");
HAnimSite359.USE = "hanim_l_eyeball_site_view";
HAnimHumanoid43.viewpoints[15] = HAnimSite359;

HAnimSite HAnimSite360 = createNode("HAnimSite");
HAnimSite360.USE = "hanim_r_eyeball_site_view";
HAnimHumanoid43.viewpoints[16] = HAnimSite360;

HAnimSite HAnimSite361 = createNode("HAnimSite");
HAnimSite361.USE = "hanim_l_hand_front_view";
HAnimHumanoid43.viewpoints[17] = HAnimSite361;

HAnimSite HAnimSite362 = createNode("HAnimSite");
HAnimSite362.USE = "hanim_r_hand_front_view";
HAnimHumanoid43.viewpoints[18] = HAnimSite362;

HAnimJoint HAnimJoint363 = createNode("HAnimJoint");
HAnimJoint363.USE = "hanim_humanoid_root";
HAnimHumanoid43.joints[19] = HAnimJoint363;

HAnimJoint HAnimJoint364 = createNode("HAnimJoint");
HAnimJoint364.USE = "hanim_sacroiliac";
HAnimHumanoid43.joints[20] = HAnimJoint364;

HAnimJoint HAnimJoint365 = createNode("HAnimJoint");
HAnimJoint365.USE = "hanim_vl5";
HAnimHumanoid43.joints[21] = HAnimJoint365;

HAnimJoint HAnimJoint366 = createNode("HAnimJoint");
HAnimJoint366.USE = "hanim_vl4";
HAnimHumanoid43.joints[22] = HAnimJoint366;

HAnimJoint HAnimJoint367 = createNode("HAnimJoint");
HAnimJoint367.USE = "hanim_vl3";
HAnimHumanoid43.joints[23] = HAnimJoint367;

HAnimJoint HAnimJoint368 = createNode("HAnimJoint");
HAnimJoint368.USE = "hanim_vl2";
HAnimHumanoid43.joints[24] = HAnimJoint368;

HAnimJoint HAnimJoint369 = createNode("HAnimJoint");
HAnimJoint369.USE = "hanim_vl1";
HAnimHumanoid43.joints[25] = HAnimJoint369;

HAnimJoint HAnimJoint370 = createNode("HAnimJoint");
HAnimJoint370.USE = "hanim_vt12";
HAnimHumanoid43.joints[26] = HAnimJoint370;

HAnimJoint HAnimJoint371 = createNode("HAnimJoint");
HAnimJoint371.USE = "hanim_vt11";
HAnimHumanoid43.joints[27] = HAnimJoint371;

HAnimJoint HAnimJoint372 = createNode("HAnimJoint");
HAnimJoint372.USE = "hanim_vt10";
HAnimHumanoid43.joints[28] = HAnimJoint372;

HAnimJoint HAnimJoint373 = createNode("HAnimJoint");
HAnimJoint373.USE = "hanim_vt9";
HAnimHumanoid43.joints[29] = HAnimJoint373;

HAnimJoint HAnimJoint374 = createNode("HAnimJoint");
HAnimJoint374.USE = "hanim_vt8";
HAnimHumanoid43.joints[30] = HAnimJoint374;

HAnimJoint HAnimJoint375 = createNode("HAnimJoint");
HAnimJoint375.USE = "hanim_vt7";
HAnimHumanoid43.joints[31] = HAnimJoint375;

HAnimJoint HAnimJoint376 = createNode("HAnimJoint");
HAnimJoint376.USE = "hanim_vt6";
HAnimHumanoid43.joints[32] = HAnimJoint376;

HAnimJoint HAnimJoint377 = createNode("HAnimJoint");
HAnimJoint377.USE = "hanim_vt5";
HAnimHumanoid43.joints[33] = HAnimJoint377;

HAnimJoint HAnimJoint378 = createNode("HAnimJoint");
HAnimJoint378.USE = "hanim_vt4";
HAnimHumanoid43.joints[34] = HAnimJoint378;

HAnimJoint HAnimJoint379 = createNode("HAnimJoint");
HAnimJoint379.USE = "hanim_vt3";
HAnimHumanoid43.joints[35] = HAnimJoint379;

HAnimJoint HAnimJoint380 = createNode("HAnimJoint");
HAnimJoint380.USE = "hanim_vt2";
HAnimHumanoid43.joints[36] = HAnimJoint380;

HAnimJoint HAnimJoint381 = createNode("HAnimJoint");
HAnimJoint381.USE = "hanim_vt1";
HAnimHumanoid43.joints[37] = HAnimJoint381;

HAnimJoint HAnimJoint382 = createNode("HAnimJoint");
HAnimJoint382.USE = "hanim_vc7";
HAnimHumanoid43.joints[38] = HAnimJoint382;

HAnimJoint HAnimJoint383 = createNode("HAnimJoint");
HAnimJoint383.USE = "hanim_vc6";
HAnimHumanoid43.joints[39] = HAnimJoint383;

HAnimJoint HAnimJoint384 = createNode("HAnimJoint");
HAnimJoint384.USE = "hanim_vc5";
HAnimHumanoid43.joints[40] = HAnimJoint384;

HAnimJoint HAnimJoint385 = createNode("HAnimJoint");
HAnimJoint385.USE = "hanim_vc4";
HAnimHumanoid43.joints[41] = HAnimJoint385;

HAnimJoint HAnimJoint386 = createNode("HAnimJoint");
HAnimJoint386.USE = "hanim_vc3";
HAnimHumanoid43.joints[42] = HAnimJoint386;

HAnimJoint HAnimJoint387 = createNode("HAnimJoint");
HAnimJoint387.USE = "hanim_vc2";
HAnimHumanoid43.joints[43] = HAnimJoint387;

HAnimJoint HAnimJoint388 = createNode("HAnimJoint");
HAnimJoint388.USE = "hanim_vc1";
HAnimHumanoid43.joints[44] = HAnimJoint388;

HAnimJoint HAnimJoint389 = createNode("HAnimJoint");
HAnimJoint389.USE = "hanim_skullbase";
HAnimHumanoid43.joints[45] = HAnimJoint389;

HAnimJoint HAnimJoint390 = createNode("HAnimJoint");
HAnimJoint390.USE = "hanim_temporomandibular";
HAnimHumanoid43.joints[46] = HAnimJoint390;

HAnimJoint HAnimJoint391 = createNode("HAnimJoint");
HAnimJoint391.USE = "hanim_l_acromioclavicular";
HAnimHumanoid43.joints[47] = HAnimJoint391;

HAnimJoint HAnimJoint392 = createNode("HAnimJoint");
HAnimJoint392.USE = "hanim_r_acromioclavicular";
HAnimHumanoid43.joints[48] = HAnimJoint392;

HAnimJoint HAnimJoint393 = createNode("HAnimJoint");
HAnimJoint393.USE = "hanim_l_ankle";
HAnimHumanoid43.joints[49] = HAnimJoint393;

HAnimJoint HAnimJoint394 = createNode("HAnimJoint");
HAnimJoint394.USE = "hanim_r_ankle";
HAnimHumanoid43.joints[50] = HAnimJoint394;

HAnimJoint HAnimJoint395 = createNode("HAnimJoint");
HAnimJoint395.USE = "hanim_l_elbow";
HAnimHumanoid43.joints[51] = HAnimJoint395;

HAnimJoint HAnimJoint396 = createNode("HAnimJoint");
HAnimJoint396.USE = "hanim_r_elbow";
HAnimHumanoid43.joints[52] = HAnimJoint396;

HAnimJoint HAnimJoint397 = createNode("HAnimJoint");
HAnimJoint397.USE = "hanim_l_eyeball_joint";
HAnimHumanoid43.joints[53] = HAnimJoint397;

HAnimJoint HAnimJoint398 = createNode("HAnimJoint");
HAnimJoint398.USE = "hanim_r_eyeball_joint";
HAnimHumanoid43.joints[54] = HAnimJoint398;

HAnimJoint HAnimJoint399 = createNode("HAnimJoint");
HAnimJoint399.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid43.joints[55] = HAnimJoint399;

HAnimJoint HAnimJoint400 = createNode("HAnimJoint");
HAnimJoint400.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid43.joints[56] = HAnimJoint400;

HAnimJoint HAnimJoint401 = createNode("HAnimJoint");
HAnimJoint401.USE = "hanim_l_eyelid_joint";
HAnimHumanoid43.joints[57] = HAnimJoint401;

HAnimJoint HAnimJoint402 = createNode("HAnimJoint");
HAnimJoint402.USE = "hanim_r_eyelid_joint";
HAnimHumanoid43.joints[58] = HAnimJoint402;

HAnimJoint HAnimJoint403 = createNode("HAnimJoint");
HAnimJoint403.USE = "hanim_l_hip";
HAnimHumanoid43.joints[59] = HAnimJoint403;

HAnimJoint HAnimJoint404 = createNode("HAnimJoint");
HAnimJoint404.USE = "hanim_r_hip";
HAnimHumanoid43.joints[60] = HAnimJoint404;

HAnimJoint HAnimJoint405 = createNode("HAnimJoint");
HAnimJoint405.USE = "hanim_l_index0";
HAnimHumanoid43.joints[61] = HAnimJoint405;

HAnimJoint HAnimJoint406 = createNode("HAnimJoint");
HAnimJoint406.USE = "hanim_r_index0";
HAnimHumanoid43.joints[62] = HAnimJoint406;

HAnimJoint HAnimJoint407 = createNode("HAnimJoint");
HAnimJoint407.USE = "hanim_l_index1";
HAnimHumanoid43.joints[63] = HAnimJoint407;

HAnimJoint HAnimJoint408 = createNode("HAnimJoint");
HAnimJoint408.USE = "hanim_r_index1";
HAnimHumanoid43.joints[64] = HAnimJoint408;

HAnimJoint HAnimJoint409 = createNode("HAnimJoint");
HAnimJoint409.USE = "hanim_l_index2";
HAnimHumanoid43.joints[65] = HAnimJoint409;

HAnimJoint HAnimJoint410 = createNode("HAnimJoint");
HAnimJoint410.USE = "hanim_r_index2";
HAnimHumanoid43.joints[66] = HAnimJoint410;

HAnimJoint HAnimJoint411 = createNode("HAnimJoint");
HAnimJoint411.USE = "hanim_l_index3";
HAnimHumanoid43.joints[67] = HAnimJoint411;

HAnimJoint HAnimJoint412 = createNode("HAnimJoint");
HAnimJoint412.USE = "hanim_r_index3";
HAnimHumanoid43.joints[68] = HAnimJoint412;

HAnimJoint HAnimJoint413 = createNode("HAnimJoint");
HAnimJoint413.USE = "hanim_l_knee";
HAnimHumanoid43.joints[69] = HAnimJoint413;

HAnimJoint HAnimJoint414 = createNode("HAnimJoint");
HAnimJoint414.USE = "hanim_r_knee";
HAnimHumanoid43.joints[70] = HAnimJoint414;

HAnimJoint HAnimJoint415 = createNode("HAnimJoint");
HAnimJoint415.USE = "hanim_l_metatarsal";
HAnimHumanoid43.joints[71] = HAnimJoint415;

HAnimJoint HAnimJoint416 = createNode("HAnimJoint");
HAnimJoint416.USE = "hanim_r_metatarsal";
HAnimHumanoid43.joints[72] = HAnimJoint416;

HAnimJoint HAnimJoint417 = createNode("HAnimJoint");
HAnimJoint417.USE = "hanim_l_middle0";
HAnimHumanoid43.joints[73] = HAnimJoint417;

HAnimJoint HAnimJoint418 = createNode("HAnimJoint");
HAnimJoint418.USE = "hanim_r_middle0";
HAnimHumanoid43.joints[74] = HAnimJoint418;

HAnimJoint HAnimJoint419 = createNode("HAnimJoint");
HAnimJoint419.USE = "hanim_l_middle1";
HAnimHumanoid43.joints[75] = HAnimJoint419;

HAnimJoint HAnimJoint420 = createNode("HAnimJoint");
HAnimJoint420.USE = "hanim_r_middle1";
HAnimHumanoid43.joints[76] = HAnimJoint420;

HAnimJoint HAnimJoint421 = createNode("HAnimJoint");
HAnimJoint421.USE = "hanim_l_middle2";
HAnimHumanoid43.joints[77] = HAnimJoint421;

HAnimJoint HAnimJoint422 = createNode("HAnimJoint");
HAnimJoint422.USE = "hanim_r_middle2";
HAnimHumanoid43.joints[78] = HAnimJoint422;

HAnimJoint HAnimJoint423 = createNode("HAnimJoint");
HAnimJoint423.USE = "hanim_l_middle3";
HAnimHumanoid43.joints[79] = HAnimJoint423;

HAnimJoint HAnimJoint424 = createNode("HAnimJoint");
HAnimJoint424.USE = "hanim_r_middle3";
HAnimHumanoid43.joints[80] = HAnimJoint424;

HAnimJoint HAnimJoint425 = createNode("HAnimJoint");
HAnimJoint425.USE = "hanim_l_midtarsal";
HAnimHumanoid43.joints[81] = HAnimJoint425;

HAnimJoint HAnimJoint426 = createNode("HAnimJoint");
HAnimJoint426.USE = "hanim_r_midtarsal";
HAnimHumanoid43.joints[82] = HAnimJoint426;

HAnimJoint HAnimJoint427 = createNode("HAnimJoint");
HAnimJoint427.USE = "hanim_l_pinky0";
HAnimHumanoid43.joints[83] = HAnimJoint427;

HAnimJoint HAnimJoint428 = createNode("HAnimJoint");
HAnimJoint428.USE = "hanim_r_pinky0";
HAnimHumanoid43.joints[84] = HAnimJoint428;

HAnimJoint HAnimJoint429 = createNode("HAnimJoint");
HAnimJoint429.USE = "hanim_l_pinky1";
HAnimHumanoid43.joints[85] = HAnimJoint429;

HAnimJoint HAnimJoint430 = createNode("HAnimJoint");
HAnimJoint430.USE = "hanim_r_pinky1";
HAnimHumanoid43.joints[86] = HAnimJoint430;

HAnimJoint HAnimJoint431 = createNode("HAnimJoint");
HAnimJoint431.USE = "hanim_l_pinky2";
HAnimHumanoid43.joints[87] = HAnimJoint431;

HAnimJoint HAnimJoint432 = createNode("HAnimJoint");
HAnimJoint432.USE = "hanim_r_pinky2";
HAnimHumanoid43.joints[88] = HAnimJoint432;

HAnimJoint HAnimJoint433 = createNode("HAnimJoint");
HAnimJoint433.USE = "hanim_l_pinky3";
HAnimHumanoid43.joints[89] = HAnimJoint433;

HAnimJoint HAnimJoint434 = createNode("HAnimJoint");
HAnimJoint434.USE = "hanim_r_pinky3";
HAnimHumanoid43.joints[90] = HAnimJoint434;

HAnimJoint HAnimJoint435 = createNode("HAnimJoint");
HAnimJoint435.USE = "hanim_l_ring0";
HAnimHumanoid43.joints[91] = HAnimJoint435;

HAnimJoint HAnimJoint436 = createNode("HAnimJoint");
HAnimJoint436.USE = "hanim_r_ring0";
HAnimHumanoid43.joints[92] = HAnimJoint436;

HAnimJoint HAnimJoint437 = createNode("HAnimJoint");
HAnimJoint437.USE = "hanim_l_ring1";
HAnimHumanoid43.joints[93] = HAnimJoint437;

HAnimJoint HAnimJoint438 = createNode("HAnimJoint");
HAnimJoint438.USE = "hanim_r_ring1";
HAnimHumanoid43.joints[94] = HAnimJoint438;

HAnimJoint HAnimJoint439 = createNode("HAnimJoint");
HAnimJoint439.USE = "hanim_l_ring2";
HAnimHumanoid43.joints[95] = HAnimJoint439;

HAnimJoint HAnimJoint440 = createNode("HAnimJoint");
HAnimJoint440.USE = "hanim_r_ring2";
HAnimHumanoid43.joints[96] = HAnimJoint440;

HAnimJoint HAnimJoint441 = createNode("HAnimJoint");
HAnimJoint441.USE = "hanim_l_ring3";
HAnimHumanoid43.joints[97] = HAnimJoint441;

HAnimJoint HAnimJoint442 = createNode("HAnimJoint");
HAnimJoint442.USE = "hanim_r_ring3";
HAnimHumanoid43.joints[98] = HAnimJoint442;

HAnimJoint HAnimJoint443 = createNode("HAnimJoint");
HAnimJoint443.USE = "hanim_l_shoulder";
HAnimHumanoid43.joints[99] = HAnimJoint443;

HAnimJoint HAnimJoint444 = createNode("HAnimJoint");
HAnimJoint444.USE = "hanim_r_shoulder";
HAnimHumanoid43.joints[100] = HAnimJoint444;

HAnimJoint HAnimJoint445 = createNode("HAnimJoint");
HAnimJoint445.USE = "hanim_l_sternoclavicular";
HAnimHumanoid43.joints[101] = HAnimJoint445;

HAnimJoint HAnimJoint446 = createNode("HAnimJoint");
HAnimJoint446.USE = "hanim_r_sternoclavicular";
HAnimHumanoid43.joints[102] = HAnimJoint446;

HAnimJoint HAnimJoint447 = createNode("HAnimJoint");
HAnimJoint447.USE = "hanim_l_subtalar";
HAnimHumanoid43.joints[103] = HAnimJoint447;

HAnimJoint HAnimJoint448 = createNode("HAnimJoint");
HAnimJoint448.USE = "hanim_r_subtalar";
HAnimHumanoid43.joints[104] = HAnimJoint448;

HAnimJoint HAnimJoint449 = createNode("HAnimJoint");
HAnimJoint449.USE = "hanim_l_thumb1";
HAnimHumanoid43.joints[105] = HAnimJoint449;

HAnimJoint HAnimJoint450 = createNode("HAnimJoint");
HAnimJoint450.USE = "hanim_r_thumb1";
HAnimHumanoid43.joints[106] = HAnimJoint450;

HAnimJoint HAnimJoint451 = createNode("HAnimJoint");
HAnimJoint451.USE = "hanim_l_thumb2";
HAnimHumanoid43.joints[107] = HAnimJoint451;

HAnimJoint HAnimJoint452 = createNode("HAnimJoint");
HAnimJoint452.USE = "hanim_r_thumb2";
HAnimHumanoid43.joints[108] = HAnimJoint452;

HAnimJoint HAnimJoint453 = createNode("HAnimJoint");
HAnimJoint453.USE = "hanim_l_thumb3";
HAnimHumanoid43.joints[109] = HAnimJoint453;

HAnimJoint HAnimJoint454 = createNode("HAnimJoint");
HAnimJoint454.USE = "hanim_r_thumb3";
HAnimHumanoid43.joints[110] = HAnimJoint454;

HAnimJoint HAnimJoint455 = createNode("HAnimJoint");
HAnimJoint455.USE = "hanim_l_wrist";
HAnimHumanoid43.joints[111] = HAnimJoint455;

HAnimJoint HAnimJoint456 = createNode("HAnimJoint");
HAnimJoint456.USE = "hanim_r_wrist";
HAnimHumanoid43.joints[112] = HAnimJoint456;

HAnimSegment HAnimSegment457 = createNode("HAnimSegment");
HAnimSegment457.USE = "hanim_pelvis";
HAnimHumanoid43.segments[113] = HAnimSegment457;

HAnimSegment HAnimSegment458 = createNode("HAnimSegment");
HAnimSegment458.USE = "hanim_skull";
HAnimHumanoid43.segments[114] = HAnimSegment458;

HAnimSegment HAnimSegment459 = createNode("HAnimSegment");
HAnimSegment459.USE = "hanim_jaw";
HAnimHumanoid43.segments[115] = HAnimSegment459;

HAnimSegment HAnimSegment460 = createNode("HAnimSegment");
HAnimSegment460.USE = "hanim_c1";
HAnimHumanoid43.segments[116] = HAnimSegment460;

HAnimSegment HAnimSegment461 = createNode("HAnimSegment");
HAnimSegment461.USE = "hanim_c2";
HAnimHumanoid43.segments[117] = HAnimSegment461;

HAnimSegment HAnimSegment462 = createNode("HAnimSegment");
HAnimSegment462.USE = "hanim_c3";
HAnimHumanoid43.segments[118] = HAnimSegment462;

HAnimSegment HAnimSegment463 = createNode("HAnimSegment");
HAnimSegment463.USE = "hanim_c4";
HAnimHumanoid43.segments[119] = HAnimSegment463;

HAnimSegment HAnimSegment464 = createNode("HAnimSegment");
HAnimSegment464.USE = "hanim_c5";
HAnimHumanoid43.segments[120] = HAnimSegment464;

HAnimSegment HAnimSegment465 = createNode("HAnimSegment");
HAnimSegment465.USE = "hanim_c6";
HAnimHumanoid43.segments[121] = HAnimSegment465;

HAnimSegment HAnimSegment466 = createNode("HAnimSegment");
HAnimSegment466.USE = "hanim_c7";
HAnimHumanoid43.segments[122] = HAnimSegment466;

HAnimSegment HAnimSegment467 = createNode("HAnimSegment");
HAnimSegment467.USE = "hanim_t1";
HAnimHumanoid43.segments[123] = HAnimSegment467;

HAnimSegment HAnimSegment468 = createNode("HAnimSegment");
HAnimSegment468.USE = "hanim_t2";
HAnimHumanoid43.segments[124] = HAnimSegment468;

HAnimSegment HAnimSegment469 = createNode("HAnimSegment");
HAnimSegment469.USE = "hanim_t3";
HAnimHumanoid43.segments[125] = HAnimSegment469;

HAnimSegment HAnimSegment470 = createNode("HAnimSegment");
HAnimSegment470.USE = "hanim_t4";
HAnimHumanoid43.segments[126] = HAnimSegment470;

HAnimSegment HAnimSegment471 = createNode("HAnimSegment");
HAnimSegment471.USE = "hanim_t5";
HAnimHumanoid43.segments[127] = HAnimSegment471;

HAnimSegment HAnimSegment472 = createNode("HAnimSegment");
HAnimSegment472.USE = "hanim_t6";
HAnimHumanoid43.segments[128] = HAnimSegment472;

HAnimSegment HAnimSegment473 = createNode("HAnimSegment");
HAnimSegment473.USE = "hanim_t7";
HAnimHumanoid43.segments[129] = HAnimSegment473;

HAnimSegment HAnimSegment474 = createNode("HAnimSegment");
HAnimSegment474.USE = "hanim_t8";
HAnimHumanoid43.segments[130] = HAnimSegment474;

HAnimSegment HAnimSegment475 = createNode("HAnimSegment");
HAnimSegment475.USE = "hanim_t9";
HAnimHumanoid43.segments[131] = HAnimSegment475;

HAnimSegment HAnimSegment476 = createNode("HAnimSegment");
HAnimSegment476.USE = "hanim_t10";
HAnimHumanoid43.segments[132] = HAnimSegment476;

HAnimSegment HAnimSegment477 = createNode("HAnimSegment");
HAnimSegment477.USE = "hanim_t11";
HAnimHumanoid43.segments[133] = HAnimSegment477;

HAnimSegment HAnimSegment478 = createNode("HAnimSegment");
HAnimSegment478.USE = "hanim_t12";
HAnimHumanoid43.segments[134] = HAnimSegment478;

HAnimSegment HAnimSegment479 = createNode("HAnimSegment");
HAnimSegment479.USE = "hanim_l1";
HAnimHumanoid43.segments[135] = HAnimSegment479;

HAnimSegment HAnimSegment480 = createNode("HAnimSegment");
HAnimSegment480.USE = "hanim_l2";
HAnimHumanoid43.segments[136] = HAnimSegment480;

HAnimSegment HAnimSegment481 = createNode("HAnimSegment");
HAnimSegment481.USE = "hanim_l3";
HAnimHumanoid43.segments[137] = HAnimSegment481;

HAnimSegment HAnimSegment482 = createNode("HAnimSegment");
HAnimSegment482.USE = "hanim_l4";
HAnimHumanoid43.segments[138] = HAnimSegment482;

HAnimSegment HAnimSegment483 = createNode("HAnimSegment");
HAnimSegment483.USE = "hanim_l5";
HAnimHumanoid43.segments[139] = HAnimSegment483;

HAnimSegment HAnimSegment484 = createNode("HAnimSegment");
HAnimSegment484.USE = "hanim_sacrum";
HAnimHumanoid43.segments[140] = HAnimSegment484;

HAnimSegment HAnimSegment485 = createNode("HAnimSegment");
HAnimSegment485.USE = "hanim_l_calf";
HAnimHumanoid43.segments[141] = HAnimSegment485;

HAnimSegment HAnimSegment486 = createNode("HAnimSegment");
HAnimSegment486.USE = "hanim_r_calf";
HAnimHumanoid43.segments[142] = HAnimSegment486;

HAnimSegment HAnimSegment487 = createNode("HAnimSegment");
HAnimSegment487.USE = "hanim_l_clavicle";
HAnimHumanoid43.segments[143] = HAnimSegment487;

HAnimSegment HAnimSegment488 = createNode("HAnimSegment");
HAnimSegment488.USE = "hanim_r_clavicle";
HAnimHumanoid43.segments[144] = HAnimSegment488;

HAnimSegment HAnimSegment489 = createNode("HAnimSegment");
HAnimSegment489.USE = "hanim_l_eyeball";
HAnimHumanoid43.segments[145] = HAnimSegment489;

HAnimSegment HAnimSegment490 = createNode("HAnimSegment");
HAnimSegment490.USE = "hanim_r_eyeball";
HAnimHumanoid43.segments[146] = HAnimSegment490;

HAnimSegment HAnimSegment491 = createNode("HAnimSegment");
HAnimSegment491.USE = "hanim_l_eyebrow";
HAnimHumanoid43.segments[147] = HAnimSegment491;

HAnimSegment HAnimSegment492 = createNode("HAnimSegment");
HAnimSegment492.USE = "hanim_r_eyebrow";
HAnimHumanoid43.segments[148] = HAnimSegment492;

HAnimSegment HAnimSegment493 = createNode("HAnimSegment");
HAnimSegment493.USE = "hanim_l_eyelid";
HAnimHumanoid43.segments[149] = HAnimSegment493;

HAnimSegment HAnimSegment494 = createNode("HAnimSegment");
HAnimSegment494.USE = "hanim_r_eyelid";
HAnimHumanoid43.segments[150] = HAnimSegment494;

HAnimSegment HAnimSegment495 = createNode("HAnimSegment");
HAnimSegment495.USE = "hanim_l_forearm";
HAnimHumanoid43.segments[151] = HAnimSegment495;

HAnimSegment HAnimSegment496 = createNode("HAnimSegment");
HAnimSegment496.USE = "hanim_r_forearm";
HAnimHumanoid43.segments[152] = HAnimSegment496;

HAnimSegment HAnimSegment497 = createNode("HAnimSegment");
HAnimSegment497.USE = "hanim_l_forefoot";
HAnimHumanoid43.segments[153] = HAnimSegment497;

HAnimSegment HAnimSegment498 = createNode("HAnimSegment");
HAnimSegment498.USE = "hanim_r_forefoot";
HAnimHumanoid43.segments[154] = HAnimSegment498;

HAnimSegment HAnimSegment499 = createNode("HAnimSegment");
HAnimSegment499.USE = "hanim_l_hand";
HAnimHumanoid43.segments[155] = HAnimSegment499;

HAnimSegment HAnimSegment500 = createNode("HAnimSegment");
HAnimSegment500.USE = "hanim_r_hand";
HAnimHumanoid43.segments[156] = HAnimSegment500;

HAnimSegment HAnimSegment501 = createNode("HAnimSegment");
HAnimSegment501.USE = "hanim_l_hindfoot";
HAnimHumanoid43.segments[157] = HAnimSegment501;

HAnimSegment HAnimSegment502 = createNode("HAnimSegment");
HAnimSegment502.USE = "hanim_r_hindfoot";
HAnimHumanoid43.segments[158] = HAnimSegment502;

HAnimSegment HAnimSegment503 = createNode("HAnimSegment");
HAnimSegment503.USE = "hanim_l_index_distal";
HAnimHumanoid43.segments[159] = HAnimSegment503;

HAnimSegment HAnimSegment504 = createNode("HAnimSegment");
HAnimSegment504.USE = "hanim_r_index_distal";
HAnimHumanoid43.segments[160] = HAnimSegment504;

HAnimSegment HAnimSegment505 = createNode("HAnimSegment");
HAnimSegment505.USE = "hanim_l_index_metacarpal";
HAnimHumanoid43.segments[161] = HAnimSegment505;

HAnimSegment HAnimSegment506 = createNode("HAnimSegment");
HAnimSegment506.USE = "hanim_r_index_metacarpal";
HAnimHumanoid43.segments[162] = HAnimSegment506;

HAnimSegment HAnimSegment507 = createNode("HAnimSegment");
HAnimSegment507.USE = "hanim_l_index_middle";
HAnimHumanoid43.segments[163] = HAnimSegment507;

HAnimSegment HAnimSegment508 = createNode("HAnimSegment");
HAnimSegment508.USE = "hanim_r_index_middle";
HAnimHumanoid43.segments[164] = HAnimSegment508;

HAnimSegment HAnimSegment509 = createNode("HAnimSegment");
HAnimSegment509.USE = "hanim_l_index_proximal";
HAnimHumanoid43.segments[165] = HAnimSegment509;

HAnimSegment HAnimSegment510 = createNode("HAnimSegment");
HAnimSegment510.USE = "hanim_r_index_proximal";
HAnimHumanoid43.segments[166] = HAnimSegment510;

HAnimSegment HAnimSegment511 = createNode("HAnimSegment");
HAnimSegment511.USE = "hanim_l_middistal";
HAnimHumanoid43.segments[167] = HAnimSegment511;

HAnimSegment HAnimSegment512 = createNode("HAnimSegment");
HAnimSegment512.USE = "hanim_r_middistal";
HAnimHumanoid43.segments[168] = HAnimSegment512;

HAnimSegment HAnimSegment513 = createNode("HAnimSegment");
HAnimSegment513.USE = "hanim_l_middle_distal";
HAnimHumanoid43.segments[169] = HAnimSegment513;

HAnimSegment HAnimSegment514 = createNode("HAnimSegment");
HAnimSegment514.USE = "hanim_r_middle_distal";
HAnimHumanoid43.segments[170] = HAnimSegment514;

HAnimSegment HAnimSegment515 = createNode("HAnimSegment");
HAnimSegment515.USE = "hanim_l_middle_metacarpal";
HAnimHumanoid43.segments[171] = HAnimSegment515;

HAnimSegment HAnimSegment516 = createNode("HAnimSegment");
HAnimSegment516.USE = "hanim_r_middle_metacarpal";
HAnimHumanoid43.segments[172] = HAnimSegment516;

HAnimSegment HAnimSegment517 = createNode("HAnimSegment");
HAnimSegment517.USE = "hanim_l_middle_middle";
HAnimHumanoid43.segments[173] = HAnimSegment517;

HAnimSegment HAnimSegment518 = createNode("HAnimSegment");
HAnimSegment518.USE = "hanim_r_middle_middle";
HAnimHumanoid43.segments[174] = HAnimSegment518;

HAnimSegment HAnimSegment519 = createNode("HAnimSegment");
HAnimSegment519.USE = "hanim_l_middle_proximal";
HAnimHumanoid43.segments[175] = HAnimSegment519;

HAnimSegment HAnimSegment520 = createNode("HAnimSegment");
HAnimSegment520.USE = "hanim_r_middle_proximal";
HAnimHumanoid43.segments[176] = HAnimSegment520;

HAnimSegment HAnimSegment521 = createNode("HAnimSegment");
HAnimSegment521.USE = "hanim_l_midproximal";
HAnimHumanoid43.segments[177] = HAnimSegment521;

HAnimSegment HAnimSegment522 = createNode("HAnimSegment");
HAnimSegment522.USE = "hanim_r_midproximal";
HAnimHumanoid43.segments[178] = HAnimSegment522;

HAnimSegment HAnimSegment523 = createNode("HAnimSegment");
HAnimSegment523.USE = "hanim_l_pinky_distal";
HAnimHumanoid43.segments[179] = HAnimSegment523;

HAnimSegment HAnimSegment524 = createNode("HAnimSegment");
HAnimSegment524.USE = "hanim_r_pinky_distal";
HAnimHumanoid43.segments[180] = HAnimSegment524;

HAnimSegment HAnimSegment525 = createNode("HAnimSegment");
HAnimSegment525.USE = "hanim_l_pinky_metacarpal";
HAnimHumanoid43.segments[181] = HAnimSegment525;

HAnimSegment HAnimSegment526 = createNode("HAnimSegment");
HAnimSegment526.USE = "hanim_r_pinky_metacarpal";
HAnimHumanoid43.segments[182] = HAnimSegment526;

HAnimSegment HAnimSegment527 = createNode("HAnimSegment");
HAnimSegment527.USE = "hanim_l_pinky_middle";
HAnimHumanoid43.segments[183] = HAnimSegment527;

HAnimSegment HAnimSegment528 = createNode("HAnimSegment");
HAnimSegment528.USE = "hanim_r_pinky_middle";
HAnimHumanoid43.segments[184] = HAnimSegment528;

HAnimSegment HAnimSegment529 = createNode("HAnimSegment");
HAnimSegment529.USE = "hanim_l_pinky_proximal";
HAnimHumanoid43.segments[185] = HAnimSegment529;

HAnimSegment HAnimSegment530 = createNode("HAnimSegment");
HAnimSegment530.USE = "hanim_r_pinky_proximal";
HAnimHumanoid43.segments[186] = HAnimSegment530;

HAnimSegment HAnimSegment531 = createNode("HAnimSegment");
HAnimSegment531.USE = "hanim_l_ring_distal";
HAnimHumanoid43.segments[187] = HAnimSegment531;

HAnimSegment HAnimSegment532 = createNode("HAnimSegment");
HAnimSegment532.USE = "hanim_r_ring_distal";
HAnimHumanoid43.segments[188] = HAnimSegment532;

HAnimSegment HAnimSegment533 = createNode("HAnimSegment");
HAnimSegment533.USE = "hanim_l_ring_metacarpal";
HAnimHumanoid43.segments[189] = HAnimSegment533;

HAnimSegment HAnimSegment534 = createNode("HAnimSegment");
HAnimSegment534.USE = "hanim_r_ring_metacarpal";
HAnimHumanoid43.segments[190] = HAnimSegment534;

HAnimSegment HAnimSegment535 = createNode("HAnimSegment");
HAnimSegment535.USE = "hanim_l_ring_middle";
HAnimHumanoid43.segments[191] = HAnimSegment535;

HAnimSegment HAnimSegment536 = createNode("HAnimSegment");
HAnimSegment536.USE = "hanim_r_ring_middle";
HAnimHumanoid43.segments[192] = HAnimSegment536;

HAnimSegment HAnimSegment537 = createNode("HAnimSegment");
HAnimSegment537.USE = "hanim_l_ring_proximal";
HAnimHumanoid43.segments[193] = HAnimSegment537;

HAnimSegment HAnimSegment538 = createNode("HAnimSegment");
HAnimSegment538.USE = "hanim_r_ring_proximal";
HAnimHumanoid43.segments[194] = HAnimSegment538;

HAnimSegment HAnimSegment539 = createNode("HAnimSegment");
HAnimSegment539.USE = "hanim_l_scapula";
HAnimHumanoid43.segments[195] = HAnimSegment539;

HAnimSegment HAnimSegment540 = createNode("HAnimSegment");
HAnimSegment540.USE = "hanim_r_scapula";
HAnimHumanoid43.segments[196] = HAnimSegment540;

HAnimSegment HAnimSegment541 = createNode("HAnimSegment");
HAnimSegment541.USE = "hanim_l_thigh";
HAnimHumanoid43.segments[197] = HAnimSegment541;

HAnimSegment HAnimSegment542 = createNode("HAnimSegment");
HAnimSegment542.USE = "hanim_r_thigh";
HAnimHumanoid43.segments[198] = HAnimSegment542;

HAnimSegment HAnimSegment543 = createNode("HAnimSegment");
HAnimSegment543.USE = "hanim_l_thumb_distal";
HAnimHumanoid43.segments[199] = HAnimSegment543;

HAnimSegment HAnimSegment544 = createNode("HAnimSegment");
HAnimSegment544.USE = "hanim_r_thumb_distal";
HAnimHumanoid43.segments[200] = HAnimSegment544;

HAnimSegment HAnimSegment545 = createNode("HAnimSegment");
HAnimSegment545.USE = "hanim_l_thumb_metacarpal";
HAnimHumanoid43.segments[201] = HAnimSegment545;

HAnimSegment HAnimSegment546 = createNode("HAnimSegment");
HAnimSegment546.USE = "hanim_r_thumb_metacarpal";
HAnimHumanoid43.segments[202] = HAnimSegment546;

HAnimSegment HAnimSegment547 = createNode("HAnimSegment");
HAnimSegment547.USE = "hanim_l_thumb_proximal";
HAnimHumanoid43.segments[203] = HAnimSegment547;

HAnimSegment HAnimSegment548 = createNode("HAnimSegment");
HAnimSegment548.USE = "hanim_r_thumb_proximal";
HAnimHumanoid43.segments[204] = HAnimSegment548;

HAnimSegment HAnimSegment549 = createNode("HAnimSegment");
HAnimSegment549.USE = "hanim_l_upperarm";
HAnimHumanoid43.segments[205] = HAnimSegment549;

HAnimSegment HAnimSegment550 = createNode("HAnimSegment");
HAnimSegment550.USE = "hanim_r_upperarm";
HAnimHumanoid43.segments[206] = HAnimSegment550;

HAnimSite HAnimSite551 = createNode("HAnimSite");
HAnimSite551.USE = "hanim_crotch_pt";
HAnimHumanoid43.viewpoints[207] = HAnimSite551;

HAnimSite HAnimSite552 = createNode("HAnimSite");
HAnimSite552.USE = "hanim_skull_tip";
HAnimHumanoid43.viewpoints[208] = HAnimSite552;

HAnimSite HAnimSite553 = createNode("HAnimSite");
HAnimSite553.USE = "hanim_sellion_pt";
HAnimHumanoid43.viewpoints[209] = HAnimSite553;

HAnimSite HAnimSite554 = createNode("HAnimSite");
HAnimSite554.USE = "hanim_supramenton_pt";
HAnimHumanoid43.viewpoints[210] = HAnimSite554;

HAnimSite HAnimSite555 = createNode("HAnimSite");
HAnimSite555.USE = "hanim_nuchale_pt";
HAnimHumanoid43.viewpoints[211] = HAnimSite555;

HAnimSite HAnimSite556 = createNode("HAnimSite");
HAnimSite556.USE = "hanim_suprasternale_pt";
HAnimHumanoid43.viewpoints[212] = HAnimSite556;

HAnimSite HAnimSite557 = createNode("HAnimSite");
HAnimSite557.USE = "hanim_cervicale_pt";
HAnimHumanoid43.viewpoints[213] = HAnimSite557;

HAnimSite HAnimSite558 = createNode("HAnimSite");
HAnimSite558.USE = "hanim_substernale_pt";
HAnimHumanoid43.viewpoints[214] = HAnimSite558;

HAnimSite HAnimSite559 = createNode("HAnimSite");
HAnimSite559.USE = "hanim_rib10_midspine_pt";
HAnimHumanoid43.viewpoints[215] = HAnimSite559;

HAnimSite HAnimSite560 = createNode("HAnimSite");
HAnimSite560.USE = "hanim_waist_preferred_post_pt";
HAnimHumanoid43.viewpoints[216] = HAnimSite560;

HAnimSite HAnimSite561 = createNode("HAnimSite");
HAnimSite561.USE = "hanim_navel_pt";
HAnimHumanoid43.viewpoints[217] = HAnimSite561;

HAnimSite HAnimSite562 = createNode("HAnimSite");
HAnimSite562.USE = "hanim_l_acromion_pt";
HAnimHumanoid43.viewpoints[218] = HAnimSite562;

HAnimSite HAnimSite563 = createNode("HAnimSite");
HAnimSite563.USE = "hanim_r_acromion_pt";
HAnimHumanoid43.viewpoints[219] = HAnimSite563;

HAnimSite HAnimSite564 = createNode("HAnimSite");
HAnimSite564.USE = "hanim_r_asis_pt";
HAnimHumanoid43.viewpoints[220] = HAnimSite564;

HAnimSite HAnimSite565 = createNode("HAnimSite");
HAnimSite565.USE = "hanim_l_asis_pt";
HAnimHumanoid43.viewpoints[221] = HAnimSite565;

HAnimSite HAnimSite566 = createNode("HAnimSite");
HAnimSite566.USE = "hanim_l_axilla_ant_pt";
HAnimHumanoid43.viewpoints[222] = HAnimSite566;

HAnimSite HAnimSite567 = createNode("HAnimSite");
HAnimSite567.USE = "hanim_r_axilla_ant_pt";
HAnimHumanoid43.viewpoints[223] = HAnimSite567;

HAnimSite HAnimSite568 = createNode("HAnimSite");
HAnimSite568.USE = "hanim_l_axilla_post_pt";
HAnimHumanoid43.viewpoints[224] = HAnimSite568;

HAnimSite HAnimSite569 = createNode("HAnimSite");
HAnimSite569.USE = "hanim_r_axilla_post_pt";
HAnimHumanoid43.viewpoints[225] = HAnimSite569;

HAnimSite HAnimSite570 = createNode("HAnimSite");
HAnimSite570.USE = "hanim_l_calcaneous_post_pt";
HAnimHumanoid43.viewpoints[226] = HAnimSite570;

HAnimSite HAnimSite571 = createNode("HAnimSite");
HAnimSite571.USE = "hanim_r_calcaneous_post_pt";
HAnimHumanoid43.viewpoints[227] = HAnimSite571;

HAnimSite HAnimSite572 = createNode("HAnimSite");
HAnimSite572.USE = "hanim_l_clavicale_pt";
HAnimHumanoid43.viewpoints[228] = HAnimSite572;

HAnimSite HAnimSite573 = createNode("HAnimSite");
HAnimSite573.USE = "hanim_r_clavicale_pt";
HAnimHumanoid43.viewpoints[229] = HAnimSite573;

HAnimSite HAnimSite574 = createNode("HAnimSite");
HAnimSite574.USE = "hanim_l_dactylion_pt";
HAnimHumanoid43.viewpoints[230] = HAnimSite574;

HAnimSite HAnimSite575 = createNode("HAnimSite");
HAnimSite575.USE = "hanim_r_dactylion_pt";
HAnimHumanoid43.viewpoints[231] = HAnimSite575;

HAnimSite HAnimSite576 = createNode("HAnimSite");
HAnimSite576.USE = "hanim_l_digit2_pt";
HAnimHumanoid43.viewpoints[232] = HAnimSite576;

HAnimSite HAnimSite577 = createNode("HAnimSite");
HAnimSite577.USE = "hanim_r_digit2_pt";
HAnimHumanoid43.viewpoints[233] = HAnimSite577;

HAnimSite HAnimSite578 = createNode("HAnimSite");
HAnimSite578.USE = "hanim_l_femoral_lateral_epicn_pt";
HAnimHumanoid43.viewpoints[234] = HAnimSite578;

HAnimSite HAnimSite579 = createNode("HAnimSite");
HAnimSite579.USE = "hanim_r_femoral_lateral_epicn_pt";
HAnimHumanoid43.viewpoints[235] = HAnimSite579;

HAnimSite HAnimSite580 = createNode("HAnimSite");
HAnimSite580.USE = "hanim_l_femoral_medial_epicn_pt";
HAnimHumanoid43.viewpoints[236] = HAnimSite580;

HAnimSite HAnimSite581 = createNode("HAnimSite");
HAnimSite581.USE = "hanim_r_femoral_medial_epicn_pt";
HAnimHumanoid43.viewpoints[237] = HAnimSite581;

HAnimSite HAnimSite582 = createNode("HAnimSite");
HAnimSite582.USE = "hanim_l_forefoot_tip";
HAnimHumanoid43.viewpoints[238] = HAnimSite582;

HAnimSite HAnimSite583 = createNode("HAnimSite");
HAnimSite583.USE = "hanim_r_forefoot_tip";
HAnimHumanoid43.viewpoints[239] = HAnimSite583;

HAnimSite HAnimSite584 = createNode("HAnimSite");
HAnimSite584.USE = "hanim_r_gonion_pt";
HAnimHumanoid43.viewpoints[240] = HAnimSite584;

HAnimSite HAnimSite585 = createNode("HAnimSite");
HAnimSite585.USE = "hanim_l_gonion_pt";
HAnimHumanoid43.viewpoints[241] = HAnimSite585;

HAnimSite HAnimSite586 = createNode("HAnimSite");
HAnimSite586.USE = "hanim_l_humeral_lateral_epicn_pt";
HAnimHumanoid43.viewpoints[242] = HAnimSite586;

HAnimSite HAnimSite587 = createNode("HAnimSite");
HAnimSite587.USE = "hanim_r_humeral_lateral_epicn_pt";
HAnimHumanoid43.viewpoints[243] = HAnimSite587;

HAnimSite HAnimSite588 = createNode("HAnimSite");
HAnimSite588.USE = "hanim_l_humeral_medial_epicn_pt";
HAnimHumanoid43.viewpoints[244] = HAnimSite588;

HAnimSite HAnimSite589 = createNode("HAnimSite");
HAnimSite589.USE = "hanim_r_humeral_medial_epicn_pt";
HAnimHumanoid43.viewpoints[245] = HAnimSite589;

HAnimSite HAnimSite590 = createNode("HAnimSite");
HAnimSite590.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid43.viewpoints[246] = HAnimSite590;

HAnimSite HAnimSite591 = createNode("HAnimSite");
HAnimSite591.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid43.viewpoints[247] = HAnimSite591;

HAnimSite HAnimSite592 = createNode("HAnimSite");
HAnimSite592.USE = "hanim_l_index_distal_tip";
HAnimHumanoid43.viewpoints[248] = HAnimSite592;

HAnimSite HAnimSite593 = createNode("HAnimSite");
HAnimSite593.USE = "hanim_r_index_distal_tip";
HAnimHumanoid43.viewpoints[249] = HAnimSite593;

HAnimSite HAnimSite594 = createNode("HAnimSite");
HAnimSite594.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid43.viewpoints[250] = HAnimSite594;

HAnimSite HAnimSite595 = createNode("HAnimSite");
HAnimSite595.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid43.viewpoints[251] = HAnimSite595;

HAnimSite HAnimSite596 = createNode("HAnimSite");
HAnimSite596.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid43.viewpoints[252] = HAnimSite596;

HAnimSite HAnimSite597 = createNode("HAnimSite");
HAnimSite597.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid43.viewpoints[253] = HAnimSite597;

HAnimSite HAnimSite598 = createNode("HAnimSite");
HAnimSite598.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid43.viewpoints[254] = HAnimSite598;

HAnimSite HAnimSite599 = createNode("HAnimSite");
HAnimSite599.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid43.viewpoints[255] = HAnimSite599;

HAnimSite HAnimSite600 = createNode("HAnimSite");
HAnimSite600.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid43.viewpoints[256] = HAnimSite600;

HAnimSite HAnimSite601 = createNode("HAnimSite");
HAnimSite601.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid43.viewpoints[257] = HAnimSite601;

HAnimSite HAnimSite602 = createNode("HAnimSite");
HAnimSite602.USE = "hanim_l_metacarpal_pha2_pt";
HAnimHumanoid43.viewpoints[258] = HAnimSite602;

HAnimSite HAnimSite603 = createNode("HAnimSite");
HAnimSite603.USE = "hanim_r_metacarpal_pha2_pt";
HAnimHumanoid43.viewpoints[259] = HAnimSite603;

HAnimSite HAnimSite604 = createNode("HAnimSite");
HAnimSite604.USE = "hanim_l_metacarpal_pha5_pt";
HAnimHumanoid43.viewpoints[260] = HAnimSite604;

HAnimSite HAnimSite605 = createNode("HAnimSite");
HAnimSite605.USE = "hanim_r_metacarpal_pha5_pt";
HAnimHumanoid43.viewpoints[261] = HAnimSite605;

HAnimSite HAnimSite606 = createNode("HAnimSite");
HAnimSite606.USE = "hanim_l_metatarsal_pha1_pt";
HAnimHumanoid43.viewpoints[262] = HAnimSite606;

HAnimSite HAnimSite607 = createNode("HAnimSite");
HAnimSite607.USE = "hanim_r_metatarsal_pha1_pt";
HAnimHumanoid43.viewpoints[263] = HAnimSite607;

HAnimSite HAnimSite608 = createNode("HAnimSite");
HAnimSite608.USE = "hanim_l_metatarsal_pha5_pt";
HAnimHumanoid43.viewpoints[264] = HAnimSite608;

HAnimSite HAnimSite609 = createNode("HAnimSite");
HAnimSite609.USE = "hanim_r_metatarsal_pha5_pt";
HAnimHumanoid43.viewpoints[265] = HAnimSite609;

HAnimSite HAnimSite610 = createNode("HAnimSite");
HAnimSite610.USE = "hanim_l_middle_distal_tip";
HAnimHumanoid43.viewpoints[266] = HAnimSite610;

HAnimSite HAnimSite611 = createNode("HAnimSite");
HAnimSite611.USE = "hanim_r_middle_distal_tip";
HAnimHumanoid43.viewpoints[267] = HAnimSite611;

HAnimSite HAnimSite612 = createNode("HAnimSite");
HAnimSite612.USE = "hanim_r_neck_base_pt";
HAnimHumanoid43.viewpoints[268] = HAnimSite612;

HAnimSite HAnimSite613 = createNode("HAnimSite");
HAnimSite613.USE = "hanim_l_neck_base_pt";
HAnimHumanoid43.viewpoints[269] = HAnimSite613;

HAnimSite HAnimSite614 = createNode("HAnimSite");
HAnimSite614.USE = "hanim_l_olecranon_pt";
HAnimHumanoid43.viewpoints[270] = HAnimSite614;

HAnimSite HAnimSite615 = createNode("HAnimSite");
HAnimSite615.USE = "hanim_r_olecranon_pt";
HAnimHumanoid43.viewpoints[271] = HAnimSite615;

HAnimSite HAnimSite616 = createNode("HAnimSite");
HAnimSite616.USE = "hanim_l_pinky_distal_tip";
HAnimHumanoid43.viewpoints[272] = HAnimSite616;

HAnimSite HAnimSite617 = createNode("HAnimSite");
HAnimSite617.USE = "hanim_r_pinky_distal_tip";
HAnimHumanoid43.viewpoints[273] = HAnimSite617;

HAnimSite HAnimSite618 = createNode("HAnimSite");
HAnimSite618.USE = "hanim_r_psis_pt";
HAnimHumanoid43.viewpoints[274] = HAnimSite618;

HAnimSite HAnimSite619 = createNode("HAnimSite");
HAnimSite619.USE = "hanim_l_psis_pt";
HAnimHumanoid43.viewpoints[275] = HAnimSite619;

HAnimSite HAnimSite620 = createNode("HAnimSite");
HAnimSite620.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid43.viewpoints[276] = HAnimSite620;

HAnimSite HAnimSite621 = createNode("HAnimSite");
HAnimSite621.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid43.viewpoints[277] = HAnimSite621;

HAnimSite HAnimSite622 = createNode("HAnimSite");
HAnimSite622.USE = "hanim_l_radiale_pt";
HAnimHumanoid43.viewpoints[278] = HAnimSite622;

HAnimSite HAnimSite623 = createNode("HAnimSite");
HAnimSite623.USE = "hanim_r_radiale_pt";
HAnimHumanoid43.viewpoints[279] = HAnimSite623;

HAnimSite HAnimSite624 = createNode("HAnimSite");
HAnimSite624.USE = "hanim_r_rib10_pt";
HAnimHumanoid43.viewpoints[280] = HAnimSite624;

HAnimSite HAnimSite625 = createNode("HAnimSite");
HAnimSite625.USE = "hanim_l_rib10_pt";
HAnimHumanoid43.viewpoints[281] = HAnimSite625;

HAnimSite HAnimSite626 = createNode("HAnimSite");
HAnimSite626.USE = "hanim_l_ring_distal_tip";
HAnimHumanoid43.viewpoints[282] = HAnimSite626;

HAnimSite HAnimSite627 = createNode("HAnimSite");
HAnimSite627.USE = "hanim_r_ring_distal_tip";
HAnimHumanoid43.viewpoints[283] = HAnimSite627;

HAnimSite HAnimSite628 = createNode("HAnimSite");
HAnimSite628.USE = "hanim_temporomandibular_l_site_pt";
HAnimHumanoid43.viewpoints[284] = HAnimSite628;

HAnimSite HAnimSite629 = createNode("HAnimSite");
HAnimSite629.USE = "hanim_temporomandibular_r_site_pt";
HAnimHumanoid43.viewpoints[285] = HAnimSite629;

HAnimSite HAnimSite630 = createNode("HAnimSite");
HAnimSite630.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid43.viewpoints[286] = HAnimSite630;

HAnimSite HAnimSite631 = createNode("HAnimSite");
HAnimSite631.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid43.viewpoints[287] = HAnimSite631;

HAnimSite HAnimSite632 = createNode("HAnimSite");
HAnimSite632.USE = "hanim_r_thelion_pt";
HAnimHumanoid43.viewpoints[288] = HAnimSite632;

HAnimSite HAnimSite633 = createNode("HAnimSite");
HAnimSite633.USE = "hanim_l_thelion_pt";
HAnimHumanoid43.viewpoints[289] = HAnimSite633;

HAnimSite HAnimSite634 = createNode("HAnimSite");
HAnimSite634.USE = "hanim_l_thumb_distal_tip";
HAnimHumanoid43.viewpoints[290] = HAnimSite634;

HAnimSite HAnimSite635 = createNode("HAnimSite");
HAnimSite635.USE = "hanim_r_thumb_distal_tip";
HAnimHumanoid43.viewpoints[291] = HAnimSite635;

HAnimSite HAnimSite636 = createNode("HAnimSite");
HAnimSite636.USE = "hanim_r_tragion_pt";
HAnimHumanoid43.viewpoints[292] = HAnimSite636;

HAnimSite HAnimSite637 = createNode("HAnimSite");
HAnimSite637.USE = "hanim_l_tragion_pt";
HAnimHumanoid43.viewpoints[293] = HAnimSite637;

HAnimSite HAnimSite638 = createNode("HAnimSite");
HAnimSite638.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid43.viewpoints[294] = HAnimSite638;

HAnimSite HAnimSite639 = createNode("HAnimSite");
HAnimSite639.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid43.viewpoints[295] = HAnimSite639;

HAnimSite HAnimSite640 = createNode("HAnimSite");
HAnimSite640.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid43.viewpoints[296] = HAnimSite640;

HAnimSite HAnimSite641 = createNode("HAnimSite");
HAnimSite641.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid43.viewpoints[297] = HAnimSite641;

children[12] = HAnimHumanoid43;

}

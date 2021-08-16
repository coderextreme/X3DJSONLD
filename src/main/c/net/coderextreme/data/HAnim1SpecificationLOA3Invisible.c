#include "/c/x3d-code/www.web3d.org/x3d/languages/c/X3DLib/X3DLib.h"
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
meta6.name = "created";
meta6.content = "24 April 2013";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "4 July 2020";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "TODO";
meta8.content = "Convert to X3D4 HAnim2";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "creator";
meta9.content = "Matthew T. Beitler, Joe D. Williams, Don Brutzman";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "reference";
meta10.content = "HAnimSpecificationLOA3Illustrated.x3d";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "reference";
meta11.content = "HAnimSpecificationLOA3Animation.x3d";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "reference";
meta12.content = "HAnimSpecificationExampleChangeLog.txt";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "Image";
meta13.content = "images/BonesAllSkeletonFrontViewLOA1.png";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "Image";
meta14.content = "images/BonesAllSkeletonFrontViewLOA2.png";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "Image";
meta15.content = "images/BonesAllSkeletonFrontViewLOA3.png";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "TODO";
meta16.content = "move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "TODO";
meta17.content = "insert MetadataInteger nodes indicating LOA for each Joint and Segment";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "reference";
meta18.content = "Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "reference";
meta19.content = "http://www.cis.upenn.edu/~badler/anthro/89-71.ps";
head1.meta[17] = meta19;

meta meta20 = createNode("meta");
meta20.name = "reference";
meta20.content = "tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf";
head1.meta[18] = meta20;

meta meta21 = createNode("meta");
meta21.name = "translator";
meta21.content = "Don Brutzman and Joe Williams";
head1.meta[19] = meta21;

meta meta22 = createNode("meta");
meta22.name = "generator";
meta22.content = "BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo";
head1.meta[20] = meta22;

meta meta23 = createNode("meta");
meta23.name = "reference";
meta23.content = "originals/LOA3ExampleSourceWithDiamondsOriginal.wrl";
head1.meta[21] = meta23;

meta meta24 = createNode("meta");
meta24.name = "reference";
meta24.content = "originals/LOA3ExampleSourceWithDiamondsOriginal.x3d";
head1.meta[22] = meta24;

meta meta25 = createNode("meta");
meta25.name = "reference";
meta25.content = "originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d";
head1.meta[23] = meta25;

meta meta26 = createNode("meta");
meta26.name = "reference";
meta26.content = "HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames";
head1.meta[24] = meta26;

meta meta27 = createNode("meta");
meta27.name = "generator";
meta27.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[25] = meta27;

meta meta28 = createNode("meta");
meta28.name = "identifier";
meta28.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/HAnimSpecificationLOA3Invisible.x3d";
head1.meta[26] = meta28;

meta meta29 = createNode("meta");
meta29.name = "license";
meta29.content = "../license.html";
head1.meta[27] = meta29;

head = head1;

Background Background31 = createNode("Background");
Background31.skyColor = new MFColor(new float[0.3,0.3,0.3]);
children = new MFNode();

children[0] = Background31;

NavigationInfo NavigationInfo32 = createNode("NavigationInfo");
children[1] = NavigationInfo32;

Group Group33 = createNode("Group");
Group33.DEF = "Original_WorldInfo";
WorldInfo WorldInfo34 = createNode("WorldInfo");
WorldInfo34.info = new MFString(new java.lang.String[" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "]);
WorldInfo34.title = "HANIM 200x Default Joint Centers, LOA3";
Group33.children = new MFNode();

Group33.children[0] = WorldInfo34;

children[2] = Group33;

//TODO move viewpoints to be internal to HAnimHumanoid
//Viewpoint centerOfRotation=\"0 0.9149 0.0016\" matches initial at-rest locaton of the sacroliac. Note that these viewpoints are external to the HAnimHumanoid and do not move with the human.
Viewpoint Viewpoint35 = createNode("Viewpoint");
Viewpoint35.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint35.description = "Humanoid LOA 3 Front";
Viewpoint35.position = new SFVec3f(new float[0,0.4,4]);
children[3] = Viewpoint35;

Viewpoint Viewpoint36 = createNode("Viewpoint");
Viewpoint36.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint36.description = "Humanoid LOA 3 Front Close";
Viewpoint36.position = new SFVec3f(new float[0,0.8,2]);
children[4] = Viewpoint36;

Viewpoint Viewpoint37 = createNode("Viewpoint");
Viewpoint37.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint37.description = "Humanoid LOA 3 Front Closer";
Viewpoint37.position = new SFVec3f(new float[0,1.2,1]);
children[5] = Viewpoint37;

Viewpoint Viewpoint38 = createNode("Viewpoint");
Viewpoint38.centerOfRotation = new SFVec3f(new float[0,1.5,0.0016]);
Viewpoint38.description = "Humanoid LOA 3 Front Face";
Viewpoint38.position = new SFVec3f(new float[0,1.63,1]);
children[6] = Viewpoint38;

Viewpoint Viewpoint39 = createNode("Viewpoint");
Viewpoint39.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint39.description = "Humanoid LOA 3 Right Side";
Viewpoint39.orientation = new SFRotation(new float[0,1,0,1.5708]);
Viewpoint39.position = new SFVec3f(new float[2.6,0.8,0]);
children[7] = Viewpoint39;

Viewpoint Viewpoint40 = createNode("Viewpoint");
Viewpoint40.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint40.description = "Humanoid LOA 3 Right Side Close";
Viewpoint40.orientation = new SFRotation(new float[0,1,0,1.2]);
Viewpoint40.position = new SFVec3f(new float[1,0.8,0.5]);
children[8] = Viewpoint40;

Viewpoint Viewpoint41 = createNode("Viewpoint");
Viewpoint41.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint41.description = "Humanoid LOA 3 Left Side Close";
Viewpoint41.orientation = new SFRotation(new float[0,1,0,-1.2]);
Viewpoint41.position = new SFVec3f(new float[-1,0.8,0.5]);
children[9] = Viewpoint41;

Viewpoint Viewpoint42 = createNode("Viewpoint");
Viewpoint42.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint42.description = "Humanoid LOA 3 Left Side";
Viewpoint42.orientation = new SFRotation(new float[0,1,0,-1.5708]);
Viewpoint42.position = new SFVec3f(new float[-2.6,0.8,0]);
children[10] = Viewpoint42;

Viewpoint Viewpoint43 = createNode("Viewpoint");
Viewpoint43.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint43.description = "Humanoid LOA 3 Top";
Viewpoint43.orientation = new SFRotation(new float[1,0,0,-1.5708]);
Viewpoint43.position = new SFVec3f(new float[0,3.5,0]);
children[11] = Viewpoint43;

HAnimHumanoid HAnimHumanoid44 = createNode("HAnimHumanoid");
HAnimHumanoid44.name = "humanoid";
HAnimHumanoid44.DEF = "hanim_humanoid";
HAnimHumanoid44.info = new MFString(new java.lang.String["authorName=Matthew T. Beitler Joe D. Williams Don Brutzman","authorEmail=HAnim@web3D.org","copyright=none","creationDate=12 May 1999","usageRestrictions=none","humanoidVersion=2.0","height=1.7504"]);
HAnimHumanoid44.version = "1.0";
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
//right between the eyes, stationary position not animating except with body itself
HAnimJoint HAnimJoint45 = createNode("HAnimJoint");
HAnimJoint45.name = "humanoid_root";
HAnimJoint45.DEF = "hanim_humanoid_root";
HAnimJoint45.center = new SFVec3f(new float[0,0.824,0.0277]);
HAnimJoint45.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment46 = createNode("HAnimSegment");
HAnimSegment46.name = "sacrum";
HAnimSegment46.DEF = "hanim_sacrum";
HAnimJoint45.children = new MFNode();

HAnimJoint45.children[0] = HAnimSegment46;

HAnimJoint HAnimJoint47 = createNode("HAnimJoint");
HAnimJoint47.name = "sacroiliac";
HAnimJoint47.DEF = "hanim_sacroiliac";
HAnimJoint47.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimJoint47.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment48 = createNode("HAnimSegment");
HAnimSegment48.name = "pelvis";
HAnimSegment48.DEF = "hanim_pelvis";
HAnimSite HAnimSite49 = createNode("HAnimSite");
HAnimSite49.name = "r_iliocristale_pt";
HAnimSite49.DEF = "hanim_r_iliocristale_pt";
HAnimSite49.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
HAnimSegment48.children = new MFNode();

HAnimSegment48.children[0] = HAnimSite49;

HAnimSite HAnimSite50 = createNode("HAnimSite");
HAnimSite50.name = "r_trochanterion_pt";
HAnimSite50.DEF = "hanim_r_trochanterion_pt";
HAnimSite50.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
HAnimSegment48.children[1] = HAnimSite50;

HAnimSite HAnimSite51 = createNode("HAnimSite");
HAnimSite51.name = "l_iliocristale_pt";
HAnimSite51.DEF = "hanim_l_iliocristale_pt";
HAnimSite51.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
HAnimSegment48.children[2] = HAnimSite51;

HAnimSite HAnimSite52 = createNode("HAnimSite");
HAnimSite52.name = "l_trochanterion_pt";
HAnimSite52.DEF = "hanim_l_trochanterion_pt";
HAnimSite52.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
HAnimSegment48.children[3] = HAnimSite52;

HAnimSite HAnimSite53 = createNode("HAnimSite");
HAnimSite53.name = "r_asis_pt";
HAnimSite53.DEF = "hanim_r_asis_pt";
HAnimSite53.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
HAnimSegment48.children[4] = HAnimSite53;

HAnimSite HAnimSite54 = createNode("HAnimSite");
HAnimSite54.name = "l_asis_pt";
HAnimSite54.DEF = "hanim_l_asis_pt";
HAnimSite54.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
HAnimSegment48.children[5] = HAnimSite54;

HAnimSite HAnimSite55 = createNode("HAnimSite");
HAnimSite55.name = "r_psis_pt";
HAnimSite55.DEF = "hanim_r_psis_pt";
HAnimSite55.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
HAnimSegment48.children[6] = HAnimSite55;

HAnimSite HAnimSite56 = createNode("HAnimSite");
HAnimSite56.name = "l_psis_pt";
HAnimSite56.DEF = "hanim_l_psis_pt";
HAnimSite56.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
HAnimSegment48.children[7] = HAnimSite56;

HAnimSite HAnimSite57 = createNode("HAnimSite");
HAnimSite57.name = "crotch_pt";
HAnimSite57.DEF = "hanim_crotch_pt";
HAnimSite57.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
HAnimSegment48.children[8] = HAnimSite57;

HAnimJoint47.children = new MFNode();

HAnimJoint47.children[0] = HAnimSegment48;

HAnimJoint HAnimJoint58 = createNode("HAnimJoint");
HAnimJoint58.name = "l_hip";
HAnimJoint58.DEF = "hanim_l_hip";
HAnimJoint58.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimJoint58.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment59 = createNode("HAnimSegment");
HAnimSegment59.name = "l_thigh";
HAnimSegment59.DEF = "hanim_l_thigh";
HAnimSite HAnimSite60 = createNode("HAnimSite");
HAnimSite60.name = "l_knee_crease_pt";
HAnimSite60.DEF = "hanim_l_knee_crease_pt";
HAnimSite60.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
HAnimSegment59.children = new MFNode();

HAnimSegment59.children[0] = HAnimSite60;

HAnimSite HAnimSite61 = createNode("HAnimSite");
HAnimSite61.name = "l_femoral_lateral_epicn_pt";
HAnimSite61.DEF = "hanim_l_femoral_lateral_epicn_pt";
HAnimSite61.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
HAnimSegment59.children[1] = HAnimSite61;

HAnimSite HAnimSite62 = createNode("HAnimSite");
HAnimSite62.name = "l_femoral_medial_epicn_pt";
HAnimSite62.DEF = "hanim_l_femoral_medial_epicn_pt";
HAnimSite62.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
HAnimSegment59.children[2] = HAnimSite62;

HAnimJoint58.children = new MFNode();

HAnimJoint58.children[0] = HAnimSegment59;

HAnimJoint HAnimJoint63 = createNode("HAnimJoint");
HAnimJoint63.name = "l_knee";
HAnimJoint63.DEF = "hanim_l_knee";
HAnimJoint63.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimJoint63.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment64 = createNode("HAnimSegment");
HAnimSegment64.name = "l_calf";
HAnimSegment64.DEF = "hanim_l_calf";
HAnimJoint63.children = new MFNode();

HAnimJoint63.children[0] = HAnimSegment64;

HAnimJoint HAnimJoint65 = createNode("HAnimJoint");
HAnimJoint65.name = "l_ankle";
HAnimJoint65.DEF = "hanim_l_ankle";
HAnimJoint65.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimJoint65.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment66 = createNode("HAnimSegment");
HAnimSegment66.name = "l_hindfoot";
HAnimSegment66.DEF = "hanim_l_hindfoot";
HAnimSite HAnimSite67 = createNode("HAnimSite");
HAnimSite67.name = "l_lateral_malleolus_pt";
HAnimSite67.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite67.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
HAnimSegment66.children = new MFNode();

HAnimSegment66.children[0] = HAnimSite67;

HAnimSite HAnimSite68 = createNode("HAnimSite");
HAnimSite68.name = "l_medial_malleolus_pt";
HAnimSite68.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite68.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
HAnimSegment66.children[1] = HAnimSite68;

HAnimSite HAnimSite69 = createNode("HAnimSite");
HAnimSite69.name = "l_sphyrion_pt";
HAnimSite69.DEF = "hanim_l_sphyrion_pt";
HAnimSite69.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
HAnimSegment66.children[2] = HAnimSite69;

HAnimSite HAnimSite70 = createNode("HAnimSite");
HAnimSite70.name = "l_calcaneous_post_pt";
HAnimSite70.DEF = "hanim_l_calcaneous_post_pt";
HAnimSite70.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
HAnimSegment66.children[3] = HAnimSite70;

HAnimJoint65.children = new MFNode();

HAnimJoint65.children[0] = HAnimSegment66;

HAnimJoint HAnimJoint71 = createNode("HAnimJoint");
HAnimJoint71.name = "l_subtalar";
HAnimJoint71.DEF = "hanim_l_subtalar";
HAnimJoint71.center = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
HAnimJoint71.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment72 = createNode("HAnimSegment");
HAnimSegment72.name = "l_midproximal";
HAnimSegment72.DEF = "hanim_l_midproximal";
HAnimJoint71.children = new MFNode();

HAnimJoint71.children[0] = HAnimSegment72;

HAnimJoint HAnimJoint73 = createNode("HAnimJoint");
HAnimJoint73.name = "l_midtarsal";
HAnimJoint73.DEF = "hanim_l_midtarsal";
HAnimJoint73.center = new SFVec3f(new float[0.1086,0.0001,0.0368]);
HAnimJoint73.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment74 = createNode("HAnimSegment");
HAnimSegment74.name = "l_middistal";
HAnimSegment74.DEF = "hanim_l_middistal";
HAnimSite HAnimSite75 = createNode("HAnimSite");
HAnimSite75.name = "l_metatarsal_pha1_pt";
HAnimSite75.DEF = "hanim_l_metatarsal_pha1_pt";
HAnimSite75.translation = new SFVec3f(new float[0.0816,0.0232,0.0106]);
HAnimSegment74.children = new MFNode();

HAnimSegment74.children[0] = HAnimSite75;

HAnimJoint73.children = new MFNode();

HAnimJoint73.children[0] = HAnimSegment74;

HAnimJoint HAnimJoint76 = createNode("HAnimJoint");
HAnimJoint76.name = "l_metatarsal";
HAnimJoint76.DEF = "hanim_l_metatarsal";
HAnimJoint76.center = new SFVec3f(new float[0.1086,0,0.0762]);
HAnimJoint76.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment77 = createNode("HAnimSegment");
HAnimSegment77.name = "l_forefoot";
HAnimSegment77.DEF = "hanim_l_forefoot";
HAnimSite HAnimSite78 = createNode("HAnimSite");
HAnimSite78.name = "l_forefoot_tip";
HAnimSite78.DEF = "hanim_l_forefoot_tip";
HAnimSite78.translation = new SFVec3f(new float[0.1354,0.0016,0.1476]);
HAnimSegment77.children = new MFNode();

HAnimSegment77.children[0] = HAnimSite78;

HAnimSite HAnimSite79 = createNode("HAnimSite");
HAnimSite79.name = "l_metatarsal_pha5_pt";
HAnimSite79.DEF = "hanim_l_metatarsal_pha5_pt";
HAnimSite79.translation = new SFVec3f(new float[0.1825,0.007,0.0928]);
HAnimSegment77.children[1] = HAnimSite79;

HAnimSite HAnimSite80 = createNode("HAnimSite");
HAnimSite80.name = "l_digit2_pt";
HAnimSite80.DEF = "hanim_l_digit2_pt";
HAnimSite80.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
HAnimSegment77.children[2] = HAnimSite80;

HAnimJoint76.children = new MFNode();

HAnimJoint76.children[0] = HAnimSegment77;

HAnimJoint73.children[1] = HAnimJoint76;

HAnimJoint71.children[1] = HAnimJoint73;

HAnimJoint65.children[1] = HAnimJoint71;

HAnimJoint63.children[1] = HAnimJoint65;

HAnimJoint58.children[1] = HAnimJoint63;

HAnimJoint47.children[1] = HAnimJoint58;

HAnimJoint HAnimJoint81 = createNode("HAnimJoint");
HAnimJoint81.name = "r_hip";
HAnimJoint81.DEF = "hanim_r_hip";
HAnimJoint81.center = new SFVec3f(new float[-0.0961,0.9124,-0.0001]);
HAnimJoint81.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment82 = createNode("HAnimSegment");
HAnimSegment82.name = "r_thigh";
HAnimSegment82.DEF = "hanim_r_thigh";
HAnimSite HAnimSite83 = createNode("HAnimSite");
HAnimSite83.name = "r_knee_crease_pt";
HAnimSite83.DEF = "hanim_r_knee_crease_pt";
HAnimSite83.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
HAnimSegment82.children = new MFNode();

HAnimSegment82.children[0] = HAnimSite83;

HAnimSite HAnimSite84 = createNode("HAnimSite");
HAnimSite84.name = "r_femoral_lateral_epicn_pt";
HAnimSite84.DEF = "hanim_r_femoral_lateral_epicn_pt";
HAnimSite84.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
HAnimSegment82.children[1] = HAnimSite84;

HAnimSite HAnimSite85 = createNode("HAnimSite");
HAnimSite85.name = "r_femoral_medial_epicn_pt";
HAnimSite85.DEF = "hanim_r_femoral_medial_epicn_pt";
HAnimSite85.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
HAnimSegment82.children[2] = HAnimSite85;

HAnimJoint81.children = new MFNode();

HAnimJoint81.children[0] = HAnimSegment82;

HAnimJoint HAnimJoint86 = createNode("HAnimJoint");
HAnimJoint86.name = "r_knee";
HAnimJoint86.DEF = "hanim_r_knee";
HAnimJoint86.center = new SFVec3f(new float[-0.104,0.4867,0.0308]);
HAnimJoint86.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment87 = createNode("HAnimSegment");
HAnimSegment87.name = "r_calf";
HAnimSegment87.DEF = "hanim_r_calf";
HAnimJoint86.children = new MFNode();

HAnimJoint86.children[0] = HAnimSegment87;

HAnimJoint HAnimJoint88 = createNode("HAnimJoint");
HAnimJoint88.name = "r_ankle";
HAnimJoint88.DEF = "hanim_r_ankle";
HAnimJoint88.center = new SFVec3f(new float[-0.1101,0.0656,-0.0736]);
HAnimJoint88.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment89 = createNode("HAnimSegment");
HAnimSegment89.name = "r_hindfoot";
HAnimSegment89.DEF = "hanim_r_hindfoot";
HAnimSite HAnimSite90 = createNode("HAnimSite");
HAnimSite90.name = "r_lateral_malleolus_pt";
HAnimSite90.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite90.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
HAnimSegment89.children = new MFNode();

HAnimSegment89.children[0] = HAnimSite90;

HAnimSite HAnimSite91 = createNode("HAnimSite");
HAnimSite91.name = "r_medial_malleolus_pt";
HAnimSite91.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite91.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
HAnimSegment89.children[1] = HAnimSite91;

HAnimSite HAnimSite92 = createNode("HAnimSite");
HAnimSite92.name = "r_sphyrion_pt";
HAnimSite92.DEF = "hanim_r_sphyrion_pt";
HAnimSite92.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
HAnimSegment89.children[2] = HAnimSite92;

HAnimSite HAnimSite93 = createNode("HAnimSite");
HAnimSite93.name = "r_calcaneous_post_pt";
HAnimSite93.DEF = "hanim_r_calcaneous_post_pt";
HAnimSite93.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
HAnimSegment89.children[3] = HAnimSite93;

HAnimJoint88.children = new MFNode();

HAnimJoint88.children[0] = HAnimSegment89;

HAnimJoint HAnimJoint94 = createNode("HAnimJoint");
HAnimJoint94.name = "r_subtalar";
HAnimJoint94.DEF = "hanim_r_subtalar";
HAnimJoint94.center = new SFVec3f(new float[-0.1086,0.0001,-0.0368]);
HAnimJoint94.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment95 = createNode("HAnimSegment");
HAnimSegment95.name = "r_midproximal";
HAnimSegment95.DEF = "hanim_r_midproximal";
HAnimJoint94.children = new MFNode();

HAnimJoint94.children[0] = HAnimSegment95;

HAnimJoint HAnimJoint96 = createNode("HAnimJoint");
HAnimJoint96.name = "r_midtarsal";
HAnimJoint96.DEF = "hanim_r_midtarsal";
HAnimJoint96.center = new SFVec3f(new float[-0.1086,0.0001,0.0368]);
HAnimJoint96.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment97 = createNode("HAnimSegment");
HAnimSegment97.name = "r_middistal";
HAnimSegment97.DEF = "hanim_r_middistal";
HAnimSite HAnimSite98 = createNode("HAnimSite");
HAnimSite98.name = "r_metatarsal_pha1_pt";
HAnimSite98.DEF = "hanim_r_metatarsal_pha1_pt";
HAnimSite98.translation = new SFVec3f(new float[-0.0521,0.026,0.0127]);
HAnimSegment97.children = new MFNode();

HAnimSegment97.children[0] = HAnimSite98;

HAnimJoint96.children = new MFNode();

HAnimJoint96.children[0] = HAnimSegment97;

HAnimJoint HAnimJoint99 = createNode("HAnimJoint");
HAnimJoint99.name = "r_metatarsal";
HAnimJoint99.DEF = "hanim_r_metatarsal";
HAnimJoint99.center = new SFVec3f(new float[-0.1086,0,0.0762]);
HAnimJoint99.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment100 = createNode("HAnimSegment");
HAnimSegment100.name = "r_forefoot";
HAnimSegment100.DEF = "hanim_r_forefoot";
HAnimSite HAnimSite101 = createNode("HAnimSite");
HAnimSite101.name = "r_forefoot_tip";
HAnimSite101.DEF = "hanim_r_forefoot_tip";
HAnimSite101.translation = new SFVec3f(new float[-0.1043,0.0227,0.145]);
HAnimSegment100.children = new MFNode();

HAnimSegment100.children[0] = HAnimSite101;

HAnimSite HAnimSite102 = createNode("HAnimSite");
HAnimSite102.name = "r_metatarsal_pha5_pt";
HAnimSite102.DEF = "hanim_r_metatarsal_pha5_pt";
HAnimSite102.translation = new SFVec3f(new float[-0.1523,0.0166,0.0895]);
HAnimSegment100.children[1] = HAnimSite102;

HAnimSite HAnimSite103 = createNode("HAnimSite");
HAnimSite103.name = "r_digit2_pt";
HAnimSite103.DEF = "hanim_r_digit2_pt";
HAnimSite103.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
HAnimSegment100.children[2] = HAnimSite103;

HAnimJoint99.children = new MFNode();

HAnimJoint99.children[0] = HAnimSegment100;

HAnimJoint96.children[1] = HAnimJoint99;

HAnimJoint94.children[1] = HAnimJoint96;

HAnimJoint88.children[1] = HAnimJoint94;

HAnimJoint86.children[1] = HAnimJoint88;

HAnimJoint81.children[1] = HAnimJoint86;

HAnimJoint47.children[2] = HAnimJoint81;

HAnimJoint45.children[1] = HAnimJoint47;

HAnimJoint HAnimJoint104 = createNode("HAnimJoint");
HAnimJoint104.name = "vl5";
HAnimJoint104.DEF = "hanim_vl5";
HAnimJoint104.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimJoint104.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment105 = createNode("HAnimSegment");
HAnimSegment105.name = "l5";
HAnimSegment105.DEF = "hanim_l5";
HAnimSite HAnimSite106 = createNode("HAnimSite");
HAnimSite106.name = "waist_preferred_post_pt";
HAnimSite106.DEF = "hanim_waist_preferred_post_pt";
HAnimSite106.translation = new SFVec3f(new float[0,1.0915,-0.1091]);
HAnimSegment105.children = new MFNode();

HAnimSegment105.children[0] = HAnimSite106;

HAnimSite HAnimSite107 = createNode("HAnimSite");
HAnimSite107.name = "navel_pt";
HAnimSite107.DEF = "hanim_navel_pt";
HAnimSite107.translation = new SFVec3f(new float[0.0069,1.0966,0.1017]);
HAnimSegment105.children[1] = HAnimSite107;

HAnimJoint104.children = new MFNode();

HAnimJoint104.children[0] = HAnimSegment105;

HAnimJoint HAnimJoint108 = createNode("HAnimJoint");
HAnimJoint108.name = "vl4";
HAnimJoint108.DEF = "hanim_vl4";
HAnimJoint108.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimJoint108.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment109 = createNode("HAnimSegment");
HAnimSegment109.name = "l4";
HAnimSegment109.DEF = "hanim_l4";
HAnimJoint108.children = new MFNode();

HAnimJoint108.children[0] = HAnimSegment109;

HAnimJoint HAnimJoint110 = createNode("HAnimJoint");
HAnimJoint110.name = "vl3";
HAnimJoint110.DEF = "hanim_vl3";
HAnimJoint110.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimJoint110.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment111 = createNode("HAnimSegment");
HAnimSegment111.name = "l3";
HAnimSegment111.DEF = "hanim_l3";
HAnimJoint110.children = new MFNode();

HAnimJoint110.children[0] = HAnimSegment111;

HAnimJoint HAnimJoint112 = createNode("HAnimJoint");
HAnimJoint112.name = "vl2";
HAnimJoint112.DEF = "hanim_vl2";
HAnimJoint112.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimJoint112.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment113 = createNode("HAnimSegment");
HAnimSegment113.name = "l2";
HAnimSegment113.DEF = "hanim_l2";
HAnimSite HAnimSite114 = createNode("HAnimSite");
HAnimSite114.name = "r_rib10_pt";
HAnimSite114.DEF = "hanim_r_rib10_pt";
HAnimSite114.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
HAnimSegment113.children = new MFNode();

HAnimSegment113.children[0] = HAnimSite114;

HAnimSite HAnimSite115 = createNode("HAnimSite");
HAnimSite115.name = "l_rib10_pt";
HAnimSite115.DEF = "hanim_l_rib10_pt";
HAnimSite115.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
HAnimSegment113.children[1] = HAnimSite115;

HAnimSite HAnimSite116 = createNode("HAnimSite");
HAnimSite116.name = "rib10_midspine_pt";
HAnimSite116.DEF = "hanim_rib10_midspine_pt";
HAnimSite116.translation = new SFVec3f(new float[0.0049,1.1908,-0.1113]);
HAnimSegment113.children[2] = HAnimSite116;

HAnimJoint112.children = new MFNode();

HAnimJoint112.children[0] = HAnimSegment113;

HAnimJoint HAnimJoint117 = createNode("HAnimJoint");
HAnimJoint117.name = "vl1";
HAnimJoint117.DEF = "hanim_vl1";
HAnimJoint117.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimJoint117.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment118 = createNode("HAnimSegment");
HAnimSegment118.name = "l1";
HAnimSegment118.DEF = "hanim_l1";
HAnimJoint117.children = new MFNode();

HAnimJoint117.children[0] = HAnimSegment118;

HAnimJoint HAnimJoint119 = createNode("HAnimJoint");
HAnimJoint119.name = "vt12";
HAnimJoint119.DEF = "hanim_vt12";
HAnimJoint119.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimJoint119.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment120 = createNode("HAnimSegment");
HAnimSegment120.name = "t12";
HAnimSegment120.DEF = "hanim_t12";
HAnimJoint119.children = new MFNode();

HAnimJoint119.children[0] = HAnimSegment120;

HAnimJoint HAnimJoint121 = createNode("HAnimJoint");
HAnimJoint121.name = "vt11";
HAnimJoint121.DEF = "hanim_vt11";
HAnimJoint121.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimJoint121.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment122 = createNode("HAnimSegment");
HAnimSegment122.name = "t11";
HAnimSegment122.DEF = "hanim_t11";
HAnimJoint121.children = new MFNode();

HAnimJoint121.children[0] = HAnimSegment122;

HAnimJoint HAnimJoint123 = createNode("HAnimJoint");
HAnimJoint123.name = "vt10";
HAnimJoint123.DEF = "hanim_vt10";
HAnimJoint123.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimJoint123.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment124 = createNode("HAnimSegment");
HAnimSegment124.name = "t10";
HAnimSegment124.DEF = "hanim_t10";
HAnimSite HAnimSite125 = createNode("HAnimSite");
HAnimSite125.name = "substernale_pt";
HAnimSite125.DEF = "hanim_substernale_pt";
HAnimSite125.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
HAnimSegment124.children = new MFNode();

HAnimSegment124.children[0] = HAnimSite125;

HAnimJoint123.children = new MFNode();

HAnimJoint123.children[0] = HAnimSegment124;

HAnimJoint HAnimJoint126 = createNode("HAnimJoint");
HAnimJoint126.name = "vt9";
HAnimJoint126.DEF = "hanim_vt9";
HAnimJoint126.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimJoint126.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment127 = createNode("HAnimSegment");
HAnimSegment127.name = "t9";
HAnimSegment127.DEF = "hanim_t9";
HAnimSite HAnimSite128 = createNode("HAnimSite");
HAnimSite128.name = "r_thelion_pt";
HAnimSite128.DEF = "hanim_r_thelion_pt";
HAnimSite128.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
HAnimSegment127.children = new MFNode();

HAnimSegment127.children[0] = HAnimSite128;

HAnimSite HAnimSite129 = createNode("HAnimSite");
HAnimSite129.name = "l_thelion_pt";
HAnimSite129.DEF = "hanim_l_thelion_pt";
HAnimSite129.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
HAnimSegment127.children[1] = HAnimSite129;

HAnimJoint126.children = new MFNode();

HAnimJoint126.children[0] = HAnimSegment127;

HAnimJoint HAnimJoint130 = createNode("HAnimJoint");
HAnimJoint130.name = "vt8";
HAnimJoint130.DEF = "hanim_vt8";
HAnimJoint130.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimJoint130.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment131 = createNode("HAnimSegment");
HAnimSegment131.name = "t8";
HAnimSegment131.DEF = "hanim_t8";
HAnimJoint130.children = new MFNode();

HAnimJoint130.children[0] = HAnimSegment131;

HAnimJoint HAnimJoint132 = createNode("HAnimJoint");
HAnimJoint132.name = "vt7";
HAnimJoint132.DEF = "hanim_vt7";
HAnimJoint132.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimJoint132.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment133 = createNode("HAnimSegment");
HAnimSegment133.name = "t7";
HAnimSegment133.DEF = "hanim_t7";
HAnimJoint132.children = new MFNode();

HAnimJoint132.children[0] = HAnimSegment133;

HAnimJoint HAnimJoint134 = createNode("HAnimJoint");
HAnimJoint134.name = "vt6";
HAnimJoint134.DEF = "hanim_vt6";
HAnimJoint134.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimJoint134.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment135 = createNode("HAnimSegment");
HAnimSegment135.name = "t6";
HAnimSegment135.DEF = "hanim_t6";
HAnimJoint134.children = new MFNode();

HAnimJoint134.children[0] = HAnimSegment135;

HAnimJoint HAnimJoint136 = createNode("HAnimJoint");
HAnimJoint136.name = "vt5";
HAnimJoint136.DEF = "hanim_vt5";
HAnimJoint136.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimJoint136.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment137 = createNode("HAnimSegment");
HAnimSegment137.name = "t5";
HAnimSegment137.DEF = "hanim_t5";
HAnimJoint136.children = new MFNode();

HAnimJoint136.children[0] = HAnimSegment137;

HAnimJoint HAnimJoint138 = createNode("HAnimJoint");
HAnimJoint138.name = "vt4";
HAnimJoint138.DEF = "hanim_vt4";
HAnimJoint138.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimJoint138.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment139 = createNode("HAnimSegment");
HAnimSegment139.name = "t4";
HAnimSegment139.DEF = "hanim_t4";
HAnimJoint138.children = new MFNode();

HAnimJoint138.children[0] = HAnimSegment139;

HAnimJoint HAnimJoint140 = createNode("HAnimJoint");
HAnimJoint140.name = "vt3";
HAnimJoint140.DEF = "hanim_vt3";
HAnimJoint140.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimJoint140.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment141 = createNode("HAnimSegment");
HAnimSegment141.name = "t3";
HAnimSegment141.DEF = "hanim_t3";
HAnimJoint140.children = new MFNode();

HAnimJoint140.children[0] = HAnimSegment141;

HAnimJoint HAnimJoint142 = createNode("HAnimJoint");
HAnimJoint142.name = "vt2";
HAnimJoint142.DEF = "hanim_vt2";
HAnimJoint142.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimJoint142.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment143 = createNode("HAnimSegment");
HAnimSegment143.name = "t2";
HAnimSegment143.DEF = "hanim_t2";
HAnimJoint142.children = new MFNode();

HAnimJoint142.children[0] = HAnimSegment143;

HAnimJoint HAnimJoint144 = createNode("HAnimJoint");
HAnimJoint144.name = "vt1";
HAnimJoint144.DEF = "hanim_vt1";
HAnimJoint144.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimJoint144.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment145 = createNode("HAnimSegment");
HAnimSegment145.name = "t1";
HAnimSegment145.DEF = "hanim_t1";
HAnimSite HAnimSite146 = createNode("HAnimSite");
HAnimSite146.name = "suprasternale_pt";
HAnimSite146.DEF = "hanim_suprasternale_pt";
HAnimSite146.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
HAnimSegment145.children = new MFNode();

HAnimSegment145.children[0] = HAnimSite146;

HAnimSite HAnimSite147 = createNode("HAnimSite");
HAnimSite147.name = "cervicale_pt";
HAnimSite147.DEF = "hanim_cervicale_pt";
HAnimSite147.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
HAnimSegment145.children[1] = HAnimSite147;

HAnimJoint144.children = new MFNode();

HAnimJoint144.children[0] = HAnimSegment145;

HAnimJoint HAnimJoint148 = createNode("HAnimJoint");
HAnimJoint148.name = "vc7";
HAnimJoint148.DEF = "hanim_vc7";
HAnimJoint148.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimJoint148.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment149 = createNode("HAnimSegment");
HAnimSegment149.name = "c7";
HAnimSegment149.DEF = "hanim_c7";
HAnimSite HAnimSite150 = createNode("HAnimSite");
HAnimSite150.name = "r_neck_base_pt";
HAnimSite150.DEF = "hanim_r_neck_base_pt";
HAnimSite150.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
HAnimSegment149.children = new MFNode();

HAnimSegment149.children[0] = HAnimSite150;

HAnimSite HAnimSite151 = createNode("HAnimSite");
HAnimSite151.name = "l_neck_base_pt";
HAnimSite151.DEF = "hanim_l_neck_base_pt";
HAnimSite151.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
HAnimSegment149.children[1] = HAnimSite151;

HAnimJoint148.children = new MFNode();

HAnimJoint148.children[0] = HAnimSegment149;

HAnimJoint HAnimJoint152 = createNode("HAnimJoint");
HAnimJoint152.name = "vc6";
HAnimJoint152.DEF = "hanim_vc6";
HAnimJoint152.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimJoint152.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment153 = createNode("HAnimSegment");
HAnimSegment153.name = "c6";
HAnimSegment153.DEF = "hanim_c6";
HAnimJoint152.children = new MFNode();

HAnimJoint152.children[0] = HAnimSegment153;

HAnimJoint HAnimJoint154 = createNode("HAnimJoint");
HAnimJoint154.name = "vc5";
HAnimJoint154.DEF = "hanim_vc5";
HAnimJoint154.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimJoint154.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment155 = createNode("HAnimSegment");
HAnimSegment155.name = "c5";
HAnimSegment155.DEF = "hanim_c5";
HAnimJoint154.children = new MFNode();

HAnimJoint154.children[0] = HAnimSegment155;

HAnimJoint HAnimJoint156 = createNode("HAnimJoint");
HAnimJoint156.name = "vc4";
HAnimJoint156.DEF = "hanim_vc4";
HAnimJoint156.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimJoint156.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment157 = createNode("HAnimSegment");
HAnimSegment157.name = "c4";
HAnimSegment157.DEF = "hanim_c4";
HAnimJoint156.children = new MFNode();

HAnimJoint156.children[0] = HAnimSegment157;

HAnimJoint HAnimJoint158 = createNode("HAnimJoint");
HAnimJoint158.name = "vc3";
HAnimJoint158.DEF = "hanim_vc3";
HAnimJoint158.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimJoint158.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment159 = createNode("HAnimSegment");
HAnimSegment159.name = "c3";
HAnimSegment159.DEF = "hanim_c3";
HAnimJoint158.children = new MFNode();

HAnimJoint158.children[0] = HAnimSegment159;

HAnimJoint HAnimJoint160 = createNode("HAnimJoint");
HAnimJoint160.name = "vc2";
HAnimJoint160.DEF = "hanim_vc2";
HAnimJoint160.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimJoint160.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment161 = createNode("HAnimSegment");
HAnimSegment161.name = "c2";
HAnimSegment161.DEF = "hanim_c2";
HAnimJoint160.children = new MFNode();

HAnimJoint160.children[0] = HAnimSegment161;

HAnimJoint HAnimJoint162 = createNode("HAnimJoint");
HAnimJoint162.name = "vc1";
HAnimJoint162.DEF = "hanim_vc1";
HAnimJoint162.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimJoint162.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment163 = createNode("HAnimSegment");
HAnimSegment163.name = "c1";
HAnimSegment163.DEF = "hanim_c1";
HAnimJoint162.children = new MFNode();

HAnimJoint162.children[0] = HAnimSegment163;

HAnimJoint HAnimJoint164 = createNode("HAnimJoint");
HAnimJoint164.name = "skullbase";
HAnimJoint164.DEF = "hanim_skullbase";
HAnimJoint164.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint164.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment165 = createNode("HAnimSegment");
HAnimSegment165.name = "skull";
HAnimSegment165.DEF = "hanim_skull";
HAnimSite HAnimSite166 = createNode("HAnimSite");
HAnimSite166.name = "skull_tip";
HAnimSite166.DEF = "hanim_skull_tip";
HAnimSite166.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
//TODO move skull_tip x to zero, check others for symmetry
HAnimSegment165.children = new MFNode();

HAnimSegment165.children[0] = HAnimSite166;

HAnimSite HAnimSite167 = createNode("HAnimSite");
HAnimSite167.name = "sellion_pt";
HAnimSite167.DEF = "hanim_sellion_pt";
HAnimSite167.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
HAnimSegment165.children[1] = HAnimSite167;

HAnimSite HAnimSite168 = createNode("HAnimSite");
HAnimSite168.name = "r_infraorbitale_pt";
HAnimSite168.DEF = "hanim_r_infraorbitale_pt";
HAnimSite168.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
HAnimSegment165.children[2] = HAnimSite168;

HAnimSite HAnimSite169 = createNode("HAnimSite");
HAnimSite169.name = "l_infraorbitale_pt";
HAnimSite169.DEF = "hanim_l_infraorbitale_pt";
HAnimSite169.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
HAnimSegment165.children[3] = HAnimSite169;

HAnimSite HAnimSite170 = createNode("HAnimSite");
HAnimSite170.name = "supramenton_pt";
HAnimSite170.DEF = "hanim_supramenton_pt";
HAnimSite170.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
HAnimSegment165.children[4] = HAnimSite170;

HAnimSite HAnimSite171 = createNode("HAnimSite");
HAnimSite171.name = "r_tragion_pt";
HAnimSite171.DEF = "hanim_r_tragion_pt";
HAnimSite171.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
HAnimSegment165.children[5] = HAnimSite171;

HAnimSite HAnimSite172 = createNode("HAnimSite");
HAnimSite172.name = "r_gonion_pt";
HAnimSite172.DEF = "hanim_r_gonion_pt";
HAnimSite172.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
HAnimSegment165.children[6] = HAnimSite172;

HAnimSite HAnimSite173 = createNode("HAnimSite");
HAnimSite173.name = "l_tragion_pt";
HAnimSite173.DEF = "hanim_l_tragion_pt";
HAnimSite173.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
HAnimSegment165.children[7] = HAnimSite173;

HAnimSite HAnimSite174 = createNode("HAnimSite");
HAnimSite174.name = "l_gonion_pt";
HAnimSite174.DEF = "hanim_l_gonion_pt";
HAnimSite174.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
HAnimSegment165.children[8] = HAnimSite174;

HAnimSite HAnimSite175 = createNode("HAnimSite");
HAnimSite175.name = "nuchale_pt";
HAnimSite175.DEF = "hanim_nuchale_pt";
HAnimSite175.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
HAnimSegment165.children[9] = HAnimSite175;

HAnimJoint164.children = new MFNode();

HAnimJoint164.children[0] = HAnimSegment165;

HAnimJoint HAnimJoint176 = createNode("HAnimJoint");
HAnimJoint176.name = "l_eyeball_joint";
HAnimJoint176.DEF = "hanim_l_eyeball_joint";
HAnimJoint176.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
HAnimJoint176.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment177 = createNode("HAnimSegment");
HAnimSegment177.name = "l_eyeball";
HAnimSegment177.DEF = "hanim_l_eyeball";
HAnimSite HAnimSite178 = createNode("HAnimSite");
HAnimSite178.name = "l_eyeball_site_view";
HAnimSite178.DEF = "hanim_l_eyeball_site_view";
HAnimSite178.translation = new SFVec3f(new float[0.034,1.64,0.05]);
Viewpoint Viewpoint179 = createNode("Viewpoint");
Viewpoint179.DEF = "hanim_l_eyeball_site_viewpoint";
Viewpoint179.description = "l_eyeball_site_viewpoint looking forward";
Viewpoint179.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint179.position = new SFVec3f(new float[0,0,0]);
HAnimSite178.children = new MFNode();

HAnimSite178.children[0] = Viewpoint179;

HAnimSegment177.children = new MFNode();

HAnimSegment177.children[0] = HAnimSite178;

HAnimJoint176.children = new MFNode();

HAnimJoint176.children[0] = HAnimSegment177;

HAnimJoint164.children[1] = HAnimJoint176;

HAnimJoint HAnimJoint180 = createNode("HAnimJoint");
HAnimJoint180.name = "l_eyelid_joint";
HAnimJoint180.DEF = "hanim_l_eyelid_joint";
HAnimJoint180.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
HAnimJoint180.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment181 = createNode("HAnimSegment");
HAnimSegment181.name = "l_eyelid";
HAnimSegment181.DEF = "hanim_l_eyelid";
HAnimJoint180.children = new MFNode();

HAnimJoint180.children[0] = HAnimSegment181;

HAnimJoint164.children[2] = HAnimJoint180;

HAnimJoint HAnimJoint182 = createNode("HAnimJoint");
HAnimJoint182.name = "l_eyebrow_joint";
HAnimJoint182.DEF = "hanim_l_eyebrow_joint";
HAnimJoint182.center = new SFVec3f(new float[0.0336,1.635,0.0506]);
HAnimJoint182.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment183 = createNode("HAnimSegment");
HAnimSegment183.name = "l_eyebrow";
HAnimSegment183.DEF = "hanim_l_eyebrow";
HAnimJoint182.children = new MFNode();

HAnimJoint182.children[0] = HAnimSegment183;

HAnimJoint164.children[3] = HAnimJoint182;

HAnimJoint HAnimJoint184 = createNode("HAnimJoint");
HAnimJoint184.name = "r_eyeball_joint";
HAnimJoint184.DEF = "hanim_r_eyeball_joint";
HAnimJoint184.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
HAnimJoint184.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment185 = createNode("HAnimSegment");
HAnimSegment185.name = "r_eyeball";
HAnimSegment185.DEF = "hanim_r_eyeball";
HAnimSite HAnimSite186 = createNode("HAnimSite");
HAnimSite186.name = "r_eyeball_site_view";
HAnimSite186.DEF = "hanim_r_eyeball_site_view";
HAnimSite186.translation = new SFVec3f(new float[-0.034,1.64,0.05]);
Viewpoint Viewpoint187 = createNode("Viewpoint");
Viewpoint187.DEF = "hanim_r_eyeball_site_viewpoint";
Viewpoint187.description = "r_eyeball_site_viewpoint looking forward";
Viewpoint187.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint187.position = new SFVec3f(new float[0,0,0]);
HAnimSite186.children = new MFNode();

HAnimSite186.children[0] = Viewpoint187;

HAnimSegment185.children = new MFNode();

HAnimSegment185.children[0] = HAnimSite186;

HAnimJoint184.children = new MFNode();

HAnimJoint184.children[0] = HAnimSegment185;

HAnimJoint164.children[4] = HAnimJoint184;

HAnimJoint HAnimJoint188 = createNode("HAnimJoint");
HAnimJoint188.name = "r_eyelid_joint";
HAnimJoint188.DEF = "hanim_r_eyelid_joint";
HAnimJoint188.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
HAnimJoint188.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment189 = createNode("HAnimSegment");
HAnimSegment189.name = "r_eyelid";
HAnimSegment189.DEF = "hanim_r_eyelid";
HAnimJoint188.children = new MFNode();

HAnimJoint188.children[0] = HAnimSegment189;

HAnimJoint164.children[5] = HAnimJoint188;

HAnimJoint HAnimJoint190 = createNode("HAnimJoint");
HAnimJoint190.name = "r_eyebrow_joint";
HAnimJoint190.DEF = "hanim_r_eyebrow_joint";
HAnimJoint190.center = new SFVec3f(new float[-0.0336,1.635,0.0506]);
HAnimJoint190.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment191 = createNode("HAnimSegment");
HAnimSegment191.name = "r_eyebrow";
HAnimSegment191.DEF = "hanim_r_eyebrow";
HAnimJoint190.children = new MFNode();

HAnimJoint190.children[0] = HAnimSegment191;

HAnimJoint164.children[6] = HAnimJoint190;

HAnimJoint HAnimJoint192 = createNode("HAnimJoint");
HAnimJoint192.name = "temporomandibular";
HAnimJoint192.DEF = "hanim_temporomandibular";
HAnimJoint192.center = new SFVec3f(new float[0,1.63,0.015]);
HAnimJoint192.stiffness = new SFVec3f(new float[0,0,0]);
//Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint
HAnimSegment HAnimSegment193 = createNode("HAnimSegment");
HAnimSegment193.name = "jaw";
HAnimSegment193.DEF = "hanim_jaw";
HAnimSite HAnimSite194 = createNode("HAnimSite");
HAnimSite194.name = "temporomandibular_l_site_pt";
HAnimSite194.DEF = "hanim_temporomandibular_l_site_pt";
HAnimSite194.translation = new SFVec3f(new float[0.045,1.63,0]);
HAnimSegment193.children = new MFNode();

HAnimSegment193.children[0] = HAnimSite194;

HAnimSite HAnimSite195 = createNode("HAnimSite");
HAnimSite195.name = "temporomandibular_r_site_pt";
HAnimSite195.DEF = "hanim_temporomandibular_r_site_pt";
HAnimSite195.translation = new SFVec3f(new float[-0.045,1.63,0]);
HAnimSegment193.children[1] = HAnimSite195;

HAnimJoint192.children = new MFNode();

HAnimJoint192.children[0] = HAnimSegment193;

HAnimJoint164.children[7] = HAnimJoint192;

HAnimJoint162.children[1] = HAnimJoint164;

HAnimJoint160.children[1] = HAnimJoint162;

HAnimJoint158.children[1] = HAnimJoint160;

HAnimJoint156.children[1] = HAnimJoint158;

HAnimJoint154.children[1] = HAnimJoint156;

HAnimJoint152.children[1] = HAnimJoint154;

HAnimJoint148.children[1] = HAnimJoint152;

HAnimJoint144.children[1] = HAnimJoint148;

HAnimJoint HAnimJoint196 = createNode("HAnimJoint");
HAnimJoint196.name = "l_sternoclavicular";
HAnimJoint196.DEF = "hanim_l_sternoclavicular";
HAnimJoint196.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint196.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment197 = createNode("HAnimSegment");
HAnimSegment197.name = "l_clavicle";
HAnimSegment197.DEF = "hanim_l_clavicle";
HAnimSite HAnimSite198 = createNode("HAnimSite");
HAnimSite198.name = "l_clavicale_pt";
HAnimSite198.DEF = "hanim_l_clavicale_pt";
HAnimSite198.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
HAnimSegment197.children = new MFNode();

HAnimSegment197.children[0] = HAnimSite198;

HAnimSite HAnimSite199 = createNode("HAnimSite");
HAnimSite199.name = "l_acromion_pt";
HAnimSite199.DEF = "hanim_l_acromion_pt";
HAnimSite199.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
HAnimSegment197.children[1] = HAnimSite199;

HAnimSite HAnimSite200 = createNode("HAnimSite");
HAnimSite200.name = "l_axilla_ant_pt";
HAnimSite200.DEF = "hanim_l_axilla_ant_pt";
HAnimSite200.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
HAnimSegment197.children[2] = HAnimSite200;

HAnimSite HAnimSite201 = createNode("HAnimSite");
HAnimSite201.name = "l_axilla_post_pt";
HAnimSite201.DEF = "hanim_l_axilla_post_pt";
HAnimSite201.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
HAnimSegment197.children[3] = HAnimSite201;

HAnimJoint196.children = new MFNode();

HAnimJoint196.children[0] = HAnimSegment197;

HAnimJoint HAnimJoint202 = createNode("HAnimJoint");
HAnimJoint202.name = "l_acromioclavicular";
HAnimJoint202.DEF = "hanim_l_acromioclavicular";
HAnimJoint202.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint202.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment203 = createNode("HAnimSegment");
HAnimSegment203.name = "l_scapula";
HAnimSegment203.DEF = "hanim_l_scapula";
HAnimJoint202.children = new MFNode();

HAnimJoint202.children[0] = HAnimSegment203;

HAnimJoint HAnimJoint204 = createNode("HAnimJoint");
HAnimJoint204.name = "l_shoulder";
HAnimJoint204.DEF = "hanim_l_shoulder";
HAnimJoint204.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimJoint204.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment205 = createNode("HAnimSegment");
HAnimSegment205.name = "l_upperarm";
HAnimSegment205.DEF = "hanim_l_upperarm";
HAnimSite HAnimSite206 = createNode("HAnimSite");
HAnimSite206.name = "l_humeral_lateral_epicn_pt";
HAnimSite206.DEF = "hanim_l_humeral_lateral_epicn_pt";
HAnimSite206.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
HAnimSegment205.children = new MFNode();

HAnimSegment205.children[0] = HAnimSite206;

HAnimJoint204.children = new MFNode();

HAnimJoint204.children[0] = HAnimSegment205;

HAnimJoint HAnimJoint207 = createNode("HAnimJoint");
HAnimJoint207.name = "l_elbow";
HAnimJoint207.DEF = "hanim_l_elbow";
HAnimJoint207.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimJoint207.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment208 = createNode("HAnimSegment");
HAnimSegment208.name = "l_forearm";
HAnimSegment208.DEF = "hanim_l_forearm";
HAnimSite HAnimSite209 = createNode("HAnimSite");
HAnimSite209.name = "l_radial_styloid_pt";
HAnimSite209.DEF = "hanim_l_radial_styloid_pt";
HAnimSite209.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
HAnimSegment208.children = new MFNode();

HAnimSegment208.children[0] = HAnimSite209;

HAnimSite HAnimSite210 = createNode("HAnimSite");
HAnimSite210.name = "l_olecranon_pt";
HAnimSite210.DEF = "hanim_l_olecranon_pt";
HAnimSite210.translation = new SFVec3f(new float[0.1962,1.1375,-0.1123]);
HAnimSegment208.children[1] = HAnimSite210;

HAnimSite HAnimSite211 = createNode("HAnimSite");
HAnimSite211.name = "l_humeral_medial_epicn_pt";
HAnimSite211.DEF = "hanim_l_humeral_medial_epicn_pt";
HAnimSite211.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
HAnimSegment208.children[2] = HAnimSite211;

HAnimSite HAnimSite212 = createNode("HAnimSite");
HAnimSite212.name = "l_radiale_pt";
HAnimSite212.DEF = "hanim_l_radiale_pt";
HAnimSite212.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
HAnimSegment208.children[3] = HAnimSite212;

HAnimJoint207.children = new MFNode();

HAnimJoint207.children[0] = HAnimSegment208;

HAnimJoint HAnimJoint213 = createNode("HAnimJoint");
HAnimJoint213.name = "l_wrist";
HAnimJoint213.DEF = "hanim_l_wrist";
HAnimJoint213.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint213.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment214 = createNode("HAnimSegment");
HAnimSegment214.name = "l_hand";
HAnimSegment214.DEF = "hanim_l_hand";
HAnimSite HAnimSite215 = createNode("HAnimSite");
HAnimSite215.name = "l_metacarpal_pha2_pt";
HAnimSite215.DEF = "hanim_l_metacarpal_pha2_pt";
HAnimSite215.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
HAnimSegment214.children = new MFNode();

HAnimSegment214.children[0] = HAnimSite215;

HAnimSite HAnimSite216 = createNode("HAnimSite");
HAnimSite216.name = "l_ulnar_styloid_pt";
HAnimSite216.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite216.translation = new SFVec3f(new float[0.2142,0.8529,-0.0648]);
HAnimSegment214.children[1] = HAnimSite216;

HAnimSite HAnimSite217 = createNode("HAnimSite");
HAnimSite217.name = "l_metacarpal_pha5_pt";
HAnimSite217.DEF = "hanim_l_metacarpal_pha5_pt";
HAnimSite217.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
HAnimSegment214.children[2] = HAnimSite217;

HAnimSite HAnimSite218 = createNode("HAnimSite");
HAnimSite218.name = "l_hand_front_view";
HAnimSite218.DEF = "hanim_l_hand_front_view";
HAnimSite218.translation = new SFVec3f(new float[0.3,0.75,0.45]);
Viewpoint Viewpoint219 = createNode("Viewpoint");
Viewpoint219.DEF = "hanim_l_hand_front_viewpoint";
Viewpoint219.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
Viewpoint219.description = "left hand front";
Viewpoint219.position = new SFVec3f(new float[0,0,0]);
HAnimSite218.children = new MFNode();

HAnimSite218.children[0] = Viewpoint219;

HAnimSegment214.children[3] = HAnimSite218;

HAnimJoint213.children = new MFNode();

HAnimJoint213.children[0] = HAnimSegment214;

HAnimJoint HAnimJoint220 = createNode("HAnimJoint");
HAnimJoint220.name = "l_thumb1";
HAnimJoint220.DEF = "hanim_l_thumb1";
HAnimJoint220.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint220.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment221 = createNode("HAnimSegment");
HAnimSegment221.name = "l_thumb_metacarpal";
HAnimSegment221.DEF = "hanim_l_thumb_metacarpal";
HAnimJoint220.children = new MFNode();

HAnimJoint220.children[0] = HAnimSegment221;

HAnimJoint HAnimJoint222 = createNode("HAnimJoint");
HAnimJoint222.name = "l_thumb2";
HAnimJoint222.DEF = "hanim_l_thumb2";
HAnimJoint222.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint222.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment223 = createNode("HAnimSegment");
HAnimSegment223.name = "l_thumb_proximal";
HAnimSegment223.DEF = "hanim_l_thumb_proximal";
HAnimJoint222.children = new MFNode();

HAnimJoint222.children[0] = HAnimSegment223;

HAnimJoint HAnimJoint224 = createNode("HAnimJoint");
HAnimJoint224.name = "l_thumb3";
HAnimJoint224.DEF = "hanim_l_thumb3";
HAnimJoint224.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint224.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment225 = createNode("HAnimSegment");
HAnimSegment225.name = "l_thumb_distal";
HAnimSegment225.DEF = "hanim_l_thumb_distal";
HAnimSite HAnimSite226 = createNode("HAnimSite");
HAnimSite226.name = "l_thumb_distal_tip";
HAnimSite226.DEF = "hanim_l_thumb_distal_tip";
HAnimSite226.translation = new SFVec3f(new float[0.1982,0.8061,0.0759]);
HAnimSegment225.children = new MFNode();

HAnimSegment225.children[0] = HAnimSite226;

HAnimJoint224.children = new MFNode();

HAnimJoint224.children[0] = HAnimSegment225;

HAnimJoint222.children[1] = HAnimJoint224;

HAnimJoint220.children[1] = HAnimJoint222;

HAnimJoint213.children[1] = HAnimJoint220;

HAnimJoint HAnimJoint227 = createNode("HAnimJoint");
HAnimJoint227.name = "l_index0";
HAnimJoint227.DEF = "hanim_l_index0";
HAnimJoint227.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint227.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment228 = createNode("HAnimSegment");
HAnimSegment228.name = "l_index_metacarpal";
HAnimSegment228.DEF = "hanim_l_index_metacarpal";
HAnimJoint227.children = new MFNode();

HAnimJoint227.children[0] = HAnimSegment228;

HAnimJoint HAnimJoint229 = createNode("HAnimJoint");
HAnimJoint229.name = "l_index1";
HAnimJoint229.DEF = "hanim_l_index1";
HAnimJoint229.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint229.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment230 = createNode("HAnimSegment");
HAnimSegment230.name = "l_index_proximal";
HAnimSegment230.DEF = "hanim_l_index_proximal";
HAnimJoint229.children = new MFNode();

HAnimJoint229.children[0] = HAnimSegment230;

HAnimJoint HAnimJoint231 = createNode("HAnimJoint");
HAnimJoint231.name = "l_index2";
HAnimJoint231.DEF = "hanim_l_index2";
HAnimJoint231.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint231.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment232 = createNode("HAnimSegment");
HAnimSegment232.name = "l_index_middle";
HAnimSegment232.DEF = "hanim_l_index_middle";
HAnimJoint231.children = new MFNode();

HAnimJoint231.children[0] = HAnimSegment232;

HAnimJoint HAnimJoint233 = createNode("HAnimJoint");
HAnimJoint233.name = "l_index3";
HAnimJoint233.DEF = "hanim_l_index3";
HAnimJoint233.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint233.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment234 = createNode("HAnimSegment");
HAnimSegment234.name = "l_index_distal";
HAnimSegment234.DEF = "hanim_l_index_distal";
HAnimSite HAnimSite235 = createNode("HAnimSite");
HAnimSite235.name = "l_index_distal_tip";
HAnimSite235.DEF = "hanim_l_index_distal_tip";
HAnimSite235.translation = new SFVec3f(new float[0.2089,0.6858,-0.0245]);
HAnimSegment234.children = new MFNode();

HAnimSegment234.children[0] = HAnimSite235;

HAnimSite HAnimSite236 = createNode("HAnimSite");
HAnimSite236.name = "l_dactylion_pt";
HAnimSite236.DEF = "hanim_l_dactylion_pt";
HAnimSite236.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
HAnimSegment234.children[1] = HAnimSite236;

HAnimJoint233.children = new MFNode();

HAnimJoint233.children[0] = HAnimSegment234;

HAnimJoint231.children[1] = HAnimJoint233;

HAnimJoint229.children[1] = HAnimJoint231;

HAnimJoint227.children[1] = HAnimJoint229;

HAnimJoint213.children[2] = HAnimJoint227;

HAnimJoint HAnimJoint237 = createNode("HAnimJoint");
HAnimJoint237.name = "l_middle0";
HAnimJoint237.DEF = "hanim_l_middle0";
HAnimJoint237.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint237.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment238 = createNode("HAnimSegment");
HAnimSegment238.name = "l_middle_metacarpal";
HAnimSegment238.DEF = "hanim_l_middle_metacarpal";
HAnimJoint237.children = new MFNode();

HAnimJoint237.children[0] = HAnimSegment238;

HAnimJoint HAnimJoint239 = createNode("HAnimJoint");
HAnimJoint239.name = "l_middle1";
HAnimJoint239.DEF = "hanim_l_middle1";
HAnimJoint239.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint239.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment240 = createNode("HAnimSegment");
HAnimSegment240.name = "l_middle_proximal";
HAnimSegment240.DEF = "hanim_l_middle_proximal";
HAnimJoint239.children = new MFNode();

HAnimJoint239.children[0] = HAnimSegment240;

HAnimJoint HAnimJoint241 = createNode("HAnimJoint");
HAnimJoint241.name = "l_middle2";
HAnimJoint241.DEF = "hanim_l_middle2";
HAnimJoint241.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint241.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment242 = createNode("HAnimSegment");
HAnimSegment242.name = "l_middle_middle";
HAnimSegment242.DEF = "hanim_l_middle_middle";
HAnimJoint241.children = new MFNode();

HAnimJoint241.children[0] = HAnimSegment242;

HAnimJoint HAnimJoint243 = createNode("HAnimJoint");
HAnimJoint243.name = "l_middle3";
HAnimJoint243.DEF = "hanim_l_middle3";
HAnimJoint243.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint243.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment244 = createNode("HAnimSegment");
HAnimSegment244.name = "l_middle_distal";
HAnimSegment244.DEF = "hanim_l_middle_distal";
HAnimSite HAnimSite245 = createNode("HAnimSite");
HAnimSite245.name = "l_middle_distal_tip";
HAnimSite245.DEF = "hanim_l_middle_distal_tip";
HAnimSite245.translation = new SFVec3f(new float[0.208,0.6731,-0.0491]);
HAnimSegment244.children = new MFNode();

HAnimSegment244.children[0] = HAnimSite245;

HAnimJoint243.children = new MFNode();

HAnimJoint243.children[0] = HAnimSegment244;

HAnimJoint241.children[1] = HAnimJoint243;

HAnimJoint239.children[1] = HAnimJoint241;

HAnimJoint237.children[1] = HAnimJoint239;

HAnimJoint213.children[3] = HAnimJoint237;

HAnimJoint HAnimJoint246 = createNode("HAnimJoint");
HAnimJoint246.name = "l_ring0";
HAnimJoint246.DEF = "hanim_l_ring0";
HAnimJoint246.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint246.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment247 = createNode("HAnimSegment");
HAnimSegment247.name = "l_ring_metacarpal";
HAnimSegment247.DEF = "hanim_l_ring_metacarpal";
HAnimJoint246.children = new MFNode();

HAnimJoint246.children[0] = HAnimSegment247;

HAnimJoint HAnimJoint248 = createNode("HAnimJoint");
HAnimJoint248.name = "l_ring1";
HAnimJoint248.DEF = "hanim_l_ring1";
HAnimJoint248.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint248.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment249 = createNode("HAnimSegment");
HAnimSegment249.name = "l_ring_proximal";
HAnimSegment249.DEF = "hanim_l_ring_proximal";
HAnimJoint248.children = new MFNode();

HAnimJoint248.children[0] = HAnimSegment249;

HAnimJoint HAnimJoint250 = createNode("HAnimJoint");
HAnimJoint250.name = "l_ring2";
HAnimJoint250.DEF = "hanim_l_ring2";
HAnimJoint250.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint250.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment251 = createNode("HAnimSegment");
HAnimSegment251.name = "l_ring_middle";
HAnimSegment251.DEF = "hanim_l_ring_middle";
HAnimJoint250.children = new MFNode();

HAnimJoint250.children[0] = HAnimSegment251;

HAnimJoint HAnimJoint252 = createNode("HAnimJoint");
HAnimJoint252.name = "l_ring3";
HAnimJoint252.DEF = "hanim_l_ring3";
HAnimJoint252.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint252.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment253 = createNode("HAnimSegment");
HAnimSegment253.name = "l_ring_distal";
HAnimSegment253.DEF = "hanim_l_ring_distal";
HAnimSite HAnimSite254 = createNode("HAnimSite");
HAnimSite254.name = "l_ring_distal_tip";
HAnimSite254.DEF = "hanim_l_ring_distal_tip";
HAnimSite254.translation = new SFVec3f(new float[0.2035,0.675,-0.0756]);
HAnimSegment253.children = new MFNode();

HAnimSegment253.children[0] = HAnimSite254;

HAnimJoint252.children = new MFNode();

HAnimJoint252.children[0] = HAnimSegment253;

HAnimJoint250.children[1] = HAnimJoint252;

HAnimJoint248.children[1] = HAnimJoint250;

HAnimJoint246.children[1] = HAnimJoint248;

HAnimJoint213.children[4] = HAnimJoint246;

HAnimJoint HAnimJoint255 = createNode("HAnimJoint");
HAnimJoint255.name = "l_pinky0";
HAnimJoint255.DEF = "hanim_l_pinky0";
HAnimJoint255.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint255.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment256 = createNode("HAnimSegment");
HAnimSegment256.name = "l_pinky_metacarpal";
HAnimSegment256.DEF = "hanim_l_pinky_metacarpal";
HAnimJoint255.children = new MFNode();

HAnimJoint255.children[0] = HAnimSegment256;

HAnimJoint HAnimJoint257 = createNode("HAnimJoint");
HAnimJoint257.name = "l_pinky1";
HAnimJoint257.DEF = "hanim_l_pinky1";
HAnimJoint257.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint257.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment258 = createNode("HAnimSegment");
HAnimSegment258.name = "l_pinky_proximal";
HAnimSegment258.DEF = "hanim_l_pinky_proximal";
HAnimJoint257.children = new MFNode();

HAnimJoint257.children[0] = HAnimSegment258;

HAnimJoint HAnimJoint259 = createNode("HAnimJoint");
HAnimJoint259.name = "l_pinky2";
HAnimJoint259.DEF = "hanim_l_pinky2";
HAnimJoint259.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint259.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment260 = createNode("HAnimSegment");
HAnimSegment260.name = "l_pinky_middle";
HAnimSegment260.DEF = "hanim_l_pinky_middle";
HAnimJoint259.children = new MFNode();

HAnimJoint259.children[0] = HAnimSegment260;

HAnimJoint HAnimJoint261 = createNode("HAnimJoint");
HAnimJoint261.name = "l_pinky3";
HAnimJoint261.DEF = "hanim_l_pinky3";
HAnimJoint261.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint261.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment262 = createNode("HAnimSegment");
HAnimSegment262.name = "l_pinky_distal";
HAnimSegment262.DEF = "hanim_l_pinky_distal";
HAnimSite HAnimSite263 = createNode("HAnimSite");
HAnimSite263.name = "l_pinky_distal_tip";
HAnimSite263.DEF = "hanim_l_pinky_distal_tip";
HAnimSite263.translation = new SFVec3f(new float[0.2014,0.7009,-0.1012]);
HAnimSegment262.children = new MFNode();

HAnimSegment262.children[0] = HAnimSite263;

HAnimJoint261.children = new MFNode();

HAnimJoint261.children[0] = HAnimSegment262;

HAnimJoint259.children[1] = HAnimJoint261;

HAnimJoint257.children[1] = HAnimJoint259;

HAnimJoint255.children[1] = HAnimJoint257;

HAnimJoint213.children[5] = HAnimJoint255;

HAnimJoint207.children[1] = HAnimJoint213;

HAnimJoint204.children[1] = HAnimJoint207;

HAnimJoint202.children[1] = HAnimJoint204;

HAnimJoint196.children[1] = HAnimJoint202;

HAnimJoint144.children[2] = HAnimJoint196;

HAnimJoint HAnimJoint264 = createNode("HAnimJoint");
HAnimJoint264.name = "r_sternoclavicular";
HAnimJoint264.DEF = "hanim_r_sternoclavicular";
HAnimJoint264.center = new SFVec3f(new float[-0.082,1.4488,-0.0353]);
HAnimJoint264.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment265 = createNode("HAnimSegment");
HAnimSegment265.name = "r_clavicle";
HAnimSegment265.DEF = "hanim_r_clavicle";
HAnimSite HAnimSite266 = createNode("HAnimSite");
HAnimSite266.name = "r_clavicale_pt";
HAnimSite266.DEF = "hanim_r_clavicale_pt";
HAnimSite266.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
HAnimSegment265.children = new MFNode();

HAnimSegment265.children[0] = HAnimSite266;

HAnimSite HAnimSite267 = createNode("HAnimSite");
HAnimSite267.name = "r_acromion_pt";
HAnimSite267.DEF = "hanim_r_acromion_pt";
HAnimSite267.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
HAnimSegment265.children[1] = HAnimSite267;

HAnimSite HAnimSite268 = createNode("HAnimSite");
HAnimSite268.name = "r_axilla_ant_pt";
HAnimSite268.DEF = "hanim_r_axilla_ant_pt";
HAnimSite268.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
HAnimSegment265.children[2] = HAnimSite268;

HAnimSite HAnimSite269 = createNode("HAnimSite");
HAnimSite269.name = "r_axilla_post_pt";
HAnimSite269.DEF = "hanim_r_axilla_post_pt";
HAnimSite269.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
HAnimSegment265.children[3] = HAnimSite269;

HAnimJoint264.children = new MFNode();

HAnimJoint264.children[0] = HAnimSegment265;

HAnimJoint HAnimJoint270 = createNode("HAnimJoint");
HAnimJoint270.name = "r_acromioclavicular";
HAnimJoint270.DEF = "hanim_r_acromioclavicular";
HAnimJoint270.center = new SFVec3f(new float[-0.0962,1.4269,-0.0424]);
HAnimJoint270.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment271 = createNode("HAnimSegment");
HAnimSegment271.name = "r_scapula";
HAnimSegment271.DEF = "hanim_r_scapula";
HAnimJoint270.children = new MFNode();

HAnimJoint270.children[0] = HAnimSegment271;

HAnimJoint HAnimJoint272 = createNode("HAnimJoint");
HAnimJoint272.name = "r_shoulder";
HAnimJoint272.DEF = "hanim_r_shoulder";
HAnimJoint272.center = new SFVec3f(new float[-0.2029,1.4376,-0.0387]);
HAnimJoint272.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment273 = createNode("HAnimSegment");
HAnimSegment273.name = "r_upperarm";
HAnimSegment273.DEF = "hanim_r_upperarm";
HAnimSite HAnimSite274 = createNode("HAnimSite");
HAnimSite274.name = "r_humeral_lateral_epicn_pt";
HAnimSite274.DEF = "hanim_r_humeral_lateral_epicn_pt";
HAnimSite274.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
HAnimSegment273.children = new MFNode();

HAnimSegment273.children[0] = HAnimSite274;

HAnimJoint272.children = new MFNode();

HAnimJoint272.children[0] = HAnimSegment273;

HAnimJoint HAnimJoint275 = createNode("HAnimJoint");
HAnimJoint275.name = "r_elbow";
HAnimJoint275.DEF = "hanim_r_elbow";
HAnimJoint275.center = new SFVec3f(new float[-0.2014,1.1357,-0.0682]);
HAnimJoint275.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment276 = createNode("HAnimSegment");
HAnimSegment276.name = "r_forearm";
HAnimSegment276.DEF = "hanim_r_forearm";
HAnimSite HAnimSite277 = createNode("HAnimSite");
HAnimSite277.name = "r_radial_styloid_pt";
HAnimSite277.DEF = "hanim_r_radial_styloid_pt";
HAnimSite277.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
HAnimSegment276.children = new MFNode();

HAnimSegment276.children[0] = HAnimSite277;

HAnimSite HAnimSite278 = createNode("HAnimSite");
HAnimSite278.name = "r_olecranon_pt";
HAnimSite278.DEF = "hanim_r_olecranon_pt";
HAnimSite278.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
HAnimSegment276.children[1] = HAnimSite278;

HAnimSite HAnimSite279 = createNode("HAnimSite");
HAnimSite279.name = "r_humeral_medial_epicn_pt";
HAnimSite279.DEF = "hanim_r_humeral_medial_epicn_pt";
HAnimSite279.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
HAnimSegment276.children[2] = HAnimSite279;

HAnimSite HAnimSite280 = createNode("HAnimSite");
HAnimSite280.name = "r_radiale_pt";
HAnimSite280.DEF = "hanim_r_radiale_pt";
HAnimSite280.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
HAnimSegment276.children[3] = HAnimSite280;

HAnimJoint275.children = new MFNode();

HAnimJoint275.children[0] = HAnimSegment276;

HAnimJoint HAnimJoint281 = createNode("HAnimJoint");
HAnimJoint281.name = "r_wrist";
HAnimJoint281.DEF = "hanim_r_wrist";
HAnimJoint281.center = new SFVec3f(new float[-0.1984,0.8663,-0.0583]);
HAnimJoint281.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment282 = createNode("HAnimSegment");
HAnimSegment282.name = "r_hand";
HAnimSegment282.DEF = "hanim_r_hand";
HAnimSite HAnimSite283 = createNode("HAnimSite");
HAnimSite283.name = "r_metacarpal_pha2_pt";
HAnimSite283.DEF = "hanim_r_metacarpal_pha2_pt";
HAnimSite283.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
HAnimSegment282.children = new MFNode();

HAnimSegment282.children[0] = HAnimSite283;

HAnimSite HAnimSite284 = createNode("HAnimSite");
HAnimSite284.name = "r_ulnar_styloid_pt";
HAnimSite284.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite284.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
HAnimSegment282.children[1] = HAnimSite284;

HAnimSite HAnimSite285 = createNode("HAnimSite");
HAnimSite285.name = "r_metacarpal_pha5_pt";
HAnimSite285.DEF = "hanim_r_metacarpal_pha5_pt";
HAnimSite285.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
HAnimSegment282.children[2] = HAnimSite285;

HAnimSite HAnimSite286 = createNode("HAnimSite");
HAnimSite286.name = "r_hand_front_view";
HAnimSite286.DEF = "hanim_r_hand_front_view";
HAnimSite286.translation = new SFVec3f(new float[-0.3,0.75,0.45]);
Viewpoint Viewpoint287 = createNode("Viewpoint");
Viewpoint287.DEF = "hanim_r_hand_front_viewpoint";
Viewpoint287.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
Viewpoint287.description = "right hand front";
Viewpoint287.position = new SFVec3f(new float[0,0,0]);
HAnimSite286.children = new MFNode();

HAnimSite286.children[0] = Viewpoint287;

HAnimSegment282.children[3] = HAnimSite286;

HAnimJoint281.children = new MFNode();

HAnimJoint281.children[0] = HAnimSegment282;

HAnimJoint HAnimJoint288 = createNode("HAnimJoint");
HAnimJoint288.name = "r_thumb1";
HAnimJoint288.DEF = "hanim_r_thumb1";
HAnimJoint288.center = new SFVec3f(new float[-0.1924,0.8472,-0.0534]);
HAnimJoint288.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment289 = createNode("HAnimSegment");
HAnimSegment289.name = "r_thumb_metacarpal";
HAnimSegment289.DEF = "hanim_r_thumb_metacarpal";
HAnimJoint288.children = new MFNode();

HAnimJoint288.children[0] = HAnimSegment289;

HAnimJoint HAnimJoint290 = createNode("HAnimJoint");
HAnimJoint290.name = "r_thumb2";
HAnimJoint290.DEF = "hanim_r_thumb2";
HAnimJoint290.center = new SFVec3f(new float[-0.1951,0.8226,0.0246]);
HAnimJoint290.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment291 = createNode("HAnimSegment");
HAnimSegment291.name = "r_thumb_proximal";
HAnimSegment291.DEF = "hanim_r_thumb_proximal";
HAnimJoint290.children = new MFNode();

HAnimJoint290.children[0] = HAnimSegment291;

HAnimJoint HAnimJoint292 = createNode("HAnimJoint");
HAnimJoint292.name = "r_thumb3";
HAnimJoint292.DEF = "hanim_r_thumb3";
HAnimJoint292.center = new SFVec3f(new float[-0.1955,0.8159,0.0464]);
HAnimJoint292.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment293 = createNode("HAnimSegment");
HAnimSegment293.name = "r_thumb_distal";
HAnimSegment293.DEF = "hanim_r_thumb_distal";
HAnimSite HAnimSite294 = createNode("HAnimSite");
HAnimSite294.name = "r_thumb_distal_tip";
HAnimSite294.DEF = "hanim_r_thumb_distal_tip";
HAnimSite294.translation = new SFVec3f(new float[-0.1869,0.809,0.082]);
HAnimSegment293.children = new MFNode();

HAnimSegment293.children[0] = HAnimSite294;

HAnimJoint292.children = new MFNode();

HAnimJoint292.children[0] = HAnimSegment293;

HAnimJoint290.children[1] = HAnimJoint292;

HAnimJoint288.children[1] = HAnimJoint290;

HAnimJoint281.children[1] = HAnimJoint288;

HAnimJoint HAnimJoint295 = createNode("HAnimJoint");
HAnimJoint295.name = "r_index0";
HAnimJoint295.DEF = "hanim_r_index0";
HAnimJoint295.center = new SFVec3f(new float[-0.1983,0.8024,-0.028]);
HAnimJoint295.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment296 = createNode("HAnimSegment");
HAnimSegment296.name = "r_index_metacarpal";
HAnimSegment296.DEF = "hanim_r_index_metacarpal";
HAnimJoint295.children = new MFNode();

HAnimJoint295.children[0] = HAnimSegment296;

HAnimJoint HAnimJoint297 = createNode("HAnimJoint");
HAnimJoint297.name = "r_index1";
HAnimJoint297.DEF = "hanim_r_index1";
HAnimJoint297.center = new SFVec3f(new float[-0.1983,0.7815,-0.028]);
HAnimJoint297.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment298 = createNode("HAnimSegment");
HAnimSegment298.name = "r_index_proximal";
HAnimSegment298.DEF = "hanim_r_index_proximal";
HAnimJoint297.children = new MFNode();

HAnimJoint297.children[0] = HAnimSegment298;

HAnimJoint HAnimJoint299 = createNode("HAnimJoint");
HAnimJoint299.name = "r_index2";
HAnimJoint299.DEF = "hanim_r_index2";
HAnimJoint299.center = new SFVec3f(new float[-0.2017,0.7363,-0.0248]);
HAnimJoint299.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment300 = createNode("HAnimSegment");
HAnimSegment300.name = "r_index_middle";
HAnimSegment300.DEF = "hanim_r_index_middle";
HAnimJoint299.children = new MFNode();

HAnimJoint299.children[0] = HAnimSegment300;

HAnimJoint HAnimJoint301 = createNode("HAnimJoint");
HAnimJoint301.name = "r_index3";
HAnimJoint301.DEF = "hanim_r_index3";
HAnimJoint301.center = new SFVec3f(new float[-0.2028,0.7139,-0.0236]);
HAnimJoint301.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment302 = createNode("HAnimSegment");
HAnimSegment302.name = "r_index_distal";
HAnimSegment302.DEF = "hanim_r_index_distal";
HAnimSite HAnimSite303 = createNode("HAnimSite");
HAnimSite303.name = "r_index_distal_tip";
HAnimSite303.DEF = "hanim_r_index_distal_tip";
HAnimSite303.translation = new SFVec3f(new float[-0.198,0.6883,-0.018]);
HAnimSegment302.children = new MFNode();

HAnimSegment302.children[0] = HAnimSite303;

HAnimSite HAnimSite304 = createNode("HAnimSite");
HAnimSite304.name = "r_dactylion_pt";
HAnimSite304.DEF = "hanim_r_dactylion_pt";
HAnimSite304.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
HAnimSegment302.children[1] = HAnimSite304;

HAnimJoint301.children = new MFNode();

HAnimJoint301.children[0] = HAnimSegment302;

HAnimJoint299.children[1] = HAnimJoint301;

HAnimJoint297.children[1] = HAnimJoint299;

HAnimJoint295.children[1] = HAnimJoint297;

HAnimJoint281.children[2] = HAnimJoint295;

HAnimJoint HAnimJoint305 = createNode("HAnimJoint");
HAnimJoint305.name = "r_middle0";
HAnimJoint305.DEF = "hanim_r_middle0";
HAnimJoint305.center = new SFVec3f(new float[-0.1987,0.8029,-0.053]);
HAnimJoint305.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment306 = createNode("HAnimSegment");
HAnimSegment306.name = "r_middle_metacarpal";
HAnimSegment306.DEF = "hanim_r_middle_metacarpal";
HAnimJoint305.children = new MFNode();

HAnimJoint305.children[0] = HAnimSegment306;

HAnimJoint HAnimJoint307 = createNode("HAnimJoint");
HAnimJoint307.name = "r_middle1";
HAnimJoint307.DEF = "hanim_r_middle1";
HAnimJoint307.center = new SFVec3f(new float[-0.1987,0.7818,-0.053]);
HAnimJoint307.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment308 = createNode("HAnimSegment");
HAnimSegment308.name = "r_middle_proximal";
HAnimSegment308.DEF = "hanim_r_middle_proximal";
HAnimJoint307.children = new MFNode();

HAnimJoint307.children[0] = HAnimSegment308;

HAnimJoint HAnimJoint309 = createNode("HAnimJoint");
HAnimJoint309.name = "r_middle2";
HAnimJoint309.DEF = "hanim_r_middle2";
HAnimJoint309.center = new SFVec3f(new float[-0.2013,0.7273,-0.0503]);
HAnimJoint309.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment310 = createNode("HAnimSegment");
HAnimSegment310.name = "r_middle_middle";
HAnimSegment310.DEF = "hanim_r_middle_middle";
HAnimJoint309.children = new MFNode();

HAnimJoint309.children[0] = HAnimSegment310;

HAnimJoint HAnimJoint311 = createNode("HAnimJoint");
HAnimJoint311.name = "r_middle3";
HAnimJoint311.DEF = "hanim_r_middle3";
HAnimJoint311.center = new SFVec3f(new float[-0.2026,0.7011,-0.0494]);
HAnimJoint311.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment312 = createNode("HAnimSegment");
HAnimSegment312.name = "r_middle_distal";
HAnimSegment312.DEF = "hanim_r_middle_distal";
HAnimSite HAnimSite313 = createNode("HAnimSite");
HAnimSite313.name = "r_middle_distal_tip";
HAnimSite313.DEF = "hanim_r_middle_distal_tip";
HAnimSite313.translation = new SFVec3f(new float[-0.1969,0.6758,-0.0427]);
HAnimSegment312.children = new MFNode();

HAnimSegment312.children[0] = HAnimSite313;

HAnimJoint311.children = new MFNode();

HAnimJoint311.children[0] = HAnimSegment312;

HAnimJoint309.children[1] = HAnimJoint311;

HAnimJoint307.children[1] = HAnimJoint309;

HAnimJoint305.children[1] = HAnimJoint307;

HAnimJoint281.children[3] = HAnimJoint305;

HAnimJoint HAnimJoint314 = createNode("HAnimJoint");
HAnimJoint314.name = "r_ring0";
HAnimJoint314.DEF = "hanim_r_ring0";
HAnimJoint314.center = new SFVec3f(new float[-0.1956,0.8019,-0.0794]);
HAnimJoint314.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment315 = createNode("HAnimSegment");
HAnimSegment315.name = "r_ring_metacarpal";
HAnimSegment315.DEF = "hanim_r_ring_metacarpal";
HAnimJoint314.children = new MFNode();

HAnimJoint314.children[0] = HAnimSegment315;

HAnimJoint HAnimJoint316 = createNode("HAnimJoint");
HAnimJoint316.name = "r_ring1";
HAnimJoint316.DEF = "hanim_r_ring1";
HAnimJoint316.center = new SFVec3f(new float[-0.1956,0.7815,-0.0794]);
HAnimJoint316.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment317 = createNode("HAnimSegment");
HAnimSegment317.name = "r_ring_proximal";
HAnimSegment317.DEF = "hanim_r_ring_proximal";
HAnimJoint316.children = new MFNode();

HAnimJoint316.children[0] = HAnimSegment317;

HAnimJoint HAnimJoint318 = createNode("HAnimJoint");
HAnimJoint318.name = "r_ring2";
HAnimJoint318.DEF = "hanim_r_ring2";
HAnimJoint318.center = new SFVec3f(new float[-0.1973,0.7287,-0.0777]);
HAnimJoint318.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment319 = createNode("HAnimSegment");
HAnimSegment319.name = "r_ring_middle";
HAnimSegment319.DEF = "hanim_r_ring_middle";
HAnimJoint318.children = new MFNode();

HAnimJoint318.children[0] = HAnimSegment319;

HAnimJoint HAnimJoint320 = createNode("HAnimJoint");
HAnimJoint320.name = "r_ring3";
HAnimJoint320.DEF = "hanim_r_ring3";
HAnimJoint320.center = new SFVec3f(new float[-0.1983,0.7045,-0.0767]);
HAnimJoint320.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment321 = createNode("HAnimSegment");
HAnimSegment321.name = "r_ring_distal";
HAnimSegment321.DEF = "hanim_r_ring_distal";
HAnimSite HAnimSite322 = createNode("HAnimSite");
HAnimSite322.name = "r_ring_distal_tip";
HAnimSite322.DEF = "hanim_r_ring_distal_tip";
HAnimSite322.translation = new SFVec3f(new float[-0.1934,0.6778,-0.0693]);
HAnimSegment321.children = new MFNode();

HAnimSegment321.children[0] = HAnimSite322;

HAnimJoint320.children = new MFNode();

HAnimJoint320.children[0] = HAnimSegment321;

HAnimJoint318.children[1] = HAnimJoint320;

HAnimJoint316.children[1] = HAnimJoint318;

HAnimJoint314.children[1] = HAnimJoint316;

HAnimJoint281.children[4] = HAnimJoint314;

HAnimJoint HAnimJoint323 = createNode("HAnimJoint");
HAnimJoint323.name = "r_pinky0";
HAnimJoint323.DEF = "hanim_r_pinky0";
HAnimJoint323.center = new SFVec3f(new float[-0.1925,0.8066,-0.1036]);
HAnimJoint323.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment324 = createNode("HAnimSegment");
HAnimSegment324.name = "r_pinky_metacarpal";
HAnimSegment324.DEF = "hanim_r_pinky_metacarpal";
HAnimJoint323.children = new MFNode();

HAnimJoint323.children[0] = HAnimSegment324;

HAnimJoint HAnimJoint325 = createNode("HAnimJoint");
HAnimJoint325.name = "r_pinky1";
HAnimJoint325.DEF = "hanim_r_pinky1";
HAnimJoint325.center = new SFVec3f(new float[-0.1925,0.7866,-0.1036]);
HAnimJoint325.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment326 = createNode("HAnimSegment");
HAnimSegment326.name = "r_pinky_proximal";
HAnimSegment326.DEF = "hanim_r_pinky_proximal";
HAnimJoint325.children = new MFNode();

HAnimJoint325.children[0] = HAnimSegment326;

HAnimJoint HAnimJoint327 = createNode("HAnimJoint");
HAnimJoint327.name = "r_pinky2";
HAnimJoint327.DEF = "hanim_r_pinky2";
HAnimJoint327.center = new SFVec3f(new float[-0.1938,0.7452,-0.1024]);
HAnimJoint327.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment328 = createNode("HAnimSegment");
HAnimSegment328.name = "r_pinky_middle";
HAnimSegment328.DEF = "hanim_r_pinky_middle";
HAnimJoint327.children = new MFNode();

HAnimJoint327.children[0] = HAnimSegment328;

HAnimJoint HAnimJoint329 = createNode("HAnimJoint");
HAnimJoint329.name = "r_pinky3";
HAnimJoint329.DEF = "hanim_r_pinky3";
HAnimJoint329.center = new SFVec3f(new float[-0.1948,0.7277,-0.1017]);
HAnimJoint329.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment330 = createNode("HAnimSegment");
HAnimSegment330.name = "r_pinky_distal";
HAnimSegment330.DEF = "hanim_r_pinky_distal";
HAnimSite HAnimSite331 = createNode("HAnimSite");
HAnimSite331.name = "r_pinky_distal_tip";
HAnimSite331.DEF = "hanim_r_pinky_distal_tip";
HAnimSite331.translation = new SFVec3f(new float[-0.1938,0.7035,-0.0949]);
HAnimSegment330.children = new MFNode();

HAnimSegment330.children[0] = HAnimSite331;

HAnimJoint329.children = new MFNode();

HAnimJoint329.children[0] = HAnimSegment330;

HAnimJoint327.children[1] = HAnimJoint329;

HAnimJoint325.children[1] = HAnimJoint327;

HAnimJoint323.children[1] = HAnimJoint325;

HAnimJoint281.children[5] = HAnimJoint323;

HAnimJoint275.children[1] = HAnimJoint281;

HAnimJoint272.children[1] = HAnimJoint275;

HAnimJoint270.children[1] = HAnimJoint272;

HAnimJoint264.children[1] = HAnimJoint270;

HAnimJoint144.children[3] = HAnimJoint264;

HAnimJoint142.children[1] = HAnimJoint144;

HAnimJoint140.children[1] = HAnimJoint142;

HAnimJoint138.children[1] = HAnimJoint140;

HAnimJoint136.children[1] = HAnimJoint138;

HAnimJoint134.children[1] = HAnimJoint136;

HAnimJoint132.children[1] = HAnimJoint134;

HAnimJoint130.children[1] = HAnimJoint132;

HAnimJoint126.children[1] = HAnimJoint130;

HAnimJoint123.children[1] = HAnimJoint126;

HAnimJoint121.children[1] = HAnimJoint123;

HAnimJoint119.children[1] = HAnimJoint121;

HAnimJoint117.children[1] = HAnimJoint119;

HAnimJoint112.children[1] = HAnimJoint117;

HAnimJoint110.children[1] = HAnimJoint112;

HAnimJoint108.children[1] = HAnimJoint110;

HAnimJoint104.children[1] = HAnimJoint108;

HAnimJoint45.children[2] = HAnimJoint104;

HAnimHumanoid44.joints = new MFNode();

HAnimHumanoid44.joints[0] = HAnimJoint45;

HAnimSite HAnimSite332 = createNode("HAnimSite");
HAnimSite332.name = "l_inclined_view";
HAnimSite332.DEF = "hanim_l_inclined_view";
HAnimSite332.rotation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
HAnimSite332.translation = new SFVec3f(new float[1.62,1.05,2.06]);
Viewpoint Viewpoint333 = createNode("Viewpoint");
Viewpoint333.DEF = "hanim_l_inclined_viewpoint";
Viewpoint333.description = "left inclined";
Viewpoint333.position = new SFVec3f(new float[0,0,0]);
HAnimSite332.children = new MFNode();

HAnimSite332.children[0] = Viewpoint333;

HAnimHumanoid44.viewpoints[1] = HAnimSite332;

HAnimSite HAnimSite334 = createNode("HAnimSite");
HAnimSite334.name = "r_inclined_view";
HAnimSite334.DEF = "hanim_r_inclined_view";
HAnimSite334.rotation = new SFRotation(new float[-0.113,-0.993,0.0347,0.671]);
HAnimSite334.translation = new SFVec3f(new float[-1.62,1.05,2.06]);
Viewpoint Viewpoint335 = createNode("Viewpoint");
Viewpoint335.DEF = "hanim_r_inclined_viewpoint";
Viewpoint335.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint335.description = "right inclined";
Viewpoint335.position = new SFVec3f(new float[0,0,0]);
HAnimSite334.children = new MFNode();

HAnimSite334.children[0] = Viewpoint335;

HAnimHumanoid44.viewpoints[2] = HAnimSite334;

HAnimSite HAnimSite336 = createNode("HAnimSite");
HAnimSite336.name = "front_view";
HAnimSite336.DEF = "hanim_front_view";
HAnimSite336.translation = new SFVec3f(new float[0,0.85,2.58]);
Viewpoint Viewpoint337 = createNode("Viewpoint");
Viewpoint337.DEF = "hanim_front_viewpoint";
Viewpoint337.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint337.description = "front";
Viewpoint337.position = new SFVec3f(new float[0,0,0]);
HAnimSite336.children = new MFNode();

HAnimSite336.children[0] = Viewpoint337;

HAnimHumanoid44.viewpoints[3] = HAnimSite336;

HAnimSite HAnimSite338 = createNode("HAnimSite");
HAnimSite338.name = "back_view";
HAnimSite338.DEF = "hanim_back_view";
HAnimSite338.rotation = new SFRotation(new float[0,1,0,3.14]);
HAnimSite338.translation = new SFVec3f(new float[0,0.85,-2.58]);
Viewpoint Viewpoint339 = createNode("Viewpoint");
Viewpoint339.DEF = "hanim_back_viewpoint";
Viewpoint339.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint339.description = "back";
Viewpoint339.position = new SFVec3f(new float[0,0,0]);
HAnimSite338.children = new MFNode();

HAnimSite338.children[0] = Viewpoint339;

HAnimHumanoid44.viewpoints[4] = HAnimSite338;

HAnimSite HAnimSite340 = createNode("HAnimSite");
HAnimSite340.name = "l_side_view";
HAnimSite340.DEF = "hanim_l_side_view";
HAnimSite340.rotation = new SFRotation(new float[0,1,0,1.5708]);
HAnimSite340.translation = new SFVec3f(new float[2.6,0.854,0]);
Viewpoint Viewpoint341 = createNode("Viewpoint");
Viewpoint341.DEF = "hanim_l_side_viewpoint";
Viewpoint341.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint341.description = "left side";
Viewpoint341.position = new SFVec3f(new float[0,0,0]);
HAnimSite340.children = new MFNode();

HAnimSite340.children[0] = Viewpoint341;

HAnimHumanoid44.viewpoints[5] = HAnimSite340;

HAnimSite HAnimSite342 = createNode("HAnimSite");
HAnimSite342.name = "Top_view";
HAnimSite342.DEF = "hanim_Top_view";
HAnimSite342.rotation = new SFRotation(new float[1,0,0,-1.57]);
HAnimSite342.translation = new SFVec3f(new float[0,3.5,0]);
Viewpoint Viewpoint343 = createNode("Viewpoint");
Viewpoint343.DEF = "hanim_Top_viewpoint";
Viewpoint343.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint343.description = "Top";
Viewpoint343.position = new SFVec3f(new float[0,0,0]);
HAnimSite342.children = new MFNode();

HAnimSite342.children[0] = Viewpoint343;

HAnimHumanoid44.viewpoints[6] = HAnimSite342;

HAnimSite HAnimSite344 = createNode("HAnimSite");
HAnimSite344.name = "front_close_view";
HAnimSite344.DEF = "hanim_front_close_view";
HAnimSite344.translation = new SFVec3f(new float[0,0.854,1.575]);
Viewpoint Viewpoint345 = createNode("Viewpoint");
Viewpoint345.DEF = "hanim_front_close_viewpoint";
Viewpoint345.centerOfRotation = new SFVec3f(new float[0,0,1.575]);
Viewpoint345.description = "front close";
Viewpoint345.position = new SFVec3f(new float[0,0,0]);
HAnimSite344.children = new MFNode();

HAnimSite344.children[0] = Viewpoint345;

HAnimHumanoid44.viewpoints[7] = HAnimSite344;

HAnimSite HAnimSite346 = createNode("HAnimSite");
HAnimSite346.name = "side_close_view";
HAnimSite346.DEF = "hanim_side_close_view";
HAnimSite346.rotation = new SFRotation(new float[0,1,0,1.5708]);
HAnimSite346.translation = new SFVec3f(new float[1.56,0.854,0]);
Viewpoint Viewpoint347 = createNode("Viewpoint");
Viewpoint347.DEF = "hanim_side_close_viewpoint";
Viewpoint347.centerOfRotation = new SFVec3f(new float[1.6,0,0]);
Viewpoint347.description = "side close";
Viewpoint347.position = new SFVec3f(new float[0,0,0]);
HAnimSite346.children = new MFNode();

HAnimSite346.children[0] = Viewpoint347;

HAnimHumanoid44.viewpoints[8] = HAnimSite346;

HAnimSite HAnimSite348 = createNode("HAnimSite");
HAnimSite348.name = "head_front_close_view";
HAnimSite348.DEF = "hanim_head_front_close_view";
HAnimSite348.translation = new SFVec3f(new float[0,1.5,1]);
Viewpoint Viewpoint349 = createNode("Viewpoint");
Viewpoint349.DEF = "hanim_head_front_close_viewpoint";
Viewpoint349.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint349.description = "head front close";
Viewpoint349.position = new SFVec3f(new float[0,0,0]);
HAnimSite348.children = new MFNode();

HAnimSite348.children[0] = Viewpoint349;

HAnimHumanoid44.viewpoints[9] = HAnimSite348;

HAnimSite HAnimSite350 = createNode("HAnimSite");
HAnimSite350.name = "chest_front_close_view";
HAnimSite350.DEF = "hanim_chest_front_close_view";
HAnimSite350.translation = new SFVec3f(new float[0,1.2,1]);
Viewpoint Viewpoint351 = createNode("Viewpoint");
Viewpoint351.DEF = "hanim_chest_front_close_viewpoint";
Viewpoint351.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint351.description = "chest front close";
Viewpoint351.position = new SFVec3f(new float[0,0,0]);
HAnimSite350.children = new MFNode();

HAnimSite350.children[0] = Viewpoint351;

HAnimHumanoid44.viewpoints[10] = HAnimSite350;

HAnimSite HAnimSite352 = createNode("HAnimSite");
HAnimSite352.name = "pelvis_front_close_view";
HAnimSite352.DEF = "hanim_pelvis_front_close_view";
HAnimSite352.translation = new SFVec3f(new float[0,0.8,1]);
Viewpoint Viewpoint353 = createNode("Viewpoint");
Viewpoint353.DEF = "hanim_pelvis_front_close_viewpoint";
Viewpoint353.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint353.description = "pelvis front close";
Viewpoint353.position = new SFVec3f(new float[0,0,0]);
HAnimSite352.children = new MFNode();

HAnimSite352.children[0] = Viewpoint353;

HAnimHumanoid44.viewpoints[11] = HAnimSite352;

HAnimSite HAnimSite354 = createNode("HAnimSite");
HAnimSite354.name = "knees_front_close_view";
HAnimSite354.DEF = "hanim_knees_front_close_view";
HAnimSite354.translation = new SFVec3f(new float[0,0.4,1]);
Viewpoint Viewpoint355 = createNode("Viewpoint");
Viewpoint355.DEF = "hanim_knees_front_close_viewpoint";
Viewpoint355.centerOfRotation = new SFVec3f(new float[0,0.4,0]);
Viewpoint355.description = "knees front close";
Viewpoint355.position = new SFVec3f(new float[0,0,0]);
HAnimSite354.children = new MFNode();

HAnimSite354.children[0] = Viewpoint355;

HAnimHumanoid44.viewpoints[12] = HAnimSite354;

HAnimSite HAnimSite356 = createNode("HAnimSite");
HAnimSite356.name = "feet_front_close_view";
HAnimSite356.DEF = "hanim_feet_front_close_view";
HAnimSite356.translation = new SFVec3f(new float[0,0,1]);
Viewpoint Viewpoint357 = createNode("Viewpoint");
Viewpoint357.DEF = "hanim_feet_front_close_viewpoint";
Viewpoint357.description = "feet front close";
Viewpoint357.position = new SFVec3f(new float[0,0,0]);
HAnimSite356.children = new MFNode();

HAnimSite356.children[0] = Viewpoint357;

HAnimHumanoid44.viewpoints[13] = HAnimSite356;

HAnimSite HAnimSite358 = createNode("HAnimSite");
HAnimSite358.name = "eye_level_view";
HAnimSite358.DEF = "hanim_eye_level_view";
HAnimSite358.translation = new SFVec3f(new float[0,1.6332,0.0502]);
Viewpoint Viewpoint359 = createNode("Viewpoint");
Viewpoint359.DEF = "hanim_eye_level_viewpoint";
Viewpoint359.description = "eye level looking forward";
Viewpoint359.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint359.position = new SFVec3f(new float[0,0,0]);
HAnimSite358.children = new MFNode();

HAnimSite358.children[0] = Viewpoint359;

HAnimHumanoid44.viewpoints[14] = HAnimSite358;

HAnimSite HAnimSite360 = createNode("HAnimSite");
HAnimSite360.USE = "hanim_l_eyeball_site_view";
HAnimHumanoid44.viewpoints[15] = HAnimSite360;

HAnimSite HAnimSite361 = createNode("HAnimSite");
HAnimSite361.USE = "hanim_r_eyeball_site_view";
HAnimHumanoid44.viewpoints[16] = HAnimSite361;

HAnimSite HAnimSite362 = createNode("HAnimSite");
HAnimSite362.USE = "hanim_l_hand_front_view";
HAnimHumanoid44.viewpoints[17] = HAnimSite362;

HAnimSite HAnimSite363 = createNode("HAnimSite");
HAnimSite363.USE = "hanim_r_hand_front_view";
HAnimHumanoid44.viewpoints[18] = HAnimSite363;

HAnimJoint HAnimJoint364 = createNode("HAnimJoint");
HAnimJoint364.USE = "hanim_humanoid_root";
HAnimHumanoid44.joints[19] = HAnimJoint364;

HAnimJoint HAnimJoint365 = createNode("HAnimJoint");
HAnimJoint365.USE = "hanim_sacroiliac";
HAnimHumanoid44.joints[20] = HAnimJoint365;

HAnimJoint HAnimJoint366 = createNode("HAnimJoint");
HAnimJoint366.USE = "hanim_vl5";
HAnimHumanoid44.joints[21] = HAnimJoint366;

HAnimJoint HAnimJoint367 = createNode("HAnimJoint");
HAnimJoint367.USE = "hanim_vl4";
HAnimHumanoid44.joints[22] = HAnimJoint367;

HAnimJoint HAnimJoint368 = createNode("HAnimJoint");
HAnimJoint368.USE = "hanim_vl3";
HAnimHumanoid44.joints[23] = HAnimJoint368;

HAnimJoint HAnimJoint369 = createNode("HAnimJoint");
HAnimJoint369.USE = "hanim_vl2";
HAnimHumanoid44.joints[24] = HAnimJoint369;

HAnimJoint HAnimJoint370 = createNode("HAnimJoint");
HAnimJoint370.USE = "hanim_vl1";
HAnimHumanoid44.joints[25] = HAnimJoint370;

HAnimJoint HAnimJoint371 = createNode("HAnimJoint");
HAnimJoint371.USE = "hanim_vt12";
HAnimHumanoid44.joints[26] = HAnimJoint371;

HAnimJoint HAnimJoint372 = createNode("HAnimJoint");
HAnimJoint372.USE = "hanim_vt11";
HAnimHumanoid44.joints[27] = HAnimJoint372;

HAnimJoint HAnimJoint373 = createNode("HAnimJoint");
HAnimJoint373.USE = "hanim_vt10";
HAnimHumanoid44.joints[28] = HAnimJoint373;

HAnimJoint HAnimJoint374 = createNode("HAnimJoint");
HAnimJoint374.USE = "hanim_vt9";
HAnimHumanoid44.joints[29] = HAnimJoint374;

HAnimJoint HAnimJoint375 = createNode("HAnimJoint");
HAnimJoint375.USE = "hanim_vt8";
HAnimHumanoid44.joints[30] = HAnimJoint375;

HAnimJoint HAnimJoint376 = createNode("HAnimJoint");
HAnimJoint376.USE = "hanim_vt7";
HAnimHumanoid44.joints[31] = HAnimJoint376;

HAnimJoint HAnimJoint377 = createNode("HAnimJoint");
HAnimJoint377.USE = "hanim_vt6";
HAnimHumanoid44.joints[32] = HAnimJoint377;

HAnimJoint HAnimJoint378 = createNode("HAnimJoint");
HAnimJoint378.USE = "hanim_vt5";
HAnimHumanoid44.joints[33] = HAnimJoint378;

HAnimJoint HAnimJoint379 = createNode("HAnimJoint");
HAnimJoint379.USE = "hanim_vt4";
HAnimHumanoid44.joints[34] = HAnimJoint379;

HAnimJoint HAnimJoint380 = createNode("HAnimJoint");
HAnimJoint380.USE = "hanim_vt3";
HAnimHumanoid44.joints[35] = HAnimJoint380;

HAnimJoint HAnimJoint381 = createNode("HAnimJoint");
HAnimJoint381.USE = "hanim_vt2";
HAnimHumanoid44.joints[36] = HAnimJoint381;

HAnimJoint HAnimJoint382 = createNode("HAnimJoint");
HAnimJoint382.USE = "hanim_vt1";
HAnimHumanoid44.joints[37] = HAnimJoint382;

HAnimJoint HAnimJoint383 = createNode("HAnimJoint");
HAnimJoint383.USE = "hanim_vc7";
HAnimHumanoid44.joints[38] = HAnimJoint383;

HAnimJoint HAnimJoint384 = createNode("HAnimJoint");
HAnimJoint384.USE = "hanim_vc6";
HAnimHumanoid44.joints[39] = HAnimJoint384;

HAnimJoint HAnimJoint385 = createNode("HAnimJoint");
HAnimJoint385.USE = "hanim_vc5";
HAnimHumanoid44.joints[40] = HAnimJoint385;

HAnimJoint HAnimJoint386 = createNode("HAnimJoint");
HAnimJoint386.USE = "hanim_vc4";
HAnimHumanoid44.joints[41] = HAnimJoint386;

HAnimJoint HAnimJoint387 = createNode("HAnimJoint");
HAnimJoint387.USE = "hanim_vc3";
HAnimHumanoid44.joints[42] = HAnimJoint387;

HAnimJoint HAnimJoint388 = createNode("HAnimJoint");
HAnimJoint388.USE = "hanim_vc2";
HAnimHumanoid44.joints[43] = HAnimJoint388;

HAnimJoint HAnimJoint389 = createNode("HAnimJoint");
HAnimJoint389.USE = "hanim_vc1";
HAnimHumanoid44.joints[44] = HAnimJoint389;

HAnimJoint HAnimJoint390 = createNode("HAnimJoint");
HAnimJoint390.USE = "hanim_skullbase";
HAnimHumanoid44.joints[45] = HAnimJoint390;

HAnimJoint HAnimJoint391 = createNode("HAnimJoint");
HAnimJoint391.USE = "hanim_temporomandibular";
HAnimHumanoid44.joints[46] = HAnimJoint391;

HAnimJoint HAnimJoint392 = createNode("HAnimJoint");
HAnimJoint392.USE = "hanim_l_acromioclavicular";
HAnimHumanoid44.joints[47] = HAnimJoint392;

HAnimJoint HAnimJoint393 = createNode("HAnimJoint");
HAnimJoint393.USE = "hanim_r_acromioclavicular";
HAnimHumanoid44.joints[48] = HAnimJoint393;

HAnimJoint HAnimJoint394 = createNode("HAnimJoint");
HAnimJoint394.USE = "hanim_l_ankle";
HAnimHumanoid44.joints[49] = HAnimJoint394;

HAnimJoint HAnimJoint395 = createNode("HAnimJoint");
HAnimJoint395.USE = "hanim_r_ankle";
HAnimHumanoid44.joints[50] = HAnimJoint395;

HAnimJoint HAnimJoint396 = createNode("HAnimJoint");
HAnimJoint396.USE = "hanim_l_elbow";
HAnimHumanoid44.joints[51] = HAnimJoint396;

HAnimJoint HAnimJoint397 = createNode("HAnimJoint");
HAnimJoint397.USE = "hanim_r_elbow";
HAnimHumanoid44.joints[52] = HAnimJoint397;

HAnimJoint HAnimJoint398 = createNode("HAnimJoint");
HAnimJoint398.USE = "hanim_l_eyeball_joint";
HAnimHumanoid44.joints[53] = HAnimJoint398;

HAnimJoint HAnimJoint399 = createNode("HAnimJoint");
HAnimJoint399.USE = "hanim_r_eyeball_joint";
HAnimHumanoid44.joints[54] = HAnimJoint399;

HAnimJoint HAnimJoint400 = createNode("HAnimJoint");
HAnimJoint400.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid44.joints[55] = HAnimJoint400;

HAnimJoint HAnimJoint401 = createNode("HAnimJoint");
HAnimJoint401.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid44.joints[56] = HAnimJoint401;

HAnimJoint HAnimJoint402 = createNode("HAnimJoint");
HAnimJoint402.USE = "hanim_l_eyelid_joint";
HAnimHumanoid44.joints[57] = HAnimJoint402;

HAnimJoint HAnimJoint403 = createNode("HAnimJoint");
HAnimJoint403.USE = "hanim_r_eyelid_joint";
HAnimHumanoid44.joints[58] = HAnimJoint403;

HAnimJoint HAnimJoint404 = createNode("HAnimJoint");
HAnimJoint404.USE = "hanim_l_hip";
HAnimHumanoid44.joints[59] = HAnimJoint404;

HAnimJoint HAnimJoint405 = createNode("HAnimJoint");
HAnimJoint405.USE = "hanim_r_hip";
HAnimHumanoid44.joints[60] = HAnimJoint405;

HAnimJoint HAnimJoint406 = createNode("HAnimJoint");
HAnimJoint406.USE = "hanim_l_index0";
HAnimHumanoid44.joints[61] = HAnimJoint406;

HAnimJoint HAnimJoint407 = createNode("HAnimJoint");
HAnimJoint407.USE = "hanim_r_index0";
HAnimHumanoid44.joints[62] = HAnimJoint407;

HAnimJoint HAnimJoint408 = createNode("HAnimJoint");
HAnimJoint408.USE = "hanim_l_index1";
HAnimHumanoid44.joints[63] = HAnimJoint408;

HAnimJoint HAnimJoint409 = createNode("HAnimJoint");
HAnimJoint409.USE = "hanim_r_index1";
HAnimHumanoid44.joints[64] = HAnimJoint409;

HAnimJoint HAnimJoint410 = createNode("HAnimJoint");
HAnimJoint410.USE = "hanim_l_index2";
HAnimHumanoid44.joints[65] = HAnimJoint410;

HAnimJoint HAnimJoint411 = createNode("HAnimJoint");
HAnimJoint411.USE = "hanim_r_index2";
HAnimHumanoid44.joints[66] = HAnimJoint411;

HAnimJoint HAnimJoint412 = createNode("HAnimJoint");
HAnimJoint412.USE = "hanim_l_index3";
HAnimHumanoid44.joints[67] = HAnimJoint412;

HAnimJoint HAnimJoint413 = createNode("HAnimJoint");
HAnimJoint413.USE = "hanim_r_index3";
HAnimHumanoid44.joints[68] = HAnimJoint413;

HAnimJoint HAnimJoint414 = createNode("HAnimJoint");
HAnimJoint414.USE = "hanim_l_knee";
HAnimHumanoid44.joints[69] = HAnimJoint414;

HAnimJoint HAnimJoint415 = createNode("HAnimJoint");
HAnimJoint415.USE = "hanim_r_knee";
HAnimHumanoid44.joints[70] = HAnimJoint415;

HAnimJoint HAnimJoint416 = createNode("HAnimJoint");
HAnimJoint416.USE = "hanim_l_metatarsal";
HAnimHumanoid44.joints[71] = HAnimJoint416;

HAnimJoint HAnimJoint417 = createNode("HAnimJoint");
HAnimJoint417.USE = "hanim_r_metatarsal";
HAnimHumanoid44.joints[72] = HAnimJoint417;

HAnimJoint HAnimJoint418 = createNode("HAnimJoint");
HAnimJoint418.USE = "hanim_l_middle0";
HAnimHumanoid44.joints[73] = HAnimJoint418;

HAnimJoint HAnimJoint419 = createNode("HAnimJoint");
HAnimJoint419.USE = "hanim_r_middle0";
HAnimHumanoid44.joints[74] = HAnimJoint419;

HAnimJoint HAnimJoint420 = createNode("HAnimJoint");
HAnimJoint420.USE = "hanim_l_middle1";
HAnimHumanoid44.joints[75] = HAnimJoint420;

HAnimJoint HAnimJoint421 = createNode("HAnimJoint");
HAnimJoint421.USE = "hanim_r_middle1";
HAnimHumanoid44.joints[76] = HAnimJoint421;

HAnimJoint HAnimJoint422 = createNode("HAnimJoint");
HAnimJoint422.USE = "hanim_l_middle2";
HAnimHumanoid44.joints[77] = HAnimJoint422;

HAnimJoint HAnimJoint423 = createNode("HAnimJoint");
HAnimJoint423.USE = "hanim_r_middle2";
HAnimHumanoid44.joints[78] = HAnimJoint423;

HAnimJoint HAnimJoint424 = createNode("HAnimJoint");
HAnimJoint424.USE = "hanim_l_middle3";
HAnimHumanoid44.joints[79] = HAnimJoint424;

HAnimJoint HAnimJoint425 = createNode("HAnimJoint");
HAnimJoint425.USE = "hanim_r_middle3";
HAnimHumanoid44.joints[80] = HAnimJoint425;

HAnimJoint HAnimJoint426 = createNode("HAnimJoint");
HAnimJoint426.USE = "hanim_l_midtarsal";
HAnimHumanoid44.joints[81] = HAnimJoint426;

HAnimJoint HAnimJoint427 = createNode("HAnimJoint");
HAnimJoint427.USE = "hanim_r_midtarsal";
HAnimHumanoid44.joints[82] = HAnimJoint427;

HAnimJoint HAnimJoint428 = createNode("HAnimJoint");
HAnimJoint428.USE = "hanim_l_pinky0";
HAnimHumanoid44.joints[83] = HAnimJoint428;

HAnimJoint HAnimJoint429 = createNode("HAnimJoint");
HAnimJoint429.USE = "hanim_r_pinky0";
HAnimHumanoid44.joints[84] = HAnimJoint429;

HAnimJoint HAnimJoint430 = createNode("HAnimJoint");
HAnimJoint430.USE = "hanim_l_pinky1";
HAnimHumanoid44.joints[85] = HAnimJoint430;

HAnimJoint HAnimJoint431 = createNode("HAnimJoint");
HAnimJoint431.USE = "hanim_r_pinky1";
HAnimHumanoid44.joints[86] = HAnimJoint431;

HAnimJoint HAnimJoint432 = createNode("HAnimJoint");
HAnimJoint432.USE = "hanim_l_pinky2";
HAnimHumanoid44.joints[87] = HAnimJoint432;

HAnimJoint HAnimJoint433 = createNode("HAnimJoint");
HAnimJoint433.USE = "hanim_r_pinky2";
HAnimHumanoid44.joints[88] = HAnimJoint433;

HAnimJoint HAnimJoint434 = createNode("HAnimJoint");
HAnimJoint434.USE = "hanim_l_pinky3";
HAnimHumanoid44.joints[89] = HAnimJoint434;

HAnimJoint HAnimJoint435 = createNode("HAnimJoint");
HAnimJoint435.USE = "hanim_r_pinky3";
HAnimHumanoid44.joints[90] = HAnimJoint435;

HAnimJoint HAnimJoint436 = createNode("HAnimJoint");
HAnimJoint436.USE = "hanim_l_ring0";
HAnimHumanoid44.joints[91] = HAnimJoint436;

HAnimJoint HAnimJoint437 = createNode("HAnimJoint");
HAnimJoint437.USE = "hanim_r_ring0";
HAnimHumanoid44.joints[92] = HAnimJoint437;

HAnimJoint HAnimJoint438 = createNode("HAnimJoint");
HAnimJoint438.USE = "hanim_l_ring1";
HAnimHumanoid44.joints[93] = HAnimJoint438;

HAnimJoint HAnimJoint439 = createNode("HAnimJoint");
HAnimJoint439.USE = "hanim_r_ring1";
HAnimHumanoid44.joints[94] = HAnimJoint439;

HAnimJoint HAnimJoint440 = createNode("HAnimJoint");
HAnimJoint440.USE = "hanim_l_ring2";
HAnimHumanoid44.joints[95] = HAnimJoint440;

HAnimJoint HAnimJoint441 = createNode("HAnimJoint");
HAnimJoint441.USE = "hanim_r_ring2";
HAnimHumanoid44.joints[96] = HAnimJoint441;

HAnimJoint HAnimJoint442 = createNode("HAnimJoint");
HAnimJoint442.USE = "hanim_l_ring3";
HAnimHumanoid44.joints[97] = HAnimJoint442;

HAnimJoint HAnimJoint443 = createNode("HAnimJoint");
HAnimJoint443.USE = "hanim_r_ring3";
HAnimHumanoid44.joints[98] = HAnimJoint443;

HAnimJoint HAnimJoint444 = createNode("HAnimJoint");
HAnimJoint444.USE = "hanim_l_shoulder";
HAnimHumanoid44.joints[99] = HAnimJoint444;

HAnimJoint HAnimJoint445 = createNode("HAnimJoint");
HAnimJoint445.USE = "hanim_r_shoulder";
HAnimHumanoid44.joints[100] = HAnimJoint445;

HAnimJoint HAnimJoint446 = createNode("HAnimJoint");
HAnimJoint446.USE = "hanim_l_sternoclavicular";
HAnimHumanoid44.joints[101] = HAnimJoint446;

HAnimJoint HAnimJoint447 = createNode("HAnimJoint");
HAnimJoint447.USE = "hanim_r_sternoclavicular";
HAnimHumanoid44.joints[102] = HAnimJoint447;

HAnimJoint HAnimJoint448 = createNode("HAnimJoint");
HAnimJoint448.USE = "hanim_l_subtalar";
HAnimHumanoid44.joints[103] = HAnimJoint448;

HAnimJoint HAnimJoint449 = createNode("HAnimJoint");
HAnimJoint449.USE = "hanim_r_subtalar";
HAnimHumanoid44.joints[104] = HAnimJoint449;

HAnimJoint HAnimJoint450 = createNode("HAnimJoint");
HAnimJoint450.USE = "hanim_l_thumb1";
HAnimHumanoid44.joints[105] = HAnimJoint450;

HAnimJoint HAnimJoint451 = createNode("HAnimJoint");
HAnimJoint451.USE = "hanim_r_thumb1";
HAnimHumanoid44.joints[106] = HAnimJoint451;

HAnimJoint HAnimJoint452 = createNode("HAnimJoint");
HAnimJoint452.USE = "hanim_l_thumb2";
HAnimHumanoid44.joints[107] = HAnimJoint452;

HAnimJoint HAnimJoint453 = createNode("HAnimJoint");
HAnimJoint453.USE = "hanim_r_thumb2";
HAnimHumanoid44.joints[108] = HAnimJoint453;

HAnimJoint HAnimJoint454 = createNode("HAnimJoint");
HAnimJoint454.USE = "hanim_l_thumb3";
HAnimHumanoid44.joints[109] = HAnimJoint454;

HAnimJoint HAnimJoint455 = createNode("HAnimJoint");
HAnimJoint455.USE = "hanim_r_thumb3";
HAnimHumanoid44.joints[110] = HAnimJoint455;

HAnimJoint HAnimJoint456 = createNode("HAnimJoint");
HAnimJoint456.USE = "hanim_l_wrist";
HAnimHumanoid44.joints[111] = HAnimJoint456;

HAnimJoint HAnimJoint457 = createNode("HAnimJoint");
HAnimJoint457.USE = "hanim_r_wrist";
HAnimHumanoid44.joints[112] = HAnimJoint457;

HAnimSegment HAnimSegment458 = createNode("HAnimSegment");
HAnimSegment458.USE = "hanim_pelvis";
HAnimHumanoid44.segments[113] = HAnimSegment458;

HAnimSegment HAnimSegment459 = createNode("HAnimSegment");
HAnimSegment459.USE = "hanim_skull";
HAnimHumanoid44.segments[114] = HAnimSegment459;

HAnimSegment HAnimSegment460 = createNode("HAnimSegment");
HAnimSegment460.USE = "hanim_jaw";
HAnimHumanoid44.segments[115] = HAnimSegment460;

HAnimSegment HAnimSegment461 = createNode("HAnimSegment");
HAnimSegment461.USE = "hanim_c1";
HAnimHumanoid44.segments[116] = HAnimSegment461;

HAnimSegment HAnimSegment462 = createNode("HAnimSegment");
HAnimSegment462.USE = "hanim_c2";
HAnimHumanoid44.segments[117] = HAnimSegment462;

HAnimSegment HAnimSegment463 = createNode("HAnimSegment");
HAnimSegment463.USE = "hanim_c3";
HAnimHumanoid44.segments[118] = HAnimSegment463;

HAnimSegment HAnimSegment464 = createNode("HAnimSegment");
HAnimSegment464.USE = "hanim_c4";
HAnimHumanoid44.segments[119] = HAnimSegment464;

HAnimSegment HAnimSegment465 = createNode("HAnimSegment");
HAnimSegment465.USE = "hanim_c5";
HAnimHumanoid44.segments[120] = HAnimSegment465;

HAnimSegment HAnimSegment466 = createNode("HAnimSegment");
HAnimSegment466.USE = "hanim_c6";
HAnimHumanoid44.segments[121] = HAnimSegment466;

HAnimSegment HAnimSegment467 = createNode("HAnimSegment");
HAnimSegment467.USE = "hanim_c7";
HAnimHumanoid44.segments[122] = HAnimSegment467;

HAnimSegment HAnimSegment468 = createNode("HAnimSegment");
HAnimSegment468.USE = "hanim_t1";
HAnimHumanoid44.segments[123] = HAnimSegment468;

HAnimSegment HAnimSegment469 = createNode("HAnimSegment");
HAnimSegment469.USE = "hanim_t2";
HAnimHumanoid44.segments[124] = HAnimSegment469;

HAnimSegment HAnimSegment470 = createNode("HAnimSegment");
HAnimSegment470.USE = "hanim_t3";
HAnimHumanoid44.segments[125] = HAnimSegment470;

HAnimSegment HAnimSegment471 = createNode("HAnimSegment");
HAnimSegment471.USE = "hanim_t4";
HAnimHumanoid44.segments[126] = HAnimSegment471;

HAnimSegment HAnimSegment472 = createNode("HAnimSegment");
HAnimSegment472.USE = "hanim_t5";
HAnimHumanoid44.segments[127] = HAnimSegment472;

HAnimSegment HAnimSegment473 = createNode("HAnimSegment");
HAnimSegment473.USE = "hanim_t6";
HAnimHumanoid44.segments[128] = HAnimSegment473;

HAnimSegment HAnimSegment474 = createNode("HAnimSegment");
HAnimSegment474.USE = "hanim_t7";
HAnimHumanoid44.segments[129] = HAnimSegment474;

HAnimSegment HAnimSegment475 = createNode("HAnimSegment");
HAnimSegment475.USE = "hanim_t8";
HAnimHumanoid44.segments[130] = HAnimSegment475;

HAnimSegment HAnimSegment476 = createNode("HAnimSegment");
HAnimSegment476.USE = "hanim_t9";
HAnimHumanoid44.segments[131] = HAnimSegment476;

HAnimSegment HAnimSegment477 = createNode("HAnimSegment");
HAnimSegment477.USE = "hanim_t10";
HAnimHumanoid44.segments[132] = HAnimSegment477;

HAnimSegment HAnimSegment478 = createNode("HAnimSegment");
HAnimSegment478.USE = "hanim_t11";
HAnimHumanoid44.segments[133] = HAnimSegment478;

HAnimSegment HAnimSegment479 = createNode("HAnimSegment");
HAnimSegment479.USE = "hanim_t12";
HAnimHumanoid44.segments[134] = HAnimSegment479;

HAnimSegment HAnimSegment480 = createNode("HAnimSegment");
HAnimSegment480.USE = "hanim_l1";
HAnimHumanoid44.segments[135] = HAnimSegment480;

HAnimSegment HAnimSegment481 = createNode("HAnimSegment");
HAnimSegment481.USE = "hanim_l2";
HAnimHumanoid44.segments[136] = HAnimSegment481;

HAnimSegment HAnimSegment482 = createNode("HAnimSegment");
HAnimSegment482.USE = "hanim_l3";
HAnimHumanoid44.segments[137] = HAnimSegment482;

HAnimSegment HAnimSegment483 = createNode("HAnimSegment");
HAnimSegment483.USE = "hanim_l4";
HAnimHumanoid44.segments[138] = HAnimSegment483;

HAnimSegment HAnimSegment484 = createNode("HAnimSegment");
HAnimSegment484.USE = "hanim_l5";
HAnimHumanoid44.segments[139] = HAnimSegment484;

HAnimSegment HAnimSegment485 = createNode("HAnimSegment");
HAnimSegment485.USE = "hanim_sacrum";
HAnimHumanoid44.segments[140] = HAnimSegment485;

HAnimSegment HAnimSegment486 = createNode("HAnimSegment");
HAnimSegment486.USE = "hanim_l_calf";
HAnimHumanoid44.segments[141] = HAnimSegment486;

HAnimSegment HAnimSegment487 = createNode("HAnimSegment");
HAnimSegment487.USE = "hanim_r_calf";
HAnimHumanoid44.segments[142] = HAnimSegment487;

HAnimSegment HAnimSegment488 = createNode("HAnimSegment");
HAnimSegment488.USE = "hanim_l_clavicle";
HAnimHumanoid44.segments[143] = HAnimSegment488;

HAnimSegment HAnimSegment489 = createNode("HAnimSegment");
HAnimSegment489.USE = "hanim_r_clavicle";
HAnimHumanoid44.segments[144] = HAnimSegment489;

HAnimSegment HAnimSegment490 = createNode("HAnimSegment");
HAnimSegment490.USE = "hanim_l_eyeball";
HAnimHumanoid44.segments[145] = HAnimSegment490;

HAnimSegment HAnimSegment491 = createNode("HAnimSegment");
HAnimSegment491.USE = "hanim_r_eyeball";
HAnimHumanoid44.segments[146] = HAnimSegment491;

HAnimSegment HAnimSegment492 = createNode("HAnimSegment");
HAnimSegment492.USE = "hanim_l_eyebrow";
HAnimHumanoid44.segments[147] = HAnimSegment492;

HAnimSegment HAnimSegment493 = createNode("HAnimSegment");
HAnimSegment493.USE = "hanim_r_eyebrow";
HAnimHumanoid44.segments[148] = HAnimSegment493;

HAnimSegment HAnimSegment494 = createNode("HAnimSegment");
HAnimSegment494.USE = "hanim_l_eyelid";
HAnimHumanoid44.segments[149] = HAnimSegment494;

HAnimSegment HAnimSegment495 = createNode("HAnimSegment");
HAnimSegment495.USE = "hanim_r_eyelid";
HAnimHumanoid44.segments[150] = HAnimSegment495;

HAnimSegment HAnimSegment496 = createNode("HAnimSegment");
HAnimSegment496.USE = "hanim_l_forearm";
HAnimHumanoid44.segments[151] = HAnimSegment496;

HAnimSegment HAnimSegment497 = createNode("HAnimSegment");
HAnimSegment497.USE = "hanim_r_forearm";
HAnimHumanoid44.segments[152] = HAnimSegment497;

HAnimSegment HAnimSegment498 = createNode("HAnimSegment");
HAnimSegment498.USE = "hanim_l_forefoot";
HAnimHumanoid44.segments[153] = HAnimSegment498;

HAnimSegment HAnimSegment499 = createNode("HAnimSegment");
HAnimSegment499.USE = "hanim_r_forefoot";
HAnimHumanoid44.segments[154] = HAnimSegment499;

HAnimSegment HAnimSegment500 = createNode("HAnimSegment");
HAnimSegment500.USE = "hanim_l_hand";
HAnimHumanoid44.segments[155] = HAnimSegment500;

HAnimSegment HAnimSegment501 = createNode("HAnimSegment");
HAnimSegment501.USE = "hanim_r_hand";
HAnimHumanoid44.segments[156] = HAnimSegment501;

HAnimSegment HAnimSegment502 = createNode("HAnimSegment");
HAnimSegment502.USE = "hanim_l_hindfoot";
HAnimHumanoid44.segments[157] = HAnimSegment502;

HAnimSegment HAnimSegment503 = createNode("HAnimSegment");
HAnimSegment503.USE = "hanim_r_hindfoot";
HAnimHumanoid44.segments[158] = HAnimSegment503;

HAnimSegment HAnimSegment504 = createNode("HAnimSegment");
HAnimSegment504.USE = "hanim_l_index_distal";
HAnimHumanoid44.segments[159] = HAnimSegment504;

HAnimSegment HAnimSegment505 = createNode("HAnimSegment");
HAnimSegment505.USE = "hanim_r_index_distal";
HAnimHumanoid44.segments[160] = HAnimSegment505;

HAnimSegment HAnimSegment506 = createNode("HAnimSegment");
HAnimSegment506.USE = "hanim_l_index_metacarpal";
HAnimHumanoid44.segments[161] = HAnimSegment506;

HAnimSegment HAnimSegment507 = createNode("HAnimSegment");
HAnimSegment507.USE = "hanim_r_index_metacarpal";
HAnimHumanoid44.segments[162] = HAnimSegment507;

HAnimSegment HAnimSegment508 = createNode("HAnimSegment");
HAnimSegment508.USE = "hanim_l_index_middle";
HAnimHumanoid44.segments[163] = HAnimSegment508;

HAnimSegment HAnimSegment509 = createNode("HAnimSegment");
HAnimSegment509.USE = "hanim_r_index_middle";
HAnimHumanoid44.segments[164] = HAnimSegment509;

HAnimSegment HAnimSegment510 = createNode("HAnimSegment");
HAnimSegment510.USE = "hanim_l_index_proximal";
HAnimHumanoid44.segments[165] = HAnimSegment510;

HAnimSegment HAnimSegment511 = createNode("HAnimSegment");
HAnimSegment511.USE = "hanim_r_index_proximal";
HAnimHumanoid44.segments[166] = HAnimSegment511;

HAnimSegment HAnimSegment512 = createNode("HAnimSegment");
HAnimSegment512.USE = "hanim_l_middistal";
HAnimHumanoid44.segments[167] = HAnimSegment512;

HAnimSegment HAnimSegment513 = createNode("HAnimSegment");
HAnimSegment513.USE = "hanim_r_middistal";
HAnimHumanoid44.segments[168] = HAnimSegment513;

HAnimSegment HAnimSegment514 = createNode("HAnimSegment");
HAnimSegment514.USE = "hanim_l_middle_distal";
HAnimHumanoid44.segments[169] = HAnimSegment514;

HAnimSegment HAnimSegment515 = createNode("HAnimSegment");
HAnimSegment515.USE = "hanim_r_middle_distal";
HAnimHumanoid44.segments[170] = HAnimSegment515;

HAnimSegment HAnimSegment516 = createNode("HAnimSegment");
HAnimSegment516.USE = "hanim_l_middle_metacarpal";
HAnimHumanoid44.segments[171] = HAnimSegment516;

HAnimSegment HAnimSegment517 = createNode("HAnimSegment");
HAnimSegment517.USE = "hanim_r_middle_metacarpal";
HAnimHumanoid44.segments[172] = HAnimSegment517;

HAnimSegment HAnimSegment518 = createNode("HAnimSegment");
HAnimSegment518.USE = "hanim_l_middle_middle";
HAnimHumanoid44.segments[173] = HAnimSegment518;

HAnimSegment HAnimSegment519 = createNode("HAnimSegment");
HAnimSegment519.USE = "hanim_r_middle_middle";
HAnimHumanoid44.segments[174] = HAnimSegment519;

HAnimSegment HAnimSegment520 = createNode("HAnimSegment");
HAnimSegment520.USE = "hanim_l_middle_proximal";
HAnimHumanoid44.segments[175] = HAnimSegment520;

HAnimSegment HAnimSegment521 = createNode("HAnimSegment");
HAnimSegment521.USE = "hanim_r_middle_proximal";
HAnimHumanoid44.segments[176] = HAnimSegment521;

HAnimSegment HAnimSegment522 = createNode("HAnimSegment");
HAnimSegment522.USE = "hanim_l_midproximal";
HAnimHumanoid44.segments[177] = HAnimSegment522;

HAnimSegment HAnimSegment523 = createNode("HAnimSegment");
HAnimSegment523.USE = "hanim_r_midproximal";
HAnimHumanoid44.segments[178] = HAnimSegment523;

HAnimSegment HAnimSegment524 = createNode("HAnimSegment");
HAnimSegment524.USE = "hanim_l_pinky_distal";
HAnimHumanoid44.segments[179] = HAnimSegment524;

HAnimSegment HAnimSegment525 = createNode("HAnimSegment");
HAnimSegment525.USE = "hanim_r_pinky_distal";
HAnimHumanoid44.segments[180] = HAnimSegment525;

HAnimSegment HAnimSegment526 = createNode("HAnimSegment");
HAnimSegment526.USE = "hanim_l_pinky_metacarpal";
HAnimHumanoid44.segments[181] = HAnimSegment526;

HAnimSegment HAnimSegment527 = createNode("HAnimSegment");
HAnimSegment527.USE = "hanim_r_pinky_metacarpal";
HAnimHumanoid44.segments[182] = HAnimSegment527;

HAnimSegment HAnimSegment528 = createNode("HAnimSegment");
HAnimSegment528.USE = "hanim_l_pinky_middle";
HAnimHumanoid44.segments[183] = HAnimSegment528;

HAnimSegment HAnimSegment529 = createNode("HAnimSegment");
HAnimSegment529.USE = "hanim_r_pinky_middle";
HAnimHumanoid44.segments[184] = HAnimSegment529;

HAnimSegment HAnimSegment530 = createNode("HAnimSegment");
HAnimSegment530.USE = "hanim_l_pinky_proximal";
HAnimHumanoid44.segments[185] = HAnimSegment530;

HAnimSegment HAnimSegment531 = createNode("HAnimSegment");
HAnimSegment531.USE = "hanim_r_pinky_proximal";
HAnimHumanoid44.segments[186] = HAnimSegment531;

HAnimSegment HAnimSegment532 = createNode("HAnimSegment");
HAnimSegment532.USE = "hanim_l_ring_distal";
HAnimHumanoid44.segments[187] = HAnimSegment532;

HAnimSegment HAnimSegment533 = createNode("HAnimSegment");
HAnimSegment533.USE = "hanim_r_ring_distal";
HAnimHumanoid44.segments[188] = HAnimSegment533;

HAnimSegment HAnimSegment534 = createNode("HAnimSegment");
HAnimSegment534.USE = "hanim_l_ring_metacarpal";
HAnimHumanoid44.segments[189] = HAnimSegment534;

HAnimSegment HAnimSegment535 = createNode("HAnimSegment");
HAnimSegment535.USE = "hanim_r_ring_metacarpal";
HAnimHumanoid44.segments[190] = HAnimSegment535;

HAnimSegment HAnimSegment536 = createNode("HAnimSegment");
HAnimSegment536.USE = "hanim_l_ring_middle";
HAnimHumanoid44.segments[191] = HAnimSegment536;

HAnimSegment HAnimSegment537 = createNode("HAnimSegment");
HAnimSegment537.USE = "hanim_r_ring_middle";
HAnimHumanoid44.segments[192] = HAnimSegment537;

HAnimSegment HAnimSegment538 = createNode("HAnimSegment");
HAnimSegment538.USE = "hanim_l_ring_proximal";
HAnimHumanoid44.segments[193] = HAnimSegment538;

HAnimSegment HAnimSegment539 = createNode("HAnimSegment");
HAnimSegment539.USE = "hanim_r_ring_proximal";
HAnimHumanoid44.segments[194] = HAnimSegment539;

HAnimSegment HAnimSegment540 = createNode("HAnimSegment");
HAnimSegment540.USE = "hanim_l_scapula";
HAnimHumanoid44.segments[195] = HAnimSegment540;

HAnimSegment HAnimSegment541 = createNode("HAnimSegment");
HAnimSegment541.USE = "hanim_r_scapula";
HAnimHumanoid44.segments[196] = HAnimSegment541;

HAnimSegment HAnimSegment542 = createNode("HAnimSegment");
HAnimSegment542.USE = "hanim_l_thigh";
HAnimHumanoid44.segments[197] = HAnimSegment542;

HAnimSegment HAnimSegment543 = createNode("HAnimSegment");
HAnimSegment543.USE = "hanim_r_thigh";
HAnimHumanoid44.segments[198] = HAnimSegment543;

HAnimSegment HAnimSegment544 = createNode("HAnimSegment");
HAnimSegment544.USE = "hanim_l_thumb_distal";
HAnimHumanoid44.segments[199] = HAnimSegment544;

HAnimSegment HAnimSegment545 = createNode("HAnimSegment");
HAnimSegment545.USE = "hanim_r_thumb_distal";
HAnimHumanoid44.segments[200] = HAnimSegment545;

HAnimSegment HAnimSegment546 = createNode("HAnimSegment");
HAnimSegment546.USE = "hanim_l_thumb_metacarpal";
HAnimHumanoid44.segments[201] = HAnimSegment546;

HAnimSegment HAnimSegment547 = createNode("HAnimSegment");
HAnimSegment547.USE = "hanim_r_thumb_metacarpal";
HAnimHumanoid44.segments[202] = HAnimSegment547;

HAnimSegment HAnimSegment548 = createNode("HAnimSegment");
HAnimSegment548.USE = "hanim_l_thumb_proximal";
HAnimHumanoid44.segments[203] = HAnimSegment548;

HAnimSegment HAnimSegment549 = createNode("HAnimSegment");
HAnimSegment549.USE = "hanim_r_thumb_proximal";
HAnimHumanoid44.segments[204] = HAnimSegment549;

HAnimSegment HAnimSegment550 = createNode("HAnimSegment");
HAnimSegment550.USE = "hanim_l_upperarm";
HAnimHumanoid44.segments[205] = HAnimSegment550;

HAnimSegment HAnimSegment551 = createNode("HAnimSegment");
HAnimSegment551.USE = "hanim_r_upperarm";
HAnimHumanoid44.segments[206] = HAnimSegment551;

HAnimSite HAnimSite552 = createNode("HAnimSite");
HAnimSite552.USE = "hanim_crotch_pt";
HAnimHumanoid44.viewpoints[207] = HAnimSite552;

HAnimSite HAnimSite553 = createNode("HAnimSite");
HAnimSite553.USE = "hanim_skull_tip";
HAnimHumanoid44.viewpoints[208] = HAnimSite553;

HAnimSite HAnimSite554 = createNode("HAnimSite");
HAnimSite554.USE = "hanim_sellion_pt";
HAnimHumanoid44.viewpoints[209] = HAnimSite554;

HAnimSite HAnimSite555 = createNode("HAnimSite");
HAnimSite555.USE = "hanim_supramenton_pt";
HAnimHumanoid44.viewpoints[210] = HAnimSite555;

HAnimSite HAnimSite556 = createNode("HAnimSite");
HAnimSite556.USE = "hanim_nuchale_pt";
HAnimHumanoid44.viewpoints[211] = HAnimSite556;

HAnimSite HAnimSite557 = createNode("HAnimSite");
HAnimSite557.USE = "hanim_suprasternale_pt";
HAnimHumanoid44.viewpoints[212] = HAnimSite557;

HAnimSite HAnimSite558 = createNode("HAnimSite");
HAnimSite558.USE = "hanim_cervicale_pt";
HAnimHumanoid44.viewpoints[213] = HAnimSite558;

HAnimSite HAnimSite559 = createNode("HAnimSite");
HAnimSite559.USE = "hanim_substernale_pt";
HAnimHumanoid44.viewpoints[214] = HAnimSite559;

HAnimSite HAnimSite560 = createNode("HAnimSite");
HAnimSite560.USE = "hanim_rib10_midspine_pt";
HAnimHumanoid44.viewpoints[215] = HAnimSite560;

HAnimSite HAnimSite561 = createNode("HAnimSite");
HAnimSite561.USE = "hanim_waist_preferred_post_pt";
HAnimHumanoid44.viewpoints[216] = HAnimSite561;

HAnimSite HAnimSite562 = createNode("HAnimSite");
HAnimSite562.USE = "hanim_navel_pt";
HAnimHumanoid44.viewpoints[217] = HAnimSite562;

HAnimSite HAnimSite563 = createNode("HAnimSite");
HAnimSite563.USE = "hanim_l_acromion_pt";
HAnimHumanoid44.viewpoints[218] = HAnimSite563;

HAnimSite HAnimSite564 = createNode("HAnimSite");
HAnimSite564.USE = "hanim_r_acromion_pt";
HAnimHumanoid44.viewpoints[219] = HAnimSite564;

HAnimSite HAnimSite565 = createNode("HAnimSite");
HAnimSite565.USE = "hanim_r_asis_pt";
HAnimHumanoid44.viewpoints[220] = HAnimSite565;

HAnimSite HAnimSite566 = createNode("HAnimSite");
HAnimSite566.USE = "hanim_l_asis_pt";
HAnimHumanoid44.viewpoints[221] = HAnimSite566;

HAnimSite HAnimSite567 = createNode("HAnimSite");
HAnimSite567.USE = "hanim_l_axilla_ant_pt";
HAnimHumanoid44.viewpoints[222] = HAnimSite567;

HAnimSite HAnimSite568 = createNode("HAnimSite");
HAnimSite568.USE = "hanim_r_axilla_ant_pt";
HAnimHumanoid44.viewpoints[223] = HAnimSite568;

HAnimSite HAnimSite569 = createNode("HAnimSite");
HAnimSite569.USE = "hanim_l_axilla_post_pt";
HAnimHumanoid44.viewpoints[224] = HAnimSite569;

HAnimSite HAnimSite570 = createNode("HAnimSite");
HAnimSite570.USE = "hanim_r_axilla_post_pt";
HAnimHumanoid44.viewpoints[225] = HAnimSite570;

HAnimSite HAnimSite571 = createNode("HAnimSite");
HAnimSite571.USE = "hanim_l_calcaneous_post_pt";
HAnimHumanoid44.viewpoints[226] = HAnimSite571;

HAnimSite HAnimSite572 = createNode("HAnimSite");
HAnimSite572.USE = "hanim_r_calcaneous_post_pt";
HAnimHumanoid44.viewpoints[227] = HAnimSite572;

HAnimSite HAnimSite573 = createNode("HAnimSite");
HAnimSite573.USE = "hanim_l_clavicale_pt";
HAnimHumanoid44.viewpoints[228] = HAnimSite573;

HAnimSite HAnimSite574 = createNode("HAnimSite");
HAnimSite574.USE = "hanim_r_clavicale_pt";
HAnimHumanoid44.viewpoints[229] = HAnimSite574;

HAnimSite HAnimSite575 = createNode("HAnimSite");
HAnimSite575.USE = "hanim_l_dactylion_pt";
HAnimHumanoid44.viewpoints[230] = HAnimSite575;

HAnimSite HAnimSite576 = createNode("HAnimSite");
HAnimSite576.USE = "hanim_r_dactylion_pt";
HAnimHumanoid44.viewpoints[231] = HAnimSite576;

HAnimSite HAnimSite577 = createNode("HAnimSite");
HAnimSite577.USE = "hanim_l_digit2_pt";
HAnimHumanoid44.viewpoints[232] = HAnimSite577;

HAnimSite HAnimSite578 = createNode("HAnimSite");
HAnimSite578.USE = "hanim_r_digit2_pt";
HAnimHumanoid44.viewpoints[233] = HAnimSite578;

HAnimSite HAnimSite579 = createNode("HAnimSite");
HAnimSite579.USE = "hanim_l_femoral_lateral_epicn_pt";
HAnimHumanoid44.viewpoints[234] = HAnimSite579;

HAnimSite HAnimSite580 = createNode("HAnimSite");
HAnimSite580.USE = "hanim_r_femoral_lateral_epicn_pt";
HAnimHumanoid44.viewpoints[235] = HAnimSite580;

HAnimSite HAnimSite581 = createNode("HAnimSite");
HAnimSite581.USE = "hanim_l_femoral_medial_epicn_pt";
HAnimHumanoid44.viewpoints[236] = HAnimSite581;

HAnimSite HAnimSite582 = createNode("HAnimSite");
HAnimSite582.USE = "hanim_r_femoral_medial_epicn_pt";
HAnimHumanoid44.viewpoints[237] = HAnimSite582;

HAnimSite HAnimSite583 = createNode("HAnimSite");
HAnimSite583.USE = "hanim_l_forefoot_tip";
HAnimHumanoid44.viewpoints[238] = HAnimSite583;

HAnimSite HAnimSite584 = createNode("HAnimSite");
HAnimSite584.USE = "hanim_r_forefoot_tip";
HAnimHumanoid44.viewpoints[239] = HAnimSite584;

HAnimSite HAnimSite585 = createNode("HAnimSite");
HAnimSite585.USE = "hanim_r_gonion_pt";
HAnimHumanoid44.viewpoints[240] = HAnimSite585;

HAnimSite HAnimSite586 = createNode("HAnimSite");
HAnimSite586.USE = "hanim_l_gonion_pt";
HAnimHumanoid44.viewpoints[241] = HAnimSite586;

HAnimSite HAnimSite587 = createNode("HAnimSite");
HAnimSite587.USE = "hanim_l_humeral_lateral_epicn_pt";
HAnimHumanoid44.viewpoints[242] = HAnimSite587;

HAnimSite HAnimSite588 = createNode("HAnimSite");
HAnimSite588.USE = "hanim_r_humeral_lateral_epicn_pt";
HAnimHumanoid44.viewpoints[243] = HAnimSite588;

HAnimSite HAnimSite589 = createNode("HAnimSite");
HAnimSite589.USE = "hanim_l_humeral_medial_epicn_pt";
HAnimHumanoid44.viewpoints[244] = HAnimSite589;

HAnimSite HAnimSite590 = createNode("HAnimSite");
HAnimSite590.USE = "hanim_r_humeral_medial_epicn_pt";
HAnimHumanoid44.viewpoints[245] = HAnimSite590;

HAnimSite HAnimSite591 = createNode("HAnimSite");
HAnimSite591.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid44.viewpoints[246] = HAnimSite591;

HAnimSite HAnimSite592 = createNode("HAnimSite");
HAnimSite592.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid44.viewpoints[247] = HAnimSite592;

HAnimSite HAnimSite593 = createNode("HAnimSite");
HAnimSite593.USE = "hanim_l_index_distal_tip";
HAnimHumanoid44.viewpoints[248] = HAnimSite593;

HAnimSite HAnimSite594 = createNode("HAnimSite");
HAnimSite594.USE = "hanim_r_index_distal_tip";
HAnimHumanoid44.viewpoints[249] = HAnimSite594;

HAnimSite HAnimSite595 = createNode("HAnimSite");
HAnimSite595.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid44.viewpoints[250] = HAnimSite595;

HAnimSite HAnimSite596 = createNode("HAnimSite");
HAnimSite596.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid44.viewpoints[251] = HAnimSite596;

HAnimSite HAnimSite597 = createNode("HAnimSite");
HAnimSite597.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid44.viewpoints[252] = HAnimSite597;

HAnimSite HAnimSite598 = createNode("HAnimSite");
HAnimSite598.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid44.viewpoints[253] = HAnimSite598;

HAnimSite HAnimSite599 = createNode("HAnimSite");
HAnimSite599.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid44.viewpoints[254] = HAnimSite599;

HAnimSite HAnimSite600 = createNode("HAnimSite");
HAnimSite600.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid44.viewpoints[255] = HAnimSite600;

HAnimSite HAnimSite601 = createNode("HAnimSite");
HAnimSite601.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid44.viewpoints[256] = HAnimSite601;

HAnimSite HAnimSite602 = createNode("HAnimSite");
HAnimSite602.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid44.viewpoints[257] = HAnimSite602;

HAnimSite HAnimSite603 = createNode("HAnimSite");
HAnimSite603.USE = "hanim_l_metacarpal_pha2_pt";
HAnimHumanoid44.viewpoints[258] = HAnimSite603;

HAnimSite HAnimSite604 = createNode("HAnimSite");
HAnimSite604.USE = "hanim_r_metacarpal_pha2_pt";
HAnimHumanoid44.viewpoints[259] = HAnimSite604;

HAnimSite HAnimSite605 = createNode("HAnimSite");
HAnimSite605.USE = "hanim_l_metacarpal_pha5_pt";
HAnimHumanoid44.viewpoints[260] = HAnimSite605;

HAnimSite HAnimSite606 = createNode("HAnimSite");
HAnimSite606.USE = "hanim_r_metacarpal_pha5_pt";
HAnimHumanoid44.viewpoints[261] = HAnimSite606;

HAnimSite HAnimSite607 = createNode("HAnimSite");
HAnimSite607.USE = "hanim_l_metatarsal_pha1_pt";
HAnimHumanoid44.viewpoints[262] = HAnimSite607;

HAnimSite HAnimSite608 = createNode("HAnimSite");
HAnimSite608.USE = "hanim_r_metatarsal_pha1_pt";
HAnimHumanoid44.viewpoints[263] = HAnimSite608;

HAnimSite HAnimSite609 = createNode("HAnimSite");
HAnimSite609.USE = "hanim_l_metatarsal_pha5_pt";
HAnimHumanoid44.viewpoints[264] = HAnimSite609;

HAnimSite HAnimSite610 = createNode("HAnimSite");
HAnimSite610.USE = "hanim_r_metatarsal_pha5_pt";
HAnimHumanoid44.viewpoints[265] = HAnimSite610;

HAnimSite HAnimSite611 = createNode("HAnimSite");
HAnimSite611.USE = "hanim_l_middle_distal_tip";
HAnimHumanoid44.viewpoints[266] = HAnimSite611;

HAnimSite HAnimSite612 = createNode("HAnimSite");
HAnimSite612.USE = "hanim_r_middle_distal_tip";
HAnimHumanoid44.viewpoints[267] = HAnimSite612;

HAnimSite HAnimSite613 = createNode("HAnimSite");
HAnimSite613.USE = "hanim_r_neck_base_pt";
HAnimHumanoid44.viewpoints[268] = HAnimSite613;

HAnimSite HAnimSite614 = createNode("HAnimSite");
HAnimSite614.USE = "hanim_l_neck_base_pt";
HAnimHumanoid44.viewpoints[269] = HAnimSite614;

HAnimSite HAnimSite615 = createNode("HAnimSite");
HAnimSite615.USE = "hanim_l_olecranon_pt";
HAnimHumanoid44.viewpoints[270] = HAnimSite615;

HAnimSite HAnimSite616 = createNode("HAnimSite");
HAnimSite616.USE = "hanim_r_olecranon_pt";
HAnimHumanoid44.viewpoints[271] = HAnimSite616;

HAnimSite HAnimSite617 = createNode("HAnimSite");
HAnimSite617.USE = "hanim_l_pinky_distal_tip";
HAnimHumanoid44.viewpoints[272] = HAnimSite617;

HAnimSite HAnimSite618 = createNode("HAnimSite");
HAnimSite618.USE = "hanim_r_pinky_distal_tip";
HAnimHumanoid44.viewpoints[273] = HAnimSite618;

HAnimSite HAnimSite619 = createNode("HAnimSite");
HAnimSite619.USE = "hanim_r_psis_pt";
HAnimHumanoid44.viewpoints[274] = HAnimSite619;

HAnimSite HAnimSite620 = createNode("HAnimSite");
HAnimSite620.USE = "hanim_l_psis_pt";
HAnimHumanoid44.viewpoints[275] = HAnimSite620;

HAnimSite HAnimSite621 = createNode("HAnimSite");
HAnimSite621.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid44.viewpoints[276] = HAnimSite621;

HAnimSite HAnimSite622 = createNode("HAnimSite");
HAnimSite622.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid44.viewpoints[277] = HAnimSite622;

HAnimSite HAnimSite623 = createNode("HAnimSite");
HAnimSite623.USE = "hanim_l_radiale_pt";
HAnimHumanoid44.viewpoints[278] = HAnimSite623;

HAnimSite HAnimSite624 = createNode("HAnimSite");
HAnimSite624.USE = "hanim_r_radiale_pt";
HAnimHumanoid44.viewpoints[279] = HAnimSite624;

HAnimSite HAnimSite625 = createNode("HAnimSite");
HAnimSite625.USE = "hanim_r_rib10_pt";
HAnimHumanoid44.viewpoints[280] = HAnimSite625;

HAnimSite HAnimSite626 = createNode("HAnimSite");
HAnimSite626.USE = "hanim_l_rib10_pt";
HAnimHumanoid44.viewpoints[281] = HAnimSite626;

HAnimSite HAnimSite627 = createNode("HAnimSite");
HAnimSite627.USE = "hanim_l_ring_distal_tip";
HAnimHumanoid44.viewpoints[282] = HAnimSite627;

HAnimSite HAnimSite628 = createNode("HAnimSite");
HAnimSite628.USE = "hanim_r_ring_distal_tip";
HAnimHumanoid44.viewpoints[283] = HAnimSite628;

HAnimSite HAnimSite629 = createNode("HAnimSite");
HAnimSite629.USE = "hanim_temporomandibular_l_site_pt";
HAnimHumanoid44.viewpoints[284] = HAnimSite629;

HAnimSite HAnimSite630 = createNode("HAnimSite");
HAnimSite630.USE = "hanim_temporomandibular_r_site_pt";
HAnimHumanoid44.viewpoints[285] = HAnimSite630;

HAnimSite HAnimSite631 = createNode("HAnimSite");
HAnimSite631.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid44.viewpoints[286] = HAnimSite631;

HAnimSite HAnimSite632 = createNode("HAnimSite");
HAnimSite632.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid44.viewpoints[287] = HAnimSite632;

HAnimSite HAnimSite633 = createNode("HAnimSite");
HAnimSite633.USE = "hanim_r_thelion_pt";
HAnimHumanoid44.viewpoints[288] = HAnimSite633;

HAnimSite HAnimSite634 = createNode("HAnimSite");
HAnimSite634.USE = "hanim_l_thelion_pt";
HAnimHumanoid44.viewpoints[289] = HAnimSite634;

HAnimSite HAnimSite635 = createNode("HAnimSite");
HAnimSite635.USE = "hanim_l_thumb_distal_tip";
HAnimHumanoid44.viewpoints[290] = HAnimSite635;

HAnimSite HAnimSite636 = createNode("HAnimSite");
HAnimSite636.USE = "hanim_r_thumb_distal_tip";
HAnimHumanoid44.viewpoints[291] = HAnimSite636;

HAnimSite HAnimSite637 = createNode("HAnimSite");
HAnimSite637.USE = "hanim_r_tragion_pt";
HAnimHumanoid44.viewpoints[292] = HAnimSite637;

HAnimSite HAnimSite638 = createNode("HAnimSite");
HAnimSite638.USE = "hanim_l_tragion_pt";
HAnimHumanoid44.viewpoints[293] = HAnimSite638;

HAnimSite HAnimSite639 = createNode("HAnimSite");
HAnimSite639.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid44.viewpoints[294] = HAnimSite639;

HAnimSite HAnimSite640 = createNode("HAnimSite");
HAnimSite640.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid44.viewpoints[295] = HAnimSite640;

HAnimSite HAnimSite641 = createNode("HAnimSite");
HAnimSite641.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid44.viewpoints[296] = HAnimSite641;

HAnimSite HAnimSite642 = createNode("HAnimSite");
HAnimSite642.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid44.viewpoints[297] = HAnimSite642;

children[12] = HAnimHumanoid44;

}

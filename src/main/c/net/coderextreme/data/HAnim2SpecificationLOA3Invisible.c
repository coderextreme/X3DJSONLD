#include "/c/x3d-code/www.web3d.org/x3d/languages/c/X3DLib/X3DLib.h"
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
meta6.name = "created";
meta6.content = "24 April 2013";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "13 March 2021";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "creator";
meta8.content = "Matthew T. Beitler, Joe D. Williams, Don Brutzman";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "reference";
meta9.content = "HAnim2SpecificationLOA3Illustrated.x3d";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "reference";
meta10.content = "HAnim2SpecificationLOA3Animation.x3d";
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
meta27.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/HAnim2SpecificationLOA3Invisible.x3d";
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
HAnimHumanoid43.loa = 3;
HAnimHumanoid43.version = "2.0";
//HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is allowed
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
//right between the eyes, stationary position not animating except with body itself
MetadataSet MetadataSet44 = createNode("MetadataSet");
MetadataSet44.name = "HAnimHumanoid.info";
MetadataSet44.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
MetadataString MetadataString45 = createNode("MetadataString");
MetadataString45.name = "authorName";
MetadataString45.value = new MFString(new java.lang.String["Matthew T. Beitler Joe D. Williams Don Brutzman"]);
MetadataSet44.value = new MFNode();

MetadataSet44.value[0] = MetadataString45;

MetadataString MetadataString46 = createNode("MetadataString");
MetadataString46.name = "authorEmail";
MetadataString46.value = new MFString(new java.lang.String["HAnim@web3D.org"]);
MetadataSet44.value[1] = MetadataString46;

MetadataString MetadataString47 = createNode("MetadataString");
MetadataString47.name = "copyright";
MetadataString47.value = new MFString(new java.lang.String["none"]);
MetadataSet44.value[2] = MetadataString47;

MetadataString MetadataString48 = createNode("MetadataString");
MetadataString48.name = "creationDate";
MetadataString48.value = new MFString(new java.lang.String["12 May 1999"]);
MetadataSet44.value[3] = MetadataString48;

MetadataFloat MetadataFloat49 = createNode("MetadataFloat");
MetadataFloat49.name = "height";
MetadataFloat49.value = new MFFloat(new float[1.7504]);
MetadataSet44.value[4] = MetadataFloat49;

MetadataString MetadataString50 = createNode("MetadataString");
MetadataString50.name = "humanoidVersion";
MetadataString50.value = new MFString(new java.lang.String["2.0"]);
MetadataSet44.value[5] = MetadataString50;

MetadataString MetadataString51 = createNode("MetadataString");
MetadataString51.name = "usageRestrictions";
MetadataString51.value = new MFString(new java.lang.String["none"]);
MetadataSet44.value[6] = MetadataString51;

HAnimHumanoid43.metadata = new SFNode();

HAnimHumanoid43.metadata[0] = MetadataSet44;

HAnimJoint HAnimJoint52 = createNode("HAnimJoint");
HAnimJoint52.name = "humanoid_root";
HAnimJoint52.DEF = "hanim_humanoid_root";
HAnimJoint52.center = new SFVec3f(new float[0,0.824,0.0277]);
HAnimJoint52.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint52.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint52.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment53 = createNode("HAnimSegment");
HAnimSegment53.name = "sacrum";
HAnimSegment53.DEF = "hanim_sacrum";
HAnimJoint52.children = new MFNode();

HAnimJoint52.children[0] = HAnimSegment53;

HAnimJoint HAnimJoint54 = createNode("HAnimJoint");
HAnimJoint54.name = "sacroiliac";
HAnimJoint54.DEF = "hanim_sacroiliac";
HAnimJoint54.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimJoint54.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint54.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint54.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment55 = createNode("HAnimSegment");
HAnimSegment55.name = "pelvis";
HAnimSegment55.DEF = "hanim_pelvis";
HAnimSite HAnimSite56 = createNode("HAnimSite");
HAnimSite56.name = "r_iliocristale_pt";
HAnimSite56.DEF = "hanim_r_iliocristale_pt";
HAnimSite56.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
HAnimSegment55.children = new MFNode();

HAnimSegment55.children[0] = HAnimSite56;

HAnimSite HAnimSite57 = createNode("HAnimSite");
HAnimSite57.name = "r_trochanterion_pt";
HAnimSite57.DEF = "hanim_r_trochanterion_pt";
HAnimSite57.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
HAnimSegment55.children[1] = HAnimSite57;

HAnimSite HAnimSite58 = createNode("HAnimSite");
HAnimSite58.name = "l_iliocristale_pt";
HAnimSite58.DEF = "hanim_l_iliocristale_pt";
HAnimSite58.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
HAnimSegment55.children[2] = HAnimSite58;

HAnimSite HAnimSite59 = createNode("HAnimSite");
HAnimSite59.name = "l_trochanterion_pt";
HAnimSite59.DEF = "hanim_l_trochanterion_pt";
HAnimSite59.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
HAnimSegment55.children[3] = HAnimSite59;

HAnimSite HAnimSite60 = createNode("HAnimSite");
HAnimSite60.name = "r_asis_pt";
HAnimSite60.DEF = "hanim_r_asis_pt";
HAnimSite60.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
HAnimSegment55.children[4] = HAnimSite60;

HAnimSite HAnimSite61 = createNode("HAnimSite");
HAnimSite61.name = "l_asis_pt";
HAnimSite61.DEF = "hanim_l_asis_pt";
HAnimSite61.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
HAnimSegment55.children[5] = HAnimSite61;

HAnimSite HAnimSite62 = createNode("HAnimSite");
HAnimSite62.name = "r_psis_pt";
HAnimSite62.DEF = "hanim_r_psis_pt";
HAnimSite62.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
HAnimSegment55.children[6] = HAnimSite62;

HAnimSite HAnimSite63 = createNode("HAnimSite");
HAnimSite63.name = "l_psis_pt";
HAnimSite63.DEF = "hanim_l_psis_pt";
HAnimSite63.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
HAnimSegment55.children[7] = HAnimSite63;

HAnimSite HAnimSite64 = createNode("HAnimSite");
HAnimSite64.name = "crotch_pt";
HAnimSite64.DEF = "hanim_crotch_pt";
HAnimSite64.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
HAnimSegment55.children[8] = HAnimSite64;

HAnimJoint54.children = new MFNode();

HAnimJoint54.children[0] = HAnimSegment55;

HAnimJoint HAnimJoint65 = createNode("HAnimJoint");
HAnimJoint65.name = "l_hip";
HAnimJoint65.DEF = "hanim_l_hip";
HAnimJoint65.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimJoint65.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint65.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint65.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment66 = createNode("HAnimSegment");
HAnimSegment66.name = "l_thigh";
HAnimSegment66.DEF = "hanim_l_thigh";
HAnimSite HAnimSite67 = createNode("HAnimSite");
HAnimSite67.name = "l_knee_crease_pt";
HAnimSite67.DEF = "hanim_l_knee_crease_pt";
HAnimSite67.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
HAnimSegment66.children = new MFNode();

HAnimSegment66.children[0] = HAnimSite67;

HAnimSite HAnimSite68 = createNode("HAnimSite");
HAnimSite68.name = "l_femoral_lateral_epicondyle_pt";
HAnimSite68.DEF = "hanim_l_femoral_lateral_epicondyle_pt";
HAnimSite68.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
HAnimSegment66.children[1] = HAnimSite68;

HAnimSite HAnimSite69 = createNode("HAnimSite");
HAnimSite69.name = "l_femoral_medial_epicondyle_pt";
HAnimSite69.DEF = "hanim_l_femoral_medial_epicondyle_pt";
HAnimSite69.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
HAnimSegment66.children[2] = HAnimSite69;

HAnimJoint65.children = new MFNode();

HAnimJoint65.children[0] = HAnimSegment66;

HAnimJoint HAnimJoint70 = createNode("HAnimJoint");
HAnimJoint70.name = "l_knee";
HAnimJoint70.DEF = "hanim_l_knee";
HAnimJoint70.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimJoint70.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint70.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint70.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment71 = createNode("HAnimSegment");
HAnimSegment71.name = "l_calf";
HAnimSegment71.DEF = "hanim_l_calf";
HAnimJoint70.children = new MFNode();

HAnimJoint70.children[0] = HAnimSegment71;

HAnimJoint HAnimJoint72 = createNode("HAnimJoint");
HAnimJoint72.name = "l_talocrural";
HAnimJoint72.DEF = "hanim_l_talocrural";
HAnimJoint72.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimJoint72.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint72.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint72.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment73 = createNode("HAnimSegment");
HAnimSegment73.name = "l_talus";
HAnimSegment73.DEF = "hanim_l_talus";
HAnimSite HAnimSite74 = createNode("HAnimSite");
HAnimSite74.name = "l_lateral_malleolus_pt";
HAnimSite74.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite74.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
HAnimSegment73.children = new MFNode();

HAnimSegment73.children[0] = HAnimSite74;

HAnimSite HAnimSite75 = createNode("HAnimSite");
HAnimSite75.name = "l_medial_malleolus_pt";
HAnimSite75.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite75.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
HAnimSegment73.children[1] = HAnimSite75;

HAnimSite HAnimSite76 = createNode("HAnimSite");
HAnimSite76.name = "l_sphyrion_pt";
HAnimSite76.DEF = "hanim_l_sphyrion_pt";
HAnimSite76.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
HAnimSegment73.children[2] = HAnimSite76;

HAnimSite HAnimSite77 = createNode("HAnimSite");
HAnimSite77.name = "l_calcaneus_posterior_pt";
HAnimSite77.DEF = "hanim_l_calcaneus_posterior_pt";
HAnimSite77.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
HAnimSegment73.children[3] = HAnimSite77;

HAnimJoint72.children = new MFNode();

HAnimJoint72.children[0] = HAnimSegment73;

HAnimJoint HAnimJoint78 = createNode("HAnimJoint");
HAnimJoint78.name = "l_tarsometatarsal_2";
HAnimJoint78.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint78.center = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
HAnimJoint78.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint78.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint78.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment79 = createNode("HAnimSegment");
HAnimSegment79.name = "l_metatarsal_2";
HAnimSegment79.DEF = "hanim_l_metatarsal_2";
HAnimJoint78.children = new MFNode();

HAnimJoint78.children[0] = HAnimSegment79;

HAnimJoint HAnimJoint80 = createNode("HAnimJoint");
HAnimJoint80.name = "l_metatarsophalangeal_2";
HAnimJoint80.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint80.center = new SFVec3f(new float[0.1086,0.0001,0.0368]);
HAnimJoint80.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint80.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint80.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment81 = createNode("HAnimSegment");
HAnimSegment81.name = "l_tarsal_proximal_phalanx_2";
HAnimSegment81.DEF = "hanim_l_tarsal_proximal_phalanx_2";
HAnimSite HAnimSite82 = createNode("HAnimSite");
HAnimSite82.name = "l_metatarsal_phalanx_1_pt";
HAnimSite82.DEF = "hanim_l_metatarsal_phalanx_1_pt";
HAnimSite82.translation = new SFVec3f(new float[0.0816,0.0232,0.0106]);
HAnimSegment81.children = new MFNode();

HAnimSegment81.children[0] = HAnimSite82;

HAnimJoint80.children = new MFNode();

HAnimJoint80.children[0] = HAnimSegment81;

HAnimJoint HAnimJoint83 = createNode("HAnimJoint");
HAnimJoint83.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint83.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint83.center = new SFVec3f(new float[0.1086,0,0.0762]);
HAnimJoint83.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint83.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint83.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment84 = createNode("HAnimSegment");
HAnimSegment84.name = "l_tarsal_distal_phalanx_2";
HAnimSegment84.DEF = "hanim_l_tarsal_distal_phalanx_2";
HAnimSite HAnimSite85 = createNode("HAnimSite");
HAnimSite85.name = "l_forefoot_tip";
HAnimSite85.DEF = "hanim_l_forefoot_tip";
HAnimSite85.translation = new SFVec3f(new float[0.1354,0.0016,0.1476]);
HAnimSegment84.children = new MFNode();

HAnimSegment84.children[0] = HAnimSite85;

HAnimSite HAnimSite86 = createNode("HAnimSite");
HAnimSite86.name = "l_metatarsal_phalanx_5_pt";
HAnimSite86.DEF = "hanim_l_metatarsal_phalanx_5_pt";
HAnimSite86.translation = new SFVec3f(new float[0.1825,0.007,0.0928]);
HAnimSegment84.children[1] = HAnimSite86;

HAnimSite HAnimSite87 = createNode("HAnimSite");
HAnimSite87.name = "l_tarsal_distal_phalanx_2_pt";
HAnimSite87.DEF = "hanim_l_tarsal_distal_phalanx_2_pt";
HAnimSite87.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
HAnimSegment84.children[2] = HAnimSite87;

HAnimJoint83.children = new MFNode();

HAnimJoint83.children[0] = HAnimSegment84;

HAnimJoint80.children[1] = HAnimJoint83;

HAnimJoint78.children[1] = HAnimJoint80;

HAnimJoint72.children[1] = HAnimJoint78;

HAnimJoint70.children[1] = HAnimJoint72;

HAnimJoint65.children[1] = HAnimJoint70;

HAnimJoint54.children[1] = HAnimJoint65;

HAnimJoint HAnimJoint88 = createNode("HAnimJoint");
HAnimJoint88.name = "r_hip";
HAnimJoint88.DEF = "hanim_r_hip";
HAnimJoint88.center = new SFVec3f(new float[-0.0961,0.9124,-0.0001]);
HAnimJoint88.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint88.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint88.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment89 = createNode("HAnimSegment");
HAnimSegment89.name = "r_thigh";
HAnimSegment89.DEF = "hanim_r_thigh";
HAnimSite HAnimSite90 = createNode("HAnimSite");
HAnimSite90.name = "r_knee_crease_pt";
HAnimSite90.DEF = "hanim_r_knee_crease_pt";
HAnimSite90.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
HAnimSegment89.children = new MFNode();

HAnimSegment89.children[0] = HAnimSite90;

HAnimSite HAnimSite91 = createNode("HAnimSite");
HAnimSite91.name = "r_femoral_lateral_epicondyle_pt";
HAnimSite91.DEF = "hanim_r_femoral_lateral_epicondyle_pt";
HAnimSite91.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
HAnimSegment89.children[1] = HAnimSite91;

HAnimSite HAnimSite92 = createNode("HAnimSite");
HAnimSite92.name = "r_femoral_medial_epicondyle_pt";
HAnimSite92.DEF = "hanim_r_femoral_medial_epicondyle_pt";
HAnimSite92.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
HAnimSegment89.children[2] = HAnimSite92;

HAnimJoint88.children = new MFNode();

HAnimJoint88.children[0] = HAnimSegment89;

HAnimJoint HAnimJoint93 = createNode("HAnimJoint");
HAnimJoint93.name = "r_knee";
HAnimJoint93.DEF = "hanim_r_knee";
HAnimJoint93.center = new SFVec3f(new float[-0.104,0.4867,0.0308]);
HAnimJoint93.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint93.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint93.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment94 = createNode("HAnimSegment");
HAnimSegment94.name = "r_calf";
HAnimSegment94.DEF = "hanim_r_calf";
HAnimJoint93.children = new MFNode();

HAnimJoint93.children[0] = HAnimSegment94;

HAnimJoint HAnimJoint95 = createNode("HAnimJoint");
HAnimJoint95.name = "r_talocrural";
HAnimJoint95.DEF = "hanim_r_talocrural";
HAnimJoint95.center = new SFVec3f(new float[-0.1101,0.0656,-0.0736]);
HAnimJoint95.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint95.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint95.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment96 = createNode("HAnimSegment");
HAnimSegment96.name = "r_talus";
HAnimSegment96.DEF = "hanim_r_talus";
HAnimSite HAnimSite97 = createNode("HAnimSite");
HAnimSite97.name = "r_lateral_malleolus_pt";
HAnimSite97.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite97.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
HAnimSegment96.children = new MFNode();

HAnimSegment96.children[0] = HAnimSite97;

HAnimSite HAnimSite98 = createNode("HAnimSite");
HAnimSite98.name = "r_medial_malleolus_pt";
HAnimSite98.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite98.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
HAnimSegment96.children[1] = HAnimSite98;

HAnimSite HAnimSite99 = createNode("HAnimSite");
HAnimSite99.name = "r_sphyrion_pt";
HAnimSite99.DEF = "hanim_r_sphyrion_pt";
HAnimSite99.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
HAnimSegment96.children[2] = HAnimSite99;

HAnimSite HAnimSite100 = createNode("HAnimSite");
HAnimSite100.name = "r_calcaneus_posterior_pt";
HAnimSite100.DEF = "hanim_r_calcaneus_posterior_pt";
HAnimSite100.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
HAnimSegment96.children[3] = HAnimSite100;

HAnimJoint95.children = new MFNode();

HAnimJoint95.children[0] = HAnimSegment96;

HAnimJoint HAnimJoint101 = createNode("HAnimJoint");
HAnimJoint101.name = "r_tarsometatarsal_2";
HAnimJoint101.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint101.center = new SFVec3f(new float[-0.1086,0.0001,-0.0368]);
HAnimJoint101.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint101.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint101.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment102 = createNode("HAnimSegment");
HAnimSegment102.name = "r_metatarsal_2";
HAnimSegment102.DEF = "hanim_r_metatarsal_2";
HAnimJoint101.children = new MFNode();

HAnimJoint101.children[0] = HAnimSegment102;

HAnimJoint HAnimJoint103 = createNode("HAnimJoint");
HAnimJoint103.name = "r_metatarsophalangeal_2";
HAnimJoint103.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint103.center = new SFVec3f(new float[-0.1086,0.0001,0.0368]);
HAnimJoint103.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint103.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint103.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment104 = createNode("HAnimSegment");
HAnimSegment104.name = "r_tarsal_proximal_phalanx_2";
HAnimSegment104.DEF = "hanim_r_tarsal_proximal_phalanx_2";
HAnimSite HAnimSite105 = createNode("HAnimSite");
HAnimSite105.name = "r_metatarsal_phalanx_1_pt";
HAnimSite105.DEF = "hanim_r_metatarsal_phalanx_1_pt";
HAnimSite105.translation = new SFVec3f(new float[-0.0521,0.026,0.0127]);
HAnimSegment104.children = new MFNode();

HAnimSegment104.children[0] = HAnimSite105;

HAnimJoint103.children = new MFNode();

HAnimJoint103.children[0] = HAnimSegment104;

HAnimJoint HAnimJoint106 = createNode("HAnimJoint");
HAnimJoint106.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint106.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint106.center = new SFVec3f(new float[-0.1086,0,0.0762]);
HAnimJoint106.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint106.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint106.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment107 = createNode("HAnimSegment");
HAnimSegment107.name = "r_tarsal_distal_phalanx_2";
HAnimSegment107.DEF = "hanim_r_tarsal_distal_phalanx_2";
HAnimSite HAnimSite108 = createNode("HAnimSite");
HAnimSite108.name = "r_forefoot_tip";
HAnimSite108.DEF = "hanim_r_forefoot_tip";
HAnimSite108.translation = new SFVec3f(new float[-0.1043,0.0227,0.145]);
HAnimSegment107.children = new MFNode();

HAnimSegment107.children[0] = HAnimSite108;

HAnimSite HAnimSite109 = createNode("HAnimSite");
HAnimSite109.name = "r_metatarsal_phalanx_5_pt";
HAnimSite109.DEF = "hanim_r_metatarsal_phalanx_5_pt";
HAnimSite109.translation = new SFVec3f(new float[-0.1523,0.0166,0.0895]);
HAnimSegment107.children[1] = HAnimSite109;

HAnimSite HAnimSite110 = createNode("HAnimSite");
HAnimSite110.name = "r_tarsal_distal_phalanx_2_pt";
HAnimSite110.DEF = "hanim_r_tarsal_distal_phalanx_2_pt";
HAnimSite110.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
HAnimSegment107.children[2] = HAnimSite110;

HAnimJoint106.children = new MFNode();

HAnimJoint106.children[0] = HAnimSegment107;

HAnimJoint103.children[1] = HAnimJoint106;

HAnimJoint101.children[1] = HAnimJoint103;

HAnimJoint95.children[1] = HAnimJoint101;

HAnimJoint93.children[1] = HAnimJoint95;

HAnimJoint88.children[1] = HAnimJoint93;

HAnimJoint54.children[2] = HAnimJoint88;

HAnimJoint52.children[1] = HAnimJoint54;

HAnimJoint HAnimJoint111 = createNode("HAnimJoint");
HAnimJoint111.name = "vl5";
HAnimJoint111.DEF = "hanim_vl5";
HAnimJoint111.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimJoint111.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint111.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint111.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment112 = createNode("HAnimSegment");
HAnimSegment112.name = "l5";
HAnimSegment112.DEF = "hanim_l5";
HAnimSite HAnimSite113 = createNode("HAnimSite");
HAnimSite113.name = "waist_preferred_posterior_pt";
HAnimSite113.DEF = "hanim_waist_preferred_posterior_pt";
HAnimSite113.translation = new SFVec3f(new float[0,1.0915,-0.1091]);
HAnimSegment112.children = new MFNode();

HAnimSegment112.children[0] = HAnimSite113;

HAnimSite HAnimSite114 = createNode("HAnimSite");
HAnimSite114.name = "navel_pt";
HAnimSite114.DEF = "hanim_navel_pt";
HAnimSite114.translation = new SFVec3f(new float[0.0069,1.0966,0.1017]);
HAnimSegment112.children[1] = HAnimSite114;

HAnimJoint111.children = new MFNode();

HAnimJoint111.children[0] = HAnimSegment112;

HAnimJoint HAnimJoint115 = createNode("HAnimJoint");
HAnimJoint115.name = "vl4";
HAnimJoint115.DEF = "hanim_vl4";
HAnimJoint115.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimJoint115.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint115.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint115.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment116 = createNode("HAnimSegment");
HAnimSegment116.name = "l4";
HAnimSegment116.DEF = "hanim_l4";
HAnimJoint115.children = new MFNode();

HAnimJoint115.children[0] = HAnimSegment116;

HAnimJoint HAnimJoint117 = createNode("HAnimJoint");
HAnimJoint117.name = "vl3";
HAnimJoint117.DEF = "hanim_vl3";
HAnimJoint117.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimJoint117.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint117.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint117.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment118 = createNode("HAnimSegment");
HAnimSegment118.name = "l3";
HAnimSegment118.DEF = "hanim_l3";
HAnimJoint117.children = new MFNode();

HAnimJoint117.children[0] = HAnimSegment118;

HAnimJoint HAnimJoint119 = createNode("HAnimJoint");
HAnimJoint119.name = "vl2";
HAnimJoint119.DEF = "hanim_vl2";
HAnimJoint119.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimJoint119.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint119.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint119.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment120 = createNode("HAnimSegment");
HAnimSegment120.name = "l2";
HAnimSegment120.DEF = "hanim_l2";
HAnimSite HAnimSite121 = createNode("HAnimSite");
HAnimSite121.name = "r_rib10_pt";
HAnimSite121.DEF = "hanim_r_rib10_pt";
HAnimSite121.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
HAnimSegment120.children = new MFNode();

HAnimSegment120.children[0] = HAnimSite121;

HAnimSite HAnimSite122 = createNode("HAnimSite");
HAnimSite122.name = "l_rib10_pt";
HAnimSite122.DEF = "hanim_l_rib10_pt";
HAnimSite122.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
HAnimSegment120.children[1] = HAnimSite122;

HAnimSite HAnimSite123 = createNode("HAnimSite");
HAnimSite123.name = "rib10_midspine_pt";
HAnimSite123.DEF = "hanim_rib10_midspine_pt";
HAnimSite123.translation = new SFVec3f(new float[0.0049,1.1908,-0.1113]);
HAnimSegment120.children[2] = HAnimSite123;

HAnimJoint119.children = new MFNode();

HAnimJoint119.children[0] = HAnimSegment120;

HAnimJoint HAnimJoint124 = createNode("HAnimJoint");
HAnimJoint124.name = "vl1";
HAnimJoint124.DEF = "hanim_vl1";
HAnimJoint124.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimJoint124.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint124.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint124.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment125 = createNode("HAnimSegment");
HAnimSegment125.name = "l1";
HAnimSegment125.DEF = "hanim_l1";
HAnimJoint124.children = new MFNode();

HAnimJoint124.children[0] = HAnimSegment125;

HAnimJoint HAnimJoint126 = createNode("HAnimJoint");
HAnimJoint126.name = "vt12";
HAnimJoint126.DEF = "hanim_vt12";
HAnimJoint126.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimJoint126.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint126.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint126.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment127 = createNode("HAnimSegment");
HAnimSegment127.name = "t12";
HAnimSegment127.DEF = "hanim_t12";
HAnimJoint126.children = new MFNode();

HAnimJoint126.children[0] = HAnimSegment127;

HAnimJoint HAnimJoint128 = createNode("HAnimJoint");
HAnimJoint128.name = "vt11";
HAnimJoint128.DEF = "hanim_vt11";
HAnimJoint128.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimJoint128.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint128.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint128.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment129 = createNode("HAnimSegment");
HAnimSegment129.name = "t11";
HAnimSegment129.DEF = "hanim_t11";
HAnimJoint128.children = new MFNode();

HAnimJoint128.children[0] = HAnimSegment129;

HAnimJoint HAnimJoint130 = createNode("HAnimJoint");
HAnimJoint130.name = "vt10";
HAnimJoint130.DEF = "hanim_vt10";
HAnimJoint130.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimJoint130.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint130.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint130.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment131 = createNode("HAnimSegment");
HAnimSegment131.name = "t10";
HAnimSegment131.DEF = "hanim_t10";
HAnimSite HAnimSite132 = createNode("HAnimSite");
HAnimSite132.name = "substernale_pt";
HAnimSite132.DEF = "hanim_substernale_pt";
HAnimSite132.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
HAnimSegment131.children = new MFNode();

HAnimSegment131.children[0] = HAnimSite132;

HAnimJoint130.children = new MFNode();

HAnimJoint130.children[0] = HAnimSegment131;

HAnimJoint HAnimJoint133 = createNode("HAnimJoint");
HAnimJoint133.name = "vt9";
HAnimJoint133.DEF = "hanim_vt9";
HAnimJoint133.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimJoint133.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint133.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint133.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment134 = createNode("HAnimSegment");
HAnimSegment134.name = "t9";
HAnimSegment134.DEF = "hanim_t9";
HAnimSite HAnimSite135 = createNode("HAnimSite");
HAnimSite135.name = "r_thelion_pt";
HAnimSite135.DEF = "hanim_r_thelion_pt";
HAnimSite135.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
HAnimSegment134.children = new MFNode();

HAnimSegment134.children[0] = HAnimSite135;

HAnimSite HAnimSite136 = createNode("HAnimSite");
HAnimSite136.name = "l_thelion_pt";
HAnimSite136.DEF = "hanim_l_thelion_pt";
HAnimSite136.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
HAnimSegment134.children[1] = HAnimSite136;

HAnimJoint133.children = new MFNode();

HAnimJoint133.children[0] = HAnimSegment134;

HAnimJoint HAnimJoint137 = createNode("HAnimJoint");
HAnimJoint137.name = "vt8";
HAnimJoint137.DEF = "hanim_vt8";
HAnimJoint137.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimJoint137.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint137.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint137.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment138 = createNode("HAnimSegment");
HAnimSegment138.name = "t8";
HAnimSegment138.DEF = "hanim_t8";
HAnimJoint137.children = new MFNode();

HAnimJoint137.children[0] = HAnimSegment138;

HAnimJoint HAnimJoint139 = createNode("HAnimJoint");
HAnimJoint139.name = "vt7";
HAnimJoint139.DEF = "hanim_vt7";
HAnimJoint139.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimJoint139.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint139.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint139.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment140 = createNode("HAnimSegment");
HAnimSegment140.name = "t7";
HAnimSegment140.DEF = "hanim_t7";
HAnimJoint139.children = new MFNode();

HAnimJoint139.children[0] = HAnimSegment140;

HAnimJoint HAnimJoint141 = createNode("HAnimJoint");
HAnimJoint141.name = "vt6";
HAnimJoint141.DEF = "hanim_vt6";
HAnimJoint141.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimJoint141.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint141.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint141.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment142 = createNode("HAnimSegment");
HAnimSegment142.name = "t6";
HAnimSegment142.DEF = "hanim_t6";
HAnimJoint141.children = new MFNode();

HAnimJoint141.children[0] = HAnimSegment142;

HAnimJoint HAnimJoint143 = createNode("HAnimJoint");
HAnimJoint143.name = "vt5";
HAnimJoint143.DEF = "hanim_vt5";
HAnimJoint143.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimJoint143.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint143.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint143.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment144 = createNode("HAnimSegment");
HAnimSegment144.name = "t5";
HAnimSegment144.DEF = "hanim_t5";
HAnimJoint143.children = new MFNode();

HAnimJoint143.children[0] = HAnimSegment144;

HAnimJoint HAnimJoint145 = createNode("HAnimJoint");
HAnimJoint145.name = "vt4";
HAnimJoint145.DEF = "hanim_vt4";
HAnimJoint145.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimJoint145.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint145.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint145.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment146 = createNode("HAnimSegment");
HAnimSegment146.name = "t4";
HAnimSegment146.DEF = "hanim_t4";
HAnimJoint145.children = new MFNode();

HAnimJoint145.children[0] = HAnimSegment146;

HAnimJoint HAnimJoint147 = createNode("HAnimJoint");
HAnimJoint147.name = "vt3";
HAnimJoint147.DEF = "hanim_vt3";
HAnimJoint147.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimJoint147.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint147.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint147.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment148 = createNode("HAnimSegment");
HAnimSegment148.name = "t3";
HAnimSegment148.DEF = "hanim_t3";
HAnimJoint147.children = new MFNode();

HAnimJoint147.children[0] = HAnimSegment148;

HAnimJoint HAnimJoint149 = createNode("HAnimJoint");
HAnimJoint149.name = "vt2";
HAnimJoint149.DEF = "hanim_vt2";
HAnimJoint149.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimJoint149.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint149.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint149.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment150 = createNode("HAnimSegment");
HAnimSegment150.name = "t2";
HAnimSegment150.DEF = "hanim_t2";
HAnimJoint149.children = new MFNode();

HAnimJoint149.children[0] = HAnimSegment150;

HAnimJoint HAnimJoint151 = createNode("HAnimJoint");
HAnimJoint151.name = "vt1";
HAnimJoint151.DEF = "hanim_vt1";
HAnimJoint151.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimJoint151.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint151.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint151.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment152 = createNode("HAnimSegment");
HAnimSegment152.name = "t1";
HAnimSegment152.DEF = "hanim_t1";
HAnimSite HAnimSite153 = createNode("HAnimSite");
HAnimSite153.name = "suprasternale_pt";
HAnimSite153.DEF = "hanim_suprasternale_pt";
HAnimSite153.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
HAnimSegment152.children = new MFNode();

HAnimSegment152.children[0] = HAnimSite153;

HAnimSite HAnimSite154 = createNode("HAnimSite");
HAnimSite154.name = "cervicale_pt";
HAnimSite154.DEF = "hanim_cervicale_pt";
HAnimSite154.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
HAnimSegment152.children[1] = HAnimSite154;

HAnimJoint151.children = new MFNode();

HAnimJoint151.children[0] = HAnimSegment152;

HAnimJoint HAnimJoint155 = createNode("HAnimJoint");
HAnimJoint155.name = "vc7";
HAnimJoint155.DEF = "hanim_vc7";
HAnimJoint155.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimJoint155.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint155.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint155.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment156 = createNode("HAnimSegment");
HAnimSegment156.name = "c7";
HAnimSegment156.DEF = "hanim_c7";
HAnimSite HAnimSite157 = createNode("HAnimSite");
HAnimSite157.name = "r_neck_base_pt";
HAnimSite157.DEF = "hanim_r_neck_base_pt";
HAnimSite157.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
HAnimSegment156.children = new MFNode();

HAnimSegment156.children[0] = HAnimSite157;

HAnimSite HAnimSite158 = createNode("HAnimSite");
HAnimSite158.name = "l_neck_base_pt";
HAnimSite158.DEF = "hanim_l_neck_base_pt";
HAnimSite158.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
HAnimSegment156.children[1] = HAnimSite158;

HAnimJoint155.children = new MFNode();

HAnimJoint155.children[0] = HAnimSegment156;

HAnimJoint HAnimJoint159 = createNode("HAnimJoint");
HAnimJoint159.name = "vc6";
HAnimJoint159.DEF = "hanim_vc6";
HAnimJoint159.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimJoint159.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint159.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint159.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment160 = createNode("HAnimSegment");
HAnimSegment160.name = "c6";
HAnimSegment160.DEF = "hanim_c6";
HAnimJoint159.children = new MFNode();

HAnimJoint159.children[0] = HAnimSegment160;

HAnimJoint HAnimJoint161 = createNode("HAnimJoint");
HAnimJoint161.name = "vc5";
HAnimJoint161.DEF = "hanim_vc5";
HAnimJoint161.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimJoint161.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint161.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint161.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment162 = createNode("HAnimSegment");
HAnimSegment162.name = "c5";
HAnimSegment162.DEF = "hanim_c5";
HAnimJoint161.children = new MFNode();

HAnimJoint161.children[0] = HAnimSegment162;

HAnimJoint HAnimJoint163 = createNode("HAnimJoint");
HAnimJoint163.name = "vc4";
HAnimJoint163.DEF = "hanim_vc4";
HAnimJoint163.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimJoint163.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint163.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint163.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment164 = createNode("HAnimSegment");
HAnimSegment164.name = "c4";
HAnimSegment164.DEF = "hanim_c4";
HAnimJoint163.children = new MFNode();

HAnimJoint163.children[0] = HAnimSegment164;

HAnimJoint HAnimJoint165 = createNode("HAnimJoint");
HAnimJoint165.name = "vc3";
HAnimJoint165.DEF = "hanim_vc3";
HAnimJoint165.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimJoint165.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint165.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint165.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment166 = createNode("HAnimSegment");
HAnimSegment166.name = "c3";
HAnimSegment166.DEF = "hanim_c3";
HAnimJoint165.children = new MFNode();

HAnimJoint165.children[0] = HAnimSegment166;

HAnimJoint HAnimJoint167 = createNode("HAnimJoint");
HAnimJoint167.name = "vc2";
HAnimJoint167.DEF = "hanim_vc2";
HAnimJoint167.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimJoint167.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint167.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint167.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment168 = createNode("HAnimSegment");
HAnimSegment168.name = "c2";
HAnimSegment168.DEF = "hanim_c2";
HAnimJoint167.children = new MFNode();

HAnimJoint167.children[0] = HAnimSegment168;

HAnimJoint HAnimJoint169 = createNode("HAnimJoint");
HAnimJoint169.name = "vc1";
HAnimJoint169.DEF = "hanim_vc1";
HAnimJoint169.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimJoint169.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint169.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint169.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment170 = createNode("HAnimSegment");
HAnimSegment170.name = "c1";
HAnimSegment170.DEF = "hanim_c1";
HAnimJoint169.children = new MFNode();

HAnimJoint169.children[0] = HAnimSegment170;

HAnimJoint HAnimJoint171 = createNode("HAnimJoint");
HAnimJoint171.name = "skullbase";
HAnimJoint171.DEF = "hanim_skullbase";
HAnimJoint171.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint171.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint171.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint171.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment172 = createNode("HAnimSegment");
HAnimSegment172.name = "skull";
HAnimSegment172.DEF = "hanim_skull";
HAnimSite HAnimSite173 = createNode("HAnimSite");
HAnimSite173.name = "skull_vertex_tip";
HAnimSite173.DEF = "hanim_skull_vertex_tip";
HAnimSite173.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
//TODO move skull_tip x to zero, check others for symmetry
HAnimSegment172.children = new MFNode();

HAnimSegment172.children[0] = HAnimSite173;

HAnimSite HAnimSite174 = createNode("HAnimSite");
HAnimSite174.name = "sellion_pt";
HAnimSite174.DEF = "hanim_sellion_pt";
HAnimSite174.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
HAnimSegment172.children[1] = HAnimSite174;

HAnimSite HAnimSite175 = createNode("HAnimSite");
HAnimSite175.name = "r_infraorbitale_pt";
HAnimSite175.DEF = "hanim_r_infraorbitale_pt";
HAnimSite175.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
HAnimSegment172.children[2] = HAnimSite175;

HAnimSite HAnimSite176 = createNode("HAnimSite");
HAnimSite176.name = "l_infraorbitale_pt";
HAnimSite176.DEF = "hanim_l_infraorbitale_pt";
HAnimSite176.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
HAnimSegment172.children[3] = HAnimSite176;

HAnimSite HAnimSite177 = createNode("HAnimSite");
HAnimSite177.name = "supramenton_pt";
HAnimSite177.DEF = "hanim_supramenton_pt";
HAnimSite177.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
HAnimSegment172.children[4] = HAnimSite177;

HAnimSite HAnimSite178 = createNode("HAnimSite");
HAnimSite178.name = "r_tragion_pt";
HAnimSite178.DEF = "hanim_r_tragion_pt";
HAnimSite178.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
HAnimSegment172.children[5] = HAnimSite178;

HAnimSite HAnimSite179 = createNode("HAnimSite");
HAnimSite179.name = "r_gonion_pt";
HAnimSite179.DEF = "hanim_r_gonion_pt";
HAnimSite179.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
HAnimSegment172.children[6] = HAnimSite179;

HAnimSite HAnimSite180 = createNode("HAnimSite");
HAnimSite180.name = "l_tragion_pt";
HAnimSite180.DEF = "hanim_l_tragion_pt";
HAnimSite180.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
HAnimSegment172.children[7] = HAnimSite180;

HAnimSite HAnimSite181 = createNode("HAnimSite");
HAnimSite181.name = "l_gonion_pt";
HAnimSite181.DEF = "hanim_l_gonion_pt";
HAnimSite181.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
HAnimSegment172.children[8] = HAnimSite181;

HAnimSite HAnimSite182 = createNode("HAnimSite");
HAnimSite182.name = "nuchale_pt";
HAnimSite182.DEF = "hanim_nuchale_pt";
HAnimSite182.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
HAnimSegment172.children[9] = HAnimSite182;

HAnimJoint171.children = new MFNode();

HAnimJoint171.children[0] = HAnimSegment172;

HAnimJoint HAnimJoint183 = createNode("HAnimJoint");
HAnimJoint183.name = "l_eyeball_joint";
HAnimJoint183.DEF = "hanim_l_eyeball_joint";
HAnimJoint183.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
HAnimJoint183.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint183.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint183.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment184 = createNode("HAnimSegment");
HAnimSegment184.name = "l_eyeball";
HAnimSegment184.DEF = "hanim_l_eyeball";
HAnimSite HAnimSite185 = createNode("HAnimSite");
HAnimSite185.name = "l_eyeball_site_view";
HAnimSite185.DEF = "hanim_l_eyeball_site_view";
HAnimSite185.translation = new SFVec3f(new float[0.034,1.64,0.05]);
Viewpoint Viewpoint186 = createNode("Viewpoint");
Viewpoint186.DEF = "hanim_l_eyeball_site_viewpoint";
Viewpoint186.description = "l_eyeball_site_viewpoint looking forward";
Viewpoint186.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint186.position = new SFVec3f(new float[0,0,0]);
HAnimSite185.children = new MFNode();

HAnimSite185.children[0] = Viewpoint186;

HAnimSegment184.children = new MFNode();

HAnimSegment184.children[0] = HAnimSite185;

HAnimJoint183.children = new MFNode();

HAnimJoint183.children[0] = HAnimSegment184;

HAnimJoint171.children[1] = HAnimJoint183;

HAnimJoint HAnimJoint187 = createNode("HAnimJoint");
HAnimJoint187.name = "l_eyelid_joint";
HAnimJoint187.DEF = "hanim_l_eyelid_joint";
HAnimJoint187.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
HAnimJoint187.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint187.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint187.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment188 = createNode("HAnimSegment");
HAnimSegment188.name = "l_eyelid";
HAnimSegment188.DEF = "hanim_l_eyelid";
HAnimJoint187.children = new MFNode();

HAnimJoint187.children[0] = HAnimSegment188;

HAnimJoint171.children[2] = HAnimJoint187;

HAnimJoint HAnimJoint189 = createNode("HAnimJoint");
HAnimJoint189.name = "l_eyebrow_joint";
HAnimJoint189.DEF = "hanim_l_eyebrow_joint";
HAnimJoint189.center = new SFVec3f(new float[0.0336,1.635,0.0506]);
HAnimJoint189.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint189.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint189.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment190 = createNode("HAnimSegment");
HAnimSegment190.name = "l_eyebrow";
HAnimSegment190.DEF = "hanim_l_eyebrow";
HAnimJoint189.children = new MFNode();

HAnimJoint189.children[0] = HAnimSegment190;

HAnimJoint171.children[3] = HAnimJoint189;

HAnimJoint HAnimJoint191 = createNode("HAnimJoint");
HAnimJoint191.name = "r_eyeball_joint";
HAnimJoint191.DEF = "hanim_r_eyeball_joint";
HAnimJoint191.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
HAnimJoint191.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint191.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint191.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment192 = createNode("HAnimSegment");
HAnimSegment192.name = "r_eyeball";
HAnimSegment192.DEF = "hanim_r_eyeball";
HAnimSite HAnimSite193 = createNode("HAnimSite");
HAnimSite193.name = "r_eyeball_site_view";
HAnimSite193.DEF = "hanim_r_eyeball_site_view";
HAnimSite193.translation = new SFVec3f(new float[-0.034,1.64,0.05]);
Viewpoint Viewpoint194 = createNode("Viewpoint");
Viewpoint194.DEF = "hanim_r_eyeball_site_viewpoint";
Viewpoint194.description = "r_eyeball_site_viewpoint looking forward";
Viewpoint194.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint194.position = new SFVec3f(new float[0,0,0]);
HAnimSite193.children = new MFNode();

HAnimSite193.children[0] = Viewpoint194;

HAnimSegment192.children = new MFNode();

HAnimSegment192.children[0] = HAnimSite193;

HAnimJoint191.children = new MFNode();

HAnimJoint191.children[0] = HAnimSegment192;

HAnimJoint171.children[4] = HAnimJoint191;

HAnimJoint HAnimJoint195 = createNode("HAnimJoint");
HAnimJoint195.name = "r_eyelid_joint";
HAnimJoint195.DEF = "hanim_r_eyelid_joint";
HAnimJoint195.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
HAnimJoint195.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint195.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint195.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment196 = createNode("HAnimSegment");
HAnimSegment196.name = "r_eyelid";
HAnimSegment196.DEF = "hanim_r_eyelid";
HAnimJoint195.children = new MFNode();

HAnimJoint195.children[0] = HAnimSegment196;

HAnimJoint171.children[5] = HAnimJoint195;

HAnimJoint HAnimJoint197 = createNode("HAnimJoint");
HAnimJoint197.name = "r_eyebrow_joint";
HAnimJoint197.DEF = "hanim_r_eyebrow_joint";
HAnimJoint197.center = new SFVec3f(new float[-0.0336,1.635,0.0506]);
HAnimJoint197.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint197.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint197.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment198 = createNode("HAnimSegment");
HAnimSegment198.name = "r_eyebrow";
HAnimSegment198.DEF = "hanim_r_eyebrow";
HAnimJoint197.children = new MFNode();

HAnimJoint197.children[0] = HAnimSegment198;

HAnimJoint171.children[6] = HAnimJoint197;

HAnimJoint HAnimJoint199 = createNode("HAnimJoint");
HAnimJoint199.name = "temporomandibular";
HAnimJoint199.DEF = "hanim_temporomandibular";
HAnimJoint199.center = new SFVec3f(new float[0,1.63,0.015]);
HAnimJoint199.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint199.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint199.stiffness = new SFVec3f(new float[0,0,0]);
//Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint
HAnimSegment HAnimSegment200 = createNode("HAnimSegment");
HAnimSegment200.name = "jaw";
HAnimSegment200.DEF = "hanim_jaw";
HAnimSite HAnimSite201 = createNode("HAnimSite");
HAnimSite201.name = "temporomandibular_l_site_pt";
HAnimSite201.DEF = "hanim_temporomandibular_l_site_pt";
HAnimSite201.translation = new SFVec3f(new float[0.045,1.63,0]);
HAnimSegment200.children = new MFNode();

HAnimSegment200.children[0] = HAnimSite201;

HAnimSite HAnimSite202 = createNode("HAnimSite");
HAnimSite202.name = "temporomandibular_r_site_pt";
HAnimSite202.DEF = "hanim_temporomandibular_r_site_pt";
HAnimSite202.translation = new SFVec3f(new float[-0.045,1.63,0]);
HAnimSegment200.children[1] = HAnimSite202;

HAnimJoint199.children = new MFNode();

HAnimJoint199.children[0] = HAnimSegment200;

HAnimJoint171.children[7] = HAnimJoint199;

HAnimJoint169.children[1] = HAnimJoint171;

HAnimJoint167.children[1] = HAnimJoint169;

HAnimJoint165.children[1] = HAnimJoint167;

HAnimJoint163.children[1] = HAnimJoint165;

HAnimJoint161.children[1] = HAnimJoint163;

HAnimJoint159.children[1] = HAnimJoint161;

HAnimJoint155.children[1] = HAnimJoint159;

HAnimJoint151.children[1] = HAnimJoint155;

HAnimJoint HAnimJoint203 = createNode("HAnimJoint");
HAnimJoint203.name = "l_sternoclavicular";
HAnimJoint203.DEF = "hanim_l_sternoclavicular";
HAnimJoint203.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint203.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint203.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint203.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment204 = createNode("HAnimSegment");
HAnimSegment204.name = "l_clavicle";
HAnimSegment204.DEF = "hanim_l_clavicle";
HAnimSite HAnimSite205 = createNode("HAnimSite");
HAnimSite205.name = "l_clavicle_pt";
HAnimSite205.DEF = "hanim_l_clavicle_pt";
HAnimSite205.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
HAnimSegment204.children = new MFNode();

HAnimSegment204.children[0] = HAnimSite205;

HAnimSite HAnimSite206 = createNode("HAnimSite");
HAnimSite206.name = "l_acromion_pt";
HAnimSite206.DEF = "hanim_l_acromion_pt";
HAnimSite206.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
HAnimSegment204.children[1] = HAnimSite206;

HAnimSite HAnimSite207 = createNode("HAnimSite");
HAnimSite207.name = "l_axilla_proximal_pt";
HAnimSite207.DEF = "hanim_l_axilla_proximal_pt";
HAnimSite207.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
HAnimSegment204.children[2] = HAnimSite207;

HAnimSite HAnimSite208 = createNode("HAnimSite");
HAnimSite208.name = "l_axilla_distal_pt";
HAnimSite208.DEF = "hanim_l_axilla_distal_pt";
HAnimSite208.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
HAnimSegment204.children[3] = HAnimSite208;

HAnimJoint203.children = new MFNode();

HAnimJoint203.children[0] = HAnimSegment204;

HAnimJoint HAnimJoint209 = createNode("HAnimJoint");
HAnimJoint209.name = "l_acromioclavicular";
HAnimJoint209.DEF = "hanim_l_acromioclavicular";
HAnimJoint209.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint209.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint209.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint209.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment210 = createNode("HAnimSegment");
HAnimSegment210.name = "l_scapula";
HAnimSegment210.DEF = "hanim_l_scapula";
HAnimJoint209.children = new MFNode();

HAnimJoint209.children[0] = HAnimSegment210;

HAnimJoint HAnimJoint211 = createNode("HAnimJoint");
HAnimJoint211.name = "l_shoulder";
HAnimJoint211.DEF = "hanim_l_shoulder";
HAnimJoint211.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimJoint211.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint211.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint211.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment212 = createNode("HAnimSegment");
HAnimSegment212.name = "l_upperarm";
HAnimSegment212.DEF = "hanim_l_upperarm";
HAnimSite HAnimSite213 = createNode("HAnimSite");
HAnimSite213.name = "l_humeral_lateral_epicondyle_pt";
HAnimSite213.DEF = "hanim_l_humeral_lateral_epicondyle_pt";
HAnimSite213.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
HAnimSegment212.children = new MFNode();

HAnimSegment212.children[0] = HAnimSite213;

HAnimJoint211.children = new MFNode();

HAnimJoint211.children[0] = HAnimSegment212;

HAnimJoint HAnimJoint214 = createNode("HAnimJoint");
HAnimJoint214.name = "l_elbow";
HAnimJoint214.DEF = "hanim_l_elbow";
HAnimJoint214.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimJoint214.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint214.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint214.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment215 = createNode("HAnimSegment");
HAnimSegment215.name = "l_forearm";
HAnimSegment215.DEF = "hanim_l_forearm";
HAnimSite HAnimSite216 = createNode("HAnimSite");
HAnimSite216.name = "l_radial_styloid_pt";
HAnimSite216.DEF = "hanim_l_radial_styloid_pt";
HAnimSite216.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
HAnimSegment215.children = new MFNode();

HAnimSegment215.children[0] = HAnimSite216;

HAnimSite HAnimSite217 = createNode("HAnimSite");
HAnimSite217.name = "l_olecranon_pt";
HAnimSite217.DEF = "hanim_l_olecranon_pt";
HAnimSite217.translation = new SFVec3f(new float[0.1962,1.1375,-0.1123]);
HAnimSegment215.children[1] = HAnimSite217;

HAnimSite HAnimSite218 = createNode("HAnimSite");
HAnimSite218.name = "l_humeral_medial_epicondyle_pt";
HAnimSite218.DEF = "hanim_l_humeral_medial_epicondyle_pt";
HAnimSite218.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
HAnimSegment215.children[2] = HAnimSite218;

HAnimSite HAnimSite219 = createNode("HAnimSite");
HAnimSite219.name = "l_radiale_pt";
HAnimSite219.DEF = "hanim_l_radiale_pt";
HAnimSite219.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
HAnimSegment215.children[3] = HAnimSite219;

HAnimJoint214.children = new MFNode();

HAnimJoint214.children[0] = HAnimSegment215;

HAnimJoint HAnimJoint220 = createNode("HAnimJoint");
HAnimJoint220.name = "l_radiocarpal";
HAnimJoint220.DEF = "hanim_l_radiocarpal";
HAnimJoint220.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint220.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint220.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint220.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment221 = createNode("HAnimSegment");
HAnimSegment221.name = "l_carpal";
HAnimSegment221.DEF = "hanim_l_carpal";
HAnimSite HAnimSite222 = createNode("HAnimSite");
HAnimSite222.name = "l_metacarpal_phalanx_2_pt";
HAnimSite222.DEF = "hanim_l_metacarpal_phalanx_2_pt";
HAnimSite222.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
HAnimSegment221.children = new MFNode();

HAnimSegment221.children[0] = HAnimSite222;

HAnimSite HAnimSite223 = createNode("HAnimSite");
HAnimSite223.name = "l_ulnar_styloid_pt";
HAnimSite223.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite223.translation = new SFVec3f(new float[0.2142,0.8529,-0.0648]);
HAnimSegment221.children[1] = HAnimSite223;

HAnimSite HAnimSite224 = createNode("HAnimSite");
HAnimSite224.name = "l_metacarpal_phalanx_5_pt";
HAnimSite224.DEF = "hanim_l_metacarpal_phalanx_5_pt";
HAnimSite224.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
HAnimSegment221.children[2] = HAnimSite224;

HAnimSite HAnimSite225 = createNode("HAnimSite");
HAnimSite225.name = "l_hand_front_view";
HAnimSite225.DEF = "hanim_l_hand_front_view";
HAnimSite225.translation = new SFVec3f(new float[0.3,0.75,0.45]);
Viewpoint Viewpoint226 = createNode("Viewpoint");
Viewpoint226.DEF = "hanim_l_hand_front_viewpoint";
Viewpoint226.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
Viewpoint226.description = "left hand front";
Viewpoint226.position = new SFVec3f(new float[0,0,0]);
HAnimSite225.children = new MFNode();

HAnimSite225.children[0] = Viewpoint226;

HAnimSegment221.children[3] = HAnimSite225;

HAnimJoint220.children = new MFNode();

HAnimJoint220.children[0] = HAnimSegment221;

HAnimJoint HAnimJoint227 = createNode("HAnimJoint");
HAnimJoint227.name = "l_carpometacarpal_1";
HAnimJoint227.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint227.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint227.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint227.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint227.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment228 = createNode("HAnimSegment");
HAnimSegment228.name = "l_metacarpal_1";
HAnimSegment228.DEF = "hanim_l_metacarpal_1";
HAnimJoint227.children = new MFNode();

HAnimJoint227.children[0] = HAnimSegment228;

HAnimJoint HAnimJoint229 = createNode("HAnimJoint");
HAnimJoint229.name = "l_metacarpophalangeal_1";
HAnimJoint229.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint229.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint229.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint229.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint229.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment230 = createNode("HAnimSegment");
HAnimSegment230.name = "l_carpal_proximal_phalanx_1";
HAnimSegment230.DEF = "hanim_l_carpal_proximal_phalanx_1";
HAnimJoint229.children = new MFNode();

HAnimJoint229.children[0] = HAnimSegment230;

HAnimJoint HAnimJoint231 = createNode("HAnimJoint");
HAnimJoint231.name = "l_carpal_interphalangeal_1";
HAnimJoint231.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint231.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint231.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint231.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint231.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment232 = createNode("HAnimSegment");
HAnimSegment232.name = "l_carpal_distal_phalanx_1";
HAnimSegment232.DEF = "hanim_l_carpal_distal_phalanx_1";
HAnimSite HAnimSite233 = createNode("HAnimSite");
HAnimSite233.name = "l_carpal_distal_phalanx_1_tip";
HAnimSite233.DEF = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimSite233.translation = new SFVec3f(new float[0.1982,0.8061,0.0759]);
HAnimSegment232.children = new MFNode();

HAnimSegment232.children[0] = HAnimSite233;

HAnimJoint231.children = new MFNode();

HAnimJoint231.children[0] = HAnimSegment232;

HAnimJoint229.children[1] = HAnimJoint231;

HAnimJoint227.children[1] = HAnimJoint229;

HAnimJoint220.children[1] = HAnimJoint227;

HAnimJoint HAnimJoint234 = createNode("HAnimJoint");
HAnimJoint234.name = "l_carpometacarpal_2";
HAnimJoint234.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint234.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint234.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint234.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint234.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment235 = createNode("HAnimSegment");
HAnimSegment235.name = "l_metacarpal_2";
HAnimSegment235.DEF = "hanim_l_metacarpal_2";
HAnimJoint234.children = new MFNode();

HAnimJoint234.children[0] = HAnimSegment235;

HAnimJoint HAnimJoint236 = createNode("HAnimJoint");
HAnimJoint236.name = "l_metacarpophalangeal_2";
HAnimJoint236.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint236.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint236.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint236.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint236.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment237 = createNode("HAnimSegment");
HAnimSegment237.name = "l_carpal_proximal_phalanx_2";
HAnimSegment237.DEF = "hanim_l_carpal_proximal_phalanx_2";
HAnimJoint236.children = new MFNode();

HAnimJoint236.children[0] = HAnimSegment237;

HAnimJoint HAnimJoint238 = createNode("HAnimJoint");
HAnimJoint238.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint238.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint238.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint238.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint238.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint238.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment239 = createNode("HAnimSegment");
HAnimSegment239.name = "l_carpal_middle_phalanx_2";
HAnimSegment239.DEF = "hanim_l_carpal_middle_phalanx_2";
HAnimJoint238.children = new MFNode();

HAnimJoint238.children[0] = HAnimSegment239;

HAnimJoint HAnimJoint240 = createNode("HAnimJoint");
HAnimJoint240.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint240.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint240.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint240.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint240.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint240.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment241 = createNode("HAnimSegment");
HAnimSegment241.name = "l_carpal_distal_phalanx_2";
HAnimSegment241.DEF = "hanim_l_carpal_distal_phalanx_2";
HAnimSite HAnimSite242 = createNode("HAnimSite");
HAnimSite242.name = "l_carpal_distal_phalanx_2_tip";
HAnimSite242.DEF = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimSite242.translation = new SFVec3f(new float[0.2089,0.6858,-0.0245]);
HAnimSegment241.children = new MFNode();

HAnimSegment241.children[0] = HAnimSite242;

HAnimSite HAnimSite243 = createNode("HAnimSite");
HAnimSite243.name = "l_dactylion_pt";
HAnimSite243.DEF = "hanim_l_dactylion_pt";
HAnimSite243.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
HAnimSegment241.children[1] = HAnimSite243;

HAnimJoint240.children = new MFNode();

HAnimJoint240.children[0] = HAnimSegment241;

HAnimJoint238.children[1] = HAnimJoint240;

HAnimJoint236.children[1] = HAnimJoint238;

HAnimJoint234.children[1] = HAnimJoint236;

HAnimJoint220.children[2] = HAnimJoint234;

HAnimJoint HAnimJoint244 = createNode("HAnimJoint");
HAnimJoint244.name = "l_carpometacarpal_3";
HAnimJoint244.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint244.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint244.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint244.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint244.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment245 = createNode("HAnimSegment");
HAnimSegment245.name = "l_metacarpal_3";
HAnimSegment245.DEF = "hanim_l_metacarpal_3";
HAnimJoint244.children = new MFNode();

HAnimJoint244.children[0] = HAnimSegment245;

HAnimJoint HAnimJoint246 = createNode("HAnimJoint");
HAnimJoint246.name = "l_metacarpophalangeal_3";
HAnimJoint246.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint246.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint246.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint246.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint246.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment247 = createNode("HAnimSegment");
HAnimSegment247.name = "l_carpal_proximal_phalanx_3";
HAnimSegment247.DEF = "hanim_l_carpal_proximal_phalanx_3";
HAnimJoint246.children = new MFNode();

HAnimJoint246.children[0] = HAnimSegment247;

HAnimJoint HAnimJoint248 = createNode("HAnimJoint");
HAnimJoint248.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint248.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint248.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint248.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint248.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint248.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment249 = createNode("HAnimSegment");
HAnimSegment249.name = "l_carpal_middle_phalanx_3";
HAnimSegment249.DEF = "hanim_l_carpal_middle_phalanx_3";
HAnimJoint248.children = new MFNode();

HAnimJoint248.children[0] = HAnimSegment249;

HAnimJoint HAnimJoint250 = createNode("HAnimJoint");
HAnimJoint250.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint250.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint250.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint250.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint250.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint250.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment251 = createNode("HAnimSegment");
HAnimSegment251.name = "l_carpal_distal_phalanx_3";
HAnimSegment251.DEF = "hanim_l_carpal_distal_phalanx_3";
HAnimSite HAnimSite252 = createNode("HAnimSite");
HAnimSite252.name = "l_carpal_distal_phalanx_3_tip";
HAnimSite252.DEF = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimSite252.translation = new SFVec3f(new float[0.208,0.6731,-0.0491]);
HAnimSegment251.children = new MFNode();

HAnimSegment251.children[0] = HAnimSite252;

HAnimJoint250.children = new MFNode();

HAnimJoint250.children[0] = HAnimSegment251;

HAnimJoint248.children[1] = HAnimJoint250;

HAnimJoint246.children[1] = HAnimJoint248;

HAnimJoint244.children[1] = HAnimJoint246;

HAnimJoint220.children[3] = HAnimJoint244;

HAnimJoint HAnimJoint253 = createNode("HAnimJoint");
HAnimJoint253.name = "l_carpometacarpal_4";
HAnimJoint253.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint253.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint253.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint253.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint253.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment254 = createNode("HAnimSegment");
HAnimSegment254.name = "l_metacarpal_4";
HAnimSegment254.DEF = "hanim_l_metacarpal_4";
HAnimJoint253.children = new MFNode();

HAnimJoint253.children[0] = HAnimSegment254;

HAnimJoint HAnimJoint255 = createNode("HAnimJoint");
HAnimJoint255.name = "l_metacarpophalangeal_4";
HAnimJoint255.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint255.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint255.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint255.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint255.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment256 = createNode("HAnimSegment");
HAnimSegment256.name = "l_carpal_proximal_phalanx_4";
HAnimSegment256.DEF = "hanim_l_carpal_proximal_phalanx_4";
HAnimJoint255.children = new MFNode();

HAnimJoint255.children[0] = HAnimSegment256;

HAnimJoint HAnimJoint257 = createNode("HAnimJoint");
HAnimJoint257.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint257.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint257.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint257.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint257.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint257.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment258 = createNode("HAnimSegment");
HAnimSegment258.name = "l_carpal_middle_phalanx_4";
HAnimSegment258.DEF = "hanim_l_carpal_middle_phalanx_4";
HAnimJoint257.children = new MFNode();

HAnimJoint257.children[0] = HAnimSegment258;

HAnimJoint HAnimJoint259 = createNode("HAnimJoint");
HAnimJoint259.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint259.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint259.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint259.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint259.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint259.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment260 = createNode("HAnimSegment");
HAnimSegment260.name = "l_carpal_distal_phalanx_4";
HAnimSegment260.DEF = "hanim_l_carpal_distal_phalanx_4";
HAnimSite HAnimSite261 = createNode("HAnimSite");
HAnimSite261.name = "l_carpal_distal_phalanx_4_tip";
HAnimSite261.DEF = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimSite261.translation = new SFVec3f(new float[0.2035,0.675,-0.0756]);
HAnimSegment260.children = new MFNode();

HAnimSegment260.children[0] = HAnimSite261;

HAnimJoint259.children = new MFNode();

HAnimJoint259.children[0] = HAnimSegment260;

HAnimJoint257.children[1] = HAnimJoint259;

HAnimJoint255.children[1] = HAnimJoint257;

HAnimJoint253.children[1] = HAnimJoint255;

HAnimJoint220.children[4] = HAnimJoint253;

HAnimJoint HAnimJoint262 = createNode("HAnimJoint");
HAnimJoint262.name = "l_carpometacarpal_5";
HAnimJoint262.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint262.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint262.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint262.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint262.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment263 = createNode("HAnimSegment");
HAnimSegment263.name = "l_metacarpal_5";
HAnimSegment263.DEF = "hanim_l_metacarpal_5";
HAnimJoint262.children = new MFNode();

HAnimJoint262.children[0] = HAnimSegment263;

HAnimJoint HAnimJoint264 = createNode("HAnimJoint");
HAnimJoint264.name = "l_metacarpophalangeal_5";
HAnimJoint264.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint264.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint264.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint264.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint264.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment265 = createNode("HAnimSegment");
HAnimSegment265.name = "l_carpal_proximal_phalanx_5";
HAnimSegment265.DEF = "hanim_l_carpal_proximal_phalanx_5";
HAnimJoint264.children = new MFNode();

HAnimJoint264.children[0] = HAnimSegment265;

HAnimJoint HAnimJoint266 = createNode("HAnimJoint");
HAnimJoint266.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint266.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint266.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint266.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint266.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint266.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment267 = createNode("HAnimSegment");
HAnimSegment267.name = "l_carpal_middle_phalanx_5";
HAnimSegment267.DEF = "hanim_l_carpal_middle_phalanx_5";
HAnimJoint266.children = new MFNode();

HAnimJoint266.children[0] = HAnimSegment267;

HAnimJoint HAnimJoint268 = createNode("HAnimJoint");
HAnimJoint268.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint268.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint268.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint268.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint268.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint268.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment269 = createNode("HAnimSegment");
HAnimSegment269.name = "l_carpal_distal_phalanx_5";
HAnimSegment269.DEF = "hanim_l_carpal_distal_phalanx_5";
HAnimSite HAnimSite270 = createNode("HAnimSite");
HAnimSite270.name = "l_carpal_distal_phalanx_5_tip";
HAnimSite270.DEF = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimSite270.translation = new SFVec3f(new float[0.2014,0.7009,-0.1012]);
HAnimSegment269.children = new MFNode();

HAnimSegment269.children[0] = HAnimSite270;

HAnimJoint268.children = new MFNode();

HAnimJoint268.children[0] = HAnimSegment269;

HAnimJoint266.children[1] = HAnimJoint268;

HAnimJoint264.children[1] = HAnimJoint266;

HAnimJoint262.children[1] = HAnimJoint264;

HAnimJoint220.children[5] = HAnimJoint262;

HAnimJoint214.children[1] = HAnimJoint220;

HAnimJoint211.children[1] = HAnimJoint214;

HAnimJoint209.children[1] = HAnimJoint211;

HAnimJoint203.children[1] = HAnimJoint209;

HAnimJoint151.children[2] = HAnimJoint203;

HAnimJoint HAnimJoint271 = createNode("HAnimJoint");
HAnimJoint271.name = "r_sternoclavicular";
HAnimJoint271.DEF = "hanim_r_sternoclavicular";
HAnimJoint271.center = new SFVec3f(new float[-0.082,1.4488,-0.0353]);
HAnimJoint271.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint271.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint271.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment272 = createNode("HAnimSegment");
HAnimSegment272.name = "r_clavicle";
HAnimSegment272.DEF = "hanim_r_clavicle";
HAnimSite HAnimSite273 = createNode("HAnimSite");
HAnimSite273.name = "r_clavicle_pt";
HAnimSite273.DEF = "hanim_r_clavicle_pt";
HAnimSite273.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
HAnimSegment272.children = new MFNode();

HAnimSegment272.children[0] = HAnimSite273;

HAnimSite HAnimSite274 = createNode("HAnimSite");
HAnimSite274.name = "r_acromion_pt";
HAnimSite274.DEF = "hanim_r_acromion_pt";
HAnimSite274.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
HAnimSegment272.children[1] = HAnimSite274;

HAnimSite HAnimSite275 = createNode("HAnimSite");
HAnimSite275.name = "r_axilla_proximal_pt";
HAnimSite275.DEF = "hanim_r_axilla_proximal_pt";
HAnimSite275.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
HAnimSegment272.children[2] = HAnimSite275;

HAnimSite HAnimSite276 = createNode("HAnimSite");
HAnimSite276.name = "r_axilla_distal_pt";
HAnimSite276.DEF = "hanim_r_axilla_distal_pt";
HAnimSite276.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
HAnimSegment272.children[3] = HAnimSite276;

HAnimJoint271.children = new MFNode();

HAnimJoint271.children[0] = HAnimSegment272;

HAnimJoint HAnimJoint277 = createNode("HAnimJoint");
HAnimJoint277.name = "r_acromioclavicular";
HAnimJoint277.DEF = "hanim_r_acromioclavicular";
HAnimJoint277.center = new SFVec3f(new float[-0.0962,1.4269,-0.0424]);
HAnimJoint277.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint277.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint277.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment278 = createNode("HAnimSegment");
HAnimSegment278.name = "r_scapula";
HAnimSegment278.DEF = "hanim_r_scapula";
HAnimJoint277.children = new MFNode();

HAnimJoint277.children[0] = HAnimSegment278;

HAnimJoint HAnimJoint279 = createNode("HAnimJoint");
HAnimJoint279.name = "r_shoulder";
HAnimJoint279.DEF = "hanim_r_shoulder";
HAnimJoint279.center = new SFVec3f(new float[-0.2029,1.4376,-0.0387]);
HAnimJoint279.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint279.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint279.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment280 = createNode("HAnimSegment");
HAnimSegment280.name = "r_upperarm";
HAnimSegment280.DEF = "hanim_r_upperarm";
HAnimSite HAnimSite281 = createNode("HAnimSite");
HAnimSite281.name = "r_humeral_lateral_epicondyle_pt";
HAnimSite281.DEF = "hanim_r_humeral_lateral_epicondyle_pt";
HAnimSite281.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
HAnimSegment280.children = new MFNode();

HAnimSegment280.children[0] = HAnimSite281;

HAnimJoint279.children = new MFNode();

HAnimJoint279.children[0] = HAnimSegment280;

HAnimJoint HAnimJoint282 = createNode("HAnimJoint");
HAnimJoint282.name = "r_elbow";
HAnimJoint282.DEF = "hanim_r_elbow";
HAnimJoint282.center = new SFVec3f(new float[-0.2014,1.1357,-0.0682]);
HAnimJoint282.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint282.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint282.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment283 = createNode("HAnimSegment");
HAnimSegment283.name = "r_forearm";
HAnimSegment283.DEF = "hanim_r_forearm";
HAnimSite HAnimSite284 = createNode("HAnimSite");
HAnimSite284.name = "r_radial_styloid_pt";
HAnimSite284.DEF = "hanim_r_radial_styloid_pt";
HAnimSite284.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
HAnimSegment283.children = new MFNode();

HAnimSegment283.children[0] = HAnimSite284;

HAnimSite HAnimSite285 = createNode("HAnimSite");
HAnimSite285.name = "r_olecranon_pt";
HAnimSite285.DEF = "hanim_r_olecranon_pt";
HAnimSite285.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
HAnimSegment283.children[1] = HAnimSite285;

HAnimSite HAnimSite286 = createNode("HAnimSite");
HAnimSite286.name = "r_humeral_medial_epicondyle_pt";
HAnimSite286.DEF = "hanim_r_humeral_medial_epicondyle_pt";
HAnimSite286.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
HAnimSegment283.children[2] = HAnimSite286;

HAnimSite HAnimSite287 = createNode("HAnimSite");
HAnimSite287.name = "r_radiale_pt";
HAnimSite287.DEF = "hanim_r_radiale_pt";
HAnimSite287.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
HAnimSegment283.children[3] = HAnimSite287;

HAnimJoint282.children = new MFNode();

HAnimJoint282.children[0] = HAnimSegment283;

HAnimJoint HAnimJoint288 = createNode("HAnimJoint");
HAnimJoint288.name = "r_radiocarpal";
HAnimJoint288.DEF = "hanim_r_radiocarpal";
HAnimJoint288.center = new SFVec3f(new float[-0.1984,0.8663,-0.0583]);
HAnimJoint288.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint288.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint288.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment289 = createNode("HAnimSegment");
HAnimSegment289.name = "r_carpal";
HAnimSegment289.DEF = "hanim_r_carpal";
HAnimSite HAnimSite290 = createNode("HAnimSite");
HAnimSite290.name = "r_metacarpal_phalanx_2_pt";
HAnimSite290.DEF = "hanim_r_metacarpal_phalanx_2_pt";
HAnimSite290.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
HAnimSegment289.children = new MFNode();

HAnimSegment289.children[0] = HAnimSite290;

HAnimSite HAnimSite291 = createNode("HAnimSite");
HAnimSite291.name = "r_ulnar_styloid_pt";
HAnimSite291.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite291.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
HAnimSegment289.children[1] = HAnimSite291;

HAnimSite HAnimSite292 = createNode("HAnimSite");
HAnimSite292.name = "r_metacarpal_phalanx_5_pt";
HAnimSite292.DEF = "hanim_r_metacarpal_phalanx_5_pt";
HAnimSite292.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
HAnimSegment289.children[2] = HAnimSite292;

HAnimSite HAnimSite293 = createNode("HAnimSite");
HAnimSite293.name = "r_hand_front_view";
HAnimSite293.DEF = "hanim_r_hand_front_view";
HAnimSite293.translation = new SFVec3f(new float[-0.3,0.75,0.45]);
Viewpoint Viewpoint294 = createNode("Viewpoint");
Viewpoint294.DEF = "hanim_r_hand_front_viewpoint";
Viewpoint294.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
Viewpoint294.description = "right hand front";
Viewpoint294.position = new SFVec3f(new float[0,0,0]);
HAnimSite293.children = new MFNode();

HAnimSite293.children[0] = Viewpoint294;

HAnimSegment289.children[3] = HAnimSite293;

HAnimJoint288.children = new MFNode();

HAnimJoint288.children[0] = HAnimSegment289;

HAnimJoint HAnimJoint295 = createNode("HAnimJoint");
HAnimJoint295.name = "r_carpometacarpal_1";
HAnimJoint295.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint295.center = new SFVec3f(new float[-0.1924,0.8472,-0.0534]);
HAnimJoint295.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint295.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint295.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment296 = createNode("HAnimSegment");
HAnimSegment296.name = "r_metacarpal_1";
HAnimSegment296.DEF = "hanim_r_metacarpal_1";
HAnimJoint295.children = new MFNode();

HAnimJoint295.children[0] = HAnimSegment296;

HAnimJoint HAnimJoint297 = createNode("HAnimJoint");
HAnimJoint297.name = "r_metacarpophalangeal_1";
HAnimJoint297.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint297.center = new SFVec3f(new float[-0.1951,0.8226,0.0246]);
HAnimJoint297.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint297.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint297.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment298 = createNode("HAnimSegment");
HAnimSegment298.name = "r_carpal_proximal_phalanx_1";
HAnimSegment298.DEF = "hanim_r_carpal_proximal_phalanx_1";
HAnimJoint297.children = new MFNode();

HAnimJoint297.children[0] = HAnimSegment298;

HAnimJoint HAnimJoint299 = createNode("HAnimJoint");
HAnimJoint299.name = "r_carpal_interphalangeal_1";
HAnimJoint299.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint299.center = new SFVec3f(new float[-0.1955,0.8159,0.0464]);
HAnimJoint299.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint299.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint299.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment300 = createNode("HAnimSegment");
HAnimSegment300.name = "r_carpal_distal_phalanx_1";
HAnimSegment300.DEF = "hanim_r_carpal_distal_phalanx_1";
HAnimSite HAnimSite301 = createNode("HAnimSite");
HAnimSite301.name = "r_carpal_distal_phalanx_1_tip";
HAnimSite301.DEF = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimSite301.translation = new SFVec3f(new float[-0.1869,0.809,0.082]);
HAnimSegment300.children = new MFNode();

HAnimSegment300.children[0] = HAnimSite301;

HAnimJoint299.children = new MFNode();

HAnimJoint299.children[0] = HAnimSegment300;

HAnimJoint297.children[1] = HAnimJoint299;

HAnimJoint295.children[1] = HAnimJoint297;

HAnimJoint288.children[1] = HAnimJoint295;

HAnimJoint HAnimJoint302 = createNode("HAnimJoint");
HAnimJoint302.name = "r_carpometacarpal_2";
HAnimJoint302.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint302.center = new SFVec3f(new float[-0.1983,0.8024,-0.028]);
HAnimJoint302.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint302.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint302.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment303 = createNode("HAnimSegment");
HAnimSegment303.name = "r_metacarpal_2";
HAnimSegment303.DEF = "hanim_r_metacarpal_2";
HAnimJoint302.children = new MFNode();

HAnimJoint302.children[0] = HAnimSegment303;

HAnimJoint HAnimJoint304 = createNode("HAnimJoint");
HAnimJoint304.name = "r_metacarpophalangeal_2";
HAnimJoint304.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint304.center = new SFVec3f(new float[-0.1983,0.7815,-0.028]);
HAnimJoint304.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint304.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint304.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment305 = createNode("HAnimSegment");
HAnimSegment305.name = "r_carpal_proximal_phalanx_2";
HAnimSegment305.DEF = "hanim_r_carpal_proximal_phalanx_2";
HAnimJoint304.children = new MFNode();

HAnimJoint304.children[0] = HAnimSegment305;

HAnimJoint HAnimJoint306 = createNode("HAnimJoint");
HAnimJoint306.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint306.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint306.center = new SFVec3f(new float[-0.2017,0.7363,-0.0248]);
HAnimJoint306.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint306.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint306.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment307 = createNode("HAnimSegment");
HAnimSegment307.name = "r_carpal_middle_phalanx_2";
HAnimSegment307.DEF = "hanim_r_carpal_middle_phalanx_2";
HAnimJoint306.children = new MFNode();

HAnimJoint306.children[0] = HAnimSegment307;

HAnimJoint HAnimJoint308 = createNode("HAnimJoint");
HAnimJoint308.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint308.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint308.center = new SFVec3f(new float[-0.2028,0.7139,-0.0236]);
HAnimJoint308.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint308.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint308.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment309 = createNode("HAnimSegment");
HAnimSegment309.name = "r_carpal_distal_phalanx_2";
HAnimSegment309.DEF = "hanim_r_carpal_distal_phalanx_2";
HAnimSite HAnimSite310 = createNode("HAnimSite");
HAnimSite310.name = "r_carpal_distal_phalanx_2_tip";
HAnimSite310.DEF = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimSite310.translation = new SFVec3f(new float[-0.198,0.6883,-0.018]);
HAnimSegment309.children = new MFNode();

HAnimSegment309.children[0] = HAnimSite310;

HAnimSite HAnimSite311 = createNode("HAnimSite");
HAnimSite311.name = "r_dactylion_pt";
HAnimSite311.DEF = "hanim_r_dactylion_pt";
HAnimSite311.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
HAnimSegment309.children[1] = HAnimSite311;

HAnimJoint308.children = new MFNode();

HAnimJoint308.children[0] = HAnimSegment309;

HAnimJoint306.children[1] = HAnimJoint308;

HAnimJoint304.children[1] = HAnimJoint306;

HAnimJoint302.children[1] = HAnimJoint304;

HAnimJoint288.children[2] = HAnimJoint302;

HAnimJoint HAnimJoint312 = createNode("HAnimJoint");
HAnimJoint312.name = "r_carpometacarpal_3";
HAnimJoint312.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint312.center = new SFVec3f(new float[-0.1987,0.8029,-0.053]);
HAnimJoint312.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint312.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint312.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment313 = createNode("HAnimSegment");
HAnimSegment313.name = "r_metacarpal_3";
HAnimSegment313.DEF = "hanim_r_metacarpal_3";
HAnimJoint312.children = new MFNode();

HAnimJoint312.children[0] = HAnimSegment313;

HAnimJoint HAnimJoint314 = createNode("HAnimJoint");
HAnimJoint314.name = "r_metacarpophalangeal_3";
HAnimJoint314.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint314.center = new SFVec3f(new float[-0.1987,0.7818,-0.053]);
HAnimJoint314.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint314.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint314.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment315 = createNode("HAnimSegment");
HAnimSegment315.name = "r_carpal_proximal_phalanx_3";
HAnimSegment315.DEF = "hanim_r_carpal_proximal_phalanx_3";
HAnimJoint314.children = new MFNode();

HAnimJoint314.children[0] = HAnimSegment315;

HAnimJoint HAnimJoint316 = createNode("HAnimJoint");
HAnimJoint316.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint316.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint316.center = new SFVec3f(new float[-0.2013,0.7273,-0.0503]);
HAnimJoint316.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint316.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint316.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment317 = createNode("HAnimSegment");
HAnimSegment317.name = "r_carpal_middle_phalanx_3";
HAnimSegment317.DEF = "hanim_r_carpal_middle_phalanx_3";
HAnimJoint316.children = new MFNode();

HAnimJoint316.children[0] = HAnimSegment317;

HAnimJoint HAnimJoint318 = createNode("HAnimJoint");
HAnimJoint318.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint318.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint318.center = new SFVec3f(new float[-0.2026,0.7011,-0.0494]);
HAnimJoint318.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint318.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint318.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment319 = createNode("HAnimSegment");
HAnimSegment319.name = "r_carpal_distal_phalanx_3";
HAnimSegment319.DEF = "hanim_r_carpal_distal_phalanx_3";
HAnimSite HAnimSite320 = createNode("HAnimSite");
HAnimSite320.name = "r_carpal_distal_phalanx_3_tip";
HAnimSite320.DEF = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimSite320.translation = new SFVec3f(new float[-0.1969,0.6758,-0.0427]);
HAnimSegment319.children = new MFNode();

HAnimSegment319.children[0] = HAnimSite320;

HAnimJoint318.children = new MFNode();

HAnimJoint318.children[0] = HAnimSegment319;

HAnimJoint316.children[1] = HAnimJoint318;

HAnimJoint314.children[1] = HAnimJoint316;

HAnimJoint312.children[1] = HAnimJoint314;

HAnimJoint288.children[3] = HAnimJoint312;

HAnimJoint HAnimJoint321 = createNode("HAnimJoint");
HAnimJoint321.name = "r_carpometacarpal_4";
HAnimJoint321.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint321.center = new SFVec3f(new float[-0.1956,0.8019,-0.0794]);
HAnimJoint321.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint321.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint321.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment322 = createNode("HAnimSegment");
HAnimSegment322.name = "r_metacarpal_4";
HAnimSegment322.DEF = "hanim_r_metacarpal_4";
HAnimJoint321.children = new MFNode();

HAnimJoint321.children[0] = HAnimSegment322;

HAnimJoint HAnimJoint323 = createNode("HAnimJoint");
HAnimJoint323.name = "r_metacarpophalangeal_4";
HAnimJoint323.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint323.center = new SFVec3f(new float[-0.1956,0.7815,-0.0794]);
HAnimJoint323.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint323.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint323.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment324 = createNode("HAnimSegment");
HAnimSegment324.name = "r_carpal_proximal_phalanx_4";
HAnimSegment324.DEF = "hanim_r_carpal_proximal_phalanx_4";
HAnimJoint323.children = new MFNode();

HAnimJoint323.children[0] = HAnimSegment324;

HAnimJoint HAnimJoint325 = createNode("HAnimJoint");
HAnimJoint325.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint325.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint325.center = new SFVec3f(new float[-0.1973,0.7287,-0.0777]);
HAnimJoint325.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint325.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint325.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment326 = createNode("HAnimSegment");
HAnimSegment326.name = "r_carpal_middle_phalanx_4";
HAnimSegment326.DEF = "hanim_r_carpal_middle_phalanx_4";
HAnimJoint325.children = new MFNode();

HAnimJoint325.children[0] = HAnimSegment326;

HAnimJoint HAnimJoint327 = createNode("HAnimJoint");
HAnimJoint327.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint327.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint327.center = new SFVec3f(new float[-0.1983,0.7045,-0.0767]);
HAnimJoint327.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint327.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint327.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment328 = createNode("HAnimSegment");
HAnimSegment328.name = "r_carpal_distal_phalanx_4";
HAnimSegment328.DEF = "hanim_r_carpal_distal_phalanx_4";
HAnimSite HAnimSite329 = createNode("HAnimSite");
HAnimSite329.name = "r_carpal_distal_phalanx_4_tip";
HAnimSite329.DEF = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimSite329.translation = new SFVec3f(new float[-0.1934,0.6778,-0.0693]);
HAnimSegment328.children = new MFNode();

HAnimSegment328.children[0] = HAnimSite329;

HAnimJoint327.children = new MFNode();

HAnimJoint327.children[0] = HAnimSegment328;

HAnimJoint325.children[1] = HAnimJoint327;

HAnimJoint323.children[1] = HAnimJoint325;

HAnimJoint321.children[1] = HAnimJoint323;

HAnimJoint288.children[4] = HAnimJoint321;

HAnimJoint HAnimJoint330 = createNode("HAnimJoint");
HAnimJoint330.name = "r_carpometacarpal_5";
HAnimJoint330.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint330.center = new SFVec3f(new float[-0.1925,0.8066,-0.1036]);
HAnimJoint330.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint330.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint330.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment331 = createNode("HAnimSegment");
HAnimSegment331.name = "r_metacarpal_5";
HAnimSegment331.DEF = "hanim_r_metacarpal_5";
HAnimJoint330.children = new MFNode();

HAnimJoint330.children[0] = HAnimSegment331;

HAnimJoint HAnimJoint332 = createNode("HAnimJoint");
HAnimJoint332.name = "r_metacarpophalangeal_5";
HAnimJoint332.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint332.center = new SFVec3f(new float[-0.1925,0.7866,-0.1036]);
HAnimJoint332.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint332.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint332.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment333 = createNode("HAnimSegment");
HAnimSegment333.name = "r_carpal_proximal_phalanx_5";
HAnimSegment333.DEF = "hanim_r_carpal_proximal_phalanx_5";
HAnimJoint332.children = new MFNode();

HAnimJoint332.children[0] = HAnimSegment333;

HAnimJoint HAnimJoint334 = createNode("HAnimJoint");
HAnimJoint334.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint334.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint334.center = new SFVec3f(new float[-0.1938,0.7452,-0.1024]);
HAnimJoint334.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint334.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint334.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment335 = createNode("HAnimSegment");
HAnimSegment335.name = "r_carpal_middle_phalanx_5";
HAnimSegment335.DEF = "hanim_r_carpal_middle_phalanx_5";
HAnimJoint334.children = new MFNode();

HAnimJoint334.children[0] = HAnimSegment335;

HAnimJoint HAnimJoint336 = createNode("HAnimJoint");
HAnimJoint336.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint336.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint336.center = new SFVec3f(new float[-0.1948,0.7277,-0.1017]);
HAnimJoint336.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint336.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint336.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment337 = createNode("HAnimSegment");
HAnimSegment337.name = "r_carpal_distal_phalanx_5";
HAnimSegment337.DEF = "hanim_r_carpal_distal_phalanx_5";
HAnimSite HAnimSite338 = createNode("HAnimSite");
HAnimSite338.name = "r_carpal_distal_phalanx_5_tip";
HAnimSite338.DEF = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimSite338.translation = new SFVec3f(new float[-0.1938,0.7035,-0.0949]);
HAnimSegment337.children = new MFNode();

HAnimSegment337.children[0] = HAnimSite338;

HAnimJoint336.children = new MFNode();

HAnimJoint336.children[0] = HAnimSegment337;

HAnimJoint334.children[1] = HAnimJoint336;

HAnimJoint332.children[1] = HAnimJoint334;

HAnimJoint330.children[1] = HAnimJoint332;

HAnimJoint288.children[5] = HAnimJoint330;

HAnimJoint282.children[1] = HAnimJoint288;

HAnimJoint279.children[1] = HAnimJoint282;

HAnimJoint277.children[1] = HAnimJoint279;

HAnimJoint271.children[1] = HAnimJoint277;

HAnimJoint151.children[3] = HAnimJoint271;

HAnimJoint149.children[1] = HAnimJoint151;

HAnimJoint147.children[1] = HAnimJoint149;

HAnimJoint145.children[1] = HAnimJoint147;

HAnimJoint143.children[1] = HAnimJoint145;

HAnimJoint141.children[1] = HAnimJoint143;

HAnimJoint139.children[1] = HAnimJoint141;

HAnimJoint137.children[1] = HAnimJoint139;

HAnimJoint133.children[1] = HAnimJoint137;

HAnimJoint130.children[1] = HAnimJoint133;

HAnimJoint128.children[1] = HAnimJoint130;

HAnimJoint126.children[1] = HAnimJoint128;

HAnimJoint124.children[1] = HAnimJoint126;

HAnimJoint119.children[1] = HAnimJoint124;

HAnimJoint117.children[1] = HAnimJoint119;

HAnimJoint115.children[1] = HAnimJoint117;

HAnimJoint111.children[1] = HAnimJoint115;

HAnimJoint52.children[2] = HAnimJoint111;

HAnimHumanoid43.joints[1] = HAnimJoint52;

HAnimSite HAnimSite339 = createNode("HAnimSite");
HAnimSite339.name = "l_inclined_view";
HAnimSite339.DEF = "hanim_l_inclined_view";
HAnimSite339.rotation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
HAnimSite339.translation = new SFVec3f(new float[1.62,1.05,2.06]);
Viewpoint Viewpoint340 = createNode("Viewpoint");
Viewpoint340.DEF = "hanim_l_inclined_viewpoint";
Viewpoint340.description = "left inclined";
Viewpoint340.position = new SFVec3f(new float[0,0,0]);
HAnimSite339.children = new MFNode();

HAnimSite339.children[0] = Viewpoint340;

HAnimHumanoid43.viewpoints[2] = HAnimSite339;

HAnimSite HAnimSite341 = createNode("HAnimSite");
HAnimSite341.name = "r_inclined_view";
HAnimSite341.DEF = "hanim_r_inclined_view";
HAnimSite341.rotation = new SFRotation(new float[-0.113,-0.993,0.0347,0.671]);
HAnimSite341.translation = new SFVec3f(new float[-1.62,1.05,2.06]);
Viewpoint Viewpoint342 = createNode("Viewpoint");
Viewpoint342.DEF = "hanim_r_inclined_viewpoint";
Viewpoint342.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint342.description = "right inclined";
Viewpoint342.position = new SFVec3f(new float[0,0,0]);
HAnimSite341.children = new MFNode();

HAnimSite341.children[0] = Viewpoint342;

HAnimHumanoid43.viewpoints[3] = HAnimSite341;

HAnimSite HAnimSite343 = createNode("HAnimSite");
HAnimSite343.name = "front_view";
HAnimSite343.DEF = "hanim_front_view";
HAnimSite343.translation = new SFVec3f(new float[0,0.85,2.58]);
Viewpoint Viewpoint344 = createNode("Viewpoint");
Viewpoint344.DEF = "hanim_front_viewpoint";
Viewpoint344.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint344.description = "front";
Viewpoint344.position = new SFVec3f(new float[0,0,0]);
HAnimSite343.children = new MFNode();

HAnimSite343.children[0] = Viewpoint344;

HAnimHumanoid43.viewpoints[4] = HAnimSite343;

HAnimSite HAnimSite345 = createNode("HAnimSite");
HAnimSite345.name = "back_view";
HAnimSite345.DEF = "hanim_back_view";
HAnimSite345.rotation = new SFRotation(new float[0,1,0,3.14]);
HAnimSite345.translation = new SFVec3f(new float[0,0.85,-2.58]);
Viewpoint Viewpoint346 = createNode("Viewpoint");
Viewpoint346.DEF = "hanim_back_viewpoint";
Viewpoint346.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint346.description = "back";
Viewpoint346.position = new SFVec3f(new float[0,0,0]);
HAnimSite345.children = new MFNode();

HAnimSite345.children[0] = Viewpoint346;

HAnimHumanoid43.viewpoints[5] = HAnimSite345;

HAnimSite HAnimSite347 = createNode("HAnimSite");
HAnimSite347.name = "l_side_view";
HAnimSite347.DEF = "hanim_l_side_view";
HAnimSite347.rotation = new SFRotation(new float[0,1,0,1.5708]);
HAnimSite347.translation = new SFVec3f(new float[2.6,0.854,0]);
Viewpoint Viewpoint348 = createNode("Viewpoint");
Viewpoint348.DEF = "hanim_l_side_viewpoint";
Viewpoint348.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint348.description = "left side";
Viewpoint348.position = new SFVec3f(new float[0,0,0]);
HAnimSite347.children = new MFNode();

HAnimSite347.children[0] = Viewpoint348;

HAnimHumanoid43.viewpoints[6] = HAnimSite347;

HAnimSite HAnimSite349 = createNode("HAnimSite");
HAnimSite349.name = "Top_view";
HAnimSite349.DEF = "hanim_Top_view";
HAnimSite349.rotation = new SFRotation(new float[1,0,0,-1.57]);
HAnimSite349.translation = new SFVec3f(new float[0,3.5,0]);
Viewpoint Viewpoint350 = createNode("Viewpoint");
Viewpoint350.DEF = "hanim_Top_viewpoint";
Viewpoint350.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint350.description = "Top";
Viewpoint350.position = new SFVec3f(new float[0,0,0]);
HAnimSite349.children = new MFNode();

HAnimSite349.children[0] = Viewpoint350;

HAnimHumanoid43.viewpoints[7] = HAnimSite349;

HAnimSite HAnimSite351 = createNode("HAnimSite");
HAnimSite351.name = "front_close_view";
HAnimSite351.DEF = "hanim_front_close_view";
HAnimSite351.translation = new SFVec3f(new float[0,0.854,1.575]);
Viewpoint Viewpoint352 = createNode("Viewpoint");
Viewpoint352.DEF = "hanim_front_close_viewpoint";
Viewpoint352.centerOfRotation = new SFVec3f(new float[0,0,1.575]);
Viewpoint352.description = "front close";
Viewpoint352.position = new SFVec3f(new float[0,0,0]);
HAnimSite351.children = new MFNode();

HAnimSite351.children[0] = Viewpoint352;

HAnimHumanoid43.viewpoints[8] = HAnimSite351;

HAnimSite HAnimSite353 = createNode("HAnimSite");
HAnimSite353.name = "side_close_view";
HAnimSite353.DEF = "hanim_side_close_view";
HAnimSite353.rotation = new SFRotation(new float[0,1,0,1.5708]);
HAnimSite353.translation = new SFVec3f(new float[1.56,0.854,0]);
Viewpoint Viewpoint354 = createNode("Viewpoint");
Viewpoint354.DEF = "hanim_side_close_viewpoint";
Viewpoint354.centerOfRotation = new SFVec3f(new float[1.6,0,0]);
Viewpoint354.description = "side close";
Viewpoint354.position = new SFVec3f(new float[0,0,0]);
HAnimSite353.children = new MFNode();

HAnimSite353.children[0] = Viewpoint354;

HAnimHumanoid43.viewpoints[9] = HAnimSite353;

HAnimSite HAnimSite355 = createNode("HAnimSite");
HAnimSite355.name = "head_front_close_view";
HAnimSite355.DEF = "hanim_head_front_close_view";
HAnimSite355.translation = new SFVec3f(new float[0,1.5,1]);
Viewpoint Viewpoint356 = createNode("Viewpoint");
Viewpoint356.DEF = "hanim_head_front_close_viewpoint";
Viewpoint356.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint356.description = "head front close";
Viewpoint356.position = new SFVec3f(new float[0,0,0]);
HAnimSite355.children = new MFNode();

HAnimSite355.children[0] = Viewpoint356;

HAnimHumanoid43.viewpoints[10] = HAnimSite355;

HAnimSite HAnimSite357 = createNode("HAnimSite");
HAnimSite357.name = "chest_front_close_view";
HAnimSite357.DEF = "hanim_chest_front_close_view";
HAnimSite357.translation = new SFVec3f(new float[0,1.2,1]);
Viewpoint Viewpoint358 = createNode("Viewpoint");
Viewpoint358.DEF = "hanim_chest_front_close_viewpoint";
Viewpoint358.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint358.description = "chest front close";
Viewpoint358.position = new SFVec3f(new float[0,0,0]);
HAnimSite357.children = new MFNode();

HAnimSite357.children[0] = Viewpoint358;

HAnimHumanoid43.viewpoints[11] = HAnimSite357;

HAnimSite HAnimSite359 = createNode("HAnimSite");
HAnimSite359.name = "pelvis_front_close_view";
HAnimSite359.DEF = "hanim_pelvis_front_close_view";
HAnimSite359.translation = new SFVec3f(new float[0,0.8,1]);
Viewpoint Viewpoint360 = createNode("Viewpoint");
Viewpoint360.DEF = "hanim_pelvis_front_close_viewpoint";
Viewpoint360.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint360.description = "pelvis front close";
Viewpoint360.position = new SFVec3f(new float[0,0,0]);
HAnimSite359.children = new MFNode();

HAnimSite359.children[0] = Viewpoint360;

HAnimHumanoid43.viewpoints[12] = HAnimSite359;

HAnimSite HAnimSite361 = createNode("HAnimSite");
HAnimSite361.name = "knees_front_close_view";
HAnimSite361.DEF = "hanim_knees_front_close_view";
HAnimSite361.translation = new SFVec3f(new float[0,0.4,1]);
Viewpoint Viewpoint362 = createNode("Viewpoint");
Viewpoint362.DEF = "hanim_knees_front_close_viewpoint";
Viewpoint362.centerOfRotation = new SFVec3f(new float[0,0.4,0]);
Viewpoint362.description = "knees front close";
Viewpoint362.position = new SFVec3f(new float[0,0,0]);
HAnimSite361.children = new MFNode();

HAnimSite361.children[0] = Viewpoint362;

HAnimHumanoid43.viewpoints[13] = HAnimSite361;

HAnimSite HAnimSite363 = createNode("HAnimSite");
HAnimSite363.name = "feet_front_close_view";
HAnimSite363.DEF = "hanim_feet_front_close_view";
HAnimSite363.translation = new SFVec3f(new float[0,0,1]);
Viewpoint Viewpoint364 = createNode("Viewpoint");
Viewpoint364.DEF = "hanim_feet_front_close_viewpoint";
Viewpoint364.description = "feet front close";
Viewpoint364.position = new SFVec3f(new float[0,0,0]);
HAnimSite363.children = new MFNode();

HAnimSite363.children[0] = Viewpoint364;

HAnimHumanoid43.viewpoints[14] = HAnimSite363;

HAnimSite HAnimSite365 = createNode("HAnimSite");
HAnimSite365.name = "eye_level_view";
HAnimSite365.DEF = "hanim_eye_level_view";
HAnimSite365.translation = new SFVec3f(new float[0,1.6332,0.0502]);
Viewpoint Viewpoint366 = createNode("Viewpoint");
Viewpoint366.DEF = "hanim_eye_level_viewpoint";
Viewpoint366.description = "eye level looking forward";
Viewpoint366.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint366.position = new SFVec3f(new float[0,0,0]);
HAnimSite365.children = new MFNode();

HAnimSite365.children[0] = Viewpoint366;

HAnimHumanoid43.viewpoints[15] = HAnimSite365;

HAnimSite HAnimSite367 = createNode("HAnimSite");
HAnimSite367.USE = "hanim_l_eyeball_site_view";
HAnimHumanoid43.viewpoints[16] = HAnimSite367;

HAnimSite HAnimSite368 = createNode("HAnimSite");
HAnimSite368.USE = "hanim_r_eyeball_site_view";
HAnimHumanoid43.viewpoints[17] = HAnimSite368;

HAnimSite HAnimSite369 = createNode("HAnimSite");
HAnimSite369.USE = "hanim_l_hand_front_view";
HAnimHumanoid43.viewpoints[18] = HAnimSite369;

HAnimSite HAnimSite370 = createNode("HAnimSite");
HAnimSite370.USE = "hanim_r_hand_front_view";
HAnimHumanoid43.viewpoints[19] = HAnimSite370;

HAnimJoint HAnimJoint371 = createNode("HAnimJoint");
HAnimJoint371.USE = "hanim_humanoid_root";
HAnimHumanoid43.joints[20] = HAnimJoint371;

HAnimJoint HAnimJoint372 = createNode("HAnimJoint");
HAnimJoint372.USE = "hanim_sacroiliac";
HAnimHumanoid43.joints[21] = HAnimJoint372;

HAnimJoint HAnimJoint373 = createNode("HAnimJoint");
HAnimJoint373.USE = "hanim_vl5";
HAnimHumanoid43.joints[22] = HAnimJoint373;

HAnimJoint HAnimJoint374 = createNode("HAnimJoint");
HAnimJoint374.USE = "hanim_vl4";
HAnimHumanoid43.joints[23] = HAnimJoint374;

HAnimJoint HAnimJoint375 = createNode("HAnimJoint");
HAnimJoint375.USE = "hanim_vl3";
HAnimHumanoid43.joints[24] = HAnimJoint375;

HAnimJoint HAnimJoint376 = createNode("HAnimJoint");
HAnimJoint376.USE = "hanim_vl2";
HAnimHumanoid43.joints[25] = HAnimJoint376;

HAnimJoint HAnimJoint377 = createNode("HAnimJoint");
HAnimJoint377.USE = "hanim_vl1";
HAnimHumanoid43.joints[26] = HAnimJoint377;

HAnimJoint HAnimJoint378 = createNode("HAnimJoint");
HAnimJoint378.USE = "hanim_vt12";
HAnimHumanoid43.joints[27] = HAnimJoint378;

HAnimJoint HAnimJoint379 = createNode("HAnimJoint");
HAnimJoint379.USE = "hanim_vt11";
HAnimHumanoid43.joints[28] = HAnimJoint379;

HAnimJoint HAnimJoint380 = createNode("HAnimJoint");
HAnimJoint380.USE = "hanim_vt10";
HAnimHumanoid43.joints[29] = HAnimJoint380;

HAnimJoint HAnimJoint381 = createNode("HAnimJoint");
HAnimJoint381.USE = "hanim_vt9";
HAnimHumanoid43.joints[30] = HAnimJoint381;

HAnimJoint HAnimJoint382 = createNode("HAnimJoint");
HAnimJoint382.USE = "hanim_vt8";
HAnimHumanoid43.joints[31] = HAnimJoint382;

HAnimJoint HAnimJoint383 = createNode("HAnimJoint");
HAnimJoint383.USE = "hanim_vt7";
HAnimHumanoid43.joints[32] = HAnimJoint383;

HAnimJoint HAnimJoint384 = createNode("HAnimJoint");
HAnimJoint384.USE = "hanim_vt6";
HAnimHumanoid43.joints[33] = HAnimJoint384;

HAnimJoint HAnimJoint385 = createNode("HAnimJoint");
HAnimJoint385.USE = "hanim_vt5";
HAnimHumanoid43.joints[34] = HAnimJoint385;

HAnimJoint HAnimJoint386 = createNode("HAnimJoint");
HAnimJoint386.USE = "hanim_vt4";
HAnimHumanoid43.joints[35] = HAnimJoint386;

HAnimJoint HAnimJoint387 = createNode("HAnimJoint");
HAnimJoint387.USE = "hanim_vt3";
HAnimHumanoid43.joints[36] = HAnimJoint387;

HAnimJoint HAnimJoint388 = createNode("HAnimJoint");
HAnimJoint388.USE = "hanim_vt2";
HAnimHumanoid43.joints[37] = HAnimJoint388;

HAnimJoint HAnimJoint389 = createNode("HAnimJoint");
HAnimJoint389.USE = "hanim_vt1";
HAnimHumanoid43.joints[38] = HAnimJoint389;

HAnimJoint HAnimJoint390 = createNode("HAnimJoint");
HAnimJoint390.USE = "hanim_vc7";
HAnimHumanoid43.joints[39] = HAnimJoint390;

HAnimJoint HAnimJoint391 = createNode("HAnimJoint");
HAnimJoint391.USE = "hanim_vc6";
HAnimHumanoid43.joints[40] = HAnimJoint391;

HAnimJoint HAnimJoint392 = createNode("HAnimJoint");
HAnimJoint392.USE = "hanim_vc5";
HAnimHumanoid43.joints[41] = HAnimJoint392;

HAnimJoint HAnimJoint393 = createNode("HAnimJoint");
HAnimJoint393.USE = "hanim_vc4";
HAnimHumanoid43.joints[42] = HAnimJoint393;

HAnimJoint HAnimJoint394 = createNode("HAnimJoint");
HAnimJoint394.USE = "hanim_vc3";
HAnimHumanoid43.joints[43] = HAnimJoint394;

HAnimJoint HAnimJoint395 = createNode("HAnimJoint");
HAnimJoint395.USE = "hanim_vc2";
HAnimHumanoid43.joints[44] = HAnimJoint395;

HAnimJoint HAnimJoint396 = createNode("HAnimJoint");
HAnimJoint396.USE = "hanim_vc1";
HAnimHumanoid43.joints[45] = HAnimJoint396;

HAnimJoint HAnimJoint397 = createNode("HAnimJoint");
HAnimJoint397.USE = "hanim_skullbase";
HAnimHumanoid43.joints[46] = HAnimJoint397;

HAnimJoint HAnimJoint398 = createNode("HAnimJoint");
HAnimJoint398.USE = "hanim_temporomandibular";
HAnimHumanoid43.joints[47] = HAnimJoint398;

HAnimJoint HAnimJoint399 = createNode("HAnimJoint");
HAnimJoint399.USE = "hanim_l_acromioclavicular";
HAnimHumanoid43.joints[48] = HAnimJoint399;

HAnimJoint HAnimJoint400 = createNode("HAnimJoint");
HAnimJoint400.USE = "hanim_r_acromioclavicular";
HAnimHumanoid43.joints[49] = HAnimJoint400;

HAnimJoint HAnimJoint401 = createNode("HAnimJoint");
HAnimJoint401.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid43.joints[50] = HAnimJoint401;

HAnimJoint HAnimJoint402 = createNode("HAnimJoint");
HAnimJoint402.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid43.joints[51] = HAnimJoint402;

HAnimJoint HAnimJoint403 = createNode("HAnimJoint");
HAnimJoint403.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid43.joints[52] = HAnimJoint403;

HAnimJoint HAnimJoint404 = createNode("HAnimJoint");
HAnimJoint404.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid43.joints[53] = HAnimJoint404;

HAnimJoint HAnimJoint405 = createNode("HAnimJoint");
HAnimJoint405.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid43.joints[54] = HAnimJoint405;

HAnimJoint HAnimJoint406 = createNode("HAnimJoint");
HAnimJoint406.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid43.joints[55] = HAnimJoint406;

HAnimJoint HAnimJoint407 = createNode("HAnimJoint");
HAnimJoint407.USE = "hanim_l_carpal_distal_interphalangeal_5";
HAnimHumanoid43.joints[56] = HAnimJoint407;

HAnimJoint HAnimJoint408 = createNode("HAnimJoint");
HAnimJoint408.USE = "hanim_r_carpal_distal_interphalangeal_5";
HAnimHumanoid43.joints[57] = HAnimJoint408;

HAnimJoint HAnimJoint409 = createNode("HAnimJoint");
HAnimJoint409.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid43.joints[58] = HAnimJoint409;

HAnimJoint HAnimJoint410 = createNode("HAnimJoint");
HAnimJoint410.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid43.joints[59] = HAnimJoint410;

HAnimJoint HAnimJoint411 = createNode("HAnimJoint");
HAnimJoint411.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[60] = HAnimJoint411;

HAnimJoint HAnimJoint412 = createNode("HAnimJoint");
HAnimJoint412.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[61] = HAnimJoint412;

HAnimJoint HAnimJoint413 = createNode("HAnimJoint");
HAnimJoint413.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[62] = HAnimJoint413;

HAnimJoint HAnimJoint414 = createNode("HAnimJoint");
HAnimJoint414.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[63] = HAnimJoint414;

HAnimJoint HAnimJoint415 = createNode("HAnimJoint");
HAnimJoint415.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[64] = HAnimJoint415;

HAnimJoint HAnimJoint416 = createNode("HAnimJoint");
HAnimJoint416.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[65] = HAnimJoint416;

HAnimJoint HAnimJoint417 = createNode("HAnimJoint");
HAnimJoint417.USE = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[66] = HAnimJoint417;

HAnimJoint HAnimJoint418 = createNode("HAnimJoint");
HAnimJoint418.USE = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[67] = HAnimJoint418;

HAnimJoint HAnimJoint419 = createNode("HAnimJoint");
HAnimJoint419.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid43.joints[68] = HAnimJoint419;

HAnimJoint HAnimJoint420 = createNode("HAnimJoint");
HAnimJoint420.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid43.joints[69] = HAnimJoint420;

HAnimJoint HAnimJoint421 = createNode("HAnimJoint");
HAnimJoint421.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid43.joints[70] = HAnimJoint421;

HAnimJoint HAnimJoint422 = createNode("HAnimJoint");
HAnimJoint422.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid43.joints[71] = HAnimJoint422;

HAnimJoint HAnimJoint423 = createNode("HAnimJoint");
HAnimJoint423.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid43.joints[72] = HAnimJoint423;

HAnimJoint HAnimJoint424 = createNode("HAnimJoint");
HAnimJoint424.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid43.joints[73] = HAnimJoint424;

HAnimJoint HAnimJoint425 = createNode("HAnimJoint");
HAnimJoint425.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid43.joints[74] = HAnimJoint425;

HAnimJoint HAnimJoint426 = createNode("HAnimJoint");
HAnimJoint426.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid43.joints[75] = HAnimJoint426;

HAnimJoint HAnimJoint427 = createNode("HAnimJoint");
HAnimJoint427.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid43.joints[76] = HAnimJoint427;

HAnimJoint HAnimJoint428 = createNode("HAnimJoint");
HAnimJoint428.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid43.joints[77] = HAnimJoint428;

HAnimJoint HAnimJoint429 = createNode("HAnimJoint");
HAnimJoint429.USE = "hanim_l_elbow";
HAnimHumanoid43.joints[78] = HAnimJoint429;

HAnimJoint HAnimJoint430 = createNode("HAnimJoint");
HAnimJoint430.USE = "hanim_r_elbow";
HAnimHumanoid43.joints[79] = HAnimJoint430;

HAnimJoint HAnimJoint431 = createNode("HAnimJoint");
HAnimJoint431.USE = "hanim_l_eyeball_joint";
HAnimHumanoid43.joints[80] = HAnimJoint431;

HAnimJoint HAnimJoint432 = createNode("HAnimJoint");
HAnimJoint432.USE = "hanim_r_eyeball_joint";
HAnimHumanoid43.joints[81] = HAnimJoint432;

HAnimJoint HAnimJoint433 = createNode("HAnimJoint");
HAnimJoint433.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid43.joints[82] = HAnimJoint433;

HAnimJoint HAnimJoint434 = createNode("HAnimJoint");
HAnimJoint434.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid43.joints[83] = HAnimJoint434;

HAnimJoint HAnimJoint435 = createNode("HAnimJoint");
HAnimJoint435.USE = "hanim_l_eyelid_joint";
HAnimHumanoid43.joints[84] = HAnimJoint435;

HAnimJoint HAnimJoint436 = createNode("HAnimJoint");
HAnimJoint436.USE = "hanim_r_eyelid_joint";
HAnimHumanoid43.joints[85] = HAnimJoint436;

HAnimJoint HAnimJoint437 = createNode("HAnimJoint");
HAnimJoint437.USE = "hanim_l_hip";
HAnimHumanoid43.joints[86] = HAnimJoint437;

HAnimJoint HAnimJoint438 = createNode("HAnimJoint");
HAnimJoint438.USE = "hanim_r_hip";
HAnimHumanoid43.joints[87] = HAnimJoint438;

HAnimJoint HAnimJoint439 = createNode("HAnimJoint");
HAnimJoint439.USE = "hanim_l_knee";
HAnimHumanoid43.joints[88] = HAnimJoint439;

HAnimJoint HAnimJoint440 = createNode("HAnimJoint");
HAnimJoint440.USE = "hanim_r_knee";
HAnimHumanoid43.joints[89] = HAnimJoint440;

HAnimJoint HAnimJoint441 = createNode("HAnimJoint");
HAnimJoint441.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid43.joints[90] = HAnimJoint441;

HAnimJoint HAnimJoint442 = createNode("HAnimJoint");
HAnimJoint442.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid43.joints[91] = HAnimJoint442;

HAnimJoint HAnimJoint443 = createNode("HAnimJoint");
HAnimJoint443.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid43.joints[92] = HAnimJoint443;

HAnimJoint HAnimJoint444 = createNode("HAnimJoint");
HAnimJoint444.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid43.joints[93] = HAnimJoint444;

HAnimJoint HAnimJoint445 = createNode("HAnimJoint");
HAnimJoint445.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid43.joints[94] = HAnimJoint445;

HAnimJoint HAnimJoint446 = createNode("HAnimJoint");
HAnimJoint446.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid43.joints[95] = HAnimJoint446;

HAnimJoint HAnimJoint447 = createNode("HAnimJoint");
HAnimJoint447.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid43.joints[96] = HAnimJoint447;

HAnimJoint HAnimJoint448 = createNode("HAnimJoint");
HAnimJoint448.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid43.joints[97] = HAnimJoint448;

HAnimJoint HAnimJoint449 = createNode("HAnimJoint");
HAnimJoint449.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid43.joints[98] = HAnimJoint449;

HAnimJoint HAnimJoint450 = createNode("HAnimJoint");
HAnimJoint450.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid43.joints[99] = HAnimJoint450;

HAnimJoint HAnimJoint451 = createNode("HAnimJoint");
HAnimJoint451.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid43.joints[100] = HAnimJoint451;

HAnimJoint HAnimJoint452 = createNode("HAnimJoint");
HAnimJoint452.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid43.joints[101] = HAnimJoint452;

HAnimJoint HAnimJoint453 = createNode("HAnimJoint");
HAnimJoint453.USE = "hanim_l_radiocarpal";
HAnimHumanoid43.joints[102] = HAnimJoint453;

HAnimJoint HAnimJoint454 = createNode("HAnimJoint");
HAnimJoint454.USE = "hanim_r_radiocarpal";
HAnimHumanoid43.joints[103] = HAnimJoint454;

HAnimJoint HAnimJoint455 = createNode("HAnimJoint");
HAnimJoint455.USE = "hanim_l_shoulder";
HAnimHumanoid43.joints[104] = HAnimJoint455;

HAnimJoint HAnimJoint456 = createNode("HAnimJoint");
HAnimJoint456.USE = "hanim_r_shoulder";
HAnimHumanoid43.joints[105] = HAnimJoint456;

HAnimJoint HAnimJoint457 = createNode("HAnimJoint");
HAnimJoint457.USE = "hanim_l_sternoclavicular";
HAnimHumanoid43.joints[106] = HAnimJoint457;

HAnimJoint HAnimJoint458 = createNode("HAnimJoint");
HAnimJoint458.USE = "hanim_r_sternoclavicular";
HAnimHumanoid43.joints[107] = HAnimJoint458;

HAnimJoint HAnimJoint459 = createNode("HAnimJoint");
HAnimJoint459.USE = "hanim_l_talocrural";
HAnimHumanoid43.joints[108] = HAnimJoint459;

HAnimJoint HAnimJoint460 = createNode("HAnimJoint");
HAnimJoint460.USE = "hanim_r_talocrural";
HAnimHumanoid43.joints[109] = HAnimJoint460;

HAnimJoint HAnimJoint461 = createNode("HAnimJoint");
HAnimJoint461.USE = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid43.joints[110] = HAnimJoint461;

HAnimJoint HAnimJoint462 = createNode("HAnimJoint");
HAnimJoint462.USE = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid43.joints[111] = HAnimJoint462;

HAnimJoint HAnimJoint463 = createNode("HAnimJoint");
HAnimJoint463.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid43.joints[112] = HAnimJoint463;

HAnimJoint HAnimJoint464 = createNode("HAnimJoint");
HAnimJoint464.USE = "hanim_r_tarsometatarsal_2";
HAnimHumanoid43.joints[113] = HAnimJoint464;

HAnimSegment HAnimSegment465 = createNode("HAnimSegment");
HAnimSegment465.USE = "hanim_pelvis";
HAnimHumanoid43.segments[114] = HAnimSegment465;

HAnimSegment HAnimSegment466 = createNode("HAnimSegment");
HAnimSegment466.USE = "hanim_skull";
HAnimHumanoid43.segments[115] = HAnimSegment466;

HAnimSegment HAnimSegment467 = createNode("HAnimSegment");
HAnimSegment467.USE = "hanim_jaw";
HAnimHumanoid43.segments[116] = HAnimSegment467;

HAnimSegment HAnimSegment468 = createNode("HAnimSegment");
HAnimSegment468.USE = "hanim_c1";
HAnimHumanoid43.segments[117] = HAnimSegment468;

HAnimSegment HAnimSegment469 = createNode("HAnimSegment");
HAnimSegment469.USE = "hanim_c2";
HAnimHumanoid43.segments[118] = HAnimSegment469;

HAnimSegment HAnimSegment470 = createNode("HAnimSegment");
HAnimSegment470.USE = "hanim_c3";
HAnimHumanoid43.segments[119] = HAnimSegment470;

HAnimSegment HAnimSegment471 = createNode("HAnimSegment");
HAnimSegment471.USE = "hanim_c4";
HAnimHumanoid43.segments[120] = HAnimSegment471;

HAnimSegment HAnimSegment472 = createNode("HAnimSegment");
HAnimSegment472.USE = "hanim_c5";
HAnimHumanoid43.segments[121] = HAnimSegment472;

HAnimSegment HAnimSegment473 = createNode("HAnimSegment");
HAnimSegment473.USE = "hanim_c6";
HAnimHumanoid43.segments[122] = HAnimSegment473;

HAnimSegment HAnimSegment474 = createNode("HAnimSegment");
HAnimSegment474.USE = "hanim_c7";
HAnimHumanoid43.segments[123] = HAnimSegment474;

HAnimSegment HAnimSegment475 = createNode("HAnimSegment");
HAnimSegment475.USE = "hanim_t1";
HAnimHumanoid43.segments[124] = HAnimSegment475;

HAnimSegment HAnimSegment476 = createNode("HAnimSegment");
HAnimSegment476.USE = "hanim_t2";
HAnimHumanoid43.segments[125] = HAnimSegment476;

HAnimSegment HAnimSegment477 = createNode("HAnimSegment");
HAnimSegment477.USE = "hanim_t3";
HAnimHumanoid43.segments[126] = HAnimSegment477;

HAnimSegment HAnimSegment478 = createNode("HAnimSegment");
HAnimSegment478.USE = "hanim_t4";
HAnimHumanoid43.segments[127] = HAnimSegment478;

HAnimSegment HAnimSegment479 = createNode("HAnimSegment");
HAnimSegment479.USE = "hanim_t5";
HAnimHumanoid43.segments[128] = HAnimSegment479;

HAnimSegment HAnimSegment480 = createNode("HAnimSegment");
HAnimSegment480.USE = "hanim_t6";
HAnimHumanoid43.segments[129] = HAnimSegment480;

HAnimSegment HAnimSegment481 = createNode("HAnimSegment");
HAnimSegment481.USE = "hanim_t7";
HAnimHumanoid43.segments[130] = HAnimSegment481;

HAnimSegment HAnimSegment482 = createNode("HAnimSegment");
HAnimSegment482.USE = "hanim_t8";
HAnimHumanoid43.segments[131] = HAnimSegment482;

HAnimSegment HAnimSegment483 = createNode("HAnimSegment");
HAnimSegment483.USE = "hanim_t9";
HAnimHumanoid43.segments[132] = HAnimSegment483;

HAnimSegment HAnimSegment484 = createNode("HAnimSegment");
HAnimSegment484.USE = "hanim_t10";
HAnimHumanoid43.segments[133] = HAnimSegment484;

HAnimSegment HAnimSegment485 = createNode("HAnimSegment");
HAnimSegment485.USE = "hanim_t11";
HAnimHumanoid43.segments[134] = HAnimSegment485;

HAnimSegment HAnimSegment486 = createNode("HAnimSegment");
HAnimSegment486.USE = "hanim_t12";
HAnimHumanoid43.segments[135] = HAnimSegment486;

HAnimSegment HAnimSegment487 = createNode("HAnimSegment");
HAnimSegment487.USE = "hanim_l1";
HAnimHumanoid43.segments[136] = HAnimSegment487;

HAnimSegment HAnimSegment488 = createNode("HAnimSegment");
HAnimSegment488.USE = "hanim_l2";
HAnimHumanoid43.segments[137] = HAnimSegment488;

HAnimSegment HAnimSegment489 = createNode("HAnimSegment");
HAnimSegment489.USE = "hanim_l3";
HAnimHumanoid43.segments[138] = HAnimSegment489;

HAnimSegment HAnimSegment490 = createNode("HAnimSegment");
HAnimSegment490.USE = "hanim_l4";
HAnimHumanoid43.segments[139] = HAnimSegment490;

HAnimSegment HAnimSegment491 = createNode("HAnimSegment");
HAnimSegment491.USE = "hanim_l5";
HAnimHumanoid43.segments[140] = HAnimSegment491;

HAnimSegment HAnimSegment492 = createNode("HAnimSegment");
HAnimSegment492.USE = "hanim_sacrum";
HAnimHumanoid43.segments[141] = HAnimSegment492;

HAnimSegment HAnimSegment493 = createNode("HAnimSegment");
HAnimSegment493.USE = "hanim_l_calf";
HAnimHumanoid43.segments[142] = HAnimSegment493;

HAnimSegment HAnimSegment494 = createNode("HAnimSegment");
HAnimSegment494.USE = "hanim_r_calf";
HAnimHumanoid43.segments[143] = HAnimSegment494;

HAnimSegment HAnimSegment495 = createNode("HAnimSegment");
HAnimSegment495.USE = "hanim_l_carpal";
HAnimHumanoid43.segments[144] = HAnimSegment495;

HAnimSegment HAnimSegment496 = createNode("HAnimSegment");
HAnimSegment496.USE = "hanim_r_carpal";
HAnimHumanoid43.segments[145] = HAnimSegment496;

HAnimSegment HAnimSegment497 = createNode("HAnimSegment");
HAnimSegment497.USE = "hanim_l_carpal_distal_phalanx_1";
HAnimHumanoid43.segments[146] = HAnimSegment497;

HAnimSegment HAnimSegment498 = createNode("HAnimSegment");
HAnimSegment498.USE = "hanim_r_carpal_distal_phalanx_1";
HAnimHumanoid43.segments[147] = HAnimSegment498;

HAnimSegment HAnimSegment499 = createNode("HAnimSegment");
HAnimSegment499.USE = "hanim_l_carpal_distal_phalanx_2";
HAnimHumanoid43.segments[148] = HAnimSegment499;

HAnimSegment HAnimSegment500 = createNode("HAnimSegment");
HAnimSegment500.USE = "hanim_r_carpal_distal_phalanx_2";
HAnimHumanoid43.segments[149] = HAnimSegment500;

HAnimSegment HAnimSegment501 = createNode("HAnimSegment");
HAnimSegment501.USE = "hanim_l_carpal_distal_phalanx_3";
HAnimHumanoid43.segments[150] = HAnimSegment501;

HAnimSegment HAnimSegment502 = createNode("HAnimSegment");
HAnimSegment502.USE = "hanim_r_carpal_distal_phalanx_3";
HAnimHumanoid43.segments[151] = HAnimSegment502;

HAnimSegment HAnimSegment503 = createNode("HAnimSegment");
HAnimSegment503.USE = "hanim_l_carpal_distal_phalanx_4";
HAnimHumanoid43.segments[152] = HAnimSegment503;

HAnimSegment HAnimSegment504 = createNode("HAnimSegment");
HAnimSegment504.USE = "hanim_r_carpal_distal_phalanx_4";
HAnimHumanoid43.segments[153] = HAnimSegment504;

HAnimSegment HAnimSegment505 = createNode("HAnimSegment");
HAnimSegment505.USE = "hanim_l_carpal_distal_phalanx_5";
HAnimHumanoid43.segments[154] = HAnimSegment505;

HAnimSegment HAnimSegment506 = createNode("HAnimSegment");
HAnimSegment506.USE = "hanim_r_carpal_distal_phalanx_5";
HAnimHumanoid43.segments[155] = HAnimSegment506;

HAnimSegment HAnimSegment507 = createNode("HAnimSegment");
HAnimSegment507.USE = "hanim_l_carpal_middle_phalanx_2";
HAnimHumanoid43.segments[156] = HAnimSegment507;

HAnimSegment HAnimSegment508 = createNode("HAnimSegment");
HAnimSegment508.USE = "hanim_r_carpal_middle_phalanx_2";
HAnimHumanoid43.segments[157] = HAnimSegment508;

HAnimSegment HAnimSegment509 = createNode("HAnimSegment");
HAnimSegment509.USE = "hanim_l_carpal_middle_phalanx_3";
HAnimHumanoid43.segments[158] = HAnimSegment509;

HAnimSegment HAnimSegment510 = createNode("HAnimSegment");
HAnimSegment510.USE = "hanim_r_carpal_middle_phalanx_3";
HAnimHumanoid43.segments[159] = HAnimSegment510;

HAnimSegment HAnimSegment511 = createNode("HAnimSegment");
HAnimSegment511.USE = "hanim_l_carpal_middle_phalanx_4";
HAnimHumanoid43.segments[160] = HAnimSegment511;

HAnimSegment HAnimSegment512 = createNode("HAnimSegment");
HAnimSegment512.USE = "hanim_r_carpal_middle_phalanx_4";
HAnimHumanoid43.segments[161] = HAnimSegment512;

HAnimSegment HAnimSegment513 = createNode("HAnimSegment");
HAnimSegment513.USE = "hanim_l_carpal_middle_phalanx_5";
HAnimHumanoid43.segments[162] = HAnimSegment513;

HAnimSegment HAnimSegment514 = createNode("HAnimSegment");
HAnimSegment514.USE = "hanim_r_carpal_middle_phalanx_5";
HAnimHumanoid43.segments[163] = HAnimSegment514;

HAnimSegment HAnimSegment515 = createNode("HAnimSegment");
HAnimSegment515.USE = "hanim_l_carpal_proximal_phalanx_1";
HAnimHumanoid43.segments[164] = HAnimSegment515;

HAnimSegment HAnimSegment516 = createNode("HAnimSegment");
HAnimSegment516.USE = "hanim_r_carpal_proximal_phalanx_1";
HAnimHumanoid43.segments[165] = HAnimSegment516;

HAnimSegment HAnimSegment517 = createNode("HAnimSegment");
HAnimSegment517.USE = "hanim_l_carpal_proximal_phalanx_2";
HAnimHumanoid43.segments[166] = HAnimSegment517;

HAnimSegment HAnimSegment518 = createNode("HAnimSegment");
HAnimSegment518.USE = "hanim_r_carpal_proximal_phalanx_2";
HAnimHumanoid43.segments[167] = HAnimSegment518;

HAnimSegment HAnimSegment519 = createNode("HAnimSegment");
HAnimSegment519.USE = "hanim_l_carpal_proximal_phalanx_3";
HAnimHumanoid43.segments[168] = HAnimSegment519;

HAnimSegment HAnimSegment520 = createNode("HAnimSegment");
HAnimSegment520.USE = "hanim_r_carpal_proximal_phalanx_3";
HAnimHumanoid43.segments[169] = HAnimSegment520;

HAnimSegment HAnimSegment521 = createNode("HAnimSegment");
HAnimSegment521.USE = "hanim_l_carpal_proximal_phalanx_4";
HAnimHumanoid43.segments[170] = HAnimSegment521;

HAnimSegment HAnimSegment522 = createNode("HAnimSegment");
HAnimSegment522.USE = "hanim_r_carpal_proximal_phalanx_4";
HAnimHumanoid43.segments[171] = HAnimSegment522;

HAnimSegment HAnimSegment523 = createNode("HAnimSegment");
HAnimSegment523.USE = "hanim_l_carpal_proximal_phalanx_5";
HAnimHumanoid43.segments[172] = HAnimSegment523;

HAnimSegment HAnimSegment524 = createNode("HAnimSegment");
HAnimSegment524.USE = "hanim_r_carpal_proximal_phalanx_5";
HAnimHumanoid43.segments[173] = HAnimSegment524;

HAnimSegment HAnimSegment525 = createNode("HAnimSegment");
HAnimSegment525.USE = "hanim_l_clavicle";
HAnimHumanoid43.segments[174] = HAnimSegment525;

HAnimSegment HAnimSegment526 = createNode("HAnimSegment");
HAnimSegment526.USE = "hanim_r_clavicle";
HAnimHumanoid43.segments[175] = HAnimSegment526;

HAnimSegment HAnimSegment527 = createNode("HAnimSegment");
HAnimSegment527.USE = "hanim_l_eyeball";
HAnimHumanoid43.segments[176] = HAnimSegment527;

HAnimSegment HAnimSegment528 = createNode("HAnimSegment");
HAnimSegment528.USE = "hanim_r_eyeball";
HAnimHumanoid43.segments[177] = HAnimSegment528;

HAnimSegment HAnimSegment529 = createNode("HAnimSegment");
HAnimSegment529.USE = "hanim_l_eyebrow";
HAnimHumanoid43.segments[178] = HAnimSegment529;

HAnimSegment HAnimSegment530 = createNode("HAnimSegment");
HAnimSegment530.USE = "hanim_r_eyebrow";
HAnimHumanoid43.segments[179] = HAnimSegment530;

HAnimSegment HAnimSegment531 = createNode("HAnimSegment");
HAnimSegment531.USE = "hanim_l_eyelid";
HAnimHumanoid43.segments[180] = HAnimSegment531;

HAnimSegment HAnimSegment532 = createNode("HAnimSegment");
HAnimSegment532.USE = "hanim_r_eyelid";
HAnimHumanoid43.segments[181] = HAnimSegment532;

HAnimSegment HAnimSegment533 = createNode("HAnimSegment");
HAnimSegment533.USE = "hanim_l_forearm";
HAnimHumanoid43.segments[182] = HAnimSegment533;

HAnimSegment HAnimSegment534 = createNode("HAnimSegment");
HAnimSegment534.USE = "hanim_r_forearm";
HAnimHumanoid43.segments[183] = HAnimSegment534;

HAnimSegment HAnimSegment535 = createNode("HAnimSegment");
HAnimSegment535.USE = "hanim_l_metacarpal_1";
HAnimHumanoid43.segments[184] = HAnimSegment535;

HAnimSegment HAnimSegment536 = createNode("HAnimSegment");
HAnimSegment536.USE = "hanim_r_metacarpal_1";
HAnimHumanoid43.segments[185] = HAnimSegment536;

HAnimSegment HAnimSegment537 = createNode("HAnimSegment");
HAnimSegment537.USE = "hanim_l_metacarpal_2";
HAnimHumanoid43.segments[186] = HAnimSegment537;

HAnimSegment HAnimSegment538 = createNode("HAnimSegment");
HAnimSegment538.USE = "hanim_r_metacarpal_2";
HAnimHumanoid43.segments[187] = HAnimSegment538;

HAnimSegment HAnimSegment539 = createNode("HAnimSegment");
HAnimSegment539.USE = "hanim_l_metacarpal_3";
HAnimHumanoid43.segments[188] = HAnimSegment539;

HAnimSegment HAnimSegment540 = createNode("HAnimSegment");
HAnimSegment540.USE = "hanim_r_metacarpal_3";
HAnimHumanoid43.segments[189] = HAnimSegment540;

HAnimSegment HAnimSegment541 = createNode("HAnimSegment");
HAnimSegment541.USE = "hanim_l_metacarpal_4";
HAnimHumanoid43.segments[190] = HAnimSegment541;

HAnimSegment HAnimSegment542 = createNode("HAnimSegment");
HAnimSegment542.USE = "hanim_r_metacarpal_4";
HAnimHumanoid43.segments[191] = HAnimSegment542;

HAnimSegment HAnimSegment543 = createNode("HAnimSegment");
HAnimSegment543.USE = "hanim_l_metacarpal_5";
HAnimHumanoid43.segments[192] = HAnimSegment543;

HAnimSegment HAnimSegment544 = createNode("HAnimSegment");
HAnimSegment544.USE = "hanim_r_metacarpal_5";
HAnimHumanoid43.segments[193] = HAnimSegment544;

HAnimSegment HAnimSegment545 = createNode("HAnimSegment");
HAnimSegment545.USE = "hanim_l_metatarsal_2";
HAnimHumanoid43.segments[194] = HAnimSegment545;

HAnimSegment HAnimSegment546 = createNode("HAnimSegment");
HAnimSegment546.USE = "hanim_r_metatarsal_2";
HAnimHumanoid43.segments[195] = HAnimSegment546;

HAnimSegment HAnimSegment547 = createNode("HAnimSegment");
HAnimSegment547.USE = "hanim_l_scapula";
HAnimHumanoid43.segments[196] = HAnimSegment547;

HAnimSegment HAnimSegment548 = createNode("HAnimSegment");
HAnimSegment548.USE = "hanim_r_scapula";
HAnimHumanoid43.segments[197] = HAnimSegment548;

HAnimSegment HAnimSegment549 = createNode("HAnimSegment");
HAnimSegment549.USE = "hanim_l_talus";
HAnimHumanoid43.segments[198] = HAnimSegment549;

HAnimSegment HAnimSegment550 = createNode("HAnimSegment");
HAnimSegment550.USE = "hanim_r_talus";
HAnimHumanoid43.segments[199] = HAnimSegment550;

HAnimSegment HAnimSegment551 = createNode("HAnimSegment");
HAnimSegment551.USE = "hanim_l_tarsal_distal_phalanx_2";
HAnimHumanoid43.segments[200] = HAnimSegment551;

HAnimSegment HAnimSegment552 = createNode("HAnimSegment");
HAnimSegment552.USE = "hanim_r_tarsal_distal_phalanx_2";
HAnimHumanoid43.segments[201] = HAnimSegment552;

HAnimSegment HAnimSegment553 = createNode("HAnimSegment");
HAnimSegment553.USE = "hanim_l_tarsal_proximal_phalanx_2";
HAnimHumanoid43.segments[202] = HAnimSegment553;

HAnimSegment HAnimSegment554 = createNode("HAnimSegment");
HAnimSegment554.USE = "hanim_r_tarsal_proximal_phalanx_2";
HAnimHumanoid43.segments[203] = HAnimSegment554;

HAnimSegment HAnimSegment555 = createNode("HAnimSegment");
HAnimSegment555.USE = "hanim_l_thigh";
HAnimHumanoid43.segments[204] = HAnimSegment555;

HAnimSegment HAnimSegment556 = createNode("HAnimSegment");
HAnimSegment556.USE = "hanim_r_thigh";
HAnimHumanoid43.segments[205] = HAnimSegment556;

HAnimSegment HAnimSegment557 = createNode("HAnimSegment");
HAnimSegment557.USE = "hanim_l_upperarm";
HAnimHumanoid43.segments[206] = HAnimSegment557;

HAnimSegment HAnimSegment558 = createNode("HAnimSegment");
HAnimSegment558.USE = "hanim_r_upperarm";
HAnimHumanoid43.segments[207] = HAnimSegment558;

HAnimSite HAnimSite559 = createNode("HAnimSite");
HAnimSite559.USE = "hanim_crotch_pt";
HAnimHumanoid43.viewpoints[208] = HAnimSite559;

HAnimSite HAnimSite560 = createNode("HAnimSite");
HAnimSite560.USE = "hanim_skull_vertex_tip";
HAnimHumanoid43.viewpoints[209] = HAnimSite560;

HAnimSite HAnimSite561 = createNode("HAnimSite");
HAnimSite561.USE = "hanim_sellion_pt";
HAnimHumanoid43.viewpoints[210] = HAnimSite561;

HAnimSite HAnimSite562 = createNode("HAnimSite");
HAnimSite562.USE = "hanim_supramenton_pt";
HAnimHumanoid43.viewpoints[211] = HAnimSite562;

HAnimSite HAnimSite563 = createNode("HAnimSite");
HAnimSite563.USE = "hanim_nuchale_pt";
HAnimHumanoid43.viewpoints[212] = HAnimSite563;

HAnimSite HAnimSite564 = createNode("HAnimSite");
HAnimSite564.USE = "hanim_suprasternale_pt";
HAnimHumanoid43.viewpoints[213] = HAnimSite564;

HAnimSite HAnimSite565 = createNode("HAnimSite");
HAnimSite565.USE = "hanim_cervicale_pt";
HAnimHumanoid43.viewpoints[214] = HAnimSite565;

HAnimSite HAnimSite566 = createNode("HAnimSite");
HAnimSite566.USE = "hanim_substernale_pt";
HAnimHumanoid43.viewpoints[215] = HAnimSite566;

HAnimSite HAnimSite567 = createNode("HAnimSite");
HAnimSite567.USE = "hanim_rib10_midspine_pt";
HAnimHumanoid43.viewpoints[216] = HAnimSite567;

HAnimSite HAnimSite568 = createNode("HAnimSite");
HAnimSite568.USE = "hanim_waist_preferred_posterior_pt";
HAnimHumanoid43.viewpoints[217] = HAnimSite568;

HAnimSite HAnimSite569 = createNode("HAnimSite");
HAnimSite569.USE = "hanim_navel_pt";
HAnimHumanoid43.viewpoints[218] = HAnimSite569;

HAnimSite HAnimSite570 = createNode("HAnimSite");
HAnimSite570.USE = "hanim_l_acromion_pt";
HAnimHumanoid43.viewpoints[219] = HAnimSite570;

HAnimSite HAnimSite571 = createNode("HAnimSite");
HAnimSite571.USE = "hanim_r_acromion_pt";
HAnimHumanoid43.viewpoints[220] = HAnimSite571;

HAnimSite HAnimSite572 = createNode("HAnimSite");
HAnimSite572.USE = "hanim_r_asis_pt";
HAnimHumanoid43.viewpoints[221] = HAnimSite572;

HAnimSite HAnimSite573 = createNode("HAnimSite");
HAnimSite573.USE = "hanim_l_asis_pt";
HAnimHumanoid43.viewpoints[222] = HAnimSite573;

HAnimSite HAnimSite574 = createNode("HAnimSite");
HAnimSite574.USE = "hanim_l_axilla_distal_pt";
HAnimHumanoid43.viewpoints[223] = HAnimSite574;

HAnimSite HAnimSite575 = createNode("HAnimSite");
HAnimSite575.USE = "hanim_r_axilla_distal_pt";
HAnimHumanoid43.viewpoints[224] = HAnimSite575;

HAnimSite HAnimSite576 = createNode("HAnimSite");
HAnimSite576.USE = "hanim_l_axilla_proximal_pt";
HAnimHumanoid43.viewpoints[225] = HAnimSite576;

HAnimSite HAnimSite577 = createNode("HAnimSite");
HAnimSite577.USE = "hanim_r_axilla_proximal_pt";
HAnimHumanoid43.viewpoints[226] = HAnimSite577;

HAnimSite HAnimSite578 = createNode("HAnimSite");
HAnimSite578.USE = "hanim_l_calcaneus_posterior_pt";
HAnimHumanoid43.viewpoints[227] = HAnimSite578;

HAnimSite HAnimSite579 = createNode("HAnimSite");
HAnimSite579.USE = "hanim_r_calcaneus_posterior_pt";
HAnimHumanoid43.viewpoints[228] = HAnimSite579;

HAnimSite HAnimSite580 = createNode("HAnimSite");
HAnimSite580.USE = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[229] = HAnimSite580;

HAnimSite HAnimSite581 = createNode("HAnimSite");
HAnimSite581.USE = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[230] = HAnimSite581;

HAnimSite HAnimSite582 = createNode("HAnimSite");
HAnimSite582.USE = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[231] = HAnimSite582;

HAnimSite HAnimSite583 = createNode("HAnimSite");
HAnimSite583.USE = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[232] = HAnimSite583;

HAnimSite HAnimSite584 = createNode("HAnimSite");
HAnimSite584.USE = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[233] = HAnimSite584;

HAnimSite HAnimSite585 = createNode("HAnimSite");
HAnimSite585.USE = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[234] = HAnimSite585;

HAnimSite HAnimSite586 = createNode("HAnimSite");
HAnimSite586.USE = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[235] = HAnimSite586;

HAnimSite HAnimSite587 = createNode("HAnimSite");
HAnimSite587.USE = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[236] = HAnimSite587;

HAnimSite HAnimSite588 = createNode("HAnimSite");
HAnimSite588.USE = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[237] = HAnimSite588;

HAnimSite HAnimSite589 = createNode("HAnimSite");
HAnimSite589.USE = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[238] = HAnimSite589;

HAnimSite HAnimSite590 = createNode("HAnimSite");
HAnimSite590.USE = "hanim_l_clavicle_pt";
HAnimHumanoid43.viewpoints[239] = HAnimSite590;

HAnimSite HAnimSite591 = createNode("HAnimSite");
HAnimSite591.USE = "hanim_r_clavicle_pt";
HAnimHumanoid43.viewpoints[240] = HAnimSite591;

HAnimSite HAnimSite592 = createNode("HAnimSite");
HAnimSite592.USE = "hanim_l_dactylion_pt";
HAnimHumanoid43.viewpoints[241] = HAnimSite592;

HAnimSite HAnimSite593 = createNode("HAnimSite");
HAnimSite593.USE = "hanim_r_dactylion_pt";
HAnimHumanoid43.viewpoints[242] = HAnimSite593;

HAnimSite HAnimSite594 = createNode("HAnimSite");
HAnimSite594.USE = "hanim_l_femoral_lateral_epicondyle_pt";
HAnimHumanoid43.viewpoints[243] = HAnimSite594;

HAnimSite HAnimSite595 = createNode("HAnimSite");
HAnimSite595.USE = "hanim_r_femoral_lateral_epicondyle_pt";
HAnimHumanoid43.viewpoints[244] = HAnimSite595;

HAnimSite HAnimSite596 = createNode("HAnimSite");
HAnimSite596.USE = "hanim_l_femoral_medial_epicondyle_pt";
HAnimHumanoid43.viewpoints[245] = HAnimSite596;

HAnimSite HAnimSite597 = createNode("HAnimSite");
HAnimSite597.USE = "hanim_r_femoral_medial_epicondyle_pt";
HAnimHumanoid43.viewpoints[246] = HAnimSite597;

HAnimSite HAnimSite598 = createNode("HAnimSite");
HAnimSite598.USE = "hanim_l_forefoot_tip";
HAnimHumanoid43.viewpoints[247] = HAnimSite598;

HAnimSite HAnimSite599 = createNode("HAnimSite");
HAnimSite599.USE = "hanim_r_forefoot_tip";
HAnimHumanoid43.viewpoints[248] = HAnimSite599;

HAnimSite HAnimSite600 = createNode("HAnimSite");
HAnimSite600.USE = "hanim_r_gonion_pt";
HAnimHumanoid43.viewpoints[249] = HAnimSite600;

HAnimSite HAnimSite601 = createNode("HAnimSite");
HAnimSite601.USE = "hanim_l_gonion_pt";
HAnimHumanoid43.viewpoints[250] = HAnimSite601;

HAnimSite HAnimSite602 = createNode("HAnimSite");
HAnimSite602.USE = "hanim_l_humeral_lateral_epicondyle_pt";
HAnimHumanoid43.viewpoints[251] = HAnimSite602;

HAnimSite HAnimSite603 = createNode("HAnimSite");
HAnimSite603.USE = "hanim_r_humeral_lateral_epicondyle_pt";
HAnimHumanoid43.viewpoints[252] = HAnimSite603;

HAnimSite HAnimSite604 = createNode("HAnimSite");
HAnimSite604.USE = "hanim_l_humeral_medial_epicondyle_pt";
HAnimHumanoid43.viewpoints[253] = HAnimSite604;

HAnimSite HAnimSite605 = createNode("HAnimSite");
HAnimSite605.USE = "hanim_r_humeral_medial_epicondyle_pt";
HAnimHumanoid43.viewpoints[254] = HAnimSite605;

HAnimSite HAnimSite606 = createNode("HAnimSite");
HAnimSite606.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid43.viewpoints[255] = HAnimSite606;

HAnimSite HAnimSite607 = createNode("HAnimSite");
HAnimSite607.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid43.viewpoints[256] = HAnimSite607;

HAnimSite HAnimSite608 = createNode("HAnimSite");
HAnimSite608.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid43.viewpoints[257] = HAnimSite608;

HAnimSite HAnimSite609 = createNode("HAnimSite");
HAnimSite609.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid43.viewpoints[258] = HAnimSite609;

HAnimSite HAnimSite610 = createNode("HAnimSite");
HAnimSite610.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid43.viewpoints[259] = HAnimSite610;

HAnimSite HAnimSite611 = createNode("HAnimSite");
HAnimSite611.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid43.viewpoints[260] = HAnimSite611;

HAnimSite HAnimSite612 = createNode("HAnimSite");
HAnimSite612.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid43.viewpoints[261] = HAnimSite612;

HAnimSite HAnimSite613 = createNode("HAnimSite");
HAnimSite613.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid43.viewpoints[262] = HAnimSite613;

HAnimSite HAnimSite614 = createNode("HAnimSite");
HAnimSite614.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid43.viewpoints[263] = HAnimSite614;

HAnimSite HAnimSite615 = createNode("HAnimSite");
HAnimSite615.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid43.viewpoints[264] = HAnimSite615;

HAnimSite HAnimSite616 = createNode("HAnimSite");
HAnimSite616.USE = "hanim_l_metacarpal_phalanx_2_pt";
HAnimHumanoid43.viewpoints[265] = HAnimSite616;

HAnimSite HAnimSite617 = createNode("HAnimSite");
HAnimSite617.USE = "hanim_r_metacarpal_phalanx_2_pt";
HAnimHumanoid43.viewpoints[266] = HAnimSite617;

HAnimSite HAnimSite618 = createNode("HAnimSite");
HAnimSite618.USE = "hanim_l_metacarpal_phalanx_5_pt";
HAnimHumanoid43.viewpoints[267] = HAnimSite618;

HAnimSite HAnimSite619 = createNode("HAnimSite");
HAnimSite619.USE = "hanim_r_metacarpal_phalanx_5_pt";
HAnimHumanoid43.viewpoints[268] = HAnimSite619;

HAnimSite HAnimSite620 = createNode("HAnimSite");
HAnimSite620.USE = "hanim_l_metatarsal_phalanx_1_pt";
HAnimHumanoid43.viewpoints[269] = HAnimSite620;

HAnimSite HAnimSite621 = createNode("HAnimSite");
HAnimSite621.USE = "hanim_r_metatarsal_phalanx_1_pt";
HAnimHumanoid43.viewpoints[270] = HAnimSite621;

HAnimSite HAnimSite622 = createNode("HAnimSite");
HAnimSite622.USE = "hanim_l_metatarsal_phalanx_5_pt";
HAnimHumanoid43.viewpoints[271] = HAnimSite622;

HAnimSite HAnimSite623 = createNode("HAnimSite");
HAnimSite623.USE = "hanim_r_metatarsal_phalanx_5_pt";
HAnimHumanoid43.viewpoints[272] = HAnimSite623;

HAnimSite HAnimSite624 = createNode("HAnimSite");
HAnimSite624.USE = "hanim_r_neck_base_pt";
HAnimHumanoid43.viewpoints[273] = HAnimSite624;

HAnimSite HAnimSite625 = createNode("HAnimSite");
HAnimSite625.USE = "hanim_l_neck_base_pt";
HAnimHumanoid43.viewpoints[274] = HAnimSite625;

HAnimSite HAnimSite626 = createNode("HAnimSite");
HAnimSite626.USE = "hanim_l_olecranon_pt";
HAnimHumanoid43.viewpoints[275] = HAnimSite626;

HAnimSite HAnimSite627 = createNode("HAnimSite");
HAnimSite627.USE = "hanim_r_olecranon_pt";
HAnimHumanoid43.viewpoints[276] = HAnimSite627;

HAnimSite HAnimSite628 = createNode("HAnimSite");
HAnimSite628.USE = "hanim_r_psis_pt";
HAnimHumanoid43.viewpoints[277] = HAnimSite628;

HAnimSite HAnimSite629 = createNode("HAnimSite");
HAnimSite629.USE = "hanim_l_psis_pt";
HAnimHumanoid43.viewpoints[278] = HAnimSite629;

HAnimSite HAnimSite630 = createNode("HAnimSite");
HAnimSite630.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid43.viewpoints[279] = HAnimSite630;

HAnimSite HAnimSite631 = createNode("HAnimSite");
HAnimSite631.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid43.viewpoints[280] = HAnimSite631;

HAnimSite HAnimSite632 = createNode("HAnimSite");
HAnimSite632.USE = "hanim_l_radiale_pt";
HAnimHumanoid43.viewpoints[281] = HAnimSite632;

HAnimSite HAnimSite633 = createNode("HAnimSite");
HAnimSite633.USE = "hanim_r_radiale_pt";
HAnimHumanoid43.viewpoints[282] = HAnimSite633;

HAnimSite HAnimSite634 = createNode("HAnimSite");
HAnimSite634.USE = "hanim_r_rib10_pt";
HAnimHumanoid43.viewpoints[283] = HAnimSite634;

HAnimSite HAnimSite635 = createNode("HAnimSite");
HAnimSite635.USE = "hanim_l_rib10_pt";
HAnimHumanoid43.viewpoints[284] = HAnimSite635;

HAnimSite HAnimSite636 = createNode("HAnimSite");
HAnimSite636.USE = "hanim_temporomandibular_l_site_pt";
HAnimHumanoid43.viewpoints[285] = HAnimSite636;

HAnimSite HAnimSite637 = createNode("HAnimSite");
HAnimSite637.USE = "hanim_temporomandibular_r_site_pt";
HAnimHumanoid43.viewpoints[286] = HAnimSite637;

HAnimSite HAnimSite638 = createNode("HAnimSite");
HAnimSite638.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid43.viewpoints[287] = HAnimSite638;

HAnimSite HAnimSite639 = createNode("HAnimSite");
HAnimSite639.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid43.viewpoints[288] = HAnimSite639;

HAnimSite HAnimSite640 = createNode("HAnimSite");
HAnimSite640.USE = "hanim_l_tarsal_distal_phalanx_2_pt";
HAnimHumanoid43.viewpoints[289] = HAnimSite640;

HAnimSite HAnimSite641 = createNode("HAnimSite");
HAnimSite641.USE = "hanim_r_tarsal_distal_phalanx_2_pt";
HAnimHumanoid43.viewpoints[290] = HAnimSite641;

HAnimSite HAnimSite642 = createNode("HAnimSite");
HAnimSite642.USE = "hanim_r_thelion_pt";
HAnimHumanoid43.viewpoints[291] = HAnimSite642;

HAnimSite HAnimSite643 = createNode("HAnimSite");
HAnimSite643.USE = "hanim_l_thelion_pt";
HAnimHumanoid43.viewpoints[292] = HAnimSite643;

HAnimSite HAnimSite644 = createNode("HAnimSite");
HAnimSite644.USE = "hanim_r_tragion_pt";
HAnimHumanoid43.viewpoints[293] = HAnimSite644;

HAnimSite HAnimSite645 = createNode("HAnimSite");
HAnimSite645.USE = "hanim_l_tragion_pt";
HAnimHumanoid43.viewpoints[294] = HAnimSite645;

HAnimSite HAnimSite646 = createNode("HAnimSite");
HAnimSite646.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid43.viewpoints[295] = HAnimSite646;

HAnimSite HAnimSite647 = createNode("HAnimSite");
HAnimSite647.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid43.viewpoints[296] = HAnimSite647;

HAnimSite HAnimSite648 = createNode("HAnimSite");
HAnimSite648.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid43.viewpoints[297] = HAnimSite648;

HAnimSite HAnimSite649 = createNode("HAnimSite");
HAnimSite649.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid43.viewpoints[298] = HAnimSite649;

children[12] = HAnimHumanoid43;

}

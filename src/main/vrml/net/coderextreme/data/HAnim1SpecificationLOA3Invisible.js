let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
let component2 = browser.currentScene.createNode("component");
component2.name = "H-Anim";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "title";
meta3.content = "HAnim1SpecificationLOA3Invisible.x3d";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "description";
meta4.content = "HAnim Specification reference example providing full coverage (and no illustrated visibility) of all specified HAnim constructs, also suitable for re-use as an authoring template.";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "reference";
meta5.content = "https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "created";
meta6.content = "24 April 2013";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "modified";
meta7.content = "19 February 2021";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "creator";
meta8.content = "Matthew T. Beitler, Joe D. Williams, Don Brutzman";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "reference";
meta9.content = "HAnim1SpecificationLOA3Illustrated.x3d";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "reference";
meta10.content = "HAnim1SpecificationLOA3Animation.x3d";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "reference";
meta11.content = "HAnimSpecificationExampleChangeLog.txt";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "Image";
meta12.content = "images/BonesAllSkeletonFrontViewLOA1.png";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "Image";
meta13.content = "images/BonesAllSkeletonFrontViewLOA2.png";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "Image";
meta14.content = "images/BonesAllSkeletonFrontViewLOA3.png";
head1.meta[12] = meta14;

let meta15 = browser.currentScene.createNode("meta");
meta15.name = "TODO";
meta15.content = "move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations";
head1.meta[13] = meta15;

let meta16 = browser.currentScene.createNode("meta");
meta16.name = "TODO";
meta16.content = "insert MetadataInteger nodes indicating LOA for each Joint and Segment";
head1.meta[14] = meta16;

let meta17 = browser.currentScene.createNode("meta");
meta17.name = "reference";
meta17.content = "Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.";
head1.meta[15] = meta17;

let meta18 = browser.currentScene.createNode("meta");
meta18.name = "reference";
meta18.content = "http://www.cis.upenn.edu/~badler/anthro/89-71.ps";
head1.meta[16] = meta18;

let meta19 = browser.currentScene.createNode("meta");
meta19.name = "reference";
meta19.content = "tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf";
head1.meta[17] = meta19;

let meta20 = browser.currentScene.createNode("meta");
meta20.name = "translator";
meta20.content = "Don Brutzman and Joe Williams";
head1.meta[18] = meta20;

let meta21 = browser.currentScene.createNode("meta");
meta21.name = "generator";
meta21.content = "BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo";
head1.meta[19] = meta21;

let meta22 = browser.currentScene.createNode("meta");
meta22.name = "reference";
meta22.content = "originals/LOA3ExampleSourceWithDiamondsOriginal.wrl";
head1.meta[20] = meta22;

let meta23 = browser.currentScene.createNode("meta");
meta23.name = "reference";
meta23.content = "originals/LOA3ExampleSourceWithDiamondsOriginal.x3d";
head1.meta[21] = meta23;

let meta24 = browser.currentScene.createNode("meta");
meta24.name = "reference";
meta24.content = "originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d";
head1.meta[22] = meta24;

let meta25 = browser.currentScene.createNode("meta");
meta25.name = "reference";
meta25.content = "HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames";
head1.meta[23] = meta25;

let meta26 = browser.currentScene.createNode("meta");
meta26.name = "generator";
meta26.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[24] = meta26;

let meta27 = browser.currentScene.createNode("meta");
meta27.name = "identifier";
meta27.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/HAnim1SpecificationLOA3Invisible.x3d";
head1.meta[25] = meta27;

let meta28 = browser.currentScene.createNode("meta");
meta28.name = "license";
meta28.content = "../license.html";
head1.meta[26] = meta28;

head = head1;

let Background30 = browser.currentScene.createNode("Background");
Background30.skyColor = new MFColor(new float[0.3,0.3,0.3]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Background30;

let NavigationInfo31 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children[1] = NavigationInfo31;

let Group32 = browser.currentScene.createNode("Group");
Group32.DEF = "Original_WorldInfo";
let WorldInfo33 = browser.currentScene.createNode("WorldInfo");
WorldInfo33.info = new MFString(new java.lang.String[" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "]);
WorldInfo33.title = "HANIM 200x Default Joint Centers, LOA3";
Group32.children = new MFNode();

Group32.children[0] = WorldInfo33;

browser.currentScene.children[2] = Group32;

//TODO move viewpoints to be internal to HAnimHumanoid
//Viewpoint centerOfRotation=\"0 0.9149 0.0016\" matches initial at-rest locaton of the sacroliac. Note that these viewpoints are external to the HAnimHumanoid and do not move with the human.
let Viewpoint34 = browser.currentScene.createNode("Viewpoint");
Viewpoint34.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint34.description = "Humanoid LOA 3 Front";
Viewpoint34.position = new SFVec3f(new float[0,0.4,4]);
browser.currentScene.children[3] = Viewpoint34;

let Viewpoint35 = browser.currentScene.createNode("Viewpoint");
Viewpoint35.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint35.description = "Humanoid LOA 3 Front Close";
Viewpoint35.position = new SFVec3f(new float[0,0.8,2]);
browser.currentScene.children[4] = Viewpoint35;

let Viewpoint36 = browser.currentScene.createNode("Viewpoint");
Viewpoint36.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint36.description = "Humanoid LOA 3 Front Closer";
Viewpoint36.position = new SFVec3f(new float[0,1.2,1]);
browser.currentScene.children[5] = Viewpoint36;

let Viewpoint37 = browser.currentScene.createNode("Viewpoint");
Viewpoint37.centerOfRotation = new SFVec3f(new float[0,1.5,0.0016]);
Viewpoint37.description = "Humanoid LOA 3 Front Face";
Viewpoint37.position = new SFVec3f(new float[0,1.63,1]);
browser.currentScene.children[6] = Viewpoint37;

let Viewpoint38 = browser.currentScene.createNode("Viewpoint");
Viewpoint38.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint38.description = "Humanoid LOA 3 Right Side";
Viewpoint38.orientation = new SFRotation(new float[0,1,0,1.5708]);
Viewpoint38.position = new SFVec3f(new float[2.6,0.8,0]);
browser.currentScene.children[7] = Viewpoint38;

let Viewpoint39 = browser.currentScene.createNode("Viewpoint");
Viewpoint39.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint39.description = "Humanoid LOA 3 Right Side Close";
Viewpoint39.orientation = new SFRotation(new float[0,1,0,1.2]);
Viewpoint39.position = new SFVec3f(new float[1,0.8,0.5]);
browser.currentScene.children[8] = Viewpoint39;

let Viewpoint40 = browser.currentScene.createNode("Viewpoint");
Viewpoint40.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint40.description = "Humanoid LOA 3 Left Side Close";
Viewpoint40.orientation = new SFRotation(new float[0,1,0,-1.2]);
Viewpoint40.position = new SFVec3f(new float[-1,0.8,0.5]);
browser.currentScene.children[9] = Viewpoint40;

let Viewpoint41 = browser.currentScene.createNode("Viewpoint");
Viewpoint41.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint41.description = "Humanoid LOA 3 Left Side";
Viewpoint41.orientation = new SFRotation(new float[0,1,0,-1.5708]);
Viewpoint41.position = new SFVec3f(new float[-2.6,0.8,0]);
browser.currentScene.children[10] = Viewpoint41;

let Viewpoint42 = browser.currentScene.createNode("Viewpoint");
Viewpoint42.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint42.description = "Humanoid LOA 3 Top";
Viewpoint42.orientation = new SFRotation(new float[1,0,0,-1.5708]);
Viewpoint42.position = new SFVec3f(new float[0,3.5,0]);
browser.currentScene.children[11] = Viewpoint42;

let HAnimHumanoid43 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid43.name = "humanoid";
HAnimHumanoid43.DEF = "hanim_humanoid";
HAnimHumanoid43.info = new MFString(new java.lang.String["authorName=Matthew T. Beitler Joe D. Williams Don Brutzman","authorEmail=HAnim@web3D.org","copyright=none","creationDate=12 May 1999","usageRestrictions=none","humanoidVersion=1.0","height=1.7504"]);
HAnimHumanoid43.version = "1.0";
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
//right between the eyes, stationary position not animating except with body itself
let HAnimJoint44 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint44.name = "humanoid_root";
HAnimJoint44.DEF = "hanim_humanoid_root";
HAnimJoint44.center = new SFVec3f(new float[0,0.824,0.0277]);
HAnimJoint44.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint44.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment45 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment45.name = "sacrum";
HAnimSegment45.DEF = "hanim_sacrum";
HAnimJoint44.children = new MFNode();

HAnimJoint44.children[0] = HAnimSegment45;

let HAnimJoint46 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint46.name = "sacroiliac";
HAnimJoint46.DEF = "hanim_sacroiliac";
HAnimJoint46.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimJoint46.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint46.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment47 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment47.name = "pelvis";
HAnimSegment47.DEF = "hanim_pelvis";
let HAnimSite48 = browser.currentScene.createNode("HAnimSite");
HAnimSite48.name = "r_iliocristale_pt";
HAnimSite48.DEF = "hanim_r_iliocristale_pt";
HAnimSite48.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
HAnimSegment47.children = new MFNode();

HAnimSegment47.children[0] = HAnimSite48;

let HAnimSite49 = browser.currentScene.createNode("HAnimSite");
HAnimSite49.name = "r_trochanterion_pt";
HAnimSite49.DEF = "hanim_r_trochanterion_pt";
HAnimSite49.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
HAnimSegment47.children[1] = HAnimSite49;

let HAnimSite50 = browser.currentScene.createNode("HAnimSite");
HAnimSite50.name = "l_iliocristale_pt";
HAnimSite50.DEF = "hanim_l_iliocristale_pt";
HAnimSite50.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
HAnimSegment47.children[2] = HAnimSite50;

let HAnimSite51 = browser.currentScene.createNode("HAnimSite");
HAnimSite51.name = "l_trochanterion_pt";
HAnimSite51.DEF = "hanim_l_trochanterion_pt";
HAnimSite51.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
HAnimSegment47.children[3] = HAnimSite51;

let HAnimSite52 = browser.currentScene.createNode("HAnimSite");
HAnimSite52.name = "r_asis_pt";
HAnimSite52.DEF = "hanim_r_asis_pt";
HAnimSite52.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
HAnimSegment47.children[4] = HAnimSite52;

let HAnimSite53 = browser.currentScene.createNode("HAnimSite");
HAnimSite53.name = "l_asis_pt";
HAnimSite53.DEF = "hanim_l_asis_pt";
HAnimSite53.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
HAnimSegment47.children[5] = HAnimSite53;

let HAnimSite54 = browser.currentScene.createNode("HAnimSite");
HAnimSite54.name = "r_psis_pt";
HAnimSite54.DEF = "hanim_r_psis_pt";
HAnimSite54.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
HAnimSegment47.children[6] = HAnimSite54;

let HAnimSite55 = browser.currentScene.createNode("HAnimSite");
HAnimSite55.name = "l_psis_pt";
HAnimSite55.DEF = "hanim_l_psis_pt";
HAnimSite55.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
HAnimSegment47.children[7] = HAnimSite55;

let HAnimSite56 = browser.currentScene.createNode("HAnimSite");
HAnimSite56.name = "crotch_pt";
HAnimSite56.DEF = "hanim_crotch_pt";
HAnimSite56.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
HAnimSegment47.children[8] = HAnimSite56;

HAnimJoint46.children = new MFNode();

HAnimJoint46.children[0] = HAnimSegment47;

let HAnimJoint57 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint57.name = "l_hip";
HAnimJoint57.DEF = "hanim_l_hip";
HAnimJoint57.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimJoint57.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint57.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment58 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment58.name = "l_thigh";
HAnimSegment58.DEF = "hanim_l_thigh";
let HAnimSite59 = browser.currentScene.createNode("HAnimSite");
HAnimSite59.name = "l_knee_crease_pt";
HAnimSite59.DEF = "hanim_l_knee_crease_pt";
HAnimSite59.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
HAnimSegment58.children = new MFNode();

HAnimSegment58.children[0] = HAnimSite59;

let HAnimSite60 = browser.currentScene.createNode("HAnimSite");
HAnimSite60.name = "l_femoral_lateral_epicn_pt";
HAnimSite60.DEF = "hanim_l_femoral_lateral_epicn_pt";
HAnimSite60.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
HAnimSegment58.children[1] = HAnimSite60;

let HAnimSite61 = browser.currentScene.createNode("HAnimSite");
HAnimSite61.name = "l_femoral_medial_epicn_pt";
HAnimSite61.DEF = "hanim_l_femoral_medial_epicn_pt";
HAnimSite61.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
HAnimSegment58.children[2] = HAnimSite61;

HAnimJoint57.children = new MFNode();

HAnimJoint57.children[0] = HAnimSegment58;

let HAnimJoint62 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint62.name = "l_knee";
HAnimJoint62.DEF = "hanim_l_knee";
HAnimJoint62.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimJoint62.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint62.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment63 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment63.name = "l_calf";
HAnimSegment63.DEF = "hanim_l_calf";
HAnimJoint62.children = new MFNode();

HAnimJoint62.children[0] = HAnimSegment63;

let HAnimJoint64 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint64.name = "l_ankle";
HAnimJoint64.DEF = "hanim_l_ankle";
HAnimJoint64.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimJoint64.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint64.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment65 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment65.name = "l_hindfoot";
HAnimSegment65.DEF = "hanim_l_hindfoot";
let HAnimSite66 = browser.currentScene.createNode("HAnimSite");
HAnimSite66.name = "l_lateral_malleolus_pt";
HAnimSite66.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite66.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
HAnimSegment65.children = new MFNode();

HAnimSegment65.children[0] = HAnimSite66;

let HAnimSite67 = browser.currentScene.createNode("HAnimSite");
HAnimSite67.name = "l_medial_malleolus_pt";
HAnimSite67.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite67.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
HAnimSegment65.children[1] = HAnimSite67;

let HAnimSite68 = browser.currentScene.createNode("HAnimSite");
HAnimSite68.name = "l_sphyrion_pt";
HAnimSite68.DEF = "hanim_l_sphyrion_pt";
HAnimSite68.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
HAnimSegment65.children[2] = HAnimSite68;

let HAnimSite69 = browser.currentScene.createNode("HAnimSite");
HAnimSite69.name = "l_calcaneous_post_pt";
HAnimSite69.DEF = "hanim_l_calcaneous_post_pt";
HAnimSite69.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
HAnimSegment65.children[3] = HAnimSite69;

HAnimJoint64.children = new MFNode();

HAnimJoint64.children[0] = HAnimSegment65;

let HAnimJoint70 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint70.name = "l_subtalar";
HAnimJoint70.DEF = "hanim_l_subtalar";
HAnimJoint70.center = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
HAnimJoint70.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint70.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment71 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment71.name = "l_midproximal";
HAnimSegment71.DEF = "hanim_l_midproximal";
HAnimJoint70.children = new MFNode();

HAnimJoint70.children[0] = HAnimSegment71;

let HAnimJoint72 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint72.name = "l_midtarsal";
HAnimJoint72.DEF = "hanim_l_midtarsal";
HAnimJoint72.center = new SFVec3f(new float[0.1086,0.0001,0.0368]);
HAnimJoint72.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint72.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment73 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment73.name = "l_middistal";
HAnimSegment73.DEF = "hanim_l_middistal";
let HAnimSite74 = browser.currentScene.createNode("HAnimSite");
HAnimSite74.name = "l_metatarsal_pha1_pt";
HAnimSite74.DEF = "hanim_l_metatarsal_pha1_pt";
HAnimSite74.translation = new SFVec3f(new float[0.0816,0.0232,0.0106]);
HAnimSegment73.children = new MFNode();

HAnimSegment73.children[0] = HAnimSite74;

HAnimJoint72.children = new MFNode();

HAnimJoint72.children[0] = HAnimSegment73;

let HAnimJoint75 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint75.name = "l_metatarsal";
HAnimJoint75.DEF = "hanim_l_metatarsal";
HAnimJoint75.center = new SFVec3f(new float[0.1086,0,0.0762]);
HAnimJoint75.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint75.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment76 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment76.name = "l_forefoot";
HAnimSegment76.DEF = "hanim_l_forefoot";
let HAnimSite77 = browser.currentScene.createNode("HAnimSite");
HAnimSite77.name = "l_forefoot_tip";
HAnimSite77.DEF = "hanim_l_forefoot_tip";
HAnimSite77.translation = new SFVec3f(new float[0.1354,0.0016,0.1476]);
HAnimSegment76.children = new MFNode();

HAnimSegment76.children[0] = HAnimSite77;

let HAnimSite78 = browser.currentScene.createNode("HAnimSite");
HAnimSite78.name = "l_metatarsal_pha5_pt";
HAnimSite78.DEF = "hanim_l_metatarsal_pha5_pt";
HAnimSite78.translation = new SFVec3f(new float[0.1825,0.007,0.0928]);
HAnimSegment76.children[1] = HAnimSite78;

let HAnimSite79 = browser.currentScene.createNode("HAnimSite");
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

let HAnimJoint80 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint80.name = "r_hip";
HAnimJoint80.DEF = "hanim_r_hip";
HAnimJoint80.center = new SFVec3f(new float[-0.0961,0.9124,-0.0001]);
HAnimJoint80.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint80.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment81 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment81.name = "r_thigh";
HAnimSegment81.DEF = "hanim_r_thigh";
let HAnimSite82 = browser.currentScene.createNode("HAnimSite");
HAnimSite82.name = "r_knee_crease_pt";
HAnimSite82.DEF = "hanim_r_knee_crease_pt";
HAnimSite82.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
HAnimSegment81.children = new MFNode();

HAnimSegment81.children[0] = HAnimSite82;

let HAnimSite83 = browser.currentScene.createNode("HAnimSite");
HAnimSite83.name = "r_femoral_lateral_epicn_pt";
HAnimSite83.DEF = "hanim_r_femoral_lateral_epicn_pt";
HAnimSite83.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
HAnimSegment81.children[1] = HAnimSite83;

let HAnimSite84 = browser.currentScene.createNode("HAnimSite");
HAnimSite84.name = "r_femoral_medial_epicn_pt";
HAnimSite84.DEF = "hanim_r_femoral_medial_epicn_pt";
HAnimSite84.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
HAnimSegment81.children[2] = HAnimSite84;

HAnimJoint80.children = new MFNode();

HAnimJoint80.children[0] = HAnimSegment81;

let HAnimJoint85 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint85.name = "r_knee";
HAnimJoint85.DEF = "hanim_r_knee";
HAnimJoint85.center = new SFVec3f(new float[-0.104,0.4867,0.0308]);
HAnimJoint85.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint85.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment86 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment86.name = "r_calf";
HAnimSegment86.DEF = "hanim_r_calf";
HAnimJoint85.children = new MFNode();

HAnimJoint85.children[0] = HAnimSegment86;

let HAnimJoint87 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint87.name = "r_ankle";
HAnimJoint87.DEF = "hanim_r_ankle";
HAnimJoint87.center = new SFVec3f(new float[-0.1101,0.0656,-0.0736]);
HAnimJoint87.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint87.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment88 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment88.name = "r_hindfoot";
HAnimSegment88.DEF = "hanim_r_hindfoot";
let HAnimSite89 = browser.currentScene.createNode("HAnimSite");
HAnimSite89.name = "r_lateral_malleolus_pt";
HAnimSite89.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite89.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
HAnimSegment88.children = new MFNode();

HAnimSegment88.children[0] = HAnimSite89;

let HAnimSite90 = browser.currentScene.createNode("HAnimSite");
HAnimSite90.name = "r_medial_malleolus_pt";
HAnimSite90.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite90.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
HAnimSegment88.children[1] = HAnimSite90;

let HAnimSite91 = browser.currentScene.createNode("HAnimSite");
HAnimSite91.name = "r_sphyrion_pt";
HAnimSite91.DEF = "hanim_r_sphyrion_pt";
HAnimSite91.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
HAnimSegment88.children[2] = HAnimSite91;

let HAnimSite92 = browser.currentScene.createNode("HAnimSite");
HAnimSite92.name = "r_calcaneous_post_pt";
HAnimSite92.DEF = "hanim_r_calcaneous_post_pt";
HAnimSite92.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
HAnimSegment88.children[3] = HAnimSite92;

HAnimJoint87.children = new MFNode();

HAnimJoint87.children[0] = HAnimSegment88;

let HAnimJoint93 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint93.name = "r_subtalar";
HAnimJoint93.DEF = "hanim_r_subtalar";
HAnimJoint93.center = new SFVec3f(new float[-0.1086,0.0001,-0.0368]);
HAnimJoint93.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint93.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment94 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment94.name = "r_midproximal";
HAnimSegment94.DEF = "hanim_r_midproximal";
HAnimJoint93.children = new MFNode();

HAnimJoint93.children[0] = HAnimSegment94;

let HAnimJoint95 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint95.name = "r_midtarsal";
HAnimJoint95.DEF = "hanim_r_midtarsal";
HAnimJoint95.center = new SFVec3f(new float[-0.1086,0.0001,0.0368]);
HAnimJoint95.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint95.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment96 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment96.name = "r_middistal";
HAnimSegment96.DEF = "hanim_r_middistal";
let HAnimSite97 = browser.currentScene.createNode("HAnimSite");
HAnimSite97.name = "r_metatarsal_pha1_pt";
HAnimSite97.DEF = "hanim_r_metatarsal_pha1_pt";
HAnimSite97.translation = new SFVec3f(new float[-0.0521,0.026,0.0127]);
HAnimSegment96.children = new MFNode();

HAnimSegment96.children[0] = HAnimSite97;

HAnimJoint95.children = new MFNode();

HAnimJoint95.children[0] = HAnimSegment96;

let HAnimJoint98 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint98.name = "r_metatarsal";
HAnimJoint98.DEF = "hanim_r_metatarsal";
HAnimJoint98.center = new SFVec3f(new float[-0.1086,0,0.0762]);
HAnimJoint98.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint98.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment99 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment99.name = "r_forefoot";
HAnimSegment99.DEF = "hanim_r_forefoot";
let HAnimSite100 = browser.currentScene.createNode("HAnimSite");
HAnimSite100.name = "r_forefoot_tip";
HAnimSite100.DEF = "hanim_r_forefoot_tip";
HAnimSite100.translation = new SFVec3f(new float[-0.1043,0.0227,0.145]);
HAnimSegment99.children = new MFNode();

HAnimSegment99.children[0] = HAnimSite100;

let HAnimSite101 = browser.currentScene.createNode("HAnimSite");
HAnimSite101.name = "r_metatarsal_pha5_pt";
HAnimSite101.DEF = "hanim_r_metatarsal_pha5_pt";
HAnimSite101.translation = new SFVec3f(new float[-0.1523,0.0166,0.0895]);
HAnimSegment99.children[1] = HAnimSite101;

let HAnimSite102 = browser.currentScene.createNode("HAnimSite");
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

let HAnimJoint103 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint103.name = "vl5";
HAnimJoint103.DEF = "hanim_vl5";
HAnimJoint103.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimJoint103.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint103.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment104 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment104.name = "l5";
HAnimSegment104.DEF = "hanim_l5";
let HAnimSite105 = browser.currentScene.createNode("HAnimSite");
HAnimSite105.name = "waist_preferred_post_pt";
HAnimSite105.DEF = "hanim_waist_preferred_post_pt";
HAnimSite105.translation = new SFVec3f(new float[0,1.0915,-0.1091]);
HAnimSegment104.children = new MFNode();

HAnimSegment104.children[0] = HAnimSite105;

let HAnimSite106 = browser.currentScene.createNode("HAnimSite");
HAnimSite106.name = "navel_pt";
HAnimSite106.DEF = "hanim_navel_pt";
HAnimSite106.translation = new SFVec3f(new float[0.0069,1.0966,0.1017]);
HAnimSegment104.children[1] = HAnimSite106;

HAnimJoint103.children = new MFNode();

HAnimJoint103.children[0] = HAnimSegment104;

let HAnimJoint107 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint107.name = "vl4";
HAnimJoint107.DEF = "hanim_vl4";
HAnimJoint107.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimJoint107.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint107.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment108 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment108.name = "l4";
HAnimSegment108.DEF = "hanim_l4";
HAnimJoint107.children = new MFNode();

HAnimJoint107.children[0] = HAnimSegment108;

let HAnimJoint109 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint109.name = "vl3";
HAnimJoint109.DEF = "hanim_vl3";
HAnimJoint109.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimJoint109.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint109.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment110 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment110.name = "l3";
HAnimSegment110.DEF = "hanim_l3";
HAnimJoint109.children = new MFNode();

HAnimJoint109.children[0] = HAnimSegment110;

let HAnimJoint111 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint111.name = "vl2";
HAnimJoint111.DEF = "hanim_vl2";
HAnimJoint111.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimJoint111.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint111.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment112 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment112.name = "l2";
HAnimSegment112.DEF = "hanim_l2";
let HAnimSite113 = browser.currentScene.createNode("HAnimSite");
HAnimSite113.name = "r_rib10_pt";
HAnimSite113.DEF = "hanim_r_rib10_pt";
HAnimSite113.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
HAnimSegment112.children = new MFNode();

HAnimSegment112.children[0] = HAnimSite113;

let HAnimSite114 = browser.currentScene.createNode("HAnimSite");
HAnimSite114.name = "l_rib10_pt";
HAnimSite114.DEF = "hanim_l_rib10_pt";
HAnimSite114.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
HAnimSegment112.children[1] = HAnimSite114;

let HAnimSite115 = browser.currentScene.createNode("HAnimSite");
HAnimSite115.name = "rib10_midspine_pt";
HAnimSite115.DEF = "hanim_rib10_midspine_pt";
HAnimSite115.translation = new SFVec3f(new float[0.0049,1.1908,-0.1113]);
HAnimSegment112.children[2] = HAnimSite115;

HAnimJoint111.children = new MFNode();

HAnimJoint111.children[0] = HAnimSegment112;

let HAnimJoint116 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint116.name = "vl1";
HAnimJoint116.DEF = "hanim_vl1";
HAnimJoint116.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimJoint116.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint116.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment117 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment117.name = "l1";
HAnimSegment117.DEF = "hanim_l1";
HAnimJoint116.children = new MFNode();

HAnimJoint116.children[0] = HAnimSegment117;

let HAnimJoint118 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint118.name = "vt12";
HAnimJoint118.DEF = "hanim_vt12";
HAnimJoint118.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimJoint118.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint118.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment119 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment119.name = "t12";
HAnimSegment119.DEF = "hanim_t12";
HAnimJoint118.children = new MFNode();

HAnimJoint118.children[0] = HAnimSegment119;

let HAnimJoint120 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint120.name = "vt11";
HAnimJoint120.DEF = "hanim_vt11";
HAnimJoint120.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimJoint120.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint120.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment121 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment121.name = "t11";
HAnimSegment121.DEF = "hanim_t11";
HAnimJoint120.children = new MFNode();

HAnimJoint120.children[0] = HAnimSegment121;

let HAnimJoint122 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint122.name = "vt10";
HAnimJoint122.DEF = "hanim_vt10";
HAnimJoint122.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimJoint122.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint122.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment123 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment123.name = "t10";
HAnimSegment123.DEF = "hanim_t10";
let HAnimSite124 = browser.currentScene.createNode("HAnimSite");
HAnimSite124.name = "substernale_pt";
HAnimSite124.DEF = "hanim_substernale_pt";
HAnimSite124.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
HAnimSegment123.children = new MFNode();

HAnimSegment123.children[0] = HAnimSite124;

HAnimJoint122.children = new MFNode();

HAnimJoint122.children[0] = HAnimSegment123;

let HAnimJoint125 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint125.name = "vt9";
HAnimJoint125.DEF = "hanim_vt9";
HAnimJoint125.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimJoint125.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint125.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment126 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment126.name = "t9";
HAnimSegment126.DEF = "hanim_t9";
let HAnimSite127 = browser.currentScene.createNode("HAnimSite");
HAnimSite127.name = "r_thelion_pt";
HAnimSite127.DEF = "hanim_r_thelion_pt";
HAnimSite127.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
HAnimSegment126.children = new MFNode();

HAnimSegment126.children[0] = HAnimSite127;

let HAnimSite128 = browser.currentScene.createNode("HAnimSite");
HAnimSite128.name = "l_thelion_pt";
HAnimSite128.DEF = "hanim_l_thelion_pt";
HAnimSite128.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
HAnimSegment126.children[1] = HAnimSite128;

HAnimJoint125.children = new MFNode();

HAnimJoint125.children[0] = HAnimSegment126;

let HAnimJoint129 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint129.name = "vt8";
HAnimJoint129.DEF = "hanim_vt8";
HAnimJoint129.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimJoint129.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint129.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment130 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment130.name = "t8";
HAnimSegment130.DEF = "hanim_t8";
HAnimJoint129.children = new MFNode();

HAnimJoint129.children[0] = HAnimSegment130;

let HAnimJoint131 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint131.name = "vt7";
HAnimJoint131.DEF = "hanim_vt7";
HAnimJoint131.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimJoint131.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint131.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment132 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment132.name = "t7";
HAnimSegment132.DEF = "hanim_t7";
HAnimJoint131.children = new MFNode();

HAnimJoint131.children[0] = HAnimSegment132;

let HAnimJoint133 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint133.name = "vt6";
HAnimJoint133.DEF = "hanim_vt6";
HAnimJoint133.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimJoint133.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint133.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment134 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment134.name = "t6";
HAnimSegment134.DEF = "hanim_t6";
HAnimJoint133.children = new MFNode();

HAnimJoint133.children[0] = HAnimSegment134;

let HAnimJoint135 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint135.name = "vt5";
HAnimJoint135.DEF = "hanim_vt5";
HAnimJoint135.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimJoint135.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint135.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment136 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment136.name = "t5";
HAnimSegment136.DEF = "hanim_t5";
HAnimJoint135.children = new MFNode();

HAnimJoint135.children[0] = HAnimSegment136;

let HAnimJoint137 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint137.name = "vt4";
HAnimJoint137.DEF = "hanim_vt4";
HAnimJoint137.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimJoint137.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint137.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment138 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment138.name = "t4";
HAnimSegment138.DEF = "hanim_t4";
HAnimJoint137.children = new MFNode();

HAnimJoint137.children[0] = HAnimSegment138;

let HAnimJoint139 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint139.name = "vt3";
HAnimJoint139.DEF = "hanim_vt3";
HAnimJoint139.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimJoint139.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint139.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment140 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment140.name = "t3";
HAnimSegment140.DEF = "hanim_t3";
HAnimJoint139.children = new MFNode();

HAnimJoint139.children[0] = HAnimSegment140;

let HAnimJoint141 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint141.name = "vt2";
HAnimJoint141.DEF = "hanim_vt2";
HAnimJoint141.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimJoint141.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint141.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment142 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment142.name = "t2";
HAnimSegment142.DEF = "hanim_t2";
HAnimJoint141.children = new MFNode();

HAnimJoint141.children[0] = HAnimSegment142;

let HAnimJoint143 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint143.name = "vt1";
HAnimJoint143.DEF = "hanim_vt1";
HAnimJoint143.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimJoint143.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint143.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment144 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment144.name = "t1";
HAnimSegment144.DEF = "hanim_t1";
let HAnimSite145 = browser.currentScene.createNode("HAnimSite");
HAnimSite145.name = "suprasternale_pt";
HAnimSite145.DEF = "hanim_suprasternale_pt";
HAnimSite145.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
HAnimSegment144.children = new MFNode();

HAnimSegment144.children[0] = HAnimSite145;

let HAnimSite146 = browser.currentScene.createNode("HAnimSite");
HAnimSite146.name = "cervicale_pt";
HAnimSite146.DEF = "hanim_cervicale_pt";
HAnimSite146.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
HAnimSegment144.children[1] = HAnimSite146;

HAnimJoint143.children = new MFNode();

HAnimJoint143.children[0] = HAnimSegment144;

let HAnimJoint147 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint147.name = "vc7";
HAnimJoint147.DEF = "hanim_vc7";
HAnimJoint147.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimJoint147.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint147.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment148 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment148.name = "c7";
HAnimSegment148.DEF = "hanim_c7";
let HAnimSite149 = browser.currentScene.createNode("HAnimSite");
HAnimSite149.name = "r_neck_base_pt";
HAnimSite149.DEF = "hanim_r_neck_base_pt";
HAnimSite149.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
HAnimSegment148.children = new MFNode();

HAnimSegment148.children[0] = HAnimSite149;

let HAnimSite150 = browser.currentScene.createNode("HAnimSite");
HAnimSite150.name = "l_neck_base_pt";
HAnimSite150.DEF = "hanim_l_neck_base_pt";
HAnimSite150.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
HAnimSegment148.children[1] = HAnimSite150;

HAnimJoint147.children = new MFNode();

HAnimJoint147.children[0] = HAnimSegment148;

let HAnimJoint151 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint151.name = "vc6";
HAnimJoint151.DEF = "hanim_vc6";
HAnimJoint151.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimJoint151.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint151.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment152 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment152.name = "c6";
HAnimSegment152.DEF = "hanim_c6";
HAnimJoint151.children = new MFNode();

HAnimJoint151.children[0] = HAnimSegment152;

let HAnimJoint153 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint153.name = "vc5";
HAnimJoint153.DEF = "hanim_vc5";
HAnimJoint153.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimJoint153.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint153.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment154 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment154.name = "c5";
HAnimSegment154.DEF = "hanim_c5";
HAnimJoint153.children = new MFNode();

HAnimJoint153.children[0] = HAnimSegment154;

let HAnimJoint155 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint155.name = "vc4";
HAnimJoint155.DEF = "hanim_vc4";
HAnimJoint155.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimJoint155.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint155.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment156 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment156.name = "c4";
HAnimSegment156.DEF = "hanim_c4";
HAnimJoint155.children = new MFNode();

HAnimJoint155.children[0] = HAnimSegment156;

let HAnimJoint157 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint157.name = "vc3";
HAnimJoint157.DEF = "hanim_vc3";
HAnimJoint157.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimJoint157.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint157.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment158 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment158.name = "c3";
HAnimSegment158.DEF = "hanim_c3";
HAnimJoint157.children = new MFNode();

HAnimJoint157.children[0] = HAnimSegment158;

let HAnimJoint159 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint159.name = "vc2";
HAnimJoint159.DEF = "hanim_vc2";
HAnimJoint159.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimJoint159.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint159.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment160 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment160.name = "c2";
HAnimSegment160.DEF = "hanim_c2";
HAnimJoint159.children = new MFNode();

HAnimJoint159.children[0] = HAnimSegment160;

let HAnimJoint161 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint161.name = "vc1";
HAnimJoint161.DEF = "hanim_vc1";
HAnimJoint161.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimJoint161.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint161.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment162 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment162.name = "c1";
HAnimSegment162.DEF = "hanim_c1";
HAnimJoint161.children = new MFNode();

HAnimJoint161.children[0] = HAnimSegment162;

let HAnimJoint163 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint163.name = "skullbase";
HAnimJoint163.DEF = "hanim_skullbase";
HAnimJoint163.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint163.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint163.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment164 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment164.name = "skull";
HAnimSegment164.DEF = "hanim_skull";
let HAnimSite165 = browser.currentScene.createNode("HAnimSite");
HAnimSite165.name = "skull_tip";
HAnimSite165.DEF = "hanim_skull_tip";
HAnimSite165.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
//TODO move skull_tip x to zero, check others for symmetry
HAnimSegment164.children = new MFNode();

HAnimSegment164.children[0] = HAnimSite165;

let HAnimSite166 = browser.currentScene.createNode("HAnimSite");
HAnimSite166.name = "sellion_pt";
HAnimSite166.DEF = "hanim_sellion_pt";
HAnimSite166.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
HAnimSegment164.children[1] = HAnimSite166;

let HAnimSite167 = browser.currentScene.createNode("HAnimSite");
HAnimSite167.name = "r_infraorbitale_pt";
HAnimSite167.DEF = "hanim_r_infraorbitale_pt";
HAnimSite167.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
HAnimSegment164.children[2] = HAnimSite167;

let HAnimSite168 = browser.currentScene.createNode("HAnimSite");
HAnimSite168.name = "l_infraorbitale_pt";
HAnimSite168.DEF = "hanim_l_infraorbitale_pt";
HAnimSite168.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
HAnimSegment164.children[3] = HAnimSite168;

let HAnimSite169 = browser.currentScene.createNode("HAnimSite");
HAnimSite169.name = "supramenton_pt";
HAnimSite169.DEF = "hanim_supramenton_pt";
HAnimSite169.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
HAnimSegment164.children[4] = HAnimSite169;

let HAnimSite170 = browser.currentScene.createNode("HAnimSite");
HAnimSite170.name = "r_tragion_pt";
HAnimSite170.DEF = "hanim_r_tragion_pt";
HAnimSite170.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
HAnimSegment164.children[5] = HAnimSite170;

let HAnimSite171 = browser.currentScene.createNode("HAnimSite");
HAnimSite171.name = "r_gonion_pt";
HAnimSite171.DEF = "hanim_r_gonion_pt";
HAnimSite171.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
HAnimSegment164.children[6] = HAnimSite171;

let HAnimSite172 = browser.currentScene.createNode("HAnimSite");
HAnimSite172.name = "l_tragion_pt";
HAnimSite172.DEF = "hanim_l_tragion_pt";
HAnimSite172.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
HAnimSegment164.children[7] = HAnimSite172;

let HAnimSite173 = browser.currentScene.createNode("HAnimSite");
HAnimSite173.name = "l_gonion_pt";
HAnimSite173.DEF = "hanim_l_gonion_pt";
HAnimSite173.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
HAnimSegment164.children[8] = HAnimSite173;

let HAnimSite174 = browser.currentScene.createNode("HAnimSite");
HAnimSite174.name = "nuchale_pt";
HAnimSite174.DEF = "hanim_nuchale_pt";
HAnimSite174.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
HAnimSegment164.children[9] = HAnimSite174;

HAnimJoint163.children = new MFNode();

HAnimJoint163.children[0] = HAnimSegment164;

let HAnimJoint175 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint175.name = "l_eyeball_joint";
HAnimJoint175.DEF = "hanim_l_eyeball_joint";
HAnimJoint175.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
HAnimJoint175.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint175.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment176 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment176.name = "l_eyeball";
HAnimSegment176.DEF = "hanim_l_eyeball";
let HAnimSite177 = browser.currentScene.createNode("HAnimSite");
HAnimSite177.name = "l_eyeball_site_view";
HAnimSite177.DEF = "hanim_l_eyeball_site_view";
HAnimSite177.translation = new SFVec3f(new float[0.034,1.64,0.05]);
let Viewpoint178 = browser.currentScene.createNode("Viewpoint");
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

let HAnimJoint179 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint179.name = "l_eyelid_joint";
HAnimJoint179.DEF = "hanim_l_eyelid_joint";
HAnimJoint179.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
HAnimJoint179.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint179.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment180 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment180.name = "l_eyelid";
HAnimSegment180.DEF = "hanim_l_eyelid";
HAnimJoint179.children = new MFNode();

HAnimJoint179.children[0] = HAnimSegment180;

HAnimJoint163.children[2] = HAnimJoint179;

let HAnimJoint181 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint181.name = "l_eyebrow_joint";
HAnimJoint181.DEF = "hanim_l_eyebrow_joint";
HAnimJoint181.center = new SFVec3f(new float[0.0336,1.635,0.0506]);
HAnimJoint181.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint181.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment182 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment182.name = "l_eyebrow";
HAnimSegment182.DEF = "hanim_l_eyebrow";
HAnimJoint181.children = new MFNode();

HAnimJoint181.children[0] = HAnimSegment182;

HAnimJoint163.children[3] = HAnimJoint181;

let HAnimJoint183 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint183.name = "r_eyeball_joint";
HAnimJoint183.DEF = "hanim_r_eyeball_joint";
HAnimJoint183.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
HAnimJoint183.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint183.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment184 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment184.name = "r_eyeball";
HAnimSegment184.DEF = "hanim_r_eyeball";
let HAnimSite185 = browser.currentScene.createNode("HAnimSite");
HAnimSite185.name = "r_eyeball_site_view";
HAnimSite185.DEF = "hanim_r_eyeball_site_view";
HAnimSite185.translation = new SFVec3f(new float[-0.034,1.64,0.05]);
let Viewpoint186 = browser.currentScene.createNode("Viewpoint");
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

let HAnimJoint187 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint187.name = "r_eyelid_joint";
HAnimJoint187.DEF = "hanim_r_eyelid_joint";
HAnimJoint187.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
HAnimJoint187.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint187.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment188 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment188.name = "r_eyelid";
HAnimSegment188.DEF = "hanim_r_eyelid";
HAnimJoint187.children = new MFNode();

HAnimJoint187.children[0] = HAnimSegment188;

HAnimJoint163.children[5] = HAnimJoint187;

let HAnimJoint189 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint189.name = "r_eyebrow_joint";
HAnimJoint189.DEF = "hanim_r_eyebrow_joint";
HAnimJoint189.center = new SFVec3f(new float[-0.0336,1.635,0.0506]);
HAnimJoint189.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint189.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment190 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment190.name = "r_eyebrow";
HAnimSegment190.DEF = "hanim_r_eyebrow";
HAnimJoint189.children = new MFNode();

HAnimJoint189.children[0] = HAnimSegment190;

HAnimJoint163.children[6] = HAnimJoint189;

let HAnimJoint191 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint191.name = "temporomandibular";
HAnimJoint191.DEF = "hanim_temporomandibular";
HAnimJoint191.center = new SFVec3f(new float[0,1.63,0.015]);
HAnimJoint191.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint191.llimit = new MFFloat(new float[0,0,0]);
//Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint
let HAnimSegment192 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment192.name = "jaw";
HAnimSegment192.DEF = "hanim_jaw";
let HAnimSite193 = browser.currentScene.createNode("HAnimSite");
HAnimSite193.name = "temporomandibular_l_site_pt";
HAnimSite193.DEF = "hanim_temporomandibular_l_site_pt";
HAnimSite193.translation = new SFVec3f(new float[0.045,1.63,0]);
HAnimSegment192.children = new MFNode();

HAnimSegment192.children[0] = HAnimSite193;

let HAnimSite194 = browser.currentScene.createNode("HAnimSite");
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

let HAnimJoint195 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint195.name = "l_sternoclavicular";
HAnimJoint195.DEF = "hanim_l_sternoclavicular";
HAnimJoint195.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint195.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint195.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment196 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment196.name = "l_clavicle";
HAnimSegment196.DEF = "hanim_l_clavicle";
let HAnimSite197 = browser.currentScene.createNode("HAnimSite");
HAnimSite197.name = "l_clavicale_pt";
HAnimSite197.DEF = "hanim_l_clavicale_pt";
HAnimSite197.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
HAnimSegment196.children = new MFNode();

HAnimSegment196.children[0] = HAnimSite197;

let HAnimSite198 = browser.currentScene.createNode("HAnimSite");
HAnimSite198.name = "l_acromion_pt";
HAnimSite198.DEF = "hanim_l_acromion_pt";
HAnimSite198.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
HAnimSegment196.children[1] = HAnimSite198;

let HAnimSite199 = browser.currentScene.createNode("HAnimSite");
HAnimSite199.name = "l_axilla_ant_pt";
HAnimSite199.DEF = "hanim_l_axilla_ant_pt";
HAnimSite199.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
HAnimSegment196.children[2] = HAnimSite199;

let HAnimSite200 = browser.currentScene.createNode("HAnimSite");
HAnimSite200.name = "l_axilla_post_pt";
HAnimSite200.DEF = "hanim_l_axilla_post_pt";
HAnimSite200.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
HAnimSegment196.children[3] = HAnimSite200;

HAnimJoint195.children = new MFNode();

HAnimJoint195.children[0] = HAnimSegment196;

let HAnimJoint201 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint201.name = "l_acromioclavicular";
HAnimJoint201.DEF = "hanim_l_acromioclavicular";
HAnimJoint201.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint201.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint201.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment202 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment202.name = "l_scapula";
HAnimSegment202.DEF = "hanim_l_scapula";
HAnimJoint201.children = new MFNode();

HAnimJoint201.children[0] = HAnimSegment202;

let HAnimJoint203 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint203.name = "l_shoulder";
HAnimJoint203.DEF = "hanim_l_shoulder";
HAnimJoint203.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimJoint203.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint203.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment204 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment204.name = "l_upperarm";
HAnimSegment204.DEF = "hanim_l_upperarm";
let HAnimSite205 = browser.currentScene.createNode("HAnimSite");
HAnimSite205.name = "l_humeral_lateral_epicn_pt";
HAnimSite205.DEF = "hanim_l_humeral_lateral_epicn_pt";
HAnimSite205.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
HAnimSegment204.children = new MFNode();

HAnimSegment204.children[0] = HAnimSite205;

HAnimJoint203.children = new MFNode();

HAnimJoint203.children[0] = HAnimSegment204;

let HAnimJoint206 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint206.name = "l_elbow";
HAnimJoint206.DEF = "hanim_l_elbow";
HAnimJoint206.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimJoint206.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint206.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment207 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment207.name = "l_forearm";
HAnimSegment207.DEF = "hanim_l_forearm";
let HAnimSite208 = browser.currentScene.createNode("HAnimSite");
HAnimSite208.name = "l_radial_styloid_pt";
HAnimSite208.DEF = "hanim_l_radial_styloid_pt";
HAnimSite208.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
HAnimSegment207.children = new MFNode();

HAnimSegment207.children[0] = HAnimSite208;

let HAnimSite209 = browser.currentScene.createNode("HAnimSite");
HAnimSite209.name = "l_olecranon_pt";
HAnimSite209.DEF = "hanim_l_olecranon_pt";
HAnimSite209.translation = new SFVec3f(new float[0.1962,1.1375,-0.1123]);
HAnimSegment207.children[1] = HAnimSite209;

let HAnimSite210 = browser.currentScene.createNode("HAnimSite");
HAnimSite210.name = "l_humeral_medial_epicn_pt";
HAnimSite210.DEF = "hanim_l_humeral_medial_epicn_pt";
HAnimSite210.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
HAnimSegment207.children[2] = HAnimSite210;

let HAnimSite211 = browser.currentScene.createNode("HAnimSite");
HAnimSite211.name = "l_radiale_pt";
HAnimSite211.DEF = "hanim_l_radiale_pt";
HAnimSite211.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
HAnimSegment207.children[3] = HAnimSite211;

HAnimJoint206.children = new MFNode();

HAnimJoint206.children[0] = HAnimSegment207;

let HAnimJoint212 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint212.name = "l_wrist";
HAnimJoint212.DEF = "hanim_l_wrist";
HAnimJoint212.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint212.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint212.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment213 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment213.name = "l_hand";
HAnimSegment213.DEF = "hanim_l_hand";
let HAnimSite214 = browser.currentScene.createNode("HAnimSite");
HAnimSite214.name = "l_metacarpal_pha2_pt";
HAnimSite214.DEF = "hanim_l_metacarpal_pha2_pt";
HAnimSite214.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
HAnimSegment213.children = new MFNode();

HAnimSegment213.children[0] = HAnimSite214;

let HAnimSite215 = browser.currentScene.createNode("HAnimSite");
HAnimSite215.name = "l_ulnar_styloid_pt";
HAnimSite215.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite215.translation = new SFVec3f(new float[0.2142,0.8529,-0.0648]);
HAnimSegment213.children[1] = HAnimSite215;

let HAnimSite216 = browser.currentScene.createNode("HAnimSite");
HAnimSite216.name = "l_metacarpal_pha5_pt";
HAnimSite216.DEF = "hanim_l_metacarpal_pha5_pt";
HAnimSite216.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
HAnimSegment213.children[2] = HAnimSite216;

let HAnimSite217 = browser.currentScene.createNode("HAnimSite");
HAnimSite217.name = "l_hand_front_view";
HAnimSite217.DEF = "hanim_l_hand_front_view";
HAnimSite217.translation = new SFVec3f(new float[0.3,0.75,0.45]);
let Viewpoint218 = browser.currentScene.createNode("Viewpoint");
Viewpoint218.DEF = "hanim_l_hand_front_viewpoint";
Viewpoint218.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
Viewpoint218.description = "left hand front";
Viewpoint218.position = new SFVec3f(new float[0,0,0]);
HAnimSite217.children = new MFNode();

HAnimSite217.children[0] = Viewpoint218;

HAnimSegment213.children[3] = HAnimSite217;

HAnimJoint212.children = new MFNode();

HAnimJoint212.children[0] = HAnimSegment213;

let HAnimJoint219 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint219.name = "l_thumb1";
HAnimJoint219.DEF = "hanim_l_thumb1";
HAnimJoint219.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint219.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint219.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment220 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment220.name = "l_thumb_metacarpal";
HAnimSegment220.DEF = "hanim_l_thumb_metacarpal";
HAnimJoint219.children = new MFNode();

HAnimJoint219.children[0] = HAnimSegment220;

let HAnimJoint221 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint221.name = "l_thumb2";
HAnimJoint221.DEF = "hanim_l_thumb2";
HAnimJoint221.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint221.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint221.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment222 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment222.name = "l_thumb_proximal";
HAnimSegment222.DEF = "hanim_l_thumb_proximal";
HAnimJoint221.children = new MFNode();

HAnimJoint221.children[0] = HAnimSegment222;

let HAnimJoint223 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint223.name = "l_thumb3";
HAnimJoint223.DEF = "hanim_l_thumb3";
HAnimJoint223.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint223.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint223.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment224 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment224.name = "l_thumb_distal";
HAnimSegment224.DEF = "hanim_l_thumb_distal";
let HAnimSite225 = browser.currentScene.createNode("HAnimSite");
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

let HAnimJoint226 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint226.name = "l_index0";
HAnimJoint226.DEF = "hanim_l_index0";
HAnimJoint226.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint226.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint226.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment227 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment227.name = "l_index_metacarpal";
HAnimSegment227.DEF = "hanim_l_index_metacarpal";
HAnimJoint226.children = new MFNode();

HAnimJoint226.children[0] = HAnimSegment227;

let HAnimJoint228 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint228.name = "l_index1";
HAnimJoint228.DEF = "hanim_l_index1";
HAnimJoint228.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint228.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint228.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment229 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment229.name = "l_index_proximal";
HAnimSegment229.DEF = "hanim_l_index_proximal";
HAnimJoint228.children = new MFNode();

HAnimJoint228.children[0] = HAnimSegment229;

let HAnimJoint230 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint230.name = "l_index2";
HAnimJoint230.DEF = "hanim_l_index2";
HAnimJoint230.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint230.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint230.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment231 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment231.name = "l_index_middle";
HAnimSegment231.DEF = "hanim_l_index_middle";
HAnimJoint230.children = new MFNode();

HAnimJoint230.children[0] = HAnimSegment231;

let HAnimJoint232 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint232.name = "l_index3";
HAnimJoint232.DEF = "hanim_l_index3";
HAnimJoint232.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint232.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint232.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment233 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment233.name = "l_index_distal";
HAnimSegment233.DEF = "hanim_l_index_distal";
let HAnimSite234 = browser.currentScene.createNode("HAnimSite");
HAnimSite234.name = "l_index_distal_tip";
HAnimSite234.DEF = "hanim_l_index_distal_tip";
HAnimSite234.translation = new SFVec3f(new float[0.2089,0.6858,-0.0245]);
HAnimSegment233.children = new MFNode();

HAnimSegment233.children[0] = HAnimSite234;

let HAnimSite235 = browser.currentScene.createNode("HAnimSite");
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

let HAnimJoint236 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint236.name = "l_middle0";
HAnimJoint236.DEF = "hanim_l_middle0";
HAnimJoint236.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint236.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint236.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment237 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment237.name = "l_middle_metacarpal";
HAnimSegment237.DEF = "hanim_l_middle_metacarpal";
HAnimJoint236.children = new MFNode();

HAnimJoint236.children[0] = HAnimSegment237;

let HAnimJoint238 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint238.name = "l_middle1";
HAnimJoint238.DEF = "hanim_l_middle1";
HAnimJoint238.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint238.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint238.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment239 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment239.name = "l_middle_proximal";
HAnimSegment239.DEF = "hanim_l_middle_proximal";
HAnimJoint238.children = new MFNode();

HAnimJoint238.children[0] = HAnimSegment239;

let HAnimJoint240 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint240.name = "l_middle2";
HAnimJoint240.DEF = "hanim_l_middle2";
HAnimJoint240.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint240.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint240.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment241 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment241.name = "l_middle_middle";
HAnimSegment241.DEF = "hanim_l_middle_middle";
HAnimJoint240.children = new MFNode();

HAnimJoint240.children[0] = HAnimSegment241;

let HAnimJoint242 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint242.name = "l_middle3";
HAnimJoint242.DEF = "hanim_l_middle3";
HAnimJoint242.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint242.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint242.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment243 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment243.name = "l_middle_distal";
HAnimSegment243.DEF = "hanim_l_middle_distal";
let HAnimSite244 = browser.currentScene.createNode("HAnimSite");
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

let HAnimJoint245 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint245.name = "l_ring0";
HAnimJoint245.DEF = "hanim_l_ring0";
HAnimJoint245.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint245.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint245.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment246 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment246.name = "l_ring_metacarpal";
HAnimSegment246.DEF = "hanim_l_ring_metacarpal";
HAnimJoint245.children = new MFNode();

HAnimJoint245.children[0] = HAnimSegment246;

let HAnimJoint247 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint247.name = "l_ring1";
HAnimJoint247.DEF = "hanim_l_ring1";
HAnimJoint247.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint247.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint247.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment248 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment248.name = "l_ring_proximal";
HAnimSegment248.DEF = "hanim_l_ring_proximal";
HAnimJoint247.children = new MFNode();

HAnimJoint247.children[0] = HAnimSegment248;

let HAnimJoint249 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint249.name = "l_ring2";
HAnimJoint249.DEF = "hanim_l_ring2";
HAnimJoint249.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint249.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint249.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment250 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment250.name = "l_ring_middle";
HAnimSegment250.DEF = "hanim_l_ring_middle";
HAnimJoint249.children = new MFNode();

HAnimJoint249.children[0] = HAnimSegment250;

let HAnimJoint251 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint251.name = "l_ring3";
HAnimJoint251.DEF = "hanim_l_ring3";
HAnimJoint251.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint251.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint251.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment252 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment252.name = "l_ring_distal";
HAnimSegment252.DEF = "hanim_l_ring_distal";
let HAnimSite253 = browser.currentScene.createNode("HAnimSite");
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

let HAnimJoint254 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint254.name = "l_pinky0";
HAnimJoint254.DEF = "hanim_l_pinky0";
HAnimJoint254.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint254.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint254.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment255 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment255.name = "l_pinky_metacarpal";
HAnimSegment255.DEF = "hanim_l_pinky_metacarpal";
HAnimJoint254.children = new MFNode();

HAnimJoint254.children[0] = HAnimSegment255;

let HAnimJoint256 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint256.name = "l_pinky1";
HAnimJoint256.DEF = "hanim_l_pinky1";
HAnimJoint256.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint256.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint256.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment257 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment257.name = "l_pinky_proximal";
HAnimSegment257.DEF = "hanim_l_pinky_proximal";
HAnimJoint256.children = new MFNode();

HAnimJoint256.children[0] = HAnimSegment257;

let HAnimJoint258 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint258.name = "l_pinky2";
HAnimJoint258.DEF = "hanim_l_pinky2";
HAnimJoint258.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint258.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint258.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment259 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment259.name = "l_pinky_middle";
HAnimSegment259.DEF = "hanim_l_pinky_middle";
HAnimJoint258.children = new MFNode();

HAnimJoint258.children[0] = HAnimSegment259;

let HAnimJoint260 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint260.name = "l_pinky3";
HAnimJoint260.DEF = "hanim_l_pinky3";
HAnimJoint260.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint260.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint260.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment261 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment261.name = "l_pinky_distal";
HAnimSegment261.DEF = "hanim_l_pinky_distal";
let HAnimSite262 = browser.currentScene.createNode("HAnimSite");
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

let HAnimJoint263 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint263.name = "r_sternoclavicular";
HAnimJoint263.DEF = "hanim_r_sternoclavicular";
HAnimJoint263.center = new SFVec3f(new float[-0.082,1.4488,-0.0353]);
HAnimJoint263.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint263.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment264 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment264.name = "r_clavicle";
HAnimSegment264.DEF = "hanim_r_clavicle";
let HAnimSite265 = browser.currentScene.createNode("HAnimSite");
HAnimSite265.name = "r_clavicale_pt";
HAnimSite265.DEF = "hanim_r_clavicale_pt";
HAnimSite265.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
HAnimSegment264.children = new MFNode();

HAnimSegment264.children[0] = HAnimSite265;

let HAnimSite266 = browser.currentScene.createNode("HAnimSite");
HAnimSite266.name = "r_acromion_pt";
HAnimSite266.DEF = "hanim_r_acromion_pt";
HAnimSite266.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
HAnimSegment264.children[1] = HAnimSite266;

let HAnimSite267 = browser.currentScene.createNode("HAnimSite");
HAnimSite267.name = "r_axilla_ant_pt";
HAnimSite267.DEF = "hanim_r_axilla_ant_pt";
HAnimSite267.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
HAnimSegment264.children[2] = HAnimSite267;

let HAnimSite268 = browser.currentScene.createNode("HAnimSite");
HAnimSite268.name = "r_axilla_post_pt";
HAnimSite268.DEF = "hanim_r_axilla_post_pt";
HAnimSite268.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
HAnimSegment264.children[3] = HAnimSite268;

HAnimJoint263.children = new MFNode();

HAnimJoint263.children[0] = HAnimSegment264;

let HAnimJoint269 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint269.name = "r_acromioclavicular";
HAnimJoint269.DEF = "hanim_r_acromioclavicular";
HAnimJoint269.center = new SFVec3f(new float[-0.0962,1.4269,-0.0424]);
HAnimJoint269.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint269.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment270 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment270.name = "r_scapula";
HAnimSegment270.DEF = "hanim_r_scapula";
HAnimJoint269.children = new MFNode();

HAnimJoint269.children[0] = HAnimSegment270;

let HAnimJoint271 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint271.name = "r_shoulder";
HAnimJoint271.DEF = "hanim_r_shoulder";
HAnimJoint271.center = new SFVec3f(new float[-0.2029,1.4376,-0.0387]);
HAnimJoint271.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint271.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment272 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment272.name = "r_upperarm";
HAnimSegment272.DEF = "hanim_r_upperarm";
let HAnimSite273 = browser.currentScene.createNode("HAnimSite");
HAnimSite273.name = "r_humeral_lateral_epicn_pt";
HAnimSite273.DEF = "hanim_r_humeral_lateral_epicn_pt";
HAnimSite273.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
HAnimSegment272.children = new MFNode();

HAnimSegment272.children[0] = HAnimSite273;

HAnimJoint271.children = new MFNode();

HAnimJoint271.children[0] = HAnimSegment272;

let HAnimJoint274 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint274.name = "r_elbow";
HAnimJoint274.DEF = "hanim_r_elbow";
HAnimJoint274.center = new SFVec3f(new float[-0.2014,1.1357,-0.0682]);
HAnimJoint274.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint274.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment275 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment275.name = "r_forearm";
HAnimSegment275.DEF = "hanim_r_forearm";
let HAnimSite276 = browser.currentScene.createNode("HAnimSite");
HAnimSite276.name = "r_radial_styloid_pt";
HAnimSite276.DEF = "hanim_r_radial_styloid_pt";
HAnimSite276.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
HAnimSegment275.children = new MFNode();

HAnimSegment275.children[0] = HAnimSite276;

let HAnimSite277 = browser.currentScene.createNode("HAnimSite");
HAnimSite277.name = "r_olecranon_pt";
HAnimSite277.DEF = "hanim_r_olecranon_pt";
HAnimSite277.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
HAnimSegment275.children[1] = HAnimSite277;

let HAnimSite278 = browser.currentScene.createNode("HAnimSite");
HAnimSite278.name = "r_humeral_medial_epicn_pt";
HAnimSite278.DEF = "hanim_r_humeral_medial_epicn_pt";
HAnimSite278.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
HAnimSegment275.children[2] = HAnimSite278;

let HAnimSite279 = browser.currentScene.createNode("HAnimSite");
HAnimSite279.name = "r_radiale_pt";
HAnimSite279.DEF = "hanim_r_radiale_pt";
HAnimSite279.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
HAnimSegment275.children[3] = HAnimSite279;

HAnimJoint274.children = new MFNode();

HAnimJoint274.children[0] = HAnimSegment275;

let HAnimJoint280 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint280.name = "r_wrist";
HAnimJoint280.DEF = "hanim_r_wrist";
HAnimJoint280.center = new SFVec3f(new float[-0.1984,0.8663,-0.0583]);
HAnimJoint280.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint280.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment281 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment281.name = "r_hand";
HAnimSegment281.DEF = "hanim_r_hand";
let HAnimSite282 = browser.currentScene.createNode("HAnimSite");
HAnimSite282.name = "r_metacarpal_pha2_pt";
HAnimSite282.DEF = "hanim_r_metacarpal_pha2_pt";
HAnimSite282.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
HAnimSegment281.children = new MFNode();

HAnimSegment281.children[0] = HAnimSite282;

let HAnimSite283 = browser.currentScene.createNode("HAnimSite");
HAnimSite283.name = "r_ulnar_styloid_pt";
HAnimSite283.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite283.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
HAnimSegment281.children[1] = HAnimSite283;

let HAnimSite284 = browser.currentScene.createNode("HAnimSite");
HAnimSite284.name = "r_metacarpal_pha5_pt";
HAnimSite284.DEF = "hanim_r_metacarpal_pha5_pt";
HAnimSite284.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
HAnimSegment281.children[2] = HAnimSite284;

let HAnimSite285 = browser.currentScene.createNode("HAnimSite");
HAnimSite285.name = "r_hand_front_view";
HAnimSite285.DEF = "hanim_r_hand_front_view";
HAnimSite285.translation = new SFVec3f(new float[-0.3,0.75,0.45]);
let Viewpoint286 = browser.currentScene.createNode("Viewpoint");
Viewpoint286.DEF = "hanim_r_hand_front_viewpoint";
Viewpoint286.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
Viewpoint286.description = "right hand front";
Viewpoint286.position = new SFVec3f(new float[0,0,0]);
HAnimSite285.children = new MFNode();

HAnimSite285.children[0] = Viewpoint286;

HAnimSegment281.children[3] = HAnimSite285;

HAnimJoint280.children = new MFNode();

HAnimJoint280.children[0] = HAnimSegment281;

let HAnimJoint287 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint287.name = "r_thumb1";
HAnimJoint287.DEF = "hanim_r_thumb1";
HAnimJoint287.center = new SFVec3f(new float[-0.1924,0.8472,-0.0534]);
HAnimJoint287.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint287.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment288 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment288.name = "r_thumb_metacarpal";
HAnimSegment288.DEF = "hanim_r_thumb_metacarpal";
HAnimJoint287.children = new MFNode();

HAnimJoint287.children[0] = HAnimSegment288;

let HAnimJoint289 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint289.name = "r_thumb2";
HAnimJoint289.DEF = "hanim_r_thumb2";
HAnimJoint289.center = new SFVec3f(new float[-0.1951,0.8226,0.0246]);
HAnimJoint289.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint289.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment290 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment290.name = "r_thumb_proximal";
HAnimSegment290.DEF = "hanim_r_thumb_proximal";
HAnimJoint289.children = new MFNode();

HAnimJoint289.children[0] = HAnimSegment290;

let HAnimJoint291 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint291.name = "r_thumb3";
HAnimJoint291.DEF = "hanim_r_thumb3";
HAnimJoint291.center = new SFVec3f(new float[-0.1955,0.8159,0.0464]);
HAnimJoint291.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint291.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment292 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment292.name = "r_thumb_distal";
HAnimSegment292.DEF = "hanim_r_thumb_distal";
let HAnimSite293 = browser.currentScene.createNode("HAnimSite");
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

let HAnimJoint294 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint294.name = "r_index0";
HAnimJoint294.DEF = "hanim_r_index0";
HAnimJoint294.center = new SFVec3f(new float[-0.1983,0.8024,-0.028]);
HAnimJoint294.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint294.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment295 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment295.name = "r_index_metacarpal";
HAnimSegment295.DEF = "hanim_r_index_metacarpal";
HAnimJoint294.children = new MFNode();

HAnimJoint294.children[0] = HAnimSegment295;

let HAnimJoint296 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint296.name = "r_index1";
HAnimJoint296.DEF = "hanim_r_index1";
HAnimJoint296.center = new SFVec3f(new float[-0.1983,0.7815,-0.028]);
HAnimJoint296.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint296.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment297 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment297.name = "r_index_proximal";
HAnimSegment297.DEF = "hanim_r_index_proximal";
HAnimJoint296.children = new MFNode();

HAnimJoint296.children[0] = HAnimSegment297;

let HAnimJoint298 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint298.name = "r_index2";
HAnimJoint298.DEF = "hanim_r_index2";
HAnimJoint298.center = new SFVec3f(new float[-0.2017,0.7363,-0.0248]);
HAnimJoint298.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint298.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment299 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment299.name = "r_index_middle";
HAnimSegment299.DEF = "hanim_r_index_middle";
HAnimJoint298.children = new MFNode();

HAnimJoint298.children[0] = HAnimSegment299;

let HAnimJoint300 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint300.name = "r_index3";
HAnimJoint300.DEF = "hanim_r_index3";
HAnimJoint300.center = new SFVec3f(new float[-0.2028,0.7139,-0.0236]);
HAnimJoint300.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint300.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment301 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment301.name = "r_index_distal";
HAnimSegment301.DEF = "hanim_r_index_distal";
let HAnimSite302 = browser.currentScene.createNode("HAnimSite");
HAnimSite302.name = "r_index_distal_tip";
HAnimSite302.DEF = "hanim_r_index_distal_tip";
HAnimSite302.translation = new SFVec3f(new float[-0.198,0.6883,-0.018]);
HAnimSegment301.children = new MFNode();

HAnimSegment301.children[0] = HAnimSite302;

let HAnimSite303 = browser.currentScene.createNode("HAnimSite");
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

let HAnimJoint304 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint304.name = "r_middle0";
HAnimJoint304.DEF = "hanim_r_middle0";
HAnimJoint304.center = new SFVec3f(new float[-0.1987,0.8029,-0.053]);
HAnimJoint304.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint304.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment305 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment305.name = "r_middle_metacarpal";
HAnimSegment305.DEF = "hanim_r_middle_metacarpal";
HAnimJoint304.children = new MFNode();

HAnimJoint304.children[0] = HAnimSegment305;

let HAnimJoint306 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint306.name = "r_middle1";
HAnimJoint306.DEF = "hanim_r_middle1";
HAnimJoint306.center = new SFVec3f(new float[-0.1987,0.7818,-0.053]);
HAnimJoint306.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint306.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment307 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment307.name = "r_middle_proximal";
HAnimSegment307.DEF = "hanim_r_middle_proximal";
HAnimJoint306.children = new MFNode();

HAnimJoint306.children[0] = HAnimSegment307;

let HAnimJoint308 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint308.name = "r_middle2";
HAnimJoint308.DEF = "hanim_r_middle2";
HAnimJoint308.center = new SFVec3f(new float[-0.2013,0.7273,-0.0503]);
HAnimJoint308.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint308.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment309 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment309.name = "r_middle_middle";
HAnimSegment309.DEF = "hanim_r_middle_middle";
HAnimJoint308.children = new MFNode();

HAnimJoint308.children[0] = HAnimSegment309;

let HAnimJoint310 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint310.name = "r_middle3";
HAnimJoint310.DEF = "hanim_r_middle3";
HAnimJoint310.center = new SFVec3f(new float[-0.2026,0.7011,-0.0494]);
HAnimJoint310.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint310.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment311 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment311.name = "r_middle_distal";
HAnimSegment311.DEF = "hanim_r_middle_distal";
let HAnimSite312 = browser.currentScene.createNode("HAnimSite");
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

let HAnimJoint313 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint313.name = "r_ring0";
HAnimJoint313.DEF = "hanim_r_ring0";
HAnimJoint313.center = new SFVec3f(new float[-0.1956,0.8019,-0.0794]);
HAnimJoint313.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint313.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment314 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment314.name = "r_ring_metacarpal";
HAnimSegment314.DEF = "hanim_r_ring_metacarpal";
HAnimJoint313.children = new MFNode();

HAnimJoint313.children[0] = HAnimSegment314;

let HAnimJoint315 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint315.name = "r_ring1";
HAnimJoint315.DEF = "hanim_r_ring1";
HAnimJoint315.center = new SFVec3f(new float[-0.1956,0.7815,-0.0794]);
HAnimJoint315.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint315.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment316 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment316.name = "r_ring_proximal";
HAnimSegment316.DEF = "hanim_r_ring_proximal";
HAnimJoint315.children = new MFNode();

HAnimJoint315.children[0] = HAnimSegment316;

let HAnimJoint317 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint317.name = "r_ring2";
HAnimJoint317.DEF = "hanim_r_ring2";
HAnimJoint317.center = new SFVec3f(new float[-0.1973,0.7287,-0.0777]);
HAnimJoint317.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint317.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment318 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment318.name = "r_ring_middle";
HAnimSegment318.DEF = "hanim_r_ring_middle";
HAnimJoint317.children = new MFNode();

HAnimJoint317.children[0] = HAnimSegment318;

let HAnimJoint319 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint319.name = "r_ring3";
HAnimJoint319.DEF = "hanim_r_ring3";
HAnimJoint319.center = new SFVec3f(new float[-0.1983,0.7045,-0.0767]);
HAnimJoint319.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint319.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment320 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment320.name = "r_ring_distal";
HAnimSegment320.DEF = "hanim_r_ring_distal";
let HAnimSite321 = browser.currentScene.createNode("HAnimSite");
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

let HAnimJoint322 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint322.name = "r_pinky0";
HAnimJoint322.DEF = "hanim_r_pinky0";
HAnimJoint322.center = new SFVec3f(new float[-0.1925,0.8066,-0.1036]);
HAnimJoint322.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint322.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment323 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment323.name = "r_pinky_metacarpal";
HAnimSegment323.DEF = "hanim_r_pinky_metacarpal";
HAnimJoint322.children = new MFNode();

HAnimJoint322.children[0] = HAnimSegment323;

let HAnimJoint324 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint324.name = "r_pinky1";
HAnimJoint324.DEF = "hanim_r_pinky1";
HAnimJoint324.center = new SFVec3f(new float[-0.1925,0.7866,-0.1036]);
HAnimJoint324.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint324.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment325 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment325.name = "r_pinky_proximal";
HAnimSegment325.DEF = "hanim_r_pinky_proximal";
HAnimJoint324.children = new MFNode();

HAnimJoint324.children[0] = HAnimSegment325;

let HAnimJoint326 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint326.name = "r_pinky2";
HAnimJoint326.DEF = "hanim_r_pinky2";
HAnimJoint326.center = new SFVec3f(new float[-0.1938,0.7452,-0.1024]);
HAnimJoint326.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint326.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment327 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment327.name = "r_pinky_middle";
HAnimSegment327.DEF = "hanim_r_pinky_middle";
HAnimJoint326.children = new MFNode();

HAnimJoint326.children[0] = HAnimSegment327;

let HAnimJoint328 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint328.name = "r_pinky3";
HAnimJoint328.DEF = "hanim_r_pinky3";
HAnimJoint328.center = new SFVec3f(new float[-0.1948,0.7277,-0.1017]);
HAnimJoint328.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint328.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment329 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment329.name = "r_pinky_distal";
HAnimSegment329.DEF = "hanim_r_pinky_distal";
let HAnimSite330 = browser.currentScene.createNode("HAnimSite");
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

let HAnimSite331 = browser.currentScene.createNode("HAnimSite");
HAnimSite331.name = "l_inclined_view";
HAnimSite331.DEF = "hanim_l_inclined_view";
HAnimSite331.rotation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
HAnimSite331.translation = new SFVec3f(new float[1.62,1.05,2.06]);
let Viewpoint332 = browser.currentScene.createNode("Viewpoint");
Viewpoint332.DEF = "hanim_l_inclined_viewpoint";
Viewpoint332.description = "left inclined";
Viewpoint332.position = new SFVec3f(new float[0,0,0]);
HAnimSite331.children = new MFNode();

HAnimSite331.children[0] = Viewpoint332;

HAnimHumanoid43.viewpoints[1] = HAnimSite331;

let HAnimSite333 = browser.currentScene.createNode("HAnimSite");
HAnimSite333.name = "r_inclined_view";
HAnimSite333.DEF = "hanim_r_inclined_view";
HAnimSite333.rotation = new SFRotation(new float[-0.113,-0.993,0.0347,0.671]);
HAnimSite333.translation = new SFVec3f(new float[-1.62,1.05,2.06]);
let Viewpoint334 = browser.currentScene.createNode("Viewpoint");
Viewpoint334.DEF = "hanim_r_inclined_viewpoint";
Viewpoint334.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint334.description = "right inclined";
Viewpoint334.position = new SFVec3f(new float[0,0,0]);
HAnimSite333.children = new MFNode();

HAnimSite333.children[0] = Viewpoint334;

HAnimHumanoid43.viewpoints[2] = HAnimSite333;

let HAnimSite335 = browser.currentScene.createNode("HAnimSite");
HAnimSite335.name = "front_view";
HAnimSite335.DEF = "hanim_front_view";
HAnimSite335.translation = new SFVec3f(new float[0,0.85,2.58]);
let Viewpoint336 = browser.currentScene.createNode("Viewpoint");
Viewpoint336.DEF = "hanim_front_viewpoint";
Viewpoint336.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint336.description = "front";
Viewpoint336.position = new SFVec3f(new float[0,0,0]);
HAnimSite335.children = new MFNode();

HAnimSite335.children[0] = Viewpoint336;

HAnimHumanoid43.viewpoints[3] = HAnimSite335;

let HAnimSite337 = browser.currentScene.createNode("HAnimSite");
HAnimSite337.name = "back_view";
HAnimSite337.DEF = "hanim_back_view";
HAnimSite337.rotation = new SFRotation(new float[0,1,0,3.14]);
HAnimSite337.translation = new SFVec3f(new float[0,0.85,-2.58]);
let Viewpoint338 = browser.currentScene.createNode("Viewpoint");
Viewpoint338.DEF = "hanim_back_viewpoint";
Viewpoint338.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint338.description = "back";
Viewpoint338.position = new SFVec3f(new float[0,0,0]);
HAnimSite337.children = new MFNode();

HAnimSite337.children[0] = Viewpoint338;

HAnimHumanoid43.viewpoints[4] = HAnimSite337;

let HAnimSite339 = browser.currentScene.createNode("HAnimSite");
HAnimSite339.name = "l_side_view";
HAnimSite339.DEF = "hanim_l_side_view";
HAnimSite339.rotation = new SFRotation(new float[0,1,0,1.5708]);
HAnimSite339.translation = new SFVec3f(new float[2.6,0.854,0]);
let Viewpoint340 = browser.currentScene.createNode("Viewpoint");
Viewpoint340.DEF = "hanim_l_side_viewpoint";
Viewpoint340.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint340.description = "left side";
Viewpoint340.position = new SFVec3f(new float[0,0,0]);
HAnimSite339.children = new MFNode();

HAnimSite339.children[0] = Viewpoint340;

HAnimHumanoid43.viewpoints[5] = HAnimSite339;

let HAnimSite341 = browser.currentScene.createNode("HAnimSite");
HAnimSite341.name = "Top_view";
HAnimSite341.DEF = "hanim_Top_view";
HAnimSite341.rotation = new SFRotation(new float[1,0,0,-1.57]);
HAnimSite341.translation = new SFVec3f(new float[0,3.5,0]);
let Viewpoint342 = browser.currentScene.createNode("Viewpoint");
Viewpoint342.DEF = "hanim_Top_viewpoint";
Viewpoint342.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint342.description = "Top";
Viewpoint342.position = new SFVec3f(new float[0,0,0]);
HAnimSite341.children = new MFNode();

HAnimSite341.children[0] = Viewpoint342;

HAnimHumanoid43.viewpoints[6] = HAnimSite341;

let HAnimSite343 = browser.currentScene.createNode("HAnimSite");
HAnimSite343.name = "front_close_view";
HAnimSite343.DEF = "hanim_front_close_view";
HAnimSite343.translation = new SFVec3f(new float[0,0.854,1.575]);
let Viewpoint344 = browser.currentScene.createNode("Viewpoint");
Viewpoint344.DEF = "hanim_front_close_viewpoint";
Viewpoint344.centerOfRotation = new SFVec3f(new float[0,0,1.575]);
Viewpoint344.description = "front close";
Viewpoint344.position = new SFVec3f(new float[0,0,0]);
HAnimSite343.children = new MFNode();

HAnimSite343.children[0] = Viewpoint344;

HAnimHumanoid43.viewpoints[7] = HAnimSite343;

let HAnimSite345 = browser.currentScene.createNode("HAnimSite");
HAnimSite345.name = "side_close_view";
HAnimSite345.DEF = "hanim_side_close_view";
HAnimSite345.rotation = new SFRotation(new float[0,1,0,1.5708]);
HAnimSite345.translation = new SFVec3f(new float[1.56,0.854,0]);
let Viewpoint346 = browser.currentScene.createNode("Viewpoint");
Viewpoint346.DEF = "hanim_side_close_viewpoint";
Viewpoint346.centerOfRotation = new SFVec3f(new float[1.6,0,0]);
Viewpoint346.description = "side close";
Viewpoint346.position = new SFVec3f(new float[0,0,0]);
HAnimSite345.children = new MFNode();

HAnimSite345.children[0] = Viewpoint346;

HAnimHumanoid43.viewpoints[8] = HAnimSite345;

let HAnimSite347 = browser.currentScene.createNode("HAnimSite");
HAnimSite347.name = "head_front_close_view";
HAnimSite347.DEF = "hanim_head_front_close_view";
HAnimSite347.translation = new SFVec3f(new float[0,1.5,1]);
let Viewpoint348 = browser.currentScene.createNode("Viewpoint");
Viewpoint348.DEF = "hanim_head_front_close_viewpoint";
Viewpoint348.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint348.description = "head front close";
Viewpoint348.position = new SFVec3f(new float[0,0,0]);
HAnimSite347.children = new MFNode();

HAnimSite347.children[0] = Viewpoint348;

HAnimHumanoid43.viewpoints[9] = HAnimSite347;

let HAnimSite349 = browser.currentScene.createNode("HAnimSite");
HAnimSite349.name = "chest_front_close_view";
HAnimSite349.DEF = "hanim_chest_front_close_view";
HAnimSite349.translation = new SFVec3f(new float[0,1.2,1]);
let Viewpoint350 = browser.currentScene.createNode("Viewpoint");
Viewpoint350.DEF = "hanim_chest_front_close_viewpoint";
Viewpoint350.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint350.description = "chest front close";
Viewpoint350.position = new SFVec3f(new float[0,0,0]);
HAnimSite349.children = new MFNode();

HAnimSite349.children[0] = Viewpoint350;

HAnimHumanoid43.viewpoints[10] = HAnimSite349;

let HAnimSite351 = browser.currentScene.createNode("HAnimSite");
HAnimSite351.name = "pelvis_front_close_view";
HAnimSite351.DEF = "hanim_pelvis_front_close_view";
HAnimSite351.translation = new SFVec3f(new float[0,0.8,1]);
let Viewpoint352 = browser.currentScene.createNode("Viewpoint");
Viewpoint352.DEF = "hanim_pelvis_front_close_viewpoint";
Viewpoint352.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint352.description = "pelvis front close";
Viewpoint352.position = new SFVec3f(new float[0,0,0]);
HAnimSite351.children = new MFNode();

HAnimSite351.children[0] = Viewpoint352;

HAnimHumanoid43.viewpoints[11] = HAnimSite351;

let HAnimSite353 = browser.currentScene.createNode("HAnimSite");
HAnimSite353.name = "knees_front_close_view";
HAnimSite353.DEF = "hanim_knees_front_close_view";
HAnimSite353.translation = new SFVec3f(new float[0,0.4,1]);
let Viewpoint354 = browser.currentScene.createNode("Viewpoint");
Viewpoint354.DEF = "hanim_knees_front_close_viewpoint";
Viewpoint354.centerOfRotation = new SFVec3f(new float[0,0.4,0]);
Viewpoint354.description = "knees front close";
Viewpoint354.position = new SFVec3f(new float[0,0,0]);
HAnimSite353.children = new MFNode();

HAnimSite353.children[0] = Viewpoint354;

HAnimHumanoid43.viewpoints[12] = HAnimSite353;

let HAnimSite355 = browser.currentScene.createNode("HAnimSite");
HAnimSite355.name = "feet_front_close_view";
HAnimSite355.DEF = "hanim_feet_front_close_view";
HAnimSite355.translation = new SFVec3f(new float[0,0,1]);
let Viewpoint356 = browser.currentScene.createNode("Viewpoint");
Viewpoint356.DEF = "hanim_feet_front_close_viewpoint";
Viewpoint356.description = "feet front close";
Viewpoint356.position = new SFVec3f(new float[0,0,0]);
HAnimSite355.children = new MFNode();

HAnimSite355.children[0] = Viewpoint356;

HAnimHumanoid43.viewpoints[13] = HAnimSite355;

let HAnimSite357 = browser.currentScene.createNode("HAnimSite");
HAnimSite357.name = "eye_level_view";
HAnimSite357.DEF = "hanim_eye_level_view";
HAnimSite357.translation = new SFVec3f(new float[0,1.6332,0.0502]);
let Viewpoint358 = browser.currentScene.createNode("Viewpoint");
Viewpoint358.DEF = "hanim_eye_level_viewpoint";
Viewpoint358.description = "eye level looking forward";
Viewpoint358.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint358.position = new SFVec3f(new float[0,0,0]);
HAnimSite357.children = new MFNode();

HAnimSite357.children[0] = Viewpoint358;

HAnimHumanoid43.viewpoints[14] = HAnimSite357;

let HAnimSite359 = browser.currentScene.createNode("HAnimSite");
HAnimSite359.USE = "hanim_l_eyeball_site_view";
HAnimHumanoid43.viewpoints[15] = HAnimSite359;

let HAnimSite360 = browser.currentScene.createNode("HAnimSite");
HAnimSite360.USE = "hanim_r_eyeball_site_view";
HAnimHumanoid43.viewpoints[16] = HAnimSite360;

let HAnimSite361 = browser.currentScene.createNode("HAnimSite");
HAnimSite361.USE = "hanim_l_hand_front_view";
HAnimHumanoid43.viewpoints[17] = HAnimSite361;

let HAnimSite362 = browser.currentScene.createNode("HAnimSite");
HAnimSite362.USE = "hanim_r_hand_front_view";
HAnimHumanoid43.viewpoints[18] = HAnimSite362;

let HAnimJoint363 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint363.USE = "hanim_humanoid_root";
HAnimHumanoid43.joints[19] = HAnimJoint363;

let HAnimJoint364 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint364.USE = "hanim_sacroiliac";
HAnimHumanoid43.joints[20] = HAnimJoint364;

let HAnimJoint365 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint365.USE = "hanim_vl5";
HAnimHumanoid43.joints[21] = HAnimJoint365;

let HAnimJoint366 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint366.USE = "hanim_vl4";
HAnimHumanoid43.joints[22] = HAnimJoint366;

let HAnimJoint367 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint367.USE = "hanim_vl3";
HAnimHumanoid43.joints[23] = HAnimJoint367;

let HAnimJoint368 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint368.USE = "hanim_vl2";
HAnimHumanoid43.joints[24] = HAnimJoint368;

let HAnimJoint369 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint369.USE = "hanim_vl1";
HAnimHumanoid43.joints[25] = HAnimJoint369;

let HAnimJoint370 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint370.USE = "hanim_vt12";
HAnimHumanoid43.joints[26] = HAnimJoint370;

let HAnimJoint371 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint371.USE = "hanim_vt11";
HAnimHumanoid43.joints[27] = HAnimJoint371;

let HAnimJoint372 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint372.USE = "hanim_vt10";
HAnimHumanoid43.joints[28] = HAnimJoint372;

let HAnimJoint373 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint373.USE = "hanim_vt9";
HAnimHumanoid43.joints[29] = HAnimJoint373;

let HAnimJoint374 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint374.USE = "hanim_vt8";
HAnimHumanoid43.joints[30] = HAnimJoint374;

let HAnimJoint375 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint375.USE = "hanim_vt7";
HAnimHumanoid43.joints[31] = HAnimJoint375;

let HAnimJoint376 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint376.USE = "hanim_vt6";
HAnimHumanoid43.joints[32] = HAnimJoint376;

let HAnimJoint377 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint377.USE = "hanim_vt5";
HAnimHumanoid43.joints[33] = HAnimJoint377;

let HAnimJoint378 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint378.USE = "hanim_vt4";
HAnimHumanoid43.joints[34] = HAnimJoint378;

let HAnimJoint379 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint379.USE = "hanim_vt3";
HAnimHumanoid43.joints[35] = HAnimJoint379;

let HAnimJoint380 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint380.USE = "hanim_vt2";
HAnimHumanoid43.joints[36] = HAnimJoint380;

let HAnimJoint381 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint381.USE = "hanim_vt1";
HAnimHumanoid43.joints[37] = HAnimJoint381;

let HAnimJoint382 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint382.USE = "hanim_vc7";
HAnimHumanoid43.joints[38] = HAnimJoint382;

let HAnimJoint383 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint383.USE = "hanim_vc6";
HAnimHumanoid43.joints[39] = HAnimJoint383;

let HAnimJoint384 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint384.USE = "hanim_vc5";
HAnimHumanoid43.joints[40] = HAnimJoint384;

let HAnimJoint385 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint385.USE = "hanim_vc4";
HAnimHumanoid43.joints[41] = HAnimJoint385;

let HAnimJoint386 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint386.USE = "hanim_vc3";
HAnimHumanoid43.joints[42] = HAnimJoint386;

let HAnimJoint387 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint387.USE = "hanim_vc2";
HAnimHumanoid43.joints[43] = HAnimJoint387;

let HAnimJoint388 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint388.USE = "hanim_vc1";
HAnimHumanoid43.joints[44] = HAnimJoint388;

let HAnimJoint389 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint389.USE = "hanim_skullbase";
HAnimHumanoid43.joints[45] = HAnimJoint389;

let HAnimJoint390 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint390.USE = "hanim_temporomandibular";
HAnimHumanoid43.joints[46] = HAnimJoint390;

let HAnimJoint391 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint391.USE = "hanim_l_acromioclavicular";
HAnimHumanoid43.joints[47] = HAnimJoint391;

let HAnimJoint392 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint392.USE = "hanim_r_acromioclavicular";
HAnimHumanoid43.joints[48] = HAnimJoint392;

let HAnimJoint393 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint393.USE = "hanim_l_ankle";
HAnimHumanoid43.joints[49] = HAnimJoint393;

let HAnimJoint394 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint394.USE = "hanim_r_ankle";
HAnimHumanoid43.joints[50] = HAnimJoint394;

let HAnimJoint395 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint395.USE = "hanim_l_elbow";
HAnimHumanoid43.joints[51] = HAnimJoint395;

let HAnimJoint396 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint396.USE = "hanim_r_elbow";
HAnimHumanoid43.joints[52] = HAnimJoint396;

let HAnimJoint397 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint397.USE = "hanim_l_eyeball_joint";
HAnimHumanoid43.joints[53] = HAnimJoint397;

let HAnimJoint398 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint398.USE = "hanim_r_eyeball_joint";
HAnimHumanoid43.joints[54] = HAnimJoint398;

let HAnimJoint399 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint399.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid43.joints[55] = HAnimJoint399;

let HAnimJoint400 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint400.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid43.joints[56] = HAnimJoint400;

let HAnimJoint401 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint401.USE = "hanim_l_eyelid_joint";
HAnimHumanoid43.joints[57] = HAnimJoint401;

let HAnimJoint402 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint402.USE = "hanim_r_eyelid_joint";
HAnimHumanoid43.joints[58] = HAnimJoint402;

let HAnimJoint403 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint403.USE = "hanim_l_hip";
HAnimHumanoid43.joints[59] = HAnimJoint403;

let HAnimJoint404 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint404.USE = "hanim_r_hip";
HAnimHumanoid43.joints[60] = HAnimJoint404;

let HAnimJoint405 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint405.USE = "hanim_l_index0";
HAnimHumanoid43.joints[61] = HAnimJoint405;

let HAnimJoint406 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint406.USE = "hanim_r_index0";
HAnimHumanoid43.joints[62] = HAnimJoint406;

let HAnimJoint407 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint407.USE = "hanim_l_index1";
HAnimHumanoid43.joints[63] = HAnimJoint407;

let HAnimJoint408 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint408.USE = "hanim_r_index1";
HAnimHumanoid43.joints[64] = HAnimJoint408;

let HAnimJoint409 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint409.USE = "hanim_l_index2";
HAnimHumanoid43.joints[65] = HAnimJoint409;

let HAnimJoint410 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint410.USE = "hanim_r_index2";
HAnimHumanoid43.joints[66] = HAnimJoint410;

let HAnimJoint411 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint411.USE = "hanim_l_index3";
HAnimHumanoid43.joints[67] = HAnimJoint411;

let HAnimJoint412 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint412.USE = "hanim_r_index3";
HAnimHumanoid43.joints[68] = HAnimJoint412;

let HAnimJoint413 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint413.USE = "hanim_l_knee";
HAnimHumanoid43.joints[69] = HAnimJoint413;

let HAnimJoint414 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint414.USE = "hanim_r_knee";
HAnimHumanoid43.joints[70] = HAnimJoint414;

let HAnimJoint415 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint415.USE = "hanim_l_metatarsal";
HAnimHumanoid43.joints[71] = HAnimJoint415;

let HAnimJoint416 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint416.USE = "hanim_r_metatarsal";
HAnimHumanoid43.joints[72] = HAnimJoint416;

let HAnimJoint417 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint417.USE = "hanim_l_middle0";
HAnimHumanoid43.joints[73] = HAnimJoint417;

let HAnimJoint418 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint418.USE = "hanim_r_middle0";
HAnimHumanoid43.joints[74] = HAnimJoint418;

let HAnimJoint419 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint419.USE = "hanim_l_middle1";
HAnimHumanoid43.joints[75] = HAnimJoint419;

let HAnimJoint420 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint420.USE = "hanim_r_middle1";
HAnimHumanoid43.joints[76] = HAnimJoint420;

let HAnimJoint421 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint421.USE = "hanim_l_middle2";
HAnimHumanoid43.joints[77] = HAnimJoint421;

let HAnimJoint422 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint422.USE = "hanim_r_middle2";
HAnimHumanoid43.joints[78] = HAnimJoint422;

let HAnimJoint423 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint423.USE = "hanim_l_middle3";
HAnimHumanoid43.joints[79] = HAnimJoint423;

let HAnimJoint424 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint424.USE = "hanim_r_middle3";
HAnimHumanoid43.joints[80] = HAnimJoint424;

let HAnimJoint425 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint425.USE = "hanim_l_midtarsal";
HAnimHumanoid43.joints[81] = HAnimJoint425;

let HAnimJoint426 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint426.USE = "hanim_r_midtarsal";
HAnimHumanoid43.joints[82] = HAnimJoint426;

let HAnimJoint427 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint427.USE = "hanim_l_pinky0";
HAnimHumanoid43.joints[83] = HAnimJoint427;

let HAnimJoint428 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint428.USE = "hanim_r_pinky0";
HAnimHumanoid43.joints[84] = HAnimJoint428;

let HAnimJoint429 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint429.USE = "hanim_l_pinky1";
HAnimHumanoid43.joints[85] = HAnimJoint429;

let HAnimJoint430 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint430.USE = "hanim_r_pinky1";
HAnimHumanoid43.joints[86] = HAnimJoint430;

let HAnimJoint431 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint431.USE = "hanim_l_pinky2";
HAnimHumanoid43.joints[87] = HAnimJoint431;

let HAnimJoint432 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint432.USE = "hanim_r_pinky2";
HAnimHumanoid43.joints[88] = HAnimJoint432;

let HAnimJoint433 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint433.USE = "hanim_l_pinky3";
HAnimHumanoid43.joints[89] = HAnimJoint433;

let HAnimJoint434 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint434.USE = "hanim_r_pinky3";
HAnimHumanoid43.joints[90] = HAnimJoint434;

let HAnimJoint435 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint435.USE = "hanim_l_ring0";
HAnimHumanoid43.joints[91] = HAnimJoint435;

let HAnimJoint436 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint436.USE = "hanim_r_ring0";
HAnimHumanoid43.joints[92] = HAnimJoint436;

let HAnimJoint437 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint437.USE = "hanim_l_ring1";
HAnimHumanoid43.joints[93] = HAnimJoint437;

let HAnimJoint438 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint438.USE = "hanim_r_ring1";
HAnimHumanoid43.joints[94] = HAnimJoint438;

let HAnimJoint439 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint439.USE = "hanim_l_ring2";
HAnimHumanoid43.joints[95] = HAnimJoint439;

let HAnimJoint440 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint440.USE = "hanim_r_ring2";
HAnimHumanoid43.joints[96] = HAnimJoint440;

let HAnimJoint441 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint441.USE = "hanim_l_ring3";
HAnimHumanoid43.joints[97] = HAnimJoint441;

let HAnimJoint442 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint442.USE = "hanim_r_ring3";
HAnimHumanoid43.joints[98] = HAnimJoint442;

let HAnimJoint443 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint443.USE = "hanim_l_shoulder";
HAnimHumanoid43.joints[99] = HAnimJoint443;

let HAnimJoint444 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint444.USE = "hanim_r_shoulder";
HAnimHumanoid43.joints[100] = HAnimJoint444;

let HAnimJoint445 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint445.USE = "hanim_l_sternoclavicular";
HAnimHumanoid43.joints[101] = HAnimJoint445;

let HAnimJoint446 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint446.USE = "hanim_r_sternoclavicular";
HAnimHumanoid43.joints[102] = HAnimJoint446;

let HAnimJoint447 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint447.USE = "hanim_l_subtalar";
HAnimHumanoid43.joints[103] = HAnimJoint447;

let HAnimJoint448 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint448.USE = "hanim_r_subtalar";
HAnimHumanoid43.joints[104] = HAnimJoint448;

let HAnimJoint449 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint449.USE = "hanim_l_thumb1";
HAnimHumanoid43.joints[105] = HAnimJoint449;

let HAnimJoint450 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint450.USE = "hanim_r_thumb1";
HAnimHumanoid43.joints[106] = HAnimJoint450;

let HAnimJoint451 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint451.USE = "hanim_l_thumb2";
HAnimHumanoid43.joints[107] = HAnimJoint451;

let HAnimJoint452 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint452.USE = "hanim_r_thumb2";
HAnimHumanoid43.joints[108] = HAnimJoint452;

let HAnimJoint453 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint453.USE = "hanim_l_thumb3";
HAnimHumanoid43.joints[109] = HAnimJoint453;

let HAnimJoint454 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint454.USE = "hanim_r_thumb3";
HAnimHumanoid43.joints[110] = HAnimJoint454;

let HAnimJoint455 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint455.USE = "hanim_l_wrist";
HAnimHumanoid43.joints[111] = HAnimJoint455;

let HAnimJoint456 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint456.USE = "hanim_r_wrist";
HAnimHumanoid43.joints[112] = HAnimJoint456;

let HAnimSegment457 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment457.USE = "hanim_pelvis";
HAnimHumanoid43.segments[113] = HAnimSegment457;

let HAnimSegment458 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment458.USE = "hanim_skull";
HAnimHumanoid43.segments[114] = HAnimSegment458;

let HAnimSegment459 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment459.USE = "hanim_jaw";
HAnimHumanoid43.segments[115] = HAnimSegment459;

let HAnimSegment460 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment460.USE = "hanim_c1";
HAnimHumanoid43.segments[116] = HAnimSegment460;

let HAnimSegment461 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment461.USE = "hanim_c2";
HAnimHumanoid43.segments[117] = HAnimSegment461;

let HAnimSegment462 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment462.USE = "hanim_c3";
HAnimHumanoid43.segments[118] = HAnimSegment462;

let HAnimSegment463 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment463.USE = "hanim_c4";
HAnimHumanoid43.segments[119] = HAnimSegment463;

let HAnimSegment464 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment464.USE = "hanim_c5";
HAnimHumanoid43.segments[120] = HAnimSegment464;

let HAnimSegment465 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment465.USE = "hanim_c6";
HAnimHumanoid43.segments[121] = HAnimSegment465;

let HAnimSegment466 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment466.USE = "hanim_c7";
HAnimHumanoid43.segments[122] = HAnimSegment466;

let HAnimSegment467 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment467.USE = "hanim_t1";
HAnimHumanoid43.segments[123] = HAnimSegment467;

let HAnimSegment468 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment468.USE = "hanim_t2";
HAnimHumanoid43.segments[124] = HAnimSegment468;

let HAnimSegment469 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment469.USE = "hanim_t3";
HAnimHumanoid43.segments[125] = HAnimSegment469;

let HAnimSegment470 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment470.USE = "hanim_t4";
HAnimHumanoid43.segments[126] = HAnimSegment470;

let HAnimSegment471 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment471.USE = "hanim_t5";
HAnimHumanoid43.segments[127] = HAnimSegment471;

let HAnimSegment472 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment472.USE = "hanim_t6";
HAnimHumanoid43.segments[128] = HAnimSegment472;

let HAnimSegment473 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment473.USE = "hanim_t7";
HAnimHumanoid43.segments[129] = HAnimSegment473;

let HAnimSegment474 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment474.USE = "hanim_t8";
HAnimHumanoid43.segments[130] = HAnimSegment474;

let HAnimSegment475 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment475.USE = "hanim_t9";
HAnimHumanoid43.segments[131] = HAnimSegment475;

let HAnimSegment476 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment476.USE = "hanim_t10";
HAnimHumanoid43.segments[132] = HAnimSegment476;

let HAnimSegment477 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment477.USE = "hanim_t11";
HAnimHumanoid43.segments[133] = HAnimSegment477;

let HAnimSegment478 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment478.USE = "hanim_t12";
HAnimHumanoid43.segments[134] = HAnimSegment478;

let HAnimSegment479 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment479.USE = "hanim_l1";
HAnimHumanoid43.segments[135] = HAnimSegment479;

let HAnimSegment480 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment480.USE = "hanim_l2";
HAnimHumanoid43.segments[136] = HAnimSegment480;

let HAnimSegment481 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment481.USE = "hanim_l3";
HAnimHumanoid43.segments[137] = HAnimSegment481;

let HAnimSegment482 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment482.USE = "hanim_l4";
HAnimHumanoid43.segments[138] = HAnimSegment482;

let HAnimSegment483 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment483.USE = "hanim_l5";
HAnimHumanoid43.segments[139] = HAnimSegment483;

let HAnimSegment484 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment484.USE = "hanim_sacrum";
HAnimHumanoid43.segments[140] = HAnimSegment484;

let HAnimSegment485 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment485.USE = "hanim_l_calf";
HAnimHumanoid43.segments[141] = HAnimSegment485;

let HAnimSegment486 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment486.USE = "hanim_r_calf";
HAnimHumanoid43.segments[142] = HAnimSegment486;

let HAnimSegment487 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment487.USE = "hanim_l_clavicle";
HAnimHumanoid43.segments[143] = HAnimSegment487;

let HAnimSegment488 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment488.USE = "hanim_r_clavicle";
HAnimHumanoid43.segments[144] = HAnimSegment488;

let HAnimSegment489 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment489.USE = "hanim_l_eyeball";
HAnimHumanoid43.segments[145] = HAnimSegment489;

let HAnimSegment490 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment490.USE = "hanim_r_eyeball";
HAnimHumanoid43.segments[146] = HAnimSegment490;

let HAnimSegment491 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment491.USE = "hanim_l_eyebrow";
HAnimHumanoid43.segments[147] = HAnimSegment491;

let HAnimSegment492 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment492.USE = "hanim_r_eyebrow";
HAnimHumanoid43.segments[148] = HAnimSegment492;

let HAnimSegment493 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment493.USE = "hanim_l_eyelid";
HAnimHumanoid43.segments[149] = HAnimSegment493;

let HAnimSegment494 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment494.USE = "hanim_r_eyelid";
HAnimHumanoid43.segments[150] = HAnimSegment494;

let HAnimSegment495 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment495.USE = "hanim_l_forearm";
HAnimHumanoid43.segments[151] = HAnimSegment495;

let HAnimSegment496 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment496.USE = "hanim_r_forearm";
HAnimHumanoid43.segments[152] = HAnimSegment496;

let HAnimSegment497 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment497.USE = "hanim_l_forefoot";
HAnimHumanoid43.segments[153] = HAnimSegment497;

let HAnimSegment498 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment498.USE = "hanim_r_forefoot";
HAnimHumanoid43.segments[154] = HAnimSegment498;

let HAnimSegment499 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment499.USE = "hanim_l_hand";
HAnimHumanoid43.segments[155] = HAnimSegment499;

let HAnimSegment500 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment500.USE = "hanim_r_hand";
HAnimHumanoid43.segments[156] = HAnimSegment500;

let HAnimSegment501 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment501.USE = "hanim_l_hindfoot";
HAnimHumanoid43.segments[157] = HAnimSegment501;

let HAnimSegment502 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment502.USE = "hanim_r_hindfoot";
HAnimHumanoid43.segments[158] = HAnimSegment502;

let HAnimSegment503 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment503.USE = "hanim_l_index_distal";
HAnimHumanoid43.segments[159] = HAnimSegment503;

let HAnimSegment504 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment504.USE = "hanim_r_index_distal";
HAnimHumanoid43.segments[160] = HAnimSegment504;

let HAnimSegment505 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment505.USE = "hanim_l_index_metacarpal";
HAnimHumanoid43.segments[161] = HAnimSegment505;

let HAnimSegment506 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment506.USE = "hanim_r_index_metacarpal";
HAnimHumanoid43.segments[162] = HAnimSegment506;

let HAnimSegment507 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment507.USE = "hanim_l_index_middle";
HAnimHumanoid43.segments[163] = HAnimSegment507;

let HAnimSegment508 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment508.USE = "hanim_r_index_middle";
HAnimHumanoid43.segments[164] = HAnimSegment508;

let HAnimSegment509 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment509.USE = "hanim_l_index_proximal";
HAnimHumanoid43.segments[165] = HAnimSegment509;

let HAnimSegment510 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment510.USE = "hanim_r_index_proximal";
HAnimHumanoid43.segments[166] = HAnimSegment510;

let HAnimSegment511 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment511.USE = "hanim_l_middistal";
HAnimHumanoid43.segments[167] = HAnimSegment511;

let HAnimSegment512 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment512.USE = "hanim_r_middistal";
HAnimHumanoid43.segments[168] = HAnimSegment512;

let HAnimSegment513 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment513.USE = "hanim_l_middle_distal";
HAnimHumanoid43.segments[169] = HAnimSegment513;

let HAnimSegment514 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment514.USE = "hanim_r_middle_distal";
HAnimHumanoid43.segments[170] = HAnimSegment514;

let HAnimSegment515 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment515.USE = "hanim_l_middle_metacarpal";
HAnimHumanoid43.segments[171] = HAnimSegment515;

let HAnimSegment516 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment516.USE = "hanim_r_middle_metacarpal";
HAnimHumanoid43.segments[172] = HAnimSegment516;

let HAnimSegment517 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment517.USE = "hanim_l_middle_middle";
HAnimHumanoid43.segments[173] = HAnimSegment517;

let HAnimSegment518 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment518.USE = "hanim_r_middle_middle";
HAnimHumanoid43.segments[174] = HAnimSegment518;

let HAnimSegment519 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment519.USE = "hanim_l_middle_proximal";
HAnimHumanoid43.segments[175] = HAnimSegment519;

let HAnimSegment520 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment520.USE = "hanim_r_middle_proximal";
HAnimHumanoid43.segments[176] = HAnimSegment520;

let HAnimSegment521 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment521.USE = "hanim_l_midproximal";
HAnimHumanoid43.segments[177] = HAnimSegment521;

let HAnimSegment522 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment522.USE = "hanim_r_midproximal";
HAnimHumanoid43.segments[178] = HAnimSegment522;

let HAnimSegment523 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment523.USE = "hanim_l_pinky_distal";
HAnimHumanoid43.segments[179] = HAnimSegment523;

let HAnimSegment524 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment524.USE = "hanim_r_pinky_distal";
HAnimHumanoid43.segments[180] = HAnimSegment524;

let HAnimSegment525 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment525.USE = "hanim_l_pinky_metacarpal";
HAnimHumanoid43.segments[181] = HAnimSegment525;

let HAnimSegment526 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment526.USE = "hanim_r_pinky_metacarpal";
HAnimHumanoid43.segments[182] = HAnimSegment526;

let HAnimSegment527 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment527.USE = "hanim_l_pinky_middle";
HAnimHumanoid43.segments[183] = HAnimSegment527;

let HAnimSegment528 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment528.USE = "hanim_r_pinky_middle";
HAnimHumanoid43.segments[184] = HAnimSegment528;

let HAnimSegment529 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment529.USE = "hanim_l_pinky_proximal";
HAnimHumanoid43.segments[185] = HAnimSegment529;

let HAnimSegment530 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment530.USE = "hanim_r_pinky_proximal";
HAnimHumanoid43.segments[186] = HAnimSegment530;

let HAnimSegment531 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment531.USE = "hanim_l_ring_distal";
HAnimHumanoid43.segments[187] = HAnimSegment531;

let HAnimSegment532 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment532.USE = "hanim_r_ring_distal";
HAnimHumanoid43.segments[188] = HAnimSegment532;

let HAnimSegment533 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment533.USE = "hanim_l_ring_metacarpal";
HAnimHumanoid43.segments[189] = HAnimSegment533;

let HAnimSegment534 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment534.USE = "hanim_r_ring_metacarpal";
HAnimHumanoid43.segments[190] = HAnimSegment534;

let HAnimSegment535 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment535.USE = "hanim_l_ring_middle";
HAnimHumanoid43.segments[191] = HAnimSegment535;

let HAnimSegment536 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment536.USE = "hanim_r_ring_middle";
HAnimHumanoid43.segments[192] = HAnimSegment536;

let HAnimSegment537 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment537.USE = "hanim_l_ring_proximal";
HAnimHumanoid43.segments[193] = HAnimSegment537;

let HAnimSegment538 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment538.USE = "hanim_r_ring_proximal";
HAnimHumanoid43.segments[194] = HAnimSegment538;

let HAnimSegment539 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment539.USE = "hanim_l_scapula";
HAnimHumanoid43.segments[195] = HAnimSegment539;

let HAnimSegment540 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment540.USE = "hanim_r_scapula";
HAnimHumanoid43.segments[196] = HAnimSegment540;

let HAnimSegment541 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment541.USE = "hanim_l_thigh";
HAnimHumanoid43.segments[197] = HAnimSegment541;

let HAnimSegment542 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment542.USE = "hanim_r_thigh";
HAnimHumanoid43.segments[198] = HAnimSegment542;

let HAnimSegment543 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment543.USE = "hanim_l_thumb_distal";
HAnimHumanoid43.segments[199] = HAnimSegment543;

let HAnimSegment544 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment544.USE = "hanim_r_thumb_distal";
HAnimHumanoid43.segments[200] = HAnimSegment544;

let HAnimSegment545 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment545.USE = "hanim_l_thumb_metacarpal";
HAnimHumanoid43.segments[201] = HAnimSegment545;

let HAnimSegment546 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment546.USE = "hanim_r_thumb_metacarpal";
HAnimHumanoid43.segments[202] = HAnimSegment546;

let HAnimSegment547 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment547.USE = "hanim_l_thumb_proximal";
HAnimHumanoid43.segments[203] = HAnimSegment547;

let HAnimSegment548 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment548.USE = "hanim_r_thumb_proximal";
HAnimHumanoid43.segments[204] = HAnimSegment548;

let HAnimSegment549 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment549.USE = "hanim_l_upperarm";
HAnimHumanoid43.segments[205] = HAnimSegment549;

let HAnimSegment550 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment550.USE = "hanim_r_upperarm";
HAnimHumanoid43.segments[206] = HAnimSegment550;

let HAnimSite551 = browser.currentScene.createNode("HAnimSite");
HAnimSite551.USE = "hanim_crotch_pt";
HAnimHumanoid43.viewpoints[207] = HAnimSite551;

let HAnimSite552 = browser.currentScene.createNode("HAnimSite");
HAnimSite552.USE = "hanim_skull_tip";
HAnimHumanoid43.viewpoints[208] = HAnimSite552;

let HAnimSite553 = browser.currentScene.createNode("HAnimSite");
HAnimSite553.USE = "hanim_sellion_pt";
HAnimHumanoid43.viewpoints[209] = HAnimSite553;

let HAnimSite554 = browser.currentScene.createNode("HAnimSite");
HAnimSite554.USE = "hanim_supramenton_pt";
HAnimHumanoid43.viewpoints[210] = HAnimSite554;

let HAnimSite555 = browser.currentScene.createNode("HAnimSite");
HAnimSite555.USE = "hanim_nuchale_pt";
HAnimHumanoid43.viewpoints[211] = HAnimSite555;

let HAnimSite556 = browser.currentScene.createNode("HAnimSite");
HAnimSite556.USE = "hanim_suprasternale_pt";
HAnimHumanoid43.viewpoints[212] = HAnimSite556;

let HAnimSite557 = browser.currentScene.createNode("HAnimSite");
HAnimSite557.USE = "hanim_cervicale_pt";
HAnimHumanoid43.viewpoints[213] = HAnimSite557;

let HAnimSite558 = browser.currentScene.createNode("HAnimSite");
HAnimSite558.USE = "hanim_substernale_pt";
HAnimHumanoid43.viewpoints[214] = HAnimSite558;

let HAnimSite559 = browser.currentScene.createNode("HAnimSite");
HAnimSite559.USE = "hanim_rib10_midspine_pt";
HAnimHumanoid43.viewpoints[215] = HAnimSite559;

let HAnimSite560 = browser.currentScene.createNode("HAnimSite");
HAnimSite560.USE = "hanim_waist_preferred_post_pt";
HAnimHumanoid43.viewpoints[216] = HAnimSite560;

let HAnimSite561 = browser.currentScene.createNode("HAnimSite");
HAnimSite561.USE = "hanim_navel_pt";
HAnimHumanoid43.viewpoints[217] = HAnimSite561;

let HAnimSite562 = browser.currentScene.createNode("HAnimSite");
HAnimSite562.USE = "hanim_l_acromion_pt";
HAnimHumanoid43.viewpoints[218] = HAnimSite562;

let HAnimSite563 = browser.currentScene.createNode("HAnimSite");
HAnimSite563.USE = "hanim_r_acromion_pt";
HAnimHumanoid43.viewpoints[219] = HAnimSite563;

let HAnimSite564 = browser.currentScene.createNode("HAnimSite");
HAnimSite564.USE = "hanim_r_asis_pt";
HAnimHumanoid43.viewpoints[220] = HAnimSite564;

let HAnimSite565 = browser.currentScene.createNode("HAnimSite");
HAnimSite565.USE = "hanim_l_asis_pt";
HAnimHumanoid43.viewpoints[221] = HAnimSite565;

let HAnimSite566 = browser.currentScene.createNode("HAnimSite");
HAnimSite566.USE = "hanim_l_axilla_ant_pt";
HAnimHumanoid43.viewpoints[222] = HAnimSite566;

let HAnimSite567 = browser.currentScene.createNode("HAnimSite");
HAnimSite567.USE = "hanim_r_axilla_ant_pt";
HAnimHumanoid43.viewpoints[223] = HAnimSite567;

let HAnimSite568 = browser.currentScene.createNode("HAnimSite");
HAnimSite568.USE = "hanim_l_axilla_post_pt";
HAnimHumanoid43.viewpoints[224] = HAnimSite568;

let HAnimSite569 = browser.currentScene.createNode("HAnimSite");
HAnimSite569.USE = "hanim_r_axilla_post_pt";
HAnimHumanoid43.viewpoints[225] = HAnimSite569;

let HAnimSite570 = browser.currentScene.createNode("HAnimSite");
HAnimSite570.USE = "hanim_l_calcaneous_post_pt";
HAnimHumanoid43.viewpoints[226] = HAnimSite570;

let HAnimSite571 = browser.currentScene.createNode("HAnimSite");
HAnimSite571.USE = "hanim_r_calcaneous_post_pt";
HAnimHumanoid43.viewpoints[227] = HAnimSite571;

let HAnimSite572 = browser.currentScene.createNode("HAnimSite");
HAnimSite572.USE = "hanim_l_clavicale_pt";
HAnimHumanoid43.viewpoints[228] = HAnimSite572;

let HAnimSite573 = browser.currentScene.createNode("HAnimSite");
HAnimSite573.USE = "hanim_r_clavicale_pt";
HAnimHumanoid43.viewpoints[229] = HAnimSite573;

let HAnimSite574 = browser.currentScene.createNode("HAnimSite");
HAnimSite574.USE = "hanim_l_dactylion_pt";
HAnimHumanoid43.viewpoints[230] = HAnimSite574;

let HAnimSite575 = browser.currentScene.createNode("HAnimSite");
HAnimSite575.USE = "hanim_r_dactylion_pt";
HAnimHumanoid43.viewpoints[231] = HAnimSite575;

let HAnimSite576 = browser.currentScene.createNode("HAnimSite");
HAnimSite576.USE = "hanim_l_digit2_pt";
HAnimHumanoid43.viewpoints[232] = HAnimSite576;

let HAnimSite577 = browser.currentScene.createNode("HAnimSite");
HAnimSite577.USE = "hanim_r_digit2_pt";
HAnimHumanoid43.viewpoints[233] = HAnimSite577;

let HAnimSite578 = browser.currentScene.createNode("HAnimSite");
HAnimSite578.USE = "hanim_l_femoral_lateral_epicn_pt";
HAnimHumanoid43.viewpoints[234] = HAnimSite578;

let HAnimSite579 = browser.currentScene.createNode("HAnimSite");
HAnimSite579.USE = "hanim_r_femoral_lateral_epicn_pt";
HAnimHumanoid43.viewpoints[235] = HAnimSite579;

let HAnimSite580 = browser.currentScene.createNode("HAnimSite");
HAnimSite580.USE = "hanim_l_femoral_medial_epicn_pt";
HAnimHumanoid43.viewpoints[236] = HAnimSite580;

let HAnimSite581 = browser.currentScene.createNode("HAnimSite");
HAnimSite581.USE = "hanim_r_femoral_medial_epicn_pt";
HAnimHumanoid43.viewpoints[237] = HAnimSite581;

let HAnimSite582 = browser.currentScene.createNode("HAnimSite");
HAnimSite582.USE = "hanim_l_forefoot_tip";
HAnimHumanoid43.viewpoints[238] = HAnimSite582;

let HAnimSite583 = browser.currentScene.createNode("HAnimSite");
HAnimSite583.USE = "hanim_r_forefoot_tip";
HAnimHumanoid43.viewpoints[239] = HAnimSite583;

let HAnimSite584 = browser.currentScene.createNode("HAnimSite");
HAnimSite584.USE = "hanim_r_gonion_pt";
HAnimHumanoid43.viewpoints[240] = HAnimSite584;

let HAnimSite585 = browser.currentScene.createNode("HAnimSite");
HAnimSite585.USE = "hanim_l_gonion_pt";
HAnimHumanoid43.viewpoints[241] = HAnimSite585;

let HAnimSite586 = browser.currentScene.createNode("HAnimSite");
HAnimSite586.USE = "hanim_l_humeral_lateral_epicn_pt";
HAnimHumanoid43.viewpoints[242] = HAnimSite586;

let HAnimSite587 = browser.currentScene.createNode("HAnimSite");
HAnimSite587.USE = "hanim_r_humeral_lateral_epicn_pt";
HAnimHumanoid43.viewpoints[243] = HAnimSite587;

let HAnimSite588 = browser.currentScene.createNode("HAnimSite");
HAnimSite588.USE = "hanim_l_humeral_medial_epicn_pt";
HAnimHumanoid43.viewpoints[244] = HAnimSite588;

let HAnimSite589 = browser.currentScene.createNode("HAnimSite");
HAnimSite589.USE = "hanim_r_humeral_medial_epicn_pt";
HAnimHumanoid43.viewpoints[245] = HAnimSite589;

let HAnimSite590 = browser.currentScene.createNode("HAnimSite");
HAnimSite590.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid43.viewpoints[246] = HAnimSite590;

let HAnimSite591 = browser.currentScene.createNode("HAnimSite");
HAnimSite591.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid43.viewpoints[247] = HAnimSite591;

let HAnimSite592 = browser.currentScene.createNode("HAnimSite");
HAnimSite592.USE = "hanim_l_index_distal_tip";
HAnimHumanoid43.viewpoints[248] = HAnimSite592;

let HAnimSite593 = browser.currentScene.createNode("HAnimSite");
HAnimSite593.USE = "hanim_r_index_distal_tip";
HAnimHumanoid43.viewpoints[249] = HAnimSite593;

let HAnimSite594 = browser.currentScene.createNode("HAnimSite");
HAnimSite594.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid43.viewpoints[250] = HAnimSite594;

let HAnimSite595 = browser.currentScene.createNode("HAnimSite");
HAnimSite595.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid43.viewpoints[251] = HAnimSite595;

let HAnimSite596 = browser.currentScene.createNode("HAnimSite");
HAnimSite596.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid43.viewpoints[252] = HAnimSite596;

let HAnimSite597 = browser.currentScene.createNode("HAnimSite");
HAnimSite597.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid43.viewpoints[253] = HAnimSite597;

let HAnimSite598 = browser.currentScene.createNode("HAnimSite");
HAnimSite598.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid43.viewpoints[254] = HAnimSite598;

let HAnimSite599 = browser.currentScene.createNode("HAnimSite");
HAnimSite599.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid43.viewpoints[255] = HAnimSite599;

let HAnimSite600 = browser.currentScene.createNode("HAnimSite");
HAnimSite600.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid43.viewpoints[256] = HAnimSite600;

let HAnimSite601 = browser.currentScene.createNode("HAnimSite");
HAnimSite601.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid43.viewpoints[257] = HAnimSite601;

let HAnimSite602 = browser.currentScene.createNode("HAnimSite");
HAnimSite602.USE = "hanim_l_metacarpal_pha2_pt";
HAnimHumanoid43.viewpoints[258] = HAnimSite602;

let HAnimSite603 = browser.currentScene.createNode("HAnimSite");
HAnimSite603.USE = "hanim_r_metacarpal_pha2_pt";
HAnimHumanoid43.viewpoints[259] = HAnimSite603;

let HAnimSite604 = browser.currentScene.createNode("HAnimSite");
HAnimSite604.USE = "hanim_l_metacarpal_pha5_pt";
HAnimHumanoid43.viewpoints[260] = HAnimSite604;

let HAnimSite605 = browser.currentScene.createNode("HAnimSite");
HAnimSite605.USE = "hanim_r_metacarpal_pha5_pt";
HAnimHumanoid43.viewpoints[261] = HAnimSite605;

let HAnimSite606 = browser.currentScene.createNode("HAnimSite");
HAnimSite606.USE = "hanim_l_metatarsal_pha1_pt";
HAnimHumanoid43.viewpoints[262] = HAnimSite606;

let HAnimSite607 = browser.currentScene.createNode("HAnimSite");
HAnimSite607.USE = "hanim_r_metatarsal_pha1_pt";
HAnimHumanoid43.viewpoints[263] = HAnimSite607;

let HAnimSite608 = browser.currentScene.createNode("HAnimSite");
HAnimSite608.USE = "hanim_l_metatarsal_pha5_pt";
HAnimHumanoid43.viewpoints[264] = HAnimSite608;

let HAnimSite609 = browser.currentScene.createNode("HAnimSite");
HAnimSite609.USE = "hanim_r_metatarsal_pha5_pt";
HAnimHumanoid43.viewpoints[265] = HAnimSite609;

let HAnimSite610 = browser.currentScene.createNode("HAnimSite");
HAnimSite610.USE = "hanim_l_middle_distal_tip";
HAnimHumanoid43.viewpoints[266] = HAnimSite610;

let HAnimSite611 = browser.currentScene.createNode("HAnimSite");
HAnimSite611.USE = "hanim_r_middle_distal_tip";
HAnimHumanoid43.viewpoints[267] = HAnimSite611;

let HAnimSite612 = browser.currentScene.createNode("HAnimSite");
HAnimSite612.USE = "hanim_r_neck_base_pt";
HAnimHumanoid43.viewpoints[268] = HAnimSite612;

let HAnimSite613 = browser.currentScene.createNode("HAnimSite");
HAnimSite613.USE = "hanim_l_neck_base_pt";
HAnimHumanoid43.viewpoints[269] = HAnimSite613;

let HAnimSite614 = browser.currentScene.createNode("HAnimSite");
HAnimSite614.USE = "hanim_l_olecranon_pt";
HAnimHumanoid43.viewpoints[270] = HAnimSite614;

let HAnimSite615 = browser.currentScene.createNode("HAnimSite");
HAnimSite615.USE = "hanim_r_olecranon_pt";
HAnimHumanoid43.viewpoints[271] = HAnimSite615;

let HAnimSite616 = browser.currentScene.createNode("HAnimSite");
HAnimSite616.USE = "hanim_l_pinky_distal_tip";
HAnimHumanoid43.viewpoints[272] = HAnimSite616;

let HAnimSite617 = browser.currentScene.createNode("HAnimSite");
HAnimSite617.USE = "hanim_r_pinky_distal_tip";
HAnimHumanoid43.viewpoints[273] = HAnimSite617;

let HAnimSite618 = browser.currentScene.createNode("HAnimSite");
HAnimSite618.USE = "hanim_r_psis_pt";
HAnimHumanoid43.viewpoints[274] = HAnimSite618;

let HAnimSite619 = browser.currentScene.createNode("HAnimSite");
HAnimSite619.USE = "hanim_l_psis_pt";
HAnimHumanoid43.viewpoints[275] = HAnimSite619;

let HAnimSite620 = browser.currentScene.createNode("HAnimSite");
HAnimSite620.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid43.viewpoints[276] = HAnimSite620;

let HAnimSite621 = browser.currentScene.createNode("HAnimSite");
HAnimSite621.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid43.viewpoints[277] = HAnimSite621;

let HAnimSite622 = browser.currentScene.createNode("HAnimSite");
HAnimSite622.USE = "hanim_l_radiale_pt";
HAnimHumanoid43.viewpoints[278] = HAnimSite622;

let HAnimSite623 = browser.currentScene.createNode("HAnimSite");
HAnimSite623.USE = "hanim_r_radiale_pt";
HAnimHumanoid43.viewpoints[279] = HAnimSite623;

let HAnimSite624 = browser.currentScene.createNode("HAnimSite");
HAnimSite624.USE = "hanim_r_rib10_pt";
HAnimHumanoid43.viewpoints[280] = HAnimSite624;

let HAnimSite625 = browser.currentScene.createNode("HAnimSite");
HAnimSite625.USE = "hanim_l_rib10_pt";
HAnimHumanoid43.viewpoints[281] = HAnimSite625;

let HAnimSite626 = browser.currentScene.createNode("HAnimSite");
HAnimSite626.USE = "hanim_l_ring_distal_tip";
HAnimHumanoid43.viewpoints[282] = HAnimSite626;

let HAnimSite627 = browser.currentScene.createNode("HAnimSite");
HAnimSite627.USE = "hanim_r_ring_distal_tip";
HAnimHumanoid43.viewpoints[283] = HAnimSite627;

let HAnimSite628 = browser.currentScene.createNode("HAnimSite");
HAnimSite628.USE = "hanim_temporomandibular_l_site_pt";
HAnimHumanoid43.viewpoints[284] = HAnimSite628;

let HAnimSite629 = browser.currentScene.createNode("HAnimSite");
HAnimSite629.USE = "hanim_temporomandibular_r_site_pt";
HAnimHumanoid43.viewpoints[285] = HAnimSite629;

let HAnimSite630 = browser.currentScene.createNode("HAnimSite");
HAnimSite630.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid43.viewpoints[286] = HAnimSite630;

let HAnimSite631 = browser.currentScene.createNode("HAnimSite");
HAnimSite631.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid43.viewpoints[287] = HAnimSite631;

let HAnimSite632 = browser.currentScene.createNode("HAnimSite");
HAnimSite632.USE = "hanim_r_thelion_pt";
HAnimHumanoid43.viewpoints[288] = HAnimSite632;

let HAnimSite633 = browser.currentScene.createNode("HAnimSite");
HAnimSite633.USE = "hanim_l_thelion_pt";
HAnimHumanoid43.viewpoints[289] = HAnimSite633;

let HAnimSite634 = browser.currentScene.createNode("HAnimSite");
HAnimSite634.USE = "hanim_l_thumb_distal_tip";
HAnimHumanoid43.viewpoints[290] = HAnimSite634;

let HAnimSite635 = browser.currentScene.createNode("HAnimSite");
HAnimSite635.USE = "hanim_r_thumb_distal_tip";
HAnimHumanoid43.viewpoints[291] = HAnimSite635;

let HAnimSite636 = browser.currentScene.createNode("HAnimSite");
HAnimSite636.USE = "hanim_r_tragion_pt";
HAnimHumanoid43.viewpoints[292] = HAnimSite636;

let HAnimSite637 = browser.currentScene.createNode("HAnimSite");
HAnimSite637.USE = "hanim_l_tragion_pt";
HAnimHumanoid43.viewpoints[293] = HAnimSite637;

let HAnimSite638 = browser.currentScene.createNode("HAnimSite");
HAnimSite638.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid43.viewpoints[294] = HAnimSite638;

let HAnimSite639 = browser.currentScene.createNode("HAnimSite");
HAnimSite639.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid43.viewpoints[295] = HAnimSite639;

let HAnimSite640 = browser.currentScene.createNode("HAnimSite");
HAnimSite640.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid43.viewpoints[296] = HAnimSite640;

let HAnimSite641 = browser.currentScene.createNode("HAnimSite");
HAnimSite641.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid43.viewpoints[297] = HAnimSite641;

browser.currentScene.children[12] = HAnimHumanoid43;


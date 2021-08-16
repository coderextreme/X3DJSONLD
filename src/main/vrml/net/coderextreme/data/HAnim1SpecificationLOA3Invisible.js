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
meta3.content = "HAnimSpecificationLOA3Invisible.x3d";
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
meta7.content = "4 July 2020";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "TODO";
meta8.content = "Convert to X3D4 HAnim2";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "creator";
meta9.content = "Matthew T. Beitler, Joe D. Williams, Don Brutzman";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "reference";
meta10.content = "HAnimSpecificationLOA3Illustrated.x3d";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "reference";
meta11.content = "HAnimSpecificationLOA3Animation.x3d";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "reference";
meta12.content = "HAnimSpecificationExampleChangeLog.txt";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "Image";
meta13.content = "images/BonesAllSkeletonFrontViewLOA1.png";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "Image";
meta14.content = "images/BonesAllSkeletonFrontViewLOA2.png";
head1.meta[12] = meta14;

let meta15 = browser.currentScene.createNode("meta");
meta15.name = "Image";
meta15.content = "images/BonesAllSkeletonFrontViewLOA3.png";
head1.meta[13] = meta15;

let meta16 = browser.currentScene.createNode("meta");
meta16.name = "TODO";
meta16.content = "move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations";
head1.meta[14] = meta16;

let meta17 = browser.currentScene.createNode("meta");
meta17.name = "TODO";
meta17.content = "insert MetadataInteger nodes indicating LOA for each Joint and Segment";
head1.meta[15] = meta17;

let meta18 = browser.currentScene.createNode("meta");
meta18.name = "reference";
meta18.content = "Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.";
head1.meta[16] = meta18;

let meta19 = browser.currentScene.createNode("meta");
meta19.name = "reference";
meta19.content = "http://www.cis.upenn.edu/~badler/anthro/89-71.ps";
head1.meta[17] = meta19;

let meta20 = browser.currentScene.createNode("meta");
meta20.name = "reference";
meta20.content = "tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf";
head1.meta[18] = meta20;

let meta21 = browser.currentScene.createNode("meta");
meta21.name = "translator";
meta21.content = "Don Brutzman and Joe Williams";
head1.meta[19] = meta21;

let meta22 = browser.currentScene.createNode("meta");
meta22.name = "generator";
meta22.content = "BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo";
head1.meta[20] = meta22;

let meta23 = browser.currentScene.createNode("meta");
meta23.name = "reference";
meta23.content = "originals/LOA3ExampleSourceWithDiamondsOriginal.wrl";
head1.meta[21] = meta23;

let meta24 = browser.currentScene.createNode("meta");
meta24.name = "reference";
meta24.content = "originals/LOA3ExampleSourceWithDiamondsOriginal.x3d";
head1.meta[22] = meta24;

let meta25 = browser.currentScene.createNode("meta");
meta25.name = "reference";
meta25.content = "originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d";
head1.meta[23] = meta25;

let meta26 = browser.currentScene.createNode("meta");
meta26.name = "reference";
meta26.content = "HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames";
head1.meta[24] = meta26;

let meta27 = browser.currentScene.createNode("meta");
meta27.name = "generator";
meta27.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[25] = meta27;

let meta28 = browser.currentScene.createNode("meta");
meta28.name = "identifier";
meta28.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/HAnimSpecificationLOA3Invisible.x3d";
head1.meta[26] = meta28;

let meta29 = browser.currentScene.createNode("meta");
meta29.name = "license";
meta29.content = "../license.html";
head1.meta[27] = meta29;

head = head1;

let Background31 = browser.currentScene.createNode("Background");
Background31.skyColor = new MFColor(new float[0.3,0.3,0.3]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Background31;

let NavigationInfo32 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children[1] = NavigationInfo32;

let Group33 = browser.currentScene.createNode("Group");
Group33.DEF = "Original_WorldInfo";
let WorldInfo34 = browser.currentScene.createNode("WorldInfo");
WorldInfo34.info = new MFString(new java.lang.String[" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "]);
WorldInfo34.title = "HANIM 200x Default Joint Centers, LOA3";
Group33.children = new MFNode();

Group33.children[0] = WorldInfo34;

browser.currentScene.children[2] = Group33;

//TODO move viewpoints to be internal to HAnimHumanoid
//Viewpoint centerOfRotation=\"0 0.9149 0.0016\" matches initial at-rest locaton of the sacroliac. Note that these viewpoints are external to the HAnimHumanoid and do not move with the human.
let Viewpoint35 = browser.currentScene.createNode("Viewpoint");
Viewpoint35.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint35.description = "Humanoid LOA 3 Front";
Viewpoint35.position = new SFVec3f(new float[0,0.4,4]);
browser.currentScene.children[3] = Viewpoint35;

let Viewpoint36 = browser.currentScene.createNode("Viewpoint");
Viewpoint36.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint36.description = "Humanoid LOA 3 Front Close";
Viewpoint36.position = new SFVec3f(new float[0,0.8,2]);
browser.currentScene.children[4] = Viewpoint36;

let Viewpoint37 = browser.currentScene.createNode("Viewpoint");
Viewpoint37.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint37.description = "Humanoid LOA 3 Front Closer";
Viewpoint37.position = new SFVec3f(new float[0,1.2,1]);
browser.currentScene.children[5] = Viewpoint37;

let Viewpoint38 = browser.currentScene.createNode("Viewpoint");
Viewpoint38.centerOfRotation = new SFVec3f(new float[0,1.5,0.0016]);
Viewpoint38.description = "Humanoid LOA 3 Front Face";
Viewpoint38.position = new SFVec3f(new float[0,1.63,1]);
browser.currentScene.children[6] = Viewpoint38;

let Viewpoint39 = browser.currentScene.createNode("Viewpoint");
Viewpoint39.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint39.description = "Humanoid LOA 3 Right Side";
Viewpoint39.orientation = new SFRotation(new float[0,1,0,1.5708]);
Viewpoint39.position = new SFVec3f(new float[2.6,0.8,0]);
browser.currentScene.children[7] = Viewpoint39;

let Viewpoint40 = browser.currentScene.createNode("Viewpoint");
Viewpoint40.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint40.description = "Humanoid LOA 3 Right Side Close";
Viewpoint40.orientation = new SFRotation(new float[0,1,0,1.2]);
Viewpoint40.position = new SFVec3f(new float[1,0.8,0.5]);
browser.currentScene.children[8] = Viewpoint40;

let Viewpoint41 = browser.currentScene.createNode("Viewpoint");
Viewpoint41.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint41.description = "Humanoid LOA 3 Left Side Close";
Viewpoint41.orientation = new SFRotation(new float[0,1,0,-1.2]);
Viewpoint41.position = new SFVec3f(new float[-1,0.8,0.5]);
browser.currentScene.children[9] = Viewpoint41;

let Viewpoint42 = browser.currentScene.createNode("Viewpoint");
Viewpoint42.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint42.description = "Humanoid LOA 3 Left Side";
Viewpoint42.orientation = new SFRotation(new float[0,1,0,-1.5708]);
Viewpoint42.position = new SFVec3f(new float[-2.6,0.8,0]);
browser.currentScene.children[10] = Viewpoint42;

let Viewpoint43 = browser.currentScene.createNode("Viewpoint");
Viewpoint43.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint43.description = "Humanoid LOA 3 Top";
Viewpoint43.orientation = new SFRotation(new float[1,0,0,-1.5708]);
Viewpoint43.position = new SFVec3f(new float[0,3.5,0]);
browser.currentScene.children[11] = Viewpoint43;

let HAnimHumanoid44 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid44.name = "humanoid";
HAnimHumanoid44.DEF = "hanim_humanoid";
HAnimHumanoid44.info = new MFString(new java.lang.String["authorName=Matthew T. Beitler Joe D. Williams Don Brutzman","authorEmail=HAnim@web3D.org","copyright=none","creationDate=12 May 1999","usageRestrictions=none","humanoidVersion=2.0","height=1.7504"]);
HAnimHumanoid44.version = "1.0";
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
//right between the eyes, stationary position not animating except with body itself
let HAnimJoint45 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint45.name = "humanoid_root";
HAnimJoint45.DEF = "hanim_humanoid_root";
HAnimJoint45.center = new SFVec3f(new float[0,0.824,0.0277]);
HAnimJoint45.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment46 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment46.name = "sacrum";
HAnimSegment46.DEF = "hanim_sacrum";
HAnimJoint45.children = new MFNode();

HAnimJoint45.children[0] = HAnimSegment46;

let HAnimJoint47 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint47.name = "sacroiliac";
HAnimJoint47.DEF = "hanim_sacroiliac";
HAnimJoint47.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimJoint47.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment48 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment48.name = "pelvis";
HAnimSegment48.DEF = "hanim_pelvis";
let HAnimSite49 = browser.currentScene.createNode("HAnimSite");
HAnimSite49.name = "r_iliocristale_pt";
HAnimSite49.DEF = "hanim_r_iliocristale_pt";
HAnimSite49.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
HAnimSegment48.children = new MFNode();

HAnimSegment48.children[0] = HAnimSite49;

let HAnimSite50 = browser.currentScene.createNode("HAnimSite");
HAnimSite50.name = "r_trochanterion_pt";
HAnimSite50.DEF = "hanim_r_trochanterion_pt";
HAnimSite50.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
HAnimSegment48.children[1] = HAnimSite50;

let HAnimSite51 = browser.currentScene.createNode("HAnimSite");
HAnimSite51.name = "l_iliocristale_pt";
HAnimSite51.DEF = "hanim_l_iliocristale_pt";
HAnimSite51.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
HAnimSegment48.children[2] = HAnimSite51;

let HAnimSite52 = browser.currentScene.createNode("HAnimSite");
HAnimSite52.name = "l_trochanterion_pt";
HAnimSite52.DEF = "hanim_l_trochanterion_pt";
HAnimSite52.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
HAnimSegment48.children[3] = HAnimSite52;

let HAnimSite53 = browser.currentScene.createNode("HAnimSite");
HAnimSite53.name = "r_asis_pt";
HAnimSite53.DEF = "hanim_r_asis_pt";
HAnimSite53.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
HAnimSegment48.children[4] = HAnimSite53;

let HAnimSite54 = browser.currentScene.createNode("HAnimSite");
HAnimSite54.name = "l_asis_pt";
HAnimSite54.DEF = "hanim_l_asis_pt";
HAnimSite54.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
HAnimSegment48.children[5] = HAnimSite54;

let HAnimSite55 = browser.currentScene.createNode("HAnimSite");
HAnimSite55.name = "r_psis_pt";
HAnimSite55.DEF = "hanim_r_psis_pt";
HAnimSite55.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
HAnimSegment48.children[6] = HAnimSite55;

let HAnimSite56 = browser.currentScene.createNode("HAnimSite");
HAnimSite56.name = "l_psis_pt";
HAnimSite56.DEF = "hanim_l_psis_pt";
HAnimSite56.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
HAnimSegment48.children[7] = HAnimSite56;

let HAnimSite57 = browser.currentScene.createNode("HAnimSite");
HAnimSite57.name = "crotch_pt";
HAnimSite57.DEF = "hanim_crotch_pt";
HAnimSite57.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
HAnimSegment48.children[8] = HAnimSite57;

HAnimJoint47.children = new MFNode();

HAnimJoint47.children[0] = HAnimSegment48;

let HAnimJoint58 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint58.name = "l_hip";
HAnimJoint58.DEF = "hanim_l_hip";
HAnimJoint58.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimJoint58.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment59 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment59.name = "l_thigh";
HAnimSegment59.DEF = "hanim_l_thigh";
let HAnimSite60 = browser.currentScene.createNode("HAnimSite");
HAnimSite60.name = "l_knee_crease_pt";
HAnimSite60.DEF = "hanim_l_knee_crease_pt";
HAnimSite60.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
HAnimSegment59.children = new MFNode();

HAnimSegment59.children[0] = HAnimSite60;

let HAnimSite61 = browser.currentScene.createNode("HAnimSite");
HAnimSite61.name = "l_femoral_lateral_epicn_pt";
HAnimSite61.DEF = "hanim_l_femoral_lateral_epicn_pt";
HAnimSite61.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
HAnimSegment59.children[1] = HAnimSite61;

let HAnimSite62 = browser.currentScene.createNode("HAnimSite");
HAnimSite62.name = "l_femoral_medial_epicn_pt";
HAnimSite62.DEF = "hanim_l_femoral_medial_epicn_pt";
HAnimSite62.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
HAnimSegment59.children[2] = HAnimSite62;

HAnimJoint58.children = new MFNode();

HAnimJoint58.children[0] = HAnimSegment59;

let HAnimJoint63 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint63.name = "l_knee";
HAnimJoint63.DEF = "hanim_l_knee";
HAnimJoint63.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimJoint63.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment64 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment64.name = "l_calf";
HAnimSegment64.DEF = "hanim_l_calf";
HAnimJoint63.children = new MFNode();

HAnimJoint63.children[0] = HAnimSegment64;

let HAnimJoint65 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint65.name = "l_ankle";
HAnimJoint65.DEF = "hanim_l_ankle";
HAnimJoint65.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimJoint65.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment66 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment66.name = "l_hindfoot";
HAnimSegment66.DEF = "hanim_l_hindfoot";
let HAnimSite67 = browser.currentScene.createNode("HAnimSite");
HAnimSite67.name = "l_lateral_malleolus_pt";
HAnimSite67.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite67.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
HAnimSegment66.children = new MFNode();

HAnimSegment66.children[0] = HAnimSite67;

let HAnimSite68 = browser.currentScene.createNode("HAnimSite");
HAnimSite68.name = "l_medial_malleolus_pt";
HAnimSite68.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite68.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
HAnimSegment66.children[1] = HAnimSite68;

let HAnimSite69 = browser.currentScene.createNode("HAnimSite");
HAnimSite69.name = "l_sphyrion_pt";
HAnimSite69.DEF = "hanim_l_sphyrion_pt";
HAnimSite69.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
HAnimSegment66.children[2] = HAnimSite69;

let HAnimSite70 = browser.currentScene.createNode("HAnimSite");
HAnimSite70.name = "l_calcaneous_post_pt";
HAnimSite70.DEF = "hanim_l_calcaneous_post_pt";
HAnimSite70.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
HAnimSegment66.children[3] = HAnimSite70;

HAnimJoint65.children = new MFNode();

HAnimJoint65.children[0] = HAnimSegment66;

let HAnimJoint71 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint71.name = "l_subtalar";
HAnimJoint71.DEF = "hanim_l_subtalar";
HAnimJoint71.center = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
HAnimJoint71.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment72 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment72.name = "l_midproximal";
HAnimSegment72.DEF = "hanim_l_midproximal";
HAnimJoint71.children = new MFNode();

HAnimJoint71.children[0] = HAnimSegment72;

let HAnimJoint73 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint73.name = "l_midtarsal";
HAnimJoint73.DEF = "hanim_l_midtarsal";
HAnimJoint73.center = new SFVec3f(new float[0.1086,0.0001,0.0368]);
HAnimJoint73.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment74 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment74.name = "l_middistal";
HAnimSegment74.DEF = "hanim_l_middistal";
let HAnimSite75 = browser.currentScene.createNode("HAnimSite");
HAnimSite75.name = "l_metatarsal_pha1_pt";
HAnimSite75.DEF = "hanim_l_metatarsal_pha1_pt";
HAnimSite75.translation = new SFVec3f(new float[0.0816,0.0232,0.0106]);
HAnimSegment74.children = new MFNode();

HAnimSegment74.children[0] = HAnimSite75;

HAnimJoint73.children = new MFNode();

HAnimJoint73.children[0] = HAnimSegment74;

let HAnimJoint76 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint76.name = "l_metatarsal";
HAnimJoint76.DEF = "hanim_l_metatarsal";
HAnimJoint76.center = new SFVec3f(new float[0.1086,0,0.0762]);
HAnimJoint76.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment77 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment77.name = "l_forefoot";
HAnimSegment77.DEF = "hanim_l_forefoot";
let HAnimSite78 = browser.currentScene.createNode("HAnimSite");
HAnimSite78.name = "l_forefoot_tip";
HAnimSite78.DEF = "hanim_l_forefoot_tip";
HAnimSite78.translation = new SFVec3f(new float[0.1354,0.0016,0.1476]);
HAnimSegment77.children = new MFNode();

HAnimSegment77.children[0] = HAnimSite78;

let HAnimSite79 = browser.currentScene.createNode("HAnimSite");
HAnimSite79.name = "l_metatarsal_pha5_pt";
HAnimSite79.DEF = "hanim_l_metatarsal_pha5_pt";
HAnimSite79.translation = new SFVec3f(new float[0.1825,0.007,0.0928]);
HAnimSegment77.children[1] = HAnimSite79;

let HAnimSite80 = browser.currentScene.createNode("HAnimSite");
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

let HAnimJoint81 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint81.name = "r_hip";
HAnimJoint81.DEF = "hanim_r_hip";
HAnimJoint81.center = new SFVec3f(new float[-0.0961,0.9124,-0.0001]);
HAnimJoint81.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment82 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment82.name = "r_thigh";
HAnimSegment82.DEF = "hanim_r_thigh";
let HAnimSite83 = browser.currentScene.createNode("HAnimSite");
HAnimSite83.name = "r_knee_crease_pt";
HAnimSite83.DEF = "hanim_r_knee_crease_pt";
HAnimSite83.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
HAnimSegment82.children = new MFNode();

HAnimSegment82.children[0] = HAnimSite83;

let HAnimSite84 = browser.currentScene.createNode("HAnimSite");
HAnimSite84.name = "r_femoral_lateral_epicn_pt";
HAnimSite84.DEF = "hanim_r_femoral_lateral_epicn_pt";
HAnimSite84.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
HAnimSegment82.children[1] = HAnimSite84;

let HAnimSite85 = browser.currentScene.createNode("HAnimSite");
HAnimSite85.name = "r_femoral_medial_epicn_pt";
HAnimSite85.DEF = "hanim_r_femoral_medial_epicn_pt";
HAnimSite85.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
HAnimSegment82.children[2] = HAnimSite85;

HAnimJoint81.children = new MFNode();

HAnimJoint81.children[0] = HAnimSegment82;

let HAnimJoint86 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint86.name = "r_knee";
HAnimJoint86.DEF = "hanim_r_knee";
HAnimJoint86.center = new SFVec3f(new float[-0.104,0.4867,0.0308]);
HAnimJoint86.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment87 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment87.name = "r_calf";
HAnimSegment87.DEF = "hanim_r_calf";
HAnimJoint86.children = new MFNode();

HAnimJoint86.children[0] = HAnimSegment87;

let HAnimJoint88 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint88.name = "r_ankle";
HAnimJoint88.DEF = "hanim_r_ankle";
HAnimJoint88.center = new SFVec3f(new float[-0.1101,0.0656,-0.0736]);
HAnimJoint88.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment89 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment89.name = "r_hindfoot";
HAnimSegment89.DEF = "hanim_r_hindfoot";
let HAnimSite90 = browser.currentScene.createNode("HAnimSite");
HAnimSite90.name = "r_lateral_malleolus_pt";
HAnimSite90.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite90.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
HAnimSegment89.children = new MFNode();

HAnimSegment89.children[0] = HAnimSite90;

let HAnimSite91 = browser.currentScene.createNode("HAnimSite");
HAnimSite91.name = "r_medial_malleolus_pt";
HAnimSite91.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite91.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
HAnimSegment89.children[1] = HAnimSite91;

let HAnimSite92 = browser.currentScene.createNode("HAnimSite");
HAnimSite92.name = "r_sphyrion_pt";
HAnimSite92.DEF = "hanim_r_sphyrion_pt";
HAnimSite92.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
HAnimSegment89.children[2] = HAnimSite92;

let HAnimSite93 = browser.currentScene.createNode("HAnimSite");
HAnimSite93.name = "r_calcaneous_post_pt";
HAnimSite93.DEF = "hanim_r_calcaneous_post_pt";
HAnimSite93.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
HAnimSegment89.children[3] = HAnimSite93;

HAnimJoint88.children = new MFNode();

HAnimJoint88.children[0] = HAnimSegment89;

let HAnimJoint94 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint94.name = "r_subtalar";
HAnimJoint94.DEF = "hanim_r_subtalar";
HAnimJoint94.center = new SFVec3f(new float[-0.1086,0.0001,-0.0368]);
HAnimJoint94.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment95 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment95.name = "r_midproximal";
HAnimSegment95.DEF = "hanim_r_midproximal";
HAnimJoint94.children = new MFNode();

HAnimJoint94.children[0] = HAnimSegment95;

let HAnimJoint96 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint96.name = "r_midtarsal";
HAnimJoint96.DEF = "hanim_r_midtarsal";
HAnimJoint96.center = new SFVec3f(new float[-0.1086,0.0001,0.0368]);
HAnimJoint96.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment97 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment97.name = "r_middistal";
HAnimSegment97.DEF = "hanim_r_middistal";
let HAnimSite98 = browser.currentScene.createNode("HAnimSite");
HAnimSite98.name = "r_metatarsal_pha1_pt";
HAnimSite98.DEF = "hanim_r_metatarsal_pha1_pt";
HAnimSite98.translation = new SFVec3f(new float[-0.0521,0.026,0.0127]);
HAnimSegment97.children = new MFNode();

HAnimSegment97.children[0] = HAnimSite98;

HAnimJoint96.children = new MFNode();

HAnimJoint96.children[0] = HAnimSegment97;

let HAnimJoint99 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint99.name = "r_metatarsal";
HAnimJoint99.DEF = "hanim_r_metatarsal";
HAnimJoint99.center = new SFVec3f(new float[-0.1086,0,0.0762]);
HAnimJoint99.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment100 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment100.name = "r_forefoot";
HAnimSegment100.DEF = "hanim_r_forefoot";
let HAnimSite101 = browser.currentScene.createNode("HAnimSite");
HAnimSite101.name = "r_forefoot_tip";
HAnimSite101.DEF = "hanim_r_forefoot_tip";
HAnimSite101.translation = new SFVec3f(new float[-0.1043,0.0227,0.145]);
HAnimSegment100.children = new MFNode();

HAnimSegment100.children[0] = HAnimSite101;

let HAnimSite102 = browser.currentScene.createNode("HAnimSite");
HAnimSite102.name = "r_metatarsal_pha5_pt";
HAnimSite102.DEF = "hanim_r_metatarsal_pha5_pt";
HAnimSite102.translation = new SFVec3f(new float[-0.1523,0.0166,0.0895]);
HAnimSegment100.children[1] = HAnimSite102;

let HAnimSite103 = browser.currentScene.createNode("HAnimSite");
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

let HAnimJoint104 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint104.name = "vl5";
HAnimJoint104.DEF = "hanim_vl5";
HAnimJoint104.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimJoint104.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment105 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment105.name = "l5";
HAnimSegment105.DEF = "hanim_l5";
let HAnimSite106 = browser.currentScene.createNode("HAnimSite");
HAnimSite106.name = "waist_preferred_post_pt";
HAnimSite106.DEF = "hanim_waist_preferred_post_pt";
HAnimSite106.translation = new SFVec3f(new float[0,1.0915,-0.1091]);
HAnimSegment105.children = new MFNode();

HAnimSegment105.children[0] = HAnimSite106;

let HAnimSite107 = browser.currentScene.createNode("HAnimSite");
HAnimSite107.name = "navel_pt";
HAnimSite107.DEF = "hanim_navel_pt";
HAnimSite107.translation = new SFVec3f(new float[0.0069,1.0966,0.1017]);
HAnimSegment105.children[1] = HAnimSite107;

HAnimJoint104.children = new MFNode();

HAnimJoint104.children[0] = HAnimSegment105;

let HAnimJoint108 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint108.name = "vl4";
HAnimJoint108.DEF = "hanim_vl4";
HAnimJoint108.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimJoint108.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment109 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment109.name = "l4";
HAnimSegment109.DEF = "hanim_l4";
HAnimJoint108.children = new MFNode();

HAnimJoint108.children[0] = HAnimSegment109;

let HAnimJoint110 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint110.name = "vl3";
HAnimJoint110.DEF = "hanim_vl3";
HAnimJoint110.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimJoint110.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment111 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment111.name = "l3";
HAnimSegment111.DEF = "hanim_l3";
HAnimJoint110.children = new MFNode();

HAnimJoint110.children[0] = HAnimSegment111;

let HAnimJoint112 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint112.name = "vl2";
HAnimJoint112.DEF = "hanim_vl2";
HAnimJoint112.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimJoint112.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment113 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment113.name = "l2";
HAnimSegment113.DEF = "hanim_l2";
let HAnimSite114 = browser.currentScene.createNode("HAnimSite");
HAnimSite114.name = "r_rib10_pt";
HAnimSite114.DEF = "hanim_r_rib10_pt";
HAnimSite114.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
HAnimSegment113.children = new MFNode();

HAnimSegment113.children[0] = HAnimSite114;

let HAnimSite115 = browser.currentScene.createNode("HAnimSite");
HAnimSite115.name = "l_rib10_pt";
HAnimSite115.DEF = "hanim_l_rib10_pt";
HAnimSite115.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
HAnimSegment113.children[1] = HAnimSite115;

let HAnimSite116 = browser.currentScene.createNode("HAnimSite");
HAnimSite116.name = "rib10_midspine_pt";
HAnimSite116.DEF = "hanim_rib10_midspine_pt";
HAnimSite116.translation = new SFVec3f(new float[0.0049,1.1908,-0.1113]);
HAnimSegment113.children[2] = HAnimSite116;

HAnimJoint112.children = new MFNode();

HAnimJoint112.children[0] = HAnimSegment113;

let HAnimJoint117 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint117.name = "vl1";
HAnimJoint117.DEF = "hanim_vl1";
HAnimJoint117.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimJoint117.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment118 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment118.name = "l1";
HAnimSegment118.DEF = "hanim_l1";
HAnimJoint117.children = new MFNode();

HAnimJoint117.children[0] = HAnimSegment118;

let HAnimJoint119 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint119.name = "vt12";
HAnimJoint119.DEF = "hanim_vt12";
HAnimJoint119.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimJoint119.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment120 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment120.name = "t12";
HAnimSegment120.DEF = "hanim_t12";
HAnimJoint119.children = new MFNode();

HAnimJoint119.children[0] = HAnimSegment120;

let HAnimJoint121 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint121.name = "vt11";
HAnimJoint121.DEF = "hanim_vt11";
HAnimJoint121.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimJoint121.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment122 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment122.name = "t11";
HAnimSegment122.DEF = "hanim_t11";
HAnimJoint121.children = new MFNode();

HAnimJoint121.children[0] = HAnimSegment122;

let HAnimJoint123 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint123.name = "vt10";
HAnimJoint123.DEF = "hanim_vt10";
HAnimJoint123.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimJoint123.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment124 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment124.name = "t10";
HAnimSegment124.DEF = "hanim_t10";
let HAnimSite125 = browser.currentScene.createNode("HAnimSite");
HAnimSite125.name = "substernale_pt";
HAnimSite125.DEF = "hanim_substernale_pt";
HAnimSite125.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
HAnimSegment124.children = new MFNode();

HAnimSegment124.children[0] = HAnimSite125;

HAnimJoint123.children = new MFNode();

HAnimJoint123.children[0] = HAnimSegment124;

let HAnimJoint126 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint126.name = "vt9";
HAnimJoint126.DEF = "hanim_vt9";
HAnimJoint126.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimJoint126.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment127 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment127.name = "t9";
HAnimSegment127.DEF = "hanim_t9";
let HAnimSite128 = browser.currentScene.createNode("HAnimSite");
HAnimSite128.name = "r_thelion_pt";
HAnimSite128.DEF = "hanim_r_thelion_pt";
HAnimSite128.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
HAnimSegment127.children = new MFNode();

HAnimSegment127.children[0] = HAnimSite128;

let HAnimSite129 = browser.currentScene.createNode("HAnimSite");
HAnimSite129.name = "l_thelion_pt";
HAnimSite129.DEF = "hanim_l_thelion_pt";
HAnimSite129.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
HAnimSegment127.children[1] = HAnimSite129;

HAnimJoint126.children = new MFNode();

HAnimJoint126.children[0] = HAnimSegment127;

let HAnimJoint130 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint130.name = "vt8";
HAnimJoint130.DEF = "hanim_vt8";
HAnimJoint130.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimJoint130.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment131 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment131.name = "t8";
HAnimSegment131.DEF = "hanim_t8";
HAnimJoint130.children = new MFNode();

HAnimJoint130.children[0] = HAnimSegment131;

let HAnimJoint132 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint132.name = "vt7";
HAnimJoint132.DEF = "hanim_vt7";
HAnimJoint132.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimJoint132.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment133 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment133.name = "t7";
HAnimSegment133.DEF = "hanim_t7";
HAnimJoint132.children = new MFNode();

HAnimJoint132.children[0] = HAnimSegment133;

let HAnimJoint134 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint134.name = "vt6";
HAnimJoint134.DEF = "hanim_vt6";
HAnimJoint134.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimJoint134.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment135 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment135.name = "t6";
HAnimSegment135.DEF = "hanim_t6";
HAnimJoint134.children = new MFNode();

HAnimJoint134.children[0] = HAnimSegment135;

let HAnimJoint136 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint136.name = "vt5";
HAnimJoint136.DEF = "hanim_vt5";
HAnimJoint136.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimJoint136.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment137 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment137.name = "t5";
HAnimSegment137.DEF = "hanim_t5";
HAnimJoint136.children = new MFNode();

HAnimJoint136.children[0] = HAnimSegment137;

let HAnimJoint138 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint138.name = "vt4";
HAnimJoint138.DEF = "hanim_vt4";
HAnimJoint138.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimJoint138.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment139 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment139.name = "t4";
HAnimSegment139.DEF = "hanim_t4";
HAnimJoint138.children = new MFNode();

HAnimJoint138.children[0] = HAnimSegment139;

let HAnimJoint140 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint140.name = "vt3";
HAnimJoint140.DEF = "hanim_vt3";
HAnimJoint140.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimJoint140.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment141 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment141.name = "t3";
HAnimSegment141.DEF = "hanim_t3";
HAnimJoint140.children = new MFNode();

HAnimJoint140.children[0] = HAnimSegment141;

let HAnimJoint142 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint142.name = "vt2";
HAnimJoint142.DEF = "hanim_vt2";
HAnimJoint142.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimJoint142.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment143 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment143.name = "t2";
HAnimSegment143.DEF = "hanim_t2";
HAnimJoint142.children = new MFNode();

HAnimJoint142.children[0] = HAnimSegment143;

let HAnimJoint144 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint144.name = "vt1";
HAnimJoint144.DEF = "hanim_vt1";
HAnimJoint144.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimJoint144.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment145 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment145.name = "t1";
HAnimSegment145.DEF = "hanim_t1";
let HAnimSite146 = browser.currentScene.createNode("HAnimSite");
HAnimSite146.name = "suprasternale_pt";
HAnimSite146.DEF = "hanim_suprasternale_pt";
HAnimSite146.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
HAnimSegment145.children = new MFNode();

HAnimSegment145.children[0] = HAnimSite146;

let HAnimSite147 = browser.currentScene.createNode("HAnimSite");
HAnimSite147.name = "cervicale_pt";
HAnimSite147.DEF = "hanim_cervicale_pt";
HAnimSite147.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
HAnimSegment145.children[1] = HAnimSite147;

HAnimJoint144.children = new MFNode();

HAnimJoint144.children[0] = HAnimSegment145;

let HAnimJoint148 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint148.name = "vc7";
HAnimJoint148.DEF = "hanim_vc7";
HAnimJoint148.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimJoint148.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment149 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment149.name = "c7";
HAnimSegment149.DEF = "hanim_c7";
let HAnimSite150 = browser.currentScene.createNode("HAnimSite");
HAnimSite150.name = "r_neck_base_pt";
HAnimSite150.DEF = "hanim_r_neck_base_pt";
HAnimSite150.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
HAnimSegment149.children = new MFNode();

HAnimSegment149.children[0] = HAnimSite150;

let HAnimSite151 = browser.currentScene.createNode("HAnimSite");
HAnimSite151.name = "l_neck_base_pt";
HAnimSite151.DEF = "hanim_l_neck_base_pt";
HAnimSite151.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
HAnimSegment149.children[1] = HAnimSite151;

HAnimJoint148.children = new MFNode();

HAnimJoint148.children[0] = HAnimSegment149;

let HAnimJoint152 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint152.name = "vc6";
HAnimJoint152.DEF = "hanim_vc6";
HAnimJoint152.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimJoint152.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment153 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment153.name = "c6";
HAnimSegment153.DEF = "hanim_c6";
HAnimJoint152.children = new MFNode();

HAnimJoint152.children[0] = HAnimSegment153;

let HAnimJoint154 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint154.name = "vc5";
HAnimJoint154.DEF = "hanim_vc5";
HAnimJoint154.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimJoint154.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment155 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment155.name = "c5";
HAnimSegment155.DEF = "hanim_c5";
HAnimJoint154.children = new MFNode();

HAnimJoint154.children[0] = HAnimSegment155;

let HAnimJoint156 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint156.name = "vc4";
HAnimJoint156.DEF = "hanim_vc4";
HAnimJoint156.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimJoint156.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment157 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment157.name = "c4";
HAnimSegment157.DEF = "hanim_c4";
HAnimJoint156.children = new MFNode();

HAnimJoint156.children[0] = HAnimSegment157;

let HAnimJoint158 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint158.name = "vc3";
HAnimJoint158.DEF = "hanim_vc3";
HAnimJoint158.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimJoint158.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment159 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment159.name = "c3";
HAnimSegment159.DEF = "hanim_c3";
HAnimJoint158.children = new MFNode();

HAnimJoint158.children[0] = HAnimSegment159;

let HAnimJoint160 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint160.name = "vc2";
HAnimJoint160.DEF = "hanim_vc2";
HAnimJoint160.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimJoint160.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment161 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment161.name = "c2";
HAnimSegment161.DEF = "hanim_c2";
HAnimJoint160.children = new MFNode();

HAnimJoint160.children[0] = HAnimSegment161;

let HAnimJoint162 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint162.name = "vc1";
HAnimJoint162.DEF = "hanim_vc1";
HAnimJoint162.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimJoint162.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment163 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment163.name = "c1";
HAnimSegment163.DEF = "hanim_c1";
HAnimJoint162.children = new MFNode();

HAnimJoint162.children[0] = HAnimSegment163;

let HAnimJoint164 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint164.name = "skullbase";
HAnimJoint164.DEF = "hanim_skullbase";
HAnimJoint164.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint164.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment165 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment165.name = "skull";
HAnimSegment165.DEF = "hanim_skull";
let HAnimSite166 = browser.currentScene.createNode("HAnimSite");
HAnimSite166.name = "skull_tip";
HAnimSite166.DEF = "hanim_skull_tip";
HAnimSite166.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
//TODO move skull_tip x to zero, check others for symmetry
HAnimSegment165.children = new MFNode();

HAnimSegment165.children[0] = HAnimSite166;

let HAnimSite167 = browser.currentScene.createNode("HAnimSite");
HAnimSite167.name = "sellion_pt";
HAnimSite167.DEF = "hanim_sellion_pt";
HAnimSite167.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
HAnimSegment165.children[1] = HAnimSite167;

let HAnimSite168 = browser.currentScene.createNode("HAnimSite");
HAnimSite168.name = "r_infraorbitale_pt";
HAnimSite168.DEF = "hanim_r_infraorbitale_pt";
HAnimSite168.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
HAnimSegment165.children[2] = HAnimSite168;

let HAnimSite169 = browser.currentScene.createNode("HAnimSite");
HAnimSite169.name = "l_infraorbitale_pt";
HAnimSite169.DEF = "hanim_l_infraorbitale_pt";
HAnimSite169.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
HAnimSegment165.children[3] = HAnimSite169;

let HAnimSite170 = browser.currentScene.createNode("HAnimSite");
HAnimSite170.name = "supramenton_pt";
HAnimSite170.DEF = "hanim_supramenton_pt";
HAnimSite170.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
HAnimSegment165.children[4] = HAnimSite170;

let HAnimSite171 = browser.currentScene.createNode("HAnimSite");
HAnimSite171.name = "r_tragion_pt";
HAnimSite171.DEF = "hanim_r_tragion_pt";
HAnimSite171.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
HAnimSegment165.children[5] = HAnimSite171;

let HAnimSite172 = browser.currentScene.createNode("HAnimSite");
HAnimSite172.name = "r_gonion_pt";
HAnimSite172.DEF = "hanim_r_gonion_pt";
HAnimSite172.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
HAnimSegment165.children[6] = HAnimSite172;

let HAnimSite173 = browser.currentScene.createNode("HAnimSite");
HAnimSite173.name = "l_tragion_pt";
HAnimSite173.DEF = "hanim_l_tragion_pt";
HAnimSite173.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
HAnimSegment165.children[7] = HAnimSite173;

let HAnimSite174 = browser.currentScene.createNode("HAnimSite");
HAnimSite174.name = "l_gonion_pt";
HAnimSite174.DEF = "hanim_l_gonion_pt";
HAnimSite174.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
HAnimSegment165.children[8] = HAnimSite174;

let HAnimSite175 = browser.currentScene.createNode("HAnimSite");
HAnimSite175.name = "nuchale_pt";
HAnimSite175.DEF = "hanim_nuchale_pt";
HAnimSite175.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
HAnimSegment165.children[9] = HAnimSite175;

HAnimJoint164.children = new MFNode();

HAnimJoint164.children[0] = HAnimSegment165;

let HAnimJoint176 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint176.name = "l_eyeball_joint";
HAnimJoint176.DEF = "hanim_l_eyeball_joint";
HAnimJoint176.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
HAnimJoint176.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment177 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment177.name = "l_eyeball";
HAnimSegment177.DEF = "hanim_l_eyeball";
let HAnimSite178 = browser.currentScene.createNode("HAnimSite");
HAnimSite178.name = "l_eyeball_site_view";
HAnimSite178.DEF = "hanim_l_eyeball_site_view";
HAnimSite178.translation = new SFVec3f(new float[0.034,1.64,0.05]);
let Viewpoint179 = browser.currentScene.createNode("Viewpoint");
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

let HAnimJoint180 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint180.name = "l_eyelid_joint";
HAnimJoint180.DEF = "hanim_l_eyelid_joint";
HAnimJoint180.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
HAnimJoint180.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment181 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment181.name = "l_eyelid";
HAnimSegment181.DEF = "hanim_l_eyelid";
HAnimJoint180.children = new MFNode();

HAnimJoint180.children[0] = HAnimSegment181;

HAnimJoint164.children[2] = HAnimJoint180;

let HAnimJoint182 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint182.name = "l_eyebrow_joint";
HAnimJoint182.DEF = "hanim_l_eyebrow_joint";
HAnimJoint182.center = new SFVec3f(new float[0.0336,1.635,0.0506]);
HAnimJoint182.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment183 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment183.name = "l_eyebrow";
HAnimSegment183.DEF = "hanim_l_eyebrow";
HAnimJoint182.children = new MFNode();

HAnimJoint182.children[0] = HAnimSegment183;

HAnimJoint164.children[3] = HAnimJoint182;

let HAnimJoint184 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint184.name = "r_eyeball_joint";
HAnimJoint184.DEF = "hanim_r_eyeball_joint";
HAnimJoint184.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
HAnimJoint184.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment185 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment185.name = "r_eyeball";
HAnimSegment185.DEF = "hanim_r_eyeball";
let HAnimSite186 = browser.currentScene.createNode("HAnimSite");
HAnimSite186.name = "r_eyeball_site_view";
HAnimSite186.DEF = "hanim_r_eyeball_site_view";
HAnimSite186.translation = new SFVec3f(new float[-0.034,1.64,0.05]);
let Viewpoint187 = browser.currentScene.createNode("Viewpoint");
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

let HAnimJoint188 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint188.name = "r_eyelid_joint";
HAnimJoint188.DEF = "hanim_r_eyelid_joint";
HAnimJoint188.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
HAnimJoint188.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment189 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment189.name = "r_eyelid";
HAnimSegment189.DEF = "hanim_r_eyelid";
HAnimJoint188.children = new MFNode();

HAnimJoint188.children[0] = HAnimSegment189;

HAnimJoint164.children[5] = HAnimJoint188;

let HAnimJoint190 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint190.name = "r_eyebrow_joint";
HAnimJoint190.DEF = "hanim_r_eyebrow_joint";
HAnimJoint190.center = new SFVec3f(new float[-0.0336,1.635,0.0506]);
HAnimJoint190.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment191 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment191.name = "r_eyebrow";
HAnimSegment191.DEF = "hanim_r_eyebrow";
HAnimJoint190.children = new MFNode();

HAnimJoint190.children[0] = HAnimSegment191;

HAnimJoint164.children[6] = HAnimJoint190;

let HAnimJoint192 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint192.name = "temporomandibular";
HAnimJoint192.DEF = "hanim_temporomandibular";
HAnimJoint192.center = new SFVec3f(new float[0,1.63,0.015]);
HAnimJoint192.stiffness = new SFVec3f(new float[0,0,0]);
//Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint
let HAnimSegment193 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment193.name = "jaw";
HAnimSegment193.DEF = "hanim_jaw";
let HAnimSite194 = browser.currentScene.createNode("HAnimSite");
HAnimSite194.name = "temporomandibular_l_site_pt";
HAnimSite194.DEF = "hanim_temporomandibular_l_site_pt";
HAnimSite194.translation = new SFVec3f(new float[0.045,1.63,0]);
HAnimSegment193.children = new MFNode();

HAnimSegment193.children[0] = HAnimSite194;

let HAnimSite195 = browser.currentScene.createNode("HAnimSite");
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

let HAnimJoint196 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint196.name = "l_sternoclavicular";
HAnimJoint196.DEF = "hanim_l_sternoclavicular";
HAnimJoint196.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint196.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment197 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment197.name = "l_clavicle";
HAnimSegment197.DEF = "hanim_l_clavicle";
let HAnimSite198 = browser.currentScene.createNode("HAnimSite");
HAnimSite198.name = "l_clavicale_pt";
HAnimSite198.DEF = "hanim_l_clavicale_pt";
HAnimSite198.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
HAnimSegment197.children = new MFNode();

HAnimSegment197.children[0] = HAnimSite198;

let HAnimSite199 = browser.currentScene.createNode("HAnimSite");
HAnimSite199.name = "l_acromion_pt";
HAnimSite199.DEF = "hanim_l_acromion_pt";
HAnimSite199.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
HAnimSegment197.children[1] = HAnimSite199;

let HAnimSite200 = browser.currentScene.createNode("HAnimSite");
HAnimSite200.name = "l_axilla_ant_pt";
HAnimSite200.DEF = "hanim_l_axilla_ant_pt";
HAnimSite200.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
HAnimSegment197.children[2] = HAnimSite200;

let HAnimSite201 = browser.currentScene.createNode("HAnimSite");
HAnimSite201.name = "l_axilla_post_pt";
HAnimSite201.DEF = "hanim_l_axilla_post_pt";
HAnimSite201.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
HAnimSegment197.children[3] = HAnimSite201;

HAnimJoint196.children = new MFNode();

HAnimJoint196.children[0] = HAnimSegment197;

let HAnimJoint202 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint202.name = "l_acromioclavicular";
HAnimJoint202.DEF = "hanim_l_acromioclavicular";
HAnimJoint202.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint202.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment203 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment203.name = "l_scapula";
HAnimSegment203.DEF = "hanim_l_scapula";
HAnimJoint202.children = new MFNode();

HAnimJoint202.children[0] = HAnimSegment203;

let HAnimJoint204 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint204.name = "l_shoulder";
HAnimJoint204.DEF = "hanim_l_shoulder";
HAnimJoint204.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimJoint204.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment205 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment205.name = "l_upperarm";
HAnimSegment205.DEF = "hanim_l_upperarm";
let HAnimSite206 = browser.currentScene.createNode("HAnimSite");
HAnimSite206.name = "l_humeral_lateral_epicn_pt";
HAnimSite206.DEF = "hanim_l_humeral_lateral_epicn_pt";
HAnimSite206.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
HAnimSegment205.children = new MFNode();

HAnimSegment205.children[0] = HAnimSite206;

HAnimJoint204.children = new MFNode();

HAnimJoint204.children[0] = HAnimSegment205;

let HAnimJoint207 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint207.name = "l_elbow";
HAnimJoint207.DEF = "hanim_l_elbow";
HAnimJoint207.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimJoint207.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment208 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment208.name = "l_forearm";
HAnimSegment208.DEF = "hanim_l_forearm";
let HAnimSite209 = browser.currentScene.createNode("HAnimSite");
HAnimSite209.name = "l_radial_styloid_pt";
HAnimSite209.DEF = "hanim_l_radial_styloid_pt";
HAnimSite209.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
HAnimSegment208.children = new MFNode();

HAnimSegment208.children[0] = HAnimSite209;

let HAnimSite210 = browser.currentScene.createNode("HAnimSite");
HAnimSite210.name = "l_olecranon_pt";
HAnimSite210.DEF = "hanim_l_olecranon_pt";
HAnimSite210.translation = new SFVec3f(new float[0.1962,1.1375,-0.1123]);
HAnimSegment208.children[1] = HAnimSite210;

let HAnimSite211 = browser.currentScene.createNode("HAnimSite");
HAnimSite211.name = "l_humeral_medial_epicn_pt";
HAnimSite211.DEF = "hanim_l_humeral_medial_epicn_pt";
HAnimSite211.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
HAnimSegment208.children[2] = HAnimSite211;

let HAnimSite212 = browser.currentScene.createNode("HAnimSite");
HAnimSite212.name = "l_radiale_pt";
HAnimSite212.DEF = "hanim_l_radiale_pt";
HAnimSite212.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
HAnimSegment208.children[3] = HAnimSite212;

HAnimJoint207.children = new MFNode();

HAnimJoint207.children[0] = HAnimSegment208;

let HAnimJoint213 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint213.name = "l_wrist";
HAnimJoint213.DEF = "hanim_l_wrist";
HAnimJoint213.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint213.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment214 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment214.name = "l_hand";
HAnimSegment214.DEF = "hanim_l_hand";
let HAnimSite215 = browser.currentScene.createNode("HAnimSite");
HAnimSite215.name = "l_metacarpal_pha2_pt";
HAnimSite215.DEF = "hanim_l_metacarpal_pha2_pt";
HAnimSite215.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
HAnimSegment214.children = new MFNode();

HAnimSegment214.children[0] = HAnimSite215;

let HAnimSite216 = browser.currentScene.createNode("HAnimSite");
HAnimSite216.name = "l_ulnar_styloid_pt";
HAnimSite216.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite216.translation = new SFVec3f(new float[0.2142,0.8529,-0.0648]);
HAnimSegment214.children[1] = HAnimSite216;

let HAnimSite217 = browser.currentScene.createNode("HAnimSite");
HAnimSite217.name = "l_metacarpal_pha5_pt";
HAnimSite217.DEF = "hanim_l_metacarpal_pha5_pt";
HAnimSite217.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
HAnimSegment214.children[2] = HAnimSite217;

let HAnimSite218 = browser.currentScene.createNode("HAnimSite");
HAnimSite218.name = "l_hand_front_view";
HAnimSite218.DEF = "hanim_l_hand_front_view";
HAnimSite218.translation = new SFVec3f(new float[0.3,0.75,0.45]);
let Viewpoint219 = browser.currentScene.createNode("Viewpoint");
Viewpoint219.DEF = "hanim_l_hand_front_viewpoint";
Viewpoint219.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
Viewpoint219.description = "left hand front";
Viewpoint219.position = new SFVec3f(new float[0,0,0]);
HAnimSite218.children = new MFNode();

HAnimSite218.children[0] = Viewpoint219;

HAnimSegment214.children[3] = HAnimSite218;

HAnimJoint213.children = new MFNode();

HAnimJoint213.children[0] = HAnimSegment214;

let HAnimJoint220 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint220.name = "l_thumb1";
HAnimJoint220.DEF = "hanim_l_thumb1";
HAnimJoint220.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint220.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment221 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment221.name = "l_thumb_metacarpal";
HAnimSegment221.DEF = "hanim_l_thumb_metacarpal";
HAnimJoint220.children = new MFNode();

HAnimJoint220.children[0] = HAnimSegment221;

let HAnimJoint222 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint222.name = "l_thumb2";
HAnimJoint222.DEF = "hanim_l_thumb2";
HAnimJoint222.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint222.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment223 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment223.name = "l_thumb_proximal";
HAnimSegment223.DEF = "hanim_l_thumb_proximal";
HAnimJoint222.children = new MFNode();

HAnimJoint222.children[0] = HAnimSegment223;

let HAnimJoint224 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint224.name = "l_thumb3";
HAnimJoint224.DEF = "hanim_l_thumb3";
HAnimJoint224.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint224.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment225 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment225.name = "l_thumb_distal";
HAnimSegment225.DEF = "hanim_l_thumb_distal";
let HAnimSite226 = browser.currentScene.createNode("HAnimSite");
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

let HAnimJoint227 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint227.name = "l_index0";
HAnimJoint227.DEF = "hanim_l_index0";
HAnimJoint227.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint227.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment228 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment228.name = "l_index_metacarpal";
HAnimSegment228.DEF = "hanim_l_index_metacarpal";
HAnimJoint227.children = new MFNode();

HAnimJoint227.children[0] = HAnimSegment228;

let HAnimJoint229 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint229.name = "l_index1";
HAnimJoint229.DEF = "hanim_l_index1";
HAnimJoint229.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint229.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment230 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment230.name = "l_index_proximal";
HAnimSegment230.DEF = "hanim_l_index_proximal";
HAnimJoint229.children = new MFNode();

HAnimJoint229.children[0] = HAnimSegment230;

let HAnimJoint231 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint231.name = "l_index2";
HAnimJoint231.DEF = "hanim_l_index2";
HAnimJoint231.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint231.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment232 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment232.name = "l_index_middle";
HAnimSegment232.DEF = "hanim_l_index_middle";
HAnimJoint231.children = new MFNode();

HAnimJoint231.children[0] = HAnimSegment232;

let HAnimJoint233 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint233.name = "l_index3";
HAnimJoint233.DEF = "hanim_l_index3";
HAnimJoint233.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint233.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment234 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment234.name = "l_index_distal";
HAnimSegment234.DEF = "hanim_l_index_distal";
let HAnimSite235 = browser.currentScene.createNode("HAnimSite");
HAnimSite235.name = "l_index_distal_tip";
HAnimSite235.DEF = "hanim_l_index_distal_tip";
HAnimSite235.translation = new SFVec3f(new float[0.2089,0.6858,-0.0245]);
HAnimSegment234.children = new MFNode();

HAnimSegment234.children[0] = HAnimSite235;

let HAnimSite236 = browser.currentScene.createNode("HAnimSite");
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

let HAnimJoint237 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint237.name = "l_middle0";
HAnimJoint237.DEF = "hanim_l_middle0";
HAnimJoint237.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint237.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment238 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment238.name = "l_middle_metacarpal";
HAnimSegment238.DEF = "hanim_l_middle_metacarpal";
HAnimJoint237.children = new MFNode();

HAnimJoint237.children[0] = HAnimSegment238;

let HAnimJoint239 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint239.name = "l_middle1";
HAnimJoint239.DEF = "hanim_l_middle1";
HAnimJoint239.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint239.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment240 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment240.name = "l_middle_proximal";
HAnimSegment240.DEF = "hanim_l_middle_proximal";
HAnimJoint239.children = new MFNode();

HAnimJoint239.children[0] = HAnimSegment240;

let HAnimJoint241 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint241.name = "l_middle2";
HAnimJoint241.DEF = "hanim_l_middle2";
HAnimJoint241.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint241.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment242 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment242.name = "l_middle_middle";
HAnimSegment242.DEF = "hanim_l_middle_middle";
HAnimJoint241.children = new MFNode();

HAnimJoint241.children[0] = HAnimSegment242;

let HAnimJoint243 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint243.name = "l_middle3";
HAnimJoint243.DEF = "hanim_l_middle3";
HAnimJoint243.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint243.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment244 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment244.name = "l_middle_distal";
HAnimSegment244.DEF = "hanim_l_middle_distal";
let HAnimSite245 = browser.currentScene.createNode("HAnimSite");
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

let HAnimJoint246 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint246.name = "l_ring0";
HAnimJoint246.DEF = "hanim_l_ring0";
HAnimJoint246.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint246.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment247 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment247.name = "l_ring_metacarpal";
HAnimSegment247.DEF = "hanim_l_ring_metacarpal";
HAnimJoint246.children = new MFNode();

HAnimJoint246.children[0] = HAnimSegment247;

let HAnimJoint248 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint248.name = "l_ring1";
HAnimJoint248.DEF = "hanim_l_ring1";
HAnimJoint248.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint248.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment249 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment249.name = "l_ring_proximal";
HAnimSegment249.DEF = "hanim_l_ring_proximal";
HAnimJoint248.children = new MFNode();

HAnimJoint248.children[0] = HAnimSegment249;

let HAnimJoint250 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint250.name = "l_ring2";
HAnimJoint250.DEF = "hanim_l_ring2";
HAnimJoint250.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint250.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment251 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment251.name = "l_ring_middle";
HAnimSegment251.DEF = "hanim_l_ring_middle";
HAnimJoint250.children = new MFNode();

HAnimJoint250.children[0] = HAnimSegment251;

let HAnimJoint252 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint252.name = "l_ring3";
HAnimJoint252.DEF = "hanim_l_ring3";
HAnimJoint252.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint252.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment253 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment253.name = "l_ring_distal";
HAnimSegment253.DEF = "hanim_l_ring_distal";
let HAnimSite254 = browser.currentScene.createNode("HAnimSite");
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

let HAnimJoint255 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint255.name = "l_pinky0";
HAnimJoint255.DEF = "hanim_l_pinky0";
HAnimJoint255.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint255.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment256 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment256.name = "l_pinky_metacarpal";
HAnimSegment256.DEF = "hanim_l_pinky_metacarpal";
HAnimJoint255.children = new MFNode();

HAnimJoint255.children[0] = HAnimSegment256;

let HAnimJoint257 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint257.name = "l_pinky1";
HAnimJoint257.DEF = "hanim_l_pinky1";
HAnimJoint257.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint257.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment258 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment258.name = "l_pinky_proximal";
HAnimSegment258.DEF = "hanim_l_pinky_proximal";
HAnimJoint257.children = new MFNode();

HAnimJoint257.children[0] = HAnimSegment258;

let HAnimJoint259 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint259.name = "l_pinky2";
HAnimJoint259.DEF = "hanim_l_pinky2";
HAnimJoint259.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint259.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment260 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment260.name = "l_pinky_middle";
HAnimSegment260.DEF = "hanim_l_pinky_middle";
HAnimJoint259.children = new MFNode();

HAnimJoint259.children[0] = HAnimSegment260;

let HAnimJoint261 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint261.name = "l_pinky3";
HAnimJoint261.DEF = "hanim_l_pinky3";
HAnimJoint261.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint261.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment262 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment262.name = "l_pinky_distal";
HAnimSegment262.DEF = "hanim_l_pinky_distal";
let HAnimSite263 = browser.currentScene.createNode("HAnimSite");
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

let HAnimJoint264 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint264.name = "r_sternoclavicular";
HAnimJoint264.DEF = "hanim_r_sternoclavicular";
HAnimJoint264.center = new SFVec3f(new float[-0.082,1.4488,-0.0353]);
HAnimJoint264.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment265 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment265.name = "r_clavicle";
HAnimSegment265.DEF = "hanim_r_clavicle";
let HAnimSite266 = browser.currentScene.createNode("HAnimSite");
HAnimSite266.name = "r_clavicale_pt";
HAnimSite266.DEF = "hanim_r_clavicale_pt";
HAnimSite266.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
HAnimSegment265.children = new MFNode();

HAnimSegment265.children[0] = HAnimSite266;

let HAnimSite267 = browser.currentScene.createNode("HAnimSite");
HAnimSite267.name = "r_acromion_pt";
HAnimSite267.DEF = "hanim_r_acromion_pt";
HAnimSite267.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
HAnimSegment265.children[1] = HAnimSite267;

let HAnimSite268 = browser.currentScene.createNode("HAnimSite");
HAnimSite268.name = "r_axilla_ant_pt";
HAnimSite268.DEF = "hanim_r_axilla_ant_pt";
HAnimSite268.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
HAnimSegment265.children[2] = HAnimSite268;

let HAnimSite269 = browser.currentScene.createNode("HAnimSite");
HAnimSite269.name = "r_axilla_post_pt";
HAnimSite269.DEF = "hanim_r_axilla_post_pt";
HAnimSite269.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
HAnimSegment265.children[3] = HAnimSite269;

HAnimJoint264.children = new MFNode();

HAnimJoint264.children[0] = HAnimSegment265;

let HAnimJoint270 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint270.name = "r_acromioclavicular";
HAnimJoint270.DEF = "hanim_r_acromioclavicular";
HAnimJoint270.center = new SFVec3f(new float[-0.0962,1.4269,-0.0424]);
HAnimJoint270.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment271 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment271.name = "r_scapula";
HAnimSegment271.DEF = "hanim_r_scapula";
HAnimJoint270.children = new MFNode();

HAnimJoint270.children[0] = HAnimSegment271;

let HAnimJoint272 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint272.name = "r_shoulder";
HAnimJoint272.DEF = "hanim_r_shoulder";
HAnimJoint272.center = new SFVec3f(new float[-0.2029,1.4376,-0.0387]);
HAnimJoint272.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment273 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment273.name = "r_upperarm";
HAnimSegment273.DEF = "hanim_r_upperarm";
let HAnimSite274 = browser.currentScene.createNode("HAnimSite");
HAnimSite274.name = "r_humeral_lateral_epicn_pt";
HAnimSite274.DEF = "hanim_r_humeral_lateral_epicn_pt";
HAnimSite274.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
HAnimSegment273.children = new MFNode();

HAnimSegment273.children[0] = HAnimSite274;

HAnimJoint272.children = new MFNode();

HAnimJoint272.children[0] = HAnimSegment273;

let HAnimJoint275 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint275.name = "r_elbow";
HAnimJoint275.DEF = "hanim_r_elbow";
HAnimJoint275.center = new SFVec3f(new float[-0.2014,1.1357,-0.0682]);
HAnimJoint275.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment276 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment276.name = "r_forearm";
HAnimSegment276.DEF = "hanim_r_forearm";
let HAnimSite277 = browser.currentScene.createNode("HAnimSite");
HAnimSite277.name = "r_radial_styloid_pt";
HAnimSite277.DEF = "hanim_r_radial_styloid_pt";
HAnimSite277.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
HAnimSegment276.children = new MFNode();

HAnimSegment276.children[0] = HAnimSite277;

let HAnimSite278 = browser.currentScene.createNode("HAnimSite");
HAnimSite278.name = "r_olecranon_pt";
HAnimSite278.DEF = "hanim_r_olecranon_pt";
HAnimSite278.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
HAnimSegment276.children[1] = HAnimSite278;

let HAnimSite279 = browser.currentScene.createNode("HAnimSite");
HAnimSite279.name = "r_humeral_medial_epicn_pt";
HAnimSite279.DEF = "hanim_r_humeral_medial_epicn_pt";
HAnimSite279.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
HAnimSegment276.children[2] = HAnimSite279;

let HAnimSite280 = browser.currentScene.createNode("HAnimSite");
HAnimSite280.name = "r_radiale_pt";
HAnimSite280.DEF = "hanim_r_radiale_pt";
HAnimSite280.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
HAnimSegment276.children[3] = HAnimSite280;

HAnimJoint275.children = new MFNode();

HAnimJoint275.children[0] = HAnimSegment276;

let HAnimJoint281 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint281.name = "r_wrist";
HAnimJoint281.DEF = "hanim_r_wrist";
HAnimJoint281.center = new SFVec3f(new float[-0.1984,0.8663,-0.0583]);
HAnimJoint281.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment282 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment282.name = "r_hand";
HAnimSegment282.DEF = "hanim_r_hand";
let HAnimSite283 = browser.currentScene.createNode("HAnimSite");
HAnimSite283.name = "r_metacarpal_pha2_pt";
HAnimSite283.DEF = "hanim_r_metacarpal_pha2_pt";
HAnimSite283.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
HAnimSegment282.children = new MFNode();

HAnimSegment282.children[0] = HAnimSite283;

let HAnimSite284 = browser.currentScene.createNode("HAnimSite");
HAnimSite284.name = "r_ulnar_styloid_pt";
HAnimSite284.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite284.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
HAnimSegment282.children[1] = HAnimSite284;

let HAnimSite285 = browser.currentScene.createNode("HAnimSite");
HAnimSite285.name = "r_metacarpal_pha5_pt";
HAnimSite285.DEF = "hanim_r_metacarpal_pha5_pt";
HAnimSite285.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
HAnimSegment282.children[2] = HAnimSite285;

let HAnimSite286 = browser.currentScene.createNode("HAnimSite");
HAnimSite286.name = "r_hand_front_view";
HAnimSite286.DEF = "hanim_r_hand_front_view";
HAnimSite286.translation = new SFVec3f(new float[-0.3,0.75,0.45]);
let Viewpoint287 = browser.currentScene.createNode("Viewpoint");
Viewpoint287.DEF = "hanim_r_hand_front_viewpoint";
Viewpoint287.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
Viewpoint287.description = "right hand front";
Viewpoint287.position = new SFVec3f(new float[0,0,0]);
HAnimSite286.children = new MFNode();

HAnimSite286.children[0] = Viewpoint287;

HAnimSegment282.children[3] = HAnimSite286;

HAnimJoint281.children = new MFNode();

HAnimJoint281.children[0] = HAnimSegment282;

let HAnimJoint288 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint288.name = "r_thumb1";
HAnimJoint288.DEF = "hanim_r_thumb1";
HAnimJoint288.center = new SFVec3f(new float[-0.1924,0.8472,-0.0534]);
HAnimJoint288.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment289 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment289.name = "r_thumb_metacarpal";
HAnimSegment289.DEF = "hanim_r_thumb_metacarpal";
HAnimJoint288.children = new MFNode();

HAnimJoint288.children[0] = HAnimSegment289;

let HAnimJoint290 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint290.name = "r_thumb2";
HAnimJoint290.DEF = "hanim_r_thumb2";
HAnimJoint290.center = new SFVec3f(new float[-0.1951,0.8226,0.0246]);
HAnimJoint290.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment291 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment291.name = "r_thumb_proximal";
HAnimSegment291.DEF = "hanim_r_thumb_proximal";
HAnimJoint290.children = new MFNode();

HAnimJoint290.children[0] = HAnimSegment291;

let HAnimJoint292 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint292.name = "r_thumb3";
HAnimJoint292.DEF = "hanim_r_thumb3";
HAnimJoint292.center = new SFVec3f(new float[-0.1955,0.8159,0.0464]);
HAnimJoint292.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment293 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment293.name = "r_thumb_distal";
HAnimSegment293.DEF = "hanim_r_thumb_distal";
let HAnimSite294 = browser.currentScene.createNode("HAnimSite");
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

let HAnimJoint295 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint295.name = "r_index0";
HAnimJoint295.DEF = "hanim_r_index0";
HAnimJoint295.center = new SFVec3f(new float[-0.1983,0.8024,-0.028]);
HAnimJoint295.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment296 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment296.name = "r_index_metacarpal";
HAnimSegment296.DEF = "hanim_r_index_metacarpal";
HAnimJoint295.children = new MFNode();

HAnimJoint295.children[0] = HAnimSegment296;

let HAnimJoint297 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint297.name = "r_index1";
HAnimJoint297.DEF = "hanim_r_index1";
HAnimJoint297.center = new SFVec3f(new float[-0.1983,0.7815,-0.028]);
HAnimJoint297.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment298 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment298.name = "r_index_proximal";
HAnimSegment298.DEF = "hanim_r_index_proximal";
HAnimJoint297.children = new MFNode();

HAnimJoint297.children[0] = HAnimSegment298;

let HAnimJoint299 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint299.name = "r_index2";
HAnimJoint299.DEF = "hanim_r_index2";
HAnimJoint299.center = new SFVec3f(new float[-0.2017,0.7363,-0.0248]);
HAnimJoint299.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment300 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment300.name = "r_index_middle";
HAnimSegment300.DEF = "hanim_r_index_middle";
HAnimJoint299.children = new MFNode();

HAnimJoint299.children[0] = HAnimSegment300;

let HAnimJoint301 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint301.name = "r_index3";
HAnimJoint301.DEF = "hanim_r_index3";
HAnimJoint301.center = new SFVec3f(new float[-0.2028,0.7139,-0.0236]);
HAnimJoint301.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment302 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment302.name = "r_index_distal";
HAnimSegment302.DEF = "hanim_r_index_distal";
let HAnimSite303 = browser.currentScene.createNode("HAnimSite");
HAnimSite303.name = "r_index_distal_tip";
HAnimSite303.DEF = "hanim_r_index_distal_tip";
HAnimSite303.translation = new SFVec3f(new float[-0.198,0.6883,-0.018]);
HAnimSegment302.children = new MFNode();

HAnimSegment302.children[0] = HAnimSite303;

let HAnimSite304 = browser.currentScene.createNode("HAnimSite");
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

let HAnimJoint305 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint305.name = "r_middle0";
HAnimJoint305.DEF = "hanim_r_middle0";
HAnimJoint305.center = new SFVec3f(new float[-0.1987,0.8029,-0.053]);
HAnimJoint305.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment306 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment306.name = "r_middle_metacarpal";
HAnimSegment306.DEF = "hanim_r_middle_metacarpal";
HAnimJoint305.children = new MFNode();

HAnimJoint305.children[0] = HAnimSegment306;

let HAnimJoint307 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint307.name = "r_middle1";
HAnimJoint307.DEF = "hanim_r_middle1";
HAnimJoint307.center = new SFVec3f(new float[-0.1987,0.7818,-0.053]);
HAnimJoint307.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment308 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment308.name = "r_middle_proximal";
HAnimSegment308.DEF = "hanim_r_middle_proximal";
HAnimJoint307.children = new MFNode();

HAnimJoint307.children[0] = HAnimSegment308;

let HAnimJoint309 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint309.name = "r_middle2";
HAnimJoint309.DEF = "hanim_r_middle2";
HAnimJoint309.center = new SFVec3f(new float[-0.2013,0.7273,-0.0503]);
HAnimJoint309.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment310 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment310.name = "r_middle_middle";
HAnimSegment310.DEF = "hanim_r_middle_middle";
HAnimJoint309.children = new MFNode();

HAnimJoint309.children[0] = HAnimSegment310;

let HAnimJoint311 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint311.name = "r_middle3";
HAnimJoint311.DEF = "hanim_r_middle3";
HAnimJoint311.center = new SFVec3f(new float[-0.2026,0.7011,-0.0494]);
HAnimJoint311.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment312 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment312.name = "r_middle_distal";
HAnimSegment312.DEF = "hanim_r_middle_distal";
let HAnimSite313 = browser.currentScene.createNode("HAnimSite");
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

let HAnimJoint314 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint314.name = "r_ring0";
HAnimJoint314.DEF = "hanim_r_ring0";
HAnimJoint314.center = new SFVec3f(new float[-0.1956,0.8019,-0.0794]);
HAnimJoint314.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment315 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment315.name = "r_ring_metacarpal";
HAnimSegment315.DEF = "hanim_r_ring_metacarpal";
HAnimJoint314.children = new MFNode();

HAnimJoint314.children[0] = HAnimSegment315;

let HAnimJoint316 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint316.name = "r_ring1";
HAnimJoint316.DEF = "hanim_r_ring1";
HAnimJoint316.center = new SFVec3f(new float[-0.1956,0.7815,-0.0794]);
HAnimJoint316.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment317 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment317.name = "r_ring_proximal";
HAnimSegment317.DEF = "hanim_r_ring_proximal";
HAnimJoint316.children = new MFNode();

HAnimJoint316.children[0] = HAnimSegment317;

let HAnimJoint318 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint318.name = "r_ring2";
HAnimJoint318.DEF = "hanim_r_ring2";
HAnimJoint318.center = new SFVec3f(new float[-0.1973,0.7287,-0.0777]);
HAnimJoint318.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment319 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment319.name = "r_ring_middle";
HAnimSegment319.DEF = "hanim_r_ring_middle";
HAnimJoint318.children = new MFNode();

HAnimJoint318.children[0] = HAnimSegment319;

let HAnimJoint320 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint320.name = "r_ring3";
HAnimJoint320.DEF = "hanim_r_ring3";
HAnimJoint320.center = new SFVec3f(new float[-0.1983,0.7045,-0.0767]);
HAnimJoint320.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment321 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment321.name = "r_ring_distal";
HAnimSegment321.DEF = "hanim_r_ring_distal";
let HAnimSite322 = browser.currentScene.createNode("HAnimSite");
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

let HAnimJoint323 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint323.name = "r_pinky0";
HAnimJoint323.DEF = "hanim_r_pinky0";
HAnimJoint323.center = new SFVec3f(new float[-0.1925,0.8066,-0.1036]);
HAnimJoint323.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment324 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment324.name = "r_pinky_metacarpal";
HAnimSegment324.DEF = "hanim_r_pinky_metacarpal";
HAnimJoint323.children = new MFNode();

HAnimJoint323.children[0] = HAnimSegment324;

let HAnimJoint325 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint325.name = "r_pinky1";
HAnimJoint325.DEF = "hanim_r_pinky1";
HAnimJoint325.center = new SFVec3f(new float[-0.1925,0.7866,-0.1036]);
HAnimJoint325.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment326 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment326.name = "r_pinky_proximal";
HAnimSegment326.DEF = "hanim_r_pinky_proximal";
HAnimJoint325.children = new MFNode();

HAnimJoint325.children[0] = HAnimSegment326;

let HAnimJoint327 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint327.name = "r_pinky2";
HAnimJoint327.DEF = "hanim_r_pinky2";
HAnimJoint327.center = new SFVec3f(new float[-0.1938,0.7452,-0.1024]);
HAnimJoint327.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment328 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment328.name = "r_pinky_middle";
HAnimSegment328.DEF = "hanim_r_pinky_middle";
HAnimJoint327.children = new MFNode();

HAnimJoint327.children[0] = HAnimSegment328;

let HAnimJoint329 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint329.name = "r_pinky3";
HAnimJoint329.DEF = "hanim_r_pinky3";
HAnimJoint329.center = new SFVec3f(new float[-0.1948,0.7277,-0.1017]);
HAnimJoint329.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment330 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment330.name = "r_pinky_distal";
HAnimSegment330.DEF = "hanim_r_pinky_distal";
let HAnimSite331 = browser.currentScene.createNode("HAnimSite");
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

let HAnimSite332 = browser.currentScene.createNode("HAnimSite");
HAnimSite332.name = "l_inclined_view";
HAnimSite332.DEF = "hanim_l_inclined_view";
HAnimSite332.rotation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
HAnimSite332.translation = new SFVec3f(new float[1.62,1.05,2.06]);
let Viewpoint333 = browser.currentScene.createNode("Viewpoint");
Viewpoint333.DEF = "hanim_l_inclined_viewpoint";
Viewpoint333.description = "left inclined";
Viewpoint333.position = new SFVec3f(new float[0,0,0]);
HAnimSite332.children = new MFNode();

HAnimSite332.children[0] = Viewpoint333;

HAnimHumanoid44.viewpoints[1] = HAnimSite332;

let HAnimSite334 = browser.currentScene.createNode("HAnimSite");
HAnimSite334.name = "r_inclined_view";
HAnimSite334.DEF = "hanim_r_inclined_view";
HAnimSite334.rotation = new SFRotation(new float[-0.113,-0.993,0.0347,0.671]);
HAnimSite334.translation = new SFVec3f(new float[-1.62,1.05,2.06]);
let Viewpoint335 = browser.currentScene.createNode("Viewpoint");
Viewpoint335.DEF = "hanim_r_inclined_viewpoint";
Viewpoint335.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint335.description = "right inclined";
Viewpoint335.position = new SFVec3f(new float[0,0,0]);
HAnimSite334.children = new MFNode();

HAnimSite334.children[0] = Viewpoint335;

HAnimHumanoid44.viewpoints[2] = HAnimSite334;

let HAnimSite336 = browser.currentScene.createNode("HAnimSite");
HAnimSite336.name = "front_view";
HAnimSite336.DEF = "hanim_front_view";
HAnimSite336.translation = new SFVec3f(new float[0,0.85,2.58]);
let Viewpoint337 = browser.currentScene.createNode("Viewpoint");
Viewpoint337.DEF = "hanim_front_viewpoint";
Viewpoint337.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint337.description = "front";
Viewpoint337.position = new SFVec3f(new float[0,0,0]);
HAnimSite336.children = new MFNode();

HAnimSite336.children[0] = Viewpoint337;

HAnimHumanoid44.viewpoints[3] = HAnimSite336;

let HAnimSite338 = browser.currentScene.createNode("HAnimSite");
HAnimSite338.name = "back_view";
HAnimSite338.DEF = "hanim_back_view";
HAnimSite338.rotation = new SFRotation(new float[0,1,0,3.14]);
HAnimSite338.translation = new SFVec3f(new float[0,0.85,-2.58]);
let Viewpoint339 = browser.currentScene.createNode("Viewpoint");
Viewpoint339.DEF = "hanim_back_viewpoint";
Viewpoint339.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint339.description = "back";
Viewpoint339.position = new SFVec3f(new float[0,0,0]);
HAnimSite338.children = new MFNode();

HAnimSite338.children[0] = Viewpoint339;

HAnimHumanoid44.viewpoints[4] = HAnimSite338;

let HAnimSite340 = browser.currentScene.createNode("HAnimSite");
HAnimSite340.name = "l_side_view";
HAnimSite340.DEF = "hanim_l_side_view";
HAnimSite340.rotation = new SFRotation(new float[0,1,0,1.5708]);
HAnimSite340.translation = new SFVec3f(new float[2.6,0.854,0]);
let Viewpoint341 = browser.currentScene.createNode("Viewpoint");
Viewpoint341.DEF = "hanim_l_side_viewpoint";
Viewpoint341.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint341.description = "left side";
Viewpoint341.position = new SFVec3f(new float[0,0,0]);
HAnimSite340.children = new MFNode();

HAnimSite340.children[0] = Viewpoint341;

HAnimHumanoid44.viewpoints[5] = HAnimSite340;

let HAnimSite342 = browser.currentScene.createNode("HAnimSite");
HAnimSite342.name = "Top_view";
HAnimSite342.DEF = "hanim_Top_view";
HAnimSite342.rotation = new SFRotation(new float[1,0,0,-1.57]);
HAnimSite342.translation = new SFVec3f(new float[0,3.5,0]);
let Viewpoint343 = browser.currentScene.createNode("Viewpoint");
Viewpoint343.DEF = "hanim_Top_viewpoint";
Viewpoint343.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint343.description = "Top";
Viewpoint343.position = new SFVec3f(new float[0,0,0]);
HAnimSite342.children = new MFNode();

HAnimSite342.children[0] = Viewpoint343;

HAnimHumanoid44.viewpoints[6] = HAnimSite342;

let HAnimSite344 = browser.currentScene.createNode("HAnimSite");
HAnimSite344.name = "front_close_view";
HAnimSite344.DEF = "hanim_front_close_view";
HAnimSite344.translation = new SFVec3f(new float[0,0.854,1.575]);
let Viewpoint345 = browser.currentScene.createNode("Viewpoint");
Viewpoint345.DEF = "hanim_front_close_viewpoint";
Viewpoint345.centerOfRotation = new SFVec3f(new float[0,0,1.575]);
Viewpoint345.description = "front close";
Viewpoint345.position = new SFVec3f(new float[0,0,0]);
HAnimSite344.children = new MFNode();

HAnimSite344.children[0] = Viewpoint345;

HAnimHumanoid44.viewpoints[7] = HAnimSite344;

let HAnimSite346 = browser.currentScene.createNode("HAnimSite");
HAnimSite346.name = "side_close_view";
HAnimSite346.DEF = "hanim_side_close_view";
HAnimSite346.rotation = new SFRotation(new float[0,1,0,1.5708]);
HAnimSite346.translation = new SFVec3f(new float[1.56,0.854,0]);
let Viewpoint347 = browser.currentScene.createNode("Viewpoint");
Viewpoint347.DEF = "hanim_side_close_viewpoint";
Viewpoint347.centerOfRotation = new SFVec3f(new float[1.6,0,0]);
Viewpoint347.description = "side close";
Viewpoint347.position = new SFVec3f(new float[0,0,0]);
HAnimSite346.children = new MFNode();

HAnimSite346.children[0] = Viewpoint347;

HAnimHumanoid44.viewpoints[8] = HAnimSite346;

let HAnimSite348 = browser.currentScene.createNode("HAnimSite");
HAnimSite348.name = "head_front_close_view";
HAnimSite348.DEF = "hanim_head_front_close_view";
HAnimSite348.translation = new SFVec3f(new float[0,1.5,1]);
let Viewpoint349 = browser.currentScene.createNode("Viewpoint");
Viewpoint349.DEF = "hanim_head_front_close_viewpoint";
Viewpoint349.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint349.description = "head front close";
Viewpoint349.position = new SFVec3f(new float[0,0,0]);
HAnimSite348.children = new MFNode();

HAnimSite348.children[0] = Viewpoint349;

HAnimHumanoid44.viewpoints[9] = HAnimSite348;

let HAnimSite350 = browser.currentScene.createNode("HAnimSite");
HAnimSite350.name = "chest_front_close_view";
HAnimSite350.DEF = "hanim_chest_front_close_view";
HAnimSite350.translation = new SFVec3f(new float[0,1.2,1]);
let Viewpoint351 = browser.currentScene.createNode("Viewpoint");
Viewpoint351.DEF = "hanim_chest_front_close_viewpoint";
Viewpoint351.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint351.description = "chest front close";
Viewpoint351.position = new SFVec3f(new float[0,0,0]);
HAnimSite350.children = new MFNode();

HAnimSite350.children[0] = Viewpoint351;

HAnimHumanoid44.viewpoints[10] = HAnimSite350;

let HAnimSite352 = browser.currentScene.createNode("HAnimSite");
HAnimSite352.name = "pelvis_front_close_view";
HAnimSite352.DEF = "hanim_pelvis_front_close_view";
HAnimSite352.translation = new SFVec3f(new float[0,0.8,1]);
let Viewpoint353 = browser.currentScene.createNode("Viewpoint");
Viewpoint353.DEF = "hanim_pelvis_front_close_viewpoint";
Viewpoint353.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint353.description = "pelvis front close";
Viewpoint353.position = new SFVec3f(new float[0,0,0]);
HAnimSite352.children = new MFNode();

HAnimSite352.children[0] = Viewpoint353;

HAnimHumanoid44.viewpoints[11] = HAnimSite352;

let HAnimSite354 = browser.currentScene.createNode("HAnimSite");
HAnimSite354.name = "knees_front_close_view";
HAnimSite354.DEF = "hanim_knees_front_close_view";
HAnimSite354.translation = new SFVec3f(new float[0,0.4,1]);
let Viewpoint355 = browser.currentScene.createNode("Viewpoint");
Viewpoint355.DEF = "hanim_knees_front_close_viewpoint";
Viewpoint355.centerOfRotation = new SFVec3f(new float[0,0.4,0]);
Viewpoint355.description = "knees front close";
Viewpoint355.position = new SFVec3f(new float[0,0,0]);
HAnimSite354.children = new MFNode();

HAnimSite354.children[0] = Viewpoint355;

HAnimHumanoid44.viewpoints[12] = HAnimSite354;

let HAnimSite356 = browser.currentScene.createNode("HAnimSite");
HAnimSite356.name = "feet_front_close_view";
HAnimSite356.DEF = "hanim_feet_front_close_view";
HAnimSite356.translation = new SFVec3f(new float[0,0,1]);
let Viewpoint357 = browser.currentScene.createNode("Viewpoint");
Viewpoint357.DEF = "hanim_feet_front_close_viewpoint";
Viewpoint357.description = "feet front close";
Viewpoint357.position = new SFVec3f(new float[0,0,0]);
HAnimSite356.children = new MFNode();

HAnimSite356.children[0] = Viewpoint357;

HAnimHumanoid44.viewpoints[13] = HAnimSite356;

let HAnimSite358 = browser.currentScene.createNode("HAnimSite");
HAnimSite358.name = "eye_level_view";
HAnimSite358.DEF = "hanim_eye_level_view";
HAnimSite358.translation = new SFVec3f(new float[0,1.6332,0.0502]);
let Viewpoint359 = browser.currentScene.createNode("Viewpoint");
Viewpoint359.DEF = "hanim_eye_level_viewpoint";
Viewpoint359.description = "eye level looking forward";
Viewpoint359.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint359.position = new SFVec3f(new float[0,0,0]);
HAnimSite358.children = new MFNode();

HAnimSite358.children[0] = Viewpoint359;

HAnimHumanoid44.viewpoints[14] = HAnimSite358;

let HAnimSite360 = browser.currentScene.createNode("HAnimSite");
HAnimSite360.USE = "hanim_l_eyeball_site_view";
HAnimHumanoid44.viewpoints[15] = HAnimSite360;

let HAnimSite361 = browser.currentScene.createNode("HAnimSite");
HAnimSite361.USE = "hanim_r_eyeball_site_view";
HAnimHumanoid44.viewpoints[16] = HAnimSite361;

let HAnimSite362 = browser.currentScene.createNode("HAnimSite");
HAnimSite362.USE = "hanim_l_hand_front_view";
HAnimHumanoid44.viewpoints[17] = HAnimSite362;

let HAnimSite363 = browser.currentScene.createNode("HAnimSite");
HAnimSite363.USE = "hanim_r_hand_front_view";
HAnimHumanoid44.viewpoints[18] = HAnimSite363;

let HAnimJoint364 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint364.USE = "hanim_humanoid_root";
HAnimHumanoid44.joints[19] = HAnimJoint364;

let HAnimJoint365 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint365.USE = "hanim_sacroiliac";
HAnimHumanoid44.joints[20] = HAnimJoint365;

let HAnimJoint366 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint366.USE = "hanim_vl5";
HAnimHumanoid44.joints[21] = HAnimJoint366;

let HAnimJoint367 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint367.USE = "hanim_vl4";
HAnimHumanoid44.joints[22] = HAnimJoint367;

let HAnimJoint368 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint368.USE = "hanim_vl3";
HAnimHumanoid44.joints[23] = HAnimJoint368;

let HAnimJoint369 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint369.USE = "hanim_vl2";
HAnimHumanoid44.joints[24] = HAnimJoint369;

let HAnimJoint370 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint370.USE = "hanim_vl1";
HAnimHumanoid44.joints[25] = HAnimJoint370;

let HAnimJoint371 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint371.USE = "hanim_vt12";
HAnimHumanoid44.joints[26] = HAnimJoint371;

let HAnimJoint372 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint372.USE = "hanim_vt11";
HAnimHumanoid44.joints[27] = HAnimJoint372;

let HAnimJoint373 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint373.USE = "hanim_vt10";
HAnimHumanoid44.joints[28] = HAnimJoint373;

let HAnimJoint374 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint374.USE = "hanim_vt9";
HAnimHumanoid44.joints[29] = HAnimJoint374;

let HAnimJoint375 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint375.USE = "hanim_vt8";
HAnimHumanoid44.joints[30] = HAnimJoint375;

let HAnimJoint376 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint376.USE = "hanim_vt7";
HAnimHumanoid44.joints[31] = HAnimJoint376;

let HAnimJoint377 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint377.USE = "hanim_vt6";
HAnimHumanoid44.joints[32] = HAnimJoint377;

let HAnimJoint378 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint378.USE = "hanim_vt5";
HAnimHumanoid44.joints[33] = HAnimJoint378;

let HAnimJoint379 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint379.USE = "hanim_vt4";
HAnimHumanoid44.joints[34] = HAnimJoint379;

let HAnimJoint380 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint380.USE = "hanim_vt3";
HAnimHumanoid44.joints[35] = HAnimJoint380;

let HAnimJoint381 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint381.USE = "hanim_vt2";
HAnimHumanoid44.joints[36] = HAnimJoint381;

let HAnimJoint382 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint382.USE = "hanim_vt1";
HAnimHumanoid44.joints[37] = HAnimJoint382;

let HAnimJoint383 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint383.USE = "hanim_vc7";
HAnimHumanoid44.joints[38] = HAnimJoint383;

let HAnimJoint384 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint384.USE = "hanim_vc6";
HAnimHumanoid44.joints[39] = HAnimJoint384;

let HAnimJoint385 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint385.USE = "hanim_vc5";
HAnimHumanoid44.joints[40] = HAnimJoint385;

let HAnimJoint386 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint386.USE = "hanim_vc4";
HAnimHumanoid44.joints[41] = HAnimJoint386;

let HAnimJoint387 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint387.USE = "hanim_vc3";
HAnimHumanoid44.joints[42] = HAnimJoint387;

let HAnimJoint388 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint388.USE = "hanim_vc2";
HAnimHumanoid44.joints[43] = HAnimJoint388;

let HAnimJoint389 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint389.USE = "hanim_vc1";
HAnimHumanoid44.joints[44] = HAnimJoint389;

let HAnimJoint390 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint390.USE = "hanim_skullbase";
HAnimHumanoid44.joints[45] = HAnimJoint390;

let HAnimJoint391 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint391.USE = "hanim_temporomandibular";
HAnimHumanoid44.joints[46] = HAnimJoint391;

let HAnimJoint392 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint392.USE = "hanim_l_acromioclavicular";
HAnimHumanoid44.joints[47] = HAnimJoint392;

let HAnimJoint393 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint393.USE = "hanim_r_acromioclavicular";
HAnimHumanoid44.joints[48] = HAnimJoint393;

let HAnimJoint394 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint394.USE = "hanim_l_ankle";
HAnimHumanoid44.joints[49] = HAnimJoint394;

let HAnimJoint395 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint395.USE = "hanim_r_ankle";
HAnimHumanoid44.joints[50] = HAnimJoint395;

let HAnimJoint396 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint396.USE = "hanim_l_elbow";
HAnimHumanoid44.joints[51] = HAnimJoint396;

let HAnimJoint397 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint397.USE = "hanim_r_elbow";
HAnimHumanoid44.joints[52] = HAnimJoint397;

let HAnimJoint398 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint398.USE = "hanim_l_eyeball_joint";
HAnimHumanoid44.joints[53] = HAnimJoint398;

let HAnimJoint399 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint399.USE = "hanim_r_eyeball_joint";
HAnimHumanoid44.joints[54] = HAnimJoint399;

let HAnimJoint400 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint400.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid44.joints[55] = HAnimJoint400;

let HAnimJoint401 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint401.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid44.joints[56] = HAnimJoint401;

let HAnimJoint402 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint402.USE = "hanim_l_eyelid_joint";
HAnimHumanoid44.joints[57] = HAnimJoint402;

let HAnimJoint403 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint403.USE = "hanim_r_eyelid_joint";
HAnimHumanoid44.joints[58] = HAnimJoint403;

let HAnimJoint404 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint404.USE = "hanim_l_hip";
HAnimHumanoid44.joints[59] = HAnimJoint404;

let HAnimJoint405 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint405.USE = "hanim_r_hip";
HAnimHumanoid44.joints[60] = HAnimJoint405;

let HAnimJoint406 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint406.USE = "hanim_l_index0";
HAnimHumanoid44.joints[61] = HAnimJoint406;

let HAnimJoint407 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint407.USE = "hanim_r_index0";
HAnimHumanoid44.joints[62] = HAnimJoint407;

let HAnimJoint408 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint408.USE = "hanim_l_index1";
HAnimHumanoid44.joints[63] = HAnimJoint408;

let HAnimJoint409 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint409.USE = "hanim_r_index1";
HAnimHumanoid44.joints[64] = HAnimJoint409;

let HAnimJoint410 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint410.USE = "hanim_l_index2";
HAnimHumanoid44.joints[65] = HAnimJoint410;

let HAnimJoint411 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint411.USE = "hanim_r_index2";
HAnimHumanoid44.joints[66] = HAnimJoint411;

let HAnimJoint412 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint412.USE = "hanim_l_index3";
HAnimHumanoid44.joints[67] = HAnimJoint412;

let HAnimJoint413 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint413.USE = "hanim_r_index3";
HAnimHumanoid44.joints[68] = HAnimJoint413;

let HAnimJoint414 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint414.USE = "hanim_l_knee";
HAnimHumanoid44.joints[69] = HAnimJoint414;

let HAnimJoint415 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint415.USE = "hanim_r_knee";
HAnimHumanoid44.joints[70] = HAnimJoint415;

let HAnimJoint416 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint416.USE = "hanim_l_metatarsal";
HAnimHumanoid44.joints[71] = HAnimJoint416;

let HAnimJoint417 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint417.USE = "hanim_r_metatarsal";
HAnimHumanoid44.joints[72] = HAnimJoint417;

let HAnimJoint418 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint418.USE = "hanim_l_middle0";
HAnimHumanoid44.joints[73] = HAnimJoint418;

let HAnimJoint419 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint419.USE = "hanim_r_middle0";
HAnimHumanoid44.joints[74] = HAnimJoint419;

let HAnimJoint420 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint420.USE = "hanim_l_middle1";
HAnimHumanoid44.joints[75] = HAnimJoint420;

let HAnimJoint421 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint421.USE = "hanim_r_middle1";
HAnimHumanoid44.joints[76] = HAnimJoint421;

let HAnimJoint422 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint422.USE = "hanim_l_middle2";
HAnimHumanoid44.joints[77] = HAnimJoint422;

let HAnimJoint423 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint423.USE = "hanim_r_middle2";
HAnimHumanoid44.joints[78] = HAnimJoint423;

let HAnimJoint424 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint424.USE = "hanim_l_middle3";
HAnimHumanoid44.joints[79] = HAnimJoint424;

let HAnimJoint425 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint425.USE = "hanim_r_middle3";
HAnimHumanoid44.joints[80] = HAnimJoint425;

let HAnimJoint426 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint426.USE = "hanim_l_midtarsal";
HAnimHumanoid44.joints[81] = HAnimJoint426;

let HAnimJoint427 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint427.USE = "hanim_r_midtarsal";
HAnimHumanoid44.joints[82] = HAnimJoint427;

let HAnimJoint428 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint428.USE = "hanim_l_pinky0";
HAnimHumanoid44.joints[83] = HAnimJoint428;

let HAnimJoint429 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint429.USE = "hanim_r_pinky0";
HAnimHumanoid44.joints[84] = HAnimJoint429;

let HAnimJoint430 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint430.USE = "hanim_l_pinky1";
HAnimHumanoid44.joints[85] = HAnimJoint430;

let HAnimJoint431 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint431.USE = "hanim_r_pinky1";
HAnimHumanoid44.joints[86] = HAnimJoint431;

let HAnimJoint432 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint432.USE = "hanim_l_pinky2";
HAnimHumanoid44.joints[87] = HAnimJoint432;

let HAnimJoint433 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint433.USE = "hanim_r_pinky2";
HAnimHumanoid44.joints[88] = HAnimJoint433;

let HAnimJoint434 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint434.USE = "hanim_l_pinky3";
HAnimHumanoid44.joints[89] = HAnimJoint434;

let HAnimJoint435 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint435.USE = "hanim_r_pinky3";
HAnimHumanoid44.joints[90] = HAnimJoint435;

let HAnimJoint436 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint436.USE = "hanim_l_ring0";
HAnimHumanoid44.joints[91] = HAnimJoint436;

let HAnimJoint437 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint437.USE = "hanim_r_ring0";
HAnimHumanoid44.joints[92] = HAnimJoint437;

let HAnimJoint438 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint438.USE = "hanim_l_ring1";
HAnimHumanoid44.joints[93] = HAnimJoint438;

let HAnimJoint439 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint439.USE = "hanim_r_ring1";
HAnimHumanoid44.joints[94] = HAnimJoint439;

let HAnimJoint440 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint440.USE = "hanim_l_ring2";
HAnimHumanoid44.joints[95] = HAnimJoint440;

let HAnimJoint441 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint441.USE = "hanim_r_ring2";
HAnimHumanoid44.joints[96] = HAnimJoint441;

let HAnimJoint442 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint442.USE = "hanim_l_ring3";
HAnimHumanoid44.joints[97] = HAnimJoint442;

let HAnimJoint443 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint443.USE = "hanim_r_ring3";
HAnimHumanoid44.joints[98] = HAnimJoint443;

let HAnimJoint444 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint444.USE = "hanim_l_shoulder";
HAnimHumanoid44.joints[99] = HAnimJoint444;

let HAnimJoint445 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint445.USE = "hanim_r_shoulder";
HAnimHumanoid44.joints[100] = HAnimJoint445;

let HAnimJoint446 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint446.USE = "hanim_l_sternoclavicular";
HAnimHumanoid44.joints[101] = HAnimJoint446;

let HAnimJoint447 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint447.USE = "hanim_r_sternoclavicular";
HAnimHumanoid44.joints[102] = HAnimJoint447;

let HAnimJoint448 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint448.USE = "hanim_l_subtalar";
HAnimHumanoid44.joints[103] = HAnimJoint448;

let HAnimJoint449 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint449.USE = "hanim_r_subtalar";
HAnimHumanoid44.joints[104] = HAnimJoint449;

let HAnimJoint450 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint450.USE = "hanim_l_thumb1";
HAnimHumanoid44.joints[105] = HAnimJoint450;

let HAnimJoint451 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint451.USE = "hanim_r_thumb1";
HAnimHumanoid44.joints[106] = HAnimJoint451;

let HAnimJoint452 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint452.USE = "hanim_l_thumb2";
HAnimHumanoid44.joints[107] = HAnimJoint452;

let HAnimJoint453 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint453.USE = "hanim_r_thumb2";
HAnimHumanoid44.joints[108] = HAnimJoint453;

let HAnimJoint454 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint454.USE = "hanim_l_thumb3";
HAnimHumanoid44.joints[109] = HAnimJoint454;

let HAnimJoint455 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint455.USE = "hanim_r_thumb3";
HAnimHumanoid44.joints[110] = HAnimJoint455;

let HAnimJoint456 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint456.USE = "hanim_l_wrist";
HAnimHumanoid44.joints[111] = HAnimJoint456;

let HAnimJoint457 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint457.USE = "hanim_r_wrist";
HAnimHumanoid44.joints[112] = HAnimJoint457;

let HAnimSegment458 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment458.USE = "hanim_pelvis";
HAnimHumanoid44.segments[113] = HAnimSegment458;

let HAnimSegment459 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment459.USE = "hanim_skull";
HAnimHumanoid44.segments[114] = HAnimSegment459;

let HAnimSegment460 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment460.USE = "hanim_jaw";
HAnimHumanoid44.segments[115] = HAnimSegment460;

let HAnimSegment461 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment461.USE = "hanim_c1";
HAnimHumanoid44.segments[116] = HAnimSegment461;

let HAnimSegment462 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment462.USE = "hanim_c2";
HAnimHumanoid44.segments[117] = HAnimSegment462;

let HAnimSegment463 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment463.USE = "hanim_c3";
HAnimHumanoid44.segments[118] = HAnimSegment463;

let HAnimSegment464 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment464.USE = "hanim_c4";
HAnimHumanoid44.segments[119] = HAnimSegment464;

let HAnimSegment465 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment465.USE = "hanim_c5";
HAnimHumanoid44.segments[120] = HAnimSegment465;

let HAnimSegment466 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment466.USE = "hanim_c6";
HAnimHumanoid44.segments[121] = HAnimSegment466;

let HAnimSegment467 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment467.USE = "hanim_c7";
HAnimHumanoid44.segments[122] = HAnimSegment467;

let HAnimSegment468 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment468.USE = "hanim_t1";
HAnimHumanoid44.segments[123] = HAnimSegment468;

let HAnimSegment469 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment469.USE = "hanim_t2";
HAnimHumanoid44.segments[124] = HAnimSegment469;

let HAnimSegment470 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment470.USE = "hanim_t3";
HAnimHumanoid44.segments[125] = HAnimSegment470;

let HAnimSegment471 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment471.USE = "hanim_t4";
HAnimHumanoid44.segments[126] = HAnimSegment471;

let HAnimSegment472 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment472.USE = "hanim_t5";
HAnimHumanoid44.segments[127] = HAnimSegment472;

let HAnimSegment473 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment473.USE = "hanim_t6";
HAnimHumanoid44.segments[128] = HAnimSegment473;

let HAnimSegment474 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment474.USE = "hanim_t7";
HAnimHumanoid44.segments[129] = HAnimSegment474;

let HAnimSegment475 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment475.USE = "hanim_t8";
HAnimHumanoid44.segments[130] = HAnimSegment475;

let HAnimSegment476 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment476.USE = "hanim_t9";
HAnimHumanoid44.segments[131] = HAnimSegment476;

let HAnimSegment477 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment477.USE = "hanim_t10";
HAnimHumanoid44.segments[132] = HAnimSegment477;

let HAnimSegment478 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment478.USE = "hanim_t11";
HAnimHumanoid44.segments[133] = HAnimSegment478;

let HAnimSegment479 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment479.USE = "hanim_t12";
HAnimHumanoid44.segments[134] = HAnimSegment479;

let HAnimSegment480 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment480.USE = "hanim_l1";
HAnimHumanoid44.segments[135] = HAnimSegment480;

let HAnimSegment481 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment481.USE = "hanim_l2";
HAnimHumanoid44.segments[136] = HAnimSegment481;

let HAnimSegment482 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment482.USE = "hanim_l3";
HAnimHumanoid44.segments[137] = HAnimSegment482;

let HAnimSegment483 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment483.USE = "hanim_l4";
HAnimHumanoid44.segments[138] = HAnimSegment483;

let HAnimSegment484 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment484.USE = "hanim_l5";
HAnimHumanoid44.segments[139] = HAnimSegment484;

let HAnimSegment485 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment485.USE = "hanim_sacrum";
HAnimHumanoid44.segments[140] = HAnimSegment485;

let HAnimSegment486 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment486.USE = "hanim_l_calf";
HAnimHumanoid44.segments[141] = HAnimSegment486;

let HAnimSegment487 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment487.USE = "hanim_r_calf";
HAnimHumanoid44.segments[142] = HAnimSegment487;

let HAnimSegment488 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment488.USE = "hanim_l_clavicle";
HAnimHumanoid44.segments[143] = HAnimSegment488;

let HAnimSegment489 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment489.USE = "hanim_r_clavicle";
HAnimHumanoid44.segments[144] = HAnimSegment489;

let HAnimSegment490 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment490.USE = "hanim_l_eyeball";
HAnimHumanoid44.segments[145] = HAnimSegment490;

let HAnimSegment491 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment491.USE = "hanim_r_eyeball";
HAnimHumanoid44.segments[146] = HAnimSegment491;

let HAnimSegment492 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment492.USE = "hanim_l_eyebrow";
HAnimHumanoid44.segments[147] = HAnimSegment492;

let HAnimSegment493 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment493.USE = "hanim_r_eyebrow";
HAnimHumanoid44.segments[148] = HAnimSegment493;

let HAnimSegment494 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment494.USE = "hanim_l_eyelid";
HAnimHumanoid44.segments[149] = HAnimSegment494;

let HAnimSegment495 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment495.USE = "hanim_r_eyelid";
HAnimHumanoid44.segments[150] = HAnimSegment495;

let HAnimSegment496 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment496.USE = "hanim_l_forearm";
HAnimHumanoid44.segments[151] = HAnimSegment496;

let HAnimSegment497 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment497.USE = "hanim_r_forearm";
HAnimHumanoid44.segments[152] = HAnimSegment497;

let HAnimSegment498 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment498.USE = "hanim_l_forefoot";
HAnimHumanoid44.segments[153] = HAnimSegment498;

let HAnimSegment499 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment499.USE = "hanim_r_forefoot";
HAnimHumanoid44.segments[154] = HAnimSegment499;

let HAnimSegment500 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment500.USE = "hanim_l_hand";
HAnimHumanoid44.segments[155] = HAnimSegment500;

let HAnimSegment501 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment501.USE = "hanim_r_hand";
HAnimHumanoid44.segments[156] = HAnimSegment501;

let HAnimSegment502 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment502.USE = "hanim_l_hindfoot";
HAnimHumanoid44.segments[157] = HAnimSegment502;

let HAnimSegment503 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment503.USE = "hanim_r_hindfoot";
HAnimHumanoid44.segments[158] = HAnimSegment503;

let HAnimSegment504 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment504.USE = "hanim_l_index_distal";
HAnimHumanoid44.segments[159] = HAnimSegment504;

let HAnimSegment505 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment505.USE = "hanim_r_index_distal";
HAnimHumanoid44.segments[160] = HAnimSegment505;

let HAnimSegment506 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment506.USE = "hanim_l_index_metacarpal";
HAnimHumanoid44.segments[161] = HAnimSegment506;

let HAnimSegment507 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment507.USE = "hanim_r_index_metacarpal";
HAnimHumanoid44.segments[162] = HAnimSegment507;

let HAnimSegment508 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment508.USE = "hanim_l_index_middle";
HAnimHumanoid44.segments[163] = HAnimSegment508;

let HAnimSegment509 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment509.USE = "hanim_r_index_middle";
HAnimHumanoid44.segments[164] = HAnimSegment509;

let HAnimSegment510 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment510.USE = "hanim_l_index_proximal";
HAnimHumanoid44.segments[165] = HAnimSegment510;

let HAnimSegment511 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment511.USE = "hanim_r_index_proximal";
HAnimHumanoid44.segments[166] = HAnimSegment511;

let HAnimSegment512 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment512.USE = "hanim_l_middistal";
HAnimHumanoid44.segments[167] = HAnimSegment512;

let HAnimSegment513 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment513.USE = "hanim_r_middistal";
HAnimHumanoid44.segments[168] = HAnimSegment513;

let HAnimSegment514 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment514.USE = "hanim_l_middle_distal";
HAnimHumanoid44.segments[169] = HAnimSegment514;

let HAnimSegment515 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment515.USE = "hanim_r_middle_distal";
HAnimHumanoid44.segments[170] = HAnimSegment515;

let HAnimSegment516 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment516.USE = "hanim_l_middle_metacarpal";
HAnimHumanoid44.segments[171] = HAnimSegment516;

let HAnimSegment517 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment517.USE = "hanim_r_middle_metacarpal";
HAnimHumanoid44.segments[172] = HAnimSegment517;

let HAnimSegment518 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment518.USE = "hanim_l_middle_middle";
HAnimHumanoid44.segments[173] = HAnimSegment518;

let HAnimSegment519 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment519.USE = "hanim_r_middle_middle";
HAnimHumanoid44.segments[174] = HAnimSegment519;

let HAnimSegment520 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment520.USE = "hanim_l_middle_proximal";
HAnimHumanoid44.segments[175] = HAnimSegment520;

let HAnimSegment521 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment521.USE = "hanim_r_middle_proximal";
HAnimHumanoid44.segments[176] = HAnimSegment521;

let HAnimSegment522 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment522.USE = "hanim_l_midproximal";
HAnimHumanoid44.segments[177] = HAnimSegment522;

let HAnimSegment523 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment523.USE = "hanim_r_midproximal";
HAnimHumanoid44.segments[178] = HAnimSegment523;

let HAnimSegment524 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment524.USE = "hanim_l_pinky_distal";
HAnimHumanoid44.segments[179] = HAnimSegment524;

let HAnimSegment525 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment525.USE = "hanim_r_pinky_distal";
HAnimHumanoid44.segments[180] = HAnimSegment525;

let HAnimSegment526 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment526.USE = "hanim_l_pinky_metacarpal";
HAnimHumanoid44.segments[181] = HAnimSegment526;

let HAnimSegment527 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment527.USE = "hanim_r_pinky_metacarpal";
HAnimHumanoid44.segments[182] = HAnimSegment527;

let HAnimSegment528 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment528.USE = "hanim_l_pinky_middle";
HAnimHumanoid44.segments[183] = HAnimSegment528;

let HAnimSegment529 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment529.USE = "hanim_r_pinky_middle";
HAnimHumanoid44.segments[184] = HAnimSegment529;

let HAnimSegment530 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment530.USE = "hanim_l_pinky_proximal";
HAnimHumanoid44.segments[185] = HAnimSegment530;

let HAnimSegment531 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment531.USE = "hanim_r_pinky_proximal";
HAnimHumanoid44.segments[186] = HAnimSegment531;

let HAnimSegment532 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment532.USE = "hanim_l_ring_distal";
HAnimHumanoid44.segments[187] = HAnimSegment532;

let HAnimSegment533 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment533.USE = "hanim_r_ring_distal";
HAnimHumanoid44.segments[188] = HAnimSegment533;

let HAnimSegment534 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment534.USE = "hanim_l_ring_metacarpal";
HAnimHumanoid44.segments[189] = HAnimSegment534;

let HAnimSegment535 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment535.USE = "hanim_r_ring_metacarpal";
HAnimHumanoid44.segments[190] = HAnimSegment535;

let HAnimSegment536 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment536.USE = "hanim_l_ring_middle";
HAnimHumanoid44.segments[191] = HAnimSegment536;

let HAnimSegment537 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment537.USE = "hanim_r_ring_middle";
HAnimHumanoid44.segments[192] = HAnimSegment537;

let HAnimSegment538 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment538.USE = "hanim_l_ring_proximal";
HAnimHumanoid44.segments[193] = HAnimSegment538;

let HAnimSegment539 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment539.USE = "hanim_r_ring_proximal";
HAnimHumanoid44.segments[194] = HAnimSegment539;

let HAnimSegment540 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment540.USE = "hanim_l_scapula";
HAnimHumanoid44.segments[195] = HAnimSegment540;

let HAnimSegment541 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment541.USE = "hanim_r_scapula";
HAnimHumanoid44.segments[196] = HAnimSegment541;

let HAnimSegment542 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment542.USE = "hanim_l_thigh";
HAnimHumanoid44.segments[197] = HAnimSegment542;

let HAnimSegment543 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment543.USE = "hanim_r_thigh";
HAnimHumanoid44.segments[198] = HAnimSegment543;

let HAnimSegment544 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment544.USE = "hanim_l_thumb_distal";
HAnimHumanoid44.segments[199] = HAnimSegment544;

let HAnimSegment545 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment545.USE = "hanim_r_thumb_distal";
HAnimHumanoid44.segments[200] = HAnimSegment545;

let HAnimSegment546 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment546.USE = "hanim_l_thumb_metacarpal";
HAnimHumanoid44.segments[201] = HAnimSegment546;

let HAnimSegment547 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment547.USE = "hanim_r_thumb_metacarpal";
HAnimHumanoid44.segments[202] = HAnimSegment547;

let HAnimSegment548 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment548.USE = "hanim_l_thumb_proximal";
HAnimHumanoid44.segments[203] = HAnimSegment548;

let HAnimSegment549 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment549.USE = "hanim_r_thumb_proximal";
HAnimHumanoid44.segments[204] = HAnimSegment549;

let HAnimSegment550 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment550.USE = "hanim_l_upperarm";
HAnimHumanoid44.segments[205] = HAnimSegment550;

let HAnimSegment551 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment551.USE = "hanim_r_upperarm";
HAnimHumanoid44.segments[206] = HAnimSegment551;

let HAnimSite552 = browser.currentScene.createNode("HAnimSite");
HAnimSite552.USE = "hanim_crotch_pt";
HAnimHumanoid44.viewpoints[207] = HAnimSite552;

let HAnimSite553 = browser.currentScene.createNode("HAnimSite");
HAnimSite553.USE = "hanim_skull_tip";
HAnimHumanoid44.viewpoints[208] = HAnimSite553;

let HAnimSite554 = browser.currentScene.createNode("HAnimSite");
HAnimSite554.USE = "hanim_sellion_pt";
HAnimHumanoid44.viewpoints[209] = HAnimSite554;

let HAnimSite555 = browser.currentScene.createNode("HAnimSite");
HAnimSite555.USE = "hanim_supramenton_pt";
HAnimHumanoid44.viewpoints[210] = HAnimSite555;

let HAnimSite556 = browser.currentScene.createNode("HAnimSite");
HAnimSite556.USE = "hanim_nuchale_pt";
HAnimHumanoid44.viewpoints[211] = HAnimSite556;

let HAnimSite557 = browser.currentScene.createNode("HAnimSite");
HAnimSite557.USE = "hanim_suprasternale_pt";
HAnimHumanoid44.viewpoints[212] = HAnimSite557;

let HAnimSite558 = browser.currentScene.createNode("HAnimSite");
HAnimSite558.USE = "hanim_cervicale_pt";
HAnimHumanoid44.viewpoints[213] = HAnimSite558;

let HAnimSite559 = browser.currentScene.createNode("HAnimSite");
HAnimSite559.USE = "hanim_substernale_pt";
HAnimHumanoid44.viewpoints[214] = HAnimSite559;

let HAnimSite560 = browser.currentScene.createNode("HAnimSite");
HAnimSite560.USE = "hanim_rib10_midspine_pt";
HAnimHumanoid44.viewpoints[215] = HAnimSite560;

let HAnimSite561 = browser.currentScene.createNode("HAnimSite");
HAnimSite561.USE = "hanim_waist_preferred_post_pt";
HAnimHumanoid44.viewpoints[216] = HAnimSite561;

let HAnimSite562 = browser.currentScene.createNode("HAnimSite");
HAnimSite562.USE = "hanim_navel_pt";
HAnimHumanoid44.viewpoints[217] = HAnimSite562;

let HAnimSite563 = browser.currentScene.createNode("HAnimSite");
HAnimSite563.USE = "hanim_l_acromion_pt";
HAnimHumanoid44.viewpoints[218] = HAnimSite563;

let HAnimSite564 = browser.currentScene.createNode("HAnimSite");
HAnimSite564.USE = "hanim_r_acromion_pt";
HAnimHumanoid44.viewpoints[219] = HAnimSite564;

let HAnimSite565 = browser.currentScene.createNode("HAnimSite");
HAnimSite565.USE = "hanim_r_asis_pt";
HAnimHumanoid44.viewpoints[220] = HAnimSite565;

let HAnimSite566 = browser.currentScene.createNode("HAnimSite");
HAnimSite566.USE = "hanim_l_asis_pt";
HAnimHumanoid44.viewpoints[221] = HAnimSite566;

let HAnimSite567 = browser.currentScene.createNode("HAnimSite");
HAnimSite567.USE = "hanim_l_axilla_ant_pt";
HAnimHumanoid44.viewpoints[222] = HAnimSite567;

let HAnimSite568 = browser.currentScene.createNode("HAnimSite");
HAnimSite568.USE = "hanim_r_axilla_ant_pt";
HAnimHumanoid44.viewpoints[223] = HAnimSite568;

let HAnimSite569 = browser.currentScene.createNode("HAnimSite");
HAnimSite569.USE = "hanim_l_axilla_post_pt";
HAnimHumanoid44.viewpoints[224] = HAnimSite569;

let HAnimSite570 = browser.currentScene.createNode("HAnimSite");
HAnimSite570.USE = "hanim_r_axilla_post_pt";
HAnimHumanoid44.viewpoints[225] = HAnimSite570;

let HAnimSite571 = browser.currentScene.createNode("HAnimSite");
HAnimSite571.USE = "hanim_l_calcaneous_post_pt";
HAnimHumanoid44.viewpoints[226] = HAnimSite571;

let HAnimSite572 = browser.currentScene.createNode("HAnimSite");
HAnimSite572.USE = "hanim_r_calcaneous_post_pt";
HAnimHumanoid44.viewpoints[227] = HAnimSite572;

let HAnimSite573 = browser.currentScene.createNode("HAnimSite");
HAnimSite573.USE = "hanim_l_clavicale_pt";
HAnimHumanoid44.viewpoints[228] = HAnimSite573;

let HAnimSite574 = browser.currentScene.createNode("HAnimSite");
HAnimSite574.USE = "hanim_r_clavicale_pt";
HAnimHumanoid44.viewpoints[229] = HAnimSite574;

let HAnimSite575 = browser.currentScene.createNode("HAnimSite");
HAnimSite575.USE = "hanim_l_dactylion_pt";
HAnimHumanoid44.viewpoints[230] = HAnimSite575;

let HAnimSite576 = browser.currentScene.createNode("HAnimSite");
HAnimSite576.USE = "hanim_r_dactylion_pt";
HAnimHumanoid44.viewpoints[231] = HAnimSite576;

let HAnimSite577 = browser.currentScene.createNode("HAnimSite");
HAnimSite577.USE = "hanim_l_digit2_pt";
HAnimHumanoid44.viewpoints[232] = HAnimSite577;

let HAnimSite578 = browser.currentScene.createNode("HAnimSite");
HAnimSite578.USE = "hanim_r_digit2_pt";
HAnimHumanoid44.viewpoints[233] = HAnimSite578;

let HAnimSite579 = browser.currentScene.createNode("HAnimSite");
HAnimSite579.USE = "hanim_l_femoral_lateral_epicn_pt";
HAnimHumanoid44.viewpoints[234] = HAnimSite579;

let HAnimSite580 = browser.currentScene.createNode("HAnimSite");
HAnimSite580.USE = "hanim_r_femoral_lateral_epicn_pt";
HAnimHumanoid44.viewpoints[235] = HAnimSite580;

let HAnimSite581 = browser.currentScene.createNode("HAnimSite");
HAnimSite581.USE = "hanim_l_femoral_medial_epicn_pt";
HAnimHumanoid44.viewpoints[236] = HAnimSite581;

let HAnimSite582 = browser.currentScene.createNode("HAnimSite");
HAnimSite582.USE = "hanim_r_femoral_medial_epicn_pt";
HAnimHumanoid44.viewpoints[237] = HAnimSite582;

let HAnimSite583 = browser.currentScene.createNode("HAnimSite");
HAnimSite583.USE = "hanim_l_forefoot_tip";
HAnimHumanoid44.viewpoints[238] = HAnimSite583;

let HAnimSite584 = browser.currentScene.createNode("HAnimSite");
HAnimSite584.USE = "hanim_r_forefoot_tip";
HAnimHumanoid44.viewpoints[239] = HAnimSite584;

let HAnimSite585 = browser.currentScene.createNode("HAnimSite");
HAnimSite585.USE = "hanim_r_gonion_pt";
HAnimHumanoid44.viewpoints[240] = HAnimSite585;

let HAnimSite586 = browser.currentScene.createNode("HAnimSite");
HAnimSite586.USE = "hanim_l_gonion_pt";
HAnimHumanoid44.viewpoints[241] = HAnimSite586;

let HAnimSite587 = browser.currentScene.createNode("HAnimSite");
HAnimSite587.USE = "hanim_l_humeral_lateral_epicn_pt";
HAnimHumanoid44.viewpoints[242] = HAnimSite587;

let HAnimSite588 = browser.currentScene.createNode("HAnimSite");
HAnimSite588.USE = "hanim_r_humeral_lateral_epicn_pt";
HAnimHumanoid44.viewpoints[243] = HAnimSite588;

let HAnimSite589 = browser.currentScene.createNode("HAnimSite");
HAnimSite589.USE = "hanim_l_humeral_medial_epicn_pt";
HAnimHumanoid44.viewpoints[244] = HAnimSite589;

let HAnimSite590 = browser.currentScene.createNode("HAnimSite");
HAnimSite590.USE = "hanim_r_humeral_medial_epicn_pt";
HAnimHumanoid44.viewpoints[245] = HAnimSite590;

let HAnimSite591 = browser.currentScene.createNode("HAnimSite");
HAnimSite591.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid44.viewpoints[246] = HAnimSite591;

let HAnimSite592 = browser.currentScene.createNode("HAnimSite");
HAnimSite592.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid44.viewpoints[247] = HAnimSite592;

let HAnimSite593 = browser.currentScene.createNode("HAnimSite");
HAnimSite593.USE = "hanim_l_index_distal_tip";
HAnimHumanoid44.viewpoints[248] = HAnimSite593;

let HAnimSite594 = browser.currentScene.createNode("HAnimSite");
HAnimSite594.USE = "hanim_r_index_distal_tip";
HAnimHumanoid44.viewpoints[249] = HAnimSite594;

let HAnimSite595 = browser.currentScene.createNode("HAnimSite");
HAnimSite595.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid44.viewpoints[250] = HAnimSite595;

let HAnimSite596 = browser.currentScene.createNode("HAnimSite");
HAnimSite596.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid44.viewpoints[251] = HAnimSite596;

let HAnimSite597 = browser.currentScene.createNode("HAnimSite");
HAnimSite597.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid44.viewpoints[252] = HAnimSite597;

let HAnimSite598 = browser.currentScene.createNode("HAnimSite");
HAnimSite598.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid44.viewpoints[253] = HAnimSite598;

let HAnimSite599 = browser.currentScene.createNode("HAnimSite");
HAnimSite599.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid44.viewpoints[254] = HAnimSite599;

let HAnimSite600 = browser.currentScene.createNode("HAnimSite");
HAnimSite600.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid44.viewpoints[255] = HAnimSite600;

let HAnimSite601 = browser.currentScene.createNode("HAnimSite");
HAnimSite601.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid44.viewpoints[256] = HAnimSite601;

let HAnimSite602 = browser.currentScene.createNode("HAnimSite");
HAnimSite602.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid44.viewpoints[257] = HAnimSite602;

let HAnimSite603 = browser.currentScene.createNode("HAnimSite");
HAnimSite603.USE = "hanim_l_metacarpal_pha2_pt";
HAnimHumanoid44.viewpoints[258] = HAnimSite603;

let HAnimSite604 = browser.currentScene.createNode("HAnimSite");
HAnimSite604.USE = "hanim_r_metacarpal_pha2_pt";
HAnimHumanoid44.viewpoints[259] = HAnimSite604;

let HAnimSite605 = browser.currentScene.createNode("HAnimSite");
HAnimSite605.USE = "hanim_l_metacarpal_pha5_pt";
HAnimHumanoid44.viewpoints[260] = HAnimSite605;

let HAnimSite606 = browser.currentScene.createNode("HAnimSite");
HAnimSite606.USE = "hanim_r_metacarpal_pha5_pt";
HAnimHumanoid44.viewpoints[261] = HAnimSite606;

let HAnimSite607 = browser.currentScene.createNode("HAnimSite");
HAnimSite607.USE = "hanim_l_metatarsal_pha1_pt";
HAnimHumanoid44.viewpoints[262] = HAnimSite607;

let HAnimSite608 = browser.currentScene.createNode("HAnimSite");
HAnimSite608.USE = "hanim_r_metatarsal_pha1_pt";
HAnimHumanoid44.viewpoints[263] = HAnimSite608;

let HAnimSite609 = browser.currentScene.createNode("HAnimSite");
HAnimSite609.USE = "hanim_l_metatarsal_pha5_pt";
HAnimHumanoid44.viewpoints[264] = HAnimSite609;

let HAnimSite610 = browser.currentScene.createNode("HAnimSite");
HAnimSite610.USE = "hanim_r_metatarsal_pha5_pt";
HAnimHumanoid44.viewpoints[265] = HAnimSite610;

let HAnimSite611 = browser.currentScene.createNode("HAnimSite");
HAnimSite611.USE = "hanim_l_middle_distal_tip";
HAnimHumanoid44.viewpoints[266] = HAnimSite611;

let HAnimSite612 = browser.currentScene.createNode("HAnimSite");
HAnimSite612.USE = "hanim_r_middle_distal_tip";
HAnimHumanoid44.viewpoints[267] = HAnimSite612;

let HAnimSite613 = browser.currentScene.createNode("HAnimSite");
HAnimSite613.USE = "hanim_r_neck_base_pt";
HAnimHumanoid44.viewpoints[268] = HAnimSite613;

let HAnimSite614 = browser.currentScene.createNode("HAnimSite");
HAnimSite614.USE = "hanim_l_neck_base_pt";
HAnimHumanoid44.viewpoints[269] = HAnimSite614;

let HAnimSite615 = browser.currentScene.createNode("HAnimSite");
HAnimSite615.USE = "hanim_l_olecranon_pt";
HAnimHumanoid44.viewpoints[270] = HAnimSite615;

let HAnimSite616 = browser.currentScene.createNode("HAnimSite");
HAnimSite616.USE = "hanim_r_olecranon_pt";
HAnimHumanoid44.viewpoints[271] = HAnimSite616;

let HAnimSite617 = browser.currentScene.createNode("HAnimSite");
HAnimSite617.USE = "hanim_l_pinky_distal_tip";
HAnimHumanoid44.viewpoints[272] = HAnimSite617;

let HAnimSite618 = browser.currentScene.createNode("HAnimSite");
HAnimSite618.USE = "hanim_r_pinky_distal_tip";
HAnimHumanoid44.viewpoints[273] = HAnimSite618;

let HAnimSite619 = browser.currentScene.createNode("HAnimSite");
HAnimSite619.USE = "hanim_r_psis_pt";
HAnimHumanoid44.viewpoints[274] = HAnimSite619;

let HAnimSite620 = browser.currentScene.createNode("HAnimSite");
HAnimSite620.USE = "hanim_l_psis_pt";
HAnimHumanoid44.viewpoints[275] = HAnimSite620;

let HAnimSite621 = browser.currentScene.createNode("HAnimSite");
HAnimSite621.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid44.viewpoints[276] = HAnimSite621;

let HAnimSite622 = browser.currentScene.createNode("HAnimSite");
HAnimSite622.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid44.viewpoints[277] = HAnimSite622;

let HAnimSite623 = browser.currentScene.createNode("HAnimSite");
HAnimSite623.USE = "hanim_l_radiale_pt";
HAnimHumanoid44.viewpoints[278] = HAnimSite623;

let HAnimSite624 = browser.currentScene.createNode("HAnimSite");
HAnimSite624.USE = "hanim_r_radiale_pt";
HAnimHumanoid44.viewpoints[279] = HAnimSite624;

let HAnimSite625 = browser.currentScene.createNode("HAnimSite");
HAnimSite625.USE = "hanim_r_rib10_pt";
HAnimHumanoid44.viewpoints[280] = HAnimSite625;

let HAnimSite626 = browser.currentScene.createNode("HAnimSite");
HAnimSite626.USE = "hanim_l_rib10_pt";
HAnimHumanoid44.viewpoints[281] = HAnimSite626;

let HAnimSite627 = browser.currentScene.createNode("HAnimSite");
HAnimSite627.USE = "hanim_l_ring_distal_tip";
HAnimHumanoid44.viewpoints[282] = HAnimSite627;

let HAnimSite628 = browser.currentScene.createNode("HAnimSite");
HAnimSite628.USE = "hanim_r_ring_distal_tip";
HAnimHumanoid44.viewpoints[283] = HAnimSite628;

let HAnimSite629 = browser.currentScene.createNode("HAnimSite");
HAnimSite629.USE = "hanim_temporomandibular_l_site_pt";
HAnimHumanoid44.viewpoints[284] = HAnimSite629;

let HAnimSite630 = browser.currentScene.createNode("HAnimSite");
HAnimSite630.USE = "hanim_temporomandibular_r_site_pt";
HAnimHumanoid44.viewpoints[285] = HAnimSite630;

let HAnimSite631 = browser.currentScene.createNode("HAnimSite");
HAnimSite631.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid44.viewpoints[286] = HAnimSite631;

let HAnimSite632 = browser.currentScene.createNode("HAnimSite");
HAnimSite632.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid44.viewpoints[287] = HAnimSite632;

let HAnimSite633 = browser.currentScene.createNode("HAnimSite");
HAnimSite633.USE = "hanim_r_thelion_pt";
HAnimHumanoid44.viewpoints[288] = HAnimSite633;

let HAnimSite634 = browser.currentScene.createNode("HAnimSite");
HAnimSite634.USE = "hanim_l_thelion_pt";
HAnimHumanoid44.viewpoints[289] = HAnimSite634;

let HAnimSite635 = browser.currentScene.createNode("HAnimSite");
HAnimSite635.USE = "hanim_l_thumb_distal_tip";
HAnimHumanoid44.viewpoints[290] = HAnimSite635;

let HAnimSite636 = browser.currentScene.createNode("HAnimSite");
HAnimSite636.USE = "hanim_r_thumb_distal_tip";
HAnimHumanoid44.viewpoints[291] = HAnimSite636;

let HAnimSite637 = browser.currentScene.createNode("HAnimSite");
HAnimSite637.USE = "hanim_r_tragion_pt";
HAnimHumanoid44.viewpoints[292] = HAnimSite637;

let HAnimSite638 = browser.currentScene.createNode("HAnimSite");
HAnimSite638.USE = "hanim_l_tragion_pt";
HAnimHumanoid44.viewpoints[293] = HAnimSite638;

let HAnimSite639 = browser.currentScene.createNode("HAnimSite");
HAnimSite639.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid44.viewpoints[294] = HAnimSite639;

let HAnimSite640 = browser.currentScene.createNode("HAnimSite");
HAnimSite640.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid44.viewpoints[295] = HAnimSite640;

let HAnimSite641 = browser.currentScene.createNode("HAnimSite");
HAnimSite641.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid44.viewpoints[296] = HAnimSite641;

let HAnimSite642 = browser.currentScene.createNode("HAnimSite");
HAnimSite642.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid44.viewpoints[297] = HAnimSite642;

browser.currentScene.children[12] = HAnimHumanoid44;


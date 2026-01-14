const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("HAnim", 1));
scene.addMetaData("title", "HAnimSpecificationLOA3Invisible.x3d");
scene.addMetaData("description", "HAnim Specification reference example providing full coverage (and no illustrated visibility) of all specified HAnim constructs, also suitable for re-use as an authoring template.");
scene.addMetaData("reference", "https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds");
scene.addMetaData("reference", "HAnimSpecificationLOA3Illustrated.x3d");
scene.addMetaData("reference", "HAnimSpecificationLOA3Animation.x3d");
scene.addMetaData("reference", "HAnimSpecificationExampleChangeLog.txt");
scene.addMetaData("reference", "Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.");
scene.addMetaData("reference", "http://www.cis.upenn.edu/~badler/anthro/89-71.ps");
scene.addMetaData("reference", "tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf");
scene.addMetaData("reference", "originals/LOA3ExampleSourceWithDiamondsOriginal.wrl");
scene.addMetaData("reference", "originals/LOA3ExampleSourceWithDiamondsOriginal.x3d");
scene.addMetaData("reference", "originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d");
scene.addMetaData("reference", "HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames");
scene.addMetaData("created", "24 April 2013");
scene.addMetaData("modified", "Tue, 09 Sep 2025 19:39:08 GMT");
scene.addMetaData("error", "Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported");
scene.addMetaData("creator", "Matthew T. Beitler, Joe D. Williams, Don Brutzman");
scene.addMetaData("Image", "images/BonesAllSkeletonFrontViewLOA1.png");
scene.addMetaData("Image", "images/BonesAllSkeletonFrontViewLOA2.png");
scene.addMetaData("Image", "images/BonesAllSkeletonFrontViewLOA3.png");
scene.addMetaData("TODO", "move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations");
scene.addMetaData("TODO", "insert MetadataInteger nodes indicating LOA for each Joint and Segment");
scene.addMetaData("translator", "Don Brutzman and Joe Williams");
scene.addMetaData("generator", "BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo");
scene.addMetaData("generator", "X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit");
await browser .loadComponents (scene);
let Background29 = browser.currentScene.createNode("Background");
Background29.skyColor = new X3D.MFColor([0.3,0.3,0.3]);
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = Background29;

let NavigationInfo30 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children[1] = NavigationInfo30;

let Group31 = browser.currentScene.createNode("Group");
Group31.DEF = "Original_WorldInfo";
let WorldInfo32 = browser.currentScene.createNode("WorldInfo");
WorldInfo32.title = "HANIM 200x Default Joint Centers, LOA3";
WorldInfo32.info = new X3D.MFString([new X3D.SFString(" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps ")]);
Group31YYY.children = new X3D.MFNode();

Group31ZZZ.children[0] = WorldInfo32;

browser.currentScene.children[2] = Group31;

let Viewpoint33 = browser.currentScene.createNode("Viewpoint");
Viewpoint33.description = "Humanoid LOA 3 Front";
Viewpoint33.position = new X3D.SFVec3f([0,0.4,4]);
Viewpoint33.centerOfRotation = new X3D.SFVec3f([0,0.9149,0.0016]);
browser.currentScene.children[3] = Viewpoint33;

let Viewpoint34 = browser.currentScene.createNode("Viewpoint");
Viewpoint34.description = "Humanoid LOA 3 Front Close";
Viewpoint34.position = new X3D.SFVec3f([0,0.8,2]);
Viewpoint34.centerOfRotation = new X3D.SFVec3f([0,0.9149,0.0016]);
browser.currentScene.children[4] = Viewpoint34;

let Viewpoint35 = browser.currentScene.createNode("Viewpoint");
Viewpoint35.description = "Humanoid LOA 3 Front Closer";
Viewpoint35.position = new X3D.SFVec3f([0,1.2,1]);
Viewpoint35.centerOfRotation = new X3D.SFVec3f([0,0.9149,0.0016]);
browser.currentScene.children[5] = Viewpoint35;

let Viewpoint36 = browser.currentScene.createNode("Viewpoint");
Viewpoint36.description = "Humanoid LOA 3 Front Face";
Viewpoint36.position = new X3D.SFVec3f([0,1.63,1]);
Viewpoint36.centerOfRotation = new X3D.SFVec3f([0,1.5,0.0016]);
browser.currentScene.children[6] = Viewpoint36;

let Viewpoint37 = browser.currentScene.createNode("Viewpoint");
Viewpoint37.description = "Humanoid LOA 3 Right Side";
Viewpoint37.position = new X3D.SFVec3f([2.6,0.8,0]);
Viewpoint37.orientation = new X3D.SFRotation([0,1,0,1.5708]);
Viewpoint37.centerOfRotation = new X3D.SFVec3f([0,0.9149,0.0016]);
browser.currentScene.children[7] = Viewpoint37;

let Viewpoint38 = browser.currentScene.createNode("Viewpoint");
Viewpoint38.description = "Humanoid LOA 3 Right Side Close";
Viewpoint38.position = new X3D.SFVec3f([1,0.8,0.5]);
Viewpoint38.orientation = new X3D.SFRotation([0,1,0,1.2]);
Viewpoint38.centerOfRotation = new X3D.SFVec3f([0,0.9149,0.0016]);
browser.currentScene.children[8] = Viewpoint38;

let Viewpoint39 = browser.currentScene.createNode("Viewpoint");
Viewpoint39.description = "Humanoid LOA 3 Left Side Close";
Viewpoint39.position = new X3D.SFVec3f([-1,0.8,0.5]);
Viewpoint39.orientation = new X3D.SFRotation([0,1,0,-1.2]);
Viewpoint39.centerOfRotation = new X3D.SFVec3f([0,0.9149,0.0016]);
browser.currentScene.children[9] = Viewpoint39;

let Viewpoint40 = browser.currentScene.createNode("Viewpoint");
Viewpoint40.description = "Humanoid LOA 3 Left Side";
Viewpoint40.position = new X3D.SFVec3f([-2.6,0.8,0]);
Viewpoint40.orientation = new X3D.SFRotation([0,1,0,-1.5708]);
Viewpoint40.centerOfRotation = new X3D.SFVec3f([0,0.9149,0.0016]);
browser.currentScene.children[10] = Viewpoint40;

let Viewpoint41 = browser.currentScene.createNode("Viewpoint");
Viewpoint41.description = "Humanoid LOA 3 Top";
Viewpoint41.position = new X3D.SFVec3f([0,3.5,0]);
Viewpoint41.orientation = new X3D.SFRotation([1,0,0,-1.5708]);
Viewpoint41.centerOfRotation = new X3D.SFVec3f([0,0.9149,0.0016]);
browser.currentScene.children[11] = Viewpoint41;

let HAnimHumanoid42 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid42.DEF = "hanim_humanoid";
HAnimHumanoid42.name = "humanoid";
HAnimHumanoid42.info = new X3D.MFString([new X3D.SFString("authorName=Matthew T. Beitler Joe D. Williams Don Brutzman"), new X3D.SFString("authorEmail=HAnim@web3D.org"), new X3D.SFString("copyright=none"), new X3D.SFString("creationDate=12 May 1999"), new X3D.SFString("usageRestrictions=none"), new X3D.SFString("humanoidVersion=2.0"), new X3D.SFString("height=1.7504")]);
HAnimHumanoid42.version = "1.0";
let HAnimJoint43 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint43.DEF = "hanim_humanoid_root";
HAnimJoint43.name = "humanoid_root";
HAnimJoint43.center = new X3D.SFVec3f([0,0.824,0.0277]);
let HAnimSegment44 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment44.DEF = "hanim_sacrum";
HAnimSegment44.name = "sacrum";
HAnimJoint43YYY.children = new X3D.MFNode();

HAnimJoint43ZZZ.children[0] = HAnimSegment44;

let HAnimJoint45 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint45.DEF = "hanim_sacroiliac";
HAnimJoint45.name = "sacroiliac";
HAnimJoint45.center = new X3D.SFVec3f([0,0.9149,0.0016]);
let HAnimSegment46 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment46.DEF = "hanim_pelvis";
HAnimSegment46.name = "pelvis";
let HAnimSite47 = browser.currentScene.createNode("HAnimSite");
HAnimSite47.DEF = "hanim_r_iliocristale_pt";
HAnimSite47.name = "r_iliocristale_pt";
HAnimSite47.translation = new X3D.SFVec3f([-0.1525,1.0628,0.0035]);
HAnimSegment46YYY.children = new X3D.MFNode();

HAnimSegment46ZZZ.children[0] = HAnimSite47;

let HAnimSite48 = browser.currentScene.createNode("HAnimSite");
HAnimSite48.DEF = "hanim_r_trochanterion_pt";
HAnimSite48.name = "r_trochanterion_pt";
HAnimSite48.translation = new X3D.SFVec3f([-0.1689,0.8419,0.0352]);
HAnimSegment46ZZZ.children[1] = HAnimSite48;

let HAnimSite49 = browser.currentScene.createNode("HAnimSite");
HAnimSite49.DEF = "hanim_l_iliocristale_pt";
HAnimSite49.name = "l_iliocristale_pt";
HAnimSite49.translation = new X3D.SFVec3f([0.1612,1.0537,0.0008]);
HAnimSegment46ZZZ.children[2] = HAnimSite49;

let HAnimSite50 = browser.currentScene.createNode("HAnimSite");
HAnimSite50.DEF = "hanim_l_trochanterion_pt";
HAnimSite50.name = "l_trochanterion_pt";
HAnimSite50.translation = new X3D.SFVec3f([0.1677,0.8336,0.0303]);
HAnimSegment46ZZZ.children[3] = HAnimSite50;

let HAnimSite51 = browser.currentScene.createNode("HAnimSite");
HAnimSite51.DEF = "hanim_r_asis_pt";
HAnimSite51.name = "r_asis_pt";
HAnimSite51.translation = new X3D.SFVec3f([-0.0887,1.0021,0.1112]);
HAnimSegment46ZZZ.children[4] = HAnimSite51;

let HAnimSite52 = browser.currentScene.createNode("HAnimSite");
HAnimSite52.DEF = "hanim_l_asis_pt";
HAnimSite52.name = "l_asis_pt";
HAnimSite52.translation = new X3D.SFVec3f([0.0925,0.9983,0.1052]);
HAnimSegment46ZZZ.children[5] = HAnimSite52;

let HAnimSite53 = browser.currentScene.createNode("HAnimSite");
HAnimSite53.DEF = "hanim_r_psis_pt";
HAnimSite53.name = "r_psis_pt";
HAnimSite53.translation = new X3D.SFVec3f([-0.0716,1.019,-0.1138]);
HAnimSegment46ZZZ.children[6] = HAnimSite53;

let HAnimSite54 = browser.currentScene.createNode("HAnimSite");
HAnimSite54.DEF = "hanim_l_psis_pt";
HAnimSite54.name = "l_psis_pt";
HAnimSite54.translation = new X3D.SFVec3f([0.0774,1.019,-0.1151]);
HAnimSegment46ZZZ.children[7] = HAnimSite54;

let HAnimSite55 = browser.currentScene.createNode("HAnimSite");
HAnimSite55.DEF = "hanim_crotch_pt";
HAnimSite55.name = "crotch_pt";
HAnimSite55.translation = new X3D.SFVec3f([0.0034,0.8266,0.0257]);
HAnimSegment46ZZZ.children[8] = HAnimSite55;

HAnimJoint45YYY.children = new X3D.MFNode();

HAnimJoint45ZZZ.children[0] = HAnimSegment46;

let HAnimJoint56 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint56.DEF = "hanim_l_hip";
HAnimJoint56.name = "l_hip";
HAnimJoint56.center = new X3D.SFVec3f([0.0961,0.9124,-0.0001]);
let HAnimSegment57 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment57.DEF = "hanim_l_thigh";
HAnimSegment57.name = "l_thigh";
let HAnimSite58 = browser.currentScene.createNode("HAnimSite");
HAnimSite58.DEF = "hanim_l_knee_crease_pt";
HAnimSite58.name = "l_knee_crease_pt";
HAnimSite58.translation = new X3D.SFVec3f([0.0993,0.4881,-0.0309]);
HAnimSegment57YYY.children = new X3D.MFNode();

HAnimSegment57ZZZ.children[0] = HAnimSite58;

let HAnimSite59 = browser.currentScene.createNode("HAnimSite");
HAnimSite59.DEF = "hanim_l_femoral_lateral_epicn_pt";
HAnimSite59.name = "l_femoral_lateral_epicn_pt";
HAnimSite59.translation = new X3D.SFVec3f([0.1598,0.4967,0.0297]);
HAnimSegment57ZZZ.children[1] = HAnimSite59;

let HAnimSite60 = browser.currentScene.createNode("HAnimSite");
HAnimSite60.DEF = "hanim_l_femoral_medial_epicn_pt";
HAnimSite60.name = "l_femoral_medial_epicn_pt";
HAnimSite60.translation = new X3D.SFVec3f([0.0398,0.4946,0.0303]);
HAnimSegment57ZZZ.children[2] = HAnimSite60;

HAnimJoint56YYY.children = new X3D.MFNode();

HAnimJoint56ZZZ.children[0] = HAnimSegment57;

let HAnimJoint61 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint61.DEF = "hanim_l_knee";
HAnimJoint61.name = "l_knee";
HAnimJoint61.center = new X3D.SFVec3f([0.104,0.4867,0.0308]);
let HAnimSegment62 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment62.DEF = "hanim_l_calf";
HAnimSegment62.name = "l_calf";
HAnimJoint61YYY.children = new X3D.MFNode();

HAnimJoint61ZZZ.children[0] = HAnimSegment62;

let HAnimJoint63 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint63.DEF = "hanim_l_ankle";
HAnimJoint63.name = "l_ankle";
HAnimJoint63.center = new X3D.SFVec3f([0.1101,0.0656,-0.0736]);
let HAnimSegment64 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment64.DEF = "hanim_l_hindfoot";
HAnimSegment64.name = "l_hindfoot";
let HAnimSite65 = browser.currentScene.createNode("HAnimSite");
HAnimSite65.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite65.name = "l_lateral_malleolus_pt";
HAnimSite65.translation = new X3D.SFVec3f([0.1308,0.0597,-0.1032]);
HAnimSegment64YYY.children = new X3D.MFNode();

HAnimSegment64ZZZ.children[0] = HAnimSite65;

let HAnimSite66 = browser.currentScene.createNode("HAnimSite");
HAnimSite66.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite66.name = "l_medial_malleolus_pt";
HAnimSite66.translation = new X3D.SFVec3f([0.089,0.0716,-0.0881]);
HAnimSegment64ZZZ.children[1] = HAnimSite66;

let HAnimSite67 = browser.currentScene.createNode("HAnimSite");
HAnimSite67.DEF = "hanim_l_sphyrion_pt";
HAnimSite67.name = "l_sphyrion_pt";
HAnimSite67.translation = new X3D.SFVec3f([0.089,0.0575,-0.0943]);
HAnimSegment64ZZZ.children[2] = HAnimSite67;

let HAnimSite68 = browser.currentScene.createNode("HAnimSite");
HAnimSite68.DEF = "hanim_l_calcaneous_post_pt";
HAnimSite68.name = "l_calcaneous_post_pt";
HAnimSite68.translation = new X3D.SFVec3f([0.0974,0.0259,-0.1171]);
HAnimSegment64ZZZ.children[3] = HAnimSite68;

HAnimJoint63YYY.children = new X3D.MFNode();

HAnimJoint63ZZZ.children[0] = HAnimSegment64;

let HAnimJoint69 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint69.DEF = "hanim_l_subtalar";
HAnimJoint69.name = "l_subtalar";
HAnimJoint69.center = new X3D.SFVec3f([0.1086,0.0001,-0.0368]);
let HAnimSegment70 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment70.DEF = "hanim_l_midproximal";
HAnimSegment70.name = "l_midproximal";
HAnimJoint69YYY.children = new X3D.MFNode();

HAnimJoint69ZZZ.children[0] = HAnimSegment70;

let HAnimJoint71 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint71.DEF = "hanim_l_midtarsal";
HAnimJoint71.name = "l_midtarsal";
HAnimJoint71.center = new X3D.SFVec3f([0.1086,0.0001,0.0368]);
let HAnimSegment72 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment72.DEF = "hanim_l_middistal";
HAnimSegment72.name = "l_middistal";
let HAnimSite73 = browser.currentScene.createNode("HAnimSite");
HAnimSite73.DEF = "hanim_l_metatarsal_pha1_pt";
HAnimSite73.name = "l_metatarsal_pha1_pt";
HAnimSite73.translation = new X3D.SFVec3f([0.0816,0.0232,0.0106]);
HAnimSegment72YYY.children = new X3D.MFNode();

HAnimSegment72ZZZ.children[0] = HAnimSite73;

HAnimJoint71YYY.children = new X3D.MFNode();

HAnimJoint71ZZZ.children[0] = HAnimSegment72;

let HAnimJoint74 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint74.DEF = "hanim_l_metatarsal";
HAnimJoint74.name = "l_metatarsal";
HAnimJoint74.center = new X3D.SFVec3f([0.1086,0,0.0762]);
let HAnimSegment75 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment75.DEF = "hanim_l_forefoot";
HAnimSegment75.name = "l_forefoot";
let HAnimSite76 = browser.currentScene.createNode("HAnimSite");
HAnimSite76.DEF = "hanim_l_forefoot_tip";
HAnimSite76.name = "l_forefoot_tip";
HAnimSite76.translation = new X3D.SFVec3f([0.1354,0.0016,0.1476]);
HAnimSegment75YYY.children = new X3D.MFNode();

HAnimSegment75ZZZ.children[0] = HAnimSite76;

let HAnimSite77 = browser.currentScene.createNode("HAnimSite");
HAnimSite77.DEF = "hanim_l_metatarsal_pha5_pt";
HAnimSite77.name = "l_metatarsal_pha5_pt";
HAnimSite77.translation = new X3D.SFVec3f([0.1825,0.007,0.0928]);
HAnimSegment75ZZZ.children[1] = HAnimSite77;

let HAnimSite78 = browser.currentScene.createNode("HAnimSite");
HAnimSite78.DEF = "hanim_l_digit2_pt";
HAnimSite78.name = "l_digit2_pt";
HAnimSite78.translation = new X3D.SFVec3f([0.1195,0.0079,0.1433]);
HAnimSegment75ZZZ.children[2] = HAnimSite78;

HAnimJoint74YYY.children = new X3D.MFNode();

HAnimJoint74ZZZ.children[0] = HAnimSegment75;

HAnimJoint71ZZZ.children[1] = HAnimJoint74;

HAnimJoint69ZZZ.children[1] = HAnimJoint71;

HAnimJoint63ZZZ.children[1] = HAnimJoint69;

HAnimJoint61ZZZ.children[1] = HAnimJoint63;

HAnimJoint56ZZZ.children[1] = HAnimJoint61;

HAnimJoint45ZZZ.children[1] = HAnimJoint56;

let HAnimJoint79 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint79.DEF = "hanim_r_hip";
HAnimJoint79.name = "r_hip";
HAnimJoint79.center = new X3D.SFVec3f([-0.0961,0.9124,-0.0001]);
let HAnimSegment80 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment80.DEF = "hanim_r_thigh";
HAnimSegment80.name = "r_thigh";
let HAnimSite81 = browser.currentScene.createNode("HAnimSite");
HAnimSite81.DEF = "hanim_r_knee_crease_pt";
HAnimSite81.name = "r_knee_crease_pt";
HAnimSite81.translation = new X3D.SFVec3f([-0.0825,0.4932,-0.0326]);
HAnimSegment80YYY.children = new X3D.MFNode();

HAnimSegment80ZZZ.children[0] = HAnimSite81;

let HAnimSite82 = browser.currentScene.createNode("HAnimSite");
HAnimSite82.DEF = "hanim_r_femoral_lateral_epicn_pt";
HAnimSite82.name = "r_femoral_lateral_epicn_pt";
HAnimSite82.translation = new X3D.SFVec3f([-0.1421,0.4992,0.031]);
HAnimSegment80ZZZ.children[1] = HAnimSite82;

let HAnimSite83 = browser.currentScene.createNode("HAnimSite");
HAnimSite83.DEF = "hanim_r_femoral_medial_epicn_pt";
HAnimSite83.name = "r_femoral_medial_epicn_pt";
HAnimSite83.translation = new X3D.SFVec3f([-0.0221,0.5014,0.0289]);
HAnimSegment80ZZZ.children[2] = HAnimSite83;

HAnimJoint79YYY.children = new X3D.MFNode();

HAnimJoint79ZZZ.children[0] = HAnimSegment80;

let HAnimJoint84 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint84.DEF = "hanim_r_knee";
HAnimJoint84.name = "r_knee";
HAnimJoint84.center = new X3D.SFVec3f([-0.104,0.4867,0.0308]);
let HAnimSegment85 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment85.DEF = "hanim_r_calf";
HAnimSegment85.name = "r_calf";
HAnimJoint84YYY.children = new X3D.MFNode();

HAnimJoint84ZZZ.children[0] = HAnimSegment85;

let HAnimJoint86 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint86.DEF = "hanim_r_ankle";
HAnimJoint86.name = "r_ankle";
HAnimJoint86.center = new X3D.SFVec3f([-0.1101,0.0656,-0.0736]);
let HAnimSegment87 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment87.DEF = "hanim_r_hindfoot";
HAnimSegment87.name = "r_hindfoot";
let HAnimSite88 = browser.currentScene.createNode("HAnimSite");
HAnimSite88.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite88.name = "r_lateral_malleolus_pt";
HAnimSite88.translation = new X3D.SFVec3f([-0.1006,0.0658,-0.1075]);
HAnimSegment87YYY.children = new X3D.MFNode();

HAnimSegment87ZZZ.children[0] = HAnimSite88;

let HAnimSite89 = browser.currentScene.createNode("HAnimSite");
HAnimSite89.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite89.name = "r_medial_malleolus_pt";
HAnimSite89.translation = new X3D.SFVec3f([-0.0591,0.076,-0.0928]);
HAnimSegment87ZZZ.children[1] = HAnimSite89;

let HAnimSite90 = browser.currentScene.createNode("HAnimSite");
HAnimSite90.DEF = "hanim_r_sphyrion_pt";
HAnimSite90.name = "r_sphyrion_pt";
HAnimSite90.translation = new X3D.SFVec3f([-0.0603,0.061,-0.1002]);
HAnimSegment87ZZZ.children[2] = HAnimSite90;

let HAnimSite91 = browser.currentScene.createNode("HAnimSite");
HAnimSite91.DEF = "hanim_r_calcaneous_post_pt";
HAnimSite91.name = "r_calcaneous_post_pt";
HAnimSite91.translation = new X3D.SFVec3f([-0.0692,0.0297,-0.1221]);
HAnimSegment87ZZZ.children[3] = HAnimSite91;

HAnimJoint86YYY.children = new X3D.MFNode();

HAnimJoint86ZZZ.children[0] = HAnimSegment87;

let HAnimJoint92 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint92.DEF = "hanim_r_subtalar";
HAnimJoint92.name = "r_subtalar";
HAnimJoint92.center = new X3D.SFVec3f([-0.1086,0.0001,-0.0368]);
let HAnimSegment93 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment93.DEF = "hanim_r_midproximal";
HAnimSegment93.name = "r_midproximal";
HAnimJoint92YYY.children = new X3D.MFNode();

HAnimJoint92ZZZ.children[0] = HAnimSegment93;

let HAnimJoint94 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint94.DEF = "hanim_r_midtarsal";
HAnimJoint94.name = "r_midtarsal";
HAnimJoint94.center = new X3D.SFVec3f([-0.1086,0.0001,0.0368]);
let HAnimSegment95 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment95.DEF = "hanim_r_middistal";
HAnimSegment95.name = "r_middistal";
let HAnimSite96 = browser.currentScene.createNode("HAnimSite");
HAnimSite96.DEF = "hanim_r_metatarsal_pha1_pt";
HAnimSite96.name = "r_metatarsal_pha1_pt";
HAnimSite96.translation = new X3D.SFVec3f([-0.0521,0.026,0.0127]);
HAnimSegment95YYY.children = new X3D.MFNode();

HAnimSegment95ZZZ.children[0] = HAnimSite96;

HAnimJoint94YYY.children = new X3D.MFNode();

HAnimJoint94ZZZ.children[0] = HAnimSegment95;

let HAnimJoint97 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint97.DEF = "hanim_r_metatarsal";
HAnimJoint97.name = "r_metatarsal";
HAnimJoint97.center = new X3D.SFVec3f([-0.1086,0,0.0762]);
let HAnimSegment98 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment98.DEF = "hanim_r_forefoot";
HAnimSegment98.name = "r_forefoot";
let HAnimSite99 = browser.currentScene.createNode("HAnimSite");
HAnimSite99.DEF = "hanim_r_forefoot_tip";
HAnimSite99.name = "r_forefoot_tip";
HAnimSite99.translation = new X3D.SFVec3f([-0.1043,0.0227,0.145]);
HAnimSegment98YYY.children = new X3D.MFNode();

HAnimSegment98ZZZ.children[0] = HAnimSite99;

let HAnimSite100 = browser.currentScene.createNode("HAnimSite");
HAnimSite100.DEF = "hanim_r_metatarsal_pha5_pt";
HAnimSite100.name = "r_metatarsal_pha5_pt";
HAnimSite100.translation = new X3D.SFVec3f([-0.1523,0.0166,0.0895]);
HAnimSegment98ZZZ.children[1] = HAnimSite100;

let HAnimSite101 = browser.currentScene.createNode("HAnimSite");
HAnimSite101.DEF = "hanim_r_digit2_pt";
HAnimSite101.name = "r_digit2_pt";
HAnimSite101.translation = new X3D.SFVec3f([-0.0883,0.0134,0.1383]);
HAnimSegment98ZZZ.children[2] = HAnimSite101;

HAnimJoint97YYY.children = new X3D.MFNode();

HAnimJoint97ZZZ.children[0] = HAnimSegment98;

HAnimJoint94ZZZ.children[1] = HAnimJoint97;

HAnimJoint92ZZZ.children[1] = HAnimJoint94;

HAnimJoint86ZZZ.children[1] = HAnimJoint92;

HAnimJoint84ZZZ.children[1] = HAnimJoint86;

HAnimJoint79ZZZ.children[1] = HAnimJoint84;

HAnimJoint45ZZZ.children[2] = HAnimJoint79;

HAnimJoint43ZZZ.children[1] = HAnimJoint45;

let HAnimJoint102 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint102.DEF = "hanim_vl5";
HAnimJoint102.name = "vl5";
HAnimJoint102.center = new X3D.SFVec3f([0.0028,1.0568,-0.0776]);
let HAnimSegment103 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment103.DEF = "hanim_l5";
HAnimSegment103.name = "l5";
let HAnimSite104 = browser.currentScene.createNode("HAnimSite");
HAnimSite104.DEF = "hanim_waist_preferred_post_pt";
HAnimSite104.name = "waist_preferred_post_pt";
HAnimSite104.translation = new X3D.SFVec3f([0,1.0915,-0.1091]);
HAnimSegment103YYY.children = new X3D.MFNode();

HAnimSegment103ZZZ.children[0] = HAnimSite104;

let HAnimSite105 = browser.currentScene.createNode("HAnimSite");
HAnimSite105.DEF = "hanim_navel_pt";
HAnimSite105.name = "navel_pt";
HAnimSite105.translation = new X3D.SFVec3f([0.0069,1.0966,0.1017]);
HAnimSegment103ZZZ.children[1] = HAnimSite105;

HAnimJoint102YYY.children = new X3D.MFNode();

HAnimJoint102ZZZ.children[0] = HAnimSegment103;

let HAnimJoint106 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint106.DEF = "hanim_vl4";
HAnimJoint106.name = "vl4";
HAnimJoint106.center = new X3D.SFVec3f([0.0035,1.0925,-0.0787]);
let HAnimSegment107 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment107.DEF = "hanim_l4";
HAnimSegment107.name = "l4";
HAnimJoint106YYY.children = new X3D.MFNode();

HAnimJoint106ZZZ.children[0] = HAnimSegment107;

let HAnimJoint108 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint108.DEF = "hanim_vl3";
HAnimJoint108.name = "vl3";
HAnimJoint108.center = new X3D.SFVec3f([0.0041,1.1276,-0.0796]);
let HAnimSegment109 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment109.DEF = "hanim_l3";
HAnimSegment109.name = "l3";
HAnimJoint108YYY.children = new X3D.MFNode();

HAnimJoint108ZZZ.children[0] = HAnimSegment109;

let HAnimJoint110 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint110.DEF = "hanim_vl2";
HAnimJoint110.name = "vl2";
HAnimJoint110.center = new X3D.SFVec3f([0.0045,1.1546,-0.08]);
let HAnimSegment111 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment111.DEF = "hanim_l2";
HAnimSegment111.name = "l2";
let HAnimSite112 = browser.currentScene.createNode("HAnimSite");
HAnimSite112.DEF = "hanim_r_rib10_pt";
HAnimSite112.name = "r_rib10_pt";
HAnimSite112.translation = new X3D.SFVec3f([-0.0711,1.1941,0.1016]);
HAnimSegment111YYY.children = new X3D.MFNode();

HAnimSegment111ZZZ.children[0] = HAnimSite112;

let HAnimSite113 = browser.currentScene.createNode("HAnimSite");
HAnimSite113.DEF = "hanim_l_rib10_pt";
HAnimSite113.name = "l_rib10_pt";
HAnimSite113.translation = new X3D.SFVec3f([0.0871,1.1925,0.0992]);
HAnimSegment111ZZZ.children[1] = HAnimSite113;

let HAnimSite114 = browser.currentScene.createNode("HAnimSite");
HAnimSite114.DEF = "hanim_rib10_midspine_pt";
HAnimSite114.name = "rib10_midspine_pt";
HAnimSite114.translation = new X3D.SFVec3f([0.0049,1.1908,-0.1113]);
HAnimSegment111ZZZ.children[2] = HAnimSite114;

HAnimJoint110YYY.children = new X3D.MFNode();

HAnimJoint110ZZZ.children[0] = HAnimSegment111;

let HAnimJoint115 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint115.DEF = "hanim_vl1";
HAnimJoint115.name = "vl1";
HAnimJoint115.center = new X3D.SFVec3f([0.0048,1.1912,-0.0805]);
let HAnimSegment116 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment116.DEF = "hanim_l1";
HAnimSegment116.name = "l1";
HAnimJoint115YYY.children = new X3D.MFNode();

HAnimJoint115ZZZ.children[0] = HAnimSegment116;

let HAnimJoint117 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint117.DEF = "hanim_vt12";
HAnimJoint117.name = "vt12";
HAnimJoint117.center = new X3D.SFVec3f([0.0051,1.2278,-0.0808]);
let HAnimSegment118 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment118.DEF = "hanim_t12";
HAnimSegment118.name = "t12";
HAnimJoint117YYY.children = new X3D.MFNode();

HAnimJoint117ZZZ.children[0] = HAnimSegment118;

let HAnimJoint119 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint119.DEF = "hanim_vt11";
HAnimJoint119.name = "vt11";
HAnimJoint119.center = new X3D.SFVec3f([0.0053,1.2679,-0.081]);
let HAnimSegment120 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment120.DEF = "hanim_t11";
HAnimSegment120.name = "t11";
HAnimJoint119YYY.children = new X3D.MFNode();

HAnimJoint119ZZZ.children[0] = HAnimSegment120;

let HAnimJoint121 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint121.DEF = "hanim_vt10";
HAnimJoint121.name = "vt10";
HAnimJoint121.center = new X3D.SFVec3f([0.0056,1.2848,-0.0822]);
let HAnimSegment122 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment122.DEF = "hanim_t10";
HAnimSegment122.name = "t10";
let HAnimSite123 = browser.currentScene.createNode("HAnimSite");
HAnimSite123.DEF = "hanim_substernale_pt";
HAnimSite123.name = "substernale_pt";
HAnimSite123.translation = new X3D.SFVec3f([0.0085,1.2995,0.1147]);
HAnimSegment122YYY.children = new X3D.MFNode();

HAnimSegment122ZZZ.children[0] = HAnimSite123;

HAnimJoint121YYY.children = new X3D.MFNode();

HAnimJoint121ZZZ.children[0] = HAnimSegment122;

let HAnimJoint124 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint124.DEF = "hanim_vt9";
HAnimJoint124.name = "vt9";
HAnimJoint124.center = new X3D.SFVec3f([0.0057,1.3126,-0.0838]);
let HAnimSegment125 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment125.DEF = "hanim_t9";
HAnimSegment125.name = "t9";
let HAnimSite126 = browser.currentScene.createNode("HAnimSite");
HAnimSite126.DEF = "hanim_r_thelion_pt";
HAnimSite126.name = "r_thelion_pt";
HAnimSite126.translation = new X3D.SFVec3f([-0.0736,1.3385,0.1217]);
HAnimSegment125YYY.children = new X3D.MFNode();

HAnimSegment125ZZZ.children[0] = HAnimSite126;

let HAnimSite127 = browser.currentScene.createNode("HAnimSite");
HAnimSite127.DEF = "hanim_l_thelion_pt";
HAnimSite127.name = "l_thelion_pt";
HAnimSite127.translation = new X3D.SFVec3f([0.0918,1.3382,0.1192]);
HAnimSegment125ZZZ.children[1] = HAnimSite127;

HAnimJoint124YYY.children = new X3D.MFNode();

HAnimJoint124ZZZ.children[0] = HAnimSegment125;

let HAnimJoint128 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint128.DEF = "hanim_vt8";
HAnimJoint128.name = "vt8";
HAnimJoint128.center = new X3D.SFVec3f([0.0057,1.3382,-0.0845]);
let HAnimSegment129 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment129.DEF = "hanim_t8";
HAnimSegment129.name = "t8";
HAnimJoint128YYY.children = new X3D.MFNode();

HAnimJoint128ZZZ.children[0] = HAnimSegment129;

let HAnimJoint130 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint130.DEF = "hanim_vt7";
HAnimJoint130.name = "vt7";
HAnimJoint130.center = new X3D.SFVec3f([0.0058,1.3625,-0.0833]);
let HAnimSegment131 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment131.DEF = "hanim_t7";
HAnimSegment131.name = "t7";
HAnimJoint130YYY.children = new X3D.MFNode();

HAnimJoint130ZZZ.children[0] = HAnimSegment131;

let HAnimJoint132 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint132.DEF = "hanim_vt6";
HAnimJoint132.name = "vt6";
HAnimJoint132.center = new X3D.SFVec3f([0.0059,1.3866,-0.08]);
let HAnimSegment133 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment133.DEF = "hanim_t6";
HAnimSegment133.name = "t6";
HAnimJoint132YYY.children = new X3D.MFNode();

HAnimJoint132ZZZ.children[0] = HAnimSegment133;

let HAnimJoint134 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint134.DEF = "hanim_vt5";
HAnimJoint134.name = "vt5";
HAnimJoint134.center = new X3D.SFVec3f([0.006,1.4102,-0.0745]);
let HAnimSegment135 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment135.DEF = "hanim_t5";
HAnimSegment135.name = "t5";
HAnimJoint134YYY.children = new X3D.MFNode();

HAnimJoint134ZZZ.children[0] = HAnimSegment135;

let HAnimJoint136 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint136.DEF = "hanim_vt4";
HAnimJoint136.name = "vt4";
HAnimJoint136.center = new X3D.SFVec3f([0.0061,1.432,-0.0675]);
let HAnimSegment137 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment137.DEF = "hanim_t4";
HAnimSegment137.name = "t4";
HAnimJoint136YYY.children = new X3D.MFNode();

HAnimJoint136ZZZ.children[0] = HAnimSegment137;

let HAnimJoint138 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint138.DEF = "hanim_vt3";
HAnimJoint138.name = "vt3";
HAnimJoint138.center = new X3D.SFVec3f([0.0062,1.4583,-0.057]);
let HAnimSegment139 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment139.DEF = "hanim_t3";
HAnimSegment139.name = "t3";
HAnimJoint138YYY.children = new X3D.MFNode();

HAnimJoint138ZZZ.children[0] = HAnimSegment139;

let HAnimJoint140 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint140.DEF = "hanim_vt2";
HAnimJoint140.name = "vt2";
HAnimJoint140.center = new X3D.SFVec3f([0.0063,1.4761,-0.0484]);
let HAnimSegment141 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment141.DEF = "hanim_t2";
HAnimSegment141.name = "t2";
HAnimJoint140YYY.children = new X3D.MFNode();

HAnimJoint140ZZZ.children[0] = HAnimSegment141;

let HAnimJoint142 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint142.DEF = "hanim_vt1";
HAnimJoint142.name = "vt1";
HAnimJoint142.center = new X3D.SFVec3f([0.0065,1.4951,-0.0387]);
let HAnimSegment143 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment143.DEF = "hanim_t1";
HAnimSegment143.name = "t1";
let HAnimSite144 = browser.currentScene.createNode("HAnimSite");
HAnimSite144.DEF = "hanim_suprasternale_pt";
HAnimSite144.name = "suprasternale_pt";
HAnimSite144.translation = new X3D.SFVec3f([0.0084,1.4714,0.0551]);
HAnimSegment143YYY.children = new X3D.MFNode();

HAnimSegment143ZZZ.children[0] = HAnimSite144;

let HAnimSite145 = browser.currentScene.createNode("HAnimSite");
HAnimSite145.DEF = "hanim_cervicale_pt";
HAnimSite145.name = "cervicale_pt";
HAnimSite145.translation = new X3D.SFVec3f([0.0064,1.52,-0.0815]);
HAnimSegment143ZZZ.children[1] = HAnimSite145;

HAnimJoint142YYY.children = new X3D.MFNode();

HAnimJoint142ZZZ.children[0] = HAnimSegment143;

let HAnimJoint146 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint146.DEF = "hanim_vc7";
HAnimJoint146.name = "vc7";
HAnimJoint146.center = new X3D.SFVec3f([0.0066,1.5132,-0.0301]);
let HAnimSegment147 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment147.DEF = "hanim_c7";
HAnimSegment147.name = "c7";
let HAnimSite148 = browser.currentScene.createNode("HAnimSite");
HAnimSite148.DEF = "hanim_r_neck_base_pt";
HAnimSite148.name = "r_neck_base_pt";
HAnimSite148.translation = new X3D.SFVec3f([-0.0419,1.5149,-0.022]);
HAnimSegment147YYY.children = new X3D.MFNode();

HAnimSegment147ZZZ.children[0] = HAnimSite148;

let HAnimSite149 = browser.currentScene.createNode("HAnimSite");
HAnimSite149.DEF = "hanim_l_neck_base_pt";
HAnimSite149.name = "l_neck_base_pt";
HAnimSite149.translation = new X3D.SFVec3f([0.0646,1.5141,-0.038]);
HAnimSegment147ZZZ.children[1] = HAnimSite149;

HAnimJoint146YYY.children = new X3D.MFNode();

HAnimJoint146ZZZ.children[0] = HAnimSegment147;

let HAnimJoint150 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint150.DEF = "hanim_vc6";
HAnimJoint150.name = "vc6";
HAnimJoint150.center = new X3D.SFVec3f([0.0066,1.5357,-0.0143]);
let HAnimSegment151 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment151.DEF = "hanim_c6";
HAnimSegment151.name = "c6";
HAnimJoint150YYY.children = new X3D.MFNode();

HAnimJoint150ZZZ.children[0] = HAnimSegment151;

let HAnimJoint152 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint152.DEF = "hanim_vc5";
HAnimJoint152.name = "vc5";
HAnimJoint152.center = new X3D.SFVec3f([0.0066,1.552,-0.0082]);
let HAnimSegment153 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment153.DEF = "hanim_c5";
HAnimSegment153.name = "c5";
HAnimJoint152YYY.children = new X3D.MFNode();

HAnimJoint152ZZZ.children[0] = HAnimSegment153;

let HAnimJoint154 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint154.DEF = "hanim_vc4";
HAnimJoint154.name = "vc4";
HAnimJoint154.center = new X3D.SFVec3f([0.0066,1.5662,-0.0084]);
let HAnimSegment155 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment155.DEF = "hanim_c4";
HAnimSegment155.name = "c4";
HAnimJoint154YYY.children = new X3D.MFNode();

HAnimJoint154ZZZ.children[0] = HAnimSegment155;

let HAnimJoint156 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint156.DEF = "hanim_vc3";
HAnimJoint156.name = "vc3";
HAnimJoint156.center = new X3D.SFVec3f([0.0066,1.58,-0.0103]);
let HAnimSegment157 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment157.DEF = "hanim_c3";
HAnimSegment157.name = "c3";
HAnimJoint156YYY.children = new X3D.MFNode();

HAnimJoint156ZZZ.children[0] = HAnimSegment157;

let HAnimJoint158 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint158.DEF = "hanim_vc2";
HAnimJoint158.name = "vc2";
HAnimJoint158.center = new X3D.SFVec3f([0.0066,1.5928,-0.0103]);
let HAnimSegment159 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment159.DEF = "hanim_c2";
HAnimSegment159.name = "c2";
HAnimJoint158YYY.children = new X3D.MFNode();

HAnimJoint158ZZZ.children[0] = HAnimSegment159;

let HAnimJoint160 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint160.DEF = "hanim_vc1";
HAnimJoint160.name = "vc1";
HAnimJoint160.center = new X3D.SFVec3f([0.0066,1.6144,-0.0034]);
let HAnimSegment161 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment161.DEF = "hanim_c1";
HAnimSegment161.name = "c1";
HAnimJoint160YYY.children = new X3D.MFNode();

HAnimJoint160ZZZ.children[0] = HAnimSegment161;

let HAnimJoint162 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint162.DEF = "hanim_skullbase";
HAnimJoint162.name = "skullbase";
HAnimJoint162.center = new X3D.SFVec3f([0.0044,1.6209,0.0236]);
let HAnimSegment163 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment163.DEF = "hanim_skull";
HAnimSegment163.name = "skull";
let HAnimSite164 = browser.currentScene.createNode("HAnimSite");
HAnimSite164.DEF = "hanim_skull_tip";
HAnimSite164.name = "skull_tip";
HAnimSite164.translation = new X3D.SFVec3f([0.005,1.7504,0.0055]);
HAnimSegment163YYY.children = new X3D.MFNode();

HAnimSegment163ZZZ.children[0] = HAnimSite164;

let HAnimSite165 = browser.currentScene.createNode("HAnimSite");
HAnimSite165.DEF = "hanim_sellion_pt";
HAnimSite165.name = "sellion_pt";
HAnimSite165.translation = new X3D.SFVec3f([0.0058,1.6316,0.0852]);
HAnimSegment163ZZZ.children[1] = HAnimSite165;

let HAnimSite166 = browser.currentScene.createNode("HAnimSite");
HAnimSite166.DEF = "hanim_r_infraorbitale_pt";
HAnimSite166.name = "r_infraorbitale_pt";
HAnimSite166.translation = new X3D.SFVec3f([-0.0237,1.6171,0.0752]);
HAnimSegment163ZZZ.children[2] = HAnimSite166;

let HAnimSite167 = browser.currentScene.createNode("HAnimSite");
HAnimSite167.DEF = "hanim_l_infraorbitale_pt";
HAnimSite167.name = "l_infraorbitale_pt";
HAnimSite167.translation = new X3D.SFVec3f([0.0341,1.6171,0.0752]);
HAnimSegment163ZZZ.children[3] = HAnimSite167;

let HAnimSite168 = browser.currentScene.createNode("HAnimSite");
HAnimSite168.DEF = "hanim_supramenton_pt";
HAnimSite168.name = "supramenton_pt";
HAnimSite168.translation = new X3D.SFVec3f([0.0061,1.541,0.0805]);
HAnimSegment163ZZZ.children[4] = HAnimSite168;

let HAnimSite169 = browser.currentScene.createNode("HAnimSite");
HAnimSite169.DEF = "hanim_r_tragion_pt";
HAnimSite169.name = "r_tragion_pt";
HAnimSite169.translation = new X3D.SFVec3f([-0.0646,1.6347,0.0302]);
HAnimSegment163ZZZ.children[5] = HAnimSite169;

let HAnimSite170 = browser.currentScene.createNode("HAnimSite");
HAnimSite170.DEF = "hanim_r_gonion_pt";
HAnimSite170.name = "r_gonion_pt";
HAnimSite170.translation = new X3D.SFVec3f([-0.052,1.5529,0.0347]);
HAnimSegment163ZZZ.children[6] = HAnimSite170;

let HAnimSite171 = browser.currentScene.createNode("HAnimSite");
HAnimSite171.DEF = "hanim_l_tragion_pt";
HAnimSite171.name = "l_tragion_pt";
HAnimSite171.translation = new X3D.SFVec3f([0.0739,1.6348,0.0282]);
HAnimSegment163ZZZ.children[7] = HAnimSite171;

let HAnimSite172 = browser.currentScene.createNode("HAnimSite");
HAnimSite172.DEF = "hanim_l_gonion_pt";
HAnimSite172.name = "l_gonion_pt";
HAnimSite172.translation = new X3D.SFVec3f([0.0631,1.553,0.033]);
HAnimSegment163ZZZ.children[8] = HAnimSite172;

let HAnimSite173 = browser.currentScene.createNode("HAnimSite");
HAnimSite173.DEF = "hanim_nuchale_pt";
HAnimSite173.name = "nuchale_pt";
HAnimSite173.translation = new X3D.SFVec3f([0.0039,1.5972,-0.0796]);
HAnimSegment163ZZZ.children[9] = HAnimSite173;

HAnimJoint162YYY.children = new X3D.MFNode();

HAnimJoint162ZZZ.children[0] = HAnimSegment163;

let HAnimJoint174 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint174.DEF = "hanim_l_eyeball_joint";
HAnimJoint174.name = "l_eyeball_joint";
HAnimJoint174.center = new X3D.SFVec3f([0.0336,1.6332,0.0502]);
let HAnimSegment175 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment175.DEF = "hanim_l_eyeball";
HAnimSegment175.name = "l_eyeball";
let HAnimSite176 = browser.currentScene.createNode("HAnimSite");
HAnimSite176.DEF = "hanim_l_eyeball_site_view";
HAnimSite176.name = "l_eyeball_site_view";
HAnimSite176.translation = new X3D.SFVec3f([0.034,1.64,0.05]);
let Viewpoint177 = browser.currentScene.createNode("Viewpoint");
Viewpoint177.DEF = "hanim_l_eyeball_site_viewpoint";
Viewpoint177.description = "l_eyeball_site_viewpoint looking forward";
Viewpoint177.position = new X3D.SFVec3f([0,0,0]);
Viewpoint177.orientation = new X3D.SFRotation([0,1,0,3.141593]);
HAnimSite176YYY.children = new X3D.MFNode();

HAnimSite176ZZZ.children[0] = Viewpoint177;

HAnimSegment175YYY.children = new X3D.MFNode();

HAnimSegment175ZZZ.children[0] = HAnimSite176;

HAnimJoint174YYY.children = new X3D.MFNode();

HAnimJoint174ZZZ.children[0] = HAnimSegment175;

HAnimJoint162ZZZ.children[1] = HAnimJoint174;

let HAnimJoint178 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint178.DEF = "hanim_l_eyelid_joint";
HAnimJoint178.name = "l_eyelid_joint";
HAnimJoint178.center = new X3D.SFVec3f([0.0336,1.6332,0.0502]);
let HAnimSegment179 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment179.DEF = "hanim_l_eyelid";
HAnimSegment179.name = "l_eyelid";
HAnimJoint178YYY.children = new X3D.MFNode();

HAnimJoint178ZZZ.children[0] = HAnimSegment179;

HAnimJoint162ZZZ.children[2] = HAnimJoint178;

let HAnimJoint180 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint180.DEF = "hanim_l_eyebrow_joint";
HAnimJoint180.name = "l_eyebrow_joint";
HAnimJoint180.center = new X3D.SFVec3f([0.0336,1.635,0.0506]);
let HAnimSegment181 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment181.DEF = "hanim_l_eyebrow";
HAnimSegment181.name = "l_eyebrow";
HAnimJoint180YYY.children = new X3D.MFNode();

HAnimJoint180ZZZ.children[0] = HAnimSegment181;

HAnimJoint162ZZZ.children[3] = HAnimJoint180;

let HAnimJoint182 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint182.DEF = "hanim_r_eyeball_joint";
HAnimJoint182.name = "r_eyeball_joint";
HAnimJoint182.center = new X3D.SFVec3f([-0.0336,1.6332,0.0502]);
let HAnimSegment183 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment183.DEF = "hanim_r_eyeball";
HAnimSegment183.name = "r_eyeball";
let HAnimSite184 = browser.currentScene.createNode("HAnimSite");
HAnimSite184.DEF = "hanim_r_eyeball_site_view";
HAnimSite184.name = "r_eyeball_site_view";
HAnimSite184.translation = new X3D.SFVec3f([-0.034,1.64,0.05]);
let Viewpoint185 = browser.currentScene.createNode("Viewpoint");
Viewpoint185.DEF = "hanim_r_eyeball_site_viewpoint";
Viewpoint185.description = "r_eyeball_site_viewpoint looking forward";
Viewpoint185.position = new X3D.SFVec3f([0,0,0]);
Viewpoint185.orientation = new X3D.SFRotation([0,1,0,3.141593]);
HAnimSite184YYY.children = new X3D.MFNode();

HAnimSite184ZZZ.children[0] = Viewpoint185;

HAnimSegment183YYY.children = new X3D.MFNode();

HAnimSegment183ZZZ.children[0] = HAnimSite184;

HAnimJoint182YYY.children = new X3D.MFNode();

HAnimJoint182ZZZ.children[0] = HAnimSegment183;

HAnimJoint162ZZZ.children[4] = HAnimJoint182;

let HAnimJoint186 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint186.DEF = "hanim_r_eyelid_joint";
HAnimJoint186.name = "r_eyelid_joint";
HAnimJoint186.center = new X3D.SFVec3f([-0.0336,1.6332,0.0502]);
let HAnimSegment187 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment187.DEF = "hanim_r_eyelid";
HAnimSegment187.name = "r_eyelid";
HAnimJoint186YYY.children = new X3D.MFNode();

HAnimJoint186ZZZ.children[0] = HAnimSegment187;

HAnimJoint162ZZZ.children[5] = HAnimJoint186;

let HAnimJoint188 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint188.DEF = "hanim_r_eyebrow_joint";
HAnimJoint188.name = "r_eyebrow_joint";
HAnimJoint188.center = new X3D.SFVec3f([-0.0336,1.635,0.0506]);
let HAnimSegment189 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment189.DEF = "hanim_r_eyebrow";
HAnimSegment189.name = "r_eyebrow";
HAnimJoint188YYY.children = new X3D.MFNode();

HAnimJoint188ZZZ.children[0] = HAnimSegment189;

HAnimJoint162ZZZ.children[6] = HAnimJoint188;

let HAnimJoint190 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint190.DEF = "hanim_temporomandibular";
HAnimJoint190.name = "temporomandibular";
HAnimJoint190.center = new X3D.SFVec3f([0,1.63,0.015]);
let HAnimSegment191 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment191.DEF = "hanim_jaw";
HAnimSegment191.name = "jaw";
let HAnimSite192 = browser.currentScene.createNode("HAnimSite");
HAnimSite192.DEF = "hanim_temporomandibular_l_site_pt";
HAnimSite192.name = "temporomandibular_l_site_pt";
HAnimSite192.translation = new X3D.SFVec3f([0.045,1.63,0]);
HAnimSegment191YYY.children = new X3D.MFNode();

HAnimSegment191ZZZ.children[0] = HAnimSite192;

let HAnimSite193 = browser.currentScene.createNode("HAnimSite");
HAnimSite193.DEF = "hanim_temporomandibular_r_site_pt";
HAnimSite193.name = "temporomandibular_r_site_pt";
HAnimSite193.translation = new X3D.SFVec3f([-0.045,1.63,0]);
HAnimSegment191ZZZ.children[1] = HAnimSite193;

HAnimJoint190YYY.children = new X3D.MFNode();

HAnimJoint190ZZZ.children[0] = HAnimSegment191;

HAnimJoint162ZZZ.children[7] = HAnimJoint190;

HAnimJoint160ZZZ.children[1] = HAnimJoint162;

HAnimJoint158ZZZ.children[1] = HAnimJoint160;

HAnimJoint156ZZZ.children[1] = HAnimJoint158;

HAnimJoint154ZZZ.children[1] = HAnimJoint156;

HAnimJoint152ZZZ.children[1] = HAnimJoint154;

HAnimJoint150ZZZ.children[1] = HAnimJoint152;

HAnimJoint146ZZZ.children[1] = HAnimJoint150;

HAnimJoint142ZZZ.children[1] = HAnimJoint146;

let HAnimJoint194 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint194.DEF = "hanim_l_sternoclavicular";
HAnimJoint194.name = "l_sternoclavicular";
HAnimJoint194.center = new X3D.SFVec3f([0.082,1.4488,-0.0353]);
let HAnimSegment195 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment195.DEF = "hanim_l_clavicle";
HAnimSegment195.name = "l_clavicle";
let HAnimSite196 = browser.currentScene.createNode("HAnimSite");
HAnimSite196.DEF = "hanim_l_clavicale_pt";
HAnimSite196.name = "l_clavicale_pt";
HAnimSite196.translation = new X3D.SFVec3f([0.0271,1.4943,0.0394]);
HAnimSegment195YYY.children = new X3D.MFNode();

HAnimSegment195ZZZ.children[0] = HAnimSite196;

let HAnimSite197 = browser.currentScene.createNode("HAnimSite");
HAnimSite197.DEF = "hanim_l_acromion_pt";
HAnimSite197.name = "l_acromion_pt";
HAnimSite197.translation = new X3D.SFVec3f([0.2032,1.476,-0.049]);
HAnimSegment195ZZZ.children[1] = HAnimSite197;

let HAnimSite198 = browser.currentScene.createNode("HAnimSite");
HAnimSite198.DEF = "hanim_l_axilla_ant_pt";
HAnimSite198.name = "l_axilla_ant_pt";
HAnimSite198.translation = new X3D.SFVec3f([0.1777,1.4065,-0.0075]);
HAnimSegment195ZZZ.children[2] = HAnimSite198;

let HAnimSite199 = browser.currentScene.createNode("HAnimSite");
HAnimSite199.DEF = "hanim_l_axilla_post_pt";
HAnimSite199.name = "l_axilla_post_pt";
HAnimSite199.translation = new X3D.SFVec3f([0.1706,1.4072,-0.0875]);
HAnimSegment195ZZZ.children[3] = HAnimSite199;

HAnimJoint194YYY.children = new X3D.MFNode();

HAnimJoint194ZZZ.children[0] = HAnimSegment195;

let HAnimJoint200 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint200.DEF = "hanim_l_acromioclavicular";
HAnimJoint200.name = "l_acromioclavicular";
HAnimJoint200.center = new X3D.SFVec3f([0.0962,1.4269,-0.0424]);
let HAnimSegment201 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment201.DEF = "hanim_l_scapula";
HAnimSegment201.name = "l_scapula";
HAnimJoint200YYY.children = new X3D.MFNode();

HAnimJoint200ZZZ.children[0] = HAnimSegment201;

let HAnimJoint202 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint202.DEF = "hanim_l_shoulder";
HAnimJoint202.name = "l_shoulder";
HAnimJoint202.center = new X3D.SFVec3f([0.2029,1.4376,-0.0387]);
let HAnimSegment203 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment203.DEF = "hanim_l_upperarm";
HAnimSegment203.name = "l_upperarm";
let HAnimSite204 = browser.currentScene.createNode("HAnimSite");
HAnimSite204.DEF = "hanim_l_humeral_lateral_epicn_pt";
HAnimSite204.name = "l_humeral_lateral_epicn_pt";
HAnimSite204.translation = new X3D.SFVec3f([0.228,1.1482,-0.11]);
HAnimSegment203YYY.children = new X3D.MFNode();

HAnimSegment203ZZZ.children[0] = HAnimSite204;

HAnimJoint202YYY.children = new X3D.MFNode();

HAnimJoint202ZZZ.children[0] = HAnimSegment203;

let HAnimJoint205 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint205.DEF = "hanim_l_elbow";
HAnimJoint205.name = "l_elbow";
HAnimJoint205.center = new X3D.SFVec3f([0.2014,1.1357,-0.0682]);
let HAnimSegment206 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment206.DEF = "hanim_l_forearm";
HAnimSegment206.name = "l_forearm";
let HAnimSite207 = browser.currentScene.createNode("HAnimSite");
HAnimSite207.DEF = "hanim_l_radial_styloid_pt";
HAnimSite207.name = "l_radial_styloid_pt";
HAnimSite207.translation = new X3D.SFVec3f([0.1901,0.8645,-0.0415]);
HAnimSegment206YYY.children = new X3D.MFNode();

HAnimSegment206ZZZ.children[0] = HAnimSite207;

let HAnimSite208 = browser.currentScene.createNode("HAnimSite");
HAnimSite208.DEF = "hanim_l_olecranon_pt";
HAnimSite208.name = "l_olecranon_pt";
HAnimSite208.translation = new X3D.SFVec3f([0.1962,1.1375,-0.1123]);
HAnimSegment206ZZZ.children[1] = HAnimSite208;

let HAnimSite209 = browser.currentScene.createNode("HAnimSite");
HAnimSite209.DEF = "hanim_l_humeral_medial_epicn_pt";
HAnimSite209.name = "l_humeral_medial_epicn_pt";
HAnimSite209.translation = new X3D.SFVec3f([0.1735,1.1272,-0.1113]);
HAnimSegment206ZZZ.children[2] = HAnimSite209;

let HAnimSite210 = browser.currentScene.createNode("HAnimSite");
HAnimSite210.DEF = "hanim_l_radiale_pt";
HAnimSite210.name = "l_radiale_pt";
HAnimSite210.translation = new X3D.SFVec3f([0.2182,1.1212,-0.1167]);
HAnimSegment206ZZZ.children[3] = HAnimSite210;

HAnimJoint205YYY.children = new X3D.MFNode();

HAnimJoint205ZZZ.children[0] = HAnimSegment206;

let HAnimJoint211 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint211.DEF = "hanim_l_wrist";
HAnimJoint211.name = "l_wrist";
HAnimJoint211.center = new X3D.SFVec3f([0.1984,0.8663,-0.0583]);
let HAnimSegment212 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment212.DEF = "hanim_l_hand";
HAnimSegment212.name = "l_hand";
let HAnimSite213 = browser.currentScene.createNode("HAnimSite");
HAnimSite213.DEF = "hanim_l_metacarpal_pha2_pt";
HAnimSite213.name = "l_metacarpal_pha2_pt";
HAnimSite213.translation = new X3D.SFVec3f([0.2009,0.8139,-0.0237]);
HAnimSegment212YYY.children = new X3D.MFNode();

HAnimSegment212ZZZ.children[0] = HAnimSite213;

let HAnimSite214 = browser.currentScene.createNode("HAnimSite");
HAnimSite214.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite214.name = "l_ulnar_styloid_pt";
HAnimSite214.translation = new X3D.SFVec3f([0.2142,0.8529,-0.0648]);
HAnimSegment212ZZZ.children[1] = HAnimSite214;

let HAnimSite215 = browser.currentScene.createNode("HAnimSite");
HAnimSite215.DEF = "hanim_l_metacarpal_pha5_pt";
HAnimSite215.name = "l_metacarpal_pha5_pt";
HAnimSite215.translation = new X3D.SFVec3f([0.1929,0.786,-0.1122]);
HAnimSegment212ZZZ.children[2] = HAnimSite215;

let HAnimSite216 = browser.currentScene.createNode("HAnimSite");
HAnimSite216.DEF = "hanim_l_hand_front_view";
HAnimSite216.name = "l_hand_front_view";
HAnimSite216.translation = new X3D.SFVec3f([0.3,0.75,0.45]);
let Viewpoint217 = browser.currentScene.createNode("Viewpoint");
Viewpoint217.DEF = "hanim_l_hand_front_viewpoint";
Viewpoint217.description = "left hand front";
Viewpoint217.position = new X3D.SFVec3f([0,0,0]);
Viewpoint217.centerOfRotation = new X3D.SFVec3f([0,0.7,0]);
HAnimSite216YYY.children = new X3D.MFNode();

HAnimSite216ZZZ.children[0] = Viewpoint217;

HAnimSegment212ZZZ.children[3] = HAnimSite216;

HAnimJoint211YYY.children = new X3D.MFNode();

HAnimJoint211ZZZ.children[0] = HAnimSegment212;

let HAnimJoint218 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint218.DEF = "hanim_l_thumb1";
HAnimJoint218.name = "l_thumb1";
HAnimJoint218.center = new X3D.SFVec3f([0.1924,0.8472,-0.0534]);
let HAnimSegment219 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment219.DEF = "hanim_l_thumb_metacarpal";
HAnimSegment219.name = "l_thumb_metacarpal";
HAnimJoint218YYY.children = new X3D.MFNode();

HAnimJoint218ZZZ.children[0] = HAnimSegment219;

let HAnimJoint220 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint220.DEF = "hanim_l_thumb2";
HAnimJoint220.name = "l_thumb2";
HAnimJoint220.center = new X3D.SFVec3f([0.1951,0.8226,0.0246]);
let HAnimSegment221 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment221.DEF = "hanim_l_thumb_proximal";
HAnimSegment221.name = "l_thumb_proximal";
HAnimJoint220YYY.children = new X3D.MFNode();

HAnimJoint220ZZZ.children[0] = HAnimSegment221;

let HAnimJoint222 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint222.DEF = "hanim_l_thumb3";
HAnimJoint222.name = "l_thumb3";
HAnimJoint222.center = new X3D.SFVec3f([0.1955,0.8159,0.0464]);
let HAnimSegment223 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment223.DEF = "hanim_l_thumb_distal";
HAnimSegment223.name = "l_thumb_distal";
let HAnimSite224 = browser.currentScene.createNode("HAnimSite");
HAnimSite224.DEF = "hanim_l_thumb_distal_tip";
HAnimSite224.name = "l_thumb_distal_tip";
HAnimSite224.translation = new X3D.SFVec3f([0.1982,0.8061,0.0759]);
HAnimSegment223YYY.children = new X3D.MFNode();

HAnimSegment223ZZZ.children[0] = HAnimSite224;

HAnimJoint222YYY.children = new X3D.MFNode();

HAnimJoint222ZZZ.children[0] = HAnimSegment223;

HAnimJoint220ZZZ.children[1] = HAnimJoint222;

HAnimJoint218ZZZ.children[1] = HAnimJoint220;

HAnimJoint211ZZZ.children[1] = HAnimJoint218;

let HAnimJoint225 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint225.DEF = "hanim_l_index0";
HAnimJoint225.name = "l_index0";
HAnimJoint225.center = new X3D.SFVec3f([0.1983,0.8024,-0.028]);
let HAnimSegment226 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment226.DEF = "hanim_l_index_metacarpal";
HAnimSegment226.name = "l_index_metacarpal";
HAnimJoint225YYY.children = new X3D.MFNode();

HAnimJoint225ZZZ.children[0] = HAnimSegment226;

let HAnimJoint227 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint227.DEF = "hanim_l_index1";
HAnimJoint227.name = "l_index1";
HAnimJoint227.center = new X3D.SFVec3f([0.1983,0.7815,-0.028]);
let HAnimSegment228 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment228.DEF = "hanim_l_index_proximal";
HAnimSegment228.name = "l_index_proximal";
HAnimJoint227YYY.children = new X3D.MFNode();

HAnimJoint227ZZZ.children[0] = HAnimSegment228;

let HAnimJoint229 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint229.DEF = "hanim_l_index2";
HAnimJoint229.name = "l_index2";
HAnimJoint229.center = new X3D.SFVec3f([0.2017,0.7363,-0.0248]);
let HAnimSegment230 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment230.DEF = "hanim_l_index_middle";
HAnimSegment230.name = "l_index_middle";
HAnimJoint229YYY.children = new X3D.MFNode();

HAnimJoint229ZZZ.children[0] = HAnimSegment230;

let HAnimJoint231 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint231.DEF = "hanim_l_index3";
HAnimJoint231.name = "l_index3";
HAnimJoint231.center = new X3D.SFVec3f([0.2028,0.7139,-0.0236]);
let HAnimSegment232 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment232.DEF = "hanim_l_index_distal";
HAnimSegment232.name = "l_index_distal";
let HAnimSite233 = browser.currentScene.createNode("HAnimSite");
HAnimSite233.DEF = "hanim_l_index_distal_tip";
HAnimSite233.name = "l_index_distal_tip";
HAnimSite233.translation = new X3D.SFVec3f([0.2089,0.6858,-0.0245]);
HAnimSegment232YYY.children = new X3D.MFNode();

HAnimSegment232ZZZ.children[0] = HAnimSite233;

let HAnimSite234 = browser.currentScene.createNode("HAnimSite");
HAnimSite234.DEF = "hanim_l_dactylion_pt";
HAnimSite234.name = "l_dactylion_pt";
HAnimSite234.translation = new X3D.SFVec3f([0.2056,0.6743,-0.0482]);
HAnimSegment232ZZZ.children[1] = HAnimSite234;

HAnimJoint231YYY.children = new X3D.MFNode();

HAnimJoint231ZZZ.children[0] = HAnimSegment232;

HAnimJoint229ZZZ.children[1] = HAnimJoint231;

HAnimJoint227ZZZ.children[1] = HAnimJoint229;

HAnimJoint225ZZZ.children[1] = HAnimJoint227;

HAnimJoint211ZZZ.children[2] = HAnimJoint225;

let HAnimJoint235 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint235.DEF = "hanim_l_middle0";
HAnimJoint235.name = "l_middle0";
HAnimJoint235.center = new X3D.SFVec3f([0.1987,0.8029,-0.053]);
let HAnimSegment236 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment236.DEF = "hanim_l_middle_metacarpal";
HAnimSegment236.name = "l_middle_metacarpal";
HAnimJoint235YYY.children = new X3D.MFNode();

HAnimJoint235ZZZ.children[0] = HAnimSegment236;

let HAnimJoint237 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint237.DEF = "hanim_l_middle1";
HAnimJoint237.name = "l_middle1";
HAnimJoint237.center = new X3D.SFVec3f([0.1987,0.7818,-0.053]);
let HAnimSegment238 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment238.DEF = "hanim_l_middle_proximal";
HAnimSegment238.name = "l_middle_proximal";
HAnimJoint237YYY.children = new X3D.MFNode();

HAnimJoint237ZZZ.children[0] = HAnimSegment238;

let HAnimJoint239 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint239.DEF = "hanim_l_middle2";
HAnimJoint239.name = "l_middle2";
HAnimJoint239.center = new X3D.SFVec3f([0.2013,0.7273,-0.0503]);
let HAnimSegment240 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment240.DEF = "hanim_l_middle_middle";
HAnimSegment240.name = "l_middle_middle";
HAnimJoint239YYY.children = new X3D.MFNode();

HAnimJoint239ZZZ.children[0] = HAnimSegment240;

let HAnimJoint241 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint241.DEF = "hanim_l_middle3";
HAnimJoint241.name = "l_middle3";
HAnimJoint241.center = new X3D.SFVec3f([0.2026,0.7011,-0.0494]);
let HAnimSegment242 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment242.DEF = "hanim_l_middle_distal";
HAnimSegment242.name = "l_middle_distal";
let HAnimSite243 = browser.currentScene.createNode("HAnimSite");
HAnimSite243.DEF = "hanim_l_middle_distal_tip";
HAnimSite243.name = "l_middle_distal_tip";
HAnimSite243.translation = new X3D.SFVec3f([0.208,0.6731,-0.0491]);
HAnimSegment242YYY.children = new X3D.MFNode();

HAnimSegment242ZZZ.children[0] = HAnimSite243;

HAnimJoint241YYY.children = new X3D.MFNode();

HAnimJoint241ZZZ.children[0] = HAnimSegment242;

HAnimJoint239ZZZ.children[1] = HAnimJoint241;

HAnimJoint237ZZZ.children[1] = HAnimJoint239;

HAnimJoint235ZZZ.children[1] = HAnimJoint237;

HAnimJoint211ZZZ.children[3] = HAnimJoint235;

let HAnimJoint244 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint244.DEF = "hanim_l_ring0";
HAnimJoint244.name = "l_ring0";
HAnimJoint244.center = new X3D.SFVec3f([0.1956,0.8019,-0.0794]);
let HAnimSegment245 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment245.DEF = "hanim_l_ring_metacarpal";
HAnimSegment245.name = "l_ring_metacarpal";
HAnimJoint244YYY.children = new X3D.MFNode();

HAnimJoint244ZZZ.children[0] = HAnimSegment245;

let HAnimJoint246 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint246.DEF = "hanim_l_ring1";
HAnimJoint246.name = "l_ring1";
HAnimJoint246.center = new X3D.SFVec3f([0.1956,0.7815,-0.0794]);
let HAnimSegment247 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment247.DEF = "hanim_l_ring_proximal";
HAnimSegment247.name = "l_ring_proximal";
HAnimJoint246YYY.children = new X3D.MFNode();

HAnimJoint246ZZZ.children[0] = HAnimSegment247;

let HAnimJoint248 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint248.DEF = "hanim_l_ring2";
HAnimJoint248.name = "l_ring2";
HAnimJoint248.center = new X3D.SFVec3f([0.1973,0.7287,-0.0777]);
let HAnimSegment249 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment249.DEF = "hanim_l_ring_middle";
HAnimSegment249.name = "l_ring_middle";
HAnimJoint248YYY.children = new X3D.MFNode();

HAnimJoint248ZZZ.children[0] = HAnimSegment249;

let HAnimJoint250 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint250.DEF = "hanim_l_ring3";
HAnimJoint250.name = "l_ring3";
HAnimJoint250.center = new X3D.SFVec3f([0.1983,0.7045,-0.0767]);
let HAnimSegment251 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment251.DEF = "hanim_l_ring_distal";
HAnimSegment251.name = "l_ring_distal";
let HAnimSite252 = browser.currentScene.createNode("HAnimSite");
HAnimSite252.DEF = "hanim_l_ring_distal_tip";
HAnimSite252.name = "l_ring_distal_tip";
HAnimSite252.translation = new X3D.SFVec3f([0.2035,0.675,-0.0756]);
HAnimSegment251YYY.children = new X3D.MFNode();

HAnimSegment251ZZZ.children[0] = HAnimSite252;

HAnimJoint250YYY.children = new X3D.MFNode();

HAnimJoint250ZZZ.children[0] = HAnimSegment251;

HAnimJoint248ZZZ.children[1] = HAnimJoint250;

HAnimJoint246ZZZ.children[1] = HAnimJoint248;

HAnimJoint244ZZZ.children[1] = HAnimJoint246;

HAnimJoint211ZZZ.children[4] = HAnimJoint244;

let HAnimJoint253 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint253.DEF = "hanim_l_pinky0";
HAnimJoint253.name = "l_pinky0";
HAnimJoint253.center = new X3D.SFVec3f([0.1925,0.8066,-0.1036]);
let HAnimSegment254 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment254.DEF = "hanim_l_pinky_metacarpal";
HAnimSegment254.name = "l_pinky_metacarpal";
HAnimJoint253YYY.children = new X3D.MFNode();

HAnimJoint253ZZZ.children[0] = HAnimSegment254;

let HAnimJoint255 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint255.DEF = "hanim_l_pinky1";
HAnimJoint255.name = "l_pinky1";
HAnimJoint255.center = new X3D.SFVec3f([0.1925,0.7866,-0.1036]);
let HAnimSegment256 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment256.DEF = "hanim_l_pinky_proximal";
HAnimSegment256.name = "l_pinky_proximal";
HAnimJoint255YYY.children = new X3D.MFNode();

HAnimJoint255ZZZ.children[0] = HAnimSegment256;

let HAnimJoint257 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint257.DEF = "hanim_l_pinky2";
HAnimJoint257.name = "l_pinky2";
HAnimJoint257.center = new X3D.SFVec3f([0.1938,0.7452,-0.1024]);
let HAnimSegment258 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment258.DEF = "hanim_l_pinky_middle";
HAnimSegment258.name = "l_pinky_middle";
HAnimJoint257YYY.children = new X3D.MFNode();

HAnimJoint257ZZZ.children[0] = HAnimSegment258;

let HAnimJoint259 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint259.DEF = "hanim_l_pinky3";
HAnimJoint259.name = "l_pinky3";
HAnimJoint259.center = new X3D.SFVec3f([0.1948,0.7277,-0.1017]);
let HAnimSegment260 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment260.DEF = "hanim_l_pinky_distal";
HAnimSegment260.name = "l_pinky_distal";
let HAnimSite261 = browser.currentScene.createNode("HAnimSite");
HAnimSite261.DEF = "hanim_l_pinky_distal_tip";
HAnimSite261.name = "l_pinky_distal_tip";
HAnimSite261.translation = new X3D.SFVec3f([0.2014,0.7009,-0.1012]);
HAnimSegment260YYY.children = new X3D.MFNode();

HAnimSegment260ZZZ.children[0] = HAnimSite261;

HAnimJoint259YYY.children = new X3D.MFNode();

HAnimJoint259ZZZ.children[0] = HAnimSegment260;

HAnimJoint257ZZZ.children[1] = HAnimJoint259;

HAnimJoint255ZZZ.children[1] = HAnimJoint257;

HAnimJoint253ZZZ.children[1] = HAnimJoint255;

HAnimJoint211ZZZ.children[5] = HAnimJoint253;

HAnimJoint205ZZZ.children[1] = HAnimJoint211;

HAnimJoint202ZZZ.children[1] = HAnimJoint205;

HAnimJoint200ZZZ.children[1] = HAnimJoint202;

HAnimJoint194ZZZ.children[1] = HAnimJoint200;

HAnimJoint142ZZZ.children[2] = HAnimJoint194;

let HAnimJoint262 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint262.DEF = "hanim_r_sternoclavicular";
HAnimJoint262.name = "r_sternoclavicular";
HAnimJoint262.center = new X3D.SFVec3f([-0.082,1.4488,-0.0353]);
let HAnimSegment263 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment263.DEF = "hanim_r_clavicle";
HAnimSegment263.name = "r_clavicle";
let HAnimSite264 = browser.currentScene.createNode("HAnimSite");
HAnimSite264.DEF = "hanim_r_clavicale_pt";
HAnimSite264.name = "r_clavicale_pt";
HAnimSite264.translation = new X3D.SFVec3f([-0.0115,1.4943,0.04]);
HAnimSegment263YYY.children = new X3D.MFNode();

HAnimSegment263ZZZ.children[0] = HAnimSite264;

let HAnimSite265 = browser.currentScene.createNode("HAnimSite");
HAnimSite265.DEF = "hanim_r_acromion_pt";
HAnimSite265.name = "r_acromion_pt";
HAnimSite265.translation = new X3D.SFVec3f([-0.1905,1.4791,-0.0431]);
HAnimSegment263ZZZ.children[1] = HAnimSite265;

let HAnimSite266 = browser.currentScene.createNode("HAnimSite");
HAnimSite266.DEF = "hanim_r_axilla_ant_pt";
HAnimSite266.name = "r_axilla_ant_pt";
HAnimSite266.translation = new X3D.SFVec3f([-0.1626,1.4072,-0.0031]);
HAnimSegment263ZZZ.children[2] = HAnimSite266;

let HAnimSite267 = browser.currentScene.createNode("HAnimSite");
HAnimSite267.DEF = "hanim_r_axilla_post_pt";
HAnimSite267.name = "r_axilla_post_pt";
HAnimSite267.translation = new X3D.SFVec3f([-0.1603,1.4098,-0.0826]);
HAnimSegment263ZZZ.children[3] = HAnimSite267;

HAnimJoint262YYY.children = new X3D.MFNode();

HAnimJoint262ZZZ.children[0] = HAnimSegment263;

let HAnimJoint268 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint268.DEF = "hanim_r_acromioclavicular";
HAnimJoint268.name = "r_acromioclavicular";
HAnimJoint268.center = new X3D.SFVec3f([-0.0962,1.4269,-0.0424]);
let HAnimSegment269 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment269.DEF = "hanim_r_scapula";
HAnimSegment269.name = "r_scapula";
HAnimJoint268YYY.children = new X3D.MFNode();

HAnimJoint268ZZZ.children[0] = HAnimSegment269;

let HAnimJoint270 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint270.DEF = "hanim_r_shoulder";
HAnimJoint270.name = "r_shoulder";
HAnimJoint270.center = new X3D.SFVec3f([-0.2029,1.4376,-0.0387]);
let HAnimSegment271 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment271.DEF = "hanim_r_upperarm";
HAnimSegment271.name = "r_upperarm";
let HAnimSite272 = browser.currentScene.createNode("HAnimSite");
HAnimSite272.DEF = "hanim_r_humeral_lateral_epicn_pt";
HAnimSite272.name = "r_humeral_lateral_epicn_pt";
HAnimSite272.translation = new X3D.SFVec3f([-0.2224,1.1517,-0.1033]);
HAnimSegment271YYY.children = new X3D.MFNode();

HAnimSegment271ZZZ.children[0] = HAnimSite272;

HAnimJoint270YYY.children = new X3D.MFNode();

HAnimJoint270ZZZ.children[0] = HAnimSegment271;

let HAnimJoint273 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint273.DEF = "hanim_r_elbow";
HAnimJoint273.name = "r_elbow";
HAnimJoint273.center = new X3D.SFVec3f([-0.2014,1.1357,-0.0682]);
let HAnimSegment274 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment274.DEF = "hanim_r_forearm";
HAnimSegment274.name = "r_forearm";
let HAnimSite275 = browser.currentScene.createNode("HAnimSite");
HAnimSite275.DEF = "hanim_r_radial_styloid_pt";
HAnimSite275.name = "r_radial_styloid_pt";
HAnimSite275.translation = new X3D.SFVec3f([-0.1884,0.8676,-0.036]);
HAnimSegment274YYY.children = new X3D.MFNode();

HAnimSegment274ZZZ.children[0] = HAnimSite275;

let HAnimSite276 = browser.currentScene.createNode("HAnimSite");
HAnimSite276.DEF = "hanim_r_olecranon_pt";
HAnimSite276.name = "r_olecranon_pt";
HAnimSite276.translation = new X3D.SFVec3f([-0.1907,1.1405,-0.1065]);
HAnimSegment274ZZZ.children[1] = HAnimSite276;

let HAnimSite277 = browser.currentScene.createNode("HAnimSite");
HAnimSite277.DEF = "hanim_r_humeral_medial_epicn_pt";
HAnimSite277.name = "r_humeral_medial_epicn_pt";
HAnimSite277.translation = new X3D.SFVec3f([-0.168,1.1298,-0.1062]);
HAnimSegment274ZZZ.children[2] = HAnimSite277;

let HAnimSite278 = browser.currentScene.createNode("HAnimSite");
HAnimSite278.DEF = "hanim_r_radiale_pt";
HAnimSite278.name = "r_radiale_pt";
HAnimSite278.translation = new X3D.SFVec3f([-0.213,1.1305,-0.1091]);
HAnimSegment274ZZZ.children[3] = HAnimSite278;

HAnimJoint273YYY.children = new X3D.MFNode();

HAnimJoint273ZZZ.children[0] = HAnimSegment274;

let HAnimJoint279 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint279.DEF = "hanim_r_wrist";
HAnimJoint279.name = "r_wrist";
HAnimJoint279.center = new X3D.SFVec3f([-0.1984,0.8663,-0.0583]);
let HAnimSegment280 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment280.DEF = "hanim_r_hand";
HAnimSegment280.name = "r_hand";
let HAnimSite281 = browser.currentScene.createNode("HAnimSite");
HAnimSite281.DEF = "hanim_r_metacarpal_pha2_pt";
HAnimSite281.name = "r_metacarpal_pha2_pt";
HAnimSite281.translation = new X3D.SFVec3f([-0.1977,0.8169,-0.0177]);
HAnimSegment280YYY.children = new X3D.MFNode();

HAnimSegment280ZZZ.children[0] = HAnimSite281;

let HAnimSite282 = browser.currentScene.createNode("HAnimSite");
HAnimSite282.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite282.name = "r_ulnar_styloid_pt";
HAnimSite282.translation = new X3D.SFVec3f([-0.2117,0.8562,-0.0584]);
HAnimSegment280ZZZ.children[1] = HAnimSite282;

let HAnimSite283 = browser.currentScene.createNode("HAnimSite");
HAnimSite283.DEF = "hanim_r_metacarpal_pha5_pt";
HAnimSite283.name = "r_metacarpal_pha5_pt";
HAnimSite283.translation = new X3D.SFVec3f([-0.1929,0.789,-0.1064]);
HAnimSegment280ZZZ.children[2] = HAnimSite283;

let HAnimSite284 = browser.currentScene.createNode("HAnimSite");
HAnimSite284.DEF = "hanim_r_hand_front_view";
HAnimSite284.name = "r_hand_front_view";
HAnimSite284.translation = new X3D.SFVec3f([-0.3,0.75,0.45]);
let Viewpoint285 = browser.currentScene.createNode("Viewpoint");
Viewpoint285.DEF = "hanim_r_hand_front_viewpoint";
Viewpoint285.description = "right hand front";
Viewpoint285.position = new X3D.SFVec3f([0,0,0]);
Viewpoint285.centerOfRotation = new X3D.SFVec3f([0,0.7,0]);
HAnimSite284YYY.children = new X3D.MFNode();

HAnimSite284ZZZ.children[0] = Viewpoint285;

HAnimSegment280ZZZ.children[3] = HAnimSite284;

HAnimJoint279YYY.children = new X3D.MFNode();

HAnimJoint279ZZZ.children[0] = HAnimSegment280;

let HAnimJoint286 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint286.DEF = "hanim_r_thumb1";
HAnimJoint286.name = "r_thumb1";
HAnimJoint286.center = new X3D.SFVec3f([-0.1924,0.8472,-0.0534]);
let HAnimSegment287 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment287.DEF = "hanim_r_thumb_metacarpal";
HAnimSegment287.name = "r_thumb_metacarpal";
HAnimJoint286YYY.children = new X3D.MFNode();

HAnimJoint286ZZZ.children[0] = HAnimSegment287;

let HAnimJoint288 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint288.DEF = "hanim_r_thumb2";
HAnimJoint288.name = "r_thumb2";
HAnimJoint288.center = new X3D.SFVec3f([-0.1951,0.8226,0.0246]);
let HAnimSegment289 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment289.DEF = "hanim_r_thumb_proximal";
HAnimSegment289.name = "r_thumb_proximal";
HAnimJoint288YYY.children = new X3D.MFNode();

HAnimJoint288ZZZ.children[0] = HAnimSegment289;

let HAnimJoint290 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint290.DEF = "hanim_r_thumb3";
HAnimJoint290.name = "r_thumb3";
HAnimJoint290.center = new X3D.SFVec3f([-0.1955,0.8159,0.0464]);
let HAnimSegment291 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment291.DEF = "hanim_r_thumb_distal";
HAnimSegment291.name = "r_thumb_distal";
let HAnimSite292 = browser.currentScene.createNode("HAnimSite");
HAnimSite292.DEF = "hanim_r_thumb_distal_tip";
HAnimSite292.name = "r_thumb_distal_tip";
HAnimSite292.translation = new X3D.SFVec3f([-0.1869,0.809,0.082]);
HAnimSegment291YYY.children = new X3D.MFNode();

HAnimSegment291ZZZ.children[0] = HAnimSite292;

HAnimJoint290YYY.children = new X3D.MFNode();

HAnimJoint290ZZZ.children[0] = HAnimSegment291;

HAnimJoint288ZZZ.children[1] = HAnimJoint290;

HAnimJoint286ZZZ.children[1] = HAnimJoint288;

HAnimJoint279ZZZ.children[1] = HAnimJoint286;

let HAnimJoint293 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint293.DEF = "hanim_r_index0";
HAnimJoint293.name = "r_index0";
HAnimJoint293.center = new X3D.SFVec3f([-0.1983,0.8024,-0.028]);
let HAnimSegment294 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment294.DEF = "hanim_r_index_metacarpal";
HAnimSegment294.name = "r_index_metacarpal";
HAnimJoint293YYY.children = new X3D.MFNode();

HAnimJoint293ZZZ.children[0] = HAnimSegment294;

let HAnimJoint295 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint295.DEF = "hanim_r_index1";
HAnimJoint295.name = "r_index1";
HAnimJoint295.center = new X3D.SFVec3f([-0.1983,0.7815,-0.028]);
let HAnimSegment296 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment296.DEF = "hanim_r_index_proximal";
HAnimSegment296.name = "r_index_proximal";
HAnimJoint295YYY.children = new X3D.MFNode();

HAnimJoint295ZZZ.children[0] = HAnimSegment296;

let HAnimJoint297 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint297.DEF = "hanim_r_index2";
HAnimJoint297.name = "r_index2";
HAnimJoint297.center = new X3D.SFVec3f([-0.2017,0.7363,-0.0248]);
let HAnimSegment298 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment298.DEF = "hanim_r_index_middle";
HAnimSegment298.name = "r_index_middle";
HAnimJoint297YYY.children = new X3D.MFNode();

HAnimJoint297ZZZ.children[0] = HAnimSegment298;

let HAnimJoint299 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint299.DEF = "hanim_r_index3";
HAnimJoint299.name = "r_index3";
HAnimJoint299.center = new X3D.SFVec3f([-0.2028,0.7139,-0.0236]);
let HAnimSegment300 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment300.DEF = "hanim_r_index_distal";
HAnimSegment300.name = "r_index_distal";
let HAnimSite301 = browser.currentScene.createNode("HAnimSite");
HAnimSite301.DEF = "hanim_r_index_distal_tip";
HAnimSite301.name = "r_index_distal_tip";
HAnimSite301.translation = new X3D.SFVec3f([-0.198,0.6883,-0.018]);
HAnimSegment300YYY.children = new X3D.MFNode();

HAnimSegment300ZZZ.children[0] = HAnimSite301;

let HAnimSite302 = browser.currentScene.createNode("HAnimSite");
HAnimSite302.DEF = "hanim_r_dactylion_pt";
HAnimSite302.name = "r_dactylion_pt";
HAnimSite302.translation = new X3D.SFVec3f([-0.1941,0.6772,-0.0423]);
HAnimSegment300ZZZ.children[1] = HAnimSite302;

HAnimJoint299YYY.children = new X3D.MFNode();

HAnimJoint299ZZZ.children[0] = HAnimSegment300;

HAnimJoint297ZZZ.children[1] = HAnimJoint299;

HAnimJoint295ZZZ.children[1] = HAnimJoint297;

HAnimJoint293ZZZ.children[1] = HAnimJoint295;

HAnimJoint279ZZZ.children[2] = HAnimJoint293;

let HAnimJoint303 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint303.DEF = "hanim_r_middle0";
HAnimJoint303.name = "r_middle0";
HAnimJoint303.center = new X3D.SFVec3f([-0.1987,0.8029,-0.053]);
let HAnimSegment304 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment304.DEF = "hanim_r_middle_metacarpal";
HAnimSegment304.name = "r_middle_metacarpal";
HAnimJoint303YYY.children = new X3D.MFNode();

HAnimJoint303ZZZ.children[0] = HAnimSegment304;

let HAnimJoint305 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint305.DEF = "hanim_r_middle1";
HAnimJoint305.name = "r_middle1";
HAnimJoint305.center = new X3D.SFVec3f([-0.1987,0.7818,-0.053]);
let HAnimSegment306 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment306.DEF = "hanim_r_middle_proximal";
HAnimSegment306.name = "r_middle_proximal";
HAnimJoint305YYY.children = new X3D.MFNode();

HAnimJoint305ZZZ.children[0] = HAnimSegment306;

let HAnimJoint307 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint307.DEF = "hanim_r_middle2";
HAnimJoint307.name = "r_middle2";
HAnimJoint307.center = new X3D.SFVec3f([-0.2013,0.7273,-0.0503]);
let HAnimSegment308 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment308.DEF = "hanim_r_middle_middle";
HAnimSegment308.name = "r_middle_middle";
HAnimJoint307YYY.children = new X3D.MFNode();

HAnimJoint307ZZZ.children[0] = HAnimSegment308;

let HAnimJoint309 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint309.DEF = "hanim_r_middle3";
HAnimJoint309.name = "r_middle3";
HAnimJoint309.center = new X3D.SFVec3f([-0.2026,0.7011,-0.0494]);
let HAnimSegment310 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment310.DEF = "hanim_r_middle_distal";
HAnimSegment310.name = "r_middle_distal";
let HAnimSite311 = browser.currentScene.createNode("HAnimSite");
HAnimSite311.DEF = "hanim_r_middle_distal_tip";
HAnimSite311.name = "r_middle_distal_tip";
HAnimSite311.translation = new X3D.SFVec3f([-0.1969,0.6758,-0.0427]);
HAnimSegment310YYY.children = new X3D.MFNode();

HAnimSegment310ZZZ.children[0] = HAnimSite311;

HAnimJoint309YYY.children = new X3D.MFNode();

HAnimJoint309ZZZ.children[0] = HAnimSegment310;

HAnimJoint307ZZZ.children[1] = HAnimJoint309;

HAnimJoint305ZZZ.children[1] = HAnimJoint307;

HAnimJoint303ZZZ.children[1] = HAnimJoint305;

HAnimJoint279ZZZ.children[3] = HAnimJoint303;

let HAnimJoint312 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint312.DEF = "hanim_r_ring0";
HAnimJoint312.name = "r_ring0";
HAnimJoint312.center = new X3D.SFVec3f([-0.1956,0.8019,-0.0794]);
let HAnimSegment313 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment313.DEF = "hanim_r_ring_metacarpal";
HAnimSegment313.name = "r_ring_metacarpal";
HAnimJoint312YYY.children = new X3D.MFNode();

HAnimJoint312ZZZ.children[0] = HAnimSegment313;

let HAnimJoint314 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint314.DEF = "hanim_r_ring1";
HAnimJoint314.name = "r_ring1";
HAnimJoint314.center = new X3D.SFVec3f([-0.1956,0.7815,-0.0794]);
let HAnimSegment315 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment315.DEF = "hanim_r_ring_proximal";
HAnimSegment315.name = "r_ring_proximal";
HAnimJoint314YYY.children = new X3D.MFNode();

HAnimJoint314ZZZ.children[0] = HAnimSegment315;

let HAnimJoint316 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint316.DEF = "hanim_r_ring2";
HAnimJoint316.name = "r_ring2";
HAnimJoint316.center = new X3D.SFVec3f([-0.1973,0.7287,-0.0777]);
let HAnimSegment317 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment317.DEF = "hanim_r_ring_middle";
HAnimSegment317.name = "r_ring_middle";
HAnimJoint316YYY.children = new X3D.MFNode();

HAnimJoint316ZZZ.children[0] = HAnimSegment317;

let HAnimJoint318 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint318.DEF = "hanim_r_ring3";
HAnimJoint318.name = "r_ring3";
HAnimJoint318.center = new X3D.SFVec3f([-0.1983,0.7045,-0.0767]);
let HAnimSegment319 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment319.DEF = "hanim_r_ring_distal";
HAnimSegment319.name = "r_ring_distal";
let HAnimSite320 = browser.currentScene.createNode("HAnimSite");
HAnimSite320.DEF = "hanim_r_ring_distal_tip";
HAnimSite320.name = "r_ring_distal_tip";
HAnimSite320.translation = new X3D.SFVec3f([-0.1934,0.6778,-0.0693]);
HAnimSegment319YYY.children = new X3D.MFNode();

HAnimSegment319ZZZ.children[0] = HAnimSite320;

HAnimJoint318YYY.children = new X3D.MFNode();

HAnimJoint318ZZZ.children[0] = HAnimSegment319;

HAnimJoint316ZZZ.children[1] = HAnimJoint318;

HAnimJoint314ZZZ.children[1] = HAnimJoint316;

HAnimJoint312ZZZ.children[1] = HAnimJoint314;

HAnimJoint279ZZZ.children[4] = HAnimJoint312;

let HAnimJoint321 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint321.DEF = "hanim_r_pinky0";
HAnimJoint321.name = "r_pinky0";
HAnimJoint321.center = new X3D.SFVec3f([-0.1925,0.8066,-0.1036]);
let HAnimSegment322 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment322.DEF = "hanim_r_pinky_metacarpal";
HAnimSegment322.name = "r_pinky_metacarpal";
HAnimJoint321YYY.children = new X3D.MFNode();

HAnimJoint321ZZZ.children[0] = HAnimSegment322;

let HAnimJoint323 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint323.DEF = "hanim_r_pinky1";
HAnimJoint323.name = "r_pinky1";
HAnimJoint323.center = new X3D.SFVec3f([-0.1925,0.7866,-0.1036]);
let HAnimSegment324 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment324.DEF = "hanim_r_pinky_proximal";
HAnimSegment324.name = "r_pinky_proximal";
HAnimJoint323YYY.children = new X3D.MFNode();

HAnimJoint323ZZZ.children[0] = HAnimSegment324;

let HAnimJoint325 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint325.DEF = "hanim_r_pinky2";
HAnimJoint325.name = "r_pinky2";
HAnimJoint325.center = new X3D.SFVec3f([-0.1938,0.7452,-0.1024]);
let HAnimSegment326 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment326.DEF = "hanim_r_pinky_middle";
HAnimSegment326.name = "r_pinky_middle";
HAnimJoint325YYY.children = new X3D.MFNode();

HAnimJoint325ZZZ.children[0] = HAnimSegment326;

let HAnimJoint327 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint327.DEF = "hanim_r_pinky3";
HAnimJoint327.name = "r_pinky3";
HAnimJoint327.center = new X3D.SFVec3f([-0.1948,0.7277,-0.1017]);
let HAnimSegment328 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment328.DEF = "hanim_r_pinky_distal";
HAnimSegment328.name = "r_pinky_distal";
let HAnimSite329 = browser.currentScene.createNode("HAnimSite");
HAnimSite329.DEF = "hanim_r_pinky_distal_tip";
HAnimSite329.name = "r_pinky_distal_tip";
HAnimSite329.translation = new X3D.SFVec3f([-0.1938,0.7035,-0.0949]);
HAnimSegment328YYY.children = new X3D.MFNode();

HAnimSegment328ZZZ.children[0] = HAnimSite329;

HAnimJoint327YYY.children = new X3D.MFNode();

HAnimJoint327ZZZ.children[0] = HAnimSegment328;

HAnimJoint325ZZZ.children[1] = HAnimJoint327;

HAnimJoint323ZZZ.children[1] = HAnimJoint325;

HAnimJoint321ZZZ.children[1] = HAnimJoint323;

HAnimJoint279ZZZ.children[5] = HAnimJoint321;

HAnimJoint273ZZZ.children[1] = HAnimJoint279;

HAnimJoint270ZZZ.children[1] = HAnimJoint273;

HAnimJoint268ZZZ.children[1] = HAnimJoint270;

HAnimJoint262ZZZ.children[1] = HAnimJoint268;

HAnimJoint142ZZZ.children[3] = HAnimJoint262;

HAnimJoint140ZZZ.children[1] = HAnimJoint142;

HAnimJoint138ZZZ.children[1] = HAnimJoint140;

HAnimJoint136ZZZ.children[1] = HAnimJoint138;

HAnimJoint134ZZZ.children[1] = HAnimJoint136;

HAnimJoint132ZZZ.children[1] = HAnimJoint134;

HAnimJoint130ZZZ.children[1] = HAnimJoint132;

HAnimJoint128ZZZ.children[1] = HAnimJoint130;

HAnimJoint124ZZZ.children[1] = HAnimJoint128;

HAnimJoint121ZZZ.children[1] = HAnimJoint124;

HAnimJoint119ZZZ.children[1] = HAnimJoint121;

HAnimJoint117ZZZ.children[1] = HAnimJoint119;

HAnimJoint115ZZZ.children[1] = HAnimJoint117;

HAnimJoint110ZZZ.children[1] = HAnimJoint115;

HAnimJoint108ZZZ.children[1] = HAnimJoint110;

HAnimJoint106ZZZ.children[1] = HAnimJoint108;

HAnimJoint102ZZZ.children[1] = HAnimJoint106;

HAnimJoint43ZZZ.children[2] = HAnimJoint102;

HAnimHumanoid42.joints = new X3D.MFNode();

HAnimHumanoid42XXX.joints[0] = HAnimJoint43;

let HAnimJoint330 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint330.USE = "hanim_humanoid_root";
joints[1] = HAnimJoint330;

let HAnimJoint331 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint331.USE = "hanim_sacroiliac";
joints[2] = HAnimJoint331;

let HAnimJoint332 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint332.USE = "hanim_vl5";
joints[3] = HAnimJoint332;

let HAnimJoint333 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint333.USE = "hanim_vl4";
joints[4] = HAnimJoint333;

let HAnimJoint334 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint334.USE = "hanim_vl3";
joints[5] = HAnimJoint334;

let HAnimJoint335 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint335.USE = "hanim_vl2";
joints[6] = HAnimJoint335;

let HAnimJoint336 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint336.USE = "hanim_vl1";
joints[7] = HAnimJoint336;

let HAnimJoint337 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint337.USE = "hanim_vt12";
joints[8] = HAnimJoint337;

let HAnimJoint338 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint338.USE = "hanim_vt11";
joints[9] = HAnimJoint338;

let HAnimJoint339 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint339.USE = "hanim_vt10";
joints[10] = HAnimJoint339;

let HAnimJoint340 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint340.USE = "hanim_vt9";
joints[11] = HAnimJoint340;

let HAnimJoint341 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint341.USE = "hanim_vt8";
joints[12] = HAnimJoint341;

let HAnimJoint342 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint342.USE = "hanim_vt7";
joints[13] = HAnimJoint342;

let HAnimJoint343 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint343.USE = "hanim_vt6";
joints[14] = HAnimJoint343;

let HAnimJoint344 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint344.USE = "hanim_vt5";
joints[15] = HAnimJoint344;

let HAnimJoint345 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint345.USE = "hanim_vt4";
joints[16] = HAnimJoint345;

let HAnimJoint346 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint346.USE = "hanim_vt3";
joints[17] = HAnimJoint346;

let HAnimJoint347 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint347.USE = "hanim_vt2";
joints[18] = HAnimJoint347;

let HAnimJoint348 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint348.USE = "hanim_vt1";
joints[19] = HAnimJoint348;

let HAnimJoint349 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint349.USE = "hanim_vc7";
joints[20] = HAnimJoint349;

let HAnimJoint350 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint350.USE = "hanim_vc6";
joints[21] = HAnimJoint350;

let HAnimJoint351 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint351.USE = "hanim_vc5";
joints[22] = HAnimJoint351;

let HAnimJoint352 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint352.USE = "hanim_vc4";
joints[23] = HAnimJoint352;

let HAnimJoint353 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint353.USE = "hanim_vc3";
joints[24] = HAnimJoint353;

let HAnimJoint354 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint354.USE = "hanim_vc2";
joints[25] = HAnimJoint354;

let HAnimJoint355 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint355.USE = "hanim_vc1";
joints[26] = HAnimJoint355;

let HAnimJoint356 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint356.USE = "hanim_skullbase";
joints[27] = HAnimJoint356;

let HAnimJoint357 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint357.USE = "hanim_temporomandibular";
joints[28] = HAnimJoint357;

let HAnimJoint358 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint358.USE = "hanim_l_acromioclavicular";
joints[29] = HAnimJoint358;

let HAnimJoint359 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint359.USE = "hanim_r_acromioclavicular";
joints[30] = HAnimJoint359;

let HAnimJoint360 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint360.USE = "hanim_l_ankle";
joints[31] = HAnimJoint360;

let HAnimJoint361 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint361.USE = "hanim_r_ankle";
joints[32] = HAnimJoint361;

let HAnimJoint362 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint362.USE = "hanim_l_elbow";
joints[33] = HAnimJoint362;

let HAnimJoint363 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint363.USE = "hanim_r_elbow";
joints[34] = HAnimJoint363;

let HAnimJoint364 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint364.USE = "hanim_l_eyeball_joint";
joints[35] = HAnimJoint364;

let HAnimJoint365 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint365.USE = "hanim_r_eyeball_joint";
joints[36] = HAnimJoint365;

let HAnimJoint366 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint366.USE = "hanim_l_eyebrow_joint";
joints[37] = HAnimJoint366;

let HAnimJoint367 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint367.USE = "hanim_r_eyebrow_joint";
joints[38] = HAnimJoint367;

let HAnimJoint368 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint368.USE = "hanim_l_eyelid_joint";
joints[39] = HAnimJoint368;

let HAnimJoint369 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint369.USE = "hanim_r_eyelid_joint";
joints[40] = HAnimJoint369;

let HAnimJoint370 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint370.USE = "hanim_l_hip";
joints[41] = HAnimJoint370;

let HAnimJoint371 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint371.USE = "hanim_r_hip";
joints[42] = HAnimJoint371;

let HAnimJoint372 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint372.USE = "hanim_l_index0";
joints[43] = HAnimJoint372;

let HAnimJoint373 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint373.USE = "hanim_r_index0";
joints[44] = HAnimJoint373;

let HAnimJoint374 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint374.USE = "hanim_l_index1";
joints[45] = HAnimJoint374;

let HAnimJoint375 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint375.USE = "hanim_r_index1";
joints[46] = HAnimJoint375;

let HAnimJoint376 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint376.USE = "hanim_l_index2";
joints[47] = HAnimJoint376;

let HAnimJoint377 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint377.USE = "hanim_r_index2";
joints[48] = HAnimJoint377;

let HAnimJoint378 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint378.USE = "hanim_l_index3";
joints[49] = HAnimJoint378;

let HAnimJoint379 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint379.USE = "hanim_r_index3";
joints[50] = HAnimJoint379;

let HAnimJoint380 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint380.USE = "hanim_l_knee";
joints[51] = HAnimJoint380;

let HAnimJoint381 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint381.USE = "hanim_r_knee";
joints[52] = HAnimJoint381;

let HAnimJoint382 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint382.USE = "hanim_l_metatarsal";
joints[53] = HAnimJoint382;

let HAnimJoint383 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint383.USE = "hanim_r_metatarsal";
joints[54] = HAnimJoint383;

let HAnimJoint384 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint384.USE = "hanim_l_middle0";
joints[55] = HAnimJoint384;

let HAnimJoint385 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint385.USE = "hanim_r_middle0";
joints[56] = HAnimJoint385;

let HAnimJoint386 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint386.USE = "hanim_l_middle1";
joints[57] = HAnimJoint386;

let HAnimJoint387 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint387.USE = "hanim_r_middle1";
joints[58] = HAnimJoint387;

let HAnimJoint388 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint388.USE = "hanim_l_middle2";
joints[59] = HAnimJoint388;

let HAnimJoint389 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint389.USE = "hanim_r_middle2";
joints[60] = HAnimJoint389;

let HAnimJoint390 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint390.USE = "hanim_l_middle3";
joints[61] = HAnimJoint390;

let HAnimJoint391 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint391.USE = "hanim_r_middle3";
joints[62] = HAnimJoint391;

let HAnimJoint392 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint392.USE = "hanim_l_midtarsal";
joints[63] = HAnimJoint392;

let HAnimJoint393 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint393.USE = "hanim_r_midtarsal";
joints[64] = HAnimJoint393;

let HAnimJoint394 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint394.USE = "hanim_l_pinky0";
joints[65] = HAnimJoint394;

let HAnimJoint395 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint395.USE = "hanim_r_pinky0";
joints[66] = HAnimJoint395;

let HAnimJoint396 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint396.USE = "hanim_l_pinky1";
joints[67] = HAnimJoint396;

let HAnimJoint397 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint397.USE = "hanim_r_pinky1";
joints[68] = HAnimJoint397;

let HAnimJoint398 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint398.USE = "hanim_l_pinky2";
joints[69] = HAnimJoint398;

let HAnimJoint399 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint399.USE = "hanim_r_pinky2";
joints[70] = HAnimJoint399;

let HAnimJoint400 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint400.USE = "hanim_l_pinky3";
joints[71] = HAnimJoint400;

let HAnimJoint401 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint401.USE = "hanim_r_pinky3";
joints[72] = HAnimJoint401;

let HAnimJoint402 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint402.USE = "hanim_l_ring0";
joints[73] = HAnimJoint402;

let HAnimJoint403 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint403.USE = "hanim_r_ring0";
joints[74] = HAnimJoint403;

let HAnimJoint404 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint404.USE = "hanim_l_ring1";
joints[75] = HAnimJoint404;

let HAnimJoint405 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint405.USE = "hanim_r_ring1";
joints[76] = HAnimJoint405;

let HAnimJoint406 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint406.USE = "hanim_l_ring2";
joints[77] = HAnimJoint406;

let HAnimJoint407 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint407.USE = "hanim_r_ring2";
joints[78] = HAnimJoint407;

let HAnimJoint408 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint408.USE = "hanim_l_ring3";
joints[79] = HAnimJoint408;

let HAnimJoint409 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint409.USE = "hanim_r_ring3";
joints[80] = HAnimJoint409;

let HAnimJoint410 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint410.USE = "hanim_l_shoulder";
joints[81] = HAnimJoint410;

let HAnimJoint411 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint411.USE = "hanim_r_shoulder";
joints[82] = HAnimJoint411;

let HAnimJoint412 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint412.USE = "hanim_l_sternoclavicular";
joints[83] = HAnimJoint412;

let HAnimJoint413 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint413.USE = "hanim_r_sternoclavicular";
joints[84] = HAnimJoint413;

let HAnimJoint414 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint414.USE = "hanim_l_subtalar";
joints[85] = HAnimJoint414;

let HAnimJoint415 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint415.USE = "hanim_r_subtalar";
joints[86] = HAnimJoint415;

let HAnimJoint416 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint416.USE = "hanim_l_thumb1";
joints[87] = HAnimJoint416;

let HAnimJoint417 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint417.USE = "hanim_r_thumb1";
joints[88] = HAnimJoint417;

let HAnimJoint418 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint418.USE = "hanim_l_thumb2";
joints[89] = HAnimJoint418;

let HAnimJoint419 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint419.USE = "hanim_r_thumb2";
joints[90] = HAnimJoint419;

let HAnimJoint420 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint420.USE = "hanim_l_thumb3";
joints[91] = HAnimJoint420;

let HAnimJoint421 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint421.USE = "hanim_r_thumb3";
joints[92] = HAnimJoint421;

let HAnimJoint422 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint422.USE = "hanim_l_wrist";
joints[93] = HAnimJoint422;

let HAnimJoint423 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint423.USE = "hanim_r_wrist";
joints[94] = HAnimJoint423;

let HAnimSegment424 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment424.USE = "hanim_pelvis";
segments[95] = HAnimSegment424;

let HAnimSegment425 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment425.USE = "hanim_skull";
segments[96] = HAnimSegment425;

let HAnimSegment426 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment426.USE = "hanim_jaw";
segments[97] = HAnimSegment426;

let HAnimSegment427 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment427.USE = "hanim_c1";
segments[98] = HAnimSegment427;

let HAnimSegment428 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment428.USE = "hanim_c2";
segments[99] = HAnimSegment428;

let HAnimSegment429 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment429.USE = "hanim_c3";
segments[100] = HAnimSegment429;

let HAnimSegment430 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment430.USE = "hanim_c4";
segments[101] = HAnimSegment430;

let HAnimSegment431 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment431.USE = "hanim_c5";
segments[102] = HAnimSegment431;

let HAnimSegment432 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment432.USE = "hanim_c6";
segments[103] = HAnimSegment432;

let HAnimSegment433 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment433.USE = "hanim_c7";
segments[104] = HAnimSegment433;

let HAnimSegment434 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment434.USE = "hanim_t1";
segments[105] = HAnimSegment434;

let HAnimSegment435 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment435.USE = "hanim_t2";
segments[106] = HAnimSegment435;

let HAnimSegment436 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment436.USE = "hanim_t3";
segments[107] = HAnimSegment436;

let HAnimSegment437 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment437.USE = "hanim_t4";
segments[108] = HAnimSegment437;

let HAnimSegment438 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment438.USE = "hanim_t5";
segments[109] = HAnimSegment438;

let HAnimSegment439 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment439.USE = "hanim_t6";
segments[110] = HAnimSegment439;

let HAnimSegment440 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment440.USE = "hanim_t7";
segments[111] = HAnimSegment440;

let HAnimSegment441 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment441.USE = "hanim_t8";
segments[112] = HAnimSegment441;

let HAnimSegment442 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment442.USE = "hanim_t9";
segments[113] = HAnimSegment442;

let HAnimSegment443 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment443.USE = "hanim_t10";
segments[114] = HAnimSegment443;

let HAnimSegment444 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment444.USE = "hanim_t11";
segments[115] = HAnimSegment444;

let HAnimSegment445 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment445.USE = "hanim_t12";
segments[116] = HAnimSegment445;

let HAnimSegment446 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment446.USE = "hanim_l1";
segments[117] = HAnimSegment446;

let HAnimSegment447 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment447.USE = "hanim_l2";
segments[118] = HAnimSegment447;

let HAnimSegment448 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment448.USE = "hanim_l3";
segments[119] = HAnimSegment448;

let HAnimSegment449 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment449.USE = "hanim_l4";
segments[120] = HAnimSegment449;

let HAnimSegment450 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment450.USE = "hanim_l5";
segments[121] = HAnimSegment450;

let HAnimSegment451 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment451.USE = "hanim_sacrum";
segments[122] = HAnimSegment451;

let HAnimSegment452 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment452.USE = "hanim_l_calf";
segments[123] = HAnimSegment452;

let HAnimSegment453 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment453.USE = "hanim_r_calf";
segments[124] = HAnimSegment453;

let HAnimSegment454 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment454.USE = "hanim_l_clavicle";
segments[125] = HAnimSegment454;

let HAnimSegment455 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment455.USE = "hanim_r_clavicle";
segments[126] = HAnimSegment455;

let HAnimSegment456 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment456.USE = "hanim_l_eyeball";
segments[127] = HAnimSegment456;

let HAnimSegment457 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment457.USE = "hanim_r_eyeball";
segments[128] = HAnimSegment457;

let HAnimSegment458 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment458.USE = "hanim_l_eyebrow";
segments[129] = HAnimSegment458;

let HAnimSegment459 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment459.USE = "hanim_r_eyebrow";
segments[130] = HAnimSegment459;

let HAnimSegment460 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment460.USE = "hanim_l_eyelid";
segments[131] = HAnimSegment460;

let HAnimSegment461 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment461.USE = "hanim_r_eyelid";
segments[132] = HAnimSegment461;

let HAnimSegment462 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment462.USE = "hanim_l_forearm";
segments[133] = HAnimSegment462;

let HAnimSegment463 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment463.USE = "hanim_r_forearm";
segments[134] = HAnimSegment463;

let HAnimSegment464 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment464.USE = "hanim_l_forefoot";
segments[135] = HAnimSegment464;

let HAnimSegment465 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment465.USE = "hanim_r_forefoot";
segments[136] = HAnimSegment465;

let HAnimSegment466 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment466.USE = "hanim_l_hand";
segments[137] = HAnimSegment466;

let HAnimSegment467 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment467.USE = "hanim_r_hand";
segments[138] = HAnimSegment467;

let HAnimSegment468 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment468.USE = "hanim_l_hindfoot";
segments[139] = HAnimSegment468;

let HAnimSegment469 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment469.USE = "hanim_r_hindfoot";
segments[140] = HAnimSegment469;

let HAnimSegment470 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment470.USE = "hanim_l_index_distal";
segments[141] = HAnimSegment470;

let HAnimSegment471 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment471.USE = "hanim_r_index_distal";
segments[142] = HAnimSegment471;

let HAnimSegment472 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment472.USE = "hanim_l_index_metacarpal";
segments[143] = HAnimSegment472;

let HAnimSegment473 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment473.USE = "hanim_r_index_metacarpal";
segments[144] = HAnimSegment473;

let HAnimSegment474 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment474.USE = "hanim_l_index_middle";
segments[145] = HAnimSegment474;

let HAnimSegment475 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment475.USE = "hanim_r_index_middle";
segments[146] = HAnimSegment475;

let HAnimSegment476 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment476.USE = "hanim_l_index_proximal";
segments[147] = HAnimSegment476;

let HAnimSegment477 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment477.USE = "hanim_r_index_proximal";
segments[148] = HAnimSegment477;

let HAnimSegment478 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment478.USE = "hanim_l_middistal";
segments[149] = HAnimSegment478;

let HAnimSegment479 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment479.USE = "hanim_r_middistal";
segments[150] = HAnimSegment479;

let HAnimSegment480 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment480.USE = "hanim_l_middle_distal";
segments[151] = HAnimSegment480;

let HAnimSegment481 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment481.USE = "hanim_r_middle_distal";
segments[152] = HAnimSegment481;

let HAnimSegment482 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment482.USE = "hanim_l_middle_metacarpal";
segments[153] = HAnimSegment482;

let HAnimSegment483 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment483.USE = "hanim_r_middle_metacarpal";
segments[154] = HAnimSegment483;

let HAnimSegment484 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment484.USE = "hanim_l_middle_middle";
segments[155] = HAnimSegment484;

let HAnimSegment485 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment485.USE = "hanim_r_middle_middle";
segments[156] = HAnimSegment485;

let HAnimSegment486 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment486.USE = "hanim_l_middle_proximal";
segments[157] = HAnimSegment486;

let HAnimSegment487 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment487.USE = "hanim_r_middle_proximal";
segments[158] = HAnimSegment487;

let HAnimSegment488 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment488.USE = "hanim_l_midproximal";
segments[159] = HAnimSegment488;

let HAnimSegment489 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment489.USE = "hanim_r_midproximal";
segments[160] = HAnimSegment489;

let HAnimSegment490 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment490.USE = "hanim_l_pinky_distal";
segments[161] = HAnimSegment490;

let HAnimSegment491 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment491.USE = "hanim_r_pinky_distal";
segments[162] = HAnimSegment491;

let HAnimSegment492 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment492.USE = "hanim_l_pinky_metacarpal";
segments[163] = HAnimSegment492;

let HAnimSegment493 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment493.USE = "hanim_r_pinky_metacarpal";
segments[164] = HAnimSegment493;

let HAnimSegment494 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment494.USE = "hanim_l_pinky_middle";
segments[165] = HAnimSegment494;

let HAnimSegment495 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment495.USE = "hanim_r_pinky_middle";
segments[166] = HAnimSegment495;

let HAnimSegment496 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment496.USE = "hanim_l_pinky_proximal";
segments[167] = HAnimSegment496;

let HAnimSegment497 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment497.USE = "hanim_r_pinky_proximal";
segments[168] = HAnimSegment497;

let HAnimSegment498 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment498.USE = "hanim_l_ring_distal";
segments[169] = HAnimSegment498;

let HAnimSegment499 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment499.USE = "hanim_r_ring_distal";
segments[170] = HAnimSegment499;

let HAnimSegment500 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment500.USE = "hanim_l_ring_metacarpal";
segments[171] = HAnimSegment500;

let HAnimSegment501 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment501.USE = "hanim_r_ring_metacarpal";
segments[172] = HAnimSegment501;

let HAnimSegment502 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment502.USE = "hanim_l_ring_middle";
segments[173] = HAnimSegment502;

let HAnimSegment503 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment503.USE = "hanim_r_ring_middle";
segments[174] = HAnimSegment503;

let HAnimSegment504 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment504.USE = "hanim_l_ring_proximal";
segments[175] = HAnimSegment504;

let HAnimSegment505 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment505.USE = "hanim_r_ring_proximal";
segments[176] = HAnimSegment505;

let HAnimSegment506 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment506.USE = "hanim_l_scapula";
segments[177] = HAnimSegment506;

let HAnimSegment507 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment507.USE = "hanim_r_scapula";
segments[178] = HAnimSegment507;

let HAnimSegment508 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment508.USE = "hanim_l_thigh";
segments[179] = HAnimSegment508;

let HAnimSegment509 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment509.USE = "hanim_r_thigh";
segments[180] = HAnimSegment509;

let HAnimSegment510 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment510.USE = "hanim_l_thumb_distal";
segments[181] = HAnimSegment510;

let HAnimSegment511 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment511.USE = "hanim_r_thumb_distal";
segments[182] = HAnimSegment511;

let HAnimSegment512 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment512.USE = "hanim_l_thumb_metacarpal";
segments[183] = HAnimSegment512;

let HAnimSegment513 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment513.USE = "hanim_r_thumb_metacarpal";
segments[184] = HAnimSegment513;

let HAnimSegment514 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment514.USE = "hanim_l_thumb_proximal";
segments[185] = HAnimSegment514;

let HAnimSegment515 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment515.USE = "hanim_r_thumb_proximal";
segments[186] = HAnimSegment515;

let HAnimSegment516 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment516.USE = "hanim_l_upperarm";
segments[187] = HAnimSegment516;

let HAnimSegment517 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment517.USE = "hanim_r_upperarm";
segments[188] = HAnimSegment517;

let HAnimSite518 = browser.currentScene.createNode("HAnimSite");
HAnimSite518.USE = "hanim_crotch_pt";
viewpoints[189] = HAnimSite518;

let HAnimSite519 = browser.currentScene.createNode("HAnimSite");
HAnimSite519.USE = "hanim_skull_tip";
viewpoints[190] = HAnimSite519;

let HAnimSite520 = browser.currentScene.createNode("HAnimSite");
HAnimSite520.USE = "hanim_sellion_pt";
viewpoints[191] = HAnimSite520;

let HAnimSite521 = browser.currentScene.createNode("HAnimSite");
HAnimSite521.USE = "hanim_supramenton_pt";
viewpoints[192] = HAnimSite521;

let HAnimSite522 = browser.currentScene.createNode("HAnimSite");
HAnimSite522.USE = "hanim_nuchale_pt";
viewpoints[193] = HAnimSite522;

let HAnimSite523 = browser.currentScene.createNode("HAnimSite");
HAnimSite523.USE = "hanim_suprasternale_pt";
viewpoints[194] = HAnimSite523;

let HAnimSite524 = browser.currentScene.createNode("HAnimSite");
HAnimSite524.USE = "hanim_cervicale_pt";
viewpoints[195] = HAnimSite524;

let HAnimSite525 = browser.currentScene.createNode("HAnimSite");
HAnimSite525.USE = "hanim_substernale_pt";
viewpoints[196] = HAnimSite525;

let HAnimSite526 = browser.currentScene.createNode("HAnimSite");
HAnimSite526.USE = "hanim_rib10_midspine_pt";
viewpoints[197] = HAnimSite526;

let HAnimSite527 = browser.currentScene.createNode("HAnimSite");
HAnimSite527.USE = "hanim_waist_preferred_post_pt";
viewpoints[198] = HAnimSite527;

let HAnimSite528 = browser.currentScene.createNode("HAnimSite");
HAnimSite528.USE = "hanim_navel_pt";
viewpoints[199] = HAnimSite528;

let HAnimSite529 = browser.currentScene.createNode("HAnimSite");
HAnimSite529.USE = "hanim_l_acromion_pt";
viewpoints[200] = HAnimSite529;

let HAnimSite530 = browser.currentScene.createNode("HAnimSite");
HAnimSite530.USE = "hanim_r_acromion_pt";
viewpoints[201] = HAnimSite530;

let HAnimSite531 = browser.currentScene.createNode("HAnimSite");
HAnimSite531.USE = "hanim_r_asis_pt";
viewpoints[202] = HAnimSite531;

let HAnimSite532 = browser.currentScene.createNode("HAnimSite");
HAnimSite532.USE = "hanim_l_asis_pt";
viewpoints[203] = HAnimSite532;

let HAnimSite533 = browser.currentScene.createNode("HAnimSite");
HAnimSite533.USE = "hanim_l_axilla_ant_pt";
viewpoints[204] = HAnimSite533;

let HAnimSite534 = browser.currentScene.createNode("HAnimSite");
HAnimSite534.USE = "hanim_r_axilla_ant_pt";
viewpoints[205] = HAnimSite534;

let HAnimSite535 = browser.currentScene.createNode("HAnimSite");
HAnimSite535.USE = "hanim_l_axilla_post_pt";
viewpoints[206] = HAnimSite535;

let HAnimSite536 = browser.currentScene.createNode("HAnimSite");
HAnimSite536.USE = "hanim_r_axilla_post_pt";
viewpoints[207] = HAnimSite536;

let HAnimSite537 = browser.currentScene.createNode("HAnimSite");
HAnimSite537.USE = "hanim_l_calcaneous_post_pt";
viewpoints[208] = HAnimSite537;

let HAnimSite538 = browser.currentScene.createNode("HAnimSite");
HAnimSite538.USE = "hanim_r_calcaneous_post_pt";
viewpoints[209] = HAnimSite538;

let HAnimSite539 = browser.currentScene.createNode("HAnimSite");
HAnimSite539.USE = "hanim_l_clavicale_pt";
viewpoints[210] = HAnimSite539;

let HAnimSite540 = browser.currentScene.createNode("HAnimSite");
HAnimSite540.USE = "hanim_r_clavicale_pt";
viewpoints[211] = HAnimSite540;

let HAnimSite541 = browser.currentScene.createNode("HAnimSite");
HAnimSite541.USE = "hanim_l_dactylion_pt";
viewpoints[212] = HAnimSite541;

let HAnimSite542 = browser.currentScene.createNode("HAnimSite");
HAnimSite542.USE = "hanim_r_dactylion_pt";
viewpoints[213] = HAnimSite542;

let HAnimSite543 = browser.currentScene.createNode("HAnimSite");
HAnimSite543.USE = "hanim_l_digit2_pt";
viewpoints[214] = HAnimSite543;

let HAnimSite544 = browser.currentScene.createNode("HAnimSite");
HAnimSite544.USE = "hanim_r_digit2_pt";
viewpoints[215] = HAnimSite544;

let HAnimSite545 = browser.currentScene.createNode("HAnimSite");
HAnimSite545.USE = "hanim_l_femoral_lateral_epicn_pt";
viewpoints[216] = HAnimSite545;

let HAnimSite546 = browser.currentScene.createNode("HAnimSite");
HAnimSite546.USE = "hanim_r_femoral_lateral_epicn_pt";
viewpoints[217] = HAnimSite546;

let HAnimSite547 = browser.currentScene.createNode("HAnimSite");
HAnimSite547.USE = "hanim_l_femoral_medial_epicn_pt";
viewpoints[218] = HAnimSite547;

let HAnimSite548 = browser.currentScene.createNode("HAnimSite");
HAnimSite548.USE = "hanim_r_femoral_medial_epicn_pt";
viewpoints[219] = HAnimSite548;

let HAnimSite549 = browser.currentScene.createNode("HAnimSite");
HAnimSite549.USE = "hanim_l_forefoot_tip";
viewpoints[220] = HAnimSite549;

let HAnimSite550 = browser.currentScene.createNode("HAnimSite");
HAnimSite550.USE = "hanim_r_forefoot_tip";
viewpoints[221] = HAnimSite550;

let HAnimSite551 = browser.currentScene.createNode("HAnimSite");
HAnimSite551.USE = "hanim_r_gonion_pt";
viewpoints[222] = HAnimSite551;

let HAnimSite552 = browser.currentScene.createNode("HAnimSite");
HAnimSite552.USE = "hanim_l_gonion_pt";
viewpoints[223] = HAnimSite552;

let HAnimSite553 = browser.currentScene.createNode("HAnimSite");
HAnimSite553.USE = "hanim_l_humeral_lateral_epicn_pt";
viewpoints[224] = HAnimSite553;

let HAnimSite554 = browser.currentScene.createNode("HAnimSite");
HAnimSite554.USE = "hanim_r_humeral_lateral_epicn_pt";
viewpoints[225] = HAnimSite554;

let HAnimSite555 = browser.currentScene.createNode("HAnimSite");
HAnimSite555.USE = "hanim_l_humeral_medial_epicn_pt";
viewpoints[226] = HAnimSite555;

let HAnimSite556 = browser.currentScene.createNode("HAnimSite");
HAnimSite556.USE = "hanim_r_humeral_medial_epicn_pt";
viewpoints[227] = HAnimSite556;

let HAnimSite557 = browser.currentScene.createNode("HAnimSite");
HAnimSite557.USE = "hanim_r_iliocristale_pt";
viewpoints[228] = HAnimSite557;

let HAnimSite558 = browser.currentScene.createNode("HAnimSite");
HAnimSite558.USE = "hanim_l_iliocristale_pt";
viewpoints[229] = HAnimSite558;

let HAnimSite559 = browser.currentScene.createNode("HAnimSite");
HAnimSite559.USE = "hanim_l_index_distal_tip";
viewpoints[230] = HAnimSite559;

let HAnimSite560 = browser.currentScene.createNode("HAnimSite");
HAnimSite560.USE = "hanim_r_index_distal_tip";
viewpoints[231] = HAnimSite560;

let HAnimSite561 = browser.currentScene.createNode("HAnimSite");
HAnimSite561.USE = "hanim_r_infraorbitale_pt";
viewpoints[232] = HAnimSite561;

let HAnimSite562 = browser.currentScene.createNode("HAnimSite");
HAnimSite562.USE = "hanim_l_infraorbitale_pt";
viewpoints[233] = HAnimSite562;

let HAnimSite563 = browser.currentScene.createNode("HAnimSite");
HAnimSite563.USE = "hanim_l_knee_crease_pt";
viewpoints[234] = HAnimSite563;

let HAnimSite564 = browser.currentScene.createNode("HAnimSite");
HAnimSite564.USE = "hanim_r_knee_crease_pt";
viewpoints[235] = HAnimSite564;

let HAnimSite565 = browser.currentScene.createNode("HAnimSite");
HAnimSite565.USE = "hanim_l_lateral_malleolus_pt";
viewpoints[236] = HAnimSite565;

let HAnimSite566 = browser.currentScene.createNode("HAnimSite");
HAnimSite566.USE = "hanim_r_lateral_malleolus_pt";
viewpoints[237] = HAnimSite566;

let HAnimSite567 = browser.currentScene.createNode("HAnimSite");
HAnimSite567.USE = "hanim_l_medial_malleolus_pt";
viewpoints[238] = HAnimSite567;

let HAnimSite568 = browser.currentScene.createNode("HAnimSite");
HAnimSite568.USE = "hanim_r_medial_malleolus_pt";
viewpoints[239] = HAnimSite568;

let HAnimSite569 = browser.currentScene.createNode("HAnimSite");
HAnimSite569.USE = "hanim_l_metacarpal_pha2_pt";
viewpoints[240] = HAnimSite569;

let HAnimSite570 = browser.currentScene.createNode("HAnimSite");
HAnimSite570.USE = "hanim_r_metacarpal_pha2_pt";
viewpoints[241] = HAnimSite570;

let HAnimSite571 = browser.currentScene.createNode("HAnimSite");
HAnimSite571.USE = "hanim_l_metacarpal_pha5_pt";
viewpoints[242] = HAnimSite571;

let HAnimSite572 = browser.currentScene.createNode("HAnimSite");
HAnimSite572.USE = "hanim_r_metacarpal_pha5_pt";
viewpoints[243] = HAnimSite572;

let HAnimSite573 = browser.currentScene.createNode("HAnimSite");
HAnimSite573.USE = "hanim_l_metatarsal_pha1_pt";
viewpoints[244] = HAnimSite573;

let HAnimSite574 = browser.currentScene.createNode("HAnimSite");
HAnimSite574.USE = "hanim_r_metatarsal_pha1_pt";
viewpoints[245] = HAnimSite574;

let HAnimSite575 = browser.currentScene.createNode("HAnimSite");
HAnimSite575.USE = "hanim_l_metatarsal_pha5_pt";
viewpoints[246] = HAnimSite575;

let HAnimSite576 = browser.currentScene.createNode("HAnimSite");
HAnimSite576.USE = "hanim_r_metatarsal_pha5_pt";
viewpoints[247] = HAnimSite576;

let HAnimSite577 = browser.currentScene.createNode("HAnimSite");
HAnimSite577.USE = "hanim_l_middle_distal_tip";
viewpoints[248] = HAnimSite577;

let HAnimSite578 = browser.currentScene.createNode("HAnimSite");
HAnimSite578.USE = "hanim_r_middle_distal_tip";
viewpoints[249] = HAnimSite578;

let HAnimSite579 = browser.currentScene.createNode("HAnimSite");
HAnimSite579.USE = "hanim_r_neck_base_pt";
viewpoints[250] = HAnimSite579;

let HAnimSite580 = browser.currentScene.createNode("HAnimSite");
HAnimSite580.USE = "hanim_l_neck_base_pt";
viewpoints[251] = HAnimSite580;

let HAnimSite581 = browser.currentScene.createNode("HAnimSite");
HAnimSite581.USE = "hanim_l_olecranon_pt";
viewpoints[252] = HAnimSite581;

let HAnimSite582 = browser.currentScene.createNode("HAnimSite");
HAnimSite582.USE = "hanim_r_olecranon_pt";
viewpoints[253] = HAnimSite582;

let HAnimSite583 = browser.currentScene.createNode("HAnimSite");
HAnimSite583.USE = "hanim_l_pinky_distal_tip";
viewpoints[254] = HAnimSite583;

let HAnimSite584 = browser.currentScene.createNode("HAnimSite");
HAnimSite584.USE = "hanim_r_pinky_distal_tip";
viewpoints[255] = HAnimSite584;

let HAnimSite585 = browser.currentScene.createNode("HAnimSite");
HAnimSite585.USE = "hanim_r_psis_pt";
viewpoints[256] = HAnimSite585;

let HAnimSite586 = browser.currentScene.createNode("HAnimSite");
HAnimSite586.USE = "hanim_l_psis_pt";
viewpoints[257] = HAnimSite586;

let HAnimSite587 = browser.currentScene.createNode("HAnimSite");
HAnimSite587.USE = "hanim_l_radial_styloid_pt";
viewpoints[258] = HAnimSite587;

let HAnimSite588 = browser.currentScene.createNode("HAnimSite");
HAnimSite588.USE = "hanim_r_radial_styloid_pt";
viewpoints[259] = HAnimSite588;

let HAnimSite589 = browser.currentScene.createNode("HAnimSite");
HAnimSite589.USE = "hanim_l_radiale_pt";
viewpoints[260] = HAnimSite589;

let HAnimSite590 = browser.currentScene.createNode("HAnimSite");
HAnimSite590.USE = "hanim_r_radiale_pt";
viewpoints[261] = HAnimSite590;

let HAnimSite591 = browser.currentScene.createNode("HAnimSite");
HAnimSite591.USE = "hanim_r_rib10_pt";
viewpoints[262] = HAnimSite591;

let HAnimSite592 = browser.currentScene.createNode("HAnimSite");
HAnimSite592.USE = "hanim_l_rib10_pt";
viewpoints[263] = HAnimSite592;

let HAnimSite593 = browser.currentScene.createNode("HAnimSite");
HAnimSite593.USE = "hanim_l_ring_distal_tip";
viewpoints[264] = HAnimSite593;

let HAnimSite594 = browser.currentScene.createNode("HAnimSite");
HAnimSite594.USE = "hanim_r_ring_distal_tip";
viewpoints[265] = HAnimSite594;

let HAnimSite595 = browser.currentScene.createNode("HAnimSite");
HAnimSite595.USE = "hanim_temporomandibular_l_site_pt";
viewpoints[266] = HAnimSite595;

let HAnimSite596 = browser.currentScene.createNode("HAnimSite");
HAnimSite596.USE = "hanim_temporomandibular_r_site_pt";
viewpoints[267] = HAnimSite596;

let HAnimSite597 = browser.currentScene.createNode("HAnimSite");
HAnimSite597.USE = "hanim_l_sphyrion_pt";
viewpoints[268] = HAnimSite597;

let HAnimSite598 = browser.currentScene.createNode("HAnimSite");
HAnimSite598.USE = "hanim_r_sphyrion_pt";
viewpoints[269] = HAnimSite598;

let HAnimSite599 = browser.currentScene.createNode("HAnimSite");
HAnimSite599.USE = "hanim_r_thelion_pt";
viewpoints[270] = HAnimSite599;

let HAnimSite600 = browser.currentScene.createNode("HAnimSite");
HAnimSite600.USE = "hanim_l_thelion_pt";
viewpoints[271] = HAnimSite600;

let HAnimSite601 = browser.currentScene.createNode("HAnimSite");
HAnimSite601.USE = "hanim_l_thumb_distal_tip";
viewpoints[272] = HAnimSite601;

let HAnimSite602 = browser.currentScene.createNode("HAnimSite");
HAnimSite602.USE = "hanim_r_thumb_distal_tip";
viewpoints[273] = HAnimSite602;

let HAnimSite603 = browser.currentScene.createNode("HAnimSite");
HAnimSite603.USE = "hanim_r_tragion_pt";
viewpoints[274] = HAnimSite603;

let HAnimSite604 = browser.currentScene.createNode("HAnimSite");
HAnimSite604.USE = "hanim_l_tragion_pt";
viewpoints[275] = HAnimSite604;

let HAnimSite605 = browser.currentScene.createNode("HAnimSite");
HAnimSite605.USE = "hanim_r_trochanterion_pt";
viewpoints[276] = HAnimSite605;

let HAnimSite606 = browser.currentScene.createNode("HAnimSite");
HAnimSite606.USE = "hanim_l_trochanterion_pt";
viewpoints[277] = HAnimSite606;

let HAnimSite607 = browser.currentScene.createNode("HAnimSite");
HAnimSite607.USE = "hanim_l_ulnar_styloid_pt";
viewpoints[278] = HAnimSite607;

let HAnimSite608 = browser.currentScene.createNode("HAnimSite");
HAnimSite608.USE = "hanim_r_ulnar_styloid_pt";
viewpoints[279] = HAnimSite608;

let HAnimSite609 = browser.currentScene.createNode("HAnimSite");
HAnimSite609.DEF = "hanim_l_inclined_view";
HAnimSite609.name = "l_inclined_view";
HAnimSite609.translation = new X3D.SFVec3f([1.62,1.05,2.06]);
HAnimSite609.rotation = new X3D.SFRotation([-0.113,0.993,0.0347,0.671]);
let Viewpoint610 = browser.currentScene.createNode("Viewpoint");
Viewpoint610.DEF = "hanim_l_inclined_viewpoint";
Viewpoint610.description = "left inclined";
Viewpoint610.position = new X3D.SFVec3f([0,0,0]);
HAnimSite609YYY.children = new X3D.MFNode();

HAnimSite609ZZZ.children[0] = Viewpoint610;

viewpoints[280] = HAnimSite609;

let HAnimSite611 = browser.currentScene.createNode("HAnimSite");
HAnimSite611.DEF = "hanim_r_inclined_view";
HAnimSite611.name = "r_inclined_view";
HAnimSite611.translation = new X3D.SFVec3f([-1.62,1.05,2.06]);
HAnimSite611.rotation = new X3D.SFRotation([-0.113,-0.993,0.0347,0.671]);
let Viewpoint612 = browser.currentScene.createNode("Viewpoint");
Viewpoint612.DEF = "hanim_r_inclined_viewpoint";
Viewpoint612.description = "right inclined";
Viewpoint612.position = new X3D.SFVec3f([0,0,0]);
Viewpoint612.centerOfRotation = new X3D.SFVec3f([0,0.9,0]);
HAnimSite611YYY.children = new X3D.MFNode();

HAnimSite611ZZZ.children[0] = Viewpoint612;

viewpoints[281] = HAnimSite611;

let HAnimSite613 = browser.currentScene.createNode("HAnimSite");
HAnimSite613.DEF = "hanim_front_view";
HAnimSite613.name = "front_view";
HAnimSite613.translation = new X3D.SFVec3f([0,0.85,2.58]);
let Viewpoint614 = browser.currentScene.createNode("Viewpoint");
Viewpoint614.DEF = "hanim_front_viewpoint";
Viewpoint614.description = "front";
Viewpoint614.position = new X3D.SFVec3f([0,0,0]);
Viewpoint614.centerOfRotation = new X3D.SFVec3f([0,0.9,0]);
HAnimSite613YYY.children = new X3D.MFNode();

HAnimSite613ZZZ.children[0] = Viewpoint614;

viewpoints[282] = HAnimSite613;

let HAnimSite615 = browser.currentScene.createNode("HAnimSite");
HAnimSite615.DEF = "hanim_back_view";
HAnimSite615.name = "back_view";
HAnimSite615.translation = new X3D.SFVec3f([0,0.85,-2.58]);
HAnimSite615.rotation = new X3D.SFRotation([0,1,0,3.14]);
let Viewpoint616 = browser.currentScene.createNode("Viewpoint");
Viewpoint616.DEF = "hanim_back_viewpoint";
Viewpoint616.description = "back";
Viewpoint616.position = new X3D.SFVec3f([0,0,0]);
Viewpoint616.centerOfRotation = new X3D.SFVec3f([0,0.9,0]);
HAnimSite615YYY.children = new X3D.MFNode();

HAnimSite615ZZZ.children[0] = Viewpoint616;

viewpoints[283] = HAnimSite615;

let HAnimSite617 = browser.currentScene.createNode("HAnimSite");
HAnimSite617.DEF = "hanim_l_side_view";
HAnimSite617.name = "l_side_view";
HAnimSite617.translation = new X3D.SFVec3f([2.6,0.854,0]);
HAnimSite617.rotation = new X3D.SFRotation([0,1,0,1.5708]);
let Viewpoint618 = browser.currentScene.createNode("Viewpoint");
Viewpoint618.DEF = "hanim_l_side_viewpoint";
Viewpoint618.description = "left side";
Viewpoint618.position = new X3D.SFVec3f([0,0,0]);
Viewpoint618.centerOfRotation = new X3D.SFVec3f([0,0.9,0]);
HAnimSite617YYY.children = new X3D.MFNode();

HAnimSite617ZZZ.children[0] = Viewpoint618;

viewpoints[284] = HAnimSite617;

let HAnimSite619 = browser.currentScene.createNode("HAnimSite");
HAnimSite619.DEF = "hanim_Top_view";
HAnimSite619.name = "Top_view";
HAnimSite619.translation = new X3D.SFVec3f([0,3.5,0]);
HAnimSite619.rotation = new X3D.SFRotation([1,0,0,-1.57]);
let Viewpoint620 = browser.currentScene.createNode("Viewpoint");
Viewpoint620.DEF = "hanim_Top_viewpoint";
Viewpoint620.description = "Top";
Viewpoint620.position = new X3D.SFVec3f([0,0,0]);
Viewpoint620.centerOfRotation = new X3D.SFVec3f([0,0.9,0]);
HAnimSite619YYY.children = new X3D.MFNode();

HAnimSite619ZZZ.children[0] = Viewpoint620;

viewpoints[285] = HAnimSite619;

let HAnimSite621 = browser.currentScene.createNode("HAnimSite");
HAnimSite621.DEF = "hanim_front_close_view";
HAnimSite621.name = "front_close_view";
HAnimSite621.translation = new X3D.SFVec3f([0,0.854,1.575]);
let Viewpoint622 = browser.currentScene.createNode("Viewpoint");
Viewpoint622.DEF = "hanim_front_close_viewpoint";
Viewpoint622.description = "front close";
Viewpoint622.position = new X3D.SFVec3f([0,0,0]);
Viewpoint622.centerOfRotation = new X3D.SFVec3f([0,0,1.575]);
HAnimSite621YYY.children = new X3D.MFNode();

HAnimSite621ZZZ.children[0] = Viewpoint622;

viewpoints[286] = HAnimSite621;

let HAnimSite623 = browser.currentScene.createNode("HAnimSite");
HAnimSite623.DEF = "hanim_side_close_view";
HAnimSite623.name = "side_close_view";
HAnimSite623.translation = new X3D.SFVec3f([1.56,0.854,0]);
HAnimSite623.rotation = new X3D.SFRotation([0,1,0,1.5708]);
let Viewpoint624 = browser.currentScene.createNode("Viewpoint");
Viewpoint624.DEF = "hanim_side_close_viewpoint";
Viewpoint624.description = "side close";
Viewpoint624.position = new X3D.SFVec3f([0,0,0]);
Viewpoint624.centerOfRotation = new X3D.SFVec3f([1.6,0,0]);
HAnimSite623YYY.children = new X3D.MFNode();

HAnimSite623ZZZ.children[0] = Viewpoint624;

viewpoints[287] = HAnimSite623;

let HAnimSite625 = browser.currentScene.createNode("HAnimSite");
HAnimSite625.DEF = "hanim_head_front_close_view";
HAnimSite625.name = "head_front_close_view";
HAnimSite625.translation = new X3D.SFVec3f([0,1.5,1]);
let Viewpoint626 = browser.currentScene.createNode("Viewpoint");
Viewpoint626.DEF = "hanim_head_front_close_viewpoint";
Viewpoint626.description = "head front close";
Viewpoint626.position = new X3D.SFVec3f([0,0,0]);
Viewpoint626.centerOfRotation = new X3D.SFVec3f([0,0,1]);
HAnimSite625YYY.children = new X3D.MFNode();

HAnimSite625ZZZ.children[0] = Viewpoint626;

viewpoints[288] = HAnimSite625;

let HAnimSite627 = browser.currentScene.createNode("HAnimSite");
HAnimSite627.DEF = "hanim_chest_front_close_view";
HAnimSite627.name = "chest_front_close_view";
HAnimSite627.translation = new X3D.SFVec3f([0,1.2,1]);
let Viewpoint628 = browser.currentScene.createNode("Viewpoint");
Viewpoint628.DEF = "hanim_chest_front_close_viewpoint";
Viewpoint628.description = "chest front close";
Viewpoint628.position = new X3D.SFVec3f([0,0,0]);
Viewpoint628.centerOfRotation = new X3D.SFVec3f([0,0,1]);
HAnimSite627YYY.children = new X3D.MFNode();

HAnimSite627ZZZ.children[0] = Viewpoint628;

viewpoints[289] = HAnimSite627;

let HAnimSite629 = browser.currentScene.createNode("HAnimSite");
HAnimSite629.DEF = "hanim_pelvis_front_close_view";
HAnimSite629.name = "pelvis_front_close_view";
HAnimSite629.translation = new X3D.SFVec3f([0,0.8,1]);
let Viewpoint630 = browser.currentScene.createNode("Viewpoint");
Viewpoint630.DEF = "hanim_pelvis_front_close_viewpoint";
Viewpoint630.description = "pelvis front close";
Viewpoint630.position = new X3D.SFVec3f([0,0,0]);
Viewpoint630.centerOfRotation = new X3D.SFVec3f([0,0,1]);
HAnimSite629YYY.children = new X3D.MFNode();

HAnimSite629ZZZ.children[0] = Viewpoint630;

viewpoints[290] = HAnimSite629;

let HAnimSite631 = browser.currentScene.createNode("HAnimSite");
HAnimSite631.DEF = "hanim_knees_front_close_view";
HAnimSite631.name = "knees_front_close_view";
HAnimSite631.translation = new X3D.SFVec3f([0,0.4,1]);
let Viewpoint632 = browser.currentScene.createNode("Viewpoint");
Viewpoint632.DEF = "hanim_knees_front_close_viewpoint";
Viewpoint632.description = "knees front close";
Viewpoint632.position = new X3D.SFVec3f([0,0,0]);
Viewpoint632.centerOfRotation = new X3D.SFVec3f([0,0.4,0]);
HAnimSite631YYY.children = new X3D.MFNode();

HAnimSite631ZZZ.children[0] = Viewpoint632;

viewpoints[291] = HAnimSite631;

let HAnimSite633 = browser.currentScene.createNode("HAnimSite");
HAnimSite633.DEF = "hanim_feet_front_close_view";
HAnimSite633.name = "feet_front_close_view";
HAnimSite633.translation = new X3D.SFVec3f([0,0,1]);
let Viewpoint634 = browser.currentScene.createNode("Viewpoint");
Viewpoint634.DEF = "hanim_feet_front_close_viewpoint";
Viewpoint634.description = "feet front close";
Viewpoint634.position = new X3D.SFVec3f([0,0,0]);
HAnimSite633YYY.children = new X3D.MFNode();

HAnimSite633ZZZ.children[0] = Viewpoint634;

viewpoints[292] = HAnimSite633;

let HAnimSite635 = browser.currentScene.createNode("HAnimSite");
HAnimSite635.DEF = "hanim_eye_level_view";
HAnimSite635.name = "eye_level_view";
HAnimSite635.translation = new X3D.SFVec3f([0,1.6332,0.0502]);
let Viewpoint636 = browser.currentScene.createNode("Viewpoint");
Viewpoint636.DEF = "hanim_eye_level_viewpoint";
Viewpoint636.description = "eye level looking forward";
Viewpoint636.position = new X3D.SFVec3f([0,0,0]);
Viewpoint636.orientation = new X3D.SFRotation([0,1,0,3.141593]);
HAnimSite635YYY.children = new X3D.MFNode();

HAnimSite635ZZZ.children[0] = Viewpoint636;

viewpoints[293] = HAnimSite635;

let HAnimSite637 = browser.currentScene.createNode("HAnimSite");
HAnimSite637.USE = "hanim_l_eyeball_site_view";
viewpoints[294] = HAnimSite637;

let HAnimSite638 = browser.currentScene.createNode("HAnimSite");
HAnimSite638.USE = "hanim_r_eyeball_site_view";
viewpoints[295] = HAnimSite638;

let HAnimSite639 = browser.currentScene.createNode("HAnimSite");
HAnimSite639.USE = "hanim_l_hand_front_view";
viewpoints[296] = HAnimSite639;

let HAnimSite640 = browser.currentScene.createNode("HAnimSite");
HAnimSite640.USE = "hanim_r_hand_front_view";
viewpoints[297] = HAnimSite640;

browser.currentScene.children[12] = HAnimHumanoid42;

}
main ();

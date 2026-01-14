const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("HAnim", 1));
scene.addMetaData("title", "HAnim2SpecificationLOA3Invisible.x3d");
scene.addMetaData("description", "HAnim Specification reference example providing full coverage (and no illustrated visibility) of all specified HAnim constructs, also suitable for re-use as an authoring template.");
scene.addMetaData("reference", "https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds");
scene.addMetaData("reference", "HAnim2SpecificationLOA3Illustrated.x3d");
scene.addMetaData("reference", "HAnim2SpecificationLOA3Animation.x3d");
scene.addMetaData("reference", "HAnimSpecificationExampleChangeLog.txt");
scene.addMetaData("reference", "Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.");
scene.addMetaData("reference", "http://www.cis.upenn.edu/~badler/anthro/89-71.ps");
scene.addMetaData("reference", "tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf");
scene.addMetaData("reference", "originals/LOA3ExampleSourceWithDiamondsOriginal.wrl");
scene.addMetaData("reference", "originals/LOA3ExampleSourceWithDiamondsOriginal.x3d");
scene.addMetaData("reference", "originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d");
scene.addMetaData("reference", "HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames");
scene.addMetaData("created", "24 April 2013");
scene.addMetaData("modified", "Mon, 15 Sep 2025 05:20:09 GMT");
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
let Background28 = browser.currentScene.createNode("Background");
Background28.skyColor = new X3D.MFColor([0.3,0.3,0.3]);
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = Background28;

let NavigationInfo29 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children[1] = NavigationInfo29;

let Group30 = browser.currentScene.createNode("Group");
Group30.DEF = "Original_WorldInfo";
let WorldInfo31 = browser.currentScene.createNode("WorldInfo");
WorldInfo31.title = "HANIM 200x Default Joint Centers, LOA3";
WorldInfo31.info = new X3D.MFString([new X3D.SFString(" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps ")]);
Group30YYY.children = new X3D.MFNode();

Group30ZZZ.children[0] = WorldInfo31;

browser.currentScene.children[2] = Group30;

let Viewpoint32 = browser.currentScene.createNode("Viewpoint");
Viewpoint32.description = "Humanoid LOA 3 Front";
Viewpoint32.position = new X3D.SFVec3f([0,0.4,4]);
Viewpoint32.centerOfRotation = new X3D.SFVec3f([0,0.9149,0.0016]);
browser.currentScene.children[3] = Viewpoint32;

let Viewpoint33 = browser.currentScene.createNode("Viewpoint");
Viewpoint33.description = "Humanoid LOA 3 Front Close";
Viewpoint33.position = new X3D.SFVec3f([0,0.8,2]);
Viewpoint33.centerOfRotation = new X3D.SFVec3f([0,0.9149,0.0016]);
browser.currentScene.children[4] = Viewpoint33;

let Viewpoint34 = browser.currentScene.createNode("Viewpoint");
Viewpoint34.description = "Humanoid LOA 3 Front Closer";
Viewpoint34.position = new X3D.SFVec3f([0,1.2,1]);
Viewpoint34.centerOfRotation = new X3D.SFVec3f([0,0.9149,0.0016]);
browser.currentScene.children[5] = Viewpoint34;

let Viewpoint35 = browser.currentScene.createNode("Viewpoint");
Viewpoint35.description = "Humanoid LOA 3 Front Face";
Viewpoint35.position = new X3D.SFVec3f([0,1.63,1]);
Viewpoint35.centerOfRotation = new X3D.SFVec3f([0,1.5,0.0016]);
browser.currentScene.children[6] = Viewpoint35;

let Viewpoint36 = browser.currentScene.createNode("Viewpoint");
Viewpoint36.description = "Humanoid LOA 3 Right Side";
Viewpoint36.position = new X3D.SFVec3f([2.6,0.8,0]);
Viewpoint36.orientation = new X3D.SFRotation([0,1,0,1.5708]);
Viewpoint36.centerOfRotation = new X3D.SFVec3f([0,0.9149,0.0016]);
browser.currentScene.children[7] = Viewpoint36;

let Viewpoint37 = browser.currentScene.createNode("Viewpoint");
Viewpoint37.description = "Humanoid LOA 3 Right Side Close";
Viewpoint37.position = new X3D.SFVec3f([1,0.8,0.5]);
Viewpoint37.orientation = new X3D.SFRotation([0,1,0,1.2]);
Viewpoint37.centerOfRotation = new X3D.SFVec3f([0,0.9149,0.0016]);
browser.currentScene.children[8] = Viewpoint37;

let Viewpoint38 = browser.currentScene.createNode("Viewpoint");
Viewpoint38.description = "Humanoid LOA 3 Left Side Close";
Viewpoint38.position = new X3D.SFVec3f([-1,0.8,0.5]);
Viewpoint38.orientation = new X3D.SFRotation([0,1,0,-1.2]);
Viewpoint38.centerOfRotation = new X3D.SFVec3f([0,0.9149,0.0016]);
browser.currentScene.children[9] = Viewpoint38;

let Viewpoint39 = browser.currentScene.createNode("Viewpoint");
Viewpoint39.description = "Humanoid LOA 3 Left Side";
Viewpoint39.position = new X3D.SFVec3f([-2.6,0.8,0]);
Viewpoint39.orientation = new X3D.SFRotation([0,1,0,-1.5708]);
Viewpoint39.centerOfRotation = new X3D.SFVec3f([0,0.9149,0.0016]);
browser.currentScene.children[10] = Viewpoint39;

let Viewpoint40 = browser.currentScene.createNode("Viewpoint");
Viewpoint40.description = "Humanoid LOA 3 Top";
Viewpoint40.position = new X3D.SFVec3f([0,3.5,0]);
Viewpoint40.orientation = new X3D.SFRotation([1,0,0,-1.5708]);
Viewpoint40.centerOfRotation = new X3D.SFVec3f([0,0.9149,0.0016]);
browser.currentScene.children[11] = Viewpoint40;

let HAnimHumanoid41 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid41.DEF = "hanim_humanoid";
HAnimHumanoid41.name = "humanoid";
HAnimHumanoid41.loa = 3;
let MetadataSet42 = browser.currentScene.createNode("MetadataSet");
MetadataSet42.name = "HAnimHumanoid.info";
MetadataSet42.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
let MetadataString43 = browser.currentScene.createNode("MetadataString");
MetadataString43.name = "authorName";
MetadataSet42.value = new X3D.MFNode();

MetadataSet42XXX.value[0] = MetadataString43;

let MetadataString44 = browser.currentScene.createNode("MetadataString");
MetadataString44.name = "authorEmail";
value[1] = MetadataString44;

let MetadataString45 = browser.currentScene.createNode("MetadataString");
MetadataString45.name = "copyright";
value[2] = MetadataString45;

let MetadataString46 = browser.currentScene.createNode("MetadataString");
MetadataString46.name = "creationDate";
value[3] = MetadataString46;

let MetadataFloat47 = browser.currentScene.createNode("MetadataFloat");
MetadataFloat47.name = "height";
MetadataFloat47.value = new X3D.MFFloat([1.7504]);
value[4] = MetadataFloat47;

let MetadataString48 = browser.currentScene.createNode("MetadataString");
MetadataString48.name = "humanoidVersion";
value[5] = MetadataString48;

let MetadataString49 = browser.currentScene.createNode("MetadataString");
MetadataString49.name = "usageRestrictions";
value[6] = MetadataString49;

HAnimHumanoid41.metadata = new X3D.SFNode();

HAnimHumanoid41XXX.metadata[0] = MetadataSet42;

let HAnimJoint50 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint50.DEF = "hanim_humanoid_root";
HAnimJoint50.name = "humanoid_root";
HAnimJoint50.center = new X3D.SFVec3f([0,0.824,0.0277]);
let HAnimSegment51 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment51.DEF = "hanim_sacrum";
HAnimSegment51.name = "sacrum";
HAnimJoint50YYY.children = new X3D.MFNode();

HAnimJoint50ZZZ.children[0] = HAnimSegment51;

let HAnimJoint52 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint52.DEF = "hanim_sacroiliac";
HAnimJoint52.name = "sacroiliac";
HAnimJoint52.center = new X3D.SFVec3f([0,0.9149,0.0016]);
let HAnimSegment53 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment53.DEF = "hanim_pelvis";
HAnimSegment53.name = "pelvis";
let HAnimSite54 = browser.currentScene.createNode("HAnimSite");
HAnimSite54.DEF = "hanim_r_iliocristale_pt";
HAnimSite54.name = "r_iliocristale_pt";
HAnimSite54.translation = new X3D.SFVec3f([-0.1525,1.0628,0.0035]);
HAnimSegment53YYY.children = new X3D.MFNode();

HAnimSegment53ZZZ.children[0] = HAnimSite54;

let HAnimSite55 = browser.currentScene.createNode("HAnimSite");
HAnimSite55.DEF = "hanim_r_trochanterion_pt";
HAnimSite55.name = "r_trochanterion_pt";
HAnimSite55.translation = new X3D.SFVec3f([-0.1689,0.8419,0.0352]);
HAnimSegment53ZZZ.children[1] = HAnimSite55;

let HAnimSite56 = browser.currentScene.createNode("HAnimSite");
HAnimSite56.DEF = "hanim_l_iliocristale_pt";
HAnimSite56.name = "l_iliocristale_pt";
HAnimSite56.translation = new X3D.SFVec3f([0.1612,1.0537,0.0008]);
HAnimSegment53ZZZ.children[2] = HAnimSite56;

let HAnimSite57 = browser.currentScene.createNode("HAnimSite");
HAnimSite57.DEF = "hanim_l_trochanterion_pt";
HAnimSite57.name = "l_trochanterion_pt";
HAnimSite57.translation = new X3D.SFVec3f([0.1677,0.8336,0.0303]);
HAnimSegment53ZZZ.children[3] = HAnimSite57;

let HAnimSite58 = browser.currentScene.createNode("HAnimSite");
HAnimSite58.DEF = "hanim_r_asis_pt";
HAnimSite58.name = "r_asis_pt";
HAnimSite58.translation = new X3D.SFVec3f([-0.0887,1.0021,0.1112]);
HAnimSegment53ZZZ.children[4] = HAnimSite58;

let HAnimSite59 = browser.currentScene.createNode("HAnimSite");
HAnimSite59.DEF = "hanim_l_asis_pt";
HAnimSite59.name = "l_asis_pt";
HAnimSite59.translation = new X3D.SFVec3f([0.0925,0.9983,0.1052]);
HAnimSegment53ZZZ.children[5] = HAnimSite59;

let HAnimSite60 = browser.currentScene.createNode("HAnimSite");
HAnimSite60.DEF = "hanim_r_psis_pt";
HAnimSite60.name = "r_psis_pt";
HAnimSite60.translation = new X3D.SFVec3f([-0.0716,1.019,-0.1138]);
HAnimSegment53ZZZ.children[6] = HAnimSite60;

let HAnimSite61 = browser.currentScene.createNode("HAnimSite");
HAnimSite61.DEF = "hanim_l_psis_pt";
HAnimSite61.name = "l_psis_pt";
HAnimSite61.translation = new X3D.SFVec3f([0.0774,1.019,-0.1151]);
HAnimSegment53ZZZ.children[7] = HAnimSite61;

let HAnimSite62 = browser.currentScene.createNode("HAnimSite");
HAnimSite62.DEF = "hanim_crotch_pt";
HAnimSite62.name = "crotch_pt";
HAnimSite62.translation = new X3D.SFVec3f([0.0034,0.8266,0.0257]);
HAnimSegment53ZZZ.children[8] = HAnimSite62;

HAnimJoint52YYY.children = new X3D.MFNode();

HAnimJoint52ZZZ.children[0] = HAnimSegment53;

let HAnimJoint63 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint63.DEF = "hanim_l_hip";
HAnimJoint63.name = "l_hip";
HAnimJoint63.center = new X3D.SFVec3f([0.0961,0.9124,-0.0001]);
let HAnimSegment64 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment64.DEF = "hanim_l_thigh";
HAnimSegment64.name = "l_thigh";
let HAnimSite65 = browser.currentScene.createNode("HAnimSite");
HAnimSite65.DEF = "hanim_l_knee_crease_pt";
HAnimSite65.name = "l_knee_crease_pt";
HAnimSite65.translation = new X3D.SFVec3f([0.0993,0.4881,-0.0309]);
HAnimSegment64YYY.children = new X3D.MFNode();

HAnimSegment64ZZZ.children[0] = HAnimSite65;

let HAnimSite66 = browser.currentScene.createNode("HAnimSite");
HAnimSite66.DEF = "hanim_l_femoral_lateral_epicondyle_pt";
HAnimSite66.name = "l_femoral_lateral_epicondyle_pt";
HAnimSite66.translation = new X3D.SFVec3f([0.1598,0.4967,0.0297]);
HAnimSegment64ZZZ.children[1] = HAnimSite66;

let HAnimSite67 = browser.currentScene.createNode("HAnimSite");
HAnimSite67.DEF = "hanim_l_femoral_medial_epicondyle_pt";
HAnimSite67.name = "l_femoral_medial_epicondyle_pt";
HAnimSite67.translation = new X3D.SFVec3f([0.0398,0.4946,0.0303]);
HAnimSegment64ZZZ.children[2] = HAnimSite67;

HAnimJoint63YYY.children = new X3D.MFNode();

HAnimJoint63ZZZ.children[0] = HAnimSegment64;

let HAnimJoint68 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint68.DEF = "hanim_l_knee";
HAnimJoint68.name = "l_knee";
HAnimJoint68.center = new X3D.SFVec3f([0.104,0.4867,0.0308]);
let HAnimSegment69 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment69.DEF = "hanim_l_calf";
HAnimSegment69.name = "l_calf";
HAnimJoint68YYY.children = new X3D.MFNode();

HAnimJoint68ZZZ.children[0] = HAnimSegment69;

let HAnimJoint70 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint70.DEF = "hanim_l_talocrural";
HAnimJoint70.name = "l_talocrural";
HAnimJoint70.center = new X3D.SFVec3f([0.1101,0.0656,-0.0736]);
let HAnimSegment71 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment71.DEF = "hanim_l_talus";
HAnimSegment71.name = "l_talus";
let HAnimSite72 = browser.currentScene.createNode("HAnimSite");
HAnimSite72.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite72.name = "l_lateral_malleolus_pt";
HAnimSite72.translation = new X3D.SFVec3f([0.1308,0.0597,-0.1032]);
HAnimSegment71YYY.children = new X3D.MFNode();

HAnimSegment71ZZZ.children[0] = HAnimSite72;

let HAnimSite73 = browser.currentScene.createNode("HAnimSite");
HAnimSite73.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite73.name = "l_medial_malleolus_pt";
HAnimSite73.translation = new X3D.SFVec3f([0.089,0.0716,-0.0881]);
HAnimSegment71ZZZ.children[1] = HAnimSite73;

let HAnimSite74 = browser.currentScene.createNode("HAnimSite");
HAnimSite74.DEF = "hanim_l_sphyrion_pt";
HAnimSite74.name = "l_sphyrion_pt";
HAnimSite74.translation = new X3D.SFVec3f([0.089,0.0575,-0.0943]);
HAnimSegment71ZZZ.children[2] = HAnimSite74;

let HAnimSite75 = browser.currentScene.createNode("HAnimSite");
HAnimSite75.DEF = "hanim_l_calcaneus_posterior_pt";
HAnimSite75.name = "l_calcaneus_posterior_pt";
HAnimSite75.translation = new X3D.SFVec3f([0.0974,0.0259,-0.1171]);
HAnimSegment71ZZZ.children[3] = HAnimSite75;

HAnimJoint70YYY.children = new X3D.MFNode();

HAnimJoint70ZZZ.children[0] = HAnimSegment71;

let HAnimJoint76 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint76.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint76.name = "l_tarsometatarsal_2";
HAnimJoint76.center = new X3D.SFVec3f([0.1086,0.0001,-0.0368]);
let HAnimSegment77 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment77.DEF = "hanim_l_metatarsal_2";
HAnimSegment77.name = "l_metatarsal_2";
HAnimJoint76YYY.children = new X3D.MFNode();

HAnimJoint76ZZZ.children[0] = HAnimSegment77;

let HAnimJoint78 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint78.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint78.name = "l_metatarsophalangeal_2";
HAnimJoint78.center = new X3D.SFVec3f([0.1086,0.0001,0.0368]);
let HAnimSegment79 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment79.DEF = "hanim_l_tarsal_proximal_phalanx_2";
HAnimSegment79.name = "l_tarsal_proximal_phalanx_2";
let HAnimSite80 = browser.currentScene.createNode("HAnimSite");
HAnimSite80.DEF = "hanim_l_metatarsal_phalanx_1_pt";
HAnimSite80.name = "l_metatarsal_phalanx_1_pt";
HAnimSite80.translation = new X3D.SFVec3f([0.0816,0.0232,0.0106]);
HAnimSegment79YYY.children = new X3D.MFNode();

HAnimSegment79ZZZ.children[0] = HAnimSite80;

HAnimJoint78YYY.children = new X3D.MFNode();

HAnimJoint78ZZZ.children[0] = HAnimSegment79;

let HAnimJoint81 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint81.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint81.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint81.center = new X3D.SFVec3f([0.1086,0,0.0762]);
let HAnimSegment82 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment82.DEF = "hanim_l_tarsal_distal_phalanx_2";
HAnimSegment82.name = "l_tarsal_distal_phalanx_2";
let HAnimSite83 = browser.currentScene.createNode("HAnimSite");
HAnimSite83.DEF = "hanim_l_forefoot_tip";
HAnimSite83.name = "l_forefoot_tip";
HAnimSite83.translation = new X3D.SFVec3f([0.1354,0.0016,0.1476]);
HAnimSegment82YYY.children = new X3D.MFNode();

HAnimSegment82ZZZ.children[0] = HAnimSite83;

let HAnimSite84 = browser.currentScene.createNode("HAnimSite");
HAnimSite84.DEF = "hanim_l_metatarsal_phalanx_5_pt";
HAnimSite84.name = "l_metatarsal_phalanx_5_pt";
HAnimSite84.translation = new X3D.SFVec3f([0.1825,0.007,0.0928]);
HAnimSegment82ZZZ.children[1] = HAnimSite84;

let HAnimSite85 = browser.currentScene.createNode("HAnimSite");
HAnimSite85.DEF = "hanim_l_tarsal_distal_phalanx_2_pt";
HAnimSite85.name = "l_tarsal_distal_phalanx_2_pt";
HAnimSite85.translation = new X3D.SFVec3f([0.1195,0.0079,0.1433]);
HAnimSegment82ZZZ.children[2] = HAnimSite85;

HAnimJoint81YYY.children = new X3D.MFNode();

HAnimJoint81ZZZ.children[0] = HAnimSegment82;

HAnimJoint78ZZZ.children[1] = HAnimJoint81;

HAnimJoint76ZZZ.children[1] = HAnimJoint78;

HAnimJoint70ZZZ.children[1] = HAnimJoint76;

HAnimJoint68ZZZ.children[1] = HAnimJoint70;

HAnimJoint63ZZZ.children[1] = HAnimJoint68;

HAnimJoint52ZZZ.children[1] = HAnimJoint63;

let HAnimJoint86 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint86.DEF = "hanim_r_hip";
HAnimJoint86.name = "r_hip";
HAnimJoint86.center = new X3D.SFVec3f([-0.0961,0.9124,-0.0001]);
let HAnimSegment87 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment87.DEF = "hanim_r_thigh";
HAnimSegment87.name = "r_thigh";
let HAnimSite88 = browser.currentScene.createNode("HAnimSite");
HAnimSite88.DEF = "hanim_r_knee_crease_pt";
HAnimSite88.name = "r_knee_crease_pt";
HAnimSite88.translation = new X3D.SFVec3f([-0.0825,0.4932,-0.0326]);
HAnimSegment87YYY.children = new X3D.MFNode();

HAnimSegment87ZZZ.children[0] = HAnimSite88;

let HAnimSite89 = browser.currentScene.createNode("HAnimSite");
HAnimSite89.DEF = "hanim_r_femoral_lateral_epicondyle_pt";
HAnimSite89.name = "r_femoral_lateral_epicondyle_pt";
HAnimSite89.translation = new X3D.SFVec3f([-0.1421,0.4992,0.031]);
HAnimSegment87ZZZ.children[1] = HAnimSite89;

let HAnimSite90 = browser.currentScene.createNode("HAnimSite");
HAnimSite90.DEF = "hanim_r_femoral_medial_epicondyle_pt";
HAnimSite90.name = "r_femoral_medial_epicondyle_pt";
HAnimSite90.translation = new X3D.SFVec3f([-0.0221,0.5014,0.0289]);
HAnimSegment87ZZZ.children[2] = HAnimSite90;

HAnimJoint86YYY.children = new X3D.MFNode();

HAnimJoint86ZZZ.children[0] = HAnimSegment87;

let HAnimJoint91 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint91.DEF = "hanim_r_knee";
HAnimJoint91.name = "r_knee";
HAnimJoint91.center = new X3D.SFVec3f([-0.104,0.4867,0.0308]);
let HAnimSegment92 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment92.DEF = "hanim_r_calf";
HAnimSegment92.name = "r_calf";
HAnimJoint91YYY.children = new X3D.MFNode();

HAnimJoint91ZZZ.children[0] = HAnimSegment92;

let HAnimJoint93 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint93.DEF = "hanim_r_talocrural";
HAnimJoint93.name = "r_talocrural";
HAnimJoint93.center = new X3D.SFVec3f([-0.1101,0.0656,-0.0736]);
let HAnimSegment94 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment94.DEF = "hanim_r_talus";
HAnimSegment94.name = "r_talus";
let HAnimSite95 = browser.currentScene.createNode("HAnimSite");
HAnimSite95.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite95.name = "r_lateral_malleolus_pt";
HAnimSite95.translation = new X3D.SFVec3f([-0.1006,0.0658,-0.1075]);
HAnimSegment94YYY.children = new X3D.MFNode();

HAnimSegment94ZZZ.children[0] = HAnimSite95;

let HAnimSite96 = browser.currentScene.createNode("HAnimSite");
HAnimSite96.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite96.name = "r_medial_malleolus_pt";
HAnimSite96.translation = new X3D.SFVec3f([-0.0591,0.076,-0.0928]);
HAnimSegment94ZZZ.children[1] = HAnimSite96;

let HAnimSite97 = browser.currentScene.createNode("HAnimSite");
HAnimSite97.DEF = "hanim_r_sphyrion_pt";
HAnimSite97.name = "r_sphyrion_pt";
HAnimSite97.translation = new X3D.SFVec3f([-0.0603,0.061,-0.1002]);
HAnimSegment94ZZZ.children[2] = HAnimSite97;

let HAnimSite98 = browser.currentScene.createNode("HAnimSite");
HAnimSite98.DEF = "hanim_r_calcaneus_posterior_pt";
HAnimSite98.name = "r_calcaneus_posterior_pt";
HAnimSite98.translation = new X3D.SFVec3f([-0.0692,0.0297,-0.1221]);
HAnimSegment94ZZZ.children[3] = HAnimSite98;

HAnimJoint93YYY.children = new X3D.MFNode();

HAnimJoint93ZZZ.children[0] = HAnimSegment94;

let HAnimJoint99 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint99.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint99.name = "r_tarsometatarsal_2";
HAnimJoint99.center = new X3D.SFVec3f([-0.1086,0.0001,-0.0368]);
let HAnimSegment100 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment100.DEF = "hanim_r_metatarsal_2";
HAnimSegment100.name = "r_metatarsal_2";
HAnimJoint99YYY.children = new X3D.MFNode();

HAnimJoint99ZZZ.children[0] = HAnimSegment100;

let HAnimJoint101 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint101.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint101.name = "r_metatarsophalangeal_2";
HAnimJoint101.center = new X3D.SFVec3f([-0.1086,0.0001,0.0368]);
let HAnimSegment102 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment102.DEF = "hanim_r_tarsal_proximal_phalanx_2";
HAnimSegment102.name = "r_tarsal_proximal_phalanx_2";
let HAnimSite103 = browser.currentScene.createNode("HAnimSite");
HAnimSite103.DEF = "hanim_r_metatarsal_phalanx_1_pt";
HAnimSite103.name = "r_metatarsal_phalanx_1_pt";
HAnimSite103.translation = new X3D.SFVec3f([-0.0521,0.026,0.0127]);
HAnimSegment102YYY.children = new X3D.MFNode();

HAnimSegment102ZZZ.children[0] = HAnimSite103;

HAnimJoint101YYY.children = new X3D.MFNode();

HAnimJoint101ZZZ.children[0] = HAnimSegment102;

let HAnimJoint104 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint104.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint104.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint104.center = new X3D.SFVec3f([-0.1086,0,0.0762]);
let HAnimSegment105 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment105.DEF = "hanim_r_tarsal_distal_phalanx_2";
HAnimSegment105.name = "r_tarsal_distal_phalanx_2";
let HAnimSite106 = browser.currentScene.createNode("HAnimSite");
HAnimSite106.DEF = "hanim_r_forefoot_tip";
HAnimSite106.name = "r_forefoot_tip";
HAnimSite106.translation = new X3D.SFVec3f([-0.1043,0.0227,0.145]);
HAnimSegment105YYY.children = new X3D.MFNode();

HAnimSegment105ZZZ.children[0] = HAnimSite106;

let HAnimSite107 = browser.currentScene.createNode("HAnimSite");
HAnimSite107.DEF = "hanim_r_metatarsal_phalanx_5_pt";
HAnimSite107.name = "r_metatarsal_phalanx_5_pt";
HAnimSite107.translation = new X3D.SFVec3f([-0.1523,0.0166,0.0895]);
HAnimSegment105ZZZ.children[1] = HAnimSite107;

let HAnimSite108 = browser.currentScene.createNode("HAnimSite");
HAnimSite108.DEF = "hanim_r_tarsal_distal_phalanx_2_pt";
HAnimSite108.name = "r_tarsal_distal_phalanx_2_pt";
HAnimSite108.translation = new X3D.SFVec3f([-0.0883,0.0134,0.1383]);
HAnimSegment105ZZZ.children[2] = HAnimSite108;

HAnimJoint104YYY.children = new X3D.MFNode();

HAnimJoint104ZZZ.children[0] = HAnimSegment105;

HAnimJoint101ZZZ.children[1] = HAnimJoint104;

HAnimJoint99ZZZ.children[1] = HAnimJoint101;

HAnimJoint93ZZZ.children[1] = HAnimJoint99;

HAnimJoint91ZZZ.children[1] = HAnimJoint93;

HAnimJoint86ZZZ.children[1] = HAnimJoint91;

HAnimJoint52ZZZ.children[2] = HAnimJoint86;

HAnimJoint50ZZZ.children[1] = HAnimJoint52;

let HAnimJoint109 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint109.DEF = "hanim_vl5";
HAnimJoint109.name = "vl5";
HAnimJoint109.center = new X3D.SFVec3f([0.0028,1.0568,-0.0776]);
let HAnimSegment110 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment110.DEF = "hanim_l5";
HAnimSegment110.name = "l5";
let HAnimSite111 = browser.currentScene.createNode("HAnimSite");
HAnimSite111.DEF = "hanim_waist_preferred_posterior_pt";
HAnimSite111.name = "waist_preferred_posterior_pt";
HAnimSite111.translation = new X3D.SFVec3f([0,1.0915,-0.1091]);
HAnimSegment110YYY.children = new X3D.MFNode();

HAnimSegment110ZZZ.children[0] = HAnimSite111;

let HAnimSite112 = browser.currentScene.createNode("HAnimSite");
HAnimSite112.DEF = "hanim_navel_pt";
HAnimSite112.name = "navel_pt";
HAnimSite112.translation = new X3D.SFVec3f([0.0069,1.0966,0.1017]);
HAnimSegment110ZZZ.children[1] = HAnimSite112;

HAnimJoint109YYY.children = new X3D.MFNode();

HAnimJoint109ZZZ.children[0] = HAnimSegment110;

let HAnimJoint113 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint113.DEF = "hanim_vl4";
HAnimJoint113.name = "vl4";
HAnimJoint113.center = new X3D.SFVec3f([0.0035,1.0925,-0.0787]);
let HAnimSegment114 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment114.DEF = "hanim_l4";
HAnimSegment114.name = "l4";
HAnimJoint113YYY.children = new X3D.MFNode();

HAnimJoint113ZZZ.children[0] = HAnimSegment114;

let HAnimJoint115 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint115.DEF = "hanim_vl3";
HAnimJoint115.name = "vl3";
HAnimJoint115.center = new X3D.SFVec3f([0.0041,1.1276,-0.0796]);
let HAnimSegment116 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment116.DEF = "hanim_l3";
HAnimSegment116.name = "l3";
HAnimJoint115YYY.children = new X3D.MFNode();

HAnimJoint115ZZZ.children[0] = HAnimSegment116;

let HAnimJoint117 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint117.DEF = "hanim_vl2";
HAnimJoint117.name = "vl2";
HAnimJoint117.center = new X3D.SFVec3f([0.0045,1.1546,-0.08]);
let HAnimSegment118 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment118.DEF = "hanim_l2";
HAnimSegment118.name = "l2";
let HAnimSite119 = browser.currentScene.createNode("HAnimSite");
HAnimSite119.DEF = "hanim_r_rib10_pt";
HAnimSite119.name = "r_rib10_pt";
HAnimSite119.translation = new X3D.SFVec3f([-0.0711,1.1941,0.1016]);
HAnimSegment118YYY.children = new X3D.MFNode();

HAnimSegment118ZZZ.children[0] = HAnimSite119;

let HAnimSite120 = browser.currentScene.createNode("HAnimSite");
HAnimSite120.DEF = "hanim_l_rib10_pt";
HAnimSite120.name = "l_rib10_pt";
HAnimSite120.translation = new X3D.SFVec3f([0.0871,1.1925,0.0992]);
HAnimSegment118ZZZ.children[1] = HAnimSite120;

let HAnimSite121 = browser.currentScene.createNode("HAnimSite");
HAnimSite121.DEF = "hanim_rib10_midspine_pt";
HAnimSite121.name = "rib10_midspine_pt";
HAnimSite121.translation = new X3D.SFVec3f([0.0049,1.1908,-0.1113]);
HAnimSegment118ZZZ.children[2] = HAnimSite121;

HAnimJoint117YYY.children = new X3D.MFNode();

HAnimJoint117ZZZ.children[0] = HAnimSegment118;

let HAnimJoint122 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint122.DEF = "hanim_vl1";
HAnimJoint122.name = "vl1";
HAnimJoint122.center = new X3D.SFVec3f([0.0048,1.1912,-0.0805]);
let HAnimSegment123 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment123.DEF = "hanim_l1";
HAnimSegment123.name = "l1";
HAnimJoint122YYY.children = new X3D.MFNode();

HAnimJoint122ZZZ.children[0] = HAnimSegment123;

let HAnimJoint124 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint124.DEF = "hanim_vt12";
HAnimJoint124.name = "vt12";
HAnimJoint124.center = new X3D.SFVec3f([0.0051,1.2278,-0.0808]);
let HAnimSegment125 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment125.DEF = "hanim_t12";
HAnimSegment125.name = "t12";
HAnimJoint124YYY.children = new X3D.MFNode();

HAnimJoint124ZZZ.children[0] = HAnimSegment125;

let HAnimJoint126 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint126.DEF = "hanim_vt11";
HAnimJoint126.name = "vt11";
HAnimJoint126.center = new X3D.SFVec3f([0.0053,1.2679,-0.081]);
let HAnimSegment127 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment127.DEF = "hanim_t11";
HAnimSegment127.name = "t11";
HAnimJoint126YYY.children = new X3D.MFNode();

HAnimJoint126ZZZ.children[0] = HAnimSegment127;

let HAnimJoint128 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint128.DEF = "hanim_vt10";
HAnimJoint128.name = "vt10";
HAnimJoint128.center = new X3D.SFVec3f([0.0056,1.2848,-0.0822]);
let HAnimSegment129 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment129.DEF = "hanim_t10";
HAnimSegment129.name = "t10";
let HAnimSite130 = browser.currentScene.createNode("HAnimSite");
HAnimSite130.DEF = "hanim_substernale_pt";
HAnimSite130.name = "substernale_pt";
HAnimSite130.translation = new X3D.SFVec3f([0.0085,1.2995,0.1147]);
HAnimSegment129YYY.children = new X3D.MFNode();

HAnimSegment129ZZZ.children[0] = HAnimSite130;

HAnimJoint128YYY.children = new X3D.MFNode();

HAnimJoint128ZZZ.children[0] = HAnimSegment129;

let HAnimJoint131 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint131.DEF = "hanim_vt9";
HAnimJoint131.name = "vt9";
HAnimJoint131.center = new X3D.SFVec3f([0.0057,1.3126,-0.0838]);
let HAnimSegment132 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment132.DEF = "hanim_t9";
HAnimSegment132.name = "t9";
let HAnimSite133 = browser.currentScene.createNode("HAnimSite");
HAnimSite133.DEF = "hanim_r_thelion_pt";
HAnimSite133.name = "r_thelion_pt";
HAnimSite133.translation = new X3D.SFVec3f([-0.0736,1.3385,0.1217]);
HAnimSegment132YYY.children = new X3D.MFNode();

HAnimSegment132ZZZ.children[0] = HAnimSite133;

let HAnimSite134 = browser.currentScene.createNode("HAnimSite");
HAnimSite134.DEF = "hanim_l_thelion_pt";
HAnimSite134.name = "l_thelion_pt";
HAnimSite134.translation = new X3D.SFVec3f([0.0918,1.3382,0.1192]);
HAnimSegment132ZZZ.children[1] = HAnimSite134;

HAnimJoint131YYY.children = new X3D.MFNode();

HAnimJoint131ZZZ.children[0] = HAnimSegment132;

let HAnimJoint135 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint135.DEF = "hanim_vt8";
HAnimJoint135.name = "vt8";
HAnimJoint135.center = new X3D.SFVec3f([0.0057,1.3382,-0.0845]);
let HAnimSegment136 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment136.DEF = "hanim_t8";
HAnimSegment136.name = "t8";
HAnimJoint135YYY.children = new X3D.MFNode();

HAnimJoint135ZZZ.children[0] = HAnimSegment136;

let HAnimJoint137 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint137.DEF = "hanim_vt7";
HAnimJoint137.name = "vt7";
HAnimJoint137.center = new X3D.SFVec3f([0.0058,1.3625,-0.0833]);
let HAnimSegment138 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment138.DEF = "hanim_t7";
HAnimSegment138.name = "t7";
HAnimJoint137YYY.children = new X3D.MFNode();

HAnimJoint137ZZZ.children[0] = HAnimSegment138;

let HAnimJoint139 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint139.DEF = "hanim_vt6";
HAnimJoint139.name = "vt6";
HAnimJoint139.center = new X3D.SFVec3f([0.0059,1.3866,-0.08]);
let HAnimSegment140 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment140.DEF = "hanim_t6";
HAnimSegment140.name = "t6";
HAnimJoint139YYY.children = new X3D.MFNode();

HAnimJoint139ZZZ.children[0] = HAnimSegment140;

let HAnimJoint141 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint141.DEF = "hanim_vt5";
HAnimJoint141.name = "vt5";
HAnimJoint141.center = new X3D.SFVec3f([0.006,1.4102,-0.0745]);
let HAnimSegment142 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment142.DEF = "hanim_t5";
HAnimSegment142.name = "t5";
HAnimJoint141YYY.children = new X3D.MFNode();

HAnimJoint141ZZZ.children[0] = HAnimSegment142;

let HAnimJoint143 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint143.DEF = "hanim_vt4";
HAnimJoint143.name = "vt4";
HAnimJoint143.center = new X3D.SFVec3f([0.0061,1.432,-0.0675]);
let HAnimSegment144 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment144.DEF = "hanim_t4";
HAnimSegment144.name = "t4";
HAnimJoint143YYY.children = new X3D.MFNode();

HAnimJoint143ZZZ.children[0] = HAnimSegment144;

let HAnimJoint145 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint145.DEF = "hanim_vt3";
HAnimJoint145.name = "vt3";
HAnimJoint145.center = new X3D.SFVec3f([0.0062,1.4583,-0.057]);
let HAnimSegment146 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment146.DEF = "hanim_t3";
HAnimSegment146.name = "t3";
HAnimJoint145YYY.children = new X3D.MFNode();

HAnimJoint145ZZZ.children[0] = HAnimSegment146;

let HAnimJoint147 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint147.DEF = "hanim_vt2";
HAnimJoint147.name = "vt2";
HAnimJoint147.center = new X3D.SFVec3f([0.0063,1.4761,-0.0484]);
let HAnimSegment148 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment148.DEF = "hanim_t2";
HAnimSegment148.name = "t2";
HAnimJoint147YYY.children = new X3D.MFNode();

HAnimJoint147ZZZ.children[0] = HAnimSegment148;

let HAnimJoint149 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint149.DEF = "hanim_vt1";
HAnimJoint149.name = "vt1";
HAnimJoint149.center = new X3D.SFVec3f([0.0065,1.4951,-0.0387]);
let HAnimSegment150 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment150.DEF = "hanim_t1";
HAnimSegment150.name = "t1";
let HAnimSite151 = browser.currentScene.createNode("HAnimSite");
HAnimSite151.DEF = "hanim_suprasternale_pt";
HAnimSite151.name = "suprasternale_pt";
HAnimSite151.translation = new X3D.SFVec3f([0.0084,1.4714,0.0551]);
HAnimSegment150YYY.children = new X3D.MFNode();

HAnimSegment150ZZZ.children[0] = HAnimSite151;

let HAnimSite152 = browser.currentScene.createNode("HAnimSite");
HAnimSite152.DEF = "hanim_cervicale_pt";
HAnimSite152.name = "cervicale_pt";
HAnimSite152.translation = new X3D.SFVec3f([0.0064,1.52,-0.0815]);
HAnimSegment150ZZZ.children[1] = HAnimSite152;

HAnimJoint149YYY.children = new X3D.MFNode();

HAnimJoint149ZZZ.children[0] = HAnimSegment150;

let HAnimJoint153 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint153.DEF = "hanim_vc7";
HAnimJoint153.name = "vc7";
HAnimJoint153.center = new X3D.SFVec3f([0.0066,1.5132,-0.0301]);
let HAnimSegment154 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment154.DEF = "hanim_c7";
HAnimSegment154.name = "c7";
let HAnimSite155 = browser.currentScene.createNode("HAnimSite");
HAnimSite155.DEF = "hanim_r_neck_base_pt";
HAnimSite155.name = "r_neck_base_pt";
HAnimSite155.translation = new X3D.SFVec3f([-0.0419,1.5149,-0.022]);
HAnimSegment154YYY.children = new X3D.MFNode();

HAnimSegment154ZZZ.children[0] = HAnimSite155;

let HAnimSite156 = browser.currentScene.createNode("HAnimSite");
HAnimSite156.DEF = "hanim_l_neck_base_pt";
HAnimSite156.name = "l_neck_base_pt";
HAnimSite156.translation = new X3D.SFVec3f([0.0646,1.5141,-0.038]);
HAnimSegment154ZZZ.children[1] = HAnimSite156;

HAnimJoint153YYY.children = new X3D.MFNode();

HAnimJoint153ZZZ.children[0] = HAnimSegment154;

let HAnimJoint157 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint157.DEF = "hanim_vc6";
HAnimJoint157.name = "vc6";
HAnimJoint157.center = new X3D.SFVec3f([0.0066,1.5357,-0.0143]);
let HAnimSegment158 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment158.DEF = "hanim_c6";
HAnimSegment158.name = "c6";
HAnimJoint157YYY.children = new X3D.MFNode();

HAnimJoint157ZZZ.children[0] = HAnimSegment158;

let HAnimJoint159 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint159.DEF = "hanim_vc5";
HAnimJoint159.name = "vc5";
HAnimJoint159.center = new X3D.SFVec3f([0.0066,1.552,-0.0082]);
let HAnimSegment160 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment160.DEF = "hanim_c5";
HAnimSegment160.name = "c5";
HAnimJoint159YYY.children = new X3D.MFNode();

HAnimJoint159ZZZ.children[0] = HAnimSegment160;

let HAnimJoint161 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint161.DEF = "hanim_vc4";
HAnimJoint161.name = "vc4";
HAnimJoint161.center = new X3D.SFVec3f([0.0066,1.5662,-0.0084]);
let HAnimSegment162 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment162.DEF = "hanim_c4";
HAnimSegment162.name = "c4";
HAnimJoint161YYY.children = new X3D.MFNode();

HAnimJoint161ZZZ.children[0] = HAnimSegment162;

let HAnimJoint163 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint163.DEF = "hanim_vc3";
HAnimJoint163.name = "vc3";
HAnimJoint163.center = new X3D.SFVec3f([0.0066,1.58,-0.0103]);
let HAnimSegment164 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment164.DEF = "hanim_c3";
HAnimSegment164.name = "c3";
HAnimJoint163YYY.children = new X3D.MFNode();

HAnimJoint163ZZZ.children[0] = HAnimSegment164;

let HAnimJoint165 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint165.DEF = "hanim_vc2";
HAnimJoint165.name = "vc2";
HAnimJoint165.center = new X3D.SFVec3f([0.0066,1.5928,-0.0103]);
let HAnimSegment166 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment166.DEF = "hanim_c2";
HAnimSegment166.name = "c2";
HAnimJoint165YYY.children = new X3D.MFNode();

HAnimJoint165ZZZ.children[0] = HAnimSegment166;

let HAnimJoint167 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint167.DEF = "hanim_vc1";
HAnimJoint167.name = "vc1";
HAnimJoint167.center = new X3D.SFVec3f([0.0066,1.6144,-0.0034]);
let HAnimSegment168 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment168.DEF = "hanim_c1";
HAnimSegment168.name = "c1";
HAnimJoint167YYY.children = new X3D.MFNode();

HAnimJoint167ZZZ.children[0] = HAnimSegment168;

let HAnimJoint169 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint169.DEF = "hanim_skullbase";
HAnimJoint169.name = "skullbase";
HAnimJoint169.center = new X3D.SFVec3f([0.0044,1.6209,0.0236]);
let HAnimSegment170 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment170.DEF = "hanim_skull";
HAnimSegment170.name = "skull";
let HAnimSite171 = browser.currentScene.createNode("HAnimSite");
HAnimSite171.DEF = "hanim_skull_vertex_tip";
HAnimSite171.name = "skull_vertex_tip";
HAnimSite171.translation = new X3D.SFVec3f([0.005,1.7504,0.0055]);
HAnimSegment170YYY.children = new X3D.MFNode();

HAnimSegment170ZZZ.children[0] = HAnimSite171;

let HAnimSite172 = browser.currentScene.createNode("HAnimSite");
HAnimSite172.DEF = "hanim_sellion_pt";
HAnimSite172.name = "sellion_pt";
HAnimSite172.translation = new X3D.SFVec3f([0.0058,1.6316,0.0852]);
HAnimSegment170ZZZ.children[1] = HAnimSite172;

let HAnimSite173 = browser.currentScene.createNode("HAnimSite");
HAnimSite173.DEF = "hanim_r_infraorbitale_pt";
HAnimSite173.name = "r_infraorbitale_pt";
HAnimSite173.translation = new X3D.SFVec3f([-0.0237,1.6171,0.0752]);
HAnimSegment170ZZZ.children[2] = HAnimSite173;

let HAnimSite174 = browser.currentScene.createNode("HAnimSite");
HAnimSite174.DEF = "hanim_l_infraorbitale_pt";
HAnimSite174.name = "l_infraorbitale_pt";
HAnimSite174.translation = new X3D.SFVec3f([0.0341,1.6171,0.0752]);
HAnimSegment170ZZZ.children[3] = HAnimSite174;

let HAnimSite175 = browser.currentScene.createNode("HAnimSite");
HAnimSite175.DEF = "hanim_supramenton_pt";
HAnimSite175.name = "supramenton_pt";
HAnimSite175.translation = new X3D.SFVec3f([0.0061,1.541,0.0805]);
HAnimSegment170ZZZ.children[4] = HAnimSite175;

let HAnimSite176 = browser.currentScene.createNode("HAnimSite");
HAnimSite176.DEF = "hanim_r_tragion_pt";
HAnimSite176.name = "r_tragion_pt";
HAnimSite176.translation = new X3D.SFVec3f([-0.0646,1.6347,0.0302]);
HAnimSegment170ZZZ.children[5] = HAnimSite176;

let HAnimSite177 = browser.currentScene.createNode("HAnimSite");
HAnimSite177.DEF = "hanim_r_gonion_pt";
HAnimSite177.name = "r_gonion_pt";
HAnimSite177.translation = new X3D.SFVec3f([-0.052,1.5529,0.0347]);
HAnimSegment170ZZZ.children[6] = HAnimSite177;

let HAnimSite178 = browser.currentScene.createNode("HAnimSite");
HAnimSite178.DEF = "hanim_l_tragion_pt";
HAnimSite178.name = "l_tragion_pt";
HAnimSite178.translation = new X3D.SFVec3f([0.0739,1.6348,0.0282]);
HAnimSegment170ZZZ.children[7] = HAnimSite178;

let HAnimSite179 = browser.currentScene.createNode("HAnimSite");
HAnimSite179.DEF = "hanim_l_gonion_pt";
HAnimSite179.name = "l_gonion_pt";
HAnimSite179.translation = new X3D.SFVec3f([0.0631,1.553,0.033]);
HAnimSegment170ZZZ.children[8] = HAnimSite179;

let HAnimSite180 = browser.currentScene.createNode("HAnimSite");
HAnimSite180.DEF = "hanim_nuchale_pt";
HAnimSite180.name = "nuchale_pt";
HAnimSite180.translation = new X3D.SFVec3f([0.0039,1.5972,-0.0796]);
HAnimSegment170ZZZ.children[9] = HAnimSite180;

HAnimJoint169YYY.children = new X3D.MFNode();

HAnimJoint169ZZZ.children[0] = HAnimSegment170;

let HAnimJoint181 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint181.DEF = "hanim_l_eyeball_joint";
HAnimJoint181.name = "l_eyeball_joint";
HAnimJoint181.center = new X3D.SFVec3f([0.0336,1.6332,0.0502]);
let HAnimSegment182 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment182.DEF = "hanim_l_eyeball";
HAnimSegment182.name = "l_eyeball";
let HAnimSite183 = browser.currentScene.createNode("HAnimSite");
HAnimSite183.DEF = "hanim_l_eyeball_site_view";
HAnimSite183.name = "l_eyeball_site_view";
HAnimSite183.translation = new X3D.SFVec3f([0.034,1.64,0.05]);
let Viewpoint184 = browser.currentScene.createNode("Viewpoint");
Viewpoint184.DEF = "hanim_l_eyeball_site_viewpoint";
Viewpoint184.description = "l_eyeball_site_viewpoint looking forward";
Viewpoint184.position = new X3D.SFVec3f([0,0,0]);
Viewpoint184.orientation = new X3D.SFRotation([0,1,0,3.141593]);
HAnimSite183YYY.children = new X3D.MFNode();

HAnimSite183ZZZ.children[0] = Viewpoint184;

HAnimSegment182YYY.children = new X3D.MFNode();

HAnimSegment182ZZZ.children[0] = HAnimSite183;

HAnimJoint181YYY.children = new X3D.MFNode();

HAnimJoint181ZZZ.children[0] = HAnimSegment182;

HAnimJoint169ZZZ.children[1] = HAnimJoint181;

let HAnimJoint185 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint185.DEF = "hanim_l_eyelid_joint";
HAnimJoint185.name = "l_eyelid_joint";
HAnimJoint185.center = new X3D.SFVec3f([0.0336,1.6332,0.0502]);
let HAnimSegment186 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment186.DEF = "hanim_l_eyelid";
HAnimSegment186.name = "l_eyelid";
HAnimJoint185YYY.children = new X3D.MFNode();

HAnimJoint185ZZZ.children[0] = HAnimSegment186;

HAnimJoint169ZZZ.children[2] = HAnimJoint185;

let HAnimJoint187 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint187.DEF = "hanim_l_eyebrow_joint";
HAnimJoint187.name = "l_eyebrow_joint";
HAnimJoint187.center = new X3D.SFVec3f([0.0336,1.635,0.0506]);
let HAnimSegment188 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment188.DEF = "hanim_l_eyebrow";
HAnimSegment188.name = "l_eyebrow";
HAnimJoint187YYY.children = new X3D.MFNode();

HAnimJoint187ZZZ.children[0] = HAnimSegment188;

HAnimJoint169ZZZ.children[3] = HAnimJoint187;

let HAnimJoint189 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint189.DEF = "hanim_r_eyeball_joint";
HAnimJoint189.name = "r_eyeball_joint";
HAnimJoint189.center = new X3D.SFVec3f([-0.0336,1.6332,0.0502]);
let HAnimSegment190 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment190.DEF = "hanim_r_eyeball";
HAnimSegment190.name = "r_eyeball";
let HAnimSite191 = browser.currentScene.createNode("HAnimSite");
HAnimSite191.DEF = "hanim_r_eyeball_site_view";
HAnimSite191.name = "r_eyeball_site_view";
HAnimSite191.translation = new X3D.SFVec3f([-0.034,1.64,0.05]);
let Viewpoint192 = browser.currentScene.createNode("Viewpoint");
Viewpoint192.DEF = "hanim_r_eyeball_site_viewpoint";
Viewpoint192.description = "r_eyeball_site_viewpoint looking forward";
Viewpoint192.position = new X3D.SFVec3f([0,0,0]);
Viewpoint192.orientation = new X3D.SFRotation([0,1,0,3.141593]);
HAnimSite191YYY.children = new X3D.MFNode();

HAnimSite191ZZZ.children[0] = Viewpoint192;

HAnimSegment190YYY.children = new X3D.MFNode();

HAnimSegment190ZZZ.children[0] = HAnimSite191;

HAnimJoint189YYY.children = new X3D.MFNode();

HAnimJoint189ZZZ.children[0] = HAnimSegment190;

HAnimJoint169ZZZ.children[4] = HAnimJoint189;

let HAnimJoint193 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint193.DEF = "hanim_r_eyelid_joint";
HAnimJoint193.name = "r_eyelid_joint";
HAnimJoint193.center = new X3D.SFVec3f([-0.0336,1.6332,0.0502]);
let HAnimSegment194 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment194.DEF = "hanim_r_eyelid";
HAnimSegment194.name = "r_eyelid";
HAnimJoint193YYY.children = new X3D.MFNode();

HAnimJoint193ZZZ.children[0] = HAnimSegment194;

HAnimJoint169ZZZ.children[5] = HAnimJoint193;

let HAnimJoint195 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint195.DEF = "hanim_r_eyebrow_joint";
HAnimJoint195.name = "r_eyebrow_joint";
HAnimJoint195.center = new X3D.SFVec3f([-0.0336,1.635,0.0506]);
let HAnimSegment196 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment196.DEF = "hanim_r_eyebrow";
HAnimSegment196.name = "r_eyebrow";
HAnimJoint195YYY.children = new X3D.MFNode();

HAnimJoint195ZZZ.children[0] = HAnimSegment196;

HAnimJoint169ZZZ.children[6] = HAnimJoint195;

let HAnimJoint197 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint197.DEF = "hanim_temporomandibular";
HAnimJoint197.name = "temporomandibular";
HAnimJoint197.center = new X3D.SFVec3f([0,1.63,0.015]);
let HAnimSegment198 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment198.DEF = "hanim_jaw";
HAnimSegment198.name = "jaw";
let HAnimSite199 = browser.currentScene.createNode("HAnimSite");
HAnimSite199.DEF = "hanim_temporomandibular_l_site_pt";
HAnimSite199.name = "temporomandibular_l_site_pt";
HAnimSite199.translation = new X3D.SFVec3f([0.045,1.63,0]);
HAnimSegment198YYY.children = new X3D.MFNode();

HAnimSegment198ZZZ.children[0] = HAnimSite199;

let HAnimSite200 = browser.currentScene.createNode("HAnimSite");
HAnimSite200.DEF = "hanim_temporomandibular_r_site_pt";
HAnimSite200.name = "temporomandibular_r_site_pt";
HAnimSite200.translation = new X3D.SFVec3f([-0.045,1.63,0]);
HAnimSegment198ZZZ.children[1] = HAnimSite200;

HAnimJoint197YYY.children = new X3D.MFNode();

HAnimJoint197ZZZ.children[0] = HAnimSegment198;

HAnimJoint169ZZZ.children[7] = HAnimJoint197;

HAnimJoint167ZZZ.children[1] = HAnimJoint169;

HAnimJoint165ZZZ.children[1] = HAnimJoint167;

HAnimJoint163ZZZ.children[1] = HAnimJoint165;

HAnimJoint161ZZZ.children[1] = HAnimJoint163;

HAnimJoint159ZZZ.children[1] = HAnimJoint161;

HAnimJoint157ZZZ.children[1] = HAnimJoint159;

HAnimJoint153ZZZ.children[1] = HAnimJoint157;

HAnimJoint149ZZZ.children[1] = HAnimJoint153;

let HAnimJoint201 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint201.DEF = "hanim_l_sternoclavicular";
HAnimJoint201.name = "l_sternoclavicular";
HAnimJoint201.center = new X3D.SFVec3f([0.082,1.4488,-0.0353]);
let HAnimSegment202 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment202.DEF = "hanim_l_clavicle";
HAnimSegment202.name = "l_clavicle";
let HAnimSite203 = browser.currentScene.createNode("HAnimSite");
HAnimSite203.DEF = "hanim_l_clavicle_pt";
HAnimSite203.name = "l_clavicle_pt";
HAnimSite203.translation = new X3D.SFVec3f([0.0271,1.4943,0.0394]);
HAnimSegment202YYY.children = new X3D.MFNode();

HAnimSegment202ZZZ.children[0] = HAnimSite203;

let HAnimSite204 = browser.currentScene.createNode("HAnimSite");
HAnimSite204.DEF = "hanim_l_acromion_pt";
HAnimSite204.name = "l_acromion_pt";
HAnimSite204.translation = new X3D.SFVec3f([0.2032,1.476,-0.049]);
HAnimSegment202ZZZ.children[1] = HAnimSite204;

let HAnimSite205 = browser.currentScene.createNode("HAnimSite");
HAnimSite205.DEF = "hanim_l_axilla_proximal_pt";
HAnimSite205.name = "l_axilla_proximal_pt";
HAnimSite205.translation = new X3D.SFVec3f([0.1777,1.4065,-0.0075]);
HAnimSegment202ZZZ.children[2] = HAnimSite205;

let HAnimSite206 = browser.currentScene.createNode("HAnimSite");
HAnimSite206.DEF = "hanim_l_axilla_distal_pt";
HAnimSite206.name = "l_axilla_distal_pt";
HAnimSite206.translation = new X3D.SFVec3f([0.1706,1.4072,-0.0875]);
HAnimSegment202ZZZ.children[3] = HAnimSite206;

HAnimJoint201YYY.children = new X3D.MFNode();

HAnimJoint201ZZZ.children[0] = HAnimSegment202;

let HAnimJoint207 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint207.DEF = "hanim_l_acromioclavicular";
HAnimJoint207.name = "l_acromioclavicular";
HAnimJoint207.center = new X3D.SFVec3f([0.0962,1.4269,-0.0424]);
let HAnimSegment208 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment208.DEF = "hanim_l_scapula";
HAnimSegment208.name = "l_scapula";
HAnimJoint207YYY.children = new X3D.MFNode();

HAnimJoint207ZZZ.children[0] = HAnimSegment208;

let HAnimJoint209 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint209.DEF = "hanim_l_shoulder";
HAnimJoint209.name = "l_shoulder";
HAnimJoint209.center = new X3D.SFVec3f([0.2029,1.4376,-0.0387]);
let HAnimSegment210 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment210.DEF = "hanim_l_upperarm";
HAnimSegment210.name = "l_upperarm";
let HAnimSite211 = browser.currentScene.createNode("HAnimSite");
HAnimSite211.DEF = "hanim_l_humeral_lateral_epicondyle_pt";
HAnimSite211.name = "l_humeral_lateral_epicondyle_pt";
HAnimSite211.translation = new X3D.SFVec3f([0.228,1.1482,-0.11]);
HAnimSegment210YYY.children = new X3D.MFNode();

HAnimSegment210ZZZ.children[0] = HAnimSite211;

HAnimJoint209YYY.children = new X3D.MFNode();

HAnimJoint209ZZZ.children[0] = HAnimSegment210;

let HAnimJoint212 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint212.DEF = "hanim_l_elbow";
HAnimJoint212.name = "l_elbow";
HAnimJoint212.center = new X3D.SFVec3f([0.2014,1.1357,-0.0682]);
let HAnimSegment213 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment213.DEF = "hanim_l_forearm";
HAnimSegment213.name = "l_forearm";
let HAnimSite214 = browser.currentScene.createNode("HAnimSite");
HAnimSite214.DEF = "hanim_l_radial_styloid_pt";
HAnimSite214.name = "l_radial_styloid_pt";
HAnimSite214.translation = new X3D.SFVec3f([0.1901,0.8645,-0.0415]);
HAnimSegment213YYY.children = new X3D.MFNode();

HAnimSegment213ZZZ.children[0] = HAnimSite214;

let HAnimSite215 = browser.currentScene.createNode("HAnimSite");
HAnimSite215.DEF = "hanim_l_olecranon_pt";
HAnimSite215.name = "l_olecranon_pt";
HAnimSite215.translation = new X3D.SFVec3f([0.1962,1.1375,-0.1123]);
HAnimSegment213ZZZ.children[1] = HAnimSite215;

let HAnimSite216 = browser.currentScene.createNode("HAnimSite");
HAnimSite216.DEF = "hanim_l_humeral_medial_epicondyle_pt";
HAnimSite216.name = "l_humeral_medial_epicondyle_pt";
HAnimSite216.translation = new X3D.SFVec3f([0.1735,1.1272,-0.1113]);
HAnimSegment213ZZZ.children[2] = HAnimSite216;

let HAnimSite217 = browser.currentScene.createNode("HAnimSite");
HAnimSite217.DEF = "hanim_l_radiale_pt";
HAnimSite217.name = "l_radiale_pt";
HAnimSite217.translation = new X3D.SFVec3f([0.2182,1.1212,-0.1167]);
HAnimSegment213ZZZ.children[3] = HAnimSite217;

HAnimJoint212YYY.children = new X3D.MFNode();

HAnimJoint212ZZZ.children[0] = HAnimSegment213;

let HAnimJoint218 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint218.DEF = "hanim_l_radiocarpal";
HAnimJoint218.name = "l_radiocarpal";
HAnimJoint218.center = new X3D.SFVec3f([0.1984,0.8663,-0.0583]);
let HAnimSegment219 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment219.DEF = "hanim_l_carpal";
HAnimSegment219.name = "l_carpal";
let HAnimSite220 = browser.currentScene.createNode("HAnimSite");
HAnimSite220.DEF = "hanim_l_metacarpal_phalanx_2_pt";
HAnimSite220.name = "l_metacarpal_phalanx_2_pt";
HAnimSite220.translation = new X3D.SFVec3f([0.2009,0.8139,-0.0237]);
HAnimSegment219YYY.children = new X3D.MFNode();

HAnimSegment219ZZZ.children[0] = HAnimSite220;

let HAnimSite221 = browser.currentScene.createNode("HAnimSite");
HAnimSite221.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite221.name = "l_ulnar_styloid_pt";
HAnimSite221.translation = new X3D.SFVec3f([0.2142,0.8529,-0.0648]);
HAnimSegment219ZZZ.children[1] = HAnimSite221;

let HAnimSite222 = browser.currentScene.createNode("HAnimSite");
HAnimSite222.DEF = "hanim_l_metacarpal_phalanx_5_pt";
HAnimSite222.name = "l_metacarpal_phalanx_5_pt";
HAnimSite222.translation = new X3D.SFVec3f([0.1929,0.786,-0.1122]);
HAnimSegment219ZZZ.children[2] = HAnimSite222;

let HAnimSite223 = browser.currentScene.createNode("HAnimSite");
HAnimSite223.DEF = "hanim_l_hand_front_view";
HAnimSite223.name = "l_hand_front_view";
HAnimSite223.translation = new X3D.SFVec3f([0.3,0.75,0.45]);
let Viewpoint224 = browser.currentScene.createNode("Viewpoint");
Viewpoint224.DEF = "hanim_l_hand_front_viewpoint";
Viewpoint224.description = "left hand front";
Viewpoint224.position = new X3D.SFVec3f([0,0,0]);
Viewpoint224.centerOfRotation = new X3D.SFVec3f([0,0.7,0]);
HAnimSite223YYY.children = new X3D.MFNode();

HAnimSite223ZZZ.children[0] = Viewpoint224;

HAnimSegment219ZZZ.children[3] = HAnimSite223;

HAnimJoint218YYY.children = new X3D.MFNode();

HAnimJoint218ZZZ.children[0] = HAnimSegment219;

let HAnimJoint225 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint225.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint225.name = "l_carpometacarpal_1";
HAnimJoint225.center = new X3D.SFVec3f([0.1924,0.8472,-0.0534]);
let HAnimSegment226 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment226.DEF = "hanim_l_metacarpal_1";
HAnimSegment226.name = "l_metacarpal_1";
HAnimJoint225YYY.children = new X3D.MFNode();

HAnimJoint225ZZZ.children[0] = HAnimSegment226;

let HAnimJoint227 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint227.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint227.name = "l_metacarpophalangeal_1";
HAnimJoint227.center = new X3D.SFVec3f([0.1951,0.8226,0.0246]);
let HAnimSegment228 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment228.DEF = "hanim_l_carpal_proximal_phalanx_1";
HAnimSegment228.name = "l_carpal_proximal_phalanx_1";
HAnimJoint227YYY.children = new X3D.MFNode();

HAnimJoint227ZZZ.children[0] = HAnimSegment228;

let HAnimJoint229 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint229.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint229.name = "l_carpal_interphalangeal_1";
HAnimJoint229.center = new X3D.SFVec3f([0.1955,0.8159,0.0464]);
let HAnimSegment230 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment230.DEF = "hanim_l_carpal_distal_phalanx_1";
HAnimSegment230.name = "l_carpal_distal_phalanx_1";
let HAnimSite231 = browser.currentScene.createNode("HAnimSite");
HAnimSite231.DEF = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimSite231.name = "l_carpal_distal_phalanx_1_tip";
HAnimSite231.translation = new X3D.SFVec3f([0.1982,0.8061,0.0759]);
HAnimSegment230YYY.children = new X3D.MFNode();

HAnimSegment230ZZZ.children[0] = HAnimSite231;

HAnimJoint229YYY.children = new X3D.MFNode();

HAnimJoint229ZZZ.children[0] = HAnimSegment230;

HAnimJoint227ZZZ.children[1] = HAnimJoint229;

HAnimJoint225ZZZ.children[1] = HAnimJoint227;

HAnimJoint218ZZZ.children[1] = HAnimJoint225;

let HAnimJoint232 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint232.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint232.name = "l_carpometacarpal_2";
HAnimJoint232.center = new X3D.SFVec3f([0.1983,0.8024,-0.028]);
let HAnimSegment233 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment233.DEF = "hanim_l_metacarpal_2";
HAnimSegment233.name = "l_metacarpal_2";
HAnimJoint232YYY.children = new X3D.MFNode();

HAnimJoint232ZZZ.children[0] = HAnimSegment233;

let HAnimJoint234 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint234.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint234.name = "l_metacarpophalangeal_2";
HAnimJoint234.center = new X3D.SFVec3f([0.1983,0.7815,-0.028]);
let HAnimSegment235 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment235.DEF = "hanim_l_carpal_proximal_phalanx_2";
HAnimSegment235.name = "l_carpal_proximal_phalanx_2";
HAnimJoint234YYY.children = new X3D.MFNode();

HAnimJoint234ZZZ.children[0] = HAnimSegment235;

let HAnimJoint236 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint236.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint236.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint236.center = new X3D.SFVec3f([0.2017,0.7363,-0.0248]);
let HAnimSegment237 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment237.DEF = "hanim_l_carpal_middle_phalanx_2";
HAnimSegment237.name = "l_carpal_middle_phalanx_2";
HAnimJoint236YYY.children = new X3D.MFNode();

HAnimJoint236ZZZ.children[0] = HAnimSegment237;

let HAnimJoint238 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint238.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint238.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint238.center = new X3D.SFVec3f([0.2028,0.7139,-0.0236]);
let HAnimSegment239 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment239.DEF = "hanim_l_carpal_distal_phalanx_2";
HAnimSegment239.name = "l_carpal_distal_phalanx_2";
let HAnimSite240 = browser.currentScene.createNode("HAnimSite");
HAnimSite240.DEF = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimSite240.name = "l_carpal_distal_phalanx_2_tip";
HAnimSite240.translation = new X3D.SFVec3f([0.2089,0.6858,-0.0245]);
HAnimSegment239YYY.children = new X3D.MFNode();

HAnimSegment239ZZZ.children[0] = HAnimSite240;

let HAnimSite241 = browser.currentScene.createNode("HAnimSite");
HAnimSite241.DEF = "hanim_l_dactylion_pt";
HAnimSite241.name = "l_dactylion_pt";
HAnimSite241.translation = new X3D.SFVec3f([0.2056,0.6743,-0.0482]);
HAnimSegment239ZZZ.children[1] = HAnimSite241;

HAnimJoint238YYY.children = new X3D.MFNode();

HAnimJoint238ZZZ.children[0] = HAnimSegment239;

HAnimJoint236ZZZ.children[1] = HAnimJoint238;

HAnimJoint234ZZZ.children[1] = HAnimJoint236;

HAnimJoint232ZZZ.children[1] = HAnimJoint234;

HAnimJoint218ZZZ.children[2] = HAnimJoint232;

let HAnimJoint242 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint242.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint242.name = "l_carpometacarpal_3";
HAnimJoint242.center = new X3D.SFVec3f([0.1987,0.8029,-0.053]);
let HAnimSegment243 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment243.DEF = "hanim_l_metacarpal_3";
HAnimSegment243.name = "l_metacarpal_3";
HAnimJoint242YYY.children = new X3D.MFNode();

HAnimJoint242ZZZ.children[0] = HAnimSegment243;

let HAnimJoint244 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint244.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint244.name = "l_metacarpophalangeal_3";
HAnimJoint244.center = new X3D.SFVec3f([0.1987,0.7818,-0.053]);
let HAnimSegment245 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment245.DEF = "hanim_l_carpal_proximal_phalanx_3";
HAnimSegment245.name = "l_carpal_proximal_phalanx_3";
HAnimJoint244YYY.children = new X3D.MFNode();

HAnimJoint244ZZZ.children[0] = HAnimSegment245;

let HAnimJoint246 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint246.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint246.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint246.center = new X3D.SFVec3f([0.2013,0.7273,-0.0503]);
let HAnimSegment247 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment247.DEF = "hanim_l_carpal_middle_phalanx_3";
HAnimSegment247.name = "l_carpal_middle_phalanx_3";
HAnimJoint246YYY.children = new X3D.MFNode();

HAnimJoint246ZZZ.children[0] = HAnimSegment247;

let HAnimJoint248 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint248.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint248.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint248.center = new X3D.SFVec3f([0.2026,0.7011,-0.0494]);
let HAnimSegment249 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment249.DEF = "hanim_l_carpal_distal_phalanx_3";
HAnimSegment249.name = "l_carpal_distal_phalanx_3";
let HAnimSite250 = browser.currentScene.createNode("HAnimSite");
HAnimSite250.DEF = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimSite250.name = "l_carpal_distal_phalanx_3_tip";
HAnimSite250.translation = new X3D.SFVec3f([0.208,0.6731,-0.0491]);
HAnimSegment249YYY.children = new X3D.MFNode();

HAnimSegment249ZZZ.children[0] = HAnimSite250;

HAnimJoint248YYY.children = new X3D.MFNode();

HAnimJoint248ZZZ.children[0] = HAnimSegment249;

HAnimJoint246ZZZ.children[1] = HAnimJoint248;

HAnimJoint244ZZZ.children[1] = HAnimJoint246;

HAnimJoint242ZZZ.children[1] = HAnimJoint244;

HAnimJoint218ZZZ.children[3] = HAnimJoint242;

let HAnimJoint251 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint251.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint251.name = "l_carpometacarpal_4";
HAnimJoint251.center = new X3D.SFVec3f([0.1956,0.8019,-0.0794]);
let HAnimSegment252 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment252.DEF = "hanim_l_metacarpal_4";
HAnimSegment252.name = "l_metacarpal_4";
HAnimJoint251YYY.children = new X3D.MFNode();

HAnimJoint251ZZZ.children[0] = HAnimSegment252;

let HAnimJoint253 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint253.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint253.name = "l_metacarpophalangeal_4";
HAnimJoint253.center = new X3D.SFVec3f([0.1956,0.7815,-0.0794]);
let HAnimSegment254 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment254.DEF = "hanim_l_carpal_proximal_phalanx_4";
HAnimSegment254.name = "l_carpal_proximal_phalanx_4";
HAnimJoint253YYY.children = new X3D.MFNode();

HAnimJoint253ZZZ.children[0] = HAnimSegment254;

let HAnimJoint255 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint255.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint255.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint255.center = new X3D.SFVec3f([0.1973,0.7287,-0.0777]);
let HAnimSegment256 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment256.DEF = "hanim_l_carpal_middle_phalanx_4";
HAnimSegment256.name = "l_carpal_middle_phalanx_4";
HAnimJoint255YYY.children = new X3D.MFNode();

HAnimJoint255ZZZ.children[0] = HAnimSegment256;

let HAnimJoint257 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint257.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint257.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint257.center = new X3D.SFVec3f([0.1983,0.7045,-0.0767]);
let HAnimSegment258 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment258.DEF = "hanim_l_carpal_distal_phalanx_4";
HAnimSegment258.name = "l_carpal_distal_phalanx_4";
let HAnimSite259 = browser.currentScene.createNode("HAnimSite");
HAnimSite259.DEF = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimSite259.name = "l_carpal_distal_phalanx_4_tip";
HAnimSite259.translation = new X3D.SFVec3f([0.2035,0.675,-0.0756]);
HAnimSegment258YYY.children = new X3D.MFNode();

HAnimSegment258ZZZ.children[0] = HAnimSite259;

HAnimJoint257YYY.children = new X3D.MFNode();

HAnimJoint257ZZZ.children[0] = HAnimSegment258;

HAnimJoint255ZZZ.children[1] = HAnimJoint257;

HAnimJoint253ZZZ.children[1] = HAnimJoint255;

HAnimJoint251ZZZ.children[1] = HAnimJoint253;

HAnimJoint218ZZZ.children[4] = HAnimJoint251;

let HAnimJoint260 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint260.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint260.name = "l_carpometacarpal_5";
HAnimJoint260.center = new X3D.SFVec3f([0.1925,0.8066,-0.1036]);
let HAnimSegment261 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment261.DEF = "hanim_l_metacarpal_5";
HAnimSegment261.name = "l_metacarpal_5";
HAnimJoint260YYY.children = new X3D.MFNode();

HAnimJoint260ZZZ.children[0] = HAnimSegment261;

let HAnimJoint262 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint262.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint262.name = "l_metacarpophalangeal_5";
HAnimJoint262.center = new X3D.SFVec3f([0.1925,0.7866,-0.1036]);
let HAnimSegment263 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment263.DEF = "hanim_l_carpal_proximal_phalanx_5";
HAnimSegment263.name = "l_carpal_proximal_phalanx_5";
HAnimJoint262YYY.children = new X3D.MFNode();

HAnimJoint262ZZZ.children[0] = HAnimSegment263;

let HAnimJoint264 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint264.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint264.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint264.center = new X3D.SFVec3f([0.1938,0.7452,-0.1024]);
let HAnimSegment265 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment265.DEF = "hanim_l_carpal_middle_phalanx_5";
HAnimSegment265.name = "l_carpal_middle_phalanx_5";
HAnimJoint264YYY.children = new X3D.MFNode();

HAnimJoint264ZZZ.children[0] = HAnimSegment265;

let HAnimJoint266 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint266.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint266.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint266.center = new X3D.SFVec3f([0.1948,0.7277,-0.1017]);
let HAnimSegment267 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment267.DEF = "hanim_l_carpal_distal_phalanx_5";
HAnimSegment267.name = "l_carpal_distal_phalanx_5";
let HAnimSite268 = browser.currentScene.createNode("HAnimSite");
HAnimSite268.DEF = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimSite268.name = "l_carpal_distal_phalanx_5_tip";
HAnimSite268.translation = new X3D.SFVec3f([0.2014,0.7009,-0.1012]);
HAnimSegment267YYY.children = new X3D.MFNode();

HAnimSegment267ZZZ.children[0] = HAnimSite268;

HAnimJoint266YYY.children = new X3D.MFNode();

HAnimJoint266ZZZ.children[0] = HAnimSegment267;

HAnimJoint264ZZZ.children[1] = HAnimJoint266;

HAnimJoint262ZZZ.children[1] = HAnimJoint264;

HAnimJoint260ZZZ.children[1] = HAnimJoint262;

HAnimJoint218ZZZ.children[5] = HAnimJoint260;

HAnimJoint212ZZZ.children[1] = HAnimJoint218;

HAnimJoint209ZZZ.children[1] = HAnimJoint212;

HAnimJoint207ZZZ.children[1] = HAnimJoint209;

HAnimJoint201ZZZ.children[1] = HAnimJoint207;

HAnimJoint149ZZZ.children[2] = HAnimJoint201;

let HAnimJoint269 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint269.DEF = "hanim_r_sternoclavicular";
HAnimJoint269.name = "r_sternoclavicular";
HAnimJoint269.center = new X3D.SFVec3f([-0.082,1.4488,-0.0353]);
let HAnimSegment270 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment270.DEF = "hanim_r_clavicle";
HAnimSegment270.name = "r_clavicle";
let HAnimSite271 = browser.currentScene.createNode("HAnimSite");
HAnimSite271.DEF = "hanim_r_clavicle_pt";
HAnimSite271.name = "r_clavicle_pt";
HAnimSite271.translation = new X3D.SFVec3f([-0.0115,1.4943,0.04]);
HAnimSegment270YYY.children = new X3D.MFNode();

HAnimSegment270ZZZ.children[0] = HAnimSite271;

let HAnimSite272 = browser.currentScene.createNode("HAnimSite");
HAnimSite272.DEF = "hanim_r_acromion_pt";
HAnimSite272.name = "r_acromion_pt";
HAnimSite272.translation = new X3D.SFVec3f([-0.1905,1.4791,-0.0431]);
HAnimSegment270ZZZ.children[1] = HAnimSite272;

let HAnimSite273 = browser.currentScene.createNode("HAnimSite");
HAnimSite273.DEF = "hanim_r_axilla_proximal_pt";
HAnimSite273.name = "r_axilla_proximal_pt";
HAnimSite273.translation = new X3D.SFVec3f([-0.1626,1.4072,-0.0031]);
HAnimSegment270ZZZ.children[2] = HAnimSite273;

let HAnimSite274 = browser.currentScene.createNode("HAnimSite");
HAnimSite274.DEF = "hanim_r_axilla_distal_pt";
HAnimSite274.name = "r_axilla_distal_pt";
HAnimSite274.translation = new X3D.SFVec3f([-0.1603,1.4098,-0.0826]);
HAnimSegment270ZZZ.children[3] = HAnimSite274;

HAnimJoint269YYY.children = new X3D.MFNode();

HAnimJoint269ZZZ.children[0] = HAnimSegment270;

let HAnimJoint275 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint275.DEF = "hanim_r_acromioclavicular";
HAnimJoint275.name = "r_acromioclavicular";
HAnimJoint275.center = new X3D.SFVec3f([-0.0962,1.4269,-0.0424]);
let HAnimSegment276 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment276.DEF = "hanim_r_scapula";
HAnimSegment276.name = "r_scapula";
HAnimJoint275YYY.children = new X3D.MFNode();

HAnimJoint275ZZZ.children[0] = HAnimSegment276;

let HAnimJoint277 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint277.DEF = "hanim_r_shoulder";
HAnimJoint277.name = "r_shoulder";
HAnimJoint277.center = new X3D.SFVec3f([-0.2029,1.4376,-0.0387]);
let HAnimSegment278 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment278.DEF = "hanim_r_upperarm";
HAnimSegment278.name = "r_upperarm";
let HAnimSite279 = browser.currentScene.createNode("HAnimSite");
HAnimSite279.DEF = "hanim_r_humeral_lateral_epicondyle_pt";
HAnimSite279.name = "r_humeral_lateral_epicondyle_pt";
HAnimSite279.translation = new X3D.SFVec3f([-0.2224,1.1517,-0.1033]);
HAnimSegment278YYY.children = new X3D.MFNode();

HAnimSegment278ZZZ.children[0] = HAnimSite279;

HAnimJoint277YYY.children = new X3D.MFNode();

HAnimJoint277ZZZ.children[0] = HAnimSegment278;

let HAnimJoint280 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint280.DEF = "hanim_r_elbow";
HAnimJoint280.name = "r_elbow";
HAnimJoint280.center = new X3D.SFVec3f([-0.2014,1.1357,-0.0682]);
let HAnimSegment281 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment281.DEF = "hanim_r_forearm";
HAnimSegment281.name = "r_forearm";
let HAnimSite282 = browser.currentScene.createNode("HAnimSite");
HAnimSite282.DEF = "hanim_r_radial_styloid_pt";
HAnimSite282.name = "r_radial_styloid_pt";
HAnimSite282.translation = new X3D.SFVec3f([-0.1884,0.8676,-0.036]);
HAnimSegment281YYY.children = new X3D.MFNode();

HAnimSegment281ZZZ.children[0] = HAnimSite282;

let HAnimSite283 = browser.currentScene.createNode("HAnimSite");
HAnimSite283.DEF = "hanim_r_olecranon_pt";
HAnimSite283.name = "r_olecranon_pt";
HAnimSite283.translation = new X3D.SFVec3f([-0.1907,1.1405,-0.1065]);
HAnimSegment281ZZZ.children[1] = HAnimSite283;

let HAnimSite284 = browser.currentScene.createNode("HAnimSite");
HAnimSite284.DEF = "hanim_r_humeral_medial_epicondyle_pt";
HAnimSite284.name = "r_humeral_medial_epicondyle_pt";
HAnimSite284.translation = new X3D.SFVec3f([-0.168,1.1298,-0.1062]);
HAnimSegment281ZZZ.children[2] = HAnimSite284;

let HAnimSite285 = browser.currentScene.createNode("HAnimSite");
HAnimSite285.DEF = "hanim_r_radiale_pt";
HAnimSite285.name = "r_radiale_pt";
HAnimSite285.translation = new X3D.SFVec3f([-0.213,1.1305,-0.1091]);
HAnimSegment281ZZZ.children[3] = HAnimSite285;

HAnimJoint280YYY.children = new X3D.MFNode();

HAnimJoint280ZZZ.children[0] = HAnimSegment281;

let HAnimJoint286 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint286.DEF = "hanim_r_radiocarpal";
HAnimJoint286.name = "r_radiocarpal";
HAnimJoint286.center = new X3D.SFVec3f([-0.1984,0.8663,-0.0583]);
let HAnimSegment287 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment287.DEF = "hanim_r_carpal";
HAnimSegment287.name = "r_carpal";
let HAnimSite288 = browser.currentScene.createNode("HAnimSite");
HAnimSite288.DEF = "hanim_r_metacarpal_phalanx_2_pt";
HAnimSite288.name = "r_metacarpal_phalanx_2_pt";
HAnimSite288.translation = new X3D.SFVec3f([-0.1977,0.8169,-0.0177]);
HAnimSegment287YYY.children = new X3D.MFNode();

HAnimSegment287ZZZ.children[0] = HAnimSite288;

let HAnimSite289 = browser.currentScene.createNode("HAnimSite");
HAnimSite289.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite289.name = "r_ulnar_styloid_pt";
HAnimSite289.translation = new X3D.SFVec3f([-0.2117,0.8562,-0.0584]);
HAnimSegment287ZZZ.children[1] = HAnimSite289;

let HAnimSite290 = browser.currentScene.createNode("HAnimSite");
HAnimSite290.DEF = "hanim_r_metacarpal_phalanx_5_pt";
HAnimSite290.name = "r_metacarpal_phalanx_5_pt";
HAnimSite290.translation = new X3D.SFVec3f([-0.1929,0.789,-0.1064]);
HAnimSegment287ZZZ.children[2] = HAnimSite290;

let HAnimSite291 = browser.currentScene.createNode("HAnimSite");
HAnimSite291.DEF = "hanim_r_hand_front_view";
HAnimSite291.name = "r_hand_front_view";
HAnimSite291.translation = new X3D.SFVec3f([-0.3,0.75,0.45]);
let Viewpoint292 = browser.currentScene.createNode("Viewpoint");
Viewpoint292.DEF = "hanim_r_hand_front_viewpoint";
Viewpoint292.description = "right hand front";
Viewpoint292.position = new X3D.SFVec3f([0,0,0]);
Viewpoint292.centerOfRotation = new X3D.SFVec3f([0,0.7,0]);
HAnimSite291YYY.children = new X3D.MFNode();

HAnimSite291ZZZ.children[0] = Viewpoint292;

HAnimSegment287ZZZ.children[3] = HAnimSite291;

HAnimJoint286YYY.children = new X3D.MFNode();

HAnimJoint286ZZZ.children[0] = HAnimSegment287;

let HAnimJoint293 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint293.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint293.name = "r_carpometacarpal_1";
HAnimJoint293.center = new X3D.SFVec3f([-0.1924,0.8472,-0.0534]);
let HAnimSegment294 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment294.DEF = "hanim_r_metacarpal_1";
HAnimSegment294.name = "r_metacarpal_1";
HAnimJoint293YYY.children = new X3D.MFNode();

HAnimJoint293ZZZ.children[0] = HAnimSegment294;

let HAnimJoint295 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint295.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint295.name = "r_metacarpophalangeal_1";
HAnimJoint295.center = new X3D.SFVec3f([-0.1951,0.8226,0.0246]);
let HAnimSegment296 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment296.DEF = "hanim_r_carpal_proximal_phalanx_1";
HAnimSegment296.name = "r_carpal_proximal_phalanx_1";
HAnimJoint295YYY.children = new X3D.MFNode();

HAnimJoint295ZZZ.children[0] = HAnimSegment296;

let HAnimJoint297 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint297.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint297.name = "r_carpal_interphalangeal_1";
HAnimJoint297.center = new X3D.SFVec3f([-0.1955,0.8159,0.0464]);
let HAnimSegment298 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment298.DEF = "hanim_r_carpal_distal_phalanx_1";
HAnimSegment298.name = "r_carpal_distal_phalanx_1";
let HAnimSite299 = browser.currentScene.createNode("HAnimSite");
HAnimSite299.DEF = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimSite299.name = "r_carpal_distal_phalanx_1_tip";
HAnimSite299.translation = new X3D.SFVec3f([-0.1869,0.809,0.082]);
HAnimSegment298YYY.children = new X3D.MFNode();

HAnimSegment298ZZZ.children[0] = HAnimSite299;

HAnimJoint297YYY.children = new X3D.MFNode();

HAnimJoint297ZZZ.children[0] = HAnimSegment298;

HAnimJoint295ZZZ.children[1] = HAnimJoint297;

HAnimJoint293ZZZ.children[1] = HAnimJoint295;

HAnimJoint286ZZZ.children[1] = HAnimJoint293;

let HAnimJoint300 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint300.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint300.name = "r_carpometacarpal_2";
HAnimJoint300.center = new X3D.SFVec3f([-0.1983,0.8024,-0.028]);
let HAnimSegment301 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment301.DEF = "hanim_r_metacarpal_2";
HAnimSegment301.name = "r_metacarpal_2";
HAnimJoint300YYY.children = new X3D.MFNode();

HAnimJoint300ZZZ.children[0] = HAnimSegment301;

let HAnimJoint302 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint302.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint302.name = "r_metacarpophalangeal_2";
HAnimJoint302.center = new X3D.SFVec3f([-0.1983,0.7815,-0.028]);
let HAnimSegment303 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment303.DEF = "hanim_r_carpal_proximal_phalanx_2";
HAnimSegment303.name = "r_carpal_proximal_phalanx_2";
HAnimJoint302YYY.children = new X3D.MFNode();

HAnimJoint302ZZZ.children[0] = HAnimSegment303;

let HAnimJoint304 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint304.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint304.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint304.center = new X3D.SFVec3f([-0.2017,0.7363,-0.0248]);
let HAnimSegment305 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment305.DEF = "hanim_r_carpal_middle_phalanx_2";
HAnimSegment305.name = "r_carpal_middle_phalanx_2";
HAnimJoint304YYY.children = new X3D.MFNode();

HAnimJoint304ZZZ.children[0] = HAnimSegment305;

let HAnimJoint306 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint306.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint306.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint306.center = new X3D.SFVec3f([-0.2028,0.7139,-0.0236]);
let HAnimSegment307 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment307.DEF = "hanim_r_carpal_distal_phalanx_2";
HAnimSegment307.name = "r_carpal_distal_phalanx_2";
let HAnimSite308 = browser.currentScene.createNode("HAnimSite");
HAnimSite308.DEF = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimSite308.name = "r_carpal_distal_phalanx_2_tip";
HAnimSite308.translation = new X3D.SFVec3f([-0.198,0.6883,-0.018]);
HAnimSegment307YYY.children = new X3D.MFNode();

HAnimSegment307ZZZ.children[0] = HAnimSite308;

let HAnimSite309 = browser.currentScene.createNode("HAnimSite");
HAnimSite309.DEF = "hanim_r_dactylion_pt";
HAnimSite309.name = "r_dactylion_pt";
HAnimSite309.translation = new X3D.SFVec3f([-0.1941,0.6772,-0.0423]);
HAnimSegment307ZZZ.children[1] = HAnimSite309;

HAnimJoint306YYY.children = new X3D.MFNode();

HAnimJoint306ZZZ.children[0] = HAnimSegment307;

HAnimJoint304ZZZ.children[1] = HAnimJoint306;

HAnimJoint302ZZZ.children[1] = HAnimJoint304;

HAnimJoint300ZZZ.children[1] = HAnimJoint302;

HAnimJoint286ZZZ.children[2] = HAnimJoint300;

let HAnimJoint310 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint310.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint310.name = "r_carpometacarpal_3";
HAnimJoint310.center = new X3D.SFVec3f([-0.1987,0.8029,-0.053]);
let HAnimSegment311 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment311.DEF = "hanim_r_metacarpal_3";
HAnimSegment311.name = "r_metacarpal_3";
HAnimJoint310YYY.children = new X3D.MFNode();

HAnimJoint310ZZZ.children[0] = HAnimSegment311;

let HAnimJoint312 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint312.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint312.name = "r_metacarpophalangeal_3";
HAnimJoint312.center = new X3D.SFVec3f([-0.1987,0.7818,-0.053]);
let HAnimSegment313 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment313.DEF = "hanim_r_carpal_proximal_phalanx_3";
HAnimSegment313.name = "r_carpal_proximal_phalanx_3";
HAnimJoint312YYY.children = new X3D.MFNode();

HAnimJoint312ZZZ.children[0] = HAnimSegment313;

let HAnimJoint314 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint314.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint314.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint314.center = new X3D.SFVec3f([-0.2013,0.7273,-0.0503]);
let HAnimSegment315 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment315.DEF = "hanim_r_carpal_middle_phalanx_3";
HAnimSegment315.name = "r_carpal_middle_phalanx_3";
HAnimJoint314YYY.children = new X3D.MFNode();

HAnimJoint314ZZZ.children[0] = HAnimSegment315;

let HAnimJoint316 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint316.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint316.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint316.center = new X3D.SFVec3f([-0.2026,0.7011,-0.0494]);
let HAnimSegment317 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment317.DEF = "hanim_r_carpal_distal_phalanx_3";
HAnimSegment317.name = "r_carpal_distal_phalanx_3";
let HAnimSite318 = browser.currentScene.createNode("HAnimSite");
HAnimSite318.DEF = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimSite318.name = "r_carpal_distal_phalanx_3_tip";
HAnimSite318.translation = new X3D.SFVec3f([-0.1969,0.6758,-0.0427]);
HAnimSegment317YYY.children = new X3D.MFNode();

HAnimSegment317ZZZ.children[0] = HAnimSite318;

HAnimJoint316YYY.children = new X3D.MFNode();

HAnimJoint316ZZZ.children[0] = HAnimSegment317;

HAnimJoint314ZZZ.children[1] = HAnimJoint316;

HAnimJoint312ZZZ.children[1] = HAnimJoint314;

HAnimJoint310ZZZ.children[1] = HAnimJoint312;

HAnimJoint286ZZZ.children[3] = HAnimJoint310;

let HAnimJoint319 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint319.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint319.name = "r_carpometacarpal_4";
HAnimJoint319.center = new X3D.SFVec3f([-0.1956,0.8019,-0.0794]);
let HAnimSegment320 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment320.DEF = "hanim_r_metacarpal_4";
HAnimSegment320.name = "r_metacarpal_4";
HAnimJoint319YYY.children = new X3D.MFNode();

HAnimJoint319ZZZ.children[0] = HAnimSegment320;

let HAnimJoint321 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint321.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint321.name = "r_metacarpophalangeal_4";
HAnimJoint321.center = new X3D.SFVec3f([-0.1956,0.7815,-0.0794]);
let HAnimSegment322 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment322.DEF = "hanim_r_carpal_proximal_phalanx_4";
HAnimSegment322.name = "r_carpal_proximal_phalanx_4";
HAnimJoint321YYY.children = new X3D.MFNode();

HAnimJoint321ZZZ.children[0] = HAnimSegment322;

let HAnimJoint323 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint323.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint323.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint323.center = new X3D.SFVec3f([-0.1973,0.7287,-0.0777]);
let HAnimSegment324 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment324.DEF = "hanim_r_carpal_middle_phalanx_4";
HAnimSegment324.name = "r_carpal_middle_phalanx_4";
HAnimJoint323YYY.children = new X3D.MFNode();

HAnimJoint323ZZZ.children[0] = HAnimSegment324;

let HAnimJoint325 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint325.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint325.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint325.center = new X3D.SFVec3f([-0.1983,0.7045,-0.0767]);
let HAnimSegment326 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment326.DEF = "hanim_r_carpal_distal_phalanx_4";
HAnimSegment326.name = "r_carpal_distal_phalanx_4";
let HAnimSite327 = browser.currentScene.createNode("HAnimSite");
HAnimSite327.DEF = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimSite327.name = "r_carpal_distal_phalanx_4_tip";
HAnimSite327.translation = new X3D.SFVec3f([-0.1934,0.6778,-0.0693]);
HAnimSegment326YYY.children = new X3D.MFNode();

HAnimSegment326ZZZ.children[0] = HAnimSite327;

HAnimJoint325YYY.children = new X3D.MFNode();

HAnimJoint325ZZZ.children[0] = HAnimSegment326;

HAnimJoint323ZZZ.children[1] = HAnimJoint325;

HAnimJoint321ZZZ.children[1] = HAnimJoint323;

HAnimJoint319ZZZ.children[1] = HAnimJoint321;

HAnimJoint286ZZZ.children[4] = HAnimJoint319;

let HAnimJoint328 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint328.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint328.name = "r_carpometacarpal_5";
HAnimJoint328.center = new X3D.SFVec3f([-0.1925,0.8066,-0.1036]);
let HAnimSegment329 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment329.DEF = "hanim_r_metacarpal_5";
HAnimSegment329.name = "r_metacarpal_5";
HAnimJoint328YYY.children = new X3D.MFNode();

HAnimJoint328ZZZ.children[0] = HAnimSegment329;

let HAnimJoint330 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint330.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint330.name = "r_metacarpophalangeal_5";
HAnimJoint330.center = new X3D.SFVec3f([-0.1925,0.7866,-0.1036]);
let HAnimSegment331 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment331.DEF = "hanim_r_carpal_proximal_phalanx_5";
HAnimSegment331.name = "r_carpal_proximal_phalanx_5";
HAnimJoint330YYY.children = new X3D.MFNode();

HAnimJoint330ZZZ.children[0] = HAnimSegment331;

let HAnimJoint332 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint332.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint332.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint332.center = new X3D.SFVec3f([-0.1938,0.7452,-0.1024]);
let HAnimSegment333 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment333.DEF = "hanim_r_carpal_middle_phalanx_5";
HAnimSegment333.name = "r_carpal_middle_phalanx_5";
HAnimJoint332YYY.children = new X3D.MFNode();

HAnimJoint332ZZZ.children[0] = HAnimSegment333;

let HAnimJoint334 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint334.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint334.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint334.center = new X3D.SFVec3f([-0.1948,0.7277,-0.1017]);
let HAnimSegment335 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment335.DEF = "hanim_r_carpal_distal_phalanx_5";
HAnimSegment335.name = "r_carpal_distal_phalanx_5";
let HAnimSite336 = browser.currentScene.createNode("HAnimSite");
HAnimSite336.DEF = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimSite336.name = "r_carpal_distal_phalanx_5_tip";
HAnimSite336.translation = new X3D.SFVec3f([-0.1938,0.7035,-0.0949]);
HAnimSegment335YYY.children = new X3D.MFNode();

HAnimSegment335ZZZ.children[0] = HAnimSite336;

HAnimJoint334YYY.children = new X3D.MFNode();

HAnimJoint334ZZZ.children[0] = HAnimSegment335;

HAnimJoint332ZZZ.children[1] = HAnimJoint334;

HAnimJoint330ZZZ.children[1] = HAnimJoint332;

HAnimJoint328ZZZ.children[1] = HAnimJoint330;

HAnimJoint286ZZZ.children[5] = HAnimJoint328;

HAnimJoint280ZZZ.children[1] = HAnimJoint286;

HAnimJoint277ZZZ.children[1] = HAnimJoint280;

HAnimJoint275ZZZ.children[1] = HAnimJoint277;

HAnimJoint269ZZZ.children[1] = HAnimJoint275;

HAnimJoint149ZZZ.children[3] = HAnimJoint269;

HAnimJoint147ZZZ.children[1] = HAnimJoint149;

HAnimJoint145ZZZ.children[1] = HAnimJoint147;

HAnimJoint143ZZZ.children[1] = HAnimJoint145;

HAnimJoint141ZZZ.children[1] = HAnimJoint143;

HAnimJoint139ZZZ.children[1] = HAnimJoint141;

HAnimJoint137ZZZ.children[1] = HAnimJoint139;

HAnimJoint135ZZZ.children[1] = HAnimJoint137;

HAnimJoint131ZZZ.children[1] = HAnimJoint135;

HAnimJoint128ZZZ.children[1] = HAnimJoint131;

HAnimJoint126ZZZ.children[1] = HAnimJoint128;

HAnimJoint124ZZZ.children[1] = HAnimJoint126;

HAnimJoint122ZZZ.children[1] = HAnimJoint124;

HAnimJoint117ZZZ.children[1] = HAnimJoint122;

HAnimJoint115ZZZ.children[1] = HAnimJoint117;

HAnimJoint113ZZZ.children[1] = HAnimJoint115;

HAnimJoint109ZZZ.children[1] = HAnimJoint113;

HAnimJoint50ZZZ.children[2] = HAnimJoint109;

joints[1] = HAnimJoint50;

let HAnimJoint337 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint337.USE = "hanim_humanoid_root";
joints[2] = HAnimJoint337;

let HAnimJoint338 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint338.USE = "hanim_sacroiliac";
joints[3] = HAnimJoint338;

let HAnimJoint339 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint339.USE = "hanim_vl5";
joints[4] = HAnimJoint339;

let HAnimJoint340 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint340.USE = "hanim_vl4";
joints[5] = HAnimJoint340;

let HAnimJoint341 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint341.USE = "hanim_vl3";
joints[6] = HAnimJoint341;

let HAnimJoint342 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint342.USE = "hanim_vl2";
joints[7] = HAnimJoint342;

let HAnimJoint343 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint343.USE = "hanim_vl1";
joints[8] = HAnimJoint343;

let HAnimJoint344 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint344.USE = "hanim_vt12";
joints[9] = HAnimJoint344;

let HAnimJoint345 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint345.USE = "hanim_vt11";
joints[10] = HAnimJoint345;

let HAnimJoint346 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint346.USE = "hanim_vt10";
joints[11] = HAnimJoint346;

let HAnimJoint347 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint347.USE = "hanim_vt9";
joints[12] = HAnimJoint347;

let HAnimJoint348 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint348.USE = "hanim_vt8";
joints[13] = HAnimJoint348;

let HAnimJoint349 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint349.USE = "hanim_vt7";
joints[14] = HAnimJoint349;

let HAnimJoint350 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint350.USE = "hanim_vt6";
joints[15] = HAnimJoint350;

let HAnimJoint351 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint351.USE = "hanim_vt5";
joints[16] = HAnimJoint351;

let HAnimJoint352 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint352.USE = "hanim_vt4";
joints[17] = HAnimJoint352;

let HAnimJoint353 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint353.USE = "hanim_vt3";
joints[18] = HAnimJoint353;

let HAnimJoint354 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint354.USE = "hanim_vt2";
joints[19] = HAnimJoint354;

let HAnimJoint355 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint355.USE = "hanim_vt1";
joints[20] = HAnimJoint355;

let HAnimJoint356 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint356.USE = "hanim_vc7";
joints[21] = HAnimJoint356;

let HAnimJoint357 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint357.USE = "hanim_vc6";
joints[22] = HAnimJoint357;

let HAnimJoint358 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint358.USE = "hanim_vc5";
joints[23] = HAnimJoint358;

let HAnimJoint359 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint359.USE = "hanim_vc4";
joints[24] = HAnimJoint359;

let HAnimJoint360 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint360.USE = "hanim_vc3";
joints[25] = HAnimJoint360;

let HAnimJoint361 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint361.USE = "hanim_vc2";
joints[26] = HAnimJoint361;

let HAnimJoint362 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint362.USE = "hanim_vc1";
joints[27] = HAnimJoint362;

let HAnimJoint363 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint363.USE = "hanim_skullbase";
joints[28] = HAnimJoint363;

let HAnimJoint364 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint364.USE = "hanim_temporomandibular";
joints[29] = HAnimJoint364;

let HAnimJoint365 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint365.USE = "hanim_l_acromioclavicular";
joints[30] = HAnimJoint365;

let HAnimJoint366 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint366.USE = "hanim_r_acromioclavicular";
joints[31] = HAnimJoint366;

let HAnimJoint367 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint367.USE = "hanim_l_carpal_distal_interphalangeal_2";
joints[32] = HAnimJoint367;

let HAnimJoint368 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint368.USE = "hanim_r_carpal_distal_interphalangeal_2";
joints[33] = HAnimJoint368;

let HAnimJoint369 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint369.USE = "hanim_l_carpal_distal_interphalangeal_3";
joints[34] = HAnimJoint369;

let HAnimJoint370 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint370.USE = "hanim_r_carpal_distal_interphalangeal_3";
joints[35] = HAnimJoint370;

let HAnimJoint371 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint371.USE = "hanim_l_carpal_distal_interphalangeal_4";
joints[36] = HAnimJoint371;

let HAnimJoint372 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint372.USE = "hanim_r_carpal_distal_interphalangeal_4";
joints[37] = HAnimJoint372;

let HAnimJoint373 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint373.USE = "hanim_l_carpal_distal_interphalangeal_5";
joints[38] = HAnimJoint373;

let HAnimJoint374 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint374.USE = "hanim_r_carpal_distal_interphalangeal_5";
joints[39] = HAnimJoint374;

let HAnimJoint375 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint375.USE = "hanim_l_carpal_interphalangeal_1";
joints[40] = HAnimJoint375;

let HAnimJoint376 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint376.USE = "hanim_r_carpal_interphalangeal_1";
joints[41] = HAnimJoint376;

let HAnimJoint377 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint377.USE = "hanim_l_carpal_proximal_interphalangeal_2";
joints[42] = HAnimJoint377;

let HAnimJoint378 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint378.USE = "hanim_r_carpal_proximal_interphalangeal_2";
joints[43] = HAnimJoint378;

let HAnimJoint379 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint379.USE = "hanim_l_carpal_proximal_interphalangeal_3";
joints[44] = HAnimJoint379;

let HAnimJoint380 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint380.USE = "hanim_r_carpal_proximal_interphalangeal_3";
joints[45] = HAnimJoint380;

let HAnimJoint381 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint381.USE = "hanim_l_carpal_proximal_interphalangeal_4";
joints[46] = HAnimJoint381;

let HAnimJoint382 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint382.USE = "hanim_r_carpal_proximal_interphalangeal_4";
joints[47] = HAnimJoint382;

let HAnimJoint383 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint383.USE = "hanim_l_carpal_proximal_interphalangeal_5";
joints[48] = HAnimJoint383;

let HAnimJoint384 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint384.USE = "hanim_r_carpal_proximal_interphalangeal_5";
joints[49] = HAnimJoint384;

let HAnimJoint385 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint385.USE = "hanim_l_carpometacarpal_1";
joints[50] = HAnimJoint385;

let HAnimJoint386 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint386.USE = "hanim_r_carpometacarpal_1";
joints[51] = HAnimJoint386;

let HAnimJoint387 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint387.USE = "hanim_l_carpometacarpal_2";
joints[52] = HAnimJoint387;

let HAnimJoint388 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint388.USE = "hanim_r_carpometacarpal_2";
joints[53] = HAnimJoint388;

let HAnimJoint389 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint389.USE = "hanim_l_carpometacarpal_3";
joints[54] = HAnimJoint389;

let HAnimJoint390 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint390.USE = "hanim_r_carpometacarpal_3";
joints[55] = HAnimJoint390;

let HAnimJoint391 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint391.USE = "hanim_l_carpometacarpal_4";
joints[56] = HAnimJoint391;

let HAnimJoint392 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint392.USE = "hanim_r_carpometacarpal_4";
joints[57] = HAnimJoint392;

let HAnimJoint393 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint393.USE = "hanim_l_carpometacarpal_5";
joints[58] = HAnimJoint393;

let HAnimJoint394 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint394.USE = "hanim_r_carpometacarpal_5";
joints[59] = HAnimJoint394;

let HAnimJoint395 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint395.USE = "hanim_l_elbow";
joints[60] = HAnimJoint395;

let HAnimJoint396 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint396.USE = "hanim_r_elbow";
joints[61] = HAnimJoint396;

let HAnimJoint397 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint397.USE = "hanim_l_eyeball_joint";
joints[62] = HAnimJoint397;

let HAnimJoint398 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint398.USE = "hanim_r_eyeball_joint";
joints[63] = HAnimJoint398;

let HAnimJoint399 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint399.USE = "hanim_l_eyebrow_joint";
joints[64] = HAnimJoint399;

let HAnimJoint400 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint400.USE = "hanim_r_eyebrow_joint";
joints[65] = HAnimJoint400;

let HAnimJoint401 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint401.USE = "hanim_l_eyelid_joint";
joints[66] = HAnimJoint401;

let HAnimJoint402 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint402.USE = "hanim_r_eyelid_joint";
joints[67] = HAnimJoint402;

let HAnimJoint403 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint403.USE = "hanim_l_hip";
joints[68] = HAnimJoint403;

let HAnimJoint404 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint404.USE = "hanim_r_hip";
joints[69] = HAnimJoint404;

let HAnimJoint405 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint405.USE = "hanim_l_knee";
joints[70] = HAnimJoint405;

let HAnimJoint406 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint406.USE = "hanim_r_knee";
joints[71] = HAnimJoint406;

let HAnimJoint407 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint407.USE = "hanim_l_metacarpophalangeal_1";
joints[72] = HAnimJoint407;

let HAnimJoint408 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint408.USE = "hanim_r_metacarpophalangeal_1";
joints[73] = HAnimJoint408;

let HAnimJoint409 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint409.USE = "hanim_l_metacarpophalangeal_2";
joints[74] = HAnimJoint409;

let HAnimJoint410 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint410.USE = "hanim_r_metacarpophalangeal_2";
joints[75] = HAnimJoint410;

let HAnimJoint411 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint411.USE = "hanim_l_metacarpophalangeal_3";
joints[76] = HAnimJoint411;

let HAnimJoint412 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint412.USE = "hanim_r_metacarpophalangeal_3";
joints[77] = HAnimJoint412;

let HAnimJoint413 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint413.USE = "hanim_l_metacarpophalangeal_4";
joints[78] = HAnimJoint413;

let HAnimJoint414 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint414.USE = "hanim_r_metacarpophalangeal_4";
joints[79] = HAnimJoint414;

let HAnimJoint415 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint415.USE = "hanim_l_metacarpophalangeal_5";
joints[80] = HAnimJoint415;

let HAnimJoint416 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint416.USE = "hanim_r_metacarpophalangeal_5";
joints[81] = HAnimJoint416;

let HAnimJoint417 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint417.USE = "hanim_l_metatarsophalangeal_2";
joints[82] = HAnimJoint417;

let HAnimJoint418 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint418.USE = "hanim_r_metatarsophalangeal_2";
joints[83] = HAnimJoint418;

let HAnimJoint419 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint419.USE = "hanim_l_radiocarpal";
joints[84] = HAnimJoint419;

let HAnimJoint420 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint420.USE = "hanim_r_radiocarpal";
joints[85] = HAnimJoint420;

let HAnimJoint421 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint421.USE = "hanim_l_shoulder";
joints[86] = HAnimJoint421;

let HAnimJoint422 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint422.USE = "hanim_r_shoulder";
joints[87] = HAnimJoint422;

let HAnimJoint423 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint423.USE = "hanim_l_sternoclavicular";
joints[88] = HAnimJoint423;

let HAnimJoint424 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint424.USE = "hanim_r_sternoclavicular";
joints[89] = HAnimJoint424;

let HAnimJoint425 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint425.USE = "hanim_l_talocrural";
joints[90] = HAnimJoint425;

let HAnimJoint426 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint426.USE = "hanim_r_talocrural";
joints[91] = HAnimJoint426;

let HAnimJoint427 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint427.USE = "hanim_l_tarsal_distal_interphalangeal_2";
joints[92] = HAnimJoint427;

let HAnimJoint428 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint428.USE = "hanim_r_tarsal_distal_interphalangeal_2";
joints[93] = HAnimJoint428;

let HAnimJoint429 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint429.USE = "hanim_l_tarsometatarsal_2";
joints[94] = HAnimJoint429;

let HAnimJoint430 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint430.USE = "hanim_r_tarsometatarsal_2";
joints[95] = HAnimJoint430;

let HAnimSegment431 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment431.USE = "hanim_pelvis";
segments[96] = HAnimSegment431;

let HAnimSegment432 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment432.USE = "hanim_skull";
segments[97] = HAnimSegment432;

let HAnimSegment433 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment433.USE = "hanim_jaw";
segments[98] = HAnimSegment433;

let HAnimSegment434 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment434.USE = "hanim_c1";
segments[99] = HAnimSegment434;

let HAnimSegment435 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment435.USE = "hanim_c2";
segments[100] = HAnimSegment435;

let HAnimSegment436 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment436.USE = "hanim_c3";
segments[101] = HAnimSegment436;

let HAnimSegment437 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment437.USE = "hanim_c4";
segments[102] = HAnimSegment437;

let HAnimSegment438 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment438.USE = "hanim_c5";
segments[103] = HAnimSegment438;

let HAnimSegment439 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment439.USE = "hanim_c6";
segments[104] = HAnimSegment439;

let HAnimSegment440 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment440.USE = "hanim_c7";
segments[105] = HAnimSegment440;

let HAnimSegment441 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment441.USE = "hanim_t1";
segments[106] = HAnimSegment441;

let HAnimSegment442 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment442.USE = "hanim_t2";
segments[107] = HAnimSegment442;

let HAnimSegment443 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment443.USE = "hanim_t3";
segments[108] = HAnimSegment443;

let HAnimSegment444 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment444.USE = "hanim_t4";
segments[109] = HAnimSegment444;

let HAnimSegment445 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment445.USE = "hanim_t5";
segments[110] = HAnimSegment445;

let HAnimSegment446 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment446.USE = "hanim_t6";
segments[111] = HAnimSegment446;

let HAnimSegment447 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment447.USE = "hanim_t7";
segments[112] = HAnimSegment447;

let HAnimSegment448 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment448.USE = "hanim_t8";
segments[113] = HAnimSegment448;

let HAnimSegment449 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment449.USE = "hanim_t9";
segments[114] = HAnimSegment449;

let HAnimSegment450 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment450.USE = "hanim_t10";
segments[115] = HAnimSegment450;

let HAnimSegment451 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment451.USE = "hanim_t11";
segments[116] = HAnimSegment451;

let HAnimSegment452 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment452.USE = "hanim_t12";
segments[117] = HAnimSegment452;

let HAnimSegment453 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment453.USE = "hanim_l1";
segments[118] = HAnimSegment453;

let HAnimSegment454 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment454.USE = "hanim_l2";
segments[119] = HAnimSegment454;

let HAnimSegment455 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment455.USE = "hanim_l3";
segments[120] = HAnimSegment455;

let HAnimSegment456 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment456.USE = "hanim_l4";
segments[121] = HAnimSegment456;

let HAnimSegment457 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment457.USE = "hanim_l5";
segments[122] = HAnimSegment457;

let HAnimSegment458 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment458.USE = "hanim_sacrum";
segments[123] = HAnimSegment458;

let HAnimSegment459 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment459.USE = "hanim_l_calf";
segments[124] = HAnimSegment459;

let HAnimSegment460 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment460.USE = "hanim_r_calf";
segments[125] = HAnimSegment460;

let HAnimSegment461 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment461.USE = "hanim_l_carpal";
segments[126] = HAnimSegment461;

let HAnimSegment462 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment462.USE = "hanim_r_carpal";
segments[127] = HAnimSegment462;

let HAnimSegment463 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment463.USE = "hanim_l_carpal_distal_phalanx_1";
segments[128] = HAnimSegment463;

let HAnimSegment464 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment464.USE = "hanim_r_carpal_distal_phalanx_1";
segments[129] = HAnimSegment464;

let HAnimSegment465 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment465.USE = "hanim_l_carpal_distal_phalanx_2";
segments[130] = HAnimSegment465;

let HAnimSegment466 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment466.USE = "hanim_r_carpal_distal_phalanx_2";
segments[131] = HAnimSegment466;

let HAnimSegment467 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment467.USE = "hanim_l_carpal_distal_phalanx_3";
segments[132] = HAnimSegment467;

let HAnimSegment468 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment468.USE = "hanim_r_carpal_distal_phalanx_3";
segments[133] = HAnimSegment468;

let HAnimSegment469 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment469.USE = "hanim_l_carpal_distal_phalanx_4";
segments[134] = HAnimSegment469;

let HAnimSegment470 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment470.USE = "hanim_r_carpal_distal_phalanx_4";
segments[135] = HAnimSegment470;

let HAnimSegment471 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment471.USE = "hanim_l_carpal_distal_phalanx_5";
segments[136] = HAnimSegment471;

let HAnimSegment472 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment472.USE = "hanim_r_carpal_distal_phalanx_5";
segments[137] = HAnimSegment472;

let HAnimSegment473 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment473.USE = "hanim_l_carpal_middle_phalanx_2";
segments[138] = HAnimSegment473;

let HAnimSegment474 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment474.USE = "hanim_r_carpal_middle_phalanx_2";
segments[139] = HAnimSegment474;

let HAnimSegment475 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment475.USE = "hanim_l_carpal_middle_phalanx_3";
segments[140] = HAnimSegment475;

let HAnimSegment476 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment476.USE = "hanim_r_carpal_middle_phalanx_3";
segments[141] = HAnimSegment476;

let HAnimSegment477 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment477.USE = "hanim_l_carpal_middle_phalanx_4";
segments[142] = HAnimSegment477;

let HAnimSegment478 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment478.USE = "hanim_r_carpal_middle_phalanx_4";
segments[143] = HAnimSegment478;

let HAnimSegment479 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment479.USE = "hanim_l_carpal_middle_phalanx_5";
segments[144] = HAnimSegment479;

let HAnimSegment480 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment480.USE = "hanim_r_carpal_middle_phalanx_5";
segments[145] = HAnimSegment480;

let HAnimSegment481 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment481.USE = "hanim_l_carpal_proximal_phalanx_1";
segments[146] = HAnimSegment481;

let HAnimSegment482 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment482.USE = "hanim_r_carpal_proximal_phalanx_1";
segments[147] = HAnimSegment482;

let HAnimSegment483 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment483.USE = "hanim_l_carpal_proximal_phalanx_2";
segments[148] = HAnimSegment483;

let HAnimSegment484 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment484.USE = "hanim_r_carpal_proximal_phalanx_2";
segments[149] = HAnimSegment484;

let HAnimSegment485 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment485.USE = "hanim_l_carpal_proximal_phalanx_3";
segments[150] = HAnimSegment485;

let HAnimSegment486 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment486.USE = "hanim_r_carpal_proximal_phalanx_3";
segments[151] = HAnimSegment486;

let HAnimSegment487 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment487.USE = "hanim_l_carpal_proximal_phalanx_4";
segments[152] = HAnimSegment487;

let HAnimSegment488 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment488.USE = "hanim_r_carpal_proximal_phalanx_4";
segments[153] = HAnimSegment488;

let HAnimSegment489 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment489.USE = "hanim_l_carpal_proximal_phalanx_5";
segments[154] = HAnimSegment489;

let HAnimSegment490 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment490.USE = "hanim_r_carpal_proximal_phalanx_5";
segments[155] = HAnimSegment490;

let HAnimSegment491 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment491.USE = "hanim_l_clavicle";
segments[156] = HAnimSegment491;

let HAnimSegment492 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment492.USE = "hanim_r_clavicle";
segments[157] = HAnimSegment492;

let HAnimSegment493 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment493.USE = "hanim_l_eyeball";
segments[158] = HAnimSegment493;

let HAnimSegment494 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment494.USE = "hanim_r_eyeball";
segments[159] = HAnimSegment494;

let HAnimSegment495 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment495.USE = "hanim_l_eyebrow";
segments[160] = HAnimSegment495;

let HAnimSegment496 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment496.USE = "hanim_r_eyebrow";
segments[161] = HAnimSegment496;

let HAnimSegment497 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment497.USE = "hanim_l_eyelid";
segments[162] = HAnimSegment497;

let HAnimSegment498 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment498.USE = "hanim_r_eyelid";
segments[163] = HAnimSegment498;

let HAnimSegment499 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment499.USE = "hanim_l_forearm";
segments[164] = HAnimSegment499;

let HAnimSegment500 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment500.USE = "hanim_r_forearm";
segments[165] = HAnimSegment500;

let HAnimSegment501 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment501.USE = "hanim_l_metacarpal_1";
segments[166] = HAnimSegment501;

let HAnimSegment502 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment502.USE = "hanim_r_metacarpal_1";
segments[167] = HAnimSegment502;

let HAnimSegment503 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment503.USE = "hanim_l_metacarpal_2";
segments[168] = HAnimSegment503;

let HAnimSegment504 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment504.USE = "hanim_r_metacarpal_2";
segments[169] = HAnimSegment504;

let HAnimSegment505 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment505.USE = "hanim_l_metacarpal_3";
segments[170] = HAnimSegment505;

let HAnimSegment506 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment506.USE = "hanim_r_metacarpal_3";
segments[171] = HAnimSegment506;

let HAnimSegment507 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment507.USE = "hanim_l_metacarpal_4";
segments[172] = HAnimSegment507;

let HAnimSegment508 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment508.USE = "hanim_r_metacarpal_4";
segments[173] = HAnimSegment508;

let HAnimSegment509 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment509.USE = "hanim_l_metacarpal_5";
segments[174] = HAnimSegment509;

let HAnimSegment510 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment510.USE = "hanim_r_metacarpal_5";
segments[175] = HAnimSegment510;

let HAnimSegment511 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment511.USE = "hanim_l_metatarsal_2";
segments[176] = HAnimSegment511;

let HAnimSegment512 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment512.USE = "hanim_r_metatarsal_2";
segments[177] = HAnimSegment512;

let HAnimSegment513 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment513.USE = "hanim_l_scapula";
segments[178] = HAnimSegment513;

let HAnimSegment514 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment514.USE = "hanim_r_scapula";
segments[179] = HAnimSegment514;

let HAnimSegment515 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment515.USE = "hanim_l_talus";
segments[180] = HAnimSegment515;

let HAnimSegment516 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment516.USE = "hanim_r_talus";
segments[181] = HAnimSegment516;

let HAnimSegment517 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment517.USE = "hanim_l_tarsal_distal_phalanx_2";
segments[182] = HAnimSegment517;

let HAnimSegment518 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment518.USE = "hanim_r_tarsal_distal_phalanx_2";
segments[183] = HAnimSegment518;

let HAnimSegment519 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment519.USE = "hanim_l_tarsal_proximal_phalanx_2";
segments[184] = HAnimSegment519;

let HAnimSegment520 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment520.USE = "hanim_r_tarsal_proximal_phalanx_2";
segments[185] = HAnimSegment520;

let HAnimSegment521 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment521.USE = "hanim_l_thigh";
segments[186] = HAnimSegment521;

let HAnimSegment522 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment522.USE = "hanim_r_thigh";
segments[187] = HAnimSegment522;

let HAnimSegment523 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment523.USE = "hanim_l_upperarm";
segments[188] = HAnimSegment523;

let HAnimSegment524 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment524.USE = "hanim_r_upperarm";
segments[189] = HAnimSegment524;

let HAnimSite525 = browser.currentScene.createNode("HAnimSite");
HAnimSite525.USE = "hanim_crotch_pt";
viewpoints[190] = HAnimSite525;

let HAnimSite526 = browser.currentScene.createNode("HAnimSite");
HAnimSite526.USE = "hanim_skull_vertex_tip";
viewpoints[191] = HAnimSite526;

let HAnimSite527 = browser.currentScene.createNode("HAnimSite");
HAnimSite527.USE = "hanim_sellion_pt";
viewpoints[192] = HAnimSite527;

let HAnimSite528 = browser.currentScene.createNode("HAnimSite");
HAnimSite528.USE = "hanim_supramenton_pt";
viewpoints[193] = HAnimSite528;

let HAnimSite529 = browser.currentScene.createNode("HAnimSite");
HAnimSite529.USE = "hanim_nuchale_pt";
viewpoints[194] = HAnimSite529;

let HAnimSite530 = browser.currentScene.createNode("HAnimSite");
HAnimSite530.USE = "hanim_suprasternale_pt";
viewpoints[195] = HAnimSite530;

let HAnimSite531 = browser.currentScene.createNode("HAnimSite");
HAnimSite531.USE = "hanim_cervicale_pt";
viewpoints[196] = HAnimSite531;

let HAnimSite532 = browser.currentScene.createNode("HAnimSite");
HAnimSite532.USE = "hanim_substernale_pt";
viewpoints[197] = HAnimSite532;

let HAnimSite533 = browser.currentScene.createNode("HAnimSite");
HAnimSite533.USE = "hanim_rib10_midspine_pt";
viewpoints[198] = HAnimSite533;

let HAnimSite534 = browser.currentScene.createNode("HAnimSite");
HAnimSite534.USE = "hanim_waist_preferred_posterior_pt";
viewpoints[199] = HAnimSite534;

let HAnimSite535 = browser.currentScene.createNode("HAnimSite");
HAnimSite535.USE = "hanim_navel_pt";
viewpoints[200] = HAnimSite535;

let HAnimSite536 = browser.currentScene.createNode("HAnimSite");
HAnimSite536.USE = "hanim_l_acromion_pt";
viewpoints[201] = HAnimSite536;

let HAnimSite537 = browser.currentScene.createNode("HAnimSite");
HAnimSite537.USE = "hanim_r_acromion_pt";
viewpoints[202] = HAnimSite537;

let HAnimSite538 = browser.currentScene.createNode("HAnimSite");
HAnimSite538.USE = "hanim_r_asis_pt";
viewpoints[203] = HAnimSite538;

let HAnimSite539 = browser.currentScene.createNode("HAnimSite");
HAnimSite539.USE = "hanim_l_asis_pt";
viewpoints[204] = HAnimSite539;

let HAnimSite540 = browser.currentScene.createNode("HAnimSite");
HAnimSite540.USE = "hanim_l_axilla_distal_pt";
viewpoints[205] = HAnimSite540;

let HAnimSite541 = browser.currentScene.createNode("HAnimSite");
HAnimSite541.USE = "hanim_r_axilla_distal_pt";
viewpoints[206] = HAnimSite541;

let HAnimSite542 = browser.currentScene.createNode("HAnimSite");
HAnimSite542.USE = "hanim_l_axilla_proximal_pt";
viewpoints[207] = HAnimSite542;

let HAnimSite543 = browser.currentScene.createNode("HAnimSite");
HAnimSite543.USE = "hanim_r_axilla_proximal_pt";
viewpoints[208] = HAnimSite543;

let HAnimSite544 = browser.currentScene.createNode("HAnimSite");
HAnimSite544.USE = "hanim_l_calcaneus_posterior_pt";
viewpoints[209] = HAnimSite544;

let HAnimSite545 = browser.currentScene.createNode("HAnimSite");
HAnimSite545.USE = "hanim_r_calcaneus_posterior_pt";
viewpoints[210] = HAnimSite545;

let HAnimSite546 = browser.currentScene.createNode("HAnimSite");
HAnimSite546.USE = "hanim_l_carpal_distal_phalanx_1_tip";
viewpoints[211] = HAnimSite546;

let HAnimSite547 = browser.currentScene.createNode("HAnimSite");
HAnimSite547.USE = "hanim_r_carpal_distal_phalanx_1_tip";
viewpoints[212] = HAnimSite547;

let HAnimSite548 = browser.currentScene.createNode("HAnimSite");
HAnimSite548.USE = "hanim_l_carpal_distal_phalanx_2_tip";
viewpoints[213] = HAnimSite548;

let HAnimSite549 = browser.currentScene.createNode("HAnimSite");
HAnimSite549.USE = "hanim_r_carpal_distal_phalanx_2_tip";
viewpoints[214] = HAnimSite549;

let HAnimSite550 = browser.currentScene.createNode("HAnimSite");
HAnimSite550.USE = "hanim_l_carpal_distal_phalanx_3_tip";
viewpoints[215] = HAnimSite550;

let HAnimSite551 = browser.currentScene.createNode("HAnimSite");
HAnimSite551.USE = "hanim_r_carpal_distal_phalanx_3_tip";
viewpoints[216] = HAnimSite551;

let HAnimSite552 = browser.currentScene.createNode("HAnimSite");
HAnimSite552.USE = "hanim_l_carpal_distal_phalanx_4_tip";
viewpoints[217] = HAnimSite552;

let HAnimSite553 = browser.currentScene.createNode("HAnimSite");
HAnimSite553.USE = "hanim_r_carpal_distal_phalanx_4_tip";
viewpoints[218] = HAnimSite553;

let HAnimSite554 = browser.currentScene.createNode("HAnimSite");
HAnimSite554.USE = "hanim_l_carpal_distal_phalanx_5_tip";
viewpoints[219] = HAnimSite554;

let HAnimSite555 = browser.currentScene.createNode("HAnimSite");
HAnimSite555.USE = "hanim_r_carpal_distal_phalanx_5_tip";
viewpoints[220] = HAnimSite555;

let HAnimSite556 = browser.currentScene.createNode("HAnimSite");
HAnimSite556.USE = "hanim_l_clavicle_pt";
viewpoints[221] = HAnimSite556;

let HAnimSite557 = browser.currentScene.createNode("HAnimSite");
HAnimSite557.USE = "hanim_r_clavicle_pt";
viewpoints[222] = HAnimSite557;

let HAnimSite558 = browser.currentScene.createNode("HAnimSite");
HAnimSite558.USE = "hanim_l_dactylion_pt";
viewpoints[223] = HAnimSite558;

let HAnimSite559 = browser.currentScene.createNode("HAnimSite");
HAnimSite559.USE = "hanim_r_dactylion_pt";
viewpoints[224] = HAnimSite559;

let HAnimSite560 = browser.currentScene.createNode("HAnimSite");
HAnimSite560.USE = "hanim_l_femoral_lateral_epicondyle_pt";
viewpoints[225] = HAnimSite560;

let HAnimSite561 = browser.currentScene.createNode("HAnimSite");
HAnimSite561.USE = "hanim_r_femoral_lateral_epicondyle_pt";
viewpoints[226] = HAnimSite561;

let HAnimSite562 = browser.currentScene.createNode("HAnimSite");
HAnimSite562.USE = "hanim_l_femoral_medial_epicondyle_pt";
viewpoints[227] = HAnimSite562;

let HAnimSite563 = browser.currentScene.createNode("HAnimSite");
HAnimSite563.USE = "hanim_r_femoral_medial_epicondyle_pt";
viewpoints[228] = HAnimSite563;

let HAnimSite564 = browser.currentScene.createNode("HAnimSite");
HAnimSite564.USE = "hanim_l_forefoot_tip";
viewpoints[229] = HAnimSite564;

let HAnimSite565 = browser.currentScene.createNode("HAnimSite");
HAnimSite565.USE = "hanim_r_forefoot_tip";
viewpoints[230] = HAnimSite565;

let HAnimSite566 = browser.currentScene.createNode("HAnimSite");
HAnimSite566.USE = "hanim_r_gonion_pt";
viewpoints[231] = HAnimSite566;

let HAnimSite567 = browser.currentScene.createNode("HAnimSite");
HAnimSite567.USE = "hanim_l_gonion_pt";
viewpoints[232] = HAnimSite567;

let HAnimSite568 = browser.currentScene.createNode("HAnimSite");
HAnimSite568.USE = "hanim_l_humeral_lateral_epicondyle_pt";
viewpoints[233] = HAnimSite568;

let HAnimSite569 = browser.currentScene.createNode("HAnimSite");
HAnimSite569.USE = "hanim_r_humeral_lateral_epicondyle_pt";
viewpoints[234] = HAnimSite569;

let HAnimSite570 = browser.currentScene.createNode("HAnimSite");
HAnimSite570.USE = "hanim_l_humeral_medial_epicondyle_pt";
viewpoints[235] = HAnimSite570;

let HAnimSite571 = browser.currentScene.createNode("HAnimSite");
HAnimSite571.USE = "hanim_r_humeral_medial_epicondyle_pt";
viewpoints[236] = HAnimSite571;

let HAnimSite572 = browser.currentScene.createNode("HAnimSite");
HAnimSite572.USE = "hanim_r_iliocristale_pt";
viewpoints[237] = HAnimSite572;

let HAnimSite573 = browser.currentScene.createNode("HAnimSite");
HAnimSite573.USE = "hanim_l_iliocristale_pt";
viewpoints[238] = HAnimSite573;

let HAnimSite574 = browser.currentScene.createNode("HAnimSite");
HAnimSite574.USE = "hanim_r_infraorbitale_pt";
viewpoints[239] = HAnimSite574;

let HAnimSite575 = browser.currentScene.createNode("HAnimSite");
HAnimSite575.USE = "hanim_l_infraorbitale_pt";
viewpoints[240] = HAnimSite575;

let HAnimSite576 = browser.currentScene.createNode("HAnimSite");
HAnimSite576.USE = "hanim_l_knee_crease_pt";
viewpoints[241] = HAnimSite576;

let HAnimSite577 = browser.currentScene.createNode("HAnimSite");
HAnimSite577.USE = "hanim_r_knee_crease_pt";
viewpoints[242] = HAnimSite577;

let HAnimSite578 = browser.currentScene.createNode("HAnimSite");
HAnimSite578.USE = "hanim_l_lateral_malleolus_pt";
viewpoints[243] = HAnimSite578;

let HAnimSite579 = browser.currentScene.createNode("HAnimSite");
HAnimSite579.USE = "hanim_r_lateral_malleolus_pt";
viewpoints[244] = HAnimSite579;

let HAnimSite580 = browser.currentScene.createNode("HAnimSite");
HAnimSite580.USE = "hanim_l_medial_malleolus_pt";
viewpoints[245] = HAnimSite580;

let HAnimSite581 = browser.currentScene.createNode("HAnimSite");
HAnimSite581.USE = "hanim_r_medial_malleolus_pt";
viewpoints[246] = HAnimSite581;

let HAnimSite582 = browser.currentScene.createNode("HAnimSite");
HAnimSite582.USE = "hanim_l_metacarpal_phalanx_2_pt";
viewpoints[247] = HAnimSite582;

let HAnimSite583 = browser.currentScene.createNode("HAnimSite");
HAnimSite583.USE = "hanim_r_metacarpal_phalanx_2_pt";
viewpoints[248] = HAnimSite583;

let HAnimSite584 = browser.currentScene.createNode("HAnimSite");
HAnimSite584.USE = "hanim_l_metacarpal_phalanx_5_pt";
viewpoints[249] = HAnimSite584;

let HAnimSite585 = browser.currentScene.createNode("HAnimSite");
HAnimSite585.USE = "hanim_r_metacarpal_phalanx_5_pt";
viewpoints[250] = HAnimSite585;

let HAnimSite586 = browser.currentScene.createNode("HAnimSite");
HAnimSite586.USE = "hanim_l_metatarsal_phalanx_1_pt";
viewpoints[251] = HAnimSite586;

let HAnimSite587 = browser.currentScene.createNode("HAnimSite");
HAnimSite587.USE = "hanim_r_metatarsal_phalanx_1_pt";
viewpoints[252] = HAnimSite587;

let HAnimSite588 = browser.currentScene.createNode("HAnimSite");
HAnimSite588.USE = "hanim_l_metatarsal_phalanx_5_pt";
viewpoints[253] = HAnimSite588;

let HAnimSite589 = browser.currentScene.createNode("HAnimSite");
HAnimSite589.USE = "hanim_r_metatarsal_phalanx_5_pt";
viewpoints[254] = HAnimSite589;

let HAnimSite590 = browser.currentScene.createNode("HAnimSite");
HAnimSite590.USE = "hanim_r_neck_base_pt";
viewpoints[255] = HAnimSite590;

let HAnimSite591 = browser.currentScene.createNode("HAnimSite");
HAnimSite591.USE = "hanim_l_neck_base_pt";
viewpoints[256] = HAnimSite591;

let HAnimSite592 = browser.currentScene.createNode("HAnimSite");
HAnimSite592.USE = "hanim_l_olecranon_pt";
viewpoints[257] = HAnimSite592;

let HAnimSite593 = browser.currentScene.createNode("HAnimSite");
HAnimSite593.USE = "hanim_r_olecranon_pt";
viewpoints[258] = HAnimSite593;

let HAnimSite594 = browser.currentScene.createNode("HAnimSite");
HAnimSite594.USE = "hanim_r_psis_pt";
viewpoints[259] = HAnimSite594;

let HAnimSite595 = browser.currentScene.createNode("HAnimSite");
HAnimSite595.USE = "hanim_l_psis_pt";
viewpoints[260] = HAnimSite595;

let HAnimSite596 = browser.currentScene.createNode("HAnimSite");
HAnimSite596.USE = "hanim_l_radial_styloid_pt";
viewpoints[261] = HAnimSite596;

let HAnimSite597 = browser.currentScene.createNode("HAnimSite");
HAnimSite597.USE = "hanim_r_radial_styloid_pt";
viewpoints[262] = HAnimSite597;

let HAnimSite598 = browser.currentScene.createNode("HAnimSite");
HAnimSite598.USE = "hanim_l_radiale_pt";
viewpoints[263] = HAnimSite598;

let HAnimSite599 = browser.currentScene.createNode("HAnimSite");
HAnimSite599.USE = "hanim_r_radiale_pt";
viewpoints[264] = HAnimSite599;

let HAnimSite600 = browser.currentScene.createNode("HAnimSite");
HAnimSite600.USE = "hanim_r_rib10_pt";
viewpoints[265] = HAnimSite600;

let HAnimSite601 = browser.currentScene.createNode("HAnimSite");
HAnimSite601.USE = "hanim_l_rib10_pt";
viewpoints[266] = HAnimSite601;

let HAnimSite602 = browser.currentScene.createNode("HAnimSite");
HAnimSite602.USE = "hanim_temporomandibular_l_site_pt";
viewpoints[267] = HAnimSite602;

let HAnimSite603 = browser.currentScene.createNode("HAnimSite");
HAnimSite603.USE = "hanim_temporomandibular_r_site_pt";
viewpoints[268] = HAnimSite603;

let HAnimSite604 = browser.currentScene.createNode("HAnimSite");
HAnimSite604.USE = "hanim_l_sphyrion_pt";
viewpoints[269] = HAnimSite604;

let HAnimSite605 = browser.currentScene.createNode("HAnimSite");
HAnimSite605.USE = "hanim_r_sphyrion_pt";
viewpoints[270] = HAnimSite605;

let HAnimSite606 = browser.currentScene.createNode("HAnimSite");
HAnimSite606.USE = "hanim_l_tarsal_distal_phalanx_2_pt";
viewpoints[271] = HAnimSite606;

let HAnimSite607 = browser.currentScene.createNode("HAnimSite");
HAnimSite607.USE = "hanim_r_tarsal_distal_phalanx_2_pt";
viewpoints[272] = HAnimSite607;

let HAnimSite608 = browser.currentScene.createNode("HAnimSite");
HAnimSite608.USE = "hanim_r_thelion_pt";
viewpoints[273] = HAnimSite608;

let HAnimSite609 = browser.currentScene.createNode("HAnimSite");
HAnimSite609.USE = "hanim_l_thelion_pt";
viewpoints[274] = HAnimSite609;

let HAnimSite610 = browser.currentScene.createNode("HAnimSite");
HAnimSite610.USE = "hanim_r_tragion_pt";
viewpoints[275] = HAnimSite610;

let HAnimSite611 = browser.currentScene.createNode("HAnimSite");
HAnimSite611.USE = "hanim_l_tragion_pt";
viewpoints[276] = HAnimSite611;

let HAnimSite612 = browser.currentScene.createNode("HAnimSite");
HAnimSite612.USE = "hanim_r_trochanterion_pt";
viewpoints[277] = HAnimSite612;

let HAnimSite613 = browser.currentScene.createNode("HAnimSite");
HAnimSite613.USE = "hanim_l_trochanterion_pt";
viewpoints[278] = HAnimSite613;

let HAnimSite614 = browser.currentScene.createNode("HAnimSite");
HAnimSite614.USE = "hanim_l_ulnar_styloid_pt";
viewpoints[279] = HAnimSite614;

let HAnimSite615 = browser.currentScene.createNode("HAnimSite");
HAnimSite615.USE = "hanim_r_ulnar_styloid_pt";
viewpoints[280] = HAnimSite615;

let HAnimSite616 = browser.currentScene.createNode("HAnimSite");
HAnimSite616.DEF = "hanim_l_inclined_view";
HAnimSite616.name = "l_inclined_view";
HAnimSite616.translation = new X3D.SFVec3f([1.62,1.05,2.06]);
HAnimSite616.rotation = new X3D.SFRotation([-0.113,0.993,0.0347,0.671]);
let Viewpoint617 = browser.currentScene.createNode("Viewpoint");
Viewpoint617.DEF = "hanim_l_inclined_viewpoint";
Viewpoint617.description = "left inclined";
Viewpoint617.position = new X3D.SFVec3f([0,0,0]);
HAnimSite616YYY.children = new X3D.MFNode();

HAnimSite616ZZZ.children[0] = Viewpoint617;

viewpoints[281] = HAnimSite616;

let HAnimSite618 = browser.currentScene.createNode("HAnimSite");
HAnimSite618.DEF = "hanim_r_inclined_view";
HAnimSite618.name = "r_inclined_view";
HAnimSite618.translation = new X3D.SFVec3f([-1.62,1.05,2.06]);
HAnimSite618.rotation = new X3D.SFRotation([-0.113,-0.993,0.0347,0.671]);
let Viewpoint619 = browser.currentScene.createNode("Viewpoint");
Viewpoint619.DEF = "hanim_r_inclined_viewpoint";
Viewpoint619.description = "right inclined";
Viewpoint619.position = new X3D.SFVec3f([0,0,0]);
Viewpoint619.centerOfRotation = new X3D.SFVec3f([0,0.9,0]);
HAnimSite618YYY.children = new X3D.MFNode();

HAnimSite618ZZZ.children[0] = Viewpoint619;

HAnimHumanoid41ZZZ.viewpoints[282] = HAnimSite618;

let HAnimSite620 = browser.currentScene.createNode("HAnimSite");
HAnimSite620.DEF = "hanim_front_view";
HAnimSite620.name = "front_view";
HAnimSite620.translation = new X3D.SFVec3f([0,0.85,2.58]);
let Viewpoint621 = browser.currentScene.createNode("Viewpoint");
Viewpoint621.DEF = "hanim_front_viewpoint";
Viewpoint621.description = "front";
Viewpoint621.position = new X3D.SFVec3f([0,0,0]);
Viewpoint621.centerOfRotation = new X3D.SFVec3f([0,0.9,0]);
HAnimSite620YYY.children = new X3D.MFNode();

HAnimSite620ZZZ.children[0] = Viewpoint621;

HAnimHumanoid41ZZZ.viewpoints[283] = HAnimSite620;

let HAnimSite622 = browser.currentScene.createNode("HAnimSite");
HAnimSite622.DEF = "hanim_back_view";
HAnimSite622.name = "back_view";
HAnimSite622.translation = new X3D.SFVec3f([0,0.85,-2.58]);
HAnimSite622.rotation = new X3D.SFRotation([0,1,0,3.14]);
let Viewpoint623 = browser.currentScene.createNode("Viewpoint");
Viewpoint623.DEF = "hanim_back_viewpoint";
Viewpoint623.description = "back";
Viewpoint623.position = new X3D.SFVec3f([0,0,0]);
Viewpoint623.centerOfRotation = new X3D.SFVec3f([0,0.9,0]);
HAnimSite622YYY.children = new X3D.MFNode();

HAnimSite622ZZZ.children[0] = Viewpoint623;

HAnimHumanoid41ZZZ.viewpoints[284] = HAnimSite622;

let HAnimSite624 = browser.currentScene.createNode("HAnimSite");
HAnimSite624.DEF = "hanim_l_side_view";
HAnimSite624.name = "l_side_view";
HAnimSite624.translation = new X3D.SFVec3f([2.6,0.854,0]);
HAnimSite624.rotation = new X3D.SFRotation([0,1,0,1.5708]);
let Viewpoint625 = browser.currentScene.createNode("Viewpoint");
Viewpoint625.DEF = "hanim_l_side_viewpoint";
Viewpoint625.description = "left side";
Viewpoint625.position = new X3D.SFVec3f([0,0,0]);
Viewpoint625.centerOfRotation = new X3D.SFVec3f([0,0.9,0]);
HAnimSite624YYY.children = new X3D.MFNode();

HAnimSite624ZZZ.children[0] = Viewpoint625;

HAnimHumanoid41ZZZ.viewpoints[285] = HAnimSite624;

let HAnimSite626 = browser.currentScene.createNode("HAnimSite");
HAnimSite626.DEF = "hanim_Top_view";
HAnimSite626.name = "Top_view";
HAnimSite626.translation = new X3D.SFVec3f([0,3.5,0]);
HAnimSite626.rotation = new X3D.SFRotation([1,0,0,-1.57]);
let Viewpoint627 = browser.currentScene.createNode("Viewpoint");
Viewpoint627.DEF = "hanim_Top_viewpoint";
Viewpoint627.description = "Top";
Viewpoint627.position = new X3D.SFVec3f([0,0,0]);
Viewpoint627.centerOfRotation = new X3D.SFVec3f([0,0.9,0]);
HAnimSite626YYY.children = new X3D.MFNode();

HAnimSite626ZZZ.children[0] = Viewpoint627;

HAnimHumanoid41ZZZ.viewpoints[286] = HAnimSite626;

let HAnimSite628 = browser.currentScene.createNode("HAnimSite");
HAnimSite628.DEF = "hanim_front_close_view";
HAnimSite628.name = "front_close_view";
HAnimSite628.translation = new X3D.SFVec3f([0,0.854,1.575]);
let Viewpoint629 = browser.currentScene.createNode("Viewpoint");
Viewpoint629.DEF = "hanim_front_close_viewpoint";
Viewpoint629.description = "front close";
Viewpoint629.position = new X3D.SFVec3f([0,0,0]);
Viewpoint629.centerOfRotation = new X3D.SFVec3f([0,0,1.575]);
HAnimSite628YYY.children = new X3D.MFNode();

HAnimSite628ZZZ.children[0] = Viewpoint629;

HAnimHumanoid41ZZZ.viewpoints[287] = HAnimSite628;

let HAnimSite630 = browser.currentScene.createNode("HAnimSite");
HAnimSite630.DEF = "hanim_side_close_view";
HAnimSite630.name = "side_close_view";
HAnimSite630.translation = new X3D.SFVec3f([1.56,0.854,0]);
HAnimSite630.rotation = new X3D.SFRotation([0,1,0,1.5708]);
let Viewpoint631 = browser.currentScene.createNode("Viewpoint");
Viewpoint631.DEF = "hanim_side_close_viewpoint";
Viewpoint631.description = "side close";
Viewpoint631.position = new X3D.SFVec3f([0,0,0]);
Viewpoint631.centerOfRotation = new X3D.SFVec3f([1.6,0,0]);
HAnimSite630YYY.children = new X3D.MFNode();

HAnimSite630ZZZ.children[0] = Viewpoint631;

HAnimHumanoid41ZZZ.viewpoints[288] = HAnimSite630;

let HAnimSite632 = browser.currentScene.createNode("HAnimSite");
HAnimSite632.DEF = "hanim_head_front_close_view";
HAnimSite632.name = "head_front_close_view";
HAnimSite632.translation = new X3D.SFVec3f([0,1.5,1]);
let Viewpoint633 = browser.currentScene.createNode("Viewpoint");
Viewpoint633.DEF = "hanim_head_front_close_viewpoint";
Viewpoint633.description = "head front close";
Viewpoint633.position = new X3D.SFVec3f([0,0,0]);
Viewpoint633.centerOfRotation = new X3D.SFVec3f([0,0,1]);
HAnimSite632YYY.children = new X3D.MFNode();

HAnimSite632ZZZ.children[0] = Viewpoint633;

HAnimHumanoid41ZZZ.viewpoints[289] = HAnimSite632;

let HAnimSite634 = browser.currentScene.createNode("HAnimSite");
HAnimSite634.DEF = "hanim_chest_front_close_view";
HAnimSite634.name = "chest_front_close_view";
HAnimSite634.translation = new X3D.SFVec3f([0,1.2,1]);
let Viewpoint635 = browser.currentScene.createNode("Viewpoint");
Viewpoint635.DEF = "hanim_chest_front_close_viewpoint";
Viewpoint635.description = "chest front close";
Viewpoint635.position = new X3D.SFVec3f([0,0,0]);
Viewpoint635.centerOfRotation = new X3D.SFVec3f([0,0,1]);
HAnimSite634YYY.children = new X3D.MFNode();

HAnimSite634ZZZ.children[0] = Viewpoint635;

HAnimHumanoid41ZZZ.viewpoints[290] = HAnimSite634;

let HAnimSite636 = browser.currentScene.createNode("HAnimSite");
HAnimSite636.DEF = "hanim_pelvis_front_close_view";
HAnimSite636.name = "pelvis_front_close_view";
HAnimSite636.translation = new X3D.SFVec3f([0,0.8,1]);
let Viewpoint637 = browser.currentScene.createNode("Viewpoint");
Viewpoint637.DEF = "hanim_pelvis_front_close_viewpoint";
Viewpoint637.description = "pelvis front close";
Viewpoint637.position = new X3D.SFVec3f([0,0,0]);
Viewpoint637.centerOfRotation = new X3D.SFVec3f([0,0,1]);
HAnimSite636YYY.children = new X3D.MFNode();

HAnimSite636ZZZ.children[0] = Viewpoint637;

HAnimHumanoid41ZZZ.viewpoints[291] = HAnimSite636;

let HAnimSite638 = browser.currentScene.createNode("HAnimSite");
HAnimSite638.DEF = "hanim_knees_front_close_view";
HAnimSite638.name = "knees_front_close_view";
HAnimSite638.translation = new X3D.SFVec3f([0,0.4,1]);
let Viewpoint639 = browser.currentScene.createNode("Viewpoint");
Viewpoint639.DEF = "hanim_knees_front_close_viewpoint";
Viewpoint639.description = "knees front close";
Viewpoint639.position = new X3D.SFVec3f([0,0,0]);
Viewpoint639.centerOfRotation = new X3D.SFVec3f([0,0.4,0]);
HAnimSite638YYY.children = new X3D.MFNode();

HAnimSite638ZZZ.children[0] = Viewpoint639;

HAnimHumanoid41ZZZ.viewpoints[292] = HAnimSite638;

let HAnimSite640 = browser.currentScene.createNode("HAnimSite");
HAnimSite640.DEF = "hanim_feet_front_close_view";
HAnimSite640.name = "feet_front_close_view";
HAnimSite640.translation = new X3D.SFVec3f([0,0,1]);
let Viewpoint641 = browser.currentScene.createNode("Viewpoint");
Viewpoint641.DEF = "hanim_feet_front_close_viewpoint";
Viewpoint641.description = "feet front close";
Viewpoint641.position = new X3D.SFVec3f([0,0,0]);
HAnimSite640YYY.children = new X3D.MFNode();

HAnimSite640ZZZ.children[0] = Viewpoint641;

HAnimHumanoid41ZZZ.viewpoints[293] = HAnimSite640;

let HAnimSite642 = browser.currentScene.createNode("HAnimSite");
HAnimSite642.DEF = "hanim_eye_level_view";
HAnimSite642.name = "eye_level_view";
HAnimSite642.translation = new X3D.SFVec3f([0,1.6332,0.0502]);
let Viewpoint643 = browser.currentScene.createNode("Viewpoint");
Viewpoint643.DEF = "hanim_eye_level_viewpoint";
Viewpoint643.description = "eye level looking forward";
Viewpoint643.position = new X3D.SFVec3f([0,0,0]);
Viewpoint643.orientation = new X3D.SFRotation([0,1,0,3.141593]);
HAnimSite642YYY.children = new X3D.MFNode();

HAnimSite642ZZZ.children[0] = Viewpoint643;

HAnimHumanoid41ZZZ.viewpoints[294] = HAnimSite642;

let HAnimSite644 = browser.currentScene.createNode("HAnimSite");
HAnimSite644.USE = "hanim_l_eyeball_site_view";
viewpoints[295] = HAnimSite644;

let HAnimSite645 = browser.currentScene.createNode("HAnimSite");
HAnimSite645.USE = "hanim_r_eyeball_site_view";
viewpoints[296] = HAnimSite645;

let HAnimSite646 = browser.currentScene.createNode("HAnimSite");
HAnimSite646.USE = "hanim_l_hand_front_view";
viewpoints[297] = HAnimSite646;

let HAnimSite647 = browser.currentScene.createNode("HAnimSite");
HAnimSite647.USE = "hanim_r_hand_front_view";
viewpoints[298] = HAnimSite647;

browser.currentScene.children[12] = HAnimHumanoid41;

}
main ();

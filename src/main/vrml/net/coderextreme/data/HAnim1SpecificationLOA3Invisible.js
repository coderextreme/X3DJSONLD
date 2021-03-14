let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let Background2 = browser.currentScene.createNode("Background");
Background2.skyColor = new MFColor(new float[0.3,0.3,0.3]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Background2;

let NavigationInfo3 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children[1] = NavigationInfo3;

let Group4 = browser.currentScene.createNode("Group");
Group4.DEF = "Original_WorldInfo";
let WorldInfo5 = browser.currentScene.createNode("WorldInfo");
WorldInfo5.info = new MFString(new java.lang.String[" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "]);
WorldInfo5.title = "HANIM 200x Default Joint Centers, LOA3";
Group4.children = new MFNode();

Group4.children[0] = WorldInfo5;

browser.currentScene.children[2] = Group4;

//TODO move viewpoints to be internal to HAnimHumanoid
//Viewpoint centerOfRotation=\"0 0.9149 0.0016\" matches initial at-rest locaton of the sacroliac. Note that these viewpoints are external to the HAnimHumanoid and do not move with the human.
let Viewpoint6 = browser.currentScene.createNode("Viewpoint");
Viewpoint6.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint6.description = "Humanoid LOA 3 Front";
Viewpoint6.position = new SFVec3f(new float[0,0.4,4]);
browser.currentScene.children[3] = Viewpoint6;

let Viewpoint7 = browser.currentScene.createNode("Viewpoint");
Viewpoint7.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint7.description = "Humanoid LOA 3 Front Close";
Viewpoint7.position = new SFVec3f(new float[0,0.8,2]);
browser.currentScene.children[4] = Viewpoint7;

let Viewpoint8 = browser.currentScene.createNode("Viewpoint");
Viewpoint8.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint8.description = "Humanoid LOA 3 Front Closer";
Viewpoint8.position = new SFVec3f(new float[0,1.2,1]);
browser.currentScene.children[5] = Viewpoint8;

let Viewpoint9 = browser.currentScene.createNode("Viewpoint");
Viewpoint9.centerOfRotation = new SFVec3f(new float[0,1.5,0.0016]);
Viewpoint9.description = "Humanoid LOA 3 Front Face";
Viewpoint9.position = new SFVec3f(new float[0,1.63,1]);
browser.currentScene.children[6] = Viewpoint9;

let Viewpoint10 = browser.currentScene.createNode("Viewpoint");
Viewpoint10.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint10.description = "Humanoid LOA 3 Right Side";
Viewpoint10.orientation = new SFRotation(new float[0,1,0,1.5708]);
Viewpoint10.position = new SFVec3f(new float[2.6,0.8,0]);
browser.currentScene.children[7] = Viewpoint10;

let Viewpoint11 = browser.currentScene.createNode("Viewpoint");
Viewpoint11.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint11.description = "Humanoid LOA 3 Right Side Close";
Viewpoint11.orientation = new SFRotation(new float[0,1,0,1.2]);
Viewpoint11.position = new SFVec3f(new float[1,0.8,0.5]);
browser.currentScene.children[8] = Viewpoint11;

let Viewpoint12 = browser.currentScene.createNode("Viewpoint");
Viewpoint12.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint12.description = "Humanoid LOA 3 Left Side Close";
Viewpoint12.orientation = new SFRotation(new float[0,1,0,-1.2]);
Viewpoint12.position = new SFVec3f(new float[-1,0.8,0.5]);
browser.currentScene.children[9] = Viewpoint12;

let Viewpoint13 = browser.currentScene.createNode("Viewpoint");
Viewpoint13.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint13.description = "Humanoid LOA 3 Left Side";
Viewpoint13.orientation = new SFRotation(new float[0,1,0,-1.5708]);
Viewpoint13.position = new SFVec3f(new float[-2.6,0.8,0]);
browser.currentScene.children[10] = Viewpoint13;

let Viewpoint14 = browser.currentScene.createNode("Viewpoint");
Viewpoint14.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint14.description = "Humanoid LOA 3 Top";
Viewpoint14.orientation = new SFRotation(new float[1,0,0,-1.5708]);
Viewpoint14.position = new SFVec3f(new float[0,3.5,0]);
browser.currentScene.children[11] = Viewpoint14;

let HAnimHumanoid15 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid15.name = "humanoid";
HAnimHumanoid15.DEF = "hanim_humanoid";
HAnimHumanoid15.info = new MFString(new java.lang.String["authorName=Matthew T. Beitler Joe D. Williams Don Brutzman","authorEmail=HAnim@web3D.org","copyright=none","creationDate=12 May 1999","usageRestrictions=none","humanoidVersion=1.0","height=1.7504"]);
HAnimHumanoid15.version = "1.0";
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
//right between the eyes, stationary position not animating except with body itself
let HAnimJoint16 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint16.name = "humanoid_root";
HAnimJoint16.DEF = "hanim_humanoid_root";
HAnimJoint16.center = new SFVec3f(new float[0,0.824,0.0277]);
let HAnimSegment17 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment17.name = "sacrum";
HAnimSegment17.DEF = "hanim_sacrum";
HAnimJoint16.children = new MFNode();

HAnimJoint16.children[0] = HAnimSegment17;

let HAnimJoint18 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint18.name = "sacroiliac";
HAnimJoint18.DEF = "hanim_sacroiliac";
HAnimJoint18.center = new SFVec3f(new float[0,0.9149,0.0016]);
let HAnimSegment19 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment19.name = "pelvis";
HAnimSegment19.DEF = "hanim_pelvis";
let HAnimSite20 = browser.currentScene.createNode("HAnimSite");
HAnimSite20.name = "r_iliocristale_pt";
HAnimSite20.DEF = "hanim_r_iliocristale_pt";
HAnimSite20.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
HAnimSegment19.children = new MFNode();

HAnimSegment19.children[0] = HAnimSite20;

let HAnimSite21 = browser.currentScene.createNode("HAnimSite");
HAnimSite21.name = "r_trochanterion_pt";
HAnimSite21.DEF = "hanim_r_trochanterion_pt";
HAnimSite21.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
HAnimSegment19.children[1] = HAnimSite21;

let HAnimSite22 = browser.currentScene.createNode("HAnimSite");
HAnimSite22.name = "l_iliocristale_pt";
HAnimSite22.DEF = "hanim_l_iliocristale_pt";
HAnimSite22.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
HAnimSegment19.children[2] = HAnimSite22;

let HAnimSite23 = browser.currentScene.createNode("HAnimSite");
HAnimSite23.name = "l_trochanterion_pt";
HAnimSite23.DEF = "hanim_l_trochanterion_pt";
HAnimSite23.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
HAnimSegment19.children[3] = HAnimSite23;

let HAnimSite24 = browser.currentScene.createNode("HAnimSite");
HAnimSite24.name = "r_asis_pt";
HAnimSite24.DEF = "hanim_r_asis_pt";
HAnimSite24.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
HAnimSegment19.children[4] = HAnimSite24;

let HAnimSite25 = browser.currentScene.createNode("HAnimSite");
HAnimSite25.name = "l_asis_pt";
HAnimSite25.DEF = "hanim_l_asis_pt";
HAnimSite25.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
HAnimSegment19.children[5] = HAnimSite25;

let HAnimSite26 = browser.currentScene.createNode("HAnimSite");
HAnimSite26.name = "r_psis_pt";
HAnimSite26.DEF = "hanim_r_psis_pt";
HAnimSite26.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
HAnimSegment19.children[6] = HAnimSite26;

let HAnimSite27 = browser.currentScene.createNode("HAnimSite");
HAnimSite27.name = "l_psis_pt";
HAnimSite27.DEF = "hanim_l_psis_pt";
HAnimSite27.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
HAnimSegment19.children[7] = HAnimSite27;

let HAnimSite28 = browser.currentScene.createNode("HAnimSite");
HAnimSite28.name = "crotch_pt";
HAnimSite28.DEF = "hanim_crotch_pt";
HAnimSite28.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
HAnimSegment19.children[8] = HAnimSite28;

HAnimJoint18.children = new MFNode();

HAnimJoint18.children[0] = HAnimSegment19;

let HAnimJoint29 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint29.name = "l_hip";
HAnimJoint29.DEF = "hanim_l_hip";
HAnimJoint29.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
let HAnimSegment30 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment30.name = "l_thigh";
HAnimSegment30.DEF = "hanim_l_thigh";
let HAnimSite31 = browser.currentScene.createNode("HAnimSite");
HAnimSite31.name = "l_knee_crease_pt";
HAnimSite31.DEF = "hanim_l_knee_crease_pt";
HAnimSite31.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
HAnimSegment30.children = new MFNode();

HAnimSegment30.children[0] = HAnimSite31;

let HAnimSite32 = browser.currentScene.createNode("HAnimSite");
HAnimSite32.name = "l_femoral_lateral_epicn_pt";
HAnimSite32.DEF = "hanim_l_femoral_lateral_epicn_pt";
HAnimSite32.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
HAnimSegment30.children[1] = HAnimSite32;

let HAnimSite33 = browser.currentScene.createNode("HAnimSite");
HAnimSite33.name = "l_femoral_medial_epicn_pt";
HAnimSite33.DEF = "hanim_l_femoral_medial_epicn_pt";
HAnimSite33.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
HAnimSegment30.children[2] = HAnimSite33;

HAnimJoint29.children = new MFNode();

HAnimJoint29.children[0] = HAnimSegment30;

let HAnimJoint34 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint34.name = "l_knee";
HAnimJoint34.DEF = "hanim_l_knee";
HAnimJoint34.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
let HAnimSegment35 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment35.name = "l_calf";
HAnimSegment35.DEF = "hanim_l_calf";
HAnimJoint34.children = new MFNode();

HAnimJoint34.children[0] = HAnimSegment35;

let HAnimJoint36 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint36.name = "l_ankle";
HAnimJoint36.DEF = "hanim_l_ankle";
HAnimJoint36.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let HAnimSegment37 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment37.name = "l_hindfoot";
HAnimSegment37.DEF = "hanim_l_hindfoot";
let HAnimSite38 = browser.currentScene.createNode("HAnimSite");
HAnimSite38.name = "l_lateral_malleolus_pt";
HAnimSite38.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite38.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
HAnimSegment37.children = new MFNode();

HAnimSegment37.children[0] = HAnimSite38;

let HAnimSite39 = browser.currentScene.createNode("HAnimSite");
HAnimSite39.name = "l_medial_malleolus_pt";
HAnimSite39.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite39.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
HAnimSegment37.children[1] = HAnimSite39;

let HAnimSite40 = browser.currentScene.createNode("HAnimSite");
HAnimSite40.name = "l_sphyrion_pt";
HAnimSite40.DEF = "hanim_l_sphyrion_pt";
HAnimSite40.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
HAnimSegment37.children[2] = HAnimSite40;

let HAnimSite41 = browser.currentScene.createNode("HAnimSite");
HAnimSite41.name = "l_calcaneous_post_pt";
HAnimSite41.DEF = "hanim_l_calcaneous_post_pt";
HAnimSite41.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
HAnimSegment37.children[3] = HAnimSite41;

HAnimJoint36.children = new MFNode();

HAnimJoint36.children[0] = HAnimSegment37;

let HAnimJoint42 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint42.name = "l_subtalar";
HAnimJoint42.DEF = "hanim_l_subtalar";
HAnimJoint42.center = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
let HAnimSegment43 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment43.name = "l_midproximal";
HAnimSegment43.DEF = "hanim_l_midproximal";
HAnimJoint42.children = new MFNode();

HAnimJoint42.children[0] = HAnimSegment43;

let HAnimJoint44 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint44.name = "l_midtarsal";
HAnimJoint44.DEF = "hanim_l_midtarsal";
HAnimJoint44.center = new SFVec3f(new float[0.1086,0.0001,0.0368]);
let HAnimSegment45 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment45.name = "l_middistal";
HAnimSegment45.DEF = "hanim_l_middistal";
let HAnimSite46 = browser.currentScene.createNode("HAnimSite");
HAnimSite46.name = "l_metatarsal_pha1_pt";
HAnimSite46.DEF = "hanim_l_metatarsal_pha1_pt";
HAnimSite46.translation = new SFVec3f(new float[0.0816,0.0232,0.0106]);
HAnimSegment45.children = new MFNode();

HAnimSegment45.children[0] = HAnimSite46;

HAnimJoint44.children = new MFNode();

HAnimJoint44.children[0] = HAnimSegment45;

let HAnimJoint47 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint47.name = "l_metatarsal";
HAnimJoint47.DEF = "hanim_l_metatarsal";
HAnimJoint47.center = new SFVec3f(new float[0.1086,0,0.0762]);
let HAnimSegment48 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment48.name = "l_forefoot";
HAnimSegment48.DEF = "hanim_l_forefoot";
let HAnimSite49 = browser.currentScene.createNode("HAnimSite");
HAnimSite49.name = "l_forefoot_tip";
HAnimSite49.DEF = "hanim_l_forefoot_tip";
HAnimSite49.translation = new SFVec3f(new float[0.1354,0.0016,0.1476]);
HAnimSegment48.children = new MFNode();

HAnimSegment48.children[0] = HAnimSite49;

let HAnimSite50 = browser.currentScene.createNode("HAnimSite");
HAnimSite50.name = "l_metatarsal_pha5_pt";
HAnimSite50.DEF = "hanim_l_metatarsal_pha5_pt";
HAnimSite50.translation = new SFVec3f(new float[0.1825,0.007,0.0928]);
HAnimSegment48.children[1] = HAnimSite50;

let HAnimSite51 = browser.currentScene.createNode("HAnimSite");
HAnimSite51.name = "l_digit2_pt";
HAnimSite51.DEF = "hanim_l_digit2_pt";
HAnimSite51.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
HAnimSegment48.children[2] = HAnimSite51;

HAnimJoint47.children = new MFNode();

HAnimJoint47.children[0] = HAnimSegment48;

HAnimJoint44.children[1] = HAnimJoint47;

HAnimJoint42.children[1] = HAnimJoint44;

HAnimJoint36.children[1] = HAnimJoint42;

HAnimJoint34.children[1] = HAnimJoint36;

HAnimJoint29.children[1] = HAnimJoint34;

HAnimJoint18.children[1] = HAnimJoint29;

let HAnimJoint52 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint52.name = "r_hip";
HAnimJoint52.DEF = "hanim_r_hip";
HAnimJoint52.center = new SFVec3f(new float[-0.0961,0.9124,-0.0001]);
let HAnimSegment53 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment53.name = "r_thigh";
HAnimSegment53.DEF = "hanim_r_thigh";
let HAnimSite54 = browser.currentScene.createNode("HAnimSite");
HAnimSite54.name = "r_knee_crease_pt";
HAnimSite54.DEF = "hanim_r_knee_crease_pt";
HAnimSite54.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
HAnimSegment53.children = new MFNode();

HAnimSegment53.children[0] = HAnimSite54;

let HAnimSite55 = browser.currentScene.createNode("HAnimSite");
HAnimSite55.name = "r_femoral_lateral_epicn_pt";
HAnimSite55.DEF = "hanim_r_femoral_lateral_epicn_pt";
HAnimSite55.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
HAnimSegment53.children[1] = HAnimSite55;

let HAnimSite56 = browser.currentScene.createNode("HAnimSite");
HAnimSite56.name = "r_femoral_medial_epicn_pt";
HAnimSite56.DEF = "hanim_r_femoral_medial_epicn_pt";
HAnimSite56.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
HAnimSegment53.children[2] = HAnimSite56;

HAnimJoint52.children = new MFNode();

HAnimJoint52.children[0] = HAnimSegment53;

let HAnimJoint57 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint57.name = "r_knee";
HAnimJoint57.DEF = "hanim_r_knee";
HAnimJoint57.center = new SFVec3f(new float[-0.104,0.4867,0.0308]);
let HAnimSegment58 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment58.name = "r_calf";
HAnimSegment58.DEF = "hanim_r_calf";
HAnimJoint57.children = new MFNode();

HAnimJoint57.children[0] = HAnimSegment58;

let HAnimJoint59 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint59.name = "r_ankle";
HAnimJoint59.DEF = "hanim_r_ankle";
HAnimJoint59.center = new SFVec3f(new float[-0.1101,0.0656,-0.0736]);
let HAnimSegment60 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment60.name = "r_hindfoot";
HAnimSegment60.DEF = "hanim_r_hindfoot";
let HAnimSite61 = browser.currentScene.createNode("HAnimSite");
HAnimSite61.name = "r_lateral_malleolus_pt";
HAnimSite61.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite61.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
HAnimSegment60.children = new MFNode();

HAnimSegment60.children[0] = HAnimSite61;

let HAnimSite62 = browser.currentScene.createNode("HAnimSite");
HAnimSite62.name = "r_medial_malleolus_pt";
HAnimSite62.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite62.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
HAnimSegment60.children[1] = HAnimSite62;

let HAnimSite63 = browser.currentScene.createNode("HAnimSite");
HAnimSite63.name = "r_sphyrion_pt";
HAnimSite63.DEF = "hanim_r_sphyrion_pt";
HAnimSite63.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
HAnimSegment60.children[2] = HAnimSite63;

let HAnimSite64 = browser.currentScene.createNode("HAnimSite");
HAnimSite64.name = "r_calcaneous_post_pt";
HAnimSite64.DEF = "hanim_r_calcaneous_post_pt";
HAnimSite64.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
HAnimSegment60.children[3] = HAnimSite64;

HAnimJoint59.children = new MFNode();

HAnimJoint59.children[0] = HAnimSegment60;

let HAnimJoint65 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint65.name = "r_subtalar";
HAnimJoint65.DEF = "hanim_r_subtalar";
HAnimJoint65.center = new SFVec3f(new float[-0.1086,0.0001,-0.0368]);
let HAnimSegment66 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment66.name = "r_midproximal";
HAnimSegment66.DEF = "hanim_r_midproximal";
HAnimJoint65.children = new MFNode();

HAnimJoint65.children[0] = HAnimSegment66;

let HAnimJoint67 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint67.name = "r_midtarsal";
HAnimJoint67.DEF = "hanim_r_midtarsal";
HAnimJoint67.center = new SFVec3f(new float[-0.1086,0.0001,0.0368]);
let HAnimSegment68 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment68.name = "r_middistal";
HAnimSegment68.DEF = "hanim_r_middistal";
let HAnimSite69 = browser.currentScene.createNode("HAnimSite");
HAnimSite69.name = "r_metatarsal_pha1_pt";
HAnimSite69.DEF = "hanim_r_metatarsal_pha1_pt";
HAnimSite69.translation = new SFVec3f(new float[-0.0521,0.026,0.0127]);
HAnimSegment68.children = new MFNode();

HAnimSegment68.children[0] = HAnimSite69;

HAnimJoint67.children = new MFNode();

HAnimJoint67.children[0] = HAnimSegment68;

let HAnimJoint70 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint70.name = "r_metatarsal";
HAnimJoint70.DEF = "hanim_r_metatarsal";
HAnimJoint70.center = new SFVec3f(new float[-0.1086,0,0.0762]);
let HAnimSegment71 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment71.name = "r_forefoot";
HAnimSegment71.DEF = "hanim_r_forefoot";
let HAnimSite72 = browser.currentScene.createNode("HAnimSite");
HAnimSite72.name = "r_forefoot_tip";
HAnimSite72.DEF = "hanim_r_forefoot_tip";
HAnimSite72.translation = new SFVec3f(new float[-0.1043,0.0227,0.145]);
HAnimSegment71.children = new MFNode();

HAnimSegment71.children[0] = HAnimSite72;

let HAnimSite73 = browser.currentScene.createNode("HAnimSite");
HAnimSite73.name = "r_metatarsal_pha5_pt";
HAnimSite73.DEF = "hanim_r_metatarsal_pha5_pt";
HAnimSite73.translation = new SFVec3f(new float[-0.1523,0.0166,0.0895]);
HAnimSegment71.children[1] = HAnimSite73;

let HAnimSite74 = browser.currentScene.createNode("HAnimSite");
HAnimSite74.name = "r_digit2_pt";
HAnimSite74.DEF = "hanim_r_digit2_pt";
HAnimSite74.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
HAnimSegment71.children[2] = HAnimSite74;

HAnimJoint70.children = new MFNode();

HAnimJoint70.children[0] = HAnimSegment71;

HAnimJoint67.children[1] = HAnimJoint70;

HAnimJoint65.children[1] = HAnimJoint67;

HAnimJoint59.children[1] = HAnimJoint65;

HAnimJoint57.children[1] = HAnimJoint59;

HAnimJoint52.children[1] = HAnimJoint57;

HAnimJoint18.children[2] = HAnimJoint52;

HAnimJoint16.children[1] = HAnimJoint18;

let HAnimJoint75 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint75.name = "vl5";
HAnimJoint75.DEF = "hanim_vl5";
HAnimJoint75.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
let HAnimSegment76 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment76.name = "l5";
HAnimSegment76.DEF = "hanim_l5";
let HAnimSite77 = browser.currentScene.createNode("HAnimSite");
HAnimSite77.name = "waist_preferred_post_pt";
HAnimSite77.DEF = "hanim_waist_preferred_post_pt";
HAnimSite77.translation = new SFVec3f(new float[0,1.0915,-0.1091]);
HAnimSegment76.children = new MFNode();

HAnimSegment76.children[0] = HAnimSite77;

let HAnimSite78 = browser.currentScene.createNode("HAnimSite");
HAnimSite78.name = "navel_pt";
HAnimSite78.DEF = "hanim_navel_pt";
HAnimSite78.translation = new SFVec3f(new float[0.0069,1.0966,0.1017]);
HAnimSegment76.children[1] = HAnimSite78;

HAnimJoint75.children = new MFNode();

HAnimJoint75.children[0] = HAnimSegment76;

let HAnimJoint79 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint79.name = "vl4";
HAnimJoint79.DEF = "hanim_vl4";
HAnimJoint79.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
let HAnimSegment80 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment80.name = "l4";
HAnimSegment80.DEF = "hanim_l4";
HAnimJoint79.children = new MFNode();

HAnimJoint79.children[0] = HAnimSegment80;

let HAnimJoint81 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint81.name = "vl3";
HAnimJoint81.DEF = "hanim_vl3";
HAnimJoint81.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
let HAnimSegment82 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment82.name = "l3";
HAnimSegment82.DEF = "hanim_l3";
HAnimJoint81.children = new MFNode();

HAnimJoint81.children[0] = HAnimSegment82;

let HAnimJoint83 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint83.name = "vl2";
HAnimJoint83.DEF = "hanim_vl2";
HAnimJoint83.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
let HAnimSegment84 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment84.name = "l2";
HAnimSegment84.DEF = "hanim_l2";
let HAnimSite85 = browser.currentScene.createNode("HAnimSite");
HAnimSite85.name = "r_rib10_pt";
HAnimSite85.DEF = "hanim_r_rib10_pt";
HAnimSite85.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
HAnimSegment84.children = new MFNode();

HAnimSegment84.children[0] = HAnimSite85;

let HAnimSite86 = browser.currentScene.createNode("HAnimSite");
HAnimSite86.name = "l_rib10_pt";
HAnimSite86.DEF = "hanim_l_rib10_pt";
HAnimSite86.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
HAnimSegment84.children[1] = HAnimSite86;

let HAnimSite87 = browser.currentScene.createNode("HAnimSite");
HAnimSite87.name = "rib10_midspine_pt";
HAnimSite87.DEF = "hanim_rib10_midspine_pt";
HAnimSite87.translation = new SFVec3f(new float[0.0049,1.1908,-0.1113]);
HAnimSegment84.children[2] = HAnimSite87;

HAnimJoint83.children = new MFNode();

HAnimJoint83.children[0] = HAnimSegment84;

let HAnimJoint88 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint88.name = "vl1";
HAnimJoint88.DEF = "hanim_vl1";
HAnimJoint88.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
let HAnimSegment89 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment89.name = "l1";
HAnimSegment89.DEF = "hanim_l1";
HAnimJoint88.children = new MFNode();

HAnimJoint88.children[0] = HAnimSegment89;

let HAnimJoint90 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint90.name = "vt12";
HAnimJoint90.DEF = "hanim_vt12";
HAnimJoint90.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
let HAnimSegment91 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment91.name = "t12";
HAnimSegment91.DEF = "hanim_t12";
HAnimJoint90.children = new MFNode();

HAnimJoint90.children[0] = HAnimSegment91;

let HAnimJoint92 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint92.name = "vt11";
HAnimJoint92.DEF = "hanim_vt11";
HAnimJoint92.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
let HAnimSegment93 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment93.name = "t11";
HAnimSegment93.DEF = "hanim_t11";
HAnimJoint92.children = new MFNode();

HAnimJoint92.children[0] = HAnimSegment93;

let HAnimJoint94 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint94.name = "vt10";
HAnimJoint94.DEF = "hanim_vt10";
HAnimJoint94.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
let HAnimSegment95 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment95.name = "t10";
HAnimSegment95.DEF = "hanim_t10";
let HAnimSite96 = browser.currentScene.createNode("HAnimSite");
HAnimSite96.name = "substernale_pt";
HAnimSite96.DEF = "hanim_substernale_pt";
HAnimSite96.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
HAnimSegment95.children = new MFNode();

HAnimSegment95.children[0] = HAnimSite96;

HAnimJoint94.children = new MFNode();

HAnimJoint94.children[0] = HAnimSegment95;

let HAnimJoint97 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint97.name = "vt9";
HAnimJoint97.DEF = "hanim_vt9";
HAnimJoint97.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
let HAnimSegment98 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment98.name = "t9";
HAnimSegment98.DEF = "hanim_t9";
let HAnimSite99 = browser.currentScene.createNode("HAnimSite");
HAnimSite99.name = "r_thelion_pt";
HAnimSite99.DEF = "hanim_r_thelion_pt";
HAnimSite99.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
HAnimSegment98.children = new MFNode();

HAnimSegment98.children[0] = HAnimSite99;

let HAnimSite100 = browser.currentScene.createNode("HAnimSite");
HAnimSite100.name = "l_thelion_pt";
HAnimSite100.DEF = "hanim_l_thelion_pt";
HAnimSite100.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
HAnimSegment98.children[1] = HAnimSite100;

HAnimJoint97.children = new MFNode();

HAnimJoint97.children[0] = HAnimSegment98;

let HAnimJoint101 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint101.name = "vt8";
HAnimJoint101.DEF = "hanim_vt8";
HAnimJoint101.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
let HAnimSegment102 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment102.name = "t8";
HAnimSegment102.DEF = "hanim_t8";
HAnimJoint101.children = new MFNode();

HAnimJoint101.children[0] = HAnimSegment102;

let HAnimJoint103 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint103.name = "vt7";
HAnimJoint103.DEF = "hanim_vt7";
HAnimJoint103.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
let HAnimSegment104 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment104.name = "t7";
HAnimSegment104.DEF = "hanim_t7";
HAnimJoint103.children = new MFNode();

HAnimJoint103.children[0] = HAnimSegment104;

let HAnimJoint105 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint105.name = "vt6";
HAnimJoint105.DEF = "hanim_vt6";
HAnimJoint105.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
let HAnimSegment106 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment106.name = "t6";
HAnimSegment106.DEF = "hanim_t6";
HAnimJoint105.children = new MFNode();

HAnimJoint105.children[0] = HAnimSegment106;

let HAnimJoint107 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint107.name = "vt5";
HAnimJoint107.DEF = "hanim_vt5";
HAnimJoint107.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
let HAnimSegment108 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment108.name = "t5";
HAnimSegment108.DEF = "hanim_t5";
HAnimJoint107.children = new MFNode();

HAnimJoint107.children[0] = HAnimSegment108;

let HAnimJoint109 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint109.name = "vt4";
HAnimJoint109.DEF = "hanim_vt4";
HAnimJoint109.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
let HAnimSegment110 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment110.name = "t4";
HAnimSegment110.DEF = "hanim_t4";
HAnimJoint109.children = new MFNode();

HAnimJoint109.children[0] = HAnimSegment110;

let HAnimJoint111 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint111.name = "vt3";
HAnimJoint111.DEF = "hanim_vt3";
HAnimJoint111.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
let HAnimSegment112 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment112.name = "t3";
HAnimSegment112.DEF = "hanim_t3";
HAnimJoint111.children = new MFNode();

HAnimJoint111.children[0] = HAnimSegment112;

let HAnimJoint113 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint113.name = "vt2";
HAnimJoint113.DEF = "hanim_vt2";
HAnimJoint113.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
let HAnimSegment114 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment114.name = "t2";
HAnimSegment114.DEF = "hanim_t2";
HAnimJoint113.children = new MFNode();

HAnimJoint113.children[0] = HAnimSegment114;

let HAnimJoint115 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint115.name = "vt1";
HAnimJoint115.DEF = "hanim_vt1";
HAnimJoint115.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
let HAnimSegment116 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment116.name = "t1";
HAnimSegment116.DEF = "hanim_t1";
let HAnimSite117 = browser.currentScene.createNode("HAnimSite");
HAnimSite117.name = "suprasternale_pt";
HAnimSite117.DEF = "hanim_suprasternale_pt";
HAnimSite117.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
HAnimSegment116.children = new MFNode();

HAnimSegment116.children[0] = HAnimSite117;

let HAnimSite118 = browser.currentScene.createNode("HAnimSite");
HAnimSite118.name = "cervicale_pt";
HAnimSite118.DEF = "hanim_cervicale_pt";
HAnimSite118.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
HAnimSegment116.children[1] = HAnimSite118;

HAnimJoint115.children = new MFNode();

HAnimJoint115.children[0] = HAnimSegment116;

let HAnimJoint119 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint119.name = "vc7";
HAnimJoint119.DEF = "hanim_vc7";
HAnimJoint119.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
let HAnimSegment120 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment120.name = "c7";
HAnimSegment120.DEF = "hanim_c7";
let HAnimSite121 = browser.currentScene.createNode("HAnimSite");
HAnimSite121.name = "r_neck_base_pt";
HAnimSite121.DEF = "hanim_r_neck_base_pt";
HAnimSite121.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
HAnimSegment120.children = new MFNode();

HAnimSegment120.children[0] = HAnimSite121;

let HAnimSite122 = browser.currentScene.createNode("HAnimSite");
HAnimSite122.name = "l_neck_base_pt";
HAnimSite122.DEF = "hanim_l_neck_base_pt";
HAnimSite122.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
HAnimSegment120.children[1] = HAnimSite122;

HAnimJoint119.children = new MFNode();

HAnimJoint119.children[0] = HAnimSegment120;

let HAnimJoint123 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint123.name = "vc6";
HAnimJoint123.DEF = "hanim_vc6";
HAnimJoint123.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
let HAnimSegment124 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment124.name = "c6";
HAnimSegment124.DEF = "hanim_c6";
HAnimJoint123.children = new MFNode();

HAnimJoint123.children[0] = HAnimSegment124;

let HAnimJoint125 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint125.name = "vc5";
HAnimJoint125.DEF = "hanim_vc5";
HAnimJoint125.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
let HAnimSegment126 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment126.name = "c5";
HAnimSegment126.DEF = "hanim_c5";
HAnimJoint125.children = new MFNode();

HAnimJoint125.children[0] = HAnimSegment126;

let HAnimJoint127 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint127.name = "vc4";
HAnimJoint127.DEF = "hanim_vc4";
HAnimJoint127.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
let HAnimSegment128 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment128.name = "c4";
HAnimSegment128.DEF = "hanim_c4";
HAnimJoint127.children = new MFNode();

HAnimJoint127.children[0] = HAnimSegment128;

let HAnimJoint129 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint129.name = "vc3";
HAnimJoint129.DEF = "hanim_vc3";
HAnimJoint129.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
let HAnimSegment130 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment130.name = "c3";
HAnimSegment130.DEF = "hanim_c3";
HAnimJoint129.children = new MFNode();

HAnimJoint129.children[0] = HAnimSegment130;

let HAnimJoint131 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint131.name = "vc2";
HAnimJoint131.DEF = "hanim_vc2";
HAnimJoint131.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
let HAnimSegment132 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment132.name = "c2";
HAnimSegment132.DEF = "hanim_c2";
HAnimJoint131.children = new MFNode();

HAnimJoint131.children[0] = HAnimSegment132;

let HAnimJoint133 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint133.name = "vc1";
HAnimJoint133.DEF = "hanim_vc1";
HAnimJoint133.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
let HAnimSegment134 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment134.name = "c1";
HAnimSegment134.DEF = "hanim_c1";
HAnimJoint133.children = new MFNode();

HAnimJoint133.children[0] = HAnimSegment134;

let HAnimJoint135 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint135.name = "skullbase";
HAnimJoint135.DEF = "hanim_skullbase";
HAnimJoint135.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
let HAnimSegment136 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment136.name = "skull";
HAnimSegment136.DEF = "hanim_skull";
let HAnimSite137 = browser.currentScene.createNode("HAnimSite");
HAnimSite137.name = "skull_tip";
HAnimSite137.DEF = "hanim_skull_tip";
HAnimSite137.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
//TODO move skull_tip x to zero, check others for symmetry
HAnimSegment136.children = new MFNode();

HAnimSegment136.children[0] = HAnimSite137;

let HAnimSite138 = browser.currentScene.createNode("HAnimSite");
HAnimSite138.name = "sellion_pt";
HAnimSite138.DEF = "hanim_sellion_pt";
HAnimSite138.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
HAnimSegment136.children[1] = HAnimSite138;

let HAnimSite139 = browser.currentScene.createNode("HAnimSite");
HAnimSite139.name = "r_infraorbitale_pt";
HAnimSite139.DEF = "hanim_r_infraorbitale_pt";
HAnimSite139.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
HAnimSegment136.children[2] = HAnimSite139;

let HAnimSite140 = browser.currentScene.createNode("HAnimSite");
HAnimSite140.name = "l_infraorbitale_pt";
HAnimSite140.DEF = "hanim_l_infraorbitale_pt";
HAnimSite140.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
HAnimSegment136.children[3] = HAnimSite140;

let HAnimSite141 = browser.currentScene.createNode("HAnimSite");
HAnimSite141.name = "supramenton_pt";
HAnimSite141.DEF = "hanim_supramenton_pt";
HAnimSite141.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
HAnimSegment136.children[4] = HAnimSite141;

let HAnimSite142 = browser.currentScene.createNode("HAnimSite");
HAnimSite142.name = "r_tragion_pt";
HAnimSite142.DEF = "hanim_r_tragion_pt";
HAnimSite142.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
HAnimSegment136.children[5] = HAnimSite142;

let HAnimSite143 = browser.currentScene.createNode("HAnimSite");
HAnimSite143.name = "r_gonion_pt";
HAnimSite143.DEF = "hanim_r_gonion_pt";
HAnimSite143.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
HAnimSegment136.children[6] = HAnimSite143;

let HAnimSite144 = browser.currentScene.createNode("HAnimSite");
HAnimSite144.name = "l_tragion_pt";
HAnimSite144.DEF = "hanim_l_tragion_pt";
HAnimSite144.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
HAnimSegment136.children[7] = HAnimSite144;

let HAnimSite145 = browser.currentScene.createNode("HAnimSite");
HAnimSite145.name = "l_gonion_pt";
HAnimSite145.DEF = "hanim_l_gonion_pt";
HAnimSite145.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
HAnimSegment136.children[8] = HAnimSite145;

let HAnimSite146 = browser.currentScene.createNode("HAnimSite");
HAnimSite146.name = "nuchale_pt";
HAnimSite146.DEF = "hanim_nuchale_pt";
HAnimSite146.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
HAnimSegment136.children[9] = HAnimSite146;

HAnimJoint135.children = new MFNode();

HAnimJoint135.children[0] = HAnimSegment136;

let HAnimJoint147 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint147.name = "l_eyeball_joint";
HAnimJoint147.DEF = "hanim_l_eyeball_joint";
HAnimJoint147.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
let HAnimSegment148 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment148.name = "l_eyeball";
HAnimSegment148.DEF = "hanim_l_eyeball";
let HAnimSite149 = browser.currentScene.createNode("HAnimSite");
HAnimSite149.name = "l_eyeball_site_view";
HAnimSite149.DEF = "hanim_l_eyeball_site_view";
HAnimSite149.translation = new SFVec3f(new float[0.034,1.64,0.05]);
let Viewpoint150 = browser.currentScene.createNode("Viewpoint");
Viewpoint150.DEF = "hanim_l_eyeball_site_viewpoint";
Viewpoint150.description = "l_eyeball_site_viewpoint looking forward";
Viewpoint150.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint150.position = new SFVec3f(new float[0,0,0]);
HAnimSite149.children = new MFNode();

HAnimSite149.children[0] = Viewpoint150;

HAnimSegment148.children = new MFNode();

HAnimSegment148.children[0] = HAnimSite149;

HAnimJoint147.children = new MFNode();

HAnimJoint147.children[0] = HAnimSegment148;

HAnimJoint135.children[1] = HAnimJoint147;

let HAnimJoint151 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint151.name = "l_eyelid_joint";
HAnimJoint151.DEF = "hanim_l_eyelid_joint";
HAnimJoint151.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
let HAnimSegment152 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment152.name = "l_eyelid";
HAnimSegment152.DEF = "hanim_l_eyelid";
HAnimJoint151.children = new MFNode();

HAnimJoint151.children[0] = HAnimSegment152;

HAnimJoint135.children[2] = HAnimJoint151;

let HAnimJoint153 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint153.name = "l_eyebrow_joint";
HAnimJoint153.DEF = "hanim_l_eyebrow_joint";
HAnimJoint153.center = new SFVec3f(new float[0.0336,1.635,0.0506]);
let HAnimSegment154 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment154.name = "l_eyebrow";
HAnimSegment154.DEF = "hanim_l_eyebrow";
HAnimJoint153.children = new MFNode();

HAnimJoint153.children[0] = HAnimSegment154;

HAnimJoint135.children[3] = HAnimJoint153;

let HAnimJoint155 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint155.name = "r_eyeball_joint";
HAnimJoint155.DEF = "hanim_r_eyeball_joint";
HAnimJoint155.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
let HAnimSegment156 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment156.name = "r_eyeball";
HAnimSegment156.DEF = "hanim_r_eyeball";
let HAnimSite157 = browser.currentScene.createNode("HAnimSite");
HAnimSite157.name = "r_eyeball_site_view";
HAnimSite157.DEF = "hanim_r_eyeball_site_view";
HAnimSite157.translation = new SFVec3f(new float[-0.034,1.64,0.05]);
let Viewpoint158 = browser.currentScene.createNode("Viewpoint");
Viewpoint158.DEF = "hanim_r_eyeball_site_viewpoint";
Viewpoint158.description = "r_eyeball_site_viewpoint looking forward";
Viewpoint158.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint158.position = new SFVec3f(new float[0,0,0]);
HAnimSite157.children = new MFNode();

HAnimSite157.children[0] = Viewpoint158;

HAnimSegment156.children = new MFNode();

HAnimSegment156.children[0] = HAnimSite157;

HAnimJoint155.children = new MFNode();

HAnimJoint155.children[0] = HAnimSegment156;

HAnimJoint135.children[4] = HAnimJoint155;

let HAnimJoint159 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint159.name = "r_eyelid_joint";
HAnimJoint159.DEF = "hanim_r_eyelid_joint";
HAnimJoint159.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
let HAnimSegment160 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment160.name = "r_eyelid";
HAnimSegment160.DEF = "hanim_r_eyelid";
HAnimJoint159.children = new MFNode();

HAnimJoint159.children[0] = HAnimSegment160;

HAnimJoint135.children[5] = HAnimJoint159;

let HAnimJoint161 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint161.name = "r_eyebrow_joint";
HAnimJoint161.DEF = "hanim_r_eyebrow_joint";
HAnimJoint161.center = new SFVec3f(new float[-0.0336,1.635,0.0506]);
let HAnimSegment162 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment162.name = "r_eyebrow";
HAnimSegment162.DEF = "hanim_r_eyebrow";
HAnimJoint161.children = new MFNode();

HAnimJoint161.children[0] = HAnimSegment162;

HAnimJoint135.children[6] = HAnimJoint161;

let HAnimJoint163 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint163.name = "temporomandibular";
HAnimJoint163.DEF = "hanim_temporomandibular";
HAnimJoint163.center = new SFVec3f(new float[0,1.63,0.015]);
//Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint
let HAnimSegment164 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment164.name = "jaw";
HAnimSegment164.DEF = "hanim_jaw";
let HAnimSite165 = browser.currentScene.createNode("HAnimSite");
HAnimSite165.name = "temporomandibular_l_site_pt";
HAnimSite165.DEF = "hanim_temporomandibular_l_site_pt";
HAnimSite165.translation = new SFVec3f(new float[0.045,1.63,0]);
HAnimSegment164.children = new MFNode();

HAnimSegment164.children[0] = HAnimSite165;

let HAnimSite166 = browser.currentScene.createNode("HAnimSite");
HAnimSite166.name = "temporomandibular_r_site_pt";
HAnimSite166.DEF = "hanim_temporomandibular_r_site_pt";
HAnimSite166.translation = new SFVec3f(new float[-0.045,1.63,0]);
HAnimSegment164.children[1] = HAnimSite166;

HAnimJoint163.children = new MFNode();

HAnimJoint163.children[0] = HAnimSegment164;

HAnimJoint135.children[7] = HAnimJoint163;

HAnimJoint133.children[1] = HAnimJoint135;

HAnimJoint131.children[1] = HAnimJoint133;

HAnimJoint129.children[1] = HAnimJoint131;

HAnimJoint127.children[1] = HAnimJoint129;

HAnimJoint125.children[1] = HAnimJoint127;

HAnimJoint123.children[1] = HAnimJoint125;

HAnimJoint119.children[1] = HAnimJoint123;

HAnimJoint115.children[1] = HAnimJoint119;

let HAnimJoint167 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint167.name = "l_sternoclavicular";
HAnimJoint167.DEF = "hanim_l_sternoclavicular";
HAnimJoint167.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
let HAnimSegment168 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment168.name = "l_clavicle";
HAnimSegment168.DEF = "hanim_l_clavicle";
let HAnimSite169 = browser.currentScene.createNode("HAnimSite");
HAnimSite169.name = "l_clavicale_pt";
HAnimSite169.DEF = "hanim_l_clavicale_pt";
HAnimSite169.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
HAnimSegment168.children = new MFNode();

HAnimSegment168.children[0] = HAnimSite169;

let HAnimSite170 = browser.currentScene.createNode("HAnimSite");
HAnimSite170.name = "l_acromion_pt";
HAnimSite170.DEF = "hanim_l_acromion_pt";
HAnimSite170.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
HAnimSegment168.children[1] = HAnimSite170;

let HAnimSite171 = browser.currentScene.createNode("HAnimSite");
HAnimSite171.name = "l_axilla_ant_pt";
HAnimSite171.DEF = "hanim_l_axilla_ant_pt";
HAnimSite171.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
HAnimSegment168.children[2] = HAnimSite171;

let HAnimSite172 = browser.currentScene.createNode("HAnimSite");
HAnimSite172.name = "l_axilla_post_pt";
HAnimSite172.DEF = "hanim_l_axilla_post_pt";
HAnimSite172.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
HAnimSegment168.children[3] = HAnimSite172;

HAnimJoint167.children = new MFNode();

HAnimJoint167.children[0] = HAnimSegment168;

let HAnimJoint173 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint173.name = "l_acromioclavicular";
HAnimJoint173.DEF = "hanim_l_acromioclavicular";
HAnimJoint173.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
let HAnimSegment174 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment174.name = "l_scapula";
HAnimSegment174.DEF = "hanim_l_scapula";
HAnimJoint173.children = new MFNode();

HAnimJoint173.children[0] = HAnimSegment174;

let HAnimJoint175 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint175.name = "l_shoulder";
HAnimJoint175.DEF = "hanim_l_shoulder";
HAnimJoint175.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
let HAnimSegment176 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment176.name = "l_upperarm";
HAnimSegment176.DEF = "hanim_l_upperarm";
let HAnimSite177 = browser.currentScene.createNode("HAnimSite");
HAnimSite177.name = "l_humeral_lateral_epicn_pt";
HAnimSite177.DEF = "hanim_l_humeral_lateral_epicn_pt";
HAnimSite177.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
HAnimSegment176.children = new MFNode();

HAnimSegment176.children[0] = HAnimSite177;

HAnimJoint175.children = new MFNode();

HAnimJoint175.children[0] = HAnimSegment176;

let HAnimJoint178 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint178.name = "l_elbow";
HAnimJoint178.DEF = "hanim_l_elbow";
HAnimJoint178.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
let HAnimSegment179 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment179.name = "l_forearm";
HAnimSegment179.DEF = "hanim_l_forearm";
let HAnimSite180 = browser.currentScene.createNode("HAnimSite");
HAnimSite180.name = "l_radial_styloid_pt";
HAnimSite180.DEF = "hanim_l_radial_styloid_pt";
HAnimSite180.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
HAnimSegment179.children = new MFNode();

HAnimSegment179.children[0] = HAnimSite180;

let HAnimSite181 = browser.currentScene.createNode("HAnimSite");
HAnimSite181.name = "l_olecranon_pt";
HAnimSite181.DEF = "hanim_l_olecranon_pt";
HAnimSite181.translation = new SFVec3f(new float[0.1962,1.1375,-0.1123]);
HAnimSegment179.children[1] = HAnimSite181;

let HAnimSite182 = browser.currentScene.createNode("HAnimSite");
HAnimSite182.name = "l_humeral_medial_epicn_pt";
HAnimSite182.DEF = "hanim_l_humeral_medial_epicn_pt";
HAnimSite182.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
HAnimSegment179.children[2] = HAnimSite182;

let HAnimSite183 = browser.currentScene.createNode("HAnimSite");
HAnimSite183.name = "l_radiale_pt";
HAnimSite183.DEF = "hanim_l_radiale_pt";
HAnimSite183.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
HAnimSegment179.children[3] = HAnimSite183;

HAnimJoint178.children = new MFNode();

HAnimJoint178.children[0] = HAnimSegment179;

let HAnimJoint184 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint184.name = "l_wrist";
HAnimJoint184.DEF = "hanim_l_wrist";
HAnimJoint184.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
let HAnimSegment185 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment185.name = "l_hand";
HAnimSegment185.DEF = "hanim_l_hand";
let HAnimSite186 = browser.currentScene.createNode("HAnimSite");
HAnimSite186.name = "l_metacarpal_pha2_pt";
HAnimSite186.DEF = "hanim_l_metacarpal_pha2_pt";
HAnimSite186.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
HAnimSegment185.children = new MFNode();

HAnimSegment185.children[0] = HAnimSite186;

let HAnimSite187 = browser.currentScene.createNode("HAnimSite");
HAnimSite187.name = "l_ulnar_styloid_pt";
HAnimSite187.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite187.translation = new SFVec3f(new float[0.2142,0.8529,-0.0648]);
HAnimSegment185.children[1] = HAnimSite187;

let HAnimSite188 = browser.currentScene.createNode("HAnimSite");
HAnimSite188.name = "l_metacarpal_pha5_pt";
HAnimSite188.DEF = "hanim_l_metacarpal_pha5_pt";
HAnimSite188.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
HAnimSegment185.children[2] = HAnimSite188;

let HAnimSite189 = browser.currentScene.createNode("HAnimSite");
HAnimSite189.name = "l_hand_front_view";
HAnimSite189.DEF = "hanim_l_hand_front_view";
HAnimSite189.translation = new SFVec3f(new float[0.3,0.75,0.45]);
let Viewpoint190 = browser.currentScene.createNode("Viewpoint");
Viewpoint190.DEF = "hanim_l_hand_front_viewpoint";
Viewpoint190.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
Viewpoint190.description = "left hand front";
Viewpoint190.position = new SFVec3f(new float[0,0,0]);
HAnimSite189.children = new MFNode();

HAnimSite189.children[0] = Viewpoint190;

HAnimSegment185.children[3] = HAnimSite189;

HAnimJoint184.children = new MFNode();

HAnimJoint184.children[0] = HAnimSegment185;

let HAnimJoint191 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint191.name = "l_thumb1";
HAnimJoint191.DEF = "hanim_l_thumb1";
HAnimJoint191.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
let HAnimSegment192 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment192.name = "l_thumb_metacarpal";
HAnimSegment192.DEF = "hanim_l_thumb_metacarpal";
HAnimJoint191.children = new MFNode();

HAnimJoint191.children[0] = HAnimSegment192;

let HAnimJoint193 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint193.name = "l_thumb2";
HAnimJoint193.DEF = "hanim_l_thumb2";
HAnimJoint193.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
let HAnimSegment194 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment194.name = "l_thumb_proximal";
HAnimSegment194.DEF = "hanim_l_thumb_proximal";
HAnimJoint193.children = new MFNode();

HAnimJoint193.children[0] = HAnimSegment194;

let HAnimJoint195 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint195.name = "l_thumb3";
HAnimJoint195.DEF = "hanim_l_thumb3";
HAnimJoint195.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
let HAnimSegment196 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment196.name = "l_thumb_distal";
HAnimSegment196.DEF = "hanim_l_thumb_distal";
let HAnimSite197 = browser.currentScene.createNode("HAnimSite");
HAnimSite197.name = "l_thumb_distal_tip";
HAnimSite197.DEF = "hanim_l_thumb_distal_tip";
HAnimSite197.translation = new SFVec3f(new float[0.1982,0.8061,0.0759]);
HAnimSegment196.children = new MFNode();

HAnimSegment196.children[0] = HAnimSite197;

HAnimJoint195.children = new MFNode();

HAnimJoint195.children[0] = HAnimSegment196;

HAnimJoint193.children[1] = HAnimJoint195;

HAnimJoint191.children[1] = HAnimJoint193;

HAnimJoint184.children[1] = HAnimJoint191;

let HAnimJoint198 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint198.name = "l_index0";
HAnimJoint198.DEF = "hanim_l_index0";
HAnimJoint198.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
let HAnimSegment199 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment199.name = "l_index_metacarpal";
HAnimSegment199.DEF = "hanim_l_index_metacarpal";
HAnimJoint198.children = new MFNode();

HAnimJoint198.children[0] = HAnimSegment199;

let HAnimJoint200 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint200.name = "l_index1";
HAnimJoint200.DEF = "hanim_l_index1";
HAnimJoint200.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
let HAnimSegment201 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment201.name = "l_index_proximal";
HAnimSegment201.DEF = "hanim_l_index_proximal";
HAnimJoint200.children = new MFNode();

HAnimJoint200.children[0] = HAnimSegment201;

let HAnimJoint202 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint202.name = "l_index2";
HAnimJoint202.DEF = "hanim_l_index2";
HAnimJoint202.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
let HAnimSegment203 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment203.name = "l_index_middle";
HAnimSegment203.DEF = "hanim_l_index_middle";
HAnimJoint202.children = new MFNode();

HAnimJoint202.children[0] = HAnimSegment203;

let HAnimJoint204 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint204.name = "l_index3";
HAnimJoint204.DEF = "hanim_l_index3";
HAnimJoint204.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
let HAnimSegment205 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment205.name = "l_index_distal";
HAnimSegment205.DEF = "hanim_l_index_distal";
let HAnimSite206 = browser.currentScene.createNode("HAnimSite");
HAnimSite206.name = "l_index_distal_tip";
HAnimSite206.DEF = "hanim_l_index_distal_tip";
HAnimSite206.translation = new SFVec3f(new float[0.2089,0.6858,-0.0245]);
HAnimSegment205.children = new MFNode();

HAnimSegment205.children[0] = HAnimSite206;

let HAnimSite207 = browser.currentScene.createNode("HAnimSite");
HAnimSite207.name = "l_dactylion_pt";
HAnimSite207.DEF = "hanim_l_dactylion_pt";
HAnimSite207.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
HAnimSegment205.children[1] = HAnimSite207;

HAnimJoint204.children = new MFNode();

HAnimJoint204.children[0] = HAnimSegment205;

HAnimJoint202.children[1] = HAnimJoint204;

HAnimJoint200.children[1] = HAnimJoint202;

HAnimJoint198.children[1] = HAnimJoint200;

HAnimJoint184.children[2] = HAnimJoint198;

let HAnimJoint208 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint208.name = "l_middle0";
HAnimJoint208.DEF = "hanim_l_middle0";
HAnimJoint208.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
let HAnimSegment209 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment209.name = "l_middle_metacarpal";
HAnimSegment209.DEF = "hanim_l_middle_metacarpal";
HAnimJoint208.children = new MFNode();

HAnimJoint208.children[0] = HAnimSegment209;

let HAnimJoint210 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint210.name = "l_middle1";
HAnimJoint210.DEF = "hanim_l_middle1";
HAnimJoint210.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
let HAnimSegment211 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment211.name = "l_middle_proximal";
HAnimSegment211.DEF = "hanim_l_middle_proximal";
HAnimJoint210.children = new MFNode();

HAnimJoint210.children[0] = HAnimSegment211;

let HAnimJoint212 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint212.name = "l_middle2";
HAnimJoint212.DEF = "hanim_l_middle2";
HAnimJoint212.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
let HAnimSegment213 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment213.name = "l_middle_middle";
HAnimSegment213.DEF = "hanim_l_middle_middle";
HAnimJoint212.children = new MFNode();

HAnimJoint212.children[0] = HAnimSegment213;

let HAnimJoint214 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint214.name = "l_middle3";
HAnimJoint214.DEF = "hanim_l_middle3";
HAnimJoint214.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
let HAnimSegment215 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment215.name = "l_middle_distal";
HAnimSegment215.DEF = "hanim_l_middle_distal";
let HAnimSite216 = browser.currentScene.createNode("HAnimSite");
HAnimSite216.name = "l_middle_distal_tip";
HAnimSite216.DEF = "hanim_l_middle_distal_tip";
HAnimSite216.translation = new SFVec3f(new float[0.208,0.6731,-0.0491]);
HAnimSegment215.children = new MFNode();

HAnimSegment215.children[0] = HAnimSite216;

HAnimJoint214.children = new MFNode();

HAnimJoint214.children[0] = HAnimSegment215;

HAnimJoint212.children[1] = HAnimJoint214;

HAnimJoint210.children[1] = HAnimJoint212;

HAnimJoint208.children[1] = HAnimJoint210;

HAnimJoint184.children[3] = HAnimJoint208;

let HAnimJoint217 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint217.name = "l_ring0";
HAnimJoint217.DEF = "hanim_l_ring0";
HAnimJoint217.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
let HAnimSegment218 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment218.name = "l_ring_metacarpal";
HAnimSegment218.DEF = "hanim_l_ring_metacarpal";
HAnimJoint217.children = new MFNode();

HAnimJoint217.children[0] = HAnimSegment218;

let HAnimJoint219 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint219.name = "l_ring1";
HAnimJoint219.DEF = "hanim_l_ring1";
HAnimJoint219.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
let HAnimSegment220 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment220.name = "l_ring_proximal";
HAnimSegment220.DEF = "hanim_l_ring_proximal";
HAnimJoint219.children = new MFNode();

HAnimJoint219.children[0] = HAnimSegment220;

let HAnimJoint221 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint221.name = "l_ring2";
HAnimJoint221.DEF = "hanim_l_ring2";
HAnimJoint221.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
let HAnimSegment222 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment222.name = "l_ring_middle";
HAnimSegment222.DEF = "hanim_l_ring_middle";
HAnimJoint221.children = new MFNode();

HAnimJoint221.children[0] = HAnimSegment222;

let HAnimJoint223 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint223.name = "l_ring3";
HAnimJoint223.DEF = "hanim_l_ring3";
HAnimJoint223.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
let HAnimSegment224 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment224.name = "l_ring_distal";
HAnimSegment224.DEF = "hanim_l_ring_distal";
let HAnimSite225 = browser.currentScene.createNode("HAnimSite");
HAnimSite225.name = "l_ring_distal_tip";
HAnimSite225.DEF = "hanim_l_ring_distal_tip";
HAnimSite225.translation = new SFVec3f(new float[0.2035,0.675,-0.0756]);
HAnimSegment224.children = new MFNode();

HAnimSegment224.children[0] = HAnimSite225;

HAnimJoint223.children = new MFNode();

HAnimJoint223.children[0] = HAnimSegment224;

HAnimJoint221.children[1] = HAnimJoint223;

HAnimJoint219.children[1] = HAnimJoint221;

HAnimJoint217.children[1] = HAnimJoint219;

HAnimJoint184.children[4] = HAnimJoint217;

let HAnimJoint226 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint226.name = "l_pinky0";
HAnimJoint226.DEF = "hanim_l_pinky0";
HAnimJoint226.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
let HAnimSegment227 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment227.name = "l_pinky_metacarpal";
HAnimSegment227.DEF = "hanim_l_pinky_metacarpal";
HAnimJoint226.children = new MFNode();

HAnimJoint226.children[0] = HAnimSegment227;

let HAnimJoint228 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint228.name = "l_pinky1";
HAnimJoint228.DEF = "hanim_l_pinky1";
HAnimJoint228.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
let HAnimSegment229 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment229.name = "l_pinky_proximal";
HAnimSegment229.DEF = "hanim_l_pinky_proximal";
HAnimJoint228.children = new MFNode();

HAnimJoint228.children[0] = HAnimSegment229;

let HAnimJoint230 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint230.name = "l_pinky2";
HAnimJoint230.DEF = "hanim_l_pinky2";
HAnimJoint230.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
let HAnimSegment231 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment231.name = "l_pinky_middle";
HAnimSegment231.DEF = "hanim_l_pinky_middle";
HAnimJoint230.children = new MFNode();

HAnimJoint230.children[0] = HAnimSegment231;

let HAnimJoint232 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint232.name = "l_pinky3";
HAnimJoint232.DEF = "hanim_l_pinky3";
HAnimJoint232.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
let HAnimSegment233 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment233.name = "l_pinky_distal";
HAnimSegment233.DEF = "hanim_l_pinky_distal";
let HAnimSite234 = browser.currentScene.createNode("HAnimSite");
HAnimSite234.name = "l_pinky_distal_tip";
HAnimSite234.DEF = "hanim_l_pinky_distal_tip";
HAnimSite234.translation = new SFVec3f(new float[0.2014,0.7009,-0.1012]);
HAnimSegment233.children = new MFNode();

HAnimSegment233.children[0] = HAnimSite234;

HAnimJoint232.children = new MFNode();

HAnimJoint232.children[0] = HAnimSegment233;

HAnimJoint230.children[1] = HAnimJoint232;

HAnimJoint228.children[1] = HAnimJoint230;

HAnimJoint226.children[1] = HAnimJoint228;

HAnimJoint184.children[5] = HAnimJoint226;

HAnimJoint178.children[1] = HAnimJoint184;

HAnimJoint175.children[1] = HAnimJoint178;

HAnimJoint173.children[1] = HAnimJoint175;

HAnimJoint167.children[1] = HAnimJoint173;

HAnimJoint115.children[2] = HAnimJoint167;

let HAnimJoint235 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint235.name = "r_sternoclavicular";
HAnimJoint235.DEF = "hanim_r_sternoclavicular";
HAnimJoint235.center = new SFVec3f(new float[-0.082,1.4488,-0.0353]);
let HAnimSegment236 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment236.name = "r_clavicle";
HAnimSegment236.DEF = "hanim_r_clavicle";
let HAnimSite237 = browser.currentScene.createNode("HAnimSite");
HAnimSite237.name = "r_clavicale_pt";
HAnimSite237.DEF = "hanim_r_clavicale_pt";
HAnimSite237.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
HAnimSegment236.children = new MFNode();

HAnimSegment236.children[0] = HAnimSite237;

let HAnimSite238 = browser.currentScene.createNode("HAnimSite");
HAnimSite238.name = "r_acromion_pt";
HAnimSite238.DEF = "hanim_r_acromion_pt";
HAnimSite238.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
HAnimSegment236.children[1] = HAnimSite238;

let HAnimSite239 = browser.currentScene.createNode("HAnimSite");
HAnimSite239.name = "r_axilla_ant_pt";
HAnimSite239.DEF = "hanim_r_axilla_ant_pt";
HAnimSite239.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
HAnimSegment236.children[2] = HAnimSite239;

let HAnimSite240 = browser.currentScene.createNode("HAnimSite");
HAnimSite240.name = "r_axilla_post_pt";
HAnimSite240.DEF = "hanim_r_axilla_post_pt";
HAnimSite240.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
HAnimSegment236.children[3] = HAnimSite240;

HAnimJoint235.children = new MFNode();

HAnimJoint235.children[0] = HAnimSegment236;

let HAnimJoint241 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint241.name = "r_acromioclavicular";
HAnimJoint241.DEF = "hanim_r_acromioclavicular";
HAnimJoint241.center = new SFVec3f(new float[-0.0962,1.4269,-0.0424]);
let HAnimSegment242 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment242.name = "r_scapula";
HAnimSegment242.DEF = "hanim_r_scapula";
HAnimJoint241.children = new MFNode();

HAnimJoint241.children[0] = HAnimSegment242;

let HAnimJoint243 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint243.name = "r_shoulder";
HAnimJoint243.DEF = "hanim_r_shoulder";
HAnimJoint243.center = new SFVec3f(new float[-0.2029,1.4376,-0.0387]);
let HAnimSegment244 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment244.name = "r_upperarm";
HAnimSegment244.DEF = "hanim_r_upperarm";
let HAnimSite245 = browser.currentScene.createNode("HAnimSite");
HAnimSite245.name = "r_humeral_lateral_epicn_pt";
HAnimSite245.DEF = "hanim_r_humeral_lateral_epicn_pt";
HAnimSite245.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
HAnimSegment244.children = new MFNode();

HAnimSegment244.children[0] = HAnimSite245;

HAnimJoint243.children = new MFNode();

HAnimJoint243.children[0] = HAnimSegment244;

let HAnimJoint246 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint246.name = "r_elbow";
HAnimJoint246.DEF = "hanim_r_elbow";
HAnimJoint246.center = new SFVec3f(new float[-0.2014,1.1357,-0.0682]);
let HAnimSegment247 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment247.name = "r_forearm";
HAnimSegment247.DEF = "hanim_r_forearm";
let HAnimSite248 = browser.currentScene.createNode("HAnimSite");
HAnimSite248.name = "r_radial_styloid_pt";
HAnimSite248.DEF = "hanim_r_radial_styloid_pt";
HAnimSite248.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
HAnimSegment247.children = new MFNode();

HAnimSegment247.children[0] = HAnimSite248;

let HAnimSite249 = browser.currentScene.createNode("HAnimSite");
HAnimSite249.name = "r_olecranon_pt";
HAnimSite249.DEF = "hanim_r_olecranon_pt";
HAnimSite249.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
HAnimSegment247.children[1] = HAnimSite249;

let HAnimSite250 = browser.currentScene.createNode("HAnimSite");
HAnimSite250.name = "r_humeral_medial_epicn_pt";
HAnimSite250.DEF = "hanim_r_humeral_medial_epicn_pt";
HAnimSite250.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
HAnimSegment247.children[2] = HAnimSite250;

let HAnimSite251 = browser.currentScene.createNode("HAnimSite");
HAnimSite251.name = "r_radiale_pt";
HAnimSite251.DEF = "hanim_r_radiale_pt";
HAnimSite251.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
HAnimSegment247.children[3] = HAnimSite251;

HAnimJoint246.children = new MFNode();

HAnimJoint246.children[0] = HAnimSegment247;

let HAnimJoint252 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint252.name = "r_wrist";
HAnimJoint252.DEF = "hanim_r_wrist";
HAnimJoint252.center = new SFVec3f(new float[-0.1984,0.8663,-0.0583]);
let HAnimSegment253 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment253.name = "r_hand";
HAnimSegment253.DEF = "hanim_r_hand";
let HAnimSite254 = browser.currentScene.createNode("HAnimSite");
HAnimSite254.name = "r_metacarpal_pha2_pt";
HAnimSite254.DEF = "hanim_r_metacarpal_pha2_pt";
HAnimSite254.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
HAnimSegment253.children = new MFNode();

HAnimSegment253.children[0] = HAnimSite254;

let HAnimSite255 = browser.currentScene.createNode("HAnimSite");
HAnimSite255.name = "r_ulnar_styloid_pt";
HAnimSite255.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite255.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
HAnimSegment253.children[1] = HAnimSite255;

let HAnimSite256 = browser.currentScene.createNode("HAnimSite");
HAnimSite256.name = "r_metacarpal_pha5_pt";
HAnimSite256.DEF = "hanim_r_metacarpal_pha5_pt";
HAnimSite256.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
HAnimSegment253.children[2] = HAnimSite256;

let HAnimSite257 = browser.currentScene.createNode("HAnimSite");
HAnimSite257.name = "r_hand_front_view";
HAnimSite257.DEF = "hanim_r_hand_front_view";
HAnimSite257.translation = new SFVec3f(new float[-0.3,0.75,0.45]);
let Viewpoint258 = browser.currentScene.createNode("Viewpoint");
Viewpoint258.DEF = "hanim_r_hand_front_viewpoint";
Viewpoint258.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
Viewpoint258.description = "right hand front";
Viewpoint258.position = new SFVec3f(new float[0,0,0]);
HAnimSite257.children = new MFNode();

HAnimSite257.children[0] = Viewpoint258;

HAnimSegment253.children[3] = HAnimSite257;

HAnimJoint252.children = new MFNode();

HAnimJoint252.children[0] = HAnimSegment253;

let HAnimJoint259 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint259.name = "r_thumb1";
HAnimJoint259.DEF = "hanim_r_thumb1";
HAnimJoint259.center = new SFVec3f(new float[-0.1924,0.8472,-0.0534]);
let HAnimSegment260 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment260.name = "r_thumb_metacarpal";
HAnimSegment260.DEF = "hanim_r_thumb_metacarpal";
HAnimJoint259.children = new MFNode();

HAnimJoint259.children[0] = HAnimSegment260;

let HAnimJoint261 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint261.name = "r_thumb2";
HAnimJoint261.DEF = "hanim_r_thumb2";
HAnimJoint261.center = new SFVec3f(new float[-0.1951,0.8226,0.0246]);
let HAnimSegment262 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment262.name = "r_thumb_proximal";
HAnimSegment262.DEF = "hanim_r_thumb_proximal";
HAnimJoint261.children = new MFNode();

HAnimJoint261.children[0] = HAnimSegment262;

let HAnimJoint263 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint263.name = "r_thumb3";
HAnimJoint263.DEF = "hanim_r_thumb3";
HAnimJoint263.center = new SFVec3f(new float[-0.1955,0.8159,0.0464]);
let HAnimSegment264 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment264.name = "r_thumb_distal";
HAnimSegment264.DEF = "hanim_r_thumb_distal";
let HAnimSite265 = browser.currentScene.createNode("HAnimSite");
HAnimSite265.name = "r_thumb_distal_tip";
HAnimSite265.DEF = "hanim_r_thumb_distal_tip";
HAnimSite265.translation = new SFVec3f(new float[-0.1869,0.809,0.082]);
HAnimSegment264.children = new MFNode();

HAnimSegment264.children[0] = HAnimSite265;

HAnimJoint263.children = new MFNode();

HAnimJoint263.children[0] = HAnimSegment264;

HAnimJoint261.children[1] = HAnimJoint263;

HAnimJoint259.children[1] = HAnimJoint261;

HAnimJoint252.children[1] = HAnimJoint259;

let HAnimJoint266 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint266.name = "r_index0";
HAnimJoint266.DEF = "hanim_r_index0";
HAnimJoint266.center = new SFVec3f(new float[-0.1983,0.8024,-0.028]);
let HAnimSegment267 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment267.name = "r_index_metacarpal";
HAnimSegment267.DEF = "hanim_r_index_metacarpal";
HAnimJoint266.children = new MFNode();

HAnimJoint266.children[0] = HAnimSegment267;

let HAnimJoint268 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint268.name = "r_index1";
HAnimJoint268.DEF = "hanim_r_index1";
HAnimJoint268.center = new SFVec3f(new float[-0.1983,0.7815,-0.028]);
let HAnimSegment269 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment269.name = "r_index_proximal";
HAnimSegment269.DEF = "hanim_r_index_proximal";
HAnimJoint268.children = new MFNode();

HAnimJoint268.children[0] = HAnimSegment269;

let HAnimJoint270 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint270.name = "r_index2";
HAnimJoint270.DEF = "hanim_r_index2";
HAnimJoint270.center = new SFVec3f(new float[-0.2017,0.7363,-0.0248]);
let HAnimSegment271 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment271.name = "r_index_middle";
HAnimSegment271.DEF = "hanim_r_index_middle";
HAnimJoint270.children = new MFNode();

HAnimJoint270.children[0] = HAnimSegment271;

let HAnimJoint272 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint272.name = "r_index3";
HAnimJoint272.DEF = "hanim_r_index3";
HAnimJoint272.center = new SFVec3f(new float[-0.2028,0.7139,-0.0236]);
let HAnimSegment273 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment273.name = "r_index_distal";
HAnimSegment273.DEF = "hanim_r_index_distal";
let HAnimSite274 = browser.currentScene.createNode("HAnimSite");
HAnimSite274.name = "r_index_distal_tip";
HAnimSite274.DEF = "hanim_r_index_distal_tip";
HAnimSite274.translation = new SFVec3f(new float[-0.198,0.6883,-0.018]);
HAnimSegment273.children = new MFNode();

HAnimSegment273.children[0] = HAnimSite274;

let HAnimSite275 = browser.currentScene.createNode("HAnimSite");
HAnimSite275.name = "r_dactylion_pt";
HAnimSite275.DEF = "hanim_r_dactylion_pt";
HAnimSite275.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
HAnimSegment273.children[1] = HAnimSite275;

HAnimJoint272.children = new MFNode();

HAnimJoint272.children[0] = HAnimSegment273;

HAnimJoint270.children[1] = HAnimJoint272;

HAnimJoint268.children[1] = HAnimJoint270;

HAnimJoint266.children[1] = HAnimJoint268;

HAnimJoint252.children[2] = HAnimJoint266;

let HAnimJoint276 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint276.name = "r_middle0";
HAnimJoint276.DEF = "hanim_r_middle0";
HAnimJoint276.center = new SFVec3f(new float[-0.1987,0.8029,-0.053]);
let HAnimSegment277 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment277.name = "r_middle_metacarpal";
HAnimSegment277.DEF = "hanim_r_middle_metacarpal";
HAnimJoint276.children = new MFNode();

HAnimJoint276.children[0] = HAnimSegment277;

let HAnimJoint278 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint278.name = "r_middle1";
HAnimJoint278.DEF = "hanim_r_middle1";
HAnimJoint278.center = new SFVec3f(new float[-0.1987,0.7818,-0.053]);
let HAnimSegment279 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment279.name = "r_middle_proximal";
HAnimSegment279.DEF = "hanim_r_middle_proximal";
HAnimJoint278.children = new MFNode();

HAnimJoint278.children[0] = HAnimSegment279;

let HAnimJoint280 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint280.name = "r_middle2";
HAnimJoint280.DEF = "hanim_r_middle2";
HAnimJoint280.center = new SFVec3f(new float[-0.2013,0.7273,-0.0503]);
let HAnimSegment281 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment281.name = "r_middle_middle";
HAnimSegment281.DEF = "hanim_r_middle_middle";
HAnimJoint280.children = new MFNode();

HAnimJoint280.children[0] = HAnimSegment281;

let HAnimJoint282 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint282.name = "r_middle3";
HAnimJoint282.DEF = "hanim_r_middle3";
HAnimJoint282.center = new SFVec3f(new float[-0.2026,0.7011,-0.0494]);
let HAnimSegment283 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment283.name = "r_middle_distal";
HAnimSegment283.DEF = "hanim_r_middle_distal";
let HAnimSite284 = browser.currentScene.createNode("HAnimSite");
HAnimSite284.name = "r_middle_distal_tip";
HAnimSite284.DEF = "hanim_r_middle_distal_tip";
HAnimSite284.translation = new SFVec3f(new float[-0.1969,0.6758,-0.0427]);
HAnimSegment283.children = new MFNode();

HAnimSegment283.children[0] = HAnimSite284;

HAnimJoint282.children = new MFNode();

HAnimJoint282.children[0] = HAnimSegment283;

HAnimJoint280.children[1] = HAnimJoint282;

HAnimJoint278.children[1] = HAnimJoint280;

HAnimJoint276.children[1] = HAnimJoint278;

HAnimJoint252.children[3] = HAnimJoint276;

let HAnimJoint285 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint285.name = "r_ring0";
HAnimJoint285.DEF = "hanim_r_ring0";
HAnimJoint285.center = new SFVec3f(new float[-0.1956,0.8019,-0.0794]);
let HAnimSegment286 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment286.name = "r_ring_metacarpal";
HAnimSegment286.DEF = "hanim_r_ring_metacarpal";
HAnimJoint285.children = new MFNode();

HAnimJoint285.children[0] = HAnimSegment286;

let HAnimJoint287 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint287.name = "r_ring1";
HAnimJoint287.DEF = "hanim_r_ring1";
HAnimJoint287.center = new SFVec3f(new float[-0.1956,0.7815,-0.0794]);
let HAnimSegment288 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment288.name = "r_ring_proximal";
HAnimSegment288.DEF = "hanim_r_ring_proximal";
HAnimJoint287.children = new MFNode();

HAnimJoint287.children[0] = HAnimSegment288;

let HAnimJoint289 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint289.name = "r_ring2";
HAnimJoint289.DEF = "hanim_r_ring2";
HAnimJoint289.center = new SFVec3f(new float[-0.1973,0.7287,-0.0777]);
let HAnimSegment290 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment290.name = "r_ring_middle";
HAnimSegment290.DEF = "hanim_r_ring_middle";
HAnimJoint289.children = new MFNode();

HAnimJoint289.children[0] = HAnimSegment290;

let HAnimJoint291 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint291.name = "r_ring3";
HAnimJoint291.DEF = "hanim_r_ring3";
HAnimJoint291.center = new SFVec3f(new float[-0.1983,0.7045,-0.0767]);
let HAnimSegment292 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment292.name = "r_ring_distal";
HAnimSegment292.DEF = "hanim_r_ring_distal";
let HAnimSite293 = browser.currentScene.createNode("HAnimSite");
HAnimSite293.name = "r_ring_distal_tip";
HAnimSite293.DEF = "hanim_r_ring_distal_tip";
HAnimSite293.translation = new SFVec3f(new float[-0.1934,0.6778,-0.0693]);
HAnimSegment292.children = new MFNode();

HAnimSegment292.children[0] = HAnimSite293;

HAnimJoint291.children = new MFNode();

HAnimJoint291.children[0] = HAnimSegment292;

HAnimJoint289.children[1] = HAnimJoint291;

HAnimJoint287.children[1] = HAnimJoint289;

HAnimJoint285.children[1] = HAnimJoint287;

HAnimJoint252.children[4] = HAnimJoint285;

let HAnimJoint294 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint294.name = "r_pinky0";
HAnimJoint294.DEF = "hanim_r_pinky0";
HAnimJoint294.center = new SFVec3f(new float[-0.1925,0.8066,-0.1036]);
let HAnimSegment295 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment295.name = "r_pinky_metacarpal";
HAnimSegment295.DEF = "hanim_r_pinky_metacarpal";
HAnimJoint294.children = new MFNode();

HAnimJoint294.children[0] = HAnimSegment295;

let HAnimJoint296 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint296.name = "r_pinky1";
HAnimJoint296.DEF = "hanim_r_pinky1";
HAnimJoint296.center = new SFVec3f(new float[-0.1925,0.7866,-0.1036]);
let HAnimSegment297 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment297.name = "r_pinky_proximal";
HAnimSegment297.DEF = "hanim_r_pinky_proximal";
HAnimJoint296.children = new MFNode();

HAnimJoint296.children[0] = HAnimSegment297;

let HAnimJoint298 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint298.name = "r_pinky2";
HAnimJoint298.DEF = "hanim_r_pinky2";
HAnimJoint298.center = new SFVec3f(new float[-0.1938,0.7452,-0.1024]);
let HAnimSegment299 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment299.name = "r_pinky_middle";
HAnimSegment299.DEF = "hanim_r_pinky_middle";
HAnimJoint298.children = new MFNode();

HAnimJoint298.children[0] = HAnimSegment299;

let HAnimJoint300 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint300.name = "r_pinky3";
HAnimJoint300.DEF = "hanim_r_pinky3";
HAnimJoint300.center = new SFVec3f(new float[-0.1948,0.7277,-0.1017]);
let HAnimSegment301 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment301.name = "r_pinky_distal";
HAnimSegment301.DEF = "hanim_r_pinky_distal";
let HAnimSite302 = browser.currentScene.createNode("HAnimSite");
HAnimSite302.name = "r_pinky_distal_tip";
HAnimSite302.DEF = "hanim_r_pinky_distal_tip";
HAnimSite302.translation = new SFVec3f(new float[-0.1938,0.7035,-0.0949]);
HAnimSegment301.children = new MFNode();

HAnimSegment301.children[0] = HAnimSite302;

HAnimJoint300.children = new MFNode();

HAnimJoint300.children[0] = HAnimSegment301;

HAnimJoint298.children[1] = HAnimJoint300;

HAnimJoint296.children[1] = HAnimJoint298;

HAnimJoint294.children[1] = HAnimJoint296;

HAnimJoint252.children[5] = HAnimJoint294;

HAnimJoint246.children[1] = HAnimJoint252;

HAnimJoint243.children[1] = HAnimJoint246;

HAnimJoint241.children[1] = HAnimJoint243;

HAnimJoint235.children[1] = HAnimJoint241;

HAnimJoint115.children[3] = HAnimJoint235;

HAnimJoint113.children[1] = HAnimJoint115;

HAnimJoint111.children[1] = HAnimJoint113;

HAnimJoint109.children[1] = HAnimJoint111;

HAnimJoint107.children[1] = HAnimJoint109;

HAnimJoint105.children[1] = HAnimJoint107;

HAnimJoint103.children[1] = HAnimJoint105;

HAnimJoint101.children[1] = HAnimJoint103;

HAnimJoint97.children[1] = HAnimJoint101;

HAnimJoint94.children[1] = HAnimJoint97;

HAnimJoint92.children[1] = HAnimJoint94;

HAnimJoint90.children[1] = HAnimJoint92;

HAnimJoint88.children[1] = HAnimJoint90;

HAnimJoint83.children[1] = HAnimJoint88;

HAnimJoint81.children[1] = HAnimJoint83;

HAnimJoint79.children[1] = HAnimJoint81;

HAnimJoint75.children[1] = HAnimJoint79;

HAnimJoint16.children[2] = HAnimJoint75;

HAnimHumanoid15.joints = new MFNode();

HAnimHumanoid15.joints[0] = HAnimJoint16;

let HAnimSite303 = browser.currentScene.createNode("HAnimSite");
HAnimSite303.name = "l_inclined_view";
HAnimSite303.DEF = "hanim_l_inclined_view";
HAnimSite303.rotation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
HAnimSite303.translation = new SFVec3f(new float[1.62,1.05,2.06]);
let Viewpoint304 = browser.currentScene.createNode("Viewpoint");
Viewpoint304.DEF = "hanim_l_inclined_viewpoint";
Viewpoint304.description = "left inclined";
Viewpoint304.position = new SFVec3f(new float[0,0,0]);
HAnimSite303.children = new MFNode();

HAnimSite303.children[0] = Viewpoint304;

HAnimHumanoid15.viewpoints[1] = HAnimSite303;

let HAnimSite305 = browser.currentScene.createNode("HAnimSite");
HAnimSite305.name = "r_inclined_view";
HAnimSite305.DEF = "hanim_r_inclined_view";
HAnimSite305.rotation = new SFRotation(new float[-0.113,-0.993,0.0347,0.671]);
HAnimSite305.translation = new SFVec3f(new float[-1.62,1.05,2.06]);
let Viewpoint306 = browser.currentScene.createNode("Viewpoint");
Viewpoint306.DEF = "hanim_r_inclined_viewpoint";
Viewpoint306.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint306.description = "right inclined";
Viewpoint306.position = new SFVec3f(new float[0,0,0]);
HAnimSite305.children = new MFNode();

HAnimSite305.children[0] = Viewpoint306;

HAnimHumanoid15.viewpoints[2] = HAnimSite305;

let HAnimSite307 = browser.currentScene.createNode("HAnimSite");
HAnimSite307.name = "front_view";
HAnimSite307.DEF = "hanim_front_view";
HAnimSite307.translation = new SFVec3f(new float[0,0.85,2.58]);
let Viewpoint308 = browser.currentScene.createNode("Viewpoint");
Viewpoint308.DEF = "hanim_front_viewpoint";
Viewpoint308.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint308.description = "front";
Viewpoint308.position = new SFVec3f(new float[0,0,0]);
HAnimSite307.children = new MFNode();

HAnimSite307.children[0] = Viewpoint308;

HAnimHumanoid15.viewpoints[3] = HAnimSite307;

let HAnimSite309 = browser.currentScene.createNode("HAnimSite");
HAnimSite309.name = "back_view";
HAnimSite309.DEF = "hanim_back_view";
HAnimSite309.rotation = new SFRotation(new float[0,1,0,3.14]);
HAnimSite309.translation = new SFVec3f(new float[0,0.85,-2.58]);
let Viewpoint310 = browser.currentScene.createNode("Viewpoint");
Viewpoint310.DEF = "hanim_back_viewpoint";
Viewpoint310.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint310.description = "back";
Viewpoint310.position = new SFVec3f(new float[0,0,0]);
HAnimSite309.children = new MFNode();

HAnimSite309.children[0] = Viewpoint310;

HAnimHumanoid15.viewpoints[4] = HAnimSite309;

let HAnimSite311 = browser.currentScene.createNode("HAnimSite");
HAnimSite311.name = "l_side_view";
HAnimSite311.DEF = "hanim_l_side_view";
HAnimSite311.rotation = new SFRotation(new float[0,1,0,1.5708]);
HAnimSite311.translation = new SFVec3f(new float[2.6,0.854,0]);
let Viewpoint312 = browser.currentScene.createNode("Viewpoint");
Viewpoint312.DEF = "hanim_l_side_viewpoint";
Viewpoint312.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint312.description = "left side";
Viewpoint312.position = new SFVec3f(new float[0,0,0]);
HAnimSite311.children = new MFNode();

HAnimSite311.children[0] = Viewpoint312;

HAnimHumanoid15.viewpoints[5] = HAnimSite311;

let HAnimSite313 = browser.currentScene.createNode("HAnimSite");
HAnimSite313.name = "Top_view";
HAnimSite313.DEF = "hanim_Top_view";
HAnimSite313.rotation = new SFRotation(new float[1,0,0,-1.57]);
HAnimSite313.translation = new SFVec3f(new float[0,3.5,0]);
let Viewpoint314 = browser.currentScene.createNode("Viewpoint");
Viewpoint314.DEF = "hanim_Top_viewpoint";
Viewpoint314.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint314.description = "Top";
Viewpoint314.position = new SFVec3f(new float[0,0,0]);
HAnimSite313.children = new MFNode();

HAnimSite313.children[0] = Viewpoint314;

HAnimHumanoid15.viewpoints[6] = HAnimSite313;

let HAnimSite315 = browser.currentScene.createNode("HAnimSite");
HAnimSite315.name = "front_close_view";
HAnimSite315.DEF = "hanim_front_close_view";
HAnimSite315.translation = new SFVec3f(new float[0,0.854,1.575]);
let Viewpoint316 = browser.currentScene.createNode("Viewpoint");
Viewpoint316.DEF = "hanim_front_close_viewpoint";
Viewpoint316.centerOfRotation = new SFVec3f(new float[0,0,1.575]);
Viewpoint316.description = "front close";
Viewpoint316.position = new SFVec3f(new float[0,0,0]);
HAnimSite315.children = new MFNode();

HAnimSite315.children[0] = Viewpoint316;

HAnimHumanoid15.viewpoints[7] = HAnimSite315;

let HAnimSite317 = browser.currentScene.createNode("HAnimSite");
HAnimSite317.name = "side_close_view";
HAnimSite317.DEF = "hanim_side_close_view";
HAnimSite317.rotation = new SFRotation(new float[0,1,0,1.5708]);
HAnimSite317.translation = new SFVec3f(new float[1.56,0.854,0]);
let Viewpoint318 = browser.currentScene.createNode("Viewpoint");
Viewpoint318.DEF = "hanim_side_close_viewpoint";
Viewpoint318.centerOfRotation = new SFVec3f(new float[1.6,0,0]);
Viewpoint318.description = "side close";
Viewpoint318.position = new SFVec3f(new float[0,0,0]);
HAnimSite317.children = new MFNode();

HAnimSite317.children[0] = Viewpoint318;

HAnimHumanoid15.viewpoints[8] = HAnimSite317;

let HAnimSite319 = browser.currentScene.createNode("HAnimSite");
HAnimSite319.name = "head_front_close_view";
HAnimSite319.DEF = "hanim_head_front_close_view";
HAnimSite319.translation = new SFVec3f(new float[0,1.5,1]);
let Viewpoint320 = browser.currentScene.createNode("Viewpoint");
Viewpoint320.DEF = "hanim_head_front_close_viewpoint";
Viewpoint320.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint320.description = "head front close";
Viewpoint320.position = new SFVec3f(new float[0,0,0]);
HAnimSite319.children = new MFNode();

HAnimSite319.children[0] = Viewpoint320;

HAnimHumanoid15.viewpoints[9] = HAnimSite319;

let HAnimSite321 = browser.currentScene.createNode("HAnimSite");
HAnimSite321.name = "chest_front_close_view";
HAnimSite321.DEF = "hanim_chest_front_close_view";
HAnimSite321.translation = new SFVec3f(new float[0,1.2,1]);
let Viewpoint322 = browser.currentScene.createNode("Viewpoint");
Viewpoint322.DEF = "hanim_chest_front_close_viewpoint";
Viewpoint322.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint322.description = "chest front close";
Viewpoint322.position = new SFVec3f(new float[0,0,0]);
HAnimSite321.children = new MFNode();

HAnimSite321.children[0] = Viewpoint322;

HAnimHumanoid15.viewpoints[10] = HAnimSite321;

let HAnimSite323 = browser.currentScene.createNode("HAnimSite");
HAnimSite323.name = "pelvis_front_close_view";
HAnimSite323.DEF = "hanim_pelvis_front_close_view";
HAnimSite323.translation = new SFVec3f(new float[0,0.8,1]);
let Viewpoint324 = browser.currentScene.createNode("Viewpoint");
Viewpoint324.DEF = "hanim_pelvis_front_close_viewpoint";
Viewpoint324.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint324.description = "pelvis front close";
Viewpoint324.position = new SFVec3f(new float[0,0,0]);
HAnimSite323.children = new MFNode();

HAnimSite323.children[0] = Viewpoint324;

HAnimHumanoid15.viewpoints[11] = HAnimSite323;

let HAnimSite325 = browser.currentScene.createNode("HAnimSite");
HAnimSite325.name = "knees_front_close_view";
HAnimSite325.DEF = "hanim_knees_front_close_view";
HAnimSite325.translation = new SFVec3f(new float[0,0.4,1]);
let Viewpoint326 = browser.currentScene.createNode("Viewpoint");
Viewpoint326.DEF = "hanim_knees_front_close_viewpoint";
Viewpoint326.centerOfRotation = new SFVec3f(new float[0,0.4,0]);
Viewpoint326.description = "knees front close";
Viewpoint326.position = new SFVec3f(new float[0,0,0]);
HAnimSite325.children = new MFNode();

HAnimSite325.children[0] = Viewpoint326;

HAnimHumanoid15.viewpoints[12] = HAnimSite325;

let HAnimSite327 = browser.currentScene.createNode("HAnimSite");
HAnimSite327.name = "feet_front_close_view";
HAnimSite327.DEF = "hanim_feet_front_close_view";
HAnimSite327.translation = new SFVec3f(new float[0,0,1]);
let Viewpoint328 = browser.currentScene.createNode("Viewpoint");
Viewpoint328.DEF = "hanim_feet_front_close_viewpoint";
Viewpoint328.description = "feet front close";
Viewpoint328.position = new SFVec3f(new float[0,0,0]);
HAnimSite327.children = new MFNode();

HAnimSite327.children[0] = Viewpoint328;

HAnimHumanoid15.viewpoints[13] = HAnimSite327;

let HAnimSite329 = browser.currentScene.createNode("HAnimSite");
HAnimSite329.name = "eye_level_view";
HAnimSite329.DEF = "hanim_eye_level_view";
HAnimSite329.translation = new SFVec3f(new float[0,1.6332,0.0502]);
let Viewpoint330 = browser.currentScene.createNode("Viewpoint");
Viewpoint330.DEF = "hanim_eye_level_viewpoint";
Viewpoint330.description = "eye level looking forward";
Viewpoint330.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint330.position = new SFVec3f(new float[0,0,0]);
HAnimSite329.children = new MFNode();

HAnimSite329.children[0] = Viewpoint330;

HAnimHumanoid15.viewpoints[14] = HAnimSite329;

let HAnimSite331 = browser.currentScene.createNode("HAnimSite");
HAnimSite331.USE = "hanim_l_eyeball_site_view";
HAnimHumanoid15.viewpoints[15] = HAnimSite331;

let HAnimSite332 = browser.currentScene.createNode("HAnimSite");
HAnimSite332.USE = "hanim_r_eyeball_site_view";
HAnimHumanoid15.viewpoints[16] = HAnimSite332;

let HAnimSite333 = browser.currentScene.createNode("HAnimSite");
HAnimSite333.USE = "hanim_l_hand_front_view";
HAnimHumanoid15.viewpoints[17] = HAnimSite333;

let HAnimSite334 = browser.currentScene.createNode("HAnimSite");
HAnimSite334.USE = "hanim_r_hand_front_view";
HAnimHumanoid15.viewpoints[18] = HAnimSite334;

let HAnimJoint335 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint335.USE = "hanim_humanoid_root";
HAnimHumanoid15.joints[19] = HAnimJoint335;

let HAnimJoint336 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint336.USE = "hanim_sacroiliac";
HAnimHumanoid15.joints[20] = HAnimJoint336;

let HAnimJoint337 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint337.USE = "hanim_vl5";
HAnimHumanoid15.joints[21] = HAnimJoint337;

let HAnimJoint338 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint338.USE = "hanim_vl4";
HAnimHumanoid15.joints[22] = HAnimJoint338;

let HAnimJoint339 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint339.USE = "hanim_vl3";
HAnimHumanoid15.joints[23] = HAnimJoint339;

let HAnimJoint340 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint340.USE = "hanim_vl2";
HAnimHumanoid15.joints[24] = HAnimJoint340;

let HAnimJoint341 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint341.USE = "hanim_vl1";
HAnimHumanoid15.joints[25] = HAnimJoint341;

let HAnimJoint342 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint342.USE = "hanim_vt12";
HAnimHumanoid15.joints[26] = HAnimJoint342;

let HAnimJoint343 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint343.USE = "hanim_vt11";
HAnimHumanoid15.joints[27] = HAnimJoint343;

let HAnimJoint344 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint344.USE = "hanim_vt10";
HAnimHumanoid15.joints[28] = HAnimJoint344;

let HAnimJoint345 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint345.USE = "hanim_vt9";
HAnimHumanoid15.joints[29] = HAnimJoint345;

let HAnimJoint346 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint346.USE = "hanim_vt8";
HAnimHumanoid15.joints[30] = HAnimJoint346;

let HAnimJoint347 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint347.USE = "hanim_vt7";
HAnimHumanoid15.joints[31] = HAnimJoint347;

let HAnimJoint348 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint348.USE = "hanim_vt6";
HAnimHumanoid15.joints[32] = HAnimJoint348;

let HAnimJoint349 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint349.USE = "hanim_vt5";
HAnimHumanoid15.joints[33] = HAnimJoint349;

let HAnimJoint350 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint350.USE = "hanim_vt4";
HAnimHumanoid15.joints[34] = HAnimJoint350;

let HAnimJoint351 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint351.USE = "hanim_vt3";
HAnimHumanoid15.joints[35] = HAnimJoint351;

let HAnimJoint352 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint352.USE = "hanim_vt2";
HAnimHumanoid15.joints[36] = HAnimJoint352;

let HAnimJoint353 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint353.USE = "hanim_vt1";
HAnimHumanoid15.joints[37] = HAnimJoint353;

let HAnimJoint354 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint354.USE = "hanim_vc7";
HAnimHumanoid15.joints[38] = HAnimJoint354;

let HAnimJoint355 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint355.USE = "hanim_vc6";
HAnimHumanoid15.joints[39] = HAnimJoint355;

let HAnimJoint356 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint356.USE = "hanim_vc5";
HAnimHumanoid15.joints[40] = HAnimJoint356;

let HAnimJoint357 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint357.USE = "hanim_vc4";
HAnimHumanoid15.joints[41] = HAnimJoint357;

let HAnimJoint358 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint358.USE = "hanim_vc3";
HAnimHumanoid15.joints[42] = HAnimJoint358;

let HAnimJoint359 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint359.USE = "hanim_vc2";
HAnimHumanoid15.joints[43] = HAnimJoint359;

let HAnimJoint360 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint360.USE = "hanim_vc1";
HAnimHumanoid15.joints[44] = HAnimJoint360;

let HAnimJoint361 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint361.USE = "hanim_skullbase";
HAnimHumanoid15.joints[45] = HAnimJoint361;

let HAnimJoint362 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint362.USE = "hanim_temporomandibular";
HAnimHumanoid15.joints[46] = HAnimJoint362;

let HAnimJoint363 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint363.USE = "hanim_l_acromioclavicular";
HAnimHumanoid15.joints[47] = HAnimJoint363;

let HAnimJoint364 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint364.USE = "hanim_r_acromioclavicular";
HAnimHumanoid15.joints[48] = HAnimJoint364;

let HAnimJoint365 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint365.USE = "hanim_l_ankle";
HAnimHumanoid15.joints[49] = HAnimJoint365;

let HAnimJoint366 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint366.USE = "hanim_r_ankle";
HAnimHumanoid15.joints[50] = HAnimJoint366;

let HAnimJoint367 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint367.USE = "hanim_l_elbow";
HAnimHumanoid15.joints[51] = HAnimJoint367;

let HAnimJoint368 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint368.USE = "hanim_r_elbow";
HAnimHumanoid15.joints[52] = HAnimJoint368;

let HAnimJoint369 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint369.USE = "hanim_l_eyeball_joint";
HAnimHumanoid15.joints[53] = HAnimJoint369;

let HAnimJoint370 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint370.USE = "hanim_r_eyeball_joint";
HAnimHumanoid15.joints[54] = HAnimJoint370;

let HAnimJoint371 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint371.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid15.joints[55] = HAnimJoint371;

let HAnimJoint372 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint372.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid15.joints[56] = HAnimJoint372;

let HAnimJoint373 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint373.USE = "hanim_l_eyelid_joint";
HAnimHumanoid15.joints[57] = HAnimJoint373;

let HAnimJoint374 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint374.USE = "hanim_r_eyelid_joint";
HAnimHumanoid15.joints[58] = HAnimJoint374;

let HAnimJoint375 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint375.USE = "hanim_l_hip";
HAnimHumanoid15.joints[59] = HAnimJoint375;

let HAnimJoint376 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint376.USE = "hanim_r_hip";
HAnimHumanoid15.joints[60] = HAnimJoint376;

let HAnimJoint377 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint377.USE = "hanim_l_index0";
HAnimHumanoid15.joints[61] = HAnimJoint377;

let HAnimJoint378 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint378.USE = "hanim_r_index0";
HAnimHumanoid15.joints[62] = HAnimJoint378;

let HAnimJoint379 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint379.USE = "hanim_l_index1";
HAnimHumanoid15.joints[63] = HAnimJoint379;

let HAnimJoint380 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint380.USE = "hanim_r_index1";
HAnimHumanoid15.joints[64] = HAnimJoint380;

let HAnimJoint381 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint381.USE = "hanim_l_index2";
HAnimHumanoid15.joints[65] = HAnimJoint381;

let HAnimJoint382 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint382.USE = "hanim_r_index2";
HAnimHumanoid15.joints[66] = HAnimJoint382;

let HAnimJoint383 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint383.USE = "hanim_l_index3";
HAnimHumanoid15.joints[67] = HAnimJoint383;

let HAnimJoint384 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint384.USE = "hanim_r_index3";
HAnimHumanoid15.joints[68] = HAnimJoint384;

let HAnimJoint385 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint385.USE = "hanim_l_knee";
HAnimHumanoid15.joints[69] = HAnimJoint385;

let HAnimJoint386 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint386.USE = "hanim_r_knee";
HAnimHumanoid15.joints[70] = HAnimJoint386;

let HAnimJoint387 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint387.USE = "hanim_l_metatarsal";
HAnimHumanoid15.joints[71] = HAnimJoint387;

let HAnimJoint388 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint388.USE = "hanim_r_metatarsal";
HAnimHumanoid15.joints[72] = HAnimJoint388;

let HAnimJoint389 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint389.USE = "hanim_l_middle0";
HAnimHumanoid15.joints[73] = HAnimJoint389;

let HAnimJoint390 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint390.USE = "hanim_r_middle0";
HAnimHumanoid15.joints[74] = HAnimJoint390;

let HAnimJoint391 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint391.USE = "hanim_l_middle1";
HAnimHumanoid15.joints[75] = HAnimJoint391;

let HAnimJoint392 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint392.USE = "hanim_r_middle1";
HAnimHumanoid15.joints[76] = HAnimJoint392;

let HAnimJoint393 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint393.USE = "hanim_l_middle2";
HAnimHumanoid15.joints[77] = HAnimJoint393;

let HAnimJoint394 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint394.USE = "hanim_r_middle2";
HAnimHumanoid15.joints[78] = HAnimJoint394;

let HAnimJoint395 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint395.USE = "hanim_l_middle3";
HAnimHumanoid15.joints[79] = HAnimJoint395;

let HAnimJoint396 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint396.USE = "hanim_r_middle3";
HAnimHumanoid15.joints[80] = HAnimJoint396;

let HAnimJoint397 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint397.USE = "hanim_l_midtarsal";
HAnimHumanoid15.joints[81] = HAnimJoint397;

let HAnimJoint398 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint398.USE = "hanim_r_midtarsal";
HAnimHumanoid15.joints[82] = HAnimJoint398;

let HAnimJoint399 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint399.USE = "hanim_l_pinky0";
HAnimHumanoid15.joints[83] = HAnimJoint399;

let HAnimJoint400 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint400.USE = "hanim_r_pinky0";
HAnimHumanoid15.joints[84] = HAnimJoint400;

let HAnimJoint401 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint401.USE = "hanim_l_pinky1";
HAnimHumanoid15.joints[85] = HAnimJoint401;

let HAnimJoint402 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint402.USE = "hanim_r_pinky1";
HAnimHumanoid15.joints[86] = HAnimJoint402;

let HAnimJoint403 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint403.USE = "hanim_l_pinky2";
HAnimHumanoid15.joints[87] = HAnimJoint403;

let HAnimJoint404 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint404.USE = "hanim_r_pinky2";
HAnimHumanoid15.joints[88] = HAnimJoint404;

let HAnimJoint405 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint405.USE = "hanim_l_pinky3";
HAnimHumanoid15.joints[89] = HAnimJoint405;

let HAnimJoint406 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint406.USE = "hanim_r_pinky3";
HAnimHumanoid15.joints[90] = HAnimJoint406;

let HAnimJoint407 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint407.USE = "hanim_l_ring0";
HAnimHumanoid15.joints[91] = HAnimJoint407;

let HAnimJoint408 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint408.USE = "hanim_r_ring0";
HAnimHumanoid15.joints[92] = HAnimJoint408;

let HAnimJoint409 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint409.USE = "hanim_l_ring1";
HAnimHumanoid15.joints[93] = HAnimJoint409;

let HAnimJoint410 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint410.USE = "hanim_r_ring1";
HAnimHumanoid15.joints[94] = HAnimJoint410;

let HAnimJoint411 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint411.USE = "hanim_l_ring2";
HAnimHumanoid15.joints[95] = HAnimJoint411;

let HAnimJoint412 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint412.USE = "hanim_r_ring2";
HAnimHumanoid15.joints[96] = HAnimJoint412;

let HAnimJoint413 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint413.USE = "hanim_l_ring3";
HAnimHumanoid15.joints[97] = HAnimJoint413;

let HAnimJoint414 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint414.USE = "hanim_r_ring3";
HAnimHumanoid15.joints[98] = HAnimJoint414;

let HAnimJoint415 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint415.USE = "hanim_l_shoulder";
HAnimHumanoid15.joints[99] = HAnimJoint415;

let HAnimJoint416 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint416.USE = "hanim_r_shoulder";
HAnimHumanoid15.joints[100] = HAnimJoint416;

let HAnimJoint417 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint417.USE = "hanim_l_sternoclavicular";
HAnimHumanoid15.joints[101] = HAnimJoint417;

let HAnimJoint418 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint418.USE = "hanim_r_sternoclavicular";
HAnimHumanoid15.joints[102] = HAnimJoint418;

let HAnimJoint419 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint419.USE = "hanim_l_subtalar";
HAnimHumanoid15.joints[103] = HAnimJoint419;

let HAnimJoint420 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint420.USE = "hanim_r_subtalar";
HAnimHumanoid15.joints[104] = HAnimJoint420;

let HAnimJoint421 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint421.USE = "hanim_l_thumb1";
HAnimHumanoid15.joints[105] = HAnimJoint421;

let HAnimJoint422 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint422.USE = "hanim_r_thumb1";
HAnimHumanoid15.joints[106] = HAnimJoint422;

let HAnimJoint423 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint423.USE = "hanim_l_thumb2";
HAnimHumanoid15.joints[107] = HAnimJoint423;

let HAnimJoint424 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint424.USE = "hanim_r_thumb2";
HAnimHumanoid15.joints[108] = HAnimJoint424;

let HAnimJoint425 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint425.USE = "hanim_l_thumb3";
HAnimHumanoid15.joints[109] = HAnimJoint425;

let HAnimJoint426 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint426.USE = "hanim_r_thumb3";
HAnimHumanoid15.joints[110] = HAnimJoint426;

let HAnimJoint427 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint427.USE = "hanim_l_wrist";
HAnimHumanoid15.joints[111] = HAnimJoint427;

let HAnimJoint428 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint428.USE = "hanim_r_wrist";
HAnimHumanoid15.joints[112] = HAnimJoint428;

let HAnimSegment429 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment429.USE = "hanim_pelvis";
HAnimHumanoid15.segments[113] = HAnimSegment429;

let HAnimSegment430 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment430.USE = "hanim_skull";
HAnimHumanoid15.segments[114] = HAnimSegment430;

let HAnimSegment431 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment431.USE = "hanim_jaw";
HAnimHumanoid15.segments[115] = HAnimSegment431;

let HAnimSegment432 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment432.USE = "hanim_c1";
HAnimHumanoid15.segments[116] = HAnimSegment432;

let HAnimSegment433 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment433.USE = "hanim_c2";
HAnimHumanoid15.segments[117] = HAnimSegment433;

let HAnimSegment434 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment434.USE = "hanim_c3";
HAnimHumanoid15.segments[118] = HAnimSegment434;

let HAnimSegment435 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment435.USE = "hanim_c4";
HAnimHumanoid15.segments[119] = HAnimSegment435;

let HAnimSegment436 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment436.USE = "hanim_c5";
HAnimHumanoid15.segments[120] = HAnimSegment436;

let HAnimSegment437 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment437.USE = "hanim_c6";
HAnimHumanoid15.segments[121] = HAnimSegment437;

let HAnimSegment438 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment438.USE = "hanim_c7";
HAnimHumanoid15.segments[122] = HAnimSegment438;

let HAnimSegment439 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment439.USE = "hanim_t1";
HAnimHumanoid15.segments[123] = HAnimSegment439;

let HAnimSegment440 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment440.USE = "hanim_t2";
HAnimHumanoid15.segments[124] = HAnimSegment440;

let HAnimSegment441 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment441.USE = "hanim_t3";
HAnimHumanoid15.segments[125] = HAnimSegment441;

let HAnimSegment442 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment442.USE = "hanim_t4";
HAnimHumanoid15.segments[126] = HAnimSegment442;

let HAnimSegment443 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment443.USE = "hanim_t5";
HAnimHumanoid15.segments[127] = HAnimSegment443;

let HAnimSegment444 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment444.USE = "hanim_t6";
HAnimHumanoid15.segments[128] = HAnimSegment444;

let HAnimSegment445 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment445.USE = "hanim_t7";
HAnimHumanoid15.segments[129] = HAnimSegment445;

let HAnimSegment446 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment446.USE = "hanim_t8";
HAnimHumanoid15.segments[130] = HAnimSegment446;

let HAnimSegment447 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment447.USE = "hanim_t9";
HAnimHumanoid15.segments[131] = HAnimSegment447;

let HAnimSegment448 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment448.USE = "hanim_t10";
HAnimHumanoid15.segments[132] = HAnimSegment448;

let HAnimSegment449 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment449.USE = "hanim_t11";
HAnimHumanoid15.segments[133] = HAnimSegment449;

let HAnimSegment450 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment450.USE = "hanim_t12";
HAnimHumanoid15.segments[134] = HAnimSegment450;

let HAnimSegment451 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment451.USE = "hanim_l1";
HAnimHumanoid15.segments[135] = HAnimSegment451;

let HAnimSegment452 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment452.USE = "hanim_l2";
HAnimHumanoid15.segments[136] = HAnimSegment452;

let HAnimSegment453 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment453.USE = "hanim_l3";
HAnimHumanoid15.segments[137] = HAnimSegment453;

let HAnimSegment454 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment454.USE = "hanim_l4";
HAnimHumanoid15.segments[138] = HAnimSegment454;

let HAnimSegment455 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment455.USE = "hanim_l5";
HAnimHumanoid15.segments[139] = HAnimSegment455;

let HAnimSegment456 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment456.USE = "hanim_sacrum";
HAnimHumanoid15.segments[140] = HAnimSegment456;

let HAnimSegment457 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment457.USE = "hanim_l_calf";
HAnimHumanoid15.segments[141] = HAnimSegment457;

let HAnimSegment458 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment458.USE = "hanim_r_calf";
HAnimHumanoid15.segments[142] = HAnimSegment458;

let HAnimSegment459 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment459.USE = "hanim_l_clavicle";
HAnimHumanoid15.segments[143] = HAnimSegment459;

let HAnimSegment460 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment460.USE = "hanim_r_clavicle";
HAnimHumanoid15.segments[144] = HAnimSegment460;

let HAnimSegment461 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment461.USE = "hanim_l_eyeball";
HAnimHumanoid15.segments[145] = HAnimSegment461;

let HAnimSegment462 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment462.USE = "hanim_r_eyeball";
HAnimHumanoid15.segments[146] = HAnimSegment462;

let HAnimSegment463 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment463.USE = "hanim_l_eyebrow";
HAnimHumanoid15.segments[147] = HAnimSegment463;

let HAnimSegment464 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment464.USE = "hanim_r_eyebrow";
HAnimHumanoid15.segments[148] = HAnimSegment464;

let HAnimSegment465 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment465.USE = "hanim_l_eyelid";
HAnimHumanoid15.segments[149] = HAnimSegment465;

let HAnimSegment466 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment466.USE = "hanim_r_eyelid";
HAnimHumanoid15.segments[150] = HAnimSegment466;

let HAnimSegment467 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment467.USE = "hanim_l_forearm";
HAnimHumanoid15.segments[151] = HAnimSegment467;

let HAnimSegment468 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment468.USE = "hanim_r_forearm";
HAnimHumanoid15.segments[152] = HAnimSegment468;

let HAnimSegment469 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment469.USE = "hanim_l_forefoot";
HAnimHumanoid15.segments[153] = HAnimSegment469;

let HAnimSegment470 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment470.USE = "hanim_r_forefoot";
HAnimHumanoid15.segments[154] = HAnimSegment470;

let HAnimSegment471 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment471.USE = "hanim_l_hand";
HAnimHumanoid15.segments[155] = HAnimSegment471;

let HAnimSegment472 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment472.USE = "hanim_r_hand";
HAnimHumanoid15.segments[156] = HAnimSegment472;

let HAnimSegment473 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment473.USE = "hanim_l_hindfoot";
HAnimHumanoid15.segments[157] = HAnimSegment473;

let HAnimSegment474 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment474.USE = "hanim_r_hindfoot";
HAnimHumanoid15.segments[158] = HAnimSegment474;

let HAnimSegment475 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment475.USE = "hanim_l_index_distal";
HAnimHumanoid15.segments[159] = HAnimSegment475;

let HAnimSegment476 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment476.USE = "hanim_r_index_distal";
HAnimHumanoid15.segments[160] = HAnimSegment476;

let HAnimSegment477 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment477.USE = "hanim_l_index_metacarpal";
HAnimHumanoid15.segments[161] = HAnimSegment477;

let HAnimSegment478 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment478.USE = "hanim_r_index_metacarpal";
HAnimHumanoid15.segments[162] = HAnimSegment478;

let HAnimSegment479 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment479.USE = "hanim_l_index_middle";
HAnimHumanoid15.segments[163] = HAnimSegment479;

let HAnimSegment480 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment480.USE = "hanim_r_index_middle";
HAnimHumanoid15.segments[164] = HAnimSegment480;

let HAnimSegment481 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment481.USE = "hanim_l_index_proximal";
HAnimHumanoid15.segments[165] = HAnimSegment481;

let HAnimSegment482 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment482.USE = "hanim_r_index_proximal";
HAnimHumanoid15.segments[166] = HAnimSegment482;

let HAnimSegment483 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment483.USE = "hanim_l_middistal";
HAnimHumanoid15.segments[167] = HAnimSegment483;

let HAnimSegment484 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment484.USE = "hanim_r_middistal";
HAnimHumanoid15.segments[168] = HAnimSegment484;

let HAnimSegment485 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment485.USE = "hanim_l_middle_distal";
HAnimHumanoid15.segments[169] = HAnimSegment485;

let HAnimSegment486 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment486.USE = "hanim_r_middle_distal";
HAnimHumanoid15.segments[170] = HAnimSegment486;

let HAnimSegment487 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment487.USE = "hanim_l_middle_metacarpal";
HAnimHumanoid15.segments[171] = HAnimSegment487;

let HAnimSegment488 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment488.USE = "hanim_r_middle_metacarpal";
HAnimHumanoid15.segments[172] = HAnimSegment488;

let HAnimSegment489 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment489.USE = "hanim_l_middle_middle";
HAnimHumanoid15.segments[173] = HAnimSegment489;

let HAnimSegment490 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment490.USE = "hanim_r_middle_middle";
HAnimHumanoid15.segments[174] = HAnimSegment490;

let HAnimSegment491 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment491.USE = "hanim_l_middle_proximal";
HAnimHumanoid15.segments[175] = HAnimSegment491;

let HAnimSegment492 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment492.USE = "hanim_r_middle_proximal";
HAnimHumanoid15.segments[176] = HAnimSegment492;

let HAnimSegment493 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment493.USE = "hanim_l_midproximal";
HAnimHumanoid15.segments[177] = HAnimSegment493;

let HAnimSegment494 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment494.USE = "hanim_r_midproximal";
HAnimHumanoid15.segments[178] = HAnimSegment494;

let HAnimSegment495 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment495.USE = "hanim_l_pinky_distal";
HAnimHumanoid15.segments[179] = HAnimSegment495;

let HAnimSegment496 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment496.USE = "hanim_r_pinky_distal";
HAnimHumanoid15.segments[180] = HAnimSegment496;

let HAnimSegment497 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment497.USE = "hanim_l_pinky_metacarpal";
HAnimHumanoid15.segments[181] = HAnimSegment497;

let HAnimSegment498 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment498.USE = "hanim_r_pinky_metacarpal";
HAnimHumanoid15.segments[182] = HAnimSegment498;

let HAnimSegment499 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment499.USE = "hanim_l_pinky_middle";
HAnimHumanoid15.segments[183] = HAnimSegment499;

let HAnimSegment500 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment500.USE = "hanim_r_pinky_middle";
HAnimHumanoid15.segments[184] = HAnimSegment500;

let HAnimSegment501 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment501.USE = "hanim_l_pinky_proximal";
HAnimHumanoid15.segments[185] = HAnimSegment501;

let HAnimSegment502 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment502.USE = "hanim_r_pinky_proximal";
HAnimHumanoid15.segments[186] = HAnimSegment502;

let HAnimSegment503 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment503.USE = "hanim_l_ring_distal";
HAnimHumanoid15.segments[187] = HAnimSegment503;

let HAnimSegment504 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment504.USE = "hanim_r_ring_distal";
HAnimHumanoid15.segments[188] = HAnimSegment504;

let HAnimSegment505 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment505.USE = "hanim_l_ring_metacarpal";
HAnimHumanoid15.segments[189] = HAnimSegment505;

let HAnimSegment506 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment506.USE = "hanim_r_ring_metacarpal";
HAnimHumanoid15.segments[190] = HAnimSegment506;

let HAnimSegment507 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment507.USE = "hanim_l_ring_middle";
HAnimHumanoid15.segments[191] = HAnimSegment507;

let HAnimSegment508 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment508.USE = "hanim_r_ring_middle";
HAnimHumanoid15.segments[192] = HAnimSegment508;

let HAnimSegment509 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment509.USE = "hanim_l_ring_proximal";
HAnimHumanoid15.segments[193] = HAnimSegment509;

let HAnimSegment510 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment510.USE = "hanim_r_ring_proximal";
HAnimHumanoid15.segments[194] = HAnimSegment510;

let HAnimSegment511 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment511.USE = "hanim_l_scapula";
HAnimHumanoid15.segments[195] = HAnimSegment511;

let HAnimSegment512 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment512.USE = "hanim_r_scapula";
HAnimHumanoid15.segments[196] = HAnimSegment512;

let HAnimSegment513 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment513.USE = "hanim_l_thigh";
HAnimHumanoid15.segments[197] = HAnimSegment513;

let HAnimSegment514 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment514.USE = "hanim_r_thigh";
HAnimHumanoid15.segments[198] = HAnimSegment514;

let HAnimSegment515 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment515.USE = "hanim_l_thumb_distal";
HAnimHumanoid15.segments[199] = HAnimSegment515;

let HAnimSegment516 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment516.USE = "hanim_r_thumb_distal";
HAnimHumanoid15.segments[200] = HAnimSegment516;

let HAnimSegment517 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment517.USE = "hanim_l_thumb_metacarpal";
HAnimHumanoid15.segments[201] = HAnimSegment517;

let HAnimSegment518 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment518.USE = "hanim_r_thumb_metacarpal";
HAnimHumanoid15.segments[202] = HAnimSegment518;

let HAnimSegment519 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment519.USE = "hanim_l_thumb_proximal";
HAnimHumanoid15.segments[203] = HAnimSegment519;

let HAnimSegment520 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment520.USE = "hanim_r_thumb_proximal";
HAnimHumanoid15.segments[204] = HAnimSegment520;

let HAnimSegment521 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment521.USE = "hanim_l_upperarm";
HAnimHumanoid15.segments[205] = HAnimSegment521;

let HAnimSegment522 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment522.USE = "hanim_r_upperarm";
HAnimHumanoid15.segments[206] = HAnimSegment522;

let HAnimSite523 = browser.currentScene.createNode("HAnimSite");
HAnimSite523.USE = "hanim_crotch_pt";
HAnimHumanoid15.viewpoints[207] = HAnimSite523;

let HAnimSite524 = browser.currentScene.createNode("HAnimSite");
HAnimSite524.USE = "hanim_skull_tip";
HAnimHumanoid15.viewpoints[208] = HAnimSite524;

let HAnimSite525 = browser.currentScene.createNode("HAnimSite");
HAnimSite525.USE = "hanim_sellion_pt";
HAnimHumanoid15.viewpoints[209] = HAnimSite525;

let HAnimSite526 = browser.currentScene.createNode("HAnimSite");
HAnimSite526.USE = "hanim_supramenton_pt";
HAnimHumanoid15.viewpoints[210] = HAnimSite526;

let HAnimSite527 = browser.currentScene.createNode("HAnimSite");
HAnimSite527.USE = "hanim_nuchale_pt";
HAnimHumanoid15.viewpoints[211] = HAnimSite527;

let HAnimSite528 = browser.currentScene.createNode("HAnimSite");
HAnimSite528.USE = "hanim_suprasternale_pt";
HAnimHumanoid15.viewpoints[212] = HAnimSite528;

let HAnimSite529 = browser.currentScene.createNode("HAnimSite");
HAnimSite529.USE = "hanim_cervicale_pt";
HAnimHumanoid15.viewpoints[213] = HAnimSite529;

let HAnimSite530 = browser.currentScene.createNode("HAnimSite");
HAnimSite530.USE = "hanim_substernale_pt";
HAnimHumanoid15.viewpoints[214] = HAnimSite530;

let HAnimSite531 = browser.currentScene.createNode("HAnimSite");
HAnimSite531.USE = "hanim_rib10_midspine_pt";
HAnimHumanoid15.viewpoints[215] = HAnimSite531;

let HAnimSite532 = browser.currentScene.createNode("HAnimSite");
HAnimSite532.USE = "hanim_waist_preferred_post_pt";
HAnimHumanoid15.viewpoints[216] = HAnimSite532;

let HAnimSite533 = browser.currentScene.createNode("HAnimSite");
HAnimSite533.USE = "hanim_navel_pt";
HAnimHumanoid15.viewpoints[217] = HAnimSite533;

let HAnimSite534 = browser.currentScene.createNode("HAnimSite");
HAnimSite534.USE = "hanim_l_acromion_pt";
HAnimHumanoid15.viewpoints[218] = HAnimSite534;

let HAnimSite535 = browser.currentScene.createNode("HAnimSite");
HAnimSite535.USE = "hanim_r_acromion_pt";
HAnimHumanoid15.viewpoints[219] = HAnimSite535;

let HAnimSite536 = browser.currentScene.createNode("HAnimSite");
HAnimSite536.USE = "hanim_r_asis_pt";
HAnimHumanoid15.viewpoints[220] = HAnimSite536;

let HAnimSite537 = browser.currentScene.createNode("HAnimSite");
HAnimSite537.USE = "hanim_l_asis_pt";
HAnimHumanoid15.viewpoints[221] = HAnimSite537;

let HAnimSite538 = browser.currentScene.createNode("HAnimSite");
HAnimSite538.USE = "hanim_l_axilla_ant_pt";
HAnimHumanoid15.viewpoints[222] = HAnimSite538;

let HAnimSite539 = browser.currentScene.createNode("HAnimSite");
HAnimSite539.USE = "hanim_r_axilla_ant_pt";
HAnimHumanoid15.viewpoints[223] = HAnimSite539;

let HAnimSite540 = browser.currentScene.createNode("HAnimSite");
HAnimSite540.USE = "hanim_l_axilla_post_pt";
HAnimHumanoid15.viewpoints[224] = HAnimSite540;

let HAnimSite541 = browser.currentScene.createNode("HAnimSite");
HAnimSite541.USE = "hanim_r_axilla_post_pt";
HAnimHumanoid15.viewpoints[225] = HAnimSite541;

let HAnimSite542 = browser.currentScene.createNode("HAnimSite");
HAnimSite542.USE = "hanim_l_calcaneous_post_pt";
HAnimHumanoid15.viewpoints[226] = HAnimSite542;

let HAnimSite543 = browser.currentScene.createNode("HAnimSite");
HAnimSite543.USE = "hanim_r_calcaneous_post_pt";
HAnimHumanoid15.viewpoints[227] = HAnimSite543;

let HAnimSite544 = browser.currentScene.createNode("HAnimSite");
HAnimSite544.USE = "hanim_l_clavicale_pt";
HAnimHumanoid15.viewpoints[228] = HAnimSite544;

let HAnimSite545 = browser.currentScene.createNode("HAnimSite");
HAnimSite545.USE = "hanim_r_clavicale_pt";
HAnimHumanoid15.viewpoints[229] = HAnimSite545;

let HAnimSite546 = browser.currentScene.createNode("HAnimSite");
HAnimSite546.USE = "hanim_l_dactylion_pt";
HAnimHumanoid15.viewpoints[230] = HAnimSite546;

let HAnimSite547 = browser.currentScene.createNode("HAnimSite");
HAnimSite547.USE = "hanim_r_dactylion_pt";
HAnimHumanoid15.viewpoints[231] = HAnimSite547;

let HAnimSite548 = browser.currentScene.createNode("HAnimSite");
HAnimSite548.USE = "hanim_l_digit2_pt";
HAnimHumanoid15.viewpoints[232] = HAnimSite548;

let HAnimSite549 = browser.currentScene.createNode("HAnimSite");
HAnimSite549.USE = "hanim_r_digit2_pt";
HAnimHumanoid15.viewpoints[233] = HAnimSite549;

let HAnimSite550 = browser.currentScene.createNode("HAnimSite");
HAnimSite550.USE = "hanim_l_femoral_lateral_epicn_pt";
HAnimHumanoid15.viewpoints[234] = HAnimSite550;

let HAnimSite551 = browser.currentScene.createNode("HAnimSite");
HAnimSite551.USE = "hanim_r_femoral_lateral_epicn_pt";
HAnimHumanoid15.viewpoints[235] = HAnimSite551;

let HAnimSite552 = browser.currentScene.createNode("HAnimSite");
HAnimSite552.USE = "hanim_l_femoral_medial_epicn_pt";
HAnimHumanoid15.viewpoints[236] = HAnimSite552;

let HAnimSite553 = browser.currentScene.createNode("HAnimSite");
HAnimSite553.USE = "hanim_r_femoral_medial_epicn_pt";
HAnimHumanoid15.viewpoints[237] = HAnimSite553;

let HAnimSite554 = browser.currentScene.createNode("HAnimSite");
HAnimSite554.USE = "hanim_l_forefoot_tip";
HAnimHumanoid15.viewpoints[238] = HAnimSite554;

let HAnimSite555 = browser.currentScene.createNode("HAnimSite");
HAnimSite555.USE = "hanim_r_forefoot_tip";
HAnimHumanoid15.viewpoints[239] = HAnimSite555;

let HAnimSite556 = browser.currentScene.createNode("HAnimSite");
HAnimSite556.USE = "hanim_r_gonion_pt";
HAnimHumanoid15.viewpoints[240] = HAnimSite556;

let HAnimSite557 = browser.currentScene.createNode("HAnimSite");
HAnimSite557.USE = "hanim_l_gonion_pt";
HAnimHumanoid15.viewpoints[241] = HAnimSite557;

let HAnimSite558 = browser.currentScene.createNode("HAnimSite");
HAnimSite558.USE = "hanim_l_humeral_lateral_epicn_pt";
HAnimHumanoid15.viewpoints[242] = HAnimSite558;

let HAnimSite559 = browser.currentScene.createNode("HAnimSite");
HAnimSite559.USE = "hanim_r_humeral_lateral_epicn_pt";
HAnimHumanoid15.viewpoints[243] = HAnimSite559;

let HAnimSite560 = browser.currentScene.createNode("HAnimSite");
HAnimSite560.USE = "hanim_l_humeral_medial_epicn_pt";
HAnimHumanoid15.viewpoints[244] = HAnimSite560;

let HAnimSite561 = browser.currentScene.createNode("HAnimSite");
HAnimSite561.USE = "hanim_r_humeral_medial_epicn_pt";
HAnimHumanoid15.viewpoints[245] = HAnimSite561;

let HAnimSite562 = browser.currentScene.createNode("HAnimSite");
HAnimSite562.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid15.viewpoints[246] = HAnimSite562;

let HAnimSite563 = browser.currentScene.createNode("HAnimSite");
HAnimSite563.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid15.viewpoints[247] = HAnimSite563;

let HAnimSite564 = browser.currentScene.createNode("HAnimSite");
HAnimSite564.USE = "hanim_l_index_distal_tip";
HAnimHumanoid15.viewpoints[248] = HAnimSite564;

let HAnimSite565 = browser.currentScene.createNode("HAnimSite");
HAnimSite565.USE = "hanim_r_index_distal_tip";
HAnimHumanoid15.viewpoints[249] = HAnimSite565;

let HAnimSite566 = browser.currentScene.createNode("HAnimSite");
HAnimSite566.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid15.viewpoints[250] = HAnimSite566;

let HAnimSite567 = browser.currentScene.createNode("HAnimSite");
HAnimSite567.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid15.viewpoints[251] = HAnimSite567;

let HAnimSite568 = browser.currentScene.createNode("HAnimSite");
HAnimSite568.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid15.viewpoints[252] = HAnimSite568;

let HAnimSite569 = browser.currentScene.createNode("HAnimSite");
HAnimSite569.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid15.viewpoints[253] = HAnimSite569;

let HAnimSite570 = browser.currentScene.createNode("HAnimSite");
HAnimSite570.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid15.viewpoints[254] = HAnimSite570;

let HAnimSite571 = browser.currentScene.createNode("HAnimSite");
HAnimSite571.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid15.viewpoints[255] = HAnimSite571;

let HAnimSite572 = browser.currentScene.createNode("HAnimSite");
HAnimSite572.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid15.viewpoints[256] = HAnimSite572;

let HAnimSite573 = browser.currentScene.createNode("HAnimSite");
HAnimSite573.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid15.viewpoints[257] = HAnimSite573;

let HAnimSite574 = browser.currentScene.createNode("HAnimSite");
HAnimSite574.USE = "hanim_l_metacarpal_pha2_pt";
HAnimHumanoid15.viewpoints[258] = HAnimSite574;

let HAnimSite575 = browser.currentScene.createNode("HAnimSite");
HAnimSite575.USE = "hanim_r_metacarpal_pha2_pt";
HAnimHumanoid15.viewpoints[259] = HAnimSite575;

let HAnimSite576 = browser.currentScene.createNode("HAnimSite");
HAnimSite576.USE = "hanim_l_metacarpal_pha5_pt";
HAnimHumanoid15.viewpoints[260] = HAnimSite576;

let HAnimSite577 = browser.currentScene.createNode("HAnimSite");
HAnimSite577.USE = "hanim_r_metacarpal_pha5_pt";
HAnimHumanoid15.viewpoints[261] = HAnimSite577;

let HAnimSite578 = browser.currentScene.createNode("HAnimSite");
HAnimSite578.USE = "hanim_l_metatarsal_pha1_pt";
HAnimHumanoid15.viewpoints[262] = HAnimSite578;

let HAnimSite579 = browser.currentScene.createNode("HAnimSite");
HAnimSite579.USE = "hanim_r_metatarsal_pha1_pt";
HAnimHumanoid15.viewpoints[263] = HAnimSite579;

let HAnimSite580 = browser.currentScene.createNode("HAnimSite");
HAnimSite580.USE = "hanim_l_metatarsal_pha5_pt";
HAnimHumanoid15.viewpoints[264] = HAnimSite580;

let HAnimSite581 = browser.currentScene.createNode("HAnimSite");
HAnimSite581.USE = "hanim_r_metatarsal_pha5_pt";
HAnimHumanoid15.viewpoints[265] = HAnimSite581;

let HAnimSite582 = browser.currentScene.createNode("HAnimSite");
HAnimSite582.USE = "hanim_l_middle_distal_tip";
HAnimHumanoid15.viewpoints[266] = HAnimSite582;

let HAnimSite583 = browser.currentScene.createNode("HAnimSite");
HAnimSite583.USE = "hanim_r_middle_distal_tip";
HAnimHumanoid15.viewpoints[267] = HAnimSite583;

let HAnimSite584 = browser.currentScene.createNode("HAnimSite");
HAnimSite584.USE = "hanim_r_neck_base_pt";
HAnimHumanoid15.viewpoints[268] = HAnimSite584;

let HAnimSite585 = browser.currentScene.createNode("HAnimSite");
HAnimSite585.USE = "hanim_l_neck_base_pt";
HAnimHumanoid15.viewpoints[269] = HAnimSite585;

let HAnimSite586 = browser.currentScene.createNode("HAnimSite");
HAnimSite586.USE = "hanim_l_olecranon_pt";
HAnimHumanoid15.viewpoints[270] = HAnimSite586;

let HAnimSite587 = browser.currentScene.createNode("HAnimSite");
HAnimSite587.USE = "hanim_r_olecranon_pt";
HAnimHumanoid15.viewpoints[271] = HAnimSite587;

let HAnimSite588 = browser.currentScene.createNode("HAnimSite");
HAnimSite588.USE = "hanim_l_pinky_distal_tip";
HAnimHumanoid15.viewpoints[272] = HAnimSite588;

let HAnimSite589 = browser.currentScene.createNode("HAnimSite");
HAnimSite589.USE = "hanim_r_pinky_distal_tip";
HAnimHumanoid15.viewpoints[273] = HAnimSite589;

let HAnimSite590 = browser.currentScene.createNode("HAnimSite");
HAnimSite590.USE = "hanim_r_psis_pt";
HAnimHumanoid15.viewpoints[274] = HAnimSite590;

let HAnimSite591 = browser.currentScene.createNode("HAnimSite");
HAnimSite591.USE = "hanim_l_psis_pt";
HAnimHumanoid15.viewpoints[275] = HAnimSite591;

let HAnimSite592 = browser.currentScene.createNode("HAnimSite");
HAnimSite592.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid15.viewpoints[276] = HAnimSite592;

let HAnimSite593 = browser.currentScene.createNode("HAnimSite");
HAnimSite593.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid15.viewpoints[277] = HAnimSite593;

let HAnimSite594 = browser.currentScene.createNode("HAnimSite");
HAnimSite594.USE = "hanim_l_radiale_pt";
HAnimHumanoid15.viewpoints[278] = HAnimSite594;

let HAnimSite595 = browser.currentScene.createNode("HAnimSite");
HAnimSite595.USE = "hanim_r_radiale_pt";
HAnimHumanoid15.viewpoints[279] = HAnimSite595;

let HAnimSite596 = browser.currentScene.createNode("HAnimSite");
HAnimSite596.USE = "hanim_r_rib10_pt";
HAnimHumanoid15.viewpoints[280] = HAnimSite596;

let HAnimSite597 = browser.currentScene.createNode("HAnimSite");
HAnimSite597.USE = "hanim_l_rib10_pt";
HAnimHumanoid15.viewpoints[281] = HAnimSite597;

let HAnimSite598 = browser.currentScene.createNode("HAnimSite");
HAnimSite598.USE = "hanim_l_ring_distal_tip";
HAnimHumanoid15.viewpoints[282] = HAnimSite598;

let HAnimSite599 = browser.currentScene.createNode("HAnimSite");
HAnimSite599.USE = "hanim_r_ring_distal_tip";
HAnimHumanoid15.viewpoints[283] = HAnimSite599;

let HAnimSite600 = browser.currentScene.createNode("HAnimSite");
HAnimSite600.USE = "hanim_temporomandibular_l_site_pt";
HAnimHumanoid15.viewpoints[284] = HAnimSite600;

let HAnimSite601 = browser.currentScene.createNode("HAnimSite");
HAnimSite601.USE = "hanim_temporomandibular_r_site_pt";
HAnimHumanoid15.viewpoints[285] = HAnimSite601;

let HAnimSite602 = browser.currentScene.createNode("HAnimSite");
HAnimSite602.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid15.viewpoints[286] = HAnimSite602;

let HAnimSite603 = browser.currentScene.createNode("HAnimSite");
HAnimSite603.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid15.viewpoints[287] = HAnimSite603;

let HAnimSite604 = browser.currentScene.createNode("HAnimSite");
HAnimSite604.USE = "hanim_r_thelion_pt";
HAnimHumanoid15.viewpoints[288] = HAnimSite604;

let HAnimSite605 = browser.currentScene.createNode("HAnimSite");
HAnimSite605.USE = "hanim_l_thelion_pt";
HAnimHumanoid15.viewpoints[289] = HAnimSite605;

let HAnimSite606 = browser.currentScene.createNode("HAnimSite");
HAnimSite606.USE = "hanim_l_thumb_distal_tip";
HAnimHumanoid15.viewpoints[290] = HAnimSite606;

let HAnimSite607 = browser.currentScene.createNode("HAnimSite");
HAnimSite607.USE = "hanim_r_thumb_distal_tip";
HAnimHumanoid15.viewpoints[291] = HAnimSite607;

let HAnimSite608 = browser.currentScene.createNode("HAnimSite");
HAnimSite608.USE = "hanim_r_tragion_pt";
HAnimHumanoid15.viewpoints[292] = HAnimSite608;

let HAnimSite609 = browser.currentScene.createNode("HAnimSite");
HAnimSite609.USE = "hanim_l_tragion_pt";
HAnimHumanoid15.viewpoints[293] = HAnimSite609;

let HAnimSite610 = browser.currentScene.createNode("HAnimSite");
HAnimSite610.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid15.viewpoints[294] = HAnimSite610;

let HAnimSite611 = browser.currentScene.createNode("HAnimSite");
HAnimSite611.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid15.viewpoints[295] = HAnimSite611;

let HAnimSite612 = browser.currentScene.createNode("HAnimSite");
HAnimSite612.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid15.viewpoints[296] = HAnimSite612;

let HAnimSite613 = browser.currentScene.createNode("HAnimSite");
HAnimSite613.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid15.viewpoints[297] = HAnimSite613;

browser.currentScene.children[12] = HAnimHumanoid15;


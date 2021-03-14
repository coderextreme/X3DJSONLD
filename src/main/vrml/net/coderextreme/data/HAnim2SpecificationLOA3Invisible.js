let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
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
HAnimHumanoid15.loa = 3;
HAnimHumanoid15.version = "2.0";
//HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is allowed
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
//right between the eyes, stationary position not animating except with body itself
let MetadataSet16 = browser.currentScene.createNode("MetadataSet");
MetadataSet16.name = "HAnimHumanoid.info";
MetadataSet16.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
let MetadataString17 = browser.currentScene.createNode("MetadataString");
MetadataString17.name = "authorName";
MetadataString17.value = new MFString(new java.lang.String["Matthew T. Beitler Joe D. Williams Don Brutzman"]);
MetadataSet16.value = new MFNode();

MetadataSet16.value[0] = MetadataString17;

let MetadataString18 = browser.currentScene.createNode("MetadataString");
MetadataString18.name = "authorEmail";
MetadataString18.value = new MFString(new java.lang.String["HAnim@web3D.org"]);
MetadataSet16.value[1] = MetadataString18;

let MetadataString19 = browser.currentScene.createNode("MetadataString");
MetadataString19.name = "copyright";
MetadataString19.value = new MFString(new java.lang.String["none"]);
MetadataSet16.value[2] = MetadataString19;

let MetadataString20 = browser.currentScene.createNode("MetadataString");
MetadataString20.name = "creationDate";
MetadataString20.value = new MFString(new java.lang.String["12 May 1999"]);
MetadataSet16.value[3] = MetadataString20;

let MetadataFloat21 = browser.currentScene.createNode("MetadataFloat");
MetadataFloat21.name = "height";
MetadataFloat21.value = new MFFloat(new float[1.7504]);
MetadataSet16.value[4] = MetadataFloat21;

let MetadataString22 = browser.currentScene.createNode("MetadataString");
MetadataString22.name = "humanoidVersion";
MetadataString22.value = new MFString(new java.lang.String["2.0"]);
MetadataSet16.value[5] = MetadataString22;

let MetadataString23 = browser.currentScene.createNode("MetadataString");
MetadataString23.name = "usageRestrictions";
MetadataString23.value = new MFString(new java.lang.String["none"]);
MetadataSet16.value[6] = MetadataString23;

HAnimHumanoid15.metadata = MetadataSet16;

let HAnimJoint24 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint24.name = "humanoid_root";
HAnimJoint24.DEF = "hanim_humanoid_root";
HAnimJoint24.center = new SFVec3f(new float[0,0.824,0.0277]);
let HAnimSegment25 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment25.name = "sacrum";
HAnimSegment25.DEF = "hanim_sacrum";
HAnimJoint24.children = new MFNode();

HAnimJoint24.children[0] = HAnimSegment25;

let HAnimJoint26 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint26.name = "sacroiliac";
HAnimJoint26.DEF = "hanim_sacroiliac";
HAnimJoint26.center = new SFVec3f(new float[0,0.9149,0.0016]);
let HAnimSegment27 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment27.name = "pelvis";
HAnimSegment27.DEF = "hanim_pelvis";
let HAnimSite28 = browser.currentScene.createNode("HAnimSite");
HAnimSite28.name = "r_iliocristale_pt";
HAnimSite28.DEF = "hanim_r_iliocristale_pt";
HAnimSite28.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
HAnimSegment27.children = new MFNode();

HAnimSegment27.children[0] = HAnimSite28;

let HAnimSite29 = browser.currentScene.createNode("HAnimSite");
HAnimSite29.name = "r_trochanterion_pt";
HAnimSite29.DEF = "hanim_r_trochanterion_pt";
HAnimSite29.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
HAnimSegment27.children[1] = HAnimSite29;

let HAnimSite30 = browser.currentScene.createNode("HAnimSite");
HAnimSite30.name = "l_iliocristale_pt";
HAnimSite30.DEF = "hanim_l_iliocristale_pt";
HAnimSite30.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
HAnimSegment27.children[2] = HAnimSite30;

let HAnimSite31 = browser.currentScene.createNode("HAnimSite");
HAnimSite31.name = "l_trochanterion_pt";
HAnimSite31.DEF = "hanim_l_trochanterion_pt";
HAnimSite31.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
HAnimSegment27.children[3] = HAnimSite31;

let HAnimSite32 = browser.currentScene.createNode("HAnimSite");
HAnimSite32.name = "r_asis_pt";
HAnimSite32.DEF = "hanim_r_asis_pt";
HAnimSite32.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
HAnimSegment27.children[4] = HAnimSite32;

let HAnimSite33 = browser.currentScene.createNode("HAnimSite");
HAnimSite33.name = "l_asis_pt";
HAnimSite33.DEF = "hanim_l_asis_pt";
HAnimSite33.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
HAnimSegment27.children[5] = HAnimSite33;

let HAnimSite34 = browser.currentScene.createNode("HAnimSite");
HAnimSite34.name = "r_psis_pt";
HAnimSite34.DEF = "hanim_r_psis_pt";
HAnimSite34.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
HAnimSegment27.children[6] = HAnimSite34;

let HAnimSite35 = browser.currentScene.createNode("HAnimSite");
HAnimSite35.name = "l_psis_pt";
HAnimSite35.DEF = "hanim_l_psis_pt";
HAnimSite35.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
HAnimSegment27.children[7] = HAnimSite35;

let HAnimSite36 = browser.currentScene.createNode("HAnimSite");
HAnimSite36.name = "crotch_pt";
HAnimSite36.DEF = "hanim_crotch_pt";
HAnimSite36.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
HAnimSegment27.children[8] = HAnimSite36;

HAnimJoint26.children = new MFNode();

HAnimJoint26.children[0] = HAnimSegment27;

let HAnimJoint37 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint37.name = "l_hip";
HAnimJoint37.DEF = "hanim_l_hip";
HAnimJoint37.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
let HAnimSegment38 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment38.name = "l_thigh";
HAnimSegment38.DEF = "hanim_l_thigh";
let HAnimSite39 = browser.currentScene.createNode("HAnimSite");
HAnimSite39.name = "l_knee_crease_pt";
HAnimSite39.DEF = "hanim_l_knee_crease_pt";
HAnimSite39.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
HAnimSegment38.children = new MFNode();

HAnimSegment38.children[0] = HAnimSite39;

let HAnimSite40 = browser.currentScene.createNode("HAnimSite");
HAnimSite40.name = "l_femoral_lateral_epicondyle_pt";
HAnimSite40.DEF = "hanim_l_femoral_lateral_epicondyle_pt";
HAnimSite40.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
HAnimSegment38.children[1] = HAnimSite40;

let HAnimSite41 = browser.currentScene.createNode("HAnimSite");
HAnimSite41.name = "l_femoral_medial_epicondyle_pt";
HAnimSite41.DEF = "hanim_l_femoral_medial_epicondyle_pt";
HAnimSite41.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
HAnimSegment38.children[2] = HAnimSite41;

HAnimJoint37.children = new MFNode();

HAnimJoint37.children[0] = HAnimSegment38;

let HAnimJoint42 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint42.name = "l_knee";
HAnimJoint42.DEF = "hanim_l_knee";
HAnimJoint42.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
let HAnimSegment43 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment43.name = "l_calf";
HAnimSegment43.DEF = "hanim_l_calf";
HAnimJoint42.children = new MFNode();

HAnimJoint42.children[0] = HAnimSegment43;

let HAnimJoint44 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint44.name = "l_talocrural";
HAnimJoint44.DEF = "hanim_l_talocrural";
HAnimJoint44.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let HAnimSegment45 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment45.name = "l_talus";
HAnimSegment45.DEF = "hanim_l_talus";
let HAnimSite46 = browser.currentScene.createNode("HAnimSite");
HAnimSite46.name = "l_lateral_malleolus_pt";
HAnimSite46.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite46.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
HAnimSegment45.children = new MFNode();

HAnimSegment45.children[0] = HAnimSite46;

let HAnimSite47 = browser.currentScene.createNode("HAnimSite");
HAnimSite47.name = "l_medial_malleolus_pt";
HAnimSite47.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite47.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
HAnimSegment45.children[1] = HAnimSite47;

let HAnimSite48 = browser.currentScene.createNode("HAnimSite");
HAnimSite48.name = "l_sphyrion_pt";
HAnimSite48.DEF = "hanim_l_sphyrion_pt";
HAnimSite48.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
HAnimSegment45.children[2] = HAnimSite48;

let HAnimSite49 = browser.currentScene.createNode("HAnimSite");
HAnimSite49.name = "l_calcaneus_posterior_pt";
HAnimSite49.DEF = "hanim_l_calcaneus_posterior_pt";
HAnimSite49.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
HAnimSegment45.children[3] = HAnimSite49;

HAnimJoint44.children = new MFNode();

HAnimJoint44.children[0] = HAnimSegment45;

let HAnimJoint50 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint50.name = "l_tarsometatarsal_2";
HAnimJoint50.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint50.center = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
let HAnimSegment51 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment51.name = "l_metatarsal_2";
HAnimSegment51.DEF = "hanim_l_metatarsal_2";
HAnimJoint50.children = new MFNode();

HAnimJoint50.children[0] = HAnimSegment51;

let HAnimJoint52 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint52.name = "l_metatarsophalangeal_2";
HAnimJoint52.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint52.center = new SFVec3f(new float[0.1086,0.0001,0.0368]);
let HAnimSegment53 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment53.name = "l_tarsal_proximal_phalanx_2";
HAnimSegment53.DEF = "hanim_l_tarsal_proximal_phalanx_2";
let HAnimSite54 = browser.currentScene.createNode("HAnimSite");
HAnimSite54.name = "l_metatarsal_phalanx_1_pt";
HAnimSite54.DEF = "hanim_l_metatarsal_phalanx_1_pt";
HAnimSite54.translation = new SFVec3f(new float[0.0816,0.0232,0.0106]);
HAnimSegment53.children = new MFNode();

HAnimSegment53.children[0] = HAnimSite54;

HAnimJoint52.children = new MFNode();

HAnimJoint52.children[0] = HAnimSegment53;

let HAnimJoint55 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint55.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint55.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint55.center = new SFVec3f(new float[0.1086,0,0.0762]);
let HAnimSegment56 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment56.name = "l_tarsal_distal_phalanx_2";
HAnimSegment56.DEF = "hanim_l_tarsal_distal_phalanx_2";
let HAnimSite57 = browser.currentScene.createNode("HAnimSite");
HAnimSite57.name = "l_forefoot_tip";
HAnimSite57.DEF = "hanim_l_forefoot_tip";
HAnimSite57.translation = new SFVec3f(new float[0.1354,0.0016,0.1476]);
HAnimSegment56.children = new MFNode();

HAnimSegment56.children[0] = HAnimSite57;

let HAnimSite58 = browser.currentScene.createNode("HAnimSite");
HAnimSite58.name = "l_metatarsal_phalanx_5_pt";
HAnimSite58.DEF = "hanim_l_metatarsal_phalanx_5_pt";
HAnimSite58.translation = new SFVec3f(new float[0.1825,0.007,0.0928]);
HAnimSegment56.children[1] = HAnimSite58;

let HAnimSite59 = browser.currentScene.createNode("HAnimSite");
HAnimSite59.name = "l_tarsal_distal_phalanx_2_pt";
HAnimSite59.DEF = "hanim_l_tarsal_distal_phalanx_2_pt";
HAnimSite59.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
HAnimSegment56.children[2] = HAnimSite59;

HAnimJoint55.children = new MFNode();

HAnimJoint55.children[0] = HAnimSegment56;

HAnimJoint52.children[1] = HAnimJoint55;

HAnimJoint50.children[1] = HAnimJoint52;

HAnimJoint44.children[1] = HAnimJoint50;

HAnimJoint42.children[1] = HAnimJoint44;

HAnimJoint37.children[1] = HAnimJoint42;

HAnimJoint26.children[1] = HAnimJoint37;

let HAnimJoint60 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint60.name = "r_hip";
HAnimJoint60.DEF = "hanim_r_hip";
HAnimJoint60.center = new SFVec3f(new float[-0.0961,0.9124,-0.0001]);
let HAnimSegment61 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment61.name = "r_thigh";
HAnimSegment61.DEF = "hanim_r_thigh";
let HAnimSite62 = browser.currentScene.createNode("HAnimSite");
HAnimSite62.name = "r_knee_crease_pt";
HAnimSite62.DEF = "hanim_r_knee_crease_pt";
HAnimSite62.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
HAnimSegment61.children = new MFNode();

HAnimSegment61.children[0] = HAnimSite62;

let HAnimSite63 = browser.currentScene.createNode("HAnimSite");
HAnimSite63.name = "r_femoral_lateral_epicondyle_pt";
HAnimSite63.DEF = "hanim_r_femoral_lateral_epicondyle_pt";
HAnimSite63.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
HAnimSegment61.children[1] = HAnimSite63;

let HAnimSite64 = browser.currentScene.createNode("HAnimSite");
HAnimSite64.name = "r_femoral_medial_epicondyle_pt";
HAnimSite64.DEF = "hanim_r_femoral_medial_epicondyle_pt";
HAnimSite64.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
HAnimSegment61.children[2] = HAnimSite64;

HAnimJoint60.children = new MFNode();

HAnimJoint60.children[0] = HAnimSegment61;

let HAnimJoint65 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint65.name = "r_knee";
HAnimJoint65.DEF = "hanim_r_knee";
HAnimJoint65.center = new SFVec3f(new float[-0.104,0.4867,0.0308]);
let HAnimSegment66 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment66.name = "r_calf";
HAnimSegment66.DEF = "hanim_r_calf";
HAnimJoint65.children = new MFNode();

HAnimJoint65.children[0] = HAnimSegment66;

let HAnimJoint67 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint67.name = "r_talocrural";
HAnimJoint67.DEF = "hanim_r_talocrural";
HAnimJoint67.center = new SFVec3f(new float[-0.1101,0.0656,-0.0736]);
let HAnimSegment68 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment68.name = "r_talus";
HAnimSegment68.DEF = "hanim_r_talus";
let HAnimSite69 = browser.currentScene.createNode("HAnimSite");
HAnimSite69.name = "r_lateral_malleolus_pt";
HAnimSite69.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite69.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
HAnimSegment68.children = new MFNode();

HAnimSegment68.children[0] = HAnimSite69;

let HAnimSite70 = browser.currentScene.createNode("HAnimSite");
HAnimSite70.name = "r_medial_malleolus_pt";
HAnimSite70.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite70.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
HAnimSegment68.children[1] = HAnimSite70;

let HAnimSite71 = browser.currentScene.createNode("HAnimSite");
HAnimSite71.name = "r_sphyrion_pt";
HAnimSite71.DEF = "hanim_r_sphyrion_pt";
HAnimSite71.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
HAnimSegment68.children[2] = HAnimSite71;

let HAnimSite72 = browser.currentScene.createNode("HAnimSite");
HAnimSite72.name = "r_calcaneus_posterior_pt";
HAnimSite72.DEF = "hanim_r_calcaneus_posterior_pt";
HAnimSite72.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
HAnimSegment68.children[3] = HAnimSite72;

HAnimJoint67.children = new MFNode();

HAnimJoint67.children[0] = HAnimSegment68;

let HAnimJoint73 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint73.name = "r_tarsometatarsal_2";
HAnimJoint73.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint73.center = new SFVec3f(new float[-0.1086,0.0001,-0.0368]);
let HAnimSegment74 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment74.name = "r_metatarsal_2";
HAnimSegment74.DEF = "hanim_r_metatarsal_2";
HAnimJoint73.children = new MFNode();

HAnimJoint73.children[0] = HAnimSegment74;

let HAnimJoint75 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint75.name = "r_metatarsophalangeal_2";
HAnimJoint75.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint75.center = new SFVec3f(new float[-0.1086,0.0001,0.0368]);
let HAnimSegment76 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment76.name = "r_tarsal_proximal_phalanx_2";
HAnimSegment76.DEF = "hanim_r_tarsal_proximal_phalanx_2";
let HAnimSite77 = browser.currentScene.createNode("HAnimSite");
HAnimSite77.name = "r_metatarsal_phalanx_1_pt";
HAnimSite77.DEF = "hanim_r_metatarsal_phalanx_1_pt";
HAnimSite77.translation = new SFVec3f(new float[-0.0521,0.026,0.0127]);
HAnimSegment76.children = new MFNode();

HAnimSegment76.children[0] = HAnimSite77;

HAnimJoint75.children = new MFNode();

HAnimJoint75.children[0] = HAnimSegment76;

let HAnimJoint78 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint78.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint78.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint78.center = new SFVec3f(new float[-0.1086,0,0.0762]);
let HAnimSegment79 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment79.name = "r_tarsal_distal_phalanx_2";
HAnimSegment79.DEF = "hanim_r_tarsal_distal_phalanx_2";
let HAnimSite80 = browser.currentScene.createNode("HAnimSite");
HAnimSite80.name = "r_forefoot_tip";
HAnimSite80.DEF = "hanim_r_forefoot_tip";
HAnimSite80.translation = new SFVec3f(new float[-0.1043,0.0227,0.145]);
HAnimSegment79.children = new MFNode();

HAnimSegment79.children[0] = HAnimSite80;

let HAnimSite81 = browser.currentScene.createNode("HAnimSite");
HAnimSite81.name = "r_metatarsal_phalanx_5_pt";
HAnimSite81.DEF = "hanim_r_metatarsal_phalanx_5_pt";
HAnimSite81.translation = new SFVec3f(new float[-0.1523,0.0166,0.0895]);
HAnimSegment79.children[1] = HAnimSite81;

let HAnimSite82 = browser.currentScene.createNode("HAnimSite");
HAnimSite82.name = "r_tarsal_distal_phalanx_2_pt";
HAnimSite82.DEF = "hanim_r_tarsal_distal_phalanx_2_pt";
HAnimSite82.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
HAnimSegment79.children[2] = HAnimSite82;

HAnimJoint78.children = new MFNode();

HAnimJoint78.children[0] = HAnimSegment79;

HAnimJoint75.children[1] = HAnimJoint78;

HAnimJoint73.children[1] = HAnimJoint75;

HAnimJoint67.children[1] = HAnimJoint73;

HAnimJoint65.children[1] = HAnimJoint67;

HAnimJoint60.children[1] = HAnimJoint65;

HAnimJoint26.children[2] = HAnimJoint60;

HAnimJoint24.children[1] = HAnimJoint26;

let HAnimJoint83 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint83.name = "vl5";
HAnimJoint83.DEF = "hanim_vl5";
HAnimJoint83.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
let HAnimSegment84 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment84.name = "l5";
HAnimSegment84.DEF = "hanim_l5";
let HAnimSite85 = browser.currentScene.createNode("HAnimSite");
HAnimSite85.name = "waist_preferred_posterior_pt";
HAnimSite85.DEF = "hanim_waist_preferred_posterior_pt";
HAnimSite85.translation = new SFVec3f(new float[0,1.0915,-0.1091]);
HAnimSegment84.children = new MFNode();

HAnimSegment84.children[0] = HAnimSite85;

let HAnimSite86 = browser.currentScene.createNode("HAnimSite");
HAnimSite86.name = "navel_pt";
HAnimSite86.DEF = "hanim_navel_pt";
HAnimSite86.translation = new SFVec3f(new float[0.0069,1.0966,0.1017]);
HAnimSegment84.children[1] = HAnimSite86;

HAnimJoint83.children = new MFNode();

HAnimJoint83.children[0] = HAnimSegment84;

let HAnimJoint87 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint87.name = "vl4";
HAnimJoint87.DEF = "hanim_vl4";
HAnimJoint87.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
let HAnimSegment88 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment88.name = "l4";
HAnimSegment88.DEF = "hanim_l4";
HAnimJoint87.children = new MFNode();

HAnimJoint87.children[0] = HAnimSegment88;

let HAnimJoint89 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint89.name = "vl3";
HAnimJoint89.DEF = "hanim_vl3";
HAnimJoint89.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
let HAnimSegment90 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment90.name = "l3";
HAnimSegment90.DEF = "hanim_l3";
HAnimJoint89.children = new MFNode();

HAnimJoint89.children[0] = HAnimSegment90;

let HAnimJoint91 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint91.name = "vl2";
HAnimJoint91.DEF = "hanim_vl2";
HAnimJoint91.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
let HAnimSegment92 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment92.name = "l2";
HAnimSegment92.DEF = "hanim_l2";
let HAnimSite93 = browser.currentScene.createNode("HAnimSite");
HAnimSite93.name = "r_rib10_pt";
HAnimSite93.DEF = "hanim_r_rib10_pt";
HAnimSite93.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
HAnimSegment92.children = new MFNode();

HAnimSegment92.children[0] = HAnimSite93;

let HAnimSite94 = browser.currentScene.createNode("HAnimSite");
HAnimSite94.name = "l_rib10_pt";
HAnimSite94.DEF = "hanim_l_rib10_pt";
HAnimSite94.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
HAnimSegment92.children[1] = HAnimSite94;

let HAnimSite95 = browser.currentScene.createNode("HAnimSite");
HAnimSite95.name = "rib10_midspine_pt";
HAnimSite95.DEF = "hanim_rib10_midspine_pt";
HAnimSite95.translation = new SFVec3f(new float[0.0049,1.1908,-0.1113]);
HAnimSegment92.children[2] = HAnimSite95;

HAnimJoint91.children = new MFNode();

HAnimJoint91.children[0] = HAnimSegment92;

let HAnimJoint96 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint96.name = "vl1";
HAnimJoint96.DEF = "hanim_vl1";
HAnimJoint96.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
let HAnimSegment97 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment97.name = "l1";
HAnimSegment97.DEF = "hanim_l1";
HAnimJoint96.children = new MFNode();

HAnimJoint96.children[0] = HAnimSegment97;

let HAnimJoint98 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint98.name = "vt12";
HAnimJoint98.DEF = "hanim_vt12";
HAnimJoint98.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
let HAnimSegment99 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment99.name = "t12";
HAnimSegment99.DEF = "hanim_t12";
HAnimJoint98.children = new MFNode();

HAnimJoint98.children[0] = HAnimSegment99;

let HAnimJoint100 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint100.name = "vt11";
HAnimJoint100.DEF = "hanim_vt11";
HAnimJoint100.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
let HAnimSegment101 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment101.name = "t11";
HAnimSegment101.DEF = "hanim_t11";
HAnimJoint100.children = new MFNode();

HAnimJoint100.children[0] = HAnimSegment101;

let HAnimJoint102 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint102.name = "vt10";
HAnimJoint102.DEF = "hanim_vt10";
HAnimJoint102.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
let HAnimSegment103 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment103.name = "t10";
HAnimSegment103.DEF = "hanim_t10";
let HAnimSite104 = browser.currentScene.createNode("HAnimSite");
HAnimSite104.name = "substernale_pt";
HAnimSite104.DEF = "hanim_substernale_pt";
HAnimSite104.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
HAnimSegment103.children = new MFNode();

HAnimSegment103.children[0] = HAnimSite104;

HAnimJoint102.children = new MFNode();

HAnimJoint102.children[0] = HAnimSegment103;

let HAnimJoint105 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint105.name = "vt9";
HAnimJoint105.DEF = "hanim_vt9";
HAnimJoint105.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
let HAnimSegment106 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment106.name = "t9";
HAnimSegment106.DEF = "hanim_t9";
let HAnimSite107 = browser.currentScene.createNode("HAnimSite");
HAnimSite107.name = "r_thelion_pt";
HAnimSite107.DEF = "hanim_r_thelion_pt";
HAnimSite107.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
HAnimSegment106.children = new MFNode();

HAnimSegment106.children[0] = HAnimSite107;

let HAnimSite108 = browser.currentScene.createNode("HAnimSite");
HAnimSite108.name = "l_thelion_pt";
HAnimSite108.DEF = "hanim_l_thelion_pt";
HAnimSite108.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
HAnimSegment106.children[1] = HAnimSite108;

HAnimJoint105.children = new MFNode();

HAnimJoint105.children[0] = HAnimSegment106;

let HAnimJoint109 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint109.name = "vt8";
HAnimJoint109.DEF = "hanim_vt8";
HAnimJoint109.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
let HAnimSegment110 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment110.name = "t8";
HAnimSegment110.DEF = "hanim_t8";
HAnimJoint109.children = new MFNode();

HAnimJoint109.children[0] = HAnimSegment110;

let HAnimJoint111 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint111.name = "vt7";
HAnimJoint111.DEF = "hanim_vt7";
HAnimJoint111.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
let HAnimSegment112 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment112.name = "t7";
HAnimSegment112.DEF = "hanim_t7";
HAnimJoint111.children = new MFNode();

HAnimJoint111.children[0] = HAnimSegment112;

let HAnimJoint113 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint113.name = "vt6";
HAnimJoint113.DEF = "hanim_vt6";
HAnimJoint113.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
let HAnimSegment114 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment114.name = "t6";
HAnimSegment114.DEF = "hanim_t6";
HAnimJoint113.children = new MFNode();

HAnimJoint113.children[0] = HAnimSegment114;

let HAnimJoint115 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint115.name = "vt5";
HAnimJoint115.DEF = "hanim_vt5";
HAnimJoint115.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
let HAnimSegment116 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment116.name = "t5";
HAnimSegment116.DEF = "hanim_t5";
HAnimJoint115.children = new MFNode();

HAnimJoint115.children[0] = HAnimSegment116;

let HAnimJoint117 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint117.name = "vt4";
HAnimJoint117.DEF = "hanim_vt4";
HAnimJoint117.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
let HAnimSegment118 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment118.name = "t4";
HAnimSegment118.DEF = "hanim_t4";
HAnimJoint117.children = new MFNode();

HAnimJoint117.children[0] = HAnimSegment118;

let HAnimJoint119 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint119.name = "vt3";
HAnimJoint119.DEF = "hanim_vt3";
HAnimJoint119.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
let HAnimSegment120 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment120.name = "t3";
HAnimSegment120.DEF = "hanim_t3";
HAnimJoint119.children = new MFNode();

HAnimJoint119.children[0] = HAnimSegment120;

let HAnimJoint121 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint121.name = "vt2";
HAnimJoint121.DEF = "hanim_vt2";
HAnimJoint121.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
let HAnimSegment122 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment122.name = "t2";
HAnimSegment122.DEF = "hanim_t2";
HAnimJoint121.children = new MFNode();

HAnimJoint121.children[0] = HAnimSegment122;

let HAnimJoint123 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint123.name = "vt1";
HAnimJoint123.DEF = "hanim_vt1";
HAnimJoint123.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
let HAnimSegment124 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment124.name = "t1";
HAnimSegment124.DEF = "hanim_t1";
let HAnimSite125 = browser.currentScene.createNode("HAnimSite");
HAnimSite125.name = "suprasternale_pt";
HAnimSite125.DEF = "hanim_suprasternale_pt";
HAnimSite125.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
HAnimSegment124.children = new MFNode();

HAnimSegment124.children[0] = HAnimSite125;

let HAnimSite126 = browser.currentScene.createNode("HAnimSite");
HAnimSite126.name = "cervicale_pt";
HAnimSite126.DEF = "hanim_cervicale_pt";
HAnimSite126.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
HAnimSegment124.children[1] = HAnimSite126;

HAnimJoint123.children = new MFNode();

HAnimJoint123.children[0] = HAnimSegment124;

let HAnimJoint127 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint127.name = "vc7";
HAnimJoint127.DEF = "hanim_vc7";
HAnimJoint127.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
let HAnimSegment128 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment128.name = "c7";
HAnimSegment128.DEF = "hanim_c7";
let HAnimSite129 = browser.currentScene.createNode("HAnimSite");
HAnimSite129.name = "r_neck_base_pt";
HAnimSite129.DEF = "hanim_r_neck_base_pt";
HAnimSite129.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
HAnimSegment128.children = new MFNode();

HAnimSegment128.children[0] = HAnimSite129;

let HAnimSite130 = browser.currentScene.createNode("HAnimSite");
HAnimSite130.name = "l_neck_base_pt";
HAnimSite130.DEF = "hanim_l_neck_base_pt";
HAnimSite130.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
HAnimSegment128.children[1] = HAnimSite130;

HAnimJoint127.children = new MFNode();

HAnimJoint127.children[0] = HAnimSegment128;

let HAnimJoint131 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint131.name = "vc6";
HAnimJoint131.DEF = "hanim_vc6";
HAnimJoint131.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
let HAnimSegment132 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment132.name = "c6";
HAnimSegment132.DEF = "hanim_c6";
HAnimJoint131.children = new MFNode();

HAnimJoint131.children[0] = HAnimSegment132;

let HAnimJoint133 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint133.name = "vc5";
HAnimJoint133.DEF = "hanim_vc5";
HAnimJoint133.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
let HAnimSegment134 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment134.name = "c5";
HAnimSegment134.DEF = "hanim_c5";
HAnimJoint133.children = new MFNode();

HAnimJoint133.children[0] = HAnimSegment134;

let HAnimJoint135 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint135.name = "vc4";
HAnimJoint135.DEF = "hanim_vc4";
HAnimJoint135.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
let HAnimSegment136 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment136.name = "c4";
HAnimSegment136.DEF = "hanim_c4";
HAnimJoint135.children = new MFNode();

HAnimJoint135.children[0] = HAnimSegment136;

let HAnimJoint137 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint137.name = "vc3";
HAnimJoint137.DEF = "hanim_vc3";
HAnimJoint137.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
let HAnimSegment138 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment138.name = "c3";
HAnimSegment138.DEF = "hanim_c3";
HAnimJoint137.children = new MFNode();

HAnimJoint137.children[0] = HAnimSegment138;

let HAnimJoint139 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint139.name = "vc2";
HAnimJoint139.DEF = "hanim_vc2";
HAnimJoint139.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
let HAnimSegment140 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment140.name = "c2";
HAnimSegment140.DEF = "hanim_c2";
HAnimJoint139.children = new MFNode();

HAnimJoint139.children[0] = HAnimSegment140;

let HAnimJoint141 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint141.name = "vc1";
HAnimJoint141.DEF = "hanim_vc1";
HAnimJoint141.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
let HAnimSegment142 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment142.name = "c1";
HAnimSegment142.DEF = "hanim_c1";
HAnimJoint141.children = new MFNode();

HAnimJoint141.children[0] = HAnimSegment142;

let HAnimJoint143 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint143.name = "skullbase";
HAnimJoint143.DEF = "hanim_skullbase";
HAnimJoint143.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
let HAnimSegment144 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment144.name = "skull";
HAnimSegment144.DEF = "hanim_skull";
let HAnimSite145 = browser.currentScene.createNode("HAnimSite");
HAnimSite145.name = "skull_vertex_tip";
HAnimSite145.DEF = "hanim_skull_vertex_tip";
HAnimSite145.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
//TODO move skull_tip x to zero, check others for symmetry
HAnimSegment144.children = new MFNode();

HAnimSegment144.children[0] = HAnimSite145;

let HAnimSite146 = browser.currentScene.createNode("HAnimSite");
HAnimSite146.name = "sellion_pt";
HAnimSite146.DEF = "hanim_sellion_pt";
HAnimSite146.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
HAnimSegment144.children[1] = HAnimSite146;

let HAnimSite147 = browser.currentScene.createNode("HAnimSite");
HAnimSite147.name = "r_infraorbitale_pt";
HAnimSite147.DEF = "hanim_r_infraorbitale_pt";
HAnimSite147.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
HAnimSegment144.children[2] = HAnimSite147;

let HAnimSite148 = browser.currentScene.createNode("HAnimSite");
HAnimSite148.name = "l_infraorbitale_pt";
HAnimSite148.DEF = "hanim_l_infraorbitale_pt";
HAnimSite148.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
HAnimSegment144.children[3] = HAnimSite148;

let HAnimSite149 = browser.currentScene.createNode("HAnimSite");
HAnimSite149.name = "supramenton_pt";
HAnimSite149.DEF = "hanim_supramenton_pt";
HAnimSite149.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
HAnimSegment144.children[4] = HAnimSite149;

let HAnimSite150 = browser.currentScene.createNode("HAnimSite");
HAnimSite150.name = "r_tragion_pt";
HAnimSite150.DEF = "hanim_r_tragion_pt";
HAnimSite150.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
HAnimSegment144.children[5] = HAnimSite150;

let HAnimSite151 = browser.currentScene.createNode("HAnimSite");
HAnimSite151.name = "r_gonion_pt";
HAnimSite151.DEF = "hanim_r_gonion_pt";
HAnimSite151.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
HAnimSegment144.children[6] = HAnimSite151;

let HAnimSite152 = browser.currentScene.createNode("HAnimSite");
HAnimSite152.name = "l_tragion_pt";
HAnimSite152.DEF = "hanim_l_tragion_pt";
HAnimSite152.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
HAnimSegment144.children[7] = HAnimSite152;

let HAnimSite153 = browser.currentScene.createNode("HAnimSite");
HAnimSite153.name = "l_gonion_pt";
HAnimSite153.DEF = "hanim_l_gonion_pt";
HAnimSite153.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
HAnimSegment144.children[8] = HAnimSite153;

let HAnimSite154 = browser.currentScene.createNode("HAnimSite");
HAnimSite154.name = "nuchale_pt";
HAnimSite154.DEF = "hanim_nuchale_pt";
HAnimSite154.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
HAnimSegment144.children[9] = HAnimSite154;

HAnimJoint143.children = new MFNode();

HAnimJoint143.children[0] = HAnimSegment144;

let HAnimJoint155 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint155.name = "l_eyeball_joint";
HAnimJoint155.DEF = "hanim_l_eyeball_joint";
HAnimJoint155.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
let HAnimSegment156 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment156.name = "l_eyeball";
HAnimSegment156.DEF = "hanim_l_eyeball";
let HAnimSite157 = browser.currentScene.createNode("HAnimSite");
HAnimSite157.name = "l_eyeball_site_view";
HAnimSite157.DEF = "hanim_l_eyeball_site_view";
HAnimSite157.translation = new SFVec3f(new float[0.034,1.64,0.05]);
let Viewpoint158 = browser.currentScene.createNode("Viewpoint");
Viewpoint158.DEF = "hanim_l_eyeball_site_viewpoint";
Viewpoint158.description = "l_eyeball_site_viewpoint looking forward";
Viewpoint158.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint158.position = new SFVec3f(new float[0,0,0]);
HAnimSite157.children = new MFNode();

HAnimSite157.children[0] = Viewpoint158;

HAnimSegment156.children = new MFNode();

HAnimSegment156.children[0] = HAnimSite157;

HAnimJoint155.children = new MFNode();

HAnimJoint155.children[0] = HAnimSegment156;

HAnimJoint143.children[1] = HAnimJoint155;

let HAnimJoint159 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint159.name = "l_eyelid_joint";
HAnimJoint159.DEF = "hanim_l_eyelid_joint";
HAnimJoint159.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
let HAnimSegment160 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment160.name = "l_eyelid";
HAnimSegment160.DEF = "hanim_l_eyelid";
HAnimJoint159.children = new MFNode();

HAnimJoint159.children[0] = HAnimSegment160;

HAnimJoint143.children[2] = HAnimJoint159;

let HAnimJoint161 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint161.name = "l_eyebrow_joint";
HAnimJoint161.DEF = "hanim_l_eyebrow_joint";
HAnimJoint161.center = new SFVec3f(new float[0.0336,1.635,0.0506]);
let HAnimSegment162 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment162.name = "l_eyebrow";
HAnimSegment162.DEF = "hanim_l_eyebrow";
HAnimJoint161.children = new MFNode();

HAnimJoint161.children[0] = HAnimSegment162;

HAnimJoint143.children[3] = HAnimJoint161;

let HAnimJoint163 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint163.name = "r_eyeball_joint";
HAnimJoint163.DEF = "hanim_r_eyeball_joint";
HAnimJoint163.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
let HAnimSegment164 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment164.name = "r_eyeball";
HAnimSegment164.DEF = "hanim_r_eyeball";
let HAnimSite165 = browser.currentScene.createNode("HAnimSite");
HAnimSite165.name = "r_eyeball_site_view";
HAnimSite165.DEF = "hanim_r_eyeball_site_view";
HAnimSite165.translation = new SFVec3f(new float[-0.034,1.64,0.05]);
let Viewpoint166 = browser.currentScene.createNode("Viewpoint");
Viewpoint166.DEF = "hanim_r_eyeball_site_viewpoint";
Viewpoint166.description = "r_eyeball_site_viewpoint looking forward";
Viewpoint166.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint166.position = new SFVec3f(new float[0,0,0]);
HAnimSite165.children = new MFNode();

HAnimSite165.children[0] = Viewpoint166;

HAnimSegment164.children = new MFNode();

HAnimSegment164.children[0] = HAnimSite165;

HAnimJoint163.children = new MFNode();

HAnimJoint163.children[0] = HAnimSegment164;

HAnimJoint143.children[4] = HAnimJoint163;

let HAnimJoint167 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint167.name = "r_eyelid_joint";
HAnimJoint167.DEF = "hanim_r_eyelid_joint";
HAnimJoint167.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
let HAnimSegment168 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment168.name = "r_eyelid";
HAnimSegment168.DEF = "hanim_r_eyelid";
HAnimJoint167.children = new MFNode();

HAnimJoint167.children[0] = HAnimSegment168;

HAnimJoint143.children[5] = HAnimJoint167;

let HAnimJoint169 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint169.name = "r_eyebrow_joint";
HAnimJoint169.DEF = "hanim_r_eyebrow_joint";
HAnimJoint169.center = new SFVec3f(new float[-0.0336,1.635,0.0506]);
let HAnimSegment170 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment170.name = "r_eyebrow";
HAnimSegment170.DEF = "hanim_r_eyebrow";
HAnimJoint169.children = new MFNode();

HAnimJoint169.children[0] = HAnimSegment170;

HAnimJoint143.children[6] = HAnimJoint169;

let HAnimJoint171 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint171.name = "temporomandibular";
HAnimJoint171.DEF = "hanim_temporomandibular";
HAnimJoint171.center = new SFVec3f(new float[0,1.63,0.015]);
//Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint
let HAnimSegment172 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment172.name = "jaw";
HAnimSegment172.DEF = "hanim_jaw";
let HAnimSite173 = browser.currentScene.createNode("HAnimSite");
HAnimSite173.name = "temporomandibular_l_site_pt";
HAnimSite173.DEF = "hanim_temporomandibular_l_site_pt";
HAnimSite173.translation = new SFVec3f(new float[0.045,1.63,0]);
HAnimSegment172.children = new MFNode();

HAnimSegment172.children[0] = HAnimSite173;

let HAnimSite174 = browser.currentScene.createNode("HAnimSite");
HAnimSite174.name = "temporomandibular_r_site_pt";
HAnimSite174.DEF = "hanim_temporomandibular_r_site_pt";
HAnimSite174.translation = new SFVec3f(new float[-0.045,1.63,0]);
HAnimSegment172.children[1] = HAnimSite174;

HAnimJoint171.children = new MFNode();

HAnimJoint171.children[0] = HAnimSegment172;

HAnimJoint143.children[7] = HAnimJoint171;

HAnimJoint141.children[1] = HAnimJoint143;

HAnimJoint139.children[1] = HAnimJoint141;

HAnimJoint137.children[1] = HAnimJoint139;

HAnimJoint135.children[1] = HAnimJoint137;

HAnimJoint133.children[1] = HAnimJoint135;

HAnimJoint131.children[1] = HAnimJoint133;

HAnimJoint127.children[1] = HAnimJoint131;

HAnimJoint123.children[1] = HAnimJoint127;

let HAnimJoint175 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint175.name = "l_sternoclavicular";
HAnimJoint175.DEF = "hanim_l_sternoclavicular";
HAnimJoint175.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
let HAnimSegment176 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment176.name = "l_clavicle";
HAnimSegment176.DEF = "hanim_l_clavicle";
let HAnimSite177 = browser.currentScene.createNode("HAnimSite");
HAnimSite177.name = "l_clavicle_pt";
HAnimSite177.DEF = "hanim_l_clavicle_pt";
HAnimSite177.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
HAnimSegment176.children = new MFNode();

HAnimSegment176.children[0] = HAnimSite177;

let HAnimSite178 = browser.currentScene.createNode("HAnimSite");
HAnimSite178.name = "l_acromion_pt";
HAnimSite178.DEF = "hanim_l_acromion_pt";
HAnimSite178.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
HAnimSegment176.children[1] = HAnimSite178;

let HAnimSite179 = browser.currentScene.createNode("HAnimSite");
HAnimSite179.name = "l_axilla_proximal_pt";
HAnimSite179.DEF = "hanim_l_axilla_proximal_pt";
HAnimSite179.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
HAnimSegment176.children[2] = HAnimSite179;

let HAnimSite180 = browser.currentScene.createNode("HAnimSite");
HAnimSite180.name = "l_axilla_distal_pt";
HAnimSite180.DEF = "hanim_l_axilla_distal_pt";
HAnimSite180.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
HAnimSegment176.children[3] = HAnimSite180;

HAnimJoint175.children = new MFNode();

HAnimJoint175.children[0] = HAnimSegment176;

let HAnimJoint181 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint181.name = "l_acromioclavicular";
HAnimJoint181.DEF = "hanim_l_acromioclavicular";
HAnimJoint181.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
let HAnimSegment182 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment182.name = "l_scapula";
HAnimSegment182.DEF = "hanim_l_scapula";
HAnimJoint181.children = new MFNode();

HAnimJoint181.children[0] = HAnimSegment182;

let HAnimJoint183 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint183.name = "l_shoulder";
HAnimJoint183.DEF = "hanim_l_shoulder";
HAnimJoint183.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
let HAnimSegment184 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment184.name = "l_upperarm";
HAnimSegment184.DEF = "hanim_l_upperarm";
let HAnimSite185 = browser.currentScene.createNode("HAnimSite");
HAnimSite185.name = "l_humeral_lateral_epicondyle_pt";
HAnimSite185.DEF = "hanim_l_humeral_lateral_epicondyle_pt";
HAnimSite185.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
HAnimSegment184.children = new MFNode();

HAnimSegment184.children[0] = HAnimSite185;

HAnimJoint183.children = new MFNode();

HAnimJoint183.children[0] = HAnimSegment184;

let HAnimJoint186 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint186.name = "l_elbow";
HAnimJoint186.DEF = "hanim_l_elbow";
HAnimJoint186.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
let HAnimSegment187 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment187.name = "l_forearm";
HAnimSegment187.DEF = "hanim_l_forearm";
let HAnimSite188 = browser.currentScene.createNode("HAnimSite");
HAnimSite188.name = "l_radial_styloid_pt";
HAnimSite188.DEF = "hanim_l_radial_styloid_pt";
HAnimSite188.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
HAnimSegment187.children = new MFNode();

HAnimSegment187.children[0] = HAnimSite188;

let HAnimSite189 = browser.currentScene.createNode("HAnimSite");
HAnimSite189.name = "l_olecranon_pt";
HAnimSite189.DEF = "hanim_l_olecranon_pt";
HAnimSite189.translation = new SFVec3f(new float[0.1962,1.1375,-0.1123]);
HAnimSegment187.children[1] = HAnimSite189;

let HAnimSite190 = browser.currentScene.createNode("HAnimSite");
HAnimSite190.name = "l_humeral_medial_epicondyle_pt";
HAnimSite190.DEF = "hanim_l_humeral_medial_epicondyle_pt";
HAnimSite190.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
HAnimSegment187.children[2] = HAnimSite190;

let HAnimSite191 = browser.currentScene.createNode("HAnimSite");
HAnimSite191.name = "l_radiale_pt";
HAnimSite191.DEF = "hanim_l_radiale_pt";
HAnimSite191.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
HAnimSegment187.children[3] = HAnimSite191;

HAnimJoint186.children = new MFNode();

HAnimJoint186.children[0] = HAnimSegment187;

let HAnimJoint192 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint192.name = "l_radiocarpal";
HAnimJoint192.DEF = "hanim_l_radiocarpal";
HAnimJoint192.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
let HAnimSegment193 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment193.name = "l_carpal";
HAnimSegment193.DEF = "hanim_l_carpal";
let HAnimSite194 = browser.currentScene.createNode("HAnimSite");
HAnimSite194.name = "l_metacarpal_phalanx_2_pt";
HAnimSite194.DEF = "hanim_l_metacarpal_phalanx_2_pt";
HAnimSite194.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
HAnimSegment193.children = new MFNode();

HAnimSegment193.children[0] = HAnimSite194;

let HAnimSite195 = browser.currentScene.createNode("HAnimSite");
HAnimSite195.name = "l_ulnar_styloid_pt";
HAnimSite195.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite195.translation = new SFVec3f(new float[0.2142,0.8529,-0.0648]);
HAnimSegment193.children[1] = HAnimSite195;

let HAnimSite196 = browser.currentScene.createNode("HAnimSite");
HAnimSite196.name = "l_metacarpal_phalanx_5_pt";
HAnimSite196.DEF = "hanim_l_metacarpal_phalanx_5_pt";
HAnimSite196.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
HAnimSegment193.children[2] = HAnimSite196;

let HAnimSite197 = browser.currentScene.createNode("HAnimSite");
HAnimSite197.name = "l_hand_front_view";
HAnimSite197.DEF = "hanim_l_hand_front_view";
HAnimSite197.translation = new SFVec3f(new float[0.3,0.75,0.45]);
let Viewpoint198 = browser.currentScene.createNode("Viewpoint");
Viewpoint198.DEF = "hanim_l_hand_front_viewpoint";
Viewpoint198.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
Viewpoint198.description = "left hand front";
Viewpoint198.position = new SFVec3f(new float[0,0,0]);
HAnimSite197.children = new MFNode();

HAnimSite197.children[0] = Viewpoint198;

HAnimSegment193.children[3] = HAnimSite197;

HAnimJoint192.children = new MFNode();

HAnimJoint192.children[0] = HAnimSegment193;

let HAnimJoint199 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint199.name = "l_carpometacarpal_1";
HAnimJoint199.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint199.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
let HAnimSegment200 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment200.name = "l_metacarpal_1";
HAnimSegment200.DEF = "hanim_l_metacarpal_1";
HAnimJoint199.children = new MFNode();

HAnimJoint199.children[0] = HAnimSegment200;

let HAnimJoint201 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint201.name = "l_metacarpophalangeal_1";
HAnimJoint201.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint201.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
let HAnimSegment202 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment202.name = "l_carpal_proximal_phalanx_1";
HAnimSegment202.DEF = "hanim_l_carpal_proximal_phalanx_1";
HAnimJoint201.children = new MFNode();

HAnimJoint201.children[0] = HAnimSegment202;

let HAnimJoint203 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint203.name = "l_carpal_interphalangeal_1";
HAnimJoint203.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint203.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
let HAnimSegment204 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment204.name = "l_carpal_distal_phalanx_1";
HAnimSegment204.DEF = "hanim_l_carpal_distal_phalanx_1";
let HAnimSite205 = browser.currentScene.createNode("HAnimSite");
HAnimSite205.name = "l_carpal_distal_phalanx_1_tip";
HAnimSite205.DEF = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimSite205.translation = new SFVec3f(new float[0.1982,0.8061,0.0759]);
HAnimSegment204.children = new MFNode();

HAnimSegment204.children[0] = HAnimSite205;

HAnimJoint203.children = new MFNode();

HAnimJoint203.children[0] = HAnimSegment204;

HAnimJoint201.children[1] = HAnimJoint203;

HAnimJoint199.children[1] = HAnimJoint201;

HAnimJoint192.children[1] = HAnimJoint199;

let HAnimJoint206 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint206.name = "l_carpometacarpal_2";
HAnimJoint206.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint206.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
let HAnimSegment207 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment207.name = "l_metacarpal_2";
HAnimSegment207.DEF = "hanim_l_metacarpal_2";
HAnimJoint206.children = new MFNode();

HAnimJoint206.children[0] = HAnimSegment207;

let HAnimJoint208 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint208.name = "l_metacarpophalangeal_2";
HAnimJoint208.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint208.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
let HAnimSegment209 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment209.name = "l_carpal_proximal_phalanx_2";
HAnimSegment209.DEF = "hanim_l_carpal_proximal_phalanx_2";
HAnimJoint208.children = new MFNode();

HAnimJoint208.children[0] = HAnimSegment209;

let HAnimJoint210 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint210.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint210.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint210.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
let HAnimSegment211 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment211.name = "l_carpal_middle_phalanx_2";
HAnimSegment211.DEF = "hanim_l_carpal_middle_phalanx_2";
HAnimJoint210.children = new MFNode();

HAnimJoint210.children[0] = HAnimSegment211;

let HAnimJoint212 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint212.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint212.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint212.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
let HAnimSegment213 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment213.name = "l_carpal_distal_phalanx_2";
HAnimSegment213.DEF = "hanim_l_carpal_distal_phalanx_2";
let HAnimSite214 = browser.currentScene.createNode("HAnimSite");
HAnimSite214.name = "l_carpal_distal_phalanx_2_tip";
HAnimSite214.DEF = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimSite214.translation = new SFVec3f(new float[0.2089,0.6858,-0.0245]);
HAnimSegment213.children = new MFNode();

HAnimSegment213.children[0] = HAnimSite214;

let HAnimSite215 = browser.currentScene.createNode("HAnimSite");
HAnimSite215.name = "l_dactylion_pt";
HAnimSite215.DEF = "hanim_l_dactylion_pt";
HAnimSite215.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
HAnimSegment213.children[1] = HAnimSite215;

HAnimJoint212.children = new MFNode();

HAnimJoint212.children[0] = HAnimSegment213;

HAnimJoint210.children[1] = HAnimJoint212;

HAnimJoint208.children[1] = HAnimJoint210;

HAnimJoint206.children[1] = HAnimJoint208;

HAnimJoint192.children[2] = HAnimJoint206;

let HAnimJoint216 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint216.name = "l_carpometacarpal_3";
HAnimJoint216.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint216.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
let HAnimSegment217 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment217.name = "l_metacarpal_3";
HAnimSegment217.DEF = "hanim_l_metacarpal_3";
HAnimJoint216.children = new MFNode();

HAnimJoint216.children[0] = HAnimSegment217;

let HAnimJoint218 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint218.name = "l_metacarpophalangeal_3";
HAnimJoint218.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint218.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
let HAnimSegment219 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment219.name = "l_carpal_proximal_phalanx_3";
HAnimSegment219.DEF = "hanim_l_carpal_proximal_phalanx_3";
HAnimJoint218.children = new MFNode();

HAnimJoint218.children[0] = HAnimSegment219;

let HAnimJoint220 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint220.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint220.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint220.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
let HAnimSegment221 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment221.name = "l_carpal_middle_phalanx_3";
HAnimSegment221.DEF = "hanim_l_carpal_middle_phalanx_3";
HAnimJoint220.children = new MFNode();

HAnimJoint220.children[0] = HAnimSegment221;

let HAnimJoint222 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint222.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint222.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint222.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
let HAnimSegment223 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment223.name = "l_carpal_distal_phalanx_3";
HAnimSegment223.DEF = "hanim_l_carpal_distal_phalanx_3";
let HAnimSite224 = browser.currentScene.createNode("HAnimSite");
HAnimSite224.name = "l_carpal_distal_phalanx_3_tip";
HAnimSite224.DEF = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimSite224.translation = new SFVec3f(new float[0.208,0.6731,-0.0491]);
HAnimSegment223.children = new MFNode();

HAnimSegment223.children[0] = HAnimSite224;

HAnimJoint222.children = new MFNode();

HAnimJoint222.children[0] = HAnimSegment223;

HAnimJoint220.children[1] = HAnimJoint222;

HAnimJoint218.children[1] = HAnimJoint220;

HAnimJoint216.children[1] = HAnimJoint218;

HAnimJoint192.children[3] = HAnimJoint216;

let HAnimJoint225 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint225.name = "l_carpometacarpal_4";
HAnimJoint225.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint225.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
let HAnimSegment226 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment226.name = "l_metacarpal_4";
HAnimSegment226.DEF = "hanim_l_metacarpal_4";
HAnimJoint225.children = new MFNode();

HAnimJoint225.children[0] = HAnimSegment226;

let HAnimJoint227 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint227.name = "l_metacarpophalangeal_4";
HAnimJoint227.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint227.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
let HAnimSegment228 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment228.name = "l_carpal_proximal_phalanx_4";
HAnimSegment228.DEF = "hanim_l_carpal_proximal_phalanx_4";
HAnimJoint227.children = new MFNode();

HAnimJoint227.children[0] = HAnimSegment228;

let HAnimJoint229 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint229.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint229.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint229.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
let HAnimSegment230 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment230.name = "l_carpal_middle_phalanx_4";
HAnimSegment230.DEF = "hanim_l_carpal_middle_phalanx_4";
HAnimJoint229.children = new MFNode();

HAnimJoint229.children[0] = HAnimSegment230;

let HAnimJoint231 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint231.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint231.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint231.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
let HAnimSegment232 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment232.name = "l_carpal_distal_phalanx_4";
HAnimSegment232.DEF = "hanim_l_carpal_distal_phalanx_4";
let HAnimSite233 = browser.currentScene.createNode("HAnimSite");
HAnimSite233.name = "l_carpal_distal_phalanx_4_tip";
HAnimSite233.DEF = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimSite233.translation = new SFVec3f(new float[0.2035,0.675,-0.0756]);
HAnimSegment232.children = new MFNode();

HAnimSegment232.children[0] = HAnimSite233;

HAnimJoint231.children = new MFNode();

HAnimJoint231.children[0] = HAnimSegment232;

HAnimJoint229.children[1] = HAnimJoint231;

HAnimJoint227.children[1] = HAnimJoint229;

HAnimJoint225.children[1] = HAnimJoint227;

HAnimJoint192.children[4] = HAnimJoint225;

let HAnimJoint234 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint234.name = "l_carpometacarpal_5";
HAnimJoint234.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint234.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
let HAnimSegment235 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment235.name = "l_metacarpal_5";
HAnimSegment235.DEF = "hanim_l_metacarpal_5";
HAnimJoint234.children = new MFNode();

HAnimJoint234.children[0] = HAnimSegment235;

let HAnimJoint236 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint236.name = "l_metacarpophalangeal_5";
HAnimJoint236.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint236.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
let HAnimSegment237 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment237.name = "l_carpal_proximal_phalanx_5";
HAnimSegment237.DEF = "hanim_l_carpal_proximal_phalanx_5";
HAnimJoint236.children = new MFNode();

HAnimJoint236.children[0] = HAnimSegment237;

let HAnimJoint238 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint238.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint238.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint238.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
let HAnimSegment239 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment239.name = "l_carpal_middle_phalanx_5";
HAnimSegment239.DEF = "hanim_l_carpal_middle_phalanx_5";
HAnimJoint238.children = new MFNode();

HAnimJoint238.children[0] = HAnimSegment239;

let HAnimJoint240 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint240.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint240.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint240.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
let HAnimSegment241 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment241.name = "l_carpal_distal_phalanx_5";
HAnimSegment241.DEF = "hanim_l_carpal_distal_phalanx_5";
let HAnimSite242 = browser.currentScene.createNode("HAnimSite");
HAnimSite242.name = "l_carpal_distal_phalanx_5_tip";
HAnimSite242.DEF = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimSite242.translation = new SFVec3f(new float[0.2014,0.7009,-0.1012]);
HAnimSegment241.children = new MFNode();

HAnimSegment241.children[0] = HAnimSite242;

HAnimJoint240.children = new MFNode();

HAnimJoint240.children[0] = HAnimSegment241;

HAnimJoint238.children[1] = HAnimJoint240;

HAnimJoint236.children[1] = HAnimJoint238;

HAnimJoint234.children[1] = HAnimJoint236;

HAnimJoint192.children[5] = HAnimJoint234;

HAnimJoint186.children[1] = HAnimJoint192;

HAnimJoint183.children[1] = HAnimJoint186;

HAnimJoint181.children[1] = HAnimJoint183;

HAnimJoint175.children[1] = HAnimJoint181;

HAnimJoint123.children[2] = HAnimJoint175;

let HAnimJoint243 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint243.name = "r_sternoclavicular";
HAnimJoint243.DEF = "hanim_r_sternoclavicular";
HAnimJoint243.center = new SFVec3f(new float[-0.082,1.4488,-0.0353]);
let HAnimSegment244 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment244.name = "r_clavicle";
HAnimSegment244.DEF = "hanim_r_clavicle";
let HAnimSite245 = browser.currentScene.createNode("HAnimSite");
HAnimSite245.name = "r_clavicle_pt";
HAnimSite245.DEF = "hanim_r_clavicle_pt";
HAnimSite245.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
HAnimSegment244.children = new MFNode();

HAnimSegment244.children[0] = HAnimSite245;

let HAnimSite246 = browser.currentScene.createNode("HAnimSite");
HAnimSite246.name = "r_acromion_pt";
HAnimSite246.DEF = "hanim_r_acromion_pt";
HAnimSite246.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
HAnimSegment244.children[1] = HAnimSite246;

let HAnimSite247 = browser.currentScene.createNode("HAnimSite");
HAnimSite247.name = "r_axilla_proximal_pt";
HAnimSite247.DEF = "hanim_r_axilla_proximal_pt";
HAnimSite247.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
HAnimSegment244.children[2] = HAnimSite247;

let HAnimSite248 = browser.currentScene.createNode("HAnimSite");
HAnimSite248.name = "r_axilla_distal_pt";
HAnimSite248.DEF = "hanim_r_axilla_distal_pt";
HAnimSite248.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
HAnimSegment244.children[3] = HAnimSite248;

HAnimJoint243.children = new MFNode();

HAnimJoint243.children[0] = HAnimSegment244;

let HAnimJoint249 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint249.name = "r_acromioclavicular";
HAnimJoint249.DEF = "hanim_r_acromioclavicular";
HAnimJoint249.center = new SFVec3f(new float[-0.0962,1.4269,-0.0424]);
let HAnimSegment250 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment250.name = "r_scapula";
HAnimSegment250.DEF = "hanim_r_scapula";
HAnimJoint249.children = new MFNode();

HAnimJoint249.children[0] = HAnimSegment250;

let HAnimJoint251 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint251.name = "r_shoulder";
HAnimJoint251.DEF = "hanim_r_shoulder";
HAnimJoint251.center = new SFVec3f(new float[-0.2029,1.4376,-0.0387]);
let HAnimSegment252 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment252.name = "r_upperarm";
HAnimSegment252.DEF = "hanim_r_upperarm";
let HAnimSite253 = browser.currentScene.createNode("HAnimSite");
HAnimSite253.name = "r_humeral_lateral_epicondyle_pt";
HAnimSite253.DEF = "hanim_r_humeral_lateral_epicondyle_pt";
HAnimSite253.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
HAnimSegment252.children = new MFNode();

HAnimSegment252.children[0] = HAnimSite253;

HAnimJoint251.children = new MFNode();

HAnimJoint251.children[0] = HAnimSegment252;

let HAnimJoint254 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint254.name = "r_elbow";
HAnimJoint254.DEF = "hanim_r_elbow";
HAnimJoint254.center = new SFVec3f(new float[-0.2014,1.1357,-0.0682]);
let HAnimSegment255 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment255.name = "r_forearm";
HAnimSegment255.DEF = "hanim_r_forearm";
let HAnimSite256 = browser.currentScene.createNode("HAnimSite");
HAnimSite256.name = "r_radial_styloid_pt";
HAnimSite256.DEF = "hanim_r_radial_styloid_pt";
HAnimSite256.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
HAnimSegment255.children = new MFNode();

HAnimSegment255.children[0] = HAnimSite256;

let HAnimSite257 = browser.currentScene.createNode("HAnimSite");
HAnimSite257.name = "r_olecranon_pt";
HAnimSite257.DEF = "hanim_r_olecranon_pt";
HAnimSite257.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
HAnimSegment255.children[1] = HAnimSite257;

let HAnimSite258 = browser.currentScene.createNode("HAnimSite");
HAnimSite258.name = "r_humeral_medial_epicondyle_pt";
HAnimSite258.DEF = "hanim_r_humeral_medial_epicondyle_pt";
HAnimSite258.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
HAnimSegment255.children[2] = HAnimSite258;

let HAnimSite259 = browser.currentScene.createNode("HAnimSite");
HAnimSite259.name = "r_radiale_pt";
HAnimSite259.DEF = "hanim_r_radiale_pt";
HAnimSite259.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
HAnimSegment255.children[3] = HAnimSite259;

HAnimJoint254.children = new MFNode();

HAnimJoint254.children[0] = HAnimSegment255;

let HAnimJoint260 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint260.name = "r_radiocarpal";
HAnimJoint260.DEF = "hanim_r_radiocarpal";
HAnimJoint260.center = new SFVec3f(new float[-0.1984,0.8663,-0.0583]);
let HAnimSegment261 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment261.name = "r_carpal";
HAnimSegment261.DEF = "hanim_r_carpal";
let HAnimSite262 = browser.currentScene.createNode("HAnimSite");
HAnimSite262.name = "r_metacarpal_phalanx_2_pt";
HAnimSite262.DEF = "hanim_r_metacarpal_phalanx_2_pt";
HAnimSite262.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
HAnimSegment261.children = new MFNode();

HAnimSegment261.children[0] = HAnimSite262;

let HAnimSite263 = browser.currentScene.createNode("HAnimSite");
HAnimSite263.name = "r_ulnar_styloid_pt";
HAnimSite263.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite263.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
HAnimSegment261.children[1] = HAnimSite263;

let HAnimSite264 = browser.currentScene.createNode("HAnimSite");
HAnimSite264.name = "r_metacarpal_phalanx_5_pt";
HAnimSite264.DEF = "hanim_r_metacarpal_phalanx_5_pt";
HAnimSite264.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
HAnimSegment261.children[2] = HAnimSite264;

let HAnimSite265 = browser.currentScene.createNode("HAnimSite");
HAnimSite265.name = "r_hand_front_view";
HAnimSite265.DEF = "hanim_r_hand_front_view";
HAnimSite265.translation = new SFVec3f(new float[-0.3,0.75,0.45]);
let Viewpoint266 = browser.currentScene.createNode("Viewpoint");
Viewpoint266.DEF = "hanim_r_hand_front_viewpoint";
Viewpoint266.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
Viewpoint266.description = "right hand front";
Viewpoint266.position = new SFVec3f(new float[0,0,0]);
HAnimSite265.children = new MFNode();

HAnimSite265.children[0] = Viewpoint266;

HAnimSegment261.children[3] = HAnimSite265;

HAnimJoint260.children = new MFNode();

HAnimJoint260.children[0] = HAnimSegment261;

let HAnimJoint267 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint267.name = "r_carpometacarpal_1";
HAnimJoint267.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint267.center = new SFVec3f(new float[-0.1924,0.8472,-0.0534]);
let HAnimSegment268 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment268.name = "r_metacarpal_1";
HAnimSegment268.DEF = "hanim_r_metacarpal_1";
HAnimJoint267.children = new MFNode();

HAnimJoint267.children[0] = HAnimSegment268;

let HAnimJoint269 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint269.name = "r_metacarpophalangeal_1";
HAnimJoint269.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint269.center = new SFVec3f(new float[-0.1951,0.8226,0.0246]);
let HAnimSegment270 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment270.name = "r_carpal_proximal_phalanx_1";
HAnimSegment270.DEF = "hanim_r_carpal_proximal_phalanx_1";
HAnimJoint269.children = new MFNode();

HAnimJoint269.children[0] = HAnimSegment270;

let HAnimJoint271 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint271.name = "r_carpal_interphalangeal_1";
HAnimJoint271.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint271.center = new SFVec3f(new float[-0.1955,0.8159,0.0464]);
let HAnimSegment272 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment272.name = "r_carpal_distal_phalanx_1";
HAnimSegment272.DEF = "hanim_r_carpal_distal_phalanx_1";
let HAnimSite273 = browser.currentScene.createNode("HAnimSite");
HAnimSite273.name = "r_carpal_distal_phalanx_1_tip";
HAnimSite273.DEF = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimSite273.translation = new SFVec3f(new float[-0.1869,0.809,0.082]);
HAnimSegment272.children = new MFNode();

HAnimSegment272.children[0] = HAnimSite273;

HAnimJoint271.children = new MFNode();

HAnimJoint271.children[0] = HAnimSegment272;

HAnimJoint269.children[1] = HAnimJoint271;

HAnimJoint267.children[1] = HAnimJoint269;

HAnimJoint260.children[1] = HAnimJoint267;

let HAnimJoint274 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint274.name = "r_carpometacarpal_2";
HAnimJoint274.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint274.center = new SFVec3f(new float[-0.1983,0.8024,-0.028]);
let HAnimSegment275 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment275.name = "r_metacarpal_2";
HAnimSegment275.DEF = "hanim_r_metacarpal_2";
HAnimJoint274.children = new MFNode();

HAnimJoint274.children[0] = HAnimSegment275;

let HAnimJoint276 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint276.name = "r_metacarpophalangeal_2";
HAnimJoint276.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint276.center = new SFVec3f(new float[-0.1983,0.7815,-0.028]);
let HAnimSegment277 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment277.name = "r_carpal_proximal_phalanx_2";
HAnimSegment277.DEF = "hanim_r_carpal_proximal_phalanx_2";
HAnimJoint276.children = new MFNode();

HAnimJoint276.children[0] = HAnimSegment277;

let HAnimJoint278 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint278.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint278.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint278.center = new SFVec3f(new float[-0.2017,0.7363,-0.0248]);
let HAnimSegment279 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment279.name = "r_carpal_middle_phalanx_2";
HAnimSegment279.DEF = "hanim_r_carpal_middle_phalanx_2";
HAnimJoint278.children = new MFNode();

HAnimJoint278.children[0] = HAnimSegment279;

let HAnimJoint280 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint280.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint280.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint280.center = new SFVec3f(new float[-0.2028,0.7139,-0.0236]);
let HAnimSegment281 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment281.name = "r_carpal_distal_phalanx_2";
HAnimSegment281.DEF = "hanim_r_carpal_distal_phalanx_2";
let HAnimSite282 = browser.currentScene.createNode("HAnimSite");
HAnimSite282.name = "r_carpal_distal_phalanx_2_tip";
HAnimSite282.DEF = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimSite282.translation = new SFVec3f(new float[-0.198,0.6883,-0.018]);
HAnimSegment281.children = new MFNode();

HAnimSegment281.children[0] = HAnimSite282;

let HAnimSite283 = browser.currentScene.createNode("HAnimSite");
HAnimSite283.name = "r_dactylion_pt";
HAnimSite283.DEF = "hanim_r_dactylion_pt";
HAnimSite283.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
HAnimSegment281.children[1] = HAnimSite283;

HAnimJoint280.children = new MFNode();

HAnimJoint280.children[0] = HAnimSegment281;

HAnimJoint278.children[1] = HAnimJoint280;

HAnimJoint276.children[1] = HAnimJoint278;

HAnimJoint274.children[1] = HAnimJoint276;

HAnimJoint260.children[2] = HAnimJoint274;

let HAnimJoint284 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint284.name = "r_carpometacarpal_3";
HAnimJoint284.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint284.center = new SFVec3f(new float[-0.1987,0.8029,-0.053]);
let HAnimSegment285 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment285.name = "r_metacarpal_3";
HAnimSegment285.DEF = "hanim_r_metacarpal_3";
HAnimJoint284.children = new MFNode();

HAnimJoint284.children[0] = HAnimSegment285;

let HAnimJoint286 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint286.name = "r_metacarpophalangeal_3";
HAnimJoint286.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint286.center = new SFVec3f(new float[-0.1987,0.7818,-0.053]);
let HAnimSegment287 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment287.name = "r_carpal_proximal_phalanx_3";
HAnimSegment287.DEF = "hanim_r_carpal_proximal_phalanx_3";
HAnimJoint286.children = new MFNode();

HAnimJoint286.children[0] = HAnimSegment287;

let HAnimJoint288 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint288.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint288.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint288.center = new SFVec3f(new float[-0.2013,0.7273,-0.0503]);
let HAnimSegment289 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment289.name = "r_carpal_middle_phalanx_3";
HAnimSegment289.DEF = "hanim_r_carpal_middle_phalanx_3";
HAnimJoint288.children = new MFNode();

HAnimJoint288.children[0] = HAnimSegment289;

let HAnimJoint290 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint290.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint290.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint290.center = new SFVec3f(new float[-0.2026,0.7011,-0.0494]);
let HAnimSegment291 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment291.name = "r_carpal_distal_phalanx_3";
HAnimSegment291.DEF = "hanim_r_carpal_distal_phalanx_3";
let HAnimSite292 = browser.currentScene.createNode("HAnimSite");
HAnimSite292.name = "r_carpal_distal_phalanx_3_tip";
HAnimSite292.DEF = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimSite292.translation = new SFVec3f(new float[-0.1969,0.6758,-0.0427]);
HAnimSegment291.children = new MFNode();

HAnimSegment291.children[0] = HAnimSite292;

HAnimJoint290.children = new MFNode();

HAnimJoint290.children[0] = HAnimSegment291;

HAnimJoint288.children[1] = HAnimJoint290;

HAnimJoint286.children[1] = HAnimJoint288;

HAnimJoint284.children[1] = HAnimJoint286;

HAnimJoint260.children[3] = HAnimJoint284;

let HAnimJoint293 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint293.name = "r_carpometacarpal_4";
HAnimJoint293.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint293.center = new SFVec3f(new float[-0.1956,0.8019,-0.0794]);
let HAnimSegment294 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment294.name = "r_metacarpal_4";
HAnimSegment294.DEF = "hanim_r_metacarpal_4";
HAnimJoint293.children = new MFNode();

HAnimJoint293.children[0] = HAnimSegment294;

let HAnimJoint295 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint295.name = "r_metacarpophalangeal_4";
HAnimJoint295.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint295.center = new SFVec3f(new float[-0.1956,0.7815,-0.0794]);
let HAnimSegment296 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment296.name = "r_carpal_proximal_phalanx_4";
HAnimSegment296.DEF = "hanim_r_carpal_proximal_phalanx_4";
HAnimJoint295.children = new MFNode();

HAnimJoint295.children[0] = HAnimSegment296;

let HAnimJoint297 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint297.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint297.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint297.center = new SFVec3f(new float[-0.1973,0.7287,-0.0777]);
let HAnimSegment298 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment298.name = "r_carpal_middle_phalanx_4";
HAnimSegment298.DEF = "hanim_r_carpal_middle_phalanx_4";
HAnimJoint297.children = new MFNode();

HAnimJoint297.children[0] = HAnimSegment298;

let HAnimJoint299 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint299.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint299.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint299.center = new SFVec3f(new float[-0.1983,0.7045,-0.0767]);
let HAnimSegment300 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment300.name = "r_carpal_distal_phalanx_4";
HAnimSegment300.DEF = "hanim_r_carpal_distal_phalanx_4";
let HAnimSite301 = browser.currentScene.createNode("HAnimSite");
HAnimSite301.name = "r_carpal_distal_phalanx_4_tip";
HAnimSite301.DEF = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimSite301.translation = new SFVec3f(new float[-0.1934,0.6778,-0.0693]);
HAnimSegment300.children = new MFNode();

HAnimSegment300.children[0] = HAnimSite301;

HAnimJoint299.children = new MFNode();

HAnimJoint299.children[0] = HAnimSegment300;

HAnimJoint297.children[1] = HAnimJoint299;

HAnimJoint295.children[1] = HAnimJoint297;

HAnimJoint293.children[1] = HAnimJoint295;

HAnimJoint260.children[4] = HAnimJoint293;

let HAnimJoint302 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint302.name = "r_carpometacarpal_5";
HAnimJoint302.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint302.center = new SFVec3f(new float[-0.1925,0.8066,-0.1036]);
let HAnimSegment303 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment303.name = "r_metacarpal_5";
HAnimSegment303.DEF = "hanim_r_metacarpal_5";
HAnimJoint302.children = new MFNode();

HAnimJoint302.children[0] = HAnimSegment303;

let HAnimJoint304 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint304.name = "r_metacarpophalangeal_5";
HAnimJoint304.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint304.center = new SFVec3f(new float[-0.1925,0.7866,-0.1036]);
let HAnimSegment305 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment305.name = "r_carpal_proximal_phalanx_5";
HAnimSegment305.DEF = "hanim_r_carpal_proximal_phalanx_5";
HAnimJoint304.children = new MFNode();

HAnimJoint304.children[0] = HAnimSegment305;

let HAnimJoint306 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint306.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint306.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint306.center = new SFVec3f(new float[-0.1938,0.7452,-0.1024]);
let HAnimSegment307 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment307.name = "r_carpal_middle_phalanx_5";
HAnimSegment307.DEF = "hanim_r_carpal_middle_phalanx_5";
HAnimJoint306.children = new MFNode();

HAnimJoint306.children[0] = HAnimSegment307;

let HAnimJoint308 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint308.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint308.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint308.center = new SFVec3f(new float[-0.1948,0.7277,-0.1017]);
let HAnimSegment309 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment309.name = "r_carpal_distal_phalanx_5";
HAnimSegment309.DEF = "hanim_r_carpal_distal_phalanx_5";
let HAnimSite310 = browser.currentScene.createNode("HAnimSite");
HAnimSite310.name = "r_carpal_distal_phalanx_5_tip";
HAnimSite310.DEF = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimSite310.translation = new SFVec3f(new float[-0.1938,0.7035,-0.0949]);
HAnimSegment309.children = new MFNode();

HAnimSegment309.children[0] = HAnimSite310;

HAnimJoint308.children = new MFNode();

HAnimJoint308.children[0] = HAnimSegment309;

HAnimJoint306.children[1] = HAnimJoint308;

HAnimJoint304.children[1] = HAnimJoint306;

HAnimJoint302.children[1] = HAnimJoint304;

HAnimJoint260.children[5] = HAnimJoint302;

HAnimJoint254.children[1] = HAnimJoint260;

HAnimJoint251.children[1] = HAnimJoint254;

HAnimJoint249.children[1] = HAnimJoint251;

HAnimJoint243.children[1] = HAnimJoint249;

HAnimJoint123.children[3] = HAnimJoint243;

HAnimJoint121.children[1] = HAnimJoint123;

HAnimJoint119.children[1] = HAnimJoint121;

HAnimJoint117.children[1] = HAnimJoint119;

HAnimJoint115.children[1] = HAnimJoint117;

HAnimJoint113.children[1] = HAnimJoint115;

HAnimJoint111.children[1] = HAnimJoint113;

HAnimJoint109.children[1] = HAnimJoint111;

HAnimJoint105.children[1] = HAnimJoint109;

HAnimJoint102.children[1] = HAnimJoint105;

HAnimJoint100.children[1] = HAnimJoint102;

HAnimJoint98.children[1] = HAnimJoint100;

HAnimJoint96.children[1] = HAnimJoint98;

HAnimJoint91.children[1] = HAnimJoint96;

HAnimJoint89.children[1] = HAnimJoint91;

HAnimJoint87.children[1] = HAnimJoint89;

HAnimJoint83.children[1] = HAnimJoint87;

HAnimJoint24.children[2] = HAnimJoint83;

HAnimHumanoid15.joints = new MFNode();

HAnimHumanoid15.joints[0] = HAnimJoint24;

let HAnimSite311 = browser.currentScene.createNode("HAnimSite");
HAnimSite311.name = "l_inclined_view";
HAnimSite311.DEF = "hanim_l_inclined_view";
HAnimSite311.rotation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
HAnimSite311.translation = new SFVec3f(new float[1.62,1.05,2.06]);
let Viewpoint312 = browser.currentScene.createNode("Viewpoint");
Viewpoint312.DEF = "hanim_l_inclined_viewpoint";
Viewpoint312.description = "left inclined";
Viewpoint312.position = new SFVec3f(new float[0,0,0]);
HAnimSite311.children = new MFNode();

HAnimSite311.children[0] = Viewpoint312;

HAnimHumanoid15.viewpoints[1] = HAnimSite311;

let HAnimSite313 = browser.currentScene.createNode("HAnimSite");
HAnimSite313.name = "r_inclined_view";
HAnimSite313.DEF = "hanim_r_inclined_view";
HAnimSite313.rotation = new SFRotation(new float[-0.113,-0.993,0.0347,0.671]);
HAnimSite313.translation = new SFVec3f(new float[-1.62,1.05,2.06]);
let Viewpoint314 = browser.currentScene.createNode("Viewpoint");
Viewpoint314.DEF = "hanim_r_inclined_viewpoint";
Viewpoint314.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint314.description = "right inclined";
Viewpoint314.position = new SFVec3f(new float[0,0,0]);
HAnimSite313.children = new MFNode();

HAnimSite313.children[0] = Viewpoint314;

HAnimHumanoid15.viewpoints[2] = HAnimSite313;

let HAnimSite315 = browser.currentScene.createNode("HAnimSite");
HAnimSite315.name = "front_view";
HAnimSite315.DEF = "hanim_front_view";
HAnimSite315.translation = new SFVec3f(new float[0,0.85,2.58]);
let Viewpoint316 = browser.currentScene.createNode("Viewpoint");
Viewpoint316.DEF = "hanim_front_viewpoint";
Viewpoint316.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint316.description = "front";
Viewpoint316.position = new SFVec3f(new float[0,0,0]);
HAnimSite315.children = new MFNode();

HAnimSite315.children[0] = Viewpoint316;

HAnimHumanoid15.viewpoints[3] = HAnimSite315;

let HAnimSite317 = browser.currentScene.createNode("HAnimSite");
HAnimSite317.name = "back_view";
HAnimSite317.DEF = "hanim_back_view";
HAnimSite317.rotation = new SFRotation(new float[0,1,0,3.14]);
HAnimSite317.translation = new SFVec3f(new float[0,0.85,-2.58]);
let Viewpoint318 = browser.currentScene.createNode("Viewpoint");
Viewpoint318.DEF = "hanim_back_viewpoint";
Viewpoint318.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint318.description = "back";
Viewpoint318.position = new SFVec3f(new float[0,0,0]);
HAnimSite317.children = new MFNode();

HAnimSite317.children[0] = Viewpoint318;

HAnimHumanoid15.viewpoints[4] = HAnimSite317;

let HAnimSite319 = browser.currentScene.createNode("HAnimSite");
HAnimSite319.name = "l_side_view";
HAnimSite319.DEF = "hanim_l_side_view";
HAnimSite319.rotation = new SFRotation(new float[0,1,0,1.5708]);
HAnimSite319.translation = new SFVec3f(new float[2.6,0.854,0]);
let Viewpoint320 = browser.currentScene.createNode("Viewpoint");
Viewpoint320.DEF = "hanim_l_side_viewpoint";
Viewpoint320.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint320.description = "left side";
Viewpoint320.position = new SFVec3f(new float[0,0,0]);
HAnimSite319.children = new MFNode();

HAnimSite319.children[0] = Viewpoint320;

HAnimHumanoid15.viewpoints[5] = HAnimSite319;

let HAnimSite321 = browser.currentScene.createNode("HAnimSite");
HAnimSite321.name = "Top_view";
HAnimSite321.DEF = "hanim_Top_view";
HAnimSite321.rotation = new SFRotation(new float[1,0,0,-1.57]);
HAnimSite321.translation = new SFVec3f(new float[0,3.5,0]);
let Viewpoint322 = browser.currentScene.createNode("Viewpoint");
Viewpoint322.DEF = "hanim_Top_viewpoint";
Viewpoint322.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint322.description = "Top";
Viewpoint322.position = new SFVec3f(new float[0,0,0]);
HAnimSite321.children = new MFNode();

HAnimSite321.children[0] = Viewpoint322;

HAnimHumanoid15.viewpoints[6] = HAnimSite321;

let HAnimSite323 = browser.currentScene.createNode("HAnimSite");
HAnimSite323.name = "front_close_view";
HAnimSite323.DEF = "hanim_front_close_view";
HAnimSite323.translation = new SFVec3f(new float[0,0.854,1.575]);
let Viewpoint324 = browser.currentScene.createNode("Viewpoint");
Viewpoint324.DEF = "hanim_front_close_viewpoint";
Viewpoint324.centerOfRotation = new SFVec3f(new float[0,0,1.575]);
Viewpoint324.description = "front close";
Viewpoint324.position = new SFVec3f(new float[0,0,0]);
HAnimSite323.children = new MFNode();

HAnimSite323.children[0] = Viewpoint324;

HAnimHumanoid15.viewpoints[7] = HAnimSite323;

let HAnimSite325 = browser.currentScene.createNode("HAnimSite");
HAnimSite325.name = "side_close_view";
HAnimSite325.DEF = "hanim_side_close_view";
HAnimSite325.rotation = new SFRotation(new float[0,1,0,1.5708]);
HAnimSite325.translation = new SFVec3f(new float[1.56,0.854,0]);
let Viewpoint326 = browser.currentScene.createNode("Viewpoint");
Viewpoint326.DEF = "hanim_side_close_viewpoint";
Viewpoint326.centerOfRotation = new SFVec3f(new float[1.6,0,0]);
Viewpoint326.description = "side close";
Viewpoint326.position = new SFVec3f(new float[0,0,0]);
HAnimSite325.children = new MFNode();

HAnimSite325.children[0] = Viewpoint326;

HAnimHumanoid15.viewpoints[8] = HAnimSite325;

let HAnimSite327 = browser.currentScene.createNode("HAnimSite");
HAnimSite327.name = "head_front_close_view";
HAnimSite327.DEF = "hanim_head_front_close_view";
HAnimSite327.translation = new SFVec3f(new float[0,1.5,1]);
let Viewpoint328 = browser.currentScene.createNode("Viewpoint");
Viewpoint328.DEF = "hanim_head_front_close_viewpoint";
Viewpoint328.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint328.description = "head front close";
Viewpoint328.position = new SFVec3f(new float[0,0,0]);
HAnimSite327.children = new MFNode();

HAnimSite327.children[0] = Viewpoint328;

HAnimHumanoid15.viewpoints[9] = HAnimSite327;

let HAnimSite329 = browser.currentScene.createNode("HAnimSite");
HAnimSite329.name = "chest_front_close_view";
HAnimSite329.DEF = "hanim_chest_front_close_view";
HAnimSite329.translation = new SFVec3f(new float[0,1.2,1]);
let Viewpoint330 = browser.currentScene.createNode("Viewpoint");
Viewpoint330.DEF = "hanim_chest_front_close_viewpoint";
Viewpoint330.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint330.description = "chest front close";
Viewpoint330.position = new SFVec3f(new float[0,0,0]);
HAnimSite329.children = new MFNode();

HAnimSite329.children[0] = Viewpoint330;

HAnimHumanoid15.viewpoints[10] = HAnimSite329;

let HAnimSite331 = browser.currentScene.createNode("HAnimSite");
HAnimSite331.name = "pelvis_front_close_view";
HAnimSite331.DEF = "hanim_pelvis_front_close_view";
HAnimSite331.translation = new SFVec3f(new float[0,0.8,1]);
let Viewpoint332 = browser.currentScene.createNode("Viewpoint");
Viewpoint332.DEF = "hanim_pelvis_front_close_viewpoint";
Viewpoint332.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint332.description = "pelvis front close";
Viewpoint332.position = new SFVec3f(new float[0,0,0]);
HAnimSite331.children = new MFNode();

HAnimSite331.children[0] = Viewpoint332;

HAnimHumanoid15.viewpoints[11] = HAnimSite331;

let HAnimSite333 = browser.currentScene.createNode("HAnimSite");
HAnimSite333.name = "knees_front_close_view";
HAnimSite333.DEF = "hanim_knees_front_close_view";
HAnimSite333.translation = new SFVec3f(new float[0,0.4,1]);
let Viewpoint334 = browser.currentScene.createNode("Viewpoint");
Viewpoint334.DEF = "hanim_knees_front_close_viewpoint";
Viewpoint334.centerOfRotation = new SFVec3f(new float[0,0.4,0]);
Viewpoint334.description = "knees front close";
Viewpoint334.position = new SFVec3f(new float[0,0,0]);
HAnimSite333.children = new MFNode();

HAnimSite333.children[0] = Viewpoint334;

HAnimHumanoid15.viewpoints[12] = HAnimSite333;

let HAnimSite335 = browser.currentScene.createNode("HAnimSite");
HAnimSite335.name = "feet_front_close_view";
HAnimSite335.DEF = "hanim_feet_front_close_view";
HAnimSite335.translation = new SFVec3f(new float[0,0,1]);
let Viewpoint336 = browser.currentScene.createNode("Viewpoint");
Viewpoint336.DEF = "hanim_feet_front_close_viewpoint";
Viewpoint336.description = "feet front close";
Viewpoint336.position = new SFVec3f(new float[0,0,0]);
HAnimSite335.children = new MFNode();

HAnimSite335.children[0] = Viewpoint336;

HAnimHumanoid15.viewpoints[13] = HAnimSite335;

let HAnimSite337 = browser.currentScene.createNode("HAnimSite");
HAnimSite337.name = "eye_level_view";
HAnimSite337.DEF = "hanim_eye_level_view";
HAnimSite337.translation = new SFVec3f(new float[0,1.6332,0.0502]);
let Viewpoint338 = browser.currentScene.createNode("Viewpoint");
Viewpoint338.DEF = "hanim_eye_level_viewpoint";
Viewpoint338.description = "eye level looking forward";
Viewpoint338.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint338.position = new SFVec3f(new float[0,0,0]);
HAnimSite337.children = new MFNode();

HAnimSite337.children[0] = Viewpoint338;

HAnimHumanoid15.viewpoints[14] = HAnimSite337;

let HAnimSite339 = browser.currentScene.createNode("HAnimSite");
HAnimSite339.USE = "hanim_l_eyeball_site_view";
HAnimHumanoid15.viewpoints[15] = HAnimSite339;

let HAnimSite340 = browser.currentScene.createNode("HAnimSite");
HAnimSite340.USE = "hanim_r_eyeball_site_view";
HAnimHumanoid15.viewpoints[16] = HAnimSite340;

let HAnimSite341 = browser.currentScene.createNode("HAnimSite");
HAnimSite341.USE = "hanim_l_hand_front_view";
HAnimHumanoid15.viewpoints[17] = HAnimSite341;

let HAnimSite342 = browser.currentScene.createNode("HAnimSite");
HAnimSite342.USE = "hanim_r_hand_front_view";
HAnimHumanoid15.viewpoints[18] = HAnimSite342;

let HAnimJoint343 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint343.USE = "hanim_humanoid_root";
HAnimHumanoid15.joints[19] = HAnimJoint343;

let HAnimJoint344 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint344.USE = "hanim_sacroiliac";
HAnimHumanoid15.joints[20] = HAnimJoint344;

let HAnimJoint345 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint345.USE = "hanim_vl5";
HAnimHumanoid15.joints[21] = HAnimJoint345;

let HAnimJoint346 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint346.USE = "hanim_vl4";
HAnimHumanoid15.joints[22] = HAnimJoint346;

let HAnimJoint347 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint347.USE = "hanim_vl3";
HAnimHumanoid15.joints[23] = HAnimJoint347;

let HAnimJoint348 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint348.USE = "hanim_vl2";
HAnimHumanoid15.joints[24] = HAnimJoint348;

let HAnimJoint349 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint349.USE = "hanim_vl1";
HAnimHumanoid15.joints[25] = HAnimJoint349;

let HAnimJoint350 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint350.USE = "hanim_vt12";
HAnimHumanoid15.joints[26] = HAnimJoint350;

let HAnimJoint351 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint351.USE = "hanim_vt11";
HAnimHumanoid15.joints[27] = HAnimJoint351;

let HAnimJoint352 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint352.USE = "hanim_vt10";
HAnimHumanoid15.joints[28] = HAnimJoint352;

let HAnimJoint353 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint353.USE = "hanim_vt9";
HAnimHumanoid15.joints[29] = HAnimJoint353;

let HAnimJoint354 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint354.USE = "hanim_vt8";
HAnimHumanoid15.joints[30] = HAnimJoint354;

let HAnimJoint355 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint355.USE = "hanim_vt7";
HAnimHumanoid15.joints[31] = HAnimJoint355;

let HAnimJoint356 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint356.USE = "hanim_vt6";
HAnimHumanoid15.joints[32] = HAnimJoint356;

let HAnimJoint357 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint357.USE = "hanim_vt5";
HAnimHumanoid15.joints[33] = HAnimJoint357;

let HAnimJoint358 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint358.USE = "hanim_vt4";
HAnimHumanoid15.joints[34] = HAnimJoint358;

let HAnimJoint359 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint359.USE = "hanim_vt3";
HAnimHumanoid15.joints[35] = HAnimJoint359;

let HAnimJoint360 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint360.USE = "hanim_vt2";
HAnimHumanoid15.joints[36] = HAnimJoint360;

let HAnimJoint361 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint361.USE = "hanim_vt1";
HAnimHumanoid15.joints[37] = HAnimJoint361;

let HAnimJoint362 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint362.USE = "hanim_vc7";
HAnimHumanoid15.joints[38] = HAnimJoint362;

let HAnimJoint363 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint363.USE = "hanim_vc6";
HAnimHumanoid15.joints[39] = HAnimJoint363;

let HAnimJoint364 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint364.USE = "hanim_vc5";
HAnimHumanoid15.joints[40] = HAnimJoint364;

let HAnimJoint365 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint365.USE = "hanim_vc4";
HAnimHumanoid15.joints[41] = HAnimJoint365;

let HAnimJoint366 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint366.USE = "hanim_vc3";
HAnimHumanoid15.joints[42] = HAnimJoint366;

let HAnimJoint367 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint367.USE = "hanim_vc2";
HAnimHumanoid15.joints[43] = HAnimJoint367;

let HAnimJoint368 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint368.USE = "hanim_vc1";
HAnimHumanoid15.joints[44] = HAnimJoint368;

let HAnimJoint369 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint369.USE = "hanim_skullbase";
HAnimHumanoid15.joints[45] = HAnimJoint369;

let HAnimJoint370 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint370.USE = "hanim_temporomandibular";
HAnimHumanoid15.joints[46] = HAnimJoint370;

let HAnimJoint371 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint371.USE = "hanim_l_acromioclavicular";
HAnimHumanoid15.joints[47] = HAnimJoint371;

let HAnimJoint372 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint372.USE = "hanim_r_acromioclavicular";
HAnimHumanoid15.joints[48] = HAnimJoint372;

let HAnimJoint373 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint373.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid15.joints[49] = HAnimJoint373;

let HAnimJoint374 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint374.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid15.joints[50] = HAnimJoint374;

let HAnimJoint375 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint375.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid15.joints[51] = HAnimJoint375;

let HAnimJoint376 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint376.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid15.joints[52] = HAnimJoint376;

let HAnimJoint377 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint377.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid15.joints[53] = HAnimJoint377;

let HAnimJoint378 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint378.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid15.joints[54] = HAnimJoint378;

let HAnimJoint379 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint379.USE = "hanim_l_carpal_distal_interphalangeal_5";
HAnimHumanoid15.joints[55] = HAnimJoint379;

let HAnimJoint380 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint380.USE = "hanim_r_carpal_distal_interphalangeal_5";
HAnimHumanoid15.joints[56] = HAnimJoint380;

let HAnimJoint381 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint381.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid15.joints[57] = HAnimJoint381;

let HAnimJoint382 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint382.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid15.joints[58] = HAnimJoint382;

let HAnimJoint383 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint383.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid15.joints[59] = HAnimJoint383;

let HAnimJoint384 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint384.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid15.joints[60] = HAnimJoint384;

let HAnimJoint385 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint385.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid15.joints[61] = HAnimJoint385;

let HAnimJoint386 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint386.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid15.joints[62] = HAnimJoint386;

let HAnimJoint387 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint387.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid15.joints[63] = HAnimJoint387;

let HAnimJoint388 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint388.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid15.joints[64] = HAnimJoint388;

let HAnimJoint389 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint389.USE = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimHumanoid15.joints[65] = HAnimJoint389;

let HAnimJoint390 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint390.USE = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimHumanoid15.joints[66] = HAnimJoint390;

let HAnimJoint391 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint391.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid15.joints[67] = HAnimJoint391;

let HAnimJoint392 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint392.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid15.joints[68] = HAnimJoint392;

let HAnimJoint393 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint393.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid15.joints[69] = HAnimJoint393;

let HAnimJoint394 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint394.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid15.joints[70] = HAnimJoint394;

let HAnimJoint395 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint395.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid15.joints[71] = HAnimJoint395;

let HAnimJoint396 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint396.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid15.joints[72] = HAnimJoint396;

let HAnimJoint397 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint397.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid15.joints[73] = HAnimJoint397;

let HAnimJoint398 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint398.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid15.joints[74] = HAnimJoint398;

let HAnimJoint399 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint399.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid15.joints[75] = HAnimJoint399;

let HAnimJoint400 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint400.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid15.joints[76] = HAnimJoint400;

let HAnimJoint401 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint401.USE = "hanim_l_elbow";
HAnimHumanoid15.joints[77] = HAnimJoint401;

let HAnimJoint402 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint402.USE = "hanim_r_elbow";
HAnimHumanoid15.joints[78] = HAnimJoint402;

let HAnimJoint403 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint403.USE = "hanim_l_eyeball_joint";
HAnimHumanoid15.joints[79] = HAnimJoint403;

let HAnimJoint404 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint404.USE = "hanim_r_eyeball_joint";
HAnimHumanoid15.joints[80] = HAnimJoint404;

let HAnimJoint405 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint405.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid15.joints[81] = HAnimJoint405;

let HAnimJoint406 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint406.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid15.joints[82] = HAnimJoint406;

let HAnimJoint407 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint407.USE = "hanim_l_eyelid_joint";
HAnimHumanoid15.joints[83] = HAnimJoint407;

let HAnimJoint408 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint408.USE = "hanim_r_eyelid_joint";
HAnimHumanoid15.joints[84] = HAnimJoint408;

let HAnimJoint409 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint409.USE = "hanim_l_hip";
HAnimHumanoid15.joints[85] = HAnimJoint409;

let HAnimJoint410 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint410.USE = "hanim_r_hip";
HAnimHumanoid15.joints[86] = HAnimJoint410;

let HAnimJoint411 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint411.USE = "hanim_l_knee";
HAnimHumanoid15.joints[87] = HAnimJoint411;

let HAnimJoint412 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint412.USE = "hanim_r_knee";
HAnimHumanoid15.joints[88] = HAnimJoint412;

let HAnimJoint413 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint413.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid15.joints[89] = HAnimJoint413;

let HAnimJoint414 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint414.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid15.joints[90] = HAnimJoint414;

let HAnimJoint415 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint415.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid15.joints[91] = HAnimJoint415;

let HAnimJoint416 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint416.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid15.joints[92] = HAnimJoint416;

let HAnimJoint417 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint417.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid15.joints[93] = HAnimJoint417;

let HAnimJoint418 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint418.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid15.joints[94] = HAnimJoint418;

let HAnimJoint419 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint419.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid15.joints[95] = HAnimJoint419;

let HAnimJoint420 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint420.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid15.joints[96] = HAnimJoint420;

let HAnimJoint421 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint421.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid15.joints[97] = HAnimJoint421;

let HAnimJoint422 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint422.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid15.joints[98] = HAnimJoint422;

let HAnimJoint423 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint423.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid15.joints[99] = HAnimJoint423;

let HAnimJoint424 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint424.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid15.joints[100] = HAnimJoint424;

let HAnimJoint425 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint425.USE = "hanim_l_radiocarpal";
HAnimHumanoid15.joints[101] = HAnimJoint425;

let HAnimJoint426 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint426.USE = "hanim_r_radiocarpal";
HAnimHumanoid15.joints[102] = HAnimJoint426;

let HAnimJoint427 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint427.USE = "hanim_l_shoulder";
HAnimHumanoid15.joints[103] = HAnimJoint427;

let HAnimJoint428 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint428.USE = "hanim_r_shoulder";
HAnimHumanoid15.joints[104] = HAnimJoint428;

let HAnimJoint429 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint429.USE = "hanim_l_sternoclavicular";
HAnimHumanoid15.joints[105] = HAnimJoint429;

let HAnimJoint430 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint430.USE = "hanim_r_sternoclavicular";
HAnimHumanoid15.joints[106] = HAnimJoint430;

let HAnimJoint431 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint431.USE = "hanim_l_talocrural";
HAnimHumanoid15.joints[107] = HAnimJoint431;

let HAnimJoint432 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint432.USE = "hanim_r_talocrural";
HAnimHumanoid15.joints[108] = HAnimJoint432;

let HAnimJoint433 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint433.USE = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid15.joints[109] = HAnimJoint433;

let HAnimJoint434 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint434.USE = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid15.joints[110] = HAnimJoint434;

let HAnimJoint435 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint435.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid15.joints[111] = HAnimJoint435;

let HAnimJoint436 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint436.USE = "hanim_r_tarsometatarsal_2";
HAnimHumanoid15.joints[112] = HAnimJoint436;

let HAnimSegment437 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment437.USE = "hanim_pelvis";
HAnimHumanoid15.segments[113] = HAnimSegment437;

let HAnimSegment438 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment438.USE = "hanim_skull";
HAnimHumanoid15.segments[114] = HAnimSegment438;

let HAnimSegment439 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment439.USE = "hanim_jaw";
HAnimHumanoid15.segments[115] = HAnimSegment439;

let HAnimSegment440 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment440.USE = "hanim_c1";
HAnimHumanoid15.segments[116] = HAnimSegment440;

let HAnimSegment441 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment441.USE = "hanim_c2";
HAnimHumanoid15.segments[117] = HAnimSegment441;

let HAnimSegment442 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment442.USE = "hanim_c3";
HAnimHumanoid15.segments[118] = HAnimSegment442;

let HAnimSegment443 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment443.USE = "hanim_c4";
HAnimHumanoid15.segments[119] = HAnimSegment443;

let HAnimSegment444 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment444.USE = "hanim_c5";
HAnimHumanoid15.segments[120] = HAnimSegment444;

let HAnimSegment445 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment445.USE = "hanim_c6";
HAnimHumanoid15.segments[121] = HAnimSegment445;

let HAnimSegment446 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment446.USE = "hanim_c7";
HAnimHumanoid15.segments[122] = HAnimSegment446;

let HAnimSegment447 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment447.USE = "hanim_t1";
HAnimHumanoid15.segments[123] = HAnimSegment447;

let HAnimSegment448 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment448.USE = "hanim_t2";
HAnimHumanoid15.segments[124] = HAnimSegment448;

let HAnimSegment449 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment449.USE = "hanim_t3";
HAnimHumanoid15.segments[125] = HAnimSegment449;

let HAnimSegment450 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment450.USE = "hanim_t4";
HAnimHumanoid15.segments[126] = HAnimSegment450;

let HAnimSegment451 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment451.USE = "hanim_t5";
HAnimHumanoid15.segments[127] = HAnimSegment451;

let HAnimSegment452 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment452.USE = "hanim_t6";
HAnimHumanoid15.segments[128] = HAnimSegment452;

let HAnimSegment453 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment453.USE = "hanim_t7";
HAnimHumanoid15.segments[129] = HAnimSegment453;

let HAnimSegment454 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment454.USE = "hanim_t8";
HAnimHumanoid15.segments[130] = HAnimSegment454;

let HAnimSegment455 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment455.USE = "hanim_t9";
HAnimHumanoid15.segments[131] = HAnimSegment455;

let HAnimSegment456 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment456.USE = "hanim_t10";
HAnimHumanoid15.segments[132] = HAnimSegment456;

let HAnimSegment457 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment457.USE = "hanim_t11";
HAnimHumanoid15.segments[133] = HAnimSegment457;

let HAnimSegment458 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment458.USE = "hanim_t12";
HAnimHumanoid15.segments[134] = HAnimSegment458;

let HAnimSegment459 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment459.USE = "hanim_l1";
HAnimHumanoid15.segments[135] = HAnimSegment459;

let HAnimSegment460 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment460.USE = "hanim_l2";
HAnimHumanoid15.segments[136] = HAnimSegment460;

let HAnimSegment461 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment461.USE = "hanim_l3";
HAnimHumanoid15.segments[137] = HAnimSegment461;

let HAnimSegment462 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment462.USE = "hanim_l4";
HAnimHumanoid15.segments[138] = HAnimSegment462;

let HAnimSegment463 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment463.USE = "hanim_l5";
HAnimHumanoid15.segments[139] = HAnimSegment463;

let HAnimSegment464 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment464.USE = "hanim_sacrum";
HAnimHumanoid15.segments[140] = HAnimSegment464;

let HAnimSegment465 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment465.USE = "hanim_l_calf";
HAnimHumanoid15.segments[141] = HAnimSegment465;

let HAnimSegment466 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment466.USE = "hanim_r_calf";
HAnimHumanoid15.segments[142] = HAnimSegment466;

let HAnimSegment467 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment467.USE = "hanim_l_carpal";
HAnimHumanoid15.segments[143] = HAnimSegment467;

let HAnimSegment468 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment468.USE = "hanim_r_carpal";
HAnimHumanoid15.segments[144] = HAnimSegment468;

let HAnimSegment469 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment469.USE = "hanim_l_carpal_distal_phalanx_1";
HAnimHumanoid15.segments[145] = HAnimSegment469;

let HAnimSegment470 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment470.USE = "hanim_r_carpal_distal_phalanx_1";
HAnimHumanoid15.segments[146] = HAnimSegment470;

let HAnimSegment471 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment471.USE = "hanim_l_carpal_distal_phalanx_2";
HAnimHumanoid15.segments[147] = HAnimSegment471;

let HAnimSegment472 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment472.USE = "hanim_r_carpal_distal_phalanx_2";
HAnimHumanoid15.segments[148] = HAnimSegment472;

let HAnimSegment473 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment473.USE = "hanim_l_carpal_distal_phalanx_3";
HAnimHumanoid15.segments[149] = HAnimSegment473;

let HAnimSegment474 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment474.USE = "hanim_r_carpal_distal_phalanx_3";
HAnimHumanoid15.segments[150] = HAnimSegment474;

let HAnimSegment475 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment475.USE = "hanim_l_carpal_distal_phalanx_4";
HAnimHumanoid15.segments[151] = HAnimSegment475;

let HAnimSegment476 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment476.USE = "hanim_r_carpal_distal_phalanx_4";
HAnimHumanoid15.segments[152] = HAnimSegment476;

let HAnimSegment477 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment477.USE = "hanim_l_carpal_distal_phalanx_5";
HAnimHumanoid15.segments[153] = HAnimSegment477;

let HAnimSegment478 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment478.USE = "hanim_r_carpal_distal_phalanx_5";
HAnimHumanoid15.segments[154] = HAnimSegment478;

let HAnimSegment479 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment479.USE = "hanim_l_carpal_middle_phalanx_2";
HAnimHumanoid15.segments[155] = HAnimSegment479;

let HAnimSegment480 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment480.USE = "hanim_r_carpal_middle_phalanx_2";
HAnimHumanoid15.segments[156] = HAnimSegment480;

let HAnimSegment481 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment481.USE = "hanim_l_carpal_middle_phalanx_3";
HAnimHumanoid15.segments[157] = HAnimSegment481;

let HAnimSegment482 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment482.USE = "hanim_r_carpal_middle_phalanx_3";
HAnimHumanoid15.segments[158] = HAnimSegment482;

let HAnimSegment483 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment483.USE = "hanim_l_carpal_middle_phalanx_4";
HAnimHumanoid15.segments[159] = HAnimSegment483;

let HAnimSegment484 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment484.USE = "hanim_r_carpal_middle_phalanx_4";
HAnimHumanoid15.segments[160] = HAnimSegment484;

let HAnimSegment485 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment485.USE = "hanim_l_carpal_middle_phalanx_5";
HAnimHumanoid15.segments[161] = HAnimSegment485;

let HAnimSegment486 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment486.USE = "hanim_r_carpal_middle_phalanx_5";
HAnimHumanoid15.segments[162] = HAnimSegment486;

let HAnimSegment487 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment487.USE = "hanim_l_carpal_proximal_phalanx_1";
HAnimHumanoid15.segments[163] = HAnimSegment487;

let HAnimSegment488 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment488.USE = "hanim_r_carpal_proximal_phalanx_1";
HAnimHumanoid15.segments[164] = HAnimSegment488;

let HAnimSegment489 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment489.USE = "hanim_l_carpal_proximal_phalanx_2";
HAnimHumanoid15.segments[165] = HAnimSegment489;

let HAnimSegment490 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment490.USE = "hanim_r_carpal_proximal_phalanx_2";
HAnimHumanoid15.segments[166] = HAnimSegment490;

let HAnimSegment491 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment491.USE = "hanim_l_carpal_proximal_phalanx_3";
HAnimHumanoid15.segments[167] = HAnimSegment491;

let HAnimSegment492 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment492.USE = "hanim_r_carpal_proximal_phalanx_3";
HAnimHumanoid15.segments[168] = HAnimSegment492;

let HAnimSegment493 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment493.USE = "hanim_l_carpal_proximal_phalanx_4";
HAnimHumanoid15.segments[169] = HAnimSegment493;

let HAnimSegment494 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment494.USE = "hanim_r_carpal_proximal_phalanx_4";
HAnimHumanoid15.segments[170] = HAnimSegment494;

let HAnimSegment495 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment495.USE = "hanim_l_carpal_proximal_phalanx_5";
HAnimHumanoid15.segments[171] = HAnimSegment495;

let HAnimSegment496 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment496.USE = "hanim_r_carpal_proximal_phalanx_5";
HAnimHumanoid15.segments[172] = HAnimSegment496;

let HAnimSegment497 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment497.USE = "hanim_l_clavicle";
HAnimHumanoid15.segments[173] = HAnimSegment497;

let HAnimSegment498 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment498.USE = "hanim_r_clavicle";
HAnimHumanoid15.segments[174] = HAnimSegment498;

let HAnimSegment499 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment499.USE = "hanim_l_eyeball";
HAnimHumanoid15.segments[175] = HAnimSegment499;

let HAnimSegment500 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment500.USE = "hanim_r_eyeball";
HAnimHumanoid15.segments[176] = HAnimSegment500;

let HAnimSegment501 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment501.USE = "hanim_l_eyebrow";
HAnimHumanoid15.segments[177] = HAnimSegment501;

let HAnimSegment502 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment502.USE = "hanim_r_eyebrow";
HAnimHumanoid15.segments[178] = HAnimSegment502;

let HAnimSegment503 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment503.USE = "hanim_l_eyelid";
HAnimHumanoid15.segments[179] = HAnimSegment503;

let HAnimSegment504 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment504.USE = "hanim_r_eyelid";
HAnimHumanoid15.segments[180] = HAnimSegment504;

let HAnimSegment505 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment505.USE = "hanim_l_forearm";
HAnimHumanoid15.segments[181] = HAnimSegment505;

let HAnimSegment506 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment506.USE = "hanim_r_forearm";
HAnimHumanoid15.segments[182] = HAnimSegment506;

let HAnimSegment507 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment507.USE = "hanim_l_metacarpal_1";
HAnimHumanoid15.segments[183] = HAnimSegment507;

let HAnimSegment508 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment508.USE = "hanim_r_metacarpal_1";
HAnimHumanoid15.segments[184] = HAnimSegment508;

let HAnimSegment509 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment509.USE = "hanim_l_metacarpal_2";
HAnimHumanoid15.segments[185] = HAnimSegment509;

let HAnimSegment510 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment510.USE = "hanim_r_metacarpal_2";
HAnimHumanoid15.segments[186] = HAnimSegment510;

let HAnimSegment511 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment511.USE = "hanim_l_metacarpal_3";
HAnimHumanoid15.segments[187] = HAnimSegment511;

let HAnimSegment512 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment512.USE = "hanim_r_metacarpal_3";
HAnimHumanoid15.segments[188] = HAnimSegment512;

let HAnimSegment513 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment513.USE = "hanim_l_metacarpal_4";
HAnimHumanoid15.segments[189] = HAnimSegment513;

let HAnimSegment514 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment514.USE = "hanim_r_metacarpal_4";
HAnimHumanoid15.segments[190] = HAnimSegment514;

let HAnimSegment515 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment515.USE = "hanim_l_metacarpal_5";
HAnimHumanoid15.segments[191] = HAnimSegment515;

let HAnimSegment516 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment516.USE = "hanim_r_metacarpal_5";
HAnimHumanoid15.segments[192] = HAnimSegment516;

let HAnimSegment517 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment517.USE = "hanim_l_metatarsal_2";
HAnimHumanoid15.segments[193] = HAnimSegment517;

let HAnimSegment518 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment518.USE = "hanim_r_metatarsal_2";
HAnimHumanoid15.segments[194] = HAnimSegment518;

let HAnimSegment519 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment519.USE = "hanim_l_scapula";
HAnimHumanoid15.segments[195] = HAnimSegment519;

let HAnimSegment520 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment520.USE = "hanim_r_scapula";
HAnimHumanoid15.segments[196] = HAnimSegment520;

let HAnimSegment521 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment521.USE = "hanim_l_talus";
HAnimHumanoid15.segments[197] = HAnimSegment521;

let HAnimSegment522 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment522.USE = "hanim_r_talus";
HAnimHumanoid15.segments[198] = HAnimSegment522;

let HAnimSegment523 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment523.USE = "hanim_l_tarsal_distal_phalanx_2";
HAnimHumanoid15.segments[199] = HAnimSegment523;

let HAnimSegment524 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment524.USE = "hanim_r_tarsal_distal_phalanx_2";
HAnimHumanoid15.segments[200] = HAnimSegment524;

let HAnimSegment525 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment525.USE = "hanim_l_tarsal_proximal_phalanx_2";
HAnimHumanoid15.segments[201] = HAnimSegment525;

let HAnimSegment526 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment526.USE = "hanim_r_tarsal_proximal_phalanx_2";
HAnimHumanoid15.segments[202] = HAnimSegment526;

let HAnimSegment527 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment527.USE = "hanim_l_thigh";
HAnimHumanoid15.segments[203] = HAnimSegment527;

let HAnimSegment528 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment528.USE = "hanim_r_thigh";
HAnimHumanoid15.segments[204] = HAnimSegment528;

let HAnimSegment529 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment529.USE = "hanim_l_upperarm";
HAnimHumanoid15.segments[205] = HAnimSegment529;

let HAnimSegment530 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment530.USE = "hanim_r_upperarm";
HAnimHumanoid15.segments[206] = HAnimSegment530;

let HAnimSite531 = browser.currentScene.createNode("HAnimSite");
HAnimSite531.USE = "hanim_crotch_pt";
HAnimHumanoid15.viewpoints[207] = HAnimSite531;

let HAnimSite532 = browser.currentScene.createNode("HAnimSite");
HAnimSite532.USE = "hanim_skull_vertex_tip";
HAnimHumanoid15.viewpoints[208] = HAnimSite532;

let HAnimSite533 = browser.currentScene.createNode("HAnimSite");
HAnimSite533.USE = "hanim_sellion_pt";
HAnimHumanoid15.viewpoints[209] = HAnimSite533;

let HAnimSite534 = browser.currentScene.createNode("HAnimSite");
HAnimSite534.USE = "hanim_supramenton_pt";
HAnimHumanoid15.viewpoints[210] = HAnimSite534;

let HAnimSite535 = browser.currentScene.createNode("HAnimSite");
HAnimSite535.USE = "hanim_nuchale_pt";
HAnimHumanoid15.viewpoints[211] = HAnimSite535;

let HAnimSite536 = browser.currentScene.createNode("HAnimSite");
HAnimSite536.USE = "hanim_suprasternale_pt";
HAnimHumanoid15.viewpoints[212] = HAnimSite536;

let HAnimSite537 = browser.currentScene.createNode("HAnimSite");
HAnimSite537.USE = "hanim_cervicale_pt";
HAnimHumanoid15.viewpoints[213] = HAnimSite537;

let HAnimSite538 = browser.currentScene.createNode("HAnimSite");
HAnimSite538.USE = "hanim_substernale_pt";
HAnimHumanoid15.viewpoints[214] = HAnimSite538;

let HAnimSite539 = browser.currentScene.createNode("HAnimSite");
HAnimSite539.USE = "hanim_rib10_midspine_pt";
HAnimHumanoid15.viewpoints[215] = HAnimSite539;

let HAnimSite540 = browser.currentScene.createNode("HAnimSite");
HAnimSite540.USE = "hanim_waist_preferred_posterior_pt";
HAnimHumanoid15.viewpoints[216] = HAnimSite540;

let HAnimSite541 = browser.currentScene.createNode("HAnimSite");
HAnimSite541.USE = "hanim_navel_pt";
HAnimHumanoid15.viewpoints[217] = HAnimSite541;

let HAnimSite542 = browser.currentScene.createNode("HAnimSite");
HAnimSite542.USE = "hanim_l_acromion_pt";
HAnimHumanoid15.viewpoints[218] = HAnimSite542;

let HAnimSite543 = browser.currentScene.createNode("HAnimSite");
HAnimSite543.USE = "hanim_r_acromion_pt";
HAnimHumanoid15.viewpoints[219] = HAnimSite543;

let HAnimSite544 = browser.currentScene.createNode("HAnimSite");
HAnimSite544.USE = "hanim_r_asis_pt";
HAnimHumanoid15.viewpoints[220] = HAnimSite544;

let HAnimSite545 = browser.currentScene.createNode("HAnimSite");
HAnimSite545.USE = "hanim_l_asis_pt";
HAnimHumanoid15.viewpoints[221] = HAnimSite545;

let HAnimSite546 = browser.currentScene.createNode("HAnimSite");
HAnimSite546.USE = "hanim_l_axilla_distal_pt";
HAnimHumanoid15.viewpoints[222] = HAnimSite546;

let HAnimSite547 = browser.currentScene.createNode("HAnimSite");
HAnimSite547.USE = "hanim_r_axilla_distal_pt";
HAnimHumanoid15.viewpoints[223] = HAnimSite547;

let HAnimSite548 = browser.currentScene.createNode("HAnimSite");
HAnimSite548.USE = "hanim_l_axilla_proximal_pt";
HAnimHumanoid15.viewpoints[224] = HAnimSite548;

let HAnimSite549 = browser.currentScene.createNode("HAnimSite");
HAnimSite549.USE = "hanim_r_axilla_proximal_pt";
HAnimHumanoid15.viewpoints[225] = HAnimSite549;

let HAnimSite550 = browser.currentScene.createNode("HAnimSite");
HAnimSite550.USE = "hanim_l_calcaneus_posterior_pt";
HAnimHumanoid15.viewpoints[226] = HAnimSite550;

let HAnimSite551 = browser.currentScene.createNode("HAnimSite");
HAnimSite551.USE = "hanim_r_calcaneus_posterior_pt";
HAnimHumanoid15.viewpoints[227] = HAnimSite551;

let HAnimSite552 = browser.currentScene.createNode("HAnimSite");
HAnimSite552.USE = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimHumanoid15.viewpoints[228] = HAnimSite552;

let HAnimSite553 = browser.currentScene.createNode("HAnimSite");
HAnimSite553.USE = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimHumanoid15.viewpoints[229] = HAnimSite553;

let HAnimSite554 = browser.currentScene.createNode("HAnimSite");
HAnimSite554.USE = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimHumanoid15.viewpoints[230] = HAnimSite554;

let HAnimSite555 = browser.currentScene.createNode("HAnimSite");
HAnimSite555.USE = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimHumanoid15.viewpoints[231] = HAnimSite555;

let HAnimSite556 = browser.currentScene.createNode("HAnimSite");
HAnimSite556.USE = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimHumanoid15.viewpoints[232] = HAnimSite556;

let HAnimSite557 = browser.currentScene.createNode("HAnimSite");
HAnimSite557.USE = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimHumanoid15.viewpoints[233] = HAnimSite557;

let HAnimSite558 = browser.currentScene.createNode("HAnimSite");
HAnimSite558.USE = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimHumanoid15.viewpoints[234] = HAnimSite558;

let HAnimSite559 = browser.currentScene.createNode("HAnimSite");
HAnimSite559.USE = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimHumanoid15.viewpoints[235] = HAnimSite559;

let HAnimSite560 = browser.currentScene.createNode("HAnimSite");
HAnimSite560.USE = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimHumanoid15.viewpoints[236] = HAnimSite560;

let HAnimSite561 = browser.currentScene.createNode("HAnimSite");
HAnimSite561.USE = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimHumanoid15.viewpoints[237] = HAnimSite561;

let HAnimSite562 = browser.currentScene.createNode("HAnimSite");
HAnimSite562.USE = "hanim_l_clavicle_pt";
HAnimHumanoid15.viewpoints[238] = HAnimSite562;

let HAnimSite563 = browser.currentScene.createNode("HAnimSite");
HAnimSite563.USE = "hanim_r_clavicle_pt";
HAnimHumanoid15.viewpoints[239] = HAnimSite563;

let HAnimSite564 = browser.currentScene.createNode("HAnimSite");
HAnimSite564.USE = "hanim_l_dactylion_pt";
HAnimHumanoid15.viewpoints[240] = HAnimSite564;

let HAnimSite565 = browser.currentScene.createNode("HAnimSite");
HAnimSite565.USE = "hanim_r_dactylion_pt";
HAnimHumanoid15.viewpoints[241] = HAnimSite565;

let HAnimSite566 = browser.currentScene.createNode("HAnimSite");
HAnimSite566.USE = "hanim_l_femoral_lateral_epicondyle_pt";
HAnimHumanoid15.viewpoints[242] = HAnimSite566;

let HAnimSite567 = browser.currentScene.createNode("HAnimSite");
HAnimSite567.USE = "hanim_r_femoral_lateral_epicondyle_pt";
HAnimHumanoid15.viewpoints[243] = HAnimSite567;

let HAnimSite568 = browser.currentScene.createNode("HAnimSite");
HAnimSite568.USE = "hanim_l_femoral_medial_epicondyle_pt";
HAnimHumanoid15.viewpoints[244] = HAnimSite568;

let HAnimSite569 = browser.currentScene.createNode("HAnimSite");
HAnimSite569.USE = "hanim_r_femoral_medial_epicondyle_pt";
HAnimHumanoid15.viewpoints[245] = HAnimSite569;

let HAnimSite570 = browser.currentScene.createNode("HAnimSite");
HAnimSite570.USE = "hanim_l_forefoot_tip";
HAnimHumanoid15.viewpoints[246] = HAnimSite570;

let HAnimSite571 = browser.currentScene.createNode("HAnimSite");
HAnimSite571.USE = "hanim_r_forefoot_tip";
HAnimHumanoid15.viewpoints[247] = HAnimSite571;

let HAnimSite572 = browser.currentScene.createNode("HAnimSite");
HAnimSite572.USE = "hanim_r_gonion_pt";
HAnimHumanoid15.viewpoints[248] = HAnimSite572;

let HAnimSite573 = browser.currentScene.createNode("HAnimSite");
HAnimSite573.USE = "hanim_l_gonion_pt";
HAnimHumanoid15.viewpoints[249] = HAnimSite573;

let HAnimSite574 = browser.currentScene.createNode("HAnimSite");
HAnimSite574.USE = "hanim_l_humeral_lateral_epicondyle_pt";
HAnimHumanoid15.viewpoints[250] = HAnimSite574;

let HAnimSite575 = browser.currentScene.createNode("HAnimSite");
HAnimSite575.USE = "hanim_r_humeral_lateral_epicondyle_pt";
HAnimHumanoid15.viewpoints[251] = HAnimSite575;

let HAnimSite576 = browser.currentScene.createNode("HAnimSite");
HAnimSite576.USE = "hanim_l_humeral_medial_epicondyle_pt";
HAnimHumanoid15.viewpoints[252] = HAnimSite576;

let HAnimSite577 = browser.currentScene.createNode("HAnimSite");
HAnimSite577.USE = "hanim_r_humeral_medial_epicondyle_pt";
HAnimHumanoid15.viewpoints[253] = HAnimSite577;

let HAnimSite578 = browser.currentScene.createNode("HAnimSite");
HAnimSite578.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid15.viewpoints[254] = HAnimSite578;

let HAnimSite579 = browser.currentScene.createNode("HAnimSite");
HAnimSite579.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid15.viewpoints[255] = HAnimSite579;

let HAnimSite580 = browser.currentScene.createNode("HAnimSite");
HAnimSite580.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid15.viewpoints[256] = HAnimSite580;

let HAnimSite581 = browser.currentScene.createNode("HAnimSite");
HAnimSite581.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid15.viewpoints[257] = HAnimSite581;

let HAnimSite582 = browser.currentScene.createNode("HAnimSite");
HAnimSite582.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid15.viewpoints[258] = HAnimSite582;

let HAnimSite583 = browser.currentScene.createNode("HAnimSite");
HAnimSite583.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid15.viewpoints[259] = HAnimSite583;

let HAnimSite584 = browser.currentScene.createNode("HAnimSite");
HAnimSite584.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid15.viewpoints[260] = HAnimSite584;

let HAnimSite585 = browser.currentScene.createNode("HAnimSite");
HAnimSite585.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid15.viewpoints[261] = HAnimSite585;

let HAnimSite586 = browser.currentScene.createNode("HAnimSite");
HAnimSite586.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid15.viewpoints[262] = HAnimSite586;

let HAnimSite587 = browser.currentScene.createNode("HAnimSite");
HAnimSite587.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid15.viewpoints[263] = HAnimSite587;

let HAnimSite588 = browser.currentScene.createNode("HAnimSite");
HAnimSite588.USE = "hanim_l_metacarpal_phalanx_2_pt";
HAnimHumanoid15.viewpoints[264] = HAnimSite588;

let HAnimSite589 = browser.currentScene.createNode("HAnimSite");
HAnimSite589.USE = "hanim_r_metacarpal_phalanx_2_pt";
HAnimHumanoid15.viewpoints[265] = HAnimSite589;

let HAnimSite590 = browser.currentScene.createNode("HAnimSite");
HAnimSite590.USE = "hanim_l_metacarpal_phalanx_5_pt";
HAnimHumanoid15.viewpoints[266] = HAnimSite590;

let HAnimSite591 = browser.currentScene.createNode("HAnimSite");
HAnimSite591.USE = "hanim_r_metacarpal_phalanx_5_pt";
HAnimHumanoid15.viewpoints[267] = HAnimSite591;

let HAnimSite592 = browser.currentScene.createNode("HAnimSite");
HAnimSite592.USE = "hanim_l_metatarsal_phalanx_1_pt";
HAnimHumanoid15.viewpoints[268] = HAnimSite592;

let HAnimSite593 = browser.currentScene.createNode("HAnimSite");
HAnimSite593.USE = "hanim_r_metatarsal_phalanx_1_pt";
HAnimHumanoid15.viewpoints[269] = HAnimSite593;

let HAnimSite594 = browser.currentScene.createNode("HAnimSite");
HAnimSite594.USE = "hanim_l_metatarsal_phalanx_5_pt";
HAnimHumanoid15.viewpoints[270] = HAnimSite594;

let HAnimSite595 = browser.currentScene.createNode("HAnimSite");
HAnimSite595.USE = "hanim_r_metatarsal_phalanx_5_pt";
HAnimHumanoid15.viewpoints[271] = HAnimSite595;

let HAnimSite596 = browser.currentScene.createNode("HAnimSite");
HAnimSite596.USE = "hanim_r_neck_base_pt";
HAnimHumanoid15.viewpoints[272] = HAnimSite596;

let HAnimSite597 = browser.currentScene.createNode("HAnimSite");
HAnimSite597.USE = "hanim_l_neck_base_pt";
HAnimHumanoid15.viewpoints[273] = HAnimSite597;

let HAnimSite598 = browser.currentScene.createNode("HAnimSite");
HAnimSite598.USE = "hanim_l_olecranon_pt";
HAnimHumanoid15.viewpoints[274] = HAnimSite598;

let HAnimSite599 = browser.currentScene.createNode("HAnimSite");
HAnimSite599.USE = "hanim_r_olecranon_pt";
HAnimHumanoid15.viewpoints[275] = HAnimSite599;

let HAnimSite600 = browser.currentScene.createNode("HAnimSite");
HAnimSite600.USE = "hanim_r_psis_pt";
HAnimHumanoid15.viewpoints[276] = HAnimSite600;

let HAnimSite601 = browser.currentScene.createNode("HAnimSite");
HAnimSite601.USE = "hanim_l_psis_pt";
HAnimHumanoid15.viewpoints[277] = HAnimSite601;

let HAnimSite602 = browser.currentScene.createNode("HAnimSite");
HAnimSite602.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid15.viewpoints[278] = HAnimSite602;

let HAnimSite603 = browser.currentScene.createNode("HAnimSite");
HAnimSite603.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid15.viewpoints[279] = HAnimSite603;

let HAnimSite604 = browser.currentScene.createNode("HAnimSite");
HAnimSite604.USE = "hanim_l_radiale_pt";
HAnimHumanoid15.viewpoints[280] = HAnimSite604;

let HAnimSite605 = browser.currentScene.createNode("HAnimSite");
HAnimSite605.USE = "hanim_r_radiale_pt";
HAnimHumanoid15.viewpoints[281] = HAnimSite605;

let HAnimSite606 = browser.currentScene.createNode("HAnimSite");
HAnimSite606.USE = "hanim_r_rib10_pt";
HAnimHumanoid15.viewpoints[282] = HAnimSite606;

let HAnimSite607 = browser.currentScene.createNode("HAnimSite");
HAnimSite607.USE = "hanim_l_rib10_pt";
HAnimHumanoid15.viewpoints[283] = HAnimSite607;

let HAnimSite608 = browser.currentScene.createNode("HAnimSite");
HAnimSite608.USE = "hanim_temporomandibular_l_site_pt";
HAnimHumanoid15.viewpoints[284] = HAnimSite608;

let HAnimSite609 = browser.currentScene.createNode("HAnimSite");
HAnimSite609.USE = "hanim_temporomandibular_r_site_pt";
HAnimHumanoid15.viewpoints[285] = HAnimSite609;

let HAnimSite610 = browser.currentScene.createNode("HAnimSite");
HAnimSite610.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid15.viewpoints[286] = HAnimSite610;

let HAnimSite611 = browser.currentScene.createNode("HAnimSite");
HAnimSite611.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid15.viewpoints[287] = HAnimSite611;

let HAnimSite612 = browser.currentScene.createNode("HAnimSite");
HAnimSite612.USE = "hanim_l_tarsal_distal_phalanx_2_pt";
HAnimHumanoid15.viewpoints[288] = HAnimSite612;

let HAnimSite613 = browser.currentScene.createNode("HAnimSite");
HAnimSite613.USE = "hanim_r_tarsal_distal_phalanx_2_pt";
HAnimHumanoid15.viewpoints[289] = HAnimSite613;

let HAnimSite614 = browser.currentScene.createNode("HAnimSite");
HAnimSite614.USE = "hanim_r_thelion_pt";
HAnimHumanoid15.viewpoints[290] = HAnimSite614;

let HAnimSite615 = browser.currentScene.createNode("HAnimSite");
HAnimSite615.USE = "hanim_l_thelion_pt";
HAnimHumanoid15.viewpoints[291] = HAnimSite615;

let HAnimSite616 = browser.currentScene.createNode("HAnimSite");
HAnimSite616.USE = "hanim_r_tragion_pt";
HAnimHumanoid15.viewpoints[292] = HAnimSite616;

let HAnimSite617 = browser.currentScene.createNode("HAnimSite");
HAnimSite617.USE = "hanim_l_tragion_pt";
HAnimHumanoid15.viewpoints[293] = HAnimSite617;

let HAnimSite618 = browser.currentScene.createNode("HAnimSite");
HAnimSite618.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid15.viewpoints[294] = HAnimSite618;

let HAnimSite619 = browser.currentScene.createNode("HAnimSite");
HAnimSite619.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid15.viewpoints[295] = HAnimSite619;

let HAnimSite620 = browser.currentScene.createNode("HAnimSite");
HAnimSite620.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid15.viewpoints[296] = HAnimSite620;

let HAnimSite621 = browser.currentScene.createNode("HAnimSite");
HAnimSite621.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid15.viewpoints[297] = HAnimSite621;

browser.currentScene.children[12] = HAnimHumanoid15;


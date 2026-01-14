const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("HAnim", 1));
scene.addMetaData("title", "DiamondManLOA_1.x3d");
scene.addMetaData("description", "HAnim skeletal structure for Level of Action (LOA) one, with diamonds at the Joint centers. LOA-1 is typical low-end real-time 3D hierarchy.");
scene.addMetaData("creator", "Matthew T. Beitler");
scene.addMetaData("translator", "Joel S. Pawloski");
scene.addMetaData("created", "12 November 2001");
scene.addMetaData("modified", "Tue, 09 Sep 2025 19:37:54 GMT");
scene.addMetaData("reference", "../Templates/DiamondManLOA_1.x3d");
scene.addMetaData("reference", "HAnim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Two");
scene.addMetaData("reference", "http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa");
scene.addMetaData("reference", "http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1.wrl");
scene.addMetaData("reference", "http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1-diamond.wrl");
scene.addMetaData("reference", "http://ece.uwaterloo.ca/~HAnim");
scene.addMetaData("reference", "http://www.cis.upenn.edu/~badler/anthro/89-71.pdf");
scene.addMetaData("reference", "http://www.cis.upenn.edu/~badler/anthro/89-71.ps");
scene.addMetaData("reference", "http://www.cis.upenn.edu/~beitler");
scene.addMetaData("error", "Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported");
scene.addMetaData("Image", "images/BonesAllSkeletonFrontViewLOA1.png");
scene.addMetaData("Image", "humanoid_landmark_locations.gif");
scene.addMetaData("Image", "http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif");
scene.addMetaData("motto", "(a) "Diamonds are a girl's best friend." (b) "Gosh, it sure is chilly in here."");
scene.addMetaData("warning", "Still needs comments on CAESAR feature points inserted");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA_1.x3d");
await browser .loadComponents (scene);
let WorldInfo26 = browser.currentScene.createNode("WorldInfo");
WorldInfo26.title = "HANIM 1.1 Default Joint Centers, LOA1";
WorldInfo26.info = new X3D.MFString([new X3D.SFString("HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 1 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf")]);
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo26;

let NavigationInfo27 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo27.speed = 1.5;
browser.currentScene.children[1] = NavigationInfo27;

let Viewpoint28 = browser.currentScene.createNode("Viewpoint");
Viewpoint28.description = "Diamond Man, LOA 1";
Viewpoint28.position = new X3D.SFVec3f([0,1,3]);
Viewpoint28.centerOfRotation = new X3D.SFVec3f([0,1,0]);
browser.currentScene.children[2] = Viewpoint28;

let HAnimHumanoid29 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid29.DEF = "hanim_humanoid";
HAnimHumanoid29.name = "humanoid";
HAnimHumanoid29.version = "1.0";
let MetadataSet30 = browser.currentScene.createNode("MetadataSet");
MetadataSet30.name = "HAnimHumanoid.info";
MetadataSet30.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
let MetadataString31 = browser.currentScene.createNode("MetadataString");
MetadataString31.name = "authorEmail";
MetadataSet30.value = new X3D.MFNode();

MetadataSet30XXX.value[0] = MetadataString31;

let MetadataString32 = browser.currentScene.createNode("MetadataString");
MetadataString32.name = "authorName";
value[1] = MetadataString32;

let MetadataString33 = browser.currentScene.createNode("MetadataString");
MetadataString33.name = "copyright";
value[2] = MetadataString33;

let MetadataString34 = browser.currentScene.createNode("MetadataString");
MetadataString34.name = "humanoidVersion";
value[3] = MetadataString34;

let MetadataString35 = browser.currentScene.createNode("MetadataString");
MetadataString35.name = "usageRestrictions";
value[4] = MetadataString35;

HAnimHumanoid29.metadata = new X3D.SFNode();

HAnimHumanoid29XXX.metadata[0] = MetadataSet30;

let HAnimJoint36 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint36.DEF = "hanim_HumanoidRoot";
HAnimJoint36.name = "humanoid_root";
HAnimJoint36.center = new X3D.SFVec3f([0,0.824,0.0277]);
let HAnimJoint37 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint37.DEF = "hanim_sacroiliac";
HAnimJoint37.name = "sacroiliac";
HAnimJoint37.center = new X3D.SFVec3f([0,0.9149,0.0016]);
let HAnimSegment38 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment38.DEF = "hanim_pelvis";
HAnimSegment38.name = "pelvis";
let Transform39 = browser.currentScene.createNode("Transform");
Transform39.translation = new X3D.SFVec3f([0,0.9149,0.0016]);
let Shape40 = browser.currentScene.createNode("Shape");
Shape40.DEF = "DiamondShape";
let Appearance41 = browser.currentScene.createNode("Appearance");
let Material42 = browser.currentScene.createNode("Material");
Material42.diffuseColor = new X3D.SFColor([1,1,0]);
material = Material42;

appearance = Appearance41;

let IndexedFaceSet43 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet43.creaseAngle = 0.5;
IndexedFaceSet43.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate44 = browser.currentScene.createNode("Coordinate");
Coordinate44.DEF = "points";
Coordinate44.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate44;

geometry = IndexedFaceSet43;

Transform39YYY.child = new X3D.undefined();

Transform39ZZZ.child[0] = Shape40;

HAnimSegment38YYY.children = new X3D.MFNode();

HAnimSegment38ZZZ.children[0] = Transform39;

HAnimJoint37YYY.children = new X3D.MFNode();

HAnimJoint37ZZZ.children[0] = HAnimSegment38;

let HAnimJoint45 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint45.DEF = "hanim_l_hip";
HAnimJoint45.name = "l_hip";
HAnimJoint45.center = new X3D.SFVec3f([0.0961,0.9124,-0.0001]);
let HAnimSegment46 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment46.DEF = "hanim_l_thigh";
HAnimSegment46.name = "l_thigh";
let Transform47 = browser.currentScene.createNode("Transform");
Transform47.translation = new X3D.SFVec3f([0.0961,0.9124,-0.0001]);
let Shape48 = browser.currentScene.createNode("Shape");
Shape48.USE = "DiamondShape";
Transform47YYY.child = new X3D.undefined();

Transform47ZZZ.child[0] = Shape48;

HAnimSegment46YYY.children = new X3D.MFNode();

HAnimSegment46ZZZ.children[0] = Transform47;

let HAnimSite49 = browser.currentScene.createNode("HAnimSite");
HAnimSite49.DEF = "hanim_l_knee_crease_pt";
HAnimSite49.name = "l_knee_crease_pt";
HAnimSite49.translation = new X3D.SFVec3f([0.0993,0.4881,-0.0309]);
HAnimSegment46ZZZ.children[1] = HAnimSite49;

let HAnimSite50 = browser.currentScene.createNode("HAnimSite");
HAnimSite50.DEF = "hanim_l_femoral_lateral_epicn_pt";
HAnimSite50.name = "l_femoral_lateral_epicn_pt";
HAnimSite50.translation = new X3D.SFVec3f([0.1598,0.4967,0.0297]);
HAnimSegment46ZZZ.children[2] = HAnimSite50;

let HAnimSite51 = browser.currentScene.createNode("HAnimSite");
HAnimSite51.DEF = "hanim_l_femoral_medial_epicn_pt";
HAnimSite51.name = "l_femoral_medial_epicn_pt";
HAnimSite51.translation = new X3D.SFVec3f([0.0398,0.4946,0.0303]);
HAnimSegment46ZZZ.children[3] = HAnimSite51;

HAnimJoint45YYY.children = new X3D.MFNode();

HAnimJoint45ZZZ.children[0] = HAnimSegment46;

let HAnimJoint52 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint52.DEF = "hanim_l_knee";
HAnimJoint52.name = "l_knee";
HAnimJoint52.center = new X3D.SFVec3f([0.104,0.4867,0.0308]);
let HAnimSegment53 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment53.DEF = "hanim_l_calf";
HAnimSegment53.name = "l_calf";
let Transform54 = browser.currentScene.createNode("Transform");
Transform54.translation = new X3D.SFVec3f([0.104,0.4867,0.0308]);
let Shape55 = browser.currentScene.createNode("Shape");
Shape55.USE = "DiamondShape";
Transform54YYY.child = new X3D.undefined();

Transform54ZZZ.child[0] = Shape55;

HAnimSegment53YYY.children = new X3D.MFNode();

HAnimSegment53ZZZ.children[0] = Transform54;

HAnimJoint52YYY.children = new X3D.MFNode();

HAnimJoint52ZZZ.children[0] = HAnimSegment53;

let HAnimJoint56 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint56.DEF = "hanim_l_ankle";
HAnimJoint56.name = "l_ankle";
HAnimJoint56.center = new X3D.SFVec3f([0.1101,0.0656,-0.0736]);
let HAnimSegment57 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment57.DEF = "hanim_l_hindfoot";
HAnimSegment57.name = "l_hindfoot";
let Transform58 = browser.currentScene.createNode("Transform");
Transform58.translation = new X3D.SFVec3f([0.1101,0.0656,-0.0736]);
let Shape59 = browser.currentScene.createNode("Shape");
Shape59.USE = "DiamondShape";
Transform58YYY.child = new X3D.undefined();

Transform58ZZZ.child[0] = Shape59;

HAnimSegment57YYY.children = new X3D.MFNode();

HAnimSegment57ZZZ.children[0] = Transform58;

let HAnimSite60 = browser.currentScene.createNode("HAnimSite");
HAnimSite60.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite60.name = "l_lateral_malleolus_pt";
HAnimSite60.translation = new X3D.SFVec3f([0.1308,0.0597,-0.1032]);
HAnimSegment57ZZZ.children[1] = HAnimSite60;

let HAnimSite61 = browser.currentScene.createNode("HAnimSite");
HAnimSite61.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite61.name = "l_medial_malleolus_pt";
HAnimSite61.translation = new X3D.SFVec3f([0.089,0.0716,-0.0881]);
HAnimSegment57ZZZ.children[2] = HAnimSite61;

let HAnimSite62 = browser.currentScene.createNode("HAnimSite");
HAnimSite62.DEF = "hanim_l_sphyrion_pt";
HAnimSite62.name = "l_sphyrion_pt";
HAnimSite62.translation = new X3D.SFVec3f([0.089,0.0575,-0.0943]);
HAnimSegment57ZZZ.children[3] = HAnimSite62;

let HAnimSite63 = browser.currentScene.createNode("HAnimSite");
HAnimSite63.DEF = "hanim_l_calcaneous_post_pt";
HAnimSite63.name = "l_calcaneous_post_pt";
HAnimSite63.translation = new X3D.SFVec3f([0.0974,0.0259,-0.1171]);
HAnimSegment57ZZZ.children[4] = HAnimSite63;

HAnimJoint56YYY.children = new X3D.MFNode();

HAnimJoint56ZZZ.children[0] = HAnimSegment57;

let HAnimJoint64 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint64.DEF = "hanim_l_midtarsal";
HAnimJoint64.name = "l_midtarsal";
HAnimJoint64.center = new X3D.SFVec3f([0.1086,0.0001,0.0368]);
let HAnimSegment65 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment65.DEF = "hanim_l_middistal";
HAnimSegment65.name = "l_middistal";
let HAnimSite66 = browser.currentScene.createNode("HAnimSite");
HAnimSite66.DEF = "hanim_l_middistal_tip";
HAnimSite66.name = "l_middistal_tip";
HAnimSite66.translation = new X3D.SFVec3f([0.1354,0.0016,0.1476]);
HAnimSegment65YYY.children = new X3D.MFNode();

HAnimSegment65ZZZ.children[0] = HAnimSite66;

let HAnimSite67 = browser.currentScene.createNode("HAnimSite");
HAnimSite67.DEF = "hanim_l_metatarsal_pha5_pt";
HAnimSite67.name = "l_metatarsal_pha5_pt";
HAnimSite67.translation = new X3D.SFVec3f([0.1825,0.007,0.0928]);
HAnimSegment65ZZZ.children[1] = HAnimSite67;

let HAnimSite68 = browser.currentScene.createNode("HAnimSite");
HAnimSite68.DEF = "hanim_l_metatarsal_pha1_pt";
HAnimSite68.name = "l_metatarsal_pha1_pt";
HAnimSite68.translation = new X3D.SFVec3f([0.0816,0.0232,0.0106]);
HAnimSegment65ZZZ.children[2] = HAnimSite68;

let HAnimSite69 = browser.currentScene.createNode("HAnimSite");
HAnimSite69.DEF = "hanim_l_digit2_pt";
HAnimSite69.name = "l_digit2_pt";
HAnimSite69.translation = new X3D.SFVec3f([0.1195,0.0079,0.1433]);
HAnimSegment65ZZZ.children[3] = HAnimSite69;

HAnimJoint64YYY.children = new X3D.MFNode();

HAnimJoint64ZZZ.children[0] = HAnimSegment65;

HAnimJoint56ZZZ.children[1] = HAnimJoint64;

HAnimJoint52ZZZ.children[1] = HAnimJoint56;

HAnimJoint45ZZZ.children[1] = HAnimJoint52;

HAnimJoint37ZZZ.children[1] = HAnimJoint45;

let HAnimJoint70 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint70.DEF = "hanim_r_hip";
HAnimJoint70.name = "r_hip";
HAnimJoint70.center = new X3D.SFVec3f([-0.095,0.9171,0.0029]);
let HAnimSegment71 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment71.DEF = "hanim_r_thigh";
HAnimSegment71.name = "r_thigh";
let Transform72 = browser.currentScene.createNode("Transform");
Transform72.translation = new X3D.SFVec3f([-0.095,0.9171,0.0029]);
let Shape73 = browser.currentScene.createNode("Shape");
Shape73.USE = "DiamondShape";
Transform72YYY.child = new X3D.undefined();

Transform72ZZZ.child[0] = Shape73;

HAnimSegment71YYY.children = new X3D.MFNode();

HAnimSegment71ZZZ.children[0] = Transform72;

let HAnimSite74 = browser.currentScene.createNode("HAnimSite");
HAnimSite74.DEF = "hanim_r_knee_crease_pt";
HAnimSite74.name = "r_knee_crease_pt";
HAnimSite74.translation = new X3D.SFVec3f([-0.0825,0.4932,-0.0326]);
HAnimSegment71ZZZ.children[1] = HAnimSite74;

let HAnimSite75 = browser.currentScene.createNode("HAnimSite");
HAnimSite75.DEF = "hanim_r_femoral_lateral_epicn_pt";
HAnimSite75.name = "r_femoral_lateral_epicn_pt";
HAnimSite75.translation = new X3D.SFVec3f([-0.1421,0.4992,0.031]);
HAnimSegment71ZZZ.children[2] = HAnimSite75;

let HAnimSite76 = browser.currentScene.createNode("HAnimSite");
HAnimSite76.DEF = "hanim_r_femoral_medial_epicn_pt";
HAnimSite76.name = "r_femoral_medial_epicn_pt";
HAnimSite76.translation = new X3D.SFVec3f([-0.0221,0.5014,0.0289]);
HAnimSegment71ZZZ.children[3] = HAnimSite76;

HAnimJoint70YYY.children = new X3D.MFNode();

HAnimJoint70ZZZ.children[0] = HAnimSegment71;

let HAnimJoint77 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint77.DEF = "hanim_r_knee";
HAnimJoint77.name = "r_knee";
HAnimJoint77.center = new X3D.SFVec3f([-0.0867,0.4913,0.0318]);
let HAnimSegment78 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment78.DEF = "hanim_r_calf";
HAnimSegment78.name = "r_calf";
let Transform79 = browser.currentScene.createNode("Transform");
Transform79.translation = new X3D.SFVec3f([-0.0867,0.4913,0.0318]);
let Shape80 = browser.currentScene.createNode("Shape");
Shape80.USE = "DiamondShape";
Transform79YYY.child = new X3D.undefined();

Transform79ZZZ.child[0] = Shape80;

HAnimSegment78YYY.children = new X3D.MFNode();

HAnimSegment78ZZZ.children[0] = Transform79;

HAnimJoint77YYY.children = new X3D.MFNode();

HAnimJoint77ZZZ.children[0] = HAnimSegment78;

let HAnimJoint81 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint81.DEF = "hanim_r_ankle";
HAnimJoint81.name = "r_ankle";
HAnimJoint81.center = new X3D.SFVec3f([-0.0801,0.0712,-0.0766]);
let HAnimSegment82 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment82.DEF = "hanim_r_hindfoot";
HAnimSegment82.name = "r_hindfoot";
let Transform83 = browser.currentScene.createNode("Transform");
Transform83.translation = new X3D.SFVec3f([-0.0801,0.0712,-0.0766]);
let Shape84 = browser.currentScene.createNode("Shape");
Shape84.USE = "DiamondShape";
Transform83YYY.child = new X3D.undefined();

Transform83ZZZ.child[0] = Shape84;

HAnimSegment82YYY.children = new X3D.MFNode();

HAnimSegment82ZZZ.children[0] = Transform83;

let HAnimSite85 = browser.currentScene.createNode("HAnimSite");
HAnimSite85.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite85.name = "r_lateral_malleolus_pt";
HAnimSite85.translation = new X3D.SFVec3f([-0.1006,0.0658,-0.1075]);
HAnimSegment82ZZZ.children[1] = HAnimSite85;

let HAnimSite86 = browser.currentScene.createNode("HAnimSite");
HAnimSite86.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite86.name = "r_medial_malleolus_pt";
HAnimSite86.translation = new X3D.SFVec3f([-0.0591,0.076,-0.0928]);
HAnimSegment82ZZZ.children[2] = HAnimSite86;

let HAnimSite87 = browser.currentScene.createNode("HAnimSite");
HAnimSite87.DEF = "hanim_r_sphyrion_pt";
HAnimSite87.name = "r_sphyrion_pt";
HAnimSite87.translation = new X3D.SFVec3f([-0.0603,0.061,-0.1002]);
HAnimSegment82ZZZ.children[3] = HAnimSite87;

let HAnimSite88 = browser.currentScene.createNode("HAnimSite");
HAnimSite88.DEF = "hanim_r_calcaneous_post_pt";
HAnimSite88.name = "r_calcaneous_post_pt";
HAnimSite88.translation = new X3D.SFVec3f([-0.0692,0.0297,-0.1221]);
HAnimSegment82ZZZ.children[4] = HAnimSite88;

HAnimJoint81YYY.children = new X3D.MFNode();

HAnimJoint81ZZZ.children[0] = HAnimSegment82;

let HAnimJoint89 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint89.DEF = "hanim_r_midtarsal";
HAnimJoint89.name = "r_midtarsal";
HAnimJoint89.center = new X3D.SFVec3f([-0.0801,0,0.0368]);
let HAnimSegment90 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment90.DEF = "hanim_r_middistal";
HAnimSegment90.name = "r_middistal";
let HAnimSite91 = browser.currentScene.createNode("HAnimSite");
HAnimSite91.DEF = "hanim_r_middistal_tip";
HAnimSite91.name = "r_middistal_tip";
HAnimSite91.translation = new X3D.SFVec3f([-0.1043,-0.0227,0.145]);
HAnimSegment90YYY.children = new X3D.MFNode();

HAnimSegment90ZZZ.children[0] = HAnimSite91;

let HAnimSite92 = browser.currentScene.createNode("HAnimSite");
HAnimSite92.DEF = "hanim_r_metatarsal_pha5_pt";
HAnimSite92.name = "r_metatarsal_pha5_pt";
HAnimSite92.translation = new X3D.SFVec3f([-0.1523,0.0166,0.0895]);
HAnimSegment90ZZZ.children[1] = HAnimSite92;

let HAnimSite93 = browser.currentScene.createNode("HAnimSite");
HAnimSite93.DEF = "hanim_r_metatarsal_pha1_pt";
HAnimSite93.name = "r_metatarsal_pha1_pt";
HAnimSite93.translation = new X3D.SFVec3f([-0.0521,0.026,0.0127]);
HAnimSegment90ZZZ.children[2] = HAnimSite93;

let HAnimSite94 = browser.currentScene.createNode("HAnimSite");
HAnimSite94.DEF = "hanim_r_digit2_pt";
HAnimSite94.name = "r_digit2_pt";
HAnimSite94.translation = new X3D.SFVec3f([-0.0883,0.0134,0.1383]);
HAnimSegment90ZZZ.children[3] = HAnimSite94;

HAnimJoint89YYY.children = new X3D.MFNode();

HAnimJoint89ZZZ.children[0] = HAnimSegment90;

HAnimJoint81ZZZ.children[1] = HAnimJoint89;

HAnimJoint77ZZZ.children[1] = HAnimJoint81;

HAnimJoint70ZZZ.children[1] = HAnimJoint77;

HAnimJoint37ZZZ.children[2] = HAnimJoint70;

HAnimJoint36YYY.children = new X3D.MFNode();

HAnimJoint36ZZZ.children[0] = HAnimJoint37;

let HAnimJoint95 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint95.DEF = "hanim_vl1";
HAnimJoint95.name = "vl1";
HAnimJoint95.center = new X3D.SFVec3f([-0.00405,1.07,-0.0275]);
let HAnimSegment96 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment96.DEF = "hanim_l1";
HAnimSegment96.name = "l1";
HAnimJoint95YYY.children = new X3D.MFNode();

HAnimJoint95ZZZ.children[0] = HAnimSegment96;

let HAnimJoint97 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint97.DEF = "hanim_l_shoulder";
HAnimJoint97.name = "l_shoulder";
HAnimJoint97.center = new X3D.SFVec3f([0.2029,1.4376,-0.0387]);
let HAnimSegment98 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment98.DEF = "hanim_l_upperarm";
HAnimSegment98.name = "l_upperarm";
let Transform99 = browser.currentScene.createNode("Transform");
Transform99.translation = new X3D.SFVec3f([0.2029,1.4376,-0.0387]);
let Shape100 = browser.currentScene.createNode("Shape");
Shape100.USE = "DiamondShape";
Transform99YYY.child = new X3D.undefined();

Transform99ZZZ.child[0] = Shape100;

HAnimSegment98YYY.children = new X3D.MFNode();

HAnimSegment98ZZZ.children[0] = Transform99;

let Transform101 = browser.currentScene.createNode("Transform");
Transform101.DEF = "l_upperarm_adjust";
Transform101.translation = new X3D.SFVec3f([0.2029,1.4376,-0.0387]);
Transform101.rotation = new X3D.SFRotation([1,0,0,0.119]);
Transform101.center = new X3D.SFVec3f([0.182,1.22,-0.047]);
HAnimSegment98ZZZ.children[1] = Transform101;

let HAnimSite102 = browser.currentScene.createNode("HAnimSite");
HAnimSite102.DEF = "hanim_l_humeral_lateral_epicn_pt";
HAnimSite102.name = "l_humeral_lateral_epicn_pt";
HAnimSite102.translation = new X3D.SFVec3f([0.228,1.1482,-0.11]);
HAnimSegment98ZZZ.children[2] = HAnimSite102;

HAnimJoint97YYY.children = new X3D.MFNode();

HAnimJoint97ZZZ.children[0] = HAnimSegment98;

let HAnimJoint103 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint103.DEF = "hanim_l_elbow";
HAnimJoint103.name = "l_elbow";
HAnimJoint103.center = new X3D.SFVec3f([0.2014,1.1357,-0.0682]);
let HAnimSegment104 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment104.DEF = "hanim_l_forearm";
HAnimSegment104.name = "l_forearm";
let Transform105 = browser.currentScene.createNode("Transform");
Transform105.translation = new X3D.SFVec3f([0.2014,1.1357,-0.0682]);
let Shape106 = browser.currentScene.createNode("Shape");
Shape106.USE = "DiamondShape";
Transform105YYY.child = new X3D.undefined();

Transform105ZZZ.child[0] = Shape106;

HAnimSegment104YYY.children = new X3D.MFNode();

HAnimSegment104ZZZ.children[0] = Transform105;

let Transform107 = browser.currentScene.createNode("Transform");
Transform107.DEF = "l_forearm_adjust";
Transform107.translation = new X3D.SFVec3f([0.2014,1.1357,-0.0682]);
Transform107.rotation = new X3D.SFRotation([-1,0,0,0.1]);
Transform107.center = new X3D.SFVec3f([0.198,0.961,-0.0405]);
HAnimSegment104ZZZ.children[1] = Transform107;

let HAnimSite108 = browser.currentScene.createNode("HAnimSite");
HAnimSite108.DEF = "hanim_l_radial_styloid_pt";
HAnimSite108.name = "l_radial_styloid_pt";
HAnimSite108.translation = new X3D.SFVec3f([0.1901,0.8645,-0.0415]);
HAnimSegment104ZZZ.children[2] = HAnimSite108;

let HAnimSite109 = browser.currentScene.createNode("HAnimSite");
HAnimSite109.DEF = "hanim_l_olecranon_pt";
HAnimSite109.name = "l_olecranon_pt";
HAnimSite109.translation = new X3D.SFVec3f([-0.1962,1.1375,-0.1123]);
HAnimSegment104ZZZ.children[3] = HAnimSite109;

let HAnimSite110 = browser.currentScene.createNode("HAnimSite");
HAnimSite110.DEF = "hanim_l_humeral_medial_epicn_pt";
HAnimSite110.name = "l_humeral_medial_epicn_pt";
HAnimSite110.translation = new X3D.SFVec3f([0.1735,1.1272,-0.1113]);
HAnimSegment104ZZZ.children[4] = HAnimSite110;

let HAnimSite111 = browser.currentScene.createNode("HAnimSite");
HAnimSite111.DEF = "hanim_l_radiale_pt";
HAnimSite111.name = "l_radiale_pt";
HAnimSite111.translation = new X3D.SFVec3f([0.2182,1.1212,-0.1167]);
HAnimSegment104ZZZ.children[5] = HAnimSite111;

HAnimJoint103YYY.children = new X3D.MFNode();

HAnimJoint103ZZZ.children[0] = HAnimSegment104;

let HAnimJoint112 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint112.DEF = "hanim_l_wrist";
HAnimJoint112.name = "l_wrist";
HAnimJoint112.center = new X3D.SFVec3f([0.1984,0.8663,-0.0583]);
let HAnimSegment113 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment113.DEF = "hanim_l_hand";
HAnimSegment113.name = "l_hand";
let Transform114 = browser.currentScene.createNode("Transform");
Transform114.translation = new X3D.SFVec3f([0.1984,0.8663,-0.0583]);
let Shape115 = browser.currentScene.createNode("Shape");
Shape115.USE = "DiamondShape";
Transform114YYY.child = new X3D.undefined();

Transform114ZZZ.child[0] = Shape115;

HAnimSegment113YYY.children = new X3D.MFNode();

HAnimSegment113ZZZ.children[0] = Transform114;

let Transform116 = browser.currentScene.createNode("Transform");
Transform116.DEF = "l_hand_adjust";
Transform116.translation = new X3D.SFVec3f([0.1984,0.8663,-0.0583]);
Transform116.rotation = new X3D.SFRotation([-0.06361,-0.9967,0.04988,1.333]);
Transform116.center = new X3D.SFVec3f([0.213,0.811,-0.0338]);
HAnimSegment113ZZZ.children[1] = Transform116;

let HAnimSite117 = browser.currentScene.createNode("HAnimSite");
HAnimSite117.DEF = "hanim_l_hand_tip";
HAnimSite117.name = "l_hand_tip";
HAnimSite117.translation = new X3D.SFVec3f([0.208,0.6731,-0.0491]);
HAnimSegment113ZZZ.children[2] = HAnimSite117;

let HAnimSite118 = browser.currentScene.createNode("HAnimSite");
HAnimSite118.DEF = "hanim_l_metacarpal_pha2_pt";
HAnimSite118.name = "l_metacarpal_pha2_pt";
HAnimSite118.translation = new X3D.SFVec3f([0.2009,0.8139,-0.0237]);
HAnimSegment113ZZZ.children[3] = HAnimSite118;

let HAnimSite119 = browser.currentScene.createNode("HAnimSite");
HAnimSite119.DEF = "hanim_l_dactylion_pt";
HAnimSite119.name = "l_dactylion_pt";
HAnimSite119.translation = new X3D.SFVec3f([0.2056,0.6743,-0.0482]);
HAnimSegment113ZZZ.children[4] = HAnimSite119;

let HAnimSite120 = browser.currentScene.createNode("HAnimSite");
HAnimSite120.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite120.name = "l_ulnar_styloid_pt";
HAnimSite120.translation = new X3D.SFVec3f([-0.2142,0.8529,-0.0648]);
HAnimSegment113ZZZ.children[5] = HAnimSite120;

let HAnimSite121 = browser.currentScene.createNode("HAnimSite");
HAnimSite121.DEF = "hanim_l_metacarpal_pha5_pt";
HAnimSite121.name = "l_metacarpal_pha5_pt";
HAnimSite121.translation = new X3D.SFVec3f([0.1929,0.786,-0.1122]);
HAnimSegment113ZZZ.children[6] = HAnimSite121;

HAnimJoint112YYY.children = new X3D.MFNode();

HAnimJoint112ZZZ.children[0] = HAnimSegment113;

HAnimJoint103ZZZ.children[1] = HAnimJoint112;

HAnimJoint97ZZZ.children[1] = HAnimJoint103;

HAnimJoint95ZZZ.children[1] = HAnimJoint97;

let HAnimJoint122 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint122.DEF = "hanim_r_shoulder";
HAnimJoint122.name = "r_shoulder";
HAnimJoint122.center = new X3D.SFVec3f([-0.1907,1.4407,-0.0325]);
let HAnimSegment123 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment123.DEF = "hanim_r_upperarm";
HAnimSegment123.name = "r_upperarm";
let Transform124 = browser.currentScene.createNode("Transform");
Transform124.translation = new X3D.SFVec3f([-0.1907,1.4407,-0.0325]);
let Shape125 = browser.currentScene.createNode("Shape");
Shape125.USE = "DiamondShape";
Transform124YYY.child = new X3D.undefined();

Transform124ZZZ.child[0] = Shape125;

HAnimSegment123YYY.children = new X3D.MFNode();

HAnimSegment123ZZZ.children[0] = Transform124;

let Transform126 = browser.currentScene.createNode("Transform");
Transform126.DEF = "r_upperarm_adjust";
Transform126.translation = new X3D.SFVec3f([-0.1907,1.4407,-0.0325]);
Transform126.rotation = new X3D.SFRotation([1,0,0,0.0836]);
Transform126.center = new X3D.SFVec3f([-0.182,1.22,-0.047]);
HAnimSegment123ZZZ.children[1] = Transform126;

let HAnimSite127 = browser.currentScene.createNode("HAnimSite");
HAnimSite127.DEF = "hanim_r_humeral_lateral_epicn_pt";
HAnimSite127.name = "r_humeral_lateral_epicn_pt";
HAnimSite127.translation = new X3D.SFVec3f([-0.2224,1.1517,-0.1033]);
HAnimSegment123ZZZ.children[2] = HAnimSite127;

HAnimJoint122YYY.children = new X3D.MFNode();

HAnimJoint122ZZZ.children[0] = HAnimSegment123;

let HAnimJoint128 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint128.DEF = "hanim_r_elbow";
HAnimJoint128.name = "r_elbow";
HAnimJoint128.center = new X3D.SFVec3f([-0.1949,1.1388,-0.062]);
let HAnimSegment129 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment129.DEF = "hanim_r_forearm";
HAnimSegment129.name = "r_forearm";
let Transform130 = browser.currentScene.createNode("Transform");
Transform130.translation = new X3D.SFVec3f([-0.1949,1.1388,-0.062]);
let Shape131 = browser.currentScene.createNode("Shape");
Shape131.USE = "DiamondShape";
Transform130YYY.child = new X3D.undefined();

Transform130ZZZ.child[0] = Shape131;

HAnimSegment129YYY.children = new X3D.MFNode();

HAnimSegment129ZZZ.children[0] = Transform130;

let Transform132 = browser.currentScene.createNode("Transform");
Transform132.DEF = "r_forearm_adjust";
Transform132.translation = new X3D.SFVec3f([-0.1949,1.1388,-0.062]);
Transform132.rotation = new X3D.SFRotation([-1,0,0,0.1254]);
Transform132.center = new X3D.SFVec3f([-0.198,0.961,-0.0397]);
HAnimSegment129ZZZ.children[1] = Transform132;

let HAnimSite133 = browser.currentScene.createNode("HAnimSite");
HAnimSite133.DEF = "hanim_r_radial_styloid_pt";
HAnimSite133.name = "r_radial_styloid_pt";
HAnimSite133.translation = new X3D.SFVec3f([-0.1884,0.8676,-0.036]);
HAnimSegment129ZZZ.children[2] = HAnimSite133;

let HAnimSite134 = browser.currentScene.createNode("HAnimSite");
HAnimSite134.DEF = "hanim_r_olecranon_pt";
HAnimSite134.name = "r_olecranon_pt";
HAnimSite134.translation = new X3D.SFVec3f([-0.1907,1.1405,-0.1065]);
HAnimSegment129ZZZ.children[3] = HAnimSite134;

let HAnimSite135 = browser.currentScene.createNode("HAnimSite");
HAnimSite135.DEF = "hanim_r_humeral_medial_epicn_pt";
HAnimSite135.name = "r_humeral_medial_epicn_pt";
HAnimSite135.translation = new X3D.SFVec3f([-0.168,1.1298,-0.1062]);
HAnimSegment129ZZZ.children[4] = HAnimSite135;

let HAnimSite136 = browser.currentScene.createNode("HAnimSite");
HAnimSite136.DEF = "hanim_r_radiale_pt";
HAnimSite136.name = "r_radiale_pt";
HAnimSite136.translation = new X3D.SFVec3f([-0.213,1.1305,-0.1091]);
HAnimSegment129ZZZ.children[5] = HAnimSite136;

HAnimJoint128YYY.children = new X3D.MFNode();

HAnimJoint128ZZZ.children[0] = HAnimSegment129;

let HAnimJoint137 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint137.DEF = "hanim_r_wrist";
HAnimJoint137.name = "r_wrist";
HAnimJoint137.center = new X3D.SFVec3f([-0.1959,0.8694,-0.0521]);
let HAnimSegment138 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment138.DEF = "hanim_r_hand";
HAnimSegment138.name = "r_hand";
let Transform139 = browser.currentScene.createNode("Transform");
Transform139.translation = new X3D.SFVec3f([-0.1959,0.8694,-0.0521]);
let Shape140 = browser.currentScene.createNode("Shape");
Shape140.USE = "DiamondShape";
Transform139YYY.child = new X3D.undefined();

Transform139ZZZ.child[0] = Shape140;

HAnimSegment138YYY.children = new X3D.MFNode();

HAnimSegment138ZZZ.children[0] = Transform139;

let Transform141 = browser.currentScene.createNode("Transform");
Transform141.DEF = "r_hand_adjust";
Transform141.rotation = new X3D.SFRotation([-0.09024,0.994,-0.0624,1.216]);
Transform141.center = new X3D.SFVec3f([-0.217,0.811,-0.0338]);
HAnimSegment138ZZZ.children[1] = Transform141;

let HAnimSite142 = browser.currentScene.createNode("HAnimSite");
HAnimSite142.DEF = "hanim_r_hand_tip";
HAnimSite142.name = "r_hand_tip";
HAnimSite142.translation = new X3D.SFVec3f([-0.1969,0.6758,-0.0427]);
HAnimSegment138ZZZ.children[2] = HAnimSite142;

let HAnimSite143 = browser.currentScene.createNode("HAnimSite");
HAnimSite143.DEF = "hanim_r_metacarpal_pha2_pt";
HAnimSite143.name = "r_metacarpal_pha2_pt";
HAnimSite143.translation = new X3D.SFVec3f([-0.1977,0.8169,-0.0177]);
HAnimSegment138ZZZ.children[3] = HAnimSite143;

let HAnimSite144 = browser.currentScene.createNode("HAnimSite");
HAnimSite144.DEF = "hanim_r_dactylion_pt";
HAnimSite144.name = "r_dactylion_pt";
HAnimSite144.translation = new X3D.SFVec3f([-0.1941,0.6772,-0.0423]);
HAnimSegment138ZZZ.children[4] = HAnimSite144;

let HAnimSite145 = browser.currentScene.createNode("HAnimSite");
HAnimSite145.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite145.name = "r_ulnar_styloid_pt";
HAnimSite145.translation = new X3D.SFVec3f([-0.2117,0.8562,-0.0584]);
HAnimSegment138ZZZ.children[5] = HAnimSite145;

let HAnimSite146 = browser.currentScene.createNode("HAnimSite");
HAnimSite146.DEF = "hanim_r_metacarpal_pha5_pt";
HAnimSite146.name = "r_metacarpal_pha5_pt";
HAnimSite146.translation = new X3D.SFVec3f([-0.1929,0.789,-0.1064]);
HAnimSegment138ZZZ.children[6] = HAnimSite146;

HAnimJoint137YYY.children = new X3D.MFNode();

HAnimJoint137ZZZ.children[0] = HAnimSegment138;

HAnimJoint128ZZZ.children[1] = HAnimJoint137;

HAnimJoint122ZZZ.children[1] = HAnimJoint128;

HAnimJoint95ZZZ.children[2] = HAnimJoint122;

let HAnimJoint147 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint147.DEF = "hanim_vc4";
HAnimJoint147.name = "vc4";
HAnimJoint147.center = new X3D.SFVec3f([0,1.43,-0.0458]);
let HAnimSegment148 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment148.DEF = "hanim_c4";
HAnimSegment148.name = "c4";
HAnimJoint147YYY.children = new X3D.MFNode();

HAnimJoint147ZZZ.children[0] = HAnimSegment148;

HAnimJoint95ZZZ.children[3] = HAnimJoint147;

HAnimJoint36ZZZ.children[1] = HAnimJoint95;

let HAnimJoint149 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint149.DEF = "hanim_vl5";
HAnimJoint149.name = "vl5";
HAnimJoint149.center = new X3D.SFVec3f([0.0028,1.0568,-0.0776]);
let HAnimJoint150 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint150.DEF = "hanim_skullbase";
HAnimJoint150.name = "skullbase";
HAnimJoint150.center = new X3D.SFVec3f([0.0044,1.6209,0.0236]);
let HAnimSegment151 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment151.DEF = "hanim_skull";
HAnimSegment151.name = "skull";
let Transform152 = browser.currentScene.createNode("Transform");
Transform152.translation = new X3D.SFVec3f([0.0044,1.6209,0.0236]);
let Shape153 = browser.currentScene.createNode("Shape");
Shape153.USE = "DiamondShape";
Transform152YYY.child = new X3D.undefined();

Transform152ZZZ.child[0] = Shape153;

HAnimSegment151YYY.children = new X3D.MFNode();

HAnimSegment151ZZZ.children[0] = Transform152;

let HAnimSite154 = browser.currentScene.createNode("HAnimSite");
HAnimSite154.DEF = "hanim_skull_tip";
HAnimSite154.name = "skull_tip";
HAnimSite154.translation = new X3D.SFVec3f([0.005,1.7504,0.0055]);
HAnimSegment151ZZZ.children[1] = HAnimSite154;

let HAnimSite155 = browser.currentScene.createNode("HAnimSite");
HAnimSite155.DEF = "hanim_sellion_pt";
HAnimSite155.name = "sellion_pt";
HAnimSite155.translation = new X3D.SFVec3f([0.0058,1.6316,0.0852]);
HAnimSegment151ZZZ.children[2] = HAnimSite155;

let HAnimSite156 = browser.currentScene.createNode("HAnimSite");
HAnimSite156.DEF = "hanim_r_infraorbitale_pt";
HAnimSite156.name = "r_infraorbitale_pt";
HAnimSite156.translation = new X3D.SFVec3f([-0.0237,1.6171,0.0752]);
HAnimSegment151ZZZ.children[3] = HAnimSite156;

let HAnimSite157 = browser.currentScene.createNode("HAnimSite");
HAnimSite157.DEF = "hanim_l_infraorbitale_pt";
HAnimSite157.name = "l_infraorbitale_pt";
HAnimSite157.translation = new X3D.SFVec3f([0.0341,1.6171,0.0752]);
HAnimSegment151ZZZ.children[4] = HAnimSite157;

let HAnimSite158 = browser.currentScene.createNode("HAnimSite");
HAnimSite158.DEF = "hanim_supramenton_pt";
HAnimSite158.name = "supramenton_pt";
HAnimSite158.translation = new X3D.SFVec3f([0.0061,1.541,0.0805]);
HAnimSegment151ZZZ.children[5] = HAnimSite158;

let HAnimSite159 = browser.currentScene.createNode("HAnimSite");
HAnimSite159.DEF = "hanim_r_tragion_pt";
HAnimSite159.name = "r_tragion_pt";
HAnimSite159.translation = new X3D.SFVec3f([-0.0646,1.6347,0.0302]);
HAnimSegment151ZZZ.children[6] = HAnimSite159;

let HAnimSite160 = browser.currentScene.createNode("HAnimSite");
HAnimSite160.DEF = "hanim_r_gonion_pt";
HAnimSite160.name = "r_gonion_pt";
HAnimSite160.translation = new X3D.SFVec3f([-0.052,1.5529,0.0347]);
HAnimSegment151ZZZ.children[7] = HAnimSite160;

let HAnimSite161 = browser.currentScene.createNode("HAnimSite");
HAnimSite161.DEF = "hanim_l_tragion_pt";
HAnimSite161.name = "l_tragion_pt";
HAnimSite161.translation = new X3D.SFVec3f([0.0739,1.6348,0.0282]);
HAnimSegment151ZZZ.children[8] = HAnimSite161;

let HAnimSite162 = browser.currentScene.createNode("HAnimSite");
HAnimSite162.DEF = "hanim_l_gonion_pt";
HAnimSite162.name = "l_gonion_pt";
HAnimSite162.translation = new X3D.SFVec3f([0.0631,1.553,0.033]);
HAnimSegment151ZZZ.children[9] = HAnimSite162;

let HAnimSite163 = browser.currentScene.createNode("HAnimSite");
HAnimSite163.DEF = "hanim_nuchale_pt";
HAnimSite163.name = "nuchale_pt";
HAnimSite163.translation = new X3D.SFVec3f([0.0039,1.5972,-0.0796]);
HAnimSegment151ZZZ.children[10] = HAnimSite163;

HAnimJoint150YYY.children = new X3D.MFNode();

HAnimJoint150ZZZ.children[0] = HAnimSegment151;

HAnimJoint149YYY.children = new X3D.MFNode();

HAnimJoint149ZZZ.children[0] = HAnimJoint150;

HAnimJoint36ZZZ.children[2] = HAnimJoint149;

joints[1] = HAnimJoint36;

let HAnimJoint164 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint164.USE = "hanim_HumanoidRoot";
joints[2] = HAnimJoint164;

let HAnimJoint165 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint165.USE = "hanim_sacroiliac";
joints[3] = HAnimJoint165;

let HAnimJoint166 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint166.USE = "hanim_vl1";
joints[4] = HAnimJoint166;

let HAnimJoint167 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint167.USE = "hanim_vc4";
joints[5] = HAnimJoint167;

let HAnimJoint168 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint168.USE = "hanim_skullbase";
joints[6] = HAnimJoint168;

let HAnimJoint169 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint169.USE = "hanim_vl5";
joints[7] = HAnimJoint169;

let HAnimJoint170 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint170.USE = "hanim_l_ankle";
joints[8] = HAnimJoint170;

let HAnimJoint171 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint171.USE = "hanim_r_ankle";
joints[9] = HAnimJoint171;

let HAnimJoint172 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint172.USE = "hanim_l_elbow";
joints[10] = HAnimJoint172;

let HAnimJoint173 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint173.USE = "hanim_r_elbow";
joints[11] = HAnimJoint173;

let HAnimJoint174 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint174.USE = "hanim_l_hip";
joints[12] = HAnimJoint174;

let HAnimJoint175 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint175.USE = "hanim_r_hip";
joints[13] = HAnimJoint175;

let HAnimJoint176 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint176.USE = "hanim_l_knee";
joints[14] = HAnimJoint176;

let HAnimJoint177 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint177.USE = "hanim_r_knee";
joints[15] = HAnimJoint177;

let HAnimJoint178 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint178.USE = "hanim_l_midtarsal";
joints[16] = HAnimJoint178;

let HAnimJoint179 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint179.USE = "hanim_r_midtarsal";
joints[17] = HAnimJoint179;

let HAnimJoint180 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint180.USE = "hanim_l_shoulder";
joints[18] = HAnimJoint180;

let HAnimJoint181 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint181.USE = "hanim_r_shoulder";
joints[19] = HAnimJoint181;

let HAnimJoint182 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint182.USE = "hanim_l_wrist";
joints[20] = HAnimJoint182;

let HAnimJoint183 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint183.USE = "hanim_r_wrist";
joints[21] = HAnimJoint183;

let HAnimSegment184 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment184.USE = "hanim_pelvis";
segments[22] = HAnimSegment184;

let HAnimSegment185 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment185.USE = "hanim_l1";
segments[23] = HAnimSegment185;

let HAnimSegment186 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment186.USE = "hanim_c4";
segments[24] = HAnimSegment186;

let HAnimSegment187 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment187.USE = "hanim_skull";
segments[25] = HAnimSegment187;

let HAnimSegment188 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment188.USE = "hanim_l_calf";
segments[26] = HAnimSegment188;

let HAnimSegment189 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment189.USE = "hanim_r_calf";
segments[27] = HAnimSegment189;

let HAnimSegment190 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment190.USE = "hanim_l_forearm";
segments[28] = HAnimSegment190;

let HAnimSegment191 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment191.USE = "hanim_r_forearm";
segments[29] = HAnimSegment191;

let HAnimSegment192 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment192.USE = "hanim_l_hand";
segments[30] = HAnimSegment192;

let HAnimSegment193 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment193.USE = "hanim_r_hand";
segments[31] = HAnimSegment193;

let HAnimSegment194 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment194.USE = "hanim_l_hindfoot";
segments[32] = HAnimSegment194;

let HAnimSegment195 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment195.USE = "hanim_r_hindfoot";
segments[33] = HAnimSegment195;

let HAnimSegment196 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment196.USE = "hanim_l_middistal";
segments[34] = HAnimSegment196;

let HAnimSegment197 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment197.USE = "hanim_r_middistal";
segments[35] = HAnimSegment197;

let HAnimSegment198 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment198.USE = "hanim_l_thigh";
segments[36] = HAnimSegment198;

let HAnimSegment199 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment199.USE = "hanim_r_thigh";
segments[37] = HAnimSegment199;

let HAnimSegment200 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment200.USE = "hanim_l_upperarm";
segments[38] = HAnimSegment200;

let HAnimSegment201 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment201.USE = "hanim_r_upperarm";
segments[39] = HAnimSegment201;

let HAnimSite202 = browser.currentScene.createNode("HAnimSite");
HAnimSite202.USE = "hanim_skull_tip";
viewpoints[40] = HAnimSite202;

let HAnimSite203 = browser.currentScene.createNode("HAnimSite");
HAnimSite203.USE = "hanim_sellion_pt";
viewpoints[41] = HAnimSite203;

let HAnimSite204 = browser.currentScene.createNode("HAnimSite");
HAnimSite204.USE = "hanim_supramenton_pt";
viewpoints[42] = HAnimSite204;

let HAnimSite205 = browser.currentScene.createNode("HAnimSite");
HAnimSite205.USE = "hanim_nuchale_pt";
viewpoints[43] = HAnimSite205;

let HAnimSite206 = browser.currentScene.createNode("HAnimSite");
HAnimSite206.USE = "hanim_l_calcaneous_post_pt";
viewpoints[44] = HAnimSite206;

let HAnimSite207 = browser.currentScene.createNode("HAnimSite");
HAnimSite207.USE = "hanim_r_calcaneous_post_pt";
viewpoints[45] = HAnimSite207;

let HAnimSite208 = browser.currentScene.createNode("HAnimSite");
HAnimSite208.USE = "hanim_l_dactylion_pt";
viewpoints[46] = HAnimSite208;

let HAnimSite209 = browser.currentScene.createNode("HAnimSite");
HAnimSite209.USE = "hanim_r_dactylion_pt";
viewpoints[47] = HAnimSite209;

let HAnimSite210 = browser.currentScene.createNode("HAnimSite");
HAnimSite210.USE = "hanim_l_digit2_pt";
viewpoints[48] = HAnimSite210;

let HAnimSite211 = browser.currentScene.createNode("HAnimSite");
HAnimSite211.USE = "hanim_r_digit2_pt";
viewpoints[49] = HAnimSite211;

let HAnimSite212 = browser.currentScene.createNode("HAnimSite");
HAnimSite212.USE = "hanim_l_femoral_lateral_epicn_pt";
viewpoints[50] = HAnimSite212;

let HAnimSite213 = browser.currentScene.createNode("HAnimSite");
HAnimSite213.USE = "hanim_r_femoral_lateral_epicn_pt";
viewpoints[51] = HAnimSite213;

let HAnimSite214 = browser.currentScene.createNode("HAnimSite");
HAnimSite214.USE = "hanim_l_femoral_medial_epicn_pt";
viewpoints[52] = HAnimSite214;

let HAnimSite215 = browser.currentScene.createNode("HAnimSite");
HAnimSite215.USE = "hanim_r_femoral_medial_epicn_pt";
viewpoints[53] = HAnimSite215;

let HAnimSite216 = browser.currentScene.createNode("HAnimSite");
HAnimSite216.USE = "hanim_r_gonion_pt";
viewpoints[54] = HAnimSite216;

let HAnimSite217 = browser.currentScene.createNode("HAnimSite");
HAnimSite217.USE = "hanim_l_gonion_pt";
viewpoints[55] = HAnimSite217;

let HAnimSite218 = browser.currentScene.createNode("HAnimSite");
HAnimSite218.USE = "hanim_l_hand_tip";
viewpoints[56] = HAnimSite218;

let HAnimSite219 = browser.currentScene.createNode("HAnimSite");
HAnimSite219.USE = "hanim_r_hand_tip";
viewpoints[57] = HAnimSite219;

let HAnimSite220 = browser.currentScene.createNode("HAnimSite");
HAnimSite220.USE = "hanim_l_humeral_lateral_epicn_pt";
viewpoints[58] = HAnimSite220;

let HAnimSite221 = browser.currentScene.createNode("HAnimSite");
HAnimSite221.USE = "hanim_r_humeral_lateral_epicn_pt";
viewpoints[59] = HAnimSite221;

let HAnimSite222 = browser.currentScene.createNode("HAnimSite");
HAnimSite222.USE = "hanim_l_humeral_medial_epicn_pt";
viewpoints[60] = HAnimSite222;

let HAnimSite223 = browser.currentScene.createNode("HAnimSite");
HAnimSite223.USE = "hanim_r_humeral_medial_epicn_pt";
viewpoints[61] = HAnimSite223;

let HAnimSite224 = browser.currentScene.createNode("HAnimSite");
HAnimSite224.USE = "hanim_r_infraorbitale_pt";
viewpoints[62] = HAnimSite224;

let HAnimSite225 = browser.currentScene.createNode("HAnimSite");
HAnimSite225.USE = "hanim_l_infraorbitale_pt";
viewpoints[63] = HAnimSite225;

let HAnimSite226 = browser.currentScene.createNode("HAnimSite");
HAnimSite226.USE = "hanim_l_knee_crease_pt";
viewpoints[64] = HAnimSite226;

let HAnimSite227 = browser.currentScene.createNode("HAnimSite");
HAnimSite227.USE = "hanim_r_knee_crease_pt";
viewpoints[65] = HAnimSite227;

let HAnimSite228 = browser.currentScene.createNode("HAnimSite");
HAnimSite228.USE = "hanim_l_lateral_malleolus_pt";
viewpoints[66] = HAnimSite228;

let HAnimSite229 = browser.currentScene.createNode("HAnimSite");
HAnimSite229.USE = "hanim_r_lateral_malleolus_pt";
viewpoints[67] = HAnimSite229;

let HAnimSite230 = browser.currentScene.createNode("HAnimSite");
HAnimSite230.USE = "hanim_l_medial_malleolus_pt";
viewpoints[68] = HAnimSite230;

let HAnimSite231 = browser.currentScene.createNode("HAnimSite");
HAnimSite231.USE = "hanim_r_medial_malleolus_pt";
viewpoints[69] = HAnimSite231;

let HAnimSite232 = browser.currentScene.createNode("HAnimSite");
HAnimSite232.USE = "hanim_l_metacarpal_pha2_pt";
viewpoints[70] = HAnimSite232;

let HAnimSite233 = browser.currentScene.createNode("HAnimSite");
HAnimSite233.USE = "hanim_r_metacarpal_pha2_pt";
viewpoints[71] = HAnimSite233;

let HAnimSite234 = browser.currentScene.createNode("HAnimSite");
HAnimSite234.USE = "hanim_l_metacarpal_pha5_pt";
viewpoints[72] = HAnimSite234;

let HAnimSite235 = browser.currentScene.createNode("HAnimSite");
HAnimSite235.USE = "hanim_r_metacarpal_pha5_pt";
viewpoints[73] = HAnimSite235;

let HAnimSite236 = browser.currentScene.createNode("HAnimSite");
HAnimSite236.USE = "hanim_l_metatarsal_pha1_pt";
viewpoints[74] = HAnimSite236;

let HAnimSite237 = browser.currentScene.createNode("HAnimSite");
HAnimSite237.USE = "hanim_r_metatarsal_pha1_pt";
viewpoints[75] = HAnimSite237;

let HAnimSite238 = browser.currentScene.createNode("HAnimSite");
HAnimSite238.USE = "hanim_l_metatarsal_pha5_pt";
viewpoints[76] = HAnimSite238;

let HAnimSite239 = browser.currentScene.createNode("HAnimSite");
HAnimSite239.USE = "hanim_r_metatarsal_pha5_pt";
viewpoints[77] = HAnimSite239;

let HAnimSite240 = browser.currentScene.createNode("HAnimSite");
HAnimSite240.USE = "hanim_l_middistal_tip";
viewpoints[78] = HAnimSite240;

let HAnimSite241 = browser.currentScene.createNode("HAnimSite");
HAnimSite241.USE = "hanim_r_middistal_tip";
viewpoints[79] = HAnimSite241;

let HAnimSite242 = browser.currentScene.createNode("HAnimSite");
HAnimSite242.USE = "hanim_l_olecranon_pt";
viewpoints[80] = HAnimSite242;

let HAnimSite243 = browser.currentScene.createNode("HAnimSite");
HAnimSite243.USE = "hanim_r_olecranon_pt";
viewpoints[81] = HAnimSite243;

let HAnimSite244 = browser.currentScene.createNode("HAnimSite");
HAnimSite244.USE = "hanim_l_radial_styloid_pt";
viewpoints[82] = HAnimSite244;

let HAnimSite245 = browser.currentScene.createNode("HAnimSite");
HAnimSite245.USE = "hanim_r_radial_styloid_pt";
viewpoints[83] = HAnimSite245;

let HAnimSite246 = browser.currentScene.createNode("HAnimSite");
HAnimSite246.USE = "hanim_l_radiale_pt";
viewpoints[84] = HAnimSite246;

let HAnimSite247 = browser.currentScene.createNode("HAnimSite");
HAnimSite247.USE = "hanim_r_radiale_pt";
viewpoints[85] = HAnimSite247;

let HAnimSite248 = browser.currentScene.createNode("HAnimSite");
HAnimSite248.USE = "hanim_l_sphyrion_pt";
viewpoints[86] = HAnimSite248;

let HAnimSite249 = browser.currentScene.createNode("HAnimSite");
HAnimSite249.USE = "hanim_r_sphyrion_pt";
viewpoints[87] = HAnimSite249;

let HAnimSite250 = browser.currentScene.createNode("HAnimSite");
HAnimSite250.USE = "hanim_r_tragion_pt";
viewpoints[88] = HAnimSite250;

let HAnimSite251 = browser.currentScene.createNode("HAnimSite");
HAnimSite251.USE = "hanim_l_tragion_pt";
viewpoints[89] = HAnimSite251;

let HAnimSite252 = browser.currentScene.createNode("HAnimSite");
HAnimSite252.USE = "hanim_l_ulnar_styloid_pt";
viewpoints[90] = HAnimSite252;

let HAnimSite253 = browser.currentScene.createNode("HAnimSite");
HAnimSite253.USE = "hanim_r_ulnar_styloid_pt";
viewpoints[91] = HAnimSite253;

let HAnimSite254 = browser.currentScene.createNode("HAnimSite");
HAnimSite254.DEF = "hanim_DiamondManLOA_1_view";
HAnimSite254.name = "DiamondManLOA_1_view";
let Viewpoint255 = browser.currentScene.createNode("Viewpoint");
Viewpoint255.DEF = "InclinedView";
Viewpoint255.description = "Inclined View";
Viewpoint255.position = new X3D.SFVec3f([1.62,1.05,2.06]);
Viewpoint255.orientation = new X3D.SFRotation([-0.113,0.993,0.0347,0.671]);
HAnimSite254YYY.children = new X3D.MFNode();

HAnimSite254ZZZ.children[0] = Viewpoint255;

let Viewpoint256 = browser.currentScene.createNode("Viewpoint");
Viewpoint256.DEF = "FrontView";
Viewpoint256.description = "Front View";
Viewpoint256.position = new X3D.SFVec3f([0,0.854,2.57665]);
HAnimSite254ZZZ.children[1] = Viewpoint256;

let Viewpoint257 = browser.currentScene.createNode("Viewpoint");
Viewpoint257.DEF = "SideView";
Viewpoint257.description = "Side View";
Viewpoint257.position = new X3D.SFVec3f([2.5929,0.854,0]);
Viewpoint257.orientation = new X3D.SFRotation([0,1,0,1.57079]);
HAnimSite254ZZZ.children[2] = Viewpoint257;

let Viewpoint258 = browser.currentScene.createNode("Viewpoint");
Viewpoint258.DEF = "TopView";
Viewpoint258.description = "Top View";
Viewpoint258.position = new X3D.SFVec3f([0,3.4495,0]);
Viewpoint258.orientation = new X3D.SFRotation([1,0,0,-1.57079]);
HAnimSite254ZZZ.children[3] = Viewpoint258;

viewpoints[92] = HAnimSite254;

browser.currentScene.children[3] = HAnimHumanoid29;

}
main ();

const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("HAnim", 1));
scene.addMetaData("title", "DiamondManLOA1.x3d");
scene.addMetaData("description", "HAnim skeletal structure for Level of Action (LOA) one, with diamonds at the Joint centers, also includes HAnimSite feaature points. LOA-1 is typical low-end real-time 3D hierarchy.");
scene.addMetaData("creator", "Matthew T. Beitler");
scene.addMetaData("translator", "Joel S. Pawloski");
scene.addMetaData("created", "12 November 2001");
scene.addMetaData("modified", "Mon, 15 Sep 2025 05:18:46 GMT");
scene.addMetaData("Image", "images/BonesAllSkeletonFrontViewLOA1.png");
scene.addMetaData("Image", "humanoid_landmark_locations.gif");
scene.addMetaData("Image", "http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif");
scene.addMetaData("motto", "(a) "Diamonds are a girl's best friend." (b) "Gosh, it sure is chilly in here."");
scene.addMetaData("warning", "Still needs comments on CAESAR feature points inserted");
scene.addMetaData("reference", "HAnim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Two");
scene.addMetaData("reference", "http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa");
scene.addMetaData("reference", "http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1.wrl");
scene.addMetaData("reference", "http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1-diamond.wrl");
scene.addMetaData("reference", "http://ece.uwaterloo.ca/~HAnim");
scene.addMetaData("reference", "http://www.cis.upenn.edu/~badler/anthro/89-71.pdf");
scene.addMetaData("reference", "http://www.cis.upenn.edu/~badler/anthro/89-71.ps");
scene.addMetaData("reference", "http://www.cis.upenn.edu/~beitler");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA1.x3d");
scene.addMetaData("generator", "X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit");
await browser .loadComponents (scene);
let WorldInfo25 = browser.currentScene.createNode("WorldInfo");
WorldInfo25.title = "HANIM 1.1 Default Joint Centers, LOA1";
WorldInfo25.info = new X3D.MFString([new X3D.SFString("HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 1 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf")]);
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo25;

let NavigationInfo26 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo26.speed = 1.5;
browser.currentScene.children[1] = NavigationInfo26;

let Viewpoint27 = browser.currentScene.createNode("Viewpoint");
Viewpoint27.description = "Diamond Man, LOA 1";
Viewpoint27.position = new X3D.SFVec3f([0,1,3]);
Viewpoint27.centerOfRotation = new X3D.SFVec3f([0,1,0]);
browser.currentScene.children[2] = Viewpoint27;

let HAnimHumanoid28 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid28.DEF = "hanim_humanoid";
HAnimHumanoid28.name = "humanoid";
HAnimHumanoid28.loa = 1;
let MetadataSet29 = browser.currentScene.createNode("MetadataSet");
MetadataSet29.name = "HAnimHumanoid.info";
MetadataSet29.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
let MetadataString30 = browser.currentScene.createNode("MetadataString");
MetadataString30.name = "authorEmail";
MetadataSet29.value = new X3D.MFNode();

MetadataSet29XXX.value[0] = MetadataString30;

let MetadataString31 = browser.currentScene.createNode("MetadataString");
MetadataString31.name = "authorName";
value[1] = MetadataString31;

let MetadataString32 = browser.currentScene.createNode("MetadataString");
MetadataString32.name = "copyright";
value[2] = MetadataString32;

let MetadataString33 = browser.currentScene.createNode("MetadataString");
MetadataString33.name = "humanoidVersion";
value[3] = MetadataString33;

let MetadataString34 = browser.currentScene.createNode("MetadataString");
MetadataString34.name = "usageRestrictions";
value[4] = MetadataString34;

HAnimHumanoid28.metadata = new X3D.SFNode();

HAnimHumanoid28XXX.metadata[0] = MetadataSet29;

let HAnimJoint35 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint35.DEF = "hanim_humanoid_root";
HAnimJoint35.name = "humanoid_root";
HAnimJoint35.center = new X3D.SFVec3f([0,0.824,0.0277]);
let HAnimJoint36 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint36.DEF = "hanim_sacroiliac";
HAnimJoint36.name = "sacroiliac";
HAnimJoint36.center = new X3D.SFVec3f([0,0.9149,0.0016]);
let HAnimSegment37 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment37.DEF = "hanim_pelvis";
HAnimSegment37.name = "pelvis";
let Transform38 = browser.currentScene.createNode("Transform");
Transform38.translation = new X3D.SFVec3f([0,0.9149,0.0016]);
let Shape39 = browser.currentScene.createNode("Shape");
Shape39.DEF = "DiamondShape";
let Appearance40 = browser.currentScene.createNode("Appearance");
let Material41 = browser.currentScene.createNode("Material");
Material41.diffuseColor = new X3D.SFColor([1,1,0]);
material = Material41;

appearance = Appearance40;

let IndexedFaceSet42 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet42.creaseAngle = 0.5;
IndexedFaceSet42.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate43 = browser.currentScene.createNode("Coordinate");
Coordinate43.DEF = "points";
Coordinate43.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate43;

geometry = IndexedFaceSet42;

Transform38YYY.child = new X3D.undefined();

Transform38ZZZ.child[0] = Shape39;

HAnimSegment37YYY.children = new X3D.MFNode();

HAnimSegment37ZZZ.children[0] = Transform38;

HAnimJoint36YYY.children = new X3D.MFNode();

HAnimJoint36ZZZ.children[0] = HAnimSegment37;

let HAnimJoint44 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint44.DEF = "hanim_l_hip";
HAnimJoint44.name = "l_hip";
HAnimJoint44.center = new X3D.SFVec3f([0.0961,0.9124,-0.0001]);
let HAnimSegment45 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment45.DEF = "hanim_l_thigh";
HAnimSegment45.name = "l_thigh";
let Transform46 = browser.currentScene.createNode("Transform");
Transform46.translation = new X3D.SFVec3f([0.0961,0.9124,-0.0001]);
let Shape47 = browser.currentScene.createNode("Shape");
Shape47.USE = "DiamondShape";
Transform46YYY.child = new X3D.undefined();

Transform46ZZZ.child[0] = Shape47;

HAnimSegment45YYY.children = new X3D.MFNode();

HAnimSegment45ZZZ.children[0] = Transform46;

let HAnimSite48 = browser.currentScene.createNode("HAnimSite");
HAnimSite48.DEF = "hanim_l_knee_crease_pt";
HAnimSite48.name = "l_knee_crease_pt";
HAnimSite48.translation = new X3D.SFVec3f([0.0993,0.4881,-0.0309]);
HAnimSegment45ZZZ.children[1] = HAnimSite48;

let HAnimSite49 = browser.currentScene.createNode("HAnimSite");
HAnimSite49.DEF = "hanim_l_femoral_lateral_epicondyle_pt";
HAnimSite49.name = "l_femoral_lateral_epicondyle_pt";
HAnimSite49.translation = new X3D.SFVec3f([0.1598,0.4967,0.0297]);
HAnimSegment45ZZZ.children[2] = HAnimSite49;

let HAnimSite50 = browser.currentScene.createNode("HAnimSite");
HAnimSite50.DEF = "hanim_l_femoral_medial_epicondyle_pt";
HAnimSite50.name = "l_femoral_medial_epicondyle_pt";
HAnimSite50.translation = new X3D.SFVec3f([0.0398,0.4946,0.0303]);
HAnimSegment45ZZZ.children[3] = HAnimSite50;

HAnimJoint44YYY.children = new X3D.MFNode();

HAnimJoint44ZZZ.children[0] = HAnimSegment45;

let HAnimJoint51 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint51.DEF = "hanim_l_knee";
HAnimJoint51.name = "l_knee";
HAnimJoint51.center = new X3D.SFVec3f([0.104,0.4867,0.0308]);
let HAnimSegment52 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment52.DEF = "hanim_l_calf";
HAnimSegment52.name = "l_calf";
let Transform53 = browser.currentScene.createNode("Transform");
Transform53.translation = new X3D.SFVec3f([0.104,0.4867,0.0308]);
let Shape54 = browser.currentScene.createNode("Shape");
Shape54.USE = "DiamondShape";
Transform53YYY.child = new X3D.undefined();

Transform53ZZZ.child[0] = Shape54;

HAnimSegment52YYY.children = new X3D.MFNode();

HAnimSegment52ZZZ.children[0] = Transform53;

HAnimJoint51YYY.children = new X3D.MFNode();

HAnimJoint51ZZZ.children[0] = HAnimSegment52;

let HAnimJoint55 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint55.DEF = "hanim_l_talocrural";
HAnimJoint55.name = "l_talocrural";
HAnimJoint55.center = new X3D.SFVec3f([0.1101,0.0656,-0.0736]);
let HAnimSegment56 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment56.DEF = "hanim_l_talus";
HAnimSegment56.name = "l_talus";
let Transform57 = browser.currentScene.createNode("Transform");
Transform57.translation = new X3D.SFVec3f([0.1101,0.0656,-0.0736]);
let Shape58 = browser.currentScene.createNode("Shape");
Shape58.USE = "DiamondShape";
Transform57YYY.child = new X3D.undefined();

Transform57ZZZ.child[0] = Shape58;

HAnimSegment56YYY.children = new X3D.MFNode();

HAnimSegment56ZZZ.children[0] = Transform57;

let HAnimSite59 = browser.currentScene.createNode("HAnimSite");
HAnimSite59.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite59.name = "l_lateral_malleolus_pt";
HAnimSite59.translation = new X3D.SFVec3f([0.1308,0.0597,-0.1032]);
HAnimSegment56ZZZ.children[1] = HAnimSite59;

let HAnimSite60 = browser.currentScene.createNode("HAnimSite");
HAnimSite60.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite60.name = "l_medial_malleolus_pt";
HAnimSite60.translation = new X3D.SFVec3f([0.089,0.0716,-0.0881]);
HAnimSegment56ZZZ.children[2] = HAnimSite60;

let HAnimSite61 = browser.currentScene.createNode("HAnimSite");
HAnimSite61.DEF = "hanim_l_sphyrion_pt";
HAnimSite61.name = "l_sphyrion_pt";
HAnimSite61.translation = new X3D.SFVec3f([0.089,0.0575,-0.0943]);
HAnimSegment56ZZZ.children[3] = HAnimSite61;

let HAnimSite62 = browser.currentScene.createNode("HAnimSite");
HAnimSite62.DEF = "hanim_l_calcaneus_posterior_pt";
HAnimSite62.name = "l_calcaneus_posterior_pt";
HAnimSite62.translation = new X3D.SFVec3f([0.0974,0.0259,-0.1171]);
HAnimSegment56ZZZ.children[4] = HAnimSite62;

HAnimJoint55YYY.children = new X3D.MFNode();

HAnimJoint55ZZZ.children[0] = HAnimSegment56;

let HAnimJoint63 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint63.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint63.name = "l_metatarsophalangeal_2";
HAnimJoint63.center = new X3D.SFVec3f([0.1086,0.0001,0.0368]);
let HAnimSegment64 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment64.DEF = "hanim_l_tarsal_proximal_phalanx_2";
HAnimSegment64.name = "l_tarsal_proximal_phalanx_2";
let HAnimSite65 = browser.currentScene.createNode("HAnimSite");
HAnimSite65.DEF = "hanim_l_middistal_tip";
HAnimSite65.name = "l_middistal_tip";
HAnimSite65.translation = new X3D.SFVec3f([0.1354,0.0016,0.1476]);
HAnimSegment64YYY.children = new X3D.MFNode();

HAnimSegment64ZZZ.children[0] = HAnimSite65;

let HAnimSite66 = browser.currentScene.createNode("HAnimSite");
HAnimSite66.DEF = "hanim_l_metatarsal_phalanx_5_pt";
HAnimSite66.name = "l_metatarsal_phalanx_5_pt";
HAnimSite66.translation = new X3D.SFVec3f([0.1825,0.007,0.0928]);
HAnimSegment64ZZZ.children[1] = HAnimSite66;

let HAnimSite67 = browser.currentScene.createNode("HAnimSite");
HAnimSite67.DEF = "hanim_l_metatarsal_phalanx_1_pt";
HAnimSite67.name = "l_metatarsal_phalanx_1_pt";
HAnimSite67.translation = new X3D.SFVec3f([0.0816,0.0232,0.0106]);
HAnimSegment64ZZZ.children[2] = HAnimSite67;

let HAnimSite68 = browser.currentScene.createNode("HAnimSite");
HAnimSite68.DEF = "hanim_l_tarsal_distal_phalanx_2_pt";
HAnimSite68.name = "l_tarsal_distal_phalanx_2_pt";
HAnimSite68.translation = new X3D.SFVec3f([0.1195,0.0079,0.1433]);
HAnimSegment64ZZZ.children[3] = HAnimSite68;

HAnimJoint63YYY.children = new X3D.MFNode();

HAnimJoint63ZZZ.children[0] = HAnimSegment64;

HAnimJoint55ZZZ.children[1] = HAnimJoint63;

HAnimJoint51ZZZ.children[1] = HAnimJoint55;

HAnimJoint44ZZZ.children[1] = HAnimJoint51;

HAnimJoint36ZZZ.children[1] = HAnimJoint44;

let HAnimJoint69 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint69.DEF = "hanim_r_hip";
HAnimJoint69.name = "r_hip";
HAnimJoint69.center = new X3D.SFVec3f([-0.095,0.9171,0.0029]);
let HAnimSegment70 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment70.DEF = "hanim_r_thigh";
HAnimSegment70.name = "r_thigh";
let Transform71 = browser.currentScene.createNode("Transform");
Transform71.translation = new X3D.SFVec3f([-0.095,0.9171,0.0029]);
let Shape72 = browser.currentScene.createNode("Shape");
Shape72.USE = "DiamondShape";
Transform71YYY.child = new X3D.undefined();

Transform71ZZZ.child[0] = Shape72;

HAnimSegment70YYY.children = new X3D.MFNode();

HAnimSegment70ZZZ.children[0] = Transform71;

let HAnimSite73 = browser.currentScene.createNode("HAnimSite");
HAnimSite73.DEF = "hanim_r_knee_crease_pt";
HAnimSite73.name = "r_knee_crease_pt";
HAnimSite73.translation = new X3D.SFVec3f([-0.0825,0.4932,-0.0326]);
HAnimSegment70ZZZ.children[1] = HAnimSite73;

let HAnimSite74 = browser.currentScene.createNode("HAnimSite");
HAnimSite74.DEF = "hanim_r_femoral_lateral_epicondyle_pt";
HAnimSite74.name = "r_femoral_lateral_epicondyle_pt";
HAnimSite74.translation = new X3D.SFVec3f([-0.1421,0.4992,0.031]);
HAnimSegment70ZZZ.children[2] = HAnimSite74;

let HAnimSite75 = browser.currentScene.createNode("HAnimSite");
HAnimSite75.DEF = "hanim_r_femoral_medial_epicondyle_pt";
HAnimSite75.name = "r_femoral_medial_epicondyle_pt";
HAnimSite75.translation = new X3D.SFVec3f([-0.0221,0.5014,0.0289]);
HAnimSegment70ZZZ.children[3] = HAnimSite75;

HAnimJoint69YYY.children = new X3D.MFNode();

HAnimJoint69ZZZ.children[0] = HAnimSegment70;

let HAnimJoint76 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint76.DEF = "hanim_r_knee";
HAnimJoint76.name = "r_knee";
HAnimJoint76.center = new X3D.SFVec3f([-0.0867,0.4913,0.0318]);
let HAnimSegment77 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment77.DEF = "hanim_r_calf";
HAnimSegment77.name = "r_calf";
let Transform78 = browser.currentScene.createNode("Transform");
Transform78.translation = new X3D.SFVec3f([-0.0867,0.4913,0.0318]);
let Shape79 = browser.currentScene.createNode("Shape");
Shape79.USE = "DiamondShape";
Transform78YYY.child = new X3D.undefined();

Transform78ZZZ.child[0] = Shape79;

HAnimSegment77YYY.children = new X3D.MFNode();

HAnimSegment77ZZZ.children[0] = Transform78;

HAnimJoint76YYY.children = new X3D.MFNode();

HAnimJoint76ZZZ.children[0] = HAnimSegment77;

let HAnimJoint80 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint80.DEF = "hanim_r_talocrural";
HAnimJoint80.name = "r_talocrural";
HAnimJoint80.center = new X3D.SFVec3f([-0.0801,0.0712,-0.0766]);
let HAnimSegment81 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment81.DEF = "hanim_r_talus";
HAnimSegment81.name = "r_talus";
let Transform82 = browser.currentScene.createNode("Transform");
Transform82.translation = new X3D.SFVec3f([-0.0801,0.0712,-0.0766]);
let Shape83 = browser.currentScene.createNode("Shape");
Shape83.USE = "DiamondShape";
Transform82YYY.child = new X3D.undefined();

Transform82ZZZ.child[0] = Shape83;

HAnimSegment81YYY.children = new X3D.MFNode();

HAnimSegment81ZZZ.children[0] = Transform82;

let HAnimSite84 = browser.currentScene.createNode("HAnimSite");
HAnimSite84.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite84.name = "r_lateral_malleolus_pt";
HAnimSite84.translation = new X3D.SFVec3f([-0.1006,0.0658,-0.1075]);
HAnimSegment81ZZZ.children[1] = HAnimSite84;

let HAnimSite85 = browser.currentScene.createNode("HAnimSite");
HAnimSite85.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite85.name = "r_medial_malleolus_pt";
HAnimSite85.translation = new X3D.SFVec3f([-0.0591,0.076,-0.0928]);
HAnimSegment81ZZZ.children[2] = HAnimSite85;

let HAnimSite86 = browser.currentScene.createNode("HAnimSite");
HAnimSite86.DEF = "hanim_r_sphyrion_pt";
HAnimSite86.name = "r_sphyrion_pt";
HAnimSite86.translation = new X3D.SFVec3f([-0.0603,0.061,-0.1002]);
HAnimSegment81ZZZ.children[3] = HAnimSite86;

let HAnimSite87 = browser.currentScene.createNode("HAnimSite");
HAnimSite87.DEF = "hanim_r_calcaneus_posterior_pt";
HAnimSite87.name = "r_calcaneus_posterior_pt";
HAnimSite87.translation = new X3D.SFVec3f([-0.0692,0.0297,-0.1221]);
HAnimSegment81ZZZ.children[4] = HAnimSite87;

HAnimJoint80YYY.children = new X3D.MFNode();

HAnimJoint80ZZZ.children[0] = HAnimSegment81;

let HAnimJoint88 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint88.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint88.name = "r_metatarsophalangeal_2";
HAnimJoint88.center = new X3D.SFVec3f([-0.0801,0,0.0368]);
let HAnimSegment89 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment89.DEF = "hanim_r_tarsal_proximal_phalanx_2";
HAnimSegment89.name = "r_tarsal_proximal_phalanx_2";
let HAnimSite90 = browser.currentScene.createNode("HAnimSite");
HAnimSite90.DEF = "hanim_r_middistal_tip";
HAnimSite90.name = "r_middistal_tip";
HAnimSite90.translation = new X3D.SFVec3f([-0.1043,-0.0227,0.145]);
HAnimSegment89YYY.children = new X3D.MFNode();

HAnimSegment89ZZZ.children[0] = HAnimSite90;

let HAnimSite91 = browser.currentScene.createNode("HAnimSite");
HAnimSite91.DEF = "hanim_r_metatarsal_phalanx_5_pt";
HAnimSite91.name = "r_metatarsal_phalanx_5_pt";
HAnimSite91.translation = new X3D.SFVec3f([-0.1523,0.0166,0.0895]);
HAnimSegment89ZZZ.children[1] = HAnimSite91;

let HAnimSite92 = browser.currentScene.createNode("HAnimSite");
HAnimSite92.DEF = "hanim_r_metatarsal_phalanx_1_pt";
HAnimSite92.name = "r_metatarsal_phalanx_1_pt";
HAnimSite92.translation = new X3D.SFVec3f([-0.0521,0.026,0.0127]);
HAnimSegment89ZZZ.children[2] = HAnimSite92;

let HAnimSite93 = browser.currentScene.createNode("HAnimSite");
HAnimSite93.DEF = "hanim_r_tarsal_distal_phalanx_2_pt";
HAnimSite93.name = "r_tarsal_distal_phalanx_2_pt";
HAnimSite93.translation = new X3D.SFVec3f([-0.0883,0.0134,0.1383]);
HAnimSegment89ZZZ.children[3] = HAnimSite93;

HAnimJoint88YYY.children = new X3D.MFNode();

HAnimJoint88ZZZ.children[0] = HAnimSegment89;

HAnimJoint80ZZZ.children[1] = HAnimJoint88;

HAnimJoint76ZZZ.children[1] = HAnimJoint80;

HAnimJoint69ZZZ.children[1] = HAnimJoint76;

HAnimJoint36ZZZ.children[2] = HAnimJoint69;

HAnimJoint35YYY.children = new X3D.MFNode();

HAnimJoint35ZZZ.children[0] = HAnimJoint36;

let HAnimJoint94 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint94.DEF = "hanim_vl1";
HAnimJoint94.name = "vl1";
HAnimJoint94.center = new X3D.SFVec3f([-0.00405,1.07,-0.0275]);
let HAnimSegment95 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment95.DEF = "hanim_l1";
HAnimSegment95.name = "l1";
HAnimJoint94YYY.children = new X3D.MFNode();

HAnimJoint94ZZZ.children[0] = HAnimSegment95;

let HAnimJoint96 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint96.DEF = "hanim_l_shoulder";
HAnimJoint96.name = "l_shoulder";
HAnimJoint96.center = new X3D.SFVec3f([0.2029,1.4376,-0.0387]);
let HAnimSegment97 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment97.DEF = "hanim_l_upperarm";
HAnimSegment97.name = "l_upperarm";
let Transform98 = browser.currentScene.createNode("Transform");
Transform98.translation = new X3D.SFVec3f([0.2029,1.4376,-0.0387]);
let Shape99 = browser.currentScene.createNode("Shape");
Shape99.USE = "DiamondShape";
Transform98YYY.child = new X3D.undefined();

Transform98ZZZ.child[0] = Shape99;

HAnimSegment97YYY.children = new X3D.MFNode();

HAnimSegment97ZZZ.children[0] = Transform98;

let Transform100 = browser.currentScene.createNode("Transform");
Transform100.DEF = "l_upperarm_adjust";
Transform100.translation = new X3D.SFVec3f([0.2029,1.4376,-0.0387]);
Transform100.rotation = new X3D.SFRotation([1,0,0,0.119]);
Transform100.center = new X3D.SFVec3f([0.182,1.22,-0.047]);
HAnimSegment97ZZZ.children[1] = Transform100;

let HAnimSite101 = browser.currentScene.createNode("HAnimSite");
HAnimSite101.DEF = "hanim_l_humeral_lateral_epicondyle_pt";
HAnimSite101.name = "l_humeral_lateral_epicondyle_pt";
HAnimSite101.translation = new X3D.SFVec3f([0.228,1.1482,-0.11]);
HAnimSegment97ZZZ.children[2] = HAnimSite101;

HAnimJoint96YYY.children = new X3D.MFNode();

HAnimJoint96ZZZ.children[0] = HAnimSegment97;

let HAnimJoint102 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint102.DEF = "hanim_l_elbow";
HAnimJoint102.name = "l_elbow";
HAnimJoint102.center = new X3D.SFVec3f([0.2014,1.1357,-0.0682]);
let HAnimSegment103 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment103.DEF = "hanim_l_forearm";
HAnimSegment103.name = "l_forearm";
let Transform104 = browser.currentScene.createNode("Transform");
Transform104.translation = new X3D.SFVec3f([0.2014,1.1357,-0.0682]);
let Shape105 = browser.currentScene.createNode("Shape");
Shape105.USE = "DiamondShape";
Transform104YYY.child = new X3D.undefined();

Transform104ZZZ.child[0] = Shape105;

HAnimSegment103YYY.children = new X3D.MFNode();

HAnimSegment103ZZZ.children[0] = Transform104;

let Transform106 = browser.currentScene.createNode("Transform");
Transform106.DEF = "l_forearm_adjust";
Transform106.translation = new X3D.SFVec3f([0.2014,1.1357,-0.0682]);
Transform106.rotation = new X3D.SFRotation([-1,0,0,0.1]);
Transform106.center = new X3D.SFVec3f([0.198,0.961,-0.0405]);
HAnimSegment103ZZZ.children[1] = Transform106;

let HAnimSite107 = browser.currentScene.createNode("HAnimSite");
HAnimSite107.DEF = "hanim_l_radial_styloid_pt";
HAnimSite107.name = "l_radial_styloid_pt";
HAnimSite107.translation = new X3D.SFVec3f([0.1901,0.8645,-0.0415]);
HAnimSegment103ZZZ.children[2] = HAnimSite107;

let HAnimSite108 = browser.currentScene.createNode("HAnimSite");
HAnimSite108.DEF = "hanim_l_olecranon_pt";
HAnimSite108.name = "l_olecranon_pt";
HAnimSite108.translation = new X3D.SFVec3f([-0.1962,1.1375,-0.1123]);
HAnimSegment103ZZZ.children[3] = HAnimSite108;

let HAnimSite109 = browser.currentScene.createNode("HAnimSite");
HAnimSite109.DEF = "hanim_l_humeral_medial_epicondyle_pt";
HAnimSite109.name = "l_humeral_medial_epicondyle_pt";
HAnimSite109.translation = new X3D.SFVec3f([0.1735,1.1272,-0.1113]);
HAnimSegment103ZZZ.children[4] = HAnimSite109;

let HAnimSite110 = browser.currentScene.createNode("HAnimSite");
HAnimSite110.DEF = "hanim_l_radiale_pt";
HAnimSite110.name = "l_radiale_pt";
HAnimSite110.translation = new X3D.SFVec3f([0.2182,1.1212,-0.1167]);
HAnimSegment103ZZZ.children[5] = HAnimSite110;

HAnimJoint102YYY.children = new X3D.MFNode();

HAnimJoint102ZZZ.children[0] = HAnimSegment103;

let HAnimJoint111 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint111.DEF = "hanim_l_radiocarpal";
HAnimJoint111.name = "l_radiocarpal";
HAnimJoint111.center = new X3D.SFVec3f([0.1984,0.8663,-0.0583]);
let HAnimSegment112 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment112.DEF = "hanim_l_carpal";
HAnimSegment112.name = "l_carpal";
let Transform113 = browser.currentScene.createNode("Transform");
Transform113.translation = new X3D.SFVec3f([0.1984,0.8663,-0.0583]);
let Shape114 = browser.currentScene.createNode("Shape");
Shape114.USE = "DiamondShape";
Transform113YYY.child = new X3D.undefined();

Transform113ZZZ.child[0] = Shape114;

HAnimSegment112YYY.children = new X3D.MFNode();

HAnimSegment112ZZZ.children[0] = Transform113;

let Transform115 = browser.currentScene.createNode("Transform");
Transform115.DEF = "l_hand_adjust";
Transform115.translation = new X3D.SFVec3f([0.1984,0.8663,-0.0583]);
Transform115.rotation = new X3D.SFRotation([-0.06361,-0.9967,0.04988,1.333]);
Transform115.center = new X3D.SFVec3f([0.213,0.811,-0.0338]);
HAnimSegment112ZZZ.children[1] = Transform115;

let HAnimSite116 = browser.currentScene.createNode("HAnimSite");
HAnimSite116.DEF = "hanim_l_hand_tip";
HAnimSite116.name = "l_hand_tip";
HAnimSite116.translation = new X3D.SFVec3f([0.208,0.6731,-0.0491]);
HAnimSegment112ZZZ.children[2] = HAnimSite116;

let HAnimSite117 = browser.currentScene.createNode("HAnimSite");
HAnimSite117.DEF = "hanim_l_metacarpal_phalanx_2_pt";
HAnimSite117.name = "l_metacarpal_phalanx_2_pt";
HAnimSite117.translation = new X3D.SFVec3f([0.2009,0.8139,-0.0237]);
HAnimSegment112ZZZ.children[3] = HAnimSite117;

let HAnimSite118 = browser.currentScene.createNode("HAnimSite");
HAnimSite118.DEF = "hanim_l_dactylion_pt";
HAnimSite118.name = "l_dactylion_pt";
HAnimSite118.translation = new X3D.SFVec3f([0.2056,0.6743,-0.0482]);
HAnimSegment112ZZZ.children[4] = HAnimSite118;

let HAnimSite119 = browser.currentScene.createNode("HAnimSite");
HAnimSite119.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite119.name = "l_ulnar_styloid_pt";
HAnimSite119.translation = new X3D.SFVec3f([-0.2142,0.8529,-0.0648]);
HAnimSegment112ZZZ.children[5] = HAnimSite119;

let HAnimSite120 = browser.currentScene.createNode("HAnimSite");
HAnimSite120.DEF = "hanim_l_metacarpal_phalanx_5_pt";
HAnimSite120.name = "l_metacarpal_phalanx_5_pt";
HAnimSite120.translation = new X3D.SFVec3f([0.1929,0.786,-0.1122]);
HAnimSegment112ZZZ.children[6] = HAnimSite120;

HAnimJoint111YYY.children = new X3D.MFNode();

HAnimJoint111ZZZ.children[0] = HAnimSegment112;

HAnimJoint102ZZZ.children[1] = HAnimJoint111;

HAnimJoint96ZZZ.children[1] = HAnimJoint102;

HAnimJoint94ZZZ.children[1] = HAnimJoint96;

let HAnimJoint121 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint121.DEF = "hanim_r_shoulder";
HAnimJoint121.name = "r_shoulder";
HAnimJoint121.center = new X3D.SFVec3f([-0.1907,1.4407,-0.0325]);
let HAnimSegment122 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment122.DEF = "hanim_r_upperarm";
HAnimSegment122.name = "r_upperarm";
let Transform123 = browser.currentScene.createNode("Transform");
Transform123.translation = new X3D.SFVec3f([-0.1907,1.4407,-0.0325]);
let Shape124 = browser.currentScene.createNode("Shape");
Shape124.USE = "DiamondShape";
Transform123YYY.child = new X3D.undefined();

Transform123ZZZ.child[0] = Shape124;

HAnimSegment122YYY.children = new X3D.MFNode();

HAnimSegment122ZZZ.children[0] = Transform123;

let Transform125 = browser.currentScene.createNode("Transform");
Transform125.DEF = "r_upperarm_adjust";
Transform125.translation = new X3D.SFVec3f([-0.1907,1.4407,-0.0325]);
Transform125.rotation = new X3D.SFRotation([1,0,0,0.0836]);
Transform125.center = new X3D.SFVec3f([-0.182,1.22,-0.047]);
HAnimSegment122ZZZ.children[1] = Transform125;

let HAnimSite126 = browser.currentScene.createNode("HAnimSite");
HAnimSite126.DEF = "hanim_r_humeral_lateral_epicondyle_pt";
HAnimSite126.name = "r_humeral_lateral_epicondyle_pt";
HAnimSite126.translation = new X3D.SFVec3f([-0.2224,1.1517,-0.1033]);
HAnimSegment122ZZZ.children[2] = HAnimSite126;

HAnimJoint121YYY.children = new X3D.MFNode();

HAnimJoint121ZZZ.children[0] = HAnimSegment122;

let HAnimJoint127 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint127.DEF = "hanim_r_elbow";
HAnimJoint127.name = "r_elbow";
HAnimJoint127.center = new X3D.SFVec3f([-0.1949,1.1388,-0.062]);
let HAnimSegment128 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment128.DEF = "hanim_r_forearm";
HAnimSegment128.name = "r_forearm";
let Transform129 = browser.currentScene.createNode("Transform");
Transform129.translation = new X3D.SFVec3f([-0.1949,1.1388,-0.062]);
let Shape130 = browser.currentScene.createNode("Shape");
Shape130.USE = "DiamondShape";
Transform129YYY.child = new X3D.undefined();

Transform129ZZZ.child[0] = Shape130;

HAnimSegment128YYY.children = new X3D.MFNode();

HAnimSegment128ZZZ.children[0] = Transform129;

let Transform131 = browser.currentScene.createNode("Transform");
Transform131.DEF = "r_forearm_adjust";
Transform131.translation = new X3D.SFVec3f([-0.1949,1.1388,-0.062]);
Transform131.rotation = new X3D.SFRotation([-1,0,0,0.1254]);
Transform131.center = new X3D.SFVec3f([-0.198,0.961,-0.0397]);
HAnimSegment128ZZZ.children[1] = Transform131;

let HAnimSite132 = browser.currentScene.createNode("HAnimSite");
HAnimSite132.DEF = "hanim_r_radial_styloid_pt";
HAnimSite132.name = "r_radial_styloid_pt";
HAnimSite132.translation = new X3D.SFVec3f([-0.1884,0.8676,-0.036]);
HAnimSegment128ZZZ.children[2] = HAnimSite132;

let HAnimSite133 = browser.currentScene.createNode("HAnimSite");
HAnimSite133.DEF = "hanim_r_olecranon_pt";
HAnimSite133.name = "r_olecranon_pt";
HAnimSite133.translation = new X3D.SFVec3f([-0.1907,1.1405,-0.1065]);
HAnimSegment128ZZZ.children[3] = HAnimSite133;

let HAnimSite134 = browser.currentScene.createNode("HAnimSite");
HAnimSite134.DEF = "hanim_r_humeral_medial_epicondyle_pt";
HAnimSite134.name = "r_humeral_medial_epicondyle_pt";
HAnimSite134.translation = new X3D.SFVec3f([-0.168,1.1298,-0.1062]);
HAnimSegment128ZZZ.children[4] = HAnimSite134;

let HAnimSite135 = browser.currentScene.createNode("HAnimSite");
HAnimSite135.DEF = "hanim_r_radiale_pt";
HAnimSite135.name = "r_radiale_pt";
HAnimSite135.translation = new X3D.SFVec3f([-0.213,1.1305,-0.1091]);
HAnimSegment128ZZZ.children[5] = HAnimSite135;

HAnimJoint127YYY.children = new X3D.MFNode();

HAnimJoint127ZZZ.children[0] = HAnimSegment128;

let HAnimJoint136 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint136.DEF = "hanim_r_radiocarpal";
HAnimJoint136.name = "r_radiocarpal";
HAnimJoint136.center = new X3D.SFVec3f([-0.1959,0.8694,-0.0521]);
let HAnimSegment137 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment137.DEF = "hanim_r_carpal";
HAnimSegment137.name = "r_carpal";
let Transform138 = browser.currentScene.createNode("Transform");
Transform138.translation = new X3D.SFVec3f([-0.1959,0.8694,-0.0521]);
let Shape139 = browser.currentScene.createNode("Shape");
Shape139.USE = "DiamondShape";
Transform138YYY.child = new X3D.undefined();

Transform138ZZZ.child[0] = Shape139;

HAnimSegment137YYY.children = new X3D.MFNode();

HAnimSegment137ZZZ.children[0] = Transform138;

let Transform140 = browser.currentScene.createNode("Transform");
Transform140.DEF = "r_hand_adjust";
Transform140.rotation = new X3D.SFRotation([-0.09024,0.994,-0.0624,1.216]);
Transform140.center = new X3D.SFVec3f([-0.217,0.811,-0.0338]);
HAnimSegment137ZZZ.children[1] = Transform140;

let HAnimSite141 = browser.currentScene.createNode("HAnimSite");
HAnimSite141.DEF = "hanim_r_hand_tip";
HAnimSite141.name = "r_hand_tip";
HAnimSite141.translation = new X3D.SFVec3f([-0.1969,0.6758,-0.0427]);
HAnimSegment137ZZZ.children[2] = HAnimSite141;

let HAnimSite142 = browser.currentScene.createNode("HAnimSite");
HAnimSite142.DEF = "hanim_r_metacarpal_phalanx_2_pt";
HAnimSite142.name = "r_metacarpal_phalanx_2_pt";
HAnimSite142.translation = new X3D.SFVec3f([-0.1977,0.8169,-0.0177]);
HAnimSegment137ZZZ.children[3] = HAnimSite142;

let HAnimSite143 = browser.currentScene.createNode("HAnimSite");
HAnimSite143.DEF = "hanim_r_dactylion_pt";
HAnimSite143.name = "r_dactylion_pt";
HAnimSite143.translation = new X3D.SFVec3f([-0.1941,0.6772,-0.0423]);
HAnimSegment137ZZZ.children[4] = HAnimSite143;

let HAnimSite144 = browser.currentScene.createNode("HAnimSite");
HAnimSite144.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite144.name = "r_ulnar_styloid_pt";
HAnimSite144.translation = new X3D.SFVec3f([-0.2117,0.8562,-0.0584]);
HAnimSegment137ZZZ.children[5] = HAnimSite144;

let HAnimSite145 = browser.currentScene.createNode("HAnimSite");
HAnimSite145.DEF = "hanim_r_metacarpal_phalanx_5_pt";
HAnimSite145.name = "r_metacarpal_phalanx_5_pt";
HAnimSite145.translation = new X3D.SFVec3f([-0.1929,0.789,-0.1064]);
HAnimSegment137ZZZ.children[6] = HAnimSite145;

HAnimJoint136YYY.children = new X3D.MFNode();

HAnimJoint136ZZZ.children[0] = HAnimSegment137;

HAnimJoint127ZZZ.children[1] = HAnimJoint136;

HAnimJoint121ZZZ.children[1] = HAnimJoint127;

HAnimJoint94ZZZ.children[2] = HAnimJoint121;

let HAnimJoint146 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint146.DEF = "hanim_vc4";
HAnimJoint146.name = "vc4";
HAnimJoint146.center = new X3D.SFVec3f([0,1.43,-0.0458]);
let HAnimSegment147 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment147.DEF = "hanim_c4";
HAnimSegment147.name = "c4";
HAnimJoint146YYY.children = new X3D.MFNode();

HAnimJoint146ZZZ.children[0] = HAnimSegment147;

HAnimJoint94ZZZ.children[3] = HAnimJoint146;

HAnimJoint35ZZZ.children[1] = HAnimJoint94;

let HAnimJoint148 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint148.DEF = "hanim_vl5";
HAnimJoint148.name = "vl5";
HAnimJoint148.center = new X3D.SFVec3f([0.0028,1.0568,-0.0776]);
let HAnimJoint149 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint149.DEF = "hanim_skullbase";
HAnimJoint149.name = "skullbase";
HAnimJoint149.center = new X3D.SFVec3f([0.0044,1.6209,0.0236]);
let HAnimSegment150 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment150.DEF = "hanim_skull";
HAnimSegment150.name = "skull";
let Transform151 = browser.currentScene.createNode("Transform");
Transform151.translation = new X3D.SFVec3f([0.0044,1.6209,0.0236]);
let Shape152 = browser.currentScene.createNode("Shape");
Shape152.USE = "DiamondShape";
Transform151YYY.child = new X3D.undefined();

Transform151ZZZ.child[0] = Shape152;

HAnimSegment150YYY.children = new X3D.MFNode();

HAnimSegment150ZZZ.children[0] = Transform151;

let HAnimSite153 = browser.currentScene.createNode("HAnimSite");
HAnimSite153.DEF = "hanim_skull_vertex_tip";
HAnimSite153.name = "skull_vertex_tip";
HAnimSite153.translation = new X3D.SFVec3f([0.005,1.7504,0.0055]);
HAnimSegment150ZZZ.children[1] = HAnimSite153;

let HAnimSite154 = browser.currentScene.createNode("HAnimSite");
HAnimSite154.DEF = "hanim_sellion_pt";
HAnimSite154.name = "sellion_pt";
HAnimSite154.translation = new X3D.SFVec3f([0.0058,1.6316,0.0852]);
HAnimSegment150ZZZ.children[2] = HAnimSite154;

let HAnimSite155 = browser.currentScene.createNode("HAnimSite");
HAnimSite155.DEF = "hanim_r_infraorbitale_pt";
HAnimSite155.name = "r_infraorbitale_pt";
HAnimSite155.translation = new X3D.SFVec3f([-0.0237,1.6171,0.0752]);
HAnimSegment150ZZZ.children[3] = HAnimSite155;

let HAnimSite156 = browser.currentScene.createNode("HAnimSite");
HAnimSite156.DEF = "hanim_l_infraorbitale_pt";
HAnimSite156.name = "l_infraorbitale_pt";
HAnimSite156.translation = new X3D.SFVec3f([0.0341,1.6171,0.0752]);
HAnimSegment150ZZZ.children[4] = HAnimSite156;

let HAnimSite157 = browser.currentScene.createNode("HAnimSite");
HAnimSite157.DEF = "hanim_supramenton_pt";
HAnimSite157.name = "supramenton_pt";
HAnimSite157.translation = new X3D.SFVec3f([0.0061,1.541,0.0805]);
HAnimSegment150ZZZ.children[5] = HAnimSite157;

let HAnimSite158 = browser.currentScene.createNode("HAnimSite");
HAnimSite158.DEF = "hanim_r_tragion_pt";
HAnimSite158.name = "r_tragion_pt";
HAnimSite158.translation = new X3D.SFVec3f([-0.0646,1.6347,0.0302]);
HAnimSegment150ZZZ.children[6] = HAnimSite158;

let HAnimSite159 = browser.currentScene.createNode("HAnimSite");
HAnimSite159.DEF = "hanim_r_gonion_pt";
HAnimSite159.name = "r_gonion_pt";
HAnimSite159.translation = new X3D.SFVec3f([-0.052,1.5529,0.0347]);
HAnimSegment150ZZZ.children[7] = HAnimSite159;

let HAnimSite160 = browser.currentScene.createNode("HAnimSite");
HAnimSite160.DEF = "hanim_l_tragion_pt";
HAnimSite160.name = "l_tragion_pt";
HAnimSite160.translation = new X3D.SFVec3f([0.0739,1.6348,0.0282]);
HAnimSegment150ZZZ.children[8] = HAnimSite160;

let HAnimSite161 = browser.currentScene.createNode("HAnimSite");
HAnimSite161.DEF = "hanim_l_gonion_pt";
HAnimSite161.name = "l_gonion_pt";
HAnimSite161.translation = new X3D.SFVec3f([0.0631,1.553,0.033]);
HAnimSegment150ZZZ.children[9] = HAnimSite161;

let HAnimSite162 = browser.currentScene.createNode("HAnimSite");
HAnimSite162.DEF = "hanim_nuchale_pt";
HAnimSite162.name = "nuchale_pt";
HAnimSite162.translation = new X3D.SFVec3f([0.0039,1.5972,-0.0796]);
HAnimSegment150ZZZ.children[10] = HAnimSite162;

HAnimJoint149YYY.children = new X3D.MFNode();

HAnimJoint149ZZZ.children[0] = HAnimSegment150;

HAnimJoint148YYY.children = new X3D.MFNode();

HAnimJoint148ZZZ.children[0] = HAnimJoint149;

HAnimJoint35ZZZ.children[2] = HAnimJoint148;

joints[1] = HAnimJoint35;

let HAnimJoint163 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint163.USE = "hanim_humanoid_root";
joints[2] = HAnimJoint163;

let HAnimJoint164 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint164.USE = "hanim_sacroiliac";
joints[3] = HAnimJoint164;

let HAnimJoint165 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint165.USE = "hanim_vl1";
joints[4] = HAnimJoint165;

let HAnimJoint166 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint166.USE = "hanim_vc4";
joints[5] = HAnimJoint166;

let HAnimJoint167 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint167.USE = "hanim_skullbase";
joints[6] = HAnimJoint167;

let HAnimJoint168 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint168.USE = "hanim_vl5";
joints[7] = HAnimJoint168;

let HAnimJoint169 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint169.USE = "hanim_l_elbow";
joints[8] = HAnimJoint169;

let HAnimJoint170 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint170.USE = "hanim_r_elbow";
joints[9] = HAnimJoint170;

let HAnimJoint171 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint171.USE = "hanim_l_hip";
joints[10] = HAnimJoint171;

let HAnimJoint172 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint172.USE = "hanim_r_hip";
joints[11] = HAnimJoint172;

let HAnimJoint173 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint173.USE = "hanim_l_knee";
joints[12] = HAnimJoint173;

let HAnimJoint174 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint174.USE = "hanim_r_knee";
joints[13] = HAnimJoint174;

let HAnimJoint175 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint175.USE = "hanim_l_metatarsophalangeal_2";
joints[14] = HAnimJoint175;

let HAnimJoint176 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint176.USE = "hanim_r_metatarsophalangeal_2";
joints[15] = HAnimJoint176;

let HAnimJoint177 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint177.USE = "hanim_l_radiocarpal";
joints[16] = HAnimJoint177;

let HAnimJoint178 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint178.USE = "hanim_r_radiocarpal";
joints[17] = HAnimJoint178;

let HAnimJoint179 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint179.USE = "hanim_l_shoulder";
joints[18] = HAnimJoint179;

let HAnimJoint180 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint180.USE = "hanim_r_shoulder";
joints[19] = HAnimJoint180;

let HAnimJoint181 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint181.USE = "hanim_l_talocrural";
joints[20] = HAnimJoint181;

let HAnimJoint182 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint182.USE = "hanim_r_talocrural";
joints[21] = HAnimJoint182;

let HAnimSegment183 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment183.USE = "hanim_pelvis";
segments[22] = HAnimSegment183;

let HAnimSegment184 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment184.USE = "hanim_l1";
segments[23] = HAnimSegment184;

let HAnimSegment185 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment185.USE = "hanim_c4";
segments[24] = HAnimSegment185;

let HAnimSegment186 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment186.USE = "hanim_skull";
segments[25] = HAnimSegment186;

let HAnimSegment187 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment187.USE = "hanim_l_calf";
segments[26] = HAnimSegment187;

let HAnimSegment188 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment188.USE = "hanim_r_calf";
segments[27] = HAnimSegment188;

let HAnimSegment189 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment189.USE = "hanim_l_carpal";
segments[28] = HAnimSegment189;

let HAnimSegment190 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment190.USE = "hanim_r_carpal";
segments[29] = HAnimSegment190;

let HAnimSegment191 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment191.USE = "hanim_l_forearm";
segments[30] = HAnimSegment191;

let HAnimSegment192 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment192.USE = "hanim_r_forearm";
segments[31] = HAnimSegment192;

let HAnimSegment193 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment193.USE = "hanim_l_talus";
segments[32] = HAnimSegment193;

let HAnimSegment194 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment194.USE = "hanim_r_talus";
segments[33] = HAnimSegment194;

let HAnimSegment195 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment195.USE = "hanim_l_tarsal_proximal_phalanx_2";
segments[34] = HAnimSegment195;

let HAnimSegment196 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment196.USE = "hanim_r_tarsal_proximal_phalanx_2";
segments[35] = HAnimSegment196;

let HAnimSegment197 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment197.USE = "hanim_l_thigh";
segments[36] = HAnimSegment197;

let HAnimSegment198 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment198.USE = "hanim_r_thigh";
segments[37] = HAnimSegment198;

let HAnimSegment199 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment199.USE = "hanim_l_upperarm";
segments[38] = HAnimSegment199;

let HAnimSegment200 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment200.USE = "hanim_r_upperarm";
segments[39] = HAnimSegment200;

let HAnimSite201 = browser.currentScene.createNode("HAnimSite");
HAnimSite201.USE = "hanim_skull_vertex_tip";
viewpoints[40] = HAnimSite201;

let HAnimSite202 = browser.currentScene.createNode("HAnimSite");
HAnimSite202.USE = "hanim_sellion_pt";
viewpoints[41] = HAnimSite202;

let HAnimSite203 = browser.currentScene.createNode("HAnimSite");
HAnimSite203.USE = "hanim_supramenton_pt";
viewpoints[42] = HAnimSite203;

let HAnimSite204 = browser.currentScene.createNode("HAnimSite");
HAnimSite204.USE = "hanim_nuchale_pt";
viewpoints[43] = HAnimSite204;

let HAnimSite205 = browser.currentScene.createNode("HAnimSite");
HAnimSite205.USE = "hanim_l_calcaneus_posterior_pt";
viewpoints[44] = HAnimSite205;

let HAnimSite206 = browser.currentScene.createNode("HAnimSite");
HAnimSite206.USE = "hanim_r_calcaneus_posterior_pt";
viewpoints[45] = HAnimSite206;

let HAnimSite207 = browser.currentScene.createNode("HAnimSite");
HAnimSite207.USE = "hanim_l_dactylion_pt";
viewpoints[46] = HAnimSite207;

let HAnimSite208 = browser.currentScene.createNode("HAnimSite");
HAnimSite208.USE = "hanim_r_dactylion_pt";
viewpoints[47] = HAnimSite208;

let HAnimSite209 = browser.currentScene.createNode("HAnimSite");
HAnimSite209.USE = "hanim_l_femoral_lateral_epicondyle_pt";
viewpoints[48] = HAnimSite209;

let HAnimSite210 = browser.currentScene.createNode("HAnimSite");
HAnimSite210.USE = "hanim_r_femoral_lateral_epicondyle_pt";
viewpoints[49] = HAnimSite210;

let HAnimSite211 = browser.currentScene.createNode("HAnimSite");
HAnimSite211.USE = "hanim_l_femoral_medial_epicondyle_pt";
viewpoints[50] = HAnimSite211;

let HAnimSite212 = browser.currentScene.createNode("HAnimSite");
HAnimSite212.USE = "hanim_r_femoral_medial_epicondyle_pt";
viewpoints[51] = HAnimSite212;

let HAnimSite213 = browser.currentScene.createNode("HAnimSite");
HAnimSite213.USE = "hanim_r_gonion_pt";
viewpoints[52] = HAnimSite213;

let HAnimSite214 = browser.currentScene.createNode("HAnimSite");
HAnimSite214.USE = "hanim_l_gonion_pt";
viewpoints[53] = HAnimSite214;

let HAnimSite215 = browser.currentScene.createNode("HAnimSite");
HAnimSite215.USE = "hanim_l_hand_tip";
viewpoints[54] = HAnimSite215;

let HAnimSite216 = browser.currentScene.createNode("HAnimSite");
HAnimSite216.USE = "hanim_r_hand_tip";
viewpoints[55] = HAnimSite216;

let HAnimSite217 = browser.currentScene.createNode("HAnimSite");
HAnimSite217.USE = "hanim_l_humeral_lateral_epicondyle_pt";
viewpoints[56] = HAnimSite217;

let HAnimSite218 = browser.currentScene.createNode("HAnimSite");
HAnimSite218.USE = "hanim_r_humeral_lateral_epicondyle_pt";
viewpoints[57] = HAnimSite218;

let HAnimSite219 = browser.currentScene.createNode("HAnimSite");
HAnimSite219.USE = "hanim_l_humeral_medial_epicondyle_pt";
viewpoints[58] = HAnimSite219;

let HAnimSite220 = browser.currentScene.createNode("HAnimSite");
HAnimSite220.USE = "hanim_r_humeral_medial_epicondyle_pt";
viewpoints[59] = HAnimSite220;

let HAnimSite221 = browser.currentScene.createNode("HAnimSite");
HAnimSite221.USE = "hanim_r_infraorbitale_pt";
viewpoints[60] = HAnimSite221;

let HAnimSite222 = browser.currentScene.createNode("HAnimSite");
HAnimSite222.USE = "hanim_l_infraorbitale_pt";
viewpoints[61] = HAnimSite222;

let HAnimSite223 = browser.currentScene.createNode("HAnimSite");
HAnimSite223.USE = "hanim_l_knee_crease_pt";
viewpoints[62] = HAnimSite223;

let HAnimSite224 = browser.currentScene.createNode("HAnimSite");
HAnimSite224.USE = "hanim_r_knee_crease_pt";
viewpoints[63] = HAnimSite224;

let HAnimSite225 = browser.currentScene.createNode("HAnimSite");
HAnimSite225.USE = "hanim_l_lateral_malleolus_pt";
viewpoints[64] = HAnimSite225;

let HAnimSite226 = browser.currentScene.createNode("HAnimSite");
HAnimSite226.USE = "hanim_r_lateral_malleolus_pt";
viewpoints[65] = HAnimSite226;

let HAnimSite227 = browser.currentScene.createNode("HAnimSite");
HAnimSite227.USE = "hanim_l_medial_malleolus_pt";
viewpoints[66] = HAnimSite227;

let HAnimSite228 = browser.currentScene.createNode("HAnimSite");
HAnimSite228.USE = "hanim_r_medial_malleolus_pt";
viewpoints[67] = HAnimSite228;

let HAnimSite229 = browser.currentScene.createNode("HAnimSite");
HAnimSite229.USE = "hanim_l_metacarpal_phalanx_2_pt";
viewpoints[68] = HAnimSite229;

let HAnimSite230 = browser.currentScene.createNode("HAnimSite");
HAnimSite230.USE = "hanim_r_metacarpal_phalanx_2_pt";
viewpoints[69] = HAnimSite230;

let HAnimSite231 = browser.currentScene.createNode("HAnimSite");
HAnimSite231.USE = "hanim_l_metacarpal_phalanx_5_pt";
viewpoints[70] = HAnimSite231;

let HAnimSite232 = browser.currentScene.createNode("HAnimSite");
HAnimSite232.USE = "hanim_r_metacarpal_phalanx_5_pt";
viewpoints[71] = HAnimSite232;

let HAnimSite233 = browser.currentScene.createNode("HAnimSite");
HAnimSite233.USE = "hanim_l_metatarsal_phalanx_1_pt";
viewpoints[72] = HAnimSite233;

let HAnimSite234 = browser.currentScene.createNode("HAnimSite");
HAnimSite234.USE = "hanim_r_metatarsal_phalanx_1_pt";
viewpoints[73] = HAnimSite234;

let HAnimSite235 = browser.currentScene.createNode("HAnimSite");
HAnimSite235.USE = "hanim_l_metatarsal_phalanx_5_pt";
viewpoints[74] = HAnimSite235;

let HAnimSite236 = browser.currentScene.createNode("HAnimSite");
HAnimSite236.USE = "hanim_r_metatarsal_phalanx_5_pt";
viewpoints[75] = HAnimSite236;

let HAnimSite237 = browser.currentScene.createNode("HAnimSite");
HAnimSite237.USE = "hanim_l_middistal_tip";
viewpoints[76] = HAnimSite237;

let HAnimSite238 = browser.currentScene.createNode("HAnimSite");
HAnimSite238.USE = "hanim_r_middistal_tip";
viewpoints[77] = HAnimSite238;

let HAnimSite239 = browser.currentScene.createNode("HAnimSite");
HAnimSite239.USE = "hanim_l_olecranon_pt";
viewpoints[78] = HAnimSite239;

let HAnimSite240 = browser.currentScene.createNode("HAnimSite");
HAnimSite240.USE = "hanim_r_olecranon_pt";
viewpoints[79] = HAnimSite240;

let HAnimSite241 = browser.currentScene.createNode("HAnimSite");
HAnimSite241.USE = "hanim_l_radial_styloid_pt";
viewpoints[80] = HAnimSite241;

let HAnimSite242 = browser.currentScene.createNode("HAnimSite");
HAnimSite242.USE = "hanim_r_radial_styloid_pt";
viewpoints[81] = HAnimSite242;

let HAnimSite243 = browser.currentScene.createNode("HAnimSite");
HAnimSite243.USE = "hanim_l_radiale_pt";
viewpoints[82] = HAnimSite243;

let HAnimSite244 = browser.currentScene.createNode("HAnimSite");
HAnimSite244.USE = "hanim_r_radiale_pt";
viewpoints[83] = HAnimSite244;

let HAnimSite245 = browser.currentScene.createNode("HAnimSite");
HAnimSite245.USE = "hanim_l_sphyrion_pt";
viewpoints[84] = HAnimSite245;

let HAnimSite246 = browser.currentScene.createNode("HAnimSite");
HAnimSite246.USE = "hanim_r_sphyrion_pt";
viewpoints[85] = HAnimSite246;

let HAnimSite247 = browser.currentScene.createNode("HAnimSite");
HAnimSite247.USE = "hanim_l_tarsal_distal_phalanx_2_pt";
viewpoints[86] = HAnimSite247;

let HAnimSite248 = browser.currentScene.createNode("HAnimSite");
HAnimSite248.USE = "hanim_r_tarsal_distal_phalanx_2_pt";
viewpoints[87] = HAnimSite248;

let HAnimSite249 = browser.currentScene.createNode("HAnimSite");
HAnimSite249.USE = "hanim_r_tragion_pt";
viewpoints[88] = HAnimSite249;

let HAnimSite250 = browser.currentScene.createNode("HAnimSite");
HAnimSite250.USE = "hanim_l_tragion_pt";
viewpoints[89] = HAnimSite250;

let HAnimSite251 = browser.currentScene.createNode("HAnimSite");
HAnimSite251.USE = "hanim_l_ulnar_styloid_pt";
viewpoints[90] = HAnimSite251;

let HAnimSite252 = browser.currentScene.createNode("HAnimSite");
HAnimSite252.USE = "hanim_r_ulnar_styloid_pt";
viewpoints[91] = HAnimSite252;

let HAnimSite253 = browser.currentScene.createNode("HAnimSite");
HAnimSite253.DEF = "hanim_DiamondManLOA1_view";
HAnimSite253.name = "DiamondManLOA1_view";
let Viewpoint254 = browser.currentScene.createNode("Viewpoint");
Viewpoint254.DEF = "InclinedView";
Viewpoint254.description = "Inclined View";
Viewpoint254.position = new X3D.SFVec3f([1.62,1.05,2.06]);
Viewpoint254.orientation = new X3D.SFRotation([-0.113,0.993,0.0347,0.671]);
HAnimSite253YYY.children = new X3D.MFNode();

HAnimSite253ZZZ.children[0] = Viewpoint254;

let Viewpoint255 = browser.currentScene.createNode("Viewpoint");
Viewpoint255.DEF = "FrontView";
Viewpoint255.description = "Front View";
Viewpoint255.position = new X3D.SFVec3f([0,0.854,2.57665]);
HAnimSite253ZZZ.children[1] = Viewpoint255;

let Viewpoint256 = browser.currentScene.createNode("Viewpoint");
Viewpoint256.DEF = "SideView";
Viewpoint256.description = "Side View";
Viewpoint256.position = new X3D.SFVec3f([2.5929,0.854,0]);
Viewpoint256.orientation = new X3D.SFRotation([0,1,0,1.57079]);
HAnimSite253ZZZ.children[2] = Viewpoint256;

let Viewpoint257 = browser.currentScene.createNode("Viewpoint");
Viewpoint257.DEF = "TopView";
Viewpoint257.description = "Top View";
Viewpoint257.position = new X3D.SFVec3f([0,3.4495,0]);
Viewpoint257.orientation = new X3D.SFRotation([1,0,0,-1.57079]);
HAnimSite253ZZZ.children[3] = Viewpoint257;

viewpoints[92] = HAnimSite253;

browser.currentScene.children[3] = HAnimHumanoid28;

}
main ();
